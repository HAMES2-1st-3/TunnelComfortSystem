/**
 * \file IfxScu_bf.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37x_TS_V2.6.0.R0
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
 * \defgroup IfxSfr_Scu_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Scu_Registers
 * 
 */
#ifndef IFXSCU_BF_H
#define IFXSCU_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Scu_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_SCU_ID_Bits.MODREV */
#define IFX_SCU_ID_MODREV_LEN (8u)

/** \brief Mask for Ifx_SCU_ID_Bits.MODREV */
#define IFX_SCU_ID_MODREV_MSK (0xffu)

/** \brief Offset for Ifx_SCU_ID_Bits.MODREV */
#define IFX_SCU_ID_MODREV_OFF (0u)

/** \brief Length for Ifx_SCU_ID_Bits.MODTYPE */
#define IFX_SCU_ID_MODTYPE_LEN (8u)

/** \brief Mask for Ifx_SCU_ID_Bits.MODTYPE */
#define IFX_SCU_ID_MODTYPE_MSK (0xffu)

/** \brief Offset for Ifx_SCU_ID_Bits.MODTYPE */
#define IFX_SCU_ID_MODTYPE_OFF (8u)

/** \brief Length for Ifx_SCU_ID_Bits.MODNUMBER */
#define IFX_SCU_ID_MODNUMBER_LEN (16u)

/** \brief Mask for Ifx_SCU_ID_Bits.MODNUMBER */
#define IFX_SCU_ID_MODNUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_ID_Bits.MODNUMBER */
#define IFX_SCU_ID_MODNUMBER_OFF (16u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.PLLLV */
#define IFX_SCU_OSCCON_PLLLV_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.PLLLV */
#define IFX_SCU_OSCCON_PLLLV_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.PLLLV */
#define IFX_SCU_OSCCON_PLLLV_OFF (1u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.OSCRES */
#define IFX_SCU_OSCCON_OSCRES_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.OSCRES */
#define IFX_SCU_OSCCON_OSCRES_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.OSCRES */
#define IFX_SCU_OSCCON_OSCRES_OFF (2u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.GAINSEL */
#define IFX_SCU_OSCCON_GAINSEL_LEN (2u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.GAINSEL */
#define IFX_SCU_OSCCON_GAINSEL_MSK (0x3u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.GAINSEL */
#define IFX_SCU_OSCCON_GAINSEL_OFF (3u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.MODE */
#define IFX_SCU_OSCCON_MODE_LEN (2u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.MODE */
#define IFX_SCU_OSCCON_MODE_MSK (0x3u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.MODE */
#define IFX_SCU_OSCCON_MODE_OFF (5u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.SHBY */
#define IFX_SCU_OSCCON_SHBY_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.SHBY */
#define IFX_SCU_OSCCON_SHBY_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.SHBY */
#define IFX_SCU_OSCCON_SHBY_OFF (7u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.PLLHV */
#define IFX_SCU_OSCCON_PLLHV_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.PLLHV */
#define IFX_SCU_OSCCON_PLLHV_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.PLLHV */
#define IFX_SCU_OSCCON_PLLHV_OFF (8u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.HYSEN */
#define IFX_SCU_OSCCON_HYSEN_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.HYSEN */
#define IFX_SCU_OSCCON_HYSEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.HYSEN */
#define IFX_SCU_OSCCON_HYSEN_OFF (9u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.HYSCTL */
#define IFX_SCU_OSCCON_HYSCTL_LEN (2u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.HYSCTL */
#define IFX_SCU_OSCCON_HYSCTL_MSK (0x3u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.HYSCTL */
#define IFX_SCU_OSCCON_HYSCTL_OFF (10u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.AMPCTL */
#define IFX_SCU_OSCCON_AMPCTL_LEN (2u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.AMPCTL */
#define IFX_SCU_OSCCON_AMPCTL_MSK (0x3u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.AMPCTL */
#define IFX_SCU_OSCCON_AMPCTL_OFF (12u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.OSCVAL */
#define IFX_SCU_OSCCON_OSCVAL_LEN (5u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.OSCVAL */
#define IFX_SCU_OSCCON_OSCVAL_MSK (0x1fu)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.OSCVAL */
#define IFX_SCU_OSCCON_OSCVAL_OFF (16u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.APREN */
#define IFX_SCU_OSCCON_APREN_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.APREN */
#define IFX_SCU_OSCCON_APREN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.APREN */
#define IFX_SCU_OSCCON_APREN_OFF (23u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.CAP0EN */
#define IFX_SCU_OSCCON_CAP0EN_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.CAP0EN */
#define IFX_SCU_OSCCON_CAP0EN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.CAP0EN */
#define IFX_SCU_OSCCON_CAP0EN_OFF (24u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.CAP1EN */
#define IFX_SCU_OSCCON_CAP1EN_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.CAP1EN */
#define IFX_SCU_OSCCON_CAP1EN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.CAP1EN */
#define IFX_SCU_OSCCON_CAP1EN_OFF (25u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.CAP2EN */
#define IFX_SCU_OSCCON_CAP2EN_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.CAP2EN */
#define IFX_SCU_OSCCON_CAP2EN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.CAP2EN */
#define IFX_SCU_OSCCON_CAP2EN_OFF (26u)

/** \brief Length for Ifx_SCU_OSCCON_Bits.CAP3EN */
#define IFX_SCU_OSCCON_CAP3EN_LEN (1u)

/** \brief Mask for Ifx_SCU_OSCCON_Bits.CAP3EN */
#define IFX_SCU_OSCCON_CAP3EN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OSCCON_Bits.CAP3EN */
#define IFX_SCU_OSCCON_CAP3EN_OFF (27u)

/** \brief Length for Ifx_SCU_SYSPLLSTAT_Bits.PWDSTAT */
#define IFX_SCU_SYSPLLSTAT_PWDSTAT_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSPLLSTAT_Bits.PWDSTAT */
#define IFX_SCU_SYSPLLSTAT_PWDSTAT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSPLLSTAT_Bits.PWDSTAT */
#define IFX_SCU_SYSPLLSTAT_PWDSTAT_OFF (1u)

/** \brief Length for Ifx_SCU_SYSPLLSTAT_Bits.LOCK */
#define IFX_SCU_SYSPLLSTAT_LOCK_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSPLLSTAT_Bits.LOCK */
#define IFX_SCU_SYSPLLSTAT_LOCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSPLLSTAT_Bits.LOCK */
#define IFX_SCU_SYSPLLSTAT_LOCK_OFF (2u)

/** \brief Length for Ifx_SCU_SYSPLLSTAT_Bits.K2RDY */
#define IFX_SCU_SYSPLLSTAT_K2RDY_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSPLLSTAT_Bits.K2RDY */
#define IFX_SCU_SYSPLLSTAT_K2RDY_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSPLLSTAT_Bits.K2RDY */
#define IFX_SCU_SYSPLLSTAT_K2RDY_OFF (5u)

/** \brief Length for Ifx_SCU_SYSPLLSTAT_Bits.MODRUN */
#define IFX_SCU_SYSPLLSTAT_MODRUN_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSPLLSTAT_Bits.MODRUN */
#define IFX_SCU_SYSPLLSTAT_MODRUN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSPLLSTAT_Bits.MODRUN */
#define IFX_SCU_SYSPLLSTAT_MODRUN_OFF (7u)

/** \brief Length for Ifx_SCU_SYSPLLCON0_Bits.MODEN */
#define IFX_SCU_SYSPLLCON0_MODEN_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSPLLCON0_Bits.MODEN */
#define IFX_SCU_SYSPLLCON0_MODEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSPLLCON0_Bits.MODEN */
#define IFX_SCU_SYSPLLCON0_MODEN_OFF (2u)

/** \brief Length for Ifx_SCU_SYSPLLCON0_Bits.NDIV */
#define IFX_SCU_SYSPLLCON0_NDIV_LEN (7u)

/** \brief Mask for Ifx_SCU_SYSPLLCON0_Bits.NDIV */
#define IFX_SCU_SYSPLLCON0_NDIV_MSK (0x7fu)

/** \brief Offset for Ifx_SCU_SYSPLLCON0_Bits.NDIV */
#define IFX_SCU_SYSPLLCON0_NDIV_OFF (9u)

/** \brief Length for Ifx_SCU_SYSPLLCON0_Bits.PLLPWD */
#define IFX_SCU_SYSPLLCON0_PLLPWD_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSPLLCON0_Bits.PLLPWD */
#define IFX_SCU_SYSPLLCON0_PLLPWD_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSPLLCON0_Bits.PLLPWD */
#define IFX_SCU_SYSPLLCON0_PLLPWD_OFF (16u)

/** \brief Length for Ifx_SCU_SYSPLLCON0_Bits.RESLD */
#define IFX_SCU_SYSPLLCON0_RESLD_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSPLLCON0_Bits.RESLD */
#define IFX_SCU_SYSPLLCON0_RESLD_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSPLLCON0_Bits.RESLD */
#define IFX_SCU_SYSPLLCON0_RESLD_OFF (18u)

/** \brief Length for Ifx_SCU_SYSPLLCON0_Bits.PDIV */
#define IFX_SCU_SYSPLLCON0_PDIV_LEN (3u)

/** \brief Mask for Ifx_SCU_SYSPLLCON0_Bits.PDIV */
#define IFX_SCU_SYSPLLCON0_PDIV_MSK (0x7u)

/** \brief Offset for Ifx_SCU_SYSPLLCON0_Bits.PDIV */
#define IFX_SCU_SYSPLLCON0_PDIV_OFF (24u)

/** \brief Length for Ifx_SCU_SYSPLLCON0_Bits.INSEL */
#define IFX_SCU_SYSPLLCON0_INSEL_LEN (2u)

/** \brief Mask for Ifx_SCU_SYSPLLCON0_Bits.INSEL */
#define IFX_SCU_SYSPLLCON0_INSEL_MSK (0x3u)

/** \brief Offset for Ifx_SCU_SYSPLLCON0_Bits.INSEL */
#define IFX_SCU_SYSPLLCON0_INSEL_OFF (30u)

/** \brief Length for Ifx_SCU_SYSPLLCON1_Bits.K2DIV */
#define IFX_SCU_SYSPLLCON1_K2DIV_LEN (3u)

/** \brief Mask for Ifx_SCU_SYSPLLCON1_Bits.K2DIV */
#define IFX_SCU_SYSPLLCON1_K2DIV_MSK (0x7u)

/** \brief Offset for Ifx_SCU_SYSPLLCON1_Bits.K2DIV */
#define IFX_SCU_SYSPLLCON1_K2DIV_OFF (0u)

/** \brief Length for Ifx_SCU_SYSPLLCON2_Bits.MODCFG */
#define IFX_SCU_SYSPLLCON2_MODCFG_LEN (16u)

/** \brief Mask for Ifx_SCU_SYSPLLCON2_Bits.MODCFG */
#define IFX_SCU_SYSPLLCON2_MODCFG_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_SYSPLLCON2_Bits.MODCFG */
#define IFX_SCU_SYSPLLCON2_MODCFG_OFF (0u)

/** \brief Length for Ifx_SCU_PERPLLSTAT_Bits.PWDSTAT */
#define IFX_SCU_PERPLLSTAT_PWDSTAT_LEN (1u)

/** \brief Mask for Ifx_SCU_PERPLLSTAT_Bits.PWDSTAT */
#define IFX_SCU_PERPLLSTAT_PWDSTAT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PERPLLSTAT_Bits.PWDSTAT */
#define IFX_SCU_PERPLLSTAT_PWDSTAT_OFF (1u)

/** \brief Length for Ifx_SCU_PERPLLSTAT_Bits.LOCK */
#define IFX_SCU_PERPLLSTAT_LOCK_LEN (1u)

/** \brief Mask for Ifx_SCU_PERPLLSTAT_Bits.LOCK */
#define IFX_SCU_PERPLLSTAT_LOCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PERPLLSTAT_Bits.LOCK */
#define IFX_SCU_PERPLLSTAT_LOCK_OFF (2u)

/** \brief Length for Ifx_SCU_PERPLLSTAT_Bits.K3RDY */
#define IFX_SCU_PERPLLSTAT_K3RDY_LEN (1u)

/** \brief Mask for Ifx_SCU_PERPLLSTAT_Bits.K3RDY */
#define IFX_SCU_PERPLLSTAT_K3RDY_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PERPLLSTAT_Bits.K3RDY */
#define IFX_SCU_PERPLLSTAT_K3RDY_OFF (4u)

/** \brief Length for Ifx_SCU_PERPLLSTAT_Bits.K2RDY */
#define IFX_SCU_PERPLLSTAT_K2RDY_LEN (1u)

/** \brief Mask for Ifx_SCU_PERPLLSTAT_Bits.K2RDY */
#define IFX_SCU_PERPLLSTAT_K2RDY_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PERPLLSTAT_Bits.K2RDY */
#define IFX_SCU_PERPLLSTAT_K2RDY_OFF (5u)

/** \brief Length for Ifx_SCU_PERPLLCON0_Bits.DIVBY */
#define IFX_SCU_PERPLLCON0_DIVBY_LEN (1u)

/** \brief Mask for Ifx_SCU_PERPLLCON0_Bits.DIVBY */
#define IFX_SCU_PERPLLCON0_DIVBY_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PERPLLCON0_Bits.DIVBY */
#define IFX_SCU_PERPLLCON0_DIVBY_OFF (0u)

/** \brief Length for Ifx_SCU_PERPLLCON0_Bits.NDIV */
#define IFX_SCU_PERPLLCON0_NDIV_LEN (7u)

/** \brief Mask for Ifx_SCU_PERPLLCON0_Bits.NDIV */
#define IFX_SCU_PERPLLCON0_NDIV_MSK (0x7fu)

/** \brief Offset for Ifx_SCU_PERPLLCON0_Bits.NDIV */
#define IFX_SCU_PERPLLCON0_NDIV_OFF (9u)

/** \brief Length for Ifx_SCU_PERPLLCON0_Bits.PLLPWD */
#define IFX_SCU_PERPLLCON0_PLLPWD_LEN (1u)

/** \brief Mask for Ifx_SCU_PERPLLCON0_Bits.PLLPWD */
#define IFX_SCU_PERPLLCON0_PLLPWD_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PERPLLCON0_Bits.PLLPWD */
#define IFX_SCU_PERPLLCON0_PLLPWD_OFF (16u)

/** \brief Length for Ifx_SCU_PERPLLCON0_Bits.RESLD */
#define IFX_SCU_PERPLLCON0_RESLD_LEN (1u)

/** \brief Mask for Ifx_SCU_PERPLLCON0_Bits.RESLD */
#define IFX_SCU_PERPLLCON0_RESLD_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PERPLLCON0_Bits.RESLD */
#define IFX_SCU_PERPLLCON0_RESLD_OFF (18u)

/** \brief Length for Ifx_SCU_PERPLLCON0_Bits.PDIV */
#define IFX_SCU_PERPLLCON0_PDIV_LEN (3u)

/** \brief Mask for Ifx_SCU_PERPLLCON0_Bits.PDIV */
#define IFX_SCU_PERPLLCON0_PDIV_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PERPLLCON0_Bits.PDIV */
#define IFX_SCU_PERPLLCON0_PDIV_OFF (24u)

/** \brief Length for Ifx_SCU_PERPLLCON1_Bits.K2DIV */
#define IFX_SCU_PERPLLCON1_K2DIV_LEN (3u)

/** \brief Mask for Ifx_SCU_PERPLLCON1_Bits.K2DIV */
#define IFX_SCU_PERPLLCON1_K2DIV_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PERPLLCON1_Bits.K2DIV */
#define IFX_SCU_PERPLLCON1_K2DIV_OFF (0u)

/** \brief Length for Ifx_SCU_PERPLLCON1_Bits.K3DIV */
#define IFX_SCU_PERPLLCON1_K3DIV_LEN (3u)

/** \brief Mask for Ifx_SCU_PERPLLCON1_Bits.K3DIV */
#define IFX_SCU_PERPLLCON1_K3DIV_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PERPLLCON1_Bits.K3DIV */
#define IFX_SCU_PERPLLCON1_K3DIV_OFF (8u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.STMDIV */
#define IFX_SCU_CCUCON0_STMDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.STMDIV */
#define IFX_SCU_CCUCON0_STMDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.STMDIV */
#define IFX_SCU_CCUCON0_STMDIV_OFF (0u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.GTMDIV */
#define IFX_SCU_CCUCON0_GTMDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.GTMDIV */
#define IFX_SCU_CCUCON0_GTMDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.GTMDIV */
#define IFX_SCU_CCUCON0_GTMDIV_OFF (4u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.SRIDIV */
#define IFX_SCU_CCUCON0_SRIDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.SRIDIV */
#define IFX_SCU_CCUCON0_SRIDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.SRIDIV */
#define IFX_SCU_CCUCON0_SRIDIV_OFF (8u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.LPDIV */
#define IFX_SCU_CCUCON0_LPDIV_LEN (3u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.LPDIV */
#define IFX_SCU_CCUCON0_LPDIV_MSK (0x7u)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.LPDIV */
#define IFX_SCU_CCUCON0_LPDIV_OFF (12u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.SPBDIV */
#define IFX_SCU_CCUCON0_SPBDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.SPBDIV */
#define IFX_SCU_CCUCON0_SPBDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.SPBDIV */
#define IFX_SCU_CCUCON0_SPBDIV_OFF (16u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.BBBDIV */
#define IFX_SCU_CCUCON0_BBBDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.BBBDIV */
#define IFX_SCU_CCUCON0_BBBDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.BBBDIV */
#define IFX_SCU_CCUCON0_BBBDIV_OFF (20u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.FSIDIV */
#define IFX_SCU_CCUCON0_FSIDIV_LEN (2u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.FSIDIV */
#define IFX_SCU_CCUCON0_FSIDIV_MSK (0x3u)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.FSIDIV */
#define IFX_SCU_CCUCON0_FSIDIV_OFF (24u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.FSI2DIV */
#define IFX_SCU_CCUCON0_FSI2DIV_LEN (2u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.FSI2DIV */
#define IFX_SCU_CCUCON0_FSI2DIV_MSK (0x3u)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.FSI2DIV */
#define IFX_SCU_CCUCON0_FSI2DIV_OFF (26u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.CLKSEL */
#define IFX_SCU_CCUCON0_CLKSEL_LEN (2u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.CLKSEL */
#define IFX_SCU_CCUCON0_CLKSEL_MSK (0x3u)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.CLKSEL */
#define IFX_SCU_CCUCON0_CLKSEL_OFF (28u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.UP */
#define IFX_SCU_CCUCON0_UP_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.UP */
#define IFX_SCU_CCUCON0_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.UP */
#define IFX_SCU_CCUCON0_UP_OFF (30u)

/** \brief Length for Ifx_SCU_CCUCON0_Bits.LCK */
#define IFX_SCU_CCUCON0_LCK_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON0_Bits.LCK */
#define IFX_SCU_CCUCON0_LCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON0_Bits.LCK */
#define IFX_SCU_CCUCON0_LCK_OFF (31u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.MCANDIV */
#define IFX_SCU_CCUCON1_MCANDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.MCANDIV */
#define IFX_SCU_CCUCON1_MCANDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.MCANDIV */
#define IFX_SCU_CCUCON1_MCANDIV_OFF (0u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.CLKSELMCAN */
#define IFX_SCU_CCUCON1_CLKSELMCAN_LEN (2u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.CLKSELMCAN */
#define IFX_SCU_CCUCON1_CLKSELMCAN_MSK (0x3u)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.CLKSELMCAN */
#define IFX_SCU_CCUCON1_CLKSELMCAN_OFF (4u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.PLL1DIVDIS */
#define IFX_SCU_CCUCON1_PLL1DIVDIS_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.PLL1DIVDIS */
#define IFX_SCU_CCUCON1_PLL1DIVDIS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.PLL1DIVDIS */
#define IFX_SCU_CCUCON1_PLL1DIVDIS_OFF (7u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.I2CDIV */
#define IFX_SCU_CCUCON1_I2CDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.I2CDIV */
#define IFX_SCU_CCUCON1_I2CDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.I2CDIV */
#define IFX_SCU_CCUCON1_I2CDIV_OFF (8u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.MSCDIV */
#define IFX_SCU_CCUCON1_MSCDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.MSCDIV */
#define IFX_SCU_CCUCON1_MSCDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.MSCDIV */
#define IFX_SCU_CCUCON1_MSCDIV_OFF (16u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.CLKSELMSC */
#define IFX_SCU_CCUCON1_CLKSELMSC_LEN (2u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.CLKSELMSC */
#define IFX_SCU_CCUCON1_CLKSELMSC_MSK (0x3u)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.CLKSELMSC */
#define IFX_SCU_CCUCON1_CLKSELMSC_OFF (20u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.QSPIDIV */
#define IFX_SCU_CCUCON1_QSPIDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.QSPIDIV */
#define IFX_SCU_CCUCON1_QSPIDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.QSPIDIV */
#define IFX_SCU_CCUCON1_QSPIDIV_OFF (24u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.CLKSELQSPI */
#define IFX_SCU_CCUCON1_CLKSELQSPI_LEN (2u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.CLKSELQSPI */
#define IFX_SCU_CCUCON1_CLKSELQSPI_MSK (0x3u)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.CLKSELQSPI */
#define IFX_SCU_CCUCON1_CLKSELQSPI_OFF (28u)

/** \brief Length for Ifx_SCU_CCUCON1_Bits.LCK */
#define IFX_SCU_CCUCON1_LCK_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON1_Bits.LCK */
#define IFX_SCU_CCUCON1_LCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON1_Bits.LCK */
#define IFX_SCU_CCUCON1_LCK_OFF (31u)

/** \brief Length for Ifx_SCU_FDR_Bits.STEP */
#define IFX_SCU_FDR_STEP_LEN (10u)

/** \brief Mask for Ifx_SCU_FDR_Bits.STEP */
#define IFX_SCU_FDR_STEP_MSK (0x3ffu)

/** \brief Offset for Ifx_SCU_FDR_Bits.STEP */
#define IFX_SCU_FDR_STEP_OFF (0u)

/** \brief Length for Ifx_SCU_FDR_Bits.DM */
#define IFX_SCU_FDR_DM_LEN (2u)

/** \brief Mask for Ifx_SCU_FDR_Bits.DM */
#define IFX_SCU_FDR_DM_MSK (0x3u)

/** \brief Offset for Ifx_SCU_FDR_Bits.DM */
#define IFX_SCU_FDR_DM_OFF (14u)

/** \brief Length for Ifx_SCU_FDR_Bits.RESULT */
#define IFX_SCU_FDR_RESULT_LEN (10u)

/** \brief Mask for Ifx_SCU_FDR_Bits.RESULT */
#define IFX_SCU_FDR_RESULT_MSK (0x3ffu)

/** \brief Offset for Ifx_SCU_FDR_Bits.RESULT */
#define IFX_SCU_FDR_RESULT_OFF (16u)

/** \brief Length for Ifx_SCU_FDR_Bits.DISCLK */
#define IFX_SCU_FDR_DISCLK_LEN (1u)

/** \brief Mask for Ifx_SCU_FDR_Bits.DISCLK */
#define IFX_SCU_FDR_DISCLK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FDR_Bits.DISCLK */
#define IFX_SCU_FDR_DISCLK_OFF (31u)

/** \brief Length for Ifx_SCU_EXTCON_Bits.EN0 */
#define IFX_SCU_EXTCON_EN0_LEN (1u)

/** \brief Mask for Ifx_SCU_EXTCON_Bits.EN0 */
#define IFX_SCU_EXTCON_EN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EXTCON_Bits.EN0 */
#define IFX_SCU_EXTCON_EN0_OFF (0u)

/** \brief Length for Ifx_SCU_EXTCON_Bits.SEL0 */
#define IFX_SCU_EXTCON_SEL0_LEN (4u)

/** \brief Mask for Ifx_SCU_EXTCON_Bits.SEL0 */
#define IFX_SCU_EXTCON_SEL0_MSK (0xfu)

/** \brief Offset for Ifx_SCU_EXTCON_Bits.SEL0 */
#define IFX_SCU_EXTCON_SEL0_OFF (2u)

/** \brief Length for Ifx_SCU_EXTCON_Bits.EN1 */
#define IFX_SCU_EXTCON_EN1_LEN (1u)

/** \brief Mask for Ifx_SCU_EXTCON_Bits.EN1 */
#define IFX_SCU_EXTCON_EN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EXTCON_Bits.EN1 */
#define IFX_SCU_EXTCON_EN1_OFF (16u)

/** \brief Length for Ifx_SCU_EXTCON_Bits.NSEL */
#define IFX_SCU_EXTCON_NSEL_LEN (1u)

/** \brief Mask for Ifx_SCU_EXTCON_Bits.NSEL */
#define IFX_SCU_EXTCON_NSEL_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EXTCON_Bits.NSEL */
#define IFX_SCU_EXTCON_NSEL_OFF (17u)

/** \brief Length for Ifx_SCU_EXTCON_Bits.SEL1 */
#define IFX_SCU_EXTCON_SEL1_LEN (4u)

/** \brief Mask for Ifx_SCU_EXTCON_Bits.SEL1 */
#define IFX_SCU_EXTCON_SEL1_MSK (0xfu)

/** \brief Offset for Ifx_SCU_EXTCON_Bits.SEL1 */
#define IFX_SCU_EXTCON_SEL1_OFF (18u)

/** \brief Length for Ifx_SCU_EXTCON_Bits.DIV1 */
#define IFX_SCU_EXTCON_DIV1_LEN (8u)

/** \brief Mask for Ifx_SCU_EXTCON_Bits.DIV1 */
#define IFX_SCU_EXTCON_DIV1_MSK (0xffu)

/** \brief Offset for Ifx_SCU_EXTCON_Bits.DIV1 */
#define IFX_SCU_EXTCON_DIV1_OFF (24u)

/** \brief Length for Ifx_SCU_CCUCON2_Bits.ASCLINFDIV */
#define IFX_SCU_CCUCON2_ASCLINFDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON2_Bits.ASCLINFDIV */
#define IFX_SCU_CCUCON2_ASCLINFDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON2_Bits.ASCLINFDIV */
#define IFX_SCU_CCUCON2_ASCLINFDIV_OFF (0u)

/** \brief Length for Ifx_SCU_CCUCON2_Bits.ASCLINSDIV */
#define IFX_SCU_CCUCON2_ASCLINSDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON2_Bits.ASCLINSDIV */
#define IFX_SCU_CCUCON2_ASCLINSDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON2_Bits.ASCLINSDIV */
#define IFX_SCU_CCUCON2_ASCLINSDIV_OFF (8u)

/** \brief Length for Ifx_SCU_CCUCON2_Bits.CLKSELASCLINS */
#define IFX_SCU_CCUCON2_CLKSELASCLINS_LEN (2u)

/** \brief Mask for Ifx_SCU_CCUCON2_Bits.CLKSELASCLINS */
#define IFX_SCU_CCUCON2_CLKSELASCLINS_MSK (0x3u)

/** \brief Offset for Ifx_SCU_CCUCON2_Bits.CLKSELASCLINS */
#define IFX_SCU_CCUCON2_CLKSELASCLINS_OFF (12u)

/** \brief Length for Ifx_SCU_CCUCON2_Bits.ERAYPERON */
#define IFX_SCU_CCUCON2_ERAYPERON_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON2_Bits.ERAYPERON */
#define IFX_SCU_CCUCON2_ERAYPERON_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON2_Bits.ERAYPERON */
#define IFX_SCU_CCUCON2_ERAYPERON_OFF (25u)

/** \brief Length for Ifx_SCU_CCUCON2_Bits.LCK */
#define IFX_SCU_CCUCON2_LCK_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON2_Bits.LCK */
#define IFX_SCU_CCUCON2_LCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON2_Bits.LCK */
#define IFX_SCU_CCUCON2_LCK_OFF (31u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.PLL0MONEN */
#define IFX_SCU_CCUCON3_PLL0MONEN_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.PLL0MONEN */
#define IFX_SCU_CCUCON3_PLL0MONEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.PLL0MONEN */
#define IFX_SCU_CCUCON3_PLL0MONEN_OFF (0u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.PLL1MONEN */
#define IFX_SCU_CCUCON3_PLL1MONEN_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.PLL1MONEN */
#define IFX_SCU_CCUCON3_PLL1MONEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.PLL1MONEN */
#define IFX_SCU_CCUCON3_PLL1MONEN_OFF (1u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.PLL2MONEN */
#define IFX_SCU_CCUCON3_PLL2MONEN_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.PLL2MONEN */
#define IFX_SCU_CCUCON3_PLL2MONEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.PLL2MONEN */
#define IFX_SCU_CCUCON3_PLL2MONEN_OFF (2u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.SPBMONEN */
#define IFX_SCU_CCUCON3_SPBMONEN_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.SPBMONEN */
#define IFX_SCU_CCUCON3_SPBMONEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.SPBMONEN */
#define IFX_SCU_CCUCON3_SPBMONEN_OFF (3u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.BACKMONEN */
#define IFX_SCU_CCUCON3_BACKMONEN_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.BACKMONEN */
#define IFX_SCU_CCUCON3_BACKMONEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.BACKMONEN */
#define IFX_SCU_CCUCON3_BACKMONEN_OFF (4u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.PLL0MONTST */
#define IFX_SCU_CCUCON3_PLL0MONTST_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.PLL0MONTST */
#define IFX_SCU_CCUCON3_PLL0MONTST_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.PLL0MONTST */
#define IFX_SCU_CCUCON3_PLL0MONTST_OFF (8u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.PLL1MONTST */
#define IFX_SCU_CCUCON3_PLL1MONTST_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.PLL1MONTST */
#define IFX_SCU_CCUCON3_PLL1MONTST_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.PLL1MONTST */
#define IFX_SCU_CCUCON3_PLL1MONTST_OFF (9u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.PLL2MONTST */
#define IFX_SCU_CCUCON3_PLL2MONTST_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.PLL2MONTST */
#define IFX_SCU_CCUCON3_PLL2MONTST_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.PLL2MONTST */
#define IFX_SCU_CCUCON3_PLL2MONTST_OFF (10u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.SPBMONTST */
#define IFX_SCU_CCUCON3_SPBMONTST_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.SPBMONTST */
#define IFX_SCU_CCUCON3_SPBMONTST_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.SPBMONTST */
#define IFX_SCU_CCUCON3_SPBMONTST_OFF (11u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.BACKMONTST */
#define IFX_SCU_CCUCON3_BACKMONTST_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.BACKMONTST */
#define IFX_SCU_CCUCON3_BACKMONTST_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.BACKMONTST */
#define IFX_SCU_CCUCON3_BACKMONTST_OFF (12u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.UP */
#define IFX_SCU_CCUCON3_UP_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.UP */
#define IFX_SCU_CCUCON3_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.UP */
#define IFX_SCU_CCUCON3_UP_OFF (30u)

/** \brief Length for Ifx_SCU_CCUCON3_Bits.LCK */
#define IFX_SCU_CCUCON3_LCK_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON3_Bits.LCK */
#define IFX_SCU_CCUCON3_LCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON3_Bits.LCK */
#define IFX_SCU_CCUCON3_LCK_OFF (31u)

/** \brief Length for Ifx_SCU_CCUCON4_Bits.LOTHR */
#define IFX_SCU_CCUCON4_LOTHR_LEN (12u)

/** \brief Mask for Ifx_SCU_CCUCON4_Bits.LOTHR */
#define IFX_SCU_CCUCON4_LOTHR_MSK (0xfffu)

/** \brief Offset for Ifx_SCU_CCUCON4_Bits.LOTHR */
#define IFX_SCU_CCUCON4_LOTHR_OFF (0u)

/** \brief Length for Ifx_SCU_CCUCON4_Bits.UPTHR */
#define IFX_SCU_CCUCON4_UPTHR_LEN (12u)

/** \brief Mask for Ifx_SCU_CCUCON4_Bits.UPTHR */
#define IFX_SCU_CCUCON4_UPTHR_MSK (0xfffu)

/** \brief Offset for Ifx_SCU_CCUCON4_Bits.UPTHR */
#define IFX_SCU_CCUCON4_UPTHR_OFF (12u)

/** \brief Length for Ifx_SCU_CCUCON4_Bits.MONEN */
#define IFX_SCU_CCUCON4_MONEN_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON4_Bits.MONEN */
#define IFX_SCU_CCUCON4_MONEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON4_Bits.MONEN */
#define IFX_SCU_CCUCON4_MONEN_OFF (24u)

/** \brief Length for Ifx_SCU_CCUCON4_Bits.MONTST */
#define IFX_SCU_CCUCON4_MONTST_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON4_Bits.MONTST */
#define IFX_SCU_CCUCON4_MONTST_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON4_Bits.MONTST */
#define IFX_SCU_CCUCON4_MONTST_OFF (25u)

/** \brief Length for Ifx_SCU_CCUCON4_Bits.UP */
#define IFX_SCU_CCUCON4_UP_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON4_Bits.UP */
#define IFX_SCU_CCUCON4_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON4_Bits.UP */
#define IFX_SCU_CCUCON4_UP_OFF (30u)

/** \brief Length for Ifx_SCU_CCUCON4_Bits.LCK */
#define IFX_SCU_CCUCON4_LCK_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON4_Bits.LCK */
#define IFX_SCU_CCUCON4_LCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON4_Bits.LCK */
#define IFX_SCU_CCUCON4_LCK_OFF (31u)

/** \brief Length for Ifx_SCU_CCUCON5_Bits.GETHDIV */
#define IFX_SCU_CCUCON5_GETHDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON5_Bits.GETHDIV */
#define IFX_SCU_CCUCON5_GETHDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON5_Bits.GETHDIV */
#define IFX_SCU_CCUCON5_GETHDIV_OFF (0u)

/** \brief Length for Ifx_SCU_CCUCON5_Bits.MCANHDIV */
#define IFX_SCU_CCUCON5_MCANHDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_CCUCON5_Bits.MCANHDIV */
#define IFX_SCU_CCUCON5_MCANHDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CCUCON5_Bits.MCANHDIV */
#define IFX_SCU_CCUCON5_MCANHDIV_OFF (4u)

/** \brief Length for Ifx_SCU_CCUCON5_Bits.UP */
#define IFX_SCU_CCUCON5_UP_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON5_Bits.UP */
#define IFX_SCU_CCUCON5_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON5_Bits.UP */
#define IFX_SCU_CCUCON5_UP_OFF (30u)

/** \brief Length for Ifx_SCU_CCUCON5_Bits.LCK */
#define IFX_SCU_CCUCON5_LCK_LEN (1u)

/** \brief Mask for Ifx_SCU_CCUCON5_Bits.LCK */
#define IFX_SCU_CCUCON5_LCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CCUCON5_Bits.LCK */
#define IFX_SCU_CCUCON5_LCK_OFF (31u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.ESR0 */
#define IFX_SCU_RSTSTAT_ESR0_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.ESR0 */
#define IFX_SCU_RSTSTAT_ESR0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.ESR0 */
#define IFX_SCU_RSTSTAT_ESR0_OFF (0u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.ESR1 */
#define IFX_SCU_RSTSTAT_ESR1_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.ESR1 */
#define IFX_SCU_RSTSTAT_ESR1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.ESR1 */
#define IFX_SCU_RSTSTAT_ESR1_OFF (1u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.SMU */
#define IFX_SCU_RSTSTAT_SMU_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.SMU */
#define IFX_SCU_RSTSTAT_SMU_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.SMU */
#define IFX_SCU_RSTSTAT_SMU_OFF (3u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.SW */
#define IFX_SCU_RSTSTAT_SW_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.SW */
#define IFX_SCU_RSTSTAT_SW_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.SW */
#define IFX_SCU_RSTSTAT_SW_OFF (4u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.STM0 */
#define IFX_SCU_RSTSTAT_STM0_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.STM0 */
#define IFX_SCU_RSTSTAT_STM0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.STM0 */
#define IFX_SCU_RSTSTAT_STM0_OFF (5u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.STM1 */
#define IFX_SCU_RSTSTAT_STM1_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.STM1 */
#define IFX_SCU_RSTSTAT_STM1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.STM1 */
#define IFX_SCU_RSTSTAT_STM1_OFF (6u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.STM2 */
#define IFX_SCU_RSTSTAT_STM2_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.STM2 */
#define IFX_SCU_RSTSTAT_STM2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.STM2 */
#define IFX_SCU_RSTSTAT_STM2_OFF (7u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.PORST */
#define IFX_SCU_RSTSTAT_PORST_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.PORST */
#define IFX_SCU_RSTSTAT_PORST_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.PORST */
#define IFX_SCU_RSTSTAT_PORST_OFF (16u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.CB0 */
#define IFX_SCU_RSTSTAT_CB0_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.CB0 */
#define IFX_SCU_RSTSTAT_CB0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.CB0 */
#define IFX_SCU_RSTSTAT_CB0_OFF (18u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.CB1 */
#define IFX_SCU_RSTSTAT_CB1_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.CB1 */
#define IFX_SCU_RSTSTAT_CB1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.CB1 */
#define IFX_SCU_RSTSTAT_CB1_OFF (19u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.CB3 */
#define IFX_SCU_RSTSTAT_CB3_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.CB3 */
#define IFX_SCU_RSTSTAT_CB3_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.CB3 */
#define IFX_SCU_RSTSTAT_CB3_OFF (20u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.EVRC */
#define IFX_SCU_RSTSTAT_EVRC_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.EVRC */
#define IFX_SCU_RSTSTAT_EVRC_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.EVRC */
#define IFX_SCU_RSTSTAT_EVRC_OFF (23u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.EVR33 */
#define IFX_SCU_RSTSTAT_EVR33_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.EVR33 */
#define IFX_SCU_RSTSTAT_EVR33_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.EVR33 */
#define IFX_SCU_RSTSTAT_EVR33_OFF (24u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.SWD */
#define IFX_SCU_RSTSTAT_SWD_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.SWD */
#define IFX_SCU_RSTSTAT_SWD_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.SWD */
#define IFX_SCU_RSTSTAT_SWD_OFF (25u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.HSMS */
#define IFX_SCU_RSTSTAT_HSMS_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.HSMS */
#define IFX_SCU_RSTSTAT_HSMS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.HSMS */
#define IFX_SCU_RSTSTAT_HSMS_OFF (26u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.HSMA */
#define IFX_SCU_RSTSTAT_HSMA_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.HSMA */
#define IFX_SCU_RSTSTAT_HSMA_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.HSMA */
#define IFX_SCU_RSTSTAT_HSMA_OFF (27u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.STBYR */
#define IFX_SCU_RSTSTAT_STBYR_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.STBYR */
#define IFX_SCU_RSTSTAT_STBYR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.STBYR */
#define IFX_SCU_RSTSTAT_STBYR_OFF (28u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.LBPORST */
#define IFX_SCU_RSTSTAT_LBPORST_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.LBPORST */
#define IFX_SCU_RSTSTAT_LBPORST_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.LBPORST */
#define IFX_SCU_RSTSTAT_LBPORST_OFF (29u)

/** \brief Length for Ifx_SCU_RSTSTAT_Bits.LBTERM */
#define IFX_SCU_RSTSTAT_LBTERM_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTSTAT_Bits.LBTERM */
#define IFX_SCU_RSTSTAT_LBTERM_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTSTAT_Bits.LBTERM */
#define IFX_SCU_RSTSTAT_LBTERM_OFF (30u)

/** \brief Length for Ifx_SCU_RSTCON_Bits.ESR0 */
#define IFX_SCU_RSTCON_ESR0_LEN (2u)

/** \brief Mask for Ifx_SCU_RSTCON_Bits.ESR0 */
#define IFX_SCU_RSTCON_ESR0_MSK (0x3u)

/** \brief Offset for Ifx_SCU_RSTCON_Bits.ESR0 */
#define IFX_SCU_RSTCON_ESR0_OFF (0u)

/** \brief Length for Ifx_SCU_RSTCON_Bits.ESR1 */
#define IFX_SCU_RSTCON_ESR1_LEN (2u)

/** \brief Mask for Ifx_SCU_RSTCON_Bits.ESR1 */
#define IFX_SCU_RSTCON_ESR1_MSK (0x3u)

/** \brief Offset for Ifx_SCU_RSTCON_Bits.ESR1 */
#define IFX_SCU_RSTCON_ESR1_OFF (2u)

/** \brief Length for Ifx_SCU_RSTCON_Bits.SMU */
#define IFX_SCU_RSTCON_SMU_LEN (2u)

/** \brief Mask for Ifx_SCU_RSTCON_Bits.SMU */
#define IFX_SCU_RSTCON_SMU_MSK (0x3u)

/** \brief Offset for Ifx_SCU_RSTCON_Bits.SMU */
#define IFX_SCU_RSTCON_SMU_OFF (6u)

/** \brief Length for Ifx_SCU_RSTCON_Bits.SW */
#define IFX_SCU_RSTCON_SW_LEN (2u)

/** \brief Mask for Ifx_SCU_RSTCON_Bits.SW */
#define IFX_SCU_RSTCON_SW_MSK (0x3u)

/** \brief Offset for Ifx_SCU_RSTCON_Bits.SW */
#define IFX_SCU_RSTCON_SW_OFF (8u)

/** \brief Length for Ifx_SCU_RSTCON_Bits.STM0 */
#define IFX_SCU_RSTCON_STM0_LEN (2u)

/** \brief Mask for Ifx_SCU_RSTCON_Bits.STM0 */
#define IFX_SCU_RSTCON_STM0_MSK (0x3u)

/** \brief Offset for Ifx_SCU_RSTCON_Bits.STM0 */
#define IFX_SCU_RSTCON_STM0_OFF (10u)

/** \brief Length for Ifx_SCU_RSTCON_Bits.STM1 */
#define IFX_SCU_RSTCON_STM1_LEN (2u)

/** \brief Mask for Ifx_SCU_RSTCON_Bits.STM1 */
#define IFX_SCU_RSTCON_STM1_MSK (0x3u)

/** \brief Offset for Ifx_SCU_RSTCON_Bits.STM1 */
#define IFX_SCU_RSTCON_STM1_OFF (12u)

/** \brief Length for Ifx_SCU_RSTCON_Bits.STM2 */
#define IFX_SCU_RSTCON_STM2_LEN (2u)

/** \brief Mask for Ifx_SCU_RSTCON_Bits.STM2 */
#define IFX_SCU_RSTCON_STM2_MSK (0x3u)

/** \brief Offset for Ifx_SCU_RSTCON_Bits.STM2 */
#define IFX_SCU_RSTCON_STM2_OFF (14u)

/** \brief Length for Ifx_SCU_ARSTDIS_Bits.STM0DIS */
#define IFX_SCU_ARSTDIS_STM0DIS_LEN (1u)

/** \brief Mask for Ifx_SCU_ARSTDIS_Bits.STM0DIS */
#define IFX_SCU_ARSTDIS_STM0DIS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ARSTDIS_Bits.STM0DIS */
#define IFX_SCU_ARSTDIS_STM0DIS_OFF (0u)

/** \brief Length for Ifx_SCU_ARSTDIS_Bits.STM1DIS */
#define IFX_SCU_ARSTDIS_STM1DIS_LEN (1u)

/** \brief Mask for Ifx_SCU_ARSTDIS_Bits.STM1DIS */
#define IFX_SCU_ARSTDIS_STM1DIS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ARSTDIS_Bits.STM1DIS */
#define IFX_SCU_ARSTDIS_STM1DIS_OFF (1u)

/** \brief Length for Ifx_SCU_ARSTDIS_Bits.STM2DIS */
#define IFX_SCU_ARSTDIS_STM2DIS_LEN (1u)

/** \brief Mask for Ifx_SCU_ARSTDIS_Bits.STM2DIS */
#define IFX_SCU_ARSTDIS_STM2DIS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ARSTDIS_Bits.STM2DIS */
#define IFX_SCU_ARSTDIS_STM2DIS_OFF (2u)

/** \brief Length for Ifx_SCU_SWRSTCON_Bits.SWRSTREQ */
#define IFX_SCU_SWRSTCON_SWRSTREQ_LEN (1u)

/** \brief Mask for Ifx_SCU_SWRSTCON_Bits.SWRSTREQ */
#define IFX_SCU_SWRSTCON_SWRSTREQ_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SWRSTCON_Bits.SWRSTREQ */
#define IFX_SCU_SWRSTCON_SWRSTREQ_OFF (1u)

/** \brief Length for Ifx_SCU_RSTCON2_Bits.FRTO */
#define IFX_SCU_RSTCON2_FRTO_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTCON2_Bits.FRTO */
#define IFX_SCU_RSTCON2_FRTO_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTCON2_Bits.FRTO */
#define IFX_SCU_RSTCON2_FRTO_OFF (0u)

/** \brief Length for Ifx_SCU_RSTCON2_Bits.CLRC */
#define IFX_SCU_RSTCON2_CLRC_LEN (1u)

/** \brief Mask for Ifx_SCU_RSTCON2_Bits.CLRC */
#define IFX_SCU_RSTCON2_CLRC_MSK (0x1u)

/** \brief Offset for Ifx_SCU_RSTCON2_Bits.CLRC */
#define IFX_SCU_RSTCON2_CLRC_OFF (1u)

/** \brief Length for Ifx_SCU_RSTCON2_Bits.CSSx */
#define IFX_SCU_RSTCON2_CSSX_LEN (6u)

/** \brief Mask for Ifx_SCU_RSTCON2_Bits.CSSx */
#define IFX_SCU_RSTCON2_CSSX_MSK (0x3fu)

/** \brief Offset for Ifx_SCU_RSTCON2_Bits.CSSx */
#define IFX_SCU_RSTCON2_CSSX_OFF (7u)

/** \brief Length for Ifx_SCU_RSTCON2_Bits.USRINFO */
#define IFX_SCU_RSTCON2_USRINFO_LEN (16u)

/** \brief Mask for Ifx_SCU_RSTCON2_Bits.USRINFO */
#define IFX_SCU_RSTCON2_USRINFO_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_RSTCON2_Bits.USRINFO */
#define IFX_SCU_RSTCON2_USRINFO_OFF (16u)

/** \brief Length for Ifx_SCU_ESRCFGX_ESRCFGX_Bits.EDCON */
#define IFX_SCU_ESRCFGX_ESRCFGX_EDCON_LEN (2u)

/** \brief Mask for Ifx_SCU_ESRCFGX_ESRCFGX_Bits.EDCON */
#define IFX_SCU_ESRCFGX_ESRCFGX_EDCON_MSK (0x3u)

/** \brief Offset for Ifx_SCU_ESRCFGX_ESRCFGX_Bits.EDCON */
#define IFX_SCU_ESRCFGX_ESRCFGX_EDCON_OFF (7u)

/** \brief Length for Ifx_SCU_ESROCFG_Bits.ARI */
#define IFX_SCU_ESROCFG_ARI_LEN (1u)

/** \brief Mask for Ifx_SCU_ESROCFG_Bits.ARI */
#define IFX_SCU_ESROCFG_ARI_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ESROCFG_Bits.ARI */
#define IFX_SCU_ESROCFG_ARI_OFF (0u)

/** \brief Length for Ifx_SCU_ESROCFG_Bits.ARC */
#define IFX_SCU_ESROCFG_ARC_LEN (1u)

/** \brief Mask for Ifx_SCU_ESROCFG_Bits.ARC */
#define IFX_SCU_ESROCFG_ARC_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ESROCFG_Bits.ARC */
#define IFX_SCU_ESROCFG_ARC_OFF (1u)

/** \brief Length for Ifx_SCU_SYSCON_Bits.CCTRIG0 */
#define IFX_SCU_SYSCON_CCTRIG0_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSCON_Bits.CCTRIG0 */
#define IFX_SCU_SYSCON_CCTRIG0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSCON_Bits.CCTRIG0 */
#define IFX_SCU_SYSCON_CCTRIG0_OFF (0u)

/** \brief Length for Ifx_SCU_SYSCON_Bits.RAMINTM */
#define IFX_SCU_SYSCON_RAMINTM_LEN (2u)

/** \brief Mask for Ifx_SCU_SYSCON_Bits.RAMINTM */
#define IFX_SCU_SYSCON_RAMINTM_MSK (0x3u)

/** \brief Offset for Ifx_SCU_SYSCON_Bits.RAMINTM */
#define IFX_SCU_SYSCON_RAMINTM_OFF (2u)

/** \brief Length for Ifx_SCU_SYSCON_Bits.SETLUDIS */
#define IFX_SCU_SYSCON_SETLUDIS_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSCON_Bits.SETLUDIS */
#define IFX_SCU_SYSCON_SETLUDIS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSCON_Bits.SETLUDIS */
#define IFX_SCU_SYSCON_SETLUDIS_OFF (4u)

/** \brief Length for Ifx_SCU_SYSCON_Bits.DDC */
#define IFX_SCU_SYSCON_DDC_LEN (1u)

/** \brief Mask for Ifx_SCU_SYSCON_Bits.DDC */
#define IFX_SCU_SYSCON_DDC_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SYSCON_Bits.DDC */
#define IFX_SCU_SYSCON_DDC_OFF (8u)

/** \brief Length for Ifx_SCU_CCUCON6_Bits.CPU0DIV */
#define IFX_SCU_CCUCON6_CPU0DIV_LEN (6u)

/** \brief Mask for Ifx_SCU_CCUCON6_Bits.CPU0DIV */
#define IFX_SCU_CCUCON6_CPU0DIV_MSK (0x3fu)

/** \brief Offset for Ifx_SCU_CCUCON6_Bits.CPU0DIV */
#define IFX_SCU_CCUCON6_CPU0DIV_OFF (0u)

/** \brief Length for Ifx_SCU_CCUCON7_Bits.CPU1DIV */
#define IFX_SCU_CCUCON7_CPU1DIV_LEN (6u)

/** \brief Mask for Ifx_SCU_CCUCON7_Bits.CPU1DIV */
#define IFX_SCU_CCUCON7_CPU1DIV_MSK (0x3fu)

/** \brief Offset for Ifx_SCU_CCUCON7_Bits.CPU1DIV */
#define IFX_SCU_CCUCON7_CPU1DIV_OFF (0u)

/** \brief Length for Ifx_SCU_CCUCON8_Bits.CPU2DIV */
#define IFX_SCU_CCUCON8_CPU2DIV_LEN (6u)

/** \brief Mask for Ifx_SCU_CCUCON8_Bits.CPU2DIV */
#define IFX_SCU_CCUCON8_CPU2DIV_MSK (0x3fu)

/** \brief Offset for Ifx_SCU_CCUCON8_Bits.CPU2DIV */
#define IFX_SCU_CCUCON8_CPU2DIV_OFF (0u)

/** \brief Length for Ifx_SCU_PDR_Bits.PD0 */
#define IFX_SCU_PDR_PD0_LEN (2u)

/** \brief Mask for Ifx_SCU_PDR_Bits.PD0 */
#define IFX_SCU_PDR_PD0_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PDR_Bits.PD0 */
#define IFX_SCU_PDR_PD0_OFF (0u)

/** \brief Length for Ifx_SCU_PDR_Bits.PL0 */
#define IFX_SCU_PDR_PL0_LEN (2u)

/** \brief Mask for Ifx_SCU_PDR_Bits.PL0 */
#define IFX_SCU_PDR_PL0_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PDR_Bits.PL0 */
#define IFX_SCU_PDR_PL0_OFF (2u)

/** \brief Length for Ifx_SCU_PDR_Bits.PD1 */
#define IFX_SCU_PDR_PD1_LEN (2u)

/** \brief Mask for Ifx_SCU_PDR_Bits.PD1 */
#define IFX_SCU_PDR_PD1_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PDR_Bits.PD1 */
#define IFX_SCU_PDR_PD1_OFF (4u)

/** \brief Length for Ifx_SCU_PDR_Bits.PL1 */
#define IFX_SCU_PDR_PL1_LEN (2u)

/** \brief Mask for Ifx_SCU_PDR_Bits.PL1 */
#define IFX_SCU_PDR_PL1_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PDR_Bits.PL1 */
#define IFX_SCU_PDR_PL1_OFF (6u)

/** \brief Length for Ifx_SCU_IOCR_Bits.PC0 */
#define IFX_SCU_IOCR_PC0_LEN (4u)

/** \brief Mask for Ifx_SCU_IOCR_Bits.PC0 */
#define IFX_SCU_IOCR_PC0_MSK (0xfu)

/** \brief Offset for Ifx_SCU_IOCR_Bits.PC0 */
#define IFX_SCU_IOCR_PC0_OFF (4u)

/** \brief Length for Ifx_SCU_IOCR_Bits.PC1 */
#define IFX_SCU_IOCR_PC1_LEN (4u)

/** \brief Mask for Ifx_SCU_IOCR_Bits.PC1 */
#define IFX_SCU_IOCR_PC1_MSK (0xfu)

/** \brief Offset for Ifx_SCU_IOCR_Bits.PC1 */
#define IFX_SCU_IOCR_PC1_OFF (12u)

/** \brief Length for Ifx_SCU_OUT_Bits.P0 */
#define IFX_SCU_OUT_P0_LEN (1u)

/** \brief Mask for Ifx_SCU_OUT_Bits.P0 */
#define IFX_SCU_OUT_P0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OUT_Bits.P0 */
#define IFX_SCU_OUT_P0_OFF (0u)

/** \brief Length for Ifx_SCU_OUT_Bits.P1 */
#define IFX_SCU_OUT_P1_LEN (1u)

/** \brief Mask for Ifx_SCU_OUT_Bits.P1 */
#define IFX_SCU_OUT_P1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OUT_Bits.P1 */
#define IFX_SCU_OUT_P1_OFF (1u)

/** \brief Length for Ifx_SCU_OMR_Bits.PS0 */
#define IFX_SCU_OMR_PS0_LEN (1u)

/** \brief Mask for Ifx_SCU_OMR_Bits.PS0 */
#define IFX_SCU_OMR_PS0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OMR_Bits.PS0 */
#define IFX_SCU_OMR_PS0_OFF (0u)

/** \brief Length for Ifx_SCU_OMR_Bits.PS1 */
#define IFX_SCU_OMR_PS1_LEN (1u)

/** \brief Mask for Ifx_SCU_OMR_Bits.PS1 */
#define IFX_SCU_OMR_PS1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OMR_Bits.PS1 */
#define IFX_SCU_OMR_PS1_OFF (1u)

/** \brief Length for Ifx_SCU_OMR_Bits.PCL0 */
#define IFX_SCU_OMR_PCL0_LEN (1u)

/** \brief Mask for Ifx_SCU_OMR_Bits.PCL0 */
#define IFX_SCU_OMR_PCL0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OMR_Bits.PCL0 */
#define IFX_SCU_OMR_PCL0_OFF (16u)

/** \brief Length for Ifx_SCU_OMR_Bits.PCL1 */
#define IFX_SCU_OMR_PCL1_LEN (1u)

/** \brief Mask for Ifx_SCU_OMR_Bits.PCL1 */
#define IFX_SCU_OMR_PCL1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OMR_Bits.PCL1 */
#define IFX_SCU_OMR_PCL1_OFF (17u)

/** \brief Length for Ifx_SCU_IN_Bits.P0 */
#define IFX_SCU_IN_P0_LEN (1u)

/** \brief Mask for Ifx_SCU_IN_Bits.P0 */
#define IFX_SCU_IN_P0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IN_Bits.P0 */
#define IFX_SCU_IN_P0_OFF (0u)

/** \brief Length for Ifx_SCU_IN_Bits.P1 */
#define IFX_SCU_IN_P1_LEN (1u)

/** \brief Mask for Ifx_SCU_IN_Bits.P1 */
#define IFX_SCU_IN_P1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IN_Bits.P1 */
#define IFX_SCU_IN_P1_OFF (1u)

/** \brief Length for Ifx_SCU_STSTAT_Bits.HWCFG */
#define IFX_SCU_STSTAT_HWCFG_LEN (8u)

/** \brief Mask for Ifx_SCU_STSTAT_Bits.HWCFG */
#define IFX_SCU_STSTAT_HWCFG_MSK (0xffu)

/** \brief Offset for Ifx_SCU_STSTAT_Bits.HWCFG */
#define IFX_SCU_STSTAT_HWCFG_OFF (0u)

/** \brief Length for Ifx_SCU_STSTAT_Bits.FTM */
#define IFX_SCU_STSTAT_FTM_LEN (7u)

/** \brief Mask for Ifx_SCU_STSTAT_Bits.FTM */
#define IFX_SCU_STSTAT_FTM_MSK (0x7fu)

/** \brief Offset for Ifx_SCU_STSTAT_Bits.FTM */
#define IFX_SCU_STSTAT_FTM_OFF (8u)

/** \brief Length for Ifx_SCU_STSTAT_Bits.MODE */
#define IFX_SCU_STSTAT_MODE_LEN (1u)

/** \brief Mask for Ifx_SCU_STSTAT_Bits.MODE */
#define IFX_SCU_STSTAT_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STSTAT_Bits.MODE */
#define IFX_SCU_STSTAT_MODE_OFF (15u)

/** \brief Length for Ifx_SCU_STSTAT_Bits.FCBAE */
#define IFX_SCU_STSTAT_FCBAE_LEN (1u)

/** \brief Mask for Ifx_SCU_STSTAT_Bits.FCBAE */
#define IFX_SCU_STSTAT_FCBAE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STSTAT_Bits.FCBAE */
#define IFX_SCU_STSTAT_FCBAE_OFF (16u)

/** \brief Length for Ifx_SCU_STSTAT_Bits.LUDIS */
#define IFX_SCU_STSTAT_LUDIS_LEN (1u)

/** \brief Mask for Ifx_SCU_STSTAT_Bits.LUDIS */
#define IFX_SCU_STSTAT_LUDIS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STSTAT_Bits.LUDIS */
#define IFX_SCU_STSTAT_LUDIS_OFF (17u)

/** \brief Length for Ifx_SCU_STSTAT_Bits.TRSTL */
#define IFX_SCU_STSTAT_TRSTL_LEN (1u)

/** \brief Mask for Ifx_SCU_STSTAT_Bits.TRSTL */
#define IFX_SCU_STSTAT_TRSTL_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STSTAT_Bits.TRSTL */
#define IFX_SCU_STSTAT_TRSTL_OFF (19u)

/** \brief Length for Ifx_SCU_STSTAT_Bits.SPDEN */
#define IFX_SCU_STSTAT_SPDEN_LEN (1u)

/** \brief Mask for Ifx_SCU_STSTAT_Bits.SPDEN */
#define IFX_SCU_STSTAT_SPDEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STSTAT_Bits.SPDEN */
#define IFX_SCU_STSTAT_SPDEN_OFF (20u)

/** \brief Length for Ifx_SCU_STSTAT_Bits.RAMINT */
#define IFX_SCU_STSTAT_RAMINT_LEN (1u)

/** \brief Mask for Ifx_SCU_STSTAT_Bits.RAMINT */
#define IFX_SCU_STSTAT_RAMINT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STSTAT_Bits.RAMINT */
#define IFX_SCU_STSTAT_RAMINT_OFF (24u)

/** \brief Length for Ifx_SCU_STCON_Bits.SFCBAE */
#define IFX_SCU_STCON_SFCBAE_LEN (1u)

/** \brief Mask for Ifx_SCU_STCON_Bits.SFCBAE */
#define IFX_SCU_STCON_SFCBAE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STCON_Bits.SFCBAE */
#define IFX_SCU_STCON_SFCBAE_OFF (13u)

/** \brief Length for Ifx_SCU_STCON_Bits.CFCBAE */
#define IFX_SCU_STCON_CFCBAE_LEN (1u)

/** \brief Mask for Ifx_SCU_STCON_Bits.CFCBAE */
#define IFX_SCU_STCON_CFCBAE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STCON_Bits.CFCBAE */
#define IFX_SCU_STCON_CFCBAE_OFF (14u)

/** \brief Length for Ifx_SCU_STCON_Bits.STP */
#define IFX_SCU_STCON_STP_LEN (1u)

/** \brief Mask for Ifx_SCU_STCON_Bits.STP */
#define IFX_SCU_STCON_STP_MSK (0x1u)

/** \brief Offset for Ifx_SCU_STCON_Bits.STP */
#define IFX_SCU_STCON_STP_OFF (15u)

/** \brief Length for Ifx_SCU_PMCSR0_Bits.REQSLP */
#define IFX_SCU_PMCSR0_REQSLP_LEN (2u)

/** \brief Mask for Ifx_SCU_PMCSR0_Bits.REQSLP */
#define IFX_SCU_PMCSR0_REQSLP_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMCSR0_Bits.REQSLP */
#define IFX_SCU_PMCSR0_REQSLP_OFF (0u)

/** \brief Length for Ifx_SCU_PMCSR0_Bits.PMST */
#define IFX_SCU_PMCSR0_PMST_LEN (3u)

/** \brief Mask for Ifx_SCU_PMCSR0_Bits.PMST */
#define IFX_SCU_PMCSR0_PMST_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMCSR0_Bits.PMST */
#define IFX_SCU_PMCSR0_PMST_OFF (8u)

/** \brief Length for Ifx_SCU_PMCSR1_Bits.REQSLP */
#define IFX_SCU_PMCSR1_REQSLP_LEN (2u)

/** \brief Mask for Ifx_SCU_PMCSR1_Bits.REQSLP */
#define IFX_SCU_PMCSR1_REQSLP_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMCSR1_Bits.REQSLP */
#define IFX_SCU_PMCSR1_REQSLP_OFF (0u)

/** \brief Length for Ifx_SCU_PMCSR1_Bits.PMST */
#define IFX_SCU_PMCSR1_PMST_LEN (3u)

/** \brief Mask for Ifx_SCU_PMCSR1_Bits.PMST */
#define IFX_SCU_PMCSR1_PMST_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMCSR1_Bits.PMST */
#define IFX_SCU_PMCSR1_PMST_OFF (8u)

/** \brief Length for Ifx_SCU_PMCSR2_Bits.REQSLP */
#define IFX_SCU_PMCSR2_REQSLP_LEN (2u)

/** \brief Mask for Ifx_SCU_PMCSR2_Bits.REQSLP */
#define IFX_SCU_PMCSR2_REQSLP_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMCSR2_Bits.REQSLP */
#define IFX_SCU_PMCSR2_REQSLP_OFF (0u)

/** \brief Length for Ifx_SCU_PMCSR2_Bits.PMST */
#define IFX_SCU_PMCSR2_PMST_LEN (3u)

/** \brief Mask for Ifx_SCU_PMCSR2_Bits.PMST */
#define IFX_SCU_PMCSR2_PMST_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMCSR2_Bits.PMST */
#define IFX_SCU_PMCSR2_PMST_OFF (8u)

/** \brief Length for Ifx_SCU_PMCSR3_Bits.REQSLP */
#define IFX_SCU_PMCSR3_REQSLP_LEN (2u)

/** \brief Mask for Ifx_SCU_PMCSR3_Bits.REQSLP */
#define IFX_SCU_PMCSR3_REQSLP_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMCSR3_Bits.REQSLP */
#define IFX_SCU_PMCSR3_REQSLP_OFF (0u)

/** \brief Length for Ifx_SCU_PMCSR3_Bits.PMST */
#define IFX_SCU_PMCSR3_PMST_LEN (3u)

/** \brief Mask for Ifx_SCU_PMCSR3_Bits.PMST */
#define IFX_SCU_PMCSR3_PMST_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMCSR3_Bits.PMST */
#define IFX_SCU_PMCSR3_PMST_OFF (8u)

/** \brief Length for Ifx_SCU_PMCSR4_Bits.REQSLP */
#define IFX_SCU_PMCSR4_REQSLP_LEN (2u)

/** \brief Mask for Ifx_SCU_PMCSR4_Bits.REQSLP */
#define IFX_SCU_PMCSR4_REQSLP_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMCSR4_Bits.REQSLP */
#define IFX_SCU_PMCSR4_REQSLP_OFF (0u)

/** \brief Length for Ifx_SCU_PMCSR4_Bits.PMST */
#define IFX_SCU_PMCSR4_PMST_LEN (3u)

/** \brief Mask for Ifx_SCU_PMCSR4_Bits.PMST */
#define IFX_SCU_PMCSR4_PMST_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMCSR4_Bits.PMST */
#define IFX_SCU_PMCSR4_PMST_OFF (8u)

/** \brief Length for Ifx_SCU_PMCSR5_Bits.REQSLP */
#define IFX_SCU_PMCSR5_REQSLP_LEN (2u)

/** \brief Mask for Ifx_SCU_PMCSR5_Bits.REQSLP */
#define IFX_SCU_PMCSR5_REQSLP_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMCSR5_Bits.REQSLP */
#define IFX_SCU_PMCSR5_REQSLP_OFF (0u)

/** \brief Length for Ifx_SCU_PMCSR5_Bits.PMST */
#define IFX_SCU_PMCSR5_PMST_LEN (3u)

/** \brief Mask for Ifx_SCU_PMCSR5_Bits.PMST */
#define IFX_SCU_PMCSR5_PMST_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMCSR5_Bits.PMST */
#define IFX_SCU_PMCSR5_PMST_OFF (8u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU0 */
#define IFX_SCU_PMSTAT0_CPU0_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU0 */
#define IFX_SCU_PMSTAT0_CPU0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU0 */
#define IFX_SCU_PMSTAT0_CPU0_OFF (0u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU1 */
#define IFX_SCU_PMSTAT0_CPU1_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU1 */
#define IFX_SCU_PMSTAT0_CPU1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU1 */
#define IFX_SCU_PMSTAT0_CPU1_OFF (1u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU2 */
#define IFX_SCU_PMSTAT0_CPU2_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU2 */
#define IFX_SCU_PMSTAT0_CPU2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU2 */
#define IFX_SCU_PMSTAT0_CPU2_OFF (2u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU3 */
#define IFX_SCU_PMSTAT0_CPU3_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU3 */
#define IFX_SCU_PMSTAT0_CPU3_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU3 */
#define IFX_SCU_PMSTAT0_CPU3_OFF (3u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU4 */
#define IFX_SCU_PMSTAT0_CPU4_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU4 */
#define IFX_SCU_PMSTAT0_CPU4_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU4 */
#define IFX_SCU_PMSTAT0_CPU4_OFF (4u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU5 */
#define IFX_SCU_PMSTAT0_CPU5_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU5 */
#define IFX_SCU_PMSTAT0_CPU5_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU5 */
#define IFX_SCU_PMSTAT0_CPU5_OFF (5u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU0LS */
#define IFX_SCU_PMSTAT0_CPU0LS_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU0LS */
#define IFX_SCU_PMSTAT0_CPU0LS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU0LS */
#define IFX_SCU_PMSTAT0_CPU0LS_OFF (16u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU1LS */
#define IFX_SCU_PMSTAT0_CPU1LS_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU1LS */
#define IFX_SCU_PMSTAT0_CPU1LS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU1LS */
#define IFX_SCU_PMSTAT0_CPU1LS_OFF (17u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU2LS */
#define IFX_SCU_PMSTAT0_CPU2LS_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU2LS */
#define IFX_SCU_PMSTAT0_CPU2LS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU2LS */
#define IFX_SCU_PMSTAT0_CPU2LS_OFF (18u)

/** \brief Length for Ifx_SCU_PMSTAT0_Bits.CPU3LS */
#define IFX_SCU_PMSTAT0_CPU3LS_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSTAT0_Bits.CPU3LS */
#define IFX_SCU_PMSTAT0_CPU3LS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSTAT0_Bits.CPU3LS */
#define IFX_SCU_PMSTAT0_CPU3LS_OFF (19u)

/** \brief Length for Ifx_SCU_PMSWCR1_Bits.CPUIDLSEL */
#define IFX_SCU_PMSWCR1_CPUIDLSEL_LEN (3u)

/** \brief Mask for Ifx_SCU_PMSWCR1_Bits.CPUIDLSEL */
#define IFX_SCU_PMSWCR1_CPUIDLSEL_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMSWCR1_Bits.CPUIDLSEL */
#define IFX_SCU_PMSWCR1_CPUIDLSEL_OFF (8u)

/** \brief Length for Ifx_SCU_PMSWCR1_Bits.IRADIS */
#define IFX_SCU_PMSWCR1_IRADIS_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSWCR1_Bits.IRADIS */
#define IFX_SCU_PMSWCR1_IRADIS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSWCR1_Bits.IRADIS */
#define IFX_SCU_PMSWCR1_IRADIS_OFF (12u)

/** \brief Length for Ifx_SCU_PMSWCR1_Bits.CPUSEL */
#define IFX_SCU_PMSWCR1_CPUSEL_LEN (3u)

/** \brief Mask for Ifx_SCU_PMSWCR1_Bits.CPUSEL */
#define IFX_SCU_PMSWCR1_CPUSEL_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMSWCR1_Bits.CPUSEL */
#define IFX_SCU_PMSWCR1_CPUSEL_OFF (24u)

/** \brief Length for Ifx_SCU_PMSWCR1_Bits.STBYEVEN */
#define IFX_SCU_PMSWCR1_STBYEVEN_LEN (1u)

/** \brief Mask for Ifx_SCU_PMSWCR1_Bits.STBYEVEN */
#define IFX_SCU_PMSWCR1_STBYEVEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMSWCR1_Bits.STBYEVEN */
#define IFX_SCU_PMSWCR1_STBYEVEN_OFF (27u)

/** \brief Length for Ifx_SCU_PMSWCR1_Bits.STBYEV */
#define IFX_SCU_PMSWCR1_STBYEV_LEN (3u)

/** \brief Mask for Ifx_SCU_PMSWCR1_Bits.STBYEV */
#define IFX_SCU_PMSWCR1_STBYEV_MSK (0x7u)

/** \brief Offset for Ifx_SCU_PMSWCR1_Bits.STBYEV */
#define IFX_SCU_PMSWCR1_STBYEV_OFF (28u)

/** \brief Length for Ifx_SCU_EMSR_Bits.POL */
#define IFX_SCU_EMSR_POL_LEN (1u)

/** \brief Mask for Ifx_SCU_EMSR_Bits.POL */
#define IFX_SCU_EMSR_POL_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EMSR_Bits.POL */
#define IFX_SCU_EMSR_POL_OFF (0u)

/** \brief Length for Ifx_SCU_EMSR_Bits.MODE */
#define IFX_SCU_EMSR_MODE_LEN (1u)

/** \brief Mask for Ifx_SCU_EMSR_Bits.MODE */
#define IFX_SCU_EMSR_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EMSR_Bits.MODE */
#define IFX_SCU_EMSR_MODE_OFF (1u)

/** \brief Length for Ifx_SCU_EMSR_Bits.ENON */
#define IFX_SCU_EMSR_ENON_LEN (1u)

/** \brief Mask for Ifx_SCU_EMSR_Bits.ENON */
#define IFX_SCU_EMSR_ENON_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EMSR_Bits.ENON */
#define IFX_SCU_EMSR_ENON_OFF (2u)

/** \brief Length for Ifx_SCU_EMSR_Bits.PSEL */
#define IFX_SCU_EMSR_PSEL_LEN (1u)

/** \brief Mask for Ifx_SCU_EMSR_Bits.PSEL */
#define IFX_SCU_EMSR_PSEL_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EMSR_Bits.PSEL */
#define IFX_SCU_EMSR_PSEL_OFF (3u)

/** \brief Length for Ifx_SCU_EMSR_Bits.EMSF */
#define IFX_SCU_EMSR_EMSF_LEN (1u)

/** \brief Mask for Ifx_SCU_EMSR_Bits.EMSF */
#define IFX_SCU_EMSR_EMSF_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EMSR_Bits.EMSF */
#define IFX_SCU_EMSR_EMSF_OFF (16u)

/** \brief Length for Ifx_SCU_EMSR_Bits.SEMSF */
#define IFX_SCU_EMSR_SEMSF_LEN (1u)

/** \brief Mask for Ifx_SCU_EMSR_Bits.SEMSF */
#define IFX_SCU_EMSR_SEMSF_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EMSR_Bits.SEMSF */
#define IFX_SCU_EMSR_SEMSF_OFF (17u)

/** \brief Length for Ifx_SCU_EMSSW_Bits.EMSFM */
#define IFX_SCU_EMSSW_EMSFM_LEN (2u)

/** \brief Mask for Ifx_SCU_EMSSW_Bits.EMSFM */
#define IFX_SCU_EMSSW_EMSFM_MSK (0x3u)

/** \brief Offset for Ifx_SCU_EMSSW_Bits.EMSFM */
#define IFX_SCU_EMSSW_EMSFM_OFF (24u)

/** \brief Length for Ifx_SCU_EMSSW_Bits.SEMSFM */
#define IFX_SCU_EMSSW_SEMSFM_LEN (2u)

/** \brief Mask for Ifx_SCU_EMSSW_Bits.SEMSFM */
#define IFX_SCU_EMSSW_SEMSFM_MSK (0x3u)

/** \brief Offset for Ifx_SCU_EMSSW_Bits.SEMSFM */
#define IFX_SCU_EMSSW_SEMSFM_OFF (26u)

/** \brief Length for Ifx_SCU_DTSCSTAT_Bits.RESULT */
#define IFX_SCU_DTSCSTAT_RESULT_LEN (12u)

/** \brief Mask for Ifx_SCU_DTSCSTAT_Bits.RESULT */
#define IFX_SCU_DTSCSTAT_RESULT_MSK (0xfffu)

/** \brief Offset for Ifx_SCU_DTSCSTAT_Bits.RESULT */
#define IFX_SCU_DTSCSTAT_RESULT_OFF (0u)

/** \brief Length for Ifx_SCU_DTSCLIM_Bits.LOWER */
#define IFX_SCU_DTSCLIM_LOWER_LEN (12u)

/** \brief Mask for Ifx_SCU_DTSCLIM_Bits.LOWER */
#define IFX_SCU_DTSCLIM_LOWER_MSK (0xfffu)

/** \brief Offset for Ifx_SCU_DTSCLIM_Bits.LOWER */
#define IFX_SCU_DTSCLIM_LOWER_OFF (0u)

/** \brief Length for Ifx_SCU_DTSCLIM_Bits.BGPOK */
#define IFX_SCU_DTSCLIM_BGPOK_LEN (1u)

/** \brief Mask for Ifx_SCU_DTSCLIM_Bits.BGPOK */
#define IFX_SCU_DTSCLIM_BGPOK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_DTSCLIM_Bits.BGPOK */
#define IFX_SCU_DTSCLIM_BGPOK_OFF (13u)

/** \brief Length for Ifx_SCU_DTSCLIM_Bits.EN */
#define IFX_SCU_DTSCLIM_EN_LEN (1u)

/** \brief Mask for Ifx_SCU_DTSCLIM_Bits.EN */
#define IFX_SCU_DTSCLIM_EN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_DTSCLIM_Bits.EN */
#define IFX_SCU_DTSCLIM_EN_OFF (14u)

/** \brief Length for Ifx_SCU_DTSCLIM_Bits.LLU */
#define IFX_SCU_DTSCLIM_LLU_LEN (1u)

/** \brief Mask for Ifx_SCU_DTSCLIM_Bits.LLU */
#define IFX_SCU_DTSCLIM_LLU_MSK (0x1u)

/** \brief Offset for Ifx_SCU_DTSCLIM_Bits.LLU */
#define IFX_SCU_DTSCLIM_LLU_OFF (15u)

/** \brief Length for Ifx_SCU_DTSCLIM_Bits.UPPER */
#define IFX_SCU_DTSCLIM_UPPER_LEN (12u)

/** \brief Mask for Ifx_SCU_DTSCLIM_Bits.UPPER */
#define IFX_SCU_DTSCLIM_UPPER_MSK (0xfffu)

/** \brief Offset for Ifx_SCU_DTSCLIM_Bits.UPPER */
#define IFX_SCU_DTSCLIM_UPPER_OFF (16u)

/** \brief Length for Ifx_SCU_DTSCLIM_Bits.INTEN */
#define IFX_SCU_DTSCLIM_INTEN_LEN (1u)

/** \brief Mask for Ifx_SCU_DTSCLIM_Bits.INTEN */
#define IFX_SCU_DTSCLIM_INTEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_DTSCLIM_Bits.INTEN */
#define IFX_SCU_DTSCLIM_INTEN_OFF (28u)

/** \brief Length for Ifx_SCU_DTSCLIM_Bits.INT */
#define IFX_SCU_DTSCLIM_INT_LEN (1u)

/** \brief Mask for Ifx_SCU_DTSCLIM_Bits.INT */
#define IFX_SCU_DTSCLIM_INT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_DTSCLIM_Bits.INT */
#define IFX_SCU_DTSCLIM_INT_OFF (30u)

/** \brief Length for Ifx_SCU_DTSCLIM_Bits.UOF */
#define IFX_SCU_DTSCLIM_UOF_LEN (1u)

/** \brief Mask for Ifx_SCU_DTSCLIM_Bits.UOF */
#define IFX_SCU_DTSCLIM_UOF_MSK (0x1u)

/** \brief Offset for Ifx_SCU_DTSCLIM_Bits.UOF */
#define IFX_SCU_DTSCLIM_UOF_OFF (31u)

/** \brief Length for Ifx_SCU_TRAPSTAT_Bits.ESR0T */
#define IFX_SCU_TRAPSTAT_ESR0T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPSTAT_Bits.ESR0T */
#define IFX_SCU_TRAPSTAT_ESR0T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPSTAT_Bits.ESR0T */
#define IFX_SCU_TRAPSTAT_ESR0T_OFF (0u)

/** \brief Length for Ifx_SCU_TRAPSTAT_Bits.ESR1T */
#define IFX_SCU_TRAPSTAT_ESR1T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPSTAT_Bits.ESR1T */
#define IFX_SCU_TRAPSTAT_ESR1T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPSTAT_Bits.ESR1T */
#define IFX_SCU_TRAPSTAT_ESR1T_OFF (1u)

/** \brief Length for Ifx_SCU_TRAPSTAT_Bits.TRAP2 */
#define IFX_SCU_TRAPSTAT_TRAP2_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPSTAT_Bits.TRAP2 */
#define IFX_SCU_TRAPSTAT_TRAP2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPSTAT_Bits.TRAP2 */
#define IFX_SCU_TRAPSTAT_TRAP2_OFF (2u)

/** \brief Length for Ifx_SCU_TRAPSTAT_Bits.SMUT */
#define IFX_SCU_TRAPSTAT_SMUT_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPSTAT_Bits.SMUT */
#define IFX_SCU_TRAPSTAT_SMUT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPSTAT_Bits.SMUT */
#define IFX_SCU_TRAPSTAT_SMUT_OFF (3u)

/** \brief Length for Ifx_SCU_TRAPSET_Bits.ESR0T */
#define IFX_SCU_TRAPSET_ESR0T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPSET_Bits.ESR0T */
#define IFX_SCU_TRAPSET_ESR0T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPSET_Bits.ESR0T */
#define IFX_SCU_TRAPSET_ESR0T_OFF (0u)

/** \brief Length for Ifx_SCU_TRAPSET_Bits.ESR1T */
#define IFX_SCU_TRAPSET_ESR1T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPSET_Bits.ESR1T */
#define IFX_SCU_TRAPSET_ESR1T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPSET_Bits.ESR1T */
#define IFX_SCU_TRAPSET_ESR1T_OFF (1u)

/** \brief Length for Ifx_SCU_TRAPSET_Bits.TRAP2 */
#define IFX_SCU_TRAPSET_TRAP2_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPSET_Bits.TRAP2 */
#define IFX_SCU_TRAPSET_TRAP2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPSET_Bits.TRAP2 */
#define IFX_SCU_TRAPSET_TRAP2_OFF (2u)

/** \brief Length for Ifx_SCU_TRAPSET_Bits.SMUT */
#define IFX_SCU_TRAPSET_SMUT_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPSET_Bits.SMUT */
#define IFX_SCU_TRAPSET_SMUT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPSET_Bits.SMUT */
#define IFX_SCU_TRAPSET_SMUT_OFF (3u)

/** \brief Length for Ifx_SCU_TRAPCLR_Bits.ESR0T */
#define IFX_SCU_TRAPCLR_ESR0T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPCLR_Bits.ESR0T */
#define IFX_SCU_TRAPCLR_ESR0T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPCLR_Bits.ESR0T */
#define IFX_SCU_TRAPCLR_ESR0T_OFF (0u)

/** \brief Length for Ifx_SCU_TRAPCLR_Bits.ESR1T */
#define IFX_SCU_TRAPCLR_ESR1T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPCLR_Bits.ESR1T */
#define IFX_SCU_TRAPCLR_ESR1T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPCLR_Bits.ESR1T */
#define IFX_SCU_TRAPCLR_ESR1T_OFF (1u)

/** \brief Length for Ifx_SCU_TRAPCLR_Bits.TRAP2 */
#define IFX_SCU_TRAPCLR_TRAP2_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPCLR_Bits.TRAP2 */
#define IFX_SCU_TRAPCLR_TRAP2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPCLR_Bits.TRAP2 */
#define IFX_SCU_TRAPCLR_TRAP2_OFF (2u)

/** \brief Length for Ifx_SCU_TRAPCLR_Bits.SMUT */
#define IFX_SCU_TRAPCLR_SMUT_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPCLR_Bits.SMUT */
#define IFX_SCU_TRAPCLR_SMUT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPCLR_Bits.SMUT */
#define IFX_SCU_TRAPCLR_SMUT_OFF (3u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU0ESR0T */
#define IFX_SCU_TRAPDIS0_CPU0ESR0T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU0ESR0T */
#define IFX_SCU_TRAPDIS0_CPU0ESR0T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU0ESR0T */
#define IFX_SCU_TRAPDIS0_CPU0ESR0T_OFF (0u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU0ESR1T */
#define IFX_SCU_TRAPDIS0_CPU0ESR1T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU0ESR1T */
#define IFX_SCU_TRAPDIS0_CPU0ESR1T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU0ESR1T */
#define IFX_SCU_TRAPDIS0_CPU0ESR1T_OFF (1u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU0TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU0TRAP2T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU0TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU0TRAP2T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU0TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU0TRAP2T_OFF (2u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU0SMUT */
#define IFX_SCU_TRAPDIS0_CPU0SMUT_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU0SMUT */
#define IFX_SCU_TRAPDIS0_CPU0SMUT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU0SMUT */
#define IFX_SCU_TRAPDIS0_CPU0SMUT_OFF (3u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU1ESR0T */
#define IFX_SCU_TRAPDIS0_CPU1ESR0T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU1ESR0T */
#define IFX_SCU_TRAPDIS0_CPU1ESR0T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU1ESR0T */
#define IFX_SCU_TRAPDIS0_CPU1ESR0T_OFF (8u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU1ESR1T */
#define IFX_SCU_TRAPDIS0_CPU1ESR1T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU1ESR1T */
#define IFX_SCU_TRAPDIS0_CPU1ESR1T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU1ESR1T */
#define IFX_SCU_TRAPDIS0_CPU1ESR1T_OFF (9u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU1TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU1TRAP2T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU1TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU1TRAP2T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU1TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU1TRAP2T_OFF (10u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU1SMUT */
#define IFX_SCU_TRAPDIS0_CPU1SMUT_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU1SMUT */
#define IFX_SCU_TRAPDIS0_CPU1SMUT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU1SMUT */
#define IFX_SCU_TRAPDIS0_CPU1SMUT_OFF (11u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU2ESR0T */
#define IFX_SCU_TRAPDIS0_CPU2ESR0T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU2ESR0T */
#define IFX_SCU_TRAPDIS0_CPU2ESR0T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU2ESR0T */
#define IFX_SCU_TRAPDIS0_CPU2ESR0T_OFF (16u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU2ESR1T */
#define IFX_SCU_TRAPDIS0_CPU2ESR1T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU2ESR1T */
#define IFX_SCU_TRAPDIS0_CPU2ESR1T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU2ESR1T */
#define IFX_SCU_TRAPDIS0_CPU2ESR1T_OFF (17u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU2TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU2TRAP2T_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU2TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU2TRAP2T_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU2TRAP2T */
#define IFX_SCU_TRAPDIS0_CPU2TRAP2T_OFF (18u)

/** \brief Length for Ifx_SCU_TRAPDIS0_Bits.CPU2SMUT */
#define IFX_SCU_TRAPDIS0_CPU2SMUT_LEN (1u)

/** \brief Mask for Ifx_SCU_TRAPDIS0_Bits.CPU2SMUT */
#define IFX_SCU_TRAPDIS0_CPU2SMUT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_TRAPDIS0_Bits.CPU2SMUT */
#define IFX_SCU_TRAPDIS0_CPU2SMUT_OFF (19u)

/** \brief Length for Ifx_SCU_LCLCON0_Bits.LS2 */
#define IFX_SCU_LCLCON0_LS2_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLCON0_Bits.LS2 */
#define IFX_SCU_LCLCON0_LS2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLCON0_Bits.LS2 */
#define IFX_SCU_LCLCON0_LS2_OFF (0u)

/** \brief Length for Ifx_SCU_LCLCON0_Bits.LSEN2 */
#define IFX_SCU_LCLCON0_LSEN2_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLCON0_Bits.LSEN2 */
#define IFX_SCU_LCLCON0_LSEN2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLCON0_Bits.LSEN2 */
#define IFX_SCU_LCLCON0_LSEN2_OFF (15u)

/** \brief Length for Ifx_SCU_LCLCON0_Bits.LS0 */
#define IFX_SCU_LCLCON0_LS0_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLCON0_Bits.LS0 */
#define IFX_SCU_LCLCON0_LS0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLCON0_Bits.LS0 */
#define IFX_SCU_LCLCON0_LS0_OFF (16u)

/** \brief Length for Ifx_SCU_LCLCON0_Bits.LSEN0 */
#define IFX_SCU_LCLCON0_LSEN0_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLCON0_Bits.LSEN0 */
#define IFX_SCU_LCLCON0_LSEN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLCON0_Bits.LSEN0 */
#define IFX_SCU_LCLCON0_LSEN0_OFF (31u)

/** \brief Length for Ifx_SCU_LCLCON1_Bits.LS1 */
#define IFX_SCU_LCLCON1_LS1_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLCON1_Bits.LS1 */
#define IFX_SCU_LCLCON1_LS1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLCON1_Bits.LS1 */
#define IFX_SCU_LCLCON1_LS1_OFF (16u)

/** \brief Length for Ifx_SCU_LCLCON1_Bits.LSEN1 */
#define IFX_SCU_LCLCON1_LSEN1_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLCON1_Bits.LSEN1 */
#define IFX_SCU_LCLCON1_LSEN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLCON1_Bits.LSEN1 */
#define IFX_SCU_LCLCON1_LSEN1_OFF (31u)

/** \brief Length for Ifx_SCU_LCLTEST_Bits.LCLT0 */
#define IFX_SCU_LCLTEST_LCLT0_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLTEST_Bits.LCLT0 */
#define IFX_SCU_LCLTEST_LCLT0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLTEST_Bits.LCLT0 */
#define IFX_SCU_LCLTEST_LCLT0_OFF (0u)

/** \brief Length for Ifx_SCU_LCLTEST_Bits.LCLT1 */
#define IFX_SCU_LCLTEST_LCLT1_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLTEST_Bits.LCLT1 */
#define IFX_SCU_LCLTEST_LCLT1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLTEST_Bits.LCLT1 */
#define IFX_SCU_LCLTEST_LCLT1_OFF (1u)

/** \brief Length for Ifx_SCU_LCLTEST_Bits.LCLT2 */
#define IFX_SCU_LCLTEST_LCLT2_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLTEST_Bits.LCLT2 */
#define IFX_SCU_LCLTEST_LCLT2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLTEST_Bits.LCLT2 */
#define IFX_SCU_LCLTEST_LCLT2_OFF (2u)

/** \brief Length for Ifx_SCU_LCLTEST_Bits.PLCLT0 */
#define IFX_SCU_LCLTEST_PLCLT0_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLTEST_Bits.PLCLT0 */
#define IFX_SCU_LCLTEST_PLCLT0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLTEST_Bits.PLCLT0 */
#define IFX_SCU_LCLTEST_PLCLT0_OFF (16u)

/** \brief Length for Ifx_SCU_LCLTEST_Bits.PLCLT1 */
#define IFX_SCU_LCLTEST_PLCLT1_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLTEST_Bits.PLCLT1 */
#define IFX_SCU_LCLTEST_PLCLT1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLTEST_Bits.PLCLT1 */
#define IFX_SCU_LCLTEST_PLCLT1_OFF (17u)

/** \brief Length for Ifx_SCU_LCLTEST_Bits.PLCLT2 */
#define IFX_SCU_LCLTEST_PLCLT2_LEN (1u)

/** \brief Mask for Ifx_SCU_LCLTEST_Bits.PLCLT2 */
#define IFX_SCU_LCLTEST_PLCLT2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LCLTEST_Bits.PLCLT2 */
#define IFX_SCU_LCLTEST_PLCLT2_OFF (18u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.CHREV */
#define IFX_SCU_CHIPID_CHREV_LEN (6u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.CHREV */
#define IFX_SCU_CHIPID_CHREV_MSK (0x3fu)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.CHREV */
#define IFX_SCU_CHIPID_CHREV_OFF (0u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.CHTEC */
#define IFX_SCU_CHIPID_CHTEC_LEN (2u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.CHTEC */
#define IFX_SCU_CHIPID_CHTEC_MSK (0x3u)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.CHTEC */
#define IFX_SCU_CHIPID_CHTEC_OFF (6u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.CHPK */
#define IFX_SCU_CHIPID_CHPK_LEN (4u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.CHPK */
#define IFX_SCU_CHIPID_CHPK_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.CHPK */
#define IFX_SCU_CHIPID_CHPK_OFF (8u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.CHID */
#define IFX_SCU_CHIPID_CHID_LEN (4u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.CHID */
#define IFX_SCU_CHIPID_CHID_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.CHID */
#define IFX_SCU_CHIPID_CHID_OFF (12u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.EEA */
#define IFX_SCU_CHIPID_EEA_LEN (1u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.EEA */
#define IFX_SCU_CHIPID_EEA_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.EEA */
#define IFX_SCU_CHIPID_EEA_OFF (16u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.UCODE */
#define IFX_SCU_CHIPID_UCODE_LEN (7u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.UCODE */
#define IFX_SCU_CHIPID_UCODE_MSK (0x7fu)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.UCODE */
#define IFX_SCU_CHIPID_UCODE_OFF (17u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.FSIZE */
#define IFX_SCU_CHIPID_FSIZE_LEN (4u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.FSIZE */
#define IFX_SCU_CHIPID_FSIZE_MSK (0xfu)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.FSIZE */
#define IFX_SCU_CHIPID_FSIZE_OFF (24u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.VART */
#define IFX_SCU_CHIPID_VART_LEN (3u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.VART */
#define IFX_SCU_CHIPID_VART_MSK (0x7u)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.VART */
#define IFX_SCU_CHIPID_VART_OFF (28u)

/** \brief Length for Ifx_SCU_CHIPID_Bits.SEC */
#define IFX_SCU_CHIPID_SEC_LEN (1u)

/** \brief Mask for Ifx_SCU_CHIPID_Bits.SEC */
#define IFX_SCU_CHIPID_SEC_MSK (0x1u)

/** \brief Offset for Ifx_SCU_CHIPID_Bits.SEC */
#define IFX_SCU_CHIPID_SEC_OFF (31u)

/** \brief Length for Ifx_SCU_MANID_Bits.DEPT */
#define IFX_SCU_MANID_DEPT_LEN (5u)

/** \brief Mask for Ifx_SCU_MANID_Bits.DEPT */
#define IFX_SCU_MANID_DEPT_MSK (0x1fu)

/** \brief Offset for Ifx_SCU_MANID_Bits.DEPT */
#define IFX_SCU_MANID_DEPT_OFF (0u)

/** \brief Length for Ifx_SCU_MANID_Bits.MANUF */
#define IFX_SCU_MANID_MANUF_LEN (11u)

/** \brief Mask for Ifx_SCU_MANID_Bits.MANUF */
#define IFX_SCU_MANID_MANUF_MSK (0x7ffu)

/** \brief Offset for Ifx_SCU_MANID_Bits.MANUF */
#define IFX_SCU_MANID_MANUF_OFF (5u)

/** \brief Length for Ifx_SCU_SWAPCTRL_Bits.ADDRCFG */
#define IFX_SCU_SWAPCTRL_ADDRCFG_LEN (2u)

/** \brief Mask for Ifx_SCU_SWAPCTRL_Bits.ADDRCFG */
#define IFX_SCU_SWAPCTRL_ADDRCFG_MSK (0x3u)

/** \brief Offset for Ifx_SCU_SWAPCTRL_Bits.ADDRCFG */
#define IFX_SCU_SWAPCTRL_ADDRCFG_OFF (0u)

/** \brief Length for Ifx_SCU_SWAPCTRL_Bits.Spare */
#define IFX_SCU_SWAPCTRL_SPARE_LEN (14u)

/** \brief Mask for Ifx_SCU_SWAPCTRL_Bits.Spare */
#define IFX_SCU_SWAPCTRL_SPARE_MSK (0x3fffu)

/** \brief Offset for Ifx_SCU_SWAPCTRL_Bits.Spare */
#define IFX_SCU_SWAPCTRL_SPARE_OFF (2u)

/** \brief Length for Ifx_SCU_LBISTCTRL0_Bits.LBISTREQ */
#define IFX_SCU_LBISTCTRL0_LBISTREQ_LEN (1u)

/** \brief Mask for Ifx_SCU_LBISTCTRL0_Bits.LBISTREQ */
#define IFX_SCU_LBISTCTRL0_LBISTREQ_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LBISTCTRL0_Bits.LBISTREQ */
#define IFX_SCU_LBISTCTRL0_LBISTREQ_OFF (0u)

/** \brief Length for Ifx_SCU_LBISTCTRL0_Bits.LBISTRES */
#define IFX_SCU_LBISTCTRL0_LBISTRES_LEN (1u)

/** \brief Mask for Ifx_SCU_LBISTCTRL0_Bits.LBISTRES */
#define IFX_SCU_LBISTCTRL0_LBISTRES_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LBISTCTRL0_Bits.LBISTRES */
#define IFX_SCU_LBISTCTRL0_LBISTRES_OFF (1u)

/** \brief Length for Ifx_SCU_LBISTCTRL0_Bits.PATTERNS */
#define IFX_SCU_LBISTCTRL0_PATTERNS_LEN (18u)

/** \brief Mask for Ifx_SCU_LBISTCTRL0_Bits.PATTERNS */
#define IFX_SCU_LBISTCTRL0_PATTERNS_MSK (0x3ffffu)

/** \brief Offset for Ifx_SCU_LBISTCTRL0_Bits.PATTERNS */
#define IFX_SCU_LBISTCTRL0_PATTERNS_OFF (2u)

/** \brief Length for Ifx_SCU_LBISTCTRL0_Bits.LBISTDONE */
#define IFX_SCU_LBISTCTRL0_LBISTDONE_LEN (1u)

/** \brief Mask for Ifx_SCU_LBISTCTRL0_Bits.LBISTDONE */
#define IFX_SCU_LBISTCTRL0_LBISTDONE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LBISTCTRL0_Bits.LBISTDONE */
#define IFX_SCU_LBISTCTRL0_LBISTDONE_OFF (28u)

/** \brief Length for Ifx_SCU_LBISTCTRL0_Bits.LBISTERRINJ */
#define IFX_SCU_LBISTCTRL0_LBISTERRINJ_LEN (1u)

/** \brief Mask for Ifx_SCU_LBISTCTRL0_Bits.LBISTERRINJ */
#define IFX_SCU_LBISTCTRL0_LBISTERRINJ_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LBISTCTRL0_Bits.LBISTERRINJ */
#define IFX_SCU_LBISTCTRL0_LBISTERRINJ_OFF (30u)

/** \brief Length for Ifx_SCU_LBISTCTRL0_Bits.LBISTREQRED */
#define IFX_SCU_LBISTCTRL0_LBISTREQRED_LEN (1u)

/** \brief Mask for Ifx_SCU_LBISTCTRL0_Bits.LBISTREQRED */
#define IFX_SCU_LBISTCTRL0_LBISTREQRED_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LBISTCTRL0_Bits.LBISTREQRED */
#define IFX_SCU_LBISTCTRL0_LBISTREQRED_OFF (31u)

/** \brief Length for Ifx_SCU_LBISTCTRL1_Bits.SEED */
#define IFX_SCU_LBISTCTRL1_SEED_LEN (19u)

/** \brief Mask for Ifx_SCU_LBISTCTRL1_Bits.SEED */
#define IFX_SCU_LBISTCTRL1_SEED_MSK (0x7ffffu)

/** \brief Offset for Ifx_SCU_LBISTCTRL1_Bits.SEED */
#define IFX_SCU_LBISTCTRL1_SEED_OFF (0u)

/** \brief Length for Ifx_SCU_LBISTCTRL1_Bits.SPLITSH */
#define IFX_SCU_LBISTCTRL1_SPLITSH_LEN (3u)

/** \brief Mask for Ifx_SCU_LBISTCTRL1_Bits.SPLITSH */
#define IFX_SCU_LBISTCTRL1_SPLITSH_MSK (0x7u)

/** \brief Offset for Ifx_SCU_LBISTCTRL1_Bits.SPLITSH */
#define IFX_SCU_LBISTCTRL1_SPLITSH_OFF (24u)

/** \brief Length for Ifx_SCU_LBISTCTRL1_Bits.BODY */
#define IFX_SCU_LBISTCTRL1_BODY_LEN (1u)

/** \brief Mask for Ifx_SCU_LBISTCTRL1_Bits.BODY */
#define IFX_SCU_LBISTCTRL1_BODY_MSK (0x1u)

/** \brief Offset for Ifx_SCU_LBISTCTRL1_Bits.BODY */
#define IFX_SCU_LBISTCTRL1_BODY_OFF (27u)

/** \brief Length for Ifx_SCU_LBISTCTRL1_Bits.LBISTFREQU */
#define IFX_SCU_LBISTCTRL1_LBISTFREQU_LEN (4u)

/** \brief Mask for Ifx_SCU_LBISTCTRL1_Bits.LBISTFREQU */
#define IFX_SCU_LBISTCTRL1_LBISTFREQU_MSK (0xfu)

/** \brief Offset for Ifx_SCU_LBISTCTRL1_Bits.LBISTFREQU */
#define IFX_SCU_LBISTCTRL1_LBISTFREQU_OFF (28u)

/** \brief Length for Ifx_SCU_LBISTCTRL2_Bits.LENGTH */
#define IFX_SCU_LBISTCTRL2_LENGTH_LEN (12u)

/** \brief Mask for Ifx_SCU_LBISTCTRL2_Bits.LENGTH */
#define IFX_SCU_LBISTCTRL2_LENGTH_MSK (0xfffu)

/** \brief Offset for Ifx_SCU_LBISTCTRL2_Bits.LENGTH */
#define IFX_SCU_LBISTCTRL2_LENGTH_OFF (0u)

/** \brief Length for Ifx_SCU_LBISTCTRL3_Bits.SIGNATURE */
#define IFX_SCU_LBISTCTRL3_SIGNATURE_LEN (32u)

/** \brief Mask for Ifx_SCU_LBISTCTRL3_Bits.SIGNATURE */
#define IFX_SCU_LBISTCTRL3_SIGNATURE_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCU_LBISTCTRL3_Bits.SIGNATURE */
#define IFX_SCU_LBISTCTRL3_SIGNATURE_OFF (0u)

/** \brief Length for Ifx_SCU_STMEM1_Bits.MEM */
#define IFX_SCU_STMEM1_MEM_LEN (32u)

/** \brief Mask for Ifx_SCU_STMEM1_Bits.MEM */
#define IFX_SCU_STMEM1_MEM_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCU_STMEM1_Bits.MEM */
#define IFX_SCU_STMEM1_MEM_OFF (0u)

/** \brief Length for Ifx_SCU_STMEM2_Bits.MEM */
#define IFX_SCU_STMEM2_MEM_LEN (32u)

/** \brief Mask for Ifx_SCU_STMEM2_Bits.MEM */
#define IFX_SCU_STMEM2_MEM_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCU_STMEM2_Bits.MEM */
#define IFX_SCU_STMEM2_MEM_OFF (0u)

/** \brief Length for Ifx_SCU_PDISC_Bits.PDIS0 */
#define IFX_SCU_PDISC_PDIS0_LEN (1u)

/** \brief Mask for Ifx_SCU_PDISC_Bits.PDIS0 */
#define IFX_SCU_PDISC_PDIS0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDISC_Bits.PDIS0 */
#define IFX_SCU_PDISC_PDIS0_OFF (0u)

/** \brief Length for Ifx_SCU_PDISC_Bits.PDIS1 */
#define IFX_SCU_PDISC_PDIS1_LEN (1u)

/** \brief Mask for Ifx_SCU_PDISC_Bits.PDIS1 */
#define IFX_SCU_PDISC_PDIS1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDISC_Bits.PDIS1 */
#define IFX_SCU_PDISC_PDIS1_OFF (1u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.LJTEN */
#define IFX_SCU_PMTRCSR0_LJTEN_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.LJTEN */
#define IFX_SCU_PMTRCSR0_LJTEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.LJTEN */
#define IFX_SCU_PMTRCSR0_LJTEN_OFF (0u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.LJTOVEN */
#define IFX_SCU_PMTRCSR0_LJTOVEN_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.LJTOVEN */
#define IFX_SCU_PMTRCSR0_LJTOVEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.LJTOVEN */
#define IFX_SCU_PMTRCSR0_LJTOVEN_OFF (1u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.LJTOVIEN */
#define IFX_SCU_PMTRCSR0_LJTOVIEN_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.LJTOVIEN */
#define IFX_SCU_PMTRCSR0_LJTOVIEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.LJTOVIEN */
#define IFX_SCU_PMTRCSR0_LJTOVIEN_OFF (2u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.LJTSTRT */
#define IFX_SCU_PMTRCSR0_LJTSTRT_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.LJTSTRT */
#define IFX_SCU_PMTRCSR0_LJTSTRT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.LJTSTRT */
#define IFX_SCU_PMTRCSR0_LJTSTRT_OFF (3u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.LJTSTP */
#define IFX_SCU_PMTRCSR0_LJTSTP_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.LJTSTP */
#define IFX_SCU_PMTRCSR0_LJTSTP_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.LJTSTP */
#define IFX_SCU_PMTRCSR0_LJTSTP_OFF (4u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.LJTCLR */
#define IFX_SCU_PMTRCSR0_LJTCLR_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.LJTCLR */
#define IFX_SCU_PMTRCSR0_LJTCLR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.LJTCLR */
#define IFX_SCU_PMTRCSR0_LJTCLR_OFF (5u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.SDSTEP */
#define IFX_SCU_PMTRCSR0_SDSTEP_LEN (4u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.SDSTEP */
#define IFX_SCU_PMTRCSR0_SDSTEP_MSK (0xfu)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.SDSTEP */
#define IFX_SCU_PMTRCSR0_SDSTEP_OFF (12u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.VDTEN */
#define IFX_SCU_PMTRCSR0_VDTEN_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.VDTEN */
#define IFX_SCU_PMTRCSR0_VDTEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.VDTEN */
#define IFX_SCU_PMTRCSR0_VDTEN_OFF (16u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.VDTOVEN */
#define IFX_SCU_PMTRCSR0_VDTOVEN_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.VDTOVEN */
#define IFX_SCU_PMTRCSR0_VDTOVEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.VDTOVEN */
#define IFX_SCU_PMTRCSR0_VDTOVEN_OFF (17u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.VDTOVIEN */
#define IFX_SCU_PMTRCSR0_VDTOVIEN_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.VDTOVIEN */
#define IFX_SCU_PMTRCSR0_VDTOVIEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.VDTOVIEN */
#define IFX_SCU_PMTRCSR0_VDTOVIEN_OFF (18u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.VDTSTRT */
#define IFX_SCU_PMTRCSR0_VDTSTRT_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.VDTSTRT */
#define IFX_SCU_PMTRCSR0_VDTSTRT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.VDTSTRT */
#define IFX_SCU_PMTRCSR0_VDTSTRT_OFF (19u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.VDTSTP */
#define IFX_SCU_PMTRCSR0_VDTSTP_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.VDTSTP */
#define IFX_SCU_PMTRCSR0_VDTSTP_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.VDTSTP */
#define IFX_SCU_PMTRCSR0_VDTSTP_OFF (20u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.VDTCLR */
#define IFX_SCU_PMTRCSR0_VDTCLR_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.VDTCLR */
#define IFX_SCU_PMTRCSR0_VDTCLR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.VDTCLR */
#define IFX_SCU_PMTRCSR0_VDTCLR_OFF (21u)

/** \brief Length for Ifx_SCU_PMTRCSR0_Bits.LPSLPEN */
#define IFX_SCU_PMTRCSR0_LPSLPEN_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR0_Bits.LPSLPEN */
#define IFX_SCU_PMTRCSR0_LPSLPEN_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR0_Bits.LPSLPEN */
#define IFX_SCU_PMTRCSR0_LPSLPEN_OFF (29u)

/** \brief Length for Ifx_SCU_PMTRCSR1_Bits.LJTCV */
#define IFX_SCU_PMTRCSR1_LJTCV_LEN (16u)

/** \brief Mask for Ifx_SCU_PMTRCSR1_Bits.LJTCV */
#define IFX_SCU_PMTRCSR1_LJTCV_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_PMTRCSR1_Bits.LJTCV */
#define IFX_SCU_PMTRCSR1_LJTCV_OFF (0u)

/** \brief Length for Ifx_SCU_PMTRCSR1_Bits.VDTCV */
#define IFX_SCU_PMTRCSR1_VDTCV_LEN (10u)

/** \brief Mask for Ifx_SCU_PMTRCSR1_Bits.VDTCV */
#define IFX_SCU_PMTRCSR1_VDTCV_MSK (0x3ffu)

/** \brief Offset for Ifx_SCU_PMTRCSR1_Bits.VDTCV */
#define IFX_SCU_PMTRCSR1_VDTCV_OFF (16u)

/** \brief Length for Ifx_SCU_PMTRCSR2_Bits.LDJMPREQ */
#define IFX_SCU_PMTRCSR2_LDJMPREQ_LEN (2u)

/** \brief Mask for Ifx_SCU_PMTRCSR2_Bits.LDJMPREQ */
#define IFX_SCU_PMTRCSR2_LDJMPREQ_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMTRCSR2_Bits.LDJMPREQ */
#define IFX_SCU_PMTRCSR2_LDJMPREQ_OFF (0u)

/** \brief Length for Ifx_SCU_PMTRCSR2_Bits.LJTRUN */
#define IFX_SCU_PMTRCSR2_LJTRUN_LEN (2u)

/** \brief Mask for Ifx_SCU_PMTRCSR2_Bits.LJTRUN */
#define IFX_SCU_PMTRCSR2_LJTRUN_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMTRCSR2_Bits.LJTRUN */
#define IFX_SCU_PMTRCSR2_LJTRUN_OFF (4u)

/** \brief Length for Ifx_SCU_PMTRCSR2_Bits.LJTOV */
#define IFX_SCU_PMTRCSR2_LJTOV_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR2_Bits.LJTOV */
#define IFX_SCU_PMTRCSR2_LJTOV_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR2_Bits.LJTOV */
#define IFX_SCU_PMTRCSR2_LJTOV_OFF (8u)

/** \brief Length for Ifx_SCU_PMTRCSR2_Bits.LJTOVCLR */
#define IFX_SCU_PMTRCSR2_LJTOVCLR_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR2_Bits.LJTOVCLR */
#define IFX_SCU_PMTRCSR2_LJTOVCLR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR2_Bits.LJTOVCLR */
#define IFX_SCU_PMTRCSR2_LJTOVCLR_OFF (12u)

/** \brief Length for Ifx_SCU_PMTRCSR2_Bits.LJTCNT */
#define IFX_SCU_PMTRCSR2_LJTCNT_LEN (16u)

/** \brief Mask for Ifx_SCU_PMTRCSR2_Bits.LJTCNT */
#define IFX_SCU_PMTRCSR2_LJTCNT_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_PMTRCSR2_Bits.LJTCNT */
#define IFX_SCU_PMTRCSR2_LJTCNT_OFF (16u)

/** \brief Length for Ifx_SCU_PMTRCSR3_Bits.VDROOPREQ */
#define IFX_SCU_PMTRCSR3_VDROOPREQ_LEN (2u)

/** \brief Mask for Ifx_SCU_PMTRCSR3_Bits.VDROOPREQ */
#define IFX_SCU_PMTRCSR3_VDROOPREQ_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMTRCSR3_Bits.VDROOPREQ */
#define IFX_SCU_PMTRCSR3_VDROOPREQ_OFF (0u)

/** \brief Length for Ifx_SCU_PMTRCSR3_Bits.VDTRUN */
#define IFX_SCU_PMTRCSR3_VDTRUN_LEN (2u)

/** \brief Mask for Ifx_SCU_PMTRCSR3_Bits.VDTRUN */
#define IFX_SCU_PMTRCSR3_VDTRUN_MSK (0x3u)

/** \brief Offset for Ifx_SCU_PMTRCSR3_Bits.VDTRUN */
#define IFX_SCU_PMTRCSR3_VDTRUN_OFF (4u)

/** \brief Length for Ifx_SCU_PMTRCSR3_Bits.VDTOV */
#define IFX_SCU_PMTRCSR3_VDTOV_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR3_Bits.VDTOV */
#define IFX_SCU_PMTRCSR3_VDTOV_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR3_Bits.VDTOV */
#define IFX_SCU_PMTRCSR3_VDTOV_OFF (8u)

/** \brief Length for Ifx_SCU_PMTRCSR3_Bits.VDTOVCLR */
#define IFX_SCU_PMTRCSR3_VDTOVCLR_LEN (1u)

/** \brief Mask for Ifx_SCU_PMTRCSR3_Bits.VDTOVCLR */
#define IFX_SCU_PMTRCSR3_VDTOVCLR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PMTRCSR3_Bits.VDTOVCLR */
#define IFX_SCU_PMTRCSR3_VDTOVCLR_OFF (12u)

/** \brief Length for Ifx_SCU_PMTRCSR3_Bits.VDTCNT */
#define IFX_SCU_PMTRCSR3_VDTCNT_LEN (10u)

/** \brief Mask for Ifx_SCU_PMTRCSR3_Bits.VDTCNT */
#define IFX_SCU_PMTRCSR3_VDTCNT_MSK (0x3ffu)

/** \brief Offset for Ifx_SCU_PMTRCSR3_Bits.VDTCNT */
#define IFX_SCU_PMTRCSR3_VDTCNT_OFF (16u)

/** \brief Length for Ifx_SCU_STMEM3_Bits.MEM */
#define IFX_SCU_STMEM3_MEM_LEN (32u)

/** \brief Mask for Ifx_SCU_STMEM3_Bits.MEM */
#define IFX_SCU_STMEM3_MEM_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCU_STMEM3_Bits.MEM */
#define IFX_SCU_STMEM3_MEM_OFF (0u)

/** \brief Length for Ifx_SCU_STMEM4_Bits.MEM */
#define IFX_SCU_STMEM4_MEM_LEN (32u)

/** \brief Mask for Ifx_SCU_STMEM4_Bits.MEM */
#define IFX_SCU_STMEM4_MEM_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCU_STMEM4_Bits.MEM */
#define IFX_SCU_STMEM4_MEM_OFF (0u)

/** \brief Length for Ifx_SCU_STMEM5_Bits.MEM */
#define IFX_SCU_STMEM5_MEM_LEN (32u)

/** \brief Mask for Ifx_SCU_STMEM5_Bits.MEM */
#define IFX_SCU_STMEM5_MEM_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCU_STMEM5_Bits.MEM */
#define IFX_SCU_STMEM5_MEM_OFF (0u)

/** \brief Length for Ifx_SCU_STMEM6_Bits.MEM */
#define IFX_SCU_STMEM6_MEM_LEN (32u)

/** \brief Mask for Ifx_SCU_STMEM6_Bits.MEM */
#define IFX_SCU_STMEM6_MEM_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCU_STMEM6_Bits.MEM */
#define IFX_SCU_STMEM6_MEM_OFF (0u)

/** \brief Length for Ifx_SCU_OVCENABLE_Bits.OVEN0 */
#define IFX_SCU_OVCENABLE_OVEN0_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCENABLE_Bits.OVEN0 */
#define IFX_SCU_OVCENABLE_OVEN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCENABLE_Bits.OVEN0 */
#define IFX_SCU_OVCENABLE_OVEN0_OFF (0u)

/** \brief Length for Ifx_SCU_OVCENABLE_Bits.OVEN1 */
#define IFX_SCU_OVCENABLE_OVEN1_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCENABLE_Bits.OVEN1 */
#define IFX_SCU_OVCENABLE_OVEN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCENABLE_Bits.OVEN1 */
#define IFX_SCU_OVCENABLE_OVEN1_OFF (1u)

/** \brief Length for Ifx_SCU_OVCENABLE_Bits.OVEN2 */
#define IFX_SCU_OVCENABLE_OVEN2_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCENABLE_Bits.OVEN2 */
#define IFX_SCU_OVCENABLE_OVEN2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCENABLE_Bits.OVEN2 */
#define IFX_SCU_OVCENABLE_OVEN2_OFF (2u)

/** \brief Length for Ifx_SCU_OVCCON_Bits.CSEL0 */
#define IFX_SCU_OVCCON_CSEL0_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCCON_Bits.CSEL0 */
#define IFX_SCU_OVCCON_CSEL0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCCON_Bits.CSEL0 */
#define IFX_SCU_OVCCON_CSEL0_OFF (0u)

/** \brief Length for Ifx_SCU_OVCCON_Bits.CSEL1 */
#define IFX_SCU_OVCCON_CSEL1_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCCON_Bits.CSEL1 */
#define IFX_SCU_OVCCON_CSEL1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCCON_Bits.CSEL1 */
#define IFX_SCU_OVCCON_CSEL1_OFF (1u)

/** \brief Length for Ifx_SCU_OVCCON_Bits.CSEL2 */
#define IFX_SCU_OVCCON_CSEL2_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCCON_Bits.CSEL2 */
#define IFX_SCU_OVCCON_CSEL2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCCON_Bits.CSEL2 */
#define IFX_SCU_OVCCON_CSEL2_OFF (2u)

/** \brief Length for Ifx_SCU_OVCCON_Bits.OVSTRT */
#define IFX_SCU_OVCCON_OVSTRT_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCCON_Bits.OVSTRT */
#define IFX_SCU_OVCCON_OVSTRT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCCON_Bits.OVSTRT */
#define IFX_SCU_OVCCON_OVSTRT_OFF (16u)

/** \brief Length for Ifx_SCU_OVCCON_Bits.OVSTP */
#define IFX_SCU_OVCCON_OVSTP_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCCON_Bits.OVSTP */
#define IFX_SCU_OVCCON_OVSTP_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCCON_Bits.OVSTP */
#define IFX_SCU_OVCCON_OVSTP_OFF (17u)

/** \brief Length for Ifx_SCU_OVCCON_Bits.DCINVAL */
#define IFX_SCU_OVCCON_DCINVAL_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCCON_Bits.DCINVAL */
#define IFX_SCU_OVCCON_DCINVAL_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCCON_Bits.DCINVAL */
#define IFX_SCU_OVCCON_DCINVAL_OFF (18u)

/** \brief Length for Ifx_SCU_OVCCON_Bits.OVCONF */
#define IFX_SCU_OVCCON_OVCONF_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCCON_Bits.OVCONF */
#define IFX_SCU_OVCCON_OVCONF_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCCON_Bits.OVCONF */
#define IFX_SCU_OVCCON_OVCONF_OFF (24u)

/** \brief Length for Ifx_SCU_OVCCON_Bits.POVCONF */
#define IFX_SCU_OVCCON_POVCONF_LEN (1u)

/** \brief Mask for Ifx_SCU_OVCCON_Bits.POVCONF */
#define IFX_SCU_OVCCON_POVCONF_MSK (0x1u)

/** \brief Offset for Ifx_SCU_OVCCON_Bits.POVCONF */
#define IFX_SCU_OVCCON_POVCONF_OFF (25u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ0A */
#define IFX_SCU_EIFILT_FILRQ0A_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ0A */
#define IFX_SCU_EIFILT_FILRQ0A_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ0A */
#define IFX_SCU_EIFILT_FILRQ0A_OFF (0u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ5A */
#define IFX_SCU_EIFILT_FILRQ5A_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ5A */
#define IFX_SCU_EIFILT_FILRQ5A_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ5A */
#define IFX_SCU_EIFILT_FILRQ5A_OFF (1u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ2A */
#define IFX_SCU_EIFILT_FILRQ2A_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ2A */
#define IFX_SCU_EIFILT_FILRQ2A_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ2A */
#define IFX_SCU_EIFILT_FILRQ2A_OFF (2u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ3A */
#define IFX_SCU_EIFILT_FILRQ3A_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ3A */
#define IFX_SCU_EIFILT_FILRQ3A_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ3A */
#define IFX_SCU_EIFILT_FILRQ3A_OFF (3u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ0C */
#define IFX_SCU_EIFILT_FILRQ0C_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ0C */
#define IFX_SCU_EIFILT_FILRQ0C_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ0C */
#define IFX_SCU_EIFILT_FILRQ0C_OFF (4u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ1C */
#define IFX_SCU_EIFILT_FILRQ1C_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ1C */
#define IFX_SCU_EIFILT_FILRQ1C_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ1C */
#define IFX_SCU_EIFILT_FILRQ1C_OFF (5u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ3C */
#define IFX_SCU_EIFILT_FILRQ3C_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ3C */
#define IFX_SCU_EIFILT_FILRQ3C_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ3C */
#define IFX_SCU_EIFILT_FILRQ3C_OFF (6u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ2C */
#define IFX_SCU_EIFILT_FILRQ2C_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ2C */
#define IFX_SCU_EIFILT_FILRQ2C_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ2C */
#define IFX_SCU_EIFILT_FILRQ2C_OFF (7u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ4A */
#define IFX_SCU_EIFILT_FILRQ4A_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ4A */
#define IFX_SCU_EIFILT_FILRQ4A_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ4A */
#define IFX_SCU_EIFILT_FILRQ4A_OFF (8u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ6A */
#define IFX_SCU_EIFILT_FILRQ6A_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ6A */
#define IFX_SCU_EIFILT_FILRQ6A_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ6A */
#define IFX_SCU_EIFILT_FILRQ6A_OFF (9u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ1A */
#define IFX_SCU_EIFILT_FILRQ1A_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ1A */
#define IFX_SCU_EIFILT_FILRQ1A_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ1A */
#define IFX_SCU_EIFILT_FILRQ1A_OFF (10u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ7A */
#define IFX_SCU_EIFILT_FILRQ7A_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ7A */
#define IFX_SCU_EIFILT_FILRQ7A_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ7A */
#define IFX_SCU_EIFILT_FILRQ7A_OFF (11u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ6D */
#define IFX_SCU_EIFILT_FILRQ6D_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ6D */
#define IFX_SCU_EIFILT_FILRQ6D_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ6D */
#define IFX_SCU_EIFILT_FILRQ6D_OFF (12u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ4D */
#define IFX_SCU_EIFILT_FILRQ4D_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ4D */
#define IFX_SCU_EIFILT_FILRQ4D_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ4D */
#define IFX_SCU_EIFILT_FILRQ4D_OFF (13u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ2B */
#define IFX_SCU_EIFILT_FILRQ2B_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ2B */
#define IFX_SCU_EIFILT_FILRQ2B_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ2B */
#define IFX_SCU_EIFILT_FILRQ2B_OFF (14u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ3B */
#define IFX_SCU_EIFILT_FILRQ3B_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ3B */
#define IFX_SCU_EIFILT_FILRQ3B_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ3B */
#define IFX_SCU_EIFILT_FILRQ3B_OFF (15u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILRQ7C */
#define IFX_SCU_EIFILT_FILRQ7C_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILRQ7C */
#define IFX_SCU_EIFILT_FILRQ7C_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILRQ7C */
#define IFX_SCU_EIFILT_FILRQ7C_OFF (16u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.FILTDIV */
#define IFX_SCU_EIFILT_FILTDIV_LEN (4u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.FILTDIV */
#define IFX_SCU_EIFILT_FILTDIV_MSK (0xfu)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.FILTDIV */
#define IFX_SCU_EIFILT_FILTDIV_OFF (24u)

/** \brief Length for Ifx_SCU_EIFILT_Bits.DEPTH */
#define IFX_SCU_EIFILT_DEPTH_LEN (4u)

/** \brief Mask for Ifx_SCU_EIFILT_Bits.DEPTH */
#define IFX_SCU_EIFILT_DEPTH_MSK (0xfu)

/** \brief Offset for Ifx_SCU_EIFILT_Bits.DEPTH */
#define IFX_SCU_EIFILT_DEPTH_OFF (28u)

/** \brief Length for Ifx_SCU_EICR_Bits.EXIS0 */
#define IFX_SCU_EICR_EXIS0_LEN (3u)

/** \brief Mask for Ifx_SCU_EICR_Bits.EXIS0 */
#define IFX_SCU_EICR_EXIS0_MSK (0x7u)

/** \brief Offset for Ifx_SCU_EICR_Bits.EXIS0 */
#define IFX_SCU_EICR_EXIS0_OFF (4u)

/** \brief Length for Ifx_SCU_EICR_Bits.FEN0 */
#define IFX_SCU_EICR_FEN0_LEN (1u)

/** \brief Mask for Ifx_SCU_EICR_Bits.FEN0 */
#define IFX_SCU_EICR_FEN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICR_Bits.FEN0 */
#define IFX_SCU_EICR_FEN0_OFF (8u)

/** \brief Length for Ifx_SCU_EICR_Bits.REN0 */
#define IFX_SCU_EICR_REN0_LEN (1u)

/** \brief Mask for Ifx_SCU_EICR_Bits.REN0 */
#define IFX_SCU_EICR_REN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICR_Bits.REN0 */
#define IFX_SCU_EICR_REN0_OFF (9u)

/** \brief Length for Ifx_SCU_EICR_Bits.LDEN0 */
#define IFX_SCU_EICR_LDEN0_LEN (1u)

/** \brief Mask for Ifx_SCU_EICR_Bits.LDEN0 */
#define IFX_SCU_EICR_LDEN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICR_Bits.LDEN0 */
#define IFX_SCU_EICR_LDEN0_OFF (10u)

/** \brief Length for Ifx_SCU_EICR_Bits.EIEN0 */
#define IFX_SCU_EICR_EIEN0_LEN (1u)

/** \brief Mask for Ifx_SCU_EICR_Bits.EIEN0 */
#define IFX_SCU_EICR_EIEN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICR_Bits.EIEN0 */
#define IFX_SCU_EICR_EIEN0_OFF (11u)

/** \brief Length for Ifx_SCU_EICR_Bits.INP0 */
#define IFX_SCU_EICR_INP0_LEN (3u)

/** \brief Mask for Ifx_SCU_EICR_Bits.INP0 */
#define IFX_SCU_EICR_INP0_MSK (0x7u)

/** \brief Offset for Ifx_SCU_EICR_Bits.INP0 */
#define IFX_SCU_EICR_INP0_OFF (12u)

/** \brief Length for Ifx_SCU_EICR_Bits.EXIS1 */
#define IFX_SCU_EICR_EXIS1_LEN (3u)

/** \brief Mask for Ifx_SCU_EICR_Bits.EXIS1 */
#define IFX_SCU_EICR_EXIS1_MSK (0x7u)

/** \brief Offset for Ifx_SCU_EICR_Bits.EXIS1 */
#define IFX_SCU_EICR_EXIS1_OFF (20u)

/** \brief Length for Ifx_SCU_EICR_Bits.FEN1 */
#define IFX_SCU_EICR_FEN1_LEN (1u)

/** \brief Mask for Ifx_SCU_EICR_Bits.FEN1 */
#define IFX_SCU_EICR_FEN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICR_Bits.FEN1 */
#define IFX_SCU_EICR_FEN1_OFF (24u)

/** \brief Length for Ifx_SCU_EICR_Bits.REN1 */
#define IFX_SCU_EICR_REN1_LEN (1u)

/** \brief Mask for Ifx_SCU_EICR_Bits.REN1 */
#define IFX_SCU_EICR_REN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICR_Bits.REN1 */
#define IFX_SCU_EICR_REN1_OFF (25u)

/** \brief Length for Ifx_SCU_EICR_Bits.LDEN1 */
#define IFX_SCU_EICR_LDEN1_LEN (1u)

/** \brief Mask for Ifx_SCU_EICR_Bits.LDEN1 */
#define IFX_SCU_EICR_LDEN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICR_Bits.LDEN1 */
#define IFX_SCU_EICR_LDEN1_OFF (26u)

/** \brief Length for Ifx_SCU_EICR_Bits.EIEN1 */
#define IFX_SCU_EICR_EIEN1_LEN (1u)

/** \brief Mask for Ifx_SCU_EICR_Bits.EIEN1 */
#define IFX_SCU_EICR_EIEN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICR_Bits.EIEN1 */
#define IFX_SCU_EICR_EIEN1_OFF (27u)

/** \brief Length for Ifx_SCU_EICR_Bits.INP1 */
#define IFX_SCU_EICR_INP1_LEN (3u)

/** \brief Mask for Ifx_SCU_EICR_Bits.INP1 */
#define IFX_SCU_EICR_INP1_MSK (0x7u)

/** \brief Offset for Ifx_SCU_EICR_Bits.INP1 */
#define IFX_SCU_EICR_INP1_OFF (28u)

/** \brief Length for Ifx_SCU_EIFR_Bits.INTF0 */
#define IFX_SCU_EIFR_INTF0_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFR_Bits.INTF0 */
#define IFX_SCU_EIFR_INTF0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFR_Bits.INTF0 */
#define IFX_SCU_EIFR_INTF0_OFF (0u)

/** \brief Length for Ifx_SCU_EIFR_Bits.INTF1 */
#define IFX_SCU_EIFR_INTF1_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFR_Bits.INTF1 */
#define IFX_SCU_EIFR_INTF1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFR_Bits.INTF1 */
#define IFX_SCU_EIFR_INTF1_OFF (1u)

/** \brief Length for Ifx_SCU_EIFR_Bits.INTF2 */
#define IFX_SCU_EIFR_INTF2_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFR_Bits.INTF2 */
#define IFX_SCU_EIFR_INTF2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFR_Bits.INTF2 */
#define IFX_SCU_EIFR_INTF2_OFF (2u)

/** \brief Length for Ifx_SCU_EIFR_Bits.INTF3 */
#define IFX_SCU_EIFR_INTF3_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFR_Bits.INTF3 */
#define IFX_SCU_EIFR_INTF3_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFR_Bits.INTF3 */
#define IFX_SCU_EIFR_INTF3_OFF (3u)

/** \brief Length for Ifx_SCU_EIFR_Bits.INTF4 */
#define IFX_SCU_EIFR_INTF4_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFR_Bits.INTF4 */
#define IFX_SCU_EIFR_INTF4_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFR_Bits.INTF4 */
#define IFX_SCU_EIFR_INTF4_OFF (4u)

/** \brief Length for Ifx_SCU_EIFR_Bits.INTF5 */
#define IFX_SCU_EIFR_INTF5_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFR_Bits.INTF5 */
#define IFX_SCU_EIFR_INTF5_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFR_Bits.INTF5 */
#define IFX_SCU_EIFR_INTF5_OFF (5u)

/** \brief Length for Ifx_SCU_EIFR_Bits.INTF6 */
#define IFX_SCU_EIFR_INTF6_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFR_Bits.INTF6 */
#define IFX_SCU_EIFR_INTF6_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFR_Bits.INTF6 */
#define IFX_SCU_EIFR_INTF6_OFF (6u)

/** \brief Length for Ifx_SCU_EIFR_Bits.INTF7 */
#define IFX_SCU_EIFR_INTF7_LEN (1u)

/** \brief Mask for Ifx_SCU_EIFR_Bits.INTF7 */
#define IFX_SCU_EIFR_INTF7_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EIFR_Bits.INTF7 */
#define IFX_SCU_EIFR_INTF7_OFF (7u)

/** \brief Length for Ifx_SCU_FMR_Bits.FS0 */
#define IFX_SCU_FMR_FS0_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FS0 */
#define IFX_SCU_FMR_FS0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FS0 */
#define IFX_SCU_FMR_FS0_OFF (0u)

/** \brief Length for Ifx_SCU_FMR_Bits.FS1 */
#define IFX_SCU_FMR_FS1_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FS1 */
#define IFX_SCU_FMR_FS1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FS1 */
#define IFX_SCU_FMR_FS1_OFF (1u)

/** \brief Length for Ifx_SCU_FMR_Bits.FS2 */
#define IFX_SCU_FMR_FS2_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FS2 */
#define IFX_SCU_FMR_FS2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FS2 */
#define IFX_SCU_FMR_FS2_OFF (2u)

/** \brief Length for Ifx_SCU_FMR_Bits.FS3 */
#define IFX_SCU_FMR_FS3_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FS3 */
#define IFX_SCU_FMR_FS3_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FS3 */
#define IFX_SCU_FMR_FS3_OFF (3u)

/** \brief Length for Ifx_SCU_FMR_Bits.FS4 */
#define IFX_SCU_FMR_FS4_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FS4 */
#define IFX_SCU_FMR_FS4_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FS4 */
#define IFX_SCU_FMR_FS4_OFF (4u)

/** \brief Length for Ifx_SCU_FMR_Bits.FS5 */
#define IFX_SCU_FMR_FS5_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FS5 */
#define IFX_SCU_FMR_FS5_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FS5 */
#define IFX_SCU_FMR_FS5_OFF (5u)

/** \brief Length for Ifx_SCU_FMR_Bits.FS6 */
#define IFX_SCU_FMR_FS6_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FS6 */
#define IFX_SCU_FMR_FS6_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FS6 */
#define IFX_SCU_FMR_FS6_OFF (6u)

/** \brief Length for Ifx_SCU_FMR_Bits.FS7 */
#define IFX_SCU_FMR_FS7_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FS7 */
#define IFX_SCU_FMR_FS7_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FS7 */
#define IFX_SCU_FMR_FS7_OFF (7u)

/** \brief Length for Ifx_SCU_FMR_Bits.FC0 */
#define IFX_SCU_FMR_FC0_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FC0 */
#define IFX_SCU_FMR_FC0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FC0 */
#define IFX_SCU_FMR_FC0_OFF (16u)

/** \brief Length for Ifx_SCU_FMR_Bits.FC1 */
#define IFX_SCU_FMR_FC1_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FC1 */
#define IFX_SCU_FMR_FC1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FC1 */
#define IFX_SCU_FMR_FC1_OFF (17u)

/** \brief Length for Ifx_SCU_FMR_Bits.FC2 */
#define IFX_SCU_FMR_FC2_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FC2 */
#define IFX_SCU_FMR_FC2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FC2 */
#define IFX_SCU_FMR_FC2_OFF (18u)

/** \brief Length for Ifx_SCU_FMR_Bits.FC3 */
#define IFX_SCU_FMR_FC3_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FC3 */
#define IFX_SCU_FMR_FC3_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FC3 */
#define IFX_SCU_FMR_FC3_OFF (19u)

/** \brief Length for Ifx_SCU_FMR_Bits.FC4 */
#define IFX_SCU_FMR_FC4_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FC4 */
#define IFX_SCU_FMR_FC4_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FC4 */
#define IFX_SCU_FMR_FC4_OFF (20u)

/** \brief Length for Ifx_SCU_FMR_Bits.FC5 */
#define IFX_SCU_FMR_FC5_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FC5 */
#define IFX_SCU_FMR_FC5_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FC5 */
#define IFX_SCU_FMR_FC5_OFF (21u)

/** \brief Length for Ifx_SCU_FMR_Bits.FC6 */
#define IFX_SCU_FMR_FC6_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FC6 */
#define IFX_SCU_FMR_FC6_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FC6 */
#define IFX_SCU_FMR_FC6_OFF (22u)

/** \brief Length for Ifx_SCU_FMR_Bits.FC7 */
#define IFX_SCU_FMR_FC7_LEN (1u)

/** \brief Mask for Ifx_SCU_FMR_Bits.FC7 */
#define IFX_SCU_FMR_FC7_MSK (0x1u)

/** \brief Offset for Ifx_SCU_FMR_Bits.FC7 */
#define IFX_SCU_FMR_FC7_OFF (23u)

/** \brief Length for Ifx_SCU_PDRR_Bits.PDR0 */
#define IFX_SCU_PDRR_PDR0_LEN (1u)

/** \brief Mask for Ifx_SCU_PDRR_Bits.PDR0 */
#define IFX_SCU_PDRR_PDR0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDRR_Bits.PDR0 */
#define IFX_SCU_PDRR_PDR0_OFF (0u)

/** \brief Length for Ifx_SCU_PDRR_Bits.PDR1 */
#define IFX_SCU_PDRR_PDR1_LEN (1u)

/** \brief Mask for Ifx_SCU_PDRR_Bits.PDR1 */
#define IFX_SCU_PDRR_PDR1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDRR_Bits.PDR1 */
#define IFX_SCU_PDRR_PDR1_OFF (1u)

/** \brief Length for Ifx_SCU_PDRR_Bits.PDR2 */
#define IFX_SCU_PDRR_PDR2_LEN (1u)

/** \brief Mask for Ifx_SCU_PDRR_Bits.PDR2 */
#define IFX_SCU_PDRR_PDR2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDRR_Bits.PDR2 */
#define IFX_SCU_PDRR_PDR2_OFF (2u)

/** \brief Length for Ifx_SCU_PDRR_Bits.PDR3 */
#define IFX_SCU_PDRR_PDR3_LEN (1u)

/** \brief Mask for Ifx_SCU_PDRR_Bits.PDR3 */
#define IFX_SCU_PDRR_PDR3_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDRR_Bits.PDR3 */
#define IFX_SCU_PDRR_PDR3_OFF (3u)

/** \brief Length for Ifx_SCU_PDRR_Bits.PDR4 */
#define IFX_SCU_PDRR_PDR4_LEN (1u)

/** \brief Mask for Ifx_SCU_PDRR_Bits.PDR4 */
#define IFX_SCU_PDRR_PDR4_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDRR_Bits.PDR4 */
#define IFX_SCU_PDRR_PDR4_OFF (4u)

/** \brief Length for Ifx_SCU_PDRR_Bits.PDR5 */
#define IFX_SCU_PDRR_PDR5_LEN (1u)

/** \brief Mask for Ifx_SCU_PDRR_Bits.PDR5 */
#define IFX_SCU_PDRR_PDR5_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDRR_Bits.PDR5 */
#define IFX_SCU_PDRR_PDR5_OFF (5u)

/** \brief Length for Ifx_SCU_PDRR_Bits.PDR6 */
#define IFX_SCU_PDRR_PDR6_LEN (1u)

/** \brief Mask for Ifx_SCU_PDRR_Bits.PDR6 */
#define IFX_SCU_PDRR_PDR6_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDRR_Bits.PDR6 */
#define IFX_SCU_PDRR_PDR6_OFF (6u)

/** \brief Length for Ifx_SCU_PDRR_Bits.PDR7 */
#define IFX_SCU_PDRR_PDR7_LEN (1u)

/** \brief Mask for Ifx_SCU_PDRR_Bits.PDR7 */
#define IFX_SCU_PDRR_PDR7_MSK (0x1u)

/** \brief Offset for Ifx_SCU_PDRR_Bits.PDR7 */
#define IFX_SCU_PDRR_PDR7_OFF (7u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN00 */
#define IFX_SCU_IGCR_IPEN00_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN00 */
#define IFX_SCU_IGCR_IPEN00_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN00 */
#define IFX_SCU_IGCR_IPEN00_OFF (0u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN01 */
#define IFX_SCU_IGCR_IPEN01_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN01 */
#define IFX_SCU_IGCR_IPEN01_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN01 */
#define IFX_SCU_IGCR_IPEN01_OFF (1u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN02 */
#define IFX_SCU_IGCR_IPEN02_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN02 */
#define IFX_SCU_IGCR_IPEN02_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN02 */
#define IFX_SCU_IGCR_IPEN02_OFF (2u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN03 */
#define IFX_SCU_IGCR_IPEN03_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN03 */
#define IFX_SCU_IGCR_IPEN03_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN03 */
#define IFX_SCU_IGCR_IPEN03_OFF (3u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN04 */
#define IFX_SCU_IGCR_IPEN04_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN04 */
#define IFX_SCU_IGCR_IPEN04_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN04 */
#define IFX_SCU_IGCR_IPEN04_OFF (4u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN05 */
#define IFX_SCU_IGCR_IPEN05_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN05 */
#define IFX_SCU_IGCR_IPEN05_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN05 */
#define IFX_SCU_IGCR_IPEN05_OFF (5u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN06 */
#define IFX_SCU_IGCR_IPEN06_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN06 */
#define IFX_SCU_IGCR_IPEN06_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN06 */
#define IFX_SCU_IGCR_IPEN06_OFF (6u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN07 */
#define IFX_SCU_IGCR_IPEN07_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN07 */
#define IFX_SCU_IGCR_IPEN07_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN07 */
#define IFX_SCU_IGCR_IPEN07_OFF (7u)

/** \brief Length for Ifx_SCU_IGCR_Bits.GEEN0 */
#define IFX_SCU_IGCR_GEEN0_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.GEEN0 */
#define IFX_SCU_IGCR_GEEN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.GEEN0 */
#define IFX_SCU_IGCR_GEEN0_OFF (13u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IGP0 */
#define IFX_SCU_IGCR_IGP0_LEN (2u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IGP0 */
#define IFX_SCU_IGCR_IGP0_MSK (0x3u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IGP0 */
#define IFX_SCU_IGCR_IGP0_OFF (14u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN10 */
#define IFX_SCU_IGCR_IPEN10_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN10 */
#define IFX_SCU_IGCR_IPEN10_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN10 */
#define IFX_SCU_IGCR_IPEN10_OFF (16u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN11 */
#define IFX_SCU_IGCR_IPEN11_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN11 */
#define IFX_SCU_IGCR_IPEN11_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN11 */
#define IFX_SCU_IGCR_IPEN11_OFF (17u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN12 */
#define IFX_SCU_IGCR_IPEN12_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN12 */
#define IFX_SCU_IGCR_IPEN12_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN12 */
#define IFX_SCU_IGCR_IPEN12_OFF (18u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN13 */
#define IFX_SCU_IGCR_IPEN13_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN13 */
#define IFX_SCU_IGCR_IPEN13_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN13 */
#define IFX_SCU_IGCR_IPEN13_OFF (19u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN14 */
#define IFX_SCU_IGCR_IPEN14_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN14 */
#define IFX_SCU_IGCR_IPEN14_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN14 */
#define IFX_SCU_IGCR_IPEN14_OFF (20u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN15 */
#define IFX_SCU_IGCR_IPEN15_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN15 */
#define IFX_SCU_IGCR_IPEN15_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN15 */
#define IFX_SCU_IGCR_IPEN15_OFF (21u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN16 */
#define IFX_SCU_IGCR_IPEN16_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN16 */
#define IFX_SCU_IGCR_IPEN16_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN16 */
#define IFX_SCU_IGCR_IPEN16_OFF (22u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IPEN17 */
#define IFX_SCU_IGCR_IPEN17_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IPEN17 */
#define IFX_SCU_IGCR_IPEN17_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IPEN17 */
#define IFX_SCU_IGCR_IPEN17_OFF (23u)

/** \brief Length for Ifx_SCU_IGCR_Bits.GEEN1 */
#define IFX_SCU_IGCR_GEEN1_LEN (1u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.GEEN1 */
#define IFX_SCU_IGCR_GEEN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.GEEN1 */
#define IFX_SCU_IGCR_GEEN1_OFF (29u)

/** \brief Length for Ifx_SCU_IGCR_Bits.IGP1 */
#define IFX_SCU_IGCR_IGP1_LEN (2u)

/** \brief Mask for Ifx_SCU_IGCR_Bits.IGP1 */
#define IFX_SCU_IGCR_IGP1_MSK (0x3u)

/** \brief Offset for Ifx_SCU_IGCR_Bits.IGP1 */
#define IFX_SCU_IGCR_IGP1_OFF (30u)

/** \brief Length for Ifx_SCU_WDTCPU_CON0_Bits.ENDINIT */
#define IFX_SCU_WDTCPU_CON0_ENDINIT_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON0_Bits.ENDINIT */
#define IFX_SCU_WDTCPU_CON0_ENDINIT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_CON0_Bits.ENDINIT */
#define IFX_SCU_WDTCPU_CON0_ENDINIT_OFF (0u)

/** \brief Length for Ifx_SCU_WDTCPU_CON0_Bits.LCK */
#define IFX_SCU_WDTCPU_CON0_LCK_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON0_Bits.LCK */
#define IFX_SCU_WDTCPU_CON0_LCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_CON0_Bits.LCK */
#define IFX_SCU_WDTCPU_CON0_LCK_OFF (1u)

/** \brief Length for Ifx_SCU_WDTCPU_CON0_Bits.PW */
#define IFX_SCU_WDTCPU_CON0_PW_LEN (14u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON0_Bits.PW */
#define IFX_SCU_WDTCPU_CON0_PW_MSK (0x3fffu)

/** \brief Offset for Ifx_SCU_WDTCPU_CON0_Bits.PW */
#define IFX_SCU_WDTCPU_CON0_PW_OFF (2u)

/** \brief Length for Ifx_SCU_WDTCPU_CON0_Bits.REL */
#define IFX_SCU_WDTCPU_CON0_REL_LEN (16u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON0_Bits.REL */
#define IFX_SCU_WDTCPU_CON0_REL_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_WDTCPU_CON0_Bits.REL */
#define IFX_SCU_WDTCPU_CON0_REL_OFF (16u)

/** \brief Length for Ifx_SCU_WDTCPU_CON1_Bits.IR0 */
#define IFX_SCU_WDTCPU_CON1_IR0_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON1_Bits.IR0 */
#define IFX_SCU_WDTCPU_CON1_IR0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_CON1_Bits.IR0 */
#define IFX_SCU_WDTCPU_CON1_IR0_OFF (2u)

/** \brief Length for Ifx_SCU_WDTCPU_CON1_Bits.DR */
#define IFX_SCU_WDTCPU_CON1_DR_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON1_Bits.DR */
#define IFX_SCU_WDTCPU_CON1_DR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_CON1_Bits.DR */
#define IFX_SCU_WDTCPU_CON1_DR_OFF (3u)

/** \brief Length for Ifx_SCU_WDTCPU_CON1_Bits.IR1 */
#define IFX_SCU_WDTCPU_CON1_IR1_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON1_Bits.IR1 */
#define IFX_SCU_WDTCPU_CON1_IR1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_CON1_Bits.IR1 */
#define IFX_SCU_WDTCPU_CON1_IR1_OFF (5u)

/** \brief Length for Ifx_SCU_WDTCPU_CON1_Bits.UR */
#define IFX_SCU_WDTCPU_CON1_UR_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON1_Bits.UR */
#define IFX_SCU_WDTCPU_CON1_UR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_CON1_Bits.UR */
#define IFX_SCU_WDTCPU_CON1_UR_OFF (6u)

/** \brief Length for Ifx_SCU_WDTCPU_CON1_Bits.PAR */
#define IFX_SCU_WDTCPU_CON1_PAR_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON1_Bits.PAR */
#define IFX_SCU_WDTCPU_CON1_PAR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_CON1_Bits.PAR */
#define IFX_SCU_WDTCPU_CON1_PAR_OFF (7u)

/** \brief Length for Ifx_SCU_WDTCPU_CON1_Bits.TCR */
#define IFX_SCU_WDTCPU_CON1_TCR_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON1_Bits.TCR */
#define IFX_SCU_WDTCPU_CON1_TCR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_CON1_Bits.TCR */
#define IFX_SCU_WDTCPU_CON1_TCR_OFF (8u)

/** \brief Length for Ifx_SCU_WDTCPU_CON1_Bits.TCTR */
#define IFX_SCU_WDTCPU_CON1_TCTR_LEN (7u)

/** \brief Mask for Ifx_SCU_WDTCPU_CON1_Bits.TCTR */
#define IFX_SCU_WDTCPU_CON1_TCTR_MSK (0x7fu)

/** \brief Offset for Ifx_SCU_WDTCPU_CON1_Bits.TCTR */
#define IFX_SCU_WDTCPU_CON1_TCTR_OFF (9u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.AE */
#define IFX_SCU_WDTCPU_SR_AE_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.AE */
#define IFX_SCU_WDTCPU_SR_AE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.AE */
#define IFX_SCU_WDTCPU_SR_AE_OFF (0u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.OE */
#define IFX_SCU_WDTCPU_SR_OE_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.OE */
#define IFX_SCU_WDTCPU_SR_OE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.OE */
#define IFX_SCU_WDTCPU_SR_OE_OFF (1u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.IS0 */
#define IFX_SCU_WDTCPU_SR_IS0_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.IS0 */
#define IFX_SCU_WDTCPU_SR_IS0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.IS0 */
#define IFX_SCU_WDTCPU_SR_IS0_OFF (2u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.DS */
#define IFX_SCU_WDTCPU_SR_DS_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.DS */
#define IFX_SCU_WDTCPU_SR_DS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.DS */
#define IFX_SCU_WDTCPU_SR_DS_OFF (3u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.TO */
#define IFX_SCU_WDTCPU_SR_TO_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.TO */
#define IFX_SCU_WDTCPU_SR_TO_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.TO */
#define IFX_SCU_WDTCPU_SR_TO_OFF (4u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.IS1 */
#define IFX_SCU_WDTCPU_SR_IS1_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.IS1 */
#define IFX_SCU_WDTCPU_SR_IS1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.IS1 */
#define IFX_SCU_WDTCPU_SR_IS1_OFF (5u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.US */
#define IFX_SCU_WDTCPU_SR_US_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.US */
#define IFX_SCU_WDTCPU_SR_US_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.US */
#define IFX_SCU_WDTCPU_SR_US_OFF (6u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.PAS */
#define IFX_SCU_WDTCPU_SR_PAS_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.PAS */
#define IFX_SCU_WDTCPU_SR_PAS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.PAS */
#define IFX_SCU_WDTCPU_SR_PAS_OFF (7u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.TCS */
#define IFX_SCU_WDTCPU_SR_TCS_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.TCS */
#define IFX_SCU_WDTCPU_SR_TCS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.TCS */
#define IFX_SCU_WDTCPU_SR_TCS_OFF (8u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.TCT */
#define IFX_SCU_WDTCPU_SR_TCT_LEN (7u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.TCT */
#define IFX_SCU_WDTCPU_SR_TCT_MSK (0x7fu)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.TCT */
#define IFX_SCU_WDTCPU_SR_TCT_OFF (9u)

/** \brief Length for Ifx_SCU_WDTCPU_SR_Bits.TIM */
#define IFX_SCU_WDTCPU_SR_TIM_LEN (16u)

/** \brief Mask for Ifx_SCU_WDTCPU_SR_Bits.TIM */
#define IFX_SCU_WDTCPU_SR_TIM_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_WDTCPU_SR_Bits.TIM */
#define IFX_SCU_WDTCPU_SR_TIM_OFF (16u)

/** \brief Length for Ifx_SCU_EICON0_Bits.ENDINIT */
#define IFX_SCU_EICON0_ENDINIT_LEN (1u)

/** \brief Mask for Ifx_SCU_EICON0_Bits.ENDINIT */
#define IFX_SCU_EICON0_ENDINIT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICON0_Bits.ENDINIT */
#define IFX_SCU_EICON0_ENDINIT_OFF (1u)

/** \brief Length for Ifx_SCU_EICON0_Bits.EPW */
#define IFX_SCU_EICON0_EPW_LEN (14u)

/** \brief Mask for Ifx_SCU_EICON0_Bits.EPW */
#define IFX_SCU_EICON0_EPW_MSK (0x3fffu)

/** \brief Offset for Ifx_SCU_EICON0_Bits.EPW */
#define IFX_SCU_EICON0_EPW_OFF (2u)

/** \brief Length for Ifx_SCU_EICON0_Bits.REL */
#define IFX_SCU_EICON0_REL_LEN (16u)

/** \brief Mask for Ifx_SCU_EICON0_Bits.REL */
#define IFX_SCU_EICON0_REL_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_EICON0_Bits.REL */
#define IFX_SCU_EICON0_REL_OFF (16u)

/** \brief Length for Ifx_SCU_EICON1_Bits.IR0 */
#define IFX_SCU_EICON1_IR0_LEN (1u)

/** \brief Mask for Ifx_SCU_EICON1_Bits.IR0 */
#define IFX_SCU_EICON1_IR0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICON1_Bits.IR0 */
#define IFX_SCU_EICON1_IR0_OFF (2u)

/** \brief Length for Ifx_SCU_EICON1_Bits.DR */
#define IFX_SCU_EICON1_DR_LEN (1u)

/** \brief Mask for Ifx_SCU_EICON1_Bits.DR */
#define IFX_SCU_EICON1_DR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICON1_Bits.DR */
#define IFX_SCU_EICON1_DR_OFF (3u)

/** \brief Length for Ifx_SCU_EICON1_Bits.IR1 */
#define IFX_SCU_EICON1_IR1_LEN (1u)

/** \brief Mask for Ifx_SCU_EICON1_Bits.IR1 */
#define IFX_SCU_EICON1_IR1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EICON1_Bits.IR1 */
#define IFX_SCU_EICON1_IR1_OFF (5u)

/** \brief Length for Ifx_SCU_EISR_Bits.AE */
#define IFX_SCU_EISR_AE_LEN (1u)

/** \brief Mask for Ifx_SCU_EISR_Bits.AE */
#define IFX_SCU_EISR_AE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EISR_Bits.AE */
#define IFX_SCU_EISR_AE_OFF (0u)

/** \brief Length for Ifx_SCU_EISR_Bits.OE */
#define IFX_SCU_EISR_OE_LEN (1u)

/** \brief Mask for Ifx_SCU_EISR_Bits.OE */
#define IFX_SCU_EISR_OE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EISR_Bits.OE */
#define IFX_SCU_EISR_OE_OFF (1u)

/** \brief Length for Ifx_SCU_EISR_Bits.IS0 */
#define IFX_SCU_EISR_IS0_LEN (1u)

/** \brief Mask for Ifx_SCU_EISR_Bits.IS0 */
#define IFX_SCU_EISR_IS0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EISR_Bits.IS0 */
#define IFX_SCU_EISR_IS0_OFF (2u)

/** \brief Length for Ifx_SCU_EISR_Bits.DS */
#define IFX_SCU_EISR_DS_LEN (1u)

/** \brief Mask for Ifx_SCU_EISR_Bits.DS */
#define IFX_SCU_EISR_DS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EISR_Bits.DS */
#define IFX_SCU_EISR_DS_OFF (3u)

/** \brief Length for Ifx_SCU_EISR_Bits.TO */
#define IFX_SCU_EISR_TO_LEN (1u)

/** \brief Mask for Ifx_SCU_EISR_Bits.TO */
#define IFX_SCU_EISR_TO_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EISR_Bits.TO */
#define IFX_SCU_EISR_TO_OFF (4u)

/** \brief Length for Ifx_SCU_EISR_Bits.IS1 */
#define IFX_SCU_EISR_IS1_LEN (1u)

/** \brief Mask for Ifx_SCU_EISR_Bits.IS1 */
#define IFX_SCU_EISR_IS1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_EISR_Bits.IS1 */
#define IFX_SCU_EISR_IS1_OFF (5u)

/** \brief Length for Ifx_SCU_EISR_Bits.TIM */
#define IFX_SCU_EISR_TIM_LEN (16u)

/** \brief Mask for Ifx_SCU_EISR_Bits.TIM */
#define IFX_SCU_EISR_TIM_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_EISR_Bits.TIM */
#define IFX_SCU_EISR_TIM_OFF (16u)

/** \brief Length for Ifx_SCU_WDTS_CON0_Bits.ENDINIT */
#define IFX_SCU_WDTS_CON0_ENDINIT_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON0_Bits.ENDINIT */
#define IFX_SCU_WDTS_CON0_ENDINIT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON0_Bits.ENDINIT */
#define IFX_SCU_WDTS_CON0_ENDINIT_OFF (0u)

/** \brief Length for Ifx_SCU_WDTS_CON0_Bits.LCK */
#define IFX_SCU_WDTS_CON0_LCK_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON0_Bits.LCK */
#define IFX_SCU_WDTS_CON0_LCK_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON0_Bits.LCK */
#define IFX_SCU_WDTS_CON0_LCK_OFF (1u)

/** \brief Length for Ifx_SCU_WDTS_CON0_Bits.PW */
#define IFX_SCU_WDTS_CON0_PW_LEN (14u)

/** \brief Mask for Ifx_SCU_WDTS_CON0_Bits.PW */
#define IFX_SCU_WDTS_CON0_PW_MSK (0x3fffu)

/** \brief Offset for Ifx_SCU_WDTS_CON0_Bits.PW */
#define IFX_SCU_WDTS_CON0_PW_OFF (2u)

/** \brief Length for Ifx_SCU_WDTS_CON0_Bits.REL */
#define IFX_SCU_WDTS_CON0_REL_LEN (16u)

/** \brief Mask for Ifx_SCU_WDTS_CON0_Bits.REL */
#define IFX_SCU_WDTS_CON0_REL_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_WDTS_CON0_Bits.REL */
#define IFX_SCU_WDTS_CON0_REL_OFF (16u)

/** \brief Length for Ifx_SCU_WDTS_CON1_Bits.CLRIRF */
#define IFX_SCU_WDTS_CON1_CLRIRF_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON1_Bits.CLRIRF */
#define IFX_SCU_WDTS_CON1_CLRIRF_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON1_Bits.CLRIRF */
#define IFX_SCU_WDTS_CON1_CLRIRF_OFF (0u)

/** \brief Length for Ifx_SCU_WDTS_CON1_Bits.IR0 */
#define IFX_SCU_WDTS_CON1_IR0_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON1_Bits.IR0 */
#define IFX_SCU_WDTS_CON1_IR0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON1_Bits.IR0 */
#define IFX_SCU_WDTS_CON1_IR0_OFF (2u)

/** \brief Length for Ifx_SCU_WDTS_CON1_Bits.DR */
#define IFX_SCU_WDTS_CON1_DR_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON1_Bits.DR */
#define IFX_SCU_WDTS_CON1_DR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON1_Bits.DR */
#define IFX_SCU_WDTS_CON1_DR_OFF (3u)

/** \brief Length for Ifx_SCU_WDTS_CON1_Bits.IR1 */
#define IFX_SCU_WDTS_CON1_IR1_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON1_Bits.IR1 */
#define IFX_SCU_WDTS_CON1_IR1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON1_Bits.IR1 */
#define IFX_SCU_WDTS_CON1_IR1_OFF (5u)

/** \brief Length for Ifx_SCU_WDTS_CON1_Bits.UR */
#define IFX_SCU_WDTS_CON1_UR_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON1_Bits.UR */
#define IFX_SCU_WDTS_CON1_UR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON1_Bits.UR */
#define IFX_SCU_WDTS_CON1_UR_OFF (6u)

/** \brief Length for Ifx_SCU_WDTS_CON1_Bits.PAR */
#define IFX_SCU_WDTS_CON1_PAR_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON1_Bits.PAR */
#define IFX_SCU_WDTS_CON1_PAR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON1_Bits.PAR */
#define IFX_SCU_WDTS_CON1_PAR_OFF (7u)

/** \brief Length for Ifx_SCU_WDTS_CON1_Bits.TCR */
#define IFX_SCU_WDTS_CON1_TCR_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_CON1_Bits.TCR */
#define IFX_SCU_WDTS_CON1_TCR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_CON1_Bits.TCR */
#define IFX_SCU_WDTS_CON1_TCR_OFF (8u)

/** \brief Length for Ifx_SCU_WDTS_CON1_Bits.TCTR */
#define IFX_SCU_WDTS_CON1_TCTR_LEN (7u)

/** \brief Mask for Ifx_SCU_WDTS_CON1_Bits.TCTR */
#define IFX_SCU_WDTS_CON1_TCTR_MSK (0x7fu)

/** \brief Offset for Ifx_SCU_WDTS_CON1_Bits.TCTR */
#define IFX_SCU_WDTS_CON1_TCTR_OFF (9u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.AE */
#define IFX_SCU_WDTS_SR_AE_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.AE */
#define IFX_SCU_WDTS_SR_AE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.AE */
#define IFX_SCU_WDTS_SR_AE_OFF (0u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.OE */
#define IFX_SCU_WDTS_SR_OE_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.OE */
#define IFX_SCU_WDTS_SR_OE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.OE */
#define IFX_SCU_WDTS_SR_OE_OFF (1u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.IS0 */
#define IFX_SCU_WDTS_SR_IS0_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.IS0 */
#define IFX_SCU_WDTS_SR_IS0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.IS0 */
#define IFX_SCU_WDTS_SR_IS0_OFF (2u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.DS */
#define IFX_SCU_WDTS_SR_DS_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.DS */
#define IFX_SCU_WDTS_SR_DS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.DS */
#define IFX_SCU_WDTS_SR_DS_OFF (3u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.TO */
#define IFX_SCU_WDTS_SR_TO_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.TO */
#define IFX_SCU_WDTS_SR_TO_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.TO */
#define IFX_SCU_WDTS_SR_TO_OFF (4u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.IS1 */
#define IFX_SCU_WDTS_SR_IS1_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.IS1 */
#define IFX_SCU_WDTS_SR_IS1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.IS1 */
#define IFX_SCU_WDTS_SR_IS1_OFF (5u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.US */
#define IFX_SCU_WDTS_SR_US_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.US */
#define IFX_SCU_WDTS_SR_US_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.US */
#define IFX_SCU_WDTS_SR_US_OFF (6u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.PAS */
#define IFX_SCU_WDTS_SR_PAS_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.PAS */
#define IFX_SCU_WDTS_SR_PAS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.PAS */
#define IFX_SCU_WDTS_SR_PAS_OFF (7u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.TCS */
#define IFX_SCU_WDTS_SR_TCS_LEN (1u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.TCS */
#define IFX_SCU_WDTS_SR_TCS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.TCS */
#define IFX_SCU_WDTS_SR_TCS_OFF (8u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.TCT */
#define IFX_SCU_WDTS_SR_TCT_LEN (7u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.TCT */
#define IFX_SCU_WDTS_SR_TCT_MSK (0x7fu)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.TCT */
#define IFX_SCU_WDTS_SR_TCT_OFF (9u)

/** \brief Length for Ifx_SCU_WDTS_SR_Bits.TIM */
#define IFX_SCU_WDTS_SR_TIM_LEN (16u)

/** \brief Mask for Ifx_SCU_WDTS_SR_Bits.TIM */
#define IFX_SCU_WDTS_SR_TIM_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_WDTS_SR_Bits.TIM */
#define IFX_SCU_WDTS_SR_TIM_OFF (16u)

/** \brief Length for Ifx_SCU_SEICON0_Bits.ENDINIT */
#define IFX_SCU_SEICON0_ENDINIT_LEN (1u)

/** \brief Mask for Ifx_SCU_SEICON0_Bits.ENDINIT */
#define IFX_SCU_SEICON0_ENDINIT_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEICON0_Bits.ENDINIT */
#define IFX_SCU_SEICON0_ENDINIT_OFF (1u)

/** \brief Length for Ifx_SCU_SEICON0_Bits.EPW */
#define IFX_SCU_SEICON0_EPW_LEN (14u)

/** \brief Mask for Ifx_SCU_SEICON0_Bits.EPW */
#define IFX_SCU_SEICON0_EPW_MSK (0x3fffu)

/** \brief Offset for Ifx_SCU_SEICON0_Bits.EPW */
#define IFX_SCU_SEICON0_EPW_OFF (2u)

/** \brief Length for Ifx_SCU_SEICON0_Bits.REL */
#define IFX_SCU_SEICON0_REL_LEN (16u)

/** \brief Mask for Ifx_SCU_SEICON0_Bits.REL */
#define IFX_SCU_SEICON0_REL_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_SEICON0_Bits.REL */
#define IFX_SCU_SEICON0_REL_OFF (16u)

/** \brief Length for Ifx_SCU_SEICON1_Bits.IR0 */
#define IFX_SCU_SEICON1_IR0_LEN (1u)

/** \brief Mask for Ifx_SCU_SEICON1_Bits.IR0 */
#define IFX_SCU_SEICON1_IR0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEICON1_Bits.IR0 */
#define IFX_SCU_SEICON1_IR0_OFF (2u)

/** \brief Length for Ifx_SCU_SEICON1_Bits.DR */
#define IFX_SCU_SEICON1_DR_LEN (1u)

/** \brief Mask for Ifx_SCU_SEICON1_Bits.DR */
#define IFX_SCU_SEICON1_DR_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEICON1_Bits.DR */
#define IFX_SCU_SEICON1_DR_OFF (3u)

/** \brief Length for Ifx_SCU_SEICON1_Bits.IR1 */
#define IFX_SCU_SEICON1_IR1_LEN (1u)

/** \brief Mask for Ifx_SCU_SEICON1_Bits.IR1 */
#define IFX_SCU_SEICON1_IR1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEICON1_Bits.IR1 */
#define IFX_SCU_SEICON1_IR1_OFF (5u)

/** \brief Length for Ifx_SCU_SEISR_Bits.AE */
#define IFX_SCU_SEISR_AE_LEN (1u)

/** \brief Mask for Ifx_SCU_SEISR_Bits.AE */
#define IFX_SCU_SEISR_AE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEISR_Bits.AE */
#define IFX_SCU_SEISR_AE_OFF (0u)

/** \brief Length for Ifx_SCU_SEISR_Bits.OE */
#define IFX_SCU_SEISR_OE_LEN (1u)

/** \brief Mask for Ifx_SCU_SEISR_Bits.OE */
#define IFX_SCU_SEISR_OE_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEISR_Bits.OE */
#define IFX_SCU_SEISR_OE_OFF (1u)

/** \brief Length for Ifx_SCU_SEISR_Bits.IS0 */
#define IFX_SCU_SEISR_IS0_LEN (1u)

/** \brief Mask for Ifx_SCU_SEISR_Bits.IS0 */
#define IFX_SCU_SEISR_IS0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEISR_Bits.IS0 */
#define IFX_SCU_SEISR_IS0_OFF (2u)

/** \brief Length for Ifx_SCU_SEISR_Bits.DS */
#define IFX_SCU_SEISR_DS_LEN (1u)

/** \brief Mask for Ifx_SCU_SEISR_Bits.DS */
#define IFX_SCU_SEISR_DS_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEISR_Bits.DS */
#define IFX_SCU_SEISR_DS_OFF (3u)

/** \brief Length for Ifx_SCU_SEISR_Bits.TO */
#define IFX_SCU_SEISR_TO_LEN (1u)

/** \brief Mask for Ifx_SCU_SEISR_Bits.TO */
#define IFX_SCU_SEISR_TO_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEISR_Bits.TO */
#define IFX_SCU_SEISR_TO_OFF (4u)

/** \brief Length for Ifx_SCU_SEISR_Bits.IS1 */
#define IFX_SCU_SEISR_IS1_LEN (1u)

/** \brief Mask for Ifx_SCU_SEISR_Bits.IS1 */
#define IFX_SCU_SEISR_IS1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_SEISR_Bits.IS1 */
#define IFX_SCU_SEISR_IS1_OFF (5u)

/** \brief Length for Ifx_SCU_SEISR_Bits.TIM */
#define IFX_SCU_SEISR_TIM_LEN (16u)

/** \brief Mask for Ifx_SCU_SEISR_Bits.TIM */
#define IFX_SCU_SEISR_TIM_MSK (0xffffu)

/** \brief Offset for Ifx_SCU_SEISR_Bits.TIM */
#define IFX_SCU_SEISR_TIM_OFF (16u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN0 */
#define IFX_SCU_ACCEN10_EN0_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN0 */
#define IFX_SCU_ACCEN10_EN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN0 */
#define IFX_SCU_ACCEN10_EN0_OFF (0u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN1 */
#define IFX_SCU_ACCEN10_EN1_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN1 */
#define IFX_SCU_ACCEN10_EN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN1 */
#define IFX_SCU_ACCEN10_EN1_OFF (1u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN2 */
#define IFX_SCU_ACCEN10_EN2_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN2 */
#define IFX_SCU_ACCEN10_EN2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN2 */
#define IFX_SCU_ACCEN10_EN2_OFF (2u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN3 */
#define IFX_SCU_ACCEN10_EN3_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN3 */
#define IFX_SCU_ACCEN10_EN3_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN3 */
#define IFX_SCU_ACCEN10_EN3_OFF (3u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN4 */
#define IFX_SCU_ACCEN10_EN4_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN4 */
#define IFX_SCU_ACCEN10_EN4_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN4 */
#define IFX_SCU_ACCEN10_EN4_OFF (4u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN5 */
#define IFX_SCU_ACCEN10_EN5_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN5 */
#define IFX_SCU_ACCEN10_EN5_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN5 */
#define IFX_SCU_ACCEN10_EN5_OFF (5u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN6 */
#define IFX_SCU_ACCEN10_EN6_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN6 */
#define IFX_SCU_ACCEN10_EN6_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN6 */
#define IFX_SCU_ACCEN10_EN6_OFF (6u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN7 */
#define IFX_SCU_ACCEN10_EN7_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN7 */
#define IFX_SCU_ACCEN10_EN7_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN7 */
#define IFX_SCU_ACCEN10_EN7_OFF (7u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN8 */
#define IFX_SCU_ACCEN10_EN8_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN8 */
#define IFX_SCU_ACCEN10_EN8_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN8 */
#define IFX_SCU_ACCEN10_EN8_OFF (8u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN9 */
#define IFX_SCU_ACCEN10_EN9_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN9 */
#define IFX_SCU_ACCEN10_EN9_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN9 */
#define IFX_SCU_ACCEN10_EN9_OFF (9u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN10 */
#define IFX_SCU_ACCEN10_EN10_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN10 */
#define IFX_SCU_ACCEN10_EN10_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN10 */
#define IFX_SCU_ACCEN10_EN10_OFF (10u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN11 */
#define IFX_SCU_ACCEN10_EN11_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN11 */
#define IFX_SCU_ACCEN10_EN11_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN11 */
#define IFX_SCU_ACCEN10_EN11_OFF (11u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN12 */
#define IFX_SCU_ACCEN10_EN12_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN12 */
#define IFX_SCU_ACCEN10_EN12_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN12 */
#define IFX_SCU_ACCEN10_EN12_OFF (12u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN13 */
#define IFX_SCU_ACCEN10_EN13_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN13 */
#define IFX_SCU_ACCEN10_EN13_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN13 */
#define IFX_SCU_ACCEN10_EN13_OFF (13u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN14 */
#define IFX_SCU_ACCEN10_EN14_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN14 */
#define IFX_SCU_ACCEN10_EN14_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN14 */
#define IFX_SCU_ACCEN10_EN14_OFF (14u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN15 */
#define IFX_SCU_ACCEN10_EN15_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN15 */
#define IFX_SCU_ACCEN10_EN15_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN15 */
#define IFX_SCU_ACCEN10_EN15_OFF (15u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN16 */
#define IFX_SCU_ACCEN10_EN16_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN16 */
#define IFX_SCU_ACCEN10_EN16_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN16 */
#define IFX_SCU_ACCEN10_EN16_OFF (16u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN17 */
#define IFX_SCU_ACCEN10_EN17_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN17 */
#define IFX_SCU_ACCEN10_EN17_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN17 */
#define IFX_SCU_ACCEN10_EN17_OFF (17u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN18 */
#define IFX_SCU_ACCEN10_EN18_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN18 */
#define IFX_SCU_ACCEN10_EN18_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN18 */
#define IFX_SCU_ACCEN10_EN18_OFF (18u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN19 */
#define IFX_SCU_ACCEN10_EN19_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN19 */
#define IFX_SCU_ACCEN10_EN19_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN19 */
#define IFX_SCU_ACCEN10_EN19_OFF (19u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN20 */
#define IFX_SCU_ACCEN10_EN20_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN20 */
#define IFX_SCU_ACCEN10_EN20_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN20 */
#define IFX_SCU_ACCEN10_EN20_OFF (20u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN21 */
#define IFX_SCU_ACCEN10_EN21_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN21 */
#define IFX_SCU_ACCEN10_EN21_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN21 */
#define IFX_SCU_ACCEN10_EN21_OFF (21u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN22 */
#define IFX_SCU_ACCEN10_EN22_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN22 */
#define IFX_SCU_ACCEN10_EN22_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN22 */
#define IFX_SCU_ACCEN10_EN22_OFF (22u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN23 */
#define IFX_SCU_ACCEN10_EN23_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN23 */
#define IFX_SCU_ACCEN10_EN23_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN23 */
#define IFX_SCU_ACCEN10_EN23_OFF (23u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN24 */
#define IFX_SCU_ACCEN10_EN24_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN24 */
#define IFX_SCU_ACCEN10_EN24_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN24 */
#define IFX_SCU_ACCEN10_EN24_OFF (24u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN25 */
#define IFX_SCU_ACCEN10_EN25_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN25 */
#define IFX_SCU_ACCEN10_EN25_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN25 */
#define IFX_SCU_ACCEN10_EN25_OFF (25u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN26 */
#define IFX_SCU_ACCEN10_EN26_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN26 */
#define IFX_SCU_ACCEN10_EN26_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN26 */
#define IFX_SCU_ACCEN10_EN26_OFF (26u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN27 */
#define IFX_SCU_ACCEN10_EN27_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN27 */
#define IFX_SCU_ACCEN10_EN27_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN27 */
#define IFX_SCU_ACCEN10_EN27_OFF (27u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN28 */
#define IFX_SCU_ACCEN10_EN28_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN28 */
#define IFX_SCU_ACCEN10_EN28_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN28 */
#define IFX_SCU_ACCEN10_EN28_OFF (28u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN29 */
#define IFX_SCU_ACCEN10_EN29_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN29 */
#define IFX_SCU_ACCEN10_EN29_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN29 */
#define IFX_SCU_ACCEN10_EN29_OFF (29u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN30 */
#define IFX_SCU_ACCEN10_EN30_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN30 */
#define IFX_SCU_ACCEN10_EN30_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN30 */
#define IFX_SCU_ACCEN10_EN30_OFF (30u)

/** \brief Length for Ifx_SCU_ACCEN10_Bits.EN31 */
#define IFX_SCU_ACCEN10_EN31_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN10_Bits.EN31 */
#define IFX_SCU_ACCEN10_EN31_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN10_Bits.EN31 */
#define IFX_SCU_ACCEN10_EN31_OFF (31u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN0 */
#define IFX_SCU_ACCEN00_EN0_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN0 */
#define IFX_SCU_ACCEN00_EN0_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN0 */
#define IFX_SCU_ACCEN00_EN0_OFF (0u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN1 */
#define IFX_SCU_ACCEN00_EN1_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN1 */
#define IFX_SCU_ACCEN00_EN1_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN1 */
#define IFX_SCU_ACCEN00_EN1_OFF (1u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN2 */
#define IFX_SCU_ACCEN00_EN2_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN2 */
#define IFX_SCU_ACCEN00_EN2_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN2 */
#define IFX_SCU_ACCEN00_EN2_OFF (2u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN3 */
#define IFX_SCU_ACCEN00_EN3_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN3 */
#define IFX_SCU_ACCEN00_EN3_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN3 */
#define IFX_SCU_ACCEN00_EN3_OFF (3u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN4 */
#define IFX_SCU_ACCEN00_EN4_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN4 */
#define IFX_SCU_ACCEN00_EN4_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN4 */
#define IFX_SCU_ACCEN00_EN4_OFF (4u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN5 */
#define IFX_SCU_ACCEN00_EN5_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN5 */
#define IFX_SCU_ACCEN00_EN5_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN5 */
#define IFX_SCU_ACCEN00_EN5_OFF (5u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN6 */
#define IFX_SCU_ACCEN00_EN6_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN6 */
#define IFX_SCU_ACCEN00_EN6_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN6 */
#define IFX_SCU_ACCEN00_EN6_OFF (6u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN7 */
#define IFX_SCU_ACCEN00_EN7_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN7 */
#define IFX_SCU_ACCEN00_EN7_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN7 */
#define IFX_SCU_ACCEN00_EN7_OFF (7u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN8 */
#define IFX_SCU_ACCEN00_EN8_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN8 */
#define IFX_SCU_ACCEN00_EN8_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN8 */
#define IFX_SCU_ACCEN00_EN8_OFF (8u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN9 */
#define IFX_SCU_ACCEN00_EN9_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN9 */
#define IFX_SCU_ACCEN00_EN9_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN9 */
#define IFX_SCU_ACCEN00_EN9_OFF (9u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN10 */
#define IFX_SCU_ACCEN00_EN10_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN10 */
#define IFX_SCU_ACCEN00_EN10_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN10 */
#define IFX_SCU_ACCEN00_EN10_OFF (10u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN11 */
#define IFX_SCU_ACCEN00_EN11_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN11 */
#define IFX_SCU_ACCEN00_EN11_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN11 */
#define IFX_SCU_ACCEN00_EN11_OFF (11u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN12 */
#define IFX_SCU_ACCEN00_EN12_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN12 */
#define IFX_SCU_ACCEN00_EN12_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN12 */
#define IFX_SCU_ACCEN00_EN12_OFF (12u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN13 */
#define IFX_SCU_ACCEN00_EN13_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN13 */
#define IFX_SCU_ACCEN00_EN13_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN13 */
#define IFX_SCU_ACCEN00_EN13_OFF (13u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN14 */
#define IFX_SCU_ACCEN00_EN14_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN14 */
#define IFX_SCU_ACCEN00_EN14_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN14 */
#define IFX_SCU_ACCEN00_EN14_OFF (14u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN15 */
#define IFX_SCU_ACCEN00_EN15_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN15 */
#define IFX_SCU_ACCEN00_EN15_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN15 */
#define IFX_SCU_ACCEN00_EN15_OFF (15u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN16 */
#define IFX_SCU_ACCEN00_EN16_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN16 */
#define IFX_SCU_ACCEN00_EN16_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN16 */
#define IFX_SCU_ACCEN00_EN16_OFF (16u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN17 */
#define IFX_SCU_ACCEN00_EN17_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN17 */
#define IFX_SCU_ACCEN00_EN17_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN17 */
#define IFX_SCU_ACCEN00_EN17_OFF (17u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN18 */
#define IFX_SCU_ACCEN00_EN18_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN18 */
#define IFX_SCU_ACCEN00_EN18_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN18 */
#define IFX_SCU_ACCEN00_EN18_OFF (18u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN19 */
#define IFX_SCU_ACCEN00_EN19_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN19 */
#define IFX_SCU_ACCEN00_EN19_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN19 */
#define IFX_SCU_ACCEN00_EN19_OFF (19u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN20 */
#define IFX_SCU_ACCEN00_EN20_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN20 */
#define IFX_SCU_ACCEN00_EN20_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN20 */
#define IFX_SCU_ACCEN00_EN20_OFF (20u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN21 */
#define IFX_SCU_ACCEN00_EN21_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN21 */
#define IFX_SCU_ACCEN00_EN21_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN21 */
#define IFX_SCU_ACCEN00_EN21_OFF (21u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN22 */
#define IFX_SCU_ACCEN00_EN22_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN22 */
#define IFX_SCU_ACCEN00_EN22_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN22 */
#define IFX_SCU_ACCEN00_EN22_OFF (22u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN23 */
#define IFX_SCU_ACCEN00_EN23_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN23 */
#define IFX_SCU_ACCEN00_EN23_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN23 */
#define IFX_SCU_ACCEN00_EN23_OFF (23u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN24 */
#define IFX_SCU_ACCEN00_EN24_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN24 */
#define IFX_SCU_ACCEN00_EN24_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN24 */
#define IFX_SCU_ACCEN00_EN24_OFF (24u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN25 */
#define IFX_SCU_ACCEN00_EN25_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN25 */
#define IFX_SCU_ACCEN00_EN25_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN25 */
#define IFX_SCU_ACCEN00_EN25_OFF (25u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN26 */
#define IFX_SCU_ACCEN00_EN26_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN26 */
#define IFX_SCU_ACCEN00_EN26_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN26 */
#define IFX_SCU_ACCEN00_EN26_OFF (26u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN27 */
#define IFX_SCU_ACCEN00_EN27_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN27 */
#define IFX_SCU_ACCEN00_EN27_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN27 */
#define IFX_SCU_ACCEN00_EN27_OFF (27u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN28 */
#define IFX_SCU_ACCEN00_EN28_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN28 */
#define IFX_SCU_ACCEN00_EN28_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN28 */
#define IFX_SCU_ACCEN00_EN28_OFF (28u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN29 */
#define IFX_SCU_ACCEN00_EN29_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN29 */
#define IFX_SCU_ACCEN00_EN29_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN29 */
#define IFX_SCU_ACCEN00_EN29_OFF (29u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN30 */
#define IFX_SCU_ACCEN00_EN30_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN30 */
#define IFX_SCU_ACCEN00_EN30_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN30 */
#define IFX_SCU_ACCEN00_EN30_OFF (30u)

/** \brief Length for Ifx_SCU_ACCEN00_Bits.EN31 */
#define IFX_SCU_ACCEN00_EN31_LEN (1u)

/** \brief Mask for Ifx_SCU_ACCEN00_Bits.EN31 */
#define IFX_SCU_ACCEN00_EN31_MSK (0x1u)

/** \brief Offset for Ifx_SCU_ACCEN00_Bits.EN31 */
#define IFX_SCU_ACCEN00_EN31_OFF (31u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXSCU_BF_H */
