/**
 * \file IfxPms_bf.h
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
 * \defgroup IfxSfr_Pms_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Pms_Registers
 * 
 */
#ifndef IFXPMS_BF_H
#define IFXPMS_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Pms_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_PMS_ID_Bits.MODREV */
#define IFX_PMS_ID_MODREV_LEN (8u)

/** \brief Mask for Ifx_PMS_ID_Bits.MODREV */
#define IFX_PMS_ID_MODREV_MSK (0xffu)

/** \brief Offset for Ifx_PMS_ID_Bits.MODREV */
#define IFX_PMS_ID_MODREV_OFF (0u)

/** \brief Length for Ifx_PMS_ID_Bits.MODTYPE */
#define IFX_PMS_ID_MODTYPE_LEN (8u)

/** \brief Mask for Ifx_PMS_ID_Bits.MODTYPE */
#define IFX_PMS_ID_MODTYPE_MSK (0xffu)

/** \brief Offset for Ifx_PMS_ID_Bits.MODTYPE */
#define IFX_PMS_ID_MODTYPE_OFF (8u)

/** \brief Length for Ifx_PMS_ID_Bits.MODNUMBER */
#define IFX_PMS_ID_MODNUMBER_LEN (16u)

/** \brief Mask for Ifx_PMS_ID_Bits.MODNUMBER */
#define IFX_PMS_ID_MODNUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_PMS_ID_Bits.MODNUMBER */
#define IFX_PMS_ID_MODNUMBER_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.EVRC */
#define IFX_PMS_EVRSTAT_EVRC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.EVRC */
#define IFX_PMS_EVRSTAT_EVRC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.EVRC */
#define IFX_PMS_EVRSTAT_EVRC_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.OVC */
#define IFX_PMS_EVRSTAT_OVC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.OVC */
#define IFX_PMS_EVRSTAT_OVC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.OVC */
#define IFX_PMS_EVRSTAT_OVC_OFF (1u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.EVR33 */
#define IFX_PMS_EVRSTAT_EVR33_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.EVR33 */
#define IFX_PMS_EVRSTAT_EVR33_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.EVR33 */
#define IFX_PMS_EVRSTAT_EVR33_OFF (2u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.OV33 */
#define IFX_PMS_EVRSTAT_OV33_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.OV33 */
#define IFX_PMS_EVRSTAT_OV33_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.OV33 */
#define IFX_PMS_EVRSTAT_OV33_OFF (3u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.OVSWD */
#define IFX_PMS_EVRSTAT_OVSWD_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.OVSWD */
#define IFX_PMS_EVRSTAT_OVSWD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.OVSWD */
#define IFX_PMS_EVRSTAT_OVSWD_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.UVC */
#define IFX_PMS_EVRSTAT_UVC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.UVC */
#define IFX_PMS_EVRSTAT_UVC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.UVC */
#define IFX_PMS_EVRSTAT_UVC_OFF (5u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.UV33 */
#define IFX_PMS_EVRSTAT_UV33_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.UV33 */
#define IFX_PMS_EVRSTAT_UV33_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.UV33 */
#define IFX_PMS_EVRSTAT_UV33_OFF (6u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.UVSWD */
#define IFX_PMS_EVRSTAT_UVSWD_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.UVSWD */
#define IFX_PMS_EVRSTAT_UVSWD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.UVSWD */
#define IFX_PMS_EVRSTAT_UVSWD_OFF (7u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.SYNCLCK */
#define IFX_PMS_EVRSTAT_SYNCLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.SYNCLCK */
#define IFX_PMS_EVRSTAT_SYNCLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.SYNCLCK */
#define IFX_PMS_EVRSTAT_SYNCLCK_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.EVR33VOK */
#define IFX_PMS_EVRSTAT_EVR33VOK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.EVR33VOK */
#define IFX_PMS_EVRSTAT_EVR33VOK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.EVR33VOK */
#define IFX_PMS_EVRSTAT_EVR33VOK_OFF (9u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.RSTC */
#define IFX_PMS_EVRSTAT_RSTC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.RSTC */
#define IFX_PMS_EVRSTAT_RSTC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.RSTC */
#define IFX_PMS_EVRSTAT_RSTC_OFF (13u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.RST33 */
#define IFX_PMS_EVRSTAT_RST33_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.RST33 */
#define IFX_PMS_EVRSTAT_RST33_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.RST33 */
#define IFX_PMS_EVRSTAT_RST33_OFF (14u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.RSTSWD */
#define IFX_PMS_EVRSTAT_RSTSWD_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.RSTSWD */
#define IFX_PMS_EVRSTAT_RSTSWD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.RSTSWD */
#define IFX_PMS_EVRSTAT_RSTSWD_OFF (15u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.EVRCSHLV */
#define IFX_PMS_EVRSTAT_EVRCSHLV_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.EVRCSHLV */
#define IFX_PMS_EVRSTAT_EVRCSHLV_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.EVRCSHLV */
#define IFX_PMS_EVRSTAT_EVRCSHLV_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.EVRCSHHV */
#define IFX_PMS_EVRSTAT_EVRCSHHV_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.EVRCSHHV */
#define IFX_PMS_EVRSTAT_EVRCSHHV_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.EVRCSHHV */
#define IFX_PMS_EVRSTAT_EVRCSHHV_OFF (17u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.EVR33SHLV */
#define IFX_PMS_EVRSTAT_EVR33SHLV_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.EVR33SHLV */
#define IFX_PMS_EVRSTAT_EVR33SHLV_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.EVR33SHLV */
#define IFX_PMS_EVRSTAT_EVR33SHLV_OFF (18u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.EVR33SHHV */
#define IFX_PMS_EVRSTAT_EVR33SHHV_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.EVR33SHHV */
#define IFX_PMS_EVRSTAT_EVR33SHHV_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.EVR33SHHV */
#define IFX_PMS_EVRSTAT_EVR33SHHV_OFF (19u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.SWDLVL */
#define IFX_PMS_EVRSTAT_SWDLVL_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.SWDLVL */
#define IFX_PMS_EVRSTAT_SWDLVL_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.SWDLVL */
#define IFX_PMS_EVRSTAT_SWDLVL_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.SDVOK */
#define IFX_PMS_EVRSTAT_SDVOK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.SDVOK */
#define IFX_PMS_EVRSTAT_SDVOK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.SDVOK */
#define IFX_PMS_EVRSTAT_SDVOK_OFF (21u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.EVRCMOD */
#define IFX_PMS_EVRSTAT_EVRCMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.EVRCMOD */
#define IFX_PMS_EVRSTAT_EVRCMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.EVRCMOD */
#define IFX_PMS_EVRSTAT_EVRCMOD_OFF (22u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.OVPRE */
#define IFX_PMS_EVRSTAT_OVPRE_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.OVPRE */
#define IFX_PMS_EVRSTAT_OVPRE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.OVPRE */
#define IFX_PMS_EVRSTAT_OVPRE_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.OVSB */
#define IFX_PMS_EVRSTAT_OVSB_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.OVSB */
#define IFX_PMS_EVRSTAT_OVSB_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.OVSB */
#define IFX_PMS_EVRSTAT_OVSB_OFF (25u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.OVDDM */
#define IFX_PMS_EVRSTAT_OVDDM_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.OVDDM */
#define IFX_PMS_EVRSTAT_OVDDM_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.OVDDM */
#define IFX_PMS_EVRSTAT_OVDDM_OFF (26u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.UVPRE */
#define IFX_PMS_EVRSTAT_UVPRE_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.UVPRE */
#define IFX_PMS_EVRSTAT_UVPRE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.UVPRE */
#define IFX_PMS_EVRSTAT_UVPRE_OFF (27u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.UVSB */
#define IFX_PMS_EVRSTAT_UVSB_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.UVSB */
#define IFX_PMS_EVRSTAT_UVSB_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.UVSB */
#define IFX_PMS_EVRSTAT_UVSB_OFF (28u)

/** \brief Length for Ifx_PMS_EVRSTAT_Bits.UVDDM */
#define IFX_PMS_EVRSTAT_UVDDM_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSTAT_Bits.UVDDM */
#define IFX_PMS_EVRSTAT_UVDDM_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSTAT_Bits.UVDDM */
#define IFX_PMS_EVRSTAT_UVDDM_OFF (29u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.ADCCV */
#define IFX_PMS_EVRADCSTAT_ADCCV_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.ADCCV */
#define IFX_PMS_EVRADCSTAT_ADCCV_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.ADCCV */
#define IFX_PMS_EVRADCSTAT_ADCCV_OFF (0u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.ADC33V */
#define IFX_PMS_EVRADCSTAT_ADC33V_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.ADC33V */
#define IFX_PMS_EVRADCSTAT_ADC33V_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.ADC33V */
#define IFX_PMS_EVRADCSTAT_ADC33V_OFF (8u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.ADCSWDV */
#define IFX_PMS_EVRADCSTAT_ADCSWDV_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.ADCSWDV */
#define IFX_PMS_EVRADCSTAT_ADCSWDV_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.ADCSWDV */
#define IFX_PMS_EVRADCSTAT_ADCSWDV_OFF (16u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.OVC */
#define IFX_PMS_EVRADCSTAT_OVC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.OVC */
#define IFX_PMS_EVRADCSTAT_OVC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.OVC */
#define IFX_PMS_EVRADCSTAT_OVC_OFF (24u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.OV33 */
#define IFX_PMS_EVRADCSTAT_OV33_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.OV33 */
#define IFX_PMS_EVRADCSTAT_OV33_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.OV33 */
#define IFX_PMS_EVRADCSTAT_OV33_OFF (25u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.OVSWD */
#define IFX_PMS_EVRADCSTAT_OVSWD_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.OVSWD */
#define IFX_PMS_EVRADCSTAT_OVSWD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.OVSWD */
#define IFX_PMS_EVRADCSTAT_OVSWD_OFF (26u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.UVC */
#define IFX_PMS_EVRADCSTAT_UVC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.UVC */
#define IFX_PMS_EVRADCSTAT_UVC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.UVC */
#define IFX_PMS_EVRADCSTAT_UVC_OFF (27u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.UV33 */
#define IFX_PMS_EVRADCSTAT_UV33_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.UV33 */
#define IFX_PMS_EVRADCSTAT_UV33_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.UV33 */
#define IFX_PMS_EVRADCSTAT_UV33_OFF (28u)

/** \brief Length for Ifx_PMS_EVRADCSTAT_Bits.UVSWD */
#define IFX_PMS_EVRADCSTAT_UVSWD_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRADCSTAT_Bits.UVSWD */
#define IFX_PMS_EVRADCSTAT_UVSWD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRADCSTAT_Bits.UVSWD */
#define IFX_PMS_EVRADCSTAT_UVSWD_OFF (29u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.RSTCTRIM */
#define IFX_PMS_EVRRSTCON_RSTCTRIM_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.RSTCTRIM */
#define IFX_PMS_EVRRSTCON_RSTCTRIM_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.RSTCTRIM */
#define IFX_PMS_EVRRSTCON_RSTCTRIM_OFF (0u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.RST33TRIM */
#define IFX_PMS_EVRRSTCON_RST33TRIM_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.RST33TRIM */
#define IFX_PMS_EVRRSTCON_RST33TRIM_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.RST33TRIM */
#define IFX_PMS_EVRRSTCON_RST33TRIM_OFF (8u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.RSTSWDTRIM */
#define IFX_PMS_EVRRSTCON_RSTSWDTRIM_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.RSTSWDTRIM */
#define IFX_PMS_EVRRSTCON_RSTSWDTRIM_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.RSTSWDTRIM */
#define IFX_PMS_EVRRSTCON_RSTSWDTRIM_OFF (16u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.RSTCOFF */
#define IFX_PMS_EVRRSTCON_RSTCOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.RSTCOFF */
#define IFX_PMS_EVRRSTCON_RSTCOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.RSTCOFF */
#define IFX_PMS_EVRRSTCON_RSTCOFF_OFF (24u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.BPRSTCOFF */
#define IFX_PMS_EVRRSTCON_BPRSTCOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.BPRSTCOFF */
#define IFX_PMS_EVRRSTCON_BPRSTCOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.BPRSTCOFF */
#define IFX_PMS_EVRRSTCON_BPRSTCOFF_OFF (25u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.RST33OFF */
#define IFX_PMS_EVRRSTCON_RST33OFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.RST33OFF */
#define IFX_PMS_EVRRSTCON_RST33OFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.RST33OFF */
#define IFX_PMS_EVRRSTCON_RST33OFF_OFF (26u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.BPRST33OFF */
#define IFX_PMS_EVRRSTCON_BPRST33OFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.BPRST33OFF */
#define IFX_PMS_EVRRSTCON_BPRST33OFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.BPRST33OFF */
#define IFX_PMS_EVRRSTCON_BPRST33OFF_OFF (27u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.RSTSWDOFF */
#define IFX_PMS_EVRRSTCON_RSTSWDOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.RSTSWDOFF */
#define IFX_PMS_EVRRSTCON_RSTSWDOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.RSTSWDOFF */
#define IFX_PMS_EVRRSTCON_RSTSWDOFF_OFF (28u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.BPRSTSWDOFF */
#define IFX_PMS_EVRRSTCON_BPRSTSWDOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.BPRSTSWDOFF */
#define IFX_PMS_EVRRSTCON_BPRSTSWDOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.BPRSTSWDOFF */
#define IFX_PMS_EVRRSTCON_BPRSTSWDOFF_OFF (29u)

/** \brief Length for Ifx_PMS_EVRRSTCON_Bits.SLCK */
#define IFX_PMS_EVRRSTCON_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTCON_Bits.SLCK */
#define IFX_PMS_EVRRSTCON_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTCON_Bits.SLCK */
#define IFX_PMS_EVRRSTCON_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_EVRRSTSTAT_Bits.RSTC */
#define IFX_PMS_EVRRSTSTAT_RSTC_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRRSTSTAT_Bits.RSTC */
#define IFX_PMS_EVRRSTSTAT_RSTC_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRRSTSTAT_Bits.RSTC */
#define IFX_PMS_EVRRSTSTAT_RSTC_OFF (0u)

/** \brief Length for Ifx_PMS_EVRRSTSTAT_Bits.RST33 */
#define IFX_PMS_EVRRSTSTAT_RST33_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRRSTSTAT_Bits.RST33 */
#define IFX_PMS_EVRRSTSTAT_RST33_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRRSTSTAT_Bits.RST33 */
#define IFX_PMS_EVRRSTSTAT_RST33_OFF (8u)

/** \brief Length for Ifx_PMS_EVRRSTSTAT_Bits.RSTSWD */
#define IFX_PMS_EVRRSTSTAT_RSTSWD_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRRSTSTAT_Bits.RSTSWD */
#define IFX_PMS_EVRRSTSTAT_RSTSWD_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRRSTSTAT_Bits.RSTSWD */
#define IFX_PMS_EVRRSTSTAT_RSTSWD_OFF (16u)

/** \brief Length for Ifx_PMS_EVRRSTSTAT_Bits.RSTCOFF */
#define IFX_PMS_EVRRSTSTAT_RSTCOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTSTAT_Bits.RSTCOFF */
#define IFX_PMS_EVRRSTSTAT_RSTCOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTSTAT_Bits.RSTCOFF */
#define IFX_PMS_EVRRSTSTAT_RSTCOFF_OFF (24u)

/** \brief Length for Ifx_PMS_EVRRSTSTAT_Bits.RST33OFF */
#define IFX_PMS_EVRRSTSTAT_RST33OFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTSTAT_Bits.RST33OFF */
#define IFX_PMS_EVRRSTSTAT_RST33OFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTSTAT_Bits.RST33OFF */
#define IFX_PMS_EVRRSTSTAT_RST33OFF_OFF (26u)

/** \brief Length for Ifx_PMS_EVRRSTSTAT_Bits.RSTSWDOFF */
#define IFX_PMS_EVRRSTSTAT_RSTSWDOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRRSTSTAT_Bits.RSTSWDOFF */
#define IFX_PMS_EVRRSTSTAT_RSTSWDOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRRSTSTAT_Bits.RSTSWDOFF */
#define IFX_PMS_EVRRSTSTAT_RSTSWDOFF_OFF (28u)

/** \brief Length for Ifx_PMS_EVRTRIM_Bits.EVR33VOUTSEL */
#define IFX_PMS_EVRTRIM_EVR33VOUTSEL_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRTRIM_Bits.EVR33VOUTSEL */
#define IFX_PMS_EVRTRIM_EVR33VOUTSEL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRTRIM_Bits.EVR33VOUTSEL */
#define IFX_PMS_EVRTRIM_EVR33VOUTSEL_OFF (0u)

/** \brief Length for Ifx_PMS_EVRTRIM_Bits.SDVOUTSEL */
#define IFX_PMS_EVRTRIM_SDVOUTSEL_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRTRIM_Bits.SDVOUTSEL */
#define IFX_PMS_EVRTRIM_SDVOUTSEL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRTRIM_Bits.SDVOUTSEL */
#define IFX_PMS_EVRTRIM_SDVOUTSEL_OFF (8u)

/** \brief Length for Ifx_PMS_EVRTRIM_Bits.EVR33VOUTTRIM */
#define IFX_PMS_EVRTRIM_EVR33VOUTTRIM_LEN (6u)

/** \brief Mask for Ifx_PMS_EVRTRIM_Bits.EVR33VOUTTRIM */
#define IFX_PMS_EVRTRIM_EVR33VOUTTRIM_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_EVRTRIM_Bits.EVR33VOUTTRIM */
#define IFX_PMS_EVRTRIM_EVR33VOUTTRIM_OFF (16u)

/** \brief Length for Ifx_PMS_EVRTRIM_Bits.SDVOUTTRIM */
#define IFX_PMS_EVRTRIM_SDVOUTTRIM_LEN (6u)

/** \brief Mask for Ifx_PMS_EVRTRIM_Bits.SDVOUTTRIM */
#define IFX_PMS_EVRTRIM_SDVOUTTRIM_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_EVRTRIM_Bits.SDVOUTTRIM */
#define IFX_PMS_EVRTRIM_SDVOUTTRIM_OFF (24u)

/** \brief Length for Ifx_PMS_EVRTRIM_Bits.SLCK */
#define IFX_PMS_EVRTRIM_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRTRIM_Bits.SLCK */
#define IFX_PMS_EVRTRIM_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRTRIM_Bits.SLCK */
#define IFX_PMS_EVRTRIM_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_EVRTRIM_Bits.LCK */
#define IFX_PMS_EVRTRIM_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRTRIM_Bits.LCK */
#define IFX_PMS_EVRTRIM_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRTRIM_Bits.LCK */
#define IFX_PMS_EVRTRIM_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRTRIMSTAT_Bits.EVR33VOUTSEL */
#define IFX_PMS_EVRTRIMSTAT_EVR33VOUTSEL_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRTRIMSTAT_Bits.EVR33VOUTSEL */
#define IFX_PMS_EVRTRIMSTAT_EVR33VOUTSEL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRTRIMSTAT_Bits.EVR33VOUTSEL */
#define IFX_PMS_EVRTRIMSTAT_EVR33VOUTSEL_OFF (0u)

/** \brief Length for Ifx_PMS_EVRTRIMSTAT_Bits.SDVOUTSEL */
#define IFX_PMS_EVRTRIMSTAT_SDVOUTSEL_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRTRIMSTAT_Bits.SDVOUTSEL */
#define IFX_PMS_EVRTRIMSTAT_SDVOUTSEL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRTRIMSTAT_Bits.SDVOUTSEL */
#define IFX_PMS_EVRTRIMSTAT_SDVOUTSEL_OFF (8u)

/** \brief Length for Ifx_PMS_EVRTRIMSTAT_Bits.EVR33VOUTTRIM */
#define IFX_PMS_EVRTRIMSTAT_EVR33VOUTTRIM_LEN (6u)

/** \brief Mask for Ifx_PMS_EVRTRIMSTAT_Bits.EVR33VOUTTRIM */
#define IFX_PMS_EVRTRIMSTAT_EVR33VOUTTRIM_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_EVRTRIMSTAT_Bits.EVR33VOUTTRIM */
#define IFX_PMS_EVRTRIMSTAT_EVR33VOUTTRIM_OFF (16u)

/** \brief Length for Ifx_PMS_EVRTRIMSTAT_Bits.SDVOUTTRIM */
#define IFX_PMS_EVRTRIMSTAT_SDVOUTTRIM_LEN (6u)

/** \brief Mask for Ifx_PMS_EVRTRIMSTAT_Bits.SDVOUTTRIM */
#define IFX_PMS_EVRTRIMSTAT_SDVOUTTRIM_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_EVRTRIMSTAT_Bits.SDVOUTTRIM */
#define IFX_PMS_EVRTRIMSTAT_SDVOUTTRIM_OFF (24u)

/** \brief Length for Ifx_PMS_MONSTAT1_Bits.ADCCV */
#define IFX_PMS_MONSTAT1_ADCCV_LEN (8u)

/** \brief Mask for Ifx_PMS_MONSTAT1_Bits.ADCCV */
#define IFX_PMS_MONSTAT1_ADCCV_MSK (0xffu)

/** \brief Offset for Ifx_PMS_MONSTAT1_Bits.ADCCV */
#define IFX_PMS_MONSTAT1_ADCCV_OFF (0u)

/** \brief Length for Ifx_PMS_MONSTAT1_Bits.ADC33V */
#define IFX_PMS_MONSTAT1_ADC33V_LEN (8u)

/** \brief Mask for Ifx_PMS_MONSTAT1_Bits.ADC33V */
#define IFX_PMS_MONSTAT1_ADC33V_MSK (0xffu)

/** \brief Offset for Ifx_PMS_MONSTAT1_Bits.ADC33V */
#define IFX_PMS_MONSTAT1_ADC33V_OFF (8u)

/** \brief Length for Ifx_PMS_MONSTAT1_Bits.ADCSWDV */
#define IFX_PMS_MONSTAT1_ADCSWDV_LEN (8u)

/** \brief Mask for Ifx_PMS_MONSTAT1_Bits.ADCSWDV */
#define IFX_PMS_MONSTAT1_ADCSWDV_MSK (0xffu)

/** \brief Offset for Ifx_PMS_MONSTAT1_Bits.ADCSWDV */
#define IFX_PMS_MONSTAT1_ADCSWDV_OFF (16u)

/** \brief Length for Ifx_PMS_MONSTAT1_Bits.ACTVCNT */
#define IFX_PMS_MONSTAT1_ACTVCNT_LEN (6u)

/** \brief Mask for Ifx_PMS_MONSTAT1_Bits.ACTVCNT */
#define IFX_PMS_MONSTAT1_ACTVCNT_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_MONSTAT1_Bits.ACTVCNT */
#define IFX_PMS_MONSTAT1_ACTVCNT_OFF (24u)

/** \brief Length for Ifx_PMS_MONSTAT2_Bits.ADCPRE */
#define IFX_PMS_MONSTAT2_ADCPRE_LEN (8u)

/** \brief Mask for Ifx_PMS_MONSTAT2_Bits.ADCPRE */
#define IFX_PMS_MONSTAT2_ADCPRE_MSK (0xffu)

/** \brief Offset for Ifx_PMS_MONSTAT2_Bits.ADCPRE */
#define IFX_PMS_MONSTAT2_ADCPRE_OFF (0u)

/** \brief Length for Ifx_PMS_MONSTAT2_Bits.ADCSB */
#define IFX_PMS_MONSTAT2_ADCSB_LEN (8u)

/** \brief Mask for Ifx_PMS_MONSTAT2_Bits.ADCSB */
#define IFX_PMS_MONSTAT2_ADCSB_MSK (0xffu)

/** \brief Offset for Ifx_PMS_MONSTAT2_Bits.ADCSB */
#define IFX_PMS_MONSTAT2_ADCSB_OFF (8u)

/** \brief Length for Ifx_PMS_MONSTAT2_Bits.ADCVDDM */
#define IFX_PMS_MONSTAT2_ADCVDDM_LEN (8u)

/** \brief Mask for Ifx_PMS_MONSTAT2_Bits.ADCVDDM */
#define IFX_PMS_MONSTAT2_ADCVDDM_MSK (0xffu)

/** \brief Offset for Ifx_PMS_MONSTAT2_Bits.ADCVDDM */
#define IFX_PMS_MONSTAT2_ADCVDDM_OFF (16u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.EVRCOVMOD */
#define IFX_PMS_MONCTRL_EVRCOVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.EVRCOVMOD */
#define IFX_PMS_MONCTRL_EVRCOVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.EVRCOVMOD */
#define IFX_PMS_MONCTRL_EVRCOVMOD_OFF (0u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.PREOVMOD */
#define IFX_PMS_MONCTRL_PREOVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.PREOVMOD */
#define IFX_PMS_MONCTRL_PREOVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.PREOVMOD */
#define IFX_PMS_MONCTRL_PREOVMOD_OFF (2u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.EVRCUVMOD */
#define IFX_PMS_MONCTRL_EVRCUVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.EVRCUVMOD */
#define IFX_PMS_MONCTRL_EVRCUVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.EVRCUVMOD */
#define IFX_PMS_MONCTRL_EVRCUVMOD_OFF (4u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.PREUVMOD */
#define IFX_PMS_MONCTRL_PREUVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.PREUVMOD */
#define IFX_PMS_MONCTRL_PREUVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.PREUVMOD */
#define IFX_PMS_MONCTRL_PREUVMOD_OFF (6u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.EVR33OVMOD */
#define IFX_PMS_MONCTRL_EVR33OVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.EVR33OVMOD */
#define IFX_PMS_MONCTRL_EVR33OVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.EVR33OVMOD */
#define IFX_PMS_MONCTRL_EVR33OVMOD_OFF (8u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.VDDMOVMOD */
#define IFX_PMS_MONCTRL_VDDMOVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.VDDMOVMOD */
#define IFX_PMS_MONCTRL_VDDMOVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.VDDMOVMOD */
#define IFX_PMS_MONCTRL_VDDMOVMOD_OFF (10u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.EVR33UVMOD */
#define IFX_PMS_MONCTRL_EVR33UVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.EVR33UVMOD */
#define IFX_PMS_MONCTRL_EVR33UVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.EVR33UVMOD */
#define IFX_PMS_MONCTRL_EVR33UVMOD_OFF (12u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.VDDMUVMOD */
#define IFX_PMS_MONCTRL_VDDMUVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.VDDMUVMOD */
#define IFX_PMS_MONCTRL_VDDMUVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.VDDMUVMOD */
#define IFX_PMS_MONCTRL_VDDMUVMOD_OFF (14u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.SWDOVMOD */
#define IFX_PMS_MONCTRL_SWDOVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.SWDOVMOD */
#define IFX_PMS_MONCTRL_SWDOVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.SWDOVMOD */
#define IFX_PMS_MONCTRL_SWDOVMOD_OFF (16u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.SBOVMOD */
#define IFX_PMS_MONCTRL_SBOVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.SBOVMOD */
#define IFX_PMS_MONCTRL_SBOVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.SBOVMOD */
#define IFX_PMS_MONCTRL_SBOVMOD_OFF (18u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.SWDUVMOD */
#define IFX_PMS_MONCTRL_SWDUVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.SWDUVMOD */
#define IFX_PMS_MONCTRL_SWDUVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.SWDUVMOD */
#define IFX_PMS_MONCTRL_SWDUVMOD_OFF (20u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.SBUVMOD */
#define IFX_PMS_MONCTRL_SBUVMOD_LEN (2u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.SBUVMOD */
#define IFX_PMS_MONCTRL_SBUVMOD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.SBUVMOD */
#define IFX_PMS_MONCTRL_SBUVMOD_OFF (22u)

/** \brief Length for Ifx_PMS_MONCTRL_Bits.SLCK */
#define IFX_PMS_MONCTRL_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_MONCTRL_Bits.SLCK */
#define IFX_PMS_MONCTRL_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONCTRL_Bits.SLCK */
#define IFX_PMS_MONCTRL_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_MONFILT_Bits.EVRCFIL */
#define IFX_PMS_MONFILT_EVRCFIL_LEN (4u)

/** \brief Mask for Ifx_PMS_MONFILT_Bits.EVRCFIL */
#define IFX_PMS_MONFILT_EVRCFIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_MONFILT_Bits.EVRCFIL */
#define IFX_PMS_MONFILT_EVRCFIL_OFF (0u)

/** \brief Length for Ifx_PMS_MONFILT_Bits.PREFIL */
#define IFX_PMS_MONFILT_PREFIL_LEN (4u)

/** \brief Mask for Ifx_PMS_MONFILT_Bits.PREFIL */
#define IFX_PMS_MONFILT_PREFIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_MONFILT_Bits.PREFIL */
#define IFX_PMS_MONFILT_PREFIL_OFF (4u)

/** \brief Length for Ifx_PMS_MONFILT_Bits.EVR33FIL */
#define IFX_PMS_MONFILT_EVR33FIL_LEN (4u)

/** \brief Mask for Ifx_PMS_MONFILT_Bits.EVR33FIL */
#define IFX_PMS_MONFILT_EVR33FIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_MONFILT_Bits.EVR33FIL */
#define IFX_PMS_MONFILT_EVR33FIL_OFF (8u)

/** \brief Length for Ifx_PMS_MONFILT_Bits.VDDMFIL */
#define IFX_PMS_MONFILT_VDDMFIL_LEN (4u)

/** \brief Mask for Ifx_PMS_MONFILT_Bits.VDDMFIL */
#define IFX_PMS_MONFILT_VDDMFIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_MONFILT_Bits.VDDMFIL */
#define IFX_PMS_MONFILT_VDDMFIL_OFF (12u)

/** \brief Length for Ifx_PMS_MONFILT_Bits.SWDFIL */
#define IFX_PMS_MONFILT_SWDFIL_LEN (4u)

/** \brief Mask for Ifx_PMS_MONFILT_Bits.SWDFIL */
#define IFX_PMS_MONFILT_SWDFIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_MONFILT_Bits.SWDFIL */
#define IFX_PMS_MONFILT_SWDFIL_OFF (16u)

/** \brief Length for Ifx_PMS_MONFILT_Bits.SBFIL */
#define IFX_PMS_MONFILT_SBFIL_LEN (4u)

/** \brief Mask for Ifx_PMS_MONFILT_Bits.SBFIL */
#define IFX_PMS_MONFILT_SBFIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_MONFILT_Bits.SBFIL */
#define IFX_PMS_MONFILT_SBFIL_OFF (20u)

/** \brief Length for Ifx_PMS_MONFILT_Bits.CLRFIL */
#define IFX_PMS_MONFILT_CLRFIL_LEN (1u)

/** \brief Mask for Ifx_PMS_MONFILT_Bits.CLRFIL */
#define IFX_PMS_MONFILT_CLRFIL_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONFILT_Bits.CLRFIL */
#define IFX_PMS_MONFILT_CLRFIL_OFF (29u)

/** \brief Length for Ifx_PMS_MONFILT_Bits.SLCK */
#define IFX_PMS_MONFILT_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_MONFILT_Bits.SLCK */
#define IFX_PMS_MONFILT_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONFILT_Bits.SLCK */
#define IFX_PMS_MONFILT_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.OVSWD */
#define IFX_PMS_PMSIEN_OVSWD_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.OVSWD */
#define IFX_PMS_PMSIEN_OVSWD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.OVSWD */
#define IFX_PMS_PMSIEN_OVSWD_OFF (0u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.UVSWD */
#define IFX_PMS_PMSIEN_UVSWD_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.UVSWD */
#define IFX_PMS_PMSIEN_UVSWD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.UVSWD */
#define IFX_PMS_PMSIEN_UVSWD_OFF (1u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.OV33 */
#define IFX_PMS_PMSIEN_OV33_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.OV33 */
#define IFX_PMS_PMSIEN_OV33_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.OV33 */
#define IFX_PMS_PMSIEN_OV33_OFF (2u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.UV33 */
#define IFX_PMS_PMSIEN_UV33_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.UV33 */
#define IFX_PMS_PMSIEN_UV33_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.UV33 */
#define IFX_PMS_PMSIEN_UV33_OFF (3u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.OVC */
#define IFX_PMS_PMSIEN_OVC_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.OVC */
#define IFX_PMS_PMSIEN_OVC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.OVC */
#define IFX_PMS_PMSIEN_OVC_OFF (4u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.UVC */
#define IFX_PMS_PMSIEN_UVC_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.UVC */
#define IFX_PMS_PMSIEN_UVC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.UVC */
#define IFX_PMS_PMSIEN_UVC_OFF (5u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.OVPRE */
#define IFX_PMS_PMSIEN_OVPRE_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.OVPRE */
#define IFX_PMS_PMSIEN_OVPRE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.OVPRE */
#define IFX_PMS_PMSIEN_OVPRE_OFF (6u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.UVPRE */
#define IFX_PMS_PMSIEN_UVPRE_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.UVPRE */
#define IFX_PMS_PMSIEN_UVPRE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.UVPRE */
#define IFX_PMS_PMSIEN_UVPRE_OFF (7u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.OVDDM */
#define IFX_PMS_PMSIEN_OVDDM_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.OVDDM */
#define IFX_PMS_PMSIEN_OVDDM_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.OVDDM */
#define IFX_PMS_PMSIEN_OVDDM_OFF (8u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.UVDDM */
#define IFX_PMS_PMSIEN_UVDDM_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.UVDDM */
#define IFX_PMS_PMSIEN_UVDDM_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.UVDDM */
#define IFX_PMS_PMSIEN_UVDDM_OFF (9u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.OVSB */
#define IFX_PMS_PMSIEN_OVSB_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.OVSB */
#define IFX_PMS_PMSIEN_OVSB_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.OVSB */
#define IFX_PMS_PMSIEN_OVSB_OFF (10u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.UVSB */
#define IFX_PMS_PMSIEN_UVSB_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.UVSB */
#define IFX_PMS_PMSIEN_UVSB_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.UVSB */
#define IFX_PMS_PMSIEN_UVSB_OFF (11u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.EVRCMOD */
#define IFX_PMS_PMSIEN_EVRCMOD_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.EVRCMOD */
#define IFX_PMS_PMSIEN_EVRCMOD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.EVRCMOD */
#define IFX_PMS_PMSIEN_EVRCMOD_OFF (16u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.SDVOK */
#define IFX_PMS_PMSIEN_SDVOK_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.SDVOK */
#define IFX_PMS_PMSIEN_SDVOK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.SDVOK */
#define IFX_PMS_PMSIEN_SDVOK_OFF (17u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.SYNCLCK */
#define IFX_PMS_PMSIEN_SYNCLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.SYNCLCK */
#define IFX_PMS_PMSIEN_SYNCLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.SYNCLCK */
#define IFX_PMS_PMSIEN_SYNCLCK_OFF (18u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.SWDLVL */
#define IFX_PMS_PMSIEN_SWDLVL_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.SWDLVL */
#define IFX_PMS_PMSIEN_SWDLVL_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.SWDLVL */
#define IFX_PMS_PMSIEN_SWDLVL_OFF (19u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.WUTWKP */
#define IFX_PMS_PMSIEN_WUTWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.WUTWKP */
#define IFX_PMS_PMSIEN_WUTWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.WUTWKP */
#define IFX_PMS_PMSIEN_WUTWKP_OFF (21u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.ESR0WKP */
#define IFX_PMS_PMSIEN_ESR0WKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.ESR0WKP */
#define IFX_PMS_PMSIEN_ESR0WKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.ESR0WKP */
#define IFX_PMS_PMSIEN_ESR0WKP_OFF (22u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.ESR1WKP */
#define IFX_PMS_PMSIEN_ESR1WKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.ESR1WKP */
#define IFX_PMS_PMSIEN_ESR1WKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.ESR1WKP */
#define IFX_PMS_PMSIEN_ESR1WKP_OFF (23u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.PINAWKP */
#define IFX_PMS_PMSIEN_PINAWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.PINAWKP */
#define IFX_PMS_PMSIEN_PINAWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.PINAWKP */
#define IFX_PMS_PMSIEN_PINAWKP_OFF (24u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.PINBWKP */
#define IFX_PMS_PMSIEN_PINBWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.PINBWKP */
#define IFX_PMS_PMSIEN_PINBWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.PINBWKP */
#define IFX_PMS_PMSIEN_PINBWKP_OFF (25u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.SCRINT */
#define IFX_PMS_PMSIEN_SCRINT_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.SCRINT */
#define IFX_PMS_PMSIEN_SCRINT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.SCRINT */
#define IFX_PMS_PMSIEN_SCRINT_OFF (26u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.SCRRST */
#define IFX_PMS_PMSIEN_SCRRST_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.SCRRST */
#define IFX_PMS_PMSIEN_SCRRST_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.SCRRST */
#define IFX_PMS_PMSIEN_SCRRST_OFF (27u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.SCRECC */
#define IFX_PMS_PMSIEN_SCRECC_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.SCRECC */
#define IFX_PMS_PMSIEN_SCRECC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.SCRECC */
#define IFX_PMS_PMSIEN_SCRECC_OFF (28u)

/** \brief Length for Ifx_PMS_PMSIEN_Bits.SCRWDT */
#define IFX_PMS_PMSIEN_SCRWDT_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSIEN_Bits.SCRWDT */
#define IFX_PMS_PMSIEN_SCRWDT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSIEN_Bits.SCRWDT */
#define IFX_PMS_PMSIEN_SCRWDT_OFF (29u)

/** \brief Length for Ifx_PMS_UVMON_Bits.EVRCUVVAL */
#define IFX_PMS_UVMON_EVRCUVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_UVMON_Bits.EVRCUVVAL */
#define IFX_PMS_UVMON_EVRCUVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_UVMON_Bits.EVRCUVVAL */
#define IFX_PMS_UVMON_EVRCUVVAL_OFF (0u)

/** \brief Length for Ifx_PMS_UVMON_Bits.EVR33UVVAL */
#define IFX_PMS_UVMON_EVR33UVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_UVMON_Bits.EVR33UVVAL */
#define IFX_PMS_UVMON_EVR33UVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_UVMON_Bits.EVR33UVVAL */
#define IFX_PMS_UVMON_EVR33UVVAL_OFF (8u)

/** \brief Length for Ifx_PMS_UVMON_Bits.SWDUVVAL */
#define IFX_PMS_UVMON_SWDUVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_UVMON_Bits.SWDUVVAL */
#define IFX_PMS_UVMON_SWDUVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_UVMON_Bits.SWDUVVAL */
#define IFX_PMS_UVMON_SWDUVVAL_OFF (16u)

/** \brief Length for Ifx_PMS_UVMON_Bits.SLCK */
#define IFX_PMS_UVMON_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_UVMON_Bits.SLCK */
#define IFX_PMS_UVMON_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_UVMON_Bits.SLCK */
#define IFX_PMS_UVMON_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_OVMON_Bits.EVRCOVVAL */
#define IFX_PMS_OVMON_EVRCOVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_OVMON_Bits.EVRCOVVAL */
#define IFX_PMS_OVMON_EVRCOVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_OVMON_Bits.EVRCOVVAL */
#define IFX_PMS_OVMON_EVRCOVVAL_OFF (0u)

/** \brief Length for Ifx_PMS_OVMON_Bits.EVR33OVVAL */
#define IFX_PMS_OVMON_EVR33OVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_OVMON_Bits.EVR33OVVAL */
#define IFX_PMS_OVMON_EVR33OVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_OVMON_Bits.EVR33OVVAL */
#define IFX_PMS_OVMON_EVR33OVVAL_OFF (8u)

/** \brief Length for Ifx_PMS_OVMON_Bits.SWDOVVAL */
#define IFX_PMS_OVMON_SWDOVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_OVMON_Bits.SWDOVVAL */
#define IFX_PMS_OVMON_SWDOVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_OVMON_Bits.SWDOVVAL */
#define IFX_PMS_OVMON_SWDOVVAL_OFF (16u)

/** \brief Length for Ifx_PMS_OVMON_Bits.SLCK */
#define IFX_PMS_OVMON_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_OVMON_Bits.SLCK */
#define IFX_PMS_OVMON_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_OVMON_Bits.SLCK */
#define IFX_PMS_OVMON_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_UVMON2_Bits.PREUVVAL */
#define IFX_PMS_UVMON2_PREUVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_UVMON2_Bits.PREUVVAL */
#define IFX_PMS_UVMON2_PREUVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_UVMON2_Bits.PREUVVAL */
#define IFX_PMS_UVMON2_PREUVVAL_OFF (0u)

/** \brief Length for Ifx_PMS_UVMON2_Bits.VDDMUVVAL */
#define IFX_PMS_UVMON2_VDDMUVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_UVMON2_Bits.VDDMUVVAL */
#define IFX_PMS_UVMON2_VDDMUVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_UVMON2_Bits.VDDMUVVAL */
#define IFX_PMS_UVMON2_VDDMUVVAL_OFF (8u)

/** \brief Length for Ifx_PMS_UVMON2_Bits.SBUVVAL */
#define IFX_PMS_UVMON2_SBUVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_UVMON2_Bits.SBUVVAL */
#define IFX_PMS_UVMON2_SBUVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_UVMON2_Bits.SBUVVAL */
#define IFX_PMS_UVMON2_SBUVVAL_OFF (16u)

/** \brief Length for Ifx_PMS_UVMON2_Bits.VDDMLVLSEL */
#define IFX_PMS_UVMON2_VDDMLVLSEL_LEN (6u)

/** \brief Mask for Ifx_PMS_UVMON2_Bits.VDDMLVLSEL */
#define IFX_PMS_UVMON2_VDDMLVLSEL_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_UVMON2_Bits.VDDMLVLSEL */
#define IFX_PMS_UVMON2_VDDMLVLSEL_OFF (24u)

/** \brief Length for Ifx_PMS_UVMON2_Bits.SLCK */
#define IFX_PMS_UVMON2_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_UVMON2_Bits.SLCK */
#define IFX_PMS_UVMON2_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_UVMON2_Bits.SLCK */
#define IFX_PMS_UVMON2_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_OVMON2_Bits.PREOVVAL */
#define IFX_PMS_OVMON2_PREOVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_OVMON2_Bits.PREOVVAL */
#define IFX_PMS_OVMON2_PREOVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_OVMON2_Bits.PREOVVAL */
#define IFX_PMS_OVMON2_PREOVVAL_OFF (0u)

/** \brief Length for Ifx_PMS_OVMON2_Bits.VDDMOVVAL */
#define IFX_PMS_OVMON2_VDDMOVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_OVMON2_Bits.VDDMOVVAL */
#define IFX_PMS_OVMON2_VDDMOVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_OVMON2_Bits.VDDMOVVAL */
#define IFX_PMS_OVMON2_VDDMOVVAL_OFF (8u)

/** \brief Length for Ifx_PMS_OVMON2_Bits.SBOVVAL */
#define IFX_PMS_OVMON2_SBOVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_OVMON2_Bits.SBOVVAL */
#define IFX_PMS_OVMON2_SBOVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_OVMON2_Bits.SBOVVAL */
#define IFX_PMS_OVMON2_SBOVVAL_OFF (16u)

/** \brief Length for Ifx_PMS_OVMON2_Bits.SLCK */
#define IFX_PMS_OVMON2_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_OVMON2_Bits.SLCK */
#define IFX_PMS_OVMON2_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_OVMON2_Bits.SLCK */
#define IFX_PMS_OVMON2_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_HSMUVMON_Bits.EVRCUVVAL */
#define IFX_PMS_HSMUVMON_EVRCUVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_HSMUVMON_Bits.EVRCUVVAL */
#define IFX_PMS_HSMUVMON_EVRCUVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_HSMUVMON_Bits.EVRCUVVAL */
#define IFX_PMS_HSMUVMON_EVRCUVVAL_OFF (0u)

/** \brief Length for Ifx_PMS_HSMUVMON_Bits.EVR33UVVAL */
#define IFX_PMS_HSMUVMON_EVR33UVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_HSMUVMON_Bits.EVR33UVVAL */
#define IFX_PMS_HSMUVMON_EVR33UVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_HSMUVMON_Bits.EVR33UVVAL */
#define IFX_PMS_HSMUVMON_EVR33UVVAL_OFF (8u)

/** \brief Length for Ifx_PMS_HSMUVMON_Bits.SWDUVVAL */
#define IFX_PMS_HSMUVMON_SWDUVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_HSMUVMON_Bits.SWDUVVAL */
#define IFX_PMS_HSMUVMON_SWDUVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_HSMUVMON_Bits.SWDUVVAL */
#define IFX_PMS_HSMUVMON_SWDUVVAL_OFF (16u)

/** \brief Length for Ifx_PMS_HSMUVMON_Bits.EVRCOFF */
#define IFX_PMS_HSMUVMON_EVRCOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_HSMUVMON_Bits.EVRCOFF */
#define IFX_PMS_HSMUVMON_EVRCOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_HSMUVMON_Bits.EVRCOFF */
#define IFX_PMS_HSMUVMON_EVRCOFF_OFF (24u)

/** \brief Length for Ifx_PMS_HSMUVMON_Bits.EVR33OFF */
#define IFX_PMS_HSMUVMON_EVR33OFF_LEN (1u)

/** \brief Mask for Ifx_PMS_HSMUVMON_Bits.EVR33OFF */
#define IFX_PMS_HSMUVMON_EVR33OFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_HSMUVMON_Bits.EVR33OFF */
#define IFX_PMS_HSMUVMON_EVR33OFF_OFF (25u)

/** \brief Length for Ifx_PMS_HSMUVMON_Bits.SWDOFF */
#define IFX_PMS_HSMUVMON_SWDOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_HSMUVMON_Bits.SWDOFF */
#define IFX_PMS_HSMUVMON_SWDOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_HSMUVMON_Bits.SWDOFF */
#define IFX_PMS_HSMUVMON_SWDOFF_OFF (26u)

/** \brief Length for Ifx_PMS_HSMUVMON_Bits.HSMFIL */
#define IFX_PMS_HSMUVMON_HSMFIL_LEN (4u)

/** \brief Mask for Ifx_PMS_HSMUVMON_Bits.HSMFIL */
#define IFX_PMS_HSMUVMON_HSMFIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_HSMUVMON_Bits.HSMFIL */
#define IFX_PMS_HSMUVMON_HSMFIL_OFF (27u)

/** \brief Length for Ifx_PMS_HSMUVMON_Bits.SLCK */
#define IFX_PMS_HSMUVMON_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_HSMUVMON_Bits.SLCK */
#define IFX_PMS_HSMUVMON_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_HSMUVMON_Bits.SLCK */
#define IFX_PMS_HSMUVMON_SLCK_OFF (31u)

/** \brief Length for Ifx_PMS_HSMOVMON_Bits.EVRCOVVAL */
#define IFX_PMS_HSMOVMON_EVRCOVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_HSMOVMON_Bits.EVRCOVVAL */
#define IFX_PMS_HSMOVMON_EVRCOVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_HSMOVMON_Bits.EVRCOVVAL */
#define IFX_PMS_HSMOVMON_EVRCOVVAL_OFF (0u)

/** \brief Length for Ifx_PMS_HSMOVMON_Bits.EVR33OVVAL */
#define IFX_PMS_HSMOVMON_EVR33OVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_HSMOVMON_Bits.EVR33OVVAL */
#define IFX_PMS_HSMOVMON_EVR33OVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_HSMOVMON_Bits.EVR33OVVAL */
#define IFX_PMS_HSMOVMON_EVR33OVVAL_OFF (8u)

/** \brief Length for Ifx_PMS_HSMOVMON_Bits.SWDOVVAL */
#define IFX_PMS_HSMOVMON_SWDOVVAL_LEN (8u)

/** \brief Mask for Ifx_PMS_HSMOVMON_Bits.SWDOVVAL */
#define IFX_PMS_HSMOVMON_SWDOVVAL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_HSMOVMON_Bits.SWDOVVAL */
#define IFX_PMS_HSMOVMON_SWDOVVAL_OFF (16u)

/** \brief Length for Ifx_PMS_HSMOVMON_Bits.EVRCOFF */
#define IFX_PMS_HSMOVMON_EVRCOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_HSMOVMON_Bits.EVRCOFF */
#define IFX_PMS_HSMOVMON_EVRCOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_HSMOVMON_Bits.EVRCOFF */
#define IFX_PMS_HSMOVMON_EVRCOFF_OFF (24u)

/** \brief Length for Ifx_PMS_HSMOVMON_Bits.EVR33OFF */
#define IFX_PMS_HSMOVMON_EVR33OFF_LEN (1u)

/** \brief Mask for Ifx_PMS_HSMOVMON_Bits.EVR33OFF */
#define IFX_PMS_HSMOVMON_EVR33OFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_HSMOVMON_Bits.EVR33OFF */
#define IFX_PMS_HSMOVMON_EVR33OFF_OFF (25u)

/** \brief Length for Ifx_PMS_HSMOVMON_Bits.SWDOFF */
#define IFX_PMS_HSMOVMON_SWDOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_HSMOVMON_Bits.SWDOFF */
#define IFX_PMS_HSMOVMON_SWDOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_HSMOVMON_Bits.SWDOFF */
#define IFX_PMS_HSMOVMON_SWDOFF_OFF (26u)

/** \brief Length for Ifx_PMS_HSMOVMON_Bits.SLCK */
#define IFX_PMS_HSMOVMON_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_HSMOVMON_Bits.SLCK */
#define IFX_PMS_HSMOVMON_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_HSMOVMON_Bits.SLCK */
#define IFX_PMS_HSMOVMON_SLCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVROSCCTRL_Bits.OSCFTRIM */
#define IFX_PMS_EVROSCCTRL_OSCFTRIM_LEN (6u)

/** \brief Mask for Ifx_PMS_EVROSCCTRL_Bits.OSCFTRIM */
#define IFX_PMS_EVROSCCTRL_OSCFTRIM_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_EVROSCCTRL_Bits.OSCFTRIM */
#define IFX_PMS_EVROSCCTRL_OSCFTRIM_OFF (0u)

/** \brief Length for Ifx_PMS_EVROSCCTRL_Bits.OSCFPTRIM */
#define IFX_PMS_EVROSCCTRL_OSCFPTRIM_LEN (6u)

/** \brief Mask for Ifx_PMS_EVROSCCTRL_Bits.OSCFPTRIM */
#define IFX_PMS_EVROSCCTRL_OSCFPTRIM_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_EVROSCCTRL_Bits.OSCFPTRIM */
#define IFX_PMS_EVROSCCTRL_OSCFPTRIM_OFF (16u)

/** \brief Length for Ifx_PMS_EVROSCCTRL_Bits.OSCTEMPOFFS */
#define IFX_PMS_EVROSCCTRL_OSCTEMPOFFS_LEN (1u)

/** \brief Mask for Ifx_PMS_EVROSCCTRL_Bits.OSCTEMPOFFS */
#define IFX_PMS_EVROSCCTRL_OSCTEMPOFFS_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVROSCCTRL_Bits.OSCTEMPOFFS */
#define IFX_PMS_EVROSCCTRL_OSCTEMPOFFS_OFF (29u)

/** \brief Length for Ifx_PMS_EVROSCCTRL_Bits.OSCTRIMEN */
#define IFX_PMS_EVROSCCTRL_OSCTRIMEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVROSCCTRL_Bits.OSCTRIMEN */
#define IFX_PMS_EVROSCCTRL_OSCTRIMEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVROSCCTRL_Bits.OSCTRIMEN */
#define IFX_PMS_EVROSCCTRL_OSCTRIMEN_OFF (31u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.VEXTSTBYEN */
#define IFX_PMS_PMSWCR0_VEXTSTBYEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.VEXTSTBYEN */
#define IFX_PMS_PMSWCR0_VEXTSTBYEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.VEXTSTBYEN */
#define IFX_PMS_PMSWCR0_VEXTSTBYEN_OFF (2u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.VDDSTBYEN */
#define IFX_PMS_PMSWCR0_VDDSTBYEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.VDDSTBYEN */
#define IFX_PMS_PMSWCR0_VDDSTBYEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.VDDSTBYEN */
#define IFX_PMS_PMSWCR0_VDDSTBYEN_OFF (3u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.ESR0DFEN */
#define IFX_PMS_PMSWCR0_ESR0DFEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.ESR0DFEN */
#define IFX_PMS_PMSWCR0_ESR0DFEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.ESR0DFEN */
#define IFX_PMS_PMSWCR0_ESR0DFEN_OFF (4u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.ESR0EDCON */
#define IFX_PMS_PMSWCR0_ESR0EDCON_LEN (2u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.ESR0EDCON */
#define IFX_PMS_PMSWCR0_ESR0EDCON_MSK (0x3u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.ESR0EDCON */
#define IFX_PMS_PMSWCR0_ESR0EDCON_OFF (5u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.ESR1DFEN */
#define IFX_PMS_PMSWCR0_ESR1DFEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.ESR1DFEN */
#define IFX_PMS_PMSWCR0_ESR1DFEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.ESR1DFEN */
#define IFX_PMS_PMSWCR0_ESR1DFEN_OFF (7u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.ESR1EDCON */
#define IFX_PMS_PMSWCR0_ESR1EDCON_LEN (2u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.ESR1EDCON */
#define IFX_PMS_PMSWCR0_ESR1EDCON_MSK (0x3u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.ESR1EDCON */
#define IFX_PMS_PMSWCR0_ESR1EDCON_OFF (8u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.PINADFEN */
#define IFX_PMS_PMSWCR0_PINADFEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.PINADFEN */
#define IFX_PMS_PMSWCR0_PINADFEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.PINADFEN */
#define IFX_PMS_PMSWCR0_PINADFEN_OFF (10u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.PINAEDCON */
#define IFX_PMS_PMSWCR0_PINAEDCON_LEN (2u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.PINAEDCON */
#define IFX_PMS_PMSWCR0_PINAEDCON_MSK (0x3u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.PINAEDCON */
#define IFX_PMS_PMSWCR0_PINAEDCON_OFF (11u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.PINBDFEN */
#define IFX_PMS_PMSWCR0_PINBDFEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.PINBDFEN */
#define IFX_PMS_PMSWCR0_PINBDFEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.PINBDFEN */
#define IFX_PMS_PMSWCR0_PINBDFEN_OFF (13u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.PINBEDCON */
#define IFX_PMS_PMSWCR0_PINBEDCON_LEN (2u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.PINBEDCON */
#define IFX_PMS_PMSWCR0_PINBEDCON_MSK (0x3u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.PINBEDCON */
#define IFX_PMS_PMSWCR0_PINBEDCON_OFF (14u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.STBYRAMSEL */
#define IFX_PMS_PMSWCR0_STBYRAMSEL_LEN (3u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.STBYRAMSEL */
#define IFX_PMS_PMSWCR0_STBYRAMSEL_MSK (0x7u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.STBYRAMSEL */
#define IFX_PMS_PMSWCR0_STBYRAMSEL_OFF (16u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.BLNKFIL */
#define IFX_PMS_PMSWCR0_BLNKFIL_LEN (4u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.BLNKFIL */
#define IFX_PMS_PMSWCR0_BLNKFIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.BLNKFIL */
#define IFX_PMS_PMSWCR0_BLNKFIL_OFF (20u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.ESR0WKEN */
#define IFX_PMS_PMSWCR0_ESR0WKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.ESR0WKEN */
#define IFX_PMS_PMSWCR0_ESR0WKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.ESR0WKEN */
#define IFX_PMS_PMSWCR0_ESR0WKEN_OFF (24u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.ESR1WKEN */
#define IFX_PMS_PMSWCR0_ESR1WKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.ESR1WKEN */
#define IFX_PMS_PMSWCR0_ESR1WKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.ESR1WKEN */
#define IFX_PMS_PMSWCR0_ESR1WKEN_OFF (25u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.PINAWKEN */
#define IFX_PMS_PMSWCR0_PINAWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.PINAWKEN */
#define IFX_PMS_PMSWCR0_PINAWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.PINAWKEN */
#define IFX_PMS_PMSWCR0_PINAWKEN_OFF (26u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.PINBWKEN */
#define IFX_PMS_PMSWCR0_PINBWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.PINBWKEN */
#define IFX_PMS_PMSWCR0_PINBWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.PINBWKEN */
#define IFX_PMS_PMSWCR0_PINBWKEN_OFF (27u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.PWRWKEN */
#define IFX_PMS_PMSWCR0_PWRWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.PWRWKEN */
#define IFX_PMS_PMSWCR0_PWRWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.PWRWKEN */
#define IFX_PMS_PMSWCR0_PWRWKEN_OFF (28u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.SCRWKEN */
#define IFX_PMS_PMSWCR0_SCRWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.SCRWKEN */
#define IFX_PMS_PMSWCR0_SCRWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.SCRWKEN */
#define IFX_PMS_PMSWCR0_SCRWKEN_OFF (29u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.PORSTWKEN */
#define IFX_PMS_PMSWCR0_PORSTWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.PORSTWKEN */
#define IFX_PMS_PMSWCR0_PORSTWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.PORSTWKEN */
#define IFX_PMS_PMSWCR0_PORSTWKEN_OFF (30u)

/** \brief Length for Ifx_PMS_PMSWCR0_Bits.WUTWKEN */
#define IFX_PMS_PMSWCR0_WUTWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR0_Bits.WUTWKEN */
#define IFX_PMS_PMSWCR0_WUTWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR0_Bits.WUTWKEN */
#define IFX_PMS_PMSWCR0_WUTWKEN_OFF (31u)

/** \brief Length for Ifx_PMS_PMSWCR2_Bits.SCRINT */
#define IFX_PMS_PMSWCR2_SCRINT_LEN (8u)

/** \brief Mask for Ifx_PMS_PMSWCR2_Bits.SCRINT */
#define IFX_PMS_PMSWCR2_SCRINT_MSK (0xffu)

/** \brief Offset for Ifx_PMS_PMSWCR2_Bits.SCRINT */
#define IFX_PMS_PMSWCR2_SCRINT_OFF (0u)

/** \brief Length for Ifx_PMS_PMSWCR2_Bits.SCRECC */
#define IFX_PMS_PMSWCR2_SCRECC_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR2_Bits.SCRECC */
#define IFX_PMS_PMSWCR2_SCRECC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR2_Bits.SCRECC */
#define IFX_PMS_PMSWCR2_SCRECC_OFF (9u)

/** \brief Length for Ifx_PMS_PMSWCR2_Bits.SCRWDT */
#define IFX_PMS_PMSWCR2_SCRWDT_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR2_Bits.SCRWDT */
#define IFX_PMS_PMSWCR2_SCRWDT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR2_Bits.SCRWDT */
#define IFX_PMS_PMSWCR2_SCRWDT_OFF (10u)

/** \brief Length for Ifx_PMS_PMSWCR2_Bits.SCRRST */
#define IFX_PMS_PMSWCR2_SCRRST_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR2_Bits.SCRRST */
#define IFX_PMS_PMSWCR2_SCRRST_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR2_Bits.SCRRST */
#define IFX_PMS_PMSWCR2_SCRRST_OFF (11u)

/** \brief Length for Ifx_PMS_PMSWCR2_Bits.TCINT */
#define IFX_PMS_PMSWCR2_TCINT_LEN (8u)

/** \brief Mask for Ifx_PMS_PMSWCR2_Bits.TCINT */
#define IFX_PMS_PMSWCR2_TCINT_MSK (0xffu)

/** \brief Offset for Ifx_PMS_PMSWCR2_Bits.TCINT */
#define IFX_PMS_PMSWCR2_TCINT_OFF (16u)

/** \brief Length for Ifx_PMS_PMSWCR2_Bits.TCINTREQ */
#define IFX_PMS_PMSWCR2_TCINTREQ_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR2_Bits.TCINTREQ */
#define IFX_PMS_PMSWCR2_TCINTREQ_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR2_Bits.TCINTREQ */
#define IFX_PMS_PMSWCR2_TCINTREQ_OFF (24u)

/** \brief Length for Ifx_PMS_PMSWCR2_Bits.SMURST */
#define IFX_PMS_PMSWCR2_SMURST_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR2_Bits.SMURST */
#define IFX_PMS_PMSWCR2_SMURST_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR2_Bits.SMURST */
#define IFX_PMS_PMSWCR2_SMURST_OFF (25u)

/** \brief Length for Ifx_PMS_PMSWCR2_Bits.RST */
#define IFX_PMS_PMSWCR2_RST_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR2_Bits.RST */
#define IFX_PMS_PMSWCR2_RST_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR2_Bits.RST */
#define IFX_PMS_PMSWCR2_RST_OFF (26u)

/** \brief Length for Ifx_PMS_PMSWCR3_Bits.WUTREL */
#define IFX_PMS_PMSWCR3_WUTREL_LEN (24u)

/** \brief Mask for Ifx_PMS_PMSWCR3_Bits.WUTREL */
#define IFX_PMS_PMSWCR3_WUTREL_MSK (0xffffffu)

/** \brief Offset for Ifx_PMS_PMSWCR3_Bits.WUTREL */
#define IFX_PMS_PMSWCR3_WUTREL_OFF (0u)

/** \brief Length for Ifx_PMS_PMSWCR3_Bits.WUTEN */
#define IFX_PMS_PMSWCR3_WUTEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR3_Bits.WUTEN */
#define IFX_PMS_PMSWCR3_WUTEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR3_Bits.WUTEN */
#define IFX_PMS_PMSWCR3_WUTEN_OFF (27u)

/** \brief Length for Ifx_PMS_PMSWCR3_Bits.BUSY */
#define IFX_PMS_PMSWCR3_BUSY_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR3_Bits.BUSY */
#define IFX_PMS_PMSWCR3_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR3_Bits.BUSY */
#define IFX_PMS_PMSWCR3_BUSY_OFF (28u)

/** \brief Length for Ifx_PMS_PMSWCR3_Bits.WUTDIV */
#define IFX_PMS_PMSWCR3_WUTDIV_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR3_Bits.WUTDIV */
#define IFX_PMS_PMSWCR3_WUTDIV_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR3_Bits.WUTDIV */
#define IFX_PMS_PMSWCR3_WUTDIV_OFF (29u)

/** \brief Length for Ifx_PMS_PMSWCR3_Bits.WUTMODE */
#define IFX_PMS_PMSWCR3_WUTMODE_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR3_Bits.WUTMODE */
#define IFX_PMS_PMSWCR3_WUTMODE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR3_Bits.WUTMODE */
#define IFX_PMS_PMSWCR3_WUTMODE_OFF (30u)

/** \brief Length for Ifx_PMS_PMSWCR4_Bits.BPSCRSTREQ */
#define IFX_PMS_PMSWCR4_BPSCRSTREQ_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR4_Bits.BPSCRSTREQ */
#define IFX_PMS_PMSWCR4_BPSCRSTREQ_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR4_Bits.BPSCRSTREQ */
#define IFX_PMS_PMSWCR4_BPSCRSTREQ_OFF (0u)

/** \brief Length for Ifx_PMS_PMSWCR4_Bits.SCRSTREQ */
#define IFX_PMS_PMSWCR4_SCRSTREQ_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR4_Bits.SCRSTREQ */
#define IFX_PMS_PMSWCR4_SCRSTREQ_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR4_Bits.SCRSTREQ */
#define IFX_PMS_PMSWCR4_SCRSTREQ_OFF (1u)

/** \brief Length for Ifx_PMS_PMSWCR4_Bits.BPPORSTREQ */
#define IFX_PMS_PMSWCR4_BPPORSTREQ_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR4_Bits.BPPORSTREQ */
#define IFX_PMS_PMSWCR4_BPPORSTREQ_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR4_Bits.BPPORSTREQ */
#define IFX_PMS_PMSWCR4_BPPORSTREQ_OFF (4u)

/** \brief Length for Ifx_PMS_PMSWCR4_Bits.PORSTREQ */
#define IFX_PMS_PMSWCR4_PORSTREQ_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR4_Bits.PORSTREQ */
#define IFX_PMS_PMSWCR4_PORSTREQ_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR4_Bits.PORSTREQ */
#define IFX_PMS_PMSWCR4_PORSTREQ_OFF (5u)

/** \brief Length for Ifx_PMS_PMSWCR4_Bits.SCRCLKSEL */
#define IFX_PMS_PMSWCR4_SCRCLKSEL_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR4_Bits.SCRCLKSEL */
#define IFX_PMS_PMSWCR4_SCRCLKSEL_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR4_Bits.SCRCLKSEL */
#define IFX_PMS_PMSWCR4_SCRCLKSEL_OFF (6u)

/** \brief Length for Ifx_PMS_PMSWCR4_Bits.SCRCFG */
#define IFX_PMS_PMSWCR4_SCRCFG_LEN (8u)

/** \brief Mask for Ifx_PMS_PMSWCR4_Bits.SCRCFG */
#define IFX_PMS_PMSWCR4_SCRCFG_MSK (0xffu)

/** \brief Offset for Ifx_PMS_PMSWCR4_Bits.SCRCFG */
#define IFX_PMS_PMSWCR4_SCRCFG_OFF (16u)

/** \brief Length for Ifx_PMS_PMSWCR4_Bits.BPSCREN */
#define IFX_PMS_PMSWCR4_BPSCREN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR4_Bits.BPSCREN */
#define IFX_PMS_PMSWCR4_BPSCREN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR4_Bits.BPSCREN */
#define IFX_PMS_PMSWCR4_BPSCREN_OFF (24u)

/** \brief Length for Ifx_PMS_PMSWCR4_Bits.SCREN */
#define IFX_PMS_PMSWCR4_SCREN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR4_Bits.SCREN */
#define IFX_PMS_PMSWCR4_SCREN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR4_Bits.SCREN */
#define IFX_PMS_PMSWCR4_SCREN_OFF (25u)

/** \brief Length for Ifx_PMS_PMSWCR5_Bits.BPTRISTREQ */
#define IFX_PMS_PMSWCR5_BPTRISTREQ_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR5_Bits.BPTRISTREQ */
#define IFX_PMS_PMSWCR5_BPTRISTREQ_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR5_Bits.BPTRISTREQ */
#define IFX_PMS_PMSWCR5_BPTRISTREQ_OFF (0u)

/** \brief Length for Ifx_PMS_PMSWCR5_Bits.TRISTREQ */
#define IFX_PMS_PMSWCR5_TRISTREQ_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR5_Bits.TRISTREQ */
#define IFX_PMS_PMSWCR5_TRISTREQ_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR5_Bits.TRISTREQ */
#define IFX_PMS_PMSWCR5_TRISTREQ_OFF (1u)

/** \brief Length for Ifx_PMS_PMSWCR5_Bits.ESR0TRIST */
#define IFX_PMS_PMSWCR5_ESR0TRIST_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR5_Bits.ESR0TRIST */
#define IFX_PMS_PMSWCR5_ESR0TRIST_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR5_Bits.ESR0TRIST */
#define IFX_PMS_PMSWCR5_ESR0TRIST_OFF (2u)

/** \brief Length for Ifx_PMS_PMSWCR5_Bits.PORSTDF */
#define IFX_PMS_PMSWCR5_PORSTDF_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR5_Bits.PORSTDF */
#define IFX_PMS_PMSWCR5_PORSTDF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR5_Bits.PORSTDF */
#define IFX_PMS_PMSWCR5_PORSTDF_OFF (4u)

/** \brief Length for Ifx_PMS_PMSWCR5_Bits.DCDCSYNCO */
#define IFX_PMS_PMSWCR5_DCDCSYNCO_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWCR5_Bits.DCDCSYNCO */
#define IFX_PMS_PMSWCR5_DCDCSYNCO_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWCR5_Bits.DCDCSYNCO */
#define IFX_PMS_PMSWCR5_DCDCSYNCO_OFF (6u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.HWCFGEVR */
#define IFX_PMS_PMSWSTAT_HWCFGEVR_LEN (2u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.HWCFGEVR */
#define IFX_PMS_PMSWSTAT_HWCFGEVR_MSK (0x3u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.HWCFGEVR */
#define IFX_PMS_PMSWSTAT_HWCFGEVR_OFF (1u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.HWCFG4 */
#define IFX_PMS_PMSWSTAT_HWCFG4_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.HWCFG4 */
#define IFX_PMS_PMSWSTAT_HWCFG4_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.HWCFG4 */
#define IFX_PMS_PMSWSTAT_HWCFG4_OFF (4u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.HWCFG5 */
#define IFX_PMS_PMSWSTAT_HWCFG5_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.HWCFG5 */
#define IFX_PMS_PMSWSTAT_HWCFG5_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.HWCFG5 */
#define IFX_PMS_PMSWSTAT_HWCFG5_OFF (5u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.TRIST */
#define IFX_PMS_PMSWSTAT_TRIST_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.TRIST */
#define IFX_PMS_PMSWSTAT_TRIST_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.TRIST */
#define IFX_PMS_PMSWSTAT_TRIST_OFF (6u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.TESTMODE */
#define IFX_PMS_PMSWSTAT_TESTMODE_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.TESTMODE */
#define IFX_PMS_PMSWSTAT_TESTMODE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.TESTMODE */
#define IFX_PMS_PMSWSTAT_TESTMODE_OFF (7u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.ESR0TRIST */
#define IFX_PMS_PMSWSTAT_ESR0TRIST_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.ESR0TRIST */
#define IFX_PMS_PMSWSTAT_ESR0TRIST_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.ESR0TRIST */
#define IFX_PMS_PMSWSTAT_ESR0TRIST_OFF (8u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.PORSTDF */
#define IFX_PMS_PMSWSTAT_PORSTDF_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.PORSTDF */
#define IFX_PMS_PMSWSTAT_PORSTDF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.PORSTDF */
#define IFX_PMS_PMSWSTAT_PORSTDF_OFF (11u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.SCR */
#define IFX_PMS_PMSWSTAT_SCR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.SCR */
#define IFX_PMS_PMSWSTAT_SCR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.SCR */
#define IFX_PMS_PMSWSTAT_SCR_OFF (16u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.SCRST */
#define IFX_PMS_PMSWSTAT_SCRST_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.SCRST */
#define IFX_PMS_PMSWSTAT_SCRST_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.SCRST */
#define IFX_PMS_PMSWSTAT_SCRST_OFF (17u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.SCRCLK */
#define IFX_PMS_PMSWSTAT_SCRCLK_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.SCRCLK */
#define IFX_PMS_PMSWSTAT_SCRCLK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.SCRCLK */
#define IFX_PMS_PMSWSTAT_SCRCLK_OFF (18u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.PORSTREQ */
#define IFX_PMS_PMSWSTAT_PORSTREQ_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.PORSTREQ */
#define IFX_PMS_PMSWSTAT_PORSTREQ_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.PORSTREQ */
#define IFX_PMS_PMSWSTAT_PORSTREQ_OFF (19u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.WUTEN */
#define IFX_PMS_PMSWSTAT_WUTEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.WUTEN */
#define IFX_PMS_PMSWSTAT_WUTEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.WUTEN */
#define IFX_PMS_PMSWSTAT_WUTEN_OFF (24u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.WUTRUN */
#define IFX_PMS_PMSWSTAT_WUTRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.WUTRUN */
#define IFX_PMS_PMSWSTAT_WUTRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.WUTRUN */
#define IFX_PMS_PMSWSTAT_WUTRUN_OFF (25u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.WUTMODE */
#define IFX_PMS_PMSWSTAT_WUTMODE_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.WUTMODE */
#define IFX_PMS_PMSWSTAT_WUTMODE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.WUTMODE */
#define IFX_PMS_PMSWSTAT_WUTMODE_OFF (26u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.ESR0INT */
#define IFX_PMS_PMSWSTAT_ESR0INT_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.ESR0INT */
#define IFX_PMS_PMSWSTAT_ESR0INT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.ESR0INT */
#define IFX_PMS_PMSWSTAT_ESR0INT_OFF (28u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.ESR1INT */
#define IFX_PMS_PMSWSTAT_ESR1INT_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.ESR1INT */
#define IFX_PMS_PMSWSTAT_ESR1INT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.ESR1INT */
#define IFX_PMS_PMSWSTAT_ESR1INT_OFF (29u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.PINAINT */
#define IFX_PMS_PMSWSTAT_PINAINT_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.PINAINT */
#define IFX_PMS_PMSWSTAT_PINAINT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.PINAINT */
#define IFX_PMS_PMSWSTAT_PINAINT_OFF (30u)

/** \brief Length for Ifx_PMS_PMSWSTAT_Bits.PINBINT */
#define IFX_PMS_PMSWSTAT_PINBINT_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT_Bits.PINBINT */
#define IFX_PMS_PMSWSTAT_PINBINT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT_Bits.PINBINT */
#define IFX_PMS_PMSWSTAT_PINBINT_OFF (31u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.ESR0WKP */
#define IFX_PMS_PMSWSTAT2_ESR0WKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.ESR0WKP */
#define IFX_PMS_PMSWSTAT2_ESR0WKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.ESR0WKP */
#define IFX_PMS_PMSWSTAT2_ESR0WKP_OFF (0u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.ESR1WKP */
#define IFX_PMS_PMSWSTAT2_ESR1WKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.ESR1WKP */
#define IFX_PMS_PMSWSTAT2_ESR1WKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.ESR1WKP */
#define IFX_PMS_PMSWSTAT2_ESR1WKP_OFF (1u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PINAWKP */
#define IFX_PMS_PMSWSTAT2_PINAWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PINAWKP */
#define IFX_PMS_PMSWSTAT2_PINAWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PINAWKP */
#define IFX_PMS_PMSWSTAT2_PINAWKP_OFF (2u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PINBWKP */
#define IFX_PMS_PMSWSTAT2_PINBWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PINBWKP */
#define IFX_PMS_PMSWSTAT2_PINBWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PINBWKP */
#define IFX_PMS_PMSWSTAT2_PINBWKP_OFF (3u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PWRWKP */
#define IFX_PMS_PMSWSTAT2_PWRWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PWRWKP */
#define IFX_PMS_PMSWSTAT2_PWRWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PWRWKP */
#define IFX_PMS_PMSWSTAT2_PWRWKP_OFF (4u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.SCRWKP */
#define IFX_PMS_PMSWSTAT2_SCRWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.SCRWKP */
#define IFX_PMS_PMSWSTAT2_SCRWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.SCRWKP */
#define IFX_PMS_PMSWSTAT2_SCRWKP_OFF (5u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PORSTWKP */
#define IFX_PMS_PMSWSTAT2_PORSTWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PORSTWKP */
#define IFX_PMS_PMSWSTAT2_PORSTWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PORSTWKP */
#define IFX_PMS_PMSWSTAT2_PORSTWKP_OFF (6u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.WUTWKP */
#define IFX_PMS_PMSWSTAT2_WUTWKP_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.WUTWKP */
#define IFX_PMS_PMSWSTAT2_WUTWKP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.WUTWKP */
#define IFX_PMS_PMSWSTAT2_WUTWKP_OFF (7u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.ESR0OVRUN */
#define IFX_PMS_PMSWSTAT2_ESR0OVRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.ESR0OVRUN */
#define IFX_PMS_PMSWSTAT2_ESR0OVRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.ESR0OVRUN */
#define IFX_PMS_PMSWSTAT2_ESR0OVRUN_OFF (8u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.ESR1OVRUN */
#define IFX_PMS_PMSWSTAT2_ESR1OVRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.ESR1OVRUN */
#define IFX_PMS_PMSWSTAT2_ESR1OVRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.ESR1OVRUN */
#define IFX_PMS_PMSWSTAT2_ESR1OVRUN_OFF (9u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PINAOVRUN */
#define IFX_PMS_PMSWSTAT2_PINAOVRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PINAOVRUN */
#define IFX_PMS_PMSWSTAT2_PINAOVRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PINAOVRUN */
#define IFX_PMS_PMSWSTAT2_PINAOVRUN_OFF (10u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PINBOVRUN */
#define IFX_PMS_PMSWSTAT2_PINBOVRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PINBOVRUN */
#define IFX_PMS_PMSWSTAT2_PINBOVRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PINBOVRUN */
#define IFX_PMS_PMSWSTAT2_PINBOVRUN_OFF (11u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.VDDSTBYEN */
#define IFX_PMS_PMSWSTAT2_VDDSTBYEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.VDDSTBYEN */
#define IFX_PMS_PMSWSTAT2_VDDSTBYEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.VDDSTBYEN */
#define IFX_PMS_PMSWSTAT2_VDDSTBYEN_OFF (12u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.SCROVRUN */
#define IFX_PMS_PMSWSTAT2_SCROVRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.SCROVRUN */
#define IFX_PMS_PMSWSTAT2_SCROVRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.SCROVRUN */
#define IFX_PMS_PMSWSTAT2_SCROVRUN_OFF (13u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PORSTOVRUN */
#define IFX_PMS_PMSWSTAT2_PORSTOVRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PORSTOVRUN */
#define IFX_PMS_PMSWSTAT2_PORSTOVRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PORSTOVRUN */
#define IFX_PMS_PMSWSTAT2_PORSTOVRUN_OFF (14u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.WUTOVRUN */
#define IFX_PMS_PMSWSTAT2_WUTOVRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.WUTOVRUN */
#define IFX_PMS_PMSWSTAT2_WUTOVRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.WUTOVRUN */
#define IFX_PMS_PMSWSTAT2_WUTOVRUN_OFF (15u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.STBYRAM */
#define IFX_PMS_PMSWSTAT2_STBYRAM_LEN (3u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.STBYRAM */
#define IFX_PMS_PMSWSTAT2_STBYRAM_MSK (0x7u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.STBYRAM */
#define IFX_PMS_PMSWSTAT2_STBYRAM_OFF (16u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.VEXTSTBYEN */
#define IFX_PMS_PMSWSTAT2_VEXTSTBYEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.VEXTSTBYEN */
#define IFX_PMS_PMSWSTAT2_VEXTSTBYEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.VEXTSTBYEN */
#define IFX_PMS_PMSWSTAT2_VEXTSTBYEN_OFF (19u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.BLNKFIL */
#define IFX_PMS_PMSWSTAT2_BLNKFIL_LEN (4u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.BLNKFIL */
#define IFX_PMS_PMSWSTAT2_BLNKFIL_MSK (0xfu)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.BLNKFIL */
#define IFX_PMS_PMSWSTAT2_BLNKFIL_OFF (20u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.ESR0WKEN */
#define IFX_PMS_PMSWSTAT2_ESR0WKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.ESR0WKEN */
#define IFX_PMS_PMSWSTAT2_ESR0WKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.ESR0WKEN */
#define IFX_PMS_PMSWSTAT2_ESR0WKEN_OFF (24u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.ESR1WKEN */
#define IFX_PMS_PMSWSTAT2_ESR1WKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.ESR1WKEN */
#define IFX_PMS_PMSWSTAT2_ESR1WKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.ESR1WKEN */
#define IFX_PMS_PMSWSTAT2_ESR1WKEN_OFF (25u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PINAWKEN */
#define IFX_PMS_PMSWSTAT2_PINAWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PINAWKEN */
#define IFX_PMS_PMSWSTAT2_PINAWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PINAWKEN */
#define IFX_PMS_PMSWSTAT2_PINAWKEN_OFF (26u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PINBWKEN */
#define IFX_PMS_PMSWSTAT2_PINBWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PINBWKEN */
#define IFX_PMS_PMSWSTAT2_PINBWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PINBWKEN */
#define IFX_PMS_PMSWSTAT2_PINBWKEN_OFF (27u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PWRWKEN */
#define IFX_PMS_PMSWSTAT2_PWRWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PWRWKEN */
#define IFX_PMS_PMSWSTAT2_PWRWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PWRWKEN */
#define IFX_PMS_PMSWSTAT2_PWRWKEN_OFF (28u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.SCRWKEN */
#define IFX_PMS_PMSWSTAT2_SCRWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.SCRWKEN */
#define IFX_PMS_PMSWSTAT2_SCRWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.SCRWKEN */
#define IFX_PMS_PMSWSTAT2_SCRWKEN_OFF (29u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.PORSTWKEN */
#define IFX_PMS_PMSWSTAT2_PORSTWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.PORSTWKEN */
#define IFX_PMS_PMSWSTAT2_PORSTWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.PORSTWKEN */
#define IFX_PMS_PMSWSTAT2_PORSTWKEN_OFF (30u)

/** \brief Length for Ifx_PMS_PMSWSTAT2_Bits.WUTWKEN */
#define IFX_PMS_PMSWSTAT2_WUTWKEN_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTAT2_Bits.WUTWKEN */
#define IFX_PMS_PMSWSTAT2_WUTWKEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTAT2_Bits.WUTWKEN */
#define IFX_PMS_PMSWSTAT2_WUTWKEN_OFF (31u)

/** \brief Length for Ifx_PMS_PMSWUTCNT_Bits.WUTCNT */
#define IFX_PMS_PMSWUTCNT_WUTCNT_LEN (24u)

/** \brief Mask for Ifx_PMS_PMSWUTCNT_Bits.WUTCNT */
#define IFX_PMS_PMSWUTCNT_WUTCNT_MSK (0xffffffu)

/** \brief Offset for Ifx_PMS_PMSWUTCNT_Bits.WUTCNT */
#define IFX_PMS_PMSWUTCNT_WUTCNT_OFF (0u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.ESR0WKPCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0WKPCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.ESR0WKPCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0WKPCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.ESR0WKPCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0WKPCLR_OFF (0u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.ESR1WKPCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1WKPCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.ESR1WKPCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1WKPCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.ESR1WKPCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1WKPCLR_OFF (1u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PINAWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PINAWKPCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PINAWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PINAWKPCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PINAWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PINAWKPCLR_OFF (2u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PINBWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PINBWKPCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PINBWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PINBWKPCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PINBWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PINBWKPCLR_OFF (3u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PWRWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PWRWKPCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PWRWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PWRWKPCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PWRWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PWRWKPCLR_OFF (4u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.SCRWKPCLR */
#define IFX_PMS_PMSWSTATCLR_SCRWKPCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.SCRWKPCLR */
#define IFX_PMS_PMSWSTATCLR_SCRWKPCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.SCRWKPCLR */
#define IFX_PMS_PMSWSTATCLR_SCRWKPCLR_OFF (5u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PORSTWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PORSTWKPCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PORSTWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PORSTWKPCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PORSTWKPCLR */
#define IFX_PMS_PMSWSTATCLR_PORSTWKPCLR_OFF (6u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.WUTWKPCLR */
#define IFX_PMS_PMSWSTATCLR_WUTWKPCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.WUTWKPCLR */
#define IFX_PMS_PMSWSTATCLR_WUTWKPCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.WUTWKPCLR */
#define IFX_PMS_PMSWSTATCLR_WUTWKPCLR_OFF (7u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.ESR0OVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0OVRUNCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.ESR0OVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0OVRUNCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.ESR0OVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0OVRUNCLR_OFF (8u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.ESR1OVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1OVRUNCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.ESR1OVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1OVRUNCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.ESR1OVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1OVRUNCLR_OFF (9u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PINAOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PINAOVRUNCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PINAOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PINAOVRUNCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PINAOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PINAOVRUNCLR_OFF (10u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PINBOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PINBOVRUNCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PINBOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PINBOVRUNCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PINBOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PINBOVRUNCLR_OFF (11u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.SCROVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_SCROVRUNCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.SCROVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_SCROVRUNCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.SCROVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_SCROVRUNCLR_OFF (13u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PORSTOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PORSTOVRUNCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PORSTOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PORSTOVRUNCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PORSTOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_PORSTOVRUNCLR_OFF (14u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.WUTOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_WUTOVRUNCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.WUTOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_WUTOVRUNCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.WUTOVRUNCLR */
#define IFX_PMS_PMSWSTATCLR_WUTOVRUNCLR_OFF (15u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.SCRSTCLR */
#define IFX_PMS_PMSWSTATCLR_SCRSTCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.SCRSTCLR */
#define IFX_PMS_PMSWSTATCLR_SCRSTCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.SCRSTCLR */
#define IFX_PMS_PMSWSTATCLR_SCRSTCLR_OFF (16u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.ESR0INTCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0INTCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.ESR0INTCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0INTCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.ESR0INTCLR */
#define IFX_PMS_PMSWSTATCLR_ESR0INTCLR_OFF (28u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.ESR1INTCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1INTCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.ESR1INTCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1INTCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.ESR1INTCLR */
#define IFX_PMS_PMSWSTATCLR_ESR1INTCLR_OFF (29u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PINAINTCLR */
#define IFX_PMS_PMSWSTATCLR_PINAINTCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PINAINTCLR */
#define IFX_PMS_PMSWSTATCLR_PINAINTCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PINAINTCLR */
#define IFX_PMS_PMSWSTATCLR_PINAINTCLR_OFF (30u)

/** \brief Length for Ifx_PMS_PMSWSTATCLR_Bits.PINBINTCLR */
#define IFX_PMS_PMSWSTATCLR_PINBINTCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_PMSWSTATCLR_Bits.PINBINTCLR */
#define IFX_PMS_PMSWSTATCLR_PINBINTCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_PMSWSTATCLR_Bits.PINBINTCLR */
#define IFX_PMS_PMSWSTATCLR_PINBINTCLR_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDSTAT0_Bits.ADCFBCV */
#define IFX_PMS_EVRSDSTAT0_ADCFBCV_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDSTAT0_Bits.ADCFBCV */
#define IFX_PMS_EVRSDSTAT0_ADCFBCV_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDSTAT0_Bits.ADCFBCV */
#define IFX_PMS_EVRSDSTAT0_ADCFBCV_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDSTAT0_Bits.DPWMOUT */
#define IFX_PMS_EVRSDSTAT0_DPWMOUT_LEN (12u)

/** \brief Mask for Ifx_PMS_EVRSDSTAT0_Bits.DPWMOUT */
#define IFX_PMS_EVRSDSTAT0_DPWMOUT_MSK (0xfffu)

/** \brief Offset for Ifx_PMS_EVRSDSTAT0_Bits.DPWMOUT */
#define IFX_PMS_EVRSDSTAT0_DPWMOUT_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL0_Bits.SDFREQSPRD */
#define IFX_PMS_EVRSDCTRL0_SDFREQSPRD_LEN (16u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL0_Bits.SDFREQSPRD */
#define IFX_PMS_EVRSDCTRL0_SDFREQSPRD_MSK (0xffffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL0_Bits.SDFREQSPRD */
#define IFX_PMS_EVRSDCTRL0_SDFREQSPRD_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL0_Bits.SDFREQ */
#define IFX_PMS_EVRSDCTRL0_SDFREQ_LEN (12u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL0_Bits.SDFREQ */
#define IFX_PMS_EVRSDCTRL0_SDFREQ_MSK (0xfffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL0_Bits.SDFREQ */
#define IFX_PMS_EVRSDCTRL0_SDFREQ_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL0_Bits.NGOFF */
#define IFX_PMS_EVRSDCTRL0_NGOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL0_Bits.NGOFF */
#define IFX_PMS_EVRSDCTRL0_NGOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL0_Bits.NGOFF */
#define IFX_PMS_EVRSDCTRL0_NGOFF_OFF (28u)

/** \brief Length for Ifx_PMS_EVRSDCTRL0_Bits.PGOFF */
#define IFX_PMS_EVRSDCTRL0_PGOFF_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL0_Bits.PGOFF */
#define IFX_PMS_EVRSDCTRL0_PGOFF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL0_Bits.PGOFF */
#define IFX_PMS_EVRSDCTRL0_PGOFF_OFF (29u)

/** \brief Length for Ifx_PMS_EVRSDCTRL0_Bits.UP */
#define IFX_PMS_EVRSDCTRL0_UP_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL0_Bits.UP */
#define IFX_PMS_EVRSDCTRL0_UP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL0_Bits.UP */
#define IFX_PMS_EVRSDCTRL0_UP_OFF (30u)

/** \brief Length for Ifx_PMS_EVRSDCTRL0_Bits.LCK */
#define IFX_PMS_EVRSDCTRL0_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL0_Bits.LCK */
#define IFX_PMS_EVRSDCTRL0_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL0_Bits.LCK */
#define IFX_PMS_EVRSDCTRL0_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCTRL1_Bits.M0TOFF */
#define IFX_PMS_EVRSDCTRL1_M0TOFF_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL1_Bits.M0TOFF */
#define IFX_PMS_EVRSDCTRL1_M0TOFF_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL1_Bits.M0TOFF */
#define IFX_PMS_EVRSDCTRL1_M0TOFF_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL1_Bits.M0TON */
#define IFX_PMS_EVRSDCTRL1_M0TON_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL1_Bits.M0TON */
#define IFX_PMS_EVRSDCTRL1_M0TON_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL1_Bits.M0TON */
#define IFX_PMS_EVRSDCTRL1_M0TON_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL1_Bits.M0S0COEFF */
#define IFX_PMS_EVRSDCTRL1_M0S0COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL1_Bits.M0S0COEFF */
#define IFX_PMS_EVRSDCTRL1_M0S0COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL1_Bits.M0S0COEFF */
#define IFX_PMS_EVRSDCTRL1_M0S0COEFF_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL1_Bits.M0DEADBD */
#define IFX_PMS_EVRSDCTRL1_M0DEADBD_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL1_Bits.M0DEADBD */
#define IFX_PMS_EVRSDCTRL1_M0DEADBD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL1_Bits.M0DEADBD */
#define IFX_PMS_EVRSDCTRL1_M0DEADBD_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSDCTRL1_Bits.M0ADCZB */
#define IFX_PMS_EVRSDCTRL1_M0ADCZB_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL1_Bits.M0ADCZB */
#define IFX_PMS_EVRSDCTRL1_M0ADCZB_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL1_Bits.M0ADCZB */
#define IFX_PMS_EVRSDCTRL1_M0ADCZB_OFF (22u)

/** \brief Length for Ifx_PMS_EVRSDCTRL1_Bits.M0SKIP */
#define IFX_PMS_EVRSDCTRL1_M0SKIP_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL1_Bits.M0SKIP */
#define IFX_PMS_EVRSDCTRL1_M0SKIP_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL1_Bits.M0SKIP */
#define IFX_PMS_EVRSDCTRL1_M0SKIP_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCTRL1_Bits.SYNCEN */
#define IFX_PMS_EVRSDCTRL1_SYNCEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL1_Bits.SYNCEN */
#define IFX_PMS_EVRSDCTRL1_SYNCEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL1_Bits.SYNCEN */
#define IFX_PMS_EVRSDCTRL1_SYNCEN_OFF (30u)

/** \brief Length for Ifx_PMS_EVRSDCTRL1_Bits.LCK */
#define IFX_PMS_EVRSDCTRL1_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL1_Bits.LCK */
#define IFX_PMS_EVRSDCTRL1_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL1_Bits.LCK */
#define IFX_PMS_EVRSDCTRL1_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCTRL2_Bits.LPBNDOFFSET */
#define IFX_PMS_EVRSDCTRL2_LPBNDOFFSET_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL2_Bits.LPBNDOFFSET */
#define IFX_PMS_EVRSDCTRL2_LPBNDOFFSET_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL2_Bits.LPBNDOFFSET */
#define IFX_PMS_EVRSDCTRL2_LPBNDOFFSET_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL2_Bits.LPBNDWIDTH */
#define IFX_PMS_EVRSDCTRL2_LPBNDWIDTH_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL2_Bits.LPBNDWIDTH */
#define IFX_PMS_EVRSDCTRL2_LPBNDWIDTH_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL2_Bits.LPBNDWIDTH */
#define IFX_PMS_EVRSDCTRL2_LPBNDWIDTH_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSDCTRL2_Bits.LPLPFCOEFF */
#define IFX_PMS_EVRSDCTRL2_LPLPFCOEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL2_Bits.LPLPFCOEFF */
#define IFX_PMS_EVRSDCTRL2_LPLPFCOEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL2_Bits.LPLPFCOEFF */
#define IFX_PMS_EVRSDCTRL2_LPLPFCOEFF_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL2_Bits.SDFREQLP */
#define IFX_PMS_EVRSDCTRL2_SDFREQLP_LEN (12u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL2_Bits.SDFREQLP */
#define IFX_PMS_EVRSDCTRL2_SDFREQLP_MSK (0xfffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL2_Bits.SDFREQLP */
#define IFX_PMS_EVRSDCTRL2_SDFREQLP_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL2_Bits.EVRCMOD */
#define IFX_PMS_EVRSDCTRL2_EVRCMOD_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL2_Bits.EVRCMOD */
#define IFX_PMS_EVRSDCTRL2_EVRCMOD_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL2_Bits.EVRCMOD */
#define IFX_PMS_EVRSDCTRL2_EVRCMOD_OFF (30u)

/** \brief Length for Ifx_PMS_EVRSDCTRL2_Bits.LCK */
#define IFX_PMS_EVRSDCTRL2_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL2_Bits.LCK */
#define IFX_PMS_EVRSDCTRL2_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL2_Bits.LCK */
#define IFX_PMS_EVRSDCTRL2_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCTRL3_Bits.M1TOFF */
#define IFX_PMS_EVRSDCTRL3_M1TOFF_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL3_Bits.M1TOFF */
#define IFX_PMS_EVRSDCTRL3_M1TOFF_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL3_Bits.M1TOFF */
#define IFX_PMS_EVRSDCTRL3_M1TOFF_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL3_Bits.M1TON */
#define IFX_PMS_EVRSDCTRL3_M1TON_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL3_Bits.M1TON */
#define IFX_PMS_EVRSDCTRL3_M1TON_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL3_Bits.M1TON */
#define IFX_PMS_EVRSDCTRL3_M1TON_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL3_Bits.M1S0COEFF */
#define IFX_PMS_EVRSDCTRL3_M1S0COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL3_Bits.M1S0COEFF */
#define IFX_PMS_EVRSDCTRL3_M1S0COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL3_Bits.M1S0COEFF */
#define IFX_PMS_EVRSDCTRL3_M1S0COEFF_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL3_Bits.M1DEADBD */
#define IFX_PMS_EVRSDCTRL3_M1DEADBD_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL3_Bits.M1DEADBD */
#define IFX_PMS_EVRSDCTRL3_M1DEADBD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL3_Bits.M1DEADBD */
#define IFX_PMS_EVRSDCTRL3_M1DEADBD_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSDCTRL3_Bits.M1ADCZB */
#define IFX_PMS_EVRSDCTRL3_M1ADCZB_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL3_Bits.M1ADCZB */
#define IFX_PMS_EVRSDCTRL3_M1ADCZB_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL3_Bits.M1ADCZB */
#define IFX_PMS_EVRSDCTRL3_M1ADCZB_OFF (22u)

/** \brief Length for Ifx_PMS_EVRSDCTRL3_Bits.M1SKIP */
#define IFX_PMS_EVRSDCTRL3_M1SKIP_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL3_Bits.M1SKIP */
#define IFX_PMS_EVRSDCTRL3_M1SKIP_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL3_Bits.M1SKIP */
#define IFX_PMS_EVRSDCTRL3_M1SKIP_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCTRL4_Bits.VOKCFG */
#define IFX_PMS_EVRSDCTRL4_VOKCFG_LEN (6u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL4_Bits.VOKCFG */
#define IFX_PMS_EVRSDCTRL4_VOKCFG_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL4_Bits.VOKCFG */
#define IFX_PMS_EVRSDCTRL4_VOKCFG_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL4_Bits.SDFREQST */
#define IFX_PMS_EVRSDCTRL4_SDFREQST_LEN (12u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL4_Bits.SDFREQST */
#define IFX_PMS_EVRSDCTRL4_SDFREQST_MSK (0xfffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL4_Bits.SDFREQST */
#define IFX_PMS_EVRSDCTRL4_SDFREQST_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL5_Bits.M2TOFF */
#define IFX_PMS_EVRSDCTRL5_M2TOFF_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL5_Bits.M2TOFF */
#define IFX_PMS_EVRSDCTRL5_M2TOFF_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL5_Bits.M2TOFF */
#define IFX_PMS_EVRSDCTRL5_M2TOFF_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL5_Bits.M2TON */
#define IFX_PMS_EVRSDCTRL5_M2TON_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL5_Bits.M2TON */
#define IFX_PMS_EVRSDCTRL5_M2TON_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL5_Bits.M2TON */
#define IFX_PMS_EVRSDCTRL5_M2TON_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL5_Bits.M2S0COEFF */
#define IFX_PMS_EVRSDCTRL5_M2S0COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL5_Bits.M2S0COEFF */
#define IFX_PMS_EVRSDCTRL5_M2S0COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL5_Bits.M2S0COEFF */
#define IFX_PMS_EVRSDCTRL5_M2S0COEFF_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL5_Bits.M2DEADBD */
#define IFX_PMS_EVRSDCTRL5_M2DEADBD_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL5_Bits.M2DEADBD */
#define IFX_PMS_EVRSDCTRL5_M2DEADBD_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL5_Bits.M2DEADBD */
#define IFX_PMS_EVRSDCTRL5_M2DEADBD_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSDCTRL5_Bits.M2ADCZB */
#define IFX_PMS_EVRSDCTRL5_M2ADCZB_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL5_Bits.M2ADCZB */
#define IFX_PMS_EVRSDCTRL5_M2ADCZB_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL5_Bits.M2ADCZB */
#define IFX_PMS_EVRSDCTRL5_M2ADCZB_OFF (22u)

/** \brief Length for Ifx_PMS_EVRSDCTRL5_Bits.M2SKIP */
#define IFX_PMS_EVRSDCTRL5_M2SKIP_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL5_Bits.M2SKIP */
#define IFX_PMS_EVRSDCTRL5_M2SKIP_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL5_Bits.M2SKIP */
#define IFX_PMS_EVRSDCTRL5_M2SKIP_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCTRL6_Bits.SVINTH */
#define IFX_PMS_EVRSDCTRL6_SVINTH_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL6_Bits.SVINTH */
#define IFX_PMS_EVRSDCTRL6_SVINTH_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL6_Bits.SVINTH */
#define IFX_PMS_EVRSDCTRL6_SVINTH_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL6_Bits.SVOTH */
#define IFX_PMS_EVRSDCTRL6_SVOTH_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL6_Bits.SVOTH */
#define IFX_PMS_EVRSDCTRL6_SVOTH_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL6_Bits.SVOTH */
#define IFX_PMS_EVRSDCTRL6_SVOTH_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL6_Bits.SINCLO */
#define IFX_PMS_EVRSDCTRL6_SINCLO_LEN (3u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL6_Bits.SINCLO */
#define IFX_PMS_EVRSDCTRL6_SINCLO_MSK (0x7u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL6_Bits.SINCLO */
#define IFX_PMS_EVRSDCTRL6_SINCLO_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL6_Bits.SINCHI */
#define IFX_PMS_EVRSDCTRL6_SINCHI_LEN (3u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL6_Bits.SINCHI */
#define IFX_PMS_EVRSDCTRL6_SINCHI_MSK (0x7u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL6_Bits.SINCHI */
#define IFX_PMS_EVRSDCTRL6_SINCHI_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSDCTRL6_Bits.LCK */
#define IFX_PMS_EVRSDCTRL6_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL6_Bits.LCK */
#define IFX_PMS_EVRSDCTRL6_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL6_Bits.LCK */
#define IFX_PMS_EVRSDCTRL6_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCTRL7_Bits.DRVNI */
#define IFX_PMS_EVRSDCTRL7_DRVNI_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL7_Bits.DRVNI */
#define IFX_PMS_EVRSDCTRL7_DRVNI_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL7_Bits.DRVNI */
#define IFX_PMS_EVRSDCTRL7_DRVNI_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL7_Bits.DRVPCBF */
#define IFX_PMS_EVRSDCTRL7_DRVPCBF_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL7_Bits.DRVPCBF */
#define IFX_PMS_EVRSDCTRL7_DRVPCBF_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL7_Bits.DRVPCBF */
#define IFX_PMS_EVRSDCTRL7_DRVPCBF_OFF (2u)

/** \brief Length for Ifx_PMS_EVRSDCTRL7_Bits.DRVP */
#define IFX_PMS_EVRSDCTRL7_DRVP_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL7_Bits.DRVP */
#define IFX_PMS_EVRSDCTRL7_DRVP_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL7_Bits.DRVP */
#define IFX_PMS_EVRSDCTRL7_DRVP_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSDCTRL7_Bits.DRVSLOMODE */
#define IFX_PMS_EVRSDCTRL7_DRVSLOMODE_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL7_Bits.DRVSLOMODE */
#define IFX_PMS_EVRSDCTRL7_DRVSLOMODE_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL7_Bits.DRVSLOMODE */
#define IFX_PMS_EVRSDCTRL7_DRVSLOMODE_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL7_Bits.DRVSPR */
#define IFX_PMS_EVRSDCTRL7_DRVSPR_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL7_Bits.DRVSPR */
#define IFX_PMS_EVRSDCTRL7_DRVSPR_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL7_Bits.DRVSPR */
#define IFX_PMS_EVRSDCTRL7_DRVSPR_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL7_Bits.SYNCDIVFAC */
#define IFX_PMS_EVRSDCTRL7_SYNCDIVFAC_LEN (3u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL7_Bits.SYNCDIVFAC */
#define IFX_PMS_EVRSDCTRL7_SYNCDIVFAC_MSK (0x7u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL7_Bits.SYNCDIVFAC */
#define IFX_PMS_EVRSDCTRL7_SYNCDIVFAC_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCTRL7_Bits.LCK */
#define IFX_PMS_EVRSDCTRL7_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL7_Bits.LCK */
#define IFX_PMS_EVRSDCTRL7_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL7_Bits.LCK */
#define IFX_PMS_EVRSDCTRL7_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCTRL8_Bits.FBADCOFFS */
#define IFX_PMS_EVRSDCTRL8_FBADCOFFS_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL8_Bits.FBADCOFFS */
#define IFX_PMS_EVRSDCTRL8_FBADCOFFS_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL8_Bits.FBADCOFFS */
#define IFX_PMS_EVRSDCTRL8_FBADCOFFS_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL8_Bits.FBADCSMP */
#define IFX_PMS_EVRSDCTRL8_FBADCSMP_LEN (6u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL8_Bits.FBADCSMP */
#define IFX_PMS_EVRSDCTRL8_FBADCSMP_MSK (0x3fu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL8_Bits.FBADCSMP */
#define IFX_PMS_EVRSDCTRL8_FBADCSMP_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL8_Bits.FBADCBLNK */
#define IFX_PMS_EVRSDCTRL8_FBADCBLNK_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL8_Bits.FBADCBLNK */
#define IFX_PMS_EVRSDCTRL8_FBADCBLNK_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL8_Bits.FBADCBLNK */
#define IFX_PMS_EVRSDCTRL8_FBADCBLNK_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL8_Bits.FBADCLPF */
#define IFX_PMS_EVRSDCTRL8_FBADCLPF_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL8_Bits.FBADCLPF */
#define IFX_PMS_EVRSDCTRL8_FBADCLPF_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL8_Bits.FBADCLPF */
#define IFX_PMS_EVRSDCTRL8_FBADCLPF_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSDCTRL8_Bits.FBADCERR */
#define IFX_PMS_EVRSDCTRL8_FBADCERR_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL8_Bits.FBADCERR */
#define IFX_PMS_EVRSDCTRL8_FBADCERR_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL8_Bits.FBADCERR */
#define IFX_PMS_EVRSDCTRL8_FBADCERR_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCTRL8_Bits.FBADCLSB */
#define IFX_PMS_EVRSDCTRL8_FBADCLSB_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL8_Bits.FBADCLSB */
#define IFX_PMS_EVRSDCTRL8_FBADCLSB_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL8_Bits.FBADCLSB */
#define IFX_PMS_EVRSDCTRL8_FBADCLSB_OFF (28u)

/** \brief Length for Ifx_PMS_EVRSDCTRL8_Bits.LCK */
#define IFX_PMS_EVRSDCTRL8_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL8_Bits.LCK */
#define IFX_PMS_EVRSDCTRL8_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL8_Bits.LCK */
#define IFX_PMS_EVRSDCTRL8_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCTRL9_Bits.FFADCOFFS */
#define IFX_PMS_EVRSDCTRL9_FFADCOFFS_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL9_Bits.FFADCOFFS */
#define IFX_PMS_EVRSDCTRL9_FFADCOFFS_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL9_Bits.FFADCOFFS */
#define IFX_PMS_EVRSDCTRL9_FFADCOFFS_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL9_Bits.FFADCLPF */
#define IFX_PMS_EVRSDCTRL9_FFADCLPF_LEN (3u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL9_Bits.FFADCLPF */
#define IFX_PMS_EVRSDCTRL9_FFADCLPF_MSK (0x7u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL9_Bits.FFADCLPF */
#define IFX_PMS_EVRSDCTRL9_FFADCLPF_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL9_Bits.LCK */
#define IFX_PMS_EVRSDCTRL9_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL9_Bits.LCK */
#define IFX_PMS_EVRSDCTRL9_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL9_Bits.LCK */
#define IFX_PMS_EVRSDCTRL9_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCTRL10_Bits.SHVH */
#define IFX_PMS_EVRSDCTRL10_SHVH_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL10_Bits.SHVH */
#define IFX_PMS_EVRSDCTRL10_SHVH_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL10_Bits.SHVH */
#define IFX_PMS_EVRSDCTRL10_SHVH_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL10_Bits.SHVL */
#define IFX_PMS_EVRSDCTRL10_SHVL_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL10_Bits.SHVL */
#define IFX_PMS_EVRSDCTRL10_SHVL_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL10_Bits.SHVL */
#define IFX_PMS_EVRSDCTRL10_SHVL_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL10_Bits.SHHVEN */
#define IFX_PMS_EVRSDCTRL10_SHHVEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL10_Bits.SHHVEN */
#define IFX_PMS_EVRSDCTRL10_SHHVEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL10_Bits.SHHVEN */
#define IFX_PMS_EVRSDCTRL10_SHHVEN_OFF (28u)

/** \brief Length for Ifx_PMS_EVRSDCTRL10_Bits.SHLVEN */
#define IFX_PMS_EVRSDCTRL10_SHLVEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL10_Bits.SHLVEN */
#define IFX_PMS_EVRSDCTRL10_SHLVEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL10_Bits.SHLVEN */
#define IFX_PMS_EVRSDCTRL10_SHLVEN_OFF (29u)

/** \brief Length for Ifx_PMS_EVRSDCTRL11_Bits.DROOPVH */
#define IFX_PMS_EVRSDCTRL11_DROOPVH_LEN (5u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL11_Bits.DROOPVH */
#define IFX_PMS_EVRSDCTRL11_DROOPVH_MSK (0x1fu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL11_Bits.DROOPVH */
#define IFX_PMS_EVRSDCTRL11_DROOPVH_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCTRL11_Bits.DROOPVL */
#define IFX_PMS_EVRSDCTRL11_DROOPVL_LEN (5u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL11_Bits.DROOPVL */
#define IFX_PMS_EVRSDCTRL11_DROOPVL_MSK (0x1fu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL11_Bits.DROOPVL */
#define IFX_PMS_EVRSDCTRL11_DROOPVL_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCTRL11_Bits.SYNCMAXDEV */
#define IFX_PMS_EVRSDCTRL11_SYNCMAXDEV_LEN (5u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL11_Bits.SYNCMAXDEV */
#define IFX_PMS_EVRSDCTRL11_SYNCMAXDEV_MSK (0x1fu)

/** \brief Offset for Ifx_PMS_EVRSDCTRL11_Bits.SYNCMAXDEV */
#define IFX_PMS_EVRSDCTRL11_SYNCMAXDEV_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCTRL11_Bits.SYNCHYST */
#define IFX_PMS_EVRSDCTRL11_SYNCHYST_LEN (3u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL11_Bits.SYNCHYST */
#define IFX_PMS_EVRSDCTRL11_SYNCHYST_MSK (0x7u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL11_Bits.SYNCHYST */
#define IFX_PMS_EVRSDCTRL11_SYNCHYST_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCTRL11_Bits.SYNCMUXSEL */
#define IFX_PMS_EVRSDCTRL11_SYNCMUXSEL_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL11_Bits.SYNCMUXSEL */
#define IFX_PMS_EVRSDCTRL11_SYNCMUXSEL_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL11_Bits.SYNCMUXSEL */
#define IFX_PMS_EVRSDCTRL11_SYNCMUXSEL_OFF (28u)

/** \brief Length for Ifx_PMS_EVRSDCTRL11_Bits.LCK */
#define IFX_PMS_EVRSDCTRL11_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCTRL11_Bits.LCK */
#define IFX_PMS_EVRSDCTRL11_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCTRL11_Bits.LCK */
#define IFX_PMS_EVRSDCTRL11_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S0EN */
#define IFX_PMS_EVRSDCOEFF0_M0S0EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S0EN */
#define IFX_PMS_EVRSDCOEFF0_M0S0EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S0EN */
#define IFX_PMS_EVRSDCOEFF0_M0S0EN_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2EN */
#define IFX_PMS_EVRSDCOEFF0_M0S2EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2EN */
#define IFX_PMS_EVRSDCOEFF0_M0S2EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2EN */
#define IFX_PMS_EVRSDCOEFF0_M0S2EN_OFF (1u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3EN */
#define IFX_PMS_EVRSDCOEFF0_M0S3EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3EN */
#define IFX_PMS_EVRSDCOEFF0_M0S3EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3EN */
#define IFX_PMS_EVRSDCOEFF0_M0S3EN_OFF (2u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3CLIP */
#define IFX_PMS_EVRSDCOEFF0_M0S3CLIP_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3CLIP */
#define IFX_PMS_EVRSDCOEFF0_M0S3CLIP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3CLIP */
#define IFX_PMS_EVRSDCOEFF0_M0S3CLIP_OFF (3u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S4EN */
#define IFX_PMS_EVRSDCOEFF0_M0S4EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S4EN */
#define IFX_PMS_EVRSDCOEFF0_M0S4EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S4EN */
#define IFX_PMS_EVRSDCOEFF0_M0S4EN_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0RAMPEN */
#define IFX_PMS_EVRSDCOEFF0_M0RAMPEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0RAMPEN */
#define IFX_PMS_EVRSDCOEFF0_M0RAMPEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0RAMPEN */
#define IFX_PMS_EVRSDCOEFF0_M0RAMPEN_OFF (5u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0SFRGET */
#define IFX_PMS_EVRSDCOEFF0_M0SFRGET_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0SFRGET */
#define IFX_PMS_EVRSDCOEFF0_M0SFRGET_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0SFRGET */
#define IFX_PMS_EVRSDCOEFF0_M0SFRGET_OFF (6u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0SKIPEN */
#define IFX_PMS_EVRSDCOEFF0_M0SKIPEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0SKIPEN */
#define IFX_PMS_EVRSDCOEFF0_M0SKIPEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0SKIPEN */
#define IFX_PMS_EVRSDCOEFF0_M0SKIPEN_OFF (7u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S3COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S3COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S3COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S3COEFF_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S4COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S4COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S4COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S4COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S4COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S4COEFF_OFF (12u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF0_M0SRMPCOEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF0_M0SRMPCOEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF0_M0SRMPCOEFF_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF0_M0FGETCOEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF0_M0FGETCOEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF0_M0FGETCOEFF_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S2COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S2COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2COEFF */
#define IFX_PMS_EVRSDCOEFF0_M0S2COEFF_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2VINSRC */
#define IFX_PMS_EVRSDCOEFF0_M0S2VINSRC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2VINSRC */
#define IFX_PMS_EVRSDCOEFF0_M0S2VINSRC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2VINSRC */
#define IFX_PMS_EVRSDCOEFF0_M0S2VINSRC_OFF (28u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2VOSRC */
#define IFX_PMS_EVRSDCOEFF0_M0S2VOSRC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2VOSRC */
#define IFX_PMS_EVRSDCOEFF0_M0S2VOSRC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0S2VOSRC */
#define IFX_PMS_EVRSDCOEFF0_M0S2VOSRC_OFF (29u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.M0SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF0_M0SRMPCOEFFFRAC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.M0SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF0_M0SRMPCOEFFFRAC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.M0SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF0_M0SRMPCOEFFFRAC_OFF (30u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF0_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF0_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF0_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF0_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF0_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF0_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOCFLPF */
#define IFX_PMS_EVRSDCOEFF1_M0VOCFLPF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOCFLPF */
#define IFX_PMS_EVRSDCOEFF1_M0VOCFLPF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOCFLPF */
#define IFX_PMS_EVRSDCOEFF1_M0VOCFLPF_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOCFINC */
#define IFX_PMS_EVRSDCOEFF1_M0VOCFINC_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOCFINC */
#define IFX_PMS_EVRSDCOEFF1_M0VOCFINC_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOCFINC */
#define IFX_PMS_EVRSDCOEFF1_M0VOCFINC_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOUT */
#define IFX_PMS_EVRSDCOEFF1_M0VOUT_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOUT */
#define IFX_PMS_EVRSDCOEFF1_M0VOUT_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF1_Bits.M0VOUT */
#define IFX_PMS_EVRSDCOEFF1_M0VOUT_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF1_Bits.M0VIN */
#define IFX_PMS_EVRSDCOEFF1_M0VIN_LEN (11u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF1_Bits.M0VIN */
#define IFX_PMS_EVRSDCOEFF1_M0VIN_MSK (0x7ffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF1_Bits.M0VIN */
#define IFX_PMS_EVRSDCOEFF1_M0VIN_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF1_Bits.M0S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF1_M0S3COEFFFRAC_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF1_Bits.M0S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF1_M0S3COEFFFRAC_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF1_Bits.M0S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF1_M0S3COEFFFRAC_OFF (27u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF1_Bits.M0S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF1_M0S2COEFFFRAC_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF1_Bits.M0S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF1_M0S2COEFFFRAC_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF1_Bits.M0S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF1_M0S2COEFFFRAC_OFF (29u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF1_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF1_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF1_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF1_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF1_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF1_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S0EN */
#define IFX_PMS_EVRSDCOEFF2_M1S0EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S0EN */
#define IFX_PMS_EVRSDCOEFF2_M1S0EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S0EN */
#define IFX_PMS_EVRSDCOEFF2_M1S0EN_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2EN */
#define IFX_PMS_EVRSDCOEFF2_M1S2EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2EN */
#define IFX_PMS_EVRSDCOEFF2_M1S2EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2EN */
#define IFX_PMS_EVRSDCOEFF2_M1S2EN_OFF (1u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3EN */
#define IFX_PMS_EVRSDCOEFF2_M1S3EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3EN */
#define IFX_PMS_EVRSDCOEFF2_M1S3EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3EN */
#define IFX_PMS_EVRSDCOEFF2_M1S3EN_OFF (2u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3CLIP */
#define IFX_PMS_EVRSDCOEFF2_M1S3CLIP_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3CLIP */
#define IFX_PMS_EVRSDCOEFF2_M1S3CLIP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3CLIP */
#define IFX_PMS_EVRSDCOEFF2_M1S3CLIP_OFF (3u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S4EN */
#define IFX_PMS_EVRSDCOEFF2_M1S4EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S4EN */
#define IFX_PMS_EVRSDCOEFF2_M1S4EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S4EN */
#define IFX_PMS_EVRSDCOEFF2_M1S4EN_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1RAMPEN */
#define IFX_PMS_EVRSDCOEFF2_M1RAMPEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1RAMPEN */
#define IFX_PMS_EVRSDCOEFF2_M1RAMPEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1RAMPEN */
#define IFX_PMS_EVRSDCOEFF2_M1RAMPEN_OFF (5u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1SFRGET */
#define IFX_PMS_EVRSDCOEFF2_M1SFRGET_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1SFRGET */
#define IFX_PMS_EVRSDCOEFF2_M1SFRGET_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1SFRGET */
#define IFX_PMS_EVRSDCOEFF2_M1SFRGET_OFF (6u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1SKIPEN */
#define IFX_PMS_EVRSDCOEFF2_M1SKIPEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1SKIPEN */
#define IFX_PMS_EVRSDCOEFF2_M1SKIPEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1SKIPEN */
#define IFX_PMS_EVRSDCOEFF2_M1SKIPEN_OFF (7u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S3COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S3COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S3COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S3COEFF_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S4COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S4COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S4COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S4COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S4COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S4COEFF_OFF (12u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF2_M1SRMPCOEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF2_M1SRMPCOEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF2_M1SRMPCOEFF_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF2_M1FGETCOEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF2_M1FGETCOEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF2_M1FGETCOEFF_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S2COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S2COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2COEFF */
#define IFX_PMS_EVRSDCOEFF2_M1S2COEFF_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2VINSRC */
#define IFX_PMS_EVRSDCOEFF2_M1S2VINSRC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2VINSRC */
#define IFX_PMS_EVRSDCOEFF2_M1S2VINSRC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2VINSRC */
#define IFX_PMS_EVRSDCOEFF2_M1S2VINSRC_OFF (28u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2VOSRC */
#define IFX_PMS_EVRSDCOEFF2_M1S2VOSRC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2VOSRC */
#define IFX_PMS_EVRSDCOEFF2_M1S2VOSRC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF2_Bits.M1S2VOSRC */
#define IFX_PMS_EVRSDCOEFF2_M1S2VOSRC_OFF (29u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOCFLPF */
#define IFX_PMS_EVRSDCOEFF3_M1VOCFLPF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOCFLPF */
#define IFX_PMS_EVRSDCOEFF3_M1VOCFLPF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOCFLPF */
#define IFX_PMS_EVRSDCOEFF3_M1VOCFLPF_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOCFINC */
#define IFX_PMS_EVRSDCOEFF3_M1VOCFINC_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOCFINC */
#define IFX_PMS_EVRSDCOEFF3_M1VOCFINC_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOCFINC */
#define IFX_PMS_EVRSDCOEFF3_M1VOCFINC_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOUT */
#define IFX_PMS_EVRSDCOEFF3_M1VOUT_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOUT */
#define IFX_PMS_EVRSDCOEFF3_M1VOUT_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF3_Bits.M1VOUT */
#define IFX_PMS_EVRSDCOEFF3_M1VOUT_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF3_Bits.M1VIN */
#define IFX_PMS_EVRSDCOEFF3_M1VIN_LEN (11u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF3_Bits.M1VIN */
#define IFX_PMS_EVRSDCOEFF3_M1VIN_MSK (0x7ffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF3_Bits.M1VIN */
#define IFX_PMS_EVRSDCOEFF3_M1VIN_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF3_Bits.M1S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1S3COEFFFRAC_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF3_Bits.M1S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1S3COEFFFRAC_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF3_Bits.M1S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1S3COEFFFRAC_OFF (27u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF3_Bits.M1S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1S2COEFFFRAC_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF3_Bits.M1S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1S2COEFFFRAC_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF3_Bits.M1S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1S2COEFFFRAC_OFF (29u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF3_Bits.M1SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1SRMPCOEFFFRAC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF3_Bits.M1SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1SRMPCOEFFFRAC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF3_Bits.M1SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF3_M1SRMPCOEFFFRAC_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S0EN */
#define IFX_PMS_EVRSDCOEFF4_M2S0EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S0EN */
#define IFX_PMS_EVRSDCOEFF4_M2S0EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S0EN */
#define IFX_PMS_EVRSDCOEFF4_M2S0EN_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2EN */
#define IFX_PMS_EVRSDCOEFF4_M2S2EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2EN */
#define IFX_PMS_EVRSDCOEFF4_M2S2EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2EN */
#define IFX_PMS_EVRSDCOEFF4_M2S2EN_OFF (1u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3EN */
#define IFX_PMS_EVRSDCOEFF4_M2S3EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3EN */
#define IFX_PMS_EVRSDCOEFF4_M2S3EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3EN */
#define IFX_PMS_EVRSDCOEFF4_M2S3EN_OFF (2u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3CLIP */
#define IFX_PMS_EVRSDCOEFF4_M2S3CLIP_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3CLIP */
#define IFX_PMS_EVRSDCOEFF4_M2S3CLIP_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3CLIP */
#define IFX_PMS_EVRSDCOEFF4_M2S3CLIP_OFF (3u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S4EN */
#define IFX_PMS_EVRSDCOEFF4_M2S4EN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S4EN */
#define IFX_PMS_EVRSDCOEFF4_M2S4EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S4EN */
#define IFX_PMS_EVRSDCOEFF4_M2S4EN_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2RAMPEN */
#define IFX_PMS_EVRSDCOEFF4_M2RAMPEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2RAMPEN */
#define IFX_PMS_EVRSDCOEFF4_M2RAMPEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2RAMPEN */
#define IFX_PMS_EVRSDCOEFF4_M2RAMPEN_OFF (5u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2SFRGET */
#define IFX_PMS_EVRSDCOEFF4_M2SFRGET_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2SFRGET */
#define IFX_PMS_EVRSDCOEFF4_M2SFRGET_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2SFRGET */
#define IFX_PMS_EVRSDCOEFF4_M2SFRGET_OFF (6u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2SKIPEN */
#define IFX_PMS_EVRSDCOEFF4_M2SKIPEN_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2SKIPEN */
#define IFX_PMS_EVRSDCOEFF4_M2SKIPEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2SKIPEN */
#define IFX_PMS_EVRSDCOEFF4_M2SKIPEN_OFF (7u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S3COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S3COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S3COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S3COEFF_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S4COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S4COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S4COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S4COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S4COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S4COEFF_OFF (12u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF4_M2SRMPCOEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF4_M2SRMPCOEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2SRMPCOEFF */
#define IFX_PMS_EVRSDCOEFF4_M2SRMPCOEFF_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF4_M2FGETCOEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF4_M2FGETCOEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2FGETCOEFF */
#define IFX_PMS_EVRSDCOEFF4_M2FGETCOEFF_OFF (20u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S2COEFF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S2COEFF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2COEFF */
#define IFX_PMS_EVRSDCOEFF4_M2S2COEFF_OFF (24u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2VINSRC */
#define IFX_PMS_EVRSDCOEFF4_M2S2VINSRC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2VINSRC */
#define IFX_PMS_EVRSDCOEFF4_M2S2VINSRC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2VINSRC */
#define IFX_PMS_EVRSDCOEFF4_M2S2VINSRC_OFF (28u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2VOSRC */
#define IFX_PMS_EVRSDCOEFF4_M2S2VOSRC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2VOSRC */
#define IFX_PMS_EVRSDCOEFF4_M2S2VOSRC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF4_Bits.M2S2VOSRC */
#define IFX_PMS_EVRSDCOEFF4_M2S2VOSRC_OFF (29u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOCFLPF */
#define IFX_PMS_EVRSDCOEFF5_M2VOCFLPF_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOCFLPF */
#define IFX_PMS_EVRSDCOEFF5_M2VOCFLPF_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOCFLPF */
#define IFX_PMS_EVRSDCOEFF5_M2VOCFLPF_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOCFINC */
#define IFX_PMS_EVRSDCOEFF5_M2VOCFINC_LEN (4u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOCFINC */
#define IFX_PMS_EVRSDCOEFF5_M2VOCFINC_MSK (0xfu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOCFINC */
#define IFX_PMS_EVRSDCOEFF5_M2VOCFINC_OFF (4u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOUT */
#define IFX_PMS_EVRSDCOEFF5_M2VOUT_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOUT */
#define IFX_PMS_EVRSDCOEFF5_M2VOUT_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF5_Bits.M2VOUT */
#define IFX_PMS_EVRSDCOEFF5_M2VOUT_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF5_Bits.M2VIN */
#define IFX_PMS_EVRSDCOEFF5_M2VIN_LEN (11u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF5_Bits.M2VIN */
#define IFX_PMS_EVRSDCOEFF5_M2VIN_MSK (0x7ffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF5_Bits.M2VIN */
#define IFX_PMS_EVRSDCOEFF5_M2VIN_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF5_Bits.M2S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2S3COEFFFRAC_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF5_Bits.M2S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2S3COEFFFRAC_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF5_Bits.M2S3COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2S3COEFFFRAC_OFF (27u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF5_Bits.M2S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2S2COEFFFRAC_LEN (2u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF5_Bits.M2S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2S2COEFFFRAC_MSK (0x3u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF5_Bits.M2S2COEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2S2COEFFFRAC_OFF (29u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF5_Bits.M2SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2SRMPCOEFFFRAC_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF5_Bits.M2SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2SRMPCOEFFFRAC_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF5_Bits.M2SRMPCOEFFFRAC */
#define IFX_PMS_EVRSDCOEFF5_M2SRMPCOEFFFRAC_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG0 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG0_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG0 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG0_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG0 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG0_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG1 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG1_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG1 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG1_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG1 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG1_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG2 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG2_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG2 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG2_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF6_Bits.CT5REG2 */
#define IFX_PMS_EVRSDCOEFF6_CT5REG2_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF6_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF6_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF6_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF6_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF6_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF6_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF7_Bits.CT5REG3 */
#define IFX_PMS_EVRSDCOEFF7_CT5REG3_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF7_Bits.CT5REG3 */
#define IFX_PMS_EVRSDCOEFF7_CT5REG3_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF7_Bits.CT5REG3 */
#define IFX_PMS_EVRSDCOEFF7_CT5REG3_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF7_Bits.CT5REG4 */
#define IFX_PMS_EVRSDCOEFF7_CT5REG4_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF7_Bits.CT5REG4 */
#define IFX_PMS_EVRSDCOEFF7_CT5REG4_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF7_Bits.CT5REG4 */
#define IFX_PMS_EVRSDCOEFF7_CT5REG4_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF7_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF7_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF7_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF7_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF7_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF7_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG0 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG0_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG0 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG0_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG0 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG0_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG1 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG1_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG1 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG1_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG1 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG1_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG2 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG2_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG2 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG2_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF8_Bits.CT33REG2 */
#define IFX_PMS_EVRSDCOEFF8_CT33REG2_OFF (16u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF8_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF8_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF8_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF8_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF8_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF8_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF9_Bits.CT33REG3 */
#define IFX_PMS_EVRSDCOEFF9_CT33REG3_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF9_Bits.CT33REG3 */
#define IFX_PMS_EVRSDCOEFF9_CT33REG3_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF9_Bits.CT33REG3 */
#define IFX_PMS_EVRSDCOEFF9_CT33REG3_OFF (0u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF9_Bits.CT33REG4 */
#define IFX_PMS_EVRSDCOEFF9_CT33REG4_LEN (8u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF9_Bits.CT33REG4 */
#define IFX_PMS_EVRSDCOEFF9_CT33REG4_MSK (0xffu)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF9_Bits.CT33REG4 */
#define IFX_PMS_EVRSDCOEFF9_CT33REG4_OFF (8u)

/** \brief Length for Ifx_PMS_EVRSDCOEFF9_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF9_LCK_LEN (1u)

/** \brief Mask for Ifx_PMS_EVRSDCOEFF9_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF9_LCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_EVRSDCOEFF9_Bits.LCK */
#define IFX_PMS_EVRSDCOEFF9_LCK_OFF (31u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF4 */
#define IFX_PMS_AG_STDBY0_SF4_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF4 */
#define IFX_PMS_AG_STDBY0_SF4_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF4 */
#define IFX_PMS_AG_STDBY0_SF4_OFF (4u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF5 */
#define IFX_PMS_AG_STDBY0_SF5_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF5 */
#define IFX_PMS_AG_STDBY0_SF5_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF5 */
#define IFX_PMS_AG_STDBY0_SF5_OFF (5u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF6 */
#define IFX_PMS_AG_STDBY0_SF6_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF6 */
#define IFX_PMS_AG_STDBY0_SF6_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF6 */
#define IFX_PMS_AG_STDBY0_SF6_OFF (6u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF7 */
#define IFX_PMS_AG_STDBY0_SF7_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF7 */
#define IFX_PMS_AG_STDBY0_SF7_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF7 */
#define IFX_PMS_AG_STDBY0_SF7_OFF (7u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF8 */
#define IFX_PMS_AG_STDBY0_SF8_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF8 */
#define IFX_PMS_AG_STDBY0_SF8_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF8 */
#define IFX_PMS_AG_STDBY0_SF8_OFF (8u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF9 */
#define IFX_PMS_AG_STDBY0_SF9_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF9 */
#define IFX_PMS_AG_STDBY0_SF9_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF9 */
#define IFX_PMS_AG_STDBY0_SF9_OFF (9u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF10 */
#define IFX_PMS_AG_STDBY0_SF10_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF10 */
#define IFX_PMS_AG_STDBY0_SF10_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF10 */
#define IFX_PMS_AG_STDBY0_SF10_OFF (10u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF11 */
#define IFX_PMS_AG_STDBY0_SF11_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF11 */
#define IFX_PMS_AG_STDBY0_SF11_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF11 */
#define IFX_PMS_AG_STDBY0_SF11_OFF (11u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF12 */
#define IFX_PMS_AG_STDBY0_SF12_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF12 */
#define IFX_PMS_AG_STDBY0_SF12_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF12 */
#define IFX_PMS_AG_STDBY0_SF12_OFF (12u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF13 */
#define IFX_PMS_AG_STDBY0_SF13_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF13 */
#define IFX_PMS_AG_STDBY0_SF13_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF13 */
#define IFX_PMS_AG_STDBY0_SF13_OFF (13u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF14 */
#define IFX_PMS_AG_STDBY0_SF14_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF14 */
#define IFX_PMS_AG_STDBY0_SF14_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF14 */
#define IFX_PMS_AG_STDBY0_SF14_OFF (14u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.SF15 */
#define IFX_PMS_AG_STDBY0_SF15_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.SF15 */
#define IFX_PMS_AG_STDBY0_SF15_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.SF15 */
#define IFX_PMS_AG_STDBY0_SF15_OFF (15u)

/** \brief Length for Ifx_PMS_AG_STDBY0_Bits.FSPERR */
#define IFX_PMS_AG_STDBY0_FSPERR_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY0_Bits.FSPERR */
#define IFX_PMS_AG_STDBY0_FSPERR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY0_Bits.FSPERR */
#define IFX_PMS_AG_STDBY0_FSPERR_OFF (30u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF0 */
#define IFX_PMS_AG_STDBY1_SF0_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF0 */
#define IFX_PMS_AG_STDBY1_SF0_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF0 */
#define IFX_PMS_AG_STDBY1_SF0_OFF (0u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF1 */
#define IFX_PMS_AG_STDBY1_SF1_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF1 */
#define IFX_PMS_AG_STDBY1_SF1_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF1 */
#define IFX_PMS_AG_STDBY1_SF1_OFF (1u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF2 */
#define IFX_PMS_AG_STDBY1_SF2_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF2 */
#define IFX_PMS_AG_STDBY1_SF2_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF2 */
#define IFX_PMS_AG_STDBY1_SF2_OFF (2u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF3 */
#define IFX_PMS_AG_STDBY1_SF3_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF3 */
#define IFX_PMS_AG_STDBY1_SF3_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF3 */
#define IFX_PMS_AG_STDBY1_SF3_OFF (3u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF4 */
#define IFX_PMS_AG_STDBY1_SF4_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF4 */
#define IFX_PMS_AG_STDBY1_SF4_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF4 */
#define IFX_PMS_AG_STDBY1_SF4_OFF (4u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF5 */
#define IFX_PMS_AG_STDBY1_SF5_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF5 */
#define IFX_PMS_AG_STDBY1_SF5_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF5 */
#define IFX_PMS_AG_STDBY1_SF5_OFF (5u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF7 */
#define IFX_PMS_AG_STDBY1_SF7_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF7 */
#define IFX_PMS_AG_STDBY1_SF7_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF7 */
#define IFX_PMS_AG_STDBY1_SF7_OFF (7u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF8 */
#define IFX_PMS_AG_STDBY1_SF8_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF8 */
#define IFX_PMS_AG_STDBY1_SF8_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF8 */
#define IFX_PMS_AG_STDBY1_SF8_OFF (8u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF9 */
#define IFX_PMS_AG_STDBY1_SF9_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF9 */
#define IFX_PMS_AG_STDBY1_SF9_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF9 */
#define IFX_PMS_AG_STDBY1_SF9_OFF (9u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF10 */
#define IFX_PMS_AG_STDBY1_SF10_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF10 */
#define IFX_PMS_AG_STDBY1_SF10_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF10 */
#define IFX_PMS_AG_STDBY1_SF10_OFF (10u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF11 */
#define IFX_PMS_AG_STDBY1_SF11_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF11 */
#define IFX_PMS_AG_STDBY1_SF11_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF11 */
#define IFX_PMS_AG_STDBY1_SF11_OFF (11u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF12 */
#define IFX_PMS_AG_STDBY1_SF12_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF12 */
#define IFX_PMS_AG_STDBY1_SF12_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF12 */
#define IFX_PMS_AG_STDBY1_SF12_OFF (12u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF13 */
#define IFX_PMS_AG_STDBY1_SF13_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF13 */
#define IFX_PMS_AG_STDBY1_SF13_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF13 */
#define IFX_PMS_AG_STDBY1_SF13_OFF (13u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF14 */
#define IFX_PMS_AG_STDBY1_SF14_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF14 */
#define IFX_PMS_AG_STDBY1_SF14_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF14 */
#define IFX_PMS_AG_STDBY1_SF14_OFF (14u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF15 */
#define IFX_PMS_AG_STDBY1_SF15_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF15 */
#define IFX_PMS_AG_STDBY1_SF15_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF15 */
#define IFX_PMS_AG_STDBY1_SF15_OFF (15u)

/** \brief Length for Ifx_PMS_AG_STDBY1_Bits.SF16 */
#define IFX_PMS_AG_STDBY1_SF16_LEN (1u)

/** \brief Mask for Ifx_PMS_AG_STDBY1_Bits.SF16 */
#define IFX_PMS_AG_STDBY1_SF16_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AG_STDBY1_Bits.SF16 */
#define IFX_PMS_AG_STDBY1_SF16_OFF (16u)

/** \brief Length for Ifx_PMS_MONBISTSTAT_Bits.TSTOK */
#define IFX_PMS_MONBISTSTAT_TSTOK_LEN (1u)

/** \brief Mask for Ifx_PMS_MONBISTSTAT_Bits.TSTOK */
#define IFX_PMS_MONBISTSTAT_TSTOK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONBISTSTAT_Bits.TSTOK */
#define IFX_PMS_MONBISTSTAT_TSTOK_OFF (0u)

/** \brief Length for Ifx_PMS_MONBISTSTAT_Bits.TSTRUN */
#define IFX_PMS_MONBISTSTAT_TSTRUN_LEN (1u)

/** \brief Mask for Ifx_PMS_MONBISTSTAT_Bits.TSTRUN */
#define IFX_PMS_MONBISTSTAT_TSTRUN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONBISTSTAT_Bits.TSTRUN */
#define IFX_PMS_MONBISTSTAT_TSTRUN_OFF (2u)

/** \brief Length for Ifx_PMS_MONBISTSTAT_Bits.TSTDONE */
#define IFX_PMS_MONBISTSTAT_TSTDONE_LEN (1u)

/** \brief Mask for Ifx_PMS_MONBISTSTAT_Bits.TSTDONE */
#define IFX_PMS_MONBISTSTAT_TSTDONE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONBISTSTAT_Bits.TSTDONE */
#define IFX_PMS_MONBISTSTAT_TSTDONE_OFF (3u)

/** \brief Length for Ifx_PMS_MONBISTSTAT_Bits.SMUERR */
#define IFX_PMS_MONBISTSTAT_SMUERR_LEN (1u)

/** \brief Mask for Ifx_PMS_MONBISTSTAT_Bits.SMUERR */
#define IFX_PMS_MONBISTSTAT_SMUERR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONBISTSTAT_Bits.SMUERR */
#define IFX_PMS_MONBISTSTAT_SMUERR_OFF (4u)

/** \brief Length for Ifx_PMS_MONBISTSTAT_Bits.PMSERR */
#define IFX_PMS_MONBISTSTAT_PMSERR_LEN (1u)

/** \brief Mask for Ifx_PMS_MONBISTSTAT_Bits.PMSERR */
#define IFX_PMS_MONBISTSTAT_PMSERR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONBISTSTAT_Bits.PMSERR */
#define IFX_PMS_MONBISTSTAT_PMSERR_OFF (5u)

/** \brief Length for Ifx_PMS_MONBISTCTRL_Bits.TSTEN */
#define IFX_PMS_MONBISTCTRL_TSTEN_LEN (1u)

/** \brief Mask for Ifx_PMS_MONBISTCTRL_Bits.TSTEN */
#define IFX_PMS_MONBISTCTRL_TSTEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONBISTCTRL_Bits.TSTEN */
#define IFX_PMS_MONBISTCTRL_TSTEN_OFF (0u)

/** \brief Length for Ifx_PMS_MONBISTCTRL_Bits.TSTCLR */
#define IFX_PMS_MONBISTCTRL_TSTCLR_LEN (1u)

/** \brief Mask for Ifx_PMS_MONBISTCTRL_Bits.TSTCLR */
#define IFX_PMS_MONBISTCTRL_TSTCLR_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONBISTCTRL_Bits.TSTCLR */
#define IFX_PMS_MONBISTCTRL_TSTCLR_OFF (1u)

/** \brief Length for Ifx_PMS_MONBISTCTRL_Bits.BITPROT */
#define IFX_PMS_MONBISTCTRL_BITPROT_LEN (1u)

/** \brief Mask for Ifx_PMS_MONBISTCTRL_Bits.BITPROT */
#define IFX_PMS_MONBISTCTRL_BITPROT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_MONBISTCTRL_Bits.BITPROT */
#define IFX_PMS_MONBISTCTRL_BITPROT_OFF (30u)

/** \brief Length for Ifx_PMS_CMD_STDBY_Bits.SMUEN */
#define IFX_PMS_CMD_STDBY_SMUEN_LEN (1u)

/** \brief Mask for Ifx_PMS_CMD_STDBY_Bits.SMUEN */
#define IFX_PMS_CMD_STDBY_SMUEN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_CMD_STDBY_Bits.SMUEN */
#define IFX_PMS_CMD_STDBY_SMUEN_OFF (0u)

/** \brief Length for Ifx_PMS_CMD_STDBY_Bits.FSP0EN */
#define IFX_PMS_CMD_STDBY_FSP0EN_LEN (1u)

/** \brief Mask for Ifx_PMS_CMD_STDBY_Bits.FSP0EN */
#define IFX_PMS_CMD_STDBY_FSP0EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_CMD_STDBY_Bits.FSP0EN */
#define IFX_PMS_CMD_STDBY_FSP0EN_OFF (1u)

/** \brief Length for Ifx_PMS_CMD_STDBY_Bits.FSP1EN */
#define IFX_PMS_CMD_STDBY_FSP1EN_LEN (1u)

/** \brief Mask for Ifx_PMS_CMD_STDBY_Bits.FSP1EN */
#define IFX_PMS_CMD_STDBY_FSP1EN_MSK (0x1u)

/** \brief Offset for Ifx_PMS_CMD_STDBY_Bits.FSP1EN */
#define IFX_PMS_CMD_STDBY_FSP1EN_OFF (2u)

/** \brief Length for Ifx_PMS_CMD_STDBY_Bits.ASCE */
#define IFX_PMS_CMD_STDBY_ASCE_LEN (1u)

/** \brief Mask for Ifx_PMS_CMD_STDBY_Bits.ASCE */
#define IFX_PMS_CMD_STDBY_ASCE_MSK (0x1u)

/** \brief Offset for Ifx_PMS_CMD_STDBY_Bits.ASCE */
#define IFX_PMS_CMD_STDBY_ASCE_OFF (3u)

/** \brief Length for Ifx_PMS_CMD_STDBY_Bits.BITPROT */
#define IFX_PMS_CMD_STDBY_BITPROT_LEN (1u)

/** \brief Mask for Ifx_PMS_CMD_STDBY_Bits.BITPROT */
#define IFX_PMS_CMD_STDBY_BITPROT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_CMD_STDBY_Bits.BITPROT */
#define IFX_PMS_CMD_STDBY_BITPROT_OFF (30u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE4 */
#define IFX_PMS_AGFSP_STDBY0_FE4_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE4 */
#define IFX_PMS_AGFSP_STDBY0_FE4_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE4 */
#define IFX_PMS_AGFSP_STDBY0_FE4_OFF (4u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE5 */
#define IFX_PMS_AGFSP_STDBY0_FE5_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE5 */
#define IFX_PMS_AGFSP_STDBY0_FE5_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE5 */
#define IFX_PMS_AGFSP_STDBY0_FE5_OFF (5u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE6 */
#define IFX_PMS_AGFSP_STDBY0_FE6_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE6 */
#define IFX_PMS_AGFSP_STDBY0_FE6_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE6 */
#define IFX_PMS_AGFSP_STDBY0_FE6_OFF (6u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE7 */
#define IFX_PMS_AGFSP_STDBY0_FE7_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE7 */
#define IFX_PMS_AGFSP_STDBY0_FE7_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE7 */
#define IFX_PMS_AGFSP_STDBY0_FE7_OFF (7u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE8 */
#define IFX_PMS_AGFSP_STDBY0_FE8_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE8 */
#define IFX_PMS_AGFSP_STDBY0_FE8_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE8 */
#define IFX_PMS_AGFSP_STDBY0_FE8_OFF (8u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE9 */
#define IFX_PMS_AGFSP_STDBY0_FE9_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE9 */
#define IFX_PMS_AGFSP_STDBY0_FE9_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE9 */
#define IFX_PMS_AGFSP_STDBY0_FE9_OFF (9u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE10 */
#define IFX_PMS_AGFSP_STDBY0_FE10_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE10 */
#define IFX_PMS_AGFSP_STDBY0_FE10_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE10 */
#define IFX_PMS_AGFSP_STDBY0_FE10_OFF (10u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE11 */
#define IFX_PMS_AGFSP_STDBY0_FE11_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE11 */
#define IFX_PMS_AGFSP_STDBY0_FE11_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE11 */
#define IFX_PMS_AGFSP_STDBY0_FE11_OFF (11u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE12 */
#define IFX_PMS_AGFSP_STDBY0_FE12_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE12 */
#define IFX_PMS_AGFSP_STDBY0_FE12_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE12 */
#define IFX_PMS_AGFSP_STDBY0_FE12_OFF (12u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE13 */
#define IFX_PMS_AGFSP_STDBY0_FE13_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE13 */
#define IFX_PMS_AGFSP_STDBY0_FE13_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE13 */
#define IFX_PMS_AGFSP_STDBY0_FE13_OFF (13u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE14 */
#define IFX_PMS_AGFSP_STDBY0_FE14_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE14 */
#define IFX_PMS_AGFSP_STDBY0_FE14_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE14 */
#define IFX_PMS_AGFSP_STDBY0_FE14_OFF (14u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.FE15 */
#define IFX_PMS_AGFSP_STDBY0_FE15_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.FE15 */
#define IFX_PMS_AGFSP_STDBY0_FE15_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.FE15 */
#define IFX_PMS_AGFSP_STDBY0_FE15_OFF (15u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY0_Bits.BITPROT */
#define IFX_PMS_AGFSP_STDBY0_BITPROT_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY0_Bits.BITPROT */
#define IFX_PMS_AGFSP_STDBY0_BITPROT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY0_Bits.BITPROT */
#define IFX_PMS_AGFSP_STDBY0_BITPROT_OFF (30u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE0 */
#define IFX_PMS_AGFSP_STDBY1_FE0_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE0 */
#define IFX_PMS_AGFSP_STDBY1_FE0_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE0 */
#define IFX_PMS_AGFSP_STDBY1_FE0_OFF (0u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE1 */
#define IFX_PMS_AGFSP_STDBY1_FE1_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE1 */
#define IFX_PMS_AGFSP_STDBY1_FE1_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE1 */
#define IFX_PMS_AGFSP_STDBY1_FE1_OFF (1u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE2 */
#define IFX_PMS_AGFSP_STDBY1_FE2_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE2 */
#define IFX_PMS_AGFSP_STDBY1_FE2_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE2 */
#define IFX_PMS_AGFSP_STDBY1_FE2_OFF (2u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE3 */
#define IFX_PMS_AGFSP_STDBY1_FE3_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE3 */
#define IFX_PMS_AGFSP_STDBY1_FE3_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE3 */
#define IFX_PMS_AGFSP_STDBY1_FE3_OFF (3u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE4 */
#define IFX_PMS_AGFSP_STDBY1_FE4_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE4 */
#define IFX_PMS_AGFSP_STDBY1_FE4_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE4 */
#define IFX_PMS_AGFSP_STDBY1_FE4_OFF (4u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE5 */
#define IFX_PMS_AGFSP_STDBY1_FE5_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE5 */
#define IFX_PMS_AGFSP_STDBY1_FE5_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE5 */
#define IFX_PMS_AGFSP_STDBY1_FE5_OFF (5u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE7 */
#define IFX_PMS_AGFSP_STDBY1_FE7_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE7 */
#define IFX_PMS_AGFSP_STDBY1_FE7_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE7 */
#define IFX_PMS_AGFSP_STDBY1_FE7_OFF (7u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE8 */
#define IFX_PMS_AGFSP_STDBY1_FE8_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE8 */
#define IFX_PMS_AGFSP_STDBY1_FE8_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE8 */
#define IFX_PMS_AGFSP_STDBY1_FE8_OFF (8u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE9 */
#define IFX_PMS_AGFSP_STDBY1_FE9_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE9 */
#define IFX_PMS_AGFSP_STDBY1_FE9_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE9 */
#define IFX_PMS_AGFSP_STDBY1_FE9_OFF (9u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE10 */
#define IFX_PMS_AGFSP_STDBY1_FE10_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE10 */
#define IFX_PMS_AGFSP_STDBY1_FE10_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE10 */
#define IFX_PMS_AGFSP_STDBY1_FE10_OFF (10u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE11 */
#define IFX_PMS_AGFSP_STDBY1_FE11_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE11 */
#define IFX_PMS_AGFSP_STDBY1_FE11_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE11 */
#define IFX_PMS_AGFSP_STDBY1_FE11_OFF (11u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE12 */
#define IFX_PMS_AGFSP_STDBY1_FE12_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE12 */
#define IFX_PMS_AGFSP_STDBY1_FE12_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE12 */
#define IFX_PMS_AGFSP_STDBY1_FE12_OFF (12u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE13 */
#define IFX_PMS_AGFSP_STDBY1_FE13_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE13 */
#define IFX_PMS_AGFSP_STDBY1_FE13_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE13 */
#define IFX_PMS_AGFSP_STDBY1_FE13_OFF (13u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE14 */
#define IFX_PMS_AGFSP_STDBY1_FE14_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE14 */
#define IFX_PMS_AGFSP_STDBY1_FE14_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE14 */
#define IFX_PMS_AGFSP_STDBY1_FE14_OFF (14u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE15 */
#define IFX_PMS_AGFSP_STDBY1_FE15_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE15 */
#define IFX_PMS_AGFSP_STDBY1_FE15_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE15 */
#define IFX_PMS_AGFSP_STDBY1_FE15_OFF (15u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.FE16 */
#define IFX_PMS_AGFSP_STDBY1_FE16_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.FE16 */
#define IFX_PMS_AGFSP_STDBY1_FE16_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.FE16 */
#define IFX_PMS_AGFSP_STDBY1_FE16_OFF (16u)

/** \brief Length for Ifx_PMS_AGFSP_STDBY1_Bits.BITPROT */
#define IFX_PMS_AGFSP_STDBY1_BITPROT_LEN (1u)

/** \brief Mask for Ifx_PMS_AGFSP_STDBY1_Bits.BITPROT */
#define IFX_PMS_AGFSP_STDBY1_BITPROT_MSK (0x1u)

/** \brief Offset for Ifx_PMS_AGFSP_STDBY1_Bits.BITPROT */
#define IFX_PMS_AGFSP_STDBY1_BITPROT_OFF (30u)

/** \brief Length for Ifx_PMS_DTSSTAT_Bits.RESULT */
#define IFX_PMS_DTSSTAT_RESULT_LEN (12u)

/** \brief Mask for Ifx_PMS_DTSSTAT_Bits.RESULT */
#define IFX_PMS_DTSSTAT_RESULT_MSK (0xfffu)

/** \brief Offset for Ifx_PMS_DTSSTAT_Bits.RESULT */
#define IFX_PMS_DTSSTAT_RESULT_OFF (0u)

/** \brief Length for Ifx_PMS_DTSLIM_Bits.LOWER */
#define IFX_PMS_DTSLIM_LOWER_LEN (12u)

/** \brief Mask for Ifx_PMS_DTSLIM_Bits.LOWER */
#define IFX_PMS_DTSLIM_LOWER_MSK (0xfffu)

/** \brief Offset for Ifx_PMS_DTSLIM_Bits.LOWER */
#define IFX_PMS_DTSLIM_LOWER_OFF (0u)

/** \brief Length for Ifx_PMS_DTSLIM_Bits.LLU */
#define IFX_PMS_DTSLIM_LLU_LEN (1u)

/** \brief Mask for Ifx_PMS_DTSLIM_Bits.LLU */
#define IFX_PMS_DTSLIM_LLU_MSK (0x1u)

/** \brief Offset for Ifx_PMS_DTSLIM_Bits.LLU */
#define IFX_PMS_DTSLIM_LLU_OFF (15u)

/** \brief Length for Ifx_PMS_DTSLIM_Bits.UPPER */
#define IFX_PMS_DTSLIM_UPPER_LEN (12u)

/** \brief Mask for Ifx_PMS_DTSLIM_Bits.UPPER */
#define IFX_PMS_DTSLIM_UPPER_MSK (0xfffu)

/** \brief Offset for Ifx_PMS_DTSLIM_Bits.UPPER */
#define IFX_PMS_DTSLIM_UPPER_OFF (16u)

/** \brief Length for Ifx_PMS_DTSLIM_Bits.SLCK */
#define IFX_PMS_DTSLIM_SLCK_LEN (1u)

/** \brief Mask for Ifx_PMS_DTSLIM_Bits.SLCK */
#define IFX_PMS_DTSLIM_SLCK_MSK (0x1u)

/** \brief Offset for Ifx_PMS_DTSLIM_Bits.SLCK */
#define IFX_PMS_DTSLIM_SLCK_OFF (30u)

/** \brief Length for Ifx_PMS_DTSLIM_Bits.UOF */
#define IFX_PMS_DTSLIM_UOF_LEN (1u)

/** \brief Mask for Ifx_PMS_DTSLIM_Bits.UOF */
#define IFX_PMS_DTSLIM_UOF_MSK (0x1u)

/** \brief Offset for Ifx_PMS_DTSLIM_Bits.UOF */
#define IFX_PMS_DTSLIM_UOF_OFF (31u)

/** \brief Length for Ifx_PMS_OTSS_Bits.OTGB0 */
#define IFX_PMS_OTSS_OTGB0_LEN (4u)

/** \brief Mask for Ifx_PMS_OTSS_Bits.OTGB0 */
#define IFX_PMS_OTSS_OTGB0_MSK (0xfu)

/** \brief Offset for Ifx_PMS_OTSS_Bits.OTGB0 */
#define IFX_PMS_OTSS_OTGB0_OFF (0u)

/** \brief Length for Ifx_PMS_OTSS_Bits.OTGB1 */
#define IFX_PMS_OTSS_OTGB1_LEN (4u)

/** \brief Mask for Ifx_PMS_OTSS_Bits.OTGB1 */
#define IFX_PMS_OTSS_OTGB1_MSK (0xfu)

/** \brief Offset for Ifx_PMS_OTSS_Bits.OTGB1 */
#define IFX_PMS_OTSS_OTGB1_OFF (8u)

/** \brief Length for Ifx_PMS_OTSC0_Bits.B0LAM */
#define IFX_PMS_OTSC0_B0LAM_LEN (4u)

/** \brief Mask for Ifx_PMS_OTSC0_Bits.B0LAM */
#define IFX_PMS_OTSC0_B0LAM_MSK (0xfu)

/** \brief Offset for Ifx_PMS_OTSC0_Bits.B0LAM */
#define IFX_PMS_OTSC0_B0LAM_OFF (0u)

/** \brief Length for Ifx_PMS_OTSC0_Bits.B0HAM */
#define IFX_PMS_OTSC0_B0HAM_LEN (4u)

/** \brief Mask for Ifx_PMS_OTSC0_Bits.B0HAM */
#define IFX_PMS_OTSC0_B0HAM_MSK (0xfu)

/** \brief Offset for Ifx_PMS_OTSC0_Bits.B0HAM */
#define IFX_PMS_OTSC0_B0HAM_OFF (8u)

/** \brief Length for Ifx_PMS_OTSC0_Bits.B1LAM */
#define IFX_PMS_OTSC0_B1LAM_LEN (4u)

/** \brief Mask for Ifx_PMS_OTSC0_Bits.B1LAM */
#define IFX_PMS_OTSC0_B1LAM_MSK (0xfu)

/** \brief Offset for Ifx_PMS_OTSC0_Bits.B1LAM */
#define IFX_PMS_OTSC0_B1LAM_OFF (16u)

/** \brief Length for Ifx_PMS_OTSC0_Bits.B1HAM */
#define IFX_PMS_OTSC0_B1HAM_LEN (4u)

/** \brief Mask for Ifx_PMS_OTSC0_Bits.B1HAM */
#define IFX_PMS_OTSC0_B1HAM_MSK (0xfu)

/** \brief Offset for Ifx_PMS_OTSC0_Bits.B1HAM */
#define IFX_PMS_OTSC0_B1HAM_OFF (24u)

/** \brief Length for Ifx_PMS_OTSC1_Bits.B0EC */
#define IFX_PMS_OTSC1_B0EC_LEN (4u)

/** \brief Mask for Ifx_PMS_OTSC1_Bits.B0EC */
#define IFX_PMS_OTSC1_B0EC_MSK (0xfu)

/** \brief Offset for Ifx_PMS_OTSC1_Bits.B0EC */
#define IFX_PMS_OTSC1_B0EC_OFF (0u)

/** \brief Length for Ifx_PMS_OTSC1_Bits.B1EC */
#define IFX_PMS_OTSC1_B1EC_LEN (4u)

/** \brief Mask for Ifx_PMS_OTSC1_Bits.B1EC */
#define IFX_PMS_OTSC1_B1EC_MSK (0xfu)

/** \brief Offset for Ifx_PMS_OTSC1_Bits.B1EC */
#define IFX_PMS_OTSC1_B1EC_OFF (8u)

/** \brief Length for Ifx_PMS_OTSC1_Bits.DMONAD */
#define IFX_PMS_OTSC1_DMONAD_LEN (8u)

/** \brief Mask for Ifx_PMS_OTSC1_Bits.DMONAD */
#define IFX_PMS_OTSC1_DMONAD_MSK (0xffu)

/** \brief Offset for Ifx_PMS_OTSC1_Bits.DMONAD */
#define IFX_PMS_OTSC1_DMONAD_OFF (16u)

/** \brief Length for Ifx_PMS_OTSC1_Bits.SMCDBG */
#define IFX_PMS_OTSC1_SMCDBG_LEN (8u)

/** \brief Mask for Ifx_PMS_OTSC1_Bits.SMCDBG */
#define IFX_PMS_OTSC1_SMCDBG_MSK (0xffu)

/** \brief Offset for Ifx_PMS_OTSC1_Bits.SMCDBG */
#define IFX_PMS_OTSC1_SMCDBG_OFF (24u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN0 */
#define IFX_PMS_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN0 */
#define IFX_PMS_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN0 */
#define IFX_PMS_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN1 */
#define IFX_PMS_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN1 */
#define IFX_PMS_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN1 */
#define IFX_PMS_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN2 */
#define IFX_PMS_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN2 */
#define IFX_PMS_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN2 */
#define IFX_PMS_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN3 */
#define IFX_PMS_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN3 */
#define IFX_PMS_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN3 */
#define IFX_PMS_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN4 */
#define IFX_PMS_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN4 */
#define IFX_PMS_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN4 */
#define IFX_PMS_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN5 */
#define IFX_PMS_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN5 */
#define IFX_PMS_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN5 */
#define IFX_PMS_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN6 */
#define IFX_PMS_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN6 */
#define IFX_PMS_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN6 */
#define IFX_PMS_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN7 */
#define IFX_PMS_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN7 */
#define IFX_PMS_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN7 */
#define IFX_PMS_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN8 */
#define IFX_PMS_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN8 */
#define IFX_PMS_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN8 */
#define IFX_PMS_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN9 */
#define IFX_PMS_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN9 */
#define IFX_PMS_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN9 */
#define IFX_PMS_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN10 */
#define IFX_PMS_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN10 */
#define IFX_PMS_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN10 */
#define IFX_PMS_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN11 */
#define IFX_PMS_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN11 */
#define IFX_PMS_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN11 */
#define IFX_PMS_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN12 */
#define IFX_PMS_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN12 */
#define IFX_PMS_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN12 */
#define IFX_PMS_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN13 */
#define IFX_PMS_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN13 */
#define IFX_PMS_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN13 */
#define IFX_PMS_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN14 */
#define IFX_PMS_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN14 */
#define IFX_PMS_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN14 */
#define IFX_PMS_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN15 */
#define IFX_PMS_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN15 */
#define IFX_PMS_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN15 */
#define IFX_PMS_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN16 */
#define IFX_PMS_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN16 */
#define IFX_PMS_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN16 */
#define IFX_PMS_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN17 */
#define IFX_PMS_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN17 */
#define IFX_PMS_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN17 */
#define IFX_PMS_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN18 */
#define IFX_PMS_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN18 */
#define IFX_PMS_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN18 */
#define IFX_PMS_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN19 */
#define IFX_PMS_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN19 */
#define IFX_PMS_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN19 */
#define IFX_PMS_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN20 */
#define IFX_PMS_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN20 */
#define IFX_PMS_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN20 */
#define IFX_PMS_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN21 */
#define IFX_PMS_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN21 */
#define IFX_PMS_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN21 */
#define IFX_PMS_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN22 */
#define IFX_PMS_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN22 */
#define IFX_PMS_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN22 */
#define IFX_PMS_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN23 */
#define IFX_PMS_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN23 */
#define IFX_PMS_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN23 */
#define IFX_PMS_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN24 */
#define IFX_PMS_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN24 */
#define IFX_PMS_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN24 */
#define IFX_PMS_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN25 */
#define IFX_PMS_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN25 */
#define IFX_PMS_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN25 */
#define IFX_PMS_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN26 */
#define IFX_PMS_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN26 */
#define IFX_PMS_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN26 */
#define IFX_PMS_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN27 */
#define IFX_PMS_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN27 */
#define IFX_PMS_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN27 */
#define IFX_PMS_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN28 */
#define IFX_PMS_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN28 */
#define IFX_PMS_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN28 */
#define IFX_PMS_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN29 */
#define IFX_PMS_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN29 */
#define IFX_PMS_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN29 */
#define IFX_PMS_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN30 */
#define IFX_PMS_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN30 */
#define IFX_PMS_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN30 */
#define IFX_PMS_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_PMS_ACCEN0_Bits.EN31 */
#define IFX_PMS_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_PMS_ACCEN0_Bits.EN31 */
#define IFX_PMS_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_PMS_ACCEN0_Bits.EN31 */
#define IFX_PMS_ACCEN0_EN31_OFF (31u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXPMS_BF_H */
