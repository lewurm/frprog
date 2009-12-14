#include "mb91465k.h"
#include "flash.h"

#pragma section CODE=IRAM,attr=CODE

void increaseled(void)
{
	PDR14 = ~(((~PDR14)+1)%256);
	HWWD_CL = 0;
}

void main(void)
{
	unsigned int i, baseaddr;
	unsigned int toflash[] = {0x9b00, 0x0d4e, 0xcff1, 0x1601, 0x9b05, 0x04c7, 0xc106, 0x1656, 0xe0fb}; //len = 9
	
	PORTEN = 0x3; /* enable I/O Ports */

	/*Enable LEDs*/
	DDR14 = 0xFF;
	PDR14 = 0x00;
	increaseled();

	/*Initialize UART4*/
	InitUart4();

#if 1
	i = 0;
	baseaddr = 0xf4000;
	for (; i <0x10; i+=4) {
		(void) FLASH_SectorErase(baseaddr + i);
		increaseled();
	}
#endif

	i = 0;
	baseaddr = 0xf4000;
	for(; i<9; i++) {
		increaseled();
		(void) FLASH_WriteHalfWord(baseaddr + (2*i), toflash[i]);
	}

	PDR14 = 0x55; //signal that we finished now!

#if 1
	while(1) {
		HWWD_CL = 0;
	}
#else
	//let restart it
#endif
}

