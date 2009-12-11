/*****************************************************************************/
/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR */
/* ELIGIBILITY FOR ANY PURPOSES.                                             */
/*                 (C) Fujitsu Microelectronics Europe GmbH                  */
/*****************************************************************************/

#ifndef __RLT_H__
#define __RLT_H__

#include "MB91465KH.h"

#define RLT_RUNMODE_ONESHOT	0x00
#define RLT_RUMMODE_RELOAD	0x01

#define RLT_CLOCKMODE_DIV2		0x00
#define RLT_CLOCKMODE_DIV8		0x01
#define RLT_CLOCKMODE_DIV32		0x02
#define RLT_CLOCKMODE_EXT		0x03
#define RLT_CLOCKMODE_DIV64		0x05
#define RLT_CLOCKMODE_DIV128	0x06

#define RLT_TRIGGER_SOFTWARE		0x00
#define RLT_TRIGGER_EXT_FALLINGEDGE	0x01
#define RLT_TRIGGER_EXT_RISINGEDGE	0x02
#define RLT_TRIGGER_BOTHEDGES		0x03

#define RLT_OUTOUTMODE_HIGHLEVEL	0x00
#define RLT_OUTPUTMODE_LOWLEVEL		0x01

void RLT_InitializeTimer(unsigned char channel, unsigned char runmode, unsigned char clockmode, unsigned char triggermode, unsigned char outputmode);
void RLT_SetReloadValue(unsigned char channel, unsigned short int value);
void RLT_EnableInterrupt(unsigned char channel);
void RLT_TriggerTimer(unsigned char channel);

__interrupt void RLT_Channel0_ISR();
__interrupt void RLT_Channel1_ISR();
__interrupt void RLT_Channel2_ISR();
__interrupt void RLT_Channel3_ISR();
__interrupt void RLT_Channel4_ISR();
__interrupt void RLT_Channel5_ISR();
__interrupt void RLT_Channel6_ISR();
__interrupt void RLT_Channel7_ISR();

#endif /*	__RLT_H__	*/
