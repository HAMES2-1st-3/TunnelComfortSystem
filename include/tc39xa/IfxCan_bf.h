/**
 * \file IfxCan_bf.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:11 GMT
 * Version: TBD
 * Specification: TBD
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
 * \defgroup IfxLld_Can_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxLld_Can_Registers
 * 
 */
#ifndef IFXCAN_BF_H
#define IFXCAN_BF_H 1
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Can_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_CAN_CLC_Bits.DISR */
#define IFX_CAN_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_CAN_CLC_Bits.DISR */
#define IFX_CAN_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_CAN_CLC_Bits.DISR */
#define IFX_CAN_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_CAN_CLC_Bits.DISS */
#define IFX_CAN_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_CAN_CLC_Bits.DISS */
#define IFX_CAN_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_CLC_Bits.DISS */
#define IFX_CAN_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_CAN_CLC_Bits.EDIS */
#define IFX_CAN_CLC_EDIS_LEN (1u)

/** \brief Mask for Ifx_CAN_CLC_Bits.EDIS */
#define IFX_CAN_CLC_EDIS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_CLC_Bits.EDIS */
#define IFX_CAN_CLC_EDIS_OFF (3u)

/** \brief Length for Ifx_CAN_ID_Bits.MOD_REV */
#define IFX_CAN_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_CAN_ID_Bits.MOD_REV */
#define IFX_CAN_ID_MOD_REV_MSK (0x0u)

/** \brief Offset for Ifx_CAN_ID_Bits.MOD_REV */
#define IFX_CAN_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_CAN_ID_Bits.MOD_TYPE */
#define IFX_CAN_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_CAN_ID_Bits.MOD_TYPE */
#define IFX_CAN_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_CAN_ID_Bits.MOD_TYPE */
#define IFX_CAN_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_CAN_ID_Bits.MOD_NUMBER */
#define IFX_CAN_ID_MOD_NUMBER_LEN (16u)

/** \brief Mask for Ifx_CAN_ID_Bits.MOD_NUMBER */
#define IFX_CAN_ID_MOD_NUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_ID_Bits.MOD_NUMBER */
#define IFX_CAN_ID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_CAN_GRINT1_Bits.TEFIFO */
#define IFX_CAN_GRINT1_TEFIFO_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT1_Bits.TEFIFO */
#define IFX_CAN_GRINT1_TEFIFO_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT1_Bits.TEFIFO */
#define IFX_CAN_GRINT1_TEFIFO_OFF (0u)

/** \brief Length for Ifx_CAN_GRINT1_Bits.HPE */
#define IFX_CAN_GRINT1_HPE_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT1_Bits.HPE */
#define IFX_CAN_GRINT1_HPE_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT1_Bits.HPE */
#define IFX_CAN_GRINT1_HPE_OFF (4u)

/** \brief Length for Ifx_CAN_GRINT1_Bits.WATI */
#define IFX_CAN_GRINT1_WATI_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT1_Bits.WATI */
#define IFX_CAN_GRINT1_WATI_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT1_Bits.WATI */
#define IFX_CAN_GRINT1_WATI_OFF (8u)

/** \brief Length for Ifx_CAN_GRINT1_Bits.ALRT */
#define IFX_CAN_GRINT1_ALRT_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT1_Bits.ALRT */
#define IFX_CAN_GRINT1_ALRT_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT1_Bits.ALRT */
#define IFX_CAN_GRINT1_ALRT_OFF (12u)

/** \brief Length for Ifx_CAN_GRINT1_Bits.MOER */
#define IFX_CAN_GRINT1_MOER_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT1_Bits.MOER */
#define IFX_CAN_GRINT1_MOER_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT1_Bits.MOER */
#define IFX_CAN_GRINT1_MOER_OFF (16u)

/** \brief Length for Ifx_CAN_GRINT1_Bits.SAFE */
#define IFX_CAN_GRINT1_SAFE_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT1_Bits.SAFE */
#define IFX_CAN_GRINT1_SAFE_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT1_Bits.SAFE */
#define IFX_CAN_GRINT1_SAFE_OFF (20u)

/** \brief Length for Ifx_CAN_GRINT1_Bits.BOFF */
#define IFX_CAN_GRINT1_BOFF_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT1_Bits.BOFF */
#define IFX_CAN_GRINT1_BOFF_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT1_Bits.BOFF */
#define IFX_CAN_GRINT1_BOFF_OFF (24u)

/** \brief Length for Ifx_CAN_GRINT1_Bits.LOI */
#define IFX_CAN_GRINT1_LOI_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT1_Bits.LOI */
#define IFX_CAN_GRINT1_LOI_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT1_Bits.LOI */
#define IFX_CAN_GRINT1_LOI_OFF (28u)

/** \brief Length for Ifx_CAN_GRINT2_Bits.REINT */
#define IFX_CAN_GRINT2_REINT_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT2_Bits.REINT */
#define IFX_CAN_GRINT2_REINT_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT2_Bits.REINT */
#define IFX_CAN_GRINT2_REINT_OFF (0u)

/** \brief Length for Ifx_CAN_GRINT2_Bits.RxF1F */
#define IFX_CAN_GRINT2_RXF1F_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT2_Bits.RxF1F */
#define IFX_CAN_GRINT2_RXF1F_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT2_Bits.RxF1F */
#define IFX_CAN_GRINT2_RXF1F_OFF (4u)

/** \brief Length for Ifx_CAN_GRINT2_Bits.RxF0F */
#define IFX_CAN_GRINT2_RXF0F_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT2_Bits.RxF0F */
#define IFX_CAN_GRINT2_RXF0F_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT2_Bits.RxF0F */
#define IFX_CAN_GRINT2_RXF0F_OFF (8u)

/** \brief Length for Ifx_CAN_GRINT2_Bits.RxF1N */
#define IFX_CAN_GRINT2_RXF1N_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT2_Bits.RxF1N */
#define IFX_CAN_GRINT2_RXF1N_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT2_Bits.RxF1N */
#define IFX_CAN_GRINT2_RXF1N_OFF (12u)

/** \brief Length for Ifx_CAN_GRINT2_Bits.RxF0N */
#define IFX_CAN_GRINT2_RXF0N_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT2_Bits.RxF0N */
#define IFX_CAN_GRINT2_RXF0N_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT2_Bits.RxF0N */
#define IFX_CAN_GRINT2_RXF0N_OFF (16u)

/** \brief Length for Ifx_CAN_GRINT2_Bits.RETI */
#define IFX_CAN_GRINT2_RETI_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT2_Bits.RETI */
#define IFX_CAN_GRINT2_RETI_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT2_Bits.RETI */
#define IFX_CAN_GRINT2_RETI_OFF (20u)

/** \brief Length for Ifx_CAN_GRINT2_Bits.TRAQ */
#define IFX_CAN_GRINT2_TRAQ_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT2_Bits.TRAQ */
#define IFX_CAN_GRINT2_TRAQ_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT2_Bits.TRAQ */
#define IFX_CAN_GRINT2_TRAQ_OFF (24u)

/** \brief Length for Ifx_CAN_GRINT2_Bits.TRACO */
#define IFX_CAN_GRINT2_TRACO_LEN (4u)

/** \brief Mask for Ifx_CAN_GRINT2_Bits.TRACO */
#define IFX_CAN_GRINT2_TRACO_MSK (0xfu)

/** \brief Offset for Ifx_CAN_GRINT2_Bits.TRACO */
#define IFX_CAN_GRINT2_TRACO_OFF (28u)

/** \brief Length for Ifx_CAN_MCR_Bits.CLKSEL0 */
#define IFX_CAN_MCR_CLKSEL0_LEN (2u)

/** \brief Mask for Ifx_CAN_MCR_Bits.CLKSEL0 */
#define IFX_CAN_MCR_CLKSEL0_MSK (0x3u)

/** \brief Offset for Ifx_CAN_MCR_Bits.CLKSEL0 */
#define IFX_CAN_MCR_CLKSEL0_OFF (0u)

/** \brief Length for Ifx_CAN_MCR_Bits.CLKSEL1 */
#define IFX_CAN_MCR_CLKSEL1_LEN (2u)

/** \brief Mask for Ifx_CAN_MCR_Bits.CLKSEL1 */
#define IFX_CAN_MCR_CLKSEL1_MSK (0x3u)

/** \brief Offset for Ifx_CAN_MCR_Bits.CLKSEL1 */
#define IFX_CAN_MCR_CLKSEL1_OFF (2u)

/** \brief Length for Ifx_CAN_MCR_Bits.CLKSEL2 */
#define IFX_CAN_MCR_CLKSEL2_LEN (2u)

/** \brief Mask for Ifx_CAN_MCR_Bits.CLKSEL2 */
#define IFX_CAN_MCR_CLKSEL2_MSK (0x3u)

/** \brief Offset for Ifx_CAN_MCR_Bits.CLKSEL2 */
#define IFX_CAN_MCR_CLKSEL2_OFF (4u)

/** \brief Length for Ifx_CAN_MCR_Bits.CLKSEL3 */
#define IFX_CAN_MCR_CLKSEL3_LEN (2u)

/** \brief Mask for Ifx_CAN_MCR_Bits.CLKSEL3 */
#define IFX_CAN_MCR_CLKSEL3_MSK (0x3u)

/** \brief Offset for Ifx_CAN_MCR_Bits.CLKSEL3 */
#define IFX_CAN_MCR_CLKSEL3_OFF (6u)

/** \brief Length for Ifx_CAN_MCR_Bits.NODE */
#define IFX_CAN_MCR_NODE_LEN (3u)

/** \brief Mask for Ifx_CAN_MCR_Bits.NODE */
#define IFX_CAN_MCR_NODE_MSK (0x7u)

/** \brief Offset for Ifx_CAN_MCR_Bits.NODE */
#define IFX_CAN_MCR_NODE_OFF (24u)

/** \brief Length for Ifx_CAN_MCR_Bits.DXCM */
#define IFX_CAN_MCR_DXCM_LEN (1u)

/** \brief Mask for Ifx_CAN_MCR_Bits.DXCM */
#define IFX_CAN_MCR_DXCM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MCR_Bits.DXCM */
#define IFX_CAN_MCR_DXCM_OFF (27u)

/** \brief Length for Ifx_CAN_MCR_Bits.RBUSY */
#define IFX_CAN_MCR_RBUSY_LEN (1u)

/** \brief Mask for Ifx_CAN_MCR_Bits.RBUSY */
#define IFX_CAN_MCR_RBUSY_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MCR_Bits.RBUSY */
#define IFX_CAN_MCR_RBUSY_OFF (28u)

/** \brief Length for Ifx_CAN_MCR_Bits.RINIT */
#define IFX_CAN_MCR_RINIT_LEN (1u)

/** \brief Mask for Ifx_CAN_MCR_Bits.RINIT */
#define IFX_CAN_MCR_RINIT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MCR_Bits.RINIT */
#define IFX_CAN_MCR_RINIT_OFF (29u)

/** \brief Length for Ifx_CAN_MCR_Bits.CI */
#define IFX_CAN_MCR_CI_LEN (1u)

/** \brief Mask for Ifx_CAN_MCR_Bits.CI */
#define IFX_CAN_MCR_CI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MCR_Bits.CI */
#define IFX_CAN_MCR_CI_OFF (30u)

/** \brief Length for Ifx_CAN_MCR_Bits.CCCE */
#define IFX_CAN_MCR_CCCE_LEN (1u)

/** \brief Mask for Ifx_CAN_MCR_Bits.CCCE */
#define IFX_CAN_MCR_CCCE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MCR_Bits.CCCE */
#define IFX_CAN_MCR_CCCE_OFF (31u)

/** \brief Length for Ifx_CAN_BUFADR_Bits.TXBUF */
#define IFX_CAN_BUFADR_TXBUF_LEN (14u)

/** \brief Mask for Ifx_CAN_BUFADR_Bits.TXBUF */
#define IFX_CAN_BUFADR_TXBUF_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_BUFADR_Bits.TXBUF */
#define IFX_CAN_BUFADR_TXBUF_OFF (0u)

/** \brief Length for Ifx_CAN_BUFADR_Bits.RXBUF */
#define IFX_CAN_BUFADR_RXBUF_LEN (14u)

/** \brief Mask for Ifx_CAN_BUFADR_Bits.RXBUF */
#define IFX_CAN_BUFADR_RXBUF_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_BUFADR_Bits.RXBUF */
#define IFX_CAN_BUFADR_RXBUF_OFF (16u)

/** \brief Length for Ifx_CAN_MECR_Bits.TH */
#define IFX_CAN_MECR_TH_LEN (16u)

/** \brief Mask for Ifx_CAN_MECR_Bits.TH */
#define IFX_CAN_MECR_TH_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_MECR_Bits.TH */
#define IFX_CAN_MECR_TH_OFF (0u)

/** \brief Length for Ifx_CAN_MECR_Bits.INP */
#define IFX_CAN_MECR_INP_LEN (4u)

/** \brief Mask for Ifx_CAN_MECR_Bits.INP */
#define IFX_CAN_MECR_INP_MSK (0xfu)

/** \brief Offset for Ifx_CAN_MECR_Bits.INP */
#define IFX_CAN_MECR_INP_OFF (16u)

/** \brief Length for Ifx_CAN_MECR_Bits.NODE */
#define IFX_CAN_MECR_NODE_LEN (3u)

/** \brief Mask for Ifx_CAN_MECR_Bits.NODE */
#define IFX_CAN_MECR_NODE_MSK (0x7u)

/** \brief Offset for Ifx_CAN_MECR_Bits.NODE */
#define IFX_CAN_MECR_NODE_OFF (20u)

/** \brief Length for Ifx_CAN_MECR_Bits.ANYED */
#define IFX_CAN_MECR_ANYED_LEN (1u)

/** \brief Mask for Ifx_CAN_MECR_Bits.ANYED */
#define IFX_CAN_MECR_ANYED_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MECR_Bits.ANYED */
#define IFX_CAN_MECR_ANYED_OFF (24u)

/** \brief Length for Ifx_CAN_MECR_Bits.CAPEIE */
#define IFX_CAN_MECR_CAPEIE_LEN (1u)

/** \brief Mask for Ifx_CAN_MECR_Bits.CAPEIE */
#define IFX_CAN_MECR_CAPEIE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MECR_Bits.CAPEIE */
#define IFX_CAN_MECR_CAPEIE_OFF (25u)

/** \brief Length for Ifx_CAN_MECR_Bits.DEPTH */
#define IFX_CAN_MECR_DEPTH_LEN (3u)

/** \brief Mask for Ifx_CAN_MECR_Bits.DEPTH */
#define IFX_CAN_MECR_DEPTH_MSK (0x7u)

/** \brief Offset for Ifx_CAN_MECR_Bits.DEPTH */
#define IFX_CAN_MECR_DEPTH_OFF (27u)

/** \brief Length for Ifx_CAN_MECR_Bits.SOF */
#define IFX_CAN_MECR_SOF_LEN (1u)

/** \brief Mask for Ifx_CAN_MECR_Bits.SOF */
#define IFX_CAN_MECR_SOF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MECR_Bits.SOF */
#define IFX_CAN_MECR_SOF_OFF (30u)

/** \brief Length for Ifx_CAN_MESTAT_Bits.CAPT */
#define IFX_CAN_MESTAT_CAPT_LEN (16u)

/** \brief Mask for Ifx_CAN_MESTAT_Bits.CAPT */
#define IFX_CAN_MESTAT_CAPT_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_MESTAT_Bits.CAPT */
#define IFX_CAN_MESTAT_CAPT_OFF (0u)

/** \brief Length for Ifx_CAN_MESTAT_Bits.CAPRED */
#define IFX_CAN_MESTAT_CAPRED_LEN (1u)

/** \brief Mask for Ifx_CAN_MESTAT_Bits.CAPRED */
#define IFX_CAN_MESTAT_CAPRED_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MESTAT_Bits.CAPRED */
#define IFX_CAN_MESTAT_CAPRED_OFF (16u)

/** \brief Length for Ifx_CAN_MESTAT_Bits.CAPE */
#define IFX_CAN_MESTAT_CAPE_LEN (1u)

/** \brief Mask for Ifx_CAN_MESTAT_Bits.CAPE */
#define IFX_CAN_MESTAT_CAPE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_MESTAT_Bits.CAPE */
#define IFX_CAN_MESTAT_CAPE_OFF (17u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN0 */
#define IFX_CAN_ACCENCTR0_EN0_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN0 */
#define IFX_CAN_ACCENCTR0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN0 */
#define IFX_CAN_ACCENCTR0_EN0_OFF (0u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN1 */
#define IFX_CAN_ACCENCTR0_EN1_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN1 */
#define IFX_CAN_ACCENCTR0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN1 */
#define IFX_CAN_ACCENCTR0_EN1_OFF (1u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN2 */
#define IFX_CAN_ACCENCTR0_EN2_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN2 */
#define IFX_CAN_ACCENCTR0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN2 */
#define IFX_CAN_ACCENCTR0_EN2_OFF (2u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN3 */
#define IFX_CAN_ACCENCTR0_EN3_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN3 */
#define IFX_CAN_ACCENCTR0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN3 */
#define IFX_CAN_ACCENCTR0_EN3_OFF (3u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN4 */
#define IFX_CAN_ACCENCTR0_EN4_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN4 */
#define IFX_CAN_ACCENCTR0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN4 */
#define IFX_CAN_ACCENCTR0_EN4_OFF (4u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN5 */
#define IFX_CAN_ACCENCTR0_EN5_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN5 */
#define IFX_CAN_ACCENCTR0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN5 */
#define IFX_CAN_ACCENCTR0_EN5_OFF (5u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN6 */
#define IFX_CAN_ACCENCTR0_EN6_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN6 */
#define IFX_CAN_ACCENCTR0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN6 */
#define IFX_CAN_ACCENCTR0_EN6_OFF (6u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN7 */
#define IFX_CAN_ACCENCTR0_EN7_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN7 */
#define IFX_CAN_ACCENCTR0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN7 */
#define IFX_CAN_ACCENCTR0_EN7_OFF (7u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN8 */
#define IFX_CAN_ACCENCTR0_EN8_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN8 */
#define IFX_CAN_ACCENCTR0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN8 */
#define IFX_CAN_ACCENCTR0_EN8_OFF (8u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN9 */
#define IFX_CAN_ACCENCTR0_EN9_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN9 */
#define IFX_CAN_ACCENCTR0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN9 */
#define IFX_CAN_ACCENCTR0_EN9_OFF (9u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN10 */
#define IFX_CAN_ACCENCTR0_EN10_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN10 */
#define IFX_CAN_ACCENCTR0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN10 */
#define IFX_CAN_ACCENCTR0_EN10_OFF (10u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN11 */
#define IFX_CAN_ACCENCTR0_EN11_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN11 */
#define IFX_CAN_ACCENCTR0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN11 */
#define IFX_CAN_ACCENCTR0_EN11_OFF (11u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN12 */
#define IFX_CAN_ACCENCTR0_EN12_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN12 */
#define IFX_CAN_ACCENCTR0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN12 */
#define IFX_CAN_ACCENCTR0_EN12_OFF (12u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN13 */
#define IFX_CAN_ACCENCTR0_EN13_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN13 */
#define IFX_CAN_ACCENCTR0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN13 */
#define IFX_CAN_ACCENCTR0_EN13_OFF (13u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN14 */
#define IFX_CAN_ACCENCTR0_EN14_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN14 */
#define IFX_CAN_ACCENCTR0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN14 */
#define IFX_CAN_ACCENCTR0_EN14_OFF (14u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN15 */
#define IFX_CAN_ACCENCTR0_EN15_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN15 */
#define IFX_CAN_ACCENCTR0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN15 */
#define IFX_CAN_ACCENCTR0_EN15_OFF (15u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN16 */
#define IFX_CAN_ACCENCTR0_EN16_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN16 */
#define IFX_CAN_ACCENCTR0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN16 */
#define IFX_CAN_ACCENCTR0_EN16_OFF (16u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN17 */
#define IFX_CAN_ACCENCTR0_EN17_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN17 */
#define IFX_CAN_ACCENCTR0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN17 */
#define IFX_CAN_ACCENCTR0_EN17_OFF (17u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN18 */
#define IFX_CAN_ACCENCTR0_EN18_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN18 */
#define IFX_CAN_ACCENCTR0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN18 */
#define IFX_CAN_ACCENCTR0_EN18_OFF (18u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN19 */
#define IFX_CAN_ACCENCTR0_EN19_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN19 */
#define IFX_CAN_ACCENCTR0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN19 */
#define IFX_CAN_ACCENCTR0_EN19_OFF (19u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN20 */
#define IFX_CAN_ACCENCTR0_EN20_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN20 */
#define IFX_CAN_ACCENCTR0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN20 */
#define IFX_CAN_ACCENCTR0_EN20_OFF (20u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN21 */
#define IFX_CAN_ACCENCTR0_EN21_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN21 */
#define IFX_CAN_ACCENCTR0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN21 */
#define IFX_CAN_ACCENCTR0_EN21_OFF (21u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN22 */
#define IFX_CAN_ACCENCTR0_EN22_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN22 */
#define IFX_CAN_ACCENCTR0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN22 */
#define IFX_CAN_ACCENCTR0_EN22_OFF (22u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN23 */
#define IFX_CAN_ACCENCTR0_EN23_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN23 */
#define IFX_CAN_ACCENCTR0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN23 */
#define IFX_CAN_ACCENCTR0_EN23_OFF (23u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN24 */
#define IFX_CAN_ACCENCTR0_EN24_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN24 */
#define IFX_CAN_ACCENCTR0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN24 */
#define IFX_CAN_ACCENCTR0_EN24_OFF (24u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN25 */
#define IFX_CAN_ACCENCTR0_EN25_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN25 */
#define IFX_CAN_ACCENCTR0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN25 */
#define IFX_CAN_ACCENCTR0_EN25_OFF (25u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN26 */
#define IFX_CAN_ACCENCTR0_EN26_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN26 */
#define IFX_CAN_ACCENCTR0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN26 */
#define IFX_CAN_ACCENCTR0_EN26_OFF (26u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN27 */
#define IFX_CAN_ACCENCTR0_EN27_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN27 */
#define IFX_CAN_ACCENCTR0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN27 */
#define IFX_CAN_ACCENCTR0_EN27_OFF (27u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN28 */
#define IFX_CAN_ACCENCTR0_EN28_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN28 */
#define IFX_CAN_ACCENCTR0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN28 */
#define IFX_CAN_ACCENCTR0_EN28_OFF (28u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN29 */
#define IFX_CAN_ACCENCTR0_EN29_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN29 */
#define IFX_CAN_ACCENCTR0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN29 */
#define IFX_CAN_ACCENCTR0_EN29_OFF (29u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN30 */
#define IFX_CAN_ACCENCTR0_EN30_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN30 */
#define IFX_CAN_ACCENCTR0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN30 */
#define IFX_CAN_ACCENCTR0_EN30_OFF (30u)

/** \brief Length for Ifx_CAN_ACCENCTR0_Bits.EN31 */
#define IFX_CAN_ACCENCTR0_EN31_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCENCTR0_Bits.EN31 */
#define IFX_CAN_ACCENCTR0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCENCTR0_Bits.EN31 */
#define IFX_CAN_ACCENCTR0_EN31_OFF (31u)

/** \brief Length for Ifx_CAN_OCS_Bits.TGS */
#define IFX_CAN_OCS_TGS_LEN (2u)

/** \brief Mask for Ifx_CAN_OCS_Bits.TGS */
#define IFX_CAN_OCS_TGS_MSK (0x3u)

/** \brief Offset for Ifx_CAN_OCS_Bits.TGS */
#define IFX_CAN_OCS_TGS_OFF (0u)

/** \brief Length for Ifx_CAN_OCS_Bits.TGB */
#define IFX_CAN_OCS_TGB_LEN (1u)

/** \brief Mask for Ifx_CAN_OCS_Bits.TGB */
#define IFX_CAN_OCS_TGB_MSK (0x1u)

/** \brief Offset for Ifx_CAN_OCS_Bits.TGB */
#define IFX_CAN_OCS_TGB_OFF (2u)

/** \brief Length for Ifx_CAN_OCS_Bits.TG_P */
#define IFX_CAN_OCS_TG_P_LEN (1u)

/** \brief Mask for Ifx_CAN_OCS_Bits.TG_P */
#define IFX_CAN_OCS_TG_P_MSK (0x1u)

/** \brief Offset for Ifx_CAN_OCS_Bits.TG_P */
#define IFX_CAN_OCS_TG_P_OFF (3u)

/** \brief Length for Ifx_CAN_OCS_Bits.SUS */
#define IFX_CAN_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_CAN_OCS_Bits.SUS */
#define IFX_CAN_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_CAN_OCS_Bits.SUS */
#define IFX_CAN_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_CAN_OCS_Bits.SUS_P */
#define IFX_CAN_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_CAN_OCS_Bits.SUS_P */
#define IFX_CAN_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_CAN_OCS_Bits.SUS_P */
#define IFX_CAN_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_CAN_OCS_Bits.SUSSTA */
#define IFX_CAN_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_CAN_OCS_Bits.SUSSTA */
#define IFX_CAN_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_CAN_OCS_Bits.SUSSTA */
#define IFX_CAN_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_CAN_KRSTCLR_Bits.CLR */
#define IFX_CAN_KRSTCLR_CLR_LEN (1u)

/** \brief Mask for Ifx_CAN_KRSTCLR_Bits.CLR */
#define IFX_CAN_KRSTCLR_CLR_MSK (0x1u)

/** \brief Offset for Ifx_CAN_KRSTCLR_Bits.CLR */
#define IFX_CAN_KRSTCLR_CLR_OFF (0u)

/** \brief Length for Ifx_CAN_KRST1_Bits.RST */
#define IFX_CAN_KRST1_RST_LEN (1u)

/** \brief Mask for Ifx_CAN_KRST1_Bits.RST */
#define IFX_CAN_KRST1_RST_MSK (0x1u)

/** \brief Offset for Ifx_CAN_KRST1_Bits.RST */
#define IFX_CAN_KRST1_RST_OFF (0u)

/** \brief Length for Ifx_CAN_KRST0_Bits.RST */
#define IFX_CAN_KRST0_RST_LEN (1u)

/** \brief Mask for Ifx_CAN_KRST0_Bits.RST */
#define IFX_CAN_KRST0_RST_MSK (0x1u)

/** \brief Offset for Ifx_CAN_KRST0_Bits.RST */
#define IFX_CAN_KRST0_RST_OFF (0u)

/** \brief Length for Ifx_CAN_KRST0_Bits.RSTSTAT */
#define IFX_CAN_KRST0_RSTSTAT_LEN (1u)

/** \brief Mask for Ifx_CAN_KRST0_Bits.RSTSTAT */
#define IFX_CAN_KRST0_RSTSTAT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_KRST0_Bits.RSTSTAT */
#define IFX_CAN_KRST0_RSTSTAT_OFF (1u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN0 */
#define IFX_CAN_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN0 */
#define IFX_CAN_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN0 */
#define IFX_CAN_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN1 */
#define IFX_CAN_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN1 */
#define IFX_CAN_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN1 */
#define IFX_CAN_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN2 */
#define IFX_CAN_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN2 */
#define IFX_CAN_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN2 */
#define IFX_CAN_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN3 */
#define IFX_CAN_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN3 */
#define IFX_CAN_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN3 */
#define IFX_CAN_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN4 */
#define IFX_CAN_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN4 */
#define IFX_CAN_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN4 */
#define IFX_CAN_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN5 */
#define IFX_CAN_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN5 */
#define IFX_CAN_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN5 */
#define IFX_CAN_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN6 */
#define IFX_CAN_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN6 */
#define IFX_CAN_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN6 */
#define IFX_CAN_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN7 */
#define IFX_CAN_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN7 */
#define IFX_CAN_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN7 */
#define IFX_CAN_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN8 */
#define IFX_CAN_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN8 */
#define IFX_CAN_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN8 */
#define IFX_CAN_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN9 */
#define IFX_CAN_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN9 */
#define IFX_CAN_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN9 */
#define IFX_CAN_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN10 */
#define IFX_CAN_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN10 */
#define IFX_CAN_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN10 */
#define IFX_CAN_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN11 */
#define IFX_CAN_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN11 */
#define IFX_CAN_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN11 */
#define IFX_CAN_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN12 */
#define IFX_CAN_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN12 */
#define IFX_CAN_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN12 */
#define IFX_CAN_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN13 */
#define IFX_CAN_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN13 */
#define IFX_CAN_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN13 */
#define IFX_CAN_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN14 */
#define IFX_CAN_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN14 */
#define IFX_CAN_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN14 */
#define IFX_CAN_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN15 */
#define IFX_CAN_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN15 */
#define IFX_CAN_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN15 */
#define IFX_CAN_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN16 */
#define IFX_CAN_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN16 */
#define IFX_CAN_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN16 */
#define IFX_CAN_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN17 */
#define IFX_CAN_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN17 */
#define IFX_CAN_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN17 */
#define IFX_CAN_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN18 */
#define IFX_CAN_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN18 */
#define IFX_CAN_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN18 */
#define IFX_CAN_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN19 */
#define IFX_CAN_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN19 */
#define IFX_CAN_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN19 */
#define IFX_CAN_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN20 */
#define IFX_CAN_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN20 */
#define IFX_CAN_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN20 */
#define IFX_CAN_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN21 */
#define IFX_CAN_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN21 */
#define IFX_CAN_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN21 */
#define IFX_CAN_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN22 */
#define IFX_CAN_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN22 */
#define IFX_CAN_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN22 */
#define IFX_CAN_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN23 */
#define IFX_CAN_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN23 */
#define IFX_CAN_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN23 */
#define IFX_CAN_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN24 */
#define IFX_CAN_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN24 */
#define IFX_CAN_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN24 */
#define IFX_CAN_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN25 */
#define IFX_CAN_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN25 */
#define IFX_CAN_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN25 */
#define IFX_CAN_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN26 */
#define IFX_CAN_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN26 */
#define IFX_CAN_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN26 */
#define IFX_CAN_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN27 */
#define IFX_CAN_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN27 */
#define IFX_CAN_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN27 */
#define IFX_CAN_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN28 */
#define IFX_CAN_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN28 */
#define IFX_CAN_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN28 */
#define IFX_CAN_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN29 */
#define IFX_CAN_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN29 */
#define IFX_CAN_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN29 */
#define IFX_CAN_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN30 */
#define IFX_CAN_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN30 */
#define IFX_CAN_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN30 */
#define IFX_CAN_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_CAN_ACCEN0_Bits.EN31 */
#define IFX_CAN_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_CAN_ACCEN0_Bits.EN31 */
#define IFX_CAN_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_ACCEN0_Bits.EN31 */
#define IFX_CAN_ACCEN0_EN31_OFF (31u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN0 */
#define IFX_CAN_N_ACCENNODE0__EN0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN0 */
#define IFX_CAN_N_ACCENNODE0__EN0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN0 */
#define IFX_CAN_N_ACCENNODE0__EN0_OFF (0u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN1 */
#define IFX_CAN_N_ACCENNODE0__EN1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN1 */
#define IFX_CAN_N_ACCENNODE0__EN1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN1 */
#define IFX_CAN_N_ACCENNODE0__EN1_OFF (1u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN2 */
#define IFX_CAN_N_ACCENNODE0__EN2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN2 */
#define IFX_CAN_N_ACCENNODE0__EN2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN2 */
#define IFX_CAN_N_ACCENNODE0__EN2_OFF (2u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN3 */
#define IFX_CAN_N_ACCENNODE0__EN3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN3 */
#define IFX_CAN_N_ACCENNODE0__EN3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN3 */
#define IFX_CAN_N_ACCENNODE0__EN3_OFF (3u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN4 */
#define IFX_CAN_N_ACCENNODE0__EN4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN4 */
#define IFX_CAN_N_ACCENNODE0__EN4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN4 */
#define IFX_CAN_N_ACCENNODE0__EN4_OFF (4u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN5 */
#define IFX_CAN_N_ACCENNODE0__EN5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN5 */
#define IFX_CAN_N_ACCENNODE0__EN5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN5 */
#define IFX_CAN_N_ACCENNODE0__EN5_OFF (5u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN6 */
#define IFX_CAN_N_ACCENNODE0__EN6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN6 */
#define IFX_CAN_N_ACCENNODE0__EN6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN6 */
#define IFX_CAN_N_ACCENNODE0__EN6_OFF (6u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN7 */
#define IFX_CAN_N_ACCENNODE0__EN7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN7 */
#define IFX_CAN_N_ACCENNODE0__EN7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN7 */
#define IFX_CAN_N_ACCENNODE0__EN7_OFF (7u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN8 */
#define IFX_CAN_N_ACCENNODE0__EN8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN8 */
#define IFX_CAN_N_ACCENNODE0__EN8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN8 */
#define IFX_CAN_N_ACCENNODE0__EN8_OFF (8u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN9 */
#define IFX_CAN_N_ACCENNODE0__EN9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN9 */
#define IFX_CAN_N_ACCENNODE0__EN9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN9 */
#define IFX_CAN_N_ACCENNODE0__EN9_OFF (9u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN10 */
#define IFX_CAN_N_ACCENNODE0__EN10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN10 */
#define IFX_CAN_N_ACCENNODE0__EN10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN10 */
#define IFX_CAN_N_ACCENNODE0__EN10_OFF (10u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN11 */
#define IFX_CAN_N_ACCENNODE0__EN11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN11 */
#define IFX_CAN_N_ACCENNODE0__EN11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN11 */
#define IFX_CAN_N_ACCENNODE0__EN11_OFF (11u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN12 */
#define IFX_CAN_N_ACCENNODE0__EN12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN12 */
#define IFX_CAN_N_ACCENNODE0__EN12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN12 */
#define IFX_CAN_N_ACCENNODE0__EN12_OFF (12u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN13 */
#define IFX_CAN_N_ACCENNODE0__EN13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN13 */
#define IFX_CAN_N_ACCENNODE0__EN13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN13 */
#define IFX_CAN_N_ACCENNODE0__EN13_OFF (13u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN14 */
#define IFX_CAN_N_ACCENNODE0__EN14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN14 */
#define IFX_CAN_N_ACCENNODE0__EN14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN14 */
#define IFX_CAN_N_ACCENNODE0__EN14_OFF (14u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN15 */
#define IFX_CAN_N_ACCENNODE0__EN15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN15 */
#define IFX_CAN_N_ACCENNODE0__EN15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN15 */
#define IFX_CAN_N_ACCENNODE0__EN15_OFF (15u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN16 */
#define IFX_CAN_N_ACCENNODE0__EN16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN16 */
#define IFX_CAN_N_ACCENNODE0__EN16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN16 */
#define IFX_CAN_N_ACCENNODE0__EN16_OFF (16u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN17 */
#define IFX_CAN_N_ACCENNODE0__EN17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN17 */
#define IFX_CAN_N_ACCENNODE0__EN17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN17 */
#define IFX_CAN_N_ACCENNODE0__EN17_OFF (17u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN18 */
#define IFX_CAN_N_ACCENNODE0__EN18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN18 */
#define IFX_CAN_N_ACCENNODE0__EN18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN18 */
#define IFX_CAN_N_ACCENNODE0__EN18_OFF (18u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN19 */
#define IFX_CAN_N_ACCENNODE0__EN19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN19 */
#define IFX_CAN_N_ACCENNODE0__EN19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN19 */
#define IFX_CAN_N_ACCENNODE0__EN19_OFF (19u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN20 */
#define IFX_CAN_N_ACCENNODE0__EN20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN20 */
#define IFX_CAN_N_ACCENNODE0__EN20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN20 */
#define IFX_CAN_N_ACCENNODE0__EN20_OFF (20u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN21 */
#define IFX_CAN_N_ACCENNODE0__EN21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN21 */
#define IFX_CAN_N_ACCENNODE0__EN21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN21 */
#define IFX_CAN_N_ACCENNODE0__EN21_OFF (21u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN22 */
#define IFX_CAN_N_ACCENNODE0__EN22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN22 */
#define IFX_CAN_N_ACCENNODE0__EN22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN22 */
#define IFX_CAN_N_ACCENNODE0__EN22_OFF (22u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN23 */
#define IFX_CAN_N_ACCENNODE0__EN23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN23 */
#define IFX_CAN_N_ACCENNODE0__EN23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN23 */
#define IFX_CAN_N_ACCENNODE0__EN23_OFF (23u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN24 */
#define IFX_CAN_N_ACCENNODE0__EN24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN24 */
#define IFX_CAN_N_ACCENNODE0__EN24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN24 */
#define IFX_CAN_N_ACCENNODE0__EN24_OFF (24u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN25 */
#define IFX_CAN_N_ACCENNODE0__EN25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN25 */
#define IFX_CAN_N_ACCENNODE0__EN25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN25 */
#define IFX_CAN_N_ACCENNODE0__EN25_OFF (25u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN26 */
#define IFX_CAN_N_ACCENNODE0__EN26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN26 */
#define IFX_CAN_N_ACCENNODE0__EN26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN26 */
#define IFX_CAN_N_ACCENNODE0__EN26_OFF (26u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN27 */
#define IFX_CAN_N_ACCENNODE0__EN27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN27 */
#define IFX_CAN_N_ACCENNODE0__EN27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN27 */
#define IFX_CAN_N_ACCENNODE0__EN27_OFF (27u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN28 */
#define IFX_CAN_N_ACCENNODE0__EN28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN28 */
#define IFX_CAN_N_ACCENNODE0__EN28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN28 */
#define IFX_CAN_N_ACCENNODE0__EN28_OFF (28u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN29 */
#define IFX_CAN_N_ACCENNODE0__EN29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN29 */
#define IFX_CAN_N_ACCENNODE0__EN29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN29 */
#define IFX_CAN_N_ACCENNODE0__EN29_OFF (29u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN30 */
#define IFX_CAN_N_ACCENNODE0__EN30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN30 */
#define IFX_CAN_N_ACCENNODE0__EN30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN30 */
#define IFX_CAN_N_ACCENNODE0__EN30_OFF (30u)

/** \brief Length for Ifx_CAN_N_ACCENNODE0__Bits.EN31 */
#define IFX_CAN_N_ACCENNODE0__EN31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ACCENNODE0__Bits.EN31 */
#define IFX_CAN_N_ACCENNODE0__EN31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ACCENNODE0__Bits.EN31 */
#define IFX_CAN_N_ACCENNODE0__EN31_OFF (31u)

/** \brief Length for Ifx_CAN_N_STARTADR_Bits.START */
#define IFX_CAN_N_STARTADR_START_LEN (14u)

/** \brief Mask for Ifx_CAN_N_STARTADR_Bits.START */
#define IFX_CAN_N_STARTADR_START_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_STARTADR_Bits.START */
#define IFX_CAN_N_STARTADR_START_OFF (2u)

/** \brief Length for Ifx_CAN_N_ENDADR_Bits.END */
#define IFX_CAN_N_ENDADR_END_LEN (14u)

/** \brief Mask for Ifx_CAN_N_ENDADR_Bits.END */
#define IFX_CAN_N_ENDADR_END_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_ENDADR_Bits.END */
#define IFX_CAN_N_ENDADR_END_OFF (2u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.REINT */
#define IFX_CAN_N_ISREG_REINT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.REINT */
#define IFX_CAN_N_ISREG_REINT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.REINT */
#define IFX_CAN_N_ISREG_REINT_OFF (0u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.RxF1F */
#define IFX_CAN_N_ISREG_RXF1F_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.RxF1F */
#define IFX_CAN_N_ISREG_RXF1F_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.RxF1F */
#define IFX_CAN_N_ISREG_RXF1F_OFF (1u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.RxF0F */
#define IFX_CAN_N_ISREG_RXF0F_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.RxF0F */
#define IFX_CAN_N_ISREG_RXF0F_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.RxF0F */
#define IFX_CAN_N_ISREG_RXF0F_OFF (2u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.RxF1N */
#define IFX_CAN_N_ISREG_RXF1N_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.RxF1N */
#define IFX_CAN_N_ISREG_RXF1N_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.RxF1N */
#define IFX_CAN_N_ISREG_RXF1N_OFF (3u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.RxF0N */
#define IFX_CAN_N_ISREG_RXF0N_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.RxF0N */
#define IFX_CAN_N_ISREG_RXF0N_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.RxF0N */
#define IFX_CAN_N_ISREG_RXF0N_OFF (4u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.RETI */
#define IFX_CAN_N_ISREG_RETI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.RETI */
#define IFX_CAN_N_ISREG_RETI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.RETI */
#define IFX_CAN_N_ISREG_RETI_OFF (5u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.TRAQ */
#define IFX_CAN_N_ISREG_TRAQ_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.TRAQ */
#define IFX_CAN_N_ISREG_TRAQ_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.TRAQ */
#define IFX_CAN_N_ISREG_TRAQ_OFF (6u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.TRACO */
#define IFX_CAN_N_ISREG_TRACO_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.TRACO */
#define IFX_CAN_N_ISREG_TRACO_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.TRACO */
#define IFX_CAN_N_ISREG_TRACO_OFF (7u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.TEFIFO */
#define IFX_CAN_N_ISREG_TEFIFO_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.TEFIFO */
#define IFX_CAN_N_ISREG_TEFIFO_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.TEFIFO */
#define IFX_CAN_N_ISREG_TEFIFO_OFF (8u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.HPE */
#define IFX_CAN_N_ISREG_HPE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.HPE */
#define IFX_CAN_N_ISREG_HPE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.HPE */
#define IFX_CAN_N_ISREG_HPE_OFF (9u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.WATI */
#define IFX_CAN_N_ISREG_WATI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.WATI */
#define IFX_CAN_N_ISREG_WATI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.WATI */
#define IFX_CAN_N_ISREG_WATI_OFF (10u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.ALRT */
#define IFX_CAN_N_ISREG_ALRT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.ALRT */
#define IFX_CAN_N_ISREG_ALRT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.ALRT */
#define IFX_CAN_N_ISREG_ALRT_OFF (11u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.MOER */
#define IFX_CAN_N_ISREG_MOER_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.MOER */
#define IFX_CAN_N_ISREG_MOER_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.MOER */
#define IFX_CAN_N_ISREG_MOER_OFF (12u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.SAFE */
#define IFX_CAN_N_ISREG_SAFE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.SAFE */
#define IFX_CAN_N_ISREG_SAFE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.SAFE */
#define IFX_CAN_N_ISREG_SAFE_OFF (13u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.BOFF */
#define IFX_CAN_N_ISREG_BOFF_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.BOFF */
#define IFX_CAN_N_ISREG_BOFF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.BOFF */
#define IFX_CAN_N_ISREG_BOFF_OFF (14u)

/** \brief Length for Ifx_CAN_N_ISREG_Bits.LOI */
#define IFX_CAN_N_ISREG_LOI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ISREG_Bits.LOI */
#define IFX_CAN_N_ISREG_LOI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ISREG_Bits.LOI */
#define IFX_CAN_N_ISREG_LOI_OFF (15u)

/** \brief Length for Ifx_CAN_N_NT_CCR_Bits.TPSC */
#define IFX_CAN_N_NT_CCR_TPSC_LEN (4u)

/** \brief Mask for Ifx_CAN_N_NT_CCR_Bits.TPSC */
#define IFX_CAN_N_NT_CCR_TPSC_MSK (0xfu)

/** \brief Offset for Ifx_CAN_N_NT_CCR_Bits.TPSC */
#define IFX_CAN_N_NT_CCR_TPSC_OFF (8u)

/** \brief Length for Ifx_CAN_N_NT_CCR_Bits.STRESET */
#define IFX_CAN_N_NT_CCR_STRESET_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NT_CCR_Bits.STRESET */
#define IFX_CAN_N_NT_CCR_STRESET_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NT_CCR_Bits.STRESET */
#define IFX_CAN_N_NT_CCR_STRESET_OFF (14u)

/** \brief Length for Ifx_CAN_N_NT_CCR_Bits.STSTART */
#define IFX_CAN_N_NT_CCR_STSTART_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NT_CCR_Bits.STSTART */
#define IFX_CAN_N_NT_CCR_STSTART_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NT_CCR_Bits.STSTART */
#define IFX_CAN_N_NT_CCR_STSTART_OFF (15u)

/** \brief Length for Ifx_CAN_N_NT_CCR_Bits.TRIGSRC */
#define IFX_CAN_N_NT_CCR_TRIGSRC_LEN (3u)

/** \brief Mask for Ifx_CAN_N_NT_CCR_Bits.TRIGSRC */
#define IFX_CAN_N_NT_CCR_TRIGSRC_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_NT_CCR_Bits.TRIGSRC */
#define IFX_CAN_N_NT_CCR_TRIGSRC_OFF (18u)

/** \brief Length for Ifx_CAN_N_NT_ATTR_Bits.RELOAD */
#define IFX_CAN_N_NT_ATTR_RELOAD_LEN (16u)

/** \brief Mask for Ifx_CAN_N_NT_ATTR_Bits.RELOAD */
#define IFX_CAN_N_NT_ATTR_RELOAD_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_NT_ATTR_Bits.RELOAD */
#define IFX_CAN_N_NT_ATTR_RELOAD_OFF (0u)

/** \brief Length for Ifx_CAN_N_NT_ATTR_Bits.TXMO */
#define IFX_CAN_N_NT_ATTR_TXMO_LEN (8u)

/** \brief Mask for Ifx_CAN_N_NT_ATTR_Bits.TXMO */
#define IFX_CAN_N_NT_ATTR_TXMO_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_NT_ATTR_Bits.TXMO */
#define IFX_CAN_N_NT_ATTR_TXMO_OFF (16u)

/** \brief Length for Ifx_CAN_N_NT_ATTR_Bits.STRT */
#define IFX_CAN_N_NT_ATTR_STRT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NT_ATTR_Bits.STRT */
#define IFX_CAN_N_NT_ATTR_STRT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NT_ATTR_Bits.STRT */
#define IFX_CAN_N_NT_ATTR_STRT_OFF (24u)

/** \brief Length for Ifx_CAN_N_NT_BTTR_Bits.RELOAD */
#define IFX_CAN_N_NT_BTTR_RELOAD_LEN (16u)

/** \brief Mask for Ifx_CAN_N_NT_BTTR_Bits.RELOAD */
#define IFX_CAN_N_NT_BTTR_RELOAD_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_NT_BTTR_Bits.RELOAD */
#define IFX_CAN_N_NT_BTTR_RELOAD_OFF (0u)

/** \brief Length for Ifx_CAN_N_NT_BTTR_Bits.TXMO */
#define IFX_CAN_N_NT_BTTR_TXMO_LEN (8u)

/** \brief Mask for Ifx_CAN_N_NT_BTTR_Bits.TXMO */
#define IFX_CAN_N_NT_BTTR_TXMO_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_NT_BTTR_Bits.TXMO */
#define IFX_CAN_N_NT_BTTR_TXMO_OFF (16u)

/** \brief Length for Ifx_CAN_N_NT_BTTR_Bits.STRT */
#define IFX_CAN_N_NT_BTTR_STRT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NT_BTTR_Bits.STRT */
#define IFX_CAN_N_NT_BTTR_STRT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NT_BTTR_Bits.STRT */
#define IFX_CAN_N_NT_BTTR_STRT_OFF (24u)

/** \brief Length for Ifx_CAN_N_NT_CTTR_Bits.RELOAD */
#define IFX_CAN_N_NT_CTTR_RELOAD_LEN (16u)

/** \brief Mask for Ifx_CAN_N_NT_CTTR_Bits.RELOAD */
#define IFX_CAN_N_NT_CTTR_RELOAD_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_NT_CTTR_Bits.RELOAD */
#define IFX_CAN_N_NT_CTTR_RELOAD_OFF (0u)

/** \brief Length for Ifx_CAN_N_NT_CTTR_Bits.TXMO */
#define IFX_CAN_N_NT_CTTR_TXMO_LEN (8u)

/** \brief Mask for Ifx_CAN_N_NT_CTTR_Bits.TXMO */
#define IFX_CAN_N_NT_CTTR_TXMO_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_NT_CTTR_Bits.TXMO */
#define IFX_CAN_N_NT_CTTR_TXMO_OFF (16u)

/** \brief Length for Ifx_CAN_N_NT_CTTR_Bits.STRT */
#define IFX_CAN_N_NT_CTTR_STRT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NT_CTTR_Bits.STRT */
#define IFX_CAN_N_NT_CTTR_STRT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NT_CTTR_Bits.STRT */
#define IFX_CAN_N_NT_CTTR_STRT_OFF (24u)

/** \brief Length for Ifx_CAN_N_NT_RTR_Bits.RELOAD */
#define IFX_CAN_N_NT_RTR_RELOAD_LEN (16u)

/** \brief Mask for Ifx_CAN_N_NT_RTR_Bits.RELOAD */
#define IFX_CAN_N_NT_RTR_RELOAD_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_NT_RTR_Bits.RELOAD */
#define IFX_CAN_N_NT_RTR_RELOAD_OFF (0u)

/** \brief Length for Ifx_CAN_N_NT_RTR_Bits.TEIE */
#define IFX_CAN_N_NT_RTR_TEIE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NT_RTR_Bits.TEIE */
#define IFX_CAN_N_NT_RTR_TEIE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NT_RTR_Bits.TEIE */
#define IFX_CAN_N_NT_RTR_TEIE_OFF (22u)

/** \brief Length for Ifx_CAN_N_NT_RTR_Bits.TE */
#define IFX_CAN_N_NT_RTR_TE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NT_RTR_Bits.TE */
#define IFX_CAN_N_NT_RTR_TE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NT_RTR_Bits.TE */
#define IFX_CAN_N_NT_RTR_TE_OFF (23u)

/** \brief Length for Ifx_CAN_N_NPCR_Bits.RXSEL */
#define IFX_CAN_N_NPCR_RXSEL_LEN (3u)

/** \brief Mask for Ifx_CAN_N_NPCR_Bits.RXSEL */
#define IFX_CAN_N_NPCR_RXSEL_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_NPCR_Bits.RXSEL */
#define IFX_CAN_N_NPCR_RXSEL_OFF (0u)

/** \brief Length for Ifx_CAN_N_NPCR_Bits.LBM */
#define IFX_CAN_N_NPCR_LBM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NPCR_Bits.LBM */
#define IFX_CAN_N_NPCR_LBM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NPCR_Bits.LBM */
#define IFX_CAN_N_NPCR_LBM_OFF (8u)

/** \brief Length for Ifx_CAN_N_NPCR_Bits.LOUT */
#define IFX_CAN_N_NPCR_LOUT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NPCR_Bits.LOUT */
#define IFX_CAN_N_NPCR_LOUT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NPCR_Bits.LOUT */
#define IFX_CAN_N_NPCR_LOUT_OFF (9u)

/** \brief Length for Ifx_CAN_N_NPCR_Bits.DELE */
#define IFX_CAN_N_NPCR_DELE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NPCR_Bits.DELE */
#define IFX_CAN_N_NPCR_DELE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NPCR_Bits.DELE */
#define IFX_CAN_N_NPCR_DELE_OFF (10u)

/** \brief Length for Ifx_CAN_N_TTCR_Bits.ETESEL */
#define IFX_CAN_N_TTCR_ETESEL_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TTCR_Bits.ETESEL */
#define IFX_CAN_N_TTCR_ETESEL_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TTCR_Bits.ETESEL */
#define IFX_CAN_N_TTCR_ETESEL_OFF (2u)

/** \brief Length for Ifx_CAN_N_TTCR_Bits.ETSSEL */
#define IFX_CAN_N_TTCR_ETSSEL_LEN (3u)

/** \brief Mask for Ifx_CAN_N_TTCR_Bits.ETSSEL */
#define IFX_CAN_N_TTCR_ETSSEL_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_TTCR_Bits.ETSSEL */
#define IFX_CAN_N_TTCR_ETSSEL_OFF (4u)

/** \brief Length for Ifx_CAN_N_TTCR_Bits.TTCTSS */
#define IFX_CAN_N_TTCR_TTCTSS_LEN (3u)

/** \brief Mask for Ifx_CAN_N_TTCR_Bits.TTCTSS */
#define IFX_CAN_N_TTCR_TTCTSS_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_TTCR_Bits.TTCTSS */
#define IFX_CAN_N_TTCR_TTCTSS_OFF (9u)

/** \brief Length for Ifx_CAN_N_CREL_Bits.SUBSTEP */
#define IFX_CAN_N_CREL_SUBSTEP_LEN (4u)

/** \brief Mask for Ifx_CAN_N_CREL_Bits.SUBSTEP */
#define IFX_CAN_N_CREL_SUBSTEP_MSK (0x0u)

/** \brief Offset for Ifx_CAN_N_CREL_Bits.SUBSTEP */
#define IFX_CAN_N_CREL_SUBSTEP_OFF (20u)

/** \brief Length for Ifx_CAN_N_CREL_Bits.STEP */
#define IFX_CAN_N_CREL_STEP_LEN (4u)

/** \brief Mask for Ifx_CAN_N_CREL_Bits.STEP */
#define IFX_CAN_N_CREL_STEP_MSK (0x0u)

/** \brief Offset for Ifx_CAN_N_CREL_Bits.STEP */
#define IFX_CAN_N_CREL_STEP_OFF (24u)

/** \brief Length for Ifx_CAN_N_CREL_Bits.REL */
#define IFX_CAN_N_CREL_REL_LEN (4u)

/** \brief Mask for Ifx_CAN_N_CREL_Bits.REL */
#define IFX_CAN_N_CREL_REL_MSK (0x0u)

/** \brief Offset for Ifx_CAN_N_CREL_Bits.REL */
#define IFX_CAN_N_CREL_REL_OFF (28u)

/** \brief Length for Ifx_CAN_N_ENDN_Bits.ETV */
#define IFX_CAN_N_ENDN_ETV_LEN (32u)

/** \brief Mask for Ifx_CAN_N_ENDN_Bits.ETV */
#define IFX_CAN_N_ENDN_ETV_MSK (0xffffffffu)

/** \brief Offset for Ifx_CAN_N_ENDN_Bits.ETV */
#define IFX_CAN_N_ENDN_ETV_OFF (0u)

/** \brief Length for Ifx_CAN_N_DBTP_Bits.DSJW */
#define IFX_CAN_N_DBTP_DSJW_LEN (4u)

/** \brief Mask for Ifx_CAN_N_DBTP_Bits.DSJW */
#define IFX_CAN_N_DBTP_DSJW_MSK (0xfu)

/** \brief Offset for Ifx_CAN_N_DBTP_Bits.DSJW */
#define IFX_CAN_N_DBTP_DSJW_OFF (0u)

/** \brief Length for Ifx_CAN_N_DBTP_Bits.DTSEG2 */
#define IFX_CAN_N_DBTP_DTSEG2_LEN (4u)

/** \brief Mask for Ifx_CAN_N_DBTP_Bits.DTSEG2 */
#define IFX_CAN_N_DBTP_DTSEG2_MSK (0xfu)

/** \brief Offset for Ifx_CAN_N_DBTP_Bits.DTSEG2 */
#define IFX_CAN_N_DBTP_DTSEG2_OFF (4u)

/** \brief Length for Ifx_CAN_N_DBTP_Bits.DTSEG1 */
#define IFX_CAN_N_DBTP_DTSEG1_LEN (5u)

/** \brief Mask for Ifx_CAN_N_DBTP_Bits.DTSEG1 */
#define IFX_CAN_N_DBTP_DTSEG1_MSK (0x1fu)

/** \brief Offset for Ifx_CAN_N_DBTP_Bits.DTSEG1 */
#define IFX_CAN_N_DBTP_DTSEG1_OFF (8u)

/** \brief Length for Ifx_CAN_N_DBTP_Bits.DBRP */
#define IFX_CAN_N_DBTP_DBRP_LEN (5u)

/** \brief Mask for Ifx_CAN_N_DBTP_Bits.DBRP */
#define IFX_CAN_N_DBTP_DBRP_MSK (0x1fu)

/** \brief Offset for Ifx_CAN_N_DBTP_Bits.DBRP */
#define IFX_CAN_N_DBTP_DBRP_OFF (16u)

/** \brief Length for Ifx_CAN_N_DBTP_Bits.TDC */
#define IFX_CAN_N_DBTP_TDC_LEN (1u)

/** \brief Mask for Ifx_CAN_N_DBTP_Bits.TDC */
#define IFX_CAN_N_DBTP_TDC_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_DBTP_Bits.TDC */
#define IFX_CAN_N_DBTP_TDC_OFF (23u)

/** \brief Length for Ifx_CAN_N_TEST_Bits.LBCK */
#define IFX_CAN_N_TEST_LBCK_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TEST_Bits.LBCK */
#define IFX_CAN_N_TEST_LBCK_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TEST_Bits.LBCK */
#define IFX_CAN_N_TEST_LBCK_OFF (4u)

/** \brief Length for Ifx_CAN_N_TEST_Bits.TX */
#define IFX_CAN_N_TEST_TX_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TEST_Bits.TX */
#define IFX_CAN_N_TEST_TX_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TEST_Bits.TX */
#define IFX_CAN_N_TEST_TX_OFF (5u)

/** \brief Length for Ifx_CAN_N_TEST_Bits.RX */
#define IFX_CAN_N_TEST_RX_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TEST_Bits.RX */
#define IFX_CAN_N_TEST_RX_MSK (0x0u)

/** \brief Offset for Ifx_CAN_N_TEST_Bits.RX */
#define IFX_CAN_N_TEST_RX_OFF (7u)

/** \brief Length for Ifx_CAN_N_RWD_Bits.WDC */
#define IFX_CAN_N_RWD_WDC_LEN (8u)

/** \brief Mask for Ifx_CAN_N_RWD_Bits.WDC */
#define IFX_CAN_N_RWD_WDC_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_RWD_Bits.WDC */
#define IFX_CAN_N_RWD_WDC_OFF (0u)

/** \brief Length for Ifx_CAN_N_RWD_Bits.WDV */
#define IFX_CAN_N_RWD_WDV_LEN (8u)

/** \brief Mask for Ifx_CAN_N_RWD_Bits.WDV */
#define IFX_CAN_N_RWD_WDV_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_RWD_Bits.WDV */
#define IFX_CAN_N_RWD_WDV_OFF (8u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.INIT */
#define IFX_CAN_N_CCCR_INIT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.INIT */
#define IFX_CAN_N_CCCR_INIT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.INIT */
#define IFX_CAN_N_CCCR_INIT_OFF (0u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.CCE */
#define IFX_CAN_N_CCCR_CCE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.CCE */
#define IFX_CAN_N_CCCR_CCE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.CCE */
#define IFX_CAN_N_CCCR_CCE_OFF (1u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.ASM */
#define IFX_CAN_N_CCCR_ASM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.ASM */
#define IFX_CAN_N_CCCR_ASM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.ASM */
#define IFX_CAN_N_CCCR_ASM_OFF (2u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.CSA */
#define IFX_CAN_N_CCCR_CSA_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.CSA */
#define IFX_CAN_N_CCCR_CSA_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.CSA */
#define IFX_CAN_N_CCCR_CSA_OFF (3u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.CSR */
#define IFX_CAN_N_CCCR_CSR_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.CSR */
#define IFX_CAN_N_CCCR_CSR_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.CSR */
#define IFX_CAN_N_CCCR_CSR_OFF (4u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.MON */
#define IFX_CAN_N_CCCR_MON_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.MON */
#define IFX_CAN_N_CCCR_MON_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.MON */
#define IFX_CAN_N_CCCR_MON_OFF (5u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.DAR */
#define IFX_CAN_N_CCCR_DAR_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.DAR */
#define IFX_CAN_N_CCCR_DAR_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.DAR */
#define IFX_CAN_N_CCCR_DAR_OFF (6u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.TEST */
#define IFX_CAN_N_CCCR_TEST_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.TEST */
#define IFX_CAN_N_CCCR_TEST_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.TEST */
#define IFX_CAN_N_CCCR_TEST_OFF (7u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.FDOE */
#define IFX_CAN_N_CCCR_FDOE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.FDOE */
#define IFX_CAN_N_CCCR_FDOE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.FDOE */
#define IFX_CAN_N_CCCR_FDOE_OFF (8u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.BRSE */
#define IFX_CAN_N_CCCR_BRSE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.BRSE */
#define IFX_CAN_N_CCCR_BRSE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.BRSE */
#define IFX_CAN_N_CCCR_BRSE_OFF (9u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.PXHD */
#define IFX_CAN_N_CCCR_PXHD_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.PXHD */
#define IFX_CAN_N_CCCR_PXHD_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.PXHD */
#define IFX_CAN_N_CCCR_PXHD_OFF (12u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.EFBI */
#define IFX_CAN_N_CCCR_EFBI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.EFBI */
#define IFX_CAN_N_CCCR_EFBI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.EFBI */
#define IFX_CAN_N_CCCR_EFBI_OFF (13u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.TXP */
#define IFX_CAN_N_CCCR_TXP_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.TXP */
#define IFX_CAN_N_CCCR_TXP_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.TXP */
#define IFX_CAN_N_CCCR_TXP_OFF (14u)

/** \brief Length for Ifx_CAN_N_CCCR_Bits.NISO */
#define IFX_CAN_N_CCCR_NISO_LEN (1u)

/** \brief Mask for Ifx_CAN_N_CCCR_Bits.NISO */
#define IFX_CAN_N_CCCR_NISO_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_CCCR_Bits.NISO */
#define IFX_CAN_N_CCCR_NISO_OFF (15u)

/** \brief Length for Ifx_CAN_N_NBTP_Bits.NTSEG2 */
#define IFX_CAN_N_NBTP_NTSEG2_LEN (7u)

/** \brief Mask for Ifx_CAN_N_NBTP_Bits.NTSEG2 */
#define IFX_CAN_N_NBTP_NTSEG2_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_NBTP_Bits.NTSEG2 */
#define IFX_CAN_N_NBTP_NTSEG2_OFF (0u)

/** \brief Length for Ifx_CAN_N_NBTP_Bits.NTSEG1 */
#define IFX_CAN_N_NBTP_NTSEG1_LEN (8u)

/** \brief Mask for Ifx_CAN_N_NBTP_Bits.NTSEG1 */
#define IFX_CAN_N_NBTP_NTSEG1_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_NBTP_Bits.NTSEG1 */
#define IFX_CAN_N_NBTP_NTSEG1_OFF (8u)

/** \brief Length for Ifx_CAN_N_NBTP_Bits.NBRP */
#define IFX_CAN_N_NBTP_NBRP_LEN (9u)

/** \brief Mask for Ifx_CAN_N_NBTP_Bits.NBRP */
#define IFX_CAN_N_NBTP_NBRP_MSK (0x1ffu)

/** \brief Offset for Ifx_CAN_N_NBTP_Bits.NBRP */
#define IFX_CAN_N_NBTP_NBRP_OFF (16u)

/** \brief Length for Ifx_CAN_N_NBTP_Bits.NSJW */
#define IFX_CAN_N_NBTP_NSJW_LEN (7u)

/** \brief Mask for Ifx_CAN_N_NBTP_Bits.NSJW */
#define IFX_CAN_N_NBTP_NSJW_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_NBTP_Bits.NSJW */
#define IFX_CAN_N_NBTP_NSJW_OFF (25u)

/** \brief Length for Ifx_CAN_N_TSCC_Bits.TSS */
#define IFX_CAN_N_TSCC_TSS_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TSCC_Bits.TSS */
#define IFX_CAN_N_TSCC_TSS_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TSCC_Bits.TSS */
#define IFX_CAN_N_TSCC_TSS_OFF (0u)

/** \brief Length for Ifx_CAN_N_TSCC_Bits.TCP */
#define IFX_CAN_N_TSCC_TCP_LEN (4u)

/** \brief Mask for Ifx_CAN_N_TSCC_Bits.TCP */
#define IFX_CAN_N_TSCC_TCP_MSK (0xfu)

/** \brief Offset for Ifx_CAN_N_TSCC_Bits.TCP */
#define IFX_CAN_N_TSCC_TCP_OFF (16u)

/** \brief Length for Ifx_CAN_N_TSCV_Bits.TSC */
#define IFX_CAN_N_TSCV_TSC_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TSCV_Bits.TSC */
#define IFX_CAN_N_TSCV_TSC_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TSCV_Bits.TSC */
#define IFX_CAN_N_TSCV_TSC_OFF (0u)

/** \brief Length for Ifx_CAN_N_TOCC_Bits.ETOC */
#define IFX_CAN_N_TOCC_ETOC_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TOCC_Bits.ETOC */
#define IFX_CAN_N_TOCC_ETOC_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TOCC_Bits.ETOC */
#define IFX_CAN_N_TOCC_ETOC_OFF (0u)

/** \brief Length for Ifx_CAN_N_TOCC_Bits.TOS */
#define IFX_CAN_N_TOCC_TOS_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TOCC_Bits.TOS */
#define IFX_CAN_N_TOCC_TOS_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TOCC_Bits.TOS */
#define IFX_CAN_N_TOCC_TOS_OFF (1u)

/** \brief Length for Ifx_CAN_N_TOCC_Bits.TOP */
#define IFX_CAN_N_TOCC_TOP_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TOCC_Bits.TOP */
#define IFX_CAN_N_TOCC_TOP_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TOCC_Bits.TOP */
#define IFX_CAN_N_TOCC_TOP_OFF (16u)

/** \brief Length for Ifx_CAN_N_TOCV_Bits.TOC */
#define IFX_CAN_N_TOCV_TOC_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TOCV_Bits.TOC */
#define IFX_CAN_N_TOCV_TOC_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TOCV_Bits.TOC */
#define IFX_CAN_N_TOCV_TOC_OFF (0u)

/** \brief Length for Ifx_CAN_N_ECR_Bits.TEC */
#define IFX_CAN_N_ECR_TEC_LEN (8u)

/** \brief Mask for Ifx_CAN_N_ECR_Bits.TEC */
#define IFX_CAN_N_ECR_TEC_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_ECR_Bits.TEC */
#define IFX_CAN_N_ECR_TEC_OFF (0u)

/** \brief Length for Ifx_CAN_N_ECR_Bits.REC */
#define IFX_CAN_N_ECR_REC_LEN (7u)

/** \brief Mask for Ifx_CAN_N_ECR_Bits.REC */
#define IFX_CAN_N_ECR_REC_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_ECR_Bits.REC */
#define IFX_CAN_N_ECR_REC_OFF (8u)

/** \brief Length for Ifx_CAN_N_ECR_Bits.RP */
#define IFX_CAN_N_ECR_RP_LEN (1u)

/** \brief Mask for Ifx_CAN_N_ECR_Bits.RP */
#define IFX_CAN_N_ECR_RP_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_ECR_Bits.RP */
#define IFX_CAN_N_ECR_RP_OFF (15u)

/** \brief Length for Ifx_CAN_N_ECR_Bits.CEL */
#define IFX_CAN_N_ECR_CEL_LEN (8u)

/** \brief Mask for Ifx_CAN_N_ECR_Bits.CEL */
#define IFX_CAN_N_ECR_CEL_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_ECR_Bits.CEL */
#define IFX_CAN_N_ECR_CEL_OFF (16u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.LEC */
#define IFX_CAN_N_PSR_LEC_LEN (3u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.LEC */
#define IFX_CAN_N_PSR_LEC_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.LEC */
#define IFX_CAN_N_PSR_LEC_OFF (0u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.ACT */
#define IFX_CAN_N_PSR_ACT_LEN (2u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.ACT */
#define IFX_CAN_N_PSR_ACT_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.ACT */
#define IFX_CAN_N_PSR_ACT_OFF (3u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.EP */
#define IFX_CAN_N_PSR_EP_LEN (1u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.EP */
#define IFX_CAN_N_PSR_EP_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.EP */
#define IFX_CAN_N_PSR_EP_OFF (5u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.EW */
#define IFX_CAN_N_PSR_EW_LEN (1u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.EW */
#define IFX_CAN_N_PSR_EW_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.EW */
#define IFX_CAN_N_PSR_EW_OFF (6u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.BO */
#define IFX_CAN_N_PSR_BO_LEN (1u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.BO */
#define IFX_CAN_N_PSR_BO_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.BO */
#define IFX_CAN_N_PSR_BO_OFF (7u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.DLEC */
#define IFX_CAN_N_PSR_DLEC_LEN (3u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.DLEC */
#define IFX_CAN_N_PSR_DLEC_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.DLEC */
#define IFX_CAN_N_PSR_DLEC_OFF (8u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.RESI */
#define IFX_CAN_N_PSR_RESI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.RESI */
#define IFX_CAN_N_PSR_RESI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.RESI */
#define IFX_CAN_N_PSR_RESI_OFF (11u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.RBRS */
#define IFX_CAN_N_PSR_RBRS_LEN (1u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.RBRS */
#define IFX_CAN_N_PSR_RBRS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.RBRS */
#define IFX_CAN_N_PSR_RBRS_OFF (12u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.RFDF */
#define IFX_CAN_N_PSR_RFDF_LEN (1u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.RFDF */
#define IFX_CAN_N_PSR_RFDF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.RFDF */
#define IFX_CAN_N_PSR_RFDF_OFF (13u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.PXE */
#define IFX_CAN_N_PSR_PXE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.PXE */
#define IFX_CAN_N_PSR_PXE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.PXE */
#define IFX_CAN_N_PSR_PXE_OFF (14u)

/** \brief Length for Ifx_CAN_N_PSR_Bits.TDCV */
#define IFX_CAN_N_PSR_TDCV_LEN (7u)

/** \brief Mask for Ifx_CAN_N_PSR_Bits.TDCV */
#define IFX_CAN_N_PSR_TDCV_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_PSR_Bits.TDCV */
#define IFX_CAN_N_PSR_TDCV_OFF (16u)

/** \brief Length for Ifx_CAN_N_TDCR_Bits.TDCF */
#define IFX_CAN_N_TDCR_TDCF_LEN (7u)

/** \brief Mask for Ifx_CAN_N_TDCR_Bits.TDCF */
#define IFX_CAN_N_TDCR_TDCF_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_TDCR_Bits.TDCF */
#define IFX_CAN_N_TDCR_TDCF_OFF (0u)

/** \brief Length for Ifx_CAN_N_TDCR_Bits.TDCO */
#define IFX_CAN_N_TDCR_TDCO_LEN (7u)

/** \brief Mask for Ifx_CAN_N_TDCR_Bits.TDCO */
#define IFX_CAN_N_TDCR_TDCO_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_TDCR_Bits.TDCO */
#define IFX_CAN_N_TDCR_TDCO_OFF (8u)

/** \brief Length for Ifx_CAN_N_IR_Bits.RF0N */
#define IFX_CAN_N_IR_RF0N_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.RF0N */
#define IFX_CAN_N_IR_RF0N_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.RF0N */
#define IFX_CAN_N_IR_RF0N_OFF (0u)

/** \brief Length for Ifx_CAN_N_IR_Bits.RF0W */
#define IFX_CAN_N_IR_RF0W_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.RF0W */
#define IFX_CAN_N_IR_RF0W_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.RF0W */
#define IFX_CAN_N_IR_RF0W_OFF (1u)

/** \brief Length for Ifx_CAN_N_IR_Bits.RF0F */
#define IFX_CAN_N_IR_RF0F_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.RF0F */
#define IFX_CAN_N_IR_RF0F_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.RF0F */
#define IFX_CAN_N_IR_RF0F_OFF (2u)

/** \brief Length for Ifx_CAN_N_IR_Bits.RF0L */
#define IFX_CAN_N_IR_RF0L_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.RF0L */
#define IFX_CAN_N_IR_RF0L_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.RF0L */
#define IFX_CAN_N_IR_RF0L_OFF (3u)

/** \brief Length for Ifx_CAN_N_IR_Bits.RF1N */
#define IFX_CAN_N_IR_RF1N_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.RF1N */
#define IFX_CAN_N_IR_RF1N_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.RF1N */
#define IFX_CAN_N_IR_RF1N_OFF (4u)

/** \brief Length for Ifx_CAN_N_IR_Bits.RF1W */
#define IFX_CAN_N_IR_RF1W_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.RF1W */
#define IFX_CAN_N_IR_RF1W_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.RF1W */
#define IFX_CAN_N_IR_RF1W_OFF (5u)

/** \brief Length for Ifx_CAN_N_IR_Bits.RF1F */
#define IFX_CAN_N_IR_RF1F_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.RF1F */
#define IFX_CAN_N_IR_RF1F_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.RF1F */
#define IFX_CAN_N_IR_RF1F_OFF (6u)

/** \brief Length for Ifx_CAN_N_IR_Bits.RF1L */
#define IFX_CAN_N_IR_RF1L_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.RF1L */
#define IFX_CAN_N_IR_RF1L_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.RF1L */
#define IFX_CAN_N_IR_RF1L_OFF (7u)

/** \brief Length for Ifx_CAN_N_IR_Bits.HPM */
#define IFX_CAN_N_IR_HPM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.HPM */
#define IFX_CAN_N_IR_HPM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.HPM */
#define IFX_CAN_N_IR_HPM_OFF (8u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TC */
#define IFX_CAN_N_IR_TC_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TC */
#define IFX_CAN_N_IR_TC_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TC */
#define IFX_CAN_N_IR_TC_OFF (9u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TCF */
#define IFX_CAN_N_IR_TCF_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TCF */
#define IFX_CAN_N_IR_TCF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TCF */
#define IFX_CAN_N_IR_TCF_OFF (10u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TFE */
#define IFX_CAN_N_IR_TFE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TFE */
#define IFX_CAN_N_IR_TFE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TFE */
#define IFX_CAN_N_IR_TFE_OFF (11u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TEFN */
#define IFX_CAN_N_IR_TEFN_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TEFN */
#define IFX_CAN_N_IR_TEFN_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TEFN */
#define IFX_CAN_N_IR_TEFN_OFF (12u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TEFW */
#define IFX_CAN_N_IR_TEFW_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TEFW */
#define IFX_CAN_N_IR_TEFW_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TEFW */
#define IFX_CAN_N_IR_TEFW_OFF (13u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TEFF */
#define IFX_CAN_N_IR_TEFF_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TEFF */
#define IFX_CAN_N_IR_TEFF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TEFF */
#define IFX_CAN_N_IR_TEFF_OFF (14u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TEFL */
#define IFX_CAN_N_IR_TEFL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TEFL */
#define IFX_CAN_N_IR_TEFL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TEFL */
#define IFX_CAN_N_IR_TEFL_OFF (15u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TSW */
#define IFX_CAN_N_IR_TSW_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TSW */
#define IFX_CAN_N_IR_TSW_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TSW */
#define IFX_CAN_N_IR_TSW_OFF (16u)

/** \brief Length for Ifx_CAN_N_IR_Bits.MRAF */
#define IFX_CAN_N_IR_MRAF_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.MRAF */
#define IFX_CAN_N_IR_MRAF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.MRAF */
#define IFX_CAN_N_IR_MRAF_OFF (17u)

/** \brief Length for Ifx_CAN_N_IR_Bits.TOO */
#define IFX_CAN_N_IR_TOO_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.TOO */
#define IFX_CAN_N_IR_TOO_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.TOO */
#define IFX_CAN_N_IR_TOO_OFF (18u)

/** \brief Length for Ifx_CAN_N_IR_Bits.DRX */
#define IFX_CAN_N_IR_DRX_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.DRX */
#define IFX_CAN_N_IR_DRX_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.DRX */
#define IFX_CAN_N_IR_DRX_OFF (19u)

/** \brief Length for Ifx_CAN_N_IR_Bits.ELO */
#define IFX_CAN_N_IR_ELO_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.ELO */
#define IFX_CAN_N_IR_ELO_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.ELO */
#define IFX_CAN_N_IR_ELO_OFF (22u)

/** \brief Length for Ifx_CAN_N_IR_Bits.EP */
#define IFX_CAN_N_IR_EP_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.EP */
#define IFX_CAN_N_IR_EP_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.EP */
#define IFX_CAN_N_IR_EP_OFF (23u)

/** \brief Length for Ifx_CAN_N_IR_Bits.EW */
#define IFX_CAN_N_IR_EW_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.EW */
#define IFX_CAN_N_IR_EW_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.EW */
#define IFX_CAN_N_IR_EW_OFF (24u)

/** \brief Length for Ifx_CAN_N_IR_Bits.BO */
#define IFX_CAN_N_IR_BO_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.BO */
#define IFX_CAN_N_IR_BO_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.BO */
#define IFX_CAN_N_IR_BO_OFF (25u)

/** \brief Length for Ifx_CAN_N_IR_Bits.WDI */
#define IFX_CAN_N_IR_WDI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.WDI */
#define IFX_CAN_N_IR_WDI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.WDI */
#define IFX_CAN_N_IR_WDI_OFF (26u)

/** \brief Length for Ifx_CAN_N_IR_Bits.PEA */
#define IFX_CAN_N_IR_PEA_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.PEA */
#define IFX_CAN_N_IR_PEA_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.PEA */
#define IFX_CAN_N_IR_PEA_OFF (27u)

/** \brief Length for Ifx_CAN_N_IR_Bits.PED */
#define IFX_CAN_N_IR_PED_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IR_Bits.PED */
#define IFX_CAN_N_IR_PED_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IR_Bits.PED */
#define IFX_CAN_N_IR_PED_OFF (28u)

/** \brief Length for Ifx_CAN_N_IE_Bits.RF0NE */
#define IFX_CAN_N_IE_RF0NE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.RF0NE */
#define IFX_CAN_N_IE_RF0NE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.RF0NE */
#define IFX_CAN_N_IE_RF0NE_OFF (0u)

/** \brief Length for Ifx_CAN_N_IE_Bits.RF0WE */
#define IFX_CAN_N_IE_RF0WE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.RF0WE */
#define IFX_CAN_N_IE_RF0WE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.RF0WE */
#define IFX_CAN_N_IE_RF0WE_OFF (1u)

/** \brief Length for Ifx_CAN_N_IE_Bits.RF0FE */
#define IFX_CAN_N_IE_RF0FE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.RF0FE */
#define IFX_CAN_N_IE_RF0FE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.RF0FE */
#define IFX_CAN_N_IE_RF0FE_OFF (2u)

/** \brief Length for Ifx_CAN_N_IE_Bits.RF0LE */
#define IFX_CAN_N_IE_RF0LE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.RF0LE */
#define IFX_CAN_N_IE_RF0LE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.RF0LE */
#define IFX_CAN_N_IE_RF0LE_OFF (3u)

/** \brief Length for Ifx_CAN_N_IE_Bits.RF1NE */
#define IFX_CAN_N_IE_RF1NE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.RF1NE */
#define IFX_CAN_N_IE_RF1NE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.RF1NE */
#define IFX_CAN_N_IE_RF1NE_OFF (4u)

/** \brief Length for Ifx_CAN_N_IE_Bits.RF1WE */
#define IFX_CAN_N_IE_RF1WE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.RF1WE */
#define IFX_CAN_N_IE_RF1WE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.RF1WE */
#define IFX_CAN_N_IE_RF1WE_OFF (5u)

/** \brief Length for Ifx_CAN_N_IE_Bits.RF1FE */
#define IFX_CAN_N_IE_RF1FE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.RF1FE */
#define IFX_CAN_N_IE_RF1FE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.RF1FE */
#define IFX_CAN_N_IE_RF1FE_OFF (6u)

/** \brief Length for Ifx_CAN_N_IE_Bits.RF1LE */
#define IFX_CAN_N_IE_RF1LE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.RF1LE */
#define IFX_CAN_N_IE_RF1LE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.RF1LE */
#define IFX_CAN_N_IE_RF1LE_OFF (7u)

/** \brief Length for Ifx_CAN_N_IE_Bits.HPME */
#define IFX_CAN_N_IE_HPME_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.HPME */
#define IFX_CAN_N_IE_HPME_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.HPME */
#define IFX_CAN_N_IE_HPME_OFF (8u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TCE */
#define IFX_CAN_N_IE_TCE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TCE */
#define IFX_CAN_N_IE_TCE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TCE */
#define IFX_CAN_N_IE_TCE_OFF (9u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TCFE */
#define IFX_CAN_N_IE_TCFE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TCFE */
#define IFX_CAN_N_IE_TCFE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TCFE */
#define IFX_CAN_N_IE_TCFE_OFF (10u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TFEE */
#define IFX_CAN_N_IE_TFEE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TFEE */
#define IFX_CAN_N_IE_TFEE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TFEE */
#define IFX_CAN_N_IE_TFEE_OFF (11u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TEFNE */
#define IFX_CAN_N_IE_TEFNE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TEFNE */
#define IFX_CAN_N_IE_TEFNE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TEFNE */
#define IFX_CAN_N_IE_TEFNE_OFF (12u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TEFWE */
#define IFX_CAN_N_IE_TEFWE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TEFWE */
#define IFX_CAN_N_IE_TEFWE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TEFWE */
#define IFX_CAN_N_IE_TEFWE_OFF (13u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TEFFE */
#define IFX_CAN_N_IE_TEFFE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TEFFE */
#define IFX_CAN_N_IE_TEFFE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TEFFE */
#define IFX_CAN_N_IE_TEFFE_OFF (14u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TEFLE */
#define IFX_CAN_N_IE_TEFLE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TEFLE */
#define IFX_CAN_N_IE_TEFLE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TEFLE */
#define IFX_CAN_N_IE_TEFLE_OFF (15u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TSWE */
#define IFX_CAN_N_IE_TSWE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TSWE */
#define IFX_CAN_N_IE_TSWE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TSWE */
#define IFX_CAN_N_IE_TSWE_OFF (16u)

/** \brief Length for Ifx_CAN_N_IE_Bits.MRAFE */
#define IFX_CAN_N_IE_MRAFE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.MRAFE */
#define IFX_CAN_N_IE_MRAFE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.MRAFE */
#define IFX_CAN_N_IE_MRAFE_OFF (17u)

/** \brief Length for Ifx_CAN_N_IE_Bits.TOOE */
#define IFX_CAN_N_IE_TOOE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.TOOE */
#define IFX_CAN_N_IE_TOOE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.TOOE */
#define IFX_CAN_N_IE_TOOE_OFF (18u)

/** \brief Length for Ifx_CAN_N_IE_Bits.DRXE */
#define IFX_CAN_N_IE_DRXE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.DRXE */
#define IFX_CAN_N_IE_DRXE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.DRXE */
#define IFX_CAN_N_IE_DRXE_OFF (19u)

/** \brief Length for Ifx_CAN_N_IE_Bits.ELOE */
#define IFX_CAN_N_IE_ELOE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.ELOE */
#define IFX_CAN_N_IE_ELOE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.ELOE */
#define IFX_CAN_N_IE_ELOE_OFF (22u)

/** \brief Length for Ifx_CAN_N_IE_Bits.EPE */
#define IFX_CAN_N_IE_EPE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.EPE */
#define IFX_CAN_N_IE_EPE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.EPE */
#define IFX_CAN_N_IE_EPE_OFF (23u)

/** \brief Length for Ifx_CAN_N_IE_Bits.EWE */
#define IFX_CAN_N_IE_EWE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.EWE */
#define IFX_CAN_N_IE_EWE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.EWE */
#define IFX_CAN_N_IE_EWE_OFF (24u)

/** \brief Length for Ifx_CAN_N_IE_Bits.BOE */
#define IFX_CAN_N_IE_BOE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.BOE */
#define IFX_CAN_N_IE_BOE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.BOE */
#define IFX_CAN_N_IE_BOE_OFF (25u)

/** \brief Length for Ifx_CAN_N_IE_Bits.WDIE */
#define IFX_CAN_N_IE_WDIE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.WDIE */
#define IFX_CAN_N_IE_WDIE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.WDIE */
#define IFX_CAN_N_IE_WDIE_OFF (26u)

/** \brief Length for Ifx_CAN_N_IE_Bits.PEAE */
#define IFX_CAN_N_IE_PEAE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.PEAE */
#define IFX_CAN_N_IE_PEAE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.PEAE */
#define IFX_CAN_N_IE_PEAE_OFF (27u)

/** \brief Length for Ifx_CAN_N_IE_Bits.PEDE */
#define IFX_CAN_N_IE_PEDE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_IE_Bits.PEDE */
#define IFX_CAN_N_IE_PEDE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_IE_Bits.PEDE */
#define IFX_CAN_N_IE_PEDE_OFF (28u)

/** \brief Length for Ifx_CAN_N_GFC_Bits.RRFE */
#define IFX_CAN_N_GFC_RRFE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_GFC_Bits.RRFE */
#define IFX_CAN_N_GFC_RRFE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_GFC_Bits.RRFE */
#define IFX_CAN_N_GFC_RRFE_OFF (0u)

/** \brief Length for Ifx_CAN_N_GFC_Bits.RRFS */
#define IFX_CAN_N_GFC_RRFS_LEN (1u)

/** \brief Mask for Ifx_CAN_N_GFC_Bits.RRFS */
#define IFX_CAN_N_GFC_RRFS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_GFC_Bits.RRFS */
#define IFX_CAN_N_GFC_RRFS_OFF (1u)

/** \brief Length for Ifx_CAN_N_GFC_Bits.ANFE */
#define IFX_CAN_N_GFC_ANFE_LEN (2u)

/** \brief Mask for Ifx_CAN_N_GFC_Bits.ANFE */
#define IFX_CAN_N_GFC_ANFE_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_GFC_Bits.ANFE */
#define IFX_CAN_N_GFC_ANFE_OFF (2u)

/** \brief Length for Ifx_CAN_N_GFC_Bits.ANFS */
#define IFX_CAN_N_GFC_ANFS_LEN (2u)

/** \brief Mask for Ifx_CAN_N_GFC_Bits.ANFS */
#define IFX_CAN_N_GFC_ANFS_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_GFC_Bits.ANFS */
#define IFX_CAN_N_GFC_ANFS_OFF (4u)

/** \brief Length for Ifx_CAN_N_SIDFC_Bits.FLSSA */
#define IFX_CAN_N_SIDFC_FLSSA_LEN (14u)

/** \brief Mask for Ifx_CAN_N_SIDFC_Bits.FLSSA */
#define IFX_CAN_N_SIDFC_FLSSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_SIDFC_Bits.FLSSA */
#define IFX_CAN_N_SIDFC_FLSSA_OFF (2u)

/** \brief Length for Ifx_CAN_N_SIDFC_Bits.LSS */
#define IFX_CAN_N_SIDFC_LSS_LEN (8u)

/** \brief Mask for Ifx_CAN_N_SIDFC_Bits.LSS */
#define IFX_CAN_N_SIDFC_LSS_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_SIDFC_Bits.LSS */
#define IFX_CAN_N_SIDFC_LSS_OFF (16u)

/** \brief Length for Ifx_CAN_N_XIDFC_Bits.FLESA */
#define IFX_CAN_N_XIDFC_FLESA_LEN (14u)

/** \brief Mask for Ifx_CAN_N_XIDFC_Bits.FLESA */
#define IFX_CAN_N_XIDFC_FLESA_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_XIDFC_Bits.FLESA */
#define IFX_CAN_N_XIDFC_FLESA_OFF (2u)

/** \brief Length for Ifx_CAN_N_XIDFC_Bits.LSE */
#define IFX_CAN_N_XIDFC_LSE_LEN (7u)

/** \brief Mask for Ifx_CAN_N_XIDFC_Bits.LSE */
#define IFX_CAN_N_XIDFC_LSE_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_XIDFC_Bits.LSE */
#define IFX_CAN_N_XIDFC_LSE_OFF (16u)

/** \brief Length for Ifx_CAN_N_XIDAM_Bits.EIDM */
#define IFX_CAN_N_XIDAM_EIDM_LEN (29u)

/** \brief Mask for Ifx_CAN_N_XIDAM_Bits.EIDM */
#define IFX_CAN_N_XIDAM_EIDM_MSK (0x1fffffffu)

/** \brief Offset for Ifx_CAN_N_XIDAM_Bits.EIDM */
#define IFX_CAN_N_XIDAM_EIDM_OFF (0u)

/** \brief Length for Ifx_CAN_N_HPMS_Bits.BIDX */
#define IFX_CAN_N_HPMS_BIDX_LEN (6u)

/** \brief Mask for Ifx_CAN_N_HPMS_Bits.BIDX */
#define IFX_CAN_N_HPMS_BIDX_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_HPMS_Bits.BIDX */
#define IFX_CAN_N_HPMS_BIDX_OFF (0u)

/** \brief Length for Ifx_CAN_N_HPMS_Bits.MSI */
#define IFX_CAN_N_HPMS_MSI_LEN (2u)

/** \brief Mask for Ifx_CAN_N_HPMS_Bits.MSI */
#define IFX_CAN_N_HPMS_MSI_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_HPMS_Bits.MSI */
#define IFX_CAN_N_HPMS_MSI_OFF (6u)

/** \brief Length for Ifx_CAN_N_HPMS_Bits.FIDX */
#define IFX_CAN_N_HPMS_FIDX_LEN (7u)

/** \brief Mask for Ifx_CAN_N_HPMS_Bits.FIDX */
#define IFX_CAN_N_HPMS_FIDX_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_HPMS_Bits.FIDX */
#define IFX_CAN_N_HPMS_FIDX_OFF (8u)

/** \brief Length for Ifx_CAN_N_HPMS_Bits.FLST */
#define IFX_CAN_N_HPMS_FLST_LEN (1u)

/** \brief Mask for Ifx_CAN_N_HPMS_Bits.FLST */
#define IFX_CAN_N_HPMS_FLST_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_HPMS_Bits.FLST */
#define IFX_CAN_N_HPMS_FLST_OFF (15u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND0 */
#define IFX_CAN_N_NDAT1_ND0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND0 */
#define IFX_CAN_N_NDAT1_ND0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND0 */
#define IFX_CAN_N_NDAT1_ND0_OFF (0u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND1 */
#define IFX_CAN_N_NDAT1_ND1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND1 */
#define IFX_CAN_N_NDAT1_ND1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND1 */
#define IFX_CAN_N_NDAT1_ND1_OFF (1u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND2 */
#define IFX_CAN_N_NDAT1_ND2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND2 */
#define IFX_CAN_N_NDAT1_ND2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND2 */
#define IFX_CAN_N_NDAT1_ND2_OFF (2u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND3 */
#define IFX_CAN_N_NDAT1_ND3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND3 */
#define IFX_CAN_N_NDAT1_ND3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND3 */
#define IFX_CAN_N_NDAT1_ND3_OFF (3u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND4 */
#define IFX_CAN_N_NDAT1_ND4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND4 */
#define IFX_CAN_N_NDAT1_ND4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND4 */
#define IFX_CAN_N_NDAT1_ND4_OFF (4u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND5 */
#define IFX_CAN_N_NDAT1_ND5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND5 */
#define IFX_CAN_N_NDAT1_ND5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND5 */
#define IFX_CAN_N_NDAT1_ND5_OFF (5u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND6 */
#define IFX_CAN_N_NDAT1_ND6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND6 */
#define IFX_CAN_N_NDAT1_ND6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND6 */
#define IFX_CAN_N_NDAT1_ND6_OFF (6u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND7 */
#define IFX_CAN_N_NDAT1_ND7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND7 */
#define IFX_CAN_N_NDAT1_ND7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND7 */
#define IFX_CAN_N_NDAT1_ND7_OFF (7u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND8 */
#define IFX_CAN_N_NDAT1_ND8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND8 */
#define IFX_CAN_N_NDAT1_ND8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND8 */
#define IFX_CAN_N_NDAT1_ND8_OFF (8u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND9 */
#define IFX_CAN_N_NDAT1_ND9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND9 */
#define IFX_CAN_N_NDAT1_ND9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND9 */
#define IFX_CAN_N_NDAT1_ND9_OFF (9u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND10 */
#define IFX_CAN_N_NDAT1_ND10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND10 */
#define IFX_CAN_N_NDAT1_ND10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND10 */
#define IFX_CAN_N_NDAT1_ND10_OFF (10u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND11 */
#define IFX_CAN_N_NDAT1_ND11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND11 */
#define IFX_CAN_N_NDAT1_ND11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND11 */
#define IFX_CAN_N_NDAT1_ND11_OFF (11u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND12 */
#define IFX_CAN_N_NDAT1_ND12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND12 */
#define IFX_CAN_N_NDAT1_ND12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND12 */
#define IFX_CAN_N_NDAT1_ND12_OFF (12u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND13 */
#define IFX_CAN_N_NDAT1_ND13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND13 */
#define IFX_CAN_N_NDAT1_ND13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND13 */
#define IFX_CAN_N_NDAT1_ND13_OFF (13u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND14 */
#define IFX_CAN_N_NDAT1_ND14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND14 */
#define IFX_CAN_N_NDAT1_ND14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND14 */
#define IFX_CAN_N_NDAT1_ND14_OFF (14u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND15 */
#define IFX_CAN_N_NDAT1_ND15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND15 */
#define IFX_CAN_N_NDAT1_ND15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND15 */
#define IFX_CAN_N_NDAT1_ND15_OFF (15u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND16 */
#define IFX_CAN_N_NDAT1_ND16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND16 */
#define IFX_CAN_N_NDAT1_ND16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND16 */
#define IFX_CAN_N_NDAT1_ND16_OFF (16u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND17 */
#define IFX_CAN_N_NDAT1_ND17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND17 */
#define IFX_CAN_N_NDAT1_ND17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND17 */
#define IFX_CAN_N_NDAT1_ND17_OFF (17u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND18 */
#define IFX_CAN_N_NDAT1_ND18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND18 */
#define IFX_CAN_N_NDAT1_ND18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND18 */
#define IFX_CAN_N_NDAT1_ND18_OFF (18u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND19 */
#define IFX_CAN_N_NDAT1_ND19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND19 */
#define IFX_CAN_N_NDAT1_ND19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND19 */
#define IFX_CAN_N_NDAT1_ND19_OFF (19u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND20 */
#define IFX_CAN_N_NDAT1_ND20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND20 */
#define IFX_CAN_N_NDAT1_ND20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND20 */
#define IFX_CAN_N_NDAT1_ND20_OFF (20u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND21 */
#define IFX_CAN_N_NDAT1_ND21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND21 */
#define IFX_CAN_N_NDAT1_ND21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND21 */
#define IFX_CAN_N_NDAT1_ND21_OFF (21u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND22 */
#define IFX_CAN_N_NDAT1_ND22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND22 */
#define IFX_CAN_N_NDAT1_ND22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND22 */
#define IFX_CAN_N_NDAT1_ND22_OFF (22u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND23 */
#define IFX_CAN_N_NDAT1_ND23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND23 */
#define IFX_CAN_N_NDAT1_ND23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND23 */
#define IFX_CAN_N_NDAT1_ND23_OFF (23u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND24 */
#define IFX_CAN_N_NDAT1_ND24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND24 */
#define IFX_CAN_N_NDAT1_ND24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND24 */
#define IFX_CAN_N_NDAT1_ND24_OFF (24u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND25 */
#define IFX_CAN_N_NDAT1_ND25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND25 */
#define IFX_CAN_N_NDAT1_ND25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND25 */
#define IFX_CAN_N_NDAT1_ND25_OFF (25u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND26 */
#define IFX_CAN_N_NDAT1_ND26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND26 */
#define IFX_CAN_N_NDAT1_ND26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND26 */
#define IFX_CAN_N_NDAT1_ND26_OFF (26u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND27 */
#define IFX_CAN_N_NDAT1_ND27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND27 */
#define IFX_CAN_N_NDAT1_ND27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND27 */
#define IFX_CAN_N_NDAT1_ND27_OFF (27u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND28 */
#define IFX_CAN_N_NDAT1_ND28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND28 */
#define IFX_CAN_N_NDAT1_ND28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND28 */
#define IFX_CAN_N_NDAT1_ND28_OFF (28u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND29 */
#define IFX_CAN_N_NDAT1_ND29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND29 */
#define IFX_CAN_N_NDAT1_ND29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND29 */
#define IFX_CAN_N_NDAT1_ND29_OFF (29u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND30 */
#define IFX_CAN_N_NDAT1_ND30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND30 */
#define IFX_CAN_N_NDAT1_ND30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND30 */
#define IFX_CAN_N_NDAT1_ND30_OFF (30u)

/** \brief Length for Ifx_CAN_N_NDAT1_Bits.ND31 */
#define IFX_CAN_N_NDAT1_ND31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT1_Bits.ND31 */
#define IFX_CAN_N_NDAT1_ND31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT1_Bits.ND31 */
#define IFX_CAN_N_NDAT1_ND31_OFF (31u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND32 */
#define IFX_CAN_N_NDAT2_ND32_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND32 */
#define IFX_CAN_N_NDAT2_ND32_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND32 */
#define IFX_CAN_N_NDAT2_ND32_OFF (0u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND33 */
#define IFX_CAN_N_NDAT2_ND33_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND33 */
#define IFX_CAN_N_NDAT2_ND33_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND33 */
#define IFX_CAN_N_NDAT2_ND33_OFF (1u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND34 */
#define IFX_CAN_N_NDAT2_ND34_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND34 */
#define IFX_CAN_N_NDAT2_ND34_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND34 */
#define IFX_CAN_N_NDAT2_ND34_OFF (2u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND35 */
#define IFX_CAN_N_NDAT2_ND35_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND35 */
#define IFX_CAN_N_NDAT2_ND35_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND35 */
#define IFX_CAN_N_NDAT2_ND35_OFF (3u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND36 */
#define IFX_CAN_N_NDAT2_ND36_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND36 */
#define IFX_CAN_N_NDAT2_ND36_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND36 */
#define IFX_CAN_N_NDAT2_ND36_OFF (4u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND37 */
#define IFX_CAN_N_NDAT2_ND37_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND37 */
#define IFX_CAN_N_NDAT2_ND37_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND37 */
#define IFX_CAN_N_NDAT2_ND37_OFF (5u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND38 */
#define IFX_CAN_N_NDAT2_ND38_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND38 */
#define IFX_CAN_N_NDAT2_ND38_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND38 */
#define IFX_CAN_N_NDAT2_ND38_OFF (6u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND39 */
#define IFX_CAN_N_NDAT2_ND39_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND39 */
#define IFX_CAN_N_NDAT2_ND39_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND39 */
#define IFX_CAN_N_NDAT2_ND39_OFF (7u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND40 */
#define IFX_CAN_N_NDAT2_ND40_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND40 */
#define IFX_CAN_N_NDAT2_ND40_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND40 */
#define IFX_CAN_N_NDAT2_ND40_OFF (8u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND41 */
#define IFX_CAN_N_NDAT2_ND41_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND41 */
#define IFX_CAN_N_NDAT2_ND41_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND41 */
#define IFX_CAN_N_NDAT2_ND41_OFF (9u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND42 */
#define IFX_CAN_N_NDAT2_ND42_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND42 */
#define IFX_CAN_N_NDAT2_ND42_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND42 */
#define IFX_CAN_N_NDAT2_ND42_OFF (10u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND43 */
#define IFX_CAN_N_NDAT2_ND43_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND43 */
#define IFX_CAN_N_NDAT2_ND43_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND43 */
#define IFX_CAN_N_NDAT2_ND43_OFF (11u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND44 */
#define IFX_CAN_N_NDAT2_ND44_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND44 */
#define IFX_CAN_N_NDAT2_ND44_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND44 */
#define IFX_CAN_N_NDAT2_ND44_OFF (12u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND45 */
#define IFX_CAN_N_NDAT2_ND45_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND45 */
#define IFX_CAN_N_NDAT2_ND45_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND45 */
#define IFX_CAN_N_NDAT2_ND45_OFF (13u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND46 */
#define IFX_CAN_N_NDAT2_ND46_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND46 */
#define IFX_CAN_N_NDAT2_ND46_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND46 */
#define IFX_CAN_N_NDAT2_ND46_OFF (14u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND47 */
#define IFX_CAN_N_NDAT2_ND47_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND47 */
#define IFX_CAN_N_NDAT2_ND47_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND47 */
#define IFX_CAN_N_NDAT2_ND47_OFF (15u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND48 */
#define IFX_CAN_N_NDAT2_ND48_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND48 */
#define IFX_CAN_N_NDAT2_ND48_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND48 */
#define IFX_CAN_N_NDAT2_ND48_OFF (16u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND49 */
#define IFX_CAN_N_NDAT2_ND49_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND49 */
#define IFX_CAN_N_NDAT2_ND49_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND49 */
#define IFX_CAN_N_NDAT2_ND49_OFF (17u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND50 */
#define IFX_CAN_N_NDAT2_ND50_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND50 */
#define IFX_CAN_N_NDAT2_ND50_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND50 */
#define IFX_CAN_N_NDAT2_ND50_OFF (18u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND51 */
#define IFX_CAN_N_NDAT2_ND51_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND51 */
#define IFX_CAN_N_NDAT2_ND51_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND51 */
#define IFX_CAN_N_NDAT2_ND51_OFF (19u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND52 */
#define IFX_CAN_N_NDAT2_ND52_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND52 */
#define IFX_CAN_N_NDAT2_ND52_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND52 */
#define IFX_CAN_N_NDAT2_ND52_OFF (20u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND53 */
#define IFX_CAN_N_NDAT2_ND53_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND53 */
#define IFX_CAN_N_NDAT2_ND53_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND53 */
#define IFX_CAN_N_NDAT2_ND53_OFF (21u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND54 */
#define IFX_CAN_N_NDAT2_ND54_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND54 */
#define IFX_CAN_N_NDAT2_ND54_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND54 */
#define IFX_CAN_N_NDAT2_ND54_OFF (22u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND55 */
#define IFX_CAN_N_NDAT2_ND55_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND55 */
#define IFX_CAN_N_NDAT2_ND55_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND55 */
#define IFX_CAN_N_NDAT2_ND55_OFF (23u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND56 */
#define IFX_CAN_N_NDAT2_ND56_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND56 */
#define IFX_CAN_N_NDAT2_ND56_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND56 */
#define IFX_CAN_N_NDAT2_ND56_OFF (24u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND57 */
#define IFX_CAN_N_NDAT2_ND57_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND57 */
#define IFX_CAN_N_NDAT2_ND57_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND57 */
#define IFX_CAN_N_NDAT2_ND57_OFF (25u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND58 */
#define IFX_CAN_N_NDAT2_ND58_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND58 */
#define IFX_CAN_N_NDAT2_ND58_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND58 */
#define IFX_CAN_N_NDAT2_ND58_OFF (26u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND59 */
#define IFX_CAN_N_NDAT2_ND59_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND59 */
#define IFX_CAN_N_NDAT2_ND59_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND59 */
#define IFX_CAN_N_NDAT2_ND59_OFF (27u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND60 */
#define IFX_CAN_N_NDAT2_ND60_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND60 */
#define IFX_CAN_N_NDAT2_ND60_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND60 */
#define IFX_CAN_N_NDAT2_ND60_OFF (28u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND61 */
#define IFX_CAN_N_NDAT2_ND61_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND61 */
#define IFX_CAN_N_NDAT2_ND61_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND61 */
#define IFX_CAN_N_NDAT2_ND61_OFF (29u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND62 */
#define IFX_CAN_N_NDAT2_ND62_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND62 */
#define IFX_CAN_N_NDAT2_ND62_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND62 */
#define IFX_CAN_N_NDAT2_ND62_OFF (30u)

/** \brief Length for Ifx_CAN_N_NDAT2_Bits.ND63 */
#define IFX_CAN_N_NDAT2_ND63_LEN (1u)

/** \brief Mask for Ifx_CAN_N_NDAT2_Bits.ND63 */
#define IFX_CAN_N_NDAT2_ND63_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_NDAT2_Bits.ND63 */
#define IFX_CAN_N_NDAT2_ND63_OFF (31u)

/** \brief Length for Ifx_CAN_N_RX_F0C_Bits.F0SA */
#define IFX_CAN_N_RX_F0C_F0SA_LEN (14u)

/** \brief Mask for Ifx_CAN_N_RX_F0C_Bits.F0SA */
#define IFX_CAN_N_RX_F0C_F0SA_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_RX_F0C_Bits.F0SA */
#define IFX_CAN_N_RX_F0C_F0SA_OFF (2u)

/** \brief Length for Ifx_CAN_N_RX_F0C_Bits.F0S */
#define IFX_CAN_N_RX_F0C_F0S_LEN (7u)

/** \brief Mask for Ifx_CAN_N_RX_F0C_Bits.F0S */
#define IFX_CAN_N_RX_F0C_F0S_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_RX_F0C_Bits.F0S */
#define IFX_CAN_N_RX_F0C_F0S_OFF (16u)

/** \brief Length for Ifx_CAN_N_RX_F0C_Bits.F0WM */
#define IFX_CAN_N_RX_F0C_F0WM_LEN (7u)

/** \brief Mask for Ifx_CAN_N_RX_F0C_Bits.F0WM */
#define IFX_CAN_N_RX_F0C_F0WM_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_RX_F0C_Bits.F0WM */
#define IFX_CAN_N_RX_F0C_F0WM_OFF (24u)

/** \brief Length for Ifx_CAN_N_RX_F0C_Bits.F0OM */
#define IFX_CAN_N_RX_F0C_F0OM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_RX_F0C_Bits.F0OM */
#define IFX_CAN_N_RX_F0C_F0OM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_RX_F0C_Bits.F0OM */
#define IFX_CAN_N_RX_F0C_F0OM_OFF (31u)

/** \brief Length for Ifx_CAN_N_RX_F0S_Bits.F0FL */
#define IFX_CAN_N_RX_F0S_F0FL_LEN (7u)

/** \brief Mask for Ifx_CAN_N_RX_F0S_Bits.F0FL */
#define IFX_CAN_N_RX_F0S_F0FL_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_RX_F0S_Bits.F0FL */
#define IFX_CAN_N_RX_F0S_F0FL_OFF (0u)

/** \brief Length for Ifx_CAN_N_RX_F0S_Bits.F0GI */
#define IFX_CAN_N_RX_F0S_F0GI_LEN (6u)

/** \brief Mask for Ifx_CAN_N_RX_F0S_Bits.F0GI */
#define IFX_CAN_N_RX_F0S_F0GI_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_RX_F0S_Bits.F0GI */
#define IFX_CAN_N_RX_F0S_F0GI_OFF (8u)

/** \brief Length for Ifx_CAN_N_RX_F0S_Bits.F0PI */
#define IFX_CAN_N_RX_F0S_F0PI_LEN (6u)

/** \brief Mask for Ifx_CAN_N_RX_F0S_Bits.F0PI */
#define IFX_CAN_N_RX_F0S_F0PI_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_RX_F0S_Bits.F0PI */
#define IFX_CAN_N_RX_F0S_F0PI_OFF (16u)

/** \brief Length for Ifx_CAN_N_RX_F0S_Bits.F0F */
#define IFX_CAN_N_RX_F0S_F0F_LEN (1u)

/** \brief Mask for Ifx_CAN_N_RX_F0S_Bits.F0F */
#define IFX_CAN_N_RX_F0S_F0F_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_RX_F0S_Bits.F0F */
#define IFX_CAN_N_RX_F0S_F0F_OFF (24u)

/** \brief Length for Ifx_CAN_N_RX_F0S_Bits.RF0L */
#define IFX_CAN_N_RX_F0S_RF0L_LEN (1u)

/** \brief Mask for Ifx_CAN_N_RX_F0S_Bits.RF0L */
#define IFX_CAN_N_RX_F0S_RF0L_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_RX_F0S_Bits.RF0L */
#define IFX_CAN_N_RX_F0S_RF0L_OFF (25u)

/** \brief Length for Ifx_CAN_N_RX_F0A_Bits.F0AI */
#define IFX_CAN_N_RX_F0A_F0AI_LEN (6u)

/** \brief Mask for Ifx_CAN_N_RX_F0A_Bits.F0AI */
#define IFX_CAN_N_RX_F0A_F0AI_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_RX_F0A_Bits.F0AI */
#define IFX_CAN_N_RX_F0A_F0AI_OFF (0u)

/** \brief Length for Ifx_CAN_N_RX_BC_Bits.RBSA */
#define IFX_CAN_N_RX_BC_RBSA_LEN (14u)

/** \brief Mask for Ifx_CAN_N_RX_BC_Bits.RBSA */
#define IFX_CAN_N_RX_BC_RBSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_RX_BC_Bits.RBSA */
#define IFX_CAN_N_RX_BC_RBSA_OFF (2u)

/** \brief Length for Ifx_CAN_N_RX_F1C_Bits.F1SA */
#define IFX_CAN_N_RX_F1C_F1SA_LEN (14u)

/** \brief Mask for Ifx_CAN_N_RX_F1C_Bits.F1SA */
#define IFX_CAN_N_RX_F1C_F1SA_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_RX_F1C_Bits.F1SA */
#define IFX_CAN_N_RX_F1C_F1SA_OFF (2u)

/** \brief Length for Ifx_CAN_N_RX_F1C_Bits.F1S */
#define IFX_CAN_N_RX_F1C_F1S_LEN (7u)

/** \brief Mask for Ifx_CAN_N_RX_F1C_Bits.F1S */
#define IFX_CAN_N_RX_F1C_F1S_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_RX_F1C_Bits.F1S */
#define IFX_CAN_N_RX_F1C_F1S_OFF (16u)

/** \brief Length for Ifx_CAN_N_RX_F1C_Bits.F1WM */
#define IFX_CAN_N_RX_F1C_F1WM_LEN (7u)

/** \brief Mask for Ifx_CAN_N_RX_F1C_Bits.F1WM */
#define IFX_CAN_N_RX_F1C_F1WM_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_RX_F1C_Bits.F1WM */
#define IFX_CAN_N_RX_F1C_F1WM_OFF (24u)

/** \brief Length for Ifx_CAN_N_RX_F1C_Bits.F1OM */
#define IFX_CAN_N_RX_F1C_F1OM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_RX_F1C_Bits.F1OM */
#define IFX_CAN_N_RX_F1C_F1OM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_RX_F1C_Bits.F1OM */
#define IFX_CAN_N_RX_F1C_F1OM_OFF (31u)

/** \brief Length for Ifx_CAN_N_RX_F1S_Bits.F1FL */
#define IFX_CAN_N_RX_F1S_F1FL_LEN (7u)

/** \brief Mask for Ifx_CAN_N_RX_F1S_Bits.F1FL */
#define IFX_CAN_N_RX_F1S_F1FL_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_RX_F1S_Bits.F1FL */
#define IFX_CAN_N_RX_F1S_F1FL_OFF (0u)

/** \brief Length for Ifx_CAN_N_RX_F1S_Bits.F1GI */
#define IFX_CAN_N_RX_F1S_F1GI_LEN (6u)

/** \brief Mask for Ifx_CAN_N_RX_F1S_Bits.F1GI */
#define IFX_CAN_N_RX_F1S_F1GI_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_RX_F1S_Bits.F1GI */
#define IFX_CAN_N_RX_F1S_F1GI_OFF (8u)

/** \brief Length for Ifx_CAN_N_RX_F1S_Bits.F1PI */
#define IFX_CAN_N_RX_F1S_F1PI_LEN (6u)

/** \brief Mask for Ifx_CAN_N_RX_F1S_Bits.F1PI */
#define IFX_CAN_N_RX_F1S_F1PI_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_RX_F1S_Bits.F1PI */
#define IFX_CAN_N_RX_F1S_F1PI_OFF (16u)

/** \brief Length for Ifx_CAN_N_RX_F1S_Bits.F1F */
#define IFX_CAN_N_RX_F1S_F1F_LEN (1u)

/** \brief Mask for Ifx_CAN_N_RX_F1S_Bits.F1F */
#define IFX_CAN_N_RX_F1S_F1F_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_RX_F1S_Bits.F1F */
#define IFX_CAN_N_RX_F1S_F1F_OFF (24u)

/** \brief Length for Ifx_CAN_N_RX_F1S_Bits.RF1L */
#define IFX_CAN_N_RX_F1S_RF1L_LEN (1u)

/** \brief Mask for Ifx_CAN_N_RX_F1S_Bits.RF1L */
#define IFX_CAN_N_RX_F1S_RF1L_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_RX_F1S_Bits.RF1L */
#define IFX_CAN_N_RX_F1S_RF1L_OFF (25u)

/** \brief Length for Ifx_CAN_N_RX_F1A_Bits.F1AI */
#define IFX_CAN_N_RX_F1A_F1AI_LEN (6u)

/** \brief Mask for Ifx_CAN_N_RX_F1A_Bits.F1AI */
#define IFX_CAN_N_RX_F1A_F1AI_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_RX_F1A_Bits.F1AI */
#define IFX_CAN_N_RX_F1A_F1AI_OFF (0u)

/** \brief Length for Ifx_CAN_N_RX_ESC_Bits.F0DS */
#define IFX_CAN_N_RX_ESC_F0DS_LEN (3u)

/** \brief Mask for Ifx_CAN_N_RX_ESC_Bits.F0DS */
#define IFX_CAN_N_RX_ESC_F0DS_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_RX_ESC_Bits.F0DS */
#define IFX_CAN_N_RX_ESC_F0DS_OFF (0u)

/** \brief Length for Ifx_CAN_N_RX_ESC_Bits.F1DS */
#define IFX_CAN_N_RX_ESC_F1DS_LEN (3u)

/** \brief Mask for Ifx_CAN_N_RX_ESC_Bits.F1DS */
#define IFX_CAN_N_RX_ESC_F1DS_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_RX_ESC_Bits.F1DS */
#define IFX_CAN_N_RX_ESC_F1DS_OFF (4u)

/** \brief Length for Ifx_CAN_N_RX_ESC_Bits.RBDS */
#define IFX_CAN_N_RX_ESC_RBDS_LEN (3u)

/** \brief Mask for Ifx_CAN_N_RX_ESC_Bits.RBDS */
#define IFX_CAN_N_RX_ESC_RBDS_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_RX_ESC_Bits.RBDS */
#define IFX_CAN_N_RX_ESC_RBDS_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_BC_Bits.TBSA */
#define IFX_CAN_N_TX_BC_TBSA_LEN (14u)

/** \brief Mask for Ifx_CAN_N_TX_BC_Bits.TBSA */
#define IFX_CAN_N_TX_BC_TBSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_TX_BC_Bits.TBSA */
#define IFX_CAN_N_TX_BC_TBSA_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_BC_Bits.NDTB */
#define IFX_CAN_N_TX_BC_NDTB_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TX_BC_Bits.NDTB */
#define IFX_CAN_N_TX_BC_NDTB_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TX_BC_Bits.NDTB */
#define IFX_CAN_N_TX_BC_NDTB_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_BC_Bits.TFQS */
#define IFX_CAN_N_TX_BC_TFQS_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TX_BC_Bits.TFQS */
#define IFX_CAN_N_TX_BC_TFQS_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TX_BC_Bits.TFQS */
#define IFX_CAN_N_TX_BC_TFQS_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_BC_Bits.TFQM */
#define IFX_CAN_N_TX_BC_TFQM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BC_Bits.TFQM */
#define IFX_CAN_N_TX_BC_TFQM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BC_Bits.TFQM */
#define IFX_CAN_N_TX_BC_TFQM_OFF (30u)

/** \brief Length for Ifx_CAN_N_TX_FQS_Bits.TFFL */
#define IFX_CAN_N_TX_FQS_TFFL_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TX_FQS_Bits.TFFL */
#define IFX_CAN_N_TX_FQS_TFFL_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TX_FQS_Bits.TFFL */
#define IFX_CAN_N_TX_FQS_TFFL_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_FQS_Bits.TFGI */
#define IFX_CAN_N_TX_FQS_TFGI_LEN (5u)

/** \brief Mask for Ifx_CAN_N_TX_FQS_Bits.TFGI */
#define IFX_CAN_N_TX_FQS_TFGI_MSK (0x1fu)

/** \brief Offset for Ifx_CAN_N_TX_FQS_Bits.TFGI */
#define IFX_CAN_N_TX_FQS_TFGI_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_FQS_Bits.TFQPI */
#define IFX_CAN_N_TX_FQS_TFQPI_LEN (5u)

/** \brief Mask for Ifx_CAN_N_TX_FQS_Bits.TFQPI */
#define IFX_CAN_N_TX_FQS_TFQPI_MSK (0x1fu)

/** \brief Offset for Ifx_CAN_N_TX_FQS_Bits.TFQPI */
#define IFX_CAN_N_TX_FQS_TFQPI_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_FQS_Bits.TFQF */
#define IFX_CAN_N_TX_FQS_TFQF_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_FQS_Bits.TFQF */
#define IFX_CAN_N_TX_FQS_TFQF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_FQS_Bits.TFQF */
#define IFX_CAN_N_TX_FQS_TFQF_OFF (21u)

/** \brief Length for Ifx_CAN_N_TX_ESC_Bits.TBDS */
#define IFX_CAN_N_TX_ESC_TBDS_LEN (3u)

/** \brief Mask for Ifx_CAN_N_TX_ESC_Bits.TBDS */
#define IFX_CAN_N_TX_ESC_TBDS_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_TX_ESC_Bits.TBDS */
#define IFX_CAN_N_TX_ESC_TBDS_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP0 */
#define IFX_CAN_N_TX_BRP_TRP0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP0 */
#define IFX_CAN_N_TX_BRP_TRP0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP0 */
#define IFX_CAN_N_TX_BRP_TRP0_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP1 */
#define IFX_CAN_N_TX_BRP_TRP1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP1 */
#define IFX_CAN_N_TX_BRP_TRP1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP1 */
#define IFX_CAN_N_TX_BRP_TRP1_OFF (1u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP2 */
#define IFX_CAN_N_TX_BRP_TRP2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP2 */
#define IFX_CAN_N_TX_BRP_TRP2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP2 */
#define IFX_CAN_N_TX_BRP_TRP2_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP3 */
#define IFX_CAN_N_TX_BRP_TRP3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP3 */
#define IFX_CAN_N_TX_BRP_TRP3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP3 */
#define IFX_CAN_N_TX_BRP_TRP3_OFF (3u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP4 */
#define IFX_CAN_N_TX_BRP_TRP4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP4 */
#define IFX_CAN_N_TX_BRP_TRP4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP4 */
#define IFX_CAN_N_TX_BRP_TRP4_OFF (4u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP5 */
#define IFX_CAN_N_TX_BRP_TRP5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP5 */
#define IFX_CAN_N_TX_BRP_TRP5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP5 */
#define IFX_CAN_N_TX_BRP_TRP5_OFF (5u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP6 */
#define IFX_CAN_N_TX_BRP_TRP6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP6 */
#define IFX_CAN_N_TX_BRP_TRP6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP6 */
#define IFX_CAN_N_TX_BRP_TRP6_OFF (6u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP7 */
#define IFX_CAN_N_TX_BRP_TRP7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP7 */
#define IFX_CAN_N_TX_BRP_TRP7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP7 */
#define IFX_CAN_N_TX_BRP_TRP7_OFF (7u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP8 */
#define IFX_CAN_N_TX_BRP_TRP8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP8 */
#define IFX_CAN_N_TX_BRP_TRP8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP8 */
#define IFX_CAN_N_TX_BRP_TRP8_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP9 */
#define IFX_CAN_N_TX_BRP_TRP9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP9 */
#define IFX_CAN_N_TX_BRP_TRP9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP9 */
#define IFX_CAN_N_TX_BRP_TRP9_OFF (9u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP10 */
#define IFX_CAN_N_TX_BRP_TRP10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP10 */
#define IFX_CAN_N_TX_BRP_TRP10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP10 */
#define IFX_CAN_N_TX_BRP_TRP10_OFF (10u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP11 */
#define IFX_CAN_N_TX_BRP_TRP11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP11 */
#define IFX_CAN_N_TX_BRP_TRP11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP11 */
#define IFX_CAN_N_TX_BRP_TRP11_OFF (11u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP12 */
#define IFX_CAN_N_TX_BRP_TRP12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP12 */
#define IFX_CAN_N_TX_BRP_TRP12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP12 */
#define IFX_CAN_N_TX_BRP_TRP12_OFF (12u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP13 */
#define IFX_CAN_N_TX_BRP_TRP13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP13 */
#define IFX_CAN_N_TX_BRP_TRP13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP13 */
#define IFX_CAN_N_TX_BRP_TRP13_OFF (13u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP14 */
#define IFX_CAN_N_TX_BRP_TRP14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP14 */
#define IFX_CAN_N_TX_BRP_TRP14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP14 */
#define IFX_CAN_N_TX_BRP_TRP14_OFF (14u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP15 */
#define IFX_CAN_N_TX_BRP_TRP15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP15 */
#define IFX_CAN_N_TX_BRP_TRP15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP15 */
#define IFX_CAN_N_TX_BRP_TRP15_OFF (15u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP16 */
#define IFX_CAN_N_TX_BRP_TRP16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP16 */
#define IFX_CAN_N_TX_BRP_TRP16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP16 */
#define IFX_CAN_N_TX_BRP_TRP16_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP17 */
#define IFX_CAN_N_TX_BRP_TRP17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP17 */
#define IFX_CAN_N_TX_BRP_TRP17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP17 */
#define IFX_CAN_N_TX_BRP_TRP17_OFF (17u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP18 */
#define IFX_CAN_N_TX_BRP_TRP18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP18 */
#define IFX_CAN_N_TX_BRP_TRP18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP18 */
#define IFX_CAN_N_TX_BRP_TRP18_OFF (18u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP19 */
#define IFX_CAN_N_TX_BRP_TRP19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP19 */
#define IFX_CAN_N_TX_BRP_TRP19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP19 */
#define IFX_CAN_N_TX_BRP_TRP19_OFF (19u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP20 */
#define IFX_CAN_N_TX_BRP_TRP20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP20 */
#define IFX_CAN_N_TX_BRP_TRP20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP20 */
#define IFX_CAN_N_TX_BRP_TRP20_OFF (20u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP21 */
#define IFX_CAN_N_TX_BRP_TRP21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP21 */
#define IFX_CAN_N_TX_BRP_TRP21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP21 */
#define IFX_CAN_N_TX_BRP_TRP21_OFF (21u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP22 */
#define IFX_CAN_N_TX_BRP_TRP22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP22 */
#define IFX_CAN_N_TX_BRP_TRP22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP22 */
#define IFX_CAN_N_TX_BRP_TRP22_OFF (22u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP23 */
#define IFX_CAN_N_TX_BRP_TRP23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP23 */
#define IFX_CAN_N_TX_BRP_TRP23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP23 */
#define IFX_CAN_N_TX_BRP_TRP23_OFF (23u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP24 */
#define IFX_CAN_N_TX_BRP_TRP24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP24 */
#define IFX_CAN_N_TX_BRP_TRP24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP24 */
#define IFX_CAN_N_TX_BRP_TRP24_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP25 */
#define IFX_CAN_N_TX_BRP_TRP25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP25 */
#define IFX_CAN_N_TX_BRP_TRP25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP25 */
#define IFX_CAN_N_TX_BRP_TRP25_OFF (25u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP26 */
#define IFX_CAN_N_TX_BRP_TRP26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP26 */
#define IFX_CAN_N_TX_BRP_TRP26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP26 */
#define IFX_CAN_N_TX_BRP_TRP26_OFF (26u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP27 */
#define IFX_CAN_N_TX_BRP_TRP27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP27 */
#define IFX_CAN_N_TX_BRP_TRP27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP27 */
#define IFX_CAN_N_TX_BRP_TRP27_OFF (27u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP28 */
#define IFX_CAN_N_TX_BRP_TRP28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP28 */
#define IFX_CAN_N_TX_BRP_TRP28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP28 */
#define IFX_CAN_N_TX_BRP_TRP28_OFF (28u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP29 */
#define IFX_CAN_N_TX_BRP_TRP29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP29 */
#define IFX_CAN_N_TX_BRP_TRP29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP29 */
#define IFX_CAN_N_TX_BRP_TRP29_OFF (29u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP30 */
#define IFX_CAN_N_TX_BRP_TRP30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP30 */
#define IFX_CAN_N_TX_BRP_TRP30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP30 */
#define IFX_CAN_N_TX_BRP_TRP30_OFF (30u)

/** \brief Length for Ifx_CAN_N_TX_BRP_Bits.TRP31 */
#define IFX_CAN_N_TX_BRP_TRP31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BRP_Bits.TRP31 */
#define IFX_CAN_N_TX_BRP_TRP31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BRP_Bits.TRP31 */
#define IFX_CAN_N_TX_BRP_TRP31_OFF (31u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR0 */
#define IFX_CAN_N_TX_BAR_AR0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR0 */
#define IFX_CAN_N_TX_BAR_AR0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR0 */
#define IFX_CAN_N_TX_BAR_AR0_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR1 */
#define IFX_CAN_N_TX_BAR_AR1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR1 */
#define IFX_CAN_N_TX_BAR_AR1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR1 */
#define IFX_CAN_N_TX_BAR_AR1_OFF (1u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR2 */
#define IFX_CAN_N_TX_BAR_AR2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR2 */
#define IFX_CAN_N_TX_BAR_AR2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR2 */
#define IFX_CAN_N_TX_BAR_AR2_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR3 */
#define IFX_CAN_N_TX_BAR_AR3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR3 */
#define IFX_CAN_N_TX_BAR_AR3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR3 */
#define IFX_CAN_N_TX_BAR_AR3_OFF (3u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR4 */
#define IFX_CAN_N_TX_BAR_AR4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR4 */
#define IFX_CAN_N_TX_BAR_AR4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR4 */
#define IFX_CAN_N_TX_BAR_AR4_OFF (4u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR5 */
#define IFX_CAN_N_TX_BAR_AR5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR5 */
#define IFX_CAN_N_TX_BAR_AR5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR5 */
#define IFX_CAN_N_TX_BAR_AR5_OFF (5u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR6 */
#define IFX_CAN_N_TX_BAR_AR6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR6 */
#define IFX_CAN_N_TX_BAR_AR6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR6 */
#define IFX_CAN_N_TX_BAR_AR6_OFF (6u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR7 */
#define IFX_CAN_N_TX_BAR_AR7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR7 */
#define IFX_CAN_N_TX_BAR_AR7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR7 */
#define IFX_CAN_N_TX_BAR_AR7_OFF (7u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR8 */
#define IFX_CAN_N_TX_BAR_AR8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR8 */
#define IFX_CAN_N_TX_BAR_AR8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR8 */
#define IFX_CAN_N_TX_BAR_AR8_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR9 */
#define IFX_CAN_N_TX_BAR_AR9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR9 */
#define IFX_CAN_N_TX_BAR_AR9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR9 */
#define IFX_CAN_N_TX_BAR_AR9_OFF (9u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR10 */
#define IFX_CAN_N_TX_BAR_AR10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR10 */
#define IFX_CAN_N_TX_BAR_AR10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR10 */
#define IFX_CAN_N_TX_BAR_AR10_OFF (10u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR11 */
#define IFX_CAN_N_TX_BAR_AR11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR11 */
#define IFX_CAN_N_TX_BAR_AR11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR11 */
#define IFX_CAN_N_TX_BAR_AR11_OFF (11u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR12 */
#define IFX_CAN_N_TX_BAR_AR12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR12 */
#define IFX_CAN_N_TX_BAR_AR12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR12 */
#define IFX_CAN_N_TX_BAR_AR12_OFF (12u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR13 */
#define IFX_CAN_N_TX_BAR_AR13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR13 */
#define IFX_CAN_N_TX_BAR_AR13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR13 */
#define IFX_CAN_N_TX_BAR_AR13_OFF (13u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR14 */
#define IFX_CAN_N_TX_BAR_AR14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR14 */
#define IFX_CAN_N_TX_BAR_AR14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR14 */
#define IFX_CAN_N_TX_BAR_AR14_OFF (14u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR15 */
#define IFX_CAN_N_TX_BAR_AR15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR15 */
#define IFX_CAN_N_TX_BAR_AR15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR15 */
#define IFX_CAN_N_TX_BAR_AR15_OFF (15u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR16 */
#define IFX_CAN_N_TX_BAR_AR16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR16 */
#define IFX_CAN_N_TX_BAR_AR16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR16 */
#define IFX_CAN_N_TX_BAR_AR16_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR17 */
#define IFX_CAN_N_TX_BAR_AR17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR17 */
#define IFX_CAN_N_TX_BAR_AR17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR17 */
#define IFX_CAN_N_TX_BAR_AR17_OFF (17u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR18 */
#define IFX_CAN_N_TX_BAR_AR18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR18 */
#define IFX_CAN_N_TX_BAR_AR18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR18 */
#define IFX_CAN_N_TX_BAR_AR18_OFF (18u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR19 */
#define IFX_CAN_N_TX_BAR_AR19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR19 */
#define IFX_CAN_N_TX_BAR_AR19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR19 */
#define IFX_CAN_N_TX_BAR_AR19_OFF (19u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR20 */
#define IFX_CAN_N_TX_BAR_AR20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR20 */
#define IFX_CAN_N_TX_BAR_AR20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR20 */
#define IFX_CAN_N_TX_BAR_AR20_OFF (20u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR21 */
#define IFX_CAN_N_TX_BAR_AR21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR21 */
#define IFX_CAN_N_TX_BAR_AR21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR21 */
#define IFX_CAN_N_TX_BAR_AR21_OFF (21u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR22 */
#define IFX_CAN_N_TX_BAR_AR22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR22 */
#define IFX_CAN_N_TX_BAR_AR22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR22 */
#define IFX_CAN_N_TX_BAR_AR22_OFF (22u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR23 */
#define IFX_CAN_N_TX_BAR_AR23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR23 */
#define IFX_CAN_N_TX_BAR_AR23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR23 */
#define IFX_CAN_N_TX_BAR_AR23_OFF (23u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR24 */
#define IFX_CAN_N_TX_BAR_AR24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR24 */
#define IFX_CAN_N_TX_BAR_AR24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR24 */
#define IFX_CAN_N_TX_BAR_AR24_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR25 */
#define IFX_CAN_N_TX_BAR_AR25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR25 */
#define IFX_CAN_N_TX_BAR_AR25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR25 */
#define IFX_CAN_N_TX_BAR_AR25_OFF (25u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR26 */
#define IFX_CAN_N_TX_BAR_AR26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR26 */
#define IFX_CAN_N_TX_BAR_AR26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR26 */
#define IFX_CAN_N_TX_BAR_AR26_OFF (26u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR27 */
#define IFX_CAN_N_TX_BAR_AR27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR27 */
#define IFX_CAN_N_TX_BAR_AR27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR27 */
#define IFX_CAN_N_TX_BAR_AR27_OFF (27u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR28 */
#define IFX_CAN_N_TX_BAR_AR28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR28 */
#define IFX_CAN_N_TX_BAR_AR28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR28 */
#define IFX_CAN_N_TX_BAR_AR28_OFF (28u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR29 */
#define IFX_CAN_N_TX_BAR_AR29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR29 */
#define IFX_CAN_N_TX_BAR_AR29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR29 */
#define IFX_CAN_N_TX_BAR_AR29_OFF (29u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR30 */
#define IFX_CAN_N_TX_BAR_AR30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR30 */
#define IFX_CAN_N_TX_BAR_AR30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR30 */
#define IFX_CAN_N_TX_BAR_AR30_OFF (30u)

/** \brief Length for Ifx_CAN_N_TX_BAR_Bits.AR31 */
#define IFX_CAN_N_TX_BAR_AR31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BAR_Bits.AR31 */
#define IFX_CAN_N_TX_BAR_AR31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BAR_Bits.AR31 */
#define IFX_CAN_N_TX_BAR_AR31_OFF (31u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR0 */
#define IFX_CAN_N_TX_BCR_CR0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR0 */
#define IFX_CAN_N_TX_BCR_CR0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR0 */
#define IFX_CAN_N_TX_BCR_CR0_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR1 */
#define IFX_CAN_N_TX_BCR_CR1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR1 */
#define IFX_CAN_N_TX_BCR_CR1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR1 */
#define IFX_CAN_N_TX_BCR_CR1_OFF (1u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR2 */
#define IFX_CAN_N_TX_BCR_CR2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR2 */
#define IFX_CAN_N_TX_BCR_CR2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR2 */
#define IFX_CAN_N_TX_BCR_CR2_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR3 */
#define IFX_CAN_N_TX_BCR_CR3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR3 */
#define IFX_CAN_N_TX_BCR_CR3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR3 */
#define IFX_CAN_N_TX_BCR_CR3_OFF (3u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR4 */
#define IFX_CAN_N_TX_BCR_CR4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR4 */
#define IFX_CAN_N_TX_BCR_CR4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR4 */
#define IFX_CAN_N_TX_BCR_CR4_OFF (4u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR5 */
#define IFX_CAN_N_TX_BCR_CR5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR5 */
#define IFX_CAN_N_TX_BCR_CR5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR5 */
#define IFX_CAN_N_TX_BCR_CR5_OFF (5u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR6 */
#define IFX_CAN_N_TX_BCR_CR6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR6 */
#define IFX_CAN_N_TX_BCR_CR6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR6 */
#define IFX_CAN_N_TX_BCR_CR6_OFF (6u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR7 */
#define IFX_CAN_N_TX_BCR_CR7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR7 */
#define IFX_CAN_N_TX_BCR_CR7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR7 */
#define IFX_CAN_N_TX_BCR_CR7_OFF (7u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR8 */
#define IFX_CAN_N_TX_BCR_CR8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR8 */
#define IFX_CAN_N_TX_BCR_CR8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR8 */
#define IFX_CAN_N_TX_BCR_CR8_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR9 */
#define IFX_CAN_N_TX_BCR_CR9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR9 */
#define IFX_CAN_N_TX_BCR_CR9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR9 */
#define IFX_CAN_N_TX_BCR_CR9_OFF (9u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR10 */
#define IFX_CAN_N_TX_BCR_CR10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR10 */
#define IFX_CAN_N_TX_BCR_CR10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR10 */
#define IFX_CAN_N_TX_BCR_CR10_OFF (10u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR11 */
#define IFX_CAN_N_TX_BCR_CR11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR11 */
#define IFX_CAN_N_TX_BCR_CR11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR11 */
#define IFX_CAN_N_TX_BCR_CR11_OFF (11u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR12 */
#define IFX_CAN_N_TX_BCR_CR12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR12 */
#define IFX_CAN_N_TX_BCR_CR12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR12 */
#define IFX_CAN_N_TX_BCR_CR12_OFF (12u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR13 */
#define IFX_CAN_N_TX_BCR_CR13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR13 */
#define IFX_CAN_N_TX_BCR_CR13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR13 */
#define IFX_CAN_N_TX_BCR_CR13_OFF (13u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR14 */
#define IFX_CAN_N_TX_BCR_CR14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR14 */
#define IFX_CAN_N_TX_BCR_CR14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR14 */
#define IFX_CAN_N_TX_BCR_CR14_OFF (14u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR15 */
#define IFX_CAN_N_TX_BCR_CR15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR15 */
#define IFX_CAN_N_TX_BCR_CR15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR15 */
#define IFX_CAN_N_TX_BCR_CR15_OFF (15u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR16 */
#define IFX_CAN_N_TX_BCR_CR16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR16 */
#define IFX_CAN_N_TX_BCR_CR16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR16 */
#define IFX_CAN_N_TX_BCR_CR16_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR17 */
#define IFX_CAN_N_TX_BCR_CR17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR17 */
#define IFX_CAN_N_TX_BCR_CR17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR17 */
#define IFX_CAN_N_TX_BCR_CR17_OFF (17u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR18 */
#define IFX_CAN_N_TX_BCR_CR18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR18 */
#define IFX_CAN_N_TX_BCR_CR18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR18 */
#define IFX_CAN_N_TX_BCR_CR18_OFF (18u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR19 */
#define IFX_CAN_N_TX_BCR_CR19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR19 */
#define IFX_CAN_N_TX_BCR_CR19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR19 */
#define IFX_CAN_N_TX_BCR_CR19_OFF (19u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR20 */
#define IFX_CAN_N_TX_BCR_CR20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR20 */
#define IFX_CAN_N_TX_BCR_CR20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR20 */
#define IFX_CAN_N_TX_BCR_CR20_OFF (20u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR21 */
#define IFX_CAN_N_TX_BCR_CR21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR21 */
#define IFX_CAN_N_TX_BCR_CR21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR21 */
#define IFX_CAN_N_TX_BCR_CR21_OFF (21u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR22 */
#define IFX_CAN_N_TX_BCR_CR22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR22 */
#define IFX_CAN_N_TX_BCR_CR22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR22 */
#define IFX_CAN_N_TX_BCR_CR22_OFF (22u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR23 */
#define IFX_CAN_N_TX_BCR_CR23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR23 */
#define IFX_CAN_N_TX_BCR_CR23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR23 */
#define IFX_CAN_N_TX_BCR_CR23_OFF (23u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR24 */
#define IFX_CAN_N_TX_BCR_CR24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR24 */
#define IFX_CAN_N_TX_BCR_CR24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR24 */
#define IFX_CAN_N_TX_BCR_CR24_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR25 */
#define IFX_CAN_N_TX_BCR_CR25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR25 */
#define IFX_CAN_N_TX_BCR_CR25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR25 */
#define IFX_CAN_N_TX_BCR_CR25_OFF (25u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR26 */
#define IFX_CAN_N_TX_BCR_CR26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR26 */
#define IFX_CAN_N_TX_BCR_CR26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR26 */
#define IFX_CAN_N_TX_BCR_CR26_OFF (26u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR27 */
#define IFX_CAN_N_TX_BCR_CR27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR27 */
#define IFX_CAN_N_TX_BCR_CR27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR27 */
#define IFX_CAN_N_TX_BCR_CR27_OFF (27u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR28 */
#define IFX_CAN_N_TX_BCR_CR28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR28 */
#define IFX_CAN_N_TX_BCR_CR28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR28 */
#define IFX_CAN_N_TX_BCR_CR28_OFF (28u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR29 */
#define IFX_CAN_N_TX_BCR_CR29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR29 */
#define IFX_CAN_N_TX_BCR_CR29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR29 */
#define IFX_CAN_N_TX_BCR_CR29_OFF (29u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR30 */
#define IFX_CAN_N_TX_BCR_CR30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR30 */
#define IFX_CAN_N_TX_BCR_CR30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR30 */
#define IFX_CAN_N_TX_BCR_CR30_OFF (30u)

/** \brief Length for Ifx_CAN_N_TX_BCR_Bits.CR31 */
#define IFX_CAN_N_TX_BCR_CR31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCR_Bits.CR31 */
#define IFX_CAN_N_TX_BCR_CR31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCR_Bits.CR31 */
#define IFX_CAN_N_TX_BCR_CR31_OFF (31u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO0 */
#define IFX_CAN_N_TX_BTO_TO0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO0 */
#define IFX_CAN_N_TX_BTO_TO0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO0 */
#define IFX_CAN_N_TX_BTO_TO0_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO1 */
#define IFX_CAN_N_TX_BTO_TO1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO1 */
#define IFX_CAN_N_TX_BTO_TO1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO1 */
#define IFX_CAN_N_TX_BTO_TO1_OFF (1u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO2 */
#define IFX_CAN_N_TX_BTO_TO2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO2 */
#define IFX_CAN_N_TX_BTO_TO2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO2 */
#define IFX_CAN_N_TX_BTO_TO2_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO3 */
#define IFX_CAN_N_TX_BTO_TO3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO3 */
#define IFX_CAN_N_TX_BTO_TO3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO3 */
#define IFX_CAN_N_TX_BTO_TO3_OFF (3u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO4 */
#define IFX_CAN_N_TX_BTO_TO4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO4 */
#define IFX_CAN_N_TX_BTO_TO4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO4 */
#define IFX_CAN_N_TX_BTO_TO4_OFF (4u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO5 */
#define IFX_CAN_N_TX_BTO_TO5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO5 */
#define IFX_CAN_N_TX_BTO_TO5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO5 */
#define IFX_CAN_N_TX_BTO_TO5_OFF (5u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO6 */
#define IFX_CAN_N_TX_BTO_TO6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO6 */
#define IFX_CAN_N_TX_BTO_TO6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO6 */
#define IFX_CAN_N_TX_BTO_TO6_OFF (6u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO7 */
#define IFX_CAN_N_TX_BTO_TO7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO7 */
#define IFX_CAN_N_TX_BTO_TO7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO7 */
#define IFX_CAN_N_TX_BTO_TO7_OFF (7u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO8 */
#define IFX_CAN_N_TX_BTO_TO8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO8 */
#define IFX_CAN_N_TX_BTO_TO8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO8 */
#define IFX_CAN_N_TX_BTO_TO8_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO9 */
#define IFX_CAN_N_TX_BTO_TO9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO9 */
#define IFX_CAN_N_TX_BTO_TO9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO9 */
#define IFX_CAN_N_TX_BTO_TO9_OFF (9u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO10 */
#define IFX_CAN_N_TX_BTO_TO10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO10 */
#define IFX_CAN_N_TX_BTO_TO10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO10 */
#define IFX_CAN_N_TX_BTO_TO10_OFF (10u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO11 */
#define IFX_CAN_N_TX_BTO_TO11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO11 */
#define IFX_CAN_N_TX_BTO_TO11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO11 */
#define IFX_CAN_N_TX_BTO_TO11_OFF (11u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO12 */
#define IFX_CAN_N_TX_BTO_TO12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO12 */
#define IFX_CAN_N_TX_BTO_TO12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO12 */
#define IFX_CAN_N_TX_BTO_TO12_OFF (12u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO13 */
#define IFX_CAN_N_TX_BTO_TO13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO13 */
#define IFX_CAN_N_TX_BTO_TO13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO13 */
#define IFX_CAN_N_TX_BTO_TO13_OFF (13u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO14 */
#define IFX_CAN_N_TX_BTO_TO14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO14 */
#define IFX_CAN_N_TX_BTO_TO14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO14 */
#define IFX_CAN_N_TX_BTO_TO14_OFF (14u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO15 */
#define IFX_CAN_N_TX_BTO_TO15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO15 */
#define IFX_CAN_N_TX_BTO_TO15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO15 */
#define IFX_CAN_N_TX_BTO_TO15_OFF (15u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO16 */
#define IFX_CAN_N_TX_BTO_TO16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO16 */
#define IFX_CAN_N_TX_BTO_TO16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO16 */
#define IFX_CAN_N_TX_BTO_TO16_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO17 */
#define IFX_CAN_N_TX_BTO_TO17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO17 */
#define IFX_CAN_N_TX_BTO_TO17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO17 */
#define IFX_CAN_N_TX_BTO_TO17_OFF (17u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO18 */
#define IFX_CAN_N_TX_BTO_TO18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO18 */
#define IFX_CAN_N_TX_BTO_TO18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO18 */
#define IFX_CAN_N_TX_BTO_TO18_OFF (18u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO19 */
#define IFX_CAN_N_TX_BTO_TO19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO19 */
#define IFX_CAN_N_TX_BTO_TO19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO19 */
#define IFX_CAN_N_TX_BTO_TO19_OFF (19u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO20 */
#define IFX_CAN_N_TX_BTO_TO20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO20 */
#define IFX_CAN_N_TX_BTO_TO20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO20 */
#define IFX_CAN_N_TX_BTO_TO20_OFF (20u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO21 */
#define IFX_CAN_N_TX_BTO_TO21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO21 */
#define IFX_CAN_N_TX_BTO_TO21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO21 */
#define IFX_CAN_N_TX_BTO_TO21_OFF (21u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO22 */
#define IFX_CAN_N_TX_BTO_TO22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO22 */
#define IFX_CAN_N_TX_BTO_TO22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO22 */
#define IFX_CAN_N_TX_BTO_TO22_OFF (22u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO23 */
#define IFX_CAN_N_TX_BTO_TO23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO23 */
#define IFX_CAN_N_TX_BTO_TO23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO23 */
#define IFX_CAN_N_TX_BTO_TO23_OFF (23u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO24 */
#define IFX_CAN_N_TX_BTO_TO24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO24 */
#define IFX_CAN_N_TX_BTO_TO24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO24 */
#define IFX_CAN_N_TX_BTO_TO24_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO25 */
#define IFX_CAN_N_TX_BTO_TO25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO25 */
#define IFX_CAN_N_TX_BTO_TO25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO25 */
#define IFX_CAN_N_TX_BTO_TO25_OFF (25u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO26 */
#define IFX_CAN_N_TX_BTO_TO26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO26 */
#define IFX_CAN_N_TX_BTO_TO26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO26 */
#define IFX_CAN_N_TX_BTO_TO26_OFF (26u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO27 */
#define IFX_CAN_N_TX_BTO_TO27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO27 */
#define IFX_CAN_N_TX_BTO_TO27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO27 */
#define IFX_CAN_N_TX_BTO_TO27_OFF (27u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO28 */
#define IFX_CAN_N_TX_BTO_TO28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO28 */
#define IFX_CAN_N_TX_BTO_TO28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO28 */
#define IFX_CAN_N_TX_BTO_TO28_OFF (28u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO29 */
#define IFX_CAN_N_TX_BTO_TO29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO29 */
#define IFX_CAN_N_TX_BTO_TO29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO29 */
#define IFX_CAN_N_TX_BTO_TO29_OFF (29u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO30 */
#define IFX_CAN_N_TX_BTO_TO30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO30 */
#define IFX_CAN_N_TX_BTO_TO30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO30 */
#define IFX_CAN_N_TX_BTO_TO30_OFF (30u)

/** \brief Length for Ifx_CAN_N_TX_BTO_Bits.TO31 */
#define IFX_CAN_N_TX_BTO_TO31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTO_Bits.TO31 */
#define IFX_CAN_N_TX_BTO_TO31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTO_Bits.TO31 */
#define IFX_CAN_N_TX_BTO_TO31_OFF (31u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF0 */
#define IFX_CAN_N_TX_BCF_CF0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF0 */
#define IFX_CAN_N_TX_BCF_CF0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF0 */
#define IFX_CAN_N_TX_BCF_CF0_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF1 */
#define IFX_CAN_N_TX_BCF_CF1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF1 */
#define IFX_CAN_N_TX_BCF_CF1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF1 */
#define IFX_CAN_N_TX_BCF_CF1_OFF (1u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF2 */
#define IFX_CAN_N_TX_BCF_CF2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF2 */
#define IFX_CAN_N_TX_BCF_CF2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF2 */
#define IFX_CAN_N_TX_BCF_CF2_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF3 */
#define IFX_CAN_N_TX_BCF_CF3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF3 */
#define IFX_CAN_N_TX_BCF_CF3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF3 */
#define IFX_CAN_N_TX_BCF_CF3_OFF (3u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF4 */
#define IFX_CAN_N_TX_BCF_CF4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF4 */
#define IFX_CAN_N_TX_BCF_CF4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF4 */
#define IFX_CAN_N_TX_BCF_CF4_OFF (4u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF5 */
#define IFX_CAN_N_TX_BCF_CF5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF5 */
#define IFX_CAN_N_TX_BCF_CF5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF5 */
#define IFX_CAN_N_TX_BCF_CF5_OFF (5u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF6 */
#define IFX_CAN_N_TX_BCF_CF6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF6 */
#define IFX_CAN_N_TX_BCF_CF6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF6 */
#define IFX_CAN_N_TX_BCF_CF6_OFF (6u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF7 */
#define IFX_CAN_N_TX_BCF_CF7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF7 */
#define IFX_CAN_N_TX_BCF_CF7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF7 */
#define IFX_CAN_N_TX_BCF_CF7_OFF (7u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF8 */
#define IFX_CAN_N_TX_BCF_CF8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF8 */
#define IFX_CAN_N_TX_BCF_CF8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF8 */
#define IFX_CAN_N_TX_BCF_CF8_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF9 */
#define IFX_CAN_N_TX_BCF_CF9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF9 */
#define IFX_CAN_N_TX_BCF_CF9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF9 */
#define IFX_CAN_N_TX_BCF_CF9_OFF (9u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF10 */
#define IFX_CAN_N_TX_BCF_CF10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF10 */
#define IFX_CAN_N_TX_BCF_CF10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF10 */
#define IFX_CAN_N_TX_BCF_CF10_OFF (10u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF11 */
#define IFX_CAN_N_TX_BCF_CF11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF11 */
#define IFX_CAN_N_TX_BCF_CF11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF11 */
#define IFX_CAN_N_TX_BCF_CF11_OFF (11u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF12 */
#define IFX_CAN_N_TX_BCF_CF12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF12 */
#define IFX_CAN_N_TX_BCF_CF12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF12 */
#define IFX_CAN_N_TX_BCF_CF12_OFF (12u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF13 */
#define IFX_CAN_N_TX_BCF_CF13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF13 */
#define IFX_CAN_N_TX_BCF_CF13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF13 */
#define IFX_CAN_N_TX_BCF_CF13_OFF (13u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF14 */
#define IFX_CAN_N_TX_BCF_CF14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF14 */
#define IFX_CAN_N_TX_BCF_CF14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF14 */
#define IFX_CAN_N_TX_BCF_CF14_OFF (14u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF15 */
#define IFX_CAN_N_TX_BCF_CF15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF15 */
#define IFX_CAN_N_TX_BCF_CF15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF15 */
#define IFX_CAN_N_TX_BCF_CF15_OFF (15u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF16 */
#define IFX_CAN_N_TX_BCF_CF16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF16 */
#define IFX_CAN_N_TX_BCF_CF16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF16 */
#define IFX_CAN_N_TX_BCF_CF16_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF17 */
#define IFX_CAN_N_TX_BCF_CF17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF17 */
#define IFX_CAN_N_TX_BCF_CF17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF17 */
#define IFX_CAN_N_TX_BCF_CF17_OFF (17u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF18 */
#define IFX_CAN_N_TX_BCF_CF18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF18 */
#define IFX_CAN_N_TX_BCF_CF18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF18 */
#define IFX_CAN_N_TX_BCF_CF18_OFF (18u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF19 */
#define IFX_CAN_N_TX_BCF_CF19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF19 */
#define IFX_CAN_N_TX_BCF_CF19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF19 */
#define IFX_CAN_N_TX_BCF_CF19_OFF (19u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF20 */
#define IFX_CAN_N_TX_BCF_CF20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF20 */
#define IFX_CAN_N_TX_BCF_CF20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF20 */
#define IFX_CAN_N_TX_BCF_CF20_OFF (20u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF21 */
#define IFX_CAN_N_TX_BCF_CF21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF21 */
#define IFX_CAN_N_TX_BCF_CF21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF21 */
#define IFX_CAN_N_TX_BCF_CF21_OFF (21u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF22 */
#define IFX_CAN_N_TX_BCF_CF22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF22 */
#define IFX_CAN_N_TX_BCF_CF22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF22 */
#define IFX_CAN_N_TX_BCF_CF22_OFF (22u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF23 */
#define IFX_CAN_N_TX_BCF_CF23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF23 */
#define IFX_CAN_N_TX_BCF_CF23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF23 */
#define IFX_CAN_N_TX_BCF_CF23_OFF (23u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF24 */
#define IFX_CAN_N_TX_BCF_CF24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF24 */
#define IFX_CAN_N_TX_BCF_CF24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF24 */
#define IFX_CAN_N_TX_BCF_CF24_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF25 */
#define IFX_CAN_N_TX_BCF_CF25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF25 */
#define IFX_CAN_N_TX_BCF_CF25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF25 */
#define IFX_CAN_N_TX_BCF_CF25_OFF (25u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF26 */
#define IFX_CAN_N_TX_BCF_CF26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF26 */
#define IFX_CAN_N_TX_BCF_CF26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF26 */
#define IFX_CAN_N_TX_BCF_CF26_OFF (26u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF27 */
#define IFX_CAN_N_TX_BCF_CF27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF27 */
#define IFX_CAN_N_TX_BCF_CF27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF27 */
#define IFX_CAN_N_TX_BCF_CF27_OFF (27u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF28 */
#define IFX_CAN_N_TX_BCF_CF28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF28 */
#define IFX_CAN_N_TX_BCF_CF28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF28 */
#define IFX_CAN_N_TX_BCF_CF28_OFF (28u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF29 */
#define IFX_CAN_N_TX_BCF_CF29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF29 */
#define IFX_CAN_N_TX_BCF_CF29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF29 */
#define IFX_CAN_N_TX_BCF_CF29_OFF (29u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF30 */
#define IFX_CAN_N_TX_BCF_CF30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF30 */
#define IFX_CAN_N_TX_BCF_CF30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF30 */
#define IFX_CAN_N_TX_BCF_CF30_OFF (30u)

/** \brief Length for Ifx_CAN_N_TX_BCF_Bits.CF31 */
#define IFX_CAN_N_TX_BCF_CF31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCF_Bits.CF31 */
#define IFX_CAN_N_TX_BCF_CF31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCF_Bits.CF31 */
#define IFX_CAN_N_TX_BCF_CF31_OFF (31u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE0 */
#define IFX_CAN_N_TX_BTIE_TIE0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE0 */
#define IFX_CAN_N_TX_BTIE_TIE0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE0 */
#define IFX_CAN_N_TX_BTIE_TIE0_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE1 */
#define IFX_CAN_N_TX_BTIE_TIE1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE1 */
#define IFX_CAN_N_TX_BTIE_TIE1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE1 */
#define IFX_CAN_N_TX_BTIE_TIE1_OFF (1u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE2 */
#define IFX_CAN_N_TX_BTIE_TIE2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE2 */
#define IFX_CAN_N_TX_BTIE_TIE2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE2 */
#define IFX_CAN_N_TX_BTIE_TIE2_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE3 */
#define IFX_CAN_N_TX_BTIE_TIE3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE3 */
#define IFX_CAN_N_TX_BTIE_TIE3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE3 */
#define IFX_CAN_N_TX_BTIE_TIE3_OFF (3u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE4 */
#define IFX_CAN_N_TX_BTIE_TIE4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE4 */
#define IFX_CAN_N_TX_BTIE_TIE4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE4 */
#define IFX_CAN_N_TX_BTIE_TIE4_OFF (4u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE5 */
#define IFX_CAN_N_TX_BTIE_TIE5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE5 */
#define IFX_CAN_N_TX_BTIE_TIE5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE5 */
#define IFX_CAN_N_TX_BTIE_TIE5_OFF (5u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE6 */
#define IFX_CAN_N_TX_BTIE_TIE6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE6 */
#define IFX_CAN_N_TX_BTIE_TIE6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE6 */
#define IFX_CAN_N_TX_BTIE_TIE6_OFF (6u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE7 */
#define IFX_CAN_N_TX_BTIE_TIE7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE7 */
#define IFX_CAN_N_TX_BTIE_TIE7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE7 */
#define IFX_CAN_N_TX_BTIE_TIE7_OFF (7u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE8 */
#define IFX_CAN_N_TX_BTIE_TIE8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE8 */
#define IFX_CAN_N_TX_BTIE_TIE8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE8 */
#define IFX_CAN_N_TX_BTIE_TIE8_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE9 */
#define IFX_CAN_N_TX_BTIE_TIE9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE9 */
#define IFX_CAN_N_TX_BTIE_TIE9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE9 */
#define IFX_CAN_N_TX_BTIE_TIE9_OFF (9u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE10 */
#define IFX_CAN_N_TX_BTIE_TIE10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE10 */
#define IFX_CAN_N_TX_BTIE_TIE10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE10 */
#define IFX_CAN_N_TX_BTIE_TIE10_OFF (10u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE11 */
#define IFX_CAN_N_TX_BTIE_TIE11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE11 */
#define IFX_CAN_N_TX_BTIE_TIE11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE11 */
#define IFX_CAN_N_TX_BTIE_TIE11_OFF (11u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE12 */
#define IFX_CAN_N_TX_BTIE_TIE12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE12 */
#define IFX_CAN_N_TX_BTIE_TIE12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE12 */
#define IFX_CAN_N_TX_BTIE_TIE12_OFF (12u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE13 */
#define IFX_CAN_N_TX_BTIE_TIE13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE13 */
#define IFX_CAN_N_TX_BTIE_TIE13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE13 */
#define IFX_CAN_N_TX_BTIE_TIE13_OFF (13u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE14 */
#define IFX_CAN_N_TX_BTIE_TIE14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE14 */
#define IFX_CAN_N_TX_BTIE_TIE14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE14 */
#define IFX_CAN_N_TX_BTIE_TIE14_OFF (14u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE15 */
#define IFX_CAN_N_TX_BTIE_TIE15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE15 */
#define IFX_CAN_N_TX_BTIE_TIE15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE15 */
#define IFX_CAN_N_TX_BTIE_TIE15_OFF (15u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE16 */
#define IFX_CAN_N_TX_BTIE_TIE16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE16 */
#define IFX_CAN_N_TX_BTIE_TIE16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE16 */
#define IFX_CAN_N_TX_BTIE_TIE16_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE17 */
#define IFX_CAN_N_TX_BTIE_TIE17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE17 */
#define IFX_CAN_N_TX_BTIE_TIE17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE17 */
#define IFX_CAN_N_TX_BTIE_TIE17_OFF (17u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE18 */
#define IFX_CAN_N_TX_BTIE_TIE18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE18 */
#define IFX_CAN_N_TX_BTIE_TIE18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE18 */
#define IFX_CAN_N_TX_BTIE_TIE18_OFF (18u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE19 */
#define IFX_CAN_N_TX_BTIE_TIE19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE19 */
#define IFX_CAN_N_TX_BTIE_TIE19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE19 */
#define IFX_CAN_N_TX_BTIE_TIE19_OFF (19u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE20 */
#define IFX_CAN_N_TX_BTIE_TIE20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE20 */
#define IFX_CAN_N_TX_BTIE_TIE20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE20 */
#define IFX_CAN_N_TX_BTIE_TIE20_OFF (20u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE21 */
#define IFX_CAN_N_TX_BTIE_TIE21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE21 */
#define IFX_CAN_N_TX_BTIE_TIE21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE21 */
#define IFX_CAN_N_TX_BTIE_TIE21_OFF (21u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE22 */
#define IFX_CAN_N_TX_BTIE_TIE22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE22 */
#define IFX_CAN_N_TX_BTIE_TIE22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE22 */
#define IFX_CAN_N_TX_BTIE_TIE22_OFF (22u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE23 */
#define IFX_CAN_N_TX_BTIE_TIE23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE23 */
#define IFX_CAN_N_TX_BTIE_TIE23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE23 */
#define IFX_CAN_N_TX_BTIE_TIE23_OFF (23u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE24 */
#define IFX_CAN_N_TX_BTIE_TIE24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE24 */
#define IFX_CAN_N_TX_BTIE_TIE24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE24 */
#define IFX_CAN_N_TX_BTIE_TIE24_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE25 */
#define IFX_CAN_N_TX_BTIE_TIE25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE25 */
#define IFX_CAN_N_TX_BTIE_TIE25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE25 */
#define IFX_CAN_N_TX_BTIE_TIE25_OFF (25u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE26 */
#define IFX_CAN_N_TX_BTIE_TIE26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE26 */
#define IFX_CAN_N_TX_BTIE_TIE26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE26 */
#define IFX_CAN_N_TX_BTIE_TIE26_OFF (26u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE27 */
#define IFX_CAN_N_TX_BTIE_TIE27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE27 */
#define IFX_CAN_N_TX_BTIE_TIE27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE27 */
#define IFX_CAN_N_TX_BTIE_TIE27_OFF (27u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE28 */
#define IFX_CAN_N_TX_BTIE_TIE28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE28 */
#define IFX_CAN_N_TX_BTIE_TIE28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE28 */
#define IFX_CAN_N_TX_BTIE_TIE28_OFF (28u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE29 */
#define IFX_CAN_N_TX_BTIE_TIE29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE29 */
#define IFX_CAN_N_TX_BTIE_TIE29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE29 */
#define IFX_CAN_N_TX_BTIE_TIE29_OFF (29u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE30 */
#define IFX_CAN_N_TX_BTIE_TIE30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE30 */
#define IFX_CAN_N_TX_BTIE_TIE30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE30 */
#define IFX_CAN_N_TX_BTIE_TIE30_OFF (30u)

/** \brief Length for Ifx_CAN_N_TX_BTIE_Bits.TIE31 */
#define IFX_CAN_N_TX_BTIE_TIE31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BTIE_Bits.TIE31 */
#define IFX_CAN_N_TX_BTIE_TIE31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BTIE_Bits.TIE31 */
#define IFX_CAN_N_TX_BTIE_TIE31_OFF (31u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE0 */
#define IFX_CAN_N_TX_BCIE_CFIE0_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE0 */
#define IFX_CAN_N_TX_BCIE_CFIE0_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE0 */
#define IFX_CAN_N_TX_BCIE_CFIE0_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE1 */
#define IFX_CAN_N_TX_BCIE_CFIE1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE1 */
#define IFX_CAN_N_TX_BCIE_CFIE1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE1 */
#define IFX_CAN_N_TX_BCIE_CFIE1_OFF (1u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE2 */
#define IFX_CAN_N_TX_BCIE_CFIE2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE2 */
#define IFX_CAN_N_TX_BCIE_CFIE2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE2 */
#define IFX_CAN_N_TX_BCIE_CFIE2_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE3 */
#define IFX_CAN_N_TX_BCIE_CFIE3_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE3 */
#define IFX_CAN_N_TX_BCIE_CFIE3_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE3 */
#define IFX_CAN_N_TX_BCIE_CFIE3_OFF (3u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE4 */
#define IFX_CAN_N_TX_BCIE_CFIE4_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE4 */
#define IFX_CAN_N_TX_BCIE_CFIE4_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE4 */
#define IFX_CAN_N_TX_BCIE_CFIE4_OFF (4u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE5 */
#define IFX_CAN_N_TX_BCIE_CFIE5_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE5 */
#define IFX_CAN_N_TX_BCIE_CFIE5_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE5 */
#define IFX_CAN_N_TX_BCIE_CFIE5_OFF (5u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE6 */
#define IFX_CAN_N_TX_BCIE_CFIE6_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE6 */
#define IFX_CAN_N_TX_BCIE_CFIE6_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE6 */
#define IFX_CAN_N_TX_BCIE_CFIE6_OFF (6u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE7 */
#define IFX_CAN_N_TX_BCIE_CFIE7_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE7 */
#define IFX_CAN_N_TX_BCIE_CFIE7_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE7 */
#define IFX_CAN_N_TX_BCIE_CFIE7_OFF (7u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE8 */
#define IFX_CAN_N_TX_BCIE_CFIE8_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE8 */
#define IFX_CAN_N_TX_BCIE_CFIE8_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE8 */
#define IFX_CAN_N_TX_BCIE_CFIE8_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE9 */
#define IFX_CAN_N_TX_BCIE_CFIE9_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE9 */
#define IFX_CAN_N_TX_BCIE_CFIE9_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE9 */
#define IFX_CAN_N_TX_BCIE_CFIE9_OFF (9u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE10 */
#define IFX_CAN_N_TX_BCIE_CFIE10_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE10 */
#define IFX_CAN_N_TX_BCIE_CFIE10_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE10 */
#define IFX_CAN_N_TX_BCIE_CFIE10_OFF (10u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE11 */
#define IFX_CAN_N_TX_BCIE_CFIE11_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE11 */
#define IFX_CAN_N_TX_BCIE_CFIE11_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE11 */
#define IFX_CAN_N_TX_BCIE_CFIE11_OFF (11u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE12 */
#define IFX_CAN_N_TX_BCIE_CFIE12_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE12 */
#define IFX_CAN_N_TX_BCIE_CFIE12_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE12 */
#define IFX_CAN_N_TX_BCIE_CFIE12_OFF (12u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE13 */
#define IFX_CAN_N_TX_BCIE_CFIE13_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE13 */
#define IFX_CAN_N_TX_BCIE_CFIE13_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE13 */
#define IFX_CAN_N_TX_BCIE_CFIE13_OFF (13u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE14 */
#define IFX_CAN_N_TX_BCIE_CFIE14_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE14 */
#define IFX_CAN_N_TX_BCIE_CFIE14_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE14 */
#define IFX_CAN_N_TX_BCIE_CFIE14_OFF (14u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE15 */
#define IFX_CAN_N_TX_BCIE_CFIE15_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE15 */
#define IFX_CAN_N_TX_BCIE_CFIE15_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE15 */
#define IFX_CAN_N_TX_BCIE_CFIE15_OFF (15u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE16 */
#define IFX_CAN_N_TX_BCIE_CFIE16_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE16 */
#define IFX_CAN_N_TX_BCIE_CFIE16_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE16 */
#define IFX_CAN_N_TX_BCIE_CFIE16_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE17 */
#define IFX_CAN_N_TX_BCIE_CFIE17_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE17 */
#define IFX_CAN_N_TX_BCIE_CFIE17_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE17 */
#define IFX_CAN_N_TX_BCIE_CFIE17_OFF (17u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE18 */
#define IFX_CAN_N_TX_BCIE_CFIE18_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE18 */
#define IFX_CAN_N_TX_BCIE_CFIE18_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE18 */
#define IFX_CAN_N_TX_BCIE_CFIE18_OFF (18u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE19 */
#define IFX_CAN_N_TX_BCIE_CFIE19_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE19 */
#define IFX_CAN_N_TX_BCIE_CFIE19_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE19 */
#define IFX_CAN_N_TX_BCIE_CFIE19_OFF (19u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE20 */
#define IFX_CAN_N_TX_BCIE_CFIE20_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE20 */
#define IFX_CAN_N_TX_BCIE_CFIE20_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE20 */
#define IFX_CAN_N_TX_BCIE_CFIE20_OFF (20u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE21 */
#define IFX_CAN_N_TX_BCIE_CFIE21_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE21 */
#define IFX_CAN_N_TX_BCIE_CFIE21_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE21 */
#define IFX_CAN_N_TX_BCIE_CFIE21_OFF (21u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE22 */
#define IFX_CAN_N_TX_BCIE_CFIE22_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE22 */
#define IFX_CAN_N_TX_BCIE_CFIE22_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE22 */
#define IFX_CAN_N_TX_BCIE_CFIE22_OFF (22u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE23 */
#define IFX_CAN_N_TX_BCIE_CFIE23_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE23 */
#define IFX_CAN_N_TX_BCIE_CFIE23_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE23 */
#define IFX_CAN_N_TX_BCIE_CFIE23_OFF (23u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE24 */
#define IFX_CAN_N_TX_BCIE_CFIE24_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE24 */
#define IFX_CAN_N_TX_BCIE_CFIE24_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE24 */
#define IFX_CAN_N_TX_BCIE_CFIE24_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE25 */
#define IFX_CAN_N_TX_BCIE_CFIE25_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE25 */
#define IFX_CAN_N_TX_BCIE_CFIE25_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE25 */
#define IFX_CAN_N_TX_BCIE_CFIE25_OFF (25u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE26 */
#define IFX_CAN_N_TX_BCIE_CFIE26_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE26 */
#define IFX_CAN_N_TX_BCIE_CFIE26_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE26 */
#define IFX_CAN_N_TX_BCIE_CFIE26_OFF (26u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE27 */
#define IFX_CAN_N_TX_BCIE_CFIE27_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE27 */
#define IFX_CAN_N_TX_BCIE_CFIE27_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE27 */
#define IFX_CAN_N_TX_BCIE_CFIE27_OFF (27u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE28 */
#define IFX_CAN_N_TX_BCIE_CFIE28_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE28 */
#define IFX_CAN_N_TX_BCIE_CFIE28_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE28 */
#define IFX_CAN_N_TX_BCIE_CFIE28_OFF (28u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE29 */
#define IFX_CAN_N_TX_BCIE_CFIE29_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE29 */
#define IFX_CAN_N_TX_BCIE_CFIE29_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE29 */
#define IFX_CAN_N_TX_BCIE_CFIE29_OFF (29u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE30 */
#define IFX_CAN_N_TX_BCIE_CFIE30_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE30 */
#define IFX_CAN_N_TX_BCIE_CFIE30_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE30 */
#define IFX_CAN_N_TX_BCIE_CFIE30_OFF (30u)

/** \brief Length for Ifx_CAN_N_TX_BCIE_Bits.CFIE31 */
#define IFX_CAN_N_TX_BCIE_CFIE31_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_BCIE_Bits.CFIE31 */
#define IFX_CAN_N_TX_BCIE_CFIE31_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_BCIE_Bits.CFIE31 */
#define IFX_CAN_N_TX_BCIE_CFIE31_OFF (31u)

/** \brief Length for Ifx_CAN_N_TX_EFC_Bits.EFSA */
#define IFX_CAN_N_TX_EFC_EFSA_LEN (14u)

/** \brief Mask for Ifx_CAN_N_TX_EFC_Bits.EFSA */
#define IFX_CAN_N_TX_EFC_EFSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_TX_EFC_Bits.EFSA */
#define IFX_CAN_N_TX_EFC_EFSA_OFF (2u)

/** \brief Length for Ifx_CAN_N_TX_EFC_Bits.EFS */
#define IFX_CAN_N_TX_EFC_EFS_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TX_EFC_Bits.EFS */
#define IFX_CAN_N_TX_EFC_EFS_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TX_EFC_Bits.EFS */
#define IFX_CAN_N_TX_EFC_EFS_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_EFC_Bits.EFWM */
#define IFX_CAN_N_TX_EFC_EFWM_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TX_EFC_Bits.EFWM */
#define IFX_CAN_N_TX_EFC_EFWM_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TX_EFC_Bits.EFWM */
#define IFX_CAN_N_TX_EFC_EFWM_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_EFS_Bits.EFFL */
#define IFX_CAN_N_TX_EFS_EFFL_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TX_EFS_Bits.EFFL */
#define IFX_CAN_N_TX_EFS_EFFL_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TX_EFS_Bits.EFFL */
#define IFX_CAN_N_TX_EFS_EFFL_OFF (0u)

/** \brief Length for Ifx_CAN_N_TX_EFS_Bits.EFGI */
#define IFX_CAN_N_TX_EFS_EFGI_LEN (5u)

/** \brief Mask for Ifx_CAN_N_TX_EFS_Bits.EFGI */
#define IFX_CAN_N_TX_EFS_EFGI_MSK (0x1fu)

/** \brief Offset for Ifx_CAN_N_TX_EFS_Bits.EFGI */
#define IFX_CAN_N_TX_EFS_EFGI_OFF (8u)

/** \brief Length for Ifx_CAN_N_TX_EFS_Bits.EFPI */
#define IFX_CAN_N_TX_EFS_EFPI_LEN (5u)

/** \brief Mask for Ifx_CAN_N_TX_EFS_Bits.EFPI */
#define IFX_CAN_N_TX_EFS_EFPI_MSK (0x1fu)

/** \brief Offset for Ifx_CAN_N_TX_EFS_Bits.EFPI */
#define IFX_CAN_N_TX_EFS_EFPI_OFF (16u)

/** \brief Length for Ifx_CAN_N_TX_EFS_Bits.EFF */
#define IFX_CAN_N_TX_EFS_EFF_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_EFS_Bits.EFF */
#define IFX_CAN_N_TX_EFS_EFF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_EFS_Bits.EFF */
#define IFX_CAN_N_TX_EFS_EFF_OFF (24u)

/** \brief Length for Ifx_CAN_N_TX_EFS_Bits.TEFL */
#define IFX_CAN_N_TX_EFS_TEFL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TX_EFS_Bits.TEFL */
#define IFX_CAN_N_TX_EFS_TEFL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TX_EFS_Bits.TEFL */
#define IFX_CAN_N_TX_EFS_TEFL_OFF (25u)

/** \brief Length for Ifx_CAN_N_TX_EFA_Bits.EFAI */
#define IFX_CAN_N_TX_EFA_EFAI_LEN (5u)

/** \brief Mask for Ifx_CAN_N_TX_EFA_Bits.EFAI */
#define IFX_CAN_N_TX_EFA_EFAI_MSK (0x1fu)

/** \brief Offset for Ifx_CAN_N_TX_EFA_Bits.EFAI */
#define IFX_CAN_N_TX_EFA_EFAI_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_TMC_Bits.TMSA */
#define IFX_CAN_N_TT_TMC_TMSA_LEN (14u)

/** \brief Mask for Ifx_CAN_N_TT_TMC_Bits.TMSA */
#define IFX_CAN_N_TT_TMC_TMSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_TT_TMC_Bits.TMSA */
#define IFX_CAN_N_TT_TMC_TMSA_OFF (2u)

/** \brief Length for Ifx_CAN_N_TT_TMC_Bits.TME */
#define IFX_CAN_N_TT_TMC_TME_LEN (7u)

/** \brief Mask for Ifx_CAN_N_TT_TMC_Bits.TME */
#define IFX_CAN_N_TT_TMC_TME_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_TT_TMC_Bits.TME */
#define IFX_CAN_N_TT_TMC_TME_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_RMC_Bits.RID */
#define IFX_CAN_N_TT_RMC_RID_LEN (29u)

/** \brief Mask for Ifx_CAN_N_TT_RMC_Bits.RID */
#define IFX_CAN_N_TT_RMC_RID_MSK (0x1fffffffu)

/** \brief Offset for Ifx_CAN_N_TT_RMC_Bits.RID */
#define IFX_CAN_N_TT_RMC_RID_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_RMC_Bits.XTD */
#define IFX_CAN_N_TT_RMC_XTD_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_RMC_Bits.XTD */
#define IFX_CAN_N_TT_RMC_XTD_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_RMC_Bits.XTD */
#define IFX_CAN_N_TT_RMC_XTD_OFF (30u)

/** \brief Length for Ifx_CAN_N_TT_RMC_Bits.RMPS */
#define IFX_CAN_N_TT_RMC_RMPS_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_RMC_Bits.RMPS */
#define IFX_CAN_N_TT_RMC_RMPS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_RMC_Bits.RMPS */
#define IFX_CAN_N_TT_RMC_RMPS_OFF (31u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.OM */
#define IFX_CAN_N_TT_OCF_OM_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.OM */
#define IFX_CAN_N_TT_OCF_OM_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.OM */
#define IFX_CAN_N_TT_OCF_OM_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.GEN */
#define IFX_CAN_N_TT_OCF_GEN_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.GEN */
#define IFX_CAN_N_TT_OCF_GEN_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.GEN */
#define IFX_CAN_N_TT_OCF_GEN_OFF (3u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.TM */
#define IFX_CAN_N_TT_OCF_TM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.TM */
#define IFX_CAN_N_TT_OCF_TM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.TM */
#define IFX_CAN_N_TT_OCF_TM_OFF (4u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.LDSDL */
#define IFX_CAN_N_TT_OCF_LDSDL_LEN (3u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.LDSDL */
#define IFX_CAN_N_TT_OCF_LDSDL_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.LDSDL */
#define IFX_CAN_N_TT_OCF_LDSDL_OFF (5u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.IRTO */
#define IFX_CAN_N_TT_OCF_IRTO_LEN (7u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.IRTO */
#define IFX_CAN_N_TT_OCF_IRTO_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.IRTO */
#define IFX_CAN_N_TT_OCF_IRTO_OFF (8u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.EECS */
#define IFX_CAN_N_TT_OCF_EECS_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.EECS */
#define IFX_CAN_N_TT_OCF_EECS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.EECS */
#define IFX_CAN_N_TT_OCF_EECS_OFF (15u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.AWL */
#define IFX_CAN_N_TT_OCF_AWL_LEN (8u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.AWL */
#define IFX_CAN_N_TT_OCF_AWL_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.AWL */
#define IFX_CAN_N_TT_OCF_AWL_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.EGTF */
#define IFX_CAN_N_TT_OCF_EGTF_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.EGTF */
#define IFX_CAN_N_TT_OCF_EGTF_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.EGTF */
#define IFX_CAN_N_TT_OCF_EGTF_OFF (24u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.ECC */
#define IFX_CAN_N_TT_OCF_ECC_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.ECC */
#define IFX_CAN_N_TT_OCF_ECC_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.ECC */
#define IFX_CAN_N_TT_OCF_ECC_OFF (25u)

/** \brief Length for Ifx_CAN_N_TT_OCF_Bits.EVTP */
#define IFX_CAN_N_TT_OCF_EVTP_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCF_Bits.EVTP */
#define IFX_CAN_N_TT_OCF_EVTP_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCF_Bits.EVTP */
#define IFX_CAN_N_TT_OCF_EVTP_OFF (26u)

/** \brief Length for Ifx_CAN_N_TT_MLM_Bits.CCM */
#define IFX_CAN_N_TT_MLM_CCM_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TT_MLM_Bits.CCM */
#define IFX_CAN_N_TT_MLM_CCM_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TT_MLM_Bits.CCM */
#define IFX_CAN_N_TT_MLM_CCM_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_MLM_Bits.CSS */
#define IFX_CAN_N_TT_MLM_CSS_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TT_MLM_Bits.CSS */
#define IFX_CAN_N_TT_MLM_CSS_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TT_MLM_Bits.CSS */
#define IFX_CAN_N_TT_MLM_CSS_OFF (6u)

/** \brief Length for Ifx_CAN_N_TT_MLM_Bits.TXEW */
#define IFX_CAN_N_TT_MLM_TXEW_LEN (4u)

/** \brief Mask for Ifx_CAN_N_TT_MLM_Bits.TXEW */
#define IFX_CAN_N_TT_MLM_TXEW_MSK (0xfu)

/** \brief Offset for Ifx_CAN_N_TT_MLM_Bits.TXEW */
#define IFX_CAN_N_TT_MLM_TXEW_OFF (8u)

/** \brief Length for Ifx_CAN_N_TT_MLM_Bits.ENTT */
#define IFX_CAN_N_TT_MLM_ENTT_LEN (12u)

/** \brief Mask for Ifx_CAN_N_TT_MLM_Bits.ENTT */
#define IFX_CAN_N_TT_MLM_ENTT_MSK (0xfffu)

/** \brief Offset for Ifx_CAN_N_TT_MLM_Bits.ENTT */
#define IFX_CAN_N_TT_MLM_ENTT_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_TURCF_Bits.NCL */
#define IFX_CAN_N_TT_TURCF_NCL_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_TURCF_Bits.NCL */
#define IFX_CAN_N_TT_TURCF_NCL_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_TURCF_Bits.NCL */
#define IFX_CAN_N_TT_TURCF_NCL_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_TURCF_Bits.DC */
#define IFX_CAN_N_TT_TURCF_DC_LEN (14u)

/** \brief Mask for Ifx_CAN_N_TT_TURCF_Bits.DC */
#define IFX_CAN_N_TT_TURCF_DC_MSK (0x3fffu)

/** \brief Offset for Ifx_CAN_N_TT_TURCF_Bits.DC */
#define IFX_CAN_N_TT_TURCF_DC_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_TURCF_Bits.ELT */
#define IFX_CAN_N_TT_TURCF_ELT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_TURCF_Bits.ELT */
#define IFX_CAN_N_TT_TURCF_ELT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_TURCF_Bits.ELT */
#define IFX_CAN_N_TT_TURCF_ELT_OFF (31u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.SGT */
#define IFX_CAN_N_TT_OCN_SGT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.SGT */
#define IFX_CAN_N_TT_OCN_SGT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.SGT */
#define IFX_CAN_N_TT_OCN_SGT_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.ECS */
#define IFX_CAN_N_TT_OCN_ECS_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.ECS */
#define IFX_CAN_N_TT_OCN_ECS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.ECS */
#define IFX_CAN_N_TT_OCN_ECS_OFF (1u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.SWP */
#define IFX_CAN_N_TT_OCN_SWP_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.SWP */
#define IFX_CAN_N_TT_OCN_SWP_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.SWP */
#define IFX_CAN_N_TT_OCN_SWP_OFF (2u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.SWS */
#define IFX_CAN_N_TT_OCN_SWS_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.SWS */
#define IFX_CAN_N_TT_OCN_SWS_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.SWS */
#define IFX_CAN_N_TT_OCN_SWS_OFF (3u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.RTIE */
#define IFX_CAN_N_TT_OCN_RTIE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.RTIE */
#define IFX_CAN_N_TT_OCN_RTIE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.RTIE */
#define IFX_CAN_N_TT_OCN_RTIE_OFF (5u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.TMC */
#define IFX_CAN_N_TT_OCN_TMC_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.TMC */
#define IFX_CAN_N_TT_OCN_TMC_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.TMC */
#define IFX_CAN_N_TT_OCN_TMC_OFF (6u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.TTIE */
#define IFX_CAN_N_TT_OCN_TTIE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.TTIE */
#define IFX_CAN_N_TT_OCN_TTIE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.TTIE */
#define IFX_CAN_N_TT_OCN_TTIE_OFF (8u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.GCS */
#define IFX_CAN_N_TT_OCN_GCS_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.GCS */
#define IFX_CAN_N_TT_OCN_GCS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.GCS */
#define IFX_CAN_N_TT_OCN_GCS_OFF (9u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.FGP */
#define IFX_CAN_N_TT_OCN_FGP_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.FGP */
#define IFX_CAN_N_TT_OCN_FGP_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.FGP */
#define IFX_CAN_N_TT_OCN_FGP_OFF (10u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.TMG */
#define IFX_CAN_N_TT_OCN_TMG_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.TMG */
#define IFX_CAN_N_TT_OCN_TMG_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.TMG */
#define IFX_CAN_N_TT_OCN_TMG_OFF (11u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.NIG */
#define IFX_CAN_N_TT_OCN_NIG_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.NIG */
#define IFX_CAN_N_TT_OCN_NIG_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.NIG */
#define IFX_CAN_N_TT_OCN_NIG_OFF (12u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.ESCN */
#define IFX_CAN_N_TT_OCN_ESCN_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.ESCN */
#define IFX_CAN_N_TT_OCN_ESCN_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.ESCN */
#define IFX_CAN_N_TT_OCN_ESCN_OFF (13u)

/** \brief Length for Ifx_CAN_N_TT_OCN_Bits.LCKC */
#define IFX_CAN_N_TT_OCN_LCKC_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OCN_Bits.LCKC */
#define IFX_CAN_N_TT_OCN_LCKC_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OCN_Bits.LCKC */
#define IFX_CAN_N_TT_OCN_LCKC_OFF (15u)

/** \brief Length for Ifx_CAN_N_TT_GTP_Bits.TP */
#define IFX_CAN_N_TT_GTP_TP_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_GTP_Bits.TP */
#define IFX_CAN_N_TT_GTP_TP_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_GTP_Bits.TP */
#define IFX_CAN_N_TT_GTP_TP_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_GTP_Bits.CTP */
#define IFX_CAN_N_TT_GTP_CTP_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_GTP_Bits.CTP */
#define IFX_CAN_N_TT_GTP_CTP_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_GTP_Bits.CTP */
#define IFX_CAN_N_TT_GTP_CTP_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_TMK_Bits.TM */
#define IFX_CAN_N_TT_TMK_TM_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_TMK_Bits.TM */
#define IFX_CAN_N_TT_TMK_TM_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_TMK_Bits.TM */
#define IFX_CAN_N_TT_TMK_TM_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_TMK_Bits.TICC */
#define IFX_CAN_N_TT_TMK_TICC_LEN (7u)

/** \brief Mask for Ifx_CAN_N_TT_TMK_Bits.TICC */
#define IFX_CAN_N_TT_TMK_TICC_MSK (0x7fu)

/** \brief Offset for Ifx_CAN_N_TT_TMK_Bits.TICC */
#define IFX_CAN_N_TT_TMK_TICC_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_TMK_Bits.LCKM */
#define IFX_CAN_N_TT_TMK_LCKM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_TMK_Bits.LCKM */
#define IFX_CAN_N_TT_TMK_LCKM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_TMK_Bits.LCKM */
#define IFX_CAN_N_TT_TMK_LCKM_OFF (31u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.SBC */
#define IFX_CAN_N_TT_IR_SBC_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.SBC */
#define IFX_CAN_N_TT_IR_SBC_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.SBC */
#define IFX_CAN_N_TT_IR_SBC_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.SMC */
#define IFX_CAN_N_TT_IR_SMC_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.SMC */
#define IFX_CAN_N_TT_IR_SMC_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.SMC */
#define IFX_CAN_N_TT_IR_SMC_OFF (1u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.CSM */
#define IFX_CAN_N_TT_IR_CSM_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.CSM */
#define IFX_CAN_N_TT_IR_CSM_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.CSM */
#define IFX_CAN_N_TT_IR_CSM_OFF (2u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.SOG */
#define IFX_CAN_N_TT_IR_SOG_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.SOG */
#define IFX_CAN_N_TT_IR_SOG_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.SOG */
#define IFX_CAN_N_TT_IR_SOG_OFF (3u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.RTMI */
#define IFX_CAN_N_TT_IR_RTMI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.RTMI */
#define IFX_CAN_N_TT_IR_RTMI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.RTMI */
#define IFX_CAN_N_TT_IR_RTMI_OFF (4u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.TTMI */
#define IFX_CAN_N_TT_IR_TTMI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.TTMI */
#define IFX_CAN_N_TT_IR_TTMI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.TTMI */
#define IFX_CAN_N_TT_IR_TTMI_OFF (5u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.SWE */
#define IFX_CAN_N_TT_IR_SWE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.SWE */
#define IFX_CAN_N_TT_IR_SWE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.SWE */
#define IFX_CAN_N_TT_IR_SWE_OFF (6u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.GTW */
#define IFX_CAN_N_TT_IR_GTW_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.GTW */
#define IFX_CAN_N_TT_IR_GTW_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.GTW */
#define IFX_CAN_N_TT_IR_GTW_OFF (7u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.GTD */
#define IFX_CAN_N_TT_IR_GTD_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.GTD */
#define IFX_CAN_N_TT_IR_GTD_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.GTD */
#define IFX_CAN_N_TT_IR_GTD_OFF (8u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.GTE */
#define IFX_CAN_N_TT_IR_GTE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.GTE */
#define IFX_CAN_N_TT_IR_GTE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.GTE */
#define IFX_CAN_N_TT_IR_GTE_OFF (9u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.TXU */
#define IFX_CAN_N_TT_IR_TXU_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.TXU */
#define IFX_CAN_N_TT_IR_TXU_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.TXU */
#define IFX_CAN_N_TT_IR_TXU_OFF (10u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.TXO */
#define IFX_CAN_N_TT_IR_TXO_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.TXO */
#define IFX_CAN_N_TT_IR_TXO_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.TXO */
#define IFX_CAN_N_TT_IR_TXO_OFF (11u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.SE1 */
#define IFX_CAN_N_TT_IR_SE1_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.SE1 */
#define IFX_CAN_N_TT_IR_SE1_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.SE1 */
#define IFX_CAN_N_TT_IR_SE1_OFF (12u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.SE2 */
#define IFX_CAN_N_TT_IR_SE2_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.SE2 */
#define IFX_CAN_N_TT_IR_SE2_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.SE2 */
#define IFX_CAN_N_TT_IR_SE2_OFF (13u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.ELC */
#define IFX_CAN_N_TT_IR_ELC_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.ELC */
#define IFX_CAN_N_TT_IR_ELC_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.ELC */
#define IFX_CAN_N_TT_IR_ELC_OFF (14u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.IWT */
#define IFX_CAN_N_TT_IR_IWT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.IWT */
#define IFX_CAN_N_TT_IR_IWT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.IWT */
#define IFX_CAN_N_TT_IR_IWT_OFF (15u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.WT */
#define IFX_CAN_N_TT_IR_WT_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.WT */
#define IFX_CAN_N_TT_IR_WT_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.WT */
#define IFX_CAN_N_TT_IR_WT_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.AW */
#define IFX_CAN_N_TT_IR_AW_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.AW */
#define IFX_CAN_N_TT_IR_AW_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.AW */
#define IFX_CAN_N_TT_IR_AW_OFF (17u)

/** \brief Length for Ifx_CAN_N_TT_IR_Bits.CER */
#define IFX_CAN_N_TT_IR_CER_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IR_Bits.CER */
#define IFX_CAN_N_TT_IR_CER_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IR_Bits.CER */
#define IFX_CAN_N_TT_IR_CER_OFF (18u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.SBCE */
#define IFX_CAN_N_TT_IE_SBCE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.SBCE */
#define IFX_CAN_N_TT_IE_SBCE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.SBCE */
#define IFX_CAN_N_TT_IE_SBCE_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.SMCE */
#define IFX_CAN_N_TT_IE_SMCE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.SMCE */
#define IFX_CAN_N_TT_IE_SMCE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.SMCE */
#define IFX_CAN_N_TT_IE_SMCE_OFF (1u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.CSME */
#define IFX_CAN_N_TT_IE_CSME_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.CSME */
#define IFX_CAN_N_TT_IE_CSME_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.CSME */
#define IFX_CAN_N_TT_IE_CSME_OFF (2u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.SOGE */
#define IFX_CAN_N_TT_IE_SOGE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.SOGE */
#define IFX_CAN_N_TT_IE_SOGE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.SOGE */
#define IFX_CAN_N_TT_IE_SOGE_OFF (3u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.RTMIE */
#define IFX_CAN_N_TT_IE_RTMIE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.RTMIE */
#define IFX_CAN_N_TT_IE_RTMIE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.RTMIE */
#define IFX_CAN_N_TT_IE_RTMIE_OFF (4u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.TTMIE */
#define IFX_CAN_N_TT_IE_TTMIE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.TTMIE */
#define IFX_CAN_N_TT_IE_TTMIE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.TTMIE */
#define IFX_CAN_N_TT_IE_TTMIE_OFF (5u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.SWEE */
#define IFX_CAN_N_TT_IE_SWEE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.SWEE */
#define IFX_CAN_N_TT_IE_SWEE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.SWEE */
#define IFX_CAN_N_TT_IE_SWEE_OFF (6u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.GTWE */
#define IFX_CAN_N_TT_IE_GTWE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.GTWE */
#define IFX_CAN_N_TT_IE_GTWE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.GTWE */
#define IFX_CAN_N_TT_IE_GTWE_OFF (7u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.GTDE */
#define IFX_CAN_N_TT_IE_GTDE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.GTDE */
#define IFX_CAN_N_TT_IE_GTDE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.GTDE */
#define IFX_CAN_N_TT_IE_GTDE_OFF (8u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.GTEE */
#define IFX_CAN_N_TT_IE_GTEE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.GTEE */
#define IFX_CAN_N_TT_IE_GTEE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.GTEE */
#define IFX_CAN_N_TT_IE_GTEE_OFF (9u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.TXUE */
#define IFX_CAN_N_TT_IE_TXUE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.TXUE */
#define IFX_CAN_N_TT_IE_TXUE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.TXUE */
#define IFX_CAN_N_TT_IE_TXUE_OFF (10u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.TXOE */
#define IFX_CAN_N_TT_IE_TXOE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.TXOE */
#define IFX_CAN_N_TT_IE_TXOE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.TXOE */
#define IFX_CAN_N_TT_IE_TXOE_OFF (11u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.SE1E */
#define IFX_CAN_N_TT_IE_SE1E_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.SE1E */
#define IFX_CAN_N_TT_IE_SE1E_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.SE1E */
#define IFX_CAN_N_TT_IE_SE1E_OFF (12u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.SE2E */
#define IFX_CAN_N_TT_IE_SE2E_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.SE2E */
#define IFX_CAN_N_TT_IE_SE2E_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.SE2E */
#define IFX_CAN_N_TT_IE_SE2E_OFF (13u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.ELCE */
#define IFX_CAN_N_TT_IE_ELCE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.ELCE */
#define IFX_CAN_N_TT_IE_ELCE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.ELCE */
#define IFX_CAN_N_TT_IE_ELCE_OFF (14u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.IWTE */
#define IFX_CAN_N_TT_IE_IWTE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.IWTE */
#define IFX_CAN_N_TT_IE_IWTE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.IWTE */
#define IFX_CAN_N_TT_IE_IWTE_OFF (15u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.WTE */
#define IFX_CAN_N_TT_IE_WTE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.WTE */
#define IFX_CAN_N_TT_IE_WTE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.WTE */
#define IFX_CAN_N_TT_IE_WTE_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.AWE */
#define IFX_CAN_N_TT_IE_AWE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.AWE */
#define IFX_CAN_N_TT_IE_AWE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.AWE */
#define IFX_CAN_N_TT_IE_AWE_OFF (17u)

/** \brief Length for Ifx_CAN_N_TT_IE_Bits.CERE */
#define IFX_CAN_N_TT_IE_CERE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_IE_Bits.CERE */
#define IFX_CAN_N_TT_IE_CERE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_IE_Bits.CERE */
#define IFX_CAN_N_TT_IE_CERE_OFF (18u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.SBCL */
#define IFX_CAN_N_TT_ILS_SBCL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.SBCL */
#define IFX_CAN_N_TT_ILS_SBCL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.SBCL */
#define IFX_CAN_N_TT_ILS_SBCL_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.SMCL */
#define IFX_CAN_N_TT_ILS_SMCL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.SMCL */
#define IFX_CAN_N_TT_ILS_SMCL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.SMCL */
#define IFX_CAN_N_TT_ILS_SMCL_OFF (1u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.CSML */
#define IFX_CAN_N_TT_ILS_CSML_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.CSML */
#define IFX_CAN_N_TT_ILS_CSML_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.CSML */
#define IFX_CAN_N_TT_ILS_CSML_OFF (2u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.SOGL */
#define IFX_CAN_N_TT_ILS_SOGL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.SOGL */
#define IFX_CAN_N_TT_ILS_SOGL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.SOGL */
#define IFX_CAN_N_TT_ILS_SOGL_OFF (3u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.RTMIL */
#define IFX_CAN_N_TT_ILS_RTMIL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.RTMIL */
#define IFX_CAN_N_TT_ILS_RTMIL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.RTMIL */
#define IFX_CAN_N_TT_ILS_RTMIL_OFF (4u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.TTMIL */
#define IFX_CAN_N_TT_ILS_TTMIL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.TTMIL */
#define IFX_CAN_N_TT_ILS_TTMIL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.TTMIL */
#define IFX_CAN_N_TT_ILS_TTMIL_OFF (5u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.SWEL */
#define IFX_CAN_N_TT_ILS_SWEL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.SWEL */
#define IFX_CAN_N_TT_ILS_SWEL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.SWEL */
#define IFX_CAN_N_TT_ILS_SWEL_OFF (6u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.GTWL */
#define IFX_CAN_N_TT_ILS_GTWL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.GTWL */
#define IFX_CAN_N_TT_ILS_GTWL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.GTWL */
#define IFX_CAN_N_TT_ILS_GTWL_OFF (7u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.GTDL */
#define IFX_CAN_N_TT_ILS_GTDL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.GTDL */
#define IFX_CAN_N_TT_ILS_GTDL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.GTDL */
#define IFX_CAN_N_TT_ILS_GTDL_OFF (8u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.GTEL */
#define IFX_CAN_N_TT_ILS_GTEL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.GTEL */
#define IFX_CAN_N_TT_ILS_GTEL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.GTEL */
#define IFX_CAN_N_TT_ILS_GTEL_OFF (9u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.TXUL */
#define IFX_CAN_N_TT_ILS_TXUL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.TXUL */
#define IFX_CAN_N_TT_ILS_TXUL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.TXUL */
#define IFX_CAN_N_TT_ILS_TXUL_OFF (10u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.TXOL */
#define IFX_CAN_N_TT_ILS_TXOL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.TXOL */
#define IFX_CAN_N_TT_ILS_TXOL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.TXOL */
#define IFX_CAN_N_TT_ILS_TXOL_OFF (11u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.SE1L */
#define IFX_CAN_N_TT_ILS_SE1L_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.SE1L */
#define IFX_CAN_N_TT_ILS_SE1L_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.SE1L */
#define IFX_CAN_N_TT_ILS_SE1L_OFF (12u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.SE2L */
#define IFX_CAN_N_TT_ILS_SE2L_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.SE2L */
#define IFX_CAN_N_TT_ILS_SE2L_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.SE2L */
#define IFX_CAN_N_TT_ILS_SE2L_OFF (13u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.ELCL */
#define IFX_CAN_N_TT_ILS_ELCL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.ELCL */
#define IFX_CAN_N_TT_ILS_ELCL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.ELCL */
#define IFX_CAN_N_TT_ILS_ELCL_OFF (14u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.IWTL */
#define IFX_CAN_N_TT_ILS_IWTL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.IWTL */
#define IFX_CAN_N_TT_ILS_IWTL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.IWTL */
#define IFX_CAN_N_TT_ILS_IWTL_OFF (15u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.WTL */
#define IFX_CAN_N_TT_ILS_WTL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.WTL */
#define IFX_CAN_N_TT_ILS_WTL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.WTL */
#define IFX_CAN_N_TT_ILS_WTL_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.AWL */
#define IFX_CAN_N_TT_ILS_AWL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.AWL */
#define IFX_CAN_N_TT_ILS_AWL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.AWL */
#define IFX_CAN_N_TT_ILS_AWL_OFF (17u)

/** \brief Length for Ifx_CAN_N_TT_ILS_Bits.CERL */
#define IFX_CAN_N_TT_ILS_CERL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_ILS_Bits.CERL */
#define IFX_CAN_N_TT_ILS_CERL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_ILS_Bits.CERL */
#define IFX_CAN_N_TT_ILS_CERL_OFF (18u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.EL */
#define IFX_CAN_N_TT_OST_EL_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.EL */
#define IFX_CAN_N_TT_OST_EL_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.EL */
#define IFX_CAN_N_TT_OST_EL_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.MS */
#define IFX_CAN_N_TT_OST_MS_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.MS */
#define IFX_CAN_N_TT_OST_MS_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.MS */
#define IFX_CAN_N_TT_OST_MS_OFF (2u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.SYS */
#define IFX_CAN_N_TT_OST_SYS_LEN (2u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.SYS */
#define IFX_CAN_N_TT_OST_SYS_MSK (0x3u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.SYS */
#define IFX_CAN_N_TT_OST_SYS_OFF (4u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.QGTP */
#define IFX_CAN_N_TT_OST_QGTP_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.QGTP */
#define IFX_CAN_N_TT_OST_QGTP_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.QGTP */
#define IFX_CAN_N_TT_OST_QGTP_OFF (6u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.QCS */
#define IFX_CAN_N_TT_OST_QCS_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.QCS */
#define IFX_CAN_N_TT_OST_QCS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.QCS */
#define IFX_CAN_N_TT_OST_QCS_OFF (7u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.RTO */
#define IFX_CAN_N_TT_OST_RTO_LEN (8u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.RTO */
#define IFX_CAN_N_TT_OST_RTO_MSK (0xffu)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.RTO */
#define IFX_CAN_N_TT_OST_RTO_OFF (8u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.WGTD */
#define IFX_CAN_N_TT_OST_WGTD_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.WGTD */
#define IFX_CAN_N_TT_OST_WGTD_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.WGTD */
#define IFX_CAN_N_TT_OST_WGTD_OFF (22u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.GFI */
#define IFX_CAN_N_TT_OST_GFI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.GFI */
#define IFX_CAN_N_TT_OST_GFI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.GFI */
#define IFX_CAN_N_TT_OST_GFI_OFF (23u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.TMP */
#define IFX_CAN_N_TT_OST_TMP_LEN (3u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.TMP */
#define IFX_CAN_N_TT_OST_TMP_MSK (0x7u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.TMP */
#define IFX_CAN_N_TT_OST_TMP_OFF (24u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.GSI */
#define IFX_CAN_N_TT_OST_GSI_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.GSI */
#define IFX_CAN_N_TT_OST_GSI_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.GSI */
#define IFX_CAN_N_TT_OST_GSI_OFF (27u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.WFE */
#define IFX_CAN_N_TT_OST_WFE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.WFE */
#define IFX_CAN_N_TT_OST_WFE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.WFE */
#define IFX_CAN_N_TT_OST_WFE_OFF (28u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.AWE */
#define IFX_CAN_N_TT_OST_AWE_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.AWE */
#define IFX_CAN_N_TT_OST_AWE_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.AWE */
#define IFX_CAN_N_TT_OST_AWE_OFF (29u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.WECS */
#define IFX_CAN_N_TT_OST_WECS_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.WECS */
#define IFX_CAN_N_TT_OST_WECS_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.WECS */
#define IFX_CAN_N_TT_OST_WECS_OFF (30u)

/** \brief Length for Ifx_CAN_N_TT_OST_Bits.SPL */
#define IFX_CAN_N_TT_OST_SPL_LEN (1u)

/** \brief Mask for Ifx_CAN_N_TT_OST_Bits.SPL */
#define IFX_CAN_N_TT_OST_SPL_MSK (0x1u)

/** \brief Offset for Ifx_CAN_N_TT_OST_Bits.SPL */
#define IFX_CAN_N_TT_OST_SPL_OFF (31u)

/** \brief Length for Ifx_CAN_N_TT_TURNA_Bits.NAV */
#define IFX_CAN_N_TT_TURNA_NAV_LEN (18u)

/** \brief Mask for Ifx_CAN_N_TT_TURNA_Bits.NAV */
#define IFX_CAN_N_TT_TURNA_NAV_MSK (0x3ffffu)

/** \brief Offset for Ifx_CAN_N_TT_TURNA_Bits.NAV */
#define IFX_CAN_N_TT_TURNA_NAV_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_LGT_Bits.LT */
#define IFX_CAN_N_TT_LGT_LT_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_LGT_Bits.LT */
#define IFX_CAN_N_TT_LGT_LT_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_LGT_Bits.LT */
#define IFX_CAN_N_TT_LGT_LT_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_LGT_Bits.GT */
#define IFX_CAN_N_TT_LGT_GT_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_LGT_Bits.GT */
#define IFX_CAN_N_TT_LGT_GT_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_LGT_Bits.GT */
#define IFX_CAN_N_TT_LGT_GT_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_CTC_Bits.CT */
#define IFX_CAN_N_TT_CTC_CT_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_CTC_Bits.CT */
#define IFX_CAN_N_TT_CTC_CT_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_CTC_Bits.CT */
#define IFX_CAN_N_TT_CTC_CT_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_CTC_Bits.CC */
#define IFX_CAN_N_TT_CTC_CC_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TT_CTC_Bits.CC */
#define IFX_CAN_N_TT_CTC_CC_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TT_CTC_Bits.CC */
#define IFX_CAN_N_TT_CTC_CC_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_CPT_Bits.CCV */
#define IFX_CAN_N_TT_CPT_CCV_LEN (6u)

/** \brief Mask for Ifx_CAN_N_TT_CPT_Bits.CCV */
#define IFX_CAN_N_TT_CPT_CCV_MSK (0x3fu)

/** \brief Offset for Ifx_CAN_N_TT_CPT_Bits.CCV */
#define IFX_CAN_N_TT_CPT_CCV_OFF (0u)

/** \brief Length for Ifx_CAN_N_TT_CPT_Bits.SWV */
#define IFX_CAN_N_TT_CPT_SWV_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_CPT_Bits.SWV */
#define IFX_CAN_N_TT_CPT_SWV_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_CPT_Bits.SWV */
#define IFX_CAN_N_TT_CPT_SWV_OFF (16u)

/** \brief Length for Ifx_CAN_N_TT_CSM_Bits.CSM */
#define IFX_CAN_N_TT_CSM_CSM_LEN (16u)

/** \brief Mask for Ifx_CAN_N_TT_CSM_Bits.CSM */
#define IFX_CAN_N_TT_CSM_CSM_MSK (0xffffu)

/** \brief Offset for Ifx_CAN_N_TT_CSM_Bits.CSM */
#define IFX_CAN_N_TT_CSM_CSM_OFF (0u)

/** \brief Length for Ifx_CAN_STDMSG_S0_Bits.SFID2 */
#define IFX_CAN_STDMSG_S0_SFID2_LEN (11u)

/** \brief Mask for Ifx_CAN_STDMSG_S0_Bits.SFID2 */
#define IFX_CAN_STDMSG_S0_SFID2_MSK (0x0u)

/** \brief Offset for Ifx_CAN_STDMSG_S0_Bits.SFID2 */
#define IFX_CAN_STDMSG_S0_SFID2_OFF (0u)

/** \brief Length for Ifx_CAN_STDMSG_S0_Bits.SFID1 */
#define IFX_CAN_STDMSG_S0_SFID1_LEN (11u)

/** \brief Mask for Ifx_CAN_STDMSG_S0_Bits.SFID1 */
#define IFX_CAN_STDMSG_S0_SFID1_MSK (0x0u)

/** \brief Offset for Ifx_CAN_STDMSG_S0_Bits.SFID1 */
#define IFX_CAN_STDMSG_S0_SFID1_OFF (16u)

/** \brief Length for Ifx_CAN_STDMSG_S0_Bits.SFEC */
#define IFX_CAN_STDMSG_S0_SFEC_LEN (3u)

/** \brief Mask for Ifx_CAN_STDMSG_S0_Bits.SFEC */
#define IFX_CAN_STDMSG_S0_SFEC_MSK (0x0u)

/** \brief Offset for Ifx_CAN_STDMSG_S0_Bits.SFEC */
#define IFX_CAN_STDMSG_S0_SFEC_OFF (27u)

/** \brief Length for Ifx_CAN_STDMSG_S0_Bits.SFT */
#define IFX_CAN_STDMSG_S0_SFT_LEN (2u)

/** \brief Mask for Ifx_CAN_STDMSG_S0_Bits.SFT */
#define IFX_CAN_STDMSG_S0_SFT_MSK (0x0u)

/** \brief Offset for Ifx_CAN_STDMSG_S0_Bits.SFT */
#define IFX_CAN_STDMSG_S0_SFT_OFF (30u)

/** \brief Length for Ifx_CAN_EXTMSG_F0_Bits.EFID1 */
#define IFX_CAN_EXTMSG_F0_EFID1_LEN (29u)

/** \brief Mask for Ifx_CAN_EXTMSG_F0_Bits.EFID1 */
#define IFX_CAN_EXTMSG_F0_EFID1_MSK (0x0u)

/** \brief Offset for Ifx_CAN_EXTMSG_F0_Bits.EFID1 */
#define IFX_CAN_EXTMSG_F0_EFID1_OFF (0u)

/** \brief Length for Ifx_CAN_EXTMSG_F0_Bits.EFEC */
#define IFX_CAN_EXTMSG_F0_EFEC_LEN (3u)

/** \brief Mask for Ifx_CAN_EXTMSG_F0_Bits.EFEC */
#define IFX_CAN_EXTMSG_F0_EFEC_MSK (0x0u)

/** \brief Offset for Ifx_CAN_EXTMSG_F0_Bits.EFEC */
#define IFX_CAN_EXTMSG_F0_EFEC_OFF (29u)

/** \brief Length for Ifx_CAN_EXTMSG_F1_Bits.EFID2 */
#define IFX_CAN_EXTMSG_F1_EFID2_LEN (29u)

/** \brief Mask for Ifx_CAN_EXTMSG_F1_Bits.EFID2 */
#define IFX_CAN_EXTMSG_F1_EFID2_MSK (0x0u)

/** \brief Offset for Ifx_CAN_EXTMSG_F1_Bits.EFID2 */
#define IFX_CAN_EXTMSG_F1_EFID2_OFF (0u)

/** \brief Length for Ifx_CAN_EXTMSG_F1_Bits.EFT */
#define IFX_CAN_EXTMSG_F1_EFT_LEN (2u)

/** \brief Mask for Ifx_CAN_EXTMSG_F1_Bits.EFT */
#define IFX_CAN_EXTMSG_F1_EFT_MSK (0x0u)

/** \brief Offset for Ifx_CAN_EXTMSG_F1_Bits.EFT */
#define IFX_CAN_EXTMSG_F1_EFT_OFF (30u)

/** \brief Length for Ifx_CAN_RXMSG_R0_Bits.ID */
#define IFX_CAN_RXMSG_R0_ID_LEN (29u)

/** \brief Mask for Ifx_CAN_RXMSG_R0_Bits.ID */
#define IFX_CAN_RXMSG_R0_ID_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R0_Bits.ID */
#define IFX_CAN_RXMSG_R0_ID_OFF (0u)

/** \brief Length for Ifx_CAN_RXMSG_R0_Bits.RTR */
#define IFX_CAN_RXMSG_R0_RTR_LEN (1u)

/** \brief Mask for Ifx_CAN_RXMSG_R0_Bits.RTR */
#define IFX_CAN_RXMSG_R0_RTR_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R0_Bits.RTR */
#define IFX_CAN_RXMSG_R0_RTR_OFF (29u)

/** \brief Length for Ifx_CAN_RXMSG_R0_Bits.XTD */
#define IFX_CAN_RXMSG_R0_XTD_LEN (1u)

/** \brief Mask for Ifx_CAN_RXMSG_R0_Bits.XTD */
#define IFX_CAN_RXMSG_R0_XTD_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R0_Bits.XTD */
#define IFX_CAN_RXMSG_R0_XTD_OFF (30u)

/** \brief Length for Ifx_CAN_RXMSG_R0_Bits.ESI */
#define IFX_CAN_RXMSG_R0_ESI_LEN (1u)

/** \brief Mask for Ifx_CAN_RXMSG_R0_Bits.ESI */
#define IFX_CAN_RXMSG_R0_ESI_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R0_Bits.ESI */
#define IFX_CAN_RXMSG_R0_ESI_OFF (31u)

/** \brief Length for Ifx_CAN_RXMSG_R1_Bits.RXTS */
#define IFX_CAN_RXMSG_R1_RXTS_LEN (16u)

/** \brief Mask for Ifx_CAN_RXMSG_R1_Bits.RXTS */
#define IFX_CAN_RXMSG_R1_RXTS_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R1_Bits.RXTS */
#define IFX_CAN_RXMSG_R1_RXTS_OFF (0u)

/** \brief Length for Ifx_CAN_RXMSG_R1_Bits.DLC */
#define IFX_CAN_RXMSG_R1_DLC_LEN (4u)

/** \brief Mask for Ifx_CAN_RXMSG_R1_Bits.DLC */
#define IFX_CAN_RXMSG_R1_DLC_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R1_Bits.DLC */
#define IFX_CAN_RXMSG_R1_DLC_OFF (16u)

/** \brief Length for Ifx_CAN_RXMSG_R1_Bits.BRS */
#define IFX_CAN_RXMSG_R1_BRS_LEN (1u)

/** \brief Mask for Ifx_CAN_RXMSG_R1_Bits.BRS */
#define IFX_CAN_RXMSG_R1_BRS_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R1_Bits.BRS */
#define IFX_CAN_RXMSG_R1_BRS_OFF (20u)

/** \brief Length for Ifx_CAN_RXMSG_R1_Bits.FDF */
#define IFX_CAN_RXMSG_R1_FDF_LEN (1u)

/** \brief Mask for Ifx_CAN_RXMSG_R1_Bits.FDF */
#define IFX_CAN_RXMSG_R1_FDF_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R1_Bits.FDF */
#define IFX_CAN_RXMSG_R1_FDF_OFF (21u)

/** \brief Length for Ifx_CAN_RXMSG_R1_Bits.FIDX */
#define IFX_CAN_RXMSG_R1_FIDX_LEN (7u)

/** \brief Mask for Ifx_CAN_RXMSG_R1_Bits.FIDX */
#define IFX_CAN_RXMSG_R1_FIDX_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R1_Bits.FIDX */
#define IFX_CAN_RXMSG_R1_FIDX_OFF (24u)

/** \brief Length for Ifx_CAN_RXMSG_R1_Bits.ANMF */
#define IFX_CAN_RXMSG_R1_ANMF_LEN (1u)

/** \brief Mask for Ifx_CAN_RXMSG_R1_Bits.ANMF */
#define IFX_CAN_RXMSG_R1_ANMF_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_R1_Bits.ANMF */
#define IFX_CAN_RXMSG_R1_ANMF_OFF (31u)

/** \brief Length for Ifx_CAN_RXMSG_DB_Bits.DB */
#define IFX_CAN_RXMSG_DB_DB_LEN (8u)

/** \brief Mask for Ifx_CAN_RXMSG_DB_Bits.DB */
#define IFX_CAN_RXMSG_DB_DB_MSK (0x0u)

/** \brief Offset for Ifx_CAN_RXMSG_DB_Bits.DB */
#define IFX_CAN_RXMSG_DB_DB_OFF (0u)

/** \brief Length for Ifx_CAN_TXEVENT_E0_Bits.ID */
#define IFX_CAN_TXEVENT_E0_ID_LEN (29u)

/** \brief Mask for Ifx_CAN_TXEVENT_E0_Bits.ID */
#define IFX_CAN_TXEVENT_E0_ID_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E0_Bits.ID */
#define IFX_CAN_TXEVENT_E0_ID_OFF (0u)

/** \brief Length for Ifx_CAN_TXEVENT_E0_Bits.RTR */
#define IFX_CAN_TXEVENT_E0_RTR_LEN (1u)

/** \brief Mask for Ifx_CAN_TXEVENT_E0_Bits.RTR */
#define IFX_CAN_TXEVENT_E0_RTR_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E0_Bits.RTR */
#define IFX_CAN_TXEVENT_E0_RTR_OFF (29u)

/** \brief Length for Ifx_CAN_TXEVENT_E0_Bits.XTD */
#define IFX_CAN_TXEVENT_E0_XTD_LEN (1u)

/** \brief Mask for Ifx_CAN_TXEVENT_E0_Bits.XTD */
#define IFX_CAN_TXEVENT_E0_XTD_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E0_Bits.XTD */
#define IFX_CAN_TXEVENT_E0_XTD_OFF (30u)

/** \brief Length for Ifx_CAN_TXEVENT_E0_Bits.ESI */
#define IFX_CAN_TXEVENT_E0_ESI_LEN (1u)

/** \brief Mask for Ifx_CAN_TXEVENT_E0_Bits.ESI */
#define IFX_CAN_TXEVENT_E0_ESI_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E0_Bits.ESI */
#define IFX_CAN_TXEVENT_E0_ESI_OFF (31u)

/** \brief Length for Ifx_CAN_TXEVENT_E1_Bits.TXTS */
#define IFX_CAN_TXEVENT_E1_TXTS_LEN (16u)

/** \brief Mask for Ifx_CAN_TXEVENT_E1_Bits.TXTS */
#define IFX_CAN_TXEVENT_E1_TXTS_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E1_Bits.TXTS */
#define IFX_CAN_TXEVENT_E1_TXTS_OFF (0u)

/** \brief Length for Ifx_CAN_TXEVENT_E1_Bits.DLC */
#define IFX_CAN_TXEVENT_E1_DLC_LEN (4u)

/** \brief Mask for Ifx_CAN_TXEVENT_E1_Bits.DLC */
#define IFX_CAN_TXEVENT_E1_DLC_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E1_Bits.DLC */
#define IFX_CAN_TXEVENT_E1_DLC_OFF (16u)

/** \brief Length for Ifx_CAN_TXEVENT_E1_Bits.BRS */
#define IFX_CAN_TXEVENT_E1_BRS_LEN (1u)

/** \brief Mask for Ifx_CAN_TXEVENT_E1_Bits.BRS */
#define IFX_CAN_TXEVENT_E1_BRS_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E1_Bits.BRS */
#define IFX_CAN_TXEVENT_E1_BRS_OFF (20u)

/** \brief Length for Ifx_CAN_TXEVENT_E1_Bits.FDF */
#define IFX_CAN_TXEVENT_E1_FDF_LEN (1u)

/** \brief Mask for Ifx_CAN_TXEVENT_E1_Bits.FDF */
#define IFX_CAN_TXEVENT_E1_FDF_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E1_Bits.FDF */
#define IFX_CAN_TXEVENT_E1_FDF_OFF (21u)

/** \brief Length for Ifx_CAN_TXEVENT_E1_Bits.ET */
#define IFX_CAN_TXEVENT_E1_ET_LEN (2u)

/** \brief Mask for Ifx_CAN_TXEVENT_E1_Bits.ET */
#define IFX_CAN_TXEVENT_E1_ET_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E1_Bits.ET */
#define IFX_CAN_TXEVENT_E1_ET_OFF (22u)

/** \brief Length for Ifx_CAN_TXEVENT_E1_Bits.MM */
#define IFX_CAN_TXEVENT_E1_MM_LEN (8u)

/** \brief Mask for Ifx_CAN_TXEVENT_E1_Bits.MM */
#define IFX_CAN_TXEVENT_E1_MM_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXEVENT_E1_Bits.MM */
#define IFX_CAN_TXEVENT_E1_MM_OFF (24u)

/** \brief Length for Ifx_CAN_TXMSG_T0_Bits.ID */
#define IFX_CAN_TXMSG_T0_ID_LEN (29u)

/** \brief Mask for Ifx_CAN_TXMSG_T0_Bits.ID */
#define IFX_CAN_TXMSG_T0_ID_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T0_Bits.ID */
#define IFX_CAN_TXMSG_T0_ID_OFF (0u)

/** \brief Length for Ifx_CAN_TXMSG_T0_Bits.RTR */
#define IFX_CAN_TXMSG_T0_RTR_LEN (1u)

/** \brief Mask for Ifx_CAN_TXMSG_T0_Bits.RTR */
#define IFX_CAN_TXMSG_T0_RTR_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T0_Bits.RTR */
#define IFX_CAN_TXMSG_T0_RTR_OFF (29u)

/** \brief Length for Ifx_CAN_TXMSG_T0_Bits.XTD */
#define IFX_CAN_TXMSG_T0_XTD_LEN (1u)

/** \brief Mask for Ifx_CAN_TXMSG_T0_Bits.XTD */
#define IFX_CAN_TXMSG_T0_XTD_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T0_Bits.XTD */
#define IFX_CAN_TXMSG_T0_XTD_OFF (30u)

/** \brief Length for Ifx_CAN_TXMSG_T0_Bits.ESI */
#define IFX_CAN_TXMSG_T0_ESI_LEN (1u)

/** \brief Mask for Ifx_CAN_TXMSG_T0_Bits.ESI */
#define IFX_CAN_TXMSG_T0_ESI_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T0_Bits.ESI */
#define IFX_CAN_TXMSG_T0_ESI_OFF (31u)

/** \brief Length for Ifx_CAN_TXMSG_T1_Bits.R0 */
#define IFX_CAN_TXMSG_T1_R0_LEN (16u)

/** \brief Mask for Ifx_CAN_TXMSG_T1_Bits.R0 */
#define IFX_CAN_TXMSG_T1_R0_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T1_Bits.R0 */
#define IFX_CAN_TXMSG_T1_R0_OFF (0u)

/** \brief Length for Ifx_CAN_TXMSG_T1_Bits.DLC */
#define IFX_CAN_TXMSG_T1_DLC_LEN (4u)

/** \brief Mask for Ifx_CAN_TXMSG_T1_Bits.DLC */
#define IFX_CAN_TXMSG_T1_DLC_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T1_Bits.DLC */
#define IFX_CAN_TXMSG_T1_DLC_OFF (16u)

/** \brief Length for Ifx_CAN_TXMSG_T1_Bits.BRS */
#define IFX_CAN_TXMSG_T1_BRS_LEN (1u)

/** \brief Mask for Ifx_CAN_TXMSG_T1_Bits.BRS */
#define IFX_CAN_TXMSG_T1_BRS_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T1_Bits.BRS */
#define IFX_CAN_TXMSG_T1_BRS_OFF (20u)

/** \brief Length for Ifx_CAN_TXMSG_T1_Bits.FDF */
#define IFX_CAN_TXMSG_T1_FDF_LEN (1u)

/** \brief Mask for Ifx_CAN_TXMSG_T1_Bits.FDF */
#define IFX_CAN_TXMSG_T1_FDF_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T1_Bits.FDF */
#define IFX_CAN_TXMSG_T1_FDF_OFF (21u)

/** \brief Length for Ifx_CAN_TXMSG_T1_Bits.R22 */
#define IFX_CAN_TXMSG_T1_R22_LEN (1u)

/** \brief Mask for Ifx_CAN_TXMSG_T1_Bits.R22 */
#define IFX_CAN_TXMSG_T1_R22_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T1_Bits.R22 */
#define IFX_CAN_TXMSG_T1_R22_OFF (22u)

/** \brief Length for Ifx_CAN_TXMSG_T1_Bits.EFC */
#define IFX_CAN_TXMSG_T1_EFC_LEN (1u)

/** \brief Mask for Ifx_CAN_TXMSG_T1_Bits.EFC */
#define IFX_CAN_TXMSG_T1_EFC_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T1_Bits.EFC */
#define IFX_CAN_TXMSG_T1_EFC_OFF (23u)

/** \brief Length for Ifx_CAN_TXMSG_T1_Bits.MM */
#define IFX_CAN_TXMSG_T1_MM_LEN (8u)

/** \brief Mask for Ifx_CAN_TXMSG_T1_Bits.MM */
#define IFX_CAN_TXMSG_T1_MM_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_T1_Bits.MM */
#define IFX_CAN_TXMSG_T1_MM_OFF (24u)

/** \brief Length for Ifx_CAN_TXMSG_DB_Bits.DB */
#define IFX_CAN_TXMSG_DB_DB_LEN (8u)

/** \brief Mask for Ifx_CAN_TXMSG_DB_Bits.DB */
#define IFX_CAN_TXMSG_DB_DB_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TXMSG_DB_Bits.DB */
#define IFX_CAN_TXMSG_DB_DB_OFF (0u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM0_Bits.TYPE */
#define IFX_CAN_TRIGMSG_TM0_TYPE_LEN (4u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM0_Bits.TYPE */
#define IFX_CAN_TRIGMSG_TM0_TYPE_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM0_Bits.TYPE */
#define IFX_CAN_TRIGMSG_TM0_TYPE_OFF (0u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM0_Bits.TMEX */
#define IFX_CAN_TRIGMSG_TM0_TMEX_LEN (1u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM0_Bits.TMEX */
#define IFX_CAN_TRIGMSG_TM0_TMEX_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM0_Bits.TMEX */
#define IFX_CAN_TRIGMSG_TM0_TMEX_OFF (4u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM0_Bits.TMIN */
#define IFX_CAN_TRIGMSG_TM0_TMIN_LEN (1u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM0_Bits.TMIN */
#define IFX_CAN_TRIGMSG_TM0_TMIN_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM0_Bits.TMIN */
#define IFX_CAN_TRIGMSG_TM0_TMIN_OFF (5u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM0_Bits.R6 */
#define IFX_CAN_TRIGMSG_TM0_R6_LEN (2u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM0_Bits.R6 */
#define IFX_CAN_TRIGMSG_TM0_R6_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM0_Bits.R6 */
#define IFX_CAN_TRIGMSG_TM0_R6_OFF (6u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM0_Bits.CC */
#define IFX_CAN_TRIGMSG_TM0_CC_LEN (7u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM0_Bits.CC */
#define IFX_CAN_TRIGMSG_TM0_CC_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM0_Bits.CC */
#define IFX_CAN_TRIGMSG_TM0_CC_OFF (8u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM0_Bits.R15 */
#define IFX_CAN_TRIGMSG_TM0_R15_LEN (1u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM0_Bits.R15 */
#define IFX_CAN_TRIGMSG_TM0_R15_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM0_Bits.R15 */
#define IFX_CAN_TRIGMSG_TM0_R15_OFF (15u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM0_Bits.TM */
#define IFX_CAN_TRIGMSG_TM0_TM_LEN (16u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM0_Bits.TM */
#define IFX_CAN_TRIGMSG_TM0_TM_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM0_Bits.TM */
#define IFX_CAN_TRIGMSG_TM0_TM_OFF (16u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM1_Bits.MSC */
#define IFX_CAN_TRIGMSG_TM1_MSC_LEN (3u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM1_Bits.MSC */
#define IFX_CAN_TRIGMSG_TM1_MSC_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM1_Bits.MSC */
#define IFX_CAN_TRIGMSG_TM1_MSC_OFF (0u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM1_Bits.MMR */
#define IFX_CAN_TRIGMSG_TM1_MMR_LEN (7u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM1_Bits.MMR */
#define IFX_CAN_TRIGMSG_TM1_MMR_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM1_Bits.MMR */
#define IFX_CAN_TRIGMSG_TM1_MMR_OFF (16u)

/** \brief Length for Ifx_CAN_TRIGMSG_TM1_Bits.FTYPE */
#define IFX_CAN_TRIGMSG_TM1_FTYPE_LEN (1u)

/** \brief Mask for Ifx_CAN_TRIGMSG_TM1_Bits.FTYPE */
#define IFX_CAN_TRIGMSG_TM1_FTYPE_MSK (0x0u)

/** \brief Offset for Ifx_CAN_TRIGMSG_TM1_Bits.FTYPE */
#define IFX_CAN_TRIGMSG_TM1_FTYPE_OFF (23u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXCAN_BF_H */
