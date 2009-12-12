#!/usr/bin/env python
import sys, time
from SerialPort_linux import *

# contains the last received checksum from a READ, WRITE or CHECKSUM command
last_checksum = 0

def sendByte(byte):
	time.sleep(0.01) # just to get sure, wait 10ms
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
	# get checksum
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
tty = SerialPort("/dev/ttyUSB0", 100, 9600)

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
cmdBAUDRATE(19200)
tty = SerialPort("/dev/ttyUSB0", 100, 19200)

print

# write something to the begin of the IRAM
data = [255, 2, 3, 4]
print "Writing", data, "to the IRAM..."
cmdWRITE(0x00030000, 4, data)
print "Received Checksum:", last_checksum
print

print "Reading from the IRAM again..."
data2 = cmdREAD(0x00030000, 4)
print "Received data:", data2, "Checksum:", last_checksum
