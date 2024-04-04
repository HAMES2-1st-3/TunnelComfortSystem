/**
 * \file IfxMinimcds_reg.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC38XA_UM_V1.0.0.R0
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
 * \defgroup IfxSfr_Minimcds_Registers_Cfg Minimcds address
 * \ingroup IfxSfr_Minimcds_Registers
 * 
 * \defgroup IfxSfr_Minimcds_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Minimcds_Registers_Cfg
 *
 * \defgroup IfxSfr_Minimcds_Registers_Cfg_Minimcds 2-MINIMCDS
 * \ingroup IfxSfr_Minimcds_Registers_Cfg
 *
 *
 */
#ifndef IFXMINIMCDS_REG_H
#define IFXMINIMCDS_REG_H 1
/******************************************************************************/
#include "IfxMinimcds_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Minimcds_Registers_Cfg_BaseAddress
 * \{  */

/** \brief MINIMCDS object */
#define MODULE_MINIMCDS /*lint --e(923, 9078)*/ ((*(Ifx_MINIMCDS*)0xFB718000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Minimcds_Registers_Cfg_Minimcds
 * \{  */
/** \brief 0, Clock Control Register */
#define MINIMCDS_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_CLC*)0xFB718000u)

/** \brief 4, OCDS Control and Status */
#define MINIMCDS_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_OCS*)0xFB718004u)

/** \brief 8, Module Identification Register */
#define MINIMCDS_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_ID*)0xFB718008u)

/** \brief 10, MCDS Control Register */
#define MINIMCDS_CT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_CT*)0xFB718010u)

/** \brief 14, MCDS Signal Source Control */
#define MINIMCDS_MUX /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MUX*)0xFB718014u)

/** \brief 20, MCDS_TC Signal Source Control */
#define MINIMCDS_MUX_TC_RC /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MUX_TC_RC*)0xFB718020u)

/** \brief 200, Trace Buffer Write Pointer */
#define MINIMCDS_FIFONOW /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_FIFONOW*)0xFB718200u)

/** \brief 204, Trace Buffer Bottom Register */
#define MINIMCDS_FIFOBOT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_FIFOBOT*)0xFB718204u)

/** \brief 208, Trace Buffer PRE/POST Register */
#define MINIMCDS_FIFOPRE /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_FIFOPRE*)0xFB718208u)

/** \brief 20C, Trace Buffer Top Register */
#define MINIMCDS_FIFOTOP /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_FIFOTOP*)0xFB71820Cu)

/** \brief 210, Trace Buffer Control Register */
#define MINIMCDS_FIFOCTL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_FIFOCTL*)0xFB718210u)

/** \brief 214, Trace Buffer Comparator Register */
#define MINIMCDS_FIFOWARN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_FIFOWARN*)0xFB718214u)

/** \brief 218, Trace Buffer Comparator Register */
#define MINIMCDS_FIFOWARN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_FIFOWARN*)0xFB718218u)

/** \brief 21C, FIFO Overflow Counter Register */
#define MINIMCDS_FIFOOVRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_FIFOOVRCNT*)0xFB71821Cu)

/** \brief 400, Clock Counter Register */
#define MINIMCDS_TSUREFCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TSUREFCNT*)0xFB718400u)

/** \brief 404, Clock Prescaler Register */
#define MINIMCDS_TSUPRSCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TSUPRSCL*)0xFB718404u)

/** \brief 408, Clock Counter Register */
#define MINIMCDS_TSUEMUCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TSUEMUCNT*)0xFB718408u)

/** \brief 800, Event Definition Register 0 */
#define MINIMCDS_MCX_EVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718800u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT0.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT0.
*/
#define MINIMCDS_MCXEVT0 (MINIMCDS_MCX_EVT0)

/** \brief 804, Event Definition Register 1 */
#define MINIMCDS_MCX_EVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718804u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT1.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT1.
*/
#define MINIMCDS_MCXEVT1 (MINIMCDS_MCX_EVT1)

/** \brief 808, Event Definition Register 2 */
#define MINIMCDS_MCX_EVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718808u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT2.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT2.
*/
#define MINIMCDS_MCXEVT2 (MINIMCDS_MCX_EVT2)

/** \brief 80C, Event Definition Register 3 */
#define MINIMCDS_MCX_EVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB71880Cu)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT3.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT3.
*/
#define MINIMCDS_MCXEVT3 (MINIMCDS_MCX_EVT3)

/** \brief 810, Event Definition Register 4 */
#define MINIMCDS_MCX_EVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718810u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT4.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT4.
*/
#define MINIMCDS_MCXEVT4 (MINIMCDS_MCX_EVT4)

/** \brief 814, Event Definition Register 5 */
#define MINIMCDS_MCX_EVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718814u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT5.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT5.
*/
#define MINIMCDS_MCXEVT5 (MINIMCDS_MCX_EVT5)

/** \brief 818, Event Definition Register 6 */
#define MINIMCDS_MCX_EVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718818u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT6.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT6.
*/
#define MINIMCDS_MCXEVT6 (MINIMCDS_MCX_EVT6)

/** \brief 81C, Event Definition Register 7 */
#define MINIMCDS_MCX_EVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB71881Cu)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT7.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT7.
*/
#define MINIMCDS_MCXEVT7 (MINIMCDS_MCX_EVT7)

/** \brief 820, Event Definition Register 8 */
#define MINIMCDS_MCX_EVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718820u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT8.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT8.
*/
#define MINIMCDS_MCXEVT8 (MINIMCDS_MCX_EVT8)

/** \brief 824, Event Definition Register 9 */
#define MINIMCDS_MCX_EVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718824u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT9.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT9.
*/
#define MINIMCDS_MCXEVT9 (MINIMCDS_MCX_EVT9)

/** \brief 828, Event Definition Register 10 */
#define MINIMCDS_MCX_EVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718828u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT10.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT10.
*/
#define MINIMCDS_MCXEVT10 (MINIMCDS_MCX_EVT10)

/** \brief 82C, Event Definition Register 11 */
#define MINIMCDS_MCX_EVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB71882Cu)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT11.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT11.
*/
#define MINIMCDS_MCXEVT11 (MINIMCDS_MCX_EVT11)

/** \brief 830, Event Definition Register 12 */
#define MINIMCDS_MCX_EVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718830u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT12.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT12.
*/
#define MINIMCDS_MCXEVT12 (MINIMCDS_MCX_EVT12)

/** \brief 834, Event Definition Register 13 */
#define MINIMCDS_MCX_EVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718834u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT13.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT13.
*/
#define MINIMCDS_MCXEVT13 (MINIMCDS_MCX_EVT13)

/** \brief 838, Event Definition Register 14 */
#define MINIMCDS_MCX_EVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB718838u)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT14.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT14.
*/
#define MINIMCDS_MCXEVT14 (MINIMCDS_MCX_EVT14)

/** \brief 83C, Event Definition Register 15 */
#define MINIMCDS_MCX_EVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_EVT*)0xFB71883Cu)
/** Alias (User Manual Name) for MINIMCDS_MCX_EVT15.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT15.
*/
#define MINIMCDS_MCXEVT15 (MINIMCDS_MCX_EVT15)

/** \brief 880, Action Definition Register 0 */
#define MINIMCDS_MCX_ACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718880u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT0.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT0.
*/
#define MINIMCDS_MCXACT0 (MINIMCDS_MCX_ACT0)

/** \brief 884, Action Definition Register 1 */
#define MINIMCDS_MCX_ACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718884u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT1.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT1.
*/
#define MINIMCDS_MCXACT1 (MINIMCDS_MCX_ACT1)

/** \brief 888, Action Definition Register 2 */
#define MINIMCDS_MCX_ACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718888u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT2.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT2.
*/
#define MINIMCDS_MCXACT2 (MINIMCDS_MCX_ACT2)

/** \brief 88C, Action Definition Register 3 */
#define MINIMCDS_MCX_ACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB71888Cu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT3.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT3.
*/
#define MINIMCDS_MCXACT3 (MINIMCDS_MCX_ACT3)

/** \brief 890, Action Definition Register 4 */
#define MINIMCDS_MCX_ACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718890u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT4.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT4.
*/
#define MINIMCDS_MCXACT4 (MINIMCDS_MCX_ACT4)

/** \brief 894, Action Definition Register 5 */
#define MINIMCDS_MCX_ACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718894u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT5.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT5.
*/
#define MINIMCDS_MCXACT5 (MINIMCDS_MCX_ACT5)

/** \brief 898, Action Definition Register 6 */
#define MINIMCDS_MCX_ACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718898u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT6.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT6.
*/
#define MINIMCDS_MCXACT6 (MINIMCDS_MCX_ACT6)

/** \brief 89C, Action Definition Register 7 */
#define MINIMCDS_MCX_ACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB71889Cu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT7.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT7.
*/
#define MINIMCDS_MCXACT7 (MINIMCDS_MCX_ACT7)

/** \brief 8A0, Action Definition Register 8 */
#define MINIMCDS_MCX_ACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188A0u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT8.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT8.
*/
#define MINIMCDS_MCXACT8 (MINIMCDS_MCX_ACT8)

/** \brief 8A4, Action Definition Register 9 */
#define MINIMCDS_MCX_ACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188A4u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT9.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT9.
*/
#define MINIMCDS_MCXACT9 (MINIMCDS_MCX_ACT9)

/** \brief 8A8, Action Definition Register 10 */
#define MINIMCDS_MCX_ACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188A8u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT10.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT10.
*/
#define MINIMCDS_MCXACT10 (MINIMCDS_MCX_ACT10)

/** \brief 8AC, Action Definition Register 11 */
#define MINIMCDS_MCX_ACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188ACu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT11.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT11.
*/
#define MINIMCDS_MCXACT11 (MINIMCDS_MCX_ACT11)

/** \brief 8B0, Action Definition Register 12 */
#define MINIMCDS_MCX_ACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188B0u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT12.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT12.
*/
#define MINIMCDS_MCXACT12 (MINIMCDS_MCX_ACT12)

/** \brief 8B4, Action Definition Register 13 */
#define MINIMCDS_MCX_ACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188B4u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT13.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT13.
*/
#define MINIMCDS_MCXACT13 (MINIMCDS_MCX_ACT13)

/** \brief 8B8, Action Definition Register 14 */
#define MINIMCDS_MCX_ACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188B8u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT14.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT14.
*/
#define MINIMCDS_MCXACT14 (MINIMCDS_MCX_ACT14)

/** \brief 8BC, Action Definition Register 15 */
#define MINIMCDS_MCX_ACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188BCu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT15.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT15.
*/
#define MINIMCDS_MCXACT15 (MINIMCDS_MCX_ACT15)

/** \brief 8C0, Action Definition Register 16 */
#define MINIMCDS_MCX_ACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188C0u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT16.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT16.
*/
#define MINIMCDS_MCXACT16 (MINIMCDS_MCX_ACT16)

/** \brief 8C4, Action Definition Register 17 */
#define MINIMCDS_MCX_ACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188C4u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT17.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT17.
*/
#define MINIMCDS_MCXACT17 (MINIMCDS_MCX_ACT17)

/** \brief 8C8, Action Definition Register 18 */
#define MINIMCDS_MCX_ACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188C8u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT18.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT18.
*/
#define MINIMCDS_MCXACT18 (MINIMCDS_MCX_ACT18)

/** \brief 8CC, Action Definition Register 19 */
#define MINIMCDS_MCX_ACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188CCu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT19.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT19.
*/
#define MINIMCDS_MCXACT19 (MINIMCDS_MCX_ACT19)

/** \brief 8D0, Action Definition Register 20 */
#define MINIMCDS_MCX_ACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188D0u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT20.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT20.
*/
#define MINIMCDS_MCXACT20 (MINIMCDS_MCX_ACT20)

/** \brief 8D4, Action Definition Register 21 */
#define MINIMCDS_MCX_ACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188D4u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT21.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT21.
*/
#define MINIMCDS_MCXACT21 (MINIMCDS_MCX_ACT21)

/** \brief 8D8, Action Definition Register 22 */
#define MINIMCDS_MCX_ACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188D8u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT22.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT22.
*/
#define MINIMCDS_MCXACT22 (MINIMCDS_MCX_ACT22)

/** \brief 8DC, Action Definition Register 23 */
#define MINIMCDS_MCX_ACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188DCu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT23.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT23.
*/
#define MINIMCDS_MCXACT23 (MINIMCDS_MCX_ACT23)

/** \brief 8E0, Action Definition Register 24 */
#define MINIMCDS_MCX_ACT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188E0u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT24.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT24.
*/
#define MINIMCDS_MCXACT24 (MINIMCDS_MCX_ACT24)

/** \brief 8E4, Action Definition Register 25 */
#define MINIMCDS_MCX_ACT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188E4u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT25.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT25.
*/
#define MINIMCDS_MCXACT25 (MINIMCDS_MCX_ACT25)

/** \brief 8E8, Action Definition Register 26 */
#define MINIMCDS_MCX_ACT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188E8u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT26.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT26.
*/
#define MINIMCDS_MCXACT26 (MINIMCDS_MCX_ACT26)

/** \brief 8EC, Action Definition Register 27 */
#define MINIMCDS_MCX_ACT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188ECu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT27.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT27.
*/
#define MINIMCDS_MCXACT27 (MINIMCDS_MCX_ACT27)

/** \brief 8F0, Action Definition Register 28 */
#define MINIMCDS_MCX_ACT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188F0u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT28.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT28.
*/
#define MINIMCDS_MCXACT28 (MINIMCDS_MCX_ACT28)

/** \brief 8F4, Action Definition Register 29 */
#define MINIMCDS_MCX_ACT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188F4u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT29.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT29.
*/
#define MINIMCDS_MCXACT29 (MINIMCDS_MCX_ACT29)

/** \brief 8F8, Action Definition Register 30 */
#define MINIMCDS_MCX_ACT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188F8u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT30.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT30.
*/
#define MINIMCDS_MCXACT30 (MINIMCDS_MCX_ACT30)

/** \brief 8FC, Action Definition Register 31 */
#define MINIMCDS_MCX_ACT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB7188FCu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT31.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT31.
*/
#define MINIMCDS_MCXACT31 (MINIMCDS_MCX_ACT31)

/** \brief 900, Action Definition Register 32 */
#define MINIMCDS_MCX_ACT32 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718900u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT32.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT32.
*/
#define MINIMCDS_MCXACT32 (MINIMCDS_MCX_ACT32)

/** \brief 904, Action Definition Register 33 */
#define MINIMCDS_MCX_ACT33 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718904u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT33.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT33.
*/
#define MINIMCDS_MCXACT33 (MINIMCDS_MCX_ACT33)

/** \brief 908, Action Definition Register 34 */
#define MINIMCDS_MCX_ACT34 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718908u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT34.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT34.
*/
#define MINIMCDS_MCXACT34 (MINIMCDS_MCX_ACT34)

/** \brief 90C, Action Definition Register 35 */
#define MINIMCDS_MCX_ACT35 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB71890Cu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT35.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT35.
*/
#define MINIMCDS_MCXACT35 (MINIMCDS_MCX_ACT35)

/** \brief 910, Action Definition Register 36 */
#define MINIMCDS_MCX_ACT36 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718910u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT36.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT36.
*/
#define MINIMCDS_MCXACT36 (MINIMCDS_MCX_ACT36)

/** \brief 914, Action Definition Register 37 */
#define MINIMCDS_MCX_ACT37 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718914u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT37.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT37.
*/
#define MINIMCDS_MCXACT37 (MINIMCDS_MCX_ACT37)

/** \brief 918, Action Definition Register 38 */
#define MINIMCDS_MCX_ACT38 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718918u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT38.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT38.
*/
#define MINIMCDS_MCXACT38 (MINIMCDS_MCX_ACT38)

/** \brief 91C, Action Definition Register 39 */
#define MINIMCDS_MCX_ACT39 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB71891Cu)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT39.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT39.
*/
#define MINIMCDS_MCXACT39 (MINIMCDS_MCX_ACT39)

/** \brief 920, Action Definition Register 40 */
#define MINIMCDS_MCX_ACT40 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718920u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT40.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT40.
*/
#define MINIMCDS_MCXACT40 (MINIMCDS_MCX_ACT40)

/** \brief 924, Action Definition Register 41 */
#define MINIMCDS_MCX_ACT41 /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_ACT*)0xFB718924u)
/** Alias (User Manual Name) for MINIMCDS_MCX_ACT41.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT41.
*/
#define MINIMCDS_MCXACT41 (MINIMCDS_MCX_ACT41)

/** \brief A00, Counter Control Register */
#define MINIMCDS_MCX_CNT0_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CCL*)0xFB718A00u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT0_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT0_CCL.
*/
#define MINIMCDS_MCXCCL0 (MINIMCDS_MCX_CNT0_CCL)

/** \brief A04, Counter Limit Register */
#define MINIMCDS_MCX_CNT0_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_LMT*)0xFB718A04u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT0_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT0_LMT.
*/
#define MINIMCDS_MCXLMT0 (MINIMCDS_MCX_CNT0_LMT)

/** \brief A08, Current Count Register */
#define MINIMCDS_MCX_CNT0_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CNT*)0xFB718A08u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT0_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT0_CNT.
*/
#define MINIMCDS_MCXCNT0 (MINIMCDS_MCX_CNT0_CNT)

/** \brief A10, Counter Control Register */
#define MINIMCDS_MCX_CNT1_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CCL*)0xFB718A10u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT1_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT1_CCL.
*/
#define MINIMCDS_MCXCCL1 (MINIMCDS_MCX_CNT1_CCL)

/** \brief A14, Counter Limit Register */
#define MINIMCDS_MCX_CNT1_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_LMT*)0xFB718A14u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT1_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT1_LMT.
*/
#define MINIMCDS_MCXLMT1 (MINIMCDS_MCX_CNT1_LMT)

/** \brief A18, Current Count Register */
#define MINIMCDS_MCX_CNT1_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CNT*)0xFB718A18u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT1_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT1_CNT.
*/
#define MINIMCDS_MCXCNT1 (MINIMCDS_MCX_CNT1_CNT)

/** \brief A20, Counter Control Register */
#define MINIMCDS_MCX_CNT2_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CCL*)0xFB718A20u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT2_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT2_CCL.
*/
#define MINIMCDS_MCXCCL2 (MINIMCDS_MCX_CNT2_CCL)

/** \brief A24, Counter Limit Register */
#define MINIMCDS_MCX_CNT2_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_LMT*)0xFB718A24u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT2_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT2_LMT.
*/
#define MINIMCDS_MCXLMT2 (MINIMCDS_MCX_CNT2_LMT)

/** \brief A28, Current Count Register */
#define MINIMCDS_MCX_CNT2_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CNT*)0xFB718A28u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT2_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT2_CNT.
*/
#define MINIMCDS_MCXCNT2 (MINIMCDS_MCX_CNT2_CNT)

/** \brief A30, Counter Control Register */
#define MINIMCDS_MCX_CNT3_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CCL*)0xFB718A30u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT3_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT3_CCL.
*/
#define MINIMCDS_MCXCCL3 (MINIMCDS_MCX_CNT3_CCL)

/** \brief A34, Counter Limit Register */
#define MINIMCDS_MCX_CNT3_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_LMT*)0xFB718A34u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT3_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT3_LMT.
*/
#define MINIMCDS_MCXLMT3 (MINIMCDS_MCX_CNT3_LMT)

/** \brief A38, Current Count Register */
#define MINIMCDS_MCX_CNT3_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CNT*)0xFB718A38u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT3_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT3_CNT.
*/
#define MINIMCDS_MCXCNT3 (MINIMCDS_MCX_CNT3_CNT)

/** \brief A40, Counter Control Register */
#define MINIMCDS_MCX_CNT4_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CCL*)0xFB718A40u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT4_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT4_CCL.
*/
#define MINIMCDS_MCXCCL4 (MINIMCDS_MCX_CNT4_CCL)

/** \brief A44, Counter Limit Register */
#define MINIMCDS_MCX_CNT4_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_LMT*)0xFB718A44u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT4_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT4_LMT.
*/
#define MINIMCDS_MCXLMT4 (MINIMCDS_MCX_CNT4_LMT)

/** \brief A48, Current Count Register */
#define MINIMCDS_MCX_CNT4_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CNT*)0xFB718A48u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT4_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT4_CNT.
*/
#define MINIMCDS_MCXCNT4 (MINIMCDS_MCX_CNT4_CNT)

/** \brief A50, Counter Control Register */
#define MINIMCDS_MCX_CNT5_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CCL*)0xFB718A50u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT5_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT5_CCL.
*/
#define MINIMCDS_MCXCCL5 (MINIMCDS_MCX_CNT5_CCL)

/** \brief A54, Counter Limit Register */
#define MINIMCDS_MCX_CNT5_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_LMT*)0xFB718A54u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT5_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT5_LMT.
*/
#define MINIMCDS_MCXLMT5 (MINIMCDS_MCX_CNT5_LMT)

/** \brief A58, Current Count Register */
#define MINIMCDS_MCX_CNT5_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CNT*)0xFB718A58u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT5_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT5_CNT.
*/
#define MINIMCDS_MCXCNT5 (MINIMCDS_MCX_CNT5_CNT)

/** \brief A60, Counter Control Register */
#define MINIMCDS_MCX_CNT6_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CCL*)0xFB718A60u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT6_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT6_CCL.
*/
#define MINIMCDS_MCXCCL6 (MINIMCDS_MCX_CNT6_CCL)

/** \brief A64, Counter Limit Register */
#define MINIMCDS_MCX_CNT6_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_LMT*)0xFB718A64u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT6_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT6_LMT.
*/
#define MINIMCDS_MCXLMT6 (MINIMCDS_MCX_CNT6_LMT)

/** \brief A68, Current Count Register */
#define MINIMCDS_MCX_CNT6_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CNT*)0xFB718A68u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT6_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT6_CNT.
*/
#define MINIMCDS_MCXCNT6 (MINIMCDS_MCX_CNT6_CNT)

/** \brief A70, Counter Control Register */
#define MINIMCDS_MCX_CNT7_CCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CCL*)0xFB718A70u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT7_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT7_CCL.
*/
#define MINIMCDS_MCXCCL7 (MINIMCDS_MCX_CNT7_CCL)

/** \brief A74, Counter Limit Register */
#define MINIMCDS_MCX_CNT7_LMT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_LMT*)0xFB718A74u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT7_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT7_LMT.
*/
#define MINIMCDS_MCXLMT7 (MINIMCDS_MCX_CNT7_LMT)

/** \brief A78, Current Count Register */
#define MINIMCDS_MCX_CNT7_CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_MCX_CNT_CNT*)0xFB718A78u)
/** Alias (User Manual Name) for MINIMCDS_MCX_CNT7_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT7_CNT.
*/
#define MINIMCDS_MCXCNT7 (MINIMCDS_MCX_CNT7_CNT)

/** \brief 2000, Debug Status Register */
#define MINIMCDS_TCX_DCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_DCSTS*)0xFB71A000u)
/** Alias (User Manual Name) for MINIMCDS_TCX_DCSTS.
* To use register names with standard convension, please use MINIMCDS_TCX_DCSTS.
*/
#define MINIMCDS_TCXDCSTS (MINIMCDS_TCX_DCSTS)

/** \brief 2008, Current Instruction Pointer */
#define MINIMCDS_TCX_CIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_CIP*)0xFB71A008u)
/** Alias (User Manual Name) for MINIMCDS_TCX_CIP.
* To use register names with standard convension, please use MINIMCDS_TCX_CIP.
*/
#define MINIMCDS_TCXCIP (MINIMCDS_TCX_CIP)

/** \brief 200C, Compact Function Trace Register */
#define MINIMCDS_TCX_CFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_CFT*)0xFB71A00Cu)
/** Alias (User Manual Name) for MINIMCDS_TCX_CFT.
* To use register names with standard convension, please use MINIMCDS_TCX_CFT.
*/
#define MINIMCDS_TCXCFT (MINIMCDS_TCX_CFT)

/** \brief 2400, Comparator Bound Register 0 */
#define MINIMCDS_TCX_EA0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_EA_BND*)0xFB71A400u)
/** Alias (User Manual Name) for MINIMCDS_TCX_EA0_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_EA0_BND.
*/
#define MINIMCDS_TCXEABND0 (MINIMCDS_TCX_EA0_BND)

/** \brief 2404, Comparator Range Register 0 */
#define MINIMCDS_TCX_EA0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_EA_RNG*)0xFB71A404u)
/** Alias (User Manual Name) for MINIMCDS_TCX_EA0_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_EA0_RNG.
*/
#define MINIMCDS_TCXEARNG0 (MINIMCDS_TCX_EA0_RNG)

/** \brief 2410, Comparator Bound Register 1 */
#define MINIMCDS_TCX_EA1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_EA_BND*)0xFB71A410u)
/** Alias (User Manual Name) for MINIMCDS_TCX_EA1_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_EA1_BND.
*/
#define MINIMCDS_TCXEABND1 (MINIMCDS_TCX_EA1_BND)

/** \brief 2414, Comparator Range Register 1 */
#define MINIMCDS_TCX_EA1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_EA_RNG*)0xFB71A414u)
/** Alias (User Manual Name) for MINIMCDS_TCX_EA1_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_EA1_RNG.
*/
#define MINIMCDS_TCXEARNG1 (MINIMCDS_TCX_EA1_RNG)

/** \brief 2480, Comparator Bound Register 0 */
#define MINIMCDS_TCX_WD0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_WD_BND*)0xFB71A480u)
/** Alias (User Manual Name) for MINIMCDS_TCX_WD0_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_WD0_BND.
*/
#define MINIMCDS_TCXWDBND0 (MINIMCDS_TCX_WD0_BND)

/** \brief 2488, Comparator Range Register 0 */
#define MINIMCDS_TCX_WD0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_WD_RNG*)0xFB71A488u)
/** Alias (User Manual Name) for MINIMCDS_TCX_WD0_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_WD0_RNG.
*/
#define MINIMCDS_TCXWDRNG0 (MINIMCDS_TCX_WD0_RNG)

/** \brief 2490, Comparator Mask Register 0 */
#define MINIMCDS_TCX_WD0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_WD_MSK*)0xFB71A490u)
/** Alias (User Manual Name) for MINIMCDS_TCX_WD0_MSK.
* To use register names with standard convension, please use MINIMCDS_TCX_WD0_MSK.
*/
#define MINIMCDS_TCXWDMSK0 (MINIMCDS_TCX_WD0_MSK)

/** \brief 249C, Comparator Sign Register 0 */
#define MINIMCDS_TCX_WD0_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_WD_SGN*)0xFB71A49Cu)
/** Alias (User Manual Name) for MINIMCDS_TCX_WD0_SGN.
* To use register names with standard convension, please use MINIMCDS_TCX_WD0_SGN.
*/
#define MINIMCDS_TCXWDSGN0 (MINIMCDS_TCX_WD0_SGN)

/** \brief 24A0, Comparator Bound Register 1 */
#define MINIMCDS_TCX_WD1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_WD_BND*)0xFB71A4A0u)
/** Alias (User Manual Name) for MINIMCDS_TCX_WD1_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_WD1_BND.
*/
#define MINIMCDS_TCXWDBND1 (MINIMCDS_TCX_WD1_BND)

/** \brief 24A8, Comparator Range Register 1 */
#define MINIMCDS_TCX_WD1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_WD_RNG*)0xFB71A4A8u)
/** Alias (User Manual Name) for MINIMCDS_TCX_WD1_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_WD1_RNG.
*/
#define MINIMCDS_TCXWDRNG1 (MINIMCDS_TCX_WD1_RNG)

/** \brief 24B0, Comparator Mask Register 1 */
#define MINIMCDS_TCX_WD1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_WD_MSK*)0xFB71A4B0u)
/** Alias (User Manual Name) for MINIMCDS_TCX_WD1_MSK.
* To use register names with standard convension, please use MINIMCDS_TCX_WD1_MSK.
*/
#define MINIMCDS_TCXWDMSK1 (MINIMCDS_TCX_WD1_MSK)

/** \brief 24BC, Comparator Sign Register 1 */
#define MINIMCDS_TCX_WD1_SGN /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_WD_SGN*)0xFB71A4BCu)
/** Alias (User Manual Name) for MINIMCDS_TCX_WD1_SGN.
* To use register names with standard convension, please use MINIMCDS_TCX_WD1_SGN.
*/
#define MINIMCDS_TCXWDSGN1 (MINIMCDS_TCX_WD1_SGN)

/** \brief 2500, Comparator Bound Register 0 */
#define MINIMCDS_TCX_AC0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_AC_BND*)0xFB71A500u)
/** Alias (User Manual Name) for MINIMCDS_TCX_AC0_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_AC0_BND.
*/
#define MINIMCDS_TCXACBND0 (MINIMCDS_TCX_AC0_BND)

/** \brief 2504, Comparator Range Register 0 */
#define MINIMCDS_TCX_AC0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_AC_RNG*)0xFB71A504u)
/** Alias (User Manual Name) for MINIMCDS_TCX_AC0_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_AC0_RNG.
*/
#define MINIMCDS_TCXACRNG0 (MINIMCDS_TCX_AC0_RNG)

/** \brief 2508, Comparator Mask Register 0 */
#define MINIMCDS_TCX_AC0_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_AC_MSK*)0xFB71A508u)
/** Alias (User Manual Name) for MINIMCDS_TCX_AC0_MSK.
* To use register names with standard convension, please use MINIMCDS_TCX_AC0_MSK.
*/
#define MINIMCDS_TCXACMSK0 (MINIMCDS_TCX_AC0_MSK)

/** \brief 2518, Comparator Bound Register 1 */
#define MINIMCDS_TCX_AC1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_AC_BND*)0xFB71A518u)
/** Alias (User Manual Name) for MINIMCDS_TCX_AC1_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_AC1_BND.
*/
#define MINIMCDS_TCXACBND1 (MINIMCDS_TCX_AC1_BND)

/** \brief 251C, Comparator Range Register 1 */
#define MINIMCDS_TCX_AC1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_AC_RNG*)0xFB71A51Cu)
/** Alias (User Manual Name) for MINIMCDS_TCX_AC1_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_AC1_RNG.
*/
#define MINIMCDS_TCXACRNG1 (MINIMCDS_TCX_AC1_RNG)

/** \brief 2520, Comparator Mask Register 1 */
#define MINIMCDS_TCX_AC1_MSK /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_AC_MSK*)0xFB71A520u)
/** Alias (User Manual Name) for MINIMCDS_TCX_AC1_MSK.
* To use register names with standard convension, please use MINIMCDS_TCX_AC1_MSK.
*/
#define MINIMCDS_TCXACMSK1 (MINIMCDS_TCX_AC1_MSK)

/** \brief 3000, Comparator Bound Register 0 */
#define MINIMCDS_TCX_IP0_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_IP_BND*)0xFB71B000u)
/** Alias (User Manual Name) for MINIMCDS_TCX_IP0_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_IP0_BND.
*/
#define MINIMCDS_TCXIPBND0 (MINIMCDS_TCX_IP0_BND)

/** \brief 3004, Comparator Range Register 0 */
#define MINIMCDS_TCX_IP0_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_IP_RNG*)0xFB71B004u)
/** Alias (User Manual Name) for MINIMCDS_TCX_IP0_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_IP0_RNG.
*/
#define MINIMCDS_TCXIPRNG0 (MINIMCDS_TCX_IP0_RNG)

/** \brief 3010, Comparator Bound Register 1 */
#define MINIMCDS_TCX_IP1_BND /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_IP_BND*)0xFB71B010u)
/** Alias (User Manual Name) for MINIMCDS_TCX_IP1_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_IP1_BND.
*/
#define MINIMCDS_TCXIPBND1 (MINIMCDS_TCX_IP1_BND)

/** \brief 3014, Comparator Range Register 1 */
#define MINIMCDS_TCX_IP1_RNG /*lint --e(923, 9078)*/ (*(volatile Ifx_MINIMCDS_TCX_IP_RNG*)0xFB71B014u)
/** Alias (User Manual Name) for MINIMCDS_TCX_IP1_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_IP1_RNG.
*/
#define MINIMCDS_TCXIPRNG1 (MINIMCDS_TCX_IP1_RNG)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXMINIMCDS_REG_H */
