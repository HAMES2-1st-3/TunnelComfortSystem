/**
 * \file IfxSrc_reg.h
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

/** \brief 20, SBCU Service Request (SPB Bus Control Unit) */
#define SRC_SBCU /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038020u)
/** Alias (User Manual Name) for SRC_SBCU.
* To use register names with standard convension, please use SRC_SBCU.
*/
#define SRC_BCUSPB (SRC_SBCU)

/** \brief 24, EBCU Service Request (BBB Bus Control Unit, on ED and ADAS devices only) */
#define SRC_EBCU /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038024u)
/** Alias (User Manual Name) for SRC_EBCU.
* To use register names with standard convension, please use SRC_EBCU.
*/
#define SRC_BCUBBB (SRC_EBCU)

/** \brief 2C, AGBT Service Request (on ED devices only) */
#define SRC_AGBT_AGBT0_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003802Cu)
/** Alias (User Manual Name) for SRC_AGBT_AGBT0_SR.
* To use register names with standard convension, please use SRC_AGBT_AGBT0_SR.
*/
#define SRC_AGBT (SRC_AGBT_AGBT0_SR)

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

/** \brief 178, QSPI2 High Speed Capture Service Request */
#define SRC_QSPI2HC /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038178u)

/** \brief 17C, QSPI3 High Speed Capture Service Request */
#define SRC_QSPI3HC /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003817Cu)

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

/** \brief 900, HSPDM0 Buffer Service Request */
#define SRC_HSPDM_HSPDM0_BFR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038900u)
/** Alias (User Manual Name) for SRC_HSPDM_HSPDM0_BFR.
* To use register names with standard convension, please use SRC_HSPDM_HSPDM0_BFR.
*/
#define SRC_HSPDM0BFR (SRC_HSPDM_HSPDM0_BFR)

/** \brief 904, HSPDM0 RAMP Events  Service Request */
#define SRC_HSPDM_HSPDM0_RAMP /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038904u)
/** Alias (User Manual Name) for SRC_HSPDM_HSPDM0_RAMP.
* To use register names with standard convension, please use SRC_HSPDM_HSPDM0_RAMP.
*/
#define SRC_HSPDM0RAMP (SRC_HSPDM_HSPDM0_RAMP)

/** \brief 908, HSPDM0 Error / RAM Overflow Service Request */
#define SRC_HSPDM_HSPDM0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038908u)
/** Alias (User Manual Name) for SRC_HSPDM_HSPDM0_ERR.
* To use register names with standard convension, please use SRC_HSPDM_HSPDM0_ERR.
*/
#define SRC_HSPDM0ERR (SRC_HSPDM_HSPDM0_ERR)

/** \brief 970, Radar Interface 0 Error Service Request */
#define SRC_RIF_RIF0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038970u)
/** Alias (User Manual Name) for SRC_RIF_RIF0_ERR.
* To use register names with standard convension, please use SRC_RIF_RIF0_ERR.
*/
#define SRC_RIF0ERR (SRC_RIF_RIF0_ERR)

/** \brief 974, Radar Interface 0 Service Request */
#define SRC_RIF_RIF0_INT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038974u)
/** Alias (User Manual Name) for SRC_RIF_RIF0_INT.
* To use register names with standard convension, please use SRC_RIF_RIF0_INT.
*/
#define SRC_RIF0INT (SRC_RIF_RIF0_INT)

/** \brief 978, Radar Interface 1 Error Service Request */
#define SRC_RIF_RIF1_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038978u)
/** Alias (User Manual Name) for SRC_RIF_RIF1_ERR.
* To use register names with standard convension, please use SRC_RIF_RIF1_ERR.
*/
#define SRC_RIF1ERR (SRC_RIF_RIF1_ERR)

/** \brief 97C, Radar Interface 1 Service Request */
#define SRC_RIF_RIF1_INT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003897Cu)
/** Alias (User Manual Name) for SRC_RIF_RIF1_INT.
* To use register names with standard convension, please use SRC_RIF_RIF1_INT.
*/
#define SRC_RIF1INT (SRC_RIF_RIF1_INT)

/** \brief 980, SPU 0 Service Request */
#define SRC_SPU_SPU0_INT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038980u)
/** Alias (User Manual Name) for SRC_SPU_SPU0_INT.
* To use register names with standard convension, please use SRC_SPU_SPU0_INT.
*/
#define SRC_SPU0INT (SRC_SPU_SPU0_INT)

/** \brief 984, SPU 0 Error Service Request */
#define SRC_SPU_SPU0_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038984u)
/** Alias (User Manual Name) for SRC_SPU_SPU0_ERR.
* To use register names with standard convension, please use SRC_SPU_SPU0_ERR.
*/
#define SRC_SPU0ERR (SRC_SPU_SPU0_ERR)

/** \brief 988, SPU 1 Service Request */
#define SRC_SPU_SPU1_INT /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF0038988u)
/** Alias (User Manual Name) for SRC_SPU_SPU1_INT.
* To use register names with standard convension, please use SRC_SPU_SPU1_INT.
*/
#define SRC_SPU1INT (SRC_SPU_SPU1_INT)

/** \brief 98C, SPU 1 Error Service Request */
#define SRC_SPU_SPU1_ERR /*lint --e(923, 9078)*/ (*(volatile Ifx_SRC_SRCR*)0xF003898Cu)
/** Alias (User Manual Name) for SRC_SPU_SPU1_ERR.
* To use register names with standard convension, please use SRC_SPU_SPU1_ERR.
*/
#define SRC_SPU1ERR (SRC_SPU_SPU1_ERR)

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


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXSRC_REG_H */
