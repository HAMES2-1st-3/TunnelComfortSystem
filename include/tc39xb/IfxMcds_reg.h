/**
 * \file IfxMcds_reg.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC39XB_UM_V1.0.0.R0
 * Specification: TC3xx User Manual V1.0.0
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxSfr_Mcds_Registers_Cfg Mcds address
 * \ingroup IfxSfr_Mcds_Registers
 * 
 * \defgroup IfxSfr_Mcds_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Mcds_Registers_Cfg
 *
 * \defgroup IfxSfr_Mcds_Registers_Cfg_Mcds 2-MCDS
 * \ingroup IfxSfr_Mcds_Registers_Cfg
 *
 *
 */
#ifndef IFXMCDS_REG_H
#define IFXMCDS_REG_H 1
/******************************************************************************/
#include "IfxMcds_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Mcds_Registers_Cfg_BaseAddress
 * \{  */

/** \brief MCDS object */
#define MODULE_MCDS /*lint --e(923, 9078)*/ ((*(Ifx_MCDS*)0xFA010000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_Registers_Cfg_Mcds
 * \{  */
/** \brief 0, Clock Control Register */
#define MCDS_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_CLC*)0xFA010000u)

/** \brief 4, OCDS Control and Status */
#define MCDS_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_OCS*)0xFA010004u)

/** \brief 8, Module Identification Register */
#define MCDS_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_ID*)0xFA010008u)

/** \brief 10, MCDS Control Register */
#define MCDS_CT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_CT*)0xFA010010u)

/** \brief 14, MCDS Signal Source Control */
#define MCDS_MUX /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MUX*)0xFA010014u)

/** \brief 18, Session ID Low Register */
#define MCDS_SESSIDL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SESSIDL*)0xFA010018u)

/** \brief 1C, Session ID High Register */
#define MCDS_SESSIDH /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SESSIDH*)0xFA01001Cu)

/** \brief 20, MCDS_TC Signal Source Control */
#define MCDS_MUX_TC_RC /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MUX_TC_RC*)0xFA010020u)

/** \brief F8, Access Enable Register 1 */
#define MCDS_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_ACCEN1*)0xFA0100F8u)

/** \brief FC, Access Enable Register 0 */
#define MCDS_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_ACCEN0*)0xFA0100FCu)

/** \brief 200, Trace Buffer Write Pointer */
#define MCDS_FIFONOW /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFONOW*)0xFA010200u)

/** \brief 204, Trace Buffer Bottom Register */
#define MCDS_FIFOBOT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOBOT*)0xFA010204u)

/** \brief 208, Trace Buffer PRE/POST Register */
#define MCDS_FIFOPRE /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOPRE*)0xFA010208u)

/** \brief 20C, Trace Buffer Top Register */
#define MCDS_FIFOTOP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOTOP*)0xFA01020Cu)

/** \brief 210, Trace Buffer Control Register */
#define MCDS_FIFOCTL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOCTL*)0xFA010210u)

/** \brief 214, Trace Buffer Comparator Register */
#define MCDS_FIFOWARN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOWARN*)0xFA010214u)

/** \brief 218, Trace Buffer Comparator Register */
#define MCDS_FIFOWARN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOWARN*)0xFA010218u)

/** \brief 21C, FIFO Overflow Counter Register */
#define MCDS_FIFOOVRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOOVRCNT*)0xFA01021Cu)

/** \brief 220, Trace Buffer Captured Write Pointer */
#define MCDS_FIFONTNOW /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFONTNOW*)0xFA010220u)

/** \brief 400, Clock Counter Register */
#define MCDS_TSUREFCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TSUREFCNT*)0xFA010400u)

/** \brief 404, Clock Prescaler Register */
#define MCDS_TSUPRSCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TSUPRSCL*)0xFA010404u)

/** \brief 408, Clock Counter Register */
#define MCDS_TSUEMUCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TSUEMUCNT*)0xFA010408u)

/** \brief 800, Event Definition Register 0 */
#define MCDS_MCXEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010800u)

/** \brief 804, Event Definition Register 1 */
#define MCDS_MCXEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010804u)

/** \brief 808, Event Definition Register 2 */
#define MCDS_MCXEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010808u)

/** \brief 80C, Event Definition Register 3 */
#define MCDS_MCXEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01080Cu)

/** \brief 810, Event Definition Register 4 */
#define MCDS_MCXEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010810u)

/** \brief 814, Event Definition Register 5 */
#define MCDS_MCXEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010814u)

/** \brief 818, Event Definition Register 6 */
#define MCDS_MCXEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010818u)

/** \brief 81C, Event Definition Register 7 */
#define MCDS_MCXEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01081Cu)

/** \brief 820, Event Definition Register 8 */
#define MCDS_MCXEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010820u)

/** \brief 824, Event Definition Register 9 */
#define MCDS_MCXEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010824u)

/** \brief 828, Event Definition Register 10 */
#define MCDS_MCXEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010828u)

/** \brief 82C, Event Definition Register 11 */
#define MCDS_MCXEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01082Cu)

/** \brief 830, Event Definition Register 12 */
#define MCDS_MCXEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010830u)

/** \brief 834, Event Definition Register 13 */
#define MCDS_MCXEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010834u)

/** \brief 838, Event Definition Register 14 */
#define MCDS_MCXEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010838u)

/** \brief 83C, Event Definition Register 15 */
#define MCDS_MCXEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01083Cu)

/** \brief 840, Event Definition Register 16 */
#define MCDS_MCXEVT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010840u)

/** \brief 844, Event Definition Register 17 */
#define MCDS_MCXEVT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010844u)

/** \brief 848, Event Definition Register 18 */
#define MCDS_MCXEVT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010848u)

/** \brief 84C, Event Definition Register 19 */
#define MCDS_MCXEVT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01084Cu)

/** \brief 850, Event Definition Register 20 */
#define MCDS_MCXEVT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010850u)

/** \brief 854, Event Definition Register 21 */
#define MCDS_MCXEVT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010854u)

/** \brief 858, Event Definition Register 22 */
#define MCDS_MCXEVT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010858u)

/** \brief 85C, Event Definition Register 23 */
#define MCDS_MCXEVT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01085Cu)

/** \brief 880, Action Definition Register 0 */
#define MCDS_MCXACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010880u)

/** \brief 884, Action Definition Register 1 */
#define MCDS_MCXACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010884u)

/** \brief 888, Action Definition Register 2 */
#define MCDS_MCXACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010888u)

/** \brief 88C, Action Definition Register 3 */
#define MCDS_MCXACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01088Cu)

/** \brief 890, Action Definition Register 4 */
#define MCDS_MCXACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010890u)

/** \brief 894, Action Definition Register 5 */
#define MCDS_MCXACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010894u)

/** \brief 898, Action Definition Register 6 */
#define MCDS_MCXACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010898u)

/** \brief 89C, Action Definition Register 7 */
#define MCDS_MCXACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01089Cu)

/** \brief 8A0, Action Definition Register 8 */
#define MCDS_MCXACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108A0u)

/** \brief 8A4, Action Definition Register 9 */
#define MCDS_MCXACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108A4u)

/** \brief 8A8, Action Definition Register 10 */
#define MCDS_MCXACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108A8u)

/** \brief 8AC, Action Definition Register 11 */
#define MCDS_MCXACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108ACu)

/** \brief 8B0, Action Definition Register 12 */
#define MCDS_MCXACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108B0u)

/** \brief 8B4, Action Definition Register 13 */
#define MCDS_MCXACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108B4u)

/** \brief 8B8, Action Definition Register 14 */
#define MCDS_MCXACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108B8u)

/** \brief 8BC, Action Definition Register 15 */
#define MCDS_MCXACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108BCu)

/** \brief 8C0, Action Definition Register 16 */
#define MCDS_MCXACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108C0u)

/** \brief 8C4, Action Definition Register 17 */
#define MCDS_MCXACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108C4u)

/** \brief 8C8, Action Definition Register 18 */
#define MCDS_MCXACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108C8u)

/** \brief 8CC, Action Definition Register 19 */
#define MCDS_MCXACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108CCu)

/** \brief 8D0, Action Definition Register 20 */
#define MCDS_MCXACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108D0u)

/** \brief 8D4, Action Definition Register 21 */
#define MCDS_MCXACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108D4u)

/** \brief 8D8, Action Definition Register 22 */
#define MCDS_MCXACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108D8u)

/** \brief 8DC, Action Definition Register 23 */
#define MCDS_MCXACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108DCu)

/** \brief 8E0, Action Definition Register 24 */
#define MCDS_MCXACT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108E0u)

/** \brief 8E4, Action Definition Register 25 */
#define MCDS_MCXACT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108E4u)

/** \brief 8E8, Action Definition Register 26 */
#define MCDS_MCXACT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108E8u)

/** \brief 8EC, Action Definition Register 27 */
#define MCDS_MCXACT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108ECu)

/** \brief 8F0, Action Definition Register 28 */
#define MCDS_MCXACT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108F0u)

/** \brief 8F4, Action Definition Register 29 */
#define MCDS_MCXACT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108F4u)

/** \brief 8F8, Action Definition Register 30 */
#define MCDS_MCXACT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108F8u)

/** \brief 8FC, Action Definition Register 31 */
#define MCDS_MCXACT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108FCu)

/** \brief 900, Action Definition Register 32 */
#define MCDS_MCXACT32 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010900u)

/** \brief 904, Action Definition Register 33 */
#define MCDS_MCXACT33 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010904u)

/** \brief 908, Action Definition Register 34 */
#define MCDS_MCXACT34 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010908u)

/** \brief 90C, Action Definition Register 35 */
#define MCDS_MCXACT35 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01090Cu)

/** \brief 910, Action Definition Register 36 */
#define MCDS_MCXACT36 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010910u)

/** \brief 914, Action Definition Register 37 */
#define MCDS_MCXACT37 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010914u)

/** \brief 918, Action Definition Register 38 */
#define MCDS_MCXACT38 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010918u)

/** \brief 91C, Action Definition Register 39 */
#define MCDS_MCXACT39 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01091Cu)

/** \brief 920, Action Definition Register 40 */
#define MCDS_MCXACT40 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010920u)

/** \brief 924, Action Definition Register 41 */
#define MCDS_MCXACT41 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010924u)

/** \brief 928, Action Definition Register 42 */
#define MCDS_MCXACT42 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010928u)

/** \brief 92C, Action Definition Register 43 */
#define MCDS_MCXACT43 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01092Cu)

/** \brief 930, Action Definition Register 44 */
#define MCDS_MCXACT44 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010930u)

/** \brief 934, Action Definition Register 45 */
#define MCDS_MCXACT45 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010934u)

/** \brief 938, Action Definition Register 46 */
#define MCDS_MCXACT46 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010938u)

/** \brief 93C, Action Definition Register 47 */
#define MCDS_MCXACT47 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01093Cu)

/** \brief 940, Action Definition Register 48 */
#define MCDS_MCXACT48 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010940u)

/** \brief 944, Action Definition Register 49 */
#define MCDS_MCXACT49 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010944u)

/** \brief 948, Action Definition Register 50 */
#define MCDS_MCXACT50 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010948u)

/** \brief 94C, Action Definition Register 51 */
#define MCDS_MCXACT51 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01094Cu)

/** \brief 950, Action Definition Register 52 */
#define MCDS_MCXACT52 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010950u)

/** \brief 954, Action Definition Register 53 */
#define MCDS_MCXACT53 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010954u)

/** \brief 958, Action Definition Register 54 */
#define MCDS_MCXACT54 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010958u)

/** \brief 95C, Action Definition Register 55 */
#define MCDS_MCXACT55 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01095Cu)

/** \brief 960, Action Definition Register 56 */
#define MCDS_MCXACT56 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010960u)

/** \brief 964, Action Definition Register 57 */
#define MCDS_MCXACT57 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010964u)

/** \brief 968, Action Definition Register 58 */
#define MCDS_MCXACT58 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010968u)

/** \brief 96C, Action Definition Register 59 */
#define MCDS_MCXACT59 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01096Cu)

/** \brief 970, Action Definition Register 60 */
#define MCDS_MCXACT60 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010970u)

/** \brief 974, Action Definition Register 61 */
#define MCDS_MCXACT61 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010974u)

/** \brief 978, Action Definition Register 62 */
#define MCDS_MCXACT62 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010978u)

/** \brief 97C, Action Definition Register 63 */
#define MCDS_MCXACT63 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01097Cu)

/** \brief 980, Action Definition Register 64 */
#define MCDS_MCXACT64 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010980u)

/** \brief 984, Action Definition Register 65 */
#define MCDS_MCXACT65 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010984u)

/** \brief 988, Action Definition Register 66 */
#define MCDS_MCXACT66 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010988u)

/** \brief 98C, Action Definition Register 67 */
#define MCDS_MCXACT67 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01098Cu)

/** \brief 990, Action Definition Register 68 */
#define MCDS_MCXACT68 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010990u)

/** \brief 994, Action Definition Register 69 */
#define MCDS_MCXACT69 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010994u)

/** \brief 998, Action Definition Register 70 */
#define MCDS_MCXACT70 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010998u)

/** \brief 99C, Action Definition Register 71 */
#define MCDS_MCXACT71 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01099Cu)

/** \brief 9A0, Action Definition Register 72 */
#define MCDS_MCXACT72 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109A0u)

/** \brief 9A4, Action Definition Register 73 */
#define MCDS_MCXACT73 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109A4u)

/** \brief 9A8, Action Definition Register 74 */
#define MCDS_MCXACT74 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109A8u)

/** \brief 9AC, Action Definition Register 75 */
#define MCDS_MCXACT75 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109ACu)

/** \brief 9B0, Action Definition Register 76 */
#define MCDS_MCXACT76 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109B0u)

/** \brief 9B4, Action Definition Register 77 */
#define MCDS_MCXACT77 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109B4u)

/** \brief 9B8, Action Definition Register 78 */
#define MCDS_MCXACT78 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109B8u)

/** \brief 9BC, Action Definition Register 79 */
#define MCDS_MCXACT79 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109BCu)

/** \brief 9C0, Action Definition Register 80 */
#define MCDS_MCXACT80 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109C0u)

/** \brief A00, Counter Control Register */
#define MCDS_MCX0_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A00u)
/** Alias (User Manual Name) for MCDS_MCX0_CCL.
* To use register names with standard convension, please use MCDS_MCX0_CCL.
*/
#define MCDS_MCXCCL0 (MCDS_MCX0_CCL)

/** \brief A04, Counter Limit Register */
#define MCDS_MCX0_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A04u)
/** Alias (User Manual Name) for MCDS_MCX0_LMT.
* To use register names with standard convension, please use MCDS_MCX0_LMT.
*/
#define MCDS_MCXLMT0 (MCDS_MCX0_LMT)

/** \brief A08, Current Count Register */
#define MCDS_MCX0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A08u)
/** Alias (User Manual Name) for MCDS_MCX0_CNT.
* To use register names with standard convension, please use MCDS_MCX0_CNT.
*/
#define MCDS_MCXCNT0 (MCDS_MCX0_CNT)

/** \brief A10, Counter Control Register */
#define MCDS_MCX1_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A10u)
/** Alias (User Manual Name) for MCDS_MCX1_CCL.
* To use register names with standard convension, please use MCDS_MCX1_CCL.
*/
#define MCDS_MCXCCL1 (MCDS_MCX1_CCL)

/** \brief A14, Counter Limit Register */
#define MCDS_MCX1_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A14u)
/** Alias (User Manual Name) for MCDS_MCX1_LMT.
* To use register names with standard convension, please use MCDS_MCX1_LMT.
*/
#define MCDS_MCXLMT1 (MCDS_MCX1_LMT)

/** \brief A18, Current Count Register */
#define MCDS_MCX1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A18u)
/** Alias (User Manual Name) for MCDS_MCX1_CNT.
* To use register names with standard convension, please use MCDS_MCX1_CNT.
*/
#define MCDS_MCXCNT1 (MCDS_MCX1_CNT)

/** \brief A20, Counter Control Register */
#define MCDS_MCX2_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A20u)
/** Alias (User Manual Name) for MCDS_MCX2_CCL.
* To use register names with standard convension, please use MCDS_MCX2_CCL.
*/
#define MCDS_MCXCCL2 (MCDS_MCX2_CCL)

/** \brief A24, Counter Limit Register */
#define MCDS_MCX2_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A24u)
/** Alias (User Manual Name) for MCDS_MCX2_LMT.
* To use register names with standard convension, please use MCDS_MCX2_LMT.
*/
#define MCDS_MCXLMT2 (MCDS_MCX2_LMT)

/** \brief A28, Current Count Register */
#define MCDS_MCX2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A28u)
/** Alias (User Manual Name) for MCDS_MCX2_CNT.
* To use register names with standard convension, please use MCDS_MCX2_CNT.
*/
#define MCDS_MCXCNT2 (MCDS_MCX2_CNT)

/** \brief A30, Counter Control Register */
#define MCDS_MCX3_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A30u)
/** Alias (User Manual Name) for MCDS_MCX3_CCL.
* To use register names with standard convension, please use MCDS_MCX3_CCL.
*/
#define MCDS_MCXCCL3 (MCDS_MCX3_CCL)

/** \brief A34, Counter Limit Register */
#define MCDS_MCX3_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A34u)
/** Alias (User Manual Name) for MCDS_MCX3_LMT.
* To use register names with standard convension, please use MCDS_MCX3_LMT.
*/
#define MCDS_MCXLMT3 (MCDS_MCX3_LMT)

/** \brief A38, Current Count Register */
#define MCDS_MCX3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A38u)
/** Alias (User Manual Name) for MCDS_MCX3_CNT.
* To use register names with standard convension, please use MCDS_MCX3_CNT.
*/
#define MCDS_MCXCNT3 (MCDS_MCX3_CNT)

/** \brief A40, Counter Control Register */
#define MCDS_MCX4_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A40u)
/** Alias (User Manual Name) for MCDS_MCX4_CCL.
* To use register names with standard convension, please use MCDS_MCX4_CCL.
*/
#define MCDS_MCXCCL4 (MCDS_MCX4_CCL)

/** \brief A44, Counter Limit Register */
#define MCDS_MCX4_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A44u)
/** Alias (User Manual Name) for MCDS_MCX4_LMT.
* To use register names with standard convension, please use MCDS_MCX4_LMT.
*/
#define MCDS_MCXLMT4 (MCDS_MCX4_LMT)

/** \brief A48, Current Count Register */
#define MCDS_MCX4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A48u)
/** Alias (User Manual Name) for MCDS_MCX4_CNT.
* To use register names with standard convension, please use MCDS_MCX4_CNT.
*/
#define MCDS_MCXCNT4 (MCDS_MCX4_CNT)

/** \brief A50, Counter Control Register */
#define MCDS_MCX5_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A50u)
/** Alias (User Manual Name) for MCDS_MCX5_CCL.
* To use register names with standard convension, please use MCDS_MCX5_CCL.
*/
#define MCDS_MCXCCL5 (MCDS_MCX5_CCL)

/** \brief A54, Counter Limit Register */
#define MCDS_MCX5_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A54u)
/** Alias (User Manual Name) for MCDS_MCX5_LMT.
* To use register names with standard convension, please use MCDS_MCX5_LMT.
*/
#define MCDS_MCXLMT5 (MCDS_MCX5_LMT)

/** \brief A58, Current Count Register */
#define MCDS_MCX5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A58u)
/** Alias (User Manual Name) for MCDS_MCX5_CNT.
* To use register names with standard convension, please use MCDS_MCX5_CNT.
*/
#define MCDS_MCXCNT5 (MCDS_MCX5_CNT)

/** \brief A60, Counter Control Register */
#define MCDS_MCX6_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A60u)
/** Alias (User Manual Name) for MCDS_MCX6_CCL.
* To use register names with standard convension, please use MCDS_MCX6_CCL.
*/
#define MCDS_MCXCCL6 (MCDS_MCX6_CCL)

/** \brief A64, Counter Limit Register */
#define MCDS_MCX6_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A64u)
/** Alias (User Manual Name) for MCDS_MCX6_LMT.
* To use register names with standard convension, please use MCDS_MCX6_LMT.
*/
#define MCDS_MCXLMT6 (MCDS_MCX6_LMT)

/** \brief A68, Current Count Register */
#define MCDS_MCX6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A68u)
/** Alias (User Manual Name) for MCDS_MCX6_CNT.
* To use register names with standard convension, please use MCDS_MCX6_CNT.
*/
#define MCDS_MCXCNT6 (MCDS_MCX6_CNT)

/** \brief A70, Counter Control Register */
#define MCDS_MCX7_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A70u)
/** Alias (User Manual Name) for MCDS_MCX7_CCL.
* To use register names with standard convension, please use MCDS_MCX7_CCL.
*/
#define MCDS_MCXCCL7 (MCDS_MCX7_CCL)

/** \brief A74, Counter Limit Register */
#define MCDS_MCX7_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A74u)
/** Alias (User Manual Name) for MCDS_MCX7_LMT.
* To use register names with standard convension, please use MCDS_MCX7_LMT.
*/
#define MCDS_MCXLMT7 (MCDS_MCX7_LMT)

/** \brief A78, Current Count Register */
#define MCDS_MCX7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A78u)
/** Alias (User Manual Name) for MCDS_MCX7_CNT.
* To use register names with standard convension, please use MCDS_MCX7_CNT.
*/
#define MCDS_MCXCNT7 (MCDS_MCX7_CNT)

/** \brief A80, Counter Control Register */
#define MCDS_MCX8_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A80u)
/** Alias (User Manual Name) for MCDS_MCX8_CCL.
* To use register names with standard convension, please use MCDS_MCX8_CCL.
*/
#define MCDS_MCXCCL8 (MCDS_MCX8_CCL)

/** \brief A84, Counter Limit Register */
#define MCDS_MCX8_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A84u)
/** Alias (User Manual Name) for MCDS_MCX8_LMT.
* To use register names with standard convension, please use MCDS_MCX8_LMT.
*/
#define MCDS_MCXLMT8 (MCDS_MCX8_LMT)

/** \brief A88, Current Count Register */
#define MCDS_MCX8_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A88u)
/** Alias (User Manual Name) for MCDS_MCX8_CNT.
* To use register names with standard convension, please use MCDS_MCX8_CNT.
*/
#define MCDS_MCXCNT8 (MCDS_MCX8_CNT)

/** \brief A90, Counter Control Register */
#define MCDS_MCX9_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010A90u)
/** Alias (User Manual Name) for MCDS_MCX9_CCL.
* To use register names with standard convension, please use MCDS_MCX9_CCL.
*/
#define MCDS_MCXCCL9 (MCDS_MCX9_CCL)

/** \brief A94, Counter Limit Register */
#define MCDS_MCX9_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010A94u)
/** Alias (User Manual Name) for MCDS_MCX9_LMT.
* To use register names with standard convension, please use MCDS_MCX9_LMT.
*/
#define MCDS_MCXLMT9 (MCDS_MCX9_LMT)

/** \brief A98, Current Count Register */
#define MCDS_MCX9_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010A98u)
/** Alias (User Manual Name) for MCDS_MCX9_CNT.
* To use register names with standard convension, please use MCDS_MCX9_CNT.
*/
#define MCDS_MCXCNT9 (MCDS_MCX9_CNT)

/** \brief AA0, Counter Control Register */
#define MCDS_MCX10_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010AA0u)
/** Alias (User Manual Name) for MCDS_MCX10_CCL.
* To use register names with standard convension, please use MCDS_MCX10_CCL.
*/
#define MCDS_MCXCCL10 (MCDS_MCX10_CCL)

/** \brief AA4, Counter Limit Register */
#define MCDS_MCX10_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010AA4u)
/** Alias (User Manual Name) for MCDS_MCX10_LMT.
* To use register names with standard convension, please use MCDS_MCX10_LMT.
*/
#define MCDS_MCXLMT10 (MCDS_MCX10_LMT)

/** \brief AA8, Current Count Register */
#define MCDS_MCX10_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010AA8u)
/** Alias (User Manual Name) for MCDS_MCX10_CNT.
* To use register names with standard convension, please use MCDS_MCX10_CNT.
*/
#define MCDS_MCXCNT10 (MCDS_MCX10_CNT)

/** \brief AB0, Counter Control Register */
#define MCDS_MCX11_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010AB0u)
/** Alias (User Manual Name) for MCDS_MCX11_CCL.
* To use register names with standard convension, please use MCDS_MCX11_CCL.
*/
#define MCDS_MCXCCL11 (MCDS_MCX11_CCL)

/** \brief AB4, Counter Limit Register */
#define MCDS_MCX11_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010AB4u)
/** Alias (User Manual Name) for MCDS_MCX11_LMT.
* To use register names with standard convension, please use MCDS_MCX11_LMT.
*/
#define MCDS_MCXLMT11 (MCDS_MCX11_LMT)

/** \brief AB8, Current Count Register */
#define MCDS_MCX11_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010AB8u)
/** Alias (User Manual Name) for MCDS_MCX11_CNT.
* To use register names with standard convension, please use MCDS_MCX11_CNT.
*/
#define MCDS_MCXCNT11 (MCDS_MCX11_CNT)

/** \brief AC0, Counter Control Register */
#define MCDS_MCX12_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010AC0u)
/** Alias (User Manual Name) for MCDS_MCX12_CCL.
* To use register names with standard convension, please use MCDS_MCX12_CCL.
*/
#define MCDS_MCXCCL12 (MCDS_MCX12_CCL)

/** \brief AC4, Counter Limit Register */
#define MCDS_MCX12_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010AC4u)
/** Alias (User Manual Name) for MCDS_MCX12_LMT.
* To use register names with standard convension, please use MCDS_MCX12_LMT.
*/
#define MCDS_MCXLMT12 (MCDS_MCX12_LMT)

/** \brief AC8, Current Count Register */
#define MCDS_MCX12_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010AC8u)
/** Alias (User Manual Name) for MCDS_MCX12_CNT.
* To use register names with standard convension, please use MCDS_MCX12_CNT.
*/
#define MCDS_MCXCNT12 (MCDS_MCX12_CNT)

/** \brief AD0, Counter Control Register */
#define MCDS_MCX13_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010AD0u)
/** Alias (User Manual Name) for MCDS_MCX13_CCL.
* To use register names with standard convension, please use MCDS_MCX13_CCL.
*/
#define MCDS_MCXCCL13 (MCDS_MCX13_CCL)

/** \brief AD4, Counter Limit Register */
#define MCDS_MCX13_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010AD4u)
/** Alias (User Manual Name) for MCDS_MCX13_LMT.
* To use register names with standard convension, please use MCDS_MCX13_LMT.
*/
#define MCDS_MCXLMT13 (MCDS_MCX13_LMT)

/** \brief AD8, Current Count Register */
#define MCDS_MCX13_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010AD8u)
/** Alias (User Manual Name) for MCDS_MCX13_CNT.
* To use register names with standard convension, please use MCDS_MCX13_CNT.
*/
#define MCDS_MCXCNT13 (MCDS_MCX13_CNT)

/** \brief AE0, Counter Control Register */
#define MCDS_MCX14_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010AE0u)
/** Alias (User Manual Name) for MCDS_MCX14_CCL.
* To use register names with standard convension, please use MCDS_MCX14_CCL.
*/
#define MCDS_MCXCCL14 (MCDS_MCX14_CCL)

/** \brief AE4, Counter Limit Register */
#define MCDS_MCX14_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010AE4u)
/** Alias (User Manual Name) for MCDS_MCX14_LMT.
* To use register names with standard convension, please use MCDS_MCX14_LMT.
*/
#define MCDS_MCXLMT14 (MCDS_MCX14_LMT)

/** \brief AE8, Current Count Register */
#define MCDS_MCX14_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010AE8u)
/** Alias (User Manual Name) for MCDS_MCX14_CNT.
* To use register names with standard convension, please use MCDS_MCX14_CNT.
*/
#define MCDS_MCXCNT14 (MCDS_MCX14_CNT)

/** \brief AF0, Counter Control Register */
#define MCDS_MCX15_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010AF0u)
/** Alias (User Manual Name) for MCDS_MCX15_CCL.
* To use register names with standard convension, please use MCDS_MCX15_CCL.
*/
#define MCDS_MCXCCL15 (MCDS_MCX15_CCL)

/** \brief AF4, Counter Limit Register */
#define MCDS_MCX15_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010AF4u)
/** Alias (User Manual Name) for MCDS_MCX15_LMT.
* To use register names with standard convension, please use MCDS_MCX15_LMT.
*/
#define MCDS_MCXLMT15 (MCDS_MCX15_LMT)

/** \brief AF8, Current Count Register */
#define MCDS_MCX15_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010AF8u)
/** Alias (User Manual Name) for MCDS_MCX15_CNT.
* To use register names with standard convension, please use MCDS_MCX15_CNT.
*/
#define MCDS_MCXCNT15 (MCDS_MCX15_CNT)

/** \brief B00, Counter Control Register */
#define MCDS_MCX16_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B00u)
/** Alias (User Manual Name) for MCDS_MCX16_CCL.
* To use register names with standard convension, please use MCDS_MCX16_CCL.
*/
#define MCDS_MCXCCL16 (MCDS_MCX16_CCL)

/** \brief B04, Counter Limit Register */
#define MCDS_MCX16_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B04u)
/** Alias (User Manual Name) for MCDS_MCX16_LMT.
* To use register names with standard convension, please use MCDS_MCX16_LMT.
*/
#define MCDS_MCXLMT16 (MCDS_MCX16_LMT)

/** \brief B08, Current Count Register */
#define MCDS_MCX16_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B08u)
/** Alias (User Manual Name) for MCDS_MCX16_CNT.
* To use register names with standard convension, please use MCDS_MCX16_CNT.
*/
#define MCDS_MCXCNT16 (MCDS_MCX16_CNT)

/** \brief B10, Counter Control Register */
#define MCDS_MCX17_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B10u)
/** Alias (User Manual Name) for MCDS_MCX17_CCL.
* To use register names with standard convension, please use MCDS_MCX17_CCL.
*/
#define MCDS_MCXCCL17 (MCDS_MCX17_CCL)

/** \brief B14, Counter Limit Register */
#define MCDS_MCX17_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B14u)
/** Alias (User Manual Name) for MCDS_MCX17_LMT.
* To use register names with standard convension, please use MCDS_MCX17_LMT.
*/
#define MCDS_MCXLMT17 (MCDS_MCX17_LMT)

/** \brief B18, Current Count Register */
#define MCDS_MCX17_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B18u)
/** Alias (User Manual Name) for MCDS_MCX17_CNT.
* To use register names with standard convension, please use MCDS_MCX17_CNT.
*/
#define MCDS_MCXCNT17 (MCDS_MCX17_CNT)

/** \brief B20, Counter Control Register */
#define MCDS_MCX18_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B20u)
/** Alias (User Manual Name) for MCDS_MCX18_CCL.
* To use register names with standard convension, please use MCDS_MCX18_CCL.
*/
#define MCDS_MCXCCL18 (MCDS_MCX18_CCL)

/** \brief B24, Counter Limit Register */
#define MCDS_MCX18_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B24u)
/** Alias (User Manual Name) for MCDS_MCX18_LMT.
* To use register names with standard convension, please use MCDS_MCX18_LMT.
*/
#define MCDS_MCXLMT18 (MCDS_MCX18_LMT)

/** \brief B28, Current Count Register */
#define MCDS_MCX18_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B28u)
/** Alias (User Manual Name) for MCDS_MCX18_CNT.
* To use register names with standard convension, please use MCDS_MCX18_CNT.
*/
#define MCDS_MCXCNT18 (MCDS_MCX18_CNT)

/** \brief B30, Counter Control Register */
#define MCDS_MCX19_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B30u)
/** Alias (User Manual Name) for MCDS_MCX19_CCL.
* To use register names with standard convension, please use MCDS_MCX19_CCL.
*/
#define MCDS_MCXCCL19 (MCDS_MCX19_CCL)

/** \brief B34, Counter Limit Register */
#define MCDS_MCX19_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B34u)
/** Alias (User Manual Name) for MCDS_MCX19_LMT.
* To use register names with standard convension, please use MCDS_MCX19_LMT.
*/
#define MCDS_MCXLMT19 (MCDS_MCX19_LMT)

/** \brief B38, Current Count Register */
#define MCDS_MCX19_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B38u)
/** Alias (User Manual Name) for MCDS_MCX19_CNT.
* To use register names with standard convension, please use MCDS_MCX19_CNT.
*/
#define MCDS_MCXCNT19 (MCDS_MCX19_CNT)

/** \brief B40, Counter Control Register */
#define MCDS_MCX20_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B40u)
/** Alias (User Manual Name) for MCDS_MCX20_CCL.
* To use register names with standard convension, please use MCDS_MCX20_CCL.
*/
#define MCDS_MCXCCL20 (MCDS_MCX20_CCL)

/** \brief B44, Counter Limit Register */
#define MCDS_MCX20_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B44u)
/** Alias (User Manual Name) for MCDS_MCX20_LMT.
* To use register names with standard convension, please use MCDS_MCX20_LMT.
*/
#define MCDS_MCXLMT20 (MCDS_MCX20_LMT)

/** \brief B48, Current Count Register */
#define MCDS_MCX20_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B48u)
/** Alias (User Manual Name) for MCDS_MCX20_CNT.
* To use register names with standard convension, please use MCDS_MCX20_CNT.
*/
#define MCDS_MCXCNT20 (MCDS_MCX20_CNT)

/** \brief B50, Counter Control Register */
#define MCDS_MCX21_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B50u)
/** Alias (User Manual Name) for MCDS_MCX21_CCL.
* To use register names with standard convension, please use MCDS_MCX21_CCL.
*/
#define MCDS_MCXCCL21 (MCDS_MCX21_CCL)

/** \brief B54, Counter Limit Register */
#define MCDS_MCX21_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B54u)
/** Alias (User Manual Name) for MCDS_MCX21_LMT.
* To use register names with standard convension, please use MCDS_MCX21_LMT.
*/
#define MCDS_MCXLMT21 (MCDS_MCX21_LMT)

/** \brief B58, Current Count Register */
#define MCDS_MCX21_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B58u)
/** Alias (User Manual Name) for MCDS_MCX21_CNT.
* To use register names with standard convension, please use MCDS_MCX21_CNT.
*/
#define MCDS_MCXCNT21 (MCDS_MCX21_CNT)

/** \brief B60, Counter Control Register */
#define MCDS_MCX22_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B60u)
/** Alias (User Manual Name) for MCDS_MCX22_CCL.
* To use register names with standard convension, please use MCDS_MCX22_CCL.
*/
#define MCDS_MCXCCL22 (MCDS_MCX22_CCL)

/** \brief B64, Counter Limit Register */
#define MCDS_MCX22_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B64u)
/** Alias (User Manual Name) for MCDS_MCX22_LMT.
* To use register names with standard convension, please use MCDS_MCX22_LMT.
*/
#define MCDS_MCXLMT22 (MCDS_MCX22_LMT)

/** \brief B68, Current Count Register */
#define MCDS_MCX22_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B68u)
/** Alias (User Manual Name) for MCDS_MCX22_CNT.
* To use register names with standard convension, please use MCDS_MCX22_CNT.
*/
#define MCDS_MCXCNT22 (MCDS_MCX22_CNT)

/** \brief B70, Counter Control Register */
#define MCDS_MCX23_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B70u)
/** Alias (User Manual Name) for MCDS_MCX23_CCL.
* To use register names with standard convension, please use MCDS_MCX23_CCL.
*/
#define MCDS_MCXCCL23 (MCDS_MCX23_CCL)

/** \brief B74, Counter Limit Register */
#define MCDS_MCX23_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B74u)
/** Alias (User Manual Name) for MCDS_MCX23_LMT.
* To use register names with standard convension, please use MCDS_MCX23_LMT.
*/
#define MCDS_MCXLMT23 (MCDS_MCX23_LMT)

/** \brief B78, Current Count Register */
#define MCDS_MCX23_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B78u)
/** Alias (User Manual Name) for MCDS_MCX23_CNT.
* To use register names with standard convension, please use MCDS_MCX23_CNT.
*/
#define MCDS_MCXCNT23 (MCDS_MCX23_CNT)

/** \brief B80, Counter Control Register */
#define MCDS_MCX24_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B80u)
/** Alias (User Manual Name) for MCDS_MCX24_CCL.
* To use register names with standard convension, please use MCDS_MCX24_CCL.
*/
#define MCDS_MCXCCL24 (MCDS_MCX24_CCL)

/** \brief B84, Counter Limit Register */
#define MCDS_MCX24_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B84u)
/** Alias (User Manual Name) for MCDS_MCX24_LMT.
* To use register names with standard convension, please use MCDS_MCX24_LMT.
*/
#define MCDS_MCXLMT24 (MCDS_MCX24_LMT)

/** \brief B88, Current Count Register */
#define MCDS_MCX24_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B88u)
/** Alias (User Manual Name) for MCDS_MCX24_CNT.
* To use register names with standard convension, please use MCDS_MCX24_CNT.
*/
#define MCDS_MCXCNT24 (MCDS_MCX24_CNT)

/** \brief B90, Counter Control Register */
#define MCDS_MCX25_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010B90u)
/** Alias (User Manual Name) for MCDS_MCX25_CCL.
* To use register names with standard convension, please use MCDS_MCX25_CCL.
*/
#define MCDS_MCXCCL25 (MCDS_MCX25_CCL)

/** \brief B94, Counter Limit Register */
#define MCDS_MCX25_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010B94u)
/** Alias (User Manual Name) for MCDS_MCX25_LMT.
* To use register names with standard convension, please use MCDS_MCX25_LMT.
*/
#define MCDS_MCXLMT25 (MCDS_MCX25_LMT)

/** \brief B98, Current Count Register */
#define MCDS_MCX25_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010B98u)
/** Alias (User Manual Name) for MCDS_MCX25_CNT.
* To use register names with standard convension, please use MCDS_MCX25_CNT.
*/
#define MCDS_MCXCNT25 (MCDS_MCX25_CNT)

/** \brief BA0, Counter Control Register */
#define MCDS_MCX26_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010BA0u)
/** Alias (User Manual Name) for MCDS_MCX26_CCL.
* To use register names with standard convension, please use MCDS_MCX26_CCL.
*/
#define MCDS_MCXCCL26 (MCDS_MCX26_CCL)

/** \brief BA4, Counter Limit Register */
#define MCDS_MCX26_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010BA4u)
/** Alias (User Manual Name) for MCDS_MCX26_LMT.
* To use register names with standard convension, please use MCDS_MCX26_LMT.
*/
#define MCDS_MCXLMT26 (MCDS_MCX26_LMT)

/** \brief BA8, Current Count Register */
#define MCDS_MCX26_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010BA8u)
/** Alias (User Manual Name) for MCDS_MCX26_CNT.
* To use register names with standard convension, please use MCDS_MCX26_CNT.
*/
#define MCDS_MCXCNT26 (MCDS_MCX26_CNT)

/** \brief BB0, Counter Control Register */
#define MCDS_MCX27_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010BB0u)
/** Alias (User Manual Name) for MCDS_MCX27_CCL.
* To use register names with standard convension, please use MCDS_MCX27_CCL.
*/
#define MCDS_MCXCCL27 (MCDS_MCX27_CCL)

/** \brief BB4, Counter Limit Register */
#define MCDS_MCX27_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010BB4u)
/** Alias (User Manual Name) for MCDS_MCX27_LMT.
* To use register names with standard convension, please use MCDS_MCX27_LMT.
*/
#define MCDS_MCXLMT27 (MCDS_MCX27_LMT)

/** \brief BB8, Current Count Register */
#define MCDS_MCX27_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010BB8u)
/** Alias (User Manual Name) for MCDS_MCX27_CNT.
* To use register names with standard convension, please use MCDS_MCX27_CNT.
*/
#define MCDS_MCXCNT27 (MCDS_MCX27_CNT)

/** \brief BC0, Counter Control Register */
#define MCDS_MCX28_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010BC0u)
/** Alias (User Manual Name) for MCDS_MCX28_CCL.
* To use register names with standard convension, please use MCDS_MCX28_CCL.
*/
#define MCDS_MCXCCL28 (MCDS_MCX28_CCL)

/** \brief BC4, Counter Limit Register */
#define MCDS_MCX28_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010BC4u)
/** Alias (User Manual Name) for MCDS_MCX28_LMT.
* To use register names with standard convension, please use MCDS_MCX28_LMT.
*/
#define MCDS_MCXLMT28 (MCDS_MCX28_LMT)

/** \brief BC8, Current Count Register */
#define MCDS_MCX28_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010BC8u)
/** Alias (User Manual Name) for MCDS_MCX28_CNT.
* To use register names with standard convension, please use MCDS_MCX28_CNT.
*/
#define MCDS_MCXCNT28 (MCDS_MCX28_CNT)

/** \brief BD0, Counter Control Register */
#define MCDS_MCX29_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010BD0u)
/** Alias (User Manual Name) for MCDS_MCX29_CCL.
* To use register names with standard convension, please use MCDS_MCX29_CCL.
*/
#define MCDS_MCXCCL29 (MCDS_MCX29_CCL)

/** \brief BD4, Counter Limit Register */
#define MCDS_MCX29_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010BD4u)
/** Alias (User Manual Name) for MCDS_MCX29_LMT.
* To use register names with standard convension, please use MCDS_MCX29_LMT.
*/
#define MCDS_MCXLMT29 (MCDS_MCX29_LMT)

/** \brief BD8, Current Count Register */
#define MCDS_MCX29_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010BD8u)
/** Alias (User Manual Name) for MCDS_MCX29_CNT.
* To use register names with standard convension, please use MCDS_MCX29_CNT.
*/
#define MCDS_MCXCNT29 (MCDS_MCX29_CNT)

/** \brief BE0, Counter Control Register */
#define MCDS_MCX30_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010BE0u)
/** Alias (User Manual Name) for MCDS_MCX30_CCL.
* To use register names with standard convension, please use MCDS_MCX30_CCL.
*/
#define MCDS_MCXCCL30 (MCDS_MCX30_CCL)

/** \brief BE4, Counter Limit Register */
#define MCDS_MCX30_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010BE4u)
/** Alias (User Manual Name) for MCDS_MCX30_LMT.
* To use register names with standard convension, please use MCDS_MCX30_LMT.
*/
#define MCDS_MCXLMT30 (MCDS_MCX30_LMT)

/** \brief BE8, Current Count Register */
#define MCDS_MCX30_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010BE8u)
/** Alias (User Manual Name) for MCDS_MCX30_CNT.
* To use register names with standard convension, please use MCDS_MCX30_CNT.
*/
#define MCDS_MCXCNT30 (MCDS_MCX30_CNT)

/** \brief BF0, Counter Control Register */
#define MCDS_MCX31_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CCL*)0xFA010BF0u)
/** Alias (User Manual Name) for MCDS_MCX31_CCL.
* To use register names with standard convension, please use MCDS_MCX31_CCL.
*/
#define MCDS_MCXCCL31 (MCDS_MCX31_CCL)

/** \brief BF4, Counter Limit Register */
#define MCDS_MCX31_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_LMT*)0xFA010BF4u)
/** Alias (User Manual Name) for MCDS_MCX31_LMT.
* To use register names with standard convension, please use MCDS_MCX31_LMT.
*/
#define MCDS_MCXLMT31 (MCDS_MCX31_LMT)

/** \brief BF8, Current Count Register */
#define MCDS_MCX31_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCX_CNT*)0xFA010BF8u)
/** Alias (User Manual Name) for MCDS_MCX31_CNT.
* To use register names with standard convension, please use MCDS_MCX31_CNT.
*/
#define MCDS_MCXCNT31 (MCDS_MCX31_CNT)

/** \brief C00, Performance Counter Configuration Register */
#define MCDS_MCXPERFCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXPERFCFG*)0xFA010C00u)

/** \brief 2000, Debug Status Register */
#define MCDS_TCXDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXDCSTS*)0xFA012000u)

/** \brief 2004, Current Process ID */
#define MCDS_TCXCID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXCID*)0xFA012004u)

/** \brief 2008, Current Instruction Pointer */
#define MCDS_TCXCIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXCIP*)0xFA012008u)

/** \brief 200C, Compact Function Trace Register */
#define MCDS_TCXCFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXCFT*)0xFA01200Cu)

/** \brief 2200, Lookup Table Data Register */
#define MCDS_TCXPALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALLUTD*)0xFA012200u)

/** \brief 2204, Lookup Table Address Register */
#define MCDS_TCXPALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALLUTA*)0xFA012204u)

/** \brief 2210, Lookup Table Base Register */
#define MCDS_TCXPAL0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_BND*)0xFA012210u)
/** Alias (User Manual Name) for MCDS_TCXPAL0_BND.
* To use register names with standard convension, please use MCDS_TCXPAL0_BND.
*/
#define MCDS_TCXPALBND0 (MCDS_TCXPAL0_BND)

/** \brief 2214, Lookup Table Range Register */
#define MCDS_TCXPAL0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_RNG*)0xFA012214u)
/** Alias (User Manual Name) for MCDS_TCXPAL0_RNG.
* To use register names with standard convension, please use MCDS_TCXPAL0_RNG.
*/
#define MCDS_TCXPALRNG0 (MCDS_TCXPAL0_RNG)

/** \brief 2218, Lookup Table Mapping Register */
#define MCDS_TCXPAL0_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_MAP*)0xFA012218u)
/** Alias (User Manual Name) for MCDS_TCXPAL0_MAP.
* To use register names with standard convension, please use MCDS_TCXPAL0_MAP.
*/
#define MCDS_TCXPALMAP0 (MCDS_TCXPAL0_MAP)

/** \brief 2220, Lookup Table Base Register */
#define MCDS_TCXPAL1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_BND*)0xFA012220u)
/** Alias (User Manual Name) for MCDS_TCXPAL1_BND.
* To use register names with standard convension, please use MCDS_TCXPAL1_BND.
*/
#define MCDS_TCXPALBND1 (MCDS_TCXPAL1_BND)

/** \brief 2224, Lookup Table Range Register */
#define MCDS_TCXPAL1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_RNG*)0xFA012224u)
/** Alias (User Manual Name) for MCDS_TCXPAL1_RNG.
* To use register names with standard convension, please use MCDS_TCXPAL1_RNG.
*/
#define MCDS_TCXPALRNG1 (MCDS_TCXPAL1_RNG)

/** \brief 2228, Lookup Table Mapping Register */
#define MCDS_TCXPAL1_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_MAP*)0xFA012228u)
/** Alias (User Manual Name) for MCDS_TCXPAL1_MAP.
* To use register names with standard convension, please use MCDS_TCXPAL1_MAP.
*/
#define MCDS_TCXPALMAP1 (MCDS_TCXPAL1_MAP)

/** \brief 2230, Lookup Table Base Register */
#define MCDS_TCXPAL2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_BND*)0xFA012230u)
/** Alias (User Manual Name) for MCDS_TCXPAL2_BND.
* To use register names with standard convension, please use MCDS_TCXPAL2_BND.
*/
#define MCDS_TCXPALBND2 (MCDS_TCXPAL2_BND)

/** \brief 2234, Lookup Table Range Register */
#define MCDS_TCXPAL2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_RNG*)0xFA012234u)
/** Alias (User Manual Name) for MCDS_TCXPAL2_RNG.
* To use register names with standard convension, please use MCDS_TCXPAL2_RNG.
*/
#define MCDS_TCXPALRNG2 (MCDS_TCXPAL2_RNG)

/** \brief 2238, Lookup Table Mapping Register */
#define MCDS_TCXPAL2_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_MAP*)0xFA012238u)
/** Alias (User Manual Name) for MCDS_TCXPAL2_MAP.
* To use register names with standard convension, please use MCDS_TCXPAL2_MAP.
*/
#define MCDS_TCXPALMAP2 (MCDS_TCXPAL2_MAP)

/** \brief 2240, Lookup Table Base Register */
#define MCDS_TCXPAL3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_BND*)0xFA012240u)
/** Alias (User Manual Name) for MCDS_TCXPAL3_BND.
* To use register names with standard convension, please use MCDS_TCXPAL3_BND.
*/
#define MCDS_TCXPALBND3 (MCDS_TCXPAL3_BND)

/** \brief 2244, Lookup Table Range Register */
#define MCDS_TCXPAL3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_RNG*)0xFA012244u)
/** Alias (User Manual Name) for MCDS_TCXPAL3_RNG.
* To use register names with standard convension, please use MCDS_TCXPAL3_RNG.
*/
#define MCDS_TCXPALRNG3 (MCDS_TCXPAL3_RNG)

/** \brief 2248, Lookup Table Mapping Register */
#define MCDS_TCXPAL3_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPAL_MAP*)0xFA012248u)
/** Alias (User Manual Name) for MCDS_TCXPAL3_MAP.
* To use register names with standard convension, please use MCDS_TCXPAL3_MAP.
*/
#define MCDS_TCXPALMAP3 (MCDS_TCXPAL3_MAP)

/** \brief 2400, Comparator Bound Register 0 */
#define MCDS_TCXEA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_BND*)0xFA012400u)
/** Alias (User Manual Name) for MCDS_TCXEA0_BND.
* To use register names with standard convension, please use MCDS_TCXEA0_BND.
*/
#define MCDS_TCXEABND0 (MCDS_TCXEA0_BND)

/** \brief 2404, Comparator Range Register 0 */
#define MCDS_TCXEA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_RNG*)0xFA012404u)
/** Alias (User Manual Name) for MCDS_TCXEA0_RNG.
* To use register names with standard convension, please use MCDS_TCXEA0_RNG.
*/
#define MCDS_TCXEARNG0 (MCDS_TCXEA0_RNG)

/** \brief 2410, Comparator Bound Register 1 */
#define MCDS_TCXEA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_BND*)0xFA012410u)
/** Alias (User Manual Name) for MCDS_TCXEA1_BND.
* To use register names with standard convension, please use MCDS_TCXEA1_BND.
*/
#define MCDS_TCXEABND1 (MCDS_TCXEA1_BND)

/** \brief 2414, Comparator Range Register 1 */
#define MCDS_TCXEA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_RNG*)0xFA012414u)
/** Alias (User Manual Name) for MCDS_TCXEA1_RNG.
* To use register names with standard convension, please use MCDS_TCXEA1_RNG.
*/
#define MCDS_TCXEARNG1 (MCDS_TCXEA1_RNG)

/** \brief 2420, Comparator Bound Register 2 */
#define MCDS_TCXEA2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_BND*)0xFA012420u)
/** Alias (User Manual Name) for MCDS_TCXEA2_BND.
* To use register names with standard convension, please use MCDS_TCXEA2_BND.
*/
#define MCDS_TCXEABND2 (MCDS_TCXEA2_BND)

/** \brief 2424, Comparator Range Register 2 */
#define MCDS_TCXEA2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_RNG*)0xFA012424u)
/** Alias (User Manual Name) for MCDS_TCXEA2_RNG.
* To use register names with standard convension, please use MCDS_TCXEA2_RNG.
*/
#define MCDS_TCXEARNG2 (MCDS_TCXEA2_RNG)

/** \brief 2430, Comparator Bound Register 3 */
#define MCDS_TCXEA3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_BND*)0xFA012430u)
/** Alias (User Manual Name) for MCDS_TCXEA3_BND.
* To use register names with standard convension, please use MCDS_TCXEA3_BND.
*/
#define MCDS_TCXEABND3 (MCDS_TCXEA3_BND)

/** \brief 2434, Comparator Range Register 3 */
#define MCDS_TCXEA3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_RNG*)0xFA012434u)
/** Alias (User Manual Name) for MCDS_TCXEA3_RNG.
* To use register names with standard convension, please use MCDS_TCXEA3_RNG.
*/
#define MCDS_TCXEARNG3 (MCDS_TCXEA3_RNG)

/** \brief 2440, Comparator Bound Register 4 */
#define MCDS_TCXEA4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_BND*)0xFA012440u)
/** Alias (User Manual Name) for MCDS_TCXEA4_BND.
* To use register names with standard convension, please use MCDS_TCXEA4_BND.
*/
#define MCDS_TCXEABND4 (MCDS_TCXEA4_BND)

/** \brief 2444, Comparator Range Register 4 */
#define MCDS_TCXEA4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_RNG*)0xFA012444u)
/** Alias (User Manual Name) for MCDS_TCXEA4_RNG.
* To use register names with standard convension, please use MCDS_TCXEA4_RNG.
*/
#define MCDS_TCXEARNG4 (MCDS_TCXEA4_RNG)

/** \brief 2450, Comparator Bound Register 5 */
#define MCDS_TCXEA5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_BND*)0xFA012450u)
/** Alias (User Manual Name) for MCDS_TCXEA5_BND.
* To use register names with standard convension, please use MCDS_TCXEA5_BND.
*/
#define MCDS_TCXEABND5 (MCDS_TCXEA5_BND)

/** \brief 2454, Comparator Range Register 5 */
#define MCDS_TCXEA5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_RNG*)0xFA012454u)
/** Alias (User Manual Name) for MCDS_TCXEA5_RNG.
* To use register names with standard convension, please use MCDS_TCXEA5_RNG.
*/
#define MCDS_TCXEARNG5 (MCDS_TCXEA5_RNG)

/** \brief 2460, Comparator Bound Register 6 */
#define MCDS_TCXEA6_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_BND*)0xFA012460u)
/** Alias (User Manual Name) for MCDS_TCXEA6_BND.
* To use register names with standard convension, please use MCDS_TCXEA6_BND.
*/
#define MCDS_TCXEABND6 (MCDS_TCXEA6_BND)

/** \brief 2464, Comparator Range Register 6 */
#define MCDS_TCXEA6_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_RNG*)0xFA012464u)
/** Alias (User Manual Name) for MCDS_TCXEA6_RNG.
* To use register names with standard convension, please use MCDS_TCXEA6_RNG.
*/
#define MCDS_TCXEARNG6 (MCDS_TCXEA6_RNG)

/** \brief 2470, Comparator Bound Register 7 */
#define MCDS_TCXEA7_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_BND*)0xFA012470u)
/** Alias (User Manual Name) for MCDS_TCXEA7_BND.
* To use register names with standard convension, please use MCDS_TCXEA7_BND.
*/
#define MCDS_TCXEABND7 (MCDS_TCXEA7_BND)

/** \brief 2474, Comparator Range Register 7 */
#define MCDS_TCXEA7_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEA_RNG*)0xFA012474u)
/** Alias (User Manual Name) for MCDS_TCXEA7_RNG.
* To use register names with standard convension, please use MCDS_TCXEA7_RNG.
*/
#define MCDS_TCXEARNG7 (MCDS_TCXEA7_RNG)

/** \brief 2480, Comparator Bound Register 0 */
#define MCDS_TCXWD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_BND*)0xFA012480u)
/** Alias (User Manual Name) for MCDS_TCXWD0_BND.
* To use register names with standard convension, please use MCDS_TCXWD0_BND.
*/
#define MCDS_TCXWDBND0 (MCDS_TCXWD0_BND)

/** \brief 2484, Comparator Bound Register 0 */
#define MCDS_TCXWD0_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HBND*)0xFA012484u)
/** Alias (User Manual Name) for MCDS_TCXWD0_HBND.
* To use register names with standard convension, please use MCDS_TCXWD0_HBND.
*/
#define MCDS_TCXWDHBND0 (MCDS_TCXWD0_HBND)

/** \brief 2488, Comparator Range Register 0 */
#define MCDS_TCXWD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_RNG*)0xFA012488u)
/** Alias (User Manual Name) for MCDS_TCXWD0_RNG.
* To use register names with standard convension, please use MCDS_TCXWD0_RNG.
*/
#define MCDS_TCXWDRNG0 (MCDS_TCXWD0_RNG)

/** \brief 248C, Comparator Range Register 0 */
#define MCDS_TCXWD0_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HRNG*)0xFA01248Cu)
/** Alias (User Manual Name) for MCDS_TCXWD0_HRNG.
* To use register names with standard convension, please use MCDS_TCXWD0_HRNG.
*/
#define MCDS_TCXWDHRNG0 (MCDS_TCXWD0_HRNG)

/** \brief 2490, Comparator Mask Register 0 */
#define MCDS_TCXWD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_MSK*)0xFA012490u)
/** Alias (User Manual Name) for MCDS_TCXWD0_MSK.
* To use register names with standard convension, please use MCDS_TCXWD0_MSK.
*/
#define MCDS_TCXWDMSK0 (MCDS_TCXWD0_MSK)

/** \brief 2494, Comparator Mask Register 0 */
#define MCDS_TCXWD0_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HMSK*)0xFA012494u)
/** Alias (User Manual Name) for MCDS_TCXWD0_HMSK.
* To use register names with standard convension, please use MCDS_TCXWD0_HMSK.
*/
#define MCDS_TCXWDHMSK0 (MCDS_TCXWD0_HMSK)

/** \brief 249C, Comparator Sign Register 0 */
#define MCDS_TCXWD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_SGN*)0xFA01249Cu)
/** Alias (User Manual Name) for MCDS_TCXWD0_SGN.
* To use register names with standard convension, please use MCDS_TCXWD0_SGN.
*/
#define MCDS_TCXWDSGN0 (MCDS_TCXWD0_SGN)

/** \brief 24A0, Comparator Bound Register 1 */
#define MCDS_TCXWD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_BND*)0xFA0124A0u)
/** Alias (User Manual Name) for MCDS_TCXWD1_BND.
* To use register names with standard convension, please use MCDS_TCXWD1_BND.
*/
#define MCDS_TCXWDBND1 (MCDS_TCXWD1_BND)

/** \brief 24A4, Comparator Bound Register 1 */
#define MCDS_TCXWD1_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HBND*)0xFA0124A4u)
/** Alias (User Manual Name) for MCDS_TCXWD1_HBND.
* To use register names with standard convension, please use MCDS_TCXWD1_HBND.
*/
#define MCDS_TCXWDHBND1 (MCDS_TCXWD1_HBND)

/** \brief 24A8, Comparator Range Register 1 */
#define MCDS_TCXWD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_RNG*)0xFA0124A8u)
/** Alias (User Manual Name) for MCDS_TCXWD1_RNG.
* To use register names with standard convension, please use MCDS_TCXWD1_RNG.
*/
#define MCDS_TCXWDRNG1 (MCDS_TCXWD1_RNG)

/** \brief 24AC, Comparator Range Register 1 */
#define MCDS_TCXWD1_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HRNG*)0xFA0124ACu)
/** Alias (User Manual Name) for MCDS_TCXWD1_HRNG.
* To use register names with standard convension, please use MCDS_TCXWD1_HRNG.
*/
#define MCDS_TCXWDHRNG1 (MCDS_TCXWD1_HRNG)

/** \brief 24B0, Comparator Mask Register 1 */
#define MCDS_TCXWD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_MSK*)0xFA0124B0u)
/** Alias (User Manual Name) for MCDS_TCXWD1_MSK.
* To use register names with standard convension, please use MCDS_TCXWD1_MSK.
*/
#define MCDS_TCXWDMSK1 (MCDS_TCXWD1_MSK)

/** \brief 24B4, Comparator Mask Register 1 */
#define MCDS_TCXWD1_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HMSK*)0xFA0124B4u)
/** Alias (User Manual Name) for MCDS_TCXWD1_HMSK.
* To use register names with standard convension, please use MCDS_TCXWD1_HMSK.
*/
#define MCDS_TCXWDHMSK1 (MCDS_TCXWD1_HMSK)

/** \brief 24BC, Comparator Sign Register 1 */
#define MCDS_TCXWD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_SGN*)0xFA0124BCu)
/** Alias (User Manual Name) for MCDS_TCXWD1_SGN.
* To use register names with standard convension, please use MCDS_TCXWD1_SGN.
*/
#define MCDS_TCXWDSGN1 (MCDS_TCXWD1_SGN)

/** \brief 24C0, Comparator Bound Register 2 */
#define MCDS_TCXWD2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_BND*)0xFA0124C0u)
/** Alias (User Manual Name) for MCDS_TCXWD2_BND.
* To use register names with standard convension, please use MCDS_TCXWD2_BND.
*/
#define MCDS_TCXWDBND2 (MCDS_TCXWD2_BND)

/** \brief 24C4, Comparator Bound Register 2 */
#define MCDS_TCXWD2_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HBND*)0xFA0124C4u)
/** Alias (User Manual Name) for MCDS_TCXWD2_HBND.
* To use register names with standard convension, please use MCDS_TCXWD2_HBND.
*/
#define MCDS_TCXWDHBND2 (MCDS_TCXWD2_HBND)

/** \brief 24C8, Comparator Range Register 2 */
#define MCDS_TCXWD2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_RNG*)0xFA0124C8u)
/** Alias (User Manual Name) for MCDS_TCXWD2_RNG.
* To use register names with standard convension, please use MCDS_TCXWD2_RNG.
*/
#define MCDS_TCXWDRNG2 (MCDS_TCXWD2_RNG)

/** \brief 24CC, Comparator Range Register 2 */
#define MCDS_TCXWD2_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HRNG*)0xFA0124CCu)
/** Alias (User Manual Name) for MCDS_TCXWD2_HRNG.
* To use register names with standard convension, please use MCDS_TCXWD2_HRNG.
*/
#define MCDS_TCXWDHRNG2 (MCDS_TCXWD2_HRNG)

/** \brief 24D0, Comparator Mask Register 2 */
#define MCDS_TCXWD2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_MSK*)0xFA0124D0u)
/** Alias (User Manual Name) for MCDS_TCXWD2_MSK.
* To use register names with standard convension, please use MCDS_TCXWD2_MSK.
*/
#define MCDS_TCXWDMSK2 (MCDS_TCXWD2_MSK)

/** \brief 24D4, Comparator Mask Register 2 */
#define MCDS_TCXWD2_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HMSK*)0xFA0124D4u)
/** Alias (User Manual Name) for MCDS_TCXWD2_HMSK.
* To use register names with standard convension, please use MCDS_TCXWD2_HMSK.
*/
#define MCDS_TCXWDHMSK2 (MCDS_TCXWD2_HMSK)

/** \brief 24DC, Comparator Sign Register 2 */
#define MCDS_TCXWD2_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_SGN*)0xFA0124DCu)
/** Alias (User Manual Name) for MCDS_TCXWD2_SGN.
* To use register names with standard convension, please use MCDS_TCXWD2_SGN.
*/
#define MCDS_TCXWDSGN2 (MCDS_TCXWD2_SGN)

/** \brief 24E0, Comparator Bound Register 3 */
#define MCDS_TCXWD3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_BND*)0xFA0124E0u)
/** Alias (User Manual Name) for MCDS_TCXWD3_BND.
* To use register names with standard convension, please use MCDS_TCXWD3_BND.
*/
#define MCDS_TCXWDBND3 (MCDS_TCXWD3_BND)

/** \brief 24E4, Comparator Bound Register 3 */
#define MCDS_TCXWD3_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HBND*)0xFA0124E4u)
/** Alias (User Manual Name) for MCDS_TCXWD3_HBND.
* To use register names with standard convension, please use MCDS_TCXWD3_HBND.
*/
#define MCDS_TCXWDHBND3 (MCDS_TCXWD3_HBND)

/** \brief 24E8, Comparator Range Register 3 */
#define MCDS_TCXWD3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_RNG*)0xFA0124E8u)
/** Alias (User Manual Name) for MCDS_TCXWD3_RNG.
* To use register names with standard convension, please use MCDS_TCXWD3_RNG.
*/
#define MCDS_TCXWDRNG3 (MCDS_TCXWD3_RNG)

/** \brief 24EC, Comparator Range Register 3 */
#define MCDS_TCXWD3_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HRNG*)0xFA0124ECu)
/** Alias (User Manual Name) for MCDS_TCXWD3_HRNG.
* To use register names with standard convension, please use MCDS_TCXWD3_HRNG.
*/
#define MCDS_TCXWDHRNG3 (MCDS_TCXWD3_HRNG)

/** \brief 24F0, Comparator Mask Register 3 */
#define MCDS_TCXWD3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_MSK*)0xFA0124F0u)
/** Alias (User Manual Name) for MCDS_TCXWD3_MSK.
* To use register names with standard convension, please use MCDS_TCXWD3_MSK.
*/
#define MCDS_TCXWDMSK3 (MCDS_TCXWD3_MSK)

/** \brief 24F4, Comparator Mask Register 3 */
#define MCDS_TCXWD3_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_HMSK*)0xFA0124F4u)
/** Alias (User Manual Name) for MCDS_TCXWD3_HMSK.
* To use register names with standard convension, please use MCDS_TCXWD3_HMSK.
*/
#define MCDS_TCXWDHMSK3 (MCDS_TCXWD3_HMSK)

/** \brief 24FC, Comparator Sign Register 3 */
#define MCDS_TCXWD3_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWD_SGN*)0xFA0124FCu)
/** Alias (User Manual Name) for MCDS_TCXWD3_SGN.
* To use register names with standard convension, please use MCDS_TCXWD3_SGN.
*/
#define MCDS_TCXWDSGN3 (MCDS_TCXWD3_SGN)

/** \brief 2500, Comparator Bound Register 0 */
#define MCDS_TCXAC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_BND*)0xFA012500u)
/** Alias (User Manual Name) for MCDS_TCXAC0_BND.
* To use register names with standard convension, please use MCDS_TCXAC0_BND.
*/
#define MCDS_TCXACBND0 (MCDS_TCXAC0_BND)

/** \brief 2504, Comparator Range Register 0 */
#define MCDS_TCXAC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_RNG*)0xFA012504u)
/** Alias (User Manual Name) for MCDS_TCXAC0_RNG.
* To use register names with standard convension, please use MCDS_TCXAC0_RNG.
*/
#define MCDS_TCXACRNG0 (MCDS_TCXAC0_RNG)

/** \brief 2508, Comparator Mask Register 0 */
#define MCDS_TCXAC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_MSK*)0xFA012508u)
/** Alias (User Manual Name) for MCDS_TCXAC0_MSK.
* To use register names with standard convension, please use MCDS_TCXAC0_MSK.
*/
#define MCDS_TCXACMSK0 (MCDS_TCXAC0_MSK)

/** \brief 2510, Comparator Bound Register 1 */
#define MCDS_TCXAC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_BND*)0xFA012510u)
/** Alias (User Manual Name) for MCDS_TCXAC1_BND.
* To use register names with standard convension, please use MCDS_TCXAC1_BND.
*/
#define MCDS_TCXACBND1 (MCDS_TCXAC1_BND)

/** \brief 2514, Comparator Range Register 1 */
#define MCDS_TCXAC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_RNG*)0xFA012514u)
/** Alias (User Manual Name) for MCDS_TCXAC1_RNG.
* To use register names with standard convension, please use MCDS_TCXAC1_RNG.
*/
#define MCDS_TCXACRNG1 (MCDS_TCXAC1_RNG)

/** \brief 2518, Comparator Mask Register 1 */
#define MCDS_TCXAC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_MSK*)0xFA012518u)
/** Alias (User Manual Name) for MCDS_TCXAC1_MSK.
* To use register names with standard convension, please use MCDS_TCXAC1_MSK.
*/
#define MCDS_TCXACMSK1 (MCDS_TCXAC1_MSK)

/** \brief 2520, Comparator Bound Register 2 */
#define MCDS_TCXAC2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_BND*)0xFA012520u)
/** Alias (User Manual Name) for MCDS_TCXAC2_BND.
* To use register names with standard convension, please use MCDS_TCXAC2_BND.
*/
#define MCDS_TCXACBND2 (MCDS_TCXAC2_BND)

/** \brief 2524, Comparator Range Register 2 */
#define MCDS_TCXAC2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_RNG*)0xFA012524u)
/** Alias (User Manual Name) for MCDS_TCXAC2_RNG.
* To use register names with standard convension, please use MCDS_TCXAC2_RNG.
*/
#define MCDS_TCXACRNG2 (MCDS_TCXAC2_RNG)

/** \brief 2528, Comparator Mask Register 2 */
#define MCDS_TCXAC2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_MSK*)0xFA012528u)
/** Alias (User Manual Name) for MCDS_TCXAC2_MSK.
* To use register names with standard convension, please use MCDS_TCXAC2_MSK.
*/
#define MCDS_TCXACMSK2 (MCDS_TCXAC2_MSK)

/** \brief 2530, Comparator Bound Register 3 */
#define MCDS_TCXAC3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_BND*)0xFA012530u)
/** Alias (User Manual Name) for MCDS_TCXAC3_BND.
* To use register names with standard convension, please use MCDS_TCXAC3_BND.
*/
#define MCDS_TCXACBND3 (MCDS_TCXAC3_BND)

/** \brief 2534, Comparator Range Register 3 */
#define MCDS_TCXAC3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_RNG*)0xFA012534u)
/** Alias (User Manual Name) for MCDS_TCXAC3_RNG.
* To use register names with standard convension, please use MCDS_TCXAC3_RNG.
*/
#define MCDS_TCXACRNG3 (MCDS_TCXAC3_RNG)

/** \brief 2538, Comparator Mask Register 3 */
#define MCDS_TCXAC3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXAC_MSK*)0xFA012538u)
/** Alias (User Manual Name) for MCDS_TCXAC3_MSK.
* To use register names with standard convension, please use MCDS_TCXAC3_MSK.
*/
#define MCDS_TCXACMSK3 (MCDS_TCXAC3_MSK)

/** \brief 2580, DTU FIFOs Fill Level */
#define MCDS_TCXDTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXDTUFLV*)0xFA012580u)

/** \brief 2800, Event Definition Register 0 */
#define MCDS_TCXEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012800u)

/** \brief 2804, Event Definition Register 1 */
#define MCDS_TCXEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012804u)

/** \brief 2808, Event Definition Register 2 */
#define MCDS_TCXEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012808u)

/** \brief 280C, Event Definition Register 3 */
#define MCDS_TCXEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA01280Cu)

/** \brief 2810, Event Definition Register 4 */
#define MCDS_TCXEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012810u)

/** \brief 2814, Event Definition Register 5 */
#define MCDS_TCXEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012814u)

/** \brief 2818, Event Definition Register 6 */
#define MCDS_TCXEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012818u)

/** \brief 281C, Event Definition Register 7 */
#define MCDS_TCXEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA01281Cu)

/** \brief 2820, Event Definition Register 8 */
#define MCDS_TCXEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012820u)

/** \brief 2824, Event Definition Register 9 */
#define MCDS_TCXEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012824u)

/** \brief 2828, Event Definition Register 10 */
#define MCDS_TCXEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012828u)

/** \brief 282C, Event Definition Register 11 */
#define MCDS_TCXEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA01282Cu)

/** \brief 2830, Event Definition Register 12 */
#define MCDS_TCXEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012830u)

/** \brief 2834, Event Definition Register 13 */
#define MCDS_TCXEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012834u)

/** \brief 2838, Event Definition Register 14 */
#define MCDS_TCXEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012838u)

/** \brief 283C, Event Definition Register 15 */
#define MCDS_TCXEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA01283Cu)

/** \brief 2880, Action Definition Register 0 */
#define MCDS_TCXACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012880u)

/** \brief 2884, Action Definition Register 1 */
#define MCDS_TCXACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012884u)

/** \brief 2888, Action Definition Register 2 */
#define MCDS_TCXACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012888u)

/** \brief 288C, Action Definition Register 3 */
#define MCDS_TCXACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA01288Cu)

/** \brief 2890, Action Definition Register 4 */
#define MCDS_TCXACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012890u)

/** \brief 2894, Action Definition Register 5 */
#define MCDS_TCXACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012894u)

/** \brief 2898, Action Definition Register 6 */
#define MCDS_TCXACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012898u)

/** \brief 289C, Action Definition Register 7 */
#define MCDS_TCXACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA01289Cu)

/** \brief 28A0, Action Definition Register 8 */
#define MCDS_TCXACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128A0u)

/** \brief 28A4, Action Definition Register 9 */
#define MCDS_TCXACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128A4u)

/** \brief 28A8, Action Definition Register 10 */
#define MCDS_TCXACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128A8u)

/** \brief 28AC, Action Definition Register 11 */
#define MCDS_TCXACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128ACu)

/** \brief 28B0, Action Definition Register 12 */
#define MCDS_TCXACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128B0u)

/** \brief 28B4, Action Definition Register 13 */
#define MCDS_TCXACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128B4u)

/** \brief 28B8, Action Definition Register 14 */
#define MCDS_TCXACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128B8u)

/** \brief 28BC, Action Definition Register 15 */
#define MCDS_TCXACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128BCu)

/** \brief 28C0, Action Definition Register 16 */
#define MCDS_TCXACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128C0u)

/** \brief 28C4, Action Definition Register 17 */
#define MCDS_TCXACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128C4u)

/** \brief 28C8, Action Definition Register 18 */
#define MCDS_TCXACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128C8u)

/** \brief 28CC, Action Definition Register 19 */
#define MCDS_TCXACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128CCu)

/** \brief 28D0, Action Definition Register 20 */
#define MCDS_TCXACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128D0u)

/** \brief 28D4, Action Definition Register 21 */
#define MCDS_TCXACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128D4u)

/** \brief 28D8, Action Definition Register 22 */
#define MCDS_TCXACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128D8u)

/** \brief 28DC, Action Definition Register 23 */
#define MCDS_TCXACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128DCu)

/** \brief 2C00, Comparator Bound Register 0 */
#define MCDS_TCXID0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXID_BND*)0xFA012C00u)
/** Alias (User Manual Name) for MCDS_TCXID0_BND.
* To use register names with standard convension, please use MCDS_TCXID0_BND.
*/
#define MCDS_TCXIDBND0 (MCDS_TCXID0_BND)

/** \brief 2C04, Comparator Range Register 0 */
#define MCDS_TCXID0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXID_RNG*)0xFA012C04u)
/** Alias (User Manual Name) for MCDS_TCXID0_RNG.
* To use register names with standard convension, please use MCDS_TCXID0_RNG.
*/
#define MCDS_TCXIDRNG0 (MCDS_TCXID0_RNG)

/** \brief 2C08, Comparator Mask Register 0 */
#define MCDS_TCXID0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXID_MSK*)0xFA012C08u)
/** Alias (User Manual Name) for MCDS_TCXID0_MSK.
* To use register names with standard convension, please use MCDS_TCXID0_MSK.
*/
#define MCDS_TCXIDMSK0 (MCDS_TCXID0_MSK)

/** \brief 2C0C, Comparator Sign Register 0 */
#define MCDS_TCXID0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXID_SGN*)0xFA012C0Cu)
/** Alias (User Manual Name) for MCDS_TCXID0_SGN.
* To use register names with standard convension, please use MCDS_TCXID0_SGN.
*/
#define MCDS_TCXIDSGN0 (MCDS_TCXID0_SGN)

/** \brief 2C10, Comparator Bound Register 1 */
#define MCDS_TCXID1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXID_BND*)0xFA012C10u)
/** Alias (User Manual Name) for MCDS_TCXID1_BND.
* To use register names with standard convension, please use MCDS_TCXID1_BND.
*/
#define MCDS_TCXIDBND1 (MCDS_TCXID1_BND)

/** \brief 2C14, Comparator Range Register 1 */
#define MCDS_TCXID1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXID_RNG*)0xFA012C14u)
/** Alias (User Manual Name) for MCDS_TCXID1_RNG.
* To use register names with standard convension, please use MCDS_TCXID1_RNG.
*/
#define MCDS_TCXIDRNG1 (MCDS_TCXID1_RNG)

/** \brief 2C18, Comparator Mask Register 1 */
#define MCDS_TCXID1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXID_MSK*)0xFA012C18u)
/** Alias (User Manual Name) for MCDS_TCXID1_MSK.
* To use register names with standard convension, please use MCDS_TCXID1_MSK.
*/
#define MCDS_TCXIDMSK1 (MCDS_TCXID1_MSK)

/** \brief 2C1C, Comparator Sign Register 1 */
#define MCDS_TCXID1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXID_SGN*)0xFA012C1Cu)
/** Alias (User Manual Name) for MCDS_TCXID1_SGN.
* To use register names with standard convension, please use MCDS_TCXID1_SGN.
*/
#define MCDS_TCXIDSGN1 (MCDS_TCXID1_SGN)

/** \brief 3000, Comparator Bound Register 0 */
#define MCDS_TCXIP0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_BND*)0xFA013000u)
/** Alias (User Manual Name) for MCDS_TCXIP0_BND.
* To use register names with standard convension, please use MCDS_TCXIP0_BND.
*/
#define MCDS_TCXIPBND0 (MCDS_TCXIP0_BND)

/** \brief 3004, Comparator Range Register 0 */
#define MCDS_TCXIP0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_RNG*)0xFA013004u)
/** Alias (User Manual Name) for MCDS_TCXIP0_RNG.
* To use register names with standard convension, please use MCDS_TCXIP0_RNG.
*/
#define MCDS_TCXIPRNG0 (MCDS_TCXIP0_RNG)

/** \brief 3010, Comparator Bound Register 1 */
#define MCDS_TCXIP1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_BND*)0xFA013010u)
/** Alias (User Manual Name) for MCDS_TCXIP1_BND.
* To use register names with standard convension, please use MCDS_TCXIP1_BND.
*/
#define MCDS_TCXIPBND1 (MCDS_TCXIP1_BND)

/** \brief 3014, Comparator Range Register 1 */
#define MCDS_TCXIP1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_RNG*)0xFA013014u)
/** Alias (User Manual Name) for MCDS_TCXIP1_RNG.
* To use register names with standard convension, please use MCDS_TCXIP1_RNG.
*/
#define MCDS_TCXIPRNG1 (MCDS_TCXIP1_RNG)

/** \brief 3020, Comparator Bound Register 2 */
#define MCDS_TCXIP2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_BND*)0xFA013020u)
/** Alias (User Manual Name) for MCDS_TCXIP2_BND.
* To use register names with standard convension, please use MCDS_TCXIP2_BND.
*/
#define MCDS_TCXIPBND2 (MCDS_TCXIP2_BND)

/** \brief 3024, Comparator Range Register 2 */
#define MCDS_TCXIP2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_RNG*)0xFA013024u)
/** Alias (User Manual Name) for MCDS_TCXIP2_RNG.
* To use register names with standard convension, please use MCDS_TCXIP2_RNG.
*/
#define MCDS_TCXIPRNG2 (MCDS_TCXIP2_RNG)

/** \brief 3030, Comparator Bound Register 3 */
#define MCDS_TCXIP3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_BND*)0xFA013030u)
/** Alias (User Manual Name) for MCDS_TCXIP3_BND.
* To use register names with standard convension, please use MCDS_TCXIP3_BND.
*/
#define MCDS_TCXIPBND3 (MCDS_TCXIP3_BND)

/** \brief 3034, Comparator Range Register 3 */
#define MCDS_TCXIP3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_RNG*)0xFA013034u)
/** Alias (User Manual Name) for MCDS_TCXIP3_RNG.
* To use register names with standard convension, please use MCDS_TCXIP3_RNG.
*/
#define MCDS_TCXIPRNG3 (MCDS_TCXIP3_RNG)

/** \brief 3040, Comparator Bound Register 4 */
#define MCDS_TCXIP4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_BND*)0xFA013040u)
/** Alias (User Manual Name) for MCDS_TCXIP4_BND.
* To use register names with standard convension, please use MCDS_TCXIP4_BND.
*/
#define MCDS_TCXIPBND4 (MCDS_TCXIP4_BND)

/** \brief 3044, Comparator Range Register 4 */
#define MCDS_TCXIP4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_RNG*)0xFA013044u)
/** Alias (User Manual Name) for MCDS_TCXIP4_RNG.
* To use register names with standard convension, please use MCDS_TCXIP4_RNG.
*/
#define MCDS_TCXIPRNG4 (MCDS_TCXIP4_RNG)

/** \brief 3050, Comparator Bound Register 5 */
#define MCDS_TCXIP5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_BND*)0xFA013050u)
/** Alias (User Manual Name) for MCDS_TCXIP5_BND.
* To use register names with standard convension, please use MCDS_TCXIP5_BND.
*/
#define MCDS_TCXIPBND5 (MCDS_TCXIP5_BND)

/** \brief 3054, Comparator Range Register 5 */
#define MCDS_TCXIP5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIP_RNG*)0xFA013054u)
/** Alias (User Manual Name) for MCDS_TCXIP5_RNG.
* To use register names with standard convension, please use MCDS_TCXIP5_RNG.
*/
#define MCDS_TCXIPRNG5 (MCDS_TCXIP5_RNG)

/** \brief 4000, Debug Status Register */
#define MCDS_TCYDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYDCSTS*)0xFA014000u)

/** \brief 4004, Current Process ID */
#define MCDS_TCYCID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYCID*)0xFA014004u)

/** \brief 4008, Current Instruction Pointer */
#define MCDS_TCYCIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYCIP*)0xFA014008u)

/** \brief 400C, Compact Function Trace Register */
#define MCDS_TCYCFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYCFT*)0xFA01400Cu)

/** \brief 4200, Lookup Table Data Register */
#define MCDS_TCYPALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALLUTD*)0xFA014200u)

/** \brief 4204, Lookup Table Address Register */
#define MCDS_TCYPALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALLUTA*)0xFA014204u)

/** \brief 4210, Lookup Table Base Register */
#define MCDS_TCYPAL0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_BND*)0xFA014210u)
/** Alias (User Manual Name) for MCDS_TCYPAL0_BND.
* To use register names with standard convension, please use MCDS_TCYPAL0_BND.
*/
#define MCDS_TCYPALBND0 (MCDS_TCYPAL0_BND)

/** \brief 4214, Lookup Table Range Register */
#define MCDS_TCYPAL0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_RNG*)0xFA014214u)
/** Alias (User Manual Name) for MCDS_TCYPAL0_RNG.
* To use register names with standard convension, please use MCDS_TCYPAL0_RNG.
*/
#define MCDS_TCYPALRNG0 (MCDS_TCYPAL0_RNG)

/** \brief 4218, Lookup Table Mapping Register */
#define MCDS_TCYPAL0_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_MAP*)0xFA014218u)
/** Alias (User Manual Name) for MCDS_TCYPAL0_MAP.
* To use register names with standard convension, please use MCDS_TCYPAL0_MAP.
*/
#define MCDS_TCYPALMAP0 (MCDS_TCYPAL0_MAP)

/** \brief 4220, Lookup Table Base Register */
#define MCDS_TCYPAL1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_BND*)0xFA014220u)
/** Alias (User Manual Name) for MCDS_TCYPAL1_BND.
* To use register names with standard convension, please use MCDS_TCYPAL1_BND.
*/
#define MCDS_TCYPALBND1 (MCDS_TCYPAL1_BND)

/** \brief 4224, Lookup Table Range Register */
#define MCDS_TCYPAL1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_RNG*)0xFA014224u)
/** Alias (User Manual Name) for MCDS_TCYPAL1_RNG.
* To use register names with standard convension, please use MCDS_TCYPAL1_RNG.
*/
#define MCDS_TCYPALRNG1 (MCDS_TCYPAL1_RNG)

/** \brief 4228, Lookup Table Mapping Register */
#define MCDS_TCYPAL1_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_MAP*)0xFA014228u)
/** Alias (User Manual Name) for MCDS_TCYPAL1_MAP.
* To use register names with standard convension, please use MCDS_TCYPAL1_MAP.
*/
#define MCDS_TCYPALMAP1 (MCDS_TCYPAL1_MAP)

/** \brief 4230, Lookup Table Base Register */
#define MCDS_TCYPAL2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_BND*)0xFA014230u)
/** Alias (User Manual Name) for MCDS_TCYPAL2_BND.
* To use register names with standard convension, please use MCDS_TCYPAL2_BND.
*/
#define MCDS_TCYPALBND2 (MCDS_TCYPAL2_BND)

/** \brief 4234, Lookup Table Range Register */
#define MCDS_TCYPAL2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_RNG*)0xFA014234u)
/** Alias (User Manual Name) for MCDS_TCYPAL2_RNG.
* To use register names with standard convension, please use MCDS_TCYPAL2_RNG.
*/
#define MCDS_TCYPALRNG2 (MCDS_TCYPAL2_RNG)

/** \brief 4238, Lookup Table Mapping Register */
#define MCDS_TCYPAL2_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_MAP*)0xFA014238u)
/** Alias (User Manual Name) for MCDS_TCYPAL2_MAP.
* To use register names with standard convension, please use MCDS_TCYPAL2_MAP.
*/
#define MCDS_TCYPALMAP2 (MCDS_TCYPAL2_MAP)

/** \brief 4240, Lookup Table Base Register */
#define MCDS_TCYPAL3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_BND*)0xFA014240u)
/** Alias (User Manual Name) for MCDS_TCYPAL3_BND.
* To use register names with standard convension, please use MCDS_TCYPAL3_BND.
*/
#define MCDS_TCYPALBND3 (MCDS_TCYPAL3_BND)

/** \brief 4244, Lookup Table Range Register */
#define MCDS_TCYPAL3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_RNG*)0xFA014244u)
/** Alias (User Manual Name) for MCDS_TCYPAL3_RNG.
* To use register names with standard convension, please use MCDS_TCYPAL3_RNG.
*/
#define MCDS_TCYPALRNG3 (MCDS_TCYPAL3_RNG)

/** \brief 4248, Lookup Table Mapping Register */
#define MCDS_TCYPAL3_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPAL_MAP*)0xFA014248u)
/** Alias (User Manual Name) for MCDS_TCYPAL3_MAP.
* To use register names with standard convension, please use MCDS_TCYPAL3_MAP.
*/
#define MCDS_TCYPALMAP3 (MCDS_TCYPAL3_MAP)

/** \brief 4400, Comparator Bound Register 0 */
#define MCDS_TCYEA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_BND*)0xFA014400u)
/** Alias (User Manual Name) for MCDS_TCYEA0_BND.
* To use register names with standard convension, please use MCDS_TCYEA0_BND.
*/
#define MCDS_TCYEABND0 (MCDS_TCYEA0_BND)

/** \brief 4404, Comparator Range Register 0 */
#define MCDS_TCYEA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_RNG*)0xFA014404u)
/** Alias (User Manual Name) for MCDS_TCYEA0_RNG.
* To use register names with standard convension, please use MCDS_TCYEA0_RNG.
*/
#define MCDS_TCYEARNG0 (MCDS_TCYEA0_RNG)

/** \brief 4410, Comparator Bound Register 1 */
#define MCDS_TCYEA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_BND*)0xFA014410u)
/** Alias (User Manual Name) for MCDS_TCYEA1_BND.
* To use register names with standard convension, please use MCDS_TCYEA1_BND.
*/
#define MCDS_TCYEABND1 (MCDS_TCYEA1_BND)

/** \brief 4414, Comparator Range Register 1 */
#define MCDS_TCYEA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_RNG*)0xFA014414u)
/** Alias (User Manual Name) for MCDS_TCYEA1_RNG.
* To use register names with standard convension, please use MCDS_TCYEA1_RNG.
*/
#define MCDS_TCYEARNG1 (MCDS_TCYEA1_RNG)

/** \brief 4420, Comparator Bound Register 2 */
#define MCDS_TCYEA2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_BND*)0xFA014420u)
/** Alias (User Manual Name) for MCDS_TCYEA2_BND.
* To use register names with standard convension, please use MCDS_TCYEA2_BND.
*/
#define MCDS_TCYEABND2 (MCDS_TCYEA2_BND)

/** \brief 4424, Comparator Range Register 2 */
#define MCDS_TCYEA2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_RNG*)0xFA014424u)
/** Alias (User Manual Name) for MCDS_TCYEA2_RNG.
* To use register names with standard convension, please use MCDS_TCYEA2_RNG.
*/
#define MCDS_TCYEARNG2 (MCDS_TCYEA2_RNG)

/** \brief 4430, Comparator Bound Register 3 */
#define MCDS_TCYEA3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_BND*)0xFA014430u)
/** Alias (User Manual Name) for MCDS_TCYEA3_BND.
* To use register names with standard convension, please use MCDS_TCYEA3_BND.
*/
#define MCDS_TCYEABND3 (MCDS_TCYEA3_BND)

/** \brief 4434, Comparator Range Register 3 */
#define MCDS_TCYEA3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_RNG*)0xFA014434u)
/** Alias (User Manual Name) for MCDS_TCYEA3_RNG.
* To use register names with standard convension, please use MCDS_TCYEA3_RNG.
*/
#define MCDS_TCYEARNG3 (MCDS_TCYEA3_RNG)

/** \brief 4440, Comparator Bound Register 4 */
#define MCDS_TCYEA4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_BND*)0xFA014440u)
/** Alias (User Manual Name) for MCDS_TCYEA4_BND.
* To use register names with standard convension, please use MCDS_TCYEA4_BND.
*/
#define MCDS_TCYEABND4 (MCDS_TCYEA4_BND)

/** \brief 4444, Comparator Range Register 4 */
#define MCDS_TCYEA4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_RNG*)0xFA014444u)
/** Alias (User Manual Name) for MCDS_TCYEA4_RNG.
* To use register names with standard convension, please use MCDS_TCYEA4_RNG.
*/
#define MCDS_TCYEARNG4 (MCDS_TCYEA4_RNG)

/** \brief 4450, Comparator Bound Register 5 */
#define MCDS_TCYEA5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_BND*)0xFA014450u)
/** Alias (User Manual Name) for MCDS_TCYEA5_BND.
* To use register names with standard convension, please use MCDS_TCYEA5_BND.
*/
#define MCDS_TCYEABND5 (MCDS_TCYEA5_BND)

/** \brief 4454, Comparator Range Register 5 */
#define MCDS_TCYEA5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_RNG*)0xFA014454u)
/** Alias (User Manual Name) for MCDS_TCYEA5_RNG.
* To use register names with standard convension, please use MCDS_TCYEA5_RNG.
*/
#define MCDS_TCYEARNG5 (MCDS_TCYEA5_RNG)

/** \brief 4460, Comparator Bound Register 6 */
#define MCDS_TCYEA6_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_BND*)0xFA014460u)
/** Alias (User Manual Name) for MCDS_TCYEA6_BND.
* To use register names with standard convension, please use MCDS_TCYEA6_BND.
*/
#define MCDS_TCYEABND6 (MCDS_TCYEA6_BND)

/** \brief 4464, Comparator Range Register 6 */
#define MCDS_TCYEA6_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_RNG*)0xFA014464u)
/** Alias (User Manual Name) for MCDS_TCYEA6_RNG.
* To use register names with standard convension, please use MCDS_TCYEA6_RNG.
*/
#define MCDS_TCYEARNG6 (MCDS_TCYEA6_RNG)

/** \brief 4470, Comparator Bound Register 7 */
#define MCDS_TCYEA7_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_BND*)0xFA014470u)
/** Alias (User Manual Name) for MCDS_TCYEA7_BND.
* To use register names with standard convension, please use MCDS_TCYEA7_BND.
*/
#define MCDS_TCYEABND7 (MCDS_TCYEA7_BND)

/** \brief 4474, Comparator Range Register 7 */
#define MCDS_TCYEA7_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEA_RNG*)0xFA014474u)
/** Alias (User Manual Name) for MCDS_TCYEA7_RNG.
* To use register names with standard convension, please use MCDS_TCYEA7_RNG.
*/
#define MCDS_TCYEARNG7 (MCDS_TCYEA7_RNG)

/** \brief 4480, Comparator Bound Register 0 */
#define MCDS_TCYWD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_BND*)0xFA014480u)
/** Alias (User Manual Name) for MCDS_TCYWD0_BND.
* To use register names with standard convension, please use MCDS_TCYWD0_BND.
*/
#define MCDS_TCYWDBND0 (MCDS_TCYWD0_BND)

/** \brief 4484, Comparator Bound Register 0 */
#define MCDS_TCYWD0_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HBND*)0xFA014484u)
/** Alias (User Manual Name) for MCDS_TCYWD0_HBND.
* To use register names with standard convension, please use MCDS_TCYWD0_HBND.
*/
#define MCDS_TCYWDHBND0 (MCDS_TCYWD0_HBND)

/** \brief 4488, Comparator Range Register 0 */
#define MCDS_TCYWD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_RNG*)0xFA014488u)
/** Alias (User Manual Name) for MCDS_TCYWD0_RNG.
* To use register names with standard convension, please use MCDS_TCYWD0_RNG.
*/
#define MCDS_TCYWDRNG0 (MCDS_TCYWD0_RNG)

/** \brief 448C, Comparator Range Register 0 */
#define MCDS_TCYWD0_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HRNG*)0xFA01448Cu)
/** Alias (User Manual Name) for MCDS_TCYWD0_HRNG.
* To use register names with standard convension, please use MCDS_TCYWD0_HRNG.
*/
#define MCDS_TCYWDHRNG0 (MCDS_TCYWD0_HRNG)

/** \brief 4490, Comparator Mask Register 0 */
#define MCDS_TCYWD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_MSK*)0xFA014490u)
/** Alias (User Manual Name) for MCDS_TCYWD0_MSK.
* To use register names with standard convension, please use MCDS_TCYWD0_MSK.
*/
#define MCDS_TCYWDMSK0 (MCDS_TCYWD0_MSK)

/** \brief 4494, Comparator Mask Register 0 */
#define MCDS_TCYWD0_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HMSK*)0xFA014494u)
/** Alias (User Manual Name) for MCDS_TCYWD0_HMSK.
* To use register names with standard convension, please use MCDS_TCYWD0_HMSK.
*/
#define MCDS_TCYWDHMSK0 (MCDS_TCYWD0_HMSK)

/** \brief 449C, Comparator Sign Register 0 */
#define MCDS_TCYWD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_SGN*)0xFA01449Cu)
/** Alias (User Manual Name) for MCDS_TCYWD0_SGN.
* To use register names with standard convension, please use MCDS_TCYWD0_SGN.
*/
#define MCDS_TCYWDSGN0 (MCDS_TCYWD0_SGN)

/** \brief 44A0, Comparator Bound Register 1 */
#define MCDS_TCYWD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_BND*)0xFA0144A0u)
/** Alias (User Manual Name) for MCDS_TCYWD1_BND.
* To use register names with standard convension, please use MCDS_TCYWD1_BND.
*/
#define MCDS_TCYWDBND1 (MCDS_TCYWD1_BND)

/** \brief 44A4, Comparator Bound Register 1 */
#define MCDS_TCYWD1_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HBND*)0xFA0144A4u)
/** Alias (User Manual Name) for MCDS_TCYWD1_HBND.
* To use register names with standard convension, please use MCDS_TCYWD1_HBND.
*/
#define MCDS_TCYWDHBND1 (MCDS_TCYWD1_HBND)

/** \brief 44A8, Comparator Range Register 1 */
#define MCDS_TCYWD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_RNG*)0xFA0144A8u)
/** Alias (User Manual Name) for MCDS_TCYWD1_RNG.
* To use register names with standard convension, please use MCDS_TCYWD1_RNG.
*/
#define MCDS_TCYWDRNG1 (MCDS_TCYWD1_RNG)

/** \brief 44AC, Comparator Range Register 1 */
#define MCDS_TCYWD1_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HRNG*)0xFA0144ACu)
/** Alias (User Manual Name) for MCDS_TCYWD1_HRNG.
* To use register names with standard convension, please use MCDS_TCYWD1_HRNG.
*/
#define MCDS_TCYWDHRNG1 (MCDS_TCYWD1_HRNG)

/** \brief 44B0, Comparator Mask Register 1 */
#define MCDS_TCYWD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_MSK*)0xFA0144B0u)
/** Alias (User Manual Name) for MCDS_TCYWD1_MSK.
* To use register names with standard convension, please use MCDS_TCYWD1_MSK.
*/
#define MCDS_TCYWDMSK1 (MCDS_TCYWD1_MSK)

/** \brief 44B4, Comparator Mask Register 1 */
#define MCDS_TCYWD1_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HMSK*)0xFA0144B4u)
/** Alias (User Manual Name) for MCDS_TCYWD1_HMSK.
* To use register names with standard convension, please use MCDS_TCYWD1_HMSK.
*/
#define MCDS_TCYWDHMSK1 (MCDS_TCYWD1_HMSK)

/** \brief 44BC, Comparator Sign Register 1 */
#define MCDS_TCYWD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_SGN*)0xFA0144BCu)
/** Alias (User Manual Name) for MCDS_TCYWD1_SGN.
* To use register names with standard convension, please use MCDS_TCYWD1_SGN.
*/
#define MCDS_TCYWDSGN1 (MCDS_TCYWD1_SGN)

/** \brief 44C0, Comparator Bound Register 2 */
#define MCDS_TCYWD2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_BND*)0xFA0144C0u)
/** Alias (User Manual Name) for MCDS_TCYWD2_BND.
* To use register names with standard convension, please use MCDS_TCYWD2_BND.
*/
#define MCDS_TCYWDBND2 (MCDS_TCYWD2_BND)

/** \brief 44C4, Comparator Bound Register 2 */
#define MCDS_TCYWD2_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HBND*)0xFA0144C4u)
/** Alias (User Manual Name) for MCDS_TCYWD2_HBND.
* To use register names with standard convension, please use MCDS_TCYWD2_HBND.
*/
#define MCDS_TCYWDHBND2 (MCDS_TCYWD2_HBND)

/** \brief 44C8, Comparator Range Register 2 */
#define MCDS_TCYWD2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_RNG*)0xFA0144C8u)
/** Alias (User Manual Name) for MCDS_TCYWD2_RNG.
* To use register names with standard convension, please use MCDS_TCYWD2_RNG.
*/
#define MCDS_TCYWDRNG2 (MCDS_TCYWD2_RNG)

/** \brief 44CC, Comparator Range Register 2 */
#define MCDS_TCYWD2_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HRNG*)0xFA0144CCu)
/** Alias (User Manual Name) for MCDS_TCYWD2_HRNG.
* To use register names with standard convension, please use MCDS_TCYWD2_HRNG.
*/
#define MCDS_TCYWDHRNG2 (MCDS_TCYWD2_HRNG)

/** \brief 44D0, Comparator Mask Register 2 */
#define MCDS_TCYWD2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_MSK*)0xFA0144D0u)
/** Alias (User Manual Name) for MCDS_TCYWD2_MSK.
* To use register names with standard convension, please use MCDS_TCYWD2_MSK.
*/
#define MCDS_TCYWDMSK2 (MCDS_TCYWD2_MSK)

/** \brief 44D4, Comparator Mask Register 2 */
#define MCDS_TCYWD2_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HMSK*)0xFA0144D4u)
/** Alias (User Manual Name) for MCDS_TCYWD2_HMSK.
* To use register names with standard convension, please use MCDS_TCYWD2_HMSK.
*/
#define MCDS_TCYWDHMSK2 (MCDS_TCYWD2_HMSK)

/** \brief 44DC, Comparator Sign Register 2 */
#define MCDS_TCYWD2_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_SGN*)0xFA0144DCu)
/** Alias (User Manual Name) for MCDS_TCYWD2_SGN.
* To use register names with standard convension, please use MCDS_TCYWD2_SGN.
*/
#define MCDS_TCYWDSGN2 (MCDS_TCYWD2_SGN)

/** \brief 44E0, Comparator Bound Register 3 */
#define MCDS_TCYWD3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_BND*)0xFA0144E0u)
/** Alias (User Manual Name) for MCDS_TCYWD3_BND.
* To use register names with standard convension, please use MCDS_TCYWD3_BND.
*/
#define MCDS_TCYWDBND3 (MCDS_TCYWD3_BND)

/** \brief 44E4, Comparator Bound Register 3 */
#define MCDS_TCYWD3_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HBND*)0xFA0144E4u)
/** Alias (User Manual Name) for MCDS_TCYWD3_HBND.
* To use register names with standard convension, please use MCDS_TCYWD3_HBND.
*/
#define MCDS_TCYWDHBND3 (MCDS_TCYWD3_HBND)

/** \brief 44E8, Comparator Range Register 3 */
#define MCDS_TCYWD3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_RNG*)0xFA0144E8u)
/** Alias (User Manual Name) for MCDS_TCYWD3_RNG.
* To use register names with standard convension, please use MCDS_TCYWD3_RNG.
*/
#define MCDS_TCYWDRNG3 (MCDS_TCYWD3_RNG)

/** \brief 44EC, Comparator Range Register 3 */
#define MCDS_TCYWD3_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HRNG*)0xFA0144ECu)
/** Alias (User Manual Name) for MCDS_TCYWD3_HRNG.
* To use register names with standard convension, please use MCDS_TCYWD3_HRNG.
*/
#define MCDS_TCYWDHRNG3 (MCDS_TCYWD3_HRNG)

/** \brief 44F0, Comparator Mask Register 3 */
#define MCDS_TCYWD3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_MSK*)0xFA0144F0u)
/** Alias (User Manual Name) for MCDS_TCYWD3_MSK.
* To use register names with standard convension, please use MCDS_TCYWD3_MSK.
*/
#define MCDS_TCYWDMSK3 (MCDS_TCYWD3_MSK)

/** \brief 44F4, Comparator Mask Register 3 */
#define MCDS_TCYWD3_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_HMSK*)0xFA0144F4u)
/** Alias (User Manual Name) for MCDS_TCYWD3_HMSK.
* To use register names with standard convension, please use MCDS_TCYWD3_HMSK.
*/
#define MCDS_TCYWDHMSK3 (MCDS_TCYWD3_HMSK)

/** \brief 44FC, Comparator Sign Register 3 */
#define MCDS_TCYWD3_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWD_SGN*)0xFA0144FCu)
/** Alias (User Manual Name) for MCDS_TCYWD3_SGN.
* To use register names with standard convension, please use MCDS_TCYWD3_SGN.
*/
#define MCDS_TCYWDSGN3 (MCDS_TCYWD3_SGN)

/** \brief 4500, Comparator Bound Register 0 */
#define MCDS_TCYAC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_BND*)0xFA014500u)
/** Alias (User Manual Name) for MCDS_TCYAC0_BND.
* To use register names with standard convension, please use MCDS_TCYAC0_BND.
*/
#define MCDS_TCYACBND0 (MCDS_TCYAC0_BND)

/** \brief 4504, Comparator Range Register 0 */
#define MCDS_TCYAC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_RNG*)0xFA014504u)
/** Alias (User Manual Name) for MCDS_TCYAC0_RNG.
* To use register names with standard convension, please use MCDS_TCYAC0_RNG.
*/
#define MCDS_TCYACRNG0 (MCDS_TCYAC0_RNG)

/** \brief 4508, Comparator Mask Register 0 */
#define MCDS_TCYAC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_MSK*)0xFA014508u)
/** Alias (User Manual Name) for MCDS_TCYAC0_MSK.
* To use register names with standard convension, please use MCDS_TCYAC0_MSK.
*/
#define MCDS_TCYACMSK0 (MCDS_TCYAC0_MSK)

/** \brief 4510, Comparator Bound Register 1 */
#define MCDS_TCYAC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_BND*)0xFA014510u)
/** Alias (User Manual Name) for MCDS_TCYAC1_BND.
* To use register names with standard convension, please use MCDS_TCYAC1_BND.
*/
#define MCDS_TCYACBND1 (MCDS_TCYAC1_BND)

/** \brief 4514, Comparator Range Register 1 */
#define MCDS_TCYAC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_RNG*)0xFA014514u)
/** Alias (User Manual Name) for MCDS_TCYAC1_RNG.
* To use register names with standard convension, please use MCDS_TCYAC1_RNG.
*/
#define MCDS_TCYACRNG1 (MCDS_TCYAC1_RNG)

/** \brief 4518, Comparator Mask Register 1 */
#define MCDS_TCYAC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_MSK*)0xFA014518u)
/** Alias (User Manual Name) for MCDS_TCYAC1_MSK.
* To use register names with standard convension, please use MCDS_TCYAC1_MSK.
*/
#define MCDS_TCYACMSK1 (MCDS_TCYAC1_MSK)

/** \brief 4520, Comparator Bound Register 2 */
#define MCDS_TCYAC2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_BND*)0xFA014520u)
/** Alias (User Manual Name) for MCDS_TCYAC2_BND.
* To use register names with standard convension, please use MCDS_TCYAC2_BND.
*/
#define MCDS_TCYACBND2 (MCDS_TCYAC2_BND)

/** \brief 4524, Comparator Range Register 2 */
#define MCDS_TCYAC2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_RNG*)0xFA014524u)
/** Alias (User Manual Name) for MCDS_TCYAC2_RNG.
* To use register names with standard convension, please use MCDS_TCYAC2_RNG.
*/
#define MCDS_TCYACRNG2 (MCDS_TCYAC2_RNG)

/** \brief 4528, Comparator Mask Register 2 */
#define MCDS_TCYAC2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_MSK*)0xFA014528u)
/** Alias (User Manual Name) for MCDS_TCYAC2_MSK.
* To use register names with standard convension, please use MCDS_TCYAC2_MSK.
*/
#define MCDS_TCYACMSK2 (MCDS_TCYAC2_MSK)

/** \brief 4530, Comparator Bound Register 3 */
#define MCDS_TCYAC3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_BND*)0xFA014530u)
/** Alias (User Manual Name) for MCDS_TCYAC3_BND.
* To use register names with standard convension, please use MCDS_TCYAC3_BND.
*/
#define MCDS_TCYACBND3 (MCDS_TCYAC3_BND)

/** \brief 4534, Comparator Range Register 3 */
#define MCDS_TCYAC3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_RNG*)0xFA014534u)
/** Alias (User Manual Name) for MCDS_TCYAC3_RNG.
* To use register names with standard convension, please use MCDS_TCYAC3_RNG.
*/
#define MCDS_TCYACRNG3 (MCDS_TCYAC3_RNG)

/** \brief 4538, Comparator Mask Register 3 */
#define MCDS_TCYAC3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYAC_MSK*)0xFA014538u)
/** Alias (User Manual Name) for MCDS_TCYAC3_MSK.
* To use register names with standard convension, please use MCDS_TCYAC3_MSK.
*/
#define MCDS_TCYACMSK3 (MCDS_TCYAC3_MSK)

/** \brief 4580, DTU FIFOs Fill Level */
#define MCDS_TCYDTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYDTUFLV*)0xFA014580u)

/** \brief 4800, Event Definition Register 0 */
#define MCDS_TCYEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014800u)

/** \brief 4804, Event Definition Register 1 */
#define MCDS_TCYEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014804u)

/** \brief 4808, Event Definition Register 2 */
#define MCDS_TCYEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014808u)

/** \brief 480C, Event Definition Register 3 */
#define MCDS_TCYEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA01480Cu)

/** \brief 4810, Event Definition Register 4 */
#define MCDS_TCYEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014810u)

/** \brief 4814, Event Definition Register 5 */
#define MCDS_TCYEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014814u)

/** \brief 4818, Event Definition Register 6 */
#define MCDS_TCYEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014818u)

/** \brief 481C, Event Definition Register 7 */
#define MCDS_TCYEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA01481Cu)

/** \brief 4820, Event Definition Register 8 */
#define MCDS_TCYEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014820u)

/** \brief 4824, Event Definition Register 9 */
#define MCDS_TCYEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014824u)

/** \brief 4828, Event Definition Register 10 */
#define MCDS_TCYEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014828u)

/** \brief 482C, Event Definition Register 11 */
#define MCDS_TCYEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA01482Cu)

/** \brief 4830, Event Definition Register 12 */
#define MCDS_TCYEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014830u)

/** \brief 4834, Event Definition Register 13 */
#define MCDS_TCYEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014834u)

/** \brief 4838, Event Definition Register 14 */
#define MCDS_TCYEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014838u)

/** \brief 483C, Event Definition Register 15 */
#define MCDS_TCYEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA01483Cu)

/** \brief 4880, Action Definition Register 0 */
#define MCDS_TCYACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014880u)

/** \brief 4884, Action Definition Register 1 */
#define MCDS_TCYACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014884u)

/** \brief 4888, Action Definition Register 2 */
#define MCDS_TCYACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014888u)

/** \brief 488C, Action Definition Register 3 */
#define MCDS_TCYACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA01488Cu)

/** \brief 4890, Action Definition Register 4 */
#define MCDS_TCYACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014890u)

/** \brief 4894, Action Definition Register 5 */
#define MCDS_TCYACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014894u)

/** \brief 4898, Action Definition Register 6 */
#define MCDS_TCYACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014898u)

/** \brief 489C, Action Definition Register 7 */
#define MCDS_TCYACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA01489Cu)

/** \brief 48A0, Action Definition Register 8 */
#define MCDS_TCYACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148A0u)

/** \brief 48A4, Action Definition Register 9 */
#define MCDS_TCYACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148A4u)

/** \brief 48A8, Action Definition Register 10 */
#define MCDS_TCYACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148A8u)

/** \brief 48AC, Action Definition Register 11 */
#define MCDS_TCYACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148ACu)

/** \brief 48B0, Action Definition Register 12 */
#define MCDS_TCYACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148B0u)

/** \brief 48B4, Action Definition Register 13 */
#define MCDS_TCYACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148B4u)

/** \brief 48B8, Action Definition Register 14 */
#define MCDS_TCYACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148B8u)

/** \brief 48BC, Action Definition Register 15 */
#define MCDS_TCYACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148BCu)

/** \brief 48C0, Action Definition Register 16 */
#define MCDS_TCYACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148C0u)

/** \brief 48C4, Action Definition Register 17 */
#define MCDS_TCYACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148C4u)

/** \brief 48C8, Action Definition Register 18 */
#define MCDS_TCYACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148C8u)

/** \brief 48CC, Action Definition Register 19 */
#define MCDS_TCYACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148CCu)

/** \brief 48D0, Action Definition Register 20 */
#define MCDS_TCYACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148D0u)

/** \brief 48D4, Action Definition Register 21 */
#define MCDS_TCYACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148D4u)

/** \brief 48D8, Action Definition Register 22 */
#define MCDS_TCYACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148D8u)

/** \brief 48DC, Action Definition Register 23 */
#define MCDS_TCYACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148DCu)

/** \brief 4C00, Comparator Bound Register 0 */
#define MCDS_TCYID0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYID_BND*)0xFA014C00u)
/** Alias (User Manual Name) for MCDS_TCYID0_BND.
* To use register names with standard convension, please use MCDS_TCYID0_BND.
*/
#define MCDS_TCYIDBND0 (MCDS_TCYID0_BND)

/** \brief 4C04, Comparator Range Register 0 */
#define MCDS_TCYID0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYID_RNG*)0xFA014C04u)
/** Alias (User Manual Name) for MCDS_TCYID0_RNG.
* To use register names with standard convension, please use MCDS_TCYID0_RNG.
*/
#define MCDS_TCYIDRNG0 (MCDS_TCYID0_RNG)

/** \brief 4C08, Comparator Mask Register 0 */
#define MCDS_TCYID0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYID_MSK*)0xFA014C08u)
/** Alias (User Manual Name) for MCDS_TCYID0_MSK.
* To use register names with standard convension, please use MCDS_TCYID0_MSK.
*/
#define MCDS_TCYIDMSK0 (MCDS_TCYID0_MSK)

/** \brief 4C0C, Comparator Sign Register 0 */
#define MCDS_TCYID0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYID_SGN*)0xFA014C0Cu)
/** Alias (User Manual Name) for MCDS_TCYID0_SGN.
* To use register names with standard convension, please use MCDS_TCYID0_SGN.
*/
#define MCDS_TCYIDSGN0 (MCDS_TCYID0_SGN)

/** \brief 4C10, Comparator Bound Register 1 */
#define MCDS_TCYID1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYID_BND*)0xFA014C10u)
/** Alias (User Manual Name) for MCDS_TCYID1_BND.
* To use register names with standard convension, please use MCDS_TCYID1_BND.
*/
#define MCDS_TCYIDBND1 (MCDS_TCYID1_BND)

/** \brief 4C14, Comparator Range Register 1 */
#define MCDS_TCYID1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYID_RNG*)0xFA014C14u)
/** Alias (User Manual Name) for MCDS_TCYID1_RNG.
* To use register names with standard convension, please use MCDS_TCYID1_RNG.
*/
#define MCDS_TCYIDRNG1 (MCDS_TCYID1_RNG)

/** \brief 4C18, Comparator Mask Register 1 */
#define MCDS_TCYID1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYID_MSK*)0xFA014C18u)
/** Alias (User Manual Name) for MCDS_TCYID1_MSK.
* To use register names with standard convension, please use MCDS_TCYID1_MSK.
*/
#define MCDS_TCYIDMSK1 (MCDS_TCYID1_MSK)

/** \brief 4C1C, Comparator Sign Register 1 */
#define MCDS_TCYID1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYID_SGN*)0xFA014C1Cu)
/** Alias (User Manual Name) for MCDS_TCYID1_SGN.
* To use register names with standard convension, please use MCDS_TCYID1_SGN.
*/
#define MCDS_TCYIDSGN1 (MCDS_TCYID1_SGN)

/** \brief 5000, Comparator Bound Register 0 */
#define MCDS_TCYIP0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_BND*)0xFA015000u)
/** Alias (User Manual Name) for MCDS_TCYIP0_BND.
* To use register names with standard convension, please use MCDS_TCYIP0_BND.
*/
#define MCDS_TCYIPBND0 (MCDS_TCYIP0_BND)

/** \brief 5004, Comparator Range Register 0 */
#define MCDS_TCYIP0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_RNG*)0xFA015004u)
/** Alias (User Manual Name) for MCDS_TCYIP0_RNG.
* To use register names with standard convension, please use MCDS_TCYIP0_RNG.
*/
#define MCDS_TCYIPRNG0 (MCDS_TCYIP0_RNG)

/** \brief 5010, Comparator Bound Register 1 */
#define MCDS_TCYIP1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_BND*)0xFA015010u)
/** Alias (User Manual Name) for MCDS_TCYIP1_BND.
* To use register names with standard convension, please use MCDS_TCYIP1_BND.
*/
#define MCDS_TCYIPBND1 (MCDS_TCYIP1_BND)

/** \brief 5014, Comparator Range Register 1 */
#define MCDS_TCYIP1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_RNG*)0xFA015014u)
/** Alias (User Manual Name) for MCDS_TCYIP1_RNG.
* To use register names with standard convension, please use MCDS_TCYIP1_RNG.
*/
#define MCDS_TCYIPRNG1 (MCDS_TCYIP1_RNG)

/** \brief 5020, Comparator Bound Register 2 */
#define MCDS_TCYIP2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_BND*)0xFA015020u)
/** Alias (User Manual Name) for MCDS_TCYIP2_BND.
* To use register names with standard convension, please use MCDS_TCYIP2_BND.
*/
#define MCDS_TCYIPBND2 (MCDS_TCYIP2_BND)

/** \brief 5024, Comparator Range Register 2 */
#define MCDS_TCYIP2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_RNG*)0xFA015024u)
/** Alias (User Manual Name) for MCDS_TCYIP2_RNG.
* To use register names with standard convension, please use MCDS_TCYIP2_RNG.
*/
#define MCDS_TCYIPRNG2 (MCDS_TCYIP2_RNG)

/** \brief 5030, Comparator Bound Register 3 */
#define MCDS_TCYIP3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_BND*)0xFA015030u)
/** Alias (User Manual Name) for MCDS_TCYIP3_BND.
* To use register names with standard convension, please use MCDS_TCYIP3_BND.
*/
#define MCDS_TCYIPBND3 (MCDS_TCYIP3_BND)

/** \brief 5034, Comparator Range Register 3 */
#define MCDS_TCYIP3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_RNG*)0xFA015034u)
/** Alias (User Manual Name) for MCDS_TCYIP3_RNG.
* To use register names with standard convension, please use MCDS_TCYIP3_RNG.
*/
#define MCDS_TCYIPRNG3 (MCDS_TCYIP3_RNG)

/** \brief 5040, Comparator Bound Register 4 */
#define MCDS_TCYIP4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_BND*)0xFA015040u)
/** Alias (User Manual Name) for MCDS_TCYIP4_BND.
* To use register names with standard convension, please use MCDS_TCYIP4_BND.
*/
#define MCDS_TCYIPBND4 (MCDS_TCYIP4_BND)

/** \brief 5044, Comparator Range Register 4 */
#define MCDS_TCYIP4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_RNG*)0xFA015044u)
/** Alias (User Manual Name) for MCDS_TCYIP4_RNG.
* To use register names with standard convension, please use MCDS_TCYIP4_RNG.
*/
#define MCDS_TCYIPRNG4 (MCDS_TCYIP4_RNG)

/** \brief 5050, Comparator Bound Register 5 */
#define MCDS_TCYIP5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_BND*)0xFA015050u)
/** Alias (User Manual Name) for MCDS_TCYIP5_BND.
* To use register names with standard convension, please use MCDS_TCYIP5_BND.
*/
#define MCDS_TCYIPBND5 (MCDS_TCYIP5_BND)

/** \brief 5054, Comparator Range Register 5 */
#define MCDS_TCYIP5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIP_RNG*)0xFA015054u)
/** Alias (User Manual Name) for MCDS_TCYIP5_RNG.
* To use register names with standard convension, please use MCDS_TCYIP5_RNG.
*/
#define MCDS_TCYIPRNG5 (MCDS_TCYIP5_RNG)

/** \brief 6000, Debug Status Register */
#define MCDS_SPBDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBDCSTS*)0xFA016000u)

/** \brief 6400, Comparator Bound Register 0 */
#define MCDS_SPBEA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEA_BND*)0xFA016400u)
/** Alias (User Manual Name) for MCDS_SPBEA0_BND.
* To use register names with standard convension, please use MCDS_SPBEA0_BND.
*/
#define MCDS_SPBEABND0 (MCDS_SPBEA0_BND)

/** \brief 6404, Comparator Range Register 0 */
#define MCDS_SPBEA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEA_RNG*)0xFA016404u)
/** Alias (User Manual Name) for MCDS_SPBEA0_RNG.
* To use register names with standard convension, please use MCDS_SPBEA0_RNG.
*/
#define MCDS_SPBEARNG0 (MCDS_SPBEA0_RNG)

/** \brief 6410, Comparator Bound Register 1 */
#define MCDS_SPBEA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEA_BND*)0xFA016410u)
/** Alias (User Manual Name) for MCDS_SPBEA1_BND.
* To use register names with standard convension, please use MCDS_SPBEA1_BND.
*/
#define MCDS_SPBEABND1 (MCDS_SPBEA1_BND)

/** \brief 6414, Comparator Range Register 1 */
#define MCDS_SPBEA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEA_RNG*)0xFA016414u)
/** Alias (User Manual Name) for MCDS_SPBEA1_RNG.
* To use register names with standard convension, please use MCDS_SPBEA1_RNG.
*/
#define MCDS_SPBEARNG1 (MCDS_SPBEA1_RNG)

/** \brief 6420, Comparator Bound Register 2 */
#define MCDS_SPBEA2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEA_BND*)0xFA016420u)
/** Alias (User Manual Name) for MCDS_SPBEA2_BND.
* To use register names with standard convension, please use MCDS_SPBEA2_BND.
*/
#define MCDS_SPBEABND2 (MCDS_SPBEA2_BND)

/** \brief 6424, Comparator Range Register 2 */
#define MCDS_SPBEA2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEA_RNG*)0xFA016424u)
/** Alias (User Manual Name) for MCDS_SPBEA2_RNG.
* To use register names with standard convension, please use MCDS_SPBEA2_RNG.
*/
#define MCDS_SPBEARNG2 (MCDS_SPBEA2_RNG)

/** \brief 6430, Comparator Bound Register 3 */
#define MCDS_SPBEA3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEA_BND*)0xFA016430u)
/** Alias (User Manual Name) for MCDS_SPBEA3_BND.
* To use register names with standard convension, please use MCDS_SPBEA3_BND.
*/
#define MCDS_SPBEABND3 (MCDS_SPBEA3_BND)

/** \brief 6434, Comparator Range Register 3 */
#define MCDS_SPBEA3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEA_RNG*)0xFA016434u)
/** Alias (User Manual Name) for MCDS_SPBEA3_RNG.
* To use register names with standard convension, please use MCDS_SPBEA3_RNG.
*/
#define MCDS_SPBEARNG3 (MCDS_SPBEA3_RNG)

/** \brief 6480, Comparator Bound Register 0 */
#define MCDS_SPBWD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_BND*)0xFA016480u)
/** Alias (User Manual Name) for MCDS_SPBWD0_BND.
* To use register names with standard convension, please use MCDS_SPBWD0_BND.
*/
#define MCDS_SPBWDBND0 (MCDS_SPBWD0_BND)

/** \brief 6484, Comparator Range Register 0 */
#define MCDS_SPBWD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_RNG*)0xFA016484u)
/** Alias (User Manual Name) for MCDS_SPBWD0_RNG.
* To use register names with standard convension, please use MCDS_SPBWD0_RNG.
*/
#define MCDS_SPBWDRNG0 (MCDS_SPBWD0_RNG)

/** \brief 6488, Comparator Mask Register 0 */
#define MCDS_SPBWD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_MSK*)0xFA016488u)
/** Alias (User Manual Name) for MCDS_SPBWD0_MSK.
* To use register names with standard convension, please use MCDS_SPBWD0_MSK.
*/
#define MCDS_SPBWDMSK0 (MCDS_SPBWD0_MSK)

/** \brief 648C, Comparator Sign Register 0 */
#define MCDS_SPBWD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_SGN*)0xFA01648Cu)
/** Alias (User Manual Name) for MCDS_SPBWD0_SGN.
* To use register names with standard convension, please use MCDS_SPBWD0_SGN.
*/
#define MCDS_SPBWDSGN0 (MCDS_SPBWD0_SGN)

/** \brief 6490, Comparator Bound Register 1 */
#define MCDS_SPBWD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_BND*)0xFA016490u)
/** Alias (User Manual Name) for MCDS_SPBWD1_BND.
* To use register names with standard convension, please use MCDS_SPBWD1_BND.
*/
#define MCDS_SPBWDBND1 (MCDS_SPBWD1_BND)

/** \brief 6494, Comparator Range Register 1 */
#define MCDS_SPBWD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_RNG*)0xFA016494u)
/** Alias (User Manual Name) for MCDS_SPBWD1_RNG.
* To use register names with standard convension, please use MCDS_SPBWD1_RNG.
*/
#define MCDS_SPBWDRNG1 (MCDS_SPBWD1_RNG)

/** \brief 6498, Comparator Mask Register 1 */
#define MCDS_SPBWD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_MSK*)0xFA016498u)
/** Alias (User Manual Name) for MCDS_SPBWD1_MSK.
* To use register names with standard convension, please use MCDS_SPBWD1_MSK.
*/
#define MCDS_SPBWDMSK1 (MCDS_SPBWD1_MSK)

/** \brief 649C, Comparator Sign Register 1 */
#define MCDS_SPBWD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_SGN*)0xFA01649Cu)
/** Alias (User Manual Name) for MCDS_SPBWD1_SGN.
* To use register names with standard convension, please use MCDS_SPBWD1_SGN.
*/
#define MCDS_SPBWDSGN1 (MCDS_SPBWD1_SGN)

/** \brief 64A0, Comparator Bound Register 2 */
#define MCDS_SPBWD2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_BND*)0xFA0164A0u)
/** Alias (User Manual Name) for MCDS_SPBWD2_BND.
* To use register names with standard convension, please use MCDS_SPBWD2_BND.
*/
#define MCDS_SPBWDBND2 (MCDS_SPBWD2_BND)

/** \brief 64A4, Comparator Range Register 2 */
#define MCDS_SPBWD2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_RNG*)0xFA0164A4u)
/** Alias (User Manual Name) for MCDS_SPBWD2_RNG.
* To use register names with standard convension, please use MCDS_SPBWD2_RNG.
*/
#define MCDS_SPBWDRNG2 (MCDS_SPBWD2_RNG)

/** \brief 64A8, Comparator Mask Register 2 */
#define MCDS_SPBWD2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_MSK*)0xFA0164A8u)
/** Alias (User Manual Name) for MCDS_SPBWD2_MSK.
* To use register names with standard convension, please use MCDS_SPBWD2_MSK.
*/
#define MCDS_SPBWDMSK2 (MCDS_SPBWD2_MSK)

/** \brief 64AC, Comparator Sign Register 2 */
#define MCDS_SPBWD2_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_SGN*)0xFA0164ACu)
/** Alias (User Manual Name) for MCDS_SPBWD2_SGN.
* To use register names with standard convension, please use MCDS_SPBWD2_SGN.
*/
#define MCDS_SPBWDSGN2 (MCDS_SPBWD2_SGN)

/** \brief 64B0, Comparator Bound Register 3 */
#define MCDS_SPBWD3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_BND*)0xFA0164B0u)
/** Alias (User Manual Name) for MCDS_SPBWD3_BND.
* To use register names with standard convension, please use MCDS_SPBWD3_BND.
*/
#define MCDS_SPBWDBND3 (MCDS_SPBWD3_BND)

/** \brief 64B4, Comparator Range Register 3 */
#define MCDS_SPBWD3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_RNG*)0xFA0164B4u)
/** Alias (User Manual Name) for MCDS_SPBWD3_RNG.
* To use register names with standard convension, please use MCDS_SPBWD3_RNG.
*/
#define MCDS_SPBWDRNG3 (MCDS_SPBWD3_RNG)

/** \brief 64B8, Comparator Mask Register 3 */
#define MCDS_SPBWD3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_MSK*)0xFA0164B8u)
/** Alias (User Manual Name) for MCDS_SPBWD3_MSK.
* To use register names with standard convension, please use MCDS_SPBWD3_MSK.
*/
#define MCDS_SPBWDMSK3 (MCDS_SPBWD3_MSK)

/** \brief 64BC, Comparator Sign Register 3 */
#define MCDS_SPBWD3_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWD_SGN*)0xFA0164BCu)
/** Alias (User Manual Name) for MCDS_SPBWD3_SGN.
* To use register names with standard convension, please use MCDS_SPBWD3_SGN.
*/
#define MCDS_SPBWDSGN3 (MCDS_SPBWD3_SGN)

/** \brief 6500, Comparator Bound Register 0 */
#define MCDS_SPBAC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_BND*)0xFA016500u)
/** Alias (User Manual Name) for MCDS_SPBAC0_BND.
* To use register names with standard convension, please use MCDS_SPBAC0_BND.
*/
#define MCDS_SPBACBND0 (MCDS_SPBAC0_BND)

/** \brief 6504, Comparator Range Register 0 */
#define MCDS_SPBAC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_RNG*)0xFA016504u)
/** Alias (User Manual Name) for MCDS_SPBAC0_RNG.
* To use register names with standard convension, please use MCDS_SPBAC0_RNG.
*/
#define MCDS_SPBACRNG0 (MCDS_SPBAC0_RNG)

/** \brief 6508, Comparator Mask Register 0 */
#define MCDS_SPBAC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_MSK*)0xFA016508u)
/** Alias (User Manual Name) for MCDS_SPBAC0_MSK.
* To use register names with standard convension, please use MCDS_SPBAC0_MSK.
*/
#define MCDS_SPBACMSK0 (MCDS_SPBAC0_MSK)

/** \brief 6510, Comparator Bound Register 1 */
#define MCDS_SPBAC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_BND*)0xFA016510u)
/** Alias (User Manual Name) for MCDS_SPBAC1_BND.
* To use register names with standard convension, please use MCDS_SPBAC1_BND.
*/
#define MCDS_SPBACBND1 (MCDS_SPBAC1_BND)

/** \brief 6514, Comparator Range Register 1 */
#define MCDS_SPBAC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_RNG*)0xFA016514u)
/** Alias (User Manual Name) for MCDS_SPBAC1_RNG.
* To use register names with standard convension, please use MCDS_SPBAC1_RNG.
*/
#define MCDS_SPBACRNG1 (MCDS_SPBAC1_RNG)

/** \brief 6518, Comparator Mask Register 1 */
#define MCDS_SPBAC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_MSK*)0xFA016518u)
/** Alias (User Manual Name) for MCDS_SPBAC1_MSK.
* To use register names with standard convension, please use MCDS_SPBAC1_MSK.
*/
#define MCDS_SPBACMSK1 (MCDS_SPBAC1_MSK)

/** \brief 6520, Comparator Bound Register 2 */
#define MCDS_SPBAC2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_BND*)0xFA016520u)
/** Alias (User Manual Name) for MCDS_SPBAC2_BND.
* To use register names with standard convension, please use MCDS_SPBAC2_BND.
*/
#define MCDS_SPBACBND2 (MCDS_SPBAC2_BND)

/** \brief 6524, Comparator Range Register 2 */
#define MCDS_SPBAC2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_RNG*)0xFA016524u)
/** Alias (User Manual Name) for MCDS_SPBAC2_RNG.
* To use register names with standard convension, please use MCDS_SPBAC2_RNG.
*/
#define MCDS_SPBACRNG2 (MCDS_SPBAC2_RNG)

/** \brief 6528, Comparator Mask Register 2 */
#define MCDS_SPBAC2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_MSK*)0xFA016528u)
/** Alias (User Manual Name) for MCDS_SPBAC2_MSK.
* To use register names with standard convension, please use MCDS_SPBAC2_MSK.
*/
#define MCDS_SPBACMSK2 (MCDS_SPBAC2_MSK)

/** \brief 6530, Comparator Bound Register 3 */
#define MCDS_SPBAC3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_BND*)0xFA016530u)
/** Alias (User Manual Name) for MCDS_SPBAC3_BND.
* To use register names with standard convension, please use MCDS_SPBAC3_BND.
*/
#define MCDS_SPBACBND3 (MCDS_SPBAC3_BND)

/** \brief 6534, Comparator Range Register 3 */
#define MCDS_SPBAC3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_RNG*)0xFA016534u)
/** Alias (User Manual Name) for MCDS_SPBAC3_RNG.
* To use register names with standard convension, please use MCDS_SPBAC3_RNG.
*/
#define MCDS_SPBACRNG3 (MCDS_SPBAC3_RNG)

/** \brief 6538, Comparator Mask Register 3 */
#define MCDS_SPBAC3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBAC_MSK*)0xFA016538u)
/** Alias (User Manual Name) for MCDS_SPBAC3_MSK.
* To use register names with standard convension, please use MCDS_SPBAC3_MSK.
*/
#define MCDS_SPBACMSK3 (MCDS_SPBAC3_MSK)

/** \brief 6800, Event Definition Register 0 */
#define MCDS_SPBEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016800u)

/** \brief 6804, Event Definition Register 1 */
#define MCDS_SPBEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016804u)

/** \brief 6808, Event Definition Register 2 */
#define MCDS_SPBEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016808u)

/** \brief 680C, Event Definition Register 3 */
#define MCDS_SPBEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA01680Cu)

/** \brief 6810, Event Definition Register 4 */
#define MCDS_SPBEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016810u)

/** \brief 6814, Event Definition Register 5 */
#define MCDS_SPBEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016814u)

/** \brief 6818, Event Definition Register 6 */
#define MCDS_SPBEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016818u)

/** \brief 681C, Event Definition Register 7 */
#define MCDS_SPBEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA01681Cu)

/** \brief 6820, Event Definition Register 8 */
#define MCDS_SPBEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016820u)

/** \brief 6824, Event Definition Register 9 */
#define MCDS_SPBEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016824u)

/** \brief 6828, Event Definition Register 10 */
#define MCDS_SPBEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016828u)

/** \brief 682C, Event Definition Register 11 */
#define MCDS_SPBEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA01682Cu)

/** \brief 6830, Event Definition Register 12 */
#define MCDS_SPBEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016830u)

/** \brief 6834, Event Definition Register 13 */
#define MCDS_SPBEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016834u)

/** \brief 6838, Event Definition Register 14 */
#define MCDS_SPBEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016838u)

/** \brief 683C, Event Definition Register 15 */
#define MCDS_SPBEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA01683Cu)

/** \brief 6880, Action Definition Register 0 */
#define MCDS_SPBACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016880u)

/** \brief 6884, Action Definition Register 1 */
#define MCDS_SPBACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016884u)

/** \brief 6888, Action Definition Register 2 */
#define MCDS_SPBACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016888u)

/** \brief 688C, Action Definition Register 3 */
#define MCDS_SPBACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA01688Cu)

/** \brief 6890, Action Definition Register 4 */
#define MCDS_SPBACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016890u)

/** \brief 6894, Action Definition Register 5 */
#define MCDS_SPBACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016894u)

/** \brief 6898, Action Definition Register 6 */
#define MCDS_SPBACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016898u)

/** \brief 689C, Action Definition Register 7 */
#define MCDS_SPBACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA01689Cu)

/** \brief 68A0, Action Definition Register 8 */
#define MCDS_SPBACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168A0u)

/** \brief 68A4, Action Definition Register 9 */
#define MCDS_SPBACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168A4u)

/** \brief 68A8, Action Definition Register 10 */
#define MCDS_SPBACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168A8u)

/** \brief 68AC, Action Definition Register 11 */
#define MCDS_SPBACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168ACu)

/** \brief 68B0, Action Definition Register 12 */
#define MCDS_SPBACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168B0u)

/** \brief 68B4, Action Definition Register 13 */
#define MCDS_SPBACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168B4u)

/** \brief 68B8, Action Definition Register 14 */
#define MCDS_SPBACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168B8u)

/** \brief 7000, Debug Status Register */
#define MCDS_SRIDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIDCSTS*)0xFA017000u)

/** \brief 7200, Lookup Table Data Register */
#define MCDS_SRI1BALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALLUTD*)0xFA017200u)

/** \brief 7204, Lookup Table Address Register */
#define MCDS_SRI1BALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALLUTA*)0xFA017204u)

/** \brief 7210, Lookup Table Base Register */
#define MCDS_SRI1BAL0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_BND*)0xFA017210u)
/** Alias (User Manual Name) for MCDS_SRI1BAL0_BND.
* To use register names with standard convension, please use MCDS_SRI1BAL0_BND.
*/
#define MCDS_SRI1BALBND0 (MCDS_SRI1BAL0_BND)

/** \brief 7214, Lookup Table Range Register */
#define MCDS_SRI1BAL0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_RNG*)0xFA017214u)
/** Alias (User Manual Name) for MCDS_SRI1BAL0_RNG.
* To use register names with standard convension, please use MCDS_SRI1BAL0_RNG.
*/
#define MCDS_SRI1BALRNG0 (MCDS_SRI1BAL0_RNG)

/** \brief 7218, Lookup Table Mapping Register */
#define MCDS_SRI1BAL0_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_MAP*)0xFA017218u)
/** Alias (User Manual Name) for MCDS_SRI1BAL0_MAP.
* To use register names with standard convension, please use MCDS_SRI1BAL0_MAP.
*/
#define MCDS_SRI1BALMAP0 (MCDS_SRI1BAL0_MAP)

/** \brief 7220, Lookup Table Base Register */
#define MCDS_SRI1BAL1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_BND*)0xFA017220u)
/** Alias (User Manual Name) for MCDS_SRI1BAL1_BND.
* To use register names with standard convension, please use MCDS_SRI1BAL1_BND.
*/
#define MCDS_SRI1BALBND1 (MCDS_SRI1BAL1_BND)

/** \brief 7224, Lookup Table Range Register */
#define MCDS_SRI1BAL1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_RNG*)0xFA017224u)
/** Alias (User Manual Name) for MCDS_SRI1BAL1_RNG.
* To use register names with standard convension, please use MCDS_SRI1BAL1_RNG.
*/
#define MCDS_SRI1BALRNG1 (MCDS_SRI1BAL1_RNG)

/** \brief 7228, Lookup Table Mapping Register */
#define MCDS_SRI1BAL1_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_MAP*)0xFA017228u)
/** Alias (User Manual Name) for MCDS_SRI1BAL1_MAP.
* To use register names with standard convension, please use MCDS_SRI1BAL1_MAP.
*/
#define MCDS_SRI1BALMAP1 (MCDS_SRI1BAL1_MAP)

/** \brief 7230, Lookup Table Base Register */
#define MCDS_SRI1BAL2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_BND*)0xFA017230u)
/** Alias (User Manual Name) for MCDS_SRI1BAL2_BND.
* To use register names with standard convension, please use MCDS_SRI1BAL2_BND.
*/
#define MCDS_SRI1BALBND2 (MCDS_SRI1BAL2_BND)

/** \brief 7234, Lookup Table Range Register */
#define MCDS_SRI1BAL2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_RNG*)0xFA017234u)
/** Alias (User Manual Name) for MCDS_SRI1BAL2_RNG.
* To use register names with standard convension, please use MCDS_SRI1BAL2_RNG.
*/
#define MCDS_SRI1BALRNG2 (MCDS_SRI1BAL2_RNG)

/** \brief 7238, Lookup Table Mapping Register */
#define MCDS_SRI1BAL2_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_MAP*)0xFA017238u)
/** Alias (User Manual Name) for MCDS_SRI1BAL2_MAP.
* To use register names with standard convension, please use MCDS_SRI1BAL2_MAP.
*/
#define MCDS_SRI1BALMAP2 (MCDS_SRI1BAL2_MAP)

/** \brief 7240, Lookup Table Base Register */
#define MCDS_SRI1BAL3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_BND*)0xFA017240u)
/** Alias (User Manual Name) for MCDS_SRI1BAL3_BND.
* To use register names with standard convension, please use MCDS_SRI1BAL3_BND.
*/
#define MCDS_SRI1BALBND3 (MCDS_SRI1BAL3_BND)

/** \brief 7244, Lookup Table Range Register */
#define MCDS_SRI1BAL3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_RNG*)0xFA017244u)
/** Alias (User Manual Name) for MCDS_SRI1BAL3_RNG.
* To use register names with standard convension, please use MCDS_SRI1BAL3_RNG.
*/
#define MCDS_SRI1BALRNG3 (MCDS_SRI1BAL3_RNG)

/** \brief 7248, Lookup Table Mapping Register */
#define MCDS_SRI1BAL3_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BAL_MAP*)0xFA017248u)
/** Alias (User Manual Name) for MCDS_SRI1BAL3_MAP.
* To use register names with standard convension, please use MCDS_SRI1BAL3_MAP.
*/
#define MCDS_SRI1BALMAP3 (MCDS_SRI1BAL3_MAP)

/** \brief 7300, Lookup Table Data Register */
#define MCDS_SRI2BALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALLUTD*)0xFA017300u)

/** \brief 7304, Lookup Table Address Register */
#define MCDS_SRI2BALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALLUTA*)0xFA017304u)

/** \brief 7310, Lookup Table Base Register */
#define MCDS_SRI2BAL0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_BND*)0xFA017310u)
/** Alias (User Manual Name) for MCDS_SRI2BAL0_BND.
* To use register names with standard convension, please use MCDS_SRI2BAL0_BND.
*/
#define MCDS_SRI2BALBND0 (MCDS_SRI2BAL0_BND)

/** \brief 7314, Lookup Table Range Register */
#define MCDS_SRI2BAL0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_RNG*)0xFA017314u)
/** Alias (User Manual Name) for MCDS_SRI2BAL0_RNG.
* To use register names with standard convension, please use MCDS_SRI2BAL0_RNG.
*/
#define MCDS_SRI2BALRNG0 (MCDS_SRI2BAL0_RNG)

/** \brief 7318, Lookup Table Mapping Register */
#define MCDS_SRI2BAL0_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_MAP*)0xFA017318u)
/** Alias (User Manual Name) for MCDS_SRI2BAL0_MAP.
* To use register names with standard convension, please use MCDS_SRI2BAL0_MAP.
*/
#define MCDS_SRI2BALMAP0 (MCDS_SRI2BAL0_MAP)

/** \brief 7320, Lookup Table Base Register */
#define MCDS_SRI2BAL1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_BND*)0xFA017320u)
/** Alias (User Manual Name) for MCDS_SRI2BAL1_BND.
* To use register names with standard convension, please use MCDS_SRI2BAL1_BND.
*/
#define MCDS_SRI2BALBND1 (MCDS_SRI2BAL1_BND)

/** \brief 7324, Lookup Table Range Register */
#define MCDS_SRI2BAL1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_RNG*)0xFA017324u)
/** Alias (User Manual Name) for MCDS_SRI2BAL1_RNG.
* To use register names with standard convension, please use MCDS_SRI2BAL1_RNG.
*/
#define MCDS_SRI2BALRNG1 (MCDS_SRI2BAL1_RNG)

/** \brief 7328, Lookup Table Mapping Register */
#define MCDS_SRI2BAL1_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_MAP*)0xFA017328u)
/** Alias (User Manual Name) for MCDS_SRI2BAL1_MAP.
* To use register names with standard convension, please use MCDS_SRI2BAL1_MAP.
*/
#define MCDS_SRI2BALMAP1 (MCDS_SRI2BAL1_MAP)

/** \brief 7330, Lookup Table Base Register */
#define MCDS_SRI2BAL2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_BND*)0xFA017330u)
/** Alias (User Manual Name) for MCDS_SRI2BAL2_BND.
* To use register names with standard convension, please use MCDS_SRI2BAL2_BND.
*/
#define MCDS_SRI2BALBND2 (MCDS_SRI2BAL2_BND)

/** \brief 7334, Lookup Table Range Register */
#define MCDS_SRI2BAL2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_RNG*)0xFA017334u)
/** Alias (User Manual Name) for MCDS_SRI2BAL2_RNG.
* To use register names with standard convension, please use MCDS_SRI2BAL2_RNG.
*/
#define MCDS_SRI2BALRNG2 (MCDS_SRI2BAL2_RNG)

/** \brief 7338, Lookup Table Mapping Register */
#define MCDS_SRI2BAL2_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_MAP*)0xFA017338u)
/** Alias (User Manual Name) for MCDS_SRI2BAL2_MAP.
* To use register names with standard convension, please use MCDS_SRI2BAL2_MAP.
*/
#define MCDS_SRI2BALMAP2 (MCDS_SRI2BAL2_MAP)

/** \brief 7340, Lookup Table Base Register */
#define MCDS_SRI2BAL3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_BND*)0xFA017340u)
/** Alias (User Manual Name) for MCDS_SRI2BAL3_BND.
* To use register names with standard convension, please use MCDS_SRI2BAL3_BND.
*/
#define MCDS_SRI2BALBND3 (MCDS_SRI2BAL3_BND)

/** \brief 7344, Lookup Table Range Register */
#define MCDS_SRI2BAL3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_RNG*)0xFA017344u)
/** Alias (User Manual Name) for MCDS_SRI2BAL3_RNG.
* To use register names with standard convension, please use MCDS_SRI2BAL3_RNG.
*/
#define MCDS_SRI2BALRNG3 (MCDS_SRI2BAL3_RNG)

/** \brief 7348, Lookup Table Mapping Register */
#define MCDS_SRI2BAL3_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BAL_MAP*)0xFA017348u)
/** Alias (User Manual Name) for MCDS_SRI2BAL3_MAP.
* To use register names with standard convension, please use MCDS_SRI2BAL3_MAP.
*/
#define MCDS_SRI2BALMAP3 (MCDS_SRI2BAL3_MAP)

/** \brief 7400, Comparator Bound Register 0 */
#define MCDS_SRI1EA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EA_BND*)0xFA017400u)
/** Alias (User Manual Name) for MCDS_SRI1EA0_BND.
* To use register names with standard convension, please use MCDS_SRI1EA0_BND.
*/
#define MCDS_SRI1EABND0 (MCDS_SRI1EA0_BND)

/** \brief 7404, Comparator Range Register 0 */
#define MCDS_SRI1EA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EA_RNG*)0xFA017404u)
/** Alias (User Manual Name) for MCDS_SRI1EA0_RNG.
* To use register names with standard convension, please use MCDS_SRI1EA0_RNG.
*/
#define MCDS_SRI1EARNG0 (MCDS_SRI1EA0_RNG)

/** \brief 7410, Comparator Bound Register 1 */
#define MCDS_SRI1EA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EA_BND*)0xFA017410u)
/** Alias (User Manual Name) for MCDS_SRI1EA1_BND.
* To use register names with standard convension, please use MCDS_SRI1EA1_BND.
*/
#define MCDS_SRI1EABND1 (MCDS_SRI1EA1_BND)

/** \brief 7414, Comparator Range Register 1 */
#define MCDS_SRI1EA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EA_RNG*)0xFA017414u)
/** Alias (User Manual Name) for MCDS_SRI1EA1_RNG.
* To use register names with standard convension, please use MCDS_SRI1EA1_RNG.
*/
#define MCDS_SRI1EARNG1 (MCDS_SRI1EA1_RNG)

/** \brief 7420, Comparator Bound Register 2 */
#define MCDS_SRI1EA2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EA_BND*)0xFA017420u)
/** Alias (User Manual Name) for MCDS_SRI1EA2_BND.
* To use register names with standard convension, please use MCDS_SRI1EA2_BND.
*/
#define MCDS_SRI1EABND2 (MCDS_SRI1EA2_BND)

/** \brief 7424, Comparator Range Register 2 */
#define MCDS_SRI1EA2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EA_RNG*)0xFA017424u)
/** Alias (User Manual Name) for MCDS_SRI1EA2_RNG.
* To use register names with standard convension, please use MCDS_SRI1EA2_RNG.
*/
#define MCDS_SRI1EARNG2 (MCDS_SRI1EA2_RNG)

/** \brief 7430, Comparator Bound Register 3 */
#define MCDS_SRI1EA3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EA_BND*)0xFA017430u)
/** Alias (User Manual Name) for MCDS_SRI1EA3_BND.
* To use register names with standard convension, please use MCDS_SRI1EA3_BND.
*/
#define MCDS_SRI1EABND3 (MCDS_SRI1EA3_BND)

/** \brief 7434, Comparator Range Register 3 */
#define MCDS_SRI1EA3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EA_RNG*)0xFA017434u)
/** Alias (User Manual Name) for MCDS_SRI1EA3_RNG.
* To use register names with standard convension, please use MCDS_SRI1EA3_RNG.
*/
#define MCDS_SRI1EARNG3 (MCDS_SRI1EA3_RNG)

/** \brief 7480, Comparator Bound Register 0 */
#define MCDS_SRI1WD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_BND*)0xFA017480u)
/** Alias (User Manual Name) for MCDS_SRI1WD0_BND.
* To use register names with standard convension, please use MCDS_SRI1WD0_BND.
*/
#define MCDS_SRI1WDBND0 (MCDS_SRI1WD0_BND)

/** \brief 7484, Comparator Bound Register 0 */
#define MCDS_SRI1WD0_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HBND*)0xFA017484u)
/** Alias (User Manual Name) for MCDS_SRI1WD0_HBND.
* To use register names with standard convension, please use MCDS_SRI1WD0_HBND.
*/
#define MCDS_SRI1WDHBND0 (MCDS_SRI1WD0_HBND)

/** \brief 7488, Comparator Range Register 0 */
#define MCDS_SRI1WD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_RNG*)0xFA017488u)
/** Alias (User Manual Name) for MCDS_SRI1WD0_RNG.
* To use register names with standard convension, please use MCDS_SRI1WD0_RNG.
*/
#define MCDS_SRI1WDRNG0 (MCDS_SRI1WD0_RNG)

/** \brief 748C, Comparator Range Register 0 */
#define MCDS_SRI1WD0_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HRNG*)0xFA01748Cu)
/** Alias (User Manual Name) for MCDS_SRI1WD0_HRNG.
* To use register names with standard convension, please use MCDS_SRI1WD0_HRNG.
*/
#define MCDS_SRI1WDHRNG0 (MCDS_SRI1WD0_HRNG)

/** \brief 7490, Comparator Mask Register 0 */
#define MCDS_SRI1WD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_MSK*)0xFA017490u)
/** Alias (User Manual Name) for MCDS_SRI1WD0_MSK.
* To use register names with standard convension, please use MCDS_SRI1WD0_MSK.
*/
#define MCDS_SRI1WDMSK0 (MCDS_SRI1WD0_MSK)

/** \brief 7494, Comparator Mask Register 0 */
#define MCDS_SRI1WD0_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HMSK*)0xFA017494u)
/** Alias (User Manual Name) for MCDS_SRI1WD0_HMSK.
* To use register names with standard convension, please use MCDS_SRI1WD0_HMSK.
*/
#define MCDS_SRI1WDHMSK0 (MCDS_SRI1WD0_HMSK)

/** \brief 749C, Comparator Sign Register 0 */
#define MCDS_SRI1WD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_SGN*)0xFA01749Cu)
/** Alias (User Manual Name) for MCDS_SRI1WD0_SGN.
* To use register names with standard convension, please use MCDS_SRI1WD0_SGN.
*/
#define MCDS_SRI1WDSGN0 (MCDS_SRI1WD0_SGN)

/** \brief 74A0, Comparator Bound Register 1 */
#define MCDS_SRI1WD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_BND*)0xFA0174A0u)
/** Alias (User Manual Name) for MCDS_SRI1WD1_BND.
* To use register names with standard convension, please use MCDS_SRI1WD1_BND.
*/
#define MCDS_SRI1WDBND1 (MCDS_SRI1WD1_BND)

/** \brief 74A4, Comparator Bound Register 1 */
#define MCDS_SRI1WD1_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HBND*)0xFA0174A4u)
/** Alias (User Manual Name) for MCDS_SRI1WD1_HBND.
* To use register names with standard convension, please use MCDS_SRI1WD1_HBND.
*/
#define MCDS_SRI1WDHBND1 (MCDS_SRI1WD1_HBND)

/** \brief 74A8, Comparator Range Register 1 */
#define MCDS_SRI1WD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_RNG*)0xFA0174A8u)
/** Alias (User Manual Name) for MCDS_SRI1WD1_RNG.
* To use register names with standard convension, please use MCDS_SRI1WD1_RNG.
*/
#define MCDS_SRI1WDRNG1 (MCDS_SRI1WD1_RNG)

/** \brief 74AC, Comparator Range Register 1 */
#define MCDS_SRI1WD1_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HRNG*)0xFA0174ACu)
/** Alias (User Manual Name) for MCDS_SRI1WD1_HRNG.
* To use register names with standard convension, please use MCDS_SRI1WD1_HRNG.
*/
#define MCDS_SRI1WDHRNG1 (MCDS_SRI1WD1_HRNG)

/** \brief 74B0, Comparator Mask Register 1 */
#define MCDS_SRI1WD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_MSK*)0xFA0174B0u)
/** Alias (User Manual Name) for MCDS_SRI1WD1_MSK.
* To use register names with standard convension, please use MCDS_SRI1WD1_MSK.
*/
#define MCDS_SRI1WDMSK1 (MCDS_SRI1WD1_MSK)

/** \brief 74B4, Comparator Mask Register 1 */
#define MCDS_SRI1WD1_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HMSK*)0xFA0174B4u)
/** Alias (User Manual Name) for MCDS_SRI1WD1_HMSK.
* To use register names with standard convension, please use MCDS_SRI1WD1_HMSK.
*/
#define MCDS_SRI1WDHMSK1 (MCDS_SRI1WD1_HMSK)

/** \brief 74BC, Comparator Sign Register 1 */
#define MCDS_SRI1WD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_SGN*)0xFA0174BCu)
/** Alias (User Manual Name) for MCDS_SRI1WD1_SGN.
* To use register names with standard convension, please use MCDS_SRI1WD1_SGN.
*/
#define MCDS_SRI1WDSGN1 (MCDS_SRI1WD1_SGN)

/** \brief 74C0, Comparator Bound Register 2 */
#define MCDS_SRI1WD2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_BND*)0xFA0174C0u)
/** Alias (User Manual Name) for MCDS_SRI1WD2_BND.
* To use register names with standard convension, please use MCDS_SRI1WD2_BND.
*/
#define MCDS_SRI1WDBND2 (MCDS_SRI1WD2_BND)

/** \brief 74C4, Comparator Bound Register 2 */
#define MCDS_SRI1WD2_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HBND*)0xFA0174C4u)
/** Alias (User Manual Name) for MCDS_SRI1WD2_HBND.
* To use register names with standard convension, please use MCDS_SRI1WD2_HBND.
*/
#define MCDS_SRI1WDHBND2 (MCDS_SRI1WD2_HBND)

/** \brief 74C8, Comparator Range Register 2 */
#define MCDS_SRI1WD2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_RNG*)0xFA0174C8u)
/** Alias (User Manual Name) for MCDS_SRI1WD2_RNG.
* To use register names with standard convension, please use MCDS_SRI1WD2_RNG.
*/
#define MCDS_SRI1WDRNG2 (MCDS_SRI1WD2_RNG)

/** \brief 74CC, Comparator Range Register 2 */
#define MCDS_SRI1WD2_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HRNG*)0xFA0174CCu)
/** Alias (User Manual Name) for MCDS_SRI1WD2_HRNG.
* To use register names with standard convension, please use MCDS_SRI1WD2_HRNG.
*/
#define MCDS_SRI1WDHRNG2 (MCDS_SRI1WD2_HRNG)

/** \brief 74D0, Comparator Mask Register 2 */
#define MCDS_SRI1WD2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_MSK*)0xFA0174D0u)
/** Alias (User Manual Name) for MCDS_SRI1WD2_MSK.
* To use register names with standard convension, please use MCDS_SRI1WD2_MSK.
*/
#define MCDS_SRI1WDMSK2 (MCDS_SRI1WD2_MSK)

/** \brief 74D4, Comparator Mask Register 2 */
#define MCDS_SRI1WD2_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HMSK*)0xFA0174D4u)
/** Alias (User Manual Name) for MCDS_SRI1WD2_HMSK.
* To use register names with standard convension, please use MCDS_SRI1WD2_HMSK.
*/
#define MCDS_SRI1WDHMSK2 (MCDS_SRI1WD2_HMSK)

/** \brief 74DC, Comparator Sign Register 2 */
#define MCDS_SRI1WD2_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_SGN*)0xFA0174DCu)
/** Alias (User Manual Name) for MCDS_SRI1WD2_SGN.
* To use register names with standard convension, please use MCDS_SRI1WD2_SGN.
*/
#define MCDS_SRI1WDSGN2 (MCDS_SRI1WD2_SGN)

/** \brief 74E0, Comparator Bound Register 3 */
#define MCDS_SRI1WD3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_BND*)0xFA0174E0u)
/** Alias (User Manual Name) for MCDS_SRI1WD3_BND.
* To use register names with standard convension, please use MCDS_SRI1WD3_BND.
*/
#define MCDS_SRI1WDBND3 (MCDS_SRI1WD3_BND)

/** \brief 74E4, Comparator Bound Register 3 */
#define MCDS_SRI1WD3_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HBND*)0xFA0174E4u)
/** Alias (User Manual Name) for MCDS_SRI1WD3_HBND.
* To use register names with standard convension, please use MCDS_SRI1WD3_HBND.
*/
#define MCDS_SRI1WDHBND3 (MCDS_SRI1WD3_HBND)

/** \brief 74E8, Comparator Range Register 3 */
#define MCDS_SRI1WD3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_RNG*)0xFA0174E8u)
/** Alias (User Manual Name) for MCDS_SRI1WD3_RNG.
* To use register names with standard convension, please use MCDS_SRI1WD3_RNG.
*/
#define MCDS_SRI1WDRNG3 (MCDS_SRI1WD3_RNG)

/** \brief 74EC, Comparator Range Register 3 */
#define MCDS_SRI1WD3_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HRNG*)0xFA0174ECu)
/** Alias (User Manual Name) for MCDS_SRI1WD3_HRNG.
* To use register names with standard convension, please use MCDS_SRI1WD3_HRNG.
*/
#define MCDS_SRI1WDHRNG3 (MCDS_SRI1WD3_HRNG)

/** \brief 74F0, Comparator Mask Register 3 */
#define MCDS_SRI1WD3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_MSK*)0xFA0174F0u)
/** Alias (User Manual Name) for MCDS_SRI1WD3_MSK.
* To use register names with standard convension, please use MCDS_SRI1WD3_MSK.
*/
#define MCDS_SRI1WDMSK3 (MCDS_SRI1WD3_MSK)

/** \brief 74F4, Comparator Mask Register 3 */
#define MCDS_SRI1WD3_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_HMSK*)0xFA0174F4u)
/** Alias (User Manual Name) for MCDS_SRI1WD3_HMSK.
* To use register names with standard convension, please use MCDS_SRI1WD3_HMSK.
*/
#define MCDS_SRI1WDHMSK3 (MCDS_SRI1WD3_HMSK)

/** \brief 74FC, Comparator Sign Register 3 */
#define MCDS_SRI1WD3_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WD_SGN*)0xFA0174FCu)
/** Alias (User Manual Name) for MCDS_SRI1WD3_SGN.
* To use register names with standard convension, please use MCDS_SRI1WD3_SGN.
*/
#define MCDS_SRI1WDSGN3 (MCDS_SRI1WD3_SGN)

/** \brief 7500, Comparator Bound Register 0 */
#define MCDS_SRI1AC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_BND*)0xFA017500u)
/** Alias (User Manual Name) for MCDS_SRI1AC0_BND.
* To use register names with standard convension, please use MCDS_SRI1AC0_BND.
*/
#define MCDS_SRI1ACBND0 (MCDS_SRI1AC0_BND)

/** \brief 7504, Comparator Range Register 0 */
#define MCDS_SRI1AC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_RNG*)0xFA017504u)
/** Alias (User Manual Name) for MCDS_SRI1AC0_RNG.
* To use register names with standard convension, please use MCDS_SRI1AC0_RNG.
*/
#define MCDS_SRI1ACRNG0 (MCDS_SRI1AC0_RNG)

/** \brief 7508, Comparator Mask Register 0 */
#define MCDS_SRI1AC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_MSK*)0xFA017508u)
/** Alias (User Manual Name) for MCDS_SRI1AC0_MSK.
* To use register names with standard convension, please use MCDS_SRI1AC0_MSK.
*/
#define MCDS_SRI1ACMSK0 (MCDS_SRI1AC0_MSK)

/** \brief 7510, Comparator Bound Register 1 */
#define MCDS_SRI1AC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_BND*)0xFA017510u)
/** Alias (User Manual Name) for MCDS_SRI1AC1_BND.
* To use register names with standard convension, please use MCDS_SRI1AC1_BND.
*/
#define MCDS_SRI1ACBND1 (MCDS_SRI1AC1_BND)

/** \brief 7514, Comparator Range Register 1 */
#define MCDS_SRI1AC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_RNG*)0xFA017514u)
/** Alias (User Manual Name) for MCDS_SRI1AC1_RNG.
* To use register names with standard convension, please use MCDS_SRI1AC1_RNG.
*/
#define MCDS_SRI1ACRNG1 (MCDS_SRI1AC1_RNG)

/** \brief 7518, Comparator Mask Register 1 */
#define MCDS_SRI1AC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_MSK*)0xFA017518u)
/** Alias (User Manual Name) for MCDS_SRI1AC1_MSK.
* To use register names with standard convension, please use MCDS_SRI1AC1_MSK.
*/
#define MCDS_SRI1ACMSK1 (MCDS_SRI1AC1_MSK)

/** \brief 7520, Comparator Bound Register 2 */
#define MCDS_SRI1AC2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_BND*)0xFA017520u)
/** Alias (User Manual Name) for MCDS_SRI1AC2_BND.
* To use register names with standard convension, please use MCDS_SRI1AC2_BND.
*/
#define MCDS_SRI1ACBND2 (MCDS_SRI1AC2_BND)

/** \brief 7524, Comparator Range Register 2 */
#define MCDS_SRI1AC2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_RNG*)0xFA017524u)
/** Alias (User Manual Name) for MCDS_SRI1AC2_RNG.
* To use register names with standard convension, please use MCDS_SRI1AC2_RNG.
*/
#define MCDS_SRI1ACRNG2 (MCDS_SRI1AC2_RNG)

/** \brief 7528, Comparator Mask Register 2 */
#define MCDS_SRI1AC2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_MSK*)0xFA017528u)
/** Alias (User Manual Name) for MCDS_SRI1AC2_MSK.
* To use register names with standard convension, please use MCDS_SRI1AC2_MSK.
*/
#define MCDS_SRI1ACMSK2 (MCDS_SRI1AC2_MSK)

/** \brief 7530, Comparator Bound Register 3 */
#define MCDS_SRI1AC3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_BND*)0xFA017530u)
/** Alias (User Manual Name) for MCDS_SRI1AC3_BND.
* To use register names with standard convension, please use MCDS_SRI1AC3_BND.
*/
#define MCDS_SRI1ACBND3 (MCDS_SRI1AC3_BND)

/** \brief 7534, Comparator Range Register 3 */
#define MCDS_SRI1AC3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_RNG*)0xFA017534u)
/** Alias (User Manual Name) for MCDS_SRI1AC3_RNG.
* To use register names with standard convension, please use MCDS_SRI1AC3_RNG.
*/
#define MCDS_SRI1ACRNG3 (MCDS_SRI1AC3_RNG)

/** \brief 7538, Comparator Mask Register 3 */
#define MCDS_SRI1AC3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1AC_MSK*)0xFA017538u)
/** Alias (User Manual Name) for MCDS_SRI1AC3_MSK.
* To use register names with standard convension, please use MCDS_SRI1AC3_MSK.
*/
#define MCDS_SRI1ACMSK3 (MCDS_SRI1AC3_MSK)

/** \brief 7580, DTU FIFOs Fill Level */
#define MCDS_SRI1DTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1DTUFLV*)0xFA017580u)

/** \brief 7600, Comparator Bound Register 0 */
#define MCDS_SRI2EA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EA_BND*)0xFA017600u)
/** Alias (User Manual Name) for MCDS_SRI2EA0_BND.
* To use register names with standard convension, please use MCDS_SRI2EA0_BND.
*/
#define MCDS_SRI2EABND0 (MCDS_SRI2EA0_BND)

/** \brief 7604, Comparator Range Register 0 */
#define MCDS_SRI2EA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EA_RNG*)0xFA017604u)
/** Alias (User Manual Name) for MCDS_SRI2EA0_RNG.
* To use register names with standard convension, please use MCDS_SRI2EA0_RNG.
*/
#define MCDS_SRI2EARNG0 (MCDS_SRI2EA0_RNG)

/** \brief 7610, Comparator Bound Register 1 */
#define MCDS_SRI2EA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EA_BND*)0xFA017610u)
/** Alias (User Manual Name) for MCDS_SRI2EA1_BND.
* To use register names with standard convension, please use MCDS_SRI2EA1_BND.
*/
#define MCDS_SRI2EABND1 (MCDS_SRI2EA1_BND)

/** \brief 7614, Comparator Range Register 1 */
#define MCDS_SRI2EA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EA_RNG*)0xFA017614u)
/** Alias (User Manual Name) for MCDS_SRI2EA1_RNG.
* To use register names with standard convension, please use MCDS_SRI2EA1_RNG.
*/
#define MCDS_SRI2EARNG1 (MCDS_SRI2EA1_RNG)

/** \brief 7620, Comparator Bound Register 2 */
#define MCDS_SRI2EA2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EA_BND*)0xFA017620u)
/** Alias (User Manual Name) for MCDS_SRI2EA2_BND.
* To use register names with standard convension, please use MCDS_SRI2EA2_BND.
*/
#define MCDS_SRI2EABND2 (MCDS_SRI2EA2_BND)

/** \brief 7624, Comparator Range Register 2 */
#define MCDS_SRI2EA2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EA_RNG*)0xFA017624u)
/** Alias (User Manual Name) for MCDS_SRI2EA2_RNG.
* To use register names with standard convension, please use MCDS_SRI2EA2_RNG.
*/
#define MCDS_SRI2EARNG2 (MCDS_SRI2EA2_RNG)

/** \brief 7630, Comparator Bound Register 3 */
#define MCDS_SRI2EA3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EA_BND*)0xFA017630u)
/** Alias (User Manual Name) for MCDS_SRI2EA3_BND.
* To use register names with standard convension, please use MCDS_SRI2EA3_BND.
*/
#define MCDS_SRI2EABND3 (MCDS_SRI2EA3_BND)

/** \brief 7634, Comparator Range Register 3 */
#define MCDS_SRI2EA3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EA_RNG*)0xFA017634u)
/** Alias (User Manual Name) for MCDS_SRI2EA3_RNG.
* To use register names with standard convension, please use MCDS_SRI2EA3_RNG.
*/
#define MCDS_SRI2EARNG3 (MCDS_SRI2EA3_RNG)

/** \brief 7680, Comparator Bound Register 0 */
#define MCDS_SRI2WD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_BND*)0xFA017680u)
/** Alias (User Manual Name) for MCDS_SRI2WD0_BND.
* To use register names with standard convension, please use MCDS_SRI2WD0_BND.
*/
#define MCDS_SRI2WDBND0 (MCDS_SRI2WD0_BND)

/** \brief 7684, Comparator Bound Register 0 */
#define MCDS_SRI2WD0_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HBND*)0xFA017684u)
/** Alias (User Manual Name) for MCDS_SRI2WD0_HBND.
* To use register names with standard convension, please use MCDS_SRI2WD0_HBND.
*/
#define MCDS_SRI2WDHBND0 (MCDS_SRI2WD0_HBND)

/** \brief 7688, Comparator Range Register 0 */
#define MCDS_SRI2WD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_RNG*)0xFA017688u)
/** Alias (User Manual Name) for MCDS_SRI2WD0_RNG.
* To use register names with standard convension, please use MCDS_SRI2WD0_RNG.
*/
#define MCDS_SRI2WDRNG0 (MCDS_SRI2WD0_RNG)

/** \brief 768C, Comparator Range Register 0 */
#define MCDS_SRI2WD0_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HRNG*)0xFA01768Cu)
/** Alias (User Manual Name) for MCDS_SRI2WD0_HRNG.
* To use register names with standard convension, please use MCDS_SRI2WD0_HRNG.
*/
#define MCDS_SRI2WDHRNG0 (MCDS_SRI2WD0_HRNG)

/** \brief 7690, Comparator Mask Register 0 */
#define MCDS_SRI2WD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_MSK*)0xFA017690u)
/** Alias (User Manual Name) for MCDS_SRI2WD0_MSK.
* To use register names with standard convension, please use MCDS_SRI2WD0_MSK.
*/
#define MCDS_SRI2WDMSK0 (MCDS_SRI2WD0_MSK)

/** \brief 7694, Comparator Mask Register 0 */
#define MCDS_SRI2WD0_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HMSK*)0xFA017694u)
/** Alias (User Manual Name) for MCDS_SRI2WD0_HMSK.
* To use register names with standard convension, please use MCDS_SRI2WD0_HMSK.
*/
#define MCDS_SRI2WDHMSK0 (MCDS_SRI2WD0_HMSK)

/** \brief 769C, Comparator Sign Register 0 */
#define MCDS_SRI2WD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_SGN*)0xFA01769Cu)
/** Alias (User Manual Name) for MCDS_SRI2WD0_SGN.
* To use register names with standard convension, please use MCDS_SRI2WD0_SGN.
*/
#define MCDS_SRI2WDSGN0 (MCDS_SRI2WD0_SGN)

/** \brief 76A0, Comparator Bound Register 1 */
#define MCDS_SRI2WD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_BND*)0xFA0176A0u)
/** Alias (User Manual Name) for MCDS_SRI2WD1_BND.
* To use register names with standard convension, please use MCDS_SRI2WD1_BND.
*/
#define MCDS_SRI2WDBND1 (MCDS_SRI2WD1_BND)

/** \brief 76A4, Comparator Bound Register 1 */
#define MCDS_SRI2WD1_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HBND*)0xFA0176A4u)
/** Alias (User Manual Name) for MCDS_SRI2WD1_HBND.
* To use register names with standard convension, please use MCDS_SRI2WD1_HBND.
*/
#define MCDS_SRI2WDHBND1 (MCDS_SRI2WD1_HBND)

/** \brief 76A8, Comparator Range Register 1 */
#define MCDS_SRI2WD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_RNG*)0xFA0176A8u)
/** Alias (User Manual Name) for MCDS_SRI2WD1_RNG.
* To use register names with standard convension, please use MCDS_SRI2WD1_RNG.
*/
#define MCDS_SRI2WDRNG1 (MCDS_SRI2WD1_RNG)

/** \brief 76AC, Comparator Range Register 1 */
#define MCDS_SRI2WD1_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HRNG*)0xFA0176ACu)
/** Alias (User Manual Name) for MCDS_SRI2WD1_HRNG.
* To use register names with standard convension, please use MCDS_SRI2WD1_HRNG.
*/
#define MCDS_SRI2WDHRNG1 (MCDS_SRI2WD1_HRNG)

/** \brief 76B0, Comparator Mask Register 1 */
#define MCDS_SRI2WD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_MSK*)0xFA0176B0u)
/** Alias (User Manual Name) for MCDS_SRI2WD1_MSK.
* To use register names with standard convension, please use MCDS_SRI2WD1_MSK.
*/
#define MCDS_SRI2WDMSK1 (MCDS_SRI2WD1_MSK)

/** \brief 76B4, Comparator Mask Register 1 */
#define MCDS_SRI2WD1_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HMSK*)0xFA0176B4u)
/** Alias (User Manual Name) for MCDS_SRI2WD1_HMSK.
* To use register names with standard convension, please use MCDS_SRI2WD1_HMSK.
*/
#define MCDS_SRI2WDHMSK1 (MCDS_SRI2WD1_HMSK)

/** \brief 76BC, Comparator Sign Register 1 */
#define MCDS_SRI2WD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_SGN*)0xFA0176BCu)
/** Alias (User Manual Name) for MCDS_SRI2WD1_SGN.
* To use register names with standard convension, please use MCDS_SRI2WD1_SGN.
*/
#define MCDS_SRI2WDSGN1 (MCDS_SRI2WD1_SGN)

/** \brief 76C0, Comparator Bound Register 2 */
#define MCDS_SRI2WD2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_BND*)0xFA0176C0u)
/** Alias (User Manual Name) for MCDS_SRI2WD2_BND.
* To use register names with standard convension, please use MCDS_SRI2WD2_BND.
*/
#define MCDS_SRI2WDBND2 (MCDS_SRI2WD2_BND)

/** \brief 76C4, Comparator Bound Register 2 */
#define MCDS_SRI2WD2_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HBND*)0xFA0176C4u)
/** Alias (User Manual Name) for MCDS_SRI2WD2_HBND.
* To use register names with standard convension, please use MCDS_SRI2WD2_HBND.
*/
#define MCDS_SRI2WDHBND2 (MCDS_SRI2WD2_HBND)

/** \brief 76C8, Comparator Range Register 2 */
#define MCDS_SRI2WD2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_RNG*)0xFA0176C8u)
/** Alias (User Manual Name) for MCDS_SRI2WD2_RNG.
* To use register names with standard convension, please use MCDS_SRI2WD2_RNG.
*/
#define MCDS_SRI2WDRNG2 (MCDS_SRI2WD2_RNG)

/** \brief 76CC, Comparator Range Register 2 */
#define MCDS_SRI2WD2_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HRNG*)0xFA0176CCu)
/** Alias (User Manual Name) for MCDS_SRI2WD2_HRNG.
* To use register names with standard convension, please use MCDS_SRI2WD2_HRNG.
*/
#define MCDS_SRI2WDHRNG2 (MCDS_SRI2WD2_HRNG)

/** \brief 76D0, Comparator Mask Register 2 */
#define MCDS_SRI2WD2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_MSK*)0xFA0176D0u)
/** Alias (User Manual Name) for MCDS_SRI2WD2_MSK.
* To use register names with standard convension, please use MCDS_SRI2WD2_MSK.
*/
#define MCDS_SRI2WDMSK2 (MCDS_SRI2WD2_MSK)

/** \brief 76D4, Comparator Mask Register 2 */
#define MCDS_SRI2WD2_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HMSK*)0xFA0176D4u)
/** Alias (User Manual Name) for MCDS_SRI2WD2_HMSK.
* To use register names with standard convension, please use MCDS_SRI2WD2_HMSK.
*/
#define MCDS_SRI2WDHMSK2 (MCDS_SRI2WD2_HMSK)

/** \brief 76DC, Comparator Sign Register 2 */
#define MCDS_SRI2WD2_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_SGN*)0xFA0176DCu)
/** Alias (User Manual Name) for MCDS_SRI2WD2_SGN.
* To use register names with standard convension, please use MCDS_SRI2WD2_SGN.
*/
#define MCDS_SRI2WDSGN2 (MCDS_SRI2WD2_SGN)

/** \brief 76E0, Comparator Bound Register 3 */
#define MCDS_SRI2WD3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_BND*)0xFA0176E0u)
/** Alias (User Manual Name) for MCDS_SRI2WD3_BND.
* To use register names with standard convension, please use MCDS_SRI2WD3_BND.
*/
#define MCDS_SRI2WDBND3 (MCDS_SRI2WD3_BND)

/** \brief 76E4, Comparator Bound Register 3 */
#define MCDS_SRI2WD3_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HBND*)0xFA0176E4u)
/** Alias (User Manual Name) for MCDS_SRI2WD3_HBND.
* To use register names with standard convension, please use MCDS_SRI2WD3_HBND.
*/
#define MCDS_SRI2WDHBND3 (MCDS_SRI2WD3_HBND)

/** \brief 76E8, Comparator Range Register 3 */
#define MCDS_SRI2WD3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_RNG*)0xFA0176E8u)
/** Alias (User Manual Name) for MCDS_SRI2WD3_RNG.
* To use register names with standard convension, please use MCDS_SRI2WD3_RNG.
*/
#define MCDS_SRI2WDRNG3 (MCDS_SRI2WD3_RNG)

/** \brief 76EC, Comparator Range Register 3 */
#define MCDS_SRI2WD3_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HRNG*)0xFA0176ECu)
/** Alias (User Manual Name) for MCDS_SRI2WD3_HRNG.
* To use register names with standard convension, please use MCDS_SRI2WD3_HRNG.
*/
#define MCDS_SRI2WDHRNG3 (MCDS_SRI2WD3_HRNG)

/** \brief 76F0, Comparator Mask Register 3 */
#define MCDS_SRI2WD3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_MSK*)0xFA0176F0u)
/** Alias (User Manual Name) for MCDS_SRI2WD3_MSK.
* To use register names with standard convension, please use MCDS_SRI2WD3_MSK.
*/
#define MCDS_SRI2WDMSK3 (MCDS_SRI2WD3_MSK)

/** \brief 76F4, Comparator Mask Register 3 */
#define MCDS_SRI2WD3_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_HMSK*)0xFA0176F4u)
/** Alias (User Manual Name) for MCDS_SRI2WD3_HMSK.
* To use register names with standard convension, please use MCDS_SRI2WD3_HMSK.
*/
#define MCDS_SRI2WDHMSK3 (MCDS_SRI2WD3_HMSK)

/** \brief 76FC, Comparator Sign Register 3 */
#define MCDS_SRI2WD3_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WD_SGN*)0xFA0176FCu)
/** Alias (User Manual Name) for MCDS_SRI2WD3_SGN.
* To use register names with standard convension, please use MCDS_SRI2WD3_SGN.
*/
#define MCDS_SRI2WDSGN3 (MCDS_SRI2WD3_SGN)

/** \brief 7700, Comparator Bound Register 0 */
#define MCDS_SRI2AC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_BND*)0xFA017700u)
/** Alias (User Manual Name) for MCDS_SRI2AC0_BND.
* To use register names with standard convension, please use MCDS_SRI2AC0_BND.
*/
#define MCDS_SRI2ACBND0 (MCDS_SRI2AC0_BND)

/** \brief 7704, Comparator Range Register 0 */
#define MCDS_SRI2AC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_RNG*)0xFA017704u)
/** Alias (User Manual Name) for MCDS_SRI2AC0_RNG.
* To use register names with standard convension, please use MCDS_SRI2AC0_RNG.
*/
#define MCDS_SRI2ACRNG0 (MCDS_SRI2AC0_RNG)

/** \brief 7708, Comparator Mask Register 0 */
#define MCDS_SRI2AC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_MSK*)0xFA017708u)
/** Alias (User Manual Name) for MCDS_SRI2AC0_MSK.
* To use register names with standard convension, please use MCDS_SRI2AC0_MSK.
*/
#define MCDS_SRI2ACMSK0 (MCDS_SRI2AC0_MSK)

/** \brief 7710, Comparator Bound Register 1 */
#define MCDS_SRI2AC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_BND*)0xFA017710u)
/** Alias (User Manual Name) for MCDS_SRI2AC1_BND.
* To use register names with standard convension, please use MCDS_SRI2AC1_BND.
*/
#define MCDS_SRI2ACBND1 (MCDS_SRI2AC1_BND)

/** \brief 7714, Comparator Range Register 1 */
#define MCDS_SRI2AC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_RNG*)0xFA017714u)
/** Alias (User Manual Name) for MCDS_SRI2AC1_RNG.
* To use register names with standard convension, please use MCDS_SRI2AC1_RNG.
*/
#define MCDS_SRI2ACRNG1 (MCDS_SRI2AC1_RNG)

/** \brief 7718, Comparator Mask Register 1 */
#define MCDS_SRI2AC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_MSK*)0xFA017718u)
/** Alias (User Manual Name) for MCDS_SRI2AC1_MSK.
* To use register names with standard convension, please use MCDS_SRI2AC1_MSK.
*/
#define MCDS_SRI2ACMSK1 (MCDS_SRI2AC1_MSK)

/** \brief 7720, Comparator Bound Register 2 */
#define MCDS_SRI2AC2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_BND*)0xFA017720u)
/** Alias (User Manual Name) for MCDS_SRI2AC2_BND.
* To use register names with standard convension, please use MCDS_SRI2AC2_BND.
*/
#define MCDS_SRI2ACBND2 (MCDS_SRI2AC2_BND)

/** \brief 7724, Comparator Range Register 2 */
#define MCDS_SRI2AC2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_RNG*)0xFA017724u)
/** Alias (User Manual Name) for MCDS_SRI2AC2_RNG.
* To use register names with standard convension, please use MCDS_SRI2AC2_RNG.
*/
#define MCDS_SRI2ACRNG2 (MCDS_SRI2AC2_RNG)

/** \brief 7728, Comparator Mask Register 2 */
#define MCDS_SRI2AC2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_MSK*)0xFA017728u)
/** Alias (User Manual Name) for MCDS_SRI2AC2_MSK.
* To use register names with standard convension, please use MCDS_SRI2AC2_MSK.
*/
#define MCDS_SRI2ACMSK2 (MCDS_SRI2AC2_MSK)

/** \brief 7730, Comparator Bound Register 3 */
#define MCDS_SRI2AC3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_BND*)0xFA017730u)
/** Alias (User Manual Name) for MCDS_SRI2AC3_BND.
* To use register names with standard convension, please use MCDS_SRI2AC3_BND.
*/
#define MCDS_SRI2ACBND3 (MCDS_SRI2AC3_BND)

/** \brief 7734, Comparator Range Register 3 */
#define MCDS_SRI2AC3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_RNG*)0xFA017734u)
/** Alias (User Manual Name) for MCDS_SRI2AC3_RNG.
* To use register names with standard convension, please use MCDS_SRI2AC3_RNG.
*/
#define MCDS_SRI2ACRNG3 (MCDS_SRI2AC3_RNG)

/** \brief 7738, Comparator Mask Register 3 */
#define MCDS_SRI2AC3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2AC_MSK*)0xFA017738u)
/** Alias (User Manual Name) for MCDS_SRI2AC3_MSK.
* To use register names with standard convension, please use MCDS_SRI2AC3_MSK.
*/
#define MCDS_SRI2ACMSK3 (MCDS_SRI2AC3_MSK)

/** \brief 7780, DTU FIFOs Fill Level */
#define MCDS_SRI2DTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2DTUFLV*)0xFA017780u)

/** \brief 7800, Event Definition Register 0 */
#define MCDS_SRIEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017800u)

/** \brief 7804, Event Definition Register 1 */
#define MCDS_SRIEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017804u)

/** \brief 7808, Event Definition Register 2 */
#define MCDS_SRIEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017808u)

/** \brief 780C, Event Definition Register 3 */
#define MCDS_SRIEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA01780Cu)

/** \brief 7810, Event Definition Register 4 */
#define MCDS_SRIEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017810u)

/** \brief 7814, Event Definition Register 5 */
#define MCDS_SRIEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017814u)

/** \brief 7818, Event Definition Register 6 */
#define MCDS_SRIEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017818u)

/** \brief 781C, Event Definition Register 7 */
#define MCDS_SRIEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA01781Cu)

/** \brief 7820, Event Definition Register 8 */
#define MCDS_SRIEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017820u)

/** \brief 7824, Event Definition Register 9 */
#define MCDS_SRIEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017824u)

/** \brief 7828, Event Definition Register 10 */
#define MCDS_SRIEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017828u)

/** \brief 782C, Event Definition Register 11 */
#define MCDS_SRIEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA01782Cu)

/** \brief 7830, Event Definition Register 12 */
#define MCDS_SRIEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017830u)

/** \brief 7834, Event Definition Register 13 */
#define MCDS_SRIEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017834u)

/** \brief 7838, Event Definition Register 14 */
#define MCDS_SRIEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017838u)

/** \brief 783C, Event Definition Register 15 */
#define MCDS_SRIEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA01783Cu)

/** \brief 7880, Action Definition Register 0 */
#define MCDS_SRIACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017880u)

/** \brief 7884, Action Definition Register 1 */
#define MCDS_SRIACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017884u)

/** \brief 7888, Action Definition Register 2 */
#define MCDS_SRIACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017888u)

/** \brief 788C, Action Definition Register 3 */
#define MCDS_SRIACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA01788Cu)

/** \brief 7890, Action Definition Register 4 */
#define MCDS_SRIACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017890u)

/** \brief 7894, Action Definition Register 5 */
#define MCDS_SRIACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017894u)

/** \brief 7898, Action Definition Register 6 */
#define MCDS_SRIACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017898u)

/** \brief 789C, Action Definition Register 7 */
#define MCDS_SRIACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA01789Cu)

/** \brief 78A0, Action Definition Register 8 */
#define MCDS_SRIACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178A0u)

/** \brief 78A4, Action Definition Register 9 */
#define MCDS_SRIACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178A4u)

/** \brief 78A8, Action Definition Register 10 */
#define MCDS_SRIACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178A8u)

/** \brief 78AC, Action Definition Register 11 */
#define MCDS_SRIACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178ACu)

/** \brief 78B0, Action Definition Register 12 */
#define MCDS_SRIACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178B0u)

/** \brief 78B4, Action Definition Register 13 */
#define MCDS_SRIACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178B4u)

/** \brief 78B8, Action Definition Register 14 */
#define MCDS_SRIACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178B8u)

/** \brief 78BC, Action Definition Register 15 */
#define MCDS_SRIACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178BCu)

/** \brief 78C0, Action Definition Register 16 */
#define MCDS_SRIACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178C0u)

/** \brief 78C4, Action Definition Register 17 */
#define MCDS_SRIACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178C4u)

/** \brief 78C8, Action Definition Register 18 */
#define MCDS_SRIACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178C8u)

/** \brief 78CC, Action Definition Register 19 */
#define MCDS_SRIACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178CCu)

/** \brief 78D0, Action Definition Register 20 */
#define MCDS_SRIACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178D0u)

/** \brief 78D4, Action Definition Register 21 */
#define MCDS_SRIACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178D4u)

/** \brief 78D8, Action Definition Register 22 */
#define MCDS_SRIACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178D8u)

/** \brief 78DC, Action Definition Register 23 */
#define MCDS_SRIACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178DCu)

/** \brief 78E0, Action Definition Register 24 */
#define MCDS_SRIACT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178E0u)

/** \brief 78E4, Action Definition Register 25 */
#define MCDS_SRIACT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178E4u)

/** \brief 78E8, Action Definition Register 26 */
#define MCDS_SRIACT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178E8u)

/** \brief 8000, Debug Status Register */
#define MCDS_TCZDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZDCSTS*)0xFA018000u)

/** \brief 8004, Current Process ID */
#define MCDS_TCZCID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZCID*)0xFA018004u)

/** \brief 8008, Current Instruction Pointer */
#define MCDS_TCZCIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZCIP*)0xFA018008u)

/** \brief 800C, Compact Function Trace Register */
#define MCDS_TCZCFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZCFT*)0xFA01800Cu)

/** \brief 8200, Lookup Table Data Register */
#define MCDS_TCZPALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALLUTD*)0xFA018200u)

/** \brief 8204, Lookup Table Address Register */
#define MCDS_TCZPALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALLUTA*)0xFA018204u)

/** \brief 8210, Lookup Table Base Register */
#define MCDS_TCZPAL0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_BND*)0xFA018210u)
/** Alias (User Manual Name) for MCDS_TCZPAL0_BND.
* To use register names with standard convension, please use MCDS_TCZPAL0_BND.
*/
#define MCDS_TCZPALBND0 (MCDS_TCZPAL0_BND)

/** \brief 8214, Lookup Table Range Register */
#define MCDS_TCZPAL0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_RNG*)0xFA018214u)
/** Alias (User Manual Name) for MCDS_TCZPAL0_RNG.
* To use register names with standard convension, please use MCDS_TCZPAL0_RNG.
*/
#define MCDS_TCZPALRNG0 (MCDS_TCZPAL0_RNG)

/** \brief 8218, Lookup Table Mapping Register */
#define MCDS_TCZPAL0_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_MAP*)0xFA018218u)
/** Alias (User Manual Name) for MCDS_TCZPAL0_MAP.
* To use register names with standard convension, please use MCDS_TCZPAL0_MAP.
*/
#define MCDS_TCZPALMAP0 (MCDS_TCZPAL0_MAP)

/** \brief 8220, Lookup Table Base Register */
#define MCDS_TCZPAL1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_BND*)0xFA018220u)
/** Alias (User Manual Name) for MCDS_TCZPAL1_BND.
* To use register names with standard convension, please use MCDS_TCZPAL1_BND.
*/
#define MCDS_TCZPALBND1 (MCDS_TCZPAL1_BND)

/** \brief 8224, Lookup Table Range Register */
#define MCDS_TCZPAL1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_RNG*)0xFA018224u)
/** Alias (User Manual Name) for MCDS_TCZPAL1_RNG.
* To use register names with standard convension, please use MCDS_TCZPAL1_RNG.
*/
#define MCDS_TCZPALRNG1 (MCDS_TCZPAL1_RNG)

/** \brief 8228, Lookup Table Mapping Register */
#define MCDS_TCZPAL1_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_MAP*)0xFA018228u)
/** Alias (User Manual Name) for MCDS_TCZPAL1_MAP.
* To use register names with standard convension, please use MCDS_TCZPAL1_MAP.
*/
#define MCDS_TCZPALMAP1 (MCDS_TCZPAL1_MAP)

/** \brief 8230, Lookup Table Base Register */
#define MCDS_TCZPAL2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_BND*)0xFA018230u)
/** Alias (User Manual Name) for MCDS_TCZPAL2_BND.
* To use register names with standard convension, please use MCDS_TCZPAL2_BND.
*/
#define MCDS_TCZPALBND2 (MCDS_TCZPAL2_BND)

/** \brief 8234, Lookup Table Range Register */
#define MCDS_TCZPAL2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_RNG*)0xFA018234u)
/** Alias (User Manual Name) for MCDS_TCZPAL2_RNG.
* To use register names with standard convension, please use MCDS_TCZPAL2_RNG.
*/
#define MCDS_TCZPALRNG2 (MCDS_TCZPAL2_RNG)

/** \brief 8238, Lookup Table Mapping Register */
#define MCDS_TCZPAL2_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_MAP*)0xFA018238u)
/** Alias (User Manual Name) for MCDS_TCZPAL2_MAP.
* To use register names with standard convension, please use MCDS_TCZPAL2_MAP.
*/
#define MCDS_TCZPALMAP2 (MCDS_TCZPAL2_MAP)

/** \brief 8240, Lookup Table Base Register */
#define MCDS_TCZPAL3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_BND*)0xFA018240u)
/** Alias (User Manual Name) for MCDS_TCZPAL3_BND.
* To use register names with standard convension, please use MCDS_TCZPAL3_BND.
*/
#define MCDS_TCZPALBND3 (MCDS_TCZPAL3_BND)

/** \brief 8244, Lookup Table Range Register */
#define MCDS_TCZPAL3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_RNG*)0xFA018244u)
/** Alias (User Manual Name) for MCDS_TCZPAL3_RNG.
* To use register names with standard convension, please use MCDS_TCZPAL3_RNG.
*/
#define MCDS_TCZPALRNG3 (MCDS_TCZPAL3_RNG)

/** \brief 8248, Lookup Table Mapping Register */
#define MCDS_TCZPAL3_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPAL_MAP*)0xFA018248u)
/** Alias (User Manual Name) for MCDS_TCZPAL3_MAP.
* To use register names with standard convension, please use MCDS_TCZPAL3_MAP.
*/
#define MCDS_TCZPALMAP3 (MCDS_TCZPAL3_MAP)

/** \brief 8400, Comparator Bound Register 0 */
#define MCDS_TCZEA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_BND*)0xFA018400u)
/** Alias (User Manual Name) for MCDS_TCZEA0_BND.
* To use register names with standard convension, please use MCDS_TCZEA0_BND.
*/
#define MCDS_TCZEABND0 (MCDS_TCZEA0_BND)

/** \brief 8404, Comparator Range Register 0 */
#define MCDS_TCZEA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_RNG*)0xFA018404u)
/** Alias (User Manual Name) for MCDS_TCZEA0_RNG.
* To use register names with standard convension, please use MCDS_TCZEA0_RNG.
*/
#define MCDS_TCZEARNG0 (MCDS_TCZEA0_RNG)

/** \brief 8410, Comparator Bound Register 1 */
#define MCDS_TCZEA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_BND*)0xFA018410u)
/** Alias (User Manual Name) for MCDS_TCZEA1_BND.
* To use register names with standard convension, please use MCDS_TCZEA1_BND.
*/
#define MCDS_TCZEABND1 (MCDS_TCZEA1_BND)

/** \brief 8414, Comparator Range Register 1 */
#define MCDS_TCZEA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_RNG*)0xFA018414u)
/** Alias (User Manual Name) for MCDS_TCZEA1_RNG.
* To use register names with standard convension, please use MCDS_TCZEA1_RNG.
*/
#define MCDS_TCZEARNG1 (MCDS_TCZEA1_RNG)

/** \brief 8420, Comparator Bound Register 2 */
#define MCDS_TCZEA2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_BND*)0xFA018420u)
/** Alias (User Manual Name) for MCDS_TCZEA2_BND.
* To use register names with standard convension, please use MCDS_TCZEA2_BND.
*/
#define MCDS_TCZEABND2 (MCDS_TCZEA2_BND)

/** \brief 8424, Comparator Range Register 2 */
#define MCDS_TCZEA2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_RNG*)0xFA018424u)
/** Alias (User Manual Name) for MCDS_TCZEA2_RNG.
* To use register names with standard convension, please use MCDS_TCZEA2_RNG.
*/
#define MCDS_TCZEARNG2 (MCDS_TCZEA2_RNG)

/** \brief 8430, Comparator Bound Register 3 */
#define MCDS_TCZEA3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_BND*)0xFA018430u)
/** Alias (User Manual Name) for MCDS_TCZEA3_BND.
* To use register names with standard convension, please use MCDS_TCZEA3_BND.
*/
#define MCDS_TCZEABND3 (MCDS_TCZEA3_BND)

/** \brief 8434, Comparator Range Register 3 */
#define MCDS_TCZEA3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_RNG*)0xFA018434u)
/** Alias (User Manual Name) for MCDS_TCZEA3_RNG.
* To use register names with standard convension, please use MCDS_TCZEA3_RNG.
*/
#define MCDS_TCZEARNG3 (MCDS_TCZEA3_RNG)

/** \brief 8440, Comparator Bound Register 4 */
#define MCDS_TCZEA4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_BND*)0xFA018440u)
/** Alias (User Manual Name) for MCDS_TCZEA4_BND.
* To use register names with standard convension, please use MCDS_TCZEA4_BND.
*/
#define MCDS_TCZEABND4 (MCDS_TCZEA4_BND)

/** \brief 8444, Comparator Range Register 4 */
#define MCDS_TCZEA4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_RNG*)0xFA018444u)
/** Alias (User Manual Name) for MCDS_TCZEA4_RNG.
* To use register names with standard convension, please use MCDS_TCZEA4_RNG.
*/
#define MCDS_TCZEARNG4 (MCDS_TCZEA4_RNG)

/** \brief 8450, Comparator Bound Register 5 */
#define MCDS_TCZEA5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_BND*)0xFA018450u)
/** Alias (User Manual Name) for MCDS_TCZEA5_BND.
* To use register names with standard convension, please use MCDS_TCZEA5_BND.
*/
#define MCDS_TCZEABND5 (MCDS_TCZEA5_BND)

/** \brief 8454, Comparator Range Register 5 */
#define MCDS_TCZEA5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_RNG*)0xFA018454u)
/** Alias (User Manual Name) for MCDS_TCZEA5_RNG.
* To use register names with standard convension, please use MCDS_TCZEA5_RNG.
*/
#define MCDS_TCZEARNG5 (MCDS_TCZEA5_RNG)

/** \brief 8460, Comparator Bound Register 6 */
#define MCDS_TCZEA6_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_BND*)0xFA018460u)
/** Alias (User Manual Name) for MCDS_TCZEA6_BND.
* To use register names with standard convension, please use MCDS_TCZEA6_BND.
*/
#define MCDS_TCZEABND6 (MCDS_TCZEA6_BND)

/** \brief 8464, Comparator Range Register 6 */
#define MCDS_TCZEA6_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_RNG*)0xFA018464u)
/** Alias (User Manual Name) for MCDS_TCZEA6_RNG.
* To use register names with standard convension, please use MCDS_TCZEA6_RNG.
*/
#define MCDS_TCZEARNG6 (MCDS_TCZEA6_RNG)

/** \brief 8470, Comparator Bound Register 7 */
#define MCDS_TCZEA7_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_BND*)0xFA018470u)
/** Alias (User Manual Name) for MCDS_TCZEA7_BND.
* To use register names with standard convension, please use MCDS_TCZEA7_BND.
*/
#define MCDS_TCZEABND7 (MCDS_TCZEA7_BND)

/** \brief 8474, Comparator Range Register 7 */
#define MCDS_TCZEA7_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEA_RNG*)0xFA018474u)
/** Alias (User Manual Name) for MCDS_TCZEA7_RNG.
* To use register names with standard convension, please use MCDS_TCZEA7_RNG.
*/
#define MCDS_TCZEARNG7 (MCDS_TCZEA7_RNG)

/** \brief 8480, Comparator Bound Register 0 */
#define MCDS_TCZWD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_BND*)0xFA018480u)
/** Alias (User Manual Name) for MCDS_TCZWD0_BND.
* To use register names with standard convension, please use MCDS_TCZWD0_BND.
*/
#define MCDS_TCZWDBND0 (MCDS_TCZWD0_BND)

/** \brief 8484, Comparator Bound Register 0 */
#define MCDS_TCZWD0_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HBND*)0xFA018484u)
/** Alias (User Manual Name) for MCDS_TCZWD0_HBND.
* To use register names with standard convension, please use MCDS_TCZWD0_HBND.
*/
#define MCDS_TCZWDHBND0 (MCDS_TCZWD0_HBND)

/** \brief 8488, Comparator Range Register 0 */
#define MCDS_TCZWD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_RNG*)0xFA018488u)
/** Alias (User Manual Name) for MCDS_TCZWD0_RNG.
* To use register names with standard convension, please use MCDS_TCZWD0_RNG.
*/
#define MCDS_TCZWDRNG0 (MCDS_TCZWD0_RNG)

/** \brief 848C, Comparator Range Register 0 */
#define MCDS_TCZWD0_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HRNG*)0xFA01848Cu)
/** Alias (User Manual Name) for MCDS_TCZWD0_HRNG.
* To use register names with standard convension, please use MCDS_TCZWD0_HRNG.
*/
#define MCDS_TCZWDHRNG0 (MCDS_TCZWD0_HRNG)

/** \brief 8490, Comparator Mask Register 0 */
#define MCDS_TCZWD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_MSK*)0xFA018490u)
/** Alias (User Manual Name) for MCDS_TCZWD0_MSK.
* To use register names with standard convension, please use MCDS_TCZWD0_MSK.
*/
#define MCDS_TCZWDMSK0 (MCDS_TCZWD0_MSK)

/** \brief 8494, Comparator Mask Register 0 */
#define MCDS_TCZWD0_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HMSK*)0xFA018494u)
/** Alias (User Manual Name) for MCDS_TCZWD0_HMSK.
* To use register names with standard convension, please use MCDS_TCZWD0_HMSK.
*/
#define MCDS_TCZWDHMSK0 (MCDS_TCZWD0_HMSK)

/** \brief 849C, Comparator Sign Register 0 */
#define MCDS_TCZWD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_SGN*)0xFA01849Cu)
/** Alias (User Manual Name) for MCDS_TCZWD0_SGN.
* To use register names with standard convension, please use MCDS_TCZWD0_SGN.
*/
#define MCDS_TCZWDSGN0 (MCDS_TCZWD0_SGN)

/** \brief 84A0, Comparator Bound Register 1 */
#define MCDS_TCZWD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_BND*)0xFA0184A0u)
/** Alias (User Manual Name) for MCDS_TCZWD1_BND.
* To use register names with standard convension, please use MCDS_TCZWD1_BND.
*/
#define MCDS_TCZWDBND1 (MCDS_TCZWD1_BND)

/** \brief 84A4, Comparator Bound Register 1 */
#define MCDS_TCZWD1_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HBND*)0xFA0184A4u)
/** Alias (User Manual Name) for MCDS_TCZWD1_HBND.
* To use register names with standard convension, please use MCDS_TCZWD1_HBND.
*/
#define MCDS_TCZWDHBND1 (MCDS_TCZWD1_HBND)

/** \brief 84A8, Comparator Range Register 1 */
#define MCDS_TCZWD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_RNG*)0xFA0184A8u)
/** Alias (User Manual Name) for MCDS_TCZWD1_RNG.
* To use register names with standard convension, please use MCDS_TCZWD1_RNG.
*/
#define MCDS_TCZWDRNG1 (MCDS_TCZWD1_RNG)

/** \brief 84AC, Comparator Range Register 1 */
#define MCDS_TCZWD1_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HRNG*)0xFA0184ACu)
/** Alias (User Manual Name) for MCDS_TCZWD1_HRNG.
* To use register names with standard convension, please use MCDS_TCZWD1_HRNG.
*/
#define MCDS_TCZWDHRNG1 (MCDS_TCZWD1_HRNG)

/** \brief 84B0, Comparator Mask Register 1 */
#define MCDS_TCZWD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_MSK*)0xFA0184B0u)
/** Alias (User Manual Name) for MCDS_TCZWD1_MSK.
* To use register names with standard convension, please use MCDS_TCZWD1_MSK.
*/
#define MCDS_TCZWDMSK1 (MCDS_TCZWD1_MSK)

/** \brief 84B4, Comparator Mask Register 1 */
#define MCDS_TCZWD1_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HMSK*)0xFA0184B4u)
/** Alias (User Manual Name) for MCDS_TCZWD1_HMSK.
* To use register names with standard convension, please use MCDS_TCZWD1_HMSK.
*/
#define MCDS_TCZWDHMSK1 (MCDS_TCZWD1_HMSK)

/** \brief 84BC, Comparator Sign Register 1 */
#define MCDS_TCZWD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_SGN*)0xFA0184BCu)
/** Alias (User Manual Name) for MCDS_TCZWD1_SGN.
* To use register names with standard convension, please use MCDS_TCZWD1_SGN.
*/
#define MCDS_TCZWDSGN1 (MCDS_TCZWD1_SGN)

/** \brief 84C0, Comparator Bound Register 2 */
#define MCDS_TCZWD2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_BND*)0xFA0184C0u)
/** Alias (User Manual Name) for MCDS_TCZWD2_BND.
* To use register names with standard convension, please use MCDS_TCZWD2_BND.
*/
#define MCDS_TCZWDBND2 (MCDS_TCZWD2_BND)

/** \brief 84C4, Comparator Bound Register 2 */
#define MCDS_TCZWD2_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HBND*)0xFA0184C4u)
/** Alias (User Manual Name) for MCDS_TCZWD2_HBND.
* To use register names with standard convension, please use MCDS_TCZWD2_HBND.
*/
#define MCDS_TCZWDHBND2 (MCDS_TCZWD2_HBND)

/** \brief 84C8, Comparator Range Register 2 */
#define MCDS_TCZWD2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_RNG*)0xFA0184C8u)
/** Alias (User Manual Name) for MCDS_TCZWD2_RNG.
* To use register names with standard convension, please use MCDS_TCZWD2_RNG.
*/
#define MCDS_TCZWDRNG2 (MCDS_TCZWD2_RNG)

/** \brief 84CC, Comparator Range Register 2 */
#define MCDS_TCZWD2_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HRNG*)0xFA0184CCu)
/** Alias (User Manual Name) for MCDS_TCZWD2_HRNG.
* To use register names with standard convension, please use MCDS_TCZWD2_HRNG.
*/
#define MCDS_TCZWDHRNG2 (MCDS_TCZWD2_HRNG)

/** \brief 84D0, Comparator Mask Register 2 */
#define MCDS_TCZWD2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_MSK*)0xFA0184D0u)
/** Alias (User Manual Name) for MCDS_TCZWD2_MSK.
* To use register names with standard convension, please use MCDS_TCZWD2_MSK.
*/
#define MCDS_TCZWDMSK2 (MCDS_TCZWD2_MSK)

/** \brief 84D4, Comparator Mask Register 2 */
#define MCDS_TCZWD2_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HMSK*)0xFA0184D4u)
/** Alias (User Manual Name) for MCDS_TCZWD2_HMSK.
* To use register names with standard convension, please use MCDS_TCZWD2_HMSK.
*/
#define MCDS_TCZWDHMSK2 (MCDS_TCZWD2_HMSK)

/** \brief 84DC, Comparator Sign Register 2 */
#define MCDS_TCZWD2_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_SGN*)0xFA0184DCu)
/** Alias (User Manual Name) for MCDS_TCZWD2_SGN.
* To use register names with standard convension, please use MCDS_TCZWD2_SGN.
*/
#define MCDS_TCZWDSGN2 (MCDS_TCZWD2_SGN)

/** \brief 84E0, Comparator Bound Register 3 */
#define MCDS_TCZWD3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_BND*)0xFA0184E0u)
/** Alias (User Manual Name) for MCDS_TCZWD3_BND.
* To use register names with standard convension, please use MCDS_TCZWD3_BND.
*/
#define MCDS_TCZWDBND3 (MCDS_TCZWD3_BND)

/** \brief 84E4, Comparator Bound Register 3 */
#define MCDS_TCZWD3_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HBND*)0xFA0184E4u)
/** Alias (User Manual Name) for MCDS_TCZWD3_HBND.
* To use register names with standard convension, please use MCDS_TCZWD3_HBND.
*/
#define MCDS_TCZWDHBND3 (MCDS_TCZWD3_HBND)

/** \brief 84E8, Comparator Range Register 3 */
#define MCDS_TCZWD3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_RNG*)0xFA0184E8u)
/** Alias (User Manual Name) for MCDS_TCZWD3_RNG.
* To use register names with standard convension, please use MCDS_TCZWD3_RNG.
*/
#define MCDS_TCZWDRNG3 (MCDS_TCZWD3_RNG)

/** \brief 84EC, Comparator Range Register 3 */
#define MCDS_TCZWD3_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HRNG*)0xFA0184ECu)
/** Alias (User Manual Name) for MCDS_TCZWD3_HRNG.
* To use register names with standard convension, please use MCDS_TCZWD3_HRNG.
*/
#define MCDS_TCZWDHRNG3 (MCDS_TCZWD3_HRNG)

/** \brief 84F0, Comparator Mask Register 3 */
#define MCDS_TCZWD3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_MSK*)0xFA0184F0u)
/** Alias (User Manual Name) for MCDS_TCZWD3_MSK.
* To use register names with standard convension, please use MCDS_TCZWD3_MSK.
*/
#define MCDS_TCZWDMSK3 (MCDS_TCZWD3_MSK)

/** \brief 84F4, Comparator Mask Register 3 */
#define MCDS_TCZWD3_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_HMSK*)0xFA0184F4u)
/** Alias (User Manual Name) for MCDS_TCZWD3_HMSK.
* To use register names with standard convension, please use MCDS_TCZWD3_HMSK.
*/
#define MCDS_TCZWDHMSK3 (MCDS_TCZWD3_HMSK)

/** \brief 84FC, Comparator Sign Register 3 */
#define MCDS_TCZWD3_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWD_SGN*)0xFA0184FCu)
/** Alias (User Manual Name) for MCDS_TCZWD3_SGN.
* To use register names with standard convension, please use MCDS_TCZWD3_SGN.
*/
#define MCDS_TCZWDSGN3 (MCDS_TCZWD3_SGN)

/** \brief 8500, Comparator Bound Register 0 */
#define MCDS_TCZAC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_BND*)0xFA018500u)
/** Alias (User Manual Name) for MCDS_TCZAC0_BND.
* To use register names with standard convension, please use MCDS_TCZAC0_BND.
*/
#define MCDS_TCZACBND0 (MCDS_TCZAC0_BND)

/** \brief 8504, Comparator Range Register 0 */
#define MCDS_TCZAC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_RNG*)0xFA018504u)
/** Alias (User Manual Name) for MCDS_TCZAC0_RNG.
* To use register names with standard convension, please use MCDS_TCZAC0_RNG.
*/
#define MCDS_TCZACRNG0 (MCDS_TCZAC0_RNG)

/** \brief 8508, Comparator Mask Register 0 */
#define MCDS_TCZAC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_MSK*)0xFA018508u)
/** Alias (User Manual Name) for MCDS_TCZAC0_MSK.
* To use register names with standard convension, please use MCDS_TCZAC0_MSK.
*/
#define MCDS_TCZACMSK0 (MCDS_TCZAC0_MSK)

/** \brief 8510, Comparator Bound Register 1 */
#define MCDS_TCZAC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_BND*)0xFA018510u)
/** Alias (User Manual Name) for MCDS_TCZAC1_BND.
* To use register names with standard convension, please use MCDS_TCZAC1_BND.
*/
#define MCDS_TCZACBND1 (MCDS_TCZAC1_BND)

/** \brief 8514, Comparator Range Register 1 */
#define MCDS_TCZAC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_RNG*)0xFA018514u)
/** Alias (User Manual Name) for MCDS_TCZAC1_RNG.
* To use register names with standard convension, please use MCDS_TCZAC1_RNG.
*/
#define MCDS_TCZACRNG1 (MCDS_TCZAC1_RNG)

/** \brief 8518, Comparator Mask Register 1 */
#define MCDS_TCZAC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_MSK*)0xFA018518u)
/** Alias (User Manual Name) for MCDS_TCZAC1_MSK.
* To use register names with standard convension, please use MCDS_TCZAC1_MSK.
*/
#define MCDS_TCZACMSK1 (MCDS_TCZAC1_MSK)

/** \brief 8520, Comparator Bound Register 2 */
#define MCDS_TCZAC2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_BND*)0xFA018520u)
/** Alias (User Manual Name) for MCDS_TCZAC2_BND.
* To use register names with standard convension, please use MCDS_TCZAC2_BND.
*/
#define MCDS_TCZACBND2 (MCDS_TCZAC2_BND)

/** \brief 8524, Comparator Range Register 2 */
#define MCDS_TCZAC2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_RNG*)0xFA018524u)
/** Alias (User Manual Name) for MCDS_TCZAC2_RNG.
* To use register names with standard convension, please use MCDS_TCZAC2_RNG.
*/
#define MCDS_TCZACRNG2 (MCDS_TCZAC2_RNG)

/** \brief 8528, Comparator Mask Register 2 */
#define MCDS_TCZAC2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_MSK*)0xFA018528u)
/** Alias (User Manual Name) for MCDS_TCZAC2_MSK.
* To use register names with standard convension, please use MCDS_TCZAC2_MSK.
*/
#define MCDS_TCZACMSK2 (MCDS_TCZAC2_MSK)

/** \brief 8530, Comparator Bound Register 3 */
#define MCDS_TCZAC3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_BND*)0xFA018530u)
/** Alias (User Manual Name) for MCDS_TCZAC3_BND.
* To use register names with standard convension, please use MCDS_TCZAC3_BND.
*/
#define MCDS_TCZACBND3 (MCDS_TCZAC3_BND)

/** \brief 8534, Comparator Range Register 3 */
#define MCDS_TCZAC3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_RNG*)0xFA018534u)
/** Alias (User Manual Name) for MCDS_TCZAC3_RNG.
* To use register names with standard convension, please use MCDS_TCZAC3_RNG.
*/
#define MCDS_TCZACRNG3 (MCDS_TCZAC3_RNG)

/** \brief 8538, Comparator Mask Register 3 */
#define MCDS_TCZAC3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZAC_MSK*)0xFA018538u)
/** Alias (User Manual Name) for MCDS_TCZAC3_MSK.
* To use register names with standard convension, please use MCDS_TCZAC3_MSK.
*/
#define MCDS_TCZACMSK3 (MCDS_TCZAC3_MSK)

/** \brief 8580, DTU FIFOs Fill Level */
#define MCDS_TCZDTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZDTUFLV*)0xFA018580u)

/** \brief 8800, Event Definition Register 0 */
#define MCDS_TCZEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018800u)

/** \brief 8804, Event Definition Register 1 */
#define MCDS_TCZEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018804u)

/** \brief 8808, Event Definition Register 2 */
#define MCDS_TCZEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018808u)

/** \brief 880C, Event Definition Register 3 */
#define MCDS_TCZEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA01880Cu)

/** \brief 8810, Event Definition Register 4 */
#define MCDS_TCZEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018810u)

/** \brief 8814, Event Definition Register 5 */
#define MCDS_TCZEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018814u)

/** \brief 8818, Event Definition Register 6 */
#define MCDS_TCZEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018818u)

/** \brief 881C, Event Definition Register 7 */
#define MCDS_TCZEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA01881Cu)

/** \brief 8820, Event Definition Register 8 */
#define MCDS_TCZEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018820u)

/** \brief 8824, Event Definition Register 9 */
#define MCDS_TCZEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018824u)

/** \brief 8828, Event Definition Register 10 */
#define MCDS_TCZEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018828u)

/** \brief 882C, Event Definition Register 11 */
#define MCDS_TCZEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA01882Cu)

/** \brief 8830, Event Definition Register 12 */
#define MCDS_TCZEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018830u)

/** \brief 8834, Event Definition Register 13 */
#define MCDS_TCZEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018834u)

/** \brief 8838, Event Definition Register 14 */
#define MCDS_TCZEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018838u)

/** \brief 883C, Event Definition Register 15 */
#define MCDS_TCZEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA01883Cu)

/** \brief 8880, Action Definition Register 0 */
#define MCDS_TCZACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018880u)

/** \brief 8884, Action Definition Register 1 */
#define MCDS_TCZACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018884u)

/** \brief 8888, Action Definition Register 2 */
#define MCDS_TCZACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018888u)

/** \brief 888C, Action Definition Register 3 */
#define MCDS_TCZACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA01888Cu)

/** \brief 8890, Action Definition Register 4 */
#define MCDS_TCZACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018890u)

/** \brief 8894, Action Definition Register 5 */
#define MCDS_TCZACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018894u)

/** \brief 8898, Action Definition Register 6 */
#define MCDS_TCZACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018898u)

/** \brief 889C, Action Definition Register 7 */
#define MCDS_TCZACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA01889Cu)

/** \brief 88A0, Action Definition Register 8 */
#define MCDS_TCZACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188A0u)

/** \brief 88A4, Action Definition Register 9 */
#define MCDS_TCZACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188A4u)

/** \brief 88A8, Action Definition Register 10 */
#define MCDS_TCZACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188A8u)

/** \brief 88AC, Action Definition Register 11 */
#define MCDS_TCZACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188ACu)

/** \brief 88B0, Action Definition Register 12 */
#define MCDS_TCZACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188B0u)

/** \brief 88B4, Action Definition Register 13 */
#define MCDS_TCZACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188B4u)

/** \brief 88B8, Action Definition Register 14 */
#define MCDS_TCZACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188B8u)

/** \brief 88BC, Action Definition Register 15 */
#define MCDS_TCZACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188BCu)

/** \brief 88C0, Action Definition Register 16 */
#define MCDS_TCZACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188C0u)

/** \brief 88C4, Action Definition Register 17 */
#define MCDS_TCZACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188C4u)

/** \brief 88C8, Action Definition Register 18 */
#define MCDS_TCZACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188C8u)

/** \brief 88CC, Action Definition Register 19 */
#define MCDS_TCZACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188CCu)

/** \brief 88D0, Action Definition Register 20 */
#define MCDS_TCZACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188D0u)

/** \brief 88D4, Action Definition Register 21 */
#define MCDS_TCZACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188D4u)

/** \brief 88D8, Action Definition Register 22 */
#define MCDS_TCZACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188D8u)

/** \brief 88DC, Action Definition Register 23 */
#define MCDS_TCZACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188DCu)

/** \brief 8C00, Comparator Bound Register 0 */
#define MCDS_TCZID0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZID_BND*)0xFA018C00u)
/** Alias (User Manual Name) for MCDS_TCZID0_BND.
* To use register names with standard convension, please use MCDS_TCZID0_BND.
*/
#define MCDS_TCZIDBND0 (MCDS_TCZID0_BND)

/** \brief 8C04, Comparator Range Register 0 */
#define MCDS_TCZID0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZID_RNG*)0xFA018C04u)
/** Alias (User Manual Name) for MCDS_TCZID0_RNG.
* To use register names with standard convension, please use MCDS_TCZID0_RNG.
*/
#define MCDS_TCZIDRNG0 (MCDS_TCZID0_RNG)

/** \brief 8C08, Comparator Mask Register 0 */
#define MCDS_TCZID0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZID_MSK*)0xFA018C08u)
/** Alias (User Manual Name) for MCDS_TCZID0_MSK.
* To use register names with standard convension, please use MCDS_TCZID0_MSK.
*/
#define MCDS_TCZIDMSK0 (MCDS_TCZID0_MSK)

/** \brief 8C0C, Comparator Sign Register 0 */
#define MCDS_TCZID0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZID_SGN*)0xFA018C0Cu)
/** Alias (User Manual Name) for MCDS_TCZID0_SGN.
* To use register names with standard convension, please use MCDS_TCZID0_SGN.
*/
#define MCDS_TCZIDSGN0 (MCDS_TCZID0_SGN)

/** \brief 8C10, Comparator Bound Register 1 */
#define MCDS_TCZID1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZID_BND*)0xFA018C10u)
/** Alias (User Manual Name) for MCDS_TCZID1_BND.
* To use register names with standard convension, please use MCDS_TCZID1_BND.
*/
#define MCDS_TCZIDBND1 (MCDS_TCZID1_BND)

/** \brief 8C14, Comparator Range Register 1 */
#define MCDS_TCZID1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZID_RNG*)0xFA018C14u)
/** Alias (User Manual Name) for MCDS_TCZID1_RNG.
* To use register names with standard convension, please use MCDS_TCZID1_RNG.
*/
#define MCDS_TCZIDRNG1 (MCDS_TCZID1_RNG)

/** \brief 8C18, Comparator Mask Register 1 */
#define MCDS_TCZID1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZID_MSK*)0xFA018C18u)
/** Alias (User Manual Name) for MCDS_TCZID1_MSK.
* To use register names with standard convension, please use MCDS_TCZID1_MSK.
*/
#define MCDS_TCZIDMSK1 (MCDS_TCZID1_MSK)

/** \brief 8C1C, Comparator Sign Register 1 */
#define MCDS_TCZID1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZID_SGN*)0xFA018C1Cu)
/** Alias (User Manual Name) for MCDS_TCZID1_SGN.
* To use register names with standard convension, please use MCDS_TCZID1_SGN.
*/
#define MCDS_TCZIDSGN1 (MCDS_TCZID1_SGN)

/** \brief 9000, Comparator Bound Register 0 */
#define MCDS_TCZIP0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_BND*)0xFA019000u)
/** Alias (User Manual Name) for MCDS_TCZIP0_BND.
* To use register names with standard convension, please use MCDS_TCZIP0_BND.
*/
#define MCDS_TCZIPBND0 (MCDS_TCZIP0_BND)

/** \brief 9004, Comparator Range Register 0 */
#define MCDS_TCZIP0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_RNG*)0xFA019004u)
/** Alias (User Manual Name) for MCDS_TCZIP0_RNG.
* To use register names with standard convension, please use MCDS_TCZIP0_RNG.
*/
#define MCDS_TCZIPRNG0 (MCDS_TCZIP0_RNG)

/** \brief 9010, Comparator Bound Register 1 */
#define MCDS_TCZIP1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_BND*)0xFA019010u)
/** Alias (User Manual Name) for MCDS_TCZIP1_BND.
* To use register names with standard convension, please use MCDS_TCZIP1_BND.
*/
#define MCDS_TCZIPBND1 (MCDS_TCZIP1_BND)

/** \brief 9014, Comparator Range Register 1 */
#define MCDS_TCZIP1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_RNG*)0xFA019014u)
/** Alias (User Manual Name) for MCDS_TCZIP1_RNG.
* To use register names with standard convension, please use MCDS_TCZIP1_RNG.
*/
#define MCDS_TCZIPRNG1 (MCDS_TCZIP1_RNG)

/** \brief 9020, Comparator Bound Register 2 */
#define MCDS_TCZIP2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_BND*)0xFA019020u)
/** Alias (User Manual Name) for MCDS_TCZIP2_BND.
* To use register names with standard convension, please use MCDS_TCZIP2_BND.
*/
#define MCDS_TCZIPBND2 (MCDS_TCZIP2_BND)

/** \brief 9024, Comparator Range Register 2 */
#define MCDS_TCZIP2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_RNG*)0xFA019024u)
/** Alias (User Manual Name) for MCDS_TCZIP2_RNG.
* To use register names with standard convension, please use MCDS_TCZIP2_RNG.
*/
#define MCDS_TCZIPRNG2 (MCDS_TCZIP2_RNG)

/** \brief 9030, Comparator Bound Register 3 */
#define MCDS_TCZIP3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_BND*)0xFA019030u)
/** Alias (User Manual Name) for MCDS_TCZIP3_BND.
* To use register names with standard convension, please use MCDS_TCZIP3_BND.
*/
#define MCDS_TCZIPBND3 (MCDS_TCZIP3_BND)

/** \brief 9034, Comparator Range Register 3 */
#define MCDS_TCZIP3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_RNG*)0xFA019034u)
/** Alias (User Manual Name) for MCDS_TCZIP3_RNG.
* To use register names with standard convension, please use MCDS_TCZIP3_RNG.
*/
#define MCDS_TCZIPRNG3 (MCDS_TCZIP3_RNG)

/** \brief 9040, Comparator Bound Register 4 */
#define MCDS_TCZIP4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_BND*)0xFA019040u)
/** Alias (User Manual Name) for MCDS_TCZIP4_BND.
* To use register names with standard convension, please use MCDS_TCZIP4_BND.
*/
#define MCDS_TCZIPBND4 (MCDS_TCZIP4_BND)

/** \brief 9044, Comparator Range Register 4 */
#define MCDS_TCZIP4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_RNG*)0xFA019044u)
/** Alias (User Manual Name) for MCDS_TCZIP4_RNG.
* To use register names with standard convension, please use MCDS_TCZIP4_RNG.
*/
#define MCDS_TCZIPRNG4 (MCDS_TCZIP4_RNG)

/** \brief 9050, Comparator Bound Register 5 */
#define MCDS_TCZIP5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_BND*)0xFA019050u)
/** Alias (User Manual Name) for MCDS_TCZIP5_BND.
* To use register names with standard convension, please use MCDS_TCZIP5_BND.
*/
#define MCDS_TCZIPBND5 (MCDS_TCZIP5_BND)

/** \brief 9054, Comparator Range Register 5 */
#define MCDS_TCZIP5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIP_RNG*)0xFA019054u)
/** Alias (User Manual Name) for MCDS_TCZIP5_RNG.
* To use register names with standard convension, please use MCDS_TCZIP5_RNG.
*/
#define MCDS_TCZIPRNG5 (MCDS_TCZIP5_RNG)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXMCDS_REG_H */
