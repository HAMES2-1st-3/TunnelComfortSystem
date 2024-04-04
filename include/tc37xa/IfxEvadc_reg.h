/**
 * \file IfxEvadc_reg.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37x_TS_V2.6.0.R0
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
 * \defgroup IfxSfr_Evadc_Registers_Cfg Evadc address
 * \ingroup IfxSfr_Evadc_Registers
 * 
 * \defgroup IfxSfr_Evadc_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Evadc_Registers_Cfg
 *
 * \defgroup IfxSfr_Evadc_Registers_Cfg_Evadc 2-EVADC
 * \ingroup IfxSfr_Evadc_Registers_Cfg
 *
 *
 */
#ifndef IFXEVADC_REG_H
#define IFXEVADC_REG_H 1
/******************************************************************************/
#include "IfxEvadc_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Evadc_Registers_Cfg_BaseAddress
 * \{  */

/** \brief EVADC object */
#define MODULE_EVADC /*lint --e(923, 9078)*/ ((*(Ifx_EVADC*)0xF0020000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Evadc_Registers_Cfg_Evadc
 * \{  */
/** \brief 0, Clock Control Register */
#define EVADC_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_CLC*)0xF0020000u)

/** \brief 8, Module Identification Register */
#define EVADC_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_ID*)0xF0020008u)

/** \brief 28, OCDS Control and Status Register */
#define EVADC_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_OCS*)0xF0020028u)

/** \brief 2C, Kernel Reset Status Clear Register */
#define EVADC_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_KRSTCLR*)0xF002002Cu)

/** \brief 30, Kernel Reset Register 1 */
#define EVADC_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_KRST1*)0xF0020030u)

/** \brief 34, Kernel Reset Register 0 */
#define EVADC_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_KRST0*)0xF0020034u)

/** \brief 3C, Access Enable Register 0 */
#define EVADC_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_ACCEN0*)0xF002003Cu)

/** \brief 80, Global Configuration Register */
#define EVADC_GLOBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOBCFG*)0xF0020080u)

/** \brief 88, Access Protection Register 0 */
#define EVADC_ACCPROT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_ACCPROT0*)0xF0020088u)

/** \brief 8C, Access Protection Register 1 */
#define EVADC_ACCPROT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_ACCPROT1*)0xF002008Cu)

/** \brief 90, Access Protection Register 2 */
#define EVADC_ACCPROT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_ACCPROT2*)0xF0020090u)

/** \brief A0, Input Class Register 0, Global */
#define EVADC_GLOB_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_ICLASS*)0xF00200A0u)
/** Alias (User Manual Name) for EVADC_GLOB_ICLASS0.
* To use register names with standard convension, please use EVADC_GLOB_ICLASS0.
*/
#define EVADC_GLOBICLASS0 (EVADC_GLOB_ICLASS0)

/** \brief A4, Input Class Register 1, Global */
#define EVADC_GLOB_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_ICLASS*)0xF00200A4u)
/** Alias (User Manual Name) for EVADC_GLOB_ICLASS1.
* To use register names with standard convension, please use EVADC_GLOB_ICLASS1.
*/
#define EVADC_GLOBICLASS1 (EVADC_GLOB_ICLASS1)

/** \brief B8, Global Boundary Select Register */
#define EVADC_GLOB_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_BOUND*)0xF00200B8u)
/** Alias (User Manual Name) for EVADC_GLOB_BOUND.
* To use register names with standard convension, please use EVADC_GLOB_BOUND.
*/
#define EVADC_GLOBBOUND (EVADC_GLOB_BOUND)

/** \brief E0, Global Event Flag Register */
#define EVADC_GLOB_EFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_EFLAG*)0xF00200E0u)
/** Alias (User Manual Name) for EVADC_GLOB_EFLAG.
* To use register names with standard convension, please use EVADC_GLOB_EFLAG.
*/
#define EVADC_GLOBEFLAG (EVADC_GLOB_EFLAG)

/** \brief 140, Global Event Node Pointer Register */
#define EVADC_GLOB_EVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_EVNP*)0xF0020140u)
/** Alias (User Manual Name) for EVADC_GLOB_EVNP.
* To use register names with standard convension, please use EVADC_GLOB_EVNP.
*/
#define EVADC_GLOBEVNP (EVADC_GLOB_EVNP)

/** \brief 160, Global Test Functions Register */
#define EVADC_GLOB_TF /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_TF*)0xF0020160u)
/** Alias (User Manual Name) for EVADC_GLOB_TF.
* To use register names with standard convension, please use EVADC_GLOB_TF.
*/
#define EVADC_GLOBTF (EVADC_GLOB_TF)

/** \brief 164, Global Test Enable Register */
#define EVADC_GLOB_TE /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_TE*)0xF0020164u)
/** Alias (User Manual Name) for EVADC_GLOB_TE.
* To use register names with standard convension, please use EVADC_GLOB_TE.
*/
#define EVADC_GLOBTE (EVADC_GLOB_TE)

/** \brief 280, Global Result Control Register */
#define EVADC_GLOB_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_RCR*)0xF0020280u)
/** Alias (User Manual Name) for EVADC_GLOB_RCR.
* To use register names with standard convension, please use EVADC_GLOB_RCR.
*/
#define EVADC_GLOBRCR (EVADC_GLOB_RCR)

/** \brief 300, Global Result Register */
#define EVADC_GLOB_RES /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_RES*)0xF0020300u)
/** Alias (User Manual Name) for EVADC_GLOB_RES.
* To use register names with standard convension, please use EVADC_GLOB_RES.
*/
#define EVADC_GLOBRES (EVADC_GLOB_RES)

/** \brief 380, Global Result Register, Debug */
#define EVADC_GLOB_RESD /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_GLOB_RESD*)0xF0020380u)
/** Alias (User Manual Name) for EVADC_GLOB_RESD.
* To use register names with standard convension, please use EVADC_GLOB_RESD.
*/
#define EVADC_GLOBRESD (EVADC_GLOB_RESD)

/** \brief 3F0, External Multiplexer Interface Select Register */
#define EVADC_EMUXSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_EMUXSEL*)0xF00203F0u)

/** \brief 410, Trigger Control Register, Group 0 */
#define EVADC_G0_TRCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_TRCTR*)0xF0020410u)
/** Alias (User Manual Name) for EVADC_G0_TRCTR.
* To use register names with standard convension, please use EVADC_G0_TRCTR.
*/
#define EVADC_G0TRCTR (EVADC_G0_TRCTR)

/** \brief 480, Arbitration Config. Register, Group 0 */
#define EVADC_G0_ARBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBCFG*)0xF0020480u)
/** Alias (User Manual Name) for EVADC_G0_ARBCFG.
* To use register names with standard convension, please use EVADC_G0_ARBCFG.
*/
#define EVADC_G0ARBCFG (EVADC_G0_ARBCFG)

/** \brief 484, Arbitration Priority Register, Group 0 */
#define EVADC_G0_ARBPR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBPR*)0xF0020484u)
/** Alias (User Manual Name) for EVADC_G0_ARBPR.
* To use register names with standard convension, please use EVADC_G0_ARBPR.
*/
#define EVADC_G0ARBPR (EVADC_G0_ARBPR)

/** \brief 488, Analog Fct. Config. Register, Group 0 */
#define EVADC_G0_ANCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ANCFG*)0xF0020488u)
/** Alias (User Manual Name) for EVADC_G0_ANCFG.
* To use register names with standard convension, please use EVADC_G0_ANCFG.
*/
#define EVADC_G0ANCFG (EVADC_G0_ANCFG)

/** \brief 4A0, Input Class Register 0, Group 0 */
#define EVADC_G0_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00204A0u)
/** Alias (User Manual Name) for EVADC_G0_ICLASS0.
* To use register names with standard convension, please use EVADC_G0_ICLASS0.
*/
#define EVADC_G0ICLASS0 (EVADC_G0_ICLASS0)

/** \brief 4A4, Input Class Register 1, Group 0 */
#define EVADC_G0_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00204A4u)
/** Alias (User Manual Name) for EVADC_G0_ICLASS1.
* To use register names with standard convension, please use EVADC_G0_ICLASS1.
*/
#define EVADC_G0ICLASS1 (EVADC_G0_ICLASS1)

/** \brief 4B0, Alias Register, Group 0 */
#define EVADC_G0_ALIAS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ALIAS*)0xF00204B0u)
/** Alias (User Manual Name) for EVADC_G0_ALIAS.
* To use register names with standard convension, please use EVADC_G0_ALIAS.
*/
#define EVADC_G0ALIAS (EVADC_G0_ALIAS)

/** \brief 4B8, Boundary Select Register, Group 0 */
#define EVADC_G0_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_BOUND*)0xF00204B8u)
/** Alias (User Manual Name) for EVADC_G0_BOUND.
* To use register names with standard convension, please use EVADC_G0_BOUND.
*/
#define EVADC_G0BOUND (EVADC_G0_BOUND)

/** \brief 4C0, Synchronization Control Register, Group 0 */
#define EVADC_G0_SYNCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SYNCTR*)0xF00204C0u)
/** Alias (User Manual Name) for EVADC_G0_SYNCTR.
* To use register names with standard convension, please use EVADC_G0_SYNCTR.
*/
#define EVADC_G0SYNCTR (EVADC_G0_SYNCTR)

/** \brief 500, Queue 0 Source Contr. Register, Group 0 */
#define EVADC_G0_Q0_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020500u)
/** Alias (User Manual Name) for EVADC_G0_Q0_QCTRL.
* To use register names with standard convension, please use EVADC_G0_Q0_QCTRL.
*/
#define EVADC_G0QCTRL0 (EVADC_G0_Q0_QCTRL)

/** \brief 504, Queue 0 Mode Register, Group 0 */
#define EVADC_G0_Q0_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020504u)
/** Alias (User Manual Name) for EVADC_G0_Q0_QMR.
* To use register names with standard convension, please use EVADC_G0_Q0_QMR.
*/
#define EVADC_G0QMR0 (EVADC_G0_Q0_QMR)

/** \brief 508, Queue 0 Status Register, Group 0 */
#define EVADC_G0_Q0_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020508u)
/** Alias (User Manual Name) for EVADC_G0_Q0_QSR.
* To use register names with standard convension, please use EVADC_G0_Q0_QSR.
*/
#define EVADC_G0QSR0 (EVADC_G0_Q0_QSR)

/** \brief 50C, Queue 0 Register 0, Group 0 */
#define EVADC_G0_Q0_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002050Cu)
/** Alias (User Manual Name) for EVADC_G0_Q0_Q0R.
* To use register names with standard convension, please use EVADC_G0_Q0_Q0R.
*/
#define EVADC_G0Q0R0 (EVADC_G0_Q0_Q0R)

/** \brief 510, Queue 0 Input Register, Group 0 */
#define EVADC_G0_Q0_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020510u)
/** Alias (User Manual Name) for EVADC_G0_Q0_QINR.
* To use register names with standard convension, please use EVADC_G0_Q0_QINR.
*/
#define EVADC_G0QINR0 (EVADC_G0_Q0_QINR)

/** \brief 514, Queue 0 Backup Register, Group 0 */
#define EVADC_G0_Q0_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020514u)
/** Alias (User Manual Name) for EVADC_G0_Q0_QBUR.
* To use register names with standard convension, please use EVADC_G0_Q0_QBUR.
*/
#define EVADC_G0QBUR0 (EVADC_G0_Q0_QBUR)

/** \brief 518, Queue 0 Requ. Timer Mode Reg., Group 0 */
#define EVADC_G0_Q0_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020518u)
/** Alias (User Manual Name) for EVADC_G0_Q0_REQTM.
* To use register names with standard convension, please use EVADC_G0_Q0_REQTM.
*/
#define EVADC_G0REQTM0 (EVADC_G0_Q0_REQTM)

/** \brief 51C, Queue 0 Requ. Timer Status Reg., Group 0 */
#define EVADC_G0_Q0_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002051Cu)
/** Alias (User Manual Name) for EVADC_G0_Q0_REQTS.
* To use register names with standard convension, please use EVADC_G0_Q0_REQTS.
*/
#define EVADC_G0REQTS0 (EVADC_G0_Q0_REQTS)

/** \brief 520, Queue 1 Source Contr. Register, Group 0 */
#define EVADC_G0_Q1_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020520u)
/** Alias (User Manual Name) for EVADC_G0_Q1_QCTRL.
* To use register names with standard convension, please use EVADC_G0_Q1_QCTRL.
*/
#define EVADC_G0QCTRL1 (EVADC_G0_Q1_QCTRL)

/** \brief 524, Queue 1 Mode Register, Group 0 */
#define EVADC_G0_Q1_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020524u)
/** Alias (User Manual Name) for EVADC_G0_Q1_QMR.
* To use register names with standard convension, please use EVADC_G0_Q1_QMR.
*/
#define EVADC_G0QMR1 (EVADC_G0_Q1_QMR)

/** \brief 528, Queue 1 Status Register, Group 0 */
#define EVADC_G0_Q1_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020528u)
/** Alias (User Manual Name) for EVADC_G0_Q1_QSR.
* To use register names with standard convension, please use EVADC_G0_Q1_QSR.
*/
#define EVADC_G0QSR1 (EVADC_G0_Q1_QSR)

/** \brief 52C, Queue 1 Register 0, Group 0 */
#define EVADC_G0_Q1_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002052Cu)
/** Alias (User Manual Name) for EVADC_G0_Q1_Q0R.
* To use register names with standard convension, please use EVADC_G0_Q1_Q0R.
*/
#define EVADC_G0Q0R1 (EVADC_G0_Q1_Q0R)

/** \brief 530, Queue 1 Input Register, Group 0 */
#define EVADC_G0_Q1_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020530u)
/** Alias (User Manual Name) for EVADC_G0_Q1_QINR.
* To use register names with standard convension, please use EVADC_G0_Q1_QINR.
*/
#define EVADC_G0QINR1 (EVADC_G0_Q1_QINR)

/** \brief 534, Queue 1 Backup Register, Group 0 */
#define EVADC_G0_Q1_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020534u)
/** Alias (User Manual Name) for EVADC_G0_Q1_QBUR.
* To use register names with standard convension, please use EVADC_G0_Q1_QBUR.
*/
#define EVADC_G0QBUR1 (EVADC_G0_Q1_QBUR)

/** \brief 538, Queue 1 Requ. Timer Mode Reg., Group 0 */
#define EVADC_G0_Q1_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020538u)
/** Alias (User Manual Name) for EVADC_G0_Q1_REQTM.
* To use register names with standard convension, please use EVADC_G0_Q1_REQTM.
*/
#define EVADC_G0REQTM1 (EVADC_G0_Q1_REQTM)

/** \brief 53C, Queue 1 Requ. Timer Status Reg., Group 0 */
#define EVADC_G0_Q1_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002053Cu)
/** Alias (User Manual Name) for EVADC_G0_Q1_REQTS.
* To use register names with standard convension, please use EVADC_G0_Q1_REQTS.
*/
#define EVADC_G0REQTS1 (EVADC_G0_Q1_REQTS)

/** \brief 540, Queue 2 Source Contr. Register, Group 0 */
#define EVADC_G0_Q2_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020540u)
/** Alias (User Manual Name) for EVADC_G0_Q2_QCTRL.
* To use register names with standard convension, please use EVADC_G0_Q2_QCTRL.
*/
#define EVADC_G0QCTRL2 (EVADC_G0_Q2_QCTRL)

/** \brief 544, Queue 2 Mode Register, Group 0 */
#define EVADC_G0_Q2_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020544u)
/** Alias (User Manual Name) for EVADC_G0_Q2_QMR.
* To use register names with standard convension, please use EVADC_G0_Q2_QMR.
*/
#define EVADC_G0QMR2 (EVADC_G0_Q2_QMR)

/** \brief 548, Queue 2 Status Register, Group 0 */
#define EVADC_G0_Q2_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020548u)
/** Alias (User Manual Name) for EVADC_G0_Q2_QSR.
* To use register names with standard convension, please use EVADC_G0_Q2_QSR.
*/
#define EVADC_G0QSR2 (EVADC_G0_Q2_QSR)

/** \brief 54C, Queue 2 Register 0, Group 0 */
#define EVADC_G0_Q2_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002054Cu)
/** Alias (User Manual Name) for EVADC_G0_Q2_Q0R.
* To use register names with standard convension, please use EVADC_G0_Q2_Q0R.
*/
#define EVADC_G0Q0R2 (EVADC_G0_Q2_Q0R)

/** \brief 550, Queue 2 Input Register, Group 0 */
#define EVADC_G0_Q2_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020550u)
/** Alias (User Manual Name) for EVADC_G0_Q2_QINR.
* To use register names with standard convension, please use EVADC_G0_Q2_QINR.
*/
#define EVADC_G0QINR2 (EVADC_G0_Q2_QINR)

/** \brief 554, Queue 2 Backup Register, Group 0 */
#define EVADC_G0_Q2_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020554u)
/** Alias (User Manual Name) for EVADC_G0_Q2_QBUR.
* To use register names with standard convension, please use EVADC_G0_Q2_QBUR.
*/
#define EVADC_G0QBUR2 (EVADC_G0_Q2_QBUR)

/** \brief 558, Queue 2 Requ. Timer Mode Reg., Group 0 */
#define EVADC_G0_Q2_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020558u)
/** Alias (User Manual Name) for EVADC_G0_Q2_REQTM.
* To use register names with standard convension, please use EVADC_G0_Q2_REQTM.
*/
#define EVADC_G0REQTM2 (EVADC_G0_Q2_REQTM)

/** \brief 55C, Queue 2 Requ. Timer Status Reg., Group 0 */
#define EVADC_G0_Q2_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002055Cu)
/** Alias (User Manual Name) for EVADC_G0_Q2_REQTS.
* To use register names with standard convension, please use EVADC_G0_Q2_REQTS.
*/
#define EVADC_G0REQTS2 (EVADC_G0_Q2_REQTS)

/** \brief 580, Channel Event Flag Register, Group 0 */
#define EVADC_G0_CEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFLAG*)0xF0020580u)
/** Alias (User Manual Name) for EVADC_G0_CEFLAG.
* To use register names with standard convension, please use EVADC_G0_CEFLAG.
*/
#define EVADC_G0CEFLAG (EVADC_G0_CEFLAG)

/** \brief 584, Result Event Flag Register, Group 0 */
#define EVADC_G0_REFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFLAG*)0xF0020584u)
/** Alias (User Manual Name) for EVADC_G0_REFLAG.
* To use register names with standard convension, please use EVADC_G0_REFLAG.
*/
#define EVADC_G0REFLAG (EVADC_G0_REFLAG)

/** \brief 588, Source Event Flag Register, Group 0 */
#define EVADC_G0_SEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFLAG*)0xF0020588u)
/** Alias (User Manual Name) for EVADC_G0_SEFLAG.
* To use register names with standard convension, please use EVADC_G0_SEFLAG.
*/
#define EVADC_G0SEFLAG (EVADC_G0_SEFLAG)

/** \brief 590, Channel Event Flag Clear Register, Group 0 */
#define EVADC_G0_CEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFCLR*)0xF0020590u)
/** Alias (User Manual Name) for EVADC_G0_CEFCLR.
* To use register names with standard convension, please use EVADC_G0_CEFCLR.
*/
#define EVADC_G0CEFCLR (EVADC_G0_CEFCLR)

/** \brief 594, Result Event Flag Clear Register, Group 0 */
#define EVADC_G0_REFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFCLR*)0xF0020594u)
/** Alias (User Manual Name) for EVADC_G0_REFCLR.
* To use register names with standard convension, please use EVADC_G0_REFCLR.
*/
#define EVADC_G0REFCLR (EVADC_G0_REFCLR)

/** \brief 598, Source Event Flag Clear Reg., Group 0 */
#define EVADC_G0_SEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFCLR*)0xF0020598u)
/** Alias (User Manual Name) for EVADC_G0_SEFCLR.
* To use register names with standard convension, please use EVADC_G0_SEFCLR.
*/
#define EVADC_G0SEFCLR (EVADC_G0_SEFCLR)

/** \brief 5A0, Channel Event Node Pointer Reg. 0, Group 0 */
#define EVADC_G0_CEVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP0*)0xF00205A0u)
/** Alias (User Manual Name) for EVADC_G0_CEVNP0.
* To use register names with standard convension, please use EVADC_G0_CEVNP0.
*/
#define EVADC_G0CEVNP0 (EVADC_G0_CEVNP0)

/** \brief 5A4, Channel Event Node Pointer Reg. 1, Group 0 */
#define EVADC_G0_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00205A4u)
/** Alias (User Manual Name) for EVADC_G0_CEVNP1.
* To use register names with standard convension, please use EVADC_G0_CEVNP1.
*/
#define EVADC_G0CEVNP1 (EVADC_G0_CEVNP1)

/** \brief 5B0, Result Event Node Pointer Reg. 0, Group 0 */
#define EVADC_G0_REVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP0*)0xF00205B0u)
/** Alias (User Manual Name) for EVADC_G0_REVNP0.
* To use register names with standard convension, please use EVADC_G0_REVNP0.
*/
#define EVADC_G0REVNP0 (EVADC_G0_REVNP0)

/** \brief 5B4, Result Event Node Pointer Reg. 1, Group 0 */
#define EVADC_G0_REVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP1*)0xF00205B4u)
/** Alias (User Manual Name) for EVADC_G0_REVNP1.
* To use register names with standard convension, please use EVADC_G0_REVNP1.
*/
#define EVADC_G0REVNP1 (EVADC_G0_REVNP1)

/** \brief 5C0, Source Event Node Pointer Reg., Group 0 */
#define EVADC_G0_SEVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEVNP*)0xF00205C0u)
/** Alias (User Manual Name) for EVADC_G0_SEVNP.
* To use register names with standard convension, please use EVADC_G0_SEVNP.
*/
#define EVADC_G0SEVNP (EVADC_G0_SEVNP)

/** \brief 5C8, Service Request Software Activation Trigger, Group 0 */
#define EVADC_G0_SRACT /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SRACT*)0xF00205C8u)
/** Alias (User Manual Name) for EVADC_G0_SRACT.
* To use register names with standard convension, please use EVADC_G0_SRACT.
*/
#define EVADC_G0SRACT (EVADC_G0_SRACT)

/** \brief 5F0, External Multiplexer Control Reg., Group 0 */
#define EVADC_G0_EMUXCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCTR*)0xF00205F0u)
/** Alias (User Manual Name) for EVADC_G0_EMUXCTR.
* To use register names with standard convension, please use EVADC_G0_EMUXCTR.
*/
#define EVADC_G0EMUXCTR (EVADC_G0_EMUXCTR)

/** \brief 5F4, Ext. Multiplexer Channel Select Reg., Group 0 */
#define EVADC_G0_EMUXCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCS*)0xF00205F4u)
/** Alias (User Manual Name) for EVADC_G0_EMUXCS.
* To use register names with standard convension, please use EVADC_G0_EMUXCS.
*/
#define EVADC_G0EMUXCS (EVADC_G0_EMUXCS)

/** \brief 5F8, Valid Flag Register, Group 0 */
#define EVADC_G0_VFR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_VFR*)0xF00205F8u)
/** Alias (User Manual Name) for EVADC_G0_VFR.
* To use register names with standard convension, please use EVADC_G0_VFR.
*/
#define EVADC_G0VFR (EVADC_G0_VFR)

/** \brief 600, Group 0, Channel 0 Control Register */
#define EVADC_G0_CHCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020600u)
/** Alias (User Manual Name) for EVADC_G0_CHCTR0.
* To use register names with standard convension, please use EVADC_G0_CHCTR0.
*/
#define EVADC_G0CHCTR0 (EVADC_G0_CHCTR0)

/** \brief 604, Group 0, Channel 1 Control Register */
#define EVADC_G0_CHCTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020604u)
/** Alias (User Manual Name) for EVADC_G0_CHCTR1.
* To use register names with standard convension, please use EVADC_G0_CHCTR1.
*/
#define EVADC_G0CHCTR1 (EVADC_G0_CHCTR1)

/** \brief 608, Group 0, Channel 2 Control Register */
#define EVADC_G0_CHCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020608u)
/** Alias (User Manual Name) for EVADC_G0_CHCTR2.
* To use register names with standard convension, please use EVADC_G0_CHCTR2.
*/
#define EVADC_G0CHCTR2 (EVADC_G0_CHCTR2)

/** \brief 60C, Group 0, Channel 3 Control Register */
#define EVADC_G0_CHCTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002060Cu)
/** Alias (User Manual Name) for EVADC_G0_CHCTR3.
* To use register names with standard convension, please use EVADC_G0_CHCTR3.
*/
#define EVADC_G0CHCTR3 (EVADC_G0_CHCTR3)

/** \brief 610, Group 0, Channel 4 Control Register */
#define EVADC_G0_CHCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020610u)
/** Alias (User Manual Name) for EVADC_G0_CHCTR4.
* To use register names with standard convension, please use EVADC_G0_CHCTR4.
*/
#define EVADC_G0CHCTR4 (EVADC_G0_CHCTR4)

/** \brief 614, Group 0, Channel 5 Control Register */
#define EVADC_G0_CHCTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020614u)
/** Alias (User Manual Name) for EVADC_G0_CHCTR5.
* To use register names with standard convension, please use EVADC_G0_CHCTR5.
*/
#define EVADC_G0CHCTR5 (EVADC_G0_CHCTR5)

/** \brief 618, Group 0, Channel 6 Control Register */
#define EVADC_G0_CHCTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020618u)
/** Alias (User Manual Name) for EVADC_G0_CHCTR6.
* To use register names with standard convension, please use EVADC_G0_CHCTR6.
*/
#define EVADC_G0CHCTR6 (EVADC_G0_CHCTR6)

/** \brief 61C, Group 0, Channel 7 Control Register */
#define EVADC_G0_CHCTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002061Cu)
/** Alias (User Manual Name) for EVADC_G0_CHCTR7.
* To use register names with standard convension, please use EVADC_G0_CHCTR7.
*/
#define EVADC_G0CHCTR7 (EVADC_G0_CHCTR7)

/** \brief 680, Group 0 Result Control Register 0 */
#define EVADC_G0_RCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020680u)
/** Alias (User Manual Name) for EVADC_G0_RCR0.
* To use register names with standard convension, please use EVADC_G0_RCR0.
*/
#define EVADC_G0RCR0 (EVADC_G0_RCR0)

/** \brief 684, Group 0 Result Control Register 1 */
#define EVADC_G0_RCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020684u)
/** Alias (User Manual Name) for EVADC_G0_RCR1.
* To use register names with standard convension, please use EVADC_G0_RCR1.
*/
#define EVADC_G0RCR1 (EVADC_G0_RCR1)

/** \brief 688, Group 0 Result Control Register 2 */
#define EVADC_G0_RCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020688u)
/** Alias (User Manual Name) for EVADC_G0_RCR2.
* To use register names with standard convension, please use EVADC_G0_RCR2.
*/
#define EVADC_G0RCR2 (EVADC_G0_RCR2)

/** \brief 68C, Group 0 Result Control Register 3 */
#define EVADC_G0_RCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF002068Cu)
/** Alias (User Manual Name) for EVADC_G0_RCR3.
* To use register names with standard convension, please use EVADC_G0_RCR3.
*/
#define EVADC_G0RCR3 (EVADC_G0_RCR3)

/** \brief 690, Group 0 Result Control Register 4 */
#define EVADC_G0_RCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020690u)
/** Alias (User Manual Name) for EVADC_G0_RCR4.
* To use register names with standard convension, please use EVADC_G0_RCR4.
*/
#define EVADC_G0RCR4 (EVADC_G0_RCR4)

/** \brief 694, Group 0 Result Control Register 5 */
#define EVADC_G0_RCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020694u)
/** Alias (User Manual Name) for EVADC_G0_RCR5.
* To use register names with standard convension, please use EVADC_G0_RCR5.
*/
#define EVADC_G0RCR5 (EVADC_G0_RCR5)

/** \brief 698, Group 0 Result Control Register 6 */
#define EVADC_G0_RCR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020698u)
/** Alias (User Manual Name) for EVADC_G0_RCR6.
* To use register names with standard convension, please use EVADC_G0_RCR6.
*/
#define EVADC_G0RCR6 (EVADC_G0_RCR6)

/** \brief 69C, Group 0 Result Control Register 7 */
#define EVADC_G0_RCR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF002069Cu)
/** Alias (User Manual Name) for EVADC_G0_RCR7.
* To use register names with standard convension, please use EVADC_G0_RCR7.
*/
#define EVADC_G0RCR7 (EVADC_G0_RCR7)

/** \brief 6A0, Group 0 Result Control Register 8 */
#define EVADC_G0_RCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00206A0u)
/** Alias (User Manual Name) for EVADC_G0_RCR8.
* To use register names with standard convension, please use EVADC_G0_RCR8.
*/
#define EVADC_G0RCR8 (EVADC_G0_RCR8)

/** \brief 6A4, Group 0 Result Control Register 9 */
#define EVADC_G0_RCR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00206A4u)
/** Alias (User Manual Name) for EVADC_G0_RCR9.
* To use register names with standard convension, please use EVADC_G0_RCR9.
*/
#define EVADC_G0RCR9 (EVADC_G0_RCR9)

/** \brief 6A8, Group 0 Result Control Register 10 */
#define EVADC_G0_RCR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00206A8u)
/** Alias (User Manual Name) for EVADC_G0_RCR10.
* To use register names with standard convension, please use EVADC_G0_RCR10.
*/
#define EVADC_G0RCR10 (EVADC_G0_RCR10)

/** \brief 6AC, Group 0 Result Control Register 11 */
#define EVADC_G0_RCR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00206ACu)
/** Alias (User Manual Name) for EVADC_G0_RCR11.
* To use register names with standard convension, please use EVADC_G0_RCR11.
*/
#define EVADC_G0RCR11 (EVADC_G0_RCR11)

/** \brief 6B0, Group 0 Result Control Register 12 */
#define EVADC_G0_RCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00206B0u)
/** Alias (User Manual Name) for EVADC_G0_RCR12.
* To use register names with standard convension, please use EVADC_G0_RCR12.
*/
#define EVADC_G0RCR12 (EVADC_G0_RCR12)

/** \brief 6B4, Group 0 Result Control Register 13 */
#define EVADC_G0_RCR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00206B4u)
/** Alias (User Manual Name) for EVADC_G0_RCR13.
* To use register names with standard convension, please use EVADC_G0_RCR13.
*/
#define EVADC_G0RCR13 (EVADC_G0_RCR13)

/** \brief 6B8, Group 0 Result Control Register 14 */
#define EVADC_G0_RCR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00206B8u)
/** Alias (User Manual Name) for EVADC_G0_RCR14.
* To use register names with standard convension, please use EVADC_G0_RCR14.
*/
#define EVADC_G0RCR14 (EVADC_G0_RCR14)

/** \brief 6BC, Group 0 Result Control Register 15 */
#define EVADC_G0_RCR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00206BCu)
/** Alias (User Manual Name) for EVADC_G0_RCR15.
* To use register names with standard convension, please use EVADC_G0_RCR15.
*/
#define EVADC_G0RCR15 (EVADC_G0_RCR15)

/** \brief 700, Group 0 Result Register 0\n */
#define EVADC_G0_RES0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020700u)
/** Alias (User Manual Name) for EVADC_G0_RES0.
* To use register names with standard convension, please use EVADC_G0_RES0.
*/
#define EVADC_G0RES0 (EVADC_G0_RES0)

/** \brief 704, Group 0 Result Register 1\n */
#define EVADC_G0_RES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020704u)
/** Alias (User Manual Name) for EVADC_G0_RES1.
* To use register names with standard convension, please use EVADC_G0_RES1.
*/
#define EVADC_G0RES1 (EVADC_G0_RES1)

/** \brief 708, Group 0 Result Register 2\n */
#define EVADC_G0_RES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020708u)
/** Alias (User Manual Name) for EVADC_G0_RES2.
* To use register names with standard convension, please use EVADC_G0_RES2.
*/
#define EVADC_G0RES2 (EVADC_G0_RES2)

/** \brief 70C, Group 0 Result Register 3\n */
#define EVADC_G0_RES3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002070Cu)
/** Alias (User Manual Name) for EVADC_G0_RES3.
* To use register names with standard convension, please use EVADC_G0_RES3.
*/
#define EVADC_G0RES3 (EVADC_G0_RES3)

/** \brief 710, Group 0 Result Register 4\n */
#define EVADC_G0_RES4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020710u)
/** Alias (User Manual Name) for EVADC_G0_RES4.
* To use register names with standard convension, please use EVADC_G0_RES4.
*/
#define EVADC_G0RES4 (EVADC_G0_RES4)

/** \brief 714, Group 0 Result Register 5\n */
#define EVADC_G0_RES5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020714u)
/** Alias (User Manual Name) for EVADC_G0_RES5.
* To use register names with standard convension, please use EVADC_G0_RES5.
*/
#define EVADC_G0RES5 (EVADC_G0_RES5)

/** \brief 718, Group 0 Result Register 6\n */
#define EVADC_G0_RES6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020718u)
/** Alias (User Manual Name) for EVADC_G0_RES6.
* To use register names with standard convension, please use EVADC_G0_RES6.
*/
#define EVADC_G0RES6 (EVADC_G0_RES6)

/** \brief 71C, Group 0 Result Register 7\n */
#define EVADC_G0_RES7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002071Cu)
/** Alias (User Manual Name) for EVADC_G0_RES7.
* To use register names with standard convension, please use EVADC_G0_RES7.
*/
#define EVADC_G0RES7 (EVADC_G0_RES7)

/** \brief 720, Group 0 Result Register 8\n */
#define EVADC_G0_RES8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020720u)
/** Alias (User Manual Name) for EVADC_G0_RES8.
* To use register names with standard convension, please use EVADC_G0_RES8.
*/
#define EVADC_G0RES8 (EVADC_G0_RES8)

/** \brief 724, Group 0 Result Register 9\n */
#define EVADC_G0_RES9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020724u)
/** Alias (User Manual Name) for EVADC_G0_RES9.
* To use register names with standard convension, please use EVADC_G0_RES9.
*/
#define EVADC_G0RES9 (EVADC_G0_RES9)

/** \brief 728, Group 0 Result Register 10\n */
#define EVADC_G0_RES10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020728u)
/** Alias (User Manual Name) for EVADC_G0_RES10.
* To use register names with standard convension, please use EVADC_G0_RES10.
*/
#define EVADC_G0RES10 (EVADC_G0_RES10)

/** \brief 72C, Group 0 Result Register 11\n */
#define EVADC_G0_RES11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002072Cu)
/** Alias (User Manual Name) for EVADC_G0_RES11.
* To use register names with standard convension, please use EVADC_G0_RES11.
*/
#define EVADC_G0RES11 (EVADC_G0_RES11)

/** \brief 730, Group 0 Result Register 12\n */
#define EVADC_G0_RES12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020730u)
/** Alias (User Manual Name) for EVADC_G0_RES12.
* To use register names with standard convension, please use EVADC_G0_RES12.
*/
#define EVADC_G0RES12 (EVADC_G0_RES12)

/** \brief 734, Group 0 Result Register 13\n */
#define EVADC_G0_RES13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020734u)
/** Alias (User Manual Name) for EVADC_G0_RES13.
* To use register names with standard convension, please use EVADC_G0_RES13.
*/
#define EVADC_G0RES13 (EVADC_G0_RES13)

/** \brief 738, Group 0 Result Register 14\n */
#define EVADC_G0_RES14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020738u)
/** Alias (User Manual Name) for EVADC_G0_RES14.
* To use register names with standard convension, please use EVADC_G0_RES14.
*/
#define EVADC_G0RES14 (EVADC_G0_RES14)

/** \brief 73C, Group 0 Result Register 15\n */
#define EVADC_G0_RES15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002073Cu)
/** Alias (User Manual Name) for EVADC_G0_RES15.
* To use register names with standard convension, please use EVADC_G0_RES15.
*/
#define EVADC_G0RES15 (EVADC_G0_RES15)

/** \brief 780, Group 0 Result Reg. 0, Debug */
#define EVADC_G0_RESD0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020780u)
/** Alias (User Manual Name) for EVADC_G0_RESD0.
* To use register names with standard convension, please use EVADC_G0_RESD0.
*/
#define EVADC_G0RESD0 (EVADC_G0_RESD0)

/** \brief 784, Group 0 Result Reg. 1, Debug */
#define EVADC_G0_RESD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020784u)
/** Alias (User Manual Name) for EVADC_G0_RESD1.
* To use register names with standard convension, please use EVADC_G0_RESD1.
*/
#define EVADC_G0RESD1 (EVADC_G0_RESD1)

/** \brief 788, Group 0 Result Reg. 2, Debug */
#define EVADC_G0_RESD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020788u)
/** Alias (User Manual Name) for EVADC_G0_RESD2.
* To use register names with standard convension, please use EVADC_G0_RESD2.
*/
#define EVADC_G0RESD2 (EVADC_G0_RESD2)

/** \brief 78C, Group 0 Result Reg. 3, Debug */
#define EVADC_G0_RESD3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF002078Cu)
/** Alias (User Manual Name) for EVADC_G0_RESD3.
* To use register names with standard convension, please use EVADC_G0_RESD3.
*/
#define EVADC_G0RESD3 (EVADC_G0_RESD3)

/** \brief 790, Group 0 Result Reg. 4, Debug */
#define EVADC_G0_RESD4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020790u)
/** Alias (User Manual Name) for EVADC_G0_RESD4.
* To use register names with standard convension, please use EVADC_G0_RESD4.
*/
#define EVADC_G0RESD4 (EVADC_G0_RESD4)

/** \brief 794, Group 0 Result Reg. 5, Debug */
#define EVADC_G0_RESD5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020794u)
/** Alias (User Manual Name) for EVADC_G0_RESD5.
* To use register names with standard convension, please use EVADC_G0_RESD5.
*/
#define EVADC_G0RESD5 (EVADC_G0_RESD5)

/** \brief 798, Group 0 Result Reg. 6, Debug */
#define EVADC_G0_RESD6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020798u)
/** Alias (User Manual Name) for EVADC_G0_RESD6.
* To use register names with standard convension, please use EVADC_G0_RESD6.
*/
#define EVADC_G0RESD6 (EVADC_G0_RESD6)

/** \brief 79C, Group 0 Result Reg. 7, Debug */
#define EVADC_G0_RESD7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF002079Cu)
/** Alias (User Manual Name) for EVADC_G0_RESD7.
* To use register names with standard convension, please use EVADC_G0_RESD7.
*/
#define EVADC_G0RESD7 (EVADC_G0_RESD7)

/** \brief 7A0, Group 0 Result Reg. 8, Debug */
#define EVADC_G0_RESD8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00207A0u)
/** Alias (User Manual Name) for EVADC_G0_RESD8.
* To use register names with standard convension, please use EVADC_G0_RESD8.
*/
#define EVADC_G0RESD8 (EVADC_G0_RESD8)

/** \brief 7A4, Group 0 Result Reg. 9, Debug */
#define EVADC_G0_RESD9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00207A4u)
/** Alias (User Manual Name) for EVADC_G0_RESD9.
* To use register names with standard convension, please use EVADC_G0_RESD9.
*/
#define EVADC_G0RESD9 (EVADC_G0_RESD9)

/** \brief 7A8, Group 0 Result Reg. 10, Debug */
#define EVADC_G0_RESD10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00207A8u)
/** Alias (User Manual Name) for EVADC_G0_RESD10.
* To use register names with standard convension, please use EVADC_G0_RESD10.
*/
#define EVADC_G0RESD10 (EVADC_G0_RESD10)

/** \brief 7AC, Group 0 Result Reg. 11, Debug */
#define EVADC_G0_RESD11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00207ACu)
/** Alias (User Manual Name) for EVADC_G0_RESD11.
* To use register names with standard convension, please use EVADC_G0_RESD11.
*/
#define EVADC_G0RESD11 (EVADC_G0_RESD11)

/** \brief 7B0, Group 0 Result Reg. 12, Debug */
#define EVADC_G0_RESD12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00207B0u)
/** Alias (User Manual Name) for EVADC_G0_RESD12.
* To use register names with standard convension, please use EVADC_G0_RESD12.
*/
#define EVADC_G0RESD12 (EVADC_G0_RESD12)

/** \brief 7B4, Group 0 Result Reg. 13, Debug */
#define EVADC_G0_RESD13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00207B4u)
/** Alias (User Manual Name) for EVADC_G0_RESD13.
* To use register names with standard convension, please use EVADC_G0_RESD13.
*/
#define EVADC_G0RESD13 (EVADC_G0_RESD13)

/** \brief 7B8, Group 0 Result Reg. 14, Debug */
#define EVADC_G0_RESD14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00207B8u)
/** Alias (User Manual Name) for EVADC_G0_RESD14.
* To use register names with standard convension, please use EVADC_G0_RESD14.
*/
#define EVADC_G0RESD14 (EVADC_G0_RESD14)

/** \brief 7BC, Group 0 Result Reg. 15, Debug */
#define EVADC_G0_RESD15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00207BCu)
/** Alias (User Manual Name) for EVADC_G0_RESD15.
* To use register names with standard convension, please use EVADC_G0_RESD15.
*/
#define EVADC_G0RESD15 (EVADC_G0_RESD15)

/** \brief 810, Trigger Control Register, Group 1 */
#define EVADC_G1_TRCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_TRCTR*)0xF0020810u)
/** Alias (User Manual Name) for EVADC_G1_TRCTR.
* To use register names with standard convension, please use EVADC_G1_TRCTR.
*/
#define EVADC_G1TRCTR (EVADC_G1_TRCTR)

/** \brief 880, Arbitration Config. Register, Group 1 */
#define EVADC_G1_ARBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBCFG*)0xF0020880u)
/** Alias (User Manual Name) for EVADC_G1_ARBCFG.
* To use register names with standard convension, please use EVADC_G1_ARBCFG.
*/
#define EVADC_G1ARBCFG (EVADC_G1_ARBCFG)

/** \brief 884, Arbitration Priority Register, Group 1 */
#define EVADC_G1_ARBPR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBPR*)0xF0020884u)
/** Alias (User Manual Name) for EVADC_G1_ARBPR.
* To use register names with standard convension, please use EVADC_G1_ARBPR.
*/
#define EVADC_G1ARBPR (EVADC_G1_ARBPR)

/** \brief 888, Analog Fct. Config. Register, Group 1 */
#define EVADC_G1_ANCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ANCFG*)0xF0020888u)
/** Alias (User Manual Name) for EVADC_G1_ANCFG.
* To use register names with standard convension, please use EVADC_G1_ANCFG.
*/
#define EVADC_G1ANCFG (EVADC_G1_ANCFG)

/** \brief 8A0, Input Class Register 0, Group 1 */
#define EVADC_G1_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00208A0u)
/** Alias (User Manual Name) for EVADC_G1_ICLASS0.
* To use register names with standard convension, please use EVADC_G1_ICLASS0.
*/
#define EVADC_G1ICLASS0 (EVADC_G1_ICLASS0)

/** \brief 8A4, Input Class Register 1, Group 1 */
#define EVADC_G1_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00208A4u)
/** Alias (User Manual Name) for EVADC_G1_ICLASS1.
* To use register names with standard convension, please use EVADC_G1_ICLASS1.
*/
#define EVADC_G1ICLASS1 (EVADC_G1_ICLASS1)

/** \brief 8B0, Alias Register, Group 1 */
#define EVADC_G1_ALIAS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ALIAS*)0xF00208B0u)
/** Alias (User Manual Name) for EVADC_G1_ALIAS.
* To use register names with standard convension, please use EVADC_G1_ALIAS.
*/
#define EVADC_G1ALIAS (EVADC_G1_ALIAS)

/** \brief 8B8, Boundary Select Register, Group 1 */
#define EVADC_G1_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_BOUND*)0xF00208B8u)
/** Alias (User Manual Name) for EVADC_G1_BOUND.
* To use register names with standard convension, please use EVADC_G1_BOUND.
*/
#define EVADC_G1BOUND (EVADC_G1_BOUND)

/** \brief 8C0, Synchronization Control Register, Group 1 */
#define EVADC_G1_SYNCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SYNCTR*)0xF00208C0u)
/** Alias (User Manual Name) for EVADC_G1_SYNCTR.
* To use register names with standard convension, please use EVADC_G1_SYNCTR.
*/
#define EVADC_G1SYNCTR (EVADC_G1_SYNCTR)

/** \brief 900, Queue 0 Source Contr. Register, Group 1 */
#define EVADC_G1_Q0_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020900u)
/** Alias (User Manual Name) for EVADC_G1_Q0_QCTRL.
* To use register names with standard convension, please use EVADC_G1_Q0_QCTRL.
*/
#define EVADC_G1QCTRL0 (EVADC_G1_Q0_QCTRL)

/** \brief 904, Queue 0 Mode Register, Group 1 */
#define EVADC_G1_Q0_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020904u)
/** Alias (User Manual Name) for EVADC_G1_Q0_QMR.
* To use register names with standard convension, please use EVADC_G1_Q0_QMR.
*/
#define EVADC_G1QMR0 (EVADC_G1_Q0_QMR)

/** \brief 908, Queue 0 Status Register, Group 1 */
#define EVADC_G1_Q0_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020908u)
/** Alias (User Manual Name) for EVADC_G1_Q0_QSR.
* To use register names with standard convension, please use EVADC_G1_Q0_QSR.
*/
#define EVADC_G1QSR0 (EVADC_G1_Q0_QSR)

/** \brief 90C, Queue 0 Register 0, Group 1 */
#define EVADC_G1_Q0_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002090Cu)
/** Alias (User Manual Name) for EVADC_G1_Q0_Q0R.
* To use register names with standard convension, please use EVADC_G1_Q0_Q0R.
*/
#define EVADC_G1Q0R0 (EVADC_G1_Q0_Q0R)

/** \brief 910, Queue 0 Input Register, Group 1 */
#define EVADC_G1_Q0_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020910u)
/** Alias (User Manual Name) for EVADC_G1_Q0_QINR.
* To use register names with standard convension, please use EVADC_G1_Q0_QINR.
*/
#define EVADC_G1QINR0 (EVADC_G1_Q0_QINR)

/** \brief 914, Queue 0 Backup Register, Group 1 */
#define EVADC_G1_Q0_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020914u)
/** Alias (User Manual Name) for EVADC_G1_Q0_QBUR.
* To use register names with standard convension, please use EVADC_G1_Q0_QBUR.
*/
#define EVADC_G1QBUR0 (EVADC_G1_Q0_QBUR)

/** \brief 918, Queue 0 Requ. Timer Mode Reg., Group 1 */
#define EVADC_G1_Q0_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020918u)
/** Alias (User Manual Name) for EVADC_G1_Q0_REQTM.
* To use register names with standard convension, please use EVADC_G1_Q0_REQTM.
*/
#define EVADC_G1REQTM0 (EVADC_G1_Q0_REQTM)

/** \brief 91C, Queue 0 Requ. Timer Status Reg., Group 1 */
#define EVADC_G1_Q0_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002091Cu)
/** Alias (User Manual Name) for EVADC_G1_Q0_REQTS.
* To use register names with standard convension, please use EVADC_G1_Q0_REQTS.
*/
#define EVADC_G1REQTS0 (EVADC_G1_Q0_REQTS)

/** \brief 920, Queue 1 Source Contr. Register, Group 1 */
#define EVADC_G1_Q1_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020920u)
/** Alias (User Manual Name) for EVADC_G1_Q1_QCTRL.
* To use register names with standard convension, please use EVADC_G1_Q1_QCTRL.
*/
#define EVADC_G1QCTRL1 (EVADC_G1_Q1_QCTRL)

/** \brief 924, Queue 1 Mode Register, Group 1 */
#define EVADC_G1_Q1_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020924u)
/** Alias (User Manual Name) for EVADC_G1_Q1_QMR.
* To use register names with standard convension, please use EVADC_G1_Q1_QMR.
*/
#define EVADC_G1QMR1 (EVADC_G1_Q1_QMR)

/** \brief 928, Queue 1 Status Register, Group 1 */
#define EVADC_G1_Q1_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020928u)
/** Alias (User Manual Name) for EVADC_G1_Q1_QSR.
* To use register names with standard convension, please use EVADC_G1_Q1_QSR.
*/
#define EVADC_G1QSR1 (EVADC_G1_Q1_QSR)

/** \brief 92C, Queue 1 Register 0, Group 1 */
#define EVADC_G1_Q1_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002092Cu)
/** Alias (User Manual Name) for EVADC_G1_Q1_Q0R.
* To use register names with standard convension, please use EVADC_G1_Q1_Q0R.
*/
#define EVADC_G1Q0R1 (EVADC_G1_Q1_Q0R)

/** \brief 930, Queue 1 Input Register, Group 1 */
#define EVADC_G1_Q1_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020930u)
/** Alias (User Manual Name) for EVADC_G1_Q1_QINR.
* To use register names with standard convension, please use EVADC_G1_Q1_QINR.
*/
#define EVADC_G1QINR1 (EVADC_G1_Q1_QINR)

/** \brief 934, Queue 1 Backup Register, Group 1 */
#define EVADC_G1_Q1_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020934u)
/** Alias (User Manual Name) for EVADC_G1_Q1_QBUR.
* To use register names with standard convension, please use EVADC_G1_Q1_QBUR.
*/
#define EVADC_G1QBUR1 (EVADC_G1_Q1_QBUR)

/** \brief 938, Queue 1 Requ. Timer Mode Reg., Group 1 */
#define EVADC_G1_Q1_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020938u)
/** Alias (User Manual Name) for EVADC_G1_Q1_REQTM.
* To use register names with standard convension, please use EVADC_G1_Q1_REQTM.
*/
#define EVADC_G1REQTM1 (EVADC_G1_Q1_REQTM)

/** \brief 93C, Queue 1 Requ. Timer Status Reg., Group 1 */
#define EVADC_G1_Q1_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002093Cu)
/** Alias (User Manual Name) for EVADC_G1_Q1_REQTS.
* To use register names with standard convension, please use EVADC_G1_Q1_REQTS.
*/
#define EVADC_G1REQTS1 (EVADC_G1_Q1_REQTS)

/** \brief 940, Queue 2 Source Contr. Register, Group 1 */
#define EVADC_G1_Q2_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020940u)
/** Alias (User Manual Name) for EVADC_G1_Q2_QCTRL.
* To use register names with standard convension, please use EVADC_G1_Q2_QCTRL.
*/
#define EVADC_G1QCTRL2 (EVADC_G1_Q2_QCTRL)

/** \brief 944, Queue 2 Mode Register, Group 1 */
#define EVADC_G1_Q2_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020944u)
/** Alias (User Manual Name) for EVADC_G1_Q2_QMR.
* To use register names with standard convension, please use EVADC_G1_Q2_QMR.
*/
#define EVADC_G1QMR2 (EVADC_G1_Q2_QMR)

/** \brief 948, Queue 2 Status Register, Group 1 */
#define EVADC_G1_Q2_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020948u)
/** Alias (User Manual Name) for EVADC_G1_Q2_QSR.
* To use register names with standard convension, please use EVADC_G1_Q2_QSR.
*/
#define EVADC_G1QSR2 (EVADC_G1_Q2_QSR)

/** \brief 94C, Queue 2 Register 0, Group 1 */
#define EVADC_G1_Q2_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002094Cu)
/** Alias (User Manual Name) for EVADC_G1_Q2_Q0R.
* To use register names with standard convension, please use EVADC_G1_Q2_Q0R.
*/
#define EVADC_G1Q0R2 (EVADC_G1_Q2_Q0R)

/** \brief 950, Queue 2 Input Register, Group 1 */
#define EVADC_G1_Q2_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020950u)
/** Alias (User Manual Name) for EVADC_G1_Q2_QINR.
* To use register names with standard convension, please use EVADC_G1_Q2_QINR.
*/
#define EVADC_G1QINR2 (EVADC_G1_Q2_QINR)

/** \brief 954, Queue 2 Backup Register, Group 1 */
#define EVADC_G1_Q2_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020954u)
/** Alias (User Manual Name) for EVADC_G1_Q2_QBUR.
* To use register names with standard convension, please use EVADC_G1_Q2_QBUR.
*/
#define EVADC_G1QBUR2 (EVADC_G1_Q2_QBUR)

/** \brief 958, Queue 2 Requ. Timer Mode Reg., Group 1 */
#define EVADC_G1_Q2_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020958u)
/** Alias (User Manual Name) for EVADC_G1_Q2_REQTM.
* To use register names with standard convension, please use EVADC_G1_Q2_REQTM.
*/
#define EVADC_G1REQTM2 (EVADC_G1_Q2_REQTM)

/** \brief 95C, Queue 2 Requ. Timer Status Reg., Group 1 */
#define EVADC_G1_Q2_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002095Cu)
/** Alias (User Manual Name) for EVADC_G1_Q2_REQTS.
* To use register names with standard convension, please use EVADC_G1_Q2_REQTS.
*/
#define EVADC_G1REQTS2 (EVADC_G1_Q2_REQTS)

/** \brief 980, Channel Event Flag Register, Group 1 */
#define EVADC_G1_CEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFLAG*)0xF0020980u)
/** Alias (User Manual Name) for EVADC_G1_CEFLAG.
* To use register names with standard convension, please use EVADC_G1_CEFLAG.
*/
#define EVADC_G1CEFLAG (EVADC_G1_CEFLAG)

/** \brief 984, Result Event Flag Register, Group 1 */
#define EVADC_G1_REFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFLAG*)0xF0020984u)
/** Alias (User Manual Name) for EVADC_G1_REFLAG.
* To use register names with standard convension, please use EVADC_G1_REFLAG.
*/
#define EVADC_G1REFLAG (EVADC_G1_REFLAG)

/** \brief 988, Source Event Flag Register, Group 1 */
#define EVADC_G1_SEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFLAG*)0xF0020988u)
/** Alias (User Manual Name) for EVADC_G1_SEFLAG.
* To use register names with standard convension, please use EVADC_G1_SEFLAG.
*/
#define EVADC_G1SEFLAG (EVADC_G1_SEFLAG)

/** \brief 990, Channel Event Flag Clear Register, Group 1 */
#define EVADC_G1_CEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFCLR*)0xF0020990u)
/** Alias (User Manual Name) for EVADC_G1_CEFCLR.
* To use register names with standard convension, please use EVADC_G1_CEFCLR.
*/
#define EVADC_G1CEFCLR (EVADC_G1_CEFCLR)

/** \brief 994, Result Event Flag Clear Register, Group 1 */
#define EVADC_G1_REFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFCLR*)0xF0020994u)
/** Alias (User Manual Name) for EVADC_G1_REFCLR.
* To use register names with standard convension, please use EVADC_G1_REFCLR.
*/
#define EVADC_G1REFCLR (EVADC_G1_REFCLR)

/** \brief 998, Source Event Flag Clear Reg., Group 1 */
#define EVADC_G1_SEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFCLR*)0xF0020998u)
/** Alias (User Manual Name) for EVADC_G1_SEFCLR.
* To use register names with standard convension, please use EVADC_G1_SEFCLR.
*/
#define EVADC_G1SEFCLR (EVADC_G1_SEFCLR)

/** \brief 9A0, Channel Event Node Pointer Reg. 0, Group 1 */
#define EVADC_G1_CEVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP0*)0xF00209A0u)
/** Alias (User Manual Name) for EVADC_G1_CEVNP0.
* To use register names with standard convension, please use EVADC_G1_CEVNP0.
*/
#define EVADC_G1CEVNP0 (EVADC_G1_CEVNP0)

/** \brief 9A4, Channel Event Node Pointer Reg. 1, Group 1 */
#define EVADC_G1_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00209A4u)
/** Alias (User Manual Name) for EVADC_G1_CEVNP1.
* To use register names with standard convension, please use EVADC_G1_CEVNP1.
*/
#define EVADC_G1CEVNP1 (EVADC_G1_CEVNP1)

/** \brief 9B0, Result Event Node Pointer Reg. 0, Group 1 */
#define EVADC_G1_REVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP0*)0xF00209B0u)
/** Alias (User Manual Name) for EVADC_G1_REVNP0.
* To use register names with standard convension, please use EVADC_G1_REVNP0.
*/
#define EVADC_G1REVNP0 (EVADC_G1_REVNP0)

/** \brief 9B4, Result Event Node Pointer Reg. 1, Group 1 */
#define EVADC_G1_REVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP1*)0xF00209B4u)
/** Alias (User Manual Name) for EVADC_G1_REVNP1.
* To use register names with standard convension, please use EVADC_G1_REVNP1.
*/
#define EVADC_G1REVNP1 (EVADC_G1_REVNP1)

/** \brief 9C0, Source Event Node Pointer Reg., Group 1 */
#define EVADC_G1_SEVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEVNP*)0xF00209C0u)
/** Alias (User Manual Name) for EVADC_G1_SEVNP.
* To use register names with standard convension, please use EVADC_G1_SEVNP.
*/
#define EVADC_G1SEVNP (EVADC_G1_SEVNP)

/** \brief 9C8, Service Request Software Activation Trigger, Group 1 */
#define EVADC_G1_SRACT /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SRACT*)0xF00209C8u)
/** Alias (User Manual Name) for EVADC_G1_SRACT.
* To use register names with standard convension, please use EVADC_G1_SRACT.
*/
#define EVADC_G1SRACT (EVADC_G1_SRACT)

/** \brief 9F0, External Multiplexer Control Reg., Group 1 */
#define EVADC_G1_EMUXCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCTR*)0xF00209F0u)
/** Alias (User Manual Name) for EVADC_G1_EMUXCTR.
* To use register names with standard convension, please use EVADC_G1_EMUXCTR.
*/
#define EVADC_G1EMUXCTR (EVADC_G1_EMUXCTR)

/** \brief 9F4, Ext. Multiplexer Channel Select Reg., Group 1 */
#define EVADC_G1_EMUXCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCS*)0xF00209F4u)
/** Alias (User Manual Name) for EVADC_G1_EMUXCS.
* To use register names with standard convension, please use EVADC_G1_EMUXCS.
*/
#define EVADC_G1EMUXCS (EVADC_G1_EMUXCS)

/** \brief 9F8, Valid Flag Register, Group 1 */
#define EVADC_G1_VFR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_VFR*)0xF00209F8u)
/** Alias (User Manual Name) for EVADC_G1_VFR.
* To use register names with standard convension, please use EVADC_G1_VFR.
*/
#define EVADC_G1VFR (EVADC_G1_VFR)

/** \brief A00, Group 1, Channel 0 Control Register */
#define EVADC_G1_CHCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020A00u)
/** Alias (User Manual Name) for EVADC_G1_CHCTR0.
* To use register names with standard convension, please use EVADC_G1_CHCTR0.
*/
#define EVADC_G1CHCTR0 (EVADC_G1_CHCTR0)

/** \brief A04, Group 1, Channel 1 Control Register */
#define EVADC_G1_CHCTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020A04u)
/** Alias (User Manual Name) for EVADC_G1_CHCTR1.
* To use register names with standard convension, please use EVADC_G1_CHCTR1.
*/
#define EVADC_G1CHCTR1 (EVADC_G1_CHCTR1)

/** \brief A08, Group 1, Channel 2 Control Register */
#define EVADC_G1_CHCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020A08u)
/** Alias (User Manual Name) for EVADC_G1_CHCTR2.
* To use register names with standard convension, please use EVADC_G1_CHCTR2.
*/
#define EVADC_G1CHCTR2 (EVADC_G1_CHCTR2)

/** \brief A0C, Group 1, Channel 3 Control Register */
#define EVADC_G1_CHCTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020A0Cu)
/** Alias (User Manual Name) for EVADC_G1_CHCTR3.
* To use register names with standard convension, please use EVADC_G1_CHCTR3.
*/
#define EVADC_G1CHCTR3 (EVADC_G1_CHCTR3)

/** \brief A10, Group 1, Channel 4 Control Register */
#define EVADC_G1_CHCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020A10u)
/** Alias (User Manual Name) for EVADC_G1_CHCTR4.
* To use register names with standard convension, please use EVADC_G1_CHCTR4.
*/
#define EVADC_G1CHCTR4 (EVADC_G1_CHCTR4)

/** \brief A14, Group 1, Channel 5 Control Register */
#define EVADC_G1_CHCTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020A14u)
/** Alias (User Manual Name) for EVADC_G1_CHCTR5.
* To use register names with standard convension, please use EVADC_G1_CHCTR5.
*/
#define EVADC_G1CHCTR5 (EVADC_G1_CHCTR5)

/** \brief A18, Group 1, Channel 6 Control Register */
#define EVADC_G1_CHCTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020A18u)
/** Alias (User Manual Name) for EVADC_G1_CHCTR6.
* To use register names with standard convension, please use EVADC_G1_CHCTR6.
*/
#define EVADC_G1CHCTR6 (EVADC_G1_CHCTR6)

/** \brief A1C, Group 1, Channel 7 Control Register */
#define EVADC_G1_CHCTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020A1Cu)
/** Alias (User Manual Name) for EVADC_G1_CHCTR7.
* To use register names with standard convension, please use EVADC_G1_CHCTR7.
*/
#define EVADC_G1CHCTR7 (EVADC_G1_CHCTR7)

/** \brief A80, Group 1 Result Control Register 0 */
#define EVADC_G1_RCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020A80u)
/** Alias (User Manual Name) for EVADC_G1_RCR0.
* To use register names with standard convension, please use EVADC_G1_RCR0.
*/
#define EVADC_G1RCR0 (EVADC_G1_RCR0)

/** \brief A84, Group 1 Result Control Register 1 */
#define EVADC_G1_RCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020A84u)
/** Alias (User Manual Name) for EVADC_G1_RCR1.
* To use register names with standard convension, please use EVADC_G1_RCR1.
*/
#define EVADC_G1RCR1 (EVADC_G1_RCR1)

/** \brief A88, Group 1 Result Control Register 2 */
#define EVADC_G1_RCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020A88u)
/** Alias (User Manual Name) for EVADC_G1_RCR2.
* To use register names with standard convension, please use EVADC_G1_RCR2.
*/
#define EVADC_G1RCR2 (EVADC_G1_RCR2)

/** \brief A8C, Group 1 Result Control Register 3 */
#define EVADC_G1_RCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020A8Cu)
/** Alias (User Manual Name) for EVADC_G1_RCR3.
* To use register names with standard convension, please use EVADC_G1_RCR3.
*/
#define EVADC_G1RCR3 (EVADC_G1_RCR3)

/** \brief A90, Group 1 Result Control Register 4 */
#define EVADC_G1_RCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020A90u)
/** Alias (User Manual Name) for EVADC_G1_RCR4.
* To use register names with standard convension, please use EVADC_G1_RCR4.
*/
#define EVADC_G1RCR4 (EVADC_G1_RCR4)

/** \brief A94, Group 1 Result Control Register 5 */
#define EVADC_G1_RCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020A94u)
/** Alias (User Manual Name) for EVADC_G1_RCR5.
* To use register names with standard convension, please use EVADC_G1_RCR5.
*/
#define EVADC_G1RCR5 (EVADC_G1_RCR5)

/** \brief A98, Group 1 Result Control Register 6 */
#define EVADC_G1_RCR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020A98u)
/** Alias (User Manual Name) for EVADC_G1_RCR6.
* To use register names with standard convension, please use EVADC_G1_RCR6.
*/
#define EVADC_G1RCR6 (EVADC_G1_RCR6)

/** \brief A9C, Group 1 Result Control Register 7 */
#define EVADC_G1_RCR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020A9Cu)
/** Alias (User Manual Name) for EVADC_G1_RCR7.
* To use register names with standard convension, please use EVADC_G1_RCR7.
*/
#define EVADC_G1RCR7 (EVADC_G1_RCR7)

/** \brief AA0, Group 1 Result Control Register 8 */
#define EVADC_G1_RCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020AA0u)
/** Alias (User Manual Name) for EVADC_G1_RCR8.
* To use register names with standard convension, please use EVADC_G1_RCR8.
*/
#define EVADC_G1RCR8 (EVADC_G1_RCR8)

/** \brief AA4, Group 1 Result Control Register 9 */
#define EVADC_G1_RCR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020AA4u)
/** Alias (User Manual Name) for EVADC_G1_RCR9.
* To use register names with standard convension, please use EVADC_G1_RCR9.
*/
#define EVADC_G1RCR9 (EVADC_G1_RCR9)

/** \brief AA8, Group 1 Result Control Register 10 */
#define EVADC_G1_RCR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020AA8u)
/** Alias (User Manual Name) for EVADC_G1_RCR10.
* To use register names with standard convension, please use EVADC_G1_RCR10.
*/
#define EVADC_G1RCR10 (EVADC_G1_RCR10)

/** \brief AAC, Group 1 Result Control Register 11 */
#define EVADC_G1_RCR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020AACu)
/** Alias (User Manual Name) for EVADC_G1_RCR11.
* To use register names with standard convension, please use EVADC_G1_RCR11.
*/
#define EVADC_G1RCR11 (EVADC_G1_RCR11)

/** \brief AB0, Group 1 Result Control Register 12 */
#define EVADC_G1_RCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020AB0u)
/** Alias (User Manual Name) for EVADC_G1_RCR12.
* To use register names with standard convension, please use EVADC_G1_RCR12.
*/
#define EVADC_G1RCR12 (EVADC_G1_RCR12)

/** \brief AB4, Group 1 Result Control Register 13 */
#define EVADC_G1_RCR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020AB4u)
/** Alias (User Manual Name) for EVADC_G1_RCR13.
* To use register names with standard convension, please use EVADC_G1_RCR13.
*/
#define EVADC_G1RCR13 (EVADC_G1_RCR13)

/** \brief AB8, Group 1 Result Control Register 14 */
#define EVADC_G1_RCR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020AB8u)
/** Alias (User Manual Name) for EVADC_G1_RCR14.
* To use register names with standard convension, please use EVADC_G1_RCR14.
*/
#define EVADC_G1RCR14 (EVADC_G1_RCR14)

/** \brief ABC, Group 1 Result Control Register 15 */
#define EVADC_G1_RCR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020ABCu)
/** Alias (User Manual Name) for EVADC_G1_RCR15.
* To use register names with standard convension, please use EVADC_G1_RCR15.
*/
#define EVADC_G1RCR15 (EVADC_G1_RCR15)

/** \brief B00, Group 1 Result Register 0\n */
#define EVADC_G1_RES0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B00u)
/** Alias (User Manual Name) for EVADC_G1_RES0.
* To use register names with standard convension, please use EVADC_G1_RES0.
*/
#define EVADC_G1RES0 (EVADC_G1_RES0)

/** \brief B04, Group 1 Result Register 1\n */
#define EVADC_G1_RES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B04u)
/** Alias (User Manual Name) for EVADC_G1_RES1.
* To use register names with standard convension, please use EVADC_G1_RES1.
*/
#define EVADC_G1RES1 (EVADC_G1_RES1)

/** \brief B08, Group 1 Result Register 2\n */
#define EVADC_G1_RES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B08u)
/** Alias (User Manual Name) for EVADC_G1_RES2.
* To use register names with standard convension, please use EVADC_G1_RES2.
*/
#define EVADC_G1RES2 (EVADC_G1_RES2)

/** \brief B0C, Group 1 Result Register 3\n */
#define EVADC_G1_RES3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B0Cu)
/** Alias (User Manual Name) for EVADC_G1_RES3.
* To use register names with standard convension, please use EVADC_G1_RES3.
*/
#define EVADC_G1RES3 (EVADC_G1_RES3)

/** \brief B10, Group 1 Result Register 4\n */
#define EVADC_G1_RES4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B10u)
/** Alias (User Manual Name) for EVADC_G1_RES4.
* To use register names with standard convension, please use EVADC_G1_RES4.
*/
#define EVADC_G1RES4 (EVADC_G1_RES4)

/** \brief B14, Group 1 Result Register 5\n */
#define EVADC_G1_RES5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B14u)
/** Alias (User Manual Name) for EVADC_G1_RES5.
* To use register names with standard convension, please use EVADC_G1_RES5.
*/
#define EVADC_G1RES5 (EVADC_G1_RES5)

/** \brief B18, Group 1 Result Register 6\n */
#define EVADC_G1_RES6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B18u)
/** Alias (User Manual Name) for EVADC_G1_RES6.
* To use register names with standard convension, please use EVADC_G1_RES6.
*/
#define EVADC_G1RES6 (EVADC_G1_RES6)

/** \brief B1C, Group 1 Result Register 7\n */
#define EVADC_G1_RES7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B1Cu)
/** Alias (User Manual Name) for EVADC_G1_RES7.
* To use register names with standard convension, please use EVADC_G1_RES7.
*/
#define EVADC_G1RES7 (EVADC_G1_RES7)

/** \brief B20, Group 1 Result Register 8\n */
#define EVADC_G1_RES8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B20u)
/** Alias (User Manual Name) for EVADC_G1_RES8.
* To use register names with standard convension, please use EVADC_G1_RES8.
*/
#define EVADC_G1RES8 (EVADC_G1_RES8)

/** \brief B24, Group 1 Result Register 9\n */
#define EVADC_G1_RES9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B24u)
/** Alias (User Manual Name) for EVADC_G1_RES9.
* To use register names with standard convension, please use EVADC_G1_RES9.
*/
#define EVADC_G1RES9 (EVADC_G1_RES9)

/** \brief B28, Group 1 Result Register 10\n */
#define EVADC_G1_RES10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B28u)
/** Alias (User Manual Name) for EVADC_G1_RES10.
* To use register names with standard convension, please use EVADC_G1_RES10.
*/
#define EVADC_G1RES10 (EVADC_G1_RES10)

/** \brief B2C, Group 1 Result Register 11\n */
#define EVADC_G1_RES11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B2Cu)
/** Alias (User Manual Name) for EVADC_G1_RES11.
* To use register names with standard convension, please use EVADC_G1_RES11.
*/
#define EVADC_G1RES11 (EVADC_G1_RES11)

/** \brief B30, Group 1 Result Register 12\n */
#define EVADC_G1_RES12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B30u)
/** Alias (User Manual Name) for EVADC_G1_RES12.
* To use register names with standard convension, please use EVADC_G1_RES12.
*/
#define EVADC_G1RES12 (EVADC_G1_RES12)

/** \brief B34, Group 1 Result Register 13\n */
#define EVADC_G1_RES13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B34u)
/** Alias (User Manual Name) for EVADC_G1_RES13.
* To use register names with standard convension, please use EVADC_G1_RES13.
*/
#define EVADC_G1RES13 (EVADC_G1_RES13)

/** \brief B38, Group 1 Result Register 14\n */
#define EVADC_G1_RES14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B38u)
/** Alias (User Manual Name) for EVADC_G1_RES14.
* To use register names with standard convension, please use EVADC_G1_RES14.
*/
#define EVADC_G1RES14 (EVADC_G1_RES14)

/** \brief B3C, Group 1 Result Register 15\n */
#define EVADC_G1_RES15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020B3Cu)
/** Alias (User Manual Name) for EVADC_G1_RES15.
* To use register names with standard convension, please use EVADC_G1_RES15.
*/
#define EVADC_G1RES15 (EVADC_G1_RES15)

/** \brief B80, Group 1 Result Reg. 0, Debug */
#define EVADC_G1_RESD0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020B80u)
/** Alias (User Manual Name) for EVADC_G1_RESD0.
* To use register names with standard convension, please use EVADC_G1_RESD0.
*/
#define EVADC_G1RESD0 (EVADC_G1_RESD0)

/** \brief B84, Group 1 Result Reg. 1, Debug */
#define EVADC_G1_RESD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020B84u)
/** Alias (User Manual Name) for EVADC_G1_RESD1.
* To use register names with standard convension, please use EVADC_G1_RESD1.
*/
#define EVADC_G1RESD1 (EVADC_G1_RESD1)

/** \brief B88, Group 1 Result Reg. 2, Debug */
#define EVADC_G1_RESD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020B88u)
/** Alias (User Manual Name) for EVADC_G1_RESD2.
* To use register names with standard convension, please use EVADC_G1_RESD2.
*/
#define EVADC_G1RESD2 (EVADC_G1_RESD2)

/** \brief B8C, Group 1 Result Reg. 3, Debug */
#define EVADC_G1_RESD3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020B8Cu)
/** Alias (User Manual Name) for EVADC_G1_RESD3.
* To use register names with standard convension, please use EVADC_G1_RESD3.
*/
#define EVADC_G1RESD3 (EVADC_G1_RESD3)

/** \brief B90, Group 1 Result Reg. 4, Debug */
#define EVADC_G1_RESD4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020B90u)
/** Alias (User Manual Name) for EVADC_G1_RESD4.
* To use register names with standard convension, please use EVADC_G1_RESD4.
*/
#define EVADC_G1RESD4 (EVADC_G1_RESD4)

/** \brief B94, Group 1 Result Reg. 5, Debug */
#define EVADC_G1_RESD5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020B94u)
/** Alias (User Manual Name) for EVADC_G1_RESD5.
* To use register names with standard convension, please use EVADC_G1_RESD5.
*/
#define EVADC_G1RESD5 (EVADC_G1_RESD5)

/** \brief B98, Group 1 Result Reg. 6, Debug */
#define EVADC_G1_RESD6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020B98u)
/** Alias (User Manual Name) for EVADC_G1_RESD6.
* To use register names with standard convension, please use EVADC_G1_RESD6.
*/
#define EVADC_G1RESD6 (EVADC_G1_RESD6)

/** \brief B9C, Group 1 Result Reg. 7, Debug */
#define EVADC_G1_RESD7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020B9Cu)
/** Alias (User Manual Name) for EVADC_G1_RESD7.
* To use register names with standard convension, please use EVADC_G1_RESD7.
*/
#define EVADC_G1RESD7 (EVADC_G1_RESD7)

/** \brief BA0, Group 1 Result Reg. 8, Debug */
#define EVADC_G1_RESD8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020BA0u)
/** Alias (User Manual Name) for EVADC_G1_RESD8.
* To use register names with standard convension, please use EVADC_G1_RESD8.
*/
#define EVADC_G1RESD8 (EVADC_G1_RESD8)

/** \brief BA4, Group 1 Result Reg. 9, Debug */
#define EVADC_G1_RESD9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020BA4u)
/** Alias (User Manual Name) for EVADC_G1_RESD9.
* To use register names with standard convension, please use EVADC_G1_RESD9.
*/
#define EVADC_G1RESD9 (EVADC_G1_RESD9)

/** \brief BA8, Group 1 Result Reg. 10, Debug */
#define EVADC_G1_RESD10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020BA8u)
/** Alias (User Manual Name) for EVADC_G1_RESD10.
* To use register names with standard convension, please use EVADC_G1_RESD10.
*/
#define EVADC_G1RESD10 (EVADC_G1_RESD10)

/** \brief BAC, Group 1 Result Reg. 11, Debug */
#define EVADC_G1_RESD11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020BACu)
/** Alias (User Manual Name) for EVADC_G1_RESD11.
* To use register names with standard convension, please use EVADC_G1_RESD11.
*/
#define EVADC_G1RESD11 (EVADC_G1_RESD11)

/** \brief BB0, Group 1 Result Reg. 12, Debug */
#define EVADC_G1_RESD12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020BB0u)
/** Alias (User Manual Name) for EVADC_G1_RESD12.
* To use register names with standard convension, please use EVADC_G1_RESD12.
*/
#define EVADC_G1RESD12 (EVADC_G1_RESD12)

/** \brief BB4, Group 1 Result Reg. 13, Debug */
#define EVADC_G1_RESD13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020BB4u)
/** Alias (User Manual Name) for EVADC_G1_RESD13.
* To use register names with standard convension, please use EVADC_G1_RESD13.
*/
#define EVADC_G1RESD13 (EVADC_G1_RESD13)

/** \brief BB8, Group 1 Result Reg. 14, Debug */
#define EVADC_G1_RESD14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020BB8u)
/** Alias (User Manual Name) for EVADC_G1_RESD14.
* To use register names with standard convension, please use EVADC_G1_RESD14.
*/
#define EVADC_G1RESD14 (EVADC_G1_RESD14)

/** \brief BBC, Group 1 Result Reg. 15, Debug */
#define EVADC_G1_RESD15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020BBCu)
/** Alias (User Manual Name) for EVADC_G1_RESD15.
* To use register names with standard convension, please use EVADC_G1_RESD15.
*/
#define EVADC_G1RESD15 (EVADC_G1_RESD15)

/** \brief C10, Trigger Control Register, Group 2 */
#define EVADC_G2_TRCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_TRCTR*)0xF0020C10u)
/** Alias (User Manual Name) for EVADC_G2_TRCTR.
* To use register names with standard convension, please use EVADC_G2_TRCTR.
*/
#define EVADC_G2TRCTR (EVADC_G2_TRCTR)

/** \brief C80, Arbitration Config. Register, Group 2 */
#define EVADC_G2_ARBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBCFG*)0xF0020C80u)
/** Alias (User Manual Name) for EVADC_G2_ARBCFG.
* To use register names with standard convension, please use EVADC_G2_ARBCFG.
*/
#define EVADC_G2ARBCFG (EVADC_G2_ARBCFG)

/** \brief C84, Arbitration Priority Register, Group 2 */
#define EVADC_G2_ARBPR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBPR*)0xF0020C84u)
/** Alias (User Manual Name) for EVADC_G2_ARBPR.
* To use register names with standard convension, please use EVADC_G2_ARBPR.
*/
#define EVADC_G2ARBPR (EVADC_G2_ARBPR)

/** \brief C88, Analog Fct. Config. Register, Group 2 */
#define EVADC_G2_ANCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ANCFG*)0xF0020C88u)
/** Alias (User Manual Name) for EVADC_G2_ANCFG.
* To use register names with standard convension, please use EVADC_G2_ANCFG.
*/
#define EVADC_G2ANCFG (EVADC_G2_ANCFG)

/** \brief CA0, Input Class Register 0, Group 2 */
#define EVADC_G2_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF0020CA0u)
/** Alias (User Manual Name) for EVADC_G2_ICLASS0.
* To use register names with standard convension, please use EVADC_G2_ICLASS0.
*/
#define EVADC_G2ICLASS0 (EVADC_G2_ICLASS0)

/** \brief CA4, Input Class Register 1, Group 2 */
#define EVADC_G2_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF0020CA4u)
/** Alias (User Manual Name) for EVADC_G2_ICLASS1.
* To use register names with standard convension, please use EVADC_G2_ICLASS1.
*/
#define EVADC_G2ICLASS1 (EVADC_G2_ICLASS1)

/** \brief CB0, Alias Register, Group 2 */
#define EVADC_G2_ALIAS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ALIAS*)0xF0020CB0u)
/** Alias (User Manual Name) for EVADC_G2_ALIAS.
* To use register names with standard convension, please use EVADC_G2_ALIAS.
*/
#define EVADC_G2ALIAS (EVADC_G2_ALIAS)

/** \brief CB8, Boundary Select Register, Group 2 */
#define EVADC_G2_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_BOUND*)0xF0020CB8u)
/** Alias (User Manual Name) for EVADC_G2_BOUND.
* To use register names with standard convension, please use EVADC_G2_BOUND.
*/
#define EVADC_G2BOUND (EVADC_G2_BOUND)

/** \brief CC0, Synchronization Control Register, Group 2 */
#define EVADC_G2_SYNCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SYNCTR*)0xF0020CC0u)
/** Alias (User Manual Name) for EVADC_G2_SYNCTR.
* To use register names with standard convension, please use EVADC_G2_SYNCTR.
*/
#define EVADC_G2SYNCTR (EVADC_G2_SYNCTR)

/** \brief D00, Queue 0 Source Contr. Register, Group 2 */
#define EVADC_G2_Q0_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020D00u)
/** Alias (User Manual Name) for EVADC_G2_Q0_QCTRL.
* To use register names with standard convension, please use EVADC_G2_Q0_QCTRL.
*/
#define EVADC_G2QCTRL0 (EVADC_G2_Q0_QCTRL)

/** \brief D04, Queue 0 Mode Register, Group 2 */
#define EVADC_G2_Q0_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020D04u)
/** Alias (User Manual Name) for EVADC_G2_Q0_QMR.
* To use register names with standard convension, please use EVADC_G2_Q0_QMR.
*/
#define EVADC_G2QMR0 (EVADC_G2_Q0_QMR)

/** \brief D08, Queue 0 Status Register, Group 2 */
#define EVADC_G2_Q0_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020D08u)
/** Alias (User Manual Name) for EVADC_G2_Q0_QSR.
* To use register names with standard convension, please use EVADC_G2_Q0_QSR.
*/
#define EVADC_G2QSR0 (EVADC_G2_Q0_QSR)

/** \brief D0C, Queue 0 Register 0, Group 2 */
#define EVADC_G2_Q0_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF0020D0Cu)
/** Alias (User Manual Name) for EVADC_G2_Q0_Q0R.
* To use register names with standard convension, please use EVADC_G2_Q0_Q0R.
*/
#define EVADC_G2Q0R0 (EVADC_G2_Q0_Q0R)

/** \brief D10, Queue 0 Input Register, Group 2 */
#define EVADC_G2_Q0_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020D10u)
/** Alias (User Manual Name) for EVADC_G2_Q0_QINR.
* To use register names with standard convension, please use EVADC_G2_Q0_QINR.
*/
#define EVADC_G2QINR0 (EVADC_G2_Q0_QINR)

/** \brief D14, Queue 0 Backup Register, Group 2 */
#define EVADC_G2_Q0_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020D14u)
/** Alias (User Manual Name) for EVADC_G2_Q0_QBUR.
* To use register names with standard convension, please use EVADC_G2_Q0_QBUR.
*/
#define EVADC_G2QBUR0 (EVADC_G2_Q0_QBUR)

/** \brief D18, Queue 0 Requ. Timer Mode Reg., Group 2 */
#define EVADC_G2_Q0_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020D18u)
/** Alias (User Manual Name) for EVADC_G2_Q0_REQTM.
* To use register names with standard convension, please use EVADC_G2_Q0_REQTM.
*/
#define EVADC_G2REQTM0 (EVADC_G2_Q0_REQTM)

/** \brief D1C, Queue 0 Requ. Timer Status Reg., Group 2 */
#define EVADC_G2_Q0_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF0020D1Cu)
/** Alias (User Manual Name) for EVADC_G2_Q0_REQTS.
* To use register names with standard convension, please use EVADC_G2_Q0_REQTS.
*/
#define EVADC_G2REQTS0 (EVADC_G2_Q0_REQTS)

/** \brief D20, Queue 1 Source Contr. Register, Group 2 */
#define EVADC_G2_Q1_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020D20u)
/** Alias (User Manual Name) for EVADC_G2_Q1_QCTRL.
* To use register names with standard convension, please use EVADC_G2_Q1_QCTRL.
*/
#define EVADC_G2QCTRL1 (EVADC_G2_Q1_QCTRL)

/** \brief D24, Queue 1 Mode Register, Group 2 */
#define EVADC_G2_Q1_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020D24u)
/** Alias (User Manual Name) for EVADC_G2_Q1_QMR.
* To use register names with standard convension, please use EVADC_G2_Q1_QMR.
*/
#define EVADC_G2QMR1 (EVADC_G2_Q1_QMR)

/** \brief D28, Queue 1 Status Register, Group 2 */
#define EVADC_G2_Q1_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020D28u)
/** Alias (User Manual Name) for EVADC_G2_Q1_QSR.
* To use register names with standard convension, please use EVADC_G2_Q1_QSR.
*/
#define EVADC_G2QSR1 (EVADC_G2_Q1_QSR)

/** \brief D2C, Queue 1 Register 0, Group 2 */
#define EVADC_G2_Q1_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF0020D2Cu)
/** Alias (User Manual Name) for EVADC_G2_Q1_Q0R.
* To use register names with standard convension, please use EVADC_G2_Q1_Q0R.
*/
#define EVADC_G2Q0R1 (EVADC_G2_Q1_Q0R)

/** \brief D30, Queue 1 Input Register, Group 2 */
#define EVADC_G2_Q1_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020D30u)
/** Alias (User Manual Name) for EVADC_G2_Q1_QINR.
* To use register names with standard convension, please use EVADC_G2_Q1_QINR.
*/
#define EVADC_G2QINR1 (EVADC_G2_Q1_QINR)

/** \brief D34, Queue 1 Backup Register, Group 2 */
#define EVADC_G2_Q1_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020D34u)
/** Alias (User Manual Name) for EVADC_G2_Q1_QBUR.
* To use register names with standard convension, please use EVADC_G2_Q1_QBUR.
*/
#define EVADC_G2QBUR1 (EVADC_G2_Q1_QBUR)

/** \brief D38, Queue 1 Requ. Timer Mode Reg., Group 2 */
#define EVADC_G2_Q1_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020D38u)
/** Alias (User Manual Name) for EVADC_G2_Q1_REQTM.
* To use register names with standard convension, please use EVADC_G2_Q1_REQTM.
*/
#define EVADC_G2REQTM1 (EVADC_G2_Q1_REQTM)

/** \brief D3C, Queue 1 Requ. Timer Status Reg., Group 2 */
#define EVADC_G2_Q1_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF0020D3Cu)
/** Alias (User Manual Name) for EVADC_G2_Q1_REQTS.
* To use register names with standard convension, please use EVADC_G2_Q1_REQTS.
*/
#define EVADC_G2REQTS1 (EVADC_G2_Q1_REQTS)

/** \brief D40, Queue 2 Source Contr. Register, Group 2 */
#define EVADC_G2_Q2_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0020D40u)
/** Alias (User Manual Name) for EVADC_G2_Q2_QCTRL.
* To use register names with standard convension, please use EVADC_G2_Q2_QCTRL.
*/
#define EVADC_G2QCTRL2 (EVADC_G2_Q2_QCTRL)

/** \brief D44, Queue 2 Mode Register, Group 2 */
#define EVADC_G2_Q2_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0020D44u)
/** Alias (User Manual Name) for EVADC_G2_Q2_QMR.
* To use register names with standard convension, please use EVADC_G2_Q2_QMR.
*/
#define EVADC_G2QMR2 (EVADC_G2_Q2_QMR)

/** \brief D48, Queue 2 Status Register, Group 2 */
#define EVADC_G2_Q2_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0020D48u)
/** Alias (User Manual Name) for EVADC_G2_Q2_QSR.
* To use register names with standard convension, please use EVADC_G2_Q2_QSR.
*/
#define EVADC_G2QSR2 (EVADC_G2_Q2_QSR)

/** \brief D4C, Queue 2 Register 0, Group 2 */
#define EVADC_G2_Q2_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF0020D4Cu)
/** Alias (User Manual Name) for EVADC_G2_Q2_Q0R.
* To use register names with standard convension, please use EVADC_G2_Q2_Q0R.
*/
#define EVADC_G2Q0R2 (EVADC_G2_Q2_Q0R)

/** \brief D50, Queue 2 Input Register, Group 2 */
#define EVADC_G2_Q2_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0020D50u)
/** Alias (User Manual Name) for EVADC_G2_Q2_QINR.
* To use register names with standard convension, please use EVADC_G2_Q2_QINR.
*/
#define EVADC_G2QINR2 (EVADC_G2_Q2_QINR)

/** \brief D54, Queue 2 Backup Register, Group 2 */
#define EVADC_G2_Q2_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0020D54u)
/** Alias (User Manual Name) for EVADC_G2_Q2_QBUR.
* To use register names with standard convension, please use EVADC_G2_Q2_QBUR.
*/
#define EVADC_G2QBUR2 (EVADC_G2_Q2_QBUR)

/** \brief D58, Queue 2 Requ. Timer Mode Reg., Group 2 */
#define EVADC_G2_Q2_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0020D58u)
/** Alias (User Manual Name) for EVADC_G2_Q2_REQTM.
* To use register names with standard convension, please use EVADC_G2_Q2_REQTM.
*/
#define EVADC_G2REQTM2 (EVADC_G2_Q2_REQTM)

/** \brief D5C, Queue 2 Requ. Timer Status Reg., Group 2 */
#define EVADC_G2_Q2_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF0020D5Cu)
/** Alias (User Manual Name) for EVADC_G2_Q2_REQTS.
* To use register names with standard convension, please use EVADC_G2_Q2_REQTS.
*/
#define EVADC_G2REQTS2 (EVADC_G2_Q2_REQTS)

/** \brief D80, Channel Event Flag Register, Group 2 */
#define EVADC_G2_CEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFLAG*)0xF0020D80u)
/** Alias (User Manual Name) for EVADC_G2_CEFLAG.
* To use register names with standard convension, please use EVADC_G2_CEFLAG.
*/
#define EVADC_G2CEFLAG (EVADC_G2_CEFLAG)

/** \brief D84, Result Event Flag Register, Group 2 */
#define EVADC_G2_REFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFLAG*)0xF0020D84u)
/** Alias (User Manual Name) for EVADC_G2_REFLAG.
* To use register names with standard convension, please use EVADC_G2_REFLAG.
*/
#define EVADC_G2REFLAG (EVADC_G2_REFLAG)

/** \brief D88, Source Event Flag Register, Group 2 */
#define EVADC_G2_SEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFLAG*)0xF0020D88u)
/** Alias (User Manual Name) for EVADC_G2_SEFLAG.
* To use register names with standard convension, please use EVADC_G2_SEFLAG.
*/
#define EVADC_G2SEFLAG (EVADC_G2_SEFLAG)

/** \brief D90, Channel Event Flag Clear Register, Group 2 */
#define EVADC_G2_CEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFCLR*)0xF0020D90u)
/** Alias (User Manual Name) for EVADC_G2_CEFCLR.
* To use register names with standard convension, please use EVADC_G2_CEFCLR.
*/
#define EVADC_G2CEFCLR (EVADC_G2_CEFCLR)

/** \brief D94, Result Event Flag Clear Register, Group 2 */
#define EVADC_G2_REFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFCLR*)0xF0020D94u)
/** Alias (User Manual Name) for EVADC_G2_REFCLR.
* To use register names with standard convension, please use EVADC_G2_REFCLR.
*/
#define EVADC_G2REFCLR (EVADC_G2_REFCLR)

/** \brief D98, Source Event Flag Clear Reg., Group 2 */
#define EVADC_G2_SEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFCLR*)0xF0020D98u)
/** Alias (User Manual Name) for EVADC_G2_SEFCLR.
* To use register names with standard convension, please use EVADC_G2_SEFCLR.
*/
#define EVADC_G2SEFCLR (EVADC_G2_SEFCLR)

/** \brief DA0, Channel Event Node Pointer Reg. 0, Group 2 */
#define EVADC_G2_CEVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP0*)0xF0020DA0u)
/** Alias (User Manual Name) for EVADC_G2_CEVNP0.
* To use register names with standard convension, please use EVADC_G2_CEVNP0.
*/
#define EVADC_G2CEVNP0 (EVADC_G2_CEVNP0)

/** \brief DA4, Channel Event Node Pointer Reg. 1, Group 2 */
#define EVADC_G2_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF0020DA4u)
/** Alias (User Manual Name) for EVADC_G2_CEVNP1.
* To use register names with standard convension, please use EVADC_G2_CEVNP1.
*/
#define EVADC_G2CEVNP1 (EVADC_G2_CEVNP1)

/** \brief DB0, Result Event Node Pointer Reg. 0, Group 2 */
#define EVADC_G2_REVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP0*)0xF0020DB0u)
/** Alias (User Manual Name) for EVADC_G2_REVNP0.
* To use register names with standard convension, please use EVADC_G2_REVNP0.
*/
#define EVADC_G2REVNP0 (EVADC_G2_REVNP0)

/** \brief DB4, Result Event Node Pointer Reg. 1, Group 2 */
#define EVADC_G2_REVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP1*)0xF0020DB4u)
/** Alias (User Manual Name) for EVADC_G2_REVNP1.
* To use register names with standard convension, please use EVADC_G2_REVNP1.
*/
#define EVADC_G2REVNP1 (EVADC_G2_REVNP1)

/** \brief DC0, Source Event Node Pointer Reg., Group 2 */
#define EVADC_G2_SEVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEVNP*)0xF0020DC0u)
/** Alias (User Manual Name) for EVADC_G2_SEVNP.
* To use register names with standard convension, please use EVADC_G2_SEVNP.
*/
#define EVADC_G2SEVNP (EVADC_G2_SEVNP)

/** \brief DC8, Service Request Software Activation Trigger, Group 2 */
#define EVADC_G2_SRACT /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SRACT*)0xF0020DC8u)
/** Alias (User Manual Name) for EVADC_G2_SRACT.
* To use register names with standard convension, please use EVADC_G2_SRACT.
*/
#define EVADC_G2SRACT (EVADC_G2_SRACT)

/** \brief DF0, External Multiplexer Control Reg., Group 2 */
#define EVADC_G2_EMUXCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCTR*)0xF0020DF0u)
/** Alias (User Manual Name) for EVADC_G2_EMUXCTR.
* To use register names with standard convension, please use EVADC_G2_EMUXCTR.
*/
#define EVADC_G2EMUXCTR (EVADC_G2_EMUXCTR)

/** \brief DF4, Ext. Multiplexer Channel Select Reg., Group 2 */
#define EVADC_G2_EMUXCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCS*)0xF0020DF4u)
/** Alias (User Manual Name) for EVADC_G2_EMUXCS.
* To use register names with standard convension, please use EVADC_G2_EMUXCS.
*/
#define EVADC_G2EMUXCS (EVADC_G2_EMUXCS)

/** \brief DF8, Valid Flag Register, Group 2 */
#define EVADC_G2_VFR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_VFR*)0xF0020DF8u)
/** Alias (User Manual Name) for EVADC_G2_VFR.
* To use register names with standard convension, please use EVADC_G2_VFR.
*/
#define EVADC_G2VFR (EVADC_G2_VFR)

/** \brief E00, Group 2, Channel 0 Control Register */
#define EVADC_G2_CHCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020E00u)
/** Alias (User Manual Name) for EVADC_G2_CHCTR0.
* To use register names with standard convension, please use EVADC_G2_CHCTR0.
*/
#define EVADC_G2CHCTR0 (EVADC_G2_CHCTR0)

/** \brief E04, Group 2, Channel 1 Control Register */
#define EVADC_G2_CHCTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020E04u)
/** Alias (User Manual Name) for EVADC_G2_CHCTR1.
* To use register names with standard convension, please use EVADC_G2_CHCTR1.
*/
#define EVADC_G2CHCTR1 (EVADC_G2_CHCTR1)

/** \brief E08, Group 2, Channel 2 Control Register */
#define EVADC_G2_CHCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020E08u)
/** Alias (User Manual Name) for EVADC_G2_CHCTR2.
* To use register names with standard convension, please use EVADC_G2_CHCTR2.
*/
#define EVADC_G2CHCTR2 (EVADC_G2_CHCTR2)

/** \brief E0C, Group 2, Channel 3 Control Register */
#define EVADC_G2_CHCTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020E0Cu)
/** Alias (User Manual Name) for EVADC_G2_CHCTR3.
* To use register names with standard convension, please use EVADC_G2_CHCTR3.
*/
#define EVADC_G2CHCTR3 (EVADC_G2_CHCTR3)

/** \brief E10, Group 2, Channel 4 Control Register */
#define EVADC_G2_CHCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020E10u)
/** Alias (User Manual Name) for EVADC_G2_CHCTR4.
* To use register names with standard convension, please use EVADC_G2_CHCTR4.
*/
#define EVADC_G2CHCTR4 (EVADC_G2_CHCTR4)

/** \brief E14, Group 2, Channel 5 Control Register */
#define EVADC_G2_CHCTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020E14u)
/** Alias (User Manual Name) for EVADC_G2_CHCTR5.
* To use register names with standard convension, please use EVADC_G2_CHCTR5.
*/
#define EVADC_G2CHCTR5 (EVADC_G2_CHCTR5)

/** \brief E18, Group 2, Channel 6 Control Register */
#define EVADC_G2_CHCTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020E18u)
/** Alias (User Manual Name) for EVADC_G2_CHCTR6.
* To use register names with standard convension, please use EVADC_G2_CHCTR6.
*/
#define EVADC_G2CHCTR6 (EVADC_G2_CHCTR6)

/** \brief E1C, Group 2, Channel 7 Control Register */
#define EVADC_G2_CHCTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0020E1Cu)
/** Alias (User Manual Name) for EVADC_G2_CHCTR7.
* To use register names with standard convension, please use EVADC_G2_CHCTR7.
*/
#define EVADC_G2CHCTR7 (EVADC_G2_CHCTR7)

/** \brief E80, Group 2 Result Control Register 0 */
#define EVADC_G2_RCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020E80u)
/** Alias (User Manual Name) for EVADC_G2_RCR0.
* To use register names with standard convension, please use EVADC_G2_RCR0.
*/
#define EVADC_G2RCR0 (EVADC_G2_RCR0)

/** \brief E84, Group 2 Result Control Register 1 */
#define EVADC_G2_RCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020E84u)
/** Alias (User Manual Name) for EVADC_G2_RCR1.
* To use register names with standard convension, please use EVADC_G2_RCR1.
*/
#define EVADC_G2RCR1 (EVADC_G2_RCR1)

/** \brief E88, Group 2 Result Control Register 2 */
#define EVADC_G2_RCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020E88u)
/** Alias (User Manual Name) for EVADC_G2_RCR2.
* To use register names with standard convension, please use EVADC_G2_RCR2.
*/
#define EVADC_G2RCR2 (EVADC_G2_RCR2)

/** \brief E8C, Group 2 Result Control Register 3 */
#define EVADC_G2_RCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020E8Cu)
/** Alias (User Manual Name) for EVADC_G2_RCR3.
* To use register names with standard convension, please use EVADC_G2_RCR3.
*/
#define EVADC_G2RCR3 (EVADC_G2_RCR3)

/** \brief E90, Group 2 Result Control Register 4 */
#define EVADC_G2_RCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020E90u)
/** Alias (User Manual Name) for EVADC_G2_RCR4.
* To use register names with standard convension, please use EVADC_G2_RCR4.
*/
#define EVADC_G2RCR4 (EVADC_G2_RCR4)

/** \brief E94, Group 2 Result Control Register 5 */
#define EVADC_G2_RCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020E94u)
/** Alias (User Manual Name) for EVADC_G2_RCR5.
* To use register names with standard convension, please use EVADC_G2_RCR5.
*/
#define EVADC_G2RCR5 (EVADC_G2_RCR5)

/** \brief E98, Group 2 Result Control Register 6 */
#define EVADC_G2_RCR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020E98u)
/** Alias (User Manual Name) for EVADC_G2_RCR6.
* To use register names with standard convension, please use EVADC_G2_RCR6.
*/
#define EVADC_G2RCR6 (EVADC_G2_RCR6)

/** \brief E9C, Group 2 Result Control Register 7 */
#define EVADC_G2_RCR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020E9Cu)
/** Alias (User Manual Name) for EVADC_G2_RCR7.
* To use register names with standard convension, please use EVADC_G2_RCR7.
*/
#define EVADC_G2RCR7 (EVADC_G2_RCR7)

/** \brief EA0, Group 2 Result Control Register 8 */
#define EVADC_G2_RCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020EA0u)
/** Alias (User Manual Name) for EVADC_G2_RCR8.
* To use register names with standard convension, please use EVADC_G2_RCR8.
*/
#define EVADC_G2RCR8 (EVADC_G2_RCR8)

/** \brief EA4, Group 2 Result Control Register 9 */
#define EVADC_G2_RCR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020EA4u)
/** Alias (User Manual Name) for EVADC_G2_RCR9.
* To use register names with standard convension, please use EVADC_G2_RCR9.
*/
#define EVADC_G2RCR9 (EVADC_G2_RCR9)

/** \brief EA8, Group 2 Result Control Register 10 */
#define EVADC_G2_RCR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020EA8u)
/** Alias (User Manual Name) for EVADC_G2_RCR10.
* To use register names with standard convension, please use EVADC_G2_RCR10.
*/
#define EVADC_G2RCR10 (EVADC_G2_RCR10)

/** \brief EAC, Group 2 Result Control Register 11 */
#define EVADC_G2_RCR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020EACu)
/** Alias (User Manual Name) for EVADC_G2_RCR11.
* To use register names with standard convension, please use EVADC_G2_RCR11.
*/
#define EVADC_G2RCR11 (EVADC_G2_RCR11)

/** \brief EB0, Group 2 Result Control Register 12 */
#define EVADC_G2_RCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020EB0u)
/** Alias (User Manual Name) for EVADC_G2_RCR12.
* To use register names with standard convension, please use EVADC_G2_RCR12.
*/
#define EVADC_G2RCR12 (EVADC_G2_RCR12)

/** \brief EB4, Group 2 Result Control Register 13 */
#define EVADC_G2_RCR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020EB4u)
/** Alias (User Manual Name) for EVADC_G2_RCR13.
* To use register names with standard convension, please use EVADC_G2_RCR13.
*/
#define EVADC_G2RCR13 (EVADC_G2_RCR13)

/** \brief EB8, Group 2 Result Control Register 14 */
#define EVADC_G2_RCR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020EB8u)
/** Alias (User Manual Name) for EVADC_G2_RCR14.
* To use register names with standard convension, please use EVADC_G2_RCR14.
*/
#define EVADC_G2RCR14 (EVADC_G2_RCR14)

/** \brief EBC, Group 2 Result Control Register 15 */
#define EVADC_G2_RCR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0020EBCu)
/** Alias (User Manual Name) for EVADC_G2_RCR15.
* To use register names with standard convension, please use EVADC_G2_RCR15.
*/
#define EVADC_G2RCR15 (EVADC_G2_RCR15)

/** \brief F00, Group 2 Result Register 0\n */
#define EVADC_G2_RES0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F00u)
/** Alias (User Manual Name) for EVADC_G2_RES0.
* To use register names with standard convension, please use EVADC_G2_RES0.
*/
#define EVADC_G2RES0 (EVADC_G2_RES0)

/** \brief F04, Group 2 Result Register 1\n */
#define EVADC_G2_RES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F04u)
/** Alias (User Manual Name) for EVADC_G2_RES1.
* To use register names with standard convension, please use EVADC_G2_RES1.
*/
#define EVADC_G2RES1 (EVADC_G2_RES1)

/** \brief F08, Group 2 Result Register 2\n */
#define EVADC_G2_RES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F08u)
/** Alias (User Manual Name) for EVADC_G2_RES2.
* To use register names with standard convension, please use EVADC_G2_RES2.
*/
#define EVADC_G2RES2 (EVADC_G2_RES2)

/** \brief F0C, Group 2 Result Register 3\n */
#define EVADC_G2_RES3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F0Cu)
/** Alias (User Manual Name) for EVADC_G2_RES3.
* To use register names with standard convension, please use EVADC_G2_RES3.
*/
#define EVADC_G2RES3 (EVADC_G2_RES3)

/** \brief F10, Group 2 Result Register 4\n */
#define EVADC_G2_RES4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F10u)
/** Alias (User Manual Name) for EVADC_G2_RES4.
* To use register names with standard convension, please use EVADC_G2_RES4.
*/
#define EVADC_G2RES4 (EVADC_G2_RES4)

/** \brief F14, Group 2 Result Register 5\n */
#define EVADC_G2_RES5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F14u)
/** Alias (User Manual Name) for EVADC_G2_RES5.
* To use register names with standard convension, please use EVADC_G2_RES5.
*/
#define EVADC_G2RES5 (EVADC_G2_RES5)

/** \brief F18, Group 2 Result Register 6\n */
#define EVADC_G2_RES6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F18u)
/** Alias (User Manual Name) for EVADC_G2_RES6.
* To use register names with standard convension, please use EVADC_G2_RES6.
*/
#define EVADC_G2RES6 (EVADC_G2_RES6)

/** \brief F1C, Group 2 Result Register 7\n */
#define EVADC_G2_RES7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F1Cu)
/** Alias (User Manual Name) for EVADC_G2_RES7.
* To use register names with standard convension, please use EVADC_G2_RES7.
*/
#define EVADC_G2RES7 (EVADC_G2_RES7)

/** \brief F20, Group 2 Result Register 8\n */
#define EVADC_G2_RES8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F20u)
/** Alias (User Manual Name) for EVADC_G2_RES8.
* To use register names with standard convension, please use EVADC_G2_RES8.
*/
#define EVADC_G2RES8 (EVADC_G2_RES8)

/** \brief F24, Group 2 Result Register 9\n */
#define EVADC_G2_RES9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F24u)
/** Alias (User Manual Name) for EVADC_G2_RES9.
* To use register names with standard convension, please use EVADC_G2_RES9.
*/
#define EVADC_G2RES9 (EVADC_G2_RES9)

/** \brief F28, Group 2 Result Register 10\n */
#define EVADC_G2_RES10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F28u)
/** Alias (User Manual Name) for EVADC_G2_RES10.
* To use register names with standard convension, please use EVADC_G2_RES10.
*/
#define EVADC_G2RES10 (EVADC_G2_RES10)

/** \brief F2C, Group 2 Result Register 11\n */
#define EVADC_G2_RES11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F2Cu)
/** Alias (User Manual Name) for EVADC_G2_RES11.
* To use register names with standard convension, please use EVADC_G2_RES11.
*/
#define EVADC_G2RES11 (EVADC_G2_RES11)

/** \brief F30, Group 2 Result Register 12\n */
#define EVADC_G2_RES12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F30u)
/** Alias (User Manual Name) for EVADC_G2_RES12.
* To use register names with standard convension, please use EVADC_G2_RES12.
*/
#define EVADC_G2RES12 (EVADC_G2_RES12)

/** \brief F34, Group 2 Result Register 13\n */
#define EVADC_G2_RES13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F34u)
/** Alias (User Manual Name) for EVADC_G2_RES13.
* To use register names with standard convension, please use EVADC_G2_RES13.
*/
#define EVADC_G2RES13 (EVADC_G2_RES13)

/** \brief F38, Group 2 Result Register 14\n */
#define EVADC_G2_RES14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F38u)
/** Alias (User Manual Name) for EVADC_G2_RES14.
* To use register names with standard convension, please use EVADC_G2_RES14.
*/
#define EVADC_G2RES14 (EVADC_G2_RES14)

/** \brief F3C, Group 2 Result Register 15\n */
#define EVADC_G2_RES15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0020F3Cu)
/** Alias (User Manual Name) for EVADC_G2_RES15.
* To use register names with standard convension, please use EVADC_G2_RES15.
*/
#define EVADC_G2RES15 (EVADC_G2_RES15)

/** \brief F80, Group 2 Result Reg. 0, Debug */
#define EVADC_G2_RESD0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020F80u)
/** Alias (User Manual Name) for EVADC_G2_RESD0.
* To use register names with standard convension, please use EVADC_G2_RESD0.
*/
#define EVADC_G2RESD0 (EVADC_G2_RESD0)

/** \brief F84, Group 2 Result Reg. 1, Debug */
#define EVADC_G2_RESD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020F84u)
/** Alias (User Manual Name) for EVADC_G2_RESD1.
* To use register names with standard convension, please use EVADC_G2_RESD1.
*/
#define EVADC_G2RESD1 (EVADC_G2_RESD1)

/** \brief F88, Group 2 Result Reg. 2, Debug */
#define EVADC_G2_RESD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020F88u)
/** Alias (User Manual Name) for EVADC_G2_RESD2.
* To use register names with standard convension, please use EVADC_G2_RESD2.
*/
#define EVADC_G2RESD2 (EVADC_G2_RESD2)

/** \brief F8C, Group 2 Result Reg. 3, Debug */
#define EVADC_G2_RESD3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020F8Cu)
/** Alias (User Manual Name) for EVADC_G2_RESD3.
* To use register names with standard convension, please use EVADC_G2_RESD3.
*/
#define EVADC_G2RESD3 (EVADC_G2_RESD3)

/** \brief F90, Group 2 Result Reg. 4, Debug */
#define EVADC_G2_RESD4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020F90u)
/** Alias (User Manual Name) for EVADC_G2_RESD4.
* To use register names with standard convension, please use EVADC_G2_RESD4.
*/
#define EVADC_G2RESD4 (EVADC_G2_RESD4)

/** \brief F94, Group 2 Result Reg. 5, Debug */
#define EVADC_G2_RESD5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020F94u)
/** Alias (User Manual Name) for EVADC_G2_RESD5.
* To use register names with standard convension, please use EVADC_G2_RESD5.
*/
#define EVADC_G2RESD5 (EVADC_G2_RESD5)

/** \brief F98, Group 2 Result Reg. 6, Debug */
#define EVADC_G2_RESD6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020F98u)
/** Alias (User Manual Name) for EVADC_G2_RESD6.
* To use register names with standard convension, please use EVADC_G2_RESD6.
*/
#define EVADC_G2RESD6 (EVADC_G2_RESD6)

/** \brief F9C, Group 2 Result Reg. 7, Debug */
#define EVADC_G2_RESD7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020F9Cu)
/** Alias (User Manual Name) for EVADC_G2_RESD7.
* To use register names with standard convension, please use EVADC_G2_RESD7.
*/
#define EVADC_G2RESD7 (EVADC_G2_RESD7)

/** \brief FA0, Group 2 Result Reg. 8, Debug */
#define EVADC_G2_RESD8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020FA0u)
/** Alias (User Manual Name) for EVADC_G2_RESD8.
* To use register names with standard convension, please use EVADC_G2_RESD8.
*/
#define EVADC_G2RESD8 (EVADC_G2_RESD8)

/** \brief FA4, Group 2 Result Reg. 9, Debug */
#define EVADC_G2_RESD9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020FA4u)
/** Alias (User Manual Name) for EVADC_G2_RESD9.
* To use register names with standard convension, please use EVADC_G2_RESD9.
*/
#define EVADC_G2RESD9 (EVADC_G2_RESD9)

/** \brief FA8, Group 2 Result Reg. 10, Debug */
#define EVADC_G2_RESD10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020FA8u)
/** Alias (User Manual Name) for EVADC_G2_RESD10.
* To use register names with standard convension, please use EVADC_G2_RESD10.
*/
#define EVADC_G2RESD10 (EVADC_G2_RESD10)

/** \brief FAC, Group 2 Result Reg. 11, Debug */
#define EVADC_G2_RESD11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020FACu)
/** Alias (User Manual Name) for EVADC_G2_RESD11.
* To use register names with standard convension, please use EVADC_G2_RESD11.
*/
#define EVADC_G2RESD11 (EVADC_G2_RESD11)

/** \brief FB0, Group 2 Result Reg. 12, Debug */
#define EVADC_G2_RESD12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020FB0u)
/** Alias (User Manual Name) for EVADC_G2_RESD12.
* To use register names with standard convension, please use EVADC_G2_RESD12.
*/
#define EVADC_G2RESD12 (EVADC_G2_RESD12)

/** \brief FB4, Group 2 Result Reg. 13, Debug */
#define EVADC_G2_RESD13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020FB4u)
/** Alias (User Manual Name) for EVADC_G2_RESD13.
* To use register names with standard convension, please use EVADC_G2_RESD13.
*/
#define EVADC_G2RESD13 (EVADC_G2_RESD13)

/** \brief FB8, Group 2 Result Reg. 14, Debug */
#define EVADC_G2_RESD14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020FB8u)
/** Alias (User Manual Name) for EVADC_G2_RESD14.
* To use register names with standard convension, please use EVADC_G2_RESD14.
*/
#define EVADC_G2RESD14 (EVADC_G2_RESD14)

/** \brief FBC, Group 2 Result Reg. 15, Debug */
#define EVADC_G2_RESD15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0020FBCu)
/** Alias (User Manual Name) for EVADC_G2_RESD15.
* To use register names with standard convension, please use EVADC_G2_RESD15.
*/
#define EVADC_G2RESD15 (EVADC_G2_RESD15)

/** \brief 1010, Trigger Control Register, Group 3 */
#define EVADC_G3_TRCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_TRCTR*)0xF0021010u)
/** Alias (User Manual Name) for EVADC_G3_TRCTR.
* To use register names with standard convension, please use EVADC_G3_TRCTR.
*/
#define EVADC_G3TRCTR (EVADC_G3_TRCTR)

/** \brief 1080, Arbitration Config. Register, Group 3 */
#define EVADC_G3_ARBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBCFG*)0xF0021080u)
/** Alias (User Manual Name) for EVADC_G3_ARBCFG.
* To use register names with standard convension, please use EVADC_G3_ARBCFG.
*/
#define EVADC_G3ARBCFG (EVADC_G3_ARBCFG)

/** \brief 1084, Arbitration Priority Register, Group 3 */
#define EVADC_G3_ARBPR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBPR*)0xF0021084u)
/** Alias (User Manual Name) for EVADC_G3_ARBPR.
* To use register names with standard convension, please use EVADC_G3_ARBPR.
*/
#define EVADC_G3ARBPR (EVADC_G3_ARBPR)

/** \brief 1088, Analog Fct. Config. Register, Group 3 */
#define EVADC_G3_ANCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ANCFG*)0xF0021088u)
/** Alias (User Manual Name) for EVADC_G3_ANCFG.
* To use register names with standard convension, please use EVADC_G3_ANCFG.
*/
#define EVADC_G3ANCFG (EVADC_G3_ANCFG)

/** \brief 10A0, Input Class Register 0, Group 3 */
#define EVADC_G3_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00210A0u)
/** Alias (User Manual Name) for EVADC_G3_ICLASS0.
* To use register names with standard convension, please use EVADC_G3_ICLASS0.
*/
#define EVADC_G3ICLASS0 (EVADC_G3_ICLASS0)

/** \brief 10A4, Input Class Register 1, Group 3 */
#define EVADC_G3_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00210A4u)
/** Alias (User Manual Name) for EVADC_G3_ICLASS1.
* To use register names with standard convension, please use EVADC_G3_ICLASS1.
*/
#define EVADC_G3ICLASS1 (EVADC_G3_ICLASS1)

/** \brief 10B0, Alias Register, Group 3 */
#define EVADC_G3_ALIAS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ALIAS*)0xF00210B0u)
/** Alias (User Manual Name) for EVADC_G3_ALIAS.
* To use register names with standard convension, please use EVADC_G3_ALIAS.
*/
#define EVADC_G3ALIAS (EVADC_G3_ALIAS)

/** \brief 10B8, Boundary Select Register, Group 3 */
#define EVADC_G3_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_BOUND*)0xF00210B8u)
/** Alias (User Manual Name) for EVADC_G3_BOUND.
* To use register names with standard convension, please use EVADC_G3_BOUND.
*/
#define EVADC_G3BOUND (EVADC_G3_BOUND)

/** \brief 10C0, Synchronization Control Register, Group 3 */
#define EVADC_G3_SYNCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SYNCTR*)0xF00210C0u)
/** Alias (User Manual Name) for EVADC_G3_SYNCTR.
* To use register names with standard convension, please use EVADC_G3_SYNCTR.
*/
#define EVADC_G3SYNCTR (EVADC_G3_SYNCTR)

/** \brief 1100, Queue 0 Source Contr. Register, Group 3 */
#define EVADC_G3_Q0_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0021100u)
/** Alias (User Manual Name) for EVADC_G3_Q0_QCTRL.
* To use register names with standard convension, please use EVADC_G3_Q0_QCTRL.
*/
#define EVADC_G3QCTRL0 (EVADC_G3_Q0_QCTRL)

/** \brief 1104, Queue 0 Mode Register, Group 3 */
#define EVADC_G3_Q0_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0021104u)
/** Alias (User Manual Name) for EVADC_G3_Q0_QMR.
* To use register names with standard convension, please use EVADC_G3_Q0_QMR.
*/
#define EVADC_G3QMR0 (EVADC_G3_Q0_QMR)

/** \brief 1108, Queue 0 Status Register, Group 3 */
#define EVADC_G3_Q0_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0021108u)
/** Alias (User Manual Name) for EVADC_G3_Q0_QSR.
* To use register names with standard convension, please use EVADC_G3_Q0_QSR.
*/
#define EVADC_G3QSR0 (EVADC_G3_Q0_QSR)

/** \brief 110C, Queue 0 Register 0, Group 3 */
#define EVADC_G3_Q0_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002110Cu)
/** Alias (User Manual Name) for EVADC_G3_Q0_Q0R.
* To use register names with standard convension, please use EVADC_G3_Q0_Q0R.
*/
#define EVADC_G3Q0R0 (EVADC_G3_Q0_Q0R)

/** \brief 1110, Queue 0 Input Register, Group 3 */
#define EVADC_G3_Q0_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0021110u)
/** Alias (User Manual Name) for EVADC_G3_Q0_QINR.
* To use register names with standard convension, please use EVADC_G3_Q0_QINR.
*/
#define EVADC_G3QINR0 (EVADC_G3_Q0_QINR)

/** \brief 1114, Queue 0 Backup Register, Group 3 */
#define EVADC_G3_Q0_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0021114u)
/** Alias (User Manual Name) for EVADC_G3_Q0_QBUR.
* To use register names with standard convension, please use EVADC_G3_Q0_QBUR.
*/
#define EVADC_G3QBUR0 (EVADC_G3_Q0_QBUR)

/** \brief 1118, Queue 0 Requ. Timer Mode Reg., Group 3 */
#define EVADC_G3_Q0_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0021118u)
/** Alias (User Manual Name) for EVADC_G3_Q0_REQTM.
* To use register names with standard convension, please use EVADC_G3_Q0_REQTM.
*/
#define EVADC_G3REQTM0 (EVADC_G3_Q0_REQTM)

/** \brief 111C, Queue 0 Requ. Timer Status Reg., Group 3 */
#define EVADC_G3_Q0_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002111Cu)
/** Alias (User Manual Name) for EVADC_G3_Q0_REQTS.
* To use register names with standard convension, please use EVADC_G3_Q0_REQTS.
*/
#define EVADC_G3REQTS0 (EVADC_G3_Q0_REQTS)

/** \brief 1120, Queue 1 Source Contr. Register, Group 3 */
#define EVADC_G3_Q1_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0021120u)
/** Alias (User Manual Name) for EVADC_G3_Q1_QCTRL.
* To use register names with standard convension, please use EVADC_G3_Q1_QCTRL.
*/
#define EVADC_G3QCTRL1 (EVADC_G3_Q1_QCTRL)

/** \brief 1124, Queue 1 Mode Register, Group 3 */
#define EVADC_G3_Q1_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0021124u)
/** Alias (User Manual Name) for EVADC_G3_Q1_QMR.
* To use register names with standard convension, please use EVADC_G3_Q1_QMR.
*/
#define EVADC_G3QMR1 (EVADC_G3_Q1_QMR)

/** \brief 1128, Queue 1 Status Register, Group 3 */
#define EVADC_G3_Q1_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0021128u)
/** Alias (User Manual Name) for EVADC_G3_Q1_QSR.
* To use register names with standard convension, please use EVADC_G3_Q1_QSR.
*/
#define EVADC_G3QSR1 (EVADC_G3_Q1_QSR)

/** \brief 112C, Queue 1 Register 0, Group 3 */
#define EVADC_G3_Q1_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002112Cu)
/** Alias (User Manual Name) for EVADC_G3_Q1_Q0R.
* To use register names with standard convension, please use EVADC_G3_Q1_Q0R.
*/
#define EVADC_G3Q0R1 (EVADC_G3_Q1_Q0R)

/** \brief 1130, Queue 1 Input Register, Group 3 */
#define EVADC_G3_Q1_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0021130u)
/** Alias (User Manual Name) for EVADC_G3_Q1_QINR.
* To use register names with standard convension, please use EVADC_G3_Q1_QINR.
*/
#define EVADC_G3QINR1 (EVADC_G3_Q1_QINR)

/** \brief 1134, Queue 1 Backup Register, Group 3 */
#define EVADC_G3_Q1_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0021134u)
/** Alias (User Manual Name) for EVADC_G3_Q1_QBUR.
* To use register names with standard convension, please use EVADC_G3_Q1_QBUR.
*/
#define EVADC_G3QBUR1 (EVADC_G3_Q1_QBUR)

/** \brief 1138, Queue 1 Requ. Timer Mode Reg., Group 3 */
#define EVADC_G3_Q1_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0021138u)
/** Alias (User Manual Name) for EVADC_G3_Q1_REQTM.
* To use register names with standard convension, please use EVADC_G3_Q1_REQTM.
*/
#define EVADC_G3REQTM1 (EVADC_G3_Q1_REQTM)

/** \brief 113C, Queue 1 Requ. Timer Status Reg., Group 3 */
#define EVADC_G3_Q1_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002113Cu)
/** Alias (User Manual Name) for EVADC_G3_Q1_REQTS.
* To use register names with standard convension, please use EVADC_G3_Q1_REQTS.
*/
#define EVADC_G3REQTS1 (EVADC_G3_Q1_REQTS)

/** \brief 1140, Queue 2 Source Contr. Register, Group 3 */
#define EVADC_G3_Q2_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0021140u)
/** Alias (User Manual Name) for EVADC_G3_Q2_QCTRL.
* To use register names with standard convension, please use EVADC_G3_Q2_QCTRL.
*/
#define EVADC_G3QCTRL2 (EVADC_G3_Q2_QCTRL)

/** \brief 1144, Queue 2 Mode Register, Group 3 */
#define EVADC_G3_Q2_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0021144u)
/** Alias (User Manual Name) for EVADC_G3_Q2_QMR.
* To use register names with standard convension, please use EVADC_G3_Q2_QMR.
*/
#define EVADC_G3QMR2 (EVADC_G3_Q2_QMR)

/** \brief 1148, Queue 2 Status Register, Group 3 */
#define EVADC_G3_Q2_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0021148u)
/** Alias (User Manual Name) for EVADC_G3_Q2_QSR.
* To use register names with standard convension, please use EVADC_G3_Q2_QSR.
*/
#define EVADC_G3QSR2 (EVADC_G3_Q2_QSR)

/** \brief 114C, Queue 2 Register 0, Group 3 */
#define EVADC_G3_Q2_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002114Cu)
/** Alias (User Manual Name) for EVADC_G3_Q2_Q0R.
* To use register names with standard convension, please use EVADC_G3_Q2_Q0R.
*/
#define EVADC_G3Q0R2 (EVADC_G3_Q2_Q0R)

/** \brief 1150, Queue 2 Input Register, Group 3 */
#define EVADC_G3_Q2_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0021150u)
/** Alias (User Manual Name) for EVADC_G3_Q2_QINR.
* To use register names with standard convension, please use EVADC_G3_Q2_QINR.
*/
#define EVADC_G3QINR2 (EVADC_G3_Q2_QINR)

/** \brief 1154, Queue 2 Backup Register, Group 3 */
#define EVADC_G3_Q2_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0021154u)
/** Alias (User Manual Name) for EVADC_G3_Q2_QBUR.
* To use register names with standard convension, please use EVADC_G3_Q2_QBUR.
*/
#define EVADC_G3QBUR2 (EVADC_G3_Q2_QBUR)

/** \brief 1158, Queue 2 Requ. Timer Mode Reg., Group 3 */
#define EVADC_G3_Q2_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0021158u)
/** Alias (User Manual Name) for EVADC_G3_Q2_REQTM.
* To use register names with standard convension, please use EVADC_G3_Q2_REQTM.
*/
#define EVADC_G3REQTM2 (EVADC_G3_Q2_REQTM)

/** \brief 115C, Queue 2 Requ. Timer Status Reg., Group 3 */
#define EVADC_G3_Q2_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002115Cu)
/** Alias (User Manual Name) for EVADC_G3_Q2_REQTS.
* To use register names with standard convension, please use EVADC_G3_Q2_REQTS.
*/
#define EVADC_G3REQTS2 (EVADC_G3_Q2_REQTS)

/** \brief 1180, Channel Event Flag Register, Group 3 */
#define EVADC_G3_CEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFLAG*)0xF0021180u)
/** Alias (User Manual Name) for EVADC_G3_CEFLAG.
* To use register names with standard convension, please use EVADC_G3_CEFLAG.
*/
#define EVADC_G3CEFLAG (EVADC_G3_CEFLAG)

/** \brief 1184, Result Event Flag Register, Group 3 */
#define EVADC_G3_REFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFLAG*)0xF0021184u)
/** Alias (User Manual Name) for EVADC_G3_REFLAG.
* To use register names with standard convension, please use EVADC_G3_REFLAG.
*/
#define EVADC_G3REFLAG (EVADC_G3_REFLAG)

/** \brief 1188, Source Event Flag Register, Group 3 */
#define EVADC_G3_SEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFLAG*)0xF0021188u)
/** Alias (User Manual Name) for EVADC_G3_SEFLAG.
* To use register names with standard convension, please use EVADC_G3_SEFLAG.
*/
#define EVADC_G3SEFLAG (EVADC_G3_SEFLAG)

/** \brief 1190, Channel Event Flag Clear Register, Group 3 */
#define EVADC_G3_CEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFCLR*)0xF0021190u)
/** Alias (User Manual Name) for EVADC_G3_CEFCLR.
* To use register names with standard convension, please use EVADC_G3_CEFCLR.
*/
#define EVADC_G3CEFCLR (EVADC_G3_CEFCLR)

/** \brief 1194, Result Event Flag Clear Register, Group 3 */
#define EVADC_G3_REFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFCLR*)0xF0021194u)
/** Alias (User Manual Name) for EVADC_G3_REFCLR.
* To use register names with standard convension, please use EVADC_G3_REFCLR.
*/
#define EVADC_G3REFCLR (EVADC_G3_REFCLR)

/** \brief 1198, Source Event Flag Clear Reg., Group 3 */
#define EVADC_G3_SEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFCLR*)0xF0021198u)
/** Alias (User Manual Name) for EVADC_G3_SEFCLR.
* To use register names with standard convension, please use EVADC_G3_SEFCLR.
*/
#define EVADC_G3SEFCLR (EVADC_G3_SEFCLR)

/** \brief 11A0, Channel Event Node Pointer Reg. 0, Group 3 */
#define EVADC_G3_CEVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP0*)0xF00211A0u)
/** Alias (User Manual Name) for EVADC_G3_CEVNP0.
* To use register names with standard convension, please use EVADC_G3_CEVNP0.
*/
#define EVADC_G3CEVNP0 (EVADC_G3_CEVNP0)

/** \brief 11A4, Channel Event Node Pointer Reg. 1, Group 3 */
#define EVADC_G3_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00211A4u)
/** Alias (User Manual Name) for EVADC_G3_CEVNP1.
* To use register names with standard convension, please use EVADC_G3_CEVNP1.
*/
#define EVADC_G3CEVNP1 (EVADC_G3_CEVNP1)

/** \brief 11B0, Result Event Node Pointer Reg. 0, Group 3 */
#define EVADC_G3_REVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP0*)0xF00211B0u)
/** Alias (User Manual Name) for EVADC_G3_REVNP0.
* To use register names with standard convension, please use EVADC_G3_REVNP0.
*/
#define EVADC_G3REVNP0 (EVADC_G3_REVNP0)

/** \brief 11B4, Result Event Node Pointer Reg. 1, Group 3 */
#define EVADC_G3_REVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP1*)0xF00211B4u)
/** Alias (User Manual Name) for EVADC_G3_REVNP1.
* To use register names with standard convension, please use EVADC_G3_REVNP1.
*/
#define EVADC_G3REVNP1 (EVADC_G3_REVNP1)

/** \brief 11C0, Source Event Node Pointer Reg., Group 3 */
#define EVADC_G3_SEVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEVNP*)0xF00211C0u)
/** Alias (User Manual Name) for EVADC_G3_SEVNP.
* To use register names with standard convension, please use EVADC_G3_SEVNP.
*/
#define EVADC_G3SEVNP (EVADC_G3_SEVNP)

/** \brief 11C8, Service Request Software Activation Trigger, Group 3 */
#define EVADC_G3_SRACT /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SRACT*)0xF00211C8u)
/** Alias (User Manual Name) for EVADC_G3_SRACT.
* To use register names with standard convension, please use EVADC_G3_SRACT.
*/
#define EVADC_G3SRACT (EVADC_G3_SRACT)

/** \brief 11F0, External Multiplexer Control Reg., Group 3 */
#define EVADC_G3_EMUXCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCTR*)0xF00211F0u)
/** Alias (User Manual Name) for EVADC_G3_EMUXCTR.
* To use register names with standard convension, please use EVADC_G3_EMUXCTR.
*/
#define EVADC_G3EMUXCTR (EVADC_G3_EMUXCTR)

/** \brief 11F4, Ext. Multiplexer Channel Select Reg., Group 3 */
#define EVADC_G3_EMUXCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCS*)0xF00211F4u)
/** Alias (User Manual Name) for EVADC_G3_EMUXCS.
* To use register names with standard convension, please use EVADC_G3_EMUXCS.
*/
#define EVADC_G3EMUXCS (EVADC_G3_EMUXCS)

/** \brief 11F8, Valid Flag Register, Group 3 */
#define EVADC_G3_VFR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_VFR*)0xF00211F8u)
/** Alias (User Manual Name) for EVADC_G3_VFR.
* To use register names with standard convension, please use EVADC_G3_VFR.
*/
#define EVADC_G3VFR (EVADC_G3_VFR)

/** \brief 1200, Group 3, Channel 0 Control Register */
#define EVADC_G3_CHCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0021200u)
/** Alias (User Manual Name) for EVADC_G3_CHCTR0.
* To use register names with standard convension, please use EVADC_G3_CHCTR0.
*/
#define EVADC_G3CHCTR0 (EVADC_G3_CHCTR0)

/** \brief 1204, Group 3, Channel 1 Control Register */
#define EVADC_G3_CHCTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0021204u)
/** Alias (User Manual Name) for EVADC_G3_CHCTR1.
* To use register names with standard convension, please use EVADC_G3_CHCTR1.
*/
#define EVADC_G3CHCTR1 (EVADC_G3_CHCTR1)

/** \brief 1208, Group 3, Channel 2 Control Register */
#define EVADC_G3_CHCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0021208u)
/** Alias (User Manual Name) for EVADC_G3_CHCTR2.
* To use register names with standard convension, please use EVADC_G3_CHCTR2.
*/
#define EVADC_G3CHCTR2 (EVADC_G3_CHCTR2)

/** \brief 120C, Group 3, Channel 3 Control Register */
#define EVADC_G3_CHCTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002120Cu)
/** Alias (User Manual Name) for EVADC_G3_CHCTR3.
* To use register names with standard convension, please use EVADC_G3_CHCTR3.
*/
#define EVADC_G3CHCTR3 (EVADC_G3_CHCTR3)

/** \brief 1210, Group 3, Channel 4 Control Register */
#define EVADC_G3_CHCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0021210u)
/** Alias (User Manual Name) for EVADC_G3_CHCTR4.
* To use register names with standard convension, please use EVADC_G3_CHCTR4.
*/
#define EVADC_G3CHCTR4 (EVADC_G3_CHCTR4)

/** \brief 1214, Group 3, Channel 5 Control Register */
#define EVADC_G3_CHCTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0021214u)
/** Alias (User Manual Name) for EVADC_G3_CHCTR5.
* To use register names with standard convension, please use EVADC_G3_CHCTR5.
*/
#define EVADC_G3CHCTR5 (EVADC_G3_CHCTR5)

/** \brief 1218, Group 3, Channel 6 Control Register */
#define EVADC_G3_CHCTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0021218u)
/** Alias (User Manual Name) for EVADC_G3_CHCTR6.
* To use register names with standard convension, please use EVADC_G3_CHCTR6.
*/
#define EVADC_G3CHCTR6 (EVADC_G3_CHCTR6)

/** \brief 121C, Group 3, Channel 7 Control Register */
#define EVADC_G3_CHCTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002121Cu)
/** Alias (User Manual Name) for EVADC_G3_CHCTR7.
* To use register names with standard convension, please use EVADC_G3_CHCTR7.
*/
#define EVADC_G3CHCTR7 (EVADC_G3_CHCTR7)

/** \brief 1280, Group 3 Result Control Register 0 */
#define EVADC_G3_RCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0021280u)
/** Alias (User Manual Name) for EVADC_G3_RCR0.
* To use register names with standard convension, please use EVADC_G3_RCR0.
*/
#define EVADC_G3RCR0 (EVADC_G3_RCR0)

/** \brief 1284, Group 3 Result Control Register 1 */
#define EVADC_G3_RCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0021284u)
/** Alias (User Manual Name) for EVADC_G3_RCR1.
* To use register names with standard convension, please use EVADC_G3_RCR1.
*/
#define EVADC_G3RCR1 (EVADC_G3_RCR1)

/** \brief 1288, Group 3 Result Control Register 2 */
#define EVADC_G3_RCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0021288u)
/** Alias (User Manual Name) for EVADC_G3_RCR2.
* To use register names with standard convension, please use EVADC_G3_RCR2.
*/
#define EVADC_G3RCR2 (EVADC_G3_RCR2)

/** \brief 128C, Group 3 Result Control Register 3 */
#define EVADC_G3_RCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF002128Cu)
/** Alias (User Manual Name) for EVADC_G3_RCR3.
* To use register names with standard convension, please use EVADC_G3_RCR3.
*/
#define EVADC_G3RCR3 (EVADC_G3_RCR3)

/** \brief 1290, Group 3 Result Control Register 4 */
#define EVADC_G3_RCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0021290u)
/** Alias (User Manual Name) for EVADC_G3_RCR4.
* To use register names with standard convension, please use EVADC_G3_RCR4.
*/
#define EVADC_G3RCR4 (EVADC_G3_RCR4)

/** \brief 1294, Group 3 Result Control Register 5 */
#define EVADC_G3_RCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0021294u)
/** Alias (User Manual Name) for EVADC_G3_RCR5.
* To use register names with standard convension, please use EVADC_G3_RCR5.
*/
#define EVADC_G3RCR5 (EVADC_G3_RCR5)

/** \brief 1298, Group 3 Result Control Register 6 */
#define EVADC_G3_RCR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0021298u)
/** Alias (User Manual Name) for EVADC_G3_RCR6.
* To use register names with standard convension, please use EVADC_G3_RCR6.
*/
#define EVADC_G3RCR6 (EVADC_G3_RCR6)

/** \brief 129C, Group 3 Result Control Register 7 */
#define EVADC_G3_RCR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF002129Cu)
/** Alias (User Manual Name) for EVADC_G3_RCR7.
* To use register names with standard convension, please use EVADC_G3_RCR7.
*/
#define EVADC_G3RCR7 (EVADC_G3_RCR7)

/** \brief 12A0, Group 3 Result Control Register 8 */
#define EVADC_G3_RCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00212A0u)
/** Alias (User Manual Name) for EVADC_G3_RCR8.
* To use register names with standard convension, please use EVADC_G3_RCR8.
*/
#define EVADC_G3RCR8 (EVADC_G3_RCR8)

/** \brief 12A4, Group 3 Result Control Register 9 */
#define EVADC_G3_RCR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00212A4u)
/** Alias (User Manual Name) for EVADC_G3_RCR9.
* To use register names with standard convension, please use EVADC_G3_RCR9.
*/
#define EVADC_G3RCR9 (EVADC_G3_RCR9)

/** \brief 12A8, Group 3 Result Control Register 10 */
#define EVADC_G3_RCR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00212A8u)
/** Alias (User Manual Name) for EVADC_G3_RCR10.
* To use register names with standard convension, please use EVADC_G3_RCR10.
*/
#define EVADC_G3RCR10 (EVADC_G3_RCR10)

/** \brief 12AC, Group 3 Result Control Register 11 */
#define EVADC_G3_RCR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00212ACu)
/** Alias (User Manual Name) for EVADC_G3_RCR11.
* To use register names with standard convension, please use EVADC_G3_RCR11.
*/
#define EVADC_G3RCR11 (EVADC_G3_RCR11)

/** \brief 12B0, Group 3 Result Control Register 12 */
#define EVADC_G3_RCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00212B0u)
/** Alias (User Manual Name) for EVADC_G3_RCR12.
* To use register names with standard convension, please use EVADC_G3_RCR12.
*/
#define EVADC_G3RCR12 (EVADC_G3_RCR12)

/** \brief 12B4, Group 3 Result Control Register 13 */
#define EVADC_G3_RCR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00212B4u)
/** Alias (User Manual Name) for EVADC_G3_RCR13.
* To use register names with standard convension, please use EVADC_G3_RCR13.
*/
#define EVADC_G3RCR13 (EVADC_G3_RCR13)

/** \brief 12B8, Group 3 Result Control Register 14 */
#define EVADC_G3_RCR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00212B8u)
/** Alias (User Manual Name) for EVADC_G3_RCR14.
* To use register names with standard convension, please use EVADC_G3_RCR14.
*/
#define EVADC_G3RCR14 (EVADC_G3_RCR14)

/** \brief 12BC, Group 3 Result Control Register 15 */
#define EVADC_G3_RCR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00212BCu)
/** Alias (User Manual Name) for EVADC_G3_RCR15.
* To use register names with standard convension, please use EVADC_G3_RCR15.
*/
#define EVADC_G3RCR15 (EVADC_G3_RCR15)

/** \brief 1300, Group 3 Result Register 0\n */
#define EVADC_G3_RES0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021300u)
/** Alias (User Manual Name) for EVADC_G3_RES0.
* To use register names with standard convension, please use EVADC_G3_RES0.
*/
#define EVADC_G3RES0 (EVADC_G3_RES0)

/** \brief 1304, Group 3 Result Register 1\n */
#define EVADC_G3_RES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021304u)
/** Alias (User Manual Name) for EVADC_G3_RES1.
* To use register names with standard convension, please use EVADC_G3_RES1.
*/
#define EVADC_G3RES1 (EVADC_G3_RES1)

/** \brief 1308, Group 3 Result Register 2\n */
#define EVADC_G3_RES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021308u)
/** Alias (User Manual Name) for EVADC_G3_RES2.
* To use register names with standard convension, please use EVADC_G3_RES2.
*/
#define EVADC_G3RES2 (EVADC_G3_RES2)

/** \brief 130C, Group 3 Result Register 3\n */
#define EVADC_G3_RES3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002130Cu)
/** Alias (User Manual Name) for EVADC_G3_RES3.
* To use register names with standard convension, please use EVADC_G3_RES3.
*/
#define EVADC_G3RES3 (EVADC_G3_RES3)

/** \brief 1310, Group 3 Result Register 4\n */
#define EVADC_G3_RES4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021310u)
/** Alias (User Manual Name) for EVADC_G3_RES4.
* To use register names with standard convension, please use EVADC_G3_RES4.
*/
#define EVADC_G3RES4 (EVADC_G3_RES4)

/** \brief 1314, Group 3 Result Register 5\n */
#define EVADC_G3_RES5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021314u)
/** Alias (User Manual Name) for EVADC_G3_RES5.
* To use register names with standard convension, please use EVADC_G3_RES5.
*/
#define EVADC_G3RES5 (EVADC_G3_RES5)

/** \brief 1318, Group 3 Result Register 6\n */
#define EVADC_G3_RES6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021318u)
/** Alias (User Manual Name) for EVADC_G3_RES6.
* To use register names with standard convension, please use EVADC_G3_RES6.
*/
#define EVADC_G3RES6 (EVADC_G3_RES6)

/** \brief 131C, Group 3 Result Register 7\n */
#define EVADC_G3_RES7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002131Cu)
/** Alias (User Manual Name) for EVADC_G3_RES7.
* To use register names with standard convension, please use EVADC_G3_RES7.
*/
#define EVADC_G3RES7 (EVADC_G3_RES7)

/** \brief 1320, Group 3 Result Register 8\n */
#define EVADC_G3_RES8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021320u)
/** Alias (User Manual Name) for EVADC_G3_RES8.
* To use register names with standard convension, please use EVADC_G3_RES8.
*/
#define EVADC_G3RES8 (EVADC_G3_RES8)

/** \brief 1324, Group 3 Result Register 9\n */
#define EVADC_G3_RES9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021324u)
/** Alias (User Manual Name) for EVADC_G3_RES9.
* To use register names with standard convension, please use EVADC_G3_RES9.
*/
#define EVADC_G3RES9 (EVADC_G3_RES9)

/** \brief 1328, Group 3 Result Register 10\n */
#define EVADC_G3_RES10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021328u)
/** Alias (User Manual Name) for EVADC_G3_RES10.
* To use register names with standard convension, please use EVADC_G3_RES10.
*/
#define EVADC_G3RES10 (EVADC_G3_RES10)

/** \brief 132C, Group 3 Result Register 11\n */
#define EVADC_G3_RES11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002132Cu)
/** Alias (User Manual Name) for EVADC_G3_RES11.
* To use register names with standard convension, please use EVADC_G3_RES11.
*/
#define EVADC_G3RES11 (EVADC_G3_RES11)

/** \brief 1330, Group 3 Result Register 12\n */
#define EVADC_G3_RES12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021330u)
/** Alias (User Manual Name) for EVADC_G3_RES12.
* To use register names with standard convension, please use EVADC_G3_RES12.
*/
#define EVADC_G3RES12 (EVADC_G3_RES12)

/** \brief 1334, Group 3 Result Register 13\n */
#define EVADC_G3_RES13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021334u)
/** Alias (User Manual Name) for EVADC_G3_RES13.
* To use register names with standard convension, please use EVADC_G3_RES13.
*/
#define EVADC_G3RES13 (EVADC_G3_RES13)

/** \brief 1338, Group 3 Result Register 14\n */
#define EVADC_G3_RES14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0021338u)
/** Alias (User Manual Name) for EVADC_G3_RES14.
* To use register names with standard convension, please use EVADC_G3_RES14.
*/
#define EVADC_G3RES14 (EVADC_G3_RES14)

/** \brief 133C, Group 3 Result Register 15\n */
#define EVADC_G3_RES15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002133Cu)
/** Alias (User Manual Name) for EVADC_G3_RES15.
* To use register names with standard convension, please use EVADC_G3_RES15.
*/
#define EVADC_G3RES15 (EVADC_G3_RES15)

/** \brief 1380, Group 3 Result Reg. 0, Debug */
#define EVADC_G3_RESD0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0021380u)
/** Alias (User Manual Name) for EVADC_G3_RESD0.
* To use register names with standard convension, please use EVADC_G3_RESD0.
*/
#define EVADC_G3RESD0 (EVADC_G3_RESD0)

/** \brief 1384, Group 3 Result Reg. 1, Debug */
#define EVADC_G3_RESD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0021384u)
/** Alias (User Manual Name) for EVADC_G3_RESD1.
* To use register names with standard convension, please use EVADC_G3_RESD1.
*/
#define EVADC_G3RESD1 (EVADC_G3_RESD1)

/** \brief 1388, Group 3 Result Reg. 2, Debug */
#define EVADC_G3_RESD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0021388u)
/** Alias (User Manual Name) for EVADC_G3_RESD2.
* To use register names with standard convension, please use EVADC_G3_RESD2.
*/
#define EVADC_G3RESD2 (EVADC_G3_RESD2)

/** \brief 138C, Group 3 Result Reg. 3, Debug */
#define EVADC_G3_RESD3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF002138Cu)
/** Alias (User Manual Name) for EVADC_G3_RESD3.
* To use register names with standard convension, please use EVADC_G3_RESD3.
*/
#define EVADC_G3RESD3 (EVADC_G3_RESD3)

/** \brief 1390, Group 3 Result Reg. 4, Debug */
#define EVADC_G3_RESD4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0021390u)
/** Alias (User Manual Name) for EVADC_G3_RESD4.
* To use register names with standard convension, please use EVADC_G3_RESD4.
*/
#define EVADC_G3RESD4 (EVADC_G3_RESD4)

/** \brief 1394, Group 3 Result Reg. 5, Debug */
#define EVADC_G3_RESD5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0021394u)
/** Alias (User Manual Name) for EVADC_G3_RESD5.
* To use register names with standard convension, please use EVADC_G3_RESD5.
*/
#define EVADC_G3RESD5 (EVADC_G3_RESD5)

/** \brief 1398, Group 3 Result Reg. 6, Debug */
#define EVADC_G3_RESD6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0021398u)
/** Alias (User Manual Name) for EVADC_G3_RESD6.
* To use register names with standard convension, please use EVADC_G3_RESD6.
*/
#define EVADC_G3RESD6 (EVADC_G3_RESD6)

/** \brief 139C, Group 3 Result Reg. 7, Debug */
#define EVADC_G3_RESD7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF002139Cu)
/** Alias (User Manual Name) for EVADC_G3_RESD7.
* To use register names with standard convension, please use EVADC_G3_RESD7.
*/
#define EVADC_G3RESD7 (EVADC_G3_RESD7)

/** \brief 13A0, Group 3 Result Reg. 8, Debug */
#define EVADC_G3_RESD8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00213A0u)
/** Alias (User Manual Name) for EVADC_G3_RESD8.
* To use register names with standard convension, please use EVADC_G3_RESD8.
*/
#define EVADC_G3RESD8 (EVADC_G3_RESD8)

/** \brief 13A4, Group 3 Result Reg. 9, Debug */
#define EVADC_G3_RESD9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00213A4u)
/** Alias (User Manual Name) for EVADC_G3_RESD9.
* To use register names with standard convension, please use EVADC_G3_RESD9.
*/
#define EVADC_G3RESD9 (EVADC_G3_RESD9)

/** \brief 13A8, Group 3 Result Reg. 10, Debug */
#define EVADC_G3_RESD10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00213A8u)
/** Alias (User Manual Name) for EVADC_G3_RESD10.
* To use register names with standard convension, please use EVADC_G3_RESD10.
*/
#define EVADC_G3RESD10 (EVADC_G3_RESD10)

/** \brief 13AC, Group 3 Result Reg. 11, Debug */
#define EVADC_G3_RESD11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00213ACu)
/** Alias (User Manual Name) for EVADC_G3_RESD11.
* To use register names with standard convension, please use EVADC_G3_RESD11.
*/
#define EVADC_G3RESD11 (EVADC_G3_RESD11)

/** \brief 13B0, Group 3 Result Reg. 12, Debug */
#define EVADC_G3_RESD12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00213B0u)
/** Alias (User Manual Name) for EVADC_G3_RESD12.
* To use register names with standard convension, please use EVADC_G3_RESD12.
*/
#define EVADC_G3RESD12 (EVADC_G3_RESD12)

/** \brief 13B4, Group 3 Result Reg. 13, Debug */
#define EVADC_G3_RESD13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00213B4u)
/** Alias (User Manual Name) for EVADC_G3_RESD13.
* To use register names with standard convension, please use EVADC_G3_RESD13.
*/
#define EVADC_G3RESD13 (EVADC_G3_RESD13)

/** \brief 13B8, Group 3 Result Reg. 14, Debug */
#define EVADC_G3_RESD14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00213B8u)
/** Alias (User Manual Name) for EVADC_G3_RESD14.
* To use register names with standard convension, please use EVADC_G3_RESD14.
*/
#define EVADC_G3RESD14 (EVADC_G3_RESD14)

/** \brief 13BC, Group 3 Result Reg. 15, Debug */
#define EVADC_G3_RESD15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00213BCu)
/** Alias (User Manual Name) for EVADC_G3_RESD15.
* To use register names with standard convension, please use EVADC_G3_RESD15.
*/
#define EVADC_G3RESD15 (EVADC_G3_RESD15)

/** \brief 15A4, Channel Event Node Pointer Reg. 1, Group 4 */
#define EVADC_G4_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00215A4u)
/** Alias (User Manual Name) for EVADC_G4_CEVNP1.
* To use register names with standard convension, please use EVADC_G4_CEVNP1.
*/
#define EVADC_G4CEVNP1 (EVADC_G4_CEVNP1)

/** \brief 19A4, Channel Event Node Pointer Reg. 1, Group 5 */
#define EVADC_G5_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00219A4u)
/** Alias (User Manual Name) for EVADC_G5_CEVNP1.
* To use register names with standard convension, please use EVADC_G5_CEVNP1.
*/
#define EVADC_G5CEVNP1 (EVADC_G5_CEVNP1)

/** \brief 1DA4, Channel Event Node Pointer Reg. 1, Group 6 */
#define EVADC_G6_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF0021DA4u)
/** Alias (User Manual Name) for EVADC_G6_CEVNP1.
* To use register names with standard convension, please use EVADC_G6_CEVNP1.
*/
#define EVADC_G6CEVNP1 (EVADC_G6_CEVNP1)

/** \brief 21A4, Channel Event Node Pointer Reg. 1, Group 7 */
#define EVADC_G7_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00221A4u)
/** Alias (User Manual Name) for EVADC_G7_CEVNP1.
* To use register names with standard convension, please use EVADC_G7_CEVNP1.
*/
#define EVADC_G7CEVNP1 (EVADC_G7_CEVNP1)

/** \brief 2410, Trigger Control Register, Group 8 */
#define EVADC_G8_TRCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_TRCTR*)0xF0022410u)
/** Alias (User Manual Name) for EVADC_G8_TRCTR.
* To use register names with standard convension, please use EVADC_G8_TRCTR.
*/
#define EVADC_G8TRCTR (EVADC_G8_TRCTR)

/** \brief 2480, Arbitration Config. Register, Group 8 */
#define EVADC_G8_ARBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBCFG*)0xF0022480u)
/** Alias (User Manual Name) for EVADC_G8_ARBCFG.
* To use register names with standard convension, please use EVADC_G8_ARBCFG.
*/
#define EVADC_G8ARBCFG (EVADC_G8_ARBCFG)

/** \brief 2484, Arbitration Priority Register, Group 8 */
#define EVADC_G8_ARBPR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBPR*)0xF0022484u)
/** Alias (User Manual Name) for EVADC_G8_ARBPR.
* To use register names with standard convension, please use EVADC_G8_ARBPR.
*/
#define EVADC_G8ARBPR (EVADC_G8_ARBPR)

/** \brief 2488, Analog Fct. Config. Register, Group 8 */
#define EVADC_G8_ANCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ANCFG*)0xF0022488u)
/** Alias (User Manual Name) for EVADC_G8_ANCFG.
* To use register names with standard convension, please use EVADC_G8_ANCFG.
*/
#define EVADC_G8ANCFG (EVADC_G8_ANCFG)

/** \brief 24A0, Input Class Register 0, Group 8 */
#define EVADC_G8_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00224A0u)
/** Alias (User Manual Name) for EVADC_G8_ICLASS0.
* To use register names with standard convension, please use EVADC_G8_ICLASS0.
*/
#define EVADC_G8ICLASS0 (EVADC_G8_ICLASS0)

/** \brief 24A4, Input Class Register 1, Group 8 */
#define EVADC_G8_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00224A4u)
/** Alias (User Manual Name) for EVADC_G8_ICLASS1.
* To use register names with standard convension, please use EVADC_G8_ICLASS1.
*/
#define EVADC_G8ICLASS1 (EVADC_G8_ICLASS1)

/** \brief 24B0, Alias Register, Group 8 */
#define EVADC_G8_ALIAS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ALIAS*)0xF00224B0u)
/** Alias (User Manual Name) for EVADC_G8_ALIAS.
* To use register names with standard convension, please use EVADC_G8_ALIAS.
*/
#define EVADC_G8ALIAS (EVADC_G8_ALIAS)

/** \brief 24B8, Boundary Select Register, Group 8 */
#define EVADC_G8_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_BOUND*)0xF00224B8u)
/** Alias (User Manual Name) for EVADC_G8_BOUND.
* To use register names with standard convension, please use EVADC_G8_BOUND.
*/
#define EVADC_G8BOUND (EVADC_G8_BOUND)

/** \brief 24C0, Synchronization Control Register, Group 8 */
#define EVADC_G8_SYNCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SYNCTR*)0xF00224C0u)
/** Alias (User Manual Name) for EVADC_G8_SYNCTR.
* To use register names with standard convension, please use EVADC_G8_SYNCTR.
*/
#define EVADC_G8SYNCTR (EVADC_G8_SYNCTR)

/** \brief 2500, Queue 0 Source Contr. Register, Group 8 */
#define EVADC_G8_Q0_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022500u)
/** Alias (User Manual Name) for EVADC_G8_Q0_QCTRL.
* To use register names with standard convension, please use EVADC_G8_Q0_QCTRL.
*/
#define EVADC_G8QCTRL0 (EVADC_G8_Q0_QCTRL)

/** \brief 2504, Queue 0 Mode Register, Group 8 */
#define EVADC_G8_Q0_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022504u)
/** Alias (User Manual Name) for EVADC_G8_Q0_QMR.
* To use register names with standard convension, please use EVADC_G8_Q0_QMR.
*/
#define EVADC_G8QMR0 (EVADC_G8_Q0_QMR)

/** \brief 2508, Queue 0 Status Register, Group 8 */
#define EVADC_G8_Q0_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022508u)
/** Alias (User Manual Name) for EVADC_G8_Q0_QSR.
* To use register names with standard convension, please use EVADC_G8_Q0_QSR.
*/
#define EVADC_G8QSR0 (EVADC_G8_Q0_QSR)

/** \brief 250C, Queue 0 Register 0, Group 8 */
#define EVADC_G8_Q0_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002250Cu)
/** Alias (User Manual Name) for EVADC_G8_Q0_Q0R.
* To use register names with standard convension, please use EVADC_G8_Q0_Q0R.
*/
#define EVADC_G8Q0R0 (EVADC_G8_Q0_Q0R)

/** \brief 2510, Queue 0 Input Register, Group 8 */
#define EVADC_G8_Q0_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022510u)
/** Alias (User Manual Name) for EVADC_G8_Q0_QINR.
* To use register names with standard convension, please use EVADC_G8_Q0_QINR.
*/
#define EVADC_G8QINR0 (EVADC_G8_Q0_QINR)

/** \brief 2514, Queue 0 Backup Register, Group 8 */
#define EVADC_G8_Q0_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022514u)
/** Alias (User Manual Name) for EVADC_G8_Q0_QBUR.
* To use register names with standard convension, please use EVADC_G8_Q0_QBUR.
*/
#define EVADC_G8QBUR0 (EVADC_G8_Q0_QBUR)

/** \brief 2518, Queue 0 Requ. Timer Mode Reg., Group 8 */
#define EVADC_G8_Q0_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022518u)
/** Alias (User Manual Name) for EVADC_G8_Q0_REQTM.
* To use register names with standard convension, please use EVADC_G8_Q0_REQTM.
*/
#define EVADC_G8REQTM0 (EVADC_G8_Q0_REQTM)

/** \brief 251C, Queue 0 Requ. Timer Status Reg., Group 8 */
#define EVADC_G8_Q0_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002251Cu)
/** Alias (User Manual Name) for EVADC_G8_Q0_REQTS.
* To use register names with standard convension, please use EVADC_G8_Q0_REQTS.
*/
#define EVADC_G8REQTS0 (EVADC_G8_Q0_REQTS)

/** \brief 2520, Queue 1 Source Contr. Register, Group 8 */
#define EVADC_G8_Q1_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022520u)
/** Alias (User Manual Name) for EVADC_G8_Q1_QCTRL.
* To use register names with standard convension, please use EVADC_G8_Q1_QCTRL.
*/
#define EVADC_G8QCTRL1 (EVADC_G8_Q1_QCTRL)

/** \brief 2524, Queue 1 Mode Register, Group 8 */
#define EVADC_G8_Q1_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022524u)
/** Alias (User Manual Name) for EVADC_G8_Q1_QMR.
* To use register names with standard convension, please use EVADC_G8_Q1_QMR.
*/
#define EVADC_G8QMR1 (EVADC_G8_Q1_QMR)

/** \brief 2528, Queue 1 Status Register, Group 8 */
#define EVADC_G8_Q1_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022528u)
/** Alias (User Manual Name) for EVADC_G8_Q1_QSR.
* To use register names with standard convension, please use EVADC_G8_Q1_QSR.
*/
#define EVADC_G8QSR1 (EVADC_G8_Q1_QSR)

/** \brief 252C, Queue 1 Register 0, Group 8 */
#define EVADC_G8_Q1_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002252Cu)
/** Alias (User Manual Name) for EVADC_G8_Q1_Q0R.
* To use register names with standard convension, please use EVADC_G8_Q1_Q0R.
*/
#define EVADC_G8Q0R1 (EVADC_G8_Q1_Q0R)

/** \brief 2530, Queue 1 Input Register, Group 8 */
#define EVADC_G8_Q1_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022530u)
/** Alias (User Manual Name) for EVADC_G8_Q1_QINR.
* To use register names with standard convension, please use EVADC_G8_Q1_QINR.
*/
#define EVADC_G8QINR1 (EVADC_G8_Q1_QINR)

/** \brief 2534, Queue 1 Backup Register, Group 8 */
#define EVADC_G8_Q1_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022534u)
/** Alias (User Manual Name) for EVADC_G8_Q1_QBUR.
* To use register names with standard convension, please use EVADC_G8_Q1_QBUR.
*/
#define EVADC_G8QBUR1 (EVADC_G8_Q1_QBUR)

/** \brief 2538, Queue 1 Requ. Timer Mode Reg., Group 8 */
#define EVADC_G8_Q1_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022538u)
/** Alias (User Manual Name) for EVADC_G8_Q1_REQTM.
* To use register names with standard convension, please use EVADC_G8_Q1_REQTM.
*/
#define EVADC_G8REQTM1 (EVADC_G8_Q1_REQTM)

/** \brief 253C, Queue 1 Requ. Timer Status Reg., Group 8 */
#define EVADC_G8_Q1_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002253Cu)
/** Alias (User Manual Name) for EVADC_G8_Q1_REQTS.
* To use register names with standard convension, please use EVADC_G8_Q1_REQTS.
*/
#define EVADC_G8REQTS1 (EVADC_G8_Q1_REQTS)

/** \brief 2540, Queue 2 Source Contr. Register, Group 8 */
#define EVADC_G8_Q2_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022540u)
/** Alias (User Manual Name) for EVADC_G8_Q2_QCTRL.
* To use register names with standard convension, please use EVADC_G8_Q2_QCTRL.
*/
#define EVADC_G8QCTRL2 (EVADC_G8_Q2_QCTRL)

/** \brief 2544, Queue 2 Mode Register, Group 8 */
#define EVADC_G8_Q2_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022544u)
/** Alias (User Manual Name) for EVADC_G8_Q2_QMR.
* To use register names with standard convension, please use EVADC_G8_Q2_QMR.
*/
#define EVADC_G8QMR2 (EVADC_G8_Q2_QMR)

/** \brief 2548, Queue 2 Status Register, Group 8 */
#define EVADC_G8_Q2_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022548u)
/** Alias (User Manual Name) for EVADC_G8_Q2_QSR.
* To use register names with standard convension, please use EVADC_G8_Q2_QSR.
*/
#define EVADC_G8QSR2 (EVADC_G8_Q2_QSR)

/** \brief 254C, Queue 2 Register 0, Group 8 */
#define EVADC_G8_Q2_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002254Cu)
/** Alias (User Manual Name) for EVADC_G8_Q2_Q0R.
* To use register names with standard convension, please use EVADC_G8_Q2_Q0R.
*/
#define EVADC_G8Q0R2 (EVADC_G8_Q2_Q0R)

/** \brief 2550, Queue 2 Input Register, Group 8 */
#define EVADC_G8_Q2_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022550u)
/** Alias (User Manual Name) for EVADC_G8_Q2_QINR.
* To use register names with standard convension, please use EVADC_G8_Q2_QINR.
*/
#define EVADC_G8QINR2 (EVADC_G8_Q2_QINR)

/** \brief 2554, Queue 2 Backup Register, Group 8 */
#define EVADC_G8_Q2_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022554u)
/** Alias (User Manual Name) for EVADC_G8_Q2_QBUR.
* To use register names with standard convension, please use EVADC_G8_Q2_QBUR.
*/
#define EVADC_G8QBUR2 (EVADC_G8_Q2_QBUR)

/** \brief 2558, Queue 2 Requ. Timer Mode Reg., Group 8 */
#define EVADC_G8_Q2_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022558u)
/** Alias (User Manual Name) for EVADC_G8_Q2_REQTM.
* To use register names with standard convension, please use EVADC_G8_Q2_REQTM.
*/
#define EVADC_G8REQTM2 (EVADC_G8_Q2_REQTM)

/** \brief 255C, Queue 2 Requ. Timer Status Reg., Group 8 */
#define EVADC_G8_Q2_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002255Cu)
/** Alias (User Manual Name) for EVADC_G8_Q2_REQTS.
* To use register names with standard convension, please use EVADC_G8_Q2_REQTS.
*/
#define EVADC_G8REQTS2 (EVADC_G8_Q2_REQTS)

/** \brief 2580, Channel Event Flag Register, Group 8 */
#define EVADC_G8_CEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFLAG*)0xF0022580u)
/** Alias (User Manual Name) for EVADC_G8_CEFLAG.
* To use register names with standard convension, please use EVADC_G8_CEFLAG.
*/
#define EVADC_G8CEFLAG (EVADC_G8_CEFLAG)

/** \brief 2584, Result Event Flag Register, Group 8 */
#define EVADC_G8_REFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFLAG*)0xF0022584u)
/** Alias (User Manual Name) for EVADC_G8_REFLAG.
* To use register names with standard convension, please use EVADC_G8_REFLAG.
*/
#define EVADC_G8REFLAG (EVADC_G8_REFLAG)

/** \brief 2588, Source Event Flag Register, Group 8 */
#define EVADC_G8_SEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFLAG*)0xF0022588u)
/** Alias (User Manual Name) for EVADC_G8_SEFLAG.
* To use register names with standard convension, please use EVADC_G8_SEFLAG.
*/
#define EVADC_G8SEFLAG (EVADC_G8_SEFLAG)

/** \brief 2590, Channel Event Flag Clear Register, Group 8 */
#define EVADC_G8_CEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFCLR*)0xF0022590u)
/** Alias (User Manual Name) for EVADC_G8_CEFCLR.
* To use register names with standard convension, please use EVADC_G8_CEFCLR.
*/
#define EVADC_G8CEFCLR (EVADC_G8_CEFCLR)

/** \brief 2594, Result Event Flag Clear Register, Group 8 */
#define EVADC_G8_REFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFCLR*)0xF0022594u)
/** Alias (User Manual Name) for EVADC_G8_REFCLR.
* To use register names with standard convension, please use EVADC_G8_REFCLR.
*/
#define EVADC_G8REFCLR (EVADC_G8_REFCLR)

/** \brief 2598, Source Event Flag Clear Reg., Group 8 */
#define EVADC_G8_SEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFCLR*)0xF0022598u)
/** Alias (User Manual Name) for EVADC_G8_SEFCLR.
* To use register names with standard convension, please use EVADC_G8_SEFCLR.
*/
#define EVADC_G8SEFCLR (EVADC_G8_SEFCLR)

/** \brief 25A0, Channel Event Node Pointer Reg. 0, Group 8 */
#define EVADC_G8_CEVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP0*)0xF00225A0u)
/** Alias (User Manual Name) for EVADC_G8_CEVNP0.
* To use register names with standard convension, please use EVADC_G8_CEVNP0.
*/
#define EVADC_G8CEVNP0 (EVADC_G8_CEVNP0)

/** \brief 25A4, Channel Event Node Pointer Reg. 1, Group 8 */
#define EVADC_G8_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00225A4u)
/** Alias (User Manual Name) for EVADC_G8_CEVNP1.
* To use register names with standard convension, please use EVADC_G8_CEVNP1.
*/
#define EVADC_G8CEVNP1 (EVADC_G8_CEVNP1)

/** \brief 25B0, Result Event Node Pointer Reg. 0, Group 8 */
#define EVADC_G8_REVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP0*)0xF00225B0u)
/** Alias (User Manual Name) for EVADC_G8_REVNP0.
* To use register names with standard convension, please use EVADC_G8_REVNP0.
*/
#define EVADC_G8REVNP0 (EVADC_G8_REVNP0)

/** \brief 25B4, Result Event Node Pointer Reg. 1, Group 8 */
#define EVADC_G8_REVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP1*)0xF00225B4u)
/** Alias (User Manual Name) for EVADC_G8_REVNP1.
* To use register names with standard convension, please use EVADC_G8_REVNP1.
*/
#define EVADC_G8REVNP1 (EVADC_G8_REVNP1)

/** \brief 25C0, Source Event Node Pointer Reg., Group 8 */
#define EVADC_G8_SEVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEVNP*)0xF00225C0u)
/** Alias (User Manual Name) for EVADC_G8_SEVNP.
* To use register names with standard convension, please use EVADC_G8_SEVNP.
*/
#define EVADC_G8SEVNP (EVADC_G8_SEVNP)

/** \brief 25C8, Service Request Software Activation Trigger, Group 8 */
#define EVADC_G8_SRACT /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SRACT*)0xF00225C8u)
/** Alias (User Manual Name) for EVADC_G8_SRACT.
* To use register names with standard convension, please use EVADC_G8_SRACT.
*/
#define EVADC_G8SRACT (EVADC_G8_SRACT)

/** \brief 25F0, External Multiplexer Control Reg., Group 8 */
#define EVADC_G8_EMUXCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCTR*)0xF00225F0u)
/** Alias (User Manual Name) for EVADC_G8_EMUXCTR.
* To use register names with standard convension, please use EVADC_G8_EMUXCTR.
*/
#define EVADC_G8EMUXCTR (EVADC_G8_EMUXCTR)

/** \brief 25F4, Ext. Multiplexer Channel Select Reg., Group 8 */
#define EVADC_G8_EMUXCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCS*)0xF00225F4u)
/** Alias (User Manual Name) for EVADC_G8_EMUXCS.
* To use register names with standard convension, please use EVADC_G8_EMUXCS.
*/
#define EVADC_G8EMUXCS (EVADC_G8_EMUXCS)

/** \brief 25F8, Valid Flag Register, Group 8 */
#define EVADC_G8_VFR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_VFR*)0xF00225F8u)
/** Alias (User Manual Name) for EVADC_G8_VFR.
* To use register names with standard convension, please use EVADC_G8_VFR.
*/
#define EVADC_G8VFR (EVADC_G8_VFR)

/** \brief 2600, Group 8, Channel 0 Control Register */
#define EVADC_G8_CHCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022600u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR0.
* To use register names with standard convension, please use EVADC_G8_CHCTR0.
*/
#define EVADC_G8CHCTR0 (EVADC_G8_CHCTR0)

/** \brief 2604, Group 8, Channel 1 Control Register */
#define EVADC_G8_CHCTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022604u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR1.
* To use register names with standard convension, please use EVADC_G8_CHCTR1.
*/
#define EVADC_G8CHCTR1 (EVADC_G8_CHCTR1)

/** \brief 2608, Group 8, Channel 2 Control Register */
#define EVADC_G8_CHCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022608u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR2.
* To use register names with standard convension, please use EVADC_G8_CHCTR2.
*/
#define EVADC_G8CHCTR2 (EVADC_G8_CHCTR2)

/** \brief 260C, Group 8, Channel 3 Control Register */
#define EVADC_G8_CHCTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002260Cu)
/** Alias (User Manual Name) for EVADC_G8_CHCTR3.
* To use register names with standard convension, please use EVADC_G8_CHCTR3.
*/
#define EVADC_G8CHCTR3 (EVADC_G8_CHCTR3)

/** \brief 2610, Group 8, Channel 4 Control Register */
#define EVADC_G8_CHCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022610u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR4.
* To use register names with standard convension, please use EVADC_G8_CHCTR4.
*/
#define EVADC_G8CHCTR4 (EVADC_G8_CHCTR4)

/** \brief 2614, Group 8, Channel 5 Control Register */
#define EVADC_G8_CHCTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022614u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR5.
* To use register names with standard convension, please use EVADC_G8_CHCTR5.
*/
#define EVADC_G8CHCTR5 (EVADC_G8_CHCTR5)

/** \brief 2618, Group 8, Channel 6 Control Register */
#define EVADC_G8_CHCTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022618u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR6.
* To use register names with standard convension, please use EVADC_G8_CHCTR6.
*/
#define EVADC_G8CHCTR6 (EVADC_G8_CHCTR6)

/** \brief 261C, Group 8, Channel 7 Control Register */
#define EVADC_G8_CHCTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002261Cu)
/** Alias (User Manual Name) for EVADC_G8_CHCTR7.
* To use register names with standard convension, please use EVADC_G8_CHCTR7.
*/
#define EVADC_G8CHCTR7 (EVADC_G8_CHCTR7)

/** \brief 2620, Group 8, Channel 8 Control Register */
#define EVADC_G8_CHCTR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022620u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR8.
* To use register names with standard convension, please use EVADC_G8_CHCTR8.
*/
#define EVADC_G8CHCTR8 (EVADC_G8_CHCTR8)

/** \brief 2624, Group 8, Channel 9 Control Register */
#define EVADC_G8_CHCTR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022624u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR9.
* To use register names with standard convension, please use EVADC_G8_CHCTR9.
*/
#define EVADC_G8CHCTR9 (EVADC_G8_CHCTR9)

/** \brief 2628, Group 8, Channel 10 Control Register */
#define EVADC_G8_CHCTR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022628u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR10.
* To use register names with standard convension, please use EVADC_G8_CHCTR10.
*/
#define EVADC_G8CHCTR10 (EVADC_G8_CHCTR10)

/** \brief 262C, Group 8, Channel 11 Control Register */
#define EVADC_G8_CHCTR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002262Cu)
/** Alias (User Manual Name) for EVADC_G8_CHCTR11.
* To use register names with standard convension, please use EVADC_G8_CHCTR11.
*/
#define EVADC_G8CHCTR11 (EVADC_G8_CHCTR11)

/** \brief 2630, Group 8, Channel 12 Control Register */
#define EVADC_G8_CHCTR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022630u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR12.
* To use register names with standard convension, please use EVADC_G8_CHCTR12.
*/
#define EVADC_G8CHCTR12 (EVADC_G8_CHCTR12)

/** \brief 2634, Group 8, Channel 13 Control Register */
#define EVADC_G8_CHCTR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022634u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR13.
* To use register names with standard convension, please use EVADC_G8_CHCTR13.
*/
#define EVADC_G8CHCTR13 (EVADC_G8_CHCTR13)

/** \brief 2638, Group 8, Channel 14 Control Register */
#define EVADC_G8_CHCTR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022638u)
/** Alias (User Manual Name) for EVADC_G8_CHCTR14.
* To use register names with standard convension, please use EVADC_G8_CHCTR14.
*/
#define EVADC_G8CHCTR14 (EVADC_G8_CHCTR14)

/** \brief 263C, Group 8, Channel 15 Control Register */
#define EVADC_G8_CHCTR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002263Cu)
/** Alias (User Manual Name) for EVADC_G8_CHCTR15.
* To use register names with standard convension, please use EVADC_G8_CHCTR15.
*/
#define EVADC_G8CHCTR15 (EVADC_G8_CHCTR15)

/** \brief 2680, Group 8 Result Control Register 0 */
#define EVADC_G8_RCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022680u)
/** Alias (User Manual Name) for EVADC_G8_RCR0.
* To use register names with standard convension, please use EVADC_G8_RCR0.
*/
#define EVADC_G8RCR0 (EVADC_G8_RCR0)

/** \brief 2684, Group 8 Result Control Register 1 */
#define EVADC_G8_RCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022684u)
/** Alias (User Manual Name) for EVADC_G8_RCR1.
* To use register names with standard convension, please use EVADC_G8_RCR1.
*/
#define EVADC_G8RCR1 (EVADC_G8_RCR1)

/** \brief 2688, Group 8 Result Control Register 2 */
#define EVADC_G8_RCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022688u)
/** Alias (User Manual Name) for EVADC_G8_RCR2.
* To use register names with standard convension, please use EVADC_G8_RCR2.
*/
#define EVADC_G8RCR2 (EVADC_G8_RCR2)

/** \brief 268C, Group 8 Result Control Register 3 */
#define EVADC_G8_RCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF002268Cu)
/** Alias (User Manual Name) for EVADC_G8_RCR3.
* To use register names with standard convension, please use EVADC_G8_RCR3.
*/
#define EVADC_G8RCR3 (EVADC_G8_RCR3)

/** \brief 2690, Group 8 Result Control Register 4 */
#define EVADC_G8_RCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022690u)
/** Alias (User Manual Name) for EVADC_G8_RCR4.
* To use register names with standard convension, please use EVADC_G8_RCR4.
*/
#define EVADC_G8RCR4 (EVADC_G8_RCR4)

/** \brief 2694, Group 8 Result Control Register 5 */
#define EVADC_G8_RCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022694u)
/** Alias (User Manual Name) for EVADC_G8_RCR5.
* To use register names with standard convension, please use EVADC_G8_RCR5.
*/
#define EVADC_G8RCR5 (EVADC_G8_RCR5)

/** \brief 2698, Group 8 Result Control Register 6 */
#define EVADC_G8_RCR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022698u)
/** Alias (User Manual Name) for EVADC_G8_RCR6.
* To use register names with standard convension, please use EVADC_G8_RCR6.
*/
#define EVADC_G8RCR6 (EVADC_G8_RCR6)

/** \brief 269C, Group 8 Result Control Register 7 */
#define EVADC_G8_RCR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF002269Cu)
/** Alias (User Manual Name) for EVADC_G8_RCR7.
* To use register names with standard convension, please use EVADC_G8_RCR7.
*/
#define EVADC_G8RCR7 (EVADC_G8_RCR7)

/** \brief 26A0, Group 8 Result Control Register 8 */
#define EVADC_G8_RCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00226A0u)
/** Alias (User Manual Name) for EVADC_G8_RCR8.
* To use register names with standard convension, please use EVADC_G8_RCR8.
*/
#define EVADC_G8RCR8 (EVADC_G8_RCR8)

/** \brief 26A4, Group 8 Result Control Register 9 */
#define EVADC_G8_RCR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00226A4u)
/** Alias (User Manual Name) for EVADC_G8_RCR9.
* To use register names with standard convension, please use EVADC_G8_RCR9.
*/
#define EVADC_G8RCR9 (EVADC_G8_RCR9)

/** \brief 26A8, Group 8 Result Control Register 10 */
#define EVADC_G8_RCR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00226A8u)
/** Alias (User Manual Name) for EVADC_G8_RCR10.
* To use register names with standard convension, please use EVADC_G8_RCR10.
*/
#define EVADC_G8RCR10 (EVADC_G8_RCR10)

/** \brief 26AC, Group 8 Result Control Register 11 */
#define EVADC_G8_RCR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00226ACu)
/** Alias (User Manual Name) for EVADC_G8_RCR11.
* To use register names with standard convension, please use EVADC_G8_RCR11.
*/
#define EVADC_G8RCR11 (EVADC_G8_RCR11)

/** \brief 26B0, Group 8 Result Control Register 12 */
#define EVADC_G8_RCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00226B0u)
/** Alias (User Manual Name) for EVADC_G8_RCR12.
* To use register names with standard convension, please use EVADC_G8_RCR12.
*/
#define EVADC_G8RCR12 (EVADC_G8_RCR12)

/** \brief 26B4, Group 8 Result Control Register 13 */
#define EVADC_G8_RCR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00226B4u)
/** Alias (User Manual Name) for EVADC_G8_RCR13.
* To use register names with standard convension, please use EVADC_G8_RCR13.
*/
#define EVADC_G8RCR13 (EVADC_G8_RCR13)

/** \brief 26B8, Group 8 Result Control Register 14 */
#define EVADC_G8_RCR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00226B8u)
/** Alias (User Manual Name) for EVADC_G8_RCR14.
* To use register names with standard convension, please use EVADC_G8_RCR14.
*/
#define EVADC_G8RCR14 (EVADC_G8_RCR14)

/** \brief 26BC, Group 8 Result Control Register 15 */
#define EVADC_G8_RCR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00226BCu)
/** Alias (User Manual Name) for EVADC_G8_RCR15.
* To use register names with standard convension, please use EVADC_G8_RCR15.
*/
#define EVADC_G8RCR15 (EVADC_G8_RCR15)

/** \brief 2700, Group 8 Result Register 0\n */
#define EVADC_G8_RES0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022700u)
/** Alias (User Manual Name) for EVADC_G8_RES0.
* To use register names with standard convension, please use EVADC_G8_RES0.
*/
#define EVADC_G8RES0 (EVADC_G8_RES0)

/** \brief 2704, Group 8 Result Register 1\n */
#define EVADC_G8_RES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022704u)
/** Alias (User Manual Name) for EVADC_G8_RES1.
* To use register names with standard convension, please use EVADC_G8_RES1.
*/
#define EVADC_G8RES1 (EVADC_G8_RES1)

/** \brief 2708, Group 8 Result Register 2\n */
#define EVADC_G8_RES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022708u)
/** Alias (User Manual Name) for EVADC_G8_RES2.
* To use register names with standard convension, please use EVADC_G8_RES2.
*/
#define EVADC_G8RES2 (EVADC_G8_RES2)

/** \brief 270C, Group 8 Result Register 3\n */
#define EVADC_G8_RES3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002270Cu)
/** Alias (User Manual Name) for EVADC_G8_RES3.
* To use register names with standard convension, please use EVADC_G8_RES3.
*/
#define EVADC_G8RES3 (EVADC_G8_RES3)

/** \brief 2710, Group 8 Result Register 4\n */
#define EVADC_G8_RES4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022710u)
/** Alias (User Manual Name) for EVADC_G8_RES4.
* To use register names with standard convension, please use EVADC_G8_RES4.
*/
#define EVADC_G8RES4 (EVADC_G8_RES4)

/** \brief 2714, Group 8 Result Register 5\n */
#define EVADC_G8_RES5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022714u)
/** Alias (User Manual Name) for EVADC_G8_RES5.
* To use register names with standard convension, please use EVADC_G8_RES5.
*/
#define EVADC_G8RES5 (EVADC_G8_RES5)

/** \brief 2718, Group 8 Result Register 6\n */
#define EVADC_G8_RES6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022718u)
/** Alias (User Manual Name) for EVADC_G8_RES6.
* To use register names with standard convension, please use EVADC_G8_RES6.
*/
#define EVADC_G8RES6 (EVADC_G8_RES6)

/** \brief 271C, Group 8 Result Register 7\n */
#define EVADC_G8_RES7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002271Cu)
/** Alias (User Manual Name) for EVADC_G8_RES7.
* To use register names with standard convension, please use EVADC_G8_RES7.
*/
#define EVADC_G8RES7 (EVADC_G8_RES7)

/** \brief 2720, Group 8 Result Register 8\n */
#define EVADC_G8_RES8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022720u)
/** Alias (User Manual Name) for EVADC_G8_RES8.
* To use register names with standard convension, please use EVADC_G8_RES8.
*/
#define EVADC_G8RES8 (EVADC_G8_RES8)

/** \brief 2724, Group 8 Result Register 9\n */
#define EVADC_G8_RES9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022724u)
/** Alias (User Manual Name) for EVADC_G8_RES9.
* To use register names with standard convension, please use EVADC_G8_RES9.
*/
#define EVADC_G8RES9 (EVADC_G8_RES9)

/** \brief 2728, Group 8 Result Register 10\n */
#define EVADC_G8_RES10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022728u)
/** Alias (User Manual Name) for EVADC_G8_RES10.
* To use register names with standard convension, please use EVADC_G8_RES10.
*/
#define EVADC_G8RES10 (EVADC_G8_RES10)

/** \brief 272C, Group 8 Result Register 11\n */
#define EVADC_G8_RES11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002272Cu)
/** Alias (User Manual Name) for EVADC_G8_RES11.
* To use register names with standard convension, please use EVADC_G8_RES11.
*/
#define EVADC_G8RES11 (EVADC_G8_RES11)

/** \brief 2730, Group 8 Result Register 12\n */
#define EVADC_G8_RES12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022730u)
/** Alias (User Manual Name) for EVADC_G8_RES12.
* To use register names with standard convension, please use EVADC_G8_RES12.
*/
#define EVADC_G8RES12 (EVADC_G8_RES12)

/** \brief 2734, Group 8 Result Register 13\n */
#define EVADC_G8_RES13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022734u)
/** Alias (User Manual Name) for EVADC_G8_RES13.
* To use register names with standard convension, please use EVADC_G8_RES13.
*/
#define EVADC_G8RES13 (EVADC_G8_RES13)

/** \brief 2738, Group 8 Result Register 14\n */
#define EVADC_G8_RES14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022738u)
/** Alias (User Manual Name) for EVADC_G8_RES14.
* To use register names with standard convension, please use EVADC_G8_RES14.
*/
#define EVADC_G8RES14 (EVADC_G8_RES14)

/** \brief 273C, Group 8 Result Register 15\n */
#define EVADC_G8_RES15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002273Cu)
/** Alias (User Manual Name) for EVADC_G8_RES15.
* To use register names with standard convension, please use EVADC_G8_RES15.
*/
#define EVADC_G8RES15 (EVADC_G8_RES15)

/** \brief 2780, Group 8 Result Reg. 0, Debug */
#define EVADC_G8_RESD0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022780u)
/** Alias (User Manual Name) for EVADC_G8_RESD0.
* To use register names with standard convension, please use EVADC_G8_RESD0.
*/
#define EVADC_G8RESD0 (EVADC_G8_RESD0)

/** \brief 2784, Group 8 Result Reg. 1, Debug */
#define EVADC_G8_RESD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022784u)
/** Alias (User Manual Name) for EVADC_G8_RESD1.
* To use register names with standard convension, please use EVADC_G8_RESD1.
*/
#define EVADC_G8RESD1 (EVADC_G8_RESD1)

/** \brief 2788, Group 8 Result Reg. 2, Debug */
#define EVADC_G8_RESD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022788u)
/** Alias (User Manual Name) for EVADC_G8_RESD2.
* To use register names with standard convension, please use EVADC_G8_RESD2.
*/
#define EVADC_G8RESD2 (EVADC_G8_RESD2)

/** \brief 278C, Group 8 Result Reg. 3, Debug */
#define EVADC_G8_RESD3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF002278Cu)
/** Alias (User Manual Name) for EVADC_G8_RESD3.
* To use register names with standard convension, please use EVADC_G8_RESD3.
*/
#define EVADC_G8RESD3 (EVADC_G8_RESD3)

/** \brief 2790, Group 8 Result Reg. 4, Debug */
#define EVADC_G8_RESD4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022790u)
/** Alias (User Manual Name) for EVADC_G8_RESD4.
* To use register names with standard convension, please use EVADC_G8_RESD4.
*/
#define EVADC_G8RESD4 (EVADC_G8_RESD4)

/** \brief 2794, Group 8 Result Reg. 5, Debug */
#define EVADC_G8_RESD5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022794u)
/** Alias (User Manual Name) for EVADC_G8_RESD5.
* To use register names with standard convension, please use EVADC_G8_RESD5.
*/
#define EVADC_G8RESD5 (EVADC_G8_RESD5)

/** \brief 2798, Group 8 Result Reg. 6, Debug */
#define EVADC_G8_RESD6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022798u)
/** Alias (User Manual Name) for EVADC_G8_RESD6.
* To use register names with standard convension, please use EVADC_G8_RESD6.
*/
#define EVADC_G8RESD6 (EVADC_G8_RESD6)

/** \brief 279C, Group 8 Result Reg. 7, Debug */
#define EVADC_G8_RESD7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF002279Cu)
/** Alias (User Manual Name) for EVADC_G8_RESD7.
* To use register names with standard convension, please use EVADC_G8_RESD7.
*/
#define EVADC_G8RESD7 (EVADC_G8_RESD7)

/** \brief 27A0, Group 8 Result Reg. 8, Debug */
#define EVADC_G8_RESD8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00227A0u)
/** Alias (User Manual Name) for EVADC_G8_RESD8.
* To use register names with standard convension, please use EVADC_G8_RESD8.
*/
#define EVADC_G8RESD8 (EVADC_G8_RESD8)

/** \brief 27A4, Group 8 Result Reg. 9, Debug */
#define EVADC_G8_RESD9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00227A4u)
/** Alias (User Manual Name) for EVADC_G8_RESD9.
* To use register names with standard convension, please use EVADC_G8_RESD9.
*/
#define EVADC_G8RESD9 (EVADC_G8_RESD9)

/** \brief 27A8, Group 8 Result Reg. 10, Debug */
#define EVADC_G8_RESD10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00227A8u)
/** Alias (User Manual Name) for EVADC_G8_RESD10.
* To use register names with standard convension, please use EVADC_G8_RESD10.
*/
#define EVADC_G8RESD10 (EVADC_G8_RESD10)

/** \brief 27AC, Group 8 Result Reg. 11, Debug */
#define EVADC_G8_RESD11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00227ACu)
/** Alias (User Manual Name) for EVADC_G8_RESD11.
* To use register names with standard convension, please use EVADC_G8_RESD11.
*/
#define EVADC_G8RESD11 (EVADC_G8_RESD11)

/** \brief 27B0, Group 8 Result Reg. 12, Debug */
#define EVADC_G8_RESD12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00227B0u)
/** Alias (User Manual Name) for EVADC_G8_RESD12.
* To use register names with standard convension, please use EVADC_G8_RESD12.
*/
#define EVADC_G8RESD12 (EVADC_G8_RESD12)

/** \brief 27B4, Group 8 Result Reg. 13, Debug */
#define EVADC_G8_RESD13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00227B4u)
/** Alias (User Manual Name) for EVADC_G8_RESD13.
* To use register names with standard convension, please use EVADC_G8_RESD13.
*/
#define EVADC_G8RESD13 (EVADC_G8_RESD13)

/** \brief 27B8, Group 8 Result Reg. 14, Debug */
#define EVADC_G8_RESD14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00227B8u)
/** Alias (User Manual Name) for EVADC_G8_RESD14.
* To use register names with standard convension, please use EVADC_G8_RESD14.
*/
#define EVADC_G8RESD14 (EVADC_G8_RESD14)

/** \brief 27BC, Group 8 Result Reg. 15, Debug */
#define EVADC_G8_RESD15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00227BCu)
/** Alias (User Manual Name) for EVADC_G8_RESD15.
* To use register names with standard convension, please use EVADC_G8_RESD15.
*/
#define EVADC_G8RESD15 (EVADC_G8_RESD15)

/** \brief 2810, Trigger Control Register, Group 9 */
#define EVADC_G9_TRCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_TRCTR*)0xF0022810u)
/** Alias (User Manual Name) for EVADC_G9_TRCTR.
* To use register names with standard convension, please use EVADC_G9_TRCTR.
*/
#define EVADC_G9TRCTR (EVADC_G9_TRCTR)

/** \brief 2880, Arbitration Config. Register, Group 9 */
#define EVADC_G9_ARBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBCFG*)0xF0022880u)
/** Alias (User Manual Name) for EVADC_G9_ARBCFG.
* To use register names with standard convension, please use EVADC_G9_ARBCFG.
*/
#define EVADC_G9ARBCFG (EVADC_G9_ARBCFG)

/** \brief 2884, Arbitration Priority Register, Group 9 */
#define EVADC_G9_ARBPR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBPR*)0xF0022884u)
/** Alias (User Manual Name) for EVADC_G9_ARBPR.
* To use register names with standard convension, please use EVADC_G9_ARBPR.
*/
#define EVADC_G9ARBPR (EVADC_G9_ARBPR)

/** \brief 2888, Analog Fct. Config. Register, Group 9 */
#define EVADC_G9_ANCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ANCFG*)0xF0022888u)
/** Alias (User Manual Name) for EVADC_G9_ANCFG.
* To use register names with standard convension, please use EVADC_G9_ANCFG.
*/
#define EVADC_G9ANCFG (EVADC_G9_ANCFG)

/** \brief 28A0, Input Class Register 0, Group 9 */
#define EVADC_G9_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00228A0u)
/** Alias (User Manual Name) for EVADC_G9_ICLASS0.
* To use register names with standard convension, please use EVADC_G9_ICLASS0.
*/
#define EVADC_G9ICLASS0 (EVADC_G9_ICLASS0)

/** \brief 28A4, Input Class Register 1, Group 9 */
#define EVADC_G9_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00228A4u)
/** Alias (User Manual Name) for EVADC_G9_ICLASS1.
* To use register names with standard convension, please use EVADC_G9_ICLASS1.
*/
#define EVADC_G9ICLASS1 (EVADC_G9_ICLASS1)

/** \brief 28B0, Alias Register, Group 9 */
#define EVADC_G9_ALIAS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ALIAS*)0xF00228B0u)
/** Alias (User Manual Name) for EVADC_G9_ALIAS.
* To use register names with standard convension, please use EVADC_G9_ALIAS.
*/
#define EVADC_G9ALIAS (EVADC_G9_ALIAS)

/** \brief 28B8, Boundary Select Register, Group 9 */
#define EVADC_G9_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_BOUND*)0xF00228B8u)
/** Alias (User Manual Name) for EVADC_G9_BOUND.
* To use register names with standard convension, please use EVADC_G9_BOUND.
*/
#define EVADC_G9BOUND (EVADC_G9_BOUND)

/** \brief 28C0, Synchronization Control Register, Group 9 */
#define EVADC_G9_SYNCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SYNCTR*)0xF00228C0u)
/** Alias (User Manual Name) for EVADC_G9_SYNCTR.
* To use register names with standard convension, please use EVADC_G9_SYNCTR.
*/
#define EVADC_G9SYNCTR (EVADC_G9_SYNCTR)

/** \brief 2900, Queue 0 Source Contr. Register, Group 9 */
#define EVADC_G9_Q0_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022900u)
/** Alias (User Manual Name) for EVADC_G9_Q0_QCTRL.
* To use register names with standard convension, please use EVADC_G9_Q0_QCTRL.
*/
#define EVADC_G9QCTRL0 (EVADC_G9_Q0_QCTRL)

/** \brief 2904, Queue 0 Mode Register, Group 9 */
#define EVADC_G9_Q0_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022904u)
/** Alias (User Manual Name) for EVADC_G9_Q0_QMR.
* To use register names with standard convension, please use EVADC_G9_Q0_QMR.
*/
#define EVADC_G9QMR0 (EVADC_G9_Q0_QMR)

/** \brief 2908, Queue 0 Status Register, Group 9 */
#define EVADC_G9_Q0_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022908u)
/** Alias (User Manual Name) for EVADC_G9_Q0_QSR.
* To use register names with standard convension, please use EVADC_G9_Q0_QSR.
*/
#define EVADC_G9QSR0 (EVADC_G9_Q0_QSR)

/** \brief 290C, Queue 0 Register 0, Group 9 */
#define EVADC_G9_Q0_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002290Cu)
/** Alias (User Manual Name) for EVADC_G9_Q0_Q0R.
* To use register names with standard convension, please use EVADC_G9_Q0_Q0R.
*/
#define EVADC_G9Q0R0 (EVADC_G9_Q0_Q0R)

/** \brief 2910, Queue 0 Input Register, Group 9 */
#define EVADC_G9_Q0_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022910u)
/** Alias (User Manual Name) for EVADC_G9_Q0_QINR.
* To use register names with standard convension, please use EVADC_G9_Q0_QINR.
*/
#define EVADC_G9QINR0 (EVADC_G9_Q0_QINR)

/** \brief 2914, Queue 0 Backup Register, Group 9 */
#define EVADC_G9_Q0_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022914u)
/** Alias (User Manual Name) for EVADC_G9_Q0_QBUR.
* To use register names with standard convension, please use EVADC_G9_Q0_QBUR.
*/
#define EVADC_G9QBUR0 (EVADC_G9_Q0_QBUR)

/** \brief 2918, Queue 0 Requ. Timer Mode Reg., Group 9 */
#define EVADC_G9_Q0_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022918u)
/** Alias (User Manual Name) for EVADC_G9_Q0_REQTM.
* To use register names with standard convension, please use EVADC_G9_Q0_REQTM.
*/
#define EVADC_G9REQTM0 (EVADC_G9_Q0_REQTM)

/** \brief 291C, Queue 0 Requ. Timer Status Reg., Group 9 */
#define EVADC_G9_Q0_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002291Cu)
/** Alias (User Manual Name) for EVADC_G9_Q0_REQTS.
* To use register names with standard convension, please use EVADC_G9_Q0_REQTS.
*/
#define EVADC_G9REQTS0 (EVADC_G9_Q0_REQTS)

/** \brief 2920, Queue 1 Source Contr. Register, Group 9 */
#define EVADC_G9_Q1_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022920u)
/** Alias (User Manual Name) for EVADC_G9_Q1_QCTRL.
* To use register names with standard convension, please use EVADC_G9_Q1_QCTRL.
*/
#define EVADC_G9QCTRL1 (EVADC_G9_Q1_QCTRL)

/** \brief 2924, Queue 1 Mode Register, Group 9 */
#define EVADC_G9_Q1_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022924u)
/** Alias (User Manual Name) for EVADC_G9_Q1_QMR.
* To use register names with standard convension, please use EVADC_G9_Q1_QMR.
*/
#define EVADC_G9QMR1 (EVADC_G9_Q1_QMR)

/** \brief 2928, Queue 1 Status Register, Group 9 */
#define EVADC_G9_Q1_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022928u)
/** Alias (User Manual Name) for EVADC_G9_Q1_QSR.
* To use register names with standard convension, please use EVADC_G9_Q1_QSR.
*/
#define EVADC_G9QSR1 (EVADC_G9_Q1_QSR)

/** \brief 292C, Queue 1 Register 0, Group 9 */
#define EVADC_G9_Q1_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002292Cu)
/** Alias (User Manual Name) for EVADC_G9_Q1_Q0R.
* To use register names with standard convension, please use EVADC_G9_Q1_Q0R.
*/
#define EVADC_G9Q0R1 (EVADC_G9_Q1_Q0R)

/** \brief 2930, Queue 1 Input Register, Group 9 */
#define EVADC_G9_Q1_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022930u)
/** Alias (User Manual Name) for EVADC_G9_Q1_QINR.
* To use register names with standard convension, please use EVADC_G9_Q1_QINR.
*/
#define EVADC_G9QINR1 (EVADC_G9_Q1_QINR)

/** \brief 2934, Queue 1 Backup Register, Group 9 */
#define EVADC_G9_Q1_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022934u)
/** Alias (User Manual Name) for EVADC_G9_Q1_QBUR.
* To use register names with standard convension, please use EVADC_G9_Q1_QBUR.
*/
#define EVADC_G9QBUR1 (EVADC_G9_Q1_QBUR)

/** \brief 2938, Queue 1 Requ. Timer Mode Reg., Group 9 */
#define EVADC_G9_Q1_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022938u)
/** Alias (User Manual Name) for EVADC_G9_Q1_REQTM.
* To use register names with standard convension, please use EVADC_G9_Q1_REQTM.
*/
#define EVADC_G9REQTM1 (EVADC_G9_Q1_REQTM)

/** \brief 293C, Queue 1 Requ. Timer Status Reg., Group 9 */
#define EVADC_G9_Q1_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002293Cu)
/** Alias (User Manual Name) for EVADC_G9_Q1_REQTS.
* To use register names with standard convension, please use EVADC_G9_Q1_REQTS.
*/
#define EVADC_G9REQTS1 (EVADC_G9_Q1_REQTS)

/** \brief 2940, Queue 2 Source Contr. Register, Group 9 */
#define EVADC_G9_Q2_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022940u)
/** Alias (User Manual Name) for EVADC_G9_Q2_QCTRL.
* To use register names with standard convension, please use EVADC_G9_Q2_QCTRL.
*/
#define EVADC_G9QCTRL2 (EVADC_G9_Q2_QCTRL)

/** \brief 2944, Queue 2 Mode Register, Group 9 */
#define EVADC_G9_Q2_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022944u)
/** Alias (User Manual Name) for EVADC_G9_Q2_QMR.
* To use register names with standard convension, please use EVADC_G9_Q2_QMR.
*/
#define EVADC_G9QMR2 (EVADC_G9_Q2_QMR)

/** \brief 2948, Queue 2 Status Register, Group 9 */
#define EVADC_G9_Q2_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022948u)
/** Alias (User Manual Name) for EVADC_G9_Q2_QSR.
* To use register names with standard convension, please use EVADC_G9_Q2_QSR.
*/
#define EVADC_G9QSR2 (EVADC_G9_Q2_QSR)

/** \brief 294C, Queue 2 Register 0, Group 9 */
#define EVADC_G9_Q2_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002294Cu)
/** Alias (User Manual Name) for EVADC_G9_Q2_Q0R.
* To use register names with standard convension, please use EVADC_G9_Q2_Q0R.
*/
#define EVADC_G9Q0R2 (EVADC_G9_Q2_Q0R)

/** \brief 2950, Queue 2 Input Register, Group 9 */
#define EVADC_G9_Q2_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022950u)
/** Alias (User Manual Name) for EVADC_G9_Q2_QINR.
* To use register names with standard convension, please use EVADC_G9_Q2_QINR.
*/
#define EVADC_G9QINR2 (EVADC_G9_Q2_QINR)

/** \brief 2954, Queue 2 Backup Register, Group 9 */
#define EVADC_G9_Q2_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022954u)
/** Alias (User Manual Name) for EVADC_G9_Q2_QBUR.
* To use register names with standard convension, please use EVADC_G9_Q2_QBUR.
*/
#define EVADC_G9QBUR2 (EVADC_G9_Q2_QBUR)

/** \brief 2958, Queue 2 Requ. Timer Mode Reg., Group 9 */
#define EVADC_G9_Q2_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022958u)
/** Alias (User Manual Name) for EVADC_G9_Q2_REQTM.
* To use register names with standard convension, please use EVADC_G9_Q2_REQTM.
*/
#define EVADC_G9REQTM2 (EVADC_G9_Q2_REQTM)

/** \brief 295C, Queue 2 Requ. Timer Status Reg., Group 9 */
#define EVADC_G9_Q2_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002295Cu)
/** Alias (User Manual Name) for EVADC_G9_Q2_REQTS.
* To use register names with standard convension, please use EVADC_G9_Q2_REQTS.
*/
#define EVADC_G9REQTS2 (EVADC_G9_Q2_REQTS)

/** \brief 2980, Channel Event Flag Register, Group 9 */
#define EVADC_G9_CEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFLAG*)0xF0022980u)
/** Alias (User Manual Name) for EVADC_G9_CEFLAG.
* To use register names with standard convension, please use EVADC_G9_CEFLAG.
*/
#define EVADC_G9CEFLAG (EVADC_G9_CEFLAG)

/** \brief 2984, Result Event Flag Register, Group 9 */
#define EVADC_G9_REFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFLAG*)0xF0022984u)
/** Alias (User Manual Name) for EVADC_G9_REFLAG.
* To use register names with standard convension, please use EVADC_G9_REFLAG.
*/
#define EVADC_G9REFLAG (EVADC_G9_REFLAG)

/** \brief 2988, Source Event Flag Register, Group 9 */
#define EVADC_G9_SEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFLAG*)0xF0022988u)
/** Alias (User Manual Name) for EVADC_G9_SEFLAG.
* To use register names with standard convension, please use EVADC_G9_SEFLAG.
*/
#define EVADC_G9SEFLAG (EVADC_G9_SEFLAG)

/** \brief 2990, Channel Event Flag Clear Register, Group 9 */
#define EVADC_G9_CEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFCLR*)0xF0022990u)
/** Alias (User Manual Name) for EVADC_G9_CEFCLR.
* To use register names with standard convension, please use EVADC_G9_CEFCLR.
*/
#define EVADC_G9CEFCLR (EVADC_G9_CEFCLR)

/** \brief 2994, Result Event Flag Clear Register, Group 9 */
#define EVADC_G9_REFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFCLR*)0xF0022994u)
/** Alias (User Manual Name) for EVADC_G9_REFCLR.
* To use register names with standard convension, please use EVADC_G9_REFCLR.
*/
#define EVADC_G9REFCLR (EVADC_G9_REFCLR)

/** \brief 2998, Source Event Flag Clear Reg., Group 9 */
#define EVADC_G9_SEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFCLR*)0xF0022998u)
/** Alias (User Manual Name) for EVADC_G9_SEFCLR.
* To use register names with standard convension, please use EVADC_G9_SEFCLR.
*/
#define EVADC_G9SEFCLR (EVADC_G9_SEFCLR)

/** \brief 29A0, Channel Event Node Pointer Reg. 0, Group 9 */
#define EVADC_G9_CEVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP0*)0xF00229A0u)
/** Alias (User Manual Name) for EVADC_G9_CEVNP0.
* To use register names with standard convension, please use EVADC_G9_CEVNP0.
*/
#define EVADC_G9CEVNP0 (EVADC_G9_CEVNP0)

/** \brief 29A4, Channel Event Node Pointer Reg. 1, Group 9 */
#define EVADC_G9_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00229A4u)
/** Alias (User Manual Name) for EVADC_G9_CEVNP1.
* To use register names with standard convension, please use EVADC_G9_CEVNP1.
*/
#define EVADC_G9CEVNP1 (EVADC_G9_CEVNP1)

/** \brief 29B0, Result Event Node Pointer Reg. 0, Group 9 */
#define EVADC_G9_REVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP0*)0xF00229B0u)
/** Alias (User Manual Name) for EVADC_G9_REVNP0.
* To use register names with standard convension, please use EVADC_G9_REVNP0.
*/
#define EVADC_G9REVNP0 (EVADC_G9_REVNP0)

/** \brief 29B4, Result Event Node Pointer Reg. 1, Group 9 */
#define EVADC_G9_REVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP1*)0xF00229B4u)
/** Alias (User Manual Name) for EVADC_G9_REVNP1.
* To use register names with standard convension, please use EVADC_G9_REVNP1.
*/
#define EVADC_G9REVNP1 (EVADC_G9_REVNP1)

/** \brief 29C0, Source Event Node Pointer Reg., Group 9 */
#define EVADC_G9_SEVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEVNP*)0xF00229C0u)
/** Alias (User Manual Name) for EVADC_G9_SEVNP.
* To use register names with standard convension, please use EVADC_G9_SEVNP.
*/
#define EVADC_G9SEVNP (EVADC_G9_SEVNP)

/** \brief 29C8, Service Request Software Activation Trigger, Group 9 */
#define EVADC_G9_SRACT /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SRACT*)0xF00229C8u)
/** Alias (User Manual Name) for EVADC_G9_SRACT.
* To use register names with standard convension, please use EVADC_G9_SRACT.
*/
#define EVADC_G9SRACT (EVADC_G9_SRACT)

/** \brief 29F0, External Multiplexer Control Reg., Group 9 */
#define EVADC_G9_EMUXCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCTR*)0xF00229F0u)
/** Alias (User Manual Name) for EVADC_G9_EMUXCTR.
* To use register names with standard convension, please use EVADC_G9_EMUXCTR.
*/
#define EVADC_G9EMUXCTR (EVADC_G9_EMUXCTR)

/** \brief 29F4, Ext. Multiplexer Channel Select Reg., Group 9 */
#define EVADC_G9_EMUXCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCS*)0xF00229F4u)
/** Alias (User Manual Name) for EVADC_G9_EMUXCS.
* To use register names with standard convension, please use EVADC_G9_EMUXCS.
*/
#define EVADC_G9EMUXCS (EVADC_G9_EMUXCS)

/** \brief 29F8, Valid Flag Register, Group 9 */
#define EVADC_G9_VFR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_VFR*)0xF00229F8u)
/** Alias (User Manual Name) for EVADC_G9_VFR.
* To use register names with standard convension, please use EVADC_G9_VFR.
*/
#define EVADC_G9VFR (EVADC_G9_VFR)

/** \brief 2A00, Group 9, Channel 0 Control Register */
#define EVADC_G9_CHCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A00u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR0.
* To use register names with standard convension, please use EVADC_G9_CHCTR0.
*/
#define EVADC_G9CHCTR0 (EVADC_G9_CHCTR0)

/** \brief 2A04, Group 9, Channel 1 Control Register */
#define EVADC_G9_CHCTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A04u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR1.
* To use register names with standard convension, please use EVADC_G9_CHCTR1.
*/
#define EVADC_G9CHCTR1 (EVADC_G9_CHCTR1)

/** \brief 2A08, Group 9, Channel 2 Control Register */
#define EVADC_G9_CHCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A08u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR2.
* To use register names with standard convension, please use EVADC_G9_CHCTR2.
*/
#define EVADC_G9CHCTR2 (EVADC_G9_CHCTR2)

/** \brief 2A0C, Group 9, Channel 3 Control Register */
#define EVADC_G9_CHCTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A0Cu)
/** Alias (User Manual Name) for EVADC_G9_CHCTR3.
* To use register names with standard convension, please use EVADC_G9_CHCTR3.
*/
#define EVADC_G9CHCTR3 (EVADC_G9_CHCTR3)

/** \brief 2A10, Group 9, Channel 4 Control Register */
#define EVADC_G9_CHCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A10u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR4.
* To use register names with standard convension, please use EVADC_G9_CHCTR4.
*/
#define EVADC_G9CHCTR4 (EVADC_G9_CHCTR4)

/** \brief 2A14, Group 9, Channel 5 Control Register */
#define EVADC_G9_CHCTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A14u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR5.
* To use register names with standard convension, please use EVADC_G9_CHCTR5.
*/
#define EVADC_G9CHCTR5 (EVADC_G9_CHCTR5)

/** \brief 2A18, Group 9, Channel 6 Control Register */
#define EVADC_G9_CHCTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A18u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR6.
* To use register names with standard convension, please use EVADC_G9_CHCTR6.
*/
#define EVADC_G9CHCTR6 (EVADC_G9_CHCTR6)

/** \brief 2A1C, Group 9, Channel 7 Control Register */
#define EVADC_G9_CHCTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A1Cu)
/** Alias (User Manual Name) for EVADC_G9_CHCTR7.
* To use register names with standard convension, please use EVADC_G9_CHCTR7.
*/
#define EVADC_G9CHCTR7 (EVADC_G9_CHCTR7)

/** \brief 2A20, Group 9, Channel 8 Control Register */
#define EVADC_G9_CHCTR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A20u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR8.
* To use register names with standard convension, please use EVADC_G9_CHCTR8.
*/
#define EVADC_G9CHCTR8 (EVADC_G9_CHCTR8)

/** \brief 2A24, Group 9, Channel 9 Control Register */
#define EVADC_G9_CHCTR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A24u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR9.
* To use register names with standard convension, please use EVADC_G9_CHCTR9.
*/
#define EVADC_G9CHCTR9 (EVADC_G9_CHCTR9)

/** \brief 2A28, Group 9, Channel 10 Control Register */
#define EVADC_G9_CHCTR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A28u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR10.
* To use register names with standard convension, please use EVADC_G9_CHCTR10.
*/
#define EVADC_G9CHCTR10 (EVADC_G9_CHCTR10)

/** \brief 2A2C, Group 9, Channel 11 Control Register */
#define EVADC_G9_CHCTR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A2Cu)
/** Alias (User Manual Name) for EVADC_G9_CHCTR11.
* To use register names with standard convension, please use EVADC_G9_CHCTR11.
*/
#define EVADC_G9CHCTR11 (EVADC_G9_CHCTR11)

/** \brief 2A30, Group 9, Channel 12 Control Register */
#define EVADC_G9_CHCTR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A30u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR12.
* To use register names with standard convension, please use EVADC_G9_CHCTR12.
*/
#define EVADC_G9CHCTR12 (EVADC_G9_CHCTR12)

/** \brief 2A34, Group 9, Channel 13 Control Register */
#define EVADC_G9_CHCTR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A34u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR13.
* To use register names with standard convension, please use EVADC_G9_CHCTR13.
*/
#define EVADC_G9CHCTR13 (EVADC_G9_CHCTR13)

/** \brief 2A38, Group 9, Channel 14 Control Register */
#define EVADC_G9_CHCTR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A38u)
/** Alias (User Manual Name) for EVADC_G9_CHCTR14.
* To use register names with standard convension, please use EVADC_G9_CHCTR14.
*/
#define EVADC_G9CHCTR14 (EVADC_G9_CHCTR14)

/** \brief 2A3C, Group 9, Channel 15 Control Register */
#define EVADC_G9_CHCTR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022A3Cu)
/** Alias (User Manual Name) for EVADC_G9_CHCTR15.
* To use register names with standard convension, please use EVADC_G9_CHCTR15.
*/
#define EVADC_G9CHCTR15 (EVADC_G9_CHCTR15)

/** \brief 2A80, Group 9 Result Control Register 0 */
#define EVADC_G9_RCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022A80u)
/** Alias (User Manual Name) for EVADC_G9_RCR0.
* To use register names with standard convension, please use EVADC_G9_RCR0.
*/
#define EVADC_G9RCR0 (EVADC_G9_RCR0)

/** \brief 2A84, Group 9 Result Control Register 1 */
#define EVADC_G9_RCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022A84u)
/** Alias (User Manual Name) for EVADC_G9_RCR1.
* To use register names with standard convension, please use EVADC_G9_RCR1.
*/
#define EVADC_G9RCR1 (EVADC_G9_RCR1)

/** \brief 2A88, Group 9 Result Control Register 2 */
#define EVADC_G9_RCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022A88u)
/** Alias (User Manual Name) for EVADC_G9_RCR2.
* To use register names with standard convension, please use EVADC_G9_RCR2.
*/
#define EVADC_G9RCR2 (EVADC_G9_RCR2)

/** \brief 2A8C, Group 9 Result Control Register 3 */
#define EVADC_G9_RCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022A8Cu)
/** Alias (User Manual Name) for EVADC_G9_RCR3.
* To use register names with standard convension, please use EVADC_G9_RCR3.
*/
#define EVADC_G9RCR3 (EVADC_G9_RCR3)

/** \brief 2A90, Group 9 Result Control Register 4 */
#define EVADC_G9_RCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022A90u)
/** Alias (User Manual Name) for EVADC_G9_RCR4.
* To use register names with standard convension, please use EVADC_G9_RCR4.
*/
#define EVADC_G9RCR4 (EVADC_G9_RCR4)

/** \brief 2A94, Group 9 Result Control Register 5 */
#define EVADC_G9_RCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022A94u)
/** Alias (User Manual Name) for EVADC_G9_RCR5.
* To use register names with standard convension, please use EVADC_G9_RCR5.
*/
#define EVADC_G9RCR5 (EVADC_G9_RCR5)

/** \brief 2A98, Group 9 Result Control Register 6 */
#define EVADC_G9_RCR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022A98u)
/** Alias (User Manual Name) for EVADC_G9_RCR6.
* To use register names with standard convension, please use EVADC_G9_RCR6.
*/
#define EVADC_G9RCR6 (EVADC_G9_RCR6)

/** \brief 2A9C, Group 9 Result Control Register 7 */
#define EVADC_G9_RCR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022A9Cu)
/** Alias (User Manual Name) for EVADC_G9_RCR7.
* To use register names with standard convension, please use EVADC_G9_RCR7.
*/
#define EVADC_G9RCR7 (EVADC_G9_RCR7)

/** \brief 2AA0, Group 9 Result Control Register 8 */
#define EVADC_G9_RCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022AA0u)
/** Alias (User Manual Name) for EVADC_G9_RCR8.
* To use register names with standard convension, please use EVADC_G9_RCR8.
*/
#define EVADC_G9RCR8 (EVADC_G9_RCR8)

/** \brief 2AA4, Group 9 Result Control Register 9 */
#define EVADC_G9_RCR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022AA4u)
/** Alias (User Manual Name) for EVADC_G9_RCR9.
* To use register names with standard convension, please use EVADC_G9_RCR9.
*/
#define EVADC_G9RCR9 (EVADC_G9_RCR9)

/** \brief 2AA8, Group 9 Result Control Register 10 */
#define EVADC_G9_RCR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022AA8u)
/** Alias (User Manual Name) for EVADC_G9_RCR10.
* To use register names with standard convension, please use EVADC_G9_RCR10.
*/
#define EVADC_G9RCR10 (EVADC_G9_RCR10)

/** \brief 2AAC, Group 9 Result Control Register 11 */
#define EVADC_G9_RCR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022AACu)
/** Alias (User Manual Name) for EVADC_G9_RCR11.
* To use register names with standard convension, please use EVADC_G9_RCR11.
*/
#define EVADC_G9RCR11 (EVADC_G9_RCR11)

/** \brief 2AB0, Group 9 Result Control Register 12 */
#define EVADC_G9_RCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022AB0u)
/** Alias (User Manual Name) for EVADC_G9_RCR12.
* To use register names with standard convension, please use EVADC_G9_RCR12.
*/
#define EVADC_G9RCR12 (EVADC_G9_RCR12)

/** \brief 2AB4, Group 9 Result Control Register 13 */
#define EVADC_G9_RCR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022AB4u)
/** Alias (User Manual Name) for EVADC_G9_RCR13.
* To use register names with standard convension, please use EVADC_G9_RCR13.
*/
#define EVADC_G9RCR13 (EVADC_G9_RCR13)

/** \brief 2AB8, Group 9 Result Control Register 14 */
#define EVADC_G9_RCR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022AB8u)
/** Alias (User Manual Name) for EVADC_G9_RCR14.
* To use register names with standard convension, please use EVADC_G9_RCR14.
*/
#define EVADC_G9RCR14 (EVADC_G9_RCR14)

/** \brief 2ABC, Group 9 Result Control Register 15 */
#define EVADC_G9_RCR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022ABCu)
/** Alias (User Manual Name) for EVADC_G9_RCR15.
* To use register names with standard convension, please use EVADC_G9_RCR15.
*/
#define EVADC_G9RCR15 (EVADC_G9_RCR15)

/** \brief 2B00, Group 9 Result Register 0\n */
#define EVADC_G9_RES0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B00u)
/** Alias (User Manual Name) for EVADC_G9_RES0.
* To use register names with standard convension, please use EVADC_G9_RES0.
*/
#define EVADC_G9RES0 (EVADC_G9_RES0)

/** \brief 2B04, Group 9 Result Register 1\n */
#define EVADC_G9_RES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B04u)
/** Alias (User Manual Name) for EVADC_G9_RES1.
* To use register names with standard convension, please use EVADC_G9_RES1.
*/
#define EVADC_G9RES1 (EVADC_G9_RES1)

/** \brief 2B08, Group 9 Result Register 2\n */
#define EVADC_G9_RES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B08u)
/** Alias (User Manual Name) for EVADC_G9_RES2.
* To use register names with standard convension, please use EVADC_G9_RES2.
*/
#define EVADC_G9RES2 (EVADC_G9_RES2)

/** \brief 2B0C, Group 9 Result Register 3\n */
#define EVADC_G9_RES3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B0Cu)
/** Alias (User Manual Name) for EVADC_G9_RES3.
* To use register names with standard convension, please use EVADC_G9_RES3.
*/
#define EVADC_G9RES3 (EVADC_G9_RES3)

/** \brief 2B10, Group 9 Result Register 4\n */
#define EVADC_G9_RES4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B10u)
/** Alias (User Manual Name) for EVADC_G9_RES4.
* To use register names with standard convension, please use EVADC_G9_RES4.
*/
#define EVADC_G9RES4 (EVADC_G9_RES4)

/** \brief 2B14, Group 9 Result Register 5\n */
#define EVADC_G9_RES5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B14u)
/** Alias (User Manual Name) for EVADC_G9_RES5.
* To use register names with standard convension, please use EVADC_G9_RES5.
*/
#define EVADC_G9RES5 (EVADC_G9_RES5)

/** \brief 2B18, Group 9 Result Register 6\n */
#define EVADC_G9_RES6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B18u)
/** Alias (User Manual Name) for EVADC_G9_RES6.
* To use register names with standard convension, please use EVADC_G9_RES6.
*/
#define EVADC_G9RES6 (EVADC_G9_RES6)

/** \brief 2B1C, Group 9 Result Register 7\n */
#define EVADC_G9_RES7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B1Cu)
/** Alias (User Manual Name) for EVADC_G9_RES7.
* To use register names with standard convension, please use EVADC_G9_RES7.
*/
#define EVADC_G9RES7 (EVADC_G9_RES7)

/** \brief 2B20, Group 9 Result Register 8\n */
#define EVADC_G9_RES8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B20u)
/** Alias (User Manual Name) for EVADC_G9_RES8.
* To use register names with standard convension, please use EVADC_G9_RES8.
*/
#define EVADC_G9RES8 (EVADC_G9_RES8)

/** \brief 2B24, Group 9 Result Register 9\n */
#define EVADC_G9_RES9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B24u)
/** Alias (User Manual Name) for EVADC_G9_RES9.
* To use register names with standard convension, please use EVADC_G9_RES9.
*/
#define EVADC_G9RES9 (EVADC_G9_RES9)

/** \brief 2B28, Group 9 Result Register 10\n */
#define EVADC_G9_RES10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B28u)
/** Alias (User Manual Name) for EVADC_G9_RES10.
* To use register names with standard convension, please use EVADC_G9_RES10.
*/
#define EVADC_G9RES10 (EVADC_G9_RES10)

/** \brief 2B2C, Group 9 Result Register 11\n */
#define EVADC_G9_RES11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B2Cu)
/** Alias (User Manual Name) for EVADC_G9_RES11.
* To use register names with standard convension, please use EVADC_G9_RES11.
*/
#define EVADC_G9RES11 (EVADC_G9_RES11)

/** \brief 2B30, Group 9 Result Register 12\n */
#define EVADC_G9_RES12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B30u)
/** Alias (User Manual Name) for EVADC_G9_RES12.
* To use register names with standard convension, please use EVADC_G9_RES12.
*/
#define EVADC_G9RES12 (EVADC_G9_RES12)

/** \brief 2B34, Group 9 Result Register 13\n */
#define EVADC_G9_RES13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B34u)
/** Alias (User Manual Name) for EVADC_G9_RES13.
* To use register names with standard convension, please use EVADC_G9_RES13.
*/
#define EVADC_G9RES13 (EVADC_G9_RES13)

/** \brief 2B38, Group 9 Result Register 14\n */
#define EVADC_G9_RES14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B38u)
/** Alias (User Manual Name) for EVADC_G9_RES14.
* To use register names with standard convension, please use EVADC_G9_RES14.
*/
#define EVADC_G9RES14 (EVADC_G9_RES14)

/** \brief 2B3C, Group 9 Result Register 15\n */
#define EVADC_G9_RES15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022B3Cu)
/** Alias (User Manual Name) for EVADC_G9_RES15.
* To use register names with standard convension, please use EVADC_G9_RES15.
*/
#define EVADC_G9RES15 (EVADC_G9_RES15)

/** \brief 2B80, Group 9 Result Reg. 0, Debug */
#define EVADC_G9_RESD0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022B80u)
/** Alias (User Manual Name) for EVADC_G9_RESD0.
* To use register names with standard convension, please use EVADC_G9_RESD0.
*/
#define EVADC_G9RESD0 (EVADC_G9_RESD0)

/** \brief 2B84, Group 9 Result Reg. 1, Debug */
#define EVADC_G9_RESD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022B84u)
/** Alias (User Manual Name) for EVADC_G9_RESD1.
* To use register names with standard convension, please use EVADC_G9_RESD1.
*/
#define EVADC_G9RESD1 (EVADC_G9_RESD1)

/** \brief 2B88, Group 9 Result Reg. 2, Debug */
#define EVADC_G9_RESD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022B88u)
/** Alias (User Manual Name) for EVADC_G9_RESD2.
* To use register names with standard convension, please use EVADC_G9_RESD2.
*/
#define EVADC_G9RESD2 (EVADC_G9_RESD2)

/** \brief 2B8C, Group 9 Result Reg. 3, Debug */
#define EVADC_G9_RESD3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022B8Cu)
/** Alias (User Manual Name) for EVADC_G9_RESD3.
* To use register names with standard convension, please use EVADC_G9_RESD3.
*/
#define EVADC_G9RESD3 (EVADC_G9_RESD3)

/** \brief 2B90, Group 9 Result Reg. 4, Debug */
#define EVADC_G9_RESD4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022B90u)
/** Alias (User Manual Name) for EVADC_G9_RESD4.
* To use register names with standard convension, please use EVADC_G9_RESD4.
*/
#define EVADC_G9RESD4 (EVADC_G9_RESD4)

/** \brief 2B94, Group 9 Result Reg. 5, Debug */
#define EVADC_G9_RESD5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022B94u)
/** Alias (User Manual Name) for EVADC_G9_RESD5.
* To use register names with standard convension, please use EVADC_G9_RESD5.
*/
#define EVADC_G9RESD5 (EVADC_G9_RESD5)

/** \brief 2B98, Group 9 Result Reg. 6, Debug */
#define EVADC_G9_RESD6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022B98u)
/** Alias (User Manual Name) for EVADC_G9_RESD6.
* To use register names with standard convension, please use EVADC_G9_RESD6.
*/
#define EVADC_G9RESD6 (EVADC_G9_RESD6)

/** \brief 2B9C, Group 9 Result Reg. 7, Debug */
#define EVADC_G9_RESD7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022B9Cu)
/** Alias (User Manual Name) for EVADC_G9_RESD7.
* To use register names with standard convension, please use EVADC_G9_RESD7.
*/
#define EVADC_G9RESD7 (EVADC_G9_RESD7)

/** \brief 2BA0, Group 9 Result Reg. 8, Debug */
#define EVADC_G9_RESD8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022BA0u)
/** Alias (User Manual Name) for EVADC_G9_RESD8.
* To use register names with standard convension, please use EVADC_G9_RESD8.
*/
#define EVADC_G9RESD8 (EVADC_G9_RESD8)

/** \brief 2BA4, Group 9 Result Reg. 9, Debug */
#define EVADC_G9_RESD9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022BA4u)
/** Alias (User Manual Name) for EVADC_G9_RESD9.
* To use register names with standard convension, please use EVADC_G9_RESD9.
*/
#define EVADC_G9RESD9 (EVADC_G9_RESD9)

/** \brief 2BA8, Group 9 Result Reg. 10, Debug */
#define EVADC_G9_RESD10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022BA8u)
/** Alias (User Manual Name) for EVADC_G9_RESD10.
* To use register names with standard convension, please use EVADC_G9_RESD10.
*/
#define EVADC_G9RESD10 (EVADC_G9_RESD10)

/** \brief 2BAC, Group 9 Result Reg. 11, Debug */
#define EVADC_G9_RESD11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022BACu)
/** Alias (User Manual Name) for EVADC_G9_RESD11.
* To use register names with standard convension, please use EVADC_G9_RESD11.
*/
#define EVADC_G9RESD11 (EVADC_G9_RESD11)

/** \brief 2BB0, Group 9 Result Reg. 12, Debug */
#define EVADC_G9_RESD12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022BB0u)
/** Alias (User Manual Name) for EVADC_G9_RESD12.
* To use register names with standard convension, please use EVADC_G9_RESD12.
*/
#define EVADC_G9RESD12 (EVADC_G9_RESD12)

/** \brief 2BB4, Group 9 Result Reg. 13, Debug */
#define EVADC_G9_RESD13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022BB4u)
/** Alias (User Manual Name) for EVADC_G9_RESD13.
* To use register names with standard convension, please use EVADC_G9_RESD13.
*/
#define EVADC_G9RESD13 (EVADC_G9_RESD13)

/** \brief 2BB8, Group 9 Result Reg. 14, Debug */
#define EVADC_G9_RESD14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022BB8u)
/** Alias (User Manual Name) for EVADC_G9_RESD14.
* To use register names with standard convension, please use EVADC_G9_RESD14.
*/
#define EVADC_G9RESD14 (EVADC_G9_RESD14)

/** \brief 2BBC, Group 9 Result Reg. 15, Debug */
#define EVADC_G9_RESD15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022BBCu)
/** Alias (User Manual Name) for EVADC_G9_RESD15.
* To use register names with standard convension, please use EVADC_G9_RESD15.
*/
#define EVADC_G9RESD15 (EVADC_G9_RESD15)

/** \brief 2C10, Trigger Control Register, Group 10 */
#define EVADC_G10_TRCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_TRCTR*)0xF0022C10u)
/** Alias (User Manual Name) for EVADC_G10_TRCTR.
* To use register names with standard convension, please use EVADC_G10_TRCTR.
*/
#define EVADC_G10TRCTR (EVADC_G10_TRCTR)

/** \brief 2C80, Arbitration Config. Register, Group 10 */
#define EVADC_G10_ARBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBCFG*)0xF0022C80u)
/** Alias (User Manual Name) for EVADC_G10_ARBCFG.
* To use register names with standard convension, please use EVADC_G10_ARBCFG.
*/
#define EVADC_G10ARBCFG (EVADC_G10_ARBCFG)

/** \brief 2C84, Arbitration Priority Register, Group 10 */
#define EVADC_G10_ARBPR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBPR*)0xF0022C84u)
/** Alias (User Manual Name) for EVADC_G10_ARBPR.
* To use register names with standard convension, please use EVADC_G10_ARBPR.
*/
#define EVADC_G10ARBPR (EVADC_G10_ARBPR)

/** \brief 2C88, Analog Fct. Config. Register, Group 10 */
#define EVADC_G10_ANCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ANCFG*)0xF0022C88u)
/** Alias (User Manual Name) for EVADC_G10_ANCFG.
* To use register names with standard convension, please use EVADC_G10_ANCFG.
*/
#define EVADC_G10ANCFG (EVADC_G10_ANCFG)

/** \brief 2CA0, Input Class Register 0, Group 10 */
#define EVADC_G10_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF0022CA0u)
/** Alias (User Manual Name) for EVADC_G10_ICLASS0.
* To use register names with standard convension, please use EVADC_G10_ICLASS0.
*/
#define EVADC_G10ICLASS0 (EVADC_G10_ICLASS0)

/** \brief 2CA4, Input Class Register 1, Group 10 */
#define EVADC_G10_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF0022CA4u)
/** Alias (User Manual Name) for EVADC_G10_ICLASS1.
* To use register names with standard convension, please use EVADC_G10_ICLASS1.
*/
#define EVADC_G10ICLASS1 (EVADC_G10_ICLASS1)

/** \brief 2CB0, Alias Register, Group 10 */
#define EVADC_G10_ALIAS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ALIAS*)0xF0022CB0u)
/** Alias (User Manual Name) for EVADC_G10_ALIAS.
* To use register names with standard convension, please use EVADC_G10_ALIAS.
*/
#define EVADC_G10ALIAS (EVADC_G10_ALIAS)

/** \brief 2CB8, Boundary Select Register, Group 10 */
#define EVADC_G10_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_BOUND*)0xF0022CB8u)
/** Alias (User Manual Name) for EVADC_G10_BOUND.
* To use register names with standard convension, please use EVADC_G10_BOUND.
*/
#define EVADC_G10BOUND (EVADC_G10_BOUND)

/** \brief 2CC0, Synchronization Control Register, Group 10 */
#define EVADC_G10_SYNCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SYNCTR*)0xF0022CC0u)
/** Alias (User Manual Name) for EVADC_G10_SYNCTR.
* To use register names with standard convension, please use EVADC_G10_SYNCTR.
*/
#define EVADC_G10SYNCTR (EVADC_G10_SYNCTR)

/** \brief 2D00, Queue 0 Source Contr. Register, Group 10 */
#define EVADC_G10_Q0_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022D00u)
/** Alias (User Manual Name) for EVADC_G10_Q0_QCTRL.
* To use register names with standard convension, please use EVADC_G10_Q0_QCTRL.
*/
#define EVADC_G10QCTRL0 (EVADC_G10_Q0_QCTRL)

/** \brief 2D04, Queue 0 Mode Register, Group 10 */
#define EVADC_G10_Q0_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022D04u)
/** Alias (User Manual Name) for EVADC_G10_Q0_QMR.
* To use register names with standard convension, please use EVADC_G10_Q0_QMR.
*/
#define EVADC_G10QMR0 (EVADC_G10_Q0_QMR)

/** \brief 2D08, Queue 0 Status Register, Group 10 */
#define EVADC_G10_Q0_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022D08u)
/** Alias (User Manual Name) for EVADC_G10_Q0_QSR.
* To use register names with standard convension, please use EVADC_G10_Q0_QSR.
*/
#define EVADC_G10QSR0 (EVADC_G10_Q0_QSR)

/** \brief 2D0C, Queue 0 Register 0, Group 10 */
#define EVADC_G10_Q0_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF0022D0Cu)
/** Alias (User Manual Name) for EVADC_G10_Q0_Q0R.
* To use register names with standard convension, please use EVADC_G10_Q0_Q0R.
*/
#define EVADC_G10Q0R0 (EVADC_G10_Q0_Q0R)

/** \brief 2D10, Queue 0 Input Register, Group 10 */
#define EVADC_G10_Q0_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022D10u)
/** Alias (User Manual Name) for EVADC_G10_Q0_QINR.
* To use register names with standard convension, please use EVADC_G10_Q0_QINR.
*/
#define EVADC_G10QINR0 (EVADC_G10_Q0_QINR)

/** \brief 2D14, Queue 0 Backup Register, Group 10 */
#define EVADC_G10_Q0_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022D14u)
/** Alias (User Manual Name) for EVADC_G10_Q0_QBUR.
* To use register names with standard convension, please use EVADC_G10_Q0_QBUR.
*/
#define EVADC_G10QBUR0 (EVADC_G10_Q0_QBUR)

/** \brief 2D18, Queue 0 Requ. Timer Mode Reg., Group 10 */
#define EVADC_G10_Q0_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022D18u)
/** Alias (User Manual Name) for EVADC_G10_Q0_REQTM.
* To use register names with standard convension, please use EVADC_G10_Q0_REQTM.
*/
#define EVADC_G10REQTM0 (EVADC_G10_Q0_REQTM)

/** \brief 2D1C, Queue 0 Requ. Timer Status Reg., Group 10 */
#define EVADC_G10_Q0_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF0022D1Cu)
/** Alias (User Manual Name) for EVADC_G10_Q0_REQTS.
* To use register names with standard convension, please use EVADC_G10_Q0_REQTS.
*/
#define EVADC_G10REQTS0 (EVADC_G10_Q0_REQTS)

/** \brief 2D20, Queue 1 Source Contr. Register, Group 10 */
#define EVADC_G10_Q1_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022D20u)
/** Alias (User Manual Name) for EVADC_G10_Q1_QCTRL.
* To use register names with standard convension, please use EVADC_G10_Q1_QCTRL.
*/
#define EVADC_G10QCTRL1 (EVADC_G10_Q1_QCTRL)

/** \brief 2D24, Queue 1 Mode Register, Group 10 */
#define EVADC_G10_Q1_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022D24u)
/** Alias (User Manual Name) for EVADC_G10_Q1_QMR.
* To use register names with standard convension, please use EVADC_G10_Q1_QMR.
*/
#define EVADC_G10QMR1 (EVADC_G10_Q1_QMR)

/** \brief 2D28, Queue 1 Status Register, Group 10 */
#define EVADC_G10_Q1_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022D28u)
/** Alias (User Manual Name) for EVADC_G10_Q1_QSR.
* To use register names with standard convension, please use EVADC_G10_Q1_QSR.
*/
#define EVADC_G10QSR1 (EVADC_G10_Q1_QSR)

/** \brief 2D2C, Queue 1 Register 0, Group 10 */
#define EVADC_G10_Q1_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF0022D2Cu)
/** Alias (User Manual Name) for EVADC_G10_Q1_Q0R.
* To use register names with standard convension, please use EVADC_G10_Q1_Q0R.
*/
#define EVADC_G10Q0R1 (EVADC_G10_Q1_Q0R)

/** \brief 2D30, Queue 1 Input Register, Group 10 */
#define EVADC_G10_Q1_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022D30u)
/** Alias (User Manual Name) for EVADC_G10_Q1_QINR.
* To use register names with standard convension, please use EVADC_G10_Q1_QINR.
*/
#define EVADC_G10QINR1 (EVADC_G10_Q1_QINR)

/** \brief 2D34, Queue 1 Backup Register, Group 10 */
#define EVADC_G10_Q1_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022D34u)
/** Alias (User Manual Name) for EVADC_G10_Q1_QBUR.
* To use register names with standard convension, please use EVADC_G10_Q1_QBUR.
*/
#define EVADC_G10QBUR1 (EVADC_G10_Q1_QBUR)

/** \brief 2D38, Queue 1 Requ. Timer Mode Reg., Group 10 */
#define EVADC_G10_Q1_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022D38u)
/** Alias (User Manual Name) for EVADC_G10_Q1_REQTM.
* To use register names with standard convension, please use EVADC_G10_Q1_REQTM.
*/
#define EVADC_G10REQTM1 (EVADC_G10_Q1_REQTM)

/** \brief 2D3C, Queue 1 Requ. Timer Status Reg., Group 10 */
#define EVADC_G10_Q1_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF0022D3Cu)
/** Alias (User Manual Name) for EVADC_G10_Q1_REQTS.
* To use register names with standard convension, please use EVADC_G10_Q1_REQTS.
*/
#define EVADC_G10REQTS1 (EVADC_G10_Q1_REQTS)

/** \brief 2D40, Queue 2 Source Contr. Register, Group 10 */
#define EVADC_G10_Q2_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0022D40u)
/** Alias (User Manual Name) for EVADC_G10_Q2_QCTRL.
* To use register names with standard convension, please use EVADC_G10_Q2_QCTRL.
*/
#define EVADC_G10QCTRL2 (EVADC_G10_Q2_QCTRL)

/** \brief 2D44, Queue 2 Mode Register, Group 10 */
#define EVADC_G10_Q2_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0022D44u)
/** Alias (User Manual Name) for EVADC_G10_Q2_QMR.
* To use register names with standard convension, please use EVADC_G10_Q2_QMR.
*/
#define EVADC_G10QMR2 (EVADC_G10_Q2_QMR)

/** \brief 2D48, Queue 2 Status Register, Group 10 */
#define EVADC_G10_Q2_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0022D48u)
/** Alias (User Manual Name) for EVADC_G10_Q2_QSR.
* To use register names with standard convension, please use EVADC_G10_Q2_QSR.
*/
#define EVADC_G10QSR2 (EVADC_G10_Q2_QSR)

/** \brief 2D4C, Queue 2 Register 0, Group 10 */
#define EVADC_G10_Q2_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF0022D4Cu)
/** Alias (User Manual Name) for EVADC_G10_Q2_Q0R.
* To use register names with standard convension, please use EVADC_G10_Q2_Q0R.
*/
#define EVADC_G10Q0R2 (EVADC_G10_Q2_Q0R)

/** \brief 2D50, Queue 2 Input Register, Group 10 */
#define EVADC_G10_Q2_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0022D50u)
/** Alias (User Manual Name) for EVADC_G10_Q2_QINR.
* To use register names with standard convension, please use EVADC_G10_Q2_QINR.
*/
#define EVADC_G10QINR2 (EVADC_G10_Q2_QINR)

/** \brief 2D54, Queue 2 Backup Register, Group 10 */
#define EVADC_G10_Q2_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0022D54u)
/** Alias (User Manual Name) for EVADC_G10_Q2_QBUR.
* To use register names with standard convension, please use EVADC_G10_Q2_QBUR.
*/
#define EVADC_G10QBUR2 (EVADC_G10_Q2_QBUR)

/** \brief 2D58, Queue 2 Requ. Timer Mode Reg., Group 10 */
#define EVADC_G10_Q2_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0022D58u)
/** Alias (User Manual Name) for EVADC_G10_Q2_REQTM.
* To use register names with standard convension, please use EVADC_G10_Q2_REQTM.
*/
#define EVADC_G10REQTM2 (EVADC_G10_Q2_REQTM)

/** \brief 2D5C, Queue 2 Requ. Timer Status Reg., Group 10 */
#define EVADC_G10_Q2_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF0022D5Cu)
/** Alias (User Manual Name) for EVADC_G10_Q2_REQTS.
* To use register names with standard convension, please use EVADC_G10_Q2_REQTS.
*/
#define EVADC_G10REQTS2 (EVADC_G10_Q2_REQTS)

/** \brief 2D80, Channel Event Flag Register, Group 10 */
#define EVADC_G10_CEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFLAG*)0xF0022D80u)
/** Alias (User Manual Name) for EVADC_G10_CEFLAG.
* To use register names with standard convension, please use EVADC_G10_CEFLAG.
*/
#define EVADC_G10CEFLAG (EVADC_G10_CEFLAG)

/** \brief 2D84, Result Event Flag Register, Group 10 */
#define EVADC_G10_REFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFLAG*)0xF0022D84u)
/** Alias (User Manual Name) for EVADC_G10_REFLAG.
* To use register names with standard convension, please use EVADC_G10_REFLAG.
*/
#define EVADC_G10REFLAG (EVADC_G10_REFLAG)

/** \brief 2D88, Source Event Flag Register, Group 10 */
#define EVADC_G10_SEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFLAG*)0xF0022D88u)
/** Alias (User Manual Name) for EVADC_G10_SEFLAG.
* To use register names with standard convension, please use EVADC_G10_SEFLAG.
*/
#define EVADC_G10SEFLAG (EVADC_G10_SEFLAG)

/** \brief 2D90, Channel Event Flag Clear Register, Group 10 */
#define EVADC_G10_CEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFCLR*)0xF0022D90u)
/** Alias (User Manual Name) for EVADC_G10_CEFCLR.
* To use register names with standard convension, please use EVADC_G10_CEFCLR.
*/
#define EVADC_G10CEFCLR (EVADC_G10_CEFCLR)

/** \brief 2D94, Result Event Flag Clear Register, Group 10 */
#define EVADC_G10_REFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFCLR*)0xF0022D94u)
/** Alias (User Manual Name) for EVADC_G10_REFCLR.
* To use register names with standard convension, please use EVADC_G10_REFCLR.
*/
#define EVADC_G10REFCLR (EVADC_G10_REFCLR)

/** \brief 2D98, Source Event Flag Clear Reg., Group 10 */
#define EVADC_G10_SEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFCLR*)0xF0022D98u)
/** Alias (User Manual Name) for EVADC_G10_SEFCLR.
* To use register names with standard convension, please use EVADC_G10_SEFCLR.
*/
#define EVADC_G10SEFCLR (EVADC_G10_SEFCLR)

/** \brief 2DA0, Channel Event Node Pointer Reg. 0, Group 10 */
#define EVADC_G10_CEVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP0*)0xF0022DA0u)
/** Alias (User Manual Name) for EVADC_G10_CEVNP0.
* To use register names with standard convension, please use EVADC_G10_CEVNP0.
*/
#define EVADC_G10CEVNP0 (EVADC_G10_CEVNP0)

/** \brief 2DA4, Channel Event Node Pointer Reg. 1, Group 10 */
#define EVADC_G10_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF0022DA4u)
/** Alias (User Manual Name) for EVADC_G10_CEVNP1.
* To use register names with standard convension, please use EVADC_G10_CEVNP1.
*/
#define EVADC_G10CEVNP1 (EVADC_G10_CEVNP1)

/** \brief 2DB0, Result Event Node Pointer Reg. 0, Group 10 */
#define EVADC_G10_REVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP0*)0xF0022DB0u)
/** Alias (User Manual Name) for EVADC_G10_REVNP0.
* To use register names with standard convension, please use EVADC_G10_REVNP0.
*/
#define EVADC_G10REVNP0 (EVADC_G10_REVNP0)

/** \brief 2DB4, Result Event Node Pointer Reg. 1, Group 10 */
#define EVADC_G10_REVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP1*)0xF0022DB4u)
/** Alias (User Manual Name) for EVADC_G10_REVNP1.
* To use register names with standard convension, please use EVADC_G10_REVNP1.
*/
#define EVADC_G10REVNP1 (EVADC_G10_REVNP1)

/** \brief 2DC0, Source Event Node Pointer Reg., Group 10 */
#define EVADC_G10_SEVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEVNP*)0xF0022DC0u)
/** Alias (User Manual Name) for EVADC_G10_SEVNP.
* To use register names with standard convension, please use EVADC_G10_SEVNP.
*/
#define EVADC_G10SEVNP (EVADC_G10_SEVNP)

/** \brief 2DC8, Service Request Software Activation Trigger, Group 10 */
#define EVADC_G10_SRACT /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SRACT*)0xF0022DC8u)
/** Alias (User Manual Name) for EVADC_G10_SRACT.
* To use register names with standard convension, please use EVADC_G10_SRACT.
*/
#define EVADC_G10SRACT (EVADC_G10_SRACT)

/** \brief 2DF0, External Multiplexer Control Reg., Group 10 */
#define EVADC_G10_EMUXCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCTR*)0xF0022DF0u)
/** Alias (User Manual Name) for EVADC_G10_EMUXCTR.
* To use register names with standard convension, please use EVADC_G10_EMUXCTR.
*/
#define EVADC_G10EMUXCTR (EVADC_G10_EMUXCTR)

/** \brief 2DF4, Ext. Multiplexer Channel Select Reg., Group 10 */
#define EVADC_G10_EMUXCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCS*)0xF0022DF4u)
/** Alias (User Manual Name) for EVADC_G10_EMUXCS.
* To use register names with standard convension, please use EVADC_G10_EMUXCS.
*/
#define EVADC_G10EMUXCS (EVADC_G10_EMUXCS)

/** \brief 2DF8, Valid Flag Register, Group 10 */
#define EVADC_G10_VFR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_VFR*)0xF0022DF8u)
/** Alias (User Manual Name) for EVADC_G10_VFR.
* To use register names with standard convension, please use EVADC_G10_VFR.
*/
#define EVADC_G10VFR (EVADC_G10_VFR)

/** \brief 2E00, Group 10, Channel 0 Control Register */
#define EVADC_G10_CHCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E00u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR0.
* To use register names with standard convension, please use EVADC_G10_CHCTR0.
*/
#define EVADC_G10CHCTR0 (EVADC_G10_CHCTR0)

/** \brief 2E04, Group 10, Channel 1 Control Register */
#define EVADC_G10_CHCTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E04u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR1.
* To use register names with standard convension, please use EVADC_G10_CHCTR1.
*/
#define EVADC_G10CHCTR1 (EVADC_G10_CHCTR1)

/** \brief 2E08, Group 10, Channel 2 Control Register */
#define EVADC_G10_CHCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E08u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR2.
* To use register names with standard convension, please use EVADC_G10_CHCTR2.
*/
#define EVADC_G10CHCTR2 (EVADC_G10_CHCTR2)

/** \brief 2E0C, Group 10, Channel 3 Control Register */
#define EVADC_G10_CHCTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E0Cu)
/** Alias (User Manual Name) for EVADC_G10_CHCTR3.
* To use register names with standard convension, please use EVADC_G10_CHCTR3.
*/
#define EVADC_G10CHCTR3 (EVADC_G10_CHCTR3)

/** \brief 2E10, Group 10, Channel 4 Control Register */
#define EVADC_G10_CHCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E10u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR4.
* To use register names with standard convension, please use EVADC_G10_CHCTR4.
*/
#define EVADC_G10CHCTR4 (EVADC_G10_CHCTR4)

/** \brief 2E14, Group 10, Channel 5 Control Register */
#define EVADC_G10_CHCTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E14u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR5.
* To use register names with standard convension, please use EVADC_G10_CHCTR5.
*/
#define EVADC_G10CHCTR5 (EVADC_G10_CHCTR5)

/** \brief 2E18, Group 10, Channel 6 Control Register */
#define EVADC_G10_CHCTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E18u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR6.
* To use register names with standard convension, please use EVADC_G10_CHCTR6.
*/
#define EVADC_G10CHCTR6 (EVADC_G10_CHCTR6)

/** \brief 2E1C, Group 10, Channel 7 Control Register */
#define EVADC_G10_CHCTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E1Cu)
/** Alias (User Manual Name) for EVADC_G10_CHCTR7.
* To use register names with standard convension, please use EVADC_G10_CHCTR7.
*/
#define EVADC_G10CHCTR7 (EVADC_G10_CHCTR7)

/** \brief 2E20, Group 10, Channel 8 Control Register */
#define EVADC_G10_CHCTR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E20u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR8.
* To use register names with standard convension, please use EVADC_G10_CHCTR8.
*/
#define EVADC_G10CHCTR8 (EVADC_G10_CHCTR8)

/** \brief 2E24, Group 10, Channel 9 Control Register */
#define EVADC_G10_CHCTR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E24u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR9.
* To use register names with standard convension, please use EVADC_G10_CHCTR9.
*/
#define EVADC_G10CHCTR9 (EVADC_G10_CHCTR9)

/** \brief 2E28, Group 10, Channel 10 Control Register */
#define EVADC_G10_CHCTR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E28u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR10.
* To use register names with standard convension, please use EVADC_G10_CHCTR10.
*/
#define EVADC_G10CHCTR10 (EVADC_G10_CHCTR10)

/** \brief 2E2C, Group 10, Channel 11 Control Register */
#define EVADC_G10_CHCTR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E2Cu)
/** Alias (User Manual Name) for EVADC_G10_CHCTR11.
* To use register names with standard convension, please use EVADC_G10_CHCTR11.
*/
#define EVADC_G10CHCTR11 (EVADC_G10_CHCTR11)

/** \brief 2E30, Group 10, Channel 12 Control Register */
#define EVADC_G10_CHCTR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E30u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR12.
* To use register names with standard convension, please use EVADC_G10_CHCTR12.
*/
#define EVADC_G10CHCTR12 (EVADC_G10_CHCTR12)

/** \brief 2E34, Group 10, Channel 13 Control Register */
#define EVADC_G10_CHCTR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E34u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR13.
* To use register names with standard convension, please use EVADC_G10_CHCTR13.
*/
#define EVADC_G10CHCTR13 (EVADC_G10_CHCTR13)

/** \brief 2E38, Group 10, Channel 14 Control Register */
#define EVADC_G10_CHCTR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E38u)
/** Alias (User Manual Name) for EVADC_G10_CHCTR14.
* To use register names with standard convension, please use EVADC_G10_CHCTR14.
*/
#define EVADC_G10CHCTR14 (EVADC_G10_CHCTR14)

/** \brief 2E3C, Group 10, Channel 15 Control Register */
#define EVADC_G10_CHCTR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0022E3Cu)
/** Alias (User Manual Name) for EVADC_G10_CHCTR15.
* To use register names with standard convension, please use EVADC_G10_CHCTR15.
*/
#define EVADC_G10CHCTR15 (EVADC_G10_CHCTR15)

/** \brief 2E80, Group 10 Result Control Register 0 */
#define EVADC_G10_RCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022E80u)
/** Alias (User Manual Name) for EVADC_G10_RCR0.
* To use register names with standard convension, please use EVADC_G10_RCR0.
*/
#define EVADC_G10RCR0 (EVADC_G10_RCR0)

/** \brief 2E84, Group 10 Result Control Register 1 */
#define EVADC_G10_RCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022E84u)
/** Alias (User Manual Name) for EVADC_G10_RCR1.
* To use register names with standard convension, please use EVADC_G10_RCR1.
*/
#define EVADC_G10RCR1 (EVADC_G10_RCR1)

/** \brief 2E88, Group 10 Result Control Register 2 */
#define EVADC_G10_RCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022E88u)
/** Alias (User Manual Name) for EVADC_G10_RCR2.
* To use register names with standard convension, please use EVADC_G10_RCR2.
*/
#define EVADC_G10RCR2 (EVADC_G10_RCR2)

/** \brief 2E8C, Group 10 Result Control Register 3 */
#define EVADC_G10_RCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022E8Cu)
/** Alias (User Manual Name) for EVADC_G10_RCR3.
* To use register names with standard convension, please use EVADC_G10_RCR3.
*/
#define EVADC_G10RCR3 (EVADC_G10_RCR3)

/** \brief 2E90, Group 10 Result Control Register 4 */
#define EVADC_G10_RCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022E90u)
/** Alias (User Manual Name) for EVADC_G10_RCR4.
* To use register names with standard convension, please use EVADC_G10_RCR4.
*/
#define EVADC_G10RCR4 (EVADC_G10_RCR4)

/** \brief 2E94, Group 10 Result Control Register 5 */
#define EVADC_G10_RCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022E94u)
/** Alias (User Manual Name) for EVADC_G10_RCR5.
* To use register names with standard convension, please use EVADC_G10_RCR5.
*/
#define EVADC_G10RCR5 (EVADC_G10_RCR5)

/** \brief 2E98, Group 10 Result Control Register 6 */
#define EVADC_G10_RCR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022E98u)
/** Alias (User Manual Name) for EVADC_G10_RCR6.
* To use register names with standard convension, please use EVADC_G10_RCR6.
*/
#define EVADC_G10RCR6 (EVADC_G10_RCR6)

/** \brief 2E9C, Group 10 Result Control Register 7 */
#define EVADC_G10_RCR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022E9Cu)
/** Alias (User Manual Name) for EVADC_G10_RCR7.
* To use register names with standard convension, please use EVADC_G10_RCR7.
*/
#define EVADC_G10RCR7 (EVADC_G10_RCR7)

/** \brief 2EA0, Group 10 Result Control Register 8 */
#define EVADC_G10_RCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022EA0u)
/** Alias (User Manual Name) for EVADC_G10_RCR8.
* To use register names with standard convension, please use EVADC_G10_RCR8.
*/
#define EVADC_G10RCR8 (EVADC_G10_RCR8)

/** \brief 2EA4, Group 10 Result Control Register 9 */
#define EVADC_G10_RCR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022EA4u)
/** Alias (User Manual Name) for EVADC_G10_RCR9.
* To use register names with standard convension, please use EVADC_G10_RCR9.
*/
#define EVADC_G10RCR9 (EVADC_G10_RCR9)

/** \brief 2EA8, Group 10 Result Control Register 10 */
#define EVADC_G10_RCR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022EA8u)
/** Alias (User Manual Name) for EVADC_G10_RCR10.
* To use register names with standard convension, please use EVADC_G10_RCR10.
*/
#define EVADC_G10RCR10 (EVADC_G10_RCR10)

/** \brief 2EAC, Group 10 Result Control Register 11 */
#define EVADC_G10_RCR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022EACu)
/** Alias (User Manual Name) for EVADC_G10_RCR11.
* To use register names with standard convension, please use EVADC_G10_RCR11.
*/
#define EVADC_G10RCR11 (EVADC_G10_RCR11)

/** \brief 2EB0, Group 10 Result Control Register 12 */
#define EVADC_G10_RCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022EB0u)
/** Alias (User Manual Name) for EVADC_G10_RCR12.
* To use register names with standard convension, please use EVADC_G10_RCR12.
*/
#define EVADC_G10RCR12 (EVADC_G10_RCR12)

/** \brief 2EB4, Group 10 Result Control Register 13 */
#define EVADC_G10_RCR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022EB4u)
/** Alias (User Manual Name) for EVADC_G10_RCR13.
* To use register names with standard convension, please use EVADC_G10_RCR13.
*/
#define EVADC_G10RCR13 (EVADC_G10_RCR13)

/** \brief 2EB8, Group 10 Result Control Register 14 */
#define EVADC_G10_RCR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022EB8u)
/** Alias (User Manual Name) for EVADC_G10_RCR14.
* To use register names with standard convension, please use EVADC_G10_RCR14.
*/
#define EVADC_G10RCR14 (EVADC_G10_RCR14)

/** \brief 2EBC, Group 10 Result Control Register 15 */
#define EVADC_G10_RCR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0022EBCu)
/** Alias (User Manual Name) for EVADC_G10_RCR15.
* To use register names with standard convension, please use EVADC_G10_RCR15.
*/
#define EVADC_G10RCR15 (EVADC_G10_RCR15)

/** \brief 2F00, Group 10 Result Register 0\n */
#define EVADC_G10_RES0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F00u)
/** Alias (User Manual Name) for EVADC_G10_RES0.
* To use register names with standard convension, please use EVADC_G10_RES0.
*/
#define EVADC_G10RES0 (EVADC_G10_RES0)

/** \brief 2F04, Group 10 Result Register 1\n */
#define EVADC_G10_RES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F04u)
/** Alias (User Manual Name) for EVADC_G10_RES1.
* To use register names with standard convension, please use EVADC_G10_RES1.
*/
#define EVADC_G10RES1 (EVADC_G10_RES1)

/** \brief 2F08, Group 10 Result Register 2\n */
#define EVADC_G10_RES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F08u)
/** Alias (User Manual Name) for EVADC_G10_RES2.
* To use register names with standard convension, please use EVADC_G10_RES2.
*/
#define EVADC_G10RES2 (EVADC_G10_RES2)

/** \brief 2F0C, Group 10 Result Register 3\n */
#define EVADC_G10_RES3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F0Cu)
/** Alias (User Manual Name) for EVADC_G10_RES3.
* To use register names with standard convension, please use EVADC_G10_RES3.
*/
#define EVADC_G10RES3 (EVADC_G10_RES3)

/** \brief 2F10, Group 10 Result Register 4\n */
#define EVADC_G10_RES4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F10u)
/** Alias (User Manual Name) for EVADC_G10_RES4.
* To use register names with standard convension, please use EVADC_G10_RES4.
*/
#define EVADC_G10RES4 (EVADC_G10_RES4)

/** \brief 2F14, Group 10 Result Register 5\n */
#define EVADC_G10_RES5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F14u)
/** Alias (User Manual Name) for EVADC_G10_RES5.
* To use register names with standard convension, please use EVADC_G10_RES5.
*/
#define EVADC_G10RES5 (EVADC_G10_RES5)

/** \brief 2F18, Group 10 Result Register 6\n */
#define EVADC_G10_RES6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F18u)
/** Alias (User Manual Name) for EVADC_G10_RES6.
* To use register names with standard convension, please use EVADC_G10_RES6.
*/
#define EVADC_G10RES6 (EVADC_G10_RES6)

/** \brief 2F1C, Group 10 Result Register 7\n */
#define EVADC_G10_RES7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F1Cu)
/** Alias (User Manual Name) for EVADC_G10_RES7.
* To use register names with standard convension, please use EVADC_G10_RES7.
*/
#define EVADC_G10RES7 (EVADC_G10_RES7)

/** \brief 2F20, Group 10 Result Register 8\n */
#define EVADC_G10_RES8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F20u)
/** Alias (User Manual Name) for EVADC_G10_RES8.
* To use register names with standard convension, please use EVADC_G10_RES8.
*/
#define EVADC_G10RES8 (EVADC_G10_RES8)

/** \brief 2F24, Group 10 Result Register 9\n */
#define EVADC_G10_RES9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F24u)
/** Alias (User Manual Name) for EVADC_G10_RES9.
* To use register names with standard convension, please use EVADC_G10_RES9.
*/
#define EVADC_G10RES9 (EVADC_G10_RES9)

/** \brief 2F28, Group 10 Result Register 10\n */
#define EVADC_G10_RES10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F28u)
/** Alias (User Manual Name) for EVADC_G10_RES10.
* To use register names with standard convension, please use EVADC_G10_RES10.
*/
#define EVADC_G10RES10 (EVADC_G10_RES10)

/** \brief 2F2C, Group 10 Result Register 11\n */
#define EVADC_G10_RES11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F2Cu)
/** Alias (User Manual Name) for EVADC_G10_RES11.
* To use register names with standard convension, please use EVADC_G10_RES11.
*/
#define EVADC_G10RES11 (EVADC_G10_RES11)

/** \brief 2F30, Group 10 Result Register 12\n */
#define EVADC_G10_RES12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F30u)
/** Alias (User Manual Name) for EVADC_G10_RES12.
* To use register names with standard convension, please use EVADC_G10_RES12.
*/
#define EVADC_G10RES12 (EVADC_G10_RES12)

/** \brief 2F34, Group 10 Result Register 13\n */
#define EVADC_G10_RES13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F34u)
/** Alias (User Manual Name) for EVADC_G10_RES13.
* To use register names with standard convension, please use EVADC_G10_RES13.
*/
#define EVADC_G10RES13 (EVADC_G10_RES13)

/** \brief 2F38, Group 10 Result Register 14\n */
#define EVADC_G10_RES14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F38u)
/** Alias (User Manual Name) for EVADC_G10_RES14.
* To use register names with standard convension, please use EVADC_G10_RES14.
*/
#define EVADC_G10RES14 (EVADC_G10_RES14)

/** \brief 2F3C, Group 10 Result Register 15\n */
#define EVADC_G10_RES15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0022F3Cu)
/** Alias (User Manual Name) for EVADC_G10_RES15.
* To use register names with standard convension, please use EVADC_G10_RES15.
*/
#define EVADC_G10RES15 (EVADC_G10_RES15)

/** \brief 2F80, Group 10 Result Reg. 0, Debug */
#define EVADC_G10_RESD0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022F80u)
/** Alias (User Manual Name) for EVADC_G10_RESD0.
* To use register names with standard convension, please use EVADC_G10_RESD0.
*/
#define EVADC_G10RESD0 (EVADC_G10_RESD0)

/** \brief 2F84, Group 10 Result Reg. 1, Debug */
#define EVADC_G10_RESD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022F84u)
/** Alias (User Manual Name) for EVADC_G10_RESD1.
* To use register names with standard convension, please use EVADC_G10_RESD1.
*/
#define EVADC_G10RESD1 (EVADC_G10_RESD1)

/** \brief 2F88, Group 10 Result Reg. 2, Debug */
#define EVADC_G10_RESD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022F88u)
/** Alias (User Manual Name) for EVADC_G10_RESD2.
* To use register names with standard convension, please use EVADC_G10_RESD2.
*/
#define EVADC_G10RESD2 (EVADC_G10_RESD2)

/** \brief 2F8C, Group 10 Result Reg. 3, Debug */
#define EVADC_G10_RESD3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022F8Cu)
/** Alias (User Manual Name) for EVADC_G10_RESD3.
* To use register names with standard convension, please use EVADC_G10_RESD3.
*/
#define EVADC_G10RESD3 (EVADC_G10_RESD3)

/** \brief 2F90, Group 10 Result Reg. 4, Debug */
#define EVADC_G10_RESD4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022F90u)
/** Alias (User Manual Name) for EVADC_G10_RESD4.
* To use register names with standard convension, please use EVADC_G10_RESD4.
*/
#define EVADC_G10RESD4 (EVADC_G10_RESD4)

/** \brief 2F94, Group 10 Result Reg. 5, Debug */
#define EVADC_G10_RESD5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022F94u)
/** Alias (User Manual Name) for EVADC_G10_RESD5.
* To use register names with standard convension, please use EVADC_G10_RESD5.
*/
#define EVADC_G10RESD5 (EVADC_G10_RESD5)

/** \brief 2F98, Group 10 Result Reg. 6, Debug */
#define EVADC_G10_RESD6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022F98u)
/** Alias (User Manual Name) for EVADC_G10_RESD6.
* To use register names with standard convension, please use EVADC_G10_RESD6.
*/
#define EVADC_G10RESD6 (EVADC_G10_RESD6)

/** \brief 2F9C, Group 10 Result Reg. 7, Debug */
#define EVADC_G10_RESD7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022F9Cu)
/** Alias (User Manual Name) for EVADC_G10_RESD7.
* To use register names with standard convension, please use EVADC_G10_RESD7.
*/
#define EVADC_G10RESD7 (EVADC_G10_RESD7)

/** \brief 2FA0, Group 10 Result Reg. 8, Debug */
#define EVADC_G10_RESD8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022FA0u)
/** Alias (User Manual Name) for EVADC_G10_RESD8.
* To use register names with standard convension, please use EVADC_G10_RESD8.
*/
#define EVADC_G10RESD8 (EVADC_G10_RESD8)

/** \brief 2FA4, Group 10 Result Reg. 9, Debug */
#define EVADC_G10_RESD9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022FA4u)
/** Alias (User Manual Name) for EVADC_G10_RESD9.
* To use register names with standard convension, please use EVADC_G10_RESD9.
*/
#define EVADC_G10RESD9 (EVADC_G10_RESD9)

/** \brief 2FA8, Group 10 Result Reg. 10, Debug */
#define EVADC_G10_RESD10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022FA8u)
/** Alias (User Manual Name) for EVADC_G10_RESD10.
* To use register names with standard convension, please use EVADC_G10_RESD10.
*/
#define EVADC_G10RESD10 (EVADC_G10_RESD10)

/** \brief 2FAC, Group 10 Result Reg. 11, Debug */
#define EVADC_G10_RESD11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022FACu)
/** Alias (User Manual Name) for EVADC_G10_RESD11.
* To use register names with standard convension, please use EVADC_G10_RESD11.
*/
#define EVADC_G10RESD11 (EVADC_G10_RESD11)

/** \brief 2FB0, Group 10 Result Reg. 12, Debug */
#define EVADC_G10_RESD12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022FB0u)
/** Alias (User Manual Name) for EVADC_G10_RESD12.
* To use register names with standard convension, please use EVADC_G10_RESD12.
*/
#define EVADC_G10RESD12 (EVADC_G10_RESD12)

/** \brief 2FB4, Group 10 Result Reg. 13, Debug */
#define EVADC_G10_RESD13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022FB4u)
/** Alias (User Manual Name) for EVADC_G10_RESD13.
* To use register names with standard convension, please use EVADC_G10_RESD13.
*/
#define EVADC_G10RESD13 (EVADC_G10_RESD13)

/** \brief 2FB8, Group 10 Result Reg. 14, Debug */
#define EVADC_G10_RESD14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022FB8u)
/** Alias (User Manual Name) for EVADC_G10_RESD14.
* To use register names with standard convension, please use EVADC_G10_RESD14.
*/
#define EVADC_G10RESD14 (EVADC_G10_RESD14)

/** \brief 2FBC, Group 10 Result Reg. 15, Debug */
#define EVADC_G10_RESD15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0022FBCu)
/** Alias (User Manual Name) for EVADC_G10_RESD15.
* To use register names with standard convension, please use EVADC_G10_RESD15.
*/
#define EVADC_G10RESD15 (EVADC_G10_RESD15)

/** \brief 3010, Trigger Control Register, Group 11 */
#define EVADC_G11_TRCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_TRCTR*)0xF0023010u)
/** Alias (User Manual Name) for EVADC_G11_TRCTR.
* To use register names with standard convension, please use EVADC_G11_TRCTR.
*/
#define EVADC_G11TRCTR (EVADC_G11_TRCTR)

/** \brief 3080, Arbitration Config. Register, Group 11 */
#define EVADC_G11_ARBCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBCFG*)0xF0023080u)
/** Alias (User Manual Name) for EVADC_G11_ARBCFG.
* To use register names with standard convension, please use EVADC_G11_ARBCFG.
*/
#define EVADC_G11ARBCFG (EVADC_G11_ARBCFG)

/** \brief 3084, Arbitration Priority Register, Group 11 */
#define EVADC_G11_ARBPR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ARBPR*)0xF0023084u)
/** Alias (User Manual Name) for EVADC_G11_ARBPR.
* To use register names with standard convension, please use EVADC_G11_ARBPR.
*/
#define EVADC_G11ARBPR (EVADC_G11_ARBPR)

/** \brief 3088, Analog Fct. Config. Register, Group 11 */
#define EVADC_G11_ANCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ANCFG*)0xF0023088u)
/** Alias (User Manual Name) for EVADC_G11_ANCFG.
* To use register names with standard convension, please use EVADC_G11_ANCFG.
*/
#define EVADC_G11ANCFG (EVADC_G11_ANCFG)

/** \brief 30A0, Input Class Register 0, Group 11 */
#define EVADC_G11_ICLASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00230A0u)
/** Alias (User Manual Name) for EVADC_G11_ICLASS0.
* To use register names with standard convension, please use EVADC_G11_ICLASS0.
*/
#define EVADC_G11ICLASS0 (EVADC_G11_ICLASS0)

/** \brief 30A4, Input Class Register 1, Group 11 */
#define EVADC_G11_ICLASS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ICLASS*)0xF00230A4u)
/** Alias (User Manual Name) for EVADC_G11_ICLASS1.
* To use register names with standard convension, please use EVADC_G11_ICLASS1.
*/
#define EVADC_G11ICLASS1 (EVADC_G11_ICLASS1)

/** \brief 30B0, Alias Register, Group 11 */
#define EVADC_G11_ALIAS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_ALIAS*)0xF00230B0u)
/** Alias (User Manual Name) for EVADC_G11_ALIAS.
* To use register names with standard convension, please use EVADC_G11_ALIAS.
*/
#define EVADC_G11ALIAS (EVADC_G11_ALIAS)

/** \brief 30B8, Boundary Select Register, Group 11 */
#define EVADC_G11_BOUND /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_BOUND*)0xF00230B8u)
/** Alias (User Manual Name) for EVADC_G11_BOUND.
* To use register names with standard convension, please use EVADC_G11_BOUND.
*/
#define EVADC_G11BOUND (EVADC_G11_BOUND)

/** \brief 30C0, Synchronization Control Register, Group 11 */
#define EVADC_G11_SYNCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SYNCTR*)0xF00230C0u)
/** Alias (User Manual Name) for EVADC_G11_SYNCTR.
* To use register names with standard convension, please use EVADC_G11_SYNCTR.
*/
#define EVADC_G11SYNCTR (EVADC_G11_SYNCTR)

/** \brief 3100, Queue 0 Source Contr. Register, Group 11 */
#define EVADC_G11_Q0_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0023100u)
/** Alias (User Manual Name) for EVADC_G11_Q0_QCTRL.
* To use register names with standard convension, please use EVADC_G11_Q0_QCTRL.
*/
#define EVADC_G11QCTRL0 (EVADC_G11_Q0_QCTRL)

/** \brief 3104, Queue 0 Mode Register, Group 11 */
#define EVADC_G11_Q0_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0023104u)
/** Alias (User Manual Name) for EVADC_G11_Q0_QMR.
* To use register names with standard convension, please use EVADC_G11_Q0_QMR.
*/
#define EVADC_G11QMR0 (EVADC_G11_Q0_QMR)

/** \brief 3108, Queue 0 Status Register, Group 11 */
#define EVADC_G11_Q0_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0023108u)
/** Alias (User Manual Name) for EVADC_G11_Q0_QSR.
* To use register names with standard convension, please use EVADC_G11_Q0_QSR.
*/
#define EVADC_G11QSR0 (EVADC_G11_Q0_QSR)

/** \brief 310C, Queue 0 Register 0, Group 11 */
#define EVADC_G11_Q0_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002310Cu)
/** Alias (User Manual Name) for EVADC_G11_Q0_Q0R.
* To use register names with standard convension, please use EVADC_G11_Q0_Q0R.
*/
#define EVADC_G11Q0R0 (EVADC_G11_Q0_Q0R)

/** \brief 3110, Queue 0 Input Register, Group 11 */
#define EVADC_G11_Q0_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0023110u)
/** Alias (User Manual Name) for EVADC_G11_Q0_QINR.
* To use register names with standard convension, please use EVADC_G11_Q0_QINR.
*/
#define EVADC_G11QINR0 (EVADC_G11_Q0_QINR)

/** \brief 3114, Queue 0 Backup Register, Group 11 */
#define EVADC_G11_Q0_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0023114u)
/** Alias (User Manual Name) for EVADC_G11_Q0_QBUR.
* To use register names with standard convension, please use EVADC_G11_Q0_QBUR.
*/
#define EVADC_G11QBUR0 (EVADC_G11_Q0_QBUR)

/** \brief 3118, Queue 0 Requ. Timer Mode Reg., Group 11 */
#define EVADC_G11_Q0_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0023118u)
/** Alias (User Manual Name) for EVADC_G11_Q0_REQTM.
* To use register names with standard convension, please use EVADC_G11_Q0_REQTM.
*/
#define EVADC_G11REQTM0 (EVADC_G11_Q0_REQTM)

/** \brief 311C, Queue 0 Requ. Timer Status Reg., Group 11 */
#define EVADC_G11_Q0_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002311Cu)
/** Alias (User Manual Name) for EVADC_G11_Q0_REQTS.
* To use register names with standard convension, please use EVADC_G11_Q0_REQTS.
*/
#define EVADC_G11REQTS0 (EVADC_G11_Q0_REQTS)

/** \brief 3120, Queue 1 Source Contr. Register, Group 11 */
#define EVADC_G11_Q1_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0023120u)
/** Alias (User Manual Name) for EVADC_G11_Q1_QCTRL.
* To use register names with standard convension, please use EVADC_G11_Q1_QCTRL.
*/
#define EVADC_G11QCTRL1 (EVADC_G11_Q1_QCTRL)

/** \brief 3124, Queue 1 Mode Register, Group 11 */
#define EVADC_G11_Q1_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0023124u)
/** Alias (User Manual Name) for EVADC_G11_Q1_QMR.
* To use register names with standard convension, please use EVADC_G11_Q1_QMR.
*/
#define EVADC_G11QMR1 (EVADC_G11_Q1_QMR)

/** \brief 3128, Queue 1 Status Register, Group 11 */
#define EVADC_G11_Q1_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0023128u)
/** Alias (User Manual Name) for EVADC_G11_Q1_QSR.
* To use register names with standard convension, please use EVADC_G11_Q1_QSR.
*/
#define EVADC_G11QSR1 (EVADC_G11_Q1_QSR)

/** \brief 312C, Queue 1 Register 0, Group 11 */
#define EVADC_G11_Q1_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002312Cu)
/** Alias (User Manual Name) for EVADC_G11_Q1_Q0R.
* To use register names with standard convension, please use EVADC_G11_Q1_Q0R.
*/
#define EVADC_G11Q0R1 (EVADC_G11_Q1_Q0R)

/** \brief 3130, Queue 1 Input Register, Group 11 */
#define EVADC_G11_Q1_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0023130u)
/** Alias (User Manual Name) for EVADC_G11_Q1_QINR.
* To use register names with standard convension, please use EVADC_G11_Q1_QINR.
*/
#define EVADC_G11QINR1 (EVADC_G11_Q1_QINR)

/** \brief 3134, Queue 1 Backup Register, Group 11 */
#define EVADC_G11_Q1_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0023134u)
/** Alias (User Manual Name) for EVADC_G11_Q1_QBUR.
* To use register names with standard convension, please use EVADC_G11_Q1_QBUR.
*/
#define EVADC_G11QBUR1 (EVADC_G11_Q1_QBUR)

/** \brief 3138, Queue 1 Requ. Timer Mode Reg., Group 11 */
#define EVADC_G11_Q1_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0023138u)
/** Alias (User Manual Name) for EVADC_G11_Q1_REQTM.
* To use register names with standard convension, please use EVADC_G11_Q1_REQTM.
*/
#define EVADC_G11REQTM1 (EVADC_G11_Q1_REQTM)

/** \brief 313C, Queue 1 Requ. Timer Status Reg., Group 11 */
#define EVADC_G11_Q1_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002313Cu)
/** Alias (User Manual Name) for EVADC_G11_Q1_REQTS.
* To use register names with standard convension, please use EVADC_G11_Q1_REQTS.
*/
#define EVADC_G11REQTS1 (EVADC_G11_Q1_REQTS)

/** \brief 3140, Queue 2 Source Contr. Register, Group 11 */
#define EVADC_G11_Q2_QCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QCTRL*)0xF0023140u)
/** Alias (User Manual Name) for EVADC_G11_Q2_QCTRL.
* To use register names with standard convension, please use EVADC_G11_Q2_QCTRL.
*/
#define EVADC_G11QCTRL2 (EVADC_G11_Q2_QCTRL)

/** \brief 3144, Queue 2 Mode Register, Group 11 */
#define EVADC_G11_Q2_QMR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QMR*)0xF0023144u)
/** Alias (User Manual Name) for EVADC_G11_Q2_QMR.
* To use register names with standard convension, please use EVADC_G11_Q2_QMR.
*/
#define EVADC_G11QMR2 (EVADC_G11_Q2_QMR)

/** \brief 3148, Queue 2 Status Register, Group 11 */
#define EVADC_G11_Q2_QSR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QSR*)0xF0023148u)
/** Alias (User Manual Name) for EVADC_G11_Q2_QSR.
* To use register names with standard convension, please use EVADC_G11_Q2_QSR.
*/
#define EVADC_G11QSR2 (EVADC_G11_Q2_QSR)

/** \brief 314C, Queue 2 Register 0, Group 11 */
#define EVADC_G11_Q2_Q0R /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_Q0R*)0xF002314Cu)
/** Alias (User Manual Name) for EVADC_G11_Q2_Q0R.
* To use register names with standard convension, please use EVADC_G11_Q2_Q0R.
*/
#define EVADC_G11Q0R2 (EVADC_G11_Q2_Q0R)

/** \brief 3150, Queue 2 Input Register, Group 11 */
#define EVADC_G11_Q2_QINR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QINR*)0xF0023150u)
/** Alias (User Manual Name) for EVADC_G11_Q2_QINR.
* To use register names with standard convension, please use EVADC_G11_Q2_QINR.
*/
#define EVADC_G11QINR2 (EVADC_G11_Q2_QINR)

/** \brief 3154, Queue 2 Backup Register, Group 11 */
#define EVADC_G11_Q2_QBUR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_QBUR*)0xF0023154u)
/** Alias (User Manual Name) for EVADC_G11_Q2_QBUR.
* To use register names with standard convension, please use EVADC_G11_Q2_QBUR.
*/
#define EVADC_G11QBUR2 (EVADC_G11_Q2_QBUR)

/** \brief 3158, Queue 2 Requ. Timer Mode Reg., Group 11 */
#define EVADC_G11_Q2_REQTM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTM*)0xF0023158u)
/** Alias (User Manual Name) for EVADC_G11_Q2_REQTM.
* To use register names with standard convension, please use EVADC_G11_Q2_REQTM.
*/
#define EVADC_G11REQTM2 (EVADC_G11_Q2_REQTM)

/** \brief 315C, Queue 2 Requ. Timer Status Reg., Group 11 */
#define EVADC_G11_Q2_REQTS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_Q_REQTS*)0xF002315Cu)
/** Alias (User Manual Name) for EVADC_G11_Q2_REQTS.
* To use register names with standard convension, please use EVADC_G11_Q2_REQTS.
*/
#define EVADC_G11REQTS2 (EVADC_G11_Q2_REQTS)

/** \brief 3180, Channel Event Flag Register, Group 11 */
#define EVADC_G11_CEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFLAG*)0xF0023180u)
/** Alias (User Manual Name) for EVADC_G11_CEFLAG.
* To use register names with standard convension, please use EVADC_G11_CEFLAG.
*/
#define EVADC_G11CEFLAG (EVADC_G11_CEFLAG)

/** \brief 3184, Result Event Flag Register, Group 11 */
#define EVADC_G11_REFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFLAG*)0xF0023184u)
/** Alias (User Manual Name) for EVADC_G11_REFLAG.
* To use register names with standard convension, please use EVADC_G11_REFLAG.
*/
#define EVADC_G11REFLAG (EVADC_G11_REFLAG)

/** \brief 3188, Source Event Flag Register, Group 11 */
#define EVADC_G11_SEFLAG /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFLAG*)0xF0023188u)
/** Alias (User Manual Name) for EVADC_G11_SEFLAG.
* To use register names with standard convension, please use EVADC_G11_SEFLAG.
*/
#define EVADC_G11SEFLAG (EVADC_G11_SEFLAG)

/** \brief 3190, Channel Event Flag Clear Register, Group 11 */
#define EVADC_G11_CEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEFCLR*)0xF0023190u)
/** Alias (User Manual Name) for EVADC_G11_CEFCLR.
* To use register names with standard convension, please use EVADC_G11_CEFCLR.
*/
#define EVADC_G11CEFCLR (EVADC_G11_CEFCLR)

/** \brief 3194, Result Event Flag Clear Register, Group 11 */
#define EVADC_G11_REFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REFCLR*)0xF0023194u)
/** Alias (User Manual Name) for EVADC_G11_REFCLR.
* To use register names with standard convension, please use EVADC_G11_REFCLR.
*/
#define EVADC_G11REFCLR (EVADC_G11_REFCLR)

/** \brief 3198, Source Event Flag Clear Reg., Group 11 */
#define EVADC_G11_SEFCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEFCLR*)0xF0023198u)
/** Alias (User Manual Name) for EVADC_G11_SEFCLR.
* To use register names with standard convension, please use EVADC_G11_SEFCLR.
*/
#define EVADC_G11SEFCLR (EVADC_G11_SEFCLR)

/** \brief 31A0, Channel Event Node Pointer Reg. 0, Group 11 */
#define EVADC_G11_CEVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP0*)0xF00231A0u)
/** Alias (User Manual Name) for EVADC_G11_CEVNP0.
* To use register names with standard convension, please use EVADC_G11_CEVNP0.
*/
#define EVADC_G11CEVNP0 (EVADC_G11_CEVNP0)

/** \brief 31A4, Channel Event Node Pointer Reg. 1, Group 11 */
#define EVADC_G11_CEVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CEVNP1*)0xF00231A4u)
/** Alias (User Manual Name) for EVADC_G11_CEVNP1.
* To use register names with standard convension, please use EVADC_G11_CEVNP1.
*/
#define EVADC_G11CEVNP1 (EVADC_G11_CEVNP1)

/** \brief 31B0, Result Event Node Pointer Reg. 0, Group 11 */
#define EVADC_G11_REVNP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP0*)0xF00231B0u)
/** Alias (User Manual Name) for EVADC_G11_REVNP0.
* To use register names with standard convension, please use EVADC_G11_REVNP0.
*/
#define EVADC_G11REVNP0 (EVADC_G11_REVNP0)

/** \brief 31B4, Result Event Node Pointer Reg. 1, Group 11 */
#define EVADC_G11_REVNP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_REVNP1*)0xF00231B4u)
/** Alias (User Manual Name) for EVADC_G11_REVNP1.
* To use register names with standard convension, please use EVADC_G11_REVNP1.
*/
#define EVADC_G11REVNP1 (EVADC_G11_REVNP1)

/** \brief 31C0, Source Event Node Pointer Reg., Group 11 */
#define EVADC_G11_SEVNP /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SEVNP*)0xF00231C0u)
/** Alias (User Manual Name) for EVADC_G11_SEVNP.
* To use register names with standard convension, please use EVADC_G11_SEVNP.
*/
#define EVADC_G11SEVNP (EVADC_G11_SEVNP)

/** \brief 31C8, Service Request Software Activation Trigger, Group 11 */
#define EVADC_G11_SRACT /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_SRACT*)0xF00231C8u)
/** Alias (User Manual Name) for EVADC_G11_SRACT.
* To use register names with standard convension, please use EVADC_G11_SRACT.
*/
#define EVADC_G11SRACT (EVADC_G11_SRACT)

/** \brief 31F0, External Multiplexer Control Reg., Group 11 */
#define EVADC_G11_EMUXCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCTR*)0xF00231F0u)
/** Alias (User Manual Name) for EVADC_G11_EMUXCTR.
* To use register names with standard convension, please use EVADC_G11_EMUXCTR.
*/
#define EVADC_G11EMUXCTR (EVADC_G11_EMUXCTR)

/** \brief 31F4, Ext. Multiplexer Channel Select Reg., Group 11 */
#define EVADC_G11_EMUXCS /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_EMUXCS*)0xF00231F4u)
/** Alias (User Manual Name) for EVADC_G11_EMUXCS.
* To use register names with standard convension, please use EVADC_G11_EMUXCS.
*/
#define EVADC_G11EMUXCS (EVADC_G11_EMUXCS)

/** \brief 31F8, Valid Flag Register, Group 11 */
#define EVADC_G11_VFR /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_VFR*)0xF00231F8u)
/** Alias (User Manual Name) for EVADC_G11_VFR.
* To use register names with standard convension, please use EVADC_G11_VFR.
*/
#define EVADC_G11VFR (EVADC_G11_VFR)

/** \brief 3200, Group 11, Channel 0 Control Register */
#define EVADC_G11_CHCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023200u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR0.
* To use register names with standard convension, please use EVADC_G11_CHCTR0.
*/
#define EVADC_G11CHCTR0 (EVADC_G11_CHCTR0)

/** \brief 3204, Group 11, Channel 1 Control Register */
#define EVADC_G11_CHCTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023204u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR1.
* To use register names with standard convension, please use EVADC_G11_CHCTR1.
*/
#define EVADC_G11CHCTR1 (EVADC_G11_CHCTR1)

/** \brief 3208, Group 11, Channel 2 Control Register */
#define EVADC_G11_CHCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023208u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR2.
* To use register names with standard convension, please use EVADC_G11_CHCTR2.
*/
#define EVADC_G11CHCTR2 (EVADC_G11_CHCTR2)

/** \brief 320C, Group 11, Channel 3 Control Register */
#define EVADC_G11_CHCTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002320Cu)
/** Alias (User Manual Name) for EVADC_G11_CHCTR3.
* To use register names with standard convension, please use EVADC_G11_CHCTR3.
*/
#define EVADC_G11CHCTR3 (EVADC_G11_CHCTR3)

/** \brief 3210, Group 11, Channel 4 Control Register */
#define EVADC_G11_CHCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023210u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR4.
* To use register names with standard convension, please use EVADC_G11_CHCTR4.
*/
#define EVADC_G11CHCTR4 (EVADC_G11_CHCTR4)

/** \brief 3214, Group 11, Channel 5 Control Register */
#define EVADC_G11_CHCTR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023214u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR5.
* To use register names with standard convension, please use EVADC_G11_CHCTR5.
*/
#define EVADC_G11CHCTR5 (EVADC_G11_CHCTR5)

/** \brief 3218, Group 11, Channel 6 Control Register */
#define EVADC_G11_CHCTR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023218u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR6.
* To use register names with standard convension, please use EVADC_G11_CHCTR6.
*/
#define EVADC_G11CHCTR6 (EVADC_G11_CHCTR6)

/** \brief 321C, Group 11, Channel 7 Control Register */
#define EVADC_G11_CHCTR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002321Cu)
/** Alias (User Manual Name) for EVADC_G11_CHCTR7.
* To use register names with standard convension, please use EVADC_G11_CHCTR7.
*/
#define EVADC_G11CHCTR7 (EVADC_G11_CHCTR7)

/** \brief 3220, Group 11, Channel 8 Control Register */
#define EVADC_G11_CHCTR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023220u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR8.
* To use register names with standard convension, please use EVADC_G11_CHCTR8.
*/
#define EVADC_G11CHCTR8 (EVADC_G11_CHCTR8)

/** \brief 3224, Group 11, Channel 9 Control Register */
#define EVADC_G11_CHCTR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023224u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR9.
* To use register names with standard convension, please use EVADC_G11_CHCTR9.
*/
#define EVADC_G11CHCTR9 (EVADC_G11_CHCTR9)

/** \brief 3228, Group 11, Channel 10 Control Register */
#define EVADC_G11_CHCTR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023228u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR10.
* To use register names with standard convension, please use EVADC_G11_CHCTR10.
*/
#define EVADC_G11CHCTR10 (EVADC_G11_CHCTR10)

/** \brief 322C, Group 11, Channel 11 Control Register */
#define EVADC_G11_CHCTR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002322Cu)
/** Alias (User Manual Name) for EVADC_G11_CHCTR11.
* To use register names with standard convension, please use EVADC_G11_CHCTR11.
*/
#define EVADC_G11CHCTR11 (EVADC_G11_CHCTR11)

/** \brief 3230, Group 11, Channel 12 Control Register */
#define EVADC_G11_CHCTR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023230u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR12.
* To use register names with standard convension, please use EVADC_G11_CHCTR12.
*/
#define EVADC_G11CHCTR12 (EVADC_G11_CHCTR12)

/** \brief 3234, Group 11, Channel 13 Control Register */
#define EVADC_G11_CHCTR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023234u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR13.
* To use register names with standard convension, please use EVADC_G11_CHCTR13.
*/
#define EVADC_G11CHCTR13 (EVADC_G11_CHCTR13)

/** \brief 3238, Group 11, Channel 14 Control Register */
#define EVADC_G11_CHCTR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF0023238u)
/** Alias (User Manual Name) for EVADC_G11_CHCTR14.
* To use register names with standard convension, please use EVADC_G11_CHCTR14.
*/
#define EVADC_G11CHCTR14 (EVADC_G11_CHCTR14)

/** \brief 323C, Group 11, Channel 15 Control Register */
#define EVADC_G11_CHCTR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_CHCTR*)0xF002323Cu)
/** Alias (User Manual Name) for EVADC_G11_CHCTR15.
* To use register names with standard convension, please use EVADC_G11_CHCTR15.
*/
#define EVADC_G11CHCTR15 (EVADC_G11_CHCTR15)

/** \brief 3280, Group 11 Result Control Register 0 */
#define EVADC_G11_RCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0023280u)
/** Alias (User Manual Name) for EVADC_G11_RCR0.
* To use register names with standard convension, please use EVADC_G11_RCR0.
*/
#define EVADC_G11RCR0 (EVADC_G11_RCR0)

/** \brief 3284, Group 11 Result Control Register 1 */
#define EVADC_G11_RCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0023284u)
/** Alias (User Manual Name) for EVADC_G11_RCR1.
* To use register names with standard convension, please use EVADC_G11_RCR1.
*/
#define EVADC_G11RCR1 (EVADC_G11_RCR1)

/** \brief 3288, Group 11 Result Control Register 2 */
#define EVADC_G11_RCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0023288u)
/** Alias (User Manual Name) for EVADC_G11_RCR2.
* To use register names with standard convension, please use EVADC_G11_RCR2.
*/
#define EVADC_G11RCR2 (EVADC_G11_RCR2)

/** \brief 328C, Group 11 Result Control Register 3 */
#define EVADC_G11_RCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF002328Cu)
/** Alias (User Manual Name) for EVADC_G11_RCR3.
* To use register names with standard convension, please use EVADC_G11_RCR3.
*/
#define EVADC_G11RCR3 (EVADC_G11_RCR3)

/** \brief 3290, Group 11 Result Control Register 4 */
#define EVADC_G11_RCR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0023290u)
/** Alias (User Manual Name) for EVADC_G11_RCR4.
* To use register names with standard convension, please use EVADC_G11_RCR4.
*/
#define EVADC_G11RCR4 (EVADC_G11_RCR4)

/** \brief 3294, Group 11 Result Control Register 5 */
#define EVADC_G11_RCR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0023294u)
/** Alias (User Manual Name) for EVADC_G11_RCR5.
* To use register names with standard convension, please use EVADC_G11_RCR5.
*/
#define EVADC_G11RCR5 (EVADC_G11_RCR5)

/** \brief 3298, Group 11 Result Control Register 6 */
#define EVADC_G11_RCR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF0023298u)
/** Alias (User Manual Name) for EVADC_G11_RCR6.
* To use register names with standard convension, please use EVADC_G11_RCR6.
*/
#define EVADC_G11RCR6 (EVADC_G11_RCR6)

/** \brief 329C, Group 11 Result Control Register 7 */
#define EVADC_G11_RCR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF002329Cu)
/** Alias (User Manual Name) for EVADC_G11_RCR7.
* To use register names with standard convension, please use EVADC_G11_RCR7.
*/
#define EVADC_G11RCR7 (EVADC_G11_RCR7)

/** \brief 32A0, Group 11 Result Control Register 8 */
#define EVADC_G11_RCR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00232A0u)
/** Alias (User Manual Name) for EVADC_G11_RCR8.
* To use register names with standard convension, please use EVADC_G11_RCR8.
*/
#define EVADC_G11RCR8 (EVADC_G11_RCR8)

/** \brief 32A4, Group 11 Result Control Register 9 */
#define EVADC_G11_RCR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00232A4u)
/** Alias (User Manual Name) for EVADC_G11_RCR9.
* To use register names with standard convension, please use EVADC_G11_RCR9.
*/
#define EVADC_G11RCR9 (EVADC_G11_RCR9)

/** \brief 32A8, Group 11 Result Control Register 10 */
#define EVADC_G11_RCR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00232A8u)
/** Alias (User Manual Name) for EVADC_G11_RCR10.
* To use register names with standard convension, please use EVADC_G11_RCR10.
*/
#define EVADC_G11RCR10 (EVADC_G11_RCR10)

/** \brief 32AC, Group 11 Result Control Register 11 */
#define EVADC_G11_RCR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00232ACu)
/** Alias (User Manual Name) for EVADC_G11_RCR11.
* To use register names with standard convension, please use EVADC_G11_RCR11.
*/
#define EVADC_G11RCR11 (EVADC_G11_RCR11)

/** \brief 32B0, Group 11 Result Control Register 12 */
#define EVADC_G11_RCR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00232B0u)
/** Alias (User Manual Name) for EVADC_G11_RCR12.
* To use register names with standard convension, please use EVADC_G11_RCR12.
*/
#define EVADC_G11RCR12 (EVADC_G11_RCR12)

/** \brief 32B4, Group 11 Result Control Register 13 */
#define EVADC_G11_RCR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00232B4u)
/** Alias (User Manual Name) for EVADC_G11_RCR13.
* To use register names with standard convension, please use EVADC_G11_RCR13.
*/
#define EVADC_G11RCR13 (EVADC_G11_RCR13)

/** \brief 32B8, Group 11 Result Control Register 14 */
#define EVADC_G11_RCR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00232B8u)
/** Alias (User Manual Name) for EVADC_G11_RCR14.
* To use register names with standard convension, please use EVADC_G11_RCR14.
*/
#define EVADC_G11RCR14 (EVADC_G11_RCR14)

/** \brief 32BC, Group 11 Result Control Register 15 */
#define EVADC_G11_RCR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RCR*)0xF00232BCu)
/** Alias (User Manual Name) for EVADC_G11_RCR15.
* To use register names with standard convension, please use EVADC_G11_RCR15.
*/
#define EVADC_G11RCR15 (EVADC_G11_RCR15)

/** \brief 3300, Group 11 Result Register 0\n */
#define EVADC_G11_RES0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023300u)
/** Alias (User Manual Name) for EVADC_G11_RES0.
* To use register names with standard convension, please use EVADC_G11_RES0.
*/
#define EVADC_G11RES0 (EVADC_G11_RES0)

/** \brief 3304, Group 11 Result Register 1\n */
#define EVADC_G11_RES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023304u)
/** Alias (User Manual Name) for EVADC_G11_RES1.
* To use register names with standard convension, please use EVADC_G11_RES1.
*/
#define EVADC_G11RES1 (EVADC_G11_RES1)

/** \brief 3308, Group 11 Result Register 2\n */
#define EVADC_G11_RES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023308u)
/** Alias (User Manual Name) for EVADC_G11_RES2.
* To use register names with standard convension, please use EVADC_G11_RES2.
*/
#define EVADC_G11RES2 (EVADC_G11_RES2)

/** \brief 330C, Group 11 Result Register 3\n */
#define EVADC_G11_RES3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002330Cu)
/** Alias (User Manual Name) for EVADC_G11_RES3.
* To use register names with standard convension, please use EVADC_G11_RES3.
*/
#define EVADC_G11RES3 (EVADC_G11_RES3)

/** \brief 3310, Group 11 Result Register 4\n */
#define EVADC_G11_RES4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023310u)
/** Alias (User Manual Name) for EVADC_G11_RES4.
* To use register names with standard convension, please use EVADC_G11_RES4.
*/
#define EVADC_G11RES4 (EVADC_G11_RES4)

/** \brief 3314, Group 11 Result Register 5\n */
#define EVADC_G11_RES5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023314u)
/** Alias (User Manual Name) for EVADC_G11_RES5.
* To use register names with standard convension, please use EVADC_G11_RES5.
*/
#define EVADC_G11RES5 (EVADC_G11_RES5)

/** \brief 3318, Group 11 Result Register 6\n */
#define EVADC_G11_RES6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023318u)
/** Alias (User Manual Name) for EVADC_G11_RES6.
* To use register names with standard convension, please use EVADC_G11_RES6.
*/
#define EVADC_G11RES6 (EVADC_G11_RES6)

/** \brief 331C, Group 11 Result Register 7\n */
#define EVADC_G11_RES7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002331Cu)
/** Alias (User Manual Name) for EVADC_G11_RES7.
* To use register names with standard convension, please use EVADC_G11_RES7.
*/
#define EVADC_G11RES7 (EVADC_G11_RES7)

/** \brief 3320, Group 11 Result Register 8\n */
#define EVADC_G11_RES8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023320u)
/** Alias (User Manual Name) for EVADC_G11_RES8.
* To use register names with standard convension, please use EVADC_G11_RES8.
*/
#define EVADC_G11RES8 (EVADC_G11_RES8)

/** \brief 3324, Group 11 Result Register 9\n */
#define EVADC_G11_RES9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023324u)
/** Alias (User Manual Name) for EVADC_G11_RES9.
* To use register names with standard convension, please use EVADC_G11_RES9.
*/
#define EVADC_G11RES9 (EVADC_G11_RES9)

/** \brief 3328, Group 11 Result Register 10\n */
#define EVADC_G11_RES10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023328u)
/** Alias (User Manual Name) for EVADC_G11_RES10.
* To use register names with standard convension, please use EVADC_G11_RES10.
*/
#define EVADC_G11RES10 (EVADC_G11_RES10)

/** \brief 332C, Group 11 Result Register 11\n */
#define EVADC_G11_RES11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002332Cu)
/** Alias (User Manual Name) for EVADC_G11_RES11.
* To use register names with standard convension, please use EVADC_G11_RES11.
*/
#define EVADC_G11RES11 (EVADC_G11_RES11)

/** \brief 3330, Group 11 Result Register 12\n */
#define EVADC_G11_RES12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023330u)
/** Alias (User Manual Name) for EVADC_G11_RES12.
* To use register names with standard convension, please use EVADC_G11_RES12.
*/
#define EVADC_G11RES12 (EVADC_G11_RES12)

/** \brief 3334, Group 11 Result Register 13\n */
#define EVADC_G11_RES13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023334u)
/** Alias (User Manual Name) for EVADC_G11_RES13.
* To use register names with standard convension, please use EVADC_G11_RES13.
*/
#define EVADC_G11RES13 (EVADC_G11_RES13)

/** \brief 3338, Group 11 Result Register 14\n */
#define EVADC_G11_RES14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF0023338u)
/** Alias (User Manual Name) for EVADC_G11_RES14.
* To use register names with standard convension, please use EVADC_G11_RES14.
*/
#define EVADC_G11RES14 (EVADC_G11_RES14)

/** \brief 333C, Group 11 Result Register 15\n */
#define EVADC_G11_RES15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RES*)0xF002333Cu)
/** Alias (User Manual Name) for EVADC_G11_RES15.
* To use register names with standard convension, please use EVADC_G11_RES15.
*/
#define EVADC_G11RES15 (EVADC_G11_RES15)

/** \brief 3380, Group 11 Result Reg. 0, Debug */
#define EVADC_G11_RESD0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0023380u)
/** Alias (User Manual Name) for EVADC_G11_RESD0.
* To use register names with standard convension, please use EVADC_G11_RESD0.
*/
#define EVADC_G11RESD0 (EVADC_G11_RESD0)

/** \brief 3384, Group 11 Result Reg. 1, Debug */
#define EVADC_G11_RESD1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0023384u)
/** Alias (User Manual Name) for EVADC_G11_RESD1.
* To use register names with standard convension, please use EVADC_G11_RESD1.
*/
#define EVADC_G11RESD1 (EVADC_G11_RESD1)

/** \brief 3388, Group 11 Result Reg. 2, Debug */
#define EVADC_G11_RESD2 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0023388u)
/** Alias (User Manual Name) for EVADC_G11_RESD2.
* To use register names with standard convension, please use EVADC_G11_RESD2.
*/
#define EVADC_G11RESD2 (EVADC_G11_RESD2)

/** \brief 338C, Group 11 Result Reg. 3, Debug */
#define EVADC_G11_RESD3 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF002338Cu)
/** Alias (User Manual Name) for EVADC_G11_RESD3.
* To use register names with standard convension, please use EVADC_G11_RESD3.
*/
#define EVADC_G11RESD3 (EVADC_G11_RESD3)

/** \brief 3390, Group 11 Result Reg. 4, Debug */
#define EVADC_G11_RESD4 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0023390u)
/** Alias (User Manual Name) for EVADC_G11_RESD4.
* To use register names with standard convension, please use EVADC_G11_RESD4.
*/
#define EVADC_G11RESD4 (EVADC_G11_RESD4)

/** \brief 3394, Group 11 Result Reg. 5, Debug */
#define EVADC_G11_RESD5 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0023394u)
/** Alias (User Manual Name) for EVADC_G11_RESD5.
* To use register names with standard convension, please use EVADC_G11_RESD5.
*/
#define EVADC_G11RESD5 (EVADC_G11_RESD5)

/** \brief 3398, Group 11 Result Reg. 6, Debug */
#define EVADC_G11_RESD6 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF0023398u)
/** Alias (User Manual Name) for EVADC_G11_RESD6.
* To use register names with standard convension, please use EVADC_G11_RESD6.
*/
#define EVADC_G11RESD6 (EVADC_G11_RESD6)

/** \brief 339C, Group 11 Result Reg. 7, Debug */
#define EVADC_G11_RESD7 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF002339Cu)
/** Alias (User Manual Name) for EVADC_G11_RESD7.
* To use register names with standard convension, please use EVADC_G11_RESD7.
*/
#define EVADC_G11RESD7 (EVADC_G11_RESD7)

/** \brief 33A0, Group 11 Result Reg. 8, Debug */
#define EVADC_G11_RESD8 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00233A0u)
/** Alias (User Manual Name) for EVADC_G11_RESD8.
* To use register names with standard convension, please use EVADC_G11_RESD8.
*/
#define EVADC_G11RESD8 (EVADC_G11_RESD8)

/** \brief 33A4, Group 11 Result Reg. 9, Debug */
#define EVADC_G11_RESD9 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00233A4u)
/** Alias (User Manual Name) for EVADC_G11_RESD9.
* To use register names with standard convension, please use EVADC_G11_RESD9.
*/
#define EVADC_G11RESD9 (EVADC_G11_RESD9)

/** \brief 33A8, Group 11 Result Reg. 10, Debug */
#define EVADC_G11_RESD10 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00233A8u)
/** Alias (User Manual Name) for EVADC_G11_RESD10.
* To use register names with standard convension, please use EVADC_G11_RESD10.
*/
#define EVADC_G11RESD10 (EVADC_G11_RESD10)

/** \brief 33AC, Group 11 Result Reg. 11, Debug */
#define EVADC_G11_RESD11 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00233ACu)
/** Alias (User Manual Name) for EVADC_G11_RESD11.
* To use register names with standard convension, please use EVADC_G11_RESD11.
*/
#define EVADC_G11RESD11 (EVADC_G11_RESD11)

/** \brief 33B0, Group 11 Result Reg. 12, Debug */
#define EVADC_G11_RESD12 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00233B0u)
/** Alias (User Manual Name) for EVADC_G11_RESD12.
* To use register names with standard convension, please use EVADC_G11_RESD12.
*/
#define EVADC_G11RESD12 (EVADC_G11_RESD12)

/** \brief 33B4, Group 11 Result Reg. 13, Debug */
#define EVADC_G11_RESD13 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00233B4u)
/** Alias (User Manual Name) for EVADC_G11_RESD13.
* To use register names with standard convension, please use EVADC_G11_RESD13.
*/
#define EVADC_G11RESD13 (EVADC_G11_RESD13)

/** \brief 33B8, Group 11 Result Reg. 14, Debug */
#define EVADC_G11_RESD14 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00233B8u)
/** Alias (User Manual Name) for EVADC_G11_RESD14.
* To use register names with standard convension, please use EVADC_G11_RESD14.
*/
#define EVADC_G11RESD14 (EVADC_G11_RESD14)

/** \brief 33BC, Group 11 Result Reg. 15, Debug */
#define EVADC_G11_RESD15 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_G_RESD*)0xF00233BCu)
/** Alias (User Manual Name) for EVADC_G11_RESD15.
* To use register names with standard convension, please use EVADC_G11_RESD15.
*/
#define EVADC_G11RESD15 (EVADC_G11_RESD15)

/** \brief 3400, Fast Compare Control Register, FC Channel 0 */
#define EVADC_FC0_FCCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCCTRL*)0xF0023400u)
/** Alias (User Manual Name) for EVADC_FC0_FCCTRL.
* To use register names with standard convension, please use EVADC_FC0_FCCTRL.
*/
#define EVADC_FC0FCCTRL (EVADC_FC0_FCCTRL)

/** \brief 3404, Fast Compare Mode Register, FC Channel 0 */
#define EVADC_FC0_FCM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCM*)0xF0023404u)
/** Alias (User Manual Name) for EVADC_FC0_FCM.
* To use register names with standard convension, please use EVADC_FC0_FCM.
*/
#define EVADC_FC0FCM (EVADC_FC0_FCM)

/** \brief 3408, Fast Compare Ramp Register 0, FC Channel 0 */
#define EVADC_FC0_FCRAMP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCRAMP0*)0xF0023408u)
/** Alias (User Manual Name) for EVADC_FC0_FCRAMP0.
* To use register names with standard convension, please use EVADC_FC0_FCRAMP0.
*/
#define EVADC_FC0FCRAMP0 (EVADC_FC0_FCRAMP0)

/** \brief 340C, Fast Compare Ramp Register 1, FC Channel 0 */
#define EVADC_FC0_FCRAMP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCRAMP1*)0xF002340Cu)
/** Alias (User Manual Name) for EVADC_FC0_FCRAMP1.
* To use register names with standard convension, please use EVADC_FC0_FCRAMP1.
*/
#define EVADC_FC0FCRAMP1 (EVADC_FC0_FCRAMP1)

/** \brief 3420, Boundary Flag Register, FC Channel 0 */
#define EVADC_FC0_FCBFL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCBFL*)0xF0023420u)
/** Alias (User Manual Name) for EVADC_FC0_FCBFL.
* To use register names with standard convension, please use EVADC_FC0_FCBFL.
*/
#define EVADC_FC0FCBFL (EVADC_FC0_FCBFL)

/** \brief 3424, Fast Comp. Hysteresis Register, FC Channel 0 */
#define EVADC_FC0_FCHYST /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCHYST*)0xF0023424u)
/** Alias (User Manual Name) for EVADC_FC0_FCHYST.
* To use register names with standard convension, please use EVADC_FC0_FCHYST.
*/
#define EVADC_FC0FCHYST (EVADC_FC0_FCHYST)

/** \brief 3500, Fast Compare Control Register, FC Channel 1 */
#define EVADC_FC1_FCCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCCTRL*)0xF0023500u)
/** Alias (User Manual Name) for EVADC_FC1_FCCTRL.
* To use register names with standard convension, please use EVADC_FC1_FCCTRL.
*/
#define EVADC_FC1FCCTRL (EVADC_FC1_FCCTRL)

/** \brief 3504, Fast Compare Mode Register, FC Channel 1 */
#define EVADC_FC1_FCM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCM*)0xF0023504u)
/** Alias (User Manual Name) for EVADC_FC1_FCM.
* To use register names with standard convension, please use EVADC_FC1_FCM.
*/
#define EVADC_FC1FCM (EVADC_FC1_FCM)

/** \brief 3508, Fast Compare Ramp Register 0, FC Channel 1 */
#define EVADC_FC1_FCRAMP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCRAMP0*)0xF0023508u)
/** Alias (User Manual Name) for EVADC_FC1_FCRAMP0.
* To use register names with standard convension, please use EVADC_FC1_FCRAMP0.
*/
#define EVADC_FC1FCRAMP0 (EVADC_FC1_FCRAMP0)

/** \brief 350C, Fast Compare Ramp Register 1, FC Channel 1 */
#define EVADC_FC1_FCRAMP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCRAMP1*)0xF002350Cu)
/** Alias (User Manual Name) for EVADC_FC1_FCRAMP1.
* To use register names with standard convension, please use EVADC_FC1_FCRAMP1.
*/
#define EVADC_FC1FCRAMP1 (EVADC_FC1_FCRAMP1)

/** \brief 3520, Boundary Flag Register, FC Channel 1 */
#define EVADC_FC1_FCBFL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCBFL*)0xF0023520u)
/** Alias (User Manual Name) for EVADC_FC1_FCBFL.
* To use register names with standard convension, please use EVADC_FC1_FCBFL.
*/
#define EVADC_FC1FCBFL (EVADC_FC1_FCBFL)

/** \brief 3524, Fast Comp. Hysteresis Register, FC Channel 1 */
#define EVADC_FC1_FCHYST /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCHYST*)0xF0023524u)
/** Alias (User Manual Name) for EVADC_FC1_FCHYST.
* To use register names with standard convension, please use EVADC_FC1_FCHYST.
*/
#define EVADC_FC1FCHYST (EVADC_FC1_FCHYST)

/** \brief 3600, Fast Compare Control Register, FC Channel 2 */
#define EVADC_FC2_FCCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCCTRL*)0xF0023600u)
/** Alias (User Manual Name) for EVADC_FC2_FCCTRL.
* To use register names with standard convension, please use EVADC_FC2_FCCTRL.
*/
#define EVADC_FC2FCCTRL (EVADC_FC2_FCCTRL)

/** \brief 3604, Fast Compare Mode Register, FC Channel 2 */
#define EVADC_FC2_FCM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCM*)0xF0023604u)
/** Alias (User Manual Name) for EVADC_FC2_FCM.
* To use register names with standard convension, please use EVADC_FC2_FCM.
*/
#define EVADC_FC2FCM (EVADC_FC2_FCM)

/** \brief 3608, Fast Compare Ramp Register 0, FC Channel 2 */
#define EVADC_FC2_FCRAMP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCRAMP0*)0xF0023608u)
/** Alias (User Manual Name) for EVADC_FC2_FCRAMP0.
* To use register names with standard convension, please use EVADC_FC2_FCRAMP0.
*/
#define EVADC_FC2FCRAMP0 (EVADC_FC2_FCRAMP0)

/** \brief 360C, Fast Compare Ramp Register 1, FC Channel 2 */
#define EVADC_FC2_FCRAMP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCRAMP1*)0xF002360Cu)
/** Alias (User Manual Name) for EVADC_FC2_FCRAMP1.
* To use register names with standard convension, please use EVADC_FC2_FCRAMP1.
*/
#define EVADC_FC2FCRAMP1 (EVADC_FC2_FCRAMP1)

/** \brief 3620, Boundary Flag Register, FC Channel 2 */
#define EVADC_FC2_FCBFL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCBFL*)0xF0023620u)
/** Alias (User Manual Name) for EVADC_FC2_FCBFL.
* To use register names with standard convension, please use EVADC_FC2_FCBFL.
*/
#define EVADC_FC2FCBFL (EVADC_FC2_FCBFL)

/** \brief 3624, Fast Comp. Hysteresis Register, FC Channel 2 */
#define EVADC_FC2_FCHYST /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCHYST*)0xF0023624u)
/** Alias (User Manual Name) for EVADC_FC2_FCHYST.
* To use register names with standard convension, please use EVADC_FC2_FCHYST.
*/
#define EVADC_FC2FCHYST (EVADC_FC2_FCHYST)

/** \brief 3700, Fast Compare Control Register, FC Channel 3 */
#define EVADC_FC3_FCCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCCTRL*)0xF0023700u)
/** Alias (User Manual Name) for EVADC_FC3_FCCTRL.
* To use register names with standard convension, please use EVADC_FC3_FCCTRL.
*/
#define EVADC_FC3FCCTRL (EVADC_FC3_FCCTRL)

/** \brief 3704, Fast Compare Mode Register, FC Channel 3 */
#define EVADC_FC3_FCM /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCM*)0xF0023704u)
/** Alias (User Manual Name) for EVADC_FC3_FCM.
* To use register names with standard convension, please use EVADC_FC3_FCM.
*/
#define EVADC_FC3FCM (EVADC_FC3_FCM)

/** \brief 3708, Fast Compare Ramp Register 0, FC Channel 3 */
#define EVADC_FC3_FCRAMP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCRAMP0*)0xF0023708u)
/** Alias (User Manual Name) for EVADC_FC3_FCRAMP0.
* To use register names with standard convension, please use EVADC_FC3_FCRAMP0.
*/
#define EVADC_FC3FCRAMP0 (EVADC_FC3_FCRAMP0)

/** \brief 370C, Fast Compare Ramp Register 1, FC Channel 3 */
#define EVADC_FC3_FCRAMP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCRAMP1*)0xF002370Cu)
/** Alias (User Manual Name) for EVADC_FC3_FCRAMP1.
* To use register names with standard convension, please use EVADC_FC3_FCRAMP1.
*/
#define EVADC_FC3FCRAMP1 (EVADC_FC3_FCRAMP1)

/** \brief 3720, Boundary Flag Register, FC Channel 3 */
#define EVADC_FC3_FCBFL /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCBFL*)0xF0023720u)
/** Alias (User Manual Name) for EVADC_FC3_FCBFL.
* To use register names with standard convension, please use EVADC_FC3_FCBFL.
*/
#define EVADC_FC3FCBFL (EVADC_FC3_FCBFL)

/** \brief 3724, Fast Comp. Hysteresis Register, FC Channel 3 */
#define EVADC_FC3_FCHYST /*lint --e(923, 9078)*/ (*(volatile Ifx_EVADC_FC_FCHYST*)0xF0023724u)
/** Alias (User Manual Name) for EVADC_FC3_FCHYST.
* To use register names with standard convension, please use EVADC_FC3_FCHYST.
*/
#define EVADC_FC3FCHYST (EVADC_FC3_FCHYST)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXEVADC_REG_H */
