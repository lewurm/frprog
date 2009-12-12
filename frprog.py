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
	tty.flush()

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
"""
print
sendByte(0x01)
print recvByte()
sendByte(0x02)
print recvByte()
sys.exit(0)
"""

#cmdCALL(0x00030000)
cmdCALL(0x00033ffc)
sys.exit(0)

# read something from the IRAM
#print cmdREAD(0x00030000, 32)

#data = []
#for i in range(0, 32):
#	data.append(i)
#cmdWRITE(0x00030000, 32, data)


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
