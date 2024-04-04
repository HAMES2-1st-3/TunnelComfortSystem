/**
 * \file IfxMcdslight_reg.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC35XA_TS_V2.6.0.R0
 * Specification: TC3xx Target Specification.V2.6.0
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
 * \defgroup IfxSfr_Mcdslight_Registers_Cfg Mcdslight address
 * \ingroup IfxSfr_Mcdslight_Registers
 * 
 * \defgroup IfxSfr_Mcdslight_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Mcdslight_Registers_Cfg
 *
 * \defgroup IfxSfr_Mcdslight_Registers_Cfg_Mcdslight 2-MCDSLIGHT
 * \ingroup IfxSfr_Mcdslight_Registers_Cfg
 *
 *
 */
#ifndef IFXMCDSLIGHT_REG_H
#define IFXMCDSLIGHT_REG_H 1
/******************************************************************************/
#include "IfxMcdslight_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Mcdslight_Registers_Cfg_BaseAddress
 * \{  */

/** \brief MCDSLIGHT object */
#define MODULE_MCDSLIGHT /*lint --e(923, 9078)*/ ((*(Ifx_MCDSLIGHT*)0xFA010000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcdslight_Registers_Cfg_Mcdslight
 * \{  */
/** \brief 0, Clock Control Register */
#define MCDSLIGHT_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_CLC*)0xFA010000u)

/** \brief 4, OCDS Control and Status */
#define MCDSLIGHT_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_OCS*)0xFA010004u)

/** \brief 8, Module Identification Register */
#define MCDSLIGHT_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_ID*)0xFA010008u)

/** \brief 10, MCDS Control Register */
#define MCDSLIGHT_CT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_CT*)0xFA010010u)

/** \brief 14, MCDS Signal Source Control */
#define MCDSLIGHT_MUX /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MUX*)0xFA010014u)

/** \brief 18, Session ID Low Register */
#define MCDSLIGHT_SESSIDL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_SESSIDL*)0xFA010018u)

/** \brief 1C, Session ID High Register */
#define MCDSLIGHT_SESSIDH /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_SESSIDH*)0xFA01001Cu)

/** \brief 20, MCDS_TC Signal Source Control */
#define MCDSLIGHT_MUX_TC_RC /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MUX_TC_RC*)0xFA010020u)

/** \brief F8, Access Enable Register 1 */
#define MCDSLIGHT_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_ACCEN1*)0xFA0100F8u)

/** \brief FC, Access Enable Register 0 */
#define MCDSLIGHT_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_ACCEN0*)0xFA0100FCu)

/** \brief 200, Trace Buffer Write Pointer */
#define MCDSLIGHT_FIFONOW /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFONOW*)0xFA010200u)

/** \brief 204, Trace Buffer Bottom Register */
#define MCDSLIGHT_FIFOBOT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFOBOT*)0xFA010204u)

/** \brief 208, Trace Buffer PRE/POST Register */
#define MCDSLIGHT_FIFOPRE /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFOPRE*)0xFA010208u)

/** \brief 20C, Trace Buffer Top Register */
#define MCDSLIGHT_FIFOTOP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFOTOP*)0xFA01020Cu)

/** \brief 210, Trace Buffer Control Register */
#define MCDSLIGHT_FIFOCTL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFOCTL*)0xFA010210u)

/** \brief 214, Trace Buffer Comparator Register */
#define MCDSLIGHT_FIFOWARN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFOWARN*)0xFA010214u)

/** \brief 218, Trace Buffer Comparator Register */
#define MCDSLIGHT_FIFOWARN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFOWARN*)0xFA010218u)

/** \brief 21C, FIFO Overflow Counter Register */
#define MCDSLIGHT_FIFOOVRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFOOVRCNT*)0xFA01021Cu)

/** \brief 220, Trace Buffer Captured Write Pointer */
#define MCDSLIGHT_FIFONTNOW /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_FIFONTNOW*)0xFA010220u)

/** \brief 400, Clock Counter Register */
#define MCDSLIGHT_TSUREFCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TSUREFCNT*)0xFA010400u)

/** \brief 404, Clock Prescaler Register */
#define MCDSLIGHT_TSUPRSCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TSUPRSCL*)0xFA010404u)

/** \brief 408, Clock Counter Register */
#define MCDSLIGHT_TSUEMUCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TSUEMUCNT*)0xFA010408u)

/** \brief 800, Event Definition Register 0 */
#define MCDSLIGHT_MCXEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010800u)

/** \brief 804, Event Definition Register 1 */
#define MCDSLIGHT_MCXEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010804u)

/** \brief 808, Event Definition Register 2 */
#define MCDSLIGHT_MCXEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010808u)

/** \brief 80C, Event Definition Register 3 */
#define MCDSLIGHT_MCXEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA01080Cu)

/** \brief 810, Event Definition Register 4 */
#define MCDSLIGHT_MCXEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010810u)

/** \brief 814, Event Definition Register 5 */
#define MCDSLIGHT_MCXEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010814u)

/** \brief 818, Event Definition Register 6 */
#define MCDSLIGHT_MCXEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010818u)

/** \brief 81C, Event Definition Register 7 */
#define MCDSLIGHT_MCXEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA01081Cu)

/** \brief 820, Event Definition Register 8 */
#define MCDSLIGHT_MCXEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010820u)

/** \brief 824, Event Definition Register 9 */
#define MCDSLIGHT_MCXEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010824u)

/** \brief 828, Event Definition Register 10 */
#define MCDSLIGHT_MCXEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010828u)

/** \brief 82C, Event Definition Register 11 */
#define MCDSLIGHT_MCXEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA01082Cu)

/** \brief 830, Event Definition Register 12 */
#define MCDSLIGHT_MCXEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010830u)

/** \brief 834, Event Definition Register 13 */
#define MCDSLIGHT_MCXEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010834u)

/** \brief 838, Event Definition Register 14 */
#define MCDSLIGHT_MCXEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010838u)

/** \brief 83C, Event Definition Register 15 */
#define MCDSLIGHT_MCXEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA01083Cu)

/** \brief 840, Event Definition Register 16 */
#define MCDSLIGHT_MCXEVT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010840u)

/** \brief 844, Event Definition Register 17 */
#define MCDSLIGHT_MCXEVT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010844u)

/** \brief 848, Event Definition Register 18 */
#define MCDSLIGHT_MCXEVT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010848u)

/** \brief 84C, Event Definition Register 19 */
#define MCDSLIGHT_MCXEVT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA01084Cu)

/** \brief 850, Event Definition Register 20 */
#define MCDSLIGHT_MCXEVT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010850u)

/** \brief 854, Event Definition Register 21 */
#define MCDSLIGHT_MCXEVT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010854u)

/** \brief 858, Event Definition Register 22 */
#define MCDSLIGHT_MCXEVT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA010858u)

/** \brief 85C, Event Definition Register 23 */
#define MCDSLIGHT_MCXEVT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXEVT*)0xFA01085Cu)

/** \brief 880, Action Definition Register 0 */
#define MCDSLIGHT_MCXACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010880u)

/** \brief 884, Action Definition Register 1 */
#define MCDSLIGHT_MCXACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010884u)

/** \brief 888, Action Definition Register 2 */
#define MCDSLIGHT_MCXACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010888u)

/** \brief 88C, Action Definition Register 3 */
#define MCDSLIGHT_MCXACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01088Cu)

/** \brief 890, Action Definition Register 4 */
#define MCDSLIGHT_MCXACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010890u)

/** \brief 894, Action Definition Register 5 */
#define MCDSLIGHT_MCXACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010894u)

/** \brief 898, Action Definition Register 6 */
#define MCDSLIGHT_MCXACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010898u)

/** \brief 89C, Action Definition Register 7 */
#define MCDSLIGHT_MCXACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01089Cu)

/** \brief 8A0, Action Definition Register 8 */
#define MCDSLIGHT_MCXACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108A0u)

/** \brief 8A4, Action Definition Register 9 */
#define MCDSLIGHT_MCXACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108A4u)

/** \brief 8A8, Action Definition Register 10 */
#define MCDSLIGHT_MCXACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108A8u)

/** \brief 8AC, Action Definition Register 11 */
#define MCDSLIGHT_MCXACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108ACu)

/** \brief 8B0, Action Definition Register 12 */
#define MCDSLIGHT_MCXACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108B0u)

/** \brief 8B4, Action Definition Register 13 */
#define MCDSLIGHT_MCXACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108B4u)

/** \brief 8B8, Action Definition Register 14 */
#define MCDSLIGHT_MCXACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108B8u)

/** \brief 8BC, Action Definition Register 15 */
#define MCDSLIGHT_MCXACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108BCu)

/** \brief 8C0, Action Definition Register 16 */
#define MCDSLIGHT_MCXACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108C0u)

/** \brief 8C4, Action Definition Register 17 */
#define MCDSLIGHT_MCXACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108C4u)

/** \brief 8C8, Action Definition Register 18 */
#define MCDSLIGHT_MCXACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108C8u)

/** \brief 8CC, Action Definition Register 19 */
#define MCDSLIGHT_MCXACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108CCu)

/** \brief 8D0, Action Definition Register 20 */
#define MCDSLIGHT_MCXACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108D0u)

/** \brief 8D4, Action Definition Register 21 */
#define MCDSLIGHT_MCXACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108D4u)

/** \brief 8D8, Action Definition Register 22 */
#define MCDSLIGHT_MCXACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108D8u)

/** \brief 8DC, Action Definition Register 23 */
#define MCDSLIGHT_MCXACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108DCu)

/** \brief 8E0, Action Definition Register 24 */
#define MCDSLIGHT_MCXACT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108E0u)

/** \brief 8E4, Action Definition Register 25 */
#define MCDSLIGHT_MCXACT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108E4u)

/** \brief 8E8, Action Definition Register 26 */
#define MCDSLIGHT_MCXACT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108E8u)

/** \brief 8EC, Action Definition Register 27 */
#define MCDSLIGHT_MCXACT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108ECu)

/** \brief 8F0, Action Definition Register 28 */
#define MCDSLIGHT_MCXACT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108F0u)

/** \brief 8F4, Action Definition Register 29 */
#define MCDSLIGHT_MCXACT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108F4u)

/** \brief 8F8, Action Definition Register 30 */
#define MCDSLIGHT_MCXACT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108F8u)

/** \brief 8FC, Action Definition Register 31 */
#define MCDSLIGHT_MCXACT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0108FCu)

/** \brief 900, Action Definition Register 32 */
#define MCDSLIGHT_MCXACT32 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010900u)

/** \brief 904, Action Definition Register 33 */
#define MCDSLIGHT_MCXACT33 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010904u)

/** \brief 908, Action Definition Register 34 */
#define MCDSLIGHT_MCXACT34 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010908u)

/** \brief 90C, Action Definition Register 35 */
#define MCDSLIGHT_MCXACT35 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01090Cu)

/** \brief 910, Action Definition Register 36 */
#define MCDSLIGHT_MCXACT36 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010910u)

/** \brief 914, Action Definition Register 37 */
#define MCDSLIGHT_MCXACT37 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010914u)

/** \brief 918, Action Definition Register 38 */
#define MCDSLIGHT_MCXACT38 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010918u)

/** \brief 91C, Action Definition Register 39 */
#define MCDSLIGHT_MCXACT39 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01091Cu)

/** \brief 920, Action Definition Register 40 */
#define MCDSLIGHT_MCXACT40 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010920u)

/** \brief 924, Action Definition Register 41 */
#define MCDSLIGHT_MCXACT41 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010924u)

/** \brief 928, Action Definition Register 42 */
#define MCDSLIGHT_MCXACT42 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010928u)

/** \brief 92C, Action Definition Register 43 */
#define MCDSLIGHT_MCXACT43 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01092Cu)

/** \brief 930, Action Definition Register 44 */
#define MCDSLIGHT_MCXACT44 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010930u)

/** \brief 934, Action Definition Register 45 */
#define MCDSLIGHT_MCXACT45 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010934u)

/** \brief 938, Action Definition Register 46 */
#define MCDSLIGHT_MCXACT46 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010938u)

/** \brief 93C, Action Definition Register 47 */
#define MCDSLIGHT_MCXACT47 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01093Cu)

/** \brief 940, Action Definition Register 48 */
#define MCDSLIGHT_MCXACT48 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010940u)

/** \brief 944, Action Definition Register 49 */
#define MCDSLIGHT_MCXACT49 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010944u)

/** \brief 948, Action Definition Register 50 */
#define MCDSLIGHT_MCXACT50 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010948u)

/** \brief 94C, Action Definition Register 51 */
#define MCDSLIGHT_MCXACT51 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01094Cu)

/** \brief 950, Action Definition Register 52 */
#define MCDSLIGHT_MCXACT52 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010950u)

/** \brief 954, Action Definition Register 53 */
#define MCDSLIGHT_MCXACT53 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010954u)

/** \brief 958, Action Definition Register 54 */
#define MCDSLIGHT_MCXACT54 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010958u)

/** \brief 95C, Action Definition Register 55 */
#define MCDSLIGHT_MCXACT55 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01095Cu)

/** \brief 960, Action Definition Register 56 */
#define MCDSLIGHT_MCXACT56 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010960u)

/** \brief 964, Action Definition Register 57 */
#define MCDSLIGHT_MCXACT57 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010964u)

/** \brief 968, Action Definition Register 58 */
#define MCDSLIGHT_MCXACT58 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010968u)

/** \brief 96C, Action Definition Register 59 */
#define MCDSLIGHT_MCXACT59 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01096Cu)

/** \brief 970, Action Definition Register 60 */
#define MCDSLIGHT_MCXACT60 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010970u)

/** \brief 974, Action Definition Register 61 */
#define MCDSLIGHT_MCXACT61 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010974u)

/** \brief 978, Action Definition Register 62 */
#define MCDSLIGHT_MCXACT62 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010978u)

/** \brief 97C, Action Definition Register 63 */
#define MCDSLIGHT_MCXACT63 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01097Cu)

/** \brief 980, Action Definition Register 64 */
#define MCDSLIGHT_MCXACT64 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010980u)

/** \brief 984, Action Definition Register 65 */
#define MCDSLIGHT_MCXACT65 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010984u)

/** \brief 988, Action Definition Register 66 */
#define MCDSLIGHT_MCXACT66 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010988u)

/** \brief 98C, Action Definition Register 67 */
#define MCDSLIGHT_MCXACT67 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01098Cu)

/** \brief 990, Action Definition Register 68 */
#define MCDSLIGHT_MCXACT68 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010990u)

/** \brief 994, Action Definition Register 69 */
#define MCDSLIGHT_MCXACT69 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010994u)

/** \brief 998, Action Definition Register 70 */
#define MCDSLIGHT_MCXACT70 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA010998u)

/** \brief 99C, Action Definition Register 71 */
#define MCDSLIGHT_MCXACT71 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA01099Cu)

/** \brief 9A0, Action Definition Register 72 */
#define MCDSLIGHT_MCXACT72 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109A0u)

/** \brief 9A4, Action Definition Register 73 */
#define MCDSLIGHT_MCXACT73 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109A4u)

/** \brief 9A8, Action Definition Register 74 */
#define MCDSLIGHT_MCXACT74 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109A8u)

/** \brief 9AC, Action Definition Register 75 */
#define MCDSLIGHT_MCXACT75 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109ACu)

/** \brief 9B0, Action Definition Register 76 */
#define MCDSLIGHT_MCXACT76 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109B0u)

/** \brief 9B4, Action Definition Register 77 */
#define MCDSLIGHT_MCXACT77 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109B4u)

/** \brief 9B8, Action Definition Register 78 */
#define MCDSLIGHT_MCXACT78 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109B8u)

/** \brief 9BC, Action Definition Register 79 */
#define MCDSLIGHT_MCXACT79 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109BCu)

/** \brief 9C0, Action Definition Register 80 */
#define MCDSLIGHT_MCXACT80 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCXACT*)0xFA0109C0u)

/** \brief A00, Counter Control Register */
#define MCDSLIGHT_MCX0_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A00u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX0_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX0_CCL.
*/
#define MCDSLIGHT_MCXCCL0 (MCDSLIGHT_MCX0_CCL)

/** \brief A04, Counter Limit Register */
#define MCDSLIGHT_MCX0_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A04u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX0_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX0_LMT.
*/
#define MCDSLIGHT_MCXLMT0 (MCDSLIGHT_MCX0_LMT)

/** \brief A08, Current Count Register */
#define MCDSLIGHT_MCX0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A08u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX0_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX0_CNT.
*/
#define MCDSLIGHT_MCXCNT0 (MCDSLIGHT_MCX0_CNT)

/** \brief A10, Counter Control Register */
#define MCDSLIGHT_MCX1_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A10u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX1_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX1_CCL.
*/
#define MCDSLIGHT_MCXCCL1 (MCDSLIGHT_MCX1_CCL)

/** \brief A14, Counter Limit Register */
#define MCDSLIGHT_MCX1_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A14u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX1_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX1_LMT.
*/
#define MCDSLIGHT_MCXLMT1 (MCDSLIGHT_MCX1_LMT)

/** \brief A18, Current Count Register */
#define MCDSLIGHT_MCX1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A18u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX1_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX1_CNT.
*/
#define MCDSLIGHT_MCXCNT1 (MCDSLIGHT_MCX1_CNT)

/** \brief A20, Counter Control Register */
#define MCDSLIGHT_MCX2_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A20u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX2_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX2_CCL.
*/
#define MCDSLIGHT_MCXCCL2 (MCDSLIGHT_MCX2_CCL)

/** \brief A24, Counter Limit Register */
#define MCDSLIGHT_MCX2_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A24u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX2_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX2_LMT.
*/
#define MCDSLIGHT_MCXLMT2 (MCDSLIGHT_MCX2_LMT)

/** \brief A28, Current Count Register */
#define MCDSLIGHT_MCX2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A28u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX2_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX2_CNT.
*/
#define MCDSLIGHT_MCXCNT2 (MCDSLIGHT_MCX2_CNT)

/** \brief A30, Counter Control Register */
#define MCDSLIGHT_MCX3_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A30u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX3_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX3_CCL.
*/
#define MCDSLIGHT_MCXCCL3 (MCDSLIGHT_MCX3_CCL)

/** \brief A34, Counter Limit Register */
#define MCDSLIGHT_MCX3_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A34u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX3_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX3_LMT.
*/
#define MCDSLIGHT_MCXLMT3 (MCDSLIGHT_MCX3_LMT)

/** \brief A38, Current Count Register */
#define MCDSLIGHT_MCX3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A38u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX3_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX3_CNT.
*/
#define MCDSLIGHT_MCXCNT3 (MCDSLIGHT_MCX3_CNT)

/** \brief A40, Counter Control Register */
#define MCDSLIGHT_MCX4_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A40u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX4_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX4_CCL.
*/
#define MCDSLIGHT_MCXCCL4 (MCDSLIGHT_MCX4_CCL)

/** \brief A44, Counter Limit Register */
#define MCDSLIGHT_MCX4_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A44u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX4_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX4_LMT.
*/
#define MCDSLIGHT_MCXLMT4 (MCDSLIGHT_MCX4_LMT)

/** \brief A48, Current Count Register */
#define MCDSLIGHT_MCX4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A48u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX4_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX4_CNT.
*/
#define MCDSLIGHT_MCXCNT4 (MCDSLIGHT_MCX4_CNT)

/** \brief A50, Counter Control Register */
#define MCDSLIGHT_MCX5_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A50u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX5_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX5_CCL.
*/
#define MCDSLIGHT_MCXCCL5 (MCDSLIGHT_MCX5_CCL)

/** \brief A54, Counter Limit Register */
#define MCDSLIGHT_MCX5_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A54u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX5_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX5_LMT.
*/
#define MCDSLIGHT_MCXLMT5 (MCDSLIGHT_MCX5_LMT)

/** \brief A58, Current Count Register */
#define MCDSLIGHT_MCX5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A58u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX5_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX5_CNT.
*/
#define MCDSLIGHT_MCXCNT5 (MCDSLIGHT_MCX5_CNT)

/** \brief A60, Counter Control Register */
#define MCDSLIGHT_MCX6_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A60u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX6_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX6_CCL.
*/
#define MCDSLIGHT_MCXCCL6 (MCDSLIGHT_MCX6_CCL)

/** \brief A64, Counter Limit Register */
#define MCDSLIGHT_MCX6_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A64u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX6_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX6_LMT.
*/
#define MCDSLIGHT_MCXLMT6 (MCDSLIGHT_MCX6_LMT)

/** \brief A68, Current Count Register */
#define MCDSLIGHT_MCX6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A68u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX6_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX6_CNT.
*/
#define MCDSLIGHT_MCXCNT6 (MCDSLIGHT_MCX6_CNT)

/** \brief A70, Counter Control Register */
#define MCDSLIGHT_MCX7_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A70u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX7_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX7_CCL.
*/
#define MCDSLIGHT_MCXCCL7 (MCDSLIGHT_MCX7_CCL)

/** \brief A74, Counter Limit Register */
#define MCDSLIGHT_MCX7_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A74u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX7_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX7_LMT.
*/
#define MCDSLIGHT_MCXLMT7 (MCDSLIGHT_MCX7_LMT)

/** \brief A78, Current Count Register */
#define MCDSLIGHT_MCX7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A78u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX7_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX7_CNT.
*/
#define MCDSLIGHT_MCXCNT7 (MCDSLIGHT_MCX7_CNT)

/** \brief A80, Counter Control Register */
#define MCDSLIGHT_MCX8_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A80u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX8_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX8_CCL.
*/
#define MCDSLIGHT_MCXCCL8 (MCDSLIGHT_MCX8_CCL)

/** \brief A84, Counter Limit Register */
#define MCDSLIGHT_MCX8_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A84u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX8_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX8_LMT.
*/
#define MCDSLIGHT_MCXLMT8 (MCDSLIGHT_MCX8_LMT)

/** \brief A88, Current Count Register */
#define MCDSLIGHT_MCX8_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A88u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX8_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX8_CNT.
*/
#define MCDSLIGHT_MCXCNT8 (MCDSLIGHT_MCX8_CNT)

/** \brief A90, Counter Control Register */
#define MCDSLIGHT_MCX9_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010A90u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX9_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX9_CCL.
*/
#define MCDSLIGHT_MCXCCL9 (MCDSLIGHT_MCX9_CCL)

/** \brief A94, Counter Limit Register */
#define MCDSLIGHT_MCX9_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010A94u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX9_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX9_LMT.
*/
#define MCDSLIGHT_MCXLMT9 (MCDSLIGHT_MCX9_LMT)

/** \brief A98, Current Count Register */
#define MCDSLIGHT_MCX9_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010A98u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX9_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX9_CNT.
*/
#define MCDSLIGHT_MCXCNT9 (MCDSLIGHT_MCX9_CNT)

/** \brief AA0, Counter Control Register */
#define MCDSLIGHT_MCX10_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010AA0u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX10_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX10_CCL.
*/
#define MCDSLIGHT_MCXCCL10 (MCDSLIGHT_MCX10_CCL)

/** \brief AA4, Counter Limit Register */
#define MCDSLIGHT_MCX10_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010AA4u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX10_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX10_LMT.
*/
#define MCDSLIGHT_MCXLMT10 (MCDSLIGHT_MCX10_LMT)

/** \brief AA8, Current Count Register */
#define MCDSLIGHT_MCX10_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010AA8u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX10_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX10_CNT.
*/
#define MCDSLIGHT_MCXCNT10 (MCDSLIGHT_MCX10_CNT)

/** \brief AB0, Counter Control Register */
#define MCDSLIGHT_MCX11_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010AB0u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX11_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX11_CCL.
*/
#define MCDSLIGHT_MCXCCL11 (MCDSLIGHT_MCX11_CCL)

/** \brief AB4, Counter Limit Register */
#define MCDSLIGHT_MCX11_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010AB4u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX11_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX11_LMT.
*/
#define MCDSLIGHT_MCXLMT11 (MCDSLIGHT_MCX11_LMT)

/** \brief AB8, Current Count Register */
#define MCDSLIGHT_MCX11_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010AB8u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX11_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX11_CNT.
*/
#define MCDSLIGHT_MCXCNT11 (MCDSLIGHT_MCX11_CNT)

/** \brief AC0, Counter Control Register */
#define MCDSLIGHT_MCX12_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010AC0u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX12_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX12_CCL.
*/
#define MCDSLIGHT_MCXCCL12 (MCDSLIGHT_MCX12_CCL)

/** \brief AC4, Counter Limit Register */
#define MCDSLIGHT_MCX12_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010AC4u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX12_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX12_LMT.
*/
#define MCDSLIGHT_MCXLMT12 (MCDSLIGHT_MCX12_LMT)

/** \brief AC8, Current Count Register */
#define MCDSLIGHT_MCX12_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010AC8u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX12_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX12_CNT.
*/
#define MCDSLIGHT_MCXCNT12 (MCDSLIGHT_MCX12_CNT)

/** \brief AD0, Counter Control Register */
#define MCDSLIGHT_MCX13_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010AD0u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX13_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX13_CCL.
*/
#define MCDSLIGHT_MCXCCL13 (MCDSLIGHT_MCX13_CCL)

/** \brief AD4, Counter Limit Register */
#define MCDSLIGHT_MCX13_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010AD4u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX13_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX13_LMT.
*/
#define MCDSLIGHT_MCXLMT13 (MCDSLIGHT_MCX13_LMT)

/** \brief AD8, Current Count Register */
#define MCDSLIGHT_MCX13_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010AD8u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX13_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX13_CNT.
*/
#define MCDSLIGHT_MCXCNT13 (MCDSLIGHT_MCX13_CNT)

/** \brief AE0, Counter Control Register */
#define MCDSLIGHT_MCX14_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010AE0u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX14_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX14_CCL.
*/
#define MCDSLIGHT_MCXCCL14 (MCDSLIGHT_MCX14_CCL)

/** \brief AE4, Counter Limit Register */
#define MCDSLIGHT_MCX14_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010AE4u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX14_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX14_LMT.
*/
#define MCDSLIGHT_MCXLMT14 (MCDSLIGHT_MCX14_LMT)

/** \brief AE8, Current Count Register */
#define MCDSLIGHT_MCX14_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010AE8u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX14_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX14_CNT.
*/
#define MCDSLIGHT_MCXCNT14 (MCDSLIGHT_MCX14_CNT)

/** \brief AF0, Counter Control Register */
#define MCDSLIGHT_MCX15_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CCL*)0xFA010AF0u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX15_CCL.
* To use register names with standard convension, please use MCDSLIGHT_MCX15_CCL.
*/
#define MCDSLIGHT_MCXCCL15 (MCDSLIGHT_MCX15_CCL)

/** \brief AF4, Counter Limit Register */
#define MCDSLIGHT_MCX15_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_LMT*)0xFA010AF4u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX15_LMT.
* To use register names with standard convension, please use MCDSLIGHT_MCX15_LMT.
*/
#define MCDSLIGHT_MCXLMT15 (MCDSLIGHT_MCX15_LMT)

/** \brief AF8, Current Count Register */
#define MCDSLIGHT_MCX15_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_MCX_CNT*)0xFA010AF8u)
/** Alias (User Manual Name) for MCDSLIGHT_MCX15_CNT.
* To use register names with standard convension, please use MCDSLIGHT_MCX15_CNT.
*/
#define MCDSLIGHT_MCXCNT15 (MCDSLIGHT_MCX15_CNT)

/** \brief 2000, Debug Status Register */
#define MCDSLIGHT_TCXDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXDCSTS*)0xFA012000u)

/** \brief 2008, Current Instruction Pointer */
#define MCDSLIGHT_TCXCIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXCIP*)0xFA012008u)

/** \brief 200C, Compact Function Trace Register */
#define MCDSLIGHT_TCXCFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXCFT*)0xFA01200Cu)

/** \brief 2200, Lookup Table Data Register */
#define MCDSLIGHT_TCXPALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPALLUTD*)0xFA012200u)

/** \brief 2204, Lookup Table Address Register */
#define MCDSLIGHT_TCXPALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPALLUTA*)0xFA012204u)

/** \brief 2210, Lookup Table Base Register */
#define MCDSLIGHT_TCXPAL0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_BND*)0xFA012210u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL0_BND.
*/
#define MCDSLIGHT_TCXPALBND0 (MCDSLIGHT_TCXPAL0_BND)

/** \brief 2214, Lookup Table Range Register */
#define MCDSLIGHT_TCXPAL0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_RNG*)0xFA012214u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL0_RNG.
*/
#define MCDSLIGHT_TCXPALRNG0 (MCDSLIGHT_TCXPAL0_RNG)

/** \brief 2218, Lookup Table Mapping Register */
#define MCDSLIGHT_TCXPAL0_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_MAP*)0xFA012218u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL0_MAP.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL0_MAP.
*/
#define MCDSLIGHT_TCXPALMAP0 (MCDSLIGHT_TCXPAL0_MAP)

/** \brief 2220, Lookup Table Base Register */
#define MCDSLIGHT_TCXPAL1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_BND*)0xFA012220u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL1_BND.
*/
#define MCDSLIGHT_TCXPALBND1 (MCDSLIGHT_TCXPAL1_BND)

/** \brief 2224, Lookup Table Range Register */
#define MCDSLIGHT_TCXPAL1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_RNG*)0xFA012224u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL1_RNG.
*/
#define MCDSLIGHT_TCXPALRNG1 (MCDSLIGHT_TCXPAL1_RNG)

/** \brief 2228, Lookup Table Mapping Register */
#define MCDSLIGHT_TCXPAL1_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_MAP*)0xFA012228u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL1_MAP.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL1_MAP.
*/
#define MCDSLIGHT_TCXPALMAP1 (MCDSLIGHT_TCXPAL1_MAP)

/** \brief 2230, Lookup Table Base Register */
#define MCDSLIGHT_TCXPAL2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_BND*)0xFA012230u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL2_BND.
*/
#define MCDSLIGHT_TCXPALBND2 (MCDSLIGHT_TCXPAL2_BND)

/** \brief 2234, Lookup Table Range Register */
#define MCDSLIGHT_TCXPAL2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_RNG*)0xFA012234u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL2_RNG.
*/
#define MCDSLIGHT_TCXPALRNG2 (MCDSLIGHT_TCXPAL2_RNG)

/** \brief 2238, Lookup Table Mapping Register */
#define MCDSLIGHT_TCXPAL2_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_MAP*)0xFA012238u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL2_MAP.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL2_MAP.
*/
#define MCDSLIGHT_TCXPALMAP2 (MCDSLIGHT_TCXPAL2_MAP)

/** \brief 2240, Lookup Table Base Register */
#define MCDSLIGHT_TCXPAL3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_BND*)0xFA012240u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL3_BND.
*/
#define MCDSLIGHT_TCXPALBND3 (MCDSLIGHT_TCXPAL3_BND)

/** \brief 2244, Lookup Table Range Register */
#define MCDSLIGHT_TCXPAL3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_RNG*)0xFA012244u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL3_RNG.
*/
#define MCDSLIGHT_TCXPALRNG3 (MCDSLIGHT_TCXPAL3_RNG)

/** \brief 2248, Lookup Table Mapping Register */
#define MCDSLIGHT_TCXPAL3_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXPAL_MAP*)0xFA012248u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXPAL3_MAP.
* To use register names with standard convension, please use MCDSLIGHT_TCXPAL3_MAP.
*/
#define MCDSLIGHT_TCXPALMAP3 (MCDSLIGHT_TCXPAL3_MAP)

/** \brief 2400, Comparator Bound Register 0 */
#define MCDSLIGHT_TCXEA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_BND*)0xFA012400u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA0_BND.
*/
#define MCDSLIGHT_TCXEABND0 (MCDSLIGHT_TCXEA0_BND)

/** \brief 2404, Comparator Range Register 0 */
#define MCDSLIGHT_TCXEA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_RNG*)0xFA012404u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA0_RNG.
*/
#define MCDSLIGHT_TCXEARNG0 (MCDSLIGHT_TCXEA0_RNG)

/** \brief 2410, Comparator Bound Register 1 */
#define MCDSLIGHT_TCXEA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_BND*)0xFA012410u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA1_BND.
*/
#define MCDSLIGHT_TCXEABND1 (MCDSLIGHT_TCXEA1_BND)

/** \brief 2414, Comparator Range Register 1 */
#define MCDSLIGHT_TCXEA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_RNG*)0xFA012414u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA1_RNG.
*/
#define MCDSLIGHT_TCXEARNG1 (MCDSLIGHT_TCXEA1_RNG)

/** \brief 2420, Comparator Bound Register 2 */
#define MCDSLIGHT_TCXEA2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_BND*)0xFA012420u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA2_BND.
*/
#define MCDSLIGHT_TCXEABND2 (MCDSLIGHT_TCXEA2_BND)

/** \brief 2424, Comparator Range Register 2 */
#define MCDSLIGHT_TCXEA2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_RNG*)0xFA012424u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA2_RNG.
*/
#define MCDSLIGHT_TCXEARNG2 (MCDSLIGHT_TCXEA2_RNG)

/** \brief 2430, Comparator Bound Register 3 */
#define MCDSLIGHT_TCXEA3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_BND*)0xFA012430u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA3_BND.
*/
#define MCDSLIGHT_TCXEABND3 (MCDSLIGHT_TCXEA3_BND)

/** \brief 2434, Comparator Range Register 3 */
#define MCDSLIGHT_TCXEA3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_RNG*)0xFA012434u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA3_RNG.
*/
#define MCDSLIGHT_TCXEARNG3 (MCDSLIGHT_TCXEA3_RNG)

/** \brief 2440, Comparator Bound Register 4 */
#define MCDSLIGHT_TCXEA4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_BND*)0xFA012440u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA4_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA4_BND.
*/
#define MCDSLIGHT_TCXEABND4 (MCDSLIGHT_TCXEA4_BND)

/** \brief 2444, Comparator Range Register 4 */
#define MCDSLIGHT_TCXEA4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_RNG*)0xFA012444u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA4_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA4_RNG.
*/
#define MCDSLIGHT_TCXEARNG4 (MCDSLIGHT_TCXEA4_RNG)

/** \brief 2450, Comparator Bound Register 5 */
#define MCDSLIGHT_TCXEA5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_BND*)0xFA012450u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA5_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA5_BND.
*/
#define MCDSLIGHT_TCXEABND5 (MCDSLIGHT_TCXEA5_BND)

/** \brief 2454, Comparator Range Register 5 */
#define MCDSLIGHT_TCXEA5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_RNG*)0xFA012454u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA5_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA5_RNG.
*/
#define MCDSLIGHT_TCXEARNG5 (MCDSLIGHT_TCXEA5_RNG)

/** \brief 2460, Comparator Bound Register 6 */
#define MCDSLIGHT_TCXEA6_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_BND*)0xFA012460u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA6_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA6_BND.
*/
#define MCDSLIGHT_TCXEABND6 (MCDSLIGHT_TCXEA6_BND)

/** \brief 2464, Comparator Range Register 6 */
#define MCDSLIGHT_TCXEA6_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_RNG*)0xFA012464u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA6_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA6_RNG.
*/
#define MCDSLIGHT_TCXEARNG6 (MCDSLIGHT_TCXEA6_RNG)

/** \brief 2470, Comparator Bound Register 7 */
#define MCDSLIGHT_TCXEA7_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_BND*)0xFA012470u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA7_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA7_BND.
*/
#define MCDSLIGHT_TCXEABND7 (MCDSLIGHT_TCXEA7_BND)

/** \brief 2474, Comparator Range Register 7 */
#define MCDSLIGHT_TCXEA7_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEA_RNG*)0xFA012474u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXEA7_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXEA7_RNG.
*/
#define MCDSLIGHT_TCXEARNG7 (MCDSLIGHT_TCXEA7_RNG)

/** \brief 2480, Comparator Bound Register 0 */
#define MCDSLIGHT_TCXWD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_BND*)0xFA012480u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD0_BND.
*/
#define MCDSLIGHT_TCXWDBND0 (MCDSLIGHT_TCXWD0_BND)

/** \brief 2484, Comparator Bound Register 0 */
#define MCDSLIGHT_TCXWD0_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HBND*)0xFA012484u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD0_HBND.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD0_HBND.
*/
#define MCDSLIGHT_TCXWDHBND0 (MCDSLIGHT_TCXWD0_HBND)

/** \brief 2488, Comparator Range Register 0 */
#define MCDSLIGHT_TCXWD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_RNG*)0xFA012488u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD0_RNG.
*/
#define MCDSLIGHT_TCXWDRNG0 (MCDSLIGHT_TCXWD0_RNG)

/** \brief 248C, Comparator Range Register 0 */
#define MCDSLIGHT_TCXWD0_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HRNG*)0xFA01248Cu)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD0_HRNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD0_HRNG.
*/
#define MCDSLIGHT_TCXWDHRNG0 (MCDSLIGHT_TCXWD0_HRNG)

/** \brief 2490, Comparator Mask Register 0 */
#define MCDSLIGHT_TCXWD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_MSK*)0xFA012490u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD0_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD0_MSK.
*/
#define MCDSLIGHT_TCXWDMSK0 (MCDSLIGHT_TCXWD0_MSK)

/** \brief 2494, Comparator Mask Register 0 */
#define MCDSLIGHT_TCXWD0_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HMSK*)0xFA012494u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD0_HMSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD0_HMSK.
*/
#define MCDSLIGHT_TCXWDHMSK0 (MCDSLIGHT_TCXWD0_HMSK)

/** \brief 249C, Comparator Sign Register 0 */
#define MCDSLIGHT_TCXWD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_SGN*)0xFA01249Cu)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD0_SGN.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD0_SGN.
*/
#define MCDSLIGHT_TCXWDSGN0 (MCDSLIGHT_TCXWD0_SGN)

/** \brief 24A0, Comparator Bound Register 1 */
#define MCDSLIGHT_TCXWD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_BND*)0xFA0124A0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD1_BND.
*/
#define MCDSLIGHT_TCXWDBND1 (MCDSLIGHT_TCXWD1_BND)

/** \brief 24A4, Comparator Bound Register 1 */
#define MCDSLIGHT_TCXWD1_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HBND*)0xFA0124A4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD1_HBND.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD1_HBND.
*/
#define MCDSLIGHT_TCXWDHBND1 (MCDSLIGHT_TCXWD1_HBND)

/** \brief 24A8, Comparator Range Register 1 */
#define MCDSLIGHT_TCXWD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_RNG*)0xFA0124A8u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD1_RNG.
*/
#define MCDSLIGHT_TCXWDRNG1 (MCDSLIGHT_TCXWD1_RNG)

/** \brief 24AC, Comparator Range Register 1 */
#define MCDSLIGHT_TCXWD1_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HRNG*)0xFA0124ACu)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD1_HRNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD1_HRNG.
*/
#define MCDSLIGHT_TCXWDHRNG1 (MCDSLIGHT_TCXWD1_HRNG)

/** \brief 24B0, Comparator Mask Register 1 */
#define MCDSLIGHT_TCXWD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_MSK*)0xFA0124B0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD1_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD1_MSK.
*/
#define MCDSLIGHT_TCXWDMSK1 (MCDSLIGHT_TCXWD1_MSK)

/** \brief 24B4, Comparator Mask Register 1 */
#define MCDSLIGHT_TCXWD1_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HMSK*)0xFA0124B4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD1_HMSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD1_HMSK.
*/
#define MCDSLIGHT_TCXWDHMSK1 (MCDSLIGHT_TCXWD1_HMSK)

/** \brief 24BC, Comparator Sign Register 1 */
#define MCDSLIGHT_TCXWD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_SGN*)0xFA0124BCu)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD1_SGN.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD1_SGN.
*/
#define MCDSLIGHT_TCXWDSGN1 (MCDSLIGHT_TCXWD1_SGN)

/** \brief 24C0, Comparator Bound Register 2 */
#define MCDSLIGHT_TCXWD2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_BND*)0xFA0124C0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD2_BND.
*/
#define MCDSLIGHT_TCXWDBND2 (MCDSLIGHT_TCXWD2_BND)

/** \brief 24C4, Comparator Bound Register 2 */
#define MCDSLIGHT_TCXWD2_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HBND*)0xFA0124C4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD2_HBND.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD2_HBND.
*/
#define MCDSLIGHT_TCXWDHBND2 (MCDSLIGHT_TCXWD2_HBND)

/** \brief 24C8, Comparator Range Register 2 */
#define MCDSLIGHT_TCXWD2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_RNG*)0xFA0124C8u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD2_RNG.
*/
#define MCDSLIGHT_TCXWDRNG2 (MCDSLIGHT_TCXWD2_RNG)

/** \brief 24CC, Comparator Range Register 2 */
#define MCDSLIGHT_TCXWD2_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HRNG*)0xFA0124CCu)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD2_HRNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD2_HRNG.
*/
#define MCDSLIGHT_TCXWDHRNG2 (MCDSLIGHT_TCXWD2_HRNG)

/** \brief 24D0, Comparator Mask Register 2 */
#define MCDSLIGHT_TCXWD2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_MSK*)0xFA0124D0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD2_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD2_MSK.
*/
#define MCDSLIGHT_TCXWDMSK2 (MCDSLIGHT_TCXWD2_MSK)

/** \brief 24D4, Comparator Mask Register 2 */
#define MCDSLIGHT_TCXWD2_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HMSK*)0xFA0124D4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD2_HMSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD2_HMSK.
*/
#define MCDSLIGHT_TCXWDHMSK2 (MCDSLIGHT_TCXWD2_HMSK)

/** \brief 24DC, Comparator Sign Register 2 */
#define MCDSLIGHT_TCXWD2_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_SGN*)0xFA0124DCu)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD2_SGN.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD2_SGN.
*/
#define MCDSLIGHT_TCXWDSGN2 (MCDSLIGHT_TCXWD2_SGN)

/** \brief 24E0, Comparator Bound Register 3 */
#define MCDSLIGHT_TCXWD3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_BND*)0xFA0124E0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD3_BND.
*/
#define MCDSLIGHT_TCXWDBND3 (MCDSLIGHT_TCXWD3_BND)

/** \brief 24E4, Comparator Bound Register 3 */
#define MCDSLIGHT_TCXWD3_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HBND*)0xFA0124E4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD3_HBND.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD3_HBND.
*/
#define MCDSLIGHT_TCXWDHBND3 (MCDSLIGHT_TCXWD3_HBND)

/** \brief 24E8, Comparator Range Register 3 */
#define MCDSLIGHT_TCXWD3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_RNG*)0xFA0124E8u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD3_RNG.
*/
#define MCDSLIGHT_TCXWDRNG3 (MCDSLIGHT_TCXWD3_RNG)

/** \brief 24EC, Comparator Range Register 3 */
#define MCDSLIGHT_TCXWD3_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HRNG*)0xFA0124ECu)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD3_HRNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD3_HRNG.
*/
#define MCDSLIGHT_TCXWDHRNG3 (MCDSLIGHT_TCXWD3_HRNG)

/** \brief 24F0, Comparator Mask Register 3 */
#define MCDSLIGHT_TCXWD3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_MSK*)0xFA0124F0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD3_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD3_MSK.
*/
#define MCDSLIGHT_TCXWDMSK3 (MCDSLIGHT_TCXWD3_MSK)

/** \brief 24F4, Comparator Mask Register 3 */
#define MCDSLIGHT_TCXWD3_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_HMSK*)0xFA0124F4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD3_HMSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD3_HMSK.
*/
#define MCDSLIGHT_TCXWDHMSK3 (MCDSLIGHT_TCXWD3_HMSK)

/** \brief 24FC, Comparator Sign Register 3 */
#define MCDSLIGHT_TCXWD3_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXWD_SGN*)0xFA0124FCu)
/** Alias (User Manual Name) for MCDSLIGHT_TCXWD3_SGN.
* To use register names with standard convension, please use MCDSLIGHT_TCXWD3_SGN.
*/
#define MCDSLIGHT_TCXWDSGN3 (MCDSLIGHT_TCXWD3_SGN)

/** \brief 2500, Comparator Bound Register 0 */
#define MCDSLIGHT_TCXAC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_BND*)0xFA012500u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC0_BND.
*/
#define MCDSLIGHT_TCXACBND0 (MCDSLIGHT_TCXAC0_BND)

/** \brief 2504, Comparator Range Register 0 */
#define MCDSLIGHT_TCXAC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_RNG*)0xFA012504u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC0_RNG.
*/
#define MCDSLIGHT_TCXACRNG0 (MCDSLIGHT_TCXAC0_RNG)

/** \brief 2508, Comparator Mask Register 0 */
#define MCDSLIGHT_TCXAC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_MSK*)0xFA012508u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC0_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC0_MSK.
*/
#define MCDSLIGHT_TCXACMSK0 (MCDSLIGHT_TCXAC0_MSK)

/** \brief 2510, Comparator Bound Register 1 */
#define MCDSLIGHT_TCXAC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_BND*)0xFA012510u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC1_BND.
*/
#define MCDSLIGHT_TCXACBND1 (MCDSLIGHT_TCXAC1_BND)

/** \brief 2514, Comparator Range Register 1 */
#define MCDSLIGHT_TCXAC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_RNG*)0xFA012514u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC1_RNG.
*/
#define MCDSLIGHT_TCXACRNG1 (MCDSLIGHT_TCXAC1_RNG)

/** \brief 2518, Comparator Mask Register 1 */
#define MCDSLIGHT_TCXAC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_MSK*)0xFA012518u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC1_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC1_MSK.
*/
#define MCDSLIGHT_TCXACMSK1 (MCDSLIGHT_TCXAC1_MSK)

/** \brief 2520, Comparator Bound Register 2 */
#define MCDSLIGHT_TCXAC2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_BND*)0xFA012520u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC2_BND.
*/
#define MCDSLIGHT_TCXACBND2 (MCDSLIGHT_TCXAC2_BND)

/** \brief 2524, Comparator Range Register 2 */
#define MCDSLIGHT_TCXAC2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_RNG*)0xFA012524u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC2_RNG.
*/
#define MCDSLIGHT_TCXACRNG2 (MCDSLIGHT_TCXAC2_RNG)

/** \brief 2528, Comparator Mask Register 2 */
#define MCDSLIGHT_TCXAC2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_MSK*)0xFA012528u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC2_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC2_MSK.
*/
#define MCDSLIGHT_TCXACMSK2 (MCDSLIGHT_TCXAC2_MSK)

/** \brief 2530, Comparator Bound Register 3 */
#define MCDSLIGHT_TCXAC3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_BND*)0xFA012530u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC3_BND.
*/
#define MCDSLIGHT_TCXACBND3 (MCDSLIGHT_TCXAC3_BND)

/** \brief 2534, Comparator Range Register 3 */
#define MCDSLIGHT_TCXAC3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_RNG*)0xFA012534u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC3_RNG.
*/
#define MCDSLIGHT_TCXACRNG3 (MCDSLIGHT_TCXAC3_RNG)

/** \brief 2538, Comparator Mask Register 3 */
#define MCDSLIGHT_TCXAC3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXAC_MSK*)0xFA012538u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXAC3_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCXAC3_MSK.
*/
#define MCDSLIGHT_TCXACMSK3 (MCDSLIGHT_TCXAC3_MSK)

/** \brief 2580, DTU FIFOs Fill Level */
#define MCDSLIGHT_TCXDTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXDTUFLV*)0xFA012580u)

/** \brief 2800, Event Definition Register 0 */
#define MCDSLIGHT_TCXEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012800u)

/** \brief 2804, Event Definition Register 1 */
#define MCDSLIGHT_TCXEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012804u)

/** \brief 2808, Event Definition Register 2 */
#define MCDSLIGHT_TCXEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012808u)

/** \brief 280C, Event Definition Register 3 */
#define MCDSLIGHT_TCXEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA01280Cu)

/** \brief 2810, Event Definition Register 4 */
#define MCDSLIGHT_TCXEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012810u)

/** \brief 2814, Event Definition Register 5 */
#define MCDSLIGHT_TCXEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012814u)

/** \brief 2818, Event Definition Register 6 */
#define MCDSLIGHT_TCXEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012818u)

/** \brief 281C, Event Definition Register 7 */
#define MCDSLIGHT_TCXEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA01281Cu)

/** \brief 2820, Event Definition Register 8 */
#define MCDSLIGHT_TCXEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012820u)

/** \brief 2824, Event Definition Register 9 */
#define MCDSLIGHT_TCXEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012824u)

/** \brief 2828, Event Definition Register 10 */
#define MCDSLIGHT_TCXEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012828u)

/** \brief 282C, Event Definition Register 11 */
#define MCDSLIGHT_TCXEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA01282Cu)

/** \brief 2830, Event Definition Register 12 */
#define MCDSLIGHT_TCXEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012830u)

/** \brief 2834, Event Definition Register 13 */
#define MCDSLIGHT_TCXEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012834u)

/** \brief 2838, Event Definition Register 14 */
#define MCDSLIGHT_TCXEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA012838u)

/** \brief 283C, Event Definition Register 15 */
#define MCDSLIGHT_TCXEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXEVT*)0xFA01283Cu)

/** \brief 2880, Action Definition Register 0 */
#define MCDSLIGHT_TCXACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA012880u)

/** \brief 2884, Action Definition Register 1 */
#define MCDSLIGHT_TCXACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA012884u)

/** \brief 2888, Action Definition Register 2 */
#define MCDSLIGHT_TCXACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA012888u)

/** \brief 288C, Action Definition Register 3 */
#define MCDSLIGHT_TCXACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA01288Cu)

/** \brief 2890, Action Definition Register 4 */
#define MCDSLIGHT_TCXACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA012890u)

/** \brief 2894, Action Definition Register 5 */
#define MCDSLIGHT_TCXACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA012894u)

/** \brief 2898, Action Definition Register 6 */
#define MCDSLIGHT_TCXACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA012898u)

/** \brief 289C, Action Definition Register 7 */
#define MCDSLIGHT_TCXACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA01289Cu)

/** \brief 28A0, Action Definition Register 8 */
#define MCDSLIGHT_TCXACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128A0u)

/** \brief 28A4, Action Definition Register 9 */
#define MCDSLIGHT_TCXACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128A4u)

/** \brief 28A8, Action Definition Register 10 */
#define MCDSLIGHT_TCXACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128A8u)

/** \brief 28AC, Action Definition Register 11 */
#define MCDSLIGHT_TCXACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128ACu)

/** \brief 28B0, Action Definition Register 12 */
#define MCDSLIGHT_TCXACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128B0u)

/** \brief 28B4, Action Definition Register 13 */
#define MCDSLIGHT_TCXACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128B4u)

/** \brief 28B8, Action Definition Register 14 */
#define MCDSLIGHT_TCXACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128B8u)

/** \brief 28BC, Action Definition Register 15 */
#define MCDSLIGHT_TCXACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128BCu)

/** \brief 28C0, Action Definition Register 16 */
#define MCDSLIGHT_TCXACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128C0u)

/** \brief 28C4, Action Definition Register 17 */
#define MCDSLIGHT_TCXACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128C4u)

/** \brief 28C8, Action Definition Register 18 */
#define MCDSLIGHT_TCXACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128C8u)

/** \brief 28CC, Action Definition Register 19 */
#define MCDSLIGHT_TCXACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128CCu)

/** \brief 28D0, Action Definition Register 20 */
#define MCDSLIGHT_TCXACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128D0u)

/** \brief 28D4, Action Definition Register 21 */
#define MCDSLIGHT_TCXACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128D4u)

/** \brief 28D8, Action Definition Register 22 */
#define MCDSLIGHT_TCXACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128D8u)

/** \brief 28DC, Action Definition Register 23 */
#define MCDSLIGHT_TCXACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXACT*)0xFA0128DCu)

/** \brief 3000, Comparator Bound Register 0 */
#define MCDSLIGHT_TCXIP0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_BND*)0xFA013000u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP0_BND.
*/
#define MCDSLIGHT_TCXIPBND0 (MCDSLIGHT_TCXIP0_BND)

/** \brief 3004, Comparator Range Register 0 */
#define MCDSLIGHT_TCXIP0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_RNG*)0xFA013004u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP0_RNG.
*/
#define MCDSLIGHT_TCXIPRNG0 (MCDSLIGHT_TCXIP0_RNG)

/** \brief 3010, Comparator Bound Register 1 */
#define MCDSLIGHT_TCXIP1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_BND*)0xFA013010u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP1_BND.
*/
#define MCDSLIGHT_TCXIPBND1 (MCDSLIGHT_TCXIP1_BND)

/** \brief 3014, Comparator Range Register 1 */
#define MCDSLIGHT_TCXIP1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_RNG*)0xFA013014u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP1_RNG.
*/
#define MCDSLIGHT_TCXIPRNG1 (MCDSLIGHT_TCXIP1_RNG)

/** \brief 3020, Comparator Bound Register 2 */
#define MCDSLIGHT_TCXIP2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_BND*)0xFA013020u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP2_BND.
*/
#define MCDSLIGHT_TCXIPBND2 (MCDSLIGHT_TCXIP2_BND)

/** \brief 3024, Comparator Range Register 2 */
#define MCDSLIGHT_TCXIP2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_RNG*)0xFA013024u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP2_RNG.
*/
#define MCDSLIGHT_TCXIPRNG2 (MCDSLIGHT_TCXIP2_RNG)

/** \brief 3030, Comparator Bound Register 3 */
#define MCDSLIGHT_TCXIP3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_BND*)0xFA013030u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP3_BND.
*/
#define MCDSLIGHT_TCXIPBND3 (MCDSLIGHT_TCXIP3_BND)

/** \brief 3034, Comparator Range Register 3 */
#define MCDSLIGHT_TCXIP3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_RNG*)0xFA013034u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP3_RNG.
*/
#define MCDSLIGHT_TCXIPRNG3 (MCDSLIGHT_TCXIP3_RNG)

/** \brief 3040, Comparator Bound Register 4 */
#define MCDSLIGHT_TCXIP4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_BND*)0xFA013040u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP4_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP4_BND.
*/
#define MCDSLIGHT_TCXIPBND4 (MCDSLIGHT_TCXIP4_BND)

/** \brief 3044, Comparator Range Register 4 */
#define MCDSLIGHT_TCXIP4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_RNG*)0xFA013044u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP4_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP4_RNG.
*/
#define MCDSLIGHT_TCXIPRNG4 (MCDSLIGHT_TCXIP4_RNG)

/** \brief 3050, Comparator Bound Register 5 */
#define MCDSLIGHT_TCXIP5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_BND*)0xFA013050u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP5_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP5_BND.
*/
#define MCDSLIGHT_TCXIPBND5 (MCDSLIGHT_TCXIP5_BND)

/** \brief 3054, Comparator Range Register 5 */
#define MCDSLIGHT_TCXIP5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCXIP_RNG*)0xFA013054u)
/** Alias (User Manual Name) for MCDSLIGHT_TCXIP5_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCXIP5_RNG.
*/
#define MCDSLIGHT_TCXIPRNG5 (MCDSLIGHT_TCXIP5_RNG)

/** \brief 4000, Debug Status Register */
#define MCDSLIGHT_TCYDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYDCSTS*)0xFA014000u)

/** \brief 4008, Current Instruction Pointer */
#define MCDSLIGHT_TCYCIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYCIP*)0xFA014008u)

/** \brief 400C, Compact Function Trace Register */
#define MCDSLIGHT_TCYCFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYCFT*)0xFA01400Cu)

/** \brief 4200, Lookup Table Data Register */
#define MCDSLIGHT_TCYPALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPALLUTD*)0xFA014200u)

/** \brief 4204, Lookup Table Address Register */
#define MCDSLIGHT_TCYPALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPALLUTA*)0xFA014204u)

/** \brief 4210, Lookup Table Base Register */
#define MCDSLIGHT_TCYPAL0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_BND*)0xFA014210u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL0_BND.
*/
#define MCDSLIGHT_TCYPALBND0 (MCDSLIGHT_TCYPAL0_BND)

/** \brief 4214, Lookup Table Range Register */
#define MCDSLIGHT_TCYPAL0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_RNG*)0xFA014214u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL0_RNG.
*/
#define MCDSLIGHT_TCYPALRNG0 (MCDSLIGHT_TCYPAL0_RNG)

/** \brief 4218, Lookup Table Mapping Register */
#define MCDSLIGHT_TCYPAL0_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_MAP*)0xFA014218u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL0_MAP.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL0_MAP.
*/
#define MCDSLIGHT_TCYPALMAP0 (MCDSLIGHT_TCYPAL0_MAP)

/** \brief 4220, Lookup Table Base Register */
#define MCDSLIGHT_TCYPAL1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_BND*)0xFA014220u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL1_BND.
*/
#define MCDSLIGHT_TCYPALBND1 (MCDSLIGHT_TCYPAL1_BND)

/** \brief 4224, Lookup Table Range Register */
#define MCDSLIGHT_TCYPAL1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_RNG*)0xFA014224u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL1_RNG.
*/
#define MCDSLIGHT_TCYPALRNG1 (MCDSLIGHT_TCYPAL1_RNG)

/** \brief 4228, Lookup Table Mapping Register */
#define MCDSLIGHT_TCYPAL1_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_MAP*)0xFA014228u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL1_MAP.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL1_MAP.
*/
#define MCDSLIGHT_TCYPALMAP1 (MCDSLIGHT_TCYPAL1_MAP)

/** \brief 4230, Lookup Table Base Register */
#define MCDSLIGHT_TCYPAL2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_BND*)0xFA014230u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL2_BND.
*/
#define MCDSLIGHT_TCYPALBND2 (MCDSLIGHT_TCYPAL2_BND)

/** \brief 4234, Lookup Table Range Register */
#define MCDSLIGHT_TCYPAL2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_RNG*)0xFA014234u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL2_RNG.
*/
#define MCDSLIGHT_TCYPALRNG2 (MCDSLIGHT_TCYPAL2_RNG)

/** \brief 4238, Lookup Table Mapping Register */
#define MCDSLIGHT_TCYPAL2_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_MAP*)0xFA014238u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL2_MAP.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL2_MAP.
*/
#define MCDSLIGHT_TCYPALMAP2 (MCDSLIGHT_TCYPAL2_MAP)

/** \brief 4240, Lookup Table Base Register */
#define MCDSLIGHT_TCYPAL3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_BND*)0xFA014240u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL3_BND.
*/
#define MCDSLIGHT_TCYPALBND3 (MCDSLIGHT_TCYPAL3_BND)

/** \brief 4244, Lookup Table Range Register */
#define MCDSLIGHT_TCYPAL3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_RNG*)0xFA014244u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL3_RNG.
*/
#define MCDSLIGHT_TCYPALRNG3 (MCDSLIGHT_TCYPAL3_RNG)

/** \brief 4248, Lookup Table Mapping Register */
#define MCDSLIGHT_TCYPAL3_MAP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYPAL_MAP*)0xFA014248u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYPAL3_MAP.
* To use register names with standard convension, please use MCDSLIGHT_TCYPAL3_MAP.
*/
#define MCDSLIGHT_TCYPALMAP3 (MCDSLIGHT_TCYPAL3_MAP)

/** \brief 4400, Comparator Bound Register 0 */
#define MCDSLIGHT_TCYEA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_BND*)0xFA014400u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA0_BND.
*/
#define MCDSLIGHT_TCYEABND0 (MCDSLIGHT_TCYEA0_BND)

/** \brief 4404, Comparator Range Register 0 */
#define MCDSLIGHT_TCYEA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_RNG*)0xFA014404u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA0_RNG.
*/
#define MCDSLIGHT_TCYEARNG0 (MCDSLIGHT_TCYEA0_RNG)

/** \brief 4410, Comparator Bound Register 1 */
#define MCDSLIGHT_TCYEA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_BND*)0xFA014410u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA1_BND.
*/
#define MCDSLIGHT_TCYEABND1 (MCDSLIGHT_TCYEA1_BND)

/** \brief 4414, Comparator Range Register 1 */
#define MCDSLIGHT_TCYEA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_RNG*)0xFA014414u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA1_RNG.
*/
#define MCDSLIGHT_TCYEARNG1 (MCDSLIGHT_TCYEA1_RNG)

/** \brief 4420, Comparator Bound Register 2 */
#define MCDSLIGHT_TCYEA2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_BND*)0xFA014420u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA2_BND.
*/
#define MCDSLIGHT_TCYEABND2 (MCDSLIGHT_TCYEA2_BND)

/** \brief 4424, Comparator Range Register 2 */
#define MCDSLIGHT_TCYEA2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_RNG*)0xFA014424u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA2_RNG.
*/
#define MCDSLIGHT_TCYEARNG2 (MCDSLIGHT_TCYEA2_RNG)

/** \brief 4430, Comparator Bound Register 3 */
#define MCDSLIGHT_TCYEA3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_BND*)0xFA014430u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA3_BND.
*/
#define MCDSLIGHT_TCYEABND3 (MCDSLIGHT_TCYEA3_BND)

/** \brief 4434, Comparator Range Register 3 */
#define MCDSLIGHT_TCYEA3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_RNG*)0xFA014434u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA3_RNG.
*/
#define MCDSLIGHT_TCYEARNG3 (MCDSLIGHT_TCYEA3_RNG)

/** \brief 4440, Comparator Bound Register 4 */
#define MCDSLIGHT_TCYEA4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_BND*)0xFA014440u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA4_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA4_BND.
*/
#define MCDSLIGHT_TCYEABND4 (MCDSLIGHT_TCYEA4_BND)

/** \brief 4444, Comparator Range Register 4 */
#define MCDSLIGHT_TCYEA4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_RNG*)0xFA014444u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA4_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA4_RNG.
*/
#define MCDSLIGHT_TCYEARNG4 (MCDSLIGHT_TCYEA4_RNG)

/** \brief 4450, Comparator Bound Register 5 */
#define MCDSLIGHT_TCYEA5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_BND*)0xFA014450u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA5_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA5_BND.
*/
#define MCDSLIGHT_TCYEABND5 (MCDSLIGHT_TCYEA5_BND)

/** \brief 4454, Comparator Range Register 5 */
#define MCDSLIGHT_TCYEA5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_RNG*)0xFA014454u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA5_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA5_RNG.
*/
#define MCDSLIGHT_TCYEARNG5 (MCDSLIGHT_TCYEA5_RNG)

/** \brief 4460, Comparator Bound Register 6 */
#define MCDSLIGHT_TCYEA6_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_BND*)0xFA014460u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA6_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA6_BND.
*/
#define MCDSLIGHT_TCYEABND6 (MCDSLIGHT_TCYEA6_BND)

/** \brief 4464, Comparator Range Register 6 */
#define MCDSLIGHT_TCYEA6_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_RNG*)0xFA014464u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA6_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA6_RNG.
*/
#define MCDSLIGHT_TCYEARNG6 (MCDSLIGHT_TCYEA6_RNG)

/** \brief 4470, Comparator Bound Register 7 */
#define MCDSLIGHT_TCYEA7_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_BND*)0xFA014470u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA7_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA7_BND.
*/
#define MCDSLIGHT_TCYEABND7 (MCDSLIGHT_TCYEA7_BND)

/** \brief 4474, Comparator Range Register 7 */
#define MCDSLIGHT_TCYEA7_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEA_RNG*)0xFA014474u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYEA7_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYEA7_RNG.
*/
#define MCDSLIGHT_TCYEARNG7 (MCDSLIGHT_TCYEA7_RNG)

/** \brief 4480, Comparator Bound Register 0 */
#define MCDSLIGHT_TCYWD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_BND*)0xFA014480u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD0_BND.
*/
#define MCDSLIGHT_TCYWDBND0 (MCDSLIGHT_TCYWD0_BND)

/** \brief 4484, Comparator Bound Register 0 */
#define MCDSLIGHT_TCYWD0_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HBND*)0xFA014484u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD0_HBND.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD0_HBND.
*/
#define MCDSLIGHT_TCYWDHBND0 (MCDSLIGHT_TCYWD0_HBND)

/** \brief 4488, Comparator Range Register 0 */
#define MCDSLIGHT_TCYWD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_RNG*)0xFA014488u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD0_RNG.
*/
#define MCDSLIGHT_TCYWDRNG0 (MCDSLIGHT_TCYWD0_RNG)

/** \brief 448C, Comparator Range Register 0 */
#define MCDSLIGHT_TCYWD0_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HRNG*)0xFA01448Cu)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD0_HRNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD0_HRNG.
*/
#define MCDSLIGHT_TCYWDHRNG0 (MCDSLIGHT_TCYWD0_HRNG)

/** \brief 4490, Comparator Mask Register 0 */
#define MCDSLIGHT_TCYWD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_MSK*)0xFA014490u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD0_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD0_MSK.
*/
#define MCDSLIGHT_TCYWDMSK0 (MCDSLIGHT_TCYWD0_MSK)

/** \brief 4494, Comparator Mask Register 0 */
#define MCDSLIGHT_TCYWD0_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HMSK*)0xFA014494u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD0_HMSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD0_HMSK.
*/
#define MCDSLIGHT_TCYWDHMSK0 (MCDSLIGHT_TCYWD0_HMSK)

/** \brief 449C, Comparator Sign Register 0 */
#define MCDSLIGHT_TCYWD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_SGN*)0xFA01449Cu)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD0_SGN.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD0_SGN.
*/
#define MCDSLIGHT_TCYWDSGN0 (MCDSLIGHT_TCYWD0_SGN)

/** \brief 44A0, Comparator Bound Register 1 */
#define MCDSLIGHT_TCYWD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_BND*)0xFA0144A0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD1_BND.
*/
#define MCDSLIGHT_TCYWDBND1 (MCDSLIGHT_TCYWD1_BND)

/** \brief 44A4, Comparator Bound Register 1 */
#define MCDSLIGHT_TCYWD1_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HBND*)0xFA0144A4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD1_HBND.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD1_HBND.
*/
#define MCDSLIGHT_TCYWDHBND1 (MCDSLIGHT_TCYWD1_HBND)

/** \brief 44A8, Comparator Range Register 1 */
#define MCDSLIGHT_TCYWD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_RNG*)0xFA0144A8u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD1_RNG.
*/
#define MCDSLIGHT_TCYWDRNG1 (MCDSLIGHT_TCYWD1_RNG)

/** \brief 44AC, Comparator Range Register 1 */
#define MCDSLIGHT_TCYWD1_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HRNG*)0xFA0144ACu)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD1_HRNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD1_HRNG.
*/
#define MCDSLIGHT_TCYWDHRNG1 (MCDSLIGHT_TCYWD1_HRNG)

/** \brief 44B0, Comparator Mask Register 1 */
#define MCDSLIGHT_TCYWD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_MSK*)0xFA0144B0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD1_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD1_MSK.
*/
#define MCDSLIGHT_TCYWDMSK1 (MCDSLIGHT_TCYWD1_MSK)

/** \brief 44B4, Comparator Mask Register 1 */
#define MCDSLIGHT_TCYWD1_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HMSK*)0xFA0144B4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD1_HMSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD1_HMSK.
*/
#define MCDSLIGHT_TCYWDHMSK1 (MCDSLIGHT_TCYWD1_HMSK)

/** \brief 44BC, Comparator Sign Register 1 */
#define MCDSLIGHT_TCYWD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_SGN*)0xFA0144BCu)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD1_SGN.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD1_SGN.
*/
#define MCDSLIGHT_TCYWDSGN1 (MCDSLIGHT_TCYWD1_SGN)

/** \brief 44C0, Comparator Bound Register 2 */
#define MCDSLIGHT_TCYWD2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_BND*)0xFA0144C0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD2_BND.
*/
#define MCDSLIGHT_TCYWDBND2 (MCDSLIGHT_TCYWD2_BND)

/** \brief 44C4, Comparator Bound Register 2 */
#define MCDSLIGHT_TCYWD2_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HBND*)0xFA0144C4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD2_HBND.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD2_HBND.
*/
#define MCDSLIGHT_TCYWDHBND2 (MCDSLIGHT_TCYWD2_HBND)

/** \brief 44C8, Comparator Range Register 2 */
#define MCDSLIGHT_TCYWD2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_RNG*)0xFA0144C8u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD2_RNG.
*/
#define MCDSLIGHT_TCYWDRNG2 (MCDSLIGHT_TCYWD2_RNG)

/** \brief 44CC, Comparator Range Register 2 */
#define MCDSLIGHT_TCYWD2_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HRNG*)0xFA0144CCu)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD2_HRNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD2_HRNG.
*/
#define MCDSLIGHT_TCYWDHRNG2 (MCDSLIGHT_TCYWD2_HRNG)

/** \brief 44D0, Comparator Mask Register 2 */
#define MCDSLIGHT_TCYWD2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_MSK*)0xFA0144D0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD2_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD2_MSK.
*/
#define MCDSLIGHT_TCYWDMSK2 (MCDSLIGHT_TCYWD2_MSK)

/** \brief 44D4, Comparator Mask Register 2 */
#define MCDSLIGHT_TCYWD2_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HMSK*)0xFA0144D4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD2_HMSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD2_HMSK.
*/
#define MCDSLIGHT_TCYWDHMSK2 (MCDSLIGHT_TCYWD2_HMSK)

/** \brief 44DC, Comparator Sign Register 2 */
#define MCDSLIGHT_TCYWD2_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_SGN*)0xFA0144DCu)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD2_SGN.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD2_SGN.
*/
#define MCDSLIGHT_TCYWDSGN2 (MCDSLIGHT_TCYWD2_SGN)

/** \brief 44E0, Comparator Bound Register 3 */
#define MCDSLIGHT_TCYWD3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_BND*)0xFA0144E0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD3_BND.
*/
#define MCDSLIGHT_TCYWDBND3 (MCDSLIGHT_TCYWD3_BND)

/** \brief 44E4, Comparator Bound Register 3 */
#define MCDSLIGHT_TCYWD3_HBND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HBND*)0xFA0144E4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD3_HBND.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD3_HBND.
*/
#define MCDSLIGHT_TCYWDHBND3 (MCDSLIGHT_TCYWD3_HBND)

/** \brief 44E8, Comparator Range Register 3 */
#define MCDSLIGHT_TCYWD3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_RNG*)0xFA0144E8u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD3_RNG.
*/
#define MCDSLIGHT_TCYWDRNG3 (MCDSLIGHT_TCYWD3_RNG)

/** \brief 44EC, Comparator Range Register 3 */
#define MCDSLIGHT_TCYWD3_HRNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HRNG*)0xFA0144ECu)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD3_HRNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD3_HRNG.
*/
#define MCDSLIGHT_TCYWDHRNG3 (MCDSLIGHT_TCYWD3_HRNG)

/** \brief 44F0, Comparator Mask Register 3 */
#define MCDSLIGHT_TCYWD3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_MSK*)0xFA0144F0u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD3_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD3_MSK.
*/
#define MCDSLIGHT_TCYWDMSK3 (MCDSLIGHT_TCYWD3_MSK)

/** \brief 44F4, Comparator Mask Register 3 */
#define MCDSLIGHT_TCYWD3_HMSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_HMSK*)0xFA0144F4u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD3_HMSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD3_HMSK.
*/
#define MCDSLIGHT_TCYWDHMSK3 (MCDSLIGHT_TCYWD3_HMSK)

/** \brief 44FC, Comparator Sign Register 3 */
#define MCDSLIGHT_TCYWD3_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYWD_SGN*)0xFA0144FCu)
/** Alias (User Manual Name) for MCDSLIGHT_TCYWD3_SGN.
* To use register names with standard convension, please use MCDSLIGHT_TCYWD3_SGN.
*/
#define MCDSLIGHT_TCYWDSGN3 (MCDSLIGHT_TCYWD3_SGN)

/** \brief 4500, Comparator Bound Register 0 */
#define MCDSLIGHT_TCYAC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_BND*)0xFA014500u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC0_BND.
*/
#define MCDSLIGHT_TCYACBND0 (MCDSLIGHT_TCYAC0_BND)

/** \brief 4504, Comparator Range Register 0 */
#define MCDSLIGHT_TCYAC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_RNG*)0xFA014504u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC0_RNG.
*/
#define MCDSLIGHT_TCYACRNG0 (MCDSLIGHT_TCYAC0_RNG)

/** \brief 4508, Comparator Mask Register 0 */
#define MCDSLIGHT_TCYAC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_MSK*)0xFA014508u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC0_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC0_MSK.
*/
#define MCDSLIGHT_TCYACMSK0 (MCDSLIGHT_TCYAC0_MSK)

/** \brief 4510, Comparator Bound Register 1 */
#define MCDSLIGHT_TCYAC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_BND*)0xFA014510u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC1_BND.
*/
#define MCDSLIGHT_TCYACBND1 (MCDSLIGHT_TCYAC1_BND)

/** \brief 4514, Comparator Range Register 1 */
#define MCDSLIGHT_TCYAC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_RNG*)0xFA014514u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC1_RNG.
*/
#define MCDSLIGHT_TCYACRNG1 (MCDSLIGHT_TCYAC1_RNG)

/** \brief 4518, Comparator Mask Register 1 */
#define MCDSLIGHT_TCYAC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_MSK*)0xFA014518u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC1_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC1_MSK.
*/
#define MCDSLIGHT_TCYACMSK1 (MCDSLIGHT_TCYAC1_MSK)

/** \brief 4520, Comparator Bound Register 2 */
#define MCDSLIGHT_TCYAC2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_BND*)0xFA014520u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC2_BND.
*/
#define MCDSLIGHT_TCYACBND2 (MCDSLIGHT_TCYAC2_BND)

/** \brief 4524, Comparator Range Register 2 */
#define MCDSLIGHT_TCYAC2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_RNG*)0xFA014524u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC2_RNG.
*/
#define MCDSLIGHT_TCYACRNG2 (MCDSLIGHT_TCYAC2_RNG)

/** \brief 4528, Comparator Mask Register 2 */
#define MCDSLIGHT_TCYAC2_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_MSK*)0xFA014528u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC2_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC2_MSK.
*/
#define MCDSLIGHT_TCYACMSK2 (MCDSLIGHT_TCYAC2_MSK)

/** \brief 4530, Comparator Bound Register 3 */
#define MCDSLIGHT_TCYAC3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_BND*)0xFA014530u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC3_BND.
*/
#define MCDSLIGHT_TCYACBND3 (MCDSLIGHT_TCYAC3_BND)

/** \brief 4534, Comparator Range Register 3 */
#define MCDSLIGHT_TCYAC3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_RNG*)0xFA014534u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC3_RNG.
*/
#define MCDSLIGHT_TCYACRNG3 (MCDSLIGHT_TCYAC3_RNG)

/** \brief 4538, Comparator Mask Register 3 */
#define MCDSLIGHT_TCYAC3_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYAC_MSK*)0xFA014538u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYAC3_MSK.
* To use register names with standard convension, please use MCDSLIGHT_TCYAC3_MSK.
*/
#define MCDSLIGHT_TCYACMSK3 (MCDSLIGHT_TCYAC3_MSK)

/** \brief 4580, DTU FIFOs Fill Level */
#define MCDSLIGHT_TCYDTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYDTUFLV*)0xFA014580u)

/** \brief 4800, Event Definition Register 0 */
#define MCDSLIGHT_TCYEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014800u)

/** \brief 4804, Event Definition Register 1 */
#define MCDSLIGHT_TCYEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014804u)

/** \brief 4808, Event Definition Register 2 */
#define MCDSLIGHT_TCYEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014808u)

/** \brief 480C, Event Definition Register 3 */
#define MCDSLIGHT_TCYEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA01480Cu)

/** \brief 4810, Event Definition Register 4 */
#define MCDSLIGHT_TCYEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014810u)

/** \brief 4814, Event Definition Register 5 */
#define MCDSLIGHT_TCYEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014814u)

/** \brief 4818, Event Definition Register 6 */
#define MCDSLIGHT_TCYEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014818u)

/** \brief 481C, Event Definition Register 7 */
#define MCDSLIGHT_TCYEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA01481Cu)

/** \brief 4820, Event Definition Register 8 */
#define MCDSLIGHT_TCYEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014820u)

/** \brief 4824, Event Definition Register 9 */
#define MCDSLIGHT_TCYEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014824u)

/** \brief 4828, Event Definition Register 10 */
#define MCDSLIGHT_TCYEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014828u)

/** \brief 482C, Event Definition Register 11 */
#define MCDSLIGHT_TCYEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA01482Cu)

/** \brief 4830, Event Definition Register 12 */
#define MCDSLIGHT_TCYEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014830u)

/** \brief 4834, Event Definition Register 13 */
#define MCDSLIGHT_TCYEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014834u)

/** \brief 4838, Event Definition Register 14 */
#define MCDSLIGHT_TCYEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA014838u)

/** \brief 483C, Event Definition Register 15 */
#define MCDSLIGHT_TCYEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYEVT*)0xFA01483Cu)

/** \brief 4880, Action Definition Register 0 */
#define MCDSLIGHT_TCYACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA014880u)

/** \brief 4884, Action Definition Register 1 */
#define MCDSLIGHT_TCYACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA014884u)

/** \brief 4888, Action Definition Register 2 */
#define MCDSLIGHT_TCYACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA014888u)

/** \brief 488C, Action Definition Register 3 */
#define MCDSLIGHT_TCYACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA01488Cu)

/** \brief 4890, Action Definition Register 4 */
#define MCDSLIGHT_TCYACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA014890u)

/** \brief 4894, Action Definition Register 5 */
#define MCDSLIGHT_TCYACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA014894u)

/** \brief 4898, Action Definition Register 6 */
#define MCDSLIGHT_TCYACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA014898u)

/** \brief 489C, Action Definition Register 7 */
#define MCDSLIGHT_TCYACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA01489Cu)

/** \brief 48A0, Action Definition Register 8 */
#define MCDSLIGHT_TCYACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148A0u)

/** \brief 48A4, Action Definition Register 9 */
#define MCDSLIGHT_TCYACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148A4u)

/** \brief 48A8, Action Definition Register 10 */
#define MCDSLIGHT_TCYACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148A8u)

/** \brief 48AC, Action Definition Register 11 */
#define MCDSLIGHT_TCYACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148ACu)

/** \brief 48B0, Action Definition Register 12 */
#define MCDSLIGHT_TCYACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148B0u)

/** \brief 48B4, Action Definition Register 13 */
#define MCDSLIGHT_TCYACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148B4u)

/** \brief 48B8, Action Definition Register 14 */
#define MCDSLIGHT_TCYACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148B8u)

/** \brief 48BC, Action Definition Register 15 */
#define MCDSLIGHT_TCYACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148BCu)

/** \brief 48C0, Action Definition Register 16 */
#define MCDSLIGHT_TCYACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148C0u)

/** \brief 48C4, Action Definition Register 17 */
#define MCDSLIGHT_TCYACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148C4u)

/** \brief 48C8, Action Definition Register 18 */
#define MCDSLIGHT_TCYACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148C8u)

/** \brief 48CC, Action Definition Register 19 */
#define MCDSLIGHT_TCYACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148CCu)

/** \brief 48D0, Action Definition Register 20 */
#define MCDSLIGHT_TCYACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148D0u)

/** \brief 48D4, Action Definition Register 21 */
#define MCDSLIGHT_TCYACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148D4u)

/** \brief 48D8, Action Definition Register 22 */
#define MCDSLIGHT_TCYACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148D8u)

/** \brief 48DC, Action Definition Register 23 */
#define MCDSLIGHT_TCYACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYACT*)0xFA0148DCu)

/** \brief 5000, Comparator Bound Register 0 */
#define MCDSLIGHT_TCYIP0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_BND*)0xFA015000u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP0_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP0_BND.
*/
#define MCDSLIGHT_TCYIPBND0 (MCDSLIGHT_TCYIP0_BND)

/** \brief 5004, Comparator Range Register 0 */
#define MCDSLIGHT_TCYIP0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_RNG*)0xFA015004u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP0_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP0_RNG.
*/
#define MCDSLIGHT_TCYIPRNG0 (MCDSLIGHT_TCYIP0_RNG)

/** \brief 5010, Comparator Bound Register 1 */
#define MCDSLIGHT_TCYIP1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_BND*)0xFA015010u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP1_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP1_BND.
*/
#define MCDSLIGHT_TCYIPBND1 (MCDSLIGHT_TCYIP1_BND)

/** \brief 5014, Comparator Range Register 1 */
#define MCDSLIGHT_TCYIP1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_RNG*)0xFA015014u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP1_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP1_RNG.
*/
#define MCDSLIGHT_TCYIPRNG1 (MCDSLIGHT_TCYIP1_RNG)

/** \brief 5020, Comparator Bound Register 2 */
#define MCDSLIGHT_TCYIP2_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_BND*)0xFA015020u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP2_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP2_BND.
*/
#define MCDSLIGHT_TCYIPBND2 (MCDSLIGHT_TCYIP2_BND)

/** \brief 5024, Comparator Range Register 2 */
#define MCDSLIGHT_TCYIP2_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_RNG*)0xFA015024u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP2_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP2_RNG.
*/
#define MCDSLIGHT_TCYIPRNG2 (MCDSLIGHT_TCYIP2_RNG)

/** \brief 5030, Comparator Bound Register 3 */
#define MCDSLIGHT_TCYIP3_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_BND*)0xFA015030u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP3_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP3_BND.
*/
#define MCDSLIGHT_TCYIPBND3 (MCDSLIGHT_TCYIP3_BND)

/** \brief 5034, Comparator Range Register 3 */
#define MCDSLIGHT_TCYIP3_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_RNG*)0xFA015034u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP3_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP3_RNG.
*/
#define MCDSLIGHT_TCYIPRNG3 (MCDSLIGHT_TCYIP3_RNG)

/** \brief 5040, Comparator Bound Register 4 */
#define MCDSLIGHT_TCYIP4_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_BND*)0xFA015040u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP4_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP4_BND.
*/
#define MCDSLIGHT_TCYIPBND4 (MCDSLIGHT_TCYIP4_BND)

/** \brief 5044, Comparator Range Register 4 */
#define MCDSLIGHT_TCYIP4_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_RNG*)0xFA015044u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP4_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP4_RNG.
*/
#define MCDSLIGHT_TCYIPRNG4 (MCDSLIGHT_TCYIP4_RNG)

/** \brief 5050, Comparator Bound Register 5 */
#define MCDSLIGHT_TCYIP5_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_BND*)0xFA015050u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP5_BND.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP5_BND.
*/
#define MCDSLIGHT_TCYIPBND5 (MCDSLIGHT_TCYIP5_BND)

/** \brief 5054, Comparator Range Register 5 */
#define MCDSLIGHT_TCYIP5_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDSLIGHT_TCYIP_RNG*)0xFA015054u)
/** Alias (User Manual Name) for MCDSLIGHT_TCYIP5_RNG.
* To use register names with standard convension, please use MCDSLIGHT_TCYIP5_RNG.
*/
#define MCDSLIGHT_TCYIPRNG5 (MCDSLIGHT_TCYIP5_RNG)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXMCDSLIGHT_REG_H */
