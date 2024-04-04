/**
 * \file IfxSmu_bf.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC39XB_UM_V1.0.0.R0
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
 * \defgroup IfxSfr_Smu_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Smu_Registers
 * 
 */
#ifndef IFXSMU_BF_H
#define IFXSMU_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Smu_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_SMU_CLC_Bits.DISR */
#define IFX_SMU_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_SMU_CLC_Bits.DISR */
#define IFX_SMU_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_CLC_Bits.DISR */
#define IFX_SMU_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_SMU_CLC_Bits.DISS */
#define IFX_SMU_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_SMU_CLC_Bits.DISS */
#define IFX_SMU_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_CLC_Bits.DISS */
#define IFX_SMU_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_SMU_CLC_Bits.EDIS */
#define IFX_SMU_CLC_EDIS_LEN (1u)

/** \brief Mask for Ifx_SMU_CLC_Bits.EDIS */
#define IFX_SMU_CLC_EDIS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_CLC_Bits.EDIS */
#define IFX_SMU_CLC_EDIS_OFF (3u)

/** \brief Length for Ifx_SMU_ID_Bits.MOD_REV */
#define IFX_SMU_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_SMU_ID_Bits.MOD_REV */
#define IFX_SMU_ID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_SMU_ID_Bits.MOD_REV */
#define IFX_SMU_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_SMU_ID_Bits.MOD_TYPE */
#define IFX_SMU_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_SMU_ID_Bits.MOD_TYPE */
#define IFX_SMU_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_SMU_ID_Bits.MOD_TYPE */
#define IFX_SMU_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_SMU_ID_Bits.MOD_NUMBER */
#define IFX_SMU_ID_MOD_NUMBER_LEN (16u)

/** \brief Mask for Ifx_SMU_ID_Bits.MOD_NUMBER */
#define IFX_SMU_ID_MOD_NUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_SMU_ID_Bits.MOD_NUMBER */
#define IFX_SMU_ID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_SMU_CMD_Bits.CMD */
#define IFX_SMU_CMD_CMD_LEN (4u)

/** \brief Mask for Ifx_SMU_CMD_Bits.CMD */
#define IFX_SMU_CMD_CMD_MSK (0xfu)

/** \brief Offset for Ifx_SMU_CMD_Bits.CMD */
#define IFX_SMU_CMD_CMD_OFF (0u)

/** \brief Length for Ifx_SMU_CMD_Bits.ARG */
#define IFX_SMU_CMD_ARG_LEN (4u)

/** \brief Mask for Ifx_SMU_CMD_Bits.ARG */
#define IFX_SMU_CMD_ARG_MSK (0xfu)

/** \brief Offset for Ifx_SMU_CMD_Bits.ARG */
#define IFX_SMU_CMD_ARG_OFF (4u)

/** \brief Length for Ifx_SMU_STS_Bits.CMD */
#define IFX_SMU_STS_CMD_LEN (4u)

/** \brief Mask for Ifx_SMU_STS_Bits.CMD */
#define IFX_SMU_STS_CMD_MSK (0xfu)

/** \brief Offset for Ifx_SMU_STS_Bits.CMD */
#define IFX_SMU_STS_CMD_OFF (0u)

/** \brief Length for Ifx_SMU_STS_Bits.ARG */
#define IFX_SMU_STS_ARG_LEN (4u)

/** \brief Mask for Ifx_SMU_STS_Bits.ARG */
#define IFX_SMU_STS_ARG_MSK (0xfu)

/** \brief Offset for Ifx_SMU_STS_Bits.ARG */
#define IFX_SMU_STS_ARG_OFF (4u)

/** \brief Length for Ifx_SMU_STS_Bits.RES */
#define IFX_SMU_STS_RES_LEN (1u)

/** \brief Mask for Ifx_SMU_STS_Bits.RES */
#define IFX_SMU_STS_RES_MSK (0x1u)

/** \brief Offset for Ifx_SMU_STS_Bits.RES */
#define IFX_SMU_STS_RES_OFF (8u)

/** \brief Length for Ifx_SMU_STS_Bits.ASCE */
#define IFX_SMU_STS_ASCE_LEN (1u)

/** \brief Mask for Ifx_SMU_STS_Bits.ASCE */
#define IFX_SMU_STS_ASCE_MSK (0x1u)

/** \brief Offset for Ifx_SMU_STS_Bits.ASCE */
#define IFX_SMU_STS_ASCE_OFF (9u)

/** \brief Length for Ifx_SMU_STS_Bits.FSP */
#define IFX_SMU_STS_FSP_LEN (2u)

/** \brief Mask for Ifx_SMU_STS_Bits.FSP */
#define IFX_SMU_STS_FSP_MSK (0x3u)

/** \brief Offset for Ifx_SMU_STS_Bits.FSP */
#define IFX_SMU_STS_FSP_OFF (10u)

/** \brief Length for Ifx_SMU_STS_Bits.FSTS */
#define IFX_SMU_STS_FSTS_LEN (1u)

/** \brief Mask for Ifx_SMU_STS_Bits.FSTS */
#define IFX_SMU_STS_FSTS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_STS_Bits.FSTS */
#define IFX_SMU_STS_FSTS_OFF (12u)

/** \brief Length for Ifx_SMU_STS_Bits.RTS0 */
#define IFX_SMU_STS_RTS0_LEN (1u)

/** \brief Mask for Ifx_SMU_STS_Bits.RTS0 */
#define IFX_SMU_STS_RTS0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_STS_Bits.RTS0 */
#define IFX_SMU_STS_RTS0_OFF (16u)

/** \brief Length for Ifx_SMU_STS_Bits.RTME0 */
#define IFX_SMU_STS_RTME0_LEN (1u)

/** \brief Mask for Ifx_SMU_STS_Bits.RTME0 */
#define IFX_SMU_STS_RTME0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_STS_Bits.RTME0 */
#define IFX_SMU_STS_RTME0_OFF (17u)

/** \brief Length for Ifx_SMU_STS_Bits.RTS1 */
#define IFX_SMU_STS_RTS1_LEN (1u)

/** \brief Mask for Ifx_SMU_STS_Bits.RTS1 */
#define IFX_SMU_STS_RTS1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_STS_Bits.RTS1 */
#define IFX_SMU_STS_RTS1_OFF (18u)

/** \brief Length for Ifx_SMU_STS_Bits.RTME1 */
#define IFX_SMU_STS_RTME1_LEN (1u)

/** \brief Mask for Ifx_SMU_STS_Bits.RTME1 */
#define IFX_SMU_STS_RTME1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_STS_Bits.RTME1 */
#define IFX_SMU_STS_RTME1_OFF (19u)

/** \brief Length for Ifx_SMU_FSP_Bits.PRE1 */
#define IFX_SMU_FSP_PRE1_LEN (3u)

/** \brief Mask for Ifx_SMU_FSP_Bits.PRE1 */
#define IFX_SMU_FSP_PRE1_MSK (0x7u)

/** \brief Offset for Ifx_SMU_FSP_Bits.PRE1 */
#define IFX_SMU_FSP_PRE1_OFF (0u)

/** \brief Length for Ifx_SMU_FSP_Bits.PRE2 */
#define IFX_SMU_FSP_PRE2_LEN (2u)

/** \brief Mask for Ifx_SMU_FSP_Bits.PRE2 */
#define IFX_SMU_FSP_PRE2_MSK (0x3u)

/** \brief Offset for Ifx_SMU_FSP_Bits.PRE2 */
#define IFX_SMU_FSP_PRE2_OFF (3u)

/** \brief Length for Ifx_SMU_FSP_Bits.MODE */
#define IFX_SMU_FSP_MODE_LEN (2u)

/** \brief Mask for Ifx_SMU_FSP_Bits.MODE */
#define IFX_SMU_FSP_MODE_MSK (0x3u)

/** \brief Offset for Ifx_SMU_FSP_Bits.MODE */
#define IFX_SMU_FSP_MODE_OFF (5u)

/** \brief Length for Ifx_SMU_FSP_Bits.PES */
#define IFX_SMU_FSP_PES_LEN (1u)

/** \brief Mask for Ifx_SMU_FSP_Bits.PES */
#define IFX_SMU_FSP_PES_MSK (0x1u)

/** \brief Offset for Ifx_SMU_FSP_Bits.PES */
#define IFX_SMU_FSP_PES_OFF (7u)

/** \brief Length for Ifx_SMU_FSP_Bits.TFSP_LOW */
#define IFX_SMU_FSP_TFSP_LOW_LEN (14u)

/** \brief Mask for Ifx_SMU_FSP_Bits.TFSP_LOW */
#define IFX_SMU_FSP_TFSP_LOW_MSK (0x3fffu)

/** \brief Offset for Ifx_SMU_FSP_Bits.TFSP_LOW */
#define IFX_SMU_FSP_TFSP_LOW_OFF (8u)

/** \brief Length for Ifx_SMU_FSP_Bits.TFSP_HIGH */
#define IFX_SMU_FSP_TFSP_HIGH_LEN (10u)

/** \brief Mask for Ifx_SMU_FSP_Bits.TFSP_HIGH */
#define IFX_SMU_FSP_TFSP_HIGH_MSK (0x3ffu)

/** \brief Offset for Ifx_SMU_FSP_Bits.TFSP_HIGH */
#define IFX_SMU_FSP_TFSP_HIGH_OFF (22u)

/** \brief Length for Ifx_SMU_AGC_Bits.IGCS0 */
#define IFX_SMU_AGC_IGCS0_LEN (3u)

/** \brief Mask for Ifx_SMU_AGC_Bits.IGCS0 */
#define IFX_SMU_AGC_IGCS0_MSK (0x7u)

/** \brief Offset for Ifx_SMU_AGC_Bits.IGCS0 */
#define IFX_SMU_AGC_IGCS0_OFF (0u)

/** \brief Length for Ifx_SMU_AGC_Bits.IGCS1 */
#define IFX_SMU_AGC_IGCS1_LEN (3u)

/** \brief Mask for Ifx_SMU_AGC_Bits.IGCS1 */
#define IFX_SMU_AGC_IGCS1_MSK (0x7u)

/** \brief Offset for Ifx_SMU_AGC_Bits.IGCS1 */
#define IFX_SMU_AGC_IGCS1_OFF (4u)

/** \brief Length for Ifx_SMU_AGC_Bits.IGCS2 */
#define IFX_SMU_AGC_IGCS2_LEN (3u)

/** \brief Mask for Ifx_SMU_AGC_Bits.IGCS2 */
#define IFX_SMU_AGC_IGCS2_MSK (0x7u)

/** \brief Offset for Ifx_SMU_AGC_Bits.IGCS2 */
#define IFX_SMU_AGC_IGCS2_OFF (8u)

/** \brief Length for Ifx_SMU_AGC_Bits.RCS */
#define IFX_SMU_AGC_RCS_LEN (6u)

/** \brief Mask for Ifx_SMU_AGC_Bits.RCS */
#define IFX_SMU_AGC_RCS_MSK (0x3fu)

/** \brief Offset for Ifx_SMU_AGC_Bits.RCS */
#define IFX_SMU_AGC_RCS_OFF (16u)

/** \brief Length for Ifx_SMU_AGC_Bits.PES */
#define IFX_SMU_AGC_PES_LEN (5u)

/** \brief Mask for Ifx_SMU_AGC_Bits.PES */
#define IFX_SMU_AGC_PES_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_AGC_Bits.PES */
#define IFX_SMU_AGC_PES_OFF (24u)

/** \brief Length for Ifx_SMU_AGC_Bits.EFRST */
#define IFX_SMU_AGC_EFRST_LEN (1u)

/** \brief Mask for Ifx_SMU_AGC_Bits.EFRST */
#define IFX_SMU_AGC_EFRST_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGC_Bits.EFRST */
#define IFX_SMU_AGC_EFRST_OFF (29u)

/** \brief Length for Ifx_SMU_RTC_Bits.RT0E */
#define IFX_SMU_RTC_RT0E_LEN (1u)

/** \brief Mask for Ifx_SMU_RTC_Bits.RT0E */
#define IFX_SMU_RTC_RT0E_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RTC_Bits.RT0E */
#define IFX_SMU_RTC_RT0E_OFF (0u)

/** \brief Length for Ifx_SMU_RTC_Bits.RT1E */
#define IFX_SMU_RTC_RT1E_LEN (1u)

/** \brief Mask for Ifx_SMU_RTC_Bits.RT1E */
#define IFX_SMU_RTC_RT1E_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RTC_Bits.RT1E */
#define IFX_SMU_RTC_RT1E_OFF (1u)

/** \brief Length for Ifx_SMU_RTC_Bits.RTD */
#define IFX_SMU_RTC_RTD_LEN (24u)

/** \brief Mask for Ifx_SMU_RTC_Bits.RTD */
#define IFX_SMU_RTC_RTD_MSK (0xffffffu)

/** \brief Offset for Ifx_SMU_RTC_Bits.RTD */
#define IFX_SMU_RTC_RTD_OFF (8u)

/** \brief Length for Ifx_SMU_KEYS_Bits.CFGLCK */
#define IFX_SMU_KEYS_CFGLCK_LEN (8u)

/** \brief Mask for Ifx_SMU_KEYS_Bits.CFGLCK */
#define IFX_SMU_KEYS_CFGLCK_MSK (0xffu)

/** \brief Offset for Ifx_SMU_KEYS_Bits.CFGLCK */
#define IFX_SMU_KEYS_CFGLCK_OFF (0u)

/** \brief Length for Ifx_SMU_KEYS_Bits.PERLCK */
#define IFX_SMU_KEYS_PERLCK_LEN (8u)

/** \brief Mask for Ifx_SMU_KEYS_Bits.PERLCK */
#define IFX_SMU_KEYS_PERLCK_MSK (0xffu)

/** \brief Offset for Ifx_SMU_KEYS_Bits.PERLCK */
#define IFX_SMU_KEYS_PERLCK_OFF (8u)

/** \brief Length for Ifx_SMU_DBG_Bits.SSM */
#define IFX_SMU_DBG_SSM_LEN (2u)

/** \brief Mask for Ifx_SMU_DBG_Bits.SSM */
#define IFX_SMU_DBG_SSM_MSK (0x3u)

/** \brief Offset for Ifx_SMU_DBG_Bits.SSM */
#define IFX_SMU_DBG_SSM_OFF (0u)

/** \brief Length for Ifx_SMU_PCTL_Bits.HWDIR */
#define IFX_SMU_PCTL_HWDIR_LEN (2u)

/** \brief Mask for Ifx_SMU_PCTL_Bits.HWDIR */
#define IFX_SMU_PCTL_HWDIR_MSK (0x3u)

/** \brief Offset for Ifx_SMU_PCTL_Bits.HWDIR */
#define IFX_SMU_PCTL_HWDIR_OFF (0u)

/** \brief Length for Ifx_SMU_PCTL_Bits.HWEN */
#define IFX_SMU_PCTL_HWEN_LEN (2u)

/** \brief Mask for Ifx_SMU_PCTL_Bits.HWEN */
#define IFX_SMU_PCTL_HWEN_MSK (0x3u)

/** \brief Offset for Ifx_SMU_PCTL_Bits.HWEN */
#define IFX_SMU_PCTL_HWEN_OFF (2u)

/** \brief Length for Ifx_SMU_PCTL_Bits.GFSCU_EN */
#define IFX_SMU_PCTL_GFSCU_EN_LEN (1u)

/** \brief Mask for Ifx_SMU_PCTL_Bits.GFSCU_EN */
#define IFX_SMU_PCTL_GFSCU_EN_MSK (0x1u)

/** \brief Offset for Ifx_SMU_PCTL_Bits.GFSCU_EN */
#define IFX_SMU_PCTL_GFSCU_EN_OFF (4u)

/** \brief Length for Ifx_SMU_PCTL_Bits.GFSTS_EN */
#define IFX_SMU_PCTL_GFSTS_EN_LEN (1u)

/** \brief Mask for Ifx_SMU_PCTL_Bits.GFSTS_EN */
#define IFX_SMU_PCTL_GFSTS_EN_MSK (0x1u)

/** \brief Offset for Ifx_SMU_PCTL_Bits.GFSTS_EN */
#define IFX_SMU_PCTL_GFSTS_EN_OFF (5u)

/** \brief Length for Ifx_SMU_PCTL_Bits.PCS */
#define IFX_SMU_PCTL_PCS_LEN (1u)

/** \brief Mask for Ifx_SMU_PCTL_Bits.PCS */
#define IFX_SMU_PCTL_PCS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_PCTL_Bits.PCS */
#define IFX_SMU_PCTL_PCS_OFF (7u)

/** \brief Length for Ifx_SMU_AFCNT_Bits.FCNT */
#define IFX_SMU_AFCNT_FCNT_LEN (4u)

/** \brief Mask for Ifx_SMU_AFCNT_Bits.FCNT */
#define IFX_SMU_AFCNT_FCNT_MSK (0xfu)

/** \brief Offset for Ifx_SMU_AFCNT_Bits.FCNT */
#define IFX_SMU_AFCNT_FCNT_OFF (0u)

/** \brief Length for Ifx_SMU_AFCNT_Bits.ACNT */
#define IFX_SMU_AFCNT_ACNT_LEN (12u)

/** \brief Mask for Ifx_SMU_AFCNT_Bits.ACNT */
#define IFX_SMU_AFCNT_ACNT_MSK (0xfffu)

/** \brief Offset for Ifx_SMU_AFCNT_Bits.ACNT */
#define IFX_SMU_AFCNT_ACNT_OFF (4u)

/** \brief Length for Ifx_SMU_AFCNT_Bits.FCO */
#define IFX_SMU_AFCNT_FCO_LEN (1u)

/** \brief Mask for Ifx_SMU_AFCNT_Bits.FCO */
#define IFX_SMU_AFCNT_FCO_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AFCNT_Bits.FCO */
#define IFX_SMU_AFCNT_FCO_OFF (30u)

/** \brief Length for Ifx_SMU_AFCNT_Bits.ACO */
#define IFX_SMU_AFCNT_ACO_LEN (1u)

/** \brief Mask for Ifx_SMU_AFCNT_Bits.ACO */
#define IFX_SMU_AFCNT_ACO_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AFCNT_Bits.ACO */
#define IFX_SMU_AFCNT_ACO_OFF (31u)

/** \brief Length for Ifx_SMU_RTAC00_Bits.GID0 */
#define IFX_SMU_RTAC00_GID0_LEN (4u)

/** \brief Mask for Ifx_SMU_RTAC00_Bits.GID0 */
#define IFX_SMU_RTAC00_GID0_MSK (0xfu)

/** \brief Offset for Ifx_SMU_RTAC00_Bits.GID0 */
#define IFX_SMU_RTAC00_GID0_OFF (0u)

/** \brief Length for Ifx_SMU_RTAC00_Bits.ALID0 */
#define IFX_SMU_RTAC00_ALID0_LEN (5u)

/** \brief Mask for Ifx_SMU_RTAC00_Bits.ALID0 */
#define IFX_SMU_RTAC00_ALID0_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_RTAC00_Bits.ALID0 */
#define IFX_SMU_RTAC00_ALID0_OFF (4u)

/** \brief Length for Ifx_SMU_RTAC00_Bits.GID1 */
#define IFX_SMU_RTAC00_GID1_LEN (4u)

/** \brief Mask for Ifx_SMU_RTAC00_Bits.GID1 */
#define IFX_SMU_RTAC00_GID1_MSK (0xfu)

/** \brief Offset for Ifx_SMU_RTAC00_Bits.GID1 */
#define IFX_SMU_RTAC00_GID1_OFF (16u)

/** \brief Length for Ifx_SMU_RTAC00_Bits.ALID1 */
#define IFX_SMU_RTAC00_ALID1_LEN (5u)

/** \brief Mask for Ifx_SMU_RTAC00_Bits.ALID1 */
#define IFX_SMU_RTAC00_ALID1_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_RTAC00_Bits.ALID1 */
#define IFX_SMU_RTAC00_ALID1_OFF (20u)

/** \brief Length for Ifx_SMU_RTAC01_Bits.GID2 */
#define IFX_SMU_RTAC01_GID2_LEN (4u)

/** \brief Mask for Ifx_SMU_RTAC01_Bits.GID2 */
#define IFX_SMU_RTAC01_GID2_MSK (0xfu)

/** \brief Offset for Ifx_SMU_RTAC01_Bits.GID2 */
#define IFX_SMU_RTAC01_GID2_OFF (0u)

/** \brief Length for Ifx_SMU_RTAC01_Bits.ALID2 */
#define IFX_SMU_RTAC01_ALID2_LEN (5u)

/** \brief Mask for Ifx_SMU_RTAC01_Bits.ALID2 */
#define IFX_SMU_RTAC01_ALID2_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_RTAC01_Bits.ALID2 */
#define IFX_SMU_RTAC01_ALID2_OFF (4u)

/** \brief Length for Ifx_SMU_RTAC01_Bits.GID3 */
#define IFX_SMU_RTAC01_GID3_LEN (4u)

/** \brief Mask for Ifx_SMU_RTAC01_Bits.GID3 */
#define IFX_SMU_RTAC01_GID3_MSK (0xfu)

/** \brief Offset for Ifx_SMU_RTAC01_Bits.GID3 */
#define IFX_SMU_RTAC01_GID3_OFF (16u)

/** \brief Length for Ifx_SMU_RTAC01_Bits.ALID3 */
#define IFX_SMU_RTAC01_ALID3_LEN (5u)

/** \brief Mask for Ifx_SMU_RTAC01_Bits.ALID3 */
#define IFX_SMU_RTAC01_ALID3_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_RTAC01_Bits.ALID3 */
#define IFX_SMU_RTAC01_ALID3_OFF (20u)

/** \brief Length for Ifx_SMU_RTAC10_Bits.GID0 */
#define IFX_SMU_RTAC10_GID0_LEN (4u)

/** \brief Mask for Ifx_SMU_RTAC10_Bits.GID0 */
#define IFX_SMU_RTAC10_GID0_MSK (0xfu)

/** \brief Offset for Ifx_SMU_RTAC10_Bits.GID0 */
#define IFX_SMU_RTAC10_GID0_OFF (0u)

/** \brief Length for Ifx_SMU_RTAC10_Bits.ALID0 */
#define IFX_SMU_RTAC10_ALID0_LEN (5u)

/** \brief Mask for Ifx_SMU_RTAC10_Bits.ALID0 */
#define IFX_SMU_RTAC10_ALID0_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_RTAC10_Bits.ALID0 */
#define IFX_SMU_RTAC10_ALID0_OFF (4u)

/** \brief Length for Ifx_SMU_RTAC10_Bits.GID1 */
#define IFX_SMU_RTAC10_GID1_LEN (4u)

/** \brief Mask for Ifx_SMU_RTAC10_Bits.GID1 */
#define IFX_SMU_RTAC10_GID1_MSK (0xfu)

/** \brief Offset for Ifx_SMU_RTAC10_Bits.GID1 */
#define IFX_SMU_RTAC10_GID1_OFF (16u)

/** \brief Length for Ifx_SMU_RTAC10_Bits.ALID1 */
#define IFX_SMU_RTAC10_ALID1_LEN (5u)

/** \brief Mask for Ifx_SMU_RTAC10_Bits.ALID1 */
#define IFX_SMU_RTAC10_ALID1_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_RTAC10_Bits.ALID1 */
#define IFX_SMU_RTAC10_ALID1_OFF (20u)

/** \brief Length for Ifx_SMU_RTAC11_Bits.GID2 */
#define IFX_SMU_RTAC11_GID2_LEN (4u)

/** \brief Mask for Ifx_SMU_RTAC11_Bits.GID2 */
#define IFX_SMU_RTAC11_GID2_MSK (0xfu)

/** \brief Offset for Ifx_SMU_RTAC11_Bits.GID2 */
#define IFX_SMU_RTAC11_GID2_OFF (0u)

/** \brief Length for Ifx_SMU_RTAC11_Bits.ALID2 */
#define IFX_SMU_RTAC11_ALID2_LEN (5u)

/** \brief Mask for Ifx_SMU_RTAC11_Bits.ALID2 */
#define IFX_SMU_RTAC11_ALID2_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_RTAC11_Bits.ALID2 */
#define IFX_SMU_RTAC11_ALID2_OFF (4u)

/** \brief Length for Ifx_SMU_RTAC11_Bits.GID3 */
#define IFX_SMU_RTAC11_GID3_LEN (4u)

/** \brief Mask for Ifx_SMU_RTAC11_Bits.GID3 */
#define IFX_SMU_RTAC11_GID3_MSK (0xfu)

/** \brief Offset for Ifx_SMU_RTAC11_Bits.GID3 */
#define IFX_SMU_RTAC11_GID3_OFF (16u)

/** \brief Length for Ifx_SMU_RTAC11_Bits.ALID3 */
#define IFX_SMU_RTAC11_ALID3_LEN (5u)

/** \brief Mask for Ifx_SMU_RTAC11_Bits.ALID3 */
#define IFX_SMU_RTAC11_ALID3_MSK (0x1fu)

/** \brief Offset for Ifx_SMU_RTAC11_Bits.ALID3 */
#define IFX_SMU_RTAC11_ALID3_OFF (20u)

/** \brief Length for Ifx_SMU_AEX_Bits.IRQ0STS */
#define IFX_SMU_AEX_IRQ0STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.IRQ0STS */
#define IFX_SMU_AEX_IRQ0STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.IRQ0STS */
#define IFX_SMU_AEX_IRQ0STS_OFF (0u)

/** \brief Length for Ifx_SMU_AEX_Bits.IRQ1STS */
#define IFX_SMU_AEX_IRQ1STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.IRQ1STS */
#define IFX_SMU_AEX_IRQ1STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.IRQ1STS */
#define IFX_SMU_AEX_IRQ1STS_OFF (1u)

/** \brief Length for Ifx_SMU_AEX_Bits.IRQ2STS */
#define IFX_SMU_AEX_IRQ2STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.IRQ2STS */
#define IFX_SMU_AEX_IRQ2STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.IRQ2STS */
#define IFX_SMU_AEX_IRQ2STS_OFF (2u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST0STS */
#define IFX_SMU_AEX_RST0STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST0STS */
#define IFX_SMU_AEX_RST0STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST0STS */
#define IFX_SMU_AEX_RST0STS_OFF (3u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST1STS */
#define IFX_SMU_AEX_RST1STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST1STS */
#define IFX_SMU_AEX_RST1STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST1STS */
#define IFX_SMU_AEX_RST1STS_OFF (4u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST2STS */
#define IFX_SMU_AEX_RST2STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST2STS */
#define IFX_SMU_AEX_RST2STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST2STS */
#define IFX_SMU_AEX_RST2STS_OFF (5u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST3STS */
#define IFX_SMU_AEX_RST3STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST3STS */
#define IFX_SMU_AEX_RST3STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST3STS */
#define IFX_SMU_AEX_RST3STS_OFF (6u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST4STS */
#define IFX_SMU_AEX_RST4STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST4STS */
#define IFX_SMU_AEX_RST4STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST4STS */
#define IFX_SMU_AEX_RST4STS_OFF (7u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST5STS */
#define IFX_SMU_AEX_RST5STS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST5STS */
#define IFX_SMU_AEX_RST5STS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST5STS */
#define IFX_SMU_AEX_RST5STS_OFF (8u)

/** \brief Length for Ifx_SMU_AEX_Bits.NMISTS */
#define IFX_SMU_AEX_NMISTS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.NMISTS */
#define IFX_SMU_AEX_NMISTS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.NMISTS */
#define IFX_SMU_AEX_NMISTS_OFF (9u)

/** \brief Length for Ifx_SMU_AEX_Bits.EMSSTS */
#define IFX_SMU_AEX_EMSSTS_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.EMSSTS */
#define IFX_SMU_AEX_EMSSTS_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.EMSSTS */
#define IFX_SMU_AEX_EMSSTS_OFF (11u)

/** \brief Length for Ifx_SMU_AEX_Bits.IRQ0AEM */
#define IFX_SMU_AEX_IRQ0AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.IRQ0AEM */
#define IFX_SMU_AEX_IRQ0AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.IRQ0AEM */
#define IFX_SMU_AEX_IRQ0AEM_OFF (16u)

/** \brief Length for Ifx_SMU_AEX_Bits.IRQ1AEM */
#define IFX_SMU_AEX_IRQ1AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.IRQ1AEM */
#define IFX_SMU_AEX_IRQ1AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.IRQ1AEM */
#define IFX_SMU_AEX_IRQ1AEM_OFF (17u)

/** \brief Length for Ifx_SMU_AEX_Bits.IRQ2AEM */
#define IFX_SMU_AEX_IRQ2AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.IRQ2AEM */
#define IFX_SMU_AEX_IRQ2AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.IRQ2AEM */
#define IFX_SMU_AEX_IRQ2AEM_OFF (18u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST0AEM */
#define IFX_SMU_AEX_RST0AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST0AEM */
#define IFX_SMU_AEX_RST0AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST0AEM */
#define IFX_SMU_AEX_RST0AEM_OFF (19u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST1AEM */
#define IFX_SMU_AEX_RST1AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST1AEM */
#define IFX_SMU_AEX_RST1AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST1AEM */
#define IFX_SMU_AEX_RST1AEM_OFF (20u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST2AEM */
#define IFX_SMU_AEX_RST2AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST2AEM */
#define IFX_SMU_AEX_RST2AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST2AEM */
#define IFX_SMU_AEX_RST2AEM_OFF (21u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST3AEM */
#define IFX_SMU_AEX_RST3AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST3AEM */
#define IFX_SMU_AEX_RST3AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST3AEM */
#define IFX_SMU_AEX_RST3AEM_OFF (22u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST4AEM */
#define IFX_SMU_AEX_RST4AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST4AEM */
#define IFX_SMU_AEX_RST4AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST4AEM */
#define IFX_SMU_AEX_RST4AEM_OFF (23u)

/** \brief Length for Ifx_SMU_AEX_Bits.RST5AEM */
#define IFX_SMU_AEX_RST5AEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.RST5AEM */
#define IFX_SMU_AEX_RST5AEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.RST5AEM */
#define IFX_SMU_AEX_RST5AEM_OFF (24u)

/** \brief Length for Ifx_SMU_AEX_Bits.NMIAEM */
#define IFX_SMU_AEX_NMIAEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.NMIAEM */
#define IFX_SMU_AEX_NMIAEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.NMIAEM */
#define IFX_SMU_AEX_NMIAEM_OFF (25u)

/** \brief Length for Ifx_SMU_AEX_Bits.EMSAEM */
#define IFX_SMU_AEX_EMSAEM_LEN (1u)

/** \brief Mask for Ifx_SMU_AEX_Bits.EMSAEM */
#define IFX_SMU_AEX_EMSAEM_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEX_Bits.EMSAEM */
#define IFX_SMU_AEX_EMSAEM_OFF (27u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.IRQ0CLR */
#define IFX_SMU_AEXCLR_IRQ0CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.IRQ0CLR */
#define IFX_SMU_AEXCLR_IRQ0CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.IRQ0CLR */
#define IFX_SMU_AEXCLR_IRQ0CLR_OFF (0u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.IRQ1CLR */
#define IFX_SMU_AEXCLR_IRQ1CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.IRQ1CLR */
#define IFX_SMU_AEXCLR_IRQ1CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.IRQ1CLR */
#define IFX_SMU_AEXCLR_IRQ1CLR_OFF (1u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.IRQ2CLR */
#define IFX_SMU_AEXCLR_IRQ2CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.IRQ2CLR */
#define IFX_SMU_AEXCLR_IRQ2CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.IRQ2CLR */
#define IFX_SMU_AEXCLR_IRQ2CLR_OFF (2u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST0CLR */
#define IFX_SMU_AEXCLR_RST0CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST0CLR */
#define IFX_SMU_AEXCLR_RST0CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST0CLR */
#define IFX_SMU_AEXCLR_RST0CLR_OFF (3u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST1CLR */
#define IFX_SMU_AEXCLR_RST1CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST1CLR */
#define IFX_SMU_AEXCLR_RST1CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST1CLR */
#define IFX_SMU_AEXCLR_RST1CLR_OFF (4u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST2CLR */
#define IFX_SMU_AEXCLR_RST2CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST2CLR */
#define IFX_SMU_AEXCLR_RST2CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST2CLR */
#define IFX_SMU_AEXCLR_RST2CLR_OFF (5u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST3CLR */
#define IFX_SMU_AEXCLR_RST3CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST3CLR */
#define IFX_SMU_AEXCLR_RST3CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST3CLR */
#define IFX_SMU_AEXCLR_RST3CLR_OFF (6u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST4CLR */
#define IFX_SMU_AEXCLR_RST4CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST4CLR */
#define IFX_SMU_AEXCLR_RST4CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST4CLR */
#define IFX_SMU_AEXCLR_RST4CLR_OFF (7u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST5CLR */
#define IFX_SMU_AEXCLR_RST5CLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST5CLR */
#define IFX_SMU_AEXCLR_RST5CLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST5CLR */
#define IFX_SMU_AEXCLR_RST5CLR_OFF (8u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.NMICLR */
#define IFX_SMU_AEXCLR_NMICLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.NMICLR */
#define IFX_SMU_AEXCLR_NMICLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.NMICLR */
#define IFX_SMU_AEXCLR_NMICLR_OFF (9u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.EMSCLR */
#define IFX_SMU_AEXCLR_EMSCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.EMSCLR */
#define IFX_SMU_AEXCLR_EMSCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.EMSCLR */
#define IFX_SMU_AEXCLR_EMSCLR_OFF (11u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.IRQ0AEMCLR */
#define IFX_SMU_AEXCLR_IRQ0AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.IRQ0AEMCLR */
#define IFX_SMU_AEXCLR_IRQ0AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.IRQ0AEMCLR */
#define IFX_SMU_AEXCLR_IRQ0AEMCLR_OFF (16u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.IRQ1AEMCLR */
#define IFX_SMU_AEXCLR_IRQ1AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.IRQ1AEMCLR */
#define IFX_SMU_AEXCLR_IRQ1AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.IRQ1AEMCLR */
#define IFX_SMU_AEXCLR_IRQ1AEMCLR_OFF (17u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.IRQ2AEMCLR */
#define IFX_SMU_AEXCLR_IRQ2AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.IRQ2AEMCLR */
#define IFX_SMU_AEXCLR_IRQ2AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.IRQ2AEMCLR */
#define IFX_SMU_AEXCLR_IRQ2AEMCLR_OFF (18u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST0AEMCLR */
#define IFX_SMU_AEXCLR_RST0AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST0AEMCLR */
#define IFX_SMU_AEXCLR_RST0AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST0AEMCLR */
#define IFX_SMU_AEXCLR_RST0AEMCLR_OFF (19u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST1AEMCLR */
#define IFX_SMU_AEXCLR_RST1AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST1AEMCLR */
#define IFX_SMU_AEXCLR_RST1AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST1AEMCLR */
#define IFX_SMU_AEXCLR_RST1AEMCLR_OFF (20u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST2AEMCLR */
#define IFX_SMU_AEXCLR_RST2AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST2AEMCLR */
#define IFX_SMU_AEXCLR_RST2AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST2AEMCLR */
#define IFX_SMU_AEXCLR_RST2AEMCLR_OFF (21u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST3AEMCLR */
#define IFX_SMU_AEXCLR_RST3AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST3AEMCLR */
#define IFX_SMU_AEXCLR_RST3AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST3AEMCLR */
#define IFX_SMU_AEXCLR_RST3AEMCLR_OFF (22u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST4AEMCLR */
#define IFX_SMU_AEXCLR_RST4AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST4AEMCLR */
#define IFX_SMU_AEXCLR_RST4AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST4AEMCLR */
#define IFX_SMU_AEXCLR_RST4AEMCLR_OFF (23u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.RST5AEMCLR */
#define IFX_SMU_AEXCLR_RST5AEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.RST5AEMCLR */
#define IFX_SMU_AEXCLR_RST5AEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.RST5AEMCLR */
#define IFX_SMU_AEXCLR_RST5AEMCLR_OFF (24u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.NMIAEMCLR */
#define IFX_SMU_AEXCLR_NMIAEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.NMIAEMCLR */
#define IFX_SMU_AEXCLR_NMIAEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.NMIAEMCLR */
#define IFX_SMU_AEXCLR_NMIAEMCLR_OFF (25u)

/** \brief Length for Ifx_SMU_AEXCLR_Bits.EMSAEMCLR */
#define IFX_SMU_AEXCLR_EMSAEMCLR_LEN (1u)

/** \brief Mask for Ifx_SMU_AEXCLR_Bits.EMSAEMCLR */
#define IFX_SMU_AEXCLR_EMSAEMCLR_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AEXCLR_Bits.EMSAEMCLR */
#define IFX_SMU_AEXCLR_EMSAEMCLR_OFF (27u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF0 */
#define IFX_SMU_AGCF_CF0_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF0 */
#define IFX_SMU_AGCF_CF0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF0 */
#define IFX_SMU_AGCF_CF0_OFF (0u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF1 */
#define IFX_SMU_AGCF_CF1_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF1 */
#define IFX_SMU_AGCF_CF1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF1 */
#define IFX_SMU_AGCF_CF1_OFF (1u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF2 */
#define IFX_SMU_AGCF_CF2_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF2 */
#define IFX_SMU_AGCF_CF2_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF2 */
#define IFX_SMU_AGCF_CF2_OFF (2u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF3 */
#define IFX_SMU_AGCF_CF3_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF3 */
#define IFX_SMU_AGCF_CF3_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF3 */
#define IFX_SMU_AGCF_CF3_OFF (3u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF4 */
#define IFX_SMU_AGCF_CF4_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF4 */
#define IFX_SMU_AGCF_CF4_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF4 */
#define IFX_SMU_AGCF_CF4_OFF (4u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF5 */
#define IFX_SMU_AGCF_CF5_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF5 */
#define IFX_SMU_AGCF_CF5_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF5 */
#define IFX_SMU_AGCF_CF5_OFF (5u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF6 */
#define IFX_SMU_AGCF_CF6_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF6 */
#define IFX_SMU_AGCF_CF6_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF6 */
#define IFX_SMU_AGCF_CF6_OFF (6u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF7 */
#define IFX_SMU_AGCF_CF7_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF7 */
#define IFX_SMU_AGCF_CF7_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF7 */
#define IFX_SMU_AGCF_CF7_OFF (7u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF8 */
#define IFX_SMU_AGCF_CF8_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF8 */
#define IFX_SMU_AGCF_CF8_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF8 */
#define IFX_SMU_AGCF_CF8_OFF (8u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF9 */
#define IFX_SMU_AGCF_CF9_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF9 */
#define IFX_SMU_AGCF_CF9_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF9 */
#define IFX_SMU_AGCF_CF9_OFF (9u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF10 */
#define IFX_SMU_AGCF_CF10_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF10 */
#define IFX_SMU_AGCF_CF10_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF10 */
#define IFX_SMU_AGCF_CF10_OFF (10u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF11 */
#define IFX_SMU_AGCF_CF11_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF11 */
#define IFX_SMU_AGCF_CF11_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF11 */
#define IFX_SMU_AGCF_CF11_OFF (11u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF12 */
#define IFX_SMU_AGCF_CF12_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF12 */
#define IFX_SMU_AGCF_CF12_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF12 */
#define IFX_SMU_AGCF_CF12_OFF (12u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF13 */
#define IFX_SMU_AGCF_CF13_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF13 */
#define IFX_SMU_AGCF_CF13_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF13 */
#define IFX_SMU_AGCF_CF13_OFF (13u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF14 */
#define IFX_SMU_AGCF_CF14_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF14 */
#define IFX_SMU_AGCF_CF14_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF14 */
#define IFX_SMU_AGCF_CF14_OFF (14u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF15 */
#define IFX_SMU_AGCF_CF15_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF15 */
#define IFX_SMU_AGCF_CF15_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF15 */
#define IFX_SMU_AGCF_CF15_OFF (15u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF16 */
#define IFX_SMU_AGCF_CF16_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF16 */
#define IFX_SMU_AGCF_CF16_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF16 */
#define IFX_SMU_AGCF_CF16_OFF (16u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF17 */
#define IFX_SMU_AGCF_CF17_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF17 */
#define IFX_SMU_AGCF_CF17_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF17 */
#define IFX_SMU_AGCF_CF17_OFF (17u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF18 */
#define IFX_SMU_AGCF_CF18_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF18 */
#define IFX_SMU_AGCF_CF18_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF18 */
#define IFX_SMU_AGCF_CF18_OFF (18u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF19 */
#define IFX_SMU_AGCF_CF19_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF19 */
#define IFX_SMU_AGCF_CF19_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF19 */
#define IFX_SMU_AGCF_CF19_OFF (19u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF20 */
#define IFX_SMU_AGCF_CF20_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF20 */
#define IFX_SMU_AGCF_CF20_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF20 */
#define IFX_SMU_AGCF_CF20_OFF (20u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF21 */
#define IFX_SMU_AGCF_CF21_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF21 */
#define IFX_SMU_AGCF_CF21_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF21 */
#define IFX_SMU_AGCF_CF21_OFF (21u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF22 */
#define IFX_SMU_AGCF_CF22_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF22 */
#define IFX_SMU_AGCF_CF22_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF22 */
#define IFX_SMU_AGCF_CF22_OFF (22u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF23 */
#define IFX_SMU_AGCF_CF23_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF23 */
#define IFX_SMU_AGCF_CF23_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF23 */
#define IFX_SMU_AGCF_CF23_OFF (23u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF24 */
#define IFX_SMU_AGCF_CF24_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF24 */
#define IFX_SMU_AGCF_CF24_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF24 */
#define IFX_SMU_AGCF_CF24_OFF (24u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF25 */
#define IFX_SMU_AGCF_CF25_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF25 */
#define IFX_SMU_AGCF_CF25_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF25 */
#define IFX_SMU_AGCF_CF25_OFF (25u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF26 */
#define IFX_SMU_AGCF_CF26_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF26 */
#define IFX_SMU_AGCF_CF26_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF26 */
#define IFX_SMU_AGCF_CF26_OFF (26u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF27 */
#define IFX_SMU_AGCF_CF27_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF27 */
#define IFX_SMU_AGCF_CF27_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF27 */
#define IFX_SMU_AGCF_CF27_OFF (27u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF28 */
#define IFX_SMU_AGCF_CF28_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF28 */
#define IFX_SMU_AGCF_CF28_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF28 */
#define IFX_SMU_AGCF_CF28_OFF (28u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF29 */
#define IFX_SMU_AGCF_CF29_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF29 */
#define IFX_SMU_AGCF_CF29_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF29 */
#define IFX_SMU_AGCF_CF29_OFF (29u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF30 */
#define IFX_SMU_AGCF_CF30_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF30 */
#define IFX_SMU_AGCF_CF30_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF30 */
#define IFX_SMU_AGCF_CF30_OFF (30u)

/** \brief Length for Ifx_SMU_AGCF_Bits.CF31 */
#define IFX_SMU_AGCF_CF31_LEN (1u)

/** \brief Mask for Ifx_SMU_AGCF_Bits.CF31 */
#define IFX_SMU_AGCF_CF31_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGCF_Bits.CF31 */
#define IFX_SMU_AGCF_CF31_OFF (31u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE0 */
#define IFX_SMU_AGFSP_FE0_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE0 */
#define IFX_SMU_AGFSP_FE0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE0 */
#define IFX_SMU_AGFSP_FE0_OFF (0u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE1 */
#define IFX_SMU_AGFSP_FE1_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE1 */
#define IFX_SMU_AGFSP_FE1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE1 */
#define IFX_SMU_AGFSP_FE1_OFF (1u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE2 */
#define IFX_SMU_AGFSP_FE2_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE2 */
#define IFX_SMU_AGFSP_FE2_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE2 */
#define IFX_SMU_AGFSP_FE2_OFF (2u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE3 */
#define IFX_SMU_AGFSP_FE3_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE3 */
#define IFX_SMU_AGFSP_FE3_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE3 */
#define IFX_SMU_AGFSP_FE3_OFF (3u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE4 */
#define IFX_SMU_AGFSP_FE4_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE4 */
#define IFX_SMU_AGFSP_FE4_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE4 */
#define IFX_SMU_AGFSP_FE4_OFF (4u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE5 */
#define IFX_SMU_AGFSP_FE5_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE5 */
#define IFX_SMU_AGFSP_FE5_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE5 */
#define IFX_SMU_AGFSP_FE5_OFF (5u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE6 */
#define IFX_SMU_AGFSP_FE6_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE6 */
#define IFX_SMU_AGFSP_FE6_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE6 */
#define IFX_SMU_AGFSP_FE6_OFF (6u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE7 */
#define IFX_SMU_AGFSP_FE7_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE7 */
#define IFX_SMU_AGFSP_FE7_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE7 */
#define IFX_SMU_AGFSP_FE7_OFF (7u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE8 */
#define IFX_SMU_AGFSP_FE8_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE8 */
#define IFX_SMU_AGFSP_FE8_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE8 */
#define IFX_SMU_AGFSP_FE8_OFF (8u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE9 */
#define IFX_SMU_AGFSP_FE9_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE9 */
#define IFX_SMU_AGFSP_FE9_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE9 */
#define IFX_SMU_AGFSP_FE9_OFF (9u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE10 */
#define IFX_SMU_AGFSP_FE10_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE10 */
#define IFX_SMU_AGFSP_FE10_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE10 */
#define IFX_SMU_AGFSP_FE10_OFF (10u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE11 */
#define IFX_SMU_AGFSP_FE11_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE11 */
#define IFX_SMU_AGFSP_FE11_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE11 */
#define IFX_SMU_AGFSP_FE11_OFF (11u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE12 */
#define IFX_SMU_AGFSP_FE12_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE12 */
#define IFX_SMU_AGFSP_FE12_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE12 */
#define IFX_SMU_AGFSP_FE12_OFF (12u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE13 */
#define IFX_SMU_AGFSP_FE13_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE13 */
#define IFX_SMU_AGFSP_FE13_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE13 */
#define IFX_SMU_AGFSP_FE13_OFF (13u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE14 */
#define IFX_SMU_AGFSP_FE14_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE14 */
#define IFX_SMU_AGFSP_FE14_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE14 */
#define IFX_SMU_AGFSP_FE14_OFF (14u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE15 */
#define IFX_SMU_AGFSP_FE15_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE15 */
#define IFX_SMU_AGFSP_FE15_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE15 */
#define IFX_SMU_AGFSP_FE15_OFF (15u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE16 */
#define IFX_SMU_AGFSP_FE16_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE16 */
#define IFX_SMU_AGFSP_FE16_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE16 */
#define IFX_SMU_AGFSP_FE16_OFF (16u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE17 */
#define IFX_SMU_AGFSP_FE17_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE17 */
#define IFX_SMU_AGFSP_FE17_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE17 */
#define IFX_SMU_AGFSP_FE17_OFF (17u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE18 */
#define IFX_SMU_AGFSP_FE18_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE18 */
#define IFX_SMU_AGFSP_FE18_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE18 */
#define IFX_SMU_AGFSP_FE18_OFF (18u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE19 */
#define IFX_SMU_AGFSP_FE19_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE19 */
#define IFX_SMU_AGFSP_FE19_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE19 */
#define IFX_SMU_AGFSP_FE19_OFF (19u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE20 */
#define IFX_SMU_AGFSP_FE20_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE20 */
#define IFX_SMU_AGFSP_FE20_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE20 */
#define IFX_SMU_AGFSP_FE20_OFF (20u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE21 */
#define IFX_SMU_AGFSP_FE21_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE21 */
#define IFX_SMU_AGFSP_FE21_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE21 */
#define IFX_SMU_AGFSP_FE21_OFF (21u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE22 */
#define IFX_SMU_AGFSP_FE22_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE22 */
#define IFX_SMU_AGFSP_FE22_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE22 */
#define IFX_SMU_AGFSP_FE22_OFF (22u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE23 */
#define IFX_SMU_AGFSP_FE23_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE23 */
#define IFX_SMU_AGFSP_FE23_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE23 */
#define IFX_SMU_AGFSP_FE23_OFF (23u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE24 */
#define IFX_SMU_AGFSP_FE24_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE24 */
#define IFX_SMU_AGFSP_FE24_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE24 */
#define IFX_SMU_AGFSP_FE24_OFF (24u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE25 */
#define IFX_SMU_AGFSP_FE25_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE25 */
#define IFX_SMU_AGFSP_FE25_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE25 */
#define IFX_SMU_AGFSP_FE25_OFF (25u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE26 */
#define IFX_SMU_AGFSP_FE26_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE26 */
#define IFX_SMU_AGFSP_FE26_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE26 */
#define IFX_SMU_AGFSP_FE26_OFF (26u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE27 */
#define IFX_SMU_AGFSP_FE27_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE27 */
#define IFX_SMU_AGFSP_FE27_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE27 */
#define IFX_SMU_AGFSP_FE27_OFF (27u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE28 */
#define IFX_SMU_AGFSP_FE28_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE28 */
#define IFX_SMU_AGFSP_FE28_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE28 */
#define IFX_SMU_AGFSP_FE28_OFF (28u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE29 */
#define IFX_SMU_AGFSP_FE29_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE29 */
#define IFX_SMU_AGFSP_FE29_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE29 */
#define IFX_SMU_AGFSP_FE29_OFF (29u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE30 */
#define IFX_SMU_AGFSP_FE30_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE30 */
#define IFX_SMU_AGFSP_FE30_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE30 */
#define IFX_SMU_AGFSP_FE30_OFF (30u)

/** \brief Length for Ifx_SMU_AGFSP_Bits.FE31 */
#define IFX_SMU_AGFSP_FE31_LEN (1u)

/** \brief Mask for Ifx_SMU_AGFSP_Bits.FE31 */
#define IFX_SMU_AGFSP_FE31_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AGFSP_Bits.FE31 */
#define IFX_SMU_AGFSP_FE31_OFF (31u)

/** \brief Length for Ifx_SMU_AG_Bits.SF0 */
#define IFX_SMU_AG_SF0_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF0 */
#define IFX_SMU_AG_SF0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF0 */
#define IFX_SMU_AG_SF0_OFF (0u)

/** \brief Length for Ifx_SMU_AG_Bits.SF1 */
#define IFX_SMU_AG_SF1_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF1 */
#define IFX_SMU_AG_SF1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF1 */
#define IFX_SMU_AG_SF1_OFF (1u)

/** \brief Length for Ifx_SMU_AG_Bits.SF2 */
#define IFX_SMU_AG_SF2_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF2 */
#define IFX_SMU_AG_SF2_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF2 */
#define IFX_SMU_AG_SF2_OFF (2u)

/** \brief Length for Ifx_SMU_AG_Bits.SF3 */
#define IFX_SMU_AG_SF3_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF3 */
#define IFX_SMU_AG_SF3_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF3 */
#define IFX_SMU_AG_SF3_OFF (3u)

/** \brief Length for Ifx_SMU_AG_Bits.SF4 */
#define IFX_SMU_AG_SF4_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF4 */
#define IFX_SMU_AG_SF4_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF4 */
#define IFX_SMU_AG_SF4_OFF (4u)

/** \brief Length for Ifx_SMU_AG_Bits.SF5 */
#define IFX_SMU_AG_SF5_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF5 */
#define IFX_SMU_AG_SF5_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF5 */
#define IFX_SMU_AG_SF5_OFF (5u)

/** \brief Length for Ifx_SMU_AG_Bits.SF6 */
#define IFX_SMU_AG_SF6_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF6 */
#define IFX_SMU_AG_SF6_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF6 */
#define IFX_SMU_AG_SF6_OFF (6u)

/** \brief Length for Ifx_SMU_AG_Bits.SF7 */
#define IFX_SMU_AG_SF7_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF7 */
#define IFX_SMU_AG_SF7_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF7 */
#define IFX_SMU_AG_SF7_OFF (7u)

/** \brief Length for Ifx_SMU_AG_Bits.SF8 */
#define IFX_SMU_AG_SF8_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF8 */
#define IFX_SMU_AG_SF8_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF8 */
#define IFX_SMU_AG_SF8_OFF (8u)

/** \brief Length for Ifx_SMU_AG_Bits.SF9 */
#define IFX_SMU_AG_SF9_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF9 */
#define IFX_SMU_AG_SF9_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF9 */
#define IFX_SMU_AG_SF9_OFF (9u)

/** \brief Length for Ifx_SMU_AG_Bits.SF10 */
#define IFX_SMU_AG_SF10_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF10 */
#define IFX_SMU_AG_SF10_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF10 */
#define IFX_SMU_AG_SF10_OFF (10u)

/** \brief Length for Ifx_SMU_AG_Bits.SF11 */
#define IFX_SMU_AG_SF11_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF11 */
#define IFX_SMU_AG_SF11_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF11 */
#define IFX_SMU_AG_SF11_OFF (11u)

/** \brief Length for Ifx_SMU_AG_Bits.SF12 */
#define IFX_SMU_AG_SF12_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF12 */
#define IFX_SMU_AG_SF12_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF12 */
#define IFX_SMU_AG_SF12_OFF (12u)

/** \brief Length for Ifx_SMU_AG_Bits.SF13 */
#define IFX_SMU_AG_SF13_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF13 */
#define IFX_SMU_AG_SF13_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF13 */
#define IFX_SMU_AG_SF13_OFF (13u)

/** \brief Length for Ifx_SMU_AG_Bits.SF14 */
#define IFX_SMU_AG_SF14_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF14 */
#define IFX_SMU_AG_SF14_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF14 */
#define IFX_SMU_AG_SF14_OFF (14u)

/** \brief Length for Ifx_SMU_AG_Bits.SF15 */
#define IFX_SMU_AG_SF15_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF15 */
#define IFX_SMU_AG_SF15_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF15 */
#define IFX_SMU_AG_SF15_OFF (15u)

/** \brief Length for Ifx_SMU_AG_Bits.SF16 */
#define IFX_SMU_AG_SF16_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF16 */
#define IFX_SMU_AG_SF16_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF16 */
#define IFX_SMU_AG_SF16_OFF (16u)

/** \brief Length for Ifx_SMU_AG_Bits.SF17 */
#define IFX_SMU_AG_SF17_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF17 */
#define IFX_SMU_AG_SF17_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF17 */
#define IFX_SMU_AG_SF17_OFF (17u)

/** \brief Length for Ifx_SMU_AG_Bits.SF18 */
#define IFX_SMU_AG_SF18_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF18 */
#define IFX_SMU_AG_SF18_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF18 */
#define IFX_SMU_AG_SF18_OFF (18u)

/** \brief Length for Ifx_SMU_AG_Bits.SF19 */
#define IFX_SMU_AG_SF19_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF19 */
#define IFX_SMU_AG_SF19_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF19 */
#define IFX_SMU_AG_SF19_OFF (19u)

/** \brief Length for Ifx_SMU_AG_Bits.SF20 */
#define IFX_SMU_AG_SF20_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF20 */
#define IFX_SMU_AG_SF20_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF20 */
#define IFX_SMU_AG_SF20_OFF (20u)

/** \brief Length for Ifx_SMU_AG_Bits.SF21 */
#define IFX_SMU_AG_SF21_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF21 */
#define IFX_SMU_AG_SF21_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF21 */
#define IFX_SMU_AG_SF21_OFF (21u)

/** \brief Length for Ifx_SMU_AG_Bits.SF22 */
#define IFX_SMU_AG_SF22_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF22 */
#define IFX_SMU_AG_SF22_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF22 */
#define IFX_SMU_AG_SF22_OFF (22u)

/** \brief Length for Ifx_SMU_AG_Bits.SF23 */
#define IFX_SMU_AG_SF23_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF23 */
#define IFX_SMU_AG_SF23_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF23 */
#define IFX_SMU_AG_SF23_OFF (23u)

/** \brief Length for Ifx_SMU_AG_Bits.SF24 */
#define IFX_SMU_AG_SF24_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF24 */
#define IFX_SMU_AG_SF24_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF24 */
#define IFX_SMU_AG_SF24_OFF (24u)

/** \brief Length for Ifx_SMU_AG_Bits.SF25 */
#define IFX_SMU_AG_SF25_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF25 */
#define IFX_SMU_AG_SF25_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF25 */
#define IFX_SMU_AG_SF25_OFF (25u)

/** \brief Length for Ifx_SMU_AG_Bits.SF26 */
#define IFX_SMU_AG_SF26_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF26 */
#define IFX_SMU_AG_SF26_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF26 */
#define IFX_SMU_AG_SF26_OFF (26u)

/** \brief Length for Ifx_SMU_AG_Bits.SF27 */
#define IFX_SMU_AG_SF27_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF27 */
#define IFX_SMU_AG_SF27_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF27 */
#define IFX_SMU_AG_SF27_OFF (27u)

/** \brief Length for Ifx_SMU_AG_Bits.SF28 */
#define IFX_SMU_AG_SF28_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF28 */
#define IFX_SMU_AG_SF28_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF28 */
#define IFX_SMU_AG_SF28_OFF (28u)

/** \brief Length for Ifx_SMU_AG_Bits.SF29 */
#define IFX_SMU_AG_SF29_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF29 */
#define IFX_SMU_AG_SF29_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF29 */
#define IFX_SMU_AG_SF29_OFF (29u)

/** \brief Length for Ifx_SMU_AG_Bits.SF30 */
#define IFX_SMU_AG_SF30_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF30 */
#define IFX_SMU_AG_SF30_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF30 */
#define IFX_SMU_AG_SF30_OFF (30u)

/** \brief Length for Ifx_SMU_AG_Bits.SF31 */
#define IFX_SMU_AG_SF31_LEN (1u)

/** \brief Mask for Ifx_SMU_AG_Bits.SF31 */
#define IFX_SMU_AG_SF31_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AG_Bits.SF31 */
#define IFX_SMU_AG_SF31_OFF (31u)

/** \brief Length for Ifx_SMU_AD_Bits.DF0 */
#define IFX_SMU_AD_DF0_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF0 */
#define IFX_SMU_AD_DF0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF0 */
#define IFX_SMU_AD_DF0_OFF (0u)

/** \brief Length for Ifx_SMU_AD_Bits.DF1 */
#define IFX_SMU_AD_DF1_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF1 */
#define IFX_SMU_AD_DF1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF1 */
#define IFX_SMU_AD_DF1_OFF (1u)

/** \brief Length for Ifx_SMU_AD_Bits.DF2 */
#define IFX_SMU_AD_DF2_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF2 */
#define IFX_SMU_AD_DF2_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF2 */
#define IFX_SMU_AD_DF2_OFF (2u)

/** \brief Length for Ifx_SMU_AD_Bits.DF3 */
#define IFX_SMU_AD_DF3_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF3 */
#define IFX_SMU_AD_DF3_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF3 */
#define IFX_SMU_AD_DF3_OFF (3u)

/** \brief Length for Ifx_SMU_AD_Bits.DF4 */
#define IFX_SMU_AD_DF4_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF4 */
#define IFX_SMU_AD_DF4_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF4 */
#define IFX_SMU_AD_DF4_OFF (4u)

/** \brief Length for Ifx_SMU_AD_Bits.DF5 */
#define IFX_SMU_AD_DF5_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF5 */
#define IFX_SMU_AD_DF5_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF5 */
#define IFX_SMU_AD_DF5_OFF (5u)

/** \brief Length for Ifx_SMU_AD_Bits.DF6 */
#define IFX_SMU_AD_DF6_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF6 */
#define IFX_SMU_AD_DF6_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF6 */
#define IFX_SMU_AD_DF6_OFF (6u)

/** \brief Length for Ifx_SMU_AD_Bits.DF7 */
#define IFX_SMU_AD_DF7_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF7 */
#define IFX_SMU_AD_DF7_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF7 */
#define IFX_SMU_AD_DF7_OFF (7u)

/** \brief Length for Ifx_SMU_AD_Bits.DF8 */
#define IFX_SMU_AD_DF8_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF8 */
#define IFX_SMU_AD_DF8_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF8 */
#define IFX_SMU_AD_DF8_OFF (8u)

/** \brief Length for Ifx_SMU_AD_Bits.DF9 */
#define IFX_SMU_AD_DF9_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF9 */
#define IFX_SMU_AD_DF9_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF9 */
#define IFX_SMU_AD_DF9_OFF (9u)

/** \brief Length for Ifx_SMU_AD_Bits.DF10 */
#define IFX_SMU_AD_DF10_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF10 */
#define IFX_SMU_AD_DF10_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF10 */
#define IFX_SMU_AD_DF10_OFF (10u)

/** \brief Length for Ifx_SMU_AD_Bits.DF11 */
#define IFX_SMU_AD_DF11_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF11 */
#define IFX_SMU_AD_DF11_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF11 */
#define IFX_SMU_AD_DF11_OFF (11u)

/** \brief Length for Ifx_SMU_AD_Bits.DF12 */
#define IFX_SMU_AD_DF12_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF12 */
#define IFX_SMU_AD_DF12_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF12 */
#define IFX_SMU_AD_DF12_OFF (12u)

/** \brief Length for Ifx_SMU_AD_Bits.DF13 */
#define IFX_SMU_AD_DF13_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF13 */
#define IFX_SMU_AD_DF13_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF13 */
#define IFX_SMU_AD_DF13_OFF (13u)

/** \brief Length for Ifx_SMU_AD_Bits.DF14 */
#define IFX_SMU_AD_DF14_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF14 */
#define IFX_SMU_AD_DF14_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF14 */
#define IFX_SMU_AD_DF14_OFF (14u)

/** \brief Length for Ifx_SMU_AD_Bits.DF15 */
#define IFX_SMU_AD_DF15_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF15 */
#define IFX_SMU_AD_DF15_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF15 */
#define IFX_SMU_AD_DF15_OFF (15u)

/** \brief Length for Ifx_SMU_AD_Bits.DF16 */
#define IFX_SMU_AD_DF16_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF16 */
#define IFX_SMU_AD_DF16_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF16 */
#define IFX_SMU_AD_DF16_OFF (16u)

/** \brief Length for Ifx_SMU_AD_Bits.DF17 */
#define IFX_SMU_AD_DF17_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF17 */
#define IFX_SMU_AD_DF17_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF17 */
#define IFX_SMU_AD_DF17_OFF (17u)

/** \brief Length for Ifx_SMU_AD_Bits.DF18 */
#define IFX_SMU_AD_DF18_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF18 */
#define IFX_SMU_AD_DF18_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF18 */
#define IFX_SMU_AD_DF18_OFF (18u)

/** \brief Length for Ifx_SMU_AD_Bits.DF19 */
#define IFX_SMU_AD_DF19_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF19 */
#define IFX_SMU_AD_DF19_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF19 */
#define IFX_SMU_AD_DF19_OFF (19u)

/** \brief Length for Ifx_SMU_AD_Bits.DF20 */
#define IFX_SMU_AD_DF20_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF20 */
#define IFX_SMU_AD_DF20_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF20 */
#define IFX_SMU_AD_DF20_OFF (20u)

/** \brief Length for Ifx_SMU_AD_Bits.DF21 */
#define IFX_SMU_AD_DF21_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF21 */
#define IFX_SMU_AD_DF21_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF21 */
#define IFX_SMU_AD_DF21_OFF (21u)

/** \brief Length for Ifx_SMU_AD_Bits.DF22 */
#define IFX_SMU_AD_DF22_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF22 */
#define IFX_SMU_AD_DF22_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF22 */
#define IFX_SMU_AD_DF22_OFF (22u)

/** \brief Length for Ifx_SMU_AD_Bits.DF23 */
#define IFX_SMU_AD_DF23_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF23 */
#define IFX_SMU_AD_DF23_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF23 */
#define IFX_SMU_AD_DF23_OFF (23u)

/** \brief Length for Ifx_SMU_AD_Bits.DF24 */
#define IFX_SMU_AD_DF24_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF24 */
#define IFX_SMU_AD_DF24_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF24 */
#define IFX_SMU_AD_DF24_OFF (24u)

/** \brief Length for Ifx_SMU_AD_Bits.DF25 */
#define IFX_SMU_AD_DF25_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF25 */
#define IFX_SMU_AD_DF25_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF25 */
#define IFX_SMU_AD_DF25_OFF (25u)

/** \brief Length for Ifx_SMU_AD_Bits.DF26 */
#define IFX_SMU_AD_DF26_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF26 */
#define IFX_SMU_AD_DF26_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF26 */
#define IFX_SMU_AD_DF26_OFF (26u)

/** \brief Length for Ifx_SMU_AD_Bits.DF27 */
#define IFX_SMU_AD_DF27_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF27 */
#define IFX_SMU_AD_DF27_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF27 */
#define IFX_SMU_AD_DF27_OFF (27u)

/** \brief Length for Ifx_SMU_AD_Bits.DF28 */
#define IFX_SMU_AD_DF28_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF28 */
#define IFX_SMU_AD_DF28_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF28 */
#define IFX_SMU_AD_DF28_OFF (28u)

/** \brief Length for Ifx_SMU_AD_Bits.DF29 */
#define IFX_SMU_AD_DF29_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF29 */
#define IFX_SMU_AD_DF29_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF29 */
#define IFX_SMU_AD_DF29_OFF (29u)

/** \brief Length for Ifx_SMU_AD_Bits.DF30 */
#define IFX_SMU_AD_DF30_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF30 */
#define IFX_SMU_AD_DF30_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF30 */
#define IFX_SMU_AD_DF30_OFF (30u)

/** \brief Length for Ifx_SMU_AD_Bits.DF31 */
#define IFX_SMU_AD_DF31_LEN (1u)

/** \brief Mask for Ifx_SMU_AD_Bits.DF31 */
#define IFX_SMU_AD_DF31_MSK (0x1u)

/** \brief Offset for Ifx_SMU_AD_Bits.DF31 */
#define IFX_SMU_AD_DF31_OFF (31u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE0 */
#define IFX_SMU_RMCTL_TE0_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE0 */
#define IFX_SMU_RMCTL_TE0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE0 */
#define IFX_SMU_RMCTL_TE0_OFF (0u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE1 */
#define IFX_SMU_RMCTL_TE1_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE1 */
#define IFX_SMU_RMCTL_TE1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE1 */
#define IFX_SMU_RMCTL_TE1_OFF (1u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE2 */
#define IFX_SMU_RMCTL_TE2_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE2 */
#define IFX_SMU_RMCTL_TE2_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE2 */
#define IFX_SMU_RMCTL_TE2_OFF (2u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE3 */
#define IFX_SMU_RMCTL_TE3_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE3 */
#define IFX_SMU_RMCTL_TE3_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE3 */
#define IFX_SMU_RMCTL_TE3_OFF (3u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE4 */
#define IFX_SMU_RMCTL_TE4_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE4 */
#define IFX_SMU_RMCTL_TE4_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE4 */
#define IFX_SMU_RMCTL_TE4_OFF (4u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE5 */
#define IFX_SMU_RMCTL_TE5_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE5 */
#define IFX_SMU_RMCTL_TE5_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE5 */
#define IFX_SMU_RMCTL_TE5_OFF (5u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE6 */
#define IFX_SMU_RMCTL_TE6_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE6 */
#define IFX_SMU_RMCTL_TE6_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE6 */
#define IFX_SMU_RMCTL_TE6_OFF (6u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE7 */
#define IFX_SMU_RMCTL_TE7_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE7 */
#define IFX_SMU_RMCTL_TE7_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE7 */
#define IFX_SMU_RMCTL_TE7_OFF (7u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE8 */
#define IFX_SMU_RMCTL_TE8_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE8 */
#define IFX_SMU_RMCTL_TE8_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE8 */
#define IFX_SMU_RMCTL_TE8_OFF (8u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE9 */
#define IFX_SMU_RMCTL_TE9_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE9 */
#define IFX_SMU_RMCTL_TE9_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE9 */
#define IFX_SMU_RMCTL_TE9_OFF (9u)

/** \brief Length for Ifx_SMU_RMCTL_Bits.TE10 */
#define IFX_SMU_RMCTL_TE10_LEN (1u)

/** \brief Mask for Ifx_SMU_RMCTL_Bits.TE10 */
#define IFX_SMU_RMCTL_TE10_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMCTL_Bits.TE10 */
#define IFX_SMU_RMCTL_TE10_OFF (10u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF0 */
#define IFX_SMU_RMEF_EF0_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF0 */
#define IFX_SMU_RMEF_EF0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF0 */
#define IFX_SMU_RMEF_EF0_OFF (0u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF1 */
#define IFX_SMU_RMEF_EF1_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF1 */
#define IFX_SMU_RMEF_EF1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF1 */
#define IFX_SMU_RMEF_EF1_OFF (1u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF2 */
#define IFX_SMU_RMEF_EF2_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF2 */
#define IFX_SMU_RMEF_EF2_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF2 */
#define IFX_SMU_RMEF_EF2_OFF (2u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF3 */
#define IFX_SMU_RMEF_EF3_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF3 */
#define IFX_SMU_RMEF_EF3_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF3 */
#define IFX_SMU_RMEF_EF3_OFF (3u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF4 */
#define IFX_SMU_RMEF_EF4_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF4 */
#define IFX_SMU_RMEF_EF4_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF4 */
#define IFX_SMU_RMEF_EF4_OFF (4u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF5 */
#define IFX_SMU_RMEF_EF5_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF5 */
#define IFX_SMU_RMEF_EF5_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF5 */
#define IFX_SMU_RMEF_EF5_OFF (5u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF6 */
#define IFX_SMU_RMEF_EF6_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF6 */
#define IFX_SMU_RMEF_EF6_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF6 */
#define IFX_SMU_RMEF_EF6_OFF (6u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF7 */
#define IFX_SMU_RMEF_EF7_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF7 */
#define IFX_SMU_RMEF_EF7_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF7 */
#define IFX_SMU_RMEF_EF7_OFF (7u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF8 */
#define IFX_SMU_RMEF_EF8_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF8 */
#define IFX_SMU_RMEF_EF8_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF8 */
#define IFX_SMU_RMEF_EF8_OFF (8u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF9 */
#define IFX_SMU_RMEF_EF9_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF9 */
#define IFX_SMU_RMEF_EF9_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF9 */
#define IFX_SMU_RMEF_EF9_OFF (9u)

/** \brief Length for Ifx_SMU_RMEF_Bits.EF10 */
#define IFX_SMU_RMEF_EF10_LEN (1u)

/** \brief Mask for Ifx_SMU_RMEF_Bits.EF10 */
#define IFX_SMU_RMEF_EF10_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMEF_Bits.EF10 */
#define IFX_SMU_RMEF_EF10_OFF (10u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS0 */
#define IFX_SMU_RMSTS_STS0_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS0 */
#define IFX_SMU_RMSTS_STS0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS0 */
#define IFX_SMU_RMSTS_STS0_OFF (0u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS1 */
#define IFX_SMU_RMSTS_STS1_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS1 */
#define IFX_SMU_RMSTS_STS1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS1 */
#define IFX_SMU_RMSTS_STS1_OFF (1u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS2 */
#define IFX_SMU_RMSTS_STS2_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS2 */
#define IFX_SMU_RMSTS_STS2_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS2 */
#define IFX_SMU_RMSTS_STS2_OFF (2u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS3 */
#define IFX_SMU_RMSTS_STS3_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS3 */
#define IFX_SMU_RMSTS_STS3_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS3 */
#define IFX_SMU_RMSTS_STS3_OFF (3u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS4 */
#define IFX_SMU_RMSTS_STS4_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS4 */
#define IFX_SMU_RMSTS_STS4_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS4 */
#define IFX_SMU_RMSTS_STS4_OFF (4u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS5 */
#define IFX_SMU_RMSTS_STS5_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS5 */
#define IFX_SMU_RMSTS_STS5_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS5 */
#define IFX_SMU_RMSTS_STS5_OFF (5u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS6 */
#define IFX_SMU_RMSTS_STS6_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS6 */
#define IFX_SMU_RMSTS_STS6_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS6 */
#define IFX_SMU_RMSTS_STS6_OFF (6u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS7 */
#define IFX_SMU_RMSTS_STS7_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS7 */
#define IFX_SMU_RMSTS_STS7_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS7 */
#define IFX_SMU_RMSTS_STS7_OFF (7u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS8 */
#define IFX_SMU_RMSTS_STS8_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS8 */
#define IFX_SMU_RMSTS_STS8_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS8 */
#define IFX_SMU_RMSTS_STS8_OFF (8u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS9 */
#define IFX_SMU_RMSTS_STS9_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS9 */
#define IFX_SMU_RMSTS_STS9_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS9 */
#define IFX_SMU_RMSTS_STS9_OFF (9u)

/** \brief Length for Ifx_SMU_RMSTS_Bits.STS10 */
#define IFX_SMU_RMSTS_STS10_LEN (1u)

/** \brief Mask for Ifx_SMU_RMSTS_Bits.STS10 */
#define IFX_SMU_RMSTS_STS10_MSK (0x1u)

/** \brief Offset for Ifx_SMU_RMSTS_Bits.STS10 */
#define IFX_SMU_RMSTS_STS10_OFF (10u)

/** \brief Length for Ifx_SMU_OCS_Bits.TGS */
#define IFX_SMU_OCS_TGS_LEN (2u)

/** \brief Mask for Ifx_SMU_OCS_Bits.TGS */
#define IFX_SMU_OCS_TGS_MSK (0x3u)

/** \brief Offset for Ifx_SMU_OCS_Bits.TGS */
#define IFX_SMU_OCS_TGS_OFF (0u)

/** \brief Length for Ifx_SMU_OCS_Bits.TGB */
#define IFX_SMU_OCS_TGB_LEN (1u)

/** \brief Mask for Ifx_SMU_OCS_Bits.TGB */
#define IFX_SMU_OCS_TGB_MSK (0x1u)

/** \brief Offset for Ifx_SMU_OCS_Bits.TGB */
#define IFX_SMU_OCS_TGB_OFF (2u)

/** \brief Length for Ifx_SMU_OCS_Bits.TG_P */
#define IFX_SMU_OCS_TG_P_LEN (1u)

/** \brief Mask for Ifx_SMU_OCS_Bits.TG_P */
#define IFX_SMU_OCS_TG_P_MSK (0x1u)

/** \brief Offset for Ifx_SMU_OCS_Bits.TG_P */
#define IFX_SMU_OCS_TG_P_OFF (3u)

/** \brief Length for Ifx_SMU_OCS_Bits.SUS */
#define IFX_SMU_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_SMU_OCS_Bits.SUS */
#define IFX_SMU_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_SMU_OCS_Bits.SUS */
#define IFX_SMU_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_SMU_OCS_Bits.SUS_P */
#define IFX_SMU_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_SMU_OCS_Bits.SUS_P */
#define IFX_SMU_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_SMU_OCS_Bits.SUS_P */
#define IFX_SMU_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_SMU_OCS_Bits.SUSSTA */
#define IFX_SMU_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_SMU_OCS_Bits.SUSSTA */
#define IFX_SMU_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_SMU_OCS_Bits.SUSSTA */
#define IFX_SMU_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN0 */
#define IFX_SMU_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN0 */
#define IFX_SMU_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN0 */
#define IFX_SMU_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN1 */
#define IFX_SMU_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN1 */
#define IFX_SMU_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN1 */
#define IFX_SMU_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN2 */
#define IFX_SMU_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN2 */
#define IFX_SMU_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN2 */
#define IFX_SMU_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN3 */
#define IFX_SMU_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN3 */
#define IFX_SMU_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN3 */
#define IFX_SMU_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN4 */
#define IFX_SMU_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN4 */
#define IFX_SMU_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN4 */
#define IFX_SMU_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN5 */
#define IFX_SMU_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN5 */
#define IFX_SMU_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN5 */
#define IFX_SMU_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN6 */
#define IFX_SMU_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN6 */
#define IFX_SMU_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN6 */
#define IFX_SMU_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN7 */
#define IFX_SMU_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN7 */
#define IFX_SMU_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN7 */
#define IFX_SMU_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN8 */
#define IFX_SMU_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN8 */
#define IFX_SMU_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN8 */
#define IFX_SMU_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN9 */
#define IFX_SMU_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN9 */
#define IFX_SMU_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN9 */
#define IFX_SMU_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN10 */
#define IFX_SMU_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN10 */
#define IFX_SMU_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN10 */
#define IFX_SMU_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN11 */
#define IFX_SMU_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN11 */
#define IFX_SMU_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN11 */
#define IFX_SMU_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN12 */
#define IFX_SMU_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN12 */
#define IFX_SMU_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN12 */
#define IFX_SMU_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN13 */
#define IFX_SMU_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN13 */
#define IFX_SMU_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN13 */
#define IFX_SMU_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN14 */
#define IFX_SMU_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN14 */
#define IFX_SMU_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN14 */
#define IFX_SMU_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN15 */
#define IFX_SMU_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN15 */
#define IFX_SMU_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN15 */
#define IFX_SMU_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN16 */
#define IFX_SMU_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN16 */
#define IFX_SMU_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN16 */
#define IFX_SMU_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN17 */
#define IFX_SMU_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN17 */
#define IFX_SMU_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN17 */
#define IFX_SMU_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN18 */
#define IFX_SMU_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN18 */
#define IFX_SMU_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN18 */
#define IFX_SMU_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN19 */
#define IFX_SMU_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN19 */
#define IFX_SMU_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN19 */
#define IFX_SMU_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN20 */
#define IFX_SMU_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN20 */
#define IFX_SMU_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN20 */
#define IFX_SMU_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN21 */
#define IFX_SMU_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN21 */
#define IFX_SMU_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN21 */
#define IFX_SMU_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN22 */
#define IFX_SMU_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN22 */
#define IFX_SMU_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN22 */
#define IFX_SMU_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN23 */
#define IFX_SMU_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN23 */
#define IFX_SMU_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN23 */
#define IFX_SMU_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN24 */
#define IFX_SMU_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN24 */
#define IFX_SMU_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN24 */
#define IFX_SMU_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN25 */
#define IFX_SMU_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN25 */
#define IFX_SMU_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN25 */
#define IFX_SMU_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN26 */
#define IFX_SMU_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN26 */
#define IFX_SMU_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN26 */
#define IFX_SMU_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN27 */
#define IFX_SMU_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN27 */
#define IFX_SMU_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN27 */
#define IFX_SMU_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN28 */
#define IFX_SMU_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN28 */
#define IFX_SMU_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN28 */
#define IFX_SMU_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN29 */
#define IFX_SMU_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN29 */
#define IFX_SMU_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN29 */
#define IFX_SMU_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN30 */
#define IFX_SMU_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN30 */
#define IFX_SMU_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN30 */
#define IFX_SMU_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_SMU_ACCEN0_Bits.EN31 */
#define IFX_SMU_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_SMU_ACCEN0_Bits.EN31 */
#define IFX_SMU_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_SMU_ACCEN0_Bits.EN31 */
#define IFX_SMU_ACCEN0_EN31_OFF (31u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXSMU_BF_H */
