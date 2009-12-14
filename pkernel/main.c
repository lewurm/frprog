#include "mb91465k.h"
#include "flash.h"

#define BUFSIZE 0x20
#define cleardata() memset(data,0,BUFSIZE)

static void increaseled(void)
{
	PDR14 = ~(((~PDR14)+1)%256);
}

static unsigned char recvbyte(void)
{
	return Getch4();
}

static unsigned short recvword(void)
{
	static unsigned char b1, b2;
	static unsigned short ret;
	b1 = recvbyte();
	b2 = recvbyte();
	ret = (unsigned short)(b2 << 8) | b1;
	return ret;
}

static unsigned int recvdword(void)
{
	static unsigned char b1, b2, b3, b4;
	static unsigned int ret;
	b1 = recvbyte();
	b2 = recvbyte();
	b3 = recvbyte();
	b4 = recvbyte();
	ret = ((unsigned int) (b4 << 24)) | ((unsigned int) (b3 << 16)) | ((unsigned int) (b2 << 8)) |(unsigned int)b1;
	return ret;
}

static void halt(void)
{
	while(1) {
		HWWD_CL = 0;
	}
}

static void panic(void)
{
	PDR14 = 0x22;
	halt();
}

void main(void)
{
	unsigned int address;
	unsigned short i, size, next;
	unsigned char running = 1, data[BUFSIZE] = {0};
	
	/*Enable LEDs*/
	DDR14 = 0xFF;
	PDR14 = 0xff;

	/*Initialize UART4*/
	InitUart4();

	while(running) {
		cleardata();
		increaseled();
		switch(recvbyte()) {
			case 0x15: //chip erase
				Putch4(0x45);
				increaseled();
				if(FLASH_ChipErase() != 1) {
					panic();
				}
				Putch4(0x23);
				break;

			case 0x12: //erase
				Putch4(0x11);
				address = recvdword();
				increaseled();

				size = recvword();
				increaseled();

				PDR14 = 0xff;
				for(i=0; i<(size+4); i+=4) { /* erase */
					if(FLASH_SectorErase(address + i) != 1) {
						panic();
					}
					increaseled();
				}
				Putch4(0x18); //Erasing done.
				break;

			case 0x13: //receive
				Putch4(0x37);
				increaseled();

				address = recvdword();
				increaseled();

				size = recvword();
				increaseled();

				PDR14 = 0xff;
				for(i=0; i<size; i++) { /* get data */
					increaseled();
					data[i] = recvbyte();
				}

				PDR14 = 0xff;
				for(i=0; i<size; i+=2) { /* flash the data */
					increaseled();
					next = (((unsigned short)data[i])<<8) | (unsigned short)data[i+1];
					if(FLASH_WriteHalfWord(address + i, next) != 1) {
						panic();
					}
				}
				Putch4(0x28); //Flashing done.
				break;

			case 0x97: /* exit and restart (let do this by the watchdog!) */
				while(1) {
					increaseled();
				}

			case 0x99: /* exit */
				running = 0;
				break;
			default: break;
		}
	}

	PDR14 = 0x55; //signal that we finished now!
	halt();

#if 0
	i = 0;
	baseaddr = 0xf4000;
	for (; i <0x10; i+=4) {
		(void) FLASH_SectorErase(baseaddr + i);
		increaseled();
	}

	i = 0;
	baseaddr = 0xf4000;
	for(; i<9; i++) {
		increaseled();
		(void) FLASH_WriteHalfWord(baseaddr + (2*i), toflash[i]);
	}

#endif
}

