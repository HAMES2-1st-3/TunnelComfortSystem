/**
 * \file IfxMtu_bf.h
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
 * \defgroup IfxSfr_Mtu_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Mtu_Registers
 * 
 */
#ifndef IFXMTU_BF_H
#define IFXMTU_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Mtu_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_MTU_CLC_Bits.DISR */
#define IFX_MTU_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_MTU_CLC_Bits.DISR */
#define IFX_MTU_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_CLC_Bits.DISR */
#define IFX_MTU_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_MTU_CLC_Bits.DISS */
#define IFX_MTU_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_MTU_CLC_Bits.DISS */
#define IFX_MTU_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_MTU_CLC_Bits.DISS */
#define IFX_MTU_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_MTU_CLC_Bits.Resvd */
#define IFX_MTU_CLC_RESVD_LEN (1u)

/** \brief Mask for Ifx_MTU_CLC_Bits.Resvd */
#define IFX_MTU_CLC_RESVD_MSK (0x1u)

/** \brief Offset for Ifx_MTU_CLC_Bits.Resvd */
#define IFX_MTU_CLC_RESVD_OFF (2u)

/** \brief Length for Ifx_MTU_CLC_Bits.EDIS */
#define IFX_MTU_CLC_EDIS_LEN (1u)

/** \brief Mask for Ifx_MTU_CLC_Bits.EDIS */
#define IFX_MTU_CLC_EDIS_MSK (0x1u)

/** \brief Offset for Ifx_MTU_CLC_Bits.EDIS */
#define IFX_MTU_CLC_EDIS_OFF (3u)

/** \brief Length for Ifx_MTU_ID_Bits.MODREV */
#define IFX_MTU_ID_MODREV_LEN (8u)

/** \brief Mask for Ifx_MTU_ID_Bits.MODREV */
#define IFX_MTU_ID_MODREV_MSK (0xffu)

/** \brief Offset for Ifx_MTU_ID_Bits.MODREV */
#define IFX_MTU_ID_MODREV_OFF (0u)

/** \brief Length for Ifx_MTU_ID_Bits.MODTYPE */
#define IFX_MTU_ID_MODTYPE_LEN (8u)

/** \brief Mask for Ifx_MTU_ID_Bits.MODTYPE */
#define IFX_MTU_ID_MODTYPE_MSK (0xffu)

/** \brief Offset for Ifx_MTU_ID_Bits.MODTYPE */
#define IFX_MTU_ID_MODTYPE_OFF (8u)

/** \brief Length for Ifx_MTU_ID_Bits.MODNUMBER */
#define IFX_MTU_ID_MODNUMBER_LEN (16u)

/** \brief Mask for Ifx_MTU_ID_Bits.MODNUMBER */
#define IFX_MTU_ID_MODNUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_MTU_ID_Bits.MODNUMBER */
#define IFX_MTU_ID_MODNUMBER_OFF (16u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU0_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU0_DMEM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU0_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU0_DMEM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU0_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU0_DMEM_EN_OFF (0u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU0_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU0_DTAG_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU0_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU0_DTAG_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU0_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU0_DTAG_EN_OFF (1u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU0_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU0_PMEM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU0_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU0_PMEM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU0_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU0_PMEM_EN_OFF (2u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU0_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU0_PTAG_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU0_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU0_PTAG_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU0_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU0_PTAG_EN_OFF (3u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU0_DLMU_STBY_EN */
#define IFX_MTU_MEMTEST0_CPU0_DLMU_STBY_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU0_DLMU_STBY_EN */
#define IFX_MTU_MEMTEST0_CPU0_DLMU_STBY_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU0_DLMU_STBY_EN */
#define IFX_MTU_MEMTEST0_CPU0_DLMU_STBY_EN_OFF (4u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU1_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU1_DMEM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU1_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU1_DMEM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU1_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU1_DMEM_EN_OFF (5u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU1_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU1_DTAG_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU1_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU1_DTAG_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU1_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU1_DTAG_EN_OFF (6u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU1_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU1_PMEM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU1_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU1_PMEM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU1_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU1_PMEM_EN_OFF (7u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU1_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU1_PTAG_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU1_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU1_PTAG_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU1_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU1_PTAG_EN_OFF (8u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU1_DLMU_STBY_EN */
#define IFX_MTU_MEMTEST0_CPU1_DLMU_STBY_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU1_DLMU_STBY_EN */
#define IFX_MTU_MEMTEST0_CPU1_DLMU_STBY_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU1_DLMU_STBY_EN */
#define IFX_MTU_MEMTEST0_CPU1_DLMU_STBY_EN_OFF (9u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU2_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU2_DMEM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU2_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU2_DMEM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU2_DMEM_EN */
#define IFX_MTU_MEMTEST0_CPU2_DMEM_EN_OFF (10u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU2_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU2_DTAG_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU2_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU2_DTAG_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU2_DTAG_EN */
#define IFX_MTU_MEMTEST0_CPU2_DTAG_EN_OFF (11u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU2_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU2_PMEM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU2_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU2_PMEM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU2_PMEM_EN */
#define IFX_MTU_MEMTEST0_CPU2_PMEM_EN_OFF (12u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU2_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU2_PTAG_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU2_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU2_PTAG_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU2_PTAG_EN */
#define IFX_MTU_MEMTEST0_CPU2_PTAG_EN_OFF (13u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.CPU2_DLMU_EN */
#define IFX_MTU_MEMTEST0_CPU2_DLMU_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.CPU2_DLMU_EN */
#define IFX_MTU_MEMTEST0_CPU2_DLMU_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.CPU2_DLMU_EN */
#define IFX_MTU_MEMTEST0_CPU2_DLMU_EN_OFF (14u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.LMU00_EN */
#define IFX_MTU_MEMTEST0_LMU00_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.LMU00_EN */
#define IFX_MTU_MEMTEST0_LMU00_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.LMU00_EN */
#define IFX_MTU_MEMTEST0_LMU00_EN_OFF (30u)

/** \brief Length for Ifx_MTU_MEMTEST0_Bits.LMU10_EN */
#define IFX_MTU_MEMTEST0_LMU10_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST0_Bits.LMU10_EN */
#define IFX_MTU_MEMTEST0_LMU10_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST0_Bits.LMU10_EN */
#define IFX_MTU_MEMTEST0_LMU10_EN_OFF (31u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.CPU0_DMEM1_EN */
#define IFX_MTU_MEMTEST1_CPU0_DMEM1_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.CPU0_DMEM1_EN */
#define IFX_MTU_MEMTEST1_CPU0_DMEM1_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.CPU0_DMEM1_EN */
#define IFX_MTU_MEMTEST1_CPU0_DMEM1_EN_OFF (2u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.CPU1_DMEM1_EN */
#define IFX_MTU_MEMTEST1_CPU1_DMEM1_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.CPU1_DMEM1_EN */
#define IFX_MTU_MEMTEST1_CPU1_DMEM1_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.CPU1_DMEM1_EN */
#define IFX_MTU_MEMTEST1_CPU1_DMEM1_EN_OFF (3u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.SADMA_EN */
#define IFX_MTU_MEMTEST1_SADMA_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.SADMA_EN */
#define IFX_MTU_MEMTEST1_SADMA_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.SADMA_EN */
#define IFX_MTU_MEMTEST1_SADMA_EN_OFF (9u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.MCDS_EN */
#define IFX_MTU_MEMTEST1_MCDS_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.MCDS_EN */
#define IFX_MTU_MEMTEST1_MCDS_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.MCDS_EN */
#define IFX_MTU_MEMTEST1_MCDS_EN_OFF (11u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.EMEM0_EN */
#define IFX_MTU_MEMTEST1_EMEM0_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.EMEM0_EN */
#define IFX_MTU_MEMTEST1_EMEM0_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.EMEM0_EN */
#define IFX_MTU_MEMTEST1_EMEM0_EN_OFF (12u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.EMEM1_EN */
#define IFX_MTU_MEMTEST1_EMEM1_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.EMEM1_EN */
#define IFX_MTU_MEMTEST1_EMEM1_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.EMEM1_EN */
#define IFX_MTU_MEMTEST1_EMEM1_EN_OFF (13u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.EMEM_XTM_EN */
#define IFX_MTU_MEMTEST1_EMEM_XTM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.EMEM_XTM_EN */
#define IFX_MTU_MEMTEST1_EMEM_XTM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.EMEM_XTM_EN */
#define IFX_MTU_MEMTEST1_EMEM_XTM_EN_OFF (16u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.SPU_BUFFER0_EN */
#define IFX_MTU_MEMTEST1_SPU_BUFFER0_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.SPU_BUFFER0_EN */
#define IFX_MTU_MEMTEST1_SPU_BUFFER0_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.SPU_BUFFER0_EN */
#define IFX_MTU_MEMTEST1_SPU_BUFFER0_EN_OFF (17u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.SPU_BUFFER1_EN */
#define IFX_MTU_MEMTEST1_SPU_BUFFER1_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.SPU_BUFFER1_EN */
#define IFX_MTU_MEMTEST1_SPU_BUFFER1_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.SPU_BUFFER1_EN */
#define IFX_MTU_MEMTEST1_SPU_BUFFER1_EN_OFF (18u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.SPU_CONFIG0_EN */
#define IFX_MTU_MEMTEST1_SPU_CONFIG0_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.SPU_CONFIG0_EN */
#define IFX_MTU_MEMTEST1_SPU_CONFIG0_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.SPU_CONFIG0_EN */
#define IFX_MTU_MEMTEST1_SPU_CONFIG0_EN_OFF (19u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.SPU_CONFIG1_EN */
#define IFX_MTU_MEMTEST1_SPU_CONFIG1_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.SPU_CONFIG1_EN */
#define IFX_MTU_MEMTEST1_SPU_CONFIG1_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.SPU_CONFIG1_EN */
#define IFX_MTU_MEMTEST1_SPU_CONFIG1_EN_OFF (20u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.MCAN10_EN */
#define IFX_MTU_MEMTEST1_MCAN10_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.MCAN10_EN */
#define IFX_MTU_MEMTEST1_MCAN10_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.MCAN10_EN */
#define IFX_MTU_MEMTEST1_MCAN10_EN_OFF (30u)

/** \brief Length for Ifx_MTU_MEMTEST1_Bits.MCAN20_EN */
#define IFX_MTU_MEMTEST1_MCAN20_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST1_Bits.MCAN20_EN */
#define IFX_MTU_MEMTEST1_MCAN20_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST1_Bits.MCAN20_EN */
#define IFX_MTU_MEMTEST1_MCAN20_EN_OFF (31u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.ERAY_OBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_OBF0_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.ERAY_OBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_OBF0_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.ERAY_OBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_OBF0_EN_OFF (2u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.ERAY_TBF_IBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_TBF_IBF0_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.ERAY_TBF_IBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_TBF_IBF0_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.ERAY_TBF_IBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_TBF_IBF0_EN_OFF (4u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.ERAY_MBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_MBF0_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.ERAY_MBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_MBF0_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.ERAY_MBF0_EN */
#define IFX_MTU_MEMTEST2_ERAY_MBF0_EN_OFF (6u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SCR_XRAM_EN */
#define IFX_MTU_MEMTEST2_SCR_XRAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SCR_XRAM_EN */
#define IFX_MTU_MEMTEST2_SCR_XRAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SCR_XRAM_EN */
#define IFX_MTU_MEMTEST2_SCR_XRAM_EN_OFF (13u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SCR_RAMINT_EN */
#define IFX_MTU_MEMTEST2_SCR_RAMINT_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SCR_RAMINT_EN */
#define IFX_MTU_MEMTEST2_SCR_RAMINT_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SCR_RAMINT_EN */
#define IFX_MTU_MEMTEST2_SCR_RAMINT_EN_OFF (14u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.GIGETH_RX_EN */
#define IFX_MTU_MEMTEST2_GIGETH_RX_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.GIGETH_RX_EN */
#define IFX_MTU_MEMTEST2_GIGETH_RX_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.GIGETH_RX_EN */
#define IFX_MTU_MEMTEST2_GIGETH_RX_EN_OFF (18u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.GIGETH_TX_EN */
#define IFX_MTU_MEMTEST2_GIGETH_TX_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.GIGETH_TX_EN */
#define IFX_MTU_MEMTEST2_GIGETH_TX_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.GIGETH_TX_EN */
#define IFX_MTU_MEMTEST2_GIGETH_TX_EN_OFF (19u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.HSPDM_RAM_EN */
#define IFX_MTU_MEMTEST2_HSPDM_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.HSPDM_RAM_EN */
#define IFX_MTU_MEMTEST2_HSPDM_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.HSPDM_RAM_EN */
#define IFX_MTU_MEMTEST2_HSPDM_RAM_EN_OFF (21u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SPU_FFT00_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT00_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SPU_FFT00_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT00_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SPU_FFT00_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT00_RAM_EN_OFF (24u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SPU_FFT01_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT01_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SPU_FFT01_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT01_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SPU_FFT01_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT01_RAM_EN_OFF (25u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SPU_FFT10_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT10_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SPU_FFT10_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT10_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SPU_FFT10_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT10_RAM_EN_OFF (26u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SPU_FFT11_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT11_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SPU_FFT11_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT11_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SPU_FFT11_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT11_RAM_EN_OFF (27u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SPU_FFT20_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT20_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SPU_FFT20_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT20_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SPU_FFT20_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT20_RAM_EN_OFF (28u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SPU_FFT21_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT21_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SPU_FFT21_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT21_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SPU_FFT21_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT21_RAM_EN_OFF (29u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SPU_FFT30_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT30_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SPU_FFT30_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT30_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SPU_FFT30_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT30_RAM_EN_OFF (30u)

/** \brief Length for Ifx_MTU_MEMTEST2_Bits.SPU_FFT31_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT31_RAM_EN_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMTEST2_Bits.SPU_FFT31_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT31_RAM_EN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMTEST2_Bits.SPU_FFT31_RAM_EN */
#define IFX_MTU_MEMTEST2_SPU_FFT31_RAM_EN_OFF (31u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU0_DCMAP */
#define IFX_MTU_MEMMAP_CPU0_DCMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU0_DCMAP */
#define IFX_MTU_MEMMAP_CPU0_DCMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU0_DCMAP */
#define IFX_MTU_MEMMAP_CPU0_DCMAP_OFF (0u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU0_DTMAP */
#define IFX_MTU_MEMMAP_CPU0_DTMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU0_DTMAP */
#define IFX_MTU_MEMMAP_CPU0_DTMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU0_DTMAP */
#define IFX_MTU_MEMMAP_CPU0_DTMAP_OFF (1u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU0_PCMAP */
#define IFX_MTU_MEMMAP_CPU0_PCMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU0_PCMAP */
#define IFX_MTU_MEMMAP_CPU0_PCMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU0_PCMAP */
#define IFX_MTU_MEMMAP_CPU0_PCMAP_OFF (2u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU0_PTMAP */
#define IFX_MTU_MEMMAP_CPU0_PTMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU0_PTMAP */
#define IFX_MTU_MEMMAP_CPU0_PTMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU0_PTMAP */
#define IFX_MTU_MEMMAP_CPU0_PTMAP_OFF (3u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU1_DCMAP */
#define IFX_MTU_MEMMAP_CPU1_DCMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU1_DCMAP */
#define IFX_MTU_MEMMAP_CPU1_DCMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU1_DCMAP */
#define IFX_MTU_MEMMAP_CPU1_DCMAP_OFF (5u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU1_DTMAP */
#define IFX_MTU_MEMMAP_CPU1_DTMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU1_DTMAP */
#define IFX_MTU_MEMMAP_CPU1_DTMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU1_DTMAP */
#define IFX_MTU_MEMMAP_CPU1_DTMAP_OFF (6u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU1_PCMAP */
#define IFX_MTU_MEMMAP_CPU1_PCMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU1_PCMAP */
#define IFX_MTU_MEMMAP_CPU1_PCMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU1_PCMAP */
#define IFX_MTU_MEMMAP_CPU1_PCMAP_OFF (7u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU1_PTMAP */
#define IFX_MTU_MEMMAP_CPU1_PTMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU1_PTMAP */
#define IFX_MTU_MEMMAP_CPU1_PTMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU1_PTMAP */
#define IFX_MTU_MEMMAP_CPU1_PTMAP_OFF (8u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU2_DCMAP */
#define IFX_MTU_MEMMAP_CPU2_DCMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU2_DCMAP */
#define IFX_MTU_MEMMAP_CPU2_DCMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU2_DCMAP */
#define IFX_MTU_MEMMAP_CPU2_DCMAP_OFF (10u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU2_DTMAP */
#define IFX_MTU_MEMMAP_CPU2_DTMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU2_DTMAP */
#define IFX_MTU_MEMMAP_CPU2_DTMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU2_DTMAP */
#define IFX_MTU_MEMMAP_CPU2_DTMAP_OFF (11u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU2_PCMAP */
#define IFX_MTU_MEMMAP_CPU2_PCMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU2_PCMAP */
#define IFX_MTU_MEMMAP_CPU2_PCMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU2_PCMAP */
#define IFX_MTU_MEMMAP_CPU2_PCMAP_OFF (12u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.CPU2_PTMAP */
#define IFX_MTU_MEMMAP_CPU2_PTMAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.CPU2_PTMAP */
#define IFX_MTU_MEMMAP_CPU2_PTMAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.CPU2_PTMAP */
#define IFX_MTU_MEMMAP_CPU2_PTMAP_OFF (13u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM15MAP */
#define IFX_MTU_MEMMAP_MEM15MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM15MAP */
#define IFX_MTU_MEMMAP_MEM15MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM15MAP */
#define IFX_MTU_MEMMAP_MEM15MAP_OFF (15u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM16MAP */
#define IFX_MTU_MEMMAP_MEM16MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM16MAP */
#define IFX_MTU_MEMMAP_MEM16MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM16MAP */
#define IFX_MTU_MEMMAP_MEM16MAP_OFF (16u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM17MAP */
#define IFX_MTU_MEMMAP_MEM17MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM17MAP */
#define IFX_MTU_MEMMAP_MEM17MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM17MAP */
#define IFX_MTU_MEMMAP_MEM17MAP_OFF (17u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM18MAP */
#define IFX_MTU_MEMMAP_MEM18MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM18MAP */
#define IFX_MTU_MEMMAP_MEM18MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM18MAP */
#define IFX_MTU_MEMMAP_MEM18MAP_OFF (18u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM20MAP */
#define IFX_MTU_MEMMAP_MEM20MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM20MAP */
#define IFX_MTU_MEMMAP_MEM20MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM20MAP */
#define IFX_MTU_MEMMAP_MEM20MAP_OFF (20u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM21MAP */
#define IFX_MTU_MEMMAP_MEM21MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM21MAP */
#define IFX_MTU_MEMMAP_MEM21MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM21MAP */
#define IFX_MTU_MEMMAP_MEM21MAP_OFF (21u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM22MAP */
#define IFX_MTU_MEMMAP_MEM22MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM22MAP */
#define IFX_MTU_MEMMAP_MEM22MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM22MAP */
#define IFX_MTU_MEMMAP_MEM22MAP_OFF (22u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM23MAP */
#define IFX_MTU_MEMMAP_MEM23MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM23MAP */
#define IFX_MTU_MEMMAP_MEM23MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM23MAP */
#define IFX_MTU_MEMMAP_MEM23MAP_OFF (23u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM25MAP */
#define IFX_MTU_MEMMAP_MEM25MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM25MAP */
#define IFX_MTU_MEMMAP_MEM25MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM25MAP */
#define IFX_MTU_MEMMAP_MEM25MAP_OFF (25u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM26MAP */
#define IFX_MTU_MEMMAP_MEM26MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM26MAP */
#define IFX_MTU_MEMMAP_MEM26MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM26MAP */
#define IFX_MTU_MEMMAP_MEM26MAP_OFF (26u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM27MAP */
#define IFX_MTU_MEMMAP_MEM27MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM27MAP */
#define IFX_MTU_MEMMAP_MEM27MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM27MAP */
#define IFX_MTU_MEMMAP_MEM27MAP_OFF (27u)

/** \brief Length for Ifx_MTU_MEMMAP_Bits.MEM28MAP */
#define IFX_MTU_MEMMAP_MEM28MAP_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMMAP_Bits.MEM28MAP */
#define IFX_MTU_MEMMAP_MEM28MAP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMMAP_Bits.MEM28MAP */
#define IFX_MTU_MEMMAP_MEM28MAP_OFF (28u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU0_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_DMEM_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU0_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_DMEM_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU0_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_DMEM_AIU_OFF (0u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU0_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_DTAG_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU0_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_DTAG_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU0_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_DTAG_AIU_OFF (1u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU0_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_PMEM_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU0_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_PMEM_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU0_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_PMEM_AIU_OFF (2u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU0_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_PTAG_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU0_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_PTAG_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU0_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU0_PTAG_AIU_OFF (3u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU1_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_DMEM_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU1_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_DMEM_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU1_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_DMEM_AIU_OFF (5u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU1_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_DTAG_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU1_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_DTAG_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU1_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_DTAG_AIU_OFF (6u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU1_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_PMEM_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU1_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_PMEM_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU1_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_PMEM_AIU_OFF (7u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU1_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_PTAG_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU1_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_PTAG_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU1_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU1_PTAG_AIU_OFF (8u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU2_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_DMEM_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU2_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_DMEM_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU2_DMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_DMEM_AIU_OFF (10u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU2_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_DTAG_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU2_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_DTAG_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU2_DTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_DTAG_AIU_OFF (11u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU2_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_PMEM_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU2_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_PMEM_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU2_PMEM_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_PMEM_AIU_OFF (12u)

/** \brief Length for Ifx_MTU_MEMSTAT0_Bits.CPU2_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_PTAG_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT0_Bits.CPU2_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_PTAG_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT0_Bits.CPU2_PTAG_AIU */
#define IFX_MTU_MEMSTAT0_CPU2_PTAG_AIU_OFF (13u)

/** \brief Length for Ifx_MTU_MEMSTAT1_Bits.CPU0_DMEM1_AIU */
#define IFX_MTU_MEMSTAT1_CPU0_DMEM1_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT1_Bits.CPU0_DMEM1_AIU */
#define IFX_MTU_MEMSTAT1_CPU0_DMEM1_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT1_Bits.CPU0_DMEM1_AIU */
#define IFX_MTU_MEMSTAT1_CPU0_DMEM1_AIU_OFF (2u)

/** \brief Length for Ifx_MTU_MEMSTAT1_Bits.CPU1_DMEM1_AIU */
#define IFX_MTU_MEMSTAT1_CPU1_DMEM1_AIU_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMSTAT1_Bits.CPU1_DMEM1_AIU */
#define IFX_MTU_MEMSTAT1_CPU1_DMEM1_AIU_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMSTAT1_Bits.CPU1_DMEM1_AIU */
#define IFX_MTU_MEMSTAT1_CPU1_DMEM1_AIU_OFF (3u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU0_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DMEM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU0_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DMEM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU0_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DMEM_DONE_OFF (0u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU0_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DTAG_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU0_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DTAG_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU0_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DTAG_DONE_OFF (1u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU0_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU0_PMEM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU0_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU0_PMEM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU0_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU0_PMEM_DONE_OFF (2u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU0_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU0_PTAG_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU0_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU0_PTAG_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU0_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU0_PTAG_DONE_OFF (3u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU0_DLMU_STBY_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DLMU_STBY_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU0_DLMU_STBY_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DLMU_STBY_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU0_DLMU_STBY_DONE */
#define IFX_MTU_MEMDONE0_CPU0_DLMU_STBY_DONE_OFF (4u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU1_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DMEM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU1_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DMEM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU1_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DMEM_DONE_OFF (5u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU1_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DTAG_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU1_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DTAG_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU1_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DTAG_DONE_OFF (6u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU1_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU1_PMEM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU1_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU1_PMEM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU1_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU1_PMEM_DONE_OFF (7u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU1_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU1_PTAG_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU1_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU1_PTAG_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU1_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU1_PTAG_DONE_OFF (8u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU1_DLMU_STBY_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DLMU_STBY_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU1_DLMU_STBY_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DLMU_STBY_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU1_DLMU_STBY_DONE */
#define IFX_MTU_MEMDONE0_CPU1_DLMU_STBY_DONE_OFF (9u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU2_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DMEM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU2_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DMEM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU2_DMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DMEM_DONE_OFF (10u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU2_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DTAG_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU2_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DTAG_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU2_DTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DTAG_DONE_OFF (11u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU2_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU2_PMEM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU2_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU2_PMEM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU2_PMEM_DONE */
#define IFX_MTU_MEMDONE0_CPU2_PMEM_DONE_OFF (12u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU2_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU2_PTAG_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU2_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU2_PTAG_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU2_PTAG_DONE */
#define IFX_MTU_MEMDONE0_CPU2_PTAG_DONE_OFF (13u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.CPU2_DLMU_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DLMU_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.CPU2_DLMU_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DLMU_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.CPU2_DLMU_DONE */
#define IFX_MTU_MEMDONE0_CPU2_DLMU_DONE_OFF (14u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.LMU00_DONE */
#define IFX_MTU_MEMDONE0_LMU00_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.LMU00_DONE */
#define IFX_MTU_MEMDONE0_LMU00_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.LMU00_DONE */
#define IFX_MTU_MEMDONE0_LMU00_DONE_OFF (30u)

/** \brief Length for Ifx_MTU_MEMDONE0_Bits.LMU10_DONE */
#define IFX_MTU_MEMDONE0_LMU10_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE0_Bits.LMU10_DONE */
#define IFX_MTU_MEMDONE0_LMU10_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE0_Bits.LMU10_DONE */
#define IFX_MTU_MEMDONE0_LMU10_DONE_OFF (31u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.CPU0_DMEM1_DONE */
#define IFX_MTU_MEMDONE1_CPU0_DMEM1_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.CPU0_DMEM1_DONE */
#define IFX_MTU_MEMDONE1_CPU0_DMEM1_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.CPU0_DMEM1_DONE */
#define IFX_MTU_MEMDONE1_CPU0_DMEM1_DONE_OFF (2u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.CPU1_DMEM1_DONE */
#define IFX_MTU_MEMDONE1_CPU1_DMEM1_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.CPU1_DMEM1_DONE */
#define IFX_MTU_MEMDONE1_CPU1_DMEM1_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.CPU1_DMEM1_DONE */
#define IFX_MTU_MEMDONE1_CPU1_DMEM1_DONE_OFF (3u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.SADMA_DONE */
#define IFX_MTU_MEMDONE1_SADMA_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.SADMA_DONE */
#define IFX_MTU_MEMDONE1_SADMA_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.SADMA_DONE */
#define IFX_MTU_MEMDONE1_SADMA_DONE_OFF (9u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.MCDS_DONE */
#define IFX_MTU_MEMDONE1_MCDS_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.MCDS_DONE */
#define IFX_MTU_MEMDONE1_MCDS_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.MCDS_DONE */
#define IFX_MTU_MEMDONE1_MCDS_DONE_OFF (11u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.EMEM0_DONE */
#define IFX_MTU_MEMDONE1_EMEM0_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.EMEM0_DONE */
#define IFX_MTU_MEMDONE1_EMEM0_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.EMEM0_DONE */
#define IFX_MTU_MEMDONE1_EMEM0_DONE_OFF (12u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.EMEM1_DONE */
#define IFX_MTU_MEMDONE1_EMEM1_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.EMEM1_DONE */
#define IFX_MTU_MEMDONE1_EMEM1_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.EMEM1_DONE */
#define IFX_MTU_MEMDONE1_EMEM1_DONE_OFF (13u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.EMEM_XTM_DONE */
#define IFX_MTU_MEMDONE1_EMEM_XTM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.EMEM_XTM_DONE */
#define IFX_MTU_MEMDONE1_EMEM_XTM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.EMEM_XTM_DONE */
#define IFX_MTU_MEMDONE1_EMEM_XTM_DONE_OFF (16u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.SPU_BUFFER0_DONE */
#define IFX_MTU_MEMDONE1_SPU_BUFFER0_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.SPU_BUFFER0_DONE */
#define IFX_MTU_MEMDONE1_SPU_BUFFER0_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.SPU_BUFFER0_DONE */
#define IFX_MTU_MEMDONE1_SPU_BUFFER0_DONE_OFF (17u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.SPU_BUFFER1_DONE */
#define IFX_MTU_MEMDONE1_SPU_BUFFER1_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.SPU_BUFFER1_DONE */
#define IFX_MTU_MEMDONE1_SPU_BUFFER1_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.SPU_BUFFER1_DONE */
#define IFX_MTU_MEMDONE1_SPU_BUFFER1_DONE_OFF (18u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.SPU_CONFIG0_DONE */
#define IFX_MTU_MEMDONE1_SPU_CONFIG0_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.SPU_CONFIG0_DONE */
#define IFX_MTU_MEMDONE1_SPU_CONFIG0_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.SPU_CONFIG0_DONE */
#define IFX_MTU_MEMDONE1_SPU_CONFIG0_DONE_OFF (19u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.SPU_CONFIG1_DONE */
#define IFX_MTU_MEMDONE1_SPU_CONFIG1_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.SPU_CONFIG1_DONE */
#define IFX_MTU_MEMDONE1_SPU_CONFIG1_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.SPU_CONFIG1_DONE */
#define IFX_MTU_MEMDONE1_SPU_CONFIG1_DONE_OFF (20u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.MCAN10_DONE */
#define IFX_MTU_MEMDONE1_MCAN10_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.MCAN10_DONE */
#define IFX_MTU_MEMDONE1_MCAN10_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.MCAN10_DONE */
#define IFX_MTU_MEMDONE1_MCAN10_DONE_OFF (30u)

/** \brief Length for Ifx_MTU_MEMDONE1_Bits.MCAN20_DONE */
#define IFX_MTU_MEMDONE1_MCAN20_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE1_Bits.MCAN20_DONE */
#define IFX_MTU_MEMDONE1_MCAN20_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE1_Bits.MCAN20_DONE */
#define IFX_MTU_MEMDONE1_MCAN20_DONE_OFF (31u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.ERAY_OBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_OBF0_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.ERAY_OBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_OBF0_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.ERAY_OBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_OBF0_DONE_OFF (2u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.ERAY_TBF_IBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_TBF_IBF0_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.ERAY_TBF_IBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_TBF_IBF0_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.ERAY_TBF_IBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_TBF_IBF0_DONE_OFF (4u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.ERAY_MBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_MBF0_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.ERAY_MBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_MBF0_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.ERAY_MBF0_DONE */
#define IFX_MTU_MEMDONE2_ERAY_MBF0_DONE_OFF (6u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SCR_XRAM_DONE */
#define IFX_MTU_MEMDONE2_SCR_XRAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SCR_XRAM_DONE */
#define IFX_MTU_MEMDONE2_SCR_XRAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SCR_XRAM_DONE */
#define IFX_MTU_MEMDONE2_SCR_XRAM_DONE_OFF (13u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SCR_RAMINT_DONE */
#define IFX_MTU_MEMDONE2_SCR_RAMINT_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SCR_RAMINT_DONE */
#define IFX_MTU_MEMDONE2_SCR_RAMINT_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SCR_RAMINT_DONE */
#define IFX_MTU_MEMDONE2_SCR_RAMINT_DONE_OFF (14u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.GIGETH_RX_DONE */
#define IFX_MTU_MEMDONE2_GIGETH_RX_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.GIGETH_RX_DONE */
#define IFX_MTU_MEMDONE2_GIGETH_RX_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.GIGETH_RX_DONE */
#define IFX_MTU_MEMDONE2_GIGETH_RX_DONE_OFF (18u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.GIGETH_TX_DONE */
#define IFX_MTU_MEMDONE2_GIGETH_TX_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.GIGETH_TX_DONE */
#define IFX_MTU_MEMDONE2_GIGETH_TX_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.GIGETH_TX_DONE */
#define IFX_MTU_MEMDONE2_GIGETH_TX_DONE_OFF (19u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.HSPDM_RAM_DONE */
#define IFX_MTU_MEMDONE2_HSPDM_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.HSPDM_RAM_DONE */
#define IFX_MTU_MEMDONE2_HSPDM_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.HSPDM_RAM_DONE */
#define IFX_MTU_MEMDONE2_HSPDM_RAM_DONE_OFF (21u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SPU_FFT00_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT00_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SPU_FFT00_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT00_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SPU_FFT00_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT00_RAM_DONE_OFF (24u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SPU_FFT01_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT01_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SPU_FFT01_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT01_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SPU_FFT01_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT01_RAM_DONE_OFF (25u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SPU_FFT10_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT10_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SPU_FFT10_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT10_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SPU_FFT10_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT10_RAM_DONE_OFF (26u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SPU_FFT11_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT11_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SPU_FFT11_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT11_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SPU_FFT11_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT11_RAM_DONE_OFF (27u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SPU_FFT20_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT20_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SPU_FFT20_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT20_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SPU_FFT20_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT20_RAM_DONE_OFF (28u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SPU_FFT21_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT21_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SPU_FFT21_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT21_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SPU_FFT21_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT21_RAM_DONE_OFF (29u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SPU_FFT30_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT30_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SPU_FFT30_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT30_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SPU_FFT30_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT30_RAM_DONE_OFF (30u)

/** \brief Length for Ifx_MTU_MEMDONE2_Bits.SPU_FFT31_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT31_RAM_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMDONE2_Bits.SPU_FFT31_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT31_RAM_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMDONE2_Bits.SPU_FFT31_RAM_DONE */
#define IFX_MTU_MEMDONE2_SPU_FFT31_RAM_DONE_OFF (31u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU0_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DMEM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU0_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DMEM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU0_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DMEM_FDA_OFF (0u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU0_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DTAG_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU0_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DTAG_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU0_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DTAG_FDA_OFF (1u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU0_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU0_PMEM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU0_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU0_PMEM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU0_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU0_PMEM_FDA_OFF (2u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU0_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU0_PTAG_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU0_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU0_PTAG_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU0_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU0_PTAG_FDA_OFF (3u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU0_DLMU_STBY_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DLMU_STBY_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU0_DLMU_STBY_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DLMU_STBY_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU0_DLMU_STBY_FDA */
#define IFX_MTU_MEMFDA0_CPU0_DLMU_STBY_FDA_OFF (4u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU1_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DMEM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU1_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DMEM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU1_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DMEM_FDA_OFF (5u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU1_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DTAG_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU1_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DTAG_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU1_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DTAG_FDA_OFF (6u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU1_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU1_PMEM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU1_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU1_PMEM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU1_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU1_PMEM_FDA_OFF (7u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU1_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU1_PTAG_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU1_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU1_PTAG_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU1_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU1_PTAG_FDA_OFF (8u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU1_DLMU_STBY_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DLMU_STBY_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU1_DLMU_STBY_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DLMU_STBY_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU1_DLMU_STBY_FDA */
#define IFX_MTU_MEMFDA0_CPU1_DLMU_STBY_FDA_OFF (9u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU2_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DMEM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU2_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DMEM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU2_DMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DMEM_FDA_OFF (10u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU2_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DTAG_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU2_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DTAG_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU2_DTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DTAG_FDA_OFF (11u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU2_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU2_PMEM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU2_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU2_PMEM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU2_PMEM_FDA */
#define IFX_MTU_MEMFDA0_CPU2_PMEM_FDA_OFF (12u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU2_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU2_PTAG_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU2_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU2_PTAG_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU2_PTAG_FDA */
#define IFX_MTU_MEMFDA0_CPU2_PTAG_FDA_OFF (13u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.CPU2_DLMU_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DLMU_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.CPU2_DLMU_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DLMU_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.CPU2_DLMU_FDA */
#define IFX_MTU_MEMFDA0_CPU2_DLMU_FDA_OFF (14u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.LMU00_FDA */
#define IFX_MTU_MEMFDA0_LMU00_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.LMU00_FDA */
#define IFX_MTU_MEMFDA0_LMU00_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.LMU00_FDA */
#define IFX_MTU_MEMFDA0_LMU00_FDA_OFF (30u)

/** \brief Length for Ifx_MTU_MEMFDA0_Bits.LMU10_FDA */
#define IFX_MTU_MEMFDA0_LMU10_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA0_Bits.LMU10_FDA */
#define IFX_MTU_MEMFDA0_LMU10_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA0_Bits.LMU10_FDA */
#define IFX_MTU_MEMFDA0_LMU10_FDA_OFF (31u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.CPU0_DMEM1_FDA */
#define IFX_MTU_MEMFDA1_CPU0_DMEM1_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.CPU0_DMEM1_FDA */
#define IFX_MTU_MEMFDA1_CPU0_DMEM1_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.CPU0_DMEM1_FDA */
#define IFX_MTU_MEMFDA1_CPU0_DMEM1_FDA_OFF (2u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.CPU1_DMEM1_FDA */
#define IFX_MTU_MEMFDA1_CPU1_DMEM1_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.CPU1_DMEM1_FDA */
#define IFX_MTU_MEMFDA1_CPU1_DMEM1_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.CPU1_DMEM1_FDA */
#define IFX_MTU_MEMFDA1_CPU1_DMEM1_FDA_OFF (3u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.SADMA_FDA */
#define IFX_MTU_MEMFDA1_SADMA_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.SADMA_FDA */
#define IFX_MTU_MEMFDA1_SADMA_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.SADMA_FDA */
#define IFX_MTU_MEMFDA1_SADMA_FDA_OFF (9u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.MCDS_FDA */
#define IFX_MTU_MEMFDA1_MCDS_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.MCDS_FDA */
#define IFX_MTU_MEMFDA1_MCDS_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.MCDS_FDA */
#define IFX_MTU_MEMFDA1_MCDS_FDA_OFF (11u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.EMEM0_FDA */
#define IFX_MTU_MEMFDA1_EMEM0_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.EMEM0_FDA */
#define IFX_MTU_MEMFDA1_EMEM0_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.EMEM0_FDA */
#define IFX_MTU_MEMFDA1_EMEM0_FDA_OFF (12u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.EMEM1_FDA */
#define IFX_MTU_MEMFDA1_EMEM1_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.EMEM1_FDA */
#define IFX_MTU_MEMFDA1_EMEM1_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.EMEM1_FDA */
#define IFX_MTU_MEMFDA1_EMEM1_FDA_OFF (13u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.EMEM_XTM_FDA */
#define IFX_MTU_MEMFDA1_EMEM_XTM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.EMEM_XTM_FDA */
#define IFX_MTU_MEMFDA1_EMEM_XTM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.EMEM_XTM_FDA */
#define IFX_MTU_MEMFDA1_EMEM_XTM_FDA_OFF (16u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.SPU_BUFFER0_FDA */
#define IFX_MTU_MEMFDA1_SPU_BUFFER0_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.SPU_BUFFER0_FDA */
#define IFX_MTU_MEMFDA1_SPU_BUFFER0_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.SPU_BUFFER0_FDA */
#define IFX_MTU_MEMFDA1_SPU_BUFFER0_FDA_OFF (17u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.SPU_BUFFER1_FDA */
#define IFX_MTU_MEMFDA1_SPU_BUFFER1_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.SPU_BUFFER1_FDA */
#define IFX_MTU_MEMFDA1_SPU_BUFFER1_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.SPU_BUFFER1_FDA */
#define IFX_MTU_MEMFDA1_SPU_BUFFER1_FDA_OFF (18u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.SPU_CONFIG0_FDA */
#define IFX_MTU_MEMFDA1_SPU_CONFIG0_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.SPU_CONFIG0_FDA */
#define IFX_MTU_MEMFDA1_SPU_CONFIG0_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.SPU_CONFIG0_FDA */
#define IFX_MTU_MEMFDA1_SPU_CONFIG0_FDA_OFF (19u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.SPU_CONFIG1_FDA */
#define IFX_MTU_MEMFDA1_SPU_CONFIG1_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.SPU_CONFIG1_FDA */
#define IFX_MTU_MEMFDA1_SPU_CONFIG1_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.SPU_CONFIG1_FDA */
#define IFX_MTU_MEMFDA1_SPU_CONFIG1_FDA_OFF (20u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.MCAN10_FDA */
#define IFX_MTU_MEMFDA1_MCAN10_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.MCAN10_FDA */
#define IFX_MTU_MEMFDA1_MCAN10_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.MCAN10_FDA */
#define IFX_MTU_MEMFDA1_MCAN10_FDA_OFF (30u)

/** \brief Length for Ifx_MTU_MEMFDA1_Bits.MCAN20_FDA */
#define IFX_MTU_MEMFDA1_MCAN20_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA1_Bits.MCAN20_FDA */
#define IFX_MTU_MEMFDA1_MCAN20_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA1_Bits.MCAN20_FDA */
#define IFX_MTU_MEMFDA1_MCAN20_FDA_OFF (31u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.ERAY_OBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_OBF0_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.ERAY_OBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_OBF0_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.ERAY_OBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_OBF0_FDA_OFF (2u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.ERAY_TBF_IBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_TBF_IBF0_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.ERAY_TBF_IBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_TBF_IBF0_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.ERAY_TBF_IBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_TBF_IBF0_FDA_OFF (4u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.ERAY_MBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_MBF0_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.ERAY_MBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_MBF0_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.ERAY_MBF0_FDA */
#define IFX_MTU_MEMFDA2_ERAY_MBF0_FDA_OFF (6u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SCR_XRAM_FDA */
#define IFX_MTU_MEMFDA2_SCR_XRAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SCR_XRAM_FDA */
#define IFX_MTU_MEMFDA2_SCR_XRAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SCR_XRAM_FDA */
#define IFX_MTU_MEMFDA2_SCR_XRAM_FDA_OFF (13u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SCR_RAMINT_FDA */
#define IFX_MTU_MEMFDA2_SCR_RAMINT_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SCR_RAMINT_FDA */
#define IFX_MTU_MEMFDA2_SCR_RAMINT_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SCR_RAMINT_FDA */
#define IFX_MTU_MEMFDA2_SCR_RAMINT_FDA_OFF (14u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.GIGETH_RX_FDA */
#define IFX_MTU_MEMFDA2_GIGETH_RX_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.GIGETH_RX_FDA */
#define IFX_MTU_MEMFDA2_GIGETH_RX_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.GIGETH_RX_FDA */
#define IFX_MTU_MEMFDA2_GIGETH_RX_FDA_OFF (18u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.GIGETH_TX_FDA */
#define IFX_MTU_MEMFDA2_GIGETH_TX_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.GIGETH_TX_FDA */
#define IFX_MTU_MEMFDA2_GIGETH_TX_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.GIGETH_TX_FDA */
#define IFX_MTU_MEMFDA2_GIGETH_TX_FDA_OFF (19u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.HSPDM_RAM_FDA */
#define IFX_MTU_MEMFDA2_HSPDM_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.HSPDM_RAM_FDA */
#define IFX_MTU_MEMFDA2_HSPDM_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.HSPDM_RAM_FDA */
#define IFX_MTU_MEMFDA2_HSPDM_RAM_FDA_OFF (21u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SPU_FFT00_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT00_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SPU_FFT00_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT00_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SPU_FFT00_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT00_RAM_FDA_OFF (24u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SPU_FFT01_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT01_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SPU_FFT01_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT01_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SPU_FFT01_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT01_RAM_FDA_OFF (25u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SPU_FFT10_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT10_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SPU_FFT10_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT10_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SPU_FFT10_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT10_RAM_FDA_OFF (26u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SPU_FFT11_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT11_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SPU_FFT11_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT11_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SPU_FFT11_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT11_RAM_FDA_OFF (27u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SPU_FFT20_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT20_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SPU_FFT20_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT20_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SPU_FFT20_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT20_RAM_FDA_OFF (28u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SPU_FFT21_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT21_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SPU_FFT21_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT21_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SPU_FFT21_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT21_RAM_FDA_OFF (29u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SPU_FFT30_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT30_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SPU_FFT30_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT30_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SPU_FFT30_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT30_RAM_FDA_OFF (30u)

/** \brief Length for Ifx_MTU_MEMFDA2_Bits.SPU_FFT31_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT31_RAM_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MEMFDA2_Bits.SPU_FFT31_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT31_RAM_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MEMFDA2_Bits.SPU_FFT31_RAM_FDA */
#define IFX_MTU_MEMFDA2_SPU_FFT31_RAM_FDA_OFF (31u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN0 */
#define IFX_MTU_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN0 */
#define IFX_MTU_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN0 */
#define IFX_MTU_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN1 */
#define IFX_MTU_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN1 */
#define IFX_MTU_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN1 */
#define IFX_MTU_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN2 */
#define IFX_MTU_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN2 */
#define IFX_MTU_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN2 */
#define IFX_MTU_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN3 */
#define IFX_MTU_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN3 */
#define IFX_MTU_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN3 */
#define IFX_MTU_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN4 */
#define IFX_MTU_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN4 */
#define IFX_MTU_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN4 */
#define IFX_MTU_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN5 */
#define IFX_MTU_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN5 */
#define IFX_MTU_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN5 */
#define IFX_MTU_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN6 */
#define IFX_MTU_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN6 */
#define IFX_MTU_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN6 */
#define IFX_MTU_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN7 */
#define IFX_MTU_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN7 */
#define IFX_MTU_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN7 */
#define IFX_MTU_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN8 */
#define IFX_MTU_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN8 */
#define IFX_MTU_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN8 */
#define IFX_MTU_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN9 */
#define IFX_MTU_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN9 */
#define IFX_MTU_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN9 */
#define IFX_MTU_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN10 */
#define IFX_MTU_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN10 */
#define IFX_MTU_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN10 */
#define IFX_MTU_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN11 */
#define IFX_MTU_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN11 */
#define IFX_MTU_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN11 */
#define IFX_MTU_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN12 */
#define IFX_MTU_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN12 */
#define IFX_MTU_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN12 */
#define IFX_MTU_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN13 */
#define IFX_MTU_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN13 */
#define IFX_MTU_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN13 */
#define IFX_MTU_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN14 */
#define IFX_MTU_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN14 */
#define IFX_MTU_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN14 */
#define IFX_MTU_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN15 */
#define IFX_MTU_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN15 */
#define IFX_MTU_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN15 */
#define IFX_MTU_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN16 */
#define IFX_MTU_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN16 */
#define IFX_MTU_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN16 */
#define IFX_MTU_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN17 */
#define IFX_MTU_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN17 */
#define IFX_MTU_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN17 */
#define IFX_MTU_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN18 */
#define IFX_MTU_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN18 */
#define IFX_MTU_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN18 */
#define IFX_MTU_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN19 */
#define IFX_MTU_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN19 */
#define IFX_MTU_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN19 */
#define IFX_MTU_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN20 */
#define IFX_MTU_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN20 */
#define IFX_MTU_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN20 */
#define IFX_MTU_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN21 */
#define IFX_MTU_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN21 */
#define IFX_MTU_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN21 */
#define IFX_MTU_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN22 */
#define IFX_MTU_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN22 */
#define IFX_MTU_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN22 */
#define IFX_MTU_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN23 */
#define IFX_MTU_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN23 */
#define IFX_MTU_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN23 */
#define IFX_MTU_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN24 */
#define IFX_MTU_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN24 */
#define IFX_MTU_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN24 */
#define IFX_MTU_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN25 */
#define IFX_MTU_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN25 */
#define IFX_MTU_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN25 */
#define IFX_MTU_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN26 */
#define IFX_MTU_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN26 */
#define IFX_MTU_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN26 */
#define IFX_MTU_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN27 */
#define IFX_MTU_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN27 */
#define IFX_MTU_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN27 */
#define IFX_MTU_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN28 */
#define IFX_MTU_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN28 */
#define IFX_MTU_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN28 */
#define IFX_MTU_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN29 */
#define IFX_MTU_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN29 */
#define IFX_MTU_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN29 */
#define IFX_MTU_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN30 */
#define IFX_MTU_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN30 */
#define IFX_MTU_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN30 */
#define IFX_MTU_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_MTU_ACCEN0_Bits.EN31 */
#define IFX_MTU_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_MTU_ACCEN0_Bits.EN31 */
#define IFX_MTU_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_MTU_ACCEN0_Bits.EN31 */
#define IFX_MTU_ACCEN0_EN31_OFF (31u)

/** \brief Length for Ifx_MTU_MC_CONFIG0_Bits.ACCSTYPE */
#define IFX_MTU_MC_CONFIG0_ACCSTYPE_LEN (8u)

/** \brief Mask for Ifx_MTU_MC_CONFIG0_Bits.ACCSTYPE */
#define IFX_MTU_MC_CONFIG0_ACCSTYPE_MSK (0xffu)

/** \brief Offset for Ifx_MTU_MC_CONFIG0_Bits.ACCSTYPE */
#define IFX_MTU_MC_CONFIG0_ACCSTYPE_OFF (0u)

/** \brief Length for Ifx_MTU_MC_CONFIG0_Bits.NUMACCS */
#define IFX_MTU_MC_CONFIG0_NUMACCS_LEN (4u)

/** \brief Mask for Ifx_MTU_MC_CONFIG0_Bits.NUMACCS */
#define IFX_MTU_MC_CONFIG0_NUMACCS_MSK (0xfu)

/** \brief Offset for Ifx_MTU_MC_CONFIG0_Bits.NUMACCS */
#define IFX_MTU_MC_CONFIG0_NUMACCS_OFF (12u)

/** \brief Length for Ifx_MTU_MC_CONFIG1_Bits.ACCSPAT */
#define IFX_MTU_MC_CONFIG1_ACCSPAT_LEN (8u)

/** \brief Mask for Ifx_MTU_MC_CONFIG1_Bits.ACCSPAT */
#define IFX_MTU_MC_CONFIG1_ACCSPAT_MSK (0xffu)

/** \brief Offset for Ifx_MTU_MC_CONFIG1_Bits.ACCSPAT */
#define IFX_MTU_MC_CONFIG1_ACCSPAT_OFF (0u)

/** \brief Length for Ifx_MTU_MC_CONFIG1_Bits.SELFASTB */
#define IFX_MTU_MC_CONFIG1_SELFASTB_LEN (4u)

/** \brief Mask for Ifx_MTU_MC_CONFIG1_Bits.SELFASTB */
#define IFX_MTU_MC_CONFIG1_SELFASTB_MSK (0xfu)

/** \brief Offset for Ifx_MTU_MC_CONFIG1_Bits.SELFASTB */
#define IFX_MTU_MC_CONFIG1_SELFASTB_OFF (8u)

/** \brief Length for Ifx_MTU_MC_CONFIG1_Bits.AG_MOD */
#define IFX_MTU_MC_CONFIG1_AG_MOD_LEN (4u)

/** \brief Mask for Ifx_MTU_MC_CONFIG1_Bits.AG_MOD */
#define IFX_MTU_MC_CONFIG1_AG_MOD_MSK (0xfu)

/** \brief Offset for Ifx_MTU_MC_CONFIG1_Bits.AG_MOD */
#define IFX_MTU_MC_CONFIG1_AG_MOD_OFF (12u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.START */
#define IFX_MTU_MC_MCONTROL_START_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.START */
#define IFX_MTU_MC_MCONTROL_START_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.START */
#define IFX_MTU_MC_MCONTROL_START_OFF (0u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.RESUME */
#define IFX_MTU_MC_MCONTROL_RESUME_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.RESUME */
#define IFX_MTU_MC_MCONTROL_RESUME_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.RESUME */
#define IFX_MTU_MC_MCONTROL_RESUME_OFF (1u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.ESTF */
#define IFX_MTU_MC_MCONTROL_ESTF_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.ESTF */
#define IFX_MTU_MC_MCONTROL_ESTF_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.ESTF */
#define IFX_MTU_MC_MCONTROL_ESTF_OFF (2u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.DIR */
#define IFX_MTU_MC_MCONTROL_DIR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.DIR */
#define IFX_MTU_MC_MCONTROL_DIR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.DIR */
#define IFX_MTU_MC_MCONTROL_DIR_OFF (3u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.DINIT */
#define IFX_MTU_MC_MCONTROL_DINIT_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.DINIT */
#define IFX_MTU_MC_MCONTROL_DINIT_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.DINIT */
#define IFX_MTU_MC_MCONTROL_DINIT_OFF (4u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.RCADR */
#define IFX_MTU_MC_MCONTROL_RCADR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.RCADR */
#define IFX_MTU_MC_MCONTROL_RCADR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.RCADR */
#define IFX_MTU_MC_MCONTROL_RCADR_OFF (5u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.ROWTOG */
#define IFX_MTU_MC_MCONTROL_ROWTOG_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.ROWTOG */
#define IFX_MTU_MC_MCONTROL_ROWTOG_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.ROWTOG */
#define IFX_MTU_MC_MCONTROL_ROWTOG_OFF (6u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.BITTOG */
#define IFX_MTU_MC_MCONTROL_BITTOG_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.BITTOG */
#define IFX_MTU_MC_MCONTROL_BITTOG_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.BITTOG */
#define IFX_MTU_MC_MCONTROL_BITTOG_OFF (7u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.FAILDMP */
#define IFX_MTU_MC_MCONTROL_FAILDMP_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.FAILDMP */
#define IFX_MTU_MC_MCONTROL_FAILDMP_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.FAILDMP */
#define IFX_MTU_MC_MCONTROL_FAILDMP_OFF (9u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.EN_DESCR */
#define IFX_MTU_MC_MCONTROL_EN_DESCR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.EN_DESCR */
#define IFX_MTU_MC_MCONTROL_EN_DESCR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.EN_DESCR */
#define IFX_MTU_MC_MCONTROL_EN_DESCR_OFF (10u)

/** \brief Length for Ifx_MTU_MC_MCONTROL_Bits.SRAM_CLR */
#define IFX_MTU_MC_MCONTROL_SRAM_CLR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MCONTROL_Bits.SRAM_CLR */
#define IFX_MTU_MC_MCONTROL_SRAM_CLR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MCONTROL_Bits.SRAM_CLR */
#define IFX_MTU_MC_MCONTROL_SRAM_CLR_OFF (15u)

/** \brief Length for Ifx_MTU_MC_MSTATUS_Bits.DONE */
#define IFX_MTU_MC_MSTATUS_DONE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MSTATUS_Bits.DONE */
#define IFX_MTU_MC_MSTATUS_DONE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MSTATUS_Bits.DONE */
#define IFX_MTU_MC_MSTATUS_DONE_OFF (0u)

/** \brief Length for Ifx_MTU_MC_MSTATUS_Bits.FAIL */
#define IFX_MTU_MC_MSTATUS_FAIL_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MSTATUS_Bits.FAIL */
#define IFX_MTU_MC_MSTATUS_FAIL_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MSTATUS_Bits.FAIL */
#define IFX_MTU_MC_MSTATUS_FAIL_OFF (1u)

/** \brief Length for Ifx_MTU_MC_MSTATUS_Bits.FDA */
#define IFX_MTU_MC_MSTATUS_FDA_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MSTATUS_Bits.FDA */
#define IFX_MTU_MC_MSTATUS_FDA_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MSTATUS_Bits.FDA */
#define IFX_MTU_MC_MSTATUS_FDA_OFF (2u)

/** \brief Length for Ifx_MTU_MC_MSTATUS_Bits.SFAIL */
#define IFX_MTU_MC_MSTATUS_SFAIL_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_MSTATUS_Bits.SFAIL */
#define IFX_MTU_MC_MSTATUS_SFAIL_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_MSTATUS_Bits.SFAIL */
#define IFX_MTU_MC_MSTATUS_SFAIL_OFF (3u)

/** \brief Length for Ifx_MTU_MC_RANGE_Bits.ADDR */
#define IFX_MTU_MC_RANGE_ADDR_LEN (14u)

/** \brief Mask for Ifx_MTU_MC_RANGE_Bits.ADDR */
#define IFX_MTU_MC_RANGE_ADDR_MSK (0x3fffu)

/** \brief Offset for Ifx_MTU_MC_RANGE_Bits.ADDR */
#define IFX_MTU_MC_RANGE_ADDR_OFF (0u)

/** \brief Length for Ifx_MTU_MC_RANGE_Bits.RAEN */
#define IFX_MTU_MC_RANGE_RAEN_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_RANGE_Bits.RAEN */
#define IFX_MTU_MC_RANGE_RAEN_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_RANGE_Bits.RAEN */
#define IFX_MTU_MC_RANGE_RAEN_OFF (15u)

/** \brief Length for Ifx_MTU_MC_REVID_Bits.REV_ID */
#define IFX_MTU_MC_REVID_REV_ID_LEN (16u)

/** \brief Mask for Ifx_MTU_MC_REVID_Bits.REV_ID */
#define IFX_MTU_MC_REVID_REV_ID_MSK (0xffffu)

/** \brief Offset for Ifx_MTU_MC_REVID_Bits.REV_ID */
#define IFX_MTU_MC_REVID_REV_ID_OFF (0u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.CENE */
#define IFX_MTU_MC_ECCS_CENE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.CENE */
#define IFX_MTU_MC_ECCS_CENE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.CENE */
#define IFX_MTU_MC_ECCS_CENE_OFF (0u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.UCENE */
#define IFX_MTU_MC_ECCS_UCENE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.UCENE */
#define IFX_MTU_MC_ECCS_UCENE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.UCENE */
#define IFX_MTU_MC_ECCS_UCENE_OFF (1u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.MENE */
#define IFX_MTU_MC_ECCS_MENE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.MENE */
#define IFX_MTU_MC_ECCS_MENE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.MENE */
#define IFX_MTU_MC_ECCS_MENE_OFF (2u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.ECE */
#define IFX_MTU_MC_ECCS_ECE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.ECE */
#define IFX_MTU_MC_ECCS_ECE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.ECE */
#define IFX_MTU_MC_ECCS_ECE_OFF (3u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.TRE */
#define IFX_MTU_MC_ECCS_TRE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.TRE */
#define IFX_MTU_MC_ECCS_TRE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.TRE */
#define IFX_MTU_MC_ECCS_TRE_OFF (4u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.BFLE */
#define IFX_MTU_MC_ECCS_BFLE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.BFLE */
#define IFX_MTU_MC_ECCS_BFLE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.BFLE */
#define IFX_MTU_MC_ECCS_BFLE_OFF (5u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.SFLE */
#define IFX_MTU_MC_ECCS_SFLE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.SFLE */
#define IFX_MTU_MC_ECCS_SFLE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.SFLE */
#define IFX_MTU_MC_ECCS_SFLE_OFF (6u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.ECCMAP */
#define IFX_MTU_MC_ECCS_ECCMAP_LEN (2u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.ECCMAP */
#define IFX_MTU_MC_ECCS_ECCMAP_MSK (0x3u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.ECCMAP */
#define IFX_MTU_MC_ECCS_ECCMAP_OFF (8u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.TC_TWR_SEL */
#define IFX_MTU_MC_ECCS_TC_TWR_SEL_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.TC_TWR_SEL */
#define IFX_MTU_MC_ECCS_TC_TWR_SEL_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.TC_TWR_SEL */
#define IFX_MTU_MC_ECCS_TC_TWR_SEL_OFF (10u)

/** \brief Length for Ifx_MTU_MC_ECCS_Bits.SFFD */
#define IFX_MTU_MC_ECCS_SFFD_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCS_Bits.SFFD */
#define IFX_MTU_MC_ECCS_SFFD_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCS_Bits.SFFD */
#define IFX_MTU_MC_ECCS_SFFD_OFF (11u)

/** \brief Length for Ifx_MTU_MC_ECCD_Bits.SERR */
#define IFX_MTU_MC_ECCD_SERR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCD_Bits.SERR */
#define IFX_MTU_MC_ECCD_SERR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCD_Bits.SERR */
#define IFX_MTU_MC_ECCD_SERR_OFF (0u)

/** \brief Length for Ifx_MTU_MC_ECCD_Bits.CERR */
#define IFX_MTU_MC_ECCD_CERR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCD_Bits.CERR */
#define IFX_MTU_MC_ECCD_CERR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCD_Bits.CERR */
#define IFX_MTU_MC_ECCD_CERR_OFF (1u)

/** \brief Length for Ifx_MTU_MC_ECCD_Bits.UCERR */
#define IFX_MTU_MC_ECCD_UCERR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCD_Bits.UCERR */
#define IFX_MTU_MC_ECCD_UCERR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCD_Bits.UCERR */
#define IFX_MTU_MC_ECCD_UCERR_OFF (2u)

/** \brief Length for Ifx_MTU_MC_ECCD_Bits.MERR */
#define IFX_MTU_MC_ECCD_MERR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCD_Bits.MERR */
#define IFX_MTU_MC_ECCD_MERR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCD_Bits.MERR */
#define IFX_MTU_MC_ECCD_MERR_OFF (3u)

/** \brief Length for Ifx_MTU_MC_ECCD_Bits.TRC */
#define IFX_MTU_MC_ECCD_TRC_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCD_Bits.TRC */
#define IFX_MTU_MC_ECCD_TRC_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCD_Bits.TRC */
#define IFX_MTU_MC_ECCD_TRC_OFF (4u)

/** \brief Length for Ifx_MTU_MC_ECCD_Bits.VAL */
#define IFX_MTU_MC_ECCD_VAL_LEN (5u)

/** \brief Mask for Ifx_MTU_MC_ECCD_Bits.VAL */
#define IFX_MTU_MC_ECCD_VAL_MSK (0x1fu)

/** \brief Offset for Ifx_MTU_MC_ECCD_Bits.VAL */
#define IFX_MTU_MC_ECCD_VAL_OFF (5u)

/** \brief Length for Ifx_MTU_MC_ECCD_Bits.PERMERR */
#define IFX_MTU_MC_ECCD_PERMERR_LEN (5u)

/** \brief Mask for Ifx_MTU_MC_ECCD_Bits.PERMERR */
#define IFX_MTU_MC_ECCD_PERMERR_MSK (0x1fu)

/** \brief Offset for Ifx_MTU_MC_ECCD_Bits.PERMERR */
#define IFX_MTU_MC_ECCD_PERMERR_OFF (10u)

/** \brief Length for Ifx_MTU_MC_ECCD_Bits.EOV */
#define IFX_MTU_MC_ECCD_EOV_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ECCD_Bits.EOV */
#define IFX_MTU_MC_ECCD_EOV_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ECCD_Bits.EOV */
#define IFX_MTU_MC_ECCD_EOV_OFF (15u)

/** \brief Length for Ifx_MTU_MC_ETRR_Bits.ADDR */
#define IFX_MTU_MC_ETRR_ADDR_LEN (13u)

/** \brief Mask for Ifx_MTU_MC_ETRR_Bits.ADDR */
#define IFX_MTU_MC_ETRR_ADDR_MSK (0x1fffu)

/** \brief Offset for Ifx_MTU_MC_ETRR_Bits.ADDR */
#define IFX_MTU_MC_ETRR_ADDR_OFF (0u)

/** \brief Length for Ifx_MTU_MC_ETRR_Bits.MBI */
#define IFX_MTU_MC_ETRR_MBI_LEN (3u)

/** \brief Mask for Ifx_MTU_MC_ETRR_Bits.MBI */
#define IFX_MTU_MC_ETRR_MBI_MSK (0x7u)

/** \brief Offset for Ifx_MTU_MC_ETRR_Bits.MBI */
#define IFX_MTU_MC_ETRR_MBI_OFF (13u)

/** \brief Length for Ifx_MTU_MC_RDBFL_Bits.WDATA */
#define IFX_MTU_MC_RDBFL_WDATA_LEN (16u)

/** \brief Mask for Ifx_MTU_MC_RDBFL_Bits.WDATA */
#define IFX_MTU_MC_RDBFL_WDATA_MSK (0xffffu)

/** \brief Offset for Ifx_MTU_MC_RDBFL_Bits.WDATA */
#define IFX_MTU_MC_RDBFL_WDATA_OFF (0u)

/** \brief Length for Ifx_MTU_MC_ALMSRCS_Bits.SBE */
#define IFX_MTU_MC_ALMSRCS_SBE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ALMSRCS_Bits.SBE */
#define IFX_MTU_MC_ALMSRCS_SBE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ALMSRCS_Bits.SBE */
#define IFX_MTU_MC_ALMSRCS_SBE_OFF (0u)

/** \brief Length for Ifx_MTU_MC_ALMSRCS_Bits.DBE */
#define IFX_MTU_MC_ALMSRCS_DBE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ALMSRCS_Bits.DBE */
#define IFX_MTU_MC_ALMSRCS_DBE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ALMSRCS_Bits.DBE */
#define IFX_MTU_MC_ALMSRCS_DBE_OFF (1u)

/** \brief Length for Ifx_MTU_MC_ALMSRCS_Bits.ADDRE */
#define IFX_MTU_MC_ALMSRCS_ADDRE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ALMSRCS_Bits.ADDRE */
#define IFX_MTU_MC_ALMSRCS_ADDRE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ALMSRCS_Bits.ADDRE */
#define IFX_MTU_MC_ALMSRCS_ADDRE_OFF (2u)

/** \brief Length for Ifx_MTU_MC_ALMSRCS_Bits.OVFE */
#define IFX_MTU_MC_ALMSRCS_OVFE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ALMSRCS_Bits.OVFE */
#define IFX_MTU_MC_ALMSRCS_OVFE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ALMSRCS_Bits.OVFE */
#define IFX_MTU_MC_ALMSRCS_OVFE_OFF (3u)

/** \brief Length for Ifx_MTU_MC_ALMSRCS_Bits.OPENE */
#define IFX_MTU_MC_ALMSRCS_OPENE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ALMSRCS_Bits.OPENE */
#define IFX_MTU_MC_ALMSRCS_OPENE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ALMSRCS_Bits.OPENE */
#define IFX_MTU_MC_ALMSRCS_OPENE_OFF (4u)

/** \brief Length for Ifx_MTU_MC_ALMSRCS_Bits.MISCE */
#define IFX_MTU_MC_ALMSRCS_MISCE_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ALMSRCS_Bits.MISCE */
#define IFX_MTU_MC_ALMSRCS_MISCE_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ALMSRCS_Bits.MISCE */
#define IFX_MTU_MC_ALMSRCS_MISCE_OFF (5u)

/** \brief Length for Ifx_MTU_MC_FAULTSTS_Bits.OPERR */
#define IFX_MTU_MC_FAULTSTS_OPERR_LEN (6u)

/** \brief Mask for Ifx_MTU_MC_FAULTSTS_Bits.OPERR */
#define IFX_MTU_MC_FAULTSTS_OPERR_MSK (0x3fu)

/** \brief Offset for Ifx_MTU_MC_FAULTSTS_Bits.OPERR */
#define IFX_MTU_MC_FAULTSTS_OPERR_OFF (0u)

/** \brief Length for Ifx_MTU_MC_FAULTSTS_Bits.MISCERR */
#define IFX_MTU_MC_FAULTSTS_MISCERR_LEN (6u)

/** \brief Mask for Ifx_MTU_MC_FAULTSTS_Bits.MISCERR */
#define IFX_MTU_MC_FAULTSTS_MISCERR_MSK (0x3fu)

/** \brief Offset for Ifx_MTU_MC_FAULTSTS_Bits.MISCERR */
#define IFX_MTU_MC_FAULTSTS_MISCERR_OFF (8u)

/** \brief Length for Ifx_MTU_MC_ERRINFO_Bits.SBERR */
#define IFX_MTU_MC_ERRINFO_SBERR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ERRINFO_Bits.SBERR */
#define IFX_MTU_MC_ERRINFO_SBERR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ERRINFO_Bits.SBERR */
#define IFX_MTU_MC_ERRINFO_SBERR_OFF (0u)

/** \brief Length for Ifx_MTU_MC_ERRINFO_Bits.DBERR */
#define IFX_MTU_MC_ERRINFO_DBERR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ERRINFO_Bits.DBERR */
#define IFX_MTU_MC_ERRINFO_DBERR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ERRINFO_Bits.DBERR */
#define IFX_MTU_MC_ERRINFO_DBERR_OFF (1u)

/** \brief Length for Ifx_MTU_MC_ERRINFO_Bits.ADDRERR */
#define IFX_MTU_MC_ERRINFO_ADDRERR_LEN (1u)

/** \brief Mask for Ifx_MTU_MC_ERRINFO_Bits.ADDRERR */
#define IFX_MTU_MC_ERRINFO_ADDRERR_MSK (0x1u)

/** \brief Offset for Ifx_MTU_MC_ERRINFO_Bits.ADDRERR */
#define IFX_MTU_MC_ERRINFO_ADDRERR_OFF (2u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXMTU_BF_H */
