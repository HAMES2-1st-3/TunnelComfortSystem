/**
 * \file IfxDma_reg.h
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
 * \defgroup IfxSfr_Dma_Registers_Cfg Dma address
 * \ingroup IfxSfr_Dma_Registers
 * 
 * \defgroup IfxSfr_Dma_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Dma_Registers_Cfg
 *
 * \defgroup IfxSfr_Dma_Registers_Cfg_Dma 2-DMA
 * \ingroup IfxSfr_Dma_Registers_Cfg
 *
 *
 */
#ifndef IFXDMA_REG_H
#define IFXDMA_REG_H 1
/******************************************************************************/
#include "IfxDma_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Dma_Registers_Cfg_BaseAddress
 * \{  */

/** \brief DMA object */
#define MODULE_DMA /*lint --e(923, 9078)*/ ((*(Ifx_DMA*)0xF0010000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Dma_Registers_Cfg_Dma
 * \{  */
/** \brief 0, DMA Clock Control Register */
#define DMA_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CLC*)0xF0010000u)

/** \brief 8, DMA Identification Register */
#define DMA_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ID*)0xF0010008u)

/** \brief 40, RP 0 Access Enable Register 0 */
#define DMA_ACCEN0_ACCENR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ACCEN_ACCENR0*)0xF0010040u)
/** Alias (User Manual Name) for DMA_ACCEN0_ACCENR0.
* To use register names with standard convension, please use DMA_ACCEN0_ACCENR0.
*/
#define DMA_ACCEN00 (DMA_ACCEN0_ACCENR0)

/** \brief 44, RP 0 Access Enable Register 1 */
#define DMA_ACCEN0_ACCENR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ACCEN_ACCENR1*)0xF0010044u)
/** Alias (User Manual Name) for DMA_ACCEN0_ACCENR1.
* To use register names with standard convension, please use DMA_ACCEN0_ACCENR1.
*/
#define DMA_ACCEN01 (DMA_ACCEN0_ACCENR1)

/** \brief 48, RP 1 Access Enable Register 0 */
#define DMA_ACCEN1_ACCENR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ACCEN_ACCENR0*)0xF0010048u)
/** Alias (User Manual Name) for DMA_ACCEN1_ACCENR0.
* To use register names with standard convension, please use DMA_ACCEN1_ACCENR0.
*/
#define DMA_ACCEN10 (DMA_ACCEN1_ACCENR0)

/** \brief 4C, RP 1 Access Enable Register 1 */
#define DMA_ACCEN1_ACCENR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ACCEN_ACCENR1*)0xF001004Cu)
/** Alias (User Manual Name) for DMA_ACCEN1_ACCENR1.
* To use register names with standard convension, please use DMA_ACCEN1_ACCENR1.
*/
#define DMA_ACCEN11 (DMA_ACCEN1_ACCENR1)

/** \brief 50, RP 2 Access Enable Register 0 */
#define DMA_ACCEN2_ACCENR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ACCEN_ACCENR0*)0xF0010050u)
/** Alias (User Manual Name) for DMA_ACCEN2_ACCENR0.
* To use register names with standard convension, please use DMA_ACCEN2_ACCENR0.
*/
#define DMA_ACCEN20 (DMA_ACCEN2_ACCENR0)

/** \brief 54, RP 2 Access Enable Register 1 */
#define DMA_ACCEN2_ACCENR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ACCEN_ACCENR1*)0xF0010054u)
/** Alias (User Manual Name) for DMA_ACCEN2_ACCENR1.
* To use register names with standard convension, please use DMA_ACCEN2_ACCENR1.
*/
#define DMA_ACCEN21 (DMA_ACCEN2_ACCENR1)

/** \brief 58, RP 3 Access Enable Register 0 */
#define DMA_ACCEN3_ACCENR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ACCEN_ACCENR0*)0xF0010058u)
/** Alias (User Manual Name) for DMA_ACCEN3_ACCENR0.
* To use register names with standard convension, please use DMA_ACCEN3_ACCENR0.
*/
#define DMA_ACCEN30 (DMA_ACCEN3_ACCENR0)

/** \brief 5C, RP 3 Access Enable Register 1 */
#define DMA_ACCEN3_ACCENR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ACCEN_ACCENR1*)0xF001005Cu)
/** Alias (User Manual Name) for DMA_ACCEN3_ACCENR1.
* To use register names with standard convension, please use DMA_ACCEN3_ACCENR1.
*/
#define DMA_ACCEN31 (DMA_ACCEN3_ACCENR1)

/** \brief 120, ME 0 Enable Error Register */
#define DMA_ME0_EER /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_EER*)0xF0010120u)
/** Alias (User Manual Name) for DMA_ME0_EER.
* To use register names with standard convension, please use DMA_ME0_EER.
*/
#define DMA_EER0 (DMA_ME0_EER)

/** \brief 124, ME 0 Error Status Register */
#define DMA_ME0_ERRSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_ERRSR*)0xF0010124u)
/** Alias (User Manual Name) for DMA_ME0_ERRSR.
* To use register names with standard convension, please use DMA_ME0_ERRSR.
*/
#define DMA_ERRSR0 (DMA_ME0_ERRSR)

/** \brief 128, ME 0 Clear Error Register */
#define DMA_ME0_CLRE /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_CLRE*)0xF0010128u)
/** Alias (User Manual Name) for DMA_ME0_CLRE.
* To use register names with standard convension, please use DMA_ME0_CLRE.
*/
#define DMA_CLRE0 (DMA_ME0_CLRE)

/** \brief 130, ME 0 Status Register */
#define DMA_ME0_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_SR*)0xF0010130u)
/** Alias (User Manual Name) for DMA_ME0_SR.
* To use register names with standard convension, please use DMA_ME0_SR.
*/
#define DMA_ME0SR (DMA_ME0_SR)

/** \brief 140, ME 0 Read Register 0 */
#define DMA_ME0_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R0*)0xF0010140u)
/** Alias (User Manual Name) for DMA_ME0_R0.
* To use register names with standard convension, please use DMA_ME0_R0.
*/
#define DMA_ME00R (DMA_ME0_R0)

/** \brief 144, ME 0 Read Register 1 */
#define DMA_ME0_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R1*)0xF0010144u)
/** Alias (User Manual Name) for DMA_ME0_R1.
* To use register names with standard convension, please use DMA_ME0_R1.
*/
#define DMA_ME01R (DMA_ME0_R1)

/** \brief 148, ME 0 Read Register 2 */
#define DMA_ME0_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R2*)0xF0010148u)
/** Alias (User Manual Name) for DMA_ME0_R2.
* To use register names with standard convension, please use DMA_ME0_R2.
*/
#define DMA_ME02R (DMA_ME0_R2)

/** \brief 14C, ME 0 Read Register 3 */
#define DMA_ME0_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R3*)0xF001014Cu)
/** Alias (User Manual Name) for DMA_ME0_R3.
* To use register names with standard convension, please use DMA_ME0_R3.
*/
#define DMA_ME03R (DMA_ME0_R3)

/** \brief 150, ME 0 Read Register 4 */
#define DMA_ME0_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R4*)0xF0010150u)
/** Alias (User Manual Name) for DMA_ME0_R4.
* To use register names with standard convension, please use DMA_ME0_R4.
*/
#define DMA_ME04R (DMA_ME0_R4)

/** \brief 154, ME 0 Read Register 5 */
#define DMA_ME0_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R5*)0xF0010154u)
/** Alias (User Manual Name) for DMA_ME0_R5.
* To use register names with standard convension, please use DMA_ME0_R5.
*/
#define DMA_ME05R (DMA_ME0_R5)

/** \brief 158, ME 0 Read Register 6 */
#define DMA_ME0_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R6*)0xF0010158u)
/** Alias (User Manual Name) for DMA_ME0_R6.
* To use register names with standard convension, please use DMA_ME0_R6.
*/
#define DMA_ME06R (DMA_ME0_R6)

/** \brief 15C, ME 0 Read Register 7 */
#define DMA_ME0_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R7*)0xF001015Cu)
/** Alias (User Manual Name) for DMA_ME0_R7.
* To use register names with standard convension, please use DMA_ME0_R7.
*/
#define DMA_ME07R (DMA_ME0_R7)

/** \brief 180, ME 0 Channel Read Data CRC Register */
#define DMA_ME0_RDCRC /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_RDCRC*)0xF0010180u)
/** Alias (User Manual Name) for DMA_ME0_RDCRC.
* To use register names with standard convension, please use DMA_ME0_RDCRC.
*/
#define DMA_ME0RDCRC (DMA_ME0_RDCRC)

/** \brief 184, ME 0 Channel Source and Destination Address CRC Register */
#define DMA_ME0_SDCRC /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_SDCRC*)0xF0010184u)
/** Alias (User Manual Name) for DMA_ME0_SDCRC.
* To use register names with standard convension, please use DMA_ME0_SDCRC.
*/
#define DMA_ME0SDCRC (DMA_ME0_SDCRC)

/** \brief 188, ME 0 Channel Source Address Register */
#define DMA_ME0_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_SADR*)0xF0010188u)
/** Alias (User Manual Name) for DMA_ME0_SADR.
* To use register names with standard convension, please use DMA_ME0_SADR.
*/
#define DMA_ME0SADR (DMA_ME0_SADR)

/** \brief 18C, ME 0 Channel Destination Address Register */
#define DMA_ME0_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_DADR*)0xF001018Cu)
/** Alias (User Manual Name) for DMA_ME0_DADR.
* To use register names with standard convension, please use DMA_ME0_DADR.
*/
#define DMA_ME0DADR (DMA_ME0_DADR)

/** \brief 190, ME 0 Channel Address and Interrupt Control Register */
#define DMA_ME0_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_ADICR*)0xF0010190u)
/** Alias (User Manual Name) for DMA_ME0_ADICR.
* To use register names with standard convension, please use DMA_ME0_ADICR.
*/
#define DMA_ME0ADICR (DMA_ME0_ADICR)

/** \brief 194, ME 0 Channel Control Register */
#define DMA_ME0_CHCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_CHCR*)0xF0010194u)
/** Alias (User Manual Name) for DMA_ME0_CHCR.
* To use register names with standard convension, please use DMA_ME0_CHCR.
*/
#define DMA_ME0CHCR (DMA_ME0_CHCR)

/** \brief 198, ME 0 Channel Shadow Address Register */
#define DMA_ME0_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_SHADR*)0xF0010198u)
/** Alias (User Manual Name) for DMA_ME0_SHADR.
* To use register names with standard convension, please use DMA_ME0_SHADR.
*/
#define DMA_ME0SHADR (DMA_ME0_SHADR)

/** \brief 19C, ME 0 Channel Status Register */
#define DMA_ME0_CHSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_CHSR*)0xF001019Cu)
/** Alias (User Manual Name) for DMA_ME0_CHSR.
* To use register names with standard convension, please use DMA_ME0_CHSR.
*/
#define DMA_ME0CHSR (DMA_ME0_CHSR)

/** \brief 1120, ME 1 Enable Error Register */
#define DMA_ME1_EER /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_EER*)0xF0011120u)
/** Alias (User Manual Name) for DMA_ME1_EER.
* To use register names with standard convension, please use DMA_ME1_EER.
*/
#define DMA_EER1 (DMA_ME1_EER)

/** \brief 1124, ME 1 Error Status Register */
#define DMA_ME1_ERRSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_ERRSR*)0xF0011124u)
/** Alias (User Manual Name) for DMA_ME1_ERRSR.
* To use register names with standard convension, please use DMA_ME1_ERRSR.
*/
#define DMA_ERRSR1 (DMA_ME1_ERRSR)

/** \brief 1128, ME 1 Clear Error Register */
#define DMA_ME1_CLRE /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_CLRE*)0xF0011128u)
/** Alias (User Manual Name) for DMA_ME1_CLRE.
* To use register names with standard convension, please use DMA_ME1_CLRE.
*/
#define DMA_CLRE1 (DMA_ME1_CLRE)

/** \brief 1130, ME 1 Status Register */
#define DMA_ME1_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_SR*)0xF0011130u)
/** Alias (User Manual Name) for DMA_ME1_SR.
* To use register names with standard convension, please use DMA_ME1_SR.
*/
#define DMA_ME1SR (DMA_ME1_SR)

/** \brief 1140, ME 1 Read Register 0 */
#define DMA_ME1_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R0*)0xF0011140u)
/** Alias (User Manual Name) for DMA_ME1_R0.
* To use register names with standard convension, please use DMA_ME1_R0.
*/
#define DMA_ME10R (DMA_ME1_R0)

/** \brief 1144, ME 1 Read Register 1 */
#define DMA_ME1_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R1*)0xF0011144u)
/** Alias (User Manual Name) for DMA_ME1_R1.
* To use register names with standard convension, please use DMA_ME1_R1.
*/
#define DMA_ME11R (DMA_ME1_R1)

/** \brief 1148, ME 1 Read Register 2 */
#define DMA_ME1_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R2*)0xF0011148u)
/** Alias (User Manual Name) for DMA_ME1_R2.
* To use register names with standard convension, please use DMA_ME1_R2.
*/
#define DMA_ME12R (DMA_ME1_R2)

/** \brief 114C, ME 1 Read Register 3 */
#define DMA_ME1_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R3*)0xF001114Cu)
/** Alias (User Manual Name) for DMA_ME1_R3.
* To use register names with standard convension, please use DMA_ME1_R3.
*/
#define DMA_ME13R (DMA_ME1_R3)

/** \brief 1150, ME 1 Read Register 4 */
#define DMA_ME1_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R4*)0xF0011150u)
/** Alias (User Manual Name) for DMA_ME1_R4.
* To use register names with standard convension, please use DMA_ME1_R4.
*/
#define DMA_ME14R (DMA_ME1_R4)

/** \brief 1154, ME 1 Read Register 5 */
#define DMA_ME1_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R5*)0xF0011154u)
/** Alias (User Manual Name) for DMA_ME1_R5.
* To use register names with standard convension, please use DMA_ME1_R5.
*/
#define DMA_ME15R (DMA_ME1_R5)

/** \brief 1158, ME 1 Read Register 6 */
#define DMA_ME1_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R6*)0xF0011158u)
/** Alias (User Manual Name) for DMA_ME1_R6.
* To use register names with standard convension, please use DMA_ME1_R6.
*/
#define DMA_ME16R (DMA_ME1_R6)

/** \brief 115C, ME 1 Read Register 7 */
#define DMA_ME1_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_R7*)0xF001115Cu)
/** Alias (User Manual Name) for DMA_ME1_R7.
* To use register names with standard convension, please use DMA_ME1_R7.
*/
#define DMA_ME17R (DMA_ME1_R7)

/** \brief 1180, ME 1 Channel Read Data CRC Register */
#define DMA_ME1_RDCRC /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_RDCRC*)0xF0011180u)
/** Alias (User Manual Name) for DMA_ME1_RDCRC.
* To use register names with standard convension, please use DMA_ME1_RDCRC.
*/
#define DMA_ME1RDCRC (DMA_ME1_RDCRC)

/** \brief 1184, ME 1 Channel Source and Destination Address CRC Register */
#define DMA_ME1_SDCRC /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_SDCRC*)0xF0011184u)
/** Alias (User Manual Name) for DMA_ME1_SDCRC.
* To use register names with standard convension, please use DMA_ME1_SDCRC.
*/
#define DMA_ME1SDCRC (DMA_ME1_SDCRC)

/** \brief 1188, ME 1 Channel Source Address Register */
#define DMA_ME1_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_SADR*)0xF0011188u)
/** Alias (User Manual Name) for DMA_ME1_SADR.
* To use register names with standard convension, please use DMA_ME1_SADR.
*/
#define DMA_ME1SADR (DMA_ME1_SADR)

/** \brief 118C, ME 1 Channel Destination Address Register */
#define DMA_ME1_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_DADR*)0xF001118Cu)
/** Alias (User Manual Name) for DMA_ME1_DADR.
* To use register names with standard convension, please use DMA_ME1_DADR.
*/
#define DMA_ME1DADR (DMA_ME1_DADR)

/** \brief 1190, ME 1 Channel Address and Interrupt Control Register */
#define DMA_ME1_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_ADICR*)0xF0011190u)
/** Alias (User Manual Name) for DMA_ME1_ADICR.
* To use register names with standard convension, please use DMA_ME1_ADICR.
*/
#define DMA_ME1ADICR (DMA_ME1_ADICR)

/** \brief 1194, ME 1 Channel Control Register */
#define DMA_ME1_CHCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_CHCR*)0xF0011194u)
/** Alias (User Manual Name) for DMA_ME1_CHCR.
* To use register names with standard convension, please use DMA_ME1_CHCR.
*/
#define DMA_ME1CHCR (DMA_ME1_CHCR)

/** \brief 1198, ME 1 Channel Shadow Address Register */
#define DMA_ME1_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_SHADR*)0xF0011198u)
/** Alias (User Manual Name) for DMA_ME1_SHADR.
* To use register names with standard convension, please use DMA_ME1_SHADR.
*/
#define DMA_ME1SHADR (DMA_ME1_SHADR)

/** \brief 119C, ME 1 Channel Status Register */
#define DMA_ME1_CHSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ME_CHSR*)0xF001119Cu)
/** Alias (User Manual Name) for DMA_ME1_CHSR.
* To use register names with standard convension, please use DMA_ME1_CHSR.
*/
#define DMA_ME1CHSR (DMA_ME1_CHSR)

/** \brief 1200, DMA OCDS Trigger Set Select */
#define DMA_OTSS /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_OTSS*)0xF0011200u)

/** \brief 1208, DMA Pattern Read Register 0 */
#define DMA_PRR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_PRR0*)0xF0011208u)

/** \brief 120C, DMA Pattern Read Register 1 */
#define DMA_PRR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_PRR1*)0xF001120Cu)

/** \brief 1210, DMA Time Register */
#define DMA_TIME /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TIME*)0xF0011210u)

/** \brief 1300, RP 0 Mode Register */
#define DMA_MODE0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_MODE*)0xF0011300u)

/** \brief 1304, RP 1 Mode Register */
#define DMA_MODE1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_MODE*)0xF0011304u)

/** \brief 1308, RP 2 Mode Register */
#define DMA_MODE2 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_MODE*)0xF0011308u)

/** \brief 130C, RP 3 Mode Register */
#define DMA_MODE3 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_MODE*)0xF001130Cu)

/** \brief 1320, RP 0 Error Interrupt Set Register */
#define DMA_ERRINTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ERRINTR*)0xF0011320u)

/** \brief 1324, RP 1 Error Interrupt Set Register */
#define DMA_ERRINTR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ERRINTR*)0xF0011324u)

/** \brief 1328, RP 2 Error Interrupt Set Register */
#define DMA_ERRINTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ERRINTR*)0xF0011328u)

/** \brief 132C, RP 3 Error Interrupt Set Register */
#define DMA_ERRINTR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_ERRINTR*)0xF001132Cu)

/** \brief 1800, DMA Channel 0 Resource Partition Register */
#define DMA_HRR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011800u)
/** Alias (User Manual Name) for DMA_HRR0.
* To use register names with standard convension, please use DMA_HRR0.
*/
#define DMA_HRR000 (DMA_HRR0)

/** \brief 1804, DMA Channel 1 Resource Partition Register */
#define DMA_HRR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011804u)
/** Alias (User Manual Name) for DMA_HRR1.
* To use register names with standard convension, please use DMA_HRR1.
*/
#define DMA_HRR001 (DMA_HRR1)

/** \brief 1808, DMA Channel 2 Resource Partition Register */
#define DMA_HRR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011808u)
/** Alias (User Manual Name) for DMA_HRR2.
* To use register names with standard convension, please use DMA_HRR2.
*/
#define DMA_HRR002 (DMA_HRR2)

/** \brief 180C, DMA Channel 3 Resource Partition Register */
#define DMA_HRR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001180Cu)
/** Alias (User Manual Name) for DMA_HRR3.
* To use register names with standard convension, please use DMA_HRR3.
*/
#define DMA_HRR003 (DMA_HRR3)

/** \brief 1810, DMA Channel 4 Resource Partition Register */
#define DMA_HRR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011810u)
/** Alias (User Manual Name) for DMA_HRR4.
* To use register names with standard convension, please use DMA_HRR4.
*/
#define DMA_HRR004 (DMA_HRR4)

/** \brief 1814, DMA Channel 5 Resource Partition Register */
#define DMA_HRR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011814u)
/** Alias (User Manual Name) for DMA_HRR5.
* To use register names with standard convension, please use DMA_HRR5.
*/
#define DMA_HRR005 (DMA_HRR5)

/** \brief 1818, DMA Channel 6 Resource Partition Register */
#define DMA_HRR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011818u)
/** Alias (User Manual Name) for DMA_HRR6.
* To use register names with standard convension, please use DMA_HRR6.
*/
#define DMA_HRR006 (DMA_HRR6)

/** \brief 181C, DMA Channel 7 Resource Partition Register */
#define DMA_HRR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001181Cu)
/** Alias (User Manual Name) for DMA_HRR7.
* To use register names with standard convension, please use DMA_HRR7.
*/
#define DMA_HRR007 (DMA_HRR7)

/** \brief 1820, DMA Channel 8 Resource Partition Register */
#define DMA_HRR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011820u)
/** Alias (User Manual Name) for DMA_HRR8.
* To use register names with standard convension, please use DMA_HRR8.
*/
#define DMA_HRR008 (DMA_HRR8)

/** \brief 1824, DMA Channel 9 Resource Partition Register */
#define DMA_HRR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011824u)
/** Alias (User Manual Name) for DMA_HRR9.
* To use register names with standard convension, please use DMA_HRR9.
*/
#define DMA_HRR009 (DMA_HRR9)

/** \brief 1828, DMA Channel 10 Resource Partition Register */
#define DMA_HRR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011828u)
/** Alias (User Manual Name) for DMA_HRR10.
* To use register names with standard convension, please use DMA_HRR10.
*/
#define DMA_HRR010 (DMA_HRR10)

/** \brief 182C, DMA Channel 11 Resource Partition Register */
#define DMA_HRR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001182Cu)
/** Alias (User Manual Name) for DMA_HRR11.
* To use register names with standard convension, please use DMA_HRR11.
*/
#define DMA_HRR011 (DMA_HRR11)

/** \brief 1830, DMA Channel 12 Resource Partition Register */
#define DMA_HRR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011830u)
/** Alias (User Manual Name) for DMA_HRR12.
* To use register names with standard convension, please use DMA_HRR12.
*/
#define DMA_HRR012 (DMA_HRR12)

/** \brief 1834, DMA Channel 13 Resource Partition Register */
#define DMA_HRR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011834u)
/** Alias (User Manual Name) for DMA_HRR13.
* To use register names with standard convension, please use DMA_HRR13.
*/
#define DMA_HRR013 (DMA_HRR13)

/** \brief 1838, DMA Channel 14 Resource Partition Register */
#define DMA_HRR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011838u)
/** Alias (User Manual Name) for DMA_HRR14.
* To use register names with standard convension, please use DMA_HRR14.
*/
#define DMA_HRR014 (DMA_HRR14)

/** \brief 183C, DMA Channel 15 Resource Partition Register */
#define DMA_HRR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001183Cu)
/** Alias (User Manual Name) for DMA_HRR15.
* To use register names with standard convension, please use DMA_HRR15.
*/
#define DMA_HRR015 (DMA_HRR15)

/** \brief 1840, DMA Channel 16 Resource Partition Register */
#define DMA_HRR16 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011840u)
/** Alias (User Manual Name) for DMA_HRR16.
* To use register names with standard convension, please use DMA_HRR16.
*/
#define DMA_HRR016 (DMA_HRR16)

/** \brief 1844, DMA Channel 17 Resource Partition Register */
#define DMA_HRR17 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011844u)
/** Alias (User Manual Name) for DMA_HRR17.
* To use register names with standard convension, please use DMA_HRR17.
*/
#define DMA_HRR017 (DMA_HRR17)

/** \brief 1848, DMA Channel 18 Resource Partition Register */
#define DMA_HRR18 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011848u)
/** Alias (User Manual Name) for DMA_HRR18.
* To use register names with standard convension, please use DMA_HRR18.
*/
#define DMA_HRR018 (DMA_HRR18)

/** \brief 184C, DMA Channel 19 Resource Partition Register */
#define DMA_HRR19 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001184Cu)
/** Alias (User Manual Name) for DMA_HRR19.
* To use register names with standard convension, please use DMA_HRR19.
*/
#define DMA_HRR019 (DMA_HRR19)

/** \brief 1850, DMA Channel 20 Resource Partition Register */
#define DMA_HRR20 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011850u)
/** Alias (User Manual Name) for DMA_HRR20.
* To use register names with standard convension, please use DMA_HRR20.
*/
#define DMA_HRR020 (DMA_HRR20)

/** \brief 1854, DMA Channel 21 Resource Partition Register */
#define DMA_HRR21 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011854u)
/** Alias (User Manual Name) for DMA_HRR21.
* To use register names with standard convension, please use DMA_HRR21.
*/
#define DMA_HRR021 (DMA_HRR21)

/** \brief 1858, DMA Channel 22 Resource Partition Register */
#define DMA_HRR22 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011858u)
/** Alias (User Manual Name) for DMA_HRR22.
* To use register names with standard convension, please use DMA_HRR22.
*/
#define DMA_HRR022 (DMA_HRR22)

/** \brief 185C, DMA Channel 23 Resource Partition Register */
#define DMA_HRR23 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001185Cu)
/** Alias (User Manual Name) for DMA_HRR23.
* To use register names with standard convension, please use DMA_HRR23.
*/
#define DMA_HRR023 (DMA_HRR23)

/** \brief 1860, DMA Channel 24 Resource Partition Register */
#define DMA_HRR24 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011860u)
/** Alias (User Manual Name) for DMA_HRR24.
* To use register names with standard convension, please use DMA_HRR24.
*/
#define DMA_HRR024 (DMA_HRR24)

/** \brief 1864, DMA Channel 25 Resource Partition Register */
#define DMA_HRR25 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011864u)
/** Alias (User Manual Name) for DMA_HRR25.
* To use register names with standard convension, please use DMA_HRR25.
*/
#define DMA_HRR025 (DMA_HRR25)

/** \brief 1868, DMA Channel 26 Resource Partition Register */
#define DMA_HRR26 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011868u)
/** Alias (User Manual Name) for DMA_HRR26.
* To use register names with standard convension, please use DMA_HRR26.
*/
#define DMA_HRR026 (DMA_HRR26)

/** \brief 186C, DMA Channel 27 Resource Partition Register */
#define DMA_HRR27 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001186Cu)
/** Alias (User Manual Name) for DMA_HRR27.
* To use register names with standard convension, please use DMA_HRR27.
*/
#define DMA_HRR027 (DMA_HRR27)

/** \brief 1870, DMA Channel 28 Resource Partition Register */
#define DMA_HRR28 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011870u)
/** Alias (User Manual Name) for DMA_HRR28.
* To use register names with standard convension, please use DMA_HRR28.
*/
#define DMA_HRR028 (DMA_HRR28)

/** \brief 1874, DMA Channel 29 Resource Partition Register */
#define DMA_HRR29 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011874u)
/** Alias (User Manual Name) for DMA_HRR29.
* To use register names with standard convension, please use DMA_HRR29.
*/
#define DMA_HRR029 (DMA_HRR29)

/** \brief 1878, DMA Channel 30 Resource Partition Register */
#define DMA_HRR30 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011878u)
/** Alias (User Manual Name) for DMA_HRR30.
* To use register names with standard convension, please use DMA_HRR30.
*/
#define DMA_HRR030 (DMA_HRR30)

/** \brief 187C, DMA Channel 31 Resource Partition Register */
#define DMA_HRR31 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001187Cu)
/** Alias (User Manual Name) for DMA_HRR31.
* To use register names with standard convension, please use DMA_HRR31.
*/
#define DMA_HRR031 (DMA_HRR31)

/** \brief 1880, DMA Channel 32 Resource Partition Register */
#define DMA_HRR32 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011880u)
/** Alias (User Manual Name) for DMA_HRR32.
* To use register names with standard convension, please use DMA_HRR32.
*/
#define DMA_HRR032 (DMA_HRR32)

/** \brief 1884, DMA Channel 33 Resource Partition Register */
#define DMA_HRR33 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011884u)
/** Alias (User Manual Name) for DMA_HRR33.
* To use register names with standard convension, please use DMA_HRR33.
*/
#define DMA_HRR033 (DMA_HRR33)

/** \brief 1888, DMA Channel 34 Resource Partition Register */
#define DMA_HRR34 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011888u)
/** Alias (User Manual Name) for DMA_HRR34.
* To use register names with standard convension, please use DMA_HRR34.
*/
#define DMA_HRR034 (DMA_HRR34)

/** \brief 188C, DMA Channel 35 Resource Partition Register */
#define DMA_HRR35 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001188Cu)
/** Alias (User Manual Name) for DMA_HRR35.
* To use register names with standard convension, please use DMA_HRR35.
*/
#define DMA_HRR035 (DMA_HRR35)

/** \brief 1890, DMA Channel 36 Resource Partition Register */
#define DMA_HRR36 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011890u)
/** Alias (User Manual Name) for DMA_HRR36.
* To use register names with standard convension, please use DMA_HRR36.
*/
#define DMA_HRR036 (DMA_HRR36)

/** \brief 1894, DMA Channel 37 Resource Partition Register */
#define DMA_HRR37 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011894u)
/** Alias (User Manual Name) for DMA_HRR37.
* To use register names with standard convension, please use DMA_HRR37.
*/
#define DMA_HRR037 (DMA_HRR37)

/** \brief 1898, DMA Channel 38 Resource Partition Register */
#define DMA_HRR38 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF0011898u)
/** Alias (User Manual Name) for DMA_HRR38.
* To use register names with standard convension, please use DMA_HRR38.
*/
#define DMA_HRR038 (DMA_HRR38)

/** \brief 189C, DMA Channel 39 Resource Partition Register */
#define DMA_HRR39 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF001189Cu)
/** Alias (User Manual Name) for DMA_HRR39.
* To use register names with standard convension, please use DMA_HRR39.
*/
#define DMA_HRR039 (DMA_HRR39)

/** \brief 18A0, DMA Channel 40 Resource Partition Register */
#define DMA_HRR40 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118A0u)
/** Alias (User Manual Name) for DMA_HRR40.
* To use register names with standard convension, please use DMA_HRR40.
*/
#define DMA_HRR040 (DMA_HRR40)

/** \brief 18A4, DMA Channel 41 Resource Partition Register */
#define DMA_HRR41 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118A4u)
/** Alias (User Manual Name) for DMA_HRR41.
* To use register names with standard convension, please use DMA_HRR41.
*/
#define DMA_HRR041 (DMA_HRR41)

/** \brief 18A8, DMA Channel 42 Resource Partition Register */
#define DMA_HRR42 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118A8u)
/** Alias (User Manual Name) for DMA_HRR42.
* To use register names with standard convension, please use DMA_HRR42.
*/
#define DMA_HRR042 (DMA_HRR42)

/** \brief 18AC, DMA Channel 43 Resource Partition Register */
#define DMA_HRR43 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118ACu)
/** Alias (User Manual Name) for DMA_HRR43.
* To use register names with standard convension, please use DMA_HRR43.
*/
#define DMA_HRR043 (DMA_HRR43)

/** \brief 18B0, DMA Channel 44 Resource Partition Register */
#define DMA_HRR44 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118B0u)
/** Alias (User Manual Name) for DMA_HRR44.
* To use register names with standard convension, please use DMA_HRR44.
*/
#define DMA_HRR044 (DMA_HRR44)

/** \brief 18B4, DMA Channel 45 Resource Partition Register */
#define DMA_HRR45 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118B4u)
/** Alias (User Manual Name) for DMA_HRR45.
* To use register names with standard convension, please use DMA_HRR45.
*/
#define DMA_HRR045 (DMA_HRR45)

/** \brief 18B8, DMA Channel 46 Resource Partition Register */
#define DMA_HRR46 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118B8u)
/** Alias (User Manual Name) for DMA_HRR46.
* To use register names with standard convension, please use DMA_HRR46.
*/
#define DMA_HRR046 (DMA_HRR46)

/** \brief 18BC, DMA Channel 47 Resource Partition Register */
#define DMA_HRR47 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118BCu)
/** Alias (User Manual Name) for DMA_HRR47.
* To use register names with standard convension, please use DMA_HRR47.
*/
#define DMA_HRR047 (DMA_HRR47)

/** \brief 18C0, DMA Channel 48 Resource Partition Register */
#define DMA_HRR48 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118C0u)
/** Alias (User Manual Name) for DMA_HRR48.
* To use register names with standard convension, please use DMA_HRR48.
*/
#define DMA_HRR048 (DMA_HRR48)

/** \brief 18C4, DMA Channel 49 Resource Partition Register */
#define DMA_HRR49 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118C4u)
/** Alias (User Manual Name) for DMA_HRR49.
* To use register names with standard convension, please use DMA_HRR49.
*/
#define DMA_HRR049 (DMA_HRR49)

/** \brief 18C8, DMA Channel 50 Resource Partition Register */
#define DMA_HRR50 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118C8u)
/** Alias (User Manual Name) for DMA_HRR50.
* To use register names with standard convension, please use DMA_HRR50.
*/
#define DMA_HRR050 (DMA_HRR50)

/** \brief 18CC, DMA Channel 51 Resource Partition Register */
#define DMA_HRR51 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118CCu)
/** Alias (User Manual Name) for DMA_HRR51.
* To use register names with standard convension, please use DMA_HRR51.
*/
#define DMA_HRR051 (DMA_HRR51)

/** \brief 18D0, DMA Channel 52 Resource Partition Register */
#define DMA_HRR52 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118D0u)
/** Alias (User Manual Name) for DMA_HRR52.
* To use register names with standard convension, please use DMA_HRR52.
*/
#define DMA_HRR052 (DMA_HRR52)

/** \brief 18D4, DMA Channel 53 Resource Partition Register */
#define DMA_HRR53 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118D4u)
/** Alias (User Manual Name) for DMA_HRR53.
* To use register names with standard convension, please use DMA_HRR53.
*/
#define DMA_HRR053 (DMA_HRR53)

/** \brief 18D8, DMA Channel 54 Resource Partition Register */
#define DMA_HRR54 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118D8u)
/** Alias (User Manual Name) for DMA_HRR54.
* To use register names with standard convension, please use DMA_HRR54.
*/
#define DMA_HRR054 (DMA_HRR54)

/** \brief 18DC, DMA Channel 55 Resource Partition Register */
#define DMA_HRR55 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118DCu)
/** Alias (User Manual Name) for DMA_HRR55.
* To use register names with standard convension, please use DMA_HRR55.
*/
#define DMA_HRR055 (DMA_HRR55)

/** \brief 18E0, DMA Channel 56 Resource Partition Register */
#define DMA_HRR56 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118E0u)
/** Alias (User Manual Name) for DMA_HRR56.
* To use register names with standard convension, please use DMA_HRR56.
*/
#define DMA_HRR056 (DMA_HRR56)

/** \brief 18E4, DMA Channel 57 Resource Partition Register */
#define DMA_HRR57 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118E4u)
/** Alias (User Manual Name) for DMA_HRR57.
* To use register names with standard convension, please use DMA_HRR57.
*/
#define DMA_HRR057 (DMA_HRR57)

/** \brief 18E8, DMA Channel 58 Resource Partition Register */
#define DMA_HRR58 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118E8u)
/** Alias (User Manual Name) for DMA_HRR58.
* To use register names with standard convension, please use DMA_HRR58.
*/
#define DMA_HRR058 (DMA_HRR58)

/** \brief 18EC, DMA Channel 59 Resource Partition Register */
#define DMA_HRR59 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118ECu)
/** Alias (User Manual Name) for DMA_HRR59.
* To use register names with standard convension, please use DMA_HRR59.
*/
#define DMA_HRR059 (DMA_HRR59)

/** \brief 18F0, DMA Channel 60 Resource Partition Register */
#define DMA_HRR60 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118F0u)
/** Alias (User Manual Name) for DMA_HRR60.
* To use register names with standard convension, please use DMA_HRR60.
*/
#define DMA_HRR060 (DMA_HRR60)

/** \brief 18F4, DMA Channel 61 Resource Partition Register */
#define DMA_HRR61 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118F4u)
/** Alias (User Manual Name) for DMA_HRR61.
* To use register names with standard convension, please use DMA_HRR61.
*/
#define DMA_HRR061 (DMA_HRR61)

/** \brief 18F8, DMA Channel 62 Resource Partition Register */
#define DMA_HRR62 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118F8u)
/** Alias (User Manual Name) for DMA_HRR62.
* To use register names with standard convension, please use DMA_HRR62.
*/
#define DMA_HRR062 (DMA_HRR62)

/** \brief 18FC, DMA Channel 63 Resource Partition Register */
#define DMA_HRR63 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_HRR*)0xF00118FCu)
/** Alias (User Manual Name) for DMA_HRR63.
* To use register names with standard convension, please use DMA_HRR63.
*/
#define DMA_HRR063 (DMA_HRR63)

/** \brief 1A00, DMA Channel 0 Suspend Enable Register */
#define DMA_SUSENR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A00u)
/** Alias (User Manual Name) for DMA_SUSENR0.
* To use register names with standard convension, please use DMA_SUSENR0.
*/
#define DMA_SUSENR000 (DMA_SUSENR0)

/** \brief 1A04, DMA Channel 1 Suspend Enable Register */
#define DMA_SUSENR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A04u)
/** Alias (User Manual Name) for DMA_SUSENR1.
* To use register names with standard convension, please use DMA_SUSENR1.
*/
#define DMA_SUSENR001 (DMA_SUSENR1)

/** \brief 1A08, DMA Channel 2 Suspend Enable Register */
#define DMA_SUSENR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A08u)
/** Alias (User Manual Name) for DMA_SUSENR2.
* To use register names with standard convension, please use DMA_SUSENR2.
*/
#define DMA_SUSENR002 (DMA_SUSENR2)

/** \brief 1A0C, DMA Channel 3 Suspend Enable Register */
#define DMA_SUSENR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A0Cu)
/** Alias (User Manual Name) for DMA_SUSENR3.
* To use register names with standard convension, please use DMA_SUSENR3.
*/
#define DMA_SUSENR003 (DMA_SUSENR3)

/** \brief 1A10, DMA Channel 4 Suspend Enable Register */
#define DMA_SUSENR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A10u)
/** Alias (User Manual Name) for DMA_SUSENR4.
* To use register names with standard convension, please use DMA_SUSENR4.
*/
#define DMA_SUSENR004 (DMA_SUSENR4)

/** \brief 1A14, DMA Channel 5 Suspend Enable Register */
#define DMA_SUSENR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A14u)
/** Alias (User Manual Name) for DMA_SUSENR5.
* To use register names with standard convension, please use DMA_SUSENR5.
*/
#define DMA_SUSENR005 (DMA_SUSENR5)

/** \brief 1A18, DMA Channel 6 Suspend Enable Register */
#define DMA_SUSENR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A18u)
/** Alias (User Manual Name) for DMA_SUSENR6.
* To use register names with standard convension, please use DMA_SUSENR6.
*/
#define DMA_SUSENR006 (DMA_SUSENR6)

/** \brief 1A1C, DMA Channel 7 Suspend Enable Register */
#define DMA_SUSENR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A1Cu)
/** Alias (User Manual Name) for DMA_SUSENR7.
* To use register names with standard convension, please use DMA_SUSENR7.
*/
#define DMA_SUSENR007 (DMA_SUSENR7)

/** \brief 1A20, DMA Channel 8 Suspend Enable Register */
#define DMA_SUSENR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A20u)
/** Alias (User Manual Name) for DMA_SUSENR8.
* To use register names with standard convension, please use DMA_SUSENR8.
*/
#define DMA_SUSENR008 (DMA_SUSENR8)

/** \brief 1A24, DMA Channel 9 Suspend Enable Register */
#define DMA_SUSENR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A24u)
/** Alias (User Manual Name) for DMA_SUSENR9.
* To use register names with standard convension, please use DMA_SUSENR9.
*/
#define DMA_SUSENR009 (DMA_SUSENR9)

/** \brief 1A28, DMA Channel 10 Suspend Enable Register */
#define DMA_SUSENR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A28u)
/** Alias (User Manual Name) for DMA_SUSENR10.
* To use register names with standard convension, please use DMA_SUSENR10.
*/
#define DMA_SUSENR010 (DMA_SUSENR10)

/** \brief 1A2C, DMA Channel 11 Suspend Enable Register */
#define DMA_SUSENR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A2Cu)
/** Alias (User Manual Name) for DMA_SUSENR11.
* To use register names with standard convension, please use DMA_SUSENR11.
*/
#define DMA_SUSENR011 (DMA_SUSENR11)

/** \brief 1A30, DMA Channel 12 Suspend Enable Register */
#define DMA_SUSENR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A30u)
/** Alias (User Manual Name) for DMA_SUSENR12.
* To use register names with standard convension, please use DMA_SUSENR12.
*/
#define DMA_SUSENR012 (DMA_SUSENR12)

/** \brief 1A34, DMA Channel 13 Suspend Enable Register */
#define DMA_SUSENR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A34u)
/** Alias (User Manual Name) for DMA_SUSENR13.
* To use register names with standard convension, please use DMA_SUSENR13.
*/
#define DMA_SUSENR013 (DMA_SUSENR13)

/** \brief 1A38, DMA Channel 14 Suspend Enable Register */
#define DMA_SUSENR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A38u)
/** Alias (User Manual Name) for DMA_SUSENR14.
* To use register names with standard convension, please use DMA_SUSENR14.
*/
#define DMA_SUSENR014 (DMA_SUSENR14)

/** \brief 1A3C, DMA Channel 15 Suspend Enable Register */
#define DMA_SUSENR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A3Cu)
/** Alias (User Manual Name) for DMA_SUSENR15.
* To use register names with standard convension, please use DMA_SUSENR15.
*/
#define DMA_SUSENR015 (DMA_SUSENR15)

/** \brief 1A40, DMA Channel 16 Suspend Enable Register */
#define DMA_SUSENR16 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A40u)
/** Alias (User Manual Name) for DMA_SUSENR16.
* To use register names with standard convension, please use DMA_SUSENR16.
*/
#define DMA_SUSENR016 (DMA_SUSENR16)

/** \brief 1A44, DMA Channel 17 Suspend Enable Register */
#define DMA_SUSENR17 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A44u)
/** Alias (User Manual Name) for DMA_SUSENR17.
* To use register names with standard convension, please use DMA_SUSENR17.
*/
#define DMA_SUSENR017 (DMA_SUSENR17)

/** \brief 1A48, DMA Channel 18 Suspend Enable Register */
#define DMA_SUSENR18 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A48u)
/** Alias (User Manual Name) for DMA_SUSENR18.
* To use register names with standard convension, please use DMA_SUSENR18.
*/
#define DMA_SUSENR018 (DMA_SUSENR18)

/** \brief 1A4C, DMA Channel 19 Suspend Enable Register */
#define DMA_SUSENR19 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A4Cu)
/** Alias (User Manual Name) for DMA_SUSENR19.
* To use register names with standard convension, please use DMA_SUSENR19.
*/
#define DMA_SUSENR019 (DMA_SUSENR19)

/** \brief 1A50, DMA Channel 20 Suspend Enable Register */
#define DMA_SUSENR20 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A50u)
/** Alias (User Manual Name) for DMA_SUSENR20.
* To use register names with standard convension, please use DMA_SUSENR20.
*/
#define DMA_SUSENR020 (DMA_SUSENR20)

/** \brief 1A54, DMA Channel 21 Suspend Enable Register */
#define DMA_SUSENR21 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A54u)
/** Alias (User Manual Name) for DMA_SUSENR21.
* To use register names with standard convension, please use DMA_SUSENR21.
*/
#define DMA_SUSENR021 (DMA_SUSENR21)

/** \brief 1A58, DMA Channel 22 Suspend Enable Register */
#define DMA_SUSENR22 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A58u)
/** Alias (User Manual Name) for DMA_SUSENR22.
* To use register names with standard convension, please use DMA_SUSENR22.
*/
#define DMA_SUSENR022 (DMA_SUSENR22)

/** \brief 1A5C, DMA Channel 23 Suspend Enable Register */
#define DMA_SUSENR23 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A5Cu)
/** Alias (User Manual Name) for DMA_SUSENR23.
* To use register names with standard convension, please use DMA_SUSENR23.
*/
#define DMA_SUSENR023 (DMA_SUSENR23)

/** \brief 1A60, DMA Channel 24 Suspend Enable Register */
#define DMA_SUSENR24 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A60u)
/** Alias (User Manual Name) for DMA_SUSENR24.
* To use register names with standard convension, please use DMA_SUSENR24.
*/
#define DMA_SUSENR024 (DMA_SUSENR24)

/** \brief 1A64, DMA Channel 25 Suspend Enable Register */
#define DMA_SUSENR25 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A64u)
/** Alias (User Manual Name) for DMA_SUSENR25.
* To use register names with standard convension, please use DMA_SUSENR25.
*/
#define DMA_SUSENR025 (DMA_SUSENR25)

/** \brief 1A68, DMA Channel 26 Suspend Enable Register */
#define DMA_SUSENR26 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A68u)
/** Alias (User Manual Name) for DMA_SUSENR26.
* To use register names with standard convension, please use DMA_SUSENR26.
*/
#define DMA_SUSENR026 (DMA_SUSENR26)

/** \brief 1A6C, DMA Channel 27 Suspend Enable Register */
#define DMA_SUSENR27 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A6Cu)
/** Alias (User Manual Name) for DMA_SUSENR27.
* To use register names with standard convension, please use DMA_SUSENR27.
*/
#define DMA_SUSENR027 (DMA_SUSENR27)

/** \brief 1A70, DMA Channel 28 Suspend Enable Register */
#define DMA_SUSENR28 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A70u)
/** Alias (User Manual Name) for DMA_SUSENR28.
* To use register names with standard convension, please use DMA_SUSENR28.
*/
#define DMA_SUSENR028 (DMA_SUSENR28)

/** \brief 1A74, DMA Channel 29 Suspend Enable Register */
#define DMA_SUSENR29 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A74u)
/** Alias (User Manual Name) for DMA_SUSENR29.
* To use register names with standard convension, please use DMA_SUSENR29.
*/
#define DMA_SUSENR029 (DMA_SUSENR29)

/** \brief 1A78, DMA Channel 30 Suspend Enable Register */
#define DMA_SUSENR30 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A78u)
/** Alias (User Manual Name) for DMA_SUSENR30.
* To use register names with standard convension, please use DMA_SUSENR30.
*/
#define DMA_SUSENR030 (DMA_SUSENR30)

/** \brief 1A7C, DMA Channel 31 Suspend Enable Register */
#define DMA_SUSENR31 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A7Cu)
/** Alias (User Manual Name) for DMA_SUSENR31.
* To use register names with standard convension, please use DMA_SUSENR31.
*/
#define DMA_SUSENR031 (DMA_SUSENR31)

/** \brief 1A80, DMA Channel 32 Suspend Enable Register */
#define DMA_SUSENR32 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A80u)
/** Alias (User Manual Name) for DMA_SUSENR32.
* To use register names with standard convension, please use DMA_SUSENR32.
*/
#define DMA_SUSENR032 (DMA_SUSENR32)

/** \brief 1A84, DMA Channel 33 Suspend Enable Register */
#define DMA_SUSENR33 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A84u)
/** Alias (User Manual Name) for DMA_SUSENR33.
* To use register names with standard convension, please use DMA_SUSENR33.
*/
#define DMA_SUSENR033 (DMA_SUSENR33)

/** \brief 1A88, DMA Channel 34 Suspend Enable Register */
#define DMA_SUSENR34 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A88u)
/** Alias (User Manual Name) for DMA_SUSENR34.
* To use register names with standard convension, please use DMA_SUSENR34.
*/
#define DMA_SUSENR034 (DMA_SUSENR34)

/** \brief 1A8C, DMA Channel 35 Suspend Enable Register */
#define DMA_SUSENR35 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A8Cu)
/** Alias (User Manual Name) for DMA_SUSENR35.
* To use register names with standard convension, please use DMA_SUSENR35.
*/
#define DMA_SUSENR035 (DMA_SUSENR35)

/** \brief 1A90, DMA Channel 36 Suspend Enable Register */
#define DMA_SUSENR36 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A90u)
/** Alias (User Manual Name) for DMA_SUSENR36.
* To use register names with standard convension, please use DMA_SUSENR36.
*/
#define DMA_SUSENR036 (DMA_SUSENR36)

/** \brief 1A94, DMA Channel 37 Suspend Enable Register */
#define DMA_SUSENR37 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A94u)
/** Alias (User Manual Name) for DMA_SUSENR37.
* To use register names with standard convension, please use DMA_SUSENR37.
*/
#define DMA_SUSENR037 (DMA_SUSENR37)

/** \brief 1A98, DMA Channel 38 Suspend Enable Register */
#define DMA_SUSENR38 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A98u)
/** Alias (User Manual Name) for DMA_SUSENR38.
* To use register names with standard convension, please use DMA_SUSENR38.
*/
#define DMA_SUSENR038 (DMA_SUSENR38)

/** \brief 1A9C, DMA Channel 39 Suspend Enable Register */
#define DMA_SUSENR39 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A9Cu)
/** Alias (User Manual Name) for DMA_SUSENR39.
* To use register names with standard convension, please use DMA_SUSENR39.
*/
#define DMA_SUSENR039 (DMA_SUSENR39)

/** \brief 1AA0, DMA Channel 40 Suspend Enable Register */
#define DMA_SUSENR40 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AA0u)
/** Alias (User Manual Name) for DMA_SUSENR40.
* To use register names with standard convension, please use DMA_SUSENR40.
*/
#define DMA_SUSENR040 (DMA_SUSENR40)

/** \brief 1AA4, DMA Channel 41 Suspend Enable Register */
#define DMA_SUSENR41 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AA4u)
/** Alias (User Manual Name) for DMA_SUSENR41.
* To use register names with standard convension, please use DMA_SUSENR41.
*/
#define DMA_SUSENR041 (DMA_SUSENR41)

/** \brief 1AA8, DMA Channel 42 Suspend Enable Register */
#define DMA_SUSENR42 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AA8u)
/** Alias (User Manual Name) for DMA_SUSENR42.
* To use register names with standard convension, please use DMA_SUSENR42.
*/
#define DMA_SUSENR042 (DMA_SUSENR42)

/** \brief 1AAC, DMA Channel 43 Suspend Enable Register */
#define DMA_SUSENR43 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AACu)
/** Alias (User Manual Name) for DMA_SUSENR43.
* To use register names with standard convension, please use DMA_SUSENR43.
*/
#define DMA_SUSENR043 (DMA_SUSENR43)

/** \brief 1AB0, DMA Channel 44 Suspend Enable Register */
#define DMA_SUSENR44 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AB0u)
/** Alias (User Manual Name) for DMA_SUSENR44.
* To use register names with standard convension, please use DMA_SUSENR44.
*/
#define DMA_SUSENR044 (DMA_SUSENR44)

/** \brief 1AB4, DMA Channel 45 Suspend Enable Register */
#define DMA_SUSENR45 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AB4u)
/** Alias (User Manual Name) for DMA_SUSENR45.
* To use register names with standard convension, please use DMA_SUSENR45.
*/
#define DMA_SUSENR045 (DMA_SUSENR45)

/** \brief 1AB8, DMA Channel 46 Suspend Enable Register */
#define DMA_SUSENR46 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AB8u)
/** Alias (User Manual Name) for DMA_SUSENR46.
* To use register names with standard convension, please use DMA_SUSENR46.
*/
#define DMA_SUSENR046 (DMA_SUSENR46)

/** \brief 1ABC, DMA Channel 47 Suspend Enable Register */
#define DMA_SUSENR47 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011ABCu)
/** Alias (User Manual Name) for DMA_SUSENR47.
* To use register names with standard convension, please use DMA_SUSENR47.
*/
#define DMA_SUSENR047 (DMA_SUSENR47)

/** \brief 1AC0, DMA Channel 48 Suspend Enable Register */
#define DMA_SUSENR48 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AC0u)
/** Alias (User Manual Name) for DMA_SUSENR48.
* To use register names with standard convension, please use DMA_SUSENR48.
*/
#define DMA_SUSENR048 (DMA_SUSENR48)

/** \brief 1AC4, DMA Channel 49 Suspend Enable Register */
#define DMA_SUSENR49 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AC4u)
/** Alias (User Manual Name) for DMA_SUSENR49.
* To use register names with standard convension, please use DMA_SUSENR49.
*/
#define DMA_SUSENR049 (DMA_SUSENR49)

/** \brief 1AC8, DMA Channel 50 Suspend Enable Register */
#define DMA_SUSENR50 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AC8u)
/** Alias (User Manual Name) for DMA_SUSENR50.
* To use register names with standard convension, please use DMA_SUSENR50.
*/
#define DMA_SUSENR050 (DMA_SUSENR50)

/** \brief 1ACC, DMA Channel 51 Suspend Enable Register */
#define DMA_SUSENR51 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011ACCu)
/** Alias (User Manual Name) for DMA_SUSENR51.
* To use register names with standard convension, please use DMA_SUSENR51.
*/
#define DMA_SUSENR051 (DMA_SUSENR51)

/** \brief 1AD0, DMA Channel 52 Suspend Enable Register */
#define DMA_SUSENR52 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AD0u)
/** Alias (User Manual Name) for DMA_SUSENR52.
* To use register names with standard convension, please use DMA_SUSENR52.
*/
#define DMA_SUSENR052 (DMA_SUSENR52)

/** \brief 1AD4, DMA Channel 53 Suspend Enable Register */
#define DMA_SUSENR53 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AD4u)
/** Alias (User Manual Name) for DMA_SUSENR53.
* To use register names with standard convension, please use DMA_SUSENR53.
*/
#define DMA_SUSENR053 (DMA_SUSENR53)

/** \brief 1AD8, DMA Channel 54 Suspend Enable Register */
#define DMA_SUSENR54 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AD8u)
/** Alias (User Manual Name) for DMA_SUSENR54.
* To use register names with standard convension, please use DMA_SUSENR54.
*/
#define DMA_SUSENR054 (DMA_SUSENR54)

/** \brief 1ADC, DMA Channel 55 Suspend Enable Register */
#define DMA_SUSENR55 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011ADCu)
/** Alias (User Manual Name) for DMA_SUSENR55.
* To use register names with standard convension, please use DMA_SUSENR55.
*/
#define DMA_SUSENR055 (DMA_SUSENR55)

/** \brief 1AE0, DMA Channel 56 Suspend Enable Register */
#define DMA_SUSENR56 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AE0u)
/** Alias (User Manual Name) for DMA_SUSENR56.
* To use register names with standard convension, please use DMA_SUSENR56.
*/
#define DMA_SUSENR056 (DMA_SUSENR56)

/** \brief 1AE4, DMA Channel 57 Suspend Enable Register */
#define DMA_SUSENR57 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AE4u)
/** Alias (User Manual Name) for DMA_SUSENR57.
* To use register names with standard convension, please use DMA_SUSENR57.
*/
#define DMA_SUSENR057 (DMA_SUSENR57)

/** \brief 1AE8, DMA Channel 58 Suspend Enable Register */
#define DMA_SUSENR58 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AE8u)
/** Alias (User Manual Name) for DMA_SUSENR58.
* To use register names with standard convension, please use DMA_SUSENR58.
*/
#define DMA_SUSENR058 (DMA_SUSENR58)

/** \brief 1AEC, DMA Channel 59 Suspend Enable Register */
#define DMA_SUSENR59 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AECu)
/** Alias (User Manual Name) for DMA_SUSENR59.
* To use register names with standard convension, please use DMA_SUSENR59.
*/
#define DMA_SUSENR059 (DMA_SUSENR59)

/** \brief 1AF0, DMA Channel 60 Suspend Enable Register */
#define DMA_SUSENR60 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AF0u)
/** Alias (User Manual Name) for DMA_SUSENR60.
* To use register names with standard convension, please use DMA_SUSENR60.
*/
#define DMA_SUSENR060 (DMA_SUSENR60)

/** \brief 1AF4, DMA Channel 61 Suspend Enable Register */
#define DMA_SUSENR61 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AF4u)
/** Alias (User Manual Name) for DMA_SUSENR61.
* To use register names with standard convension, please use DMA_SUSENR61.
*/
#define DMA_SUSENR061 (DMA_SUSENR61)

/** \brief 1AF8, DMA Channel 62 Suspend Enable Register */
#define DMA_SUSENR62 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AF8u)
/** Alias (User Manual Name) for DMA_SUSENR62.
* To use register names with standard convension, please use DMA_SUSENR62.
*/
#define DMA_SUSENR062 (DMA_SUSENR62)

/** \brief 1AFC, DMA Channel 63 Suspend Enable Register */
#define DMA_SUSENR63 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AFCu)
/** Alias (User Manual Name) for DMA_SUSENR63.
* To use register names with standard convension, please use DMA_SUSENR63.
*/
#define DMA_SUSENR063 (DMA_SUSENR63)

/** \brief 1C00, DMA Channel 0 Suspend Acknowledge Register */
#define DMA_SUSACR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C00u)
/** Alias (User Manual Name) for DMA_SUSACR0.
* To use register names with standard convension, please use DMA_SUSACR0.
*/
#define DMA_SUSACR000 (DMA_SUSACR0)

/** \brief 1C04, DMA Channel 1 Suspend Acknowledge Register */
#define DMA_SUSACR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C04u)
/** Alias (User Manual Name) for DMA_SUSACR1.
* To use register names with standard convension, please use DMA_SUSACR1.
*/
#define DMA_SUSACR001 (DMA_SUSACR1)

/** \brief 1C08, DMA Channel 2 Suspend Acknowledge Register */
#define DMA_SUSACR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C08u)
/** Alias (User Manual Name) for DMA_SUSACR2.
* To use register names with standard convension, please use DMA_SUSACR2.
*/
#define DMA_SUSACR002 (DMA_SUSACR2)

/** \brief 1C0C, DMA Channel 3 Suspend Acknowledge Register */
#define DMA_SUSACR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C0Cu)
/** Alias (User Manual Name) for DMA_SUSACR3.
* To use register names with standard convension, please use DMA_SUSACR3.
*/
#define DMA_SUSACR003 (DMA_SUSACR3)

/** \brief 1C10, DMA Channel 4 Suspend Acknowledge Register */
#define DMA_SUSACR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C10u)
/** Alias (User Manual Name) for DMA_SUSACR4.
* To use register names with standard convension, please use DMA_SUSACR4.
*/
#define DMA_SUSACR004 (DMA_SUSACR4)

/** \brief 1C14, DMA Channel 5 Suspend Acknowledge Register */
#define DMA_SUSACR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C14u)
/** Alias (User Manual Name) for DMA_SUSACR5.
* To use register names with standard convension, please use DMA_SUSACR5.
*/
#define DMA_SUSACR005 (DMA_SUSACR5)

/** \brief 1C18, DMA Channel 6 Suspend Acknowledge Register */
#define DMA_SUSACR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C18u)
/** Alias (User Manual Name) for DMA_SUSACR6.
* To use register names with standard convension, please use DMA_SUSACR6.
*/
#define DMA_SUSACR006 (DMA_SUSACR6)

/** \brief 1C1C, DMA Channel 7 Suspend Acknowledge Register */
#define DMA_SUSACR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C1Cu)
/** Alias (User Manual Name) for DMA_SUSACR7.
* To use register names with standard convension, please use DMA_SUSACR7.
*/
#define DMA_SUSACR007 (DMA_SUSACR7)

/** \brief 1C20, DMA Channel 8 Suspend Acknowledge Register */
#define DMA_SUSACR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C20u)
/** Alias (User Manual Name) for DMA_SUSACR8.
* To use register names with standard convension, please use DMA_SUSACR8.
*/
#define DMA_SUSACR008 (DMA_SUSACR8)

/** \brief 1C24, DMA Channel 9 Suspend Acknowledge Register */
#define DMA_SUSACR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C24u)
/** Alias (User Manual Name) for DMA_SUSACR9.
* To use register names with standard convension, please use DMA_SUSACR9.
*/
#define DMA_SUSACR009 (DMA_SUSACR9)

/** \brief 1C28, DMA Channel 10 Suspend Acknowledge Register */
#define DMA_SUSACR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C28u)
/** Alias (User Manual Name) for DMA_SUSACR10.
* To use register names with standard convension, please use DMA_SUSACR10.
*/
#define DMA_SUSACR010 (DMA_SUSACR10)

/** \brief 1C2C, DMA Channel 11 Suspend Acknowledge Register */
#define DMA_SUSACR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C2Cu)
/** Alias (User Manual Name) for DMA_SUSACR11.
* To use register names with standard convension, please use DMA_SUSACR11.
*/
#define DMA_SUSACR011 (DMA_SUSACR11)

/** \brief 1C30, DMA Channel 12 Suspend Acknowledge Register */
#define DMA_SUSACR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C30u)
/** Alias (User Manual Name) for DMA_SUSACR12.
* To use register names with standard convension, please use DMA_SUSACR12.
*/
#define DMA_SUSACR012 (DMA_SUSACR12)

/** \brief 1C34, DMA Channel 13 Suspend Acknowledge Register */
#define DMA_SUSACR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C34u)
/** Alias (User Manual Name) for DMA_SUSACR13.
* To use register names with standard convension, please use DMA_SUSACR13.
*/
#define DMA_SUSACR013 (DMA_SUSACR13)

/** \brief 1C38, DMA Channel 14 Suspend Acknowledge Register */
#define DMA_SUSACR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C38u)
/** Alias (User Manual Name) for DMA_SUSACR14.
* To use register names with standard convension, please use DMA_SUSACR14.
*/
#define DMA_SUSACR014 (DMA_SUSACR14)

/** \brief 1C3C, DMA Channel 15 Suspend Acknowledge Register */
#define DMA_SUSACR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C3Cu)
/** Alias (User Manual Name) for DMA_SUSACR15.
* To use register names with standard convension, please use DMA_SUSACR15.
*/
#define DMA_SUSACR015 (DMA_SUSACR15)

/** \brief 1C40, DMA Channel 16 Suspend Acknowledge Register */
#define DMA_SUSACR16 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C40u)
/** Alias (User Manual Name) for DMA_SUSACR16.
* To use register names with standard convension, please use DMA_SUSACR16.
*/
#define DMA_SUSACR016 (DMA_SUSACR16)

/** \brief 1C44, DMA Channel 17 Suspend Acknowledge Register */
#define DMA_SUSACR17 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C44u)
/** Alias (User Manual Name) for DMA_SUSACR17.
* To use register names with standard convension, please use DMA_SUSACR17.
*/
#define DMA_SUSACR017 (DMA_SUSACR17)

/** \brief 1C48, DMA Channel 18 Suspend Acknowledge Register */
#define DMA_SUSACR18 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C48u)
/** Alias (User Manual Name) for DMA_SUSACR18.
* To use register names with standard convension, please use DMA_SUSACR18.
*/
#define DMA_SUSACR018 (DMA_SUSACR18)

/** \brief 1C4C, DMA Channel 19 Suspend Acknowledge Register */
#define DMA_SUSACR19 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C4Cu)
/** Alias (User Manual Name) for DMA_SUSACR19.
* To use register names with standard convension, please use DMA_SUSACR19.
*/
#define DMA_SUSACR019 (DMA_SUSACR19)

/** \brief 1C50, DMA Channel 20 Suspend Acknowledge Register */
#define DMA_SUSACR20 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C50u)
/** Alias (User Manual Name) for DMA_SUSACR20.
* To use register names with standard convension, please use DMA_SUSACR20.
*/
#define DMA_SUSACR020 (DMA_SUSACR20)

/** \brief 1C54, DMA Channel 21 Suspend Acknowledge Register */
#define DMA_SUSACR21 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C54u)
/** Alias (User Manual Name) for DMA_SUSACR21.
* To use register names with standard convension, please use DMA_SUSACR21.
*/
#define DMA_SUSACR021 (DMA_SUSACR21)

/** \brief 1C58, DMA Channel 22 Suspend Acknowledge Register */
#define DMA_SUSACR22 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C58u)
/** Alias (User Manual Name) for DMA_SUSACR22.
* To use register names with standard convension, please use DMA_SUSACR22.
*/
#define DMA_SUSACR022 (DMA_SUSACR22)

/** \brief 1C5C, DMA Channel 23 Suspend Acknowledge Register */
#define DMA_SUSACR23 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C5Cu)
/** Alias (User Manual Name) for DMA_SUSACR23.
* To use register names with standard convension, please use DMA_SUSACR23.
*/
#define DMA_SUSACR023 (DMA_SUSACR23)

/** \brief 1C60, DMA Channel 24 Suspend Acknowledge Register */
#define DMA_SUSACR24 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C60u)
/** Alias (User Manual Name) for DMA_SUSACR24.
* To use register names with standard convension, please use DMA_SUSACR24.
*/
#define DMA_SUSACR024 (DMA_SUSACR24)

/** \brief 1C64, DMA Channel 25 Suspend Acknowledge Register */
#define DMA_SUSACR25 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C64u)
/** Alias (User Manual Name) for DMA_SUSACR25.
* To use register names with standard convension, please use DMA_SUSACR25.
*/
#define DMA_SUSACR025 (DMA_SUSACR25)

/** \brief 1C68, DMA Channel 26 Suspend Acknowledge Register */
#define DMA_SUSACR26 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C68u)
/** Alias (User Manual Name) for DMA_SUSACR26.
* To use register names with standard convension, please use DMA_SUSACR26.
*/
#define DMA_SUSACR026 (DMA_SUSACR26)

/** \brief 1C6C, DMA Channel 27 Suspend Acknowledge Register */
#define DMA_SUSACR27 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C6Cu)
/** Alias (User Manual Name) for DMA_SUSACR27.
* To use register names with standard convension, please use DMA_SUSACR27.
*/
#define DMA_SUSACR027 (DMA_SUSACR27)

/** \brief 1C70, DMA Channel 28 Suspend Acknowledge Register */
#define DMA_SUSACR28 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C70u)
/** Alias (User Manual Name) for DMA_SUSACR28.
* To use register names with standard convension, please use DMA_SUSACR28.
*/
#define DMA_SUSACR028 (DMA_SUSACR28)

/** \brief 1C74, DMA Channel 29 Suspend Acknowledge Register */
#define DMA_SUSACR29 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C74u)
/** Alias (User Manual Name) for DMA_SUSACR29.
* To use register names with standard convension, please use DMA_SUSACR29.
*/
#define DMA_SUSACR029 (DMA_SUSACR29)

/** \brief 1C78, DMA Channel 30 Suspend Acknowledge Register */
#define DMA_SUSACR30 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C78u)
/** Alias (User Manual Name) for DMA_SUSACR30.
* To use register names with standard convension, please use DMA_SUSACR30.
*/
#define DMA_SUSACR030 (DMA_SUSACR30)

/** \brief 1C7C, DMA Channel 31 Suspend Acknowledge Register */
#define DMA_SUSACR31 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C7Cu)
/** Alias (User Manual Name) for DMA_SUSACR31.
* To use register names with standard convension, please use DMA_SUSACR31.
*/
#define DMA_SUSACR031 (DMA_SUSACR31)

/** \brief 1C80, DMA Channel 32 Suspend Acknowledge Register */
#define DMA_SUSACR32 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C80u)
/** Alias (User Manual Name) for DMA_SUSACR32.
* To use register names with standard convension, please use DMA_SUSACR32.
*/
#define DMA_SUSACR032 (DMA_SUSACR32)

/** \brief 1C84, DMA Channel 33 Suspend Acknowledge Register */
#define DMA_SUSACR33 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C84u)
/** Alias (User Manual Name) for DMA_SUSACR33.
* To use register names with standard convension, please use DMA_SUSACR33.
*/
#define DMA_SUSACR033 (DMA_SUSACR33)

/** \brief 1C88, DMA Channel 34 Suspend Acknowledge Register */
#define DMA_SUSACR34 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C88u)
/** Alias (User Manual Name) for DMA_SUSACR34.
* To use register names with standard convension, please use DMA_SUSACR34.
*/
#define DMA_SUSACR034 (DMA_SUSACR34)

/** \brief 1C8C, DMA Channel 35 Suspend Acknowledge Register */
#define DMA_SUSACR35 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C8Cu)
/** Alias (User Manual Name) for DMA_SUSACR35.
* To use register names with standard convension, please use DMA_SUSACR35.
*/
#define DMA_SUSACR035 (DMA_SUSACR35)

/** \brief 1C90, DMA Channel 36 Suspend Acknowledge Register */
#define DMA_SUSACR36 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C90u)
/** Alias (User Manual Name) for DMA_SUSACR36.
* To use register names with standard convension, please use DMA_SUSACR36.
*/
#define DMA_SUSACR036 (DMA_SUSACR36)

/** \brief 1C94, DMA Channel 37 Suspend Acknowledge Register */
#define DMA_SUSACR37 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C94u)
/** Alias (User Manual Name) for DMA_SUSACR37.
* To use register names with standard convension, please use DMA_SUSACR37.
*/
#define DMA_SUSACR037 (DMA_SUSACR37)

/** \brief 1C98, DMA Channel 38 Suspend Acknowledge Register */
#define DMA_SUSACR38 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C98u)
/** Alias (User Manual Name) for DMA_SUSACR38.
* To use register names with standard convension, please use DMA_SUSACR38.
*/
#define DMA_SUSACR038 (DMA_SUSACR38)

/** \brief 1C9C, DMA Channel 39 Suspend Acknowledge Register */
#define DMA_SUSACR39 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C9Cu)
/** Alias (User Manual Name) for DMA_SUSACR39.
* To use register names with standard convension, please use DMA_SUSACR39.
*/
#define DMA_SUSACR039 (DMA_SUSACR39)

/** \brief 1CA0, DMA Channel 40 Suspend Acknowledge Register */
#define DMA_SUSACR40 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CA0u)
/** Alias (User Manual Name) for DMA_SUSACR40.
* To use register names with standard convension, please use DMA_SUSACR40.
*/
#define DMA_SUSACR040 (DMA_SUSACR40)

/** \brief 1CA4, DMA Channel 41 Suspend Acknowledge Register */
#define DMA_SUSACR41 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CA4u)
/** Alias (User Manual Name) for DMA_SUSACR41.
* To use register names with standard convension, please use DMA_SUSACR41.
*/
#define DMA_SUSACR041 (DMA_SUSACR41)

/** \brief 1CA8, DMA Channel 42 Suspend Acknowledge Register */
#define DMA_SUSACR42 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CA8u)
/** Alias (User Manual Name) for DMA_SUSACR42.
* To use register names with standard convension, please use DMA_SUSACR42.
*/
#define DMA_SUSACR042 (DMA_SUSACR42)

/** \brief 1CAC, DMA Channel 43 Suspend Acknowledge Register */
#define DMA_SUSACR43 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CACu)
/** Alias (User Manual Name) for DMA_SUSACR43.
* To use register names with standard convension, please use DMA_SUSACR43.
*/
#define DMA_SUSACR043 (DMA_SUSACR43)

/** \brief 1CB0, DMA Channel 44 Suspend Acknowledge Register */
#define DMA_SUSACR44 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CB0u)
/** Alias (User Manual Name) for DMA_SUSACR44.
* To use register names with standard convension, please use DMA_SUSACR44.
*/
#define DMA_SUSACR044 (DMA_SUSACR44)

/** \brief 1CB4, DMA Channel 45 Suspend Acknowledge Register */
#define DMA_SUSACR45 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CB4u)
/** Alias (User Manual Name) for DMA_SUSACR45.
* To use register names with standard convension, please use DMA_SUSACR45.
*/
#define DMA_SUSACR045 (DMA_SUSACR45)

/** \brief 1CB8, DMA Channel 46 Suspend Acknowledge Register */
#define DMA_SUSACR46 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CB8u)
/** Alias (User Manual Name) for DMA_SUSACR46.
* To use register names with standard convension, please use DMA_SUSACR46.
*/
#define DMA_SUSACR046 (DMA_SUSACR46)

/** \brief 1CBC, DMA Channel 47 Suspend Acknowledge Register */
#define DMA_SUSACR47 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CBCu)
/** Alias (User Manual Name) for DMA_SUSACR47.
* To use register names with standard convension, please use DMA_SUSACR47.
*/
#define DMA_SUSACR047 (DMA_SUSACR47)

/** \brief 1CC0, DMA Channel 48 Suspend Acknowledge Register */
#define DMA_SUSACR48 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CC0u)
/** Alias (User Manual Name) for DMA_SUSACR48.
* To use register names with standard convension, please use DMA_SUSACR48.
*/
#define DMA_SUSACR048 (DMA_SUSACR48)

/** \brief 1CC4, DMA Channel 49 Suspend Acknowledge Register */
#define DMA_SUSACR49 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CC4u)
/** Alias (User Manual Name) for DMA_SUSACR49.
* To use register names with standard convension, please use DMA_SUSACR49.
*/
#define DMA_SUSACR049 (DMA_SUSACR49)

/** \brief 1CC8, DMA Channel 50 Suspend Acknowledge Register */
#define DMA_SUSACR50 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CC8u)
/** Alias (User Manual Name) for DMA_SUSACR50.
* To use register names with standard convension, please use DMA_SUSACR50.
*/
#define DMA_SUSACR050 (DMA_SUSACR50)

/** \brief 1CCC, DMA Channel 51 Suspend Acknowledge Register */
#define DMA_SUSACR51 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CCCu)
/** Alias (User Manual Name) for DMA_SUSACR51.
* To use register names with standard convension, please use DMA_SUSACR51.
*/
#define DMA_SUSACR051 (DMA_SUSACR51)

/** \brief 1CD0, DMA Channel 52 Suspend Acknowledge Register */
#define DMA_SUSACR52 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CD0u)
/** Alias (User Manual Name) for DMA_SUSACR52.
* To use register names with standard convension, please use DMA_SUSACR52.
*/
#define DMA_SUSACR052 (DMA_SUSACR52)

/** \brief 1CD4, DMA Channel 53 Suspend Acknowledge Register */
#define DMA_SUSACR53 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CD4u)
/** Alias (User Manual Name) for DMA_SUSACR53.
* To use register names with standard convension, please use DMA_SUSACR53.
*/
#define DMA_SUSACR053 (DMA_SUSACR53)

/** \brief 1CD8, DMA Channel 54 Suspend Acknowledge Register */
#define DMA_SUSACR54 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CD8u)
/** Alias (User Manual Name) for DMA_SUSACR54.
* To use register names with standard convension, please use DMA_SUSACR54.
*/
#define DMA_SUSACR054 (DMA_SUSACR54)

/** \brief 1CDC, DMA Channel 55 Suspend Acknowledge Register */
#define DMA_SUSACR55 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CDCu)
/** Alias (User Manual Name) for DMA_SUSACR55.
* To use register names with standard convension, please use DMA_SUSACR55.
*/
#define DMA_SUSACR055 (DMA_SUSACR55)

/** \brief 1CE0, DMA Channel 56 Suspend Acknowledge Register */
#define DMA_SUSACR56 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CE0u)
/** Alias (User Manual Name) for DMA_SUSACR56.
* To use register names with standard convension, please use DMA_SUSACR56.
*/
#define DMA_SUSACR056 (DMA_SUSACR56)

/** \brief 1CE4, DMA Channel 57 Suspend Acknowledge Register */
#define DMA_SUSACR57 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CE4u)
/** Alias (User Manual Name) for DMA_SUSACR57.
* To use register names with standard convension, please use DMA_SUSACR57.
*/
#define DMA_SUSACR057 (DMA_SUSACR57)

/** \brief 1CE8, DMA Channel 58 Suspend Acknowledge Register */
#define DMA_SUSACR58 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CE8u)
/** Alias (User Manual Name) for DMA_SUSACR58.
* To use register names with standard convension, please use DMA_SUSACR58.
*/
#define DMA_SUSACR058 (DMA_SUSACR58)

/** \brief 1CEC, DMA Channel 59 Suspend Acknowledge Register */
#define DMA_SUSACR59 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CECu)
/** Alias (User Manual Name) for DMA_SUSACR59.
* To use register names with standard convension, please use DMA_SUSACR59.
*/
#define DMA_SUSACR059 (DMA_SUSACR59)

/** \brief 1CF0, DMA Channel 60 Suspend Acknowledge Register */
#define DMA_SUSACR60 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CF0u)
/** Alias (User Manual Name) for DMA_SUSACR60.
* To use register names with standard convension, please use DMA_SUSACR60.
*/
#define DMA_SUSACR060 (DMA_SUSACR60)

/** \brief 1CF4, DMA Channel 61 Suspend Acknowledge Register */
#define DMA_SUSACR61 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CF4u)
/** Alias (User Manual Name) for DMA_SUSACR61.
* To use register names with standard convension, please use DMA_SUSACR61.
*/
#define DMA_SUSACR061 (DMA_SUSACR61)

/** \brief 1CF8, DMA Channel 62 Suspend Acknowledge Register */
#define DMA_SUSACR62 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CF8u)
/** Alias (User Manual Name) for DMA_SUSACR62.
* To use register names with standard convension, please use DMA_SUSACR62.
*/
#define DMA_SUSACR062 (DMA_SUSACR62)

/** \brief 1CFC, DMA Channel 63 Suspend Acknowledge Register */
#define DMA_SUSACR63 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CFCu)
/** Alias (User Manual Name) for DMA_SUSACR63.
* To use register names with standard convension, please use DMA_SUSACR63.
*/
#define DMA_SUSACR063 (DMA_SUSACR63)

/** \brief 1E00, DMA Channel 0 Transaction State Register */
#define DMA_TSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E00u)
/** Alias (User Manual Name) for DMA_TSR0.
* To use register names with standard convension, please use DMA_TSR0.
*/
#define DMA_TSR000 (DMA_TSR0)

/** \brief 1E04, DMA Channel 1 Transaction State Register */
#define DMA_TSR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E04u)
/** Alias (User Manual Name) for DMA_TSR1.
* To use register names with standard convension, please use DMA_TSR1.
*/
#define DMA_TSR001 (DMA_TSR1)

/** \brief 1E08, DMA Channel 2 Transaction State Register */
#define DMA_TSR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E08u)
/** Alias (User Manual Name) for DMA_TSR2.
* To use register names with standard convension, please use DMA_TSR2.
*/
#define DMA_TSR002 (DMA_TSR2)

/** \brief 1E0C, DMA Channel 3 Transaction State Register */
#define DMA_TSR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E0Cu)
/** Alias (User Manual Name) for DMA_TSR3.
* To use register names with standard convension, please use DMA_TSR3.
*/
#define DMA_TSR003 (DMA_TSR3)

/** \brief 1E10, DMA Channel 4 Transaction State Register */
#define DMA_TSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E10u)
/** Alias (User Manual Name) for DMA_TSR4.
* To use register names with standard convension, please use DMA_TSR4.
*/
#define DMA_TSR004 (DMA_TSR4)

/** \brief 1E14, DMA Channel 5 Transaction State Register */
#define DMA_TSR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E14u)
/** Alias (User Manual Name) for DMA_TSR5.
* To use register names with standard convension, please use DMA_TSR5.
*/
#define DMA_TSR005 (DMA_TSR5)

/** \brief 1E18, DMA Channel 6 Transaction State Register */
#define DMA_TSR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E18u)
/** Alias (User Manual Name) for DMA_TSR6.
* To use register names with standard convension, please use DMA_TSR6.
*/
#define DMA_TSR006 (DMA_TSR6)

/** \brief 1E1C, DMA Channel 7 Transaction State Register */
#define DMA_TSR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E1Cu)
/** Alias (User Manual Name) for DMA_TSR7.
* To use register names with standard convension, please use DMA_TSR7.
*/
#define DMA_TSR007 (DMA_TSR7)

/** \brief 1E20, DMA Channel 8 Transaction State Register */
#define DMA_TSR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E20u)
/** Alias (User Manual Name) for DMA_TSR8.
* To use register names with standard convension, please use DMA_TSR8.
*/
#define DMA_TSR008 (DMA_TSR8)

/** \brief 1E24, DMA Channel 9 Transaction State Register */
#define DMA_TSR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E24u)
/** Alias (User Manual Name) for DMA_TSR9.
* To use register names with standard convension, please use DMA_TSR9.
*/
#define DMA_TSR009 (DMA_TSR9)

/** \brief 1E28, DMA Channel 10 Transaction State Register */
#define DMA_TSR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E28u)
/** Alias (User Manual Name) for DMA_TSR10.
* To use register names with standard convension, please use DMA_TSR10.
*/
#define DMA_TSR010 (DMA_TSR10)

/** \brief 1E2C, DMA Channel 11 Transaction State Register */
#define DMA_TSR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E2Cu)
/** Alias (User Manual Name) for DMA_TSR11.
* To use register names with standard convension, please use DMA_TSR11.
*/
#define DMA_TSR011 (DMA_TSR11)

/** \brief 1E30, DMA Channel 12 Transaction State Register */
#define DMA_TSR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E30u)
/** Alias (User Manual Name) for DMA_TSR12.
* To use register names with standard convension, please use DMA_TSR12.
*/
#define DMA_TSR012 (DMA_TSR12)

/** \brief 1E34, DMA Channel 13 Transaction State Register */
#define DMA_TSR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E34u)
/** Alias (User Manual Name) for DMA_TSR13.
* To use register names with standard convension, please use DMA_TSR13.
*/
#define DMA_TSR013 (DMA_TSR13)

/** \brief 1E38, DMA Channel 14 Transaction State Register */
#define DMA_TSR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E38u)
/** Alias (User Manual Name) for DMA_TSR14.
* To use register names with standard convension, please use DMA_TSR14.
*/
#define DMA_TSR014 (DMA_TSR14)

/** \brief 1E3C, DMA Channel 15 Transaction State Register */
#define DMA_TSR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E3Cu)
/** Alias (User Manual Name) for DMA_TSR15.
* To use register names with standard convension, please use DMA_TSR15.
*/
#define DMA_TSR015 (DMA_TSR15)

/** \brief 1E40, DMA Channel 16 Transaction State Register */
#define DMA_TSR16 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E40u)
/** Alias (User Manual Name) for DMA_TSR16.
* To use register names with standard convension, please use DMA_TSR16.
*/
#define DMA_TSR016 (DMA_TSR16)

/** \brief 1E44, DMA Channel 17 Transaction State Register */
#define DMA_TSR17 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E44u)
/** Alias (User Manual Name) for DMA_TSR17.
* To use register names with standard convension, please use DMA_TSR17.
*/
#define DMA_TSR017 (DMA_TSR17)

/** \brief 1E48, DMA Channel 18 Transaction State Register */
#define DMA_TSR18 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E48u)
/** Alias (User Manual Name) for DMA_TSR18.
* To use register names with standard convension, please use DMA_TSR18.
*/
#define DMA_TSR018 (DMA_TSR18)

/** \brief 1E4C, DMA Channel 19 Transaction State Register */
#define DMA_TSR19 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E4Cu)
/** Alias (User Manual Name) for DMA_TSR19.
* To use register names with standard convension, please use DMA_TSR19.
*/
#define DMA_TSR019 (DMA_TSR19)

/** \brief 1E50, DMA Channel 20 Transaction State Register */
#define DMA_TSR20 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E50u)
/** Alias (User Manual Name) for DMA_TSR20.
* To use register names with standard convension, please use DMA_TSR20.
*/
#define DMA_TSR020 (DMA_TSR20)

/** \brief 1E54, DMA Channel 21 Transaction State Register */
#define DMA_TSR21 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E54u)
/** Alias (User Manual Name) for DMA_TSR21.
* To use register names with standard convension, please use DMA_TSR21.
*/
#define DMA_TSR021 (DMA_TSR21)

/** \brief 1E58, DMA Channel 22 Transaction State Register */
#define DMA_TSR22 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E58u)
/** Alias (User Manual Name) for DMA_TSR22.
* To use register names with standard convension, please use DMA_TSR22.
*/
#define DMA_TSR022 (DMA_TSR22)

/** \brief 1E5C, DMA Channel 23 Transaction State Register */
#define DMA_TSR23 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E5Cu)
/** Alias (User Manual Name) for DMA_TSR23.
* To use register names with standard convension, please use DMA_TSR23.
*/
#define DMA_TSR023 (DMA_TSR23)

/** \brief 1E60, DMA Channel 24 Transaction State Register */
#define DMA_TSR24 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E60u)
/** Alias (User Manual Name) for DMA_TSR24.
* To use register names with standard convension, please use DMA_TSR24.
*/
#define DMA_TSR024 (DMA_TSR24)

/** \brief 1E64, DMA Channel 25 Transaction State Register */
#define DMA_TSR25 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E64u)
/** Alias (User Manual Name) for DMA_TSR25.
* To use register names with standard convension, please use DMA_TSR25.
*/
#define DMA_TSR025 (DMA_TSR25)

/** \brief 1E68, DMA Channel 26 Transaction State Register */
#define DMA_TSR26 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E68u)
/** Alias (User Manual Name) for DMA_TSR26.
* To use register names with standard convension, please use DMA_TSR26.
*/
#define DMA_TSR026 (DMA_TSR26)

/** \brief 1E6C, DMA Channel 27 Transaction State Register */
#define DMA_TSR27 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E6Cu)
/** Alias (User Manual Name) for DMA_TSR27.
* To use register names with standard convension, please use DMA_TSR27.
*/
#define DMA_TSR027 (DMA_TSR27)

/** \brief 1E70, DMA Channel 28 Transaction State Register */
#define DMA_TSR28 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E70u)
/** Alias (User Manual Name) for DMA_TSR28.
* To use register names with standard convension, please use DMA_TSR28.
*/
#define DMA_TSR028 (DMA_TSR28)

/** \brief 1E74, DMA Channel 29 Transaction State Register */
#define DMA_TSR29 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E74u)
/** Alias (User Manual Name) for DMA_TSR29.
* To use register names with standard convension, please use DMA_TSR29.
*/
#define DMA_TSR029 (DMA_TSR29)

/** \brief 1E78, DMA Channel 30 Transaction State Register */
#define DMA_TSR30 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E78u)
/** Alias (User Manual Name) for DMA_TSR30.
* To use register names with standard convension, please use DMA_TSR30.
*/
#define DMA_TSR030 (DMA_TSR30)

/** \brief 1E7C, DMA Channel 31 Transaction State Register */
#define DMA_TSR31 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E7Cu)
/** Alias (User Manual Name) for DMA_TSR31.
* To use register names with standard convension, please use DMA_TSR31.
*/
#define DMA_TSR031 (DMA_TSR31)

/** \brief 1E80, DMA Channel 32 Transaction State Register */
#define DMA_TSR32 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E80u)
/** Alias (User Manual Name) for DMA_TSR32.
* To use register names with standard convension, please use DMA_TSR32.
*/
#define DMA_TSR032 (DMA_TSR32)

/** \brief 1E84, DMA Channel 33 Transaction State Register */
#define DMA_TSR33 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E84u)
/** Alias (User Manual Name) for DMA_TSR33.
* To use register names with standard convension, please use DMA_TSR33.
*/
#define DMA_TSR033 (DMA_TSR33)

/** \brief 1E88, DMA Channel 34 Transaction State Register */
#define DMA_TSR34 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E88u)
/** Alias (User Manual Name) for DMA_TSR34.
* To use register names with standard convension, please use DMA_TSR34.
*/
#define DMA_TSR034 (DMA_TSR34)

/** \brief 1E8C, DMA Channel 35 Transaction State Register */
#define DMA_TSR35 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E8Cu)
/** Alias (User Manual Name) for DMA_TSR35.
* To use register names with standard convension, please use DMA_TSR35.
*/
#define DMA_TSR035 (DMA_TSR35)

/** \brief 1E90, DMA Channel 36 Transaction State Register */
#define DMA_TSR36 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E90u)
/** Alias (User Manual Name) for DMA_TSR36.
* To use register names with standard convension, please use DMA_TSR36.
*/
#define DMA_TSR036 (DMA_TSR36)

/** \brief 1E94, DMA Channel 37 Transaction State Register */
#define DMA_TSR37 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E94u)
/** Alias (User Manual Name) for DMA_TSR37.
* To use register names with standard convension, please use DMA_TSR37.
*/
#define DMA_TSR037 (DMA_TSR37)

/** \brief 1E98, DMA Channel 38 Transaction State Register */
#define DMA_TSR38 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E98u)
/** Alias (User Manual Name) for DMA_TSR38.
* To use register names with standard convension, please use DMA_TSR38.
*/
#define DMA_TSR038 (DMA_TSR38)

/** \brief 1E9C, DMA Channel 39 Transaction State Register */
#define DMA_TSR39 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E9Cu)
/** Alias (User Manual Name) for DMA_TSR39.
* To use register names with standard convension, please use DMA_TSR39.
*/
#define DMA_TSR039 (DMA_TSR39)

/** \brief 1EA0, DMA Channel 40 Transaction State Register */
#define DMA_TSR40 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EA0u)
/** Alias (User Manual Name) for DMA_TSR40.
* To use register names with standard convension, please use DMA_TSR40.
*/
#define DMA_TSR040 (DMA_TSR40)

/** \brief 1EA4, DMA Channel 41 Transaction State Register */
#define DMA_TSR41 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EA4u)
/** Alias (User Manual Name) for DMA_TSR41.
* To use register names with standard convension, please use DMA_TSR41.
*/
#define DMA_TSR041 (DMA_TSR41)

/** \brief 1EA8, DMA Channel 42 Transaction State Register */
#define DMA_TSR42 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EA8u)
/** Alias (User Manual Name) for DMA_TSR42.
* To use register names with standard convension, please use DMA_TSR42.
*/
#define DMA_TSR042 (DMA_TSR42)

/** \brief 1EAC, DMA Channel 43 Transaction State Register */
#define DMA_TSR43 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EACu)
/** Alias (User Manual Name) for DMA_TSR43.
* To use register names with standard convension, please use DMA_TSR43.
*/
#define DMA_TSR043 (DMA_TSR43)

/** \brief 1EB0, DMA Channel 44 Transaction State Register */
#define DMA_TSR44 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EB0u)
/** Alias (User Manual Name) for DMA_TSR44.
* To use register names with standard convension, please use DMA_TSR44.
*/
#define DMA_TSR044 (DMA_TSR44)

/** \brief 1EB4, DMA Channel 45 Transaction State Register */
#define DMA_TSR45 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EB4u)
/** Alias (User Manual Name) for DMA_TSR45.
* To use register names with standard convension, please use DMA_TSR45.
*/
#define DMA_TSR045 (DMA_TSR45)

/** \brief 1EB8, DMA Channel 46 Transaction State Register */
#define DMA_TSR46 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EB8u)
/** Alias (User Manual Name) for DMA_TSR46.
* To use register names with standard convension, please use DMA_TSR46.
*/
#define DMA_TSR046 (DMA_TSR46)

/** \brief 1EBC, DMA Channel 47 Transaction State Register */
#define DMA_TSR47 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EBCu)
/** Alias (User Manual Name) for DMA_TSR47.
* To use register names with standard convension, please use DMA_TSR47.
*/
#define DMA_TSR047 (DMA_TSR47)

/** \brief 1EC0, DMA Channel 48 Transaction State Register */
#define DMA_TSR48 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EC0u)
/** Alias (User Manual Name) for DMA_TSR48.
* To use register names with standard convension, please use DMA_TSR48.
*/
#define DMA_TSR048 (DMA_TSR48)

/** \brief 1EC4, DMA Channel 49 Transaction State Register */
#define DMA_TSR49 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EC4u)
/** Alias (User Manual Name) for DMA_TSR49.
* To use register names with standard convension, please use DMA_TSR49.
*/
#define DMA_TSR049 (DMA_TSR49)

/** \brief 1EC8, DMA Channel 50 Transaction State Register */
#define DMA_TSR50 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EC8u)
/** Alias (User Manual Name) for DMA_TSR50.
* To use register names with standard convension, please use DMA_TSR50.
*/
#define DMA_TSR050 (DMA_TSR50)

/** \brief 1ECC, DMA Channel 51 Transaction State Register */
#define DMA_TSR51 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011ECCu)
/** Alias (User Manual Name) for DMA_TSR51.
* To use register names with standard convension, please use DMA_TSR51.
*/
#define DMA_TSR051 (DMA_TSR51)

/** \brief 1ED0, DMA Channel 52 Transaction State Register */
#define DMA_TSR52 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011ED0u)
/** Alias (User Manual Name) for DMA_TSR52.
* To use register names with standard convension, please use DMA_TSR52.
*/
#define DMA_TSR052 (DMA_TSR52)

/** \brief 1ED4, DMA Channel 53 Transaction State Register */
#define DMA_TSR53 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011ED4u)
/** Alias (User Manual Name) for DMA_TSR53.
* To use register names with standard convension, please use DMA_TSR53.
*/
#define DMA_TSR053 (DMA_TSR53)

/** \brief 1ED8, DMA Channel 54 Transaction State Register */
#define DMA_TSR54 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011ED8u)
/** Alias (User Manual Name) for DMA_TSR54.
* To use register names with standard convension, please use DMA_TSR54.
*/
#define DMA_TSR054 (DMA_TSR54)

/** \brief 1EDC, DMA Channel 55 Transaction State Register */
#define DMA_TSR55 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EDCu)
/** Alias (User Manual Name) for DMA_TSR55.
* To use register names with standard convension, please use DMA_TSR55.
*/
#define DMA_TSR055 (DMA_TSR55)

/** \brief 1EE0, DMA Channel 56 Transaction State Register */
#define DMA_TSR56 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EE0u)
/** Alias (User Manual Name) for DMA_TSR56.
* To use register names with standard convension, please use DMA_TSR56.
*/
#define DMA_TSR056 (DMA_TSR56)

/** \brief 1EE4, DMA Channel 57 Transaction State Register */
#define DMA_TSR57 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EE4u)
/** Alias (User Manual Name) for DMA_TSR57.
* To use register names with standard convension, please use DMA_TSR57.
*/
#define DMA_TSR057 (DMA_TSR57)

/** \brief 1EE8, DMA Channel 58 Transaction State Register */
#define DMA_TSR58 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EE8u)
/** Alias (User Manual Name) for DMA_TSR58.
* To use register names with standard convension, please use DMA_TSR58.
*/
#define DMA_TSR058 (DMA_TSR58)

/** \brief 1EEC, DMA Channel 59 Transaction State Register */
#define DMA_TSR59 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EECu)
/** Alias (User Manual Name) for DMA_TSR59.
* To use register names with standard convension, please use DMA_TSR59.
*/
#define DMA_TSR059 (DMA_TSR59)

/** \brief 1EF0, DMA Channel 60 Transaction State Register */
#define DMA_TSR60 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EF0u)
/** Alias (User Manual Name) for DMA_TSR60.
* To use register names with standard convension, please use DMA_TSR60.
*/
#define DMA_TSR060 (DMA_TSR60)

/** \brief 1EF4, DMA Channel 61 Transaction State Register */
#define DMA_TSR61 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EF4u)
/** Alias (User Manual Name) for DMA_TSR61.
* To use register names with standard convension, please use DMA_TSR61.
*/
#define DMA_TSR061 (DMA_TSR61)

/** \brief 1EF8, DMA Channel 62 Transaction State Register */
#define DMA_TSR62 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EF8u)
/** Alias (User Manual Name) for DMA_TSR62.
* To use register names with standard convension, please use DMA_TSR62.
*/
#define DMA_TSR062 (DMA_TSR62)

/** \brief 1EFC, DMA Channel 63 Transaction State Register */
#define DMA_TSR63 /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EFCu)
/** Alias (User Manual Name) for DMA_TSR63.
* To use register names with standard convension, please use DMA_TSR63.
*/
#define DMA_TSR063 (DMA_TSR63)

/** \brief 2000, DMARAM Channel 0 Read Data CRC Register */
#define DMA_CH0_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012000u)
/** Alias (User Manual Name) for DMA_CH0_RDCRCR.
* To use register names with standard convension, please use DMA_CH0_RDCRCR.
*/
#define DMA_RDCRCR000 (DMA_CH0_RDCRCR)

/** \brief 2004, DMARAM Channel 0 Source and Destination Address CRC Register */
#define DMA_CH0_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012004u)
/** Alias (User Manual Name) for DMA_CH0_SDCRCR.
* To use register names with standard convension, please use DMA_CH0_SDCRCR.
*/
#define DMA_SDCRCR000 (DMA_CH0_SDCRCR)

/** \brief 2008, DMARAM Channel 0 Source Address Register */
#define DMA_CH0_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012008u)
/** Alias (User Manual Name) for DMA_CH0_SADR.
* To use register names with standard convension, please use DMA_CH0_SADR.
*/
#define DMA_SADR000 (DMA_CH0_SADR)

/** \brief 200C, DMARAM Channel 0 Destination Address Register */
#define DMA_CH0_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001200Cu)
/** Alias (User Manual Name) for DMA_CH0_DADR.
* To use register names with standard convension, please use DMA_CH0_DADR.
*/
#define DMA_DADR000 (DMA_CH0_DADR)

/** \brief 2010, DMARAM Channel 0 Address and Interrupt Control Register */
#define DMA_CH0_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012010u)
/** Alias (User Manual Name) for DMA_CH0_ADICR.
* To use register names with standard convension, please use DMA_CH0_ADICR.
*/
#define DMA_ADICR000 (DMA_CH0_ADICR)

/** \brief 2014, DMARAM Channel 0 Configuration Register */
#define DMA_CH0_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012014u)
/** Alias (User Manual Name) for DMA_CH0_CHCFGR.
* To use register names with standard convension, please use DMA_CH0_CHCFGR.
*/
#define DMA_CHCFGR000 (DMA_CH0_CHCFGR)

/** \brief 2018, DMARAM Channel 0 Shadow Address Register */
#define DMA_CH0_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012018u)
/** Alias (User Manual Name) for DMA_CH0_SHADR.
* To use register names with standard convension, please use DMA_CH0_SHADR.
*/
#define DMA_SHADR000 (DMA_CH0_SHADR)

/** \brief 201C, DMARAM Channel 0 Control and Status Register */
#define DMA_CH0_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001201Cu)
/** Alias (User Manual Name) for DMA_CH0_CHCSR.
* To use register names with standard convension, please use DMA_CH0_CHCSR.
*/
#define DMA_CHCSR000 (DMA_CH0_CHCSR)

/** \brief 2020, DMARAM Channel 1 Read Data CRC Register */
#define DMA_CH1_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012020u)
/** Alias (User Manual Name) for DMA_CH1_RDCRCR.
* To use register names with standard convension, please use DMA_CH1_RDCRCR.
*/
#define DMA_RDCRCR001 (DMA_CH1_RDCRCR)

/** \brief 2024, DMARAM Channel 1 Source and Destination Address CRC Register */
#define DMA_CH1_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012024u)
/** Alias (User Manual Name) for DMA_CH1_SDCRCR.
* To use register names with standard convension, please use DMA_CH1_SDCRCR.
*/
#define DMA_SDCRCR001 (DMA_CH1_SDCRCR)

/** \brief 2028, DMARAM Channel 1 Source Address Register */
#define DMA_CH1_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012028u)
/** Alias (User Manual Name) for DMA_CH1_SADR.
* To use register names with standard convension, please use DMA_CH1_SADR.
*/
#define DMA_SADR001 (DMA_CH1_SADR)

/** \brief 202C, DMARAM Channel 1 Destination Address Register */
#define DMA_CH1_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001202Cu)
/** Alias (User Manual Name) for DMA_CH1_DADR.
* To use register names with standard convension, please use DMA_CH1_DADR.
*/
#define DMA_DADR001 (DMA_CH1_DADR)

/** \brief 2030, DMARAM Channel 1 Address and Interrupt Control Register */
#define DMA_CH1_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012030u)
/** Alias (User Manual Name) for DMA_CH1_ADICR.
* To use register names with standard convension, please use DMA_CH1_ADICR.
*/
#define DMA_ADICR001 (DMA_CH1_ADICR)

/** \brief 2034, DMARAM Channel 1 Configuration Register */
#define DMA_CH1_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012034u)
/** Alias (User Manual Name) for DMA_CH1_CHCFGR.
* To use register names with standard convension, please use DMA_CH1_CHCFGR.
*/
#define DMA_CHCFGR001 (DMA_CH1_CHCFGR)

/** \brief 2038, DMARAM Channel 1 Shadow Address Register */
#define DMA_CH1_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012038u)
/** Alias (User Manual Name) for DMA_CH1_SHADR.
* To use register names with standard convension, please use DMA_CH1_SHADR.
*/
#define DMA_SHADR001 (DMA_CH1_SHADR)

/** \brief 203C, DMARAM Channel 1 Control and Status Register */
#define DMA_CH1_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001203Cu)
/** Alias (User Manual Name) for DMA_CH1_CHCSR.
* To use register names with standard convension, please use DMA_CH1_CHCSR.
*/
#define DMA_CHCSR001 (DMA_CH1_CHCSR)

/** \brief 2040, DMARAM Channel 2 Read Data CRC Register */
#define DMA_CH2_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012040u)
/** Alias (User Manual Name) for DMA_CH2_RDCRCR.
* To use register names with standard convension, please use DMA_CH2_RDCRCR.
*/
#define DMA_RDCRCR002 (DMA_CH2_RDCRCR)

/** \brief 2044, DMARAM Channel 2 Source and Destination Address CRC Register */
#define DMA_CH2_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012044u)
/** Alias (User Manual Name) for DMA_CH2_SDCRCR.
* To use register names with standard convension, please use DMA_CH2_SDCRCR.
*/
#define DMA_SDCRCR002 (DMA_CH2_SDCRCR)

/** \brief 2048, DMARAM Channel 2 Source Address Register */
#define DMA_CH2_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012048u)
/** Alias (User Manual Name) for DMA_CH2_SADR.
* To use register names with standard convension, please use DMA_CH2_SADR.
*/
#define DMA_SADR002 (DMA_CH2_SADR)

/** \brief 204C, DMARAM Channel 2 Destination Address Register */
#define DMA_CH2_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001204Cu)
/** Alias (User Manual Name) for DMA_CH2_DADR.
* To use register names with standard convension, please use DMA_CH2_DADR.
*/
#define DMA_DADR002 (DMA_CH2_DADR)

/** \brief 2050, DMARAM Channel 2 Address and Interrupt Control Register */
#define DMA_CH2_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012050u)
/** Alias (User Manual Name) for DMA_CH2_ADICR.
* To use register names with standard convension, please use DMA_CH2_ADICR.
*/
#define DMA_ADICR002 (DMA_CH2_ADICR)

/** \brief 2054, DMARAM Channel 2 Configuration Register */
#define DMA_CH2_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012054u)
/** Alias (User Manual Name) for DMA_CH2_CHCFGR.
* To use register names with standard convension, please use DMA_CH2_CHCFGR.
*/
#define DMA_CHCFGR002 (DMA_CH2_CHCFGR)

/** \brief 2058, DMARAM Channel 2 Shadow Address Register */
#define DMA_CH2_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012058u)
/** Alias (User Manual Name) for DMA_CH2_SHADR.
* To use register names with standard convension, please use DMA_CH2_SHADR.
*/
#define DMA_SHADR002 (DMA_CH2_SHADR)

/** \brief 205C, DMARAM Channel 2 Control and Status Register */
#define DMA_CH2_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001205Cu)
/** Alias (User Manual Name) for DMA_CH2_CHCSR.
* To use register names with standard convension, please use DMA_CH2_CHCSR.
*/
#define DMA_CHCSR002 (DMA_CH2_CHCSR)

/** \brief 2060, DMARAM Channel 3 Read Data CRC Register */
#define DMA_CH3_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012060u)
/** Alias (User Manual Name) for DMA_CH3_RDCRCR.
* To use register names with standard convension, please use DMA_CH3_RDCRCR.
*/
#define DMA_RDCRCR003 (DMA_CH3_RDCRCR)

/** \brief 2064, DMARAM Channel 3 Source and Destination Address CRC Register */
#define DMA_CH3_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012064u)
/** Alias (User Manual Name) for DMA_CH3_SDCRCR.
* To use register names with standard convension, please use DMA_CH3_SDCRCR.
*/
#define DMA_SDCRCR003 (DMA_CH3_SDCRCR)

/** \brief 2068, DMARAM Channel 3 Source Address Register */
#define DMA_CH3_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012068u)
/** Alias (User Manual Name) for DMA_CH3_SADR.
* To use register names with standard convension, please use DMA_CH3_SADR.
*/
#define DMA_SADR003 (DMA_CH3_SADR)

/** \brief 206C, DMARAM Channel 3 Destination Address Register */
#define DMA_CH3_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001206Cu)
/** Alias (User Manual Name) for DMA_CH3_DADR.
* To use register names with standard convension, please use DMA_CH3_DADR.
*/
#define DMA_DADR003 (DMA_CH3_DADR)

/** \brief 2070, DMARAM Channel 3 Address and Interrupt Control Register */
#define DMA_CH3_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012070u)
/** Alias (User Manual Name) for DMA_CH3_ADICR.
* To use register names with standard convension, please use DMA_CH3_ADICR.
*/
#define DMA_ADICR003 (DMA_CH3_ADICR)

/** \brief 2074, DMARAM Channel 3 Configuration Register */
#define DMA_CH3_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012074u)
/** Alias (User Manual Name) for DMA_CH3_CHCFGR.
* To use register names with standard convension, please use DMA_CH3_CHCFGR.
*/
#define DMA_CHCFGR003 (DMA_CH3_CHCFGR)

/** \brief 2078, DMARAM Channel 3 Shadow Address Register */
#define DMA_CH3_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012078u)
/** Alias (User Manual Name) for DMA_CH3_SHADR.
* To use register names with standard convension, please use DMA_CH3_SHADR.
*/
#define DMA_SHADR003 (DMA_CH3_SHADR)

/** \brief 207C, DMARAM Channel 3 Control and Status Register */
#define DMA_CH3_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001207Cu)
/** Alias (User Manual Name) for DMA_CH3_CHCSR.
* To use register names with standard convension, please use DMA_CH3_CHCSR.
*/
#define DMA_CHCSR003 (DMA_CH3_CHCSR)

/** \brief 2080, DMARAM Channel 4 Read Data CRC Register */
#define DMA_CH4_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012080u)
/** Alias (User Manual Name) for DMA_CH4_RDCRCR.
* To use register names with standard convension, please use DMA_CH4_RDCRCR.
*/
#define DMA_RDCRCR004 (DMA_CH4_RDCRCR)

/** \brief 2084, DMARAM Channel 4 Source and Destination Address CRC Register */
#define DMA_CH4_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012084u)
/** Alias (User Manual Name) for DMA_CH4_SDCRCR.
* To use register names with standard convension, please use DMA_CH4_SDCRCR.
*/
#define DMA_SDCRCR004 (DMA_CH4_SDCRCR)

/** \brief 2088, DMARAM Channel 4 Source Address Register */
#define DMA_CH4_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012088u)
/** Alias (User Manual Name) for DMA_CH4_SADR.
* To use register names with standard convension, please use DMA_CH4_SADR.
*/
#define DMA_SADR004 (DMA_CH4_SADR)

/** \brief 208C, DMARAM Channel 4 Destination Address Register */
#define DMA_CH4_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001208Cu)
/** Alias (User Manual Name) for DMA_CH4_DADR.
* To use register names with standard convension, please use DMA_CH4_DADR.
*/
#define DMA_DADR004 (DMA_CH4_DADR)

/** \brief 2090, DMARAM Channel 4 Address and Interrupt Control Register */
#define DMA_CH4_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012090u)
/** Alias (User Manual Name) for DMA_CH4_ADICR.
* To use register names with standard convension, please use DMA_CH4_ADICR.
*/
#define DMA_ADICR004 (DMA_CH4_ADICR)

/** \brief 2094, DMARAM Channel 4 Configuration Register */
#define DMA_CH4_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012094u)
/** Alias (User Manual Name) for DMA_CH4_CHCFGR.
* To use register names with standard convension, please use DMA_CH4_CHCFGR.
*/
#define DMA_CHCFGR004 (DMA_CH4_CHCFGR)

/** \brief 2098, DMARAM Channel 4 Shadow Address Register */
#define DMA_CH4_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012098u)
/** Alias (User Manual Name) for DMA_CH4_SHADR.
* To use register names with standard convension, please use DMA_CH4_SHADR.
*/
#define DMA_SHADR004 (DMA_CH4_SHADR)

/** \brief 209C, DMARAM Channel 4 Control and Status Register */
#define DMA_CH4_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001209Cu)
/** Alias (User Manual Name) for DMA_CH4_CHCSR.
* To use register names with standard convension, please use DMA_CH4_CHCSR.
*/
#define DMA_CHCSR004 (DMA_CH4_CHCSR)

/** \brief 20A0, DMARAM Channel 5 Read Data CRC Register */
#define DMA_CH5_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00120A0u)
/** Alias (User Manual Name) for DMA_CH5_RDCRCR.
* To use register names with standard convension, please use DMA_CH5_RDCRCR.
*/
#define DMA_RDCRCR005 (DMA_CH5_RDCRCR)

/** \brief 20A4, DMARAM Channel 5 Source and Destination Address CRC Register */
#define DMA_CH5_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00120A4u)
/** Alias (User Manual Name) for DMA_CH5_SDCRCR.
* To use register names with standard convension, please use DMA_CH5_SDCRCR.
*/
#define DMA_SDCRCR005 (DMA_CH5_SDCRCR)

/** \brief 20A8, DMARAM Channel 5 Source Address Register */
#define DMA_CH5_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00120A8u)
/** Alias (User Manual Name) for DMA_CH5_SADR.
* To use register names with standard convension, please use DMA_CH5_SADR.
*/
#define DMA_SADR005 (DMA_CH5_SADR)

/** \brief 20AC, DMARAM Channel 5 Destination Address Register */
#define DMA_CH5_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00120ACu)
/** Alias (User Manual Name) for DMA_CH5_DADR.
* To use register names with standard convension, please use DMA_CH5_DADR.
*/
#define DMA_DADR005 (DMA_CH5_DADR)

/** \brief 20B0, DMARAM Channel 5 Address and Interrupt Control Register */
#define DMA_CH5_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00120B0u)
/** Alias (User Manual Name) for DMA_CH5_ADICR.
* To use register names with standard convension, please use DMA_CH5_ADICR.
*/
#define DMA_ADICR005 (DMA_CH5_ADICR)

/** \brief 20B4, DMARAM Channel 5 Configuration Register */
#define DMA_CH5_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00120B4u)
/** Alias (User Manual Name) for DMA_CH5_CHCFGR.
* To use register names with standard convension, please use DMA_CH5_CHCFGR.
*/
#define DMA_CHCFGR005 (DMA_CH5_CHCFGR)

/** \brief 20B8, DMARAM Channel 5 Shadow Address Register */
#define DMA_CH5_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00120B8u)
/** Alias (User Manual Name) for DMA_CH5_SHADR.
* To use register names with standard convension, please use DMA_CH5_SHADR.
*/
#define DMA_SHADR005 (DMA_CH5_SHADR)

/** \brief 20BC, DMARAM Channel 5 Control and Status Register */
#define DMA_CH5_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00120BCu)
/** Alias (User Manual Name) for DMA_CH5_CHCSR.
* To use register names with standard convension, please use DMA_CH5_CHCSR.
*/
#define DMA_CHCSR005 (DMA_CH5_CHCSR)

/** \brief 20C0, DMARAM Channel 6 Read Data CRC Register */
#define DMA_CH6_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00120C0u)
/** Alias (User Manual Name) for DMA_CH6_RDCRCR.
* To use register names with standard convension, please use DMA_CH6_RDCRCR.
*/
#define DMA_RDCRCR006 (DMA_CH6_RDCRCR)

/** \brief 20C4, DMARAM Channel 6 Source and Destination Address CRC Register */
#define DMA_CH6_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00120C4u)
/** Alias (User Manual Name) for DMA_CH6_SDCRCR.
* To use register names with standard convension, please use DMA_CH6_SDCRCR.
*/
#define DMA_SDCRCR006 (DMA_CH6_SDCRCR)

/** \brief 20C8, DMARAM Channel 6 Source Address Register */
#define DMA_CH6_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00120C8u)
/** Alias (User Manual Name) for DMA_CH6_SADR.
* To use register names with standard convension, please use DMA_CH6_SADR.
*/
#define DMA_SADR006 (DMA_CH6_SADR)

/** \brief 20CC, DMARAM Channel 6 Destination Address Register */
#define DMA_CH6_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00120CCu)
/** Alias (User Manual Name) for DMA_CH6_DADR.
* To use register names with standard convension, please use DMA_CH6_DADR.
*/
#define DMA_DADR006 (DMA_CH6_DADR)

/** \brief 20D0, DMARAM Channel 6 Address and Interrupt Control Register */
#define DMA_CH6_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00120D0u)
/** Alias (User Manual Name) for DMA_CH6_ADICR.
* To use register names with standard convension, please use DMA_CH6_ADICR.
*/
#define DMA_ADICR006 (DMA_CH6_ADICR)

/** \brief 20D4, DMARAM Channel 6 Configuration Register */
#define DMA_CH6_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00120D4u)
/** Alias (User Manual Name) for DMA_CH6_CHCFGR.
* To use register names with standard convension, please use DMA_CH6_CHCFGR.
*/
#define DMA_CHCFGR006 (DMA_CH6_CHCFGR)

/** \brief 20D8, DMARAM Channel 6 Shadow Address Register */
#define DMA_CH6_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00120D8u)
/** Alias (User Manual Name) for DMA_CH6_SHADR.
* To use register names with standard convension, please use DMA_CH6_SHADR.
*/
#define DMA_SHADR006 (DMA_CH6_SHADR)

/** \brief 20DC, DMARAM Channel 6 Control and Status Register */
#define DMA_CH6_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00120DCu)
/** Alias (User Manual Name) for DMA_CH6_CHCSR.
* To use register names with standard convension, please use DMA_CH6_CHCSR.
*/
#define DMA_CHCSR006 (DMA_CH6_CHCSR)

/** \brief 20E0, DMARAM Channel 7 Read Data CRC Register */
#define DMA_CH7_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00120E0u)
/** Alias (User Manual Name) for DMA_CH7_RDCRCR.
* To use register names with standard convension, please use DMA_CH7_RDCRCR.
*/
#define DMA_RDCRCR007 (DMA_CH7_RDCRCR)

/** \brief 20E4, DMARAM Channel 7 Source and Destination Address CRC Register */
#define DMA_CH7_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00120E4u)
/** Alias (User Manual Name) for DMA_CH7_SDCRCR.
* To use register names with standard convension, please use DMA_CH7_SDCRCR.
*/
#define DMA_SDCRCR007 (DMA_CH7_SDCRCR)

/** \brief 20E8, DMARAM Channel 7 Source Address Register */
#define DMA_CH7_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00120E8u)
/** Alias (User Manual Name) for DMA_CH7_SADR.
* To use register names with standard convension, please use DMA_CH7_SADR.
*/
#define DMA_SADR007 (DMA_CH7_SADR)

/** \brief 20EC, DMARAM Channel 7 Destination Address Register */
#define DMA_CH7_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00120ECu)
/** Alias (User Manual Name) for DMA_CH7_DADR.
* To use register names with standard convension, please use DMA_CH7_DADR.
*/
#define DMA_DADR007 (DMA_CH7_DADR)

/** \brief 20F0, DMARAM Channel 7 Address and Interrupt Control Register */
#define DMA_CH7_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00120F0u)
/** Alias (User Manual Name) for DMA_CH7_ADICR.
* To use register names with standard convension, please use DMA_CH7_ADICR.
*/
#define DMA_ADICR007 (DMA_CH7_ADICR)

/** \brief 20F4, DMARAM Channel 7 Configuration Register */
#define DMA_CH7_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00120F4u)
/** Alias (User Manual Name) for DMA_CH7_CHCFGR.
* To use register names with standard convension, please use DMA_CH7_CHCFGR.
*/
#define DMA_CHCFGR007 (DMA_CH7_CHCFGR)

/** \brief 20F8, DMARAM Channel 7 Shadow Address Register */
#define DMA_CH7_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00120F8u)
/** Alias (User Manual Name) for DMA_CH7_SHADR.
* To use register names with standard convension, please use DMA_CH7_SHADR.
*/
#define DMA_SHADR007 (DMA_CH7_SHADR)

/** \brief 20FC, DMARAM Channel 7 Control and Status Register */
#define DMA_CH7_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00120FCu)
/** Alias (User Manual Name) for DMA_CH7_CHCSR.
* To use register names with standard convension, please use DMA_CH7_CHCSR.
*/
#define DMA_CHCSR007 (DMA_CH7_CHCSR)

/** \brief 2100, DMARAM Channel 8 Read Data CRC Register */
#define DMA_CH8_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012100u)
/** Alias (User Manual Name) for DMA_CH8_RDCRCR.
* To use register names with standard convension, please use DMA_CH8_RDCRCR.
*/
#define DMA_RDCRCR008 (DMA_CH8_RDCRCR)

/** \brief 2104, DMARAM Channel 8 Source and Destination Address CRC Register */
#define DMA_CH8_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012104u)
/** Alias (User Manual Name) for DMA_CH8_SDCRCR.
* To use register names with standard convension, please use DMA_CH8_SDCRCR.
*/
#define DMA_SDCRCR008 (DMA_CH8_SDCRCR)

/** \brief 2108, DMARAM Channel 8 Source Address Register */
#define DMA_CH8_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012108u)
/** Alias (User Manual Name) for DMA_CH8_SADR.
* To use register names with standard convension, please use DMA_CH8_SADR.
*/
#define DMA_SADR008 (DMA_CH8_SADR)

/** \brief 210C, DMARAM Channel 8 Destination Address Register */
#define DMA_CH8_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001210Cu)
/** Alias (User Manual Name) for DMA_CH8_DADR.
* To use register names with standard convension, please use DMA_CH8_DADR.
*/
#define DMA_DADR008 (DMA_CH8_DADR)

/** \brief 2110, DMARAM Channel 8 Address and Interrupt Control Register */
#define DMA_CH8_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012110u)
/** Alias (User Manual Name) for DMA_CH8_ADICR.
* To use register names with standard convension, please use DMA_CH8_ADICR.
*/
#define DMA_ADICR008 (DMA_CH8_ADICR)

/** \brief 2114, DMARAM Channel 8 Configuration Register */
#define DMA_CH8_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012114u)
/** Alias (User Manual Name) for DMA_CH8_CHCFGR.
* To use register names with standard convension, please use DMA_CH8_CHCFGR.
*/
#define DMA_CHCFGR008 (DMA_CH8_CHCFGR)

/** \brief 2118, DMARAM Channel 8 Shadow Address Register */
#define DMA_CH8_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012118u)
/** Alias (User Manual Name) for DMA_CH8_SHADR.
* To use register names with standard convension, please use DMA_CH8_SHADR.
*/
#define DMA_SHADR008 (DMA_CH8_SHADR)

/** \brief 211C, DMARAM Channel 8 Control and Status Register */
#define DMA_CH8_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001211Cu)
/** Alias (User Manual Name) for DMA_CH8_CHCSR.
* To use register names with standard convension, please use DMA_CH8_CHCSR.
*/
#define DMA_CHCSR008 (DMA_CH8_CHCSR)

/** \brief 2120, DMARAM Channel 9 Read Data CRC Register */
#define DMA_CH9_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012120u)
/** Alias (User Manual Name) for DMA_CH9_RDCRCR.
* To use register names with standard convension, please use DMA_CH9_RDCRCR.
*/
#define DMA_RDCRCR009 (DMA_CH9_RDCRCR)

/** \brief 2124, DMARAM Channel 9 Source and Destination Address CRC Register */
#define DMA_CH9_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012124u)
/** Alias (User Manual Name) for DMA_CH9_SDCRCR.
* To use register names with standard convension, please use DMA_CH9_SDCRCR.
*/
#define DMA_SDCRCR009 (DMA_CH9_SDCRCR)

/** \brief 2128, DMARAM Channel 9 Source Address Register */
#define DMA_CH9_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012128u)
/** Alias (User Manual Name) for DMA_CH9_SADR.
* To use register names with standard convension, please use DMA_CH9_SADR.
*/
#define DMA_SADR009 (DMA_CH9_SADR)

/** \brief 212C, DMARAM Channel 9 Destination Address Register */
#define DMA_CH9_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001212Cu)
/** Alias (User Manual Name) for DMA_CH9_DADR.
* To use register names with standard convension, please use DMA_CH9_DADR.
*/
#define DMA_DADR009 (DMA_CH9_DADR)

/** \brief 2130, DMARAM Channel 9 Address and Interrupt Control Register */
#define DMA_CH9_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012130u)
/** Alias (User Manual Name) for DMA_CH9_ADICR.
* To use register names with standard convension, please use DMA_CH9_ADICR.
*/
#define DMA_ADICR009 (DMA_CH9_ADICR)

/** \brief 2134, DMARAM Channel 9 Configuration Register */
#define DMA_CH9_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012134u)
/** Alias (User Manual Name) for DMA_CH9_CHCFGR.
* To use register names with standard convension, please use DMA_CH9_CHCFGR.
*/
#define DMA_CHCFGR009 (DMA_CH9_CHCFGR)

/** \brief 2138, DMARAM Channel 9 Shadow Address Register */
#define DMA_CH9_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012138u)
/** Alias (User Manual Name) for DMA_CH9_SHADR.
* To use register names with standard convension, please use DMA_CH9_SHADR.
*/
#define DMA_SHADR009 (DMA_CH9_SHADR)

/** \brief 213C, DMARAM Channel 9 Control and Status Register */
#define DMA_CH9_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001213Cu)
/** Alias (User Manual Name) for DMA_CH9_CHCSR.
* To use register names with standard convension, please use DMA_CH9_CHCSR.
*/
#define DMA_CHCSR009 (DMA_CH9_CHCSR)

/** \brief 2140, DMARAM Channel 10 Read Data CRC Register */
#define DMA_CH10_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012140u)
/** Alias (User Manual Name) for DMA_CH10_RDCRCR.
* To use register names with standard convension, please use DMA_CH10_RDCRCR.
*/
#define DMA_RDCRCR010 (DMA_CH10_RDCRCR)

/** \brief 2144, DMARAM Channel 10 Source and Destination Address CRC Register */
#define DMA_CH10_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012144u)
/** Alias (User Manual Name) for DMA_CH10_SDCRCR.
* To use register names with standard convension, please use DMA_CH10_SDCRCR.
*/
#define DMA_SDCRCR010 (DMA_CH10_SDCRCR)

/** \brief 2148, DMARAM Channel 10 Source Address Register */
#define DMA_CH10_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012148u)
/** Alias (User Manual Name) for DMA_CH10_SADR.
* To use register names with standard convension, please use DMA_CH10_SADR.
*/
#define DMA_SADR010 (DMA_CH10_SADR)

/** \brief 214C, DMARAM Channel 10 Destination Address Register */
#define DMA_CH10_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001214Cu)
/** Alias (User Manual Name) for DMA_CH10_DADR.
* To use register names with standard convension, please use DMA_CH10_DADR.
*/
#define DMA_DADR010 (DMA_CH10_DADR)

/** \brief 2150, DMARAM Channel 10 Address and Interrupt Control Register */
#define DMA_CH10_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012150u)
/** Alias (User Manual Name) for DMA_CH10_ADICR.
* To use register names with standard convension, please use DMA_CH10_ADICR.
*/
#define DMA_ADICR010 (DMA_CH10_ADICR)

/** \brief 2154, DMARAM Channel 10 Configuration Register */
#define DMA_CH10_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012154u)
/** Alias (User Manual Name) for DMA_CH10_CHCFGR.
* To use register names with standard convension, please use DMA_CH10_CHCFGR.
*/
#define DMA_CHCFGR010 (DMA_CH10_CHCFGR)

/** \brief 2158, DMARAM Channel 10 Shadow Address Register */
#define DMA_CH10_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012158u)
/** Alias (User Manual Name) for DMA_CH10_SHADR.
* To use register names with standard convension, please use DMA_CH10_SHADR.
*/
#define DMA_SHADR010 (DMA_CH10_SHADR)

/** \brief 215C, DMARAM Channel 10 Control and Status Register */
#define DMA_CH10_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001215Cu)
/** Alias (User Manual Name) for DMA_CH10_CHCSR.
* To use register names with standard convension, please use DMA_CH10_CHCSR.
*/
#define DMA_CHCSR010 (DMA_CH10_CHCSR)

/** \brief 2160, DMARAM Channel 11 Read Data CRC Register */
#define DMA_CH11_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012160u)
/** Alias (User Manual Name) for DMA_CH11_RDCRCR.
* To use register names with standard convension, please use DMA_CH11_RDCRCR.
*/
#define DMA_RDCRCR011 (DMA_CH11_RDCRCR)

/** \brief 2164, DMARAM Channel 11 Source and Destination Address CRC Register */
#define DMA_CH11_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012164u)
/** Alias (User Manual Name) for DMA_CH11_SDCRCR.
* To use register names with standard convension, please use DMA_CH11_SDCRCR.
*/
#define DMA_SDCRCR011 (DMA_CH11_SDCRCR)

/** \brief 2168, DMARAM Channel 11 Source Address Register */
#define DMA_CH11_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012168u)
/** Alias (User Manual Name) for DMA_CH11_SADR.
* To use register names with standard convension, please use DMA_CH11_SADR.
*/
#define DMA_SADR011 (DMA_CH11_SADR)

/** \brief 216C, DMARAM Channel 11 Destination Address Register */
#define DMA_CH11_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001216Cu)
/** Alias (User Manual Name) for DMA_CH11_DADR.
* To use register names with standard convension, please use DMA_CH11_DADR.
*/
#define DMA_DADR011 (DMA_CH11_DADR)

/** \brief 2170, DMARAM Channel 11 Address and Interrupt Control Register */
#define DMA_CH11_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012170u)
/** Alias (User Manual Name) for DMA_CH11_ADICR.
* To use register names with standard convension, please use DMA_CH11_ADICR.
*/
#define DMA_ADICR011 (DMA_CH11_ADICR)

/** \brief 2174, DMARAM Channel 11 Configuration Register */
#define DMA_CH11_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012174u)
/** Alias (User Manual Name) for DMA_CH11_CHCFGR.
* To use register names with standard convension, please use DMA_CH11_CHCFGR.
*/
#define DMA_CHCFGR011 (DMA_CH11_CHCFGR)

/** \brief 2178, DMARAM Channel 11 Shadow Address Register */
#define DMA_CH11_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012178u)
/** Alias (User Manual Name) for DMA_CH11_SHADR.
* To use register names with standard convension, please use DMA_CH11_SHADR.
*/
#define DMA_SHADR011 (DMA_CH11_SHADR)

/** \brief 217C, DMARAM Channel 11 Control and Status Register */
#define DMA_CH11_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001217Cu)
/** Alias (User Manual Name) for DMA_CH11_CHCSR.
* To use register names with standard convension, please use DMA_CH11_CHCSR.
*/
#define DMA_CHCSR011 (DMA_CH11_CHCSR)

/** \brief 2180, DMARAM Channel 12 Read Data CRC Register */
#define DMA_CH12_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012180u)
/** Alias (User Manual Name) for DMA_CH12_RDCRCR.
* To use register names with standard convension, please use DMA_CH12_RDCRCR.
*/
#define DMA_RDCRCR012 (DMA_CH12_RDCRCR)

/** \brief 2184, DMARAM Channel 12 Source and Destination Address CRC Register */
#define DMA_CH12_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012184u)
/** Alias (User Manual Name) for DMA_CH12_SDCRCR.
* To use register names with standard convension, please use DMA_CH12_SDCRCR.
*/
#define DMA_SDCRCR012 (DMA_CH12_SDCRCR)

/** \brief 2188, DMARAM Channel 12 Source Address Register */
#define DMA_CH12_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012188u)
/** Alias (User Manual Name) for DMA_CH12_SADR.
* To use register names with standard convension, please use DMA_CH12_SADR.
*/
#define DMA_SADR012 (DMA_CH12_SADR)

/** \brief 218C, DMARAM Channel 12 Destination Address Register */
#define DMA_CH12_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001218Cu)
/** Alias (User Manual Name) for DMA_CH12_DADR.
* To use register names with standard convension, please use DMA_CH12_DADR.
*/
#define DMA_DADR012 (DMA_CH12_DADR)

/** \brief 2190, DMARAM Channel 12 Address and Interrupt Control Register */
#define DMA_CH12_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012190u)
/** Alias (User Manual Name) for DMA_CH12_ADICR.
* To use register names with standard convension, please use DMA_CH12_ADICR.
*/
#define DMA_ADICR012 (DMA_CH12_ADICR)

/** \brief 2194, DMARAM Channel 12 Configuration Register */
#define DMA_CH12_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012194u)
/** Alias (User Manual Name) for DMA_CH12_CHCFGR.
* To use register names with standard convension, please use DMA_CH12_CHCFGR.
*/
#define DMA_CHCFGR012 (DMA_CH12_CHCFGR)

/** \brief 2198, DMARAM Channel 12 Shadow Address Register */
#define DMA_CH12_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012198u)
/** Alias (User Manual Name) for DMA_CH12_SHADR.
* To use register names with standard convension, please use DMA_CH12_SHADR.
*/
#define DMA_SHADR012 (DMA_CH12_SHADR)

/** \brief 219C, DMARAM Channel 12 Control and Status Register */
#define DMA_CH12_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001219Cu)
/** Alias (User Manual Name) for DMA_CH12_CHCSR.
* To use register names with standard convension, please use DMA_CH12_CHCSR.
*/
#define DMA_CHCSR012 (DMA_CH12_CHCSR)

/** \brief 21A0, DMARAM Channel 13 Read Data CRC Register */
#define DMA_CH13_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00121A0u)
/** Alias (User Manual Name) for DMA_CH13_RDCRCR.
* To use register names with standard convension, please use DMA_CH13_RDCRCR.
*/
#define DMA_RDCRCR013 (DMA_CH13_RDCRCR)

/** \brief 21A4, DMARAM Channel 13 Source and Destination Address CRC Register */
#define DMA_CH13_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00121A4u)
/** Alias (User Manual Name) for DMA_CH13_SDCRCR.
* To use register names with standard convension, please use DMA_CH13_SDCRCR.
*/
#define DMA_SDCRCR013 (DMA_CH13_SDCRCR)

/** \brief 21A8, DMARAM Channel 13 Source Address Register */
#define DMA_CH13_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00121A8u)
/** Alias (User Manual Name) for DMA_CH13_SADR.
* To use register names with standard convension, please use DMA_CH13_SADR.
*/
#define DMA_SADR013 (DMA_CH13_SADR)

/** \brief 21AC, DMARAM Channel 13 Destination Address Register */
#define DMA_CH13_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00121ACu)
/** Alias (User Manual Name) for DMA_CH13_DADR.
* To use register names with standard convension, please use DMA_CH13_DADR.
*/
#define DMA_DADR013 (DMA_CH13_DADR)

/** \brief 21B0, DMARAM Channel 13 Address and Interrupt Control Register */
#define DMA_CH13_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00121B0u)
/** Alias (User Manual Name) for DMA_CH13_ADICR.
* To use register names with standard convension, please use DMA_CH13_ADICR.
*/
#define DMA_ADICR013 (DMA_CH13_ADICR)

/** \brief 21B4, DMARAM Channel 13 Configuration Register */
#define DMA_CH13_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00121B4u)
/** Alias (User Manual Name) for DMA_CH13_CHCFGR.
* To use register names with standard convension, please use DMA_CH13_CHCFGR.
*/
#define DMA_CHCFGR013 (DMA_CH13_CHCFGR)

/** \brief 21B8, DMARAM Channel 13 Shadow Address Register */
#define DMA_CH13_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00121B8u)
/** Alias (User Manual Name) for DMA_CH13_SHADR.
* To use register names with standard convension, please use DMA_CH13_SHADR.
*/
#define DMA_SHADR013 (DMA_CH13_SHADR)

/** \brief 21BC, DMARAM Channel 13 Control and Status Register */
#define DMA_CH13_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00121BCu)
/** Alias (User Manual Name) for DMA_CH13_CHCSR.
* To use register names with standard convension, please use DMA_CH13_CHCSR.
*/
#define DMA_CHCSR013 (DMA_CH13_CHCSR)

/** \brief 21C0, DMARAM Channel 14 Read Data CRC Register */
#define DMA_CH14_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00121C0u)
/** Alias (User Manual Name) for DMA_CH14_RDCRCR.
* To use register names with standard convension, please use DMA_CH14_RDCRCR.
*/
#define DMA_RDCRCR014 (DMA_CH14_RDCRCR)

/** \brief 21C4, DMARAM Channel 14 Source and Destination Address CRC Register */
#define DMA_CH14_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00121C4u)
/** Alias (User Manual Name) for DMA_CH14_SDCRCR.
* To use register names with standard convension, please use DMA_CH14_SDCRCR.
*/
#define DMA_SDCRCR014 (DMA_CH14_SDCRCR)

/** \brief 21C8, DMARAM Channel 14 Source Address Register */
#define DMA_CH14_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00121C8u)
/** Alias (User Manual Name) for DMA_CH14_SADR.
* To use register names with standard convension, please use DMA_CH14_SADR.
*/
#define DMA_SADR014 (DMA_CH14_SADR)

/** \brief 21CC, DMARAM Channel 14 Destination Address Register */
#define DMA_CH14_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00121CCu)
/** Alias (User Manual Name) for DMA_CH14_DADR.
* To use register names with standard convension, please use DMA_CH14_DADR.
*/
#define DMA_DADR014 (DMA_CH14_DADR)

/** \brief 21D0, DMARAM Channel 14 Address and Interrupt Control Register */
#define DMA_CH14_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00121D0u)
/** Alias (User Manual Name) for DMA_CH14_ADICR.
* To use register names with standard convension, please use DMA_CH14_ADICR.
*/
#define DMA_ADICR014 (DMA_CH14_ADICR)

/** \brief 21D4, DMARAM Channel 14 Configuration Register */
#define DMA_CH14_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00121D4u)
/** Alias (User Manual Name) for DMA_CH14_CHCFGR.
* To use register names with standard convension, please use DMA_CH14_CHCFGR.
*/
#define DMA_CHCFGR014 (DMA_CH14_CHCFGR)

/** \brief 21D8, DMARAM Channel 14 Shadow Address Register */
#define DMA_CH14_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00121D8u)
/** Alias (User Manual Name) for DMA_CH14_SHADR.
* To use register names with standard convension, please use DMA_CH14_SHADR.
*/
#define DMA_SHADR014 (DMA_CH14_SHADR)

/** \brief 21DC, DMARAM Channel 14 Control and Status Register */
#define DMA_CH14_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00121DCu)
/** Alias (User Manual Name) for DMA_CH14_CHCSR.
* To use register names with standard convension, please use DMA_CH14_CHCSR.
*/
#define DMA_CHCSR014 (DMA_CH14_CHCSR)

/** \brief 21E0, DMARAM Channel 15 Read Data CRC Register */
#define DMA_CH15_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00121E0u)
/** Alias (User Manual Name) for DMA_CH15_RDCRCR.
* To use register names with standard convension, please use DMA_CH15_RDCRCR.
*/
#define DMA_RDCRCR015 (DMA_CH15_RDCRCR)

/** \brief 21E4, DMARAM Channel 15 Source and Destination Address CRC Register */
#define DMA_CH15_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00121E4u)
/** Alias (User Manual Name) for DMA_CH15_SDCRCR.
* To use register names with standard convension, please use DMA_CH15_SDCRCR.
*/
#define DMA_SDCRCR015 (DMA_CH15_SDCRCR)

/** \brief 21E8, DMARAM Channel 15 Source Address Register */
#define DMA_CH15_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00121E8u)
/** Alias (User Manual Name) for DMA_CH15_SADR.
* To use register names with standard convension, please use DMA_CH15_SADR.
*/
#define DMA_SADR015 (DMA_CH15_SADR)

/** \brief 21EC, DMARAM Channel 15 Destination Address Register */
#define DMA_CH15_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00121ECu)
/** Alias (User Manual Name) for DMA_CH15_DADR.
* To use register names with standard convension, please use DMA_CH15_DADR.
*/
#define DMA_DADR015 (DMA_CH15_DADR)

/** \brief 21F0, DMARAM Channel 15 Address and Interrupt Control Register */
#define DMA_CH15_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00121F0u)
/** Alias (User Manual Name) for DMA_CH15_ADICR.
* To use register names with standard convension, please use DMA_CH15_ADICR.
*/
#define DMA_ADICR015 (DMA_CH15_ADICR)

/** \brief 21F4, DMARAM Channel 15 Configuration Register */
#define DMA_CH15_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00121F4u)
/** Alias (User Manual Name) for DMA_CH15_CHCFGR.
* To use register names with standard convension, please use DMA_CH15_CHCFGR.
*/
#define DMA_CHCFGR015 (DMA_CH15_CHCFGR)

/** \brief 21F8, DMARAM Channel 15 Shadow Address Register */
#define DMA_CH15_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00121F8u)
/** Alias (User Manual Name) for DMA_CH15_SHADR.
* To use register names with standard convension, please use DMA_CH15_SHADR.
*/
#define DMA_SHADR015 (DMA_CH15_SHADR)

/** \brief 21FC, DMARAM Channel 15 Control and Status Register */
#define DMA_CH15_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00121FCu)
/** Alias (User Manual Name) for DMA_CH15_CHCSR.
* To use register names with standard convension, please use DMA_CH15_CHCSR.
*/
#define DMA_CHCSR015 (DMA_CH15_CHCSR)

/** \brief 2200, DMARAM Channel 16 Read Data CRC Register */
#define DMA_CH16_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012200u)
/** Alias (User Manual Name) for DMA_CH16_RDCRCR.
* To use register names with standard convension, please use DMA_CH16_RDCRCR.
*/
#define DMA_RDCRCR016 (DMA_CH16_RDCRCR)

/** \brief 2204, DMARAM Channel 16 Source and Destination Address CRC Register */
#define DMA_CH16_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012204u)
/** Alias (User Manual Name) for DMA_CH16_SDCRCR.
* To use register names with standard convension, please use DMA_CH16_SDCRCR.
*/
#define DMA_SDCRCR016 (DMA_CH16_SDCRCR)

/** \brief 2208, DMARAM Channel 16 Source Address Register */
#define DMA_CH16_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012208u)
/** Alias (User Manual Name) for DMA_CH16_SADR.
* To use register names with standard convension, please use DMA_CH16_SADR.
*/
#define DMA_SADR016 (DMA_CH16_SADR)

/** \brief 220C, DMARAM Channel 16 Destination Address Register */
#define DMA_CH16_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001220Cu)
/** Alias (User Manual Name) for DMA_CH16_DADR.
* To use register names with standard convension, please use DMA_CH16_DADR.
*/
#define DMA_DADR016 (DMA_CH16_DADR)

/** \brief 2210, DMARAM Channel 16 Address and Interrupt Control Register */
#define DMA_CH16_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012210u)
/** Alias (User Manual Name) for DMA_CH16_ADICR.
* To use register names with standard convension, please use DMA_CH16_ADICR.
*/
#define DMA_ADICR016 (DMA_CH16_ADICR)

/** \brief 2214, DMARAM Channel 16 Configuration Register */
#define DMA_CH16_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012214u)
/** Alias (User Manual Name) for DMA_CH16_CHCFGR.
* To use register names with standard convension, please use DMA_CH16_CHCFGR.
*/
#define DMA_CHCFGR016 (DMA_CH16_CHCFGR)

/** \brief 2218, DMARAM Channel 16 Shadow Address Register */
#define DMA_CH16_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012218u)
/** Alias (User Manual Name) for DMA_CH16_SHADR.
* To use register names with standard convension, please use DMA_CH16_SHADR.
*/
#define DMA_SHADR016 (DMA_CH16_SHADR)

/** \brief 221C, DMARAM Channel 16 Control and Status Register */
#define DMA_CH16_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001221Cu)
/** Alias (User Manual Name) for DMA_CH16_CHCSR.
* To use register names with standard convension, please use DMA_CH16_CHCSR.
*/
#define DMA_CHCSR016 (DMA_CH16_CHCSR)

/** \brief 2220, DMARAM Channel 17 Read Data CRC Register */
#define DMA_CH17_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012220u)
/** Alias (User Manual Name) for DMA_CH17_RDCRCR.
* To use register names with standard convension, please use DMA_CH17_RDCRCR.
*/
#define DMA_RDCRCR017 (DMA_CH17_RDCRCR)

/** \brief 2224, DMARAM Channel 17 Source and Destination Address CRC Register */
#define DMA_CH17_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012224u)
/** Alias (User Manual Name) for DMA_CH17_SDCRCR.
* To use register names with standard convension, please use DMA_CH17_SDCRCR.
*/
#define DMA_SDCRCR017 (DMA_CH17_SDCRCR)

/** \brief 2228, DMARAM Channel 17 Source Address Register */
#define DMA_CH17_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012228u)
/** Alias (User Manual Name) for DMA_CH17_SADR.
* To use register names with standard convension, please use DMA_CH17_SADR.
*/
#define DMA_SADR017 (DMA_CH17_SADR)

/** \brief 222C, DMARAM Channel 17 Destination Address Register */
#define DMA_CH17_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001222Cu)
/** Alias (User Manual Name) for DMA_CH17_DADR.
* To use register names with standard convension, please use DMA_CH17_DADR.
*/
#define DMA_DADR017 (DMA_CH17_DADR)

/** \brief 2230, DMARAM Channel 17 Address and Interrupt Control Register */
#define DMA_CH17_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012230u)
/** Alias (User Manual Name) for DMA_CH17_ADICR.
* To use register names with standard convension, please use DMA_CH17_ADICR.
*/
#define DMA_ADICR017 (DMA_CH17_ADICR)

/** \brief 2234, DMARAM Channel 17 Configuration Register */
#define DMA_CH17_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012234u)
/** Alias (User Manual Name) for DMA_CH17_CHCFGR.
* To use register names with standard convension, please use DMA_CH17_CHCFGR.
*/
#define DMA_CHCFGR017 (DMA_CH17_CHCFGR)

/** \brief 2238, DMARAM Channel 17 Shadow Address Register */
#define DMA_CH17_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012238u)
/** Alias (User Manual Name) for DMA_CH17_SHADR.
* To use register names with standard convension, please use DMA_CH17_SHADR.
*/
#define DMA_SHADR017 (DMA_CH17_SHADR)

/** \brief 223C, DMARAM Channel 17 Control and Status Register */
#define DMA_CH17_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001223Cu)
/** Alias (User Manual Name) for DMA_CH17_CHCSR.
* To use register names with standard convension, please use DMA_CH17_CHCSR.
*/
#define DMA_CHCSR017 (DMA_CH17_CHCSR)

/** \brief 2240, DMARAM Channel 18 Read Data CRC Register */
#define DMA_CH18_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012240u)
/** Alias (User Manual Name) for DMA_CH18_RDCRCR.
* To use register names with standard convension, please use DMA_CH18_RDCRCR.
*/
#define DMA_RDCRCR018 (DMA_CH18_RDCRCR)

/** \brief 2244, DMARAM Channel 18 Source and Destination Address CRC Register */
#define DMA_CH18_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012244u)
/** Alias (User Manual Name) for DMA_CH18_SDCRCR.
* To use register names with standard convension, please use DMA_CH18_SDCRCR.
*/
#define DMA_SDCRCR018 (DMA_CH18_SDCRCR)

/** \brief 2248, DMARAM Channel 18 Source Address Register */
#define DMA_CH18_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012248u)
/** Alias (User Manual Name) for DMA_CH18_SADR.
* To use register names with standard convension, please use DMA_CH18_SADR.
*/
#define DMA_SADR018 (DMA_CH18_SADR)

/** \brief 224C, DMARAM Channel 18 Destination Address Register */
#define DMA_CH18_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001224Cu)
/** Alias (User Manual Name) for DMA_CH18_DADR.
* To use register names with standard convension, please use DMA_CH18_DADR.
*/
#define DMA_DADR018 (DMA_CH18_DADR)

/** \brief 2250, DMARAM Channel 18 Address and Interrupt Control Register */
#define DMA_CH18_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012250u)
/** Alias (User Manual Name) for DMA_CH18_ADICR.
* To use register names with standard convension, please use DMA_CH18_ADICR.
*/
#define DMA_ADICR018 (DMA_CH18_ADICR)

/** \brief 2254, DMARAM Channel 18 Configuration Register */
#define DMA_CH18_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012254u)
/** Alias (User Manual Name) for DMA_CH18_CHCFGR.
* To use register names with standard convension, please use DMA_CH18_CHCFGR.
*/
#define DMA_CHCFGR018 (DMA_CH18_CHCFGR)

/** \brief 2258, DMARAM Channel 18 Shadow Address Register */
#define DMA_CH18_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012258u)
/** Alias (User Manual Name) for DMA_CH18_SHADR.
* To use register names with standard convension, please use DMA_CH18_SHADR.
*/
#define DMA_SHADR018 (DMA_CH18_SHADR)

/** \brief 225C, DMARAM Channel 18 Control and Status Register */
#define DMA_CH18_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001225Cu)
/** Alias (User Manual Name) for DMA_CH18_CHCSR.
* To use register names with standard convension, please use DMA_CH18_CHCSR.
*/
#define DMA_CHCSR018 (DMA_CH18_CHCSR)

/** \brief 2260, DMARAM Channel 19 Read Data CRC Register */
#define DMA_CH19_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012260u)
/** Alias (User Manual Name) for DMA_CH19_RDCRCR.
* To use register names with standard convension, please use DMA_CH19_RDCRCR.
*/
#define DMA_RDCRCR019 (DMA_CH19_RDCRCR)

/** \brief 2264, DMARAM Channel 19 Source and Destination Address CRC Register */
#define DMA_CH19_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012264u)
/** Alias (User Manual Name) for DMA_CH19_SDCRCR.
* To use register names with standard convension, please use DMA_CH19_SDCRCR.
*/
#define DMA_SDCRCR019 (DMA_CH19_SDCRCR)

/** \brief 2268, DMARAM Channel 19 Source Address Register */
#define DMA_CH19_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012268u)
/** Alias (User Manual Name) for DMA_CH19_SADR.
* To use register names with standard convension, please use DMA_CH19_SADR.
*/
#define DMA_SADR019 (DMA_CH19_SADR)

/** \brief 226C, DMARAM Channel 19 Destination Address Register */
#define DMA_CH19_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001226Cu)
/** Alias (User Manual Name) for DMA_CH19_DADR.
* To use register names with standard convension, please use DMA_CH19_DADR.
*/
#define DMA_DADR019 (DMA_CH19_DADR)

/** \brief 2270, DMARAM Channel 19 Address and Interrupt Control Register */
#define DMA_CH19_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012270u)
/** Alias (User Manual Name) for DMA_CH19_ADICR.
* To use register names with standard convension, please use DMA_CH19_ADICR.
*/
#define DMA_ADICR019 (DMA_CH19_ADICR)

/** \brief 2274, DMARAM Channel 19 Configuration Register */
#define DMA_CH19_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012274u)
/** Alias (User Manual Name) for DMA_CH19_CHCFGR.
* To use register names with standard convension, please use DMA_CH19_CHCFGR.
*/
#define DMA_CHCFGR019 (DMA_CH19_CHCFGR)

/** \brief 2278, DMARAM Channel 19 Shadow Address Register */
#define DMA_CH19_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012278u)
/** Alias (User Manual Name) for DMA_CH19_SHADR.
* To use register names with standard convension, please use DMA_CH19_SHADR.
*/
#define DMA_SHADR019 (DMA_CH19_SHADR)

/** \brief 227C, DMARAM Channel 19 Control and Status Register */
#define DMA_CH19_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001227Cu)
/** Alias (User Manual Name) for DMA_CH19_CHCSR.
* To use register names with standard convension, please use DMA_CH19_CHCSR.
*/
#define DMA_CHCSR019 (DMA_CH19_CHCSR)

/** \brief 2280, DMARAM Channel 20 Read Data CRC Register */
#define DMA_CH20_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012280u)
/** Alias (User Manual Name) for DMA_CH20_RDCRCR.
* To use register names with standard convension, please use DMA_CH20_RDCRCR.
*/
#define DMA_RDCRCR020 (DMA_CH20_RDCRCR)

/** \brief 2284, DMARAM Channel 20 Source and Destination Address CRC Register */
#define DMA_CH20_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012284u)
/** Alias (User Manual Name) for DMA_CH20_SDCRCR.
* To use register names with standard convension, please use DMA_CH20_SDCRCR.
*/
#define DMA_SDCRCR020 (DMA_CH20_SDCRCR)

/** \brief 2288, DMARAM Channel 20 Source Address Register */
#define DMA_CH20_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012288u)
/** Alias (User Manual Name) for DMA_CH20_SADR.
* To use register names with standard convension, please use DMA_CH20_SADR.
*/
#define DMA_SADR020 (DMA_CH20_SADR)

/** \brief 228C, DMARAM Channel 20 Destination Address Register */
#define DMA_CH20_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001228Cu)
/** Alias (User Manual Name) for DMA_CH20_DADR.
* To use register names with standard convension, please use DMA_CH20_DADR.
*/
#define DMA_DADR020 (DMA_CH20_DADR)

/** \brief 2290, DMARAM Channel 20 Address and Interrupt Control Register */
#define DMA_CH20_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012290u)
/** Alias (User Manual Name) for DMA_CH20_ADICR.
* To use register names with standard convension, please use DMA_CH20_ADICR.
*/
#define DMA_ADICR020 (DMA_CH20_ADICR)

/** \brief 2294, DMARAM Channel 20 Configuration Register */
#define DMA_CH20_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012294u)
/** Alias (User Manual Name) for DMA_CH20_CHCFGR.
* To use register names with standard convension, please use DMA_CH20_CHCFGR.
*/
#define DMA_CHCFGR020 (DMA_CH20_CHCFGR)

/** \brief 2298, DMARAM Channel 20 Shadow Address Register */
#define DMA_CH20_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012298u)
/** Alias (User Manual Name) for DMA_CH20_SHADR.
* To use register names with standard convension, please use DMA_CH20_SHADR.
*/
#define DMA_SHADR020 (DMA_CH20_SHADR)

/** \brief 229C, DMARAM Channel 20 Control and Status Register */
#define DMA_CH20_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001229Cu)
/** Alias (User Manual Name) for DMA_CH20_CHCSR.
* To use register names with standard convension, please use DMA_CH20_CHCSR.
*/
#define DMA_CHCSR020 (DMA_CH20_CHCSR)

/** \brief 22A0, DMARAM Channel 21 Read Data CRC Register */
#define DMA_CH21_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00122A0u)
/** Alias (User Manual Name) for DMA_CH21_RDCRCR.
* To use register names with standard convension, please use DMA_CH21_RDCRCR.
*/
#define DMA_RDCRCR021 (DMA_CH21_RDCRCR)

/** \brief 22A4, DMARAM Channel 21 Source and Destination Address CRC Register */
#define DMA_CH21_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00122A4u)
/** Alias (User Manual Name) for DMA_CH21_SDCRCR.
* To use register names with standard convension, please use DMA_CH21_SDCRCR.
*/
#define DMA_SDCRCR021 (DMA_CH21_SDCRCR)

/** \brief 22A8, DMARAM Channel 21 Source Address Register */
#define DMA_CH21_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00122A8u)
/** Alias (User Manual Name) for DMA_CH21_SADR.
* To use register names with standard convension, please use DMA_CH21_SADR.
*/
#define DMA_SADR021 (DMA_CH21_SADR)

/** \brief 22AC, DMARAM Channel 21 Destination Address Register */
#define DMA_CH21_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00122ACu)
/** Alias (User Manual Name) for DMA_CH21_DADR.
* To use register names with standard convension, please use DMA_CH21_DADR.
*/
#define DMA_DADR021 (DMA_CH21_DADR)

/** \brief 22B0, DMARAM Channel 21 Address and Interrupt Control Register */
#define DMA_CH21_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00122B0u)
/** Alias (User Manual Name) for DMA_CH21_ADICR.
* To use register names with standard convension, please use DMA_CH21_ADICR.
*/
#define DMA_ADICR021 (DMA_CH21_ADICR)

/** \brief 22B4, DMARAM Channel 21 Configuration Register */
#define DMA_CH21_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00122B4u)
/** Alias (User Manual Name) for DMA_CH21_CHCFGR.
* To use register names with standard convension, please use DMA_CH21_CHCFGR.
*/
#define DMA_CHCFGR021 (DMA_CH21_CHCFGR)

/** \brief 22B8, DMARAM Channel 21 Shadow Address Register */
#define DMA_CH21_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00122B8u)
/** Alias (User Manual Name) for DMA_CH21_SHADR.
* To use register names with standard convension, please use DMA_CH21_SHADR.
*/
#define DMA_SHADR021 (DMA_CH21_SHADR)

/** \brief 22BC, DMARAM Channel 21 Control and Status Register */
#define DMA_CH21_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00122BCu)
/** Alias (User Manual Name) for DMA_CH21_CHCSR.
* To use register names with standard convension, please use DMA_CH21_CHCSR.
*/
#define DMA_CHCSR021 (DMA_CH21_CHCSR)

/** \brief 22C0, DMARAM Channel 22 Read Data CRC Register */
#define DMA_CH22_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00122C0u)
/** Alias (User Manual Name) for DMA_CH22_RDCRCR.
* To use register names with standard convension, please use DMA_CH22_RDCRCR.
*/
#define DMA_RDCRCR022 (DMA_CH22_RDCRCR)

/** \brief 22C4, DMARAM Channel 22 Source and Destination Address CRC Register */
#define DMA_CH22_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00122C4u)
/** Alias (User Manual Name) for DMA_CH22_SDCRCR.
* To use register names with standard convension, please use DMA_CH22_SDCRCR.
*/
#define DMA_SDCRCR022 (DMA_CH22_SDCRCR)

/** \brief 22C8, DMARAM Channel 22 Source Address Register */
#define DMA_CH22_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00122C8u)
/** Alias (User Manual Name) for DMA_CH22_SADR.
* To use register names with standard convension, please use DMA_CH22_SADR.
*/
#define DMA_SADR022 (DMA_CH22_SADR)

/** \brief 22CC, DMARAM Channel 22 Destination Address Register */
#define DMA_CH22_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00122CCu)
/** Alias (User Manual Name) for DMA_CH22_DADR.
* To use register names with standard convension, please use DMA_CH22_DADR.
*/
#define DMA_DADR022 (DMA_CH22_DADR)

/** \brief 22D0, DMARAM Channel 22 Address and Interrupt Control Register */
#define DMA_CH22_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00122D0u)
/** Alias (User Manual Name) for DMA_CH22_ADICR.
* To use register names with standard convension, please use DMA_CH22_ADICR.
*/
#define DMA_ADICR022 (DMA_CH22_ADICR)

/** \brief 22D4, DMARAM Channel 22 Configuration Register */
#define DMA_CH22_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00122D4u)
/** Alias (User Manual Name) for DMA_CH22_CHCFGR.
* To use register names with standard convension, please use DMA_CH22_CHCFGR.
*/
#define DMA_CHCFGR022 (DMA_CH22_CHCFGR)

/** \brief 22D8, DMARAM Channel 22 Shadow Address Register */
#define DMA_CH22_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00122D8u)
/** Alias (User Manual Name) for DMA_CH22_SHADR.
* To use register names with standard convension, please use DMA_CH22_SHADR.
*/
#define DMA_SHADR022 (DMA_CH22_SHADR)

/** \brief 22DC, DMARAM Channel 22 Control and Status Register */
#define DMA_CH22_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00122DCu)
/** Alias (User Manual Name) for DMA_CH22_CHCSR.
* To use register names with standard convension, please use DMA_CH22_CHCSR.
*/
#define DMA_CHCSR022 (DMA_CH22_CHCSR)

/** \brief 22E0, DMARAM Channel 23 Read Data CRC Register */
#define DMA_CH23_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00122E0u)
/** Alias (User Manual Name) for DMA_CH23_RDCRCR.
* To use register names with standard convension, please use DMA_CH23_RDCRCR.
*/
#define DMA_RDCRCR023 (DMA_CH23_RDCRCR)

/** \brief 22E4, DMARAM Channel 23 Source and Destination Address CRC Register */
#define DMA_CH23_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00122E4u)
/** Alias (User Manual Name) for DMA_CH23_SDCRCR.
* To use register names with standard convension, please use DMA_CH23_SDCRCR.
*/
#define DMA_SDCRCR023 (DMA_CH23_SDCRCR)

/** \brief 22E8, DMARAM Channel 23 Source Address Register */
#define DMA_CH23_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00122E8u)
/** Alias (User Manual Name) for DMA_CH23_SADR.
* To use register names with standard convension, please use DMA_CH23_SADR.
*/
#define DMA_SADR023 (DMA_CH23_SADR)

/** \brief 22EC, DMARAM Channel 23 Destination Address Register */
#define DMA_CH23_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00122ECu)
/** Alias (User Manual Name) for DMA_CH23_DADR.
* To use register names with standard convension, please use DMA_CH23_DADR.
*/
#define DMA_DADR023 (DMA_CH23_DADR)

/** \brief 22F0, DMARAM Channel 23 Address and Interrupt Control Register */
#define DMA_CH23_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00122F0u)
/** Alias (User Manual Name) for DMA_CH23_ADICR.
* To use register names with standard convension, please use DMA_CH23_ADICR.
*/
#define DMA_ADICR023 (DMA_CH23_ADICR)

/** \brief 22F4, DMARAM Channel 23 Configuration Register */
#define DMA_CH23_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00122F4u)
/** Alias (User Manual Name) for DMA_CH23_CHCFGR.
* To use register names with standard convension, please use DMA_CH23_CHCFGR.
*/
#define DMA_CHCFGR023 (DMA_CH23_CHCFGR)

/** \brief 22F8, DMARAM Channel 23 Shadow Address Register */
#define DMA_CH23_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00122F8u)
/** Alias (User Manual Name) for DMA_CH23_SHADR.
* To use register names with standard convension, please use DMA_CH23_SHADR.
*/
#define DMA_SHADR023 (DMA_CH23_SHADR)

/** \brief 22FC, DMARAM Channel 23 Control and Status Register */
#define DMA_CH23_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00122FCu)
/** Alias (User Manual Name) for DMA_CH23_CHCSR.
* To use register names with standard convension, please use DMA_CH23_CHCSR.
*/
#define DMA_CHCSR023 (DMA_CH23_CHCSR)

/** \brief 2300, DMARAM Channel 24 Read Data CRC Register */
#define DMA_CH24_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012300u)
/** Alias (User Manual Name) for DMA_CH24_RDCRCR.
* To use register names with standard convension, please use DMA_CH24_RDCRCR.
*/
#define DMA_RDCRCR024 (DMA_CH24_RDCRCR)

/** \brief 2304, DMARAM Channel 24 Source and Destination Address CRC Register */
#define DMA_CH24_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012304u)
/** Alias (User Manual Name) for DMA_CH24_SDCRCR.
* To use register names with standard convension, please use DMA_CH24_SDCRCR.
*/
#define DMA_SDCRCR024 (DMA_CH24_SDCRCR)

/** \brief 2308, DMARAM Channel 24 Source Address Register */
#define DMA_CH24_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012308u)
/** Alias (User Manual Name) for DMA_CH24_SADR.
* To use register names with standard convension, please use DMA_CH24_SADR.
*/
#define DMA_SADR024 (DMA_CH24_SADR)

/** \brief 230C, DMARAM Channel 24 Destination Address Register */
#define DMA_CH24_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001230Cu)
/** Alias (User Manual Name) for DMA_CH24_DADR.
* To use register names with standard convension, please use DMA_CH24_DADR.
*/
#define DMA_DADR024 (DMA_CH24_DADR)

/** \brief 2310, DMARAM Channel 24 Address and Interrupt Control Register */
#define DMA_CH24_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012310u)
/** Alias (User Manual Name) for DMA_CH24_ADICR.
* To use register names with standard convension, please use DMA_CH24_ADICR.
*/
#define DMA_ADICR024 (DMA_CH24_ADICR)

/** \brief 2314, DMARAM Channel 24 Configuration Register */
#define DMA_CH24_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012314u)
/** Alias (User Manual Name) for DMA_CH24_CHCFGR.
* To use register names with standard convension, please use DMA_CH24_CHCFGR.
*/
#define DMA_CHCFGR024 (DMA_CH24_CHCFGR)

/** \brief 2318, DMARAM Channel 24 Shadow Address Register */
#define DMA_CH24_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012318u)
/** Alias (User Manual Name) for DMA_CH24_SHADR.
* To use register names with standard convension, please use DMA_CH24_SHADR.
*/
#define DMA_SHADR024 (DMA_CH24_SHADR)

/** \brief 231C, DMARAM Channel 24 Control and Status Register */
#define DMA_CH24_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001231Cu)
/** Alias (User Manual Name) for DMA_CH24_CHCSR.
* To use register names with standard convension, please use DMA_CH24_CHCSR.
*/
#define DMA_CHCSR024 (DMA_CH24_CHCSR)

/** \brief 2320, DMARAM Channel 25 Read Data CRC Register */
#define DMA_CH25_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012320u)
/** Alias (User Manual Name) for DMA_CH25_RDCRCR.
* To use register names with standard convension, please use DMA_CH25_RDCRCR.
*/
#define DMA_RDCRCR025 (DMA_CH25_RDCRCR)

/** \brief 2324, DMARAM Channel 25 Source and Destination Address CRC Register */
#define DMA_CH25_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012324u)
/** Alias (User Manual Name) for DMA_CH25_SDCRCR.
* To use register names with standard convension, please use DMA_CH25_SDCRCR.
*/
#define DMA_SDCRCR025 (DMA_CH25_SDCRCR)

/** \brief 2328, DMARAM Channel 25 Source Address Register */
#define DMA_CH25_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012328u)
/** Alias (User Manual Name) for DMA_CH25_SADR.
* To use register names with standard convension, please use DMA_CH25_SADR.
*/
#define DMA_SADR025 (DMA_CH25_SADR)

/** \brief 232C, DMARAM Channel 25 Destination Address Register */
#define DMA_CH25_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001232Cu)
/** Alias (User Manual Name) for DMA_CH25_DADR.
* To use register names with standard convension, please use DMA_CH25_DADR.
*/
#define DMA_DADR025 (DMA_CH25_DADR)

/** \brief 2330, DMARAM Channel 25 Address and Interrupt Control Register */
#define DMA_CH25_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012330u)
/** Alias (User Manual Name) for DMA_CH25_ADICR.
* To use register names with standard convension, please use DMA_CH25_ADICR.
*/
#define DMA_ADICR025 (DMA_CH25_ADICR)

/** \brief 2334, DMARAM Channel 25 Configuration Register */
#define DMA_CH25_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012334u)
/** Alias (User Manual Name) for DMA_CH25_CHCFGR.
* To use register names with standard convension, please use DMA_CH25_CHCFGR.
*/
#define DMA_CHCFGR025 (DMA_CH25_CHCFGR)

/** \brief 2338, DMARAM Channel 25 Shadow Address Register */
#define DMA_CH25_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012338u)
/** Alias (User Manual Name) for DMA_CH25_SHADR.
* To use register names with standard convension, please use DMA_CH25_SHADR.
*/
#define DMA_SHADR025 (DMA_CH25_SHADR)

/** \brief 233C, DMARAM Channel 25 Control and Status Register */
#define DMA_CH25_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001233Cu)
/** Alias (User Manual Name) for DMA_CH25_CHCSR.
* To use register names with standard convension, please use DMA_CH25_CHCSR.
*/
#define DMA_CHCSR025 (DMA_CH25_CHCSR)

/** \brief 2340, DMARAM Channel 26 Read Data CRC Register */
#define DMA_CH26_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012340u)
/** Alias (User Manual Name) for DMA_CH26_RDCRCR.
* To use register names with standard convension, please use DMA_CH26_RDCRCR.
*/
#define DMA_RDCRCR026 (DMA_CH26_RDCRCR)

/** \brief 2344, DMARAM Channel 26 Source and Destination Address CRC Register */
#define DMA_CH26_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012344u)
/** Alias (User Manual Name) for DMA_CH26_SDCRCR.
* To use register names with standard convension, please use DMA_CH26_SDCRCR.
*/
#define DMA_SDCRCR026 (DMA_CH26_SDCRCR)

/** \brief 2348, DMARAM Channel 26 Source Address Register */
#define DMA_CH26_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012348u)
/** Alias (User Manual Name) for DMA_CH26_SADR.
* To use register names with standard convension, please use DMA_CH26_SADR.
*/
#define DMA_SADR026 (DMA_CH26_SADR)

/** \brief 234C, DMARAM Channel 26 Destination Address Register */
#define DMA_CH26_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001234Cu)
/** Alias (User Manual Name) for DMA_CH26_DADR.
* To use register names with standard convension, please use DMA_CH26_DADR.
*/
#define DMA_DADR026 (DMA_CH26_DADR)

/** \brief 2350, DMARAM Channel 26 Address and Interrupt Control Register */
#define DMA_CH26_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012350u)
/** Alias (User Manual Name) for DMA_CH26_ADICR.
* To use register names with standard convension, please use DMA_CH26_ADICR.
*/
#define DMA_ADICR026 (DMA_CH26_ADICR)

/** \brief 2354, DMARAM Channel 26 Configuration Register */
#define DMA_CH26_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012354u)
/** Alias (User Manual Name) for DMA_CH26_CHCFGR.
* To use register names with standard convension, please use DMA_CH26_CHCFGR.
*/
#define DMA_CHCFGR026 (DMA_CH26_CHCFGR)

/** \brief 2358, DMARAM Channel 26 Shadow Address Register */
#define DMA_CH26_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012358u)
/** Alias (User Manual Name) for DMA_CH26_SHADR.
* To use register names with standard convension, please use DMA_CH26_SHADR.
*/
#define DMA_SHADR026 (DMA_CH26_SHADR)

/** \brief 235C, DMARAM Channel 26 Control and Status Register */
#define DMA_CH26_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001235Cu)
/** Alias (User Manual Name) for DMA_CH26_CHCSR.
* To use register names with standard convension, please use DMA_CH26_CHCSR.
*/
#define DMA_CHCSR026 (DMA_CH26_CHCSR)

/** \brief 2360, DMARAM Channel 27 Read Data CRC Register */
#define DMA_CH27_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012360u)
/** Alias (User Manual Name) for DMA_CH27_RDCRCR.
* To use register names with standard convension, please use DMA_CH27_RDCRCR.
*/
#define DMA_RDCRCR027 (DMA_CH27_RDCRCR)

/** \brief 2364, DMARAM Channel 27 Source and Destination Address CRC Register */
#define DMA_CH27_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012364u)
/** Alias (User Manual Name) for DMA_CH27_SDCRCR.
* To use register names with standard convension, please use DMA_CH27_SDCRCR.
*/
#define DMA_SDCRCR027 (DMA_CH27_SDCRCR)

/** \brief 2368, DMARAM Channel 27 Source Address Register */
#define DMA_CH27_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012368u)
/** Alias (User Manual Name) for DMA_CH27_SADR.
* To use register names with standard convension, please use DMA_CH27_SADR.
*/
#define DMA_SADR027 (DMA_CH27_SADR)

/** \brief 236C, DMARAM Channel 27 Destination Address Register */
#define DMA_CH27_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001236Cu)
/** Alias (User Manual Name) for DMA_CH27_DADR.
* To use register names with standard convension, please use DMA_CH27_DADR.
*/
#define DMA_DADR027 (DMA_CH27_DADR)

/** \brief 2370, DMARAM Channel 27 Address and Interrupt Control Register */
#define DMA_CH27_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012370u)
/** Alias (User Manual Name) for DMA_CH27_ADICR.
* To use register names with standard convension, please use DMA_CH27_ADICR.
*/
#define DMA_ADICR027 (DMA_CH27_ADICR)

/** \brief 2374, DMARAM Channel 27 Configuration Register */
#define DMA_CH27_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012374u)
/** Alias (User Manual Name) for DMA_CH27_CHCFGR.
* To use register names with standard convension, please use DMA_CH27_CHCFGR.
*/
#define DMA_CHCFGR027 (DMA_CH27_CHCFGR)

/** \brief 2378, DMARAM Channel 27 Shadow Address Register */
#define DMA_CH27_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012378u)
/** Alias (User Manual Name) for DMA_CH27_SHADR.
* To use register names with standard convension, please use DMA_CH27_SHADR.
*/
#define DMA_SHADR027 (DMA_CH27_SHADR)

/** \brief 237C, DMARAM Channel 27 Control and Status Register */
#define DMA_CH27_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001237Cu)
/** Alias (User Manual Name) for DMA_CH27_CHCSR.
* To use register names with standard convension, please use DMA_CH27_CHCSR.
*/
#define DMA_CHCSR027 (DMA_CH27_CHCSR)

/** \brief 2380, DMARAM Channel 28 Read Data CRC Register */
#define DMA_CH28_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012380u)
/** Alias (User Manual Name) for DMA_CH28_RDCRCR.
* To use register names with standard convension, please use DMA_CH28_RDCRCR.
*/
#define DMA_RDCRCR028 (DMA_CH28_RDCRCR)

/** \brief 2384, DMARAM Channel 28 Source and Destination Address CRC Register */
#define DMA_CH28_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012384u)
/** Alias (User Manual Name) for DMA_CH28_SDCRCR.
* To use register names with standard convension, please use DMA_CH28_SDCRCR.
*/
#define DMA_SDCRCR028 (DMA_CH28_SDCRCR)

/** \brief 2388, DMARAM Channel 28 Source Address Register */
#define DMA_CH28_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012388u)
/** Alias (User Manual Name) for DMA_CH28_SADR.
* To use register names with standard convension, please use DMA_CH28_SADR.
*/
#define DMA_SADR028 (DMA_CH28_SADR)

/** \brief 238C, DMARAM Channel 28 Destination Address Register */
#define DMA_CH28_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001238Cu)
/** Alias (User Manual Name) for DMA_CH28_DADR.
* To use register names with standard convension, please use DMA_CH28_DADR.
*/
#define DMA_DADR028 (DMA_CH28_DADR)

/** \brief 2390, DMARAM Channel 28 Address and Interrupt Control Register */
#define DMA_CH28_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012390u)
/** Alias (User Manual Name) for DMA_CH28_ADICR.
* To use register names with standard convension, please use DMA_CH28_ADICR.
*/
#define DMA_ADICR028 (DMA_CH28_ADICR)

/** \brief 2394, DMARAM Channel 28 Configuration Register */
#define DMA_CH28_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012394u)
/** Alias (User Manual Name) for DMA_CH28_CHCFGR.
* To use register names with standard convension, please use DMA_CH28_CHCFGR.
*/
#define DMA_CHCFGR028 (DMA_CH28_CHCFGR)

/** \brief 2398, DMARAM Channel 28 Shadow Address Register */
#define DMA_CH28_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012398u)
/** Alias (User Manual Name) for DMA_CH28_SHADR.
* To use register names with standard convension, please use DMA_CH28_SHADR.
*/
#define DMA_SHADR028 (DMA_CH28_SHADR)

/** \brief 239C, DMARAM Channel 28 Control and Status Register */
#define DMA_CH28_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001239Cu)
/** Alias (User Manual Name) for DMA_CH28_CHCSR.
* To use register names with standard convension, please use DMA_CH28_CHCSR.
*/
#define DMA_CHCSR028 (DMA_CH28_CHCSR)

/** \brief 23A0, DMARAM Channel 29 Read Data CRC Register */
#define DMA_CH29_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00123A0u)
/** Alias (User Manual Name) for DMA_CH29_RDCRCR.
* To use register names with standard convension, please use DMA_CH29_RDCRCR.
*/
#define DMA_RDCRCR029 (DMA_CH29_RDCRCR)

/** \brief 23A4, DMARAM Channel 29 Source and Destination Address CRC Register */
#define DMA_CH29_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00123A4u)
/** Alias (User Manual Name) for DMA_CH29_SDCRCR.
* To use register names with standard convension, please use DMA_CH29_SDCRCR.
*/
#define DMA_SDCRCR029 (DMA_CH29_SDCRCR)

/** \brief 23A8, DMARAM Channel 29 Source Address Register */
#define DMA_CH29_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00123A8u)
/** Alias (User Manual Name) for DMA_CH29_SADR.
* To use register names with standard convension, please use DMA_CH29_SADR.
*/
#define DMA_SADR029 (DMA_CH29_SADR)

/** \brief 23AC, DMARAM Channel 29 Destination Address Register */
#define DMA_CH29_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00123ACu)
/** Alias (User Manual Name) for DMA_CH29_DADR.
* To use register names with standard convension, please use DMA_CH29_DADR.
*/
#define DMA_DADR029 (DMA_CH29_DADR)

/** \brief 23B0, DMARAM Channel 29 Address and Interrupt Control Register */
#define DMA_CH29_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00123B0u)
/** Alias (User Manual Name) for DMA_CH29_ADICR.
* To use register names with standard convension, please use DMA_CH29_ADICR.
*/
#define DMA_ADICR029 (DMA_CH29_ADICR)

/** \brief 23B4, DMARAM Channel 29 Configuration Register */
#define DMA_CH29_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00123B4u)
/** Alias (User Manual Name) for DMA_CH29_CHCFGR.
* To use register names with standard convension, please use DMA_CH29_CHCFGR.
*/
#define DMA_CHCFGR029 (DMA_CH29_CHCFGR)

/** \brief 23B8, DMARAM Channel 29 Shadow Address Register */
#define DMA_CH29_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00123B8u)
/** Alias (User Manual Name) for DMA_CH29_SHADR.
* To use register names with standard convension, please use DMA_CH29_SHADR.
*/
#define DMA_SHADR029 (DMA_CH29_SHADR)

/** \brief 23BC, DMARAM Channel 29 Control and Status Register */
#define DMA_CH29_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00123BCu)
/** Alias (User Manual Name) for DMA_CH29_CHCSR.
* To use register names with standard convension, please use DMA_CH29_CHCSR.
*/
#define DMA_CHCSR029 (DMA_CH29_CHCSR)

/** \brief 23C0, DMARAM Channel 30 Read Data CRC Register */
#define DMA_CH30_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00123C0u)
/** Alias (User Manual Name) for DMA_CH30_RDCRCR.
* To use register names with standard convension, please use DMA_CH30_RDCRCR.
*/
#define DMA_RDCRCR030 (DMA_CH30_RDCRCR)

/** \brief 23C4, DMARAM Channel 30 Source and Destination Address CRC Register */
#define DMA_CH30_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00123C4u)
/** Alias (User Manual Name) for DMA_CH30_SDCRCR.
* To use register names with standard convension, please use DMA_CH30_SDCRCR.
*/
#define DMA_SDCRCR030 (DMA_CH30_SDCRCR)

/** \brief 23C8, DMARAM Channel 30 Source Address Register */
#define DMA_CH30_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00123C8u)
/** Alias (User Manual Name) for DMA_CH30_SADR.
* To use register names with standard convension, please use DMA_CH30_SADR.
*/
#define DMA_SADR030 (DMA_CH30_SADR)

/** \brief 23CC, DMARAM Channel 30 Destination Address Register */
#define DMA_CH30_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00123CCu)
/** Alias (User Manual Name) for DMA_CH30_DADR.
* To use register names with standard convension, please use DMA_CH30_DADR.
*/
#define DMA_DADR030 (DMA_CH30_DADR)

/** \brief 23D0, DMARAM Channel 30 Address and Interrupt Control Register */
#define DMA_CH30_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00123D0u)
/** Alias (User Manual Name) for DMA_CH30_ADICR.
* To use register names with standard convension, please use DMA_CH30_ADICR.
*/
#define DMA_ADICR030 (DMA_CH30_ADICR)

/** \brief 23D4, DMARAM Channel 30 Configuration Register */
#define DMA_CH30_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00123D4u)
/** Alias (User Manual Name) for DMA_CH30_CHCFGR.
* To use register names with standard convension, please use DMA_CH30_CHCFGR.
*/
#define DMA_CHCFGR030 (DMA_CH30_CHCFGR)

/** \brief 23D8, DMARAM Channel 30 Shadow Address Register */
#define DMA_CH30_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00123D8u)
/** Alias (User Manual Name) for DMA_CH30_SHADR.
* To use register names with standard convension, please use DMA_CH30_SHADR.
*/
#define DMA_SHADR030 (DMA_CH30_SHADR)

/** \brief 23DC, DMARAM Channel 30 Control and Status Register */
#define DMA_CH30_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00123DCu)
/** Alias (User Manual Name) for DMA_CH30_CHCSR.
* To use register names with standard convension, please use DMA_CH30_CHCSR.
*/
#define DMA_CHCSR030 (DMA_CH30_CHCSR)

/** \brief 23E0, DMARAM Channel 31 Read Data CRC Register */
#define DMA_CH31_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00123E0u)
/** Alias (User Manual Name) for DMA_CH31_RDCRCR.
* To use register names with standard convension, please use DMA_CH31_RDCRCR.
*/
#define DMA_RDCRCR031 (DMA_CH31_RDCRCR)

/** \brief 23E4, DMARAM Channel 31 Source and Destination Address CRC Register */
#define DMA_CH31_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00123E4u)
/** Alias (User Manual Name) for DMA_CH31_SDCRCR.
* To use register names with standard convension, please use DMA_CH31_SDCRCR.
*/
#define DMA_SDCRCR031 (DMA_CH31_SDCRCR)

/** \brief 23E8, DMARAM Channel 31 Source Address Register */
#define DMA_CH31_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00123E8u)
/** Alias (User Manual Name) for DMA_CH31_SADR.
* To use register names with standard convension, please use DMA_CH31_SADR.
*/
#define DMA_SADR031 (DMA_CH31_SADR)

/** \brief 23EC, DMARAM Channel 31 Destination Address Register */
#define DMA_CH31_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00123ECu)
/** Alias (User Manual Name) for DMA_CH31_DADR.
* To use register names with standard convension, please use DMA_CH31_DADR.
*/
#define DMA_DADR031 (DMA_CH31_DADR)

/** \brief 23F0, DMARAM Channel 31 Address and Interrupt Control Register */
#define DMA_CH31_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00123F0u)
/** Alias (User Manual Name) for DMA_CH31_ADICR.
* To use register names with standard convension, please use DMA_CH31_ADICR.
*/
#define DMA_ADICR031 (DMA_CH31_ADICR)

/** \brief 23F4, DMARAM Channel 31 Configuration Register */
#define DMA_CH31_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00123F4u)
/** Alias (User Manual Name) for DMA_CH31_CHCFGR.
* To use register names with standard convension, please use DMA_CH31_CHCFGR.
*/
#define DMA_CHCFGR031 (DMA_CH31_CHCFGR)

/** \brief 23F8, DMARAM Channel 31 Shadow Address Register */
#define DMA_CH31_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00123F8u)
/** Alias (User Manual Name) for DMA_CH31_SHADR.
* To use register names with standard convension, please use DMA_CH31_SHADR.
*/
#define DMA_SHADR031 (DMA_CH31_SHADR)

/** \brief 23FC, DMARAM Channel 31 Control and Status Register */
#define DMA_CH31_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00123FCu)
/** Alias (User Manual Name) for DMA_CH31_CHCSR.
* To use register names with standard convension, please use DMA_CH31_CHCSR.
*/
#define DMA_CHCSR031 (DMA_CH31_CHCSR)

/** \brief 2400, DMARAM Channel 32 Read Data CRC Register */
#define DMA_CH32_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012400u)
/** Alias (User Manual Name) for DMA_CH32_RDCRCR.
* To use register names with standard convension, please use DMA_CH32_RDCRCR.
*/
#define DMA_RDCRCR032 (DMA_CH32_RDCRCR)

/** \brief 2404, DMARAM Channel 32 Source and Destination Address CRC Register */
#define DMA_CH32_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012404u)
/** Alias (User Manual Name) for DMA_CH32_SDCRCR.
* To use register names with standard convension, please use DMA_CH32_SDCRCR.
*/
#define DMA_SDCRCR032 (DMA_CH32_SDCRCR)

/** \brief 2408, DMARAM Channel 32 Source Address Register */
#define DMA_CH32_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012408u)
/** Alias (User Manual Name) for DMA_CH32_SADR.
* To use register names with standard convension, please use DMA_CH32_SADR.
*/
#define DMA_SADR032 (DMA_CH32_SADR)

/** \brief 240C, DMARAM Channel 32 Destination Address Register */
#define DMA_CH32_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001240Cu)
/** Alias (User Manual Name) for DMA_CH32_DADR.
* To use register names with standard convension, please use DMA_CH32_DADR.
*/
#define DMA_DADR032 (DMA_CH32_DADR)

/** \brief 2410, DMARAM Channel 32 Address and Interrupt Control Register */
#define DMA_CH32_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012410u)
/** Alias (User Manual Name) for DMA_CH32_ADICR.
* To use register names with standard convension, please use DMA_CH32_ADICR.
*/
#define DMA_ADICR032 (DMA_CH32_ADICR)

/** \brief 2414, DMARAM Channel 32 Configuration Register */
#define DMA_CH32_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012414u)
/** Alias (User Manual Name) for DMA_CH32_CHCFGR.
* To use register names with standard convension, please use DMA_CH32_CHCFGR.
*/
#define DMA_CHCFGR032 (DMA_CH32_CHCFGR)

/** \brief 2418, DMARAM Channel 32 Shadow Address Register */
#define DMA_CH32_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012418u)
/** Alias (User Manual Name) for DMA_CH32_SHADR.
* To use register names with standard convension, please use DMA_CH32_SHADR.
*/
#define DMA_SHADR032 (DMA_CH32_SHADR)

/** \brief 241C, DMARAM Channel 32 Control and Status Register */
#define DMA_CH32_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001241Cu)
/** Alias (User Manual Name) for DMA_CH32_CHCSR.
* To use register names with standard convension, please use DMA_CH32_CHCSR.
*/
#define DMA_CHCSR032 (DMA_CH32_CHCSR)

/** \brief 2420, DMARAM Channel 33 Read Data CRC Register */
#define DMA_CH33_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012420u)
/** Alias (User Manual Name) for DMA_CH33_RDCRCR.
* To use register names with standard convension, please use DMA_CH33_RDCRCR.
*/
#define DMA_RDCRCR033 (DMA_CH33_RDCRCR)

/** \brief 2424, DMARAM Channel 33 Source and Destination Address CRC Register */
#define DMA_CH33_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012424u)
/** Alias (User Manual Name) for DMA_CH33_SDCRCR.
* To use register names with standard convension, please use DMA_CH33_SDCRCR.
*/
#define DMA_SDCRCR033 (DMA_CH33_SDCRCR)

/** \brief 2428, DMARAM Channel 33 Source Address Register */
#define DMA_CH33_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012428u)
/** Alias (User Manual Name) for DMA_CH33_SADR.
* To use register names with standard convension, please use DMA_CH33_SADR.
*/
#define DMA_SADR033 (DMA_CH33_SADR)

/** \brief 242C, DMARAM Channel 33 Destination Address Register */
#define DMA_CH33_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001242Cu)
/** Alias (User Manual Name) for DMA_CH33_DADR.
* To use register names with standard convension, please use DMA_CH33_DADR.
*/
#define DMA_DADR033 (DMA_CH33_DADR)

/** \brief 2430, DMARAM Channel 33 Address and Interrupt Control Register */
#define DMA_CH33_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012430u)
/** Alias (User Manual Name) for DMA_CH33_ADICR.
* To use register names with standard convension, please use DMA_CH33_ADICR.
*/
#define DMA_ADICR033 (DMA_CH33_ADICR)

/** \brief 2434, DMARAM Channel 33 Configuration Register */
#define DMA_CH33_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012434u)
/** Alias (User Manual Name) for DMA_CH33_CHCFGR.
* To use register names with standard convension, please use DMA_CH33_CHCFGR.
*/
#define DMA_CHCFGR033 (DMA_CH33_CHCFGR)

/** \brief 2438, DMARAM Channel 33 Shadow Address Register */
#define DMA_CH33_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012438u)
/** Alias (User Manual Name) for DMA_CH33_SHADR.
* To use register names with standard convension, please use DMA_CH33_SHADR.
*/
#define DMA_SHADR033 (DMA_CH33_SHADR)

/** \brief 243C, DMARAM Channel 33 Control and Status Register */
#define DMA_CH33_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001243Cu)
/** Alias (User Manual Name) for DMA_CH33_CHCSR.
* To use register names with standard convension, please use DMA_CH33_CHCSR.
*/
#define DMA_CHCSR033 (DMA_CH33_CHCSR)

/** \brief 2440, DMARAM Channel 34 Read Data CRC Register */
#define DMA_CH34_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012440u)
/** Alias (User Manual Name) for DMA_CH34_RDCRCR.
* To use register names with standard convension, please use DMA_CH34_RDCRCR.
*/
#define DMA_RDCRCR034 (DMA_CH34_RDCRCR)

/** \brief 2444, DMARAM Channel 34 Source and Destination Address CRC Register */
#define DMA_CH34_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012444u)
/** Alias (User Manual Name) for DMA_CH34_SDCRCR.
* To use register names with standard convension, please use DMA_CH34_SDCRCR.
*/
#define DMA_SDCRCR034 (DMA_CH34_SDCRCR)

/** \brief 2448, DMARAM Channel 34 Source Address Register */
#define DMA_CH34_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012448u)
/** Alias (User Manual Name) for DMA_CH34_SADR.
* To use register names with standard convension, please use DMA_CH34_SADR.
*/
#define DMA_SADR034 (DMA_CH34_SADR)

/** \brief 244C, DMARAM Channel 34 Destination Address Register */
#define DMA_CH34_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001244Cu)
/** Alias (User Manual Name) for DMA_CH34_DADR.
* To use register names with standard convension, please use DMA_CH34_DADR.
*/
#define DMA_DADR034 (DMA_CH34_DADR)

/** \brief 2450, DMARAM Channel 34 Address and Interrupt Control Register */
#define DMA_CH34_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012450u)
/** Alias (User Manual Name) for DMA_CH34_ADICR.
* To use register names with standard convension, please use DMA_CH34_ADICR.
*/
#define DMA_ADICR034 (DMA_CH34_ADICR)

/** \brief 2454, DMARAM Channel 34 Configuration Register */
#define DMA_CH34_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012454u)
/** Alias (User Manual Name) for DMA_CH34_CHCFGR.
* To use register names with standard convension, please use DMA_CH34_CHCFGR.
*/
#define DMA_CHCFGR034 (DMA_CH34_CHCFGR)

/** \brief 2458, DMARAM Channel 34 Shadow Address Register */
#define DMA_CH34_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012458u)
/** Alias (User Manual Name) for DMA_CH34_SHADR.
* To use register names with standard convension, please use DMA_CH34_SHADR.
*/
#define DMA_SHADR034 (DMA_CH34_SHADR)

/** \brief 245C, DMARAM Channel 34 Control and Status Register */
#define DMA_CH34_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001245Cu)
/** Alias (User Manual Name) for DMA_CH34_CHCSR.
* To use register names with standard convension, please use DMA_CH34_CHCSR.
*/
#define DMA_CHCSR034 (DMA_CH34_CHCSR)

/** \brief 2460, DMARAM Channel 35 Read Data CRC Register */
#define DMA_CH35_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012460u)
/** Alias (User Manual Name) for DMA_CH35_RDCRCR.
* To use register names with standard convension, please use DMA_CH35_RDCRCR.
*/
#define DMA_RDCRCR035 (DMA_CH35_RDCRCR)

/** \brief 2464, DMARAM Channel 35 Source and Destination Address CRC Register */
#define DMA_CH35_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012464u)
/** Alias (User Manual Name) for DMA_CH35_SDCRCR.
* To use register names with standard convension, please use DMA_CH35_SDCRCR.
*/
#define DMA_SDCRCR035 (DMA_CH35_SDCRCR)

/** \brief 2468, DMARAM Channel 35 Source Address Register */
#define DMA_CH35_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012468u)
/** Alias (User Manual Name) for DMA_CH35_SADR.
* To use register names with standard convension, please use DMA_CH35_SADR.
*/
#define DMA_SADR035 (DMA_CH35_SADR)

/** \brief 246C, DMARAM Channel 35 Destination Address Register */
#define DMA_CH35_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001246Cu)
/** Alias (User Manual Name) for DMA_CH35_DADR.
* To use register names with standard convension, please use DMA_CH35_DADR.
*/
#define DMA_DADR035 (DMA_CH35_DADR)

/** \brief 2470, DMARAM Channel 35 Address and Interrupt Control Register */
#define DMA_CH35_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012470u)
/** Alias (User Manual Name) for DMA_CH35_ADICR.
* To use register names with standard convension, please use DMA_CH35_ADICR.
*/
#define DMA_ADICR035 (DMA_CH35_ADICR)

/** \brief 2474, DMARAM Channel 35 Configuration Register */
#define DMA_CH35_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012474u)
/** Alias (User Manual Name) for DMA_CH35_CHCFGR.
* To use register names with standard convension, please use DMA_CH35_CHCFGR.
*/
#define DMA_CHCFGR035 (DMA_CH35_CHCFGR)

/** \brief 2478, DMARAM Channel 35 Shadow Address Register */
#define DMA_CH35_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012478u)
/** Alias (User Manual Name) for DMA_CH35_SHADR.
* To use register names with standard convension, please use DMA_CH35_SHADR.
*/
#define DMA_SHADR035 (DMA_CH35_SHADR)

/** \brief 247C, DMARAM Channel 35 Control and Status Register */
#define DMA_CH35_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001247Cu)
/** Alias (User Manual Name) for DMA_CH35_CHCSR.
* To use register names with standard convension, please use DMA_CH35_CHCSR.
*/
#define DMA_CHCSR035 (DMA_CH35_CHCSR)

/** \brief 2480, DMARAM Channel 36 Read Data CRC Register */
#define DMA_CH36_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012480u)
/** Alias (User Manual Name) for DMA_CH36_RDCRCR.
* To use register names with standard convension, please use DMA_CH36_RDCRCR.
*/
#define DMA_RDCRCR036 (DMA_CH36_RDCRCR)

/** \brief 2484, DMARAM Channel 36 Source and Destination Address CRC Register */
#define DMA_CH36_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012484u)
/** Alias (User Manual Name) for DMA_CH36_SDCRCR.
* To use register names with standard convension, please use DMA_CH36_SDCRCR.
*/
#define DMA_SDCRCR036 (DMA_CH36_SDCRCR)

/** \brief 2488, DMARAM Channel 36 Source Address Register */
#define DMA_CH36_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012488u)
/** Alias (User Manual Name) for DMA_CH36_SADR.
* To use register names with standard convension, please use DMA_CH36_SADR.
*/
#define DMA_SADR036 (DMA_CH36_SADR)

/** \brief 248C, DMARAM Channel 36 Destination Address Register */
#define DMA_CH36_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001248Cu)
/** Alias (User Manual Name) for DMA_CH36_DADR.
* To use register names with standard convension, please use DMA_CH36_DADR.
*/
#define DMA_DADR036 (DMA_CH36_DADR)

/** \brief 2490, DMARAM Channel 36 Address and Interrupt Control Register */
#define DMA_CH36_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012490u)
/** Alias (User Manual Name) for DMA_CH36_ADICR.
* To use register names with standard convension, please use DMA_CH36_ADICR.
*/
#define DMA_ADICR036 (DMA_CH36_ADICR)

/** \brief 2494, DMARAM Channel 36 Configuration Register */
#define DMA_CH36_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012494u)
/** Alias (User Manual Name) for DMA_CH36_CHCFGR.
* To use register names with standard convension, please use DMA_CH36_CHCFGR.
*/
#define DMA_CHCFGR036 (DMA_CH36_CHCFGR)

/** \brief 2498, DMARAM Channel 36 Shadow Address Register */
#define DMA_CH36_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012498u)
/** Alias (User Manual Name) for DMA_CH36_SHADR.
* To use register names with standard convension, please use DMA_CH36_SHADR.
*/
#define DMA_SHADR036 (DMA_CH36_SHADR)

/** \brief 249C, DMARAM Channel 36 Control and Status Register */
#define DMA_CH36_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001249Cu)
/** Alias (User Manual Name) for DMA_CH36_CHCSR.
* To use register names with standard convension, please use DMA_CH36_CHCSR.
*/
#define DMA_CHCSR036 (DMA_CH36_CHCSR)

/** \brief 24A0, DMARAM Channel 37 Read Data CRC Register */
#define DMA_CH37_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00124A0u)
/** Alias (User Manual Name) for DMA_CH37_RDCRCR.
* To use register names with standard convension, please use DMA_CH37_RDCRCR.
*/
#define DMA_RDCRCR037 (DMA_CH37_RDCRCR)

/** \brief 24A4, DMARAM Channel 37 Source and Destination Address CRC Register */
#define DMA_CH37_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00124A4u)
/** Alias (User Manual Name) for DMA_CH37_SDCRCR.
* To use register names with standard convension, please use DMA_CH37_SDCRCR.
*/
#define DMA_SDCRCR037 (DMA_CH37_SDCRCR)

/** \brief 24A8, DMARAM Channel 37 Source Address Register */
#define DMA_CH37_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00124A8u)
/** Alias (User Manual Name) for DMA_CH37_SADR.
* To use register names with standard convension, please use DMA_CH37_SADR.
*/
#define DMA_SADR037 (DMA_CH37_SADR)

/** \brief 24AC, DMARAM Channel 37 Destination Address Register */
#define DMA_CH37_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00124ACu)
/** Alias (User Manual Name) for DMA_CH37_DADR.
* To use register names with standard convension, please use DMA_CH37_DADR.
*/
#define DMA_DADR037 (DMA_CH37_DADR)

/** \brief 24B0, DMARAM Channel 37 Address and Interrupt Control Register */
#define DMA_CH37_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00124B0u)
/** Alias (User Manual Name) for DMA_CH37_ADICR.
* To use register names with standard convension, please use DMA_CH37_ADICR.
*/
#define DMA_ADICR037 (DMA_CH37_ADICR)

/** \brief 24B4, DMARAM Channel 37 Configuration Register */
#define DMA_CH37_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00124B4u)
/** Alias (User Manual Name) for DMA_CH37_CHCFGR.
* To use register names with standard convension, please use DMA_CH37_CHCFGR.
*/
#define DMA_CHCFGR037 (DMA_CH37_CHCFGR)

/** \brief 24B8, DMARAM Channel 37 Shadow Address Register */
#define DMA_CH37_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00124B8u)
/** Alias (User Manual Name) for DMA_CH37_SHADR.
* To use register names with standard convension, please use DMA_CH37_SHADR.
*/
#define DMA_SHADR037 (DMA_CH37_SHADR)

/** \brief 24BC, DMARAM Channel 37 Control and Status Register */
#define DMA_CH37_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00124BCu)
/** Alias (User Manual Name) for DMA_CH37_CHCSR.
* To use register names with standard convension, please use DMA_CH37_CHCSR.
*/
#define DMA_CHCSR037 (DMA_CH37_CHCSR)

/** \brief 24C0, DMARAM Channel 38 Read Data CRC Register */
#define DMA_CH38_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00124C0u)
/** Alias (User Manual Name) for DMA_CH38_RDCRCR.
* To use register names with standard convension, please use DMA_CH38_RDCRCR.
*/
#define DMA_RDCRCR038 (DMA_CH38_RDCRCR)

/** \brief 24C4, DMARAM Channel 38 Source and Destination Address CRC Register */
#define DMA_CH38_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00124C4u)
/** Alias (User Manual Name) for DMA_CH38_SDCRCR.
* To use register names with standard convension, please use DMA_CH38_SDCRCR.
*/
#define DMA_SDCRCR038 (DMA_CH38_SDCRCR)

/** \brief 24C8, DMARAM Channel 38 Source Address Register */
#define DMA_CH38_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00124C8u)
/** Alias (User Manual Name) for DMA_CH38_SADR.
* To use register names with standard convension, please use DMA_CH38_SADR.
*/
#define DMA_SADR038 (DMA_CH38_SADR)

/** \brief 24CC, DMARAM Channel 38 Destination Address Register */
#define DMA_CH38_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00124CCu)
/** Alias (User Manual Name) for DMA_CH38_DADR.
* To use register names with standard convension, please use DMA_CH38_DADR.
*/
#define DMA_DADR038 (DMA_CH38_DADR)

/** \brief 24D0, DMARAM Channel 38 Address and Interrupt Control Register */
#define DMA_CH38_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00124D0u)
/** Alias (User Manual Name) for DMA_CH38_ADICR.
* To use register names with standard convension, please use DMA_CH38_ADICR.
*/
#define DMA_ADICR038 (DMA_CH38_ADICR)

/** \brief 24D4, DMARAM Channel 38 Configuration Register */
#define DMA_CH38_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00124D4u)
/** Alias (User Manual Name) for DMA_CH38_CHCFGR.
* To use register names with standard convension, please use DMA_CH38_CHCFGR.
*/
#define DMA_CHCFGR038 (DMA_CH38_CHCFGR)

/** \brief 24D8, DMARAM Channel 38 Shadow Address Register */
#define DMA_CH38_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00124D8u)
/** Alias (User Manual Name) for DMA_CH38_SHADR.
* To use register names with standard convension, please use DMA_CH38_SHADR.
*/
#define DMA_SHADR038 (DMA_CH38_SHADR)

/** \brief 24DC, DMARAM Channel 38 Control and Status Register */
#define DMA_CH38_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00124DCu)
/** Alias (User Manual Name) for DMA_CH38_CHCSR.
* To use register names with standard convension, please use DMA_CH38_CHCSR.
*/
#define DMA_CHCSR038 (DMA_CH38_CHCSR)

/** \brief 24E0, DMARAM Channel 39 Read Data CRC Register */
#define DMA_CH39_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00124E0u)
/** Alias (User Manual Name) for DMA_CH39_RDCRCR.
* To use register names with standard convension, please use DMA_CH39_RDCRCR.
*/
#define DMA_RDCRCR039 (DMA_CH39_RDCRCR)

/** \brief 24E4, DMARAM Channel 39 Source and Destination Address CRC Register */
#define DMA_CH39_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00124E4u)
/** Alias (User Manual Name) for DMA_CH39_SDCRCR.
* To use register names with standard convension, please use DMA_CH39_SDCRCR.
*/
#define DMA_SDCRCR039 (DMA_CH39_SDCRCR)

/** \brief 24E8, DMARAM Channel 39 Source Address Register */
#define DMA_CH39_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00124E8u)
/** Alias (User Manual Name) for DMA_CH39_SADR.
* To use register names with standard convension, please use DMA_CH39_SADR.
*/
#define DMA_SADR039 (DMA_CH39_SADR)

/** \brief 24EC, DMARAM Channel 39 Destination Address Register */
#define DMA_CH39_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00124ECu)
/** Alias (User Manual Name) for DMA_CH39_DADR.
* To use register names with standard convension, please use DMA_CH39_DADR.
*/
#define DMA_DADR039 (DMA_CH39_DADR)

/** \brief 24F0, DMARAM Channel 39 Address and Interrupt Control Register */
#define DMA_CH39_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00124F0u)
/** Alias (User Manual Name) for DMA_CH39_ADICR.
* To use register names with standard convension, please use DMA_CH39_ADICR.
*/
#define DMA_ADICR039 (DMA_CH39_ADICR)

/** \brief 24F4, DMARAM Channel 39 Configuration Register */
#define DMA_CH39_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00124F4u)
/** Alias (User Manual Name) for DMA_CH39_CHCFGR.
* To use register names with standard convension, please use DMA_CH39_CHCFGR.
*/
#define DMA_CHCFGR039 (DMA_CH39_CHCFGR)

/** \brief 24F8, DMARAM Channel 39 Shadow Address Register */
#define DMA_CH39_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00124F8u)
/** Alias (User Manual Name) for DMA_CH39_SHADR.
* To use register names with standard convension, please use DMA_CH39_SHADR.
*/
#define DMA_SHADR039 (DMA_CH39_SHADR)

/** \brief 24FC, DMARAM Channel 39 Control and Status Register */
#define DMA_CH39_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00124FCu)
/** Alias (User Manual Name) for DMA_CH39_CHCSR.
* To use register names with standard convension, please use DMA_CH39_CHCSR.
*/
#define DMA_CHCSR039 (DMA_CH39_CHCSR)

/** \brief 2500, DMARAM Channel 40 Read Data CRC Register */
#define DMA_CH40_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012500u)
/** Alias (User Manual Name) for DMA_CH40_RDCRCR.
* To use register names with standard convension, please use DMA_CH40_RDCRCR.
*/
#define DMA_RDCRCR040 (DMA_CH40_RDCRCR)

/** \brief 2504, DMARAM Channel 40 Source and Destination Address CRC Register */
#define DMA_CH40_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012504u)
/** Alias (User Manual Name) for DMA_CH40_SDCRCR.
* To use register names with standard convension, please use DMA_CH40_SDCRCR.
*/
#define DMA_SDCRCR040 (DMA_CH40_SDCRCR)

/** \brief 2508, DMARAM Channel 40 Source Address Register */
#define DMA_CH40_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012508u)
/** Alias (User Manual Name) for DMA_CH40_SADR.
* To use register names with standard convension, please use DMA_CH40_SADR.
*/
#define DMA_SADR040 (DMA_CH40_SADR)

/** \brief 250C, DMARAM Channel 40 Destination Address Register */
#define DMA_CH40_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001250Cu)
/** Alias (User Manual Name) for DMA_CH40_DADR.
* To use register names with standard convension, please use DMA_CH40_DADR.
*/
#define DMA_DADR040 (DMA_CH40_DADR)

/** \brief 2510, DMARAM Channel 40 Address and Interrupt Control Register */
#define DMA_CH40_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012510u)
/** Alias (User Manual Name) for DMA_CH40_ADICR.
* To use register names with standard convension, please use DMA_CH40_ADICR.
*/
#define DMA_ADICR040 (DMA_CH40_ADICR)

/** \brief 2514, DMARAM Channel 40 Configuration Register */
#define DMA_CH40_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012514u)
/** Alias (User Manual Name) for DMA_CH40_CHCFGR.
* To use register names with standard convension, please use DMA_CH40_CHCFGR.
*/
#define DMA_CHCFGR040 (DMA_CH40_CHCFGR)

/** \brief 2518, DMARAM Channel 40 Shadow Address Register */
#define DMA_CH40_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012518u)
/** Alias (User Manual Name) for DMA_CH40_SHADR.
* To use register names with standard convension, please use DMA_CH40_SHADR.
*/
#define DMA_SHADR040 (DMA_CH40_SHADR)

/** \brief 251C, DMARAM Channel 40 Control and Status Register */
#define DMA_CH40_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001251Cu)
/** Alias (User Manual Name) for DMA_CH40_CHCSR.
* To use register names with standard convension, please use DMA_CH40_CHCSR.
*/
#define DMA_CHCSR040 (DMA_CH40_CHCSR)

/** \brief 2520, DMARAM Channel 41 Read Data CRC Register */
#define DMA_CH41_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012520u)
/** Alias (User Manual Name) for DMA_CH41_RDCRCR.
* To use register names with standard convension, please use DMA_CH41_RDCRCR.
*/
#define DMA_RDCRCR041 (DMA_CH41_RDCRCR)

/** \brief 2524, DMARAM Channel 41 Source and Destination Address CRC Register */
#define DMA_CH41_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012524u)
/** Alias (User Manual Name) for DMA_CH41_SDCRCR.
* To use register names with standard convension, please use DMA_CH41_SDCRCR.
*/
#define DMA_SDCRCR041 (DMA_CH41_SDCRCR)

/** \brief 2528, DMARAM Channel 41 Source Address Register */
#define DMA_CH41_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012528u)
/** Alias (User Manual Name) for DMA_CH41_SADR.
* To use register names with standard convension, please use DMA_CH41_SADR.
*/
#define DMA_SADR041 (DMA_CH41_SADR)

/** \brief 252C, DMARAM Channel 41 Destination Address Register */
#define DMA_CH41_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001252Cu)
/** Alias (User Manual Name) for DMA_CH41_DADR.
* To use register names with standard convension, please use DMA_CH41_DADR.
*/
#define DMA_DADR041 (DMA_CH41_DADR)

/** \brief 2530, DMARAM Channel 41 Address and Interrupt Control Register */
#define DMA_CH41_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012530u)
/** Alias (User Manual Name) for DMA_CH41_ADICR.
* To use register names with standard convension, please use DMA_CH41_ADICR.
*/
#define DMA_ADICR041 (DMA_CH41_ADICR)

/** \brief 2534, DMARAM Channel 41 Configuration Register */
#define DMA_CH41_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012534u)
/** Alias (User Manual Name) for DMA_CH41_CHCFGR.
* To use register names with standard convension, please use DMA_CH41_CHCFGR.
*/
#define DMA_CHCFGR041 (DMA_CH41_CHCFGR)

/** \brief 2538, DMARAM Channel 41 Shadow Address Register */
#define DMA_CH41_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012538u)
/** Alias (User Manual Name) for DMA_CH41_SHADR.
* To use register names with standard convension, please use DMA_CH41_SHADR.
*/
#define DMA_SHADR041 (DMA_CH41_SHADR)

/** \brief 253C, DMARAM Channel 41 Control and Status Register */
#define DMA_CH41_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001253Cu)
/** Alias (User Manual Name) for DMA_CH41_CHCSR.
* To use register names with standard convension, please use DMA_CH41_CHCSR.
*/
#define DMA_CHCSR041 (DMA_CH41_CHCSR)

/** \brief 2540, DMARAM Channel 42 Read Data CRC Register */
#define DMA_CH42_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012540u)
/** Alias (User Manual Name) for DMA_CH42_RDCRCR.
* To use register names with standard convension, please use DMA_CH42_RDCRCR.
*/
#define DMA_RDCRCR042 (DMA_CH42_RDCRCR)

/** \brief 2544, DMARAM Channel 42 Source and Destination Address CRC Register */
#define DMA_CH42_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012544u)
/** Alias (User Manual Name) for DMA_CH42_SDCRCR.
* To use register names with standard convension, please use DMA_CH42_SDCRCR.
*/
#define DMA_SDCRCR042 (DMA_CH42_SDCRCR)

/** \brief 2548, DMARAM Channel 42 Source Address Register */
#define DMA_CH42_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012548u)
/** Alias (User Manual Name) for DMA_CH42_SADR.
* To use register names with standard convension, please use DMA_CH42_SADR.
*/
#define DMA_SADR042 (DMA_CH42_SADR)

/** \brief 254C, DMARAM Channel 42 Destination Address Register */
#define DMA_CH42_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001254Cu)
/** Alias (User Manual Name) for DMA_CH42_DADR.
* To use register names with standard convension, please use DMA_CH42_DADR.
*/
#define DMA_DADR042 (DMA_CH42_DADR)

/** \brief 2550, DMARAM Channel 42 Address and Interrupt Control Register */
#define DMA_CH42_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012550u)
/** Alias (User Manual Name) for DMA_CH42_ADICR.
* To use register names with standard convension, please use DMA_CH42_ADICR.
*/
#define DMA_ADICR042 (DMA_CH42_ADICR)

/** \brief 2554, DMARAM Channel 42 Configuration Register */
#define DMA_CH42_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012554u)
/** Alias (User Manual Name) for DMA_CH42_CHCFGR.
* To use register names with standard convension, please use DMA_CH42_CHCFGR.
*/
#define DMA_CHCFGR042 (DMA_CH42_CHCFGR)

/** \brief 2558, DMARAM Channel 42 Shadow Address Register */
#define DMA_CH42_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012558u)
/** Alias (User Manual Name) for DMA_CH42_SHADR.
* To use register names with standard convension, please use DMA_CH42_SHADR.
*/
#define DMA_SHADR042 (DMA_CH42_SHADR)

/** \brief 255C, DMARAM Channel 42 Control and Status Register */
#define DMA_CH42_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001255Cu)
/** Alias (User Manual Name) for DMA_CH42_CHCSR.
* To use register names with standard convension, please use DMA_CH42_CHCSR.
*/
#define DMA_CHCSR042 (DMA_CH42_CHCSR)

/** \brief 2560, DMARAM Channel 43 Read Data CRC Register */
#define DMA_CH43_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012560u)
/** Alias (User Manual Name) for DMA_CH43_RDCRCR.
* To use register names with standard convension, please use DMA_CH43_RDCRCR.
*/
#define DMA_RDCRCR043 (DMA_CH43_RDCRCR)

/** \brief 2564, DMARAM Channel 43 Source and Destination Address CRC Register */
#define DMA_CH43_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012564u)
/** Alias (User Manual Name) for DMA_CH43_SDCRCR.
* To use register names with standard convension, please use DMA_CH43_SDCRCR.
*/
#define DMA_SDCRCR043 (DMA_CH43_SDCRCR)

/** \brief 2568, DMARAM Channel 43 Source Address Register */
#define DMA_CH43_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012568u)
/** Alias (User Manual Name) for DMA_CH43_SADR.
* To use register names with standard convension, please use DMA_CH43_SADR.
*/
#define DMA_SADR043 (DMA_CH43_SADR)

/** \brief 256C, DMARAM Channel 43 Destination Address Register */
#define DMA_CH43_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001256Cu)
/** Alias (User Manual Name) for DMA_CH43_DADR.
* To use register names with standard convension, please use DMA_CH43_DADR.
*/
#define DMA_DADR043 (DMA_CH43_DADR)

/** \brief 2570, DMARAM Channel 43 Address and Interrupt Control Register */
#define DMA_CH43_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012570u)
/** Alias (User Manual Name) for DMA_CH43_ADICR.
* To use register names with standard convension, please use DMA_CH43_ADICR.
*/
#define DMA_ADICR043 (DMA_CH43_ADICR)

/** \brief 2574, DMARAM Channel 43 Configuration Register */
#define DMA_CH43_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012574u)
/** Alias (User Manual Name) for DMA_CH43_CHCFGR.
* To use register names with standard convension, please use DMA_CH43_CHCFGR.
*/
#define DMA_CHCFGR043 (DMA_CH43_CHCFGR)

/** \brief 2578, DMARAM Channel 43 Shadow Address Register */
#define DMA_CH43_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012578u)
/** Alias (User Manual Name) for DMA_CH43_SHADR.
* To use register names with standard convension, please use DMA_CH43_SHADR.
*/
#define DMA_SHADR043 (DMA_CH43_SHADR)

/** \brief 257C, DMARAM Channel 43 Control and Status Register */
#define DMA_CH43_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001257Cu)
/** Alias (User Manual Name) for DMA_CH43_CHCSR.
* To use register names with standard convension, please use DMA_CH43_CHCSR.
*/
#define DMA_CHCSR043 (DMA_CH43_CHCSR)

/** \brief 2580, DMARAM Channel 44 Read Data CRC Register */
#define DMA_CH44_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012580u)
/** Alias (User Manual Name) for DMA_CH44_RDCRCR.
* To use register names with standard convension, please use DMA_CH44_RDCRCR.
*/
#define DMA_RDCRCR044 (DMA_CH44_RDCRCR)

/** \brief 2584, DMARAM Channel 44 Source and Destination Address CRC Register */
#define DMA_CH44_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012584u)
/** Alias (User Manual Name) for DMA_CH44_SDCRCR.
* To use register names with standard convension, please use DMA_CH44_SDCRCR.
*/
#define DMA_SDCRCR044 (DMA_CH44_SDCRCR)

/** \brief 2588, DMARAM Channel 44 Source Address Register */
#define DMA_CH44_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012588u)
/** Alias (User Manual Name) for DMA_CH44_SADR.
* To use register names with standard convension, please use DMA_CH44_SADR.
*/
#define DMA_SADR044 (DMA_CH44_SADR)

/** \brief 258C, DMARAM Channel 44 Destination Address Register */
#define DMA_CH44_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001258Cu)
/** Alias (User Manual Name) for DMA_CH44_DADR.
* To use register names with standard convension, please use DMA_CH44_DADR.
*/
#define DMA_DADR044 (DMA_CH44_DADR)

/** \brief 2590, DMARAM Channel 44 Address and Interrupt Control Register */
#define DMA_CH44_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012590u)
/** Alias (User Manual Name) for DMA_CH44_ADICR.
* To use register names with standard convension, please use DMA_CH44_ADICR.
*/
#define DMA_ADICR044 (DMA_CH44_ADICR)

/** \brief 2594, DMARAM Channel 44 Configuration Register */
#define DMA_CH44_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012594u)
/** Alias (User Manual Name) for DMA_CH44_CHCFGR.
* To use register names with standard convension, please use DMA_CH44_CHCFGR.
*/
#define DMA_CHCFGR044 (DMA_CH44_CHCFGR)

/** \brief 2598, DMARAM Channel 44 Shadow Address Register */
#define DMA_CH44_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012598u)
/** Alias (User Manual Name) for DMA_CH44_SHADR.
* To use register names with standard convension, please use DMA_CH44_SHADR.
*/
#define DMA_SHADR044 (DMA_CH44_SHADR)

/** \brief 259C, DMARAM Channel 44 Control and Status Register */
#define DMA_CH44_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001259Cu)
/** Alias (User Manual Name) for DMA_CH44_CHCSR.
* To use register names with standard convension, please use DMA_CH44_CHCSR.
*/
#define DMA_CHCSR044 (DMA_CH44_CHCSR)

/** \brief 25A0, DMARAM Channel 45 Read Data CRC Register */
#define DMA_CH45_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00125A0u)
/** Alias (User Manual Name) for DMA_CH45_RDCRCR.
* To use register names with standard convension, please use DMA_CH45_RDCRCR.
*/
#define DMA_RDCRCR045 (DMA_CH45_RDCRCR)

/** \brief 25A4, DMARAM Channel 45 Source and Destination Address CRC Register */
#define DMA_CH45_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00125A4u)
/** Alias (User Manual Name) for DMA_CH45_SDCRCR.
* To use register names with standard convension, please use DMA_CH45_SDCRCR.
*/
#define DMA_SDCRCR045 (DMA_CH45_SDCRCR)

/** \brief 25A8, DMARAM Channel 45 Source Address Register */
#define DMA_CH45_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00125A8u)
/** Alias (User Manual Name) for DMA_CH45_SADR.
* To use register names with standard convension, please use DMA_CH45_SADR.
*/
#define DMA_SADR045 (DMA_CH45_SADR)

/** \brief 25AC, DMARAM Channel 45 Destination Address Register */
#define DMA_CH45_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00125ACu)
/** Alias (User Manual Name) for DMA_CH45_DADR.
* To use register names with standard convension, please use DMA_CH45_DADR.
*/
#define DMA_DADR045 (DMA_CH45_DADR)

/** \brief 25B0, DMARAM Channel 45 Address and Interrupt Control Register */
#define DMA_CH45_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00125B0u)
/** Alias (User Manual Name) for DMA_CH45_ADICR.
* To use register names with standard convension, please use DMA_CH45_ADICR.
*/
#define DMA_ADICR045 (DMA_CH45_ADICR)

/** \brief 25B4, DMARAM Channel 45 Configuration Register */
#define DMA_CH45_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00125B4u)
/** Alias (User Manual Name) for DMA_CH45_CHCFGR.
* To use register names with standard convension, please use DMA_CH45_CHCFGR.
*/
#define DMA_CHCFGR045 (DMA_CH45_CHCFGR)

/** \brief 25B8, DMARAM Channel 45 Shadow Address Register */
#define DMA_CH45_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00125B8u)
/** Alias (User Manual Name) for DMA_CH45_SHADR.
* To use register names with standard convension, please use DMA_CH45_SHADR.
*/
#define DMA_SHADR045 (DMA_CH45_SHADR)

/** \brief 25BC, DMARAM Channel 45 Control and Status Register */
#define DMA_CH45_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00125BCu)
/** Alias (User Manual Name) for DMA_CH45_CHCSR.
* To use register names with standard convension, please use DMA_CH45_CHCSR.
*/
#define DMA_CHCSR045 (DMA_CH45_CHCSR)

/** \brief 25C0, DMARAM Channel 46 Read Data CRC Register */
#define DMA_CH46_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00125C0u)
/** Alias (User Manual Name) for DMA_CH46_RDCRCR.
* To use register names with standard convension, please use DMA_CH46_RDCRCR.
*/
#define DMA_RDCRCR046 (DMA_CH46_RDCRCR)

/** \brief 25C4, DMARAM Channel 46 Source and Destination Address CRC Register */
#define DMA_CH46_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00125C4u)
/** Alias (User Manual Name) for DMA_CH46_SDCRCR.
* To use register names with standard convension, please use DMA_CH46_SDCRCR.
*/
#define DMA_SDCRCR046 (DMA_CH46_SDCRCR)

/** \brief 25C8, DMARAM Channel 46 Source Address Register */
#define DMA_CH46_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00125C8u)
/** Alias (User Manual Name) for DMA_CH46_SADR.
* To use register names with standard convension, please use DMA_CH46_SADR.
*/
#define DMA_SADR046 (DMA_CH46_SADR)

/** \brief 25CC, DMARAM Channel 46 Destination Address Register */
#define DMA_CH46_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00125CCu)
/** Alias (User Manual Name) for DMA_CH46_DADR.
* To use register names with standard convension, please use DMA_CH46_DADR.
*/
#define DMA_DADR046 (DMA_CH46_DADR)

/** \brief 25D0, DMARAM Channel 46 Address and Interrupt Control Register */
#define DMA_CH46_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00125D0u)
/** Alias (User Manual Name) for DMA_CH46_ADICR.
* To use register names with standard convension, please use DMA_CH46_ADICR.
*/
#define DMA_ADICR046 (DMA_CH46_ADICR)

/** \brief 25D4, DMARAM Channel 46 Configuration Register */
#define DMA_CH46_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00125D4u)
/** Alias (User Manual Name) for DMA_CH46_CHCFGR.
* To use register names with standard convension, please use DMA_CH46_CHCFGR.
*/
#define DMA_CHCFGR046 (DMA_CH46_CHCFGR)

/** \brief 25D8, DMARAM Channel 46 Shadow Address Register */
#define DMA_CH46_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00125D8u)
/** Alias (User Manual Name) for DMA_CH46_SHADR.
* To use register names with standard convension, please use DMA_CH46_SHADR.
*/
#define DMA_SHADR046 (DMA_CH46_SHADR)

/** \brief 25DC, DMARAM Channel 46 Control and Status Register */
#define DMA_CH46_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00125DCu)
/** Alias (User Manual Name) for DMA_CH46_CHCSR.
* To use register names with standard convension, please use DMA_CH46_CHCSR.
*/
#define DMA_CHCSR046 (DMA_CH46_CHCSR)

/** \brief 25E0, DMARAM Channel 47 Read Data CRC Register */
#define DMA_CH47_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00125E0u)
/** Alias (User Manual Name) for DMA_CH47_RDCRCR.
* To use register names with standard convension, please use DMA_CH47_RDCRCR.
*/
#define DMA_RDCRCR047 (DMA_CH47_RDCRCR)

/** \brief 25E4, DMARAM Channel 47 Source and Destination Address CRC Register */
#define DMA_CH47_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00125E4u)
/** Alias (User Manual Name) for DMA_CH47_SDCRCR.
* To use register names with standard convension, please use DMA_CH47_SDCRCR.
*/
#define DMA_SDCRCR047 (DMA_CH47_SDCRCR)

/** \brief 25E8, DMARAM Channel 47 Source Address Register */
#define DMA_CH47_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00125E8u)
/** Alias (User Manual Name) for DMA_CH47_SADR.
* To use register names with standard convension, please use DMA_CH47_SADR.
*/
#define DMA_SADR047 (DMA_CH47_SADR)

/** \brief 25EC, DMARAM Channel 47 Destination Address Register */
#define DMA_CH47_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00125ECu)
/** Alias (User Manual Name) for DMA_CH47_DADR.
* To use register names with standard convension, please use DMA_CH47_DADR.
*/
#define DMA_DADR047 (DMA_CH47_DADR)

/** \brief 25F0, DMARAM Channel 47 Address and Interrupt Control Register */
#define DMA_CH47_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00125F0u)
/** Alias (User Manual Name) for DMA_CH47_ADICR.
* To use register names with standard convension, please use DMA_CH47_ADICR.
*/
#define DMA_ADICR047 (DMA_CH47_ADICR)

/** \brief 25F4, DMARAM Channel 47 Configuration Register */
#define DMA_CH47_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00125F4u)
/** Alias (User Manual Name) for DMA_CH47_CHCFGR.
* To use register names with standard convension, please use DMA_CH47_CHCFGR.
*/
#define DMA_CHCFGR047 (DMA_CH47_CHCFGR)

/** \brief 25F8, DMARAM Channel 47 Shadow Address Register */
#define DMA_CH47_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00125F8u)
/** Alias (User Manual Name) for DMA_CH47_SHADR.
* To use register names with standard convension, please use DMA_CH47_SHADR.
*/
#define DMA_SHADR047 (DMA_CH47_SHADR)

/** \brief 25FC, DMARAM Channel 47 Control and Status Register */
#define DMA_CH47_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00125FCu)
/** Alias (User Manual Name) for DMA_CH47_CHCSR.
* To use register names with standard convension, please use DMA_CH47_CHCSR.
*/
#define DMA_CHCSR047 (DMA_CH47_CHCSR)

/** \brief 2600, DMARAM Channel 48 Read Data CRC Register */
#define DMA_CH48_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012600u)
/** Alias (User Manual Name) for DMA_CH48_RDCRCR.
* To use register names with standard convension, please use DMA_CH48_RDCRCR.
*/
#define DMA_RDCRCR048 (DMA_CH48_RDCRCR)

/** \brief 2604, DMARAM Channel 48 Source and Destination Address CRC Register */
#define DMA_CH48_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012604u)
/** Alias (User Manual Name) for DMA_CH48_SDCRCR.
* To use register names with standard convension, please use DMA_CH48_SDCRCR.
*/
#define DMA_SDCRCR048 (DMA_CH48_SDCRCR)

/** \brief 2608, DMARAM Channel 48 Source Address Register */
#define DMA_CH48_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012608u)
/** Alias (User Manual Name) for DMA_CH48_SADR.
* To use register names with standard convension, please use DMA_CH48_SADR.
*/
#define DMA_SADR048 (DMA_CH48_SADR)

/** \brief 260C, DMARAM Channel 48 Destination Address Register */
#define DMA_CH48_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001260Cu)
/** Alias (User Manual Name) for DMA_CH48_DADR.
* To use register names with standard convension, please use DMA_CH48_DADR.
*/
#define DMA_DADR048 (DMA_CH48_DADR)

/** \brief 2610, DMARAM Channel 48 Address and Interrupt Control Register */
#define DMA_CH48_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012610u)
/** Alias (User Manual Name) for DMA_CH48_ADICR.
* To use register names with standard convension, please use DMA_CH48_ADICR.
*/
#define DMA_ADICR048 (DMA_CH48_ADICR)

/** \brief 2614, DMARAM Channel 48 Configuration Register */
#define DMA_CH48_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012614u)
/** Alias (User Manual Name) for DMA_CH48_CHCFGR.
* To use register names with standard convension, please use DMA_CH48_CHCFGR.
*/
#define DMA_CHCFGR048 (DMA_CH48_CHCFGR)

/** \brief 2618, DMARAM Channel 48 Shadow Address Register */
#define DMA_CH48_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012618u)
/** Alias (User Manual Name) for DMA_CH48_SHADR.
* To use register names with standard convension, please use DMA_CH48_SHADR.
*/
#define DMA_SHADR048 (DMA_CH48_SHADR)

/** \brief 261C, DMARAM Channel 48 Control and Status Register */
#define DMA_CH48_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001261Cu)
/** Alias (User Manual Name) for DMA_CH48_CHCSR.
* To use register names with standard convension, please use DMA_CH48_CHCSR.
*/
#define DMA_CHCSR048 (DMA_CH48_CHCSR)

/** \brief 2620, DMARAM Channel 49 Read Data CRC Register */
#define DMA_CH49_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012620u)
/** Alias (User Manual Name) for DMA_CH49_RDCRCR.
* To use register names with standard convension, please use DMA_CH49_RDCRCR.
*/
#define DMA_RDCRCR049 (DMA_CH49_RDCRCR)

/** \brief 2624, DMARAM Channel 49 Source and Destination Address CRC Register */
#define DMA_CH49_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012624u)
/** Alias (User Manual Name) for DMA_CH49_SDCRCR.
* To use register names with standard convension, please use DMA_CH49_SDCRCR.
*/
#define DMA_SDCRCR049 (DMA_CH49_SDCRCR)

/** \brief 2628, DMARAM Channel 49 Source Address Register */
#define DMA_CH49_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012628u)
/** Alias (User Manual Name) for DMA_CH49_SADR.
* To use register names with standard convension, please use DMA_CH49_SADR.
*/
#define DMA_SADR049 (DMA_CH49_SADR)

/** \brief 262C, DMARAM Channel 49 Destination Address Register */
#define DMA_CH49_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001262Cu)
/** Alias (User Manual Name) for DMA_CH49_DADR.
* To use register names with standard convension, please use DMA_CH49_DADR.
*/
#define DMA_DADR049 (DMA_CH49_DADR)

/** \brief 2630, DMARAM Channel 49 Address and Interrupt Control Register */
#define DMA_CH49_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012630u)
/** Alias (User Manual Name) for DMA_CH49_ADICR.
* To use register names with standard convension, please use DMA_CH49_ADICR.
*/
#define DMA_ADICR049 (DMA_CH49_ADICR)

/** \brief 2634, DMARAM Channel 49 Configuration Register */
#define DMA_CH49_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012634u)
/** Alias (User Manual Name) for DMA_CH49_CHCFGR.
* To use register names with standard convension, please use DMA_CH49_CHCFGR.
*/
#define DMA_CHCFGR049 (DMA_CH49_CHCFGR)

/** \brief 2638, DMARAM Channel 49 Shadow Address Register */
#define DMA_CH49_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012638u)
/** Alias (User Manual Name) for DMA_CH49_SHADR.
* To use register names with standard convension, please use DMA_CH49_SHADR.
*/
#define DMA_SHADR049 (DMA_CH49_SHADR)

/** \brief 263C, DMARAM Channel 49 Control and Status Register */
#define DMA_CH49_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001263Cu)
/** Alias (User Manual Name) for DMA_CH49_CHCSR.
* To use register names with standard convension, please use DMA_CH49_CHCSR.
*/
#define DMA_CHCSR049 (DMA_CH49_CHCSR)

/** \brief 2640, DMARAM Channel 50 Read Data CRC Register */
#define DMA_CH50_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012640u)
/** Alias (User Manual Name) for DMA_CH50_RDCRCR.
* To use register names with standard convension, please use DMA_CH50_RDCRCR.
*/
#define DMA_RDCRCR050 (DMA_CH50_RDCRCR)

/** \brief 2644, DMARAM Channel 50 Source and Destination Address CRC Register */
#define DMA_CH50_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012644u)
/** Alias (User Manual Name) for DMA_CH50_SDCRCR.
* To use register names with standard convension, please use DMA_CH50_SDCRCR.
*/
#define DMA_SDCRCR050 (DMA_CH50_SDCRCR)

/** \brief 2648, DMARAM Channel 50 Source Address Register */
#define DMA_CH50_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012648u)
/** Alias (User Manual Name) for DMA_CH50_SADR.
* To use register names with standard convension, please use DMA_CH50_SADR.
*/
#define DMA_SADR050 (DMA_CH50_SADR)

/** \brief 264C, DMARAM Channel 50 Destination Address Register */
#define DMA_CH50_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001264Cu)
/** Alias (User Manual Name) for DMA_CH50_DADR.
* To use register names with standard convension, please use DMA_CH50_DADR.
*/
#define DMA_DADR050 (DMA_CH50_DADR)

/** \brief 2650, DMARAM Channel 50 Address and Interrupt Control Register */
#define DMA_CH50_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012650u)
/** Alias (User Manual Name) for DMA_CH50_ADICR.
* To use register names with standard convension, please use DMA_CH50_ADICR.
*/
#define DMA_ADICR050 (DMA_CH50_ADICR)

/** \brief 2654, DMARAM Channel 50 Configuration Register */
#define DMA_CH50_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012654u)
/** Alias (User Manual Name) for DMA_CH50_CHCFGR.
* To use register names with standard convension, please use DMA_CH50_CHCFGR.
*/
#define DMA_CHCFGR050 (DMA_CH50_CHCFGR)

/** \brief 2658, DMARAM Channel 50 Shadow Address Register */
#define DMA_CH50_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012658u)
/** Alias (User Manual Name) for DMA_CH50_SHADR.
* To use register names with standard convension, please use DMA_CH50_SHADR.
*/
#define DMA_SHADR050 (DMA_CH50_SHADR)

/** \brief 265C, DMARAM Channel 50 Control and Status Register */
#define DMA_CH50_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001265Cu)
/** Alias (User Manual Name) for DMA_CH50_CHCSR.
* To use register names with standard convension, please use DMA_CH50_CHCSR.
*/
#define DMA_CHCSR050 (DMA_CH50_CHCSR)

/** \brief 2660, DMARAM Channel 51 Read Data CRC Register */
#define DMA_CH51_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012660u)
/** Alias (User Manual Name) for DMA_CH51_RDCRCR.
* To use register names with standard convension, please use DMA_CH51_RDCRCR.
*/
#define DMA_RDCRCR051 (DMA_CH51_RDCRCR)

/** \brief 2664, DMARAM Channel 51 Source and Destination Address CRC Register */
#define DMA_CH51_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012664u)
/** Alias (User Manual Name) for DMA_CH51_SDCRCR.
* To use register names with standard convension, please use DMA_CH51_SDCRCR.
*/
#define DMA_SDCRCR051 (DMA_CH51_SDCRCR)

/** \brief 2668, DMARAM Channel 51 Source Address Register */
#define DMA_CH51_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012668u)
/** Alias (User Manual Name) for DMA_CH51_SADR.
* To use register names with standard convension, please use DMA_CH51_SADR.
*/
#define DMA_SADR051 (DMA_CH51_SADR)

/** \brief 266C, DMARAM Channel 51 Destination Address Register */
#define DMA_CH51_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001266Cu)
/** Alias (User Manual Name) for DMA_CH51_DADR.
* To use register names with standard convension, please use DMA_CH51_DADR.
*/
#define DMA_DADR051 (DMA_CH51_DADR)

/** \brief 2670, DMARAM Channel 51 Address and Interrupt Control Register */
#define DMA_CH51_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012670u)
/** Alias (User Manual Name) for DMA_CH51_ADICR.
* To use register names with standard convension, please use DMA_CH51_ADICR.
*/
#define DMA_ADICR051 (DMA_CH51_ADICR)

/** \brief 2674, DMARAM Channel 51 Configuration Register */
#define DMA_CH51_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012674u)
/** Alias (User Manual Name) for DMA_CH51_CHCFGR.
* To use register names with standard convension, please use DMA_CH51_CHCFGR.
*/
#define DMA_CHCFGR051 (DMA_CH51_CHCFGR)

/** \brief 2678, DMARAM Channel 51 Shadow Address Register */
#define DMA_CH51_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012678u)
/** Alias (User Manual Name) for DMA_CH51_SHADR.
* To use register names with standard convension, please use DMA_CH51_SHADR.
*/
#define DMA_SHADR051 (DMA_CH51_SHADR)

/** \brief 267C, DMARAM Channel 51 Control and Status Register */
#define DMA_CH51_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001267Cu)
/** Alias (User Manual Name) for DMA_CH51_CHCSR.
* To use register names with standard convension, please use DMA_CH51_CHCSR.
*/
#define DMA_CHCSR051 (DMA_CH51_CHCSR)

/** \brief 2680, DMARAM Channel 52 Read Data CRC Register */
#define DMA_CH52_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012680u)
/** Alias (User Manual Name) for DMA_CH52_RDCRCR.
* To use register names with standard convension, please use DMA_CH52_RDCRCR.
*/
#define DMA_RDCRCR052 (DMA_CH52_RDCRCR)

/** \brief 2684, DMARAM Channel 52 Source and Destination Address CRC Register */
#define DMA_CH52_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012684u)
/** Alias (User Manual Name) for DMA_CH52_SDCRCR.
* To use register names with standard convension, please use DMA_CH52_SDCRCR.
*/
#define DMA_SDCRCR052 (DMA_CH52_SDCRCR)

/** \brief 2688, DMARAM Channel 52 Source Address Register */
#define DMA_CH52_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012688u)
/** Alias (User Manual Name) for DMA_CH52_SADR.
* To use register names with standard convension, please use DMA_CH52_SADR.
*/
#define DMA_SADR052 (DMA_CH52_SADR)

/** \brief 268C, DMARAM Channel 52 Destination Address Register */
#define DMA_CH52_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001268Cu)
/** Alias (User Manual Name) for DMA_CH52_DADR.
* To use register names with standard convension, please use DMA_CH52_DADR.
*/
#define DMA_DADR052 (DMA_CH52_DADR)

/** \brief 2690, DMARAM Channel 52 Address and Interrupt Control Register */
#define DMA_CH52_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012690u)
/** Alias (User Manual Name) for DMA_CH52_ADICR.
* To use register names with standard convension, please use DMA_CH52_ADICR.
*/
#define DMA_ADICR052 (DMA_CH52_ADICR)

/** \brief 2694, DMARAM Channel 52 Configuration Register */
#define DMA_CH52_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012694u)
/** Alias (User Manual Name) for DMA_CH52_CHCFGR.
* To use register names with standard convension, please use DMA_CH52_CHCFGR.
*/
#define DMA_CHCFGR052 (DMA_CH52_CHCFGR)

/** \brief 2698, DMARAM Channel 52 Shadow Address Register */
#define DMA_CH52_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012698u)
/** Alias (User Manual Name) for DMA_CH52_SHADR.
* To use register names with standard convension, please use DMA_CH52_SHADR.
*/
#define DMA_SHADR052 (DMA_CH52_SHADR)

/** \brief 269C, DMARAM Channel 52 Control and Status Register */
#define DMA_CH52_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001269Cu)
/** Alias (User Manual Name) for DMA_CH52_CHCSR.
* To use register names with standard convension, please use DMA_CH52_CHCSR.
*/
#define DMA_CHCSR052 (DMA_CH52_CHCSR)

/** \brief 26A0, DMARAM Channel 53 Read Data CRC Register */
#define DMA_CH53_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00126A0u)
/** Alias (User Manual Name) for DMA_CH53_RDCRCR.
* To use register names with standard convension, please use DMA_CH53_RDCRCR.
*/
#define DMA_RDCRCR053 (DMA_CH53_RDCRCR)

/** \brief 26A4, DMARAM Channel 53 Source and Destination Address CRC Register */
#define DMA_CH53_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00126A4u)
/** Alias (User Manual Name) for DMA_CH53_SDCRCR.
* To use register names with standard convension, please use DMA_CH53_SDCRCR.
*/
#define DMA_SDCRCR053 (DMA_CH53_SDCRCR)

/** \brief 26A8, DMARAM Channel 53 Source Address Register */
#define DMA_CH53_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00126A8u)
/** Alias (User Manual Name) for DMA_CH53_SADR.
* To use register names with standard convension, please use DMA_CH53_SADR.
*/
#define DMA_SADR053 (DMA_CH53_SADR)

/** \brief 26AC, DMARAM Channel 53 Destination Address Register */
#define DMA_CH53_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00126ACu)
/** Alias (User Manual Name) for DMA_CH53_DADR.
* To use register names with standard convension, please use DMA_CH53_DADR.
*/
#define DMA_DADR053 (DMA_CH53_DADR)

/** \brief 26B0, DMARAM Channel 53 Address and Interrupt Control Register */
#define DMA_CH53_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00126B0u)
/** Alias (User Manual Name) for DMA_CH53_ADICR.
* To use register names with standard convension, please use DMA_CH53_ADICR.
*/
#define DMA_ADICR053 (DMA_CH53_ADICR)

/** \brief 26B4, DMARAM Channel 53 Configuration Register */
#define DMA_CH53_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00126B4u)
/** Alias (User Manual Name) for DMA_CH53_CHCFGR.
* To use register names with standard convension, please use DMA_CH53_CHCFGR.
*/
#define DMA_CHCFGR053 (DMA_CH53_CHCFGR)

/** \brief 26B8, DMARAM Channel 53 Shadow Address Register */
#define DMA_CH53_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00126B8u)
/** Alias (User Manual Name) for DMA_CH53_SHADR.
* To use register names with standard convension, please use DMA_CH53_SHADR.
*/
#define DMA_SHADR053 (DMA_CH53_SHADR)

/** \brief 26BC, DMARAM Channel 53 Control and Status Register */
#define DMA_CH53_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00126BCu)
/** Alias (User Manual Name) for DMA_CH53_CHCSR.
* To use register names with standard convension, please use DMA_CH53_CHCSR.
*/
#define DMA_CHCSR053 (DMA_CH53_CHCSR)

/** \brief 26C0, DMARAM Channel 54 Read Data CRC Register */
#define DMA_CH54_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00126C0u)
/** Alias (User Manual Name) for DMA_CH54_RDCRCR.
* To use register names with standard convension, please use DMA_CH54_RDCRCR.
*/
#define DMA_RDCRCR054 (DMA_CH54_RDCRCR)

/** \brief 26C4, DMARAM Channel 54 Source and Destination Address CRC Register */
#define DMA_CH54_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00126C4u)
/** Alias (User Manual Name) for DMA_CH54_SDCRCR.
* To use register names with standard convension, please use DMA_CH54_SDCRCR.
*/
#define DMA_SDCRCR054 (DMA_CH54_SDCRCR)

/** \brief 26C8, DMARAM Channel 54 Source Address Register */
#define DMA_CH54_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00126C8u)
/** Alias (User Manual Name) for DMA_CH54_SADR.
* To use register names with standard convension, please use DMA_CH54_SADR.
*/
#define DMA_SADR054 (DMA_CH54_SADR)

/** \brief 26CC, DMARAM Channel 54 Destination Address Register */
#define DMA_CH54_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00126CCu)
/** Alias (User Manual Name) for DMA_CH54_DADR.
* To use register names with standard convension, please use DMA_CH54_DADR.
*/
#define DMA_DADR054 (DMA_CH54_DADR)

/** \brief 26D0, DMARAM Channel 54 Address and Interrupt Control Register */
#define DMA_CH54_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00126D0u)
/** Alias (User Manual Name) for DMA_CH54_ADICR.
* To use register names with standard convension, please use DMA_CH54_ADICR.
*/
#define DMA_ADICR054 (DMA_CH54_ADICR)

/** \brief 26D4, DMARAM Channel 54 Configuration Register */
#define DMA_CH54_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00126D4u)
/** Alias (User Manual Name) for DMA_CH54_CHCFGR.
* To use register names with standard convension, please use DMA_CH54_CHCFGR.
*/
#define DMA_CHCFGR054 (DMA_CH54_CHCFGR)

/** \brief 26D8, DMARAM Channel 54 Shadow Address Register */
#define DMA_CH54_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00126D8u)
/** Alias (User Manual Name) for DMA_CH54_SHADR.
* To use register names with standard convension, please use DMA_CH54_SHADR.
*/
#define DMA_SHADR054 (DMA_CH54_SHADR)

/** \brief 26DC, DMARAM Channel 54 Control and Status Register */
#define DMA_CH54_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00126DCu)
/** Alias (User Manual Name) for DMA_CH54_CHCSR.
* To use register names with standard convension, please use DMA_CH54_CHCSR.
*/
#define DMA_CHCSR054 (DMA_CH54_CHCSR)

/** \brief 26E0, DMARAM Channel 55 Read Data CRC Register */
#define DMA_CH55_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00126E0u)
/** Alias (User Manual Name) for DMA_CH55_RDCRCR.
* To use register names with standard convension, please use DMA_CH55_RDCRCR.
*/
#define DMA_RDCRCR055 (DMA_CH55_RDCRCR)

/** \brief 26E4, DMARAM Channel 55 Source and Destination Address CRC Register */
#define DMA_CH55_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00126E4u)
/** Alias (User Manual Name) for DMA_CH55_SDCRCR.
* To use register names with standard convension, please use DMA_CH55_SDCRCR.
*/
#define DMA_SDCRCR055 (DMA_CH55_SDCRCR)

/** \brief 26E8, DMARAM Channel 55 Source Address Register */
#define DMA_CH55_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00126E8u)
/** Alias (User Manual Name) for DMA_CH55_SADR.
* To use register names with standard convension, please use DMA_CH55_SADR.
*/
#define DMA_SADR055 (DMA_CH55_SADR)

/** \brief 26EC, DMARAM Channel 55 Destination Address Register */
#define DMA_CH55_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00126ECu)
/** Alias (User Manual Name) for DMA_CH55_DADR.
* To use register names with standard convension, please use DMA_CH55_DADR.
*/
#define DMA_DADR055 (DMA_CH55_DADR)

/** \brief 26F0, DMARAM Channel 55 Address and Interrupt Control Register */
#define DMA_CH55_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00126F0u)
/** Alias (User Manual Name) for DMA_CH55_ADICR.
* To use register names with standard convension, please use DMA_CH55_ADICR.
*/
#define DMA_ADICR055 (DMA_CH55_ADICR)

/** \brief 26F4, DMARAM Channel 55 Configuration Register */
#define DMA_CH55_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00126F4u)
/** Alias (User Manual Name) for DMA_CH55_CHCFGR.
* To use register names with standard convension, please use DMA_CH55_CHCFGR.
*/
#define DMA_CHCFGR055 (DMA_CH55_CHCFGR)

/** \brief 26F8, DMARAM Channel 55 Shadow Address Register */
#define DMA_CH55_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00126F8u)
/** Alias (User Manual Name) for DMA_CH55_SHADR.
* To use register names with standard convension, please use DMA_CH55_SHADR.
*/
#define DMA_SHADR055 (DMA_CH55_SHADR)

/** \brief 26FC, DMARAM Channel 55 Control and Status Register */
#define DMA_CH55_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00126FCu)
/** Alias (User Manual Name) for DMA_CH55_CHCSR.
* To use register names with standard convension, please use DMA_CH55_CHCSR.
*/
#define DMA_CHCSR055 (DMA_CH55_CHCSR)

/** \brief 2700, DMARAM Channel 56 Read Data CRC Register */
#define DMA_CH56_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012700u)
/** Alias (User Manual Name) for DMA_CH56_RDCRCR.
* To use register names with standard convension, please use DMA_CH56_RDCRCR.
*/
#define DMA_RDCRCR056 (DMA_CH56_RDCRCR)

/** \brief 2704, DMARAM Channel 56 Source and Destination Address CRC Register */
#define DMA_CH56_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012704u)
/** Alias (User Manual Name) for DMA_CH56_SDCRCR.
* To use register names with standard convension, please use DMA_CH56_SDCRCR.
*/
#define DMA_SDCRCR056 (DMA_CH56_SDCRCR)

/** \brief 2708, DMARAM Channel 56 Source Address Register */
#define DMA_CH56_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012708u)
/** Alias (User Manual Name) for DMA_CH56_SADR.
* To use register names with standard convension, please use DMA_CH56_SADR.
*/
#define DMA_SADR056 (DMA_CH56_SADR)

/** \brief 270C, DMARAM Channel 56 Destination Address Register */
#define DMA_CH56_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001270Cu)
/** Alias (User Manual Name) for DMA_CH56_DADR.
* To use register names with standard convension, please use DMA_CH56_DADR.
*/
#define DMA_DADR056 (DMA_CH56_DADR)

/** \brief 2710, DMARAM Channel 56 Address and Interrupt Control Register */
#define DMA_CH56_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012710u)
/** Alias (User Manual Name) for DMA_CH56_ADICR.
* To use register names with standard convension, please use DMA_CH56_ADICR.
*/
#define DMA_ADICR056 (DMA_CH56_ADICR)

/** \brief 2714, DMARAM Channel 56 Configuration Register */
#define DMA_CH56_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012714u)
/** Alias (User Manual Name) for DMA_CH56_CHCFGR.
* To use register names with standard convension, please use DMA_CH56_CHCFGR.
*/
#define DMA_CHCFGR056 (DMA_CH56_CHCFGR)

/** \brief 2718, DMARAM Channel 56 Shadow Address Register */
#define DMA_CH56_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012718u)
/** Alias (User Manual Name) for DMA_CH56_SHADR.
* To use register names with standard convension, please use DMA_CH56_SHADR.
*/
#define DMA_SHADR056 (DMA_CH56_SHADR)

/** \brief 271C, DMARAM Channel 56 Control and Status Register */
#define DMA_CH56_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001271Cu)
/** Alias (User Manual Name) for DMA_CH56_CHCSR.
* To use register names with standard convension, please use DMA_CH56_CHCSR.
*/
#define DMA_CHCSR056 (DMA_CH56_CHCSR)

/** \brief 2720, DMARAM Channel 57 Read Data CRC Register */
#define DMA_CH57_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012720u)
/** Alias (User Manual Name) for DMA_CH57_RDCRCR.
* To use register names with standard convension, please use DMA_CH57_RDCRCR.
*/
#define DMA_RDCRCR057 (DMA_CH57_RDCRCR)

/** \brief 2724, DMARAM Channel 57 Source and Destination Address CRC Register */
#define DMA_CH57_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012724u)
/** Alias (User Manual Name) for DMA_CH57_SDCRCR.
* To use register names with standard convension, please use DMA_CH57_SDCRCR.
*/
#define DMA_SDCRCR057 (DMA_CH57_SDCRCR)

/** \brief 2728, DMARAM Channel 57 Source Address Register */
#define DMA_CH57_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012728u)
/** Alias (User Manual Name) for DMA_CH57_SADR.
* To use register names with standard convension, please use DMA_CH57_SADR.
*/
#define DMA_SADR057 (DMA_CH57_SADR)

/** \brief 272C, DMARAM Channel 57 Destination Address Register */
#define DMA_CH57_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001272Cu)
/** Alias (User Manual Name) for DMA_CH57_DADR.
* To use register names with standard convension, please use DMA_CH57_DADR.
*/
#define DMA_DADR057 (DMA_CH57_DADR)

/** \brief 2730, DMARAM Channel 57 Address and Interrupt Control Register */
#define DMA_CH57_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012730u)
/** Alias (User Manual Name) for DMA_CH57_ADICR.
* To use register names with standard convension, please use DMA_CH57_ADICR.
*/
#define DMA_ADICR057 (DMA_CH57_ADICR)

/** \brief 2734, DMARAM Channel 57 Configuration Register */
#define DMA_CH57_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012734u)
/** Alias (User Manual Name) for DMA_CH57_CHCFGR.
* To use register names with standard convension, please use DMA_CH57_CHCFGR.
*/
#define DMA_CHCFGR057 (DMA_CH57_CHCFGR)

/** \brief 2738, DMARAM Channel 57 Shadow Address Register */
#define DMA_CH57_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012738u)
/** Alias (User Manual Name) for DMA_CH57_SHADR.
* To use register names with standard convension, please use DMA_CH57_SHADR.
*/
#define DMA_SHADR057 (DMA_CH57_SHADR)

/** \brief 273C, DMARAM Channel 57 Control and Status Register */
#define DMA_CH57_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001273Cu)
/** Alias (User Manual Name) for DMA_CH57_CHCSR.
* To use register names with standard convension, please use DMA_CH57_CHCSR.
*/
#define DMA_CHCSR057 (DMA_CH57_CHCSR)

/** \brief 2740, DMARAM Channel 58 Read Data CRC Register */
#define DMA_CH58_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012740u)
/** Alias (User Manual Name) for DMA_CH58_RDCRCR.
* To use register names with standard convension, please use DMA_CH58_RDCRCR.
*/
#define DMA_RDCRCR058 (DMA_CH58_RDCRCR)

/** \brief 2744, DMARAM Channel 58 Source and Destination Address CRC Register */
#define DMA_CH58_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012744u)
/** Alias (User Manual Name) for DMA_CH58_SDCRCR.
* To use register names with standard convension, please use DMA_CH58_SDCRCR.
*/
#define DMA_SDCRCR058 (DMA_CH58_SDCRCR)

/** \brief 2748, DMARAM Channel 58 Source Address Register */
#define DMA_CH58_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012748u)
/** Alias (User Manual Name) for DMA_CH58_SADR.
* To use register names with standard convension, please use DMA_CH58_SADR.
*/
#define DMA_SADR058 (DMA_CH58_SADR)

/** \brief 274C, DMARAM Channel 58 Destination Address Register */
#define DMA_CH58_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001274Cu)
/** Alias (User Manual Name) for DMA_CH58_DADR.
* To use register names with standard convension, please use DMA_CH58_DADR.
*/
#define DMA_DADR058 (DMA_CH58_DADR)

/** \brief 2750, DMARAM Channel 58 Address and Interrupt Control Register */
#define DMA_CH58_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012750u)
/** Alias (User Manual Name) for DMA_CH58_ADICR.
* To use register names with standard convension, please use DMA_CH58_ADICR.
*/
#define DMA_ADICR058 (DMA_CH58_ADICR)

/** \brief 2754, DMARAM Channel 58 Configuration Register */
#define DMA_CH58_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012754u)
/** Alias (User Manual Name) for DMA_CH58_CHCFGR.
* To use register names with standard convension, please use DMA_CH58_CHCFGR.
*/
#define DMA_CHCFGR058 (DMA_CH58_CHCFGR)

/** \brief 2758, DMARAM Channel 58 Shadow Address Register */
#define DMA_CH58_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012758u)
/** Alias (User Manual Name) for DMA_CH58_SHADR.
* To use register names with standard convension, please use DMA_CH58_SHADR.
*/
#define DMA_SHADR058 (DMA_CH58_SHADR)

/** \brief 275C, DMARAM Channel 58 Control and Status Register */
#define DMA_CH58_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001275Cu)
/** Alias (User Manual Name) for DMA_CH58_CHCSR.
* To use register names with standard convension, please use DMA_CH58_CHCSR.
*/
#define DMA_CHCSR058 (DMA_CH58_CHCSR)

/** \brief 2760, DMARAM Channel 59 Read Data CRC Register */
#define DMA_CH59_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012760u)
/** Alias (User Manual Name) for DMA_CH59_RDCRCR.
* To use register names with standard convension, please use DMA_CH59_RDCRCR.
*/
#define DMA_RDCRCR059 (DMA_CH59_RDCRCR)

/** \brief 2764, DMARAM Channel 59 Source and Destination Address CRC Register */
#define DMA_CH59_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012764u)
/** Alias (User Manual Name) for DMA_CH59_SDCRCR.
* To use register names with standard convension, please use DMA_CH59_SDCRCR.
*/
#define DMA_SDCRCR059 (DMA_CH59_SDCRCR)

/** \brief 2768, DMARAM Channel 59 Source Address Register */
#define DMA_CH59_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012768u)
/** Alias (User Manual Name) for DMA_CH59_SADR.
* To use register names with standard convension, please use DMA_CH59_SADR.
*/
#define DMA_SADR059 (DMA_CH59_SADR)

/** \brief 276C, DMARAM Channel 59 Destination Address Register */
#define DMA_CH59_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001276Cu)
/** Alias (User Manual Name) for DMA_CH59_DADR.
* To use register names with standard convension, please use DMA_CH59_DADR.
*/
#define DMA_DADR059 (DMA_CH59_DADR)

/** \brief 2770, DMARAM Channel 59 Address and Interrupt Control Register */
#define DMA_CH59_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012770u)
/** Alias (User Manual Name) for DMA_CH59_ADICR.
* To use register names with standard convension, please use DMA_CH59_ADICR.
*/
#define DMA_ADICR059 (DMA_CH59_ADICR)

/** \brief 2774, DMARAM Channel 59 Configuration Register */
#define DMA_CH59_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012774u)
/** Alias (User Manual Name) for DMA_CH59_CHCFGR.
* To use register names with standard convension, please use DMA_CH59_CHCFGR.
*/
#define DMA_CHCFGR059 (DMA_CH59_CHCFGR)

/** \brief 2778, DMARAM Channel 59 Shadow Address Register */
#define DMA_CH59_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012778u)
/** Alias (User Manual Name) for DMA_CH59_SHADR.
* To use register names with standard convension, please use DMA_CH59_SHADR.
*/
#define DMA_SHADR059 (DMA_CH59_SHADR)

/** \brief 277C, DMARAM Channel 59 Control and Status Register */
#define DMA_CH59_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001277Cu)
/** Alias (User Manual Name) for DMA_CH59_CHCSR.
* To use register names with standard convension, please use DMA_CH59_CHCSR.
*/
#define DMA_CHCSR059 (DMA_CH59_CHCSR)

/** \brief 2780, DMARAM Channel 60 Read Data CRC Register */
#define DMA_CH60_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012780u)
/** Alias (User Manual Name) for DMA_CH60_RDCRCR.
* To use register names with standard convension, please use DMA_CH60_RDCRCR.
*/
#define DMA_RDCRCR060 (DMA_CH60_RDCRCR)

/** \brief 2784, DMARAM Channel 60 Source and Destination Address CRC Register */
#define DMA_CH60_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012784u)
/** Alias (User Manual Name) for DMA_CH60_SDCRCR.
* To use register names with standard convension, please use DMA_CH60_SDCRCR.
*/
#define DMA_SDCRCR060 (DMA_CH60_SDCRCR)

/** \brief 2788, DMARAM Channel 60 Source Address Register */
#define DMA_CH60_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012788u)
/** Alias (User Manual Name) for DMA_CH60_SADR.
* To use register names with standard convension, please use DMA_CH60_SADR.
*/
#define DMA_SADR060 (DMA_CH60_SADR)

/** \brief 278C, DMARAM Channel 60 Destination Address Register */
#define DMA_CH60_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001278Cu)
/** Alias (User Manual Name) for DMA_CH60_DADR.
* To use register names with standard convension, please use DMA_CH60_DADR.
*/
#define DMA_DADR060 (DMA_CH60_DADR)

/** \brief 2790, DMARAM Channel 60 Address and Interrupt Control Register */
#define DMA_CH60_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012790u)
/** Alias (User Manual Name) for DMA_CH60_ADICR.
* To use register names with standard convension, please use DMA_CH60_ADICR.
*/
#define DMA_ADICR060 (DMA_CH60_ADICR)

/** \brief 2794, DMARAM Channel 60 Configuration Register */
#define DMA_CH60_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012794u)
/** Alias (User Manual Name) for DMA_CH60_CHCFGR.
* To use register names with standard convension, please use DMA_CH60_CHCFGR.
*/
#define DMA_CHCFGR060 (DMA_CH60_CHCFGR)

/** \brief 2798, DMARAM Channel 60 Shadow Address Register */
#define DMA_CH60_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012798u)
/** Alias (User Manual Name) for DMA_CH60_SHADR.
* To use register names with standard convension, please use DMA_CH60_SHADR.
*/
#define DMA_SHADR060 (DMA_CH60_SHADR)

/** \brief 279C, DMARAM Channel 60 Control and Status Register */
#define DMA_CH60_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001279Cu)
/** Alias (User Manual Name) for DMA_CH60_CHCSR.
* To use register names with standard convension, please use DMA_CH60_CHCSR.
*/
#define DMA_CHCSR060 (DMA_CH60_CHCSR)

/** \brief 27A0, DMARAM Channel 61 Read Data CRC Register */
#define DMA_CH61_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00127A0u)
/** Alias (User Manual Name) for DMA_CH61_RDCRCR.
* To use register names with standard convension, please use DMA_CH61_RDCRCR.
*/
#define DMA_RDCRCR061 (DMA_CH61_RDCRCR)

/** \brief 27A4, DMARAM Channel 61 Source and Destination Address CRC Register */
#define DMA_CH61_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00127A4u)
/** Alias (User Manual Name) for DMA_CH61_SDCRCR.
* To use register names with standard convension, please use DMA_CH61_SDCRCR.
*/
#define DMA_SDCRCR061 (DMA_CH61_SDCRCR)

/** \brief 27A8, DMARAM Channel 61 Source Address Register */
#define DMA_CH61_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00127A8u)
/** Alias (User Manual Name) for DMA_CH61_SADR.
* To use register names with standard convension, please use DMA_CH61_SADR.
*/
#define DMA_SADR061 (DMA_CH61_SADR)

/** \brief 27AC, DMARAM Channel 61 Destination Address Register */
#define DMA_CH61_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00127ACu)
/** Alias (User Manual Name) for DMA_CH61_DADR.
* To use register names with standard convension, please use DMA_CH61_DADR.
*/
#define DMA_DADR061 (DMA_CH61_DADR)

/** \brief 27B0, DMARAM Channel 61 Address and Interrupt Control Register */
#define DMA_CH61_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00127B0u)
/** Alias (User Manual Name) for DMA_CH61_ADICR.
* To use register names with standard convension, please use DMA_CH61_ADICR.
*/
#define DMA_ADICR061 (DMA_CH61_ADICR)

/** \brief 27B4, DMARAM Channel 61 Configuration Register */
#define DMA_CH61_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00127B4u)
/** Alias (User Manual Name) for DMA_CH61_CHCFGR.
* To use register names with standard convension, please use DMA_CH61_CHCFGR.
*/
#define DMA_CHCFGR061 (DMA_CH61_CHCFGR)

/** \brief 27B8, DMARAM Channel 61 Shadow Address Register */
#define DMA_CH61_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00127B8u)
/** Alias (User Manual Name) for DMA_CH61_SHADR.
* To use register names with standard convension, please use DMA_CH61_SHADR.
*/
#define DMA_SHADR061 (DMA_CH61_SHADR)

/** \brief 27BC, DMARAM Channel 61 Control and Status Register */
#define DMA_CH61_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00127BCu)
/** Alias (User Manual Name) for DMA_CH61_CHCSR.
* To use register names with standard convension, please use DMA_CH61_CHCSR.
*/
#define DMA_CHCSR061 (DMA_CH61_CHCSR)

/** \brief 27C0, DMARAM Channel 62 Read Data CRC Register */
#define DMA_CH62_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00127C0u)
/** Alias (User Manual Name) for DMA_CH62_RDCRCR.
* To use register names with standard convension, please use DMA_CH62_RDCRCR.
*/
#define DMA_RDCRCR062 (DMA_CH62_RDCRCR)

/** \brief 27C4, DMARAM Channel 62 Source and Destination Address CRC Register */
#define DMA_CH62_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00127C4u)
/** Alias (User Manual Name) for DMA_CH62_SDCRCR.
* To use register names with standard convension, please use DMA_CH62_SDCRCR.
*/
#define DMA_SDCRCR062 (DMA_CH62_SDCRCR)

/** \brief 27C8, DMARAM Channel 62 Source Address Register */
#define DMA_CH62_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00127C8u)
/** Alias (User Manual Name) for DMA_CH62_SADR.
* To use register names with standard convension, please use DMA_CH62_SADR.
*/
#define DMA_SADR062 (DMA_CH62_SADR)

/** \brief 27CC, DMARAM Channel 62 Destination Address Register */
#define DMA_CH62_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00127CCu)
/** Alias (User Manual Name) for DMA_CH62_DADR.
* To use register names with standard convension, please use DMA_CH62_DADR.
*/
#define DMA_DADR062 (DMA_CH62_DADR)

/** \brief 27D0, DMARAM Channel 62 Address and Interrupt Control Register */
#define DMA_CH62_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00127D0u)
/** Alias (User Manual Name) for DMA_CH62_ADICR.
* To use register names with standard convension, please use DMA_CH62_ADICR.
*/
#define DMA_ADICR062 (DMA_CH62_ADICR)

/** \brief 27D4, DMARAM Channel 62 Configuration Register */
#define DMA_CH62_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00127D4u)
/** Alias (User Manual Name) for DMA_CH62_CHCFGR.
* To use register names with standard convension, please use DMA_CH62_CHCFGR.
*/
#define DMA_CHCFGR062 (DMA_CH62_CHCFGR)

/** \brief 27D8, DMARAM Channel 62 Shadow Address Register */
#define DMA_CH62_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00127D8u)
/** Alias (User Manual Name) for DMA_CH62_SHADR.
* To use register names with standard convension, please use DMA_CH62_SHADR.
*/
#define DMA_SHADR062 (DMA_CH62_SHADR)

/** \brief 27DC, DMARAM Channel 62 Control and Status Register */
#define DMA_CH62_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00127DCu)
/** Alias (User Manual Name) for DMA_CH62_CHCSR.
* To use register names with standard convension, please use DMA_CH62_CHCSR.
*/
#define DMA_CHCSR062 (DMA_CH62_CHCSR)

/** \brief 27E0, DMARAM Channel 63 Read Data CRC Register */
#define DMA_CH63_RDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00127E0u)
/** Alias (User Manual Name) for DMA_CH63_RDCRCR.
* To use register names with standard convension, please use DMA_CH63_RDCRCR.
*/
#define DMA_RDCRCR063 (DMA_CH63_RDCRCR)

/** \brief 27E4, DMARAM Channel 63 Source and Destination Address CRC Register */
#define DMA_CH63_SDCRCR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00127E4u)
/** Alias (User Manual Name) for DMA_CH63_SDCRCR.
* To use register names with standard convension, please use DMA_CH63_SDCRCR.
*/
#define DMA_SDCRCR063 (DMA_CH63_SDCRCR)

/** \brief 27E8, DMARAM Channel 63 Source Address Register */
#define DMA_CH63_SADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00127E8u)
/** Alias (User Manual Name) for DMA_CH63_SADR.
* To use register names with standard convension, please use DMA_CH63_SADR.
*/
#define DMA_SADR063 (DMA_CH63_SADR)

/** \brief 27EC, DMARAM Channel 63 Destination Address Register */
#define DMA_CH63_DADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00127ECu)
/** Alias (User Manual Name) for DMA_CH63_DADR.
* To use register names with standard convension, please use DMA_CH63_DADR.
*/
#define DMA_DADR063 (DMA_CH63_DADR)

/** \brief 27F0, DMARAM Channel 63 Address and Interrupt Control Register */
#define DMA_CH63_ADICR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00127F0u)
/** Alias (User Manual Name) for DMA_CH63_ADICR.
* To use register names with standard convension, please use DMA_CH63_ADICR.
*/
#define DMA_ADICR063 (DMA_CH63_ADICR)

/** \brief 27F4, DMARAM Channel 63 Configuration Register */
#define DMA_CH63_CHCFGR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00127F4u)
/** Alias (User Manual Name) for DMA_CH63_CHCFGR.
* To use register names with standard convension, please use DMA_CH63_CHCFGR.
*/
#define DMA_CHCFGR063 (DMA_CH63_CHCFGR)

/** \brief 27F8, DMARAM Channel 63 Shadow Address Register */
#define DMA_CH63_SHADR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00127F8u)
/** Alias (User Manual Name) for DMA_CH63_SHADR.
* To use register names with standard convension, please use DMA_CH63_SHADR.
*/
#define DMA_SHADR063 (DMA_CH63_SHADR)

/** \brief 27FC, DMARAM Channel 63 Control and Status Register */
#define DMA_CH63_CHCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00127FCu)
/** Alias (User Manual Name) for DMA_CH63_CHCSR.
* To use register names with standard convension, please use DMA_CH63_CHCSR.
*/
#define DMA_CHCSR063 (DMA_CH63_CHCSR)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXDMA_REG_H */
