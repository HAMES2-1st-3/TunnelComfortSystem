/**
 * \file IfxSrc_reg.h
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
 * \defgroup IfxSfr_Src_Registers_Cfg Src address
 * \ingroup IfxSfr_Src_Registers
 * 
 * \defgroup IfxSfr_Src_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Src_Registers_Cfg
 *
 * \defgroup IfxSfr_Src_Registers_Cfg_Src 2-SRC
 * \ingroup IfxSfr_Src_Registers_Cfg
 *
 *
 */
#ifndef IFXSRC_REG_H
#define IFXSRC_REG_H 1
/******************************************************************************/
#include "IfxSrc_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Src_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SRC object */
#define MODULE_SRC /*lint --e(923, 9078)*/ ((*(Ifx_SRC*)0xF0038000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Src_Registers_Cfg_Src
 * \{  */
/** \brief 0, CPU0 Software Breakpoint Service Request */
#define SRC_CPU_CPU0_SB /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038000u)
/** Alias (User Manual Name) for SRC_CPU_CPU0_SB.
* To use register names with standard convension, please use SRC_CPU_CPU0_SB.
*/
#define SRC_CPU0SB (SRC_CPU_CPU0_SB)

/** \brief 4, CPU1 Software Breakpoint Service Request */
#define SRC_CPU_CPU1_SB /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038004u)
/** Alias (User Manual Name) for SRC_CPU_CPU1_SB.
* To use register names with standard convension, please use SRC_CPU_CPU1_SB.
*/
#define SRC_CPU1SB (SRC_CPU_CPU1_SB)

/** \brief 8, CPU2 Software Breakpoint Service Request */
#define SRC_CPU_CPU2_SB /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038008u)
/** Alias (User Manual Name) for SRC_CPU_CPU2_SB.
* To use register names with standard convension, please use SRC_CPU_CPU2_SB.
*/
#define SRC_CPU2SB (SRC_CPU_CPU2_SB)

/** \brief C, CPU3 Software Breakpoint Service Request */
#define SRC_CPU_CPU3_SB /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003800Cu)
/** Alias (User Manual Name) for SRC_CPU_CPU3_SB.
* To use register names with standard convension, please use SRC_CPU_CPU3_SB.
*/
#define SRC_CPU3SB (SRC_CPU_CPU3_SB)

/** \brief 20, SBCU Service Request (SPB Bus Control Unit) */
#define SRC_SBCU /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038020u)
/** Alias (User Manual Name) for SRC_SBCU.
* To use register names with standard convension, please use SRC_SBCU.
*/
#define SRC_BCUSPB (SRC_SBCU)

/** \brief 30, SRI Domain 0 Service Request */
#define SRC_XBAR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038030u)

/** \brief 40, Cerberus Service Request 0 */
#define SRC_CERBERUS_CERBERUS_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038040u)
/** Alias (User Manual Name) for SRC_CERBERUS_CERBERUS_SR0.
* To use register names with standard convension, please use SRC_CERBERUS_CERBERUS_SR0.
*/
#define SRC_CERBERUS0 (SRC_CERBERUS_CERBERUS_SR0)

/** \brief 44, Cerberus Service Request 1 */
#define SRC_CERBERUS_CERBERUS_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038044u)
/** Alias (User Manual Name) for SRC_CERBERUS_CERBERUS_SR1.
* To use register names with standard convension, please use SRC_CERBERUS_CERBERUS_SR1.
*/
#define SRC_CERBERUS1 (SRC_CERBERUS_CERBERUS_SR1)

/** \brief 50, ASCLIN0 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN0_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038050u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN0_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN0_TX.
*/
#define SRC_ASCLIN0TX (SRC_ASCLIN_ASCLIN0_TX)

/** \brief 54, ASCLIN0 Receive Service Request */
#define SRC_ASCLIN_ASCLIN0_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038054u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN0_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN0_RX.
*/
#define SRC_ASCLIN0RX (SRC_ASCLIN_ASCLIN0_RX)

/** \brief 58, ASCLIN0 Error Service Request */
#define SRC_ASCLIN_ASCLIN0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038058u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN0_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN0_ERR.
*/
#define SRC_ASCLIN0ERR (SRC_ASCLIN_ASCLIN0_ERR)

/** \brief 5C, ASCLIN1 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN1_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003805Cu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN1_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN1_TX.
*/
#define SRC_ASCLIN1TX (SRC_ASCLIN_ASCLIN1_TX)

/** \brief 60, ASCLIN1 Receive Service Request */
#define SRC_ASCLIN_ASCLIN1_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038060u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN1_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN1_RX.
*/
#define SRC_ASCLIN1RX (SRC_ASCLIN_ASCLIN1_RX)

/** \brief 64, ASCLIN1 Error Service Request */
#define SRC_ASCLIN_ASCLIN1_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038064u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN1_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN1_ERR.
*/
#define SRC_ASCLIN1ERR (SRC_ASCLIN_ASCLIN1_ERR)

/** \brief 68, ASCLIN2 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN2_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038068u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN2_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN2_TX.
*/
#define SRC_ASCLIN2TX (SRC_ASCLIN_ASCLIN2_TX)

/** \brief 6C, ASCLIN2 Receive Service Request */
#define SRC_ASCLIN_ASCLIN2_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003806Cu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN2_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN2_RX.
*/
#define SRC_ASCLIN2RX (SRC_ASCLIN_ASCLIN2_RX)

/** \brief 70, ASCLIN2 Error Service Request */
#define SRC_ASCLIN_ASCLIN2_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038070u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN2_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN2_ERR.
*/
#define SRC_ASCLIN2ERR (SRC_ASCLIN_ASCLIN2_ERR)

/** \brief 74, ASCLIN3 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN3_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038074u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN3_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN3_TX.
*/
#define SRC_ASCLIN3TX (SRC_ASCLIN_ASCLIN3_TX)

/** \brief 78, ASCLIN3 Receive Service Request */
#define SRC_ASCLIN_ASCLIN3_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038078u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN3_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN3_RX.
*/
#define SRC_ASCLIN3RX (SRC_ASCLIN_ASCLIN3_RX)

/** \brief 7C, ASCLIN3 Error Service Request */
#define SRC_ASCLIN_ASCLIN3_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003807Cu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN3_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN3_ERR.
*/
#define SRC_ASCLIN3ERR (SRC_ASCLIN_ASCLIN3_ERR)

/** \brief 80, ASCLIN4 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN4_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038080u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN4_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN4_TX.
*/
#define SRC_ASCLIN4TX (SRC_ASCLIN_ASCLIN4_TX)

/** \brief 84, ASCLIN4 Receive Service Request */
#define SRC_ASCLIN_ASCLIN4_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038084u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN4_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN4_RX.
*/
#define SRC_ASCLIN4RX (SRC_ASCLIN_ASCLIN4_RX)

/** \brief 88, ASCLIN4 Error Service Request */
#define SRC_ASCLIN_ASCLIN4_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038088u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN4_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN4_ERR.
*/
#define SRC_ASCLIN4ERR (SRC_ASCLIN_ASCLIN4_ERR)

/** \brief 8C, ASCLIN5 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN5_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003808Cu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN5_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN5_TX.
*/
#define SRC_ASCLIN5TX (SRC_ASCLIN_ASCLIN5_TX)

/** \brief 90, ASCLIN5 Receive Service Request */
#define SRC_ASCLIN_ASCLIN5_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038090u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN5_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN5_RX.
*/
#define SRC_ASCLIN5RX (SRC_ASCLIN_ASCLIN5_RX)

/** \brief 94, ASCLIN5 Error Service Request */
#define SRC_ASCLIN_ASCLIN5_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038094u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN5_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN5_ERR.
*/
#define SRC_ASCLIN5ERR (SRC_ASCLIN_ASCLIN5_ERR)

/** \brief 98, ASCLIN6 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN6_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038098u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN6_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN6_TX.
*/
#define SRC_ASCLIN6TX (SRC_ASCLIN_ASCLIN6_TX)

/** \brief 9C, ASCLIN6 Receive Service Request */
#define SRC_ASCLIN_ASCLIN6_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003809Cu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN6_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN6_RX.
*/
#define SRC_ASCLIN6RX (SRC_ASCLIN_ASCLIN6_RX)

/** \brief A0, ASCLIN6 Error Service Request */
#define SRC_ASCLIN_ASCLIN6_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380A0u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN6_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN6_ERR.
*/
#define SRC_ASCLIN6ERR (SRC_ASCLIN_ASCLIN6_ERR)

/** \brief A4, ASCLIN7 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN7_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380A4u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN7_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN7_TX.
*/
#define SRC_ASCLIN7TX (SRC_ASCLIN_ASCLIN7_TX)

/** \brief A8, ASCLIN7 Receive Service Request */
#define SRC_ASCLIN_ASCLIN7_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380A8u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN7_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN7_RX.
*/
#define SRC_ASCLIN7RX (SRC_ASCLIN_ASCLIN7_RX)

/** \brief AC, ASCLIN7 Error Service Request */
#define SRC_ASCLIN_ASCLIN7_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380ACu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN7_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN7_ERR.
*/
#define SRC_ASCLIN7ERR (SRC_ASCLIN_ASCLIN7_ERR)

/** \brief B0, ASCLIN8 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN8_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380B0u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN8_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN8_TX.
*/
#define SRC_ASCLIN8TX (SRC_ASCLIN_ASCLIN8_TX)

/** \brief B4, ASCLIN8 Receive Service Request */
#define SRC_ASCLIN_ASCLIN8_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380B4u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN8_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN8_RX.
*/
#define SRC_ASCLIN8RX (SRC_ASCLIN_ASCLIN8_RX)

/** \brief B8, ASCLIN8 Error Service Request */
#define SRC_ASCLIN_ASCLIN8_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380B8u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN8_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN8_ERR.
*/
#define SRC_ASCLIN8ERR (SRC_ASCLIN_ASCLIN8_ERR)

/** \brief BC, ASCLIN9 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN9_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380BCu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN9_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN9_TX.
*/
#define SRC_ASCLIN9TX (SRC_ASCLIN_ASCLIN9_TX)

/** \brief C0, ASCLIN9 Receive Service Request */
#define SRC_ASCLIN_ASCLIN9_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380C0u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN9_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN9_RX.
*/
#define SRC_ASCLIN9RX (SRC_ASCLIN_ASCLIN9_RX)

/** \brief C4, ASCLIN9 Error Service Request */
#define SRC_ASCLIN_ASCLIN9_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380C4u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN9_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN9_ERR.
*/
#define SRC_ASCLIN9ERR (SRC_ASCLIN_ASCLIN9_ERR)

/** \brief C8, ASCLIN10 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN10_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380C8u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN10_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN10_TX.
*/
#define SRC_ASCLIN10TX (SRC_ASCLIN_ASCLIN10_TX)

/** \brief CC, ASCLIN10 Receive Service Request */
#define SRC_ASCLIN_ASCLIN10_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380CCu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN10_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN10_RX.
*/
#define SRC_ASCLIN10RX (SRC_ASCLIN_ASCLIN10_RX)

/** \brief D0, ASCLIN10 Error Service Request */
#define SRC_ASCLIN_ASCLIN10_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380D0u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN10_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN10_ERR.
*/
#define SRC_ASCLIN10ERR (SRC_ASCLIN_ASCLIN10_ERR)

/** \brief D4, ASCLIN11 Transmit Service Request */
#define SRC_ASCLIN_ASCLIN11_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380D4u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN11_TX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN11_TX.
*/
#define SRC_ASCLIN11TX (SRC_ASCLIN_ASCLIN11_TX)

/** \brief D8, ASCLIN11 Receive Service Request */
#define SRC_ASCLIN_ASCLIN11_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380D8u)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN11_RX.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN11_RX.
*/
#define SRC_ASCLIN11RX (SRC_ASCLIN_ASCLIN11_RX)

/** \brief DC, ASCLIN11 Error Service Request */
#define SRC_ASCLIN_ASCLIN11_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380DCu)
/** Alias (User Manual Name) for SRC_ASCLIN_ASCLIN11_ERR.
* To use register names with standard convension, please use SRC_ASCLIN_ASCLIN11_ERR.
*/
#define SRC_ASCLIN11ERR (SRC_ASCLIN_ASCLIN11_ERR)

/** \brief EC, MTU Done Service Request */
#define SRC_MTUDONE /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380ECu)

/** \brief F0, QSPI0 Transmit Service Request */
#define SRC_QSPI_QSPI0_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380F0u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI0_TX.
* To use register names with standard convension, please use SRC_QSPI_QSPI0_TX.
*/
#define SRC_QSPI0TX (SRC_QSPI_QSPI0_TX)

/** \brief F4, QSPI0 Receive Service Request */
#define SRC_QSPI_QSPI0_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380F4u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI0_RX.
* To use register names with standard convension, please use SRC_QSPI_QSPI0_RX.
*/
#define SRC_QSPI0RX (SRC_QSPI_QSPI0_RX)

/** \brief F8, QSPI0 Error Service Request */
#define SRC_QSPI_QSPI0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380F8u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI0_ERR.
* To use register names with standard convension, please use SRC_QSPI_QSPI0_ERR.
*/
#define SRC_QSPI0ERR (SRC_QSPI_QSPI0_ERR)

/** \brief FC, QSPI0 Phase Transition Service Request */
#define SRC_QSPI_QSPI0_PT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00380FCu)
/** Alias (User Manual Name) for SRC_QSPI_QSPI0_PT.
* To use register names with standard convension, please use SRC_QSPI_QSPI0_PT.
*/
#define SRC_QSPI0PT (SRC_QSPI_QSPI0_PT)

/** \brief 100, QSPI0 User Defined Service Request */
#define SRC_QSPI_QSPI0_U /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038100u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI0_U.
* To use register names with standard convension, please use SRC_QSPI_QSPI0_U.
*/
#define SRC_QSPI0U (SRC_QSPI_QSPI0_U)

/** \brief 104, QSPI1 Transmit Service Request */
#define SRC_QSPI_QSPI1_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038104u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI1_TX.
* To use register names with standard convension, please use SRC_QSPI_QSPI1_TX.
*/
#define SRC_QSPI1TX (SRC_QSPI_QSPI1_TX)

/** \brief 108, QSPI1 Receive Service Request */
#define SRC_QSPI_QSPI1_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038108u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI1_RX.
* To use register names with standard convension, please use SRC_QSPI_QSPI1_RX.
*/
#define SRC_QSPI1RX (SRC_QSPI_QSPI1_RX)

/** \brief 10C, QSPI1 Error Service Request */
#define SRC_QSPI_QSPI1_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003810Cu)
/** Alias (User Manual Name) for SRC_QSPI_QSPI1_ERR.
* To use register names with standard convension, please use SRC_QSPI_QSPI1_ERR.
*/
#define SRC_QSPI1ERR (SRC_QSPI_QSPI1_ERR)

/** \brief 110, QSPI1 Phase Transition Service Request */
#define SRC_QSPI_QSPI1_PT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038110u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI1_PT.
* To use register names with standard convension, please use SRC_QSPI_QSPI1_PT.
*/
#define SRC_QSPI1PT (SRC_QSPI_QSPI1_PT)

/** \brief 114, QSPI1 User Defined Service Request */
#define SRC_QSPI_QSPI1_U /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038114u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI1_U.
* To use register names with standard convension, please use SRC_QSPI_QSPI1_U.
*/
#define SRC_QSPI1U (SRC_QSPI_QSPI1_U)

/** \brief 118, QSPI2 Transmit Service Request */
#define SRC_QSPI_QSPI2_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038118u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI2_TX.
* To use register names with standard convension, please use SRC_QSPI_QSPI2_TX.
*/
#define SRC_QSPI2TX (SRC_QSPI_QSPI2_TX)

/** \brief 11C, QSPI2 Receive Service Request */
#define SRC_QSPI_QSPI2_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003811Cu)
/** Alias (User Manual Name) for SRC_QSPI_QSPI2_RX.
* To use register names with standard convension, please use SRC_QSPI_QSPI2_RX.
*/
#define SRC_QSPI2RX (SRC_QSPI_QSPI2_RX)

/** \brief 120, QSPI2 Error Service Request */
#define SRC_QSPI_QSPI2_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038120u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI2_ERR.
* To use register names with standard convension, please use SRC_QSPI_QSPI2_ERR.
*/
#define SRC_QSPI2ERR (SRC_QSPI_QSPI2_ERR)

/** \brief 124, QSPI2 Phase Transition Service Request */
#define SRC_QSPI_QSPI2_PT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038124u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI2_PT.
* To use register names with standard convension, please use SRC_QSPI_QSPI2_PT.
*/
#define SRC_QSPI2PT (SRC_QSPI_QSPI2_PT)

/** \brief 128, QSPI2 User Defined Service Request */
#define SRC_QSPI_QSPI2_U /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038128u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI2_U.
* To use register names with standard convension, please use SRC_QSPI_QSPI2_U.
*/
#define SRC_QSPI2U (SRC_QSPI_QSPI2_U)

/** \brief 12C, QSPI3 Transmit Service Request */
#define SRC_QSPI_QSPI3_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003812Cu)
/** Alias (User Manual Name) for SRC_QSPI_QSPI3_TX.
* To use register names with standard convension, please use SRC_QSPI_QSPI3_TX.
*/
#define SRC_QSPI3TX (SRC_QSPI_QSPI3_TX)

/** \brief 130, QSPI3 Receive Service Request */
#define SRC_QSPI_QSPI3_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038130u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI3_RX.
* To use register names with standard convension, please use SRC_QSPI_QSPI3_RX.
*/
#define SRC_QSPI3RX (SRC_QSPI_QSPI3_RX)

/** \brief 134, QSPI3 Error Service Request */
#define SRC_QSPI_QSPI3_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038134u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI3_ERR.
* To use register names with standard convension, please use SRC_QSPI_QSPI3_ERR.
*/
#define SRC_QSPI3ERR (SRC_QSPI_QSPI3_ERR)

/** \brief 138, QSPI3 Phase Transition Service Request */
#define SRC_QSPI_QSPI3_PT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038138u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI3_PT.
* To use register names with standard convension, please use SRC_QSPI_QSPI3_PT.
*/
#define SRC_QSPI3PT (SRC_QSPI_QSPI3_PT)

/** \brief 13C, QSPI3 User Defined Service Request */
#define SRC_QSPI_QSPI3_U /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003813Cu)
/** Alias (User Manual Name) for SRC_QSPI_QSPI3_U.
* To use register names with standard convension, please use SRC_QSPI_QSPI3_U.
*/
#define SRC_QSPI3U (SRC_QSPI_QSPI3_U)

/** \brief 140, QSPI4 Transmit Service Request */
#define SRC_QSPI_QSPI4_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038140u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI4_TX.
* To use register names with standard convension, please use SRC_QSPI_QSPI4_TX.
*/
#define SRC_QSPI4TX (SRC_QSPI_QSPI4_TX)

/** \brief 144, QSPI4 Receive Service Request */
#define SRC_QSPI_QSPI4_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038144u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI4_RX.
* To use register names with standard convension, please use SRC_QSPI_QSPI4_RX.
*/
#define SRC_QSPI4RX (SRC_QSPI_QSPI4_RX)

/** \brief 148, QSPI4 Error Service Request */
#define SRC_QSPI_QSPI4_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038148u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI4_ERR.
* To use register names with standard convension, please use SRC_QSPI_QSPI4_ERR.
*/
#define SRC_QSPI4ERR (SRC_QSPI_QSPI4_ERR)

/** \brief 14C, QSPI4 Phase Transition Service Request */
#define SRC_QSPI_QSPI4_PT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003814Cu)
/** Alias (User Manual Name) for SRC_QSPI_QSPI4_PT.
* To use register names with standard convension, please use SRC_QSPI_QSPI4_PT.
*/
#define SRC_QSPI4PT (SRC_QSPI_QSPI4_PT)

/** \brief 150, QSPI4 User Defined Service Request */
#define SRC_QSPI_QSPI4_U /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038150u)
/** Alias (User Manual Name) for SRC_QSPI_QSPI4_U.
* To use register names with standard convension, please use SRC_QSPI_QSPI4_U.
*/
#define SRC_QSPI4U (SRC_QSPI_QSPI4_U)

/** \brief 180, HSCT0 Service Request */
#define SRC_HSCT_HSCT0_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038180u)
/** Alias (User Manual Name) for SRC_HSCT_HSCT0_SR.
* To use register names with standard convension, please use SRC_HSCT_HSCT0_SR.
*/
#define SRC_HSCT0 (SRC_HSCT_HSCT0_SR)

/** \brief 190, HSSL0 Channel 0 OK Service Request */
#define SRC_HSSL_HSSL0_CH0_COK /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038190u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH0_COK.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH0_COK.
*/
#define SRC_HSSL0COK0 (SRC_HSSL_HSSL0_CH0_COK)

/** \brief 194, HSSL0 Channel 0 Read Data Service Request */
#define SRC_HSSL_HSSL0_CH0_RDI /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038194u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH0_RDI.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH0_RDI.
*/
#define SRC_HSSL0RDI0 (SRC_HSSL_HSSL0_CH0_RDI)

/** \brief 198, HSSL0 Channel 0 Error Service Request */
#define SRC_HSSL_HSSL0_CH0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038198u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH0_ERR.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH0_ERR.
*/
#define SRC_HSSL0ERR0 (SRC_HSSL_HSSL0_CH0_ERR)

/** \brief 19C, HSSL0 Channel 0 Trigger Interrupt Service Request */
#define SRC_HSSL_HSSL0_CH0_TRG /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003819Cu)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH0_TRG.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH0_TRG.
*/
#define SRC_HSSL0TRG0 (SRC_HSSL_HSSL0_CH0_TRG)

/** \brief 1A0, HSSL0 Channel 1 OK Service Request */
#define SRC_HSSL_HSSL0_CH1_COK /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381A0u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH1_COK.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH1_COK.
*/
#define SRC_HSSL0COK1 (SRC_HSSL_HSSL0_CH1_COK)

/** \brief 1A4, HSSL0 Channel 1 Read Data Service Request */
#define SRC_HSSL_HSSL0_CH1_RDI /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381A4u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH1_RDI.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH1_RDI.
*/
#define SRC_HSSL0RDI1 (SRC_HSSL_HSSL0_CH1_RDI)

/** \brief 1A8, HSSL0 Channel 1 Error Service Request */
#define SRC_HSSL_HSSL0_CH1_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381A8u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH1_ERR.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH1_ERR.
*/
#define SRC_HSSL0ERR1 (SRC_HSSL_HSSL0_CH1_ERR)

/** \brief 1AC, HSSL0 Channel 1 Trigger Interrupt Service Request */
#define SRC_HSSL_HSSL0_CH1_TRG /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381ACu)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH1_TRG.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH1_TRG.
*/
#define SRC_HSSL0TRG1 (SRC_HSSL_HSSL0_CH1_TRG)

/** \brief 1B0, HSSL0 Channel 2 OK Service Request */
#define SRC_HSSL_HSSL0_CH2_COK /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381B0u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH2_COK.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH2_COK.
*/
#define SRC_HSSL0COK2 (SRC_HSSL_HSSL0_CH2_COK)

/** \brief 1B4, HSSL0 Channel 2 Read Data Service Request */
#define SRC_HSSL_HSSL0_CH2_RDI /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381B4u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH2_RDI.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH2_RDI.
*/
#define SRC_HSSL0RDI2 (SRC_HSSL_HSSL0_CH2_RDI)

/** \brief 1B8, HSSL0 Channel 2 Error Service Request */
#define SRC_HSSL_HSSL0_CH2_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381B8u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH2_ERR.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH2_ERR.
*/
#define SRC_HSSL0ERR2 (SRC_HSSL_HSSL0_CH2_ERR)

/** \brief 1BC, HSSL0 Channel 2 Trigger Interrupt Service Request */
#define SRC_HSSL_HSSL0_CH2_TRG /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381BCu)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH2_TRG.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH2_TRG.
*/
#define SRC_HSSL0TRG2 (SRC_HSSL_HSSL0_CH2_TRG)

/** \brief 1C0, HSSL0 Channel 3 OK Service Request */
#define SRC_HSSL_HSSL0_CH3_COK /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381C0u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH3_COK.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH3_COK.
*/
#define SRC_HSSL0COK3 (SRC_HSSL_HSSL0_CH3_COK)

/** \brief 1C4, HSSL0 Channel 3 Read Data Service Request */
#define SRC_HSSL_HSSL0_CH3_RDI /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381C4u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH3_RDI.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH3_RDI.
*/
#define SRC_HSSL0RDI3 (SRC_HSSL_HSSL0_CH3_RDI)

/** \brief 1C8, HSSL0 Channel 3 Error Service Request */
#define SRC_HSSL_HSSL0_CH3_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381C8u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH3_ERR.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH3_ERR.
*/
#define SRC_HSSL0ERR3 (SRC_HSSL_HSSL0_CH3_ERR)

/** \brief 1CC, HSSL0 Channel 3 Trigger Interrupt Service Request */
#define SRC_HSSL_HSSL0_CH3_TRG /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381CCu)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_CH3_TRG.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_CH3_TRG.
*/
#define SRC_HSSL0TRG3 (SRC_HSSL_HSSL0_CH3_TRG)

/** \brief 1D0, HSSL0 Exception Service Request */
#define SRC_HSSL_HSSL0_EXI /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00381D0u)
/** Alias (User Manual Name) for SRC_HSSL_HSSL0_EXI.
* To use register names with standard convension, please use SRC_HSSL_HSSL0_EXI.
*/
#define SRC_HSSL0EXI (SRC_HSSL_HSSL0_EXI)

/** \brief 220, I2C0 Data Transfer Request */
#define SRC_I2C_I2C0_DTR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038220u)
/** Alias (User Manual Name) for SRC_I2C_I2C0_DTR.
* To use register names with standard convension, please use SRC_I2C_I2C0_DTR.
*/
#define SRC_I2C0DTR (SRC_I2C_I2C0_DTR)

/** \brief 224, I2C0 Error Service Request */
#define SRC_I2C_I2C0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038224u)
/** Alias (User Manual Name) for SRC_I2C_I2C0_ERR.
* To use register names with standard convension, please use SRC_I2C_I2C0_ERR.
*/
#define SRC_I2C0ERR (SRC_I2C_I2C0_ERR)

/** \brief 228, I2C0 Protocol Service Request */
#define SRC_I2C_I2C0_P /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038228u)
/** Alias (User Manual Name) for SRC_I2C_I2C0_P.
* To use register names with standard convension, please use SRC_I2C_I2C0_P.
*/
#define SRC_I2C0P (SRC_I2C_I2C0_P)

/** \brief 230, I2C1 Data Transfer Request */
#define SRC_I2C_I2C1_DTR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038230u)
/** Alias (User Manual Name) for SRC_I2C_I2C1_DTR.
* To use register names with standard convension, please use SRC_I2C_I2C1_DTR.
*/
#define SRC_I2C1DTR (SRC_I2C_I2C1_DTR)

/** \brief 234, I2C1 Error Service Request */
#define SRC_I2C_I2C1_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038234u)
/** Alias (User Manual Name) for SRC_I2C_I2C1_ERR.
* To use register names with standard convension, please use SRC_I2C_I2C1_ERR.
*/
#define SRC_I2C1ERR (SRC_I2C_I2C1_ERR)

/** \brief 238, I2C1 Protocol Service Request */
#define SRC_I2C_I2C1_P /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038238u)
/** Alias (User Manual Name) for SRC_I2C_I2C1_P.
* To use register names with standard convension, please use SRC_I2C_I2C1_P.
*/
#define SRC_I2C1P (SRC_I2C_I2C1_P)

/** \brief 240, SENT TRIG0 Service Request */
#define SRC_SENT_SENT0_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038240u)
/** Alias (User Manual Name) for SRC_SENT_SENT0_SR.
* To use register names with standard convension, please use SRC_SENT_SENT0_SR.
*/
#define SRC_SENT0 (SRC_SENT_SENT0_SR)

/** \brief 244, SENT TRIG1 Service Request */
#define SRC_SENT_SENT1_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038244u)
/** Alias (User Manual Name) for SRC_SENT_SENT1_SR.
* To use register names with standard convension, please use SRC_SENT_SENT1_SR.
*/
#define SRC_SENT1 (SRC_SENT_SENT1_SR)

/** \brief 248, SENT TRIG2 Service Request */
#define SRC_SENT_SENT2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038248u)
/** Alias (User Manual Name) for SRC_SENT_SENT2_SR.
* To use register names with standard convension, please use SRC_SENT_SENT2_SR.
*/
#define SRC_SENT2 (SRC_SENT_SENT2_SR)

/** \brief 24C, SENT TRIG3 Service Request */
#define SRC_SENT_SENT3_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003824Cu)
/** Alias (User Manual Name) for SRC_SENT_SENT3_SR.
* To use register names with standard convension, please use SRC_SENT_SENT3_SR.
*/
#define SRC_SENT3 (SRC_SENT_SENT3_SR)

/** \brief 250, SENT TRIG4 Service Request */
#define SRC_SENT_SENT4_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038250u)
/** Alias (User Manual Name) for SRC_SENT_SENT4_SR.
* To use register names with standard convension, please use SRC_SENT_SENT4_SR.
*/
#define SRC_SENT4 (SRC_SENT_SENT4_SR)

/** \brief 254, SENT TRIG5 Service Request */
#define SRC_SENT_SENT5_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038254u)
/** Alias (User Manual Name) for SRC_SENT_SENT5_SR.
* To use register names with standard convension, please use SRC_SENT_SENT5_SR.
*/
#define SRC_SENT5 (SRC_SENT_SENT5_SR)

/** \brief 258, SENT TRIG6 Service Request */
#define SRC_SENT_SENT6_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038258u)
/** Alias (User Manual Name) for SRC_SENT_SENT6_SR.
* To use register names with standard convension, please use SRC_SENT_SENT6_SR.
*/
#define SRC_SENT6 (SRC_SENT_SENT6_SR)

/** \brief 25C, SENT TRIG7 Service Request */
#define SRC_SENT_SENT7_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003825Cu)
/** Alias (User Manual Name) for SRC_SENT_SENT7_SR.
* To use register names with standard convension, please use SRC_SENT_SENT7_SR.
*/
#define SRC_SENT7 (SRC_SENT_SENT7_SR)

/** \brief 260, SENT TRIG8 Service Request */
#define SRC_SENT_SENT8_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038260u)
/** Alias (User Manual Name) for SRC_SENT_SENT8_SR.
* To use register names with standard convension, please use SRC_SENT_SENT8_SR.
*/
#define SRC_SENT8 (SRC_SENT_SENT8_SR)

/** \brief 264, SENT TRIG9 Service Request */
#define SRC_SENT_SENT9_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038264u)
/** Alias (User Manual Name) for SRC_SENT_SENT9_SR.
* To use register names with standard convension, please use SRC_SENT_SENT9_SR.
*/
#define SRC_SENT9 (SRC_SENT_SENT9_SR)

/** \brief 270, MSC0 Service Request 0 */
#define SRC_MSC_MSC0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038270u)
/** Alias (User Manual Name) for SRC_MSC_MSC0_SR0.
* To use register names with standard convension, please use SRC_MSC_MSC0_SR0.
*/
#define SRC_MSC0SR0 (SRC_MSC_MSC0_SR0)

/** \brief 274, MSC0 Service Request 1 */
#define SRC_MSC_MSC0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038274u)
/** Alias (User Manual Name) for SRC_MSC_MSC0_SR1.
* To use register names with standard convension, please use SRC_MSC_MSC0_SR1.
*/
#define SRC_MSC0SR1 (SRC_MSC_MSC0_SR1)

/** \brief 278, MSC0 Service Request 2 */
#define SRC_MSC_MSC0_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038278u)
/** Alias (User Manual Name) for SRC_MSC_MSC0_SR2.
* To use register names with standard convension, please use SRC_MSC_MSC0_SR2.
*/
#define SRC_MSC0SR2 (SRC_MSC_MSC0_SR2)

/** \brief 27C, MSC0 Service Request 3 */
#define SRC_MSC_MSC0_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003827Cu)
/** Alias (User Manual Name) for SRC_MSC_MSC0_SR3.
* To use register names with standard convension, please use SRC_MSC_MSC0_SR3.
*/
#define SRC_MSC0SR3 (SRC_MSC_MSC0_SR3)

/** \brief 280, MSC0 Service Request 4 */
#define SRC_MSC_MSC0_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038280u)
/** Alias (User Manual Name) for SRC_MSC_MSC0_SR4.
* To use register names with standard convension, please use SRC_MSC_MSC0_SR4.
*/
#define SRC_MSC0SR4 (SRC_MSC_MSC0_SR4)

/** \brief 284, MSC1 Service Request 0 */
#define SRC_MSC_MSC1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038284u)
/** Alias (User Manual Name) for SRC_MSC_MSC1_SR0.
* To use register names with standard convension, please use SRC_MSC_MSC1_SR0.
*/
#define SRC_MSC1SR0 (SRC_MSC_MSC1_SR0)

/** \brief 288, MSC1 Service Request 1 */
#define SRC_MSC_MSC1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038288u)
/** Alias (User Manual Name) for SRC_MSC_MSC1_SR1.
* To use register names with standard convension, please use SRC_MSC_MSC1_SR1.
*/
#define SRC_MSC1SR1 (SRC_MSC_MSC1_SR1)

/** \brief 28C, MSC1 Service Request 2 */
#define SRC_MSC_MSC1_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003828Cu)
/** Alias (User Manual Name) for SRC_MSC_MSC1_SR2.
* To use register names with standard convension, please use SRC_MSC_MSC1_SR2.
*/
#define SRC_MSC1SR2 (SRC_MSC_MSC1_SR2)

/** \brief 290, MSC1 Service Request 3 */
#define SRC_MSC_MSC1_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038290u)
/** Alias (User Manual Name) for SRC_MSC_MSC1_SR3.
* To use register names with standard convension, please use SRC_MSC_MSC1_SR3.
*/
#define SRC_MSC1SR3 (SRC_MSC_MSC1_SR3)

/** \brief 294, MSC1 Service Request 4 */
#define SRC_MSC_MSC1_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038294u)
/** Alias (User Manual Name) for SRC_MSC_MSC1_SR4.
* To use register names with standard convension, please use SRC_MSC_MSC1_SR4.
*/
#define SRC_MSC1SR4 (SRC_MSC_MSC1_SR4)

/** \brief 298, MSC2 Service Request 0 */
#define SRC_MSC_MSC2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038298u)
/** Alias (User Manual Name) for SRC_MSC_MSC2_SR0.
* To use register names with standard convension, please use SRC_MSC_MSC2_SR0.
*/
#define SRC_MSC2SR0 (SRC_MSC_MSC2_SR0)

/** \brief 29C, MSC2 Service Request 1 */
#define SRC_MSC_MSC2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003829Cu)
/** Alias (User Manual Name) for SRC_MSC_MSC2_SR1.
* To use register names with standard convension, please use SRC_MSC_MSC2_SR1.
*/
#define SRC_MSC2SR1 (SRC_MSC_MSC2_SR1)

/** \brief 2A0, MSC2 Service Request 2 */
#define SRC_MSC_MSC2_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382A0u)
/** Alias (User Manual Name) for SRC_MSC_MSC2_SR2.
* To use register names with standard convension, please use SRC_MSC_MSC2_SR2.
*/
#define SRC_MSC2SR2 (SRC_MSC_MSC2_SR2)

/** \brief 2A4, MSC2 Service Request 3 */
#define SRC_MSC_MSC2_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382A4u)
/** Alias (User Manual Name) for SRC_MSC_MSC2_SR3.
* To use register names with standard convension, please use SRC_MSC_MSC2_SR3.
*/
#define SRC_MSC2SR3 (SRC_MSC_MSC2_SR3)

/** \brief 2A8, MSC2 Service Request 4 */
#define SRC_MSC_MSC2_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382A8u)
/** Alias (User Manual Name) for SRC_MSC_MSC2_SR4.
* To use register names with standard convension, please use SRC_MSC_MSC2_SR4.
*/
#define SRC_MSC2SR4 (SRC_MSC_MSC2_SR4)

/** \brief 2C0, CCU0 Service Request 0 */
#define SRC_CCU6_CCU0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382C0u)
/** Alias (User Manual Name) for SRC_CCU6_CCU0_SR0.
* To use register names with standard convension, please use SRC_CCU6_CCU0_SR0.
*/
#define SRC_CCU60SR0 (SRC_CCU6_CCU0_SR0)

/** \brief 2C4, CCU0 Service Request 1 */
#define SRC_CCU6_CCU0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382C4u)
/** Alias (User Manual Name) for SRC_CCU6_CCU0_SR1.
* To use register names with standard convension, please use SRC_CCU6_CCU0_SR1.
*/
#define SRC_CCU60SR1 (SRC_CCU6_CCU0_SR1)

/** \brief 2C8, CCU0 Service Request 2 */
#define SRC_CCU6_CCU0_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382C8u)
/** Alias (User Manual Name) for SRC_CCU6_CCU0_SR2.
* To use register names with standard convension, please use SRC_CCU6_CCU0_SR2.
*/
#define SRC_CCU60SR2 (SRC_CCU6_CCU0_SR2)

/** \brief 2CC, CCU0 Service Request 3 */
#define SRC_CCU6_CCU0_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382CCu)
/** Alias (User Manual Name) for SRC_CCU6_CCU0_SR3.
* To use register names with standard convension, please use SRC_CCU6_CCU0_SR3.
*/
#define SRC_CCU60SR3 (SRC_CCU6_CCU0_SR3)

/** \brief 2D0, CCU1 Service Request 0 */
#define SRC_CCU6_CCU1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382D0u)
/** Alias (User Manual Name) for SRC_CCU6_CCU1_SR0.
* To use register names with standard convension, please use SRC_CCU6_CCU1_SR0.
*/
#define SRC_CCU61SR0 (SRC_CCU6_CCU1_SR0)

/** \brief 2D4, CCU1 Service Request 1 */
#define SRC_CCU6_CCU1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382D4u)
/** Alias (User Manual Name) for SRC_CCU6_CCU1_SR1.
* To use register names with standard convension, please use SRC_CCU6_CCU1_SR1.
*/
#define SRC_CCU61SR1 (SRC_CCU6_CCU1_SR1)

/** \brief 2D8, CCU1 Service Request 2 */
#define SRC_CCU6_CCU1_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382D8u)
/** Alias (User Manual Name) for SRC_CCU6_CCU1_SR2.
* To use register names with standard convension, please use SRC_CCU6_CCU1_SR2.
*/
#define SRC_CCU61SR2 (SRC_CCU6_CCU1_SR2)

/** \brief 2DC, CCU1 Service Request 3 */
#define SRC_CCU6_CCU1_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382DCu)
/** Alias (User Manual Name) for SRC_CCU6_CCU1_SR3.
* To use register names with standard convension, please use SRC_CCU6_CCU1_SR3.
*/
#define SRC_CCU61SR3 (SRC_CCU6_CCU1_SR3)

/** \brief 2E0, GPT120 CAPREL Service Request */
#define SRC_GPT12_GPT120_CIRQ /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382E0u)
/** Alias (User Manual Name) for SRC_GPT12_GPT120_CIRQ.
* To use register names with standard convension, please use SRC_GPT12_GPT120_CIRQ.
*/
#define SRC_GPT120CIRQ (SRC_GPT12_GPT120_CIRQ)

/** \brief 2E4, GPT120 Timer 2 Service Request */
#define SRC_GPT12_GPT120_T2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382E4u)
/** Alias (User Manual Name) for SRC_GPT12_GPT120_T2.
* To use register names with standard convension, please use SRC_GPT12_GPT120_T2.
*/
#define SRC_GPT120T2 (SRC_GPT12_GPT120_T2)

/** \brief 2E8, GPT120 Timer 3 Service Request */
#define SRC_GPT12_GPT120_T3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382E8u)
/** Alias (User Manual Name) for SRC_GPT12_GPT120_T3.
* To use register names with standard convension, please use SRC_GPT12_GPT120_T3.
*/
#define SRC_GPT120T3 (SRC_GPT12_GPT120_T3)

/** \brief 2EC, GPT120 Timer 4 Service Request */
#define SRC_GPT12_GPT120_T4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382ECu)
/** Alias (User Manual Name) for SRC_GPT12_GPT120_T4.
* To use register names with standard convension, please use SRC_GPT12_GPT120_T4.
*/
#define SRC_GPT120T4 (SRC_GPT12_GPT120_T4)

/** \brief 2F0, GPT120 Timer 5 Service Request */
#define SRC_GPT12_GPT120_T5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382F0u)
/** Alias (User Manual Name) for SRC_GPT12_GPT120_T5.
* To use register names with standard convension, please use SRC_GPT12_GPT120_T5.
*/
#define SRC_GPT120T5 (SRC_GPT12_GPT120_T5)

/** \brief 2F4, GPT120 Timer 6 Service Request */
#define SRC_GPT12_GPT120_T6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00382F4u)
/** Alias (User Manual Name) for SRC_GPT12_GPT120_T6.
* To use register names with standard convension, please use SRC_GPT12_GPT120_T6.
*/
#define SRC_GPT120T6 (SRC_GPT12_GPT120_T6)

/** \brief 300, System Timer 0 Service Request 0 */
#define SRC_STM_STM0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038300u)
/** Alias (User Manual Name) for SRC_STM_STM0_SR0.
* To use register names with standard convension, please use SRC_STM_STM0_SR0.
*/
#define SRC_STM0SR0 (SRC_STM_STM0_SR0)

/** \brief 304, System Timer 0 Service Request 1 */
#define SRC_STM_STM0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038304u)
/** Alias (User Manual Name) for SRC_STM_STM0_SR1.
* To use register names with standard convension, please use SRC_STM_STM0_SR1.
*/
#define SRC_STM0SR1 (SRC_STM_STM0_SR1)

/** \brief 308, System Timer 1 Service Request 0 */
#define SRC_STM_STM1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038308u)
/** Alias (User Manual Name) for SRC_STM_STM1_SR0.
* To use register names with standard convension, please use SRC_STM_STM1_SR0.
*/
#define SRC_STM1SR0 (SRC_STM_STM1_SR0)

/** \brief 30C, System Timer 1 Service Request 1 */
#define SRC_STM_STM1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003830Cu)
/** Alias (User Manual Name) for SRC_STM_STM1_SR1.
* To use register names with standard convension, please use SRC_STM_STM1_SR1.
*/
#define SRC_STM1SR1 (SRC_STM_STM1_SR1)

/** \brief 310, System Timer 2 Service Request 0 */
#define SRC_STM_STM2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038310u)
/** Alias (User Manual Name) for SRC_STM_STM2_SR0.
* To use register names with standard convension, please use SRC_STM_STM2_SR0.
*/
#define SRC_STM2SR0 (SRC_STM_STM2_SR0)

/** \brief 314, System Timer 2 Service Request 1 */
#define SRC_STM_STM2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038314u)
/** Alias (User Manual Name) for SRC_STM_STM2_SR1.
* To use register names with standard convension, please use SRC_STM_STM2_SR1.
*/
#define SRC_STM2SR1 (SRC_STM_STM2_SR1)

/** \brief 318, System Timer 3 Service Request 0 */
#define SRC_STM_STM3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038318u)
/** Alias (User Manual Name) for SRC_STM_STM3_SR0.
* To use register names with standard convension, please use SRC_STM_STM3_SR0.
*/
#define SRC_STM3SR0 (SRC_STM_STM3_SR0)

/** \brief 31C, System Timer 3 Service Request 1 */
#define SRC_STM_STM3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003831Cu)
/** Alias (User Manual Name) for SRC_STM_STM3_SR1.
* To use register names with standard convension, please use SRC_STM_STM3_SR1.
*/
#define SRC_STM3SR1 (SRC_STM_STM3_SR1)

/** \brief 330, FCE0 Error Service Request */
#define SRC_FCE_FCE0_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038330u)
/** Alias (User Manual Name) for SRC_FCE_FCE0_SR.
* To use register names with standard convension, please use SRC_FCE_FCE0_SR.
*/
#define SRC_FCE0 (SRC_FCE_FCE0_SR)

/** \brief 340, DMA Error Service Request 0 */
#define SRC_DMA_DMA0_ERR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038340u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_ERR0.
* To use register names with standard convension, please use SRC_DMA_DMA0_ERR0.
*/
#define SRC_DMAERR0 (SRC_DMA_DMA0_ERR0)

/** \brief 344, DMA Error Service Request 1 */
#define SRC_DMA_DMA0_ERR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038344u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_ERR1.
* To use register names with standard convension, please use SRC_DMA_DMA0_ERR1.
*/
#define SRC_DMAERR1 (SRC_DMA_DMA0_ERR1)

/** \brief 348, DMA Error Service Request 2 */
#define SRC_DMA_DMA0_ERR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038348u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_ERR2.
* To use register names with standard convension, please use SRC_DMA_DMA0_ERR2.
*/
#define SRC_DMAERR2 (SRC_DMA_DMA0_ERR2)

/** \brief 34C, DMA Error Service Request 3 */
#define SRC_DMA_DMA0_ERR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003834Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_ERR3.
* To use register names with standard convension, please use SRC_DMA_DMA0_ERR3.
*/
#define SRC_DMAERR3 (SRC_DMA_DMA0_ERR3)

/** \brief 370, DMA Channel  0 Service Request */
#define SRC_DMA_DMA0_CH0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038370u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH0.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH0.
*/
#define SRC_DMACH0 (SRC_DMA_DMA0_CH0)

/** \brief 374, DMA Channel  1 Service Request */
#define SRC_DMA_DMA0_CH1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038374u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH1.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH1.
*/
#define SRC_DMACH1 (SRC_DMA_DMA0_CH1)

/** \brief 378, DMA Channel  2 Service Request */
#define SRC_DMA_DMA0_CH2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038378u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH2.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH2.
*/
#define SRC_DMACH2 (SRC_DMA_DMA0_CH2)

/** \brief 37C, DMA Channel  3 Service Request */
#define SRC_DMA_DMA0_CH3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003837Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH3.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH3.
*/
#define SRC_DMACH3 (SRC_DMA_DMA0_CH3)

/** \brief 380, DMA Channel  4 Service Request */
#define SRC_DMA_DMA0_CH4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038380u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH4.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH4.
*/
#define SRC_DMACH4 (SRC_DMA_DMA0_CH4)

/** \brief 384, DMA Channel  5 Service Request */
#define SRC_DMA_DMA0_CH5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038384u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH5.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH5.
*/
#define SRC_DMACH5 (SRC_DMA_DMA0_CH5)

/** \brief 388, DMA Channel  6 Service Request */
#define SRC_DMA_DMA0_CH6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038388u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH6.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH6.
*/
#define SRC_DMACH6 (SRC_DMA_DMA0_CH6)

/** \brief 38C, DMA Channel  7 Service Request */
#define SRC_DMA_DMA0_CH7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003838Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH7.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH7.
*/
#define SRC_DMACH7 (SRC_DMA_DMA0_CH7)

/** \brief 390, DMA Channel  8 Service Request */
#define SRC_DMA_DMA0_CH8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038390u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH8.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH8.
*/
#define SRC_DMACH8 (SRC_DMA_DMA0_CH8)

/** \brief 394, DMA Channel  9 Service Request */
#define SRC_DMA_DMA0_CH9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038394u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH9.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH9.
*/
#define SRC_DMACH9 (SRC_DMA_DMA0_CH9)

/** \brief 398, DMA Channel  10 Service Request */
#define SRC_DMA_DMA0_CH10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038398u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH10.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH10.
*/
#define SRC_DMACH10 (SRC_DMA_DMA0_CH10)

/** \brief 39C, DMA Channel  11 Service Request */
#define SRC_DMA_DMA0_CH11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003839Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH11.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH11.
*/
#define SRC_DMACH11 (SRC_DMA_DMA0_CH11)

/** \brief 3A0, DMA Channel  12 Service Request */
#define SRC_DMA_DMA0_CH12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383A0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH12.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH12.
*/
#define SRC_DMACH12 (SRC_DMA_DMA0_CH12)

/** \brief 3A4, DMA Channel  13 Service Request */
#define SRC_DMA_DMA0_CH13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383A4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH13.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH13.
*/
#define SRC_DMACH13 (SRC_DMA_DMA0_CH13)

/** \brief 3A8, DMA Channel  14 Service Request */
#define SRC_DMA_DMA0_CH14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383A8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH14.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH14.
*/
#define SRC_DMACH14 (SRC_DMA_DMA0_CH14)

/** \brief 3AC, DMA Channel  15 Service Request */
#define SRC_DMA_DMA0_CH15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383ACu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH15.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH15.
*/
#define SRC_DMACH15 (SRC_DMA_DMA0_CH15)

/** \brief 3B0, DMA Channel  16 Service Request */
#define SRC_DMA_DMA0_CH16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383B0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH16.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH16.
*/
#define SRC_DMACH16 (SRC_DMA_DMA0_CH16)

/** \brief 3B4, DMA Channel  17 Service Request */
#define SRC_DMA_DMA0_CH17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383B4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH17.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH17.
*/
#define SRC_DMACH17 (SRC_DMA_DMA0_CH17)

/** \brief 3B8, DMA Channel  18 Service Request */
#define SRC_DMA_DMA0_CH18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383B8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH18.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH18.
*/
#define SRC_DMACH18 (SRC_DMA_DMA0_CH18)

/** \brief 3BC, DMA Channel  19 Service Request */
#define SRC_DMA_DMA0_CH19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383BCu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH19.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH19.
*/
#define SRC_DMACH19 (SRC_DMA_DMA0_CH19)

/** \brief 3C0, DMA Channel  20 Service Request */
#define SRC_DMA_DMA0_CH20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383C0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH20.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH20.
*/
#define SRC_DMACH20 (SRC_DMA_DMA0_CH20)

/** \brief 3C4, DMA Channel  21 Service Request */
#define SRC_DMA_DMA0_CH21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383C4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH21.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH21.
*/
#define SRC_DMACH21 (SRC_DMA_DMA0_CH21)

/** \brief 3C8, DMA Channel  22 Service Request */
#define SRC_DMA_DMA0_CH22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383C8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH22.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH22.
*/
#define SRC_DMACH22 (SRC_DMA_DMA0_CH22)

/** \brief 3CC, DMA Channel  23 Service Request */
#define SRC_DMA_DMA0_CH23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383CCu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH23.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH23.
*/
#define SRC_DMACH23 (SRC_DMA_DMA0_CH23)

/** \brief 3D0, DMA Channel  24 Service Request */
#define SRC_DMA_DMA0_CH24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383D0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH24.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH24.
*/
#define SRC_DMACH24 (SRC_DMA_DMA0_CH24)

/** \brief 3D4, DMA Channel  25 Service Request */
#define SRC_DMA_DMA0_CH25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383D4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH25.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH25.
*/
#define SRC_DMACH25 (SRC_DMA_DMA0_CH25)

/** \brief 3D8, DMA Channel  26 Service Request */
#define SRC_DMA_DMA0_CH26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383D8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH26.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH26.
*/
#define SRC_DMACH26 (SRC_DMA_DMA0_CH26)

/** \brief 3DC, DMA Channel  27 Service Request */
#define SRC_DMA_DMA0_CH27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383DCu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH27.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH27.
*/
#define SRC_DMACH27 (SRC_DMA_DMA0_CH27)

/** \brief 3E0, DMA Channel  28 Service Request */
#define SRC_DMA_DMA0_CH28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383E0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH28.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH28.
*/
#define SRC_DMACH28 (SRC_DMA_DMA0_CH28)

/** \brief 3E4, DMA Channel  29 Service Request */
#define SRC_DMA_DMA0_CH29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383E4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH29.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH29.
*/
#define SRC_DMACH29 (SRC_DMA_DMA0_CH29)

/** \brief 3E8, DMA Channel  30 Service Request */
#define SRC_DMA_DMA0_CH30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383E8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH30.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH30.
*/
#define SRC_DMACH30 (SRC_DMA_DMA0_CH30)

/** \brief 3EC, DMA Channel  31 Service Request */
#define SRC_DMA_DMA0_CH31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383ECu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH31.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH31.
*/
#define SRC_DMACH31 (SRC_DMA_DMA0_CH31)

/** \brief 3F0, DMA Channel  32 Service Request */
#define SRC_DMA_DMA0_CH32 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383F0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH32.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH32.
*/
#define SRC_DMACH32 (SRC_DMA_DMA0_CH32)

/** \brief 3F4, DMA Channel  33 Service Request */
#define SRC_DMA_DMA0_CH33 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383F4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH33.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH33.
*/
#define SRC_DMACH33 (SRC_DMA_DMA0_CH33)

/** \brief 3F8, DMA Channel  34 Service Request */
#define SRC_DMA_DMA0_CH34 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383F8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH34.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH34.
*/
#define SRC_DMACH34 (SRC_DMA_DMA0_CH34)

/** \brief 3FC, DMA Channel  35 Service Request */
#define SRC_DMA_DMA0_CH35 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00383FCu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH35.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH35.
*/
#define SRC_DMACH35 (SRC_DMA_DMA0_CH35)

/** \brief 400, DMA Channel  36 Service Request */
#define SRC_DMA_DMA0_CH36 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038400u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH36.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH36.
*/
#define SRC_DMACH36 (SRC_DMA_DMA0_CH36)

/** \brief 404, DMA Channel  37 Service Request */
#define SRC_DMA_DMA0_CH37 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038404u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH37.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH37.
*/
#define SRC_DMACH37 (SRC_DMA_DMA0_CH37)

/** \brief 408, DMA Channel  38 Service Request */
#define SRC_DMA_DMA0_CH38 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038408u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH38.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH38.
*/
#define SRC_DMACH38 (SRC_DMA_DMA0_CH38)

/** \brief 40C, DMA Channel  39 Service Request */
#define SRC_DMA_DMA0_CH39 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003840Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH39.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH39.
*/
#define SRC_DMACH39 (SRC_DMA_DMA0_CH39)

/** \brief 410, DMA Channel  40 Service Request */
#define SRC_DMA_DMA0_CH40 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038410u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH40.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH40.
*/
#define SRC_DMACH40 (SRC_DMA_DMA0_CH40)

/** \brief 414, DMA Channel  41 Service Request */
#define SRC_DMA_DMA0_CH41 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038414u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH41.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH41.
*/
#define SRC_DMACH41 (SRC_DMA_DMA0_CH41)

/** \brief 418, DMA Channel  42 Service Request */
#define SRC_DMA_DMA0_CH42 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038418u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH42.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH42.
*/
#define SRC_DMACH42 (SRC_DMA_DMA0_CH42)

/** \brief 41C, DMA Channel  43 Service Request */
#define SRC_DMA_DMA0_CH43 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003841Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH43.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH43.
*/
#define SRC_DMACH43 (SRC_DMA_DMA0_CH43)

/** \brief 420, DMA Channel  44 Service Request */
#define SRC_DMA_DMA0_CH44 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038420u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH44.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH44.
*/
#define SRC_DMACH44 (SRC_DMA_DMA0_CH44)

/** \brief 424, DMA Channel  45 Service Request */
#define SRC_DMA_DMA0_CH45 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038424u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH45.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH45.
*/
#define SRC_DMACH45 (SRC_DMA_DMA0_CH45)

/** \brief 428, DMA Channel  46 Service Request */
#define SRC_DMA_DMA0_CH46 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038428u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH46.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH46.
*/
#define SRC_DMACH46 (SRC_DMA_DMA0_CH46)

/** \brief 42C, DMA Channel  47 Service Request */
#define SRC_DMA_DMA0_CH47 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003842Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH47.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH47.
*/
#define SRC_DMACH47 (SRC_DMA_DMA0_CH47)

/** \brief 430, DMA Channel  48 Service Request */
#define SRC_DMA_DMA0_CH48 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038430u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH48.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH48.
*/
#define SRC_DMACH48 (SRC_DMA_DMA0_CH48)

/** \brief 434, DMA Channel  49 Service Request */
#define SRC_DMA_DMA0_CH49 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038434u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH49.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH49.
*/
#define SRC_DMACH49 (SRC_DMA_DMA0_CH49)

/** \brief 438, DMA Channel  50 Service Request */
#define SRC_DMA_DMA0_CH50 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038438u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH50.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH50.
*/
#define SRC_DMACH50 (SRC_DMA_DMA0_CH50)

/** \brief 43C, DMA Channel  51 Service Request */
#define SRC_DMA_DMA0_CH51 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003843Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH51.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH51.
*/
#define SRC_DMACH51 (SRC_DMA_DMA0_CH51)

/** \brief 440, DMA Channel  52 Service Request */
#define SRC_DMA_DMA0_CH52 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038440u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH52.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH52.
*/
#define SRC_DMACH52 (SRC_DMA_DMA0_CH52)

/** \brief 444, DMA Channel  53 Service Request */
#define SRC_DMA_DMA0_CH53 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038444u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH53.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH53.
*/
#define SRC_DMACH53 (SRC_DMA_DMA0_CH53)

/** \brief 448, DMA Channel  54 Service Request */
#define SRC_DMA_DMA0_CH54 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038448u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH54.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH54.
*/
#define SRC_DMACH54 (SRC_DMA_DMA0_CH54)

/** \brief 44C, DMA Channel  55 Service Request */
#define SRC_DMA_DMA0_CH55 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003844Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH55.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH55.
*/
#define SRC_DMACH55 (SRC_DMA_DMA0_CH55)

/** \brief 450, DMA Channel  56 Service Request */
#define SRC_DMA_DMA0_CH56 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038450u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH56.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH56.
*/
#define SRC_DMACH56 (SRC_DMA_DMA0_CH56)

/** \brief 454, DMA Channel  57 Service Request */
#define SRC_DMA_DMA0_CH57 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038454u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH57.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH57.
*/
#define SRC_DMACH57 (SRC_DMA_DMA0_CH57)

/** \brief 458, DMA Channel  58 Service Request */
#define SRC_DMA_DMA0_CH58 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038458u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH58.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH58.
*/
#define SRC_DMACH58 (SRC_DMA_DMA0_CH58)

/** \brief 45C, DMA Channel  59 Service Request */
#define SRC_DMA_DMA0_CH59 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003845Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH59.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH59.
*/
#define SRC_DMACH59 (SRC_DMA_DMA0_CH59)

/** \brief 460, DMA Channel  60 Service Request */
#define SRC_DMA_DMA0_CH60 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038460u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH60.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH60.
*/
#define SRC_DMACH60 (SRC_DMA_DMA0_CH60)

/** \brief 464, DMA Channel  61 Service Request */
#define SRC_DMA_DMA0_CH61 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038464u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH61.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH61.
*/
#define SRC_DMACH61 (SRC_DMA_DMA0_CH61)

/** \brief 468, DMA Channel  62 Service Request */
#define SRC_DMA_DMA0_CH62 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038468u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH62.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH62.
*/
#define SRC_DMACH62 (SRC_DMA_DMA0_CH62)

/** \brief 46C, DMA Channel  63 Service Request */
#define SRC_DMA_DMA0_CH63 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003846Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH63.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH63.
*/
#define SRC_DMACH63 (SRC_DMA_DMA0_CH63)

/** \brief 470, DMA Channel  64 Service Request */
#define SRC_DMA_DMA0_CH64 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038470u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH64.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH64.
*/
#define SRC_DMACH64 (SRC_DMA_DMA0_CH64)

/** \brief 474, DMA Channel  65 Service Request */
#define SRC_DMA_DMA0_CH65 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038474u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH65.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH65.
*/
#define SRC_DMACH65 (SRC_DMA_DMA0_CH65)

/** \brief 478, DMA Channel  66 Service Request */
#define SRC_DMA_DMA0_CH66 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038478u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH66.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH66.
*/
#define SRC_DMACH66 (SRC_DMA_DMA0_CH66)

/** \brief 47C, DMA Channel  67 Service Request */
#define SRC_DMA_DMA0_CH67 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003847Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH67.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH67.
*/
#define SRC_DMACH67 (SRC_DMA_DMA0_CH67)

/** \brief 480, DMA Channel  68 Service Request */
#define SRC_DMA_DMA0_CH68 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038480u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH68.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH68.
*/
#define SRC_DMACH68 (SRC_DMA_DMA0_CH68)

/** \brief 484, DMA Channel  69 Service Request */
#define SRC_DMA_DMA0_CH69 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038484u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH69.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH69.
*/
#define SRC_DMACH69 (SRC_DMA_DMA0_CH69)

/** \brief 488, DMA Channel  70 Service Request */
#define SRC_DMA_DMA0_CH70 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038488u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH70.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH70.
*/
#define SRC_DMACH70 (SRC_DMA_DMA0_CH70)

/** \brief 48C, DMA Channel  71 Service Request */
#define SRC_DMA_DMA0_CH71 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003848Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH71.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH71.
*/
#define SRC_DMACH71 (SRC_DMA_DMA0_CH71)

/** \brief 490, DMA Channel  72 Service Request */
#define SRC_DMA_DMA0_CH72 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038490u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH72.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH72.
*/
#define SRC_DMACH72 (SRC_DMA_DMA0_CH72)

/** \brief 494, DMA Channel  73 Service Request */
#define SRC_DMA_DMA0_CH73 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038494u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH73.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH73.
*/
#define SRC_DMACH73 (SRC_DMA_DMA0_CH73)

/** \brief 498, DMA Channel  74 Service Request */
#define SRC_DMA_DMA0_CH74 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038498u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH74.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH74.
*/
#define SRC_DMACH74 (SRC_DMA_DMA0_CH74)

/** \brief 49C, DMA Channel  75 Service Request */
#define SRC_DMA_DMA0_CH75 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003849Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH75.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH75.
*/
#define SRC_DMACH75 (SRC_DMA_DMA0_CH75)

/** \brief 4A0, DMA Channel  76 Service Request */
#define SRC_DMA_DMA0_CH76 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384A0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH76.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH76.
*/
#define SRC_DMACH76 (SRC_DMA_DMA0_CH76)

/** \brief 4A4, DMA Channel  77 Service Request */
#define SRC_DMA_DMA0_CH77 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384A4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH77.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH77.
*/
#define SRC_DMACH77 (SRC_DMA_DMA0_CH77)

/** \brief 4A8, DMA Channel  78 Service Request */
#define SRC_DMA_DMA0_CH78 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384A8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH78.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH78.
*/
#define SRC_DMACH78 (SRC_DMA_DMA0_CH78)

/** \brief 4AC, DMA Channel  79 Service Request */
#define SRC_DMA_DMA0_CH79 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384ACu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH79.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH79.
*/
#define SRC_DMACH79 (SRC_DMA_DMA0_CH79)

/** \brief 4B0, DMA Channel  80 Service Request */
#define SRC_DMA_DMA0_CH80 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384B0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH80.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH80.
*/
#define SRC_DMACH80 (SRC_DMA_DMA0_CH80)

/** \brief 4B4, DMA Channel  81 Service Request */
#define SRC_DMA_DMA0_CH81 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384B4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH81.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH81.
*/
#define SRC_DMACH81 (SRC_DMA_DMA0_CH81)

/** \brief 4B8, DMA Channel  82 Service Request */
#define SRC_DMA_DMA0_CH82 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384B8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH82.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH82.
*/
#define SRC_DMACH82 (SRC_DMA_DMA0_CH82)

/** \brief 4BC, DMA Channel  83 Service Request */
#define SRC_DMA_DMA0_CH83 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384BCu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH83.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH83.
*/
#define SRC_DMACH83 (SRC_DMA_DMA0_CH83)

/** \brief 4C0, DMA Channel  84 Service Request */
#define SRC_DMA_DMA0_CH84 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384C0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH84.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH84.
*/
#define SRC_DMACH84 (SRC_DMA_DMA0_CH84)

/** \brief 4C4, DMA Channel  85 Service Request */
#define SRC_DMA_DMA0_CH85 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384C4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH85.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH85.
*/
#define SRC_DMACH85 (SRC_DMA_DMA0_CH85)

/** \brief 4C8, DMA Channel  86 Service Request */
#define SRC_DMA_DMA0_CH86 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384C8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH86.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH86.
*/
#define SRC_DMACH86 (SRC_DMA_DMA0_CH86)

/** \brief 4CC, DMA Channel  87 Service Request */
#define SRC_DMA_DMA0_CH87 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384CCu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH87.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH87.
*/
#define SRC_DMACH87 (SRC_DMA_DMA0_CH87)

/** \brief 4D0, DMA Channel  88 Service Request */
#define SRC_DMA_DMA0_CH88 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384D0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH88.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH88.
*/
#define SRC_DMACH88 (SRC_DMA_DMA0_CH88)

/** \brief 4D4, DMA Channel  89 Service Request */
#define SRC_DMA_DMA0_CH89 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384D4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH89.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH89.
*/
#define SRC_DMACH89 (SRC_DMA_DMA0_CH89)

/** \brief 4D8, DMA Channel  90 Service Request */
#define SRC_DMA_DMA0_CH90 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384D8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH90.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH90.
*/
#define SRC_DMACH90 (SRC_DMA_DMA0_CH90)

/** \brief 4DC, DMA Channel  91 Service Request */
#define SRC_DMA_DMA0_CH91 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384DCu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH91.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH91.
*/
#define SRC_DMACH91 (SRC_DMA_DMA0_CH91)

/** \brief 4E0, DMA Channel  92 Service Request */
#define SRC_DMA_DMA0_CH92 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384E0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH92.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH92.
*/
#define SRC_DMACH92 (SRC_DMA_DMA0_CH92)

/** \brief 4E4, DMA Channel  93 Service Request */
#define SRC_DMA_DMA0_CH93 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384E4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH93.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH93.
*/
#define SRC_DMACH93 (SRC_DMA_DMA0_CH93)

/** \brief 4E8, DMA Channel  94 Service Request */
#define SRC_DMA_DMA0_CH94 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384E8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH94.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH94.
*/
#define SRC_DMACH94 (SRC_DMA_DMA0_CH94)

/** \brief 4EC, DMA Channel  95 Service Request */
#define SRC_DMA_DMA0_CH95 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384ECu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH95.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH95.
*/
#define SRC_DMACH95 (SRC_DMA_DMA0_CH95)

/** \brief 4F0, DMA Channel  96 Service Request */
#define SRC_DMA_DMA0_CH96 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384F0u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH96.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH96.
*/
#define SRC_DMACH96 (SRC_DMA_DMA0_CH96)

/** \brief 4F4, DMA Channel  97 Service Request */
#define SRC_DMA_DMA0_CH97 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384F4u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH97.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH97.
*/
#define SRC_DMACH97 (SRC_DMA_DMA0_CH97)

/** \brief 4F8, DMA Channel  98 Service Request */
#define SRC_DMA_DMA0_CH98 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384F8u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH98.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH98.
*/
#define SRC_DMACH98 (SRC_DMA_DMA0_CH98)

/** \brief 4FC, DMA Channel  99 Service Request */
#define SRC_DMA_DMA0_CH99 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00384FCu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH99.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH99.
*/
#define SRC_DMACH99 (SRC_DMA_DMA0_CH99)

/** \brief 500, DMA Channel  100 Service Request */
#define SRC_DMA_DMA0_CH100 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038500u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH100.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH100.
*/
#define SRC_DMACH100 (SRC_DMA_DMA0_CH100)

/** \brief 504, DMA Channel  101 Service Request */
#define SRC_DMA_DMA0_CH101 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038504u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH101.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH101.
*/
#define SRC_DMACH101 (SRC_DMA_DMA0_CH101)

/** \brief 508, DMA Channel  102 Service Request */
#define SRC_DMA_DMA0_CH102 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038508u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH102.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH102.
*/
#define SRC_DMACH102 (SRC_DMA_DMA0_CH102)

/** \brief 50C, DMA Channel  103 Service Request */
#define SRC_DMA_DMA0_CH103 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003850Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH103.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH103.
*/
#define SRC_DMACH103 (SRC_DMA_DMA0_CH103)

/** \brief 510, DMA Channel  104 Service Request */
#define SRC_DMA_DMA0_CH104 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038510u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH104.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH104.
*/
#define SRC_DMACH104 (SRC_DMA_DMA0_CH104)

/** \brief 514, DMA Channel  105 Service Request */
#define SRC_DMA_DMA0_CH105 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038514u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH105.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH105.
*/
#define SRC_DMACH105 (SRC_DMA_DMA0_CH105)

/** \brief 518, DMA Channel  106 Service Request */
#define SRC_DMA_DMA0_CH106 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038518u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH106.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH106.
*/
#define SRC_DMACH106 (SRC_DMA_DMA0_CH106)

/** \brief 51C, DMA Channel  107 Service Request */
#define SRC_DMA_DMA0_CH107 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003851Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH107.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH107.
*/
#define SRC_DMACH107 (SRC_DMA_DMA0_CH107)

/** \brief 520, DMA Channel  108 Service Request */
#define SRC_DMA_DMA0_CH108 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038520u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH108.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH108.
*/
#define SRC_DMACH108 (SRC_DMA_DMA0_CH108)

/** \brief 524, DMA Channel  109 Service Request */
#define SRC_DMA_DMA0_CH109 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038524u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH109.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH109.
*/
#define SRC_DMACH109 (SRC_DMA_DMA0_CH109)

/** \brief 528, DMA Channel  110 Service Request */
#define SRC_DMA_DMA0_CH110 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038528u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH110.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH110.
*/
#define SRC_DMACH110 (SRC_DMA_DMA0_CH110)

/** \brief 52C, DMA Channel  111 Service Request */
#define SRC_DMA_DMA0_CH111 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003852Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH111.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH111.
*/
#define SRC_DMACH111 (SRC_DMA_DMA0_CH111)

/** \brief 530, DMA Channel  112 Service Request */
#define SRC_DMA_DMA0_CH112 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038530u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH112.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH112.
*/
#define SRC_DMACH112 (SRC_DMA_DMA0_CH112)

/** \brief 534, DMA Channel  113 Service Request */
#define SRC_DMA_DMA0_CH113 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038534u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH113.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH113.
*/
#define SRC_DMACH113 (SRC_DMA_DMA0_CH113)

/** \brief 538, DMA Channel  114 Service Request */
#define SRC_DMA_DMA0_CH114 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038538u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH114.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH114.
*/
#define SRC_DMACH114 (SRC_DMA_DMA0_CH114)

/** \brief 53C, DMA Channel  115 Service Request */
#define SRC_DMA_DMA0_CH115 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003853Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH115.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH115.
*/
#define SRC_DMACH115 (SRC_DMA_DMA0_CH115)

/** \brief 540, DMA Channel  116 Service Request */
#define SRC_DMA_DMA0_CH116 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038540u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH116.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH116.
*/
#define SRC_DMACH116 (SRC_DMA_DMA0_CH116)

/** \brief 544, DMA Channel  117 Service Request */
#define SRC_DMA_DMA0_CH117 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038544u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH117.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH117.
*/
#define SRC_DMACH117 (SRC_DMA_DMA0_CH117)

/** \brief 548, DMA Channel  118 Service Request */
#define SRC_DMA_DMA0_CH118 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038548u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH118.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH118.
*/
#define SRC_DMACH118 (SRC_DMA_DMA0_CH118)

/** \brief 54C, DMA Channel  119 Service Request */
#define SRC_DMA_DMA0_CH119 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003854Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH119.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH119.
*/
#define SRC_DMACH119 (SRC_DMA_DMA0_CH119)

/** \brief 550, DMA Channel  120 Service Request */
#define SRC_DMA_DMA0_CH120 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038550u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH120.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH120.
*/
#define SRC_DMACH120 (SRC_DMA_DMA0_CH120)

/** \brief 554, DMA Channel  121 Service Request */
#define SRC_DMA_DMA0_CH121 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038554u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH121.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH121.
*/
#define SRC_DMACH121 (SRC_DMA_DMA0_CH121)

/** \brief 558, DMA Channel  122 Service Request */
#define SRC_DMA_DMA0_CH122 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038558u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH122.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH122.
*/
#define SRC_DMACH122 (SRC_DMA_DMA0_CH122)

/** \brief 55C, DMA Channel  123 Service Request */
#define SRC_DMA_DMA0_CH123 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003855Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH123.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH123.
*/
#define SRC_DMACH123 (SRC_DMA_DMA0_CH123)

/** \brief 560, DMA Channel  124 Service Request */
#define SRC_DMA_DMA0_CH124 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038560u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH124.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH124.
*/
#define SRC_DMACH124 (SRC_DMA_DMA0_CH124)

/** \brief 564, DMA Channel  125 Service Request */
#define SRC_DMA_DMA0_CH125 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038564u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH125.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH125.
*/
#define SRC_DMACH125 (SRC_DMA_DMA0_CH125)

/** \brief 568, DMA Channel  126 Service Request */
#define SRC_DMA_DMA0_CH126 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038568u)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH126.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH126.
*/
#define SRC_DMACH126 (SRC_DMA_DMA0_CH126)

/** \brief 56C, DMA Channel  127 Service Request */
#define SRC_DMA_DMA0_CH127 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003856Cu)
/** Alias (User Manual Name) for SRC_DMA_DMA0_CH127.
* To use register names with standard convension, please use SRC_DMA_DMA0_CH127.
*/
#define SRC_DMACH127 (SRC_DMA_DMA0_CH127)

/** \brief 580, GETH Service Request 0 */
#define SRC_GETH_GETH0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038580u)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR0.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR0.
*/
#define SRC_GETH0 (SRC_GETH_GETH0_SR0)

/** \brief 584, GETH Service Request 1 */
#define SRC_GETH_GETH0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038584u)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR1.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR1.
*/
#define SRC_GETH1 (SRC_GETH_GETH0_SR1)

/** \brief 588, GETH Service Request 2 */
#define SRC_GETH_GETH0_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038588u)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR2.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR2.
*/
#define SRC_GETH2 (SRC_GETH_GETH0_SR2)

/** \brief 58C, GETH Service Request 3 */
#define SRC_GETH_GETH0_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003858Cu)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR3.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR3.
*/
#define SRC_GETH3 (SRC_GETH_GETH0_SR3)

/** \brief 590, GETH Service Request 4 */
#define SRC_GETH_GETH0_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038590u)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR4.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR4.
*/
#define SRC_GETH4 (SRC_GETH_GETH0_SR4)

/** \brief 594, GETH Service Request 5 */
#define SRC_GETH_GETH0_SR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038594u)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR5.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR5.
*/
#define SRC_GETH5 (SRC_GETH_GETH0_SR5)

/** \brief 598, GETH Service Request 6 */
#define SRC_GETH_GETH0_SR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038598u)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR6.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR6.
*/
#define SRC_GETH6 (SRC_GETH_GETH0_SR6)

/** \brief 59C, GETH Service Request 7 */
#define SRC_GETH_GETH0_SR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003859Cu)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR7.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR7.
*/
#define SRC_GETH7 (SRC_GETH_GETH0_SR7)

/** \brief 5A0, GETH Service Request 8 */
#define SRC_GETH_GETH0_SR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385A0u)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR8.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR8.
*/
#define SRC_GETH8 (SRC_GETH_GETH0_SR8)

/** \brief 5A4, GETH Service Request 9 */
#define SRC_GETH_GETH0_SR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385A4u)
/** Alias (User Manual Name) for SRC_GETH_GETH0_SR9.
* To use register names with standard convension, please use SRC_GETH_GETH0_SR9.
*/
#define SRC_GETH9 (SRC_GETH_GETH0_SR9)

/** \brief 5B0, CAN0 Service Request 0 */
#define SRC_CAN_CAN0_INT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385B0u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT0.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT0.
*/
#define SRC_CAN0INT0 (SRC_CAN_CAN0_INT0)

/** \brief 5B4, CAN0 Service Request 1 */
#define SRC_CAN_CAN0_INT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385B4u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT1.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT1.
*/
#define SRC_CAN0INT1 (SRC_CAN_CAN0_INT1)

/** \brief 5B8, CAN0 Service Request 2 */
#define SRC_CAN_CAN0_INT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385B8u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT2.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT2.
*/
#define SRC_CAN0INT2 (SRC_CAN_CAN0_INT2)

/** \brief 5BC, CAN0 Service Request 3 */
#define SRC_CAN_CAN0_INT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385BCu)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT3.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT3.
*/
#define SRC_CAN0INT3 (SRC_CAN_CAN0_INT3)

/** \brief 5C0, CAN0 Service Request 4 */
#define SRC_CAN_CAN0_INT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385C0u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT4.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT4.
*/
#define SRC_CAN0INT4 (SRC_CAN_CAN0_INT4)

/** \brief 5C4, CAN0 Service Request 5 */
#define SRC_CAN_CAN0_INT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385C4u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT5.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT5.
*/
#define SRC_CAN0INT5 (SRC_CAN_CAN0_INT5)

/** \brief 5C8, CAN0 Service Request 6 */
#define SRC_CAN_CAN0_INT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385C8u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT6.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT6.
*/
#define SRC_CAN0INT6 (SRC_CAN_CAN0_INT6)

/** \brief 5CC, CAN0 Service Request 7 */
#define SRC_CAN_CAN0_INT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385CCu)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT7.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT7.
*/
#define SRC_CAN0INT7 (SRC_CAN_CAN0_INT7)

/** \brief 5D0, CAN0 Service Request 8 */
#define SRC_CAN_CAN0_INT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385D0u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT8.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT8.
*/
#define SRC_CAN0INT8 (SRC_CAN_CAN0_INT8)

/** \brief 5D4, CAN0 Service Request 9 */
#define SRC_CAN_CAN0_INT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385D4u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT9.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT9.
*/
#define SRC_CAN0INT9 (SRC_CAN_CAN0_INT9)

/** \brief 5D8, CAN0 Service Request 10 */
#define SRC_CAN_CAN0_INT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385D8u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT10.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT10.
*/
#define SRC_CAN0INT10 (SRC_CAN_CAN0_INT10)

/** \brief 5DC, CAN0 Service Request 11 */
#define SRC_CAN_CAN0_INT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385DCu)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT11.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT11.
*/
#define SRC_CAN0INT11 (SRC_CAN_CAN0_INT11)

/** \brief 5E0, CAN0 Service Request 12 */
#define SRC_CAN_CAN0_INT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385E0u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT12.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT12.
*/
#define SRC_CAN0INT12 (SRC_CAN_CAN0_INT12)

/** \brief 5E4, CAN0 Service Request 13 */
#define SRC_CAN_CAN0_INT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385E4u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT13.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT13.
*/
#define SRC_CAN0INT13 (SRC_CAN_CAN0_INT13)

/** \brief 5E8, CAN0 Service Request 14 */
#define SRC_CAN_CAN0_INT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385E8u)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT14.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT14.
*/
#define SRC_CAN0INT14 (SRC_CAN_CAN0_INT14)

/** \brief 5EC, CAN0 Service Request 15 */
#define SRC_CAN_CAN0_INT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385ECu)
/** Alias (User Manual Name) for SRC_CAN_CAN0_INT15.
* To use register names with standard convension, please use SRC_CAN_CAN0_INT15.
*/
#define SRC_CAN0INT15 (SRC_CAN_CAN0_INT15)

/** \brief 5F0, CAN1 Service Request 0 */
#define SRC_CAN_CAN1_INT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385F0u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT0.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT0.
*/
#define SRC_CAN1INT0 (SRC_CAN_CAN1_INT0)

/** \brief 5F4, CAN1 Service Request 1 */
#define SRC_CAN_CAN1_INT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385F4u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT1.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT1.
*/
#define SRC_CAN1INT1 (SRC_CAN_CAN1_INT1)

/** \brief 5F8, CAN1 Service Request 2 */
#define SRC_CAN_CAN1_INT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385F8u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT2.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT2.
*/
#define SRC_CAN1INT2 (SRC_CAN_CAN1_INT2)

/** \brief 5FC, CAN1 Service Request 3 */
#define SRC_CAN_CAN1_INT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00385FCu)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT3.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT3.
*/
#define SRC_CAN1INT3 (SRC_CAN_CAN1_INT3)

/** \brief 600, CAN1 Service Request 4 */
#define SRC_CAN_CAN1_INT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038600u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT4.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT4.
*/
#define SRC_CAN1INT4 (SRC_CAN_CAN1_INT4)

/** \brief 604, CAN1 Service Request 5 */
#define SRC_CAN_CAN1_INT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038604u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT5.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT5.
*/
#define SRC_CAN1INT5 (SRC_CAN_CAN1_INT5)

/** \brief 608, CAN1 Service Request 6 */
#define SRC_CAN_CAN1_INT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038608u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT6.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT6.
*/
#define SRC_CAN1INT6 (SRC_CAN_CAN1_INT6)

/** \brief 60C, CAN1 Service Request 7 */
#define SRC_CAN_CAN1_INT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003860Cu)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT7.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT7.
*/
#define SRC_CAN1INT7 (SRC_CAN_CAN1_INT7)

/** \brief 610, CAN1 Service Request 8 */
#define SRC_CAN_CAN1_INT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038610u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT8.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT8.
*/
#define SRC_CAN1INT8 (SRC_CAN_CAN1_INT8)

/** \brief 614, CAN1 Service Request 9 */
#define SRC_CAN_CAN1_INT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038614u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT9.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT9.
*/
#define SRC_CAN1INT9 (SRC_CAN_CAN1_INT9)

/** \brief 618, CAN1 Service Request 10 */
#define SRC_CAN_CAN1_INT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038618u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT10.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT10.
*/
#define SRC_CAN1INT10 (SRC_CAN_CAN1_INT10)

/** \brief 61C, CAN1 Service Request 11 */
#define SRC_CAN_CAN1_INT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003861Cu)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT11.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT11.
*/
#define SRC_CAN1INT11 (SRC_CAN_CAN1_INT11)

/** \brief 620, CAN1 Service Request 12 */
#define SRC_CAN_CAN1_INT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038620u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT12.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT12.
*/
#define SRC_CAN1INT12 (SRC_CAN_CAN1_INT12)

/** \brief 624, CAN1 Service Request 13 */
#define SRC_CAN_CAN1_INT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038624u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT13.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT13.
*/
#define SRC_CAN1INT13 (SRC_CAN_CAN1_INT13)

/** \brief 628, CAN1 Service Request 14 */
#define SRC_CAN_CAN1_INT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038628u)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT14.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT14.
*/
#define SRC_CAN1INT14 (SRC_CAN_CAN1_INT14)

/** \brief 62C, CAN1 Service Request 15 */
#define SRC_CAN_CAN1_INT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003862Cu)
/** Alias (User Manual Name) for SRC_CAN_CAN1_INT15.
* To use register names with standard convension, please use SRC_CAN_CAN1_INT15.
*/
#define SRC_CAN1INT15 (SRC_CAN_CAN1_INT15)

/** \brief 630, CAN2 Service Request 0 */
#define SRC_CAN_CAN2_INT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038630u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT0.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT0.
*/
#define SRC_CAN2INT0 (SRC_CAN_CAN2_INT0)

/** \brief 634, CAN2 Service Request 1 */
#define SRC_CAN_CAN2_INT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038634u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT1.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT1.
*/
#define SRC_CAN2INT1 (SRC_CAN_CAN2_INT1)

/** \brief 638, CAN2 Service Request 2 */
#define SRC_CAN_CAN2_INT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038638u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT2.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT2.
*/
#define SRC_CAN2INT2 (SRC_CAN_CAN2_INT2)

/** \brief 63C, CAN2 Service Request 3 */
#define SRC_CAN_CAN2_INT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003863Cu)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT3.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT3.
*/
#define SRC_CAN2INT3 (SRC_CAN_CAN2_INT3)

/** \brief 640, CAN2 Service Request 4 */
#define SRC_CAN_CAN2_INT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038640u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT4.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT4.
*/
#define SRC_CAN2INT4 (SRC_CAN_CAN2_INT4)

/** \brief 644, CAN2 Service Request 5 */
#define SRC_CAN_CAN2_INT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038644u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT5.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT5.
*/
#define SRC_CAN2INT5 (SRC_CAN_CAN2_INT5)

/** \brief 648, CAN2 Service Request 6 */
#define SRC_CAN_CAN2_INT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038648u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT6.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT6.
*/
#define SRC_CAN2INT6 (SRC_CAN_CAN2_INT6)

/** \brief 64C, CAN2 Service Request 7 */
#define SRC_CAN_CAN2_INT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003864Cu)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT7.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT7.
*/
#define SRC_CAN2INT7 (SRC_CAN_CAN2_INT7)

/** \brief 650, CAN2 Service Request 8 */
#define SRC_CAN_CAN2_INT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038650u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT8.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT8.
*/
#define SRC_CAN2INT8 (SRC_CAN_CAN2_INT8)

/** \brief 654, CAN2 Service Request 9 */
#define SRC_CAN_CAN2_INT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038654u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT9.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT9.
*/
#define SRC_CAN2INT9 (SRC_CAN_CAN2_INT9)

/** \brief 658, CAN2 Service Request 10 */
#define SRC_CAN_CAN2_INT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038658u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT10.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT10.
*/
#define SRC_CAN2INT10 (SRC_CAN_CAN2_INT10)

/** \brief 65C, CAN2 Service Request 11 */
#define SRC_CAN_CAN2_INT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003865Cu)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT11.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT11.
*/
#define SRC_CAN2INT11 (SRC_CAN_CAN2_INT11)

/** \brief 660, CAN2 Service Request 12 */
#define SRC_CAN_CAN2_INT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038660u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT12.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT12.
*/
#define SRC_CAN2INT12 (SRC_CAN_CAN2_INT12)

/** \brief 664, CAN2 Service Request 13 */
#define SRC_CAN_CAN2_INT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038664u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT13.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT13.
*/
#define SRC_CAN2INT13 (SRC_CAN_CAN2_INT13)

/** \brief 668, CAN2 Service Request 14 */
#define SRC_CAN_CAN2_INT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038668u)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT14.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT14.
*/
#define SRC_CAN2INT14 (SRC_CAN_CAN2_INT14)

/** \brief 66C, CAN2 Service Request 15 */
#define SRC_CAN_CAN2_INT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003866Cu)
/** Alias (User Manual Name) for SRC_CAN_CAN2_INT15.
* To use register names with standard convension, please use SRC_CAN_CAN2_INT15.
*/
#define SRC_CAN2INT15 (SRC_CAN_CAN2_INT15)

/** \brief 670, EVADC Group 0 Service Request 0 */
#define SRC_VADC_G0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038670u)
/** Alias (User Manual Name) for SRC_VADC_G0_SR0.
* To use register names with standard convension, please use SRC_VADC_G0_SR0.
*/
#define SRC_VADCG0SR0 (SRC_VADC_G0_SR0)

/** \brief 674, EVADC Group 0 Service Request 1 */
#define SRC_VADC_G0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038674u)
/** Alias (User Manual Name) for SRC_VADC_G0_SR1.
* To use register names with standard convension, please use SRC_VADC_G0_SR1.
*/
#define SRC_VADCG0SR1 (SRC_VADC_G0_SR1)

/** \brief 678, EVADC Group 0 Service Request 2 */
#define SRC_VADC_G0_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038678u)
/** Alias (User Manual Name) for SRC_VADC_G0_SR2.
* To use register names with standard convension, please use SRC_VADC_G0_SR2.
*/
#define SRC_VADCG0SR2 (SRC_VADC_G0_SR2)

/** \brief 67C, EVADC Group 0 Service Request 3 */
#define SRC_VADC_G0_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003867Cu)
/** Alias (User Manual Name) for SRC_VADC_G0_SR3.
* To use register names with standard convension, please use SRC_VADC_G0_SR3.
*/
#define SRC_VADCG0SR3 (SRC_VADC_G0_SR3)

/** \brief 680, EVADC Group 1 Service Request 0 */
#define SRC_VADC_G1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038680u)
/** Alias (User Manual Name) for SRC_VADC_G1_SR0.
* To use register names with standard convension, please use SRC_VADC_G1_SR0.
*/
#define SRC_VADCG1SR0 (SRC_VADC_G1_SR0)

/** \brief 684, EVADC Group 1 Service Request 1 */
#define SRC_VADC_G1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038684u)
/** Alias (User Manual Name) for SRC_VADC_G1_SR1.
* To use register names with standard convension, please use SRC_VADC_G1_SR1.
*/
#define SRC_VADCG1SR1 (SRC_VADC_G1_SR1)

/** \brief 688, EVADC Group 1 Service Request 2 */
#define SRC_VADC_G1_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038688u)
/** Alias (User Manual Name) for SRC_VADC_G1_SR2.
* To use register names with standard convension, please use SRC_VADC_G1_SR2.
*/
#define SRC_VADCG1SR2 (SRC_VADC_G1_SR2)

/** \brief 68C, EVADC Group 1 Service Request 3 */
#define SRC_VADC_G1_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003868Cu)
/** Alias (User Manual Name) for SRC_VADC_G1_SR3.
* To use register names with standard convension, please use SRC_VADC_G1_SR3.
*/
#define SRC_VADCG1SR3 (SRC_VADC_G1_SR3)

/** \brief 690, EVADC Group 2 Service Request 0 */
#define SRC_VADC_G2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038690u)
/** Alias (User Manual Name) for SRC_VADC_G2_SR0.
* To use register names with standard convension, please use SRC_VADC_G2_SR0.
*/
#define SRC_VADCG2SR0 (SRC_VADC_G2_SR0)

/** \brief 694, EVADC Group 2 Service Request 1 */
#define SRC_VADC_G2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038694u)
/** Alias (User Manual Name) for SRC_VADC_G2_SR1.
* To use register names with standard convension, please use SRC_VADC_G2_SR1.
*/
#define SRC_VADCG2SR1 (SRC_VADC_G2_SR1)

/** \brief 698, EVADC Group 2 Service Request 2 */
#define SRC_VADC_G2_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038698u)
/** Alias (User Manual Name) for SRC_VADC_G2_SR2.
* To use register names with standard convension, please use SRC_VADC_G2_SR2.
*/
#define SRC_VADCG2SR2 (SRC_VADC_G2_SR2)

/** \brief 69C, EVADC Group 2 Service Request 3 */
#define SRC_VADC_G2_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003869Cu)
/** Alias (User Manual Name) for SRC_VADC_G2_SR3.
* To use register names with standard convension, please use SRC_VADC_G2_SR3.
*/
#define SRC_VADCG2SR3 (SRC_VADC_G2_SR3)

/** \brief 6A0, EVADC Group 3 Service Request 0 */
#define SRC_VADC_G3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386A0u)
/** Alias (User Manual Name) for SRC_VADC_G3_SR0.
* To use register names with standard convension, please use SRC_VADC_G3_SR0.
*/
#define SRC_VADCG3SR0 (SRC_VADC_G3_SR0)

/** \brief 6A4, EVADC Group 3 Service Request 1 */
#define SRC_VADC_G3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386A4u)
/** Alias (User Manual Name) for SRC_VADC_G3_SR1.
* To use register names with standard convension, please use SRC_VADC_G3_SR1.
*/
#define SRC_VADCG3SR1 (SRC_VADC_G3_SR1)

/** \brief 6A8, EVADC Group 3 Service Request 2 */
#define SRC_VADC_G3_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386A8u)
/** Alias (User Manual Name) for SRC_VADC_G3_SR2.
* To use register names with standard convension, please use SRC_VADC_G3_SR2.
*/
#define SRC_VADCG3SR2 (SRC_VADC_G3_SR2)

/** \brief 6AC, EVADC Group 3 Service Request 3 */
#define SRC_VADC_G3_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386ACu)
/** Alias (User Manual Name) for SRC_VADC_G3_SR3.
* To use register names with standard convension, please use SRC_VADC_G3_SR3.
*/
#define SRC_VADCG3SR3 (SRC_VADC_G3_SR3)

/** \brief 6B0, EVADC Group 4 Service Request 0 */
#define SRC_VADC_G4_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386B0u)
/** Alias (User Manual Name) for SRC_VADC_G4_SR0.
* To use register names with standard convension, please use SRC_VADC_G4_SR0.
*/
#define SRC_VADCG4SR0 (SRC_VADC_G4_SR0)

/** \brief 6B4, EVADC Group 4 Service Request 1 */
#define SRC_VADC_G4_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386B4u)
/** Alias (User Manual Name) for SRC_VADC_G4_SR1.
* To use register names with standard convension, please use SRC_VADC_G4_SR1.
*/
#define SRC_VADCG4SR1 (SRC_VADC_G4_SR1)

/** \brief 6B8, EVADC Group 4 Service Request 2 */
#define SRC_VADC_G4_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386B8u)
/** Alias (User Manual Name) for SRC_VADC_G4_SR2.
* To use register names with standard convension, please use SRC_VADC_G4_SR2.
*/
#define SRC_VADCG4SR2 (SRC_VADC_G4_SR2)

/** \brief 6BC, EVADC Group 4 Service Request 3 */
#define SRC_VADC_G4_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386BCu)
/** Alias (User Manual Name) for SRC_VADC_G4_SR3.
* To use register names with standard convension, please use SRC_VADC_G4_SR3.
*/
#define SRC_VADCG4SR3 (SRC_VADC_G4_SR3)

/** \brief 6C0, EVADC Group 5 Service Request 0 */
#define SRC_VADC_G5_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386C0u)
/** Alias (User Manual Name) for SRC_VADC_G5_SR0.
* To use register names with standard convension, please use SRC_VADC_G5_SR0.
*/
#define SRC_VADCG5SR0 (SRC_VADC_G5_SR0)

/** \brief 6C4, EVADC Group 5 Service Request 1 */
#define SRC_VADC_G5_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386C4u)
/** Alias (User Manual Name) for SRC_VADC_G5_SR1.
* To use register names with standard convension, please use SRC_VADC_G5_SR1.
*/
#define SRC_VADCG5SR1 (SRC_VADC_G5_SR1)

/** \brief 6C8, EVADC Group 5 Service Request 2 */
#define SRC_VADC_G5_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386C8u)
/** Alias (User Manual Name) for SRC_VADC_G5_SR2.
* To use register names with standard convension, please use SRC_VADC_G5_SR2.
*/
#define SRC_VADCG5SR2 (SRC_VADC_G5_SR2)

/** \brief 6CC, EVADC Group 5 Service Request 3 */
#define SRC_VADC_G5_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386CCu)
/** Alias (User Manual Name) for SRC_VADC_G5_SR3.
* To use register names with standard convension, please use SRC_VADC_G5_SR3.
*/
#define SRC_VADCG5SR3 (SRC_VADC_G5_SR3)

/** \brief 6D0, EVADC Group 6 Service Request 0 */
#define SRC_VADC_G6_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386D0u)
/** Alias (User Manual Name) for SRC_VADC_G6_SR0.
* To use register names with standard convension, please use SRC_VADC_G6_SR0.
*/
#define SRC_VADCG6SR0 (SRC_VADC_G6_SR0)

/** \brief 6D4, EVADC Group 6 Service Request 1 */
#define SRC_VADC_G6_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386D4u)
/** Alias (User Manual Name) for SRC_VADC_G6_SR1.
* To use register names with standard convension, please use SRC_VADC_G6_SR1.
*/
#define SRC_VADCG6SR1 (SRC_VADC_G6_SR1)

/** \brief 6D8, EVADC Group 6 Service Request 2 */
#define SRC_VADC_G6_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386D8u)
/** Alias (User Manual Name) for SRC_VADC_G6_SR2.
* To use register names with standard convension, please use SRC_VADC_G6_SR2.
*/
#define SRC_VADCG6SR2 (SRC_VADC_G6_SR2)

/** \brief 6DC, EVADC Group 6 Service Request 3 */
#define SRC_VADC_G6_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386DCu)
/** Alias (User Manual Name) for SRC_VADC_G6_SR3.
* To use register names with standard convension, please use SRC_VADC_G6_SR3.
*/
#define SRC_VADCG6SR3 (SRC_VADC_G6_SR3)

/** \brief 6E0, EVADC Group 7 Service Request 0 */
#define SRC_VADC_G7_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386E0u)
/** Alias (User Manual Name) for SRC_VADC_G7_SR0.
* To use register names with standard convension, please use SRC_VADC_G7_SR0.
*/
#define SRC_VADCG7SR0 (SRC_VADC_G7_SR0)

/** \brief 6E4, EVADC Group 7 Service Request 1 */
#define SRC_VADC_G7_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386E4u)
/** Alias (User Manual Name) for SRC_VADC_G7_SR1.
* To use register names with standard convension, please use SRC_VADC_G7_SR1.
*/
#define SRC_VADCG7SR1 (SRC_VADC_G7_SR1)

/** \brief 6E8, EVADC Group 7 Service Request 2 */
#define SRC_VADC_G7_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386E8u)
/** Alias (User Manual Name) for SRC_VADC_G7_SR2.
* To use register names with standard convension, please use SRC_VADC_G7_SR2.
*/
#define SRC_VADCG7SR2 (SRC_VADC_G7_SR2)

/** \brief 6EC, EVADC Group 7 Service Request 3 */
#define SRC_VADC_G7_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386ECu)
/** Alias (User Manual Name) for SRC_VADC_G7_SR3.
* To use register names with standard convension, please use SRC_VADC_G7_SR3.
*/
#define SRC_VADCG7SR3 (SRC_VADC_G7_SR3)

/** \brief 6F0, EVADC Group 8 Service Request 0 */
#define SRC_VADC_G8_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386F0u)
/** Alias (User Manual Name) for SRC_VADC_G8_SR0.
* To use register names with standard convension, please use SRC_VADC_G8_SR0.
*/
#define SRC_VADCG8SR0 (SRC_VADC_G8_SR0)

/** \brief 6F4, EVADC Group 8 Service Request 1 */
#define SRC_VADC_G8_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386F4u)
/** Alias (User Manual Name) for SRC_VADC_G8_SR1.
* To use register names with standard convension, please use SRC_VADC_G8_SR1.
*/
#define SRC_VADCG8SR1 (SRC_VADC_G8_SR1)

/** \brief 6F8, EVADC Group 8 Service Request 2 */
#define SRC_VADC_G8_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386F8u)
/** Alias (User Manual Name) for SRC_VADC_G8_SR2.
* To use register names with standard convension, please use SRC_VADC_G8_SR2.
*/
#define SRC_VADCG8SR2 (SRC_VADC_G8_SR2)

/** \brief 6FC, EVADC Group 8 Service Request 3 */
#define SRC_VADC_G8_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00386FCu)
/** Alias (User Manual Name) for SRC_VADC_G8_SR3.
* To use register names with standard convension, please use SRC_VADC_G8_SR3.
*/
#define SRC_VADCG8SR3 (SRC_VADC_G8_SR3)

/** \brief 700, EVADC Group 9 Service Request 0 */
#define SRC_VADC_G9_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038700u)
/** Alias (User Manual Name) for SRC_VADC_G9_SR0.
* To use register names with standard convension, please use SRC_VADC_G9_SR0.
*/
#define SRC_VADCG9SR0 (SRC_VADC_G9_SR0)

/** \brief 704, EVADC Group 9 Service Request 1 */
#define SRC_VADC_G9_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038704u)
/** Alias (User Manual Name) for SRC_VADC_G9_SR1.
* To use register names with standard convension, please use SRC_VADC_G9_SR1.
*/
#define SRC_VADCG9SR1 (SRC_VADC_G9_SR1)

/** \brief 708, EVADC Group 9 Service Request 2 */
#define SRC_VADC_G9_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038708u)
/** Alias (User Manual Name) for SRC_VADC_G9_SR2.
* To use register names with standard convension, please use SRC_VADC_G9_SR2.
*/
#define SRC_VADCG9SR2 (SRC_VADC_G9_SR2)

/** \brief 70C, EVADC Group 9 Service Request 3 */
#define SRC_VADC_G9_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003870Cu)
/** Alias (User Manual Name) for SRC_VADC_G9_SR3.
* To use register names with standard convension, please use SRC_VADC_G9_SR3.
*/
#define SRC_VADCG9SR3 (SRC_VADC_G9_SR3)

/** \brief 710, EVADC Group 10 Service Request 0 */
#define SRC_VADC_G10_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038710u)
/** Alias (User Manual Name) for SRC_VADC_G10_SR0.
* To use register names with standard convension, please use SRC_VADC_G10_SR0.
*/
#define SRC_VADCG10SR0 (SRC_VADC_G10_SR0)

/** \brief 714, EVADC Group 10 Service Request 1 */
#define SRC_VADC_G10_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038714u)
/** Alias (User Manual Name) for SRC_VADC_G10_SR1.
* To use register names with standard convension, please use SRC_VADC_G10_SR1.
*/
#define SRC_VADCG10SR1 (SRC_VADC_G10_SR1)

/** \brief 718, EVADC Group 10 Service Request 2 */
#define SRC_VADC_G10_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038718u)
/** Alias (User Manual Name) for SRC_VADC_G10_SR2.
* To use register names with standard convension, please use SRC_VADC_G10_SR2.
*/
#define SRC_VADCG10SR2 (SRC_VADC_G10_SR2)

/** \brief 71C, EVADC Group 10 Service Request 3 */
#define SRC_VADC_G10_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003871Cu)
/** Alias (User Manual Name) for SRC_VADC_G10_SR3.
* To use register names with standard convension, please use SRC_VADC_G10_SR3.
*/
#define SRC_VADCG10SR3 (SRC_VADC_G10_SR3)

/** \brief 720, EVADC Group 11 Service Request 0 */
#define SRC_VADC_G11_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038720u)
/** Alias (User Manual Name) for SRC_VADC_G11_SR0.
* To use register names with standard convension, please use SRC_VADC_G11_SR0.
*/
#define SRC_VADCG11SR0 (SRC_VADC_G11_SR0)

/** \brief 724, EVADC Group 11 Service Request 1 */
#define SRC_VADC_G11_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038724u)
/** Alias (User Manual Name) for SRC_VADC_G11_SR1.
* To use register names with standard convension, please use SRC_VADC_G11_SR1.
*/
#define SRC_VADCG11SR1 (SRC_VADC_G11_SR1)

/** \brief 728, EVADC Group 11 Service Request 2 */
#define SRC_VADC_G11_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038728u)
/** Alias (User Manual Name) for SRC_VADC_G11_SR2.
* To use register names with standard convension, please use SRC_VADC_G11_SR2.
*/
#define SRC_VADCG11SR2 (SRC_VADC_G11_SR2)

/** \brief 72C, EVADC Group 11 Service Request 3 */
#define SRC_VADC_G11_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003872Cu)
/** Alias (User Manual Name) for SRC_VADC_G11_SR3.
* To use register names with standard convension, please use SRC_VADC_G11_SR3.
*/
#define SRC_VADCG11SR3 (SRC_VADC_G11_SR3)

/** \brief 730, EVADC Fast Compare 0 Service Request SR0 */
#define SRC_VADC_FC0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038730u)
/** Alias (User Manual Name) for SRC_VADC_FC0_SR0.
* To use register names with standard convension, please use SRC_VADC_FC0_SR0.
*/
#define SRC_VADCFC0SR0 (SRC_VADC_FC0_SR0)

/** \brief 734, EVADC Fast Compare 1 Service Request SR0 */
#define SRC_VADC_FC1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038734u)
/** Alias (User Manual Name) for SRC_VADC_FC1_SR0.
* To use register names with standard convension, please use SRC_VADC_FC1_SR0.
*/
#define SRC_VADCFC1SR0 (SRC_VADC_FC1_SR0)

/** \brief 738, EVADC Fast Compare 2 Service Request SR0 */
#define SRC_VADC_FC2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038738u)
/** Alias (User Manual Name) for SRC_VADC_FC2_SR0.
* To use register names with standard convension, please use SRC_VADC_FC2_SR0.
*/
#define SRC_VADCFC2SR0 (SRC_VADC_FC2_SR0)

/** \brief 73C, EVADC Fast Compare 3 Service Request SR0 */
#define SRC_VADC_FC3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003873Cu)
/** Alias (User Manual Name) for SRC_VADC_FC3_SR0.
* To use register names with standard convension, please use SRC_VADC_FC3_SR0.
*/
#define SRC_VADCFC3SR0 (SRC_VADC_FC3_SR0)

/** \brief 750, EVADC Common Group 0 Service Request 0 */
#define SRC_VADC_CG0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038750u)
/** Alias (User Manual Name) for SRC_VADC_CG0_SR0.
* To use register names with standard convension, please use SRC_VADC_CG0_SR0.
*/
#define SRC_VADCCG0SR0 (SRC_VADC_CG0_SR0)

/** \brief 754, EVADC Common Group 0 Service Request 1 */
#define SRC_VADC_CG0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038754u)
/** Alias (User Manual Name) for SRC_VADC_CG0_SR1.
* To use register names with standard convension, please use SRC_VADC_CG0_SR1.
*/
#define SRC_VADCCG0SR1 (SRC_VADC_CG0_SR1)

/** \brief 758, EVADC Common Group 0 Service Request 2 */
#define SRC_VADC_CG0_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038758u)
/** Alias (User Manual Name) for SRC_VADC_CG0_SR2.
* To use register names with standard convension, please use SRC_VADC_CG0_SR2.
*/
#define SRC_VADCCG0SR2 (SRC_VADC_CG0_SR2)

/** \brief 75C, EVADC Common Group 0 Service Request 3 */
#define SRC_VADC_CG0_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003875Cu)
/** Alias (User Manual Name) for SRC_VADC_CG0_SR3.
* To use register names with standard convension, please use SRC_VADC_CG0_SR3.
*/
#define SRC_VADCCG0SR3 (SRC_VADC_CG0_SR3)

/** \brief 760, EVADC Common Group 1 Service Request 0 */
#define SRC_VADC_CG1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038760u)
/** Alias (User Manual Name) for SRC_VADC_CG1_SR0.
* To use register names with standard convension, please use SRC_VADC_CG1_SR0.
*/
#define SRC_VADCCG1SR0 (SRC_VADC_CG1_SR0)

/** \brief 764, EVADC Common Group 1 Service Request 1 */
#define SRC_VADC_CG1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038764u)
/** Alias (User Manual Name) for SRC_VADC_CG1_SR1.
* To use register names with standard convension, please use SRC_VADC_CG1_SR1.
*/
#define SRC_VADCCG1SR1 (SRC_VADC_CG1_SR1)

/** \brief 768, EVADC Common Group 1 Service Request 2 */
#define SRC_VADC_CG1_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038768u)
/** Alias (User Manual Name) for SRC_VADC_CG1_SR2.
* To use register names with standard convension, please use SRC_VADC_CG1_SR2.
*/
#define SRC_VADCCG1SR2 (SRC_VADC_CG1_SR2)

/** \brief 76C, EVADC Common Group 1 Service Request 3 */
#define SRC_VADC_CG1_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003876Cu)
/** Alias (User Manual Name) for SRC_VADC_CG1_SR3.
* To use register names with standard convension, please use SRC_VADC_CG1_SR3.
*/
#define SRC_VADCCG1SR3 (SRC_VADC_CG1_SR3)

/** \brief 770, DSADC SRM0 Service Request */
#define SRC_DSADC_DSADC0_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038770u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC0_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC0_SRM.
*/
#define SRC_DSADCSRM0 (SRC_DSADC_DSADC0_SRM)

/** \brief 774, DSADC SRA0 Service Request */
#define SRC_DSADC_DSADC0_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038774u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC0_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC0_SRA.
*/
#define SRC_DSADCSRA0 (SRC_DSADC_DSADC0_SRA)

/** \brief 778, DSADC SRM1 Service Request */
#define SRC_DSADC_DSADC1_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038778u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC1_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC1_SRM.
*/
#define SRC_DSADCSRM1 (SRC_DSADC_DSADC1_SRM)

/** \brief 77C, DSADC SRA1 Service Request */
#define SRC_DSADC_DSADC1_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003877Cu)
/** Alias (User Manual Name) for SRC_DSADC_DSADC1_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC1_SRA.
*/
#define SRC_DSADCSRA1 (SRC_DSADC_DSADC1_SRA)

/** \brief 780, DSADC SRM2 Service Request */
#define SRC_DSADC_DSADC2_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038780u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC2_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC2_SRM.
*/
#define SRC_DSADCSRM2 (SRC_DSADC_DSADC2_SRM)

/** \brief 784, DSADC SRA2 Service Request */
#define SRC_DSADC_DSADC2_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038784u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC2_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC2_SRA.
*/
#define SRC_DSADCSRA2 (SRC_DSADC_DSADC2_SRA)

/** \brief 788, DSADC SRM3 Service Request */
#define SRC_DSADC_DSADC3_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038788u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC3_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC3_SRM.
*/
#define SRC_DSADCSRM3 (SRC_DSADC_DSADC3_SRM)

/** \brief 78C, DSADC SRA3 Service Request */
#define SRC_DSADC_DSADC3_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003878Cu)
/** Alias (User Manual Name) for SRC_DSADC_DSADC3_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC3_SRA.
*/
#define SRC_DSADCSRA3 (SRC_DSADC_DSADC3_SRA)

/** \brief 790, DSADC SRM4 Service Request */
#define SRC_DSADC_DSADC4_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038790u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC4_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC4_SRM.
*/
#define SRC_DSADCSRM4 (SRC_DSADC_DSADC4_SRM)

/** \brief 794, DSADC SRA4 Service Request */
#define SRC_DSADC_DSADC4_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038794u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC4_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC4_SRA.
*/
#define SRC_DSADCSRA4 (SRC_DSADC_DSADC4_SRA)

/** \brief 798, DSADC SRM5 Service Request */
#define SRC_DSADC_DSADC5_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038798u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC5_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC5_SRM.
*/
#define SRC_DSADCSRM5 (SRC_DSADC_DSADC5_SRM)

/** \brief 79C, DSADC SRA5 Service Request */
#define SRC_DSADC_DSADC5_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003879Cu)
/** Alias (User Manual Name) for SRC_DSADC_DSADC5_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC5_SRA.
*/
#define SRC_DSADCSRA5 (SRC_DSADC_DSADC5_SRA)

/** \brief 7A0, DSADC SRM6 Service Request */
#define SRC_DSADC_DSADC6_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387A0u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC6_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC6_SRM.
*/
#define SRC_DSADCSRM6 (SRC_DSADC_DSADC6_SRM)

/** \brief 7A4, DSADC SRA6 Service Request */
#define SRC_DSADC_DSADC6_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387A4u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC6_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC6_SRA.
*/
#define SRC_DSADCSRA6 (SRC_DSADC_DSADC6_SRA)

/** \brief 7A8, DSADC SRM7 Service Request */
#define SRC_DSADC_DSADC7_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387A8u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC7_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC7_SRM.
*/
#define SRC_DSADCSRM7 (SRC_DSADC_DSADC7_SRM)

/** \brief 7AC, DSADC SRA7 Service Request */
#define SRC_DSADC_DSADC7_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387ACu)
/** Alias (User Manual Name) for SRC_DSADC_DSADC7_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC7_SRA.
*/
#define SRC_DSADCSRA7 (SRC_DSADC_DSADC7_SRA)

/** \brief 7B0, DSADC SRM8 Service Request */
#define SRC_DSADC_DSADC8_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387B0u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC8_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC8_SRM.
*/
#define SRC_DSADCSRM8 (SRC_DSADC_DSADC8_SRM)

/** \brief 7B4, DSADC SRA8 Service Request */
#define SRC_DSADC_DSADC8_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387B4u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC8_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC8_SRA.
*/
#define SRC_DSADCSRA8 (SRC_DSADC_DSADC8_SRA)

/** \brief 7B8, DSADC SRM9 Service Request */
#define SRC_DSADC_DSADC9_SRM /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387B8u)
/** Alias (User Manual Name) for SRC_DSADC_DSADC9_SRM.
* To use register names with standard convension, please use SRC_DSADC_DSADC9_SRM.
*/
#define SRC_DSADCSRM9 (SRC_DSADC_DSADC9_SRM)

/** \brief 7BC, DSADC SRA9 Service Request */
#define SRC_DSADC_DSADC9_SRA /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387BCu)
/** Alias (User Manual Name) for SRC_DSADC_DSADC9_SRA.
* To use register names with standard convension, please use SRC_DSADC_DSADC9_SRA.
*/
#define SRC_DSADCSRA9 (SRC_DSADC_DSADC9_SRA)

/** \brief 7E0, ASCLIN12 Transmit Service Request */
#define SRC_ASCLIN12_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387E0u)
/** Alias (User Manual Name) for SRC_ASCLIN12_TX.
* To use register names with standard convension, please use SRC_ASCLIN12_TX.
*/
#define SRC_ASCLIN12TX (SRC_ASCLIN12_TX)

/** \brief 7E4, ASCLIN12 Receive Service Request */
#define SRC_ASCLIN12_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387E4u)
/** Alias (User Manual Name) for SRC_ASCLIN12_RX.
* To use register names with standard convension, please use SRC_ASCLIN12_RX.
*/
#define SRC_ASCLIN12RX (SRC_ASCLIN12_RX)

/** \brief 7E8, ASCLIN12 Error Service Request */
#define SRC_ASCLIN12_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387E8u)
/** Alias (User Manual Name) for SRC_ASCLIN12_ERR.
* To use register names with standard convension, please use SRC_ASCLIN12_ERR.
*/
#define SRC_ASCLIN12ERR (SRC_ASCLIN12_ERR)

/** \brief 7EC, ASCLIN13 Transmit Service Request */
#define SRC_ASCLIN13_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387ECu)
/** Alias (User Manual Name) for SRC_ASCLIN13_TX.
* To use register names with standard convension, please use SRC_ASCLIN13_TX.
*/
#define SRC_ASCLIN13TX (SRC_ASCLIN13_TX)

/** \brief 7F0, ASCLIN13 Receive Service Request */
#define SRC_ASCLIN13_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387F0u)
/** Alias (User Manual Name) for SRC_ASCLIN13_RX.
* To use register names with standard convension, please use SRC_ASCLIN13_RX.
*/
#define SRC_ASCLIN13RX (SRC_ASCLIN13_RX)

/** \brief 7F4, ASCLIN13 Error Service Request */
#define SRC_ASCLIN13_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00387F4u)
/** Alias (User Manual Name) for SRC_ASCLIN13_ERR.
* To use register names with standard convension, please use SRC_ASCLIN13_ERR.
*/
#define SRC_ASCLIN13ERR (SRC_ASCLIN13_ERR)

/** \brief 800, E-RAY 0 Service Request 0 */
#define SRC_ERAY_ERAY0_INT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038800u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_INT0.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_INT0.
*/
#define SRC_ERAY0INT0 (SRC_ERAY_ERAY0_INT0)

/** \brief 804, E-RAY 0 Service Request 1 */
#define SRC_ERAY_ERAY0_INT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038804u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_INT1.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_INT1.
*/
#define SRC_ERAY0INT1 (SRC_ERAY_ERAY0_INT1)

/** \brief 808, E-RAY 0 Timer Interrupt 0 Service Request */
#define SRC_ERAY_ERAY0_TINT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038808u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_TINT0.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_TINT0.
*/
#define SRC_ERAY0TINT0 (SRC_ERAY_ERAY0_TINT0)

/** \brief 80C, E-RAY 0 Timer Interrupt 1 Service Request */
#define SRC_ERAY_ERAY0_TINT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003880Cu)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_TINT1.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_TINT1.
*/
#define SRC_ERAY0TINT1 (SRC_ERAY_ERAY0_TINT1)

/** \brief 810, E-RAY 0 New Data 0 Service Request */
#define SRC_ERAY_ERAY0_NDAT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038810u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_NDAT0.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_NDAT0.
*/
#define SRC_ERAY0NDAT0 (SRC_ERAY_ERAY0_NDAT0)

/** \brief 814, E-RAY 0 New Data 1 Service Request */
#define SRC_ERAY_ERAY0_NDAT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038814u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_NDAT1.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_NDAT1.
*/
#define SRC_ERAY0NDAT1 (SRC_ERAY_ERAY0_NDAT1)

/** \brief 818, E-RAY 0 Message Buffer Status Changed 0 Service Request */
#define SRC_ERAY_ERAY0_MBSC0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038818u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_MBSC0.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_MBSC0.
*/
#define SRC_ERAY0MBSC0 (SRC_ERAY_ERAY0_MBSC0)

/** \brief 81C, E-RAY 0 Message Buffer Status Changed 1 Service Request */
#define SRC_ERAY_ERAY0_MBSC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003881Cu)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_MBSC1.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_MBSC1.
*/
#define SRC_ERAY0MBSC1 (SRC_ERAY_ERAY0_MBSC1)

/** \brief 820, E-RAY 0 Output Buffer Busy */
#define SRC_ERAY_ERAY0_OBUSY /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038820u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_OBUSY.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_OBUSY.
*/
#define SRC_ERAY0OBUSY (SRC_ERAY_ERAY0_OBUSY)

/** \brief 824, E-RAY 0 Input Buffer Busy */
#define SRC_ERAY_ERAY0_IBUSY /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038824u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY0_IBUSY.
* To use register names with standard convension, please use SRC_ERAY_ERAY0_IBUSY.
*/
#define SRC_ERAY0IBUSY (SRC_ERAY_ERAY0_IBUSY)

/** \brief 830, E-RAY 1 Service Request 0 */
#define SRC_ERAY_ERAY1_INT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038830u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_INT0.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_INT0.
*/
#define SRC_ERAY1INT0 (SRC_ERAY_ERAY1_INT0)

/** \brief 834, E-RAY 1 Service Request 1 */
#define SRC_ERAY_ERAY1_INT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038834u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_INT1.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_INT1.
*/
#define SRC_ERAY1INT1 (SRC_ERAY_ERAY1_INT1)

/** \brief 838, E-RAY 1 Timer Interrupt 0 Service Request */
#define SRC_ERAY_ERAY1_TINT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038838u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_TINT0.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_TINT0.
*/
#define SRC_ERAY1TINT0 (SRC_ERAY_ERAY1_TINT0)

/** \brief 83C, E-RAY 1 Timer Interrupt 1 Service Request */
#define SRC_ERAY_ERAY1_TINT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003883Cu)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_TINT1.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_TINT1.
*/
#define SRC_ERAY1TINT1 (SRC_ERAY_ERAY1_TINT1)

/** \brief 840, E-RAY 1 New Data 0 Service Request */
#define SRC_ERAY_ERAY1_NDAT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038840u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_NDAT0.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_NDAT0.
*/
#define SRC_ERAY1NDAT0 (SRC_ERAY_ERAY1_NDAT0)

/** \brief 844, E-RAY 1 New Data 1 Service Request */
#define SRC_ERAY_ERAY1_NDAT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038844u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_NDAT1.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_NDAT1.
*/
#define SRC_ERAY1NDAT1 (SRC_ERAY_ERAY1_NDAT1)

/** \brief 848, E-RAY 1 Message Buffer Status Changed 0 Service Request */
#define SRC_ERAY_ERAY1_MBSC0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038848u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_MBSC0.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_MBSC0.
*/
#define SRC_ERAY1MBSC0 (SRC_ERAY_ERAY1_MBSC0)

/** \brief 84C, E-RAY 1 Message Buffer Status Changed 1 Service Request */
#define SRC_ERAY_ERAY1_MBSC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003884Cu)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_MBSC1.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_MBSC1.
*/
#define SRC_ERAY1MBSC1 (SRC_ERAY_ERAY1_MBSC1)

/** \brief 850, E-RAY 1 Output Buffer Busy */
#define SRC_ERAY_ERAY1_OBUSY /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038850u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_OBUSY.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_OBUSY.
*/
#define SRC_ERAY1OBUSY (SRC_ERAY_ERAY1_OBUSY)

/** \brief 854, E-RAY 1 Input Buffer Busy */
#define SRC_ERAY_ERAY1_IBUSY /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038854u)
/** Alias (User Manual Name) for SRC_ERAY_ERAY1_IBUSY.
* To use register names with standard convension, please use SRC_ERAY_ERAY1_IBUSY.
*/
#define SRC_ERAY1IBUSY (SRC_ERAY_ERAY1_IBUSY)

/** \brief 860, DMU Host Service Request */
#define SRC_DMUHOST /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038860u)

/** \brief 864, DMU FSI Service Request */
#define SRC_DMUFSI /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038864u)

/** \brief 870, HSM Service Request 0 */
#define SRC_HSM_HSM0_HSM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038870u)
/** Alias (User Manual Name) for SRC_HSM_HSM0_HSM0.
* To use register names with standard convension, please use SRC_HSM_HSM0_HSM0.
*/
#define SRC_HSM0 (SRC_HSM_HSM0_HSM0)

/** \brief 874, HSM Service Request 1 */
#define SRC_HSM_HSM0_HSM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038874u)
/** Alias (User Manual Name) for SRC_HSM_HSM0_HSM1.
* To use register names with standard convension, please use SRC_HSM_HSM0_HSM1.
*/
#define SRC_HSM1 (SRC_HSM_HSM0_HSM1)

/** \brief 880, SCU ERU Service Request 0 */
#define SRC_SCU_SCUERU0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038880u)
/** Alias (User Manual Name) for SRC_SCU_SCUERU0.
* To use register names with standard convension, please use SRC_SCU_SCUERU0.
*/
#define SRC_SCUERU0 (SRC_SCU_SCUERU0)

/** \brief 884, SCU ERU Service Request 1 */
#define SRC_SCU_SCUERU1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038884u)
/** Alias (User Manual Name) for SRC_SCU_SCUERU1.
* To use register names with standard convension, please use SRC_SCU_SCUERU1.
*/
#define SRC_SCUERU1 (SRC_SCU_SCUERU1)

/** \brief 888, SCU ERU Service Request 2 */
#define SRC_SCU_SCUERU2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038888u)
/** Alias (User Manual Name) for SRC_SCU_SCUERU2.
* To use register names with standard convension, please use SRC_SCU_SCUERU2.
*/
#define SRC_SCUERU2 (SRC_SCU_SCUERU2)

/** \brief 88C, SCU ERU Service Request 3 */
#define SRC_SCU_SCUERU3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003888Cu)
/** Alias (User Manual Name) for SRC_SCU_SCUERU3.
* To use register names with standard convension, please use SRC_SCU_SCUERU3.
*/
#define SRC_SCUERU3 (SRC_SCU_SCUERU3)

/** \brief 8AC, PMS DTS Service Request */
#define SRC_PMSDTS /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388ACu)

/** \brief 8B0, Power Management System Service Request 0 */
#define SRC_PMS_PMS0_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388B0u)
/** Alias (User Manual Name) for SRC_PMS_PMS0_SR.
* To use register names with standard convension, please use SRC_PMS_PMS0_SR.
*/
#define SRC_PMS0 (SRC_PMS_PMS0_SR)

/** \brief 8B4, Power Management System Service Request 1 */
#define SRC_PMS_PMS1_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388B4u)
/** Alias (User Manual Name) for SRC_PMS_PMS1_SR.
* To use register names with standard convension, please use SRC_PMS_PMS1_SR.
*/
#define SRC_PMS1 (SRC_PMS_PMS1_SR)

/** \brief 8B8, Power Management System Service Request 2 */
#define SRC_PMS_PMS2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388B8u)
/** Alias (User Manual Name) for SRC_PMS_PMS2_SR.
* To use register names with standard convension, please use SRC_PMS_PMS2_SR.
*/
#define SRC_PMS2 (SRC_PMS_PMS2_SR)

/** \brief 8BC, Power Management System Service Request 3 */
#define SRC_PMS_PMS3_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388BCu)
/** Alias (User Manual Name) for SRC_PMS_PMS3_SR.
* To use register names with standard convension, please use SRC_PMS_PMS3_SR.
*/
#define SRC_PMS3 (SRC_PMS_PMS3_SR)

/** \brief 8C0, Stand By Controller Service Request */
#define SRC_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388C0u)

/** \brief 8D0, SMU Service Request 0 */
#define SRC_SMU_SMU0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388D0u)
/** Alias (User Manual Name) for SRC_SMU_SMU0_SR0.
* To use register names with standard convension, please use SRC_SMU_SMU0_SR0.
*/
#define SRC_SMU0 (SRC_SMU_SMU0_SR0)

/** \brief 8D4, SMU Service Request 1 */
#define SRC_SMU_SMU0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388D4u)
/** Alias (User Manual Name) for SRC_SMU_SMU0_SR1.
* To use register names with standard convension, please use SRC_SMU_SMU0_SR1.
*/
#define SRC_SMU1 (SRC_SMU_SMU0_SR1)

/** \brief 8D8, SMU Service Request 2 */
#define SRC_SMU_SMU0_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388D8u)
/** Alias (User Manual Name) for SRC_SMU_SMU0_SR2.
* To use register names with standard convension, please use SRC_SMU_SMU0_SR2.
*/
#define SRC_SMU2 (SRC_SMU_SMU0_SR2)

/** \brief 8E0, PSI5 Service Request 0 */
#define SRC_PSI5_PSI50_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388E0u)
/** Alias (User Manual Name) for SRC_PSI5_PSI50_SR0.
* To use register names with standard convension, please use SRC_PSI5_PSI50_SR0.
*/
#define SRC_PSI50 (SRC_PSI5_PSI50_SR0)

/** \brief 8E4, PSI5 Service Request 1 */
#define SRC_PSI5_PSI50_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388E4u)
/** Alias (User Manual Name) for SRC_PSI5_PSI50_SR1.
* To use register names with standard convension, please use SRC_PSI5_PSI50_SR1.
*/
#define SRC_PSI51 (SRC_PSI5_PSI50_SR1)

/** \brief 8E8, PSI5 Service Request 2 */
#define SRC_PSI5_PSI50_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388E8u)
/** Alias (User Manual Name) for SRC_PSI5_PSI50_SR2.
* To use register names with standard convension, please use SRC_PSI5_PSI50_SR2.
*/
#define SRC_PSI52 (SRC_PSI5_PSI50_SR2)

/** \brief 8EC, PSI5 Service Request 3 */
#define SRC_PSI5_PSI50_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388ECu)
/** Alias (User Manual Name) for SRC_PSI5_PSI50_SR3.
* To use register names with standard convension, please use SRC_PSI5_PSI50_SR3.
*/
#define SRC_PSI53 (SRC_PSI5_PSI50_SR3)

/** \brief 8F0, PSI5 Service Request 4 */
#define SRC_PSI5_PSI50_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388F0u)
/** Alias (User Manual Name) for SRC_PSI5_PSI50_SR4.
* To use register names with standard convension, please use SRC_PSI5_PSI50_SR4.
*/
#define SRC_PSI54 (SRC_PSI5_PSI50_SR4)

/** \brief 8F4, PSI5 Service Request 5 */
#define SRC_PSI5_PSI50_SR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388F4u)
/** Alias (User Manual Name) for SRC_PSI5_PSI50_SR5.
* To use register names with standard convension, please use SRC_PSI5_PSI50_SR5.
*/
#define SRC_PSI55 (SRC_PSI5_PSI50_SR5)

/** \brief 8F8, PSI5 Service Request 6 */
#define SRC_PSI5_PSI50_SR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388F8u)
/** Alias (User Manual Name) for SRC_PSI5_PSI50_SR6.
* To use register names with standard convension, please use SRC_PSI5_PSI50_SR6.
*/
#define SRC_PSI56 (SRC_PSI5_PSI50_SR6)

/** \brief 8FC, PSI5 Service Request 7 */
#define SRC_PSI5_PSI50_SR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00388FCu)
/** Alias (User Manual Name) for SRC_PSI5_PSI50_SR7.
* To use register names with standard convension, please use SRC_PSI5_PSI50_SR7.
*/
#define SRC_PSI57 (SRC_PSI5_PSI50_SR7)

/** \brief 910, DAM0 Limit 0 Service Request */
#define SRC_DAM_DAM0_LI0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038910u)
/** Alias (User Manual Name) for SRC_DAM_DAM0_LI0.
* To use register names with standard convension, please use SRC_DAM_DAM0_LI0.
*/
#define SRC_DAM0LI0 (SRC_DAM_DAM0_LI0)

/** \brief 914, DAM0 Ready 0 Service Reques */
#define SRC_DAM_DAM0_RI0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038914u)
/** Alias (User Manual Name) for SRC_DAM_DAM0_RI0.
* To use register names with standard convension, please use SRC_DAM_DAM0_RI0.
*/
#define SRC_DAM0RI0 (SRC_DAM_DAM0_RI0)

/** \brief 918, DAM0 Limit 1 Service Request */
#define SRC_DAM_DAM0_LI1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038918u)
/** Alias (User Manual Name) for SRC_DAM_DAM0_LI1.
* To use register names with standard convension, please use SRC_DAM_DAM0_LI1.
*/
#define SRC_DAM0LI1 (SRC_DAM_DAM0_LI1)

/** \brief 91C, DAM0 Ready 1 Service Request */
#define SRC_DAM_DAM0_RI1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003891Cu)
/** Alias (User Manual Name) for SRC_DAM_DAM0_RI1.
* To use register names with standard convension, please use SRC_DAM_DAM0_RI1.
*/
#define SRC_DAM0RI1 (SRC_DAM_DAM0_RI1)

/** \brief 920, DAM0 DMA Ready Service Request */
#define SRC_DAM_DAM0_DR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038920u)
/** Alias (User Manual Name) for SRC_DAM_DAM0_DR.
* To use register names with standard convension, please use SRC_DAM_DAM0_DR.
*/
#define SRC_DAM0DR (SRC_DAM_DAM0_DR)

/** \brief 924, DAM0 Error Service Request */
#define SRC_DAM_DAM0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038924u)
/** Alias (User Manual Name) for SRC_DAM_DAM0_ERR.
* To use register names with standard convension, please use SRC_DAM_DAM0_ERR.
*/
#define SRC_DAM0ERR (SRC_DAM_DAM0_ERR)

/** \brief 950, PSI5-S Service Request 0 */
#define SRC_PSI5S_PSI5S0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038950u)
/** Alias (User Manual Name) for SRC_PSI5S_PSI5S0_SR0.
* To use register names with standard convension, please use SRC_PSI5S_PSI5S0_SR0.
*/
#define SRC_PSI5S0 (SRC_PSI5S_PSI5S0_SR0)

/** \brief 954, PSI5-S Service Request 1 */
#define SRC_PSI5S_PSI5S0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038954u)
/** Alias (User Manual Name) for SRC_PSI5S_PSI5S0_SR1.
* To use register names with standard convension, please use SRC_PSI5S_PSI5S0_SR1.
*/
#define SRC_PSI5S1 (SRC_PSI5S_PSI5S0_SR1)

/** \brief 958, PSI5-S Service Request 2 */
#define SRC_PSI5S_PSI5S0_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038958u)
/** Alias (User Manual Name) for SRC_PSI5S_PSI5S0_SR2.
* To use register names with standard convension, please use SRC_PSI5S_PSI5S0_SR2.
*/
#define SRC_PSI5S2 (SRC_PSI5S_PSI5S0_SR2)

/** \brief 95C, PSI5-S Service Request 3 */
#define SRC_PSI5S_PSI5S0_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003895Cu)
/** Alias (User Manual Name) for SRC_PSI5S_PSI5S0_SR3.
* To use register names with standard convension, please use SRC_PSI5S_PSI5S0_SR3.
*/
#define SRC_PSI5S3 (SRC_PSI5S_PSI5S0_SR3)

/** \brief 960, PSI5-S Service Request 4 */
#define SRC_PSI5S_PSI5S0_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038960u)
/** Alias (User Manual Name) for SRC_PSI5S_PSI5S0_SR4.
* To use register names with standard convension, please use SRC_PSI5S_PSI5S0_SR4.
*/
#define SRC_PSI5S4 (SRC_PSI5S_PSI5S0_SR4)

/** \brief 964, PSI5-S Service Request 5 */
#define SRC_PSI5S_PSI5S0_SR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038964u)
/** Alias (User Manual Name) for SRC_PSI5S_PSI5S0_SR5.
* To use register names with standard convension, please use SRC_PSI5S_PSI5S0_SR5.
*/
#define SRC_PSI5S5 (SRC_PSI5S_PSI5S0_SR5)

/** \brief 968, PSI5-S Service Request 6 */
#define SRC_PSI5S_PSI5S0_SR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038968u)
/** Alias (User Manual Name) for SRC_PSI5S_PSI5S0_SR6.
* To use register names with standard convension, please use SRC_PSI5S_PSI5S0_SR6.
*/
#define SRC_PSI5S6 (SRC_PSI5S_PSI5S0_SR6)

/** \brief 96C, PSI5-S Service Request 7 */
#define SRC_PSI5S_PSI5S0_SR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003896Cu)
/** Alias (User Manual Name) for SRC_PSI5S_PSI5S0_SR7.
* To use register names with standard convension, please use SRC_PSI5S_PSI5S0_SR7.
*/
#define SRC_PSI5S7 (SRC_PSI5S_PSI5S0_SR7)

/** \brief 990, General Purpose Group 0 Service Request 0 */
#define SRC_GPSR_GPSR0_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038990u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR0.
* To use register names with standard convension, please use SRC_GPSR_GPSR0_SR0.
*/
#define SRC_GPSR00 (SRC_GPSR_GPSR0_SR0)

/** \brief 994, General Purpose Group 0 Service Request 1 */
#define SRC_GPSR_GPSR0_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038994u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR1.
* To use register names with standard convension, please use SRC_GPSR_GPSR0_SR1.
*/
#define SRC_GPSR01 (SRC_GPSR_GPSR0_SR1)

/** \brief 998, General Purpose Group 0 Service Request 2 */
#define SRC_GPSR_GPSR0_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038998u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR2.
* To use register names with standard convension, please use SRC_GPSR_GPSR0_SR2.
*/
#define SRC_GPSR02 (SRC_GPSR_GPSR0_SR2)

/** \brief 99C, General Purpose Group 0 Service Request 3 */
#define SRC_GPSR_GPSR0_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003899Cu)
/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR3.
* To use register names with standard convension, please use SRC_GPSR_GPSR0_SR3.
*/
#define SRC_GPSR03 (SRC_GPSR_GPSR0_SR3)

/** \brief 9A0, General Purpose Group 0 Service Request 4 */
#define SRC_GPSR_GPSR0_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389A0u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR4.
* To use register names with standard convension, please use SRC_GPSR_GPSR0_SR4.
*/
#define SRC_GPSR04 (SRC_GPSR_GPSR0_SR4)

/** \brief 9A4, General Purpose Group 0 Service Request 5 */
#define SRC_GPSR_GPSR0_SR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389A4u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR5.
* To use register names with standard convension, please use SRC_GPSR_GPSR0_SR5.
*/
#define SRC_GPSR05 (SRC_GPSR_GPSR0_SR5)

/** \brief 9A8, General Purpose Group 0 Service Request 6 */
#define SRC_GPSR_GPSR0_SR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389A8u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR6.
* To use register names with standard convension, please use SRC_GPSR_GPSR0_SR6.
*/
#define SRC_GPSR06 (SRC_GPSR_GPSR0_SR6)

/** \brief 9AC, General Purpose Group 0 Service Request 7 */
#define SRC_GPSR_GPSR0_SR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389ACu)
/** Alias (User Manual Name) for SRC_GPSR_GPSR0_SR7.
* To use register names with standard convension, please use SRC_GPSR_GPSR0_SR7.
*/
#define SRC_GPSR07 (SRC_GPSR_GPSR0_SR7)

/** \brief 9B0, General Purpose Group 1 Service Request 0 */
#define SRC_GPSR_GPSR1_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389B0u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR1_SR0.
* To use register names with standard convension, please use SRC_GPSR_GPSR1_SR0.
*/
#define SRC_GPSR10 (SRC_GPSR_GPSR1_SR0)

/** \brief 9B4, General Purpose Group 1 Service Request 1 */
#define SRC_GPSR_GPSR1_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389B4u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR1_SR1.
* To use register names with standard convension, please use SRC_GPSR_GPSR1_SR1.
*/
#define SRC_GPSR11 (SRC_GPSR_GPSR1_SR1)

/** \brief 9B8, General Purpose Group 1 Service Request 2 */
#define SRC_GPSR_GPSR1_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389B8u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR1_SR2.
* To use register names with standard convension, please use SRC_GPSR_GPSR1_SR2.
*/
#define SRC_GPSR12 (SRC_GPSR_GPSR1_SR2)

/** \brief 9BC, General Purpose Group 1 Service Request 3 */
#define SRC_GPSR_GPSR1_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389BCu)
/** Alias (User Manual Name) for SRC_GPSR_GPSR1_SR3.
* To use register names with standard convension, please use SRC_GPSR_GPSR1_SR3.
*/
#define SRC_GPSR13 (SRC_GPSR_GPSR1_SR3)

/** \brief 9C0, General Purpose Group 1 Service Request 4 */
#define SRC_GPSR_GPSR1_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389C0u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR1_SR4.
* To use register names with standard convension, please use SRC_GPSR_GPSR1_SR4.
*/
#define SRC_GPSR14 (SRC_GPSR_GPSR1_SR4)

/** \brief 9C4, General Purpose Group 1 Service Request 5 */
#define SRC_GPSR_GPSR1_SR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389C4u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR1_SR5.
* To use register names with standard convension, please use SRC_GPSR_GPSR1_SR5.
*/
#define SRC_GPSR15 (SRC_GPSR_GPSR1_SR5)

/** \brief 9C8, General Purpose Group 1 Service Request 6 */
#define SRC_GPSR_GPSR1_SR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389C8u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR1_SR6.
* To use register names with standard convension, please use SRC_GPSR_GPSR1_SR6.
*/
#define SRC_GPSR16 (SRC_GPSR_GPSR1_SR6)

/** \brief 9CC, General Purpose Group 1 Service Request 7 */
#define SRC_GPSR_GPSR1_SR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389CCu)
/** Alias (User Manual Name) for SRC_GPSR_GPSR1_SR7.
* To use register names with standard convension, please use SRC_GPSR_GPSR1_SR7.
*/
#define SRC_GPSR17 (SRC_GPSR_GPSR1_SR7)

/** \brief 9D0, General Purpose Group 2 Service Request 0 */
#define SRC_GPSR_GPSR2_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389D0u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR2_SR0.
* To use register names with standard convension, please use SRC_GPSR_GPSR2_SR0.
*/
#define SRC_GPSR20 (SRC_GPSR_GPSR2_SR0)

/** \brief 9D4, General Purpose Group 2 Service Request 1 */
#define SRC_GPSR_GPSR2_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389D4u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR2_SR1.
* To use register names with standard convension, please use SRC_GPSR_GPSR2_SR1.
*/
#define SRC_GPSR21 (SRC_GPSR_GPSR2_SR1)

/** \brief 9D8, General Purpose Group 2 Service Request 2 */
#define SRC_GPSR_GPSR2_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389D8u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR2_SR2.
* To use register names with standard convension, please use SRC_GPSR_GPSR2_SR2.
*/
#define SRC_GPSR22 (SRC_GPSR_GPSR2_SR2)

/** \brief 9DC, General Purpose Group 2 Service Request 3 */
#define SRC_GPSR_GPSR2_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389DCu)
/** Alias (User Manual Name) for SRC_GPSR_GPSR2_SR3.
* To use register names with standard convension, please use SRC_GPSR_GPSR2_SR3.
*/
#define SRC_GPSR23 (SRC_GPSR_GPSR2_SR3)

/** \brief 9E0, General Purpose Group 2 Service Request 4 */
#define SRC_GPSR_GPSR2_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389E0u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR2_SR4.
* To use register names with standard convension, please use SRC_GPSR_GPSR2_SR4.
*/
#define SRC_GPSR24 (SRC_GPSR_GPSR2_SR4)

/** \brief 9E4, General Purpose Group 2 Service Request 5 */
#define SRC_GPSR_GPSR2_SR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389E4u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR2_SR5.
* To use register names with standard convension, please use SRC_GPSR_GPSR2_SR5.
*/
#define SRC_GPSR25 (SRC_GPSR_GPSR2_SR5)

/** \brief 9E8, General Purpose Group 2 Service Request 6 */
#define SRC_GPSR_GPSR2_SR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389E8u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR2_SR6.
* To use register names with standard convension, please use SRC_GPSR_GPSR2_SR6.
*/
#define SRC_GPSR26 (SRC_GPSR_GPSR2_SR6)

/** \brief 9EC, General Purpose Group 2 Service Request 7 */
#define SRC_GPSR_GPSR2_SR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389ECu)
/** Alias (User Manual Name) for SRC_GPSR_GPSR2_SR7.
* To use register names with standard convension, please use SRC_GPSR_GPSR2_SR7.
*/
#define SRC_GPSR27 (SRC_GPSR_GPSR2_SR7)

/** \brief 9F0, General Purpose Group 3 Service Request 0 */
#define SRC_GPSR_GPSR3_SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389F0u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR3_SR0.
* To use register names with standard convension, please use SRC_GPSR_GPSR3_SR0.
*/
#define SRC_GPSR30 (SRC_GPSR_GPSR3_SR0)

/** \brief 9F4, General Purpose Group 3 Service Request 1 */
#define SRC_GPSR_GPSR3_SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389F4u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR3_SR1.
* To use register names with standard convension, please use SRC_GPSR_GPSR3_SR1.
*/
#define SRC_GPSR31 (SRC_GPSR_GPSR3_SR1)

/** \brief 9F8, General Purpose Group 3 Service Request 2 */
#define SRC_GPSR_GPSR3_SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389F8u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR3_SR2.
* To use register names with standard convension, please use SRC_GPSR_GPSR3_SR2.
*/
#define SRC_GPSR32 (SRC_GPSR_GPSR3_SR2)

/** \brief 9FC, General Purpose Group 3 Service Request 3 */
#define SRC_GPSR_GPSR3_SR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF00389FCu)
/** Alias (User Manual Name) for SRC_GPSR_GPSR3_SR3.
* To use register names with standard convension, please use SRC_GPSR_GPSR3_SR3.
*/
#define SRC_GPSR33 (SRC_GPSR_GPSR3_SR3)

/** \brief A00, General Purpose Group 3 Service Request 4 */
#define SRC_GPSR_GPSR3_SR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A00u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR3_SR4.
* To use register names with standard convension, please use SRC_GPSR_GPSR3_SR4.
*/
#define SRC_GPSR34 (SRC_GPSR_GPSR3_SR4)

/** \brief A04, General Purpose Group 3 Service Request 5 */
#define SRC_GPSR_GPSR3_SR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A04u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR3_SR5.
* To use register names with standard convension, please use SRC_GPSR_GPSR3_SR5.
*/
#define SRC_GPSR35 (SRC_GPSR_GPSR3_SR5)

/** \brief A08, General Purpose Group 3 Service Request 6 */
#define SRC_GPSR_GPSR3_SR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A08u)
/** Alias (User Manual Name) for SRC_GPSR_GPSR3_SR6.
* To use register names with standard convension, please use SRC_GPSR_GPSR3_SR6.
*/
#define SRC_GPSR36 (SRC_GPSR_GPSR3_SR6)

/** \brief A0C, General Purpose Group 3 Service Request 7 */
#define SRC_GPSR_GPSR3_SR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A0Cu)
/** Alias (User Manual Name) for SRC_GPSR_GPSR3_SR7.
* To use register names with standard convension, please use SRC_GPSR_GPSR3_SR7.
*/
#define SRC_GPSR37 (SRC_GPSR_GPSR3_SR7)

/** \brief A50, ASCLIN14 Transmit Service Request */
#define SRC_ASCLIN14_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A50u)
/** Alias (User Manual Name) for SRC_ASCLIN14_TX.
* To use register names with standard convension, please use SRC_ASCLIN14_TX.
*/
#define SRC_ASCLIN14TX (SRC_ASCLIN14_TX)

/** \brief A54, ASCLIN14 Receive Service Request */
#define SRC_ASCLIN14_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A54u)
/** Alias (User Manual Name) for SRC_ASCLIN14_RX.
* To use register names with standard convension, please use SRC_ASCLIN14_RX.
*/
#define SRC_ASCLIN14RX (SRC_ASCLIN14_RX)

/** \brief A58, ASCLIN14 Error Service Request */
#define SRC_ASCLIN14_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A58u)
/** Alias (User Manual Name) for SRC_ASCLIN14_ERR.
* To use register names with standard convension, please use SRC_ASCLIN14_ERR.
*/
#define SRC_ASCLIN14ERR (SRC_ASCLIN14_ERR)

/** \brief A5C, ASCLIN15 Transmit Service Request */
#define SRC_ASCLIN15_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A5Cu)
/** Alias (User Manual Name) for SRC_ASCLIN15_TX.
* To use register names with standard convension, please use SRC_ASCLIN15_TX.
*/
#define SRC_ASCLIN15TX (SRC_ASCLIN15_TX)

/** \brief A60, ASCLIN15 Receive Service Request */
#define SRC_ASCLIN15_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A60u)
/** Alias (User Manual Name) for SRC_ASCLIN15_RX.
* To use register names with standard convension, please use SRC_ASCLIN15_RX.
*/
#define SRC_ASCLIN15RX (SRC_ASCLIN15_RX)

/** \brief A64, ASCLIN15 Error Service Request */
#define SRC_ASCLIN15_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A64u)
/** Alias (User Manual Name) for SRC_ASCLIN15_ERR.
* To use register names with standard convension, please use SRC_ASCLIN15_ERR.
*/
#define SRC_ASCLIN15ERR (SRC_ASCLIN15_ERR)

/** \brief A70, AEI Shared Service Request */
#define SRC_GTM_AEIIRQ /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A70u)
/** Alias (User Manual Name) for SRC_GTM_AEIIRQ.
* To use register names with standard convension, please use SRC_GTM_AEIIRQ.
*/
#define SRC_GTMAEIIRQ (SRC_GTM_AEIIRQ)

/** \brief A74, ARU Shared Service Request 0 */
#define SRC_GTM_ARUIRQ0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A74u)
/** Alias (User Manual Name) for SRC_GTM_ARUIRQ0.
* To use register names with standard convension, please use SRC_GTM_ARUIRQ0.
*/
#define SRC_GTMARUIRQ0 (SRC_GTM_ARUIRQ0)

/** \brief A78, ARU Shared Service Request 1 */
#define SRC_GTM_ARUIRQ1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A78u)
/** Alias (User Manual Name) for SRC_GTM_ARUIRQ1.
* To use register names with standard convension, please use SRC_GTM_ARUIRQ1.
*/
#define SRC_GTMARUIRQ1 (SRC_GTM_ARUIRQ1)

/** \brief A7C, ARU Shared Service Request 2 */
#define SRC_GTM_ARUIRQ2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A7Cu)
/** Alias (User Manual Name) for SRC_GTM_ARUIRQ2.
* To use register names with standard convension, please use SRC_GTM_ARUIRQ2.
*/
#define SRC_GTMARUIRQ2 (SRC_GTM_ARUIRQ2)

/** \brief A80, BRC Shared Service Request */
#define SRC_GTM_BRCIRQ /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A80u)
/** Alias (User Manual Name) for SRC_GTM_BRCIRQ.
* To use register names with standard convension, please use SRC_GTM_BRCIRQ.
*/
#define SRC_GTMBRCIRQ (SRC_GTM_BRCIRQ)

/** \brief A84, CMP Shared Service Request */
#define SRC_GTM_CMBIRQ /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A84u)
/** Alias (User Manual Name) for SRC_GTM_CMBIRQ.
* To use register names with standard convension, please use SRC_GTM_CMBIRQ.
*/
#define SRC_GTMCMPIRQ (SRC_GTM_CMBIRQ)

/** \brief A88, SPE0 Shared Service Request */
#define SRC_GTM_SPEIRQ0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A88u)
/** Alias (User Manual Name) for SRC_GTM_SPEIRQ0.
* To use register names with standard convension, please use SRC_GTM_SPEIRQ0.
*/
#define SRC_GTMSPE0IRQ (SRC_GTM_SPEIRQ0)

/** \brief A8C, SPE1 Shared Service Request */
#define SRC_GTM_SPEIRQ1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A8Cu)
/** Alias (User Manual Name) for SRC_GTM_SPEIRQ1.
* To use register names with standard convension, please use SRC_GTM_SPEIRQ1.
*/
#define SRC_GTMSPE1IRQ (SRC_GTM_SPEIRQ1)

/** \brief A90, SPE2 Shared Service Request */
#define SRC_GTM_SPEIRQ2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A90u)
/** Alias (User Manual Name) for SRC_GTM_SPEIRQ2.
* To use register names with standard convension, please use SRC_GTM_SPEIRQ2.
*/
#define SRC_GTMSPE2IRQ (SRC_GTM_SPEIRQ2)

/** \brief A94, SPE3 Shared Service Request */
#define SRC_GTM_SPEIRQ3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038A94u)
/** Alias (User Manual Name) for SRC_GTM_SPEIRQ3.
* To use register names with standard convension, please use SRC_GTM_SPEIRQ3.
*/
#define SRC_GTMSPE3IRQ (SRC_GTM_SPEIRQ3)

/** \brief AA0, PSM0 Shared Service Request 0 */
#define SRC_GTM_PSM0_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AA0u)
/** Alias (User Manual Name) for SRC_GTM_PSM0_0.
* To use register names with standard convension, please use SRC_GTM_PSM0_0.
*/
#define SRC_GTMPSM00 (SRC_GTM_PSM0_0)

/** \brief AA4, PSM0 Shared Service Request 1 */
#define SRC_GTM_PSM0_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AA4u)
/** Alias (User Manual Name) for SRC_GTM_PSM0_1.
* To use register names with standard convension, please use SRC_GTM_PSM0_1.
*/
#define SRC_GTMPSM01 (SRC_GTM_PSM0_1)

/** \brief AA8, PSM0 Shared Service Request 2 */
#define SRC_GTM_PSM0_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AA8u)
/** Alias (User Manual Name) for SRC_GTM_PSM0_2.
* To use register names with standard convension, please use SRC_GTM_PSM0_2.
*/
#define SRC_GTMPSM02 (SRC_GTM_PSM0_2)

/** \brief AAC, PSM0 Shared Service Request 3 */
#define SRC_GTM_PSM0_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AACu)
/** Alias (User Manual Name) for SRC_GTM_PSM0_3.
* To use register names with standard convension, please use SRC_GTM_PSM0_3.
*/
#define SRC_GTMPSM03 (SRC_GTM_PSM0_3)

/** \brief AB0, PSM0 Shared Service Request 4 */
#define SRC_GTM_PSM0_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AB0u)
/** Alias (User Manual Name) for SRC_GTM_PSM0_4.
* To use register names with standard convension, please use SRC_GTM_PSM0_4.
*/
#define SRC_GTMPSM04 (SRC_GTM_PSM0_4)

/** \brief AB4, PSM0 Shared Service Request 5 */
#define SRC_GTM_PSM0_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AB4u)
/** Alias (User Manual Name) for SRC_GTM_PSM0_5.
* To use register names with standard convension, please use SRC_GTM_PSM0_5.
*/
#define SRC_GTMPSM05 (SRC_GTM_PSM0_5)

/** \brief AB8, PSM0 Shared Service Request 6 */
#define SRC_GTM_PSM0_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AB8u)
/** Alias (User Manual Name) for SRC_GTM_PSM0_6.
* To use register names with standard convension, please use SRC_GTM_PSM0_6.
*/
#define SRC_GTMPSM06 (SRC_GTM_PSM0_6)

/** \brief ABC, PSM0 Shared Service Request 7 */
#define SRC_GTM_PSM0_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038ABCu)
/** Alias (User Manual Name) for SRC_GTM_PSM0_7.
* To use register names with standard convension, please use SRC_GTM_PSM0_7.
*/
#define SRC_GTMPSM07 (SRC_GTM_PSM0_7)

/** \brief AC0, PSM1 Shared Service Request 0 */
#define SRC_GTM_PSM1_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AC0u)
/** Alias (User Manual Name) for SRC_GTM_PSM1_0.
* To use register names with standard convension, please use SRC_GTM_PSM1_0.
*/
#define SRC_GTMPSM10 (SRC_GTM_PSM1_0)

/** \brief AC4, PSM1 Shared Service Request 1 */
#define SRC_GTM_PSM1_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AC4u)
/** Alias (User Manual Name) for SRC_GTM_PSM1_1.
* To use register names with standard convension, please use SRC_GTM_PSM1_1.
*/
#define SRC_GTMPSM11 (SRC_GTM_PSM1_1)

/** \brief AC8, PSM1 Shared Service Request 2 */
#define SRC_GTM_PSM1_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AC8u)
/** Alias (User Manual Name) for SRC_GTM_PSM1_2.
* To use register names with standard convension, please use SRC_GTM_PSM1_2.
*/
#define SRC_GTMPSM12 (SRC_GTM_PSM1_2)

/** \brief ACC, PSM1 Shared Service Request 3 */
#define SRC_GTM_PSM1_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038ACCu)
/** Alias (User Manual Name) for SRC_GTM_PSM1_3.
* To use register names with standard convension, please use SRC_GTM_PSM1_3.
*/
#define SRC_GTMPSM13 (SRC_GTM_PSM1_3)

/** \brief AD0, PSM1 Shared Service Request 4 */
#define SRC_GTM_PSM1_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AD0u)
/** Alias (User Manual Name) for SRC_GTM_PSM1_4.
* To use register names with standard convension, please use SRC_GTM_PSM1_4.
*/
#define SRC_GTMPSM14 (SRC_GTM_PSM1_4)

/** \brief AD4, PSM1 Shared Service Request 5 */
#define SRC_GTM_PSM1_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AD4u)
/** Alias (User Manual Name) for SRC_GTM_PSM1_5.
* To use register names with standard convension, please use SRC_GTM_PSM1_5.
*/
#define SRC_GTMPSM15 (SRC_GTM_PSM1_5)

/** \brief AD8, PSM1 Shared Service Request 6 */
#define SRC_GTM_PSM1_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038AD8u)
/** Alias (User Manual Name) for SRC_GTM_PSM1_6.
* To use register names with standard convension, please use SRC_GTM_PSM1_6.
*/
#define SRC_GTMPSM16 (SRC_GTM_PSM1_6)

/** \brief ADC, PSM1 Shared Service Request 7 */
#define SRC_GTM_PSM1_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038ADCu)
/** Alias (User Manual Name) for SRC_GTM_PSM1_7.
* To use register names with standard convension, please use SRC_GTM_PSM1_7.
*/
#define SRC_GTMPSM17 (SRC_GTM_PSM1_7)

/** \brief B00, DPLL Service Request 0 */
#define SRC_GTM_DPLL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B00u)
/** Alias (User Manual Name) for SRC_GTM_DPLL0.
* To use register names with standard convension, please use SRC_GTM_DPLL0.
*/
#define SRC_GTMDPLL0 (SRC_GTM_DPLL0)

/** \brief B04, DPLL Service Request 1 */
#define SRC_GTM_DPLL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B04u)
/** Alias (User Manual Name) for SRC_GTM_DPLL1.
* To use register names with standard convension, please use SRC_GTM_DPLL1.
*/
#define SRC_GTMDPLL1 (SRC_GTM_DPLL1)

/** \brief B08, DPLL Service Request 2 */
#define SRC_GTM_DPLL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B08u)
/** Alias (User Manual Name) for SRC_GTM_DPLL2.
* To use register names with standard convension, please use SRC_GTM_DPLL2.
*/
#define SRC_GTMDPLL2 (SRC_GTM_DPLL2)

/** \brief B0C, DPLL Service Request 3 */
#define SRC_GTM_DPLL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B0Cu)
/** Alias (User Manual Name) for SRC_GTM_DPLL3.
* To use register names with standard convension, please use SRC_GTM_DPLL3.
*/
#define SRC_GTMDPLL3 (SRC_GTM_DPLL3)

/** \brief B10, DPLL Service Request 4 */
#define SRC_GTM_DPLL4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B10u)
/** Alias (User Manual Name) for SRC_GTM_DPLL4.
* To use register names with standard convension, please use SRC_GTM_DPLL4.
*/
#define SRC_GTMDPLL4 (SRC_GTM_DPLL4)

/** \brief B14, DPLL Service Request 5 */
#define SRC_GTM_DPLL5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B14u)
/** Alias (User Manual Name) for SRC_GTM_DPLL5.
* To use register names with standard convension, please use SRC_GTM_DPLL5.
*/
#define SRC_GTMDPLL5 (SRC_GTM_DPLL5)

/** \brief B18, DPLL Service Request 6 */
#define SRC_GTM_DPLL6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B18u)
/** Alias (User Manual Name) for SRC_GTM_DPLL6.
* To use register names with standard convension, please use SRC_GTM_DPLL6.
*/
#define SRC_GTMDPLL6 (SRC_GTM_DPLL6)

/** \brief B1C, DPLL Service Request 7 */
#define SRC_GTM_DPLL7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B1Cu)
/** Alias (User Manual Name) for SRC_GTM_DPLL7.
* To use register names with standard convension, please use SRC_GTM_DPLL7.
*/
#define SRC_GTMDPLL7 (SRC_GTM_DPLL7)

/** \brief B20, DPLL Service Request 8 */
#define SRC_GTM_DPLL8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B20u)
/** Alias (User Manual Name) for SRC_GTM_DPLL8.
* To use register names with standard convension, please use SRC_GTM_DPLL8.
*/
#define SRC_GTMDPLL8 (SRC_GTM_DPLL8)

/** \brief B24, DPLL Service Request 9 */
#define SRC_GTM_DPLL9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B24u)
/** Alias (User Manual Name) for SRC_GTM_DPLL9.
* To use register names with standard convension, please use SRC_GTM_DPLL9.
*/
#define SRC_GTMDPLL9 (SRC_GTM_DPLL9)

/** \brief B28, DPLL Service Request 10 */
#define SRC_GTM_DPLL10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B28u)
/** Alias (User Manual Name) for SRC_GTM_DPLL10.
* To use register names with standard convension, please use SRC_GTM_DPLL10.
*/
#define SRC_GTMDPLL10 (SRC_GTM_DPLL10)

/** \brief B2C, DPLL Service Request 11 */
#define SRC_GTM_DPLL11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B2Cu)
/** Alias (User Manual Name) for SRC_GTM_DPLL11.
* To use register names with standard convension, please use SRC_GTM_DPLL11.
*/
#define SRC_GTMDPLL11 (SRC_GTM_DPLL11)

/** \brief B30, DPLL Service Request 12 */
#define SRC_GTM_DPLL12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B30u)
/** Alias (User Manual Name) for SRC_GTM_DPLL12.
* To use register names with standard convension, please use SRC_GTM_DPLL12.
*/
#define SRC_GTMDPLL12 (SRC_GTM_DPLL12)

/** \brief B34, DPLL Service Request 13 */
#define SRC_GTM_DPLL13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B34u)
/** Alias (User Manual Name) for SRC_GTM_DPLL13.
* To use register names with standard convension, please use SRC_GTM_DPLL13.
*/
#define SRC_GTMDPLL13 (SRC_GTM_DPLL13)

/** \brief B38, DPLL Service Request 14 */
#define SRC_GTM_DPLL14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B38u)
/** Alias (User Manual Name) for SRC_GTM_DPLL14.
* To use register names with standard convension, please use SRC_GTM_DPLL14.
*/
#define SRC_GTMDPLL14 (SRC_GTM_DPLL14)

/** \brief B3C, DPLL Service Request 15 */
#define SRC_GTM_DPLL15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B3Cu)
/** Alias (User Manual Name) for SRC_GTM_DPLL15.
* To use register names with standard convension, please use SRC_GTM_DPLL15.
*/
#define SRC_GTMDPLL15 (SRC_GTM_DPLL15)

/** \brief B40, DPLL Service Request 16 */
#define SRC_GTM_DPLL16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B40u)
/** Alias (User Manual Name) for SRC_GTM_DPLL16.
* To use register names with standard convension, please use SRC_GTM_DPLL16.
*/
#define SRC_GTMDPLL16 (SRC_GTM_DPLL16)

/** \brief B44, DPLL Service Request 17 */
#define SRC_GTM_DPLL17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B44u)
/** Alias (User Manual Name) for SRC_GTM_DPLL17.
* To use register names with standard convension, please use SRC_GTM_DPLL17.
*/
#define SRC_GTMDPLL17 (SRC_GTM_DPLL17)

/** \brief B48, DPLL Service Request 18 */
#define SRC_GTM_DPLL18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B48u)
/** Alias (User Manual Name) for SRC_GTM_DPLL18.
* To use register names with standard convension, please use SRC_GTM_DPLL18.
*/
#define SRC_GTMDPLL18 (SRC_GTM_DPLL18)

/** \brief B4C, DPLL Service Request 19 */
#define SRC_GTM_DPLL19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B4Cu)
/** Alias (User Manual Name) for SRC_GTM_DPLL19.
* To use register names with standard convension, please use SRC_GTM_DPLL19.
*/
#define SRC_GTMDPLL19 (SRC_GTM_DPLL19)

/** \brief B50, DPLL Service Request 20 */
#define SRC_GTM_DPLL20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B50u)
/** Alias (User Manual Name) for SRC_GTM_DPLL20.
* To use register names with standard convension, please use SRC_GTM_DPLL20.
*/
#define SRC_GTMDPLL20 (SRC_GTM_DPLL20)

/** \brief B54, DPLL Service Request 21 */
#define SRC_GTM_DPLL21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B54u)
/** Alias (User Manual Name) for SRC_GTM_DPLL21.
* To use register names with standard convension, please use SRC_GTM_DPLL21.
*/
#define SRC_GTMDPLL21 (SRC_GTM_DPLL21)

/** \brief B58, DPLL Service Request 22 */
#define SRC_GTM_DPLL22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B58u)
/** Alias (User Manual Name) for SRC_GTM_DPLL22.
* To use register names with standard convension, please use SRC_GTM_DPLL22.
*/
#define SRC_GTMDPLL22 (SRC_GTM_DPLL22)

/** \brief B5C, DPLL Service Request 23 */
#define SRC_GTM_DPLL23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B5Cu)
/** Alias (User Manual Name) for SRC_GTM_DPLL23.
* To use register names with standard convension, please use SRC_GTM_DPLL23.
*/
#define SRC_GTMDPLL23 (SRC_GTM_DPLL23)

/** \brief B60, DPLL Service Request 24 */
#define SRC_GTM_DPLL24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B60u)
/** Alias (User Manual Name) for SRC_GTM_DPLL24.
* To use register names with standard convension, please use SRC_GTM_DPLL24.
*/
#define SRC_GTMDPLL24 (SRC_GTM_DPLL24)

/** \brief B64, DPLL Service Request 25 */
#define SRC_GTM_DPLL25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B64u)
/** Alias (User Manual Name) for SRC_GTM_DPLL25.
* To use register names with standard convension, please use SRC_GTM_DPLL25.
*/
#define SRC_GTMDPLL25 (SRC_GTM_DPLL25)

/** \brief B68, DPLL Service Request 26 */
#define SRC_GTM_DPLL26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B68u)
/** Alias (User Manual Name) for SRC_GTM_DPLL26.
* To use register names with standard convension, please use SRC_GTM_DPLL26.
*/
#define SRC_GTMDPLL26 (SRC_GTM_DPLL26)

/** \brief B70, Error Service Request */
#define SRC_GTM_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B70u)
/** Alias (User Manual Name) for SRC_GTM_ERR.
* To use register names with standard convension, please use SRC_GTM_ERR.
*/
#define SRC_GTMERR (SRC_GTM_ERR)

/** \brief B90, TIM0 Shared Service Request 0 */
#define SRC_GTM_TIM0_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B90u)
/** Alias (User Manual Name) for SRC_GTM_TIM0_0.
* To use register names with standard convension, please use SRC_GTM_TIM0_0.
*/
#define SRC_GTMTIM00 (SRC_GTM_TIM0_0)

/** \brief B94, TIM0 Shared Service Request 1 */
#define SRC_GTM_TIM0_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B94u)
/** Alias (User Manual Name) for SRC_GTM_TIM0_1.
* To use register names with standard convension, please use SRC_GTM_TIM0_1.
*/
#define SRC_GTMTIM01 (SRC_GTM_TIM0_1)

/** \brief B98, TIM0 Shared Service Request 2 */
#define SRC_GTM_TIM0_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B98u)
/** Alias (User Manual Name) for SRC_GTM_TIM0_2.
* To use register names with standard convension, please use SRC_GTM_TIM0_2.
*/
#define SRC_GTMTIM02 (SRC_GTM_TIM0_2)

/** \brief B9C, TIM0 Shared Service Request 3 */
#define SRC_GTM_TIM0_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038B9Cu)
/** Alias (User Manual Name) for SRC_GTM_TIM0_3.
* To use register names with standard convension, please use SRC_GTM_TIM0_3.
*/
#define SRC_GTMTIM03 (SRC_GTM_TIM0_3)

/** \brief BA0, TIM0 Shared Service Request 4 */
#define SRC_GTM_TIM0_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BA0u)
/** Alias (User Manual Name) for SRC_GTM_TIM0_4.
* To use register names with standard convension, please use SRC_GTM_TIM0_4.
*/
#define SRC_GTMTIM04 (SRC_GTM_TIM0_4)

/** \brief BA4, TIM0 Shared Service Request 5 */
#define SRC_GTM_TIM0_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BA4u)
/** Alias (User Manual Name) for SRC_GTM_TIM0_5.
* To use register names with standard convension, please use SRC_GTM_TIM0_5.
*/
#define SRC_GTMTIM05 (SRC_GTM_TIM0_5)

/** \brief BA8, TIM0 Shared Service Request 6 */
#define SRC_GTM_TIM0_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BA8u)
/** Alias (User Manual Name) for SRC_GTM_TIM0_6.
* To use register names with standard convension, please use SRC_GTM_TIM0_6.
*/
#define SRC_GTMTIM06 (SRC_GTM_TIM0_6)

/** \brief BAC, TIM0 Shared Service Request 7 */
#define SRC_GTM_TIM0_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BACu)
/** Alias (User Manual Name) for SRC_GTM_TIM0_7.
* To use register names with standard convension, please use SRC_GTM_TIM0_7.
*/
#define SRC_GTMTIM07 (SRC_GTM_TIM0_7)

/** \brief BB0, TIM1 Shared Service Request 0 */
#define SRC_GTM_TIM1_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BB0u)
/** Alias (User Manual Name) for SRC_GTM_TIM1_0.
* To use register names with standard convension, please use SRC_GTM_TIM1_0.
*/
#define SRC_GTMTIM10 (SRC_GTM_TIM1_0)

/** \brief BB4, TIM1 Shared Service Request 1 */
#define SRC_GTM_TIM1_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BB4u)
/** Alias (User Manual Name) for SRC_GTM_TIM1_1.
* To use register names with standard convension, please use SRC_GTM_TIM1_1.
*/
#define SRC_GTMTIM11 (SRC_GTM_TIM1_1)

/** \brief BB8, TIM1 Shared Service Request 2 */
#define SRC_GTM_TIM1_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BB8u)
/** Alias (User Manual Name) for SRC_GTM_TIM1_2.
* To use register names with standard convension, please use SRC_GTM_TIM1_2.
*/
#define SRC_GTMTIM12 (SRC_GTM_TIM1_2)

/** \brief BBC, TIM1 Shared Service Request 3 */
#define SRC_GTM_TIM1_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BBCu)
/** Alias (User Manual Name) for SRC_GTM_TIM1_3.
* To use register names with standard convension, please use SRC_GTM_TIM1_3.
*/
#define SRC_GTMTIM13 (SRC_GTM_TIM1_3)

/** \brief BC0, TIM1 Shared Service Request 4 */
#define SRC_GTM_TIM1_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BC0u)
/** Alias (User Manual Name) for SRC_GTM_TIM1_4.
* To use register names with standard convension, please use SRC_GTM_TIM1_4.
*/
#define SRC_GTMTIM14 (SRC_GTM_TIM1_4)

/** \brief BC4, TIM1 Shared Service Request 5 */
#define SRC_GTM_TIM1_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BC4u)
/** Alias (User Manual Name) for SRC_GTM_TIM1_5.
* To use register names with standard convension, please use SRC_GTM_TIM1_5.
*/
#define SRC_GTMTIM15 (SRC_GTM_TIM1_5)

/** \brief BC8, TIM1 Shared Service Request 6 */
#define SRC_GTM_TIM1_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BC8u)
/** Alias (User Manual Name) for SRC_GTM_TIM1_6.
* To use register names with standard convension, please use SRC_GTM_TIM1_6.
*/
#define SRC_GTMTIM16 (SRC_GTM_TIM1_6)

/** \brief BCC, TIM1 Shared Service Request 7 */
#define SRC_GTM_TIM1_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BCCu)
/** Alias (User Manual Name) for SRC_GTM_TIM1_7.
* To use register names with standard convension, please use SRC_GTM_TIM1_7.
*/
#define SRC_GTMTIM17 (SRC_GTM_TIM1_7)

/** \brief BD0, TIM2 Shared Service Request 0 */
#define SRC_GTM_TIM2_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BD0u)
/** Alias (User Manual Name) for SRC_GTM_TIM2_0.
* To use register names with standard convension, please use SRC_GTM_TIM2_0.
*/
#define SRC_GTMTIM20 (SRC_GTM_TIM2_0)

/** \brief BD4, TIM2 Shared Service Request 1 */
#define SRC_GTM_TIM2_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BD4u)
/** Alias (User Manual Name) for SRC_GTM_TIM2_1.
* To use register names with standard convension, please use SRC_GTM_TIM2_1.
*/
#define SRC_GTMTIM21 (SRC_GTM_TIM2_1)

/** \brief BD8, TIM2 Shared Service Request 2 */
#define SRC_GTM_TIM2_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BD8u)
/** Alias (User Manual Name) for SRC_GTM_TIM2_2.
* To use register names with standard convension, please use SRC_GTM_TIM2_2.
*/
#define SRC_GTMTIM22 (SRC_GTM_TIM2_2)

/** \brief BDC, TIM2 Shared Service Request 3 */
#define SRC_GTM_TIM2_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BDCu)
/** Alias (User Manual Name) for SRC_GTM_TIM2_3.
* To use register names with standard convension, please use SRC_GTM_TIM2_3.
*/
#define SRC_GTMTIM23 (SRC_GTM_TIM2_3)

/** \brief BE0, TIM2 Shared Service Request 4 */
#define SRC_GTM_TIM2_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BE0u)
/** Alias (User Manual Name) for SRC_GTM_TIM2_4.
* To use register names with standard convension, please use SRC_GTM_TIM2_4.
*/
#define SRC_GTMTIM24 (SRC_GTM_TIM2_4)

/** \brief BE4, TIM2 Shared Service Request 5 */
#define SRC_GTM_TIM2_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BE4u)
/** Alias (User Manual Name) for SRC_GTM_TIM2_5.
* To use register names with standard convension, please use SRC_GTM_TIM2_5.
*/
#define SRC_GTMTIM25 (SRC_GTM_TIM2_5)

/** \brief BE8, TIM2 Shared Service Request 6 */
#define SRC_GTM_TIM2_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BE8u)
/** Alias (User Manual Name) for SRC_GTM_TIM2_6.
* To use register names with standard convension, please use SRC_GTM_TIM2_6.
*/
#define SRC_GTMTIM26 (SRC_GTM_TIM2_6)

/** \brief BEC, TIM2 Shared Service Request 7 */
#define SRC_GTM_TIM2_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BECu)
/** Alias (User Manual Name) for SRC_GTM_TIM2_7.
* To use register names with standard convension, please use SRC_GTM_TIM2_7.
*/
#define SRC_GTMTIM27 (SRC_GTM_TIM2_7)

/** \brief BF0, TIM3 Shared Service Request 0 */
#define SRC_GTM_TIM3_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BF0u)
/** Alias (User Manual Name) for SRC_GTM_TIM3_0.
* To use register names with standard convension, please use SRC_GTM_TIM3_0.
*/
#define SRC_GTMTIM30 (SRC_GTM_TIM3_0)

/** \brief BF4, TIM3 Shared Service Request 1 */
#define SRC_GTM_TIM3_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BF4u)
/** Alias (User Manual Name) for SRC_GTM_TIM3_1.
* To use register names with standard convension, please use SRC_GTM_TIM3_1.
*/
#define SRC_GTMTIM31 (SRC_GTM_TIM3_1)

/** \brief BF8, TIM3 Shared Service Request 2 */
#define SRC_GTM_TIM3_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BF8u)
/** Alias (User Manual Name) for SRC_GTM_TIM3_2.
* To use register names with standard convension, please use SRC_GTM_TIM3_2.
*/
#define SRC_GTMTIM32 (SRC_GTM_TIM3_2)

/** \brief BFC, TIM3 Shared Service Request 3 */
#define SRC_GTM_TIM3_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038BFCu)
/** Alias (User Manual Name) for SRC_GTM_TIM3_3.
* To use register names with standard convension, please use SRC_GTM_TIM3_3.
*/
#define SRC_GTMTIM33 (SRC_GTM_TIM3_3)

/** \brief C00, TIM3 Shared Service Request 4 */
#define SRC_GTM_TIM3_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C00u)
/** Alias (User Manual Name) for SRC_GTM_TIM3_4.
* To use register names with standard convension, please use SRC_GTM_TIM3_4.
*/
#define SRC_GTMTIM34 (SRC_GTM_TIM3_4)

/** \brief C04, TIM3 Shared Service Request 5 */
#define SRC_GTM_TIM3_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C04u)
/** Alias (User Manual Name) for SRC_GTM_TIM3_5.
* To use register names with standard convension, please use SRC_GTM_TIM3_5.
*/
#define SRC_GTMTIM35 (SRC_GTM_TIM3_5)

/** \brief C08, TIM3 Shared Service Request 6 */
#define SRC_GTM_TIM3_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C08u)
/** Alias (User Manual Name) for SRC_GTM_TIM3_6.
* To use register names with standard convension, please use SRC_GTM_TIM3_6.
*/
#define SRC_GTMTIM36 (SRC_GTM_TIM3_6)

/** \brief C0C, TIM3 Shared Service Request 7 */
#define SRC_GTM_TIM3_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C0Cu)
/** Alias (User Manual Name) for SRC_GTM_TIM3_7.
* To use register names with standard convension, please use SRC_GTM_TIM3_7.
*/
#define SRC_GTMTIM37 (SRC_GTM_TIM3_7)

/** \brief C10, TIM4 Shared Service Request 0 */
#define SRC_GTM_TIM4_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C10u)
/** Alias (User Manual Name) for SRC_GTM_TIM4_0.
* To use register names with standard convension, please use SRC_GTM_TIM4_0.
*/
#define SRC_GTMTIM40 (SRC_GTM_TIM4_0)

/** \brief C14, TIM4 Shared Service Request 1 */
#define SRC_GTM_TIM4_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C14u)
/** Alias (User Manual Name) for SRC_GTM_TIM4_1.
* To use register names with standard convension, please use SRC_GTM_TIM4_1.
*/
#define SRC_GTMTIM41 (SRC_GTM_TIM4_1)

/** \brief C18, TIM4 Shared Service Request 2 */
#define SRC_GTM_TIM4_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C18u)
/** Alias (User Manual Name) for SRC_GTM_TIM4_2.
* To use register names with standard convension, please use SRC_GTM_TIM4_2.
*/
#define SRC_GTMTIM42 (SRC_GTM_TIM4_2)

/** \brief C1C, TIM4 Shared Service Request 3 */
#define SRC_GTM_TIM4_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C1Cu)
/** Alias (User Manual Name) for SRC_GTM_TIM4_3.
* To use register names with standard convension, please use SRC_GTM_TIM4_3.
*/
#define SRC_GTMTIM43 (SRC_GTM_TIM4_3)

/** \brief C20, TIM4 Shared Service Request 4 */
#define SRC_GTM_TIM4_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C20u)
/** Alias (User Manual Name) for SRC_GTM_TIM4_4.
* To use register names with standard convension, please use SRC_GTM_TIM4_4.
*/
#define SRC_GTMTIM44 (SRC_GTM_TIM4_4)

/** \brief C24, TIM4 Shared Service Request 5 */
#define SRC_GTM_TIM4_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C24u)
/** Alias (User Manual Name) for SRC_GTM_TIM4_5.
* To use register names with standard convension, please use SRC_GTM_TIM4_5.
*/
#define SRC_GTMTIM45 (SRC_GTM_TIM4_5)

/** \brief C28, TIM4 Shared Service Request 6 */
#define SRC_GTM_TIM4_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C28u)
/** Alias (User Manual Name) for SRC_GTM_TIM4_6.
* To use register names with standard convension, please use SRC_GTM_TIM4_6.
*/
#define SRC_GTMTIM46 (SRC_GTM_TIM4_6)

/** \brief C2C, TIM4 Shared Service Request 7 */
#define SRC_GTM_TIM4_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C2Cu)
/** Alias (User Manual Name) for SRC_GTM_TIM4_7.
* To use register names with standard convension, please use SRC_GTM_TIM4_7.
*/
#define SRC_GTMTIM47 (SRC_GTM_TIM4_7)

/** \brief C30, TIM5 Shared Service Request 0 */
#define SRC_GTM_TIM5_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C30u)
/** Alias (User Manual Name) for SRC_GTM_TIM5_0.
* To use register names with standard convension, please use SRC_GTM_TIM5_0.
*/
#define SRC_GTMTIM50 (SRC_GTM_TIM5_0)

/** \brief C34, TIM5 Shared Service Request 1 */
#define SRC_GTM_TIM5_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C34u)
/** Alias (User Manual Name) for SRC_GTM_TIM5_1.
* To use register names with standard convension, please use SRC_GTM_TIM5_1.
*/
#define SRC_GTMTIM51 (SRC_GTM_TIM5_1)

/** \brief C38, TIM5 Shared Service Request 2 */
#define SRC_GTM_TIM5_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C38u)
/** Alias (User Manual Name) for SRC_GTM_TIM5_2.
* To use register names with standard convension, please use SRC_GTM_TIM5_2.
*/
#define SRC_GTMTIM52 (SRC_GTM_TIM5_2)

/** \brief C3C, TIM5 Shared Service Request 3 */
#define SRC_GTM_TIM5_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C3Cu)
/** Alias (User Manual Name) for SRC_GTM_TIM5_3.
* To use register names with standard convension, please use SRC_GTM_TIM5_3.
*/
#define SRC_GTMTIM53 (SRC_GTM_TIM5_3)

/** \brief C40, TIM5 Shared Service Request 4 */
#define SRC_GTM_TIM5_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C40u)
/** Alias (User Manual Name) for SRC_GTM_TIM5_4.
* To use register names with standard convension, please use SRC_GTM_TIM5_4.
*/
#define SRC_GTMTIM54 (SRC_GTM_TIM5_4)

/** \brief C44, TIM5 Shared Service Request 5 */
#define SRC_GTM_TIM5_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C44u)
/** Alias (User Manual Name) for SRC_GTM_TIM5_5.
* To use register names with standard convension, please use SRC_GTM_TIM5_5.
*/
#define SRC_GTMTIM55 (SRC_GTM_TIM5_5)

/** \brief C48, TIM5 Shared Service Request 6 */
#define SRC_GTM_TIM5_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C48u)
/** Alias (User Manual Name) for SRC_GTM_TIM5_6.
* To use register names with standard convension, please use SRC_GTM_TIM5_6.
*/
#define SRC_GTMTIM56 (SRC_GTM_TIM5_6)

/** \brief C4C, TIM5 Shared Service Request 7 */
#define SRC_GTM_TIM5_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C4Cu)
/** Alias (User Manual Name) for SRC_GTM_TIM5_7.
* To use register names with standard convension, please use SRC_GTM_TIM5_7.
*/
#define SRC_GTMTIM57 (SRC_GTM_TIM5_7)

/** \brief C50, TIM6 Shared Service Request 0 */
#define SRC_GTM_TIM6_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C50u)
/** Alias (User Manual Name) for SRC_GTM_TIM6_0.
* To use register names with standard convension, please use SRC_GTM_TIM6_0.
*/
#define SRC_GTMTIM60 (SRC_GTM_TIM6_0)

/** \brief C54, TIM6 Shared Service Request 1 */
#define SRC_GTM_TIM6_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C54u)
/** Alias (User Manual Name) for SRC_GTM_TIM6_1.
* To use register names with standard convension, please use SRC_GTM_TIM6_1.
*/
#define SRC_GTMTIM61 (SRC_GTM_TIM6_1)

/** \brief C58, TIM6 Shared Service Request 2 */
#define SRC_GTM_TIM6_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C58u)
/** Alias (User Manual Name) for SRC_GTM_TIM6_2.
* To use register names with standard convension, please use SRC_GTM_TIM6_2.
*/
#define SRC_GTMTIM62 (SRC_GTM_TIM6_2)

/** \brief C5C, TIM6 Shared Service Request 3 */
#define SRC_GTM_TIM6_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C5Cu)
/** Alias (User Manual Name) for SRC_GTM_TIM6_3.
* To use register names with standard convension, please use SRC_GTM_TIM6_3.
*/
#define SRC_GTMTIM63 (SRC_GTM_TIM6_3)

/** \brief C60, TIM6 Shared Service Request 4 */
#define SRC_GTM_TIM6_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C60u)
/** Alias (User Manual Name) for SRC_GTM_TIM6_4.
* To use register names with standard convension, please use SRC_GTM_TIM6_4.
*/
#define SRC_GTMTIM64 (SRC_GTM_TIM6_4)

/** \brief C64, TIM6 Shared Service Request 5 */
#define SRC_GTM_TIM6_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C64u)
/** Alias (User Manual Name) for SRC_GTM_TIM6_5.
* To use register names with standard convension, please use SRC_GTM_TIM6_5.
*/
#define SRC_GTMTIM65 (SRC_GTM_TIM6_5)

/** \brief C68, TIM6 Shared Service Request 6 */
#define SRC_GTM_TIM6_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C68u)
/** Alias (User Manual Name) for SRC_GTM_TIM6_6.
* To use register names with standard convension, please use SRC_GTM_TIM6_6.
*/
#define SRC_GTMTIM66 (SRC_GTM_TIM6_6)

/** \brief C6C, TIM6 Shared Service Request 7 */
#define SRC_GTM_TIM6_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C6Cu)
/** Alias (User Manual Name) for SRC_GTM_TIM6_7.
* To use register names with standard convension, please use SRC_GTM_TIM6_7.
*/
#define SRC_GTMTIM67 (SRC_GTM_TIM6_7)

/** \brief C90, ASCLIN16 Transmit Service Request */
#define SRC_ASCLIN16_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C90u)
/** Alias (User Manual Name) for SRC_ASCLIN16_TX.
* To use register names with standard convension, please use SRC_ASCLIN16_TX.
*/
#define SRC_ASCLIN16TX (SRC_ASCLIN16_TX)

/** \brief C94, ASCLIN16 Receive Service Request */
#define SRC_ASCLIN16_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C94u)
/** Alias (User Manual Name) for SRC_ASCLIN16_RX.
* To use register names with standard convension, please use SRC_ASCLIN16_RX.
*/
#define SRC_ASCLIN16RX (SRC_ASCLIN16_RX)

/** \brief C98, ASCLIN16 Error Service Request */
#define SRC_ASCLIN16_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C98u)
/** Alias (User Manual Name) for SRC_ASCLIN16_ERR.
* To use register names with standard convension, please use SRC_ASCLIN16_ERR.
*/
#define SRC_ASCLIN16ERR (SRC_ASCLIN16_ERR)

/** \brief C9C, ASCLIN17 Transmit Service Request */
#define SRC_ASCLIN17_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038C9Cu)
/** Alias (User Manual Name) for SRC_ASCLIN17_TX.
* To use register names with standard convension, please use SRC_ASCLIN17_TX.
*/
#define SRC_ASCLIN17TX (SRC_ASCLIN17_TX)

/** \brief CA0, ASCLIN17 Receive Service Request */
#define SRC_ASCLIN17_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CA0u)
/** Alias (User Manual Name) for SRC_ASCLIN17_RX.
* To use register names with standard convension, please use SRC_ASCLIN17_RX.
*/
#define SRC_ASCLIN17RX (SRC_ASCLIN17_RX)

/** \brief CA4, ASCLIN17 Error Service Request */
#define SRC_ASCLIN17_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CA4u)
/** Alias (User Manual Name) for SRC_ASCLIN17_ERR.
* To use register names with standard convension, please use SRC_ASCLIN17_ERR.
*/
#define SRC_ASCLIN17ERR (SRC_ASCLIN17_ERR)

/** \brief CB0, MCS0 Shared Service Request 0 */
#define SRC_GTM_MCS0_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CB0u)
/** Alias (User Manual Name) for SRC_GTM_MCS0_0.
* To use register names with standard convension, please use SRC_GTM_MCS0_0.
*/
#define SRC_GTMMCS00 (SRC_GTM_MCS0_0)

/** \brief CB4, MCS0 Shared Service Request 1 */
#define SRC_GTM_MCS0_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CB4u)
/** Alias (User Manual Name) for SRC_GTM_MCS0_1.
* To use register names with standard convension, please use SRC_GTM_MCS0_1.
*/
#define SRC_GTMMCS01 (SRC_GTM_MCS0_1)

/** \brief CB8, MCS0 Shared Service Request 2 */
#define SRC_GTM_MCS0_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CB8u)
/** Alias (User Manual Name) for SRC_GTM_MCS0_2.
* To use register names with standard convension, please use SRC_GTM_MCS0_2.
*/
#define SRC_GTMMCS02 (SRC_GTM_MCS0_2)

/** \brief CBC, MCS0 Shared Service Request 3 */
#define SRC_GTM_MCS0_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CBCu)
/** Alias (User Manual Name) for SRC_GTM_MCS0_3.
* To use register names with standard convension, please use SRC_GTM_MCS0_3.
*/
#define SRC_GTMMCS03 (SRC_GTM_MCS0_3)

/** \brief CC0, MCS0 Shared Service Request 4 */
#define SRC_GTM_MCS0_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CC0u)
/** Alias (User Manual Name) for SRC_GTM_MCS0_4.
* To use register names with standard convension, please use SRC_GTM_MCS0_4.
*/
#define SRC_GTMMCS04 (SRC_GTM_MCS0_4)

/** \brief CC4, MCS0 Shared Service Request 5 */
#define SRC_GTM_MCS0_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CC4u)
/** Alias (User Manual Name) for SRC_GTM_MCS0_5.
* To use register names with standard convension, please use SRC_GTM_MCS0_5.
*/
#define SRC_GTMMCS05 (SRC_GTM_MCS0_5)

/** \brief CC8, MCS0 Shared Service Request 6 */
#define SRC_GTM_MCS0_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CC8u)
/** Alias (User Manual Name) for SRC_GTM_MCS0_6.
* To use register names with standard convension, please use SRC_GTM_MCS0_6.
*/
#define SRC_GTMMCS06 (SRC_GTM_MCS0_6)

/** \brief CCC, MCS0 Shared Service Request 7 */
#define SRC_GTM_MCS0_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CCCu)
/** Alias (User Manual Name) for SRC_GTM_MCS0_7.
* To use register names with standard convension, please use SRC_GTM_MCS0_7.
*/
#define SRC_GTMMCS07 (SRC_GTM_MCS0_7)

/** \brief CD0, MCS1 Shared Service Request 0 */
#define SRC_GTM_MCS1_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CD0u)
/** Alias (User Manual Name) for SRC_GTM_MCS1_0.
* To use register names with standard convension, please use SRC_GTM_MCS1_0.
*/
#define SRC_GTMMCS10 (SRC_GTM_MCS1_0)

/** \brief CD4, MCS1 Shared Service Request 1 */
#define SRC_GTM_MCS1_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CD4u)
/** Alias (User Manual Name) for SRC_GTM_MCS1_1.
* To use register names with standard convension, please use SRC_GTM_MCS1_1.
*/
#define SRC_GTMMCS11 (SRC_GTM_MCS1_1)

/** \brief CD8, MCS1 Shared Service Request 2 */
#define SRC_GTM_MCS1_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CD8u)
/** Alias (User Manual Name) for SRC_GTM_MCS1_2.
* To use register names with standard convension, please use SRC_GTM_MCS1_2.
*/
#define SRC_GTMMCS12 (SRC_GTM_MCS1_2)

/** \brief CDC, MCS1 Shared Service Request 3 */
#define SRC_GTM_MCS1_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CDCu)
/** Alias (User Manual Name) for SRC_GTM_MCS1_3.
* To use register names with standard convension, please use SRC_GTM_MCS1_3.
*/
#define SRC_GTMMCS13 (SRC_GTM_MCS1_3)

/** \brief CE0, MCS1 Shared Service Request 4 */
#define SRC_GTM_MCS1_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CE0u)
/** Alias (User Manual Name) for SRC_GTM_MCS1_4.
* To use register names with standard convension, please use SRC_GTM_MCS1_4.
*/
#define SRC_GTMMCS14 (SRC_GTM_MCS1_4)

/** \brief CE4, MCS1 Shared Service Request 5 */
#define SRC_GTM_MCS1_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CE4u)
/** Alias (User Manual Name) for SRC_GTM_MCS1_5.
* To use register names with standard convension, please use SRC_GTM_MCS1_5.
*/
#define SRC_GTMMCS15 (SRC_GTM_MCS1_5)

/** \brief CE8, MCS1 Shared Service Request 6 */
#define SRC_GTM_MCS1_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CE8u)
/** Alias (User Manual Name) for SRC_GTM_MCS1_6.
* To use register names with standard convension, please use SRC_GTM_MCS1_6.
*/
#define SRC_GTMMCS16 (SRC_GTM_MCS1_6)

/** \brief CEC, MCS1 Shared Service Request 7 */
#define SRC_GTM_MCS1_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CECu)
/** Alias (User Manual Name) for SRC_GTM_MCS1_7.
* To use register names with standard convension, please use SRC_GTM_MCS1_7.
*/
#define SRC_GTMMCS17 (SRC_GTM_MCS1_7)

/** \brief CF0, MCS2 Shared Service Request 0 */
#define SRC_GTM_MCS2_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CF0u)
/** Alias (User Manual Name) for SRC_GTM_MCS2_0.
* To use register names with standard convension, please use SRC_GTM_MCS2_0.
*/
#define SRC_GTMMCS20 (SRC_GTM_MCS2_0)

/** \brief CF4, MCS2 Shared Service Request 1 */
#define SRC_GTM_MCS2_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CF4u)
/** Alias (User Manual Name) for SRC_GTM_MCS2_1.
* To use register names with standard convension, please use SRC_GTM_MCS2_1.
*/
#define SRC_GTMMCS21 (SRC_GTM_MCS2_1)

/** \brief CF8, MCS2 Shared Service Request 2 */
#define SRC_GTM_MCS2_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CF8u)
/** Alias (User Manual Name) for SRC_GTM_MCS2_2.
* To use register names with standard convension, please use SRC_GTM_MCS2_2.
*/
#define SRC_GTMMCS22 (SRC_GTM_MCS2_2)

/** \brief CFC, MCS2 Shared Service Request 3 */
#define SRC_GTM_MCS2_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038CFCu)
/** Alias (User Manual Name) for SRC_GTM_MCS2_3.
* To use register names with standard convension, please use SRC_GTM_MCS2_3.
*/
#define SRC_GTMMCS23 (SRC_GTM_MCS2_3)

/** \brief D00, MCS2 Shared Service Request 4 */
#define SRC_GTM_MCS2_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D00u)
/** Alias (User Manual Name) for SRC_GTM_MCS2_4.
* To use register names with standard convension, please use SRC_GTM_MCS2_4.
*/
#define SRC_GTMMCS24 (SRC_GTM_MCS2_4)

/** \brief D04, MCS2 Shared Service Request 5 */
#define SRC_GTM_MCS2_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D04u)
/** Alias (User Manual Name) for SRC_GTM_MCS2_5.
* To use register names with standard convension, please use SRC_GTM_MCS2_5.
*/
#define SRC_GTMMCS25 (SRC_GTM_MCS2_5)

/** \brief D08, MCS2 Shared Service Request 6 */
#define SRC_GTM_MCS2_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D08u)
/** Alias (User Manual Name) for SRC_GTM_MCS2_6.
* To use register names with standard convension, please use SRC_GTM_MCS2_6.
*/
#define SRC_GTMMCS26 (SRC_GTM_MCS2_6)

/** \brief D0C, MCS2 Shared Service Request 7 */
#define SRC_GTM_MCS2_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D0Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS2_7.
* To use register names with standard convension, please use SRC_GTM_MCS2_7.
*/
#define SRC_GTMMCS27 (SRC_GTM_MCS2_7)

/** \brief D10, MCS3 Shared Service Request 0 */
#define SRC_GTM_MCS3_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D10u)
/** Alias (User Manual Name) for SRC_GTM_MCS3_0.
* To use register names with standard convension, please use SRC_GTM_MCS3_0.
*/
#define SRC_GTMMCS30 (SRC_GTM_MCS3_0)

/** \brief D14, MCS3 Shared Service Request 1 */
#define SRC_GTM_MCS3_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D14u)
/** Alias (User Manual Name) for SRC_GTM_MCS3_1.
* To use register names with standard convension, please use SRC_GTM_MCS3_1.
*/
#define SRC_GTMMCS31 (SRC_GTM_MCS3_1)

/** \brief D18, MCS3 Shared Service Request 2 */
#define SRC_GTM_MCS3_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D18u)
/** Alias (User Manual Name) for SRC_GTM_MCS3_2.
* To use register names with standard convension, please use SRC_GTM_MCS3_2.
*/
#define SRC_GTMMCS32 (SRC_GTM_MCS3_2)

/** \brief D1C, MCS3 Shared Service Request 3 */
#define SRC_GTM_MCS3_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D1Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS3_3.
* To use register names with standard convension, please use SRC_GTM_MCS3_3.
*/
#define SRC_GTMMCS33 (SRC_GTM_MCS3_3)

/** \brief D20, MCS3 Shared Service Request 4 */
#define SRC_GTM_MCS3_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D20u)
/** Alias (User Manual Name) for SRC_GTM_MCS3_4.
* To use register names with standard convension, please use SRC_GTM_MCS3_4.
*/
#define SRC_GTMMCS34 (SRC_GTM_MCS3_4)

/** \brief D24, MCS3 Shared Service Request 5 */
#define SRC_GTM_MCS3_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D24u)
/** Alias (User Manual Name) for SRC_GTM_MCS3_5.
* To use register names with standard convension, please use SRC_GTM_MCS3_5.
*/
#define SRC_GTMMCS35 (SRC_GTM_MCS3_5)

/** \brief D28, MCS3 Shared Service Request 6 */
#define SRC_GTM_MCS3_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D28u)
/** Alias (User Manual Name) for SRC_GTM_MCS3_6.
* To use register names with standard convension, please use SRC_GTM_MCS3_6.
*/
#define SRC_GTMMCS36 (SRC_GTM_MCS3_6)

/** \brief D2C, MCS3 Shared Service Request 7 */
#define SRC_GTM_MCS3_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D2Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS3_7.
* To use register names with standard convension, please use SRC_GTM_MCS3_7.
*/
#define SRC_GTMMCS37 (SRC_GTM_MCS3_7)

/** \brief D30, MCS4 Shared Service Request 0 */
#define SRC_GTM_MCS4_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D30u)
/** Alias (User Manual Name) for SRC_GTM_MCS4_0.
* To use register names with standard convension, please use SRC_GTM_MCS4_0.
*/
#define SRC_GTMMCS40 (SRC_GTM_MCS4_0)

/** \brief D34, MCS4 Shared Service Request 1 */
#define SRC_GTM_MCS4_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D34u)
/** Alias (User Manual Name) for SRC_GTM_MCS4_1.
* To use register names with standard convension, please use SRC_GTM_MCS4_1.
*/
#define SRC_GTMMCS41 (SRC_GTM_MCS4_1)

/** \brief D38, MCS4 Shared Service Request 2 */
#define SRC_GTM_MCS4_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D38u)
/** Alias (User Manual Name) for SRC_GTM_MCS4_2.
* To use register names with standard convension, please use SRC_GTM_MCS4_2.
*/
#define SRC_GTMMCS42 (SRC_GTM_MCS4_2)

/** \brief D3C, MCS4 Shared Service Request 3 */
#define SRC_GTM_MCS4_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D3Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS4_3.
* To use register names with standard convension, please use SRC_GTM_MCS4_3.
*/
#define SRC_GTMMCS43 (SRC_GTM_MCS4_3)

/** \brief D40, MCS4 Shared Service Request 4 */
#define SRC_GTM_MCS4_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D40u)
/** Alias (User Manual Name) for SRC_GTM_MCS4_4.
* To use register names with standard convension, please use SRC_GTM_MCS4_4.
*/
#define SRC_GTMMCS44 (SRC_GTM_MCS4_4)

/** \brief D44, MCS4 Shared Service Request 5 */
#define SRC_GTM_MCS4_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D44u)
/** Alias (User Manual Name) for SRC_GTM_MCS4_5.
* To use register names with standard convension, please use SRC_GTM_MCS4_5.
*/
#define SRC_GTMMCS45 (SRC_GTM_MCS4_5)

/** \brief D48, MCS4 Shared Service Request 6 */
#define SRC_GTM_MCS4_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D48u)
/** Alias (User Manual Name) for SRC_GTM_MCS4_6.
* To use register names with standard convension, please use SRC_GTM_MCS4_6.
*/
#define SRC_GTMMCS46 (SRC_GTM_MCS4_6)

/** \brief D4C, MCS4 Shared Service Request 7 */
#define SRC_GTM_MCS4_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D4Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS4_7.
* To use register names with standard convension, please use SRC_GTM_MCS4_7.
*/
#define SRC_GTMMCS47 (SRC_GTM_MCS4_7)

/** \brief D50, MCS5 Shared Service Request 0 */
#define SRC_GTM_MCS5_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D50u)
/** Alias (User Manual Name) for SRC_GTM_MCS5_0.
* To use register names with standard convension, please use SRC_GTM_MCS5_0.
*/
#define SRC_GTMMCS50 (SRC_GTM_MCS5_0)

/** \brief D54, MCS5 Shared Service Request 1 */
#define SRC_GTM_MCS5_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D54u)
/** Alias (User Manual Name) for SRC_GTM_MCS5_1.
* To use register names with standard convension, please use SRC_GTM_MCS5_1.
*/
#define SRC_GTMMCS51 (SRC_GTM_MCS5_1)

/** \brief D58, MCS5 Shared Service Request 2 */
#define SRC_GTM_MCS5_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D58u)
/** Alias (User Manual Name) for SRC_GTM_MCS5_2.
* To use register names with standard convension, please use SRC_GTM_MCS5_2.
*/
#define SRC_GTMMCS52 (SRC_GTM_MCS5_2)

/** \brief D5C, MCS5 Shared Service Request 3 */
#define SRC_GTM_MCS5_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D5Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS5_3.
* To use register names with standard convension, please use SRC_GTM_MCS5_3.
*/
#define SRC_GTMMCS53 (SRC_GTM_MCS5_3)

/** \brief D60, MCS5 Shared Service Request 4 */
#define SRC_GTM_MCS5_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D60u)
/** Alias (User Manual Name) for SRC_GTM_MCS5_4.
* To use register names with standard convension, please use SRC_GTM_MCS5_4.
*/
#define SRC_GTMMCS54 (SRC_GTM_MCS5_4)

/** \brief D64, MCS5 Shared Service Request 5 */
#define SRC_GTM_MCS5_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D64u)
/** Alias (User Manual Name) for SRC_GTM_MCS5_5.
* To use register names with standard convension, please use SRC_GTM_MCS5_5.
*/
#define SRC_GTMMCS55 (SRC_GTM_MCS5_5)

/** \brief D68, MCS5 Shared Service Request 6 */
#define SRC_GTM_MCS5_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D68u)
/** Alias (User Manual Name) for SRC_GTM_MCS5_6.
* To use register names with standard convension, please use SRC_GTM_MCS5_6.
*/
#define SRC_GTMMCS56 (SRC_GTM_MCS5_6)

/** \brief D6C, MCS5 Shared Service Request 7 */
#define SRC_GTM_MCS5_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D6Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS5_7.
* To use register names with standard convension, please use SRC_GTM_MCS5_7.
*/
#define SRC_GTMMCS57 (SRC_GTM_MCS5_7)

/** \brief D70, MCS6 Shared Service Request 0 */
#define SRC_GTM_MCS6_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D70u)
/** Alias (User Manual Name) for SRC_GTM_MCS6_0.
* To use register names with standard convension, please use SRC_GTM_MCS6_0.
*/
#define SRC_GTMMCS60 (SRC_GTM_MCS6_0)

/** \brief D74, MCS6 Shared Service Request 1 */
#define SRC_GTM_MCS6_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D74u)
/** Alias (User Manual Name) for SRC_GTM_MCS6_1.
* To use register names with standard convension, please use SRC_GTM_MCS6_1.
*/
#define SRC_GTMMCS61 (SRC_GTM_MCS6_1)

/** \brief D78, MCS6 Shared Service Request 2 */
#define SRC_GTM_MCS6_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D78u)
/** Alias (User Manual Name) for SRC_GTM_MCS6_2.
* To use register names with standard convension, please use SRC_GTM_MCS6_2.
*/
#define SRC_GTMMCS62 (SRC_GTM_MCS6_2)

/** \brief D7C, MCS6 Shared Service Request 3 */
#define SRC_GTM_MCS6_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D7Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS6_3.
* To use register names with standard convension, please use SRC_GTM_MCS6_3.
*/
#define SRC_GTMMCS63 (SRC_GTM_MCS6_3)

/** \brief D80, MCS6 Shared Service Request 4 */
#define SRC_GTM_MCS6_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D80u)
/** Alias (User Manual Name) for SRC_GTM_MCS6_4.
* To use register names with standard convension, please use SRC_GTM_MCS6_4.
*/
#define SRC_GTMMCS64 (SRC_GTM_MCS6_4)

/** \brief D84, MCS6 Shared Service Request 5 */
#define SRC_GTM_MCS6_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D84u)
/** Alias (User Manual Name) for SRC_GTM_MCS6_5.
* To use register names with standard convension, please use SRC_GTM_MCS6_5.
*/
#define SRC_GTMMCS65 (SRC_GTM_MCS6_5)

/** \brief D88, MCS6 Shared Service Request 6 */
#define SRC_GTM_MCS6_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D88u)
/** Alias (User Manual Name) for SRC_GTM_MCS6_6.
* To use register names with standard convension, please use SRC_GTM_MCS6_6.
*/
#define SRC_GTMMCS66 (SRC_GTM_MCS6_6)

/** \brief D8C, MCS6 Shared Service Request 7 */
#define SRC_GTM_MCS6_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038D8Cu)
/** Alias (User Manual Name) for SRC_GTM_MCS6_7.
* To use register names with standard convension, please use SRC_GTM_MCS6_7.
*/
#define SRC_GTMMCS67 (SRC_GTM_MCS6_7)

/** \brief DF0, ASCLIN18 Transmit Service Request */
#define SRC_ASCLIN18_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038DF0u)
/** Alias (User Manual Name) for SRC_ASCLIN18_TX.
* To use register names with standard convension, please use SRC_ASCLIN18_TX.
*/
#define SRC_ASCLIN18TX (SRC_ASCLIN18_TX)

/** \brief DF4, ASCLIN18 Receive Service Request */
#define SRC_ASCLIN18_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038DF4u)
/** Alias (User Manual Name) for SRC_ASCLIN18_RX.
* To use register names with standard convension, please use SRC_ASCLIN18_RX.
*/
#define SRC_ASCLIN18RX (SRC_ASCLIN18_RX)

/** \brief DF8, ASCLIN18 Error Service Request */
#define SRC_ASCLIN18_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038DF8u)
/** Alias (User Manual Name) for SRC_ASCLIN18_ERR.
* To use register names with standard convension, please use SRC_ASCLIN18_ERR.
*/
#define SRC_ASCLIN18ERR (SRC_ASCLIN18_ERR)

/** \brief DFC, ASCLIN19 Transmit Service Request */
#define SRC_ASCLIN19_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038DFCu)
/** Alias (User Manual Name) for SRC_ASCLIN19_TX.
* To use register names with standard convension, please use SRC_ASCLIN19_TX.
*/
#define SRC_ASCLIN19TX (SRC_ASCLIN19_TX)

/** \brief E00, ASCLIN19 Receive Service Request */
#define SRC_ASCLIN19_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E00u)
/** Alias (User Manual Name) for SRC_ASCLIN19_RX.
* To use register names with standard convension, please use SRC_ASCLIN19_RX.
*/
#define SRC_ASCLIN19RX (SRC_ASCLIN19_RX)

/** \brief E04, ASCLIN19 Error Service Request */
#define SRC_ASCLIN19_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E04u)
/** Alias (User Manual Name) for SRC_ASCLIN19_ERR.
* To use register names with standard convension, please use SRC_ASCLIN19_ERR.
*/
#define SRC_ASCLIN19ERR (SRC_ASCLIN19_ERR)

/** \brief E10, TOM0 Shared Service Request 0 */
#define SRC_GTM_TOM0_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E10u)
/** Alias (User Manual Name) for SRC_GTM_TOM0_0.
* To use register names with standard convension, please use SRC_GTM_TOM0_0.
*/
#define SRC_GTMTOM00 (SRC_GTM_TOM0_0)

/** \brief E14, TOM0 Shared Service Request 1 */
#define SRC_GTM_TOM0_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E14u)
/** Alias (User Manual Name) for SRC_GTM_TOM0_1.
* To use register names with standard convension, please use SRC_GTM_TOM0_1.
*/
#define SRC_GTMTOM01 (SRC_GTM_TOM0_1)

/** \brief E18, TOM0 Shared Service Request 2 */
#define SRC_GTM_TOM0_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E18u)
/** Alias (User Manual Name) for SRC_GTM_TOM0_2.
* To use register names with standard convension, please use SRC_GTM_TOM0_2.
*/
#define SRC_GTMTOM02 (SRC_GTM_TOM0_2)

/** \brief E1C, TOM0 Shared Service Request 3 */
#define SRC_GTM_TOM0_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E1Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM0_3.
* To use register names with standard convension, please use SRC_GTM_TOM0_3.
*/
#define SRC_GTMTOM03 (SRC_GTM_TOM0_3)

/** \brief E20, TOM0 Shared Service Request 4 */
#define SRC_GTM_TOM0_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E20u)
/** Alias (User Manual Name) for SRC_GTM_TOM0_4.
* To use register names with standard convension, please use SRC_GTM_TOM0_4.
*/
#define SRC_GTMTOM04 (SRC_GTM_TOM0_4)

/** \brief E24, TOM0 Shared Service Request 5 */
#define SRC_GTM_TOM0_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E24u)
/** Alias (User Manual Name) for SRC_GTM_TOM0_5.
* To use register names with standard convension, please use SRC_GTM_TOM0_5.
*/
#define SRC_GTMTOM05 (SRC_GTM_TOM0_5)

/** \brief E28, TOM0 Shared Service Request 6 */
#define SRC_GTM_TOM0_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E28u)
/** Alias (User Manual Name) for SRC_GTM_TOM0_6.
* To use register names with standard convension, please use SRC_GTM_TOM0_6.
*/
#define SRC_GTMTOM06 (SRC_GTM_TOM0_6)

/** \brief E2C, TOM0 Shared Service Request 7 */
#define SRC_GTM_TOM0_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E2Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM0_7.
* To use register names with standard convension, please use SRC_GTM_TOM0_7.
*/
#define SRC_GTMTOM07 (SRC_GTM_TOM0_7)

/** \brief E30, TOM1 Shared Service Request 0 */
#define SRC_GTM_TOM1_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E30u)
/** Alias (User Manual Name) for SRC_GTM_TOM1_0.
* To use register names with standard convension, please use SRC_GTM_TOM1_0.
*/
#define SRC_GTMTOM10 (SRC_GTM_TOM1_0)

/** \brief E34, TOM1 Shared Service Request 1 */
#define SRC_GTM_TOM1_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E34u)
/** Alias (User Manual Name) for SRC_GTM_TOM1_1.
* To use register names with standard convension, please use SRC_GTM_TOM1_1.
*/
#define SRC_GTMTOM11 (SRC_GTM_TOM1_1)

/** \brief E38, TOM1 Shared Service Request 2 */
#define SRC_GTM_TOM1_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E38u)
/** Alias (User Manual Name) for SRC_GTM_TOM1_2.
* To use register names with standard convension, please use SRC_GTM_TOM1_2.
*/
#define SRC_GTMTOM12 (SRC_GTM_TOM1_2)

/** \brief E3C, TOM1 Shared Service Request 3 */
#define SRC_GTM_TOM1_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E3Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM1_3.
* To use register names with standard convension, please use SRC_GTM_TOM1_3.
*/
#define SRC_GTMTOM13 (SRC_GTM_TOM1_3)

/** \brief E40, TOM1 Shared Service Request 4 */
#define SRC_GTM_TOM1_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E40u)
/** Alias (User Manual Name) for SRC_GTM_TOM1_4.
* To use register names with standard convension, please use SRC_GTM_TOM1_4.
*/
#define SRC_GTMTOM14 (SRC_GTM_TOM1_4)

/** \brief E44, TOM1 Shared Service Request 5 */
#define SRC_GTM_TOM1_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E44u)
/** Alias (User Manual Name) for SRC_GTM_TOM1_5.
* To use register names with standard convension, please use SRC_GTM_TOM1_5.
*/
#define SRC_GTMTOM15 (SRC_GTM_TOM1_5)

/** \brief E48, TOM1 Shared Service Request 6 */
#define SRC_GTM_TOM1_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E48u)
/** Alias (User Manual Name) for SRC_GTM_TOM1_6.
* To use register names with standard convension, please use SRC_GTM_TOM1_6.
*/
#define SRC_GTMTOM16 (SRC_GTM_TOM1_6)

/** \brief E4C, TOM1 Shared Service Request 7 */
#define SRC_GTM_TOM1_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E4Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM1_7.
* To use register names with standard convension, please use SRC_GTM_TOM1_7.
*/
#define SRC_GTMTOM17 (SRC_GTM_TOM1_7)

/** \brief E50, TOM2 Shared Service Request 0 */
#define SRC_GTM_TOM2_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E50u)
/** Alias (User Manual Name) for SRC_GTM_TOM2_0.
* To use register names with standard convension, please use SRC_GTM_TOM2_0.
*/
#define SRC_GTMTOM20 (SRC_GTM_TOM2_0)

/** \brief E54, TOM2 Shared Service Request 1 */
#define SRC_GTM_TOM2_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E54u)
/** Alias (User Manual Name) for SRC_GTM_TOM2_1.
* To use register names with standard convension, please use SRC_GTM_TOM2_1.
*/
#define SRC_GTMTOM21 (SRC_GTM_TOM2_1)

/** \brief E58, TOM2 Shared Service Request 2 */
#define SRC_GTM_TOM2_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E58u)
/** Alias (User Manual Name) for SRC_GTM_TOM2_2.
* To use register names with standard convension, please use SRC_GTM_TOM2_2.
*/
#define SRC_GTMTOM22 (SRC_GTM_TOM2_2)

/** \brief E5C, TOM2 Shared Service Request 3 */
#define SRC_GTM_TOM2_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E5Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM2_3.
* To use register names with standard convension, please use SRC_GTM_TOM2_3.
*/
#define SRC_GTMTOM23 (SRC_GTM_TOM2_3)

/** \brief E60, TOM2 Shared Service Request 4 */
#define SRC_GTM_TOM2_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E60u)
/** Alias (User Manual Name) for SRC_GTM_TOM2_4.
* To use register names with standard convension, please use SRC_GTM_TOM2_4.
*/
#define SRC_GTMTOM24 (SRC_GTM_TOM2_4)

/** \brief E64, TOM2 Shared Service Request 5 */
#define SRC_GTM_TOM2_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E64u)
/** Alias (User Manual Name) for SRC_GTM_TOM2_5.
* To use register names with standard convension, please use SRC_GTM_TOM2_5.
*/
#define SRC_GTMTOM25 (SRC_GTM_TOM2_5)

/** \brief E68, TOM2 Shared Service Request 6 */
#define SRC_GTM_TOM2_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E68u)
/** Alias (User Manual Name) for SRC_GTM_TOM2_6.
* To use register names with standard convension, please use SRC_GTM_TOM2_6.
*/
#define SRC_GTMTOM26 (SRC_GTM_TOM2_6)

/** \brief E6C, TOM2 Shared Service Request 7 */
#define SRC_GTM_TOM2_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E6Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM2_7.
* To use register names with standard convension, please use SRC_GTM_TOM2_7.
*/
#define SRC_GTMTOM27 (SRC_GTM_TOM2_7)

/** \brief E70, TOM3 Shared Service Request 0 */
#define SRC_GTM_TOM3_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E70u)
/** Alias (User Manual Name) for SRC_GTM_TOM3_0.
* To use register names with standard convension, please use SRC_GTM_TOM3_0.
*/
#define SRC_GTMTOM30 (SRC_GTM_TOM3_0)

/** \brief E74, TOM3 Shared Service Request 1 */
#define SRC_GTM_TOM3_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E74u)
/** Alias (User Manual Name) for SRC_GTM_TOM3_1.
* To use register names with standard convension, please use SRC_GTM_TOM3_1.
*/
#define SRC_GTMTOM31 (SRC_GTM_TOM3_1)

/** \brief E78, TOM3 Shared Service Request 2 */
#define SRC_GTM_TOM3_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E78u)
/** Alias (User Manual Name) for SRC_GTM_TOM3_2.
* To use register names with standard convension, please use SRC_GTM_TOM3_2.
*/
#define SRC_GTMTOM32 (SRC_GTM_TOM3_2)

/** \brief E7C, TOM3 Shared Service Request 3 */
#define SRC_GTM_TOM3_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E7Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM3_3.
* To use register names with standard convension, please use SRC_GTM_TOM3_3.
*/
#define SRC_GTMTOM33 (SRC_GTM_TOM3_3)

/** \brief E80, TOM3 Shared Service Request 4 */
#define SRC_GTM_TOM3_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E80u)
/** Alias (User Manual Name) for SRC_GTM_TOM3_4.
* To use register names with standard convension, please use SRC_GTM_TOM3_4.
*/
#define SRC_GTMTOM34 (SRC_GTM_TOM3_4)

/** \brief E84, TOM3 Shared Service Request 5 */
#define SRC_GTM_TOM3_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E84u)
/** Alias (User Manual Name) for SRC_GTM_TOM3_5.
* To use register names with standard convension, please use SRC_GTM_TOM3_5.
*/
#define SRC_GTMTOM35 (SRC_GTM_TOM3_5)

/** \brief E88, TOM3 Shared Service Request 6 */
#define SRC_GTM_TOM3_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E88u)
/** Alias (User Manual Name) for SRC_GTM_TOM3_6.
* To use register names with standard convension, please use SRC_GTM_TOM3_6.
*/
#define SRC_GTMTOM36 (SRC_GTM_TOM3_6)

/** \brief E8C, TOM3 Shared Service Request 7 */
#define SRC_GTM_TOM3_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E8Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM3_7.
* To use register names with standard convension, please use SRC_GTM_TOM3_7.
*/
#define SRC_GTMTOM37 (SRC_GTM_TOM3_7)

/** \brief E90, TOM4 Shared Service Request 0 */
#define SRC_GTM_TOM4_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E90u)
/** Alias (User Manual Name) for SRC_GTM_TOM4_0.
* To use register names with standard convension, please use SRC_GTM_TOM4_0.
*/
#define SRC_GTMTOM40 (SRC_GTM_TOM4_0)

/** \brief E94, TOM4 Shared Service Request 1 */
#define SRC_GTM_TOM4_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E94u)
/** Alias (User Manual Name) for SRC_GTM_TOM4_1.
* To use register names with standard convension, please use SRC_GTM_TOM4_1.
*/
#define SRC_GTMTOM41 (SRC_GTM_TOM4_1)

/** \brief E98, TOM4 Shared Service Request 2 */
#define SRC_GTM_TOM4_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E98u)
/** Alias (User Manual Name) for SRC_GTM_TOM4_2.
* To use register names with standard convension, please use SRC_GTM_TOM4_2.
*/
#define SRC_GTMTOM42 (SRC_GTM_TOM4_2)

/** \brief E9C, TOM4 Shared Service Request 3 */
#define SRC_GTM_TOM4_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038E9Cu)
/** Alias (User Manual Name) for SRC_GTM_TOM4_3.
* To use register names with standard convension, please use SRC_GTM_TOM4_3.
*/
#define SRC_GTMTOM43 (SRC_GTM_TOM4_3)

/** \brief EA0, TOM4 Shared Service Request 4 */
#define SRC_GTM_TOM4_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EA0u)
/** Alias (User Manual Name) for SRC_GTM_TOM4_4.
* To use register names with standard convension, please use SRC_GTM_TOM4_4.
*/
#define SRC_GTMTOM44 (SRC_GTM_TOM4_4)

/** \brief EA4, TOM4 Shared Service Request 5 */
#define SRC_GTM_TOM4_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EA4u)
/** Alias (User Manual Name) for SRC_GTM_TOM4_5.
* To use register names with standard convension, please use SRC_GTM_TOM4_5.
*/
#define SRC_GTMTOM45 (SRC_GTM_TOM4_5)

/** \brief EA8, TOM4 Shared Service Request 6 */
#define SRC_GTM_TOM4_6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EA8u)
/** Alias (User Manual Name) for SRC_GTM_TOM4_6.
* To use register names with standard convension, please use SRC_GTM_TOM4_6.
*/
#define SRC_GTMTOM46 (SRC_GTM_TOM4_6)

/** \brief EAC, TOM4 Shared Service Request 7 */
#define SRC_GTM_TOM4_7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EACu)
/** Alias (User Manual Name) for SRC_GTM_TOM4_7.
* To use register names with standard convension, please use SRC_GTM_TOM4_7.
*/
#define SRC_GTMTOM47 (SRC_GTM_TOM4_7)

/** \brief ED0, ASCLIN20 Transmit Service Request */
#define SRC_ASCLIN20_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038ED0u)
/** Alias (User Manual Name) for SRC_ASCLIN20_TX.
* To use register names with standard convension, please use SRC_ASCLIN20_TX.
*/
#define SRC_ASCLIN20TX (SRC_ASCLIN20_TX)

/** \brief ED4, ASCLIN20 Receive Service Request */
#define SRC_ASCLIN20_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038ED4u)
/** Alias (User Manual Name) for SRC_ASCLIN20_RX.
* To use register names with standard convension, please use SRC_ASCLIN20_RX.
*/
#define SRC_ASCLIN20RX (SRC_ASCLIN20_RX)

/** \brief ED8, ASCLIN20 Error Service Request */
#define SRC_ASCLIN20_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038ED8u)
/** Alias (User Manual Name) for SRC_ASCLIN20_ERR.
* To use register names with standard convension, please use SRC_ASCLIN20_ERR.
*/
#define SRC_ASCLIN20ERR (SRC_ASCLIN20_ERR)

/** \brief EDC, ASCLIN21 Transmit Service Request */
#define SRC_ASCLIN21_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EDCu)
/** Alias (User Manual Name) for SRC_ASCLIN21_TX.
* To use register names with standard convension, please use SRC_ASCLIN21_TX.
*/
#define SRC_ASCLIN21TX (SRC_ASCLIN21_TX)

/** \brief EE0, ASCLIN21 Receive Service Request */
#define SRC_ASCLIN21_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EE0u)
/** Alias (User Manual Name) for SRC_ASCLIN21_RX.
* To use register names with standard convension, please use SRC_ASCLIN21_RX.
*/
#define SRC_ASCLIN21RX (SRC_ASCLIN21_RX)

/** \brief EE4, ASCLIN21 Error Service Request */
#define SRC_ASCLIN21_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EE4u)
/** Alias (User Manual Name) for SRC_ASCLIN21_ERR.
* To use register names with standard convension, please use SRC_ASCLIN21_ERR.
*/
#define SRC_ASCLIN21ERR (SRC_ASCLIN21_ERR)

/** \brief EF0, ATOM0 Shared Service Request 0 */
#define SRC_GTM_ATOM0_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EF0u)
/** Alias (User Manual Name) for SRC_GTM_ATOM0_0.
* To use register names with standard convension, please use SRC_GTM_ATOM0_0.
*/
#define SRC_GTMATOM00 (SRC_GTM_ATOM0_0)

/** \brief EF4, ATOM0 Shared Service Request 1 */
#define SRC_GTM_ATOM0_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EF4u)
/** Alias (User Manual Name) for SRC_GTM_ATOM0_1.
* To use register names with standard convension, please use SRC_GTM_ATOM0_1.
*/
#define SRC_GTMATOM01 (SRC_GTM_ATOM0_1)

/** \brief EF8, ATOM0 Shared Service Request 2 */
#define SRC_GTM_ATOM0_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EF8u)
/** Alias (User Manual Name) for SRC_GTM_ATOM0_2.
* To use register names with standard convension, please use SRC_GTM_ATOM0_2.
*/
#define SRC_GTMATOM02 (SRC_GTM_ATOM0_2)

/** \brief EFC, ATOM0 Shared Service Request 3 */
#define SRC_GTM_ATOM0_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038EFCu)
/** Alias (User Manual Name) for SRC_GTM_ATOM0_3.
* To use register names with standard convension, please use SRC_GTM_ATOM0_3.
*/
#define SRC_GTMATOM03 (SRC_GTM_ATOM0_3)

/** \brief F00, ATOM1 Shared Service Request 0 */
#define SRC_GTM_ATOM1_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F00u)
/** Alias (User Manual Name) for SRC_GTM_ATOM1_0.
* To use register names with standard convension, please use SRC_GTM_ATOM1_0.
*/
#define SRC_GTMATOM10 (SRC_GTM_ATOM1_0)

/** \brief F04, ATOM1 Shared Service Request 1 */
#define SRC_GTM_ATOM1_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F04u)
/** Alias (User Manual Name) for SRC_GTM_ATOM1_1.
* To use register names with standard convension, please use SRC_GTM_ATOM1_1.
*/
#define SRC_GTMATOM11 (SRC_GTM_ATOM1_1)

/** \brief F08, ATOM1 Shared Service Request 2 */
#define SRC_GTM_ATOM1_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F08u)
/** Alias (User Manual Name) for SRC_GTM_ATOM1_2.
* To use register names with standard convension, please use SRC_GTM_ATOM1_2.
*/
#define SRC_GTMATOM12 (SRC_GTM_ATOM1_2)

/** \brief F0C, ATOM1 Shared Service Request 3 */
#define SRC_GTM_ATOM1_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F0Cu)
/** Alias (User Manual Name) for SRC_GTM_ATOM1_3.
* To use register names with standard convension, please use SRC_GTM_ATOM1_3.
*/
#define SRC_GTMATOM13 (SRC_GTM_ATOM1_3)

/** \brief F10, ATOM2 Shared Service Request 0 */
#define SRC_GTM_ATOM2_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F10u)
/** Alias (User Manual Name) for SRC_GTM_ATOM2_0.
* To use register names with standard convension, please use SRC_GTM_ATOM2_0.
*/
#define SRC_GTMATOM20 (SRC_GTM_ATOM2_0)

/** \brief F14, ATOM2 Shared Service Request 1 */
#define SRC_GTM_ATOM2_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F14u)
/** Alias (User Manual Name) for SRC_GTM_ATOM2_1.
* To use register names with standard convension, please use SRC_GTM_ATOM2_1.
*/
#define SRC_GTMATOM21 (SRC_GTM_ATOM2_1)

/** \brief F18, ATOM2 Shared Service Request 2 */
#define SRC_GTM_ATOM2_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F18u)
/** Alias (User Manual Name) for SRC_GTM_ATOM2_2.
* To use register names with standard convension, please use SRC_GTM_ATOM2_2.
*/
#define SRC_GTMATOM22 (SRC_GTM_ATOM2_2)

/** \brief F1C, ATOM2 Shared Service Request 3 */
#define SRC_GTM_ATOM2_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F1Cu)
/** Alias (User Manual Name) for SRC_GTM_ATOM2_3.
* To use register names with standard convension, please use SRC_GTM_ATOM2_3.
*/
#define SRC_GTMATOM23 (SRC_GTM_ATOM2_3)

/** \brief F20, ATOM3 Shared Service Request 0 */
#define SRC_GTM_ATOM3_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F20u)
/** Alias (User Manual Name) for SRC_GTM_ATOM3_0.
* To use register names with standard convension, please use SRC_GTM_ATOM3_0.
*/
#define SRC_GTMATOM30 (SRC_GTM_ATOM3_0)

/** \brief F24, ATOM3 Shared Service Request 1 */
#define SRC_GTM_ATOM3_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F24u)
/** Alias (User Manual Name) for SRC_GTM_ATOM3_1.
* To use register names with standard convension, please use SRC_GTM_ATOM3_1.
*/
#define SRC_GTMATOM31 (SRC_GTM_ATOM3_1)

/** \brief F28, ATOM3 Shared Service Request 2 */
#define SRC_GTM_ATOM3_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F28u)
/** Alias (User Manual Name) for SRC_GTM_ATOM3_2.
* To use register names with standard convension, please use SRC_GTM_ATOM3_2.
*/
#define SRC_GTMATOM32 (SRC_GTM_ATOM3_2)

/** \brief F2C, ATOM3 Shared Service Request 3 */
#define SRC_GTM_ATOM3_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F2Cu)
/** Alias (User Manual Name) for SRC_GTM_ATOM3_3.
* To use register names with standard convension, please use SRC_GTM_ATOM3_3.
*/
#define SRC_GTMATOM33 (SRC_GTM_ATOM3_3)

/** \brief F30, ATOM4 Shared Service Request 0 */
#define SRC_GTM_ATOM4_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F30u)
/** Alias (User Manual Name) for SRC_GTM_ATOM4_0.
* To use register names with standard convension, please use SRC_GTM_ATOM4_0.
*/
#define SRC_GTMATOM40 (SRC_GTM_ATOM4_0)

/** \brief F34, ATOM4 Shared Service Request 1 */
#define SRC_GTM_ATOM4_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F34u)
/** Alias (User Manual Name) for SRC_GTM_ATOM4_1.
* To use register names with standard convension, please use SRC_GTM_ATOM4_1.
*/
#define SRC_GTMATOM41 (SRC_GTM_ATOM4_1)

/** \brief F38, ATOM4 Shared Service Request 2 */
#define SRC_GTM_ATOM4_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F38u)
/** Alias (User Manual Name) for SRC_GTM_ATOM4_2.
* To use register names with standard convension, please use SRC_GTM_ATOM4_2.
*/
#define SRC_GTMATOM42 (SRC_GTM_ATOM4_2)

/** \brief F3C, ATOM4 Shared Service Request 3 */
#define SRC_GTM_ATOM4_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F3Cu)
/** Alias (User Manual Name) for SRC_GTM_ATOM4_3.
* To use register names with standard convension, please use SRC_GTM_ATOM4_3.
*/
#define SRC_GTMATOM43 (SRC_GTM_ATOM4_3)

/** \brief F40, ATOM5 Shared Service Request 0 */
#define SRC_GTM_ATOM5_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F40u)
/** Alias (User Manual Name) for SRC_GTM_ATOM5_0.
* To use register names with standard convension, please use SRC_GTM_ATOM5_0.
*/
#define SRC_GTMATOM50 (SRC_GTM_ATOM5_0)

/** \brief F44, ATOM5 Shared Service Request 1 */
#define SRC_GTM_ATOM5_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F44u)
/** Alias (User Manual Name) for SRC_GTM_ATOM5_1.
* To use register names with standard convension, please use SRC_GTM_ATOM5_1.
*/
#define SRC_GTMATOM51 (SRC_GTM_ATOM5_1)

/** \brief F48, ATOM5 Shared Service Request 2 */
#define SRC_GTM_ATOM5_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F48u)
/** Alias (User Manual Name) for SRC_GTM_ATOM5_2.
* To use register names with standard convension, please use SRC_GTM_ATOM5_2.
*/
#define SRC_GTMATOM52 (SRC_GTM_ATOM5_2)

/** \brief F4C, ATOM5 Shared Service Request 3 */
#define SRC_GTM_ATOM5_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F4Cu)
/** Alias (User Manual Name) for SRC_GTM_ATOM5_3.
* To use register names with standard convension, please use SRC_GTM_ATOM5_3.
*/
#define SRC_GTMATOM53 (SRC_GTM_ATOM5_3)

/** \brief F50, ATOM6 Shared Service Request 0 */
#define SRC_GTM_ATOM6_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F50u)
/** Alias (User Manual Name) for SRC_GTM_ATOM6_0.
* To use register names with standard convension, please use SRC_GTM_ATOM6_0.
*/
#define SRC_GTMATOM60 (SRC_GTM_ATOM6_0)

/** \brief F54, ATOM6 Shared Service Request 1 */
#define SRC_GTM_ATOM6_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F54u)
/** Alias (User Manual Name) for SRC_GTM_ATOM6_1.
* To use register names with standard convension, please use SRC_GTM_ATOM6_1.
*/
#define SRC_GTMATOM61 (SRC_GTM_ATOM6_1)

/** \brief F58, ATOM6 Shared Service Request 2 */
#define SRC_GTM_ATOM6_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F58u)
/** Alias (User Manual Name) for SRC_GTM_ATOM6_2.
* To use register names with standard convension, please use SRC_GTM_ATOM6_2.
*/
#define SRC_GTMATOM62 (SRC_GTM_ATOM6_2)

/** \brief F5C, ATOM6 Shared Service Request 3 */
#define SRC_GTM_ATOM6_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F5Cu)
/** Alias (User Manual Name) for SRC_GTM_ATOM6_3.
* To use register names with standard convension, please use SRC_GTM_ATOM6_3.
*/
#define SRC_GTMATOM63 (SRC_GTM_ATOM6_3)

/** \brief F60, ATOM7 Shared Service Request 0 */
#define SRC_GTM_ATOM7_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F60u)
/** Alias (User Manual Name) for SRC_GTM_ATOM7_0.
* To use register names with standard convension, please use SRC_GTM_ATOM7_0.
*/
#define SRC_GTMATOM70 (SRC_GTM_ATOM7_0)

/** \brief F64, ATOM7 Shared Service Request 1 */
#define SRC_GTM_ATOM7_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F64u)
/** Alias (User Manual Name) for SRC_GTM_ATOM7_1.
* To use register names with standard convension, please use SRC_GTM_ATOM7_1.
*/
#define SRC_GTMATOM71 (SRC_GTM_ATOM7_1)

/** \brief F68, ATOM7 Shared Service Request 2 */
#define SRC_GTM_ATOM7_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F68u)
/** Alias (User Manual Name) for SRC_GTM_ATOM7_2.
* To use register names with standard convension, please use SRC_GTM_ATOM7_2.
*/
#define SRC_GTMATOM72 (SRC_GTM_ATOM7_2)

/** \brief F6C, ATOM7 Shared Service Request 3 */
#define SRC_GTM_ATOM7_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F6Cu)
/** Alias (User Manual Name) for SRC_GTM_ATOM7_3.
* To use register names with standard convension, please use SRC_GTM_ATOM7_3.
*/
#define SRC_GTMATOM73 (SRC_GTM_ATOM7_3)

/** \brief F70, ATOM8 Shared Service Request 0 */
#define SRC_GTM_ATOM8_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F70u)
/** Alias (User Manual Name) for SRC_GTM_ATOM8_0.
* To use register names with standard convension, please use SRC_GTM_ATOM8_0.
*/
#define SRC_GTMATOM80 (SRC_GTM_ATOM8_0)

/** \brief F74, ATOM8 Shared Service Request 1 */
#define SRC_GTM_ATOM8_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F74u)
/** Alias (User Manual Name) for SRC_GTM_ATOM8_1.
* To use register names with standard convension, please use SRC_GTM_ATOM8_1.
*/
#define SRC_GTMATOM81 (SRC_GTM_ATOM8_1)

/** \brief F78, ATOM8 Shared Service Request 2 */
#define SRC_GTM_ATOM8_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F78u)
/** Alias (User Manual Name) for SRC_GTM_ATOM8_2.
* To use register names with standard convension, please use SRC_GTM_ATOM8_2.
*/
#define SRC_GTMATOM82 (SRC_GTM_ATOM8_2)

/** \brief F7C, ATOM8 Shared Service Request 3 */
#define SRC_GTM_ATOM8_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038F7Cu)
/** Alias (User Manual Name) for SRC_GTM_ATOM8_3.
* To use register names with standard convension, please use SRC_GTM_ATOM8_3.
*/
#define SRC_GTMATOM83 (SRC_GTM_ATOM8_3)

/** \brief FB0, ASCLIN22 Transmit Service Request */
#define SRC_ASCLIN22_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FB0u)
/** Alias (User Manual Name) for SRC_ASCLIN22_TX.
* To use register names with standard convension, please use SRC_ASCLIN22_TX.
*/
#define SRC_ASCLIN22TX (SRC_ASCLIN22_TX)

/** \brief FB4, ASCLIN22 Receive Service Request */
#define SRC_ASCLIN22_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FB4u)
/** Alias (User Manual Name) for SRC_ASCLIN22_RX.
* To use register names with standard convension, please use SRC_ASCLIN22_RX.
*/
#define SRC_ASCLIN22RX (SRC_ASCLIN22_RX)

/** \brief FB8, ASCLIN22 Error Service Request */
#define SRC_ASCLIN22_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FB8u)
/** Alias (User Manual Name) for SRC_ASCLIN22_ERR.
* To use register names with standard convension, please use SRC_ASCLIN22_ERR.
*/
#define SRC_ASCLIN22ERR (SRC_ASCLIN22_ERR)

/** \brief FBC, ASCLIN23 Transmit Service Request */
#define SRC_ASCLIN23_TX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FBCu)
/** Alias (User Manual Name) for SRC_ASCLIN23_TX.
* To use register names with standard convension, please use SRC_ASCLIN23_TX.
*/
#define SRC_ASCLIN23TX (SRC_ASCLIN23_TX)

/** \brief FC0, ASCLIN23 Receive Service Request */
#define SRC_ASCLIN23_RX /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FC0u)
/** Alias (User Manual Name) for SRC_ASCLIN23_RX.
* To use register names with standard convension, please use SRC_ASCLIN23_RX.
*/
#define SRC_ASCLIN23RX (SRC_ASCLIN23_RX)

/** \brief FC4, ASCLIN23 Error Service Request */
#define SRC_ASCLIN23_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FC4u)
/** Alias (User Manual Name) for SRC_ASCLIN23_ERR.
* To use register names with standard convension, please use SRC_ASCLIN23_ERR.
*/
#define SRC_ASCLIN23ERR (SRC_ASCLIN23_ERR)

/** \brief FD0, GTM Multi Channel Sequencer Service Request 0 */
#define SRC_GTM_MCSW0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FD0u)
/** Alias (User Manual Name) for SRC_GTM_MCSW0.
* To use register names with standard convension, please use SRC_GTM_MCSW0.
*/
#define SRC_GTMMCSW0 (SRC_GTM_MCSW0)

/** \brief FD4, GTM Multi Channel Sequencer Service Request 1 */
#define SRC_GTM_MCSW1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FD4u)
/** Alias (User Manual Name) for SRC_GTM_MCSW1.
* To use register names with standard convension, please use SRC_GTM_MCSW1.
*/
#define SRC_GTMMCSW1 (SRC_GTM_MCSW1)

/** \brief FD8, GTM Multi Channel Sequencer Service Request 2 */
#define SRC_GTM_MCSW2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FD8u)
/** Alias (User Manual Name) for SRC_GTM_MCSW2.
* To use register names with standard convension, please use SRC_GTM_MCSW2.
*/
#define SRC_GTMMCSW2 (SRC_GTM_MCSW2)

/** \brief FDC, GTM Multi Channel Sequencer Service Request 3 */
#define SRC_GTM_MCSW3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FDCu)
/** Alias (User Manual Name) for SRC_GTM_MCSW3.
* To use register names with standard convension, please use SRC_GTM_MCSW3.
*/
#define SRC_GTMMCSW3 (SRC_GTM_MCSW3)

/** \brief FE0, GTM Multi Channel Sequencer Service Request 4 */
#define SRC_GTM_MCSW4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FE0u)
/** Alias (User Manual Name) for SRC_GTM_MCSW4.
* To use register names with standard convension, please use SRC_GTM_MCSW4.
*/
#define SRC_GTMMCSW4 (SRC_GTM_MCSW4)

/** \brief FE4, GTM Multi Channel Sequencer Service Request 5 */
#define SRC_GTM_MCSW5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FE4u)
/** Alias (User Manual Name) for SRC_GTM_MCSW5.
* To use register names with standard convension, please use SRC_GTM_MCSW5.
*/
#define SRC_GTMMCSW5 (SRC_GTM_MCSW5)

/** \brief FE8, GTM Multi Channel Sequencer Service Request 6 */
#define SRC_GTM_MCSW6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FE8u)
/** Alias (User Manual Name) for SRC_GTM_MCSW6.
* To use register names with standard convension, please use SRC_GTM_MCSW6.
*/
#define SRC_GTMMCSW6 (SRC_GTM_MCSW6)

/** \brief FEC, GTM Multi Channel Sequencer Service Request 7 */
#define SRC_GTM_MCSW7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FECu)
/** Alias (User Manual Name) for SRC_GTM_MCSW7.
* To use register names with standard convension, please use SRC_GTM_MCSW7.
*/
#define SRC_GTMMCSW7 (SRC_GTM_MCSW7)

/** \brief FF0, GTM Multi Channel Sequencer Service Request 8 */
#define SRC_GTM_MCSW8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FF0u)
/** Alias (User Manual Name) for SRC_GTM_MCSW8.
* To use register names with standard convension, please use SRC_GTM_MCSW8.
*/
#define SRC_GTMMCSW8 (SRC_GTM_MCSW8)

/** \brief FF4, GTM Multi Channel Sequencer Service Request 9 */
#define SRC_GTM_MCSW9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038FF4u)
/** Alias (User Manual Name) for SRC_GTM_MCSW9.
* To use register names with standard convension, please use SRC_GTM_MCSW9.
*/
#define SRC_GTMMCSW9 (SRC_GTM_MCSW9)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXSRC_REG_H */