/**
 * \file IfxDmu_bf.h
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
 * \defgroup IfxSfr_Dmu_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Dmu_Registers
 * 
 */
#ifndef IFXDMU_BF_H
#define IFXDMU_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Dmu_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_DMU_HF_ID_Bits.MOD_REV */
#define IFX_DMU_HF_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_DMU_HF_ID_Bits.MOD_REV */
#define IFX_DMU_HF_ID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_DMU_HF_ID_Bits.MOD_REV */
#define IFX_DMU_HF_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_DMU_HF_ID_Bits.MOD_TYPE */
#define IFX_DMU_HF_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_DMU_HF_ID_Bits.MOD_TYPE */
#define IFX_DMU_HF_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_DMU_HF_ID_Bits.MOD_TYPE */
#define IFX_DMU_HF_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_DMU_HF_ID_Bits.MOD_NUMBER */
#define IFX_DMU_HF_ID_MOD_NUMBER_LEN (8u)

/** \brief Mask for Ifx_DMU_HF_ID_Bits.MOD_NUMBER */
#define IFX_DMU_HF_ID_MOD_NUMBER_MSK (0xffu)

/** \brief Offset for Ifx_DMU_HF_ID_Bits.MOD_NUMBER */
#define IFX_DMU_HF_ID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_DMU_HF_ID_Bits.FLASH_REV */
#define IFX_DMU_HF_ID_FLASH_REV_LEN (8u)

/** \brief Mask for Ifx_DMU_HF_ID_Bits.FLASH_REV */
#define IFX_DMU_HF_ID_FLASH_REV_MSK (0xffu)

/** \brief Offset for Ifx_DMU_HF_ID_Bits.FLASH_REV */
#define IFX_DMU_HF_ID_FLASH_REV_OFF (24u)

/** \brief Length for Ifx_DMU_HF_STATUS_Bits.D0BUSY */
#define IFX_DMU_HF_STATUS_D0BUSY_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_STATUS_Bits.D0BUSY */
#define IFX_DMU_HF_STATUS_D0BUSY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_STATUS_Bits.D0BUSY */
#define IFX_DMU_HF_STATUS_D0BUSY_OFF (0u)

/** \brief Length for Ifx_DMU_HF_STATUS_Bits.D1BUSY */
#define IFX_DMU_HF_STATUS_D1BUSY_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_STATUS_Bits.D1BUSY */
#define IFX_DMU_HF_STATUS_D1BUSY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_STATUS_Bits.D1BUSY */
#define IFX_DMU_HF_STATUS_D1BUSY_OFF (1u)

/** \brief Length for Ifx_DMU_HF_STATUS_Bits.P0BUSY */
#define IFX_DMU_HF_STATUS_P0BUSY_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_STATUS_Bits.P0BUSY */
#define IFX_DMU_HF_STATUS_P0BUSY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_STATUS_Bits.P0BUSY */
#define IFX_DMU_HF_STATUS_P0BUSY_OFF (2u)

/** \brief Length for Ifx_DMU_HF_STATUS_Bits.P1BUSY */
#define IFX_DMU_HF_STATUS_P1BUSY_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_STATUS_Bits.P1BUSY */
#define IFX_DMU_HF_STATUS_P1BUSY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_STATUS_Bits.P1BUSY */
#define IFX_DMU_HF_STATUS_P1BUSY_OFF (3u)

/** \brief Length for Ifx_DMU_HF_STATUS_Bits.P2BUSY */
#define IFX_DMU_HF_STATUS_P2BUSY_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_STATUS_Bits.P2BUSY */
#define IFX_DMU_HF_STATUS_P2BUSY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_STATUS_Bits.P2BUSY */
#define IFX_DMU_HF_STATUS_P2BUSY_OFF (4u)

/** \brief Length for Ifx_DMU_HF_STATUS_Bits.P3BUSY */
#define IFX_DMU_HF_STATUS_P3BUSY_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_STATUS_Bits.P3BUSY */
#define IFX_DMU_HF_STATUS_P3BUSY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_STATUS_Bits.P3BUSY */
#define IFX_DMU_HF_STATUS_P3BUSY_OFF (5u)

/** \brief Length for Ifx_DMU_HF_STATUS_Bits.DFPAGE */
#define IFX_DMU_HF_STATUS_DFPAGE_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_STATUS_Bits.DFPAGE */
#define IFX_DMU_HF_STATUS_DFPAGE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_STATUS_Bits.DFPAGE */
#define IFX_DMU_HF_STATUS_DFPAGE_OFF (20u)

/** \brief Length for Ifx_DMU_HF_STATUS_Bits.PFPAGE */
#define IFX_DMU_HF_STATUS_PFPAGE_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_STATUS_Bits.PFPAGE */
#define IFX_DMU_HF_STATUS_PFPAGE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_STATUS_Bits.PFPAGE */
#define IFX_DMU_HF_STATUS_PFPAGE_OFF (21u)

/** \brief Length for Ifx_DMU_HF_CONTROL_Bits.FSIENPE */
#define IFX_DMU_HF_CONTROL_FSIENPE_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONTROL_Bits.FSIENPE */
#define IFX_DMU_HF_CONTROL_FSIENPE_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONTROL_Bits.FSIENPE */
#define IFX_DMU_HF_CONTROL_FSIENPE_OFF (4u)

/** \brief Length for Ifx_DMU_HF_CONTROL_Bits.WSERRINJ */
#define IFX_DMU_HF_CONTROL_WSERRINJ_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CONTROL_Bits.WSERRINJ */
#define IFX_DMU_HF_CONTROL_WSERRINJ_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CONTROL_Bits.WSERRINJ */
#define IFX_DMU_HF_CONTROL_WSERRINJ_OFF (7u)

/** \brief Length for Ifx_DMU_HF_CONTROL_Bits.DDFP */
#define IFX_DMU_HF_CONTROL_DDFP_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CONTROL_Bits.DDFP */
#define IFX_DMU_HF_CONTROL_DDFP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CONTROL_Bits.DDFP */
#define IFX_DMU_HF_CONTROL_DDFP_OFF (8u)

/** \brief Length for Ifx_DMU_HF_CONTROL_Bits.DDFD */
#define IFX_DMU_HF_CONTROL_DDFD_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CONTROL_Bits.DDFD */
#define IFX_DMU_HF_CONTROL_DDFD_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CONTROL_Bits.DDFD */
#define IFX_DMU_HF_CONTROL_DDFD_OFF (9u)

/** \brief Length for Ifx_DMU_HF_CONTROL_Bits.CPROG */
#define IFX_DMU_HF_CONTROL_CPROG_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CONTROL_Bits.CPROG */
#define IFX_DMU_HF_CONTROL_CPROG_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CONTROL_Bits.CPROG */
#define IFX_DMU_HF_CONTROL_CPROG_OFF (16u)

/** \brief Length for Ifx_DMU_HF_CONTROL_Bits.CERASE */
#define IFX_DMU_HF_CONTROL_CERASE_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CONTROL_Bits.CERASE */
#define IFX_DMU_HF_CONTROL_CERASE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CONTROL_Bits.CERASE */
#define IFX_DMU_HF_CONTROL_CERASE_OFF (17u)

/** \brief Length for Ifx_DMU_HF_OPERATION_Bits.PROG */
#define IFX_DMU_HF_OPERATION_PROG_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_OPERATION_Bits.PROG */
#define IFX_DMU_HF_OPERATION_PROG_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_OPERATION_Bits.PROG */
#define IFX_DMU_HF_OPERATION_PROG_OFF (0u)

/** \brief Length for Ifx_DMU_HF_OPERATION_Bits.ERASE */
#define IFX_DMU_HF_OPERATION_ERASE_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_OPERATION_Bits.ERASE */
#define IFX_DMU_HF_OPERATION_ERASE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_OPERATION_Bits.ERASE */
#define IFX_DMU_HF_OPERATION_ERASE_OFF (1u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISP */
#define IFX_DMU_HF_PROTECT_PRODISP_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISP */
#define IFX_DMU_HF_PROTECT_PRODISP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISP */
#define IFX_DMU_HF_PROTECT_PRODISP_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISD */
#define IFX_DMU_HF_PROTECT_PRODISD_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISD */
#define IFX_DMU_HF_PROTECT_PRODISD_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISD */
#define IFX_DMU_HF_PROTECT_PRODISD_OFF (1u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISDBG */
#define IFX_DMU_HF_PROTECT_PRODISDBG_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISDBG */
#define IFX_DMU_HF_PROTECT_PRODISDBG_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISDBG */
#define IFX_DMU_HF_PROTECT_PRODISDBG_OFF (2u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISEC */
#define IFX_DMU_HF_PROTECT_PRODISEC_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISEC */
#define IFX_DMU_HF_PROTECT_PRODISEC_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISEC */
#define IFX_DMU_HF_PROTECT_PRODISEC_OFF (3u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISBMHD */
#define IFX_DMU_HF_PROTECT_PRODISBMHD_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISBMHD */
#define IFX_DMU_HF_PROTECT_PRODISBMHD_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISBMHD */
#define IFX_DMU_HF_PROTECT_PRODISBMHD_OFF (4u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISSWAP */
#define IFX_DMU_HF_PROTECT_PRODISSWAP_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISSWAP */
#define IFX_DMU_HF_PROTECT_PRODISSWAP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISSWAP */
#define IFX_DMU_HF_PROTECT_PRODISSWAP_OFF (5u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISP0 */
#define IFX_DMU_HF_PROTECT_PRODISP0_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISP0 */
#define IFX_DMU_HF_PROTECT_PRODISP0_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISP0 */
#define IFX_DMU_HF_PROTECT_PRODISP0_OFF (8u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISP1 */
#define IFX_DMU_HF_PROTECT_PRODISP1_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISP1 */
#define IFX_DMU_HF_PROTECT_PRODISP1_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISP1 */
#define IFX_DMU_HF_PROTECT_PRODISP1_OFF (9u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISP2 */
#define IFX_DMU_HF_PROTECT_PRODISP2_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISP2 */
#define IFX_DMU_HF_PROTECT_PRODISP2_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISP2 */
#define IFX_DMU_HF_PROTECT_PRODISP2_OFF (10u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.PRODISP3 */
#define IFX_DMU_HF_PROTECT_PRODISP3_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.PRODISP3 */
#define IFX_DMU_HF_PROTECT_PRODISP3_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.PRODISP3 */
#define IFX_DMU_HF_PROTECT_PRODISP3_OFF (11u)

/** \brief Length for Ifx_DMU_HF_PROTECT_Bits.SRT */
#define IFX_DMU_HF_PROTECT_SRT_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROTECT_Bits.SRT */
#define IFX_DMU_HF_PROTECT_SRT_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROTECT_Bits.SRT */
#define IFX_DMU_HF_PROTECT_SRT_OFF (24u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD0O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD0O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD0O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD0O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD0O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD0O_OFF (0u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD1O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD1O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD1O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD1O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD1O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD1O_OFF (2u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD2O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD2O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD2O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD2O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD2O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD2O_OFF (4u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD3O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD3O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD3O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD3O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD3O */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD3O_OFF (6u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINUSER */
#define IFX_DMU_HF_CONFIRM0_PROINUSER_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINUSER */
#define IFX_DMU_HF_CONFIRM0_PROINUSER_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINUSER */
#define IFX_DMU_HF_CONFIRM0_PROINUSER_OFF (10u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINTEST */
#define IFX_DMU_HF_CONFIRM0_PROINTEST_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINTEST */
#define IFX_DMU_HF_CONFIRM0_PROINTEST_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINTEST */
#define IFX_DMU_HF_CONFIRM0_PROINTEST_OFF (12u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINHSMCFG */
#define IFX_DMU_HF_CONFIRM0_PROINHSMCFG_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINHSMCFG */
#define IFX_DMU_HF_CONFIRM0_PROINHSMCFG_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINHSMCFG */
#define IFX_DMU_HF_CONFIRM0_PROINHSMCFG_OFF (14u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD0C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD0C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD0C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD0C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD0C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD0C_OFF (16u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD1C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD1C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD1C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD1C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD1C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD1C_OFF (18u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD2C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD2C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD2C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD2C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD2C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD2C_OFF (20u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD3C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD3C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD3C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD3C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINBMHD3C */
#define IFX_DMU_HF_CONFIRM0_PROINBMHD3C_OFF (22u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINREDSEC */
#define IFX_DMU_HF_CONFIRM0_PROINREDSEC_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINREDSEC */
#define IFX_DMU_HF_CONFIRM0_PROINREDSEC_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINREDSEC */
#define IFX_DMU_HF_CONFIRM0_PROINREDSEC_OFF (24u)

/** \brief Length for Ifx_DMU_HF_CONFIRM0_Bits.PROINSRT */
#define IFX_DMU_HF_CONFIRM0_PROINSRT_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM0_Bits.PROINSRT */
#define IFX_DMU_HF_CONFIRM0_PROINSRT_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM0_Bits.PROINSRT */
#define IFX_DMU_HF_CONFIRM0_PROINSRT_OFF (30u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINPO */
#define IFX_DMU_HF_CONFIRM1_PROINPO_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINPO */
#define IFX_DMU_HF_CONFIRM1_PROINPO_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINPO */
#define IFX_DMU_HF_CONFIRM1_PROINPO_OFF (0u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINDO */
#define IFX_DMU_HF_CONFIRM1_PROINDO_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINDO */
#define IFX_DMU_HF_CONFIRM1_PROINDO_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINDO */
#define IFX_DMU_HF_CONFIRM1_PROINDO_OFF (2u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINDBGO */
#define IFX_DMU_HF_CONFIRM1_PROINDBGO_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINDBGO */
#define IFX_DMU_HF_CONFIRM1_PROINDBGO_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINDBGO */
#define IFX_DMU_HF_CONFIRM1_PROINDBGO_OFF (4u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMO */
#define IFX_DMU_HF_CONFIRM1_PROINHSMO_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMO */
#define IFX_DMU_HF_CONFIRM1_PROINHSMO_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMO */
#define IFX_DMU_HF_CONFIRM1_PROINHSMO_OFF (6u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP0O */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP0O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP0O */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP0O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP0O */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP0O_OFF (8u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP1O */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP1O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP1O */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP1O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP1O */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP1O_OFF (10u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINECO */
#define IFX_DMU_HF_CONFIRM1_PROINECO_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINECO */
#define IFX_DMU_HF_CONFIRM1_PROINECO_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINECO */
#define IFX_DMU_HF_CONFIRM1_PROINECO_OFF (12u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINPC */
#define IFX_DMU_HF_CONFIRM1_PROINPC_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINPC */
#define IFX_DMU_HF_CONFIRM1_PROINPC_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINPC */
#define IFX_DMU_HF_CONFIRM1_PROINPC_OFF (16u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINDC */
#define IFX_DMU_HF_CONFIRM1_PROINDC_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINDC */
#define IFX_DMU_HF_CONFIRM1_PROINDC_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINDC */
#define IFX_DMU_HF_CONFIRM1_PROINDC_OFF (18u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINDBGC */
#define IFX_DMU_HF_CONFIRM1_PROINDBGC_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINDBGC */
#define IFX_DMU_HF_CONFIRM1_PROINDBGC_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINDBGC */
#define IFX_DMU_HF_CONFIRM1_PROINDBGC_OFF (20u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMC */
#define IFX_DMU_HF_CONFIRM1_PROINHSMC_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMC */
#define IFX_DMU_HF_CONFIRM1_PROINHSMC_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMC */
#define IFX_DMU_HF_CONFIRM1_PROINHSMC_OFF (22u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP0C */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP0C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP0C */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP0C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP0C */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP0C_OFF (24u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP1C */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP1C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP1C */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP1C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINHSMCOTP1C */
#define IFX_DMU_HF_CONFIRM1_PROINHSMCOTP1C_OFF (26u)

/** \brief Length for Ifx_DMU_HF_CONFIRM1_Bits.PROINECC */
#define IFX_DMU_HF_CONFIRM1_PROINECC_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM1_Bits.PROINECC */
#define IFX_DMU_HF_CONFIRM1_PROINECC_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM1_Bits.PROINECC */
#define IFX_DMU_HF_CONFIRM1_PROINECC_OFF (28u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP0O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP0O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP0O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP0O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP0O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP0O_OFF (0u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP1O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP1O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP1O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP1O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP1O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP1O_OFF (2u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP2O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP2O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP2O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP2O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP2O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP2O_OFF (4u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP3O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP3O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP3O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP3O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP3O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP3O_OFF (6u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP4O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP4O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP4O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP4O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP4O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP4O_OFF (8u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP5O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP5O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP5O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP5O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP5O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP5O_OFF (10u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP6O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP6O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP6O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP6O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP6O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP6O_OFF (12u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP7O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP7O_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP7O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP7O_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP7O */
#define IFX_DMU_HF_CONFIRM2_PROINOTP7O_OFF (14u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP0C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP0C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP0C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP0C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP0C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP0C_OFF (16u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP1C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP1C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP1C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP1C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP1C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP1C_OFF (18u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP2C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP2C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP2C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP2C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP2C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP2C_OFF (20u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP3C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP3C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP3C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP3C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP3C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP3C_OFF (22u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP4C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP4C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP4C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP4C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP4C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP4C_OFF (24u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP5C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP5C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP5C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP5C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP5C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP5C_OFF (26u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP6C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP6C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP6C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP6C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP6C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP6C_OFF (28u)

/** \brief Length for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP7C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP7C_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP7C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP7C_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CONFIRM2_Bits.PROINOTP7C */
#define IFX_DMU_HF_CONFIRM2_PROINOTP7C_OFF (30u)

/** \brief Length for Ifx_DMU_HF_EER_Bits.OPERM */
#define IFX_DMU_HF_EER_OPERM_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_EER_Bits.OPERM */
#define IFX_DMU_HF_EER_OPERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_EER_Bits.OPERM */
#define IFX_DMU_HF_EER_OPERM_OFF (0u)

/** \brief Length for Ifx_DMU_HF_EER_Bits.SQERM */
#define IFX_DMU_HF_EER_SQERM_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_EER_Bits.SQERM */
#define IFX_DMU_HF_EER_SQERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_EER_Bits.SQERM */
#define IFX_DMU_HF_EER_SQERM_OFF (1u)

/** \brief Length for Ifx_DMU_HF_EER_Bits.PROERM */
#define IFX_DMU_HF_EER_PROERM_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_EER_Bits.PROERM */
#define IFX_DMU_HF_EER_PROERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_EER_Bits.PROERM */
#define IFX_DMU_HF_EER_PROERM_OFF (2u)

/** \brief Length for Ifx_DMU_HF_EER_Bits.PVERM */
#define IFX_DMU_HF_EER_PVERM_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_EER_Bits.PVERM */
#define IFX_DMU_HF_EER_PVERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_EER_Bits.PVERM */
#define IFX_DMU_HF_EER_PVERM_OFF (3u)

/** \brief Length for Ifx_DMU_HF_EER_Bits.EVERM */
#define IFX_DMU_HF_EER_EVERM_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_EER_Bits.EVERM */
#define IFX_DMU_HF_EER_EVERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_EER_Bits.EVERM */
#define IFX_DMU_HF_EER_EVERM_OFF (4u)

/** \brief Length for Ifx_DMU_HF_EER_Bits.EOBM */
#define IFX_DMU_HF_EER_EOBM_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_EER_Bits.EOBM */
#define IFX_DMU_HF_EER_EOBM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_EER_Bits.EOBM */
#define IFX_DMU_HF_EER_EOBM_OFF (31u)

/** \brief Length for Ifx_DMU_HF_ERRSR_Bits.OPER */
#define IFX_DMU_HF_ERRSR_OPER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ERRSR_Bits.OPER */
#define IFX_DMU_HF_ERRSR_OPER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ERRSR_Bits.OPER */
#define IFX_DMU_HF_ERRSR_OPER_OFF (0u)

/** \brief Length for Ifx_DMU_HF_ERRSR_Bits.SQER */
#define IFX_DMU_HF_ERRSR_SQER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ERRSR_Bits.SQER */
#define IFX_DMU_HF_ERRSR_SQER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ERRSR_Bits.SQER */
#define IFX_DMU_HF_ERRSR_SQER_OFF (1u)

/** \brief Length for Ifx_DMU_HF_ERRSR_Bits.PROER */
#define IFX_DMU_HF_ERRSR_PROER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ERRSR_Bits.PROER */
#define IFX_DMU_HF_ERRSR_PROER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ERRSR_Bits.PROER */
#define IFX_DMU_HF_ERRSR_PROER_OFF (2u)

/** \brief Length for Ifx_DMU_HF_ERRSR_Bits.PVER */
#define IFX_DMU_HF_ERRSR_PVER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ERRSR_Bits.PVER */
#define IFX_DMU_HF_ERRSR_PVER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ERRSR_Bits.PVER */
#define IFX_DMU_HF_ERRSR_PVER_OFF (3u)

/** \brief Length for Ifx_DMU_HF_ERRSR_Bits.EVER */
#define IFX_DMU_HF_ERRSR_EVER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ERRSR_Bits.EVER */
#define IFX_DMU_HF_ERRSR_EVER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ERRSR_Bits.EVER */
#define IFX_DMU_HF_ERRSR_EVER_OFF (4u)

/** \brief Length for Ifx_DMU_HF_ERRSR_Bits.ADER */
#define IFX_DMU_HF_ERRSR_ADER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ERRSR_Bits.ADER */
#define IFX_DMU_HF_ERRSR_ADER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ERRSR_Bits.ADER */
#define IFX_DMU_HF_ERRSR_ADER_OFF (5u)

/** \brief Length for Ifx_DMU_HF_ERRSR_Bits.ORIER */
#define IFX_DMU_HF_ERRSR_ORIER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ERRSR_Bits.ORIER */
#define IFX_DMU_HF_ERRSR_ORIER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ERRSR_Bits.ORIER */
#define IFX_DMU_HF_ERRSR_ORIER_OFF (6u)

/** \brief Length for Ifx_DMU_HF_CLRE_Bits.CSQER */
#define IFX_DMU_HF_CLRE_CSQER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CLRE_Bits.CSQER */
#define IFX_DMU_HF_CLRE_CSQER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CLRE_Bits.CSQER */
#define IFX_DMU_HF_CLRE_CSQER_OFF (1u)

/** \brief Length for Ifx_DMU_HF_CLRE_Bits.CPROER */
#define IFX_DMU_HF_CLRE_CPROER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CLRE_Bits.CPROER */
#define IFX_DMU_HF_CLRE_CPROER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CLRE_Bits.CPROER */
#define IFX_DMU_HF_CLRE_CPROER_OFF (2u)

/** \brief Length for Ifx_DMU_HF_CLRE_Bits.CPVER */
#define IFX_DMU_HF_CLRE_CPVER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CLRE_Bits.CPVER */
#define IFX_DMU_HF_CLRE_CPVER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CLRE_Bits.CPVER */
#define IFX_DMU_HF_CLRE_CPVER_OFF (3u)

/** \brief Length for Ifx_DMU_HF_CLRE_Bits.CEVER */
#define IFX_DMU_HF_CLRE_CEVER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CLRE_Bits.CEVER */
#define IFX_DMU_HF_CLRE_CEVER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CLRE_Bits.CEVER */
#define IFX_DMU_HF_CLRE_CEVER_OFF (4u)

/** \brief Length for Ifx_DMU_HF_CLRE_Bits.CADER */
#define IFX_DMU_HF_CLRE_CADER_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_CLRE_Bits.CADER */
#define IFX_DMU_HF_CLRE_CADER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_CLRE_Bits.CADER */
#define IFX_DMU_HF_CLRE_CADER_OFF (5u)

/** \brief Length for Ifx_DMU_HF_ECCR_Bits.RCODE */
#define IFX_DMU_HF_ECCR_RCODE_LEN (22u)

/** \brief Mask for Ifx_DMU_HF_ECCR_Bits.RCODE */
#define IFX_DMU_HF_ECCR_RCODE_MSK (0x3fffffu)

/** \brief Offset for Ifx_DMU_HF_ECCR_Bits.RCODE */
#define IFX_DMU_HF_ECCR_RCODE_OFF (0u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.ERR1 */
#define IFX_DMU_HF_ECCS_ERR1_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.ERR1 */
#define IFX_DMU_HF_ECCS_ERR1_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.ERR1 */
#define IFX_DMU_HF_ECCS_ERR1_OFF (0u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.ERR2 */
#define IFX_DMU_HF_ECCS_ERR2_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.ERR2 */
#define IFX_DMU_HF_ECCS_ERR2_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.ERR2 */
#define IFX_DMU_HF_ECCS_ERR2_OFF (1u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.ERR3 */
#define IFX_DMU_HF_ECCS_ERR3_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.ERR3 */
#define IFX_DMU_HF_ECCS_ERR3_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.ERR3 */
#define IFX_DMU_HF_ECCS_ERR3_OFF (2u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.ERRM */
#define IFX_DMU_HF_ECCS_ERRM_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.ERRM */
#define IFX_DMU_HF_ECCS_ERRM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.ERRM */
#define IFX_DMU_HF_ECCS_ERRM_OFF (3u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.ERRANY */
#define IFX_DMU_HF_ECCS_ERRANY_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.ERRANY */
#define IFX_DMU_HF_ECCS_ERRANY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.ERRANY */
#define IFX_DMU_HF_ECCS_ERRANY_OFF (7u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.BLANKA */
#define IFX_DMU_HF_ECCS_BLANKA_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.BLANKA */
#define IFX_DMU_HF_ECCS_BLANKA_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.BLANKA */
#define IFX_DMU_HF_ECCS_BLANKA_OFF (9u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.AER1 */
#define IFX_DMU_HF_ECCS_AER1_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.AER1 */
#define IFX_DMU_HF_ECCS_AER1_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.AER1 */
#define IFX_DMU_HF_ECCS_AER1_OFF (16u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.AER2 */
#define IFX_DMU_HF_ECCS_AER2_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.AER2 */
#define IFX_DMU_HF_ECCS_AER2_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.AER2 */
#define IFX_DMU_HF_ECCS_AER2_OFF (17u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.AER3 */
#define IFX_DMU_HF_ECCS_AER3_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.AER3 */
#define IFX_DMU_HF_ECCS_AER3_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.AER3 */
#define IFX_DMU_HF_ECCS_AER3_OFF (18u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.AERM */
#define IFX_DMU_HF_ECCS_AERM_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.AERM */
#define IFX_DMU_HF_ECCS_AERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.AERM */
#define IFX_DMU_HF_ECCS_AERM_OFF (19u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.AERANY */
#define IFX_DMU_HF_ECCS_AERANY_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.AERANY */
#define IFX_DMU_HF_ECCS_AERANY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.AERANY */
#define IFX_DMU_HF_ECCS_AERANY_OFF (23u)

/** \brief Length for Ifx_DMU_HF_ECCS_Bits.ABLANKA */
#define IFX_DMU_HF_ECCS_ABLANKA_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ECCS_Bits.ABLANKA */
#define IFX_DMU_HF_ECCS_ABLANKA_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ECCS_Bits.ABLANKA */
#define IFX_DMU_HF_ECCS_ABLANKA_OFF (25u)

/** \brief Length for Ifx_DMU_HF_ECCC_Bits.CLR */
#define IFX_DMU_HF_ECCC_CLR_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_ECCC_Bits.CLR */
#define IFX_DMU_HF_ECCC_CLR_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_ECCC_Bits.CLR */
#define IFX_DMU_HF_ECCC_CLR_OFF (0u)

/** \brief Length for Ifx_DMU_HF_ECCC_Bits.ECCCORDIS */
#define IFX_DMU_HF_ECCC_ECCCORDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_ECCC_Bits.ECCCORDIS */
#define IFX_DMU_HF_ECCC_ECCCORDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_ECCC_Bits.ECCCORDIS */
#define IFX_DMU_HF_ECCC_ECCCORDIS_OFF (28u)

/** \brief Length for Ifx_DMU_HF_ECCC_Bits.TRAPDIS */
#define IFX_DMU_HF_ECCC_TRAPDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_ECCC_Bits.TRAPDIS */
#define IFX_DMU_HF_ECCC_TRAPDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_ECCC_Bits.TRAPDIS */
#define IFX_DMU_HF_ECCC_TRAPDIS_OFF (30u)

/** \brief Length for Ifx_DMU_HF_ECCW_Bits.WCODE */
#define IFX_DMU_HF_ECCW_WCODE_LEN (22u)

/** \brief Mask for Ifx_DMU_HF_ECCW_Bits.WCODE */
#define IFX_DMU_HF_ECCW_WCODE_MSK (0x3fffffu)

/** \brief Offset for Ifx_DMU_HF_ECCW_Bits.WCODE */
#define IFX_DMU_HF_ECCW_WCODE_OFF (0u)

/** \brief Length for Ifx_DMU_HF_ECCW_Bits.PECENCDIS */
#define IFX_DMU_HF_ECCW_PECENCDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_ECCW_Bits.PECENCDIS */
#define IFX_DMU_HF_ECCW_PECENCDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_ECCW_Bits.PECENCDIS */
#define IFX_DMU_HF_ECCW_PECENCDIS_OFF (28u)

/** \brief Length for Ifx_DMU_HF_ECCW_Bits.DECENCDIS */
#define IFX_DMU_HF_ECCW_DECENCDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_ECCW_Bits.DECENCDIS */
#define IFX_DMU_HF_ECCW_DECENCDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_ECCW_Bits.DECENCDIS */
#define IFX_DMU_HF_ECCW_DECENCDIS_OFF (30u)

/** \brief Length for Ifx_DMU_HF_CCONTROL_Bits.CRANKING */
#define IFX_DMU_HF_CCONTROL_CRANKING_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_CCONTROL_Bits.CRANKING */
#define IFX_DMU_HF_CCONTROL_CRANKING_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_CCONTROL_Bits.CRANKING */
#define IFX_DMU_HF_CCONTROL_CRANKING_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PSTATUS_Bits.SLEEP */
#define IFX_DMU_HF_PSTATUS_SLEEP_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PSTATUS_Bits.SLEEP */
#define IFX_DMU_HF_PSTATUS_SLEEP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PSTATUS_Bits.SLEEP */
#define IFX_DMU_HF_PSTATUS_SLEEP_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PSTATUS_Bits.IDLE */
#define IFX_DMU_HF_PSTATUS_IDLE_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PSTATUS_Bits.IDLE */
#define IFX_DMU_HF_PSTATUS_IDLE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PSTATUS_Bits.IDLE */
#define IFX_DMU_HF_PSTATUS_IDLE_OFF (1u)

/** \brief Length for Ifx_DMU_HF_PSTATUS_Bits.DEMAND */
#define IFX_DMU_HF_PSTATUS_DEMAND_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PSTATUS_Bits.DEMAND */
#define IFX_DMU_HF_PSTATUS_DEMAND_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PSTATUS_Bits.DEMAND */
#define IFX_DMU_HF_PSTATUS_DEMAND_OFF (2u)

/** \brief Length for Ifx_DMU_HF_PCONTROL_Bits.SLEEP */
#define IFX_DMU_HF_PCONTROL_SLEEP_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PCONTROL_Bits.SLEEP */
#define IFX_DMU_HF_PCONTROL_SLEEP_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PCONTROL_Bits.SLEEP */
#define IFX_DMU_HF_PCONTROL_SLEEP_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PCONTROL_Bits.IDLE */
#define IFX_DMU_HF_PCONTROL_IDLE_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PCONTROL_Bits.IDLE */
#define IFX_DMU_HF_PCONTROL_IDLE_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PCONTROL_Bits.IDLE */
#define IFX_DMU_HF_PCONTROL_IDLE_OFF (8u)

/** \brief Length for Ifx_DMU_HF_PCONTROL_Bits.DEMAND */
#define IFX_DMU_HF_PCONTROL_DEMAND_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PCONTROL_Bits.DEMAND */
#define IFX_DMU_HF_PCONTROL_DEMAND_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PCONTROL_Bits.DEMAND */
#define IFX_DMU_HF_PCONTROL_DEMAND_OFF (10u)

/** \brief Length for Ifx_DMU_HF_PCONTROL_Bits.ESLDIS */
#define IFX_DMU_HF_PCONTROL_ESLDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PCONTROL_Bits.ESLDIS */
#define IFX_DMU_HF_PCONTROL_ESLDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PCONTROL_Bits.ESLDIS */
#define IFX_DMU_HF_PCONTROL_ESLDIS_OFF (16u)

/** \brief Length for Ifx_DMU_HF_PCONTROL_Bits.PR5V */
#define IFX_DMU_HF_PCONTROL_PR5V_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PCONTROL_Bits.PR5V */
#define IFX_DMU_HF_PCONTROL_PR5V_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PCONTROL_Bits.PR5V */
#define IFX_DMU_HF_PCONTROL_PR5V_OFF (30u)

/** \brief Length for Ifx_DMU_HF_PWAIT_Bits.RFLASH */
#define IFX_DMU_HF_PWAIT_RFLASH_LEN (6u)

/** \brief Mask for Ifx_DMU_HF_PWAIT_Bits.RFLASH */
#define IFX_DMU_HF_PWAIT_RFLASH_MSK (0x3fu)

/** \brief Offset for Ifx_DMU_HF_PWAIT_Bits.RFLASH */
#define IFX_DMU_HF_PWAIT_RFLASH_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PWAIT_Bits.RECC */
#define IFX_DMU_HF_PWAIT_RECC_LEN (3u)

/** \brief Mask for Ifx_DMU_HF_PWAIT_Bits.RECC */
#define IFX_DMU_HF_PWAIT_RECC_MSK (0x7u)

/** \brief Offset for Ifx_DMU_HF_PWAIT_Bits.RECC */
#define IFX_DMU_HF_PWAIT_RECC_OFF (8u)

/** \brief Length for Ifx_DMU_HF_PWAIT_Bits.CFLASH */
#define IFX_DMU_HF_PWAIT_CFLASH_LEN (6u)

/** \brief Mask for Ifx_DMU_HF_PWAIT_Bits.CFLASH */
#define IFX_DMU_HF_PWAIT_CFLASH_MSK (0x3fu)

/** \brief Offset for Ifx_DMU_HF_PWAIT_Bits.CFLASH */
#define IFX_DMU_HF_PWAIT_CFLASH_OFF (16u)

/** \brief Length for Ifx_DMU_HF_PWAIT_Bits.CECC */
#define IFX_DMU_HF_PWAIT_CECC_LEN (3u)

/** \brief Mask for Ifx_DMU_HF_PWAIT_Bits.CECC */
#define IFX_DMU_HF_PWAIT_CECC_MSK (0x7u)

/** \brief Offset for Ifx_DMU_HF_PWAIT_Bits.CECC */
#define IFX_DMU_HF_PWAIT_CECC_OFF (24u)

/** \brief Length for Ifx_DMU_HF_DWAIT_Bits.RFLASH */
#define IFX_DMU_HF_DWAIT_RFLASH_LEN (8u)

/** \brief Mask for Ifx_DMU_HF_DWAIT_Bits.RFLASH */
#define IFX_DMU_HF_DWAIT_RFLASH_MSK (0xffu)

/** \brief Offset for Ifx_DMU_HF_DWAIT_Bits.RFLASH */
#define IFX_DMU_HF_DWAIT_RFLASH_OFF (0u)

/** \brief Length for Ifx_DMU_HF_DWAIT_Bits.RECC */
#define IFX_DMU_HF_DWAIT_RECC_LEN (3u)

/** \brief Mask for Ifx_DMU_HF_DWAIT_Bits.RECC */
#define IFX_DMU_HF_DWAIT_RECC_MSK (0x7u)

/** \brief Offset for Ifx_DMU_HF_DWAIT_Bits.RECC */
#define IFX_DMU_HF_DWAIT_RECC_OFF (16u)

/** \brief Length for Ifx_DMU_HF_PROCONUSR_Bits.MODE */
#define IFX_DMU_HF_PROCONUSR_MODE_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PROCONUSR_Bits.MODE */
#define IFX_DMU_HF_PROCONUSR_MODE_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PROCONUSR_Bits.MODE */
#define IFX_DMU_HF_PROCONUSR_MODE_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PROCONPF_Bits.RPRO */
#define IFX_DMU_HF_PROCONPF_RPRO_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONPF_Bits.RPRO */
#define IFX_DMU_HF_PROCONPF_RPRO_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONPF_Bits.RPRO */
#define IFX_DMU_HF_PROCONPF_RPRO_OFF (31u)

/** \brief Length for Ifx_DMU_HF_PROCONTP_Bits.TP */
#define IFX_DMU_HF_PROCONTP_TP_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONTP_Bits.TP */
#define IFX_DMU_HF_PROCONTP_TP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONTP_Bits.TP */
#define IFX_DMU_HF_PROCONTP_TP_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PROCONTP_Bits.BML */
#define IFX_DMU_HF_PROCONTP_BML_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PROCONTP_Bits.BML */
#define IFX_DMU_HF_PROCONTP_BML_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PROCONTP_Bits.BML */
#define IFX_DMU_HF_PROCONTP_BML_OFF (8u)

/** \brief Length for Ifx_DMU_HF_PROCONTP_Bits.SWAPEN */
#define IFX_DMU_HF_PROCONTP_SWAPEN_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PROCONTP_Bits.SWAPEN */
#define IFX_DMU_HF_PROCONTP_SWAPEN_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PROCONTP_Bits.SWAPEN */
#define IFX_DMU_HF_PROCONTP_SWAPEN_OFF (16u)

/** \brief Length for Ifx_DMU_HF_PROCONTP_Bits.CPU0DDIS */
#define IFX_DMU_HF_PROCONTP_CPU0DDIS_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONTP_Bits.CPU0DDIS */
#define IFX_DMU_HF_PROCONTP_CPU0DDIS_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONTP_Bits.CPU0DDIS */
#define IFX_DMU_HF_PROCONTP_CPU0DDIS_OFF (18u)

/** \brief Length for Ifx_DMU_HF_PROCONTP_Bits.CPU1DDIS */
#define IFX_DMU_HF_PROCONTP_CPU1DDIS_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONTP_Bits.CPU1DDIS */
#define IFX_DMU_HF_PROCONTP_CPU1DDIS_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONTP_Bits.CPU1DDIS */
#define IFX_DMU_HF_PROCONTP_CPU1DDIS_OFF (19u)

/** \brief Length for Ifx_DMU_HF_PROCONTP_Bits.CPU2DDIS */
#define IFX_DMU_HF_PROCONTP_CPU2DDIS_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONTP_Bits.CPU2DDIS */
#define IFX_DMU_HF_PROCONTP_CPU2DDIS_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONTP_Bits.CPU2DDIS */
#define IFX_DMU_HF_PROCONTP_CPU2DDIS_OFF (20u)

/** \brief Length for Ifx_DMU_HF_PROCONTP_Bits.CPU3DDIS */
#define IFX_DMU_HF_PROCONTP_CPU3DDIS_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONTP_Bits.CPU3DDIS */
#define IFX_DMU_HF_PROCONTP_CPU3DDIS_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONTP_Bits.CPU3DDIS */
#define IFX_DMU_HF_PROCONTP_CPU3DDIS_OFF (21u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.L */
#define IFX_DMU_HF_PROCONDF_L_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.L */
#define IFX_DMU_HF_PROCONDF_L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.L */
#define IFX_DMU_HF_PROCONDF_L_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.HYSEN */
#define IFX_DMU_HF_PROCONDF_HYSEN_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.HYSEN */
#define IFX_DMU_HF_PROCONDF_HYSEN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.HYSEN */
#define IFX_DMU_HF_PROCONDF_HYSEN_OFF (3u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.HYSCTL */
#define IFX_DMU_HF_PROCONDF_HYSCTL_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.HYSCTL */
#define IFX_DMU_HF_PROCONDF_HYSCTL_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.HYSCTL */
#define IFX_DMU_HF_PROCONDF_HYSCTL_OFF (4u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.AMPCTL */
#define IFX_DMU_HF_PROCONDF_AMPCTL_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.AMPCTL */
#define IFX_DMU_HF_PROCONDF_AMPCTL_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.AMPCTL */
#define IFX_DMU_HF_PROCONDF_AMPCTL_OFF (6u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.OSCCFG */
#define IFX_DMU_HF_PROCONDF_OSCCFG_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.OSCCFG */
#define IFX_DMU_HF_PROCONDF_OSCCFG_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.OSCCFG */
#define IFX_DMU_HF_PROCONDF_OSCCFG_OFF (8u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.MODE */
#define IFX_DMU_HF_PROCONDF_MODE_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.MODE */
#define IFX_DMU_HF_PROCONDF_MODE_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.MODE */
#define IFX_DMU_HF_PROCONDF_MODE_OFF (9u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.APREN */
#define IFX_DMU_HF_PROCONDF_APREN_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.APREN */
#define IFX_DMU_HF_PROCONDF_APREN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.APREN */
#define IFX_DMU_HF_PROCONDF_APREN_OFF (11u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.CAP0EN */
#define IFX_DMU_HF_PROCONDF_CAP0EN_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.CAP0EN */
#define IFX_DMU_HF_PROCONDF_CAP0EN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.CAP0EN */
#define IFX_DMU_HF_PROCONDF_CAP0EN_OFF (12u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.CAP1EN */
#define IFX_DMU_HF_PROCONDF_CAP1EN_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.CAP1EN */
#define IFX_DMU_HF_PROCONDF_CAP1EN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.CAP1EN */
#define IFX_DMU_HF_PROCONDF_CAP1EN_OFF (13u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.CAP2EN */
#define IFX_DMU_HF_PROCONDF_CAP2EN_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.CAP2EN */
#define IFX_DMU_HF_PROCONDF_CAP2EN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.CAP2EN */
#define IFX_DMU_HF_PROCONDF_CAP2EN_OFF (14u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.CAP3EN */
#define IFX_DMU_HF_PROCONDF_CAP3EN_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.CAP3EN */
#define IFX_DMU_HF_PROCONDF_CAP3EN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.CAP3EN */
#define IFX_DMU_HF_PROCONDF_CAP3EN_OFF (15u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.ESR0CNT */
#define IFX_DMU_HF_PROCONDF_ESR0CNT_LEN (12u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.ESR0CNT */
#define IFX_DMU_HF_PROCONDF_ESR0CNT_MSK (0xfffu)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.ESR0CNT */
#define IFX_DMU_HF_PROCONDF_ESR0CNT_OFF (16u)

/** \brief Length for Ifx_DMU_HF_PROCONDF_Bits.RPRO */
#define IFX_DMU_HF_PROCONDF_RPRO_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDF_Bits.RPRO */
#define IFX_DMU_HF_PROCONDF_RPRO_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDF_Bits.RPRO */
#define IFX_DMU_HF_PROCONDF_RPRO_OFF (31u)

/** \brief Length for Ifx_DMU_HF_PROCONRAM_Bits.RAMIN */
#define IFX_DMU_HF_PROCONRAM_RAMIN_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PROCONRAM_Bits.RAMIN */
#define IFX_DMU_HF_PROCONRAM_RAMIN_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PROCONRAM_Bits.RAMIN */
#define IFX_DMU_HF_PROCONRAM_RAMIN_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PROCONRAM_Bits.RAMINSEL */
#define IFX_DMU_HF_PROCONRAM_RAMINSEL_LEN (6u)

/** \brief Mask for Ifx_DMU_HF_PROCONRAM_Bits.RAMINSEL */
#define IFX_DMU_HF_PROCONRAM_RAMINSEL_MSK (0x3fu)

/** \brief Offset for Ifx_DMU_HF_PROCONRAM_Bits.RAMINSEL */
#define IFX_DMU_HF_PROCONRAM_RAMINSEL_OFF (16u)

/** \brief Length for Ifx_DMU_HF_PROCONRAM_Bits.LMUINSEL */
#define IFX_DMU_HF_PROCONRAM_LMUINSEL_LEN (7u)

/** \brief Mask for Ifx_DMU_HF_PROCONRAM_Bits.LMUINSEL */
#define IFX_DMU_HF_PROCONRAM_LMUINSEL_MSK (0x7fu)

/** \brief Offset for Ifx_DMU_HF_PROCONRAM_Bits.LMUINSEL */
#define IFX_DMU_HF_PROCONRAM_LMUINSEL_OFF (24u)

/** \brief Length for Ifx_DMU_HF_PROCONDBG_Bits.OCDSDIS */
#define IFX_DMU_HF_PROCONDBG_OCDSDIS_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDBG_Bits.OCDSDIS */
#define IFX_DMU_HF_PROCONDBG_OCDSDIS_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDBG_Bits.OCDSDIS */
#define IFX_DMU_HF_PROCONDBG_OCDSDIS_OFF (0u)

/** \brief Length for Ifx_DMU_HF_PROCONDBG_Bits.DBGIFLCK */
#define IFX_DMU_HF_PROCONDBG_DBGIFLCK_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_PROCONDBG_Bits.DBGIFLCK */
#define IFX_DMU_HF_PROCONDBG_DBGIFLCK_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_PROCONDBG_Bits.DBGIFLCK */
#define IFX_DMU_HF_PROCONDBG_DBGIFLCK_OFF (1u)

/** \brief Length for Ifx_DMU_HF_PROCONDBG_Bits.EDM */
#define IFX_DMU_HF_PROCONDBG_EDM_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_PROCONDBG_Bits.EDM */
#define IFX_DMU_HF_PROCONDBG_EDM_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_PROCONDBG_Bits.EDM */
#define IFX_DMU_HF_PROCONDBG_EDM_OFF (2u)

/** \brief Length for Ifx_DMU_HF_PROCONDBG_Bits.TIC */
#define IFX_DMU_HF_PROCONDBG_TIC_LEN (4u)

/** \brief Mask for Ifx_DMU_HF_PROCONDBG_Bits.TIC */
#define IFX_DMU_HF_PROCONDBG_TIC_MSK (0xfu)

/** \brief Offset for Ifx_DMU_HF_PROCONDBG_Bits.TIC */
#define IFX_DMU_HF_PROCONDBG_TIC_OFF (8u)

/** \brief Length for Ifx_DMU_HF_SUSPEND_Bits.REQ */
#define IFX_DMU_HF_SUSPEND_REQ_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_SUSPEND_Bits.REQ */
#define IFX_DMU_HF_SUSPEND_REQ_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_SUSPEND_Bits.REQ */
#define IFX_DMU_HF_SUSPEND_REQ_OFF (0u)

/** \brief Length for Ifx_DMU_HF_SUSPEND_Bits.CLR */
#define IFX_DMU_HF_SUSPEND_CLR_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_SUSPEND_Bits.CLR */
#define IFX_DMU_HF_SUSPEND_CLR_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_SUSPEND_Bits.CLR */
#define IFX_DMU_HF_SUSPEND_CLR_OFF (1u)

/** \brief Length for Ifx_DMU_HF_SUSPEND_Bits.SPND */
#define IFX_DMU_HF_SUSPEND_SPND_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_SUSPEND_Bits.SPND */
#define IFX_DMU_HF_SUSPEND_SPND_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_SUSPEND_Bits.SPND */
#define IFX_DMU_HF_SUSPEND_SPND_OFF (16u)

/** \brief Length for Ifx_DMU_HF_SUSPEND_Bits.ERR */
#define IFX_DMU_HF_SUSPEND_ERR_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_SUSPEND_Bits.ERR */
#define IFX_DMU_HF_SUSPEND_ERR_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_SUSPEND_Bits.ERR */
#define IFX_DMU_HF_SUSPEND_ERR_OFF (17u)

/** \brief Length for Ifx_DMU_HF_MARGIN_Bits.SELD0 */
#define IFX_DMU_HF_MARGIN_SELD0_LEN (2u)

/** \brief Mask for Ifx_DMU_HF_MARGIN_Bits.SELD0 */
#define IFX_DMU_HF_MARGIN_SELD0_MSK (0x3u)

/** \brief Offset for Ifx_DMU_HF_MARGIN_Bits.SELD0 */
#define IFX_DMU_HF_MARGIN_SELD0_OFF (0u)

/** \brief Length for Ifx_DMU_HF_MARGIN_Bits.HMARGIN */
#define IFX_DMU_HF_MARGIN_HMARGIN_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_MARGIN_Bits.HMARGIN */
#define IFX_DMU_HF_MARGIN_HMARGIN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_MARGIN_Bits.HMARGIN */
#define IFX_DMU_HF_MARGIN_HMARGIN_OFF (8u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN0 */
#define IFX_DMU_HF_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN0 */
#define IFX_DMU_HF_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN0 */
#define IFX_DMU_HF_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN1 */
#define IFX_DMU_HF_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN1 */
#define IFX_DMU_HF_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN1 */
#define IFX_DMU_HF_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN2 */
#define IFX_DMU_HF_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN2 */
#define IFX_DMU_HF_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN2 */
#define IFX_DMU_HF_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN3 */
#define IFX_DMU_HF_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN3 */
#define IFX_DMU_HF_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN3 */
#define IFX_DMU_HF_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN4 */
#define IFX_DMU_HF_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN4 */
#define IFX_DMU_HF_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN4 */
#define IFX_DMU_HF_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN5 */
#define IFX_DMU_HF_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN5 */
#define IFX_DMU_HF_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN5 */
#define IFX_DMU_HF_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN6 */
#define IFX_DMU_HF_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN6 */
#define IFX_DMU_HF_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN6 */
#define IFX_DMU_HF_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN7 */
#define IFX_DMU_HF_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN7 */
#define IFX_DMU_HF_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN7 */
#define IFX_DMU_HF_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN8 */
#define IFX_DMU_HF_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN8 */
#define IFX_DMU_HF_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN8 */
#define IFX_DMU_HF_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN9 */
#define IFX_DMU_HF_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN9 */
#define IFX_DMU_HF_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN9 */
#define IFX_DMU_HF_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN10 */
#define IFX_DMU_HF_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN10 */
#define IFX_DMU_HF_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN10 */
#define IFX_DMU_HF_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN11 */
#define IFX_DMU_HF_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN11 */
#define IFX_DMU_HF_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN11 */
#define IFX_DMU_HF_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN12 */
#define IFX_DMU_HF_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN12 */
#define IFX_DMU_HF_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN12 */
#define IFX_DMU_HF_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN13 */
#define IFX_DMU_HF_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN13 */
#define IFX_DMU_HF_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN13 */
#define IFX_DMU_HF_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN14 */
#define IFX_DMU_HF_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN14 */
#define IFX_DMU_HF_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN14 */
#define IFX_DMU_HF_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN15 */
#define IFX_DMU_HF_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN15 */
#define IFX_DMU_HF_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN15 */
#define IFX_DMU_HF_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN16 */
#define IFX_DMU_HF_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN16 */
#define IFX_DMU_HF_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN16 */
#define IFX_DMU_HF_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN17 */
#define IFX_DMU_HF_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN17 */
#define IFX_DMU_HF_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN17 */
#define IFX_DMU_HF_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN18 */
#define IFX_DMU_HF_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN18 */
#define IFX_DMU_HF_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN18 */
#define IFX_DMU_HF_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN19 */
#define IFX_DMU_HF_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN19 */
#define IFX_DMU_HF_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN19 */
#define IFX_DMU_HF_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN20 */
#define IFX_DMU_HF_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN20 */
#define IFX_DMU_HF_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN20 */
#define IFX_DMU_HF_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN21 */
#define IFX_DMU_HF_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN21 */
#define IFX_DMU_HF_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN21 */
#define IFX_DMU_HF_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN22 */
#define IFX_DMU_HF_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN22 */
#define IFX_DMU_HF_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN22 */
#define IFX_DMU_HF_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN23 */
#define IFX_DMU_HF_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN23 */
#define IFX_DMU_HF_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN23 */
#define IFX_DMU_HF_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN24 */
#define IFX_DMU_HF_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN24 */
#define IFX_DMU_HF_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN24 */
#define IFX_DMU_HF_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN25 */
#define IFX_DMU_HF_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN25 */
#define IFX_DMU_HF_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN25 */
#define IFX_DMU_HF_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN26 */
#define IFX_DMU_HF_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN26 */
#define IFX_DMU_HF_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN26 */
#define IFX_DMU_HF_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN27 */
#define IFX_DMU_HF_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN27 */
#define IFX_DMU_HF_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN27 */
#define IFX_DMU_HF_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN28 */
#define IFX_DMU_HF_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN28 */
#define IFX_DMU_HF_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN28 */
#define IFX_DMU_HF_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN29 */
#define IFX_DMU_HF_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN29 */
#define IFX_DMU_HF_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN29 */
#define IFX_DMU_HF_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN30 */
#define IFX_DMU_HF_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN30 */
#define IFX_DMU_HF_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN30 */
#define IFX_DMU_HF_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_DMU_HF_ACCEN0_Bits.EN31 */
#define IFX_DMU_HF_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_DMU_HF_ACCEN0_Bits.EN31 */
#define IFX_DMU_HF_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HF_ACCEN0_Bits.EN31 */
#define IFX_DMU_HF_ACCEN0_EN31_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S0L */
#define IFX_DMU_HP_PROCON_P0_S0L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S0L */
#define IFX_DMU_HP_PROCON_P0_S0L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S0L */
#define IFX_DMU_HP_PROCON_P0_S0L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S1L */
#define IFX_DMU_HP_PROCON_P0_S1L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S1L */
#define IFX_DMU_HP_PROCON_P0_S1L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S1L */
#define IFX_DMU_HP_PROCON_P0_S1L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S2L */
#define IFX_DMU_HP_PROCON_P0_S2L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S2L */
#define IFX_DMU_HP_PROCON_P0_S2L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S2L */
#define IFX_DMU_HP_PROCON_P0_S2L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S3L */
#define IFX_DMU_HP_PROCON_P0_S3L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S3L */
#define IFX_DMU_HP_PROCON_P0_S3L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S3L */
#define IFX_DMU_HP_PROCON_P0_S3L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S4L */
#define IFX_DMU_HP_PROCON_P0_S4L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S4L */
#define IFX_DMU_HP_PROCON_P0_S4L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S4L */
#define IFX_DMU_HP_PROCON_P0_S4L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S5L */
#define IFX_DMU_HP_PROCON_P0_S5L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S5L */
#define IFX_DMU_HP_PROCON_P0_S5L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S5L */
#define IFX_DMU_HP_PROCON_P0_S5L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S6L */
#define IFX_DMU_HP_PROCON_P0_S6L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S6L */
#define IFX_DMU_HP_PROCON_P0_S6L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S6L */
#define IFX_DMU_HP_PROCON_P0_S6L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S7L */
#define IFX_DMU_HP_PROCON_P0_S7L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S7L */
#define IFX_DMU_HP_PROCON_P0_S7L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S7L */
#define IFX_DMU_HP_PROCON_P0_S7L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S8L */
#define IFX_DMU_HP_PROCON_P0_S8L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S8L */
#define IFX_DMU_HP_PROCON_P0_S8L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S8L */
#define IFX_DMU_HP_PROCON_P0_S8L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S9L */
#define IFX_DMU_HP_PROCON_P0_S9L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S9L */
#define IFX_DMU_HP_PROCON_P0_S9L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S9L */
#define IFX_DMU_HP_PROCON_P0_S9L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S10L */
#define IFX_DMU_HP_PROCON_P0_S10L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S10L */
#define IFX_DMU_HP_PROCON_P0_S10L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S10L */
#define IFX_DMU_HP_PROCON_P0_S10L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S11L */
#define IFX_DMU_HP_PROCON_P0_S11L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S11L */
#define IFX_DMU_HP_PROCON_P0_S11L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S11L */
#define IFX_DMU_HP_PROCON_P0_S11L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S12L */
#define IFX_DMU_HP_PROCON_P0_S12L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S12L */
#define IFX_DMU_HP_PROCON_P0_S12L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S12L */
#define IFX_DMU_HP_PROCON_P0_S12L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S13L */
#define IFX_DMU_HP_PROCON_P0_S13L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S13L */
#define IFX_DMU_HP_PROCON_P0_S13L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S13L */
#define IFX_DMU_HP_PROCON_P0_S13L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S14L */
#define IFX_DMU_HP_PROCON_P0_S14L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S14L */
#define IFX_DMU_HP_PROCON_P0_S14L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S14L */
#define IFX_DMU_HP_PROCON_P0_S14L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S15L */
#define IFX_DMU_HP_PROCON_P0_S15L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S15L */
#define IFX_DMU_HP_PROCON_P0_S15L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S15L */
#define IFX_DMU_HP_PROCON_P0_S15L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S16L */
#define IFX_DMU_HP_PROCON_P0_S16L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S16L */
#define IFX_DMU_HP_PROCON_P0_S16L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S16L */
#define IFX_DMU_HP_PROCON_P0_S16L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S17L */
#define IFX_DMU_HP_PROCON_P0_S17L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S17L */
#define IFX_DMU_HP_PROCON_P0_S17L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S17L */
#define IFX_DMU_HP_PROCON_P0_S17L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S18L */
#define IFX_DMU_HP_PROCON_P0_S18L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S18L */
#define IFX_DMU_HP_PROCON_P0_S18L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S18L */
#define IFX_DMU_HP_PROCON_P0_S18L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S19L */
#define IFX_DMU_HP_PROCON_P0_S19L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S19L */
#define IFX_DMU_HP_PROCON_P0_S19L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S19L */
#define IFX_DMU_HP_PROCON_P0_S19L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S20L */
#define IFX_DMU_HP_PROCON_P0_S20L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S20L */
#define IFX_DMU_HP_PROCON_P0_S20L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S20L */
#define IFX_DMU_HP_PROCON_P0_S20L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S21L */
#define IFX_DMU_HP_PROCON_P0_S21L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S21L */
#define IFX_DMU_HP_PROCON_P0_S21L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S21L */
#define IFX_DMU_HP_PROCON_P0_S21L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S22L */
#define IFX_DMU_HP_PROCON_P0_S22L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S22L */
#define IFX_DMU_HP_PROCON_P0_S22L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S22L */
#define IFX_DMU_HP_PROCON_P0_S22L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S23L */
#define IFX_DMU_HP_PROCON_P0_S23L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S23L */
#define IFX_DMU_HP_PROCON_P0_S23L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S23L */
#define IFX_DMU_HP_PROCON_P0_S23L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S24L */
#define IFX_DMU_HP_PROCON_P0_S24L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S24L */
#define IFX_DMU_HP_PROCON_P0_S24L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S24L */
#define IFX_DMU_HP_PROCON_P0_S24L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S25L */
#define IFX_DMU_HP_PROCON_P0_S25L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S25L */
#define IFX_DMU_HP_PROCON_P0_S25L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S25L */
#define IFX_DMU_HP_PROCON_P0_S25L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S26L */
#define IFX_DMU_HP_PROCON_P0_S26L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S26L */
#define IFX_DMU_HP_PROCON_P0_S26L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S26L */
#define IFX_DMU_HP_PROCON_P0_S26L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S27L */
#define IFX_DMU_HP_PROCON_P0_S27L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S27L */
#define IFX_DMU_HP_PROCON_P0_S27L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S27L */
#define IFX_DMU_HP_PROCON_P0_S27L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S28L */
#define IFX_DMU_HP_PROCON_P0_S28L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S28L */
#define IFX_DMU_HP_PROCON_P0_S28L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S28L */
#define IFX_DMU_HP_PROCON_P0_S28L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S29L */
#define IFX_DMU_HP_PROCON_P0_S29L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S29L */
#define IFX_DMU_HP_PROCON_P0_S29L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S29L */
#define IFX_DMU_HP_PROCON_P0_S29L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S30L */
#define IFX_DMU_HP_PROCON_P0_S30L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S30L */
#define IFX_DMU_HP_PROCON_P0_S30L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S30L */
#define IFX_DMU_HP_PROCON_P0_S30L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_P0_Bits.S31L */
#define IFX_DMU_HP_PROCON_P0_S31L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P0_Bits.S31L */
#define IFX_DMU_HP_PROCON_P0_S31L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P0_Bits.S31L */
#define IFX_DMU_HP_PROCON_P0_S31L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S32L */
#define IFX_DMU_HP_PROCON_P1_S32L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S32L */
#define IFX_DMU_HP_PROCON_P1_S32L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S32L */
#define IFX_DMU_HP_PROCON_P1_S32L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S33L */
#define IFX_DMU_HP_PROCON_P1_S33L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S33L */
#define IFX_DMU_HP_PROCON_P1_S33L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S33L */
#define IFX_DMU_HP_PROCON_P1_S33L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S34L */
#define IFX_DMU_HP_PROCON_P1_S34L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S34L */
#define IFX_DMU_HP_PROCON_P1_S34L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S34L */
#define IFX_DMU_HP_PROCON_P1_S34L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S35L */
#define IFX_DMU_HP_PROCON_P1_S35L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S35L */
#define IFX_DMU_HP_PROCON_P1_S35L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S35L */
#define IFX_DMU_HP_PROCON_P1_S35L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S36L */
#define IFX_DMU_HP_PROCON_P1_S36L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S36L */
#define IFX_DMU_HP_PROCON_P1_S36L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S36L */
#define IFX_DMU_HP_PROCON_P1_S36L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S37L */
#define IFX_DMU_HP_PROCON_P1_S37L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S37L */
#define IFX_DMU_HP_PROCON_P1_S37L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S37L */
#define IFX_DMU_HP_PROCON_P1_S37L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S38L */
#define IFX_DMU_HP_PROCON_P1_S38L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S38L */
#define IFX_DMU_HP_PROCON_P1_S38L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S38L */
#define IFX_DMU_HP_PROCON_P1_S38L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S39L */
#define IFX_DMU_HP_PROCON_P1_S39L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S39L */
#define IFX_DMU_HP_PROCON_P1_S39L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S39L */
#define IFX_DMU_HP_PROCON_P1_S39L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S40L */
#define IFX_DMU_HP_PROCON_P1_S40L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S40L */
#define IFX_DMU_HP_PROCON_P1_S40L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S40L */
#define IFX_DMU_HP_PROCON_P1_S40L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S41L */
#define IFX_DMU_HP_PROCON_P1_S41L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S41L */
#define IFX_DMU_HP_PROCON_P1_S41L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S41L */
#define IFX_DMU_HP_PROCON_P1_S41L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S42L */
#define IFX_DMU_HP_PROCON_P1_S42L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S42L */
#define IFX_DMU_HP_PROCON_P1_S42L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S42L */
#define IFX_DMU_HP_PROCON_P1_S42L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S43L */
#define IFX_DMU_HP_PROCON_P1_S43L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S43L */
#define IFX_DMU_HP_PROCON_P1_S43L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S43L */
#define IFX_DMU_HP_PROCON_P1_S43L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S44L */
#define IFX_DMU_HP_PROCON_P1_S44L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S44L */
#define IFX_DMU_HP_PROCON_P1_S44L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S44L */
#define IFX_DMU_HP_PROCON_P1_S44L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S45L */
#define IFX_DMU_HP_PROCON_P1_S45L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S45L */
#define IFX_DMU_HP_PROCON_P1_S45L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S45L */
#define IFX_DMU_HP_PROCON_P1_S45L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S46L */
#define IFX_DMU_HP_PROCON_P1_S46L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S46L */
#define IFX_DMU_HP_PROCON_P1_S46L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S46L */
#define IFX_DMU_HP_PROCON_P1_S46L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S47L */
#define IFX_DMU_HP_PROCON_P1_S47L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S47L */
#define IFX_DMU_HP_PROCON_P1_S47L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S47L */
#define IFX_DMU_HP_PROCON_P1_S47L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S48L */
#define IFX_DMU_HP_PROCON_P1_S48L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S48L */
#define IFX_DMU_HP_PROCON_P1_S48L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S48L */
#define IFX_DMU_HP_PROCON_P1_S48L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S49L */
#define IFX_DMU_HP_PROCON_P1_S49L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S49L */
#define IFX_DMU_HP_PROCON_P1_S49L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S49L */
#define IFX_DMU_HP_PROCON_P1_S49L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S50L */
#define IFX_DMU_HP_PROCON_P1_S50L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S50L */
#define IFX_DMU_HP_PROCON_P1_S50L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S50L */
#define IFX_DMU_HP_PROCON_P1_S50L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S51L */
#define IFX_DMU_HP_PROCON_P1_S51L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S51L */
#define IFX_DMU_HP_PROCON_P1_S51L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S51L */
#define IFX_DMU_HP_PROCON_P1_S51L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S52L */
#define IFX_DMU_HP_PROCON_P1_S52L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S52L */
#define IFX_DMU_HP_PROCON_P1_S52L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S52L */
#define IFX_DMU_HP_PROCON_P1_S52L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S53L */
#define IFX_DMU_HP_PROCON_P1_S53L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S53L */
#define IFX_DMU_HP_PROCON_P1_S53L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S53L */
#define IFX_DMU_HP_PROCON_P1_S53L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S54L */
#define IFX_DMU_HP_PROCON_P1_S54L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S54L */
#define IFX_DMU_HP_PROCON_P1_S54L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S54L */
#define IFX_DMU_HP_PROCON_P1_S54L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S55L */
#define IFX_DMU_HP_PROCON_P1_S55L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S55L */
#define IFX_DMU_HP_PROCON_P1_S55L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S55L */
#define IFX_DMU_HP_PROCON_P1_S55L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S56L */
#define IFX_DMU_HP_PROCON_P1_S56L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S56L */
#define IFX_DMU_HP_PROCON_P1_S56L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S56L */
#define IFX_DMU_HP_PROCON_P1_S56L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S57L */
#define IFX_DMU_HP_PROCON_P1_S57L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S57L */
#define IFX_DMU_HP_PROCON_P1_S57L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S57L */
#define IFX_DMU_HP_PROCON_P1_S57L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S58L */
#define IFX_DMU_HP_PROCON_P1_S58L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S58L */
#define IFX_DMU_HP_PROCON_P1_S58L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S58L */
#define IFX_DMU_HP_PROCON_P1_S58L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S59L */
#define IFX_DMU_HP_PROCON_P1_S59L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S59L */
#define IFX_DMU_HP_PROCON_P1_S59L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S59L */
#define IFX_DMU_HP_PROCON_P1_S59L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S60L */
#define IFX_DMU_HP_PROCON_P1_S60L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S60L */
#define IFX_DMU_HP_PROCON_P1_S60L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S60L */
#define IFX_DMU_HP_PROCON_P1_S60L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S61L */
#define IFX_DMU_HP_PROCON_P1_S61L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S61L */
#define IFX_DMU_HP_PROCON_P1_S61L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S61L */
#define IFX_DMU_HP_PROCON_P1_S61L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S62L */
#define IFX_DMU_HP_PROCON_P1_S62L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S62L */
#define IFX_DMU_HP_PROCON_P1_S62L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S62L */
#define IFX_DMU_HP_PROCON_P1_S62L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_P1_Bits.S63L */
#define IFX_DMU_HP_PROCON_P1_S63L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P1_Bits.S63L */
#define IFX_DMU_HP_PROCON_P1_S63L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P1_Bits.S63L */
#define IFX_DMU_HP_PROCON_P1_S63L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S64L */
#define IFX_DMU_HP_PROCON_P2_S64L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S64L */
#define IFX_DMU_HP_PROCON_P2_S64L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S64L */
#define IFX_DMU_HP_PROCON_P2_S64L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S65L */
#define IFX_DMU_HP_PROCON_P2_S65L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S65L */
#define IFX_DMU_HP_PROCON_P2_S65L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S65L */
#define IFX_DMU_HP_PROCON_P2_S65L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S66L */
#define IFX_DMU_HP_PROCON_P2_S66L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S66L */
#define IFX_DMU_HP_PROCON_P2_S66L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S66L */
#define IFX_DMU_HP_PROCON_P2_S66L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S67L */
#define IFX_DMU_HP_PROCON_P2_S67L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S67L */
#define IFX_DMU_HP_PROCON_P2_S67L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S67L */
#define IFX_DMU_HP_PROCON_P2_S67L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S68L */
#define IFX_DMU_HP_PROCON_P2_S68L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S68L */
#define IFX_DMU_HP_PROCON_P2_S68L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S68L */
#define IFX_DMU_HP_PROCON_P2_S68L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S69L */
#define IFX_DMU_HP_PROCON_P2_S69L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S69L */
#define IFX_DMU_HP_PROCON_P2_S69L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S69L */
#define IFX_DMU_HP_PROCON_P2_S69L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S70L */
#define IFX_DMU_HP_PROCON_P2_S70L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S70L */
#define IFX_DMU_HP_PROCON_P2_S70L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S70L */
#define IFX_DMU_HP_PROCON_P2_S70L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S71L */
#define IFX_DMU_HP_PROCON_P2_S71L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S71L */
#define IFX_DMU_HP_PROCON_P2_S71L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S71L */
#define IFX_DMU_HP_PROCON_P2_S71L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S72L */
#define IFX_DMU_HP_PROCON_P2_S72L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S72L */
#define IFX_DMU_HP_PROCON_P2_S72L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S72L */
#define IFX_DMU_HP_PROCON_P2_S72L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S73L */
#define IFX_DMU_HP_PROCON_P2_S73L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S73L */
#define IFX_DMU_HP_PROCON_P2_S73L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S73L */
#define IFX_DMU_HP_PROCON_P2_S73L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S74L */
#define IFX_DMU_HP_PROCON_P2_S74L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S74L */
#define IFX_DMU_HP_PROCON_P2_S74L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S74L */
#define IFX_DMU_HP_PROCON_P2_S74L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S75L */
#define IFX_DMU_HP_PROCON_P2_S75L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S75L */
#define IFX_DMU_HP_PROCON_P2_S75L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S75L */
#define IFX_DMU_HP_PROCON_P2_S75L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S76L */
#define IFX_DMU_HP_PROCON_P2_S76L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S76L */
#define IFX_DMU_HP_PROCON_P2_S76L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S76L */
#define IFX_DMU_HP_PROCON_P2_S76L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S77L */
#define IFX_DMU_HP_PROCON_P2_S77L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S77L */
#define IFX_DMU_HP_PROCON_P2_S77L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S77L */
#define IFX_DMU_HP_PROCON_P2_S77L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S78L */
#define IFX_DMU_HP_PROCON_P2_S78L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S78L */
#define IFX_DMU_HP_PROCON_P2_S78L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S78L */
#define IFX_DMU_HP_PROCON_P2_S78L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S79L */
#define IFX_DMU_HP_PROCON_P2_S79L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S79L */
#define IFX_DMU_HP_PROCON_P2_S79L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S79L */
#define IFX_DMU_HP_PROCON_P2_S79L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S80L */
#define IFX_DMU_HP_PROCON_P2_S80L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S80L */
#define IFX_DMU_HP_PROCON_P2_S80L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S80L */
#define IFX_DMU_HP_PROCON_P2_S80L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S81L */
#define IFX_DMU_HP_PROCON_P2_S81L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S81L */
#define IFX_DMU_HP_PROCON_P2_S81L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S81L */
#define IFX_DMU_HP_PROCON_P2_S81L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S82L */
#define IFX_DMU_HP_PROCON_P2_S82L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S82L */
#define IFX_DMU_HP_PROCON_P2_S82L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S82L */
#define IFX_DMU_HP_PROCON_P2_S82L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S83L */
#define IFX_DMU_HP_PROCON_P2_S83L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S83L */
#define IFX_DMU_HP_PROCON_P2_S83L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S83L */
#define IFX_DMU_HP_PROCON_P2_S83L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S84L */
#define IFX_DMU_HP_PROCON_P2_S84L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S84L */
#define IFX_DMU_HP_PROCON_P2_S84L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S84L */
#define IFX_DMU_HP_PROCON_P2_S84L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S85L */
#define IFX_DMU_HP_PROCON_P2_S85L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S85L */
#define IFX_DMU_HP_PROCON_P2_S85L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S85L */
#define IFX_DMU_HP_PROCON_P2_S85L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S86L */
#define IFX_DMU_HP_PROCON_P2_S86L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S86L */
#define IFX_DMU_HP_PROCON_P2_S86L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S86L */
#define IFX_DMU_HP_PROCON_P2_S86L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S87L */
#define IFX_DMU_HP_PROCON_P2_S87L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S87L */
#define IFX_DMU_HP_PROCON_P2_S87L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S87L */
#define IFX_DMU_HP_PROCON_P2_S87L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S88L */
#define IFX_DMU_HP_PROCON_P2_S88L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S88L */
#define IFX_DMU_HP_PROCON_P2_S88L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S88L */
#define IFX_DMU_HP_PROCON_P2_S88L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S89L */
#define IFX_DMU_HP_PROCON_P2_S89L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S89L */
#define IFX_DMU_HP_PROCON_P2_S89L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S89L */
#define IFX_DMU_HP_PROCON_P2_S89L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S90L */
#define IFX_DMU_HP_PROCON_P2_S90L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S90L */
#define IFX_DMU_HP_PROCON_P2_S90L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S90L */
#define IFX_DMU_HP_PROCON_P2_S90L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S91L */
#define IFX_DMU_HP_PROCON_P2_S91L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S91L */
#define IFX_DMU_HP_PROCON_P2_S91L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S91L */
#define IFX_DMU_HP_PROCON_P2_S91L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S92L */
#define IFX_DMU_HP_PROCON_P2_S92L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S92L */
#define IFX_DMU_HP_PROCON_P2_S92L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S92L */
#define IFX_DMU_HP_PROCON_P2_S92L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S93L */
#define IFX_DMU_HP_PROCON_P2_S93L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S93L */
#define IFX_DMU_HP_PROCON_P2_S93L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S93L */
#define IFX_DMU_HP_PROCON_P2_S93L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S94L */
#define IFX_DMU_HP_PROCON_P2_S94L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S94L */
#define IFX_DMU_HP_PROCON_P2_S94L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S94L */
#define IFX_DMU_HP_PROCON_P2_S94L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_P2_Bits.S95L */
#define IFX_DMU_HP_PROCON_P2_S95L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P2_Bits.S95L */
#define IFX_DMU_HP_PROCON_P2_S95L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P2_Bits.S95L */
#define IFX_DMU_HP_PROCON_P2_S95L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S96L */
#define IFX_DMU_HP_PROCON_P3_S96L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S96L */
#define IFX_DMU_HP_PROCON_P3_S96L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S96L */
#define IFX_DMU_HP_PROCON_P3_S96L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S97L */
#define IFX_DMU_HP_PROCON_P3_S97L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S97L */
#define IFX_DMU_HP_PROCON_P3_S97L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S97L */
#define IFX_DMU_HP_PROCON_P3_S97L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S98L */
#define IFX_DMU_HP_PROCON_P3_S98L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S98L */
#define IFX_DMU_HP_PROCON_P3_S98L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S98L */
#define IFX_DMU_HP_PROCON_P3_S98L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S99L */
#define IFX_DMU_HP_PROCON_P3_S99L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S99L */
#define IFX_DMU_HP_PROCON_P3_S99L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S99L */
#define IFX_DMU_HP_PROCON_P3_S99L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S100L */
#define IFX_DMU_HP_PROCON_P3_S100L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S100L */
#define IFX_DMU_HP_PROCON_P3_S100L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S100L */
#define IFX_DMU_HP_PROCON_P3_S100L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S101L */
#define IFX_DMU_HP_PROCON_P3_S101L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S101L */
#define IFX_DMU_HP_PROCON_P3_S101L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S101L */
#define IFX_DMU_HP_PROCON_P3_S101L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S102L */
#define IFX_DMU_HP_PROCON_P3_S102L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S102L */
#define IFX_DMU_HP_PROCON_P3_S102L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S102L */
#define IFX_DMU_HP_PROCON_P3_S102L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S103L */
#define IFX_DMU_HP_PROCON_P3_S103L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S103L */
#define IFX_DMU_HP_PROCON_P3_S103L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S103L */
#define IFX_DMU_HP_PROCON_P3_S103L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S104L */
#define IFX_DMU_HP_PROCON_P3_S104L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S104L */
#define IFX_DMU_HP_PROCON_P3_S104L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S104L */
#define IFX_DMU_HP_PROCON_P3_S104L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S105L */
#define IFX_DMU_HP_PROCON_P3_S105L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S105L */
#define IFX_DMU_HP_PROCON_P3_S105L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S105L */
#define IFX_DMU_HP_PROCON_P3_S105L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S106L */
#define IFX_DMU_HP_PROCON_P3_S106L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S106L */
#define IFX_DMU_HP_PROCON_P3_S106L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S106L */
#define IFX_DMU_HP_PROCON_P3_S106L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S107L */
#define IFX_DMU_HP_PROCON_P3_S107L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S107L */
#define IFX_DMU_HP_PROCON_P3_S107L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S107L */
#define IFX_DMU_HP_PROCON_P3_S107L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S108L */
#define IFX_DMU_HP_PROCON_P3_S108L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S108L */
#define IFX_DMU_HP_PROCON_P3_S108L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S108L */
#define IFX_DMU_HP_PROCON_P3_S108L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S109L */
#define IFX_DMU_HP_PROCON_P3_S109L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S109L */
#define IFX_DMU_HP_PROCON_P3_S109L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S109L */
#define IFX_DMU_HP_PROCON_P3_S109L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S110L */
#define IFX_DMU_HP_PROCON_P3_S110L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S110L */
#define IFX_DMU_HP_PROCON_P3_S110L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S110L */
#define IFX_DMU_HP_PROCON_P3_S110L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S111L */
#define IFX_DMU_HP_PROCON_P3_S111L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S111L */
#define IFX_DMU_HP_PROCON_P3_S111L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S111L */
#define IFX_DMU_HP_PROCON_P3_S111L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S112L */
#define IFX_DMU_HP_PROCON_P3_S112L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S112L */
#define IFX_DMU_HP_PROCON_P3_S112L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S112L */
#define IFX_DMU_HP_PROCON_P3_S112L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S113L */
#define IFX_DMU_HP_PROCON_P3_S113L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S113L */
#define IFX_DMU_HP_PROCON_P3_S113L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S113L */
#define IFX_DMU_HP_PROCON_P3_S113L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S114L */
#define IFX_DMU_HP_PROCON_P3_S114L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S114L */
#define IFX_DMU_HP_PROCON_P3_S114L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S114L */
#define IFX_DMU_HP_PROCON_P3_S114L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S115L */
#define IFX_DMU_HP_PROCON_P3_S115L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S115L */
#define IFX_DMU_HP_PROCON_P3_S115L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S115L */
#define IFX_DMU_HP_PROCON_P3_S115L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S116L */
#define IFX_DMU_HP_PROCON_P3_S116L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S116L */
#define IFX_DMU_HP_PROCON_P3_S116L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S116L */
#define IFX_DMU_HP_PROCON_P3_S116L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S117L */
#define IFX_DMU_HP_PROCON_P3_S117L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S117L */
#define IFX_DMU_HP_PROCON_P3_S117L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S117L */
#define IFX_DMU_HP_PROCON_P3_S117L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S118L */
#define IFX_DMU_HP_PROCON_P3_S118L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S118L */
#define IFX_DMU_HP_PROCON_P3_S118L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S118L */
#define IFX_DMU_HP_PROCON_P3_S118L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S119L */
#define IFX_DMU_HP_PROCON_P3_S119L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S119L */
#define IFX_DMU_HP_PROCON_P3_S119L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S119L */
#define IFX_DMU_HP_PROCON_P3_S119L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S120L */
#define IFX_DMU_HP_PROCON_P3_S120L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S120L */
#define IFX_DMU_HP_PROCON_P3_S120L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S120L */
#define IFX_DMU_HP_PROCON_P3_S120L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S121L */
#define IFX_DMU_HP_PROCON_P3_S121L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S121L */
#define IFX_DMU_HP_PROCON_P3_S121L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S121L */
#define IFX_DMU_HP_PROCON_P3_S121L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S122L */
#define IFX_DMU_HP_PROCON_P3_S122L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S122L */
#define IFX_DMU_HP_PROCON_P3_S122L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S122L */
#define IFX_DMU_HP_PROCON_P3_S122L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S123L */
#define IFX_DMU_HP_PROCON_P3_S123L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S123L */
#define IFX_DMU_HP_PROCON_P3_S123L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S123L */
#define IFX_DMU_HP_PROCON_P3_S123L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S124L */
#define IFX_DMU_HP_PROCON_P3_S124L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S124L */
#define IFX_DMU_HP_PROCON_P3_S124L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S124L */
#define IFX_DMU_HP_PROCON_P3_S124L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S125L */
#define IFX_DMU_HP_PROCON_P3_S125L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S125L */
#define IFX_DMU_HP_PROCON_P3_S125L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S125L */
#define IFX_DMU_HP_PROCON_P3_S125L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S126L */
#define IFX_DMU_HP_PROCON_P3_S126L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S126L */
#define IFX_DMU_HP_PROCON_P3_S126L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S126L */
#define IFX_DMU_HP_PROCON_P3_S126L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_P3_Bits.S127L */
#define IFX_DMU_HP_PROCON_P3_S127L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P3_Bits.S127L */
#define IFX_DMU_HP_PROCON_P3_S127L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P3_Bits.S127L */
#define IFX_DMU_HP_PROCON_P3_S127L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S128L */
#define IFX_DMU_HP_PROCON_P4_S128L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S128L */
#define IFX_DMU_HP_PROCON_P4_S128L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S128L */
#define IFX_DMU_HP_PROCON_P4_S128L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S129L */
#define IFX_DMU_HP_PROCON_P4_S129L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S129L */
#define IFX_DMU_HP_PROCON_P4_S129L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S129L */
#define IFX_DMU_HP_PROCON_P4_S129L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S130L */
#define IFX_DMU_HP_PROCON_P4_S130L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S130L */
#define IFX_DMU_HP_PROCON_P4_S130L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S130L */
#define IFX_DMU_HP_PROCON_P4_S130L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S131L */
#define IFX_DMU_HP_PROCON_P4_S131L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S131L */
#define IFX_DMU_HP_PROCON_P4_S131L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S131L */
#define IFX_DMU_HP_PROCON_P4_S131L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S132L */
#define IFX_DMU_HP_PROCON_P4_S132L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S132L */
#define IFX_DMU_HP_PROCON_P4_S132L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S132L */
#define IFX_DMU_HP_PROCON_P4_S132L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S133L */
#define IFX_DMU_HP_PROCON_P4_S133L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S133L */
#define IFX_DMU_HP_PROCON_P4_S133L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S133L */
#define IFX_DMU_HP_PROCON_P4_S133L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S134L */
#define IFX_DMU_HP_PROCON_P4_S134L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S134L */
#define IFX_DMU_HP_PROCON_P4_S134L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S134L */
#define IFX_DMU_HP_PROCON_P4_S134L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S135L */
#define IFX_DMU_HP_PROCON_P4_S135L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S135L */
#define IFX_DMU_HP_PROCON_P4_S135L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S135L */
#define IFX_DMU_HP_PROCON_P4_S135L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S136L */
#define IFX_DMU_HP_PROCON_P4_S136L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S136L */
#define IFX_DMU_HP_PROCON_P4_S136L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S136L */
#define IFX_DMU_HP_PROCON_P4_S136L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S137L */
#define IFX_DMU_HP_PROCON_P4_S137L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S137L */
#define IFX_DMU_HP_PROCON_P4_S137L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S137L */
#define IFX_DMU_HP_PROCON_P4_S137L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S138L */
#define IFX_DMU_HP_PROCON_P4_S138L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S138L */
#define IFX_DMU_HP_PROCON_P4_S138L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S138L */
#define IFX_DMU_HP_PROCON_P4_S138L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S139L */
#define IFX_DMU_HP_PROCON_P4_S139L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S139L */
#define IFX_DMU_HP_PROCON_P4_S139L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S139L */
#define IFX_DMU_HP_PROCON_P4_S139L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S140L */
#define IFX_DMU_HP_PROCON_P4_S140L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S140L */
#define IFX_DMU_HP_PROCON_P4_S140L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S140L */
#define IFX_DMU_HP_PROCON_P4_S140L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S141L */
#define IFX_DMU_HP_PROCON_P4_S141L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S141L */
#define IFX_DMU_HP_PROCON_P4_S141L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S141L */
#define IFX_DMU_HP_PROCON_P4_S141L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S142L */
#define IFX_DMU_HP_PROCON_P4_S142L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S142L */
#define IFX_DMU_HP_PROCON_P4_S142L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S142L */
#define IFX_DMU_HP_PROCON_P4_S142L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S143L */
#define IFX_DMU_HP_PROCON_P4_S143L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S143L */
#define IFX_DMU_HP_PROCON_P4_S143L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S143L */
#define IFX_DMU_HP_PROCON_P4_S143L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S144L */
#define IFX_DMU_HP_PROCON_P4_S144L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S144L */
#define IFX_DMU_HP_PROCON_P4_S144L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S144L */
#define IFX_DMU_HP_PROCON_P4_S144L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S145L */
#define IFX_DMU_HP_PROCON_P4_S145L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S145L */
#define IFX_DMU_HP_PROCON_P4_S145L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S145L */
#define IFX_DMU_HP_PROCON_P4_S145L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S146L */
#define IFX_DMU_HP_PROCON_P4_S146L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S146L */
#define IFX_DMU_HP_PROCON_P4_S146L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S146L */
#define IFX_DMU_HP_PROCON_P4_S146L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S147L */
#define IFX_DMU_HP_PROCON_P4_S147L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S147L */
#define IFX_DMU_HP_PROCON_P4_S147L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S147L */
#define IFX_DMU_HP_PROCON_P4_S147L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S148L */
#define IFX_DMU_HP_PROCON_P4_S148L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S148L */
#define IFX_DMU_HP_PROCON_P4_S148L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S148L */
#define IFX_DMU_HP_PROCON_P4_S148L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S149L */
#define IFX_DMU_HP_PROCON_P4_S149L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S149L */
#define IFX_DMU_HP_PROCON_P4_S149L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S149L */
#define IFX_DMU_HP_PROCON_P4_S149L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S150L */
#define IFX_DMU_HP_PROCON_P4_S150L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S150L */
#define IFX_DMU_HP_PROCON_P4_S150L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S150L */
#define IFX_DMU_HP_PROCON_P4_S150L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S151L */
#define IFX_DMU_HP_PROCON_P4_S151L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S151L */
#define IFX_DMU_HP_PROCON_P4_S151L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S151L */
#define IFX_DMU_HP_PROCON_P4_S151L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S152L */
#define IFX_DMU_HP_PROCON_P4_S152L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S152L */
#define IFX_DMU_HP_PROCON_P4_S152L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S152L */
#define IFX_DMU_HP_PROCON_P4_S152L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S153L */
#define IFX_DMU_HP_PROCON_P4_S153L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S153L */
#define IFX_DMU_HP_PROCON_P4_S153L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S153L */
#define IFX_DMU_HP_PROCON_P4_S153L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S154L */
#define IFX_DMU_HP_PROCON_P4_S154L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S154L */
#define IFX_DMU_HP_PROCON_P4_S154L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S154L */
#define IFX_DMU_HP_PROCON_P4_S154L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S155L */
#define IFX_DMU_HP_PROCON_P4_S155L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S155L */
#define IFX_DMU_HP_PROCON_P4_S155L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S155L */
#define IFX_DMU_HP_PROCON_P4_S155L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S156L */
#define IFX_DMU_HP_PROCON_P4_S156L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S156L */
#define IFX_DMU_HP_PROCON_P4_S156L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S156L */
#define IFX_DMU_HP_PROCON_P4_S156L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S157L */
#define IFX_DMU_HP_PROCON_P4_S157L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S157L */
#define IFX_DMU_HP_PROCON_P4_S157L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S157L */
#define IFX_DMU_HP_PROCON_P4_S157L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S158L */
#define IFX_DMU_HP_PROCON_P4_S158L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S158L */
#define IFX_DMU_HP_PROCON_P4_S158L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S158L */
#define IFX_DMU_HP_PROCON_P4_S158L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_P4_Bits.S159L */
#define IFX_DMU_HP_PROCON_P4_S159L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P4_Bits.S159L */
#define IFX_DMU_HP_PROCON_P4_S159L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P4_Bits.S159L */
#define IFX_DMU_HP_PROCON_P4_S159L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S160L */
#define IFX_DMU_HP_PROCON_P5_S160L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S160L */
#define IFX_DMU_HP_PROCON_P5_S160L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S160L */
#define IFX_DMU_HP_PROCON_P5_S160L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S161L */
#define IFX_DMU_HP_PROCON_P5_S161L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S161L */
#define IFX_DMU_HP_PROCON_P5_S161L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S161L */
#define IFX_DMU_HP_PROCON_P5_S161L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S162L */
#define IFX_DMU_HP_PROCON_P5_S162L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S162L */
#define IFX_DMU_HP_PROCON_P5_S162L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S162L */
#define IFX_DMU_HP_PROCON_P5_S162L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S163L */
#define IFX_DMU_HP_PROCON_P5_S163L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S163L */
#define IFX_DMU_HP_PROCON_P5_S163L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S163L */
#define IFX_DMU_HP_PROCON_P5_S163L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S164L */
#define IFX_DMU_HP_PROCON_P5_S164L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S164L */
#define IFX_DMU_HP_PROCON_P5_S164L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S164L */
#define IFX_DMU_HP_PROCON_P5_S164L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S165L */
#define IFX_DMU_HP_PROCON_P5_S165L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S165L */
#define IFX_DMU_HP_PROCON_P5_S165L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S165L */
#define IFX_DMU_HP_PROCON_P5_S165L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S166L */
#define IFX_DMU_HP_PROCON_P5_S166L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S166L */
#define IFX_DMU_HP_PROCON_P5_S166L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S166L */
#define IFX_DMU_HP_PROCON_P5_S166L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S167L */
#define IFX_DMU_HP_PROCON_P5_S167L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S167L */
#define IFX_DMU_HP_PROCON_P5_S167L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S167L */
#define IFX_DMU_HP_PROCON_P5_S167L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S168L */
#define IFX_DMU_HP_PROCON_P5_S168L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S168L */
#define IFX_DMU_HP_PROCON_P5_S168L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S168L */
#define IFX_DMU_HP_PROCON_P5_S168L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S169L */
#define IFX_DMU_HP_PROCON_P5_S169L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S169L */
#define IFX_DMU_HP_PROCON_P5_S169L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S169L */
#define IFX_DMU_HP_PROCON_P5_S169L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S170L */
#define IFX_DMU_HP_PROCON_P5_S170L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S170L */
#define IFX_DMU_HP_PROCON_P5_S170L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S170L */
#define IFX_DMU_HP_PROCON_P5_S170L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S171L */
#define IFX_DMU_HP_PROCON_P5_S171L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S171L */
#define IFX_DMU_HP_PROCON_P5_S171L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S171L */
#define IFX_DMU_HP_PROCON_P5_S171L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S172L */
#define IFX_DMU_HP_PROCON_P5_S172L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S172L */
#define IFX_DMU_HP_PROCON_P5_S172L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S172L */
#define IFX_DMU_HP_PROCON_P5_S172L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S173L */
#define IFX_DMU_HP_PROCON_P5_S173L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S173L */
#define IFX_DMU_HP_PROCON_P5_S173L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S173L */
#define IFX_DMU_HP_PROCON_P5_S173L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S174L */
#define IFX_DMU_HP_PROCON_P5_S174L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S174L */
#define IFX_DMU_HP_PROCON_P5_S174L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S174L */
#define IFX_DMU_HP_PROCON_P5_S174L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S175L */
#define IFX_DMU_HP_PROCON_P5_S175L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S175L */
#define IFX_DMU_HP_PROCON_P5_S175L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S175L */
#define IFX_DMU_HP_PROCON_P5_S175L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S176L */
#define IFX_DMU_HP_PROCON_P5_S176L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S176L */
#define IFX_DMU_HP_PROCON_P5_S176L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S176L */
#define IFX_DMU_HP_PROCON_P5_S176L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S177L */
#define IFX_DMU_HP_PROCON_P5_S177L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S177L */
#define IFX_DMU_HP_PROCON_P5_S177L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S177L */
#define IFX_DMU_HP_PROCON_P5_S177L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S178L */
#define IFX_DMU_HP_PROCON_P5_S178L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S178L */
#define IFX_DMU_HP_PROCON_P5_S178L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S178L */
#define IFX_DMU_HP_PROCON_P5_S178L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S179L */
#define IFX_DMU_HP_PROCON_P5_S179L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S179L */
#define IFX_DMU_HP_PROCON_P5_S179L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S179L */
#define IFX_DMU_HP_PROCON_P5_S179L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S180L */
#define IFX_DMU_HP_PROCON_P5_S180L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S180L */
#define IFX_DMU_HP_PROCON_P5_S180L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S180L */
#define IFX_DMU_HP_PROCON_P5_S180L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S181L */
#define IFX_DMU_HP_PROCON_P5_S181L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S181L */
#define IFX_DMU_HP_PROCON_P5_S181L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S181L */
#define IFX_DMU_HP_PROCON_P5_S181L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S182L */
#define IFX_DMU_HP_PROCON_P5_S182L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S182L */
#define IFX_DMU_HP_PROCON_P5_S182L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S182L */
#define IFX_DMU_HP_PROCON_P5_S182L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S183L */
#define IFX_DMU_HP_PROCON_P5_S183L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S183L */
#define IFX_DMU_HP_PROCON_P5_S183L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S183L */
#define IFX_DMU_HP_PROCON_P5_S183L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S184L */
#define IFX_DMU_HP_PROCON_P5_S184L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S184L */
#define IFX_DMU_HP_PROCON_P5_S184L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S184L */
#define IFX_DMU_HP_PROCON_P5_S184L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S185L */
#define IFX_DMU_HP_PROCON_P5_S185L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S185L */
#define IFX_DMU_HP_PROCON_P5_S185L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S185L */
#define IFX_DMU_HP_PROCON_P5_S185L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S186L */
#define IFX_DMU_HP_PROCON_P5_S186L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S186L */
#define IFX_DMU_HP_PROCON_P5_S186L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S186L */
#define IFX_DMU_HP_PROCON_P5_S186L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S187L */
#define IFX_DMU_HP_PROCON_P5_S187L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S187L */
#define IFX_DMU_HP_PROCON_P5_S187L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S187L */
#define IFX_DMU_HP_PROCON_P5_S187L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S188L */
#define IFX_DMU_HP_PROCON_P5_S188L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S188L */
#define IFX_DMU_HP_PROCON_P5_S188L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S188L */
#define IFX_DMU_HP_PROCON_P5_S188L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S189L */
#define IFX_DMU_HP_PROCON_P5_S189L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S189L */
#define IFX_DMU_HP_PROCON_P5_S189L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S189L */
#define IFX_DMU_HP_PROCON_P5_S189L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S190L */
#define IFX_DMU_HP_PROCON_P5_S190L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S190L */
#define IFX_DMU_HP_PROCON_P5_S190L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S190L */
#define IFX_DMU_HP_PROCON_P5_S190L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_P5_Bits.S191L */
#define IFX_DMU_HP_PROCON_P5_S191L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_P5_Bits.S191L */
#define IFX_DMU_HP_PROCON_P5_S191L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_P5_Bits.S191L */
#define IFX_DMU_HP_PROCON_P5_S191L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S0ROM */
#define IFX_DMU_HP_PROCON_OTP0_S0ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S0ROM */
#define IFX_DMU_HP_PROCON_OTP0_S0ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S0ROM */
#define IFX_DMU_HP_PROCON_OTP0_S0ROM_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S1ROM */
#define IFX_DMU_HP_PROCON_OTP0_S1ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S1ROM */
#define IFX_DMU_HP_PROCON_OTP0_S1ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S1ROM */
#define IFX_DMU_HP_PROCON_OTP0_S1ROM_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S2ROM */
#define IFX_DMU_HP_PROCON_OTP0_S2ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S2ROM */
#define IFX_DMU_HP_PROCON_OTP0_S2ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S2ROM */
#define IFX_DMU_HP_PROCON_OTP0_S2ROM_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S3ROM */
#define IFX_DMU_HP_PROCON_OTP0_S3ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S3ROM */
#define IFX_DMU_HP_PROCON_OTP0_S3ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S3ROM */
#define IFX_DMU_HP_PROCON_OTP0_S3ROM_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S4ROM */
#define IFX_DMU_HP_PROCON_OTP0_S4ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S4ROM */
#define IFX_DMU_HP_PROCON_OTP0_S4ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S4ROM */
#define IFX_DMU_HP_PROCON_OTP0_S4ROM_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S5ROM */
#define IFX_DMU_HP_PROCON_OTP0_S5ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S5ROM */
#define IFX_DMU_HP_PROCON_OTP0_S5ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S5ROM */
#define IFX_DMU_HP_PROCON_OTP0_S5ROM_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S6ROM */
#define IFX_DMU_HP_PROCON_OTP0_S6ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S6ROM */
#define IFX_DMU_HP_PROCON_OTP0_S6ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S6ROM */
#define IFX_DMU_HP_PROCON_OTP0_S6ROM_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S7ROM */
#define IFX_DMU_HP_PROCON_OTP0_S7ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S7ROM */
#define IFX_DMU_HP_PROCON_OTP0_S7ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S7ROM */
#define IFX_DMU_HP_PROCON_OTP0_S7ROM_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S8ROM */
#define IFX_DMU_HP_PROCON_OTP0_S8ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S8ROM */
#define IFX_DMU_HP_PROCON_OTP0_S8ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S8ROM */
#define IFX_DMU_HP_PROCON_OTP0_S8ROM_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S9ROM */
#define IFX_DMU_HP_PROCON_OTP0_S9ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S9ROM */
#define IFX_DMU_HP_PROCON_OTP0_S9ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S9ROM */
#define IFX_DMU_HP_PROCON_OTP0_S9ROM_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S10ROM */
#define IFX_DMU_HP_PROCON_OTP0_S10ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S10ROM */
#define IFX_DMU_HP_PROCON_OTP0_S10ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S10ROM */
#define IFX_DMU_HP_PROCON_OTP0_S10ROM_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S11ROM */
#define IFX_DMU_HP_PROCON_OTP0_S11ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S11ROM */
#define IFX_DMU_HP_PROCON_OTP0_S11ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S11ROM */
#define IFX_DMU_HP_PROCON_OTP0_S11ROM_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S12ROM */
#define IFX_DMU_HP_PROCON_OTP0_S12ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S12ROM */
#define IFX_DMU_HP_PROCON_OTP0_S12ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S12ROM */
#define IFX_DMU_HP_PROCON_OTP0_S12ROM_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S13ROM */
#define IFX_DMU_HP_PROCON_OTP0_S13ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S13ROM */
#define IFX_DMU_HP_PROCON_OTP0_S13ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S13ROM */
#define IFX_DMU_HP_PROCON_OTP0_S13ROM_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S14ROM */
#define IFX_DMU_HP_PROCON_OTP0_S14ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S14ROM */
#define IFX_DMU_HP_PROCON_OTP0_S14ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S14ROM */
#define IFX_DMU_HP_PROCON_OTP0_S14ROM_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S15ROM */
#define IFX_DMU_HP_PROCON_OTP0_S15ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S15ROM */
#define IFX_DMU_HP_PROCON_OTP0_S15ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S15ROM */
#define IFX_DMU_HP_PROCON_OTP0_S15ROM_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S16ROM */
#define IFX_DMU_HP_PROCON_OTP0_S16ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S16ROM */
#define IFX_DMU_HP_PROCON_OTP0_S16ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S16ROM */
#define IFX_DMU_HP_PROCON_OTP0_S16ROM_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S17ROM */
#define IFX_DMU_HP_PROCON_OTP0_S17ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S17ROM */
#define IFX_DMU_HP_PROCON_OTP0_S17ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S17ROM */
#define IFX_DMU_HP_PROCON_OTP0_S17ROM_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S18ROM */
#define IFX_DMU_HP_PROCON_OTP0_S18ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S18ROM */
#define IFX_DMU_HP_PROCON_OTP0_S18ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S18ROM */
#define IFX_DMU_HP_PROCON_OTP0_S18ROM_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S19ROM */
#define IFX_DMU_HP_PROCON_OTP0_S19ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S19ROM */
#define IFX_DMU_HP_PROCON_OTP0_S19ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S19ROM */
#define IFX_DMU_HP_PROCON_OTP0_S19ROM_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S20ROM */
#define IFX_DMU_HP_PROCON_OTP0_S20ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S20ROM */
#define IFX_DMU_HP_PROCON_OTP0_S20ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S20ROM */
#define IFX_DMU_HP_PROCON_OTP0_S20ROM_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S21ROM */
#define IFX_DMU_HP_PROCON_OTP0_S21ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S21ROM */
#define IFX_DMU_HP_PROCON_OTP0_S21ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S21ROM */
#define IFX_DMU_HP_PROCON_OTP0_S21ROM_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S22ROM */
#define IFX_DMU_HP_PROCON_OTP0_S22ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S22ROM */
#define IFX_DMU_HP_PROCON_OTP0_S22ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S22ROM */
#define IFX_DMU_HP_PROCON_OTP0_S22ROM_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S23ROM */
#define IFX_DMU_HP_PROCON_OTP0_S23ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S23ROM */
#define IFX_DMU_HP_PROCON_OTP0_S23ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S23ROM */
#define IFX_DMU_HP_PROCON_OTP0_S23ROM_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S24ROM */
#define IFX_DMU_HP_PROCON_OTP0_S24ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S24ROM */
#define IFX_DMU_HP_PROCON_OTP0_S24ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S24ROM */
#define IFX_DMU_HP_PROCON_OTP0_S24ROM_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S25ROM */
#define IFX_DMU_HP_PROCON_OTP0_S25ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S25ROM */
#define IFX_DMU_HP_PROCON_OTP0_S25ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S25ROM */
#define IFX_DMU_HP_PROCON_OTP0_S25ROM_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S26ROM */
#define IFX_DMU_HP_PROCON_OTP0_S26ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S26ROM */
#define IFX_DMU_HP_PROCON_OTP0_S26ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S26ROM */
#define IFX_DMU_HP_PROCON_OTP0_S26ROM_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S27ROM */
#define IFX_DMU_HP_PROCON_OTP0_S27ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S27ROM */
#define IFX_DMU_HP_PROCON_OTP0_S27ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S27ROM */
#define IFX_DMU_HP_PROCON_OTP0_S27ROM_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S28ROM */
#define IFX_DMU_HP_PROCON_OTP0_S28ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S28ROM */
#define IFX_DMU_HP_PROCON_OTP0_S28ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S28ROM */
#define IFX_DMU_HP_PROCON_OTP0_S28ROM_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S29ROM */
#define IFX_DMU_HP_PROCON_OTP0_S29ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S29ROM */
#define IFX_DMU_HP_PROCON_OTP0_S29ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S29ROM */
#define IFX_DMU_HP_PROCON_OTP0_S29ROM_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S30ROM */
#define IFX_DMU_HP_PROCON_OTP0_S30ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S30ROM */
#define IFX_DMU_HP_PROCON_OTP0_S30ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S30ROM */
#define IFX_DMU_HP_PROCON_OTP0_S30ROM_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP0_Bits.S31ROM */
#define IFX_DMU_HP_PROCON_OTP0_S31ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP0_Bits.S31ROM */
#define IFX_DMU_HP_PROCON_OTP0_S31ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP0_Bits.S31ROM */
#define IFX_DMU_HP_PROCON_OTP0_S31ROM_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S32ROM */
#define IFX_DMU_HP_PROCON_OTP1_S32ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S32ROM */
#define IFX_DMU_HP_PROCON_OTP1_S32ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S32ROM */
#define IFX_DMU_HP_PROCON_OTP1_S32ROM_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S33ROM */
#define IFX_DMU_HP_PROCON_OTP1_S33ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S33ROM */
#define IFX_DMU_HP_PROCON_OTP1_S33ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S33ROM */
#define IFX_DMU_HP_PROCON_OTP1_S33ROM_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S34ROM */
#define IFX_DMU_HP_PROCON_OTP1_S34ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S34ROM */
#define IFX_DMU_HP_PROCON_OTP1_S34ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S34ROM */
#define IFX_DMU_HP_PROCON_OTP1_S34ROM_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S35ROM */
#define IFX_DMU_HP_PROCON_OTP1_S35ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S35ROM */
#define IFX_DMU_HP_PROCON_OTP1_S35ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S35ROM */
#define IFX_DMU_HP_PROCON_OTP1_S35ROM_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S36ROM */
#define IFX_DMU_HP_PROCON_OTP1_S36ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S36ROM */
#define IFX_DMU_HP_PROCON_OTP1_S36ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S36ROM */
#define IFX_DMU_HP_PROCON_OTP1_S36ROM_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S37ROM */
#define IFX_DMU_HP_PROCON_OTP1_S37ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S37ROM */
#define IFX_DMU_HP_PROCON_OTP1_S37ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S37ROM */
#define IFX_DMU_HP_PROCON_OTP1_S37ROM_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S38ROM */
#define IFX_DMU_HP_PROCON_OTP1_S38ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S38ROM */
#define IFX_DMU_HP_PROCON_OTP1_S38ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S38ROM */
#define IFX_DMU_HP_PROCON_OTP1_S38ROM_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S39ROM */
#define IFX_DMU_HP_PROCON_OTP1_S39ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S39ROM */
#define IFX_DMU_HP_PROCON_OTP1_S39ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S39ROM */
#define IFX_DMU_HP_PROCON_OTP1_S39ROM_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S40ROM */
#define IFX_DMU_HP_PROCON_OTP1_S40ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S40ROM */
#define IFX_DMU_HP_PROCON_OTP1_S40ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S40ROM */
#define IFX_DMU_HP_PROCON_OTP1_S40ROM_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S41ROM */
#define IFX_DMU_HP_PROCON_OTP1_S41ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S41ROM */
#define IFX_DMU_HP_PROCON_OTP1_S41ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S41ROM */
#define IFX_DMU_HP_PROCON_OTP1_S41ROM_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S42ROM */
#define IFX_DMU_HP_PROCON_OTP1_S42ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S42ROM */
#define IFX_DMU_HP_PROCON_OTP1_S42ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S42ROM */
#define IFX_DMU_HP_PROCON_OTP1_S42ROM_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S43ROM */
#define IFX_DMU_HP_PROCON_OTP1_S43ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S43ROM */
#define IFX_DMU_HP_PROCON_OTP1_S43ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S43ROM */
#define IFX_DMU_HP_PROCON_OTP1_S43ROM_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S44ROM */
#define IFX_DMU_HP_PROCON_OTP1_S44ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S44ROM */
#define IFX_DMU_HP_PROCON_OTP1_S44ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S44ROM */
#define IFX_DMU_HP_PROCON_OTP1_S44ROM_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S45ROM */
#define IFX_DMU_HP_PROCON_OTP1_S45ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S45ROM */
#define IFX_DMU_HP_PROCON_OTP1_S45ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S45ROM */
#define IFX_DMU_HP_PROCON_OTP1_S45ROM_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S46ROM */
#define IFX_DMU_HP_PROCON_OTP1_S46ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S46ROM */
#define IFX_DMU_HP_PROCON_OTP1_S46ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S46ROM */
#define IFX_DMU_HP_PROCON_OTP1_S46ROM_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S47ROM */
#define IFX_DMU_HP_PROCON_OTP1_S47ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S47ROM */
#define IFX_DMU_HP_PROCON_OTP1_S47ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S47ROM */
#define IFX_DMU_HP_PROCON_OTP1_S47ROM_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S48ROM */
#define IFX_DMU_HP_PROCON_OTP1_S48ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S48ROM */
#define IFX_DMU_HP_PROCON_OTP1_S48ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S48ROM */
#define IFX_DMU_HP_PROCON_OTP1_S48ROM_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S49ROM */
#define IFX_DMU_HP_PROCON_OTP1_S49ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S49ROM */
#define IFX_DMU_HP_PROCON_OTP1_S49ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S49ROM */
#define IFX_DMU_HP_PROCON_OTP1_S49ROM_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S50ROM */
#define IFX_DMU_HP_PROCON_OTP1_S50ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S50ROM */
#define IFX_DMU_HP_PROCON_OTP1_S50ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S50ROM */
#define IFX_DMU_HP_PROCON_OTP1_S50ROM_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S51ROM */
#define IFX_DMU_HP_PROCON_OTP1_S51ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S51ROM */
#define IFX_DMU_HP_PROCON_OTP1_S51ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S51ROM */
#define IFX_DMU_HP_PROCON_OTP1_S51ROM_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S52ROM */
#define IFX_DMU_HP_PROCON_OTP1_S52ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S52ROM */
#define IFX_DMU_HP_PROCON_OTP1_S52ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S52ROM */
#define IFX_DMU_HP_PROCON_OTP1_S52ROM_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S53ROM */
#define IFX_DMU_HP_PROCON_OTP1_S53ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S53ROM */
#define IFX_DMU_HP_PROCON_OTP1_S53ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S53ROM */
#define IFX_DMU_HP_PROCON_OTP1_S53ROM_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S54ROM */
#define IFX_DMU_HP_PROCON_OTP1_S54ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S54ROM */
#define IFX_DMU_HP_PROCON_OTP1_S54ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S54ROM */
#define IFX_DMU_HP_PROCON_OTP1_S54ROM_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S55ROM */
#define IFX_DMU_HP_PROCON_OTP1_S55ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S55ROM */
#define IFX_DMU_HP_PROCON_OTP1_S55ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S55ROM */
#define IFX_DMU_HP_PROCON_OTP1_S55ROM_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S56ROM */
#define IFX_DMU_HP_PROCON_OTP1_S56ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S56ROM */
#define IFX_DMU_HP_PROCON_OTP1_S56ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S56ROM */
#define IFX_DMU_HP_PROCON_OTP1_S56ROM_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S57ROM */
#define IFX_DMU_HP_PROCON_OTP1_S57ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S57ROM */
#define IFX_DMU_HP_PROCON_OTP1_S57ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S57ROM */
#define IFX_DMU_HP_PROCON_OTP1_S57ROM_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S58ROM */
#define IFX_DMU_HP_PROCON_OTP1_S58ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S58ROM */
#define IFX_DMU_HP_PROCON_OTP1_S58ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S58ROM */
#define IFX_DMU_HP_PROCON_OTP1_S58ROM_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S59ROM */
#define IFX_DMU_HP_PROCON_OTP1_S59ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S59ROM */
#define IFX_DMU_HP_PROCON_OTP1_S59ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S59ROM */
#define IFX_DMU_HP_PROCON_OTP1_S59ROM_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S60ROM */
#define IFX_DMU_HP_PROCON_OTP1_S60ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S60ROM */
#define IFX_DMU_HP_PROCON_OTP1_S60ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S60ROM */
#define IFX_DMU_HP_PROCON_OTP1_S60ROM_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S61ROM */
#define IFX_DMU_HP_PROCON_OTP1_S61ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S61ROM */
#define IFX_DMU_HP_PROCON_OTP1_S61ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S61ROM */
#define IFX_DMU_HP_PROCON_OTP1_S61ROM_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S62ROM */
#define IFX_DMU_HP_PROCON_OTP1_S62ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S62ROM */
#define IFX_DMU_HP_PROCON_OTP1_S62ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S62ROM */
#define IFX_DMU_HP_PROCON_OTP1_S62ROM_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP1_Bits.S63ROM */
#define IFX_DMU_HP_PROCON_OTP1_S63ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP1_Bits.S63ROM */
#define IFX_DMU_HP_PROCON_OTP1_S63ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP1_Bits.S63ROM */
#define IFX_DMU_HP_PROCON_OTP1_S63ROM_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S64ROM */
#define IFX_DMU_HP_PROCON_OTP2_S64ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S64ROM */
#define IFX_DMU_HP_PROCON_OTP2_S64ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S64ROM */
#define IFX_DMU_HP_PROCON_OTP2_S64ROM_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S65ROM */
#define IFX_DMU_HP_PROCON_OTP2_S65ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S65ROM */
#define IFX_DMU_HP_PROCON_OTP2_S65ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S65ROM */
#define IFX_DMU_HP_PROCON_OTP2_S65ROM_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S66ROM */
#define IFX_DMU_HP_PROCON_OTP2_S66ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S66ROM */
#define IFX_DMU_HP_PROCON_OTP2_S66ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S66ROM */
#define IFX_DMU_HP_PROCON_OTP2_S66ROM_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S67ROM */
#define IFX_DMU_HP_PROCON_OTP2_S67ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S67ROM */
#define IFX_DMU_HP_PROCON_OTP2_S67ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S67ROM */
#define IFX_DMU_HP_PROCON_OTP2_S67ROM_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S68ROM */
#define IFX_DMU_HP_PROCON_OTP2_S68ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S68ROM */
#define IFX_DMU_HP_PROCON_OTP2_S68ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S68ROM */
#define IFX_DMU_HP_PROCON_OTP2_S68ROM_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S69ROM */
#define IFX_DMU_HP_PROCON_OTP2_S69ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S69ROM */
#define IFX_DMU_HP_PROCON_OTP2_S69ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S69ROM */
#define IFX_DMU_HP_PROCON_OTP2_S69ROM_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S70ROM */
#define IFX_DMU_HP_PROCON_OTP2_S70ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S70ROM */
#define IFX_DMU_HP_PROCON_OTP2_S70ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S70ROM */
#define IFX_DMU_HP_PROCON_OTP2_S70ROM_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S71ROM */
#define IFX_DMU_HP_PROCON_OTP2_S71ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S71ROM */
#define IFX_DMU_HP_PROCON_OTP2_S71ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S71ROM */
#define IFX_DMU_HP_PROCON_OTP2_S71ROM_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S72ROM */
#define IFX_DMU_HP_PROCON_OTP2_S72ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S72ROM */
#define IFX_DMU_HP_PROCON_OTP2_S72ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S72ROM */
#define IFX_DMU_HP_PROCON_OTP2_S72ROM_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S73ROM */
#define IFX_DMU_HP_PROCON_OTP2_S73ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S73ROM */
#define IFX_DMU_HP_PROCON_OTP2_S73ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S73ROM */
#define IFX_DMU_HP_PROCON_OTP2_S73ROM_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S74ROM */
#define IFX_DMU_HP_PROCON_OTP2_S74ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S74ROM */
#define IFX_DMU_HP_PROCON_OTP2_S74ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S74ROM */
#define IFX_DMU_HP_PROCON_OTP2_S74ROM_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S75ROM */
#define IFX_DMU_HP_PROCON_OTP2_S75ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S75ROM */
#define IFX_DMU_HP_PROCON_OTP2_S75ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S75ROM */
#define IFX_DMU_HP_PROCON_OTP2_S75ROM_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S76ROM */
#define IFX_DMU_HP_PROCON_OTP2_S76ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S76ROM */
#define IFX_DMU_HP_PROCON_OTP2_S76ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S76ROM */
#define IFX_DMU_HP_PROCON_OTP2_S76ROM_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S77ROM */
#define IFX_DMU_HP_PROCON_OTP2_S77ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S77ROM */
#define IFX_DMU_HP_PROCON_OTP2_S77ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S77ROM */
#define IFX_DMU_HP_PROCON_OTP2_S77ROM_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S78ROM */
#define IFX_DMU_HP_PROCON_OTP2_S78ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S78ROM */
#define IFX_DMU_HP_PROCON_OTP2_S78ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S78ROM */
#define IFX_DMU_HP_PROCON_OTP2_S78ROM_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S79ROM */
#define IFX_DMU_HP_PROCON_OTP2_S79ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S79ROM */
#define IFX_DMU_HP_PROCON_OTP2_S79ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S79ROM */
#define IFX_DMU_HP_PROCON_OTP2_S79ROM_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S80ROM */
#define IFX_DMU_HP_PROCON_OTP2_S80ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S80ROM */
#define IFX_DMU_HP_PROCON_OTP2_S80ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S80ROM */
#define IFX_DMU_HP_PROCON_OTP2_S80ROM_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S81ROM */
#define IFX_DMU_HP_PROCON_OTP2_S81ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S81ROM */
#define IFX_DMU_HP_PROCON_OTP2_S81ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S81ROM */
#define IFX_DMU_HP_PROCON_OTP2_S81ROM_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S82ROM */
#define IFX_DMU_HP_PROCON_OTP2_S82ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S82ROM */
#define IFX_DMU_HP_PROCON_OTP2_S82ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S82ROM */
#define IFX_DMU_HP_PROCON_OTP2_S82ROM_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S83ROM */
#define IFX_DMU_HP_PROCON_OTP2_S83ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S83ROM */
#define IFX_DMU_HP_PROCON_OTP2_S83ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S83ROM */
#define IFX_DMU_HP_PROCON_OTP2_S83ROM_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S84ROM */
#define IFX_DMU_HP_PROCON_OTP2_S84ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S84ROM */
#define IFX_DMU_HP_PROCON_OTP2_S84ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S84ROM */
#define IFX_DMU_HP_PROCON_OTP2_S84ROM_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S85ROM */
#define IFX_DMU_HP_PROCON_OTP2_S85ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S85ROM */
#define IFX_DMU_HP_PROCON_OTP2_S85ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S85ROM */
#define IFX_DMU_HP_PROCON_OTP2_S85ROM_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S86ROM */
#define IFX_DMU_HP_PROCON_OTP2_S86ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S86ROM */
#define IFX_DMU_HP_PROCON_OTP2_S86ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S86ROM */
#define IFX_DMU_HP_PROCON_OTP2_S86ROM_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S87ROM */
#define IFX_DMU_HP_PROCON_OTP2_S87ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S87ROM */
#define IFX_DMU_HP_PROCON_OTP2_S87ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S87ROM */
#define IFX_DMU_HP_PROCON_OTP2_S87ROM_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S88ROM */
#define IFX_DMU_HP_PROCON_OTP2_S88ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S88ROM */
#define IFX_DMU_HP_PROCON_OTP2_S88ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S88ROM */
#define IFX_DMU_HP_PROCON_OTP2_S88ROM_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S89ROM */
#define IFX_DMU_HP_PROCON_OTP2_S89ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S89ROM */
#define IFX_DMU_HP_PROCON_OTP2_S89ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S89ROM */
#define IFX_DMU_HP_PROCON_OTP2_S89ROM_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S90ROM */
#define IFX_DMU_HP_PROCON_OTP2_S90ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S90ROM */
#define IFX_DMU_HP_PROCON_OTP2_S90ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S90ROM */
#define IFX_DMU_HP_PROCON_OTP2_S90ROM_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S91ROM */
#define IFX_DMU_HP_PROCON_OTP2_S91ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S91ROM */
#define IFX_DMU_HP_PROCON_OTP2_S91ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S91ROM */
#define IFX_DMU_HP_PROCON_OTP2_S91ROM_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S92ROM */
#define IFX_DMU_HP_PROCON_OTP2_S92ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S92ROM */
#define IFX_DMU_HP_PROCON_OTP2_S92ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S92ROM */
#define IFX_DMU_HP_PROCON_OTP2_S92ROM_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S93ROM */
#define IFX_DMU_HP_PROCON_OTP2_S93ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S93ROM */
#define IFX_DMU_HP_PROCON_OTP2_S93ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S93ROM */
#define IFX_DMU_HP_PROCON_OTP2_S93ROM_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S94ROM */
#define IFX_DMU_HP_PROCON_OTP2_S94ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S94ROM */
#define IFX_DMU_HP_PROCON_OTP2_S94ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S94ROM */
#define IFX_DMU_HP_PROCON_OTP2_S94ROM_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP2_Bits.S95ROM */
#define IFX_DMU_HP_PROCON_OTP2_S95ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP2_Bits.S95ROM */
#define IFX_DMU_HP_PROCON_OTP2_S95ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP2_Bits.S95ROM */
#define IFX_DMU_HP_PROCON_OTP2_S95ROM_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S96ROM */
#define IFX_DMU_HP_PROCON_OTP3_S96ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S96ROM */
#define IFX_DMU_HP_PROCON_OTP3_S96ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S96ROM */
#define IFX_DMU_HP_PROCON_OTP3_S96ROM_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S97ROM */
#define IFX_DMU_HP_PROCON_OTP3_S97ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S97ROM */
#define IFX_DMU_HP_PROCON_OTP3_S97ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S97ROM */
#define IFX_DMU_HP_PROCON_OTP3_S97ROM_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S98ROM */
#define IFX_DMU_HP_PROCON_OTP3_S98ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S98ROM */
#define IFX_DMU_HP_PROCON_OTP3_S98ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S98ROM */
#define IFX_DMU_HP_PROCON_OTP3_S98ROM_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S99ROM */
#define IFX_DMU_HP_PROCON_OTP3_S99ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S99ROM */
#define IFX_DMU_HP_PROCON_OTP3_S99ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S99ROM */
#define IFX_DMU_HP_PROCON_OTP3_S99ROM_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S100ROM */
#define IFX_DMU_HP_PROCON_OTP3_S100ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S100ROM */
#define IFX_DMU_HP_PROCON_OTP3_S100ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S100ROM */
#define IFX_DMU_HP_PROCON_OTP3_S100ROM_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S101ROM */
#define IFX_DMU_HP_PROCON_OTP3_S101ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S101ROM */
#define IFX_DMU_HP_PROCON_OTP3_S101ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S101ROM */
#define IFX_DMU_HP_PROCON_OTP3_S101ROM_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S102ROM */
#define IFX_DMU_HP_PROCON_OTP3_S102ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S102ROM */
#define IFX_DMU_HP_PROCON_OTP3_S102ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S102ROM */
#define IFX_DMU_HP_PROCON_OTP3_S102ROM_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S103ROM */
#define IFX_DMU_HP_PROCON_OTP3_S103ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S103ROM */
#define IFX_DMU_HP_PROCON_OTP3_S103ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S103ROM */
#define IFX_DMU_HP_PROCON_OTP3_S103ROM_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S104ROM */
#define IFX_DMU_HP_PROCON_OTP3_S104ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S104ROM */
#define IFX_DMU_HP_PROCON_OTP3_S104ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S104ROM */
#define IFX_DMU_HP_PROCON_OTP3_S104ROM_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S105ROM */
#define IFX_DMU_HP_PROCON_OTP3_S105ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S105ROM */
#define IFX_DMU_HP_PROCON_OTP3_S105ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S105ROM */
#define IFX_DMU_HP_PROCON_OTP3_S105ROM_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S106ROM */
#define IFX_DMU_HP_PROCON_OTP3_S106ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S106ROM */
#define IFX_DMU_HP_PROCON_OTP3_S106ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S106ROM */
#define IFX_DMU_HP_PROCON_OTP3_S106ROM_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S107ROM */
#define IFX_DMU_HP_PROCON_OTP3_S107ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S107ROM */
#define IFX_DMU_HP_PROCON_OTP3_S107ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S107ROM */
#define IFX_DMU_HP_PROCON_OTP3_S107ROM_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S108ROM */
#define IFX_DMU_HP_PROCON_OTP3_S108ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S108ROM */
#define IFX_DMU_HP_PROCON_OTP3_S108ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S108ROM */
#define IFX_DMU_HP_PROCON_OTP3_S108ROM_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S109ROM */
#define IFX_DMU_HP_PROCON_OTP3_S109ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S109ROM */
#define IFX_DMU_HP_PROCON_OTP3_S109ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S109ROM */
#define IFX_DMU_HP_PROCON_OTP3_S109ROM_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S110ROM */
#define IFX_DMU_HP_PROCON_OTP3_S110ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S110ROM */
#define IFX_DMU_HP_PROCON_OTP3_S110ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S110ROM */
#define IFX_DMU_HP_PROCON_OTP3_S110ROM_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S111ROM */
#define IFX_DMU_HP_PROCON_OTP3_S111ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S111ROM */
#define IFX_DMU_HP_PROCON_OTP3_S111ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S111ROM */
#define IFX_DMU_HP_PROCON_OTP3_S111ROM_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S112ROM */
#define IFX_DMU_HP_PROCON_OTP3_S112ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S112ROM */
#define IFX_DMU_HP_PROCON_OTP3_S112ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S112ROM */
#define IFX_DMU_HP_PROCON_OTP3_S112ROM_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S113ROM */
#define IFX_DMU_HP_PROCON_OTP3_S113ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S113ROM */
#define IFX_DMU_HP_PROCON_OTP3_S113ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S113ROM */
#define IFX_DMU_HP_PROCON_OTP3_S113ROM_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S114ROM */
#define IFX_DMU_HP_PROCON_OTP3_S114ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S114ROM */
#define IFX_DMU_HP_PROCON_OTP3_S114ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S114ROM */
#define IFX_DMU_HP_PROCON_OTP3_S114ROM_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S115ROM */
#define IFX_DMU_HP_PROCON_OTP3_S115ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S115ROM */
#define IFX_DMU_HP_PROCON_OTP3_S115ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S115ROM */
#define IFX_DMU_HP_PROCON_OTP3_S115ROM_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S116ROM */
#define IFX_DMU_HP_PROCON_OTP3_S116ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S116ROM */
#define IFX_DMU_HP_PROCON_OTP3_S116ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S116ROM */
#define IFX_DMU_HP_PROCON_OTP3_S116ROM_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S117ROM */
#define IFX_DMU_HP_PROCON_OTP3_S117ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S117ROM */
#define IFX_DMU_HP_PROCON_OTP3_S117ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S117ROM */
#define IFX_DMU_HP_PROCON_OTP3_S117ROM_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S118ROM */
#define IFX_DMU_HP_PROCON_OTP3_S118ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S118ROM */
#define IFX_DMU_HP_PROCON_OTP3_S118ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S118ROM */
#define IFX_DMU_HP_PROCON_OTP3_S118ROM_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S119ROM */
#define IFX_DMU_HP_PROCON_OTP3_S119ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S119ROM */
#define IFX_DMU_HP_PROCON_OTP3_S119ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S119ROM */
#define IFX_DMU_HP_PROCON_OTP3_S119ROM_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S120ROM */
#define IFX_DMU_HP_PROCON_OTP3_S120ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S120ROM */
#define IFX_DMU_HP_PROCON_OTP3_S120ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S120ROM */
#define IFX_DMU_HP_PROCON_OTP3_S120ROM_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S121ROM */
#define IFX_DMU_HP_PROCON_OTP3_S121ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S121ROM */
#define IFX_DMU_HP_PROCON_OTP3_S121ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S121ROM */
#define IFX_DMU_HP_PROCON_OTP3_S121ROM_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S122ROM */
#define IFX_DMU_HP_PROCON_OTP3_S122ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S122ROM */
#define IFX_DMU_HP_PROCON_OTP3_S122ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S122ROM */
#define IFX_DMU_HP_PROCON_OTP3_S122ROM_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S123ROM */
#define IFX_DMU_HP_PROCON_OTP3_S123ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S123ROM */
#define IFX_DMU_HP_PROCON_OTP3_S123ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S123ROM */
#define IFX_DMU_HP_PROCON_OTP3_S123ROM_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S124ROM */
#define IFX_DMU_HP_PROCON_OTP3_S124ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S124ROM */
#define IFX_DMU_HP_PROCON_OTP3_S124ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S124ROM */
#define IFX_DMU_HP_PROCON_OTP3_S124ROM_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S125ROM */
#define IFX_DMU_HP_PROCON_OTP3_S125ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S125ROM */
#define IFX_DMU_HP_PROCON_OTP3_S125ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S125ROM */
#define IFX_DMU_HP_PROCON_OTP3_S125ROM_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S126ROM */
#define IFX_DMU_HP_PROCON_OTP3_S126ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S126ROM */
#define IFX_DMU_HP_PROCON_OTP3_S126ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S126ROM */
#define IFX_DMU_HP_PROCON_OTP3_S126ROM_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP3_Bits.S127ROM */
#define IFX_DMU_HP_PROCON_OTP3_S127ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP3_Bits.S127ROM */
#define IFX_DMU_HP_PROCON_OTP3_S127ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP3_Bits.S127ROM */
#define IFX_DMU_HP_PROCON_OTP3_S127ROM_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S128ROM */
#define IFX_DMU_HP_PROCON_OTP4_S128ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S128ROM */
#define IFX_DMU_HP_PROCON_OTP4_S128ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S128ROM */
#define IFX_DMU_HP_PROCON_OTP4_S128ROM_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S129ROM */
#define IFX_DMU_HP_PROCON_OTP4_S129ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S129ROM */
#define IFX_DMU_HP_PROCON_OTP4_S129ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S129ROM */
#define IFX_DMU_HP_PROCON_OTP4_S129ROM_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S130ROM */
#define IFX_DMU_HP_PROCON_OTP4_S130ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S130ROM */
#define IFX_DMU_HP_PROCON_OTP4_S130ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S130ROM */
#define IFX_DMU_HP_PROCON_OTP4_S130ROM_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S131ROM */
#define IFX_DMU_HP_PROCON_OTP4_S131ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S131ROM */
#define IFX_DMU_HP_PROCON_OTP4_S131ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S131ROM */
#define IFX_DMU_HP_PROCON_OTP4_S131ROM_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S132ROM */
#define IFX_DMU_HP_PROCON_OTP4_S132ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S132ROM */
#define IFX_DMU_HP_PROCON_OTP4_S132ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S132ROM */
#define IFX_DMU_HP_PROCON_OTP4_S132ROM_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S133ROM */
#define IFX_DMU_HP_PROCON_OTP4_S133ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S133ROM */
#define IFX_DMU_HP_PROCON_OTP4_S133ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S133ROM */
#define IFX_DMU_HP_PROCON_OTP4_S133ROM_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S134ROM */
#define IFX_DMU_HP_PROCON_OTP4_S134ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S134ROM */
#define IFX_DMU_HP_PROCON_OTP4_S134ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S134ROM */
#define IFX_DMU_HP_PROCON_OTP4_S134ROM_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S135ROM */
#define IFX_DMU_HP_PROCON_OTP4_S135ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S135ROM */
#define IFX_DMU_HP_PROCON_OTP4_S135ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S135ROM */
#define IFX_DMU_HP_PROCON_OTP4_S135ROM_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S136ROM */
#define IFX_DMU_HP_PROCON_OTP4_S136ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S136ROM */
#define IFX_DMU_HP_PROCON_OTP4_S136ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S136ROM */
#define IFX_DMU_HP_PROCON_OTP4_S136ROM_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S137ROM */
#define IFX_DMU_HP_PROCON_OTP4_S137ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S137ROM */
#define IFX_DMU_HP_PROCON_OTP4_S137ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S137ROM */
#define IFX_DMU_HP_PROCON_OTP4_S137ROM_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S138ROM */
#define IFX_DMU_HP_PROCON_OTP4_S138ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S138ROM */
#define IFX_DMU_HP_PROCON_OTP4_S138ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S138ROM */
#define IFX_DMU_HP_PROCON_OTP4_S138ROM_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S139ROM */
#define IFX_DMU_HP_PROCON_OTP4_S139ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S139ROM */
#define IFX_DMU_HP_PROCON_OTP4_S139ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S139ROM */
#define IFX_DMU_HP_PROCON_OTP4_S139ROM_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S140ROM */
#define IFX_DMU_HP_PROCON_OTP4_S140ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S140ROM */
#define IFX_DMU_HP_PROCON_OTP4_S140ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S140ROM */
#define IFX_DMU_HP_PROCON_OTP4_S140ROM_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S141ROM */
#define IFX_DMU_HP_PROCON_OTP4_S141ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S141ROM */
#define IFX_DMU_HP_PROCON_OTP4_S141ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S141ROM */
#define IFX_DMU_HP_PROCON_OTP4_S141ROM_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S142ROM */
#define IFX_DMU_HP_PROCON_OTP4_S142ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S142ROM */
#define IFX_DMU_HP_PROCON_OTP4_S142ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S142ROM */
#define IFX_DMU_HP_PROCON_OTP4_S142ROM_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S143ROM */
#define IFX_DMU_HP_PROCON_OTP4_S143ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S143ROM */
#define IFX_DMU_HP_PROCON_OTP4_S143ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S143ROM */
#define IFX_DMU_HP_PROCON_OTP4_S143ROM_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S144ROM */
#define IFX_DMU_HP_PROCON_OTP4_S144ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S144ROM */
#define IFX_DMU_HP_PROCON_OTP4_S144ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S144ROM */
#define IFX_DMU_HP_PROCON_OTP4_S144ROM_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S145ROM */
#define IFX_DMU_HP_PROCON_OTP4_S145ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S145ROM */
#define IFX_DMU_HP_PROCON_OTP4_S145ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S145ROM */
#define IFX_DMU_HP_PROCON_OTP4_S145ROM_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S146ROM */
#define IFX_DMU_HP_PROCON_OTP4_S146ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S146ROM */
#define IFX_DMU_HP_PROCON_OTP4_S146ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S146ROM */
#define IFX_DMU_HP_PROCON_OTP4_S146ROM_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S147ROM */
#define IFX_DMU_HP_PROCON_OTP4_S147ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S147ROM */
#define IFX_DMU_HP_PROCON_OTP4_S147ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S147ROM */
#define IFX_DMU_HP_PROCON_OTP4_S147ROM_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S148ROM */
#define IFX_DMU_HP_PROCON_OTP4_S148ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S148ROM */
#define IFX_DMU_HP_PROCON_OTP4_S148ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S148ROM */
#define IFX_DMU_HP_PROCON_OTP4_S148ROM_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S149ROM */
#define IFX_DMU_HP_PROCON_OTP4_S149ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S149ROM */
#define IFX_DMU_HP_PROCON_OTP4_S149ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S149ROM */
#define IFX_DMU_HP_PROCON_OTP4_S149ROM_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S150ROM */
#define IFX_DMU_HP_PROCON_OTP4_S150ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S150ROM */
#define IFX_DMU_HP_PROCON_OTP4_S150ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S150ROM */
#define IFX_DMU_HP_PROCON_OTP4_S150ROM_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S151ROM */
#define IFX_DMU_HP_PROCON_OTP4_S151ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S151ROM */
#define IFX_DMU_HP_PROCON_OTP4_S151ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S151ROM */
#define IFX_DMU_HP_PROCON_OTP4_S151ROM_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S152ROM */
#define IFX_DMU_HP_PROCON_OTP4_S152ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S152ROM */
#define IFX_DMU_HP_PROCON_OTP4_S152ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S152ROM */
#define IFX_DMU_HP_PROCON_OTP4_S152ROM_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S153ROM */
#define IFX_DMU_HP_PROCON_OTP4_S153ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S153ROM */
#define IFX_DMU_HP_PROCON_OTP4_S153ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S153ROM */
#define IFX_DMU_HP_PROCON_OTP4_S153ROM_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S154ROM */
#define IFX_DMU_HP_PROCON_OTP4_S154ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S154ROM */
#define IFX_DMU_HP_PROCON_OTP4_S154ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S154ROM */
#define IFX_DMU_HP_PROCON_OTP4_S154ROM_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S155ROM */
#define IFX_DMU_HP_PROCON_OTP4_S155ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S155ROM */
#define IFX_DMU_HP_PROCON_OTP4_S155ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S155ROM */
#define IFX_DMU_HP_PROCON_OTP4_S155ROM_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S156ROM */
#define IFX_DMU_HP_PROCON_OTP4_S156ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S156ROM */
#define IFX_DMU_HP_PROCON_OTP4_S156ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S156ROM */
#define IFX_DMU_HP_PROCON_OTP4_S156ROM_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S157ROM */
#define IFX_DMU_HP_PROCON_OTP4_S157ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S157ROM */
#define IFX_DMU_HP_PROCON_OTP4_S157ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S157ROM */
#define IFX_DMU_HP_PROCON_OTP4_S157ROM_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S158ROM */
#define IFX_DMU_HP_PROCON_OTP4_S158ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S158ROM */
#define IFX_DMU_HP_PROCON_OTP4_S158ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S158ROM */
#define IFX_DMU_HP_PROCON_OTP4_S158ROM_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP4_Bits.S159ROM */
#define IFX_DMU_HP_PROCON_OTP4_S159ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP4_Bits.S159ROM */
#define IFX_DMU_HP_PROCON_OTP4_S159ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP4_Bits.S159ROM */
#define IFX_DMU_HP_PROCON_OTP4_S159ROM_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S160ROM */
#define IFX_DMU_HP_PROCON_OTP5_S160ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S160ROM */
#define IFX_DMU_HP_PROCON_OTP5_S160ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S160ROM */
#define IFX_DMU_HP_PROCON_OTP5_S160ROM_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S161ROM */
#define IFX_DMU_HP_PROCON_OTP5_S161ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S161ROM */
#define IFX_DMU_HP_PROCON_OTP5_S161ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S161ROM */
#define IFX_DMU_HP_PROCON_OTP5_S161ROM_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S162ROM */
#define IFX_DMU_HP_PROCON_OTP5_S162ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S162ROM */
#define IFX_DMU_HP_PROCON_OTP5_S162ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S162ROM */
#define IFX_DMU_HP_PROCON_OTP5_S162ROM_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S163ROM */
#define IFX_DMU_HP_PROCON_OTP5_S163ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S163ROM */
#define IFX_DMU_HP_PROCON_OTP5_S163ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S163ROM */
#define IFX_DMU_HP_PROCON_OTP5_S163ROM_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S164ROM */
#define IFX_DMU_HP_PROCON_OTP5_S164ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S164ROM */
#define IFX_DMU_HP_PROCON_OTP5_S164ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S164ROM */
#define IFX_DMU_HP_PROCON_OTP5_S164ROM_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S165ROM */
#define IFX_DMU_HP_PROCON_OTP5_S165ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S165ROM */
#define IFX_DMU_HP_PROCON_OTP5_S165ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S165ROM */
#define IFX_DMU_HP_PROCON_OTP5_S165ROM_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S166ROM */
#define IFX_DMU_HP_PROCON_OTP5_S166ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S166ROM */
#define IFX_DMU_HP_PROCON_OTP5_S166ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S166ROM */
#define IFX_DMU_HP_PROCON_OTP5_S166ROM_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S167ROM */
#define IFX_DMU_HP_PROCON_OTP5_S167ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S167ROM */
#define IFX_DMU_HP_PROCON_OTP5_S167ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S167ROM */
#define IFX_DMU_HP_PROCON_OTP5_S167ROM_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S168ROM */
#define IFX_DMU_HP_PROCON_OTP5_S168ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S168ROM */
#define IFX_DMU_HP_PROCON_OTP5_S168ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S168ROM */
#define IFX_DMU_HP_PROCON_OTP5_S168ROM_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S169ROM */
#define IFX_DMU_HP_PROCON_OTP5_S169ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S169ROM */
#define IFX_DMU_HP_PROCON_OTP5_S169ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S169ROM */
#define IFX_DMU_HP_PROCON_OTP5_S169ROM_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S170ROM */
#define IFX_DMU_HP_PROCON_OTP5_S170ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S170ROM */
#define IFX_DMU_HP_PROCON_OTP5_S170ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S170ROM */
#define IFX_DMU_HP_PROCON_OTP5_S170ROM_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S171ROM */
#define IFX_DMU_HP_PROCON_OTP5_S171ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S171ROM */
#define IFX_DMU_HP_PROCON_OTP5_S171ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S171ROM */
#define IFX_DMU_HP_PROCON_OTP5_S171ROM_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S172ROM */
#define IFX_DMU_HP_PROCON_OTP5_S172ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S172ROM */
#define IFX_DMU_HP_PROCON_OTP5_S172ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S172ROM */
#define IFX_DMU_HP_PROCON_OTP5_S172ROM_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S173ROM */
#define IFX_DMU_HP_PROCON_OTP5_S173ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S173ROM */
#define IFX_DMU_HP_PROCON_OTP5_S173ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S173ROM */
#define IFX_DMU_HP_PROCON_OTP5_S173ROM_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S174ROM */
#define IFX_DMU_HP_PROCON_OTP5_S174ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S174ROM */
#define IFX_DMU_HP_PROCON_OTP5_S174ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S174ROM */
#define IFX_DMU_HP_PROCON_OTP5_S174ROM_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S175ROM */
#define IFX_DMU_HP_PROCON_OTP5_S175ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S175ROM */
#define IFX_DMU_HP_PROCON_OTP5_S175ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S175ROM */
#define IFX_DMU_HP_PROCON_OTP5_S175ROM_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S176ROM */
#define IFX_DMU_HP_PROCON_OTP5_S176ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S176ROM */
#define IFX_DMU_HP_PROCON_OTP5_S176ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S176ROM */
#define IFX_DMU_HP_PROCON_OTP5_S176ROM_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S177ROM */
#define IFX_DMU_HP_PROCON_OTP5_S177ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S177ROM */
#define IFX_DMU_HP_PROCON_OTP5_S177ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S177ROM */
#define IFX_DMU_HP_PROCON_OTP5_S177ROM_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S178ROM */
#define IFX_DMU_HP_PROCON_OTP5_S178ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S178ROM */
#define IFX_DMU_HP_PROCON_OTP5_S178ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S178ROM */
#define IFX_DMU_HP_PROCON_OTP5_S178ROM_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S179ROM */
#define IFX_DMU_HP_PROCON_OTP5_S179ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S179ROM */
#define IFX_DMU_HP_PROCON_OTP5_S179ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S179ROM */
#define IFX_DMU_HP_PROCON_OTP5_S179ROM_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S180ROM */
#define IFX_DMU_HP_PROCON_OTP5_S180ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S180ROM */
#define IFX_DMU_HP_PROCON_OTP5_S180ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S180ROM */
#define IFX_DMU_HP_PROCON_OTP5_S180ROM_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S181ROM */
#define IFX_DMU_HP_PROCON_OTP5_S181ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S181ROM */
#define IFX_DMU_HP_PROCON_OTP5_S181ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S181ROM */
#define IFX_DMU_HP_PROCON_OTP5_S181ROM_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S182ROM */
#define IFX_DMU_HP_PROCON_OTP5_S182ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S182ROM */
#define IFX_DMU_HP_PROCON_OTP5_S182ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S182ROM */
#define IFX_DMU_HP_PROCON_OTP5_S182ROM_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S183ROM */
#define IFX_DMU_HP_PROCON_OTP5_S183ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S183ROM */
#define IFX_DMU_HP_PROCON_OTP5_S183ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S183ROM */
#define IFX_DMU_HP_PROCON_OTP5_S183ROM_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S184ROM */
#define IFX_DMU_HP_PROCON_OTP5_S184ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S184ROM */
#define IFX_DMU_HP_PROCON_OTP5_S184ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S184ROM */
#define IFX_DMU_HP_PROCON_OTP5_S184ROM_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S185ROM */
#define IFX_DMU_HP_PROCON_OTP5_S185ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S185ROM */
#define IFX_DMU_HP_PROCON_OTP5_S185ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S185ROM */
#define IFX_DMU_HP_PROCON_OTP5_S185ROM_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S186ROM */
#define IFX_DMU_HP_PROCON_OTP5_S186ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S186ROM */
#define IFX_DMU_HP_PROCON_OTP5_S186ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S186ROM */
#define IFX_DMU_HP_PROCON_OTP5_S186ROM_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S187ROM */
#define IFX_DMU_HP_PROCON_OTP5_S187ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S187ROM */
#define IFX_DMU_HP_PROCON_OTP5_S187ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S187ROM */
#define IFX_DMU_HP_PROCON_OTP5_S187ROM_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S188ROM */
#define IFX_DMU_HP_PROCON_OTP5_S188ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S188ROM */
#define IFX_DMU_HP_PROCON_OTP5_S188ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S188ROM */
#define IFX_DMU_HP_PROCON_OTP5_S188ROM_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S189ROM */
#define IFX_DMU_HP_PROCON_OTP5_S189ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S189ROM */
#define IFX_DMU_HP_PROCON_OTP5_S189ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S189ROM */
#define IFX_DMU_HP_PROCON_OTP5_S189ROM_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S190ROM */
#define IFX_DMU_HP_PROCON_OTP5_S190ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S190ROM */
#define IFX_DMU_HP_PROCON_OTP5_S190ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S190ROM */
#define IFX_DMU_HP_PROCON_OTP5_S190ROM_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_OTP5_Bits.S191ROM */
#define IFX_DMU_HP_PROCON_OTP5_S191ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_OTP5_Bits.S191ROM */
#define IFX_DMU_HP_PROCON_OTP5_S191ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_OTP5_Bits.S191ROM */
#define IFX_DMU_HP_PROCON_OTP5_S191ROM_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S0WOP */
#define IFX_DMU_HP_PROCON_WOP0_S0WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S0WOP */
#define IFX_DMU_HP_PROCON_WOP0_S0WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S0WOP */
#define IFX_DMU_HP_PROCON_WOP0_S0WOP_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S1WOP */
#define IFX_DMU_HP_PROCON_WOP0_S1WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S1WOP */
#define IFX_DMU_HP_PROCON_WOP0_S1WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S1WOP */
#define IFX_DMU_HP_PROCON_WOP0_S1WOP_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S2WOP */
#define IFX_DMU_HP_PROCON_WOP0_S2WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S2WOP */
#define IFX_DMU_HP_PROCON_WOP0_S2WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S2WOP */
#define IFX_DMU_HP_PROCON_WOP0_S2WOP_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S3WOP */
#define IFX_DMU_HP_PROCON_WOP0_S3WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S3WOP */
#define IFX_DMU_HP_PROCON_WOP0_S3WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S3WOP */
#define IFX_DMU_HP_PROCON_WOP0_S3WOP_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S4WOP */
#define IFX_DMU_HP_PROCON_WOP0_S4WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S4WOP */
#define IFX_DMU_HP_PROCON_WOP0_S4WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S4WOP */
#define IFX_DMU_HP_PROCON_WOP0_S4WOP_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S5WOP */
#define IFX_DMU_HP_PROCON_WOP0_S5WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S5WOP */
#define IFX_DMU_HP_PROCON_WOP0_S5WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S5WOP */
#define IFX_DMU_HP_PROCON_WOP0_S5WOP_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S6WOP */
#define IFX_DMU_HP_PROCON_WOP0_S6WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S6WOP */
#define IFX_DMU_HP_PROCON_WOP0_S6WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S6WOP */
#define IFX_DMU_HP_PROCON_WOP0_S6WOP_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S7WOP */
#define IFX_DMU_HP_PROCON_WOP0_S7WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S7WOP */
#define IFX_DMU_HP_PROCON_WOP0_S7WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S7WOP */
#define IFX_DMU_HP_PROCON_WOP0_S7WOP_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S8WOP */
#define IFX_DMU_HP_PROCON_WOP0_S8WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S8WOP */
#define IFX_DMU_HP_PROCON_WOP0_S8WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S8WOP */
#define IFX_DMU_HP_PROCON_WOP0_S8WOP_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S9WOP */
#define IFX_DMU_HP_PROCON_WOP0_S9WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S9WOP */
#define IFX_DMU_HP_PROCON_WOP0_S9WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S9WOP */
#define IFX_DMU_HP_PROCON_WOP0_S9WOP_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S10WOP */
#define IFX_DMU_HP_PROCON_WOP0_S10WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S10WOP */
#define IFX_DMU_HP_PROCON_WOP0_S10WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S10WOP */
#define IFX_DMU_HP_PROCON_WOP0_S10WOP_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S11WOP */
#define IFX_DMU_HP_PROCON_WOP0_S11WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S11WOP */
#define IFX_DMU_HP_PROCON_WOP0_S11WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S11WOP */
#define IFX_DMU_HP_PROCON_WOP0_S11WOP_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S12WOP */
#define IFX_DMU_HP_PROCON_WOP0_S12WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S12WOP */
#define IFX_DMU_HP_PROCON_WOP0_S12WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S12WOP */
#define IFX_DMU_HP_PROCON_WOP0_S12WOP_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S13WOP */
#define IFX_DMU_HP_PROCON_WOP0_S13WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S13WOP */
#define IFX_DMU_HP_PROCON_WOP0_S13WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S13WOP */
#define IFX_DMU_HP_PROCON_WOP0_S13WOP_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S14WOP */
#define IFX_DMU_HP_PROCON_WOP0_S14WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S14WOP */
#define IFX_DMU_HP_PROCON_WOP0_S14WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S14WOP */
#define IFX_DMU_HP_PROCON_WOP0_S14WOP_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S15WOP */
#define IFX_DMU_HP_PROCON_WOP0_S15WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S15WOP */
#define IFX_DMU_HP_PROCON_WOP0_S15WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S15WOP */
#define IFX_DMU_HP_PROCON_WOP0_S15WOP_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S16WOP */
#define IFX_DMU_HP_PROCON_WOP0_S16WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S16WOP */
#define IFX_DMU_HP_PROCON_WOP0_S16WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S16WOP */
#define IFX_DMU_HP_PROCON_WOP0_S16WOP_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S17WOP */
#define IFX_DMU_HP_PROCON_WOP0_S17WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S17WOP */
#define IFX_DMU_HP_PROCON_WOP0_S17WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S17WOP */
#define IFX_DMU_HP_PROCON_WOP0_S17WOP_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S18WOP */
#define IFX_DMU_HP_PROCON_WOP0_S18WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S18WOP */
#define IFX_DMU_HP_PROCON_WOP0_S18WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S18WOP */
#define IFX_DMU_HP_PROCON_WOP0_S18WOP_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S19WOP */
#define IFX_DMU_HP_PROCON_WOP0_S19WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S19WOP */
#define IFX_DMU_HP_PROCON_WOP0_S19WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S19WOP */
#define IFX_DMU_HP_PROCON_WOP0_S19WOP_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S20WOP */
#define IFX_DMU_HP_PROCON_WOP0_S20WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S20WOP */
#define IFX_DMU_HP_PROCON_WOP0_S20WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S20WOP */
#define IFX_DMU_HP_PROCON_WOP0_S20WOP_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S21WOP */
#define IFX_DMU_HP_PROCON_WOP0_S21WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S21WOP */
#define IFX_DMU_HP_PROCON_WOP0_S21WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S21WOP */
#define IFX_DMU_HP_PROCON_WOP0_S21WOP_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S22WOP */
#define IFX_DMU_HP_PROCON_WOP0_S22WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S22WOP */
#define IFX_DMU_HP_PROCON_WOP0_S22WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S22WOP */
#define IFX_DMU_HP_PROCON_WOP0_S22WOP_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S23WOP */
#define IFX_DMU_HP_PROCON_WOP0_S23WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S23WOP */
#define IFX_DMU_HP_PROCON_WOP0_S23WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S23WOP */
#define IFX_DMU_HP_PROCON_WOP0_S23WOP_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S24WOP */
#define IFX_DMU_HP_PROCON_WOP0_S24WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S24WOP */
#define IFX_DMU_HP_PROCON_WOP0_S24WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S24WOP */
#define IFX_DMU_HP_PROCON_WOP0_S24WOP_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S25WOP */
#define IFX_DMU_HP_PROCON_WOP0_S25WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S25WOP */
#define IFX_DMU_HP_PROCON_WOP0_S25WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S25WOP */
#define IFX_DMU_HP_PROCON_WOP0_S25WOP_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S26WOP */
#define IFX_DMU_HP_PROCON_WOP0_S26WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S26WOP */
#define IFX_DMU_HP_PROCON_WOP0_S26WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S26WOP */
#define IFX_DMU_HP_PROCON_WOP0_S26WOP_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S27WOP */
#define IFX_DMU_HP_PROCON_WOP0_S27WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S27WOP */
#define IFX_DMU_HP_PROCON_WOP0_S27WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S27WOP */
#define IFX_DMU_HP_PROCON_WOP0_S27WOP_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S28WOP */
#define IFX_DMU_HP_PROCON_WOP0_S28WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S28WOP */
#define IFX_DMU_HP_PROCON_WOP0_S28WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S28WOP */
#define IFX_DMU_HP_PROCON_WOP0_S28WOP_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S29WOP */
#define IFX_DMU_HP_PROCON_WOP0_S29WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S29WOP */
#define IFX_DMU_HP_PROCON_WOP0_S29WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S29WOP */
#define IFX_DMU_HP_PROCON_WOP0_S29WOP_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S30WOP */
#define IFX_DMU_HP_PROCON_WOP0_S30WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S30WOP */
#define IFX_DMU_HP_PROCON_WOP0_S30WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S30WOP */
#define IFX_DMU_HP_PROCON_WOP0_S30WOP_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP0_Bits.S31WOP */
#define IFX_DMU_HP_PROCON_WOP0_S31WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP0_Bits.S31WOP */
#define IFX_DMU_HP_PROCON_WOP0_S31WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP0_Bits.S31WOP */
#define IFX_DMU_HP_PROCON_WOP0_S31WOP_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S32WOP */
#define IFX_DMU_HP_PROCON_WOP1_S32WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S32WOP */
#define IFX_DMU_HP_PROCON_WOP1_S32WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S32WOP */
#define IFX_DMU_HP_PROCON_WOP1_S32WOP_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S33WOP */
#define IFX_DMU_HP_PROCON_WOP1_S33WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S33WOP */
#define IFX_DMU_HP_PROCON_WOP1_S33WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S33WOP */
#define IFX_DMU_HP_PROCON_WOP1_S33WOP_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S34WOP */
#define IFX_DMU_HP_PROCON_WOP1_S34WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S34WOP */
#define IFX_DMU_HP_PROCON_WOP1_S34WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S34WOP */
#define IFX_DMU_HP_PROCON_WOP1_S34WOP_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S35WOP */
#define IFX_DMU_HP_PROCON_WOP1_S35WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S35WOP */
#define IFX_DMU_HP_PROCON_WOP1_S35WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S35WOP */
#define IFX_DMU_HP_PROCON_WOP1_S35WOP_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S36WOP */
#define IFX_DMU_HP_PROCON_WOP1_S36WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S36WOP */
#define IFX_DMU_HP_PROCON_WOP1_S36WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S36WOP */
#define IFX_DMU_HP_PROCON_WOP1_S36WOP_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S37WOP */
#define IFX_DMU_HP_PROCON_WOP1_S37WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S37WOP */
#define IFX_DMU_HP_PROCON_WOP1_S37WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S37WOP */
#define IFX_DMU_HP_PROCON_WOP1_S37WOP_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S38WOP */
#define IFX_DMU_HP_PROCON_WOP1_S38WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S38WOP */
#define IFX_DMU_HP_PROCON_WOP1_S38WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S38WOP */
#define IFX_DMU_HP_PROCON_WOP1_S38WOP_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S39WOP */
#define IFX_DMU_HP_PROCON_WOP1_S39WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S39WOP */
#define IFX_DMU_HP_PROCON_WOP1_S39WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S39WOP */
#define IFX_DMU_HP_PROCON_WOP1_S39WOP_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S40WOP */
#define IFX_DMU_HP_PROCON_WOP1_S40WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S40WOP */
#define IFX_DMU_HP_PROCON_WOP1_S40WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S40WOP */
#define IFX_DMU_HP_PROCON_WOP1_S40WOP_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S41WOP */
#define IFX_DMU_HP_PROCON_WOP1_S41WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S41WOP */
#define IFX_DMU_HP_PROCON_WOP1_S41WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S41WOP */
#define IFX_DMU_HP_PROCON_WOP1_S41WOP_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S42WOP */
#define IFX_DMU_HP_PROCON_WOP1_S42WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S42WOP */
#define IFX_DMU_HP_PROCON_WOP1_S42WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S42WOP */
#define IFX_DMU_HP_PROCON_WOP1_S42WOP_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S43WOP */
#define IFX_DMU_HP_PROCON_WOP1_S43WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S43WOP */
#define IFX_DMU_HP_PROCON_WOP1_S43WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S43WOP */
#define IFX_DMU_HP_PROCON_WOP1_S43WOP_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S44WOP */
#define IFX_DMU_HP_PROCON_WOP1_S44WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S44WOP */
#define IFX_DMU_HP_PROCON_WOP1_S44WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S44WOP */
#define IFX_DMU_HP_PROCON_WOP1_S44WOP_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S45WOP */
#define IFX_DMU_HP_PROCON_WOP1_S45WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S45WOP */
#define IFX_DMU_HP_PROCON_WOP1_S45WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S45WOP */
#define IFX_DMU_HP_PROCON_WOP1_S45WOP_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S46WOP */
#define IFX_DMU_HP_PROCON_WOP1_S46WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S46WOP */
#define IFX_DMU_HP_PROCON_WOP1_S46WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S46WOP */
#define IFX_DMU_HP_PROCON_WOP1_S46WOP_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S47WOP */
#define IFX_DMU_HP_PROCON_WOP1_S47WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S47WOP */
#define IFX_DMU_HP_PROCON_WOP1_S47WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S47WOP */
#define IFX_DMU_HP_PROCON_WOP1_S47WOP_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S48WOP */
#define IFX_DMU_HP_PROCON_WOP1_S48WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S48WOP */
#define IFX_DMU_HP_PROCON_WOP1_S48WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S48WOP */
#define IFX_DMU_HP_PROCON_WOP1_S48WOP_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S49WOP */
#define IFX_DMU_HP_PROCON_WOP1_S49WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S49WOP */
#define IFX_DMU_HP_PROCON_WOP1_S49WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S49WOP */
#define IFX_DMU_HP_PROCON_WOP1_S49WOP_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S50WOP */
#define IFX_DMU_HP_PROCON_WOP1_S50WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S50WOP */
#define IFX_DMU_HP_PROCON_WOP1_S50WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S50WOP */
#define IFX_DMU_HP_PROCON_WOP1_S50WOP_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S51WOP */
#define IFX_DMU_HP_PROCON_WOP1_S51WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S51WOP */
#define IFX_DMU_HP_PROCON_WOP1_S51WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S51WOP */
#define IFX_DMU_HP_PROCON_WOP1_S51WOP_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S52WOP */
#define IFX_DMU_HP_PROCON_WOP1_S52WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S52WOP */
#define IFX_DMU_HP_PROCON_WOP1_S52WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S52WOP */
#define IFX_DMU_HP_PROCON_WOP1_S52WOP_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S53WOP */
#define IFX_DMU_HP_PROCON_WOP1_S53WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S53WOP */
#define IFX_DMU_HP_PROCON_WOP1_S53WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S53WOP */
#define IFX_DMU_HP_PROCON_WOP1_S53WOP_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S54WOP */
#define IFX_DMU_HP_PROCON_WOP1_S54WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S54WOP */
#define IFX_DMU_HP_PROCON_WOP1_S54WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S54WOP */
#define IFX_DMU_HP_PROCON_WOP1_S54WOP_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S55WOP */
#define IFX_DMU_HP_PROCON_WOP1_S55WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S55WOP */
#define IFX_DMU_HP_PROCON_WOP1_S55WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S55WOP */
#define IFX_DMU_HP_PROCON_WOP1_S55WOP_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S56WOP */
#define IFX_DMU_HP_PROCON_WOP1_S56WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S56WOP */
#define IFX_DMU_HP_PROCON_WOP1_S56WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S56WOP */
#define IFX_DMU_HP_PROCON_WOP1_S56WOP_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S57WOP */
#define IFX_DMU_HP_PROCON_WOP1_S57WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S57WOP */
#define IFX_DMU_HP_PROCON_WOP1_S57WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S57WOP */
#define IFX_DMU_HP_PROCON_WOP1_S57WOP_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S58WOP */
#define IFX_DMU_HP_PROCON_WOP1_S58WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S58WOP */
#define IFX_DMU_HP_PROCON_WOP1_S58WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S58WOP */
#define IFX_DMU_HP_PROCON_WOP1_S58WOP_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S59WOP */
#define IFX_DMU_HP_PROCON_WOP1_S59WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S59WOP */
#define IFX_DMU_HP_PROCON_WOP1_S59WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S59WOP */
#define IFX_DMU_HP_PROCON_WOP1_S59WOP_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S60WOP */
#define IFX_DMU_HP_PROCON_WOP1_S60WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S60WOP */
#define IFX_DMU_HP_PROCON_WOP1_S60WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S60WOP */
#define IFX_DMU_HP_PROCON_WOP1_S60WOP_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S61WOP */
#define IFX_DMU_HP_PROCON_WOP1_S61WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S61WOP */
#define IFX_DMU_HP_PROCON_WOP1_S61WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S61WOP */
#define IFX_DMU_HP_PROCON_WOP1_S61WOP_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S62WOP */
#define IFX_DMU_HP_PROCON_WOP1_S62WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S62WOP */
#define IFX_DMU_HP_PROCON_WOP1_S62WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S62WOP */
#define IFX_DMU_HP_PROCON_WOP1_S62WOP_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP1_Bits.S63WOP */
#define IFX_DMU_HP_PROCON_WOP1_S63WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP1_Bits.S63WOP */
#define IFX_DMU_HP_PROCON_WOP1_S63WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP1_Bits.S63WOP */
#define IFX_DMU_HP_PROCON_WOP1_S63WOP_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S64WOP */
#define IFX_DMU_HP_PROCON_WOP2_S64WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S64WOP */
#define IFX_DMU_HP_PROCON_WOP2_S64WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S64WOP */
#define IFX_DMU_HP_PROCON_WOP2_S64WOP_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S65WOP */
#define IFX_DMU_HP_PROCON_WOP2_S65WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S65WOP */
#define IFX_DMU_HP_PROCON_WOP2_S65WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S65WOP */
#define IFX_DMU_HP_PROCON_WOP2_S65WOP_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S66WOP */
#define IFX_DMU_HP_PROCON_WOP2_S66WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S66WOP */
#define IFX_DMU_HP_PROCON_WOP2_S66WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S66WOP */
#define IFX_DMU_HP_PROCON_WOP2_S66WOP_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S67WOP */
#define IFX_DMU_HP_PROCON_WOP2_S67WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S67WOP */
#define IFX_DMU_HP_PROCON_WOP2_S67WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S67WOP */
#define IFX_DMU_HP_PROCON_WOP2_S67WOP_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S68WOP */
#define IFX_DMU_HP_PROCON_WOP2_S68WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S68WOP */
#define IFX_DMU_HP_PROCON_WOP2_S68WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S68WOP */
#define IFX_DMU_HP_PROCON_WOP2_S68WOP_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S69WOP */
#define IFX_DMU_HP_PROCON_WOP2_S69WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S69WOP */
#define IFX_DMU_HP_PROCON_WOP2_S69WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S69WOP */
#define IFX_DMU_HP_PROCON_WOP2_S69WOP_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S70WOP */
#define IFX_DMU_HP_PROCON_WOP2_S70WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S70WOP */
#define IFX_DMU_HP_PROCON_WOP2_S70WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S70WOP */
#define IFX_DMU_HP_PROCON_WOP2_S70WOP_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S71WOP */
#define IFX_DMU_HP_PROCON_WOP2_S71WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S71WOP */
#define IFX_DMU_HP_PROCON_WOP2_S71WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S71WOP */
#define IFX_DMU_HP_PROCON_WOP2_S71WOP_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S72WOP */
#define IFX_DMU_HP_PROCON_WOP2_S72WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S72WOP */
#define IFX_DMU_HP_PROCON_WOP2_S72WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S72WOP */
#define IFX_DMU_HP_PROCON_WOP2_S72WOP_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S73WOP */
#define IFX_DMU_HP_PROCON_WOP2_S73WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S73WOP */
#define IFX_DMU_HP_PROCON_WOP2_S73WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S73WOP */
#define IFX_DMU_HP_PROCON_WOP2_S73WOP_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S74WOP */
#define IFX_DMU_HP_PROCON_WOP2_S74WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S74WOP */
#define IFX_DMU_HP_PROCON_WOP2_S74WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S74WOP */
#define IFX_DMU_HP_PROCON_WOP2_S74WOP_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S75WOP */
#define IFX_DMU_HP_PROCON_WOP2_S75WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S75WOP */
#define IFX_DMU_HP_PROCON_WOP2_S75WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S75WOP */
#define IFX_DMU_HP_PROCON_WOP2_S75WOP_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S76WOP */
#define IFX_DMU_HP_PROCON_WOP2_S76WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S76WOP */
#define IFX_DMU_HP_PROCON_WOP2_S76WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S76WOP */
#define IFX_DMU_HP_PROCON_WOP2_S76WOP_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S77WOP */
#define IFX_DMU_HP_PROCON_WOP2_S77WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S77WOP */
#define IFX_DMU_HP_PROCON_WOP2_S77WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S77WOP */
#define IFX_DMU_HP_PROCON_WOP2_S77WOP_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S78WOP */
#define IFX_DMU_HP_PROCON_WOP2_S78WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S78WOP */
#define IFX_DMU_HP_PROCON_WOP2_S78WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S78WOP */
#define IFX_DMU_HP_PROCON_WOP2_S78WOP_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S79WOP */
#define IFX_DMU_HP_PROCON_WOP2_S79WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S79WOP */
#define IFX_DMU_HP_PROCON_WOP2_S79WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S79WOP */
#define IFX_DMU_HP_PROCON_WOP2_S79WOP_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S80WOP */
#define IFX_DMU_HP_PROCON_WOP2_S80WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S80WOP */
#define IFX_DMU_HP_PROCON_WOP2_S80WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S80WOP */
#define IFX_DMU_HP_PROCON_WOP2_S80WOP_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S81WOP */
#define IFX_DMU_HP_PROCON_WOP2_S81WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S81WOP */
#define IFX_DMU_HP_PROCON_WOP2_S81WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S81WOP */
#define IFX_DMU_HP_PROCON_WOP2_S81WOP_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S82WOP */
#define IFX_DMU_HP_PROCON_WOP2_S82WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S82WOP */
#define IFX_DMU_HP_PROCON_WOP2_S82WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S82WOP */
#define IFX_DMU_HP_PROCON_WOP2_S82WOP_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S83WOP */
#define IFX_DMU_HP_PROCON_WOP2_S83WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S83WOP */
#define IFX_DMU_HP_PROCON_WOP2_S83WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S83WOP */
#define IFX_DMU_HP_PROCON_WOP2_S83WOP_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S84WOP */
#define IFX_DMU_HP_PROCON_WOP2_S84WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S84WOP */
#define IFX_DMU_HP_PROCON_WOP2_S84WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S84WOP */
#define IFX_DMU_HP_PROCON_WOP2_S84WOP_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S85WOP */
#define IFX_DMU_HP_PROCON_WOP2_S85WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S85WOP */
#define IFX_DMU_HP_PROCON_WOP2_S85WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S85WOP */
#define IFX_DMU_HP_PROCON_WOP2_S85WOP_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S86WOP */
#define IFX_DMU_HP_PROCON_WOP2_S86WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S86WOP */
#define IFX_DMU_HP_PROCON_WOP2_S86WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S86WOP */
#define IFX_DMU_HP_PROCON_WOP2_S86WOP_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S87WOP */
#define IFX_DMU_HP_PROCON_WOP2_S87WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S87WOP */
#define IFX_DMU_HP_PROCON_WOP2_S87WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S87WOP */
#define IFX_DMU_HP_PROCON_WOP2_S87WOP_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S88WOP */
#define IFX_DMU_HP_PROCON_WOP2_S88WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S88WOP */
#define IFX_DMU_HP_PROCON_WOP2_S88WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S88WOP */
#define IFX_DMU_HP_PROCON_WOP2_S88WOP_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S89WOP */
#define IFX_DMU_HP_PROCON_WOP2_S89WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S89WOP */
#define IFX_DMU_HP_PROCON_WOP2_S89WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S89WOP */
#define IFX_DMU_HP_PROCON_WOP2_S89WOP_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S90WOP */
#define IFX_DMU_HP_PROCON_WOP2_S90WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S90WOP */
#define IFX_DMU_HP_PROCON_WOP2_S90WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S90WOP */
#define IFX_DMU_HP_PROCON_WOP2_S90WOP_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S91WOP */
#define IFX_DMU_HP_PROCON_WOP2_S91WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S91WOP */
#define IFX_DMU_HP_PROCON_WOP2_S91WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S91WOP */
#define IFX_DMU_HP_PROCON_WOP2_S91WOP_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S92WOP */
#define IFX_DMU_HP_PROCON_WOP2_S92WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S92WOP */
#define IFX_DMU_HP_PROCON_WOP2_S92WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S92WOP */
#define IFX_DMU_HP_PROCON_WOP2_S92WOP_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S93WOP */
#define IFX_DMU_HP_PROCON_WOP2_S93WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S93WOP */
#define IFX_DMU_HP_PROCON_WOP2_S93WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S93WOP */
#define IFX_DMU_HP_PROCON_WOP2_S93WOP_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S94WOP */
#define IFX_DMU_HP_PROCON_WOP2_S94WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S94WOP */
#define IFX_DMU_HP_PROCON_WOP2_S94WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S94WOP */
#define IFX_DMU_HP_PROCON_WOP2_S94WOP_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP2_Bits.S95WOP */
#define IFX_DMU_HP_PROCON_WOP2_S95WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP2_Bits.S95WOP */
#define IFX_DMU_HP_PROCON_WOP2_S95WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP2_Bits.S95WOP */
#define IFX_DMU_HP_PROCON_WOP2_S95WOP_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S96WOP */
#define IFX_DMU_HP_PROCON_WOP3_S96WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S96WOP */
#define IFX_DMU_HP_PROCON_WOP3_S96WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S96WOP */
#define IFX_DMU_HP_PROCON_WOP3_S96WOP_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S97WOP */
#define IFX_DMU_HP_PROCON_WOP3_S97WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S97WOP */
#define IFX_DMU_HP_PROCON_WOP3_S97WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S97WOP */
#define IFX_DMU_HP_PROCON_WOP3_S97WOP_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S98WOP */
#define IFX_DMU_HP_PROCON_WOP3_S98WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S98WOP */
#define IFX_DMU_HP_PROCON_WOP3_S98WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S98WOP */
#define IFX_DMU_HP_PROCON_WOP3_S98WOP_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S99WOP */
#define IFX_DMU_HP_PROCON_WOP3_S99WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S99WOP */
#define IFX_DMU_HP_PROCON_WOP3_S99WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S99WOP */
#define IFX_DMU_HP_PROCON_WOP3_S99WOP_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S100WOP */
#define IFX_DMU_HP_PROCON_WOP3_S100WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S100WOP */
#define IFX_DMU_HP_PROCON_WOP3_S100WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S100WOP */
#define IFX_DMU_HP_PROCON_WOP3_S100WOP_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S101WOP */
#define IFX_DMU_HP_PROCON_WOP3_S101WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S101WOP */
#define IFX_DMU_HP_PROCON_WOP3_S101WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S101WOP */
#define IFX_DMU_HP_PROCON_WOP3_S101WOP_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S102WOP */
#define IFX_DMU_HP_PROCON_WOP3_S102WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S102WOP */
#define IFX_DMU_HP_PROCON_WOP3_S102WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S102WOP */
#define IFX_DMU_HP_PROCON_WOP3_S102WOP_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S103WOP */
#define IFX_DMU_HP_PROCON_WOP3_S103WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S103WOP */
#define IFX_DMU_HP_PROCON_WOP3_S103WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S103WOP */
#define IFX_DMU_HP_PROCON_WOP3_S103WOP_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S104WOP */
#define IFX_DMU_HP_PROCON_WOP3_S104WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S104WOP */
#define IFX_DMU_HP_PROCON_WOP3_S104WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S104WOP */
#define IFX_DMU_HP_PROCON_WOP3_S104WOP_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S105WOP */
#define IFX_DMU_HP_PROCON_WOP3_S105WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S105WOP */
#define IFX_DMU_HP_PROCON_WOP3_S105WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S105WOP */
#define IFX_DMU_HP_PROCON_WOP3_S105WOP_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S106WOP */
#define IFX_DMU_HP_PROCON_WOP3_S106WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S106WOP */
#define IFX_DMU_HP_PROCON_WOP3_S106WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S106WOP */
#define IFX_DMU_HP_PROCON_WOP3_S106WOP_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S107WOP */
#define IFX_DMU_HP_PROCON_WOP3_S107WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S107WOP */
#define IFX_DMU_HP_PROCON_WOP3_S107WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S107WOP */
#define IFX_DMU_HP_PROCON_WOP3_S107WOP_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S108WOP */
#define IFX_DMU_HP_PROCON_WOP3_S108WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S108WOP */
#define IFX_DMU_HP_PROCON_WOP3_S108WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S108WOP */
#define IFX_DMU_HP_PROCON_WOP3_S108WOP_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S109WOP */
#define IFX_DMU_HP_PROCON_WOP3_S109WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S109WOP */
#define IFX_DMU_HP_PROCON_WOP3_S109WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S109WOP */
#define IFX_DMU_HP_PROCON_WOP3_S109WOP_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S110WOP */
#define IFX_DMU_HP_PROCON_WOP3_S110WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S110WOP */
#define IFX_DMU_HP_PROCON_WOP3_S110WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S110WOP */
#define IFX_DMU_HP_PROCON_WOP3_S110WOP_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S111WOP */
#define IFX_DMU_HP_PROCON_WOP3_S111WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S111WOP */
#define IFX_DMU_HP_PROCON_WOP3_S111WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S111WOP */
#define IFX_DMU_HP_PROCON_WOP3_S111WOP_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S112WOP */
#define IFX_DMU_HP_PROCON_WOP3_S112WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S112WOP */
#define IFX_DMU_HP_PROCON_WOP3_S112WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S112WOP */
#define IFX_DMU_HP_PROCON_WOP3_S112WOP_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S113WOP */
#define IFX_DMU_HP_PROCON_WOP3_S113WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S113WOP */
#define IFX_DMU_HP_PROCON_WOP3_S113WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S113WOP */
#define IFX_DMU_HP_PROCON_WOP3_S113WOP_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S114WOP */
#define IFX_DMU_HP_PROCON_WOP3_S114WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S114WOP */
#define IFX_DMU_HP_PROCON_WOP3_S114WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S114WOP */
#define IFX_DMU_HP_PROCON_WOP3_S114WOP_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S115WOP */
#define IFX_DMU_HP_PROCON_WOP3_S115WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S115WOP */
#define IFX_DMU_HP_PROCON_WOP3_S115WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S115WOP */
#define IFX_DMU_HP_PROCON_WOP3_S115WOP_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S116WOP */
#define IFX_DMU_HP_PROCON_WOP3_S116WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S116WOP */
#define IFX_DMU_HP_PROCON_WOP3_S116WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S116WOP */
#define IFX_DMU_HP_PROCON_WOP3_S116WOP_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S117WOP */
#define IFX_DMU_HP_PROCON_WOP3_S117WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S117WOP */
#define IFX_DMU_HP_PROCON_WOP3_S117WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S117WOP */
#define IFX_DMU_HP_PROCON_WOP3_S117WOP_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S118WOP */
#define IFX_DMU_HP_PROCON_WOP3_S118WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S118WOP */
#define IFX_DMU_HP_PROCON_WOP3_S118WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S118WOP */
#define IFX_DMU_HP_PROCON_WOP3_S118WOP_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S119WOP */
#define IFX_DMU_HP_PROCON_WOP3_S119WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S119WOP */
#define IFX_DMU_HP_PROCON_WOP3_S119WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S119WOP */
#define IFX_DMU_HP_PROCON_WOP3_S119WOP_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S120WOP */
#define IFX_DMU_HP_PROCON_WOP3_S120WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S120WOP */
#define IFX_DMU_HP_PROCON_WOP3_S120WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S120WOP */
#define IFX_DMU_HP_PROCON_WOP3_S120WOP_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S121WOP */
#define IFX_DMU_HP_PROCON_WOP3_S121WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S121WOP */
#define IFX_DMU_HP_PROCON_WOP3_S121WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S121WOP */
#define IFX_DMU_HP_PROCON_WOP3_S121WOP_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S122WOP */
#define IFX_DMU_HP_PROCON_WOP3_S122WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S122WOP */
#define IFX_DMU_HP_PROCON_WOP3_S122WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S122WOP */
#define IFX_DMU_HP_PROCON_WOP3_S122WOP_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S123WOP */
#define IFX_DMU_HP_PROCON_WOP3_S123WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S123WOP */
#define IFX_DMU_HP_PROCON_WOP3_S123WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S123WOP */
#define IFX_DMU_HP_PROCON_WOP3_S123WOP_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S124WOP */
#define IFX_DMU_HP_PROCON_WOP3_S124WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S124WOP */
#define IFX_DMU_HP_PROCON_WOP3_S124WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S124WOP */
#define IFX_DMU_HP_PROCON_WOP3_S124WOP_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S125WOP */
#define IFX_DMU_HP_PROCON_WOP3_S125WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S125WOP */
#define IFX_DMU_HP_PROCON_WOP3_S125WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S125WOP */
#define IFX_DMU_HP_PROCON_WOP3_S125WOP_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S126WOP */
#define IFX_DMU_HP_PROCON_WOP3_S126WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S126WOP */
#define IFX_DMU_HP_PROCON_WOP3_S126WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S126WOP */
#define IFX_DMU_HP_PROCON_WOP3_S126WOP_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP3_Bits.S127WOP */
#define IFX_DMU_HP_PROCON_WOP3_S127WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP3_Bits.S127WOP */
#define IFX_DMU_HP_PROCON_WOP3_S127WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP3_Bits.S127WOP */
#define IFX_DMU_HP_PROCON_WOP3_S127WOP_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S128WOP */
#define IFX_DMU_HP_PROCON_WOP4_S128WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S128WOP */
#define IFX_DMU_HP_PROCON_WOP4_S128WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S128WOP */
#define IFX_DMU_HP_PROCON_WOP4_S128WOP_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S129WOP */
#define IFX_DMU_HP_PROCON_WOP4_S129WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S129WOP */
#define IFX_DMU_HP_PROCON_WOP4_S129WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S129WOP */
#define IFX_DMU_HP_PROCON_WOP4_S129WOP_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S130WOP */
#define IFX_DMU_HP_PROCON_WOP4_S130WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S130WOP */
#define IFX_DMU_HP_PROCON_WOP4_S130WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S130WOP */
#define IFX_DMU_HP_PROCON_WOP4_S130WOP_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S131WOP */
#define IFX_DMU_HP_PROCON_WOP4_S131WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S131WOP */
#define IFX_DMU_HP_PROCON_WOP4_S131WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S131WOP */
#define IFX_DMU_HP_PROCON_WOP4_S131WOP_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S132WOP */
#define IFX_DMU_HP_PROCON_WOP4_S132WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S132WOP */
#define IFX_DMU_HP_PROCON_WOP4_S132WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S132WOP */
#define IFX_DMU_HP_PROCON_WOP4_S132WOP_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S133WOP */
#define IFX_DMU_HP_PROCON_WOP4_S133WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S133WOP */
#define IFX_DMU_HP_PROCON_WOP4_S133WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S133WOP */
#define IFX_DMU_HP_PROCON_WOP4_S133WOP_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S134WOP */
#define IFX_DMU_HP_PROCON_WOP4_S134WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S134WOP */
#define IFX_DMU_HP_PROCON_WOP4_S134WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S134WOP */
#define IFX_DMU_HP_PROCON_WOP4_S134WOP_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S135WOP */
#define IFX_DMU_HP_PROCON_WOP4_S135WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S135WOP */
#define IFX_DMU_HP_PROCON_WOP4_S135WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S135WOP */
#define IFX_DMU_HP_PROCON_WOP4_S135WOP_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S136WOP */
#define IFX_DMU_HP_PROCON_WOP4_S136WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S136WOP */
#define IFX_DMU_HP_PROCON_WOP4_S136WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S136WOP */
#define IFX_DMU_HP_PROCON_WOP4_S136WOP_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S137WOP */
#define IFX_DMU_HP_PROCON_WOP4_S137WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S137WOP */
#define IFX_DMU_HP_PROCON_WOP4_S137WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S137WOP */
#define IFX_DMU_HP_PROCON_WOP4_S137WOP_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S138WOP */
#define IFX_DMU_HP_PROCON_WOP4_S138WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S138WOP */
#define IFX_DMU_HP_PROCON_WOP4_S138WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S138WOP */
#define IFX_DMU_HP_PROCON_WOP4_S138WOP_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S139WOP */
#define IFX_DMU_HP_PROCON_WOP4_S139WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S139WOP */
#define IFX_DMU_HP_PROCON_WOP4_S139WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S139WOP */
#define IFX_DMU_HP_PROCON_WOP4_S139WOP_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S140WOP */
#define IFX_DMU_HP_PROCON_WOP4_S140WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S140WOP */
#define IFX_DMU_HP_PROCON_WOP4_S140WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S140WOP */
#define IFX_DMU_HP_PROCON_WOP4_S140WOP_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S141WOP */
#define IFX_DMU_HP_PROCON_WOP4_S141WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S141WOP */
#define IFX_DMU_HP_PROCON_WOP4_S141WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S141WOP */
#define IFX_DMU_HP_PROCON_WOP4_S141WOP_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S142WOP */
#define IFX_DMU_HP_PROCON_WOP4_S142WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S142WOP */
#define IFX_DMU_HP_PROCON_WOP4_S142WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S142WOP */
#define IFX_DMU_HP_PROCON_WOP4_S142WOP_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S143WOP */
#define IFX_DMU_HP_PROCON_WOP4_S143WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S143WOP */
#define IFX_DMU_HP_PROCON_WOP4_S143WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S143WOP */
#define IFX_DMU_HP_PROCON_WOP4_S143WOP_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S144WOP */
#define IFX_DMU_HP_PROCON_WOP4_S144WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S144WOP */
#define IFX_DMU_HP_PROCON_WOP4_S144WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S144WOP */
#define IFX_DMU_HP_PROCON_WOP4_S144WOP_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S145WOP */
#define IFX_DMU_HP_PROCON_WOP4_S145WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S145WOP */
#define IFX_DMU_HP_PROCON_WOP4_S145WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S145WOP */
#define IFX_DMU_HP_PROCON_WOP4_S145WOP_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S146WOP */
#define IFX_DMU_HP_PROCON_WOP4_S146WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S146WOP */
#define IFX_DMU_HP_PROCON_WOP4_S146WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S146WOP */
#define IFX_DMU_HP_PROCON_WOP4_S146WOP_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S147WOP */
#define IFX_DMU_HP_PROCON_WOP4_S147WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S147WOP */
#define IFX_DMU_HP_PROCON_WOP4_S147WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S147WOP */
#define IFX_DMU_HP_PROCON_WOP4_S147WOP_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S148WOP */
#define IFX_DMU_HP_PROCON_WOP4_S148WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S148WOP */
#define IFX_DMU_HP_PROCON_WOP4_S148WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S148WOP */
#define IFX_DMU_HP_PROCON_WOP4_S148WOP_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S149WOP */
#define IFX_DMU_HP_PROCON_WOP4_S149WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S149WOP */
#define IFX_DMU_HP_PROCON_WOP4_S149WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S149WOP */
#define IFX_DMU_HP_PROCON_WOP4_S149WOP_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S150WOP */
#define IFX_DMU_HP_PROCON_WOP4_S150WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S150WOP */
#define IFX_DMU_HP_PROCON_WOP4_S150WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S150WOP */
#define IFX_DMU_HP_PROCON_WOP4_S150WOP_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S151WOP */
#define IFX_DMU_HP_PROCON_WOP4_S151WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S151WOP */
#define IFX_DMU_HP_PROCON_WOP4_S151WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S151WOP */
#define IFX_DMU_HP_PROCON_WOP4_S151WOP_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S152WOP */
#define IFX_DMU_HP_PROCON_WOP4_S152WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S152WOP */
#define IFX_DMU_HP_PROCON_WOP4_S152WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S152WOP */
#define IFX_DMU_HP_PROCON_WOP4_S152WOP_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S153WOP */
#define IFX_DMU_HP_PROCON_WOP4_S153WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S153WOP */
#define IFX_DMU_HP_PROCON_WOP4_S153WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S153WOP */
#define IFX_DMU_HP_PROCON_WOP4_S153WOP_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S154WOP */
#define IFX_DMU_HP_PROCON_WOP4_S154WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S154WOP */
#define IFX_DMU_HP_PROCON_WOP4_S154WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S154WOP */
#define IFX_DMU_HP_PROCON_WOP4_S154WOP_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S155WOP */
#define IFX_DMU_HP_PROCON_WOP4_S155WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S155WOP */
#define IFX_DMU_HP_PROCON_WOP4_S155WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S155WOP */
#define IFX_DMU_HP_PROCON_WOP4_S155WOP_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S156WOP */
#define IFX_DMU_HP_PROCON_WOP4_S156WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S156WOP */
#define IFX_DMU_HP_PROCON_WOP4_S156WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S156WOP */
#define IFX_DMU_HP_PROCON_WOP4_S156WOP_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S157WOP */
#define IFX_DMU_HP_PROCON_WOP4_S157WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S157WOP */
#define IFX_DMU_HP_PROCON_WOP4_S157WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S157WOP */
#define IFX_DMU_HP_PROCON_WOP4_S157WOP_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S158WOP */
#define IFX_DMU_HP_PROCON_WOP4_S158WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S158WOP */
#define IFX_DMU_HP_PROCON_WOP4_S158WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S158WOP */
#define IFX_DMU_HP_PROCON_WOP4_S158WOP_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP4_Bits.S159WOP */
#define IFX_DMU_HP_PROCON_WOP4_S159WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP4_Bits.S159WOP */
#define IFX_DMU_HP_PROCON_WOP4_S159WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP4_Bits.S159WOP */
#define IFX_DMU_HP_PROCON_WOP4_S159WOP_OFF (31u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S160WOP */
#define IFX_DMU_HP_PROCON_WOP5_S160WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S160WOP */
#define IFX_DMU_HP_PROCON_WOP5_S160WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S160WOP */
#define IFX_DMU_HP_PROCON_WOP5_S160WOP_OFF (0u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S161WOP */
#define IFX_DMU_HP_PROCON_WOP5_S161WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S161WOP */
#define IFX_DMU_HP_PROCON_WOP5_S161WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S161WOP */
#define IFX_DMU_HP_PROCON_WOP5_S161WOP_OFF (1u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S162WOP */
#define IFX_DMU_HP_PROCON_WOP5_S162WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S162WOP */
#define IFX_DMU_HP_PROCON_WOP5_S162WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S162WOP */
#define IFX_DMU_HP_PROCON_WOP5_S162WOP_OFF (2u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S163WOP */
#define IFX_DMU_HP_PROCON_WOP5_S163WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S163WOP */
#define IFX_DMU_HP_PROCON_WOP5_S163WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S163WOP */
#define IFX_DMU_HP_PROCON_WOP5_S163WOP_OFF (3u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S164WOP */
#define IFX_DMU_HP_PROCON_WOP5_S164WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S164WOP */
#define IFX_DMU_HP_PROCON_WOP5_S164WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S164WOP */
#define IFX_DMU_HP_PROCON_WOP5_S164WOP_OFF (4u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S165WOP */
#define IFX_DMU_HP_PROCON_WOP5_S165WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S165WOP */
#define IFX_DMU_HP_PROCON_WOP5_S165WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S165WOP */
#define IFX_DMU_HP_PROCON_WOP5_S165WOP_OFF (5u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S166WOP */
#define IFX_DMU_HP_PROCON_WOP5_S166WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S166WOP */
#define IFX_DMU_HP_PROCON_WOP5_S166WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S166WOP */
#define IFX_DMU_HP_PROCON_WOP5_S166WOP_OFF (6u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S167WOP */
#define IFX_DMU_HP_PROCON_WOP5_S167WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S167WOP */
#define IFX_DMU_HP_PROCON_WOP5_S167WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S167WOP */
#define IFX_DMU_HP_PROCON_WOP5_S167WOP_OFF (7u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S168WOP */
#define IFX_DMU_HP_PROCON_WOP5_S168WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S168WOP */
#define IFX_DMU_HP_PROCON_WOP5_S168WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S168WOP */
#define IFX_DMU_HP_PROCON_WOP5_S168WOP_OFF (8u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S169WOP */
#define IFX_DMU_HP_PROCON_WOP5_S169WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S169WOP */
#define IFX_DMU_HP_PROCON_WOP5_S169WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S169WOP */
#define IFX_DMU_HP_PROCON_WOP5_S169WOP_OFF (9u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S170WOP */
#define IFX_DMU_HP_PROCON_WOP5_S170WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S170WOP */
#define IFX_DMU_HP_PROCON_WOP5_S170WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S170WOP */
#define IFX_DMU_HP_PROCON_WOP5_S170WOP_OFF (10u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S171WOP */
#define IFX_DMU_HP_PROCON_WOP5_S171WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S171WOP */
#define IFX_DMU_HP_PROCON_WOP5_S171WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S171WOP */
#define IFX_DMU_HP_PROCON_WOP5_S171WOP_OFF (11u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S172WOP */
#define IFX_DMU_HP_PROCON_WOP5_S172WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S172WOP */
#define IFX_DMU_HP_PROCON_WOP5_S172WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S172WOP */
#define IFX_DMU_HP_PROCON_WOP5_S172WOP_OFF (12u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S173WOP */
#define IFX_DMU_HP_PROCON_WOP5_S173WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S173WOP */
#define IFX_DMU_HP_PROCON_WOP5_S173WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S173WOP */
#define IFX_DMU_HP_PROCON_WOP5_S173WOP_OFF (13u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S174WOP */
#define IFX_DMU_HP_PROCON_WOP5_S174WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S174WOP */
#define IFX_DMU_HP_PROCON_WOP5_S174WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S174WOP */
#define IFX_DMU_HP_PROCON_WOP5_S174WOP_OFF (14u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S175WOP */
#define IFX_DMU_HP_PROCON_WOP5_S175WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S175WOP */
#define IFX_DMU_HP_PROCON_WOP5_S175WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S175WOP */
#define IFX_DMU_HP_PROCON_WOP5_S175WOP_OFF (15u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S176WOP */
#define IFX_DMU_HP_PROCON_WOP5_S176WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S176WOP */
#define IFX_DMU_HP_PROCON_WOP5_S176WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S176WOP */
#define IFX_DMU_HP_PROCON_WOP5_S176WOP_OFF (16u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S177WOP */
#define IFX_DMU_HP_PROCON_WOP5_S177WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S177WOP */
#define IFX_DMU_HP_PROCON_WOP5_S177WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S177WOP */
#define IFX_DMU_HP_PROCON_WOP5_S177WOP_OFF (17u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S178WOP */
#define IFX_DMU_HP_PROCON_WOP5_S178WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S178WOP */
#define IFX_DMU_HP_PROCON_WOP5_S178WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S178WOP */
#define IFX_DMU_HP_PROCON_WOP5_S178WOP_OFF (18u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S179WOP */
#define IFX_DMU_HP_PROCON_WOP5_S179WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S179WOP */
#define IFX_DMU_HP_PROCON_WOP5_S179WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S179WOP */
#define IFX_DMU_HP_PROCON_WOP5_S179WOP_OFF (19u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S180WOP */
#define IFX_DMU_HP_PROCON_WOP5_S180WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S180WOP */
#define IFX_DMU_HP_PROCON_WOP5_S180WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S180WOP */
#define IFX_DMU_HP_PROCON_WOP5_S180WOP_OFF (20u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S181WOP */
#define IFX_DMU_HP_PROCON_WOP5_S181WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S181WOP */
#define IFX_DMU_HP_PROCON_WOP5_S181WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S181WOP */
#define IFX_DMU_HP_PROCON_WOP5_S181WOP_OFF (21u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S182WOP */
#define IFX_DMU_HP_PROCON_WOP5_S182WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S182WOP */
#define IFX_DMU_HP_PROCON_WOP5_S182WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S182WOP */
#define IFX_DMU_HP_PROCON_WOP5_S182WOP_OFF (22u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S183WOP */
#define IFX_DMU_HP_PROCON_WOP5_S183WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S183WOP */
#define IFX_DMU_HP_PROCON_WOP5_S183WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S183WOP */
#define IFX_DMU_HP_PROCON_WOP5_S183WOP_OFF (23u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S184WOP */
#define IFX_DMU_HP_PROCON_WOP5_S184WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S184WOP */
#define IFX_DMU_HP_PROCON_WOP5_S184WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S184WOP */
#define IFX_DMU_HP_PROCON_WOP5_S184WOP_OFF (24u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S185WOP */
#define IFX_DMU_HP_PROCON_WOP5_S185WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S185WOP */
#define IFX_DMU_HP_PROCON_WOP5_S185WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S185WOP */
#define IFX_DMU_HP_PROCON_WOP5_S185WOP_OFF (25u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S186WOP */
#define IFX_DMU_HP_PROCON_WOP5_S186WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S186WOP */
#define IFX_DMU_HP_PROCON_WOP5_S186WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S186WOP */
#define IFX_DMU_HP_PROCON_WOP5_S186WOP_OFF (26u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S187WOP */
#define IFX_DMU_HP_PROCON_WOP5_S187WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S187WOP */
#define IFX_DMU_HP_PROCON_WOP5_S187WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S187WOP */
#define IFX_DMU_HP_PROCON_WOP5_S187WOP_OFF (27u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S188WOP */
#define IFX_DMU_HP_PROCON_WOP5_S188WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S188WOP */
#define IFX_DMU_HP_PROCON_WOP5_S188WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S188WOP */
#define IFX_DMU_HP_PROCON_WOP5_S188WOP_OFF (28u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S189WOP */
#define IFX_DMU_HP_PROCON_WOP5_S189WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S189WOP */
#define IFX_DMU_HP_PROCON_WOP5_S189WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S189WOP */
#define IFX_DMU_HP_PROCON_WOP5_S189WOP_OFF (29u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S190WOP */
#define IFX_DMU_HP_PROCON_WOP5_S190WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S190WOP */
#define IFX_DMU_HP_PROCON_WOP5_S190WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S190WOP */
#define IFX_DMU_HP_PROCON_WOP5_S190WOP_OFF (30u)

/** \brief Length for Ifx_DMU_HP_PROCON_WOP5_Bits.S191WOP */
#define IFX_DMU_HP_PROCON_WOP5_S191WOP_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_PROCON_WOP5_Bits.S191WOP */
#define IFX_DMU_HP_PROCON_WOP5_S191WOP_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_PROCON_WOP5_Bits.S191WOP */
#define IFX_DMU_HP_PROCON_WOP5_S191WOP_OFF (31u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S0L */
#define IFX_DMU_HP_ECPRIO_P0_S0L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S0L */
#define IFX_DMU_HP_ECPRIO_P0_S0L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S0L */
#define IFX_DMU_HP_ECPRIO_P0_S0L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S1L */
#define IFX_DMU_HP_ECPRIO_P0_S1L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S1L */
#define IFX_DMU_HP_ECPRIO_P0_S1L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S1L */
#define IFX_DMU_HP_ECPRIO_P0_S1L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S2L */
#define IFX_DMU_HP_ECPRIO_P0_S2L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S2L */
#define IFX_DMU_HP_ECPRIO_P0_S2L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S2L */
#define IFX_DMU_HP_ECPRIO_P0_S2L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S3L */
#define IFX_DMU_HP_ECPRIO_P0_S3L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S3L */
#define IFX_DMU_HP_ECPRIO_P0_S3L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S3L */
#define IFX_DMU_HP_ECPRIO_P0_S3L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S4L */
#define IFX_DMU_HP_ECPRIO_P0_S4L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S4L */
#define IFX_DMU_HP_ECPRIO_P0_S4L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S4L */
#define IFX_DMU_HP_ECPRIO_P0_S4L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S5L */
#define IFX_DMU_HP_ECPRIO_P0_S5L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S5L */
#define IFX_DMU_HP_ECPRIO_P0_S5L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S5L */
#define IFX_DMU_HP_ECPRIO_P0_S5L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S6L */
#define IFX_DMU_HP_ECPRIO_P0_S6L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S6L */
#define IFX_DMU_HP_ECPRIO_P0_S6L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S6L */
#define IFX_DMU_HP_ECPRIO_P0_S6L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S7L */
#define IFX_DMU_HP_ECPRIO_P0_S7L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S7L */
#define IFX_DMU_HP_ECPRIO_P0_S7L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S7L */
#define IFX_DMU_HP_ECPRIO_P0_S7L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S8L */
#define IFX_DMU_HP_ECPRIO_P0_S8L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S8L */
#define IFX_DMU_HP_ECPRIO_P0_S8L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S8L */
#define IFX_DMU_HP_ECPRIO_P0_S8L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S9L */
#define IFX_DMU_HP_ECPRIO_P0_S9L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S9L */
#define IFX_DMU_HP_ECPRIO_P0_S9L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S9L */
#define IFX_DMU_HP_ECPRIO_P0_S9L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S10L */
#define IFX_DMU_HP_ECPRIO_P0_S10L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S10L */
#define IFX_DMU_HP_ECPRIO_P0_S10L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S10L */
#define IFX_DMU_HP_ECPRIO_P0_S10L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S11L */
#define IFX_DMU_HP_ECPRIO_P0_S11L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S11L */
#define IFX_DMU_HP_ECPRIO_P0_S11L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S11L */
#define IFX_DMU_HP_ECPRIO_P0_S11L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S12L */
#define IFX_DMU_HP_ECPRIO_P0_S12L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S12L */
#define IFX_DMU_HP_ECPRIO_P0_S12L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S12L */
#define IFX_DMU_HP_ECPRIO_P0_S12L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S13L */
#define IFX_DMU_HP_ECPRIO_P0_S13L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S13L */
#define IFX_DMU_HP_ECPRIO_P0_S13L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S13L */
#define IFX_DMU_HP_ECPRIO_P0_S13L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S14L */
#define IFX_DMU_HP_ECPRIO_P0_S14L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S14L */
#define IFX_DMU_HP_ECPRIO_P0_S14L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S14L */
#define IFX_DMU_HP_ECPRIO_P0_S14L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S15L */
#define IFX_DMU_HP_ECPRIO_P0_S15L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S15L */
#define IFX_DMU_HP_ECPRIO_P0_S15L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S15L */
#define IFX_DMU_HP_ECPRIO_P0_S15L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S16L */
#define IFX_DMU_HP_ECPRIO_P0_S16L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S16L */
#define IFX_DMU_HP_ECPRIO_P0_S16L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S16L */
#define IFX_DMU_HP_ECPRIO_P0_S16L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S17L */
#define IFX_DMU_HP_ECPRIO_P0_S17L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S17L */
#define IFX_DMU_HP_ECPRIO_P0_S17L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S17L */
#define IFX_DMU_HP_ECPRIO_P0_S17L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S18L */
#define IFX_DMU_HP_ECPRIO_P0_S18L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S18L */
#define IFX_DMU_HP_ECPRIO_P0_S18L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S18L */
#define IFX_DMU_HP_ECPRIO_P0_S18L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S19L */
#define IFX_DMU_HP_ECPRIO_P0_S19L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S19L */
#define IFX_DMU_HP_ECPRIO_P0_S19L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S19L */
#define IFX_DMU_HP_ECPRIO_P0_S19L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S20L */
#define IFX_DMU_HP_ECPRIO_P0_S20L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S20L */
#define IFX_DMU_HP_ECPRIO_P0_S20L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S20L */
#define IFX_DMU_HP_ECPRIO_P0_S20L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S21L */
#define IFX_DMU_HP_ECPRIO_P0_S21L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S21L */
#define IFX_DMU_HP_ECPRIO_P0_S21L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S21L */
#define IFX_DMU_HP_ECPRIO_P0_S21L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S22L */
#define IFX_DMU_HP_ECPRIO_P0_S22L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S22L */
#define IFX_DMU_HP_ECPRIO_P0_S22L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S22L */
#define IFX_DMU_HP_ECPRIO_P0_S22L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S23L */
#define IFX_DMU_HP_ECPRIO_P0_S23L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S23L */
#define IFX_DMU_HP_ECPRIO_P0_S23L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S23L */
#define IFX_DMU_HP_ECPRIO_P0_S23L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S24L */
#define IFX_DMU_HP_ECPRIO_P0_S24L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S24L */
#define IFX_DMU_HP_ECPRIO_P0_S24L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S24L */
#define IFX_DMU_HP_ECPRIO_P0_S24L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S25L */
#define IFX_DMU_HP_ECPRIO_P0_S25L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S25L */
#define IFX_DMU_HP_ECPRIO_P0_S25L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S25L */
#define IFX_DMU_HP_ECPRIO_P0_S25L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S26L */
#define IFX_DMU_HP_ECPRIO_P0_S26L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S26L */
#define IFX_DMU_HP_ECPRIO_P0_S26L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S26L */
#define IFX_DMU_HP_ECPRIO_P0_S26L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S27L */
#define IFX_DMU_HP_ECPRIO_P0_S27L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S27L */
#define IFX_DMU_HP_ECPRIO_P0_S27L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S27L */
#define IFX_DMU_HP_ECPRIO_P0_S27L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S28L */
#define IFX_DMU_HP_ECPRIO_P0_S28L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S28L */
#define IFX_DMU_HP_ECPRIO_P0_S28L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S28L */
#define IFX_DMU_HP_ECPRIO_P0_S28L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S29L */
#define IFX_DMU_HP_ECPRIO_P0_S29L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S29L */
#define IFX_DMU_HP_ECPRIO_P0_S29L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S29L */
#define IFX_DMU_HP_ECPRIO_P0_S29L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S30L */
#define IFX_DMU_HP_ECPRIO_P0_S30L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S30L */
#define IFX_DMU_HP_ECPRIO_P0_S30L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S30L */
#define IFX_DMU_HP_ECPRIO_P0_S30L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P0_Bits.S31L */
#define IFX_DMU_HP_ECPRIO_P0_S31L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P0_Bits.S31L */
#define IFX_DMU_HP_ECPRIO_P0_S31L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P0_Bits.S31L */
#define IFX_DMU_HP_ECPRIO_P0_S31L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S32L */
#define IFX_DMU_HP_ECPRIO_P1_S32L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S32L */
#define IFX_DMU_HP_ECPRIO_P1_S32L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S32L */
#define IFX_DMU_HP_ECPRIO_P1_S32L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S33L */
#define IFX_DMU_HP_ECPRIO_P1_S33L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S33L */
#define IFX_DMU_HP_ECPRIO_P1_S33L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S33L */
#define IFX_DMU_HP_ECPRIO_P1_S33L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S34L */
#define IFX_DMU_HP_ECPRIO_P1_S34L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S34L */
#define IFX_DMU_HP_ECPRIO_P1_S34L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S34L */
#define IFX_DMU_HP_ECPRIO_P1_S34L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S35L */
#define IFX_DMU_HP_ECPRIO_P1_S35L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S35L */
#define IFX_DMU_HP_ECPRIO_P1_S35L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S35L */
#define IFX_DMU_HP_ECPRIO_P1_S35L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S36L */
#define IFX_DMU_HP_ECPRIO_P1_S36L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S36L */
#define IFX_DMU_HP_ECPRIO_P1_S36L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S36L */
#define IFX_DMU_HP_ECPRIO_P1_S36L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S37L */
#define IFX_DMU_HP_ECPRIO_P1_S37L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S37L */
#define IFX_DMU_HP_ECPRIO_P1_S37L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S37L */
#define IFX_DMU_HP_ECPRIO_P1_S37L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S38L */
#define IFX_DMU_HP_ECPRIO_P1_S38L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S38L */
#define IFX_DMU_HP_ECPRIO_P1_S38L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S38L */
#define IFX_DMU_HP_ECPRIO_P1_S38L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S39L */
#define IFX_DMU_HP_ECPRIO_P1_S39L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S39L */
#define IFX_DMU_HP_ECPRIO_P1_S39L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S39L */
#define IFX_DMU_HP_ECPRIO_P1_S39L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S40L */
#define IFX_DMU_HP_ECPRIO_P1_S40L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S40L */
#define IFX_DMU_HP_ECPRIO_P1_S40L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S40L */
#define IFX_DMU_HP_ECPRIO_P1_S40L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S41L */
#define IFX_DMU_HP_ECPRIO_P1_S41L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S41L */
#define IFX_DMU_HP_ECPRIO_P1_S41L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S41L */
#define IFX_DMU_HP_ECPRIO_P1_S41L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S42L */
#define IFX_DMU_HP_ECPRIO_P1_S42L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S42L */
#define IFX_DMU_HP_ECPRIO_P1_S42L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S42L */
#define IFX_DMU_HP_ECPRIO_P1_S42L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S43L */
#define IFX_DMU_HP_ECPRIO_P1_S43L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S43L */
#define IFX_DMU_HP_ECPRIO_P1_S43L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S43L */
#define IFX_DMU_HP_ECPRIO_P1_S43L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S44L */
#define IFX_DMU_HP_ECPRIO_P1_S44L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S44L */
#define IFX_DMU_HP_ECPRIO_P1_S44L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S44L */
#define IFX_DMU_HP_ECPRIO_P1_S44L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S45L */
#define IFX_DMU_HP_ECPRIO_P1_S45L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S45L */
#define IFX_DMU_HP_ECPRIO_P1_S45L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S45L */
#define IFX_DMU_HP_ECPRIO_P1_S45L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S46L */
#define IFX_DMU_HP_ECPRIO_P1_S46L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S46L */
#define IFX_DMU_HP_ECPRIO_P1_S46L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S46L */
#define IFX_DMU_HP_ECPRIO_P1_S46L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S47L */
#define IFX_DMU_HP_ECPRIO_P1_S47L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S47L */
#define IFX_DMU_HP_ECPRIO_P1_S47L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S47L */
#define IFX_DMU_HP_ECPRIO_P1_S47L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S48L */
#define IFX_DMU_HP_ECPRIO_P1_S48L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S48L */
#define IFX_DMU_HP_ECPRIO_P1_S48L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S48L */
#define IFX_DMU_HP_ECPRIO_P1_S48L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S49L */
#define IFX_DMU_HP_ECPRIO_P1_S49L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S49L */
#define IFX_DMU_HP_ECPRIO_P1_S49L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S49L */
#define IFX_DMU_HP_ECPRIO_P1_S49L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S50L */
#define IFX_DMU_HP_ECPRIO_P1_S50L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S50L */
#define IFX_DMU_HP_ECPRIO_P1_S50L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S50L */
#define IFX_DMU_HP_ECPRIO_P1_S50L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S51L */
#define IFX_DMU_HP_ECPRIO_P1_S51L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S51L */
#define IFX_DMU_HP_ECPRIO_P1_S51L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S51L */
#define IFX_DMU_HP_ECPRIO_P1_S51L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S52L */
#define IFX_DMU_HP_ECPRIO_P1_S52L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S52L */
#define IFX_DMU_HP_ECPRIO_P1_S52L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S52L */
#define IFX_DMU_HP_ECPRIO_P1_S52L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S53L */
#define IFX_DMU_HP_ECPRIO_P1_S53L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S53L */
#define IFX_DMU_HP_ECPRIO_P1_S53L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S53L */
#define IFX_DMU_HP_ECPRIO_P1_S53L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S54L */
#define IFX_DMU_HP_ECPRIO_P1_S54L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S54L */
#define IFX_DMU_HP_ECPRIO_P1_S54L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S54L */
#define IFX_DMU_HP_ECPRIO_P1_S54L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S55L */
#define IFX_DMU_HP_ECPRIO_P1_S55L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S55L */
#define IFX_DMU_HP_ECPRIO_P1_S55L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S55L */
#define IFX_DMU_HP_ECPRIO_P1_S55L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S56L */
#define IFX_DMU_HP_ECPRIO_P1_S56L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S56L */
#define IFX_DMU_HP_ECPRIO_P1_S56L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S56L */
#define IFX_DMU_HP_ECPRIO_P1_S56L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S57L */
#define IFX_DMU_HP_ECPRIO_P1_S57L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S57L */
#define IFX_DMU_HP_ECPRIO_P1_S57L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S57L */
#define IFX_DMU_HP_ECPRIO_P1_S57L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S58L */
#define IFX_DMU_HP_ECPRIO_P1_S58L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S58L */
#define IFX_DMU_HP_ECPRIO_P1_S58L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S58L */
#define IFX_DMU_HP_ECPRIO_P1_S58L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S59L */
#define IFX_DMU_HP_ECPRIO_P1_S59L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S59L */
#define IFX_DMU_HP_ECPRIO_P1_S59L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S59L */
#define IFX_DMU_HP_ECPRIO_P1_S59L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S60L */
#define IFX_DMU_HP_ECPRIO_P1_S60L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S60L */
#define IFX_DMU_HP_ECPRIO_P1_S60L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S60L */
#define IFX_DMU_HP_ECPRIO_P1_S60L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S61L */
#define IFX_DMU_HP_ECPRIO_P1_S61L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S61L */
#define IFX_DMU_HP_ECPRIO_P1_S61L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S61L */
#define IFX_DMU_HP_ECPRIO_P1_S61L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S62L */
#define IFX_DMU_HP_ECPRIO_P1_S62L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S62L */
#define IFX_DMU_HP_ECPRIO_P1_S62L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S62L */
#define IFX_DMU_HP_ECPRIO_P1_S62L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P1_Bits.S63L */
#define IFX_DMU_HP_ECPRIO_P1_S63L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P1_Bits.S63L */
#define IFX_DMU_HP_ECPRIO_P1_S63L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P1_Bits.S63L */
#define IFX_DMU_HP_ECPRIO_P1_S63L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S64L */
#define IFX_DMU_HP_ECPRIO_P2_S64L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S64L */
#define IFX_DMU_HP_ECPRIO_P2_S64L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S64L */
#define IFX_DMU_HP_ECPRIO_P2_S64L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S65L */
#define IFX_DMU_HP_ECPRIO_P2_S65L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S65L */
#define IFX_DMU_HP_ECPRIO_P2_S65L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S65L */
#define IFX_DMU_HP_ECPRIO_P2_S65L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S66L */
#define IFX_DMU_HP_ECPRIO_P2_S66L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S66L */
#define IFX_DMU_HP_ECPRIO_P2_S66L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S66L */
#define IFX_DMU_HP_ECPRIO_P2_S66L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S67L */
#define IFX_DMU_HP_ECPRIO_P2_S67L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S67L */
#define IFX_DMU_HP_ECPRIO_P2_S67L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S67L */
#define IFX_DMU_HP_ECPRIO_P2_S67L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S68L */
#define IFX_DMU_HP_ECPRIO_P2_S68L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S68L */
#define IFX_DMU_HP_ECPRIO_P2_S68L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S68L */
#define IFX_DMU_HP_ECPRIO_P2_S68L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S69L */
#define IFX_DMU_HP_ECPRIO_P2_S69L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S69L */
#define IFX_DMU_HP_ECPRIO_P2_S69L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S69L */
#define IFX_DMU_HP_ECPRIO_P2_S69L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S70L */
#define IFX_DMU_HP_ECPRIO_P2_S70L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S70L */
#define IFX_DMU_HP_ECPRIO_P2_S70L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S70L */
#define IFX_DMU_HP_ECPRIO_P2_S70L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S71L */
#define IFX_DMU_HP_ECPRIO_P2_S71L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S71L */
#define IFX_DMU_HP_ECPRIO_P2_S71L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S71L */
#define IFX_DMU_HP_ECPRIO_P2_S71L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S72L */
#define IFX_DMU_HP_ECPRIO_P2_S72L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S72L */
#define IFX_DMU_HP_ECPRIO_P2_S72L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S72L */
#define IFX_DMU_HP_ECPRIO_P2_S72L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S73L */
#define IFX_DMU_HP_ECPRIO_P2_S73L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S73L */
#define IFX_DMU_HP_ECPRIO_P2_S73L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S73L */
#define IFX_DMU_HP_ECPRIO_P2_S73L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S74L */
#define IFX_DMU_HP_ECPRIO_P2_S74L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S74L */
#define IFX_DMU_HP_ECPRIO_P2_S74L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S74L */
#define IFX_DMU_HP_ECPRIO_P2_S74L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S75L */
#define IFX_DMU_HP_ECPRIO_P2_S75L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S75L */
#define IFX_DMU_HP_ECPRIO_P2_S75L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S75L */
#define IFX_DMU_HP_ECPRIO_P2_S75L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S76L */
#define IFX_DMU_HP_ECPRIO_P2_S76L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S76L */
#define IFX_DMU_HP_ECPRIO_P2_S76L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S76L */
#define IFX_DMU_HP_ECPRIO_P2_S76L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S77L */
#define IFX_DMU_HP_ECPRIO_P2_S77L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S77L */
#define IFX_DMU_HP_ECPRIO_P2_S77L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S77L */
#define IFX_DMU_HP_ECPRIO_P2_S77L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S78L */
#define IFX_DMU_HP_ECPRIO_P2_S78L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S78L */
#define IFX_DMU_HP_ECPRIO_P2_S78L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S78L */
#define IFX_DMU_HP_ECPRIO_P2_S78L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S79L */
#define IFX_DMU_HP_ECPRIO_P2_S79L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S79L */
#define IFX_DMU_HP_ECPRIO_P2_S79L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S79L */
#define IFX_DMU_HP_ECPRIO_P2_S79L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S80L */
#define IFX_DMU_HP_ECPRIO_P2_S80L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S80L */
#define IFX_DMU_HP_ECPRIO_P2_S80L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S80L */
#define IFX_DMU_HP_ECPRIO_P2_S80L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S81L */
#define IFX_DMU_HP_ECPRIO_P2_S81L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S81L */
#define IFX_DMU_HP_ECPRIO_P2_S81L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S81L */
#define IFX_DMU_HP_ECPRIO_P2_S81L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S82L */
#define IFX_DMU_HP_ECPRIO_P2_S82L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S82L */
#define IFX_DMU_HP_ECPRIO_P2_S82L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S82L */
#define IFX_DMU_HP_ECPRIO_P2_S82L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S83L */
#define IFX_DMU_HP_ECPRIO_P2_S83L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S83L */
#define IFX_DMU_HP_ECPRIO_P2_S83L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S83L */
#define IFX_DMU_HP_ECPRIO_P2_S83L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S84L */
#define IFX_DMU_HP_ECPRIO_P2_S84L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S84L */
#define IFX_DMU_HP_ECPRIO_P2_S84L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S84L */
#define IFX_DMU_HP_ECPRIO_P2_S84L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S85L */
#define IFX_DMU_HP_ECPRIO_P2_S85L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S85L */
#define IFX_DMU_HP_ECPRIO_P2_S85L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S85L */
#define IFX_DMU_HP_ECPRIO_P2_S85L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S86L */
#define IFX_DMU_HP_ECPRIO_P2_S86L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S86L */
#define IFX_DMU_HP_ECPRIO_P2_S86L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S86L */
#define IFX_DMU_HP_ECPRIO_P2_S86L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S87L */
#define IFX_DMU_HP_ECPRIO_P2_S87L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S87L */
#define IFX_DMU_HP_ECPRIO_P2_S87L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S87L */
#define IFX_DMU_HP_ECPRIO_P2_S87L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S88L */
#define IFX_DMU_HP_ECPRIO_P2_S88L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S88L */
#define IFX_DMU_HP_ECPRIO_P2_S88L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S88L */
#define IFX_DMU_HP_ECPRIO_P2_S88L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S89L */
#define IFX_DMU_HP_ECPRIO_P2_S89L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S89L */
#define IFX_DMU_HP_ECPRIO_P2_S89L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S89L */
#define IFX_DMU_HP_ECPRIO_P2_S89L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S90L */
#define IFX_DMU_HP_ECPRIO_P2_S90L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S90L */
#define IFX_DMU_HP_ECPRIO_P2_S90L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S90L */
#define IFX_DMU_HP_ECPRIO_P2_S90L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S91L */
#define IFX_DMU_HP_ECPRIO_P2_S91L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S91L */
#define IFX_DMU_HP_ECPRIO_P2_S91L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S91L */
#define IFX_DMU_HP_ECPRIO_P2_S91L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S92L */
#define IFX_DMU_HP_ECPRIO_P2_S92L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S92L */
#define IFX_DMU_HP_ECPRIO_P2_S92L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S92L */
#define IFX_DMU_HP_ECPRIO_P2_S92L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S93L */
#define IFX_DMU_HP_ECPRIO_P2_S93L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S93L */
#define IFX_DMU_HP_ECPRIO_P2_S93L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S93L */
#define IFX_DMU_HP_ECPRIO_P2_S93L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S94L */
#define IFX_DMU_HP_ECPRIO_P2_S94L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S94L */
#define IFX_DMU_HP_ECPRIO_P2_S94L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S94L */
#define IFX_DMU_HP_ECPRIO_P2_S94L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P2_Bits.S95L */
#define IFX_DMU_HP_ECPRIO_P2_S95L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P2_Bits.S95L */
#define IFX_DMU_HP_ECPRIO_P2_S95L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P2_Bits.S95L */
#define IFX_DMU_HP_ECPRIO_P2_S95L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S96L */
#define IFX_DMU_HP_ECPRIO_P3_S96L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S96L */
#define IFX_DMU_HP_ECPRIO_P3_S96L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S96L */
#define IFX_DMU_HP_ECPRIO_P3_S96L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S97L */
#define IFX_DMU_HP_ECPRIO_P3_S97L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S97L */
#define IFX_DMU_HP_ECPRIO_P3_S97L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S97L */
#define IFX_DMU_HP_ECPRIO_P3_S97L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S98L */
#define IFX_DMU_HP_ECPRIO_P3_S98L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S98L */
#define IFX_DMU_HP_ECPRIO_P3_S98L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S98L */
#define IFX_DMU_HP_ECPRIO_P3_S98L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S99L */
#define IFX_DMU_HP_ECPRIO_P3_S99L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S99L */
#define IFX_DMU_HP_ECPRIO_P3_S99L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S99L */
#define IFX_DMU_HP_ECPRIO_P3_S99L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S100L */
#define IFX_DMU_HP_ECPRIO_P3_S100L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S100L */
#define IFX_DMU_HP_ECPRIO_P3_S100L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S100L */
#define IFX_DMU_HP_ECPRIO_P3_S100L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S101L */
#define IFX_DMU_HP_ECPRIO_P3_S101L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S101L */
#define IFX_DMU_HP_ECPRIO_P3_S101L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S101L */
#define IFX_DMU_HP_ECPRIO_P3_S101L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S102L */
#define IFX_DMU_HP_ECPRIO_P3_S102L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S102L */
#define IFX_DMU_HP_ECPRIO_P3_S102L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S102L */
#define IFX_DMU_HP_ECPRIO_P3_S102L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S103L */
#define IFX_DMU_HP_ECPRIO_P3_S103L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S103L */
#define IFX_DMU_HP_ECPRIO_P3_S103L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S103L */
#define IFX_DMU_HP_ECPRIO_P3_S103L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S104L */
#define IFX_DMU_HP_ECPRIO_P3_S104L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S104L */
#define IFX_DMU_HP_ECPRIO_P3_S104L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S104L */
#define IFX_DMU_HP_ECPRIO_P3_S104L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S105L */
#define IFX_DMU_HP_ECPRIO_P3_S105L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S105L */
#define IFX_DMU_HP_ECPRIO_P3_S105L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S105L */
#define IFX_DMU_HP_ECPRIO_P3_S105L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S106L */
#define IFX_DMU_HP_ECPRIO_P3_S106L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S106L */
#define IFX_DMU_HP_ECPRIO_P3_S106L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S106L */
#define IFX_DMU_HP_ECPRIO_P3_S106L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S107L */
#define IFX_DMU_HP_ECPRIO_P3_S107L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S107L */
#define IFX_DMU_HP_ECPRIO_P3_S107L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S107L */
#define IFX_DMU_HP_ECPRIO_P3_S107L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S108L */
#define IFX_DMU_HP_ECPRIO_P3_S108L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S108L */
#define IFX_DMU_HP_ECPRIO_P3_S108L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S108L */
#define IFX_DMU_HP_ECPRIO_P3_S108L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S109L */
#define IFX_DMU_HP_ECPRIO_P3_S109L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S109L */
#define IFX_DMU_HP_ECPRIO_P3_S109L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S109L */
#define IFX_DMU_HP_ECPRIO_P3_S109L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S110L */
#define IFX_DMU_HP_ECPRIO_P3_S110L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S110L */
#define IFX_DMU_HP_ECPRIO_P3_S110L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S110L */
#define IFX_DMU_HP_ECPRIO_P3_S110L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S111L */
#define IFX_DMU_HP_ECPRIO_P3_S111L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S111L */
#define IFX_DMU_HP_ECPRIO_P3_S111L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S111L */
#define IFX_DMU_HP_ECPRIO_P3_S111L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S112L */
#define IFX_DMU_HP_ECPRIO_P3_S112L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S112L */
#define IFX_DMU_HP_ECPRIO_P3_S112L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S112L */
#define IFX_DMU_HP_ECPRIO_P3_S112L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S113L */
#define IFX_DMU_HP_ECPRIO_P3_S113L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S113L */
#define IFX_DMU_HP_ECPRIO_P3_S113L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S113L */
#define IFX_DMU_HP_ECPRIO_P3_S113L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S114L */
#define IFX_DMU_HP_ECPRIO_P3_S114L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S114L */
#define IFX_DMU_HP_ECPRIO_P3_S114L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S114L */
#define IFX_DMU_HP_ECPRIO_P3_S114L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S115L */
#define IFX_DMU_HP_ECPRIO_P3_S115L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S115L */
#define IFX_DMU_HP_ECPRIO_P3_S115L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S115L */
#define IFX_DMU_HP_ECPRIO_P3_S115L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S116L */
#define IFX_DMU_HP_ECPRIO_P3_S116L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S116L */
#define IFX_DMU_HP_ECPRIO_P3_S116L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S116L */
#define IFX_DMU_HP_ECPRIO_P3_S116L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S117L */
#define IFX_DMU_HP_ECPRIO_P3_S117L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S117L */
#define IFX_DMU_HP_ECPRIO_P3_S117L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S117L */
#define IFX_DMU_HP_ECPRIO_P3_S117L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S118L */
#define IFX_DMU_HP_ECPRIO_P3_S118L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S118L */
#define IFX_DMU_HP_ECPRIO_P3_S118L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S118L */
#define IFX_DMU_HP_ECPRIO_P3_S118L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S119L */
#define IFX_DMU_HP_ECPRIO_P3_S119L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S119L */
#define IFX_DMU_HP_ECPRIO_P3_S119L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S119L */
#define IFX_DMU_HP_ECPRIO_P3_S119L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S120L */
#define IFX_DMU_HP_ECPRIO_P3_S120L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S120L */
#define IFX_DMU_HP_ECPRIO_P3_S120L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S120L */
#define IFX_DMU_HP_ECPRIO_P3_S120L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S121L */
#define IFX_DMU_HP_ECPRIO_P3_S121L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S121L */
#define IFX_DMU_HP_ECPRIO_P3_S121L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S121L */
#define IFX_DMU_HP_ECPRIO_P3_S121L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S122L */
#define IFX_DMU_HP_ECPRIO_P3_S122L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S122L */
#define IFX_DMU_HP_ECPRIO_P3_S122L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S122L */
#define IFX_DMU_HP_ECPRIO_P3_S122L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S123L */
#define IFX_DMU_HP_ECPRIO_P3_S123L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S123L */
#define IFX_DMU_HP_ECPRIO_P3_S123L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S123L */
#define IFX_DMU_HP_ECPRIO_P3_S123L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S124L */
#define IFX_DMU_HP_ECPRIO_P3_S124L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S124L */
#define IFX_DMU_HP_ECPRIO_P3_S124L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S124L */
#define IFX_DMU_HP_ECPRIO_P3_S124L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S125L */
#define IFX_DMU_HP_ECPRIO_P3_S125L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S125L */
#define IFX_DMU_HP_ECPRIO_P3_S125L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S125L */
#define IFX_DMU_HP_ECPRIO_P3_S125L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S126L */
#define IFX_DMU_HP_ECPRIO_P3_S126L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S126L */
#define IFX_DMU_HP_ECPRIO_P3_S126L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S126L */
#define IFX_DMU_HP_ECPRIO_P3_S126L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P3_Bits.S127L */
#define IFX_DMU_HP_ECPRIO_P3_S127L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P3_Bits.S127L */
#define IFX_DMU_HP_ECPRIO_P3_S127L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P3_Bits.S127L */
#define IFX_DMU_HP_ECPRIO_P3_S127L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S128L */
#define IFX_DMU_HP_ECPRIO_P4_S128L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S128L */
#define IFX_DMU_HP_ECPRIO_P4_S128L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S128L */
#define IFX_DMU_HP_ECPRIO_P4_S128L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S129L */
#define IFX_DMU_HP_ECPRIO_P4_S129L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S129L */
#define IFX_DMU_HP_ECPRIO_P4_S129L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S129L */
#define IFX_DMU_HP_ECPRIO_P4_S129L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S130L */
#define IFX_DMU_HP_ECPRIO_P4_S130L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S130L */
#define IFX_DMU_HP_ECPRIO_P4_S130L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S130L */
#define IFX_DMU_HP_ECPRIO_P4_S130L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S131L */
#define IFX_DMU_HP_ECPRIO_P4_S131L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S131L */
#define IFX_DMU_HP_ECPRIO_P4_S131L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S131L */
#define IFX_DMU_HP_ECPRIO_P4_S131L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S132L */
#define IFX_DMU_HP_ECPRIO_P4_S132L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S132L */
#define IFX_DMU_HP_ECPRIO_P4_S132L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S132L */
#define IFX_DMU_HP_ECPRIO_P4_S132L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S133L */
#define IFX_DMU_HP_ECPRIO_P4_S133L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S133L */
#define IFX_DMU_HP_ECPRIO_P4_S133L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S133L */
#define IFX_DMU_HP_ECPRIO_P4_S133L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S134L */
#define IFX_DMU_HP_ECPRIO_P4_S134L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S134L */
#define IFX_DMU_HP_ECPRIO_P4_S134L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S134L */
#define IFX_DMU_HP_ECPRIO_P4_S134L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S135L */
#define IFX_DMU_HP_ECPRIO_P4_S135L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S135L */
#define IFX_DMU_HP_ECPRIO_P4_S135L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S135L */
#define IFX_DMU_HP_ECPRIO_P4_S135L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S136L */
#define IFX_DMU_HP_ECPRIO_P4_S136L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S136L */
#define IFX_DMU_HP_ECPRIO_P4_S136L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S136L */
#define IFX_DMU_HP_ECPRIO_P4_S136L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S137L */
#define IFX_DMU_HP_ECPRIO_P4_S137L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S137L */
#define IFX_DMU_HP_ECPRIO_P4_S137L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S137L */
#define IFX_DMU_HP_ECPRIO_P4_S137L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S138L */
#define IFX_DMU_HP_ECPRIO_P4_S138L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S138L */
#define IFX_DMU_HP_ECPRIO_P4_S138L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S138L */
#define IFX_DMU_HP_ECPRIO_P4_S138L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S139L */
#define IFX_DMU_HP_ECPRIO_P4_S139L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S139L */
#define IFX_DMU_HP_ECPRIO_P4_S139L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S139L */
#define IFX_DMU_HP_ECPRIO_P4_S139L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S140L */
#define IFX_DMU_HP_ECPRIO_P4_S140L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S140L */
#define IFX_DMU_HP_ECPRIO_P4_S140L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S140L */
#define IFX_DMU_HP_ECPRIO_P4_S140L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S141L */
#define IFX_DMU_HP_ECPRIO_P4_S141L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S141L */
#define IFX_DMU_HP_ECPRIO_P4_S141L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S141L */
#define IFX_DMU_HP_ECPRIO_P4_S141L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S142L */
#define IFX_DMU_HP_ECPRIO_P4_S142L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S142L */
#define IFX_DMU_HP_ECPRIO_P4_S142L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S142L */
#define IFX_DMU_HP_ECPRIO_P4_S142L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S143L */
#define IFX_DMU_HP_ECPRIO_P4_S143L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S143L */
#define IFX_DMU_HP_ECPRIO_P4_S143L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S143L */
#define IFX_DMU_HP_ECPRIO_P4_S143L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S144L */
#define IFX_DMU_HP_ECPRIO_P4_S144L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S144L */
#define IFX_DMU_HP_ECPRIO_P4_S144L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S144L */
#define IFX_DMU_HP_ECPRIO_P4_S144L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S145L */
#define IFX_DMU_HP_ECPRIO_P4_S145L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S145L */
#define IFX_DMU_HP_ECPRIO_P4_S145L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S145L */
#define IFX_DMU_HP_ECPRIO_P4_S145L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S146L */
#define IFX_DMU_HP_ECPRIO_P4_S146L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S146L */
#define IFX_DMU_HP_ECPRIO_P4_S146L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S146L */
#define IFX_DMU_HP_ECPRIO_P4_S146L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S147L */
#define IFX_DMU_HP_ECPRIO_P4_S147L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S147L */
#define IFX_DMU_HP_ECPRIO_P4_S147L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S147L */
#define IFX_DMU_HP_ECPRIO_P4_S147L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S148L */
#define IFX_DMU_HP_ECPRIO_P4_S148L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S148L */
#define IFX_DMU_HP_ECPRIO_P4_S148L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S148L */
#define IFX_DMU_HP_ECPRIO_P4_S148L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S149L */
#define IFX_DMU_HP_ECPRIO_P4_S149L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S149L */
#define IFX_DMU_HP_ECPRIO_P4_S149L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S149L */
#define IFX_DMU_HP_ECPRIO_P4_S149L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S150L */
#define IFX_DMU_HP_ECPRIO_P4_S150L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S150L */
#define IFX_DMU_HP_ECPRIO_P4_S150L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S150L */
#define IFX_DMU_HP_ECPRIO_P4_S150L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S151L */
#define IFX_DMU_HP_ECPRIO_P4_S151L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S151L */
#define IFX_DMU_HP_ECPRIO_P4_S151L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S151L */
#define IFX_DMU_HP_ECPRIO_P4_S151L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S152L */
#define IFX_DMU_HP_ECPRIO_P4_S152L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S152L */
#define IFX_DMU_HP_ECPRIO_P4_S152L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S152L */
#define IFX_DMU_HP_ECPRIO_P4_S152L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S153L */
#define IFX_DMU_HP_ECPRIO_P4_S153L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S153L */
#define IFX_DMU_HP_ECPRIO_P4_S153L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S153L */
#define IFX_DMU_HP_ECPRIO_P4_S153L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S154L */
#define IFX_DMU_HP_ECPRIO_P4_S154L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S154L */
#define IFX_DMU_HP_ECPRIO_P4_S154L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S154L */
#define IFX_DMU_HP_ECPRIO_P4_S154L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S155L */
#define IFX_DMU_HP_ECPRIO_P4_S155L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S155L */
#define IFX_DMU_HP_ECPRIO_P4_S155L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S155L */
#define IFX_DMU_HP_ECPRIO_P4_S155L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S156L */
#define IFX_DMU_HP_ECPRIO_P4_S156L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S156L */
#define IFX_DMU_HP_ECPRIO_P4_S156L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S156L */
#define IFX_DMU_HP_ECPRIO_P4_S156L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S157L */
#define IFX_DMU_HP_ECPRIO_P4_S157L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S157L */
#define IFX_DMU_HP_ECPRIO_P4_S157L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S157L */
#define IFX_DMU_HP_ECPRIO_P4_S157L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S158L */
#define IFX_DMU_HP_ECPRIO_P4_S158L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S158L */
#define IFX_DMU_HP_ECPRIO_P4_S158L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S158L */
#define IFX_DMU_HP_ECPRIO_P4_S158L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P4_Bits.S159L */
#define IFX_DMU_HP_ECPRIO_P4_S159L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P4_Bits.S159L */
#define IFX_DMU_HP_ECPRIO_P4_S159L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P4_Bits.S159L */
#define IFX_DMU_HP_ECPRIO_P4_S159L_OFF (31u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S160L */
#define IFX_DMU_HP_ECPRIO_P5_S160L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S160L */
#define IFX_DMU_HP_ECPRIO_P5_S160L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S160L */
#define IFX_DMU_HP_ECPRIO_P5_S160L_OFF (0u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S161L */
#define IFX_DMU_HP_ECPRIO_P5_S161L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S161L */
#define IFX_DMU_HP_ECPRIO_P5_S161L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S161L */
#define IFX_DMU_HP_ECPRIO_P5_S161L_OFF (1u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S162L */
#define IFX_DMU_HP_ECPRIO_P5_S162L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S162L */
#define IFX_DMU_HP_ECPRIO_P5_S162L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S162L */
#define IFX_DMU_HP_ECPRIO_P5_S162L_OFF (2u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S163L */
#define IFX_DMU_HP_ECPRIO_P5_S163L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S163L */
#define IFX_DMU_HP_ECPRIO_P5_S163L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S163L */
#define IFX_DMU_HP_ECPRIO_P5_S163L_OFF (3u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S164L */
#define IFX_DMU_HP_ECPRIO_P5_S164L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S164L */
#define IFX_DMU_HP_ECPRIO_P5_S164L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S164L */
#define IFX_DMU_HP_ECPRIO_P5_S164L_OFF (4u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S165L */
#define IFX_DMU_HP_ECPRIO_P5_S165L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S165L */
#define IFX_DMU_HP_ECPRIO_P5_S165L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S165L */
#define IFX_DMU_HP_ECPRIO_P5_S165L_OFF (5u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S166L */
#define IFX_DMU_HP_ECPRIO_P5_S166L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S166L */
#define IFX_DMU_HP_ECPRIO_P5_S166L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S166L */
#define IFX_DMU_HP_ECPRIO_P5_S166L_OFF (6u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S167L */
#define IFX_DMU_HP_ECPRIO_P5_S167L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S167L */
#define IFX_DMU_HP_ECPRIO_P5_S167L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S167L */
#define IFX_DMU_HP_ECPRIO_P5_S167L_OFF (7u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S168L */
#define IFX_DMU_HP_ECPRIO_P5_S168L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S168L */
#define IFX_DMU_HP_ECPRIO_P5_S168L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S168L */
#define IFX_DMU_HP_ECPRIO_P5_S168L_OFF (8u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S169L */
#define IFX_DMU_HP_ECPRIO_P5_S169L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S169L */
#define IFX_DMU_HP_ECPRIO_P5_S169L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S169L */
#define IFX_DMU_HP_ECPRIO_P5_S169L_OFF (9u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S170L */
#define IFX_DMU_HP_ECPRIO_P5_S170L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S170L */
#define IFX_DMU_HP_ECPRIO_P5_S170L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S170L */
#define IFX_DMU_HP_ECPRIO_P5_S170L_OFF (10u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S171L */
#define IFX_DMU_HP_ECPRIO_P5_S171L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S171L */
#define IFX_DMU_HP_ECPRIO_P5_S171L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S171L */
#define IFX_DMU_HP_ECPRIO_P5_S171L_OFF (11u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S172L */
#define IFX_DMU_HP_ECPRIO_P5_S172L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S172L */
#define IFX_DMU_HP_ECPRIO_P5_S172L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S172L */
#define IFX_DMU_HP_ECPRIO_P5_S172L_OFF (12u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S173L */
#define IFX_DMU_HP_ECPRIO_P5_S173L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S173L */
#define IFX_DMU_HP_ECPRIO_P5_S173L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S173L */
#define IFX_DMU_HP_ECPRIO_P5_S173L_OFF (13u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S174L */
#define IFX_DMU_HP_ECPRIO_P5_S174L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S174L */
#define IFX_DMU_HP_ECPRIO_P5_S174L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S174L */
#define IFX_DMU_HP_ECPRIO_P5_S174L_OFF (14u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S175L */
#define IFX_DMU_HP_ECPRIO_P5_S175L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S175L */
#define IFX_DMU_HP_ECPRIO_P5_S175L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S175L */
#define IFX_DMU_HP_ECPRIO_P5_S175L_OFF (15u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S176L */
#define IFX_DMU_HP_ECPRIO_P5_S176L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S176L */
#define IFX_DMU_HP_ECPRIO_P5_S176L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S176L */
#define IFX_DMU_HP_ECPRIO_P5_S176L_OFF (16u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S177L */
#define IFX_DMU_HP_ECPRIO_P5_S177L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S177L */
#define IFX_DMU_HP_ECPRIO_P5_S177L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S177L */
#define IFX_DMU_HP_ECPRIO_P5_S177L_OFF (17u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S178L */
#define IFX_DMU_HP_ECPRIO_P5_S178L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S178L */
#define IFX_DMU_HP_ECPRIO_P5_S178L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S178L */
#define IFX_DMU_HP_ECPRIO_P5_S178L_OFF (18u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S179L */
#define IFX_DMU_HP_ECPRIO_P5_S179L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S179L */
#define IFX_DMU_HP_ECPRIO_P5_S179L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S179L */
#define IFX_DMU_HP_ECPRIO_P5_S179L_OFF (19u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S180L */
#define IFX_DMU_HP_ECPRIO_P5_S180L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S180L */
#define IFX_DMU_HP_ECPRIO_P5_S180L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S180L */
#define IFX_DMU_HP_ECPRIO_P5_S180L_OFF (20u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S181L */
#define IFX_DMU_HP_ECPRIO_P5_S181L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S181L */
#define IFX_DMU_HP_ECPRIO_P5_S181L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S181L */
#define IFX_DMU_HP_ECPRIO_P5_S181L_OFF (21u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S182L */
#define IFX_DMU_HP_ECPRIO_P5_S182L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S182L */
#define IFX_DMU_HP_ECPRIO_P5_S182L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S182L */
#define IFX_DMU_HP_ECPRIO_P5_S182L_OFF (22u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S183L */
#define IFX_DMU_HP_ECPRIO_P5_S183L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S183L */
#define IFX_DMU_HP_ECPRIO_P5_S183L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S183L */
#define IFX_DMU_HP_ECPRIO_P5_S183L_OFF (23u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S184L */
#define IFX_DMU_HP_ECPRIO_P5_S184L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S184L */
#define IFX_DMU_HP_ECPRIO_P5_S184L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S184L */
#define IFX_DMU_HP_ECPRIO_P5_S184L_OFF (24u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S185L */
#define IFX_DMU_HP_ECPRIO_P5_S185L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S185L */
#define IFX_DMU_HP_ECPRIO_P5_S185L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S185L */
#define IFX_DMU_HP_ECPRIO_P5_S185L_OFF (25u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S186L */
#define IFX_DMU_HP_ECPRIO_P5_S186L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S186L */
#define IFX_DMU_HP_ECPRIO_P5_S186L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S186L */
#define IFX_DMU_HP_ECPRIO_P5_S186L_OFF (26u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S187L */
#define IFX_DMU_HP_ECPRIO_P5_S187L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S187L */
#define IFX_DMU_HP_ECPRIO_P5_S187L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S187L */
#define IFX_DMU_HP_ECPRIO_P5_S187L_OFF (27u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S188L */
#define IFX_DMU_HP_ECPRIO_P5_S188L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S188L */
#define IFX_DMU_HP_ECPRIO_P5_S188L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S188L */
#define IFX_DMU_HP_ECPRIO_P5_S188L_OFF (28u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S189L */
#define IFX_DMU_HP_ECPRIO_P5_S189L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S189L */
#define IFX_DMU_HP_ECPRIO_P5_S189L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S189L */
#define IFX_DMU_HP_ECPRIO_P5_S189L_OFF (29u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S190L */
#define IFX_DMU_HP_ECPRIO_P5_S190L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S190L */
#define IFX_DMU_HP_ECPRIO_P5_S190L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S190L */
#define IFX_DMU_HP_ECPRIO_P5_S190L_OFF (30u)

/** \brief Length for Ifx_DMU_HP_ECPRIO_P5_Bits.S191L */
#define IFX_DMU_HP_ECPRIO_P5_S191L_LEN (1u)

/** \brief Mask for Ifx_DMU_HP_ECPRIO_P5_Bits.S191L */
#define IFX_DMU_HP_ECPRIO_P5_S191L_MSK (0x1u)

/** \brief Offset for Ifx_DMU_HP_ECPRIO_P5_Bits.S191L */
#define IFX_DMU_HP_ECPRIO_P5_S191L_OFF (31u)

/** \brief Length for Ifx_DMU_SF_STATUS_Bits.D1BUSY */
#define IFX_DMU_SF_STATUS_D1BUSY_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_STATUS_Bits.D1BUSY */
#define IFX_DMU_SF_STATUS_D1BUSY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_STATUS_Bits.D1BUSY */
#define IFX_DMU_SF_STATUS_D1BUSY_OFF (1u)

/** \brief Length for Ifx_DMU_SF_STATUS_Bits.DFPAGE */
#define IFX_DMU_SF_STATUS_DFPAGE_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_STATUS_Bits.DFPAGE */
#define IFX_DMU_SF_STATUS_DFPAGE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_STATUS_Bits.DFPAGE */
#define IFX_DMU_SF_STATUS_DFPAGE_OFF (20u)

/** \brief Length for Ifx_DMU_SF_CONTROL_Bits.LCKHSMUCB */
#define IFX_DMU_SF_CONTROL_LCKHSMUCB_LEN (2u)

/** \brief Mask for Ifx_DMU_SF_CONTROL_Bits.LCKHSMUCB */
#define IFX_DMU_SF_CONTROL_LCKHSMUCB_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SF_CONTROL_Bits.LCKHSMUCB */
#define IFX_DMU_SF_CONTROL_LCKHSMUCB_OFF (0u)

/** \brief Length for Ifx_DMU_SF_CONTROL_Bits.CPROG */
#define IFX_DMU_SF_CONTROL_CPROG_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_CONTROL_Bits.CPROG */
#define IFX_DMU_SF_CONTROL_CPROG_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_CONTROL_Bits.CPROG */
#define IFX_DMU_SF_CONTROL_CPROG_OFF (16u)

/** \brief Length for Ifx_DMU_SF_CONTROL_Bits.CERASE */
#define IFX_DMU_SF_CONTROL_CERASE_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_CONTROL_Bits.CERASE */
#define IFX_DMU_SF_CONTROL_CERASE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_CONTROL_Bits.CERASE */
#define IFX_DMU_SF_CONTROL_CERASE_OFF (17u)

/** \brief Length for Ifx_DMU_SF_OPERATION_Bits.PROG */
#define IFX_DMU_SF_OPERATION_PROG_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_OPERATION_Bits.PROG */
#define IFX_DMU_SF_OPERATION_PROG_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_OPERATION_Bits.PROG */
#define IFX_DMU_SF_OPERATION_PROG_OFF (0u)

/** \brief Length for Ifx_DMU_SF_OPERATION_Bits.ERASE */
#define IFX_DMU_SF_OPERATION_ERASE_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_OPERATION_Bits.ERASE */
#define IFX_DMU_SF_OPERATION_ERASE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_OPERATION_Bits.ERASE */
#define IFX_DMU_SF_OPERATION_ERASE_OFF (1u)

/** \brief Length for Ifx_DMU_SF_EER_Bits.OPERM */
#define IFX_DMU_SF_EER_OPERM_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_EER_Bits.OPERM */
#define IFX_DMU_SF_EER_OPERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_EER_Bits.OPERM */
#define IFX_DMU_SF_EER_OPERM_OFF (0u)

/** \brief Length for Ifx_DMU_SF_EER_Bits.SQERM */
#define IFX_DMU_SF_EER_SQERM_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_EER_Bits.SQERM */
#define IFX_DMU_SF_EER_SQERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_EER_Bits.SQERM */
#define IFX_DMU_SF_EER_SQERM_OFF (1u)

/** \brief Length for Ifx_DMU_SF_EER_Bits.PVERM */
#define IFX_DMU_SF_EER_PVERM_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_EER_Bits.PVERM */
#define IFX_DMU_SF_EER_PVERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_EER_Bits.PVERM */
#define IFX_DMU_SF_EER_PVERM_OFF (3u)

/** \brief Length for Ifx_DMU_SF_EER_Bits.EVERM */
#define IFX_DMU_SF_EER_EVERM_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_EER_Bits.EVERM */
#define IFX_DMU_SF_EER_EVERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_EER_Bits.EVERM */
#define IFX_DMU_SF_EER_EVERM_OFF (4u)

/** \brief Length for Ifx_DMU_SF_EER_Bits.EOBM */
#define IFX_DMU_SF_EER_EOBM_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_EER_Bits.EOBM */
#define IFX_DMU_SF_EER_EOBM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_EER_Bits.EOBM */
#define IFX_DMU_SF_EER_EOBM_OFF (31u)

/** \brief Length for Ifx_DMU_SF_ERRSR_Bits.OPER */
#define IFX_DMU_SF_ERRSR_OPER_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ERRSR_Bits.OPER */
#define IFX_DMU_SF_ERRSR_OPER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ERRSR_Bits.OPER */
#define IFX_DMU_SF_ERRSR_OPER_OFF (0u)

/** \brief Length for Ifx_DMU_SF_ERRSR_Bits.SQER */
#define IFX_DMU_SF_ERRSR_SQER_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ERRSR_Bits.SQER */
#define IFX_DMU_SF_ERRSR_SQER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ERRSR_Bits.SQER */
#define IFX_DMU_SF_ERRSR_SQER_OFF (1u)

/** \brief Length for Ifx_DMU_SF_ERRSR_Bits.PVER */
#define IFX_DMU_SF_ERRSR_PVER_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ERRSR_Bits.PVER */
#define IFX_DMU_SF_ERRSR_PVER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ERRSR_Bits.PVER */
#define IFX_DMU_SF_ERRSR_PVER_OFF (3u)

/** \brief Length for Ifx_DMU_SF_ERRSR_Bits.EVER */
#define IFX_DMU_SF_ERRSR_EVER_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ERRSR_Bits.EVER */
#define IFX_DMU_SF_ERRSR_EVER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ERRSR_Bits.EVER */
#define IFX_DMU_SF_ERRSR_EVER_OFF (4u)

/** \brief Length for Ifx_DMU_SF_CLRE_Bits.CSQER */
#define IFX_DMU_SF_CLRE_CSQER_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_CLRE_Bits.CSQER */
#define IFX_DMU_SF_CLRE_CSQER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_CLRE_Bits.CSQER */
#define IFX_DMU_SF_CLRE_CSQER_OFF (1u)

/** \brief Length for Ifx_DMU_SF_CLRE_Bits.CPVER */
#define IFX_DMU_SF_CLRE_CPVER_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_CLRE_Bits.CPVER */
#define IFX_DMU_SF_CLRE_CPVER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_CLRE_Bits.CPVER */
#define IFX_DMU_SF_CLRE_CPVER_OFF (3u)

/** \brief Length for Ifx_DMU_SF_CLRE_Bits.CEVER */
#define IFX_DMU_SF_CLRE_CEVER_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_CLRE_Bits.CEVER */
#define IFX_DMU_SF_CLRE_CEVER_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_CLRE_Bits.CEVER */
#define IFX_DMU_SF_CLRE_CEVER_OFF (4u)

/** \brief Length for Ifx_DMU_SF_ECCR_Bits.RCODE */
#define IFX_DMU_SF_ECCR_RCODE_LEN (22u)

/** \brief Mask for Ifx_DMU_SF_ECCR_Bits.RCODE */
#define IFX_DMU_SF_ECCR_RCODE_MSK (0x3fffffu)

/** \brief Offset for Ifx_DMU_SF_ECCR_Bits.RCODE */
#define IFX_DMU_SF_ECCR_RCODE_OFF (0u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.ERR1 */
#define IFX_DMU_SF_ECCS_ERR1_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.ERR1 */
#define IFX_DMU_SF_ECCS_ERR1_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.ERR1 */
#define IFX_DMU_SF_ECCS_ERR1_OFF (0u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.ERR2 */
#define IFX_DMU_SF_ECCS_ERR2_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.ERR2 */
#define IFX_DMU_SF_ECCS_ERR2_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.ERR2 */
#define IFX_DMU_SF_ECCS_ERR2_OFF (1u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.ERR3 */
#define IFX_DMU_SF_ECCS_ERR3_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.ERR3 */
#define IFX_DMU_SF_ECCS_ERR3_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.ERR3 */
#define IFX_DMU_SF_ECCS_ERR3_OFF (2u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.ERRM */
#define IFX_DMU_SF_ECCS_ERRM_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.ERRM */
#define IFX_DMU_SF_ECCS_ERRM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.ERRM */
#define IFX_DMU_SF_ECCS_ERRM_OFF (3u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.ERRANY */
#define IFX_DMU_SF_ECCS_ERRANY_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.ERRANY */
#define IFX_DMU_SF_ECCS_ERRANY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.ERRANY */
#define IFX_DMU_SF_ECCS_ERRANY_OFF (7u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.BLANKA */
#define IFX_DMU_SF_ECCS_BLANKA_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.BLANKA */
#define IFX_DMU_SF_ECCS_BLANKA_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.BLANKA */
#define IFX_DMU_SF_ECCS_BLANKA_OFF (9u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.AER1 */
#define IFX_DMU_SF_ECCS_AER1_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.AER1 */
#define IFX_DMU_SF_ECCS_AER1_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.AER1 */
#define IFX_DMU_SF_ECCS_AER1_OFF (16u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.AER2 */
#define IFX_DMU_SF_ECCS_AER2_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.AER2 */
#define IFX_DMU_SF_ECCS_AER2_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.AER2 */
#define IFX_DMU_SF_ECCS_AER2_OFF (17u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.AER3 */
#define IFX_DMU_SF_ECCS_AER3_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.AER3 */
#define IFX_DMU_SF_ECCS_AER3_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.AER3 */
#define IFX_DMU_SF_ECCS_AER3_OFF (18u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.AERM */
#define IFX_DMU_SF_ECCS_AERM_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.AERM */
#define IFX_DMU_SF_ECCS_AERM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.AERM */
#define IFX_DMU_SF_ECCS_AERM_OFF (19u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.AERANY */
#define IFX_DMU_SF_ECCS_AERANY_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.AERANY */
#define IFX_DMU_SF_ECCS_AERANY_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.AERANY */
#define IFX_DMU_SF_ECCS_AERANY_OFF (23u)

/** \brief Length for Ifx_DMU_SF_ECCS_Bits.ABLANKA */
#define IFX_DMU_SF_ECCS_ABLANKA_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_ECCS_Bits.ABLANKA */
#define IFX_DMU_SF_ECCS_ABLANKA_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_ECCS_Bits.ABLANKA */
#define IFX_DMU_SF_ECCS_ABLANKA_OFF (25u)

/** \brief Length for Ifx_DMU_SF_ECCC_Bits.CLR */
#define IFX_DMU_SF_ECCC_CLR_LEN (2u)

/** \brief Mask for Ifx_DMU_SF_ECCC_Bits.CLR */
#define IFX_DMU_SF_ECCC_CLR_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SF_ECCC_Bits.CLR */
#define IFX_DMU_SF_ECCC_CLR_OFF (0u)

/** \brief Length for Ifx_DMU_SF_ECCC_Bits.ECCCORDIS */
#define IFX_DMU_SF_ECCC_ECCCORDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_SF_ECCC_Bits.ECCCORDIS */
#define IFX_DMU_SF_ECCC_ECCCORDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SF_ECCC_Bits.ECCCORDIS */
#define IFX_DMU_SF_ECCC_ECCCORDIS_OFF (28u)

/** \brief Length for Ifx_DMU_SF_ECCC_Bits.TRAPDIS */
#define IFX_DMU_SF_ECCC_TRAPDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_SF_ECCC_Bits.TRAPDIS */
#define IFX_DMU_SF_ECCC_TRAPDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SF_ECCC_Bits.TRAPDIS */
#define IFX_DMU_SF_ECCC_TRAPDIS_OFF (30u)

/** \brief Length for Ifx_DMU_SF_ECCW_Bits.WCODE */
#define IFX_DMU_SF_ECCW_WCODE_LEN (22u)

/** \brief Mask for Ifx_DMU_SF_ECCW_Bits.WCODE */
#define IFX_DMU_SF_ECCW_WCODE_MSK (0x3fffffu)

/** \brief Offset for Ifx_DMU_SF_ECCW_Bits.WCODE */
#define IFX_DMU_SF_ECCW_WCODE_OFF (0u)

/** \brief Length for Ifx_DMU_SF_ECCW_Bits.ECCENCDIS */
#define IFX_DMU_SF_ECCW_ECCENCDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_SF_ECCW_Bits.ECCENCDIS */
#define IFX_DMU_SF_ECCW_ECCENCDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SF_ECCW_Bits.ECCENCDIS */
#define IFX_DMU_SF_ECCW_ECCENCDIS_OFF (30u)

/** \brief Length for Ifx_DMU_SF_PROCONUSR_Bits.MODE */
#define IFX_DMU_SF_PROCONUSR_MODE_LEN (2u)

/** \brief Mask for Ifx_DMU_SF_PROCONUSR_Bits.MODE */
#define IFX_DMU_SF_PROCONUSR_MODE_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SF_PROCONUSR_Bits.MODE */
#define IFX_DMU_SF_PROCONUSR_MODE_OFF (0u)

/** \brief Length for Ifx_DMU_SF_SUSPEND_Bits.REQ */
#define IFX_DMU_SF_SUSPEND_REQ_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_SUSPEND_Bits.REQ */
#define IFX_DMU_SF_SUSPEND_REQ_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_SUSPEND_Bits.REQ */
#define IFX_DMU_SF_SUSPEND_REQ_OFF (0u)

/** \brief Length for Ifx_DMU_SF_SUSPEND_Bits.CLR */
#define IFX_DMU_SF_SUSPEND_CLR_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_SUSPEND_Bits.CLR */
#define IFX_DMU_SF_SUSPEND_CLR_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_SUSPEND_Bits.CLR */
#define IFX_DMU_SF_SUSPEND_CLR_OFF (1u)

/** \brief Length for Ifx_DMU_SF_SUSPEND_Bits.SPND */
#define IFX_DMU_SF_SUSPEND_SPND_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_SUSPEND_Bits.SPND */
#define IFX_DMU_SF_SUSPEND_SPND_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_SUSPEND_Bits.SPND */
#define IFX_DMU_SF_SUSPEND_SPND_OFF (16u)

/** \brief Length for Ifx_DMU_SF_SUSPEND_Bits.ERR */
#define IFX_DMU_SF_SUSPEND_ERR_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_SUSPEND_Bits.ERR */
#define IFX_DMU_SF_SUSPEND_ERR_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_SUSPEND_Bits.ERR */
#define IFX_DMU_SF_SUSPEND_ERR_OFF (17u)

/** \brief Length for Ifx_DMU_SF_MARGIN_Bits.SELD1 */
#define IFX_DMU_SF_MARGIN_SELD1_LEN (2u)

/** \brief Mask for Ifx_DMU_SF_MARGIN_Bits.SELD1 */
#define IFX_DMU_SF_MARGIN_SELD1_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SF_MARGIN_Bits.SELD1 */
#define IFX_DMU_SF_MARGIN_SELD1_OFF (0u)

/** \brief Length for Ifx_DMU_SF_MARGIN_Bits.HMARGIN */
#define IFX_DMU_SF_MARGIN_HMARGIN_LEN (1u)

/** \brief Mask for Ifx_DMU_SF_MARGIN_Bits.HMARGIN */
#define IFX_DMU_SF_MARGIN_HMARGIN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SF_MARGIN_Bits.HMARGIN */
#define IFX_DMU_SF_MARGIN_HMARGIN_OFF (8u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMBOOTEN */
#define IFX_DMU_SP_PROCONHSMCFG_HSMBOOTEN_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMBOOTEN */
#define IFX_DMU_SP_PROCONHSMCFG_HSMBOOTEN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMBOOTEN */
#define IFX_DMU_SP_PROCONHSMCFG_HSMBOOTEN_OFF (0u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCFG_Bits.SSWWAIT */
#define IFX_DMU_SP_PROCONHSMCFG_SSWWAIT_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCFG_Bits.SSWWAIT */
#define IFX_DMU_SP_PROCONHSMCFG_SSWWAIT_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCFG_Bits.SSWWAIT */
#define IFX_DMU_SP_PROCONHSMCFG_SSWWAIT_OFF (1u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMDX */
#define IFX_DMU_SP_PROCONHSMCFG_HSMDX_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMDX */
#define IFX_DMU_SP_PROCONHSMCFG_HSMDX_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMDX */
#define IFX_DMU_SP_PROCONHSMCFG_HSMDX_OFF (2u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMRAMKEEP */
#define IFX_DMU_SP_PROCONHSMCFG_HSMRAMKEEP_LEN (2u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMRAMKEEP */
#define IFX_DMU_SP_PROCONHSMCFG_HSMRAMKEEP_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMRAMKEEP */
#define IFX_DMU_SP_PROCONHSMCFG_HSMRAMKEEP_OFF (4u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMENPINS */
#define IFX_DMU_SP_PROCONHSMCFG_HSMENPINS_LEN (2u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMENPINS */
#define IFX_DMU_SP_PROCONHSMCFG_HSMENPINS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMENPINS */
#define IFX_DMU_SP_PROCONHSMCFG_HSMENPINS_OFF (7u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMENRES */
#define IFX_DMU_SP_PROCONHSMCFG_HSMENRES_LEN (2u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMENRES */
#define IFX_DMU_SP_PROCONHSMCFG_HSMENRES_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCFG_Bits.HSMENRES */
#define IFX_DMU_SP_PROCONHSMCFG_HSMENRES_OFF (9u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCFG_Bits.DESTDBG */
#define IFX_DMU_SP_PROCONHSMCFG_DESTDBG_LEN (2u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCFG_Bits.DESTDBG */
#define IFX_DMU_SP_PROCONHSMCFG_DESTDBG_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCFG_Bits.DESTDBG */
#define IFX_DMU_SP_PROCONHSMCFG_DESTDBG_OFF (11u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCFG_Bits.BLKFLAN */
#define IFX_DMU_SP_PROCONHSMCFG_BLKFLAN_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCFG_Bits.BLKFLAN */
#define IFX_DMU_SP_PROCONHSMCFG_BLKFLAN_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCFG_Bits.BLKFLAN */
#define IFX_DMU_SP_PROCONHSMCFG_BLKFLAN_OFF (13u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL0 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL0_LEN (6u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL0 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL0_MSK (0x3fu)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL0 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL0_OFF (0u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL1 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL1_LEN (6u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL1 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL1_MSK (0x3fu)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL1 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL1_OFF (8u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL2 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL2_LEN (6u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL2 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL2_MSK (0x3fu)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL2 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL2_OFF (16u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL3 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL3_LEN (6u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL3 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL3_MSK (0x3fu)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCBS_Bits.BOOTSEL3 */
#define IFX_DMU_SP_PROCONHSMCBS_BOOTSEL3_OFF (24u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM0X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM0X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM0X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM0X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM0X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM0X_OFF (0u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM1X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM1X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM1X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM1X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM1X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM1X_OFF (1u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM2X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM2X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM2X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM2X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM2X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM2X_OFF (2u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM3X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM3X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM3X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM3X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM3X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM3X_OFF (3u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM4X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM4X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM4X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM4X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM4X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM4X_OFF (4u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM5X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM5X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM5X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM5X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM5X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM5X_OFF (5u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM6X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM6X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM6X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM6X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM6X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM6X_OFF (6u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM7X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM7X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM7X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM7X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM7X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM7X_OFF (7u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM8X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM8X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM8X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM8X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM8X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM8X_OFF (8u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM9X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM9X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM9X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM9X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM9X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM9X_OFF (9u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM10X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM10X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM10X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM10X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM10X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM10X_OFF (10u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM11X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM11X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM11X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM11X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM11X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM11X_OFF (11u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM12X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM12X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM12X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM12X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM12X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM12X_OFF (12u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM13X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM13X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM13X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM13X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM13X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM13X_OFF (13u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM14X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM14X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM14X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM14X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM14X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM14X_OFF (14u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM15X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM15X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM15X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM15X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM15X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM15X_OFF (15u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM16X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM16X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM16X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM16X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM16X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM16X_OFF (16u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM17X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM17X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM17X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM17X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM17X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM17X_OFF (17u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM18X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM18X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM18X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM18X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM18X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM18X_OFF (18u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM19X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM19X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM19X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM19X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM19X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM19X_OFF (19u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM20X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM20X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM20X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM20X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM20X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM20X_OFF (20u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM21X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM21X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM21X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM21X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM21X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM21X_OFF (21u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM22X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM22X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM22X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM22X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM22X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM22X_OFF (22u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM23X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM23X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM23X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM23X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM23X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM23X_OFF (23u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM24X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM24X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM24X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM24X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM24X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM24X_OFF (24u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM25X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM25X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM25X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM25X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM25X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM25X_OFF (25u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM26X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM26X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM26X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM26X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM26X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM26X_OFF (26u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM27X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM27X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM27X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM27X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM27X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM27X_OFF (27u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM28X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM28X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM28X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM28X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM28X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM28X_OFF (28u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM29X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM29X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM29X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM29X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM29X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM29X_OFF (29u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM30X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM30X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM30X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM30X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM30X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM30X_OFF (30u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM31X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM31X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM31X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM31X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX0_Bits.HSM31X */
#define IFX_DMU_SP_PROCONHSMCX0_HSM31X_OFF (31u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM32X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM32X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM32X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM32X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM32X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM32X_OFF (0u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM33X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM33X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM33X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM33X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM33X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM33X_OFF (1u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM34X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM34X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM34X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM34X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM34X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM34X_OFF (2u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM35X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM35X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM35X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM35X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM35X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM35X_OFF (3u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM36X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM36X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM36X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM36X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM36X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM36X_OFF (4u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM37X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM37X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM37X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM37X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM37X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM37X_OFF (5u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM38X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM38X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM38X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM38X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM38X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM38X_OFF (6u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM39X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM39X_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM39X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM39X_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCX1_Bits.HSM39X */
#define IFX_DMU_SP_PROCONHSMCX1_HSM39X_OFF (7u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM0ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM0ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM0ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM0ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM0ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM0ROM_OFF (0u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM1ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM1ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM1ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM1ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM1ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM1ROM_OFF (1u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM2ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM2ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM2ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM2ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM2ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM2ROM_OFF (2u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM3ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM3ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM3ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM3ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM3ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM3ROM_OFF (3u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM4ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM4ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM4ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM4ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM4ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM4ROM_OFF (4u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM5ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM5ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM5ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM5ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM5ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM5ROM_OFF (5u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM6ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM6ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM6ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM6ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM6ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM6ROM_OFF (6u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM7ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM7ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM7ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM7ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM7ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM7ROM_OFF (7u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM8ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM8ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM8ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM8ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM8ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM8ROM_OFF (8u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM9ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM9ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM9ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM9ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM9ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM9ROM_OFF (9u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM10ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM10ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM10ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM10ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM10ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM10ROM_OFF (10u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM11ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM11ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM11ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM11ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM11ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM11ROM_OFF (11u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM12ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM12ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM12ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM12ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM12ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM12ROM_OFF (12u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM13ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM13ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM13ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM13ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM13ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM13ROM_OFF (13u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM14ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM14ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM14ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM14ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM14ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM14ROM_OFF (14u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM15ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM15ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM15ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM15ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM15ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM15ROM_OFF (15u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM16ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM16ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM16ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM16ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM16ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM16ROM_OFF (16u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM17ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM17ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM17ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM17ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM17ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM17ROM_OFF (17u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM18ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM18ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM18ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM18ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM18ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM18ROM_OFF (18u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM19ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM19ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM19ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM19ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM19ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM19ROM_OFF (19u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM20ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM20ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM20ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM20ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM20ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM20ROM_OFF (20u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM21ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM21ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM21ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM21ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM21ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM21ROM_OFF (21u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM22ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM22ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM22ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM22ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM22ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM22ROM_OFF (22u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM23ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM23ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM23ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM23ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM23ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM23ROM_OFF (23u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM24ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM24ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM24ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM24ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM24ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM24ROM_OFF (24u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM25ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM25ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM25ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM25ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM25ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM25ROM_OFF (25u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM26ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM26ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM26ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM26ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM26ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM26ROM_OFF (26u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM27ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM27ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM27ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM27ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM27ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM27ROM_OFF (27u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM28ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM28ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM28ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM28ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM28ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM28ROM_OFF (28u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM29ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM29ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM29ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM29ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM29ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM29ROM_OFF (29u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM30ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM30ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM30ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM30ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM30ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM30ROM_OFF (30u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM31ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM31ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM31ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM31ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP0_Bits.HSM31ROM */
#define IFX_DMU_SP_PROCONHSMCOTP0_HSM31ROM_OFF (31u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM32ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM32ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM32ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM32ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM32ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM32ROM_OFF (0u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM33ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM33ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM33ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM33ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM33ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM33ROM_OFF (1u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM34ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM34ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM34ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM34ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM34ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM34ROM_OFF (2u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM35ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM35ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM35ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM35ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM35ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM35ROM_OFF (3u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM36ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM36ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM36ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM36ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM36ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM36ROM_OFF (4u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM37ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM37ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM37ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM37ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM37ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM37ROM_OFF (5u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM38ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM38ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM38ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM38ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM38ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM38ROM_OFF (6u)

/** \brief Length for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM39ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM39ROM_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM39ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM39ROM_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSMCOTP1_Bits.HSM39ROM */
#define IFX_DMU_SP_PROCONHSMCOTP1_HSM39ROM_OFF (7u)

/** \brief Length for Ifx_DMU_SP_PROCONHSM_Bits.HSMDBGDIS */
#define IFX_DMU_SP_PROCONHSM_HSMDBGDIS_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSM_Bits.HSMDBGDIS */
#define IFX_DMU_SP_PROCONHSM_HSMDBGDIS_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSM_Bits.HSMDBGDIS */
#define IFX_DMU_SP_PROCONHSM_HSMDBGDIS_OFF (0u)

/** \brief Length for Ifx_DMU_SP_PROCONHSM_Bits.DBGIFLCK */
#define IFX_DMU_SP_PROCONHSM_DBGIFLCK_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSM_Bits.DBGIFLCK */
#define IFX_DMU_SP_PROCONHSM_DBGIFLCK_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSM_Bits.DBGIFLCK */
#define IFX_DMU_SP_PROCONHSM_DBGIFLCK_OFF (1u)

/** \brief Length for Ifx_DMU_SP_PROCONHSM_Bits.TSTIFLCK */
#define IFX_DMU_SP_PROCONHSM_TSTIFLCK_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSM_Bits.TSTIFLCK */
#define IFX_DMU_SP_PROCONHSM_TSTIFLCK_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSM_Bits.TSTIFLCK */
#define IFX_DMU_SP_PROCONHSM_TSTIFLCK_OFF (2u)

/** \brief Length for Ifx_DMU_SP_PROCONHSM_Bits.HSMTSTDIS */
#define IFX_DMU_SP_PROCONHSM_HSMTSTDIS_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSM_Bits.HSMTSTDIS */
#define IFX_DMU_SP_PROCONHSM_HSMTSTDIS_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSM_Bits.HSMTSTDIS */
#define IFX_DMU_SP_PROCONHSM_HSMTSTDIS_OFF (3u)

/** \brief Length for Ifx_DMU_SP_PROCONHSM_Bits.HSMTRDIS */
#define IFX_DMU_SP_PROCONHSM_HSMTRDIS_LEN (2u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSM_Bits.HSMTRDIS */
#define IFX_DMU_SP_PROCONHSM_HSMTRDIS_MSK (0x3u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSM_Bits.HSMTRDIS */
#define IFX_DMU_SP_PROCONHSM_HSMTRDIS_OFF (4u)

/** \brief Length for Ifx_DMU_SP_PROCONHSM_Bits.HSMTRTYPE */
#define IFX_DMU_SP_PROCONHSM_HSMTRTYPE_LEN (1u)

/** \brief Mask for Ifx_DMU_SP_PROCONHSM_Bits.HSMTRTYPE */
#define IFX_DMU_SP_PROCONHSM_HSMTRTYPE_MSK (0x1u)

/** \brief Offset for Ifx_DMU_SP_PROCONHSM_Bits.HSMTRTYPE */
#define IFX_DMU_SP_PROCONHSM_HSMTRTYPE_OFF (6u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXDMU_BF_H */
