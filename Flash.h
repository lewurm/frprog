/*****************************************************************************/
/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR */
/* ELIGIBILITY FOR ANY PURPOSES.                                             */
/*                 (C) Fujitsu Microelectronics Europe GmbH                  */
/*****************************************************************************/

#ifndef __FLASH_H__
#define __FLASH_H__

#include "MB91465K.H"

#define hseq_1 ((volatile unsigned short int *)0x000A1557)
#define hseq_2 ((volatile unsigned short int *)0x000A0AAF)


#define DPOLL 0x0080
#define TLOVER 0x0020
#define SETIMR 0x0008

void FLASH_PrepareWriteHalfWordMode();
void FLASH_PrepareReadMode();
unsigned char FLASH_WriteHalfWord(unsigned int adr, unsigned short int data);
unsigned char FLASH_SectorErase(unsigned int sec_adr);
unsigned char FLASH_ChipErase(void);
unsigned char FLASH_SectorBlankCheck(unsigned int secaddr, unsigned int size);
unsigned char FLASH_ReadReset(void);
unsigned char FLASH_SuspendSectorErase(unsigned int secaddr);
unsigned char FLASH_ResumeSectorErase(unsigned int secaddr);
unsigned int FLASH_SaveDisableInterruptFlag(void);
void FLASH_RestoreInterruptFlag(unsigned int flag);
unsigned char FLASH_CheckPendingInterrupt(void);

#endif	/* __FLASH_H__	*/
