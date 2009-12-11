==========================================================================
                   FLASH Programming Demo for MB91F465K 
==========================================================================
                   Fujitsu Microelectronics Europe GmbH                       
                 http://emea.fujitsu.com/microelectronics 
                                                            
 The following  software  is for  demonstration  purposes only.  It is not
 fully  tested, nor validated  in order  to fullfill  its task  under  all
 circumstances.  Therefore,  this software or  any part of it must only be
 used in an evaluation laboratory environment.                        
 This software is subject to the rules of our standard DISCLAIMER, that is
 delivered with our  SW-tools on the Fujitsu Microcontrollers CD 
 (V3.4 or higher "\START.HTM") or on our Internet Pages:
 http://www.fme.gsdc.de/gsdc.htm
 http://emea.fujitsu.com/microelectronics 
==========================================================================
               
History
Date      Ver   Author  Softune   Description
10.07.07  1.0   MVo     V60L06    First Version
                                                                 
==========================================================================

This is simple demo showing how to use the FLASH programming Auto
Algorithms.

Target of this demo is to show application of the following aspects of
FLASH memory erase/write:

1) Preparation of FLASH Read/Write Mode (via BootROM routine)
2) Sector Erase
3) Sector Erase Suspend/Resume
4) Write Halfword to FLASH memory addresses

Remarks:

A) Reload Timer 0 is setup to demonstrate handling of Interrupt Requests
   via polling and subsequent Sector Erase Suspend, Restore Global 
   Interrupt Flag, Handling of IRQ and Sector Erase Resume.
   
B) Handling of RAMCODE is added to Start91460.asm because FLASH prog.
   routines have to be run from RAM since no code fetching is possible
   while write/erase of FLASH memory.

Connect MCU UART4 to Terminal Program (19200Baud 8N1). After Power On
a welcome message is output on UART4. The Action of Reload Timer 0 is
to increase a counter displayed on LED D1..D8 of SK-91F465K-120PMT each
0.010s.
The FLASH memory Sector content at Addresses 0xA0000 up to 0xA001F is
shown.
After this the Sector 0xA0000 will be erased by Sector
Erase command (this Sector Erase Commands is repeatedly interrupted by
Reload Timer 0 Interrupts which are handled from FLASH memory (Sector 
Erase Suspend/Resume).
When the Sectors are earsed a few data are programmed to some given 
addresses in the sector 0xA0000. 
Finaly the FLASH memory content at addresses 0xA0000 up to 0xA001F is shown
again to confirm the programmed values.
