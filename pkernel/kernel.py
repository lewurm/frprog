#!/usr/bin/env python
import sys, time
from SerialPort_linux import *

# serial device to communicate with
DEVICE="/dev/ttyUSB0"
# baudrate used for communication with pkernel
KERNEL_BAUDRATE=38400

def recvByte():
	i = tty.read()
	while len(i)==0:
		time.sleep(0.03)
		i = tty.read()
	return ord(i)

def sendByte(byte):
	time.sleep(0.005) # just to get sure, wait 5ms
	tty.write(chr(byte))
	tty.flush()

def sendWord(word):
	sendByte(word & 0xFF)
	sendByte((word >> 8) & 0xFF)

def sendDWord(dword):
	sendByte(dword & 0xFF)
	sendByte((dword >> 8) & 0xFF)
	sendByte((dword >> 16) & 0xFF)
	sendByte((dword >> 24) & 0xFF)

def pkernERASE(address, size):
	sendByte(0x12)
	if (recvByte() != 0x11):
		raise Exception
	sendDWord(address)
	sendWord(size)
	if (recvByte() != 0x18):
		raise Exception
	print "Erasing done."


def pkernWRITE(address, size, data):
	print "address:", hex(address), "size:", size
	# send WRITE command
	sendByte(0x13)
	if (recvByte() != 0x37):
		raise Exception
	# tell desired address and size
	sendDWord(address)
	sendWord(size)

	if (recvByte() != 0x04):
		raise Exception
	print "Received Metadata."

	# write binary stream of data
	for i in range(0, size):
		sendByte(data[i])

	if (recvByte() != 0x08):
		raise Exception
	print "Received Data."

	if (recvByte() != 0x28):
		raise Exception
	print "Flashing done."


class FlashSequence(object):
	def __init__(self, address, data):
		self.address = address
		self.data = data

# list of all our address/data pairs to flash
flashseqs = []


print "Initializing serial port..."
tty = SerialPort(DEVICE, 0, KERNEL_BAUDRATE)

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
	print hex(seq.address) + ":", [hex(x) for x in seq.data]


# let the fun begin!
for seq in flashseqs:
	print "Erasing", len(seq.data), "bytes at address", hex(seq.address)
	pkernERASE(seq.address, len(seq.data))

for seq in flashseqs:
	print "Flashing", len(seq.data), "bytes at address", hex(seq.address)
	pkernWRITE(seq.address, len(seq.data), seq.data)

sendByte(0x99);

print "Reset your board now to run code from Flash"
