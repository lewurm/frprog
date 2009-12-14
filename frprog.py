#!/usr/bin/env python
import sys, time
from SerialPort_linux import *

# serial device to communicate with
DEVICE="/dev/ttyUSB0"
# baudrate used for initialization
INIT_BAUDRATE=9600
# baudrate used for communication after init
REAL_BAUDRATE=38400

# contains the last received checksum from a READ, WRITE or CHECKSUM command
last_checksum = 0

def sendByte(byte):
	time.sleep(0.001) # just to get sure, wait 1ms
	tty.write(chr(byte))

def sendWord(word):
	sendByte(word & 0xFF)
	sendByte((word >> 8) & 0xFF)

def sendDWord(dword):
	sendByte(dword & 0xFF)
	sendByte((dword >> 8) & 0xFF)
	sendByte((dword >> 16) & 0xFF)
	sendByte((dword >> 24) & 0xFF)

def recvByte():
	return ord(tty.read())

def recvChecksum():
	global last_checksum
	last_checksum = recvByte()
	last_checksum |= (recvByte() << 8)

def cmdREAD(address, size):
	# send READ command
	sendByte(0x01)
	if (recvByte() != 0xF1):
		raise Exception
	sendByte(0x02)
	if (recvByte() != 0x82):
		raise Exception
	# tell desired address and size
	sendDWord(address)
	sendWord(size)
	# get binary stream of data
	data = []
	for i in range(0, size):
		data.append(recvByte())
	# get checksum
	recvChecksum()
	return data

def cmdWRITE(address, size, data):
	# send WRITE command
	sendByte(0x01)
	if (recvByte() != 0xF1):
		raise Exception
	sendByte(0x03)
	if (recvByte() != 0x83):
		raise Exception
	# tell desired address and size
	sendDWord(address)
	sendWord(size)
	# write binary stream of data
	for i in range(0, size):
		sendByte(data[i])
	# get checksum
	recvChecksum()

# TODO: test this function!
def cmdCALL(address):
	# send CALL command
	sendByte(0x01)
	if (recvByte() != 0xF1):
		raise Exception
	sendByte(0x04)
	if (recvByte() != 0x84):
		raise Exception
	# tell desired address
	sendDWord(address)
	# wait for return parameter - not needed here!
	#return recvByte()

# TODO: test this function!
def cmdCHECKSUM():
	# call CHECKSUM command
	sendByte(0x01)
	if (recvByte() != 0xF1):
		raise Exception
	sendByte(0x05)
	if (recvByte() != 0x84):
		raise Exception
	# get checksum
	recvChecksum()

def cmdBAUDRATE(baudrate):
	global last_checksum

	# send BAUDRATE command
	sendByte(0x01)
	if (recvByte() != 0xF1):
		raise Exception
	sendByte(0x06)
	if (recvByte() != 0x86):
		raise Exception
	# send desired baudrate
	sendByte(baudrate & 0xFF)
	sendByte((baudrate >> 8) & 0xFF)
	sendByte((baudrate >> 16) & 0xFF)
	sendByte((baudrate >> 24) & 0xFF)

class FlashSequence(object):
	def __init__(self, address, data):
		self.address = address
		self.data = data

# list of all our address/data pairs to flash
flashseqs = []

# check command line arguments
if len(sys.argv) != 2:
	print "Usage: " + sys.argv[0] + " [mhx-file]"
	sys.exit(1)

# read in data from mhx-file before starting
try:
	fp = open(sys.argv[1], "r")
except IOError:
	print sys.argv[0] + ": Error - couldn't open file " + sys.argv[1] + "!"
	sys.exit(1)

linecount = 0
for line in fp:
	linecount += 1
	# get rid of newline characters
	line = line.strip()

	# we're only interested in S2 (data sequence with 3 address bytes) records by now
	if line[0:2] == "S2":
		byte_count = int(line[2:4], 16)
		# just to get sure, check if byte count field is valid
		if (len(line)-4) != (byte_count*2):
			print sys.argv[0] + ": Warning - inavlid byte count field in " + \
				sys.argv[1] + ":" + str(linecount) + ", skipping line!"
			continue

		# address and checksum bytes are not needed
		byte_count -= 4
		address = int(line[4:10], 16)
		datastr = line[10:10+byte_count*2]

		# convert data hex-byte-string to real byte data list
		data = []
		for i in range(0, len(datastr)/2):
			data.append(int(datastr[2*i:2*i+2], 16))

		# add flash sequence to our list
		flashseqs.append(FlashSequence(address, data))

print "The following flash sequences have been read in:"
for seq in flashseqs:
	print hex(seq.address) + ":", seq.data


print "Initializing serial port..."
tty = SerialPort(DEVICE, 100, INIT_BAUDRATE)

print "Please press RESET on your 1337 board..."

while 1:
	tty.write('V')
	tty.flush()
	try: 
		if tty.read() == 'F':
			break
	except SerialPortException: 
		# timeout happened, who cares ;-)
		pass

print "OK, trying to set baudrate..."
# set baudrate
cmdBAUDRATE(REAL_BAUDRATE)
tty = SerialPort(DEVICE, 100, REAL_BAUDRATE)

# let the fun begin!
for seq in flashseqs:
	if(seq.address <= 0x40000):
		addr = seq.address
	else:
		continue
	print "RAMing", len(seq.data), "bytes at address", hex(addr)
	cmdWRITE(addr, len(seq.data), seq.data)
	tty.flush()

cmdCALL(0x30000);
sys.exit(0)


# some tests here.......
"""
# execute (existing) program in ram
cmdCALL(0x00033ffc)
sys.exit(0)
"""

# read something from the IRAM
#print cmdREAD(0x00030000, 32)

#data = []
#for i in range(0, 32):
#	data.append(i)
#cmdWRITE(0x00030000, 32, data)


"""
# write something to the begin of the IRAM
data_wr = []
checksum = 0
for i in range(0, 0x400):
	value = i%256
	data_wr.append(value)
	checksum = (checksum + value) % (2**16)

print "Calculated checksum:", checksum
print "Writing", data_wr, "to the IRAM..."
cmdWRITE(0x00030000, len(data_wr), data_wr)
print "Received Checksum:", last_checksum
print

print "Reading from the IRAM again..."
data_re = cmdREAD(0x00030000, len(data_wr))
print "Received data:", data_re, "Checksum:", last_checksum
"""

"""
# see whats in the iram at the moment
data_wr = []
print "Reading from the IRAM..."
data_re = cmdREAD(0x00030000, 0x10000-4)
print "Received data:", data_re, "Checksum:", last_checksum
"""

"""
# see whats in the dram at the moment
data_wr = []
print "Reading from the DRAM..."
data_re = cmdREAD(0x0002C000, 0x10000-0xC000-4)
print "Received data:", data_re, "Checksum:", last_checksum
"""

"""
# blank the iram
data_wr = []
for i in range(0, 0x10000-4):
	value = 0
	data_wr.append(value)

print "Writing", data_wr, "to the IRAM..."
cmdWRITE(0x00030000, len(data_wr), data_wr)
print "Received Checksum:", last_checksum
print
"""

"""
# blank the dram
data_wr = []
for i in range(0, 0x10000-0xC000-4):
	value = 0
	data_wr.append(value)

print "Writing", data_wr, "to the DRAM..."
cmdWRITE(0x0002C000, len(data_wr), data_wr)
print "Received Checksum:", last_checksum
print
"""

"""
# write some data in the iram and try to execute it
data_wr =[
		0x9B,0x00,
		0x0D,0x4e,
		0xcf,0xf1,
		0x16,0x01,
		0x9b,0x05,
		0x04,0xc7,
		0xc1,0x06,
		0x16,0x56,
		0xe0,0xfb, #branch
		0x9f,0xa0,0x9f,0xa0,0x9f,0xa0, #nop
		0x9f,0xa0,0x9f,0xa0,0x9f,0xa0,
		0x9f,0xa0,0x9f,0xa0,0x9f,0xa0,
		0x9f,0xa0,0x9f,0xa0,0x9f,0xa0,
		0x9f,0xa0,0x9f,0xa0,0x9f,0xa0,
		0x9f,0xa0,0x9f,0xa0,0x9f,0xa0,
		0x9f,0xa0,0x9f,0xa0,0x9f,0xa0]
print "Writing", data_wr, "to the IRAM..."
cmdWRITE(0x00030000, len(data_wr), data_wr)
print "Received Checksum:", last_checksum
print
cmdCALL(0x00030000)
"""
