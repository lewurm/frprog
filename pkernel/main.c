#include "mb91465k.h"
#include "vectors.h"
#include "rlt.h"
#include "flash.h"

void main(void)
{
	unsigned char error = 0;
	unsigned char global_error = 0;	
	unsigned int i, baseaddr;
	unsigned int toflash[] = {0x9b00,
								0x0d4e,
								0xcff1,
								0x1601,
								0x9b05,
								0x04c7,
								0xc106,
								0x1656,
								0xe0fb}; //len = 9
	
	/*	Enable Clock Monitor	*/
	CSCFG_MONCKI = 1;
	CMCFG = 0x0D;
		
	__EI();                    /* enable interrupts */
	__set_il(31);              /* allow all levels */
	InitIrqLevels();           /* init interrupts */

	PORTEN = 0x3;		/* enable I/O Ports */
				/* This feature is not supported by MB91V460A */
                               /* For all other devices the I/O Ports must be enabled*/

	/*	Enable LEDs	*/
	DDR14 = 0xFF;
	PDR14 = 0xff;

	/*	Initialize Reload Timer Channel 0	*/
	RLT_InitializeTimer(0, RLT_RUMMODE_RELOAD, RLT_CLOCKMODE_DIV32, RLT_TRIGGER_SOFTWARE, RLT_OUTOUTMODE_HIGHLEVEL);
	RLT_SetReloadValue(0,0xfffe);
	RLT_TriggerTimer(0);
	RLT_EnableInterrupt(0, 1);

	/*	Initialize UART4	*/
	InitUart4();

	/*	Output Welcome Message	*/
	Puts4(" \n\n");
 	Puts4("\n\n********** Welcome to FUJITSU FLASH Programming Demo **********\n");

#if 0
	i = 0;
	baseaddr = 0xf4000;
	for (; i <0x30; i+=4) {
		error = FLASH_SectorErase(baseaddr + i);
		Puts4("\nerased: ");
		Puts4(error == 1 ? "[success] " : "[failed] ");
		Puthex4(baseaddr + i, 6);
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
		Puts4("\nwrite: ");
		error = FLASH_WriteHalfWord(baseaddr + (2*i), toflash[i]);
	 	Puts4(error == 1 ? "[sucess] " : "[failed] ");
		Puts4("0x");
		Puthex4(toflash[i], 4);
		Puts4(" @0x");
		Puthex4(baseaddr + (2*i), 6);
	}

	i=0;
	Puts4("\nCurrent Content of FLASH at 0xf4000 ... 0xf401F:\n");
	while(i < 0x20)
	{
		Puts4("0x"); Puthex4( *(unsigned char *)(0xf4000 + i), 2); Puts4(" ");
		i++;
		if( (i % 0x10) == 0 ) Puts4("\n");
	}
 	Puts4("\n");

	 	 		
	/*	Output Ready Meassage	*/
	if( global_error != 0 )
 	{
	 	Puts4("\n********* FLASH Programming Demo failed **********\n");
	}
	else
	{
		Puts4("\n********* FLASH Programming Demo done **********\n");
	}

	RLT_EnableInterrupt(0, 0);
					
    while(1)
    {    
         
       HWWD_CL = 0;   
    }   
}

