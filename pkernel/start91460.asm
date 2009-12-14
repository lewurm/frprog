/*      THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU       */
/*      MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR       */
/*      ELIGIBILITY FOR ANY PURPOSES.                                                   */
/*      (C) Fujitsu Microelectronics Europe GmbH                                        */
;=========================================================================================
; 1  Contents
;=========================================================================================
; 1       Contents
; 2       Disclaimer
;
; 3       History
;
; 4       Settings
; 4.1     Controller device
; 4.2     Boot / flash security 
; 4.3     Stack type and stack size
; 4.4     Copy code from flash to I-RAM
; 4.5     C++ start-up 
; 4.6     Low-level library interface
; 4.7     Clock Configuration
; 4.7.1   Clock selection
; 4.7.2   Select Clock Modulator
; 4.8     External bus interface
; 4.8.1   Select chipselect 
; 4.8.2   Set memory addressing for chipselects
; 4.8.3   Configure chipselect area
; 4.8.4   Set wait cycles for chipselects
; 4.8.5   Configure chipselects SDRAM memory only 
; 4.8.6   Referesh control register RCR 
; 4.8.7   Terminal and timing control register
; 4.8.8   Enable / disable I-cache
; 4.8.9   Enable CACHE for chipselect
; 4.8.10  Select external bus mode (data lines)
; 4.8.11  Select external bus mode (address lines)
; 4.8.12  Select external bus mode (control signals)
;
; 5       Definitions of Configurations
;
; 6       Section and data declaration
; 6.1     Define stack size
; 6.2     Define sections
;
; 7.      S T A R T 
; 7.1     Initialise stack pointer and table base register
; 7.2     Check for CSV reset and set CSV
; 7.3     Check clock condition
; 7.4     Restore default settings after reset
; 7.4.1   Disable clock modulator
; 7.4.2   Check if running on sub clock, change to main clock
; 7.4.3   Disable sub clock
; 7.4.4   Check if running on PLL, gear down PLL
; 7.4.5   Disable PLL
; 7.4.6   Set to main clock
; 7.5     Set memory controller
; 7.6     Clock startup
; 7.6.1   Set Voltage Regulator Settings
; 7.6.2   Power on clock modulator - clock modulator part I
; 7.6.3   Set CLKR register w/o clock mode
; 7.6.4   Start PLLs 
; 7.6.5   Wait for PLL oscillation stabilisation
; 7.6.6   Set clocks 
; 7.6.6.1 Set CPU and peripheral clock
; 7.6.6.2 Set external bus interface clock
; 7.6.6.3 Set CAN clock prescaler
; 7.6.6.4 Switch main clock mode
; 7.6.6.5 Switch sub clock mode
; 7.6.6.6 Switch to PLL mode
; 7.6.7   Enable frequncy modulation - clock modulator part II
; 7.7     Set BusInterface
; 7.7.1   Disable all CS
; 7.7.2   Clear TCR register
; 7.7.3   Set CS0 
; 7.7.4   Set CS1 
; 7.7.5   Set CS2  
; 7.7.6   Set CS3
; 7.7.7   Set CS4
; 7.7.8   Set CS5 
; 7.7.9   Set CS6
; 7.7.10  Set CS7  
; 7.7.11  Set special SDRAM config register  
; 7.7.12  set Port function register
; 7.7.13  Set TCR register
; 7.7.14  Enable cache for selected CS
; 7.7.15  Set SDRAM referesh control register
; 7.7.16  Enable used CS
; 7.7.17  I-cache on/off
; 7.7.18  Set port function register to general as I/O-port
; 7.8     Copy code from flash to I-RAM
; 7.9     Fill stacks
; 7.10    Clear data 
; 7.11    Copy Init section from ROM to RAM
; 7.12    C library initialization
; 7.13    Call C++ constructors
; 7.14    Call main routine
; 7.15    Return from main function
;
;=========================================================================================
; 2  Disclaimer
;=========================================================================================
;                    Fujitsu Microelectronics Europe GmbH                       
;                http://emea.fujitsu.com/microelectronics 
;                                                              
;    The  following  software  is for  demonstration  purposes only. It  is not fully  
;    tested, nor  validated  in order to fullfill its task under  all  circumstances.  
;    Therefore,  this software or  any part of it must only  be used in an evaluation 
;    laboratory environment.                        
;    This  software  is  subject to  the  rules of  our  standard DISCLAIMER, that is
;    delivered with our  SW-tools on  the  Fujitsu  Microcontrollers  CD/DVD (V3.4 or 
;    higher "\START.HTM") or on our Internet Pages:                                   
;    http://www.fme.gsdc.de/gsdc.htm
;    http://emea.fujitsu.com/microelectronics 
;
;=========================================================================================
; 3  History
;=========================================================================================
;
;=========================================================================================
;       MB914xx (FR60 CORE ONLY) Series C Compiler's 
;
;       Startup file for memory and basic controller initialisation
;=========================================================================================
;History:
;
; 2005-04-18 V1.0 UMa  Release first version
; 2005-06-17 V1.1 UMa  Added bus interface, modified c++ startup
; 2005-06-28 V1.2 UMa  minor changes
; 2005-07-27 V1.3 UMa  default values changed
; 2005-10-04 V1.4 UMa  changed code 'Call main Routine'
;                      Added secutiy section for MB91F467D  
;                      Added Flash Access Read Timing setting section;
; 2005-10-04 V1.5 UMa  Added Flash Controller Section
; 2005-10-28 V1.6 UMa  Check for CSV reset
; 2005-11.16 V1.7 UMa  Monitor Debugger support added: Copy of intvect Table
;                      Ext. Int 0 as abort function
;                      Changed PLL-Startup, Reset HWWD added
; 2005-11-16 V1.7 UMa  Examples for MUL_G changed
; 2006-02-14 V1.8 UMa  mb91464a added
;                      Settings for Clock Spervisor added
;                      Name of Section SECURITY changed to SECURITY_VECTORS
;                      Example values for gear-up changed
; 2006-03-17 V1.9 UMa  Changed Startup for Monitor Debugger
; 2006-04-24 v2.0 UMa  Added MB91465K and MB91469G
; 2006-05-03 v2.1 UMa  Added MB91461R; removed MB91V460A
;                      Added settings for the external bus-interface
; 2006-07-28 v2.2 UMa  Added I-RAM copy function (ROM -> IRAM)
;                      Added default settings for FLASH Access Read Timing 
;                      Settings 
;                      Changed default settings for FLASH cache configuration 
;                      Register
;                      Changed check for clock startup
; 2006-08-16 v2.3 MVo  Corrected Boot Security Sector Addresses for MB91469G
; 2006-10-06 v2.4 UMa  Added new devices
;                      Corrected typo in I_RAM to flash copy function
;                      Changed default settings for flash cache configuration
;                      Changed comments for SDRAM bus interface configuration
;                      Changed comments and default setting of CAN Prescaler
;                      Added Stack filler
;                      Added Settings for REGSEL Register
; 2007-02-13 v2.5 UMa  Introduction of default configurations
;                      Changed I_RAM to flash copy function                    
;
;
;=========================================================================================
; 4  Settings
;=========================================================================================
;
; CHECK ALL OPTIONS WHETHER THEY FIT TO THE APPLICATION;
;
; Configure this startup file in the "Settings" section. Search for
; comments with leading "; <<<". This points to the items to be set.
;=========================================================================================
;
#set    OFF             0
#set    ON              1
#set    DEFAULT         2
#set    LOW_PRIOR       31
;
;=========================================================================================
; 4.1  Controller Device
;=========================================================================================
#set    MB91464A        2                       ; MB91460 series
;
#set    MB91467B       10                       ; MB91460 series
;
#set    MB91467C       11                       ; MB91460 series
;
#set    MB91467D        4                       ; MB91460 series
;
#set    MB91469G        6                       ; MB91460 series
;
#set    MB91465K        3                       ; MB91460 series
;
#set    MB91463N        8                       ; MB91460 series
;
#set    MB91461R        1                       ; MB91460 series
#set    MB91467R        5                       ; MB91460 series
;
#set    MB91465X        9                       ; MB91460 series
;
#set    others          7                       ; MB91460 series
;
;
;
#set    DEVICE          MB91465K                ; <<< select device
;
;=========================================================================================
; 4.2  Boot / Flash Security 
;=========================================================================================
;
#set    BOOT_FLASH_SEC  OFF                     ; <<< BOOT and Flash Security Vector    
;
; The flash devices have two flash and two boot security vectors.  It is important to set
; the four vectors correctly.  Otherwise it might be possible,  that the flash device is 
; not accessible any more via the bootrom. Please read carefully the hardware manual.
; 
; OFF:  The security feature is switch off. The section SECURITY_VECTORS is reserved and
;       the vectors are set.
; ON:   IMPORTANT! The  security vectors are  not set. But the  section SECURITY_VECTORS 
;       is reserved.  
;
; Note: This feature is not supported by every device. Please check the data sheet. This 
;       feature is not available on MB91461R.
;
;=========================================================================================
; 4.3  Stack Type and Stack Size
;=========================================================================================
;
#set    USRSTACK        0                       ; user stack:   for main program
#set    SYSSTACK        1                       ; system stack: for main program and 
;                                               ;               interrupts
;
;
#set    STACKUSE        SYSSTACK                ; <<< set active stack
;
#set    STACK_RESERVE   ON                      ; <<< reserve stack area in 
;                                               ;     this module
#set    STACK_SYS_SIZE  0x400-4                 ; <<< byte size of System stack
#set    STACK_USR_SIZE  0x2                     ; <<< byte size of User stack 
;
; - If the active stack is set to SYSSTACK,  it is used for main program and interrupts. 
;   In this case,  the user stack  could be set to a dummy size.  If the active stack is 
;   set  to  user  stack,  it is  used  for the  main  program  but the  system stack is 
;   automatically activated,  if an interrupt is serviced.  Both stack areas must have a 
;   reasonable size.
; - If STACK_RESERVE is ON,  the sections USTACK and SSTACK are reserved in this module. 
;   Otherwise, they have to be reserved in other modules.  If STACK_RESERVE is OFF,  the 
;   size definitions STACK_SYS_SIZE and STACK_USR_SIZE have no meaning.
; - Even if  they  are reverved  in other modules,  they are  still initialised  in this 
;   start-up file.
;
; Note: Several library functions require quite a big stack (due to ANSI). 
;       Check the stack information files (*.stk) in the LIB\911 directory.
;
;=========================================================================================
; 4.4  Copy code from Flash to I-RAM
;=========================================================================================
;
#set    I_RAM           ON                      ; <<< select  if  code  in  section IRAM
;                                                     should be copied
;
; If this option is activated code located in the  section IRAM is copied during startup 
; from ROM to the instruction-RAM. The code is linked for the instruction-RAM.
;
;=========================================================================================
; 4.7  Clock Configuration
;=========================================================================================
;=========================================================================================
; 4.7.1  Clock Selection
;=========================================================================================
;
; No clock settings
#set    NO_CLOCK                                               0x01
;
; Sub-oscillation input: 32 kHz 
#set    SUB_32KHZ_CPU__32KHZ_PER_32KHZ_EXT_32KHZ_CAN__2MHZ     0x11
;
; Oscillation input: 4 MHz 
#set    MAIN_4MHZ_CPU___2MHZ_PER__1MHZ_EXT__1MHZ_CAN__2MHZ     0x21
#set    PLL_4MHZ__CPU__48MHZ_PER_16MHZ_EXT_24MHZ_CAN_16MHZ     0x22
#set    PLL_4MHZ__CPU__64MHZ_PER_16MHZ_EXT_32MHZ_CAN_16MHZ     0x23
#set    PLL_4MHZ__CPU__80MHZ_PER_20MHZ_EXT_27MHZ_CAN_20MHZ     0x24
#set    PLL_4MHZ__CPU__80MHZ_PER_20MHZ_EXT_40MHZ_CAN_20MHZ     0x25
#set    PLL_4MHZ__CPU__96MHZ_PER_16MHZ_EXT_48MHZ_CAN_16MHZ     0x26  ;not MB91V460, ...
#set    PLL_4MHZ__CPU_100MHZ_PER_20MHZ_EXT_50MHZ_CAN_20MHZ     0x27  ;not MB91V460, ...
;
; MB91461R only: Oscillation input: 10 MHz
#set    PLL_10MHZ_CPU__60MHZ_PER_20MHZ_EXT_30MHZ_CAN_20MHZ     0x41
;
; MB91461R only: Oscillation input: 20 MHz
#set    PLL_20MHZ_CPU__60MHZ_PER_20MHZ_EXT_30MHZ_CAN_20MHZ     0x51
;
; User settings
#set    CLOCK_USER                                             0x61
;
;
;
#set    CLOCKSPEED      PLL_4MHZ__CPU__64MHZ_PER_16MHZ_EXT_32MHZ_CAN_16MHZ
;                                               ; <<< Select clock configuration 
;
; There are different default configurations available, where all necessary settings for 
; clocks and the related  registers are made.  Beside this configurations,  there is the
; possibility   to  define  a  user   configuration   in  the  chapter   "Definition  of 
; Configurations"
; 
; - NO_CLOCK means: 
;   The clock registers are not set by the start-up file.
;
; - PLL_4MHZ__CPU__64MHZ_PER_16MHZ_EXT_32MHZ_CAN_16MHZ means:
;   Main oszillation        =  4 MHz, PLL is activated
;   CPU clock (CLKB)        = 64 MHZ
;   Peripheral clock (CLKP) = 16 MHZ
;   Ext. bus clock (CLKT)   = 32 MHZ
;   CAN clock (CLKCAN)      = 16 MHz, using PLLx 
;
; - CLOCK_USER: 
;   The user configuration definded in the chapter "Definition of Configurations" is set.
;
; Note: Not all  frequencies  are supported  by every device.  Please see  the  hardware 
;       manual.
;
;=========================================================================================
; 4.7.2  Select Clock Modulator  
;=========================================================================================
;
#set    CLOMO           OFF                     ; <<< Enable /disable clock modulator      
;
#set    CMPR            0x026F                  ; <<< Ref. to the data sheet, CMPR
; 
; Please  refer  to the data sheet  of the device  if you  enable clock modulation.  The 
; register CMPR dependant on the PLL-Clock.
;
; Note: If the CLKCAN source is set either to main oscillator or to PLL  output then the
;       clock  for  the CAN  is not influenced by  the clock  modulation.  If the CLKCAN 
;       source is set CPU clock (CLKB) then the clock for the CAN is also modulated  (if 
;       the clock modulator is enabled).
;
; Note: If the clock modulator is enabled,  the wait states  of the  internal flash wait 
;       states  must  be  adapted  to  maximum frequency.  Please check the  wait states 
;       settings.
;
; Note: This feature  is not supported by every device,  e.g. MB91461.  Please check the 
;       data sheet.
;
;=========================================================================================
; 4.8  External Bus Interface
;
;      The rest of the configuration is only applicable for devices with an external bus 
;      interface.
;
;      If the device does not offer an external bus interface,  the configuration can be 
;      stoped at this point.
;
;=========================================================================================
; 5  Definition of Configurations
;=========================================================================================
;
#set    NOCLOCK         0                       ; do not touch CKSCR register
#set    MAINCLOCK       1                       ; select main clock 
;                                               ; MB91461R : 1/4 of oscillation input
;                                               ; Others:    1/2 of oscillation input
#set    MAINPLLCLOCK    2                       ; select main clock with PLL
#set    SUBCLOCK        3                       ; select subclock (if available)
;
#set    PSCLOCK_CLKB    0x00                    ; select core clock (initial)
#set    PSCLOCK_PLL     0x10                    ; select PLL output (x)
#set    PSCLOCK_MAIN    0x30                    ; select Main Oscillation
;
;=========================================================================================
; 5.1  CLOCKSPEED == CLOCK_USER <<<
;=========================================================================================
; Must be configured only in the case of CLOCKSPEED is set to CLOCK_USER. Please see the 
; corresponding application note.
;
#if (CLOCKSPEED == CLOCK_USER )
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; <<< Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; <<< Subclock: ON/OFF
  #set  PLLSPEED        0x010F                  ; <<< 0x48Ch, 0x48Dh: PLLDIVM/N ; 64 MHz
  #set  DIV_G           0x0F                    ; <<< 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x0F                    ; <<< 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; <<< 0x486h: DIV0R_B;   => /1  ; 64 MHz       
  #set  PERCLOCK        0x03                    ; <<< 0x486h: DIV0R_P;   => /4  ; 16 MHz 
  #set  EXTBUSCLOCK     0x01                    ; <<< 0x487h: DIV1R_T;   => /2  ; 32 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; <<< 0x4C0h: CANPRE;    => PLLx;128 MHz
  #set  PSDVC           0x07                    ; <<< 0x4C0h: CANPRE_DVC;=> /8  ; 16 MHz
  #set  CANCLOCK        0x00                    ; <<< 0x4C1h: CANCKD;    
  ; Voltage Regulator 
  #set  REGULATORSEL    0x06                    ; <<< 0x4CEh: REGSEL;
  #set  REGULATORCTRL   0x00                    ; <<< 0x4CFh: REGCTR;
  ; Memory Controller
  #set  FLASHCONTROL    0x032                   ; <<< 0x7002h: FCHCR;
  #set  FLASHREADT      0xC413                  ; <<< 0x7004h: FMWT;
  #set  FLASHMWT2       0x10                    ; <<< 0x7006h: FMWT2;
#endif  
;
;=========================================================================================
; 5.2  CLOCKSPEED == NO_CLOCK
;=========================================================================================
;
#if (CLOCKSPEED == NO_CLOCK )
    #set CLOCKSOURCE       NOCLOCK 
#endif      
;
;=========================================================================================
; 5.2  CLOCKSPEED == SUB_32KHZ_CPU__32KHZ_PER_32KHZ_EXT_32KHZ_CAN__2MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == SUB_32KHZ_CPU__32KHZ_PER_32KHZ_EXT_32KHZ_CAN__2MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91463N) || (DEVICE == MB91461R) 
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     SUBCLOCK                ; Clocksource
  #set  ENABLE_SUBCLOCK ON                      ; Subclock: ON/OFF
  #set  PLLSPEED        0x010F                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ;   n. a.
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x0F                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;  32 KHz       
  #set  PERCLOCK        0x00                    ; 0x486h: DIV0R_P;    => /1    ;  32 KHz  
  #set  EXTBUSCLOCK     0x00                    ; 0x487h: DIV1R_T;    => /1    ;  32 KHz  
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_MAIN            ; 0x4C0h: CANPRE;     => MAIN  ;   4 MHz
  #set  PSDVC           0x01                    ; 0x4C0h: CANPRE_DVC; => /2    ;   2 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  #set  REGULATORSEL    0x06                    ; 0x4CEh: REGSEL;
  #set  REGULATORCTRL   0x00                    ; 0x4CFh: REGCTR;
  ; Memory Controller
  #set  FLASHCONTROL    0x032                   ; 0x7002h: FCHCR;
  #set  FLASHREADT      0xC100                  ; 0x7004h: FMWT; 
  #set  FLASHMWT2       0x00                    ; 0x7006h: FMWT2;
#endif 
;
;=========================================================================================
; 5.3  CLOCKSPEED == MAIN__4MHZ_CPU___2MHZ_PER__1MHZ_EXT__1MHZ_CAN__2MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == MAIN_4MHZ_CPU___2MHZ_PER__1MHZ_EXT__1MHZ_CAN__2MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91461R) 
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINCLOCK               ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x010F                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ;   n. a.
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x0F                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;   2 MHz       
  #set  PERCLOCK        0x01                    ; 0x486h: DIV0R_P;    => /2    ;   1 MHz 
  #set  EXTBUSCLOCK     0x01                    ; 0x487h: DIV1R_T;    => /2    ;   1 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_MAIN            ; 0x4C0h: CANPRE;     => PLLx  ;   4 MHz
  #set  PSDVC           0x01                    ; 0x4C0h: CANPRE_DVC; => /2    ;   2 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  #set  REGULATORSEL    0x06                    ; 0x4CEh: REGSEL;
  #set  REGULATORCTRL   0x00                    ; 0x4CFh: REGCTR;
  ; Memory Controller
  #set  FLASHCONTROL    0x032                   ; 0x7002h: FCHCR;
  #set  FLASHREADT      0xC100                  ; 0x7004h: FMWT;
  #set  FLASHMWT2       0x00                    ; 0x7006h: FMWT2;  
#endif           
;
;=========================================================================================
; 5.4  CLOCKSPEED == PLL_4MHZ__CPU__48MHZ_PER_16MHZ_EXT_24MHZ_CAN_16MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == PLL_4MHZ__CPU__48MHZ_PER_16MHZ_EXT_24MHZ_CAN_16MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91461R) 
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x010B                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ;  48 MHz
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x0B                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;  48 MHz       
  #set  PERCLOCK        0x02                    ; 0x486h: DIV0R_P;    => /3    ;  16 MHz 
  #set  EXTBUSCLOCK     0x01                    ; 0x487h: DIV1R_T;    => /2    ;  24 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; 0x4C0h: CANPRE;     => PLLx  ;  96 MHz
  #set  PSDVC           0x05                    ; 0x4C0h: CANPRE_DVC; => /6    ;  16 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  #if (DEVICE == MB91469G) 
   #set REGULATORSEL    0x36                    ; 0x4CEh: REGSEL;
  #else
   #set REGULATORSEL    0x06                    ; 0x4CEh: REGSEL;
  #endif    
  #set REGULATORCTRL    0x00                    ; 0x4CFh: REGCTR;    
   ; Memory Controller
  #set  FLASHCONTROL    0x032                   ; 0x7002h: FCHCR;
  #set  FLASHREADT      0xC201                  ; 0x7004h: FMWT;
  #set  FLASHMWT2       0x00                    ; 0x7006h: FMWT2;   
#endif        
;
;=========================================================================================
; 5.5  CLOCKSPEED == PLL_4MHZ__CPU__64MHZ_PER_16MHZ_EXT_32MHZ_CAN_16MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == PLL_4MHZ__CPU__64MHZ_PER_16MHZ_EXT_32MHZ_CAN_16MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91461R) 
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x010F                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ;  64 MHz
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x0F                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;  64 MHz       
  #set  PERCLOCK        0x03                    ; 0x486h: DIV0R_P;    => /4    ;  16 MHz 
  #set  EXTBUSCLOCK     0x01                    ; 0x487h: DIV1R_T;    => /2    ;  32 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; 0x4C0h: CANPRE;     => PLLx  ; 128 MHz
  #set  PSDVC           0x07                    ; 0x4C0h: CANPRE_DVC; => /8    ;  16 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  #set  REGULATORSEL    0x06                    ; 0x4CEh: REGSEL;
  #set  REGULATORCTRL   0x00                    ; 0x4CFh: REGCTR;
  ; Memory Controller
  #set  FLASHCONTROL    0x032                   ; 0x7002h: FCHCR;
  #set  FLASHREADT      0xC413                  ; 0x7004h: FMWT;
  #set  FLASHMWT2       0x10                    ; 0x7006h: FMWT2;
#endif  
;
;=========================================================================================
; 5.6  CLOCKSPEED == PLL_4MHZ__CPU__80MHZ_PER_20MHZ_EXT_27MHZ_CAN_20MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == PLL_4MHZ__CPU__80MHZ_PER_20MHZ_EXT_27MHZ_CAN_20MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91461R) 
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x0113                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ;  80 MHz
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x13                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;  80 MHz       
  #set  PERCLOCK        0x03                    ; 0x486h: DIV0R_P;    => /4    ;  20 MHz 
  #set  EXTBUSCLOCK     0x02                    ; 0x487h: DIV1R_T;    => /3    ;  27 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; 0x4C0h: CANPRE;     => PLLx  ; 160 MHz
  #set  PSDVC           0x07                    ; 0x4C0h: CANPRE_DVC; => /8    ;   8 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  #set  REGULATORSEL    0x06                    ; 0x4CEh: REGSEL;
  #set  REGULATORCTRL   0x00                    ; 0x4CFh: REGCTR;
  ; Memory Controller
  #set  FLASHCONTROL    0x032                   ; 0x7002h: FCHCR;
  #set  FLASHREADT      0xC413                  ; 0x7004h: FMWT;
  #set  FLASHMWT2       0x10                    ; 0x7006h: FMWT2;
#endif      
;
;=========================================================================================
; 5.7  CLOCKSPEED == PLL_4MHZ__CPU__80MHZ_PER_20MHZ_EXT_40MHZ_CAN_20MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == PLL_4MHZ__CPU__80MHZ_PER_20MHZ_EXT_40MHZ_CAN_20MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91461R) 
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x0113                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ;  80 MHz
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x13                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;  80 MHz       
  #set  PERCLOCK        0x03                    ; 0x486h: DIV0R_P;    => /4    ;  20 MHz 
  #set  EXTBUSCLOCK     0x01                    ; 0x487h: DIV1R_T;    => /2    ;  40 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; 0x4C0h: CANPRE;     => PLLx  ; 160 MHz
  #set  PSDVC           0x07                    ; 0x4C0h: CANPRE_DVC; => /8    ;   8 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  #set  REGULATORSEL    0x06                    ; 0x4CEh: REGSEL;
  #set  REGULATORCTRL   0x00                    ; 0x4CFh: REGCTR;
  ; Memory Controller
  #set  FLASHCONTROL    0x032                   ; 0x7002h: FCHCR;
  #set  FLASHREADT      0xC413                  ; 0x7004h: FMWT;
  #set  FLASHMWT2       0x10                    ; 0x7006h: FMWT2;
#endif      
;
;=========================================================================================
; 5.8  CLOCKSPEED == PLL_4MHZ__CPU__96MHZ_PER_16MHZ_EXT_48MHZ_CAN_16MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == PLL_4MHZ__CPU__96MHZ_PER_16MHZ_EXT_48MHZ_CAN_16MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91464A) || (DEVICE == MB91465K) || (DEVICE == MB91463N) ||\
      (DEVICE == MB91461R) || (DEVICE == MB91467R)
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x0117                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ;  96 MHz
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x17                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;  64 MHz       
  #set  PERCLOCK        0x05                    ; 0x486h: DIV0R_P;    => /6    ;  16 MHz 
  #set  EXTBUSCLOCK     0x01                    ; 0x487h: DIV1R_T;    => /2    ;  32 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; 0x4C0h: CANPRE;     => PLLx  ; 192 MHz
  #set  PSDVC           0x0B                    ; 0x4C0h: CANPRE_DVC; => /12   ;  16 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  #if (DEVICE == MB91469G) 
   #set REGULATORSEL    0x36                    ; 0x4CEh: REGSEL;
  #else
   #set REGULATORSEL    0x06                    ; 0x4CEh: REGSEL;
  #endif    
  #set REGULATORCTRL    0x00                    ; 0x4CFh: REGCTR;    
  ; Memory Controller
  #set FLASHCONTROL     0x032                   ; 0x7002h: FCHCR;
  #set FLASHREADT       0xC413                  ; 0x7004h: FMWT;
  #set FLASHMWT2        0x10                    ; 0x7006h: FMWT2;
#endif        
;
;=========================================================================================
; 5.9  CLOCKSPEED == PLL_4MHZ__CPU_100MHZ_PER_20MHZ_EXT_50MHZ_CAN_20MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == PLL_4MHZ__CPU_100MHZ_PER_20MHZ_EXT_50MHZ_CAN_20MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91464A) || (DEVICE == MB91465K) || (DEVICE == MB91463N) ||\
      (DEVICE == MB91461R) || (DEVICE == MB91467R) || (DEVICE == MB91467D)
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x0118                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ; 100 MHz
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x17                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ; 100 MHz       
  #set  PERCLOCK        0x04                    ; 0x486h: DIV0R_P;    => /5    ;  20 MHz 
  #set  EXTBUSCLOCK     0x01                    ; 0x487h: DIV1R_T;    => /2    ;  50 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; 0x4C0h: CANPRE;     => PLLx  ; 200 MHz
  #set  PSDVC           0x09                    ; 0x4C0h: CANPRE_DVC; => /10   ;  20 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  #if (DEVICE == MB91469G) 
   #set REGULATORSEL    0x36                    ; 0x4CEh: REGSEL;
  #else
   #set REGULATORSEL    0x06                    ; 0x4CEh: REGSEL;
  #endif    
  #set  REGULATORCTRL   0x00                    ; 0x4CFh: REGCTR;    
  ; Memory Controller
  #set  FLASHCONTROL    0x032                   ; 0x7002h: FCHCR;
  #set  FLASHREADT      0xC413                  ; 0x7004h: FMWT;
  #set  FLASHMWT2       0x10                    ; 0x7006h: FMWT2;
#endif        
;
;=========================================================================================
; 5.10  CLOCKSPEED == PLL_10MHZ_CPU__60MHZ_PER_20MHZ_EXT_30MHZ_CAN_20MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == PLL_10MHZ_CPU__60MHZ_PER_20MHZ_EXT_30MHZ_CAN_20MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91464A) || (DEVICE == MB91467B) || (DEVICE == MB91467C) ||\
      (DEVICE == MB91467D) || (DEVICE == MB91469G) || (DEVICE == MB91465K) ||\
      (DEVICE == MB91463N) || (DEVICE == MB91467R) || (DEVICE == MB91465X) 
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x0105                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ;  60 MHz
  #set  DIV_G           0x0B                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x1F                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;  60 MHz       
  #set  PERCLOCK        0x02                    ; 0x486h: DIV0R_P;    => /3    ;  20 MHz 
  #set  EXTBUSCLOCK     0x01                    ; 0x487h: DIV1R_T;    => /2    ;  30 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; 0x4C0h: CANPRE;     => PLLx  ; 120 MHz
  #set  PSDVC           0x05                    ; 0x4C0h: CANPRE_DVC; => /6    ;  20 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  ; -
  ; Memory Controller
  ; -
#endif        
;
;=========================================================================================
; 5.11  CLOCKSPEED == PLL_20MHZ_CPU__60MHZ_PER_20MHZ_EXT_30MHZ_CAN_20MHZ 
;=========================================================================================
;
#if (CLOCKSPEED == PLL_20MHZ_CPU__60MHZ_PER_20MHZ_EXT_30MHZ_CAN_20MHZ )
;
; Start restriction; Maximum frequency
  #if (DEVICE == MB91464A) || (DEVICE == MB91467B) || (DEVICE == MB91467C) ||\
      (DEVICE == MB91467D) || (DEVICE == MB91469G) || (DEVICE == MB91465K) ||\
      (DEVICE == MB91463N) || (DEVICE == MB91467R) || (DEVICE == MB91465X) 
     #error: Frequency is not supported by this device.
  #endif 
; End restriction
;
  #set  CLOCKSOURCE     MAINPLLCLOCK            ; Clocksource
  #set  ENABLE_SUBCLOCK OFF                     ; Subclock: ON/OFF
  #set  PLLSPEED        0x0102                  ; 0x48Ch, 0x48Dh: PLLDIVM/N    ; 60 MHz
  #set  DIV_G           0x0F                    ; 0x48Eh: PLLDIVG; 
  #set  MUL_G           0x1F                    ; 0x48Fh: PLLMULG;     
  ; Clock Divider
  #set  CPUCLOCK        0x00                    ; 0x486h: DIV0R_B;    => /1    ;  60 MHz       
  #set  PERCLOCK        0x02                    ; 0x486h: DIV0R_P;    => /3    ;  20 MHz 
  #set  EXTBUSCLOCK     0x01                    ; 0x487h: DIV1R_T;    => /2    ;  30 MHz 
  ; CAN Clock
  #set  PSCLOCKSOURCE   PSCLOCK_PLL             ; 0x4C0h: CANPRE;     => PLLx  ; 120 MHz
  #set  PSDVC           0x05                    ; 0x4C0h: CANPRE_DVC; => /6    ;  20 MHz
  #set  CANCLOCK        0x00                    ; 0x4C1h: CANCKD; all CAN Clocks enabled
  ; Voltage Regulator 
  ; -
  ; Memory Controller
  ; -
#endif  
;      
;=========================================================================================
; 6  Section and Data Declaration
;=========================================================================================

        .export __start             
        .import _main
        .import _RAM_INIT
        .import _ROM_INIT
;=========================================================================================
; 6.1  Define Stack Size
;=========================================================================================
 .SECTION  SSTACK, STACK, ALIGN=4
#if STACK_RESERVE == ON
        .EXPORT         __systemstack, __systemstack_top
 __systemstack:
        .RES.B          STACK_SYS_SIZE
 __systemstack_top: 
#endif
 
        .SECTION  USTACK, STACK, ALIGN=4
#if STACK_RESERVE == ON
         .EXPORT        __userstack, __userstack_top
 __userstack:
        .RES.B          STACK_USR_SIZE
 __userstack_top:
 
#endif
;=========================================================================================
; 6.2  Define Sections
;=========================================================================================
        .section        DATA,  data,  align=4
        .section        INIT,  data,  align=4
        .section        IRAM,  code,  align=4
        .section        CONST, const, align=4
        .section        INTVECT, const, align=4 
        
#if I_RAM 
        .import _RAM_IRAM
        .import _ROM_IRAM
#endif
                    
#if (DEVICE != MB91461R)
    #if (DEVICE == MB91469G)
        .section        SECURITY_VECTORS, code, locate = 0x248000
    #else 
        .section        SECURITY_VECTORS, code, locate = 0x148000
    #endif
    
    #if (BOOT_FLASH_SEC == OFF)        
        .data.w 0xFFFFFFFF
        .data.w 0xFFFFFFFF
        .data.w 0xFFFFFFFF
        .data.w 0xFFFFFFFF       
    #else
        .res.w          4
    #endif         
#endif     
   
;-----------------------------------------------------------------------------------------
; MACRO Clear RC Watchdog
;-----------------------------------------------------------------------------------------
#macro  ClearRCwatchdog
        LDI             #0x4C7,R7               ; clear RC watchdog
        BANDL           #0x7,@R7
#endm
;-----------------------------------------------------------------------------------------
; MACRO WAIT_LOOP
;-----------------------------------------------------------------------------------------
#macro wait_loop loop_number
#local _wait64_loop
        LDI             #loop_number, R0
_wait64_loop:
        ADD             #-1, R0
        BNE             _wait64_loop
#endm
        .section        CODE, code, align=4
        .section        CODE_START, code, align=4
#pragma section CODE=IRAM,attr=CODE


;=========================================================================================
; 7.  S T A R T 
;=========================================================================================
__start:                                        ; start point   
startnop: 
        NOP       
;   
        ANDCCR          #0xEF                   ; disable interrupts   
        STILM           #LOW_PRIOR              ; set interrupt level to low prior
        ClearRCwatchdog                         ; clear harware watchdog

;=========================================================================================
; 7.1  Initialise Stack Pointer and Table Base Register
;=========================================================================================
#if STACKUSE == SYSSTACK       
        ORCCR           #0x20
        LDI             #__userstack_top, SP    ; initialize SP
        ANDCCR          #0xDF
        LDI             #__systemstack_top, SP  ; initialize SP
#endif

#if STACKUSE == USRSTACK
        ANDCCR          #0xDF
        LDI             #__systemstack_top, SP  ; initialize SP
        ORCCR           #0x20
        LDI             #__userstack_top, SP    ; initialize SP
#endif

        LDI             #INTVECT, R0            ; set Table Base
smd_tbr: 
        MOV             R0, TBR         

#if (CLOCKSOURCE != NOCLOCK)                                          
;=========================================================================================
; 7.2  Check for CSV reset and set CSV
;=========================================================================================
; Start restriction; No clock supervisor (CSV)
#if (DEVICE != MB91461R) && (DEVICE != MB91467R) && (DEVICE != MB91463N)
; End restriction
        LDI:20          #0x04AD, R0             ; CSVCR
        BORL            #0x8, @R0               ; Enable Main Osc CSV
        BTSTH           #0x4, @R0               ; Check for Main Osc missing
        BEQ             NoMAINCSVreset          ; Main osc available -> branch 
                                                ;   to NoCSVreset
        BANDL           #0x7, @R0               ; Disable Main Osc CSV
        
        LDI             #noClockStartup, R0     ; Main Clock missing -> no
        JMP             @R0                     ; clock startup
                                                
NoMAINCSVreset: 


        BORL            #0x4, @R0               ; Enable Sub Osc CSV
        BTSTH           #0x2, @R0               ; Check for Sub Osc missing
        BEQ             NoSUBCSVreset           ; Sub osc available -> branch 
                                                ;   to NoCSVreset
        BANDL           #0xB, @R0               ; Disable Sub Osc SCSV
#if (CLOCKSOURCE == SUBCLOCK)
        LDI             #noClockStartup, R0     ; Sub Clock missing -> no
        JMP             @R0                     ; clock startup
#endif                                                
NoSUBCSVreset:       
#endif        
;=========================================================================================
; 7.3  Check Clock Condition
;=========================================================================================
        LDI             #0x484, R0              ; Check for Default Values
        LDI             #0x0F, R1               
        ANDB            R1, @R0
        BEQ             clock_startup 

;=========================================================================================
; 7.4  Restore Default Settings after Reset
;=========================================================================================
;=========================================================================================
; 7.4.1  Disable Clock Modulator
;=========================================================================================
        LDI             #0x04BB, R0             ; Clock Modulator Control Reg
        BANDL           #0xD, @R0               ; Disable Frequency modulation
FMODwait:        
        BTSTL           #8, @R0                 ; Wait until Frequency modulation
        BNE             FMODwait                ; is disabled
        
        BANDL           #0xE, @R0               ; Power down clock modulator

;=========================================================================================
; 7.4.2  Check if running on Sub Clock, change to Main Clock
;=========================================================================================
        LDI:20          #0x0484,R12             ; Check if running on sub clock
        LDUB            @R12,R0
        LDI:8           #0x3,R1
        AND             R1,R0
        CMP             #0x3,R0
        BNE             notOnSubClock
        
        LDI:20          #0x04CC,R12             ; Check if Main Clock is stopped
        BTSTL           #1, @R12
        BEQ             mainNotStopped

        BANDL           #0xE, @R12              ; Start Main Oscillation
                        
        LDI             #0x4C8, R0              ; Main Stabilisation Wait Time
        LDI             #0x04, R1               ; 32.7 ms
        AND             R1, @R0  
        BORH            #0x02, @R0      
        
        mainStabTime:                           ; Wait for stabilisation time
        ClearRCwatchdog                         ; clear harware watchdog
        BTSTH           #8, @R0
        BEQ             mainStabTime
        LDI             #0x0, R1
        STB             R1, @R0

mainNotStopped:        
        LDI:20          #0x0484, R12            ; disable sub clock as source
        BANDL           #0xD, @R12              ; Clock source = 0x01 (Main/2)  
                                                       
notOnSubClock:
;=========================================================================================
; 7.4.3  Disable Sub Clock
;=========================================================================================
#if ENABLE_SUBCLOCK != ON
        LDI             #0x0484, R0             ; Clock source control reg CLKR
        BANDL           #0x7, @R0               ; Disable PLL
#endif       

;=========================================================================================
; 7.4.4  Check if running on PLL, Gear Down PLL
;=========================================================================================
        LDI:20          #0x0484,R12             ; Check if running on PLL
        LDUB            @R12,R0
        LDI:8           #0x3,R1
        AND             R1,R0
        CMP             #0x2,R0
        BNE             notOnPll
                    
        LDI:20          #0x0490, R11            ; clear flags  
        LDI:8           #0x0,R1        
        STB             R1, @R11
        LDI             #0x04,R1
        STB             R1, @R11                ; Set Flag for Simulator; no Effekt on
                                                ; Emulator      

        BANDL           #0xC, @R12              ; disable PLL as clock source  
                                                ; Clock Source = 0x00 (Main/2)
                                                    
        LDI:20          #0x048E,R12             ; check if DivG != 0
        LDUB            @R12, R0
        LDI:8           #0xFF,R1
        AND             R1,R0
        BEQ             notOnPll
                                                                                          
gearDownLoop:    
        ClearRCwatchdog                         ; clear harware watchdog
        BTSTL           #4, @R11                ; Gear Down
        BEQ             gearDownLoop            ; 
 
        LDI             #0x00,R1                ; Clear Flags
        STB             R1, @R11                ;       
        
notOnPll:
;=========================================================================================
; 7.4.5  Disable PLL
;=========================================================================================
        LDI             #0x0484, R0             ; Clock source control reg CLKR
        BANDL           #0xB, @R0               ; Disable PLL
        
;=========================================================================================
; 7.4.6  Set to Main Clock
;=========================================================================================
        LDI:20          #0x0484,R12             ; Check if running on PLL
        BANDL           #0xC, @R12              ; disable PLL as clock source  
                                                ; Clock Source = 0x00 (Main/2)

clock_startup:
;=========================================================================================
; 7.5  Set Memory Controller
;=========================================================================================
; Start restriction; No embedded flash
#if DEVICE != MB91461R
; End restriction
        LDI             #0x7002, R1             ; FLASH Controller Reg.
        LDI             #FLASHCONTROL, R2       ; Flash Controller Settings
        STH             R2, @R1                 ; set register
        LDI             #0x7004, R1             ; FLASH Memory Wait Timing Reg.
        LDI             #FLASHREADT, R2         ; wait settings
        STH             R2, @R1                 ; set register
        LDI             #0x7006, R1             ; FLASH Memory Wait Timing Reg.
        LDI             #FLASHMWT2, R2          ; wait settings
        STB             R2, @R1                 ; set register               
#endif                
        ClearRCwatchdog   
                                                       
;=========================================================================================
; 7.6  Clock startup
;=========================================================================================
;=========================================================================================
; 7.6.1  Set Voltage Regulator Settings
;=========================================================================================
; Start restriction; No regulator settings
#if DEVICE != MB91461R
; End restriction
        LDI             #0x04CF, R0             ; REGCTR
        LDI             #REGULATORCTRL, R1
        STB             R1, @R0

        LDI             #0x04CE, R0             ; REGSEL
        LDI             #REGULATORSEL, R1
        STB             R1, @R0
#endif

;=========================================================================================
; 7.6.2  Power on Clock Modulator - Clock Modulator Part I
;=========================================================================================
#if CLOMO == ON 
        LDI             #0x04BB, R0             ; Clock Modulator Control Reg
        LDI             #0x11, R1               ; Load value to Power on CM
        ORB             R1, @R0                 ; Power on clock modulaor
#endif

;=========================================================================================
; 7.6.3  Set CLKR Register w/o Clock Mode
;=========================================================================================
; Set Clock source (Base Clock) for the three clock tree selections
; This select Base clock is used to select afterwards the 3
; Clocks for the diffenrent internal trees.
; When PLL is used, first pll multiplication ratio is set and PLL is
; enabled. After waiting the PLL stabilisation time via timebase
; timer, PLL clock is selected as clock source. 
        LDI             #0x048C, R0             ; PLL Cntl Reg. PLLDIVM/N
        LDI:20          #PLLSPEED, R1
        STH             R1, @R0

        LDI             #0x048E, R0             ; PLL Cntl Reg. PLLDIVG
        LDI             #DIV_G, R1
        STB             R1, @R0

        LDI             #0x048F, R0             ; PLL Cntl Reg. PLLMULG
        LDI             #MUL_G, R1
        STB             R1, @R0

;=========================================================================================
; 7.6.4  Start PLL 
;=========================================================================================
#if ( ( CLOCKSOURCE == MAINPLLCLOCK ) || ( PSCLOCKSOURCE == PSCLOCK_PLL ) )
        LDI             #0x0484, R0             ; Clock source control reg CLKR
        LDI             #0x04, R1               ; Use PLL x1, enable PLL 
        ORB             R1, @R0                 ; store data to CLKR register
#endif
       
       
#if ENABLE_SUBCLOCK == ON
        LDI             #0x0484, R0             ; Clock source control reg CLKR
        LDI             #0x08, R1               ; enable subclock operation
        ORB             R1, @R0                 ; store data to CLKR register
        LDI             #0x4CA, R0              ; Sub Clock oszilation 
        LDI             #0x00, R1               ; stabilitsation time = 32 ms
        AND             R1, @R0  
        BORH            #0x02, @R0      
#endif      
      
;=========================================================================================
; 7.6.5  Wait for PLL oscillation stabilisation
;=========================================================================================
#if ((CLOCKSOURCE==MAINPLLCLOCK)||(PSCLOCKSOURCE==PSCLOCK_PLL))
        LDI             #0x0482, R12            ; TimeBaseTimer TBCR
        LDI             #0x00, R1               ; set 1024 us @ 2 MHz 
        STB             R1, @R12

        BANDH           #7, @R12                ; clear interrupt flag
        
        LDI             #0x0483, R0             ; clearTimeBaseTimer CTBR
        LDI             #0xA5, R1                 
        STB             R1, @R0
        LDI             #0x5A, R1                 
        STB             R1, @R0
        
        BANDH           #7, @R12                ; clear interrupt flag
        BORH            #8, @R12                ; set interrupt flag for simulator

PLLwait:        
        ClearRCwatchdog                         ; clear harware watchdog
        BTSTH           #8, @R12
        BEQ             PLLwait
#endif

;=========================================================================================
; 7.6.6  Set clocks 
;=========================================================================================
;=========================================================================================
; 7.6.6.1  Set CPU and peripheral clock 
;=========================================================================================
; CPU and peripheral clock are set in one register
        LDI             #0x0486, R2             ; Set DIVR0 (CPU-clock (CLKB)  
        LDI             #((CPUCLOCK << 4) + PERCLOCK), R3 ; Load CPU clock setting
        STB             R3, @R2               
;=========================================================================================
; 7.6.6.2  Set External Bus interface clock
;=========================================================================================
; set External Bus clock
; Be aware to do smooth clock setting, to avoid wrong clock setting
; Take care, always write 0 to the lower 4 bits of DIVR1 register
        LDI             #0x0487, R2             ; Set DIVR1  
        LDI             #(EXTBUSCLOCK << 4), R3 ; Load Peripheral clock setting
        STB             R3, @R2 
        
;=========================================================================================
; 7.6.6.3  Set CAN clock prescaler
;=========================================================================================
; Set CAN Prescaler, only clock relevant parameter 
        LDI             #0x04C0, R0             ; Set CAN ClockParameter Register
        LDI             #(PSCLOCKSOURCE + PSDVC), R1     ; Load Divider
        STB             R1, @R0                          ; Set Divider
; enable CAN clocks
        LDI             #0x04c1, R0             ; Set CAN Clock enable Register
        LDI             #CANCLOCK, R1           ; Load CANCLOCK
        STB             R1, @R0                 ; set CANCLOCK

;=========================================================================================
; 7.6.6.4  Switch Main Clock Mode
;=========================================================================================
#if CLOCKSOURCE == MAINCLOCK

;=========================================================================================
; 7.6.6.5  Switch Subclock Mode
;=========================================================================================
#elif ( (CLOCKSOURCE == SUBCLOCK) )
    #if ENABLE_SUBCLOCK == ON
        LDI             #0x4CA, R12
subStabTime:        
        ClearRCwatchdog                         ; clear harware watchdog
        BTSTH           #8, @R12                ; wait until sub clock stabilisation
        BEQ             subStabTime             ; time is over
        LDI             #0x0, R1
        STB             R1, @R12

        LDI             #0x0484, R0             ; Clock source control reg CLKR
        LDI             #0x01, R1               ; load value to select main clock
        ORB             R1, @R0                 ; enable main clock (1/2 external)        
        LDI             #0x03, R1               ; load value to select subclock
        ORB             R1, @R0                 ; enable subclock as clock source       
    #else
        #error: Wrong setting! The clock source is subclock, but the subclock is disabled.
    #endif

;=========================================================================================
; 7.6.7  Switch to PLL Mode
;=========================================================================================
#elif ( (CLOCKSOURCE == MAINPLLCLOCK) )

#if (DIV_G != 0x00)
        LDI             #0x0490, R0             ; PLL Ctrl Register   
        LDI             #0x00,R1
        STB             R1, @R0                 ; Clear Flag
        LDI             #0x01,R1
        STB             R1, @R0                 ; Set Flag for Simulator; no Effekt on
#endif                                                ; Emulator
 
        LDI             #0x0484, R3             ; Clock source control reg CLKR
        BORL            #0x2, @R3               ; enable PLL as clock source                                               
                                                
#if (DIV_G != 0x00)                                                
gearUpLoop:    
        ClearRCwatchdog                         ; clear harware watchdog
        LDUB            @R0, R2                 ; LOAD PLLCTR to R2
        AND             R1, R2                  ; GRUP, counter reach 0
        BEQ             gearUpLoop

        LDI             #0x00,R1
        STB             R1, @R0                 ; Clear Gear-Up Flag
#endif         
     
#endif

;=========================================================================================
; 7.6.8  Enable Frequncy Modulation - Clock Modulator Part II
;=========================================================================================
#if CLOMO == ON                                 ; Only applicable if Modulator is on
        LDI             #0x04B8, R0             ; Clock Modulation Parameter Reg
        LDI             #CMPR, R1               ; Load CMP value
        STH             R1, @R0                 ; Store CMP value in CMPR

        LDI             #0x04BB, R0             ; Clock Modulator Control Reg
        LDI             #0x13, R1               ; Load value to FM on CM
        ORB             R1, @R0                 ; FM on 
#endif

#endif
noClockStartup:

;=========================================================================================
; 7.7  Set BusInterface
;=========================================================================================
; Start restriction; No ext. bus interface
#if (DEVICE != MB91464A) && (DEVICE != MB91467C) && (DEVICE != MB91465K) &&  \
    (DEVICE != MB91463N) && (DEVICE != MB91465X)
; End restriction
        NOP
smd_cs_mb91461r:
emu_sram_cs_mb91461r:
smd_cs:

#endif                                          ; #endif (excl. devices)
        ClearRCwatchdog

;=========================================================================================
; 7.8  Copy code from Flash to I-RAM 
;=========================================================================================
#if I_RAM == ON
        LDI             #_RAM_IRAM, R0
        LDI             #_ROM_IRAM, R1
        LDI             #sizeof(IRAM), R13
        CMP             #0, R13
        BEQ             copy_iram_end
copy_iram1: 
        ADD             #-1, R13
        LDUB            @(R13, R1), R12
        BNE:D           copy_iram1
        STB             R12, @(R13, R0)
copy_iram_end: 
        ClearRCwatchdog
#endif

;=========================================================================================
; Standard C startup
;=========================================================================================
;=========================================================================================
; 7.10  Clear data 
;=========================================================================================
; clear DATA section
; According to ANSI, the DATA section must be cleared during start-up
        LDI:8           #0, R0
        LDI             #sizeof DATA &~0x3, R1
        LDI             #DATA, R13
        CMP             #0, R1
        BEQ             data_clr1
data_clr0:
        ADD2            #-4, R1
        BNE:D           data_clr0
        ST              R0, @(R13, R1)
data_clr1:
        LDI:8           #sizeof DATA & 0x3, R1
        LDI             #DATA + (sizeof DATA & ~0x3), R13

        CMP             #0, R1
        BEQ             data_clr_end
data_clr2:
        ADD2            #-1, R1
        BNE:D           data_clr2
        STB             R0, @(R13, R1)
data_clr_end:
        ClearRCwatchdog
        
;=========================================================================================
; 7.11  Copy Init section from ROM to RAM
;=========================================================================================
; copy rom
; All initialised data's (e.g. int i=1) must be stored in ROM/FLASH area. 
; (start value)
; The Application must copy the Section (Init) into the RAM area.
        LDI             #_RAM_INIT, R0
        LDI             #_ROM_INIT, R1
        LDI             #sizeof(INIT), R2
        CMP             #0, R2
        BEQ:D           copy_rom_end
        LDI             #3, R12
        AND             R2, R12
        BEQ:D           copy_rom2
        MOV             R2, R13
        MOV             R2, R3
        SUB             R12, R3
copy_rom1:
        ADD             #-1, R13
        LDUB            @(R13, R1), R12
        CMP             R3, R13
        BHI:D           copy_rom1
        STB             R12, @(R13, R0)
        CMP             #0, R3
        BEQ:D           copy_rom_end
copy_rom2:
        ADD             #-4, R13
        LD              @(R13, R1), R12
        BGT:D           copy_rom2
        ST              R12, @(R13, R0)
copy_rom_end:
        ClearRCwatchdog

start_main:
;=========================================================================================
; 7.14  call main routine
;=========================================================================================
       ClearRCwatchdog                            ; clear harware watchdog
       LDI:8            #0, r4                    ; Set the 1st parameter for main to 0.
       CALL32:d         _main, r12
       LDI:8            #0, r5                    ; Set the 2nd parameter for main to 0.
;=========================================================================================
; 7.15  Return from main function
;=========================================================================================
end: 
        BRA            end  
        .end            __start
