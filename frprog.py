#!/usr/bin/env python
import sys, time
from SerialPort_linux import *

# serial device to communicate with
DEVICE="/dev/ttyUSB0"
# baudrate used for initialization
INIT_BAUDRATE=9600
# baudrate used for communication with the internal bootloader after init
BOOTLOADER_BAUDRATE=38400
# baudrate used for communication with the pkernel program that does the flashing eventually
KERNEL_BAUDRATE=115200

# contains the last received checksum from a READ, WRITE or CHECKSUM command
last_checksum = 0

class FlashSequence(object):
	def __init__(self, address, data):
		self.address = address
		self.data = data

def sendByte(byte):
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

def bootromREAD(address, size):
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

def bootromWRITE(address, size, data):
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
def bootromCALL(address):
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
def bootromCHECKSUM():
	# call CHECKSUM command
	sendByte(0x01)
	if (recvByte() != 0xF1):
		raise Exception
	sendByte(0x05)
	if (recvByte() != 0x84):
		raise Exception
	# get checksum
	recvChecksum()

def bootromBAUDRATE(baudrate):
	# send BAUDRATE command
	sendByte(0x01)
	if (recvByte() != 0xF1):
		raise Exception
	sendByte(0x06)
	if (recvByte() != 0x86):
		raise Exception
	# send desired baudrate
	sendDWord(baudrate)

def pkernCHIPERASE():
	sendByte(0x15)
	if (recvByte() != 0x45):
		raise Exception
	# wait till completion...
	if (recvByte() != 0x23):
		raise Exception

def pkernERASE(address, size):
	sendByte(0x12)
	if (recvByte() != 0x11):
		raise Exception
	sendDWord(address)
	sendWord(size)
	if (recvByte() != 0x18):
		raise Exception

def pkernWRITE(address, size, data):
	# send WRITE command
	sendByte(0x13)
	if (recvByte() != 0x37):
		raise Exception
	# tell desired address and size
	sendDWord(address)
	sendWord(size)

	# write binary stream of data
	for i in range(0, size):
		sendByte(data[i])

	if (recvByte() != 0x28):
		raise Exception

def readMHXFile(filename): # desired mhx filename
	fp = open(filename, "r")
	retval = [] # returns a list of FlashSequence objects
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
			retval.append(FlashSequence(address, data))
	fp.close()
	return retval

def main(argv=None):
	# check command line arguments
	if argv is None:
		argv = sys.argv
	if len(argv) != 2:
		print "Usage: " + argv[0] + " [target mhx-file]"
		return 1

	# read in data from mhx-files before starting
	try:
		try:
			bootloaderseqs = readMHXFile("pkernel/pkernel.mhx")
		except IOError as error1:
			bootloaderseqs = readMHXFile("%PREFIX%/share/frprog/pkernel.mhx")
		pkernelseqs = readMHXFile(argv[1])
	except IOError as error:
		print argv[0] + ": Error - couldn't open file " + error.filename + "!"
		return 1

	print "Initializing serial port..."
	global tty
	tty = SerialPort(DEVICE, 100, INIT_BAUDRATE)

	print "Please press RESET on your board..."

	while True:
		tty.write('V')
		tty.flush()
		try:
			if tty.read() == 'F':
				break
		except SerialPortException:
			# timeout happened, who cares ;-)
			pass

	starttime = time.time() # save time at this point for evaluating the duration at the end

	print "OK, trying to set baudrate..."
	# set baudrate
	bootromBAUDRATE(BOOTLOADER_BAUDRATE)
	time.sleep(0.1) # just to get sure that the bootloader is really running in new baudrate mode!
	del tty
	tty = SerialPort(DEVICE, 100, BOOTLOADER_BAUDRATE)

	print "Transfering pkernel program to IRAM",
	# let the fun begin!
	for seq in bootloaderseqs:
		if(seq.address <= 0x40000):
			addr = seq.address
		else:
			continue
		#print "RAMing", len(seq.data), "bytes at address", hex(addr)
		bootromWRITE(addr, len(seq.data), seq.data)
		tty.flush()
		sys.stdout.write(".")
		sys.stdout.flush()
	print

	# execute our pkernel finally and set pkernel conform baudrate
	bootromCALL(0x30000)
	time.sleep(0.1) # just to get sure that the pkernel is really running!
	del tty
	tty = SerialPort(DEVICE, None, KERNEL_BAUDRATE)

	print "Performing ChipErase..."
	pkernCHIPERASE()

	print "Flashing",
	for seq in pkernelseqs:
		# skip seqs only consisting of 0xffs
		seqset = list(set(seq.data))
		if len(seqset) == 1 and seqset[0] == 0xff:
			continue
		#print "Flashing", len(seq.data), "bytes at address", hex(seq.address)
		pkernWRITE(seq.address, len(seq.data), seq.data)
		tty.flush()
		sys.stdout.write(".")
		sys.stdout.flush()
	print

	duration = time.time() - starttime
	print "Procedure complete, took", round(duration, 2), "seconds."

	sendByte(0x97) # exit and restart
	print "Program was started. Have fun!"


if __name__ == '__main__':
	sys.exit(main())
