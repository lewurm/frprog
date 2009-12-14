#include "flash.h"
#include "mb91465k.h"

void FLASH_PrepareWriteHalfWordMode()
{
	/*	Set FLASH Access Mode via BootROM Routine	*/
	/*	For details refer to the Hardware Manual or Data Sheet */
#pragma asm
	ST		RP,@-R15
	STM0	(R4,R5)
	STM1	(R12)
	LDI		#0x01,R4	; Set FLASH to 16Bit read/write Mode
	LDI		#0x04,R5	; Go 4 times through delay loop (64MHz CLKB)
	LDI		#0xBF60,R12
	CALL	@R12
	LDM1	(R12)
	LDM0	(R4,R5)
	LD		@R15+,RP
#pragma endasm
	
	/*	Set the FLASH Interface to Write Timing	*/
	/*	For details refer to the Hardware Manual or Data Sheet */
	/*	Setting shown here is for CLKB = 64MHz	*/
	FMWT_ATD = 1;
	FMWT_WEXH = 0;
	FMWT_WTC = 8;
}

void FLASH_PrepareReadMode()
{
	/*	Set FLASH Access Mode via BootROM Routine	*/
	/*	For details refer to the Hardware Manual or Data Sheet */
#pragma asm
	ST		RP,@-R15
	STM0	(R4,R5)
	STM1	(R12)
	LDI		#0x00,R4	; Set FLASH to 32Bit read/write Mode
	LDI		#0x04,R5	; Go 4 times through delay loop (64MHz CLKB)
	LDI		#0xBF60,R12
	CALL	@R12
	LDM1	(R12)
	LDM0	(R4,R5)
	LD		@R15+,RP
#pragma endasm
	
	/*	Set the FLASH Interface to Read Timing	*/
	/*	For details refer to the Hardware Manual or Data Sheet */
	/*	Setting shown here is for CLKB = 64MHz	*/
	FMWT_ATD = 1;
	FMWT_EQ = 3;
	FMWT_WTC = 4;
}		
		
unsigned char FLASH_ChipErase(void)
{
	unsigned char flag = 0;

	/*Set FLASH access mode to 16Bit Write Mode*/
	FLASH_PrepareWriteHalfWordMode();

	/*Start FLASH Sector Erase Sequence*/
	*hseq_1 = 0x00AA;
	*hseq_2 = 0x0055;
	*hseq_1 = 0x0080;
	*hseq_1 = 0x00AA;
	*hseq_2 = 0x0055;
	*hseq_1 = 0x0010;

	/*Wait for the Auto Algorithm to finish*/
	while( flag == 0 ) {
		/* Feed Hardware Watchdog */
		HWWD_CL = 0;

		if(*hseq_1 & DPOLL) {
			flag = 1;
		}
		if(*hseq_1 & TLOVER) {
			if(*hseq_1 & DPOLL) {
				flag = 1;
			}
			else {
				/*Reset FLASH (keep in mind 16Bit access to FLASH)*/
				*hseq_1 = 0x00F0; // Keep in Mind (16Bit access)

				flag = 2;
			}
		}
	}

	/*Set FLASH access mode to 32Bit Read Mode*/
	FLASH_PrepareReadMode();

	return flag;
}
	
#if 0 //maybe implement this check too!
unsigned char FLASH_SectorBlankCheck(unsigned int secaddr, unsigned int size)
{
	unsigned int count;
	unsigned char empty_flag = 0;
	unsigned int addr = secaddr;
		
	/*	Clear FIXE bit to see FLASH memory content instead of fixed reset vector	*/
	FMCS_FIXE = 0;
	
	for(count = 0; count < size; count ++)
	{
		/*	Clear Hardware Watchdog	*/
		HWWD_CL = 0;
		if( *(unsigned int *)addr != 0xFFFFFFFF ) empty_flag = 1;
		addr += 4;
	}
	
	/*	Set FIXE bit to see fixed reset vector	*/
	FMCS_FIXE = 1;

	if( empty_flag != 0 )
	{
		return 2;
	}
	
	return 1;
}
#endif

unsigned char FLASH_WriteHalfWord(unsigned int adr, unsigned short int data)
{
	unsigned char flag = 0;

	/*	Set FLASH access mode to 16Bit Write Mode	*/
	FLASH_PrepareWriteHalfWordMode();
	
	/*	Start Write FLASH Sequence	*/
	*hseq_1 = 0x00AA;
	*hseq_2 = 0x0055;
	*hseq_1 = 0x00A0;
	*((volatile unsigned short int *)adr) = data;
	
	/*	Wait for the Auto Algorithm to finish	*/
	while( flag == 0 )
	{
		/* Feed Hardware Watchdog */
		HWWD_CL = 0;
		
		if( ( *(volatile unsigned short int *)adr & DPOLL ) == (data & DPOLL) )
		{
			flag = 1;
		}
		if( ( *(volatile unsigned short int *)adr & TLOVER ) == TLOVER )
		{
			if( ( *(volatile unsigned short int *)adr & DPOLL ) == (data & DPOLL) )
			{
				flag = 1;
			}
			else
			{
				/*	Reset FLASH (keep in mind 16Bit access to FLASH)	*/
				*hseq_1 = 0x00F0;	// Keep in Mind (16Bit access)
				
				flag = 2;
			}
		}
	}

	/*	Set FLASH access mode to 32Bit Read Mode	*/
	FLASH_PrepareReadMode();
	
	return flag;
}

unsigned char FLASH_ReadReset()
{
	*hseq_1 = 0x00F0;
	
	return 1;
}

unsigned char FLASH_CheckPendingInterrupt()
{
	/*	Poll for Pending Interrupts which are needed here	*/
	if(TMCSR0_UF) return 1;	/* in this sample the only interrupt source supervised is Reload Timer 0	*/
	
	/*	and return 1 when an Interrupt is pending	*/
	return 0;
}

