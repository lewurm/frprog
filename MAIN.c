/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR */
/* ELIGIBILITY FOR ANY PURPOSES.                                             */
/*                 (C) Fujitsu Microelectronics Europe GmbH                  */
/*------------------------------------------------------------------------
  MAIN.C
  - description
  - See README.TXT for project description and disclaimer.

  06.10.06  1.01   UMa    changed includes
-------------------------------------------------------------------------*/

 
/*************************@INCLUDE_START************************/
#include "mb91465kH.h"
#include "vectors.h"
#include "RLT.h"
#include "Flash.h"
/**************************@INCLUDE_END*************************/

/*********************@GLOBAL_VARIABLES_START*******************/
/**********************@GLOBAL_VARIABLES_END********************/


/*******************@FUNCTION_DECLARATION_START*****************/

/*********************@FUNCTION_HEADER_START*********************
*@FUNCTION NAME:    main()                                      *
*                                                               *
*@DESCRIPTION:      The main function controls the program flow *
*                                                               *
*@PARAMETER:        none                                        *
*                                                               *
*@RETURN:           none                                        *
*                                                               *
***********************@FUNCTION_HEADER_END*********************/


void main(void)
{
	unsigned char error = 0;
	unsigned char global_error = 0;	
	unsigned int i;
	
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
	PDR14 = 0x00;

	/*	Initialize Reload Timer Channel 0	*/
	RLT_InitializeTimer(0, RLT_RUMMODE_RELOAD, RLT_CLOCKMODE_DIV32, RLT_TRIGGER_SOFTWARE, RLT_OUTOUTMODE_HIGHLEVEL);
	RLT_SetReloadValue(0,0x1388);	// CLKP/32, 0.01s Interval => 0x1388 counts
	RLT_EnableInterrupt(0);
	RLT_TriggerTimer(0);
		 
	/*	Initialize UART4	*/
	InitUart4();

	/*	Output Welcome Message	*/
	Puts4(" \n\n");
 	Puts4("\n\n********** Welcome to FUJITSU FLASH Programming Demo **********\n");

 	/*	Do BlankCheck on Sector at 0xA0000	*/
	Puts4("Blank Check of FLASH Sector at 0xA0000 ... ");
 	error = FLASH_SectorBlankCheck(0xA0000, 0x4000);
 	if( error == 1 )
 	{
	 	Puts4("done.\n");
	}
	else
	{
		Puts4("failed.\n");
	}
	 	
 	/*	Show Current Content of 0xA0000 ... 0xA001F	*/
	i=0;
	Puts4("\nCurrent Content of FLASH at 0xA0000 ... 0xA001F:\n");
	while(i < 0x20)
	{
		Puts4("0x"); Puthex4( *(unsigned char *)(0xA0000 + i), 2); Puts4("  ");
		i++;
		if( (i % 0x10) == 0 ) Puts4("\n");
	}
 	Puts4("\n");
 	
	/*	SectorErase of FLASH Memory	0xA0000*/
	Puts4("Sector Erase of 0xA0000 ... ");
	error = FLASH_SectorErase(0xA0000);
	error = FLASH_SectorErase(0xA0004);
 	if( error == 1 )
 	{
	 	Puts4("done.\n");
	}
	else
	{
		global_error = 1;
		Puts4("failed.\n");
	}

	/*	Do BlankCheck on Sectors at 0xA0000 */
	Puts4("Blank Check of FLASH Sector at 0xA0000 ... ");
 	error = FLASH_SectorBlankCheck(0xA0000, 0x4000);
 	if( error == 1 )
 	{
	 	Puts4("done.\n");
	}
	else
	{
		global_error = 1;
		Puts4("failed.\n");
	}
		
	/*	Show Current Content of 0xA0000 ... 0xA001F	*/
	i=0;
	Puts4("\nCurrent Content of FLASH at 0xA0000 ... 0xA001F:\n");
	while(i < 0x20)
	{
		Puts4("0x"); Puthex4( *(unsigned char *)(0xA0000 + i), 2); Puts4("  ");
		i++;
		if( (i % 0x10) == 0 ) Puts4("\n");
	}
 	Puts4("\n");
 	
	/*	Write 0x55AA to 0xA0002	*/
 	Puts4("Write 0x55AA to 0xA0002 ... ");
 	error = FLASH_WriteHalfWord(0xA0002,0x55AA);
 	if( error == 1 )
 	{
	 	Puts4("done.\n");
	}
	else
	{
		global_error = 1;
		Puts4("failed.\n");
	}

	/*	Write 0x33CC to 0xA0004	*/
 	Puts4("Write 0x33CC to 0xA0004 ... ");
 	error = FLASH_WriteHalfWord(0xA0004,0x33CC);
 	if( error == 1 )
 	{
	 	Puts4("done.\n");
	}
	else
	{
		global_error = 1;
		Puts4("failed.\n");
	}
		
	/*	Show Current Content of 0xA0000 ... 0xA001F	*/
	i=0;
	Puts4("\nCurrent Content of FLASH at 0xA0000 ... 0xA001F:\n");
	while(i < 0x20)
	{
		Puts4("0x"); Puthex4( *(unsigned char *)(0xA0000 + i), 2); Puts4("  ");
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
					
    while(1)                   /* endless loop */
    {    
         
       HWWD_CL = 0;   
       
       /* feed hardware watchdog */
       /* (Only for devices with hardware (R/C based) watchdog) */
       /* The hardware (R/C based) watchdog is started */
       /* automatically after power-up and can not be stopped */
       /* If the hardware watchdog is not cleared frequently */
       /* a reset is generated. */           
    }   
}


/********************@FUNCTION_DECLARATION_END******************/
