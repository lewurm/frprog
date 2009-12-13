#!/usr/bin/env python
import sys, time
from SerialPort_linux import *

# serial device to communicate with
DEVICE="/dev/ttyUSB0"
# baudrate used for communication with pkernel
KERNEL_BAUDRATE=38400

print "Initializing serial port..."
tty = SerialPort(DEVICE, 500, INIT_BAUDRATE)

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
