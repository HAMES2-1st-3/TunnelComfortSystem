/**
 * \file IfxEvadc_reg.h
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


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXEVADC_REG_H */
