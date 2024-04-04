/**
 * \file IfxConverter_bf.h
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
 * \defgroup IfxSfr_Converter_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Converter_Registers
 * 
 */
#ifndef IFXCONVERTER_BF_H
#define IFXCONVERTER_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Converter_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_CONVERTER_CLC_Bits.DISR */
#define IFX_CONVERTER_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_CLC_Bits.DISR */
#define IFX_CONVERTER_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_CLC_Bits.DISR */
#define IFX_CONVERTER_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_CONVERTER_CLC_Bits.DISS */
#define IFX_CONVERTER_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_CLC_Bits.DISS */
#define IFX_CONVERTER_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_CLC_Bits.DISS */
#define IFX_CONVERTER_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_CONVERTER_CLC_Bits.EDIS */
#define IFX_CONVERTER_CLC_EDIS_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_CLC_Bits.EDIS */
#define IFX_CONVERTER_CLC_EDIS_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_CLC_Bits.EDIS */
#define IFX_CONVERTER_CLC_EDIS_OFF (3u)

/** \brief Length for Ifx_CONVERTER_ID_Bits.MOD_REV */
#define IFX_CONVERTER_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_CONVERTER_ID_Bits.MOD_REV */
#define IFX_CONVERTER_ID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_CONVERTER_ID_Bits.MOD_REV */
#define IFX_CONVERTER_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_CONVERTER_ID_Bits.MOD_TYPE */
#define IFX_CONVERTER_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_CONVERTER_ID_Bits.MOD_TYPE */
#define IFX_CONVERTER_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_CONVERTER_ID_Bits.MOD_TYPE */
#define IFX_CONVERTER_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_CONVERTER_ID_Bits.MOD_NUMBER */
#define IFX_CONVERTER_ID_MOD_NUMBER_LEN (16u)

/** \brief Mask for Ifx_CONVERTER_ID_Bits.MOD_NUMBER */
#define IFX_CONVERTER_ID_MOD_NUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_CONVERTER_ID_Bits.MOD_NUMBER */
#define IFX_CONVERTER_ID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_CONVERTER_OCS_Bits.SUS */
#define IFX_CONVERTER_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_CONVERTER_OCS_Bits.SUS */
#define IFX_CONVERTER_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_CONVERTER_OCS_Bits.SUS */
#define IFX_CONVERTER_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_CONVERTER_OCS_Bits.SUS_P */
#define IFX_CONVERTER_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_OCS_Bits.SUS_P */
#define IFX_CONVERTER_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_OCS_Bits.SUS_P */
#define IFX_CONVERTER_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_CONVERTER_OCS_Bits.SUSSTA */
#define IFX_CONVERTER_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_OCS_Bits.SUSSTA */
#define IFX_CONVERTER_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_OCS_Bits.SUSSTA */
#define IFX_CONVERTER_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_CONVERTER_KRSTCLR_Bits.CLR */
#define IFX_CONVERTER_KRSTCLR_CLR_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_KRSTCLR_Bits.CLR */
#define IFX_CONVERTER_KRSTCLR_CLR_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_KRSTCLR_Bits.CLR */
#define IFX_CONVERTER_KRSTCLR_CLR_OFF (0u)

/** \brief Length for Ifx_CONVERTER_KRST1_Bits.RST */
#define IFX_CONVERTER_KRST1_RST_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_KRST1_Bits.RST */
#define IFX_CONVERTER_KRST1_RST_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_KRST1_Bits.RST */
#define IFX_CONVERTER_KRST1_RST_OFF (0u)

/** \brief Length for Ifx_CONVERTER_KRST0_Bits.RST */
#define IFX_CONVERTER_KRST0_RST_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_KRST0_Bits.RST */
#define IFX_CONVERTER_KRST0_RST_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_KRST0_Bits.RST */
#define IFX_CONVERTER_KRST0_RST_OFF (0u)

/** \brief Length for Ifx_CONVERTER_KRST0_Bits.RSTSTAT */
#define IFX_CONVERTER_KRST0_RSTSTAT_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_KRST0_Bits.RSTSTAT */
#define IFX_CONVERTER_KRST0_RSTSTAT_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_KRST0_Bits.RSTSTAT */
#define IFX_CONVERTER_KRST0_RSTSTAT_OFF (1u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN0 */
#define IFX_CONVERTER_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN0 */
#define IFX_CONVERTER_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN0 */
#define IFX_CONVERTER_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN1 */
#define IFX_CONVERTER_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN1 */
#define IFX_CONVERTER_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN1 */
#define IFX_CONVERTER_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN2 */
#define IFX_CONVERTER_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN2 */
#define IFX_CONVERTER_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN2 */
#define IFX_CONVERTER_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN3 */
#define IFX_CONVERTER_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN3 */
#define IFX_CONVERTER_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN3 */
#define IFX_CONVERTER_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN4 */
#define IFX_CONVERTER_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN4 */
#define IFX_CONVERTER_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN4 */
#define IFX_CONVERTER_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN5 */
#define IFX_CONVERTER_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN5 */
#define IFX_CONVERTER_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN5 */
#define IFX_CONVERTER_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN6 */
#define IFX_CONVERTER_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN6 */
#define IFX_CONVERTER_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN6 */
#define IFX_CONVERTER_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN7 */
#define IFX_CONVERTER_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN7 */
#define IFX_CONVERTER_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN7 */
#define IFX_CONVERTER_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN8 */
#define IFX_CONVERTER_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN8 */
#define IFX_CONVERTER_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN8 */
#define IFX_CONVERTER_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN9 */
#define IFX_CONVERTER_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN9 */
#define IFX_CONVERTER_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN9 */
#define IFX_CONVERTER_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN10 */
#define IFX_CONVERTER_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN10 */
#define IFX_CONVERTER_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN10 */
#define IFX_CONVERTER_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN11 */
#define IFX_CONVERTER_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN11 */
#define IFX_CONVERTER_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN11 */
#define IFX_CONVERTER_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN12 */
#define IFX_CONVERTER_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN12 */
#define IFX_CONVERTER_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN12 */
#define IFX_CONVERTER_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN13 */
#define IFX_CONVERTER_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN13 */
#define IFX_CONVERTER_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN13 */
#define IFX_CONVERTER_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN14 */
#define IFX_CONVERTER_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN14 */
#define IFX_CONVERTER_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN14 */
#define IFX_CONVERTER_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN15 */
#define IFX_CONVERTER_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN15 */
#define IFX_CONVERTER_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN15 */
#define IFX_CONVERTER_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN16 */
#define IFX_CONVERTER_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN16 */
#define IFX_CONVERTER_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN16 */
#define IFX_CONVERTER_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN17 */
#define IFX_CONVERTER_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN17 */
#define IFX_CONVERTER_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN17 */
#define IFX_CONVERTER_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN18 */
#define IFX_CONVERTER_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN18 */
#define IFX_CONVERTER_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN18 */
#define IFX_CONVERTER_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN19 */
#define IFX_CONVERTER_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN19 */
#define IFX_CONVERTER_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN19 */
#define IFX_CONVERTER_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN20 */
#define IFX_CONVERTER_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN20 */
#define IFX_CONVERTER_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN20 */
#define IFX_CONVERTER_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN21 */
#define IFX_CONVERTER_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN21 */
#define IFX_CONVERTER_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN21 */
#define IFX_CONVERTER_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN22 */
#define IFX_CONVERTER_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN22 */
#define IFX_CONVERTER_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN22 */
#define IFX_CONVERTER_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN23 */
#define IFX_CONVERTER_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN23 */
#define IFX_CONVERTER_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN23 */
#define IFX_CONVERTER_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN24 */
#define IFX_CONVERTER_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN24 */
#define IFX_CONVERTER_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN24 */
#define IFX_CONVERTER_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN25 */
#define IFX_CONVERTER_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN25 */
#define IFX_CONVERTER_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN25 */
#define IFX_CONVERTER_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN26 */
#define IFX_CONVERTER_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN26 */
#define IFX_CONVERTER_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN26 */
#define IFX_CONVERTER_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN27 */
#define IFX_CONVERTER_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN27 */
#define IFX_CONVERTER_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN27 */
#define IFX_CONVERTER_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN28 */
#define IFX_CONVERTER_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN28 */
#define IFX_CONVERTER_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN28 */
#define IFX_CONVERTER_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN29 */
#define IFX_CONVERTER_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN29 */
#define IFX_CONVERTER_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN29 */
#define IFX_CONVERTER_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN30 */
#define IFX_CONVERTER_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN30 */
#define IFX_CONVERTER_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN30 */
#define IFX_CONVERTER_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_CONVERTER_ACCEN0_Bits.EN31 */
#define IFX_CONVERTER_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_ACCEN0_Bits.EN31 */
#define IFX_CONVERTER_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_ACCEN0_Bits.EN31 */
#define IFX_CONVERTER_ACCEN0_EN31_OFF (31u)

/** \brief Length for Ifx_CONVERTER_CCCTRL_Bits.TC */
#define IFX_CONVERTER_CCCTRL_TC_LEN (4u)

/** \brief Mask for Ifx_CONVERTER_CCCTRL_Bits.TC */
#define IFX_CONVERTER_CCCTRL_TC_MSK (0xfu)

/** \brief Offset for Ifx_CONVERTER_CCCTRL_Bits.TC */
#define IFX_CONVERTER_CCCTRL_TC_OFF (28u)

/** \brief Length for Ifx_CONVERTER_PHSCFG_Bits.PHSDIV */
#define IFX_CONVERTER_PHSCFG_PHSDIV_LEN (4u)

/** \brief Mask for Ifx_CONVERTER_PHSCFG_Bits.PHSDIV */
#define IFX_CONVERTER_PHSCFG_PHSDIV_MSK (0xfu)

/** \brief Offset for Ifx_CONVERTER_PHSCFG_Bits.PHSDIV */
#define IFX_CONVERTER_PHSCFG_PHSDIV_OFF (0u)

/** \brief Length for Ifx_CONVERTER_PHSCFG_Bits.PDWC */
#define IFX_CONVERTER_PHSCFG_PDWC_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_PHSCFG_Bits.PDWC */
#define IFX_CONVERTER_PHSCFG_PDWC_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_PHSCFG_Bits.PDWC */
#define IFX_CONVERTER_PHSCFG_PDWC_OFF (15u)

/** \brief Length for Ifx_CONVERTER_PHSSFTY_Bits.ALF */
#define IFX_CONVERTER_PHSSFTY_ALF_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_PHSSFTY_Bits.ALF */
#define IFX_CONVERTER_PHSSFTY_ALF_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_PHSSFTY_Bits.ALF */
#define IFX_CONVERTER_PHSSFTY_ALF_OFF (0u)

/** \brief Length for Ifx_CONVERTER_PHSSFTY_Bits.FIPD0 */
#define IFX_CONVERTER_PHSSFTY_FIPD0_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_PHSSFTY_Bits.FIPD0 */
#define IFX_CONVERTER_PHSSFTY_FIPD0_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_PHSSFTY_Bits.FIPD0 */
#define IFX_CONVERTER_PHSSFTY_FIPD0_OFF (4u)

/** \brief Length for Ifx_CONVERTER_PHSSFTY_Bits.FICN0 */
#define IFX_CONVERTER_PHSSFTY_FICN0_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_PHSSFTY_Bits.FICN0 */
#define IFX_CONVERTER_PHSSFTY_FICN0_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_PHSSFTY_Bits.FICN0 */
#define IFX_CONVERTER_PHSSFTY_FICN0_OFF (5u)

/** \brief Length for Ifx_CONVERTER_PHSSFTY_Bits.ALFCLR */
#define IFX_CONVERTER_PHSSFTY_ALFCLR_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_PHSSFTY_Bits.ALFCLR */
#define IFX_CONVERTER_PHSSFTY_ALFCLR_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_PHSSFTY_Bits.ALFCLR */
#define IFX_CONVERTER_PHSSFTY_ALFCLR_OFF (16u)

/** \brief Length for Ifx_CONVERTER_PHSSFTY_Bits.FIPD1 */
#define IFX_CONVERTER_PHSSFTY_FIPD1_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_PHSSFTY_Bits.FIPD1 */
#define IFX_CONVERTER_PHSSFTY_FIPD1_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_PHSSFTY_Bits.FIPD1 */
#define IFX_CONVERTER_PHSSFTY_FIPD1_OFF (20u)

/** \brief Length for Ifx_CONVERTER_PHSSFTY_Bits.FICN1 */
#define IFX_CONVERTER_PHSSFTY_FICN1_LEN (1u)

/** \brief Mask for Ifx_CONVERTER_PHSSFTY_Bits.FICN1 */
#define IFX_CONVERTER_PHSSFTY_FICN1_MSK (0x1u)

/** \brief Offset for Ifx_CONVERTER_PHSSFTY_Bits.FICN1 */
#define IFX_CONVERTER_PHSSFTY_FICN1_OFF (21u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXCONVERTER_BF_H */
