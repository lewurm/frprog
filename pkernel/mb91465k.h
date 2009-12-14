/*  FR IO-MAP HEADER FILE      */
/*  =====================      */
/* CREATED BY IO-WIZARD V2.26    */
/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU     */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR     */
/* ELIGIBILITY FOR ANY PURPOSES.                                                 */
/*                 (C) Fujitsu Microelectronics Europe GmbH                      */
/*  */
/* ************************************************************************* */
/*                   Fujitsu Microelectronics Europe GmbH                    */
/*                    Pittlerstrasse 47, 63225 Langen */
/*                     Tel.: +49 (6103) 690-0, Fax -122                      */
/*                                                                           */
/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR */
/* ELIGIBILITY FOR ANY PURPOSES                                              */
/*                 (C) Fujitsu Microelectronics Europe GmbH                  */
/* ************************************************************************* */

/* ASSEMBLER DEFINITIONS : */

#ifdef  __IO_DEFINE
#define __IO_EXTERN
#else
#define __IO_EXTERN	extern volatile
#endif
#ifdef __IO_DEFINE
#pragma asm
 .GLOBAL _pdr14,    _pdr15,    _pdr16,    _pdr17,    _pdr18,    _pdr19
 .GLOBAL _pdr20,    _pdr21,    _pdr22,    _pdr24,    _pdr26,    _pdr27
 .GLOBAL _pdr28,    _pdr29,    _eirr0,    _enir0,    _elvr0,    _eirr1
 .GLOBAL _enir1,    _elvr1,    _dicr,     _hrcl,     _rbsync,   _scr00
 .GLOBAL _smr00,    _ssr00,    _rdr00,    _tdr00,    _escr00,   _eccr00
 .GLOBAL _scr01,    _smr01,    _ssr01,    _rdr01,    _tdr01,    _escr01
 .GLOBAL _eccr01,   _scr02,    _smr02,    _ssr02,    _rdr02,    _tdr02
 .GLOBAL _escr02,   _eccr02,   _scr03,    _smr03,    _ssr03,    _rdr03
 .GLOBAL _tdr03,    _escr03,   _eccr03,   _scr04,    _smr04,    _ssr04
 .GLOBAL _rdr04,    _tdr04,    _escr04,   _eccr04,   _fsr04,    _fcr04
 .GLOBAL _bgr00,    _bgr100,   _bgr000,   _bgr01,    _bgr101,   _bgr001
 .GLOBAL _bgr02,    _bgr102,   _bgr002,   _bgr03,    _bgr103,   _bgr003
 .GLOBAL _bgr04,    _bgr104,   _bgr004,   _ibcr0,    _ibsr0,    _itba0
 .GLOBAL _itbah0,   _itbal0,   _itmk0,    _itmkh0,   _itmkl0,   _ismk0
 .GLOBAL _isba0,    _idar0,    _iccr0,    _gcn10,    _gcn20,    _gcn11
 .GLOBAL _gcn21,    _gcn12,    _gcn22,    _ptmr00,   _pcsr00,   _pdut00
 .GLOBAL _pcn00,    _pcnh00,   _pcnl00,   _ptmr01,   _pcsr01,   _pdut01
 .GLOBAL _pcn01,    _pcnh01,   _pcnl01,   _ptmr02,   _pcsr02,   _pdut02
 .GLOBAL _pcn02,    _pcnh02,   _pcnl02,   _ptmr03,   _pcsr03,   _pdut03
 .GLOBAL _pcn03,    _pcnh03,   _pcnl03,   _ptmr04,   _pcsr04,   _pdut04
 .GLOBAL _pcn04,    _pcnh04,   _pcnl04,   _ptmr05,   _pcsr05,   _pdut05
 .GLOBAL _pcn05,    _pcnh05,   _pcnl05,   _ptmr06,   _pcsr06,   _pdut06
 .GLOBAL _pcn06,    _pcnh06,   _pcnl06,   _ptmr07,   _pcsr07,   _pdut07
 .GLOBAL _pcn07,    _pcnh07,   _pcnl07,   _ptmr08,   _pcsr08,   _pdut08
 .GLOBAL _pcn08,    _pcnh08,   _pcnl08,   _ptmr09,   _pcsr09,   _pdut09
 .GLOBAL _pcn09,    _pcnh09,   _pcnl09,   _ptmr10,   _pcsr10,   _pdut10
 .GLOBAL _pcn10,    _pcnh10,   _pcnl10,   _ptmr11,   _pcsr11,   _pdut11
 .GLOBAL _pcn11,    _pcnh11,   _pcnl11,   _ics01,    _ics23,    _ipcp0
 .GLOBAL _ipcp1,    _ipcp2,    _ipcp3,    _ocs01,    _ocs23,    _occp0
 .GLOBAL _occp1,    _occp2,    _occp3,    _aderh,    _aderl,    _ader
 .GLOBAL _adcs1,    _adcs0,    _adcs,     _adcr1,    _adcr0,    _adcr
 .GLOBAL _adct1,    _adct0,    _adct,     _adsch,    _adech,    _tmrlr0
 .GLOBAL _tmr0,     _tmcsr0,   _tmcsrh0,  _tmcsrl0,  _tmrlr1,   _tmr1
 .GLOBAL _tmcsr1,   _tmcsrh1,  _tmcsrl1,  _tmrlr2,   _tmr2,     _tmcsr2
 .GLOBAL _tmcsrh2,  _tmcsrl2,  _tmrlr3,   _tmr3,     _tmcsr3,   _tmcsrh3
 .GLOBAL _tmcsrl3,  _tmrlr4,   _tmr4,     _tmcsr4,   _tmcsrh4,  _tmcsrl4
 .GLOBAL _tmrlr5,   _tmr5,     _tmcsr5,   _tmcsrh5,  _tmcsrl5,  _tmrlr6
 .GLOBAL _tmr6,     _tmcsr6,   _tmcsrh6,  _tmcsrl6,  _tmrlr7,   _tmr7
 .GLOBAL _tmcsr7,   _tmcsrh7,  _tmcsrl7,  _tcdt0,    _tccs0,    _tcdt1
 .GLOBAL _tccs1,    _tcdt2,    _tccs2,    _tcdt3,    _tccs3,    _dmaca0
 .GLOBAL _dmacb0,   _dmaca1,   _dmacb1,   _dmaca2,   _dmacb2,   _dmaca3
 .GLOBAL _dmacb3,   _dmaca4,   _dmacb4,   _dmacr,    _ics45,    _ics67
 .GLOBAL _ipcp4,    _ipcp5,    _ipcp6,    _ipcp7,    _ocs45,    _ocs67
 .GLOBAL _occp4,    _occp5,    _occp6,    _occp7,    _tcdt4,    _tccs4
 .GLOBAL _tcdt5,    _tccs5,    _tcdt6,    _tccs6,    _tcdt7,    _tccs7
 .GLOBAL _roms,     _bsd0,     _bsd1,     _bsdc,     _bsrr,     _icr00
 .GLOBAL _icr01,    _icr02,    _icr03,    _icr04,    _icr05,    _icr06
 .GLOBAL _icr07,    _icr08,    _icr09,    _icr10,    _icr11,    _icr12
 .GLOBAL _icr13,    _icr14,    _icr15,    _icr16,    _icr17,    _icr18
 .GLOBAL _icr19,    _icr20,    _icr21,    _icr22,    _icr23,    _icr24
 .GLOBAL _icr25,    _icr26,    _icr27,    _icr28,    _icr29,    _icr30
 .GLOBAL _icr31,    _icr32,    _icr33,    _icr34,    _icr35,    _icr36
 .GLOBAL _icr37,    _icr38,    _icr39,    _icr40,    _icr41,    _icr42
 .GLOBAL _icr43,    _icr44,    _icr45,    _icr46,    _icr47,    _icr48
 .GLOBAL _icr49,    _icr50,    _icr51,    _icr52,    _icr53,    _icr54
 .GLOBAL _icr55,    _icr56,    _icr57,    _icr58,    _icr59,    _icr60
 .GLOBAL _icr61,    _icr62,    _icr63,    _rsrr,     _stcr,     _tbcr
 .GLOBAL _ctbr,     _clkr,     _wpr,      _divr0,    _divr1,    _plldivm
 .GLOBAL _plldivn,  _plldivg,  _pllmulg,  _pllctrl,  _oscc1,    _oscs1
 .GLOBAL _oscc2,    _oscs2,    _porten,   _wtcer,    _wtcr,     _wtbr
 .GLOBAL _wthr,     _wtmr,     _wtsr,     _csvtr,    _csvcr,    _cscfg
 .GLOBAL _cmcfg,    _cucr,     _cutd,     _cutr1,    _cutr2,    _cmpr
 .GLOBAL _cmcr,     _cmt1,     _cmt2,     _canpre,   _canckd,   _lvsel
 .GLOBAL _lvdet,    _hwwde,    _hwwd,     _oscrh,    _oscrl,    _wpcrh
 .GLOBAL _wpcrl,    _osccr,    _regsel,   _regctr,   _modr,     _pdrd14
 .GLOBAL _pdrd15,   _pdrd16,   _pdrd17,   _pdrd18,   _pdrd19,   _pdrd20
 .GLOBAL _pdrd21,   _pdrd22,   _pdrd24,   _pdrd26,   _pdrd27,   _pdrd28
 .GLOBAL _pdrd29,   _ddr14,    _ddr15,    _ddr16,    _ddr17,    _ddr18
 .GLOBAL _ddr19,    _ddr20,    _ddr21,    _ddr22,    _ddr24,    _ddr26
 .GLOBAL _ddr27,    _ddr28,    _ddr29,    _pfr14,    _pfr15,    _pfr16
 .GLOBAL _pfr17,    _pfr18,    _pfr19,    _pfr20,    _pfr21,    _pfr22
 .GLOBAL _pfr24,    _pfr26,    _pfr27,    _pfr28,    _pfr29,    _epfr14
 .GLOBAL _epfr15,   _epfr16,   _epfr17,   _epfr18,   _epfr19,   _epfr20
 .GLOBAL _epfr21,   _epfr22,   _epfr24,   _epfr26,   _epfr27,   _epfr29
 .GLOBAL _podr14,   _podr15,   _podr16,   _podr17,   _podr18,   _podr19
 .GLOBAL _podr20,   _podr21,   _podr22,   _podr24,   _podr26,   _podr27
 .GLOBAL _podr28,   _podr29,   _pilr14,   _pilr15,   _pilr16,   _pilr17
 .GLOBAL _pilr18,   _pilr19,   _pilr20,   _pilr21,   _pilr22,   _pilr24
 .GLOBAL _pilr26,   _pilr27,   _pilr28,   _pilr29,   _epilr14,  _epilr15
 .GLOBAL _epilr16,  _epilr17,  _epilr18,  _epilr19,  _epilr20,  _epilr21
 .GLOBAL _epilr22,  _epilr24,  _epilr26,  _epilr27,  _epilr28,  _epilr29
 .GLOBAL _pper14,   _pper15,   _pper16,   _pper17,   _pper18,   _pper19
 .GLOBAL _pper20,   _pper21,   _pper22,   _pper24,   _pper26,   _pper27
 .GLOBAL _pper28,   _pper29,   _ppcr14,   _ppcr15,   _ppcr16,   _ppcr17
 .GLOBAL _ppcr18,   _ppcr19,   _ppcr20,   _ppcr21,   _ppcr22,   _ppcr24
 .GLOBAL _ppcr26,   _ppcr27,   _ppcr28,   _ppcr29,   _dmasa0,   _dmada0
 .GLOBAL _dmasa1,   _dmada1,   _dmasa2,   _dmada2,   _dmasa3,   _dmada3
 .GLOBAL _dmasa4,   _dmada4,   _fmcs,     _fmcr,     _fchcr,    _fmwt
 .GLOBAL _fmwt2,    _fmps,     _fmac,     _fcha0,    _fcha1,    _fscr0
 .GLOBAL _fscr1,    _ctrlr4,   _statr4,   _errcnt4,  _btr4,     _intr4
 .GLOBAL _testr4,   _brper4,   _brpe4,    _if1creq4, _if1cmsk4, _if1msk124
 .GLOBAL _if1msk24, _if1msk14, _if1arb124, _if1arb24, _if1arb14, _if1mctr4
 .GLOBAL _if1dta124, _if1dta14, _if1dta24, _if1dtb124, _if1dtb14, _if1dtb24
 .GLOBAL _if1dta_swp124, _if1dta_swp24, _if1dta_swp14, _if1dtb_swp124, _if1dtb_swp24, _if1dtb_swp14
 .GLOBAL _if2creq4, _if2cmsk4, _if2msk124, _if2msk24, _if2msk14, _if2arb124
 .GLOBAL _if2arb24, _if2arb14, _if2mctr4, _if2dta124, _if2dta14, _if2dta24
 .GLOBAL _if2dtb124, _if2dtb14, _if2dtb24, _if2dta_swp124, _if2dta_swp24, _if2dta_swp14
 .GLOBAL _if2dtb_swp124, _if2dtb_swp24, _if2dtb_swp14, _treqr124, _treqr24,  _treqr14
 .GLOBAL _treqr344, _newdt124, _newdt24,  _newdt14,  _intpnd124, _intpnd24
 .GLOBAL _intpnd14, _msgval124, _msgval24, _msgval14, _bctrl,    _bstat
 .GLOBAL _biac,     _boac,     _birq,     _bcr0,     _bcr1,     _bad0
 .GLOBAL _bad1,     _bad2,     _bad3,     _bad4,     _bad5,     _bad6
 .GLOBAL _bad7,     _fsv1,     _bsv1,     _fsv2,     _bsv2

_pdr14     .EQU 0x00000E
PDR14      .EQU 0x00000E /* Port Data Register */
_pdr15     .EQU 0x00000F
PDR15      .EQU 0x00000F
_pdr16     .EQU 0x000010
PDR16      .EQU 0x000010
_pdr17     .EQU 0x000011
PDR17      .EQU 0x000011
_pdr18     .EQU 0x000012
PDR18      .EQU 0x000012
_pdr19     .EQU 0x000013
PDR19      .EQU 0x000013
_pdr20     .EQU 0x000014
PDR20      .EQU 0x000014
_pdr21     .EQU 0x000015
PDR21      .EQU 0x000015
_pdr22     .EQU 0x000016
PDR22      .EQU 0x000016
_pdr24     .EQU 0x000018
PDR24      .EQU 0x000018
_pdr26     .EQU 0x00001A
PDR26      .EQU 0x00001A
_pdr27     .EQU 0x00001B
PDR27      .EQU 0x00001B
_pdr28     .EQU 0x00001C
PDR28      .EQU 0x00001C
_pdr29     .EQU 0x00001D
PDR29      .EQU 0x00001D
_eirr0     .EQU 0x000030
EIRR0      .EQU 0x000030 /* External Interrupt 0-7 */
_enir0     .EQU 0x000031
ENIR0      .EQU 0x000031
_elvr0     .EQU 0x000032
ELVR0      .EQU 0x000032
_eirr1     .EQU 0x000034
EIRR1      .EQU 0x000034 /* External Interrupt 8-15 */
_enir1     .EQU 0x000035
ENIR1      .EQU 0x000035
_elvr1     .EQU 0x000036
ELVR1      .EQU 0x000036
_dicr      .EQU 0x000038
DICR       .EQU 0x000038 /* DLYI/I-unit */
_hrcl      .EQU 0x000039
HRCL       .EQU 0x000039
_rbsync    .EQU 0x00003A
RBSYNC     .EQU 0x00003A /* R-Bus Sync */
_scr00     .EQU 0x000040
SCR00      .EQU 0x000040 /* USART (LIN) 0 */
_smr00     .EQU 0x000041
SMR00      .EQU 0x000041
_ssr00     .EQU 0x000042
SSR00      .EQU 0x000042
_rdr00     .EQU 0x000043
RDR00      .EQU 0x000043
_tdr00     .EQU 0x000043
TDR00      .EQU 0x000043
_escr00    .EQU 0x000044
ESCR00     .EQU 0x000044
_eccr00    .EQU 0x000045
ECCR00     .EQU 0x000045
_scr01     .EQU 0x000048
SCR01      .EQU 0x000048 /* USART (LIN) 1 */
_smr01     .EQU 0x000049
SMR01      .EQU 0x000049
_ssr01     .EQU 0x00004A
SSR01      .EQU 0x00004A
_rdr01     .EQU 0x00004B
RDR01      .EQU 0x00004B
_tdr01     .EQU 0x00004B
TDR01      .EQU 0x00004B
_escr01    .EQU 0x00004C
ESCR01     .EQU 0x00004C
_eccr01    .EQU 0x00004D
ECCR01     .EQU 0x00004D
_scr02     .EQU 0x000050
SCR02      .EQU 0x000050 /* USART (LIN) 2 */
_smr02     .EQU 0x000051
SMR02      .EQU 0x000051
_ssr02     .EQU 0x000052
SSR02      .EQU 0x000052
_rdr02     .EQU 0x000053
RDR02      .EQU 0x000053
_tdr02     .EQU 0x000053
TDR02      .EQU 0x000053
_escr02    .EQU 0x000054
ESCR02     .EQU 0x000054
_eccr02    .EQU 0x000055
ECCR02     .EQU 0x000055
_scr03     .EQU 0x000058
SCR03      .EQU 0x000058 /* USART (LIN) 3 */
_smr03     .EQU 0x000059
SMR03      .EQU 0x000059
_ssr03     .EQU 0x00005A
SSR03      .EQU 0x00005A
_rdr03     .EQU 0x00005B
RDR03      .EQU 0x00005B
_tdr03     .EQU 0x00005B
TDR03      .EQU 0x00005B
_escr03    .EQU 0x00005C
ESCR03     .EQU 0x00005C
_eccr03    .EQU 0x00005D
ECCR03     .EQU 0x00005D
_scr04     .EQU 0x000060
SCR04      .EQU 0x000060 /* USART (LIN) 4 with FIFO */
_smr04     .EQU 0x000061
SMR04      .EQU 0x000061
_ssr04     .EQU 0x000062
SSR04      .EQU 0x000062
_rdr04     .EQU 0x000063
RDR04      .EQU 0x000063
_tdr04     .EQU 0x000063
TDR04      .EQU 0x000063
_escr04    .EQU 0x000064
ESCR04     .EQU 0x000064
_eccr04    .EQU 0x000065
ECCR04     .EQU 0x000065
_fsr04     .EQU 0x000066
FSR04      .EQU 0x000066
_fcr04     .EQU 0x000067
FCR04      .EQU 0x000067
_bgr00     .EQU 0x000080
BGR00      .EQU 0x000080 /* Bauderate Generator USART (LIN) 0-7 */
_bgr100    .EQU 0x000080
BGR100     .EQU 0x000080
_bgr000    .EQU 0x000081
BGR000     .EQU 0x000081
_bgr01     .EQU 0x000082
BGR01      .EQU 0x000082
_bgr101    .EQU 0x000082
BGR101     .EQU 0x000082
_bgr001    .EQU 0x000083
BGR001     .EQU 0x000083
_bgr02     .EQU 0x000084
BGR02      .EQU 0x000084
_bgr102    .EQU 0x000084
BGR102     .EQU 0x000084
_bgr002    .EQU 0x000085
BGR002     .EQU 0x000085
_bgr03     .EQU 0x000086
BGR03      .EQU 0x000086
_bgr103    .EQU 0x000086
BGR103     .EQU 0x000086
_bgr003    .EQU 0x000087
BGR003     .EQU 0x000087
_bgr04     .EQU 0x000088
BGR04      .EQU 0x000088
_bgr104    .EQU 0x000088
BGR104     .EQU 0x000088
_bgr004    .EQU 0x000089
BGR004     .EQU 0x000089
_ibcr0     .EQU 0x0000D0
IBCR0      .EQU 0x0000D0 /* I2C 0 */
_ibsr0     .EQU 0x0000D1
IBSR0      .EQU 0x0000D1
_itba0     .EQU 0x0000D2
ITBA0      .EQU 0x0000D2
_itbah0    .EQU 0x0000D2
ITBAH0     .EQU 0x0000D2
_itbal0    .EQU 0x0000D3
ITBAL0     .EQU 0x0000D3
_itmk0     .EQU 0x0000D4
ITMK0      .EQU 0x0000D4
_itmkh0    .EQU 0x0000D4
ITMKH0     .EQU 0x0000D4
_itmkl0    .EQU 0x0000D5
ITMKL0     .EQU 0x0000D5
_ismk0     .EQU 0x0000D6
ISMK0      .EQU 0x0000D6
_isba0     .EQU 0x0000D7
ISBA0      .EQU 0x0000D7
_idar0     .EQU 0x0000D9
IDAR0      .EQU 0x0000D9
_iccr0     .EQU 0x0000DA
ICCR0      .EQU 0x0000DA
_gcn10     .EQU 0x000100
GCN10      .EQU 0x000100 /* PPG Control 0-3 */
_gcn20     .EQU 0x000103
GCN20      .EQU 0x000103
_gcn11     .EQU 0x000104
GCN11      .EQU 0x000104 /* PPG Control 4-7 */
_gcn21     .EQU 0x000107
GCN21      .EQU 0x000107
_gcn12     .EQU 0x000108
GCN12      .EQU 0x000108 /* PPG Control 8-11 */
_gcn22     .EQU 0x00010B
GCN22      .EQU 0x00010B
_ptmr00    .EQU 0x000110
PTMR00     .EQU 0x000110 /* PPG 0 */
_pcsr00    .EQU 0x000112
PCSR00     .EQU 0x000112
_pdut00    .EQU 0x000114
PDUT00     .EQU 0x000114
_pcn00     .EQU 0x000116
PCN00      .EQU 0x000116
_pcnh00    .EQU 0x000116
PCNH00     .EQU 0x000116
_pcnl00    .EQU 0x000117
PCNL00     .EQU 0x000117
_ptmr01    .EQU 0x000118
PTMR01     .EQU 0x000118 /* PPG 1 */
_pcsr01    .EQU 0x00011A
PCSR01     .EQU 0x00011A
_pdut01    .EQU 0x00011C
PDUT01     .EQU 0x00011C
_pcn01     .EQU 0x00011E
PCN01      .EQU 0x00011E
_pcnh01    .EQU 0x00011E
PCNH01     .EQU 0x00011E
_pcnl01    .EQU 0x00011F
PCNL01     .EQU 0x00011F
_ptmr02    .EQU 0x000120
PTMR02     .EQU 0x000120 /* PPG 2 */
_pcsr02    .EQU 0x000122
PCSR02     .EQU 0x000122
_pdut02    .EQU 0x000124
PDUT02     .EQU 0x000124
_pcn02     .EQU 0x000126
PCN02      .EQU 0x000126
_pcnh02    .EQU 0x000126
PCNH02     .EQU 0x000126
_pcnl02    .EQU 0x000127
PCNL02     .EQU 0x000127
_ptmr03    .EQU 0x000128
PTMR03     .EQU 0x000128 /* PPG 3 */
_pcsr03    .EQU 0x00012A
PCSR03     .EQU 0x00012A
_pdut03    .EQU 0x00012C
PDUT03     .EQU 0x00012C
_pcn03     .EQU 0x00012E
PCN03      .EQU 0x00012E
_pcnh03    .EQU 0x00012E
PCNH03     .EQU 0x00012E
_pcnl03    .EQU 0x00012F
PCNL03     .EQU 0x00012F
_ptmr04    .EQU 0x000130
PTMR04     .EQU 0x000130 /* PPG 4 */
_pcsr04    .EQU 0x000132
PCSR04     .EQU 0x000132
_pdut04    .EQU 0x000134
PDUT04     .EQU 0x000134
_pcn04     .EQU 0x000136
PCN04      .EQU 0x000136
_pcnh04    .EQU 0x000136
PCNH04     .EQU 0x000136
_pcnl04    .EQU 0x000137
PCNL04     .EQU 0x000137
_ptmr05    .EQU 0x000138
PTMR05     .EQU 0x000138 /* PPG 5 */
_pcsr05    .EQU 0x00013A
PCSR05     .EQU 0x00013A
_pdut05    .EQU 0x00013C
PDUT05     .EQU 0x00013C
_pcn05     .EQU 0x00013E
PCN05      .EQU 0x00013E
_pcnh05    .EQU 0x00013E
PCNH05     .EQU 0x00013E
_pcnl05    .EQU 0x00013F
PCNL05     .EQU 0x00013F
_ptmr06    .EQU 0x000140
PTMR06     .EQU 0x000140 /* PPG 6 */
_pcsr06    .EQU 0x000142
PCSR06     .EQU 0x000142
_pdut06    .EQU 0x000144
PDUT06     .EQU 0x000144
_pcn06     .EQU 0x000146
PCN06      .EQU 0x000146
_pcnh06    .EQU 0x000146
PCNH06     .EQU 0x000146
_pcnl06    .EQU 0x000147
PCNL06     .EQU 0x000147
_ptmr07    .EQU 0x000148
PTMR07     .EQU 0x000148 /* PPG 7 */
_pcsr07    .EQU 0x00014A
PCSR07     .EQU 0x00014A
_pdut07    .EQU 0x00014C
PDUT07     .EQU 0x00014C
_pcn07     .EQU 0x00014E
PCN07      .EQU 0x00014E
_pcnh07    .EQU 0x00014E
PCNH07     .EQU 0x00014E
_pcnl07    .EQU 0x00014F
PCNL07     .EQU 0x00014F
_ptmr08    .EQU 0x000150
PTMR08     .EQU 0x000150 /* PPG 8 */
_pcsr08    .EQU 0x000152
PCSR08     .EQU 0x000152
_pdut08    .EQU 0x000154
PDUT08     .EQU 0x000154
_pcn08     .EQU 0x000156
PCN08      .EQU 0x000156
_pcnh08    .EQU 0x000156
PCNH08     .EQU 0x000156
_pcnl08    .EQU 0x000157
PCNL08     .EQU 0x000157
_ptmr09    .EQU 0x000158
PTMR09     .EQU 0x000158 /* PPG 9 */
_pcsr09    .EQU 0x00015A
PCSR09     .EQU 0x00015A
_pdut09    .EQU 0x00015C
PDUT09     .EQU 0x00015C
_pcn09     .EQU 0x00015E
PCN09      .EQU 0x00015E
_pcnh09    .EQU 0x00015E
PCNH09     .EQU 0x00015E
_pcnl09    .EQU 0x00015F
PCNL09     .EQU 0x00015F
_ptmr10    .EQU 0x000160
PTMR10     .EQU 0x000160 /* PPG 10 */
_pcsr10    .EQU 0x000162
PCSR10     .EQU 0x000162
_pdut10    .EQU 0x000164
PDUT10     .EQU 0x000164
_pcn10     .EQU 0x000166
PCN10      .EQU 0x000166
_pcnh10    .EQU 0x000166
PCNH10     .EQU 0x000166
_pcnl10    .EQU 0x000167
PCNL10     .EQU 0x000167
_ptmr11    .EQU 0x000168
PTMR11     .EQU 0x000168 /* PPG 11 */
_pcsr11    .EQU 0x00016A
PCSR11     .EQU 0x00016A
_pdut11    .EQU 0x00016C
PDUT11     .EQU 0x00016C
_pcn11     .EQU 0x00016E
PCN11      .EQU 0x00016E
_pcnh11    .EQU 0x00016E
PCNH11     .EQU 0x00016E
_pcnl11    .EQU 0x00016F
PCNL11     .EQU 0x00016F
_ics01     .EQU 0x000181
ICS01      .EQU 0x000181 /* Input Capture 0-3 */
_ics23     .EQU 0x000183
ICS23      .EQU 0x000183
_ipcp0     .EQU 0x000184
IPCP0      .EQU 0x000184
_ipcp1     .EQU 0x000186
IPCP1      .EQU 0x000186
_ipcp2     .EQU 0x000188
IPCP2      .EQU 0x000188
_ipcp3     .EQU 0x00018A
IPCP3      .EQU 0x00018A
_ocs01     .EQU 0x00018C
OCS01      .EQU 0x00018C /* Output Compare 0-3 */
_ocs23     .EQU 0x00018E
OCS23      .EQU 0x00018E
_occp0     .EQU 0x000190
OCCP0      .EQU 0x000190
_occp1     .EQU 0x000192
OCCP1      .EQU 0x000192
_occp2     .EQU 0x000194
OCCP2      .EQU 0x000194
_occp3     .EQU 0x000196
OCCP3      .EQU 0x000196
_aderh     .EQU 0x0001A0
ADERH      .EQU 0x0001A0 /* ADC */
_aderl     .EQU 0x0001A2
ADERL      .EQU 0x0001A2
_ader  .EQU 0x0001A0
ADER   .EQU 0x0001A0
_adcs1     .EQU 0x0001A4
ADCS1      .EQU 0x0001A4
_adcs0     .EQU 0x0001A5
ADCS0      .EQU 0x0001A5
_adcs  .EQU 0x0001A4
ADCS   .EQU 0x0001A4
_adcr1     .EQU 0x0001A6
ADCR1      .EQU 0x0001A6
_adcr0     .EQU 0x0001A7
ADCR0      .EQU 0x0001A7
_adcr  .EQU 0x0001A6
ADCR   .EQU 0x0001A6
_adct1     .EQU 0x0001A8
ADCT1      .EQU 0x0001A8
_adct0     .EQU 0x0001A9
ADCT0      .EQU 0x0001A9
_adct  .EQU 0x0001A8
ADCT   .EQU 0x0001A8
_adsch     .EQU 0x0001AA
ADSCH      .EQU 0x0001AA
_adech     .EQU 0x0001AB
ADECH      .EQU 0x0001AB
_tmrlr0    .EQU 0x0001B0
TMRLR0     .EQU 0x0001B0 /* Reload Timer 0 */
_tmr0      .EQU 0x0001B2
TMR0       .EQU 0x0001B2
_tmcsr0    .EQU 0x0001B6
TMCSR0     .EQU 0x0001B6
_tmcsrh0  .EQU 0x0001B6
TMCSRH0   .EQU 0x0001B6
_tmcsrl0  .EQU 0x0001B7
TMCSRL0   .EQU 0x0001B7
_tmrlr1    .EQU 0x0001B8
TMRLR1     .EQU 0x0001B8 /* Reload Timer 1 */
_tmr1      .EQU 0x0001BA
TMR1       .EQU 0x0001BA
_tmcsr1    .EQU 0x0001BE
TMCSR1     .EQU 0x0001BE
_tmcsrh1  .EQU 0x0001BE
TMCSRH1   .EQU 0x0001BE
_tmcsrl1  .EQU 0x0001BF
TMCSRL1   .EQU 0x0001BF
_tmrlr2    .EQU 0x0001C0
TMRLR2     .EQU 0x0001C0 /* Reload Timer 2 */
_tmr2      .EQU 0x0001C2
TMR2       .EQU 0x0001C2
_tmcsr2    .EQU 0x0001C6
TMCSR2     .EQU 0x0001C6
_tmcsrh2  .EQU 0x0001C6
TMCSRH2   .EQU 0x0001C6
_tmcsrl2  .EQU 0x0001C7
TMCSRL2   .EQU 0x0001C7
_tmrlr3    .EQU 0x0001C8
TMRLR3     .EQU 0x0001C8 /* Reload Timer 3 */
_tmr3      .EQU 0x0001CA
TMR3       .EQU 0x0001CA
_tmcsr3    .EQU 0x0001CE
TMCSR3     .EQU 0x0001CE
_tmcsrh3  .EQU 0x0001CE
TMCSRH3   .EQU 0x0001CE
_tmcsrl3  .EQU 0x0001CF
TMCSRL3   .EQU 0x0001CF
_tmrlr4    .EQU 0x0001D0
TMRLR4     .EQU 0x0001D0 /* Reload Timer 4 */
_tmr4      .EQU 0x0001D2
TMR4       .EQU 0x0001D2
_tmcsr4    .EQU 0x0001D6
TMCSR4     .EQU 0x0001D6
_tmcsrh4  .EQU 0x0001D6
TMCSRH4   .EQU 0x0001D6
_tmcsrl4  .EQU 0x0001D7
TMCSRL4   .EQU 0x0001D7
_tmrlr5    .EQU 0x0001D8
TMRLR5     .EQU 0x0001D8 /* Reload Timer 5 */
_tmr5      .EQU 0x0001DA
TMR5       .EQU 0x0001DA
_tmcsr5    .EQU 0x0001DE
TMCSR5     .EQU 0x0001DE
_tmcsrh5  .EQU 0x0001DE
TMCSRH5   .EQU 0x0001DE
_tmcsrl5  .EQU 0x0001DF
TMCSRL5   .EQU 0x0001DF
_tmrlr6    .EQU 0x0001E0
TMRLR6     .EQU 0x0001E0 /* Reload Timer 6 */
_tmr6      .EQU 0x0001E2
TMR6       .EQU 0x0001E2
_tmcsr6    .EQU 0x0001E6
TMCSR6     .EQU 0x0001E6
_tmcsrh6  .EQU 0x0001E6
TMCSRH6   .EQU 0x0001E6
_tmcsrl6  .EQU 0x0001E7
TMCSRL6   .EQU 0x0001E7
_tmrlr7    .EQU 0x0001E8
TMRLR7     .EQU 0x0001E8 /* Reload Timer 7 */
_tmr7      .EQU 0x0001EA
TMR7       .EQU 0x0001EA
_tmcsr7    .EQU 0x0001EE
TMCSR7     .EQU 0x0001EE
_tmcsrh7  .EQU 0x0001EE
TMCSRH7   .EQU 0x0001EE
_tmcsrl7  .EQU 0x0001EF
TMCSRL7   .EQU 0x0001EF
_tcdt0     .EQU 0x0001F0
TCDT0      .EQU 0x0001F0 /* Free Running Timer0 */
_tccs0     .EQU 0x0001F3
TCCS0      .EQU 0x0001F3
_tcdt1     .EQU 0x0001F4
TCDT1      .EQU 0x0001F4 /* Free Running Timer1 */
_tccs1     .EQU 0x0001F7
TCCS1      .EQU 0x0001F7
_tcdt2     .EQU 0x0001F8
TCDT2      .EQU 0x0001F8 /* Free Running Timer2 */
_tccs2     .EQU 0x0001FB
TCCS2      .EQU 0x0001FB
_tcdt3     .EQU 0x0001FC
TCDT3      .EQU 0x0001FC /* Free Running Timer3 */
_tccs3     .EQU 0x0001FF
TCCS3      .EQU 0x0001FF
_dmaca0    .EQU 0x000200
DMACA0     .EQU 0x000200 /* DMAC */
_dmacb0    .EQU 0x000204
DMACB0     .EQU 0x000204
_dmaca1    .EQU 0x000208
DMACA1     .EQU 0x000208
_dmacb1    .EQU 0x00020C
DMACB1     .EQU 0x00020C
_dmaca2    .EQU 0x000210
DMACA2     .EQU 0x000210
_dmacb2    .EQU 0x000214
DMACB2     .EQU 0x000214
_dmaca3    .EQU 0x000218
DMACA3     .EQU 0x000218
_dmacb3    .EQU 0x00021C
DMACB3     .EQU 0x00021C
_dmaca4    .EQU 0x000220
DMACA4     .EQU 0x000220
_dmacb4    .EQU 0x000224
DMACB4     .EQU 0x000224
_dmacr     .EQU 0x000240
DMACR      .EQU 0x000240
_ics45     .EQU 0x0002D1
ICS45      .EQU 0x0002D1 /* Input Capture 4-7 */
_ics67     .EQU 0x0002D3
ICS67      .EQU 0x0002D3
_ipcp4     .EQU 0x0002D4
IPCP4      .EQU 0x0002D4
_ipcp5     .EQU 0x0002D6
IPCP5      .EQU 0x0002D6
_ipcp6     .EQU 0x0002D8
IPCP6      .EQU 0x0002D8
_ipcp7     .EQU 0x0002DA
IPCP7      .EQU 0x0002DA
_ocs45     .EQU 0x0002DC
OCS45      .EQU 0x0002DC /* Output Compare 4-7 */
_ocs67     .EQU 0x0002DE
OCS67      .EQU 0x0002DE
_occp4     .EQU 0x0002E0
OCCP4      .EQU 0x0002E0
_occp5     .EQU 0x0002E2
OCCP5      .EQU 0x0002E2
_occp6     .EQU 0x0002E4
OCCP6      .EQU 0x0002E4
_occp7     .EQU 0x0002E6
OCCP7      .EQU 0x0002E6
_tcdt4     .EQU 0x0002F0
TCDT4      .EQU 0x0002F0 /* Free Running Timer4 */
_tccs4     .EQU 0x0002F3
TCCS4      .EQU 0x0002F3
_tcdt5     .EQU 0x0002F4
TCDT5      .EQU 0x0002F4 /* Free Running Timer5 */
_tccs5     .EQU 0x0002F7
TCCS5      .EQU 0x0002F7
_tcdt6     .EQU 0x0002F8
TCDT6      .EQU 0x0002F8 /* Free Running Timer6 */
_tccs6     .EQU 0x0002FB
TCCS6      .EQU 0x0002FB
_tcdt7     .EQU 0x0002FC
TCDT7      .EQU 0x0002FC /* Free Running Timer7 */
_tccs7     .EQU 0x0002FF
TCCS7      .EQU 0x0002FF
_roms      .EQU 0x000390
ROMS       .EQU 0x000390 /* ROM Select Register */
_bsd0      .EQU 0x0003F0
BSD0       .EQU 0x0003F0 /* Bit Search Module */
_bsd1      .EQU 0x0003F4
BSD1       .EQU 0x0003F4
_bsdc      .EQU 0x0003F8
BSDC       .EQU 0x0003F8
_bsrr      .EQU 0x0003FC
BSRR       .EQU 0x0003FC
_icr00     .EQU 0x000440
ICR00      .EQU 0x000440 /* Interrupt Control Unit */
_icr01     .EQU 0x000441
ICR01      .EQU 0x000441
_icr02     .EQU 0x000442
ICR02      .EQU 0x000442
_icr03     .EQU 0x000443
ICR03      .EQU 0x000443
_icr04     .EQU 0x000444
ICR04      .EQU 0x000444
_icr05     .EQU 0x000445
ICR05      .EQU 0x000445
_icr06     .EQU 0x000446
ICR06      .EQU 0x000446
_icr07     .EQU 0x000447
ICR07      .EQU 0x000447
_icr08     .EQU 0x000448
ICR08      .EQU 0x000448
_icr09     .EQU 0x000449
ICR09      .EQU 0x000449
_icr10     .EQU 0x00044A
ICR10      .EQU 0x00044A
_icr11     .EQU 0x00044B
ICR11      .EQU 0x00044B
_icr12     .EQU 0x00044C
ICR12      .EQU 0x00044C
_icr13     .EQU 0x00044D
ICR13      .EQU 0x00044D
_icr14     .EQU 0x00044E
ICR14      .EQU 0x00044E
_icr15     .EQU 0x00044F
ICR15      .EQU 0x00044F
_icr16     .EQU 0x000450
ICR16      .EQU 0x000450
_icr17     .EQU 0x000451
ICR17      .EQU 0x000451
_icr18     .EQU 0x000452
ICR18      .EQU 0x000452
_icr19     .EQU 0x000453
ICR19      .EQU 0x000453
_icr20     .EQU 0x000454
ICR20      .EQU 0x000454
_icr21     .EQU 0x000455
ICR21      .EQU 0x000455
_icr22     .EQU 0x000456
ICR22      .EQU 0x000456
_icr23     .EQU 0x000457
ICR23      .EQU 0x000457
_icr24     .EQU 0x000458
ICR24      .EQU 0x000458
_icr25     .EQU 0x000459
ICR25      .EQU 0x000459
_icr26     .EQU 0x00045A
ICR26      .EQU 0x00045A
_icr27     .EQU 0x00045B
ICR27      .EQU 0x00045B
_icr28     .EQU 0x00045C
ICR28      .EQU 0x00045C
_icr29     .EQU 0x00045D
ICR29      .EQU 0x00045D
_icr30     .EQU 0x00045E
ICR30      .EQU 0x00045E
_icr31     .EQU 0x00045F
ICR31      .EQU 0x00045F
_icr32     .EQU 0x000460
ICR32      .EQU 0x000460
_icr33     .EQU 0x000461
ICR33      .EQU 0x000461
_icr34     .EQU 0x000462
ICR34      .EQU 0x000462
_icr35     .EQU 0x000463
ICR35      .EQU 0x000463
_icr36     .EQU 0x000464
ICR36      .EQU 0x000464
_icr37     .EQU 0x000465
ICR37      .EQU 0x000465
_icr38     .EQU 0x000466
ICR38      .EQU 0x000466
_icr39     .EQU 0x000467
ICR39      .EQU 0x000467
_icr40     .EQU 0x000468
ICR40      .EQU 0x000468
_icr41     .EQU 0x000469
ICR41      .EQU 0x000469
_icr42     .EQU 0x00046A
ICR42      .EQU 0x00046A
_icr43     .EQU 0x00046B
ICR43      .EQU 0x00046B
_icr44     .EQU 0x00046C
ICR44      .EQU 0x00046C
_icr45     .EQU 0x00046D
ICR45      .EQU 0x00046D
_icr46     .EQU 0x00046E
ICR46      .EQU 0x00046E
_icr47     .EQU 0x00046F
ICR47      .EQU 0x00046F
_icr48     .EQU 0x000470
ICR48      .EQU 0x000470
_icr49     .EQU 0x000471
ICR49      .EQU 0x000471
_icr50     .EQU 0x000472
ICR50      .EQU 0x000472
_icr51     .EQU 0x000473
ICR51      .EQU 0x000473
_icr52     .EQU 0x000474
ICR52      .EQU 0x000474
_icr53     .EQU 0x000475
ICR53      .EQU 0x000475
_icr54     .EQU 0x000476
ICR54      .EQU 0x000476
_icr55     .EQU 0x000477
ICR55      .EQU 0x000477
_icr56     .EQU 0x000478
ICR56      .EQU 0x000478
_icr57     .EQU 0x000479
ICR57      .EQU 0x000479
_icr58     .EQU 0x00047A
ICR58      .EQU 0x00047A
_icr59     .EQU 0x00047B
ICR59      .EQU 0x00047B
_icr60     .EQU 0x00047C
ICR60      .EQU 0x00047C
_icr61     .EQU 0x00047D
ICR61      .EQU 0x00047D
_icr62     .EQU 0x00047E
ICR62      .EQU 0x00047E
_icr63     .EQU 0x00047F
ICR63      .EQU 0x00047F
_rsrr      .EQU 0x000480
RSRR       .EQU 0x000480 /* Clock Control Unit */
_stcr      .EQU 0x000481
STCR       .EQU 0x000481
_tbcr      .EQU 0x000482
TBCR       .EQU 0x000482
_ctbr      .EQU 0x000483
CTBR       .EQU 0x000483
_clkr      .EQU 0x000484
CLKR       .EQU 0x000484
_wpr       .EQU 0x000485
WPR        .EQU 0x000485
_divr0     .EQU 0x000486
DIVR0      .EQU 0x000486
_divr1     .EQU 0x000487
DIVR1      .EQU 0x000487
_plldivm   .EQU 0x00048C
PLLDIVM    .EQU 0x00048C /* PLL - Clock Gear Unit: */
_plldivn   .EQU 0x00048D
PLLDIVN    .EQU 0x00048D
_plldivg   .EQU 0x00048E
PLLDIVG    .EQU 0x00048E
_pllmulg   .EQU 0x00048F
PLLMULG    .EQU 0x00048F
_pllctrl   .EQU 0x000490
PLLCTRL    .EQU 0x000490
_oscc1     .EQU 0x000494
OSCC1      .EQU 0x000494 /* Main/Sub Oscillator Control */
_oscs1     .EQU 0x000495
OSCS1      .EQU 0x000495
_oscc2     .EQU 0x000496
OSCC2      .EQU 0x000496
_oscs2     .EQU 0x000497
OSCS2      .EQU 0x000497
_porten  .EQU 0x000498
PORTEN   .EQU 0x000498 /* Port Input Enable Control */
_wtcer     .EQU 0x0004A1
WTCER      .EQU 0x0004A1 /* Real Time Clock (Watch Timer) */
_wtcr      .EQU 0x0004A2
WTCR       .EQU 0x0004A2
_wtbr      .EQU 0x0004A4
WTBR       .EQU 0x0004A4
_wthr      .EQU 0x0004A8
WTHR       .EQU 0x0004A8
_wtmr      .EQU 0x0004A9
WTMR       .EQU 0x0004A9
_wtsr      .EQU 0x0004AA
WTSR       .EQU 0x0004AA
_csvtr     .EQU 0x0004AC
CSVTR      .EQU 0x0004AC /* Clock-Supervisor / Selecor / Monitor */
_csvcr     .EQU 0x0004AD
CSVCR      .EQU 0x0004AD
_cscfg  .EQU 0x0004AE
CSCFG   .EQU 0x0004AE
_cmcfg  .EQU 0x0004AF
CMCFG   .EQU 0x0004AF
_cucr      .EQU 0x0004B0
CUCR       .EQU 0x0004B0 /* Calibration Unit of Sub Oszillation */
_cutd      .EQU 0x0004B2
CUTD       .EQU 0x0004B2
_cutr1     .EQU 0x0004B4
CUTR1      .EQU 0x0004B4
_cutr2     .EQU 0x0004B6
CUTR2      .EQU 0x0004B6
_cmpr      .EQU 0x0004B8
CMPR       .EQU 0x0004B8 /* Clock Modulator */
_cmcr  .EQU 0x0004BB
CMCR   .EQU 0x0004BB
_cmt1      .EQU 0x0004BC
CMT1       .EQU 0x0004BC
_cmt2      .EQU 0x0004BE
CMT2       .EQU 0x0004BE
_canpre  .EQU 0x0004C0
CANPRE   .EQU 0x0004C0 /* CAN clock control */
_canckd  .EQU 0x0004C1
CANCKD   .EQU 0x0004C1
_lvsel  .EQU 0x0004C4
LVSEL   .EQU 0x0004C4 /* LV Detection / Hardware-Watchdog */
_lvdet     .EQU 0x0004C5
LVDET      .EQU 0x0004C5
_hwwde     .EQU 0x0004C6
HWWDE      .EQU 0x0004C6
_hwwd      .EQU 0x0004C7
HWWD       .EQU 0x0004C7
_oscrh     .EQU 0x0004C8
OSCRH      .EQU 0x0004C8 /* Main-/Sub-Oscillatio Stabilization Timer */
_oscrl     .EQU 0x0004C9
OSCRL      .EQU 0x0004C9
_wpcrh     .EQU 0x0004CA
WPCRH      .EQU 0x0004CA
_wpcrl     .EQU 0x0004CB
WPCRL      .EQU 0x0004CB
_osccr     .EQU 0x0004CC
OSCCR      .EQU 0x0004CC /* Main-/Sub-Oscillatio Standby Control */
_regsel  .EQU 0x0004CE
REGSEL   .EQU 0x0004CE
_regctr  .EQU 0x0004CF
REGCTR   .EQU 0x0004CF
_modr      .EQU 0x0007FD
MODR       .EQU 0x0007FD /* Mode Register */
_pdrd14    .EQU 0x000D0E
PDRD14     .EQU 0x000D0E /* R-bus Port Data Direct Read Register */
_pdrd15    .EQU 0x000D0F
PDRD15     .EQU 0x000D0F
_pdrd16    .EQU 0x000D10
PDRD16     .EQU 0x000D10
_pdrd17    .EQU 0x000D11
PDRD17     .EQU 0x000D11
_pdrd18    .EQU 0x000D12
PDRD18     .EQU 0x000D12
_pdrd19    .EQU 0x000D13
PDRD19     .EQU 0x000D13
_pdrd20    .EQU 0x000D14
PDRD20     .EQU 0x000D14
_pdrd21    .EQU 0x000D15
PDRD21     .EQU 0x000D15
_pdrd22    .EQU 0x000D16
PDRD22     .EQU 0x000D16
_pdrd24    .EQU 0x000D18
PDRD24     .EQU 0x000D18
_pdrd26    .EQU 0x000D1A
PDRD26     .EQU 0x000D1A
_pdrd27    .EQU 0x000D1B
PDRD27     .EQU 0x000D1B
_pdrd28    .EQU 0x000D1C
PDRD28     .EQU 0x000D1C
_pdrd29    .EQU 0x000D1D
PDRD29     .EQU 0x000D1D
_ddr14     .EQU 0x000D4E
DDR14      .EQU 0x000D4E /* R-bus Port Direction Register */
_ddr15     .EQU 0x000D4F
DDR15      .EQU 0x000D4F
_ddr16     .EQU 0x000D50
DDR16      .EQU 0x000D50
_ddr17     .EQU 0x000D51
DDR17      .EQU 0x000D51
_ddr18     .EQU 0x000D52
DDR18      .EQU 0x000D52
_ddr19     .EQU 0x000D53
DDR19      .EQU 0x000D53
_ddr20     .EQU 0x000D54
DDR20      .EQU 0x000D54
_ddr21     .EQU 0x000D55
DDR21      .EQU 0x000D55
_ddr22     .EQU 0x000D56
DDR22      .EQU 0x000D56
_ddr24     .EQU 0x000D58
DDR24      .EQU 0x000D58
_ddr26     .EQU 0x000D5A
DDR26      .EQU 0x000D5A
_ddr27     .EQU 0x000D5B
DDR27      .EQU 0x000D5B
_ddr28     .EQU 0x000D5C
DDR28      .EQU 0x000D5C
_ddr29     .EQU 0x000D5D
DDR29      .EQU 0x000D5D
_pfr14     .EQU 0x000D8E
PFR14      .EQU 0x000D8E /* R-bus Port Function Register */
_pfr15     .EQU 0x000D8F
PFR15      .EQU 0x000D8F
_pfr16     .EQU 0x000D90
PFR16      .EQU 0x000D90
_pfr17     .EQU 0x000D91
PFR17      .EQU 0x000D91
_pfr18     .EQU 0x000D92
PFR18      .EQU 0x000D92
_pfr19     .EQU 0x000D93
PFR19      .EQU 0x000D93
_pfr20     .EQU 0x000D94
PFR20      .EQU 0x000D94
_pfr21     .EQU 0x000D95
PFR21      .EQU 0x000D95
_pfr22     .EQU 0x000D96
PFR22      .EQU 0x000D96
_pfr24     .EQU 0x000D98
PFR24      .EQU 0x000D98
_pfr26     .EQU 0x000D9A
PFR26      .EQU 0x000D9A
_pfr27     .EQU 0x000D9B
PFR27      .EQU 0x000D9B
_pfr28     .EQU 0x000D9C
PFR28      .EQU 0x000D9C
_pfr29     .EQU 0x000D9D
PFR29      .EQU 0x000D9D
_epfr14    .EQU 0x000DCE
EPFR14     .EQU 0x000DCE /* R-bus Port Extra Function Register */
_epfr15    .EQU 0x000DCF
EPFR15     .EQU 0x000DCF
_epfr16    .EQU 0x000DD0
EPFR16     .EQU 0x000DD0
_epfr17    .EQU 0x000DD1
EPFR17     .EQU 0x000DD1
_epfr18    .EQU 0x000DD2
EPFR18     .EQU 0x000DD2
_epfr19    .EQU 0x000DD3
EPFR19     .EQU 0x000DD3
_epfr20    .EQU 0x000DD4
EPFR20     .EQU 0x000DD4
_epfr21    .EQU 0x000DD5
EPFR21     .EQU 0x000DD5
_epfr22    .EQU 0x000DD6
EPFR22     .EQU 0x000DD6
_epfr24    .EQU 0x000DD8
EPFR24     .EQU 0x000DD8
_epfr26    .EQU 0x000DDA
EPFR26     .EQU 0x000DDA
_epfr27    .EQU 0x000DDB
EPFR27     .EQU 0x000DDB
_epfr29    .EQU 0x000DDD
EPFR29     .EQU 0x000DDD
_podr14    .EQU 0x000E0E
PODR14     .EQU 0x000E0E /* R-bus Port Output Drive Select Register */
_podr15    .EQU 0x000E0F
PODR15     .EQU 0x000E0F
_podr16    .EQU 0x000E10
PODR16     .EQU 0x000E10
_podr17    .EQU 0x000E11
PODR17     .EQU 0x000E11
_podr18    .EQU 0x000E12
PODR18     .EQU 0x000E12
_podr19    .EQU 0x000E13
PODR19     .EQU 0x000E13
_podr20    .EQU 0x000E14
PODR20     .EQU 0x000E14
_podr21    .EQU 0x000E15
PODR21     .EQU 0x000E15
_podr22    .EQU 0x000E16
PODR22     .EQU 0x000E16
_podr24    .EQU 0x000E18
PODR24     .EQU 0x000E18
_podr26    .EQU 0x000E1A
PODR26     .EQU 0x000E1A
_podr27    .EQU 0x000E1B
PODR27     .EQU 0x000E1B
_podr28    .EQU 0x000E1C
PODR28     .EQU 0x000E1C
_podr29    .EQU 0x000E1D
PODR29     .EQU 0x000E1D
_pilr14    .EQU 0x000E4E
PILR14     .EQU 0x000E4E /* R-bus Port Input Level Select Register */
_pilr15    .EQU 0x000E4F
PILR15     .EQU 0x000E4F
_pilr16    .EQU 0x000E50
PILR16     .EQU 0x000E50
_pilr17    .EQU 0x000E51
PILR17     .EQU 0x000E51
_pilr18    .EQU 0x000E52
PILR18     .EQU 0x000E52
_pilr19    .EQU 0x000E53
PILR19     .EQU 0x000E53
_pilr20    .EQU 0x000E54
PILR20     .EQU 0x000E54
_pilr21    .EQU 0x000E55
PILR21     .EQU 0x000E55
_pilr22    .EQU 0x000E56
PILR22     .EQU 0x000E56
_pilr24    .EQU 0x000E58
PILR24     .EQU 0x000E58
_pilr26    .EQU 0x000E5A
PILR26     .EQU 0x000E5A
_pilr27    .EQU 0x000E5B
PILR27     .EQU 0x000E5B
_pilr28    .EQU 0x000E5C
PILR28     .EQU 0x000E5C
_pilr29    .EQU 0x000E5D
PILR29     .EQU 0x000E5D
_epilr14   .EQU 0x000E8E
EPILR14    .EQU 0x000E8E /* R-bus Port Extra Input Level Select Register */
_epilr15   .EQU 0x000E8F
EPILR15    .EQU 0x000E8F
_epilr16   .EQU 0x000E90
EPILR16    .EQU 0x000E90
_epilr17   .EQU 0x000E91
EPILR17    .EQU 0x000E91
_epilr18   .EQU 0x000E92
EPILR18    .EQU 0x000E92
_epilr19   .EQU 0x000E93
EPILR19    .EQU 0x000E93
_epilr20   .EQU 0x000E94
EPILR20    .EQU 0x000E94
_epilr21   .EQU 0x000E95
EPILR21    .EQU 0x000E95
_epilr22   .EQU 0x000E96
EPILR22    .EQU 0x000E96
_epilr24   .EQU 0x000E98
EPILR24    .EQU 0x000E98
_epilr26   .EQU 0x000E9A
EPILR26    .EQU 0x000E9A
_epilr27   .EQU 0x000E9B
EPILR27    .EQU 0x000E9B
_epilr28   .EQU 0x000E9C
EPILR28    .EQU 0x000E9C
_epilr29   .EQU 0x000E9D
EPILR29    .EQU 0x000E9D
_pper14    .EQU 0x000ECE
PPER14     .EQU 0x000ECE /* R-bus Port Pull-Up/Down  Enable Register */
_pper15    .EQU 0x000ECF
PPER15     .EQU 0x000ECF
_pper16    .EQU 0x000ED0
PPER16     .EQU 0x000ED0
_pper17    .EQU 0x000ED1
PPER17     .EQU 0x000ED1
_pper18    .EQU 0x000ED1
PPER18     .EQU 0x000ED1
_pper19    .EQU 0x000ED2
PPER19     .EQU 0x000ED2
_pper20    .EQU 0x000ED4
PPER20     .EQU 0x000ED4
_pper21    .EQU 0x000ED5
PPER21     .EQU 0x000ED5
_pper22    .EQU 0x000ED6
PPER22     .EQU 0x000ED6
_pper24    .EQU 0x000ED8
PPER24     .EQU 0x000ED8
_pper26    .EQU 0x000EDA
PPER26     .EQU 0x000EDA
_pper27    .EQU 0x000EDB
PPER27     .EQU 0x000EDB
_pper28    .EQU 0x000EDC
PPER28     .EQU 0x000EDC
_pper29    .EQU 0x000EDD
PPER29     .EQU 0x000EDD
_ppcr14    .EQU 0x000F0E
PPCR14     .EQU 0x000F0E /* R-bus Port Pull-Up/Down Control Register */
_ppcr15    .EQU 0x000F0F
PPCR15     .EQU 0x000F0F
_ppcr16    .EQU 0x000F10
PPCR16     .EQU 0x000F10
_ppcr17    .EQU 0x000F11
PPCR17     .EQU 0x000F11
_ppcr18    .EQU 0x000F12
PPCR18     .EQU 0x000F12
_ppcr19    .EQU 0x000F13
PPCR19     .EQU 0x000F13
_ppcr20    .EQU 0x000F14
PPCR20     .EQU 0x000F14
_ppcr21    .EQU 0x000F15
PPCR21     .EQU 0x000F15
_ppcr22    .EQU 0x000F16
PPCR22     .EQU 0x000F16
_ppcr24    .EQU 0x000F18
PPCR24     .EQU 0x000F18
_ppcr26    .EQU 0x000F1A
PPCR26     .EQU 0x000F1A
_ppcr27    .EQU 0x000F1B
PPCR27     .EQU 0x000F1B
_ppcr28    .EQU 0x000F1C
PPCR28     .EQU 0x000F1C
_ppcr29    .EQU 0x000F1D
PPCR29     .EQU 0x000F1D
_dmasa0    .EQU 0x001000
DMASA0     .EQU 0x001000 /* DMAC */
_dmada0    .EQU 0x001004
DMADA0     .EQU 0x001004
_dmasa1    .EQU 0x001008
DMASA1     .EQU 0x001008
_dmada1    .EQU 0x00100C
DMADA1     .EQU 0x00100C
_dmasa2    .EQU 0x001010
DMASA2     .EQU 0x001010
_dmada2    .EQU 0x001014
DMADA2     .EQU 0x001014
_dmasa3    .EQU 0x001018
DMASA3     .EQU 0x001018
_dmada3    .EQU 0x00101C
DMADA3     .EQU 0x00101C
_dmasa4    .EQU 0x001020
DMASA4     .EQU 0x001020
_dmada4    .EQU 0x001024
DMADA4     .EQU 0x001024
_fmcs      .EQU 0x007000
FMCS       .EQU 0x007000 /* Flash Memory/I-Cache Control Register */
_fmcr      .EQU 0x007001
FMCR       .EQU 0x007001
_fchcr     .EQU 0x007002
FCHCR      .EQU 0x007002
_fmwt      .EQU 0x007004
FMWT       .EQU 0x007004
_fmwt2     .EQU 0x007006
FMWT2      .EQU 0x007006
_fmps      .EQU 0x007007
FMPS       .EQU 0x007007
_fmac      .EQU 0x007008
FMAC       .EQU 0x007008
_fcha0     .EQU 0x00700C
FCHA0      .EQU 0x00700C /* I_Cache Nonchachable area settings Register */
_fcha1     .EQU 0x007010
FCHA1      .EQU 0x007010
_fscr0     .EQU 0x007100
FSCR0      .EQU 0x007100 /* Flash Security Control Register */
_fscr1     .EQU 0x007104
FSCR1      .EQU 0x007104
_ctrlr4    .EQU 0x00C400
CTRLR4     .EQU 0x00C400 /* CAN 4 Control Register */
_statr4    .EQU 0x00C402
STATR4     .EQU 0x00C402
_errcnt4   .EQU 0x00C404
ERRCNT4    .EQU 0x00C404
_btr4  .EQU 0x00C406
BTR4   .EQU 0x00C406
_intr4     .EQU 0x00C408
INTR4      .EQU 0x00C408
_testr4    .EQU 0x00C40A
TESTR4     .EQU 0x00C40A
_brper4    .EQU 0x00C40C
BRPER4     .EQU 0x00C40C
_brpe4     .EQU 0x00C40C
BRPE4      .EQU 0x00C40C
_if1creq4  .EQU 0x00C410
IF1CREQ4   .EQU 0x00C410 /* CAN 4 IF 1 */
_if1cmsk4  .EQU 0x00C412
IF1CMSK4   .EQU 0x00C412
_if1msk124  .EQU 0x00C414
IF1MSK124   .EQU 0x00C414
_if1msk24  .EQU 0x00C414
IF1MSK24   .EQU 0x00C414
_if1msk14  .EQU 0x00C416
IF1MSK14   .EQU 0x00C416
_if1arb124  .EQU 0x00C418
IF1ARB124   .EQU 0x00C418
_if1arb24  .EQU 0x00C418
IF1ARB24   .EQU 0x00C418
_if1arb14  .EQU 0x00C41A
IF1ARB14   .EQU 0x00C41A
_if1mctr4  .EQU 0x00C41C
IF1MCTR4   .EQU 0x00C41C
_if1dta124  .EQU 0x00C420
IF1DTA124   .EQU 0x00C420
_if1dta14  .EQU 0x00C420
IF1DTA14   .EQU 0x00C420
_if1dta24  .EQU 0x00C422
IF1DTA24   .EQU 0x00C422
_if1dtb124  .EQU 0x00C424
IF1DTB124   .EQU 0x00C424
_if1dtb14  .EQU 0x00C424
IF1DTB14   .EQU 0x00C424
_if1dtb24  .EQU 0x00C426
IF1DTB24   .EQU 0x00C426
_if1dta_swp124  .EQU 0x00C430
IF1DTA_SWP124   .EQU 0x00C430
_if1dta_swp24  .EQU 0x00C430
IF1DTA_SWP24   .EQU 0x00C430
_if1dta_swp14  .EQU 0x00C432
IF1DTA_SWP14   .EQU 0x00C432
_if1dtb_swp124  .EQU 0x00C434
IF1DTB_SWP124   .EQU 0x00C434
_if1dtb_swp24  .EQU 0x00C434
IF1DTB_SWP24   .EQU 0x00C434
_if1dtb_swp14  .EQU 0x00C436
IF1DTB_SWP14   .EQU 0x00C436
_if2creq4  .EQU 0x00C440
IF2CREQ4   .EQU 0x00C440 /* CAN 4 IF 2 */
_if2cmsk4  .EQU 0x00C442
IF2CMSK4   .EQU 0x00C442
_if2msk124  .EQU 0x00C444
IF2MSK124   .EQU 0x00C444
_if2msk24  .EQU 0x00C444
IF2MSK24   .EQU 0x00C444
_if2msk14  .EQU 0x00C446
IF2MSK14   .EQU 0x00C446
_if2arb124  .EQU 0x00C448
IF2ARB124   .EQU 0x00C448
_if2arb24  .EQU 0x00C448
IF2ARB24   .EQU 0x00C448
_if2arb14  .EQU 0x00C44A
IF2ARB14   .EQU 0x00C44A
_if2mctr4  .EQU 0x00C44C
IF2MCTR4   .EQU 0x00C44C
_if2dta124  .EQU 0x00C450
IF2DTA124   .EQU 0x00C450
_if2dta14  .EQU 0x00C450
IF2DTA14   .EQU 0x00C450
_if2dta24  .EQU 0x00C452
IF2DTA24   .EQU 0x00C452
_if2dtb124  .EQU 0x00C454
IF2DTB124   .EQU 0x00C454
_if2dtb14  .EQU 0x00C454
IF2DTB14   .EQU 0x00C454
_if2dtb24  .EQU 0x00C456
IF2DTB24   .EQU 0x00C456
_if2dta_swp124  .EQU 0x00C460
IF2DTA_SWP124   .EQU 0x00C460
_if2dta_swp24  .EQU 0x00C460
IF2DTA_SWP24   .EQU 0x00C460
_if2dta_swp14  .EQU 0x00C462
IF2DTA_SWP14   .EQU 0x00C462
_if2dtb_swp124  .EQU 0x00C464
IF2DTB_SWP124   .EQU 0x00C464
_if2dtb_swp24  .EQU 0x00C464
IF2DTB_SWP24   .EQU 0x00C464
_if2dtb_swp14  .EQU 0x00C466
IF2DTB_SWP14   .EQU 0x00C466
_treqr124  .EQU 0x00C480
TREQR124   .EQU 0x00C480 /* CAN 4 Status Flags */
_treqr24   .EQU 0x00C480
TREQR24    .EQU 0x00C480
_treqr14   .EQU 0x00C482
TREQR14    .EQU 0x00C482
_treqr344  .EQU 0x00C484
TREQR344   .EQU 0x00C484
_newdt124  .EQU 0x00C490
NEWDT124   .EQU 0x00C490
_newdt24   .EQU 0x00C490
NEWDT24    .EQU 0x00C490
_newdt14   .EQU 0x00C492
NEWDT14    .EQU 0x00C492
_intpnd124  .EQU 0x00C4A0
INTPND124   .EQU 0x00C4A0
_intpnd24  .EQU 0x00C4A0
INTPND24   .EQU 0x00C4A0
_intpnd14  .EQU 0x00C4A2
INTPND14   .EQU 0x00C4A2
_msgval124  .EQU 0x00C4B0
MSGVAL124   .EQU 0x00C4B0
_msgval24  .EQU 0x00C4B0
MSGVAL24   .EQU 0x00C4B0
_msgval14  .EQU 0x00C4B2
MSGVAL14   .EQU 0x00C4B2
_bctrl     .EQU 0x00F000
BCTRL      .EQU 0x00F000 /* EDSU/MPU Registers */
_bstat     .EQU 0x00F004
BSTAT      .EQU 0x00F004
_biac      .EQU 0x00F008
BIAC       .EQU 0x00F008
_boac      .EQU 0x00F00C
BOAC       .EQU 0x00F00C
_birq      .EQU 0x00F010
BIRQ       .EQU 0x00F010
_bcr0      .EQU 0x00F020
BCR0       .EQU 0x00F020
_bcr1      .EQU 0x00F024
BCR1       .EQU 0x00F024
_bad0      .EQU 0x00F080
BAD0       .EQU 0x00F080
_bad1      .EQU 0x00F084
BAD1       .EQU 0x00F084
_bad2      .EQU 0x00F088
BAD2       .EQU 0x00F088
_bad3      .EQU 0x00F08C
BAD3       .EQU 0x00F08C
_bad4      .EQU 0x00F090
BAD4       .EQU 0x00F090
_bad5      .EQU 0x00F094
BAD5       .EQU 0x00F094
_bad6      .EQU 0x00F098
BAD6       .EQU 0x00F098
_bad7      .EQU 0x00F09C
BAD7       .EQU 0x00F09C
_fsv1      .EQU 0x148000
FSV1       .EQU 0x148000 /* FSV & BSV Registers */
_bsv1      .EQU 0x148004
BSV1       .EQU 0x148004
_fsv2      .EQU 0x148008
FSV2       .EQU 0x148008
_bsv2      .EQU 0x14800C
BSV2       .EQU 0x14800C
#pragma endasm
#else

#ifndef _MB91XXX_H
#define _MB91XXX_H

#ifdef  __FASM__ 
#pragma asm
 .IMPORT _pdr14,    _pdr15,    _pdr16,    _pdr17,    _pdr18,    _pdr19
 .IMPORT _pdr20,    _pdr21,    _pdr22,    _pdr24,    _pdr26,    _pdr27
 .IMPORT _pdr28,    _pdr29,    _eirr0,    _enir0,    _elvr0,    _eirr1
 .IMPORT _enir1,    _elvr1,    _dicr,     _hrcl,     _rbsync,   _scr00
 .IMPORT _smr00,    _ssr00,    _rdr00,    _tdr00,    _escr00,   _eccr00
 .IMPORT _scr01,    _smr01,    _ssr01,    _rdr01,    _tdr01,    _escr01
 .IMPORT _eccr01,   _scr02,    _smr02,    _ssr02,    _rdr02,    _tdr02
 .IMPORT _escr02,   _eccr02,   _scr03,    _smr03,    _ssr03,    _rdr03
 .IMPORT _tdr03,    _escr03,   _eccr03,   _scr04,    _smr04,    _ssr04
 .IMPORT _rdr04,    _tdr04,    _escr04,   _eccr04,   _fsr04,    _fcr04
 .IMPORT _bgr00,    _bgr100,   _bgr000,   _bgr01,    _bgr101,   _bgr001
 .IMPORT _bgr02,    _bgr102,   _bgr002,   _bgr03,    _bgr103,   _bgr003
 .IMPORT _bgr04,    _bgr104,   _bgr004,   _ibcr0,    _ibsr0,    _itba0
 .IMPORT _itbah0,   _itbal0,   _itmk0,    _itmkh0,   _itmkl0,   _ismk0
 .IMPORT _isba0,    _idar0,    _iccr0,    _gcn10,    _gcn20,    _gcn11
 .IMPORT _gcn21,    _gcn12,    _gcn22,    _ptmr00,   _pcsr00,   _pdut00
 .IMPORT _pcn00,    _pcnh00,   _pcnl00,   _ptmr01,   _pcsr01,   _pdut01
 .IMPORT _pcn01,    _pcnh01,   _pcnl01,   _ptmr02,   _pcsr02,   _pdut02
 .IMPORT _pcn02,    _pcnh02,   _pcnl02,   _ptmr03,   _pcsr03,   _pdut03
 .IMPORT _pcn03,    _pcnh03,   _pcnl03,   _ptmr04,   _pcsr04,   _pdut04
 .IMPORT _pcn04,    _pcnh04,   _pcnl04,   _ptmr05,   _pcsr05,   _pdut05
 .IMPORT _pcn05,    _pcnh05,   _pcnl05,   _ptmr06,   _pcsr06,   _pdut06
 .IMPORT _pcn06,    _pcnh06,   _pcnl06,   _ptmr07,   _pcsr07,   _pdut07
 .IMPORT _pcn07,    _pcnh07,   _pcnl07,   _ptmr08,   _pcsr08,   _pdut08
 .IMPORT _pcn08,    _pcnh08,   _pcnl08,   _ptmr09,   _pcsr09,   _pdut09
 .IMPORT _pcn09,    _pcnh09,   _pcnl09,   _ptmr10,   _pcsr10,   _pdut10
 .IMPORT _pcn10,    _pcnh10,   _pcnl10,   _ptmr11,   _pcsr11,   _pdut11
 .IMPORT _pcn11,    _pcnh11,   _pcnl11,   _ics01,    _ics23,    _ipcp0
 .IMPORT _ipcp1,    _ipcp2,    _ipcp3,    _ocs01,    _ocs23,    _occp0
 .IMPORT _occp1,    _occp2,    _occp3,    _aderh,    _aderl,    _ader
 .IMPORT _adcs1,    _adcs0,    _adcs,     _adcr1,    _adcr0,    _adcr
 .IMPORT _adct1,    _adct0,    _adct,     _adsch,    _adech,    _tmrlr0
 .IMPORT _tmr0,     _tmcsr0,   _tmcsrh0,  _tmcsrl0,  _tmrlr1,   _tmr1
 .IMPORT _tmcsr1,   _tmcsrh1,  _tmcsrl1,  _tmrlr2,   _tmr2,     _tmcsr2
 .IMPORT _tmcsrh2,  _tmcsrl2,  _tmrlr3,   _tmr3,     _tmcsr3,   _tmcsrh3
 .IMPORT _tmcsrl3,  _tmrlr4,   _tmr4,     _tmcsr4,   _tmcsrh4,  _tmcsrl4
 .IMPORT _tmrlr5,   _tmr5,     _tmcsr5,   _tmcsrh5,  _tmcsrl5,  _tmrlr6
 .IMPORT _tmr6,     _tmcsr6,   _tmcsrh6,  _tmcsrl6,  _tmrlr7,   _tmr7
 .IMPORT _tmcsr7,   _tmcsrh7,  _tmcsrl7,  _tcdt0,    _tccs0,    _tcdt1
 .IMPORT _tccs1,    _tcdt2,    _tccs2,    _tcdt3,    _tccs3,    _dmaca0
 .IMPORT _dmacb0,   _dmaca1,   _dmacb1,   _dmaca2,   _dmacb2,   _dmaca3
 .IMPORT _dmacb3,   _dmaca4,   _dmacb4,   _dmacr,    _ics45,    _ics67
 .IMPORT _ipcp4,    _ipcp5,    _ipcp6,    _ipcp7,    _ocs45,    _ocs67
 .IMPORT _occp4,    _occp5,    _occp6,    _occp7,    _tcdt4,    _tccs4
 .IMPORT _tcdt5,    _tccs5,    _tcdt6,    _tccs6,    _tcdt7,    _tccs7
 .IMPORT _roms,     _bsd0,     _bsd1,     _bsdc,     _bsrr,     _icr00
 .IMPORT _icr01,    _icr02,    _icr03,    _icr04,    _icr05,    _icr06
 .IMPORT _icr07,    _icr08,    _icr09,    _icr10,    _icr11,    _icr12
 .IMPORT _icr13,    _icr14,    _icr15,    _icr16,    _icr17,    _icr18
 .IMPORT _icr19,    _icr20,    _icr21,    _icr22,    _icr23,    _icr24
 .IMPORT _icr25,    _icr26,    _icr27,    _icr28,    _icr29,    _icr30
 .IMPORT _icr31,    _icr32,    _icr33,    _icr34,    _icr35,    _icr36
 .IMPORT _icr37,    _icr38,    _icr39,    _icr40,    _icr41,    _icr42
 .IMPORT _icr43,    _icr44,    _icr45,    _icr46,    _icr47,    _icr48
 .IMPORT _icr49,    _icr50,    _icr51,    _icr52,    _icr53,    _icr54
 .IMPORT _icr55,    _icr56,    _icr57,    _icr58,    _icr59,    _icr60
 .IMPORT _icr61,    _icr62,    _icr63,    _rsrr,     _stcr,     _tbcr
 .IMPORT _ctbr,     _clkr,     _wpr,      _divr0,    _divr1,    _plldivm
 .IMPORT _plldivn,  _plldivg,  _pllmulg,  _pllctrl,  _oscc1,    _oscs1
 .IMPORT _oscc2,    _oscs2,    _porten,   _wtcer,    _wtcr,     _wtbr
 .IMPORT _wthr,     _wtmr,     _wtsr,     _csvtr,    _csvcr,    _cscfg
 .IMPORT _cmcfg,    _cucr,     _cutd,     _cutr1,    _cutr2,    _cmpr
 .IMPORT _cmcr,     _cmt1,     _cmt2,     _canpre,   _canckd,   _lvsel
 .IMPORT _lvdet,    _hwwde,    _hwwd,     _oscrh,    _oscrl,    _wpcrh
 .IMPORT _wpcrl,    _osccr,    _regsel,   _regctr,   _modr,     _pdrd14
 .IMPORT _pdrd15,   _pdrd16,   _pdrd17,   _pdrd18,   _pdrd19,   _pdrd20
 .IMPORT _pdrd21,   _pdrd22,   _pdrd24,   _pdrd26,   _pdrd27,   _pdrd28
 .IMPORT _pdrd29,   _ddr14,    _ddr15,    _ddr16,    _ddr17,    _ddr18
 .IMPORT _ddr19,    _ddr20,    _ddr21,    _ddr22,    _ddr24,    _ddr26
 .IMPORT _ddr27,    _ddr28,    _ddr29,    _pfr14,    _pfr15,    _pfr16
 .IMPORT _pfr17,    _pfr18,    _pfr19,    _pfr20,    _pfr21,    _pfr22
 .IMPORT _pfr24,    _pfr26,    _pfr27,    _pfr28,    _pfr29,    _epfr14
 .IMPORT _epfr15,   _epfr16,   _epfr17,   _epfr18,   _epfr19,   _epfr20
 .IMPORT _epfr21,   _epfr22,   _epfr24,   _epfr26,   _epfr27,   _epfr29
 .IMPORT _podr14,   _podr15,   _podr16,   _podr17,   _podr18,   _podr19
 .IMPORT _podr20,   _podr21,   _podr22,   _podr24,   _podr26,   _podr27
 .IMPORT _podr28,   _podr29,   _pilr14,   _pilr15,   _pilr16,   _pilr17
 .IMPORT _pilr18,   _pilr19,   _pilr20,   _pilr21,   _pilr22,   _pilr24
 .IMPORT _pilr26,   _pilr27,   _pilr28,   _pilr29,   _epilr14,  _epilr15
 .IMPORT _epilr16,  _epilr17,  _epilr18,  _epilr19,  _epilr20,  _epilr21
 .IMPORT _epilr22,  _epilr24,  _epilr26,  _epilr27,  _epilr28,  _epilr29
 .IMPORT _pper14,   _pper15,   _pper16,   _pper17,   _pper18,   _pper19
 .IMPORT _pper20,   _pper21,   _pper22,   _pper24,   _pper26,   _pper27
 .IMPORT _pper28,   _pper29,   _ppcr14,   _ppcr15,   _ppcr16,   _ppcr17
 .IMPORT _ppcr18,   _ppcr19,   _ppcr20,   _ppcr21,   _ppcr22,   _ppcr24
 .IMPORT _ppcr26,   _ppcr27,   _ppcr28,   _ppcr29,   _dmasa0,   _dmada0
 .IMPORT _dmasa1,   _dmada1,   _dmasa2,   _dmada2,   _dmasa3,   _dmada3
 .IMPORT _dmasa4,   _dmada4,   _fmcs,     _fmcr,     _fchcr,    _fmwt
 .IMPORT _fmwt2,    _fmps,     _fmac,     _fcha0,    _fcha1,    _fscr0
 .IMPORT _fscr1,    _ctrlr4,   _statr4,   _errcnt4,  _btr4,     _intr4
 .IMPORT _testr4,   _brper4,   _brpe4,    _if1creq4, _if1cmsk4, _if1msk124
 .IMPORT _if1msk24, _if1msk14, _if1arb124, _if1arb24, _if1arb14, _if1mctr4
 .IMPORT _if1dta124, _if1dta14, _if1dta24, _if1dtb124, _if1dtb14, _if1dtb24
 .IMPORT _if1dta_swp124, _if1dta_swp24, _if1dta_swp14, _if1dtb_swp124, _if1dtb_swp24, _if1dtb_swp14
 .IMPORT _if2creq4, _if2cmsk4, _if2msk124, _if2msk24, _if2msk14, _if2arb124
 .IMPORT _if2arb24, _if2arb14, _if2mctr4, _if2dta124, _if2dta14, _if2dta24
 .IMPORT _if2dtb124, _if2dtb14, _if2dtb24, _if2dta_swp124, _if2dta_swp24, _if2dta_swp14
 .IMPORT _if2dtb_swp124, _if2dtb_swp24, _if2dtb_swp14, _treqr124, _treqr24,  _treqr14
 .IMPORT _treqr344, _newdt124, _newdt24,  _newdt14,  _intpnd124, _intpnd24
 .IMPORT _intpnd14, _msgval124, _msgval24, _msgval14, _bctrl,    _bstat
 .IMPORT _biac,     _boac,     _birq,     _bcr0,     _bcr1,     _bad0
 .IMPORT _bad1,     _bad2,     _bad3,     _bad4,     _bad5,     _bad6
 .IMPORT _bad7,     _fsv1,     _bsv1,     _fsv2,     _bsv2
#pragma endasm
#else  /* __FASM__  */ 
/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU     */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR     */
/* ELIGIBILITY FOR ANY PURPOSES.                                                 */
/*                 (C) Fujitsu Microelectronics Europe GmbH                      */
/*  */
/* ************************************************************************* */
/*                   Fujitsu Microelectronics Europe GmbH                    */
/*                    Pittlerstrasse 47, 63225 Langen */
/*                     Tel.: +49 (6103) 690-0, Fax -122                      */
/*                                                                           */
/* THIS SAMPLE CODE IS PROVIDED AS IS AND IS SUBJECT TO ALTERATIONS. FUJITSU */
/* MICROELECTRONICS ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR */
/* ELIGIBILITY FOR ANY PURPOSES                                              */
/*                 (C) Fujitsu Microelectronics Europe GmbH                  */
/* ************************************************************************* */
/* ---------------------------------------------------------------------- */
/*  Id: MB91465K.h,v 1.5 2007/01/04 11:04:48 meffen Exp   */
/* ----------------------------------------------------------------------                                  */
/*  Id: MB91465K.h,v 1.5 2007/01/04 11:04:48 meffen Exp   */
/*      - removed LCD and Sound Controller */
/* Id: MB91465K.iow,v 1.5 2006/11/30 14:39:18 meffen Exp  */
/*      - format of comment lines adapted */
/* BIT-STRUCTURE-DEFINITIONS */

typedef unsigned char		IO_BYTE;
typedef unsigned short		IO_WORD;
typedef unsigned long		IO_LWORD;
typedef const unsigned short	IO_WORD_READ;

typedef union{   /* Port Data Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }PDR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDR29STR;
typedef union{   /* External Interrupt 0-7 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ER7 :1;
    IO_BYTE _ER6 :1;
    IO_BYTE _ER5 :1;
    IO_BYTE _ER4 :1;
    IO_BYTE _ER3 :1;
    IO_BYTE _ER2 :1;
    IO_BYTE _ER1 :1;
    IO_BYTE _ER0 :1;
  }bit;
 }EIRR0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EN7 :1;
    IO_BYTE _EN6 :1;
    IO_BYTE _EN5 :1;
    IO_BYTE _EN4 :1;
    IO_BYTE _EN3 :1;
    IO_BYTE _EN2 :1;
    IO_BYTE _EN1 :1;
    IO_BYTE _EN0 :1;
  }bit;
 }ENIR0STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _LB7 :1;
    IO_WORD _LA7 :1;
    IO_WORD _LB6 :1;
    IO_WORD _LA6 :1;
    IO_WORD _LB5 :1;
    IO_WORD _LA5 :1;
    IO_WORD _LB4 :1;
    IO_WORD _LA4 :1;
    IO_WORD _LB3 :1;
    IO_WORD _LA3 :1;
    IO_WORD _LB2 :1;
    IO_WORD _LA2 :1;
    IO_WORD _LB1 :1;
    IO_WORD _LA1 :1;
    IO_WORD _LB0 :1;
    IO_WORD _LA0 :1;
  }bit;
 }ELVR0STR;
typedef union{   /* External Interrupt 8-15 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ER15 :1;
    IO_BYTE _ER14 :1;
    IO_BYTE _ER13 :1;
    IO_BYTE _ER12 :1;
    IO_BYTE _ER11 :1;
    IO_BYTE _ER10 :1;
    IO_BYTE _ER9 :1;
    IO_BYTE _ER8 :1;
  }bit;
 }EIRR1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EN15 :1;
    IO_BYTE _EN14 :1;
    IO_BYTE _EN13 :1;
    IO_BYTE _EN12 :1;
    IO_BYTE _EN11 :1;
    IO_BYTE _EN10 :1;
    IO_BYTE _EN9 :1;
    IO_BYTE _EN8 :1;
  }bit;
 }ENIR1STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _LB15 :1;
    IO_WORD _LA15 :1;
    IO_WORD _LB14 :1;
    IO_WORD _LA14 :1;
    IO_WORD _LB13 :1;
    IO_WORD _LA13 :1;
    IO_WORD _LB12 :1;
    IO_WORD _LA12 :1;
    IO_WORD _LB11 :1;
    IO_WORD _LA11 :1;
    IO_WORD _LB10 :1;
    IO_WORD _LA10 :1;
    IO_WORD _LB9 :1;
    IO_WORD _LA9 :1;
    IO_WORD _LB8 :1;
    IO_WORD _LA8 :1;
  }bit;
 }ELVR1STR;
typedef union{   /* DLYI/I-unit */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _DLYI :1;
  }bit;
 }DICRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MHALTI :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _LVL4 :1;
    IO_BYTE _LVL3 :1;
    IO_BYTE _LVL2 :1;
    IO_BYTE _LVL1 :1;
    IO_BYTE _LVL0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _LVL :5;
  }bitc;
 }HRCLSTR;
typedef union{   /* USART (LIN) 0 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PEN :1;
    IO_BYTE _P :1;
    IO_BYTE _SBL :1;
    IO_BYTE _CL :1;
    IO_BYTE _AD :1;
    IO_BYTE _CRE :1;
    IO_BYTE _RXE :1;
    IO_BYTE _TXE :1;
  }bit;
 }SCR00STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MD1 :1;
    IO_BYTE _MD0 :1;
    IO_BYTE _OTO :1;
    IO_BYTE _EXT :1;
    IO_BYTE _REST :1;
    IO_BYTE _UPCL :1;
    IO_BYTE _SCKE :1;
    IO_BYTE _SOE :1;
  }bit;
  struct{
    IO_BYTE _MD :2;
  }bitc;
 }SMR00STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PE :1;
    IO_BYTE _ORE :1;
    IO_BYTE _FRE :1;
    IO_BYTE _RDRF :1;
    IO_BYTE _TDRE :1;
    IO_BYTE _BDS :1;
    IO_BYTE _RIE :1;
    IO_BYTE _TIE :1;
  }bit;
 }SSR00STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _LBIE :1;
    IO_BYTE _LBD :1;
    IO_BYTE _LBL1 :1;
    IO_BYTE _LBL0 :1;
    IO_BYTE _SOPE :1;
    IO_BYTE _SIOP :1;
    IO_BYTE _CCO :1;
    IO_BYTE _SCES :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _LBL :2;
  }bitc;
 }ESCR00STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _INV :1;
    IO_BYTE _LBR :1;
    IO_BYTE _MS :1;
    IO_BYTE _SCDE :1;
    IO_BYTE _SSM :1;
    IO_BYTE _BIE :1;
    IO_BYTE _RBI :1;
    IO_BYTE _TBI :1;
  }bit;
 }ECCR00STR;
typedef union{   /* USART (LIN) 1 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PEN :1;
    IO_BYTE _P :1;
    IO_BYTE _SBL :1;
    IO_BYTE _CL :1;
    IO_BYTE _AD :1;
    IO_BYTE _CRE :1;
    IO_BYTE _RXE :1;
    IO_BYTE _TXE :1;
  }bit;
 }SCR01STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MD1 :1;
    IO_BYTE _MD0 :1;
    IO_BYTE _OTO :1;
    IO_BYTE _EXT :1;
    IO_BYTE _REST :1;
    IO_BYTE _UPCL :1;
    IO_BYTE _SCKE :1;
    IO_BYTE _SOE :1;
  }bit;
  struct{
    IO_BYTE _MD :2;
  }bitc;
 }SMR01STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PE :1;
    IO_BYTE _ORE :1;
    IO_BYTE _FRE :1;
    IO_BYTE _RDRF :1;
    IO_BYTE _TDRE :1;
    IO_BYTE _BDS :1;
    IO_BYTE _RIE :1;
    IO_BYTE _TIE :1;
  }bit;
 }SSR01STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _LBIE :1;
    IO_BYTE _LBD :1;
    IO_BYTE _LBL1 :1;
    IO_BYTE _LBL0 :1;
    IO_BYTE _SOPE :1;
    IO_BYTE _SIOP :1;
    IO_BYTE _CCO :1;
    IO_BYTE _SCES :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _LBL :2;
  }bitc;
 }ESCR01STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _INV :1;
    IO_BYTE _LBR :1;
    IO_BYTE _MS :1;
    IO_BYTE _SCDE :1;
    IO_BYTE _SSM :1;
    IO_BYTE _BIE :1;
    IO_BYTE _RBI :1;
    IO_BYTE _TBI :1;
  }bit;
 }ECCR01STR;
typedef union{   /* USART (LIN) 2 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PEN :1;
    IO_BYTE _P :1;
    IO_BYTE _SBL :1;
    IO_BYTE _CL :1;
    IO_BYTE _AD :1;
    IO_BYTE _CRE :1;
    IO_BYTE _RXE :1;
    IO_BYTE _TXE :1;
  }bit;
 }SCR02STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MD1 :1;
    IO_BYTE _MD0 :1;
    IO_BYTE _OTO :1;
    IO_BYTE _EXT :1;
    IO_BYTE _REST :1;
    IO_BYTE _UPCL :1;
    IO_BYTE _SCKE :1;
    IO_BYTE _SOE :1;
  }bit;
  struct{
    IO_BYTE _MD :2;
  }bitc;
 }SMR02STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PE :1;
    IO_BYTE _ORE :1;
    IO_BYTE _FRE :1;
    IO_BYTE _RDRF :1;
    IO_BYTE _TDRE :1;
    IO_BYTE _BDS :1;
    IO_BYTE _RIE :1;
    IO_BYTE _TIE :1;
  }bit;
 }SSR02STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _LBIE :1;
    IO_BYTE _LBD :1;
    IO_BYTE _LBL1 :1;
    IO_BYTE _LBL0 :1;
    IO_BYTE _SOPE :1;
    IO_BYTE _SIOP :1;
    IO_BYTE _CCO :1;
    IO_BYTE _SCES :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _LBL :2;
  }bitc;
 }ESCR02STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _INV :1;
    IO_BYTE _LBR :1;
    IO_BYTE _MS :1;
    IO_BYTE _SCDE :1;
    IO_BYTE _SSM :1;
    IO_BYTE _BIE :1;
    IO_BYTE _RBI :1;
    IO_BYTE _TBI :1;
  }bit;
 }ECCR02STR;
typedef union{   /* USART (LIN) 3 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PEN :1;
    IO_BYTE _P :1;
    IO_BYTE _SBL :1;
    IO_BYTE _CL :1;
    IO_BYTE _AD :1;
    IO_BYTE _CRE :1;
    IO_BYTE _RXE :1;
    IO_BYTE _TXE :1;
  }bit;
 }SCR03STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MD1 :1;
    IO_BYTE _MD0 :1;
    IO_BYTE _OTO :1;
    IO_BYTE _EXT :1;
    IO_BYTE _REST :1;
    IO_BYTE _UPCL :1;
    IO_BYTE _SCKE :1;
    IO_BYTE _SOE :1;
  }bit;
  struct{
    IO_BYTE _MD :2;
  }bitc;
 }SMR03STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PE :1;
    IO_BYTE _ORE :1;
    IO_BYTE _FRE :1;
    IO_BYTE _RDRF :1;
    IO_BYTE _TDRE :1;
    IO_BYTE _BDS :1;
    IO_BYTE _RIE :1;
    IO_BYTE _TIE :1;
  }bit;
 }SSR03STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _LBIE :1;
    IO_BYTE _LBD :1;
    IO_BYTE _LBL1 :1;
    IO_BYTE _LBL0 :1;
    IO_BYTE _SOPE :1;
    IO_BYTE _SIOP :1;
    IO_BYTE _CCO :1;
    IO_BYTE _SCES :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _LBL :2;
  }bitc;
 }ESCR03STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _INV :1;
    IO_BYTE _LBR :1;
    IO_BYTE _MS :1;
    IO_BYTE _SCDE :1;
    IO_BYTE _SSM :1;
    IO_BYTE _BIE :1;
    IO_BYTE _RBI :1;
    IO_BYTE _TBI :1;
  }bit;
 }ECCR03STR;
typedef union{   /* USART (LIN) 4 with FIFO */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PEN :1;
    IO_BYTE _P :1;
    IO_BYTE _SBL :1;
    IO_BYTE _CL :1;
    IO_BYTE _AD :1;
    IO_BYTE _CRE :1;
    IO_BYTE _RXE :1;
    IO_BYTE _TXE :1;
  }bit;
 }SCR04STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MD1 :1;
    IO_BYTE _MD0 :1;
    IO_BYTE _OTO :1;
    IO_BYTE _EXT :1;
    IO_BYTE _REST :1;
    IO_BYTE _UPCL :1;
    IO_BYTE _SCKE :1;
    IO_BYTE _SOE :1;
  }bit;
  struct{
    IO_BYTE _MD :2;
  }bitc;
 }SMR04STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _PE :1;
    IO_BYTE _ORE :1;
    IO_BYTE _FRE :1;
    IO_BYTE _RDRF :1;
    IO_BYTE _TDRE :1;
    IO_BYTE _BDS :1;
    IO_BYTE _RIE :1;
    IO_BYTE _TIE :1;
  }bit;
 }SSR04STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _LBIE :1;
    IO_BYTE _LBD :1;
    IO_BYTE _LBL1 :1;
    IO_BYTE _LBL0 :1;
    IO_BYTE _SOPE :1;
    IO_BYTE _SIOP :1;
    IO_BYTE _CCO :1;
    IO_BYTE _SCES :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _LBL :2;
  }bitc;
 }ESCR04STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _INV :1;
    IO_BYTE _LBR :1;
    IO_BYTE _MS :1;
    IO_BYTE _SCDE :1;
    IO_BYTE _SSM :1;
    IO_BYTE _BIE :1;
    IO_BYTE _RBI :1;
    IO_BYTE _TBI :1;
  }bit;
 }ECCR04STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _RXL3 :1;
    IO_BYTE _RXL2 :1;
    IO_BYTE _RXL1 :1;
    IO_BYTE _RXL0 :1;
    IO_BYTE  :1;
    IO_BYTE _ERX :1;
    IO_BYTE _ETX :1;
    IO_BYTE _SVD :1;
  }bit;
  struct{
    IO_BYTE _RXL :4;
  }bitc;
 }FCR04STR;
typedef union{   /* I2C 0 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _BER :1;
    IO_BYTE _BEIE :1;
    IO_BYTE _SCC :1;
    IO_BYTE _MSS :1;
    IO_BYTE _ACK :1;
    IO_BYTE _GCAA :1;
    IO_BYTE _INTE :1;
    IO_BYTE _INT :1;
  }bit;
 }IBCR0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _BB :1;
    IO_BYTE _RSC :1;
    IO_BYTE _AL :1;
    IO_BYTE _LRB :1;
    IO_BYTE _TRX :1;
    IO_BYTE _AAS :1;
    IO_BYTE _GCA :1;
    IO_BYTE _ADT :1;
  }bit;
 }IBSR0STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _TA9 :1;
    IO_WORD _TA8 :1;
    IO_WORD _TA7 :1;
    IO_WORD _TA6 :1;
    IO_WORD _TA5 :1;
    IO_WORD _TA4 :1;
    IO_WORD _TA3 :1;
    IO_WORD _TA2 :1;
    IO_WORD _TA1 :1;
    IO_WORD _TA0 :1;
  }bit;
 }ITBA0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _TA9 :1;
    IO_BYTE _TA8 :1;
  }bit;
 }ITBAH0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _TA7 :1;
    IO_BYTE _TA6 :1;
    IO_BYTE _TA5 :1;
    IO_BYTE _TA4 :1;
    IO_BYTE _TA3 :1;
    IO_BYTE _TA2 :1;
    IO_BYTE _TA1 :1;
    IO_BYTE _TA0 :1;
  }bit;
 }ITBAL0STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _ENTB :1;
    IO_WORD _RAL :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _TM9 :1;
    IO_WORD _TM8 :1;
    IO_WORD _TM7 :1;
    IO_WORD _TM6 :1;
    IO_WORD _TM5 :1;
    IO_WORD _TM4 :1;
    IO_WORD _TM3 :1;
    IO_WORD _TM2 :1;
    IO_WORD _TM1 :1;
    IO_WORD _TM0 :1;
  }bit;
 }ITMK0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ENTB :1;
    IO_BYTE _RAL :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _TM9 :1;
    IO_BYTE _TM8 :1;
  }bit;
 }ITMKH0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _TM7 :1;
    IO_BYTE _TM6 :1;
    IO_BYTE _TM5 :1;
    IO_BYTE _TM4 :1;
    IO_BYTE _TM3 :1;
    IO_BYTE _TM2 :1;
    IO_BYTE _TM1 :1;
    IO_BYTE _TM0 :1;
  }bit;
 }ITMKL0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ENSB :1;
    IO_BYTE _SM6 :1;
    IO_BYTE _SM5 :1;
    IO_BYTE _SM4 :1;
    IO_BYTE _SM3 :1;
    IO_BYTE _SM2 :1;
    IO_BYTE _SM1 :1;
    IO_BYTE _SM0 :1;
  }bit;
 }ISMK0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _SA6 :1;
    IO_BYTE _SA5 :1;
    IO_BYTE _SA4 :1;
    IO_BYTE _SA3 :1;
    IO_BYTE _SA2 :1;
    IO_BYTE _SA1 :1;
    IO_BYTE _SA0 :1;
  }bit;
 }ISBA0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }IDAR0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _NSF :1;
    IO_BYTE _EN :1;
    IO_BYTE _CS4 :1;
    IO_BYTE _CS3 :1;
    IO_BYTE _CS2 :1;
    IO_BYTE _CS1 :1;
    IO_BYTE _CS0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CS :5;
  }bitc;
 }ICCR0STR;
typedef union{   /* PPG Control 0-3 */
    IO_WORD	word;
    struct{   
    IO_WORD _TSEL33 :1;
    IO_WORD _TSEL32 :1;
    IO_WORD _TSEL31 :1;
    IO_WORD _TSEL30 :1;
    IO_WORD _TSEL23 :1;
    IO_WORD _TSEL22 :1;
    IO_WORD _TSEL21 :1;
    IO_WORD _TSEL20 :1;
    IO_WORD _TSEL13 :1;
    IO_WORD _TSEL12 :1;
    IO_WORD _TSEL11 :1;
    IO_WORD _TSEL10 :1;
    IO_WORD _TSEL03 :1;
    IO_WORD _TSEL02 :1;
    IO_WORD _TSEL01 :1;
    IO_WORD _TSEL00 :1;
  }bit;
 }GCN10STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _EN3 :1;
    IO_BYTE _EN2 :1;
    IO_BYTE _EN1 :1;
    IO_BYTE _EN0 :1;
  }bit;
 }GCN20STR;
typedef union{   /* PPG Control 4-7 */
    IO_WORD	word;
    struct{   
    IO_WORD _TSEL33 :1;
    IO_WORD _TSEL32 :1;
    IO_WORD _TSEL31 :1;
    IO_WORD _TSEL30 :1;
    IO_WORD _TSEL23 :1;
    IO_WORD _TSEL22 :1;
    IO_WORD _TSEL21 :1;
    IO_WORD _TSEL20 :1;
    IO_WORD _TSEL13 :1;
    IO_WORD _TSEL12 :1;
    IO_WORD _TSEL11 :1;
    IO_WORD _TSEL10 :1;
    IO_WORD _TSEL03 :1;
    IO_WORD _TSEL02 :1;
    IO_WORD _TSEL01 :1;
    IO_WORD _TSEL00 :1;
  }bit;
 }GCN11STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _EN3 :1;
    IO_BYTE _EN2 :1;
    IO_BYTE _EN1 :1;
    IO_BYTE _EN0 :1;
  }bit;
 }GCN21STR;
typedef union{   /* PPG Control 8-11 */
    IO_WORD	word;
    struct{   
    IO_WORD _TSEL33 :1;
    IO_WORD _TSEL32 :1;
    IO_WORD _TSEL31 :1;
    IO_WORD _TSEL30 :1;
    IO_WORD _TSEL23 :1;
    IO_WORD _TSEL22 :1;
    IO_WORD _TSEL21 :1;
    IO_WORD _TSEL20 :1;
    IO_WORD _TSEL13 :1;
    IO_WORD _TSEL12 :1;
    IO_WORD _TSEL11 :1;
    IO_WORD _TSEL10 :1;
    IO_WORD _TSEL03 :1;
    IO_WORD _TSEL02 :1;
    IO_WORD _TSEL01 :1;
    IO_WORD _TSEL00 :1;
  }bit;
 }GCN12STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _EN3 :1;
    IO_BYTE _EN2 :1;
    IO_BYTE _EN1 :1;
    IO_BYTE _EN0 :1;
  }bit;
 }GCN22STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN00STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH00STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL00STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN01STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH01STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL01STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN02STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH02STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL02STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN03STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH03STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL03STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN04STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH04STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL04STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN05STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH05STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL05STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN06STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH06STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL06STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN07STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH07STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL07STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN08STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH08STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL08STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN09STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH09STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL09STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN10STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH10STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL10STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CNTE :1;
    IO_WORD _STGR :1;
    IO_WORD _MDSE :1;
    IO_WORD _RTRG :1;
    IO_WORD _CKS1 :1;
    IO_WORD _CKS0 :1;
    IO_WORD _PGMS :1;
    IO_WORD  :1;
    IO_WORD _EGS1 :1;
    IO_WORD _EGS0 :1;
    IO_WORD _IREN :1;
    IO_WORD _IRQF :1;
    IO_WORD _IRS1 :1;
    IO_WORD _IRS0 :1;
    IO_WORD  :1;
    IO_WORD _OSEL :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CKS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _EGS :2;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _IRS :2;
  }bitc;
 }PCN11STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CNTE :1;
    IO_BYTE _STGR :1;
    IO_BYTE _MDSE :1;
    IO_BYTE _RTRG :1;
    IO_BYTE _CKS1 :1;
    IO_BYTE _CKS0 :1;
    IO_BYTE _PGMS :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CKS :2;
  }bitc;
 }PCNH11STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EGS1 :1;
    IO_BYTE _EGS0 :1;
    IO_BYTE _IREN :1;
    IO_BYTE _IRQF :1;
    IO_BYTE _IRS1 :1;
    IO_BYTE _IRS0 :1;
    IO_BYTE  :1;
    IO_BYTE _OSEL :1;
  }bit;
  struct{
    IO_BYTE _EGS :2;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _IRS :2;
  }bitc;
 }PCNL11STR;
typedef union{   /* Input Capture 0-3 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ICP1 :1;
    IO_BYTE _ICP0 :1;
    IO_BYTE _ICE1 :1;
    IO_BYTE _ICE0 :1;
    IO_BYTE _EG11 :1;
    IO_BYTE _EG10 :1;
    IO_BYTE _EG01 :1;
    IO_BYTE _EG00 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _EG1 :2;
    IO_BYTE _EG0 :2;
  }bitc;
 }ICS01STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ICP3 :1;
    IO_BYTE _ICP2 :1;
    IO_BYTE _ICE3 :1;
    IO_BYTE _ICE2 :1;
    IO_BYTE _EG31 :1;
    IO_BYTE _EG30 :1;
    IO_BYTE _EG21 :1;
    IO_BYTE _EG20 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _EG3 :2;
    IO_BYTE _EG2 :2;
  }bitc;
 }ICS23STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CP15 :1;
    IO_WORD _CP14 :1;
    IO_WORD _CP13 :1;
    IO_WORD _CP12 :1;
    IO_WORD _CP11 :1;
    IO_WORD _CP10 :1;
    IO_WORD _CP9 :1;
    IO_WORD _CP8 :1;
    IO_WORD _CP7 :1;
    IO_WORD _CP6 :1;
    IO_WORD _CP5 :1;
    IO_WORD _CP4 :1;
    IO_WORD _CP3 :1;
    IO_WORD _CP2 :1;
    IO_WORD _CP1 :1;
    IO_WORD _CP0 :1;
  }bit;
 }IPCP0STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CP15 :1;
    IO_WORD _CP14 :1;
    IO_WORD _CP13 :1;
    IO_WORD _CP12 :1;
    IO_WORD _CP11 :1;
    IO_WORD _CP10 :1;
    IO_WORD _CP9 :1;
    IO_WORD _CP8 :1;
    IO_WORD _CP7 :1;
    IO_WORD _CP6 :1;
    IO_WORD _CP5 :1;
    IO_WORD _CP4 :1;
    IO_WORD _CP3 :1;
    IO_WORD _CP2 :1;
    IO_WORD _CP1 :1;
    IO_WORD _CP0 :1;
  }bit;
 }IPCP1STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CP15 :1;
    IO_WORD _CP14 :1;
    IO_WORD _CP13 :1;
    IO_WORD _CP12 :1;
    IO_WORD _CP11 :1;
    IO_WORD _CP10 :1;
    IO_WORD _CP9 :1;
    IO_WORD _CP8 :1;
    IO_WORD _CP7 :1;
    IO_WORD _CP6 :1;
    IO_WORD _CP5 :1;
    IO_WORD _CP4 :1;
    IO_WORD _CP3 :1;
    IO_WORD _CP2 :1;
    IO_WORD _CP1 :1;
    IO_WORD _CP0 :1;
  }bit;
 }IPCP2STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CP15 :1;
    IO_WORD _CP14 :1;
    IO_WORD _CP13 :1;
    IO_WORD _CP12 :1;
    IO_WORD _CP11 :1;
    IO_WORD _CP10 :1;
    IO_WORD _CP9 :1;
    IO_WORD _CP8 :1;
    IO_WORD _CP7 :1;
    IO_WORD _CP6 :1;
    IO_WORD _CP5 :1;
    IO_WORD _CP4 :1;
    IO_WORD _CP3 :1;
    IO_WORD _CP2 :1;
    IO_WORD _CP1 :1;
    IO_WORD _CP0 :1;
  }bit;
 }IPCP3STR;
typedef union{   /* Output Compare 0-3 */
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CMOD :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _OTD1 :1;
    IO_WORD _OTD0 :1;
    IO_WORD _ICP1 :1;
    IO_WORD _ICP0 :1;
    IO_WORD _ICE1 :1;
    IO_WORD _ICE0 :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CST1 :1;
    IO_WORD _CST0 :1;
  }bit;
 }OCS01STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CMOD :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _OTD3 :1;
    IO_WORD _OTD2 :1;
    IO_WORD _ICP3 :1;
    IO_WORD _ICP2 :1;
    IO_WORD _ICE3 :1;
    IO_WORD _ICE2 :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CST3 :1;
    IO_WORD _CST2 :1;
  }bit;
 }OCS23STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _C15 :1;
    IO_WORD _C14 :1;
    IO_WORD _C13 :1;
    IO_WORD _C12 :1;
    IO_WORD _C11 :1;
    IO_WORD _C10 :1;
    IO_WORD _C9 :1;
    IO_WORD _C8 :1;
    IO_WORD _C7 :1;
    IO_WORD _C6 :1;
    IO_WORD _C5 :1;
    IO_WORD _C4 :1;
    IO_WORD _C3 :1;
    IO_WORD _C2 :1;
    IO_WORD _C1 :1;
    IO_WORD _C0 :1;
  }bit;
 }OCCP0STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _C15 :1;
    IO_WORD _C14 :1;
    IO_WORD _C13 :1;
    IO_WORD _C12 :1;
    IO_WORD _C11 :1;
    IO_WORD _C10 :1;
    IO_WORD _C9 :1;
    IO_WORD _C8 :1;
    IO_WORD _C7 :1;
    IO_WORD _C6 :1;
    IO_WORD _C5 :1;
    IO_WORD _C4 :1;
    IO_WORD _C3 :1;
    IO_WORD _C2 :1;
    IO_WORD _C1 :1;
    IO_WORD _C0 :1;
  }bit;
 }OCCP1STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _C15 :1;
    IO_WORD _C14 :1;
    IO_WORD _C13 :1;
    IO_WORD _C12 :1;
    IO_WORD _C11 :1;
    IO_WORD _C10 :1;
    IO_WORD _C9 :1;
    IO_WORD _C8 :1;
    IO_WORD _C7 :1;
    IO_WORD _C6 :1;
    IO_WORD _C5 :1;
    IO_WORD _C4 :1;
    IO_WORD _C3 :1;
    IO_WORD _C2 :1;
    IO_WORD _C1 :1;
    IO_WORD _C0 :1;
  }bit;
 }OCCP2STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _C15 :1;
    IO_WORD _C14 :1;
    IO_WORD _C13 :1;
    IO_WORD _C12 :1;
    IO_WORD _C11 :1;
    IO_WORD _C10 :1;
    IO_WORD _C9 :1;
    IO_WORD _C8 :1;
    IO_WORD _C7 :1;
    IO_WORD _C6 :1;
    IO_WORD _C5 :1;
    IO_WORD _C4 :1;
    IO_WORD _C3 :1;
    IO_WORD _C2 :1;
    IO_WORD _C1 :1;
    IO_WORD _C0 :1;
  }bit;
 }OCCP3STR;
typedef union{   /* ADC */
    IO_WORD	word;
    struct{   
    IO_WORD _ADE31 :1;
    IO_WORD _ADE30 :1;
    IO_WORD _ADE29 :1;
    IO_WORD _ADE28 :1;
    IO_WORD _ADE27 :1;
    IO_WORD _ADE26 :1;
    IO_WORD _ADE25 :1;
    IO_WORD _ADE24 :1;
    IO_WORD _ADE23 :1;
    IO_WORD _ADE22 :1;
    IO_WORD _ADE21 :1;
    IO_WORD _ADE20 :1;
    IO_WORD _ADE19 :1;
    IO_WORD _ADE18 :1;
    IO_WORD _ADE17 :1;
    IO_WORD _ADE16 :1;
  }bit;
 }ADERHSTR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _ADE15 :1;
    IO_WORD _ADE14 :1;
    IO_WORD _ADE13 :1;
    IO_WORD _ADE12 :1;
    IO_WORD _ADE11 :1;
    IO_WORD _ADE10 :1;
    IO_WORD _ADE9 :1;
    IO_WORD _ADE8 :1;
    IO_WORD _ADE7 :1;
    IO_WORD _ADE6 :1;
    IO_WORD _ADE5 :1;
    IO_WORD _ADE4 :1;
    IO_WORD _ADE3 :1;
    IO_WORD _ADE2 :1;
    IO_WORD _ADE1 :1;
    IO_WORD _ADE0 :1;
  }bit;
 }ADERLSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _BUSY :1;
    IO_BYTE _INT :1;
    IO_BYTE _INTE :1;
    IO_BYTE _PAUS :1;
    IO_BYTE _STS1 :1;
    IO_BYTE _STS0 :1;
    IO_BYTE _STRT :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _STS :2;
  }bitc;
 }ADCS1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MD1 :1;
    IO_BYTE _MD0 :1;
    IO_BYTE _S10 :1;
    IO_BYTE _ACH4 :1;
    IO_BYTE _ACH3 :1;
    IO_BYTE _ACH2 :1;
    IO_BYTE _ACH1 :1;
    IO_BYTE _ACH0 :1;
  }bit;
  struct{
    IO_BYTE _MD :2;
    IO_BYTE :1;
    IO_BYTE _ACH :5;
  }bitc;
 }ADCS0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D9 :1;
    IO_BYTE _D8 :1;
  }bit;
 }ADCR1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }ADCR0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CT5 :1;
    IO_BYTE _CT4 :1;
    IO_BYTE _CT3 :1;
    IO_BYTE _CT2 :1;
    IO_BYTE _CT1 :1;
    IO_BYTE _CT0 :1;
    IO_BYTE _ST9 :1;
    IO_BYTE _ST8 :1;
  }bit;
 }ADCT1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ST7 :1;
    IO_BYTE _ST6 :1;
    IO_BYTE _ST5 :1;
    IO_BYTE _ST4 :1;
    IO_BYTE _ST3 :1;
    IO_BYTE _ST2 :1;
    IO_BYTE _ST1 :1;
    IO_BYTE _ST0 :1;
  }bit;
 }ADCT0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ANS4 :1;
    IO_BYTE _ANS3 :1;
    IO_BYTE _ANS2 :1;
    IO_BYTE _ANS1 :1;
    IO_BYTE _ASN0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _ANS :5;
  }bitc;
 }ADSCHSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ANE4 :1;
    IO_BYTE _ANE3 :1;
    IO_BYTE _ANE2 :1;
    IO_BYTE _ANE1 :1;
    IO_BYTE _ANE0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _ANE :5;
  }bitc;
 }ADECHSTR;
typedef union{   /* Reload Timer 0 */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMRLR0STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMR0STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CSL2 :1;
    IO_WORD _CSL1 :1;
    IO_WORD _CSL0 :1;
    IO_WORD _MOD2 :1;
    IO_WORD _MOD1 :1;
    IO_WORD _MOD0 :1;
    IO_WORD  :1;
    IO_WORD _OULT :1;
    IO_WORD _RELD :1;
    IO_WORD _INTE :1;
    IO_WORD _UF :1;
    IO_WORD _CNTE :1;
    IO_WORD _TRG :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CSL :3;
    IO_WORD _MOD :3;
  }bitc;
 }TMCSR0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CSL2 :1;
    IO_BYTE _CSL1 :1;
    IO_BYTE _CSL0 :1;
    IO_BYTE _MOD2 :1;
    IO_BYTE _MOD1 :1;
  }bit;
  struct{
    IO_BYTE :3;
    IO_BYTE _CSL :3;
  }bitc;
 }TMCSRH0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MOD0 :1;
    IO_BYTE  :1;
    IO_BYTE _OULT :1;
    IO_BYTE _RELD :1;
    IO_BYTE _INTE :1;
    IO_BYTE _UF :1;
    IO_BYTE _CNTE :1;
    IO_BYTE _TRG :1;
  }bit;
 }TMCSRL0STR;
typedef union{   /* Reload Timer 1 */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMRLR1STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMR1STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CSL2 :1;
    IO_WORD _CSL1 :1;
    IO_WORD _CSL0 :1;
    IO_WORD _MOD2 :1;
    IO_WORD _MOD1 :1;
    IO_WORD _MOD0 :1;
    IO_WORD  :1;
    IO_WORD _OULT :1;
    IO_WORD _RELD :1;
    IO_WORD _INTE :1;
    IO_WORD _UF :1;
    IO_WORD _CNTE :1;
    IO_WORD _TRG :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CSL :3;
    IO_WORD _MOD :3;
  }bitc;
 }TMCSR1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CSL2 :1;
    IO_BYTE _CSL1 :1;
    IO_BYTE _CSL0 :1;
    IO_BYTE _MOD2 :1;
    IO_BYTE _MOD1 :1;
  }bit;
  struct{
    IO_BYTE :3;
    IO_BYTE _CSL :3;
  }bitc;
 }TMCSRH1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MOD0 :1;
    IO_BYTE  :1;
    IO_BYTE _OULT :1;
    IO_BYTE _RELD :1;
    IO_BYTE _INTE :1;
    IO_BYTE _UF :1;
    IO_BYTE _CNTE :1;
    IO_BYTE _TRG :1;
  }bit;
 }TMCSRL1STR;
typedef union{   /* Reload Timer 2 */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMRLR2STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMR2STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CSL2 :1;
    IO_WORD _CSL1 :1;
    IO_WORD _CSL0 :1;
    IO_WORD _MOD2 :1;
    IO_WORD _MOD1 :1;
    IO_WORD _MOD0 :1;
    IO_WORD  :1;
    IO_WORD _OULT :1;
    IO_WORD _RELD :1;
    IO_WORD _INTE :1;
    IO_WORD _UF :1;
    IO_WORD _CNTE :1;
    IO_WORD _TRG :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CSL :3;
    IO_WORD _MOD :3;
  }bitc;
 }TMCSR2STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CSL2 :1;
    IO_BYTE _CSL1 :1;
    IO_BYTE _CSL0 :1;
    IO_BYTE _MOD2 :1;
    IO_BYTE _MOD1 :1;
  }bit;
  struct{
    IO_BYTE :3;
    IO_BYTE _CSL :3;
  }bitc;
 }TMCSRH2STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MOD0 :1;
    IO_BYTE  :1;
    IO_BYTE _OULT :1;
    IO_BYTE _RELD :1;
    IO_BYTE _INTE :1;
    IO_BYTE _UF :1;
    IO_BYTE _CNTE :1;
    IO_BYTE _TRG :1;
  }bit;
 }TMCSRL2STR;
typedef union{   /* Reload Timer 3 */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMRLR3STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMR3STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CSL2 :1;
    IO_WORD _CSL1 :1;
    IO_WORD _CSL0 :1;
    IO_WORD _MOD2 :1;
    IO_WORD _MOD1 :1;
    IO_WORD _MOD0 :1;
    IO_WORD  :1;
    IO_WORD _OULT :1;
    IO_WORD _RELD :1;
    IO_WORD _INTE :1;
    IO_WORD _UF :1;
    IO_WORD _CNTE :1;
    IO_WORD _TRG :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CSL :3;
    IO_WORD _MOD :3;
  }bitc;
 }TMCSR3STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CSL2 :1;
    IO_BYTE _CSL1 :1;
    IO_BYTE _CSL0 :1;
    IO_BYTE _MOD2 :1;
    IO_BYTE _MOD1 :1;
  }bit;
  struct{
    IO_BYTE :3;
    IO_BYTE _CSL :3;
  }bitc;
 }TMCSRH3STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MOD0 :1;
    IO_BYTE  :1;
    IO_BYTE _OULT :1;
    IO_BYTE _RELD :1;
    IO_BYTE _INTE :1;
    IO_BYTE _UF :1;
    IO_BYTE _CNTE :1;
    IO_BYTE _TRG :1;
  }bit;
 }TMCSRL3STR;
typedef union{   /* Reload Timer 4 */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMRLR4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMR4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CSL2 :1;
    IO_WORD _CSL1 :1;
    IO_WORD _CSL0 :1;
    IO_WORD _MOD2 :1;
    IO_WORD _MOD1 :1;
    IO_WORD _MOD0 :1;
    IO_WORD  :1;
    IO_WORD _OULT :1;
    IO_WORD _RELD :1;
    IO_WORD _INTE :1;
    IO_WORD _UF :1;
    IO_WORD _CNTE :1;
    IO_WORD _TRG :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CSL :3;
    IO_WORD _MOD :3;
  }bitc;
 }TMCSR4STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CSL2 :1;
    IO_BYTE _CSL1 :1;
    IO_BYTE _CSL0 :1;
    IO_BYTE _MOD2 :1;
    IO_BYTE _MOD1 :1;
  }bit;
  struct{
    IO_BYTE :3;
    IO_BYTE _CSL :3;
  }bitc;
 }TMCSRH4STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MOD0 :1;
    IO_BYTE  :1;
    IO_BYTE _OULT :1;
    IO_BYTE _RELD :1;
    IO_BYTE _INTE :1;
    IO_BYTE _UF :1;
    IO_BYTE _CNTE :1;
    IO_BYTE _TRG :1;
  }bit;
 }TMCSRL4STR;
typedef union{   /* Reload Timer 5 */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMRLR5STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMR5STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CSL2 :1;
    IO_WORD _CSL1 :1;
    IO_WORD _CSL0 :1;
    IO_WORD _MOD2 :1;
    IO_WORD _MOD1 :1;
    IO_WORD _MOD0 :1;
    IO_WORD  :1;
    IO_WORD _OULT :1;
    IO_WORD _RELD :1;
    IO_WORD _INTE :1;
    IO_WORD _UF :1;
    IO_WORD _CNTE :1;
    IO_WORD _TRG :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CSL :3;
    IO_WORD _MOD :3;
  }bitc;
 }TMCSR5STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CSL2 :1;
    IO_BYTE _CSL1 :1;
    IO_BYTE _CSL0 :1;
    IO_BYTE _MOD2 :1;
    IO_BYTE _MOD1 :1;
  }bit;
  struct{
    IO_BYTE :3;
    IO_BYTE _CSL :3;
  }bitc;
 }TMCSRH5STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MOD0 :1;
    IO_BYTE  :1;
    IO_BYTE _OULT :1;
    IO_BYTE _RELD :1;
    IO_BYTE _INTE :1;
    IO_BYTE _UF :1;
    IO_BYTE _CNTE :1;
    IO_BYTE _TRG :1;
  }bit;
 }TMCSRL5STR;
typedef union{   /* Reload Timer 6 */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMRLR6STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMR6STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CSL2 :1;
    IO_WORD _CSL1 :1;
    IO_WORD _CSL0 :1;
    IO_WORD _MOD2 :1;
    IO_WORD _MOD1 :1;
    IO_WORD _MOD0 :1;
    IO_WORD  :1;
    IO_WORD _OULT :1;
    IO_WORD _RELD :1;
    IO_WORD _INTE :1;
    IO_WORD _UF :1;
    IO_WORD _CNTE :1;
    IO_WORD _TRG :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CSL :3;
    IO_WORD _MOD :3;
  }bitc;
 }TMCSR6STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CSL2 :1;
    IO_BYTE _CSL1 :1;
    IO_BYTE _CSL0 :1;
    IO_BYTE _MOD2 :1;
    IO_BYTE _MOD1 :1;
  }bit;
  struct{
    IO_BYTE :3;
    IO_BYTE _CSL :3;
  }bitc;
 }TMCSRH6STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MOD0 :1;
    IO_BYTE  :1;
    IO_BYTE _OULT :1;
    IO_BYTE _RELD :1;
    IO_BYTE _INTE :1;
    IO_BYTE _UF :1;
    IO_BYTE _CNTE :1;
    IO_BYTE _TRG :1;
  }bit;
 }TMCSRL6STR;
typedef union{   /* Reload Timer 7 */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMRLR7STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }TMR7STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CSL2 :1;
    IO_WORD _CSL1 :1;
    IO_WORD _CSL0 :1;
    IO_WORD _MOD2 :1;
    IO_WORD _MOD1 :1;
    IO_WORD _MOD0 :1;
    IO_WORD  :1;
    IO_WORD _OULT :1;
    IO_WORD _RELD :1;
    IO_WORD _INTE :1;
    IO_WORD _UF :1;
    IO_WORD _CNTE :1;
    IO_WORD _TRG :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _CSL :3;
    IO_WORD _MOD :3;
  }bitc;
 }TMCSR7STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CSL2 :1;
    IO_BYTE _CSL1 :1;
    IO_BYTE _CSL0 :1;
    IO_BYTE _MOD2 :1;
    IO_BYTE _MOD1 :1;
  }bit;
  struct{
    IO_BYTE :3;
    IO_BYTE _CSL :3;
  }bitc;
 }TMCSRH7STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MOD0 :1;
    IO_BYTE  :1;
    IO_BYTE _OULT :1;
    IO_BYTE _RELD :1;
    IO_BYTE _INTE :1;
    IO_BYTE _UF :1;
    IO_BYTE _CNTE :1;
    IO_BYTE _TRG :1;
  }bit;
 }TMCSRL7STR;
typedef union{   /* Free Running Timer0 */
    IO_WORD	word;
    struct{   
    IO_WORD _T15 :1;
    IO_WORD _T14 :1;
    IO_WORD _T13 :1;
    IO_WORD _T12 :1;
    IO_WORD _T11 :1;
    IO_WORD _T10 :1;
    IO_WORD _T9 :1;
    IO_WORD _T8 :1;
    IO_WORD _T7 :1;
    IO_WORD _T6 :1;
    IO_WORD _T5 :1;
    IO_WORD _T4 :1;
    IO_WORD _T3 :1;
    IO_WORD _T2 :1;
    IO_WORD _T1 :1;
    IO_WORD _T0 :1;
  }bit;
 }TCDT0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ECLK :1;
    IO_BYTE _IVF :1;
    IO_BYTE _IVFE :1;
    IO_BYTE _STOP :1;
    IO_BYTE _MODE :1;
    IO_BYTE _CLR :1;
    IO_BYTE _CLK1 :1;
    IO_BYTE _CLK0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLK :2;
  }bitc;
 }TCCS0STR;
typedef union{   /* Free Running Timer1 */
    IO_WORD	word;
    struct{   
    IO_WORD _T15 :1;
    IO_WORD _T14 :1;
    IO_WORD _T13 :1;
    IO_WORD _T12 :1;
    IO_WORD _T11 :1;
    IO_WORD _T10 :1;
    IO_WORD _T9 :1;
    IO_WORD _T8 :1;
    IO_WORD _T7 :1;
    IO_WORD _T6 :1;
    IO_WORD _T5 :1;
    IO_WORD _T4 :1;
    IO_WORD _T3 :1;
    IO_WORD _T2 :1;
    IO_WORD _T1 :1;
    IO_WORD _T0 :1;
  }bit;
 }TCDT1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ECLK :1;
    IO_BYTE _IVF :1;
    IO_BYTE _IVFE :1;
    IO_BYTE _STOP :1;
    IO_BYTE _MODE :1;
    IO_BYTE _CLR :1;
    IO_BYTE _CLK1 :1;
    IO_BYTE _CLK0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLK :2;
  }bitc;
 }TCCS1STR;
typedef union{   /* Free Running Timer2 */
    IO_WORD	word;
    struct{   
    IO_WORD _T15 :1;
    IO_WORD _T14 :1;
    IO_WORD _T13 :1;
    IO_WORD _T12 :1;
    IO_WORD _T11 :1;
    IO_WORD _T10 :1;
    IO_WORD _T9 :1;
    IO_WORD _T8 :1;
    IO_WORD _T7 :1;
    IO_WORD _T6 :1;
    IO_WORD _T5 :1;
    IO_WORD _T4 :1;
    IO_WORD _T3 :1;
    IO_WORD _T2 :1;
    IO_WORD _T1 :1;
    IO_WORD _T0 :1;
  }bit;
 }TCDT2STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ECLK :1;
    IO_BYTE _IVF :1;
    IO_BYTE _IVFE :1;
    IO_BYTE _STOP :1;
    IO_BYTE _MODE :1;
    IO_BYTE _CLR :1;
    IO_BYTE _CLK1 :1;
    IO_BYTE _CLK0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLK :2;
  }bitc;
 }TCCS2STR;
typedef union{   /* Free Running Timer3 */
    IO_WORD	word;
    struct{   
    IO_WORD _T15 :1;
    IO_WORD _T14 :1;
    IO_WORD _T13 :1;
    IO_WORD _T12 :1;
    IO_WORD _T11 :1;
    IO_WORD _T10 :1;
    IO_WORD _T9 :1;
    IO_WORD _T8 :1;
    IO_WORD _T7 :1;
    IO_WORD _T6 :1;
    IO_WORD _T5 :1;
    IO_WORD _T4 :1;
    IO_WORD _T3 :1;
    IO_WORD _T2 :1;
    IO_WORD _T1 :1;
    IO_WORD _T0 :1;
  }bit;
 }TCDT3STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ECLK :1;
    IO_BYTE _IVF :1;
    IO_BYTE _IVFE :1;
    IO_BYTE _STOP :1;
    IO_BYTE _MODE :1;
    IO_BYTE _CLR :1;
    IO_BYTE _CLK1 :1;
    IO_BYTE _CLK0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLK :2;
  }bitc;
 }TCCS3STR;
typedef union{   /* DMAC */
    IO_LWORD	lword;
    struct{   
    IO_LWORD _DENB :1;
    IO_LWORD _PAUS :1;
    IO_LWORD _STRG :1;
    IO_LWORD _IS4 :1;
    IO_LWORD _IS3 :1;
    IO_LWORD _IS2 :1;
    IO_LWORD _IS1 :1;
    IO_LWORD _IS0 :1;
    IO_LWORD _EIS3 :1;
    IO_LWORD _EIS2 :1;
    IO_LWORD _EIS1 :1;
    IO_LWORD _EIS0 :1;
    IO_LWORD _BLK3 :1;
    IO_LWORD _BLK2 :1;
    IO_LWORD _BLK1 :1;
    IO_LWORD _BLK0 :1;
    IO_LWORD _DTCF :1;
    IO_LWORD _DTCE :1;
    IO_LWORD _DTCD :1;
    IO_LWORD _DTCC :1;
    IO_LWORD _DTCB :1;
    IO_LWORD _DTCA :1;
    IO_LWORD _DTC9 :1;
    IO_LWORD _DTC8 :1;
    IO_LWORD _DTC7 :1;
    IO_LWORD _DTC6 :1;
    IO_LWORD _DTC5 :1;
    IO_LWORD _DTC4 :1;
    IO_LWORD _DTC3 :1;
    IO_LWORD _DTC2 :1;
    IO_LWORD _DTC1 :1;
    IO_LWORD _DTC0 :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _IS :5;
    IO_LWORD _EIS :4;
    IO_LWORD _BLK :4;
    IO_LWORD _DTC :16;
  }bitc;
 }DMACA0STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _TYPE1 :1;
    IO_LWORD _TYPE0 :1;
    IO_LWORD _MOD1 :1;
    IO_LWORD _MOD0 :1;
    IO_LWORD _WS1 :1;
    IO_LWORD _WS0 :1;
    IO_LWORD _SADM :1;
    IO_LWORD _DADM :1;
    IO_LWORD _DTCR :1;
    IO_LWORD _SADR :1;
    IO_LWORD _DADR :1;
    IO_LWORD _ERIE :1;
    IO_LWORD _EDIE :1;
    IO_LWORD _DSS2 :1;
    IO_LWORD _DSS1 :1;
    IO_LWORD _DSS0 :1;
    IO_LWORD _SASZ7 :1;
    IO_LWORD _SASZ6 :1;
    IO_LWORD _SASZ5 :1;
    IO_LWORD _SASZ4 :1;
    IO_LWORD _SASZ3 :1;
    IO_LWORD _SASZ2 :1;
    IO_LWORD _SASZ1 :1;
    IO_LWORD _SASZ0 :1;
    IO_LWORD _DASZ7 :1;
    IO_LWORD _DASZ6 :1;
    IO_LWORD _DASZ5 :1;
    IO_LWORD _DASZ4 :1;
    IO_LWORD _DASZ3 :1;
    IO_LWORD _DASZ2 :1;
    IO_LWORD _DASZ1 :1;
    IO_LWORD _DASZ0 :1;
  }bit;
  struct{
    IO_LWORD _TYPE :2;
    IO_LWORD _MOD :2;
    IO_LWORD _WS :2;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _DSS :3;
    IO_LWORD _SASZ :8;
    IO_LWORD _DASZ :8;
  }bitc;
 }DMACB0STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _DENB :1;
    IO_LWORD _PAUS :1;
    IO_LWORD _STRG :1;
    IO_LWORD _IS4 :1;
    IO_LWORD _IS3 :1;
    IO_LWORD _IS2 :1;
    IO_LWORD _IS1 :1;
    IO_LWORD _IS0 :1;
    IO_LWORD _EIS3 :1;
    IO_LWORD _EIS2 :1;
    IO_LWORD _EIS1 :1;
    IO_LWORD _EIS0 :1;
    IO_LWORD _BLK3 :1;
    IO_LWORD _BLK2 :1;
    IO_LWORD _BLK1 :1;
    IO_LWORD _BLK0 :1;
    IO_LWORD _DTCF :1;
    IO_LWORD _DTCE :1;
    IO_LWORD _DTCD :1;
    IO_LWORD _DTCC :1;
    IO_LWORD _DTCB :1;
    IO_LWORD _DTCA :1;
    IO_LWORD _DTC9 :1;
    IO_LWORD _DTC8 :1;
    IO_LWORD _DTC7 :1;
    IO_LWORD _DTC6 :1;
    IO_LWORD _DTC5 :1;
    IO_LWORD _DTC4 :1;
    IO_LWORD _DTC3 :1;
    IO_LWORD _DTC2 :1;
    IO_LWORD _DTC1 :1;
    IO_LWORD _DTC0 :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _IS :5;
    IO_LWORD _EIS :4;
    IO_LWORD _BLK :4;
    IO_LWORD _DTC :16;
  }bitc;
 }DMACA1STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _TYPE1 :1;
    IO_LWORD _TYPE0 :1;
    IO_LWORD _MOD1 :1;
    IO_LWORD _MOD0 :1;
    IO_LWORD _WS1 :1;
    IO_LWORD _WS0 :1;
    IO_LWORD _SADM :1;
    IO_LWORD _DADM :1;
    IO_LWORD _DTCR :1;
    IO_LWORD _SADR :1;
    IO_LWORD _DADR :1;
    IO_LWORD _ERIE :1;
    IO_LWORD _EDIE :1;
    IO_LWORD _DSS2 :1;
    IO_LWORD _DSS1 :1;
    IO_LWORD _DSS0 :1;
    IO_LWORD _SASZ7 :1;
    IO_LWORD _SASZ6 :1;
    IO_LWORD _SASZ5 :1;
    IO_LWORD _SASZ4 :1;
    IO_LWORD _SASZ3 :1;
    IO_LWORD _SASZ2 :1;
    IO_LWORD _SASZ1 :1;
    IO_LWORD _SASZ0 :1;
    IO_LWORD _DASZ7 :1;
    IO_LWORD _DASZ6 :1;
    IO_LWORD _DASZ5 :1;
    IO_LWORD _DASZ4 :1;
    IO_LWORD _DASZ3 :1;
    IO_LWORD _DASZ2 :1;
    IO_LWORD _DASZ1 :1;
    IO_LWORD _DASZ0 :1;
  }bit;
  struct{
    IO_LWORD _TYPE :2;
    IO_LWORD _MOD :2;
    IO_LWORD _WS :2;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _DSS :3;
    IO_LWORD _SASZ :8;
    IO_LWORD _DASZ :8;
  }bitc;
 }DMACB1STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _DENB :1;
    IO_LWORD _PAUS :1;
    IO_LWORD _STRG :1;
    IO_LWORD _IS4 :1;
    IO_LWORD _IS3 :1;
    IO_LWORD _IS2 :1;
    IO_LWORD _IS1 :1;
    IO_LWORD _IS0 :1;
    IO_LWORD _EIS3 :1;
    IO_LWORD _EIS2 :1;
    IO_LWORD _EIS1 :1;
    IO_LWORD _EIS0 :1;
    IO_LWORD _BLK3 :1;
    IO_LWORD _BLK2 :1;
    IO_LWORD _BLK1 :1;
    IO_LWORD _BLK0 :1;
    IO_LWORD _DTCF :1;
    IO_LWORD _DTCE :1;
    IO_LWORD _DTCD :1;
    IO_LWORD _DTCC :1;
    IO_LWORD _DTCB :1;
    IO_LWORD _DTCA :1;
    IO_LWORD _DTC9 :1;
    IO_LWORD _DTC8 :1;
    IO_LWORD _DTC7 :1;
    IO_LWORD _DTC6 :1;
    IO_LWORD _DTC5 :1;
    IO_LWORD _DTC4 :1;
    IO_LWORD _DTC3 :1;
    IO_LWORD _DTC2 :1;
    IO_LWORD _DTC1 :1;
    IO_LWORD _DTC0 :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _IS :5;
    IO_LWORD _EIS :4;
    IO_LWORD _BLK :4;
    IO_LWORD _DTC :16;
  }bitc;
 }DMACA2STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _TYPE1 :1;
    IO_LWORD _TYPE0 :1;
    IO_LWORD _MOD1 :1;
    IO_LWORD _MOD0 :1;
    IO_LWORD _WS1 :1;
    IO_LWORD _WS0 :1;
    IO_LWORD _SADM :1;
    IO_LWORD _DADM :1;
    IO_LWORD _DTCR :1;
    IO_LWORD _SADR :1;
    IO_LWORD _DADR :1;
    IO_LWORD _ERIE :1;
    IO_LWORD _EDIE :1;
    IO_LWORD _DSS2 :1;
    IO_LWORD _DSS1 :1;
    IO_LWORD _DSS0 :1;
    IO_LWORD _SASZ7 :1;
    IO_LWORD _SASZ6 :1;
    IO_LWORD _SASZ5 :1;
    IO_LWORD _SASZ4 :1;
    IO_LWORD _SASZ3 :1;
    IO_LWORD _SASZ2 :1;
    IO_LWORD _SASZ1 :1;
    IO_LWORD _SASZ0 :1;
    IO_LWORD _DASZ7 :1;
    IO_LWORD _DASZ6 :1;
    IO_LWORD _DASZ5 :1;
    IO_LWORD _DASZ4 :1;
    IO_LWORD _DASZ3 :1;
    IO_LWORD _DASZ2 :1;
    IO_LWORD _DASZ1 :1;
    IO_LWORD _DASZ0 :1;
  }bit;
  struct{
    IO_LWORD _TYPE :2;
    IO_LWORD _MOD :2;
    IO_LWORD _WS :2;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _DSS :3;
    IO_LWORD _SASZ :8;
    IO_LWORD _DASZ :8;
  }bitc;
 }DMACB2STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _DENB :1;
    IO_LWORD _PAUS :1;
    IO_LWORD _STRG :1;
    IO_LWORD _IS4 :1;
    IO_LWORD _IS3 :1;
    IO_LWORD _IS2 :1;
    IO_LWORD _IS1 :1;
    IO_LWORD _IS0 :1;
    IO_LWORD _EIS3 :1;
    IO_LWORD _EIS2 :1;
    IO_LWORD _EIS1 :1;
    IO_LWORD _EIS0 :1;
    IO_LWORD _BLK3 :1;
    IO_LWORD _BLK2 :1;
    IO_LWORD _BLK1 :1;
    IO_LWORD _BLK0 :1;
    IO_LWORD _DTCF :1;
    IO_LWORD _DTCE :1;
    IO_LWORD _DTCD :1;
    IO_LWORD _DTCC :1;
    IO_LWORD _DTCB :1;
    IO_LWORD _DTCA :1;
    IO_LWORD _DTC9 :1;
    IO_LWORD _DTC8 :1;
    IO_LWORD _DTC7 :1;
    IO_LWORD _DTC6 :1;
    IO_LWORD _DTC5 :1;
    IO_LWORD _DTC4 :1;
    IO_LWORD _DTC3 :1;
    IO_LWORD _DTC2 :1;
    IO_LWORD _DTC1 :1;
    IO_LWORD _DTC0 :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _IS :5;
    IO_LWORD _EIS :4;
    IO_LWORD _BLK :4;
    IO_LWORD _DTC :16;
  }bitc;
 }DMACA3STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _TYPE1 :1;
    IO_LWORD _TYPE0 :1;
    IO_LWORD _MOD1 :1;
    IO_LWORD _MOD0 :1;
    IO_LWORD _WS1 :1;
    IO_LWORD _WS0 :1;
    IO_LWORD _SADM :1;
    IO_LWORD _DADM :1;
    IO_LWORD _DTCR :1;
    IO_LWORD _SADR :1;
    IO_LWORD _DADR :1;
    IO_LWORD _ERIE :1;
    IO_LWORD _EDIE :1;
    IO_LWORD _DSS2 :1;
    IO_LWORD _DSS1 :1;
    IO_LWORD _DSS0 :1;
    IO_LWORD _SASZ7 :1;
    IO_LWORD _SASZ6 :1;
    IO_LWORD _SASZ5 :1;
    IO_LWORD _SASZ4 :1;
    IO_LWORD _SASZ3 :1;
    IO_LWORD _SASZ2 :1;
    IO_LWORD _SASZ1 :1;
    IO_LWORD _SASZ0 :1;
    IO_LWORD _DASZ7 :1;
    IO_LWORD _DASZ6 :1;
    IO_LWORD _DASZ5 :1;
    IO_LWORD _DASZ4 :1;
    IO_LWORD _DASZ3 :1;
    IO_LWORD _DASZ2 :1;
    IO_LWORD _DASZ1 :1;
    IO_LWORD _DASZ0 :1;
  }bit;
  struct{
    IO_LWORD _TYPE :2;
    IO_LWORD _MOD :2;
    IO_LWORD _WS :2;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _DSS :3;
    IO_LWORD _SASZ :8;
    IO_LWORD _DASZ :8;
  }bitc;
 }DMACB3STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _DENB :1;
    IO_LWORD _PAUS :1;
    IO_LWORD _STRG :1;
    IO_LWORD _IS4 :1;
    IO_LWORD _IS3 :1;
    IO_LWORD _IS2 :1;
    IO_LWORD _IS1 :1;
    IO_LWORD _IS0 :1;
    IO_LWORD _EIS3 :1;
    IO_LWORD _EIS2 :1;
    IO_LWORD _EIS1 :1;
    IO_LWORD _EIS0 :1;
    IO_LWORD _BLK3 :1;
    IO_LWORD _BLK2 :1;
    IO_LWORD _BLK1 :1;
    IO_LWORD _BLK0 :1;
    IO_LWORD _DTCF :1;
    IO_LWORD _DTCE :1;
    IO_LWORD _DTCD :1;
    IO_LWORD _DTCC :1;
    IO_LWORD _DTCB :1;
    IO_LWORD _DTCA :1;
    IO_LWORD _DTC9 :1;
    IO_LWORD _DTC8 :1;
    IO_LWORD _DTC7 :1;
    IO_LWORD _DTC6 :1;
    IO_LWORD _DTC5 :1;
    IO_LWORD _DTC4 :1;
    IO_LWORD _DTC3 :1;
    IO_LWORD _DTC2 :1;
    IO_LWORD _DTC1 :1;
    IO_LWORD _DTC0 :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _IS :5;
    IO_LWORD _EIS :4;
    IO_LWORD _BLK :4;
    IO_LWORD _DTC :16;
  }bitc;
 }DMACA4STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _TYPE1 :1;
    IO_LWORD _TYPE0 :1;
    IO_LWORD _MOD1 :1;
    IO_LWORD _MOD0 :1;
    IO_LWORD _WS1 :1;
    IO_LWORD _WS0 :1;
    IO_LWORD _SADM :1;
    IO_LWORD _DADM :1;
    IO_LWORD _DTCR :1;
    IO_LWORD _SADR :1;
    IO_LWORD _DADR :1;
    IO_LWORD _ERIE :1;
    IO_LWORD _EDIE :1;
    IO_LWORD _DSS2 :1;
    IO_LWORD _DSS1 :1;
    IO_LWORD _DSS0 :1;
    IO_LWORD _SASZ7 :1;
    IO_LWORD _SASZ6 :1;
    IO_LWORD _SASZ5 :1;
    IO_LWORD _SASZ4 :1;
    IO_LWORD _SASZ3 :1;
    IO_LWORD _SASZ2 :1;
    IO_LWORD _SASZ1 :1;
    IO_LWORD _SASZ0 :1;
    IO_LWORD _DASZ7 :1;
    IO_LWORD _DASZ6 :1;
    IO_LWORD _DASZ5 :1;
    IO_LWORD _DASZ4 :1;
    IO_LWORD _DASZ3 :1;
    IO_LWORD _DASZ2 :1;
    IO_LWORD _DASZ1 :1;
    IO_LWORD _DASZ0 :1;
  }bit;
  struct{
    IO_LWORD _TYPE :2;
    IO_LWORD _MOD :2;
    IO_LWORD _WS :2;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _DSS :3;
    IO_LWORD _SASZ :8;
    IO_LWORD _DASZ :8;
  }bitc;
 }DMACB4STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _DMAE :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _PM01 :1;
    IO_BYTE _DMAH3 :1;
    IO_BYTE _DMAH2 :1;
    IO_BYTE _DMAH1 :1;
    IO_BYTE _DMAH0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _DMAH :4;
  }bitc;
 }DMACRSTR;
typedef union{   /* Input Capture 4-7 */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ICP5 :1;
    IO_BYTE _ICP4 :1;
    IO_BYTE _ICE5 :1;
    IO_BYTE _ICE4 :1;
    IO_BYTE _EG51 :1;
    IO_BYTE _EG50 :1;
    IO_BYTE _EG41 :1;
    IO_BYTE _EG40 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _EG5 :2;
    IO_BYTE _EG4 :2;
  }bitc;
 }ICS45STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ICP7 :1;
    IO_BYTE _ICP6 :1;
    IO_BYTE _ICE7 :1;
    IO_BYTE _ICE6 :1;
    IO_BYTE _EG71 :1;
    IO_BYTE _EG70 :1;
    IO_BYTE _EG61 :1;
    IO_BYTE _EG60 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _EG7 :2;
    IO_BYTE _EG6 :2;
  }bitc;
 }ICS67STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CP15 :1;
    IO_WORD _CP14 :1;
    IO_WORD _CP13 :1;
    IO_WORD _CP12 :1;
    IO_WORD _CP11 :1;
    IO_WORD _CP10 :1;
    IO_WORD _CP9 :1;
    IO_WORD _CP8 :1;
    IO_WORD _CP7 :1;
    IO_WORD _CP6 :1;
    IO_WORD _CP5 :1;
    IO_WORD _CP4 :1;
    IO_WORD _CP3 :1;
    IO_WORD _CP2 :1;
    IO_WORD _CP1 :1;
    IO_WORD _CP0 :1;
  }bit;
 }IPCP4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CP15 :1;
    IO_WORD _CP14 :1;
    IO_WORD _CP13 :1;
    IO_WORD _CP12 :1;
    IO_WORD _CP11 :1;
    IO_WORD _CP10 :1;
    IO_WORD _CP9 :1;
    IO_WORD _CP8 :1;
    IO_WORD _CP7 :1;
    IO_WORD _CP6 :1;
    IO_WORD _CP5 :1;
    IO_WORD _CP4 :1;
    IO_WORD _CP3 :1;
    IO_WORD _CP2 :1;
    IO_WORD _CP1 :1;
    IO_WORD _CP0 :1;
  }bit;
 }IPCP5STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CP15 :1;
    IO_WORD _CP14 :1;
    IO_WORD _CP13 :1;
    IO_WORD _CP12 :1;
    IO_WORD _CP11 :1;
    IO_WORD _CP10 :1;
    IO_WORD _CP9 :1;
    IO_WORD _CP8 :1;
    IO_WORD _CP7 :1;
    IO_WORD _CP6 :1;
    IO_WORD _CP5 :1;
    IO_WORD _CP4 :1;
    IO_WORD _CP3 :1;
    IO_WORD _CP2 :1;
    IO_WORD _CP1 :1;
    IO_WORD _CP0 :1;
  }bit;
 }IPCP6STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _CP15 :1;
    IO_WORD _CP14 :1;
    IO_WORD _CP13 :1;
    IO_WORD _CP12 :1;
    IO_WORD _CP11 :1;
    IO_WORD _CP10 :1;
    IO_WORD _CP9 :1;
    IO_WORD _CP8 :1;
    IO_WORD _CP7 :1;
    IO_WORD _CP6 :1;
    IO_WORD _CP5 :1;
    IO_WORD _CP4 :1;
    IO_WORD _CP3 :1;
    IO_WORD _CP2 :1;
    IO_WORD _CP1 :1;
    IO_WORD _CP0 :1;
  }bit;
 }IPCP7STR;
typedef union{   /* Output Compare 4-7 */
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CMOD :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _OTD5 :1;
    IO_WORD _OTD4 :1;
    IO_WORD _ICP5 :1;
    IO_WORD _ICP4 :1;
    IO_WORD _ICE5 :1;
    IO_WORD _ICE4 :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CST5 :1;
    IO_WORD _CST4 :1;
  }bit;
 }OCS45STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CMOD :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _OTD7 :1;
    IO_WORD _OTD6 :1;
    IO_WORD _ICP7 :1;
    IO_WORD _ICP6 :1;
    IO_WORD _ICE7 :1;
    IO_WORD _ICE6 :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _CST7 :1;
    IO_WORD _CST6 :1;
  }bit;
 }OCS67STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _C15 :1;
    IO_WORD _C14 :1;
    IO_WORD _C13 :1;
    IO_WORD _C12 :1;
    IO_WORD _C11 :1;
    IO_WORD _C10 :1;
    IO_WORD _C9 :1;
    IO_WORD _C8 :1;
    IO_WORD _C7 :1;
    IO_WORD _C6 :1;
    IO_WORD _C5 :1;
    IO_WORD _C4 :1;
    IO_WORD _C3 :1;
    IO_WORD _C2 :1;
    IO_WORD _C1 :1;
    IO_WORD _C0 :1;
  }bit;
 }OCCP4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _C15 :1;
    IO_WORD _C14 :1;
    IO_WORD _C13 :1;
    IO_WORD _C12 :1;
    IO_WORD _C11 :1;
    IO_WORD _C10 :1;
    IO_WORD _C9 :1;
    IO_WORD _C8 :1;
    IO_WORD _C7 :1;
    IO_WORD _C6 :1;
    IO_WORD _C5 :1;
    IO_WORD _C4 :1;
    IO_WORD _C3 :1;
    IO_WORD _C2 :1;
    IO_WORD _C1 :1;
    IO_WORD _C0 :1;
  }bit;
 }OCCP5STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _C15 :1;
    IO_WORD _C14 :1;
    IO_WORD _C13 :1;
    IO_WORD _C12 :1;
    IO_WORD _C11 :1;
    IO_WORD _C10 :1;
    IO_WORD _C9 :1;
    IO_WORD _C8 :1;
    IO_WORD _C7 :1;
    IO_WORD _C6 :1;
    IO_WORD _C5 :1;
    IO_WORD _C4 :1;
    IO_WORD _C3 :1;
    IO_WORD _C2 :1;
    IO_WORD _C1 :1;
    IO_WORD _C0 :1;
  }bit;
 }OCCP6STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _C15 :1;
    IO_WORD _C14 :1;
    IO_WORD _C13 :1;
    IO_WORD _C12 :1;
    IO_WORD _C11 :1;
    IO_WORD _C10 :1;
    IO_WORD _C9 :1;
    IO_WORD _C8 :1;
    IO_WORD _C7 :1;
    IO_WORD _C6 :1;
    IO_WORD _C5 :1;
    IO_WORD _C4 :1;
    IO_WORD _C3 :1;
    IO_WORD _C2 :1;
    IO_WORD _C1 :1;
    IO_WORD _C0 :1;
  }bit;
 }OCCP7STR;
typedef union{   /* Free Running Timer4 */
    IO_WORD	word;
    struct{   
    IO_WORD _T15 :1;
    IO_WORD _T14 :1;
    IO_WORD _T13 :1;
    IO_WORD _T12 :1;
    IO_WORD _T11 :1;
    IO_WORD _T10 :1;
    IO_WORD _T9 :1;
    IO_WORD _T8 :1;
    IO_WORD _T7 :1;
    IO_WORD _T6 :1;
    IO_WORD _T5 :1;
    IO_WORD _T4 :1;
    IO_WORD _T3 :1;
    IO_WORD _T2 :1;
    IO_WORD _T1 :1;
    IO_WORD _T0 :1;
  }bit;
 }TCDT4STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ECLK :1;
    IO_BYTE _IVF :1;
    IO_BYTE _IVFE :1;
    IO_BYTE _STOP :1;
    IO_BYTE _MODE :1;
    IO_BYTE _CLR :1;
    IO_BYTE _CLK1 :1;
    IO_BYTE _CLK0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLK :2;
  }bitc;
 }TCCS4STR;
typedef union{   /* Free Running Timer5 */
    IO_WORD	word;
    struct{   
    IO_WORD _T15 :1;
    IO_WORD _T14 :1;
    IO_WORD _T13 :1;
    IO_WORD _T12 :1;
    IO_WORD _T11 :1;
    IO_WORD _T10 :1;
    IO_WORD _T9 :1;
    IO_WORD _T8 :1;
    IO_WORD _T7 :1;
    IO_WORD _T6 :1;
    IO_WORD _T5 :1;
    IO_WORD _T4 :1;
    IO_WORD _T3 :1;
    IO_WORD _T2 :1;
    IO_WORD _T1 :1;
    IO_WORD _T0 :1;
  }bit;
 }TCDT5STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ECLK :1;
    IO_BYTE _IVF :1;
    IO_BYTE _IVFE :1;
    IO_BYTE _STOP :1;
    IO_BYTE _MODE :1;
    IO_BYTE _CLR :1;
    IO_BYTE _CLK1 :1;
    IO_BYTE _CLK0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLK :2;
  }bitc;
 }TCCS5STR;
typedef union{   /* Free Running Timer6 */
    IO_WORD	word;
    struct{   
    IO_WORD _T15 :1;
    IO_WORD _T14 :1;
    IO_WORD _T13 :1;
    IO_WORD _T12 :1;
    IO_WORD _T11 :1;
    IO_WORD _T10 :1;
    IO_WORD _T9 :1;
    IO_WORD _T8 :1;
    IO_WORD _T7 :1;
    IO_WORD _T6 :1;
    IO_WORD _T5 :1;
    IO_WORD _T4 :1;
    IO_WORD _T3 :1;
    IO_WORD _T2 :1;
    IO_WORD _T1 :1;
    IO_WORD _T0 :1;
  }bit;
 }TCDT6STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ECLK :1;
    IO_BYTE _IVF :1;
    IO_BYTE _IVFE :1;
    IO_BYTE _STOP :1;
    IO_BYTE _MODE :1;
    IO_BYTE _CLR :1;
    IO_BYTE _CLK1 :1;
    IO_BYTE _CLK0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLK :2;
  }bitc;
 }TCCS6STR;
typedef union{   /* Free Running Timer7 */
    IO_WORD	word;
    struct{   
    IO_WORD _T15 :1;
    IO_WORD _T14 :1;
    IO_WORD _T13 :1;
    IO_WORD _T12 :1;
    IO_WORD _T11 :1;
    IO_WORD _T10 :1;
    IO_WORD _T9 :1;
    IO_WORD _T8 :1;
    IO_WORD _T7 :1;
    IO_WORD _T6 :1;
    IO_WORD _T5 :1;
    IO_WORD _T4 :1;
    IO_WORD _T3 :1;
    IO_WORD _T2 :1;
    IO_WORD _T1 :1;
    IO_WORD _T0 :1;
  }bit;
 }TCDT7STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ECLK :1;
    IO_BYTE _IVF :1;
    IO_BYTE _IVFE :1;
    IO_BYTE _STOP :1;
    IO_BYTE _MODE :1;
    IO_BYTE _CLR :1;
    IO_BYTE _CLK1 :1;
    IO_BYTE _CLK0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLK :2;
  }bitc;
 }TCCS7STR;
typedef union{   /* ROM Select Register */
    IO_WORD	word;
    struct{   
    IO_WORD _D15 :1;
    IO_WORD _D14 :1;
    IO_WORD _D13 :1;
    IO_WORD _D12 :1;
    IO_WORD _D11 :1;
    IO_WORD _D10 :1;
    IO_WORD _D9 :1;
    IO_WORD _D8 :1;
    IO_WORD _D7 :1;
    IO_WORD _D6 :1;
    IO_WORD _D5 :1;
    IO_WORD _D4 :1;
    IO_WORD _D3 :1;
    IO_WORD _D2 :1;
    IO_WORD _D1 :1;
    IO_WORD _D0 :1;
  }bit;
 }ROMSSTR;
typedef union{   /* Interrupt Control Unit */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR00STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR01STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR02STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR03STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR04STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR05STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR06STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR07STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR08STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR09STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR10STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR11STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR12STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR13STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR23STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR25STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR29STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR30STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR31STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR32STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR33STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR34STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR35STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR36STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR37STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR38STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR39STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR40STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR41STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR42STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR43STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR44STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR45STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR46STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR47STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR48STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR49STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR50STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR51STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR52STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR53STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR54STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR55STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR56STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR57STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR58STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR59STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR60STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR61STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR62STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ICR4 :1;
    IO_BYTE _ICR3 :1;
    IO_BYTE _ICR2 :1;
    IO_BYTE _ICR1 :1;
    IO_BYTE _ICR0 :1;
  }bit;
 }ICR63STR;
typedef union{   /* Clock Control Unit */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _INIT :1;
    IO_BYTE _HSTB :1;
    IO_BYTE _WDOG :1;
    IO_BYTE _ERST :1;
    IO_BYTE _SRST :1;
    IO_BYTE _LINIT :1;
    IO_BYTE _WT1 :1;
    IO_BYTE _WT0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _WT :2;
  }bitc;
 }RSRRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _STOP :1;
    IO_BYTE _SLEEP :1;
    IO_BYTE _HIZ :1;
    IO_BYTE _SRST :1;
    IO_BYTE _OS1 :1;
    IO_BYTE _OS0 :1;
    IO_BYTE _OSCD2 :1;
    IO_BYTE _OSCD1 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _OS :2;
    IO_BYTE _OSCD :2;
  }bitc;
 }STCRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _TBIF :1;
    IO_BYTE _TBIE :1;
    IO_BYTE _TBC2 :1;
    IO_BYTE _TBC1 :1;
    IO_BYTE _TBC0 :1;
    IO_BYTE  :1;
    IO_BYTE _SYNCR :1;
    IO_BYTE _SYNCS :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _TBC :3;
  }bitc;
 }TBCRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }CTBRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _SCKEN :1;
    IO_BYTE _PLL1EN :1;
    IO_BYTE _CLKS1 :1;
    IO_BYTE _CLKS0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _CLKS :2;
  }bitc;
 }CLKRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }WPRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _B3 :1;
    IO_BYTE _B2 :1;
    IO_BYTE _B1 :1;
    IO_BYTE _B0 :1;
    IO_BYTE _P3 :1;
    IO_BYTE _P2 :1;
    IO_BYTE _P1 :1;
    IO_BYTE _P0 :1;
  }bit;
  struct{
    IO_BYTE _B :4;
    IO_BYTE _P :4;
  }bitc;
 }DIVR0STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _T3 :1;
    IO_BYTE _T2 :1;
    IO_BYTE _T1 :1;
    IO_BYTE _T0 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE _T :4;
  }bitc;
 }DIVR1STR;
typedef union{   /* PLL - Clock Gear Unit: */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _DVM3 :1;
    IO_BYTE _DVM2 :1;
    IO_BYTE _DVM1 :1;
    IO_BYTE _DVM0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _DVM :4;
  }bitc;
 }PLLDIVMSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _DVN5 :1;
    IO_BYTE _DVN4 :1;
    IO_BYTE _DVN3 :1;
    IO_BYTE _DVN2 :1;
    IO_BYTE _DVN1 :1;
    IO_BYTE _DVN0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _DVN :6;
  }bitc;
 }PLLDIVNSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _DVG3 :1;
    IO_BYTE _DVG2 :1;
    IO_BYTE _DVG1 :1;
    IO_BYTE _DVG0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _DVG :4;
  }bitc;
 }PLLDIVGSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _MLG7 :1;
    IO_BYTE _MLG6 :1;
    IO_BYTE _MLG5 :1;
    IO_BYTE _MLG4 :1;
    IO_BYTE _MLG3 :1;
    IO_BYTE _MLG2 :1;
    IO_BYTE _MLG1 :1;
    IO_BYTE _MLG0 :1;
  }bit;
  struct{
    IO_BYTE _MLG :8;
  }bitc;
 }PLLMULGSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _IEDN :1;
    IO_BYTE _GRDN :1;
    IO_BYTE _IEUP :1;
    IO_BYTE _GRUP :1;
  }bit;
 }PLLCTRLSTR;
typedef union{   /* Main/Sub Oscillator Control */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _FCI :1;
    IO_BYTE _RFBEN :1;
    IO_BYTE _OSCR :1;
  }bit;
 }OSCC1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _OSCS7 :1;
    IO_BYTE _OSCS6 :1;
    IO_BYTE _OSCS5 :1;
    IO_BYTE _OSCS4 :1;
    IO_BYTE _OSCS3 :1;
    IO_BYTE _OSCS2 :1;
    IO_BYTE _OSCS1 :1;
    IO_BYTE _OSCS0 :1;
  }bit;
 }OSCS1STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _FCI :1;
    IO_BYTE _RFBEN :1;
    IO_BYTE _OSCR :1;
  }bit;
 }OSCC2STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _OSCS7 :1;
    IO_BYTE _OSCS6 :1;
    IO_BYTE _OSCS5 :1;
    IO_BYTE _OSCS4 :1;
    IO_BYTE _OSCS3 :1;
    IO_BYTE _OSCS2 :1;
    IO_BYTE _OSCS1 :1;
    IO_BYTE _OSCS0 :1;
  }bit;
 }OSCS2STR;
typedef union{   /* Port Input Enable Control */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CPORTEN :1;
    IO_BYTE _GPORTEN :1;
  }bit;
 }PORTENSTR;
typedef union{   /* Real Time Clock (Watch Timer) */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _INTE4 :1;
    IO_BYTE _INT4 :1;
  }bit;
 }WTCERSTR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _INTE3 :1;
    IO_WORD _INT3 :1;
    IO_WORD _INTE2 :1;
    IO_WORD _INT2 :1;
    IO_WORD _INTE1 :1;
    IO_WORD _INT1 :1;
    IO_WORD _INTE0 :1;
    IO_WORD _INT0 :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _RUN :1;
    IO_WORD _UPDT :1;
    IO_WORD  :1;
    IO_WORD _ST :1;
  }bit;
 }WTCRSTR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD _D20 :1;
    IO_LWORD _D19 :1;
    IO_LWORD _D18 :1;
    IO_LWORD _D17 :1;
    IO_LWORD _D16 :1;
    IO_LWORD _D15 :1;
    IO_LWORD _D14 :1;
    IO_LWORD _D13 :1;
    IO_LWORD _D12 :1;
    IO_LWORD _D11 :1;
    IO_LWORD _D10 :1;
    IO_LWORD _D9 :1;
    IO_LWORD _D8 :1;
    IO_LWORD _D7 :1;
    IO_LWORD _D6 :1;
    IO_LWORD _D5 :1;
    IO_LWORD _D4 :1;
    IO_LWORD _D3 :1;
    IO_LWORD _D2 :1;
    IO_LWORD _D1 :1;
    IO_LWORD _D0 :1;
  }bit;
 }WTBRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _H4 :1;
    IO_BYTE _H3 :1;
    IO_BYTE _H2 :1;
    IO_BYTE _H1 :1;
    IO_BYTE _H0 :1;
  }bit;
 }WTHRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _M5 :1;
    IO_BYTE _M4 :1;
    IO_BYTE _M3 :1;
    IO_BYTE _M2 :1;
    IO_BYTE _M1 :1;
    IO_BYTE _M0 :1;
  }bit;
 }WTMRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _S5 :1;
    IO_BYTE _S4 :1;
    IO_BYTE _S3 :1;
    IO_BYTE _S2 :1;
    IO_BYTE _S1 :1;
    IO_BYTE _S0 :1;
  }bit;
 }WTSRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _SCKS :1;
    IO_BYTE _MM :1;
    IO_BYTE _SM :1;
    IO_BYTE _RCE :1;
    IO_BYTE _MSVE :1;
    IO_BYTE _SSVE :1;
    IO_BYTE _SRST :1;
    IO_BYTE _OUTE :1;
  }bit;
 }CSVCRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _EDSUEN :1;
    IO_BYTE _PLLLOCK :1;
    IO_BYTE _RCSEL :1;
    IO_BYTE _MONCKI :1;
    IO_BYTE _CSC3 :1;
    IO_BYTE _CSC2 :1;
    IO_BYTE _CSC1 :1;
    IO_BYTE _CSC0 :1;
  }bit;
  struct{
    IO_BYTE :4;
    IO_BYTE _CSC :4;
  }bitc;
 }CSCFGSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _CMPRE3 :1;
    IO_BYTE _CMPRE2 :1;
    IO_BYTE _CMPRE1 :1;
    IO_BYTE _CMPRE0 :1;
    IO_BYTE _CMSEL3 :1;
    IO_BYTE _CMSEL2 :1;
    IO_BYTE _CMSEL1 :1;
    IO_BYTE _CMSEL0 :1;
  }bit;
  struct{
    IO_BYTE _CMPRE :4;
    IO_BYTE _CMSEL :4;
  }bitc;
 }CMCFGSTR;
typedef union{   /* Calibration Unit of Sub Oszillation */
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _STRT :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _INT :1;
    IO_WORD _INTEN :1;
  }bit;
 }CUCRSTR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _TDD15 :1;
    IO_WORD _TDD14 :1;
    IO_WORD _TDD13 :1;
    IO_WORD _TDD12 :1;
    IO_WORD _TDD11 :1;
    IO_WORD _TDD10 :1;
    IO_WORD _TDD9 :1;
    IO_WORD _TDD8 :1;
    IO_WORD _TDD7 :1;
    IO_WORD _TDD6 :1;
    IO_WORD _TDD5 :1;
    IO_WORD _TDD4 :1;
    IO_WORD _TDD3 :1;
    IO_WORD _TDD2 :1;
    IO_WORD _TDD1 :1;
    IO_WORD _TDD0 :1;
  }bit;
 }CUTDSTR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _TDR23 :1;
    IO_WORD _TDR22 :1;
    IO_WORD _TDR21 :1;
    IO_WORD _TDR20 :1;
    IO_WORD _TDR19 :1;
    IO_WORD _TDR18 :1;
    IO_WORD _TDR17 :1;
    IO_WORD _TDR16 :1;
  }bit;
 }CUTR1STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _TDR15 :1;
    IO_WORD _TDR14 :1;
    IO_WORD _TDR13 :1;
    IO_WORD _TDR12 :1;
    IO_WORD _TDR11 :1;
    IO_WORD _TDR10 :1;
    IO_WORD _TDR9 :1;
    IO_WORD _TDR8 :1;
    IO_WORD _TDR7 :1;
    IO_WORD _TDR6 :1;
    IO_WORD _TDR5 :1;
    IO_WORD _TDR4 :1;
    IO_WORD _TDR3 :1;
    IO_WORD _TDR2 :1;
    IO_WORD _TDR1 :1;
    IO_WORD _TDR0 :1;
  }bit;
 }CUTR2STR;
typedef union{   /* Clock Modulator */
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _MP13 :1;
    IO_WORD _MP12 :1;
    IO_WORD _MP11 :1;
    IO_WORD _MP10 :1;
    IO_WORD _MP9 :1;
    IO_WORD _MP8 :1;
    IO_WORD _MP7 :1;
    IO_WORD _MP6 :1;
    IO_WORD _MP5 :1;
    IO_WORD _MP4 :1;
    IO_WORD _MP3 :1;
    IO_WORD _MP2 :1;
    IO_WORD _MP1 :1;
    IO_WORD _MP0 :1;
  }bit;
 }CMPRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _FMODRUN :1;
    IO_BYTE  :1;
    IO_BYTE _FMOD :1;
    IO_BYTE _PDX :1;
  }bit;
 }CMCRSTR;
typedef union{   /* CAN clock control */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CPCKS1 :1;
    IO_BYTE _CPCKS0 :1;
    IO_BYTE _DVC3 :1;
    IO_BYTE _DVC2 :1;
    IO_BYTE _DVC1 :1;
    IO_BYTE _DVC0 :1;
  }bit;
  struct{
    IO_BYTE :2;
    IO_BYTE _CPCKS :2;
    IO_BYTE _DVC :4;
  }bitc;
 }CANPRESTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CANCKD5 :1;
    IO_BYTE _CANCKD4 :1;
    IO_BYTE _CANCKD3 :1;
    IO_BYTE _CANCKD2 :1;
    IO_BYTE _CANCKD1 :1;
    IO_BYTE _CANCKD0 :1;
  }bit;
 }CANCKDSTR;
typedef union{   /* LV Detection / Hardware-Watchdog */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _LVESEL3 :1;
    IO_BYTE _LVESEL2 :1;
    IO_BYTE _LVESEL1 :1;
    IO_BYTE _LVESEL0 :1;
    IO_BYTE _LVISEL3 :1;
    IO_BYTE _LVISEL2 :1;
    IO_BYTE _LVISEL1 :1;
    IO_BYTE _LVISEL0 :1;
  }bit;
  struct{
    IO_BYTE _LVESEL :4;
    IO_BYTE _LVISEL :4;
  }bitc;
 }LVSELSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _LVSEL :1;
    IO_BYTE _LVEPD :1;
    IO_BYTE _LVIPD :1;
    IO_BYTE _LVREN :1;
    IO_BYTE  :1;
    IO_BYTE _LVIEN :1;
    IO_BYTE _LVIRQ :1;
  }bit;
 }LVDETSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ED1 :1;
    IO_BYTE _ED0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _ED :2;
  }bitc;
 }HWWDESTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CL :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _CPUF :1;
  }bit;
 }HWWDSTR;
typedef union{   /* Main-/Sub-Oscillatio Stabilization Timer */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _WIF :1;
    IO_BYTE _WIE :1;
    IO_BYTE _WEN :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _WS1 :1;
    IO_BYTE _WS0 :1;
    IO_BYTE _WCL :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _WS :2;
  }bitc;
 }OSCRHSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _WIF :1;
    IO_BYTE _WIE :1;
    IO_BYTE _WEN :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _WS1 :1;
    IO_BYTE _WS0 :1;
    IO_BYTE _WCL :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _WS :2;
  }bitc;
 }WPCRHSTR;
typedef union{   /* Main-/Sub-Oscillatio Standby Control */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _OSCDS1 :1;
  }bit;
 }OSCCRSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _FLASHSEL :1;
    IO_BYTE _MAINSEL :1;
    IO_BYTE _SUBSEL3 :1;
    IO_BYTE _SUBSEL2 :1;
    IO_BYTE _SUBSEL1 :1;
    IO_BYTE _SUBSEL0 :1;
  }bit;
  struct{
    IO_BYTE :4;
    IO_BYTE _SUBSEL :4;
  }bitc;
 }REGSELSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _MSTBO :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _MAINKPEN :1;
    IO_BYTE _MAINDSBL :1;
  }bit;
 }REGCTRSTR;
typedef union{   /* Mode Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _ROMA :1;
    IO_BYTE _WTH1 :1;
    IO_BYTE _WTH0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _WTH :2;
  }bitc;
 }MODRSTR;
typedef union{   /* R-bus Port Data Direct Read Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }PDRD18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PDRD29STR;
typedef union{   /* R-bus Port Direction Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }DDR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }DDR29STR;
typedef union{   /* R-bus Port Function Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }PFR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PFR29STR;
typedef union{   /* R-bus Port Extra Function Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPFR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPFR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }EPFR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }EPFR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }EPFR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }EPFR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }EPFR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPFR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPFR27STR;
typedef union{   /* R-bus Port Output Drive Select Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }PODR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PODR29STR;
typedef union{   /* R-bus Port Input Level Select Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }PILR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PILR29STR;
typedef union{   /* R-bus Port Extra Input Level Select Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }EPILR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }EPILR29STR;
typedef union{   /* R-bus Port Pull-Up/Down  Enable Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }PPER18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPER29STR;
typedef union{   /* R-bus Port Pull-Up/Down Control Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR14STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR15STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR16STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR17STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }PPCR18STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _D6 :1;
    IO_BYTE  :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
 }PPCR19STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR20STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR21STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR22STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR24STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR26STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR27STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR28STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE _D7 :1;
    IO_BYTE _D6 :1;
    IO_BYTE _D5 :1;
    IO_BYTE _D4 :1;
    IO_BYTE _D3 :1;
    IO_BYTE _D2 :1;
    IO_BYTE _D1 :1;
    IO_BYTE _D0 :1;
  }bit;
 }PPCR29STR;
typedef union{   /* Flash Memory/I-Cache Control Register */
    IO_BYTE	byte;
    struct{   
    IO_BYTE _ASYNC :1;
    IO_BYTE _FIXE :1;
    IO_BYTE _BIRE :1;
    IO_BYTE _RDYEG :1;
    IO_BYTE _RDY :1;
    IO_BYTE _RDYI :1;
    IO_BYTE _RW16 :1;
    IO_BYTE _LPM :1;
  }bit;
 }FMCSSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _LOCK :1;
    IO_BYTE _PHASE :1;
    IO_BYTE _PF2I :1;
    IO_BYTE _RD64 :1;
  }bit;
 }FMCRSTR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _REN :1;
    IO_WORD _TAGE :1;
    IO_WORD _FLUSH :1;
    IO_WORD _DBEN :1;
    IO_WORD _PFEN :1;
    IO_WORD _PFMC :1;
    IO_WORD _LOCK :1;
    IO_WORD _ENAB :1;
    IO_WORD _SIZE1 :1;
    IO_WORD _SIZE0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _SIZE :2;
  }bitc;
 }FCHCRSTR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _WTP1 :1;
    IO_WORD _WTP0 :1;
    IO_WORD _WEXH1 :1;
    IO_WORD _WEXH0 :1;
    IO_WORD _WTC3 :1;
    IO_WORD _WTC2 :1;
    IO_WORD _WTC1 :1;
    IO_WORD _WTC0 :1;
    IO_WORD _FRAM :1;
    IO_WORD _ATD2 :1;
    IO_WORD _ATD1 :1;
    IO_WORD _ATD0 :1;
    IO_WORD _EQ3 :1;
    IO_WORD _EQ2 :1;
    IO_WORD _EQ1 :1;
    IO_WORD _EQ0 :1;
  }bit;
  struct{
    IO_WORD _WTP :2;
    IO_WORD _WEXH :2;
    IO_WORD _WTC :4;
    IO_WORD :1;
    IO_WORD _ATD :3;
    IO_WORD _EQ :4;
  }bitc;
 }FMWTSTR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE _ALEH2 :1;
    IO_BYTE _ALEH1 :1;
    IO_BYTE _ALEH0 :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE _ALEH :3;
  }bitc;
 }FMWT2STR;
typedef union{  
    IO_BYTE	byte;
    struct{   
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE  :1;
    IO_BYTE _PS2 :1;
    IO_BYTE _PS1 :1;
    IO_BYTE _PS0 :1;
  }bit;
  struct{
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE :1;
    IO_BYTE _PS :3;
  }bitc;
 }FMPSSTR;
typedef union{   /* Flash Security Control Register */
    IO_LWORD	lword;
    struct{   
    IO_LWORD _CRC31 :1;
    IO_LWORD _CRC30 :1;
    IO_LWORD _CRC29 :1;
    IO_LWORD _CRC28 :1;
    IO_LWORD _CRC27 :1;
    IO_LWORD _CRC26 :1;
    IO_LWORD _CRC25 :1;
    IO_LWORD _CRC24 :1;
    IO_LWORD _CRC23 :1;
    IO_LWORD _CRC22 :1;
    IO_LWORD _CRC21 :1;
    IO_LWORD _CRC20 :1;
    IO_LWORD _CRC19 :1;
    IO_LWORD _CRC18 :1;
    IO_LWORD _CRC17 :1;
    IO_LWORD _CRC16 :1;
    IO_LWORD _CRC15 :1;
    IO_LWORD _CRC14 :1;
    IO_LWORD _CRC13 :1;
    IO_LWORD _CRC12 :1;
    IO_LWORD _CRC11 :1;
    IO_LWORD _CRC10 :1;
    IO_LWORD _CRC9 :1;
    IO_LWORD _CRC8 :1;
    IO_LWORD _CRC7 :1;
    IO_LWORD _CRC6 :1;
    IO_LWORD _CRC5 :1;
    IO_LWORD _CRC4 :1;
    IO_LWORD _CRC3 :1;
    IO_LWORD _CRC2 :1;
    IO_LWORD _CRC1 :1;
    IO_LWORD _CRC0 :1;
  }bit;
 }FSCR0STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD _RDY :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD _CSZ3 :1;
    IO_LWORD _CSZ2 :1;
    IO_LWORD _CSZ1 :1;
    IO_LWORD _CSZ0 :1;
    IO_LWORD _CSA15 :1;
    IO_LWORD _CSA14 :1;
    IO_LWORD _CSA13 :1;
    IO_LWORD _CSA12 :1;
    IO_LWORD _CSA11 :1;
    IO_LWORD _CSA10 :1;
    IO_LWORD _CSA9 :1;
    IO_LWORD _CSA8 :1;
    IO_LWORD _CSA7 :1;
    IO_LWORD _CSA6 :1;
    IO_LWORD _CSA5 :1;
    IO_LWORD _CSA4 :1;
    IO_LWORD _CSA3 :1;
    IO_LWORD _CSA2 :1;
    IO_LWORD _CSA1 :1;
    IO_LWORD _CSA0 :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _CSZ :4;
  }bitc;
 }FSCR1STR;
typedef union{   /* CAN 4 Control Register */
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _Test :1;
    IO_WORD _CCE :1;
    IO_WORD _DAR :1;
    IO_WORD  :1;
    IO_WORD _EIE :1;
    IO_WORD _SIE :1;
    IO_WORD _IE :1;
    IO_WORD _Init :1;
  }bit;
 }CTRLR4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _BOff :1;
    IO_WORD _EWarn :1;
    IO_WORD _EPass :1;
    IO_WORD _RxOK :1;
    IO_WORD _TxOK :1;
    IO_WORD _LEC2 :1;
    IO_WORD _LEC1 :1;
    IO_WORD _LEC0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _LEC :3;
  }bitc;
 }STATR4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _RP :1;
    IO_WORD _REC6 :1;
    IO_WORD _REC5 :1;
    IO_WORD _REC4 :1;
    IO_WORD _REC3 :1;
    IO_WORD _REC2 :1;
    IO_WORD _REC1 :1;
    IO_WORD _REC0 :1;
    IO_WORD _TEC7 :1;
    IO_WORD _TEC6 :1;
    IO_WORD _TEC5 :1;
    IO_WORD _TEC4 :1;
    IO_WORD _TEC3 :1;
    IO_WORD _TEC2 :1;
    IO_WORD _TEC1 :1;
    IO_WORD _TEC0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD _REC :7;
    IO_WORD _TEC :8;
  }bitc;
 }ERRCNT4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD _Tseg22 :1;
    IO_WORD _Tseg21 :1;
    IO_WORD _Tseg20 :1;
    IO_WORD _Tseg13 :1;
    IO_WORD _Tseg12 :1;
    IO_WORD _Tseg11 :1;
    IO_WORD _Tseg10 :1;
    IO_WORD _SJW1 :1;
    IO_WORD _SJW0 :1;
    IO_WORD _BRP5 :1;
    IO_WORD _BRP4 :1;
    IO_WORD _BRP3 :1;
    IO_WORD _BRP2 :1;
    IO_WORD _BRP1 :1;
    IO_WORD _BRP0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD _Tseg2 :3;
    IO_WORD _Tseg1 :4;
    IO_WORD _SJW :2;
    IO_WORD _BRP :6;
  }bitc;
 }BTR4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _Rx :1;
    IO_WORD _Tx1 :1;
    IO_WORD _Tx0 :1;
    IO_WORD _LBack :1;
    IO_WORD _Silent :1;
    IO_WORD _Basic :1;
    IO_WORD  :1;
    IO_WORD  :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _Tx :2;
  }bitc;
 }TESTR4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _BRPE3 :1;
    IO_WORD _BRPE2 :1;
    IO_WORD _BRPE1 :1;
    IO_WORD _BRPE0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _BRPE :4;
  }bitc;
 }BRPER4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
  }bit;
 }BRPE4STR;
typedef union{   /* CAN 4 IF 1 */
    IO_WORD	word;
    struct{   
    IO_WORD _Busy :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _MN5 :1;
    IO_WORD _MN4 :1;
    IO_WORD _MN3 :1;
    IO_WORD _MN2 :1;
    IO_WORD _MN1 :1;
    IO_WORD _MN0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _MN :6;
  }bitc;
 }IF1CREQ4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _WR :1;
    IO_WORD _Mask :1;
    IO_WORD _Arb :1;
    IO_WORD _Control :1;
    IO_WORD _CIP :1;
    IO_WORD _TxReq :1;
    IO_WORD _DataA :1;
    IO_WORD _DataB :1;
  }bit;
 }IF1CMSK4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _MXtd :1;
    IO_WORD _MDir :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
  }bit;
 }IF1MSK24STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _MsgVal :1;
    IO_WORD _Xtd :1;
    IO_WORD _DIR :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
  }bit;
 }IF1ARB24STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _NewDat :1;
    IO_WORD _MsgLst :1;
    IO_WORD _IntPnd :1;
    IO_WORD _UMask :1;
    IO_WORD _TxIE :1;
    IO_WORD _RxIE :1;
    IO_WORD _RmtEn :1;
    IO_WORD _TxRqst :1;
    IO_WORD _EoB :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _DLC3 :1;
    IO_WORD _DLC2 :1;
    IO_WORD _DLC1 :1;
    IO_WORD _DLC0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _DLC :4;
  }bitc;
 }IF1MCTR4STR;
typedef union{   /* CAN 4 IF 2 */
    IO_WORD	word;
    struct{   
    IO_WORD _Busy :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _MN5 :1;
    IO_WORD _MN4 :1;
    IO_WORD _MN3 :1;
    IO_WORD _MN2 :1;
    IO_WORD _MN1 :1;
    IO_WORD _MN0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _MN :6;
  }bitc;
 }IF2CREQ4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _WR :1;
    IO_WORD _Mask :1;
    IO_WORD _Arb :1;
    IO_WORD _Control :1;
    IO_WORD _CIP :1;
    IO_WORD _TxReq :1;
    IO_WORD _DataA :1;
    IO_WORD _DataB :1;
  }bit;
 }IF2CMSK4STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _MXtd :1;
    IO_WORD _MDir :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
  }bit;
 }IF2MSK24STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _MsgVal :1;
    IO_WORD _Xtd :1;
    IO_WORD _DIR :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
  }bit;
 }IF2ARB24STR;
typedef union{  
    IO_WORD	word;
    struct{   
    IO_WORD _NewDat :1;
    IO_WORD _MsgLst :1;
    IO_WORD _IntPnd :1;
    IO_WORD _UMask :1;
    IO_WORD _TxIE :1;
    IO_WORD _RxIE :1;
    IO_WORD _RmtEn :1;
    IO_WORD _TxRqst :1;
    IO_WORD _EoB :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD  :1;
    IO_WORD _DLC3 :1;
    IO_WORD _DLC2 :1;
    IO_WORD _DLC1 :1;
    IO_WORD _DLC0 :1;
  }bit;
  struct{
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD :1;
    IO_WORD _DLC :4;
  }bitc;
 }IF2MCTR4STR;
typedef union{   /* EDSU/MPU Registers */
    IO_LWORD	lword;
    struct{   
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD _SR :1;
    IO_LWORD _SW :1;
    IO_LWORD _SX :1;
    IO_LWORD _UR :1;
    IO_LWORD _UW :1;
    IO_LWORD _UX :1;
    IO_LWORD _FCPU :1;
    IO_LWORD _FDMA :1;
    IO_LWORD _EEMM :1;
    IO_LWORD _PFD :1;
    IO_LWORD _SINT1 :1;
    IO_LWORD _SINT0 :1;
    IO_LWORD _EINT1 :1;
    IO_LWORD _EINT0 :1;
    IO_LWORD _EINTT :1;
    IO_LWORD _EINTR :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _SINT :2;
    IO_LWORD _EINT :2;
  }bitc;
 }BCTRLSTR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD _IDX4 :1;
    IO_LWORD _IDX3 :1;
    IO_LWORD _IDX2 :1;
    IO_LWORD _IDX1 :1;
    IO_LWORD _IDX0 :1;
    IO_LWORD _CDMA :1;
    IO_LWORD _CSZ1 :1;
    IO_LWORD _CSZ0 :1;
    IO_LWORD _CRW1 :1;
    IO_LWORD _CRW0 :1;
    IO_LWORD _PV :1;
    IO_LWORD _RST :1;
    IO_LWORD _INT1 :1;
    IO_LWORD _INT0 :1;
    IO_LWORD _INTT :1;
    IO_LWORD _INTR :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _IDX :5;
    IO_LWORD :1;
    IO_LWORD _CSZ :2;
    IO_LWORD _CRW :2;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _INT :2;
  }bitc;
 }BSTATSTR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD _BD31 :1;
    IO_LWORD _BD30 :1;
    IO_LWORD _BD29 :1;
    IO_LWORD _BD28 :1;
    IO_LWORD _BD27 :1;
    IO_LWORD _BD26 :1;
    IO_LWORD _BD25 :1;
    IO_LWORD _BD24 :1;
    IO_LWORD _BD23 :1;
    IO_LWORD _BD22 :1;
    IO_LWORD _BD21 :1;
    IO_LWORD _BD20 :1;
    IO_LWORD _BD19 :1;
    IO_LWORD _BD18 :1;
    IO_LWORD _BD17 :1;
    IO_LWORD _BD16 :1;
    IO_LWORD _BD15 :1;
    IO_LWORD _BD14 :1;
    IO_LWORD _BD13 :1;
    IO_LWORD _BD12 :1;
    IO_LWORD _BD11 :1;
    IO_LWORD _BD10 :1;
    IO_LWORD _BD9 :1;
    IO_LWORD _BD8 :1;
    IO_LWORD _BD7 :1;
    IO_LWORD _BD6 :1;
    IO_LWORD _BD5 :1;
    IO_LWORD _BD4 :1;
    IO_LWORD _BD3 :1;
    IO_LWORD _BD2 :1;
    IO_LWORD _BD1 :1;
    IO_LWORD _BD0 :1;
  }bit;
 }BIRQSTR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD _SRX1 :1;
    IO_LWORD _SW1 :1;
    IO_LWORD _SRX0 :1;
    IO_LWORD _SW0 :1;
    IO_LWORD _URX1 :1;
    IO_LWORD _UW1 :1;
    IO_LWORD _URX0 :1;
    IO_LWORD _UW0 :1;
    IO_LWORD _MPE :1;
    IO_LWORD _COMB :1;
    IO_LWORD _CTC1 :1;
    IO_LWORD _CTC0 :1;
    IO_LWORD _OBS1 :1;
    IO_LWORD _OBS0 :1;
    IO_LWORD _OBT1 :1;
    IO_LWORD _OBT0 :1;
    IO_LWORD _EP3 :1;
    IO_LWORD _EP2 :1;
    IO_LWORD _EP1 :1;
    IO_LWORD _EP0 :1;
    IO_LWORD _EM1 :1;
    IO_LWORD _EM0 :1;
    IO_LWORD _ER1 :1;
    IO_LWORD _ER0 :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _CTC :2;
    IO_LWORD _OBS :2;
    IO_LWORD _OBT :2;
    IO_LWORD _EP :4;
    IO_LWORD _EM :2;
    IO_LWORD _ER :2;
  }bitc;
 }BCR0STR;
typedef union{  
    IO_LWORD	lword;
    struct{   
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD  :1;
    IO_LWORD _SRX1 :1;
    IO_LWORD _SW1 :1;
    IO_LWORD _SRX0 :1;
    IO_LWORD _SW0 :1;
    IO_LWORD _URX1 :1;
    IO_LWORD _UW1 :1;
    IO_LWORD _URX0 :1;
    IO_LWORD _UW0 :1;
    IO_LWORD _MPE :1;
    IO_LWORD _COMB :1;
    IO_LWORD _CTC1 :1;
    IO_LWORD _CTC0 :1;
    IO_LWORD _OBS1 :1;
    IO_LWORD _OBS0 :1;
    IO_LWORD _OBT1 :1;
    IO_LWORD _OBT0 :1;
    IO_LWORD _EP3 :1;
    IO_LWORD _EP2 :1;
    IO_LWORD _EP1 :1;
    IO_LWORD _EP0 :1;
    IO_LWORD _EM1 :1;
    IO_LWORD _EM0 :1;
    IO_LWORD _ER1 :1;
    IO_LWORD _ER0 :1;
  }bit;
  struct{
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD :1;
    IO_LWORD _CTC :2;
    IO_LWORD _OBS :2;
    IO_LWORD _OBT :2;
    IO_LWORD _EP :4;
    IO_LWORD _EM :2;
    IO_LWORD _ER :2;
  }bitc;
 }BCR1STR;

/* C-DECLARATIONS */

__IO_EXTERN __io PDR14STR pdr14;   /* Port Data Register */
#define PDR14 pdr14.byte
#define PDR14_D7 pdr14.bit._D7
#define PDR14_D6 pdr14.bit._D6
#define PDR14_D5 pdr14.bit._D5
#define PDR14_D4 pdr14.bit._D4
#define PDR14_D3 pdr14.bit._D3
#define PDR14_D2 pdr14.bit._D2
#define PDR14_D1 pdr14.bit._D1
#define PDR14_D0 pdr14.bit._D0
__IO_EXTERN __io PDR15STR pdr15;  
#define PDR15 pdr15.byte
#define PDR15_D7 pdr15.bit._D7
#define PDR15_D6 pdr15.bit._D6
#define PDR15_D5 pdr15.bit._D5
#define PDR15_D4 pdr15.bit._D4
#define PDR15_D3 pdr15.bit._D3
#define PDR15_D2 pdr15.bit._D2
#define PDR15_D1 pdr15.bit._D1
#define PDR15_D0 pdr15.bit._D0
__IO_EXTERN __io PDR16STR pdr16;  
#define PDR16 pdr16.byte
#define PDR16_D7 pdr16.bit._D7
#define PDR16_D6 pdr16.bit._D6
#define PDR16_D5 pdr16.bit._D5
#define PDR16_D4 pdr16.bit._D4
#define PDR16_D3 pdr16.bit._D3
#define PDR16_D2 pdr16.bit._D2
#define PDR16_D1 pdr16.bit._D1
#define PDR16_D0 pdr16.bit._D0
__IO_EXTERN __io PDR17STR pdr17;  
#define PDR17 pdr17.byte
#define PDR17_D7 pdr17.bit._D7
#define PDR17_D6 pdr17.bit._D6
#define PDR17_D5 pdr17.bit._D5
#define PDR17_D4 pdr17.bit._D4
#define PDR17_D3 pdr17.bit._D3
#define PDR17_D2 pdr17.bit._D2
#define PDR17_D1 pdr17.bit._D1
#define PDR17_D0 pdr17.bit._D0
__IO_EXTERN __io PDR18STR pdr18;  
#define PDR18 pdr18.byte
#define PDR18_D6 pdr18.bit._D6
#define PDR18_D2 pdr18.bit._D2
__IO_EXTERN __io PDR19STR pdr19;  
#define PDR19 pdr19.byte
#define PDR19_D6 pdr19.bit._D6
#define PDR19_D2 pdr19.bit._D2
#define PDR19_D1 pdr19.bit._D1
#define PDR19_D0 pdr19.bit._D0
__IO_EXTERN __io PDR20STR pdr20;  
#define PDR20 pdr20.byte
#define PDR20_D7 pdr20.bit._D7
#define PDR20_D6 pdr20.bit._D6
#define PDR20_D5 pdr20.bit._D5
#define PDR20_D4 pdr20.bit._D4
#define PDR20_D3 pdr20.bit._D3
#define PDR20_D2 pdr20.bit._D2
#define PDR20_D1 pdr20.bit._D1
#define PDR20_D0 pdr20.bit._D0
__IO_EXTERN __io PDR21STR pdr21;  
#define PDR21 pdr21.byte
#define PDR21_D7 pdr21.bit._D7
#define PDR21_D6 pdr21.bit._D6
#define PDR21_D5 pdr21.bit._D5
#define PDR21_D4 pdr21.bit._D4
#define PDR21_D3 pdr21.bit._D3
#define PDR21_D2 pdr21.bit._D2
#define PDR21_D1 pdr21.bit._D1
#define PDR21_D0 pdr21.bit._D0
__IO_EXTERN __io PDR22STR pdr22;  
#define PDR22 pdr22.byte
#define PDR22_D5 pdr22.bit._D5
#define PDR22_D4 pdr22.bit._D4
#define PDR22_D1 pdr22.bit._D1
#define PDR22_D0 pdr22.bit._D0
__IO_EXTERN __io PDR24STR pdr24;  
#define PDR24 pdr24.byte
#define PDR24_D7 pdr24.bit._D7
#define PDR24_D6 pdr24.bit._D6
#define PDR24_D5 pdr24.bit._D5
#define PDR24_D4 pdr24.bit._D4
#define PDR24_D3 pdr24.bit._D3
#define PDR24_D2 pdr24.bit._D2
#define PDR24_D1 pdr24.bit._D1
#define PDR24_D0 pdr24.bit._D0
__IO_EXTERN __io PDR26STR pdr26;  
#define PDR26 pdr26.byte
#define PDR26_D1 pdr26.bit._D1
#define PDR26_D0 pdr26.bit._D0
__IO_EXTERN __io PDR27STR pdr27;  
#define PDR27 pdr27.byte
#define PDR27_D7 pdr27.bit._D7
#define PDR27_D6 pdr27.bit._D6
#define PDR27_D5 pdr27.bit._D5
#define PDR27_D4 pdr27.bit._D4
#define PDR27_D3 pdr27.bit._D3
#define PDR27_D2 pdr27.bit._D2
#define PDR27_D1 pdr27.bit._D1
#define PDR27_D0 pdr27.bit._D0
__IO_EXTERN __io PDR28STR pdr28;  
#define PDR28 pdr28.byte
#define PDR28_D7 pdr28.bit._D7
#define PDR28_D6 pdr28.bit._D6
#define PDR28_D5 pdr28.bit._D5
#define PDR28_D4 pdr28.bit._D4
#define PDR28_D3 pdr28.bit._D3
#define PDR28_D2 pdr28.bit._D2
#define PDR28_D1 pdr28.bit._D1
#define PDR28_D0 pdr28.bit._D0
__IO_EXTERN __io PDR29STR pdr29;  
#define PDR29 pdr29.byte
#define PDR29_D7 pdr29.bit._D7
#define PDR29_D6 pdr29.bit._D6
#define PDR29_D5 pdr29.bit._D5
#define PDR29_D4 pdr29.bit._D4
#define PDR29_D3 pdr29.bit._D3
#define PDR29_D2 pdr29.bit._D2
#define PDR29_D1 pdr29.bit._D1
#define PDR29_D0 pdr29.bit._D0
__IO_EXTERN __io EIRR0STR eirr0;   /* External Interrupt 0-7 */
#define EIRR0 eirr0.byte
#define EIRR0_ER7 eirr0.bit._ER7
#define EIRR0_ER6 eirr0.bit._ER6
#define EIRR0_ER5 eirr0.bit._ER5
#define EIRR0_ER4 eirr0.bit._ER4
#define EIRR0_ER3 eirr0.bit._ER3
#define EIRR0_ER2 eirr0.bit._ER2
#define EIRR0_ER1 eirr0.bit._ER1
#define EIRR0_ER0 eirr0.bit._ER0
__IO_EXTERN __io ENIR0STR enir0;  
#define ENIR0 enir0.byte
#define ENIR0_EN7 enir0.bit._EN7
#define ENIR0_EN6 enir0.bit._EN6
#define ENIR0_EN5 enir0.bit._EN5
#define ENIR0_EN4 enir0.bit._EN4
#define ENIR0_EN3 enir0.bit._EN3
#define ENIR0_EN2 enir0.bit._EN2
#define ENIR0_EN1 enir0.bit._EN1
#define ENIR0_EN0 enir0.bit._EN0
__IO_EXTERN __io ELVR0STR elvr0;  
#define ELVR0 elvr0.word
#define ELVR0_LB7 elvr0.bit._LB7
#define ELVR0_LA7 elvr0.bit._LA7
#define ELVR0_LB6 elvr0.bit._LB6
#define ELVR0_LA6 elvr0.bit._LA6
#define ELVR0_LB5 elvr0.bit._LB5
#define ELVR0_LA5 elvr0.bit._LA5
#define ELVR0_LB4 elvr0.bit._LB4
#define ELVR0_LA4 elvr0.bit._LA4
#define ELVR0_LB3 elvr0.bit._LB3
#define ELVR0_LA3 elvr0.bit._LA3
#define ELVR0_LB2 elvr0.bit._LB2
#define ELVR0_LA2 elvr0.bit._LA2
#define ELVR0_LB1 elvr0.bit._LB1
#define ELVR0_LA1 elvr0.bit._LA1
#define ELVR0_LB0 elvr0.bit._LB0
#define ELVR0_LA0 elvr0.bit._LA0
__IO_EXTERN __io EIRR1STR eirr1;   /* External Interrupt 8-15 */
#define EIRR1 eirr1.byte
#define EIRR1_ER15 eirr1.bit._ER15
#define EIRR1_ER14 eirr1.bit._ER14
#define EIRR1_ER13 eirr1.bit._ER13
#define EIRR1_ER12 eirr1.bit._ER12
#define EIRR1_ER11 eirr1.bit._ER11
#define EIRR1_ER10 eirr1.bit._ER10
#define EIRR1_ER9 eirr1.bit._ER9
#define EIRR1_ER8 eirr1.bit._ER8
__IO_EXTERN __io ENIR1STR enir1;  
#define ENIR1 enir1.byte
#define ENIR1_EN15 enir1.bit._EN15
#define ENIR1_EN14 enir1.bit._EN14
#define ENIR1_EN13 enir1.bit._EN13
#define ENIR1_EN12 enir1.bit._EN12
#define ENIR1_EN11 enir1.bit._EN11
#define ENIR1_EN10 enir1.bit._EN10
#define ENIR1_EN9 enir1.bit._EN9
#define ENIR1_EN8 enir1.bit._EN8
__IO_EXTERN __io ELVR1STR elvr1;  
#define ELVR1 elvr1.word
#define ELVR1_LB15 elvr1.bit._LB15
#define ELVR1_LA15 elvr1.bit._LA15
#define ELVR1_LB14 elvr1.bit._LB14
#define ELVR1_LA14 elvr1.bit._LA14
#define ELVR1_LB13 elvr1.bit._LB13
#define ELVR1_LA13 elvr1.bit._LA13
#define ELVR1_LB12 elvr1.bit._LB12
#define ELVR1_LA12 elvr1.bit._LA12
#define ELVR1_LB11 elvr1.bit._LB11
#define ELVR1_LA11 elvr1.bit._LA11
#define ELVR1_LB10 elvr1.bit._LB10
#define ELVR1_LA10 elvr1.bit._LA10
#define ELVR1_LB9 elvr1.bit._LB9
#define ELVR1_LA9 elvr1.bit._LA9
#define ELVR1_LB8 elvr1.bit._LB8
#define ELVR1_LA8 elvr1.bit._LA8
__IO_EXTERN __io DICRSTR dicr;   /* DLYI/I-unit */
#define DICR dicr.byte
#define DICR_DLYI dicr.bit._DLYI
__IO_EXTERN __io HRCLSTR hrcl;  
#define HRCL hrcl.byte
#define HRCL_MHALTI hrcl.bit._MHALTI
#define HRCL_LVL4 hrcl.bit._LVL4
#define HRCL_LVL3 hrcl.bit._LVL3
#define HRCL_LVL2 hrcl.bit._LVL2
#define HRCL_LVL1 hrcl.bit._LVL1
#define HRCL_LVL0 hrcl.bit._LVL0
#define HRCL_LVL hrcl.bitc._LVL
__IO_EXTERN __io IO_WORD rbsync;   /* R-Bus Sync */
#define RBSYNC rbsync
__IO_EXTERN __io SCR00STR scr00;   /* USART (LIN) 0 */
#define SCR00 scr00.byte
#define SCR00_PEN scr00.bit._PEN
#define SCR00_P scr00.bit._P
#define SCR00_SBL scr00.bit._SBL
#define SCR00_CL scr00.bit._CL
#define SCR00_AD scr00.bit._AD
#define SCR00_CRE scr00.bit._CRE
#define SCR00_RXE scr00.bit._RXE
#define SCR00_TXE scr00.bit._TXE
__IO_EXTERN __io SMR00STR smr00;  
#define SMR00 smr00.byte
#define SMR00_MD1 smr00.bit._MD1
#define SMR00_MD0 smr00.bit._MD0
#define SMR00_OTO smr00.bit._OTO
#define SMR00_EXT smr00.bit._EXT
#define SMR00_REST smr00.bit._REST
#define SMR00_UPCL smr00.bit._UPCL
#define SMR00_SCKE smr00.bit._SCKE
#define SMR00_SOE smr00.bit._SOE
#define SMR00_MD smr00.bitc._MD
__IO_EXTERN __io SSR00STR ssr00;  
#define SSR00 ssr00.byte
#define SSR00_PE ssr00.bit._PE
#define SSR00_ORE ssr00.bit._ORE
#define SSR00_FRE ssr00.bit._FRE
#define SSR00_RDRF ssr00.bit._RDRF
#define SSR00_TDRE ssr00.bit._TDRE
#define SSR00_BDS ssr00.bit._BDS
#define SSR00_RIE ssr00.bit._RIE
#define SSR00_TIE ssr00.bit._TIE
__IO_EXTERN __io IO_BYTE rdr00;  
#define RDR00 rdr00
__IO_EXTERN __io IO_BYTE tdr00;  
#define TDR00 tdr00
__IO_EXTERN __io ESCR00STR escr00;  
#define ESCR00 escr00.byte
#define ESCR00_LBIE escr00.bit._LBIE
#define ESCR00_LBD escr00.bit._LBD
#define ESCR00_LBL1 escr00.bit._LBL1
#define ESCR00_LBL0 escr00.bit._LBL0
#define ESCR00_SOPE escr00.bit._SOPE
#define ESCR00_SIOP escr00.bit._SIOP
#define ESCR00_CCO escr00.bit._CCO
#define ESCR00_SCES escr00.bit._SCES
#define ESCR00_LBL escr00.bitc._LBL
__IO_EXTERN __io ECCR00STR eccr00;  
#define ECCR00 eccr00.byte
#define ECCR00_INV eccr00.bit._INV
#define ECCR00_LBR eccr00.bit._LBR
#define ECCR00_MS eccr00.bit._MS
#define ECCR00_SCDE eccr00.bit._SCDE
#define ECCR00_SSM eccr00.bit._SSM
#define ECCR00_BIE eccr00.bit._BIE
#define ECCR00_RBI eccr00.bit._RBI
#define ECCR00_TBI eccr00.bit._TBI
__IO_EXTERN __io SCR01STR scr01;   /* USART (LIN) 1 */
#define SCR01 scr01.byte
#define SCR01_PEN scr01.bit._PEN
#define SCR01_P scr01.bit._P
#define SCR01_SBL scr01.bit._SBL
#define SCR01_CL scr01.bit._CL
#define SCR01_AD scr01.bit._AD
#define SCR01_CRE scr01.bit._CRE
#define SCR01_RXE scr01.bit._RXE
#define SCR01_TXE scr01.bit._TXE
__IO_EXTERN __io SMR01STR smr01;  
#define SMR01 smr01.byte
#define SMR01_MD1 smr01.bit._MD1
#define SMR01_MD0 smr01.bit._MD0
#define SMR01_OTO smr01.bit._OTO
#define SMR01_EXT smr01.bit._EXT
#define SMR01_REST smr01.bit._REST
#define SMR01_UPCL smr01.bit._UPCL
#define SMR01_SCKE smr01.bit._SCKE
#define SMR01_SOE smr01.bit._SOE
#define SMR01_MD smr01.bitc._MD
__IO_EXTERN __io SSR01STR ssr01;  
#define SSR01 ssr01.byte
#define SSR01_PE ssr01.bit._PE
#define SSR01_ORE ssr01.bit._ORE
#define SSR01_FRE ssr01.bit._FRE
#define SSR01_RDRF ssr01.bit._RDRF
#define SSR01_TDRE ssr01.bit._TDRE
#define SSR01_BDS ssr01.bit._BDS
#define SSR01_RIE ssr01.bit._RIE
#define SSR01_TIE ssr01.bit._TIE
__IO_EXTERN __io IO_BYTE rdr01;  
#define RDR01 rdr01
__IO_EXTERN __io IO_BYTE tdr01;  
#define TDR01 tdr01
__IO_EXTERN __io ESCR01STR escr01;  
#define ESCR01 escr01.byte
#define ESCR01_LBIE escr01.bit._LBIE
#define ESCR01_LBD escr01.bit._LBD
#define ESCR01_LBL1 escr01.bit._LBL1
#define ESCR01_LBL0 escr01.bit._LBL0
#define ESCR01_SOPE escr01.bit._SOPE
#define ESCR01_SIOP escr01.bit._SIOP
#define ESCR01_CCO escr01.bit._CCO
#define ESCR01_SCES escr01.bit._SCES
#define ESCR01_LBL escr01.bitc._LBL
__IO_EXTERN __io ECCR01STR eccr01;  
#define ECCR01 eccr01.byte
#define ECCR01_INV eccr01.bit._INV
#define ECCR01_LBR eccr01.bit._LBR
#define ECCR01_MS eccr01.bit._MS
#define ECCR01_SCDE eccr01.bit._SCDE
#define ECCR01_SSM eccr01.bit._SSM
#define ECCR01_BIE eccr01.bit._BIE
#define ECCR01_RBI eccr01.bit._RBI
#define ECCR01_TBI eccr01.bit._TBI
__IO_EXTERN __io SCR02STR scr02;   /* USART (LIN) 2 */
#define SCR02 scr02.byte
#define SCR02_PEN scr02.bit._PEN
#define SCR02_P scr02.bit._P
#define SCR02_SBL scr02.bit._SBL
#define SCR02_CL scr02.bit._CL
#define SCR02_AD scr02.bit._AD
#define SCR02_CRE scr02.bit._CRE
#define SCR02_RXE scr02.bit._RXE
#define SCR02_TXE scr02.bit._TXE
__IO_EXTERN __io SMR02STR smr02;  
#define SMR02 smr02.byte
#define SMR02_MD1 smr02.bit._MD1
#define SMR02_MD0 smr02.bit._MD0
#define SMR02_OTO smr02.bit._OTO
#define SMR02_EXT smr02.bit._EXT
#define SMR02_REST smr02.bit._REST
#define SMR02_UPCL smr02.bit._UPCL
#define SMR02_SCKE smr02.bit._SCKE
#define SMR02_SOE smr02.bit._SOE
#define SMR02_MD smr02.bitc._MD
__IO_EXTERN __io SSR02STR ssr02;  
#define SSR02 ssr02.byte
#define SSR02_PE ssr02.bit._PE
#define SSR02_ORE ssr02.bit._ORE
#define SSR02_FRE ssr02.bit._FRE
#define SSR02_RDRF ssr02.bit._RDRF
#define SSR02_TDRE ssr02.bit._TDRE
#define SSR02_BDS ssr02.bit._BDS
#define SSR02_RIE ssr02.bit._RIE
#define SSR02_TIE ssr02.bit._TIE
__IO_EXTERN __io IO_BYTE rdr02;  
#define RDR02 rdr02
__IO_EXTERN __io IO_BYTE tdr02;  
#define TDR02 tdr02
__IO_EXTERN __io ESCR02STR escr02;  
#define ESCR02 escr02.byte
#define ESCR02_LBIE escr02.bit._LBIE
#define ESCR02_LBD escr02.bit._LBD
#define ESCR02_LBL1 escr02.bit._LBL1
#define ESCR02_LBL0 escr02.bit._LBL0
#define ESCR02_SOPE escr02.bit._SOPE
#define ESCR02_SIOP escr02.bit._SIOP
#define ESCR02_CCO escr02.bit._CCO
#define ESCR02_SCES escr02.bit._SCES
#define ESCR02_LBL escr02.bitc._LBL
__IO_EXTERN __io ECCR02STR eccr02;  
#define ECCR02 eccr02.byte
#define ECCR02_INV eccr02.bit._INV
#define ECCR02_LBR eccr02.bit._LBR
#define ECCR02_MS eccr02.bit._MS
#define ECCR02_SCDE eccr02.bit._SCDE
#define ECCR02_SSM eccr02.bit._SSM
#define ECCR02_BIE eccr02.bit._BIE
#define ECCR02_RBI eccr02.bit._RBI
#define ECCR02_TBI eccr02.bit._TBI
__IO_EXTERN __io SCR03STR scr03;   /* USART (LIN) 3 */
#define SCR03 scr03.byte
#define SCR03_PEN scr03.bit._PEN
#define SCR03_P scr03.bit._P
#define SCR03_SBL scr03.bit._SBL
#define SCR03_CL scr03.bit._CL
#define SCR03_AD scr03.bit._AD
#define SCR03_CRE scr03.bit._CRE
#define SCR03_RXE scr03.bit._RXE
#define SCR03_TXE scr03.bit._TXE
__IO_EXTERN __io SMR03STR smr03;  
#define SMR03 smr03.byte
#define SMR03_MD1 smr03.bit._MD1
#define SMR03_MD0 smr03.bit._MD0
#define SMR03_OTO smr03.bit._OTO
#define SMR03_EXT smr03.bit._EXT
#define SMR03_REST smr03.bit._REST
#define SMR03_UPCL smr03.bit._UPCL
#define SMR03_SCKE smr03.bit._SCKE
#define SMR03_SOE smr03.bit._SOE
#define SMR03_MD smr03.bitc._MD
__IO_EXTERN __io SSR03STR ssr03;  
#define SSR03 ssr03.byte
#define SSR03_PE ssr03.bit._PE
#define SSR03_ORE ssr03.bit._ORE
#define SSR03_FRE ssr03.bit._FRE
#define SSR03_RDRF ssr03.bit._RDRF
#define SSR03_TDRE ssr03.bit._TDRE
#define SSR03_BDS ssr03.bit._BDS
#define SSR03_RIE ssr03.bit._RIE
#define SSR03_TIE ssr03.bit._TIE
__IO_EXTERN __io IO_BYTE rdr03;  
#define RDR03 rdr03
__IO_EXTERN __io IO_BYTE tdr03;  
#define TDR03 tdr03
__IO_EXTERN __io ESCR03STR escr03;  
#define ESCR03 escr03.byte
#define ESCR03_LBIE escr03.bit._LBIE
#define ESCR03_LBD escr03.bit._LBD
#define ESCR03_LBL1 escr03.bit._LBL1
#define ESCR03_LBL0 escr03.bit._LBL0
#define ESCR03_SOPE escr03.bit._SOPE
#define ESCR03_SIOP escr03.bit._SIOP
#define ESCR03_CCO escr03.bit._CCO
#define ESCR03_SCES escr03.bit._SCES
#define ESCR03_LBL escr03.bitc._LBL
__IO_EXTERN __io ECCR03STR eccr03;  
#define ECCR03 eccr03.byte
#define ECCR03_INV eccr03.bit._INV
#define ECCR03_LBR eccr03.bit._LBR
#define ECCR03_MS eccr03.bit._MS
#define ECCR03_SCDE eccr03.bit._SCDE
#define ECCR03_SSM eccr03.bit._SSM
#define ECCR03_BIE eccr03.bit._BIE
#define ECCR03_RBI eccr03.bit._RBI
#define ECCR03_TBI eccr03.bit._TBI
__IO_EXTERN __io SCR04STR scr04;   /* USART (LIN) 4 with FIFO */
#define SCR04 scr04.byte
#define SCR04_PEN scr04.bit._PEN
#define SCR04_P scr04.bit._P
#define SCR04_SBL scr04.bit._SBL
#define SCR04_CL scr04.bit._CL
#define SCR04_AD scr04.bit._AD
#define SCR04_CRE scr04.bit._CRE
#define SCR04_RXE scr04.bit._RXE
#define SCR04_TXE scr04.bit._TXE
__IO_EXTERN __io SMR04STR smr04;  
#define SMR04 smr04.byte
#define SMR04_MD1 smr04.bit._MD1
#define SMR04_MD0 smr04.bit._MD0
#define SMR04_OTO smr04.bit._OTO
#define SMR04_EXT smr04.bit._EXT
#define SMR04_REST smr04.bit._REST
#define SMR04_UPCL smr04.bit._UPCL
#define SMR04_SCKE smr04.bit._SCKE
#define SMR04_SOE smr04.bit._SOE
#define SMR04_MD smr04.bitc._MD
__IO_EXTERN __io SSR04STR ssr04;  
#define SSR04 ssr04.byte
#define SSR04_PE ssr04.bit._PE
#define SSR04_ORE ssr04.bit._ORE
#define SSR04_FRE ssr04.bit._FRE
#define SSR04_RDRF ssr04.bit._RDRF
#define SSR04_TDRE ssr04.bit._TDRE
#define SSR04_BDS ssr04.bit._BDS
#define SSR04_RIE ssr04.bit._RIE
#define SSR04_TIE ssr04.bit._TIE
__IO_EXTERN __io IO_BYTE rdr04;  
#define RDR04 rdr04
__IO_EXTERN __io IO_BYTE tdr04;  
#define TDR04 tdr04
__IO_EXTERN __io ESCR04STR escr04;  
#define ESCR04 escr04.byte
#define ESCR04_LBIE escr04.bit._LBIE
#define ESCR04_LBD escr04.bit._LBD
#define ESCR04_LBL1 escr04.bit._LBL1
#define ESCR04_LBL0 escr04.bit._LBL0
#define ESCR04_SOPE escr04.bit._SOPE
#define ESCR04_SIOP escr04.bit._SIOP
#define ESCR04_CCO escr04.bit._CCO
#define ESCR04_SCES escr04.bit._SCES
#define ESCR04_LBL escr04.bitc._LBL
__IO_EXTERN __io ECCR04STR eccr04;  
#define ECCR04 eccr04.byte
#define ECCR04_INV eccr04.bit._INV
#define ECCR04_LBR eccr04.bit._LBR
#define ECCR04_MS eccr04.bit._MS
#define ECCR04_SCDE eccr04.bit._SCDE
#define ECCR04_SSM eccr04.bit._SSM
#define ECCR04_BIE eccr04.bit._BIE
#define ECCR04_RBI eccr04.bit._RBI
#define ECCR04_TBI eccr04.bit._TBI
__IO_EXTERN __io IO_BYTE fsr04;  
#define FSR04 fsr04
__IO_EXTERN __io FCR04STR fcr04;  
#define FCR04 fcr04.byte
#define FCR04_RXL3 fcr04.bit._RXL3
#define FCR04_RXL2 fcr04.bit._RXL2
#define FCR04_RXL1 fcr04.bit._RXL1
#define FCR04_RXL0 fcr04.bit._RXL0
#define FCR04_ERX fcr04.bit._ERX
#define FCR04_ETX fcr04.bit._ETX
#define FCR04_SVD fcr04.bit._SVD
#define FCR04_RXL fcr04.bitc._RXL
__IO_EXTERN __io IO_WORD bgr00;   /* Bauderate Generator USART (LIN) 0-7 */
#define BGR00 bgr00
__IO_EXTERN __io IO_BYTE bgr100;  
#define BGR100 bgr100
__IO_EXTERN __io IO_BYTE bgr000;  
#define BGR000 bgr000
__IO_EXTERN __io IO_WORD bgr01;  
#define BGR01 bgr01
__IO_EXTERN __io IO_BYTE bgr101;  
#define BGR101 bgr101
__IO_EXTERN __io IO_BYTE bgr001;  
#define BGR001 bgr001
__IO_EXTERN __io IO_WORD bgr02;  
#define BGR02 bgr02
__IO_EXTERN __io IO_BYTE bgr102;  
#define BGR102 bgr102
__IO_EXTERN __io IO_BYTE bgr002;  
#define BGR002 bgr002
__IO_EXTERN __io IO_WORD bgr03;  
#define BGR03 bgr03
__IO_EXTERN __io IO_BYTE bgr103;  
#define BGR103 bgr103
__IO_EXTERN __io IO_BYTE bgr003;  
#define BGR003 bgr003
__IO_EXTERN __io IO_WORD bgr04;  
#define BGR04 bgr04
__IO_EXTERN __io IO_BYTE bgr104;  
#define BGR104 bgr104
__IO_EXTERN __io IO_BYTE bgr004;  
#define BGR004 bgr004
__IO_EXTERN __io IBCR0STR ibcr0;   /* I2C 0 */
#define IBCR0 ibcr0.byte
#define IBCR0_BER ibcr0.bit._BER
#define IBCR0_BEIE ibcr0.bit._BEIE
#define IBCR0_SCC ibcr0.bit._SCC
#define IBCR0_MSS ibcr0.bit._MSS
#define IBCR0_ACK ibcr0.bit._ACK
#define IBCR0_GCAA ibcr0.bit._GCAA
#define IBCR0_INTE ibcr0.bit._INTE
#define IBCR0_INT ibcr0.bit._INT
__IO_EXTERN __io IBSR0STR ibsr0;  
#define IBSR0 ibsr0.byte
#define IBSR0_BB ibsr0.bit._BB
#define IBSR0_RSC ibsr0.bit._RSC
#define IBSR0_AL ibsr0.bit._AL
#define IBSR0_LRB ibsr0.bit._LRB
#define IBSR0_TRX ibsr0.bit._TRX
#define IBSR0_AAS ibsr0.bit._AAS
#define IBSR0_GCA ibsr0.bit._GCA
#define IBSR0_ADT ibsr0.bit._ADT
__IO_EXTERN __io ITBA0STR itba0;  
#define ITBA0 itba0.word
#define ITBA0_TA9 itba0.bit._TA9
#define ITBA0_TA8 itba0.bit._TA8
#define ITBA0_TA7 itba0.bit._TA7
#define ITBA0_TA6 itba0.bit._TA6
#define ITBA0_TA5 itba0.bit._TA5
#define ITBA0_TA4 itba0.bit._TA4
#define ITBA0_TA3 itba0.bit._TA3
#define ITBA0_TA2 itba0.bit._TA2
#define ITBA0_TA1 itba0.bit._TA1
#define ITBA0_TA0 itba0.bit._TA0
__IO_EXTERN __io ITBAH0STR itbah0;  
#define ITBAH0 itbah0.byte
#define ITBAH0_TA9 itbah0.bit._TA9
#define ITBAH0_TA8 itbah0.bit._TA8
__IO_EXTERN __io ITBAL0STR itbal0;  
#define ITBAL0 itbal0.byte
#define ITBAL0_TA7 itbal0.bit._TA7
#define ITBAL0_TA6 itbal0.bit._TA6
#define ITBAL0_TA5 itbal0.bit._TA5
#define ITBAL0_TA4 itbal0.bit._TA4
#define ITBAL0_TA3 itbal0.bit._TA3
#define ITBAL0_TA2 itbal0.bit._TA2
#define ITBAL0_TA1 itbal0.bit._TA1
#define ITBAL0_TA0 itbal0.bit._TA0
__IO_EXTERN __io ITMK0STR itmk0;  
#define ITMK0 itmk0.word
#define ITMK0_ENTB itmk0.bit._ENTB
#define ITMK0_RAL itmk0.bit._RAL
#define ITMK0_TM9 itmk0.bit._TM9
#define ITMK0_TM8 itmk0.bit._TM8
#define ITMK0_TM7 itmk0.bit._TM7
#define ITMK0_TM6 itmk0.bit._TM6
#define ITMK0_TM5 itmk0.bit._TM5
#define ITMK0_TM4 itmk0.bit._TM4
#define ITMK0_TM3 itmk0.bit._TM3
#define ITMK0_TM2 itmk0.bit._TM2
#define ITMK0_TM1 itmk0.bit._TM1
#define ITMK0_TM0 itmk0.bit._TM0
__IO_EXTERN __io ITMKH0STR itmkh0;  
#define ITMKH0 itmkh0.byte
#define ITMKH0_ENTB itmkh0.bit._ENTB
#define ITMKH0_RAL itmkh0.bit._RAL
#define ITMKH0_TM9 itmkh0.bit._TM9
#define ITMKH0_TM8 itmkh0.bit._TM8
__IO_EXTERN __io ITMKL0STR itmkl0;  
#define ITMKL0 itmkl0.byte
#define ITMKL0_TM7 itmkl0.bit._TM7
#define ITMKL0_TM6 itmkl0.bit._TM6
#define ITMKL0_TM5 itmkl0.bit._TM5
#define ITMKL0_TM4 itmkl0.bit._TM4
#define ITMKL0_TM3 itmkl0.bit._TM3
#define ITMKL0_TM2 itmkl0.bit._TM2
#define ITMKL0_TM1 itmkl0.bit._TM1
#define ITMKL0_TM0 itmkl0.bit._TM0
__IO_EXTERN __io ISMK0STR ismk0;  
#define ISMK0 ismk0.byte
#define ISMK0_ENSB ismk0.bit._ENSB
#define ISMK0_SM6 ismk0.bit._SM6
#define ISMK0_SM5 ismk0.bit._SM5
#define ISMK0_SM4 ismk0.bit._SM4
#define ISMK0_SM3 ismk0.bit._SM3
#define ISMK0_SM2 ismk0.bit._SM2
#define ISMK0_SM1 ismk0.bit._SM1
#define ISMK0_SM0 ismk0.bit._SM0
__IO_EXTERN __io ISBA0STR isba0;  
#define ISBA0 isba0.byte
#define ISBA0_SA6 isba0.bit._SA6
#define ISBA0_SA5 isba0.bit._SA5
#define ISBA0_SA4 isba0.bit._SA4
#define ISBA0_SA3 isba0.bit._SA3
#define ISBA0_SA2 isba0.bit._SA2
#define ISBA0_SA1 isba0.bit._SA1
#define ISBA0_SA0 isba0.bit._SA0
__IO_EXTERN __io IDAR0STR idar0;  
#define IDAR0 idar0.byte
#define IDAR0_D7 idar0.bit._D7
#define IDAR0_D6 idar0.bit._D6
#define IDAR0_D5 idar0.bit._D5
#define IDAR0_D4 idar0.bit._D4
#define IDAR0_D3 idar0.bit._D3
#define IDAR0_D2 idar0.bit._D2
#define IDAR0_D1 idar0.bit._D1
#define IDAR0_D0 idar0.bit._D0
__IO_EXTERN __io ICCR0STR iccr0;  
#define ICCR0 iccr0.byte
#define ICCR0_NSF iccr0.bit._NSF
#define ICCR0_EN iccr0.bit._EN
#define ICCR0_CS4 iccr0.bit._CS4
#define ICCR0_CS3 iccr0.bit._CS3
#define ICCR0_CS2 iccr0.bit._CS2
#define ICCR0_CS1 iccr0.bit._CS1
#define ICCR0_CS0 iccr0.bit._CS0
#define ICCR0_CS iccr0.bitc._CS
__IO_EXTERN GCN10STR gcn10;   /* PPG Control 0-3 */
#define GCN10 gcn10.word
#define GCN10_TSEL33 gcn10.bit._TSEL33
#define GCN10_TSEL32 gcn10.bit._TSEL32
#define GCN10_TSEL31 gcn10.bit._TSEL31
#define GCN10_TSEL30 gcn10.bit._TSEL30
#define GCN10_TSEL23 gcn10.bit._TSEL23
#define GCN10_TSEL22 gcn10.bit._TSEL22
#define GCN10_TSEL21 gcn10.bit._TSEL21
#define GCN10_TSEL20 gcn10.bit._TSEL20
#define GCN10_TSEL13 gcn10.bit._TSEL13
#define GCN10_TSEL12 gcn10.bit._TSEL12
#define GCN10_TSEL11 gcn10.bit._TSEL11
#define GCN10_TSEL10 gcn10.bit._TSEL10
#define GCN10_TSEL03 gcn10.bit._TSEL03
#define GCN10_TSEL02 gcn10.bit._TSEL02
#define GCN10_TSEL01 gcn10.bit._TSEL01
#define GCN10_TSEL00 gcn10.bit._TSEL00
__IO_EXTERN GCN20STR gcn20;  
#define GCN20 gcn20.byte
#define GCN20_EN3 gcn20.bit._EN3
#define GCN20_EN2 gcn20.bit._EN2
#define GCN20_EN1 gcn20.bit._EN1
#define GCN20_EN0 gcn20.bit._EN0
__IO_EXTERN GCN11STR gcn11;   /* PPG Control 4-7 */
#define GCN11 gcn11.word
#define GCN11_TSEL33 gcn11.bit._TSEL33
#define GCN11_TSEL32 gcn11.bit._TSEL32
#define GCN11_TSEL31 gcn11.bit._TSEL31
#define GCN11_TSEL30 gcn11.bit._TSEL30
#define GCN11_TSEL23 gcn11.bit._TSEL23
#define GCN11_TSEL22 gcn11.bit._TSEL22
#define GCN11_TSEL21 gcn11.bit._TSEL21
#define GCN11_TSEL20 gcn11.bit._TSEL20
#define GCN11_TSEL13 gcn11.bit._TSEL13
#define GCN11_TSEL12 gcn11.bit._TSEL12
#define GCN11_TSEL11 gcn11.bit._TSEL11
#define GCN11_TSEL10 gcn11.bit._TSEL10
#define GCN11_TSEL03 gcn11.bit._TSEL03
#define GCN11_TSEL02 gcn11.bit._TSEL02
#define GCN11_TSEL01 gcn11.bit._TSEL01
#define GCN11_TSEL00 gcn11.bit._TSEL00
__IO_EXTERN GCN21STR gcn21;  
#define GCN21 gcn21.byte
#define GCN21_EN3 gcn21.bit._EN3
#define GCN21_EN2 gcn21.bit._EN2
#define GCN21_EN1 gcn21.bit._EN1
#define GCN21_EN0 gcn21.bit._EN0
__IO_EXTERN GCN12STR gcn12;   /* PPG Control 8-11 */
#define GCN12 gcn12.word
#define GCN12_TSEL33 gcn12.bit._TSEL33
#define GCN12_TSEL32 gcn12.bit._TSEL32
#define GCN12_TSEL31 gcn12.bit._TSEL31
#define GCN12_TSEL30 gcn12.bit._TSEL30
#define GCN12_TSEL23 gcn12.bit._TSEL23
#define GCN12_TSEL22 gcn12.bit._TSEL22
#define GCN12_TSEL21 gcn12.bit._TSEL21
#define GCN12_TSEL20 gcn12.bit._TSEL20
#define GCN12_TSEL13 gcn12.bit._TSEL13
#define GCN12_TSEL12 gcn12.bit._TSEL12
#define GCN12_TSEL11 gcn12.bit._TSEL11
#define GCN12_TSEL10 gcn12.bit._TSEL10
#define GCN12_TSEL03 gcn12.bit._TSEL03
#define GCN12_TSEL02 gcn12.bit._TSEL02
#define GCN12_TSEL01 gcn12.bit._TSEL01
#define GCN12_TSEL00 gcn12.bit._TSEL00
__IO_EXTERN GCN22STR gcn22;  
#define GCN22 gcn22.byte
#define GCN22_EN3 gcn22.bit._EN3
#define GCN22_EN2 gcn22.bit._EN2
#define GCN22_EN1 gcn22.bit._EN1
#define GCN22_EN0 gcn22.bit._EN0
__IO_EXTERN IO_WORD ptmr00;   /* PPG 0 */
#define PTMR00 ptmr00
__IO_EXTERN IO_WORD pcsr00;  
#define PCSR00 pcsr00
__IO_EXTERN IO_WORD pdut00;  
#define PDUT00 pdut00
__IO_EXTERN PCN00STR pcn00;  
#define PCN00 pcn00.word
#define PCN00_CNTE pcn00.bit._CNTE
#define PCN00_STGR pcn00.bit._STGR
#define PCN00_MDSE pcn00.bit._MDSE
#define PCN00_RTRG pcn00.bit._RTRG
#define PCN00_CKS1 pcn00.bit._CKS1
#define PCN00_CKS0 pcn00.bit._CKS0
#define PCN00_PGMS pcn00.bit._PGMS
#define PCN00_EGS1 pcn00.bit._EGS1
#define PCN00_EGS0 pcn00.bit._EGS0
#define PCN00_IREN pcn00.bit._IREN
#define PCN00_IRQF pcn00.bit._IRQF
#define PCN00_IRS1 pcn00.bit._IRS1
#define PCN00_IRS0 pcn00.bit._IRS0
#define PCN00_OSEL pcn00.bit._OSEL
#define PCN00_CKS pcn00.bitc._CKS
#define PCN00_EGS pcn00.bitc._EGS
#define PCN00_IRS pcn00.bitc._IRS
__IO_EXTERN PCNH00STR pcnh00;  
#define PCNH00 pcnh00.byte
#define PCNH00_CNTE pcnh00.bit._CNTE
#define PCNH00_STGR pcnh00.bit._STGR
#define PCNH00_MDSE pcnh00.bit._MDSE
#define PCNH00_RTRG pcnh00.bit._RTRG
#define PCNH00_CKS1 pcnh00.bit._CKS1
#define PCNH00_CKS0 pcnh00.bit._CKS0
#define PCNH00_PGMS pcnh00.bit._PGMS
#define PCNH00_CKS pcnh00.bitc._CKS
__IO_EXTERN PCNL00STR pcnl00;  
#define PCNL00 pcnl00.byte
#define PCNL00_EGS1 pcnl00.bit._EGS1
#define PCNL00_EGS0 pcnl00.bit._EGS0
#define PCNL00_IREN pcnl00.bit._IREN
#define PCNL00_IRQF pcnl00.bit._IRQF
#define PCNL00_IRS1 pcnl00.bit._IRS1
#define PCNL00_IRS0 pcnl00.bit._IRS0
#define PCNL00_OSEL pcnl00.bit._OSEL
#define PCNL00_EGS pcnl00.bitc._EGS
#define PCNL00_IRS pcnl00.bitc._IRS
__IO_EXTERN IO_WORD ptmr01;   /* PPG 1 */
#define PTMR01 ptmr01
__IO_EXTERN IO_WORD pcsr01;  
#define PCSR01 pcsr01
__IO_EXTERN IO_WORD pdut01;  
#define PDUT01 pdut01
__IO_EXTERN PCN01STR pcn01;  
#define PCN01 pcn01.word
#define PCN01_CNTE pcn01.bit._CNTE
#define PCN01_STGR pcn01.bit._STGR
#define PCN01_MDSE pcn01.bit._MDSE
#define PCN01_RTRG pcn01.bit._RTRG
#define PCN01_CKS1 pcn01.bit._CKS1
#define PCN01_CKS0 pcn01.bit._CKS0
#define PCN01_PGMS pcn01.bit._PGMS
#define PCN01_EGS1 pcn01.bit._EGS1
#define PCN01_EGS0 pcn01.bit._EGS0
#define PCN01_IREN pcn01.bit._IREN
#define PCN01_IRQF pcn01.bit._IRQF
#define PCN01_IRS1 pcn01.bit._IRS1
#define PCN01_IRS0 pcn01.bit._IRS0
#define PCN01_OSEL pcn01.bit._OSEL
#define PCN01_CKS pcn01.bitc._CKS
#define PCN01_EGS pcn01.bitc._EGS
#define PCN01_IRS pcn01.bitc._IRS
__IO_EXTERN PCNH01STR pcnh01;  
#define PCNH01 pcnh01.byte
#define PCNH01_CNTE pcnh01.bit._CNTE
#define PCNH01_STGR pcnh01.bit._STGR
#define PCNH01_MDSE pcnh01.bit._MDSE
#define PCNH01_RTRG pcnh01.bit._RTRG
#define PCNH01_CKS1 pcnh01.bit._CKS1
#define PCNH01_CKS0 pcnh01.bit._CKS0
#define PCNH01_PGMS pcnh01.bit._PGMS
#define PCNH01_CKS pcnh01.bitc._CKS
__IO_EXTERN PCNL01STR pcnl01;  
#define PCNL01 pcnl01.byte
#define PCNL01_EGS1 pcnl01.bit._EGS1
#define PCNL01_EGS0 pcnl01.bit._EGS0
#define PCNL01_IREN pcnl01.bit._IREN
#define PCNL01_IRQF pcnl01.bit._IRQF
#define PCNL01_IRS1 pcnl01.bit._IRS1
#define PCNL01_IRS0 pcnl01.bit._IRS0
#define PCNL01_OSEL pcnl01.bit._OSEL
#define PCNL01_EGS pcnl01.bitc._EGS
#define PCNL01_IRS pcnl01.bitc._IRS
__IO_EXTERN IO_WORD ptmr02;   /* PPG 2 */
#define PTMR02 ptmr02
__IO_EXTERN IO_WORD pcsr02;  
#define PCSR02 pcsr02
__IO_EXTERN IO_WORD pdut02;  
#define PDUT02 pdut02
__IO_EXTERN PCN02STR pcn02;  
#define PCN02 pcn02.word
#define PCN02_CNTE pcn02.bit._CNTE
#define PCN02_STGR pcn02.bit._STGR
#define PCN02_MDSE pcn02.bit._MDSE
#define PCN02_RTRG pcn02.bit._RTRG
#define PCN02_CKS1 pcn02.bit._CKS1
#define PCN02_CKS0 pcn02.bit._CKS0
#define PCN02_PGMS pcn02.bit._PGMS
#define PCN02_EGS1 pcn02.bit._EGS1
#define PCN02_EGS0 pcn02.bit._EGS0
#define PCN02_IREN pcn02.bit._IREN
#define PCN02_IRQF pcn02.bit._IRQF
#define PCN02_IRS1 pcn02.bit._IRS1
#define PCN02_IRS0 pcn02.bit._IRS0
#define PCN02_OSEL pcn02.bit._OSEL
#define PCN02_CKS pcn02.bitc._CKS
#define PCN02_EGS pcn02.bitc._EGS
#define PCN02_IRS pcn02.bitc._IRS
__IO_EXTERN PCNH02STR pcnh02;  
#define PCNH02 pcnh02.byte
#define PCNH02_CNTE pcnh02.bit._CNTE
#define PCNH02_STGR pcnh02.bit._STGR
#define PCNH02_MDSE pcnh02.bit._MDSE
#define PCNH02_RTRG pcnh02.bit._RTRG
#define PCNH02_CKS1 pcnh02.bit._CKS1
#define PCNH02_CKS0 pcnh02.bit._CKS0
#define PCNH02_PGMS pcnh02.bit._PGMS
#define PCNH02_CKS pcnh02.bitc._CKS
__IO_EXTERN PCNL02STR pcnl02;  
#define PCNL02 pcnl02.byte
#define PCNL02_EGS1 pcnl02.bit._EGS1
#define PCNL02_EGS0 pcnl02.bit._EGS0
#define PCNL02_IREN pcnl02.bit._IREN
#define PCNL02_IRQF pcnl02.bit._IRQF
#define PCNL02_IRS1 pcnl02.bit._IRS1
#define PCNL02_IRS0 pcnl02.bit._IRS0
#define PCNL02_OSEL pcnl02.bit._OSEL
#define PCNL02_EGS pcnl02.bitc._EGS
#define PCNL02_IRS pcnl02.bitc._IRS
__IO_EXTERN IO_WORD ptmr03;   /* PPG 3 */
#define PTMR03 ptmr03
__IO_EXTERN IO_WORD pcsr03;  
#define PCSR03 pcsr03
__IO_EXTERN IO_WORD pdut03;  
#define PDUT03 pdut03
__IO_EXTERN PCN03STR pcn03;  
#define PCN03 pcn03.word
#define PCN03_CNTE pcn03.bit._CNTE
#define PCN03_STGR pcn03.bit._STGR
#define PCN03_MDSE pcn03.bit._MDSE
#define PCN03_RTRG pcn03.bit._RTRG
#define PCN03_CKS1 pcn03.bit._CKS1
#define PCN03_CKS0 pcn03.bit._CKS0
#define PCN03_PGMS pcn03.bit._PGMS
#define PCN03_EGS1 pcn03.bit._EGS1
#define PCN03_EGS0 pcn03.bit._EGS0
#define PCN03_IREN pcn03.bit._IREN
#define PCN03_IRQF pcn03.bit._IRQF
#define PCN03_IRS1 pcn03.bit._IRS1
#define PCN03_IRS0 pcn03.bit._IRS0
#define PCN03_OSEL pcn03.bit._OSEL
#define PCN03_CKS pcn03.bitc._CKS
#define PCN03_EGS pcn03.bitc._EGS
#define PCN03_IRS pcn03.bitc._IRS
__IO_EXTERN PCNH03STR pcnh03;  
#define PCNH03 pcnh03.byte
#define PCNH03_CNTE pcnh03.bit._CNTE
#define PCNH03_STGR pcnh03.bit._STGR
#define PCNH03_MDSE pcnh03.bit._MDSE
#define PCNH03_RTRG pcnh03.bit._RTRG
#define PCNH03_CKS1 pcnh03.bit._CKS1
#define PCNH03_CKS0 pcnh03.bit._CKS0
#define PCNH03_PGMS pcnh03.bit._PGMS
#define PCNH03_CKS pcnh03.bitc._CKS
__IO_EXTERN PCNL03STR pcnl03;  
#define PCNL03 pcnl03.byte
#define PCNL03_EGS1 pcnl03.bit._EGS1
#define PCNL03_EGS0 pcnl03.bit._EGS0
#define PCNL03_IREN pcnl03.bit._IREN
#define PCNL03_IRQF pcnl03.bit._IRQF
#define PCNL03_IRS1 pcnl03.bit._IRS1
#define PCNL03_IRS0 pcnl03.bit._IRS0
#define PCNL03_OSEL pcnl03.bit._OSEL
#define PCNL03_EGS pcnl03.bitc._EGS
#define PCNL03_IRS pcnl03.bitc._IRS
__IO_EXTERN IO_WORD ptmr04;   /* PPG 4 */
#define PTMR04 ptmr04
__IO_EXTERN IO_WORD pcsr04;  
#define PCSR04 pcsr04
__IO_EXTERN IO_WORD pdut04;  
#define PDUT04 pdut04
__IO_EXTERN PCN04STR pcn04;  
#define PCN04 pcn04.word
#define PCN04_CNTE pcn04.bit._CNTE
#define PCN04_STGR pcn04.bit._STGR
#define PCN04_MDSE pcn04.bit._MDSE
#define PCN04_RTRG pcn04.bit._RTRG
#define PCN04_CKS1 pcn04.bit._CKS1
#define PCN04_CKS0 pcn04.bit._CKS0
#define PCN04_PGMS pcn04.bit._PGMS
#define PCN04_EGS1 pcn04.bit._EGS1
#define PCN04_EGS0 pcn04.bit._EGS0
#define PCN04_IREN pcn04.bit._IREN
#define PCN04_IRQF pcn04.bit._IRQF
#define PCN04_IRS1 pcn04.bit._IRS1
#define PCN04_IRS0 pcn04.bit._IRS0
#define PCN04_OSEL pcn04.bit._OSEL
#define PCN04_CKS pcn04.bitc._CKS
#define PCN04_EGS pcn04.bitc._EGS
#define PCN04_IRS pcn04.bitc._IRS
__IO_EXTERN PCNH04STR pcnh04;  
#define PCNH04 pcnh04.byte
#define PCNH04_CNTE pcnh04.bit._CNTE
#define PCNH04_STGR pcnh04.bit._STGR
#define PCNH04_MDSE pcnh04.bit._MDSE
#define PCNH04_RTRG pcnh04.bit._RTRG
#define PCNH04_CKS1 pcnh04.bit._CKS1
#define PCNH04_CKS0 pcnh04.bit._CKS0
#define PCNH04_PGMS pcnh04.bit._PGMS
#define PCNH04_CKS pcnh04.bitc._CKS
__IO_EXTERN PCNL04STR pcnl04;  
#define PCNL04 pcnl04.byte
#define PCNL04_EGS1 pcnl04.bit._EGS1
#define PCNL04_EGS0 pcnl04.bit._EGS0
#define PCNL04_IREN pcnl04.bit._IREN
#define PCNL04_IRQF pcnl04.bit._IRQF
#define PCNL04_IRS1 pcnl04.bit._IRS1
#define PCNL04_IRS0 pcnl04.bit._IRS0
#define PCNL04_OSEL pcnl04.bit._OSEL
#define PCNL04_EGS pcnl04.bitc._EGS
#define PCNL04_IRS pcnl04.bitc._IRS
__IO_EXTERN IO_WORD ptmr05;   /* PPG 5 */
#define PTMR05 ptmr05
__IO_EXTERN IO_WORD pcsr05;  
#define PCSR05 pcsr05
__IO_EXTERN IO_WORD pdut05;  
#define PDUT05 pdut05
__IO_EXTERN PCN05STR pcn05;  
#define PCN05 pcn05.word
#define PCN05_CNTE pcn05.bit._CNTE
#define PCN05_STGR pcn05.bit._STGR
#define PCN05_MDSE pcn05.bit._MDSE
#define PCN05_RTRG pcn05.bit._RTRG
#define PCN05_CKS1 pcn05.bit._CKS1
#define PCN05_CKS0 pcn05.bit._CKS0
#define PCN05_PGMS pcn05.bit._PGMS
#define PCN05_EGS1 pcn05.bit._EGS1
#define PCN05_EGS0 pcn05.bit._EGS0
#define PCN05_IREN pcn05.bit._IREN
#define PCN05_IRQF pcn05.bit._IRQF
#define PCN05_IRS1 pcn05.bit._IRS1
#define PCN05_IRS0 pcn05.bit._IRS0
#define PCN05_OSEL pcn05.bit._OSEL
#define PCN05_CKS pcn05.bitc._CKS
#define PCN05_EGS pcn05.bitc._EGS
#define PCN05_IRS pcn05.bitc._IRS
__IO_EXTERN PCNH05STR pcnh05;  
#define PCNH05 pcnh05.byte
#define PCNH05_CNTE pcnh05.bit._CNTE
#define PCNH05_STGR pcnh05.bit._STGR
#define PCNH05_MDSE pcnh05.bit._MDSE
#define PCNH05_RTRG pcnh05.bit._RTRG
#define PCNH05_CKS1 pcnh05.bit._CKS1
#define PCNH05_CKS0 pcnh05.bit._CKS0
#define PCNH05_PGMS pcnh05.bit._PGMS
#define PCNH05_CKS pcnh05.bitc._CKS
__IO_EXTERN PCNL05STR pcnl05;  
#define PCNL05 pcnl05.byte
#define PCNL05_EGS1 pcnl05.bit._EGS1
#define PCNL05_EGS0 pcnl05.bit._EGS0
#define PCNL05_IREN pcnl05.bit._IREN
#define PCNL05_IRQF pcnl05.bit._IRQF
#define PCNL05_IRS1 pcnl05.bit._IRS1
#define PCNL05_IRS0 pcnl05.bit._IRS0
#define PCNL05_OSEL pcnl05.bit._OSEL
#define PCNL05_EGS pcnl05.bitc._EGS
#define PCNL05_IRS pcnl05.bitc._IRS
__IO_EXTERN IO_WORD ptmr06;   /* PPG 6 */
#define PTMR06 ptmr06
__IO_EXTERN IO_WORD pcsr06;  
#define PCSR06 pcsr06
__IO_EXTERN IO_WORD pdut06;  
#define PDUT06 pdut06
__IO_EXTERN PCN06STR pcn06;  
#define PCN06 pcn06.word
#define PCN06_CNTE pcn06.bit._CNTE
#define PCN06_STGR pcn06.bit._STGR
#define PCN06_MDSE pcn06.bit._MDSE
#define PCN06_RTRG pcn06.bit._RTRG
#define PCN06_CKS1 pcn06.bit._CKS1
#define PCN06_CKS0 pcn06.bit._CKS0
#define PCN06_PGMS pcn06.bit._PGMS
#define PCN06_EGS1 pcn06.bit._EGS1
#define PCN06_EGS0 pcn06.bit._EGS0
#define PCN06_IREN pcn06.bit._IREN
#define PCN06_IRQF pcn06.bit._IRQF
#define PCN06_IRS1 pcn06.bit._IRS1
#define PCN06_IRS0 pcn06.bit._IRS0
#define PCN06_OSEL pcn06.bit._OSEL
#define PCN06_CKS pcn06.bitc._CKS
#define PCN06_EGS pcn06.bitc._EGS
#define PCN06_IRS pcn06.bitc._IRS
__IO_EXTERN PCNH06STR pcnh06;  
#define PCNH06 pcnh06.byte
#define PCNH06_CNTE pcnh06.bit._CNTE
#define PCNH06_STGR pcnh06.bit._STGR
#define PCNH06_MDSE pcnh06.bit._MDSE
#define PCNH06_RTRG pcnh06.bit._RTRG
#define PCNH06_CKS1 pcnh06.bit._CKS1
#define PCNH06_CKS0 pcnh06.bit._CKS0
#define PCNH06_PGMS pcnh06.bit._PGMS
#define PCNH06_CKS pcnh06.bitc._CKS
__IO_EXTERN PCNL06STR pcnl06;  
#define PCNL06 pcnl06.byte
#define PCNL06_EGS1 pcnl06.bit._EGS1
#define PCNL06_EGS0 pcnl06.bit._EGS0
#define PCNL06_IREN pcnl06.bit._IREN
#define PCNL06_IRQF pcnl06.bit._IRQF
#define PCNL06_IRS1 pcnl06.bit._IRS1
#define PCNL06_IRS0 pcnl06.bit._IRS0
#define PCNL06_OSEL pcnl06.bit._OSEL
#define PCNL06_EGS pcnl06.bitc._EGS
#define PCNL06_IRS pcnl06.bitc._IRS
__IO_EXTERN IO_WORD ptmr07;   /* PPG 7 */
#define PTMR07 ptmr07
__IO_EXTERN IO_WORD pcsr07;  
#define PCSR07 pcsr07
__IO_EXTERN IO_WORD pdut07;  
#define PDUT07 pdut07
__IO_EXTERN PCN07STR pcn07;  
#define PCN07 pcn07.word
#define PCN07_CNTE pcn07.bit._CNTE
#define PCN07_STGR pcn07.bit._STGR
#define PCN07_MDSE pcn07.bit._MDSE
#define PCN07_RTRG pcn07.bit._RTRG
#define PCN07_CKS1 pcn07.bit._CKS1
#define PCN07_CKS0 pcn07.bit._CKS0
#define PCN07_PGMS pcn07.bit._PGMS
#define PCN07_EGS1 pcn07.bit._EGS1
#define PCN07_EGS0 pcn07.bit._EGS0
#define PCN07_IREN pcn07.bit._IREN
#define PCN07_IRQF pcn07.bit._IRQF
#define PCN07_IRS1 pcn07.bit._IRS1
#define PCN07_IRS0 pcn07.bit._IRS0
#define PCN07_OSEL pcn07.bit._OSEL
#define PCN07_CKS pcn07.bitc._CKS
#define PCN07_EGS pcn07.bitc._EGS
#define PCN07_IRS pcn07.bitc._IRS
__IO_EXTERN PCNH07STR pcnh07;  
#define PCNH07 pcnh07.byte
#define PCNH07_CNTE pcnh07.bit._CNTE
#define PCNH07_STGR pcnh07.bit._STGR
#define PCNH07_MDSE pcnh07.bit._MDSE
#define PCNH07_RTRG pcnh07.bit._RTRG
#define PCNH07_CKS1 pcnh07.bit._CKS1
#define PCNH07_CKS0 pcnh07.bit._CKS0
#define PCNH07_PGMS pcnh07.bit._PGMS
#define PCNH07_CKS pcnh07.bitc._CKS
__IO_EXTERN PCNL07STR pcnl07;  
#define PCNL07 pcnl07.byte
#define PCNL07_EGS1 pcnl07.bit._EGS1
#define PCNL07_EGS0 pcnl07.bit._EGS0
#define PCNL07_IREN pcnl07.bit._IREN
#define PCNL07_IRQF pcnl07.bit._IRQF
#define PCNL07_IRS1 pcnl07.bit._IRS1
#define PCNL07_IRS0 pcnl07.bit._IRS0
#define PCNL07_OSEL pcnl07.bit._OSEL
#define PCNL07_EGS pcnl07.bitc._EGS
#define PCNL07_IRS pcnl07.bitc._IRS
__IO_EXTERN IO_WORD ptmr08;   /* PPG 8 */
#define PTMR08 ptmr08
__IO_EXTERN IO_WORD pcsr08;  
#define PCSR08 pcsr08
__IO_EXTERN IO_WORD pdut08;  
#define PDUT08 pdut08
__IO_EXTERN PCN08STR pcn08;  
#define PCN08 pcn08.word
#define PCN08_CNTE pcn08.bit._CNTE
#define PCN08_STGR pcn08.bit._STGR
#define PCN08_MDSE pcn08.bit._MDSE
#define PCN08_RTRG pcn08.bit._RTRG
#define PCN08_CKS1 pcn08.bit._CKS1
#define PCN08_CKS0 pcn08.bit._CKS0
#define PCN08_PGMS pcn08.bit._PGMS
#define PCN08_EGS1 pcn08.bit._EGS1
#define PCN08_EGS0 pcn08.bit._EGS0
#define PCN08_IREN pcn08.bit._IREN
#define PCN08_IRQF pcn08.bit._IRQF
#define PCN08_IRS1 pcn08.bit._IRS1
#define PCN08_IRS0 pcn08.bit._IRS0
#define PCN08_OSEL pcn08.bit._OSEL
#define PCN08_CKS pcn08.bitc._CKS
#define PCN08_EGS pcn08.bitc._EGS
#define PCN08_IRS pcn08.bitc._IRS
__IO_EXTERN PCNH08STR pcnh08;  
#define PCNH08 pcnh08.byte
#define PCNH08_CNTE pcnh08.bit._CNTE
#define PCNH08_STGR pcnh08.bit._STGR
#define PCNH08_MDSE pcnh08.bit._MDSE
#define PCNH08_RTRG pcnh08.bit._RTRG
#define PCNH08_CKS1 pcnh08.bit._CKS1
#define PCNH08_CKS0 pcnh08.bit._CKS0
#define PCNH08_PGMS pcnh08.bit._PGMS
#define PCNH08_CKS pcnh08.bitc._CKS
__IO_EXTERN PCNL08STR pcnl08;  
#define PCNL08 pcnl08.byte
#define PCNL08_EGS1 pcnl08.bit._EGS1
#define PCNL08_EGS0 pcnl08.bit._EGS0
#define PCNL08_IREN pcnl08.bit._IREN
#define PCNL08_IRQF pcnl08.bit._IRQF
#define PCNL08_IRS1 pcnl08.bit._IRS1
#define PCNL08_IRS0 pcnl08.bit._IRS0
#define PCNL08_OSEL pcnl08.bit._OSEL
#define PCNL08_EGS pcnl08.bitc._EGS
#define PCNL08_IRS pcnl08.bitc._IRS
__IO_EXTERN IO_WORD ptmr09;   /* PPG 9 */
#define PTMR09 ptmr09
__IO_EXTERN IO_WORD pcsr09;  
#define PCSR09 pcsr09
__IO_EXTERN IO_WORD pdut09;  
#define PDUT09 pdut09
__IO_EXTERN PCN09STR pcn09;  
#define PCN09 pcn09.word
#define PCN09_CNTE pcn09.bit._CNTE
#define PCN09_STGR pcn09.bit._STGR
#define PCN09_MDSE pcn09.bit._MDSE
#define PCN09_RTRG pcn09.bit._RTRG
#define PCN09_CKS1 pcn09.bit._CKS1
#define PCN09_CKS0 pcn09.bit._CKS0
#define PCN09_PGMS pcn09.bit._PGMS
#define PCN09_EGS1 pcn09.bit._EGS1
#define PCN09_EGS0 pcn09.bit._EGS0
#define PCN09_IREN pcn09.bit._IREN
#define PCN09_IRQF pcn09.bit._IRQF
#define PCN09_IRS1 pcn09.bit._IRS1
#define PCN09_IRS0 pcn09.bit._IRS0
#define PCN09_OSEL pcn09.bit._OSEL
#define PCN09_CKS pcn09.bitc._CKS
#define PCN09_EGS pcn09.bitc._EGS
#define PCN09_IRS pcn09.bitc._IRS
__IO_EXTERN PCNH09STR pcnh09;  
#define PCNH09 pcnh09.byte
#define PCNH09_CNTE pcnh09.bit._CNTE
#define PCNH09_STGR pcnh09.bit._STGR
#define PCNH09_MDSE pcnh09.bit._MDSE
#define PCNH09_RTRG pcnh09.bit._RTRG
#define PCNH09_CKS1 pcnh09.bit._CKS1
#define PCNH09_CKS0 pcnh09.bit._CKS0
#define PCNH09_PGMS pcnh09.bit._PGMS
#define PCNH09_CKS pcnh09.bitc._CKS
__IO_EXTERN PCNL09STR pcnl09;  
#define PCNL09 pcnl09.byte
#define PCNL09_EGS1 pcnl09.bit._EGS1
#define PCNL09_EGS0 pcnl09.bit._EGS0
#define PCNL09_IREN pcnl09.bit._IREN
#define PCNL09_IRQF pcnl09.bit._IRQF
#define PCNL09_IRS1 pcnl09.bit._IRS1
#define PCNL09_IRS0 pcnl09.bit._IRS0
#define PCNL09_OSEL pcnl09.bit._OSEL
#define PCNL09_EGS pcnl09.bitc._EGS
#define PCNL09_IRS pcnl09.bitc._IRS
__IO_EXTERN IO_WORD ptmr10;   /* PPG 10 */
#define PTMR10 ptmr10
__IO_EXTERN IO_WORD pcsr10;  
#define PCSR10 pcsr10
__IO_EXTERN IO_WORD pdut10;  
#define PDUT10 pdut10
__IO_EXTERN PCN10STR pcn10;  
#define PCN10 pcn10.word
#define PCN10_CNTE pcn10.bit._CNTE
#define PCN10_STGR pcn10.bit._STGR
#define PCN10_MDSE pcn10.bit._MDSE
#define PCN10_RTRG pcn10.bit._RTRG
#define PCN10_CKS1 pcn10.bit._CKS1
#define PCN10_CKS0 pcn10.bit._CKS0
#define PCN10_PGMS pcn10.bit._PGMS
#define PCN10_EGS1 pcn10.bit._EGS1
#define PCN10_EGS0 pcn10.bit._EGS0
#define PCN10_IREN pcn10.bit._IREN
#define PCN10_IRQF pcn10.bit._IRQF
#define PCN10_IRS1 pcn10.bit._IRS1
#define PCN10_IRS0 pcn10.bit._IRS0
#define PCN10_OSEL pcn10.bit._OSEL
#define PCN10_CKS pcn10.bitc._CKS
#define PCN10_EGS pcn10.bitc._EGS
#define PCN10_IRS pcn10.bitc._IRS
__IO_EXTERN PCNH10STR pcnh10;  
#define PCNH10 pcnh10.byte
#define PCNH10_CNTE pcnh10.bit._CNTE
#define PCNH10_STGR pcnh10.bit._STGR
#define PCNH10_MDSE pcnh10.bit._MDSE
#define PCNH10_RTRG pcnh10.bit._RTRG
#define PCNH10_CKS1 pcnh10.bit._CKS1
#define PCNH10_CKS0 pcnh10.bit._CKS0
#define PCNH10_PGMS pcnh10.bit._PGMS
#define PCNH10_CKS pcnh10.bitc._CKS
__IO_EXTERN PCNL10STR pcnl10;  
#define PCNL10 pcnl10.byte
#define PCNL10_EGS1 pcnl10.bit._EGS1
#define PCNL10_EGS0 pcnl10.bit._EGS0
#define PCNL10_IREN pcnl10.bit._IREN
#define PCNL10_IRQF pcnl10.bit._IRQF
#define PCNL10_IRS1 pcnl10.bit._IRS1
#define PCNL10_IRS0 pcnl10.bit._IRS0
#define PCNL10_OSEL pcnl10.bit._OSEL
#define PCNL10_EGS pcnl10.bitc._EGS
#define PCNL10_IRS pcnl10.bitc._IRS
__IO_EXTERN IO_WORD ptmr11;   /* PPG 11 */
#define PTMR11 ptmr11
__IO_EXTERN IO_WORD pcsr11;  
#define PCSR11 pcsr11
__IO_EXTERN IO_WORD pdut11;  
#define PDUT11 pdut11
__IO_EXTERN PCN11STR pcn11;  
#define PCN11 pcn11.word
#define PCN11_CNTE pcn11.bit._CNTE
#define PCN11_STGR pcn11.bit._STGR
#define PCN11_MDSE pcn11.bit._MDSE
#define PCN11_RTRG pcn11.bit._RTRG
#define PCN11_CKS1 pcn11.bit._CKS1
#define PCN11_CKS0 pcn11.bit._CKS0
#define PCN11_PGMS pcn11.bit._PGMS
#define PCN11_EGS1 pcn11.bit._EGS1
#define PCN11_EGS0 pcn11.bit._EGS0
#define PCN11_IREN pcn11.bit._IREN
#define PCN11_IRQF pcn11.bit._IRQF
#define PCN11_IRS1 pcn11.bit._IRS1
#define PCN11_IRS0 pcn11.bit._IRS0
#define PCN11_OSEL pcn11.bit._OSEL
#define PCN11_CKS pcn11.bitc._CKS
#define PCN11_EGS pcn11.bitc._EGS
#define PCN11_IRS pcn11.bitc._IRS
__IO_EXTERN PCNH11STR pcnh11;  
#define PCNH11 pcnh11.byte
#define PCNH11_CNTE pcnh11.bit._CNTE
#define PCNH11_STGR pcnh11.bit._STGR
#define PCNH11_MDSE pcnh11.bit._MDSE
#define PCNH11_RTRG pcnh11.bit._RTRG
#define PCNH11_CKS1 pcnh11.bit._CKS1
#define PCNH11_CKS0 pcnh11.bit._CKS0
#define PCNH11_PGMS pcnh11.bit._PGMS
#define PCNH11_CKS pcnh11.bitc._CKS
__IO_EXTERN PCNL11STR pcnl11;  
#define PCNL11 pcnl11.byte
#define PCNL11_EGS1 pcnl11.bit._EGS1
#define PCNL11_EGS0 pcnl11.bit._EGS0
#define PCNL11_IREN pcnl11.bit._IREN
#define PCNL11_IRQF pcnl11.bit._IRQF
#define PCNL11_IRS1 pcnl11.bit._IRS1
#define PCNL11_IRS0 pcnl11.bit._IRS0
#define PCNL11_OSEL pcnl11.bit._OSEL
#define PCNL11_EGS pcnl11.bitc._EGS
#define PCNL11_IRS pcnl11.bitc._IRS
__IO_EXTERN ICS01STR ics01;   /* Input Capture 0-3 */
#define ICS01 ics01.byte
#define ICS01_ICP1 ics01.bit._ICP1
#define ICS01_ICP0 ics01.bit._ICP0
#define ICS01_ICE1 ics01.bit._ICE1
#define ICS01_ICE0 ics01.bit._ICE0
#define ICS01_EG11 ics01.bit._EG11
#define ICS01_EG10 ics01.bit._EG10
#define ICS01_EG01 ics01.bit._EG01
#define ICS01_EG00 ics01.bit._EG00
#define ICS01_EG1 ics01.bitc._EG1
#define ICS01_EG0 ics01.bitc._EG0
__IO_EXTERN ICS23STR ics23;  
#define ICS23 ics23.byte
#define ICS23_ICP3 ics23.bit._ICP3
#define ICS23_ICP2 ics23.bit._ICP2
#define ICS23_ICE3 ics23.bit._ICE3
#define ICS23_ICE2 ics23.bit._ICE2
#define ICS23_EG31 ics23.bit._EG31
#define ICS23_EG30 ics23.bit._EG30
#define ICS23_EG21 ics23.bit._EG21
#define ICS23_EG20 ics23.bit._EG20
#define ICS23_EG3 ics23.bitc._EG3
#define ICS23_EG2 ics23.bitc._EG2
__IO_EXTERN IPCP0STR ipcp0;  
#define IPCP0 ipcp0.word
#define IPCP0_CP15 ipcp0.bit._CP15
#define IPCP0_CP14 ipcp0.bit._CP14
#define IPCP0_CP13 ipcp0.bit._CP13
#define IPCP0_CP12 ipcp0.bit._CP12
#define IPCP0_CP11 ipcp0.bit._CP11
#define IPCP0_CP10 ipcp0.bit._CP10
#define IPCP0_CP9 ipcp0.bit._CP9
#define IPCP0_CP8 ipcp0.bit._CP8
#define IPCP0_CP7 ipcp0.bit._CP7
#define IPCP0_CP6 ipcp0.bit._CP6
#define IPCP0_CP5 ipcp0.bit._CP5
#define IPCP0_CP4 ipcp0.bit._CP4
#define IPCP0_CP3 ipcp0.bit._CP3
#define IPCP0_CP2 ipcp0.bit._CP2
#define IPCP0_CP1 ipcp0.bit._CP1
#define IPCP0_CP0 ipcp0.bit._CP0
__IO_EXTERN IPCP1STR ipcp1;  
#define IPCP1 ipcp1.word
#define IPCP1_CP15 ipcp1.bit._CP15
#define IPCP1_CP14 ipcp1.bit._CP14
#define IPCP1_CP13 ipcp1.bit._CP13
#define IPCP1_CP12 ipcp1.bit._CP12
#define IPCP1_CP11 ipcp1.bit._CP11
#define IPCP1_CP10 ipcp1.bit._CP10
#define IPCP1_CP9 ipcp1.bit._CP9
#define IPCP1_CP8 ipcp1.bit._CP8
#define IPCP1_CP7 ipcp1.bit._CP7
#define IPCP1_CP6 ipcp1.bit._CP6
#define IPCP1_CP5 ipcp1.bit._CP5
#define IPCP1_CP4 ipcp1.bit._CP4
#define IPCP1_CP3 ipcp1.bit._CP3
#define IPCP1_CP2 ipcp1.bit._CP2
#define IPCP1_CP1 ipcp1.bit._CP1
#define IPCP1_CP0 ipcp1.bit._CP0
__IO_EXTERN IPCP2STR ipcp2;  
#define IPCP2 ipcp2.word
#define IPCP2_CP15 ipcp2.bit._CP15
#define IPCP2_CP14 ipcp2.bit._CP14
#define IPCP2_CP13 ipcp2.bit._CP13
#define IPCP2_CP12 ipcp2.bit._CP12
#define IPCP2_CP11 ipcp2.bit._CP11
#define IPCP2_CP10 ipcp2.bit._CP10
#define IPCP2_CP9 ipcp2.bit._CP9
#define IPCP2_CP8 ipcp2.bit._CP8
#define IPCP2_CP7 ipcp2.bit._CP7
#define IPCP2_CP6 ipcp2.bit._CP6
#define IPCP2_CP5 ipcp2.bit._CP5
#define IPCP2_CP4 ipcp2.bit._CP4
#define IPCP2_CP3 ipcp2.bit._CP3
#define IPCP2_CP2 ipcp2.bit._CP2
#define IPCP2_CP1 ipcp2.bit._CP1
#define IPCP2_CP0 ipcp2.bit._CP0
__IO_EXTERN IPCP3STR ipcp3;  
#define IPCP3 ipcp3.word
#define IPCP3_CP15 ipcp3.bit._CP15
#define IPCP3_CP14 ipcp3.bit._CP14
#define IPCP3_CP13 ipcp3.bit._CP13
#define IPCP3_CP12 ipcp3.bit._CP12
#define IPCP3_CP11 ipcp3.bit._CP11
#define IPCP3_CP10 ipcp3.bit._CP10
#define IPCP3_CP9 ipcp3.bit._CP9
#define IPCP3_CP8 ipcp3.bit._CP8
#define IPCP3_CP7 ipcp3.bit._CP7
#define IPCP3_CP6 ipcp3.bit._CP6
#define IPCP3_CP5 ipcp3.bit._CP5
#define IPCP3_CP4 ipcp3.bit._CP4
#define IPCP3_CP3 ipcp3.bit._CP3
#define IPCP3_CP2 ipcp3.bit._CP2
#define IPCP3_CP1 ipcp3.bit._CP1
#define IPCP3_CP0 ipcp3.bit._CP0
__IO_EXTERN OCS01STR ocs01;   /* Output Compare 0-3 */
#define OCS01 ocs01.word
#define OCS01_CMOD ocs01.bit._CMOD
#define OCS01_OTD1 ocs01.bit._OTD1
#define OCS01_OTD0 ocs01.bit._OTD0
#define OCS01_ICP1 ocs01.bit._ICP1
#define OCS01_ICP0 ocs01.bit._ICP0
#define OCS01_ICE1 ocs01.bit._ICE1
#define OCS01_ICE0 ocs01.bit._ICE0
#define OCS01_CST1 ocs01.bit._CST1
#define OCS01_CST0 ocs01.bit._CST0
__IO_EXTERN OCS23STR ocs23;  
#define OCS23 ocs23.word
#define OCS23_CMOD ocs23.bit._CMOD
#define OCS23_OTD3 ocs23.bit._OTD3
#define OCS23_OTD2 ocs23.bit._OTD2
#define OCS23_ICP3 ocs23.bit._ICP3
#define OCS23_ICP2 ocs23.bit._ICP2
#define OCS23_ICE3 ocs23.bit._ICE3
#define OCS23_ICE2 ocs23.bit._ICE2
#define OCS23_CST3 ocs23.bit._CST3
#define OCS23_CST2 ocs23.bit._CST2
__IO_EXTERN OCCP0STR occp0;  
#define OCCP0 occp0.word
#define OCCP0_C15 occp0.bit._C15
#define OCCP0_C14 occp0.bit._C14
#define OCCP0_C13 occp0.bit._C13
#define OCCP0_C12 occp0.bit._C12
#define OCCP0_C11 occp0.bit._C11
#define OCCP0_C10 occp0.bit._C10
#define OCCP0_C9 occp0.bit._C9
#define OCCP0_C8 occp0.bit._C8
#define OCCP0_C7 occp0.bit._C7
#define OCCP0_C6 occp0.bit._C6
#define OCCP0_C5 occp0.bit._C5
#define OCCP0_C4 occp0.bit._C4
#define OCCP0_C3 occp0.bit._C3
#define OCCP0_C2 occp0.bit._C2
#define OCCP0_C1 occp0.bit._C1
#define OCCP0_C0 occp0.bit._C0
__IO_EXTERN OCCP1STR occp1;  
#define OCCP1 occp1.word
#define OCCP1_C15 occp1.bit._C15
#define OCCP1_C14 occp1.bit._C14
#define OCCP1_C13 occp1.bit._C13
#define OCCP1_C12 occp1.bit._C12
#define OCCP1_C11 occp1.bit._C11
#define OCCP1_C10 occp1.bit._C10
#define OCCP1_C9 occp1.bit._C9
#define OCCP1_C8 occp1.bit._C8
#define OCCP1_C7 occp1.bit._C7
#define OCCP1_C6 occp1.bit._C6
#define OCCP1_C5 occp1.bit._C5
#define OCCP1_C4 occp1.bit._C4
#define OCCP1_C3 occp1.bit._C3
#define OCCP1_C2 occp1.bit._C2
#define OCCP1_C1 occp1.bit._C1
#define OCCP1_C0 occp1.bit._C0
__IO_EXTERN OCCP2STR occp2;  
#define OCCP2 occp2.word
#define OCCP2_C15 occp2.bit._C15
#define OCCP2_C14 occp2.bit._C14
#define OCCP2_C13 occp2.bit._C13
#define OCCP2_C12 occp2.bit._C12
#define OCCP2_C11 occp2.bit._C11
#define OCCP2_C10 occp2.bit._C10
#define OCCP2_C9 occp2.bit._C9
#define OCCP2_C8 occp2.bit._C8
#define OCCP2_C7 occp2.bit._C7
#define OCCP2_C6 occp2.bit._C6
#define OCCP2_C5 occp2.bit._C5
#define OCCP2_C4 occp2.bit._C4
#define OCCP2_C3 occp2.bit._C3
#define OCCP2_C2 occp2.bit._C2
#define OCCP2_C1 occp2.bit._C1
#define OCCP2_C0 occp2.bit._C0
__IO_EXTERN OCCP3STR occp3;  
#define OCCP3 occp3.word
#define OCCP3_C15 occp3.bit._C15
#define OCCP3_C14 occp3.bit._C14
#define OCCP3_C13 occp3.bit._C13
#define OCCP3_C12 occp3.bit._C12
#define OCCP3_C11 occp3.bit._C11
#define OCCP3_C10 occp3.bit._C10
#define OCCP3_C9 occp3.bit._C9
#define OCCP3_C8 occp3.bit._C8
#define OCCP3_C7 occp3.bit._C7
#define OCCP3_C6 occp3.bit._C6
#define OCCP3_C5 occp3.bit._C5
#define OCCP3_C4 occp3.bit._C4
#define OCCP3_C3 occp3.bit._C3
#define OCCP3_C2 occp3.bit._C2
#define OCCP3_C1 occp3.bit._C1
#define OCCP3_C0 occp3.bit._C0
__IO_EXTERN ADERHSTR aderh;   /* ADC */
#define ADERH aderh.word
#define ADERH_ADE31 aderh.bit._ADE31
#define ADERH_ADE30 aderh.bit._ADE30
#define ADERH_ADE29 aderh.bit._ADE29
#define ADERH_ADE28 aderh.bit._ADE28
#define ADERH_ADE27 aderh.bit._ADE27
#define ADERH_ADE26 aderh.bit._ADE26
#define ADERH_ADE25 aderh.bit._ADE25
#define ADERH_ADE24 aderh.bit._ADE24
#define ADERH_ADE23 aderh.bit._ADE23
#define ADERH_ADE22 aderh.bit._ADE22
#define ADERH_ADE21 aderh.bit._ADE21
#define ADERH_ADE20 aderh.bit._ADE20
#define ADERH_ADE19 aderh.bit._ADE19
#define ADERH_ADE18 aderh.bit._ADE18
#define ADERH_ADE17 aderh.bit._ADE17
#define ADERH_ADE16 aderh.bit._ADE16
__IO_EXTERN ADERLSTR aderl;  
#define ADERL aderl.word
#define ADERL_ADE15 aderl.bit._ADE15
#define ADERL_ADE14 aderl.bit._ADE14
#define ADERL_ADE13 aderl.bit._ADE13
#define ADERL_ADE12 aderl.bit._ADE12
#define ADERL_ADE11 aderl.bit._ADE11
#define ADERL_ADE10 aderl.bit._ADE10
#define ADERL_ADE9 aderl.bit._ADE9
#define ADERL_ADE8 aderl.bit._ADE8
#define ADERL_ADE7 aderl.bit._ADE7
#define ADERL_ADE6 aderl.bit._ADE6
#define ADERL_ADE5 aderl.bit._ADE5
#define ADERL_ADE4 aderl.bit._ADE4
#define ADERL_ADE3 aderl.bit._ADE3
#define ADERL_ADE2 aderl.bit._ADE2
#define ADERL_ADE1 aderl.bit._ADE1
#define ADERL_ADE0 aderl.bit._ADE0
__IO_EXTERN IO_LWORD ader;  
#define ADER ader
__IO_EXTERN ADCS1STR adcs1;  
#define ADCS1 adcs1.byte
#define ADCS1_BUSY adcs1.bit._BUSY
#define ADCS1_INT adcs1.bit._INT
#define ADCS1_INTE adcs1.bit._INTE
#define ADCS1_PAUS adcs1.bit._PAUS
#define ADCS1_STS1 adcs1.bit._STS1
#define ADCS1_STS0 adcs1.bit._STS0
#define ADCS1_STRT adcs1.bit._STRT
#define ADCS1_STS adcs1.bitc._STS
__IO_EXTERN ADCS0STR adcs0;  
#define ADCS0 adcs0.byte
#define ADCS0_MD1 adcs0.bit._MD1
#define ADCS0_MD0 adcs0.bit._MD0
#define ADCS0_S10 adcs0.bit._S10
#define ADCS0_ACH4 adcs0.bit._ACH4
#define ADCS0_ACH3 adcs0.bit._ACH3
#define ADCS0_ACH2 adcs0.bit._ACH2
#define ADCS0_ACH1 adcs0.bit._ACH1
#define ADCS0_ACH0 adcs0.bit._ACH0
#define ADCS0_MD adcs0.bitc._MD
#define ADCS0_ACH adcs0.bitc._ACH
__IO_EXTERN IO_WORD adcs;  
#define ADCS adcs
__IO_EXTERN ADCR1STR adcr1;  
#define ADCR1 adcr1.byte
#define ADCR1_D9 adcr1.bit._D9
#define ADCR1_D8 adcr1.bit._D8
__IO_EXTERN ADCR0STR adcr0;  
#define ADCR0 adcr0.byte
#define ADCR0_D7 adcr0.bit._D7
#define ADCR0_D6 adcr0.bit._D6
#define ADCR0_D5 adcr0.bit._D5
#define ADCR0_D4 adcr0.bit._D4
#define ADCR0_D3 adcr0.bit._D3
#define ADCR0_D2 adcr0.bit._D2
#define ADCR0_D1 adcr0.bit._D1
#define ADCR0_D0 adcr0.bit._D0
__IO_EXTERN IO_WORD adcr;  
#define ADCR adcr
__IO_EXTERN ADCT1STR adct1;  
#define ADCT1 adct1.byte
#define ADCT1_CT5 adct1.bit._CT5
#define ADCT1_CT4 adct1.bit._CT4
#define ADCT1_CT3 adct1.bit._CT3
#define ADCT1_CT2 adct1.bit._CT2
#define ADCT1_CT1 adct1.bit._CT1
#define ADCT1_CT0 adct1.bit._CT0
#define ADCT1_ST9 adct1.bit._ST9
#define ADCT1_ST8 adct1.bit._ST8
__IO_EXTERN ADCT0STR adct0;  
#define ADCT0 adct0.byte
#define ADCT0_ST7 adct0.bit._ST7
#define ADCT0_ST6 adct0.bit._ST6
#define ADCT0_ST5 adct0.bit._ST5
#define ADCT0_ST4 adct0.bit._ST4
#define ADCT0_ST3 adct0.bit._ST3
#define ADCT0_ST2 adct0.bit._ST2
#define ADCT0_ST1 adct0.bit._ST1
#define ADCT0_ST0 adct0.bit._ST0
__IO_EXTERN IO_WORD adct;  
#define ADCT adct
__IO_EXTERN ADSCHSTR adsch;  
#define ADSCH adsch.byte
#define ADSCH_ANS4 adsch.bit._ANS4
#define ADSCH_ANS3 adsch.bit._ANS3
#define ADSCH_ANS2 adsch.bit._ANS2
#define ADSCH_ANS1 adsch.bit._ANS1
#define ADSCH_ASN0 adsch.bit._ASN0
#define ADSCH_ANS adsch.bitc._ANS
__IO_EXTERN ADECHSTR adech;  
#define ADECH adech.byte
#define ADECH_ANE4 adech.bit._ANE4
#define ADECH_ANE3 adech.bit._ANE3
#define ADECH_ANE2 adech.bit._ANE2
#define ADECH_ANE1 adech.bit._ANE1
#define ADECH_ANE0 adech.bit._ANE0
#define ADECH_ANE adech.bitc._ANE
__IO_EXTERN TMRLR0STR tmrlr0;   /* Reload Timer 0 */
#define TMRLR0 tmrlr0.word
#define TMRLR0_D15 tmrlr0.bit._D15
#define TMRLR0_D14 tmrlr0.bit._D14
#define TMRLR0_D13 tmrlr0.bit._D13
#define TMRLR0_D12 tmrlr0.bit._D12
#define TMRLR0_D11 tmrlr0.bit._D11
#define TMRLR0_D10 tmrlr0.bit._D10
#define TMRLR0_D9 tmrlr0.bit._D9
#define TMRLR0_D8 tmrlr0.bit._D8
#define TMRLR0_D7 tmrlr0.bit._D7
#define TMRLR0_D6 tmrlr0.bit._D6
#define TMRLR0_D5 tmrlr0.bit._D5
#define TMRLR0_D4 tmrlr0.bit._D4
#define TMRLR0_D3 tmrlr0.bit._D3
#define TMRLR0_D2 tmrlr0.bit._D2
#define TMRLR0_D1 tmrlr0.bit._D1
#define TMRLR0_D0 tmrlr0.bit._D0
__IO_EXTERN TMR0STR tmr0;  
#define TMR0 tmr0.word
#define TMR0_D15 tmr0.bit._D15
#define TMR0_D14 tmr0.bit._D14
#define TMR0_D13 tmr0.bit._D13
#define TMR0_D12 tmr0.bit._D12
#define TMR0_D11 tmr0.bit._D11
#define TMR0_D10 tmr0.bit._D10
#define TMR0_D9 tmr0.bit._D9
#define TMR0_D8 tmr0.bit._D8
#define TMR0_D7 tmr0.bit._D7
#define TMR0_D6 tmr0.bit._D6
#define TMR0_D5 tmr0.bit._D5
#define TMR0_D4 tmr0.bit._D4
#define TMR0_D3 tmr0.bit._D3
#define TMR0_D2 tmr0.bit._D2
#define TMR0_D1 tmr0.bit._D1
#define TMR0_D0 tmr0.bit._D0
__IO_EXTERN TMCSR0STR tmcsr0;  
#define TMCSR0 tmcsr0.word
#define TMCSR0_CSL2 tmcsr0.bit._CSL2
#define TMCSR0_CSL1 tmcsr0.bit._CSL1
#define TMCSR0_CSL0 tmcsr0.bit._CSL0
#define TMCSR0_MOD2 tmcsr0.bit._MOD2
#define TMCSR0_MOD1 tmcsr0.bit._MOD1
#define TMCSR0_MOD0 tmcsr0.bit._MOD0
#define TMCSR0_OULT tmcsr0.bit._OULT
#define TMCSR0_RELD tmcsr0.bit._RELD
#define TMCSR0_INTE tmcsr0.bit._INTE
#define TMCSR0_UF tmcsr0.bit._UF
#define TMCSR0_CNTE tmcsr0.bit._CNTE
#define TMCSR0_TRG tmcsr0.bit._TRG
#define TMCSR0_CSL tmcsr0.bitc._CSL
#define TMCSR0_MOD tmcsr0.bitc._MOD
__IO_EXTERN TMCSRH0STR tmcsrh0;  
#define TMCSRH0 tmcsrh0.byte
#define TMCSRH0_CSL2 tmcsrh0.bit._CSL2
#define TMCSRH0_CSL1 tmcsrh0.bit._CSL1
#define TMCSRH0_CSL0 tmcsrh0.bit._CSL0
#define TMCSRH0_MOD2 tmcsrh0.bit._MOD2
#define TMCSRH0_MOD1 tmcsrh0.bit._MOD1
#define TMCSRH0_CSL tmcsrh0.bitc._CSL
__IO_EXTERN TMCSRL0STR tmcsrl0;  
#define TMCSRL0 tmcsrl0.byte
#define TMCSRL0_MOD0 tmcsrl0.bit._MOD0
#define TMCSRL0_OULT tmcsrl0.bit._OULT
#define TMCSRL0_RELD tmcsrl0.bit._RELD
#define TMCSRL0_INTE tmcsrl0.bit._INTE
#define TMCSRL0_UF tmcsrl0.bit._UF
#define TMCSRL0_CNTE tmcsrl0.bit._CNTE
#define TMCSRL0_TRG tmcsrl0.bit._TRG
__IO_EXTERN TMRLR1STR tmrlr1;   /* Reload Timer 1 */
#define TMRLR1 tmrlr1.word
#define TMRLR1_D15 tmrlr1.bit._D15
#define TMRLR1_D14 tmrlr1.bit._D14
#define TMRLR1_D13 tmrlr1.bit._D13
#define TMRLR1_D12 tmrlr1.bit._D12
#define TMRLR1_D11 tmrlr1.bit._D11
#define TMRLR1_D10 tmrlr1.bit._D10
#define TMRLR1_D9 tmrlr1.bit._D9
#define TMRLR1_D8 tmrlr1.bit._D8
#define TMRLR1_D7 tmrlr1.bit._D7
#define TMRLR1_D6 tmrlr1.bit._D6
#define TMRLR1_D5 tmrlr1.bit._D5
#define TMRLR1_D4 tmrlr1.bit._D4
#define TMRLR1_D3 tmrlr1.bit._D3
#define TMRLR1_D2 tmrlr1.bit._D2
#define TMRLR1_D1 tmrlr1.bit._D1
#define TMRLR1_D0 tmrlr1.bit._D0
__IO_EXTERN TMR1STR tmr1;  
#define TMR1 tmr1.word
#define TMR1_D15 tmr1.bit._D15
#define TMR1_D14 tmr1.bit._D14
#define TMR1_D13 tmr1.bit._D13
#define TMR1_D12 tmr1.bit._D12
#define TMR1_D11 tmr1.bit._D11
#define TMR1_D10 tmr1.bit._D10
#define TMR1_D9 tmr1.bit._D9
#define TMR1_D8 tmr1.bit._D8
#define TMR1_D7 tmr1.bit._D7
#define TMR1_D6 tmr1.bit._D6
#define TMR1_D5 tmr1.bit._D5
#define TMR1_D4 tmr1.bit._D4
#define TMR1_D3 tmr1.bit._D3
#define TMR1_D2 tmr1.bit._D2
#define TMR1_D1 tmr1.bit._D1
#define TMR1_D0 tmr1.bit._D0
__IO_EXTERN TMCSR1STR tmcsr1;  
#define TMCSR1 tmcsr1.word
#define TMCSR1_CSL2 tmcsr1.bit._CSL2
#define TMCSR1_CSL1 tmcsr1.bit._CSL1
#define TMCSR1_CSL0 tmcsr1.bit._CSL0
#define TMCSR1_MOD2 tmcsr1.bit._MOD2
#define TMCSR1_MOD1 tmcsr1.bit._MOD1
#define TMCSR1_MOD0 tmcsr1.bit._MOD0
#define TMCSR1_OULT tmcsr1.bit._OULT
#define TMCSR1_RELD tmcsr1.bit._RELD
#define TMCSR1_INTE tmcsr1.bit._INTE
#define TMCSR1_UF tmcsr1.bit._UF
#define TMCSR1_CNTE tmcsr1.bit._CNTE
#define TMCSR1_TRG tmcsr1.bit._TRG
#define TMCSR1_CSL tmcsr1.bitc._CSL
#define TMCSR1_MOD tmcsr1.bitc._MOD
__IO_EXTERN TMCSRH1STR tmcsrh1;  
#define TMCSRH1 tmcsrh1.byte
#define TMCSRH1_CSL2 tmcsrh1.bit._CSL2
#define TMCSRH1_CSL1 tmcsrh1.bit._CSL1
#define TMCSRH1_CSL0 tmcsrh1.bit._CSL0
#define TMCSRH1_MOD2 tmcsrh1.bit._MOD2
#define TMCSRH1_MOD1 tmcsrh1.bit._MOD1
#define TMCSRH1_CSL tmcsrh1.bitc._CSL
__IO_EXTERN TMCSRL1STR tmcsrl1;  
#define TMCSRL1 tmcsrl1.byte
#define TMCSRL1_MOD0 tmcsrl1.bit._MOD0
#define TMCSRL1_OULT tmcsrl1.bit._OULT
#define TMCSRL1_RELD tmcsrl1.bit._RELD
#define TMCSRL1_INTE tmcsrl1.bit._INTE
#define TMCSRL1_UF tmcsrl1.bit._UF
#define TMCSRL1_CNTE tmcsrl1.bit._CNTE
#define TMCSRL1_TRG tmcsrl1.bit._TRG
__IO_EXTERN TMRLR2STR tmrlr2;   /* Reload Timer 2 */
#define TMRLR2 tmrlr2.word
#define TMRLR2_D15 tmrlr2.bit._D15
#define TMRLR2_D14 tmrlr2.bit._D14
#define TMRLR2_D13 tmrlr2.bit._D13
#define TMRLR2_D12 tmrlr2.bit._D12
#define TMRLR2_D11 tmrlr2.bit._D11
#define TMRLR2_D10 tmrlr2.bit._D10
#define TMRLR2_D9 tmrlr2.bit._D9
#define TMRLR2_D8 tmrlr2.bit._D8
#define TMRLR2_D7 tmrlr2.bit._D7
#define TMRLR2_D6 tmrlr2.bit._D6
#define TMRLR2_D5 tmrlr2.bit._D5
#define TMRLR2_D4 tmrlr2.bit._D4
#define TMRLR2_D3 tmrlr2.bit._D3
#define TMRLR2_D2 tmrlr2.bit._D2
#define TMRLR2_D1 tmrlr2.bit._D1
#define TMRLR2_D0 tmrlr2.bit._D0
__IO_EXTERN TMR2STR tmr2;  
#define TMR2 tmr2.word
#define TMR2_D15 tmr2.bit._D15
#define TMR2_D14 tmr2.bit._D14
#define TMR2_D13 tmr2.bit._D13
#define TMR2_D12 tmr2.bit._D12
#define TMR2_D11 tmr2.bit._D11
#define TMR2_D10 tmr2.bit._D10
#define TMR2_D9 tmr2.bit._D9
#define TMR2_D8 tmr2.bit._D8
#define TMR2_D7 tmr2.bit._D7
#define TMR2_D6 tmr2.bit._D6
#define TMR2_D5 tmr2.bit._D5
#define TMR2_D4 tmr2.bit._D4
#define TMR2_D3 tmr2.bit._D3
#define TMR2_D2 tmr2.bit._D2
#define TMR2_D1 tmr2.bit._D1
#define TMR2_D0 tmr2.bit._D0
__IO_EXTERN TMCSR2STR tmcsr2;  
#define TMCSR2 tmcsr2.word
#define TMCSR2_CSL2 tmcsr2.bit._CSL2
#define TMCSR2_CSL1 tmcsr2.bit._CSL1
#define TMCSR2_CSL0 tmcsr2.bit._CSL0
#define TMCSR2_MOD2 tmcsr2.bit._MOD2
#define TMCSR2_MOD1 tmcsr2.bit._MOD1
#define TMCSR2_MOD0 tmcsr2.bit._MOD0
#define TMCSR2_OULT tmcsr2.bit._OULT
#define TMCSR2_RELD tmcsr2.bit._RELD
#define TMCSR2_INTE tmcsr2.bit._INTE
#define TMCSR2_UF tmcsr2.bit._UF
#define TMCSR2_CNTE tmcsr2.bit._CNTE
#define TMCSR2_TRG tmcsr2.bit._TRG
#define TMCSR2_CSL tmcsr2.bitc._CSL
#define TMCSR2_MOD tmcsr2.bitc._MOD
__IO_EXTERN TMCSRH2STR tmcsrh2;  
#define TMCSRH2 tmcsrh2.byte
#define TMCSRH2_CSL2 tmcsrh2.bit._CSL2
#define TMCSRH2_CSL1 tmcsrh2.bit._CSL1
#define TMCSRH2_CSL0 tmcsrh2.bit._CSL0
#define TMCSRH2_MOD2 tmcsrh2.bit._MOD2
#define TMCSRH2_MOD1 tmcsrh2.bit._MOD1
#define TMCSRH2_CSL tmcsrh2.bitc._CSL
__IO_EXTERN TMCSRL2STR tmcsrl2;  
#define TMCSRL2 tmcsrl2.byte
#define TMCSRL2_MOD0 tmcsrl2.bit._MOD0
#define TMCSRL2_OULT tmcsrl2.bit._OULT
#define TMCSRL2_RELD tmcsrl2.bit._RELD
#define TMCSRL2_INTE tmcsrl2.bit._INTE
#define TMCSRL2_UF tmcsrl2.bit._UF
#define TMCSRL2_CNTE tmcsrl2.bit._CNTE
#define TMCSRL2_TRG tmcsrl2.bit._TRG
__IO_EXTERN TMRLR3STR tmrlr3;   /* Reload Timer 3 */
#define TMRLR3 tmrlr3.word
#define TMRLR3_D15 tmrlr3.bit._D15
#define TMRLR3_D14 tmrlr3.bit._D14
#define TMRLR3_D13 tmrlr3.bit._D13
#define TMRLR3_D12 tmrlr3.bit._D12
#define TMRLR3_D11 tmrlr3.bit._D11
#define TMRLR3_D10 tmrlr3.bit._D10
#define TMRLR3_D9 tmrlr3.bit._D9
#define TMRLR3_D8 tmrlr3.bit._D8
#define TMRLR3_D7 tmrlr3.bit._D7
#define TMRLR3_D6 tmrlr3.bit._D6
#define TMRLR3_D5 tmrlr3.bit._D5
#define TMRLR3_D4 tmrlr3.bit._D4
#define TMRLR3_D3 tmrlr3.bit._D3
#define TMRLR3_D2 tmrlr3.bit._D2
#define TMRLR3_D1 tmrlr3.bit._D1
#define TMRLR3_D0 tmrlr3.bit._D0
__IO_EXTERN TMR3STR tmr3;  
#define TMR3 tmr3.word
#define TMR3_D15 tmr3.bit._D15
#define TMR3_D14 tmr3.bit._D14
#define TMR3_D13 tmr3.bit._D13
#define TMR3_D12 tmr3.bit._D12
#define TMR3_D11 tmr3.bit._D11
#define TMR3_D10 tmr3.bit._D10
#define TMR3_D9 tmr3.bit._D9
#define TMR3_D8 tmr3.bit._D8
#define TMR3_D7 tmr3.bit._D7
#define TMR3_D6 tmr3.bit._D6
#define TMR3_D5 tmr3.bit._D5
#define TMR3_D4 tmr3.bit._D4
#define TMR3_D3 tmr3.bit._D3
#define TMR3_D2 tmr3.bit._D2
#define TMR3_D1 tmr3.bit._D1
#define TMR3_D0 tmr3.bit._D0
__IO_EXTERN TMCSR3STR tmcsr3;  
#define TMCSR3 tmcsr3.word
#define TMCSR3_CSL2 tmcsr3.bit._CSL2
#define TMCSR3_CSL1 tmcsr3.bit._CSL1
#define TMCSR3_CSL0 tmcsr3.bit._CSL0
#define TMCSR3_MOD2 tmcsr3.bit._MOD2
#define TMCSR3_MOD1 tmcsr3.bit._MOD1
#define TMCSR3_MOD0 tmcsr3.bit._MOD0
#define TMCSR3_OULT tmcsr3.bit._OULT
#define TMCSR3_RELD tmcsr3.bit._RELD
#define TMCSR3_INTE tmcsr3.bit._INTE
#define TMCSR3_UF tmcsr3.bit._UF
#define TMCSR3_CNTE tmcsr3.bit._CNTE
#define TMCSR3_TRG tmcsr3.bit._TRG
#define TMCSR3_CSL tmcsr3.bitc._CSL
#define TMCSR3_MOD tmcsr3.bitc._MOD
__IO_EXTERN TMCSRH3STR tmcsrh3;  
#define TMCSRH3 tmcsrh3.byte
#define TMCSRH3_CSL2 tmcsrh3.bit._CSL2
#define TMCSRH3_CSL1 tmcsrh3.bit._CSL1
#define TMCSRH3_CSL0 tmcsrh3.bit._CSL0
#define TMCSRH3_MOD2 tmcsrh3.bit._MOD2
#define TMCSRH3_MOD1 tmcsrh3.bit._MOD1
#define TMCSRH3_CSL tmcsrh3.bitc._CSL
__IO_EXTERN TMCSRL3STR tmcsrl3;  
#define TMCSRL3 tmcsrl3.byte
#define TMCSRL3_MOD0 tmcsrl3.bit._MOD0
#define TMCSRL3_OULT tmcsrl3.bit._OULT
#define TMCSRL3_RELD tmcsrl3.bit._RELD
#define TMCSRL3_INTE tmcsrl3.bit._INTE
#define TMCSRL3_UF tmcsrl3.bit._UF
#define TMCSRL3_CNTE tmcsrl3.bit._CNTE
#define TMCSRL3_TRG tmcsrl3.bit._TRG
__IO_EXTERN TMRLR4STR tmrlr4;   /* Reload Timer 4 */
#define TMRLR4 tmrlr4.word
#define TMRLR4_D15 tmrlr4.bit._D15
#define TMRLR4_D14 tmrlr4.bit._D14
#define TMRLR4_D13 tmrlr4.bit._D13
#define TMRLR4_D12 tmrlr4.bit._D12
#define TMRLR4_D11 tmrlr4.bit._D11
#define TMRLR4_D10 tmrlr4.bit._D10
#define TMRLR4_D9 tmrlr4.bit._D9
#define TMRLR4_D8 tmrlr4.bit._D8
#define TMRLR4_D7 tmrlr4.bit._D7
#define TMRLR4_D6 tmrlr4.bit._D6
#define TMRLR4_D5 tmrlr4.bit._D5
#define TMRLR4_D4 tmrlr4.bit._D4
#define TMRLR4_D3 tmrlr4.bit._D3
#define TMRLR4_D2 tmrlr4.bit._D2
#define TMRLR4_D1 tmrlr4.bit._D1
#define TMRLR4_D0 tmrlr4.bit._D0
__IO_EXTERN TMR4STR tmr4;  
#define TMR4 tmr4.word
#define TMR4_D15 tmr4.bit._D15
#define TMR4_D14 tmr4.bit._D14
#define TMR4_D13 tmr4.bit._D13
#define TMR4_D12 tmr4.bit._D12
#define TMR4_D11 tmr4.bit._D11
#define TMR4_D10 tmr4.bit._D10
#define TMR4_D9 tmr4.bit._D9
#define TMR4_D8 tmr4.bit._D8
#define TMR4_D7 tmr4.bit._D7
#define TMR4_D6 tmr4.bit._D6
#define TMR4_D5 tmr4.bit._D5
#define TMR4_D4 tmr4.bit._D4
#define TMR4_D3 tmr4.bit._D3
#define TMR4_D2 tmr4.bit._D2
#define TMR4_D1 tmr4.bit._D1
#define TMR4_D0 tmr4.bit._D0
__IO_EXTERN TMCSR4STR tmcsr4;  
#define TMCSR4 tmcsr4.word
#define TMCSR4_CSL2 tmcsr4.bit._CSL2
#define TMCSR4_CSL1 tmcsr4.bit._CSL1
#define TMCSR4_CSL0 tmcsr4.bit._CSL0
#define TMCSR4_MOD2 tmcsr4.bit._MOD2
#define TMCSR4_MOD1 tmcsr4.bit._MOD1
#define TMCSR4_MOD0 tmcsr4.bit._MOD0
#define TMCSR4_OULT tmcsr4.bit._OULT
#define TMCSR4_RELD tmcsr4.bit._RELD
#define TMCSR4_INTE tmcsr4.bit._INTE
#define TMCSR4_UF tmcsr4.bit._UF
#define TMCSR4_CNTE tmcsr4.bit._CNTE
#define TMCSR4_TRG tmcsr4.bit._TRG
#define TMCSR4_CSL tmcsr4.bitc._CSL
#define TMCSR4_MOD tmcsr4.bitc._MOD
__IO_EXTERN TMCSRH4STR tmcsrh4;  
#define TMCSRH4 tmcsrh4.byte
#define TMCSRH4_CSL2 tmcsrh4.bit._CSL2
#define TMCSRH4_CSL1 tmcsrh4.bit._CSL1
#define TMCSRH4_CSL0 tmcsrh4.bit._CSL0
#define TMCSRH4_MOD2 tmcsrh4.bit._MOD2
#define TMCSRH4_MOD1 tmcsrh4.bit._MOD1
#define TMCSRH4_CSL tmcsrh4.bitc._CSL
__IO_EXTERN TMCSRL4STR tmcsrl4;  
#define TMCSRL4 tmcsrl4.byte
#define TMCSRL4_MOD0 tmcsrl4.bit._MOD0
#define TMCSRL4_OULT tmcsrl4.bit._OULT
#define TMCSRL4_RELD tmcsrl4.bit._RELD
#define TMCSRL4_INTE tmcsrl4.bit._INTE
#define TMCSRL4_UF tmcsrl4.bit._UF
#define TMCSRL4_CNTE tmcsrl4.bit._CNTE
#define TMCSRL4_TRG tmcsrl4.bit._TRG
__IO_EXTERN TMRLR5STR tmrlr5;   /* Reload Timer 5 */
#define TMRLR5 tmrlr5.word
#define TMRLR5_D15 tmrlr5.bit._D15
#define TMRLR5_D14 tmrlr5.bit._D14
#define TMRLR5_D13 tmrlr5.bit._D13
#define TMRLR5_D12 tmrlr5.bit._D12
#define TMRLR5_D11 tmrlr5.bit._D11
#define TMRLR5_D10 tmrlr5.bit._D10
#define TMRLR5_D9 tmrlr5.bit._D9
#define TMRLR5_D8 tmrlr5.bit._D8
#define TMRLR5_D7 tmrlr5.bit._D7
#define TMRLR5_D6 tmrlr5.bit._D6
#define TMRLR5_D5 tmrlr5.bit._D5
#define TMRLR5_D4 tmrlr5.bit._D4
#define TMRLR5_D3 tmrlr5.bit._D3
#define TMRLR5_D2 tmrlr5.bit._D2
#define TMRLR5_D1 tmrlr5.bit._D1
#define TMRLR5_D0 tmrlr5.bit._D0
__IO_EXTERN TMR5STR tmr5;  
#define TMR5 tmr5.word
#define TMR5_D15 tmr5.bit._D15
#define TMR5_D14 tmr5.bit._D14
#define TMR5_D13 tmr5.bit._D13
#define TMR5_D12 tmr5.bit._D12
#define TMR5_D11 tmr5.bit._D11
#define TMR5_D10 tmr5.bit._D10
#define TMR5_D9 tmr5.bit._D9
#define TMR5_D8 tmr5.bit._D8
#define TMR5_D7 tmr5.bit._D7
#define TMR5_D6 tmr5.bit._D6
#define TMR5_D5 tmr5.bit._D5
#define TMR5_D4 tmr5.bit._D4
#define TMR5_D3 tmr5.bit._D3
#define TMR5_D2 tmr5.bit._D2
#define TMR5_D1 tmr5.bit._D1
#define TMR5_D0 tmr5.bit._D0
__IO_EXTERN TMCSR5STR tmcsr5;  
#define TMCSR5 tmcsr5.word
#define TMCSR5_CSL2 tmcsr5.bit._CSL2
#define TMCSR5_CSL1 tmcsr5.bit._CSL1
#define TMCSR5_CSL0 tmcsr5.bit._CSL0
#define TMCSR5_MOD2 tmcsr5.bit._MOD2
#define TMCSR5_MOD1 tmcsr5.bit._MOD1
#define TMCSR5_MOD0 tmcsr5.bit._MOD0
#define TMCSR5_OULT tmcsr5.bit._OULT
#define TMCSR5_RELD tmcsr5.bit._RELD
#define TMCSR5_INTE tmcsr5.bit._INTE
#define TMCSR5_UF tmcsr5.bit._UF
#define TMCSR5_CNTE tmcsr5.bit._CNTE
#define TMCSR5_TRG tmcsr5.bit._TRG
#define TMCSR5_CSL tmcsr5.bitc._CSL
#define TMCSR5_MOD tmcsr5.bitc._MOD
__IO_EXTERN TMCSRH5STR tmcsrh5;  
#define TMCSRH5 tmcsrh5.byte
#define TMCSRH5_CSL2 tmcsrh5.bit._CSL2
#define TMCSRH5_CSL1 tmcsrh5.bit._CSL1
#define TMCSRH5_CSL0 tmcsrh5.bit._CSL0
#define TMCSRH5_MOD2 tmcsrh5.bit._MOD2
#define TMCSRH5_MOD1 tmcsrh5.bit._MOD1
#define TMCSRH5_CSL tmcsrh5.bitc._CSL
__IO_EXTERN TMCSRL5STR tmcsrl5;  
#define TMCSRL5 tmcsrl5.byte
#define TMCSRL5_MOD0 tmcsrl5.bit._MOD0
#define TMCSRL5_OULT tmcsrl5.bit._OULT
#define TMCSRL5_RELD tmcsrl5.bit._RELD
#define TMCSRL5_INTE tmcsrl5.bit._INTE
#define TMCSRL5_UF tmcsrl5.bit._UF
#define TMCSRL5_CNTE tmcsrl5.bit._CNTE
#define TMCSRL5_TRG tmcsrl5.bit._TRG
__IO_EXTERN TMRLR6STR tmrlr6;   /* Reload Timer 6 */
#define TMRLR6 tmrlr6.word
#define TMRLR6_D15 tmrlr6.bit._D15
#define TMRLR6_D14 tmrlr6.bit._D14
#define TMRLR6_D13 tmrlr6.bit._D13
#define TMRLR6_D12 tmrlr6.bit._D12
#define TMRLR6_D11 tmrlr6.bit._D11
#define TMRLR6_D10 tmrlr6.bit._D10
#define TMRLR6_D9 tmrlr6.bit._D9
#define TMRLR6_D8 tmrlr6.bit._D8
#define TMRLR6_D7 tmrlr6.bit._D7
#define TMRLR6_D6 tmrlr6.bit._D6
#define TMRLR6_D5 tmrlr6.bit._D5
#define TMRLR6_D4 tmrlr6.bit._D4
#define TMRLR6_D3 tmrlr6.bit._D3
#define TMRLR6_D2 tmrlr6.bit._D2
#define TMRLR6_D1 tmrlr6.bit._D1
#define TMRLR6_D0 tmrlr6.bit._D0
__IO_EXTERN TMR6STR tmr6;  
#define TMR6 tmr6.word
#define TMR6_D15 tmr6.bit._D15
#define TMR6_D14 tmr6.bit._D14
#define TMR6_D13 tmr6.bit._D13
#define TMR6_D12 tmr6.bit._D12
#define TMR6_D11 tmr6.bit._D11
#define TMR6_D10 tmr6.bit._D10
#define TMR6_D9 tmr6.bit._D9
#define TMR6_D8 tmr6.bit._D8
#define TMR6_D7 tmr6.bit._D7
#define TMR6_D6 tmr6.bit._D6
#define TMR6_D5 tmr6.bit._D5
#define TMR6_D4 tmr6.bit._D4
#define TMR6_D3 tmr6.bit._D3
#define TMR6_D2 tmr6.bit._D2
#define TMR6_D1 tmr6.bit._D1
#define TMR6_D0 tmr6.bit._D0
__IO_EXTERN TMCSR6STR tmcsr6;  
#define TMCSR6 tmcsr6.word
#define TMCSR6_CSL2 tmcsr6.bit._CSL2
#define TMCSR6_CSL1 tmcsr6.bit._CSL1
#define TMCSR6_CSL0 tmcsr6.bit._CSL0
#define TMCSR6_MOD2 tmcsr6.bit._MOD2
#define TMCSR6_MOD1 tmcsr6.bit._MOD1
#define TMCSR6_MOD0 tmcsr6.bit._MOD0
#define TMCSR6_OULT tmcsr6.bit._OULT
#define TMCSR6_RELD tmcsr6.bit._RELD
#define TMCSR6_INTE tmcsr6.bit._INTE
#define TMCSR6_UF tmcsr6.bit._UF
#define TMCSR6_CNTE tmcsr6.bit._CNTE
#define TMCSR6_TRG tmcsr6.bit._TRG
#define TMCSR6_CSL tmcsr6.bitc._CSL
#define TMCSR6_MOD tmcsr6.bitc._MOD
__IO_EXTERN TMCSRH6STR tmcsrh6;  
#define TMCSRH6 tmcsrh6.byte
#define TMCSRH6_CSL2 tmcsrh6.bit._CSL2
#define TMCSRH6_CSL1 tmcsrh6.bit._CSL1
#define TMCSRH6_CSL0 tmcsrh6.bit._CSL0
#define TMCSRH6_MOD2 tmcsrh6.bit._MOD2
#define TMCSRH6_MOD1 tmcsrh6.bit._MOD1
#define TMCSRH6_CSL tmcsrh6.bitc._CSL
__IO_EXTERN TMCSRL6STR tmcsrl6;  
#define TMCSRL6 tmcsrl6.byte
#define TMCSRL6_MOD0 tmcsrl6.bit._MOD0
#define TMCSRL6_OULT tmcsrl6.bit._OULT
#define TMCSRL6_RELD tmcsrl6.bit._RELD
#define TMCSRL6_INTE tmcsrl6.bit._INTE
#define TMCSRL6_UF tmcsrl6.bit._UF
#define TMCSRL6_CNTE tmcsrl6.bit._CNTE
#define TMCSRL6_TRG tmcsrl6.bit._TRG
__IO_EXTERN TMRLR7STR tmrlr7;   /* Reload Timer 7 */
#define TMRLR7 tmrlr7.word
#define TMRLR7_D15 tmrlr7.bit._D15
#define TMRLR7_D14 tmrlr7.bit._D14
#define TMRLR7_D13 tmrlr7.bit._D13
#define TMRLR7_D12 tmrlr7.bit._D12
#define TMRLR7_D11 tmrlr7.bit._D11
#define TMRLR7_D10 tmrlr7.bit._D10
#define TMRLR7_D9 tmrlr7.bit._D9
#define TMRLR7_D8 tmrlr7.bit._D8
#define TMRLR7_D7 tmrlr7.bit._D7
#define TMRLR7_D6 tmrlr7.bit._D6
#define TMRLR7_D5 tmrlr7.bit._D5
#define TMRLR7_D4 tmrlr7.bit._D4
#define TMRLR7_D3 tmrlr7.bit._D3
#define TMRLR7_D2 tmrlr7.bit._D2
#define TMRLR7_D1 tmrlr7.bit._D1
#define TMRLR7_D0 tmrlr7.bit._D0
__IO_EXTERN TMR7STR tmr7;  
#define TMR7 tmr7.word
#define TMR7_D15 tmr7.bit._D15
#define TMR7_D14 tmr7.bit._D14
#define TMR7_D13 tmr7.bit._D13
#define TMR7_D12 tmr7.bit._D12
#define TMR7_D11 tmr7.bit._D11
#define TMR7_D10 tmr7.bit._D10
#define TMR7_D9 tmr7.bit._D9
#define TMR7_D8 tmr7.bit._D8
#define TMR7_D7 tmr7.bit._D7
#define TMR7_D6 tmr7.bit._D6
#define TMR7_D5 tmr7.bit._D5
#define TMR7_D4 tmr7.bit._D4
#define TMR7_D3 tmr7.bit._D3
#define TMR7_D2 tmr7.bit._D2
#define TMR7_D1 tmr7.bit._D1
#define TMR7_D0 tmr7.bit._D0
__IO_EXTERN TMCSR7STR tmcsr7;  
#define TMCSR7 tmcsr7.word
#define TMCSR7_CSL2 tmcsr7.bit._CSL2
#define TMCSR7_CSL1 tmcsr7.bit._CSL1
#define TMCSR7_CSL0 tmcsr7.bit._CSL0
#define TMCSR7_MOD2 tmcsr7.bit._MOD2
#define TMCSR7_MOD1 tmcsr7.bit._MOD1
#define TMCSR7_MOD0 tmcsr7.bit._MOD0
#define TMCSR7_OULT tmcsr7.bit._OULT
#define TMCSR7_RELD tmcsr7.bit._RELD
#define TMCSR7_INTE tmcsr7.bit._INTE
#define TMCSR7_UF tmcsr7.bit._UF
#define TMCSR7_CNTE tmcsr7.bit._CNTE
#define TMCSR7_TRG tmcsr7.bit._TRG
#define TMCSR7_CSL tmcsr7.bitc._CSL
#define TMCSR7_MOD tmcsr7.bitc._MOD
__IO_EXTERN TMCSRH7STR tmcsrh7;  
#define TMCSRH7 tmcsrh7.byte
#define TMCSRH7_CSL2 tmcsrh7.bit._CSL2
#define TMCSRH7_CSL1 tmcsrh7.bit._CSL1
#define TMCSRH7_CSL0 tmcsrh7.bit._CSL0
#define TMCSRH7_MOD2 tmcsrh7.bit._MOD2
#define TMCSRH7_MOD1 tmcsrh7.bit._MOD1
#define TMCSRH7_CSL tmcsrh7.bitc._CSL
__IO_EXTERN TMCSRL7STR tmcsrl7;  
#define TMCSRL7 tmcsrl7.byte
#define TMCSRL7_MOD0 tmcsrl7.bit._MOD0
#define TMCSRL7_OULT tmcsrl7.bit._OULT
#define TMCSRL7_RELD tmcsrl7.bit._RELD
#define TMCSRL7_INTE tmcsrl7.bit._INTE
#define TMCSRL7_UF tmcsrl7.bit._UF
#define TMCSRL7_CNTE tmcsrl7.bit._CNTE
#define TMCSRL7_TRG tmcsrl7.bit._TRG
__IO_EXTERN TCDT0STR tcdt0;   /* Free Running Timer0 */
#define TCDT0 tcdt0.word
#define TCDT0_T15 tcdt0.bit._T15
#define TCDT0_T14 tcdt0.bit._T14
#define TCDT0_T13 tcdt0.bit._T13
#define TCDT0_T12 tcdt0.bit._T12
#define TCDT0_T11 tcdt0.bit._T11
#define TCDT0_T10 tcdt0.bit._T10
#define TCDT0_T9 tcdt0.bit._T9
#define TCDT0_T8 tcdt0.bit._T8
#define TCDT0_T7 tcdt0.bit._T7
#define TCDT0_T6 tcdt0.bit._T6
#define TCDT0_T5 tcdt0.bit._T5
#define TCDT0_T4 tcdt0.bit._T4
#define TCDT0_T3 tcdt0.bit._T3
#define TCDT0_T2 tcdt0.bit._T2
#define TCDT0_T1 tcdt0.bit._T1
#define TCDT0_T0 tcdt0.bit._T0
__IO_EXTERN TCCS0STR tccs0;  
#define TCCS0 tccs0.byte
#define TCCS0_ECLK tccs0.bit._ECLK
#define TCCS0_IVF tccs0.bit._IVF
#define TCCS0_IVFE tccs0.bit._IVFE
#define TCCS0_STOP tccs0.bit._STOP
#define TCCS0_MODE tccs0.bit._MODE
#define TCCS0_CLR tccs0.bit._CLR
#define TCCS0_CLK1 tccs0.bit._CLK1
#define TCCS0_CLK0 tccs0.bit._CLK0
#define TCCS0_CLK tccs0.bitc._CLK
__IO_EXTERN TCDT1STR tcdt1;   /* Free Running Timer1 */
#define TCDT1 tcdt1.word
#define TCDT1_T15 tcdt1.bit._T15
#define TCDT1_T14 tcdt1.bit._T14
#define TCDT1_T13 tcdt1.bit._T13
#define TCDT1_T12 tcdt1.bit._T12
#define TCDT1_T11 tcdt1.bit._T11
#define TCDT1_T10 tcdt1.bit._T10
#define TCDT1_T9 tcdt1.bit._T9
#define TCDT1_T8 tcdt1.bit._T8
#define TCDT1_T7 tcdt1.bit._T7
#define TCDT1_T6 tcdt1.bit._T6
#define TCDT1_T5 tcdt1.bit._T5
#define TCDT1_T4 tcdt1.bit._T4
#define TCDT1_T3 tcdt1.bit._T3
#define TCDT1_T2 tcdt1.bit._T2
#define TCDT1_T1 tcdt1.bit._T1
#define TCDT1_T0 tcdt1.bit._T0
__IO_EXTERN TCCS1STR tccs1;  
#define TCCS1 tccs1.byte
#define TCCS1_ECLK tccs1.bit._ECLK
#define TCCS1_IVF tccs1.bit._IVF
#define TCCS1_IVFE tccs1.bit._IVFE
#define TCCS1_STOP tccs1.bit._STOP
#define TCCS1_MODE tccs1.bit._MODE
#define TCCS1_CLR tccs1.bit._CLR
#define TCCS1_CLK1 tccs1.bit._CLK1
#define TCCS1_CLK0 tccs1.bit._CLK0
#define TCCS1_CLK tccs1.bitc._CLK
__IO_EXTERN TCDT2STR tcdt2;   /* Free Running Timer2 */
#define TCDT2 tcdt2.word
#define TCDT2_T15 tcdt2.bit._T15
#define TCDT2_T14 tcdt2.bit._T14
#define TCDT2_T13 tcdt2.bit._T13
#define TCDT2_T12 tcdt2.bit._T12
#define TCDT2_T11 tcdt2.bit._T11
#define TCDT2_T10 tcdt2.bit._T10
#define TCDT2_T9 tcdt2.bit._T9
#define TCDT2_T8 tcdt2.bit._T8
#define TCDT2_T7 tcdt2.bit._T7
#define TCDT2_T6 tcdt2.bit._T6
#define TCDT2_T5 tcdt2.bit._T5
#define TCDT2_T4 tcdt2.bit._T4
#define TCDT2_T3 tcdt2.bit._T3
#define TCDT2_T2 tcdt2.bit._T2
#define TCDT2_T1 tcdt2.bit._T1
#define TCDT2_T0 tcdt2.bit._T0
__IO_EXTERN TCCS2STR tccs2;  
#define TCCS2 tccs2.byte
#define TCCS2_ECLK tccs2.bit._ECLK
#define TCCS2_IVF tccs2.bit._IVF
#define TCCS2_IVFE tccs2.bit._IVFE
#define TCCS2_STOP tccs2.bit._STOP
#define TCCS2_MODE tccs2.bit._MODE
#define TCCS2_CLR tccs2.bit._CLR
#define TCCS2_CLK1 tccs2.bit._CLK1
#define TCCS2_CLK0 tccs2.bit._CLK0
#define TCCS2_CLK tccs2.bitc._CLK
__IO_EXTERN TCDT3STR tcdt3;   /* Free Running Timer3 */
#define TCDT3 tcdt3.word
#define TCDT3_T15 tcdt3.bit._T15
#define TCDT3_T14 tcdt3.bit._T14
#define TCDT3_T13 tcdt3.bit._T13
#define TCDT3_T12 tcdt3.bit._T12
#define TCDT3_T11 tcdt3.bit._T11
#define TCDT3_T10 tcdt3.bit._T10
#define TCDT3_T9 tcdt3.bit._T9
#define TCDT3_T8 tcdt3.bit._T8
#define TCDT3_T7 tcdt3.bit._T7
#define TCDT3_T6 tcdt3.bit._T6
#define TCDT3_T5 tcdt3.bit._T5
#define TCDT3_T4 tcdt3.bit._T4
#define TCDT3_T3 tcdt3.bit._T3
#define TCDT3_T2 tcdt3.bit._T2
#define TCDT3_T1 tcdt3.bit._T1
#define TCDT3_T0 tcdt3.bit._T0
__IO_EXTERN TCCS3STR tccs3;  
#define TCCS3 tccs3.byte
#define TCCS3_ECLK tccs3.bit._ECLK
#define TCCS3_IVF tccs3.bit._IVF
#define TCCS3_IVFE tccs3.bit._IVFE
#define TCCS3_STOP tccs3.bit._STOP
#define TCCS3_MODE tccs3.bit._MODE
#define TCCS3_CLR tccs3.bit._CLR
#define TCCS3_CLK1 tccs3.bit._CLK1
#define TCCS3_CLK0 tccs3.bit._CLK0
#define TCCS3_CLK tccs3.bitc._CLK
__IO_EXTERN DMACA0STR dmaca0;   /* DMAC */
#define DMACA0 dmaca0.lword
#define DMACA0_DENB dmaca0.bit._DENB
#define DMACA0_PAUS dmaca0.bit._PAUS
#define DMACA0_STRG dmaca0.bit._STRG
#define DMACA0_IS4 dmaca0.bit._IS4
#define DMACA0_IS3 dmaca0.bit._IS3
#define DMACA0_IS2 dmaca0.bit._IS2
#define DMACA0_IS1 dmaca0.bit._IS1
#define DMACA0_IS0 dmaca0.bit._IS0
#define DMACA0_EIS3 dmaca0.bit._EIS3
#define DMACA0_EIS2 dmaca0.bit._EIS2
#define DMACA0_EIS1 dmaca0.bit._EIS1
#define DMACA0_EIS0 dmaca0.bit._EIS0
#define DMACA0_BLK3 dmaca0.bit._BLK3
#define DMACA0_BLK2 dmaca0.bit._BLK2
#define DMACA0_BLK1 dmaca0.bit._BLK1
#define DMACA0_BLK0 dmaca0.bit._BLK0
#define DMACA0_DTCF dmaca0.bit._DTCF
#define DMACA0_DTCE dmaca0.bit._DTCE
#define DMACA0_DTCD dmaca0.bit._DTCD
#define DMACA0_DTCC dmaca0.bit._DTCC
#define DMACA0_DTCB dmaca0.bit._DTCB
#define DMACA0_DTCA dmaca0.bit._DTCA
#define DMACA0_DTC9 dmaca0.bit._DTC9
#define DMACA0_DTC8 dmaca0.bit._DTC8
#define DMACA0_DTC7 dmaca0.bit._DTC7
#define DMACA0_DTC6 dmaca0.bit._DTC6
#define DMACA0_DTC5 dmaca0.bit._DTC5
#define DMACA0_DTC4 dmaca0.bit._DTC4
#define DMACA0_DTC3 dmaca0.bit._DTC3
#define DMACA0_DTC2 dmaca0.bit._DTC2
#define DMACA0_DTC1 dmaca0.bit._DTC1
#define DMACA0_DTC0 dmaca0.bit._DTC0
#define DMACA0_IS dmaca0.bitc._IS
#define DMACA0_EIS dmaca0.bitc._EIS
#define DMACA0_BLK dmaca0.bitc._BLK
#define DMACA0_DTC dmaca0.bitc._DTC
__IO_EXTERN DMACB0STR dmacb0;  
#define DMACB0 dmacb0.lword
#define DMACB0_TYPE1 dmacb0.bit._TYPE1
#define DMACB0_TYPE0 dmacb0.bit._TYPE0
#define DMACB0_MOD1 dmacb0.bit._MOD1
#define DMACB0_MOD0 dmacb0.bit._MOD0
#define DMACB0_WS1 dmacb0.bit._WS1
#define DMACB0_WS0 dmacb0.bit._WS0
#define DMACB0_SADM dmacb0.bit._SADM
#define DMACB0_DADM dmacb0.bit._DADM
#define DMACB0_DTCR dmacb0.bit._DTCR
#define DMACB0_SADR dmacb0.bit._SADR
#define DMACB0_DADR dmacb0.bit._DADR
#define DMACB0_ERIE dmacb0.bit._ERIE
#define DMACB0_EDIE dmacb0.bit._EDIE
#define DMACB0_DSS2 dmacb0.bit._DSS2
#define DMACB0_DSS1 dmacb0.bit._DSS1
#define DMACB0_DSS0 dmacb0.bit._DSS0
#define DMACB0_SASZ7 dmacb0.bit._SASZ7
#define DMACB0_SASZ6 dmacb0.bit._SASZ6
#define DMACB0_SASZ5 dmacb0.bit._SASZ5
#define DMACB0_SASZ4 dmacb0.bit._SASZ4
#define DMACB0_SASZ3 dmacb0.bit._SASZ3
#define DMACB0_SASZ2 dmacb0.bit._SASZ2
#define DMACB0_SASZ1 dmacb0.bit._SASZ1
#define DMACB0_SASZ0 dmacb0.bit._SASZ0
#define DMACB0_DASZ7 dmacb0.bit._DASZ7
#define DMACB0_DASZ6 dmacb0.bit._DASZ6
#define DMACB0_DASZ5 dmacb0.bit._DASZ5
#define DMACB0_DASZ4 dmacb0.bit._DASZ4
#define DMACB0_DASZ3 dmacb0.bit._DASZ3
#define DMACB0_DASZ2 dmacb0.bit._DASZ2
#define DMACB0_DASZ1 dmacb0.bit._DASZ1
#define DMACB0_DASZ0 dmacb0.bit._DASZ0
#define DMACB0_TYPE dmacb0.bitc._TYPE
#define DMACB0_MOD dmacb0.bitc._MOD
#define DMACB0_WS dmacb0.bitc._WS
#define DMACB0_DSS dmacb0.bitc._DSS
#define DMACB0_SASZ dmacb0.bitc._SASZ
#define DMACB0_DASZ dmacb0.bitc._DASZ
__IO_EXTERN DMACA1STR dmaca1;  
#define DMACA1 dmaca1.lword
#define DMACA1_DENB dmaca1.bit._DENB
#define DMACA1_PAUS dmaca1.bit._PAUS
#define DMACA1_STRG dmaca1.bit._STRG
#define DMACA1_IS4 dmaca1.bit._IS4
#define DMACA1_IS3 dmaca1.bit._IS3
#define DMACA1_IS2 dmaca1.bit._IS2
#define DMACA1_IS1 dmaca1.bit._IS1
#define DMACA1_IS0 dmaca1.bit._IS0
#define DMACA1_EIS3 dmaca1.bit._EIS3
#define DMACA1_EIS2 dmaca1.bit._EIS2
#define DMACA1_EIS1 dmaca1.bit._EIS1
#define DMACA1_EIS0 dmaca1.bit._EIS0
#define DMACA1_BLK3 dmaca1.bit._BLK3
#define DMACA1_BLK2 dmaca1.bit._BLK2
#define DMACA1_BLK1 dmaca1.bit._BLK1
#define DMACA1_BLK0 dmaca1.bit._BLK0
#define DMACA1_DTCF dmaca1.bit._DTCF
#define DMACA1_DTCE dmaca1.bit._DTCE
#define DMACA1_DTCD dmaca1.bit._DTCD
#define DMACA1_DTCC dmaca1.bit._DTCC
#define DMACA1_DTCB dmaca1.bit._DTCB
#define DMACA1_DTCA dmaca1.bit._DTCA
#define DMACA1_DTC9 dmaca1.bit._DTC9
#define DMACA1_DTC8 dmaca1.bit._DTC8
#define DMACA1_DTC7 dmaca1.bit._DTC7
#define DMACA1_DTC6 dmaca1.bit._DTC6
#define DMACA1_DTC5 dmaca1.bit._DTC5
#define DMACA1_DTC4 dmaca1.bit._DTC4
#define DMACA1_DTC3 dmaca1.bit._DTC3
#define DMACA1_DTC2 dmaca1.bit._DTC2
#define DMACA1_DTC1 dmaca1.bit._DTC1
#define DMACA1_DTC0 dmaca1.bit._DTC0
#define DMACA1_IS dmaca1.bitc._IS
#define DMACA1_EIS dmaca1.bitc._EIS
#define DMACA1_BLK dmaca1.bitc._BLK
#define DMACA1_DTC dmaca1.bitc._DTC
__IO_EXTERN DMACB1STR dmacb1;  
#define DMACB1 dmacb1.lword
#define DMACB1_TYPE1 dmacb1.bit._TYPE1
#define DMACB1_TYPE0 dmacb1.bit._TYPE0
#define DMACB1_MOD1 dmacb1.bit._MOD1
#define DMACB1_MOD0 dmacb1.bit._MOD0
#define DMACB1_WS1 dmacb1.bit._WS1
#define DMACB1_WS0 dmacb1.bit._WS0
#define DMACB1_SADM dmacb1.bit._SADM
#define DMACB1_DADM dmacb1.bit._DADM
#define DMACB1_DTCR dmacb1.bit._DTCR
#define DMACB1_SADR dmacb1.bit._SADR
#define DMACB1_DADR dmacb1.bit._DADR
#define DMACB1_ERIE dmacb1.bit._ERIE
#define DMACB1_EDIE dmacb1.bit._EDIE
#define DMACB1_DSS2 dmacb1.bit._DSS2
#define DMACB1_DSS1 dmacb1.bit._DSS1
#define DMACB1_DSS0 dmacb1.bit._DSS0
#define DMACB1_SASZ7 dmacb1.bit._SASZ7
#define DMACB1_SASZ6 dmacb1.bit._SASZ6
#define DMACB1_SASZ5 dmacb1.bit._SASZ5
#define DMACB1_SASZ4 dmacb1.bit._SASZ4
#define DMACB1_SASZ3 dmacb1.bit._SASZ3
#define DMACB1_SASZ2 dmacb1.bit._SASZ2
#define DMACB1_SASZ1 dmacb1.bit._SASZ1
#define DMACB1_SASZ0 dmacb1.bit._SASZ0
#define DMACB1_DASZ7 dmacb1.bit._DASZ7
#define DMACB1_DASZ6 dmacb1.bit._DASZ6
#define DMACB1_DASZ5 dmacb1.bit._DASZ5
#define DMACB1_DASZ4 dmacb1.bit._DASZ4
#define DMACB1_DASZ3 dmacb1.bit._DASZ3
#define DMACB1_DASZ2 dmacb1.bit._DASZ2
#define DMACB1_DASZ1 dmacb1.bit._DASZ1
#define DMACB1_DASZ0 dmacb1.bit._DASZ0
#define DMACB1_TYPE dmacb1.bitc._TYPE
#define DMACB1_MOD dmacb1.bitc._MOD
#define DMACB1_WS dmacb1.bitc._WS
#define DMACB1_DSS dmacb1.bitc._DSS
#define DMACB1_SASZ dmacb1.bitc._SASZ
#define DMACB1_DASZ dmacb1.bitc._DASZ
__IO_EXTERN DMACA2STR dmaca2;  
#define DMACA2 dmaca2.lword
#define DMACA2_DENB dmaca2.bit._DENB
#define DMACA2_PAUS dmaca2.bit._PAUS
#define DMACA2_STRG dmaca2.bit._STRG
#define DMACA2_IS4 dmaca2.bit._IS4
#define DMACA2_IS3 dmaca2.bit._IS3
#define DMACA2_IS2 dmaca2.bit._IS2
#define DMACA2_IS1 dmaca2.bit._IS1
#define DMACA2_IS0 dmaca2.bit._IS0
#define DMACA2_EIS3 dmaca2.bit._EIS3
#define DMACA2_EIS2 dmaca2.bit._EIS2
#define DMACA2_EIS1 dmaca2.bit._EIS1
#define DMACA2_EIS0 dmaca2.bit._EIS0
#define DMACA2_BLK3 dmaca2.bit._BLK3
#define DMACA2_BLK2 dmaca2.bit._BLK2
#define DMACA2_BLK1 dmaca2.bit._BLK1
#define DMACA2_BLK0 dmaca2.bit._BLK0
#define DMACA2_DTCF dmaca2.bit._DTCF
#define DMACA2_DTCE dmaca2.bit._DTCE
#define DMACA2_DTCD dmaca2.bit._DTCD
#define DMACA2_DTCC dmaca2.bit._DTCC
#define DMACA2_DTCB dmaca2.bit._DTCB
#define DMACA2_DTCA dmaca2.bit._DTCA
#define DMACA2_DTC9 dmaca2.bit._DTC9
#define DMACA2_DTC8 dmaca2.bit._DTC8
#define DMACA2_DTC7 dmaca2.bit._DTC7
#define DMACA2_DTC6 dmaca2.bit._DTC6
#define DMACA2_DTC5 dmaca2.bit._DTC5
#define DMACA2_DTC4 dmaca2.bit._DTC4
#define DMACA2_DTC3 dmaca2.bit._DTC3
#define DMACA2_DTC2 dmaca2.bit._DTC2
#define DMACA2_DTC1 dmaca2.bit._DTC1
#define DMACA2_DTC0 dmaca2.bit._DTC0
#define DMACA2_IS dmaca2.bitc._IS
#define DMACA2_EIS dmaca2.bitc._EIS
#define DMACA2_BLK dmaca2.bitc._BLK
#define DMACA2_DTC dmaca2.bitc._DTC
__IO_EXTERN DMACB2STR dmacb2;  
#define DMACB2 dmacb2.lword
#define DMACB2_TYPE1 dmacb2.bit._TYPE1
#define DMACB2_TYPE0 dmacb2.bit._TYPE0
#define DMACB2_MOD1 dmacb2.bit._MOD1
#define DMACB2_MOD0 dmacb2.bit._MOD0
#define DMACB2_WS1 dmacb2.bit._WS1
#define DMACB2_WS0 dmacb2.bit._WS0
#define DMACB2_SADM dmacb2.bit._SADM
#define DMACB2_DADM dmacb2.bit._DADM
#define DMACB2_DTCR dmacb2.bit._DTCR
#define DMACB2_SADR dmacb2.bit._SADR
#define DMACB2_DADR dmacb2.bit._DADR
#define DMACB2_ERIE dmacb2.bit._ERIE
#define DMACB2_EDIE dmacb2.bit._EDIE
#define DMACB2_DSS2 dmacb2.bit._DSS2
#define DMACB2_DSS1 dmacb2.bit._DSS1
#define DMACB2_DSS0 dmacb2.bit._DSS0
#define DMACB2_SASZ7 dmacb2.bit._SASZ7
#define DMACB2_SASZ6 dmacb2.bit._SASZ6
#define DMACB2_SASZ5 dmacb2.bit._SASZ5
#define DMACB2_SASZ4 dmacb2.bit._SASZ4
#define DMACB2_SASZ3 dmacb2.bit._SASZ3
#define DMACB2_SASZ2 dmacb2.bit._SASZ2
#define DMACB2_SASZ1 dmacb2.bit._SASZ1
#define DMACB2_SASZ0 dmacb2.bit._SASZ0
#define DMACB2_DASZ7 dmacb2.bit._DASZ7
#define DMACB2_DASZ6 dmacb2.bit._DASZ6
#define DMACB2_DASZ5 dmacb2.bit._DASZ5
#define DMACB2_DASZ4 dmacb2.bit._DASZ4
#define DMACB2_DASZ3 dmacb2.bit._DASZ3
#define DMACB2_DASZ2 dmacb2.bit._DASZ2
#define DMACB2_DASZ1 dmacb2.bit._DASZ1
#define DMACB2_DASZ0 dmacb2.bit._DASZ0
#define DMACB2_TYPE dmacb2.bitc._TYPE
#define DMACB2_MOD dmacb2.bitc._MOD
#define DMACB2_WS dmacb2.bitc._WS
#define DMACB2_DSS dmacb2.bitc._DSS
#define DMACB2_SASZ dmacb2.bitc._SASZ
#define DMACB2_DASZ dmacb2.bitc._DASZ
__IO_EXTERN DMACA3STR dmaca3;  
#define DMACA3 dmaca3.lword
#define DMACA3_DENB dmaca3.bit._DENB
#define DMACA3_PAUS dmaca3.bit._PAUS
#define DMACA3_STRG dmaca3.bit._STRG
#define DMACA3_IS4 dmaca3.bit._IS4
#define DMACA3_IS3 dmaca3.bit._IS3
#define DMACA3_IS2 dmaca3.bit._IS2
#define DMACA3_IS1 dmaca3.bit._IS1
#define DMACA3_IS0 dmaca3.bit._IS0
#define DMACA3_EIS3 dmaca3.bit._EIS3
#define DMACA3_EIS2 dmaca3.bit._EIS2
#define DMACA3_EIS1 dmaca3.bit._EIS1
#define DMACA3_EIS0 dmaca3.bit._EIS0
#define DMACA3_BLK3 dmaca3.bit._BLK3
#define DMACA3_BLK2 dmaca3.bit._BLK2
#define DMACA3_BLK1 dmaca3.bit._BLK1
#define DMACA3_BLK0 dmaca3.bit._BLK0
#define DMACA3_DTCF dmaca3.bit._DTCF
#define DMACA3_DTCE dmaca3.bit._DTCE
#define DMACA3_DTCD dmaca3.bit._DTCD
#define DMACA3_DTCC dmaca3.bit._DTCC
#define DMACA3_DTCB dmaca3.bit._DTCB
#define DMACA3_DTCA dmaca3.bit._DTCA
#define DMACA3_DTC9 dmaca3.bit._DTC9
#define DMACA3_DTC8 dmaca3.bit._DTC8
#define DMACA3_DTC7 dmaca3.bit._DTC7
#define DMACA3_DTC6 dmaca3.bit._DTC6
#define DMACA3_DTC5 dmaca3.bit._DTC5
#define DMACA3_DTC4 dmaca3.bit._DTC4
#define DMACA3_DTC3 dmaca3.bit._DTC3
#define DMACA3_DTC2 dmaca3.bit._DTC2
#define DMACA3_DTC1 dmaca3.bit._DTC1
#define DMACA3_DTC0 dmaca3.bit._DTC0
#define DMACA3_IS dmaca3.bitc._IS
#define DMACA3_EIS dmaca3.bitc._EIS
#define DMACA3_BLK dmaca3.bitc._BLK
#define DMACA3_DTC dmaca3.bitc._DTC
__IO_EXTERN DMACB3STR dmacb3;  
#define DMACB3 dmacb3.lword
#define DMACB3_TYPE1 dmacb3.bit._TYPE1
#define DMACB3_TYPE0 dmacb3.bit._TYPE0
#define DMACB3_MOD1 dmacb3.bit._MOD1
#define DMACB3_MOD0 dmacb3.bit._MOD0
#define DMACB3_WS1 dmacb3.bit._WS1
#define DMACB3_WS0 dmacb3.bit._WS0
#define DMACB3_SADM dmacb3.bit._SADM
#define DMACB3_DADM dmacb3.bit._DADM
#define DMACB3_DTCR dmacb3.bit._DTCR
#define DMACB3_SADR dmacb3.bit._SADR
#define DMACB3_DADR dmacb3.bit._DADR
#define DMACB3_ERIE dmacb3.bit._ERIE
#define DMACB3_EDIE dmacb3.bit._EDIE
#define DMACB3_DSS2 dmacb3.bit._DSS2
#define DMACB3_DSS1 dmacb3.bit._DSS1
#define DMACB3_DSS0 dmacb3.bit._DSS0
#define DMACB3_SASZ7 dmacb3.bit._SASZ7
#define DMACB3_SASZ6 dmacb3.bit._SASZ6
#define DMACB3_SASZ5 dmacb3.bit._SASZ5
#define DMACB3_SASZ4 dmacb3.bit._SASZ4
#define DMACB3_SASZ3 dmacb3.bit._SASZ3
#define DMACB3_SASZ2 dmacb3.bit._SASZ2
#define DMACB3_SASZ1 dmacb3.bit._SASZ1
#define DMACB3_SASZ0 dmacb3.bit._SASZ0
#define DMACB3_DASZ7 dmacb3.bit._DASZ7
#define DMACB3_DASZ6 dmacb3.bit._DASZ6
#define DMACB3_DASZ5 dmacb3.bit._DASZ5
#define DMACB3_DASZ4 dmacb3.bit._DASZ4
#define DMACB3_DASZ3 dmacb3.bit._DASZ3
#define DMACB3_DASZ2 dmacb3.bit._DASZ2
#define DMACB3_DASZ1 dmacb3.bit._DASZ1
#define DMACB3_DASZ0 dmacb3.bit._DASZ0
#define DMACB3_TYPE dmacb3.bitc._TYPE
#define DMACB3_MOD dmacb3.bitc._MOD
#define DMACB3_WS dmacb3.bitc._WS
#define DMACB3_DSS dmacb3.bitc._DSS
#define DMACB3_SASZ dmacb3.bitc._SASZ
#define DMACB3_DASZ dmacb3.bitc._DASZ
__IO_EXTERN DMACA4STR dmaca4;  
#define DMACA4 dmaca4.lword
#define DMACA4_DENB dmaca4.bit._DENB
#define DMACA4_PAUS dmaca4.bit._PAUS
#define DMACA4_STRG dmaca4.bit._STRG
#define DMACA4_IS4 dmaca4.bit._IS4
#define DMACA4_IS3 dmaca4.bit._IS3
#define DMACA4_IS2 dmaca4.bit._IS2
#define DMACA4_IS1 dmaca4.bit._IS1
#define DMACA4_IS0 dmaca4.bit._IS0
#define DMACA4_EIS3 dmaca4.bit._EIS3
#define DMACA4_EIS2 dmaca4.bit._EIS2
#define DMACA4_EIS1 dmaca4.bit._EIS1
#define DMACA4_EIS0 dmaca4.bit._EIS0
#define DMACA4_BLK3 dmaca4.bit._BLK3
#define DMACA4_BLK2 dmaca4.bit._BLK2
#define DMACA4_BLK1 dmaca4.bit._BLK1
#define DMACA4_BLK0 dmaca4.bit._BLK0
#define DMACA4_DTCF dmaca4.bit._DTCF
#define DMACA4_DTCE dmaca4.bit._DTCE
#define DMACA4_DTCD dmaca4.bit._DTCD
#define DMACA4_DTCC dmaca4.bit._DTCC
#define DMACA4_DTCB dmaca4.bit._DTCB
#define DMACA4_DTCA dmaca4.bit._DTCA
#define DMACA4_DTC9 dmaca4.bit._DTC9
#define DMACA4_DTC8 dmaca4.bit._DTC8
#define DMACA4_DTC7 dmaca4.bit._DTC7
#define DMACA4_DTC6 dmaca4.bit._DTC6
#define DMACA4_DTC5 dmaca4.bit._DTC5
#define DMACA4_DTC4 dmaca4.bit._DTC4
#define DMACA4_DTC3 dmaca4.bit._DTC3
#define DMACA4_DTC2 dmaca4.bit._DTC2
#define DMACA4_DTC1 dmaca4.bit._DTC1
#define DMACA4_DTC0 dmaca4.bit._DTC0
#define DMACA4_IS dmaca4.bitc._IS
#define DMACA4_EIS dmaca4.bitc._EIS
#define DMACA4_BLK dmaca4.bitc._BLK
#define DMACA4_DTC dmaca4.bitc._DTC
__IO_EXTERN DMACB4STR dmacb4;  
#define DMACB4 dmacb4.lword
#define DMACB4_TYPE1 dmacb4.bit._TYPE1
#define DMACB4_TYPE0 dmacb4.bit._TYPE0
#define DMACB4_MOD1 dmacb4.bit._MOD1
#define DMACB4_MOD0 dmacb4.bit._MOD0
#define DMACB4_WS1 dmacb4.bit._WS1
#define DMACB4_WS0 dmacb4.bit._WS0
#define DMACB4_SADM dmacb4.bit._SADM
#define DMACB4_DADM dmacb4.bit._DADM
#define DMACB4_DTCR dmacb4.bit._DTCR
#define DMACB4_SADR dmacb4.bit._SADR
#define DMACB4_DADR dmacb4.bit._DADR
#define DMACB4_ERIE dmacb4.bit._ERIE
#define DMACB4_EDIE dmacb4.bit._EDIE
#define DMACB4_DSS2 dmacb4.bit._DSS2
#define DMACB4_DSS1 dmacb4.bit._DSS1
#define DMACB4_DSS0 dmacb4.bit._DSS0
#define DMACB4_SASZ7 dmacb4.bit._SASZ7
#define DMACB4_SASZ6 dmacb4.bit._SASZ6
#define DMACB4_SASZ5 dmacb4.bit._SASZ5
#define DMACB4_SASZ4 dmacb4.bit._SASZ4
#define DMACB4_SASZ3 dmacb4.bit._SASZ3
#define DMACB4_SASZ2 dmacb4.bit._SASZ2
#define DMACB4_SASZ1 dmacb4.bit._SASZ1
#define DMACB4_SASZ0 dmacb4.bit._SASZ0
#define DMACB4_DASZ7 dmacb4.bit._DASZ7
#define DMACB4_DASZ6 dmacb4.bit._DASZ6
#define DMACB4_DASZ5 dmacb4.bit._DASZ5
#define DMACB4_DASZ4 dmacb4.bit._DASZ4
#define DMACB4_DASZ3 dmacb4.bit._DASZ3
#define DMACB4_DASZ2 dmacb4.bit._DASZ2
#define DMACB4_DASZ1 dmacb4.bit._DASZ1
#define DMACB4_DASZ0 dmacb4.bit._DASZ0
#define DMACB4_TYPE dmacb4.bitc._TYPE
#define DMACB4_MOD dmacb4.bitc._MOD
#define DMACB4_WS dmacb4.bitc._WS
#define DMACB4_DSS dmacb4.bitc._DSS
#define DMACB4_SASZ dmacb4.bitc._SASZ
#define DMACB4_DASZ dmacb4.bitc._DASZ
__IO_EXTERN DMACRSTR dmacr;  
#define DMACR dmacr.byte
#define DMACR_DMAE dmacr.bit._DMAE
#define DMACR_PM01 dmacr.bit._PM01
#define DMACR_DMAH3 dmacr.bit._DMAH3
#define DMACR_DMAH2 dmacr.bit._DMAH2
#define DMACR_DMAH1 dmacr.bit._DMAH1
#define DMACR_DMAH0 dmacr.bit._DMAH0
#define DMACR_DMAH dmacr.bitc._DMAH
__IO_EXTERN ICS45STR ics45;   /* Input Capture 4-7 */
#define ICS45 ics45.byte
#define ICS45_ICP5 ics45.bit._ICP5
#define ICS45_ICP4 ics45.bit._ICP4
#define ICS45_ICE5 ics45.bit._ICE5
#define ICS45_ICE4 ics45.bit._ICE4
#define ICS45_EG51 ics45.bit._EG51
#define ICS45_EG50 ics45.bit._EG50
#define ICS45_EG41 ics45.bit._EG41
#define ICS45_EG40 ics45.bit._EG40
#define ICS45_EG5 ics45.bitc._EG5
#define ICS45_EG4 ics45.bitc._EG4
__IO_EXTERN ICS67STR ics67;  
#define ICS67 ics67.byte
#define ICS67_ICP7 ics67.bit._ICP7
#define ICS67_ICP6 ics67.bit._ICP6
#define ICS67_ICE7 ics67.bit._ICE7
#define ICS67_ICE6 ics67.bit._ICE6
#define ICS67_EG71 ics67.bit._EG71
#define ICS67_EG70 ics67.bit._EG70
#define ICS67_EG61 ics67.bit._EG61
#define ICS67_EG60 ics67.bit._EG60
#define ICS67_EG7 ics67.bitc._EG7
#define ICS67_EG6 ics67.bitc._EG6
__IO_EXTERN IPCP4STR ipcp4;  
#define IPCP4 ipcp4.word
#define IPCP4_CP15 ipcp4.bit._CP15
#define IPCP4_CP14 ipcp4.bit._CP14
#define IPCP4_CP13 ipcp4.bit._CP13
#define IPCP4_CP12 ipcp4.bit._CP12
#define IPCP4_CP11 ipcp4.bit._CP11
#define IPCP4_CP10 ipcp4.bit._CP10
#define IPCP4_CP9 ipcp4.bit._CP9
#define IPCP4_CP8 ipcp4.bit._CP8
#define IPCP4_CP7 ipcp4.bit._CP7
#define IPCP4_CP6 ipcp4.bit._CP6
#define IPCP4_CP5 ipcp4.bit._CP5
#define IPCP4_CP4 ipcp4.bit._CP4
#define IPCP4_CP3 ipcp4.bit._CP3
#define IPCP4_CP2 ipcp4.bit._CP2
#define IPCP4_CP1 ipcp4.bit._CP1
#define IPCP4_CP0 ipcp4.bit._CP0
__IO_EXTERN IPCP5STR ipcp5;  
#define IPCP5 ipcp5.word
#define IPCP5_CP15 ipcp5.bit._CP15
#define IPCP5_CP14 ipcp5.bit._CP14
#define IPCP5_CP13 ipcp5.bit._CP13
#define IPCP5_CP12 ipcp5.bit._CP12
#define IPCP5_CP11 ipcp5.bit._CP11
#define IPCP5_CP10 ipcp5.bit._CP10
#define IPCP5_CP9 ipcp5.bit._CP9
#define IPCP5_CP8 ipcp5.bit._CP8
#define IPCP5_CP7 ipcp5.bit._CP7
#define IPCP5_CP6 ipcp5.bit._CP6
#define IPCP5_CP5 ipcp5.bit._CP5
#define IPCP5_CP4 ipcp5.bit._CP4
#define IPCP5_CP3 ipcp5.bit._CP3
#define IPCP5_CP2 ipcp5.bit._CP2
#define IPCP5_CP1 ipcp5.bit._CP1
#define IPCP5_CP0 ipcp5.bit._CP0
__IO_EXTERN IPCP6STR ipcp6;  
#define IPCP6 ipcp6.word
#define IPCP6_CP15 ipcp6.bit._CP15
#define IPCP6_CP14 ipcp6.bit._CP14
#define IPCP6_CP13 ipcp6.bit._CP13
#define IPCP6_CP12 ipcp6.bit._CP12
#define IPCP6_CP11 ipcp6.bit._CP11
#define IPCP6_CP10 ipcp6.bit._CP10
#define IPCP6_CP9 ipcp6.bit._CP9
#define IPCP6_CP8 ipcp6.bit._CP8
#define IPCP6_CP7 ipcp6.bit._CP7
#define IPCP6_CP6 ipcp6.bit._CP6
#define IPCP6_CP5 ipcp6.bit._CP5
#define IPCP6_CP4 ipcp6.bit._CP4
#define IPCP6_CP3 ipcp6.bit._CP3
#define IPCP6_CP2 ipcp6.bit._CP2
#define IPCP6_CP1 ipcp6.bit._CP1
#define IPCP6_CP0 ipcp6.bit._CP0
__IO_EXTERN IPCP7STR ipcp7;  
#define IPCP7 ipcp7.word
#define IPCP7_CP15 ipcp7.bit._CP15
#define IPCP7_CP14 ipcp7.bit._CP14
#define IPCP7_CP13 ipcp7.bit._CP13
#define IPCP7_CP12 ipcp7.bit._CP12
#define IPCP7_CP11 ipcp7.bit._CP11
#define IPCP7_CP10 ipcp7.bit._CP10
#define IPCP7_CP9 ipcp7.bit._CP9
#define IPCP7_CP8 ipcp7.bit._CP8
#define IPCP7_CP7 ipcp7.bit._CP7
#define IPCP7_CP6 ipcp7.bit._CP6
#define IPCP7_CP5 ipcp7.bit._CP5
#define IPCP7_CP4 ipcp7.bit._CP4
#define IPCP7_CP3 ipcp7.bit._CP3
#define IPCP7_CP2 ipcp7.bit._CP2
#define IPCP7_CP1 ipcp7.bit._CP1
#define IPCP7_CP0 ipcp7.bit._CP0
__IO_EXTERN OCS45STR ocs45;   /* Output Compare 4-7 */
#define OCS45 ocs45.word
#define OCS45_CMOD ocs45.bit._CMOD
#define OCS45_OTD5 ocs45.bit._OTD5
#define OCS45_OTD4 ocs45.bit._OTD4
#define OCS45_ICP5 ocs45.bit._ICP5
#define OCS45_ICP4 ocs45.bit._ICP4
#define OCS45_ICE5 ocs45.bit._ICE5
#define OCS45_ICE4 ocs45.bit._ICE4
#define OCS45_CST5 ocs45.bit._CST5
#define OCS45_CST4 ocs45.bit._CST4
__IO_EXTERN OCS67STR ocs67;  
#define OCS67 ocs67.word
#define OCS67_CMOD ocs67.bit._CMOD
#define OCS67_OTD7 ocs67.bit._OTD7
#define OCS67_OTD6 ocs67.bit._OTD6
#define OCS67_ICP7 ocs67.bit._ICP7
#define OCS67_ICP6 ocs67.bit._ICP6
#define OCS67_ICE7 ocs67.bit._ICE7
#define OCS67_ICE6 ocs67.bit._ICE6
#define OCS67_CST7 ocs67.bit._CST7
#define OCS67_CST6 ocs67.bit._CST6
__IO_EXTERN OCCP4STR occp4;  
#define OCCP4 occp4.word
#define OCCP4_C15 occp4.bit._C15
#define OCCP4_C14 occp4.bit._C14
#define OCCP4_C13 occp4.bit._C13
#define OCCP4_C12 occp4.bit._C12
#define OCCP4_C11 occp4.bit._C11
#define OCCP4_C10 occp4.bit._C10
#define OCCP4_C9 occp4.bit._C9
#define OCCP4_C8 occp4.bit._C8
#define OCCP4_C7 occp4.bit._C7
#define OCCP4_C6 occp4.bit._C6
#define OCCP4_C5 occp4.bit._C5
#define OCCP4_C4 occp4.bit._C4
#define OCCP4_C3 occp4.bit._C3
#define OCCP4_C2 occp4.bit._C2
#define OCCP4_C1 occp4.bit._C1
#define OCCP4_C0 occp4.bit._C0
__IO_EXTERN OCCP5STR occp5;  
#define OCCP5 occp5.word
#define OCCP5_C15 occp5.bit._C15
#define OCCP5_C14 occp5.bit._C14
#define OCCP5_C13 occp5.bit._C13
#define OCCP5_C12 occp5.bit._C12
#define OCCP5_C11 occp5.bit._C11
#define OCCP5_C10 occp5.bit._C10
#define OCCP5_C9 occp5.bit._C9
#define OCCP5_C8 occp5.bit._C8
#define OCCP5_C7 occp5.bit._C7
#define OCCP5_C6 occp5.bit._C6
#define OCCP5_C5 occp5.bit._C5
#define OCCP5_C4 occp5.bit._C4
#define OCCP5_C3 occp5.bit._C3
#define OCCP5_C2 occp5.bit._C2
#define OCCP5_C1 occp5.bit._C1
#define OCCP5_C0 occp5.bit._C0
__IO_EXTERN OCCP6STR occp6;  
#define OCCP6 occp6.word
#define OCCP6_C15 occp6.bit._C15
#define OCCP6_C14 occp6.bit._C14
#define OCCP6_C13 occp6.bit._C13
#define OCCP6_C12 occp6.bit._C12
#define OCCP6_C11 occp6.bit._C11
#define OCCP6_C10 occp6.bit._C10
#define OCCP6_C9 occp6.bit._C9
#define OCCP6_C8 occp6.bit._C8
#define OCCP6_C7 occp6.bit._C7
#define OCCP6_C6 occp6.bit._C6
#define OCCP6_C5 occp6.bit._C5
#define OCCP6_C4 occp6.bit._C4
#define OCCP6_C3 occp6.bit._C3
#define OCCP6_C2 occp6.bit._C2
#define OCCP6_C1 occp6.bit._C1
#define OCCP6_C0 occp6.bit._C0
__IO_EXTERN OCCP7STR occp7;  
#define OCCP7 occp7.word
#define OCCP7_C15 occp7.bit._C15
#define OCCP7_C14 occp7.bit._C14
#define OCCP7_C13 occp7.bit._C13
#define OCCP7_C12 occp7.bit._C12
#define OCCP7_C11 occp7.bit._C11
#define OCCP7_C10 occp7.bit._C10
#define OCCP7_C9 occp7.bit._C9
#define OCCP7_C8 occp7.bit._C8
#define OCCP7_C7 occp7.bit._C7
#define OCCP7_C6 occp7.bit._C6
#define OCCP7_C5 occp7.bit._C5
#define OCCP7_C4 occp7.bit._C4
#define OCCP7_C3 occp7.bit._C3
#define OCCP7_C2 occp7.bit._C2
#define OCCP7_C1 occp7.bit._C1
#define OCCP7_C0 occp7.bit._C0
__IO_EXTERN TCDT4STR tcdt4;   /* Free Running Timer4 */
#define TCDT4 tcdt4.word
#define TCDT4_T15 tcdt4.bit._T15
#define TCDT4_T14 tcdt4.bit._T14
#define TCDT4_T13 tcdt4.bit._T13
#define TCDT4_T12 tcdt4.bit._T12
#define TCDT4_T11 tcdt4.bit._T11
#define TCDT4_T10 tcdt4.bit._T10
#define TCDT4_T9 tcdt4.bit._T9
#define TCDT4_T8 tcdt4.bit._T8
#define TCDT4_T7 tcdt4.bit._T7
#define TCDT4_T6 tcdt4.bit._T6
#define TCDT4_T5 tcdt4.bit._T5
#define TCDT4_T4 tcdt4.bit._T4
#define TCDT4_T3 tcdt4.bit._T3
#define TCDT4_T2 tcdt4.bit._T2
#define TCDT4_T1 tcdt4.bit._T1
#define TCDT4_T0 tcdt4.bit._T0
__IO_EXTERN TCCS4STR tccs4;  
#define TCCS4 tccs4.byte
#define TCCS4_ECLK tccs4.bit._ECLK
#define TCCS4_IVF tccs4.bit._IVF
#define TCCS4_IVFE tccs4.bit._IVFE
#define TCCS4_STOP tccs4.bit._STOP
#define TCCS4_MODE tccs4.bit._MODE
#define TCCS4_CLR tccs4.bit._CLR
#define TCCS4_CLK1 tccs4.bit._CLK1
#define TCCS4_CLK0 tccs4.bit._CLK0
#define TCCS4_CLK tccs4.bitc._CLK
__IO_EXTERN TCDT5STR tcdt5;   /* Free Running Timer5 */
#define TCDT5 tcdt5.word
#define TCDT5_T15 tcdt5.bit._T15
#define TCDT5_T14 tcdt5.bit._T14
#define TCDT5_T13 tcdt5.bit._T13
#define TCDT5_T12 tcdt5.bit._T12
#define TCDT5_T11 tcdt5.bit._T11
#define TCDT5_T10 tcdt5.bit._T10
#define TCDT5_T9 tcdt5.bit._T9
#define TCDT5_T8 tcdt5.bit._T8
#define TCDT5_T7 tcdt5.bit._T7
#define TCDT5_T6 tcdt5.bit._T6
#define TCDT5_T5 tcdt5.bit._T5
#define TCDT5_T4 tcdt5.bit._T4
#define TCDT5_T3 tcdt5.bit._T3
#define TCDT5_T2 tcdt5.bit._T2
#define TCDT5_T1 tcdt5.bit._T1
#define TCDT5_T0 tcdt5.bit._T0
__IO_EXTERN TCCS5STR tccs5;  
#define TCCS5 tccs5.byte
#define TCCS5_ECLK tccs5.bit._ECLK
#define TCCS5_IVF tccs5.bit._IVF
#define TCCS5_IVFE tccs5.bit._IVFE
#define TCCS5_STOP tccs5.bit._STOP
#define TCCS5_MODE tccs5.bit._MODE
#define TCCS5_CLR tccs5.bit._CLR
#define TCCS5_CLK1 tccs5.bit._CLK1
#define TCCS5_CLK0 tccs5.bit._CLK0
#define TCCS5_CLK tccs5.bitc._CLK
__IO_EXTERN TCDT6STR tcdt6;   /* Free Running Timer6 */
#define TCDT6 tcdt6.word
#define TCDT6_T15 tcdt6.bit._T15
#define TCDT6_T14 tcdt6.bit._T14
#define TCDT6_T13 tcdt6.bit._T13
#define TCDT6_T12 tcdt6.bit._T12
#define TCDT6_T11 tcdt6.bit._T11
#define TCDT6_T10 tcdt6.bit._T10
#define TCDT6_T9 tcdt6.bit._T9
#define TCDT6_T8 tcdt6.bit._T8
#define TCDT6_T7 tcdt6.bit._T7
#define TCDT6_T6 tcdt6.bit._T6
#define TCDT6_T5 tcdt6.bit._T5
#define TCDT6_T4 tcdt6.bit._T4
#define TCDT6_T3 tcdt6.bit._T3
#define TCDT6_T2 tcdt6.bit._T2
#define TCDT6_T1 tcdt6.bit._T1
#define TCDT6_T0 tcdt6.bit._T0
__IO_EXTERN TCCS6STR tccs6;  
#define TCCS6 tccs6.byte
#define TCCS6_ECLK tccs6.bit._ECLK
#define TCCS6_IVF tccs6.bit._IVF
#define TCCS6_IVFE tccs6.bit._IVFE
#define TCCS6_STOP tccs6.bit._STOP
#define TCCS6_MODE tccs6.bit._MODE
#define TCCS6_CLR tccs6.bit._CLR
#define TCCS6_CLK1 tccs6.bit._CLK1
#define TCCS6_CLK0 tccs6.bit._CLK0
#define TCCS6_CLK tccs6.bitc._CLK
__IO_EXTERN TCDT7STR tcdt7;   /* Free Running Timer7 */
#define TCDT7 tcdt7.word
#define TCDT7_T15 tcdt7.bit._T15
#define TCDT7_T14 tcdt7.bit._T14
#define TCDT7_T13 tcdt7.bit._T13
#define TCDT7_T12 tcdt7.bit._T12
#define TCDT7_T11 tcdt7.bit._T11
#define TCDT7_T10 tcdt7.bit._T10
#define TCDT7_T9 tcdt7.bit._T9
#define TCDT7_T8 tcdt7.bit._T8
#define TCDT7_T7 tcdt7.bit._T7
#define TCDT7_T6 tcdt7.bit._T6
#define TCDT7_T5 tcdt7.bit._T5
#define TCDT7_T4 tcdt7.bit._T4
#define TCDT7_T3 tcdt7.bit._T3
#define TCDT7_T2 tcdt7.bit._T2
#define TCDT7_T1 tcdt7.bit._T1
#define TCDT7_T0 tcdt7.bit._T0
__IO_EXTERN TCCS7STR tccs7;  
#define TCCS7 tccs7.byte
#define TCCS7_ECLK tccs7.bit._ECLK
#define TCCS7_IVF tccs7.bit._IVF
#define TCCS7_IVFE tccs7.bit._IVFE
#define TCCS7_STOP tccs7.bit._STOP
#define TCCS7_MODE tccs7.bit._MODE
#define TCCS7_CLR tccs7.bit._CLR
#define TCCS7_CLK1 tccs7.bit._CLK1
#define TCCS7_CLK0 tccs7.bit._CLK0
#define TCCS7_CLK tccs7.bitc._CLK
__IO_EXTERN ROMSSTR roms;   /* ROM Select Register */
#define ROMS roms.word
#define ROMS_D15 roms.bit._D15
#define ROMS_D14 roms.bit._D14
#define ROMS_D13 roms.bit._D13
#define ROMS_D12 roms.bit._D12
#define ROMS_D11 roms.bit._D11
#define ROMS_D10 roms.bit._D10
#define ROMS_D9 roms.bit._D9
#define ROMS_D8 roms.bit._D8
#define ROMS_D7 roms.bit._D7
#define ROMS_D6 roms.bit._D6
#define ROMS_D5 roms.bit._D5
#define ROMS_D4 roms.bit._D4
#define ROMS_D3 roms.bit._D3
#define ROMS_D2 roms.bit._D2
#define ROMS_D1 roms.bit._D1
#define ROMS_D0 roms.bit._D0
__IO_EXTERN IO_LWORD bsd0;   /* Bit Search Module */
#define BSD0 bsd0
__IO_EXTERN IO_LWORD bsd1;  
#define BSD1 bsd1
__IO_EXTERN IO_LWORD bsdc;  
#define BSDC bsdc
__IO_EXTERN IO_LWORD bsrr;  
#define BSRR bsrr
__IO_EXTERN ICR00STR icr00;   /* Interrupt Control Unit */
#define ICR00 icr00.byte
#define ICR00_ICR4 icr00.bit._ICR4
#define ICR00_ICR3 icr00.bit._ICR3
#define ICR00_ICR2 icr00.bit._ICR2
#define ICR00_ICR1 icr00.bit._ICR1
#define ICR00_ICR0 icr00.bit._ICR0
__IO_EXTERN ICR01STR icr01;  
#define ICR01 icr01.byte
#define ICR01_ICR4 icr01.bit._ICR4
#define ICR01_ICR3 icr01.bit._ICR3
#define ICR01_ICR2 icr01.bit._ICR2
#define ICR01_ICR1 icr01.bit._ICR1
#define ICR01_ICR0 icr01.bit._ICR0
__IO_EXTERN ICR02STR icr02;  
#define ICR02 icr02.byte
#define ICR02_ICR4 icr02.bit._ICR4
#define ICR02_ICR3 icr02.bit._ICR3
#define ICR02_ICR2 icr02.bit._ICR2
#define ICR02_ICR1 icr02.bit._ICR1
#define ICR02_ICR0 icr02.bit._ICR0
__IO_EXTERN ICR03STR icr03;  
#define ICR03 icr03.byte
#define ICR03_ICR4 icr03.bit._ICR4
#define ICR03_ICR3 icr03.bit._ICR3
#define ICR03_ICR2 icr03.bit._ICR2
#define ICR03_ICR1 icr03.bit._ICR1
#define ICR03_ICR0 icr03.bit._ICR0
__IO_EXTERN ICR04STR icr04;  
#define ICR04 icr04.byte
#define ICR04_ICR4 icr04.bit._ICR4
#define ICR04_ICR3 icr04.bit._ICR3
#define ICR04_ICR2 icr04.bit._ICR2
#define ICR04_ICR1 icr04.bit._ICR1
#define ICR04_ICR0 icr04.bit._ICR0
__IO_EXTERN ICR05STR icr05;  
#define ICR05 icr05.byte
#define ICR05_ICR4 icr05.bit._ICR4
#define ICR05_ICR3 icr05.bit._ICR3
#define ICR05_ICR2 icr05.bit._ICR2
#define ICR05_ICR1 icr05.bit._ICR1
#define ICR05_ICR0 icr05.bit._ICR0
__IO_EXTERN ICR06STR icr06;  
#define ICR06 icr06.byte
#define ICR06_ICR4 icr06.bit._ICR4
#define ICR06_ICR3 icr06.bit._ICR3
#define ICR06_ICR2 icr06.bit._ICR2
#define ICR06_ICR1 icr06.bit._ICR1
#define ICR06_ICR0 icr06.bit._ICR0
__IO_EXTERN ICR07STR icr07;  
#define ICR07 icr07.byte
#define ICR07_ICR4 icr07.bit._ICR4
#define ICR07_ICR3 icr07.bit._ICR3
#define ICR07_ICR2 icr07.bit._ICR2
#define ICR07_ICR1 icr07.bit._ICR1
#define ICR07_ICR0 icr07.bit._ICR0
__IO_EXTERN ICR08STR icr08;  
#define ICR08 icr08.byte
#define ICR08_ICR4 icr08.bit._ICR4
#define ICR08_ICR3 icr08.bit._ICR3
#define ICR08_ICR2 icr08.bit._ICR2
#define ICR08_ICR1 icr08.bit._ICR1
#define ICR08_ICR0 icr08.bit._ICR0
__IO_EXTERN ICR09STR icr09;  
#define ICR09 icr09.byte
#define ICR09_ICR4 icr09.bit._ICR4
#define ICR09_ICR3 icr09.bit._ICR3
#define ICR09_ICR2 icr09.bit._ICR2
#define ICR09_ICR1 icr09.bit._ICR1
#define ICR09_ICR0 icr09.bit._ICR0
__IO_EXTERN ICR10STR icr10;  
#define ICR10 icr10.byte
#define ICR10_ICR4 icr10.bit._ICR4
#define ICR10_ICR3 icr10.bit._ICR3
#define ICR10_ICR2 icr10.bit._ICR2
#define ICR10_ICR1 icr10.bit._ICR1
#define ICR10_ICR0 icr10.bit._ICR0
__IO_EXTERN ICR11STR icr11;  
#define ICR11 icr11.byte
#define ICR11_ICR4 icr11.bit._ICR4
#define ICR11_ICR3 icr11.bit._ICR3
#define ICR11_ICR2 icr11.bit._ICR2
#define ICR11_ICR1 icr11.bit._ICR1
#define ICR11_ICR0 icr11.bit._ICR0
__IO_EXTERN ICR12STR icr12;  
#define ICR12 icr12.byte
#define ICR12_ICR4 icr12.bit._ICR4
#define ICR12_ICR3 icr12.bit._ICR3
#define ICR12_ICR2 icr12.bit._ICR2
#define ICR12_ICR1 icr12.bit._ICR1
#define ICR12_ICR0 icr12.bit._ICR0
__IO_EXTERN ICR13STR icr13;  
#define ICR13 icr13.byte
#define ICR13_ICR4 icr13.bit._ICR4
#define ICR13_ICR3 icr13.bit._ICR3
#define ICR13_ICR2 icr13.bit._ICR2
#define ICR13_ICR1 icr13.bit._ICR1
#define ICR13_ICR0 icr13.bit._ICR0
__IO_EXTERN ICR14STR icr14;  
#define ICR14 icr14.byte
#define ICR14_ICR4 icr14.bit._ICR4
#define ICR14_ICR3 icr14.bit._ICR3
#define ICR14_ICR2 icr14.bit._ICR2
#define ICR14_ICR1 icr14.bit._ICR1
#define ICR14_ICR0 icr14.bit._ICR0
__IO_EXTERN ICR15STR icr15;  
#define ICR15 icr15.byte
#define ICR15_ICR4 icr15.bit._ICR4
#define ICR15_ICR3 icr15.bit._ICR3
#define ICR15_ICR2 icr15.bit._ICR2
#define ICR15_ICR1 icr15.bit._ICR1
#define ICR15_ICR0 icr15.bit._ICR0
__IO_EXTERN ICR16STR icr16;  
#define ICR16 icr16.byte
#define ICR16_ICR4 icr16.bit._ICR4
#define ICR16_ICR3 icr16.bit._ICR3
#define ICR16_ICR2 icr16.bit._ICR2
#define ICR16_ICR1 icr16.bit._ICR1
#define ICR16_ICR0 icr16.bit._ICR0
__IO_EXTERN ICR17STR icr17;  
#define ICR17 icr17.byte
#define ICR17_ICR4 icr17.bit._ICR4
#define ICR17_ICR3 icr17.bit._ICR3
#define ICR17_ICR2 icr17.bit._ICR2
#define ICR17_ICR1 icr17.bit._ICR1
#define ICR17_ICR0 icr17.bit._ICR0
__IO_EXTERN ICR18STR icr18;  
#define ICR18 icr18.byte
#define ICR18_ICR4 icr18.bit._ICR4
#define ICR18_ICR3 icr18.bit._ICR3
#define ICR18_ICR2 icr18.bit._ICR2
#define ICR18_ICR1 icr18.bit._ICR1
#define ICR18_ICR0 icr18.bit._ICR0
__IO_EXTERN ICR19STR icr19;  
#define ICR19 icr19.byte
#define ICR19_ICR4 icr19.bit._ICR4
#define ICR19_ICR3 icr19.bit._ICR3
#define ICR19_ICR2 icr19.bit._ICR2
#define ICR19_ICR1 icr19.bit._ICR1
#define ICR19_ICR0 icr19.bit._ICR0
__IO_EXTERN ICR20STR icr20;  
#define ICR20 icr20.byte
#define ICR20_ICR4 icr20.bit._ICR4
#define ICR20_ICR3 icr20.bit._ICR3
#define ICR20_ICR2 icr20.bit._ICR2
#define ICR20_ICR1 icr20.bit._ICR1
#define ICR20_ICR0 icr20.bit._ICR0
__IO_EXTERN ICR21STR icr21;  
#define ICR21 icr21.byte
#define ICR21_ICR4 icr21.bit._ICR4
#define ICR21_ICR3 icr21.bit._ICR3
#define ICR21_ICR2 icr21.bit._ICR2
#define ICR21_ICR1 icr21.bit._ICR1
#define ICR21_ICR0 icr21.bit._ICR0
__IO_EXTERN ICR22STR icr22;  
#define ICR22 icr22.byte
#define ICR22_ICR4 icr22.bit._ICR4
#define ICR22_ICR3 icr22.bit._ICR3
#define ICR22_ICR2 icr22.bit._ICR2
#define ICR22_ICR1 icr22.bit._ICR1
#define ICR22_ICR0 icr22.bit._ICR0
__IO_EXTERN ICR23STR icr23;  
#define ICR23 icr23.byte
#define ICR23_ICR4 icr23.bit._ICR4
#define ICR23_ICR3 icr23.bit._ICR3
#define ICR23_ICR2 icr23.bit._ICR2
#define ICR23_ICR1 icr23.bit._ICR1
#define ICR23_ICR0 icr23.bit._ICR0
__IO_EXTERN ICR24STR icr24;  
#define ICR24 icr24.byte
#define ICR24_ICR4 icr24.bit._ICR4
#define ICR24_ICR3 icr24.bit._ICR3
#define ICR24_ICR2 icr24.bit._ICR2
#define ICR24_ICR1 icr24.bit._ICR1
#define ICR24_ICR0 icr24.bit._ICR0
__IO_EXTERN ICR25STR icr25;  
#define ICR25 icr25.byte
#define ICR25_ICR4 icr25.bit._ICR4
#define ICR25_ICR3 icr25.bit._ICR3
#define ICR25_ICR2 icr25.bit._ICR2
#define ICR25_ICR1 icr25.bit._ICR1
#define ICR25_ICR0 icr25.bit._ICR0
__IO_EXTERN ICR26STR icr26;  
#define ICR26 icr26.byte
#define ICR26_ICR4 icr26.bit._ICR4
#define ICR26_ICR3 icr26.bit._ICR3
#define ICR26_ICR2 icr26.bit._ICR2
#define ICR26_ICR1 icr26.bit._ICR1
#define ICR26_ICR0 icr26.bit._ICR0
__IO_EXTERN ICR27STR icr27;  
#define ICR27 icr27.byte
#define ICR27_ICR4 icr27.bit._ICR4
#define ICR27_ICR3 icr27.bit._ICR3
#define ICR27_ICR2 icr27.bit._ICR2
#define ICR27_ICR1 icr27.bit._ICR1
#define ICR27_ICR0 icr27.bit._ICR0
__IO_EXTERN ICR28STR icr28;  
#define ICR28 icr28.byte
#define ICR28_ICR4 icr28.bit._ICR4
#define ICR28_ICR3 icr28.bit._ICR3
#define ICR28_ICR2 icr28.bit._ICR2
#define ICR28_ICR1 icr28.bit._ICR1
#define ICR28_ICR0 icr28.bit._ICR0
__IO_EXTERN ICR29STR icr29;  
#define ICR29 icr29.byte
#define ICR29_ICR4 icr29.bit._ICR4
#define ICR29_ICR3 icr29.bit._ICR3
#define ICR29_ICR2 icr29.bit._ICR2
#define ICR29_ICR1 icr29.bit._ICR1
#define ICR29_ICR0 icr29.bit._ICR0
__IO_EXTERN ICR30STR icr30;  
#define ICR30 icr30.byte
#define ICR30_ICR4 icr30.bit._ICR4
#define ICR30_ICR3 icr30.bit._ICR3
#define ICR30_ICR2 icr30.bit._ICR2
#define ICR30_ICR1 icr30.bit._ICR1
#define ICR30_ICR0 icr30.bit._ICR0
__IO_EXTERN ICR31STR icr31;  
#define ICR31 icr31.byte
#define ICR31_ICR4 icr31.bit._ICR4
#define ICR31_ICR3 icr31.bit._ICR3
#define ICR31_ICR2 icr31.bit._ICR2
#define ICR31_ICR1 icr31.bit._ICR1
#define ICR31_ICR0 icr31.bit._ICR0
__IO_EXTERN ICR32STR icr32;  
#define ICR32 icr32.byte
#define ICR32_ICR4 icr32.bit._ICR4
#define ICR32_ICR3 icr32.bit._ICR3
#define ICR32_ICR2 icr32.bit._ICR2
#define ICR32_ICR1 icr32.bit._ICR1
#define ICR32_ICR0 icr32.bit._ICR0
__IO_EXTERN ICR33STR icr33;  
#define ICR33 icr33.byte
#define ICR33_ICR4 icr33.bit._ICR4
#define ICR33_ICR3 icr33.bit._ICR3
#define ICR33_ICR2 icr33.bit._ICR2
#define ICR33_ICR1 icr33.bit._ICR1
#define ICR33_ICR0 icr33.bit._ICR0
__IO_EXTERN ICR34STR icr34;  
#define ICR34 icr34.byte
#define ICR34_ICR4 icr34.bit._ICR4
#define ICR34_ICR3 icr34.bit._ICR3
#define ICR34_ICR2 icr34.bit._ICR2
#define ICR34_ICR1 icr34.bit._ICR1
#define ICR34_ICR0 icr34.bit._ICR0
__IO_EXTERN ICR35STR icr35;  
#define ICR35 icr35.byte
#define ICR35_ICR4 icr35.bit._ICR4
#define ICR35_ICR3 icr35.bit._ICR3
#define ICR35_ICR2 icr35.bit._ICR2
#define ICR35_ICR1 icr35.bit._ICR1
#define ICR35_ICR0 icr35.bit._ICR0
__IO_EXTERN ICR36STR icr36;  
#define ICR36 icr36.byte
#define ICR36_ICR4 icr36.bit._ICR4
#define ICR36_ICR3 icr36.bit._ICR3
#define ICR36_ICR2 icr36.bit._ICR2
#define ICR36_ICR1 icr36.bit._ICR1
#define ICR36_ICR0 icr36.bit._ICR0
__IO_EXTERN ICR37STR icr37;  
#define ICR37 icr37.byte
#define ICR37_ICR4 icr37.bit._ICR4
#define ICR37_ICR3 icr37.bit._ICR3
#define ICR37_ICR2 icr37.bit._ICR2
#define ICR37_ICR1 icr37.bit._ICR1
#define ICR37_ICR0 icr37.bit._ICR0
__IO_EXTERN ICR38STR icr38;  
#define ICR38 icr38.byte
#define ICR38_ICR4 icr38.bit._ICR4
#define ICR38_ICR3 icr38.bit._ICR3
#define ICR38_ICR2 icr38.bit._ICR2
#define ICR38_ICR1 icr38.bit._ICR1
#define ICR38_ICR0 icr38.bit._ICR0
__IO_EXTERN ICR39STR icr39;  
#define ICR39 icr39.byte
#define ICR39_ICR4 icr39.bit._ICR4
#define ICR39_ICR3 icr39.bit._ICR3
#define ICR39_ICR2 icr39.bit._ICR2
#define ICR39_ICR1 icr39.bit._ICR1
#define ICR39_ICR0 icr39.bit._ICR0
__IO_EXTERN ICR40STR icr40;  
#define ICR40 icr40.byte
#define ICR40_ICR4 icr40.bit._ICR4
#define ICR40_ICR3 icr40.bit._ICR3
#define ICR40_ICR2 icr40.bit._ICR2
#define ICR40_ICR1 icr40.bit._ICR1
#define ICR40_ICR0 icr40.bit._ICR0
__IO_EXTERN ICR41STR icr41;  
#define ICR41 icr41.byte
#define ICR41_ICR4 icr41.bit._ICR4
#define ICR41_ICR3 icr41.bit._ICR3
#define ICR41_ICR2 icr41.bit._ICR2
#define ICR41_ICR1 icr41.bit._ICR1
#define ICR41_ICR0 icr41.bit._ICR0
__IO_EXTERN ICR42STR icr42;  
#define ICR42 icr42.byte
#define ICR42_ICR4 icr42.bit._ICR4
#define ICR42_ICR3 icr42.bit._ICR3
#define ICR42_ICR2 icr42.bit._ICR2
#define ICR42_ICR1 icr42.bit._ICR1
#define ICR42_ICR0 icr42.bit._ICR0
__IO_EXTERN ICR43STR icr43;  
#define ICR43 icr43.byte
#define ICR43_ICR4 icr43.bit._ICR4
#define ICR43_ICR3 icr43.bit._ICR3
#define ICR43_ICR2 icr43.bit._ICR2
#define ICR43_ICR1 icr43.bit._ICR1
#define ICR43_ICR0 icr43.bit._ICR0
__IO_EXTERN ICR44STR icr44;  
#define ICR44 icr44.byte
#define ICR44_ICR4 icr44.bit._ICR4
#define ICR44_ICR3 icr44.bit._ICR3
#define ICR44_ICR2 icr44.bit._ICR2
#define ICR44_ICR1 icr44.bit._ICR1
#define ICR44_ICR0 icr44.bit._ICR0
__IO_EXTERN ICR45STR icr45;  
#define ICR45 icr45.byte
#define ICR45_ICR4 icr45.bit._ICR4
#define ICR45_ICR3 icr45.bit._ICR3
#define ICR45_ICR2 icr45.bit._ICR2
#define ICR45_ICR1 icr45.bit._ICR1
#define ICR45_ICR0 icr45.bit._ICR0
__IO_EXTERN ICR46STR icr46;  
#define ICR46 icr46.byte
#define ICR46_ICR4 icr46.bit._ICR4
#define ICR46_ICR3 icr46.bit._ICR3
#define ICR46_ICR2 icr46.bit._ICR2
#define ICR46_ICR1 icr46.bit._ICR1
#define ICR46_ICR0 icr46.bit._ICR0
__IO_EXTERN ICR47STR icr47;  
#define ICR47 icr47.byte
#define ICR47_ICR4 icr47.bit._ICR4
#define ICR47_ICR3 icr47.bit._ICR3
#define ICR47_ICR2 icr47.bit._ICR2
#define ICR47_ICR1 icr47.bit._ICR1
#define ICR47_ICR0 icr47.bit._ICR0
__IO_EXTERN ICR48STR icr48;  
#define ICR48 icr48.byte
#define ICR48_ICR4 icr48.bit._ICR4
#define ICR48_ICR3 icr48.bit._ICR3
#define ICR48_ICR2 icr48.bit._ICR2
#define ICR48_ICR1 icr48.bit._ICR1
#define ICR48_ICR0 icr48.bit._ICR0
__IO_EXTERN ICR49STR icr49;  
#define ICR49 icr49.byte
#define ICR49_ICR4 icr49.bit._ICR4
#define ICR49_ICR3 icr49.bit._ICR3
#define ICR49_ICR2 icr49.bit._ICR2
#define ICR49_ICR1 icr49.bit._ICR1
#define ICR49_ICR0 icr49.bit._ICR0
__IO_EXTERN ICR50STR icr50;  
#define ICR50 icr50.byte
#define ICR50_ICR4 icr50.bit._ICR4
#define ICR50_ICR3 icr50.bit._ICR3
#define ICR50_ICR2 icr50.bit._ICR2
#define ICR50_ICR1 icr50.bit._ICR1
#define ICR50_ICR0 icr50.bit._ICR0
__IO_EXTERN ICR51STR icr51;  
#define ICR51 icr51.byte
#define ICR51_ICR4 icr51.bit._ICR4
#define ICR51_ICR3 icr51.bit._ICR3
#define ICR51_ICR2 icr51.bit._ICR2
#define ICR51_ICR1 icr51.bit._ICR1
#define ICR51_ICR0 icr51.bit._ICR0
__IO_EXTERN ICR52STR icr52;  
#define ICR52 icr52.byte
#define ICR52_ICR4 icr52.bit._ICR4
#define ICR52_ICR3 icr52.bit._ICR3
#define ICR52_ICR2 icr52.bit._ICR2
#define ICR52_ICR1 icr52.bit._ICR1
#define ICR52_ICR0 icr52.bit._ICR0
__IO_EXTERN ICR53STR icr53;  
#define ICR53 icr53.byte
#define ICR53_ICR4 icr53.bit._ICR4
#define ICR53_ICR3 icr53.bit._ICR3
#define ICR53_ICR2 icr53.bit._ICR2
#define ICR53_ICR1 icr53.bit._ICR1
#define ICR53_ICR0 icr53.bit._ICR0
__IO_EXTERN ICR54STR icr54;  
#define ICR54 icr54.byte
#define ICR54_ICR4 icr54.bit._ICR4
#define ICR54_ICR3 icr54.bit._ICR3
#define ICR54_ICR2 icr54.bit._ICR2
#define ICR54_ICR1 icr54.bit._ICR1
#define ICR54_ICR0 icr54.bit._ICR0
__IO_EXTERN ICR55STR icr55;  
#define ICR55 icr55.byte
#define ICR55_ICR4 icr55.bit._ICR4
#define ICR55_ICR3 icr55.bit._ICR3
#define ICR55_ICR2 icr55.bit._ICR2
#define ICR55_ICR1 icr55.bit._ICR1
#define ICR55_ICR0 icr55.bit._ICR0
__IO_EXTERN ICR56STR icr56;  
#define ICR56 icr56.byte
#define ICR56_ICR4 icr56.bit._ICR4
#define ICR56_ICR3 icr56.bit._ICR3
#define ICR56_ICR2 icr56.bit._ICR2
#define ICR56_ICR1 icr56.bit._ICR1
#define ICR56_ICR0 icr56.bit._ICR0
__IO_EXTERN ICR57STR icr57;  
#define ICR57 icr57.byte
#define ICR57_ICR4 icr57.bit._ICR4
#define ICR57_ICR3 icr57.bit._ICR3
#define ICR57_ICR2 icr57.bit._ICR2
#define ICR57_ICR1 icr57.bit._ICR1
#define ICR57_ICR0 icr57.bit._ICR0
__IO_EXTERN ICR58STR icr58;  
#define ICR58 icr58.byte
#define ICR58_ICR4 icr58.bit._ICR4
#define ICR58_ICR3 icr58.bit._ICR3
#define ICR58_ICR2 icr58.bit._ICR2
#define ICR58_ICR1 icr58.bit._ICR1
#define ICR58_ICR0 icr58.bit._ICR0
__IO_EXTERN ICR59STR icr59;  
#define ICR59 icr59.byte
#define ICR59_ICR4 icr59.bit._ICR4
#define ICR59_ICR3 icr59.bit._ICR3
#define ICR59_ICR2 icr59.bit._ICR2
#define ICR59_ICR1 icr59.bit._ICR1
#define ICR59_ICR0 icr59.bit._ICR0
__IO_EXTERN ICR60STR icr60;  
#define ICR60 icr60.byte
#define ICR60_ICR4 icr60.bit._ICR4
#define ICR60_ICR3 icr60.bit._ICR3
#define ICR60_ICR2 icr60.bit._ICR2
#define ICR60_ICR1 icr60.bit._ICR1
#define ICR60_ICR0 icr60.bit._ICR0
__IO_EXTERN ICR61STR icr61;  
#define ICR61 icr61.byte
#define ICR61_ICR4 icr61.bit._ICR4
#define ICR61_ICR3 icr61.bit._ICR3
#define ICR61_ICR2 icr61.bit._ICR2
#define ICR61_ICR1 icr61.bit._ICR1
#define ICR61_ICR0 icr61.bit._ICR0
__IO_EXTERN ICR62STR icr62;  
#define ICR62 icr62.byte
#define ICR62_ICR4 icr62.bit._ICR4
#define ICR62_ICR3 icr62.bit._ICR3
#define ICR62_ICR2 icr62.bit._ICR2
#define ICR62_ICR1 icr62.bit._ICR1
#define ICR62_ICR0 icr62.bit._ICR0
__IO_EXTERN ICR63STR icr63;  
#define ICR63 icr63.byte
#define ICR63_ICR4 icr63.bit._ICR4
#define ICR63_ICR3 icr63.bit._ICR3
#define ICR63_ICR2 icr63.bit._ICR2
#define ICR63_ICR1 icr63.bit._ICR1
#define ICR63_ICR0 icr63.bit._ICR0
__IO_EXTERN RSRRSTR rsrr;   /* Clock Control Unit */
#define RSRR rsrr.byte
#define RSRR_INIT rsrr.bit._INIT
#define RSRR_HSTB rsrr.bit._HSTB
#define RSRR_WDOG rsrr.bit._WDOG
#define RSRR_ERST rsrr.bit._ERST
#define RSRR_SRST rsrr.bit._SRST
#define RSRR_LINIT rsrr.bit._LINIT
#define RSRR_WT1 rsrr.bit._WT1
#define RSRR_WT0 rsrr.bit._WT0
#define RSRR_WT rsrr.bitc._WT
__IO_EXTERN STCRSTR stcr;  
#define STCR stcr.byte
#define STCR_STOP stcr.bit._STOP
#define STCR_SLEEP stcr.bit._SLEEP
#define STCR_HIZ stcr.bit._HIZ
#define STCR_SRST stcr.bit._SRST
#define STCR_OS1 stcr.bit._OS1
#define STCR_OS0 stcr.bit._OS0
#define STCR_OSCD2 stcr.bit._OSCD2
#define STCR_OSCD1 stcr.bit._OSCD1
#define STCR_OS stcr.bitc._OS
#define STCR_OSCD stcr.bitc._OSCD
__IO_EXTERN TBCRSTR tbcr;  
#define TBCR tbcr.byte
#define TBCR_TBIF tbcr.bit._TBIF
#define TBCR_TBIE tbcr.bit._TBIE
#define TBCR_TBC2 tbcr.bit._TBC2
#define TBCR_TBC1 tbcr.bit._TBC1
#define TBCR_TBC0 tbcr.bit._TBC0
#define TBCR_SYNCR tbcr.bit._SYNCR
#define TBCR_SYNCS tbcr.bit._SYNCS
#define TBCR_TBC tbcr.bitc._TBC
__IO_EXTERN CTBRSTR ctbr;  
#define CTBR ctbr.byte
#define CTBR_D7 ctbr.bit._D7
#define CTBR_D6 ctbr.bit._D6
#define CTBR_D5 ctbr.bit._D5
#define CTBR_D4 ctbr.bit._D4
#define CTBR_D3 ctbr.bit._D3
#define CTBR_D2 ctbr.bit._D2
#define CTBR_D1 ctbr.bit._D1
#define CTBR_D0 ctbr.bit._D0
__IO_EXTERN CLKRSTR clkr;  
#define CLKR clkr.byte
#define CLKR_SCKEN clkr.bit._SCKEN
#define CLKR_PLL1EN clkr.bit._PLL1EN
#define CLKR_CLKS1 clkr.bit._CLKS1
#define CLKR_CLKS0 clkr.bit._CLKS0
#define CLKR_CLKS clkr.bitc._CLKS
__IO_EXTERN WPRSTR wpr;  
#define WPR wpr.byte
#define WPR_D7 wpr.bit._D7
#define WPR_D6 wpr.bit._D6
#define WPR_D5 wpr.bit._D5
#define WPR_D4 wpr.bit._D4
#define WPR_D3 wpr.bit._D3
#define WPR_D2 wpr.bit._D2
#define WPR_D1 wpr.bit._D1
#define WPR_D0 wpr.bit._D0
__IO_EXTERN DIVR0STR divr0;  
#define DIVR0 divr0.byte
#define DIVR0_B3 divr0.bit._B3
#define DIVR0_B2 divr0.bit._B2
#define DIVR0_B1 divr0.bit._B1
#define DIVR0_B0 divr0.bit._B0
#define DIVR0_P3 divr0.bit._P3
#define DIVR0_P2 divr0.bit._P2
#define DIVR0_P1 divr0.bit._P1
#define DIVR0_P0 divr0.bit._P0
#define DIVR0_B divr0.bitc._B
#define DIVR0_P divr0.bitc._P
__IO_EXTERN DIVR1STR divr1;  
#define DIVR1 divr1.byte
#define DIVR1_T3 divr1.bit._T3
#define DIVR1_T2 divr1.bit._T2
#define DIVR1_T1 divr1.bit._T1
#define DIVR1_T0 divr1.bit._T0
#define DIVR1_T divr1.bitc._T
__IO_EXTERN PLLDIVMSTR plldivm;   /* PLL - Clock Gear Unit: */
#define PLLDIVM plldivm.byte
#define PLLDIVM_DVM3 plldivm.bit._DVM3
#define PLLDIVM_DVM2 plldivm.bit._DVM2
#define PLLDIVM_DVM1 plldivm.bit._DVM1
#define PLLDIVM_DVM0 plldivm.bit._DVM0
#define PLLDIVM_DVM plldivm.bitc._DVM
__IO_EXTERN PLLDIVNSTR plldivn;  
#define PLLDIVN plldivn.byte
#define PLLDIVN_DVN5 plldivn.bit._DVN5
#define PLLDIVN_DVN4 plldivn.bit._DVN4
#define PLLDIVN_DVN3 plldivn.bit._DVN3
#define PLLDIVN_DVN2 plldivn.bit._DVN2
#define PLLDIVN_DVN1 plldivn.bit._DVN1
#define PLLDIVN_DVN0 plldivn.bit._DVN0
#define PLLDIVN_DVN plldivn.bitc._DVN
__IO_EXTERN PLLDIVGSTR plldivg;  
#define PLLDIVG plldivg.byte
#define PLLDIVG_DVG3 plldivg.bit._DVG3
#define PLLDIVG_DVG2 plldivg.bit._DVG2
#define PLLDIVG_DVG1 plldivg.bit._DVG1
#define PLLDIVG_DVG0 plldivg.bit._DVG0
#define PLLDIVG_DVG plldivg.bitc._DVG
__IO_EXTERN PLLMULGSTR pllmulg;  
#define PLLMULG pllmulg.byte
#define PLLMULG_MLG7 pllmulg.bit._MLG7
#define PLLMULG_MLG6 pllmulg.bit._MLG6
#define PLLMULG_MLG5 pllmulg.bit._MLG5
#define PLLMULG_MLG4 pllmulg.bit._MLG4
#define PLLMULG_MLG3 pllmulg.bit._MLG3
#define PLLMULG_MLG2 pllmulg.bit._MLG2
#define PLLMULG_MLG1 pllmulg.bit._MLG1
#define PLLMULG_MLG0 pllmulg.bit._MLG0
#define PLLMULG_MLG pllmulg.bitc._MLG
__IO_EXTERN PLLCTRLSTR pllctrl;  
#define PLLCTRL pllctrl.byte
#define PLLCTRL_IEDN pllctrl.bit._IEDN
#define PLLCTRL_GRDN pllctrl.bit._GRDN
#define PLLCTRL_IEUP pllctrl.bit._IEUP
#define PLLCTRL_GRUP pllctrl.bit._GRUP
__IO_EXTERN OSCC1STR oscc1;   /* Main/Sub Oscillator Control */
#define OSCC1 oscc1.byte
#define OSCC1_FCI oscc1.bit._FCI
#define OSCC1_RFBEN oscc1.bit._RFBEN
#define OSCC1_OSCR oscc1.bit._OSCR
__IO_EXTERN OSCS1STR oscs1;  
#define OSCS1 oscs1.byte
#define OSCS1_OSCS7 oscs1.bit._OSCS7
#define OSCS1_OSCS6 oscs1.bit._OSCS6
#define OSCS1_OSCS5 oscs1.bit._OSCS5
#define OSCS1_OSCS4 oscs1.bit._OSCS4
#define OSCS1_OSCS3 oscs1.bit._OSCS3
#define OSCS1_OSCS2 oscs1.bit._OSCS2
#define OSCS1_OSCS1 oscs1.bit._OSCS1
#define OSCS1_OSCS0 oscs1.bit._OSCS0
__IO_EXTERN OSCC2STR oscc2;  
#define OSCC2 oscc2.byte
#define OSCC2_FCI oscc2.bit._FCI
#define OSCC2_RFBEN oscc2.bit._RFBEN
#define OSCC2_OSCR oscc2.bit._OSCR
__IO_EXTERN OSCS2STR oscs2;  
#define OSCS2 oscs2.byte
#define OSCS2_OSCS7 oscs2.bit._OSCS7
#define OSCS2_OSCS6 oscs2.bit._OSCS6
#define OSCS2_OSCS5 oscs2.bit._OSCS5
#define OSCS2_OSCS4 oscs2.bit._OSCS4
#define OSCS2_OSCS3 oscs2.bit._OSCS3
#define OSCS2_OSCS2 oscs2.bit._OSCS2
#define OSCS2_OSCS1 oscs2.bit._OSCS1
#define OSCS2_OSCS0 oscs2.bit._OSCS0
__IO_EXTERN PORTENSTR porten;   /* Port Input Enable Control */
#define PORTEN porten.byte
#define PORTEN_CPORTEN porten.bit._CPORTEN
#define PORTEN_GPORTEN porten.bit._GPORTEN
__IO_EXTERN WTCERSTR wtcer;   /* Real Time Clock (Watch Timer) */
#define WTCER wtcer.byte
#define WTCER_INTE4 wtcer.bit._INTE4
#define WTCER_INT4 wtcer.bit._INT4
__IO_EXTERN WTCRSTR wtcr;  
#define WTCR wtcr.word
#define WTCR_INTE3 wtcr.bit._INTE3
#define WTCR_INT3 wtcr.bit._INT3
#define WTCR_INTE2 wtcr.bit._INTE2
#define WTCR_INT2 wtcr.bit._INT2
#define WTCR_INTE1 wtcr.bit._INTE1
#define WTCR_INT1 wtcr.bit._INT1
#define WTCR_INTE0 wtcr.bit._INTE0
#define WTCR_INT0 wtcr.bit._INT0
#define WTCR_RUN wtcr.bit._RUN
#define WTCR_UPDT wtcr.bit._UPDT
#define WTCR_ST wtcr.bit._ST
__IO_EXTERN WTBRSTR wtbr;  
#define WTBR wtbr.lword
#define WTBR_D20 wtbr.bit._D20
#define WTBR_D19 wtbr.bit._D19
#define WTBR_D18 wtbr.bit._D18
#define WTBR_D17 wtbr.bit._D17
#define WTBR_D16 wtbr.bit._D16
#define WTBR_D15 wtbr.bit._D15
#define WTBR_D14 wtbr.bit._D14
#define WTBR_D13 wtbr.bit._D13
#define WTBR_D12 wtbr.bit._D12
#define WTBR_D11 wtbr.bit._D11
#define WTBR_D10 wtbr.bit._D10
#define WTBR_D9 wtbr.bit._D9
#define WTBR_D8 wtbr.bit._D8
#define WTBR_D7 wtbr.bit._D7
#define WTBR_D6 wtbr.bit._D6
#define WTBR_D5 wtbr.bit._D5
#define WTBR_D4 wtbr.bit._D4
#define WTBR_D3 wtbr.bit._D3
#define WTBR_D2 wtbr.bit._D2
#define WTBR_D1 wtbr.bit._D1
#define WTBR_D0 wtbr.bit._D0
__IO_EXTERN WTHRSTR wthr;  
#define WTHR wthr.byte
#define WTHR_H4 wthr.bit._H4
#define WTHR_H3 wthr.bit._H3
#define WTHR_H2 wthr.bit._H2
#define WTHR_H1 wthr.bit._H1
#define WTHR_H0 wthr.bit._H0
__IO_EXTERN WTMRSTR wtmr;  
#define WTMR wtmr.byte
#define WTMR_M5 wtmr.bit._M5
#define WTMR_M4 wtmr.bit._M4
#define WTMR_M3 wtmr.bit._M3
#define WTMR_M2 wtmr.bit._M2
#define WTMR_M1 wtmr.bit._M1
#define WTMR_M0 wtmr.bit._M0
__IO_EXTERN WTSRSTR wtsr;  
#define WTSR wtsr.byte
#define WTSR_S5 wtsr.bit._S5
#define WTSR_S4 wtsr.bit._S4
#define WTSR_S3 wtsr.bit._S3
#define WTSR_S2 wtsr.bit._S2
#define WTSR_S1 wtsr.bit._S1
#define WTSR_S0 wtsr.bit._S0
__IO_EXTERN IO_BYTE csvtr;   /* Clock-Supervisor / Selecor / Monitor */
#define CSVTR csvtr
__IO_EXTERN CSVCRSTR csvcr;  
#define CSVCR csvcr.byte
#define CSVCR_SCKS csvcr.bit._SCKS
#define CSVCR_MM csvcr.bit._MM
#define CSVCR_SM csvcr.bit._SM
#define CSVCR_RCE csvcr.bit._RCE
#define CSVCR_MSVE csvcr.bit._MSVE
#define CSVCR_SSVE csvcr.bit._SSVE
#define CSVCR_SRST csvcr.bit._SRST
#define CSVCR_OUTE csvcr.bit._OUTE
__IO_EXTERN CSCFGSTR cscfg;  
#define CSCFG cscfg.byte
#define CSCFG_EDSUEN cscfg.bit._EDSUEN
#define CSCFG_PLLLOCK cscfg.bit._PLLLOCK
#define CSCFG_RCSEL cscfg.bit._RCSEL
#define CSCFG_MONCKI cscfg.bit._MONCKI
#define CSCFG_CSC3 cscfg.bit._CSC3
#define CSCFG_CSC2 cscfg.bit._CSC2
#define CSCFG_CSC1 cscfg.bit._CSC1
#define CSCFG_CSC0 cscfg.bit._CSC0
#define CSCFG_CSC cscfg.bitc._CSC
__IO_EXTERN CMCFGSTR cmcfg;  
#define CMCFG cmcfg.byte
#define CMCFG_CMPRE3 cmcfg.bit._CMPRE3
#define CMCFG_CMPRE2 cmcfg.bit._CMPRE2
#define CMCFG_CMPRE1 cmcfg.bit._CMPRE1
#define CMCFG_CMPRE0 cmcfg.bit._CMPRE0
#define CMCFG_CMSEL3 cmcfg.bit._CMSEL3
#define CMCFG_CMSEL2 cmcfg.bit._CMSEL2
#define CMCFG_CMSEL1 cmcfg.bit._CMSEL1
#define CMCFG_CMSEL0 cmcfg.bit._CMSEL0
#define CMCFG_CMPRE cmcfg.bitc._CMPRE
#define CMCFG_CMSEL cmcfg.bitc._CMSEL
__IO_EXTERN CUCRSTR cucr;   /* Calibration Unit of Sub Oszillation */
#define CUCR cucr.word
#define CUCR_STRT cucr.bit._STRT
#define CUCR_INT cucr.bit._INT
#define CUCR_INTEN cucr.bit._INTEN
__IO_EXTERN CUTDSTR cutd;  
#define CUTD cutd.word
#define CUTD_TDD15 cutd.bit._TDD15
#define CUTD_TDD14 cutd.bit._TDD14
#define CUTD_TDD13 cutd.bit._TDD13
#define CUTD_TDD12 cutd.bit._TDD12
#define CUTD_TDD11 cutd.bit._TDD11
#define CUTD_TDD10 cutd.bit._TDD10
#define CUTD_TDD9 cutd.bit._TDD9
#define CUTD_TDD8 cutd.bit._TDD8
#define CUTD_TDD7 cutd.bit._TDD7
#define CUTD_TDD6 cutd.bit._TDD6
#define CUTD_TDD5 cutd.bit._TDD5
#define CUTD_TDD4 cutd.bit._TDD4
#define CUTD_TDD3 cutd.bit._TDD3
#define CUTD_TDD2 cutd.bit._TDD2
#define CUTD_TDD1 cutd.bit._TDD1
#define CUTD_TDD0 cutd.bit._TDD0
__IO_EXTERN CUTR1STR cutr1;  
#define CUTR1 cutr1.word
#define CUTR1_TDR23 cutr1.bit._TDR23
#define CUTR1_TDR22 cutr1.bit._TDR22
#define CUTR1_TDR21 cutr1.bit._TDR21
#define CUTR1_TDR20 cutr1.bit._TDR20
#define CUTR1_TDR19 cutr1.bit._TDR19
#define CUTR1_TDR18 cutr1.bit._TDR18
#define CUTR1_TDR17 cutr1.bit._TDR17
#define CUTR1_TDR16 cutr1.bit._TDR16
__IO_EXTERN CUTR2STR cutr2;  
#define CUTR2 cutr2.word
#define CUTR2_TDR15 cutr2.bit._TDR15
#define CUTR2_TDR14 cutr2.bit._TDR14
#define CUTR2_TDR13 cutr2.bit._TDR13
#define CUTR2_TDR12 cutr2.bit._TDR12
#define CUTR2_TDR11 cutr2.bit._TDR11
#define CUTR2_TDR10 cutr2.bit._TDR10
#define CUTR2_TDR9 cutr2.bit._TDR9
#define CUTR2_TDR8 cutr2.bit._TDR8
#define CUTR2_TDR7 cutr2.bit._TDR7
#define CUTR2_TDR6 cutr2.bit._TDR6
#define CUTR2_TDR5 cutr2.bit._TDR5
#define CUTR2_TDR4 cutr2.bit._TDR4
#define CUTR2_TDR3 cutr2.bit._TDR3
#define CUTR2_TDR2 cutr2.bit._TDR2
#define CUTR2_TDR1 cutr2.bit._TDR1
#define CUTR2_TDR0 cutr2.bit._TDR0
__IO_EXTERN CMPRSTR cmpr;   /* Clock Modulator */
#define CMPR cmpr.word
#define CMPR_MP13 cmpr.bit._MP13
#define CMPR_MP12 cmpr.bit._MP12
#define CMPR_MP11 cmpr.bit._MP11
#define CMPR_MP10 cmpr.bit._MP10
#define CMPR_MP9 cmpr.bit._MP9
#define CMPR_MP8 cmpr.bit._MP8
#define CMPR_MP7 cmpr.bit._MP7
#define CMPR_MP6 cmpr.bit._MP6
#define CMPR_MP5 cmpr.bit._MP5
#define CMPR_MP4 cmpr.bit._MP4
#define CMPR_MP3 cmpr.bit._MP3
#define CMPR_MP2 cmpr.bit._MP2
#define CMPR_MP1 cmpr.bit._MP1
#define CMPR_MP0 cmpr.bit._MP0
__IO_EXTERN CMCRSTR cmcr;  
#define CMCR cmcr.byte
#define CMCR_FMODRUN cmcr.bit._FMODRUN
#define CMCR_FMOD cmcr.bit._FMOD
#define CMCR_PDX cmcr.bit._PDX
__IO_EXTERN IO_WORD cmt1;  
#define CMT1 cmt1
__IO_EXTERN IO_WORD cmt2;  
#define CMT2 cmt2
__IO_EXTERN CANPRESTR canpre;   /* CAN clock control */
#define CANPRE canpre.byte
#define CANPRE_CPCKS1 canpre.bit._CPCKS1
#define CANPRE_CPCKS0 canpre.bit._CPCKS0
#define CANPRE_DVC3 canpre.bit._DVC3
#define CANPRE_DVC2 canpre.bit._DVC2
#define CANPRE_DVC1 canpre.bit._DVC1
#define CANPRE_DVC0 canpre.bit._DVC0
#define CANPRE_CPCKS canpre.bitc._CPCKS
#define CANPRE_DVC canpre.bitc._DVC
__IO_EXTERN CANCKDSTR canckd;  
#define CANCKD canckd.byte
#define CANCKD_CANCKD5 canckd.bit._CANCKD5
#define CANCKD_CANCKD4 canckd.bit._CANCKD4
#define CANCKD_CANCKD3 canckd.bit._CANCKD3
#define CANCKD_CANCKD2 canckd.bit._CANCKD2
#define CANCKD_CANCKD1 canckd.bit._CANCKD1
#define CANCKD_CANCKD0 canckd.bit._CANCKD0
__IO_EXTERN LVSELSTR lvsel;   /* LV Detection / Hardware-Watchdog */
#define LVSEL lvsel.byte
#define LVSEL_LVESEL3 lvsel.bit._LVESEL3
#define LVSEL_LVESEL2 lvsel.bit._LVESEL2
#define LVSEL_LVESEL1 lvsel.bit._LVESEL1
#define LVSEL_LVESEL0 lvsel.bit._LVESEL0
#define LVSEL_LVISEL3 lvsel.bit._LVISEL3
#define LVSEL_LVISEL2 lvsel.bit._LVISEL2
#define LVSEL_LVISEL1 lvsel.bit._LVISEL1
#define LVSEL_LVISEL0 lvsel.bit._LVISEL0
#define LVSEL_LVESEL lvsel.bitc._LVESEL
#define LVSEL_LVISEL lvsel.bitc._LVISEL
__IO_EXTERN LVDETSTR lvdet;  
#define LVDET lvdet.byte
#define LVDET_LVSEL lvdet.bit._LVSEL
#define LVDET_LVEPD lvdet.bit._LVEPD
#define LVDET_LVIPD lvdet.bit._LVIPD
#define LVDET_LVREN lvdet.bit._LVREN
#define LVDET_LVIEN lvdet.bit._LVIEN
#define LVDET_LVIRQ lvdet.bit._LVIRQ
__IO_EXTERN HWWDESTR hwwde;  
#define HWWDE hwwde.byte
#define HWWDE_ED1 hwwde.bit._ED1
#define HWWDE_ED0 hwwde.bit._ED0
#define HWWDE_ED hwwde.bitc._ED
__IO_EXTERN HWWDSTR hwwd;  
#define HWWD hwwd.byte
#define HWWD_CL hwwd.bit._CL
#define HWWD_CPUF hwwd.bit._CPUF
__IO_EXTERN OSCRHSTR oscrh;   /* Main-/Sub-Oscillatio Stabilization Timer */
#define OSCRH oscrh.byte
#define OSCRH_WIF oscrh.bit._WIF
#define OSCRH_WIE oscrh.bit._WIE
#define OSCRH_WEN oscrh.bit._WEN
#define OSCRH_WS1 oscrh.bit._WS1
#define OSCRH_WS0 oscrh.bit._WS0
#define OSCRH_WCL oscrh.bit._WCL
#define OSCRH_WS oscrh.bitc._WS
__IO_EXTERN IO_BYTE oscrl;  
#define OSCRL oscrl
__IO_EXTERN WPCRHSTR wpcrh;  
#define WPCRH wpcrh.byte
#define WPCRH_WIF wpcrh.bit._WIF
#define WPCRH_WIE wpcrh.bit._WIE
#define WPCRH_WEN wpcrh.bit._WEN
#define WPCRH_WS1 wpcrh.bit._WS1
#define WPCRH_WS0 wpcrh.bit._WS0
#define WPCRH_WCL wpcrh.bit._WCL
#define WPCRH_WS wpcrh.bitc._WS
__IO_EXTERN IO_BYTE wpcrl;  
#define WPCRL wpcrl
__IO_EXTERN OSCCRSTR osccr;   /* Main-/Sub-Oscillatio Standby Control */
#define OSCCR osccr.byte
#define OSCCR_OSCDS1 osccr.bit._OSCDS1
__IO_EXTERN REGSELSTR regsel;  
#define REGSEL regsel.byte
#define REGSEL_FLASHSEL regsel.bit._FLASHSEL
#define REGSEL_MAINSEL regsel.bit._MAINSEL
#define REGSEL_SUBSEL3 regsel.bit._SUBSEL3
#define REGSEL_SUBSEL2 regsel.bit._SUBSEL2
#define REGSEL_SUBSEL1 regsel.bit._SUBSEL1
#define REGSEL_SUBSEL0 regsel.bit._SUBSEL0
#define REGSEL_SUBSEL regsel.bitc._SUBSEL
__IO_EXTERN REGCTRSTR regctr;  
#define REGCTR regctr.byte
#define REGCTR_MSTBO regctr.bit._MSTBO
#define REGCTR_MAINKPEN regctr.bit._MAINKPEN
#define REGCTR_MAINDSBL regctr.bit._MAINDSBL
__IO_EXTERN MODRSTR modr;   /* Mode Register */
#define MODR modr.byte
#define MODR_ROMA modr.bit._ROMA
#define MODR_WTH1 modr.bit._WTH1
#define MODR_WTH0 modr.bit._WTH0
#define MODR_WTH modr.bitc._WTH
__IO_EXTERN PDRD14STR pdrd14;   /* R-bus Port Data Direct Read Register */
#define PDRD14 pdrd14.byte
#define PDRD14_D7 pdrd14.bit._D7
#define PDRD14_D6 pdrd14.bit._D6
#define PDRD14_D5 pdrd14.bit._D5
#define PDRD14_D4 pdrd14.bit._D4
#define PDRD14_D3 pdrd14.bit._D3
#define PDRD14_D2 pdrd14.bit._D2
#define PDRD14_D1 pdrd14.bit._D1
#define PDRD14_D0 pdrd14.bit._D0
__IO_EXTERN PDRD15STR pdrd15;  
#define PDRD15 pdrd15.byte
#define PDRD15_D7 pdrd15.bit._D7
#define PDRD15_D6 pdrd15.bit._D6
#define PDRD15_D5 pdrd15.bit._D5
#define PDRD15_D4 pdrd15.bit._D4
#define PDRD15_D3 pdrd15.bit._D3
#define PDRD15_D2 pdrd15.bit._D2
#define PDRD15_D1 pdrd15.bit._D1
#define PDRD15_D0 pdrd15.bit._D0
__IO_EXTERN PDRD16STR pdrd16;  
#define PDRD16 pdrd16.byte
#define PDRD16_D7 pdrd16.bit._D7
#define PDRD16_D6 pdrd16.bit._D6
#define PDRD16_D5 pdrd16.bit._D5
#define PDRD16_D4 pdrd16.bit._D4
#define PDRD16_D3 pdrd16.bit._D3
#define PDRD16_D2 pdrd16.bit._D2
#define PDRD16_D1 pdrd16.bit._D1
#define PDRD16_D0 pdrd16.bit._D0
__IO_EXTERN PDRD17STR pdrd17;  
#define PDRD17 pdrd17.byte
#define PDRD17_D7 pdrd17.bit._D7
#define PDRD17_D6 pdrd17.bit._D6
#define PDRD17_D5 pdrd17.bit._D5
#define PDRD17_D4 pdrd17.bit._D4
#define PDRD17_D3 pdrd17.bit._D3
#define PDRD17_D2 pdrd17.bit._D2
#define PDRD17_D1 pdrd17.bit._D1
#define PDRD17_D0 pdrd17.bit._D0
__IO_EXTERN PDRD18STR pdrd18;  
#define PDRD18 pdrd18.byte
#define PDRD18_D6 pdrd18.bit._D6
#define PDRD18_D2 pdrd18.bit._D2
__IO_EXTERN PDRD19STR pdrd19;  
#define PDRD19 pdrd19.byte
#define PDRD19_D6 pdrd19.bit._D6
#define PDRD19_D2 pdrd19.bit._D2
#define PDRD19_D1 pdrd19.bit._D1
#define PDRD19_D0 pdrd19.bit._D0
__IO_EXTERN PDRD20STR pdrd20;  
#define PDRD20 pdrd20.byte
#define PDRD20_D7 pdrd20.bit._D7
#define PDRD20_D6 pdrd20.bit._D6
#define PDRD20_D5 pdrd20.bit._D5
#define PDRD20_D4 pdrd20.bit._D4
#define PDRD20_D3 pdrd20.bit._D3
#define PDRD20_D2 pdrd20.bit._D2
#define PDRD20_D1 pdrd20.bit._D1
#define PDRD20_D0 pdrd20.bit._D0
__IO_EXTERN PDRD21STR pdrd21;  
#define PDRD21 pdrd21.byte
#define PDRD21_D7 pdrd21.bit._D7
#define PDRD21_D6 pdrd21.bit._D6
#define PDRD21_D5 pdrd21.bit._D5
#define PDRD21_D4 pdrd21.bit._D4
#define PDRD21_D3 pdrd21.bit._D3
#define PDRD21_D2 pdrd21.bit._D2
#define PDRD21_D1 pdrd21.bit._D1
#define PDRD21_D0 pdrd21.bit._D0
__IO_EXTERN PDRD22STR pdrd22;  
#define PDRD22 pdrd22.byte
#define PDRD22_D5 pdrd22.bit._D5
#define PDRD22_D4 pdrd22.bit._D4
#define PDRD22_D1 pdrd22.bit._D1
#define PDRD22_D0 pdrd22.bit._D0
__IO_EXTERN PDRD24STR pdrd24;  
#define PDRD24 pdrd24.byte
#define PDRD24_D7 pdrd24.bit._D7
#define PDRD24_D6 pdrd24.bit._D6
#define PDRD24_D5 pdrd24.bit._D5
#define PDRD24_D4 pdrd24.bit._D4
#define PDRD24_D3 pdrd24.bit._D3
#define PDRD24_D2 pdrd24.bit._D2
#define PDRD24_D1 pdrd24.bit._D1
#define PDRD24_D0 pdrd24.bit._D0
__IO_EXTERN PDRD26STR pdrd26;  
#define PDRD26 pdrd26.byte
#define PDRD26_D1 pdrd26.bit._D1
#define PDRD26_D0 pdrd26.bit._D0
__IO_EXTERN PDRD27STR pdrd27;  
#define PDRD27 pdrd27.byte
#define PDRD27_D7 pdrd27.bit._D7
#define PDRD27_D6 pdrd27.bit._D6
#define PDRD27_D5 pdrd27.bit._D5
#define PDRD27_D4 pdrd27.bit._D4
#define PDRD27_D3 pdrd27.bit._D3
#define PDRD27_D2 pdrd27.bit._D2
#define PDRD27_D1 pdrd27.bit._D1
#define PDRD27_D0 pdrd27.bit._D0
__IO_EXTERN PDRD28STR pdrd28;  
#define PDRD28 pdrd28.byte
#define PDRD28_D7 pdrd28.bit._D7
#define PDRD28_D6 pdrd28.bit._D6
#define PDRD28_D5 pdrd28.bit._D5
#define PDRD28_D4 pdrd28.bit._D4
#define PDRD28_D3 pdrd28.bit._D3
#define PDRD28_D2 pdrd28.bit._D2
#define PDRD28_D1 pdrd28.bit._D1
#define PDRD28_D0 pdrd28.bit._D0
__IO_EXTERN PDRD29STR pdrd29;  
#define PDRD29 pdrd29.byte
#define PDRD29_D7 pdrd29.bit._D7
#define PDRD29_D6 pdrd29.bit._D6
#define PDRD29_D5 pdrd29.bit._D5
#define PDRD29_D4 pdrd29.bit._D4
#define PDRD29_D3 pdrd29.bit._D3
#define PDRD29_D2 pdrd29.bit._D2
#define PDRD29_D1 pdrd29.bit._D1
#define PDRD29_D0 pdrd29.bit._D0
__IO_EXTERN DDR14STR ddr14;   /* R-bus Port Direction Register */
#define DDR14 ddr14.byte
#define DDR14_D7 ddr14.bit._D7
#define DDR14_D6 ddr14.bit._D6
#define DDR14_D5 ddr14.bit._D5
#define DDR14_D4 ddr14.bit._D4
#define DDR14_D3 ddr14.bit._D3
#define DDR14_D2 ddr14.bit._D2
#define DDR14_D1 ddr14.bit._D1
#define DDR14_D0 ddr14.bit._D0
__IO_EXTERN DDR15STR ddr15;  
#define DDR15 ddr15.byte
#define DDR15_D7 ddr15.bit._D7
#define DDR15_D6 ddr15.bit._D6
#define DDR15_D5 ddr15.bit._D5
#define DDR15_D4 ddr15.bit._D4
#define DDR15_D3 ddr15.bit._D3
#define DDR15_D2 ddr15.bit._D2
#define DDR15_D1 ddr15.bit._D1
#define DDR15_D0 ddr15.bit._D0
__IO_EXTERN DDR16STR ddr16;  
#define DDR16 ddr16.byte
#define DDR16_D7 ddr16.bit._D7
#define DDR16_D6 ddr16.bit._D6
#define DDR16_D5 ddr16.bit._D5
#define DDR16_D4 ddr16.bit._D4
#define DDR16_D3 ddr16.bit._D3
#define DDR16_D2 ddr16.bit._D2
#define DDR16_D1 ddr16.bit._D1
#define DDR16_D0 ddr16.bit._D0
__IO_EXTERN DDR17STR ddr17;  
#define DDR17 ddr17.byte
#define DDR17_D7 ddr17.bit._D7
#define DDR17_D6 ddr17.bit._D6
#define DDR17_D5 ddr17.bit._D5
#define DDR17_D4 ddr17.bit._D4
#define DDR17_D3 ddr17.bit._D3
#define DDR17_D2 ddr17.bit._D2
#define DDR17_D1 ddr17.bit._D1
#define DDR17_D0 ddr17.bit._D0
__IO_EXTERN DDR18STR ddr18;  
#define DDR18 ddr18.byte
#define DDR18_D6 ddr18.bit._D6
#define DDR18_D2 ddr18.bit._D2
__IO_EXTERN DDR19STR ddr19;  
#define DDR19 ddr19.byte
#define DDR19_D6 ddr19.bit._D6
#define DDR19_D2 ddr19.bit._D2
#define DDR19_D1 ddr19.bit._D1
#define DDR19_D0 ddr19.bit._D0
__IO_EXTERN DDR20STR ddr20;  
#define DDR20 ddr20.byte
#define DDR20_D7 ddr20.bit._D7
#define DDR20_D6 ddr20.bit._D6
#define DDR20_D5 ddr20.bit._D5
#define DDR20_D4 ddr20.bit._D4
#define DDR20_D3 ddr20.bit._D3
#define DDR20_D2 ddr20.bit._D2
#define DDR20_D1 ddr20.bit._D1
#define DDR20_D0 ddr20.bit._D0
__IO_EXTERN DDR21STR ddr21;  
#define DDR21 ddr21.byte
#define DDR21_D7 ddr21.bit._D7
#define DDR21_D6 ddr21.bit._D6
#define DDR21_D5 ddr21.bit._D5
#define DDR21_D4 ddr21.bit._D4
#define DDR21_D3 ddr21.bit._D3
#define DDR21_D2 ddr21.bit._D2
#define DDR21_D1 ddr21.bit._D1
#define DDR21_D0 ddr21.bit._D0
__IO_EXTERN DDR22STR ddr22;  
#define DDR22 ddr22.byte
#define DDR22_D5 ddr22.bit._D5
#define DDR22_D4 ddr22.bit._D4
#define DDR22_D1 ddr22.bit._D1
#define DDR22_D0 ddr22.bit._D0
__IO_EXTERN DDR24STR ddr24;  
#define DDR24 ddr24.byte
#define DDR24_D7 ddr24.bit._D7
#define DDR24_D6 ddr24.bit._D6
#define DDR24_D5 ddr24.bit._D5
#define DDR24_D4 ddr24.bit._D4
#define DDR24_D3 ddr24.bit._D3
#define DDR24_D2 ddr24.bit._D2
#define DDR24_D1 ddr24.bit._D1
#define DDR24_D0 ddr24.bit._D0
__IO_EXTERN DDR26STR ddr26;  
#define DDR26 ddr26.byte
#define DDR26_D1 ddr26.bit._D1
#define DDR26_D0 ddr26.bit._D0
__IO_EXTERN DDR27STR ddr27;  
#define DDR27 ddr27.byte
#define DDR27_D7 ddr27.bit._D7
#define DDR27_D6 ddr27.bit._D6
#define DDR27_D5 ddr27.bit._D5
#define DDR27_D4 ddr27.bit._D4
#define DDR27_D3 ddr27.bit._D3
#define DDR27_D2 ddr27.bit._D2
#define DDR27_D1 ddr27.bit._D1
#define DDR27_D0 ddr27.bit._D0
__IO_EXTERN DDR28STR ddr28;  
#define DDR28 ddr28.byte
#define DDR28_D7 ddr28.bit._D7
#define DDR28_D6 ddr28.bit._D6
#define DDR28_D5 ddr28.bit._D5
#define DDR28_D4 ddr28.bit._D4
#define DDR28_D3 ddr28.bit._D3
#define DDR28_D2 ddr28.bit._D2
#define DDR28_D1 ddr28.bit._D1
#define DDR28_D0 ddr28.bit._D0
__IO_EXTERN DDR29STR ddr29;  
#define DDR29 ddr29.byte
#define DDR29_D7 ddr29.bit._D7
#define DDR29_D6 ddr29.bit._D6
#define DDR29_D5 ddr29.bit._D5
#define DDR29_D4 ddr29.bit._D4
#define DDR29_D3 ddr29.bit._D3
#define DDR29_D2 ddr29.bit._D2
#define DDR29_D1 ddr29.bit._D1
#define DDR29_D0 ddr29.bit._D0
__IO_EXTERN PFR14STR pfr14;   /* R-bus Port Function Register */
#define PFR14 pfr14.byte
#define PFR14_D7 pfr14.bit._D7
#define PFR14_D6 pfr14.bit._D6
#define PFR14_D5 pfr14.bit._D5
#define PFR14_D4 pfr14.bit._D4
#define PFR14_D3 pfr14.bit._D3
#define PFR14_D2 pfr14.bit._D2
#define PFR14_D1 pfr14.bit._D1
#define PFR14_D0 pfr14.bit._D0
__IO_EXTERN PFR15STR pfr15;  
#define PFR15 pfr15.byte
#define PFR15_D7 pfr15.bit._D7
#define PFR15_D6 pfr15.bit._D6
#define PFR15_D5 pfr15.bit._D5
#define PFR15_D4 pfr15.bit._D4
#define PFR15_D3 pfr15.bit._D3
#define PFR15_D2 pfr15.bit._D2
#define PFR15_D1 pfr15.bit._D1
#define PFR15_D0 pfr15.bit._D0
__IO_EXTERN PFR16STR pfr16;  
#define PFR16 pfr16.byte
#define PFR16_D7 pfr16.bit._D7
#define PFR16_D6 pfr16.bit._D6
#define PFR16_D5 pfr16.bit._D5
#define PFR16_D4 pfr16.bit._D4
#define PFR16_D3 pfr16.bit._D3
#define PFR16_D2 pfr16.bit._D2
#define PFR16_D1 pfr16.bit._D1
#define PFR16_D0 pfr16.bit._D0
__IO_EXTERN PFR17STR pfr17;  
#define PFR17 pfr17.byte
#define PFR17_D7 pfr17.bit._D7
#define PFR17_D6 pfr17.bit._D6
#define PFR17_D5 pfr17.bit._D5
#define PFR17_D4 pfr17.bit._D4
#define PFR17_D3 pfr17.bit._D3
#define PFR17_D2 pfr17.bit._D2
#define PFR17_D1 pfr17.bit._D1
#define PFR17_D0 pfr17.bit._D0
__IO_EXTERN PFR18STR pfr18;  
#define PFR18 pfr18.byte
#define PFR18_D6 pfr18.bit._D6
#define PFR18_D2 pfr18.bit._D2
__IO_EXTERN PFR19STR pfr19;  
#define PFR19 pfr19.byte
#define PFR19_D6 pfr19.bit._D6
#define PFR19_D2 pfr19.bit._D2
#define PFR19_D1 pfr19.bit._D1
#define PFR19_D0 pfr19.bit._D0
__IO_EXTERN PFR20STR pfr20;  
#define PFR20 pfr20.byte
#define PFR20_D7 pfr20.bit._D7
#define PFR20_D6 pfr20.bit._D6
#define PFR20_D5 pfr20.bit._D5
#define PFR20_D4 pfr20.bit._D4
#define PFR20_D3 pfr20.bit._D3
#define PFR20_D2 pfr20.bit._D2
#define PFR20_D1 pfr20.bit._D1
#define PFR20_D0 pfr20.bit._D0
__IO_EXTERN PFR21STR pfr21;  
#define PFR21 pfr21.byte
#define PFR21_D7 pfr21.bit._D7
#define PFR21_D6 pfr21.bit._D6
#define PFR21_D5 pfr21.bit._D5
#define PFR21_D4 pfr21.bit._D4
#define PFR21_D3 pfr21.bit._D3
#define PFR21_D2 pfr21.bit._D2
#define PFR21_D1 pfr21.bit._D1
#define PFR21_D0 pfr21.bit._D0
__IO_EXTERN PFR22STR pfr22;  
#define PFR22 pfr22.byte
#define PFR22_D5 pfr22.bit._D5
#define PFR22_D4 pfr22.bit._D4
#define PFR22_D1 pfr22.bit._D1
#define PFR22_D0 pfr22.bit._D0
__IO_EXTERN PFR24STR pfr24;  
#define PFR24 pfr24.byte
#define PFR24_D7 pfr24.bit._D7
#define PFR24_D6 pfr24.bit._D6
#define PFR24_D5 pfr24.bit._D5
#define PFR24_D4 pfr24.bit._D4
#define PFR24_D3 pfr24.bit._D3
#define PFR24_D2 pfr24.bit._D2
#define PFR24_D1 pfr24.bit._D1
#define PFR24_D0 pfr24.bit._D0
__IO_EXTERN PFR26STR pfr26;  
#define PFR26 pfr26.byte
#define PFR26_D1 pfr26.bit._D1
#define PFR26_D0 pfr26.bit._D0
__IO_EXTERN PFR27STR pfr27;  
#define PFR27 pfr27.byte
#define PFR27_D7 pfr27.bit._D7
#define PFR27_D6 pfr27.bit._D6
#define PFR27_D5 pfr27.bit._D5
#define PFR27_D4 pfr27.bit._D4
#define PFR27_D3 pfr27.bit._D3
#define PFR27_D2 pfr27.bit._D2
#define PFR27_D1 pfr27.bit._D1
#define PFR27_D0 pfr27.bit._D0
__IO_EXTERN PFR28STR pfr28;  
#define PFR28 pfr28.byte
#define PFR28_D7 pfr28.bit._D7
#define PFR28_D6 pfr28.bit._D6
#define PFR28_D5 pfr28.bit._D5
#define PFR28_D4 pfr28.bit._D4
#define PFR28_D3 pfr28.bit._D3
#define PFR28_D2 pfr28.bit._D2
#define PFR28_D1 pfr28.bit._D1
#define PFR28_D0 pfr28.bit._D0
__IO_EXTERN PFR29STR pfr29;  
#define PFR29 pfr29.byte
#define PFR29_D7 pfr29.bit._D7
#define PFR29_D6 pfr29.bit._D6
#define PFR29_D5 pfr29.bit._D5
#define PFR29_D4 pfr29.bit._D4
#define PFR29_D3 pfr29.bit._D3
#define PFR29_D2 pfr29.bit._D2
#define PFR29_D1 pfr29.bit._D1
#define PFR29_D0 pfr29.bit._D0
__IO_EXTERN EPFR14STR epfr14;   /* R-bus Port Extra Function Register */
#define EPFR14 epfr14.byte
#define EPFR14_D7 epfr14.bit._D7
#define EPFR14_D6 epfr14.bit._D6
#define EPFR14_D5 epfr14.bit._D5
#define EPFR14_D4 epfr14.bit._D4
#define EPFR14_D3 epfr14.bit._D3
#define EPFR14_D2 epfr14.bit._D2
#define EPFR14_D1 epfr14.bit._D1
#define EPFR14_D0 epfr14.bit._D0
__IO_EXTERN EPFR15STR epfr15;  
#define EPFR15 epfr15.byte
#define EPFR15_D7 epfr15.bit._D7
#define EPFR15_D6 epfr15.bit._D6
#define EPFR15_D5 epfr15.bit._D5
#define EPFR15_D4 epfr15.bit._D4
#define EPFR15_D3 epfr15.bit._D3
#define EPFR15_D2 epfr15.bit._D2
#define EPFR15_D1 epfr15.bit._D1
#define EPFR15_D0 epfr15.bit._D0
__IO_EXTERN EPFR16STR epfr16;  
#define EPFR16 epfr16.byte
#define EPFR16_D7 epfr16.bit._D7
__IO_EXTERN IO_BYTE epfr17;  
#define EPFR17 epfr17
__IO_EXTERN EPFR18STR epfr18;  
#define EPFR18 epfr18.byte
#define EPFR18_D6 epfr18.bit._D6
#define EPFR18_D2 epfr18.bit._D2
__IO_EXTERN EPFR19STR epfr19;  
#define EPFR19 epfr19.byte
#define EPFR19_D6 epfr19.bit._D6
#define EPFR19_D2 epfr19.bit._D2
__IO_EXTERN EPFR20STR epfr20;  
#define EPFR20 epfr20.byte
#define EPFR20_D6 epfr20.bit._D6
#define EPFR20_D2 epfr20.bit._D2
__IO_EXTERN EPFR21STR epfr21;  
#define EPFR21 epfr21.byte
#define EPFR21_D6 epfr21.bit._D6
#define EPFR21_D2 epfr21.bit._D2
__IO_EXTERN IO_BYTE epfr22;  
#define EPFR22 epfr22
__IO_EXTERN IO_BYTE epfr24;  
#define EPFR24 epfr24
__IO_EXTERN EPFR26STR epfr26;  
#define EPFR26 epfr26.byte
#define EPFR26_D1 epfr26.bit._D1
#define EPFR26_D0 epfr26.bit._D0
__IO_EXTERN EPFR27STR epfr27;  
#define EPFR27 epfr27.byte
#define EPFR27_D7 epfr27.bit._D7
#define EPFR27_D6 epfr27.bit._D6
#define EPFR27_D5 epfr27.bit._D5
#define EPFR27_D4 epfr27.bit._D4
#define EPFR27_D3 epfr27.bit._D3
#define EPFR27_D2 epfr27.bit._D2
#define EPFR27_D1 epfr27.bit._D1
#define EPFR27_D0 epfr27.bit._D0
__IO_EXTERN IO_BYTE epfr29;  
#define EPFR29 epfr29
__IO_EXTERN PODR14STR podr14;   /* R-bus Port Output Drive Select Register */
#define PODR14 podr14.byte
#define PODR14_D7 podr14.bit._D7
#define PODR14_D6 podr14.bit._D6
#define PODR14_D5 podr14.bit._D5
#define PODR14_D4 podr14.bit._D4
#define PODR14_D3 podr14.bit._D3
#define PODR14_D2 podr14.bit._D2
#define PODR14_D1 podr14.bit._D1
#define PODR14_D0 podr14.bit._D0
__IO_EXTERN PODR15STR podr15;  
#define PODR15 podr15.byte
#define PODR15_D7 podr15.bit._D7
#define PODR15_D6 podr15.bit._D6
#define PODR15_D5 podr15.bit._D5
#define PODR15_D4 podr15.bit._D4
#define PODR15_D3 podr15.bit._D3
#define PODR15_D2 podr15.bit._D2
#define PODR15_D1 podr15.bit._D1
#define PODR15_D0 podr15.bit._D0
__IO_EXTERN PODR16STR podr16;  
#define PODR16 podr16.byte
#define PODR16_D7 podr16.bit._D7
#define PODR16_D6 podr16.bit._D6
#define PODR16_D5 podr16.bit._D5
#define PODR16_D4 podr16.bit._D4
#define PODR16_D3 podr16.bit._D3
#define PODR16_D2 podr16.bit._D2
#define PODR16_D1 podr16.bit._D1
#define PODR16_D0 podr16.bit._D0
__IO_EXTERN PODR17STR podr17;  
#define PODR17 podr17.byte
#define PODR17_D7 podr17.bit._D7
#define PODR17_D6 podr17.bit._D6
#define PODR17_D5 podr17.bit._D5
#define PODR17_D4 podr17.bit._D4
#define PODR17_D3 podr17.bit._D3
#define PODR17_D2 podr17.bit._D2
#define PODR17_D1 podr17.bit._D1
#define PODR17_D0 podr17.bit._D0
__IO_EXTERN PODR18STR podr18;  
#define PODR18 podr18.byte
#define PODR18_D6 podr18.bit._D6
#define PODR18_D2 podr18.bit._D2
__IO_EXTERN PODR19STR podr19;  
#define PODR19 podr19.byte
#define PODR19_D6 podr19.bit._D6
#define PODR19_D2 podr19.bit._D2
#define PODR19_D1 podr19.bit._D1
#define PODR19_D0 podr19.bit._D0
__IO_EXTERN PODR20STR podr20;  
#define PODR20 podr20.byte
#define PODR20_D7 podr20.bit._D7
#define PODR20_D6 podr20.bit._D6
#define PODR20_D5 podr20.bit._D5
#define PODR20_D4 podr20.bit._D4
#define PODR20_D3 podr20.bit._D3
#define PODR20_D2 podr20.bit._D2
#define PODR20_D1 podr20.bit._D1
#define PODR20_D0 podr20.bit._D0
__IO_EXTERN PODR21STR podr21;  
#define PODR21 podr21.byte
#define PODR21_D7 podr21.bit._D7
#define PODR21_D6 podr21.bit._D6
#define PODR21_D5 podr21.bit._D5
#define PODR21_D4 podr21.bit._D4
#define PODR21_D3 podr21.bit._D3
#define PODR21_D2 podr21.bit._D2
#define PODR21_D1 podr21.bit._D1
#define PODR21_D0 podr21.bit._D0
__IO_EXTERN PODR22STR podr22;  
#define PODR22 podr22.byte
#define PODR22_D5 podr22.bit._D5
#define PODR22_D4 podr22.bit._D4
#define PODR22_D1 podr22.bit._D1
#define PODR22_D0 podr22.bit._D0
__IO_EXTERN PODR24STR podr24;  
#define PODR24 podr24.byte
#define PODR24_D7 podr24.bit._D7
#define PODR24_D6 podr24.bit._D6
#define PODR24_D5 podr24.bit._D5
#define PODR24_D4 podr24.bit._D4
#define PODR24_D3 podr24.bit._D3
#define PODR24_D2 podr24.bit._D2
#define PODR24_D1 podr24.bit._D1
#define PODR24_D0 podr24.bit._D0
__IO_EXTERN PODR26STR podr26;  
#define PODR26 podr26.byte
#define PODR26_D1 podr26.bit._D1
#define PODR26_D0 podr26.bit._D0
__IO_EXTERN PODR27STR podr27;  
#define PODR27 podr27.byte
#define PODR27_D7 podr27.bit._D7
#define PODR27_D6 podr27.bit._D6
#define PODR27_D5 podr27.bit._D5
#define PODR27_D4 podr27.bit._D4
#define PODR27_D3 podr27.bit._D3
#define PODR27_D2 podr27.bit._D2
#define PODR27_D1 podr27.bit._D1
#define PODR27_D0 podr27.bit._D0
__IO_EXTERN PODR28STR podr28;  
#define PODR28 podr28.byte
#define PODR28_D7 podr28.bit._D7
#define PODR28_D6 podr28.bit._D6
#define PODR28_D5 podr28.bit._D5
#define PODR28_D4 podr28.bit._D4
#define PODR28_D3 podr28.bit._D3
#define PODR28_D2 podr28.bit._D2
#define PODR28_D1 podr28.bit._D1
#define PODR28_D0 podr28.bit._D0
__IO_EXTERN PODR29STR podr29;  
#define PODR29 podr29.byte
#define PODR29_D7 podr29.bit._D7
#define PODR29_D6 podr29.bit._D6
#define PODR29_D5 podr29.bit._D5
#define PODR29_D4 podr29.bit._D4
#define PODR29_D3 podr29.bit._D3
#define PODR29_D2 podr29.bit._D2
#define PODR29_D1 podr29.bit._D1
#define PODR29_D0 podr29.bit._D0
__IO_EXTERN PILR14STR pilr14;   /* R-bus Port Input Level Select Register */
#define PILR14 pilr14.byte
#define PILR14_D7 pilr14.bit._D7
#define PILR14_D6 pilr14.bit._D6
#define PILR14_D5 pilr14.bit._D5
#define PILR14_D4 pilr14.bit._D4
#define PILR14_D3 pilr14.bit._D3
#define PILR14_D2 pilr14.bit._D2
#define PILR14_D1 pilr14.bit._D1
#define PILR14_D0 pilr14.bit._D0
__IO_EXTERN PILR15STR pilr15;  
#define PILR15 pilr15.byte
#define PILR15_D7 pilr15.bit._D7
#define PILR15_D6 pilr15.bit._D6
#define PILR15_D5 pilr15.bit._D5
#define PILR15_D4 pilr15.bit._D4
#define PILR15_D3 pilr15.bit._D3
#define PILR15_D2 pilr15.bit._D2
#define PILR15_D1 pilr15.bit._D1
#define PILR15_D0 pilr15.bit._D0
__IO_EXTERN PILR16STR pilr16;  
#define PILR16 pilr16.byte
#define PILR16_D7 pilr16.bit._D7
#define PILR16_D6 pilr16.bit._D6
#define PILR16_D5 pilr16.bit._D5
#define PILR16_D4 pilr16.bit._D4
#define PILR16_D3 pilr16.bit._D3
#define PILR16_D2 pilr16.bit._D2
#define PILR16_D1 pilr16.bit._D1
#define PILR16_D0 pilr16.bit._D0
__IO_EXTERN PILR17STR pilr17;  
#define PILR17 pilr17.byte
#define PILR17_D7 pilr17.bit._D7
#define PILR17_D6 pilr17.bit._D6
#define PILR17_D5 pilr17.bit._D5
#define PILR17_D4 pilr17.bit._D4
#define PILR17_D3 pilr17.bit._D3
#define PILR17_D2 pilr17.bit._D2
#define PILR17_D1 pilr17.bit._D1
#define PILR17_D0 pilr17.bit._D0
__IO_EXTERN PILR18STR pilr18;  
#define PILR18 pilr18.byte
#define PILR18_D6 pilr18.bit._D6
#define PILR18_D2 pilr18.bit._D2
__IO_EXTERN PILR19STR pilr19;  
#define PILR19 pilr19.byte
#define PILR19_D6 pilr19.bit._D6
#define PILR19_D2 pilr19.bit._D2
#define PILR19_D1 pilr19.bit._D1
#define PILR19_D0 pilr19.bit._D0
__IO_EXTERN PILR20STR pilr20;  
#define PILR20 pilr20.byte
#define PILR20_D7 pilr20.bit._D7
#define PILR20_D6 pilr20.bit._D6
#define PILR20_D5 pilr20.bit._D5
#define PILR20_D4 pilr20.bit._D4
#define PILR20_D3 pilr20.bit._D3
#define PILR20_D2 pilr20.bit._D2
#define PILR20_D1 pilr20.bit._D1
#define PILR20_D0 pilr20.bit._D0
__IO_EXTERN PILR21STR pilr21;  
#define PILR21 pilr21.byte
#define PILR21_D7 pilr21.bit._D7
#define PILR21_D6 pilr21.bit._D6
#define PILR21_D5 pilr21.bit._D5
#define PILR21_D4 pilr21.bit._D4
#define PILR21_D3 pilr21.bit._D3
#define PILR21_D2 pilr21.bit._D2
#define PILR21_D1 pilr21.bit._D1
#define PILR21_D0 pilr21.bit._D0
__IO_EXTERN PILR22STR pilr22;  
#define PILR22 pilr22.byte
#define PILR22_D5 pilr22.bit._D5
#define PILR22_D4 pilr22.bit._D4
#define PILR22_D1 pilr22.bit._D1
#define PILR22_D0 pilr22.bit._D0
__IO_EXTERN PILR24STR pilr24;  
#define PILR24 pilr24.byte
#define PILR24_D7 pilr24.bit._D7
#define PILR24_D6 pilr24.bit._D6
#define PILR24_D5 pilr24.bit._D5
#define PILR24_D4 pilr24.bit._D4
#define PILR24_D3 pilr24.bit._D3
#define PILR24_D2 pilr24.bit._D2
#define PILR24_D1 pilr24.bit._D1
#define PILR24_D0 pilr24.bit._D0
__IO_EXTERN PILR26STR pilr26;  
#define PILR26 pilr26.byte
#define PILR26_D1 pilr26.bit._D1
#define PILR26_D0 pilr26.bit._D0
__IO_EXTERN PILR27STR pilr27;  
#define PILR27 pilr27.byte
#define PILR27_D7 pilr27.bit._D7
#define PILR27_D6 pilr27.bit._D6
#define PILR27_D5 pilr27.bit._D5
#define PILR27_D4 pilr27.bit._D4
#define PILR27_D3 pilr27.bit._D3
#define PILR27_D2 pilr27.bit._D2
#define PILR27_D1 pilr27.bit._D1
#define PILR27_D0 pilr27.bit._D0
__IO_EXTERN PILR28STR pilr28;  
#define PILR28 pilr28.byte
#define PILR28_D7 pilr28.bit._D7
#define PILR28_D6 pilr28.bit._D6
#define PILR28_D5 pilr28.bit._D5
#define PILR28_D4 pilr28.bit._D4
#define PILR28_D3 pilr28.bit._D3
#define PILR28_D2 pilr28.bit._D2
#define PILR28_D1 pilr28.bit._D1
#define PILR28_D0 pilr28.bit._D0
__IO_EXTERN PILR29STR pilr29;  
#define PILR29 pilr29.byte
#define PILR29_D7 pilr29.bit._D7
#define PILR29_D6 pilr29.bit._D6
#define PILR29_D5 pilr29.bit._D5
#define PILR29_D4 pilr29.bit._D4
#define PILR29_D3 pilr29.bit._D3
#define PILR29_D2 pilr29.bit._D2
#define PILR29_D1 pilr29.bit._D1
#define PILR29_D0 pilr29.bit._D0
__IO_EXTERN EPILR14STR epilr14;   /* R-bus Port Extra Input Level Select Register */
#define EPILR14 epilr14.byte
#define EPILR14_D7 epilr14.bit._D7
#define EPILR14_D6 epilr14.bit._D6
#define EPILR14_D5 epilr14.bit._D5
#define EPILR14_D4 epilr14.bit._D4
#define EPILR14_D3 epilr14.bit._D3
#define EPILR14_D2 epilr14.bit._D2
#define EPILR14_D1 epilr14.bit._D1
#define EPILR14_D0 epilr14.bit._D0
__IO_EXTERN EPILR15STR epilr15;  
#define EPILR15 epilr15.byte
#define EPILR15_D7 epilr15.bit._D7
#define EPILR15_D6 epilr15.bit._D6
#define EPILR15_D5 epilr15.bit._D5
#define EPILR15_D4 epilr15.bit._D4
#define EPILR15_D3 epilr15.bit._D3
#define EPILR15_D2 epilr15.bit._D2
#define EPILR15_D1 epilr15.bit._D1
#define EPILR15_D0 epilr15.bit._D0
__IO_EXTERN EPILR16STR epilr16;  
#define EPILR16 epilr16.byte
#define EPILR16_D7 epilr16.bit._D7
#define EPILR16_D6 epilr16.bit._D6
#define EPILR16_D5 epilr16.bit._D5
#define EPILR16_D4 epilr16.bit._D4
#define EPILR16_D3 epilr16.bit._D3
#define EPILR16_D2 epilr16.bit._D2
#define EPILR16_D1 epilr16.bit._D1
#define EPILR16_D0 epilr16.bit._D0
__IO_EXTERN EPILR17STR epilr17;  
#define EPILR17 epilr17.byte
#define EPILR17_D7 epilr17.bit._D7
#define EPILR17_D6 epilr17.bit._D6
#define EPILR17_D5 epilr17.bit._D5
#define EPILR17_D4 epilr17.bit._D4
#define EPILR17_D3 epilr17.bit._D3
#define EPILR17_D2 epilr17.bit._D2
#define EPILR17_D1 epilr17.bit._D1
#define EPILR17_D0 epilr17.bit._D0
__IO_EXTERN EPILR18STR epilr18;  
#define EPILR18 epilr18.byte
#define EPILR18_D6 epilr18.bit._D6
#define EPILR18_D2 epilr18.bit._D2
__IO_EXTERN EPILR19STR epilr19;  
#define EPILR19 epilr19.byte
#define EPILR19_D6 epilr19.bit._D6
#define EPILR19_D2 epilr19.bit._D2
#define EPILR19_D1 epilr19.bit._D1
#define EPILR19_D0 epilr19.bit._D0
__IO_EXTERN EPILR20STR epilr20;  
#define EPILR20 epilr20.byte
#define EPILR20_D7 epilr20.bit._D7
#define EPILR20_D6 epilr20.bit._D6
#define EPILR20_D5 epilr20.bit._D5
#define EPILR20_D4 epilr20.bit._D4
#define EPILR20_D3 epilr20.bit._D3
#define EPILR20_D2 epilr20.bit._D2
#define EPILR20_D1 epilr20.bit._D1
#define EPILR20_D0 epilr20.bit._D0
__IO_EXTERN EPILR21STR epilr21;  
#define EPILR21 epilr21.byte
#define EPILR21_D7 epilr21.bit._D7
#define EPILR21_D6 epilr21.bit._D6
#define EPILR21_D5 epilr21.bit._D5
#define EPILR21_D4 epilr21.bit._D4
#define EPILR21_D3 epilr21.bit._D3
#define EPILR21_D2 epilr21.bit._D2
#define EPILR21_D1 epilr21.bit._D1
#define EPILR21_D0 epilr21.bit._D0
__IO_EXTERN EPILR22STR epilr22;  
#define EPILR22 epilr22.byte
#define EPILR22_D5 epilr22.bit._D5
#define EPILR22_D4 epilr22.bit._D4
#define EPILR22_D1 epilr22.bit._D1
#define EPILR22_D0 epilr22.bit._D0
__IO_EXTERN EPILR24STR epilr24;  
#define EPILR24 epilr24.byte
#define EPILR24_D7 epilr24.bit._D7
#define EPILR24_D6 epilr24.bit._D6
#define EPILR24_D5 epilr24.bit._D5
#define EPILR24_D4 epilr24.bit._D4
#define EPILR24_D3 epilr24.bit._D3
#define EPILR24_D2 epilr24.bit._D2
#define EPILR24_D1 epilr24.bit._D1
#define EPILR24_D0 epilr24.bit._D0
__IO_EXTERN EPILR26STR epilr26;  
#define EPILR26 epilr26.byte
#define EPILR26_D1 epilr26.bit._D1
#define EPILR26_D0 epilr26.bit._D0
__IO_EXTERN EPILR27STR epilr27;  
#define EPILR27 epilr27.byte
#define EPILR27_D7 epilr27.bit._D7
#define EPILR27_D6 epilr27.bit._D6
#define EPILR27_D5 epilr27.bit._D5
#define EPILR27_D4 epilr27.bit._D4
#define EPILR27_D3 epilr27.bit._D3
#define EPILR27_D2 epilr27.bit._D2
#define EPILR27_D1 epilr27.bit._D1
#define EPILR27_D0 epilr27.bit._D0
__IO_EXTERN EPILR28STR epilr28;  
#define EPILR28 epilr28.byte
#define EPILR28_D7 epilr28.bit._D7
#define EPILR28_D6 epilr28.bit._D6
#define EPILR28_D5 epilr28.bit._D5
#define EPILR28_D4 epilr28.bit._D4
#define EPILR28_D3 epilr28.bit._D3
#define EPILR28_D2 epilr28.bit._D2
#define EPILR28_D1 epilr28.bit._D1
#define EPILR28_D0 epilr28.bit._D0
__IO_EXTERN EPILR29STR epilr29;  
#define EPILR29 epilr29.byte
#define EPILR29_D7 epilr29.bit._D7
#define EPILR29_D6 epilr29.bit._D6
#define EPILR29_D5 epilr29.bit._D5
#define EPILR29_D4 epilr29.bit._D4
#define EPILR29_D3 epilr29.bit._D3
#define EPILR29_D2 epilr29.bit._D2
#define EPILR29_D1 epilr29.bit._D1
#define EPILR29_D0 epilr29.bit._D0
__IO_EXTERN PPER14STR pper14;   /* R-bus Port Pull-Up/Down  Enable Register */
#define PPER14 pper14.byte
#define PPER14_D7 pper14.bit._D7
#define PPER14_D6 pper14.bit._D6
#define PPER14_D5 pper14.bit._D5
#define PPER14_D4 pper14.bit._D4
#define PPER14_D3 pper14.bit._D3
#define PPER14_D2 pper14.bit._D2
#define PPER14_D1 pper14.bit._D1
#define PPER14_D0 pper14.bit._D0
__IO_EXTERN PPER15STR pper15;  
#define PPER15 pper15.byte
#define PPER15_D7 pper15.bit._D7
#define PPER15_D6 pper15.bit._D6
#define PPER15_D5 pper15.bit._D5
#define PPER15_D4 pper15.bit._D4
#define PPER15_D3 pper15.bit._D3
#define PPER15_D2 pper15.bit._D2
#define PPER15_D1 pper15.bit._D1
#define PPER15_D0 pper15.bit._D0
__IO_EXTERN PPER16STR pper16;  
#define PPER16 pper16.byte
#define PPER16_D7 pper16.bit._D7
#define PPER16_D6 pper16.bit._D6
#define PPER16_D5 pper16.bit._D5
#define PPER16_D4 pper16.bit._D4
#define PPER16_D3 pper16.bit._D3
#define PPER16_D2 pper16.bit._D2
#define PPER16_D1 pper16.bit._D1
#define PPER16_D0 pper16.bit._D0
__IO_EXTERN PPER17STR pper17;  
#define PPER17 pper17.byte
#define PPER17_D7 pper17.bit._D7
#define PPER17_D6 pper17.bit._D6
#define PPER17_D5 pper17.bit._D5
#define PPER17_D4 pper17.bit._D4
#define PPER17_D3 pper17.bit._D3
#define PPER17_D2 pper17.bit._D2
#define PPER17_D1 pper17.bit._D1
#define PPER17_D0 pper17.bit._D0
__IO_EXTERN PPER18STR pper18;  
#define PPER18 pper18.byte
#define PPER18_D6 pper18.bit._D6
#define PPER18_D2 pper18.bit._D2
__IO_EXTERN PPER19STR pper19;  
#define PPER19 pper19.byte
#define PPER19_D6 pper19.bit._D6
#define PPER19_D2 pper19.bit._D2
#define PPER19_D1 pper19.bit._D1
#define PPER19_D0 pper19.bit._D0
__IO_EXTERN PPER20STR pper20;  
#define PPER20 pper20.byte
#define PPER20_D7 pper20.bit._D7
#define PPER20_D6 pper20.bit._D6
#define PPER20_D5 pper20.bit._D5
#define PPER20_D4 pper20.bit._D4
#define PPER20_D3 pper20.bit._D3
#define PPER20_D2 pper20.bit._D2
#define PPER20_D1 pper20.bit._D1
#define PPER20_D0 pper20.bit._D0
__IO_EXTERN PPER21STR pper21;  
#define PPER21 pper21.byte
#define PPER21_D7 pper21.bit._D7
#define PPER21_D6 pper21.bit._D6
#define PPER21_D5 pper21.bit._D5
#define PPER21_D4 pper21.bit._D4
#define PPER21_D3 pper21.bit._D3
#define PPER21_D2 pper21.bit._D2
#define PPER21_D1 pper21.bit._D1
#define PPER21_D0 pper21.bit._D0
__IO_EXTERN PPER22STR pper22;  
#define PPER22 pper22.byte
#define PPER22_D5 pper22.bit._D5
#define PPER22_D4 pper22.bit._D4
#define PPER22_D1 pper22.bit._D1
#define PPER22_D0 pper22.bit._D0
__IO_EXTERN PPER24STR pper24;  
#define PPER24 pper24.byte
#define PPER24_D7 pper24.bit._D7
#define PPER24_D6 pper24.bit._D6
#define PPER24_D5 pper24.bit._D5
#define PPER24_D4 pper24.bit._D4
#define PPER24_D3 pper24.bit._D3
#define PPER24_D2 pper24.bit._D2
#define PPER24_D1 pper24.bit._D1
#define PPER24_D0 pper24.bit._D0
__IO_EXTERN PPER26STR pper26;  
#define PPER26 pper26.byte
#define PPER26_D1 pper26.bit._D1
#define PPER26_D0 pper26.bit._D0
__IO_EXTERN PPER27STR pper27;  
#define PPER27 pper27.byte
#define PPER27_D7 pper27.bit._D7
#define PPER27_D6 pper27.bit._D6
#define PPER27_D5 pper27.bit._D5
#define PPER27_D4 pper27.bit._D4
#define PPER27_D3 pper27.bit._D3
#define PPER27_D2 pper27.bit._D2
#define PPER27_D1 pper27.bit._D1
#define PPER27_D0 pper27.bit._D0
__IO_EXTERN PPER28STR pper28;  
#define PPER28 pper28.byte
#define PPER28_D7 pper28.bit._D7
#define PPER28_D6 pper28.bit._D6
#define PPER28_D5 pper28.bit._D5
#define PPER28_D4 pper28.bit._D4
#define PPER28_D3 pper28.bit._D3
#define PPER28_D2 pper28.bit._D2
#define PPER28_D1 pper28.bit._D1
#define PPER28_D0 pper28.bit._D0
__IO_EXTERN PPER29STR pper29;  
#define PPER29 pper29.byte
#define PPER29_D7 pper29.bit._D7
#define PPER29_D6 pper29.bit._D6
#define PPER29_D5 pper29.bit._D5
#define PPER29_D4 pper29.bit._D4
#define PPER29_D3 pper29.bit._D3
#define PPER29_D2 pper29.bit._D2
#define PPER29_D1 pper29.bit._D1
#define PPER29_D0 pper29.bit._D0
__IO_EXTERN PPCR14STR ppcr14;   /* R-bus Port Pull-Up/Down Control Register */
#define PPCR14 ppcr14.byte
#define PPCR14_D7 ppcr14.bit._D7
#define PPCR14_D6 ppcr14.bit._D6
#define PPCR14_D5 ppcr14.bit._D5
#define PPCR14_D4 ppcr14.bit._D4
#define PPCR14_D3 ppcr14.bit._D3
#define PPCR14_D2 ppcr14.bit._D2
#define PPCR14_D1 ppcr14.bit._D1
#define PPCR14_D0 ppcr14.bit._D0
__IO_EXTERN PPCR15STR ppcr15;  
#define PPCR15 ppcr15.byte
#define PPCR15_D7 ppcr15.bit._D7
#define PPCR15_D6 ppcr15.bit._D6
#define PPCR15_D5 ppcr15.bit._D5
#define PPCR15_D4 ppcr15.bit._D4
#define PPCR15_D3 ppcr15.bit._D3
#define PPCR15_D2 ppcr15.bit._D2
#define PPCR15_D1 ppcr15.bit._D1
#define PPCR15_D0 ppcr15.bit._D0
__IO_EXTERN PPCR16STR ppcr16;  
#define PPCR16 ppcr16.byte
#define PPCR16_D7 ppcr16.bit._D7
#define PPCR16_D6 ppcr16.bit._D6
#define PPCR16_D5 ppcr16.bit._D5
#define PPCR16_D4 ppcr16.bit._D4
#define PPCR16_D3 ppcr16.bit._D3
#define PPCR16_D2 ppcr16.bit._D2
#define PPCR16_D1 ppcr16.bit._D1
#define PPCR16_D0 ppcr16.bit._D0
__IO_EXTERN PPCR17STR ppcr17;  
#define PPCR17 ppcr17.byte
#define PPCR17_D7 ppcr17.bit._D7
#define PPCR17_D6 ppcr17.bit._D6
#define PPCR17_D5 ppcr17.bit._D5
#define PPCR17_D4 ppcr17.bit._D4
#define PPCR17_D3 ppcr17.bit._D3
#define PPCR17_D2 ppcr17.bit._D2
#define PPCR17_D1 ppcr17.bit._D1
#define PPCR17_D0 ppcr17.bit._D0
__IO_EXTERN PPCR18STR ppcr18;  
#define PPCR18 ppcr18.byte
#define PPCR18_D6 ppcr18.bit._D6
#define PPCR18_D2 ppcr18.bit._D2
__IO_EXTERN PPCR19STR ppcr19;  
#define PPCR19 ppcr19.byte
#define PPCR19_D6 ppcr19.bit._D6
#define PPCR19_D2 ppcr19.bit._D2
#define PPCR19_D1 ppcr19.bit._D1
#define PPCR19_D0 ppcr19.bit._D0
__IO_EXTERN PPCR20STR ppcr20;  
#define PPCR20 ppcr20.byte
#define PPCR20_D7 ppcr20.bit._D7
#define PPCR20_D6 ppcr20.bit._D6
#define PPCR20_D5 ppcr20.bit._D5
#define PPCR20_D4 ppcr20.bit._D4
#define PPCR20_D3 ppcr20.bit._D3
#define PPCR20_D2 ppcr20.bit._D2
#define PPCR20_D1 ppcr20.bit._D1
#define PPCR20_D0 ppcr20.bit._D0
__IO_EXTERN PPCR21STR ppcr21;  
#define PPCR21 ppcr21.byte
#define PPCR21_D7 ppcr21.bit._D7
#define PPCR21_D6 ppcr21.bit._D6
#define PPCR21_D5 ppcr21.bit._D5
#define PPCR21_D4 ppcr21.bit._D4
#define PPCR21_D3 ppcr21.bit._D3
#define PPCR21_D2 ppcr21.bit._D2
#define PPCR21_D1 ppcr21.bit._D1
#define PPCR21_D0 ppcr21.bit._D0
__IO_EXTERN PPCR22STR ppcr22;  
#define PPCR22 ppcr22.byte
#define PPCR22_D5 ppcr22.bit._D5
#define PPCR22_D4 ppcr22.bit._D4
#define PPCR22_D1 ppcr22.bit._D1
#define PPCR22_D0 ppcr22.bit._D0
__IO_EXTERN PPCR24STR ppcr24;  
#define PPCR24 ppcr24.byte
#define PPCR24_D7 ppcr24.bit._D7
#define PPCR24_D6 ppcr24.bit._D6
#define PPCR24_D5 ppcr24.bit._D5
#define PPCR24_D4 ppcr24.bit._D4
#define PPCR24_D3 ppcr24.bit._D3
#define PPCR24_D2 ppcr24.bit._D2
#define PPCR24_D1 ppcr24.bit._D1
#define PPCR24_D0 ppcr24.bit._D0
__IO_EXTERN PPCR26STR ppcr26;  
#define PPCR26 ppcr26.byte
#define PPCR26_D1 ppcr26.bit._D1
#define PPCR26_D0 ppcr26.bit._D0
__IO_EXTERN PPCR27STR ppcr27;  
#define PPCR27 ppcr27.byte
#define PPCR27_D7 ppcr27.bit._D7
#define PPCR27_D6 ppcr27.bit._D6
#define PPCR27_D5 ppcr27.bit._D5
#define PPCR27_D4 ppcr27.bit._D4
#define PPCR27_D3 ppcr27.bit._D3
#define PPCR27_D2 ppcr27.bit._D2
#define PPCR27_D1 ppcr27.bit._D1
#define PPCR27_D0 ppcr27.bit._D0
__IO_EXTERN PPCR28STR ppcr28;  
#define PPCR28 ppcr28.byte
#define PPCR28_D7 ppcr28.bit._D7
#define PPCR28_D6 ppcr28.bit._D6
#define PPCR28_D5 ppcr28.bit._D5
#define PPCR28_D4 ppcr28.bit._D4
#define PPCR28_D3 ppcr28.bit._D3
#define PPCR28_D2 ppcr28.bit._D2
#define PPCR28_D1 ppcr28.bit._D1
#define PPCR28_D0 ppcr28.bit._D0
__IO_EXTERN PPCR29STR ppcr29;  
#define PPCR29 ppcr29.byte
#define PPCR29_D7 ppcr29.bit._D7
#define PPCR29_D6 ppcr29.bit._D6
#define PPCR29_D5 ppcr29.bit._D5
#define PPCR29_D4 ppcr29.bit._D4
#define PPCR29_D3 ppcr29.bit._D3
#define PPCR29_D2 ppcr29.bit._D2
#define PPCR29_D1 ppcr29.bit._D1
#define PPCR29_D0 ppcr29.bit._D0
__IO_EXTERN IO_LWORD dmasa0;   /* DMAC */
#define DMASA0 dmasa0
__IO_EXTERN IO_LWORD dmada0;  
#define DMADA0 dmada0
__IO_EXTERN IO_LWORD dmasa1;  
#define DMASA1 dmasa1
__IO_EXTERN IO_LWORD dmada1;  
#define DMADA1 dmada1
__IO_EXTERN IO_LWORD dmasa2;  
#define DMASA2 dmasa2
__IO_EXTERN IO_LWORD dmada2;  
#define DMADA2 dmada2
__IO_EXTERN IO_LWORD dmasa3;  
#define DMASA3 dmasa3
__IO_EXTERN IO_LWORD dmada3;  
#define DMADA3 dmada3
__IO_EXTERN IO_LWORD dmasa4;  
#define DMASA4 dmasa4
__IO_EXTERN IO_LWORD dmada4;  
#define DMADA4 dmada4
__IO_EXTERN FMCSSTR fmcs;   /* Flash Memory/I-Cache Control Register */
#define FMCS fmcs.byte
#define FMCS_ASYNC fmcs.bit._ASYNC
#define FMCS_FIXE fmcs.bit._FIXE
#define FMCS_BIRE fmcs.bit._BIRE
#define FMCS_RDYEG fmcs.bit._RDYEG
#define FMCS_RDY fmcs.bit._RDY
#define FMCS_RDYI fmcs.bit._RDYI
#define FMCS_RW16 fmcs.bit._RW16
#define FMCS_LPM fmcs.bit._LPM
__IO_EXTERN FMCRSTR fmcr;  
#define FMCR fmcr.byte
#define FMCR_LOCK fmcr.bit._LOCK
#define FMCR_PHASE fmcr.bit._PHASE
#define FMCR_PF2I fmcr.bit._PF2I
#define FMCR_RD64 fmcr.bit._RD64
__IO_EXTERN FCHCRSTR fchcr;  
#define FCHCR fchcr.word
#define FCHCR_REN fchcr.bit._REN
#define FCHCR_TAGE fchcr.bit._TAGE
#define FCHCR_FLUSH fchcr.bit._FLUSH
#define FCHCR_DBEN fchcr.bit._DBEN
#define FCHCR_PFEN fchcr.bit._PFEN
#define FCHCR_PFMC fchcr.bit._PFMC
#define FCHCR_LOCK fchcr.bit._LOCK
#define FCHCR_ENAB fchcr.bit._ENAB
#define FCHCR_SIZE1 fchcr.bit._SIZE1
#define FCHCR_SIZE0 fchcr.bit._SIZE0
#define FCHCR_SIZE fchcr.bitc._SIZE
__IO_EXTERN FMWTSTR fmwt;  
#define FMWT fmwt.word
#define FMWT_WTP1 fmwt.bit._WTP1
#define FMWT_WTP0 fmwt.bit._WTP0
#define FMWT_WEXH1 fmwt.bit._WEXH1
#define FMWT_WEXH0 fmwt.bit._WEXH0
#define FMWT_WTC3 fmwt.bit._WTC3
#define FMWT_WTC2 fmwt.bit._WTC2
#define FMWT_WTC1 fmwt.bit._WTC1
#define FMWT_WTC0 fmwt.bit._WTC0
#define FMWT_FRAM fmwt.bit._FRAM
#define FMWT_ATD2 fmwt.bit._ATD2
#define FMWT_ATD1 fmwt.bit._ATD1
#define FMWT_ATD0 fmwt.bit._ATD0
#define FMWT_EQ3 fmwt.bit._EQ3
#define FMWT_EQ2 fmwt.bit._EQ2
#define FMWT_EQ1 fmwt.bit._EQ1
#define FMWT_EQ0 fmwt.bit._EQ0
#define FMWT_WTP fmwt.bitc._WTP
#define FMWT_WEXH fmwt.bitc._WEXH
#define FMWT_WTC fmwt.bitc._WTC
#define FMWT_ATD fmwt.bitc._ATD
#define FMWT_EQ fmwt.bitc._EQ
__IO_EXTERN FMWT2STR fmwt2;  
#define FMWT2 fmwt2.byte
#define FMWT2_ALEH2 fmwt2.bit._ALEH2
#define FMWT2_ALEH1 fmwt2.bit._ALEH1
#define FMWT2_ALEH0 fmwt2.bit._ALEH0
#define FMWT2_ALEH fmwt2.bitc._ALEH
__IO_EXTERN FMPSSTR fmps;  
#define FMPS fmps.byte
#define FMPS_PS2 fmps.bit._PS2
#define FMPS_PS1 fmps.bit._PS1
#define FMPS_PS0 fmps.bit._PS0
#define FMPS_PS fmps.bitc._PS
__IO_EXTERN IO_LWORD fmac;  
#define FMAC fmac
__IO_EXTERN IO_LWORD fcha0;   /* I_Cache Nonchachable area settings Register */
#define FCHA0 fcha0
__IO_EXTERN IO_LWORD fcha1;  
#define FCHA1 fcha1
__IO_EXTERN FSCR0STR fscr0;   /* Flash Security Control Register */
#define FSCR0 fscr0.lword
#define FSCR0_CRC31 fscr0.bit._CRC31
#define FSCR0_CRC30 fscr0.bit._CRC30
#define FSCR0_CRC29 fscr0.bit._CRC29
#define FSCR0_CRC28 fscr0.bit._CRC28
#define FSCR0_CRC27 fscr0.bit._CRC27
#define FSCR0_CRC26 fscr0.bit._CRC26
#define FSCR0_CRC25 fscr0.bit._CRC25
#define FSCR0_CRC24 fscr0.bit._CRC24
#define FSCR0_CRC23 fscr0.bit._CRC23
#define FSCR0_CRC22 fscr0.bit._CRC22
#define FSCR0_CRC21 fscr0.bit._CRC21
#define FSCR0_CRC20 fscr0.bit._CRC20
#define FSCR0_CRC19 fscr0.bit._CRC19
#define FSCR0_CRC18 fscr0.bit._CRC18
#define FSCR0_CRC17 fscr0.bit._CRC17
#define FSCR0_CRC16 fscr0.bit._CRC16
#define FSCR0_CRC15 fscr0.bit._CRC15
#define FSCR0_CRC14 fscr0.bit._CRC14
#define FSCR0_CRC13 fscr0.bit._CRC13
#define FSCR0_CRC12 fscr0.bit._CRC12
#define FSCR0_CRC11 fscr0.bit._CRC11
#define FSCR0_CRC10 fscr0.bit._CRC10
#define FSCR0_CRC9 fscr0.bit._CRC9
#define FSCR0_CRC8 fscr0.bit._CRC8
#define FSCR0_CRC7 fscr0.bit._CRC7
#define FSCR0_CRC6 fscr0.bit._CRC6
#define FSCR0_CRC5 fscr0.bit._CRC5
#define FSCR0_CRC4 fscr0.bit._CRC4
#define FSCR0_CRC3 fscr0.bit._CRC3
#define FSCR0_CRC2 fscr0.bit._CRC2
#define FSCR0_CRC1 fscr0.bit._CRC1
#define FSCR0_CRC0 fscr0.bit._CRC0
__IO_EXTERN FSCR1STR fscr1;  
#define FSCR1 fscr1.lword
#define FSCR1_RDY fscr1.bit._RDY
#define FSCR1_CSZ3 fscr1.bit._CSZ3
#define FSCR1_CSZ2 fscr1.bit._CSZ2
#define FSCR1_CSZ1 fscr1.bit._CSZ1
#define FSCR1_CSZ0 fscr1.bit._CSZ0
#define FSCR1_CSA15 fscr1.bit._CSA15
#define FSCR1_CSA14 fscr1.bit._CSA14
#define FSCR1_CSA13 fscr1.bit._CSA13
#define FSCR1_CSA12 fscr1.bit._CSA12
#define FSCR1_CSA11 fscr1.bit._CSA11
#define FSCR1_CSA10 fscr1.bit._CSA10
#define FSCR1_CSA9 fscr1.bit._CSA9
#define FSCR1_CSA8 fscr1.bit._CSA8
#define FSCR1_CSA7 fscr1.bit._CSA7
#define FSCR1_CSA6 fscr1.bit._CSA6
#define FSCR1_CSA5 fscr1.bit._CSA5
#define FSCR1_CSA4 fscr1.bit._CSA4
#define FSCR1_CSA3 fscr1.bit._CSA3
#define FSCR1_CSA2 fscr1.bit._CSA2
#define FSCR1_CSA1 fscr1.bit._CSA1
#define FSCR1_CSA0 fscr1.bit._CSA0
#define FSCR1_CSZ fscr1.bitc._CSZ
__IO_EXTERN CTRLR4STR ctrlr4;   /* CAN 4 Control Register */
#define CTRLR4 ctrlr4.word
#define CTRLR4_Test ctrlr4.bit._Test
#define CTRLR4_CCE ctrlr4.bit._CCE
#define CTRLR4_DAR ctrlr4.bit._DAR
#define CTRLR4_EIE ctrlr4.bit._EIE
#define CTRLR4_SIE ctrlr4.bit._SIE
#define CTRLR4_IE ctrlr4.bit._IE
#define CTRLR4_Init ctrlr4.bit._Init
__IO_EXTERN STATR4STR statr4;  
#define STATR4 statr4.word
#define STATR4_BOff statr4.bit._BOff
#define STATR4_EWarn statr4.bit._EWarn
#define STATR4_EPass statr4.bit._EPass
#define STATR4_RxOK statr4.bit._RxOK
#define STATR4_TxOK statr4.bit._TxOK
#define STATR4_LEC2 statr4.bit._LEC2
#define STATR4_LEC1 statr4.bit._LEC1
#define STATR4_LEC0 statr4.bit._LEC0
#define STATR4_LEC statr4.bitc._LEC
__IO_EXTERN ERRCNT4STR errcnt4;  
#define ERRCNT4 errcnt4.word
#define ERRCNT4_RP errcnt4.bit._RP
#define ERRCNT4_REC6 errcnt4.bit._REC6
#define ERRCNT4_REC5 errcnt4.bit._REC5
#define ERRCNT4_REC4 errcnt4.bit._REC4
#define ERRCNT4_REC3 errcnt4.bit._REC3
#define ERRCNT4_REC2 errcnt4.bit._REC2
#define ERRCNT4_REC1 errcnt4.bit._REC1
#define ERRCNT4_REC0 errcnt4.bit._REC0
#define ERRCNT4_TEC7 errcnt4.bit._TEC7
#define ERRCNT4_TEC6 errcnt4.bit._TEC6
#define ERRCNT4_TEC5 errcnt4.bit._TEC5
#define ERRCNT4_TEC4 errcnt4.bit._TEC4
#define ERRCNT4_TEC3 errcnt4.bit._TEC3
#define ERRCNT4_TEC2 errcnt4.bit._TEC2
#define ERRCNT4_TEC1 errcnt4.bit._TEC1
#define ERRCNT4_TEC0 errcnt4.bit._TEC0
#define ERRCNT4_REC errcnt4.bitc._REC
#define ERRCNT4_TEC errcnt4.bitc._TEC
__IO_EXTERN BTR4STR btr4;  
#define BTR4 btr4.word
#define BTR4_Tseg22 btr4.bit._Tseg22
#define BTR4_Tseg21 btr4.bit._Tseg21
#define BTR4_Tseg20 btr4.bit._Tseg20
#define BTR4_Tseg13 btr4.bit._Tseg13
#define BTR4_Tseg12 btr4.bit._Tseg12
#define BTR4_Tseg11 btr4.bit._Tseg11
#define BTR4_Tseg10 btr4.bit._Tseg10
#define BTR4_SJW1 btr4.bit._SJW1
#define BTR4_SJW0 btr4.bit._SJW0
#define BTR4_BRP5 btr4.bit._BRP5
#define BTR4_BRP4 btr4.bit._BRP4
#define BTR4_BRP3 btr4.bit._BRP3
#define BTR4_BRP2 btr4.bit._BRP2
#define BTR4_BRP1 btr4.bit._BRP1
#define BTR4_BRP0 btr4.bit._BRP0
#define BTR4_Tseg2 btr4.bitc._Tseg2
#define BTR4_Tseg1 btr4.bitc._Tseg1
#define BTR4_SJW btr4.bitc._SJW
#define BTR4_BRP btr4.bitc._BRP
__IO_EXTERN IO_WORD intr4;  
#define INTR4 intr4
__IO_EXTERN TESTR4STR testr4;  
#define TESTR4 testr4.word
#define TESTR4_Rx testr4.bit._Rx
#define TESTR4_Tx1 testr4.bit._Tx1
#define TESTR4_Tx0 testr4.bit._Tx0
#define TESTR4_LBack testr4.bit._LBack
#define TESTR4_Silent testr4.bit._Silent
#define TESTR4_Basic testr4.bit._Basic
#define TESTR4_Tx testr4.bitc._Tx
__IO_EXTERN BRPER4STR brper4;  
#define BRPER4 brper4.word
#define BRPER4_BRPE3 brper4.bit._BRPE3
#define BRPER4_BRPE2 brper4.bit._BRPE2
#define BRPER4_BRPE1 brper4.bit._BRPE1
#define BRPER4_BRPE0 brper4.bit._BRPE0
#define BRPER4_BRPE brper4.bitc._BRPE
__IO_EXTERN BRPE4STR brpe4;  
#define BRPE4 brpe4.word
__IO_EXTERN IF1CREQ4STR if1creq4;   /* CAN 4 IF 1 */
#define IF1CREQ4 if1creq4.word
#define IF1CREQ4_Busy if1creq4.bit._Busy
#define IF1CREQ4_MN5 if1creq4.bit._MN5
#define IF1CREQ4_MN4 if1creq4.bit._MN4
#define IF1CREQ4_MN3 if1creq4.bit._MN3
#define IF1CREQ4_MN2 if1creq4.bit._MN2
#define IF1CREQ4_MN1 if1creq4.bit._MN1
#define IF1CREQ4_MN0 if1creq4.bit._MN0
#define IF1CREQ4_MN if1creq4.bitc._MN
__IO_EXTERN IF1CMSK4STR if1cmsk4;  
#define IF1CMSK4 if1cmsk4.word
#define IF1CMSK4_WR if1cmsk4.bit._WR
#define IF1CMSK4_Mask if1cmsk4.bit._Mask
#define IF1CMSK4_Arb if1cmsk4.bit._Arb
#define IF1CMSK4_Control if1cmsk4.bit._Control
#define IF1CMSK4_CIP if1cmsk4.bit._CIP
#define IF1CMSK4_TxReq if1cmsk4.bit._TxReq
#define IF1CMSK4_DataA if1cmsk4.bit._DataA
#define IF1CMSK4_DataB if1cmsk4.bit._DataB
__IO_EXTERN IO_LWORD if1msk124;  
#define IF1MSK124 if1msk124
__IO_EXTERN IF1MSK24STR if1msk24;  
#define IF1MSK24 if1msk24.word
#define IF1MSK24_MXtd if1msk24.bit._MXtd
#define IF1MSK24_MDir if1msk24.bit._MDir
__IO_EXTERN IO_WORD if1msk14;  
#define IF1MSK14 if1msk14
__IO_EXTERN IO_LWORD if1arb124;  
#define IF1ARB124 if1arb124
__IO_EXTERN IF1ARB24STR if1arb24;  
#define IF1ARB24 if1arb24.word
#define IF1ARB24_MsgVal if1arb24.bit._MsgVal
#define IF1ARB24_Xtd if1arb24.bit._Xtd
#define IF1ARB24_DIR if1arb24.bit._DIR
__IO_EXTERN IO_WORD if1arb14;  
#define IF1ARB14 if1arb14
__IO_EXTERN IF1MCTR4STR if1mctr4;  
#define IF1MCTR4 if1mctr4.word
#define IF1MCTR4_NewDat if1mctr4.bit._NewDat
#define IF1MCTR4_MsgLst if1mctr4.bit._MsgLst
#define IF1MCTR4_IntPnd if1mctr4.bit._IntPnd
#define IF1MCTR4_UMask if1mctr4.bit._UMask
#define IF1MCTR4_TxIE if1mctr4.bit._TxIE
#define IF1MCTR4_RxIE if1mctr4.bit._RxIE
#define IF1MCTR4_RmtEn if1mctr4.bit._RmtEn
#define IF1MCTR4_TxRqst if1mctr4.bit._TxRqst
#define IF1MCTR4_EoB if1mctr4.bit._EoB
#define IF1MCTR4_DLC3 if1mctr4.bit._DLC3
#define IF1MCTR4_DLC2 if1mctr4.bit._DLC2
#define IF1MCTR4_DLC1 if1mctr4.bit._DLC1
#define IF1MCTR4_DLC0 if1mctr4.bit._DLC0
#define IF1MCTR4_DLC if1mctr4.bitc._DLC
__IO_EXTERN IO_LWORD if1dta124;  
#define IF1DTA124 if1dta124
__IO_EXTERN IO_WORD if1dta14;  
#define IF1DTA14 if1dta14
__IO_EXTERN IO_WORD if1dta24;  
#define IF1DTA24 if1dta24
__IO_EXTERN IO_LWORD if1dtb124;  
#define IF1DTB124 if1dtb124
__IO_EXTERN IO_WORD if1dtb14;  
#define IF1DTB14 if1dtb14
__IO_EXTERN IO_WORD if1dtb24;  
#define IF1DTB24 if1dtb24
__IO_EXTERN IO_LWORD if1dta_swp124;  
#define IF1DTA_SWP124 if1dta_swp124
__IO_EXTERN IO_WORD if1dta_swp24;  
#define IF1DTA_SWP24 if1dta_swp24
__IO_EXTERN IO_WORD if1dta_swp14;  
#define IF1DTA_SWP14 if1dta_swp14
__IO_EXTERN IO_LWORD if1dtb_swp124;  
#define IF1DTB_SWP124 if1dtb_swp124
__IO_EXTERN IO_WORD if1dtb_swp24;  
#define IF1DTB_SWP24 if1dtb_swp24
__IO_EXTERN IO_WORD if1dtb_swp14;  
#define IF1DTB_SWP14 if1dtb_swp14
__IO_EXTERN IF2CREQ4STR if2creq4;   /* CAN 4 IF 2 */
#define IF2CREQ4 if2creq4.word
#define IF2CREQ4_Busy if2creq4.bit._Busy
#define IF2CREQ4_MN5 if2creq4.bit._MN5
#define IF2CREQ4_MN4 if2creq4.bit._MN4
#define IF2CREQ4_MN3 if2creq4.bit._MN3
#define IF2CREQ4_MN2 if2creq4.bit._MN2
#define IF2CREQ4_MN1 if2creq4.bit._MN1
#define IF2CREQ4_MN0 if2creq4.bit._MN0
#define IF2CREQ4_MN if2creq4.bitc._MN
__IO_EXTERN IF2CMSK4STR if2cmsk4;  
#define IF2CMSK4 if2cmsk4.word
#define IF2CMSK4_WR if2cmsk4.bit._WR
#define IF2CMSK4_Mask if2cmsk4.bit._Mask
#define IF2CMSK4_Arb if2cmsk4.bit._Arb
#define IF2CMSK4_Control if2cmsk4.bit._Control
#define IF2CMSK4_CIP if2cmsk4.bit._CIP
#define IF2CMSK4_TxReq if2cmsk4.bit._TxReq
#define IF2CMSK4_DataA if2cmsk4.bit._DataA
#define IF2CMSK4_DataB if2cmsk4.bit._DataB
__IO_EXTERN IO_LWORD if2msk124;  
#define IF2MSK124 if2msk124
__IO_EXTERN IF2MSK24STR if2msk24;  
#define IF2MSK24 if2msk24.word
#define IF2MSK24_MXtd if2msk24.bit._MXtd
#define IF2MSK24_MDir if2msk24.bit._MDir
__IO_EXTERN IO_WORD if2msk14;  
#define IF2MSK14 if2msk14
__IO_EXTERN IO_LWORD if2arb124;  
#define IF2ARB124 if2arb124
__IO_EXTERN IF2ARB24STR if2arb24;  
#define IF2ARB24 if2arb24.word
#define IF2ARB24_MsgVal if2arb24.bit._MsgVal
#define IF2ARB24_Xtd if2arb24.bit._Xtd
#define IF2ARB24_DIR if2arb24.bit._DIR
__IO_EXTERN IO_WORD if2arb14;  
#define IF2ARB14 if2arb14
__IO_EXTERN IF2MCTR4STR if2mctr4;  
#define IF2MCTR4 if2mctr4.word
#define IF2MCTR4_NewDat if2mctr4.bit._NewDat
#define IF2MCTR4_MsgLst if2mctr4.bit._MsgLst
#define IF2MCTR4_IntPnd if2mctr4.bit._IntPnd
#define IF2MCTR4_UMask if2mctr4.bit._UMask
#define IF2MCTR4_TxIE if2mctr4.bit._TxIE
#define IF2MCTR4_RxIE if2mctr4.bit._RxIE
#define IF2MCTR4_RmtEn if2mctr4.bit._RmtEn
#define IF2MCTR4_TxRqst if2mctr4.bit._TxRqst
#define IF2MCTR4_EoB if2mctr4.bit._EoB
#define IF2MCTR4_DLC3 if2mctr4.bit._DLC3
#define IF2MCTR4_DLC2 if2mctr4.bit._DLC2
#define IF2MCTR4_DLC1 if2mctr4.bit._DLC1
#define IF2MCTR4_DLC0 if2mctr4.bit._DLC0
#define IF2MCTR4_DLC if2mctr4.bitc._DLC
__IO_EXTERN IO_LWORD if2dta124;  
#define IF2DTA124 if2dta124
__IO_EXTERN IO_WORD if2dta14;  
#define IF2DTA14 if2dta14
__IO_EXTERN IO_WORD if2dta24;  
#define IF2DTA24 if2dta24
__IO_EXTERN IO_LWORD if2dtb124;  
#define IF2DTB124 if2dtb124
__IO_EXTERN IO_WORD if2dtb14;  
#define IF2DTB14 if2dtb14
__IO_EXTERN IO_WORD if2dtb24;  
#define IF2DTB24 if2dtb24
__IO_EXTERN IO_LWORD if2dta_swp124;  
#define IF2DTA_SWP124 if2dta_swp124
__IO_EXTERN IO_WORD if2dta_swp24;  
#define IF2DTA_SWP24 if2dta_swp24
__IO_EXTERN IO_WORD if2dta_swp14;  
#define IF2DTA_SWP14 if2dta_swp14
__IO_EXTERN IO_LWORD if2dtb_swp124;  
#define IF2DTB_SWP124 if2dtb_swp124
__IO_EXTERN IO_WORD if2dtb_swp24;  
#define IF2DTB_SWP24 if2dtb_swp24
__IO_EXTERN IO_WORD if2dtb_swp14;  
#define IF2DTB_SWP14 if2dtb_swp14
__IO_EXTERN IO_LWORD treqr124;   /* CAN 4 Status Flags */
#define TREQR124 treqr124
__IO_EXTERN IO_WORD treqr24;  
#define TREQR24 treqr24
__IO_EXTERN IO_WORD treqr14;  
#define TREQR14 treqr14
__IO_EXTERN IO_LWORD treqr344;  
#define TREQR344 treqr344
__IO_EXTERN IO_LWORD newdt124;  
#define NEWDT124 newdt124
__IO_EXTERN IO_WORD newdt24;  
#define NEWDT24 newdt24
__IO_EXTERN IO_WORD newdt14;  
#define NEWDT14 newdt14
__IO_EXTERN IO_LWORD intpnd124;  
#define INTPND124 intpnd124
__IO_EXTERN IO_WORD intpnd24;  
#define INTPND24 intpnd24
__IO_EXTERN IO_WORD intpnd14;  
#define INTPND14 intpnd14
__IO_EXTERN IO_LWORD msgval124;  
#define MSGVAL124 msgval124
__IO_EXTERN IO_WORD msgval24;  
#define MSGVAL24 msgval24
__IO_EXTERN IO_WORD msgval14;  
#define MSGVAL14 msgval14
__IO_EXTERN BCTRLSTR bctrl;   /* EDSU/MPU Registers */
#define BCTRL bctrl.lword
#define BCTRL_SR bctrl.bit._SR
#define BCTRL_SW bctrl.bit._SW
#define BCTRL_SX bctrl.bit._SX
#define BCTRL_UR bctrl.bit._UR
#define BCTRL_UW bctrl.bit._UW
#define BCTRL_UX bctrl.bit._UX
#define BCTRL_FCPU bctrl.bit._FCPU
#define BCTRL_FDMA bctrl.bit._FDMA
#define BCTRL_EEMM bctrl.bit._EEMM
#define BCTRL_PFD bctrl.bit._PFD
#define BCTRL_SINT1 bctrl.bit._SINT1
#define BCTRL_SINT0 bctrl.bit._SINT0
#define BCTRL_EINT1 bctrl.bit._EINT1
#define BCTRL_EINT0 bctrl.bit._EINT0
#define BCTRL_EINTT bctrl.bit._EINTT
#define BCTRL_EINTR bctrl.bit._EINTR
#define BCTRL_SINT bctrl.bitc._SINT
#define BCTRL_EINT bctrl.bitc._EINT
__IO_EXTERN BSTATSTR bstat;  
#define BSTAT bstat.lword
#define BSTAT_IDX4 bstat.bit._IDX4
#define BSTAT_IDX3 bstat.bit._IDX3
#define BSTAT_IDX2 bstat.bit._IDX2
#define BSTAT_IDX1 bstat.bit._IDX1
#define BSTAT_IDX0 bstat.bit._IDX0
#define BSTAT_CDMA bstat.bit._CDMA
#define BSTAT_CSZ1 bstat.bit._CSZ1
#define BSTAT_CSZ0 bstat.bit._CSZ0
#define BSTAT_CRW1 bstat.bit._CRW1
#define BSTAT_CRW0 bstat.bit._CRW0
#define BSTAT_PV bstat.bit._PV
#define BSTAT_RST bstat.bit._RST
#define BSTAT_INT1 bstat.bit._INT1
#define BSTAT_INT0 bstat.bit._INT0
#define BSTAT_INTT bstat.bit._INTT
#define BSTAT_INTR bstat.bit._INTR
#define BSTAT_IDX bstat.bitc._IDX
#define BSTAT_CSZ bstat.bitc._CSZ
#define BSTAT_CRW bstat.bitc._CRW
#define BSTAT_INT bstat.bitc._INT
__IO_EXTERN IO_LWORD biac;  
#define BIAC biac
__IO_EXTERN IO_LWORD boac;  
#define BOAC boac
__IO_EXTERN BIRQSTR birq;  
#define BIRQ birq.lword
#define BIRQ_BD31 birq.bit._BD31
#define BIRQ_BD30 birq.bit._BD30
#define BIRQ_BD29 birq.bit._BD29
#define BIRQ_BD28 birq.bit._BD28
#define BIRQ_BD27 birq.bit._BD27
#define BIRQ_BD26 birq.bit._BD26
#define BIRQ_BD25 birq.bit._BD25
#define BIRQ_BD24 birq.bit._BD24
#define BIRQ_BD23 birq.bit._BD23
#define BIRQ_BD22 birq.bit._BD22
#define BIRQ_BD21 birq.bit._BD21
#define BIRQ_BD20 birq.bit._BD20
#define BIRQ_BD19 birq.bit._BD19
#define BIRQ_BD18 birq.bit._BD18
#define BIRQ_BD17 birq.bit._BD17
#define BIRQ_BD16 birq.bit._BD16
#define BIRQ_BD15 birq.bit._BD15
#define BIRQ_BD14 birq.bit._BD14
#define BIRQ_BD13 birq.bit._BD13
#define BIRQ_BD12 birq.bit._BD12
#define BIRQ_BD11 birq.bit._BD11
#define BIRQ_BD10 birq.bit._BD10
#define BIRQ_BD9 birq.bit._BD9
#define BIRQ_BD8 birq.bit._BD8
#define BIRQ_BD7 birq.bit._BD7
#define BIRQ_BD6 birq.bit._BD6
#define BIRQ_BD5 birq.bit._BD5
#define BIRQ_BD4 birq.bit._BD4
#define BIRQ_BD3 birq.bit._BD3
#define BIRQ_BD2 birq.bit._BD2
#define BIRQ_BD1 birq.bit._BD1
#define BIRQ_BD0 birq.bit._BD0
__IO_EXTERN BCR0STR bcr0;  
#define BCR0 bcr0.lword
#define BCR0_SRX1 bcr0.bit._SRX1
#define BCR0_SW1 bcr0.bit._SW1
#define BCR0_SRX0 bcr0.bit._SRX0
#define BCR0_SW0 bcr0.bit._SW0
#define BCR0_URX1 bcr0.bit._URX1
#define BCR0_UW1 bcr0.bit._UW1
#define BCR0_URX0 bcr0.bit._URX0
#define BCR0_UW0 bcr0.bit._UW0
#define BCR0_MPE bcr0.bit._MPE
#define BCR0_COMB bcr0.bit._COMB
#define BCR0_CTC1 bcr0.bit._CTC1
#define BCR0_CTC0 bcr0.bit._CTC0
#define BCR0_OBS1 bcr0.bit._OBS1
#define BCR0_OBS0 bcr0.bit._OBS0
#define BCR0_OBT1 bcr0.bit._OBT1
#define BCR0_OBT0 bcr0.bit._OBT0
#define BCR0_EP3 bcr0.bit._EP3
#define BCR0_EP2 bcr0.bit._EP2
#define BCR0_EP1 bcr0.bit._EP1
#define BCR0_EP0 bcr0.bit._EP0
#define BCR0_EM1 bcr0.bit._EM1
#define BCR0_EM0 bcr0.bit._EM0
#define BCR0_ER1 bcr0.bit._ER1
#define BCR0_ER0 bcr0.bit._ER0
#define BCR0_CTC bcr0.bitc._CTC
#define BCR0_OBS bcr0.bitc._OBS
#define BCR0_OBT bcr0.bitc._OBT
#define BCR0_EP bcr0.bitc._EP
#define BCR0_EM bcr0.bitc._EM
#define BCR0_ER bcr0.bitc._ER
__IO_EXTERN BCR1STR bcr1;  
#define BCR1 bcr1.lword
#define BCR1_SRX1 bcr1.bit._SRX1
#define BCR1_SW1 bcr1.bit._SW1
#define BCR1_SRX0 bcr1.bit._SRX0
#define BCR1_SW0 bcr1.bit._SW0
#define BCR1_URX1 bcr1.bit._URX1
#define BCR1_UW1 bcr1.bit._UW1
#define BCR1_URX0 bcr1.bit._URX0
#define BCR1_UW0 bcr1.bit._UW0
#define BCR1_MPE bcr1.bit._MPE
#define BCR1_COMB bcr1.bit._COMB
#define BCR1_CTC1 bcr1.bit._CTC1
#define BCR1_CTC0 bcr1.bit._CTC0
#define BCR1_OBS1 bcr1.bit._OBS1
#define BCR1_OBS0 bcr1.bit._OBS0
#define BCR1_OBT1 bcr1.bit._OBT1
#define BCR1_OBT0 bcr1.bit._OBT0
#define BCR1_EP3 bcr1.bit._EP3
#define BCR1_EP2 bcr1.bit._EP2
#define BCR1_EP1 bcr1.bit._EP1
#define BCR1_EP0 bcr1.bit._EP0
#define BCR1_EM1 bcr1.bit._EM1
#define BCR1_EM0 bcr1.bit._EM0
#define BCR1_ER1 bcr1.bit._ER1
#define BCR1_ER0 bcr1.bit._ER0
#define BCR1_CTC bcr1.bitc._CTC
#define BCR1_OBS bcr1.bitc._OBS
#define BCR1_OBT bcr1.bitc._OBT
#define BCR1_EP bcr1.bitc._EP
#define BCR1_EM bcr1.bitc._EM
#define BCR1_ER bcr1.bitc._ER
__IO_EXTERN IO_LWORD bad0;  
#define BAD0 bad0
__IO_EXTERN IO_LWORD bad1;  
#define BAD1 bad1
__IO_EXTERN IO_LWORD bad2;  
#define BAD2 bad2
__IO_EXTERN IO_LWORD bad3;  
#define BAD3 bad3
__IO_EXTERN IO_LWORD bad4;  
#define BAD4 bad4
__IO_EXTERN IO_LWORD bad5;  
#define BAD5 bad5
__IO_EXTERN IO_LWORD bad6;  
#define BAD6 bad6
__IO_EXTERN IO_LWORD bad7;  
#define BAD7 bad7
__IO_EXTERN IO_LWORD fsv1;   /* FSV & BSV Registers */
#define FSV1 fsv1
__IO_EXTERN IO_LWORD bsv1;  
#define BSV1 bsv1
__IO_EXTERN IO_LWORD fsv2;  
#define FSV2 fsv2
__IO_EXTERN IO_LWORD bsv2;  
#define BSV2 bsv2
/* include : INC465k_BSYNC.INC */
/*-------------------------------------------------------------------*/
/* INC465k.BSYNC :  Macros Bus Sync*/

#define RB_SYNC if(RBSYNC)
#define CB_SYNC4 if(CBSYNC4)
/*-------------------------------------------------------------------*/
#endif                   /* __FASM__    */
#endif                   /* __MB91XXX_H */
#endif                   /* __IO_DEFINE */
