/**
 * \file IfxDma_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: DMA_its_MCSFR.xml
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
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
 * \defgroup IfxLld_Dma_Cfg Dma address
 * \ingroup IfxLld_Dma
 * 
 * \defgroup IfxLld_Dma_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Dma_Cfg
 * 
 * \defgroup IfxLld_Dma_Cfg_Dma 2-DMA
 * \ingroup IfxLld_Dma_Cfg
 * 
 */
#ifndef IFXDMA_REG_H
#define IFXDMA_REG_H 1
/******************************************************************************/
#include "IfxDma_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Dma_Cfg_BaseAddress
 * \{  */

/** \brief  DMA object */
#define MODULE_DMA /*lint --e(923)*/ (*(Ifx_DMA*)0xF0010000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dma_Cfg_Dma
 * \{  */

/** \brief  40, Access Enable Register 00 */
#define DMA_ACCEN00 /*lint --e(923)*/ (*(volatile Ifx_DMA_ACCEN00*)0xF0010040u)

/** \brief  44, Access Enable Register 01 */
#define DMA_ACCEN01 /*lint --e(923)*/ (*(volatile Ifx_DMA_ACCEN01*)0xF0010044u)

/** \brief  48, Access Enable Register 10 */
#define DMA_ACCEN10 /*lint --e(923)*/ (*(volatile Ifx_DMA_ACCEN10*)0xF0010048u)

/** \brief  4C, Access Enable Register 11 */
#define DMA_ACCEN11 /*lint --e(923)*/ (*(volatile Ifx_DMA_ACCEN11*)0xF001004Cu)

/** \brief  50, Access Enable Register 20 */
#define DMA_ACCEN20 /*lint --e(923)*/ (*(volatile Ifx_DMA_ACCEN20*)0xF0010050u)

/** \brief  54, Access Enable Register 21 */
#define DMA_ACCEN21 /*lint --e(923)*/ (*(volatile Ifx_DMA_ACCEN21*)0xF0010054u)

/** \brief  58, Access Enable Register 30 */
#define DMA_ACCEN30 /*lint --e(923)*/ (*(volatile Ifx_DMA_ACCEN30*)0xF0010058u)

/** \brief  5C, Access Enable Register 31 */
#define DMA_ACCEN31 /*lint --e(923)*/ (*(volatile Ifx_DMA_ACCEN31*)0xF001005Cu)

/** \brief  128, DMA Clear Error Register */
#define DMA_BLK0_CLRE /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CLRE*)0xF0010128u)

/** Alias (User Manual Name) for DMA_BLK0_CLRE.
* To use register names with standard convension, please use DMA_BLK0_CLRE.
*/
#define	DMA_CLRE0	(DMA_BLK0_CLRE)

/** \brief  120, DMA Enable Error Register */
#define DMA_BLK0_EER /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_EER*)0xF0010120u)

/** Alias (User Manual Name) for DMA_BLK0_EER.
* To use register names with standard convension, please use DMA_BLK0_EER.
*/
#define	DMA_EER0	(DMA_BLK0_EER)

/** \brief  124, DMA Error Status Register */
#define DMA_BLK0_ERRSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ERRSR*)0xF0010124u)

/** Alias (User Manual Name) for DMA_BLK0_ERRSR.
* To use register names with standard convension, please use DMA_BLK0_ERRSR.
*/
#define	DMA_ERRSR0	(DMA_BLK0_ERRSR)

/** \brief  190, DMA Move Engine Channel Address and Interrupt Control Register */
#define DMA_BLK0_ME_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_ADICR*)0xF0010190u)

/** Alias (User Manual Name) for DMA_BLK0_ME_ADICR.
* To use register names with standard convension, please use DMA_BLK0_ME_ADICR.
*/
#define	DMA_ME0ADICR	(DMA_BLK0_ME_ADICR)

/** \brief  194, DMA Move Engine Channel Control Register */
#define DMA_BLK0_ME_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_CHCR*)0xF0010194u)

/** Alias (User Manual Name) for DMA_BLK0_ME_CHCR.
* To use register names with standard convension, please use DMA_BLK0_ME_CHCR.
*/
#define	DMA_ME0CHCR	(DMA_BLK0_ME_CHCR)

/** \brief  19C, DMA Move Engine Channel Status Register */
#define DMA_BLK0_ME_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_CHSR*)0xF001019Cu)

/** Alias (User Manual Name) for DMA_BLK0_ME_CHSR.
* To use register names with standard convension, please use DMA_BLK0_ME_CHSR.
*/
#define	DMA_ME0CHSR	(DMA_BLK0_ME_CHSR)

/** \brief  18C, DMA Move Engine Channel Destination Address Register x */
#define DMA_BLK0_ME_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_DADR*)0xF001018Cu)

/** Alias (User Manual Name) for DMA_BLK0_ME_DADR.
* To use register names with standard convension, please use DMA_BLK0_ME_DADR.
*/
#define	DMA_ME0DADR	(DMA_BLK0_ME_DADR)

/** \brief  140, DMA Move Engine Read Register 0 */
#define DMA_BLK0_ME_R0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R0*)0xF0010140u)

/** Alias (User Manual Name) for DMA_BLK0_ME_R0.
* To use register names with standard convension, please use DMA_BLK0_ME_R0.
*/
#define	DMA_ME00R	(DMA_BLK0_ME_R0)

/** \brief  144, DMA Move Engine Read Register 1 */
#define DMA_BLK0_ME_R1 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R1*)0xF0010144u)

/** Alias (User Manual Name) for DMA_BLK0_ME_R1.
* To use register names with standard convension, please use DMA_BLK0_ME_R1.
*/
#define	DMA_ME01R	(DMA_BLK0_ME_R1)

/** \brief  148, DMA Move Engine Read Register 2 */
#define DMA_BLK0_ME_R2 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R2*)0xF0010148u)

/** Alias (User Manual Name) for DMA_BLK0_ME_R2.
* To use register names with standard convension, please use DMA_BLK0_ME_R2.
*/
#define	DMA_ME02R	(DMA_BLK0_ME_R2)

/** \brief  14C, DMA Move Engine Read Register 3 */
#define DMA_BLK0_ME_R3 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R3*)0xF001014Cu)

/** Alias (User Manual Name) for DMA_BLK0_ME_R3.
* To use register names with standard convension, please use DMA_BLK0_ME_R3.
*/
#define	DMA_ME03R	(DMA_BLK0_ME_R3)

/** \brief  150, DMA Move Engine Read Register 4 */
#define DMA_BLK0_ME_R4 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R4*)0xF0010150u)

/** Alias (User Manual Name) for DMA_BLK0_ME_R4.
* To use register names with standard convension, please use DMA_BLK0_ME_R4.
*/
#define	DMA_ME04R	(DMA_BLK0_ME_R4)

/** \brief  154, DMA Move Engine Read Register 5 */
#define DMA_BLK0_ME_R5 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R5*)0xF0010154u)

/** Alias (User Manual Name) for DMA_BLK0_ME_R5.
* To use register names with standard convension, please use DMA_BLK0_ME_R5.
*/
#define	DMA_ME05R	(DMA_BLK0_ME_R5)

/** \brief  158, DMA Move Engine Read Register 6 */
#define DMA_BLK0_ME_R6 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R6*)0xF0010158u)

/** Alias (User Manual Name) for DMA_BLK0_ME_R6.
* To use register names with standard convension, please use DMA_BLK0_ME_R6.
*/
#define	DMA_ME06R	(DMA_BLK0_ME_R6)

/** \brief  15C, DMA Move Engine Read Register 7 */
#define DMA_BLK0_ME_R7 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R7*)0xF001015Cu)

/** Alias (User Manual Name) for DMA_BLK0_ME_R7.
* To use register names with standard convension, please use DMA_BLK0_ME_R7.
*/
#define	DMA_ME07R	(DMA_BLK0_ME_R7)

/** \brief  180, DMA Move Engine Channel Read Data CRC Register */
#define DMA_BLK0_ME_RDCRC /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_RDCRC*)0xF0010180u)

/** Alias (User Manual Name) for DMA_BLK0_ME_RDCRC.
* To use register names with standard convension, please use DMA_BLK0_ME_RDCRC.
*/
#define	DMA_ME0RDCRC	(DMA_BLK0_ME_RDCRC)

/** \brief  188, DMA Move Engine Channel Source Address Register */
#define DMA_BLK0_ME_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SADR*)0xF0010188u)

/** Alias (User Manual Name) for DMA_BLK0_ME_SADR.
* To use register names with standard convension, please use DMA_BLK0_ME_SADR.
*/
#define	DMA_ME0SADR	(DMA_BLK0_ME_SADR)

/** \brief  184, DMA Move Engine Channel Source and Destination Address CRC
 * Register */
#define DMA_BLK0_ME_SDCRC /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SDCRC*)0xF0010184u)

/** Alias (User Manual Name) for DMA_BLK0_ME_SDCRC.
* To use register names with standard convension, please use DMA_BLK0_ME_SDCRC.
*/
#define	DMA_ME0SDCRC	(DMA_BLK0_ME_SDCRC)

/** \brief  198, DMA Move Engine Channel Shadow Address Register */
#define DMA_BLK0_ME_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SHADR*)0xF0010198u)

/** Alias (User Manual Name) for DMA_BLK0_ME_SHADR.
* To use register names with standard convension, please use DMA_BLK0_ME_SHADR.
*/
#define	DMA_ME0SHADR	(DMA_BLK0_ME_SHADR)

/** \brief  130, DMA Move Engine Status Register */
#define DMA_BLK0_ME_SR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SR*)0xF0010130u)

/** Alias (User Manual Name) for DMA_BLK0_ME_SR.
* To use register names with standard convension, please use DMA_BLK0_ME_SR.
*/
#define	DMA_ME0SR	(DMA_BLK0_ME_SR)

/** \brief  1128, DMA Clear Error Register */
#define DMA_BLK1_CLRE /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_CLRE*)0xF0011128u)

/** Alias (User Manual Name) for DMA_BLK1_CLRE.
* To use register names with standard convension, please use DMA_BLK1_CLRE.
*/
#define	DMA_CLRE1	(DMA_BLK1_CLRE)

/** \brief  1120, DMA Enable Error Register */
#define DMA_BLK1_EER /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_EER*)0xF0011120u)

/** Alias (User Manual Name) for DMA_BLK1_EER.
* To use register names with standard convension, please use DMA_BLK1_EER.
*/
#define	DMA_EER1	(DMA_BLK1_EER)

/** \brief  1124, DMA Error Status Register */
#define DMA_BLK1_ERRSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ERRSR*)0xF0011124u)

/** Alias (User Manual Name) for DMA_BLK1_ERRSR.
* To use register names with standard convension, please use DMA_BLK1_ERRSR.
*/
#define	DMA_ERRSR1	(DMA_BLK1_ERRSR)

/** \brief  1190, DMA Move Engine Channel Address and Interrupt Control Register */
#define DMA_BLK1_ME_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_ADICR*)0xF0011190u)

/** Alias (User Manual Name) for DMA_BLK1_ME_ADICR.
* To use register names with standard convension, please use DMA_BLK1_ME_ADICR.
*/
#define	DMA_ME1ADICR	(DMA_BLK1_ME_ADICR)

/** \brief  1194, DMA Move Engine Channel Control Register */
#define DMA_BLK1_ME_CHCR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_CHCR*)0xF0011194u)

/** Alias (User Manual Name) for DMA_BLK1_ME_CHCR.
* To use register names with standard convension, please use DMA_BLK1_ME_CHCR.
*/
#define	DMA_ME1CHCR	(DMA_BLK1_ME_CHCR)

/** \brief  119C, DMA Move Engine Channel Status Register */
#define DMA_BLK1_ME_CHSR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_CHSR*)0xF001119Cu)

/** Alias (User Manual Name) for DMA_BLK1_ME_CHSR.
* To use register names with standard convension, please use DMA_BLK1_ME_CHSR.
*/
#define	DMA_ME1CHSR	(DMA_BLK1_ME_CHSR)

/** \brief  118C, DMA Move Engine Channel Destination Address Register x */
#define DMA_BLK1_ME_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_DADR*)0xF001118Cu)

/** Alias (User Manual Name) for DMA_BLK1_ME_DADR.
* To use register names with standard convension, please use DMA_BLK1_ME_DADR.
*/
#define	DMA_ME1DADR	(DMA_BLK1_ME_DADR)

/** \brief  1140, DMA Move Engine Read Register 0 */
#define DMA_BLK1_ME_R0 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R0*)0xF0011140u)

/** Alias (User Manual Name) for DMA_BLK1_ME_R0.
* To use register names with standard convension, please use DMA_BLK1_ME_R0.
*/
#define	DMA_ME10R	(DMA_BLK1_ME_R0)

/** \brief  1144, DMA Move Engine Read Register 1 */
#define DMA_BLK1_ME_R1 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R1*)0xF0011144u)

/** Alias (User Manual Name) for DMA_BLK1_ME_R1.
* To use register names with standard convension, please use DMA_BLK1_ME_R1.
*/
#define	DMA_ME11R	(DMA_BLK1_ME_R1)

/** \brief  1148, DMA Move Engine Read Register 2 */
#define DMA_BLK1_ME_R2 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R2*)0xF0011148u)

/** Alias (User Manual Name) for DMA_BLK1_ME_R2.
* To use register names with standard convension, please use DMA_BLK1_ME_R2.
*/
#define	DMA_ME12R	(DMA_BLK1_ME_R2)

/** \brief  114C, DMA Move Engine Read Register 3 */
#define DMA_BLK1_ME_R3 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R3*)0xF001114Cu)

/** Alias (User Manual Name) for DMA_BLK1_ME_R3.
* To use register names with standard convension, please use DMA_BLK1_ME_R3.
*/
#define	DMA_ME13R	(DMA_BLK1_ME_R3)

/** \brief  1150, DMA Move Engine Read Register 4 */
#define DMA_BLK1_ME_R4 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R4*)0xF0011150u)

/** Alias (User Manual Name) for DMA_BLK1_ME_R4.
* To use register names with standard convension, please use DMA_BLK1_ME_R4.
*/
#define	DMA_ME14R	(DMA_BLK1_ME_R4)

/** \brief  1154, DMA Move Engine Read Register 5 */
#define DMA_BLK1_ME_R5 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R5*)0xF0011154u)

/** Alias (User Manual Name) for DMA_BLK1_ME_R5.
* To use register names with standard convension, please use DMA_BLK1_ME_R5.
*/
#define	DMA_ME15R	(DMA_BLK1_ME_R5)

/** \brief  1158, DMA Move Engine Read Register 6 */
#define DMA_BLK1_ME_R6 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R6*)0xF0011158u)

/** Alias (User Manual Name) for DMA_BLK1_ME_R6.
* To use register names with standard convension, please use DMA_BLK1_ME_R6.
*/
#define	DMA_ME16R	(DMA_BLK1_ME_R6)

/** \brief  115C, DMA Move Engine Read Register 7 */
#define DMA_BLK1_ME_R7 /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_R7*)0xF001115Cu)

/** Alias (User Manual Name) for DMA_BLK1_ME_R7.
* To use register names with standard convension, please use DMA_BLK1_ME_R7.
*/
#define	DMA_ME17R	(DMA_BLK1_ME_R7)

/** \brief  1180, DMA Move Engine Channel Read Data CRC Register */
#define DMA_BLK1_ME_RDCRC /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_RDCRC*)0xF0011180u)

/** Alias (User Manual Name) for DMA_BLK1_ME_RDCRC.
* To use register names with standard convension, please use DMA_BLK1_ME_RDCRC.
*/
#define	DMA_ME1RDCRC	(DMA_BLK1_ME_RDCRC)

/** \brief  1188, DMA Move Engine Channel Source Address Register */
#define DMA_BLK1_ME_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SADR*)0xF0011188u)

/** Alias (User Manual Name) for DMA_BLK1_ME_SADR.
* To use register names with standard convension, please use DMA_BLK1_ME_SADR.
*/
#define	DMA_ME1SADR	(DMA_BLK1_ME_SADR)

/** \brief  1184, DMA Move Engine Channel Source and Destination Address CRC
 * Register */
#define DMA_BLK1_ME_SDCRC /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SDCRC*)0xF0011184u)

/** Alias (User Manual Name) for DMA_BLK1_ME_SDCRC.
* To use register names with standard convension, please use DMA_BLK1_ME_SDCRC.
*/
#define	DMA_ME1SDCRC	(DMA_BLK1_ME_SDCRC)

/** \brief  1198, DMA Move Engine Channel Shadow Address Register */
#define DMA_BLK1_ME_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SHADR*)0xF0011198u)

/** Alias (User Manual Name) for DMA_BLK1_ME_SHADR.
* To use register names with standard convension, please use DMA_BLK1_ME_SHADR.
*/
#define	DMA_ME1SHADR	(DMA_BLK1_ME_SHADR)

/** \brief  1130, DMA Move Engine Status Register */
#define DMA_BLK1_ME_SR /*lint --e(923)*/ (*(volatile Ifx_DMA_BLK_ME_SR*)0xF0011130u)

/** Alias (User Manual Name) for DMA_BLK1_ME_SR.
* To use register names with standard convension, please use DMA_BLK1_ME_SR.
*/
#define	DMA_ME1SR	(DMA_BLK1_ME_SR)

/** \brief  2010, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH0_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012010u)

/** Alias (User Manual Name) for DMA_CH0_ADICR.
* To use register names with standard convension, please use DMA_CH0_ADICR.
*/
#define	DMA_ADICR000	(DMA_CH0_ADICR)

/** \brief  2014, DMA Channel Configuration Register */
#define DMA_CH0_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012014u)

/** Alias (User Manual Name) for DMA_CH0_CHCFGR.
* To use register names with standard convension, please use DMA_CH0_CHCFGR.
*/
#define	DMA_CHCFGR000	(DMA_CH0_CHCFGR)

/** \brief  201C, DMARAM Channel Control and Status Register */
#define DMA_CH0_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001201Cu)

/** Alias (User Manual Name) for DMA_CH0_CHCSR.
* To use register names with standard convension, please use DMA_CH0_CHCSR.
*/
#define	DMA_CHCSR000	(DMA_CH0_CHCSR)

/** \brief  200C, DMA Channel Destination Address Register x */
#define DMA_CH0_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001200Cu)

/** Alias (User Manual Name) for DMA_CH0_DADR.
* To use register names with standard convension, please use DMA_CH0_DADR.
*/
#define	DMA_DADR000	(DMA_CH0_DADR)

/** \brief  2000, DMA Channel Read Data CRC Register */
#define DMA_CH0_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012000u)

/** Alias (User Manual Name) for DMA_CH0_RDCRCR.
* To use register names with standard convension, please use DMA_CH0_RDCRCR.
*/
#define	DMA_RDCRCR000	(DMA_CH0_RDCRCR)

/** \brief  2008, DMA Channel Source Address Register */
#define DMA_CH0_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012008u)

/** Alias (User Manual Name) for DMA_CH0_SADR.
* To use register names with standard convension, please use DMA_CH0_SADR.
*/
#define	DMA_SADR000	(DMA_CH0_SADR)

/** \brief  2004, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH0_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012004u)

/** Alias (User Manual Name) for DMA_CH0_SDCRCR.
* To use register names with standard convension, please use DMA_CH0_SDCRCR.
*/
#define	DMA_SDCRCR000	(DMA_CH0_SDCRCR)

/** \brief  2018, DMA Channel Shadow Address Register */
#define DMA_CH0_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012018u)

/** Alias (User Manual Name) for DMA_CH0_SHADR.
* To use register names with standard convension, please use DMA_CH0_SHADR.
*/
#define	DMA_SHADR000	(DMA_CH0_SHADR)

/** \brief  2C90, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH100_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012C90u)

/** Alias (User Manual Name) for DMA_CH100_ADICR.
* To use register names with standard convension, please use DMA_CH100_ADICR.
*/
#define	DMA_ADICR100	(DMA_CH100_ADICR)

/** \brief  2C94, DMA Channel Configuration Register */
#define DMA_CH100_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012C94u)

/** Alias (User Manual Name) for DMA_CH100_CHCFGR.
* To use register names with standard convension, please use DMA_CH100_CHCFGR.
*/
#define	DMA_CHCFGR100	(DMA_CH100_CHCFGR)

/** \brief  2C9C, DMARAM Channel Control and Status Register */
#define DMA_CH100_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012C9Cu)

/** Alias (User Manual Name) for DMA_CH100_CHCSR.
* To use register names with standard convension, please use DMA_CH100_CHCSR.
*/
#define	DMA_CHCSR100	(DMA_CH100_CHCSR)

/** \brief  2C8C, DMA Channel Destination Address Register x */
#define DMA_CH100_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012C8Cu)

/** Alias (User Manual Name) for DMA_CH100_DADR.
* To use register names with standard convension, please use DMA_CH100_DADR.
*/
#define	DMA_DADR100	(DMA_CH100_DADR)

/** \brief  2C80, DMA Channel Read Data CRC Register */
#define DMA_CH100_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012C80u)

/** Alias (User Manual Name) for DMA_CH100_RDCRCR.
* To use register names with standard convension, please use DMA_CH100_RDCRCR.
*/
#define	DMA_RDCRCR100	(DMA_CH100_RDCRCR)

/** \brief  2C88, DMA Channel Source Address Register */
#define DMA_CH100_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012C88u)

/** Alias (User Manual Name) for DMA_CH100_SADR.
* To use register names with standard convension, please use DMA_CH100_SADR.
*/
#define	DMA_SADR100	(DMA_CH100_SADR)

/** \brief  2C84, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH100_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012C84u)

/** Alias (User Manual Name) for DMA_CH100_SDCRCR.
* To use register names with standard convension, please use DMA_CH100_SDCRCR.
*/
#define	DMA_SDCRCR100	(DMA_CH100_SDCRCR)

/** \brief  2C98, DMA Channel Shadow Address Register */
#define DMA_CH100_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012C98u)

/** Alias (User Manual Name) for DMA_CH100_SHADR.
* To use register names with standard convension, please use DMA_CH100_SHADR.
*/
#define	DMA_SHADR100	(DMA_CH100_SHADR)

/** \brief  2CB0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH101_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012CB0u)

/** Alias (User Manual Name) for DMA_CH101_ADICR.
* To use register names with standard convension, please use DMA_CH101_ADICR.
*/
#define	DMA_ADICR101	(DMA_CH101_ADICR)

/** \brief  2CB4, DMA Channel Configuration Register */
#define DMA_CH101_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012CB4u)

/** Alias (User Manual Name) for DMA_CH101_CHCFGR.
* To use register names with standard convension, please use DMA_CH101_CHCFGR.
*/
#define	DMA_CHCFGR101	(DMA_CH101_CHCFGR)

/** \brief  2CBC, DMARAM Channel Control and Status Register */
#define DMA_CH101_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012CBCu)

/** Alias (User Manual Name) for DMA_CH101_CHCSR.
* To use register names with standard convension, please use DMA_CH101_CHCSR.
*/
#define	DMA_CHCSR101	(DMA_CH101_CHCSR)

/** \brief  2CAC, DMA Channel Destination Address Register x */
#define DMA_CH101_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012CACu)

/** Alias (User Manual Name) for DMA_CH101_DADR.
* To use register names with standard convension, please use DMA_CH101_DADR.
*/
#define	DMA_DADR101	(DMA_CH101_DADR)

/** \brief  2CA0, DMA Channel Read Data CRC Register */
#define DMA_CH101_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012CA0u)

/** Alias (User Manual Name) for DMA_CH101_RDCRCR.
* To use register names with standard convension, please use DMA_CH101_RDCRCR.
*/
#define	DMA_RDCRCR101	(DMA_CH101_RDCRCR)

/** \brief  2CA8, DMA Channel Source Address Register */
#define DMA_CH101_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012CA8u)

/** Alias (User Manual Name) for DMA_CH101_SADR.
* To use register names with standard convension, please use DMA_CH101_SADR.
*/
#define	DMA_SADR101	(DMA_CH101_SADR)

/** \brief  2CA4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH101_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012CA4u)

/** Alias (User Manual Name) for DMA_CH101_SDCRCR.
* To use register names with standard convension, please use DMA_CH101_SDCRCR.
*/
#define	DMA_SDCRCR101	(DMA_CH101_SDCRCR)

/** \brief  2CB8, DMA Channel Shadow Address Register */
#define DMA_CH101_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012CB8u)

/** Alias (User Manual Name) for DMA_CH101_SHADR.
* To use register names with standard convension, please use DMA_CH101_SHADR.
*/
#define	DMA_SHADR101	(DMA_CH101_SHADR)

/** \brief  2CD0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH102_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012CD0u)

/** Alias (User Manual Name) for DMA_CH102_ADICR.
* To use register names with standard convension, please use DMA_CH102_ADICR.
*/
#define	DMA_ADICR102	(DMA_CH102_ADICR)

/** \brief  2CD4, DMA Channel Configuration Register */
#define DMA_CH102_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012CD4u)

/** Alias (User Manual Name) for DMA_CH102_CHCFGR.
* To use register names with standard convension, please use DMA_CH102_CHCFGR.
*/
#define	DMA_CHCFGR102	(DMA_CH102_CHCFGR)

/** \brief  2CDC, DMARAM Channel Control and Status Register */
#define DMA_CH102_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012CDCu)

/** Alias (User Manual Name) for DMA_CH102_CHCSR.
* To use register names with standard convension, please use DMA_CH102_CHCSR.
*/
#define	DMA_CHCSR102	(DMA_CH102_CHCSR)

/** \brief  2CCC, DMA Channel Destination Address Register x */
#define DMA_CH102_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012CCCu)

/** Alias (User Manual Name) for DMA_CH102_DADR.
* To use register names with standard convension, please use DMA_CH102_DADR.
*/
#define	DMA_DADR102	(DMA_CH102_DADR)

/** \brief  2CC0, DMA Channel Read Data CRC Register */
#define DMA_CH102_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012CC0u)

/** Alias (User Manual Name) for DMA_CH102_RDCRCR.
* To use register names with standard convension, please use DMA_CH102_RDCRCR.
*/
#define	DMA_RDCRCR102	(DMA_CH102_RDCRCR)

/** \brief  2CC8, DMA Channel Source Address Register */
#define DMA_CH102_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012CC8u)

/** Alias (User Manual Name) for DMA_CH102_SADR.
* To use register names with standard convension, please use DMA_CH102_SADR.
*/
#define	DMA_SADR102	(DMA_CH102_SADR)

/** \brief  2CC4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH102_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012CC4u)

/** Alias (User Manual Name) for DMA_CH102_SDCRCR.
* To use register names with standard convension, please use DMA_CH102_SDCRCR.
*/
#define	DMA_SDCRCR102	(DMA_CH102_SDCRCR)

/** \brief  2CD8, DMA Channel Shadow Address Register */
#define DMA_CH102_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012CD8u)

/** Alias (User Manual Name) for DMA_CH102_SHADR.
* To use register names with standard convension, please use DMA_CH102_SHADR.
*/
#define	DMA_SHADR102	(DMA_CH102_SHADR)

/** \brief  2CF0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH103_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012CF0u)

/** Alias (User Manual Name) for DMA_CH103_ADICR.
* To use register names with standard convension, please use DMA_CH103_ADICR.
*/
#define	DMA_ADICR103	(DMA_CH103_ADICR)

/** \brief  2CF4, DMA Channel Configuration Register */
#define DMA_CH103_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012CF4u)

/** Alias (User Manual Name) for DMA_CH103_CHCFGR.
* To use register names with standard convension, please use DMA_CH103_CHCFGR.
*/
#define	DMA_CHCFGR103	(DMA_CH103_CHCFGR)

/** \brief  2CFC, DMARAM Channel Control and Status Register */
#define DMA_CH103_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012CFCu)

/** Alias (User Manual Name) for DMA_CH103_CHCSR.
* To use register names with standard convension, please use DMA_CH103_CHCSR.
*/
#define	DMA_CHCSR103	(DMA_CH103_CHCSR)

/** \brief  2CEC, DMA Channel Destination Address Register x */
#define DMA_CH103_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012CECu)

/** Alias (User Manual Name) for DMA_CH103_DADR.
* To use register names with standard convension, please use DMA_CH103_DADR.
*/
#define	DMA_DADR103	(DMA_CH103_DADR)

/** \brief  2CE0, DMA Channel Read Data CRC Register */
#define DMA_CH103_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012CE0u)

/** Alias (User Manual Name) for DMA_CH103_RDCRCR.
* To use register names with standard convension, please use DMA_CH103_RDCRCR.
*/
#define	DMA_RDCRCR103	(DMA_CH103_RDCRCR)

/** \brief  2CE8, DMA Channel Source Address Register */
#define DMA_CH103_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012CE8u)

/** Alias (User Manual Name) for DMA_CH103_SADR.
* To use register names with standard convension, please use DMA_CH103_SADR.
*/
#define	DMA_SADR103	(DMA_CH103_SADR)

/** \brief  2CE4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH103_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012CE4u)

/** Alias (User Manual Name) for DMA_CH103_SDCRCR.
* To use register names with standard convension, please use DMA_CH103_SDCRCR.
*/
#define	DMA_SDCRCR103	(DMA_CH103_SDCRCR)

/** \brief  2CF8, DMA Channel Shadow Address Register */
#define DMA_CH103_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012CF8u)

/** Alias (User Manual Name) for DMA_CH103_SHADR.
* To use register names with standard convension, please use DMA_CH103_SHADR.
*/
#define	DMA_SHADR103	(DMA_CH103_SHADR)

/** \brief  2D10, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH104_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012D10u)

/** Alias (User Manual Name) for DMA_CH104_ADICR.
* To use register names with standard convension, please use DMA_CH104_ADICR.
*/
#define	DMA_ADICR104	(DMA_CH104_ADICR)

/** \brief  2D14, DMA Channel Configuration Register */
#define DMA_CH104_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012D14u)

/** Alias (User Manual Name) for DMA_CH104_CHCFGR.
* To use register names with standard convension, please use DMA_CH104_CHCFGR.
*/
#define	DMA_CHCFGR104	(DMA_CH104_CHCFGR)

/** \brief  2D1C, DMARAM Channel Control and Status Register */
#define DMA_CH104_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012D1Cu)

/** Alias (User Manual Name) for DMA_CH104_CHCSR.
* To use register names with standard convension, please use DMA_CH104_CHCSR.
*/
#define	DMA_CHCSR104	(DMA_CH104_CHCSR)

/** \brief  2D0C, DMA Channel Destination Address Register x */
#define DMA_CH104_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012D0Cu)

/** Alias (User Manual Name) for DMA_CH104_DADR.
* To use register names with standard convension, please use DMA_CH104_DADR.
*/
#define	DMA_DADR104	(DMA_CH104_DADR)

/** \brief  2D00, DMA Channel Read Data CRC Register */
#define DMA_CH104_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012D00u)

/** Alias (User Manual Name) for DMA_CH104_RDCRCR.
* To use register names with standard convension, please use DMA_CH104_RDCRCR.
*/
#define	DMA_RDCRCR104	(DMA_CH104_RDCRCR)

/** \brief  2D08, DMA Channel Source Address Register */
#define DMA_CH104_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012D08u)

/** Alias (User Manual Name) for DMA_CH104_SADR.
* To use register names with standard convension, please use DMA_CH104_SADR.
*/
#define	DMA_SADR104	(DMA_CH104_SADR)

/** \brief  2D04, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH104_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012D04u)

/** Alias (User Manual Name) for DMA_CH104_SDCRCR.
* To use register names with standard convension, please use DMA_CH104_SDCRCR.
*/
#define	DMA_SDCRCR104	(DMA_CH104_SDCRCR)

/** \brief  2D18, DMA Channel Shadow Address Register */
#define DMA_CH104_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012D18u)

/** Alias (User Manual Name) for DMA_CH104_SHADR.
* To use register names with standard convension, please use DMA_CH104_SHADR.
*/
#define	DMA_SHADR104	(DMA_CH104_SHADR)

/** \brief  2D30, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH105_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012D30u)

/** Alias (User Manual Name) for DMA_CH105_ADICR.
* To use register names with standard convension, please use DMA_CH105_ADICR.
*/
#define	DMA_ADICR105	(DMA_CH105_ADICR)

/** \brief  2D34, DMA Channel Configuration Register */
#define DMA_CH105_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012D34u)

/** Alias (User Manual Name) for DMA_CH105_CHCFGR.
* To use register names with standard convension, please use DMA_CH105_CHCFGR.
*/
#define	DMA_CHCFGR105	(DMA_CH105_CHCFGR)

/** \brief  2D3C, DMARAM Channel Control and Status Register */
#define DMA_CH105_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012D3Cu)

/** Alias (User Manual Name) for DMA_CH105_CHCSR.
* To use register names with standard convension, please use DMA_CH105_CHCSR.
*/
#define	DMA_CHCSR105	(DMA_CH105_CHCSR)

/** \brief  2D2C, DMA Channel Destination Address Register x */
#define DMA_CH105_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012D2Cu)

/** Alias (User Manual Name) for DMA_CH105_DADR.
* To use register names with standard convension, please use DMA_CH105_DADR.
*/
#define	DMA_DADR105	(DMA_CH105_DADR)

/** \brief  2D20, DMA Channel Read Data CRC Register */
#define DMA_CH105_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012D20u)

/** Alias (User Manual Name) for DMA_CH105_RDCRCR.
* To use register names with standard convension, please use DMA_CH105_RDCRCR.
*/
#define	DMA_RDCRCR105	(DMA_CH105_RDCRCR)

/** \brief  2D28, DMA Channel Source Address Register */
#define DMA_CH105_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012D28u)

/** Alias (User Manual Name) for DMA_CH105_SADR.
* To use register names with standard convension, please use DMA_CH105_SADR.
*/
#define	DMA_SADR105	(DMA_CH105_SADR)

/** \brief  2D24, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH105_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012D24u)

/** Alias (User Manual Name) for DMA_CH105_SDCRCR.
* To use register names with standard convension, please use DMA_CH105_SDCRCR.
*/
#define	DMA_SDCRCR105	(DMA_CH105_SDCRCR)

/** \brief  2D38, DMA Channel Shadow Address Register */
#define DMA_CH105_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012D38u)

/** Alias (User Manual Name) for DMA_CH105_SHADR.
* To use register names with standard convension, please use DMA_CH105_SHADR.
*/
#define	DMA_SHADR105	(DMA_CH105_SHADR)

/** \brief  2D50, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH106_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012D50u)

/** Alias (User Manual Name) for DMA_CH106_ADICR.
* To use register names with standard convension, please use DMA_CH106_ADICR.
*/
#define	DMA_ADICR106	(DMA_CH106_ADICR)

/** \brief  2D54, DMA Channel Configuration Register */
#define DMA_CH106_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012D54u)

/** Alias (User Manual Name) for DMA_CH106_CHCFGR.
* To use register names with standard convension, please use DMA_CH106_CHCFGR.
*/
#define	DMA_CHCFGR106	(DMA_CH106_CHCFGR)

/** \brief  2D5C, DMARAM Channel Control and Status Register */
#define DMA_CH106_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012D5Cu)

/** Alias (User Manual Name) for DMA_CH106_CHCSR.
* To use register names with standard convension, please use DMA_CH106_CHCSR.
*/
#define	DMA_CHCSR106	(DMA_CH106_CHCSR)

/** \brief  2D4C, DMA Channel Destination Address Register x */
#define DMA_CH106_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012D4Cu)

/** Alias (User Manual Name) for DMA_CH106_DADR.
* To use register names with standard convension, please use DMA_CH106_DADR.
*/
#define	DMA_DADR106	(DMA_CH106_DADR)

/** \brief  2D40, DMA Channel Read Data CRC Register */
#define DMA_CH106_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012D40u)

/** Alias (User Manual Name) for DMA_CH106_RDCRCR.
* To use register names with standard convension, please use DMA_CH106_RDCRCR.
*/
#define	DMA_RDCRCR106	(DMA_CH106_RDCRCR)

/** \brief  2D48, DMA Channel Source Address Register */
#define DMA_CH106_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012D48u)

/** Alias (User Manual Name) for DMA_CH106_SADR.
* To use register names with standard convension, please use DMA_CH106_SADR.
*/
#define	DMA_SADR106	(DMA_CH106_SADR)

/** \brief  2D44, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH106_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012D44u)

/** Alias (User Manual Name) for DMA_CH106_SDCRCR.
* To use register names with standard convension, please use DMA_CH106_SDCRCR.
*/
#define	DMA_SDCRCR106	(DMA_CH106_SDCRCR)

/** \brief  2D58, DMA Channel Shadow Address Register */
#define DMA_CH106_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012D58u)

/** Alias (User Manual Name) for DMA_CH106_SHADR.
* To use register names with standard convension, please use DMA_CH106_SHADR.
*/
#define	DMA_SHADR106	(DMA_CH106_SHADR)

/** \brief  2D70, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH107_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012D70u)

/** Alias (User Manual Name) for DMA_CH107_ADICR.
* To use register names with standard convension, please use DMA_CH107_ADICR.
*/
#define	DMA_ADICR107	(DMA_CH107_ADICR)

/** \brief  2D74, DMA Channel Configuration Register */
#define DMA_CH107_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012D74u)

/** Alias (User Manual Name) for DMA_CH107_CHCFGR.
* To use register names with standard convension, please use DMA_CH107_CHCFGR.
*/
#define	DMA_CHCFGR107	(DMA_CH107_CHCFGR)

/** \brief  2D7C, DMARAM Channel Control and Status Register */
#define DMA_CH107_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012D7Cu)

/** Alias (User Manual Name) for DMA_CH107_CHCSR.
* To use register names with standard convension, please use DMA_CH107_CHCSR.
*/
#define	DMA_CHCSR107	(DMA_CH107_CHCSR)

/** \brief  2D6C, DMA Channel Destination Address Register x */
#define DMA_CH107_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012D6Cu)

/** Alias (User Manual Name) for DMA_CH107_DADR.
* To use register names with standard convension, please use DMA_CH107_DADR.
*/
#define	DMA_DADR107	(DMA_CH107_DADR)

/** \brief  2D60, DMA Channel Read Data CRC Register */
#define DMA_CH107_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012D60u)

/** Alias (User Manual Name) for DMA_CH107_RDCRCR.
* To use register names with standard convension, please use DMA_CH107_RDCRCR.
*/
#define	DMA_RDCRCR107	(DMA_CH107_RDCRCR)

/** \brief  2D68, DMA Channel Source Address Register */
#define DMA_CH107_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012D68u)

/** Alias (User Manual Name) for DMA_CH107_SADR.
* To use register names with standard convension, please use DMA_CH107_SADR.
*/
#define	DMA_SADR107	(DMA_CH107_SADR)

/** \brief  2D64, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH107_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012D64u)

/** Alias (User Manual Name) for DMA_CH107_SDCRCR.
* To use register names with standard convension, please use DMA_CH107_SDCRCR.
*/
#define	DMA_SDCRCR107	(DMA_CH107_SDCRCR)

/** \brief  2D78, DMA Channel Shadow Address Register */
#define DMA_CH107_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012D78u)

/** Alias (User Manual Name) for DMA_CH107_SHADR.
* To use register names with standard convension, please use DMA_CH107_SHADR.
*/
#define	DMA_SHADR107	(DMA_CH107_SHADR)

/** \brief  2D90, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH108_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012D90u)

/** Alias (User Manual Name) for DMA_CH108_ADICR.
* To use register names with standard convension, please use DMA_CH108_ADICR.
*/
#define	DMA_ADICR108	(DMA_CH108_ADICR)

/** \brief  2D94, DMA Channel Configuration Register */
#define DMA_CH108_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012D94u)

/** Alias (User Manual Name) for DMA_CH108_CHCFGR.
* To use register names with standard convension, please use DMA_CH108_CHCFGR.
*/
#define	DMA_CHCFGR108	(DMA_CH108_CHCFGR)

/** \brief  2D9C, DMARAM Channel Control and Status Register */
#define DMA_CH108_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012D9Cu)

/** Alias (User Manual Name) for DMA_CH108_CHCSR.
* To use register names with standard convension, please use DMA_CH108_CHCSR.
*/
#define	DMA_CHCSR108	(DMA_CH108_CHCSR)

/** \brief  2D8C, DMA Channel Destination Address Register x */
#define DMA_CH108_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012D8Cu)

/** Alias (User Manual Name) for DMA_CH108_DADR.
* To use register names with standard convension, please use DMA_CH108_DADR.
*/
#define	DMA_DADR108	(DMA_CH108_DADR)

/** \brief  2D80, DMA Channel Read Data CRC Register */
#define DMA_CH108_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012D80u)

/** Alias (User Manual Name) for DMA_CH108_RDCRCR.
* To use register names with standard convension, please use DMA_CH108_RDCRCR.
*/
#define	DMA_RDCRCR108	(DMA_CH108_RDCRCR)

/** \brief  2D88, DMA Channel Source Address Register */
#define DMA_CH108_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012D88u)

/** Alias (User Manual Name) for DMA_CH108_SADR.
* To use register names with standard convension, please use DMA_CH108_SADR.
*/
#define	DMA_SADR108	(DMA_CH108_SADR)

/** \brief  2D84, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH108_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012D84u)

/** Alias (User Manual Name) for DMA_CH108_SDCRCR.
* To use register names with standard convension, please use DMA_CH108_SDCRCR.
*/
#define	DMA_SDCRCR108	(DMA_CH108_SDCRCR)

/** \brief  2D98, DMA Channel Shadow Address Register */
#define DMA_CH108_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012D98u)

/** Alias (User Manual Name) for DMA_CH108_SHADR.
* To use register names with standard convension, please use DMA_CH108_SHADR.
*/
#define	DMA_SHADR108	(DMA_CH108_SHADR)

/** \brief  2DB0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH109_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012DB0u)

/** Alias (User Manual Name) for DMA_CH109_ADICR.
* To use register names with standard convension, please use DMA_CH109_ADICR.
*/
#define	DMA_ADICR109	(DMA_CH109_ADICR)

/** \brief  2DB4, DMA Channel Configuration Register */
#define DMA_CH109_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012DB4u)

/** Alias (User Manual Name) for DMA_CH109_CHCFGR.
* To use register names with standard convension, please use DMA_CH109_CHCFGR.
*/
#define	DMA_CHCFGR109	(DMA_CH109_CHCFGR)

/** \brief  2DBC, DMARAM Channel Control and Status Register */
#define DMA_CH109_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012DBCu)

/** Alias (User Manual Name) for DMA_CH109_CHCSR.
* To use register names with standard convension, please use DMA_CH109_CHCSR.
*/
#define	DMA_CHCSR109	(DMA_CH109_CHCSR)

/** \brief  2DAC, DMA Channel Destination Address Register x */
#define DMA_CH109_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012DACu)

/** Alias (User Manual Name) for DMA_CH109_DADR.
* To use register names with standard convension, please use DMA_CH109_DADR.
*/
#define	DMA_DADR109	(DMA_CH109_DADR)

/** \brief  2DA0, DMA Channel Read Data CRC Register */
#define DMA_CH109_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012DA0u)

/** Alias (User Manual Name) for DMA_CH109_RDCRCR.
* To use register names with standard convension, please use DMA_CH109_RDCRCR.
*/
#define	DMA_RDCRCR109	(DMA_CH109_RDCRCR)

/** \brief  2DA8, DMA Channel Source Address Register */
#define DMA_CH109_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012DA8u)

/** Alias (User Manual Name) for DMA_CH109_SADR.
* To use register names with standard convension, please use DMA_CH109_SADR.
*/
#define	DMA_SADR109	(DMA_CH109_SADR)

/** \brief  2DA4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH109_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012DA4u)

/** Alias (User Manual Name) for DMA_CH109_SDCRCR.
* To use register names with standard convension, please use DMA_CH109_SDCRCR.
*/
#define	DMA_SDCRCR109	(DMA_CH109_SDCRCR)

/** \brief  2DB8, DMA Channel Shadow Address Register */
#define DMA_CH109_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012DB8u)

/** Alias (User Manual Name) for DMA_CH109_SHADR.
* To use register names with standard convension, please use DMA_CH109_SHADR.
*/
#define	DMA_SHADR109	(DMA_CH109_SHADR)

/** \brief  2150, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH10_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012150u)

/** Alias (User Manual Name) for DMA_CH10_ADICR.
* To use register names with standard convension, please use DMA_CH10_ADICR.
*/
#define	DMA_ADICR010	(DMA_CH10_ADICR)

/** \brief  2154, DMA Channel Configuration Register */
#define DMA_CH10_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012154u)

/** Alias (User Manual Name) for DMA_CH10_CHCFGR.
* To use register names with standard convension, please use DMA_CH10_CHCFGR.
*/
#define	DMA_CHCFGR010	(DMA_CH10_CHCFGR)

/** \brief  215C, DMARAM Channel Control and Status Register */
#define DMA_CH10_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001215Cu)

/** Alias (User Manual Name) for DMA_CH10_CHCSR.
* To use register names with standard convension, please use DMA_CH10_CHCSR.
*/
#define	DMA_CHCSR010	(DMA_CH10_CHCSR)

/** \brief  214C, DMA Channel Destination Address Register x */
#define DMA_CH10_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001214Cu)

/** Alias (User Manual Name) for DMA_CH10_DADR.
* To use register names with standard convension, please use DMA_CH10_DADR.
*/
#define	DMA_DADR010	(DMA_CH10_DADR)

/** \brief  2140, DMA Channel Read Data CRC Register */
#define DMA_CH10_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012140u)

/** Alias (User Manual Name) for DMA_CH10_RDCRCR.
* To use register names with standard convension, please use DMA_CH10_RDCRCR.
*/
#define	DMA_RDCRCR010	(DMA_CH10_RDCRCR)

/** \brief  2148, DMA Channel Source Address Register */
#define DMA_CH10_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012148u)

/** Alias (User Manual Name) for DMA_CH10_SADR.
* To use register names with standard convension, please use DMA_CH10_SADR.
*/
#define	DMA_SADR010	(DMA_CH10_SADR)

/** \brief  2144, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH10_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012144u)

/** Alias (User Manual Name) for DMA_CH10_SDCRCR.
* To use register names with standard convension, please use DMA_CH10_SDCRCR.
*/
#define	DMA_SDCRCR010	(DMA_CH10_SDCRCR)

/** \brief  2158, DMA Channel Shadow Address Register */
#define DMA_CH10_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012158u)

/** Alias (User Manual Name) for DMA_CH10_SHADR.
* To use register names with standard convension, please use DMA_CH10_SHADR.
*/
#define	DMA_SHADR010	(DMA_CH10_SHADR)

/** \brief  2DD0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH110_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012DD0u)

/** Alias (User Manual Name) for DMA_CH110_ADICR.
* To use register names with standard convension, please use DMA_CH110_ADICR.
*/
#define	DMA_ADICR110	(DMA_CH110_ADICR)

/** \brief  2DD4, DMA Channel Configuration Register */
#define DMA_CH110_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012DD4u)

/** Alias (User Manual Name) for DMA_CH110_CHCFGR.
* To use register names with standard convension, please use DMA_CH110_CHCFGR.
*/
#define	DMA_CHCFGR110	(DMA_CH110_CHCFGR)

/** \brief  2DDC, DMARAM Channel Control and Status Register */
#define DMA_CH110_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012DDCu)

/** Alias (User Manual Name) for DMA_CH110_CHCSR.
* To use register names with standard convension, please use DMA_CH110_CHCSR.
*/
#define	DMA_CHCSR110	(DMA_CH110_CHCSR)

/** \brief  2DCC, DMA Channel Destination Address Register x */
#define DMA_CH110_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012DCCu)

/** Alias (User Manual Name) for DMA_CH110_DADR.
* To use register names with standard convension, please use DMA_CH110_DADR.
*/
#define	DMA_DADR110	(DMA_CH110_DADR)

/** \brief  2DC0, DMA Channel Read Data CRC Register */
#define DMA_CH110_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012DC0u)

/** Alias (User Manual Name) for DMA_CH110_RDCRCR.
* To use register names with standard convension, please use DMA_CH110_RDCRCR.
*/
#define	DMA_RDCRCR110	(DMA_CH110_RDCRCR)

/** \brief  2DC8, DMA Channel Source Address Register */
#define DMA_CH110_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012DC8u)

/** Alias (User Manual Name) for DMA_CH110_SADR.
* To use register names with standard convension, please use DMA_CH110_SADR.
*/
#define	DMA_SADR110	(DMA_CH110_SADR)

/** \brief  2DC4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH110_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012DC4u)

/** Alias (User Manual Name) for DMA_CH110_SDCRCR.
* To use register names with standard convension, please use DMA_CH110_SDCRCR.
*/
#define	DMA_SDCRCR110	(DMA_CH110_SDCRCR)

/** \brief  2DD8, DMA Channel Shadow Address Register */
#define DMA_CH110_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012DD8u)

/** Alias (User Manual Name) for DMA_CH110_SHADR.
* To use register names with standard convension, please use DMA_CH110_SHADR.
*/
#define	DMA_SHADR110	(DMA_CH110_SHADR)

/** \brief  2DF0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH111_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012DF0u)

/** Alias (User Manual Name) for DMA_CH111_ADICR.
* To use register names with standard convension, please use DMA_CH111_ADICR.
*/
#define	DMA_ADICR111	(DMA_CH111_ADICR)

/** \brief  2DF4, DMA Channel Configuration Register */
#define DMA_CH111_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012DF4u)

/** Alias (User Manual Name) for DMA_CH111_CHCFGR.
* To use register names with standard convension, please use DMA_CH111_CHCFGR.
*/
#define	DMA_CHCFGR111	(DMA_CH111_CHCFGR)

/** \brief  2DFC, DMARAM Channel Control and Status Register */
#define DMA_CH111_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012DFCu)

/** Alias (User Manual Name) for DMA_CH111_CHCSR.
* To use register names with standard convension, please use DMA_CH111_CHCSR.
*/
#define	DMA_CHCSR111	(DMA_CH111_CHCSR)

/** \brief  2DEC, DMA Channel Destination Address Register x */
#define DMA_CH111_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012DECu)

/** Alias (User Manual Name) for DMA_CH111_DADR.
* To use register names with standard convension, please use DMA_CH111_DADR.
*/
#define	DMA_DADR111	(DMA_CH111_DADR)

/** \brief  2DE0, DMA Channel Read Data CRC Register */
#define DMA_CH111_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012DE0u)

/** Alias (User Manual Name) for DMA_CH111_RDCRCR.
* To use register names with standard convension, please use DMA_CH111_RDCRCR.
*/
#define	DMA_RDCRCR111	(DMA_CH111_RDCRCR)

/** \brief  2DE8, DMA Channel Source Address Register */
#define DMA_CH111_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012DE8u)

/** Alias (User Manual Name) for DMA_CH111_SADR.
* To use register names with standard convension, please use DMA_CH111_SADR.
*/
#define	DMA_SADR111	(DMA_CH111_SADR)

/** \brief  2DE4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH111_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012DE4u)

/** Alias (User Manual Name) for DMA_CH111_SDCRCR.
* To use register names with standard convension, please use DMA_CH111_SDCRCR.
*/
#define	DMA_SDCRCR111	(DMA_CH111_SDCRCR)

/** \brief  2DF8, DMA Channel Shadow Address Register */
#define DMA_CH111_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012DF8u)

/** Alias (User Manual Name) for DMA_CH111_SHADR.
* To use register names with standard convension, please use DMA_CH111_SHADR.
*/
#define	DMA_SHADR111	(DMA_CH111_SHADR)

/** \brief  2E10, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH112_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012E10u)

/** Alias (User Manual Name) for DMA_CH112_ADICR.
* To use register names with standard convension, please use DMA_CH112_ADICR.
*/
#define	DMA_ADICR112	(DMA_CH112_ADICR)

/** \brief  2E14, DMA Channel Configuration Register */
#define DMA_CH112_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012E14u)

/** Alias (User Manual Name) for DMA_CH112_CHCFGR.
* To use register names with standard convension, please use DMA_CH112_CHCFGR.
*/
#define	DMA_CHCFGR112	(DMA_CH112_CHCFGR)

/** \brief  2E1C, DMARAM Channel Control and Status Register */
#define DMA_CH112_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012E1Cu)

/** Alias (User Manual Name) for DMA_CH112_CHCSR.
* To use register names with standard convension, please use DMA_CH112_CHCSR.
*/
#define	DMA_CHCSR112	(DMA_CH112_CHCSR)

/** \brief  2E0C, DMA Channel Destination Address Register x */
#define DMA_CH112_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012E0Cu)

/** Alias (User Manual Name) for DMA_CH112_DADR.
* To use register names with standard convension, please use DMA_CH112_DADR.
*/
#define	DMA_DADR112	(DMA_CH112_DADR)

/** \brief  2E00, DMA Channel Read Data CRC Register */
#define DMA_CH112_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012E00u)

/** Alias (User Manual Name) for DMA_CH112_RDCRCR.
* To use register names with standard convension, please use DMA_CH112_RDCRCR.
*/
#define	DMA_RDCRCR112	(DMA_CH112_RDCRCR)

/** \brief  2E08, DMA Channel Source Address Register */
#define DMA_CH112_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012E08u)

/** Alias (User Manual Name) for DMA_CH112_SADR.
* To use register names with standard convension, please use DMA_CH112_SADR.
*/
#define	DMA_SADR112	(DMA_CH112_SADR)

/** \brief  2E04, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH112_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012E04u)

/** Alias (User Manual Name) for DMA_CH112_SDCRCR.
* To use register names with standard convension, please use DMA_CH112_SDCRCR.
*/
#define	DMA_SDCRCR112	(DMA_CH112_SDCRCR)

/** \brief  2E18, DMA Channel Shadow Address Register */
#define DMA_CH112_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012E18u)

/** Alias (User Manual Name) for DMA_CH112_SHADR.
* To use register names with standard convension, please use DMA_CH112_SHADR.
*/
#define	DMA_SHADR112	(DMA_CH112_SHADR)

/** \brief  2E30, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH113_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012E30u)

/** Alias (User Manual Name) for DMA_CH113_ADICR.
* To use register names with standard convension, please use DMA_CH113_ADICR.
*/
#define	DMA_ADICR113	(DMA_CH113_ADICR)

/** \brief  2E34, DMA Channel Configuration Register */
#define DMA_CH113_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012E34u)

/** Alias (User Manual Name) for DMA_CH113_CHCFGR.
* To use register names with standard convension, please use DMA_CH113_CHCFGR.
*/
#define	DMA_CHCFGR113	(DMA_CH113_CHCFGR)

/** \brief  2E3C, DMARAM Channel Control and Status Register */
#define DMA_CH113_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012E3Cu)

/** Alias (User Manual Name) for DMA_CH113_CHCSR.
* To use register names with standard convension, please use DMA_CH113_CHCSR.
*/
#define	DMA_CHCSR113	(DMA_CH113_CHCSR)

/** \brief  2E2C, DMA Channel Destination Address Register x */
#define DMA_CH113_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012E2Cu)

/** Alias (User Manual Name) for DMA_CH113_DADR.
* To use register names with standard convension, please use DMA_CH113_DADR.
*/
#define	DMA_DADR113	(DMA_CH113_DADR)

/** \brief  2E20, DMA Channel Read Data CRC Register */
#define DMA_CH113_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012E20u)

/** Alias (User Manual Name) for DMA_CH113_RDCRCR.
* To use register names with standard convension, please use DMA_CH113_RDCRCR.
*/
#define	DMA_RDCRCR113	(DMA_CH113_RDCRCR)

/** \brief  2E28, DMA Channel Source Address Register */
#define DMA_CH113_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012E28u)

/** Alias (User Manual Name) for DMA_CH113_SADR.
* To use register names with standard convension, please use DMA_CH113_SADR.
*/
#define	DMA_SADR113	(DMA_CH113_SADR)

/** \brief  2E24, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH113_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012E24u)

/** Alias (User Manual Name) for DMA_CH113_SDCRCR.
* To use register names with standard convension, please use DMA_CH113_SDCRCR.
*/
#define	DMA_SDCRCR113	(DMA_CH113_SDCRCR)

/** \brief  2E38, DMA Channel Shadow Address Register */
#define DMA_CH113_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012E38u)

/** Alias (User Manual Name) for DMA_CH113_SHADR.
* To use register names with standard convension, please use DMA_CH113_SHADR.
*/
#define	DMA_SHADR113	(DMA_CH113_SHADR)

/** \brief  2E50, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH114_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012E50u)

/** Alias (User Manual Name) for DMA_CH114_ADICR.
* To use register names with standard convension, please use DMA_CH114_ADICR.
*/
#define	DMA_ADICR114	(DMA_CH114_ADICR)

/** \brief  2E54, DMA Channel Configuration Register */
#define DMA_CH114_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012E54u)

/** Alias (User Manual Name) for DMA_CH114_CHCFGR.
* To use register names with standard convension, please use DMA_CH114_CHCFGR.
*/
#define	DMA_CHCFGR114	(DMA_CH114_CHCFGR)

/** \brief  2E5C, DMARAM Channel Control and Status Register */
#define DMA_CH114_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012E5Cu)

/** Alias (User Manual Name) for DMA_CH114_CHCSR.
* To use register names with standard convension, please use DMA_CH114_CHCSR.
*/
#define	DMA_CHCSR114	(DMA_CH114_CHCSR)

/** \brief  2E4C, DMA Channel Destination Address Register x */
#define DMA_CH114_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012E4Cu)

/** Alias (User Manual Name) for DMA_CH114_DADR.
* To use register names with standard convension, please use DMA_CH114_DADR.
*/
#define	DMA_DADR114	(DMA_CH114_DADR)

/** \brief  2E40, DMA Channel Read Data CRC Register */
#define DMA_CH114_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012E40u)

/** Alias (User Manual Name) for DMA_CH114_RDCRCR.
* To use register names with standard convension, please use DMA_CH114_RDCRCR.
*/
#define	DMA_RDCRCR114	(DMA_CH114_RDCRCR)

/** \brief  2E48, DMA Channel Source Address Register */
#define DMA_CH114_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012E48u)

/** Alias (User Manual Name) for DMA_CH114_SADR.
* To use register names with standard convension, please use DMA_CH114_SADR.
*/
#define	DMA_SADR114	(DMA_CH114_SADR)

/** \brief  2E44, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH114_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012E44u)

/** Alias (User Manual Name) for DMA_CH114_SDCRCR.
* To use register names with standard convension, please use DMA_CH114_SDCRCR.
*/
#define	DMA_SDCRCR114	(DMA_CH114_SDCRCR)

/** \brief  2E58, DMA Channel Shadow Address Register */
#define DMA_CH114_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012E58u)

/** Alias (User Manual Name) for DMA_CH114_SHADR.
* To use register names with standard convension, please use DMA_CH114_SHADR.
*/
#define	DMA_SHADR114	(DMA_CH114_SHADR)

/** \brief  2E70, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH115_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012E70u)

/** Alias (User Manual Name) for DMA_CH115_ADICR.
* To use register names with standard convension, please use DMA_CH115_ADICR.
*/
#define	DMA_ADICR115	(DMA_CH115_ADICR)

/** \brief  2E74, DMA Channel Configuration Register */
#define DMA_CH115_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012E74u)

/** Alias (User Manual Name) for DMA_CH115_CHCFGR.
* To use register names with standard convension, please use DMA_CH115_CHCFGR.
*/
#define	DMA_CHCFGR115	(DMA_CH115_CHCFGR)

/** \brief  2E7C, DMARAM Channel Control and Status Register */
#define DMA_CH115_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012E7Cu)

/** Alias (User Manual Name) for DMA_CH115_CHCSR.
* To use register names with standard convension, please use DMA_CH115_CHCSR.
*/
#define	DMA_CHCSR115	(DMA_CH115_CHCSR)

/** \brief  2E6C, DMA Channel Destination Address Register x */
#define DMA_CH115_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012E6Cu)

/** Alias (User Manual Name) for DMA_CH115_DADR.
* To use register names with standard convension, please use DMA_CH115_DADR.
*/
#define	DMA_DADR115	(DMA_CH115_DADR)

/** \brief  2E60, DMA Channel Read Data CRC Register */
#define DMA_CH115_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012E60u)

/** Alias (User Manual Name) for DMA_CH115_RDCRCR.
* To use register names with standard convension, please use DMA_CH115_RDCRCR.
*/
#define	DMA_RDCRCR115	(DMA_CH115_RDCRCR)

/** \brief  2E68, DMA Channel Source Address Register */
#define DMA_CH115_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012E68u)

/** Alias (User Manual Name) for DMA_CH115_SADR.
* To use register names with standard convension, please use DMA_CH115_SADR.
*/
#define	DMA_SADR115	(DMA_CH115_SADR)

/** \brief  2E64, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH115_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012E64u)

/** Alias (User Manual Name) for DMA_CH115_SDCRCR.
* To use register names with standard convension, please use DMA_CH115_SDCRCR.
*/
#define	DMA_SDCRCR115	(DMA_CH115_SDCRCR)

/** \brief  2E78, DMA Channel Shadow Address Register */
#define DMA_CH115_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012E78u)

/** Alias (User Manual Name) for DMA_CH115_SHADR.
* To use register names with standard convension, please use DMA_CH115_SHADR.
*/
#define	DMA_SHADR115	(DMA_CH115_SHADR)

/** \brief  2E90, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH116_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012E90u)

/** Alias (User Manual Name) for DMA_CH116_ADICR.
* To use register names with standard convension, please use DMA_CH116_ADICR.
*/
#define	DMA_ADICR116	(DMA_CH116_ADICR)

/** \brief  2E94, DMA Channel Configuration Register */
#define DMA_CH116_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012E94u)

/** Alias (User Manual Name) for DMA_CH116_CHCFGR.
* To use register names with standard convension, please use DMA_CH116_CHCFGR.
*/
#define	DMA_CHCFGR116	(DMA_CH116_CHCFGR)

/** \brief  2E9C, DMARAM Channel Control and Status Register */
#define DMA_CH116_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012E9Cu)

/** Alias (User Manual Name) for DMA_CH116_CHCSR.
* To use register names with standard convension, please use DMA_CH116_CHCSR.
*/
#define	DMA_CHCSR116	(DMA_CH116_CHCSR)

/** \brief  2E8C, DMA Channel Destination Address Register x */
#define DMA_CH116_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012E8Cu)

/** Alias (User Manual Name) for DMA_CH116_DADR.
* To use register names with standard convension, please use DMA_CH116_DADR.
*/
#define	DMA_DADR116	(DMA_CH116_DADR)

/** \brief  2E80, DMA Channel Read Data CRC Register */
#define DMA_CH116_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012E80u)

/** Alias (User Manual Name) for DMA_CH116_RDCRCR.
* To use register names with standard convension, please use DMA_CH116_RDCRCR.
*/
#define	DMA_RDCRCR116	(DMA_CH116_RDCRCR)

/** \brief  2E88, DMA Channel Source Address Register */
#define DMA_CH116_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012E88u)

/** Alias (User Manual Name) for DMA_CH116_SADR.
* To use register names with standard convension, please use DMA_CH116_SADR.
*/
#define	DMA_SADR116	(DMA_CH116_SADR)

/** \brief  2E84, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH116_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012E84u)

/** Alias (User Manual Name) for DMA_CH116_SDCRCR.
* To use register names with standard convension, please use DMA_CH116_SDCRCR.
*/
#define	DMA_SDCRCR116	(DMA_CH116_SDCRCR)

/** \brief  2E98, DMA Channel Shadow Address Register */
#define DMA_CH116_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012E98u)

/** Alias (User Manual Name) for DMA_CH116_SHADR.
* To use register names with standard convension, please use DMA_CH116_SHADR.
*/
#define	DMA_SHADR116	(DMA_CH116_SHADR)

/** \brief  2EB0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH117_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012EB0u)

/** Alias (User Manual Name) for DMA_CH117_ADICR.
* To use register names with standard convension, please use DMA_CH117_ADICR.
*/
#define	DMA_ADICR117	(DMA_CH117_ADICR)

/** \brief  2EB4, DMA Channel Configuration Register */
#define DMA_CH117_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012EB4u)

/** Alias (User Manual Name) for DMA_CH117_CHCFGR.
* To use register names with standard convension, please use DMA_CH117_CHCFGR.
*/
#define	DMA_CHCFGR117	(DMA_CH117_CHCFGR)

/** \brief  2EBC, DMARAM Channel Control and Status Register */
#define DMA_CH117_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012EBCu)

/** Alias (User Manual Name) for DMA_CH117_CHCSR.
* To use register names with standard convension, please use DMA_CH117_CHCSR.
*/
#define	DMA_CHCSR117	(DMA_CH117_CHCSR)

/** \brief  2EAC, DMA Channel Destination Address Register x */
#define DMA_CH117_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012EACu)

/** Alias (User Manual Name) for DMA_CH117_DADR.
* To use register names with standard convension, please use DMA_CH117_DADR.
*/
#define	DMA_DADR117	(DMA_CH117_DADR)

/** \brief  2EA0, DMA Channel Read Data CRC Register */
#define DMA_CH117_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012EA0u)

/** Alias (User Manual Name) for DMA_CH117_RDCRCR.
* To use register names with standard convension, please use DMA_CH117_RDCRCR.
*/
#define	DMA_RDCRCR117	(DMA_CH117_RDCRCR)

/** \brief  2EA8, DMA Channel Source Address Register */
#define DMA_CH117_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012EA8u)

/** Alias (User Manual Name) for DMA_CH117_SADR.
* To use register names with standard convension, please use DMA_CH117_SADR.
*/
#define	DMA_SADR117	(DMA_CH117_SADR)

/** \brief  2EA4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH117_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012EA4u)

/** Alias (User Manual Name) for DMA_CH117_SDCRCR.
* To use register names with standard convension, please use DMA_CH117_SDCRCR.
*/
#define	DMA_SDCRCR117	(DMA_CH117_SDCRCR)

/** \brief  2EB8, DMA Channel Shadow Address Register */
#define DMA_CH117_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012EB8u)

/** Alias (User Manual Name) for DMA_CH117_SHADR.
* To use register names with standard convension, please use DMA_CH117_SHADR.
*/
#define	DMA_SHADR117	(DMA_CH117_SHADR)

/** \brief  2ED0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH118_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012ED0u)

/** Alias (User Manual Name) for DMA_CH118_ADICR.
* To use register names with standard convension, please use DMA_CH118_ADICR.
*/
#define	DMA_ADICR118	(DMA_CH118_ADICR)

/** \brief  2ED4, DMA Channel Configuration Register */
#define DMA_CH118_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012ED4u)

/** Alias (User Manual Name) for DMA_CH118_CHCFGR.
* To use register names with standard convension, please use DMA_CH118_CHCFGR.
*/
#define	DMA_CHCFGR118	(DMA_CH118_CHCFGR)

/** \brief  2EDC, DMARAM Channel Control and Status Register */
#define DMA_CH118_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012EDCu)

/** Alias (User Manual Name) for DMA_CH118_CHCSR.
* To use register names with standard convension, please use DMA_CH118_CHCSR.
*/
#define	DMA_CHCSR118	(DMA_CH118_CHCSR)

/** \brief  2ECC, DMA Channel Destination Address Register x */
#define DMA_CH118_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012ECCu)

/** Alias (User Manual Name) for DMA_CH118_DADR.
* To use register names with standard convension, please use DMA_CH118_DADR.
*/
#define	DMA_DADR118	(DMA_CH118_DADR)

/** \brief  2EC0, DMA Channel Read Data CRC Register */
#define DMA_CH118_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012EC0u)

/** Alias (User Manual Name) for DMA_CH118_RDCRCR.
* To use register names with standard convension, please use DMA_CH118_RDCRCR.
*/
#define	DMA_RDCRCR118	(DMA_CH118_RDCRCR)

/** \brief  2EC8, DMA Channel Source Address Register */
#define DMA_CH118_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012EC8u)

/** Alias (User Manual Name) for DMA_CH118_SADR.
* To use register names with standard convension, please use DMA_CH118_SADR.
*/
#define	DMA_SADR118	(DMA_CH118_SADR)

/** \brief  2EC4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH118_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012EC4u)

/** Alias (User Manual Name) for DMA_CH118_SDCRCR.
* To use register names with standard convension, please use DMA_CH118_SDCRCR.
*/
#define	DMA_SDCRCR118	(DMA_CH118_SDCRCR)

/** \brief  2ED8, DMA Channel Shadow Address Register */
#define DMA_CH118_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012ED8u)

/** Alias (User Manual Name) for DMA_CH118_SHADR.
* To use register names with standard convension, please use DMA_CH118_SHADR.
*/
#define	DMA_SHADR118	(DMA_CH118_SHADR)

/** \brief  2EF0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH119_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012EF0u)

/** Alias (User Manual Name) for DMA_CH119_ADICR.
* To use register names with standard convension, please use DMA_CH119_ADICR.
*/
#define	DMA_ADICR119	(DMA_CH119_ADICR)

/** \brief  2EF4, DMA Channel Configuration Register */
#define DMA_CH119_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012EF4u)

/** Alias (User Manual Name) for DMA_CH119_CHCFGR.
* To use register names with standard convension, please use DMA_CH119_CHCFGR.
*/
#define	DMA_CHCFGR119	(DMA_CH119_CHCFGR)

/** \brief  2EFC, DMARAM Channel Control and Status Register */
#define DMA_CH119_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012EFCu)

/** Alias (User Manual Name) for DMA_CH119_CHCSR.
* To use register names with standard convension, please use DMA_CH119_CHCSR.
*/
#define	DMA_CHCSR119	(DMA_CH119_CHCSR)

/** \brief  2EEC, DMA Channel Destination Address Register x */
#define DMA_CH119_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012EECu)

/** Alias (User Manual Name) for DMA_CH119_DADR.
* To use register names with standard convension, please use DMA_CH119_DADR.
*/
#define	DMA_DADR119	(DMA_CH119_DADR)

/** \brief  2EE0, DMA Channel Read Data CRC Register */
#define DMA_CH119_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012EE0u)

/** Alias (User Manual Name) for DMA_CH119_RDCRCR.
* To use register names with standard convension, please use DMA_CH119_RDCRCR.
*/
#define	DMA_RDCRCR119	(DMA_CH119_RDCRCR)

/** \brief  2EE8, DMA Channel Source Address Register */
#define DMA_CH119_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012EE8u)

/** Alias (User Manual Name) for DMA_CH119_SADR.
* To use register names with standard convension, please use DMA_CH119_SADR.
*/
#define	DMA_SADR119	(DMA_CH119_SADR)

/** \brief  2EE4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH119_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012EE4u)

/** Alias (User Manual Name) for DMA_CH119_SDCRCR.
* To use register names with standard convension, please use DMA_CH119_SDCRCR.
*/
#define	DMA_SDCRCR119	(DMA_CH119_SDCRCR)

/** \brief  2EF8, DMA Channel Shadow Address Register */
#define DMA_CH119_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012EF8u)

/** Alias (User Manual Name) for DMA_CH119_SHADR.
* To use register names with standard convension, please use DMA_CH119_SHADR.
*/
#define	DMA_SHADR119	(DMA_CH119_SHADR)

/** \brief  2170, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH11_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012170u)

/** Alias (User Manual Name) for DMA_CH11_ADICR.
* To use register names with standard convension, please use DMA_CH11_ADICR.
*/
#define	DMA_ADICR011	(DMA_CH11_ADICR)

/** \brief  2174, DMA Channel Configuration Register */
#define DMA_CH11_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012174u)

/** Alias (User Manual Name) for DMA_CH11_CHCFGR.
* To use register names with standard convension, please use DMA_CH11_CHCFGR.
*/
#define	DMA_CHCFGR011	(DMA_CH11_CHCFGR)

/** \brief  217C, DMARAM Channel Control and Status Register */
#define DMA_CH11_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001217Cu)

/** Alias (User Manual Name) for DMA_CH11_CHCSR.
* To use register names with standard convension, please use DMA_CH11_CHCSR.
*/
#define	DMA_CHCSR011	(DMA_CH11_CHCSR)

/** \brief  216C, DMA Channel Destination Address Register x */
#define DMA_CH11_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001216Cu)

/** Alias (User Manual Name) for DMA_CH11_DADR.
* To use register names with standard convension, please use DMA_CH11_DADR.
*/
#define	DMA_DADR011	(DMA_CH11_DADR)

/** \brief  2160, DMA Channel Read Data CRC Register */
#define DMA_CH11_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012160u)

/** Alias (User Manual Name) for DMA_CH11_RDCRCR.
* To use register names with standard convension, please use DMA_CH11_RDCRCR.
*/
#define	DMA_RDCRCR011	(DMA_CH11_RDCRCR)

/** \brief  2168, DMA Channel Source Address Register */
#define DMA_CH11_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012168u)

/** Alias (User Manual Name) for DMA_CH11_SADR.
* To use register names with standard convension, please use DMA_CH11_SADR.
*/
#define	DMA_SADR011	(DMA_CH11_SADR)

/** \brief  2164, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH11_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012164u)

/** Alias (User Manual Name) for DMA_CH11_SDCRCR.
* To use register names with standard convension, please use DMA_CH11_SDCRCR.
*/
#define	DMA_SDCRCR011	(DMA_CH11_SDCRCR)

/** \brief  2178, DMA Channel Shadow Address Register */
#define DMA_CH11_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012178u)

/** Alias (User Manual Name) for DMA_CH11_SHADR.
* To use register names with standard convension, please use DMA_CH11_SHADR.
*/
#define	DMA_SHADR011	(DMA_CH11_SHADR)

/** \brief  2F10, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH120_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012F10u)

/** Alias (User Manual Name) for DMA_CH120_ADICR.
* To use register names with standard convension, please use DMA_CH120_ADICR.
*/
#define	DMA_ADICR120	(DMA_CH120_ADICR)

/** \brief  2F14, DMA Channel Configuration Register */
#define DMA_CH120_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012F14u)

/** Alias (User Manual Name) for DMA_CH120_CHCFGR.
* To use register names with standard convension, please use DMA_CH120_CHCFGR.
*/
#define	DMA_CHCFGR120	(DMA_CH120_CHCFGR)

/** \brief  2F1C, DMARAM Channel Control and Status Register */
#define DMA_CH120_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012F1Cu)

/** Alias (User Manual Name) for DMA_CH120_CHCSR.
* To use register names with standard convension, please use DMA_CH120_CHCSR.
*/
#define	DMA_CHCSR120	(DMA_CH120_CHCSR)

/** \brief  2F0C, DMA Channel Destination Address Register x */
#define DMA_CH120_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012F0Cu)

/** Alias (User Manual Name) for DMA_CH120_DADR.
* To use register names with standard convension, please use DMA_CH120_DADR.
*/
#define	DMA_DADR120	(DMA_CH120_DADR)

/** \brief  2F00, DMA Channel Read Data CRC Register */
#define DMA_CH120_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012F00u)

/** Alias (User Manual Name) for DMA_CH120_RDCRCR.
* To use register names with standard convension, please use DMA_CH120_RDCRCR.
*/
#define	DMA_RDCRCR120	(DMA_CH120_RDCRCR)

/** \brief  2F08, DMA Channel Source Address Register */
#define DMA_CH120_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012F08u)

/** Alias (User Manual Name) for DMA_CH120_SADR.
* To use register names with standard convension, please use DMA_CH120_SADR.
*/
#define	DMA_SADR120	(DMA_CH120_SADR)

/** \brief  2F04, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH120_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012F04u)

/** Alias (User Manual Name) for DMA_CH120_SDCRCR.
* To use register names with standard convension, please use DMA_CH120_SDCRCR.
*/
#define	DMA_SDCRCR120	(DMA_CH120_SDCRCR)

/** \brief  2F18, DMA Channel Shadow Address Register */
#define DMA_CH120_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012F18u)

/** Alias (User Manual Name) for DMA_CH120_SHADR.
* To use register names with standard convension, please use DMA_CH120_SHADR.
*/
#define	DMA_SHADR120	(DMA_CH120_SHADR)

/** \brief  2F30, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH121_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012F30u)

/** Alias (User Manual Name) for DMA_CH121_ADICR.
* To use register names with standard convension, please use DMA_CH121_ADICR.
*/
#define	DMA_ADICR121	(DMA_CH121_ADICR)

/** \brief  2F34, DMA Channel Configuration Register */
#define DMA_CH121_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012F34u)

/** Alias (User Manual Name) for DMA_CH121_CHCFGR.
* To use register names with standard convension, please use DMA_CH121_CHCFGR.
*/
#define	DMA_CHCFGR121	(DMA_CH121_CHCFGR)

/** \brief  2F3C, DMARAM Channel Control and Status Register */
#define DMA_CH121_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012F3Cu)

/** Alias (User Manual Name) for DMA_CH121_CHCSR.
* To use register names with standard convension, please use DMA_CH121_CHCSR.
*/
#define	DMA_CHCSR121	(DMA_CH121_CHCSR)

/** \brief  2F2C, DMA Channel Destination Address Register x */
#define DMA_CH121_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012F2Cu)

/** Alias (User Manual Name) for DMA_CH121_DADR.
* To use register names with standard convension, please use DMA_CH121_DADR.
*/
#define	DMA_DADR121	(DMA_CH121_DADR)

/** \brief  2F20, DMA Channel Read Data CRC Register */
#define DMA_CH121_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012F20u)

/** Alias (User Manual Name) for DMA_CH121_RDCRCR.
* To use register names with standard convension, please use DMA_CH121_RDCRCR.
*/
#define	DMA_RDCRCR121	(DMA_CH121_RDCRCR)

/** \brief  2F28, DMA Channel Source Address Register */
#define DMA_CH121_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012F28u)

/** Alias (User Manual Name) for DMA_CH121_SADR.
* To use register names with standard convension, please use DMA_CH121_SADR.
*/
#define	DMA_SADR121	(DMA_CH121_SADR)

/** \brief  2F24, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH121_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012F24u)

/** Alias (User Manual Name) for DMA_CH121_SDCRCR.
* To use register names with standard convension, please use DMA_CH121_SDCRCR.
*/
#define	DMA_SDCRCR121	(DMA_CH121_SDCRCR)

/** \brief  2F38, DMA Channel Shadow Address Register */
#define DMA_CH121_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012F38u)

/** Alias (User Manual Name) for DMA_CH121_SHADR.
* To use register names with standard convension, please use DMA_CH121_SHADR.
*/
#define	DMA_SHADR121	(DMA_CH121_SHADR)

/** \brief  2F50, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH122_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012F50u)

/** Alias (User Manual Name) for DMA_CH122_ADICR.
* To use register names with standard convension, please use DMA_CH122_ADICR.
*/
#define	DMA_ADICR122	(DMA_CH122_ADICR)

/** \brief  2F54, DMA Channel Configuration Register */
#define DMA_CH122_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012F54u)

/** Alias (User Manual Name) for DMA_CH122_CHCFGR.
* To use register names with standard convension, please use DMA_CH122_CHCFGR.
*/
#define	DMA_CHCFGR122	(DMA_CH122_CHCFGR)

/** \brief  2F5C, DMARAM Channel Control and Status Register */
#define DMA_CH122_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012F5Cu)

/** Alias (User Manual Name) for DMA_CH122_CHCSR.
* To use register names with standard convension, please use DMA_CH122_CHCSR.
*/
#define	DMA_CHCSR122	(DMA_CH122_CHCSR)

/** \brief  2F4C, DMA Channel Destination Address Register x */
#define DMA_CH122_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012F4Cu)

/** Alias (User Manual Name) for DMA_CH122_DADR.
* To use register names with standard convension, please use DMA_CH122_DADR.
*/
#define	DMA_DADR122	(DMA_CH122_DADR)

/** \brief  2F40, DMA Channel Read Data CRC Register */
#define DMA_CH122_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012F40u)

/** Alias (User Manual Name) for DMA_CH122_RDCRCR.
* To use register names with standard convension, please use DMA_CH122_RDCRCR.
*/
#define	DMA_RDCRCR122	(DMA_CH122_RDCRCR)

/** \brief  2F48, DMA Channel Source Address Register */
#define DMA_CH122_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012F48u)

/** Alias (User Manual Name) for DMA_CH122_SADR.
* To use register names with standard convension, please use DMA_CH122_SADR.
*/
#define	DMA_SADR122	(DMA_CH122_SADR)

/** \brief  2F44, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH122_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012F44u)

/** Alias (User Manual Name) for DMA_CH122_SDCRCR.
* To use register names with standard convension, please use DMA_CH122_SDCRCR.
*/
#define	DMA_SDCRCR122	(DMA_CH122_SDCRCR)

/** \brief  2F58, DMA Channel Shadow Address Register */
#define DMA_CH122_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012F58u)

/** Alias (User Manual Name) for DMA_CH122_SHADR.
* To use register names with standard convension, please use DMA_CH122_SHADR.
*/
#define	DMA_SHADR122	(DMA_CH122_SHADR)

/** \brief  2F70, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH123_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012F70u)

/** Alias (User Manual Name) for DMA_CH123_ADICR.
* To use register names with standard convension, please use DMA_CH123_ADICR.
*/
#define	DMA_ADICR123	(DMA_CH123_ADICR)

/** \brief  2F74, DMA Channel Configuration Register */
#define DMA_CH123_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012F74u)

/** Alias (User Manual Name) for DMA_CH123_CHCFGR.
* To use register names with standard convension, please use DMA_CH123_CHCFGR.
*/
#define	DMA_CHCFGR123	(DMA_CH123_CHCFGR)

/** \brief  2F7C, DMARAM Channel Control and Status Register */
#define DMA_CH123_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012F7Cu)

/** Alias (User Manual Name) for DMA_CH123_CHCSR.
* To use register names with standard convension, please use DMA_CH123_CHCSR.
*/
#define	DMA_CHCSR123	(DMA_CH123_CHCSR)

/** \brief  2F6C, DMA Channel Destination Address Register x */
#define DMA_CH123_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012F6Cu)

/** Alias (User Manual Name) for DMA_CH123_DADR.
* To use register names with standard convension, please use DMA_CH123_DADR.
*/
#define	DMA_DADR123	(DMA_CH123_DADR)

/** \brief  2F60, DMA Channel Read Data CRC Register */
#define DMA_CH123_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012F60u)

/** Alias (User Manual Name) for DMA_CH123_RDCRCR.
* To use register names with standard convension, please use DMA_CH123_RDCRCR.
*/
#define	DMA_RDCRCR123	(DMA_CH123_RDCRCR)

/** \brief  2F68, DMA Channel Source Address Register */
#define DMA_CH123_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012F68u)

/** Alias (User Manual Name) for DMA_CH123_SADR.
* To use register names with standard convension, please use DMA_CH123_SADR.
*/
#define	DMA_SADR123	(DMA_CH123_SADR)

/** \brief  2F64, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH123_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012F64u)

/** Alias (User Manual Name) for DMA_CH123_SDCRCR.
* To use register names with standard convension, please use DMA_CH123_SDCRCR.
*/
#define	DMA_SDCRCR123	(DMA_CH123_SDCRCR)

/** \brief  2F78, DMA Channel Shadow Address Register */
#define DMA_CH123_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012F78u)

/** Alias (User Manual Name) for DMA_CH123_SHADR.
* To use register names with standard convension, please use DMA_CH123_SHADR.
*/
#define	DMA_SHADR123	(DMA_CH123_SHADR)

/** \brief  2F90, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH124_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012F90u)

/** Alias (User Manual Name) for DMA_CH124_ADICR.
* To use register names with standard convension, please use DMA_CH124_ADICR.
*/
#define	DMA_ADICR124	(DMA_CH124_ADICR)

/** \brief  2F94, DMA Channel Configuration Register */
#define DMA_CH124_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012F94u)

/** Alias (User Manual Name) for DMA_CH124_CHCFGR.
* To use register names with standard convension, please use DMA_CH124_CHCFGR.
*/
#define	DMA_CHCFGR124	(DMA_CH124_CHCFGR)

/** \brief  2F9C, DMARAM Channel Control and Status Register */
#define DMA_CH124_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012F9Cu)

/** Alias (User Manual Name) for DMA_CH124_CHCSR.
* To use register names with standard convension, please use DMA_CH124_CHCSR.
*/
#define	DMA_CHCSR124	(DMA_CH124_CHCSR)

/** \brief  2F8C, DMA Channel Destination Address Register x */
#define DMA_CH124_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012F8Cu)

/** Alias (User Manual Name) for DMA_CH124_DADR.
* To use register names with standard convension, please use DMA_CH124_DADR.
*/
#define	DMA_DADR124	(DMA_CH124_DADR)

/** \brief  2F80, DMA Channel Read Data CRC Register */
#define DMA_CH124_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012F80u)

/** Alias (User Manual Name) for DMA_CH124_RDCRCR.
* To use register names with standard convension, please use DMA_CH124_RDCRCR.
*/
#define	DMA_RDCRCR124	(DMA_CH124_RDCRCR)

/** \brief  2F88, DMA Channel Source Address Register */
#define DMA_CH124_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012F88u)

/** Alias (User Manual Name) for DMA_CH124_SADR.
* To use register names with standard convension, please use DMA_CH124_SADR.
*/
#define	DMA_SADR124	(DMA_CH124_SADR)

/** \brief  2F84, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH124_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012F84u)

/** Alias (User Manual Name) for DMA_CH124_SDCRCR.
* To use register names with standard convension, please use DMA_CH124_SDCRCR.
*/
#define	DMA_SDCRCR124	(DMA_CH124_SDCRCR)

/** \brief  2F98, DMA Channel Shadow Address Register */
#define DMA_CH124_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012F98u)

/** Alias (User Manual Name) for DMA_CH124_SHADR.
* To use register names with standard convension, please use DMA_CH124_SHADR.
*/
#define	DMA_SHADR124	(DMA_CH124_SHADR)

/** \brief  2FB0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH125_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012FB0u)

/** Alias (User Manual Name) for DMA_CH125_ADICR.
* To use register names with standard convension, please use DMA_CH125_ADICR.
*/
#define	DMA_ADICR125	(DMA_CH125_ADICR)

/** \brief  2FB4, DMA Channel Configuration Register */
#define DMA_CH125_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012FB4u)

/** Alias (User Manual Name) for DMA_CH125_CHCFGR.
* To use register names with standard convension, please use DMA_CH125_CHCFGR.
*/
#define	DMA_CHCFGR125	(DMA_CH125_CHCFGR)

/** \brief  2FBC, DMARAM Channel Control and Status Register */
#define DMA_CH125_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012FBCu)

/** Alias (User Manual Name) for DMA_CH125_CHCSR.
* To use register names with standard convension, please use DMA_CH125_CHCSR.
*/
#define	DMA_CHCSR125	(DMA_CH125_CHCSR)

/** \brief  2FAC, DMA Channel Destination Address Register x */
#define DMA_CH125_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012FACu)

/** Alias (User Manual Name) for DMA_CH125_DADR.
* To use register names with standard convension, please use DMA_CH125_DADR.
*/
#define	DMA_DADR125	(DMA_CH125_DADR)

/** \brief  2FA0, DMA Channel Read Data CRC Register */
#define DMA_CH125_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012FA0u)

/** Alias (User Manual Name) for DMA_CH125_RDCRCR.
* To use register names with standard convension, please use DMA_CH125_RDCRCR.
*/
#define	DMA_RDCRCR125	(DMA_CH125_RDCRCR)

/** \brief  2FA8, DMA Channel Source Address Register */
#define DMA_CH125_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012FA8u)

/** Alias (User Manual Name) for DMA_CH125_SADR.
* To use register names with standard convension, please use DMA_CH125_SADR.
*/
#define	DMA_SADR125	(DMA_CH125_SADR)

/** \brief  2FA4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH125_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012FA4u)

/** Alias (User Manual Name) for DMA_CH125_SDCRCR.
* To use register names with standard convension, please use DMA_CH125_SDCRCR.
*/
#define	DMA_SDCRCR125	(DMA_CH125_SDCRCR)

/** \brief  2FB8, DMA Channel Shadow Address Register */
#define DMA_CH125_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012FB8u)

/** Alias (User Manual Name) for DMA_CH125_SHADR.
* To use register names with standard convension, please use DMA_CH125_SHADR.
*/
#define	DMA_SHADR125	(DMA_CH125_SHADR)

/** \brief  2FD0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH126_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012FD0u)

/** Alias (User Manual Name) for DMA_CH126_ADICR.
* To use register names with standard convension, please use DMA_CH126_ADICR.
*/
#define	DMA_ADICR126	(DMA_CH126_ADICR)

/** \brief  2FD4, DMA Channel Configuration Register */
#define DMA_CH126_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012FD4u)

/** Alias (User Manual Name) for DMA_CH126_CHCFGR.
* To use register names with standard convension, please use DMA_CH126_CHCFGR.
*/
#define	DMA_CHCFGR126	(DMA_CH126_CHCFGR)

/** \brief  2FDC, DMARAM Channel Control and Status Register */
#define DMA_CH126_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012FDCu)

/** Alias (User Manual Name) for DMA_CH126_CHCSR.
* To use register names with standard convension, please use DMA_CH126_CHCSR.
*/
#define	DMA_CHCSR126	(DMA_CH126_CHCSR)

/** \brief  2FCC, DMA Channel Destination Address Register x */
#define DMA_CH126_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012FCCu)

/** Alias (User Manual Name) for DMA_CH126_DADR.
* To use register names with standard convension, please use DMA_CH126_DADR.
*/
#define	DMA_DADR126	(DMA_CH126_DADR)

/** \brief  2FC0, DMA Channel Read Data CRC Register */
#define DMA_CH126_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012FC0u)

/** Alias (User Manual Name) for DMA_CH126_RDCRCR.
* To use register names with standard convension, please use DMA_CH126_RDCRCR.
*/
#define	DMA_RDCRCR126	(DMA_CH126_RDCRCR)

/** \brief  2FC8, DMA Channel Source Address Register */
#define DMA_CH126_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012FC8u)

/** Alias (User Manual Name) for DMA_CH126_SADR.
* To use register names with standard convension, please use DMA_CH126_SADR.
*/
#define	DMA_SADR126	(DMA_CH126_SADR)

/** \brief  2FC4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH126_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012FC4u)

/** Alias (User Manual Name) for DMA_CH126_SDCRCR.
* To use register names with standard convension, please use DMA_CH126_SDCRCR.
*/
#define	DMA_SDCRCR126	(DMA_CH126_SDCRCR)

/** \brief  2FD8, DMA Channel Shadow Address Register */
#define DMA_CH126_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012FD8u)

/** Alias (User Manual Name) for DMA_CH126_SHADR.
* To use register names with standard convension, please use DMA_CH126_SHADR.
*/
#define	DMA_SHADR126	(DMA_CH126_SHADR)

/** \brief  2FF0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH127_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012FF0u)

/** Alias (User Manual Name) for DMA_CH127_ADICR.
* To use register names with standard convension, please use DMA_CH127_ADICR.
*/
#define	DMA_ADICR127	(DMA_CH127_ADICR)

/** \brief  2FF4, DMA Channel Configuration Register */
#define DMA_CH127_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012FF4u)

/** Alias (User Manual Name) for DMA_CH127_CHCFGR.
* To use register names with standard convension, please use DMA_CH127_CHCFGR.
*/
#define	DMA_CHCFGR127	(DMA_CH127_CHCFGR)

/** \brief  2FFC, DMARAM Channel Control and Status Register */
#define DMA_CH127_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012FFCu)

/** Alias (User Manual Name) for DMA_CH127_CHCSR.
* To use register names with standard convension, please use DMA_CH127_CHCSR.
*/
#define	DMA_CHCSR127	(DMA_CH127_CHCSR)

/** \brief  2FEC, DMA Channel Destination Address Register x */
#define DMA_CH127_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012FECu)

/** Alias (User Manual Name) for DMA_CH127_DADR.
* To use register names with standard convension, please use DMA_CH127_DADR.
*/
#define	DMA_DADR127	(DMA_CH127_DADR)

/** \brief  2FE0, DMA Channel Read Data CRC Register */
#define DMA_CH127_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012FE0u)

/** Alias (User Manual Name) for DMA_CH127_RDCRCR.
* To use register names with standard convension, please use DMA_CH127_RDCRCR.
*/
#define	DMA_RDCRCR127	(DMA_CH127_RDCRCR)

/** \brief  2FE8, DMA Channel Source Address Register */
#define DMA_CH127_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012FE8u)

/** Alias (User Manual Name) for DMA_CH127_SADR.
* To use register names with standard convension, please use DMA_CH127_SADR.
*/
#define	DMA_SADR127	(DMA_CH127_SADR)

/** \brief  2FE4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH127_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012FE4u)

/** Alias (User Manual Name) for DMA_CH127_SDCRCR.
* To use register names with standard convension, please use DMA_CH127_SDCRCR.
*/
#define	DMA_SDCRCR127	(DMA_CH127_SDCRCR)

/** \brief  2FF8, DMA Channel Shadow Address Register */
#define DMA_CH127_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012FF8u)

/** Alias (User Manual Name) for DMA_CH127_SHADR.
* To use register names with standard convension, please use DMA_CH127_SHADR.
*/
#define	DMA_SHADR127	(DMA_CH127_SHADR)

/** \brief  2190, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH12_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012190u)

/** Alias (User Manual Name) for DMA_CH12_ADICR.
* To use register names with standard convension, please use DMA_CH12_ADICR.
*/
#define	DMA_ADICR012	(DMA_CH12_ADICR)

/** \brief  2194, DMA Channel Configuration Register */
#define DMA_CH12_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012194u)

/** Alias (User Manual Name) for DMA_CH12_CHCFGR.
* To use register names with standard convension, please use DMA_CH12_CHCFGR.
*/
#define	DMA_CHCFGR012	(DMA_CH12_CHCFGR)

/** \brief  219C, DMARAM Channel Control and Status Register */
#define DMA_CH12_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001219Cu)

/** Alias (User Manual Name) for DMA_CH12_CHCSR.
* To use register names with standard convension, please use DMA_CH12_CHCSR.
*/
#define	DMA_CHCSR012	(DMA_CH12_CHCSR)

/** \brief  218C, DMA Channel Destination Address Register x */
#define DMA_CH12_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001218Cu)

/** Alias (User Manual Name) for DMA_CH12_DADR.
* To use register names with standard convension, please use DMA_CH12_DADR.
*/
#define	DMA_DADR012	(DMA_CH12_DADR)

/** \brief  2180, DMA Channel Read Data CRC Register */
#define DMA_CH12_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012180u)

/** Alias (User Manual Name) for DMA_CH12_RDCRCR.
* To use register names with standard convension, please use DMA_CH12_RDCRCR.
*/
#define	DMA_RDCRCR012	(DMA_CH12_RDCRCR)

/** \brief  2188, DMA Channel Source Address Register */
#define DMA_CH12_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012188u)

/** Alias (User Manual Name) for DMA_CH12_SADR.
* To use register names with standard convension, please use DMA_CH12_SADR.
*/
#define	DMA_SADR012	(DMA_CH12_SADR)

/** \brief  2184, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH12_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012184u)

/** Alias (User Manual Name) for DMA_CH12_SDCRCR.
* To use register names with standard convension, please use DMA_CH12_SDCRCR.
*/
#define	DMA_SDCRCR012	(DMA_CH12_SDCRCR)

/** \brief  2198, DMA Channel Shadow Address Register */
#define DMA_CH12_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012198u)

/** Alias (User Manual Name) for DMA_CH12_SHADR.
* To use register names with standard convension, please use DMA_CH12_SHADR.
*/
#define	DMA_SHADR012	(DMA_CH12_SHADR)

/** \brief  21B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH13_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00121B0u)

/** Alias (User Manual Name) for DMA_CH13_ADICR.
* To use register names with standard convension, please use DMA_CH13_ADICR.
*/
#define	DMA_ADICR013	(DMA_CH13_ADICR)

/** \brief  21B4, DMA Channel Configuration Register */
#define DMA_CH13_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00121B4u)

/** Alias (User Manual Name) for DMA_CH13_CHCFGR.
* To use register names with standard convension, please use DMA_CH13_CHCFGR.
*/
#define	DMA_CHCFGR013	(DMA_CH13_CHCFGR)

/** \brief  21BC, DMARAM Channel Control and Status Register */
#define DMA_CH13_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00121BCu)

/** Alias (User Manual Name) for DMA_CH13_CHCSR.
* To use register names with standard convension, please use DMA_CH13_CHCSR.
*/
#define	DMA_CHCSR013	(DMA_CH13_CHCSR)

/** \brief  21AC, DMA Channel Destination Address Register x */
#define DMA_CH13_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00121ACu)

/** Alias (User Manual Name) for DMA_CH13_DADR.
* To use register names with standard convension, please use DMA_CH13_DADR.
*/
#define	DMA_DADR013	(DMA_CH13_DADR)

/** \brief  21A0, DMA Channel Read Data CRC Register */
#define DMA_CH13_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00121A0u)

/** Alias (User Manual Name) for DMA_CH13_RDCRCR.
* To use register names with standard convension, please use DMA_CH13_RDCRCR.
*/
#define	DMA_RDCRCR013	(DMA_CH13_RDCRCR)

/** \brief  21A8, DMA Channel Source Address Register */
#define DMA_CH13_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00121A8u)

/** Alias (User Manual Name) for DMA_CH13_SADR.
* To use register names with standard convension, please use DMA_CH13_SADR.
*/
#define	DMA_SADR013	(DMA_CH13_SADR)

/** \brief  21A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH13_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00121A4u)

/** Alias (User Manual Name) for DMA_CH13_SDCRCR.
* To use register names with standard convension, please use DMA_CH13_SDCRCR.
*/
#define	DMA_SDCRCR013	(DMA_CH13_SDCRCR)

/** \brief  21B8, DMA Channel Shadow Address Register */
#define DMA_CH13_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00121B8u)

/** Alias (User Manual Name) for DMA_CH13_SHADR.
* To use register names with standard convension, please use DMA_CH13_SHADR.
*/
#define	DMA_SHADR013	(DMA_CH13_SHADR)

/** \brief  21D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH14_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00121D0u)

/** Alias (User Manual Name) for DMA_CH14_ADICR.
* To use register names with standard convension, please use DMA_CH14_ADICR.
*/
#define	DMA_ADICR014	(DMA_CH14_ADICR)

/** \brief  21D4, DMA Channel Configuration Register */
#define DMA_CH14_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00121D4u)

/** Alias (User Manual Name) for DMA_CH14_CHCFGR.
* To use register names with standard convension, please use DMA_CH14_CHCFGR.
*/
#define	DMA_CHCFGR014	(DMA_CH14_CHCFGR)

/** \brief  21DC, DMARAM Channel Control and Status Register */
#define DMA_CH14_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00121DCu)

/** Alias (User Manual Name) for DMA_CH14_CHCSR.
* To use register names with standard convension, please use DMA_CH14_CHCSR.
*/
#define	DMA_CHCSR014	(DMA_CH14_CHCSR)

/** \brief  21CC, DMA Channel Destination Address Register x */
#define DMA_CH14_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00121CCu)

/** Alias (User Manual Name) for DMA_CH14_DADR.
* To use register names with standard convension, please use DMA_CH14_DADR.
*/
#define	DMA_DADR014	(DMA_CH14_DADR)

/** \brief  21C0, DMA Channel Read Data CRC Register */
#define DMA_CH14_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00121C0u)

/** Alias (User Manual Name) for DMA_CH14_RDCRCR.
* To use register names with standard convension, please use DMA_CH14_RDCRCR.
*/
#define	DMA_RDCRCR014	(DMA_CH14_RDCRCR)

/** \brief  21C8, DMA Channel Source Address Register */
#define DMA_CH14_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00121C8u)

/** Alias (User Manual Name) for DMA_CH14_SADR.
* To use register names with standard convension, please use DMA_CH14_SADR.
*/
#define	DMA_SADR014	(DMA_CH14_SADR)

/** \brief  21C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH14_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00121C4u)

/** Alias (User Manual Name) for DMA_CH14_SDCRCR.
* To use register names with standard convension, please use DMA_CH14_SDCRCR.
*/
#define	DMA_SDCRCR014	(DMA_CH14_SDCRCR)

/** \brief  21D8, DMA Channel Shadow Address Register */
#define DMA_CH14_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00121D8u)

/** Alias (User Manual Name) for DMA_CH14_SHADR.
* To use register names with standard convension, please use DMA_CH14_SHADR.
*/
#define	DMA_SHADR014	(DMA_CH14_SHADR)

/** \brief  21F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH15_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00121F0u)

/** Alias (User Manual Name) for DMA_CH15_ADICR.
* To use register names with standard convension, please use DMA_CH15_ADICR.
*/
#define	DMA_ADICR015	(DMA_CH15_ADICR)

/** \brief  21F4, DMA Channel Configuration Register */
#define DMA_CH15_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00121F4u)

/** Alias (User Manual Name) for DMA_CH15_CHCFGR.
* To use register names with standard convension, please use DMA_CH15_CHCFGR.
*/
#define	DMA_CHCFGR015	(DMA_CH15_CHCFGR)

/** \brief  21FC, DMARAM Channel Control and Status Register */
#define DMA_CH15_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00121FCu)

/** Alias (User Manual Name) for DMA_CH15_CHCSR.
* To use register names with standard convension, please use DMA_CH15_CHCSR.
*/
#define	DMA_CHCSR015	(DMA_CH15_CHCSR)

/** \brief  21EC, DMA Channel Destination Address Register x */
#define DMA_CH15_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00121ECu)

/** Alias (User Manual Name) for DMA_CH15_DADR.
* To use register names with standard convension, please use DMA_CH15_DADR.
*/
#define	DMA_DADR015	(DMA_CH15_DADR)

/** \brief  21E0, DMA Channel Read Data CRC Register */
#define DMA_CH15_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00121E0u)

/** Alias (User Manual Name) for DMA_CH15_RDCRCR.
* To use register names with standard convension, please use DMA_CH15_RDCRCR.
*/
#define	DMA_RDCRCR015	(DMA_CH15_RDCRCR)

/** \brief  21E8, DMA Channel Source Address Register */
#define DMA_CH15_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00121E8u)

/** Alias (User Manual Name) for DMA_CH15_SADR.
* To use register names with standard convension, please use DMA_CH15_SADR.
*/
#define	DMA_SADR015	(DMA_CH15_SADR)

/** \brief  21E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH15_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00121E4u)

/** Alias (User Manual Name) for DMA_CH15_SDCRCR.
* To use register names with standard convension, please use DMA_CH15_SDCRCR.
*/
#define	DMA_SDCRCR015	(DMA_CH15_SDCRCR)

/** \brief  21F8, DMA Channel Shadow Address Register */
#define DMA_CH15_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00121F8u)

/** Alias (User Manual Name) for DMA_CH15_SHADR.
* To use register names with standard convension, please use DMA_CH15_SHADR.
*/
#define	DMA_SHADR015	(DMA_CH15_SHADR)

/** \brief  2210, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH16_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012210u)

/** Alias (User Manual Name) for DMA_CH16_ADICR.
* To use register names with standard convension, please use DMA_CH16_ADICR.
*/
#define	DMA_ADICR016	(DMA_CH16_ADICR)

/** \brief  2214, DMA Channel Configuration Register */
#define DMA_CH16_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012214u)

/** Alias (User Manual Name) for DMA_CH16_CHCFGR.
* To use register names with standard convension, please use DMA_CH16_CHCFGR.
*/
#define	DMA_CHCFGR016	(DMA_CH16_CHCFGR)

/** \brief  221C, DMARAM Channel Control and Status Register */
#define DMA_CH16_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001221Cu)

/** Alias (User Manual Name) for DMA_CH16_CHCSR.
* To use register names with standard convension, please use DMA_CH16_CHCSR.
*/
#define	DMA_CHCSR016	(DMA_CH16_CHCSR)

/** \brief  220C, DMA Channel Destination Address Register x */
#define DMA_CH16_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001220Cu)

/** Alias (User Manual Name) for DMA_CH16_DADR.
* To use register names with standard convension, please use DMA_CH16_DADR.
*/
#define	DMA_DADR016	(DMA_CH16_DADR)

/** \brief  2200, DMA Channel Read Data CRC Register */
#define DMA_CH16_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012200u)

/** Alias (User Manual Name) for DMA_CH16_RDCRCR.
* To use register names with standard convension, please use DMA_CH16_RDCRCR.
*/
#define	DMA_RDCRCR016	(DMA_CH16_RDCRCR)

/** \brief  2208, DMA Channel Source Address Register */
#define DMA_CH16_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012208u)

/** Alias (User Manual Name) for DMA_CH16_SADR.
* To use register names with standard convension, please use DMA_CH16_SADR.
*/
#define	DMA_SADR016	(DMA_CH16_SADR)

/** \brief  2204, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH16_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012204u)

/** Alias (User Manual Name) for DMA_CH16_SDCRCR.
* To use register names with standard convension, please use DMA_CH16_SDCRCR.
*/
#define	DMA_SDCRCR016	(DMA_CH16_SDCRCR)

/** \brief  2218, DMA Channel Shadow Address Register */
#define DMA_CH16_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012218u)

/** Alias (User Manual Name) for DMA_CH16_SHADR.
* To use register names with standard convension, please use DMA_CH16_SHADR.
*/
#define	DMA_SHADR016	(DMA_CH16_SHADR)

/** \brief  2230, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH17_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012230u)

/** Alias (User Manual Name) for DMA_CH17_ADICR.
* To use register names with standard convension, please use DMA_CH17_ADICR.
*/
#define	DMA_ADICR017	(DMA_CH17_ADICR)

/** \brief  2234, DMA Channel Configuration Register */
#define DMA_CH17_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012234u)

/** Alias (User Manual Name) for DMA_CH17_CHCFGR.
* To use register names with standard convension, please use DMA_CH17_CHCFGR.
*/
#define	DMA_CHCFGR017	(DMA_CH17_CHCFGR)

/** \brief  223C, DMARAM Channel Control and Status Register */
#define DMA_CH17_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001223Cu)

/** Alias (User Manual Name) for DMA_CH17_CHCSR.
* To use register names with standard convension, please use DMA_CH17_CHCSR.
*/
#define	DMA_CHCSR017	(DMA_CH17_CHCSR)

/** \brief  222C, DMA Channel Destination Address Register x */
#define DMA_CH17_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001222Cu)

/** Alias (User Manual Name) for DMA_CH17_DADR.
* To use register names with standard convension, please use DMA_CH17_DADR.
*/
#define	DMA_DADR017	(DMA_CH17_DADR)

/** \brief  2220, DMA Channel Read Data CRC Register */
#define DMA_CH17_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012220u)

/** Alias (User Manual Name) for DMA_CH17_RDCRCR.
* To use register names with standard convension, please use DMA_CH17_RDCRCR.
*/
#define	DMA_RDCRCR017	(DMA_CH17_RDCRCR)

/** \brief  2228, DMA Channel Source Address Register */
#define DMA_CH17_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012228u)

/** Alias (User Manual Name) for DMA_CH17_SADR.
* To use register names with standard convension, please use DMA_CH17_SADR.
*/
#define	DMA_SADR017	(DMA_CH17_SADR)

/** \brief  2224, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH17_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012224u)

/** Alias (User Manual Name) for DMA_CH17_SDCRCR.
* To use register names with standard convension, please use DMA_CH17_SDCRCR.
*/
#define	DMA_SDCRCR017	(DMA_CH17_SDCRCR)

/** \brief  2238, DMA Channel Shadow Address Register */
#define DMA_CH17_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012238u)

/** Alias (User Manual Name) for DMA_CH17_SHADR.
* To use register names with standard convension, please use DMA_CH17_SHADR.
*/
#define	DMA_SHADR017	(DMA_CH17_SHADR)

/** \brief  2250, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH18_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012250u)

/** Alias (User Manual Name) for DMA_CH18_ADICR.
* To use register names with standard convension, please use DMA_CH18_ADICR.
*/
#define	DMA_ADICR018	(DMA_CH18_ADICR)

/** \brief  2254, DMA Channel Configuration Register */
#define DMA_CH18_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012254u)

/** Alias (User Manual Name) for DMA_CH18_CHCFGR.
* To use register names with standard convension, please use DMA_CH18_CHCFGR.
*/
#define	DMA_CHCFGR018	(DMA_CH18_CHCFGR)

/** \brief  225C, DMARAM Channel Control and Status Register */
#define DMA_CH18_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001225Cu)

/** Alias (User Manual Name) for DMA_CH18_CHCSR.
* To use register names with standard convension, please use DMA_CH18_CHCSR.
*/
#define	DMA_CHCSR018	(DMA_CH18_CHCSR)

/** \brief  224C, DMA Channel Destination Address Register x */
#define DMA_CH18_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001224Cu)

/** Alias (User Manual Name) for DMA_CH18_DADR.
* To use register names with standard convension, please use DMA_CH18_DADR.
*/
#define	DMA_DADR018	(DMA_CH18_DADR)

/** \brief  2240, DMA Channel Read Data CRC Register */
#define DMA_CH18_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012240u)

/** Alias (User Manual Name) for DMA_CH18_RDCRCR.
* To use register names with standard convension, please use DMA_CH18_RDCRCR.
*/
#define	DMA_RDCRCR018	(DMA_CH18_RDCRCR)

/** \brief  2248, DMA Channel Source Address Register */
#define DMA_CH18_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012248u)

/** Alias (User Manual Name) for DMA_CH18_SADR.
* To use register names with standard convension, please use DMA_CH18_SADR.
*/
#define	DMA_SADR018	(DMA_CH18_SADR)

/** \brief  2244, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH18_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012244u)

/** Alias (User Manual Name) for DMA_CH18_SDCRCR.
* To use register names with standard convension, please use DMA_CH18_SDCRCR.
*/
#define	DMA_SDCRCR018	(DMA_CH18_SDCRCR)

/** \brief  2258, DMA Channel Shadow Address Register */
#define DMA_CH18_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012258u)

/** Alias (User Manual Name) for DMA_CH18_SHADR.
* To use register names with standard convension, please use DMA_CH18_SHADR.
*/
#define	DMA_SHADR018	(DMA_CH18_SHADR)

/** \brief  2270, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH19_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012270u)

/** Alias (User Manual Name) for DMA_CH19_ADICR.
* To use register names with standard convension, please use DMA_CH19_ADICR.
*/
#define	DMA_ADICR019	(DMA_CH19_ADICR)

/** \brief  2274, DMA Channel Configuration Register */
#define DMA_CH19_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012274u)

/** Alias (User Manual Name) for DMA_CH19_CHCFGR.
* To use register names with standard convension, please use DMA_CH19_CHCFGR.
*/
#define	DMA_CHCFGR019	(DMA_CH19_CHCFGR)

/** \brief  227C, DMARAM Channel Control and Status Register */
#define DMA_CH19_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001227Cu)

/** Alias (User Manual Name) for DMA_CH19_CHCSR.
* To use register names with standard convension, please use DMA_CH19_CHCSR.
*/
#define	DMA_CHCSR019	(DMA_CH19_CHCSR)

/** \brief  226C, DMA Channel Destination Address Register x */
#define DMA_CH19_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001226Cu)

/** Alias (User Manual Name) for DMA_CH19_DADR.
* To use register names with standard convension, please use DMA_CH19_DADR.
*/
#define	DMA_DADR019	(DMA_CH19_DADR)

/** \brief  2260, DMA Channel Read Data CRC Register */
#define DMA_CH19_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012260u)

/** Alias (User Manual Name) for DMA_CH19_RDCRCR.
* To use register names with standard convension, please use DMA_CH19_RDCRCR.
*/
#define	DMA_RDCRCR019	(DMA_CH19_RDCRCR)

/** \brief  2268, DMA Channel Source Address Register */
#define DMA_CH19_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012268u)

/** Alias (User Manual Name) for DMA_CH19_SADR.
* To use register names with standard convension, please use DMA_CH19_SADR.
*/
#define	DMA_SADR019	(DMA_CH19_SADR)

/** \brief  2264, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH19_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012264u)

/** Alias (User Manual Name) for DMA_CH19_SDCRCR.
* To use register names with standard convension, please use DMA_CH19_SDCRCR.
*/
#define	DMA_SDCRCR019	(DMA_CH19_SDCRCR)

/** \brief  2278, DMA Channel Shadow Address Register */
#define DMA_CH19_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012278u)

/** Alias (User Manual Name) for DMA_CH19_SHADR.
* To use register names with standard convension, please use DMA_CH19_SHADR.
*/
#define	DMA_SHADR019	(DMA_CH19_SHADR)

/** \brief  2030, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH1_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012030u)

/** Alias (User Manual Name) for DMA_CH1_ADICR.
* To use register names with standard convension, please use DMA_CH1_ADICR.
*/
#define	DMA_ADICR001	(DMA_CH1_ADICR)

/** \brief  2034, DMA Channel Configuration Register */
#define DMA_CH1_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012034u)

/** Alias (User Manual Name) for DMA_CH1_CHCFGR.
* To use register names with standard convension, please use DMA_CH1_CHCFGR.
*/
#define	DMA_CHCFGR001	(DMA_CH1_CHCFGR)

/** \brief  203C, DMARAM Channel Control and Status Register */
#define DMA_CH1_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001203Cu)

/** Alias (User Manual Name) for DMA_CH1_CHCSR.
* To use register names with standard convension, please use DMA_CH1_CHCSR.
*/
#define	DMA_CHCSR001	(DMA_CH1_CHCSR)

/** \brief  202C, DMA Channel Destination Address Register x */
#define DMA_CH1_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001202Cu)

/** Alias (User Manual Name) for DMA_CH1_DADR.
* To use register names with standard convension, please use DMA_CH1_DADR.
*/
#define	DMA_DADR001	(DMA_CH1_DADR)

/** \brief  2020, DMA Channel Read Data CRC Register */
#define DMA_CH1_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012020u)

/** Alias (User Manual Name) for DMA_CH1_RDCRCR.
* To use register names with standard convension, please use DMA_CH1_RDCRCR.
*/
#define	DMA_RDCRCR001	(DMA_CH1_RDCRCR)

/** \brief  2028, DMA Channel Source Address Register */
#define DMA_CH1_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012028u)

/** Alias (User Manual Name) for DMA_CH1_SADR.
* To use register names with standard convension, please use DMA_CH1_SADR.
*/
#define	DMA_SADR001	(DMA_CH1_SADR)

/** \brief  2024, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH1_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012024u)

/** Alias (User Manual Name) for DMA_CH1_SDCRCR.
* To use register names with standard convension, please use DMA_CH1_SDCRCR.
*/
#define	DMA_SDCRCR001	(DMA_CH1_SDCRCR)

/** \brief  2038, DMA Channel Shadow Address Register */
#define DMA_CH1_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012038u)

/** Alias (User Manual Name) for DMA_CH1_SHADR.
* To use register names with standard convension, please use DMA_CH1_SHADR.
*/
#define	DMA_SHADR001	(DMA_CH1_SHADR)

/** \brief  2290, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH20_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012290u)

/** Alias (User Manual Name) for DMA_CH20_ADICR.
* To use register names with standard convension, please use DMA_CH20_ADICR.
*/
#define	DMA_ADICR020	(DMA_CH20_ADICR)

/** \brief  2294, DMA Channel Configuration Register */
#define DMA_CH20_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012294u)

/** Alias (User Manual Name) for DMA_CH20_CHCFGR.
* To use register names with standard convension, please use DMA_CH20_CHCFGR.
*/
#define	DMA_CHCFGR020	(DMA_CH20_CHCFGR)

/** \brief  229C, DMARAM Channel Control and Status Register */
#define DMA_CH20_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001229Cu)

/** Alias (User Manual Name) for DMA_CH20_CHCSR.
* To use register names with standard convension, please use DMA_CH20_CHCSR.
*/
#define	DMA_CHCSR020	(DMA_CH20_CHCSR)

/** \brief  228C, DMA Channel Destination Address Register x */
#define DMA_CH20_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001228Cu)

/** Alias (User Manual Name) for DMA_CH20_DADR.
* To use register names with standard convension, please use DMA_CH20_DADR.
*/
#define	DMA_DADR020	(DMA_CH20_DADR)

/** \brief  2280, DMA Channel Read Data CRC Register */
#define DMA_CH20_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012280u)

/** Alias (User Manual Name) for DMA_CH20_RDCRCR.
* To use register names with standard convension, please use DMA_CH20_RDCRCR.
*/
#define	DMA_RDCRCR020	(DMA_CH20_RDCRCR)

/** \brief  2288, DMA Channel Source Address Register */
#define DMA_CH20_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012288u)

/** Alias (User Manual Name) for DMA_CH20_SADR.
* To use register names with standard convension, please use DMA_CH20_SADR.
*/
#define	DMA_SADR020	(DMA_CH20_SADR)

/** \brief  2284, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH20_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012284u)

/** Alias (User Manual Name) for DMA_CH20_SDCRCR.
* To use register names with standard convension, please use DMA_CH20_SDCRCR.
*/
#define	DMA_SDCRCR020	(DMA_CH20_SDCRCR)

/** \brief  2298, DMA Channel Shadow Address Register */
#define DMA_CH20_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012298u)

/** Alias (User Manual Name) for DMA_CH20_SHADR.
* To use register names with standard convension, please use DMA_CH20_SHADR.
*/
#define	DMA_SHADR020	(DMA_CH20_SHADR)

/** \brief  22B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH21_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00122B0u)

/** Alias (User Manual Name) for DMA_CH21_ADICR.
* To use register names with standard convension, please use DMA_CH21_ADICR.
*/
#define	DMA_ADICR021	(DMA_CH21_ADICR)

/** \brief  22B4, DMA Channel Configuration Register */
#define DMA_CH21_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00122B4u)

/** Alias (User Manual Name) for DMA_CH21_CHCFGR.
* To use register names with standard convension, please use DMA_CH21_CHCFGR.
*/
#define	DMA_CHCFGR021	(DMA_CH21_CHCFGR)

/** \brief  22BC, DMARAM Channel Control and Status Register */
#define DMA_CH21_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00122BCu)

/** Alias (User Manual Name) for DMA_CH21_CHCSR.
* To use register names with standard convension, please use DMA_CH21_CHCSR.
*/
#define	DMA_CHCSR021	(DMA_CH21_CHCSR)

/** \brief  22AC, DMA Channel Destination Address Register x */
#define DMA_CH21_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00122ACu)

/** Alias (User Manual Name) for DMA_CH21_DADR.
* To use register names with standard convension, please use DMA_CH21_DADR.
*/
#define	DMA_DADR021	(DMA_CH21_DADR)

/** \brief  22A0, DMA Channel Read Data CRC Register */
#define DMA_CH21_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00122A0u)

/** Alias (User Manual Name) for DMA_CH21_RDCRCR.
* To use register names with standard convension, please use DMA_CH21_RDCRCR.
*/
#define	DMA_RDCRCR021	(DMA_CH21_RDCRCR)

/** \brief  22A8, DMA Channel Source Address Register */
#define DMA_CH21_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00122A8u)

/** Alias (User Manual Name) for DMA_CH21_SADR.
* To use register names with standard convension, please use DMA_CH21_SADR.
*/
#define	DMA_SADR021	(DMA_CH21_SADR)

/** \brief  22A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH21_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00122A4u)

/** Alias (User Manual Name) for DMA_CH21_SDCRCR.
* To use register names with standard convension, please use DMA_CH21_SDCRCR.
*/
#define	DMA_SDCRCR021	(DMA_CH21_SDCRCR)

/** \brief  22B8, DMA Channel Shadow Address Register */
#define DMA_CH21_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00122B8u)

/** Alias (User Manual Name) for DMA_CH21_SHADR.
* To use register names with standard convension, please use DMA_CH21_SHADR.
*/
#define	DMA_SHADR021	(DMA_CH21_SHADR)

/** \brief  22D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH22_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00122D0u)

/** Alias (User Manual Name) for DMA_CH22_ADICR.
* To use register names with standard convension, please use DMA_CH22_ADICR.
*/
#define	DMA_ADICR022	(DMA_CH22_ADICR)

/** \brief  22D4, DMA Channel Configuration Register */
#define DMA_CH22_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00122D4u)

/** Alias (User Manual Name) for DMA_CH22_CHCFGR.
* To use register names with standard convension, please use DMA_CH22_CHCFGR.
*/
#define	DMA_CHCFGR022	(DMA_CH22_CHCFGR)

/** \brief  22DC, DMARAM Channel Control and Status Register */
#define DMA_CH22_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00122DCu)

/** Alias (User Manual Name) for DMA_CH22_CHCSR.
* To use register names with standard convension, please use DMA_CH22_CHCSR.
*/
#define	DMA_CHCSR022	(DMA_CH22_CHCSR)

/** \brief  22CC, DMA Channel Destination Address Register x */
#define DMA_CH22_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00122CCu)

/** Alias (User Manual Name) for DMA_CH22_DADR.
* To use register names with standard convension, please use DMA_CH22_DADR.
*/
#define	DMA_DADR022	(DMA_CH22_DADR)

/** \brief  22C0, DMA Channel Read Data CRC Register */
#define DMA_CH22_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00122C0u)

/** Alias (User Manual Name) for DMA_CH22_RDCRCR.
* To use register names with standard convension, please use DMA_CH22_RDCRCR.
*/
#define	DMA_RDCRCR022	(DMA_CH22_RDCRCR)

/** \brief  22C8, DMA Channel Source Address Register */
#define DMA_CH22_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00122C8u)

/** Alias (User Manual Name) for DMA_CH22_SADR.
* To use register names with standard convension, please use DMA_CH22_SADR.
*/
#define	DMA_SADR022	(DMA_CH22_SADR)

/** \brief  22C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH22_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00122C4u)

/** Alias (User Manual Name) for DMA_CH22_SDCRCR.
* To use register names with standard convension, please use DMA_CH22_SDCRCR.
*/
#define	DMA_SDCRCR022	(DMA_CH22_SDCRCR)

/** \brief  22D8, DMA Channel Shadow Address Register */
#define DMA_CH22_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00122D8u)

/** Alias (User Manual Name) for DMA_CH22_SHADR.
* To use register names with standard convension, please use DMA_CH22_SHADR.
*/
#define	DMA_SHADR022	(DMA_CH22_SHADR)

/** \brief  22F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH23_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00122F0u)

/** Alias (User Manual Name) for DMA_CH23_ADICR.
* To use register names with standard convension, please use DMA_CH23_ADICR.
*/
#define	DMA_ADICR023	(DMA_CH23_ADICR)

/** \brief  22F4, DMA Channel Configuration Register */
#define DMA_CH23_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00122F4u)

/** Alias (User Manual Name) for DMA_CH23_CHCFGR.
* To use register names with standard convension, please use DMA_CH23_CHCFGR.
*/
#define	DMA_CHCFGR023	(DMA_CH23_CHCFGR)

/** \brief  22FC, DMARAM Channel Control and Status Register */
#define DMA_CH23_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00122FCu)

/** Alias (User Manual Name) for DMA_CH23_CHCSR.
* To use register names with standard convension, please use DMA_CH23_CHCSR.
*/
#define	DMA_CHCSR023	(DMA_CH23_CHCSR)

/** \brief  22EC, DMA Channel Destination Address Register x */
#define DMA_CH23_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00122ECu)

/** Alias (User Manual Name) for DMA_CH23_DADR.
* To use register names with standard convension, please use DMA_CH23_DADR.
*/
#define	DMA_DADR023	(DMA_CH23_DADR)

/** \brief  22E0, DMA Channel Read Data CRC Register */
#define DMA_CH23_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00122E0u)

/** Alias (User Manual Name) for DMA_CH23_RDCRCR.
* To use register names with standard convension, please use DMA_CH23_RDCRCR.
*/
#define	DMA_RDCRCR023	(DMA_CH23_RDCRCR)

/** \brief  22E8, DMA Channel Source Address Register */
#define DMA_CH23_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00122E8u)

/** Alias (User Manual Name) for DMA_CH23_SADR.
* To use register names with standard convension, please use DMA_CH23_SADR.
*/
#define	DMA_SADR023	(DMA_CH23_SADR)

/** \brief  22E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH23_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00122E4u)

/** Alias (User Manual Name) for DMA_CH23_SDCRCR.
* To use register names with standard convension, please use DMA_CH23_SDCRCR.
*/
#define	DMA_SDCRCR023	(DMA_CH23_SDCRCR)

/** \brief  22F8, DMA Channel Shadow Address Register */
#define DMA_CH23_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00122F8u)

/** Alias (User Manual Name) for DMA_CH23_SHADR.
* To use register names with standard convension, please use DMA_CH23_SHADR.
*/
#define	DMA_SHADR023	(DMA_CH23_SHADR)

/** \brief  2310, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH24_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012310u)

/** Alias (User Manual Name) for DMA_CH24_ADICR.
* To use register names with standard convension, please use DMA_CH24_ADICR.
*/
#define	DMA_ADICR024	(DMA_CH24_ADICR)

/** \brief  2314, DMA Channel Configuration Register */
#define DMA_CH24_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012314u)

/** Alias (User Manual Name) for DMA_CH24_CHCFGR.
* To use register names with standard convension, please use DMA_CH24_CHCFGR.
*/
#define	DMA_CHCFGR024	(DMA_CH24_CHCFGR)

/** \brief  231C, DMARAM Channel Control and Status Register */
#define DMA_CH24_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001231Cu)

/** Alias (User Manual Name) for DMA_CH24_CHCSR.
* To use register names with standard convension, please use DMA_CH24_CHCSR.
*/
#define	DMA_CHCSR024	(DMA_CH24_CHCSR)

/** \brief  230C, DMA Channel Destination Address Register x */
#define DMA_CH24_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001230Cu)

/** Alias (User Manual Name) for DMA_CH24_DADR.
* To use register names with standard convension, please use DMA_CH24_DADR.
*/
#define	DMA_DADR024	(DMA_CH24_DADR)

/** \brief  2300, DMA Channel Read Data CRC Register */
#define DMA_CH24_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012300u)

/** Alias (User Manual Name) for DMA_CH24_RDCRCR.
* To use register names with standard convension, please use DMA_CH24_RDCRCR.
*/
#define	DMA_RDCRCR024	(DMA_CH24_RDCRCR)

/** \brief  2308, DMA Channel Source Address Register */
#define DMA_CH24_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012308u)

/** Alias (User Manual Name) for DMA_CH24_SADR.
* To use register names with standard convension, please use DMA_CH24_SADR.
*/
#define	DMA_SADR024	(DMA_CH24_SADR)

/** \brief  2304, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH24_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012304u)

/** Alias (User Manual Name) for DMA_CH24_SDCRCR.
* To use register names with standard convension, please use DMA_CH24_SDCRCR.
*/
#define	DMA_SDCRCR024	(DMA_CH24_SDCRCR)

/** \brief  2318, DMA Channel Shadow Address Register */
#define DMA_CH24_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012318u)

/** Alias (User Manual Name) for DMA_CH24_SHADR.
* To use register names with standard convension, please use DMA_CH24_SHADR.
*/
#define	DMA_SHADR024	(DMA_CH24_SHADR)

/** \brief  2330, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH25_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012330u)

/** Alias (User Manual Name) for DMA_CH25_ADICR.
* To use register names with standard convension, please use DMA_CH25_ADICR.
*/
#define	DMA_ADICR025	(DMA_CH25_ADICR)

/** \brief  2334, DMA Channel Configuration Register */
#define DMA_CH25_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012334u)

/** Alias (User Manual Name) for DMA_CH25_CHCFGR.
* To use register names with standard convension, please use DMA_CH25_CHCFGR.
*/
#define	DMA_CHCFGR025	(DMA_CH25_CHCFGR)

/** \brief  233C, DMARAM Channel Control and Status Register */
#define DMA_CH25_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001233Cu)

/** Alias (User Manual Name) for DMA_CH25_CHCSR.
* To use register names with standard convension, please use DMA_CH25_CHCSR.
*/
#define	DMA_CHCSR025	(DMA_CH25_CHCSR)

/** \brief  232C, DMA Channel Destination Address Register x */
#define DMA_CH25_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001232Cu)

/** Alias (User Manual Name) for DMA_CH25_DADR.
* To use register names with standard convension, please use DMA_CH25_DADR.
*/
#define	DMA_DADR025	(DMA_CH25_DADR)

/** \brief  2320, DMA Channel Read Data CRC Register */
#define DMA_CH25_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012320u)

/** Alias (User Manual Name) for DMA_CH25_RDCRCR.
* To use register names with standard convension, please use DMA_CH25_RDCRCR.
*/
#define	DMA_RDCRCR025	(DMA_CH25_RDCRCR)

/** \brief  2328, DMA Channel Source Address Register */
#define DMA_CH25_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012328u)

/** Alias (User Manual Name) for DMA_CH25_SADR.
* To use register names with standard convension, please use DMA_CH25_SADR.
*/
#define	DMA_SADR025	(DMA_CH25_SADR)

/** \brief  2324, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH25_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012324u)

/** Alias (User Manual Name) for DMA_CH25_SDCRCR.
* To use register names with standard convension, please use DMA_CH25_SDCRCR.
*/
#define	DMA_SDCRCR025	(DMA_CH25_SDCRCR)

/** \brief  2338, DMA Channel Shadow Address Register */
#define DMA_CH25_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012338u)

/** Alias (User Manual Name) for DMA_CH25_SHADR.
* To use register names with standard convension, please use DMA_CH25_SHADR.
*/
#define	DMA_SHADR025	(DMA_CH25_SHADR)

/** \brief  2350, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH26_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012350u)

/** Alias (User Manual Name) for DMA_CH26_ADICR.
* To use register names with standard convension, please use DMA_CH26_ADICR.
*/
#define	DMA_ADICR026	(DMA_CH26_ADICR)

/** \brief  2354, DMA Channel Configuration Register */
#define DMA_CH26_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012354u)

/** Alias (User Manual Name) for DMA_CH26_CHCFGR.
* To use register names with standard convension, please use DMA_CH26_CHCFGR.
*/
#define	DMA_CHCFGR026	(DMA_CH26_CHCFGR)

/** \brief  235C, DMARAM Channel Control and Status Register */
#define DMA_CH26_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001235Cu)

/** Alias (User Manual Name) for DMA_CH26_CHCSR.
* To use register names with standard convension, please use DMA_CH26_CHCSR.
*/
#define	DMA_CHCSR026	(DMA_CH26_CHCSR)

/** \brief  234C, DMA Channel Destination Address Register x */
#define DMA_CH26_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001234Cu)

/** Alias (User Manual Name) for DMA_CH26_DADR.
* To use register names with standard convension, please use DMA_CH26_DADR.
*/
#define	DMA_DADR026	(DMA_CH26_DADR)

/** \brief  2340, DMA Channel Read Data CRC Register */
#define DMA_CH26_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012340u)

/** Alias (User Manual Name) for DMA_CH26_RDCRCR.
* To use register names with standard convension, please use DMA_CH26_RDCRCR.
*/
#define	DMA_RDCRCR026	(DMA_CH26_RDCRCR)

/** \brief  2348, DMA Channel Source Address Register */
#define DMA_CH26_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012348u)

/** Alias (User Manual Name) for DMA_CH26_SADR.
* To use register names with standard convension, please use DMA_CH26_SADR.
*/
#define	DMA_SADR026	(DMA_CH26_SADR)

/** \brief  2344, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH26_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012344u)

/** Alias (User Manual Name) for DMA_CH26_SDCRCR.
* To use register names with standard convension, please use DMA_CH26_SDCRCR.
*/
#define	DMA_SDCRCR026	(DMA_CH26_SDCRCR)

/** \brief  2358, DMA Channel Shadow Address Register */
#define DMA_CH26_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012358u)

/** Alias (User Manual Name) for DMA_CH26_SHADR.
* To use register names with standard convension, please use DMA_CH26_SHADR.
*/
#define	DMA_SHADR026	(DMA_CH26_SHADR)

/** \brief  2370, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH27_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012370u)

/** Alias (User Manual Name) for DMA_CH27_ADICR.
* To use register names with standard convension, please use DMA_CH27_ADICR.
*/
#define	DMA_ADICR027	(DMA_CH27_ADICR)

/** \brief  2374, DMA Channel Configuration Register */
#define DMA_CH27_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012374u)

/** Alias (User Manual Name) for DMA_CH27_CHCFGR.
* To use register names with standard convension, please use DMA_CH27_CHCFGR.
*/
#define	DMA_CHCFGR027	(DMA_CH27_CHCFGR)

/** \brief  237C, DMARAM Channel Control and Status Register */
#define DMA_CH27_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001237Cu)

/** Alias (User Manual Name) for DMA_CH27_CHCSR.
* To use register names with standard convension, please use DMA_CH27_CHCSR.
*/
#define	DMA_CHCSR027	(DMA_CH27_CHCSR)

/** \brief  236C, DMA Channel Destination Address Register x */
#define DMA_CH27_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001236Cu)

/** Alias (User Manual Name) for DMA_CH27_DADR.
* To use register names with standard convension, please use DMA_CH27_DADR.
*/
#define	DMA_DADR027	(DMA_CH27_DADR)

/** \brief  2360, DMA Channel Read Data CRC Register */
#define DMA_CH27_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012360u)

/** Alias (User Manual Name) for DMA_CH27_RDCRCR.
* To use register names with standard convension, please use DMA_CH27_RDCRCR.
*/
#define	DMA_RDCRCR027	(DMA_CH27_RDCRCR)

/** \brief  2368, DMA Channel Source Address Register */
#define DMA_CH27_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012368u)

/** Alias (User Manual Name) for DMA_CH27_SADR.
* To use register names with standard convension, please use DMA_CH27_SADR.
*/
#define	DMA_SADR027	(DMA_CH27_SADR)

/** \brief  2364, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH27_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012364u)

/** Alias (User Manual Name) for DMA_CH27_SDCRCR.
* To use register names with standard convension, please use DMA_CH27_SDCRCR.
*/
#define	DMA_SDCRCR027	(DMA_CH27_SDCRCR)

/** \brief  2378, DMA Channel Shadow Address Register */
#define DMA_CH27_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012378u)

/** Alias (User Manual Name) for DMA_CH27_SHADR.
* To use register names with standard convension, please use DMA_CH27_SHADR.
*/
#define	DMA_SHADR027	(DMA_CH27_SHADR)

/** \brief  2390, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH28_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012390u)

/** Alias (User Manual Name) for DMA_CH28_ADICR.
* To use register names with standard convension, please use DMA_CH28_ADICR.
*/
#define	DMA_ADICR028	(DMA_CH28_ADICR)

/** \brief  2394, DMA Channel Configuration Register */
#define DMA_CH28_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012394u)

/** Alias (User Manual Name) for DMA_CH28_CHCFGR.
* To use register names with standard convension, please use DMA_CH28_CHCFGR.
*/
#define	DMA_CHCFGR028	(DMA_CH28_CHCFGR)

/** \brief  239C, DMARAM Channel Control and Status Register */
#define DMA_CH28_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001239Cu)

/** Alias (User Manual Name) for DMA_CH28_CHCSR.
* To use register names with standard convension, please use DMA_CH28_CHCSR.
*/
#define	DMA_CHCSR028	(DMA_CH28_CHCSR)

/** \brief  238C, DMA Channel Destination Address Register x */
#define DMA_CH28_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001238Cu)

/** Alias (User Manual Name) for DMA_CH28_DADR.
* To use register names with standard convension, please use DMA_CH28_DADR.
*/
#define	DMA_DADR028	(DMA_CH28_DADR)

/** \brief  2380, DMA Channel Read Data CRC Register */
#define DMA_CH28_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012380u)

/** Alias (User Manual Name) for DMA_CH28_RDCRCR.
* To use register names with standard convension, please use DMA_CH28_RDCRCR.
*/
#define	DMA_RDCRCR028	(DMA_CH28_RDCRCR)

/** \brief  2388, DMA Channel Source Address Register */
#define DMA_CH28_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012388u)

/** Alias (User Manual Name) for DMA_CH28_SADR.
* To use register names with standard convension, please use DMA_CH28_SADR.
*/
#define	DMA_SADR028	(DMA_CH28_SADR)

/** \brief  2384, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH28_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012384u)

/** Alias (User Manual Name) for DMA_CH28_SDCRCR.
* To use register names with standard convension, please use DMA_CH28_SDCRCR.
*/
#define	DMA_SDCRCR028	(DMA_CH28_SDCRCR)

/** \brief  2398, DMA Channel Shadow Address Register */
#define DMA_CH28_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012398u)

/** Alias (User Manual Name) for DMA_CH28_SHADR.
* To use register names with standard convension, please use DMA_CH28_SHADR.
*/
#define	DMA_SHADR028	(DMA_CH28_SHADR)

/** \brief  23B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH29_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00123B0u)

/** Alias (User Manual Name) for DMA_CH29_ADICR.
* To use register names with standard convension, please use DMA_CH29_ADICR.
*/
#define	DMA_ADICR029	(DMA_CH29_ADICR)

/** \brief  23B4, DMA Channel Configuration Register */
#define DMA_CH29_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00123B4u)

/** Alias (User Manual Name) for DMA_CH29_CHCFGR.
* To use register names with standard convension, please use DMA_CH29_CHCFGR.
*/
#define	DMA_CHCFGR029	(DMA_CH29_CHCFGR)

/** \brief  23BC, DMARAM Channel Control and Status Register */
#define DMA_CH29_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00123BCu)

/** Alias (User Manual Name) for DMA_CH29_CHCSR.
* To use register names with standard convension, please use DMA_CH29_CHCSR.
*/
#define	DMA_CHCSR029	(DMA_CH29_CHCSR)

/** \brief  23AC, DMA Channel Destination Address Register x */
#define DMA_CH29_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00123ACu)

/** Alias (User Manual Name) for DMA_CH29_DADR.
* To use register names with standard convension, please use DMA_CH29_DADR.
*/
#define	DMA_DADR029	(DMA_CH29_DADR)

/** \brief  23A0, DMA Channel Read Data CRC Register */
#define DMA_CH29_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00123A0u)

/** Alias (User Manual Name) for DMA_CH29_RDCRCR.
* To use register names with standard convension, please use DMA_CH29_RDCRCR.
*/
#define	DMA_RDCRCR029	(DMA_CH29_RDCRCR)

/** \brief  23A8, DMA Channel Source Address Register */
#define DMA_CH29_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00123A8u)

/** Alias (User Manual Name) for DMA_CH29_SADR.
* To use register names with standard convension, please use DMA_CH29_SADR.
*/
#define	DMA_SADR029	(DMA_CH29_SADR)

/** \brief  23A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH29_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00123A4u)

/** Alias (User Manual Name) for DMA_CH29_SDCRCR.
* To use register names with standard convension, please use DMA_CH29_SDCRCR.
*/
#define	DMA_SDCRCR029	(DMA_CH29_SDCRCR)

/** \brief  23B8, DMA Channel Shadow Address Register */
#define DMA_CH29_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00123B8u)

/** Alias (User Manual Name) for DMA_CH29_SHADR.
* To use register names with standard convension, please use DMA_CH29_SHADR.
*/
#define	DMA_SHADR029	(DMA_CH29_SHADR)

/** \brief  2050, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH2_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012050u)

/** Alias (User Manual Name) for DMA_CH2_ADICR.
* To use register names with standard convension, please use DMA_CH2_ADICR.
*/
#define	DMA_ADICR002	(DMA_CH2_ADICR)

/** \brief  2054, DMA Channel Configuration Register */
#define DMA_CH2_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012054u)

/** Alias (User Manual Name) for DMA_CH2_CHCFGR.
* To use register names with standard convension, please use DMA_CH2_CHCFGR.
*/
#define	DMA_CHCFGR002	(DMA_CH2_CHCFGR)

/** \brief  205C, DMARAM Channel Control and Status Register */
#define DMA_CH2_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001205Cu)

/** Alias (User Manual Name) for DMA_CH2_CHCSR.
* To use register names with standard convension, please use DMA_CH2_CHCSR.
*/
#define	DMA_CHCSR002	(DMA_CH2_CHCSR)

/** \brief  204C, DMA Channel Destination Address Register x */
#define DMA_CH2_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001204Cu)

/** Alias (User Manual Name) for DMA_CH2_DADR.
* To use register names with standard convension, please use DMA_CH2_DADR.
*/
#define	DMA_DADR002	(DMA_CH2_DADR)

/** \brief  2040, DMA Channel Read Data CRC Register */
#define DMA_CH2_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012040u)

/** Alias (User Manual Name) for DMA_CH2_RDCRCR.
* To use register names with standard convension, please use DMA_CH2_RDCRCR.
*/
#define	DMA_RDCRCR002	(DMA_CH2_RDCRCR)

/** \brief  2048, DMA Channel Source Address Register */
#define DMA_CH2_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012048u)

/** Alias (User Manual Name) for DMA_CH2_SADR.
* To use register names with standard convension, please use DMA_CH2_SADR.
*/
#define	DMA_SADR002	(DMA_CH2_SADR)

/** \brief  2044, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH2_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012044u)

/** Alias (User Manual Name) for DMA_CH2_SDCRCR.
* To use register names with standard convension, please use DMA_CH2_SDCRCR.
*/
#define	DMA_SDCRCR002	(DMA_CH2_SDCRCR)

/** \brief  2058, DMA Channel Shadow Address Register */
#define DMA_CH2_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012058u)

/** Alias (User Manual Name) for DMA_CH2_SHADR.
* To use register names with standard convension, please use DMA_CH2_SHADR.
*/
#define	DMA_SHADR002	(DMA_CH2_SHADR)

/** \brief  23D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH30_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00123D0u)

/** Alias (User Manual Name) for DMA_CH30_ADICR.
* To use register names with standard convension, please use DMA_CH30_ADICR.
*/
#define	DMA_ADICR030	(DMA_CH30_ADICR)

/** \brief  23D4, DMA Channel Configuration Register */
#define DMA_CH30_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00123D4u)

/** Alias (User Manual Name) for DMA_CH30_CHCFGR.
* To use register names with standard convension, please use DMA_CH30_CHCFGR.
*/
#define	DMA_CHCFGR030	(DMA_CH30_CHCFGR)

/** \brief  23DC, DMARAM Channel Control and Status Register */
#define DMA_CH30_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00123DCu)

/** Alias (User Manual Name) for DMA_CH30_CHCSR.
* To use register names with standard convension, please use DMA_CH30_CHCSR.
*/
#define	DMA_CHCSR030	(DMA_CH30_CHCSR)

/** \brief  23CC, DMA Channel Destination Address Register x */
#define DMA_CH30_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00123CCu)

/** Alias (User Manual Name) for DMA_CH30_DADR.
* To use register names with standard convension, please use DMA_CH30_DADR.
*/
#define	DMA_DADR030	(DMA_CH30_DADR)

/** \brief  23C0, DMA Channel Read Data CRC Register */
#define DMA_CH30_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00123C0u)

/** Alias (User Manual Name) for DMA_CH30_RDCRCR.
* To use register names with standard convension, please use DMA_CH30_RDCRCR.
*/
#define	DMA_RDCRCR030	(DMA_CH30_RDCRCR)

/** \brief  23C8, DMA Channel Source Address Register */
#define DMA_CH30_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00123C8u)

/** Alias (User Manual Name) for DMA_CH30_SADR.
* To use register names with standard convension, please use DMA_CH30_SADR.
*/
#define	DMA_SADR030	(DMA_CH30_SADR)

/** \brief  23C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH30_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00123C4u)

/** Alias (User Manual Name) for DMA_CH30_SDCRCR.
* To use register names with standard convension, please use DMA_CH30_SDCRCR.
*/
#define	DMA_SDCRCR030	(DMA_CH30_SDCRCR)

/** \brief  23D8, DMA Channel Shadow Address Register */
#define DMA_CH30_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00123D8u)

/** Alias (User Manual Name) for DMA_CH30_SHADR.
* To use register names with standard convension, please use DMA_CH30_SHADR.
*/
#define	DMA_SHADR030	(DMA_CH30_SHADR)

/** \brief  23F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH31_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00123F0u)

/** Alias (User Manual Name) for DMA_CH31_ADICR.
* To use register names with standard convension, please use DMA_CH31_ADICR.
*/
#define	DMA_ADICR031	(DMA_CH31_ADICR)

/** \brief  23F4, DMA Channel Configuration Register */
#define DMA_CH31_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00123F4u)

/** Alias (User Manual Name) for DMA_CH31_CHCFGR.
* To use register names with standard convension, please use DMA_CH31_CHCFGR.
*/
#define	DMA_CHCFGR031	(DMA_CH31_CHCFGR)

/** \brief  23FC, DMARAM Channel Control and Status Register */
#define DMA_CH31_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00123FCu)

/** Alias (User Manual Name) for DMA_CH31_CHCSR.
* To use register names with standard convension, please use DMA_CH31_CHCSR.
*/
#define	DMA_CHCSR031	(DMA_CH31_CHCSR)

/** \brief  23EC, DMA Channel Destination Address Register x */
#define DMA_CH31_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00123ECu)

/** Alias (User Manual Name) for DMA_CH31_DADR.
* To use register names with standard convension, please use DMA_CH31_DADR.
*/
#define	DMA_DADR031	(DMA_CH31_DADR)

/** \brief  23E0, DMA Channel Read Data CRC Register */
#define DMA_CH31_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00123E0u)

/** Alias (User Manual Name) for DMA_CH31_RDCRCR.
* To use register names with standard convension, please use DMA_CH31_RDCRCR.
*/
#define	DMA_RDCRCR031	(DMA_CH31_RDCRCR)

/** \brief  23E8, DMA Channel Source Address Register */
#define DMA_CH31_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00123E8u)

/** Alias (User Manual Name) for DMA_CH31_SADR.
* To use register names with standard convension, please use DMA_CH31_SADR.
*/
#define	DMA_SADR031	(DMA_CH31_SADR)

/** \brief  23E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH31_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00123E4u)

/** Alias (User Manual Name) for DMA_CH31_SDCRCR.
* To use register names with standard convension, please use DMA_CH31_SDCRCR.
*/
#define	DMA_SDCRCR031	(DMA_CH31_SDCRCR)

/** \brief  23F8, DMA Channel Shadow Address Register */
#define DMA_CH31_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00123F8u)

/** Alias (User Manual Name) for DMA_CH31_SHADR.
* To use register names with standard convension, please use DMA_CH31_SHADR.
*/
#define	DMA_SHADR031	(DMA_CH31_SHADR)

/** \brief  2410, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH32_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012410u)

/** Alias (User Manual Name) for DMA_CH32_ADICR.
* To use register names with standard convension, please use DMA_CH32_ADICR.
*/
#define	DMA_ADICR032	(DMA_CH32_ADICR)

/** \brief  2414, DMA Channel Configuration Register */
#define DMA_CH32_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012414u)

/** Alias (User Manual Name) for DMA_CH32_CHCFGR.
* To use register names with standard convension, please use DMA_CH32_CHCFGR.
*/
#define	DMA_CHCFGR032	(DMA_CH32_CHCFGR)

/** \brief  241C, DMARAM Channel Control and Status Register */
#define DMA_CH32_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001241Cu)

/** Alias (User Manual Name) for DMA_CH32_CHCSR.
* To use register names with standard convension, please use DMA_CH32_CHCSR.
*/
#define	DMA_CHCSR032	(DMA_CH32_CHCSR)

/** \brief  240C, DMA Channel Destination Address Register x */
#define DMA_CH32_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001240Cu)

/** Alias (User Manual Name) for DMA_CH32_DADR.
* To use register names with standard convension, please use DMA_CH32_DADR.
*/
#define	DMA_DADR032	(DMA_CH32_DADR)

/** \brief  2400, DMA Channel Read Data CRC Register */
#define DMA_CH32_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012400u)

/** Alias (User Manual Name) for DMA_CH32_RDCRCR.
* To use register names with standard convension, please use DMA_CH32_RDCRCR.
*/
#define	DMA_RDCRCR032	(DMA_CH32_RDCRCR)

/** \brief  2408, DMA Channel Source Address Register */
#define DMA_CH32_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012408u)

/** Alias (User Manual Name) for DMA_CH32_SADR.
* To use register names with standard convension, please use DMA_CH32_SADR.
*/
#define	DMA_SADR032	(DMA_CH32_SADR)

/** \brief  2404, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH32_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012404u)

/** Alias (User Manual Name) for DMA_CH32_SDCRCR.
* To use register names with standard convension, please use DMA_CH32_SDCRCR.
*/
#define	DMA_SDCRCR032	(DMA_CH32_SDCRCR)

/** \brief  2418, DMA Channel Shadow Address Register */
#define DMA_CH32_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012418u)

/** Alias (User Manual Name) for DMA_CH32_SHADR.
* To use register names with standard convension, please use DMA_CH32_SHADR.
*/
#define	DMA_SHADR032	(DMA_CH32_SHADR)

/** \brief  2430, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH33_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012430u)

/** Alias (User Manual Name) for DMA_CH33_ADICR.
* To use register names with standard convension, please use DMA_CH33_ADICR.
*/
#define	DMA_ADICR033	(DMA_CH33_ADICR)

/** \brief  2434, DMA Channel Configuration Register */
#define DMA_CH33_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012434u)

/** Alias (User Manual Name) for DMA_CH33_CHCFGR.
* To use register names with standard convension, please use DMA_CH33_CHCFGR.
*/
#define	DMA_CHCFGR033	(DMA_CH33_CHCFGR)

/** \brief  243C, DMARAM Channel Control and Status Register */
#define DMA_CH33_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001243Cu)

/** Alias (User Manual Name) for DMA_CH33_CHCSR.
* To use register names with standard convension, please use DMA_CH33_CHCSR.
*/
#define	DMA_CHCSR033	(DMA_CH33_CHCSR)

/** \brief  242C, DMA Channel Destination Address Register x */
#define DMA_CH33_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001242Cu)

/** Alias (User Manual Name) for DMA_CH33_DADR.
* To use register names with standard convension, please use DMA_CH33_DADR.
*/
#define	DMA_DADR033	(DMA_CH33_DADR)

/** \brief  2420, DMA Channel Read Data CRC Register */
#define DMA_CH33_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012420u)

/** Alias (User Manual Name) for DMA_CH33_RDCRCR.
* To use register names with standard convension, please use DMA_CH33_RDCRCR.
*/
#define	DMA_RDCRCR033	(DMA_CH33_RDCRCR)

/** \brief  2428, DMA Channel Source Address Register */
#define DMA_CH33_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012428u)

/** Alias (User Manual Name) for DMA_CH33_SADR.
* To use register names with standard convension, please use DMA_CH33_SADR.
*/
#define	DMA_SADR033	(DMA_CH33_SADR)

/** \brief  2424, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH33_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012424u)

/** Alias (User Manual Name) for DMA_CH33_SDCRCR.
* To use register names with standard convension, please use DMA_CH33_SDCRCR.
*/
#define	DMA_SDCRCR033	(DMA_CH33_SDCRCR)

/** \brief  2438, DMA Channel Shadow Address Register */
#define DMA_CH33_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012438u)

/** Alias (User Manual Name) for DMA_CH33_SHADR.
* To use register names with standard convension, please use DMA_CH33_SHADR.
*/
#define	DMA_SHADR033	(DMA_CH33_SHADR)

/** \brief  2450, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH34_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012450u)

/** Alias (User Manual Name) for DMA_CH34_ADICR.
* To use register names with standard convension, please use DMA_CH34_ADICR.
*/
#define	DMA_ADICR034	(DMA_CH34_ADICR)

/** \brief  2454, DMA Channel Configuration Register */
#define DMA_CH34_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012454u)

/** Alias (User Manual Name) for DMA_CH34_CHCFGR.
* To use register names with standard convension, please use DMA_CH34_CHCFGR.
*/
#define	DMA_CHCFGR034	(DMA_CH34_CHCFGR)

/** \brief  245C, DMARAM Channel Control and Status Register */
#define DMA_CH34_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001245Cu)

/** Alias (User Manual Name) for DMA_CH34_CHCSR.
* To use register names with standard convension, please use DMA_CH34_CHCSR.
*/
#define	DMA_CHCSR034	(DMA_CH34_CHCSR)

/** \brief  244C, DMA Channel Destination Address Register x */
#define DMA_CH34_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001244Cu)

/** Alias (User Manual Name) for DMA_CH34_DADR.
* To use register names with standard convension, please use DMA_CH34_DADR.
*/
#define	DMA_DADR034	(DMA_CH34_DADR)

/** \brief  2440, DMA Channel Read Data CRC Register */
#define DMA_CH34_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012440u)

/** Alias (User Manual Name) for DMA_CH34_RDCRCR.
* To use register names with standard convension, please use DMA_CH34_RDCRCR.
*/
#define	DMA_RDCRCR034	(DMA_CH34_RDCRCR)

/** \brief  2448, DMA Channel Source Address Register */
#define DMA_CH34_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012448u)

/** Alias (User Manual Name) for DMA_CH34_SADR.
* To use register names with standard convension, please use DMA_CH34_SADR.
*/
#define	DMA_SADR034	(DMA_CH34_SADR)

/** \brief  2444, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH34_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012444u)

/** Alias (User Manual Name) for DMA_CH34_SDCRCR.
* To use register names with standard convension, please use DMA_CH34_SDCRCR.
*/
#define	DMA_SDCRCR034	(DMA_CH34_SDCRCR)

/** \brief  2458, DMA Channel Shadow Address Register */
#define DMA_CH34_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012458u)

/** Alias (User Manual Name) for DMA_CH34_SHADR.
* To use register names with standard convension, please use DMA_CH34_SHADR.
*/
#define	DMA_SHADR034	(DMA_CH34_SHADR)

/** \brief  2470, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH35_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012470u)

/** Alias (User Manual Name) for DMA_CH35_ADICR.
* To use register names with standard convension, please use DMA_CH35_ADICR.
*/
#define	DMA_ADICR035	(DMA_CH35_ADICR)

/** \brief  2474, DMA Channel Configuration Register */
#define DMA_CH35_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012474u)

/** Alias (User Manual Name) for DMA_CH35_CHCFGR.
* To use register names with standard convension, please use DMA_CH35_CHCFGR.
*/
#define	DMA_CHCFGR035	(DMA_CH35_CHCFGR)

/** \brief  247C, DMARAM Channel Control and Status Register */
#define DMA_CH35_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001247Cu)

/** Alias (User Manual Name) for DMA_CH35_CHCSR.
* To use register names with standard convension, please use DMA_CH35_CHCSR.
*/
#define	DMA_CHCSR035	(DMA_CH35_CHCSR)

/** \brief  246C, DMA Channel Destination Address Register x */
#define DMA_CH35_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001246Cu)

/** Alias (User Manual Name) for DMA_CH35_DADR.
* To use register names with standard convension, please use DMA_CH35_DADR.
*/
#define	DMA_DADR035	(DMA_CH35_DADR)

/** \brief  2460, DMA Channel Read Data CRC Register */
#define DMA_CH35_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012460u)

/** Alias (User Manual Name) for DMA_CH35_RDCRCR.
* To use register names with standard convension, please use DMA_CH35_RDCRCR.
*/
#define	DMA_RDCRCR035	(DMA_CH35_RDCRCR)

/** \brief  2468, DMA Channel Source Address Register */
#define DMA_CH35_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012468u)

/** Alias (User Manual Name) for DMA_CH35_SADR.
* To use register names with standard convension, please use DMA_CH35_SADR.
*/
#define	DMA_SADR035	(DMA_CH35_SADR)

/** \brief  2464, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH35_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012464u)

/** Alias (User Manual Name) for DMA_CH35_SDCRCR.
* To use register names with standard convension, please use DMA_CH35_SDCRCR.
*/
#define	DMA_SDCRCR035	(DMA_CH35_SDCRCR)

/** \brief  2478, DMA Channel Shadow Address Register */
#define DMA_CH35_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012478u)

/** Alias (User Manual Name) for DMA_CH35_SHADR.
* To use register names with standard convension, please use DMA_CH35_SHADR.
*/
#define	DMA_SHADR035	(DMA_CH35_SHADR)

/** \brief  2490, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH36_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012490u)

/** Alias (User Manual Name) for DMA_CH36_ADICR.
* To use register names with standard convension, please use DMA_CH36_ADICR.
*/
#define	DMA_ADICR036	(DMA_CH36_ADICR)

/** \brief  2494, DMA Channel Configuration Register */
#define DMA_CH36_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012494u)

/** Alias (User Manual Name) for DMA_CH36_CHCFGR.
* To use register names with standard convension, please use DMA_CH36_CHCFGR.
*/
#define	DMA_CHCFGR036	(DMA_CH36_CHCFGR)

/** \brief  249C, DMARAM Channel Control and Status Register */
#define DMA_CH36_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001249Cu)

/** Alias (User Manual Name) for DMA_CH36_CHCSR.
* To use register names with standard convension, please use DMA_CH36_CHCSR.
*/
#define	DMA_CHCSR036	(DMA_CH36_CHCSR)

/** \brief  248C, DMA Channel Destination Address Register x */
#define DMA_CH36_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001248Cu)

/** Alias (User Manual Name) for DMA_CH36_DADR.
* To use register names with standard convension, please use DMA_CH36_DADR.
*/
#define	DMA_DADR036	(DMA_CH36_DADR)

/** \brief  2480, DMA Channel Read Data CRC Register */
#define DMA_CH36_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012480u)

/** Alias (User Manual Name) for DMA_CH36_RDCRCR.
* To use register names with standard convension, please use DMA_CH36_RDCRCR.
*/
#define	DMA_RDCRCR036	(DMA_CH36_RDCRCR)

/** \brief  2488, DMA Channel Source Address Register */
#define DMA_CH36_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012488u)

/** Alias (User Manual Name) for DMA_CH36_SADR.
* To use register names with standard convension, please use DMA_CH36_SADR.
*/
#define	DMA_SADR036	(DMA_CH36_SADR)

/** \brief  2484, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH36_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012484u)

/** Alias (User Manual Name) for DMA_CH36_SDCRCR.
* To use register names with standard convension, please use DMA_CH36_SDCRCR.
*/
#define	DMA_SDCRCR036	(DMA_CH36_SDCRCR)

/** \brief  2498, DMA Channel Shadow Address Register */
#define DMA_CH36_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012498u)

/** Alias (User Manual Name) for DMA_CH36_SHADR.
* To use register names with standard convension, please use DMA_CH36_SHADR.
*/
#define	DMA_SHADR036	(DMA_CH36_SHADR)

/** \brief  24B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH37_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00124B0u)

/** Alias (User Manual Name) for DMA_CH37_ADICR.
* To use register names with standard convension, please use DMA_CH37_ADICR.
*/
#define	DMA_ADICR037	(DMA_CH37_ADICR)

/** \brief  24B4, DMA Channel Configuration Register */
#define DMA_CH37_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00124B4u)

/** Alias (User Manual Name) for DMA_CH37_CHCFGR.
* To use register names with standard convension, please use DMA_CH37_CHCFGR.
*/
#define	DMA_CHCFGR037	(DMA_CH37_CHCFGR)

/** \brief  24BC, DMARAM Channel Control and Status Register */
#define DMA_CH37_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00124BCu)

/** Alias (User Manual Name) for DMA_CH37_CHCSR.
* To use register names with standard convension, please use DMA_CH37_CHCSR.
*/
#define	DMA_CHCSR037	(DMA_CH37_CHCSR)

/** \brief  24AC, DMA Channel Destination Address Register x */
#define DMA_CH37_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00124ACu)

/** Alias (User Manual Name) for DMA_CH37_DADR.
* To use register names with standard convension, please use DMA_CH37_DADR.
*/
#define	DMA_DADR037	(DMA_CH37_DADR)

/** \brief  24A0, DMA Channel Read Data CRC Register */
#define DMA_CH37_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00124A0u)

/** Alias (User Manual Name) for DMA_CH37_RDCRCR.
* To use register names with standard convension, please use DMA_CH37_RDCRCR.
*/
#define	DMA_RDCRCR037	(DMA_CH37_RDCRCR)

/** \brief  24A8, DMA Channel Source Address Register */
#define DMA_CH37_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00124A8u)

/** Alias (User Manual Name) for DMA_CH37_SADR.
* To use register names with standard convension, please use DMA_CH37_SADR.
*/
#define	DMA_SADR037	(DMA_CH37_SADR)

/** \brief  24A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH37_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00124A4u)

/** Alias (User Manual Name) for DMA_CH37_SDCRCR.
* To use register names with standard convension, please use DMA_CH37_SDCRCR.
*/
#define	DMA_SDCRCR037	(DMA_CH37_SDCRCR)

/** \brief  24B8, DMA Channel Shadow Address Register */
#define DMA_CH37_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00124B8u)

/** Alias (User Manual Name) for DMA_CH37_SHADR.
* To use register names with standard convension, please use DMA_CH37_SHADR.
*/
#define	DMA_SHADR037	(DMA_CH37_SHADR)

/** \brief  24D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH38_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00124D0u)

/** Alias (User Manual Name) for DMA_CH38_ADICR.
* To use register names with standard convension, please use DMA_CH38_ADICR.
*/
#define	DMA_ADICR038	(DMA_CH38_ADICR)

/** \brief  24D4, DMA Channel Configuration Register */
#define DMA_CH38_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00124D4u)

/** Alias (User Manual Name) for DMA_CH38_CHCFGR.
* To use register names with standard convension, please use DMA_CH38_CHCFGR.
*/
#define	DMA_CHCFGR038	(DMA_CH38_CHCFGR)

/** \brief  24DC, DMARAM Channel Control and Status Register */
#define DMA_CH38_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00124DCu)

/** Alias (User Manual Name) for DMA_CH38_CHCSR.
* To use register names with standard convension, please use DMA_CH38_CHCSR.
*/
#define	DMA_CHCSR038	(DMA_CH38_CHCSR)

/** \brief  24CC, DMA Channel Destination Address Register x */
#define DMA_CH38_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00124CCu)

/** Alias (User Manual Name) for DMA_CH38_DADR.
* To use register names with standard convension, please use DMA_CH38_DADR.
*/
#define	DMA_DADR038	(DMA_CH38_DADR)

/** \brief  24C0, DMA Channel Read Data CRC Register */
#define DMA_CH38_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00124C0u)

/** Alias (User Manual Name) for DMA_CH38_RDCRCR.
* To use register names with standard convension, please use DMA_CH38_RDCRCR.
*/
#define	DMA_RDCRCR038	(DMA_CH38_RDCRCR)

/** \brief  24C8, DMA Channel Source Address Register */
#define DMA_CH38_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00124C8u)

/** Alias (User Manual Name) for DMA_CH38_SADR.
* To use register names with standard convension, please use DMA_CH38_SADR.
*/
#define	DMA_SADR038	(DMA_CH38_SADR)

/** \brief  24C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH38_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00124C4u)

/** Alias (User Manual Name) for DMA_CH38_SDCRCR.
* To use register names with standard convension, please use DMA_CH38_SDCRCR.
*/
#define	DMA_SDCRCR038	(DMA_CH38_SDCRCR)

/** \brief  24D8, DMA Channel Shadow Address Register */
#define DMA_CH38_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00124D8u)

/** Alias (User Manual Name) for DMA_CH38_SHADR.
* To use register names with standard convension, please use DMA_CH38_SHADR.
*/
#define	DMA_SHADR038	(DMA_CH38_SHADR)

/** \brief  24F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH39_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00124F0u)

/** Alias (User Manual Name) for DMA_CH39_ADICR.
* To use register names with standard convension, please use DMA_CH39_ADICR.
*/
#define	DMA_ADICR039	(DMA_CH39_ADICR)

/** \brief  24F4, DMA Channel Configuration Register */
#define DMA_CH39_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00124F4u)

/** Alias (User Manual Name) for DMA_CH39_CHCFGR.
* To use register names with standard convension, please use DMA_CH39_CHCFGR.
*/
#define	DMA_CHCFGR039	(DMA_CH39_CHCFGR)

/** \brief  24FC, DMARAM Channel Control and Status Register */
#define DMA_CH39_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00124FCu)

/** Alias (User Manual Name) for DMA_CH39_CHCSR.
* To use register names with standard convension, please use DMA_CH39_CHCSR.
*/
#define	DMA_CHCSR039	(DMA_CH39_CHCSR)

/** \brief  24EC, DMA Channel Destination Address Register x */
#define DMA_CH39_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00124ECu)

/** Alias (User Manual Name) for DMA_CH39_DADR.
* To use register names with standard convension, please use DMA_CH39_DADR.
*/
#define	DMA_DADR039	(DMA_CH39_DADR)

/** \brief  24E0, DMA Channel Read Data CRC Register */
#define DMA_CH39_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00124E0u)

/** Alias (User Manual Name) for DMA_CH39_RDCRCR.
* To use register names with standard convension, please use DMA_CH39_RDCRCR.
*/
#define	DMA_RDCRCR039	(DMA_CH39_RDCRCR)

/** \brief  24E8, DMA Channel Source Address Register */
#define DMA_CH39_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00124E8u)

/** Alias (User Manual Name) for DMA_CH39_SADR.
* To use register names with standard convension, please use DMA_CH39_SADR.
*/
#define	DMA_SADR039	(DMA_CH39_SADR)

/** \brief  24E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH39_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00124E4u)

/** Alias (User Manual Name) for DMA_CH39_SDCRCR.
* To use register names with standard convension, please use DMA_CH39_SDCRCR.
*/
#define	DMA_SDCRCR039	(DMA_CH39_SDCRCR)

/** \brief  24F8, DMA Channel Shadow Address Register */
#define DMA_CH39_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00124F8u)

/** Alias (User Manual Name) for DMA_CH39_SHADR.
* To use register names with standard convension, please use DMA_CH39_SHADR.
*/
#define	DMA_SHADR039	(DMA_CH39_SHADR)

/** \brief  2070, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH3_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012070u)

/** Alias (User Manual Name) for DMA_CH3_ADICR.
* To use register names with standard convension, please use DMA_CH3_ADICR.
*/
#define	DMA_ADICR003	(DMA_CH3_ADICR)

/** \brief  2074, DMA Channel Configuration Register */
#define DMA_CH3_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012074u)

/** Alias (User Manual Name) for DMA_CH3_CHCFGR.
* To use register names with standard convension, please use DMA_CH3_CHCFGR.
*/
#define	DMA_CHCFGR003	(DMA_CH3_CHCFGR)

/** \brief  207C, DMARAM Channel Control and Status Register */
#define DMA_CH3_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001207Cu)

/** Alias (User Manual Name) for DMA_CH3_CHCSR.
* To use register names with standard convension, please use DMA_CH3_CHCSR.
*/
#define	DMA_CHCSR003	(DMA_CH3_CHCSR)

/** \brief  206C, DMA Channel Destination Address Register x */
#define DMA_CH3_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001206Cu)

/** Alias (User Manual Name) for DMA_CH3_DADR.
* To use register names with standard convension, please use DMA_CH3_DADR.
*/
#define	DMA_DADR003	(DMA_CH3_DADR)

/** \brief  2060, DMA Channel Read Data CRC Register */
#define DMA_CH3_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012060u)

/** Alias (User Manual Name) for DMA_CH3_RDCRCR.
* To use register names with standard convension, please use DMA_CH3_RDCRCR.
*/
#define	DMA_RDCRCR003	(DMA_CH3_RDCRCR)

/** \brief  2068, DMA Channel Source Address Register */
#define DMA_CH3_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012068u)

/** Alias (User Manual Name) for DMA_CH3_SADR.
* To use register names with standard convension, please use DMA_CH3_SADR.
*/
#define	DMA_SADR003	(DMA_CH3_SADR)

/** \brief  2064, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH3_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012064u)

/** Alias (User Manual Name) for DMA_CH3_SDCRCR.
* To use register names with standard convension, please use DMA_CH3_SDCRCR.
*/
#define	DMA_SDCRCR003	(DMA_CH3_SDCRCR)

/** \brief  2078, DMA Channel Shadow Address Register */
#define DMA_CH3_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012078u)

/** Alias (User Manual Name) for DMA_CH3_SHADR.
* To use register names with standard convension, please use DMA_CH3_SHADR.
*/
#define	DMA_SHADR003	(DMA_CH3_SHADR)

/** \brief  2510, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH40_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012510u)

/** Alias (User Manual Name) for DMA_CH40_ADICR.
* To use register names with standard convension, please use DMA_CH40_ADICR.
*/
#define	DMA_ADICR040	(DMA_CH40_ADICR)

/** \brief  2514, DMA Channel Configuration Register */
#define DMA_CH40_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012514u)

/** Alias (User Manual Name) for DMA_CH40_CHCFGR.
* To use register names with standard convension, please use DMA_CH40_CHCFGR.
*/
#define	DMA_CHCFGR040	(DMA_CH40_CHCFGR)

/** \brief  251C, DMARAM Channel Control and Status Register */
#define DMA_CH40_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001251Cu)

/** Alias (User Manual Name) for DMA_CH40_CHCSR.
* To use register names with standard convension, please use DMA_CH40_CHCSR.
*/
#define	DMA_CHCSR040	(DMA_CH40_CHCSR)

/** \brief  250C, DMA Channel Destination Address Register x */
#define DMA_CH40_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001250Cu)

/** Alias (User Manual Name) for DMA_CH40_DADR.
* To use register names with standard convension, please use DMA_CH40_DADR.
*/
#define	DMA_DADR040	(DMA_CH40_DADR)

/** \brief  2500, DMA Channel Read Data CRC Register */
#define DMA_CH40_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012500u)

/** Alias (User Manual Name) for DMA_CH40_RDCRCR.
* To use register names with standard convension, please use DMA_CH40_RDCRCR.
*/
#define	DMA_RDCRCR040	(DMA_CH40_RDCRCR)

/** \brief  2508, DMA Channel Source Address Register */
#define DMA_CH40_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012508u)

/** Alias (User Manual Name) for DMA_CH40_SADR.
* To use register names with standard convension, please use DMA_CH40_SADR.
*/
#define	DMA_SADR040	(DMA_CH40_SADR)

/** \brief  2504, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH40_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012504u)

/** Alias (User Manual Name) for DMA_CH40_SDCRCR.
* To use register names with standard convension, please use DMA_CH40_SDCRCR.
*/
#define	DMA_SDCRCR040	(DMA_CH40_SDCRCR)

/** \brief  2518, DMA Channel Shadow Address Register */
#define DMA_CH40_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012518u)

/** Alias (User Manual Name) for DMA_CH40_SHADR.
* To use register names with standard convension, please use DMA_CH40_SHADR.
*/
#define	DMA_SHADR040	(DMA_CH40_SHADR)

/** \brief  2530, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH41_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012530u)

/** Alias (User Manual Name) for DMA_CH41_ADICR.
* To use register names with standard convension, please use DMA_CH41_ADICR.
*/
#define	DMA_ADICR041	(DMA_CH41_ADICR)

/** \brief  2534, DMA Channel Configuration Register */
#define DMA_CH41_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012534u)

/** Alias (User Manual Name) for DMA_CH41_CHCFGR.
* To use register names with standard convension, please use DMA_CH41_CHCFGR.
*/
#define	DMA_CHCFGR041	(DMA_CH41_CHCFGR)

/** \brief  253C, DMARAM Channel Control and Status Register */
#define DMA_CH41_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001253Cu)

/** Alias (User Manual Name) for DMA_CH41_CHCSR.
* To use register names with standard convension, please use DMA_CH41_CHCSR.
*/
#define	DMA_CHCSR041	(DMA_CH41_CHCSR)

/** \brief  252C, DMA Channel Destination Address Register x */
#define DMA_CH41_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001252Cu)

/** Alias (User Manual Name) for DMA_CH41_DADR.
* To use register names with standard convension, please use DMA_CH41_DADR.
*/
#define	DMA_DADR041	(DMA_CH41_DADR)

/** \brief  2520, DMA Channel Read Data CRC Register */
#define DMA_CH41_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012520u)

/** Alias (User Manual Name) for DMA_CH41_RDCRCR.
* To use register names with standard convension, please use DMA_CH41_RDCRCR.
*/
#define	DMA_RDCRCR041	(DMA_CH41_RDCRCR)

/** \brief  2528, DMA Channel Source Address Register */
#define DMA_CH41_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012528u)

/** Alias (User Manual Name) for DMA_CH41_SADR.
* To use register names with standard convension, please use DMA_CH41_SADR.
*/
#define	DMA_SADR041	(DMA_CH41_SADR)

/** \brief  2524, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH41_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012524u)

/** Alias (User Manual Name) for DMA_CH41_SDCRCR.
* To use register names with standard convension, please use DMA_CH41_SDCRCR.
*/
#define	DMA_SDCRCR041	(DMA_CH41_SDCRCR)

/** \brief  2538, DMA Channel Shadow Address Register */
#define DMA_CH41_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012538u)

/** Alias (User Manual Name) for DMA_CH41_SHADR.
* To use register names with standard convension, please use DMA_CH41_SHADR.
*/
#define	DMA_SHADR041	(DMA_CH41_SHADR)

/** \brief  2550, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH42_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012550u)

/** Alias (User Manual Name) for DMA_CH42_ADICR.
* To use register names with standard convension, please use DMA_CH42_ADICR.
*/
#define	DMA_ADICR042	(DMA_CH42_ADICR)

/** \brief  2554, DMA Channel Configuration Register */
#define DMA_CH42_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012554u)

/** Alias (User Manual Name) for DMA_CH42_CHCFGR.
* To use register names with standard convension, please use DMA_CH42_CHCFGR.
*/
#define	DMA_CHCFGR042	(DMA_CH42_CHCFGR)

/** \brief  255C, DMARAM Channel Control and Status Register */
#define DMA_CH42_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001255Cu)

/** Alias (User Manual Name) for DMA_CH42_CHCSR.
* To use register names with standard convension, please use DMA_CH42_CHCSR.
*/
#define	DMA_CHCSR042	(DMA_CH42_CHCSR)

/** \brief  254C, DMA Channel Destination Address Register x */
#define DMA_CH42_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001254Cu)

/** Alias (User Manual Name) for DMA_CH42_DADR.
* To use register names with standard convension, please use DMA_CH42_DADR.
*/
#define	DMA_DADR042	(DMA_CH42_DADR)

/** \brief  2540, DMA Channel Read Data CRC Register */
#define DMA_CH42_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012540u)

/** Alias (User Manual Name) for DMA_CH42_RDCRCR.
* To use register names with standard convension, please use DMA_CH42_RDCRCR.
*/
#define	DMA_RDCRCR042	(DMA_CH42_RDCRCR)

/** \brief  2548, DMA Channel Source Address Register */
#define DMA_CH42_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012548u)

/** Alias (User Manual Name) for DMA_CH42_SADR.
* To use register names with standard convension, please use DMA_CH42_SADR.
*/
#define	DMA_SADR042	(DMA_CH42_SADR)

/** \brief  2544, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH42_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012544u)

/** Alias (User Manual Name) for DMA_CH42_SDCRCR.
* To use register names with standard convension, please use DMA_CH42_SDCRCR.
*/
#define	DMA_SDCRCR042	(DMA_CH42_SDCRCR)

/** \brief  2558, DMA Channel Shadow Address Register */
#define DMA_CH42_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012558u)

/** Alias (User Manual Name) for DMA_CH42_SHADR.
* To use register names with standard convension, please use DMA_CH42_SHADR.
*/
#define	DMA_SHADR042	(DMA_CH42_SHADR)

/** \brief  2570, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH43_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012570u)

/** Alias (User Manual Name) for DMA_CH43_ADICR.
* To use register names with standard convension, please use DMA_CH43_ADICR.
*/
#define	DMA_ADICR043	(DMA_CH43_ADICR)

/** \brief  2574, DMA Channel Configuration Register */
#define DMA_CH43_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012574u)

/** Alias (User Manual Name) for DMA_CH43_CHCFGR.
* To use register names with standard convension, please use DMA_CH43_CHCFGR.
*/
#define	DMA_CHCFGR043	(DMA_CH43_CHCFGR)

/** \brief  257C, DMARAM Channel Control and Status Register */
#define DMA_CH43_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001257Cu)

/** Alias (User Manual Name) for DMA_CH43_CHCSR.
* To use register names with standard convension, please use DMA_CH43_CHCSR.
*/
#define	DMA_CHCSR043	(DMA_CH43_CHCSR)

/** \brief  256C, DMA Channel Destination Address Register x */
#define DMA_CH43_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001256Cu)

/** Alias (User Manual Name) for DMA_CH43_DADR.
* To use register names with standard convension, please use DMA_CH43_DADR.
*/
#define	DMA_DADR043	(DMA_CH43_DADR)

/** \brief  2560, DMA Channel Read Data CRC Register */
#define DMA_CH43_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012560u)

/** Alias (User Manual Name) for DMA_CH43_RDCRCR.
* To use register names with standard convension, please use DMA_CH43_RDCRCR.
*/
#define	DMA_RDCRCR043	(DMA_CH43_RDCRCR)

/** \brief  2568, DMA Channel Source Address Register */
#define DMA_CH43_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012568u)

/** Alias (User Manual Name) for DMA_CH43_SADR.
* To use register names with standard convension, please use DMA_CH43_SADR.
*/
#define	DMA_SADR043	(DMA_CH43_SADR)

/** \brief  2564, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH43_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012564u)

/** Alias (User Manual Name) for DMA_CH43_SDCRCR.
* To use register names with standard convension, please use DMA_CH43_SDCRCR.
*/
#define	DMA_SDCRCR043	(DMA_CH43_SDCRCR)

/** \brief  2578, DMA Channel Shadow Address Register */
#define DMA_CH43_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012578u)

/** Alias (User Manual Name) for DMA_CH43_SHADR.
* To use register names with standard convension, please use DMA_CH43_SHADR.
*/
#define	DMA_SHADR043	(DMA_CH43_SHADR)

/** \brief  2590, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH44_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012590u)

/** Alias (User Manual Name) for DMA_CH44_ADICR.
* To use register names with standard convension, please use DMA_CH44_ADICR.
*/
#define	DMA_ADICR044	(DMA_CH44_ADICR)

/** \brief  2594, DMA Channel Configuration Register */
#define DMA_CH44_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012594u)

/** Alias (User Manual Name) for DMA_CH44_CHCFGR.
* To use register names with standard convension, please use DMA_CH44_CHCFGR.
*/
#define	DMA_CHCFGR044	(DMA_CH44_CHCFGR)

/** \brief  259C, DMARAM Channel Control and Status Register */
#define DMA_CH44_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001259Cu)

/** Alias (User Manual Name) for DMA_CH44_CHCSR.
* To use register names with standard convension, please use DMA_CH44_CHCSR.
*/
#define	DMA_CHCSR044	(DMA_CH44_CHCSR)

/** \brief  258C, DMA Channel Destination Address Register x */
#define DMA_CH44_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001258Cu)

/** Alias (User Manual Name) for DMA_CH44_DADR.
* To use register names with standard convension, please use DMA_CH44_DADR.
*/
#define	DMA_DADR044	(DMA_CH44_DADR)

/** \brief  2580, DMA Channel Read Data CRC Register */
#define DMA_CH44_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012580u)

/** Alias (User Manual Name) for DMA_CH44_RDCRCR.
* To use register names with standard convension, please use DMA_CH44_RDCRCR.
*/
#define	DMA_RDCRCR044	(DMA_CH44_RDCRCR)

/** \brief  2588, DMA Channel Source Address Register */
#define DMA_CH44_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012588u)

/** Alias (User Manual Name) for DMA_CH44_SADR.
* To use register names with standard convension, please use DMA_CH44_SADR.
*/
#define	DMA_SADR044	(DMA_CH44_SADR)

/** \brief  2584, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH44_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012584u)

/** Alias (User Manual Name) for DMA_CH44_SDCRCR.
* To use register names with standard convension, please use DMA_CH44_SDCRCR.
*/
#define	DMA_SDCRCR044	(DMA_CH44_SDCRCR)

/** \brief  2598, DMA Channel Shadow Address Register */
#define DMA_CH44_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012598u)

/** Alias (User Manual Name) for DMA_CH44_SHADR.
* To use register names with standard convension, please use DMA_CH44_SHADR.
*/
#define	DMA_SHADR044	(DMA_CH44_SHADR)

/** \brief  25B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH45_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00125B0u)

/** Alias (User Manual Name) for DMA_CH45_ADICR.
* To use register names with standard convension, please use DMA_CH45_ADICR.
*/
#define	DMA_ADICR045	(DMA_CH45_ADICR)

/** \brief  25B4, DMA Channel Configuration Register */
#define DMA_CH45_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00125B4u)

/** Alias (User Manual Name) for DMA_CH45_CHCFGR.
* To use register names with standard convension, please use DMA_CH45_CHCFGR.
*/
#define	DMA_CHCFGR045	(DMA_CH45_CHCFGR)

/** \brief  25BC, DMARAM Channel Control and Status Register */
#define DMA_CH45_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00125BCu)

/** Alias (User Manual Name) for DMA_CH45_CHCSR.
* To use register names with standard convension, please use DMA_CH45_CHCSR.
*/
#define	DMA_CHCSR045	(DMA_CH45_CHCSR)

/** \brief  25AC, DMA Channel Destination Address Register x */
#define DMA_CH45_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00125ACu)

/** Alias (User Manual Name) for DMA_CH45_DADR.
* To use register names with standard convension, please use DMA_CH45_DADR.
*/
#define	DMA_DADR045	(DMA_CH45_DADR)

/** \brief  25A0, DMA Channel Read Data CRC Register */
#define DMA_CH45_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00125A0u)

/** Alias (User Manual Name) for DMA_CH45_RDCRCR.
* To use register names with standard convension, please use DMA_CH45_RDCRCR.
*/
#define	DMA_RDCRCR045	(DMA_CH45_RDCRCR)

/** \brief  25A8, DMA Channel Source Address Register */
#define DMA_CH45_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00125A8u)

/** Alias (User Manual Name) for DMA_CH45_SADR.
* To use register names with standard convension, please use DMA_CH45_SADR.
*/
#define	DMA_SADR045	(DMA_CH45_SADR)

/** \brief  25A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH45_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00125A4u)

/** Alias (User Manual Name) for DMA_CH45_SDCRCR.
* To use register names with standard convension, please use DMA_CH45_SDCRCR.
*/
#define	DMA_SDCRCR045	(DMA_CH45_SDCRCR)

/** \brief  25B8, DMA Channel Shadow Address Register */
#define DMA_CH45_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00125B8u)

/** Alias (User Manual Name) for DMA_CH45_SHADR.
* To use register names with standard convension, please use DMA_CH45_SHADR.
*/
#define	DMA_SHADR045	(DMA_CH45_SHADR)

/** \brief  25D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH46_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00125D0u)

/** Alias (User Manual Name) for DMA_CH46_ADICR.
* To use register names with standard convension, please use DMA_CH46_ADICR.
*/
#define	DMA_ADICR046	(DMA_CH46_ADICR)

/** \brief  25D4, DMA Channel Configuration Register */
#define DMA_CH46_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00125D4u)

/** Alias (User Manual Name) for DMA_CH46_CHCFGR.
* To use register names with standard convension, please use DMA_CH46_CHCFGR.
*/
#define	DMA_CHCFGR046	(DMA_CH46_CHCFGR)

/** \brief  25DC, DMARAM Channel Control and Status Register */
#define DMA_CH46_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00125DCu)

/** Alias (User Manual Name) for DMA_CH46_CHCSR.
* To use register names with standard convension, please use DMA_CH46_CHCSR.
*/
#define	DMA_CHCSR046	(DMA_CH46_CHCSR)

/** \brief  25CC, DMA Channel Destination Address Register x */
#define DMA_CH46_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00125CCu)

/** Alias (User Manual Name) for DMA_CH46_DADR.
* To use register names with standard convension, please use DMA_CH46_DADR.
*/
#define	DMA_DADR046	(DMA_CH46_DADR)

/** \brief  25C0, DMA Channel Read Data CRC Register */
#define DMA_CH46_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00125C0u)

/** Alias (User Manual Name) for DMA_CH46_RDCRCR.
* To use register names with standard convension, please use DMA_CH46_RDCRCR.
*/
#define	DMA_RDCRCR046	(DMA_CH46_RDCRCR)

/** \brief  25C8, DMA Channel Source Address Register */
#define DMA_CH46_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00125C8u)

/** Alias (User Manual Name) for DMA_CH46_SADR.
* To use register names with standard convension, please use DMA_CH46_SADR.
*/
#define	DMA_SADR046	(DMA_CH46_SADR)

/** \brief  25C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH46_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00125C4u)

/** Alias (User Manual Name) for DMA_CH46_SDCRCR.
* To use register names with standard convension, please use DMA_CH46_SDCRCR.
*/
#define	DMA_SDCRCR046	(DMA_CH46_SDCRCR)

/** \brief  25D8, DMA Channel Shadow Address Register */
#define DMA_CH46_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00125D8u)

/** Alias (User Manual Name) for DMA_CH46_SHADR.
* To use register names with standard convension, please use DMA_CH46_SHADR.
*/
#define	DMA_SHADR046	(DMA_CH46_SHADR)

/** \brief  25F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH47_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00125F0u)

/** Alias (User Manual Name) for DMA_CH47_ADICR.
* To use register names with standard convension, please use DMA_CH47_ADICR.
*/
#define	DMA_ADICR047	(DMA_CH47_ADICR)

/** \brief  25F4, DMA Channel Configuration Register */
#define DMA_CH47_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00125F4u)

/** Alias (User Manual Name) for DMA_CH47_CHCFGR.
* To use register names with standard convension, please use DMA_CH47_CHCFGR.
*/
#define	DMA_CHCFGR047	(DMA_CH47_CHCFGR)

/** \brief  25FC, DMARAM Channel Control and Status Register */
#define DMA_CH47_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00125FCu)

/** Alias (User Manual Name) for DMA_CH47_CHCSR.
* To use register names with standard convension, please use DMA_CH47_CHCSR.
*/
#define	DMA_CHCSR047	(DMA_CH47_CHCSR)

/** \brief  25EC, DMA Channel Destination Address Register x */
#define DMA_CH47_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00125ECu)

/** Alias (User Manual Name) for DMA_CH47_DADR.
* To use register names with standard convension, please use DMA_CH47_DADR.
*/
#define	DMA_DADR047	(DMA_CH47_DADR)

/** \brief  25E0, DMA Channel Read Data CRC Register */
#define DMA_CH47_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00125E0u)

/** Alias (User Manual Name) for DMA_CH47_RDCRCR.
* To use register names with standard convension, please use DMA_CH47_RDCRCR.
*/
#define	DMA_RDCRCR047	(DMA_CH47_RDCRCR)

/** \brief  25E8, DMA Channel Source Address Register */
#define DMA_CH47_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00125E8u)

/** Alias (User Manual Name) for DMA_CH47_SADR.
* To use register names with standard convension, please use DMA_CH47_SADR.
*/
#define	DMA_SADR047	(DMA_CH47_SADR)

/** \brief  25E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH47_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00125E4u)

/** Alias (User Manual Name) for DMA_CH47_SDCRCR.
* To use register names with standard convension, please use DMA_CH47_SDCRCR.
*/
#define	DMA_SDCRCR047	(DMA_CH47_SDCRCR)

/** \brief  25F8, DMA Channel Shadow Address Register */
#define DMA_CH47_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00125F8u)

/** Alias (User Manual Name) for DMA_CH47_SHADR.
* To use register names with standard convension, please use DMA_CH47_SHADR.
*/
#define	DMA_SHADR047	(DMA_CH47_SHADR)

/** \brief  2610, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH48_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012610u)

/** Alias (User Manual Name) for DMA_CH48_ADICR.
* To use register names with standard convension, please use DMA_CH48_ADICR.
*/
#define	DMA_ADICR048	(DMA_CH48_ADICR)

/** \brief  2614, DMA Channel Configuration Register */
#define DMA_CH48_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012614u)

/** Alias (User Manual Name) for DMA_CH48_CHCFGR.
* To use register names with standard convension, please use DMA_CH48_CHCFGR.
*/
#define	DMA_CHCFGR048	(DMA_CH48_CHCFGR)

/** \brief  261C, DMARAM Channel Control and Status Register */
#define DMA_CH48_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001261Cu)

/** Alias (User Manual Name) for DMA_CH48_CHCSR.
* To use register names with standard convension, please use DMA_CH48_CHCSR.
*/
#define	DMA_CHCSR048	(DMA_CH48_CHCSR)

/** \brief  260C, DMA Channel Destination Address Register x */
#define DMA_CH48_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001260Cu)

/** Alias (User Manual Name) for DMA_CH48_DADR.
* To use register names with standard convension, please use DMA_CH48_DADR.
*/
#define	DMA_DADR048	(DMA_CH48_DADR)

/** \brief  2600, DMA Channel Read Data CRC Register */
#define DMA_CH48_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012600u)

/** Alias (User Manual Name) for DMA_CH48_RDCRCR.
* To use register names with standard convension, please use DMA_CH48_RDCRCR.
*/
#define	DMA_RDCRCR048	(DMA_CH48_RDCRCR)

/** \brief  2608, DMA Channel Source Address Register */
#define DMA_CH48_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012608u)

/** Alias (User Manual Name) for DMA_CH48_SADR.
* To use register names with standard convension, please use DMA_CH48_SADR.
*/
#define	DMA_SADR048	(DMA_CH48_SADR)

/** \brief  2604, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH48_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012604u)

/** Alias (User Manual Name) for DMA_CH48_SDCRCR.
* To use register names with standard convension, please use DMA_CH48_SDCRCR.
*/
#define	DMA_SDCRCR048	(DMA_CH48_SDCRCR)

/** \brief  2618, DMA Channel Shadow Address Register */
#define DMA_CH48_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012618u)

/** Alias (User Manual Name) for DMA_CH48_SHADR.
* To use register names with standard convension, please use DMA_CH48_SHADR.
*/
#define	DMA_SHADR048	(DMA_CH48_SHADR)

/** \brief  2630, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH49_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012630u)

/** Alias (User Manual Name) for DMA_CH49_ADICR.
* To use register names with standard convension, please use DMA_CH49_ADICR.
*/
#define	DMA_ADICR049	(DMA_CH49_ADICR)

/** \brief  2634, DMA Channel Configuration Register */
#define DMA_CH49_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012634u)

/** Alias (User Manual Name) for DMA_CH49_CHCFGR.
* To use register names with standard convension, please use DMA_CH49_CHCFGR.
*/
#define	DMA_CHCFGR049	(DMA_CH49_CHCFGR)

/** \brief  263C, DMARAM Channel Control and Status Register */
#define DMA_CH49_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001263Cu)

/** Alias (User Manual Name) for DMA_CH49_CHCSR.
* To use register names with standard convension, please use DMA_CH49_CHCSR.
*/
#define	DMA_CHCSR049	(DMA_CH49_CHCSR)

/** \brief  262C, DMA Channel Destination Address Register x */
#define DMA_CH49_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001262Cu)

/** Alias (User Manual Name) for DMA_CH49_DADR.
* To use register names with standard convension, please use DMA_CH49_DADR.
*/
#define	DMA_DADR049	(DMA_CH49_DADR)

/** \brief  2620, DMA Channel Read Data CRC Register */
#define DMA_CH49_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012620u)

/** Alias (User Manual Name) for DMA_CH49_RDCRCR.
* To use register names with standard convension, please use DMA_CH49_RDCRCR.
*/
#define	DMA_RDCRCR049	(DMA_CH49_RDCRCR)

/** \brief  2628, DMA Channel Source Address Register */
#define DMA_CH49_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012628u)

/** Alias (User Manual Name) for DMA_CH49_SADR.
* To use register names with standard convension, please use DMA_CH49_SADR.
*/
#define	DMA_SADR049	(DMA_CH49_SADR)

/** \brief  2624, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH49_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012624u)

/** Alias (User Manual Name) for DMA_CH49_SDCRCR.
* To use register names with standard convension, please use DMA_CH49_SDCRCR.
*/
#define	DMA_SDCRCR049	(DMA_CH49_SDCRCR)

/** \brief  2638, DMA Channel Shadow Address Register */
#define DMA_CH49_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012638u)

/** Alias (User Manual Name) for DMA_CH49_SHADR.
* To use register names with standard convension, please use DMA_CH49_SHADR.
*/
#define	DMA_SHADR049	(DMA_CH49_SHADR)

/** \brief  2090, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH4_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012090u)

/** Alias (User Manual Name) for DMA_CH4_ADICR.
* To use register names with standard convension, please use DMA_CH4_ADICR.
*/
#define	DMA_ADICR004	(DMA_CH4_ADICR)

/** \brief  2094, DMA Channel Configuration Register */
#define DMA_CH4_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012094u)

/** Alias (User Manual Name) for DMA_CH4_CHCFGR.
* To use register names with standard convension, please use DMA_CH4_CHCFGR.
*/
#define	DMA_CHCFGR004	(DMA_CH4_CHCFGR)

/** \brief  209C, DMARAM Channel Control and Status Register */
#define DMA_CH4_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001209Cu)

/** Alias (User Manual Name) for DMA_CH4_CHCSR.
* To use register names with standard convension, please use DMA_CH4_CHCSR.
*/
#define	DMA_CHCSR004	(DMA_CH4_CHCSR)

/** \brief  208C, DMA Channel Destination Address Register x */
#define DMA_CH4_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001208Cu)

/** Alias (User Manual Name) for DMA_CH4_DADR.
* To use register names with standard convension, please use DMA_CH4_DADR.
*/
#define	DMA_DADR004	(DMA_CH4_DADR)

/** \brief  2080, DMA Channel Read Data CRC Register */
#define DMA_CH4_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012080u)

/** Alias (User Manual Name) for DMA_CH4_RDCRCR.
* To use register names with standard convension, please use DMA_CH4_RDCRCR.
*/
#define	DMA_RDCRCR004	(DMA_CH4_RDCRCR)

/** \brief  2088, DMA Channel Source Address Register */
#define DMA_CH4_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012088u)

/** Alias (User Manual Name) for DMA_CH4_SADR.
* To use register names with standard convension, please use DMA_CH4_SADR.
*/
#define	DMA_SADR004	(DMA_CH4_SADR)

/** \brief  2084, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH4_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012084u)

/** Alias (User Manual Name) for DMA_CH4_SDCRCR.
* To use register names with standard convension, please use DMA_CH4_SDCRCR.
*/
#define	DMA_SDCRCR004	(DMA_CH4_SDCRCR)

/** \brief  2098, DMA Channel Shadow Address Register */
#define DMA_CH4_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012098u)

/** Alias (User Manual Name) for DMA_CH4_SHADR.
* To use register names with standard convension, please use DMA_CH4_SHADR.
*/
#define	DMA_SHADR004	(DMA_CH4_SHADR)

/** \brief  2650, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH50_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012650u)

/** Alias (User Manual Name) for DMA_CH50_ADICR.
* To use register names with standard convension, please use DMA_CH50_ADICR.
*/
#define	DMA_ADICR050	(DMA_CH50_ADICR)

/** \brief  2654, DMA Channel Configuration Register */
#define DMA_CH50_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012654u)

/** Alias (User Manual Name) for DMA_CH50_CHCFGR.
* To use register names with standard convension, please use DMA_CH50_CHCFGR.
*/
#define	DMA_CHCFGR050	(DMA_CH50_CHCFGR)

/** \brief  265C, DMARAM Channel Control and Status Register */
#define DMA_CH50_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001265Cu)

/** Alias (User Manual Name) for DMA_CH50_CHCSR.
* To use register names with standard convension, please use DMA_CH50_CHCSR.
*/
#define	DMA_CHCSR050	(DMA_CH50_CHCSR)

/** \brief  264C, DMA Channel Destination Address Register x */
#define DMA_CH50_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001264Cu)

/** Alias (User Manual Name) for DMA_CH50_DADR.
* To use register names with standard convension, please use DMA_CH50_DADR.
*/
#define	DMA_DADR050	(DMA_CH50_DADR)

/** \brief  2640, DMA Channel Read Data CRC Register */
#define DMA_CH50_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012640u)

/** Alias (User Manual Name) for DMA_CH50_RDCRCR.
* To use register names with standard convension, please use DMA_CH50_RDCRCR.
*/
#define	DMA_RDCRCR050	(DMA_CH50_RDCRCR)

/** \brief  2648, DMA Channel Source Address Register */
#define DMA_CH50_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012648u)

/** Alias (User Manual Name) for DMA_CH50_SADR.
* To use register names with standard convension, please use DMA_CH50_SADR.
*/
#define	DMA_SADR050	(DMA_CH50_SADR)

/** \brief  2644, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH50_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012644u)

/** Alias (User Manual Name) for DMA_CH50_SDCRCR.
* To use register names with standard convension, please use DMA_CH50_SDCRCR.
*/
#define	DMA_SDCRCR050	(DMA_CH50_SDCRCR)

/** \brief  2658, DMA Channel Shadow Address Register */
#define DMA_CH50_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012658u)

/** Alias (User Manual Name) for DMA_CH50_SHADR.
* To use register names with standard convension, please use DMA_CH50_SHADR.
*/
#define	DMA_SHADR050	(DMA_CH50_SHADR)

/** \brief  2670, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH51_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012670u)

/** Alias (User Manual Name) for DMA_CH51_ADICR.
* To use register names with standard convension, please use DMA_CH51_ADICR.
*/
#define	DMA_ADICR051	(DMA_CH51_ADICR)

/** \brief  2674, DMA Channel Configuration Register */
#define DMA_CH51_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012674u)

/** Alias (User Manual Name) for DMA_CH51_CHCFGR.
* To use register names with standard convension, please use DMA_CH51_CHCFGR.
*/
#define	DMA_CHCFGR051	(DMA_CH51_CHCFGR)

/** \brief  267C, DMARAM Channel Control and Status Register */
#define DMA_CH51_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001267Cu)

/** Alias (User Manual Name) for DMA_CH51_CHCSR.
* To use register names with standard convension, please use DMA_CH51_CHCSR.
*/
#define	DMA_CHCSR051	(DMA_CH51_CHCSR)

/** \brief  266C, DMA Channel Destination Address Register x */
#define DMA_CH51_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001266Cu)

/** Alias (User Manual Name) for DMA_CH51_DADR.
* To use register names with standard convension, please use DMA_CH51_DADR.
*/
#define	DMA_DADR051	(DMA_CH51_DADR)

/** \brief  2660, DMA Channel Read Data CRC Register */
#define DMA_CH51_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012660u)

/** Alias (User Manual Name) for DMA_CH51_RDCRCR.
* To use register names with standard convension, please use DMA_CH51_RDCRCR.
*/
#define	DMA_RDCRCR051	(DMA_CH51_RDCRCR)

/** \brief  2668, DMA Channel Source Address Register */
#define DMA_CH51_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012668u)

/** Alias (User Manual Name) for DMA_CH51_SADR.
* To use register names with standard convension, please use DMA_CH51_SADR.
*/
#define	DMA_SADR051	(DMA_CH51_SADR)

/** \brief  2664, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH51_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012664u)

/** Alias (User Manual Name) for DMA_CH51_SDCRCR.
* To use register names with standard convension, please use DMA_CH51_SDCRCR.
*/
#define	DMA_SDCRCR051	(DMA_CH51_SDCRCR)

/** \brief  2678, DMA Channel Shadow Address Register */
#define DMA_CH51_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012678u)

/** Alias (User Manual Name) for DMA_CH51_SHADR.
* To use register names with standard convension, please use DMA_CH51_SHADR.
*/
#define	DMA_SHADR051	(DMA_CH51_SHADR)

/** \brief  2690, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH52_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012690u)

/** Alias (User Manual Name) for DMA_CH52_ADICR.
* To use register names with standard convension, please use DMA_CH52_ADICR.
*/
#define	DMA_ADICR052	(DMA_CH52_ADICR)

/** \brief  2694, DMA Channel Configuration Register */
#define DMA_CH52_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012694u)

/** Alias (User Manual Name) for DMA_CH52_CHCFGR.
* To use register names with standard convension, please use DMA_CH52_CHCFGR.
*/
#define	DMA_CHCFGR052	(DMA_CH52_CHCFGR)

/** \brief  269C, DMARAM Channel Control and Status Register */
#define DMA_CH52_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001269Cu)

/** Alias (User Manual Name) for DMA_CH52_CHCSR.
* To use register names with standard convension, please use DMA_CH52_CHCSR.
*/
#define	DMA_CHCSR052	(DMA_CH52_CHCSR)

/** \brief  268C, DMA Channel Destination Address Register x */
#define DMA_CH52_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001268Cu)

/** Alias (User Manual Name) for DMA_CH52_DADR.
* To use register names with standard convension, please use DMA_CH52_DADR.
*/
#define	DMA_DADR052	(DMA_CH52_DADR)

/** \brief  2680, DMA Channel Read Data CRC Register */
#define DMA_CH52_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012680u)

/** Alias (User Manual Name) for DMA_CH52_RDCRCR.
* To use register names with standard convension, please use DMA_CH52_RDCRCR.
*/
#define	DMA_RDCRCR052	(DMA_CH52_RDCRCR)

/** \brief  2688, DMA Channel Source Address Register */
#define DMA_CH52_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012688u)

/** Alias (User Manual Name) for DMA_CH52_SADR.
* To use register names with standard convension, please use DMA_CH52_SADR.
*/
#define	DMA_SADR052	(DMA_CH52_SADR)

/** \brief  2684, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH52_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012684u)

/** Alias (User Manual Name) for DMA_CH52_SDCRCR.
* To use register names with standard convension, please use DMA_CH52_SDCRCR.
*/
#define	DMA_SDCRCR052	(DMA_CH52_SDCRCR)

/** \brief  2698, DMA Channel Shadow Address Register */
#define DMA_CH52_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012698u)

/** Alias (User Manual Name) for DMA_CH52_SHADR.
* To use register names with standard convension, please use DMA_CH52_SHADR.
*/
#define	DMA_SHADR052	(DMA_CH52_SHADR)

/** \brief  26B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH53_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00126B0u)

/** Alias (User Manual Name) for DMA_CH53_ADICR.
* To use register names with standard convension, please use DMA_CH53_ADICR.
*/
#define	DMA_ADICR053	(DMA_CH53_ADICR)

/** \brief  26B4, DMA Channel Configuration Register */
#define DMA_CH53_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00126B4u)

/** Alias (User Manual Name) for DMA_CH53_CHCFGR.
* To use register names with standard convension, please use DMA_CH53_CHCFGR.
*/
#define	DMA_CHCFGR053	(DMA_CH53_CHCFGR)

/** \brief  26BC, DMARAM Channel Control and Status Register */
#define DMA_CH53_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00126BCu)

/** Alias (User Manual Name) for DMA_CH53_CHCSR.
* To use register names with standard convension, please use DMA_CH53_CHCSR.
*/
#define	DMA_CHCSR053	(DMA_CH53_CHCSR)

/** \brief  26AC, DMA Channel Destination Address Register x */
#define DMA_CH53_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00126ACu)

/** Alias (User Manual Name) for DMA_CH53_DADR.
* To use register names with standard convension, please use DMA_CH53_DADR.
*/
#define	DMA_DADR053	(DMA_CH53_DADR)

/** \brief  26A0, DMA Channel Read Data CRC Register */
#define DMA_CH53_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00126A0u)

/** Alias (User Manual Name) for DMA_CH53_RDCRCR.
* To use register names with standard convension, please use DMA_CH53_RDCRCR.
*/
#define	DMA_RDCRCR053	(DMA_CH53_RDCRCR)

/** \brief  26A8, DMA Channel Source Address Register */
#define DMA_CH53_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00126A8u)

/** Alias (User Manual Name) for DMA_CH53_SADR.
* To use register names with standard convension, please use DMA_CH53_SADR.
*/
#define	DMA_SADR053	(DMA_CH53_SADR)

/** \brief  26A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH53_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00126A4u)

/** Alias (User Manual Name) for DMA_CH53_SDCRCR.
* To use register names with standard convension, please use DMA_CH53_SDCRCR.
*/
#define	DMA_SDCRCR053	(DMA_CH53_SDCRCR)

/** \brief  26B8, DMA Channel Shadow Address Register */
#define DMA_CH53_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00126B8u)

/** Alias (User Manual Name) for DMA_CH53_SHADR.
* To use register names with standard convension, please use DMA_CH53_SHADR.
*/
#define	DMA_SHADR053	(DMA_CH53_SHADR)

/** \brief  26D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH54_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00126D0u)

/** Alias (User Manual Name) for DMA_CH54_ADICR.
* To use register names with standard convension, please use DMA_CH54_ADICR.
*/
#define	DMA_ADICR054	(DMA_CH54_ADICR)

/** \brief  26D4, DMA Channel Configuration Register */
#define DMA_CH54_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00126D4u)

/** Alias (User Manual Name) for DMA_CH54_CHCFGR.
* To use register names with standard convension, please use DMA_CH54_CHCFGR.
*/
#define	DMA_CHCFGR054	(DMA_CH54_CHCFGR)

/** \brief  26DC, DMARAM Channel Control and Status Register */
#define DMA_CH54_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00126DCu)

/** Alias (User Manual Name) for DMA_CH54_CHCSR.
* To use register names with standard convension, please use DMA_CH54_CHCSR.
*/
#define	DMA_CHCSR054	(DMA_CH54_CHCSR)

/** \brief  26CC, DMA Channel Destination Address Register x */
#define DMA_CH54_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00126CCu)

/** Alias (User Manual Name) for DMA_CH54_DADR.
* To use register names with standard convension, please use DMA_CH54_DADR.
*/
#define	DMA_DADR054	(DMA_CH54_DADR)

/** \brief  26C0, DMA Channel Read Data CRC Register */
#define DMA_CH54_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00126C0u)

/** Alias (User Manual Name) for DMA_CH54_RDCRCR.
* To use register names with standard convension, please use DMA_CH54_RDCRCR.
*/
#define	DMA_RDCRCR054	(DMA_CH54_RDCRCR)

/** \brief  26C8, DMA Channel Source Address Register */
#define DMA_CH54_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00126C8u)

/** Alias (User Manual Name) for DMA_CH54_SADR.
* To use register names with standard convension, please use DMA_CH54_SADR.
*/
#define	DMA_SADR054	(DMA_CH54_SADR)

/** \brief  26C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH54_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00126C4u)

/** Alias (User Manual Name) for DMA_CH54_SDCRCR.
* To use register names with standard convension, please use DMA_CH54_SDCRCR.
*/
#define	DMA_SDCRCR054	(DMA_CH54_SDCRCR)

/** \brief  26D8, DMA Channel Shadow Address Register */
#define DMA_CH54_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00126D8u)

/** Alias (User Manual Name) for DMA_CH54_SHADR.
* To use register names with standard convension, please use DMA_CH54_SHADR.
*/
#define	DMA_SHADR054	(DMA_CH54_SHADR)

/** \brief  26F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH55_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00126F0u)

/** Alias (User Manual Name) for DMA_CH55_ADICR.
* To use register names with standard convension, please use DMA_CH55_ADICR.
*/
#define	DMA_ADICR055	(DMA_CH55_ADICR)

/** \brief  26F4, DMA Channel Configuration Register */
#define DMA_CH55_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00126F4u)

/** Alias (User Manual Name) for DMA_CH55_CHCFGR.
* To use register names with standard convension, please use DMA_CH55_CHCFGR.
*/
#define	DMA_CHCFGR055	(DMA_CH55_CHCFGR)

/** \brief  26FC, DMARAM Channel Control and Status Register */
#define DMA_CH55_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00126FCu)

/** Alias (User Manual Name) for DMA_CH55_CHCSR.
* To use register names with standard convension, please use DMA_CH55_CHCSR.
*/
#define	DMA_CHCSR055	(DMA_CH55_CHCSR)

/** \brief  26EC, DMA Channel Destination Address Register x */
#define DMA_CH55_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00126ECu)

/** Alias (User Manual Name) for DMA_CH55_DADR.
* To use register names with standard convension, please use DMA_CH55_DADR.
*/
#define	DMA_DADR055	(DMA_CH55_DADR)

/** \brief  26E0, DMA Channel Read Data CRC Register */
#define DMA_CH55_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00126E0u)

/** Alias (User Manual Name) for DMA_CH55_RDCRCR.
* To use register names with standard convension, please use DMA_CH55_RDCRCR.
*/
#define	DMA_RDCRCR055	(DMA_CH55_RDCRCR)

/** \brief  26E8, DMA Channel Source Address Register */
#define DMA_CH55_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00126E8u)

/** Alias (User Manual Name) for DMA_CH55_SADR.
* To use register names with standard convension, please use DMA_CH55_SADR.
*/
#define	DMA_SADR055	(DMA_CH55_SADR)

/** \brief  26E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH55_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00126E4u)

/** Alias (User Manual Name) for DMA_CH55_SDCRCR.
* To use register names with standard convension, please use DMA_CH55_SDCRCR.
*/
#define	DMA_SDCRCR055	(DMA_CH55_SDCRCR)

/** \brief  26F8, DMA Channel Shadow Address Register */
#define DMA_CH55_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00126F8u)

/** Alias (User Manual Name) for DMA_CH55_SHADR.
* To use register names with standard convension, please use DMA_CH55_SHADR.
*/
#define	DMA_SHADR055	(DMA_CH55_SHADR)

/** \brief  2710, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH56_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012710u)

/** Alias (User Manual Name) for DMA_CH56_ADICR.
* To use register names with standard convension, please use DMA_CH56_ADICR.
*/
#define	DMA_ADICR056	(DMA_CH56_ADICR)

/** \brief  2714, DMA Channel Configuration Register */
#define DMA_CH56_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012714u)

/** Alias (User Manual Name) for DMA_CH56_CHCFGR.
* To use register names with standard convension, please use DMA_CH56_CHCFGR.
*/
#define	DMA_CHCFGR056	(DMA_CH56_CHCFGR)

/** \brief  271C, DMARAM Channel Control and Status Register */
#define DMA_CH56_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001271Cu)

/** Alias (User Manual Name) for DMA_CH56_CHCSR.
* To use register names with standard convension, please use DMA_CH56_CHCSR.
*/
#define	DMA_CHCSR056	(DMA_CH56_CHCSR)

/** \brief  270C, DMA Channel Destination Address Register x */
#define DMA_CH56_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001270Cu)

/** Alias (User Manual Name) for DMA_CH56_DADR.
* To use register names with standard convension, please use DMA_CH56_DADR.
*/
#define	DMA_DADR056	(DMA_CH56_DADR)

/** \brief  2700, DMA Channel Read Data CRC Register */
#define DMA_CH56_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012700u)

/** Alias (User Manual Name) for DMA_CH56_RDCRCR.
* To use register names with standard convension, please use DMA_CH56_RDCRCR.
*/
#define	DMA_RDCRCR056	(DMA_CH56_RDCRCR)

/** \brief  2708, DMA Channel Source Address Register */
#define DMA_CH56_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012708u)

/** Alias (User Manual Name) for DMA_CH56_SADR.
* To use register names with standard convension, please use DMA_CH56_SADR.
*/
#define	DMA_SADR056	(DMA_CH56_SADR)

/** \brief  2704, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH56_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012704u)

/** Alias (User Manual Name) for DMA_CH56_SDCRCR.
* To use register names with standard convension, please use DMA_CH56_SDCRCR.
*/
#define	DMA_SDCRCR056	(DMA_CH56_SDCRCR)

/** \brief  2718, DMA Channel Shadow Address Register */
#define DMA_CH56_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012718u)

/** Alias (User Manual Name) for DMA_CH56_SHADR.
* To use register names with standard convension, please use DMA_CH56_SHADR.
*/
#define	DMA_SHADR056	(DMA_CH56_SHADR)

/** \brief  2730, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH57_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012730u)

/** Alias (User Manual Name) for DMA_CH57_ADICR.
* To use register names with standard convension, please use DMA_CH57_ADICR.
*/
#define	DMA_ADICR057	(DMA_CH57_ADICR)

/** \brief  2734, DMA Channel Configuration Register */
#define DMA_CH57_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012734u)

/** Alias (User Manual Name) for DMA_CH57_CHCFGR.
* To use register names with standard convension, please use DMA_CH57_CHCFGR.
*/
#define	DMA_CHCFGR057	(DMA_CH57_CHCFGR)

/** \brief  273C, DMARAM Channel Control and Status Register */
#define DMA_CH57_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001273Cu)

/** Alias (User Manual Name) for DMA_CH57_CHCSR.
* To use register names with standard convension, please use DMA_CH57_CHCSR.
*/
#define	DMA_CHCSR057	(DMA_CH57_CHCSR)

/** \brief  272C, DMA Channel Destination Address Register x */
#define DMA_CH57_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001272Cu)

/** Alias (User Manual Name) for DMA_CH57_DADR.
* To use register names with standard convension, please use DMA_CH57_DADR.
*/
#define	DMA_DADR057	(DMA_CH57_DADR)

/** \brief  2720, DMA Channel Read Data CRC Register */
#define DMA_CH57_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012720u)

/** Alias (User Manual Name) for DMA_CH57_RDCRCR.
* To use register names with standard convension, please use DMA_CH57_RDCRCR.
*/
#define	DMA_RDCRCR057	(DMA_CH57_RDCRCR)

/** \brief  2728, DMA Channel Source Address Register */
#define DMA_CH57_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012728u)

/** Alias (User Manual Name) for DMA_CH57_SADR.
* To use register names with standard convension, please use DMA_CH57_SADR.
*/
#define	DMA_SADR057	(DMA_CH57_SADR)

/** \brief  2724, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH57_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012724u)

/** Alias (User Manual Name) for DMA_CH57_SDCRCR.
* To use register names with standard convension, please use DMA_CH57_SDCRCR.
*/
#define	DMA_SDCRCR057	(DMA_CH57_SDCRCR)

/** \brief  2738, DMA Channel Shadow Address Register */
#define DMA_CH57_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012738u)

/** Alias (User Manual Name) for DMA_CH57_SHADR.
* To use register names with standard convension, please use DMA_CH57_SHADR.
*/
#define	DMA_SHADR057	(DMA_CH57_SHADR)

/** \brief  2750, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH58_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012750u)

/** Alias (User Manual Name) for DMA_CH58_ADICR.
* To use register names with standard convension, please use DMA_CH58_ADICR.
*/
#define	DMA_ADICR058	(DMA_CH58_ADICR)

/** \brief  2754, DMA Channel Configuration Register */
#define DMA_CH58_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012754u)

/** Alias (User Manual Name) for DMA_CH58_CHCFGR.
* To use register names with standard convension, please use DMA_CH58_CHCFGR.
*/
#define	DMA_CHCFGR058	(DMA_CH58_CHCFGR)

/** \brief  275C, DMARAM Channel Control and Status Register */
#define DMA_CH58_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001275Cu)

/** Alias (User Manual Name) for DMA_CH58_CHCSR.
* To use register names with standard convension, please use DMA_CH58_CHCSR.
*/
#define	DMA_CHCSR058	(DMA_CH58_CHCSR)

/** \brief  274C, DMA Channel Destination Address Register x */
#define DMA_CH58_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001274Cu)

/** Alias (User Manual Name) for DMA_CH58_DADR.
* To use register names with standard convension, please use DMA_CH58_DADR.
*/
#define	DMA_DADR058	(DMA_CH58_DADR)

/** \brief  2740, DMA Channel Read Data CRC Register */
#define DMA_CH58_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012740u)

/** Alias (User Manual Name) for DMA_CH58_RDCRCR.
* To use register names with standard convension, please use DMA_CH58_RDCRCR.
*/
#define	DMA_RDCRCR058	(DMA_CH58_RDCRCR)

/** \brief  2748, DMA Channel Source Address Register */
#define DMA_CH58_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012748u)

/** Alias (User Manual Name) for DMA_CH58_SADR.
* To use register names with standard convension, please use DMA_CH58_SADR.
*/
#define	DMA_SADR058	(DMA_CH58_SADR)

/** \brief  2744, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH58_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012744u)

/** Alias (User Manual Name) for DMA_CH58_SDCRCR.
* To use register names with standard convension, please use DMA_CH58_SDCRCR.
*/
#define	DMA_SDCRCR058	(DMA_CH58_SDCRCR)

/** \brief  2758, DMA Channel Shadow Address Register */
#define DMA_CH58_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012758u)

/** Alias (User Manual Name) for DMA_CH58_SHADR.
* To use register names with standard convension, please use DMA_CH58_SHADR.
*/
#define	DMA_SHADR058	(DMA_CH58_SHADR)

/** \brief  2770, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH59_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012770u)

/** Alias (User Manual Name) for DMA_CH59_ADICR.
* To use register names with standard convension, please use DMA_CH59_ADICR.
*/
#define	DMA_ADICR059	(DMA_CH59_ADICR)

/** \brief  2774, DMA Channel Configuration Register */
#define DMA_CH59_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012774u)

/** Alias (User Manual Name) for DMA_CH59_CHCFGR.
* To use register names with standard convension, please use DMA_CH59_CHCFGR.
*/
#define	DMA_CHCFGR059	(DMA_CH59_CHCFGR)

/** \brief  277C, DMARAM Channel Control and Status Register */
#define DMA_CH59_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001277Cu)

/** Alias (User Manual Name) for DMA_CH59_CHCSR.
* To use register names with standard convension, please use DMA_CH59_CHCSR.
*/
#define	DMA_CHCSR059	(DMA_CH59_CHCSR)

/** \brief  276C, DMA Channel Destination Address Register x */
#define DMA_CH59_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001276Cu)

/** Alias (User Manual Name) for DMA_CH59_DADR.
* To use register names with standard convension, please use DMA_CH59_DADR.
*/
#define	DMA_DADR059	(DMA_CH59_DADR)

/** \brief  2760, DMA Channel Read Data CRC Register */
#define DMA_CH59_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012760u)

/** Alias (User Manual Name) for DMA_CH59_RDCRCR.
* To use register names with standard convension, please use DMA_CH59_RDCRCR.
*/
#define	DMA_RDCRCR059	(DMA_CH59_RDCRCR)

/** \brief  2768, DMA Channel Source Address Register */
#define DMA_CH59_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012768u)

/** Alias (User Manual Name) for DMA_CH59_SADR.
* To use register names with standard convension, please use DMA_CH59_SADR.
*/
#define	DMA_SADR059	(DMA_CH59_SADR)

/** \brief  2764, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH59_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012764u)

/** Alias (User Manual Name) for DMA_CH59_SDCRCR.
* To use register names with standard convension, please use DMA_CH59_SDCRCR.
*/
#define	DMA_SDCRCR059	(DMA_CH59_SDCRCR)

/** \brief  2778, DMA Channel Shadow Address Register */
#define DMA_CH59_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012778u)

/** Alias (User Manual Name) for DMA_CH59_SHADR.
* To use register names with standard convension, please use DMA_CH59_SHADR.
*/
#define	DMA_SHADR059	(DMA_CH59_SHADR)

/** \brief  20B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH5_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00120B0u)

/** Alias (User Manual Name) for DMA_CH5_ADICR.
* To use register names with standard convension, please use DMA_CH5_ADICR.
*/
#define	DMA_ADICR005	(DMA_CH5_ADICR)

/** \brief  20B4, DMA Channel Configuration Register */
#define DMA_CH5_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00120B4u)

/** Alias (User Manual Name) for DMA_CH5_CHCFGR.
* To use register names with standard convension, please use DMA_CH5_CHCFGR.
*/
#define	DMA_CHCFGR005	(DMA_CH5_CHCFGR)

/** \brief  20BC, DMARAM Channel Control and Status Register */
#define DMA_CH5_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00120BCu)

/** Alias (User Manual Name) for DMA_CH5_CHCSR.
* To use register names with standard convension, please use DMA_CH5_CHCSR.
*/
#define	DMA_CHCSR005	(DMA_CH5_CHCSR)

/** \brief  20AC, DMA Channel Destination Address Register x */
#define DMA_CH5_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00120ACu)

/** Alias (User Manual Name) for DMA_CH5_DADR.
* To use register names with standard convension, please use DMA_CH5_DADR.
*/
#define	DMA_DADR005	(DMA_CH5_DADR)

/** \brief  20A0, DMA Channel Read Data CRC Register */
#define DMA_CH5_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00120A0u)

/** Alias (User Manual Name) for DMA_CH5_RDCRCR.
* To use register names with standard convension, please use DMA_CH5_RDCRCR.
*/
#define	DMA_RDCRCR005	(DMA_CH5_RDCRCR)

/** \brief  20A8, DMA Channel Source Address Register */
#define DMA_CH5_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00120A8u)

/** Alias (User Manual Name) for DMA_CH5_SADR.
* To use register names with standard convension, please use DMA_CH5_SADR.
*/
#define	DMA_SADR005	(DMA_CH5_SADR)

/** \brief  20A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH5_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00120A4u)

/** Alias (User Manual Name) for DMA_CH5_SDCRCR.
* To use register names with standard convension, please use DMA_CH5_SDCRCR.
*/
#define	DMA_SDCRCR005	(DMA_CH5_SDCRCR)

/** \brief  20B8, DMA Channel Shadow Address Register */
#define DMA_CH5_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00120B8u)

/** Alias (User Manual Name) for DMA_CH5_SHADR.
* To use register names with standard convension, please use DMA_CH5_SHADR.
*/
#define	DMA_SHADR005	(DMA_CH5_SHADR)

/** \brief  2790, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH60_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012790u)

/** Alias (User Manual Name) for DMA_CH60_ADICR.
* To use register names with standard convension, please use DMA_CH60_ADICR.
*/
#define	DMA_ADICR060	(DMA_CH60_ADICR)

/** \brief  2794, DMA Channel Configuration Register */
#define DMA_CH60_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012794u)

/** Alias (User Manual Name) for DMA_CH60_CHCFGR.
* To use register names with standard convension, please use DMA_CH60_CHCFGR.
*/
#define	DMA_CHCFGR060	(DMA_CH60_CHCFGR)

/** \brief  279C, DMARAM Channel Control and Status Register */
#define DMA_CH60_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001279Cu)

/** Alias (User Manual Name) for DMA_CH60_CHCSR.
* To use register names with standard convension, please use DMA_CH60_CHCSR.
*/
#define	DMA_CHCSR060	(DMA_CH60_CHCSR)

/** \brief  278C, DMA Channel Destination Address Register x */
#define DMA_CH60_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001278Cu)

/** Alias (User Manual Name) for DMA_CH60_DADR.
* To use register names with standard convension, please use DMA_CH60_DADR.
*/
#define	DMA_DADR060	(DMA_CH60_DADR)

/** \brief  2780, DMA Channel Read Data CRC Register */
#define DMA_CH60_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012780u)

/** Alias (User Manual Name) for DMA_CH60_RDCRCR.
* To use register names with standard convension, please use DMA_CH60_RDCRCR.
*/
#define	DMA_RDCRCR060	(DMA_CH60_RDCRCR)

/** \brief  2788, DMA Channel Source Address Register */
#define DMA_CH60_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012788u)

/** Alias (User Manual Name) for DMA_CH60_SADR.
* To use register names with standard convension, please use DMA_CH60_SADR.
*/
#define	DMA_SADR060	(DMA_CH60_SADR)

/** \brief  2784, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH60_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012784u)

/** Alias (User Manual Name) for DMA_CH60_SDCRCR.
* To use register names with standard convension, please use DMA_CH60_SDCRCR.
*/
#define	DMA_SDCRCR060	(DMA_CH60_SDCRCR)

/** \brief  2798, DMA Channel Shadow Address Register */
#define DMA_CH60_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012798u)

/** Alias (User Manual Name) for DMA_CH60_SHADR.
* To use register names with standard convension, please use DMA_CH60_SHADR.
*/
#define	DMA_SHADR060	(DMA_CH60_SHADR)

/** \brief  27B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH61_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00127B0u)

/** Alias (User Manual Name) for DMA_CH61_ADICR.
* To use register names with standard convension, please use DMA_CH61_ADICR.
*/
#define	DMA_ADICR061	(DMA_CH61_ADICR)

/** \brief  27B4, DMA Channel Configuration Register */
#define DMA_CH61_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00127B4u)

/** Alias (User Manual Name) for DMA_CH61_CHCFGR.
* To use register names with standard convension, please use DMA_CH61_CHCFGR.
*/
#define	DMA_CHCFGR061	(DMA_CH61_CHCFGR)

/** \brief  27BC, DMARAM Channel Control and Status Register */
#define DMA_CH61_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00127BCu)

/** Alias (User Manual Name) for DMA_CH61_CHCSR.
* To use register names with standard convension, please use DMA_CH61_CHCSR.
*/
#define	DMA_CHCSR061	(DMA_CH61_CHCSR)

/** \brief  27AC, DMA Channel Destination Address Register x */
#define DMA_CH61_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00127ACu)

/** Alias (User Manual Name) for DMA_CH61_DADR.
* To use register names with standard convension, please use DMA_CH61_DADR.
*/
#define	DMA_DADR061	(DMA_CH61_DADR)

/** \brief  27A0, DMA Channel Read Data CRC Register */
#define DMA_CH61_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00127A0u)

/** Alias (User Manual Name) for DMA_CH61_RDCRCR.
* To use register names with standard convension, please use DMA_CH61_RDCRCR.
*/
#define	DMA_RDCRCR061	(DMA_CH61_RDCRCR)

/** \brief  27A8, DMA Channel Source Address Register */
#define DMA_CH61_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00127A8u)

/** Alias (User Manual Name) for DMA_CH61_SADR.
* To use register names with standard convension, please use DMA_CH61_SADR.
*/
#define	DMA_SADR061	(DMA_CH61_SADR)

/** \brief  27A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH61_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00127A4u)

/** Alias (User Manual Name) for DMA_CH61_SDCRCR.
* To use register names with standard convension, please use DMA_CH61_SDCRCR.
*/
#define	DMA_SDCRCR061	(DMA_CH61_SDCRCR)

/** \brief  27B8, DMA Channel Shadow Address Register */
#define DMA_CH61_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00127B8u)

/** Alias (User Manual Name) for DMA_CH61_SHADR.
* To use register names with standard convension, please use DMA_CH61_SHADR.
*/
#define	DMA_SHADR061	(DMA_CH61_SHADR)

/** \brief  27D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH62_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00127D0u)

/** Alias (User Manual Name) for DMA_CH62_ADICR.
* To use register names with standard convension, please use DMA_CH62_ADICR.
*/
#define	DMA_ADICR062	(DMA_CH62_ADICR)

/** \brief  27D4, DMA Channel Configuration Register */
#define DMA_CH62_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00127D4u)

/** Alias (User Manual Name) for DMA_CH62_CHCFGR.
* To use register names with standard convension, please use DMA_CH62_CHCFGR.
*/
#define	DMA_CHCFGR062	(DMA_CH62_CHCFGR)

/** \brief  27DC, DMARAM Channel Control and Status Register */
#define DMA_CH62_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00127DCu)

/** Alias (User Manual Name) for DMA_CH62_CHCSR.
* To use register names with standard convension, please use DMA_CH62_CHCSR.
*/
#define	DMA_CHCSR062	(DMA_CH62_CHCSR)

/** \brief  27CC, DMA Channel Destination Address Register x */
#define DMA_CH62_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00127CCu)

/** Alias (User Manual Name) for DMA_CH62_DADR.
* To use register names with standard convension, please use DMA_CH62_DADR.
*/
#define	DMA_DADR062	(DMA_CH62_DADR)

/** \brief  27C0, DMA Channel Read Data CRC Register */
#define DMA_CH62_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00127C0u)

/** Alias (User Manual Name) for DMA_CH62_RDCRCR.
* To use register names with standard convension, please use DMA_CH62_RDCRCR.
*/
#define	DMA_RDCRCR062	(DMA_CH62_RDCRCR)

/** \brief  27C8, DMA Channel Source Address Register */
#define DMA_CH62_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00127C8u)

/** Alias (User Manual Name) for DMA_CH62_SADR.
* To use register names with standard convension, please use DMA_CH62_SADR.
*/
#define	DMA_SADR062	(DMA_CH62_SADR)

/** \brief  27C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH62_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00127C4u)

/** Alias (User Manual Name) for DMA_CH62_SDCRCR.
* To use register names with standard convension, please use DMA_CH62_SDCRCR.
*/
#define	DMA_SDCRCR062	(DMA_CH62_SDCRCR)

/** \brief  27D8, DMA Channel Shadow Address Register */
#define DMA_CH62_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00127D8u)

/** Alias (User Manual Name) for DMA_CH62_SHADR.
* To use register names with standard convension, please use DMA_CH62_SHADR.
*/
#define	DMA_SHADR062	(DMA_CH62_SHADR)

/** \brief  27F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH63_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00127F0u)

/** Alias (User Manual Name) for DMA_CH63_ADICR.
* To use register names with standard convension, please use DMA_CH63_ADICR.
*/
#define	DMA_ADICR063	(DMA_CH63_ADICR)

/** \brief  27F4, DMA Channel Configuration Register */
#define DMA_CH63_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00127F4u)

/** Alias (User Manual Name) for DMA_CH63_CHCFGR.
* To use register names with standard convension, please use DMA_CH63_CHCFGR.
*/
#define	DMA_CHCFGR063	(DMA_CH63_CHCFGR)

/** \brief  27FC, DMARAM Channel Control and Status Register */
#define DMA_CH63_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00127FCu)

/** Alias (User Manual Name) for DMA_CH63_CHCSR.
* To use register names with standard convension, please use DMA_CH63_CHCSR.
*/
#define	DMA_CHCSR063	(DMA_CH63_CHCSR)

/** \brief  27EC, DMA Channel Destination Address Register x */
#define DMA_CH63_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00127ECu)

/** Alias (User Manual Name) for DMA_CH63_DADR.
* To use register names with standard convension, please use DMA_CH63_DADR.
*/
#define	DMA_DADR063	(DMA_CH63_DADR)

/** \brief  27E0, DMA Channel Read Data CRC Register */
#define DMA_CH63_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00127E0u)

/** Alias (User Manual Name) for DMA_CH63_RDCRCR.
* To use register names with standard convension, please use DMA_CH63_RDCRCR.
*/
#define	DMA_RDCRCR063	(DMA_CH63_RDCRCR)

/** \brief  27E8, DMA Channel Source Address Register */
#define DMA_CH63_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00127E8u)

/** Alias (User Manual Name) for DMA_CH63_SADR.
* To use register names with standard convension, please use DMA_CH63_SADR.
*/
#define	DMA_SADR063	(DMA_CH63_SADR)

/** \brief  27E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH63_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00127E4u)

/** Alias (User Manual Name) for DMA_CH63_SDCRCR.
* To use register names with standard convension, please use DMA_CH63_SDCRCR.
*/
#define	DMA_SDCRCR063	(DMA_CH63_SDCRCR)

/** \brief  27F8, DMA Channel Shadow Address Register */
#define DMA_CH63_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00127F8u)

/** Alias (User Manual Name) for DMA_CH63_SHADR.
* To use register names with standard convension, please use DMA_CH63_SHADR.
*/
#define	DMA_SHADR063	(DMA_CH63_SHADR)

/** \brief  2810, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH64_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012810u)

/** Alias (User Manual Name) for DMA_CH64_ADICR.
* To use register names with standard convension, please use DMA_CH64_ADICR.
*/
#define	DMA_ADICR064	(DMA_CH64_ADICR)

/** \brief  2814, DMA Channel Configuration Register */
#define DMA_CH64_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012814u)

/** Alias (User Manual Name) for DMA_CH64_CHCFGR.
* To use register names with standard convension, please use DMA_CH64_CHCFGR.
*/
#define	DMA_CHCFGR064	(DMA_CH64_CHCFGR)

/** \brief  281C, DMARAM Channel Control and Status Register */
#define DMA_CH64_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001281Cu)

/** Alias (User Manual Name) for DMA_CH64_CHCSR.
* To use register names with standard convension, please use DMA_CH64_CHCSR.
*/
#define	DMA_CHCSR064	(DMA_CH64_CHCSR)

/** \brief  280C, DMA Channel Destination Address Register x */
#define DMA_CH64_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001280Cu)

/** Alias (User Manual Name) for DMA_CH64_DADR.
* To use register names with standard convension, please use DMA_CH64_DADR.
*/
#define	DMA_DADR064	(DMA_CH64_DADR)

/** \brief  2800, DMA Channel Read Data CRC Register */
#define DMA_CH64_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012800u)

/** Alias (User Manual Name) for DMA_CH64_RDCRCR.
* To use register names with standard convension, please use DMA_CH64_RDCRCR.
*/
#define	DMA_RDCRCR064	(DMA_CH64_RDCRCR)

/** \brief  2808, DMA Channel Source Address Register */
#define DMA_CH64_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012808u)

/** Alias (User Manual Name) for DMA_CH64_SADR.
* To use register names with standard convension, please use DMA_CH64_SADR.
*/
#define	DMA_SADR064	(DMA_CH64_SADR)

/** \brief  2804, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH64_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012804u)

/** Alias (User Manual Name) for DMA_CH64_SDCRCR.
* To use register names with standard convension, please use DMA_CH64_SDCRCR.
*/
#define	DMA_SDCRCR064	(DMA_CH64_SDCRCR)

/** \brief  2818, DMA Channel Shadow Address Register */
#define DMA_CH64_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012818u)

/** Alias (User Manual Name) for DMA_CH64_SHADR.
* To use register names with standard convension, please use DMA_CH64_SHADR.
*/
#define	DMA_SHADR064	(DMA_CH64_SHADR)

/** \brief  2830, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH65_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012830u)

/** Alias (User Manual Name) for DMA_CH65_ADICR.
* To use register names with standard convension, please use DMA_CH65_ADICR.
*/
#define	DMA_ADICR065	(DMA_CH65_ADICR)

/** \brief  2834, DMA Channel Configuration Register */
#define DMA_CH65_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012834u)

/** Alias (User Manual Name) for DMA_CH65_CHCFGR.
* To use register names with standard convension, please use DMA_CH65_CHCFGR.
*/
#define	DMA_CHCFGR065	(DMA_CH65_CHCFGR)

/** \brief  283C, DMARAM Channel Control and Status Register */
#define DMA_CH65_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001283Cu)

/** Alias (User Manual Name) for DMA_CH65_CHCSR.
* To use register names with standard convension, please use DMA_CH65_CHCSR.
*/
#define	DMA_CHCSR065	(DMA_CH65_CHCSR)

/** \brief  282C, DMA Channel Destination Address Register x */
#define DMA_CH65_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001282Cu)

/** Alias (User Manual Name) for DMA_CH65_DADR.
* To use register names with standard convension, please use DMA_CH65_DADR.
*/
#define	DMA_DADR065	(DMA_CH65_DADR)

/** \brief  2820, DMA Channel Read Data CRC Register */
#define DMA_CH65_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012820u)

/** Alias (User Manual Name) for DMA_CH65_RDCRCR.
* To use register names with standard convension, please use DMA_CH65_RDCRCR.
*/
#define	DMA_RDCRCR065	(DMA_CH65_RDCRCR)

/** \brief  2828, DMA Channel Source Address Register */
#define DMA_CH65_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012828u)

/** Alias (User Manual Name) for DMA_CH65_SADR.
* To use register names with standard convension, please use DMA_CH65_SADR.
*/
#define	DMA_SADR065	(DMA_CH65_SADR)

/** \brief  2824, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH65_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012824u)

/** Alias (User Manual Name) for DMA_CH65_SDCRCR.
* To use register names with standard convension, please use DMA_CH65_SDCRCR.
*/
#define	DMA_SDCRCR065	(DMA_CH65_SDCRCR)

/** \brief  2838, DMA Channel Shadow Address Register */
#define DMA_CH65_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012838u)

/** Alias (User Manual Name) for DMA_CH65_SHADR.
* To use register names with standard convension, please use DMA_CH65_SHADR.
*/
#define	DMA_SHADR065	(DMA_CH65_SHADR)

/** \brief  2850, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH66_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012850u)

/** Alias (User Manual Name) for DMA_CH66_ADICR.
* To use register names with standard convension, please use DMA_CH66_ADICR.
*/
#define	DMA_ADICR066	(DMA_CH66_ADICR)

/** \brief  2854, DMA Channel Configuration Register */
#define DMA_CH66_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012854u)

/** Alias (User Manual Name) for DMA_CH66_CHCFGR.
* To use register names with standard convension, please use DMA_CH66_CHCFGR.
*/
#define	DMA_CHCFGR066	(DMA_CH66_CHCFGR)

/** \brief  285C, DMARAM Channel Control and Status Register */
#define DMA_CH66_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001285Cu)

/** Alias (User Manual Name) for DMA_CH66_CHCSR.
* To use register names with standard convension, please use DMA_CH66_CHCSR.
*/
#define	DMA_CHCSR066	(DMA_CH66_CHCSR)

/** \brief  284C, DMA Channel Destination Address Register x */
#define DMA_CH66_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001284Cu)

/** Alias (User Manual Name) for DMA_CH66_DADR.
* To use register names with standard convension, please use DMA_CH66_DADR.
*/
#define	DMA_DADR066	(DMA_CH66_DADR)

/** \brief  2840, DMA Channel Read Data CRC Register */
#define DMA_CH66_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012840u)

/** Alias (User Manual Name) for DMA_CH66_RDCRCR.
* To use register names with standard convension, please use DMA_CH66_RDCRCR.
*/
#define	DMA_RDCRCR066	(DMA_CH66_RDCRCR)

/** \brief  2848, DMA Channel Source Address Register */
#define DMA_CH66_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012848u)

/** Alias (User Manual Name) for DMA_CH66_SADR.
* To use register names with standard convension, please use DMA_CH66_SADR.
*/
#define	DMA_SADR066	(DMA_CH66_SADR)

/** \brief  2844, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH66_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012844u)

/** Alias (User Manual Name) for DMA_CH66_SDCRCR.
* To use register names with standard convension, please use DMA_CH66_SDCRCR.
*/
#define	DMA_SDCRCR066	(DMA_CH66_SDCRCR)

/** \brief  2858, DMA Channel Shadow Address Register */
#define DMA_CH66_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012858u)

/** Alias (User Manual Name) for DMA_CH66_SHADR.
* To use register names with standard convension, please use DMA_CH66_SHADR.
*/
#define	DMA_SHADR066	(DMA_CH66_SHADR)

/** \brief  2870, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH67_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012870u)

/** Alias (User Manual Name) for DMA_CH67_ADICR.
* To use register names with standard convension, please use DMA_CH67_ADICR.
*/
#define	DMA_ADICR067	(DMA_CH67_ADICR)

/** \brief  2874, DMA Channel Configuration Register */
#define DMA_CH67_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012874u)

/** Alias (User Manual Name) for DMA_CH67_CHCFGR.
* To use register names with standard convension, please use DMA_CH67_CHCFGR.
*/
#define	DMA_CHCFGR067	(DMA_CH67_CHCFGR)

/** \brief  287C, DMARAM Channel Control and Status Register */
#define DMA_CH67_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001287Cu)

/** Alias (User Manual Name) for DMA_CH67_CHCSR.
* To use register names with standard convension, please use DMA_CH67_CHCSR.
*/
#define	DMA_CHCSR067	(DMA_CH67_CHCSR)

/** \brief  286C, DMA Channel Destination Address Register x */
#define DMA_CH67_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001286Cu)

/** Alias (User Manual Name) for DMA_CH67_DADR.
* To use register names with standard convension, please use DMA_CH67_DADR.
*/
#define	DMA_DADR067	(DMA_CH67_DADR)

/** \brief  2860, DMA Channel Read Data CRC Register */
#define DMA_CH67_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012860u)

/** Alias (User Manual Name) for DMA_CH67_RDCRCR.
* To use register names with standard convension, please use DMA_CH67_RDCRCR.
*/
#define	DMA_RDCRCR067	(DMA_CH67_RDCRCR)

/** \brief  2868, DMA Channel Source Address Register */
#define DMA_CH67_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012868u)

/** Alias (User Manual Name) for DMA_CH67_SADR.
* To use register names with standard convension, please use DMA_CH67_SADR.
*/
#define	DMA_SADR067	(DMA_CH67_SADR)

/** \brief  2864, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH67_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012864u)

/** Alias (User Manual Name) for DMA_CH67_SDCRCR.
* To use register names with standard convension, please use DMA_CH67_SDCRCR.
*/
#define	DMA_SDCRCR067	(DMA_CH67_SDCRCR)

/** \brief  2878, DMA Channel Shadow Address Register */
#define DMA_CH67_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012878u)

/** Alias (User Manual Name) for DMA_CH67_SHADR.
* To use register names with standard convension, please use DMA_CH67_SHADR.
*/
#define	DMA_SHADR067	(DMA_CH67_SHADR)

/** \brief  2890, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH68_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012890u)

/** Alias (User Manual Name) for DMA_CH68_ADICR.
* To use register names with standard convension, please use DMA_CH68_ADICR.
*/
#define	DMA_ADICR068	(DMA_CH68_ADICR)

/** \brief  2894, DMA Channel Configuration Register */
#define DMA_CH68_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012894u)

/** Alias (User Manual Name) for DMA_CH68_CHCFGR.
* To use register names with standard convension, please use DMA_CH68_CHCFGR.
*/
#define	DMA_CHCFGR068	(DMA_CH68_CHCFGR)

/** \brief  289C, DMARAM Channel Control and Status Register */
#define DMA_CH68_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001289Cu)

/** Alias (User Manual Name) for DMA_CH68_CHCSR.
* To use register names with standard convension, please use DMA_CH68_CHCSR.
*/
#define	DMA_CHCSR068	(DMA_CH68_CHCSR)

/** \brief  288C, DMA Channel Destination Address Register x */
#define DMA_CH68_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001288Cu)

/** Alias (User Manual Name) for DMA_CH68_DADR.
* To use register names with standard convension, please use DMA_CH68_DADR.
*/
#define	DMA_DADR068	(DMA_CH68_DADR)

/** \brief  2880, DMA Channel Read Data CRC Register */
#define DMA_CH68_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012880u)

/** Alias (User Manual Name) for DMA_CH68_RDCRCR.
* To use register names with standard convension, please use DMA_CH68_RDCRCR.
*/
#define	DMA_RDCRCR068	(DMA_CH68_RDCRCR)

/** \brief  2888, DMA Channel Source Address Register */
#define DMA_CH68_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012888u)

/** Alias (User Manual Name) for DMA_CH68_SADR.
* To use register names with standard convension, please use DMA_CH68_SADR.
*/
#define	DMA_SADR068	(DMA_CH68_SADR)

/** \brief  2884, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH68_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012884u)

/** Alias (User Manual Name) for DMA_CH68_SDCRCR.
* To use register names with standard convension, please use DMA_CH68_SDCRCR.
*/
#define	DMA_SDCRCR068	(DMA_CH68_SDCRCR)

/** \brief  2898, DMA Channel Shadow Address Register */
#define DMA_CH68_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012898u)

/** Alias (User Manual Name) for DMA_CH68_SHADR.
* To use register names with standard convension, please use DMA_CH68_SHADR.
*/
#define	DMA_SHADR068	(DMA_CH68_SHADR)

/** \brief  28B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH69_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00128B0u)

/** Alias (User Manual Name) for DMA_CH69_ADICR.
* To use register names with standard convension, please use DMA_CH69_ADICR.
*/
#define	DMA_ADICR069	(DMA_CH69_ADICR)

/** \brief  28B4, DMA Channel Configuration Register */
#define DMA_CH69_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00128B4u)

/** Alias (User Manual Name) for DMA_CH69_CHCFGR.
* To use register names with standard convension, please use DMA_CH69_CHCFGR.
*/
#define	DMA_CHCFGR069	(DMA_CH69_CHCFGR)

/** \brief  28BC, DMARAM Channel Control and Status Register */
#define DMA_CH69_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00128BCu)

/** Alias (User Manual Name) for DMA_CH69_CHCSR.
* To use register names with standard convension, please use DMA_CH69_CHCSR.
*/
#define	DMA_CHCSR069	(DMA_CH69_CHCSR)

/** \brief  28AC, DMA Channel Destination Address Register x */
#define DMA_CH69_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00128ACu)

/** Alias (User Manual Name) for DMA_CH69_DADR.
* To use register names with standard convension, please use DMA_CH69_DADR.
*/
#define	DMA_DADR069	(DMA_CH69_DADR)

/** \brief  28A0, DMA Channel Read Data CRC Register */
#define DMA_CH69_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00128A0u)

/** Alias (User Manual Name) for DMA_CH69_RDCRCR.
* To use register names with standard convension, please use DMA_CH69_RDCRCR.
*/
#define	DMA_RDCRCR069	(DMA_CH69_RDCRCR)

/** \brief  28A8, DMA Channel Source Address Register */
#define DMA_CH69_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00128A8u)

/** Alias (User Manual Name) for DMA_CH69_SADR.
* To use register names with standard convension, please use DMA_CH69_SADR.
*/
#define	DMA_SADR069	(DMA_CH69_SADR)

/** \brief  28A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH69_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00128A4u)

/** Alias (User Manual Name) for DMA_CH69_SDCRCR.
* To use register names with standard convension, please use DMA_CH69_SDCRCR.
*/
#define	DMA_SDCRCR069	(DMA_CH69_SDCRCR)

/** \brief  28B8, DMA Channel Shadow Address Register */
#define DMA_CH69_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00128B8u)

/** Alias (User Manual Name) for DMA_CH69_SHADR.
* To use register names with standard convension, please use DMA_CH69_SHADR.
*/
#define	DMA_SHADR069	(DMA_CH69_SHADR)

/** \brief  20D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH6_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00120D0u)

/** Alias (User Manual Name) for DMA_CH6_ADICR.
* To use register names with standard convension, please use DMA_CH6_ADICR.
*/
#define	DMA_ADICR006	(DMA_CH6_ADICR)

/** \brief  20D4, DMA Channel Configuration Register */
#define DMA_CH6_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00120D4u)

/** Alias (User Manual Name) for DMA_CH6_CHCFGR.
* To use register names with standard convension, please use DMA_CH6_CHCFGR.
*/
#define	DMA_CHCFGR006	(DMA_CH6_CHCFGR)

/** \brief  20DC, DMARAM Channel Control and Status Register */
#define DMA_CH6_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00120DCu)

/** Alias (User Manual Name) for DMA_CH6_CHCSR.
* To use register names with standard convension, please use DMA_CH6_CHCSR.
*/
#define	DMA_CHCSR006	(DMA_CH6_CHCSR)

/** \brief  20CC, DMA Channel Destination Address Register x */
#define DMA_CH6_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00120CCu)

/** Alias (User Manual Name) for DMA_CH6_DADR.
* To use register names with standard convension, please use DMA_CH6_DADR.
*/
#define	DMA_DADR006	(DMA_CH6_DADR)

/** \brief  20C0, DMA Channel Read Data CRC Register */
#define DMA_CH6_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00120C0u)

/** Alias (User Manual Name) for DMA_CH6_RDCRCR.
* To use register names with standard convension, please use DMA_CH6_RDCRCR.
*/
#define	DMA_RDCRCR006	(DMA_CH6_RDCRCR)

/** \brief  20C8, DMA Channel Source Address Register */
#define DMA_CH6_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00120C8u)

/** Alias (User Manual Name) for DMA_CH6_SADR.
* To use register names with standard convension, please use DMA_CH6_SADR.
*/
#define	DMA_SADR006	(DMA_CH6_SADR)

/** \brief  20C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH6_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00120C4u)

/** Alias (User Manual Name) for DMA_CH6_SDCRCR.
* To use register names with standard convension, please use DMA_CH6_SDCRCR.
*/
#define	DMA_SDCRCR006	(DMA_CH6_SDCRCR)

/** \brief  20D8, DMA Channel Shadow Address Register */
#define DMA_CH6_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00120D8u)

/** Alias (User Manual Name) for DMA_CH6_SHADR.
* To use register names with standard convension, please use DMA_CH6_SHADR.
*/
#define	DMA_SHADR006	(DMA_CH6_SHADR)

/** \brief  28D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH70_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00128D0u)

/** Alias (User Manual Name) for DMA_CH70_ADICR.
* To use register names with standard convension, please use DMA_CH70_ADICR.
*/
#define	DMA_ADICR070	(DMA_CH70_ADICR)

/** \brief  28D4, DMA Channel Configuration Register */
#define DMA_CH70_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00128D4u)

/** Alias (User Manual Name) for DMA_CH70_CHCFGR.
* To use register names with standard convension, please use DMA_CH70_CHCFGR.
*/
#define	DMA_CHCFGR070	(DMA_CH70_CHCFGR)

/** \brief  28DC, DMARAM Channel Control and Status Register */
#define DMA_CH70_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00128DCu)

/** Alias (User Manual Name) for DMA_CH70_CHCSR.
* To use register names with standard convension, please use DMA_CH70_CHCSR.
*/
#define	DMA_CHCSR070	(DMA_CH70_CHCSR)

/** \brief  28CC, DMA Channel Destination Address Register x */
#define DMA_CH70_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00128CCu)

/** Alias (User Manual Name) for DMA_CH70_DADR.
* To use register names with standard convension, please use DMA_CH70_DADR.
*/
#define	DMA_DADR070	(DMA_CH70_DADR)

/** \brief  28C0, DMA Channel Read Data CRC Register */
#define DMA_CH70_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00128C0u)

/** Alias (User Manual Name) for DMA_CH70_RDCRCR.
* To use register names with standard convension, please use DMA_CH70_RDCRCR.
*/
#define	DMA_RDCRCR070	(DMA_CH70_RDCRCR)

/** \brief  28C8, DMA Channel Source Address Register */
#define DMA_CH70_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00128C8u)

/** Alias (User Manual Name) for DMA_CH70_SADR.
* To use register names with standard convension, please use DMA_CH70_SADR.
*/
#define	DMA_SADR070	(DMA_CH70_SADR)

/** \brief  28C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH70_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00128C4u)

/** Alias (User Manual Name) for DMA_CH70_SDCRCR.
* To use register names with standard convension, please use DMA_CH70_SDCRCR.
*/
#define	DMA_SDCRCR070	(DMA_CH70_SDCRCR)

/** \brief  28D8, DMA Channel Shadow Address Register */
#define DMA_CH70_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00128D8u)

/** Alias (User Manual Name) for DMA_CH70_SHADR.
* To use register names with standard convension, please use DMA_CH70_SHADR.
*/
#define	DMA_SHADR070	(DMA_CH70_SHADR)

/** \brief  28F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH71_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00128F0u)

/** Alias (User Manual Name) for DMA_CH71_ADICR.
* To use register names with standard convension, please use DMA_CH71_ADICR.
*/
#define	DMA_ADICR071	(DMA_CH71_ADICR)

/** \brief  28F4, DMA Channel Configuration Register */
#define DMA_CH71_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00128F4u)

/** Alias (User Manual Name) for DMA_CH71_CHCFGR.
* To use register names with standard convension, please use DMA_CH71_CHCFGR.
*/
#define	DMA_CHCFGR071	(DMA_CH71_CHCFGR)

/** \brief  28FC, DMARAM Channel Control and Status Register */
#define DMA_CH71_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00128FCu)

/** Alias (User Manual Name) for DMA_CH71_CHCSR.
* To use register names with standard convension, please use DMA_CH71_CHCSR.
*/
#define	DMA_CHCSR071	(DMA_CH71_CHCSR)

/** \brief  28EC, DMA Channel Destination Address Register x */
#define DMA_CH71_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00128ECu)

/** Alias (User Manual Name) for DMA_CH71_DADR.
* To use register names with standard convension, please use DMA_CH71_DADR.
*/
#define	DMA_DADR071	(DMA_CH71_DADR)

/** \brief  28E0, DMA Channel Read Data CRC Register */
#define DMA_CH71_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00128E0u)

/** Alias (User Manual Name) for DMA_CH71_RDCRCR.
* To use register names with standard convension, please use DMA_CH71_RDCRCR.
*/
#define	DMA_RDCRCR071	(DMA_CH71_RDCRCR)

/** \brief  28E8, DMA Channel Source Address Register */
#define DMA_CH71_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00128E8u)

/** Alias (User Manual Name) for DMA_CH71_SADR.
* To use register names with standard convension, please use DMA_CH71_SADR.
*/
#define	DMA_SADR071	(DMA_CH71_SADR)

/** \brief  28E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH71_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00128E4u)

/** Alias (User Manual Name) for DMA_CH71_SDCRCR.
* To use register names with standard convension, please use DMA_CH71_SDCRCR.
*/
#define	DMA_SDCRCR071	(DMA_CH71_SDCRCR)

/** \brief  28F8, DMA Channel Shadow Address Register */
#define DMA_CH71_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00128F8u)

/** Alias (User Manual Name) for DMA_CH71_SHADR.
* To use register names with standard convension, please use DMA_CH71_SHADR.
*/
#define	DMA_SHADR071	(DMA_CH71_SHADR)

/** \brief  2910, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH72_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012910u)

/** Alias (User Manual Name) for DMA_CH72_ADICR.
* To use register names with standard convension, please use DMA_CH72_ADICR.
*/
#define	DMA_ADICR072	(DMA_CH72_ADICR)

/** \brief  2914, DMA Channel Configuration Register */
#define DMA_CH72_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012914u)

/** Alias (User Manual Name) for DMA_CH72_CHCFGR.
* To use register names with standard convension, please use DMA_CH72_CHCFGR.
*/
#define	DMA_CHCFGR072	(DMA_CH72_CHCFGR)

/** \brief  291C, DMARAM Channel Control and Status Register */
#define DMA_CH72_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001291Cu)

/** Alias (User Manual Name) for DMA_CH72_CHCSR.
* To use register names with standard convension, please use DMA_CH72_CHCSR.
*/
#define	DMA_CHCSR072	(DMA_CH72_CHCSR)

/** \brief  290C, DMA Channel Destination Address Register x */
#define DMA_CH72_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001290Cu)

/** Alias (User Manual Name) for DMA_CH72_DADR.
* To use register names with standard convension, please use DMA_CH72_DADR.
*/
#define	DMA_DADR072	(DMA_CH72_DADR)

/** \brief  2900, DMA Channel Read Data CRC Register */
#define DMA_CH72_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012900u)

/** Alias (User Manual Name) for DMA_CH72_RDCRCR.
* To use register names with standard convension, please use DMA_CH72_RDCRCR.
*/
#define	DMA_RDCRCR072	(DMA_CH72_RDCRCR)

/** \brief  2908, DMA Channel Source Address Register */
#define DMA_CH72_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012908u)

/** Alias (User Manual Name) for DMA_CH72_SADR.
* To use register names with standard convension, please use DMA_CH72_SADR.
*/
#define	DMA_SADR072	(DMA_CH72_SADR)

/** \brief  2904, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH72_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012904u)

/** Alias (User Manual Name) for DMA_CH72_SDCRCR.
* To use register names with standard convension, please use DMA_CH72_SDCRCR.
*/
#define	DMA_SDCRCR072	(DMA_CH72_SDCRCR)

/** \brief  2918, DMA Channel Shadow Address Register */
#define DMA_CH72_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012918u)

/** Alias (User Manual Name) for DMA_CH72_SHADR.
* To use register names with standard convension, please use DMA_CH72_SHADR.
*/
#define	DMA_SHADR072	(DMA_CH72_SHADR)

/** \brief  2930, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH73_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012930u)

/** Alias (User Manual Name) for DMA_CH73_ADICR.
* To use register names with standard convension, please use DMA_CH73_ADICR.
*/
#define	DMA_ADICR073	(DMA_CH73_ADICR)

/** \brief  2934, DMA Channel Configuration Register */
#define DMA_CH73_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012934u)

/** Alias (User Manual Name) for DMA_CH73_CHCFGR.
* To use register names with standard convension, please use DMA_CH73_CHCFGR.
*/
#define	DMA_CHCFGR073	(DMA_CH73_CHCFGR)

/** \brief  293C, DMARAM Channel Control and Status Register */
#define DMA_CH73_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001293Cu)

/** Alias (User Manual Name) for DMA_CH73_CHCSR.
* To use register names with standard convension, please use DMA_CH73_CHCSR.
*/
#define	DMA_CHCSR073	(DMA_CH73_CHCSR)

/** \brief  292C, DMA Channel Destination Address Register x */
#define DMA_CH73_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001292Cu)

/** Alias (User Manual Name) for DMA_CH73_DADR.
* To use register names with standard convension, please use DMA_CH73_DADR.
*/
#define	DMA_DADR073	(DMA_CH73_DADR)

/** \brief  2920, DMA Channel Read Data CRC Register */
#define DMA_CH73_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012920u)

/** Alias (User Manual Name) for DMA_CH73_RDCRCR.
* To use register names with standard convension, please use DMA_CH73_RDCRCR.
*/
#define	DMA_RDCRCR073	(DMA_CH73_RDCRCR)

/** \brief  2928, DMA Channel Source Address Register */
#define DMA_CH73_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012928u)

/** Alias (User Manual Name) for DMA_CH73_SADR.
* To use register names with standard convension, please use DMA_CH73_SADR.
*/
#define	DMA_SADR073	(DMA_CH73_SADR)

/** \brief  2924, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH73_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012924u)

/** Alias (User Manual Name) for DMA_CH73_SDCRCR.
* To use register names with standard convension, please use DMA_CH73_SDCRCR.
*/
#define	DMA_SDCRCR073	(DMA_CH73_SDCRCR)

/** \brief  2938, DMA Channel Shadow Address Register */
#define DMA_CH73_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012938u)

/** Alias (User Manual Name) for DMA_CH73_SHADR.
* To use register names with standard convension, please use DMA_CH73_SHADR.
*/
#define	DMA_SHADR073	(DMA_CH73_SHADR)

/** \brief  2950, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH74_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012950u)

/** Alias (User Manual Name) for DMA_CH74_ADICR.
* To use register names with standard convension, please use DMA_CH74_ADICR.
*/
#define	DMA_ADICR074	(DMA_CH74_ADICR)

/** \brief  2954, DMA Channel Configuration Register */
#define DMA_CH74_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012954u)

/** Alias (User Manual Name) for DMA_CH74_CHCFGR.
* To use register names with standard convension, please use DMA_CH74_CHCFGR.
*/
#define	DMA_CHCFGR074	(DMA_CH74_CHCFGR)

/** \brief  295C, DMARAM Channel Control and Status Register */
#define DMA_CH74_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001295Cu)

/** Alias (User Manual Name) for DMA_CH74_CHCSR.
* To use register names with standard convension, please use DMA_CH74_CHCSR.
*/
#define	DMA_CHCSR074	(DMA_CH74_CHCSR)

/** \brief  294C, DMA Channel Destination Address Register x */
#define DMA_CH74_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001294Cu)

/** Alias (User Manual Name) for DMA_CH74_DADR.
* To use register names with standard convension, please use DMA_CH74_DADR.
*/
#define	DMA_DADR074	(DMA_CH74_DADR)

/** \brief  2940, DMA Channel Read Data CRC Register */
#define DMA_CH74_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012940u)

/** Alias (User Manual Name) for DMA_CH74_RDCRCR.
* To use register names with standard convension, please use DMA_CH74_RDCRCR.
*/
#define	DMA_RDCRCR074	(DMA_CH74_RDCRCR)

/** \brief  2948, DMA Channel Source Address Register */
#define DMA_CH74_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012948u)

/** Alias (User Manual Name) for DMA_CH74_SADR.
* To use register names with standard convension, please use DMA_CH74_SADR.
*/
#define	DMA_SADR074	(DMA_CH74_SADR)

/** \brief  2944, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH74_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012944u)

/** Alias (User Manual Name) for DMA_CH74_SDCRCR.
* To use register names with standard convension, please use DMA_CH74_SDCRCR.
*/
#define	DMA_SDCRCR074	(DMA_CH74_SDCRCR)

/** \brief  2958, DMA Channel Shadow Address Register */
#define DMA_CH74_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012958u)

/** Alias (User Manual Name) for DMA_CH74_SHADR.
* To use register names with standard convension, please use DMA_CH74_SHADR.
*/
#define	DMA_SHADR074	(DMA_CH74_SHADR)

/** \brief  2970, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH75_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012970u)

/** Alias (User Manual Name) for DMA_CH75_ADICR.
* To use register names with standard convension, please use DMA_CH75_ADICR.
*/
#define	DMA_ADICR075	(DMA_CH75_ADICR)

/** \brief  2974, DMA Channel Configuration Register */
#define DMA_CH75_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012974u)

/** Alias (User Manual Name) for DMA_CH75_CHCFGR.
* To use register names with standard convension, please use DMA_CH75_CHCFGR.
*/
#define	DMA_CHCFGR075	(DMA_CH75_CHCFGR)

/** \brief  297C, DMARAM Channel Control and Status Register */
#define DMA_CH75_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001297Cu)

/** Alias (User Manual Name) for DMA_CH75_CHCSR.
* To use register names with standard convension, please use DMA_CH75_CHCSR.
*/
#define	DMA_CHCSR075	(DMA_CH75_CHCSR)

/** \brief  296C, DMA Channel Destination Address Register x */
#define DMA_CH75_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001296Cu)

/** Alias (User Manual Name) for DMA_CH75_DADR.
* To use register names with standard convension, please use DMA_CH75_DADR.
*/
#define	DMA_DADR075	(DMA_CH75_DADR)

/** \brief  2960, DMA Channel Read Data CRC Register */
#define DMA_CH75_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012960u)

/** Alias (User Manual Name) for DMA_CH75_RDCRCR.
* To use register names with standard convension, please use DMA_CH75_RDCRCR.
*/
#define	DMA_RDCRCR075	(DMA_CH75_RDCRCR)

/** \brief  2968, DMA Channel Source Address Register */
#define DMA_CH75_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012968u)

/** Alias (User Manual Name) for DMA_CH75_SADR.
* To use register names with standard convension, please use DMA_CH75_SADR.
*/
#define	DMA_SADR075	(DMA_CH75_SADR)

/** \brief  2964, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH75_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012964u)

/** Alias (User Manual Name) for DMA_CH75_SDCRCR.
* To use register names with standard convension, please use DMA_CH75_SDCRCR.
*/
#define	DMA_SDCRCR075	(DMA_CH75_SDCRCR)

/** \brief  2978, DMA Channel Shadow Address Register */
#define DMA_CH75_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012978u)

/** Alias (User Manual Name) for DMA_CH75_SHADR.
* To use register names with standard convension, please use DMA_CH75_SHADR.
*/
#define	DMA_SHADR075	(DMA_CH75_SHADR)

/** \brief  2990, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH76_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012990u)

/** Alias (User Manual Name) for DMA_CH76_ADICR.
* To use register names with standard convension, please use DMA_CH76_ADICR.
*/
#define	DMA_ADICR076	(DMA_CH76_ADICR)

/** \brief  2994, DMA Channel Configuration Register */
#define DMA_CH76_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012994u)

/** Alias (User Manual Name) for DMA_CH76_CHCFGR.
* To use register names with standard convension, please use DMA_CH76_CHCFGR.
*/
#define	DMA_CHCFGR076	(DMA_CH76_CHCFGR)

/** \brief  299C, DMARAM Channel Control and Status Register */
#define DMA_CH76_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001299Cu)

/** Alias (User Manual Name) for DMA_CH76_CHCSR.
* To use register names with standard convension, please use DMA_CH76_CHCSR.
*/
#define	DMA_CHCSR076	(DMA_CH76_CHCSR)

/** \brief  298C, DMA Channel Destination Address Register x */
#define DMA_CH76_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001298Cu)

/** Alias (User Manual Name) for DMA_CH76_DADR.
* To use register names with standard convension, please use DMA_CH76_DADR.
*/
#define	DMA_DADR076	(DMA_CH76_DADR)

/** \brief  2980, DMA Channel Read Data CRC Register */
#define DMA_CH76_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012980u)

/** Alias (User Manual Name) for DMA_CH76_RDCRCR.
* To use register names with standard convension, please use DMA_CH76_RDCRCR.
*/
#define	DMA_RDCRCR076	(DMA_CH76_RDCRCR)

/** \brief  2988, DMA Channel Source Address Register */
#define DMA_CH76_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012988u)

/** Alias (User Manual Name) for DMA_CH76_SADR.
* To use register names with standard convension, please use DMA_CH76_SADR.
*/
#define	DMA_SADR076	(DMA_CH76_SADR)

/** \brief  2984, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH76_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012984u)

/** Alias (User Manual Name) for DMA_CH76_SDCRCR.
* To use register names with standard convension, please use DMA_CH76_SDCRCR.
*/
#define	DMA_SDCRCR076	(DMA_CH76_SDCRCR)

/** \brief  2998, DMA Channel Shadow Address Register */
#define DMA_CH76_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012998u)

/** Alias (User Manual Name) for DMA_CH76_SHADR.
* To use register names with standard convension, please use DMA_CH76_SHADR.
*/
#define	DMA_SHADR076	(DMA_CH76_SHADR)

/** \brief  29B0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH77_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00129B0u)

/** Alias (User Manual Name) for DMA_CH77_ADICR.
* To use register names with standard convension, please use DMA_CH77_ADICR.
*/
#define	DMA_ADICR077	(DMA_CH77_ADICR)

/** \brief  29B4, DMA Channel Configuration Register */
#define DMA_CH77_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00129B4u)

/** Alias (User Manual Name) for DMA_CH77_CHCFGR.
* To use register names with standard convension, please use DMA_CH77_CHCFGR.
*/
#define	DMA_CHCFGR077	(DMA_CH77_CHCFGR)

/** \brief  29BC, DMARAM Channel Control and Status Register */
#define DMA_CH77_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00129BCu)

/** Alias (User Manual Name) for DMA_CH77_CHCSR.
* To use register names with standard convension, please use DMA_CH77_CHCSR.
*/
#define	DMA_CHCSR077	(DMA_CH77_CHCSR)

/** \brief  29AC, DMA Channel Destination Address Register x */
#define DMA_CH77_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00129ACu)

/** Alias (User Manual Name) for DMA_CH77_DADR.
* To use register names with standard convension, please use DMA_CH77_DADR.
*/
#define	DMA_DADR077	(DMA_CH77_DADR)

/** \brief  29A0, DMA Channel Read Data CRC Register */
#define DMA_CH77_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00129A0u)

/** Alias (User Manual Name) for DMA_CH77_RDCRCR.
* To use register names with standard convension, please use DMA_CH77_RDCRCR.
*/
#define	DMA_RDCRCR077	(DMA_CH77_RDCRCR)

/** \brief  29A8, DMA Channel Source Address Register */
#define DMA_CH77_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00129A8u)

/** Alias (User Manual Name) for DMA_CH77_SADR.
* To use register names with standard convension, please use DMA_CH77_SADR.
*/
#define	DMA_SADR077	(DMA_CH77_SADR)

/** \brief  29A4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH77_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00129A4u)

/** Alias (User Manual Name) for DMA_CH77_SDCRCR.
* To use register names with standard convension, please use DMA_CH77_SDCRCR.
*/
#define	DMA_SDCRCR077	(DMA_CH77_SDCRCR)

/** \brief  29B8, DMA Channel Shadow Address Register */
#define DMA_CH77_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00129B8u)

/** Alias (User Manual Name) for DMA_CH77_SHADR.
* To use register names with standard convension, please use DMA_CH77_SHADR.
*/
#define	DMA_SHADR077	(DMA_CH77_SHADR)

/** \brief  29D0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH78_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00129D0u)

/** Alias (User Manual Name) for DMA_CH78_ADICR.
* To use register names with standard convension, please use DMA_CH78_ADICR.
*/
#define	DMA_ADICR078	(DMA_CH78_ADICR)

/** \brief  29D4, DMA Channel Configuration Register */
#define DMA_CH78_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00129D4u)

/** Alias (User Manual Name) for DMA_CH78_CHCFGR.
* To use register names with standard convension, please use DMA_CH78_CHCFGR.
*/
#define	DMA_CHCFGR078	(DMA_CH78_CHCFGR)

/** \brief  29DC, DMARAM Channel Control and Status Register */
#define DMA_CH78_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00129DCu)

/** Alias (User Manual Name) for DMA_CH78_CHCSR.
* To use register names with standard convension, please use DMA_CH78_CHCSR.
*/
#define	DMA_CHCSR078	(DMA_CH78_CHCSR)

/** \brief  29CC, DMA Channel Destination Address Register x */
#define DMA_CH78_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00129CCu)

/** Alias (User Manual Name) for DMA_CH78_DADR.
* To use register names with standard convension, please use DMA_CH78_DADR.
*/
#define	DMA_DADR078	(DMA_CH78_DADR)

/** \brief  29C0, DMA Channel Read Data CRC Register */
#define DMA_CH78_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00129C0u)

/** Alias (User Manual Name) for DMA_CH78_RDCRCR.
* To use register names with standard convension, please use DMA_CH78_RDCRCR.
*/
#define	DMA_RDCRCR078	(DMA_CH78_RDCRCR)

/** \brief  29C8, DMA Channel Source Address Register */
#define DMA_CH78_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00129C8u)

/** Alias (User Manual Name) for DMA_CH78_SADR.
* To use register names with standard convension, please use DMA_CH78_SADR.
*/
#define	DMA_SADR078	(DMA_CH78_SADR)

/** \brief  29C4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH78_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00129C4u)

/** Alias (User Manual Name) for DMA_CH78_SDCRCR.
* To use register names with standard convension, please use DMA_CH78_SDCRCR.
*/
#define	DMA_SDCRCR078	(DMA_CH78_SDCRCR)

/** \brief  29D8, DMA Channel Shadow Address Register */
#define DMA_CH78_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00129D8u)

/** Alias (User Manual Name) for DMA_CH78_SHADR.
* To use register names with standard convension, please use DMA_CH78_SHADR.
*/
#define	DMA_SHADR078	(DMA_CH78_SHADR)

/** \brief  29F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH79_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00129F0u)

/** Alias (User Manual Name) for DMA_CH79_ADICR.
* To use register names with standard convension, please use DMA_CH79_ADICR.
*/
#define	DMA_ADICR079	(DMA_CH79_ADICR)

/** \brief  29F4, DMA Channel Configuration Register */
#define DMA_CH79_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00129F4u)

/** Alias (User Manual Name) for DMA_CH79_CHCFGR.
* To use register names with standard convension, please use DMA_CH79_CHCFGR.
*/
#define	DMA_CHCFGR079	(DMA_CH79_CHCFGR)

/** \brief  29FC, DMARAM Channel Control and Status Register */
#define DMA_CH79_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00129FCu)

/** Alias (User Manual Name) for DMA_CH79_CHCSR.
* To use register names with standard convension, please use DMA_CH79_CHCSR.
*/
#define	DMA_CHCSR079	(DMA_CH79_CHCSR)

/** \brief  29EC, DMA Channel Destination Address Register x */
#define DMA_CH79_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00129ECu)

/** Alias (User Manual Name) for DMA_CH79_DADR.
* To use register names with standard convension, please use DMA_CH79_DADR.
*/
#define	DMA_DADR079	(DMA_CH79_DADR)

/** \brief  29E0, DMA Channel Read Data CRC Register */
#define DMA_CH79_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00129E0u)

/** Alias (User Manual Name) for DMA_CH79_RDCRCR.
* To use register names with standard convension, please use DMA_CH79_RDCRCR.
*/
#define	DMA_RDCRCR079	(DMA_CH79_RDCRCR)

/** \brief  29E8, DMA Channel Source Address Register */
#define DMA_CH79_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00129E8u)

/** Alias (User Manual Name) for DMA_CH79_SADR.
* To use register names with standard convension, please use DMA_CH79_SADR.
*/
#define	DMA_SADR079	(DMA_CH79_SADR)

/** \brief  29E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH79_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00129E4u)

/** Alias (User Manual Name) for DMA_CH79_SDCRCR.
* To use register names with standard convension, please use DMA_CH79_SDCRCR.
*/
#define	DMA_SDCRCR079	(DMA_CH79_SDCRCR)

/** \brief  29F8, DMA Channel Shadow Address Register */
#define DMA_CH79_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00129F8u)

/** Alias (User Manual Name) for DMA_CH79_SHADR.
* To use register names with standard convension, please use DMA_CH79_SHADR.
*/
#define	DMA_SHADR079	(DMA_CH79_SHADR)

/** \brief  20F0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH7_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF00120F0u)

/** Alias (User Manual Name) for DMA_CH7_ADICR.
* To use register names with standard convension, please use DMA_CH7_ADICR.
*/
#define	DMA_ADICR007	(DMA_CH7_ADICR)

/** \brief  20F4, DMA Channel Configuration Register */
#define DMA_CH7_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF00120F4u)

/** Alias (User Manual Name) for DMA_CH7_CHCFGR.
* To use register names with standard convension, please use DMA_CH7_CHCFGR.
*/
#define	DMA_CHCFGR007	(DMA_CH7_CHCFGR)

/** \brief  20FC, DMARAM Channel Control and Status Register */
#define DMA_CH7_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF00120FCu)

/** Alias (User Manual Name) for DMA_CH7_CHCSR.
* To use register names with standard convension, please use DMA_CH7_CHCSR.
*/
#define	DMA_CHCSR007	(DMA_CH7_CHCSR)

/** \brief  20EC, DMA Channel Destination Address Register x */
#define DMA_CH7_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF00120ECu)

/** Alias (User Manual Name) for DMA_CH7_DADR.
* To use register names with standard convension, please use DMA_CH7_DADR.
*/
#define	DMA_DADR007	(DMA_CH7_DADR)

/** \brief  20E0, DMA Channel Read Data CRC Register */
#define DMA_CH7_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF00120E0u)

/** Alias (User Manual Name) for DMA_CH7_RDCRCR.
* To use register names with standard convension, please use DMA_CH7_RDCRCR.
*/
#define	DMA_RDCRCR007	(DMA_CH7_RDCRCR)

/** \brief  20E8, DMA Channel Source Address Register */
#define DMA_CH7_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF00120E8u)

/** Alias (User Manual Name) for DMA_CH7_SADR.
* To use register names with standard convension, please use DMA_CH7_SADR.
*/
#define	DMA_SADR007	(DMA_CH7_SADR)

/** \brief  20E4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH7_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF00120E4u)

/** Alias (User Manual Name) for DMA_CH7_SDCRCR.
* To use register names with standard convension, please use DMA_CH7_SDCRCR.
*/
#define	DMA_SDCRCR007	(DMA_CH7_SDCRCR)

/** \brief  20F8, DMA Channel Shadow Address Register */
#define DMA_CH7_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF00120F8u)

/** Alias (User Manual Name) for DMA_CH7_SHADR.
* To use register names with standard convension, please use DMA_CH7_SHADR.
*/
#define	DMA_SHADR007	(DMA_CH7_SHADR)

/** \brief  2A10, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH80_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012A10u)

/** Alias (User Manual Name) for DMA_CH80_ADICR.
* To use register names with standard convension, please use DMA_CH80_ADICR.
*/
#define	DMA_ADICR080	(DMA_CH80_ADICR)

/** \brief  2A14, DMA Channel Configuration Register */
#define DMA_CH80_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012A14u)

/** Alias (User Manual Name) for DMA_CH80_CHCFGR.
* To use register names with standard convension, please use DMA_CH80_CHCFGR.
*/
#define	DMA_CHCFGR080	(DMA_CH80_CHCFGR)

/** \brief  2A1C, DMARAM Channel Control and Status Register */
#define DMA_CH80_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012A1Cu)

/** Alias (User Manual Name) for DMA_CH80_CHCSR.
* To use register names with standard convension, please use DMA_CH80_CHCSR.
*/
#define	DMA_CHCSR080	(DMA_CH80_CHCSR)

/** \brief  2A0C, DMA Channel Destination Address Register x */
#define DMA_CH80_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012A0Cu)

/** Alias (User Manual Name) for DMA_CH80_DADR.
* To use register names with standard convension, please use DMA_CH80_DADR.
*/
#define	DMA_DADR080	(DMA_CH80_DADR)

/** \brief  2A00, DMA Channel Read Data CRC Register */
#define DMA_CH80_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012A00u)

/** Alias (User Manual Name) for DMA_CH80_RDCRCR.
* To use register names with standard convension, please use DMA_CH80_RDCRCR.
*/
#define	DMA_RDCRCR080	(DMA_CH80_RDCRCR)

/** \brief  2A08, DMA Channel Source Address Register */
#define DMA_CH80_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012A08u)

/** Alias (User Manual Name) for DMA_CH80_SADR.
* To use register names with standard convension, please use DMA_CH80_SADR.
*/
#define	DMA_SADR080	(DMA_CH80_SADR)

/** \brief  2A04, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH80_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012A04u)

/** Alias (User Manual Name) for DMA_CH80_SDCRCR.
* To use register names with standard convension, please use DMA_CH80_SDCRCR.
*/
#define	DMA_SDCRCR080	(DMA_CH80_SDCRCR)

/** \brief  2A18, DMA Channel Shadow Address Register */
#define DMA_CH80_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012A18u)

/** Alias (User Manual Name) for DMA_CH80_SHADR.
* To use register names with standard convension, please use DMA_CH80_SHADR.
*/
#define	DMA_SHADR080	(DMA_CH80_SHADR)

/** \brief  2A30, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH81_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012A30u)

/** Alias (User Manual Name) for DMA_CH81_ADICR.
* To use register names with standard convension, please use DMA_CH81_ADICR.
*/
#define	DMA_ADICR081	(DMA_CH81_ADICR)

/** \brief  2A34, DMA Channel Configuration Register */
#define DMA_CH81_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012A34u)

/** Alias (User Manual Name) for DMA_CH81_CHCFGR.
* To use register names with standard convension, please use DMA_CH81_CHCFGR.
*/
#define	DMA_CHCFGR081	(DMA_CH81_CHCFGR)

/** \brief  2A3C, DMARAM Channel Control and Status Register */
#define DMA_CH81_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012A3Cu)

/** Alias (User Manual Name) for DMA_CH81_CHCSR.
* To use register names with standard convension, please use DMA_CH81_CHCSR.
*/
#define	DMA_CHCSR081	(DMA_CH81_CHCSR)

/** \brief  2A2C, DMA Channel Destination Address Register x */
#define DMA_CH81_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012A2Cu)

/** Alias (User Manual Name) for DMA_CH81_DADR.
* To use register names with standard convension, please use DMA_CH81_DADR.
*/
#define	DMA_DADR081	(DMA_CH81_DADR)

/** \brief  2A20, DMA Channel Read Data CRC Register */
#define DMA_CH81_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012A20u)

/** Alias (User Manual Name) for DMA_CH81_RDCRCR.
* To use register names with standard convension, please use DMA_CH81_RDCRCR.
*/
#define	DMA_RDCRCR081	(DMA_CH81_RDCRCR)

/** \brief  2A28, DMA Channel Source Address Register */
#define DMA_CH81_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012A28u)

/** Alias (User Manual Name) for DMA_CH81_SADR.
* To use register names with standard convension, please use DMA_CH81_SADR.
*/
#define	DMA_SADR081	(DMA_CH81_SADR)

/** \brief  2A24, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH81_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012A24u)

/** Alias (User Manual Name) for DMA_CH81_SDCRCR.
* To use register names with standard convension, please use DMA_CH81_SDCRCR.
*/
#define	DMA_SDCRCR081	(DMA_CH81_SDCRCR)

/** \brief  2A38, DMA Channel Shadow Address Register */
#define DMA_CH81_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012A38u)

/** Alias (User Manual Name) for DMA_CH81_SHADR.
* To use register names with standard convension, please use DMA_CH81_SHADR.
*/
#define	DMA_SHADR081	(DMA_CH81_SHADR)

/** \brief  2A50, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH82_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012A50u)

/** Alias (User Manual Name) for DMA_CH82_ADICR.
* To use register names with standard convension, please use DMA_CH82_ADICR.
*/
#define	DMA_ADICR082	(DMA_CH82_ADICR)

/** \brief  2A54, DMA Channel Configuration Register */
#define DMA_CH82_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012A54u)

/** Alias (User Manual Name) for DMA_CH82_CHCFGR.
* To use register names with standard convension, please use DMA_CH82_CHCFGR.
*/
#define	DMA_CHCFGR082	(DMA_CH82_CHCFGR)

/** \brief  2A5C, DMARAM Channel Control and Status Register */
#define DMA_CH82_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012A5Cu)

/** Alias (User Manual Name) for DMA_CH82_CHCSR.
* To use register names with standard convension, please use DMA_CH82_CHCSR.
*/
#define	DMA_CHCSR082	(DMA_CH82_CHCSR)

/** \brief  2A4C, DMA Channel Destination Address Register x */
#define DMA_CH82_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012A4Cu)

/** Alias (User Manual Name) for DMA_CH82_DADR.
* To use register names with standard convension, please use DMA_CH82_DADR.
*/
#define	DMA_DADR082	(DMA_CH82_DADR)

/** \brief  2A40, DMA Channel Read Data CRC Register */
#define DMA_CH82_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012A40u)

/** Alias (User Manual Name) for DMA_CH82_RDCRCR.
* To use register names with standard convension, please use DMA_CH82_RDCRCR.
*/
#define	DMA_RDCRCR082	(DMA_CH82_RDCRCR)

/** \brief  2A48, DMA Channel Source Address Register */
#define DMA_CH82_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012A48u)

/** Alias (User Manual Name) for DMA_CH82_SADR.
* To use register names with standard convension, please use DMA_CH82_SADR.
*/
#define	DMA_SADR082	(DMA_CH82_SADR)

/** \brief  2A44, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH82_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012A44u)

/** Alias (User Manual Name) for DMA_CH82_SDCRCR.
* To use register names with standard convension, please use DMA_CH82_SDCRCR.
*/
#define	DMA_SDCRCR082	(DMA_CH82_SDCRCR)

/** \brief  2A58, DMA Channel Shadow Address Register */
#define DMA_CH82_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012A58u)

/** Alias (User Manual Name) for DMA_CH82_SHADR.
* To use register names with standard convension, please use DMA_CH82_SHADR.
*/
#define	DMA_SHADR082	(DMA_CH82_SHADR)

/** \brief  2A70, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH83_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012A70u)

/** Alias (User Manual Name) for DMA_CH83_ADICR.
* To use register names with standard convension, please use DMA_CH83_ADICR.
*/
#define	DMA_ADICR083	(DMA_CH83_ADICR)

/** \brief  2A74, DMA Channel Configuration Register */
#define DMA_CH83_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012A74u)

/** Alias (User Manual Name) for DMA_CH83_CHCFGR.
* To use register names with standard convension, please use DMA_CH83_CHCFGR.
*/
#define	DMA_CHCFGR083	(DMA_CH83_CHCFGR)

/** \brief  2A7C, DMARAM Channel Control and Status Register */
#define DMA_CH83_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012A7Cu)

/** Alias (User Manual Name) for DMA_CH83_CHCSR.
* To use register names with standard convension, please use DMA_CH83_CHCSR.
*/
#define	DMA_CHCSR083	(DMA_CH83_CHCSR)

/** \brief  2A6C, DMA Channel Destination Address Register x */
#define DMA_CH83_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012A6Cu)

/** Alias (User Manual Name) for DMA_CH83_DADR.
* To use register names with standard convension, please use DMA_CH83_DADR.
*/
#define	DMA_DADR083	(DMA_CH83_DADR)

/** \brief  2A60, DMA Channel Read Data CRC Register */
#define DMA_CH83_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012A60u)

/** Alias (User Manual Name) for DMA_CH83_RDCRCR.
* To use register names with standard convension, please use DMA_CH83_RDCRCR.
*/
#define	DMA_RDCRCR083	(DMA_CH83_RDCRCR)

/** \brief  2A68, DMA Channel Source Address Register */
#define DMA_CH83_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012A68u)

/** Alias (User Manual Name) for DMA_CH83_SADR.
* To use register names with standard convension, please use DMA_CH83_SADR.
*/
#define	DMA_SADR083	(DMA_CH83_SADR)

/** \brief  2A64, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH83_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012A64u)

/** Alias (User Manual Name) for DMA_CH83_SDCRCR.
* To use register names with standard convension, please use DMA_CH83_SDCRCR.
*/
#define	DMA_SDCRCR083	(DMA_CH83_SDCRCR)

/** \brief  2A78, DMA Channel Shadow Address Register */
#define DMA_CH83_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012A78u)

/** Alias (User Manual Name) for DMA_CH83_SHADR.
* To use register names with standard convension, please use DMA_CH83_SHADR.
*/
#define	DMA_SHADR083	(DMA_CH83_SHADR)

/** \brief  2A90, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH84_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012A90u)

/** Alias (User Manual Name) for DMA_CH84_ADICR.
* To use register names with standard convension, please use DMA_CH84_ADICR.
*/
#define	DMA_ADICR084	(DMA_CH84_ADICR)

/** \brief  2A94, DMA Channel Configuration Register */
#define DMA_CH84_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012A94u)

/** Alias (User Manual Name) for DMA_CH84_CHCFGR.
* To use register names with standard convension, please use DMA_CH84_CHCFGR.
*/
#define	DMA_CHCFGR084	(DMA_CH84_CHCFGR)

/** \brief  2A9C, DMARAM Channel Control and Status Register */
#define DMA_CH84_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012A9Cu)

/** Alias (User Manual Name) for DMA_CH84_CHCSR.
* To use register names with standard convension, please use DMA_CH84_CHCSR.
*/
#define	DMA_CHCSR084	(DMA_CH84_CHCSR)

/** \brief  2A8C, DMA Channel Destination Address Register x */
#define DMA_CH84_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012A8Cu)

/** Alias (User Manual Name) for DMA_CH84_DADR.
* To use register names with standard convension, please use DMA_CH84_DADR.
*/
#define	DMA_DADR084	(DMA_CH84_DADR)

/** \brief  2A80, DMA Channel Read Data CRC Register */
#define DMA_CH84_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012A80u)

/** Alias (User Manual Name) for DMA_CH84_RDCRCR.
* To use register names with standard convension, please use DMA_CH84_RDCRCR.
*/
#define	DMA_RDCRCR084	(DMA_CH84_RDCRCR)

/** \brief  2A88, DMA Channel Source Address Register */
#define DMA_CH84_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012A88u)

/** Alias (User Manual Name) for DMA_CH84_SADR.
* To use register names with standard convension, please use DMA_CH84_SADR.
*/
#define	DMA_SADR084	(DMA_CH84_SADR)

/** \brief  2A84, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH84_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012A84u)

/** Alias (User Manual Name) for DMA_CH84_SDCRCR.
* To use register names with standard convension, please use DMA_CH84_SDCRCR.
*/
#define	DMA_SDCRCR084	(DMA_CH84_SDCRCR)

/** \brief  2A98, DMA Channel Shadow Address Register */
#define DMA_CH84_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012A98u)

/** Alias (User Manual Name) for DMA_CH84_SHADR.
* To use register names with standard convension, please use DMA_CH84_SHADR.
*/
#define	DMA_SHADR084	(DMA_CH84_SHADR)

/** \brief  2AB0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH85_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012AB0u)

/** Alias (User Manual Name) for DMA_CH85_ADICR.
* To use register names with standard convension, please use DMA_CH85_ADICR.
*/
#define	DMA_ADICR085	(DMA_CH85_ADICR)

/** \brief  2AB4, DMA Channel Configuration Register */
#define DMA_CH85_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012AB4u)

/** Alias (User Manual Name) for DMA_CH85_CHCFGR.
* To use register names with standard convension, please use DMA_CH85_CHCFGR.
*/
#define	DMA_CHCFGR085	(DMA_CH85_CHCFGR)

/** \brief  2ABC, DMARAM Channel Control and Status Register */
#define DMA_CH85_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012ABCu)

/** Alias (User Manual Name) for DMA_CH85_CHCSR.
* To use register names with standard convension, please use DMA_CH85_CHCSR.
*/
#define	DMA_CHCSR085	(DMA_CH85_CHCSR)

/** \brief  2AAC, DMA Channel Destination Address Register x */
#define DMA_CH85_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012AACu)

/** Alias (User Manual Name) for DMA_CH85_DADR.
* To use register names with standard convension, please use DMA_CH85_DADR.
*/
#define	DMA_DADR085	(DMA_CH85_DADR)

/** \brief  2AA0, DMA Channel Read Data CRC Register */
#define DMA_CH85_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012AA0u)

/** Alias (User Manual Name) for DMA_CH85_RDCRCR.
* To use register names with standard convension, please use DMA_CH85_RDCRCR.
*/
#define	DMA_RDCRCR085	(DMA_CH85_RDCRCR)

/** \brief  2AA8, DMA Channel Source Address Register */
#define DMA_CH85_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012AA8u)

/** Alias (User Manual Name) for DMA_CH85_SADR.
* To use register names with standard convension, please use DMA_CH85_SADR.
*/
#define	DMA_SADR085	(DMA_CH85_SADR)

/** \brief  2AA4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH85_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012AA4u)

/** Alias (User Manual Name) for DMA_CH85_SDCRCR.
* To use register names with standard convension, please use DMA_CH85_SDCRCR.
*/
#define	DMA_SDCRCR085	(DMA_CH85_SDCRCR)

/** \brief  2AB8, DMA Channel Shadow Address Register */
#define DMA_CH85_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012AB8u)

/** Alias (User Manual Name) for DMA_CH85_SHADR.
* To use register names with standard convension, please use DMA_CH85_SHADR.
*/
#define	DMA_SHADR085	(DMA_CH85_SHADR)

/** \brief  2AD0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH86_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012AD0u)

/** Alias (User Manual Name) for DMA_CH86_ADICR.
* To use register names with standard convension, please use DMA_CH86_ADICR.
*/
#define	DMA_ADICR086	(DMA_CH86_ADICR)

/** \brief  2AD4, DMA Channel Configuration Register */
#define DMA_CH86_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012AD4u)

/** Alias (User Manual Name) for DMA_CH86_CHCFGR.
* To use register names with standard convension, please use DMA_CH86_CHCFGR.
*/
#define	DMA_CHCFGR086	(DMA_CH86_CHCFGR)

/** \brief  2ADC, DMARAM Channel Control and Status Register */
#define DMA_CH86_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012ADCu)

/** Alias (User Manual Name) for DMA_CH86_CHCSR.
* To use register names with standard convension, please use DMA_CH86_CHCSR.
*/
#define	DMA_CHCSR086	(DMA_CH86_CHCSR)

/** \brief  2ACC, DMA Channel Destination Address Register x */
#define DMA_CH86_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012ACCu)

/** Alias (User Manual Name) for DMA_CH86_DADR.
* To use register names with standard convension, please use DMA_CH86_DADR.
*/
#define	DMA_DADR086	(DMA_CH86_DADR)

/** \brief  2AC0, DMA Channel Read Data CRC Register */
#define DMA_CH86_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012AC0u)

/** Alias (User Manual Name) for DMA_CH86_RDCRCR.
* To use register names with standard convension, please use DMA_CH86_RDCRCR.
*/
#define	DMA_RDCRCR086	(DMA_CH86_RDCRCR)

/** \brief  2AC8, DMA Channel Source Address Register */
#define DMA_CH86_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012AC8u)

/** Alias (User Manual Name) for DMA_CH86_SADR.
* To use register names with standard convension, please use DMA_CH86_SADR.
*/
#define	DMA_SADR086	(DMA_CH86_SADR)

/** \brief  2AC4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH86_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012AC4u)

/** Alias (User Manual Name) for DMA_CH86_SDCRCR.
* To use register names with standard convension, please use DMA_CH86_SDCRCR.
*/
#define	DMA_SDCRCR086	(DMA_CH86_SDCRCR)

/** \brief  2AD8, DMA Channel Shadow Address Register */
#define DMA_CH86_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012AD8u)

/** Alias (User Manual Name) for DMA_CH86_SHADR.
* To use register names with standard convension, please use DMA_CH86_SHADR.
*/
#define	DMA_SHADR086	(DMA_CH86_SHADR)

/** \brief  2AF0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH87_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012AF0u)

/** Alias (User Manual Name) for DMA_CH87_ADICR.
* To use register names with standard convension, please use DMA_CH87_ADICR.
*/
#define	DMA_ADICR087	(DMA_CH87_ADICR)

/** \brief  2AF4, DMA Channel Configuration Register */
#define DMA_CH87_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012AF4u)

/** Alias (User Manual Name) for DMA_CH87_CHCFGR.
* To use register names with standard convension, please use DMA_CH87_CHCFGR.
*/
#define	DMA_CHCFGR087	(DMA_CH87_CHCFGR)

/** \brief  2AFC, DMARAM Channel Control and Status Register */
#define DMA_CH87_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012AFCu)

/** Alias (User Manual Name) for DMA_CH87_CHCSR.
* To use register names with standard convension, please use DMA_CH87_CHCSR.
*/
#define	DMA_CHCSR087	(DMA_CH87_CHCSR)

/** \brief  2AEC, DMA Channel Destination Address Register x */
#define DMA_CH87_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012AECu)

/** Alias (User Manual Name) for DMA_CH87_DADR.
* To use register names with standard convension, please use DMA_CH87_DADR.
*/
#define	DMA_DADR087	(DMA_CH87_DADR)

/** \brief  2AE0, DMA Channel Read Data CRC Register */
#define DMA_CH87_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012AE0u)

/** Alias (User Manual Name) for DMA_CH87_RDCRCR.
* To use register names with standard convension, please use DMA_CH87_RDCRCR.
*/
#define	DMA_RDCRCR087	(DMA_CH87_RDCRCR)

/** \brief  2AE8, DMA Channel Source Address Register */
#define DMA_CH87_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012AE8u)

/** Alias (User Manual Name) for DMA_CH87_SADR.
* To use register names with standard convension, please use DMA_CH87_SADR.
*/
#define	DMA_SADR087	(DMA_CH87_SADR)

/** \brief  2AE4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH87_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012AE4u)

/** Alias (User Manual Name) for DMA_CH87_SDCRCR.
* To use register names with standard convension, please use DMA_CH87_SDCRCR.
*/
#define	DMA_SDCRCR087	(DMA_CH87_SDCRCR)

/** \brief  2AF8, DMA Channel Shadow Address Register */
#define DMA_CH87_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012AF8u)

/** Alias (User Manual Name) for DMA_CH87_SHADR.
* To use register names with standard convension, please use DMA_CH87_SHADR.
*/
#define	DMA_SHADR087	(DMA_CH87_SHADR)

/** \brief  2B10, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH88_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012B10u)

/** Alias (User Manual Name) for DMA_CH88_ADICR.
* To use register names with standard convension, please use DMA_CH88_ADICR.
*/
#define	DMA_ADICR088	(DMA_CH88_ADICR)

/** \brief  2B14, DMA Channel Configuration Register */
#define DMA_CH88_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012B14u)

/** Alias (User Manual Name) for DMA_CH88_CHCFGR.
* To use register names with standard convension, please use DMA_CH88_CHCFGR.
*/
#define	DMA_CHCFGR088	(DMA_CH88_CHCFGR)

/** \brief  2B1C, DMARAM Channel Control and Status Register */
#define DMA_CH88_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012B1Cu)

/** Alias (User Manual Name) for DMA_CH88_CHCSR.
* To use register names with standard convension, please use DMA_CH88_CHCSR.
*/
#define	DMA_CHCSR088	(DMA_CH88_CHCSR)

/** \brief  2B0C, DMA Channel Destination Address Register x */
#define DMA_CH88_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012B0Cu)

/** Alias (User Manual Name) for DMA_CH88_DADR.
* To use register names with standard convension, please use DMA_CH88_DADR.
*/
#define	DMA_DADR088	(DMA_CH88_DADR)

/** \brief  2B00, DMA Channel Read Data CRC Register */
#define DMA_CH88_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012B00u)

/** Alias (User Manual Name) for DMA_CH88_RDCRCR.
* To use register names with standard convension, please use DMA_CH88_RDCRCR.
*/
#define	DMA_RDCRCR088	(DMA_CH88_RDCRCR)

/** \brief  2B08, DMA Channel Source Address Register */
#define DMA_CH88_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012B08u)

/** Alias (User Manual Name) for DMA_CH88_SADR.
* To use register names with standard convension, please use DMA_CH88_SADR.
*/
#define	DMA_SADR088	(DMA_CH88_SADR)

/** \brief  2B04, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH88_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012B04u)

/** Alias (User Manual Name) for DMA_CH88_SDCRCR.
* To use register names with standard convension, please use DMA_CH88_SDCRCR.
*/
#define	DMA_SDCRCR088	(DMA_CH88_SDCRCR)

/** \brief  2B18, DMA Channel Shadow Address Register */
#define DMA_CH88_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012B18u)

/** Alias (User Manual Name) for DMA_CH88_SHADR.
* To use register names with standard convension, please use DMA_CH88_SHADR.
*/
#define	DMA_SHADR088	(DMA_CH88_SHADR)

/** \brief  2B30, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH89_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012B30u)

/** Alias (User Manual Name) for DMA_CH89_ADICR.
* To use register names with standard convension, please use DMA_CH89_ADICR.
*/
#define	DMA_ADICR089	(DMA_CH89_ADICR)

/** \brief  2B34, DMA Channel Configuration Register */
#define DMA_CH89_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012B34u)

/** Alias (User Manual Name) for DMA_CH89_CHCFGR.
* To use register names with standard convension, please use DMA_CH89_CHCFGR.
*/
#define	DMA_CHCFGR089	(DMA_CH89_CHCFGR)

/** \brief  2B3C, DMARAM Channel Control and Status Register */
#define DMA_CH89_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012B3Cu)

/** Alias (User Manual Name) for DMA_CH89_CHCSR.
* To use register names with standard convension, please use DMA_CH89_CHCSR.
*/
#define	DMA_CHCSR089	(DMA_CH89_CHCSR)

/** \brief  2B2C, DMA Channel Destination Address Register x */
#define DMA_CH89_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012B2Cu)

/** Alias (User Manual Name) for DMA_CH89_DADR.
* To use register names with standard convension, please use DMA_CH89_DADR.
*/
#define	DMA_DADR089	(DMA_CH89_DADR)

/** \brief  2B20, DMA Channel Read Data CRC Register */
#define DMA_CH89_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012B20u)

/** Alias (User Manual Name) for DMA_CH89_RDCRCR.
* To use register names with standard convension, please use DMA_CH89_RDCRCR.
*/
#define	DMA_RDCRCR089	(DMA_CH89_RDCRCR)

/** \brief  2B28, DMA Channel Source Address Register */
#define DMA_CH89_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012B28u)

/** Alias (User Manual Name) for DMA_CH89_SADR.
* To use register names with standard convension, please use DMA_CH89_SADR.
*/
#define	DMA_SADR089	(DMA_CH89_SADR)

/** \brief  2B24, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH89_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012B24u)

/** Alias (User Manual Name) for DMA_CH89_SDCRCR.
* To use register names with standard convension, please use DMA_CH89_SDCRCR.
*/
#define	DMA_SDCRCR089	(DMA_CH89_SDCRCR)

/** \brief  2B38, DMA Channel Shadow Address Register */
#define DMA_CH89_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012B38u)

/** Alias (User Manual Name) for DMA_CH89_SHADR.
* To use register names with standard convension, please use DMA_CH89_SHADR.
*/
#define	DMA_SHADR089	(DMA_CH89_SHADR)

/** \brief  2110, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH8_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012110u)

/** Alias (User Manual Name) for DMA_CH8_ADICR.
* To use register names with standard convension, please use DMA_CH8_ADICR.
*/
#define	DMA_ADICR008	(DMA_CH8_ADICR)

/** \brief  2114, DMA Channel Configuration Register */
#define DMA_CH8_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012114u)

/** Alias (User Manual Name) for DMA_CH8_CHCFGR.
* To use register names with standard convension, please use DMA_CH8_CHCFGR.
*/
#define	DMA_CHCFGR008	(DMA_CH8_CHCFGR)

/** \brief  211C, DMARAM Channel Control and Status Register */
#define DMA_CH8_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001211Cu)

/** Alias (User Manual Name) for DMA_CH8_CHCSR.
* To use register names with standard convension, please use DMA_CH8_CHCSR.
*/
#define	DMA_CHCSR008	(DMA_CH8_CHCSR)

/** \brief  210C, DMA Channel Destination Address Register x */
#define DMA_CH8_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001210Cu)

/** Alias (User Manual Name) for DMA_CH8_DADR.
* To use register names with standard convension, please use DMA_CH8_DADR.
*/
#define	DMA_DADR008	(DMA_CH8_DADR)

/** \brief  2100, DMA Channel Read Data CRC Register */
#define DMA_CH8_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012100u)

/** Alias (User Manual Name) for DMA_CH8_RDCRCR.
* To use register names with standard convension, please use DMA_CH8_RDCRCR.
*/
#define	DMA_RDCRCR008	(DMA_CH8_RDCRCR)

/** \brief  2108, DMA Channel Source Address Register */
#define DMA_CH8_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012108u)

/** Alias (User Manual Name) for DMA_CH8_SADR.
* To use register names with standard convension, please use DMA_CH8_SADR.
*/
#define	DMA_SADR008	(DMA_CH8_SADR)

/** \brief  2104, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH8_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012104u)

/** Alias (User Manual Name) for DMA_CH8_SDCRCR.
* To use register names with standard convension, please use DMA_CH8_SDCRCR.
*/
#define	DMA_SDCRCR008	(DMA_CH8_SDCRCR)

/** \brief  2118, DMA Channel Shadow Address Register */
#define DMA_CH8_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012118u)

/** Alias (User Manual Name) for DMA_CH8_SHADR.
* To use register names with standard convension, please use DMA_CH8_SHADR.
*/
#define	DMA_SHADR008	(DMA_CH8_SHADR)

/** \brief  2B50, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH90_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012B50u)

/** Alias (User Manual Name) for DMA_CH90_ADICR.
* To use register names with standard convension, please use DMA_CH90_ADICR.
*/
#define	DMA_ADICR090	(DMA_CH90_ADICR)

/** \brief  2B54, DMA Channel Configuration Register */
#define DMA_CH90_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012B54u)

/** Alias (User Manual Name) for DMA_CH90_CHCFGR.
* To use register names with standard convension, please use DMA_CH90_CHCFGR.
*/
#define	DMA_CHCFGR090	(DMA_CH90_CHCFGR)

/** \brief  2B5C, DMARAM Channel Control and Status Register */
#define DMA_CH90_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012B5Cu)

/** Alias (User Manual Name) for DMA_CH90_CHCSR.
* To use register names with standard convension, please use DMA_CH90_CHCSR.
*/
#define	DMA_CHCSR090	(DMA_CH90_CHCSR)

/** \brief  2B4C, DMA Channel Destination Address Register x */
#define DMA_CH90_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012B4Cu)

/** Alias (User Manual Name) for DMA_CH90_DADR.
* To use register names with standard convension, please use DMA_CH90_DADR.
*/
#define	DMA_DADR090	(DMA_CH90_DADR)

/** \brief  2B40, DMA Channel Read Data CRC Register */
#define DMA_CH90_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012B40u)

/** Alias (User Manual Name) for DMA_CH90_RDCRCR.
* To use register names with standard convension, please use DMA_CH90_RDCRCR.
*/
#define	DMA_RDCRCR090	(DMA_CH90_RDCRCR)

/** \brief  2B48, DMA Channel Source Address Register */
#define DMA_CH90_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012B48u)

/** Alias (User Manual Name) for DMA_CH90_SADR.
* To use register names with standard convension, please use DMA_CH90_SADR.
*/
#define	DMA_SADR090	(DMA_CH90_SADR)

/** \brief  2B44, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH90_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012B44u)

/** Alias (User Manual Name) for DMA_CH90_SDCRCR.
* To use register names with standard convension, please use DMA_CH90_SDCRCR.
*/
#define	DMA_SDCRCR090	(DMA_CH90_SDCRCR)

/** \brief  2B58, DMA Channel Shadow Address Register */
#define DMA_CH90_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012B58u)

/** Alias (User Manual Name) for DMA_CH90_SHADR.
* To use register names with standard convension, please use DMA_CH90_SHADR.
*/
#define	DMA_SHADR090	(DMA_CH90_SHADR)

/** \brief  2B70, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH91_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012B70u)

/** Alias (User Manual Name) for DMA_CH91_ADICR.
* To use register names with standard convension, please use DMA_CH91_ADICR.
*/
#define	DMA_ADICR091	(DMA_CH91_ADICR)

/** \brief  2B74, DMA Channel Configuration Register */
#define DMA_CH91_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012B74u)

/** Alias (User Manual Name) for DMA_CH91_CHCFGR.
* To use register names with standard convension, please use DMA_CH91_CHCFGR.
*/
#define	DMA_CHCFGR091	(DMA_CH91_CHCFGR)

/** \brief  2B7C, DMARAM Channel Control and Status Register */
#define DMA_CH91_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012B7Cu)

/** Alias (User Manual Name) for DMA_CH91_CHCSR.
* To use register names with standard convension, please use DMA_CH91_CHCSR.
*/
#define	DMA_CHCSR091	(DMA_CH91_CHCSR)

/** \brief  2B6C, DMA Channel Destination Address Register x */
#define DMA_CH91_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012B6Cu)

/** Alias (User Manual Name) for DMA_CH91_DADR.
* To use register names with standard convension, please use DMA_CH91_DADR.
*/
#define	DMA_DADR091	(DMA_CH91_DADR)

/** \brief  2B60, DMA Channel Read Data CRC Register */
#define DMA_CH91_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012B60u)

/** Alias (User Manual Name) for DMA_CH91_RDCRCR.
* To use register names with standard convension, please use DMA_CH91_RDCRCR.
*/
#define	DMA_RDCRCR091	(DMA_CH91_RDCRCR)

/** \brief  2B68, DMA Channel Source Address Register */
#define DMA_CH91_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012B68u)

/** Alias (User Manual Name) for DMA_CH91_SADR.
* To use register names with standard convension, please use DMA_CH91_SADR.
*/
#define	DMA_SADR091	(DMA_CH91_SADR)

/** \brief  2B64, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH91_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012B64u)

/** Alias (User Manual Name) for DMA_CH91_SDCRCR.
* To use register names with standard convension, please use DMA_CH91_SDCRCR.
*/
#define	DMA_SDCRCR091	(DMA_CH91_SDCRCR)

/** \brief  2B78, DMA Channel Shadow Address Register */
#define DMA_CH91_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012B78u)

/** Alias (User Manual Name) for DMA_CH91_SHADR.
* To use register names with standard convension, please use DMA_CH91_SHADR.
*/
#define	DMA_SHADR091	(DMA_CH91_SHADR)

/** \brief  2B90, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH92_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012B90u)

/** Alias (User Manual Name) for DMA_CH92_ADICR.
* To use register names with standard convension, please use DMA_CH92_ADICR.
*/
#define	DMA_ADICR092	(DMA_CH92_ADICR)

/** \brief  2B94, DMA Channel Configuration Register */
#define DMA_CH92_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012B94u)

/** Alias (User Manual Name) for DMA_CH92_CHCFGR.
* To use register names with standard convension, please use DMA_CH92_CHCFGR.
*/
#define	DMA_CHCFGR092	(DMA_CH92_CHCFGR)

/** \brief  2B9C, DMARAM Channel Control and Status Register */
#define DMA_CH92_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012B9Cu)

/** Alias (User Manual Name) for DMA_CH92_CHCSR.
* To use register names with standard convension, please use DMA_CH92_CHCSR.
*/
#define	DMA_CHCSR092	(DMA_CH92_CHCSR)

/** \brief  2B8C, DMA Channel Destination Address Register x */
#define DMA_CH92_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012B8Cu)

/** Alias (User Manual Name) for DMA_CH92_DADR.
* To use register names with standard convension, please use DMA_CH92_DADR.
*/
#define	DMA_DADR092	(DMA_CH92_DADR)

/** \brief  2B80, DMA Channel Read Data CRC Register */
#define DMA_CH92_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012B80u)

/** Alias (User Manual Name) for DMA_CH92_RDCRCR.
* To use register names with standard convension, please use DMA_CH92_RDCRCR.
*/
#define	DMA_RDCRCR092	(DMA_CH92_RDCRCR)

/** \brief  2B88, DMA Channel Source Address Register */
#define DMA_CH92_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012B88u)

/** Alias (User Manual Name) for DMA_CH92_SADR.
* To use register names with standard convension, please use DMA_CH92_SADR.
*/
#define	DMA_SADR092	(DMA_CH92_SADR)

/** \brief  2B84, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH92_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012B84u)

/** Alias (User Manual Name) for DMA_CH92_SDCRCR.
* To use register names with standard convension, please use DMA_CH92_SDCRCR.
*/
#define	DMA_SDCRCR092	(DMA_CH92_SDCRCR)

/** \brief  2B98, DMA Channel Shadow Address Register */
#define DMA_CH92_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012B98u)

/** Alias (User Manual Name) for DMA_CH92_SHADR.
* To use register names with standard convension, please use DMA_CH92_SHADR.
*/
#define	DMA_SHADR092	(DMA_CH92_SHADR)

/** \brief  2BB0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH93_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012BB0u)

/** Alias (User Manual Name) for DMA_CH93_ADICR.
* To use register names with standard convension, please use DMA_CH93_ADICR.
*/
#define	DMA_ADICR093	(DMA_CH93_ADICR)

/** \brief  2BB4, DMA Channel Configuration Register */
#define DMA_CH93_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012BB4u)

/** Alias (User Manual Name) for DMA_CH93_CHCFGR.
* To use register names with standard convension, please use DMA_CH93_CHCFGR.
*/
#define	DMA_CHCFGR093	(DMA_CH93_CHCFGR)

/** \brief  2BBC, DMARAM Channel Control and Status Register */
#define DMA_CH93_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012BBCu)

/** Alias (User Manual Name) for DMA_CH93_CHCSR.
* To use register names with standard convension, please use DMA_CH93_CHCSR.
*/
#define	DMA_CHCSR093	(DMA_CH93_CHCSR)

/** \brief  2BAC, DMA Channel Destination Address Register x */
#define DMA_CH93_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012BACu)

/** Alias (User Manual Name) for DMA_CH93_DADR.
* To use register names with standard convension, please use DMA_CH93_DADR.
*/
#define	DMA_DADR093	(DMA_CH93_DADR)

/** \brief  2BA0, DMA Channel Read Data CRC Register */
#define DMA_CH93_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012BA0u)

/** Alias (User Manual Name) for DMA_CH93_RDCRCR.
* To use register names with standard convension, please use DMA_CH93_RDCRCR.
*/
#define	DMA_RDCRCR093	(DMA_CH93_RDCRCR)

/** \brief  2BA8, DMA Channel Source Address Register */
#define DMA_CH93_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012BA8u)

/** Alias (User Manual Name) for DMA_CH93_SADR.
* To use register names with standard convension, please use DMA_CH93_SADR.
*/
#define	DMA_SADR093	(DMA_CH93_SADR)

/** \brief  2BA4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH93_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012BA4u)

/** Alias (User Manual Name) for DMA_CH93_SDCRCR.
* To use register names with standard convension, please use DMA_CH93_SDCRCR.
*/
#define	DMA_SDCRCR093	(DMA_CH93_SDCRCR)

/** \brief  2BB8, DMA Channel Shadow Address Register */
#define DMA_CH93_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012BB8u)

/** Alias (User Manual Name) for DMA_CH93_SHADR.
* To use register names with standard convension, please use DMA_CH93_SHADR.
*/
#define	DMA_SHADR093	(DMA_CH93_SHADR)

/** \brief  2BD0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH94_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012BD0u)

/** Alias (User Manual Name) for DMA_CH94_ADICR.
* To use register names with standard convension, please use DMA_CH94_ADICR.
*/
#define	DMA_ADICR094	(DMA_CH94_ADICR)

/** \brief  2BD4, DMA Channel Configuration Register */
#define DMA_CH94_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012BD4u)

/** Alias (User Manual Name) for DMA_CH94_CHCFGR.
* To use register names with standard convension, please use DMA_CH94_CHCFGR.
*/
#define	DMA_CHCFGR094	(DMA_CH94_CHCFGR)

/** \brief  2BDC, DMARAM Channel Control and Status Register */
#define DMA_CH94_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012BDCu)

/** Alias (User Manual Name) for DMA_CH94_CHCSR.
* To use register names with standard convension, please use DMA_CH94_CHCSR.
*/
#define	DMA_CHCSR094	(DMA_CH94_CHCSR)

/** \brief  2BCC, DMA Channel Destination Address Register x */
#define DMA_CH94_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012BCCu)

/** Alias (User Manual Name) for DMA_CH94_DADR.
* To use register names with standard convension, please use DMA_CH94_DADR.
*/
#define	DMA_DADR094	(DMA_CH94_DADR)

/** \brief  2BC0, DMA Channel Read Data CRC Register */
#define DMA_CH94_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012BC0u)

/** Alias (User Manual Name) for DMA_CH94_RDCRCR.
* To use register names with standard convension, please use DMA_CH94_RDCRCR.
*/
#define	DMA_RDCRCR094	(DMA_CH94_RDCRCR)

/** \brief  2BC8, DMA Channel Source Address Register */
#define DMA_CH94_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012BC8u)

/** Alias (User Manual Name) for DMA_CH94_SADR.
* To use register names with standard convension, please use DMA_CH94_SADR.
*/
#define	DMA_SADR094	(DMA_CH94_SADR)

/** \brief  2BC4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH94_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012BC4u)

/** Alias (User Manual Name) for DMA_CH94_SDCRCR.
* To use register names with standard convension, please use DMA_CH94_SDCRCR.
*/
#define	DMA_SDCRCR094	(DMA_CH94_SDCRCR)

/** \brief  2BD8, DMA Channel Shadow Address Register */
#define DMA_CH94_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012BD8u)

/** Alias (User Manual Name) for DMA_CH94_SHADR.
* To use register names with standard convension, please use DMA_CH94_SHADR.
*/
#define	DMA_SHADR094	(DMA_CH94_SHADR)

/** \brief  2BF0, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH95_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012BF0u)

/** Alias (User Manual Name) for DMA_CH95_ADICR.
* To use register names with standard convension, please use DMA_CH95_ADICR.
*/
#define	DMA_ADICR095	(DMA_CH95_ADICR)

/** \brief  2BF4, DMA Channel Configuration Register */
#define DMA_CH95_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012BF4u)

/** Alias (User Manual Name) for DMA_CH95_CHCFGR.
* To use register names with standard convension, please use DMA_CH95_CHCFGR.
*/
#define	DMA_CHCFGR095	(DMA_CH95_CHCFGR)

/** \brief  2BFC, DMARAM Channel Control and Status Register */
#define DMA_CH95_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012BFCu)

/** Alias (User Manual Name) for DMA_CH95_CHCSR.
* To use register names with standard convension, please use DMA_CH95_CHCSR.
*/
#define	DMA_CHCSR095	(DMA_CH95_CHCSR)

/** \brief  2BEC, DMA Channel Destination Address Register x */
#define DMA_CH95_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012BECu)

/** Alias (User Manual Name) for DMA_CH95_DADR.
* To use register names with standard convension, please use DMA_CH95_DADR.
*/
#define	DMA_DADR095	(DMA_CH95_DADR)

/** \brief  2BE0, DMA Channel Read Data CRC Register */
#define DMA_CH95_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012BE0u)

/** Alias (User Manual Name) for DMA_CH95_RDCRCR.
* To use register names with standard convension, please use DMA_CH95_RDCRCR.
*/
#define	DMA_RDCRCR095	(DMA_CH95_RDCRCR)

/** \brief  2BE8, DMA Channel Source Address Register */
#define DMA_CH95_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012BE8u)

/** Alias (User Manual Name) for DMA_CH95_SADR.
* To use register names with standard convension, please use DMA_CH95_SADR.
*/
#define	DMA_SADR095	(DMA_CH95_SADR)

/** \brief  2BE4, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH95_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012BE4u)

/** Alias (User Manual Name) for DMA_CH95_SDCRCR.
* To use register names with standard convension, please use DMA_CH95_SDCRCR.
*/
#define	DMA_SDCRCR095	(DMA_CH95_SDCRCR)

/** \brief  2BF8, DMA Channel Shadow Address Register */
#define DMA_CH95_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012BF8u)

/** Alias (User Manual Name) for DMA_CH95_SHADR.
* To use register names with standard convension, please use DMA_CH95_SHADR.
*/
#define	DMA_SHADR095	(DMA_CH95_SHADR)

/** \brief  2C10, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH96_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012C10u)

/** Alias (User Manual Name) for DMA_CH96_ADICR.
* To use register names with standard convension, please use DMA_CH96_ADICR.
*/
#define	DMA_ADICR096	(DMA_CH96_ADICR)

/** \brief  2C14, DMA Channel Configuration Register */
#define DMA_CH96_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012C14u)

/** Alias (User Manual Name) for DMA_CH96_CHCFGR.
* To use register names with standard convension, please use DMA_CH96_CHCFGR.
*/
#define	DMA_CHCFGR096	(DMA_CH96_CHCFGR)

/** \brief  2C1C, DMARAM Channel Control and Status Register */
#define DMA_CH96_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012C1Cu)

/** Alias (User Manual Name) for DMA_CH96_CHCSR.
* To use register names with standard convension, please use DMA_CH96_CHCSR.
*/
#define	DMA_CHCSR096	(DMA_CH96_CHCSR)

/** \brief  2C0C, DMA Channel Destination Address Register x */
#define DMA_CH96_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012C0Cu)

/** Alias (User Manual Name) for DMA_CH96_DADR.
* To use register names with standard convension, please use DMA_CH96_DADR.
*/
#define	DMA_DADR096	(DMA_CH96_DADR)

/** \brief  2C00, DMA Channel Read Data CRC Register */
#define DMA_CH96_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012C00u)

/** Alias (User Manual Name) for DMA_CH96_RDCRCR.
* To use register names with standard convension, please use DMA_CH96_RDCRCR.
*/
#define	DMA_RDCRCR096	(DMA_CH96_RDCRCR)

/** \brief  2C08, DMA Channel Source Address Register */
#define DMA_CH96_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012C08u)

/** Alias (User Manual Name) for DMA_CH96_SADR.
* To use register names with standard convension, please use DMA_CH96_SADR.
*/
#define	DMA_SADR096	(DMA_CH96_SADR)

/** \brief  2C04, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH96_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012C04u)

/** Alias (User Manual Name) for DMA_CH96_SDCRCR.
* To use register names with standard convension, please use DMA_CH96_SDCRCR.
*/
#define	DMA_SDCRCR096	(DMA_CH96_SDCRCR)

/** \brief  2C18, DMA Channel Shadow Address Register */
#define DMA_CH96_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012C18u)

/** Alias (User Manual Name) for DMA_CH96_SHADR.
* To use register names with standard convension, please use DMA_CH96_SHADR.
*/
#define	DMA_SHADR096	(DMA_CH96_SHADR)

/** \brief  2C30, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH97_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012C30u)

/** Alias (User Manual Name) for DMA_CH97_ADICR.
* To use register names with standard convension, please use DMA_CH97_ADICR.
*/
#define	DMA_ADICR097	(DMA_CH97_ADICR)

/** \brief  2C34, DMA Channel Configuration Register */
#define DMA_CH97_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012C34u)

/** Alias (User Manual Name) for DMA_CH97_CHCFGR.
* To use register names with standard convension, please use DMA_CH97_CHCFGR.
*/
#define	DMA_CHCFGR097	(DMA_CH97_CHCFGR)

/** \brief  2C3C, DMARAM Channel Control and Status Register */
#define DMA_CH97_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012C3Cu)

/** Alias (User Manual Name) for DMA_CH97_CHCSR.
* To use register names with standard convension, please use DMA_CH97_CHCSR.
*/
#define	DMA_CHCSR097	(DMA_CH97_CHCSR)

/** \brief  2C2C, DMA Channel Destination Address Register x */
#define DMA_CH97_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012C2Cu)

/** Alias (User Manual Name) for DMA_CH97_DADR.
* To use register names with standard convension, please use DMA_CH97_DADR.
*/
#define	DMA_DADR097	(DMA_CH97_DADR)

/** \brief  2C20, DMA Channel Read Data CRC Register */
#define DMA_CH97_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012C20u)

/** Alias (User Manual Name) for DMA_CH97_RDCRCR.
* To use register names with standard convension, please use DMA_CH97_RDCRCR.
*/
#define	DMA_RDCRCR097	(DMA_CH97_RDCRCR)

/** \brief  2C28, DMA Channel Source Address Register */
#define DMA_CH97_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012C28u)

/** Alias (User Manual Name) for DMA_CH97_SADR.
* To use register names with standard convension, please use DMA_CH97_SADR.
*/
#define	DMA_SADR097	(DMA_CH97_SADR)

/** \brief  2C24, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH97_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012C24u)

/** Alias (User Manual Name) for DMA_CH97_SDCRCR.
* To use register names with standard convension, please use DMA_CH97_SDCRCR.
*/
#define	DMA_SDCRCR097	(DMA_CH97_SDCRCR)

/** \brief  2C38, DMA Channel Shadow Address Register */
#define DMA_CH97_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012C38u)

/** Alias (User Manual Name) for DMA_CH97_SHADR.
* To use register names with standard convension, please use DMA_CH97_SHADR.
*/
#define	DMA_SHADR097	(DMA_CH97_SHADR)

/** \brief  2C50, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH98_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012C50u)

/** Alias (User Manual Name) for DMA_CH98_ADICR.
* To use register names with standard convension, please use DMA_CH98_ADICR.
*/
#define	DMA_ADICR098	(DMA_CH98_ADICR)

/** \brief  2C54, DMA Channel Configuration Register */
#define DMA_CH98_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012C54u)

/** Alias (User Manual Name) for DMA_CH98_CHCFGR.
* To use register names with standard convension, please use DMA_CH98_CHCFGR.
*/
#define	DMA_CHCFGR098	(DMA_CH98_CHCFGR)

/** \brief  2C5C, DMARAM Channel Control and Status Register */
#define DMA_CH98_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012C5Cu)

/** Alias (User Manual Name) for DMA_CH98_CHCSR.
* To use register names with standard convension, please use DMA_CH98_CHCSR.
*/
#define	DMA_CHCSR098	(DMA_CH98_CHCSR)

/** \brief  2C4C, DMA Channel Destination Address Register x */
#define DMA_CH98_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012C4Cu)

/** Alias (User Manual Name) for DMA_CH98_DADR.
* To use register names with standard convension, please use DMA_CH98_DADR.
*/
#define	DMA_DADR098	(DMA_CH98_DADR)

/** \brief  2C40, DMA Channel Read Data CRC Register */
#define DMA_CH98_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012C40u)

/** Alias (User Manual Name) for DMA_CH98_RDCRCR.
* To use register names with standard convension, please use DMA_CH98_RDCRCR.
*/
#define	DMA_RDCRCR098	(DMA_CH98_RDCRCR)

/** \brief  2C48, DMA Channel Source Address Register */
#define DMA_CH98_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012C48u)

/** Alias (User Manual Name) for DMA_CH98_SADR.
* To use register names with standard convension, please use DMA_CH98_SADR.
*/
#define	DMA_SADR098	(DMA_CH98_SADR)

/** \brief  2C44, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH98_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012C44u)

/** Alias (User Manual Name) for DMA_CH98_SDCRCR.
* To use register names with standard convension, please use DMA_CH98_SDCRCR.
*/
#define	DMA_SDCRCR098	(DMA_CH98_SDCRCR)

/** \brief  2C58, DMA Channel Shadow Address Register */
#define DMA_CH98_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012C58u)

/** Alias (User Manual Name) for DMA_CH98_SHADR.
* To use register names with standard convension, please use DMA_CH98_SHADR.
*/
#define	DMA_SHADR098	(DMA_CH98_SHADR)

/** \brief  2C70, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH99_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012C70u)

/** Alias (User Manual Name) for DMA_CH99_ADICR.
* To use register names with standard convension, please use DMA_CH99_ADICR.
*/
#define	DMA_ADICR099	(DMA_CH99_ADICR)

/** \brief  2C74, DMA Channel Configuration Register */
#define DMA_CH99_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012C74u)

/** Alias (User Manual Name) for DMA_CH99_CHCFGR.
* To use register names with standard convension, please use DMA_CH99_CHCFGR.
*/
#define	DMA_CHCFGR099	(DMA_CH99_CHCFGR)

/** \brief  2C7C, DMARAM Channel Control and Status Register */
#define DMA_CH99_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF0012C7Cu)

/** Alias (User Manual Name) for DMA_CH99_CHCSR.
* To use register names with standard convension, please use DMA_CH99_CHCSR.
*/
#define	DMA_CHCSR099	(DMA_CH99_CHCSR)

/** \brief  2C6C, DMA Channel Destination Address Register x */
#define DMA_CH99_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF0012C6Cu)

/** Alias (User Manual Name) for DMA_CH99_DADR.
* To use register names with standard convension, please use DMA_CH99_DADR.
*/
#define	DMA_DADR099	(DMA_CH99_DADR)

/** \brief  2C60, DMA Channel Read Data CRC Register */
#define DMA_CH99_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012C60u)

/** Alias (User Manual Name) for DMA_CH99_RDCRCR.
* To use register names with standard convension, please use DMA_CH99_RDCRCR.
*/
#define	DMA_RDCRCR099	(DMA_CH99_RDCRCR)

/** \brief  2C68, DMA Channel Source Address Register */
#define DMA_CH99_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012C68u)

/** Alias (User Manual Name) for DMA_CH99_SADR.
* To use register names with standard convension, please use DMA_CH99_SADR.
*/
#define	DMA_SADR099	(DMA_CH99_SADR)

/** \brief  2C64, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH99_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012C64u)

/** Alias (User Manual Name) for DMA_CH99_SDCRCR.
* To use register names with standard convension, please use DMA_CH99_SDCRCR.
*/
#define	DMA_SDCRCR099	(DMA_CH99_SDCRCR)

/** \brief  2C78, DMA Channel Shadow Address Register */
#define DMA_CH99_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012C78u)

/** Alias (User Manual Name) for DMA_CH99_SHADR.
* To use register names with standard convension, please use DMA_CH99_SHADR.
*/
#define	DMA_SHADR099	(DMA_CH99_SHADR)

/** \brief  2130, DMA Channel Address and Interrupt Control Register x */
#define DMA_CH9_ADICR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_ADICR*)0xF0012130u)

/** Alias (User Manual Name) for DMA_CH9_ADICR.
* To use register names with standard convension, please use DMA_CH9_ADICR.
*/
#define	DMA_ADICR009	(DMA_CH9_ADICR)

/** \brief  2134, DMA Channel Configuration Register */
#define DMA_CH9_CHCFGR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCFGR*)0xF0012134u)

/** Alias (User Manual Name) for DMA_CH9_CHCFGR.
* To use register names with standard convension, please use DMA_CH9_CHCFGR.
*/
#define	DMA_CHCFGR009	(DMA_CH9_CHCFGR)

/** \brief  213C, DMARAM Channel Control and Status Register */
#define DMA_CH9_CHCSR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_CHCSR*)0xF001213Cu)

/** Alias (User Manual Name) for DMA_CH9_CHCSR.
* To use register names with standard convension, please use DMA_CH9_CHCSR.
*/
#define	DMA_CHCSR009	(DMA_CH9_CHCSR)

/** \brief  212C, DMA Channel Destination Address Register x */
#define DMA_CH9_DADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_DADR*)0xF001212Cu)

/** Alias (User Manual Name) for DMA_CH9_DADR.
* To use register names with standard convension, please use DMA_CH9_DADR.
*/
#define	DMA_DADR009	(DMA_CH9_DADR)

/** \brief  2120, DMA Channel Read Data CRC Register */
#define DMA_CH9_RDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_RDCRCR*)0xF0012120u)

/** Alias (User Manual Name) for DMA_CH9_RDCRCR.
* To use register names with standard convension, please use DMA_CH9_RDCRCR.
*/
#define	DMA_RDCRCR009	(DMA_CH9_RDCRCR)

/** \brief  2128, DMA Channel Source Address Register */
#define DMA_CH9_SADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SADR*)0xF0012128u)

/** Alias (User Manual Name) for DMA_CH9_SADR.
* To use register names with standard convension, please use DMA_CH9_SADR.
*/
#define	DMA_SADR009	(DMA_CH9_SADR)

/** \brief  2124, DMA Channel Source and Destination Address CRC Register */
#define DMA_CH9_SDCRCR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SDCRCR*)0xF0012124u)

/** Alias (User Manual Name) for DMA_CH9_SDCRCR.
* To use register names with standard convension, please use DMA_CH9_SDCRCR.
*/
#define	DMA_SDCRCR009	(DMA_CH9_SDCRCR)

/** \brief  2138, DMA Channel Shadow Address Register */
#define DMA_CH9_SHADR /*lint --e(923)*/ (*(volatile Ifx_DMA_CH_SHADR*)0xF0012138u)

/** Alias (User Manual Name) for DMA_CH9_SHADR.
* To use register names with standard convension, please use DMA_CH9_SHADR.
*/
#define	DMA_SHADR009	(DMA_CH9_SHADR)

/** \brief  0, DMA Clock Control Register */
#define DMA_CLC /*lint --e(923)*/ (*(volatile Ifx_DMA_CLC*)0xF0010000u)

/** \brief  1204, DMA Error Interrupt Set Register */
#define DMA_ERRINTR /*lint --e(923)*/ (*(volatile Ifx_DMA_ERRINTR*)0xF0011204u)

/** \brief  1800, DMA Channel Hardware Resource Register */
#define DMA_HRR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011800u)

/** Alias (User Manual Name) for DMA_HRR0.
* To use register names with standard convension, please use DMA_HRR0.
*/
#define	DMA_HRR000	(DMA_HRR0)

/** \brief  1804, DMA Channel Hardware Resource Register */
#define DMA_HRR1 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011804u)

/** Alias (User Manual Name) for DMA_HRR1.
* To use register names with standard convension, please use DMA_HRR1.
*/
#define	DMA_HRR001	(DMA_HRR1)

/** \brief  1828, DMA Channel Hardware Resource Register */
#define DMA_HRR10 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011828u)

/** Alias (User Manual Name) for DMA_HRR10.
* To use register names with standard convension, please use DMA_HRR10.
*/
#define	DMA_HRR010	(DMA_HRR10)

/** \brief  1990, DMA Channel Hardware Resource Register */
#define DMA_HRR100 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011990u)

/** \brief  1994, DMA Channel Hardware Resource Register */
#define DMA_HRR101 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011994u)

/** \brief  1998, DMA Channel Hardware Resource Register */
#define DMA_HRR102 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011998u)

/** \brief  199C, DMA Channel Hardware Resource Register */
#define DMA_HRR103 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001199Cu)

/** \brief  19A0, DMA Channel Hardware Resource Register */
#define DMA_HRR104 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119A0u)

/** \brief  19A4, DMA Channel Hardware Resource Register */
#define DMA_HRR105 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119A4u)

/** \brief  19A8, DMA Channel Hardware Resource Register */
#define DMA_HRR106 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119A8u)

/** \brief  19AC, DMA Channel Hardware Resource Register */
#define DMA_HRR107 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119ACu)

/** \brief  19B0, DMA Channel Hardware Resource Register */
#define DMA_HRR108 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119B0u)

/** \brief  19B4, DMA Channel Hardware Resource Register */
#define DMA_HRR109 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119B4u)

/** \brief  182C, DMA Channel Hardware Resource Register */
#define DMA_HRR11 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001182Cu)

/** Alias (User Manual Name) for DMA_HRR11.
* To use register names with standard convension, please use DMA_HRR11.
*/
#define	DMA_HRR011	(DMA_HRR11)

/** \brief  19B8, DMA Channel Hardware Resource Register */
#define DMA_HRR110 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119B8u)

/** \brief  19BC, DMA Channel Hardware Resource Register */
#define DMA_HRR111 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119BCu)

/** \brief  19C0, DMA Channel Hardware Resource Register */
#define DMA_HRR112 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119C0u)

/** \brief  19C4, DMA Channel Hardware Resource Register */
#define DMA_HRR113 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119C4u)

/** \brief  19C8, DMA Channel Hardware Resource Register */
#define DMA_HRR114 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119C8u)

/** \brief  19CC, DMA Channel Hardware Resource Register */
#define DMA_HRR115 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119CCu)

/** \brief  19D0, DMA Channel Hardware Resource Register */
#define DMA_HRR116 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119D0u)

/** \brief  19D4, DMA Channel Hardware Resource Register */
#define DMA_HRR117 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119D4u)

/** \brief  19D8, DMA Channel Hardware Resource Register */
#define DMA_HRR118 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119D8u)

/** \brief  19DC, DMA Channel Hardware Resource Register */
#define DMA_HRR119 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119DCu)

/** \brief  1830, DMA Channel Hardware Resource Register */
#define DMA_HRR12 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011830u)

/** Alias (User Manual Name) for DMA_HRR12.
* To use register names with standard convension, please use DMA_HRR12.
*/
#define	DMA_HRR012	(DMA_HRR12)

/** \brief  19E0, DMA Channel Hardware Resource Register */
#define DMA_HRR120 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119E0u)

/** \brief  19E4, DMA Channel Hardware Resource Register */
#define DMA_HRR121 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119E4u)

/** \brief  19E8, DMA Channel Hardware Resource Register */
#define DMA_HRR122 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119E8u)

/** \brief  19EC, DMA Channel Hardware Resource Register */
#define DMA_HRR123 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119ECu)

/** \brief  19F0, DMA Channel Hardware Resource Register */
#define DMA_HRR124 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119F0u)

/** \brief  19F4, DMA Channel Hardware Resource Register */
#define DMA_HRR125 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119F4u)

/** \brief  19F8, DMA Channel Hardware Resource Register */
#define DMA_HRR126 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119F8u)

/** \brief  19FC, DMA Channel Hardware Resource Register */
#define DMA_HRR127 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00119FCu)

/** \brief  1834, DMA Channel Hardware Resource Register */
#define DMA_HRR13 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011834u)

/** Alias (User Manual Name) for DMA_HRR13.
* To use register names with standard convension, please use DMA_HRR13.
*/
#define	DMA_HRR013	(DMA_HRR13)

/** \brief  1838, DMA Channel Hardware Resource Register */
#define DMA_HRR14 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011838u)

/** Alias (User Manual Name) for DMA_HRR14.
* To use register names with standard convension, please use DMA_HRR14.
*/
#define	DMA_HRR014	(DMA_HRR14)

/** \brief  183C, DMA Channel Hardware Resource Register */
#define DMA_HRR15 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001183Cu)

/** Alias (User Manual Name) for DMA_HRR15.
* To use register names with standard convension, please use DMA_HRR15.
*/
#define	DMA_HRR015	(DMA_HRR15)

/** \brief  1840, DMA Channel Hardware Resource Register */
#define DMA_HRR16 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011840u)

/** Alias (User Manual Name) for DMA_HRR16.
* To use register names with standard convension, please use DMA_HRR16.
*/
#define	DMA_HRR016	(DMA_HRR16)

/** \brief  1844, DMA Channel Hardware Resource Register */
#define DMA_HRR17 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011844u)

/** Alias (User Manual Name) for DMA_HRR17.
* To use register names with standard convension, please use DMA_HRR17.
*/
#define	DMA_HRR017	(DMA_HRR17)

/** \brief  1848, DMA Channel Hardware Resource Register */
#define DMA_HRR18 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011848u)

/** Alias (User Manual Name) for DMA_HRR18.
* To use register names with standard convension, please use DMA_HRR18.
*/
#define	DMA_HRR018	(DMA_HRR18)

/** \brief  184C, DMA Channel Hardware Resource Register */
#define DMA_HRR19 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001184Cu)

/** Alias (User Manual Name) for DMA_HRR19.
* To use register names with standard convension, please use DMA_HRR19.
*/
#define	DMA_HRR019	(DMA_HRR19)

/** \brief  1808, DMA Channel Hardware Resource Register */
#define DMA_HRR2 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011808u)

/** Alias (User Manual Name) for DMA_HRR2.
* To use register names with standard convension, please use DMA_HRR2.
*/
#define	DMA_HRR002	(DMA_HRR2)

/** \brief  1850, DMA Channel Hardware Resource Register */
#define DMA_HRR20 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011850u)

/** Alias (User Manual Name) for DMA_HRR20.
* To use register names with standard convension, please use DMA_HRR20.
*/
#define	DMA_HRR020	(DMA_HRR20)

/** \brief  1854, DMA Channel Hardware Resource Register */
#define DMA_HRR21 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011854u)

/** Alias (User Manual Name) for DMA_HRR21.
* To use register names with standard convension, please use DMA_HRR21.
*/
#define	DMA_HRR021	(DMA_HRR21)

/** \brief  1858, DMA Channel Hardware Resource Register */
#define DMA_HRR22 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011858u)

/** Alias (User Manual Name) for DMA_HRR22.
* To use register names with standard convension, please use DMA_HRR22.
*/
#define	DMA_HRR022	(DMA_HRR22)

/** \brief  185C, DMA Channel Hardware Resource Register */
#define DMA_HRR23 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001185Cu)

/** Alias (User Manual Name) for DMA_HRR23.
* To use register names with standard convension, please use DMA_HRR23.
*/
#define	DMA_HRR023	(DMA_HRR23)

/** \brief  1860, DMA Channel Hardware Resource Register */
#define DMA_HRR24 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011860u)

/** Alias (User Manual Name) for DMA_HRR24.
* To use register names with standard convension, please use DMA_HRR24.
*/
#define	DMA_HRR024	(DMA_HRR24)

/** \brief  1864, DMA Channel Hardware Resource Register */
#define DMA_HRR25 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011864u)

/** Alias (User Manual Name) for DMA_HRR25.
* To use register names with standard convension, please use DMA_HRR25.
*/
#define	DMA_HRR025	(DMA_HRR25)

/** \brief  1868, DMA Channel Hardware Resource Register */
#define DMA_HRR26 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011868u)

/** Alias (User Manual Name) for DMA_HRR26.
* To use register names with standard convension, please use DMA_HRR26.
*/
#define	DMA_HRR026	(DMA_HRR26)

/** \brief  186C, DMA Channel Hardware Resource Register */
#define DMA_HRR27 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001186Cu)

/** Alias (User Manual Name) for DMA_HRR27.
* To use register names with standard convension, please use DMA_HRR27.
*/
#define	DMA_HRR027	(DMA_HRR27)

/** \brief  1870, DMA Channel Hardware Resource Register */
#define DMA_HRR28 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011870u)

/** Alias (User Manual Name) for DMA_HRR28.
* To use register names with standard convension, please use DMA_HRR28.
*/
#define	DMA_HRR028	(DMA_HRR28)

/** \brief  1874, DMA Channel Hardware Resource Register */
#define DMA_HRR29 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011874u)

/** Alias (User Manual Name) for DMA_HRR29.
* To use register names with standard convension, please use DMA_HRR29.
*/
#define	DMA_HRR029	(DMA_HRR29)

/** \brief  180C, DMA Channel Hardware Resource Register */
#define DMA_HRR3 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001180Cu)

/** Alias (User Manual Name) for DMA_HRR3.
* To use register names with standard convension, please use DMA_HRR3.
*/
#define	DMA_HRR003	(DMA_HRR3)

/** \brief  1878, DMA Channel Hardware Resource Register */
#define DMA_HRR30 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011878u)

/** Alias (User Manual Name) for DMA_HRR30.
* To use register names with standard convension, please use DMA_HRR30.
*/
#define	DMA_HRR030	(DMA_HRR30)

/** \brief  187C, DMA Channel Hardware Resource Register */
#define DMA_HRR31 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001187Cu)

/** Alias (User Manual Name) for DMA_HRR31.
* To use register names with standard convension, please use DMA_HRR31.
*/
#define	DMA_HRR031	(DMA_HRR31)

/** \brief  1880, DMA Channel Hardware Resource Register */
#define DMA_HRR32 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011880u)

/** Alias (User Manual Name) for DMA_HRR32.
* To use register names with standard convension, please use DMA_HRR32.
*/
#define	DMA_HRR032	(DMA_HRR32)

/** \brief  1884, DMA Channel Hardware Resource Register */
#define DMA_HRR33 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011884u)

/** Alias (User Manual Name) for DMA_HRR33.
* To use register names with standard convension, please use DMA_HRR33.
*/
#define	DMA_HRR033	(DMA_HRR33)

/** \brief  1888, DMA Channel Hardware Resource Register */
#define DMA_HRR34 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011888u)

/** Alias (User Manual Name) for DMA_HRR34.
* To use register names with standard convension, please use DMA_HRR34.
*/
#define	DMA_HRR034	(DMA_HRR34)

/** \brief  188C, DMA Channel Hardware Resource Register */
#define DMA_HRR35 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001188Cu)

/** Alias (User Manual Name) for DMA_HRR35.
* To use register names with standard convension, please use DMA_HRR35.
*/
#define	DMA_HRR035	(DMA_HRR35)

/** \brief  1890, DMA Channel Hardware Resource Register */
#define DMA_HRR36 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011890u)

/** Alias (User Manual Name) for DMA_HRR36.
* To use register names with standard convension, please use DMA_HRR36.
*/
#define	DMA_HRR036	(DMA_HRR36)

/** \brief  1894, DMA Channel Hardware Resource Register */
#define DMA_HRR37 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011894u)

/** Alias (User Manual Name) for DMA_HRR37.
* To use register names with standard convension, please use DMA_HRR37.
*/
#define	DMA_HRR037	(DMA_HRR37)

/** \brief  1898, DMA Channel Hardware Resource Register */
#define DMA_HRR38 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011898u)

/** Alias (User Manual Name) for DMA_HRR38.
* To use register names with standard convension, please use DMA_HRR38.
*/
#define	DMA_HRR038	(DMA_HRR38)

/** \brief  189C, DMA Channel Hardware Resource Register */
#define DMA_HRR39 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001189Cu)

/** Alias (User Manual Name) for DMA_HRR39.
* To use register names with standard convension, please use DMA_HRR39.
*/
#define	DMA_HRR039	(DMA_HRR39)

/** \brief  1810, DMA Channel Hardware Resource Register */
#define DMA_HRR4 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011810u)

/** Alias (User Manual Name) for DMA_HRR4.
* To use register names with standard convension, please use DMA_HRR4.
*/
#define	DMA_HRR004	(DMA_HRR4)

/** \brief  18A0, DMA Channel Hardware Resource Register */
#define DMA_HRR40 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118A0u)

/** Alias (User Manual Name) for DMA_HRR40.
* To use register names with standard convension, please use DMA_HRR40.
*/
#define	DMA_HRR040	(DMA_HRR40)

/** \brief  18A4, DMA Channel Hardware Resource Register */
#define DMA_HRR41 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118A4u)

/** Alias (User Manual Name) for DMA_HRR41.
* To use register names with standard convension, please use DMA_HRR41.
*/
#define	DMA_HRR041	(DMA_HRR41)

/** \brief  18A8, DMA Channel Hardware Resource Register */
#define DMA_HRR42 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118A8u)

/** Alias (User Manual Name) for DMA_HRR42.
* To use register names with standard convension, please use DMA_HRR42.
*/
#define	DMA_HRR042	(DMA_HRR42)

/** \brief  18AC, DMA Channel Hardware Resource Register */
#define DMA_HRR43 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118ACu)

/** Alias (User Manual Name) for DMA_HRR43.
* To use register names with standard convension, please use DMA_HRR43.
*/
#define	DMA_HRR043	(DMA_HRR43)

/** \brief  18B0, DMA Channel Hardware Resource Register */
#define DMA_HRR44 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118B0u)

/** Alias (User Manual Name) for DMA_HRR44.
* To use register names with standard convension, please use DMA_HRR44.
*/
#define	DMA_HRR044	(DMA_HRR44)

/** \brief  18B4, DMA Channel Hardware Resource Register */
#define DMA_HRR45 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118B4u)

/** Alias (User Manual Name) for DMA_HRR45.
* To use register names with standard convension, please use DMA_HRR45.
*/
#define	DMA_HRR045	(DMA_HRR45)

/** \brief  18B8, DMA Channel Hardware Resource Register */
#define DMA_HRR46 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118B8u)

/** Alias (User Manual Name) for DMA_HRR46.
* To use register names with standard convension, please use DMA_HRR46.
*/
#define	DMA_HRR046	(DMA_HRR46)

/** \brief  18BC, DMA Channel Hardware Resource Register */
#define DMA_HRR47 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118BCu)

/** Alias (User Manual Name) for DMA_HRR47.
* To use register names with standard convension, please use DMA_HRR47.
*/
#define	DMA_HRR047	(DMA_HRR47)

/** \brief  18C0, DMA Channel Hardware Resource Register */
#define DMA_HRR48 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118C0u)

/** Alias (User Manual Name) for DMA_HRR48.
* To use register names with standard convension, please use DMA_HRR48.
*/
#define	DMA_HRR048	(DMA_HRR48)

/** \brief  18C4, DMA Channel Hardware Resource Register */
#define DMA_HRR49 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118C4u)

/** Alias (User Manual Name) for DMA_HRR49.
* To use register names with standard convension, please use DMA_HRR49.
*/
#define	DMA_HRR049	(DMA_HRR49)

/** \brief  1814, DMA Channel Hardware Resource Register */
#define DMA_HRR5 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011814u)

/** Alias (User Manual Name) for DMA_HRR5.
* To use register names with standard convension, please use DMA_HRR5.
*/
#define	DMA_HRR005	(DMA_HRR5)

/** \brief  18C8, DMA Channel Hardware Resource Register */
#define DMA_HRR50 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118C8u)

/** Alias (User Manual Name) for DMA_HRR50.
* To use register names with standard convension, please use DMA_HRR50.
*/
#define	DMA_HRR050	(DMA_HRR50)

/** \brief  18CC, DMA Channel Hardware Resource Register */
#define DMA_HRR51 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118CCu)

/** Alias (User Manual Name) for DMA_HRR51.
* To use register names with standard convension, please use DMA_HRR51.
*/
#define	DMA_HRR051	(DMA_HRR51)

/** \brief  18D0, DMA Channel Hardware Resource Register */
#define DMA_HRR52 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118D0u)

/** Alias (User Manual Name) for DMA_HRR52.
* To use register names with standard convension, please use DMA_HRR52.
*/
#define	DMA_HRR052	(DMA_HRR52)

/** \brief  18D4, DMA Channel Hardware Resource Register */
#define DMA_HRR53 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118D4u)

/** Alias (User Manual Name) for DMA_HRR53.
* To use register names with standard convension, please use DMA_HRR53.
*/
#define	DMA_HRR053	(DMA_HRR53)

/** \brief  18D8, DMA Channel Hardware Resource Register */
#define DMA_HRR54 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118D8u)

/** Alias (User Manual Name) for DMA_HRR54.
* To use register names with standard convension, please use DMA_HRR54.
*/
#define	DMA_HRR054	(DMA_HRR54)

/** \brief  18DC, DMA Channel Hardware Resource Register */
#define DMA_HRR55 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118DCu)

/** Alias (User Manual Name) for DMA_HRR55.
* To use register names with standard convension, please use DMA_HRR55.
*/
#define	DMA_HRR055	(DMA_HRR55)

/** \brief  18E0, DMA Channel Hardware Resource Register */
#define DMA_HRR56 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118E0u)

/** Alias (User Manual Name) for DMA_HRR56.
* To use register names with standard convension, please use DMA_HRR56.
*/
#define	DMA_HRR056	(DMA_HRR56)

/** \brief  18E4, DMA Channel Hardware Resource Register */
#define DMA_HRR57 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118E4u)

/** Alias (User Manual Name) for DMA_HRR57.
* To use register names with standard convension, please use DMA_HRR57.
*/
#define	DMA_HRR057	(DMA_HRR57)

/** \brief  18E8, DMA Channel Hardware Resource Register */
#define DMA_HRR58 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118E8u)

/** Alias (User Manual Name) for DMA_HRR58.
* To use register names with standard convension, please use DMA_HRR58.
*/
#define	DMA_HRR058	(DMA_HRR58)

/** \brief  18EC, DMA Channel Hardware Resource Register */
#define DMA_HRR59 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118ECu)

/** Alias (User Manual Name) for DMA_HRR59.
* To use register names with standard convension, please use DMA_HRR59.
*/
#define	DMA_HRR059	(DMA_HRR59)

/** \brief  1818, DMA Channel Hardware Resource Register */
#define DMA_HRR6 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011818u)

/** Alias (User Manual Name) for DMA_HRR6.
* To use register names with standard convension, please use DMA_HRR6.
*/
#define	DMA_HRR006	(DMA_HRR6)

/** \brief  18F0, DMA Channel Hardware Resource Register */
#define DMA_HRR60 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118F0u)

/** Alias (User Manual Name) for DMA_HRR60.
* To use register names with standard convension, please use DMA_HRR60.
*/
#define	DMA_HRR060	(DMA_HRR60)

/** \brief  18F4, DMA Channel Hardware Resource Register */
#define DMA_HRR61 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118F4u)

/** Alias (User Manual Name) for DMA_HRR61.
* To use register names with standard convension, please use DMA_HRR61.
*/
#define	DMA_HRR061	(DMA_HRR61)

/** \brief  18F8, DMA Channel Hardware Resource Register */
#define DMA_HRR62 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118F8u)

/** Alias (User Manual Name) for DMA_HRR62.
* To use register names with standard convension, please use DMA_HRR62.
*/
#define	DMA_HRR062	(DMA_HRR62)

/** \brief  18FC, DMA Channel Hardware Resource Register */
#define DMA_HRR63 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF00118FCu)

/** Alias (User Manual Name) for DMA_HRR63.
* To use register names with standard convension, please use DMA_HRR63.
*/
#define	DMA_HRR063	(DMA_HRR63)

/** \brief  1900, DMA Channel Hardware Resource Register */
#define DMA_HRR64 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011900u)

/** Alias (User Manual Name) for DMA_HRR64.
* To use register names with standard convension, please use DMA_HRR64.
*/
#define	DMA_HRR064	(DMA_HRR64)

/** \brief  1904, DMA Channel Hardware Resource Register */
#define DMA_HRR65 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011904u)

/** Alias (User Manual Name) for DMA_HRR65.
* To use register names with standard convension, please use DMA_HRR65.
*/
#define	DMA_HRR065	(DMA_HRR65)

/** \brief  1908, DMA Channel Hardware Resource Register */
#define DMA_HRR66 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011908u)

/** Alias (User Manual Name) for DMA_HRR66.
* To use register names with standard convension, please use DMA_HRR66.
*/
#define	DMA_HRR066	(DMA_HRR66)

/** \brief  190C, DMA Channel Hardware Resource Register */
#define DMA_HRR67 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001190Cu)

/** Alias (User Manual Name) for DMA_HRR67.
* To use register names with standard convension, please use DMA_HRR67.
*/
#define	DMA_HRR067	(DMA_HRR67)

/** \brief  1910, DMA Channel Hardware Resource Register */
#define DMA_HRR68 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011910u)

/** Alias (User Manual Name) for DMA_HRR68.
* To use register names with standard convension, please use DMA_HRR68.
*/
#define	DMA_HRR068	(DMA_HRR68)

/** \brief  1914, DMA Channel Hardware Resource Register */
#define DMA_HRR69 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011914u)

/** Alias (User Manual Name) for DMA_HRR69.
* To use register names with standard convension, please use DMA_HRR69.
*/
#define	DMA_HRR069	(DMA_HRR69)

/** \brief  181C, DMA Channel Hardware Resource Register */
#define DMA_HRR7 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001181Cu)

/** Alias (User Manual Name) for DMA_HRR7.
* To use register names with standard convension, please use DMA_HRR7.
*/
#define	DMA_HRR007	(DMA_HRR7)

/** \brief  1918, DMA Channel Hardware Resource Register */
#define DMA_HRR70 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011918u)

/** Alias (User Manual Name) for DMA_HRR70.
* To use register names with standard convension, please use DMA_HRR70.
*/
#define	DMA_HRR070	(DMA_HRR70)

/** \brief  191C, DMA Channel Hardware Resource Register */
#define DMA_HRR71 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001191Cu)

/** Alias (User Manual Name) for DMA_HRR71.
* To use register names with standard convension, please use DMA_HRR71.
*/
#define	DMA_HRR071	(DMA_HRR71)

/** \brief  1920, DMA Channel Hardware Resource Register */
#define DMA_HRR72 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011920u)

/** Alias (User Manual Name) for DMA_HRR72.
* To use register names with standard convension, please use DMA_HRR72.
*/
#define	DMA_HRR072	(DMA_HRR72)

/** \brief  1924, DMA Channel Hardware Resource Register */
#define DMA_HRR73 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011924u)

/** Alias (User Manual Name) for DMA_HRR73.
* To use register names with standard convension, please use DMA_HRR73.
*/
#define	DMA_HRR073	(DMA_HRR73)

/** \brief  1928, DMA Channel Hardware Resource Register */
#define DMA_HRR74 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011928u)

/** Alias (User Manual Name) for DMA_HRR74.
* To use register names with standard convension, please use DMA_HRR74.
*/
#define	DMA_HRR074	(DMA_HRR74)

/** \brief  192C, DMA Channel Hardware Resource Register */
#define DMA_HRR75 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001192Cu)

/** Alias (User Manual Name) for DMA_HRR75.
* To use register names with standard convension, please use DMA_HRR75.
*/
#define	DMA_HRR075	(DMA_HRR75)

/** \brief  1930, DMA Channel Hardware Resource Register */
#define DMA_HRR76 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011930u)

/** Alias (User Manual Name) for DMA_HRR76.
* To use register names with standard convension, please use DMA_HRR76.
*/
#define	DMA_HRR076	(DMA_HRR76)

/** \brief  1934, DMA Channel Hardware Resource Register */
#define DMA_HRR77 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011934u)

/** Alias (User Manual Name) for DMA_HRR77.
* To use register names with standard convension, please use DMA_HRR77.
*/
#define	DMA_HRR077	(DMA_HRR77)

/** \brief  1938, DMA Channel Hardware Resource Register */
#define DMA_HRR78 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011938u)

/** Alias (User Manual Name) for DMA_HRR78.
* To use register names with standard convension, please use DMA_HRR78.
*/
#define	DMA_HRR078	(DMA_HRR78)

/** \brief  193C, DMA Channel Hardware Resource Register */
#define DMA_HRR79 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001193Cu)

/** Alias (User Manual Name) for DMA_HRR79.
* To use register names with standard convension, please use DMA_HRR79.
*/
#define	DMA_HRR079	(DMA_HRR79)

/** \brief  1820, DMA Channel Hardware Resource Register */
#define DMA_HRR8 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011820u)

/** Alias (User Manual Name) for DMA_HRR8.
* To use register names with standard convension, please use DMA_HRR8.
*/
#define	DMA_HRR008	(DMA_HRR8)

/** \brief  1940, DMA Channel Hardware Resource Register */
#define DMA_HRR80 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011940u)

/** Alias (User Manual Name) for DMA_HRR80.
* To use register names with standard convension, please use DMA_HRR80.
*/
#define	DMA_HRR080	(DMA_HRR80)

/** \brief  1944, DMA Channel Hardware Resource Register */
#define DMA_HRR81 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011944u)

/** Alias (User Manual Name) for DMA_HRR81.
* To use register names with standard convension, please use DMA_HRR81.
*/
#define	DMA_HRR081	(DMA_HRR81)

/** \brief  1948, DMA Channel Hardware Resource Register */
#define DMA_HRR82 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011948u)

/** Alias (User Manual Name) for DMA_HRR82.
* To use register names with standard convension, please use DMA_HRR82.
*/
#define	DMA_HRR082	(DMA_HRR82)

/** \brief  194C, DMA Channel Hardware Resource Register */
#define DMA_HRR83 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001194Cu)

/** Alias (User Manual Name) for DMA_HRR83.
* To use register names with standard convension, please use DMA_HRR83.
*/
#define	DMA_HRR083	(DMA_HRR83)

/** \brief  1950, DMA Channel Hardware Resource Register */
#define DMA_HRR84 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011950u)

/** Alias (User Manual Name) for DMA_HRR84.
* To use register names with standard convension, please use DMA_HRR84.
*/
#define	DMA_HRR084	(DMA_HRR84)

/** \brief  1954, DMA Channel Hardware Resource Register */
#define DMA_HRR85 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011954u)

/** Alias (User Manual Name) for DMA_HRR85.
* To use register names with standard convension, please use DMA_HRR85.
*/
#define	DMA_HRR085	(DMA_HRR85)

/** \brief  1958, DMA Channel Hardware Resource Register */
#define DMA_HRR86 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011958u)

/** Alias (User Manual Name) for DMA_HRR86.
* To use register names with standard convension, please use DMA_HRR86.
*/
#define	DMA_HRR086	(DMA_HRR86)

/** \brief  195C, DMA Channel Hardware Resource Register */
#define DMA_HRR87 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001195Cu)

/** Alias (User Manual Name) for DMA_HRR87.
* To use register names with standard convension, please use DMA_HRR87.
*/
#define	DMA_HRR087	(DMA_HRR87)

/** \brief  1960, DMA Channel Hardware Resource Register */
#define DMA_HRR88 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011960u)

/** Alias (User Manual Name) for DMA_HRR88.
* To use register names with standard convension, please use DMA_HRR88.
*/
#define	DMA_HRR088	(DMA_HRR88)

/** \brief  1964, DMA Channel Hardware Resource Register */
#define DMA_HRR89 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011964u)

/** Alias (User Manual Name) for DMA_HRR89.
* To use register names with standard convension, please use DMA_HRR89.
*/
#define	DMA_HRR089	(DMA_HRR89)

/** \brief  1824, DMA Channel Hardware Resource Register */
#define DMA_HRR9 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011824u)

/** Alias (User Manual Name) for DMA_HRR9.
* To use register names with standard convension, please use DMA_HRR9.
*/
#define	DMA_HRR009	(DMA_HRR9)

/** \brief  1968, DMA Channel Hardware Resource Register */
#define DMA_HRR90 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011968u)

/** Alias (User Manual Name) for DMA_HRR90.
* To use register names with standard convension, please use DMA_HRR90.
*/
#define	DMA_HRR090	(DMA_HRR90)

/** \brief  196C, DMA Channel Hardware Resource Register */
#define DMA_HRR91 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001196Cu)

/** Alias (User Manual Name) for DMA_HRR91.
* To use register names with standard convension, please use DMA_HRR91.
*/
#define	DMA_HRR091	(DMA_HRR91)

/** \brief  1970, DMA Channel Hardware Resource Register */
#define DMA_HRR92 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011970u)

/** Alias (User Manual Name) for DMA_HRR92.
* To use register names with standard convension, please use DMA_HRR92.
*/
#define	DMA_HRR092	(DMA_HRR92)

/** \brief  1974, DMA Channel Hardware Resource Register */
#define DMA_HRR93 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011974u)

/** Alias (User Manual Name) for DMA_HRR93.
* To use register names with standard convension, please use DMA_HRR93.
*/
#define	DMA_HRR093	(DMA_HRR93)

/** \brief  1978, DMA Channel Hardware Resource Register */
#define DMA_HRR94 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011978u)

/** Alias (User Manual Name) for DMA_HRR94.
* To use register names with standard convension, please use DMA_HRR94.
*/
#define	DMA_HRR094	(DMA_HRR94)

/** \brief  197C, DMA Channel Hardware Resource Register */
#define DMA_HRR95 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001197Cu)

/** Alias (User Manual Name) for DMA_HRR95.
* To use register names with standard convension, please use DMA_HRR95.
*/
#define	DMA_HRR095	(DMA_HRR95)

/** \brief  1980, DMA Channel Hardware Resource Register */
#define DMA_HRR96 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011980u)

/** Alias (User Manual Name) for DMA_HRR96.
* To use register names with standard convension, please use DMA_HRR96.
*/
#define	DMA_HRR096	(DMA_HRR96)

/** \brief  1984, DMA Channel Hardware Resource Register */
#define DMA_HRR97 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011984u)

/** Alias (User Manual Name) for DMA_HRR97.
* To use register names with standard convension, please use DMA_HRR97.
*/
#define	DMA_HRR097	(DMA_HRR97)

/** \brief  1988, DMA Channel Hardware Resource Register */
#define DMA_HRR98 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF0011988u)

/** Alias (User Manual Name) for DMA_HRR98.
* To use register names with standard convension, please use DMA_HRR98.
*/
#define	DMA_HRR098	(DMA_HRR98)

/** \brief  198C, DMA Channel Hardware Resource Register */
#define DMA_HRR99 /*lint --e(923)*/ (*(volatile Ifx_DMA_HRR*)0xF001198Cu)

/** Alias (User Manual Name) for DMA_HRR99.
* To use register names with standard convension, please use DMA_HRR99.
*/
#define	DMA_HRR099	(DMA_HRR99)

/** \brief  8, DMA Module Identification Register */
#define DMA_ID /*lint --e(923)*/ (*(volatile Ifx_DMA_ID*)0xF0010008u)

/** \brief  20, DMA Memory Control Register */
#define DMA_MEMCON /*lint --e(923)*/ (*(volatile Ifx_DMA_MEMCON*)0xF0010020u)

/** \brief  1300, DMA Mode Register */
#define DMA_MODE0 /*lint --e(923)*/ (*(volatile Ifx_DMA_MODE*)0xF0011300u)

/** \brief  1304, DMA Mode Register */
#define DMA_MODE1 /*lint --e(923)*/ (*(volatile Ifx_DMA_MODE*)0xF0011304u)

/** \brief  1308, DMA Mode Register */
#define DMA_MODE2 /*lint --e(923)*/ (*(volatile Ifx_DMA_MODE*)0xF0011308u)

/** \brief  130C, DMA Mode Register */
#define DMA_MODE3 /*lint --e(923)*/ (*(volatile Ifx_DMA_MODE*)0xF001130Cu)

/** \brief  1200, DMA OCDS Trigger Set Select */
#define DMA_OTSS /*lint --e(923)*/ (*(volatile Ifx_DMA_OTSS*)0xF0011200u)

/** \brief  1208, Pattern Read Register 0 */
#define DMA_PRR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_PRR0*)0xF0011208u)

/** \brief  120C, Pattern Read Register 1 */
#define DMA_PRR1 /*lint --e(923)*/ (*(volatile Ifx_DMA_PRR1*)0xF001120Cu)

/** \brief  1C00, DMA Suspend Acknowledge Register */
#define DMA_SUSACR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C00u)

/** Alias (User Manual Name) for DMA_SUSACR0.
* To use register names with standard convension, please use DMA_SUSACR0.
*/
#define	DMA_SUSACR000	(DMA_SUSACR0)

/** \brief  1C04, DMA Suspend Acknowledge Register */
#define DMA_SUSACR1 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C04u)

/** Alias (User Manual Name) for DMA_SUSACR1.
* To use register names with standard convension, please use DMA_SUSACR1.
*/
#define	DMA_SUSACR001	(DMA_SUSACR1)

/** \brief  1C28, DMA Suspend Acknowledge Register */
#define DMA_SUSACR10 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C28u)

/** Alias (User Manual Name) for DMA_SUSACR10.
* To use register names with standard convension, please use DMA_SUSACR10.
*/
#define	DMA_SUSACR010	(DMA_SUSACR10)

/** \brief  1D90, DMA Suspend Acknowledge Register */
#define DMA_SUSACR100 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D90u)

/** \brief  1D94, DMA Suspend Acknowledge Register */
#define DMA_SUSACR101 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D94u)

/** \brief  1D98, DMA Suspend Acknowledge Register */
#define DMA_SUSACR102 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D98u)

/** \brief  1D9C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR103 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D9Cu)

/** \brief  1DA0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR104 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DA0u)

/** \brief  1DA4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR105 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DA4u)

/** \brief  1DA8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR106 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DA8u)

/** \brief  1DAC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR107 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DACu)

/** \brief  1DB0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR108 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DB0u)

/** \brief  1DB4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR109 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DB4u)

/** \brief  1C2C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR11 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C2Cu)

/** Alias (User Manual Name) for DMA_SUSACR11.
* To use register names with standard convension, please use DMA_SUSACR11.
*/
#define	DMA_SUSACR011	(DMA_SUSACR11)

/** \brief  1DB8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR110 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DB8u)

/** \brief  1DBC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR111 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DBCu)

/** \brief  1DC0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR112 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DC0u)

/** \brief  1DC4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR113 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DC4u)

/** \brief  1DC8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR114 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DC8u)

/** \brief  1DCC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR115 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DCCu)

/** \brief  1DD0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR116 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DD0u)

/** \brief  1DD4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR117 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DD4u)

/** \brief  1DD8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR118 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DD8u)

/** \brief  1DDC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR119 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DDCu)

/** \brief  1C30, DMA Suspend Acknowledge Register */
#define DMA_SUSACR12 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C30u)

/** Alias (User Manual Name) for DMA_SUSACR12.
* To use register names with standard convension, please use DMA_SUSACR12.
*/
#define	DMA_SUSACR012	(DMA_SUSACR12)

/** \brief  1DE0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR120 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DE0u)

/** \brief  1DE4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR121 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DE4u)

/** \brief  1DE8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR122 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DE8u)

/** \brief  1DEC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR123 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DECu)

/** \brief  1DF0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR124 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DF0u)

/** \brief  1DF4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR125 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DF4u)

/** \brief  1DF8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR126 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DF8u)

/** \brief  1DFC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR127 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011DFCu)

/** \brief  1C34, DMA Suspend Acknowledge Register */
#define DMA_SUSACR13 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C34u)

/** Alias (User Manual Name) for DMA_SUSACR13.
* To use register names with standard convension, please use DMA_SUSACR13.
*/
#define	DMA_SUSACR013	(DMA_SUSACR13)

/** \brief  1C38, DMA Suspend Acknowledge Register */
#define DMA_SUSACR14 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C38u)

/** Alias (User Manual Name) for DMA_SUSACR14.
* To use register names with standard convension, please use DMA_SUSACR14.
*/
#define	DMA_SUSACR014	(DMA_SUSACR14)

/** \brief  1C3C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR15 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C3Cu)

/** Alias (User Manual Name) for DMA_SUSACR15.
* To use register names with standard convension, please use DMA_SUSACR15.
*/
#define	DMA_SUSACR015	(DMA_SUSACR15)

/** \brief  1C40, DMA Suspend Acknowledge Register */
#define DMA_SUSACR16 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C40u)

/** Alias (User Manual Name) for DMA_SUSACR16.
* To use register names with standard convension, please use DMA_SUSACR16.
*/
#define	DMA_SUSACR016	(DMA_SUSACR16)

/** \brief  1C44, DMA Suspend Acknowledge Register */
#define DMA_SUSACR17 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C44u)

/** Alias (User Manual Name) for DMA_SUSACR17.
* To use register names with standard convension, please use DMA_SUSACR17.
*/
#define	DMA_SUSACR017	(DMA_SUSACR17)

/** \brief  1C48, DMA Suspend Acknowledge Register */
#define DMA_SUSACR18 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C48u)

/** Alias (User Manual Name) for DMA_SUSACR18.
* To use register names with standard convension, please use DMA_SUSACR18.
*/
#define	DMA_SUSACR018	(DMA_SUSACR18)

/** \brief  1C4C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR19 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C4Cu)

/** Alias (User Manual Name) for DMA_SUSACR19.
* To use register names with standard convension, please use DMA_SUSACR19.
*/
#define	DMA_SUSACR019	(DMA_SUSACR19)

/** \brief  1C08, DMA Suspend Acknowledge Register */
#define DMA_SUSACR2 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C08u)

/** Alias (User Manual Name) for DMA_SUSACR2.
* To use register names with standard convension, please use DMA_SUSACR2.
*/
#define	DMA_SUSACR002	(DMA_SUSACR2)

/** \brief  1C50, DMA Suspend Acknowledge Register */
#define DMA_SUSACR20 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C50u)

/** Alias (User Manual Name) for DMA_SUSACR20.
* To use register names with standard convension, please use DMA_SUSACR20.
*/
#define	DMA_SUSACR020	(DMA_SUSACR20)

/** \brief  1C54, DMA Suspend Acknowledge Register */
#define DMA_SUSACR21 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C54u)

/** Alias (User Manual Name) for DMA_SUSACR21.
* To use register names with standard convension, please use DMA_SUSACR21.
*/
#define	DMA_SUSACR021	(DMA_SUSACR21)

/** \brief  1C58, DMA Suspend Acknowledge Register */
#define DMA_SUSACR22 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C58u)

/** Alias (User Manual Name) for DMA_SUSACR22.
* To use register names with standard convension, please use DMA_SUSACR22.
*/
#define	DMA_SUSACR022	(DMA_SUSACR22)

/** \brief  1C5C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR23 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C5Cu)

/** Alias (User Manual Name) for DMA_SUSACR23.
* To use register names with standard convension, please use DMA_SUSACR23.
*/
#define	DMA_SUSACR023	(DMA_SUSACR23)

/** \brief  1C60, DMA Suspend Acknowledge Register */
#define DMA_SUSACR24 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C60u)

/** Alias (User Manual Name) for DMA_SUSACR24.
* To use register names with standard convension, please use DMA_SUSACR24.
*/
#define	DMA_SUSACR024	(DMA_SUSACR24)

/** \brief  1C64, DMA Suspend Acknowledge Register */
#define DMA_SUSACR25 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C64u)

/** Alias (User Manual Name) for DMA_SUSACR25.
* To use register names with standard convension, please use DMA_SUSACR25.
*/
#define	DMA_SUSACR025	(DMA_SUSACR25)

/** \brief  1C68, DMA Suspend Acknowledge Register */
#define DMA_SUSACR26 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C68u)

/** Alias (User Manual Name) for DMA_SUSACR26.
* To use register names with standard convension, please use DMA_SUSACR26.
*/
#define	DMA_SUSACR026	(DMA_SUSACR26)

/** \brief  1C6C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR27 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C6Cu)

/** Alias (User Manual Name) for DMA_SUSACR27.
* To use register names with standard convension, please use DMA_SUSACR27.
*/
#define	DMA_SUSACR027	(DMA_SUSACR27)

/** \brief  1C70, DMA Suspend Acknowledge Register */
#define DMA_SUSACR28 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C70u)

/** Alias (User Manual Name) for DMA_SUSACR28.
* To use register names with standard convension, please use DMA_SUSACR28.
*/
#define	DMA_SUSACR028	(DMA_SUSACR28)

/** \brief  1C74, DMA Suspend Acknowledge Register */
#define DMA_SUSACR29 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C74u)

/** Alias (User Manual Name) for DMA_SUSACR29.
* To use register names with standard convension, please use DMA_SUSACR29.
*/
#define	DMA_SUSACR029	(DMA_SUSACR29)

/** \brief  1C0C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR3 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C0Cu)

/** Alias (User Manual Name) for DMA_SUSACR3.
* To use register names with standard convension, please use DMA_SUSACR3.
*/
#define	DMA_SUSACR003	(DMA_SUSACR3)

/** \brief  1C78, DMA Suspend Acknowledge Register */
#define DMA_SUSACR30 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C78u)

/** Alias (User Manual Name) for DMA_SUSACR30.
* To use register names with standard convension, please use DMA_SUSACR30.
*/
#define	DMA_SUSACR030	(DMA_SUSACR30)

/** \brief  1C7C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR31 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C7Cu)

/** Alias (User Manual Name) for DMA_SUSACR31.
* To use register names with standard convension, please use DMA_SUSACR31.
*/
#define	DMA_SUSACR031	(DMA_SUSACR31)

/** \brief  1C80, DMA Suspend Acknowledge Register */
#define DMA_SUSACR32 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C80u)

/** Alias (User Manual Name) for DMA_SUSACR32.
* To use register names with standard convension, please use DMA_SUSACR32.
*/
#define	DMA_SUSACR032	(DMA_SUSACR32)

/** \brief  1C84, DMA Suspend Acknowledge Register */
#define DMA_SUSACR33 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C84u)

/** Alias (User Manual Name) for DMA_SUSACR33.
* To use register names with standard convension, please use DMA_SUSACR33.
*/
#define	DMA_SUSACR033	(DMA_SUSACR33)

/** \brief  1C88, DMA Suspend Acknowledge Register */
#define DMA_SUSACR34 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C88u)

/** Alias (User Manual Name) for DMA_SUSACR34.
* To use register names with standard convension, please use DMA_SUSACR34.
*/
#define	DMA_SUSACR034	(DMA_SUSACR34)

/** \brief  1C8C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR35 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C8Cu)

/** Alias (User Manual Name) for DMA_SUSACR35.
* To use register names with standard convension, please use DMA_SUSACR35.
*/
#define	DMA_SUSACR035	(DMA_SUSACR35)

/** \brief  1C90, DMA Suspend Acknowledge Register */
#define DMA_SUSACR36 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C90u)

/** Alias (User Manual Name) for DMA_SUSACR36.
* To use register names with standard convension, please use DMA_SUSACR36.
*/
#define	DMA_SUSACR036	(DMA_SUSACR36)

/** \brief  1C94, DMA Suspend Acknowledge Register */
#define DMA_SUSACR37 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C94u)

/** Alias (User Manual Name) for DMA_SUSACR37.
* To use register names with standard convension, please use DMA_SUSACR37.
*/
#define	DMA_SUSACR037	(DMA_SUSACR37)

/** \brief  1C98, DMA Suspend Acknowledge Register */
#define DMA_SUSACR38 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C98u)

/** Alias (User Manual Name) for DMA_SUSACR38.
* To use register names with standard convension, please use DMA_SUSACR38.
*/
#define	DMA_SUSACR038	(DMA_SUSACR38)

/** \brief  1C9C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR39 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C9Cu)

/** Alias (User Manual Name) for DMA_SUSACR39.
* To use register names with standard convension, please use DMA_SUSACR39.
*/
#define	DMA_SUSACR039	(DMA_SUSACR39)

/** \brief  1C10, DMA Suspend Acknowledge Register */
#define DMA_SUSACR4 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C10u)

/** Alias (User Manual Name) for DMA_SUSACR4.
* To use register names with standard convension, please use DMA_SUSACR4.
*/
#define	DMA_SUSACR004	(DMA_SUSACR4)

/** \brief  1CA0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR40 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CA0u)

/** Alias (User Manual Name) for DMA_SUSACR40.
* To use register names with standard convension, please use DMA_SUSACR40.
*/
#define	DMA_SUSACR040	(DMA_SUSACR40)

/** \brief  1CA4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR41 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CA4u)

/** Alias (User Manual Name) for DMA_SUSACR41.
* To use register names with standard convension, please use DMA_SUSACR41.
*/
#define	DMA_SUSACR041	(DMA_SUSACR41)

/** \brief  1CA8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR42 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CA8u)

/** Alias (User Manual Name) for DMA_SUSACR42.
* To use register names with standard convension, please use DMA_SUSACR42.
*/
#define	DMA_SUSACR042	(DMA_SUSACR42)

/** \brief  1CAC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR43 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CACu)

/** Alias (User Manual Name) for DMA_SUSACR43.
* To use register names with standard convension, please use DMA_SUSACR43.
*/
#define	DMA_SUSACR043	(DMA_SUSACR43)

/** \brief  1CB0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR44 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CB0u)

/** Alias (User Manual Name) for DMA_SUSACR44.
* To use register names with standard convension, please use DMA_SUSACR44.
*/
#define	DMA_SUSACR044	(DMA_SUSACR44)

/** \brief  1CB4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR45 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CB4u)

/** Alias (User Manual Name) for DMA_SUSACR45.
* To use register names with standard convension, please use DMA_SUSACR45.
*/
#define	DMA_SUSACR045	(DMA_SUSACR45)

/** \brief  1CB8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR46 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CB8u)

/** Alias (User Manual Name) for DMA_SUSACR46.
* To use register names with standard convension, please use DMA_SUSACR46.
*/
#define	DMA_SUSACR046	(DMA_SUSACR46)

/** \brief  1CBC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR47 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CBCu)

/** Alias (User Manual Name) for DMA_SUSACR47.
* To use register names with standard convension, please use DMA_SUSACR47.
*/
#define	DMA_SUSACR047	(DMA_SUSACR47)

/** \brief  1CC0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR48 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CC0u)

/** Alias (User Manual Name) for DMA_SUSACR48.
* To use register names with standard convension, please use DMA_SUSACR48.
*/
#define	DMA_SUSACR048	(DMA_SUSACR48)

/** \brief  1CC4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR49 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CC4u)

/** Alias (User Manual Name) for DMA_SUSACR49.
* To use register names with standard convension, please use DMA_SUSACR49.
*/
#define	DMA_SUSACR049	(DMA_SUSACR49)

/** \brief  1C14, DMA Suspend Acknowledge Register */
#define DMA_SUSACR5 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C14u)

/** Alias (User Manual Name) for DMA_SUSACR5.
* To use register names with standard convension, please use DMA_SUSACR5.
*/
#define	DMA_SUSACR005	(DMA_SUSACR5)

/** \brief  1CC8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR50 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CC8u)

/** Alias (User Manual Name) for DMA_SUSACR50.
* To use register names with standard convension, please use DMA_SUSACR50.
*/
#define	DMA_SUSACR050	(DMA_SUSACR50)

/** \brief  1CCC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR51 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CCCu)

/** Alias (User Manual Name) for DMA_SUSACR51.
* To use register names with standard convension, please use DMA_SUSACR51.
*/
#define	DMA_SUSACR051	(DMA_SUSACR51)

/** \brief  1CD0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR52 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CD0u)

/** Alias (User Manual Name) for DMA_SUSACR52.
* To use register names with standard convension, please use DMA_SUSACR52.
*/
#define	DMA_SUSACR052	(DMA_SUSACR52)

/** \brief  1CD4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR53 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CD4u)

/** Alias (User Manual Name) for DMA_SUSACR53.
* To use register names with standard convension, please use DMA_SUSACR53.
*/
#define	DMA_SUSACR053	(DMA_SUSACR53)

/** \brief  1CD8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR54 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CD8u)

/** Alias (User Manual Name) for DMA_SUSACR54.
* To use register names with standard convension, please use DMA_SUSACR54.
*/
#define	DMA_SUSACR054	(DMA_SUSACR54)

/** \brief  1CDC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR55 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CDCu)

/** Alias (User Manual Name) for DMA_SUSACR55.
* To use register names with standard convension, please use DMA_SUSACR55.
*/
#define	DMA_SUSACR055	(DMA_SUSACR55)

/** \brief  1CE0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR56 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CE0u)

/** Alias (User Manual Name) for DMA_SUSACR56.
* To use register names with standard convension, please use DMA_SUSACR56.
*/
#define	DMA_SUSACR056	(DMA_SUSACR56)

/** \brief  1CE4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR57 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CE4u)

/** Alias (User Manual Name) for DMA_SUSACR57.
* To use register names with standard convension, please use DMA_SUSACR57.
*/
#define	DMA_SUSACR057	(DMA_SUSACR57)

/** \brief  1CE8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR58 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CE8u)

/** Alias (User Manual Name) for DMA_SUSACR58.
* To use register names with standard convension, please use DMA_SUSACR58.
*/
#define	DMA_SUSACR058	(DMA_SUSACR58)

/** \brief  1CEC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR59 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CECu)

/** Alias (User Manual Name) for DMA_SUSACR59.
* To use register names with standard convension, please use DMA_SUSACR59.
*/
#define	DMA_SUSACR059	(DMA_SUSACR59)

/** \brief  1C18, DMA Suspend Acknowledge Register */
#define DMA_SUSACR6 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C18u)

/** Alias (User Manual Name) for DMA_SUSACR6.
* To use register names with standard convension, please use DMA_SUSACR6.
*/
#define	DMA_SUSACR006	(DMA_SUSACR6)

/** \brief  1CF0, DMA Suspend Acknowledge Register */
#define DMA_SUSACR60 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CF0u)

/** Alias (User Manual Name) for DMA_SUSACR60.
* To use register names with standard convension, please use DMA_SUSACR60.
*/
#define	DMA_SUSACR060	(DMA_SUSACR60)

/** \brief  1CF4, DMA Suspend Acknowledge Register */
#define DMA_SUSACR61 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CF4u)

/** Alias (User Manual Name) for DMA_SUSACR61.
* To use register names with standard convension, please use DMA_SUSACR61.
*/
#define	DMA_SUSACR061	(DMA_SUSACR61)

/** \brief  1CF8, DMA Suspend Acknowledge Register */
#define DMA_SUSACR62 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CF8u)

/** Alias (User Manual Name) for DMA_SUSACR62.
* To use register names with standard convension, please use DMA_SUSACR62.
*/
#define	DMA_SUSACR062	(DMA_SUSACR62)

/** \brief  1CFC, DMA Suspend Acknowledge Register */
#define DMA_SUSACR63 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011CFCu)

/** Alias (User Manual Name) for DMA_SUSACR63.
* To use register names with standard convension, please use DMA_SUSACR63.
*/
#define	DMA_SUSACR063	(DMA_SUSACR63)

/** \brief  1D00, DMA Suspend Acknowledge Register */
#define DMA_SUSACR64 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D00u)

/** Alias (User Manual Name) for DMA_SUSACR64.
* To use register names with standard convension, please use DMA_SUSACR64.
*/
#define	DMA_SUSACR064	(DMA_SUSACR64)

/** \brief  1D04, DMA Suspend Acknowledge Register */
#define DMA_SUSACR65 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D04u)

/** Alias (User Manual Name) for DMA_SUSACR65.
* To use register names with standard convension, please use DMA_SUSACR65.
*/
#define	DMA_SUSACR065	(DMA_SUSACR65)

/** \brief  1D08, DMA Suspend Acknowledge Register */
#define DMA_SUSACR66 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D08u)

/** Alias (User Manual Name) for DMA_SUSACR66.
* To use register names with standard convension, please use DMA_SUSACR66.
*/
#define	DMA_SUSACR066	(DMA_SUSACR66)

/** \brief  1D0C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR67 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D0Cu)

/** Alias (User Manual Name) for DMA_SUSACR67.
* To use register names with standard convension, please use DMA_SUSACR67.
*/
#define	DMA_SUSACR067	(DMA_SUSACR67)

/** \brief  1D10, DMA Suspend Acknowledge Register */
#define DMA_SUSACR68 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D10u)

/** Alias (User Manual Name) for DMA_SUSACR68.
* To use register names with standard convension, please use DMA_SUSACR68.
*/
#define	DMA_SUSACR068	(DMA_SUSACR68)

/** \brief  1D14, DMA Suspend Acknowledge Register */
#define DMA_SUSACR69 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D14u)

/** Alias (User Manual Name) for DMA_SUSACR69.
* To use register names with standard convension, please use DMA_SUSACR69.
*/
#define	DMA_SUSACR069	(DMA_SUSACR69)

/** \brief  1C1C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR7 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C1Cu)

/** Alias (User Manual Name) for DMA_SUSACR7.
* To use register names with standard convension, please use DMA_SUSACR7.
*/
#define	DMA_SUSACR007	(DMA_SUSACR7)

/** \brief  1D18, DMA Suspend Acknowledge Register */
#define DMA_SUSACR70 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D18u)

/** Alias (User Manual Name) for DMA_SUSACR70.
* To use register names with standard convension, please use DMA_SUSACR70.
*/
#define	DMA_SUSACR070	(DMA_SUSACR70)

/** \brief  1D1C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR71 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D1Cu)

/** Alias (User Manual Name) for DMA_SUSACR71.
* To use register names with standard convension, please use DMA_SUSACR71.
*/
#define	DMA_SUSACR071	(DMA_SUSACR71)

/** \brief  1D20, DMA Suspend Acknowledge Register */
#define DMA_SUSACR72 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D20u)

/** Alias (User Manual Name) for DMA_SUSACR72.
* To use register names with standard convension, please use DMA_SUSACR72.
*/
#define	DMA_SUSACR072	(DMA_SUSACR72)

/** \brief  1D24, DMA Suspend Acknowledge Register */
#define DMA_SUSACR73 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D24u)

/** Alias (User Manual Name) for DMA_SUSACR73.
* To use register names with standard convension, please use DMA_SUSACR73.
*/
#define	DMA_SUSACR073	(DMA_SUSACR73)

/** \brief  1D28, DMA Suspend Acknowledge Register */
#define DMA_SUSACR74 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D28u)

/** Alias (User Manual Name) for DMA_SUSACR74.
* To use register names with standard convension, please use DMA_SUSACR74.
*/
#define	DMA_SUSACR074	(DMA_SUSACR74)

/** \brief  1D2C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR75 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D2Cu)

/** Alias (User Manual Name) for DMA_SUSACR75.
* To use register names with standard convension, please use DMA_SUSACR75.
*/
#define	DMA_SUSACR075	(DMA_SUSACR75)

/** \brief  1D30, DMA Suspend Acknowledge Register */
#define DMA_SUSACR76 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D30u)

/** Alias (User Manual Name) for DMA_SUSACR76.
* To use register names with standard convension, please use DMA_SUSACR76.
*/
#define	DMA_SUSACR076	(DMA_SUSACR76)

/** \brief  1D34, DMA Suspend Acknowledge Register */
#define DMA_SUSACR77 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D34u)

/** Alias (User Manual Name) for DMA_SUSACR77.
* To use register names with standard convension, please use DMA_SUSACR77.
*/
#define	DMA_SUSACR077	(DMA_SUSACR77)

/** \brief  1D38, DMA Suspend Acknowledge Register */
#define DMA_SUSACR78 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D38u)

/** Alias (User Manual Name) for DMA_SUSACR78.
* To use register names with standard convension, please use DMA_SUSACR78.
*/
#define	DMA_SUSACR078	(DMA_SUSACR78)

/** \brief  1D3C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR79 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D3Cu)

/** Alias (User Manual Name) for DMA_SUSACR79.
* To use register names with standard convension, please use DMA_SUSACR79.
*/
#define	DMA_SUSACR079	(DMA_SUSACR79)

/** \brief  1C20, DMA Suspend Acknowledge Register */
#define DMA_SUSACR8 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C20u)

/** Alias (User Manual Name) for DMA_SUSACR8.
* To use register names with standard convension, please use DMA_SUSACR8.
*/
#define	DMA_SUSACR008	(DMA_SUSACR8)

/** \brief  1D40, DMA Suspend Acknowledge Register */
#define DMA_SUSACR80 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D40u)

/** Alias (User Manual Name) for DMA_SUSACR80.
* To use register names with standard convension, please use DMA_SUSACR80.
*/
#define	DMA_SUSACR080	(DMA_SUSACR80)

/** \brief  1D44, DMA Suspend Acknowledge Register */
#define DMA_SUSACR81 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D44u)

/** Alias (User Manual Name) for DMA_SUSACR81.
* To use register names with standard convension, please use DMA_SUSACR81.
*/
#define	DMA_SUSACR081	(DMA_SUSACR81)

/** \brief  1D48, DMA Suspend Acknowledge Register */
#define DMA_SUSACR82 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D48u)

/** Alias (User Manual Name) for DMA_SUSACR82.
* To use register names with standard convension, please use DMA_SUSACR82.
*/
#define	DMA_SUSACR082	(DMA_SUSACR82)

/** \brief  1D4C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR83 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D4Cu)

/** Alias (User Manual Name) for DMA_SUSACR83.
* To use register names with standard convension, please use DMA_SUSACR83.
*/
#define	DMA_SUSACR083	(DMA_SUSACR83)

/** \brief  1D50, DMA Suspend Acknowledge Register */
#define DMA_SUSACR84 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D50u)

/** Alias (User Manual Name) for DMA_SUSACR84.
* To use register names with standard convension, please use DMA_SUSACR84.
*/
#define	DMA_SUSACR084	(DMA_SUSACR84)

/** \brief  1D54, DMA Suspend Acknowledge Register */
#define DMA_SUSACR85 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D54u)

/** Alias (User Manual Name) for DMA_SUSACR85.
* To use register names with standard convension, please use DMA_SUSACR85.
*/
#define	DMA_SUSACR085	(DMA_SUSACR85)

/** \brief  1D58, DMA Suspend Acknowledge Register */
#define DMA_SUSACR86 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D58u)

/** Alias (User Manual Name) for DMA_SUSACR86.
* To use register names with standard convension, please use DMA_SUSACR86.
*/
#define	DMA_SUSACR086	(DMA_SUSACR86)

/** \brief  1D5C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR87 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D5Cu)

/** Alias (User Manual Name) for DMA_SUSACR87.
* To use register names with standard convension, please use DMA_SUSACR87.
*/
#define	DMA_SUSACR087	(DMA_SUSACR87)

/** \brief  1D60, DMA Suspend Acknowledge Register */
#define DMA_SUSACR88 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D60u)

/** Alias (User Manual Name) for DMA_SUSACR88.
* To use register names with standard convension, please use DMA_SUSACR88.
*/
#define	DMA_SUSACR088	(DMA_SUSACR88)

/** \brief  1D64, DMA Suspend Acknowledge Register */
#define DMA_SUSACR89 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D64u)

/** Alias (User Manual Name) for DMA_SUSACR89.
* To use register names with standard convension, please use DMA_SUSACR89.
*/
#define	DMA_SUSACR089	(DMA_SUSACR89)

/** \brief  1C24, DMA Suspend Acknowledge Register */
#define DMA_SUSACR9 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011C24u)

/** Alias (User Manual Name) for DMA_SUSACR9.
* To use register names with standard convension, please use DMA_SUSACR9.
*/
#define	DMA_SUSACR009	(DMA_SUSACR9)

/** \brief  1D68, DMA Suspend Acknowledge Register */
#define DMA_SUSACR90 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D68u)

/** Alias (User Manual Name) for DMA_SUSACR90.
* To use register names with standard convension, please use DMA_SUSACR90.
*/
#define	DMA_SUSACR090	(DMA_SUSACR90)

/** \brief  1D6C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR91 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D6Cu)

/** Alias (User Manual Name) for DMA_SUSACR91.
* To use register names with standard convension, please use DMA_SUSACR91.
*/
#define	DMA_SUSACR091	(DMA_SUSACR91)

/** \brief  1D70, DMA Suspend Acknowledge Register */
#define DMA_SUSACR92 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D70u)

/** Alias (User Manual Name) for DMA_SUSACR92.
* To use register names with standard convension, please use DMA_SUSACR92.
*/
#define	DMA_SUSACR092	(DMA_SUSACR92)

/** \brief  1D74, DMA Suspend Acknowledge Register */
#define DMA_SUSACR93 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D74u)

/** Alias (User Manual Name) for DMA_SUSACR93.
* To use register names with standard convension, please use DMA_SUSACR93.
*/
#define	DMA_SUSACR093	(DMA_SUSACR93)

/** \brief  1D78, DMA Suspend Acknowledge Register */
#define DMA_SUSACR94 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D78u)

/** Alias (User Manual Name) for DMA_SUSACR94.
* To use register names with standard convension, please use DMA_SUSACR94.
*/
#define	DMA_SUSACR094	(DMA_SUSACR94)

/** \brief  1D7C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR95 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D7Cu)

/** Alias (User Manual Name) for DMA_SUSACR95.
* To use register names with standard convension, please use DMA_SUSACR95.
*/
#define	DMA_SUSACR095	(DMA_SUSACR95)

/** \brief  1D80, DMA Suspend Acknowledge Register */
#define DMA_SUSACR96 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D80u)

/** Alias (User Manual Name) for DMA_SUSACR96.
* To use register names with standard convension, please use DMA_SUSACR96.
*/
#define	DMA_SUSACR096	(DMA_SUSACR96)

/** \brief  1D84, DMA Suspend Acknowledge Register */
#define DMA_SUSACR97 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D84u)

/** Alias (User Manual Name) for DMA_SUSACR97.
* To use register names with standard convension, please use DMA_SUSACR97.
*/
#define	DMA_SUSACR097	(DMA_SUSACR97)

/** \brief  1D88, DMA Suspend Acknowledge Register */
#define DMA_SUSACR98 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D88u)

/** Alias (User Manual Name) for DMA_SUSACR98.
* To use register names with standard convension, please use DMA_SUSACR98.
*/
#define	DMA_SUSACR098	(DMA_SUSACR98)

/** \brief  1D8C, DMA Suspend Acknowledge Register */
#define DMA_SUSACR99 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSACR*)0xF0011D8Cu)

/** Alias (User Manual Name) for DMA_SUSACR99.
* To use register names with standard convension, please use DMA_SUSACR99.
*/
#define	DMA_SUSACR099	(DMA_SUSACR99)

/** \brief  1A00, DMA Suspend Enable Register */
#define DMA_SUSENR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A00u)

/** Alias (User Manual Name) for DMA_SUSENR0.
* To use register names with standard convension, please use DMA_SUSENR0.
*/
#define	DMA_SUSENR000	(DMA_SUSENR0)

/** \brief  1A04, DMA Suspend Enable Register */
#define DMA_SUSENR1 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A04u)

/** Alias (User Manual Name) for DMA_SUSENR1.
* To use register names with standard convension, please use DMA_SUSENR1.
*/
#define	DMA_SUSENR001	(DMA_SUSENR1)

/** \brief  1A28, DMA Suspend Enable Register */
#define DMA_SUSENR10 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A28u)

/** Alias (User Manual Name) for DMA_SUSENR10.
* To use register names with standard convension, please use DMA_SUSENR10.
*/
#define	DMA_SUSENR010	(DMA_SUSENR10)

/** \brief  1B90, DMA Suspend Enable Register */
#define DMA_SUSENR100 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B90u)

/** \brief  1B94, DMA Suspend Enable Register */
#define DMA_SUSENR101 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B94u)

/** \brief  1B98, DMA Suspend Enable Register */
#define DMA_SUSENR102 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B98u)

/** \brief  1B9C, DMA Suspend Enable Register */
#define DMA_SUSENR103 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B9Cu)

/** \brief  1BA0, DMA Suspend Enable Register */
#define DMA_SUSENR104 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BA0u)

/** \brief  1BA4, DMA Suspend Enable Register */
#define DMA_SUSENR105 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BA4u)

/** \brief  1BA8, DMA Suspend Enable Register */
#define DMA_SUSENR106 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BA8u)

/** \brief  1BAC, DMA Suspend Enable Register */
#define DMA_SUSENR107 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BACu)

/** \brief  1BB0, DMA Suspend Enable Register */
#define DMA_SUSENR108 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BB0u)

/** \brief  1BB4, DMA Suspend Enable Register */
#define DMA_SUSENR109 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BB4u)

/** \brief  1A2C, DMA Suspend Enable Register */
#define DMA_SUSENR11 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A2Cu)

/** Alias (User Manual Name) for DMA_SUSENR11.
* To use register names with standard convension, please use DMA_SUSENR11.
*/
#define	DMA_SUSENR011	(DMA_SUSENR11)

/** \brief  1BB8, DMA Suspend Enable Register */
#define DMA_SUSENR110 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BB8u)

/** \brief  1BBC, DMA Suspend Enable Register */
#define DMA_SUSENR111 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BBCu)

/** \brief  1BC0, DMA Suspend Enable Register */
#define DMA_SUSENR112 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BC0u)

/** \brief  1BC4, DMA Suspend Enable Register */
#define DMA_SUSENR113 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BC4u)

/** \brief  1BC8, DMA Suspend Enable Register */
#define DMA_SUSENR114 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BC8u)

/** \brief  1BCC, DMA Suspend Enable Register */
#define DMA_SUSENR115 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BCCu)

/** \brief  1BD0, DMA Suspend Enable Register */
#define DMA_SUSENR116 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BD0u)

/** \brief  1BD4, DMA Suspend Enable Register */
#define DMA_SUSENR117 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BD4u)

/** \brief  1BD8, DMA Suspend Enable Register */
#define DMA_SUSENR118 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BD8u)

/** \brief  1BDC, DMA Suspend Enable Register */
#define DMA_SUSENR119 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BDCu)

/** \brief  1A30, DMA Suspend Enable Register */
#define DMA_SUSENR12 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A30u)

/** Alias (User Manual Name) for DMA_SUSENR12.
* To use register names with standard convension, please use DMA_SUSENR12.
*/
#define	DMA_SUSENR012	(DMA_SUSENR12)

/** \brief  1BE0, DMA Suspend Enable Register */
#define DMA_SUSENR120 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BE0u)

/** \brief  1BE4, DMA Suspend Enable Register */
#define DMA_SUSENR121 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BE4u)

/** \brief  1BE8, DMA Suspend Enable Register */
#define DMA_SUSENR122 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BE8u)

/** \brief  1BEC, DMA Suspend Enable Register */
#define DMA_SUSENR123 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BECu)

/** \brief  1BF0, DMA Suspend Enable Register */
#define DMA_SUSENR124 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BF0u)

/** \brief  1BF4, DMA Suspend Enable Register */
#define DMA_SUSENR125 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BF4u)

/** \brief  1BF8, DMA Suspend Enable Register */
#define DMA_SUSENR126 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BF8u)

/** \brief  1BFC, DMA Suspend Enable Register */
#define DMA_SUSENR127 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011BFCu)

/** \brief  1A34, DMA Suspend Enable Register */
#define DMA_SUSENR13 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A34u)

/** Alias (User Manual Name) for DMA_SUSENR13.
* To use register names with standard convension, please use DMA_SUSENR13.
*/
#define	DMA_SUSENR013	(DMA_SUSENR13)

/** \brief  1A38, DMA Suspend Enable Register */
#define DMA_SUSENR14 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A38u)

/** Alias (User Manual Name) for DMA_SUSENR14.
* To use register names with standard convension, please use DMA_SUSENR14.
*/
#define	DMA_SUSENR014	(DMA_SUSENR14)

/** \brief  1A3C, DMA Suspend Enable Register */
#define DMA_SUSENR15 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A3Cu)

/** Alias (User Manual Name) for DMA_SUSENR15.
* To use register names with standard convension, please use DMA_SUSENR15.
*/
#define	DMA_SUSENR015	(DMA_SUSENR15)

/** \brief  1A40, DMA Suspend Enable Register */
#define DMA_SUSENR16 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A40u)

/** Alias (User Manual Name) for DMA_SUSENR16.
* To use register names with standard convension, please use DMA_SUSENR16.
*/
#define	DMA_SUSENR016	(DMA_SUSENR16)

/** \brief  1A44, DMA Suspend Enable Register */
#define DMA_SUSENR17 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A44u)

/** Alias (User Manual Name) for DMA_SUSENR17.
* To use register names with standard convension, please use DMA_SUSENR17.
*/
#define	DMA_SUSENR017	(DMA_SUSENR17)

/** \brief  1A48, DMA Suspend Enable Register */
#define DMA_SUSENR18 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A48u)

/** Alias (User Manual Name) for DMA_SUSENR18.
* To use register names with standard convension, please use DMA_SUSENR18.
*/
#define	DMA_SUSENR018	(DMA_SUSENR18)

/** \brief  1A4C, DMA Suspend Enable Register */
#define DMA_SUSENR19 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A4Cu)

/** Alias (User Manual Name) for DMA_SUSENR19.
* To use register names with standard convension, please use DMA_SUSENR19.
*/
#define	DMA_SUSENR019	(DMA_SUSENR19)

/** \brief  1A08, DMA Suspend Enable Register */
#define DMA_SUSENR2 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A08u)

/** Alias (User Manual Name) for DMA_SUSENR2.
* To use register names with standard convension, please use DMA_SUSENR2.
*/
#define	DMA_SUSENR002	(DMA_SUSENR2)

/** \brief  1A50, DMA Suspend Enable Register */
#define DMA_SUSENR20 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A50u)

/** Alias (User Manual Name) for DMA_SUSENR20.
* To use register names with standard convension, please use DMA_SUSENR20.
*/
#define	DMA_SUSENR020	(DMA_SUSENR20)

/** \brief  1A54, DMA Suspend Enable Register */
#define DMA_SUSENR21 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A54u)

/** Alias (User Manual Name) for DMA_SUSENR21.
* To use register names with standard convension, please use DMA_SUSENR21.
*/
#define	DMA_SUSENR021	(DMA_SUSENR21)

/** \brief  1A58, DMA Suspend Enable Register */
#define DMA_SUSENR22 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A58u)

/** Alias (User Manual Name) for DMA_SUSENR22.
* To use register names with standard convension, please use DMA_SUSENR22.
*/
#define	DMA_SUSENR022	(DMA_SUSENR22)

/** \brief  1A5C, DMA Suspend Enable Register */
#define DMA_SUSENR23 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A5Cu)

/** Alias (User Manual Name) for DMA_SUSENR23.
* To use register names with standard convension, please use DMA_SUSENR23.
*/
#define	DMA_SUSENR023	(DMA_SUSENR23)

/** \brief  1A60, DMA Suspend Enable Register */
#define DMA_SUSENR24 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A60u)

/** Alias (User Manual Name) for DMA_SUSENR24.
* To use register names with standard convension, please use DMA_SUSENR24.
*/
#define	DMA_SUSENR024	(DMA_SUSENR24)

/** \brief  1A64, DMA Suspend Enable Register */
#define DMA_SUSENR25 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A64u)

/** Alias (User Manual Name) for DMA_SUSENR25.
* To use register names with standard convension, please use DMA_SUSENR25.
*/
#define	DMA_SUSENR025	(DMA_SUSENR25)

/** \brief  1A68, DMA Suspend Enable Register */
#define DMA_SUSENR26 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A68u)

/** Alias (User Manual Name) for DMA_SUSENR26.
* To use register names with standard convension, please use DMA_SUSENR26.
*/
#define	DMA_SUSENR026	(DMA_SUSENR26)

/** \brief  1A6C, DMA Suspend Enable Register */
#define DMA_SUSENR27 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A6Cu)

/** Alias (User Manual Name) for DMA_SUSENR27.
* To use register names with standard convension, please use DMA_SUSENR27.
*/
#define	DMA_SUSENR027	(DMA_SUSENR27)

/** \brief  1A70, DMA Suspend Enable Register */
#define DMA_SUSENR28 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A70u)

/** Alias (User Manual Name) for DMA_SUSENR28.
* To use register names with standard convension, please use DMA_SUSENR28.
*/
#define	DMA_SUSENR028	(DMA_SUSENR28)

/** \brief  1A74, DMA Suspend Enable Register */
#define DMA_SUSENR29 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A74u)

/** Alias (User Manual Name) for DMA_SUSENR29.
* To use register names with standard convension, please use DMA_SUSENR29.
*/
#define	DMA_SUSENR029	(DMA_SUSENR29)

/** \brief  1A0C, DMA Suspend Enable Register */
#define DMA_SUSENR3 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A0Cu)

/** Alias (User Manual Name) for DMA_SUSENR3.
* To use register names with standard convension, please use DMA_SUSENR3.
*/
#define	DMA_SUSENR003	(DMA_SUSENR3)

/** \brief  1A78, DMA Suspend Enable Register */
#define DMA_SUSENR30 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A78u)

/** Alias (User Manual Name) for DMA_SUSENR30.
* To use register names with standard convension, please use DMA_SUSENR30.
*/
#define	DMA_SUSENR030	(DMA_SUSENR30)

/** \brief  1A7C, DMA Suspend Enable Register */
#define DMA_SUSENR31 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A7Cu)

/** Alias (User Manual Name) for DMA_SUSENR31.
* To use register names with standard convension, please use DMA_SUSENR31.
*/
#define	DMA_SUSENR031	(DMA_SUSENR31)

/** \brief  1A80, DMA Suspend Enable Register */
#define DMA_SUSENR32 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A80u)

/** Alias (User Manual Name) for DMA_SUSENR32.
* To use register names with standard convension, please use DMA_SUSENR32.
*/
#define	DMA_SUSENR032	(DMA_SUSENR32)

/** \brief  1A84, DMA Suspend Enable Register */
#define DMA_SUSENR33 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A84u)

/** Alias (User Manual Name) for DMA_SUSENR33.
* To use register names with standard convension, please use DMA_SUSENR33.
*/
#define	DMA_SUSENR033	(DMA_SUSENR33)

/** \brief  1A88, DMA Suspend Enable Register */
#define DMA_SUSENR34 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A88u)

/** Alias (User Manual Name) for DMA_SUSENR34.
* To use register names with standard convension, please use DMA_SUSENR34.
*/
#define	DMA_SUSENR034	(DMA_SUSENR34)

/** \brief  1A8C, DMA Suspend Enable Register */
#define DMA_SUSENR35 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A8Cu)

/** Alias (User Manual Name) for DMA_SUSENR35.
* To use register names with standard convension, please use DMA_SUSENR35.
*/
#define	DMA_SUSENR035	(DMA_SUSENR35)

/** \brief  1A90, DMA Suspend Enable Register */
#define DMA_SUSENR36 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A90u)

/** Alias (User Manual Name) for DMA_SUSENR36.
* To use register names with standard convension, please use DMA_SUSENR36.
*/
#define	DMA_SUSENR036	(DMA_SUSENR36)

/** \brief  1A94, DMA Suspend Enable Register */
#define DMA_SUSENR37 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A94u)

/** Alias (User Manual Name) for DMA_SUSENR37.
* To use register names with standard convension, please use DMA_SUSENR37.
*/
#define	DMA_SUSENR037	(DMA_SUSENR37)

/** \brief  1A98, DMA Suspend Enable Register */
#define DMA_SUSENR38 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A98u)

/** Alias (User Manual Name) for DMA_SUSENR38.
* To use register names with standard convension, please use DMA_SUSENR38.
*/
#define	DMA_SUSENR038	(DMA_SUSENR38)

/** \brief  1A9C, DMA Suspend Enable Register */
#define DMA_SUSENR39 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A9Cu)

/** Alias (User Manual Name) for DMA_SUSENR39.
* To use register names with standard convension, please use DMA_SUSENR39.
*/
#define	DMA_SUSENR039	(DMA_SUSENR39)

/** \brief  1A10, DMA Suspend Enable Register */
#define DMA_SUSENR4 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A10u)

/** Alias (User Manual Name) for DMA_SUSENR4.
* To use register names with standard convension, please use DMA_SUSENR4.
*/
#define	DMA_SUSENR004	(DMA_SUSENR4)

/** \brief  1AA0, DMA Suspend Enable Register */
#define DMA_SUSENR40 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AA0u)

/** Alias (User Manual Name) for DMA_SUSENR40.
* To use register names with standard convension, please use DMA_SUSENR40.
*/
#define	DMA_SUSENR040	(DMA_SUSENR40)

/** \brief  1AA4, DMA Suspend Enable Register */
#define DMA_SUSENR41 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AA4u)

/** Alias (User Manual Name) for DMA_SUSENR41.
* To use register names with standard convension, please use DMA_SUSENR41.
*/
#define	DMA_SUSENR041	(DMA_SUSENR41)

/** \brief  1AA8, DMA Suspend Enable Register */
#define DMA_SUSENR42 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AA8u)

/** Alias (User Manual Name) for DMA_SUSENR42.
* To use register names with standard convension, please use DMA_SUSENR42.
*/
#define	DMA_SUSENR042	(DMA_SUSENR42)

/** \brief  1AAC, DMA Suspend Enable Register */
#define DMA_SUSENR43 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AACu)

/** Alias (User Manual Name) for DMA_SUSENR43.
* To use register names with standard convension, please use DMA_SUSENR43.
*/
#define	DMA_SUSENR043	(DMA_SUSENR43)

/** \brief  1AB0, DMA Suspend Enable Register */
#define DMA_SUSENR44 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AB0u)

/** Alias (User Manual Name) for DMA_SUSENR44.
* To use register names with standard convension, please use DMA_SUSENR44.
*/
#define	DMA_SUSENR044	(DMA_SUSENR44)

/** \brief  1AB4, DMA Suspend Enable Register */
#define DMA_SUSENR45 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AB4u)

/** Alias (User Manual Name) for DMA_SUSENR45.
* To use register names with standard convension, please use DMA_SUSENR45.
*/
#define	DMA_SUSENR045	(DMA_SUSENR45)

/** \brief  1AB8, DMA Suspend Enable Register */
#define DMA_SUSENR46 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AB8u)

/** Alias (User Manual Name) for DMA_SUSENR46.
* To use register names with standard convension, please use DMA_SUSENR46.
*/
#define	DMA_SUSENR046	(DMA_SUSENR46)

/** \brief  1ABC, DMA Suspend Enable Register */
#define DMA_SUSENR47 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011ABCu)

/** Alias (User Manual Name) for DMA_SUSENR47.
* To use register names with standard convension, please use DMA_SUSENR47.
*/
#define	DMA_SUSENR047	(DMA_SUSENR47)

/** \brief  1AC0, DMA Suspend Enable Register */
#define DMA_SUSENR48 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AC0u)

/** Alias (User Manual Name) for DMA_SUSENR48.
* To use register names with standard convension, please use DMA_SUSENR48.
*/
#define	DMA_SUSENR048	(DMA_SUSENR48)

/** \brief  1AC4, DMA Suspend Enable Register */
#define DMA_SUSENR49 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AC4u)

/** Alias (User Manual Name) for DMA_SUSENR49.
* To use register names with standard convension, please use DMA_SUSENR49.
*/
#define	DMA_SUSENR049	(DMA_SUSENR49)

/** \brief  1A14, DMA Suspend Enable Register */
#define DMA_SUSENR5 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A14u)

/** Alias (User Manual Name) for DMA_SUSENR5.
* To use register names with standard convension, please use DMA_SUSENR5.
*/
#define	DMA_SUSENR005	(DMA_SUSENR5)

/** \brief  1AC8, DMA Suspend Enable Register */
#define DMA_SUSENR50 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AC8u)

/** Alias (User Manual Name) for DMA_SUSENR50.
* To use register names with standard convension, please use DMA_SUSENR50.
*/
#define	DMA_SUSENR050	(DMA_SUSENR50)

/** \brief  1ACC, DMA Suspend Enable Register */
#define DMA_SUSENR51 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011ACCu)

/** Alias (User Manual Name) for DMA_SUSENR51.
* To use register names with standard convension, please use DMA_SUSENR51.
*/
#define	DMA_SUSENR051	(DMA_SUSENR51)

/** \brief  1AD0, DMA Suspend Enable Register */
#define DMA_SUSENR52 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AD0u)

/** Alias (User Manual Name) for DMA_SUSENR52.
* To use register names with standard convension, please use DMA_SUSENR52.
*/
#define	DMA_SUSENR052	(DMA_SUSENR52)

/** \brief  1AD4, DMA Suspend Enable Register */
#define DMA_SUSENR53 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AD4u)

/** Alias (User Manual Name) for DMA_SUSENR53.
* To use register names with standard convension, please use DMA_SUSENR53.
*/
#define	DMA_SUSENR053	(DMA_SUSENR53)

/** \brief  1AD8, DMA Suspend Enable Register */
#define DMA_SUSENR54 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AD8u)

/** Alias (User Manual Name) for DMA_SUSENR54.
* To use register names with standard convension, please use DMA_SUSENR54.
*/
#define	DMA_SUSENR054	(DMA_SUSENR54)

/** \brief  1ADC, DMA Suspend Enable Register */
#define DMA_SUSENR55 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011ADCu)

/** Alias (User Manual Name) for DMA_SUSENR55.
* To use register names with standard convension, please use DMA_SUSENR55.
*/
#define	DMA_SUSENR055	(DMA_SUSENR55)

/** \brief  1AE0, DMA Suspend Enable Register */
#define DMA_SUSENR56 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AE0u)

/** Alias (User Manual Name) for DMA_SUSENR56.
* To use register names with standard convension, please use DMA_SUSENR56.
*/
#define	DMA_SUSENR056	(DMA_SUSENR56)

/** \brief  1AE4, DMA Suspend Enable Register */
#define DMA_SUSENR57 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AE4u)

/** Alias (User Manual Name) for DMA_SUSENR57.
* To use register names with standard convension, please use DMA_SUSENR57.
*/
#define	DMA_SUSENR057	(DMA_SUSENR57)

/** \brief  1AE8, DMA Suspend Enable Register */
#define DMA_SUSENR58 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AE8u)

/** Alias (User Manual Name) for DMA_SUSENR58.
* To use register names with standard convension, please use DMA_SUSENR58.
*/
#define	DMA_SUSENR058	(DMA_SUSENR58)

/** \brief  1AEC, DMA Suspend Enable Register */
#define DMA_SUSENR59 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AECu)

/** Alias (User Manual Name) for DMA_SUSENR59.
* To use register names with standard convension, please use DMA_SUSENR59.
*/
#define	DMA_SUSENR059	(DMA_SUSENR59)

/** \brief  1A18, DMA Suspend Enable Register */
#define DMA_SUSENR6 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A18u)

/** Alias (User Manual Name) for DMA_SUSENR6.
* To use register names with standard convension, please use DMA_SUSENR6.
*/
#define	DMA_SUSENR006	(DMA_SUSENR6)

/** \brief  1AF0, DMA Suspend Enable Register */
#define DMA_SUSENR60 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AF0u)

/** Alias (User Manual Name) for DMA_SUSENR60.
* To use register names with standard convension, please use DMA_SUSENR60.
*/
#define	DMA_SUSENR060	(DMA_SUSENR60)

/** \brief  1AF4, DMA Suspend Enable Register */
#define DMA_SUSENR61 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AF4u)

/** Alias (User Manual Name) for DMA_SUSENR61.
* To use register names with standard convension, please use DMA_SUSENR61.
*/
#define	DMA_SUSENR061	(DMA_SUSENR61)

/** \brief  1AF8, DMA Suspend Enable Register */
#define DMA_SUSENR62 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AF8u)

/** Alias (User Manual Name) for DMA_SUSENR62.
* To use register names with standard convension, please use DMA_SUSENR62.
*/
#define	DMA_SUSENR062	(DMA_SUSENR62)

/** \brief  1AFC, DMA Suspend Enable Register */
#define DMA_SUSENR63 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011AFCu)

/** Alias (User Manual Name) for DMA_SUSENR63.
* To use register names with standard convension, please use DMA_SUSENR63.
*/
#define	DMA_SUSENR063	(DMA_SUSENR63)

/** \brief  1B00, DMA Suspend Enable Register */
#define DMA_SUSENR64 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B00u)

/** Alias (User Manual Name) for DMA_SUSENR64.
* To use register names with standard convension, please use DMA_SUSENR64.
*/
#define	DMA_SUSENR064	(DMA_SUSENR64)

/** \brief  1B04, DMA Suspend Enable Register */
#define DMA_SUSENR65 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B04u)

/** Alias (User Manual Name) for DMA_SUSENR65.
* To use register names with standard convension, please use DMA_SUSENR65.
*/
#define	DMA_SUSENR065	(DMA_SUSENR65)

/** \brief  1B08, DMA Suspend Enable Register */
#define DMA_SUSENR66 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B08u)

/** Alias (User Manual Name) for DMA_SUSENR66.
* To use register names with standard convension, please use DMA_SUSENR66.
*/
#define	DMA_SUSENR066	(DMA_SUSENR66)

/** \brief  1B0C, DMA Suspend Enable Register */
#define DMA_SUSENR67 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B0Cu)

/** Alias (User Manual Name) for DMA_SUSENR67.
* To use register names with standard convension, please use DMA_SUSENR67.
*/
#define	DMA_SUSENR067	(DMA_SUSENR67)

/** \brief  1B10, DMA Suspend Enable Register */
#define DMA_SUSENR68 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B10u)

/** Alias (User Manual Name) for DMA_SUSENR68.
* To use register names with standard convension, please use DMA_SUSENR68.
*/
#define	DMA_SUSENR068	(DMA_SUSENR68)

/** \brief  1B14, DMA Suspend Enable Register */
#define DMA_SUSENR69 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B14u)

/** Alias (User Manual Name) for DMA_SUSENR69.
* To use register names with standard convension, please use DMA_SUSENR69.
*/
#define	DMA_SUSENR069	(DMA_SUSENR69)

/** \brief  1A1C, DMA Suspend Enable Register */
#define DMA_SUSENR7 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A1Cu)

/** Alias (User Manual Name) for DMA_SUSENR7.
* To use register names with standard convension, please use DMA_SUSENR7.
*/
#define	DMA_SUSENR007	(DMA_SUSENR7)

/** \brief  1B18, DMA Suspend Enable Register */
#define DMA_SUSENR70 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B18u)

/** Alias (User Manual Name) for DMA_SUSENR70.
* To use register names with standard convension, please use DMA_SUSENR70.
*/
#define	DMA_SUSENR070	(DMA_SUSENR70)

/** \brief  1B1C, DMA Suspend Enable Register */
#define DMA_SUSENR71 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B1Cu)

/** Alias (User Manual Name) for DMA_SUSENR71.
* To use register names with standard convension, please use DMA_SUSENR71.
*/
#define	DMA_SUSENR071	(DMA_SUSENR71)

/** \brief  1B20, DMA Suspend Enable Register */
#define DMA_SUSENR72 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B20u)

/** Alias (User Manual Name) for DMA_SUSENR72.
* To use register names with standard convension, please use DMA_SUSENR72.
*/
#define	DMA_SUSENR072	(DMA_SUSENR72)

/** \brief  1B24, DMA Suspend Enable Register */
#define DMA_SUSENR73 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B24u)

/** Alias (User Manual Name) for DMA_SUSENR73.
* To use register names with standard convension, please use DMA_SUSENR73.
*/
#define	DMA_SUSENR073	(DMA_SUSENR73)

/** \brief  1B28, DMA Suspend Enable Register */
#define DMA_SUSENR74 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B28u)

/** Alias (User Manual Name) for DMA_SUSENR74.
* To use register names with standard convension, please use DMA_SUSENR74.
*/
#define	DMA_SUSENR074	(DMA_SUSENR74)

/** \brief  1B2C, DMA Suspend Enable Register */
#define DMA_SUSENR75 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B2Cu)

/** Alias (User Manual Name) for DMA_SUSENR75.
* To use register names with standard convension, please use DMA_SUSENR75.
*/
#define	DMA_SUSENR075	(DMA_SUSENR75)

/** \brief  1B30, DMA Suspend Enable Register */
#define DMA_SUSENR76 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B30u)

/** Alias (User Manual Name) for DMA_SUSENR76.
* To use register names with standard convension, please use DMA_SUSENR76.
*/
#define	DMA_SUSENR076	(DMA_SUSENR76)

/** \brief  1B34, DMA Suspend Enable Register */
#define DMA_SUSENR77 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B34u)

/** Alias (User Manual Name) for DMA_SUSENR77.
* To use register names with standard convension, please use DMA_SUSENR77.
*/
#define	DMA_SUSENR077	(DMA_SUSENR77)

/** \brief  1B38, DMA Suspend Enable Register */
#define DMA_SUSENR78 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B38u)

/** Alias (User Manual Name) for DMA_SUSENR78.
* To use register names with standard convension, please use DMA_SUSENR78.
*/
#define	DMA_SUSENR078	(DMA_SUSENR78)

/** \brief  1B3C, DMA Suspend Enable Register */
#define DMA_SUSENR79 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B3Cu)

/** Alias (User Manual Name) for DMA_SUSENR79.
* To use register names with standard convension, please use DMA_SUSENR79.
*/
#define	DMA_SUSENR079	(DMA_SUSENR79)

/** \brief  1A20, DMA Suspend Enable Register */
#define DMA_SUSENR8 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A20u)

/** Alias (User Manual Name) for DMA_SUSENR8.
* To use register names with standard convension, please use DMA_SUSENR8.
*/
#define	DMA_SUSENR008	(DMA_SUSENR8)

/** \brief  1B40, DMA Suspend Enable Register */
#define DMA_SUSENR80 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B40u)

/** Alias (User Manual Name) for DMA_SUSENR80.
* To use register names with standard convension, please use DMA_SUSENR80.
*/
#define	DMA_SUSENR080	(DMA_SUSENR80)

/** \brief  1B44, DMA Suspend Enable Register */
#define DMA_SUSENR81 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B44u)

/** Alias (User Manual Name) for DMA_SUSENR81.
* To use register names with standard convension, please use DMA_SUSENR81.
*/
#define	DMA_SUSENR081	(DMA_SUSENR81)

/** \brief  1B48, DMA Suspend Enable Register */
#define DMA_SUSENR82 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B48u)

/** Alias (User Manual Name) for DMA_SUSENR82.
* To use register names with standard convension, please use DMA_SUSENR82.
*/
#define	DMA_SUSENR082	(DMA_SUSENR82)

/** \brief  1B4C, DMA Suspend Enable Register */
#define DMA_SUSENR83 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B4Cu)

/** Alias (User Manual Name) for DMA_SUSENR83.
* To use register names with standard convension, please use DMA_SUSENR83.
*/
#define	DMA_SUSENR083	(DMA_SUSENR83)

/** \brief  1B50, DMA Suspend Enable Register */
#define DMA_SUSENR84 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B50u)

/** Alias (User Manual Name) for DMA_SUSENR84.
* To use register names with standard convension, please use DMA_SUSENR84.
*/
#define	DMA_SUSENR084	(DMA_SUSENR84)

/** \brief  1B54, DMA Suspend Enable Register */
#define DMA_SUSENR85 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B54u)

/** Alias (User Manual Name) for DMA_SUSENR85.
* To use register names with standard convension, please use DMA_SUSENR85.
*/
#define	DMA_SUSENR085	(DMA_SUSENR85)

/** \brief  1B58, DMA Suspend Enable Register */
#define DMA_SUSENR86 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B58u)

/** Alias (User Manual Name) for DMA_SUSENR86.
* To use register names with standard convension, please use DMA_SUSENR86.
*/
#define	DMA_SUSENR086	(DMA_SUSENR86)

/** \brief  1B5C, DMA Suspend Enable Register */
#define DMA_SUSENR87 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B5Cu)

/** Alias (User Manual Name) for DMA_SUSENR87.
* To use register names with standard convension, please use DMA_SUSENR87.
*/
#define	DMA_SUSENR087	(DMA_SUSENR87)

/** \brief  1B60, DMA Suspend Enable Register */
#define DMA_SUSENR88 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B60u)

/** Alias (User Manual Name) for DMA_SUSENR88.
* To use register names with standard convension, please use DMA_SUSENR88.
*/
#define	DMA_SUSENR088	(DMA_SUSENR88)

/** \brief  1B64, DMA Suspend Enable Register */
#define DMA_SUSENR89 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B64u)

/** Alias (User Manual Name) for DMA_SUSENR89.
* To use register names with standard convension, please use DMA_SUSENR89.
*/
#define	DMA_SUSENR089	(DMA_SUSENR89)

/** \brief  1A24, DMA Suspend Enable Register */
#define DMA_SUSENR9 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011A24u)

/** Alias (User Manual Name) for DMA_SUSENR9.
* To use register names with standard convension, please use DMA_SUSENR9.
*/
#define	DMA_SUSENR009	(DMA_SUSENR9)

/** \brief  1B68, DMA Suspend Enable Register */
#define DMA_SUSENR90 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B68u)

/** Alias (User Manual Name) for DMA_SUSENR90.
* To use register names with standard convension, please use DMA_SUSENR90.
*/
#define	DMA_SUSENR090	(DMA_SUSENR90)

/** \brief  1B6C, DMA Suspend Enable Register */
#define DMA_SUSENR91 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B6Cu)

/** Alias (User Manual Name) for DMA_SUSENR91.
* To use register names with standard convension, please use DMA_SUSENR91.
*/
#define	DMA_SUSENR091	(DMA_SUSENR91)

/** \brief  1B70, DMA Suspend Enable Register */
#define DMA_SUSENR92 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B70u)

/** Alias (User Manual Name) for DMA_SUSENR92.
* To use register names with standard convension, please use DMA_SUSENR92.
*/
#define	DMA_SUSENR092	(DMA_SUSENR92)

/** \brief  1B74, DMA Suspend Enable Register */
#define DMA_SUSENR93 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B74u)

/** Alias (User Manual Name) for DMA_SUSENR93.
* To use register names with standard convension, please use DMA_SUSENR93.
*/
#define	DMA_SUSENR093	(DMA_SUSENR93)

/** \brief  1B78, DMA Suspend Enable Register */
#define DMA_SUSENR94 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B78u)

/** Alias (User Manual Name) for DMA_SUSENR94.
* To use register names with standard convension, please use DMA_SUSENR94.
*/
#define	DMA_SUSENR094	(DMA_SUSENR94)

/** \brief  1B7C, DMA Suspend Enable Register */
#define DMA_SUSENR95 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B7Cu)

/** Alias (User Manual Name) for DMA_SUSENR95.
* To use register names with standard convension, please use DMA_SUSENR95.
*/
#define	DMA_SUSENR095	(DMA_SUSENR95)

/** \brief  1B80, DMA Suspend Enable Register */
#define DMA_SUSENR96 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B80u)

/** Alias (User Manual Name) for DMA_SUSENR96.
* To use register names with standard convension, please use DMA_SUSENR96.
*/
#define	DMA_SUSENR096	(DMA_SUSENR96)

/** \brief  1B84, DMA Suspend Enable Register */
#define DMA_SUSENR97 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B84u)

/** Alias (User Manual Name) for DMA_SUSENR97.
* To use register names with standard convension, please use DMA_SUSENR97.
*/
#define	DMA_SUSENR097	(DMA_SUSENR97)

/** \brief  1B88, DMA Suspend Enable Register */
#define DMA_SUSENR98 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B88u)

/** Alias (User Manual Name) for DMA_SUSENR98.
* To use register names with standard convension, please use DMA_SUSENR98.
*/
#define	DMA_SUSENR098	(DMA_SUSENR98)

/** \brief  1B8C, DMA Suspend Enable Register */
#define DMA_SUSENR99 /*lint --e(923)*/ (*(volatile Ifx_DMA_SUSENR*)0xF0011B8Cu)

/** Alias (User Manual Name) for DMA_SUSENR99.
* To use register names with standard convension, please use DMA_SUSENR99.
*/
#define	DMA_SUSENR099	(DMA_SUSENR99)

/** \brief  1210, Time Register */
#define DMA_TIME /*lint --e(923)*/ (*(volatile Ifx_DMA_TIME*)0xF0011210u)

/** \brief  1E00, DMA Transaction State Register */
#define DMA_TSR0 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E00u)

/** Alias (User Manual Name) for DMA_TSR0.
* To use register names with standard convension, please use DMA_TSR0.
*/
#define	DMA_TSR000	(DMA_TSR0)

/** \brief  1E04, DMA Transaction State Register */
#define DMA_TSR1 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E04u)

/** Alias (User Manual Name) for DMA_TSR1.
* To use register names with standard convension, please use DMA_TSR1.
*/
#define	DMA_TSR001	(DMA_TSR1)

/** \brief  1E28, DMA Transaction State Register */
#define DMA_TSR10 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E28u)

/** Alias (User Manual Name) for DMA_TSR10.
* To use register names with standard convension, please use DMA_TSR10.
*/
#define	DMA_TSR010	(DMA_TSR10)

/** \brief  1F90, DMA Transaction State Register */
#define DMA_TSR100 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F90u)

/** \brief  1F94, DMA Transaction State Register */
#define DMA_TSR101 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F94u)

/** \brief  1F98, DMA Transaction State Register */
#define DMA_TSR102 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F98u)

/** \brief  1F9C, DMA Transaction State Register */
#define DMA_TSR103 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F9Cu)

/** \brief  1FA0, DMA Transaction State Register */
#define DMA_TSR104 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FA0u)

/** \brief  1FA4, DMA Transaction State Register */
#define DMA_TSR105 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FA4u)

/** \brief  1FA8, DMA Transaction State Register */
#define DMA_TSR106 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FA8u)

/** \brief  1FAC, DMA Transaction State Register */
#define DMA_TSR107 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FACu)

/** \brief  1FB0, DMA Transaction State Register */
#define DMA_TSR108 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FB0u)

/** \brief  1FB4, DMA Transaction State Register */
#define DMA_TSR109 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FB4u)

/** \brief  1E2C, DMA Transaction State Register */
#define DMA_TSR11 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E2Cu)

/** Alias (User Manual Name) for DMA_TSR11.
* To use register names with standard convension, please use DMA_TSR11.
*/
#define	DMA_TSR011	(DMA_TSR11)

/** \brief  1FB8, DMA Transaction State Register */
#define DMA_TSR110 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FB8u)

/** \brief  1FBC, DMA Transaction State Register */
#define DMA_TSR111 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FBCu)

/** \brief  1FC0, DMA Transaction State Register */
#define DMA_TSR112 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FC0u)

/** \brief  1FC4, DMA Transaction State Register */
#define DMA_TSR113 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FC4u)

/** \brief  1FC8, DMA Transaction State Register */
#define DMA_TSR114 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FC8u)

/** \brief  1FCC, DMA Transaction State Register */
#define DMA_TSR115 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FCCu)

/** \brief  1FD0, DMA Transaction State Register */
#define DMA_TSR116 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FD0u)

/** \brief  1FD4, DMA Transaction State Register */
#define DMA_TSR117 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FD4u)

/** \brief  1FD8, DMA Transaction State Register */
#define DMA_TSR118 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FD8u)

/** \brief  1FDC, DMA Transaction State Register */
#define DMA_TSR119 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FDCu)

/** \brief  1E30, DMA Transaction State Register */
#define DMA_TSR12 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E30u)

/** Alias (User Manual Name) for DMA_TSR12.
* To use register names with standard convension, please use DMA_TSR12.
*/
#define	DMA_TSR012	(DMA_TSR12)

/** \brief  1FE0, DMA Transaction State Register */
#define DMA_TSR120 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FE0u)

/** \brief  1FE4, DMA Transaction State Register */
#define DMA_TSR121 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FE4u)

/** \brief  1FE8, DMA Transaction State Register */
#define DMA_TSR122 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FE8u)

/** \brief  1FEC, DMA Transaction State Register */
#define DMA_TSR123 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FECu)

/** \brief  1FF0, DMA Transaction State Register */
#define DMA_TSR124 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FF0u)

/** \brief  1FF4, DMA Transaction State Register */
#define DMA_TSR125 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FF4u)

/** \brief  1FF8, DMA Transaction State Register */
#define DMA_TSR126 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FF8u)

/** \brief  1FFC, DMA Transaction State Register */
#define DMA_TSR127 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011FFCu)

/** \brief  1E34, DMA Transaction State Register */
#define DMA_TSR13 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E34u)

/** Alias (User Manual Name) for DMA_TSR13.
* To use register names with standard convension, please use DMA_TSR13.
*/
#define	DMA_TSR013	(DMA_TSR13)

/** \brief  1E38, DMA Transaction State Register */
#define DMA_TSR14 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E38u)

/** Alias (User Manual Name) for DMA_TSR14.
* To use register names with standard convension, please use DMA_TSR14.
*/
#define	DMA_TSR014	(DMA_TSR14)

/** \brief  1E3C, DMA Transaction State Register */
#define DMA_TSR15 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E3Cu)

/** Alias (User Manual Name) for DMA_TSR15.
* To use register names with standard convension, please use DMA_TSR15.
*/
#define	DMA_TSR015	(DMA_TSR15)

/** \brief  1E40, DMA Transaction State Register */
#define DMA_TSR16 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E40u)

/** Alias (User Manual Name) for DMA_TSR16.
* To use register names with standard convension, please use DMA_TSR16.
*/
#define	DMA_TSR016	(DMA_TSR16)

/** \brief  1E44, DMA Transaction State Register */
#define DMA_TSR17 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E44u)

/** Alias (User Manual Name) for DMA_TSR17.
* To use register names with standard convension, please use DMA_TSR17.
*/
#define	DMA_TSR017	(DMA_TSR17)

/** \brief  1E48, DMA Transaction State Register */
#define DMA_TSR18 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E48u)

/** Alias (User Manual Name) for DMA_TSR18.
* To use register names with standard convension, please use DMA_TSR18.
*/
#define	DMA_TSR018	(DMA_TSR18)

/** \brief  1E4C, DMA Transaction State Register */
#define DMA_TSR19 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E4Cu)

/** Alias (User Manual Name) for DMA_TSR19.
* To use register names with standard convension, please use DMA_TSR19.
*/
#define	DMA_TSR019	(DMA_TSR19)

/** \brief  1E08, DMA Transaction State Register */
#define DMA_TSR2 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E08u)

/** Alias (User Manual Name) for DMA_TSR2.
* To use register names with standard convension, please use DMA_TSR2.
*/
#define	DMA_TSR002	(DMA_TSR2)

/** \brief  1E50, DMA Transaction State Register */
#define DMA_TSR20 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E50u)

/** Alias (User Manual Name) for DMA_TSR20.
* To use register names with standard convension, please use DMA_TSR20.
*/
#define	DMA_TSR020	(DMA_TSR20)

/** \brief  1E54, DMA Transaction State Register */
#define DMA_TSR21 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E54u)

/** Alias (User Manual Name) for DMA_TSR21.
* To use register names with standard convension, please use DMA_TSR21.
*/
#define	DMA_TSR021	(DMA_TSR21)

/** \brief  1E58, DMA Transaction State Register */
#define DMA_TSR22 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E58u)

/** Alias (User Manual Name) for DMA_TSR22.
* To use register names with standard convension, please use DMA_TSR22.
*/
#define	DMA_TSR022	(DMA_TSR22)

/** \brief  1E5C, DMA Transaction State Register */
#define DMA_TSR23 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E5Cu)

/** Alias (User Manual Name) for DMA_TSR23.
* To use register names with standard convension, please use DMA_TSR23.
*/
#define	DMA_TSR023	(DMA_TSR23)

/** \brief  1E60, DMA Transaction State Register */
#define DMA_TSR24 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E60u)

/** Alias (User Manual Name) for DMA_TSR24.
* To use register names with standard convension, please use DMA_TSR24.
*/
#define	DMA_TSR024	(DMA_TSR24)

/** \brief  1E64, DMA Transaction State Register */
#define DMA_TSR25 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E64u)

/** Alias (User Manual Name) for DMA_TSR25.
* To use register names with standard convension, please use DMA_TSR25.
*/
#define	DMA_TSR025	(DMA_TSR25)

/** \brief  1E68, DMA Transaction State Register */
#define DMA_TSR26 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E68u)

/** Alias (User Manual Name) for DMA_TSR26.
* To use register names with standard convension, please use DMA_TSR26.
*/
#define	DMA_TSR026	(DMA_TSR26)

/** \brief  1E6C, DMA Transaction State Register */
#define DMA_TSR27 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E6Cu)

/** Alias (User Manual Name) for DMA_TSR27.
* To use register names with standard convension, please use DMA_TSR27.
*/
#define	DMA_TSR027	(DMA_TSR27)

/** \brief  1E70, DMA Transaction State Register */
#define DMA_TSR28 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E70u)

/** Alias (User Manual Name) for DMA_TSR28.
* To use register names with standard convension, please use DMA_TSR28.
*/
#define	DMA_TSR028	(DMA_TSR28)

/** \brief  1E74, DMA Transaction State Register */
#define DMA_TSR29 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E74u)

/** Alias (User Manual Name) for DMA_TSR29.
* To use register names with standard convension, please use DMA_TSR29.
*/
#define	DMA_TSR029	(DMA_TSR29)

/** \brief  1E0C, DMA Transaction State Register */
#define DMA_TSR3 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E0Cu)

/** Alias (User Manual Name) for DMA_TSR3.
* To use register names with standard convension, please use DMA_TSR3.
*/
#define	DMA_TSR003	(DMA_TSR3)

/** \brief  1E78, DMA Transaction State Register */
#define DMA_TSR30 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E78u)

/** Alias (User Manual Name) for DMA_TSR30.
* To use register names with standard convension, please use DMA_TSR30.
*/
#define	DMA_TSR030	(DMA_TSR30)

/** \brief  1E7C, DMA Transaction State Register */
#define DMA_TSR31 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E7Cu)

/** Alias (User Manual Name) for DMA_TSR31.
* To use register names with standard convension, please use DMA_TSR31.
*/
#define	DMA_TSR031	(DMA_TSR31)

/** \brief  1E80, DMA Transaction State Register */
#define DMA_TSR32 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E80u)

/** Alias (User Manual Name) for DMA_TSR32.
* To use register names with standard convension, please use DMA_TSR32.
*/
#define	DMA_TSR032	(DMA_TSR32)

/** \brief  1E84, DMA Transaction State Register */
#define DMA_TSR33 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E84u)

/** Alias (User Manual Name) for DMA_TSR33.
* To use register names with standard convension, please use DMA_TSR33.
*/
#define	DMA_TSR033	(DMA_TSR33)

/** \brief  1E88, DMA Transaction State Register */
#define DMA_TSR34 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E88u)

/** Alias (User Manual Name) for DMA_TSR34.
* To use register names with standard convension, please use DMA_TSR34.
*/
#define	DMA_TSR034	(DMA_TSR34)

/** \brief  1E8C, DMA Transaction State Register */
#define DMA_TSR35 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E8Cu)

/** Alias (User Manual Name) for DMA_TSR35.
* To use register names with standard convension, please use DMA_TSR35.
*/
#define	DMA_TSR035	(DMA_TSR35)

/** \brief  1E90, DMA Transaction State Register */
#define DMA_TSR36 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E90u)

/** Alias (User Manual Name) for DMA_TSR36.
* To use register names with standard convension, please use DMA_TSR36.
*/
#define	DMA_TSR036	(DMA_TSR36)

/** \brief  1E94, DMA Transaction State Register */
#define DMA_TSR37 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E94u)

/** Alias (User Manual Name) for DMA_TSR37.
* To use register names with standard convension, please use DMA_TSR37.
*/
#define	DMA_TSR037	(DMA_TSR37)

/** \brief  1E98, DMA Transaction State Register */
#define DMA_TSR38 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E98u)

/** Alias (User Manual Name) for DMA_TSR38.
* To use register names with standard convension, please use DMA_TSR38.
*/
#define	DMA_TSR038	(DMA_TSR38)

/** \brief  1E9C, DMA Transaction State Register */
#define DMA_TSR39 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E9Cu)

/** Alias (User Manual Name) for DMA_TSR39.
* To use register names with standard convension, please use DMA_TSR39.
*/
#define	DMA_TSR039	(DMA_TSR39)

/** \brief  1E10, DMA Transaction State Register */
#define DMA_TSR4 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E10u)

/** Alias (User Manual Name) for DMA_TSR4.
* To use register names with standard convension, please use DMA_TSR4.
*/
#define	DMA_TSR004	(DMA_TSR4)

/** \brief  1EA0, DMA Transaction State Register */
#define DMA_TSR40 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EA0u)

/** Alias (User Manual Name) for DMA_TSR40.
* To use register names with standard convension, please use DMA_TSR40.
*/
#define	DMA_TSR040	(DMA_TSR40)

/** \brief  1EA4, DMA Transaction State Register */
#define DMA_TSR41 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EA4u)

/** Alias (User Manual Name) for DMA_TSR41.
* To use register names with standard convension, please use DMA_TSR41.
*/
#define	DMA_TSR041	(DMA_TSR41)

/** \brief  1EA8, DMA Transaction State Register */
#define DMA_TSR42 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EA8u)

/** Alias (User Manual Name) for DMA_TSR42.
* To use register names with standard convension, please use DMA_TSR42.
*/
#define	DMA_TSR042	(DMA_TSR42)

/** \brief  1EAC, DMA Transaction State Register */
#define DMA_TSR43 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EACu)

/** Alias (User Manual Name) for DMA_TSR43.
* To use register names with standard convension, please use DMA_TSR43.
*/
#define	DMA_TSR043	(DMA_TSR43)

/** \brief  1EB0, DMA Transaction State Register */
#define DMA_TSR44 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EB0u)

/** Alias (User Manual Name) for DMA_TSR44.
* To use register names with standard convension, please use DMA_TSR44.
*/
#define	DMA_TSR044	(DMA_TSR44)

/** \brief  1EB4, DMA Transaction State Register */
#define DMA_TSR45 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EB4u)

/** Alias (User Manual Name) for DMA_TSR45.
* To use register names with standard convension, please use DMA_TSR45.
*/
#define	DMA_TSR045	(DMA_TSR45)

/** \brief  1EB8, DMA Transaction State Register */
#define DMA_TSR46 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EB8u)

/** Alias (User Manual Name) for DMA_TSR46.
* To use register names with standard convension, please use DMA_TSR46.
*/
#define	DMA_TSR046	(DMA_TSR46)

/** \brief  1EBC, DMA Transaction State Register */
#define DMA_TSR47 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EBCu)

/** Alias (User Manual Name) for DMA_TSR47.
* To use register names with standard convension, please use DMA_TSR47.
*/
#define	DMA_TSR047	(DMA_TSR47)

/** \brief  1EC0, DMA Transaction State Register */
#define DMA_TSR48 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EC0u)

/** Alias (User Manual Name) for DMA_TSR48.
* To use register names with standard convension, please use DMA_TSR48.
*/
#define	DMA_TSR048	(DMA_TSR48)

/** \brief  1EC4, DMA Transaction State Register */
#define DMA_TSR49 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EC4u)

/** Alias (User Manual Name) for DMA_TSR49.
* To use register names with standard convension, please use DMA_TSR49.
*/
#define	DMA_TSR049	(DMA_TSR49)

/** \brief  1E14, DMA Transaction State Register */
#define DMA_TSR5 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E14u)

/** Alias (User Manual Name) for DMA_TSR5.
* To use register names with standard convension, please use DMA_TSR5.
*/
#define	DMA_TSR005	(DMA_TSR5)

/** \brief  1EC8, DMA Transaction State Register */
#define DMA_TSR50 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EC8u)

/** Alias (User Manual Name) for DMA_TSR50.
* To use register names with standard convension, please use DMA_TSR50.
*/
#define	DMA_TSR050	(DMA_TSR50)

/** \brief  1ECC, DMA Transaction State Register */
#define DMA_TSR51 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011ECCu)

/** Alias (User Manual Name) for DMA_TSR51.
* To use register names with standard convension, please use DMA_TSR51.
*/
#define	DMA_TSR051	(DMA_TSR51)

/** \brief  1ED0, DMA Transaction State Register */
#define DMA_TSR52 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011ED0u)

/** Alias (User Manual Name) for DMA_TSR52.
* To use register names with standard convension, please use DMA_TSR52.
*/
#define	DMA_TSR052	(DMA_TSR52)

/** \brief  1ED4, DMA Transaction State Register */
#define DMA_TSR53 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011ED4u)

/** Alias (User Manual Name) for DMA_TSR53.
* To use register names with standard convension, please use DMA_TSR53.
*/
#define	DMA_TSR053	(DMA_TSR53)

/** \brief  1ED8, DMA Transaction State Register */
#define DMA_TSR54 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011ED8u)

/** Alias (User Manual Name) for DMA_TSR54.
* To use register names with standard convension, please use DMA_TSR54.
*/
#define	DMA_TSR054	(DMA_TSR54)

/** \brief  1EDC, DMA Transaction State Register */
#define DMA_TSR55 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EDCu)

/** Alias (User Manual Name) for DMA_TSR55.
* To use register names with standard convension, please use DMA_TSR55.
*/
#define	DMA_TSR055	(DMA_TSR55)

/** \brief  1EE0, DMA Transaction State Register */
#define DMA_TSR56 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EE0u)

/** Alias (User Manual Name) for DMA_TSR56.
* To use register names with standard convension, please use DMA_TSR56.
*/
#define	DMA_TSR056	(DMA_TSR56)

/** \brief  1EE4, DMA Transaction State Register */
#define DMA_TSR57 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EE4u)

/** Alias (User Manual Name) for DMA_TSR57.
* To use register names with standard convension, please use DMA_TSR57.
*/
#define	DMA_TSR057	(DMA_TSR57)

/** \brief  1EE8, DMA Transaction State Register */
#define DMA_TSR58 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EE8u)

/** Alias (User Manual Name) for DMA_TSR58.
* To use register names with standard convension, please use DMA_TSR58.
*/
#define	DMA_TSR058	(DMA_TSR58)

/** \brief  1EEC, DMA Transaction State Register */
#define DMA_TSR59 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EECu)

/** Alias (User Manual Name) for DMA_TSR59.
* To use register names with standard convension, please use DMA_TSR59.
*/
#define	DMA_TSR059	(DMA_TSR59)

/** \brief  1E18, DMA Transaction State Register */
#define DMA_TSR6 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E18u)

/** Alias (User Manual Name) for DMA_TSR6.
* To use register names with standard convension, please use DMA_TSR6.
*/
#define	DMA_TSR006	(DMA_TSR6)

/** \brief  1EF0, DMA Transaction State Register */
#define DMA_TSR60 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EF0u)

/** Alias (User Manual Name) for DMA_TSR60.
* To use register names with standard convension, please use DMA_TSR60.
*/
#define	DMA_TSR060	(DMA_TSR60)

/** \brief  1EF4, DMA Transaction State Register */
#define DMA_TSR61 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EF4u)

/** Alias (User Manual Name) for DMA_TSR61.
* To use register names with standard convension, please use DMA_TSR61.
*/
#define	DMA_TSR061	(DMA_TSR61)

/** \brief  1EF8, DMA Transaction State Register */
#define DMA_TSR62 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EF8u)

/** Alias (User Manual Name) for DMA_TSR62.
* To use register names with standard convension, please use DMA_TSR62.
*/
#define	DMA_TSR062	(DMA_TSR62)

/** \brief  1EFC, DMA Transaction State Register */
#define DMA_TSR63 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011EFCu)

/** Alias (User Manual Name) for DMA_TSR63.
* To use register names with standard convension, please use DMA_TSR63.
*/
#define	DMA_TSR063	(DMA_TSR63)

/** \brief  1F00, DMA Transaction State Register */
#define DMA_TSR64 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F00u)

/** Alias (User Manual Name) for DMA_TSR64.
* To use register names with standard convension, please use DMA_TSR64.
*/
#define	DMA_TSR064	(DMA_TSR64)

/** \brief  1F04, DMA Transaction State Register */
#define DMA_TSR65 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F04u)

/** Alias (User Manual Name) for DMA_TSR65.
* To use register names with standard convension, please use DMA_TSR65.
*/
#define	DMA_TSR065	(DMA_TSR65)

/** \brief  1F08, DMA Transaction State Register */
#define DMA_TSR66 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F08u)

/** Alias (User Manual Name) for DMA_TSR66.
* To use register names with standard convension, please use DMA_TSR66.
*/
#define	DMA_TSR066	(DMA_TSR66)

/** \brief  1F0C, DMA Transaction State Register */
#define DMA_TSR67 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F0Cu)

/** Alias (User Manual Name) for DMA_TSR67.
* To use register names with standard convension, please use DMA_TSR67.
*/
#define	DMA_TSR067	(DMA_TSR67)

/** \brief  1F10, DMA Transaction State Register */
#define DMA_TSR68 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F10u)

/** Alias (User Manual Name) for DMA_TSR68.
* To use register names with standard convension, please use DMA_TSR68.
*/
#define	DMA_TSR068	(DMA_TSR68)

/** \brief  1F14, DMA Transaction State Register */
#define DMA_TSR69 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F14u)

/** Alias (User Manual Name) for DMA_TSR69.
* To use register names with standard convension, please use DMA_TSR69.
*/
#define	DMA_TSR069	(DMA_TSR69)

/** \brief  1E1C, DMA Transaction State Register */
#define DMA_TSR7 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E1Cu)

/** Alias (User Manual Name) for DMA_TSR7.
* To use register names with standard convension, please use DMA_TSR7.
*/
#define	DMA_TSR007	(DMA_TSR7)

/** \brief  1F18, DMA Transaction State Register */
#define DMA_TSR70 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F18u)

/** Alias (User Manual Name) for DMA_TSR70.
* To use register names with standard convension, please use DMA_TSR70.
*/
#define	DMA_TSR070	(DMA_TSR70)

/** \brief  1F1C, DMA Transaction State Register */
#define DMA_TSR71 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F1Cu)

/** Alias (User Manual Name) for DMA_TSR71.
* To use register names with standard convension, please use DMA_TSR71.
*/
#define	DMA_TSR071	(DMA_TSR71)

/** \brief  1F20, DMA Transaction State Register */
#define DMA_TSR72 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F20u)

/** Alias (User Manual Name) for DMA_TSR72.
* To use register names with standard convension, please use DMA_TSR72.
*/
#define	DMA_TSR072	(DMA_TSR72)

/** \brief  1F24, DMA Transaction State Register */
#define DMA_TSR73 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F24u)

/** Alias (User Manual Name) for DMA_TSR73.
* To use register names with standard convension, please use DMA_TSR73.
*/
#define	DMA_TSR073	(DMA_TSR73)

/** \brief  1F28, DMA Transaction State Register */
#define DMA_TSR74 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F28u)

/** Alias (User Manual Name) for DMA_TSR74.
* To use register names with standard convension, please use DMA_TSR74.
*/
#define	DMA_TSR074	(DMA_TSR74)

/** \brief  1F2C, DMA Transaction State Register */
#define DMA_TSR75 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F2Cu)

/** Alias (User Manual Name) for DMA_TSR75.
* To use register names with standard convension, please use DMA_TSR75.
*/
#define	DMA_TSR075	(DMA_TSR75)

/** \brief  1F30, DMA Transaction State Register */
#define DMA_TSR76 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F30u)

/** Alias (User Manual Name) for DMA_TSR76.
* To use register names with standard convension, please use DMA_TSR76.
*/
#define	DMA_TSR076	(DMA_TSR76)

/** \brief  1F34, DMA Transaction State Register */
#define DMA_TSR77 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F34u)

/** Alias (User Manual Name) for DMA_TSR77.
* To use register names with standard convension, please use DMA_TSR77.
*/
#define	DMA_TSR077	(DMA_TSR77)

/** \brief  1F38, DMA Transaction State Register */
#define DMA_TSR78 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F38u)

/** Alias (User Manual Name) for DMA_TSR78.
* To use register names with standard convension, please use DMA_TSR78.
*/
#define	DMA_TSR078	(DMA_TSR78)

/** \brief  1F3C, DMA Transaction State Register */
#define DMA_TSR79 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F3Cu)

/** Alias (User Manual Name) for DMA_TSR79.
* To use register names with standard convension, please use DMA_TSR79.
*/
#define	DMA_TSR079	(DMA_TSR79)

/** \brief  1E20, DMA Transaction State Register */
#define DMA_TSR8 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E20u)

/** Alias (User Manual Name) for DMA_TSR8.
* To use register names with standard convension, please use DMA_TSR8.
*/
#define	DMA_TSR008	(DMA_TSR8)

/** \brief  1F40, DMA Transaction State Register */
#define DMA_TSR80 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F40u)

/** Alias (User Manual Name) for DMA_TSR80.
* To use register names with standard convension, please use DMA_TSR80.
*/
#define	DMA_TSR080	(DMA_TSR80)

/** \brief  1F44, DMA Transaction State Register */
#define DMA_TSR81 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F44u)

/** Alias (User Manual Name) for DMA_TSR81.
* To use register names with standard convension, please use DMA_TSR81.
*/
#define	DMA_TSR081	(DMA_TSR81)

/** \brief  1F48, DMA Transaction State Register */
#define DMA_TSR82 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F48u)

/** Alias (User Manual Name) for DMA_TSR82.
* To use register names with standard convension, please use DMA_TSR82.
*/
#define	DMA_TSR082	(DMA_TSR82)

/** \brief  1F4C, DMA Transaction State Register */
#define DMA_TSR83 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F4Cu)

/** Alias (User Manual Name) for DMA_TSR83.
* To use register names with standard convension, please use DMA_TSR83.
*/
#define	DMA_TSR083	(DMA_TSR83)

/** \brief  1F50, DMA Transaction State Register */
#define DMA_TSR84 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F50u)

/** Alias (User Manual Name) for DMA_TSR84.
* To use register names with standard convension, please use DMA_TSR84.
*/
#define	DMA_TSR084	(DMA_TSR84)

/** \brief  1F54, DMA Transaction State Register */
#define DMA_TSR85 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F54u)

/** Alias (User Manual Name) for DMA_TSR85.
* To use register names with standard convension, please use DMA_TSR85.
*/
#define	DMA_TSR085	(DMA_TSR85)

/** \brief  1F58, DMA Transaction State Register */
#define DMA_TSR86 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F58u)

/** Alias (User Manual Name) for DMA_TSR86.
* To use register names with standard convension, please use DMA_TSR86.
*/
#define	DMA_TSR086	(DMA_TSR86)

/** \brief  1F5C, DMA Transaction State Register */
#define DMA_TSR87 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F5Cu)

/** Alias (User Manual Name) for DMA_TSR87.
* To use register names with standard convension, please use DMA_TSR87.
*/
#define	DMA_TSR087	(DMA_TSR87)

/** \brief  1F60, DMA Transaction State Register */
#define DMA_TSR88 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F60u)

/** Alias (User Manual Name) for DMA_TSR88.
* To use register names with standard convension, please use DMA_TSR88.
*/
#define	DMA_TSR088	(DMA_TSR88)

/** \brief  1F64, DMA Transaction State Register */
#define DMA_TSR89 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F64u)

/** Alias (User Manual Name) for DMA_TSR89.
* To use register names with standard convension, please use DMA_TSR89.
*/
#define	DMA_TSR089	(DMA_TSR89)

/** \brief  1E24, DMA Transaction State Register */
#define DMA_TSR9 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011E24u)

/** Alias (User Manual Name) for DMA_TSR9.
* To use register names with standard convension, please use DMA_TSR9.
*/
#define	DMA_TSR009	(DMA_TSR9)

/** \brief  1F68, DMA Transaction State Register */
#define DMA_TSR90 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F68u)

/** Alias (User Manual Name) for DMA_TSR90.
* To use register names with standard convension, please use DMA_TSR90.
*/
#define	DMA_TSR090	(DMA_TSR90)

/** \brief  1F6C, DMA Transaction State Register */
#define DMA_TSR91 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F6Cu)

/** Alias (User Manual Name) for DMA_TSR91.
* To use register names with standard convension, please use DMA_TSR91.
*/
#define	DMA_TSR091	(DMA_TSR91)

/** \brief  1F70, DMA Transaction State Register */
#define DMA_TSR92 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F70u)

/** Alias (User Manual Name) for DMA_TSR92.
* To use register names with standard convension, please use DMA_TSR92.
*/
#define	DMA_TSR092	(DMA_TSR92)

/** \brief  1F74, DMA Transaction State Register */
#define DMA_TSR93 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F74u)

/** Alias (User Manual Name) for DMA_TSR93.
* To use register names with standard convension, please use DMA_TSR93.
*/
#define	DMA_TSR093	(DMA_TSR93)

/** \brief  1F78, DMA Transaction State Register */
#define DMA_TSR94 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F78u)

/** Alias (User Manual Name) for DMA_TSR94.
* To use register names with standard convension, please use DMA_TSR94.
*/
#define	DMA_TSR094	(DMA_TSR94)

/** \brief  1F7C, DMA Transaction State Register */
#define DMA_TSR95 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F7Cu)

/** Alias (User Manual Name) for DMA_TSR95.
* To use register names with standard convension, please use DMA_TSR95.
*/
#define	DMA_TSR095	(DMA_TSR95)

/** \brief  1F80, DMA Transaction State Register */
#define DMA_TSR96 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F80u)

/** Alias (User Manual Name) for DMA_TSR96.
* To use register names with standard convension, please use DMA_TSR96.
*/
#define	DMA_TSR096	(DMA_TSR96)

/** \brief  1F84, DMA Transaction State Register */
#define DMA_TSR97 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F84u)

/** Alias (User Manual Name) for DMA_TSR97.
* To use register names with standard convension, please use DMA_TSR97.
*/
#define	DMA_TSR097	(DMA_TSR97)

/** \brief  1F88, DMA Transaction State Register */
#define DMA_TSR98 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F88u)

/** Alias (User Manual Name) for DMA_TSR98.
* To use register names with standard convension, please use DMA_TSR98.
*/
#define	DMA_TSR098	(DMA_TSR98)

/** \brief  1F8C, DMA Transaction State Register */
#define DMA_TSR99 /*lint --e(923)*/ (*(volatile Ifx_DMA_TSR*)0xF0011F8Cu)

/** Alias (User Manual Name) for DMA_TSR99.
* To use register names with standard convension, please use DMA_TSR99.
*/
#define	DMA_TSR099	(DMA_TSR99)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXDMA_REG_H */
