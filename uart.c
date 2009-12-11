/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR */
/* ELIGIBILITY FOR ANY PURPOSES.                                             */
/*                 (C) Fujitsu Microelectronics Europe GmbH                  */
/*---------------------------------------------------------------------------*/

#include "mb91465k.h"

const char ASCII[] = "0123456789ABCDEF";

void InitUart4(void)
{
  // Initialize UART asynchronous mode
  // BGR04 = 1666; //  9600 Baud @ 16MHz
     BGR04 = 832;  // 19200 Baud @ 16MHz
  // BGR04 = 416;  // 38400 Baud @ 16MHz

  // BGR04 = 2083; //  9600 Baud @ 20MHz
  // BGR04 = 1041; // 19200 Baud @ 20MHz
  // BGR04 = 520;  // 38400 Baud @ 20MHz

  // BGR04 = 2499; //  9600 Baud @ 24MHz
  // BGR04 = 1249; // 19200 Baud @ 24MHz
  // BGR04 = 624;  // 38400 Baud @ 24MHz  
  SCR04 = 0x17;    // 8N1
  SMR04 = 0x0d;    // enable SOT3, Reset, normal mode
  SSR04 = 0x00;    // LSB first
  PFR19 = (PFR19 & 0xFC) | 0x03;  	// enable UART: SIN,SOT for async. transfer
  EPFR19 = 0x00;   // enable UART
}

void Putch4(char ch)         /* sends a char */
{
  while (SSR04_TDRE == 0);    /* wait for transmit buffer empty 	*/
  TDR04 = ch;                 /* put ch into buffer			*/
}

char Getch4(void)            /* waits for and returns incomming char 	*/
{
  volatile unsigned ch;

  for(;;)
  {
  
     while(SSR04_RDRF == 0)	 /* wait for data received  	*/
       HWWD = 0x00; 
  
     ch = RDR04;
  
     if ((SSR04 & 0xE0) != 0)    /* Check for errors PE, ORE, FRE */
     {
         SCR04_CRE = 1;            /* Clear error flags 	*/
     }
     else   
        return (ch);            /* return char 			*/
  }
}


void Puts4(const char *Name2)  /* Puts a String to UART */
{
  volatile int i,len;
   
  len = strlen(Name2);
	
  for (i=0; i<strlen(Name2); i++)   /* go through string                     */
  {
    if (Name2[i] == 10)
      Putch4(13);
    Putch4(Name2[i]);              /* send it out                           */
  }
}


char Echo4(void)        /* Echo UART and return ch */
{
  char ch;
  
  Puts4("UART 4 receive: ");      // send text to UART
  ch = RDR04;	                   // readout character              
  Putch4(ch);    	               // send character to UART                 
  if (ch==13)	
    Putch4(10);

  return (ch);
}

void Puthex4(unsigned long n, unsigned char digits)
{
   unsigned char digit=0,div=0,i;

   div=(4*(digits-1));	/* init shift divisor */
   for (i=0;i<digits;i++)
   {
     digit = ((n >> div)&0xF); /* get hex-digit value */
	 Putch4(digit + ((digit < 0xA) ? '0' : 'A' - 0xA));
     div-=4;     		/* next digit shift */
   }
}

void Putdec4(unsigned long x, int digits)
{
	int i;
	char buf[10],sign=1;
	
	if (digits < 0) {     /* should be print of zero? */
	  digits *= (-1);
	  sign =1;
	}  
	buf[digits]='\0';			/* end sign of string */
	
	for (i=digits; i>0; i--) {
		buf[i-1] = ASCII[x % 10];
		x = x/10;
	}

    if ( sign )
    {
	  for (i=0; buf[i]=='0'; i++) { /* no print of zero */
		if ( i<digits-1)
			buf[i] = ' ';
	  }		
    }
    
	Puts4(buf);					/* send string */
}



