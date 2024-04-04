/**
 * \file IfxDom_reg.h
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
 * \defgroup IfxSfr_Dom_Registers_Cfg Dom address
 * \ingroup IfxSfr_Dom_Registers
 * 
 * \defgroup IfxSfr_Dom_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Dom_Registers_Cfg
 *
 * \defgroup IfxSfr_Dom_Registers_Cfg_Dom0 2-DOM0
 * \ingroup IfxSfr_Dom_Registers_Cfg
 *
 *
 */
#ifndef IFXDOM_REG_H
#define IFXDOM_REG_H 1
/******************************************************************************/
#include "IfxDom_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Dom_Registers_Cfg_BaseAddress
 * \{  */

/** \brief DOM object */
#define MODULE_DOM0 /*lint --e(923, 9078)*/ ((*(Ifx_DOM*)0xF8700000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Dom_Registers_Cfg_Dom0
 * \{  */
/** \brief 0, Protocol Error Control Register 0 */
#define DOM0_SCICTRL0_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700000u)
/** Alias (User Manual Name) for DOM0_SCICTRL0_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL0_PECON.
*/
#define DOM0_PECON0 (DOM0_SCICTRL0_PECON)

/** \brief 8, SCI0 Arbiter Priority Register */
#define DOM0_SCICTRL0_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700008u)
/** Alias (User Manual Name) for DOM0_SCICTRL0_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL0_PRIORITY.
*/
#define DOM0_PRIORITY0 (DOM0_SCICTRL0_PRIORITY)

/** \brief 10, SCI 0 Error Address Capture Register */
#define DOM0_SCICTRL0_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700010u)
/** Alias (User Manual Name) for DOM0_SCICTRL0_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL0_ERRADDR.
*/
#define DOM0_ERRADDR0 (DOM0_SCICTRL0_ERRADDR)

/** \brief 18, SCI 0 Error Capture Register */
#define DOM0_SCICTRL0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700018u)
/** Alias (User Manual Name) for DOM0_SCICTRL0_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL0_ERR.
*/
#define DOM0_ERR0 (DOM0_SCICTRL0_ERR)

/** \brief 20, Protocol Error Control Register 1 */
#define DOM0_SCICTRL1_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700020u)
/** Alias (User Manual Name) for DOM0_SCICTRL1_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL1_PECON.
*/
#define DOM0_PECON1 (DOM0_SCICTRL1_PECON)

/** \brief 28, SCI1 Arbiter Priority Register */
#define DOM0_SCICTRL1_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700028u)
/** Alias (User Manual Name) for DOM0_SCICTRL1_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL1_PRIORITY.
*/
#define DOM0_PRIORITY1 (DOM0_SCICTRL1_PRIORITY)

/** \brief 30, SCI 1 Error Address Capture Register */
#define DOM0_SCICTRL1_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700030u)
/** Alias (User Manual Name) for DOM0_SCICTRL1_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL1_ERRADDR.
*/
#define DOM0_ERRADDR1 (DOM0_SCICTRL1_ERRADDR)

/** \brief 38, SCI 1 Error Capture Register */
#define DOM0_SCICTRL1_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700038u)
/** Alias (User Manual Name) for DOM0_SCICTRL1_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL1_ERR.
*/
#define DOM0_ERR1 (DOM0_SCICTRL1_ERR)

/** \brief 40, Protocol Error Control Register 2 */
#define DOM0_SCICTRL2_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700040u)
/** Alias (User Manual Name) for DOM0_SCICTRL2_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL2_PECON.
*/
#define DOM0_PECON2 (DOM0_SCICTRL2_PECON)

/** \brief 48, SCI2 Arbiter Priority Register */
#define DOM0_SCICTRL2_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700048u)
/** Alias (User Manual Name) for DOM0_SCICTRL2_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL2_PRIORITY.
*/
#define DOM0_PRIORITY2 (DOM0_SCICTRL2_PRIORITY)

/** \brief 50, SCI 2 Error Address Capture Register */
#define DOM0_SCICTRL2_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700050u)
/** Alias (User Manual Name) for DOM0_SCICTRL2_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL2_ERRADDR.
*/
#define DOM0_ERRADDR2 (DOM0_SCICTRL2_ERRADDR)

/** \brief 58, SCI 2 Error Capture Register */
#define DOM0_SCICTRL2_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700058u)
/** Alias (User Manual Name) for DOM0_SCICTRL2_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL2_ERR.
*/
#define DOM0_ERR2 (DOM0_SCICTRL2_ERR)

/** \brief 60, Protocol Error Control Register 3 */
#define DOM0_SCICTRL3_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700060u)
/** Alias (User Manual Name) for DOM0_SCICTRL3_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL3_PECON.
*/
#define DOM0_PECON3 (DOM0_SCICTRL3_PECON)

/** \brief 68, SCI3 Arbiter Priority Register */
#define DOM0_SCICTRL3_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700068u)
/** Alias (User Manual Name) for DOM0_SCICTRL3_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL3_PRIORITY.
*/
#define DOM0_PRIORITY3 (DOM0_SCICTRL3_PRIORITY)

/** \brief 70, SCI 3 Error Address Capture Register */
#define DOM0_SCICTRL3_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700070u)
/** Alias (User Manual Name) for DOM0_SCICTRL3_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL3_ERRADDR.
*/
#define DOM0_ERRADDR3 (DOM0_SCICTRL3_ERRADDR)

/** \brief 78, SCI 3 Error Capture Register */
#define DOM0_SCICTRL3_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700078u)
/** Alias (User Manual Name) for DOM0_SCICTRL3_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL3_ERR.
*/
#define DOM0_ERR3 (DOM0_SCICTRL3_ERR)

/** \brief 80, Protocol Error Control Register 4 */
#define DOM0_SCICTRL4_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700080u)
/** Alias (User Manual Name) for DOM0_SCICTRL4_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL4_PECON.
*/
#define DOM0_PECON4 (DOM0_SCICTRL4_PECON)

/** \brief 88, SCI4 Arbiter Priority Register */
#define DOM0_SCICTRL4_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700088u)
/** Alias (User Manual Name) for DOM0_SCICTRL4_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL4_PRIORITY.
*/
#define DOM0_PRIORITY4 (DOM0_SCICTRL4_PRIORITY)

/** \brief 90, SCI 4 Error Address Capture Register */
#define DOM0_SCICTRL4_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700090u)
/** Alias (User Manual Name) for DOM0_SCICTRL4_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL4_ERRADDR.
*/
#define DOM0_ERRADDR4 (DOM0_SCICTRL4_ERRADDR)

/** \brief 98, SCI 4 Error Capture Register */
#define DOM0_SCICTRL4_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700098u)
/** Alias (User Manual Name) for DOM0_SCICTRL4_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL4_ERR.
*/
#define DOM0_ERR4 (DOM0_SCICTRL4_ERR)

/** \brief A0, Protocol Error Control Register 5 */
#define DOM0_SCICTRL5_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87000A0u)
/** Alias (User Manual Name) for DOM0_SCICTRL5_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL5_PECON.
*/
#define DOM0_PECON5 (DOM0_SCICTRL5_PECON)

/** \brief A8, SCI5 Arbiter Priority Register */
#define DOM0_SCICTRL5_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87000A8u)
/** Alias (User Manual Name) for DOM0_SCICTRL5_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL5_PRIORITY.
*/
#define DOM0_PRIORITY5 (DOM0_SCICTRL5_PRIORITY)

/** \brief B0, SCI 5 Error Address Capture Register */
#define DOM0_SCICTRL5_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87000B0u)
/** Alias (User Manual Name) for DOM0_SCICTRL5_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL5_ERRADDR.
*/
#define DOM0_ERRADDR5 (DOM0_SCICTRL5_ERRADDR)

/** \brief B8, SCI 5 Error Capture Register */
#define DOM0_SCICTRL5_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87000B8u)
/** Alias (User Manual Name) for DOM0_SCICTRL5_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL5_ERR.
*/
#define DOM0_ERR5 (DOM0_SCICTRL5_ERR)

/** \brief C0, Protocol Error Control Register 6 */
#define DOM0_SCICTRL6_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87000C0u)
/** Alias (User Manual Name) for DOM0_SCICTRL6_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL6_PECON.
*/
#define DOM0_PECON6 (DOM0_SCICTRL6_PECON)

/** \brief C8, SCI6 Arbiter Priority Register */
#define DOM0_SCICTRL6_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87000C8u)
/** Alias (User Manual Name) for DOM0_SCICTRL6_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL6_PRIORITY.
*/
#define DOM0_PRIORITY6 (DOM0_SCICTRL6_PRIORITY)

/** \brief D0, SCI 6 Error Address Capture Register */
#define DOM0_SCICTRL6_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87000D0u)
/** Alias (User Manual Name) for DOM0_SCICTRL6_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL6_ERRADDR.
*/
#define DOM0_ERRADDR6 (DOM0_SCICTRL6_ERRADDR)

/** \brief D8, SCI 6 Error Capture Register */
#define DOM0_SCICTRL6_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87000D8u)
/** Alias (User Manual Name) for DOM0_SCICTRL6_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL6_ERR.
*/
#define DOM0_ERR6 (DOM0_SCICTRL6_ERR)

/** \brief E0, Protocol Error Control Register 7 */
#define DOM0_SCICTRL7_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87000E0u)
/** Alias (User Manual Name) for DOM0_SCICTRL7_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL7_PECON.
*/
#define DOM0_PECON7 (DOM0_SCICTRL7_PECON)

/** \brief E8, SCI7 Arbiter Priority Register */
#define DOM0_SCICTRL7_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87000E8u)
/** Alias (User Manual Name) for DOM0_SCICTRL7_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL7_PRIORITY.
*/
#define DOM0_PRIORITY7 (DOM0_SCICTRL7_PRIORITY)

/** \brief F0, SCI 7 Error Address Capture Register */
#define DOM0_SCICTRL7_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87000F0u)
/** Alias (User Manual Name) for DOM0_SCICTRL7_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL7_ERRADDR.
*/
#define DOM0_ERRADDR7 (DOM0_SCICTRL7_ERRADDR)

/** \brief F8, SCI 7 Error Capture Register */
#define DOM0_SCICTRL7_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87000F8u)
/** Alias (User Manual Name) for DOM0_SCICTRL7_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL7_ERR.
*/
#define DOM0_ERR7 (DOM0_SCICTRL7_ERR)

/** \brief 100, Protocol Error Control Register 8 */
#define DOM0_SCICTRL8_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700100u)
/** Alias (User Manual Name) for DOM0_SCICTRL8_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL8_PECON.
*/
#define DOM0_PECON8 (DOM0_SCICTRL8_PECON)

/** \brief 108, SCI8 Arbiter Priority Register */
#define DOM0_SCICTRL8_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700108u)
/** Alias (User Manual Name) for DOM0_SCICTRL8_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL8_PRIORITY.
*/
#define DOM0_PRIORITY8 (DOM0_SCICTRL8_PRIORITY)

/** \brief 110, SCI 8 Error Address Capture Register */
#define DOM0_SCICTRL8_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700110u)
/** Alias (User Manual Name) for DOM0_SCICTRL8_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL8_ERRADDR.
*/
#define DOM0_ERRADDR8 (DOM0_SCICTRL8_ERRADDR)

/** \brief 118, SCI 8 Error Capture Register */
#define DOM0_SCICTRL8_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700118u)
/** Alias (User Manual Name) for DOM0_SCICTRL8_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL8_ERR.
*/
#define DOM0_ERR8 (DOM0_SCICTRL8_ERR)

/** \brief 120, Protocol Error Control Register 9 */
#define DOM0_SCICTRL9_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700120u)
/** Alias (User Manual Name) for DOM0_SCICTRL9_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL9_PECON.
*/
#define DOM0_PECON9 (DOM0_SCICTRL9_PECON)

/** \brief 128, SCI9 Arbiter Priority Register */
#define DOM0_SCICTRL9_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700128u)
/** Alias (User Manual Name) for DOM0_SCICTRL9_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL9_PRIORITY.
*/
#define DOM0_PRIORITY9 (DOM0_SCICTRL9_PRIORITY)

/** \brief 130, SCI 9 Error Address Capture Register */
#define DOM0_SCICTRL9_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700130u)
/** Alias (User Manual Name) for DOM0_SCICTRL9_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL9_ERRADDR.
*/
#define DOM0_ERRADDR9 (DOM0_SCICTRL9_ERRADDR)

/** \brief 138, SCI 9 Error Capture Register */
#define DOM0_SCICTRL9_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700138u)
/** Alias (User Manual Name) for DOM0_SCICTRL9_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL9_ERR.
*/
#define DOM0_ERR9 (DOM0_SCICTRL9_ERR)

/** \brief 140, Protocol Error Control Register 10 */
#define DOM0_SCICTRL10_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700140u)
/** Alias (User Manual Name) for DOM0_SCICTRL10_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL10_PECON.
*/
#define DOM0_PECON10 (DOM0_SCICTRL10_PECON)

/** \brief 148, SCI10 Arbiter Priority Register */
#define DOM0_SCICTRL10_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700148u)
/** Alias (User Manual Name) for DOM0_SCICTRL10_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL10_PRIORITY.
*/
#define DOM0_PRIORITY10 (DOM0_SCICTRL10_PRIORITY)

/** \brief 150, SCI 10 Error Address Capture Register */
#define DOM0_SCICTRL10_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700150u)
/** Alias (User Manual Name) for DOM0_SCICTRL10_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL10_ERRADDR.
*/
#define DOM0_ERRADDR10 (DOM0_SCICTRL10_ERRADDR)

/** \brief 158, SCI 10 Error Capture Register */
#define DOM0_SCICTRL10_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700158u)
/** Alias (User Manual Name) for DOM0_SCICTRL10_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL10_ERR.
*/
#define DOM0_ERR10 (DOM0_SCICTRL10_ERR)

/** \brief 160, Protocol Error Control Register 11 */
#define DOM0_SCICTRL11_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700160u)
/** Alias (User Manual Name) for DOM0_SCICTRL11_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL11_PECON.
*/
#define DOM0_PECON11 (DOM0_SCICTRL11_PECON)

/** \brief 168, SCI11 Arbiter Priority Register */
#define DOM0_SCICTRL11_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700168u)
/** Alias (User Manual Name) for DOM0_SCICTRL11_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL11_PRIORITY.
*/
#define DOM0_PRIORITY11 (DOM0_SCICTRL11_PRIORITY)

/** \brief 170, SCI 11 Error Address Capture Register */
#define DOM0_SCICTRL11_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700170u)
/** Alias (User Manual Name) for DOM0_SCICTRL11_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL11_ERRADDR.
*/
#define DOM0_ERRADDR11 (DOM0_SCICTRL11_ERRADDR)

/** \brief 178, SCI 11 Error Capture Register */
#define DOM0_SCICTRL11_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700178u)
/** Alias (User Manual Name) for DOM0_SCICTRL11_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL11_ERR.
*/
#define DOM0_ERR11 (DOM0_SCICTRL11_ERR)

/** \brief 180, Protocol Error Control Register 12 */
#define DOM0_SCICTRL12_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700180u)
/** Alias (User Manual Name) for DOM0_SCICTRL12_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL12_PECON.
*/
#define DOM0_PECON12 (DOM0_SCICTRL12_PECON)

/** \brief 188, SCI12 Arbiter Priority Register */
#define DOM0_SCICTRL12_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700188u)
/** Alias (User Manual Name) for DOM0_SCICTRL12_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL12_PRIORITY.
*/
#define DOM0_PRIORITY12 (DOM0_SCICTRL12_PRIORITY)

/** \brief 190, SCI 12 Error Address Capture Register */
#define DOM0_SCICTRL12_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700190u)
/** Alias (User Manual Name) for DOM0_SCICTRL12_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL12_ERRADDR.
*/
#define DOM0_ERRADDR12 (DOM0_SCICTRL12_ERRADDR)

/** \brief 198, SCI 12 Error Capture Register */
#define DOM0_SCICTRL12_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700198u)
/** Alias (User Manual Name) for DOM0_SCICTRL12_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL12_ERR.
*/
#define DOM0_ERR12 (DOM0_SCICTRL12_ERR)

/** \brief 1A0, Protocol Error Control Register 13 */
#define DOM0_SCICTRL13_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87001A0u)
/** Alias (User Manual Name) for DOM0_SCICTRL13_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL13_PECON.
*/
#define DOM0_PECON13 (DOM0_SCICTRL13_PECON)

/** \brief 1A8, SCI13 Arbiter Priority Register */
#define DOM0_SCICTRL13_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87001A8u)
/** Alias (User Manual Name) for DOM0_SCICTRL13_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL13_PRIORITY.
*/
#define DOM0_PRIORITY13 (DOM0_SCICTRL13_PRIORITY)

/** \brief 1B0, SCI 13 Error Address Capture Register */
#define DOM0_SCICTRL13_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87001B0u)
/** Alias (User Manual Name) for DOM0_SCICTRL13_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL13_ERRADDR.
*/
#define DOM0_ERRADDR13 (DOM0_SCICTRL13_ERRADDR)

/** \brief 1B8, SCI 13 Error Capture Register */
#define DOM0_SCICTRL13_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87001B8u)
/** Alias (User Manual Name) for DOM0_SCICTRL13_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL13_ERR.
*/
#define DOM0_ERR13 (DOM0_SCICTRL13_ERR)

/** \brief 1C0, Protocol Error Control Register 14 */
#define DOM0_SCICTRL14_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87001C0u)
/** Alias (User Manual Name) for DOM0_SCICTRL14_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL14_PECON.
*/
#define DOM0_PECON14 (DOM0_SCICTRL14_PECON)

/** \brief 1C8, SCI14 Arbiter Priority Register */
#define DOM0_SCICTRL14_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87001C8u)
/** Alias (User Manual Name) for DOM0_SCICTRL14_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL14_PRIORITY.
*/
#define DOM0_PRIORITY14 (DOM0_SCICTRL14_PRIORITY)

/** \brief 1D0, SCI 14 Error Address Capture Register */
#define DOM0_SCICTRL14_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87001D0u)
/** Alias (User Manual Name) for DOM0_SCICTRL14_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL14_ERRADDR.
*/
#define DOM0_ERRADDR14 (DOM0_SCICTRL14_ERRADDR)

/** \brief 1D8, SCI 14 Error Capture Register */
#define DOM0_SCICTRL14_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87001D8u)
/** Alias (User Manual Name) for DOM0_SCICTRL14_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL14_ERR.
*/
#define DOM0_ERR14 (DOM0_SCICTRL14_ERR)

/** \brief 1E0, Protocol Error Control Register 15 */
#define DOM0_SCICTRL15_PECON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87001E0u)
/** Alias (User Manual Name) for DOM0_SCICTRL15_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL15_PECON.
*/
#define DOM0_PECON15 (DOM0_SCICTRL15_PECON)

/** \brief 1E8, SCI15 Arbiter Priority Register */
#define DOM0_SCICTRL15_PRIORITY /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87001E8u)
/** Alias (User Manual Name) for DOM0_SCICTRL15_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL15_PRIORITY.
*/
#define DOM0_PRIORITY15 (DOM0_SCICTRL15_PRIORITY)

/** \brief 1F0, SCI 15 Error Address Capture Register */
#define DOM0_SCICTRL15_ERRADDR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87001F0u)
/** Alias (User Manual Name) for DOM0_SCICTRL15_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL15_ERRADDR.
*/
#define DOM0_ERRADDR15 (DOM0_SCICTRL15_ERRADDR)

/** \brief 1F8, SCI 15 Error Capture Register */
#define DOM0_SCICTRL15_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87001F8u)
/** Alias (User Manual Name) for DOM0_SCICTRL15_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL15_ERR.
*/
#define DOM0_ERR15 (DOM0_SCICTRL15_ERR)

/** \brief 408, Identification Register */
#define DOM0_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_ID*)0xF8700408u)

/** \brief 410, Protocol Error Status Register */
#define DOM0_PESTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_PESTAT*)0xF8700410u)

/** \brief 418, Transaction ID Status Register */
#define DOM0_TIDSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_TIDSTAT*)0xF8700418u)

/** \brief 420, Transaction ID Enable Register */
#define DOM0_TIDEN /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_TIDEN*)0xF8700420u)

/** \brief 430, Domain 0 Bridge Control Register */
#define DOM0_BRCON /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_BRCON*)0xF8700430u)

/** \brief 4F0, Access Enable Register 0 */
#define DOM0_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_ACCEN0*)0xF87004F0u)

/** \brief 4F8, Access Enable Register 1 */
#define DOM0_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DOM_ACCEN1*)0xF87004F8u)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXDOM_REG_H */
