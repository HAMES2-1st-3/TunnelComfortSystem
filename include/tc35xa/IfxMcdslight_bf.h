/**
 * \file IfxMcdslight_bf.h
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
 * \defgroup IfxSfr_Mcdslight_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Mcdslight_Registers
 * 
 */
#ifndef IFXMCDSLIGHT_BF_H
#define IFXMCDSLIGHT_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Mcdslight_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_MCDSLIGHT_CLC_Bits.DISR */
#define IFX_MCDSLIGHT_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CLC_Bits.DISR */
#define IFX_MCDSLIGHT_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CLC_Bits.DISR */
#define IFX_MCDSLIGHT_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_CLC_Bits.DISS */
#define IFX_MCDSLIGHT_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CLC_Bits.DISS */
#define IFX_MCDSLIGHT_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CLC_Bits.DISS */
#define IFX_MCDSLIGHT_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_OCS_Bits.SUS */
#define IFX_MCDSLIGHT_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_OCS_Bits.SUS */
#define IFX_MCDSLIGHT_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_OCS_Bits.SUS */
#define IFX_MCDSLIGHT_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_OCS_Bits.SUS_P */
#define IFX_MCDSLIGHT_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_OCS_Bits.SUS_P */
#define IFX_MCDSLIGHT_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_OCS_Bits.SUS_P */
#define IFX_MCDSLIGHT_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_MCDSLIGHT_OCS_Bits.SUSSTA */
#define IFX_MCDSLIGHT_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_OCS_Bits.SUSSTA */
#define IFX_MCDSLIGHT_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_OCS_Bits.SUSSTA */
#define IFX_MCDSLIGHT_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_MCDSLIGHT_ID_Bits.MOD_REV */
#define IFX_MCDSLIGHT_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_MCDSLIGHT_ID_Bits.MOD_REV */
#define IFX_MCDSLIGHT_ID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_MCDSLIGHT_ID_Bits.MOD_REV */
#define IFX_MCDSLIGHT_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_ID_Bits.MOD_TYPE */
#define IFX_MCDSLIGHT_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_MCDSLIGHT_ID_Bits.MOD_TYPE */
#define IFX_MCDSLIGHT_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_MCDSLIGHT_ID_Bits.MOD_TYPE */
#define IFX_MCDSLIGHT_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_ID_Bits.MOD_NUMBER */
#define IFX_MCDSLIGHT_ID_MOD_NUMBER_LEN (16u)

/** \brief Mask for Ifx_MCDSLIGHT_ID_Bits.MOD_NUMBER */
#define IFX_MCDSLIGHT_ID_MOD_NUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_MCDSLIGHT_ID_Bits.MOD_NUMBER */
#define IFX_MCDSLIGHT_ID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.KOK */
#define IFX_MCDSLIGHT_CT_KOK_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.KOK */
#define IFX_MCDSLIGHT_CT_KOK_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.KOK */
#define IFX_MCDSLIGHT_CT_KOK_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.CLRK */
#define IFX_MCDSLIGHT_CT_CLRK_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.CLRK */
#define IFX_MCDSLIGHT_CT_CLRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.CLRK */
#define IFX_MCDSLIGHT_CT_CLRK_OFF (6u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.KAV */
#define IFX_MCDSLIGHT_CT_KAV_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.KAV */
#define IFX_MCDSLIGHT_CT_KAV_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.KAV */
#define IFX_MCDSLIGHT_CT_KAV_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.EN */
#define IFX_MCDSLIGHT_CT_EN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.EN */
#define IFX_MCDSLIGHT_CT_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.EN */
#define IFX_MCDSLIGHT_CT_EN_OFF (13u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.CLRE */
#define IFX_MCDSLIGHT_CT_CLRE_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.CLRE */
#define IFX_MCDSLIGHT_CT_CLRE_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.CLRE */
#define IFX_MCDSLIGHT_CT_CLRE_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.SETE */
#define IFX_MCDSLIGHT_CT_SETE_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.SETE */
#define IFX_MCDSLIGHT_CT_SETE_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.SETE */
#define IFX_MCDSLIGHT_CT_SETE_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.BED */
#define IFX_MCDSLIGHT_CT_BED_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.BED */
#define IFX_MCDSLIGHT_CT_BED_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.BED */
#define IFX_MCDSLIGHT_CT_BED_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.BED_P */
#define IFX_MCDSLIGHT_CT_BED_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.BED_P */
#define IFX_MCDSLIGHT_CT_BED_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.BED_P */
#define IFX_MCDSLIGHT_CT_BED_P_OFF (19u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.IRA */
#define IFX_MCDSLIGHT_CT_IRA_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.IRA */
#define IFX_MCDSLIGHT_CT_IRA_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.IRA */
#define IFX_MCDSLIGHT_CT_IRA_OFF (21u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.CLRI */
#define IFX_MCDSLIGHT_CT_CLRI_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.CLRI */
#define IFX_MCDSLIGHT_CT_CLRI_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.CLRI */
#define IFX_MCDSLIGHT_CT_CLRI_OFF (22u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.IWA */
#define IFX_MCDSLIGHT_CT_IWA_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.IWA */
#define IFX_MCDSLIGHT_CT_IWA_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.IWA */
#define IFX_MCDSLIGHT_CT_IWA_OFF (23u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.RES */
#define IFX_MCDSLIGHT_CT_RES_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.RES */
#define IFX_MCDSLIGHT_CT_RES_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.RES */
#define IFX_MCDSLIGHT_CT_RES_OFF (29u)

/** \brief Length for Ifx_MCDSLIGHT_CT_Bits.SETR */
#define IFX_MCDSLIGHT_CT_SETR_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_CT_Bits.SETR */
#define IFX_MCDSLIGHT_CT_SETR_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_CT_Bits.SETR */
#define IFX_MCDSLIGHT_CT_SETR_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_Bits.TMUX0 */
#define IFX_MCDSLIGHT_MUX_TMUX0_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_Bits.TMUX0 */
#define IFX_MCDSLIGHT_MUX_TMUX0_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_Bits.TMUX0 */
#define IFX_MCDSLIGHT_MUX_TMUX0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_Bits.TM0_P */
#define IFX_MCDSLIGHT_MUX_TM0_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_Bits.TM0_P */
#define IFX_MCDSLIGHT_MUX_TM0_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_Bits.TM0_P */
#define IFX_MCDSLIGHT_MUX_TM0_P_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_Bits.TMUX1 */
#define IFX_MCDSLIGHT_MUX_TMUX1_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_Bits.TMUX1 */
#define IFX_MCDSLIGHT_MUX_TMUX1_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_Bits.TMUX1 */
#define IFX_MCDSLIGHT_MUX_TMUX1_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_Bits.TM1_P */
#define IFX_MCDSLIGHT_MUX_TM1_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_Bits.TM1_P */
#define IFX_MCDSLIGHT_MUX_TM1_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_Bits.TM1_P */
#define IFX_MCDSLIGHT_MUX_TM1_P_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_Bits.TMUX2 */
#define IFX_MCDSLIGHT_MUX_TMUX2_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_Bits.TMUX2 */
#define IFX_MCDSLIGHT_MUX_TMUX2_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_Bits.TMUX2 */
#define IFX_MCDSLIGHT_MUX_TMUX2_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_Bits.TM2_P */
#define IFX_MCDSLIGHT_MUX_TM2_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_Bits.TM2_P */
#define IFX_MCDSLIGHT_MUX_TM2_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_Bits.TM2_P */
#define IFX_MCDSLIGHT_MUX_TM2_P_OFF (23u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_Bits.TMUX3 */
#define IFX_MCDSLIGHT_MUX_TMUX3_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_Bits.TMUX3 */
#define IFX_MCDSLIGHT_MUX_TMUX3_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_Bits.TMUX3 */
#define IFX_MCDSLIGHT_MUX_TMUX3_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_Bits.TM3_P */
#define IFX_MCDSLIGHT_MUX_TM3_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_Bits.TM3_P */
#define IFX_MCDSLIGHT_MUX_TM3_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_Bits.TM3_P */
#define IFX_MCDSLIGHT_MUX_TM3_P_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_SESSIDL_Bits.KEY_31_0 */
#define IFX_MCDSLIGHT_SESSIDL_KEY_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_SESSIDL_Bits.KEY_31_0 */
#define IFX_MCDSLIGHT_SESSIDL_KEY_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_SESSIDL_Bits.KEY_31_0 */
#define IFX_MCDSLIGHT_SESSIDL_KEY_31_0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_SESSIDH_Bits.KEY_63_32 */
#define IFX_MCDSLIGHT_SESSIDH_KEY_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_SESSIDH_Bits.KEY_63_32 */
#define IFX_MCDSLIGHT_SESSIDH_KEY_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_SESSIDH_Bits.KEY_63_32 */
#define IFX_MCDSLIGHT_SESSIDH_KEY_63_32_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX0 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX0_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX0 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX0_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX0 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX1 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX1_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX1 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX1_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX1 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX1_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX2 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX2_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX2 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX2_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_MUX2 */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_MUX2_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_TM_P */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_TM_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_TM_P */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_TM_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.TC_TM_P */
#define IFX_MCDSLIGHT_MUX_TC_RC_TC_TM_P_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.RC */
#define IFX_MCDSLIGHT_MUX_TC_RC_RC_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.RC */
#define IFX_MCDSLIGHT_MUX_TC_RC_RC_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.RC */
#define IFX_MCDSLIGHT_MUX_TC_RC_RC_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.RC_P */
#define IFX_MCDSLIGHT_MUX_TC_RC_RC_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.RC_P */
#define IFX_MCDSLIGHT_MUX_TC_RC_RC_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MUX_TC_RC_Bits.RC_P */
#define IFX_MCDSLIGHT_MUX_TC_RC_RC_P_OFF (27u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN0 */
#define IFX_MCDSLIGHT_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN0 */
#define IFX_MCDSLIGHT_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN0 */
#define IFX_MCDSLIGHT_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN1 */
#define IFX_MCDSLIGHT_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN1 */
#define IFX_MCDSLIGHT_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN1 */
#define IFX_MCDSLIGHT_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN2 */
#define IFX_MCDSLIGHT_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN2 */
#define IFX_MCDSLIGHT_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN2 */
#define IFX_MCDSLIGHT_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN3 */
#define IFX_MCDSLIGHT_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN3 */
#define IFX_MCDSLIGHT_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN3 */
#define IFX_MCDSLIGHT_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN4 */
#define IFX_MCDSLIGHT_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN4 */
#define IFX_MCDSLIGHT_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN4 */
#define IFX_MCDSLIGHT_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN5 */
#define IFX_MCDSLIGHT_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN5 */
#define IFX_MCDSLIGHT_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN5 */
#define IFX_MCDSLIGHT_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN6 */
#define IFX_MCDSLIGHT_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN6 */
#define IFX_MCDSLIGHT_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN6 */
#define IFX_MCDSLIGHT_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN7 */
#define IFX_MCDSLIGHT_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN7 */
#define IFX_MCDSLIGHT_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN7 */
#define IFX_MCDSLIGHT_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN8 */
#define IFX_MCDSLIGHT_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN8 */
#define IFX_MCDSLIGHT_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN8 */
#define IFX_MCDSLIGHT_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN9 */
#define IFX_MCDSLIGHT_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN9 */
#define IFX_MCDSLIGHT_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN9 */
#define IFX_MCDSLIGHT_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN10 */
#define IFX_MCDSLIGHT_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN10 */
#define IFX_MCDSLIGHT_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN10 */
#define IFX_MCDSLIGHT_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN11 */
#define IFX_MCDSLIGHT_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN11 */
#define IFX_MCDSLIGHT_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN11 */
#define IFX_MCDSLIGHT_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN12 */
#define IFX_MCDSLIGHT_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN12 */
#define IFX_MCDSLIGHT_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN12 */
#define IFX_MCDSLIGHT_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN13 */
#define IFX_MCDSLIGHT_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN13 */
#define IFX_MCDSLIGHT_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN13 */
#define IFX_MCDSLIGHT_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN14 */
#define IFX_MCDSLIGHT_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN14 */
#define IFX_MCDSLIGHT_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN14 */
#define IFX_MCDSLIGHT_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN15 */
#define IFX_MCDSLIGHT_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN15 */
#define IFX_MCDSLIGHT_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN15 */
#define IFX_MCDSLIGHT_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN16 */
#define IFX_MCDSLIGHT_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN16 */
#define IFX_MCDSLIGHT_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN16 */
#define IFX_MCDSLIGHT_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN17 */
#define IFX_MCDSLIGHT_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN17 */
#define IFX_MCDSLIGHT_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN17 */
#define IFX_MCDSLIGHT_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN18 */
#define IFX_MCDSLIGHT_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN18 */
#define IFX_MCDSLIGHT_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN18 */
#define IFX_MCDSLIGHT_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN19 */
#define IFX_MCDSLIGHT_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN19 */
#define IFX_MCDSLIGHT_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN19 */
#define IFX_MCDSLIGHT_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN20 */
#define IFX_MCDSLIGHT_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN20 */
#define IFX_MCDSLIGHT_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN20 */
#define IFX_MCDSLIGHT_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN21 */
#define IFX_MCDSLIGHT_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN21 */
#define IFX_MCDSLIGHT_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN21 */
#define IFX_MCDSLIGHT_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN22 */
#define IFX_MCDSLIGHT_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN22 */
#define IFX_MCDSLIGHT_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN22 */
#define IFX_MCDSLIGHT_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN23 */
#define IFX_MCDSLIGHT_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN23 */
#define IFX_MCDSLIGHT_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN23 */
#define IFX_MCDSLIGHT_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN24 */
#define IFX_MCDSLIGHT_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN24 */
#define IFX_MCDSLIGHT_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN24 */
#define IFX_MCDSLIGHT_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN25 */
#define IFX_MCDSLIGHT_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN25 */
#define IFX_MCDSLIGHT_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN25 */
#define IFX_MCDSLIGHT_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN26 */
#define IFX_MCDSLIGHT_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN26 */
#define IFX_MCDSLIGHT_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN26 */
#define IFX_MCDSLIGHT_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN27 */
#define IFX_MCDSLIGHT_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN27 */
#define IFX_MCDSLIGHT_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN27 */
#define IFX_MCDSLIGHT_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN28 */
#define IFX_MCDSLIGHT_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN28 */
#define IFX_MCDSLIGHT_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN28 */
#define IFX_MCDSLIGHT_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN29 */
#define IFX_MCDSLIGHT_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN29 */
#define IFX_MCDSLIGHT_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN29 */
#define IFX_MCDSLIGHT_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN30 */
#define IFX_MCDSLIGHT_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN30 */
#define IFX_MCDSLIGHT_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN30 */
#define IFX_MCDSLIGHT_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_MCDSLIGHT_ACCEN0_Bits.EN31 */
#define IFX_MCDSLIGHT_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_ACCEN0_Bits.EN31 */
#define IFX_MCDSLIGHT_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_ACCEN0_Bits.EN31 */
#define IFX_MCDSLIGHT_ACCEN0_EN31_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_FIFONOW_Bits.NOW */
#define IFX_MCDSLIGHT_FIFONOW_NOW_LEN (16u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFONOW_Bits.NOW */
#define IFX_MCDSLIGHT_FIFONOW_NOW_MSK (0xffffu)

/** \brief Offset for Ifx_MCDSLIGHT_FIFONOW_Bits.NOW */
#define IFX_MCDSLIGHT_FIFONOW_NOW_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOBOT_Bits.BOTTOM */
#define IFX_MCDSLIGHT_FIFOBOT_BOTTOM_LEN (9u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOBOT_Bits.BOTTOM */
#define IFX_MCDSLIGHT_FIFOBOT_BOTTOM_MSK (0x1ffu)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOBOT_Bits.BOTTOM */
#define IFX_MCDSLIGHT_FIFOBOT_BOTTOM_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOPRE_Bits.PRE */
#define IFX_MCDSLIGHT_FIFOPRE_PRE_LEN (16u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOPRE_Bits.PRE */
#define IFX_MCDSLIGHT_FIFOPRE_PRE_MSK (0xffffu)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOPRE_Bits.PRE */
#define IFX_MCDSLIGHT_FIFOPRE_PRE_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOTOP_Bits.TOP */
#define IFX_MCDSLIGHT_FIFOTOP_TOP_LEN (16u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOTOP_Bits.TOP */
#define IFX_MCDSLIGHT_FIFOTOP_TOP_MSK (0xffffu)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOTOP_Bits.TOP */
#define IFX_MCDSLIGHT_FIFOTOP_TOP_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRG */
#define IFX_MCDSLIGHT_FIFOCTL_TRG_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRG */
#define IFX_MCDSLIGHT_FIFOCTL_TRG_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRG */
#define IFX_MCDSLIGHT_FIFOCTL_TRG_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.FFE */
#define IFX_MCDSLIGHT_FIFOCTL_FFE_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.FFE */
#define IFX_MCDSLIGHT_FIFOCTL_FFE_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.FFE */
#define IFX_MCDSLIGHT_FIFOCTL_FFE_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.TME */
#define IFX_MCDSLIGHT_FIFOCTL_TME_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.TME */
#define IFX_MCDSLIGHT_FIFOCTL_TME_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.TME */
#define IFX_MCDSLIGHT_FIFOCTL_TME_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.DMC_MODE */
#define IFX_MCDSLIGHT_FIFOCTL_DMC_MODE_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.DMC_MODE */
#define IFX_MCDSLIGHT_FIFOCTL_DMC_MODE_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.DMC_MODE */
#define IFX_MCDSLIGHT_FIFOCTL_DMC_MODE_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.DMC_MODE_P */
#define IFX_MCDSLIGHT_FIFOCTL_DMC_MODE_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.DMC_MODE_P */
#define IFX_MCDSLIGHT_FIFOCTL_DMC_MODE_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.DMC_MODE_P */
#define IFX_MCDSLIGHT_FIFOCTL_DMC_MODE_P_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRDIS */
#define IFX_MCDSLIGHT_FIFOCTL_TRDIS_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRDIS */
#define IFX_MCDSLIGHT_FIFOCTL_TRDIS_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRDIS */
#define IFX_MCDSLIGHT_FIFOCTL_TRDIS_OFF (9u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRON */
#define IFX_MCDSLIGHT_FIFOCTL_TRON_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRON */
#define IFX_MCDSLIGHT_FIFOCTL_TRON_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.TRON */
#define IFX_MCDSLIGHT_FIFOCTL_TRON_OFF (10u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.TROFF */
#define IFX_MCDSLIGHT_FIFOCTL_TROFF_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.TROFF */
#define IFX_MCDSLIGHT_FIFOCTL_TROFF_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.TROFF */
#define IFX_MCDSLIGHT_FIFOCTL_TROFF_OFF (11u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.FLSH */
#define IFX_MCDSLIGHT_FIFOCTL_FLSH_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.FLSH */
#define IFX_MCDSLIGHT_FIFOCTL_FLSH_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.FLSH */
#define IFX_MCDSLIGHT_FIFOCTL_FLSH_OFF (13u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.CLR */
#define IFX_MCDSLIGHT_FIFOCTL_CLR_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.CLR */
#define IFX_MCDSLIGHT_FIFOCTL_CLR_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.CLR */
#define IFX_MCDSLIGHT_FIFOCTL_CLR_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.SET */
#define IFX_MCDSLIGHT_FIFOCTL_SET_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.SET */
#define IFX_MCDSLIGHT_FIFOCTL_SET_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.SET */
#define IFX_MCDSLIGHT_FIFOCTL_SET_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.NTN */
#define IFX_MCDSLIGHT_FIFOCTL_NTN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.NTN */
#define IFX_MCDSLIGHT_FIFOCTL_NTN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.NTN */
#define IFX_MCDSLIGHT_FIFOCTL_NTN_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.CTTO */
#define IFX_MCDSLIGHT_FIFOCTL_CTTO_LEN (7u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.CTTO */
#define IFX_MCDSLIGHT_FIFOCTL_CTTO_MSK (0x7fu)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.CTTO */
#define IFX_MCDSLIGHT_FIFOCTL_CTTO_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOCTL_Bits.CTTO_P */
#define IFX_MCDSLIGHT_FIFOCTL_CTTO_P_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOCTL_Bits.CTTO_P */
#define IFX_MCDSLIGHT_FIFOCTL_CTTO_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOCTL_Bits.CTTO_P */
#define IFX_MCDSLIGHT_FIFOCTL_CTTO_P_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOWARN_Bits.WARN */
#define IFX_MCDSLIGHT_FIFOWARN_WARN_LEN (16u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOWARN_Bits.WARN */
#define IFX_MCDSLIGHT_FIFOWARN_WARN_MSK (0xffffu)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOWARN_Bits.WARN */
#define IFX_MCDSLIGHT_FIFOWARN_WARN_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOWARN_Bits.OCDEN */
#define IFX_MCDSLIGHT_FIFOWARN_OCDEN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOWARN_Bits.OCDEN */
#define IFX_MCDSLIGHT_FIFOWARN_OCDEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOWARN_Bits.OCDEN */
#define IFX_MCDSLIGHT_FIFOWARN_OCDEN_OFF (30u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOWARN_Bits.EN */
#define IFX_MCDSLIGHT_FIFOWARN_EN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOWARN_Bits.EN */
#define IFX_MCDSLIGHT_FIFOWARN_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOWARN_Bits.EN */
#define IFX_MCDSLIGHT_FIFOWARN_EN_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOOVRCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_FIFOOVRCNT_COUNT_LEN (8u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOOVRCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_FIFOOVRCNT_COUNT_MSK (0xffu)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOOVRCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_FIFOOVRCNT_COUNT_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_FIFOOVRCNT_Bits.CLR */
#define IFX_MCDSLIGHT_FIFOOVRCNT_CLR_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFOOVRCNT_Bits.CLR */
#define IFX_MCDSLIGHT_FIFOOVRCNT_CLR_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_FIFOOVRCNT_Bits.CLR */
#define IFX_MCDSLIGHT_FIFOOVRCNT_CLR_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_FIFONTNOW_Bits.NTNOW */
#define IFX_MCDSLIGHT_FIFONTNOW_NTNOW_LEN (16u)

/** \brief Mask for Ifx_MCDSLIGHT_FIFONTNOW_Bits.NTNOW */
#define IFX_MCDSLIGHT_FIFONTNOW_NTNOW_MSK (0xffffu)

/** \brief Offset for Ifx_MCDSLIGHT_FIFONTNOW_Bits.NTNOW */
#define IFX_MCDSLIGHT_FIFONTNOW_NTNOW_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TSUREFCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_TSUREFCNT_COUNT_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TSUREFCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_TSUREFCNT_COUNT_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TSUREFCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_TSUREFCNT_COUNT_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TSUPRSCL_Bits.RELOAD */
#define IFX_MCDSLIGHT_TSUPRSCL_RELOAD_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TSUPRSCL_Bits.RELOAD */
#define IFX_MCDSLIGHT_TSUPRSCL_RELOAD_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TSUPRSCL_Bits.RELOAD */
#define IFX_MCDSLIGHT_TSUPRSCL_RELOAD_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TSUEMUCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_TSUEMUCNT_COUNT_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TSUEMUCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_TSUEMUCNT_COUNT_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TSUEMUCNT_Bits.COUNT */
#define IFX_MCDSLIGHT_TSUEMUCNT_COUNT_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_MCXEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_MCXACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_MCXACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_MCXACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_MCXACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_MCXACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_MCXACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.LV0 */
#define IFX_MCDSLIGHT_MCXACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.LV0 */
#define IFX_MCDSLIGHT_MCXACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.LV0 */
#define IFX_MCDSLIGHT_MCXACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_MCXACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_MCXACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_MCXACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_MCXACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_MCXACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_MCXACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.LV1 */
#define IFX_MCDSLIGHT_MCXACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.LV1 */
#define IFX_MCDSLIGHT_MCXACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.LV1 */
#define IFX_MCDSLIGHT_MCXACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_MCXACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_MCXACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_MCXACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_MCXACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_MCXACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_MCXACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.LV2 */
#define IFX_MCDSLIGHT_MCXACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.LV2 */
#define IFX_MCDSLIGHT_MCXACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.LV2 */
#define IFX_MCDSLIGHT_MCXACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_MCXACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_MCXACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_MCXACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_MCXACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_MCXACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_MCXACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDSLIGHT_MCXACT_Bits.LV3 */
#define IFX_MCDSLIGHT_MCXACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCXACT_Bits.LV3 */
#define IFX_MCDSLIGHT_MCXACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCXACT_Bits.LV3 */
#define IFX_MCDSLIGHT_MCXACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CCL_Bits.INC0 */
#define IFX_MCDSLIGHT_MCX_CCL_INC0_LEN (7u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CCL_Bits.INC0 */
#define IFX_MCDSLIGHT_MCX_CCL_INC0_MSK (0x7fu)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CCL_Bits.INC0 */
#define IFX_MCDSLIGHT_MCX_CCL_INC0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CCL_Bits.ILV0 */
#define IFX_MCDSLIGHT_MCX_CCL_ILV0_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CCL_Bits.ILV0 */
#define IFX_MCDSLIGHT_MCX_CCL_ILV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CCL_Bits.ILV0 */
#define IFX_MCDSLIGHT_MCX_CCL_ILV0_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLR0 */
#define IFX_MCDSLIGHT_MCX_CCL_CLR0_LEN (6u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLR0 */
#define IFX_MCDSLIGHT_MCX_CCL_CLR0_MSK (0x3fu)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLR0 */
#define IFX_MCDSLIGHT_MCX_CCL_CLR0_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLV0 */
#define IFX_MCDSLIGHT_MCX_CCL_CLV0_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLV0 */
#define IFX_MCDSLIGHT_MCX_CCL_CLV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLV0 */
#define IFX_MCDSLIGHT_MCX_CCL_CLV0_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CCL_Bits.INC1 */
#define IFX_MCDSLIGHT_MCX_CCL_INC1_LEN (7u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CCL_Bits.INC1 */
#define IFX_MCDSLIGHT_MCX_CCL_INC1_MSK (0x7fu)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CCL_Bits.INC1 */
#define IFX_MCDSLIGHT_MCX_CCL_INC1_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CCL_Bits.ILV1 */
#define IFX_MCDSLIGHT_MCX_CCL_ILV1_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CCL_Bits.ILV1 */
#define IFX_MCDSLIGHT_MCX_CCL_ILV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CCL_Bits.ILV1 */
#define IFX_MCDSLIGHT_MCX_CCL_ILV1_OFF (23u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLR1 */
#define IFX_MCDSLIGHT_MCX_CCL_CLR1_LEN (6u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLR1 */
#define IFX_MCDSLIGHT_MCX_CCL_CLR1_MSK (0x3fu)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLR1 */
#define IFX_MCDSLIGHT_MCX_CCL_CLR1_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLV1 */
#define IFX_MCDSLIGHT_MCX_CCL_CLV1_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLV1 */
#define IFX_MCDSLIGHT_MCX_CCL_CLV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CCL_Bits.CLV1 */
#define IFX_MCDSLIGHT_MCX_CCL_CLV1_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_LMT_Bits.LIMIT */
#define IFX_MCDSLIGHT_MCX_LMT_LIMIT_LEN (16u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_LMT_Bits.LIMIT */
#define IFX_MCDSLIGHT_MCX_LMT_LIMIT_MSK (0xffffu)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_LMT_Bits.LIMIT */
#define IFX_MCDSLIGHT_MCX_LMT_LIMIT_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_LMT_Bits.MOD0 */
#define IFX_MCDSLIGHT_MCX_LMT_MOD0_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_LMT_Bits.MOD0 */
#define IFX_MCDSLIGHT_MCX_LMT_MOD0_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_LMT_Bits.MOD0 */
#define IFX_MCDSLIGHT_MCX_LMT_MOD0_OFF (30u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_LMT_Bits.MOD1 */
#define IFX_MCDSLIGHT_MCX_LMT_MOD1_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_LMT_Bits.MOD1 */
#define IFX_MCDSLIGHT_MCX_LMT_MOD1_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_LMT_Bits.MOD1 */
#define IFX_MCDSLIGHT_MCX_LMT_MOD1_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_MCX_CNT_Bits.COUNT */
#define IFX_MCDSLIGHT_MCX_CNT_COUNT_LEN (16u)

/** \brief Mask for Ifx_MCDSLIGHT_MCX_CNT_Bits.COUNT */
#define IFX_MCDSLIGHT_MCX_CNT_COUNT_MSK (0xffffu)

/** \brief Offset for Ifx_MCDSLIGHT_MCX_CNT_Bits.COUNT */
#define IFX_MCDSLIGHT_MCX_CNT_COUNT_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.SUS */
#define IFX_MCDSLIGHT_TCXDCSTS_SUS_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.SUS */
#define IFX_MCDSLIGHT_TCXDCSTS_SUS_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.SUS */
#define IFX_MCDSLIGHT_TCXDCSTS_SUS_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.IDLE */
#define IFX_MCDSLIGHT_TCXDCSTS_IDLE_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.IDLE */
#define IFX_MCDSLIGHT_TCXDCSTS_IDLE_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.IDLE */
#define IFX_MCDSLIGHT_TCXDCSTS_IDLE_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.HALT */
#define IFX_MCDSLIGHT_TCXDCSTS_HALT_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.HALT */
#define IFX_MCDSLIGHT_TCXDCSTS_HALT_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.HALT */
#define IFX_MCDSLIGHT_TCXDCSTS_HALT_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.ISR */
#define IFX_MCDSLIGHT_TCXDCSTS_ISR_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.ISR */
#define IFX_MCDSLIGHT_TCXDCSTS_ISR_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.ISR */
#define IFX_MCDSLIGHT_TCXDCSTS_ISR_OFF (3u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.HBRK */
#define IFX_MCDSLIGHT_TCXDCSTS_HBRK_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.HBRK */
#define IFX_MCDSLIGHT_TCXDCSTS_HBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.HBRK */
#define IFX_MCDSLIGHT_TCXDCSTS_HBRK_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.SBRK */
#define IFX_MCDSLIGHT_TCXDCSTS_SBRK_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.SBRK */
#define IFX_MCDSLIGHT_TCXDCSTS_SBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.SBRK */
#define IFX_MCDSLIGHT_TCXDCSTS_SBRK_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.IEN */
#define IFX_MCDSLIGHT_TCXDCSTS_IEN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.IEN */
#define IFX_MCDSLIGHT_TCXDCSTS_IEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.IEN */
#define IFX_MCDSLIGHT_TCXDCSTS_IEN_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.DBGEN */
#define IFX_MCDSLIGHT_TCXDCSTS_DBGEN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.DBGEN */
#define IFX_MCDSLIGHT_TCXDCSTS_DBGEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.DBGEN */
#define IFX_MCDSLIGHT_TCXDCSTS_DBGEN_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.CLKDIV */
#define IFX_MCDSLIGHT_TCXDCSTS_CLKDIV_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.CLKDIV */
#define IFX_MCDSLIGHT_TCXDCSTS_CLKDIV_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.CLKDIV */
#define IFX_MCDSLIGHT_TCXDCSTS_CLKDIV_OFF (9u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDCSTS_Bits.NESTED_ISR */
#define IFX_MCDSLIGHT_TCXDCSTS_NESTED_ISR_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDCSTS_Bits.NESTED_ISR */
#define IFX_MCDSLIGHT_TCXDCSTS_NESTED_ISR_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDCSTS_Bits.NESTED_ISR */
#define IFX_MCDSLIGHT_TCXDCSTS_NESTED_ISR_OFF (11u)

/** \brief Length for Ifx_MCDSLIGHT_TCXCIP_Bits.CURRENT */
#define IFX_MCDSLIGHT_TCXCIP_CURRENT_LEN (31u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXCIP_Bits.CURRENT */
#define IFX_MCDSLIGHT_TCXCIP_CURRENT_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXCIP_Bits.CURRENT */
#define IFX_MCDSLIGHT_TCXCIP_CURRENT_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCXCFT_Bits.VSHRT_FCT */
#define IFX_MCDSLIGHT_TCXCFT_VSHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXCFT_Bits.VSHRT_FCT */
#define IFX_MCDSLIGHT_TCXCFT_VSHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXCFT_Bits.VSHRT_FCT */
#define IFX_MCDSLIGHT_TCXCFT_VSHRT_FCT_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXCFT_Bits.SHRT_FCT */
#define IFX_MCDSLIGHT_TCXCFT_SHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXCFT_Bits.SHRT_FCT */
#define IFX_MCDSLIGHT_TCXCFT_SHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXCFT_Bits.SHRT_FCT */
#define IFX_MCDSLIGHT_TCXCFT_SHRT_FCT_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_TCXPALLUTD_Bits.DATA */
#define IFX_MCDSLIGHT_TCXPALLUTD_DATA_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXPALLUTD_Bits.DATA */
#define IFX_MCDSLIGHT_TCXPALLUTD_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXPALLUTD_Bits.DATA */
#define IFX_MCDSLIGHT_TCXPALLUTD_DATA_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXPALLUTA_Bits.ADDR */
#define IFX_MCDSLIGHT_TCXPALLUTA_ADDR_LEN (10u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXPALLUTA_Bits.ADDR */
#define IFX_MCDSLIGHT_TCXPALLUTA_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXPALLUTA_Bits.ADDR */
#define IFX_MCDSLIGHT_TCXPALLUTA_ADDR_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_TCXPAL_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXPAL_BND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXPAL_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXPAL_BND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXPAL_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXPAL_BND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXPAL_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXPAL_RNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXPAL_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXPAL_RNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXPAL_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXPAL_RNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.OFFSET */
#define IFX_MCDSLIGHT_TCXPAL_MAP_OFFSET_LEN (10u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.OFFSET */
#define IFX_MCDSLIGHT_TCXPAL_MAP_OFFSET_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.OFFSET */
#define IFX_MCDSLIGHT_TCXPAL_MAP_OFFSET_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.GRAIN */
#define IFX_MCDSLIGHT_TCXPAL_MAP_GRAIN_LEN (3u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.GRAIN */
#define IFX_MCDSLIGHT_TCXPAL_MAP_GRAIN_MSK (0x7u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.GRAIN */
#define IFX_MCDSLIGHT_TCXPAL_MAP_GRAIN_OFF (28u)

/** \brief Length for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.EN */
#define IFX_MCDSLIGHT_TCXPAL_MAP_EN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.EN */
#define IFX_MCDSLIGHT_TCXPAL_MAP_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXPAL_MAP_Bits.EN */
#define IFX_MCDSLIGHT_TCXPAL_MAP_EN_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEA_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXEA_BND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEA_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXEA_BND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEA_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXEA_BND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEA_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXEA_RNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEA_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXEA_RNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEA_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXEA_RNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_BND_Bits.BOUND_31_0 */
#define IFX_MCDSLIGHT_TCXWD_BND_BOUND_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_BND_Bits.BOUND_31_0 */
#define IFX_MCDSLIGHT_TCXWD_BND_BOUND_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_BND_Bits.BOUND_31_0 */
#define IFX_MCDSLIGHT_TCXWD_BND_BOUND_31_0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_HBND_Bits.BOUND_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HBND_BOUND_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_HBND_Bits.BOUND_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HBND_BOUND_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_HBND_Bits.BOUND_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HBND_BOUND_63_32_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_RNG_Bits.RANGE_31_0 */
#define IFX_MCDSLIGHT_TCXWD_RNG_RANGE_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_RNG_Bits.RANGE_31_0 */
#define IFX_MCDSLIGHT_TCXWD_RNG_RANGE_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_RNG_Bits.RANGE_31_0 */
#define IFX_MCDSLIGHT_TCXWD_RNG_RANGE_31_0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_HRNG_Bits.RANGE_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HRNG_RANGE_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_HRNG_Bits.RANGE_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HRNG_RANGE_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_HRNG_Bits.RANGE_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HRNG_RANGE_63_32_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_MSK_Bits.MASK_31_0 */
#define IFX_MCDSLIGHT_TCXWD_MSK_MASK_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_MSK_Bits.MASK_31_0 */
#define IFX_MCDSLIGHT_TCXWD_MSK_MASK_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_MSK_Bits.MASK_31_0 */
#define IFX_MCDSLIGHT_TCXWD_MSK_MASK_31_0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_HMSK_Bits.MASK_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HMSK_MASK_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_HMSK_Bits.MASK_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HMSK_MASK_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_HMSK_Bits.MASK_63_32 */
#define IFX_MCDSLIGHT_TCXWD_HMSK_MASK_63_32_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.SIGN */
#define IFX_MCDSLIGHT_TCXWD_SGN_SIGN_LEN (6u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.SIGN */
#define IFX_MCDSLIGHT_TCXWD_SGN_SIGN_MSK (0x3fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.SIGN */
#define IFX_MCDSLIGHT_TCXWD_SGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.EITHER */
#define IFX_MCDSLIGHT_TCXWD_SGN_EITHER_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.EITHER */
#define IFX_MCDSLIGHT_TCXWD_SGN_EITHER_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.EITHER */
#define IFX_MCDSLIGHT_TCXWD_SGN_EITHER_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.BELOW */
#define IFX_MCDSLIGHT_TCXWD_SGN_BELOW_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.BELOW */
#define IFX_MCDSLIGHT_TCXWD_SGN_BELOW_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.BELOW */
#define IFX_MCDSLIGHT_TCXWD_SGN_BELOW_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.RELOAD */
#define IFX_MCDSLIGHT_TCXWD_SGN_RELOAD_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.RELOAD */
#define IFX_MCDSLIGHT_TCXWD_SGN_RELOAD_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXWD_SGN_Bits.RELOAD */
#define IFX_MCDSLIGHT_TCXWD_SGN_RELOAD_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_TCXAC_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXAC_BND_BOUND_LEN (14u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXAC_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXAC_BND_BOUND_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXAC_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXAC_BND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXAC_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXAC_RNG_RANGE_LEN (14u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXAC_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXAC_RNG_RANGE_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXAC_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXAC_RNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.SVM */
#define IFX_MCDSLIGHT_TCXAC_MSK_SVM_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.SVM */
#define IFX_MCDSLIGHT_TCXAC_MSK_SVM_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.SVM */
#define IFX_MCDSLIGHT_TCXAC_MSK_SVM_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.MASTER */
#define IFX_MCDSLIGHT_TCXAC_MSK_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.MASTER */
#define IFX_MCDSLIGHT_TCXAC_MSK_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.MASTER */
#define IFX_MCDSLIGHT_TCXAC_MSK_MASTER_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.SUBCHANNEL */
#define IFX_MCDSLIGHT_TCXAC_MSK_SUBCHANNEL_LEN (7u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.SUBCHANNEL */
#define IFX_MCDSLIGHT_TCXAC_MSK_SUBCHANNEL_MSK (0x7fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.SUBCHANNEL */
#define IFX_MCDSLIGHT_TCXAC_MSK_SUBCHANNEL_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.WR */
#define IFX_MCDSLIGHT_TCXAC_MSK_WR_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.WR */
#define IFX_MCDSLIGHT_TCXAC_MSK_WR_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.WR */
#define IFX_MCDSLIGHT_TCXAC_MSK_WR_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.RD */
#define IFX_MCDSLIGHT_TCXAC_MSK_RD_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.RD */
#define IFX_MCDSLIGHT_TCXAC_MSK_RD_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.RD */
#define IFX_MCDSLIGHT_TCXAC_MSK_RD_OFF (13u)

/** \brief Length for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.MSK */
#define IFX_MCDSLIGHT_TCXAC_MSK_MSK_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.MSK */
#define IFX_MCDSLIGHT_TCXAC_MSK_MSK_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXAC_MSK_Bits.MSK */
#define IFX_MCDSLIGHT_TCXAC_MSK_MSK_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.CURLVL0 */
#define IFX_MCDSLIGHT_TCXDTUFLV_CURLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.CURLVL0 */
#define IFX_MCDSLIGHT_TCXDTUFLV_CURLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.CURLVL0 */
#define IFX_MCDSLIGHT_TCXDTUFLV_CURLVL0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDSLIGHT_TCXDTUFLV_MAXLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDSLIGHT_TCXDTUFLV_MAXLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDSLIGHT_TCXDTUFLV_MAXLVL0_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.CURLVL1 */
#define IFX_MCDSLIGHT_TCXDTUFLV_CURLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.CURLVL1 */
#define IFX_MCDSLIGHT_TCXDTUFLV_CURLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.CURLVL1 */
#define IFX_MCDSLIGHT_TCXDTUFLV_CURLVL1_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDSLIGHT_TCXDTUFLV_MAXLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDSLIGHT_TCXDTUFLV_MAXLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDSLIGHT_TCXDTUFLV_MAXLVL1_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_TCXEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_TCXACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_TCXACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_TCXACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_TCXACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_TCXACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_TCXACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.LV0 */
#define IFX_MCDSLIGHT_TCXACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.LV0 */
#define IFX_MCDSLIGHT_TCXACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.LV0 */
#define IFX_MCDSLIGHT_TCXACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_TCXACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_TCXACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_TCXACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_TCXACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_TCXACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_TCXACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.LV1 */
#define IFX_MCDSLIGHT_TCXACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.LV1 */
#define IFX_MCDSLIGHT_TCXACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.LV1 */
#define IFX_MCDSLIGHT_TCXACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_TCXACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_TCXACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_TCXACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_TCXACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_TCXACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_TCXACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.LV2 */
#define IFX_MCDSLIGHT_TCXACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.LV2 */
#define IFX_MCDSLIGHT_TCXACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.LV2 */
#define IFX_MCDSLIGHT_TCXACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_TCXACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_TCXACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_TCXACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_TCXACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_TCXACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_TCXACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDSLIGHT_TCXACT_Bits.LV3 */
#define IFX_MCDSLIGHT_TCXACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXACT_Bits.LV3 */
#define IFX_MCDSLIGHT_TCXACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCXACT_Bits.LV3 */
#define IFX_MCDSLIGHT_TCXACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_TCXIP_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXIP_BND_BOUND_LEN (31u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXIP_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXIP_BND_BOUND_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXIP_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCXIP_BND_BOUND_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCXIP_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXIP_RNG_RANGE_LEN (31u)

/** \brief Mask for Ifx_MCDSLIGHT_TCXIP_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXIP_RNG_RANGE_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCXIP_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCXIP_RNG_RANGE_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.SUS */
#define IFX_MCDSLIGHT_TCYDCSTS_SUS_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.SUS */
#define IFX_MCDSLIGHT_TCYDCSTS_SUS_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.SUS */
#define IFX_MCDSLIGHT_TCYDCSTS_SUS_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.IDLE */
#define IFX_MCDSLIGHT_TCYDCSTS_IDLE_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.IDLE */
#define IFX_MCDSLIGHT_TCYDCSTS_IDLE_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.IDLE */
#define IFX_MCDSLIGHT_TCYDCSTS_IDLE_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.HALT */
#define IFX_MCDSLIGHT_TCYDCSTS_HALT_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.HALT */
#define IFX_MCDSLIGHT_TCYDCSTS_HALT_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.HALT */
#define IFX_MCDSLIGHT_TCYDCSTS_HALT_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.ISR */
#define IFX_MCDSLIGHT_TCYDCSTS_ISR_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.ISR */
#define IFX_MCDSLIGHT_TCYDCSTS_ISR_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.ISR */
#define IFX_MCDSLIGHT_TCYDCSTS_ISR_OFF (3u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.HBRK */
#define IFX_MCDSLIGHT_TCYDCSTS_HBRK_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.HBRK */
#define IFX_MCDSLIGHT_TCYDCSTS_HBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.HBRK */
#define IFX_MCDSLIGHT_TCYDCSTS_HBRK_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.SBRK */
#define IFX_MCDSLIGHT_TCYDCSTS_SBRK_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.SBRK */
#define IFX_MCDSLIGHT_TCYDCSTS_SBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.SBRK */
#define IFX_MCDSLIGHT_TCYDCSTS_SBRK_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.IEN */
#define IFX_MCDSLIGHT_TCYDCSTS_IEN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.IEN */
#define IFX_MCDSLIGHT_TCYDCSTS_IEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.IEN */
#define IFX_MCDSLIGHT_TCYDCSTS_IEN_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.DBGEN */
#define IFX_MCDSLIGHT_TCYDCSTS_DBGEN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.DBGEN */
#define IFX_MCDSLIGHT_TCYDCSTS_DBGEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.DBGEN */
#define IFX_MCDSLIGHT_TCYDCSTS_DBGEN_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.CLKDIV */
#define IFX_MCDSLIGHT_TCYDCSTS_CLKDIV_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.CLKDIV */
#define IFX_MCDSLIGHT_TCYDCSTS_CLKDIV_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.CLKDIV */
#define IFX_MCDSLIGHT_TCYDCSTS_CLKDIV_OFF (9u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDCSTS_Bits.NESTED_ISR */
#define IFX_MCDSLIGHT_TCYDCSTS_NESTED_ISR_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDCSTS_Bits.NESTED_ISR */
#define IFX_MCDSLIGHT_TCYDCSTS_NESTED_ISR_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDCSTS_Bits.NESTED_ISR */
#define IFX_MCDSLIGHT_TCYDCSTS_NESTED_ISR_OFF (11u)

/** \brief Length for Ifx_MCDSLIGHT_TCYCIP_Bits.CURRENT */
#define IFX_MCDSLIGHT_TCYCIP_CURRENT_LEN (31u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYCIP_Bits.CURRENT */
#define IFX_MCDSLIGHT_TCYCIP_CURRENT_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYCIP_Bits.CURRENT */
#define IFX_MCDSLIGHT_TCYCIP_CURRENT_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCYCFT_Bits.VSHRT_FCT */
#define IFX_MCDSLIGHT_TCYCFT_VSHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYCFT_Bits.VSHRT_FCT */
#define IFX_MCDSLIGHT_TCYCFT_VSHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYCFT_Bits.VSHRT_FCT */
#define IFX_MCDSLIGHT_TCYCFT_VSHRT_FCT_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYCFT_Bits.SHRT_FCT */
#define IFX_MCDSLIGHT_TCYCFT_SHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYCFT_Bits.SHRT_FCT */
#define IFX_MCDSLIGHT_TCYCFT_SHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYCFT_Bits.SHRT_FCT */
#define IFX_MCDSLIGHT_TCYCFT_SHRT_FCT_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_TCYPALLUTD_Bits.DATA */
#define IFX_MCDSLIGHT_TCYPALLUTD_DATA_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYPALLUTD_Bits.DATA */
#define IFX_MCDSLIGHT_TCYPALLUTD_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYPALLUTD_Bits.DATA */
#define IFX_MCDSLIGHT_TCYPALLUTD_DATA_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYPALLUTA_Bits.ADDR */
#define IFX_MCDSLIGHT_TCYPALLUTA_ADDR_LEN (10u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYPALLUTA_Bits.ADDR */
#define IFX_MCDSLIGHT_TCYPALLUTA_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYPALLUTA_Bits.ADDR */
#define IFX_MCDSLIGHT_TCYPALLUTA_ADDR_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_TCYPAL_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYPAL_BND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYPAL_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYPAL_BND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYPAL_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYPAL_BND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYPAL_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYPAL_RNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYPAL_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYPAL_RNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYPAL_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYPAL_RNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.OFFSET */
#define IFX_MCDSLIGHT_TCYPAL_MAP_OFFSET_LEN (10u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.OFFSET */
#define IFX_MCDSLIGHT_TCYPAL_MAP_OFFSET_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.OFFSET */
#define IFX_MCDSLIGHT_TCYPAL_MAP_OFFSET_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.GRAIN */
#define IFX_MCDSLIGHT_TCYPAL_MAP_GRAIN_LEN (3u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.GRAIN */
#define IFX_MCDSLIGHT_TCYPAL_MAP_GRAIN_MSK (0x7u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.GRAIN */
#define IFX_MCDSLIGHT_TCYPAL_MAP_GRAIN_OFF (28u)

/** \brief Length for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.EN */
#define IFX_MCDSLIGHT_TCYPAL_MAP_EN_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.EN */
#define IFX_MCDSLIGHT_TCYPAL_MAP_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYPAL_MAP_Bits.EN */
#define IFX_MCDSLIGHT_TCYPAL_MAP_EN_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEA_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYEA_BND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEA_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYEA_BND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEA_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYEA_BND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEA_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYEA_RNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEA_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYEA_RNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEA_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYEA_RNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_BND_Bits.BOUND_31_0 */
#define IFX_MCDSLIGHT_TCYWD_BND_BOUND_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_BND_Bits.BOUND_31_0 */
#define IFX_MCDSLIGHT_TCYWD_BND_BOUND_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_BND_Bits.BOUND_31_0 */
#define IFX_MCDSLIGHT_TCYWD_BND_BOUND_31_0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_HBND_Bits.BOUND_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HBND_BOUND_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_HBND_Bits.BOUND_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HBND_BOUND_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_HBND_Bits.BOUND_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HBND_BOUND_63_32_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_RNG_Bits.RANGE_31_0 */
#define IFX_MCDSLIGHT_TCYWD_RNG_RANGE_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_RNG_Bits.RANGE_31_0 */
#define IFX_MCDSLIGHT_TCYWD_RNG_RANGE_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_RNG_Bits.RANGE_31_0 */
#define IFX_MCDSLIGHT_TCYWD_RNG_RANGE_31_0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_HRNG_Bits.RANGE_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HRNG_RANGE_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_HRNG_Bits.RANGE_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HRNG_RANGE_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_HRNG_Bits.RANGE_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HRNG_RANGE_63_32_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_MSK_Bits.MASK_31_0 */
#define IFX_MCDSLIGHT_TCYWD_MSK_MASK_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_MSK_Bits.MASK_31_0 */
#define IFX_MCDSLIGHT_TCYWD_MSK_MASK_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_MSK_Bits.MASK_31_0 */
#define IFX_MCDSLIGHT_TCYWD_MSK_MASK_31_0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_HMSK_Bits.MASK_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HMSK_MASK_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_HMSK_Bits.MASK_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HMSK_MASK_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_HMSK_Bits.MASK_63_32 */
#define IFX_MCDSLIGHT_TCYWD_HMSK_MASK_63_32_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.SIGN */
#define IFX_MCDSLIGHT_TCYWD_SGN_SIGN_LEN (6u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.SIGN */
#define IFX_MCDSLIGHT_TCYWD_SGN_SIGN_MSK (0x3fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.SIGN */
#define IFX_MCDSLIGHT_TCYWD_SGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.EITHER */
#define IFX_MCDSLIGHT_TCYWD_SGN_EITHER_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.EITHER */
#define IFX_MCDSLIGHT_TCYWD_SGN_EITHER_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.EITHER */
#define IFX_MCDSLIGHT_TCYWD_SGN_EITHER_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.BELOW */
#define IFX_MCDSLIGHT_TCYWD_SGN_BELOW_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.BELOW */
#define IFX_MCDSLIGHT_TCYWD_SGN_BELOW_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.BELOW */
#define IFX_MCDSLIGHT_TCYWD_SGN_BELOW_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.RELOAD */
#define IFX_MCDSLIGHT_TCYWD_SGN_RELOAD_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.RELOAD */
#define IFX_MCDSLIGHT_TCYWD_SGN_RELOAD_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYWD_SGN_Bits.RELOAD */
#define IFX_MCDSLIGHT_TCYWD_SGN_RELOAD_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_TCYAC_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYAC_BND_BOUND_LEN (14u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYAC_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYAC_BND_BOUND_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYAC_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYAC_BND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYAC_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYAC_RNG_RANGE_LEN (14u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYAC_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYAC_RNG_RANGE_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYAC_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYAC_RNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.SVM */
#define IFX_MCDSLIGHT_TCYAC_MSK_SVM_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.SVM */
#define IFX_MCDSLIGHT_TCYAC_MSK_SVM_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.SVM */
#define IFX_MCDSLIGHT_TCYAC_MSK_SVM_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.MASTER */
#define IFX_MCDSLIGHT_TCYAC_MSK_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.MASTER */
#define IFX_MCDSLIGHT_TCYAC_MSK_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.MASTER */
#define IFX_MCDSLIGHT_TCYAC_MSK_MASTER_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.SUBCHANNEL */
#define IFX_MCDSLIGHT_TCYAC_MSK_SUBCHANNEL_LEN (7u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.SUBCHANNEL */
#define IFX_MCDSLIGHT_TCYAC_MSK_SUBCHANNEL_MSK (0x7fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.SUBCHANNEL */
#define IFX_MCDSLIGHT_TCYAC_MSK_SUBCHANNEL_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.WR */
#define IFX_MCDSLIGHT_TCYAC_MSK_WR_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.WR */
#define IFX_MCDSLIGHT_TCYAC_MSK_WR_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.WR */
#define IFX_MCDSLIGHT_TCYAC_MSK_WR_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.RD */
#define IFX_MCDSLIGHT_TCYAC_MSK_RD_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.RD */
#define IFX_MCDSLIGHT_TCYAC_MSK_RD_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.RD */
#define IFX_MCDSLIGHT_TCYAC_MSK_RD_OFF (13u)

/** \brief Length for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.MSK */
#define IFX_MCDSLIGHT_TCYAC_MSK_MSK_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.MSK */
#define IFX_MCDSLIGHT_TCYAC_MSK_MSK_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYAC_MSK_Bits.MSK */
#define IFX_MCDSLIGHT_TCYAC_MSK_MSK_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.CURLVL0 */
#define IFX_MCDSLIGHT_TCYDTUFLV_CURLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.CURLVL0 */
#define IFX_MCDSLIGHT_TCYDTUFLV_CURLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.CURLVL0 */
#define IFX_MCDSLIGHT_TCYDTUFLV_CURLVL0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDSLIGHT_TCYDTUFLV_MAXLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDSLIGHT_TCYDTUFLV_MAXLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDSLIGHT_TCYDTUFLV_MAXLVL0_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.CURLVL1 */
#define IFX_MCDSLIGHT_TCYDTUFLV_CURLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.CURLVL1 */
#define IFX_MCDSLIGHT_TCYDTUFLV_CURLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.CURLVL1 */
#define IFX_MCDSLIGHT_TCYDTUFLV_CURLVL1_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDSLIGHT_TCYDTUFLV_MAXLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDSLIGHT_TCYDTUFLV_MAXLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDSLIGHT_TCYDTUFLV_MAXLVL1_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ0 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ1 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ2 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ3 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ4 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ5 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ6 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ7 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ8 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ9 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ10 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ11 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ12 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ13 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ14 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYEVT_Bits.EIQ15 */
#define IFX_MCDSLIGHT_TCYEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_TCYACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_TCYACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.AIS0 */
#define IFX_MCDSLIGHT_TCYACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_TCYACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_TCYACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ0 */
#define IFX_MCDSLIGHT_TCYACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.LV0 */
#define IFX_MCDSLIGHT_TCYACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.LV0 */
#define IFX_MCDSLIGHT_TCYACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.LV0 */
#define IFX_MCDSLIGHT_TCYACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_TCYACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_TCYACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.AIS1 */
#define IFX_MCDSLIGHT_TCYACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_TCYACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_TCYACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ1 */
#define IFX_MCDSLIGHT_TCYACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.LV1 */
#define IFX_MCDSLIGHT_TCYACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.LV1 */
#define IFX_MCDSLIGHT_TCYACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.LV1 */
#define IFX_MCDSLIGHT_TCYACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_TCYACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_TCYACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.AIS2 */
#define IFX_MCDSLIGHT_TCYACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_TCYACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_TCYACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ2 */
#define IFX_MCDSLIGHT_TCYACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.LV2 */
#define IFX_MCDSLIGHT_TCYACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.LV2 */
#define IFX_MCDSLIGHT_TCYACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.LV2 */
#define IFX_MCDSLIGHT_TCYACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_TCYACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_TCYACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.AIS3 */
#define IFX_MCDSLIGHT_TCYACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_TCYACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_TCYACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.AIQ3 */
#define IFX_MCDSLIGHT_TCYACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDSLIGHT_TCYACT_Bits.LV3 */
#define IFX_MCDSLIGHT_TCYACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYACT_Bits.LV3 */
#define IFX_MCDSLIGHT_TCYACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDSLIGHT_TCYACT_Bits.LV3 */
#define IFX_MCDSLIGHT_TCYACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDSLIGHT_TCYIP_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYIP_BND_BOUND_LEN (31u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYIP_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYIP_BND_BOUND_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYIP_BND_Bits.BOUND */
#define IFX_MCDSLIGHT_TCYIP_BND_BOUND_OFF (1u)

/** \brief Length for Ifx_MCDSLIGHT_TCYIP_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYIP_RNG_RANGE_LEN (31u)

/** \brief Mask for Ifx_MCDSLIGHT_TCYIP_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYIP_RNG_RANGE_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDSLIGHT_TCYIP_RNG_Bits.RANGE */
#define IFX_MCDSLIGHT_TCYIP_RNG_RANGE_OFF (1u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXMCDSLIGHT_BF_H */
