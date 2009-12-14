#ifndef __FLASH_H__
#define __FLASH_H__

#include "mb91465k.h"

#define hseq_1 ((volatile unsigned short int *)0x000A1557)
#define hseq_2 ((volatile unsigned short int *)0x000A0AAF)

#define DPOLL 0x0080
#define TLOVER 0x0020
#define SETIMR 0x0008

void FLASH_PrepareWriteHalfWordMode();
void FLASH_PrepareReadMode();
unsigned char FLASH_WriteHalfWord(unsigned int adr, unsigned short int data);
unsigned char FLASH_ChipErase(void);
unsigned char FLASH_SectorBlankCheck(unsigned int secaddr, unsigned int size);
unsigned char FLASH_ReadReset(void);
unsigned char FLASH_CheckPendingInterrupt(void);

#endif
