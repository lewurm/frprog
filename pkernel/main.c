#include "mb91465k.h"
#include "flash.h"

#pragma section CODE=IRAM,attr=CODE

void increaseled(void)
{
	PDR14 = (PDR14+1)%256;
	HWWD_CL = 0;
}

void main(void)
{
	unsigned char error = 0;
	unsigned int i, baseaddr;
	unsigned int toflash[] = {0x9b00, 0x0d4e, 0xcff1, 0x1601, 0x9b05, 0x04c7, 0xc106, 0x1656, 0xe0fb}; //len = 9
	
	PORTEN = 0x3; /* enable I/O Ports */

	/*Enable LEDs*/
	DDR14 = 0xFF;
	PDR14 = 0xff;

	/*Initialize UART4*/
	InitUart4();

#if 1
	i = 0;
	baseaddr = 0xf4000;
	for (; i <0x30; i+=4) {
		error = FLASH_SectorErase(baseaddr + i);
		Puts4("\nerased: ");
		Puts4(error == 1 ? "[success] " : "[failed] ");
		Puthex4(baseaddr + i, 6);
		increaseled();
	}
#endif
	i=0;
	Puts4("\nCurrent Content of FLASH at 0xf4000 ... 0xf401F:\n");
	while(i < 0x20)
	{
		Puts4("0x"); Puthex4( *(unsigned char *)(0xf4000 + i), 2); Puts4(" ");
		i++;
		if( (i % 0x10) == 0 ) Puts4("\n");
	}
	Puts4("\n");


	i = 0;
	baseaddr = 0xf4000;
	for(; i<9; i++) {
		increaseled();
		Puts4("\nwrite: ");
		error = FLASH_WriteHalfWord(baseaddr + (2*i), toflash[i]);
		Puts4(error == 1 ? "[sucess] " : "[failed] ");
		Puts4("0x");
		Puthex4(toflash[i], 4);
		Puts4(" @0x");
		Puthex4(baseaddr + (2*i), 6);
	}

	while(1) {
		HWWD_CL = 0;
	}
}

