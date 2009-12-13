/*****************************************************************************/
/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR */
/* ELIGIBILITY FOR ANY PURPOSES.                                             */
/*                 (C) Fujitsu Microelectronics Europe GmbH                  */
/*****************************************************************************/

#include "rlt.h"

void RLT_InitializeTimer(unsigned char channel, unsigned char runmode, unsigned char clockmode, unsigned char triggermode, unsigned char outputmode)
{
	unsigned short setvalue = 0x00;
	
	/*	Prepare seting for the TMCSR Register	*/
	setvalue |= ( (clockmode << 10) | (triggermode << 7) | ((outputmode & 0x01) << 5) | ((runmode & 0x01) << 4) | 0x02 /* CNTE */ ); 

	/*	Set the corresponding RLT channel	*/
	switch(channel)
	{
		case 0:
		{
			TMCSR0 = setvalue;
			break;
		}
		case 1:
		{
			TMCSR1 = setvalue;
			break;
		}
		case 2:
		{
			TMCSR2 = setvalue;
			break;
		}
		case 3:
		{
			TMCSR3 = setvalue;
			break;
		}
		case 4:
		{
			TMCSR4 = setvalue;
			break;
		}
		case 5:
		{
			TMCSR5 = setvalue;
			break;
		}
		case 6:
		{
			TMCSR6 = setvalue;
			break;
		}
		case 7:
		{
			TMCSR7 = setvalue;
			break;
		}
	}	
}

void RLT_SetReloadValue(unsigned char channel, unsigned short int value)
{
	switch(channel)
	{
		case 0:
		{
			TMRLR0 = value;
			break;
		}	
		case 1:
		{
			TMRLR1 = value;
			break;
		}	
		case 2:
		{
			TMRLR2 = value;
			break;
		}	
		case 3:
		{
			TMRLR3 = value;
			break;
		}	
		case 4:
		{
			TMRLR4 = value;
			break;
		}	
		case 5:
		{
			TMRLR5 = value;
			break;
		}	
		case 6:
		{
			TMRLR6 = value;
			break;
		}	
		case 7:
		{
			TMRLR7 = value;
			break;
		}
	}	
}

void RLT_TriggerTimer(unsigned char channel)
{
	switch(channel)
	{
		case 0:
		{
			TMCSR0_TRG = 1;
			break;
		}	
		case 1:
		{
			TMCSR1_TRG = 1;
			break;
		}	
		case 2:
		{
			TMCSR2_TRG = 1;
			break;
		}	
		case 3:
		{
			TMCSR3_TRG = 1;
			break;
		}	
		case 4:
		{
			TMCSR4_TRG = 1;
			break;
		}	
		case 5:
		{
			TMCSR5_TRG = 1;
			break;
		}	
		case 6:
		{
			TMCSR6_TRG = 1;
			break;
		}	
		case 7:
		{
			TMCSR7_TRG = 1;
			break;
		}
	}
}

void RLT_EnableInterrupt(unsigned char channel, unsigned char enable)
{
	switch(channel)
	{
		case 0:
		{
			/*	Clear Pending Interrupt Flag	*/
			TMCSR0_UF = 0;
			
			/* Enable Interrupt	*/
			TMCSR0_INTE = enable;
			break;
		}	
		case 1:
		{
			/*	Clear Pending Interrupt Flag	*/
			TMCSR1_UF = 0;
			
			/* Enable Interrupt	*/
			TMCSR1_INTE = enable;
			break;
		}	
		case 2:
		{
			/*	Clear Pending Interrupt Flag	*/
			TMCSR2_UF = 0;
			
			/* Enable Interrupt	*/
			TMCSR2_INTE = enable;
			break;
		}	
		case 3:
		{
			/*	Clear Pending Interrupt Flag	*/
			TMCSR3_UF = 0;
			
			/* Enable Interrupt	*/
			TMCSR3_INTE = enable;
			break;
		}	
		case 4:
		{
			/*	Clear Pending Interrupt Flag	*/
			TMCSR4_UF = 0;
			
			/* Enable Interrupt	*/
			TMCSR4_INTE = enable;
			break;
		}	
		case 5:
		{
			/*	Clear Pending Interrupt Flag	*/
			TMCSR5_UF = 0;
			
			/* Enable Interrupt	*/
			TMCSR5_INTE = enable;
			break;
		}	
		case 6:
		{
			/*	Clear Pending Interrupt Flag	*/
			TMCSR6_UF = 0;
			
			/* Enable Interrupt	*/
			TMCSR6_INTE = enable;
			break;
		}	
		case 7:
		{
			/*	Clear Pending Interrupt Flag	*/
			TMCSR7_UF = 0;
			
			/* Enable Interrupt	*/
			TMCSR7_INTE = enable;
			break;
		}
	}
}

__interrupt void RLT_Channel0_ISR()
{
	/*	Clear Pending Interrupt Flag	*/
	TMCSR0_UF = 0;
	
	/*	Do what you have to do	*/
	PDR14--; //since the pins are low active
}

__interrupt void RLT_Channel1_ISR()
{
	/*	Clear Pending Interrupt Flag	*/
	TMCSR1_UF = 0;
	
	/*	Do what you have to do	*/
}

__interrupt void RLT_Channel2_ISR()
{
	/*	Clear Pending Interrupt Flag	*/
	TMCSR2_UF = 0;
	
	/*	Do what you have to do	*/
}

__interrupt void RLT_Channel3_ISR()
{
	/*	Clear Pending Interrupt Flag	*/
	TMCSR3_UF = 0;
	
	/*	Do what you have to do	*/
}

__interrupt void RLT_Channel4_ISR()
{
	/*	Clear Pending Interrupt Flag	*/
	TMCSR4_UF = 0;
	
	/*	Do what you have to do	*/
}

__interrupt void RLT_Channel5_ISR()
{
	/*	Clear Pending Interrupt Flag	*/
	TMCSR5_UF = 0;
	
	/*	Do what you have to do	*/
}

__interrupt void RLT_Channel6_ISR()
{
	/*	Clear Pending Interrupt Flag	*/
	TMCSR6_UF = 0;
	
	/*	Do what you have to do	*/
}

__interrupt void RLT_Channel7_ISR()
{
	/*	Clear Pending Interrupt Flag	*/
	TMCSR7_UF = 0;
	
	/*	Do what you have to do	*/
}
