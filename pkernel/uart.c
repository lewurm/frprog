#include "mb91465k.h"

void InitUart4(void)
{
	// Initialize UART asynchronous mode
	BGR04 = 416; // 38400 Baud @ 16MHz
	SCR04 = 0x17; // 8N1
	SMR04 = 0x0d; // enable SOT3, Reset, normal mode
	SSR04 = 0x00; // LSB first
	PFR19 = (PFR19 & 0xFC) | 0x03; // enable UART: SIN,SOT for async. transfer
	EPFR19 = 0x00; // enable UART
}

void Putch4(unsigned char ch) /* sends a char */
{
	while (SSR04_TDRE == 0); /* wait for transmit buffer empty */
	TDR04 = ch; /* put ch into buffer */
}

unsigned char Getch4(void) /* waits for and returns incomming char 	*/
{
	volatile unsigned ch;
	for(;;) {
		while(SSR04_RDRF == 0) /* wait for data received */
			HWWD = 0x00;
		ch = RDR04;

		if ((SSR04 & 0xE0) != 0) { /* Check for errors PE, ORE, FRE */
			SCR04_CRE = 1; /* Clear error flags */
		} else {
			return (ch); /* return char*/
		}
	}
}

