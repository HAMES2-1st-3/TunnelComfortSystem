/**
 * \file IfxPfi_reg.h
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
 * \defgroup IfxSfr_Pfi_Registers_Cfg Pfi address
 * \ingroup IfxSfr_Pfi_Registers
 * 
 * \defgroup IfxSfr_Pfi_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Pfi_Registers_Cfg
 *
 * \defgroup IfxSfr_Pfi_Registers_Cfg_Pfi0 2-PFI0
 * \ingroup IfxSfr_Pfi_Registers_Cfg
 *
 * \defgroup IfxSfr_Pfi_Registers_Cfg_Pfi1 2-PFI1
 * \ingroup IfxSfr_Pfi_Registers_Cfg
 *
 * \defgroup IfxSfr_Pfi_Registers_Cfg_Pfi2 2-PFI2
 * \ingroup IfxSfr_Pfi_Registers_Cfg
 *
 * \defgroup IfxSfr_Pfi_Registers_Cfg_Pfi3 2-PFI3
 * \ingroup IfxSfr_Pfi_Registers_Cfg
 *
 * \defgroup IfxSfr_Pfi_Registers_Cfg_Pfi4 2-PFI4
 * \ingroup IfxSfr_Pfi_Registers_Cfg
 *
 * \defgroup IfxSfr_Pfi_Registers_Cfg_Pfi5 2-PFI5
 * \ingroup IfxSfr_Pfi_Registers_Cfg
 *
 *
 */
#ifndef IFXPFI_REG_H
#define IFXPFI_REG_H 1
/******************************************************************************/
#include "IfxPfi_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Pfi_Registers_Cfg_BaseAddress
 * \{  */

/** \brief PFI object */
#define MODULE_PFI0 /*lint --e(923, 9078)*/ ((*(Ifx_PFI*)0xA8080000u))
#define MODULE_PFI1 /*lint --e(923, 9078)*/ ((*(Ifx_PFI*)0xA8380000u))
#define MODULE_PFI2 /*lint --e(923, 9078)*/ ((*(Ifx_PFI*)0xA8680000u))
#define MODULE_PFI3 /*lint --e(923, 9078)*/ ((*(Ifx_PFI*)0xA8980000u))
#define MODULE_PFI4 /*lint --e(923, 9078)*/ ((*(Ifx_PFI*)0xA8C80000u))
#define MODULE_PFI5 /*lint --e(923, 9078)*/ ((*(Ifx_PFI*)0xA8F80000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_Registers_Cfg_Pfi0
 * \{  */
/** \brief 0, ECC Read Register */
#define PFI0_ECCR /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCR*)0xA8080000u)

/** \brief 20, ECC Status Register */
#define PFI0_ECCS /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCS*)0xA8080020u)

/** \brief 2000, SBAB Record 0 */
#define PFI0_SBAB0_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082000u)
/** Alias (User Manual Name) for PFI0_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB0_SBABRECORD.
*/
#define PFI0_SBABRECORD0 (PFI0_SBAB0_SBABRECORD)

/** \brief 2020, SBAB Record 1 */
#define PFI0_SBAB1_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082020u)
/** Alias (User Manual Name) for PFI0_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB1_SBABRECORD.
*/
#define PFI0_SBABRECORD1 (PFI0_SBAB1_SBABRECORD)

/** \brief 2040, SBAB Record 2 */
#define PFI0_SBAB2_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082040u)
/** Alias (User Manual Name) for PFI0_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB2_SBABRECORD.
*/
#define PFI0_SBABRECORD2 (PFI0_SBAB2_SBABRECORD)

/** \brief 2060, SBAB Record 3 */
#define PFI0_SBAB3_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082060u)
/** Alias (User Manual Name) for PFI0_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB3_SBABRECORD.
*/
#define PFI0_SBABRECORD3 (PFI0_SBAB3_SBABRECORD)

/** \brief 2080, SBAB Record 4 */
#define PFI0_SBAB4_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082080u)
/** Alias (User Manual Name) for PFI0_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB4_SBABRECORD.
*/
#define PFI0_SBABRECORD4 (PFI0_SBAB4_SBABRECORD)

/** \brief 20A0, SBAB Record 5 */
#define PFI0_SBAB5_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA80820A0u)
/** Alias (User Manual Name) for PFI0_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB5_SBABRECORD.
*/
#define PFI0_SBABRECORD5 (PFI0_SBAB5_SBABRECORD)

/** \brief 20C0, SBAB Record 6 */
#define PFI0_SBAB6_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA80820C0u)
/** Alias (User Manual Name) for PFI0_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB6_SBABRECORD.
*/
#define PFI0_SBABRECORD6 (PFI0_SBAB6_SBABRECORD)

/** \brief 20E0, SBAB Record 7 */
#define PFI0_SBAB7_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA80820E0u)
/** Alias (User Manual Name) for PFI0_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB7_SBABRECORD.
*/
#define PFI0_SBABRECORD7 (PFI0_SBAB7_SBABRECORD)

/** \brief 2100, SBAB Record 8 */
#define PFI0_SBAB8_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082100u)
/** Alias (User Manual Name) for PFI0_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB8_SBABRECORD.
*/
#define PFI0_SBABRECORD8 (PFI0_SBAB8_SBABRECORD)

/** \brief 2120, SBAB Record 9 */
#define PFI0_SBAB9_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082120u)
/** Alias (User Manual Name) for PFI0_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB9_SBABRECORD.
*/
#define PFI0_SBABRECORD9 (PFI0_SBAB9_SBABRECORD)

/** \brief 2140, SBAB Record 10 */
#define PFI0_SBAB10_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082140u)
/** Alias (User Manual Name) for PFI0_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB10_SBABRECORD.
*/
#define PFI0_SBABRECORD10 (PFI0_SBAB10_SBABRECORD)

/** \brief 2160, SBAB Record 11 */
#define PFI0_SBAB11_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082160u)
/** Alias (User Manual Name) for PFI0_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB11_SBABRECORD.
*/
#define PFI0_SBABRECORD11 (PFI0_SBAB11_SBABRECORD)

/** \brief 2180, SBAB Record 12 */
#define PFI0_SBAB12_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082180u)
/** Alias (User Manual Name) for PFI0_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB12_SBABRECORD.
*/
#define PFI0_SBABRECORD12 (PFI0_SBAB12_SBABRECORD)

/** \brief 21A0, SBAB Record 13 */
#define PFI0_SBAB13_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA80821A0u)
/** Alias (User Manual Name) for PFI0_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB13_SBABRECORD.
*/
#define PFI0_SBABRECORD13 (PFI0_SBAB13_SBABRECORD)

/** \brief 21C0, SBAB Record 14 */
#define PFI0_SBAB14_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA80821C0u)
/** Alias (User Manual Name) for PFI0_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB14_SBABRECORD.
*/
#define PFI0_SBABRECORD14 (PFI0_SBAB14_SBABRECORD)

/** \brief 21E0, SBAB Record 15 */
#define PFI0_SBAB15_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA80821E0u)
/** Alias (User Manual Name) for PFI0_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB15_SBABRECORD.
*/
#define PFI0_SBABRECORD15 (PFI0_SBAB15_SBABRECORD)

/** \brief 2200, SBAB Record 16 */
#define PFI0_SBAB16_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8082200u)
/** Alias (User Manual Name) for PFI0_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI0_SBAB16_SBABRECORD.
*/
#define PFI0_SBABRECORD16 (PFI0_SBAB16_SBABRECORD)

/** \brief 4000, DBAB Record 0 */
#define PFI0_DBAB0_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8084000u)
/** Alias (User Manual Name) for PFI0_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI0_DBAB0_DBABRECORD.
*/
#define PFI0_DBABRECORD0 (PFI0_DBAB0_DBABRECORD)

/** \brief 4020, DBAB Record 1 */
#define PFI0_DBAB1_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8084020u)
/** Alias (User Manual Name) for PFI0_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI0_DBAB1_DBABRECORD.
*/
#define PFI0_DBABRECORD1 (PFI0_DBAB1_DBABRECORD)

/** \brief 8000, MBAB Record 0 */
#define PFI0_MBAB0_MBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_MBAB_MBABRECORD*)0xA8088000u)
/** Alias (User Manual Name) for PFI0_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI0_MBAB0_MBABRECORD.
*/
#define PFI0_MBABRECORD0 (PFI0_MBAB0_MBABRECORD)

/** \brief C000, ZBAB Record 0 */
#define PFI0_ZBAB0_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA808C000u)
/** Alias (User Manual Name) for PFI0_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI0_ZBAB0_ZBABRECORD.
*/
#define PFI0_ZBABRECORD0 (PFI0_ZBAB0_ZBABRECORD)

/** \brief C020, ZBAB Record 1 */
#define PFI0_ZBAB1_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA808C020u)
/** Alias (User Manual Name) for PFI0_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI0_ZBAB1_ZBABRECORD.
*/
#define PFI0_ZBABRECORD1 (PFI0_ZBAB1_ZBABRECORD)

/** \brief C040, ZBAB Record 2 */
#define PFI0_ZBAB2_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA808C040u)
/** Alias (User Manual Name) for PFI0_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI0_ZBAB2_ZBABRECORD.
*/
#define PFI0_ZBABRECORD2 (PFI0_ZBAB2_ZBABRECORD)

/** \brief C060, ZBAB Record 3 */
#define PFI0_ZBAB3_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA808C060u)
/** Alias (User Manual Name) for PFI0_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI0_ZBAB3_ZBABRECORD.
*/
#define PFI0_ZBABRECORD3 (PFI0_ZBAB3_ZBABRECORD)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_Registers_Cfg_Pfi1
 * \{  */
/** \brief 0, ECC Read Register */
#define PFI1_ECCR /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCR*)0xA8380000u)

/** \brief 20, ECC Status Register */
#define PFI1_ECCS /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCS*)0xA8380020u)

/** \brief 2000, SBAB Record 0 */
#define PFI1_SBAB0_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382000u)
/** Alias (User Manual Name) for PFI1_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB0_SBABRECORD.
*/
#define PFI1_SBABRECORD0 (PFI1_SBAB0_SBABRECORD)

/** \brief 2020, SBAB Record 1 */
#define PFI1_SBAB1_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382020u)
/** Alias (User Manual Name) for PFI1_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB1_SBABRECORD.
*/
#define PFI1_SBABRECORD1 (PFI1_SBAB1_SBABRECORD)

/** \brief 2040, SBAB Record 2 */
#define PFI1_SBAB2_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382040u)
/** Alias (User Manual Name) for PFI1_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB2_SBABRECORD.
*/
#define PFI1_SBABRECORD2 (PFI1_SBAB2_SBABRECORD)

/** \brief 2060, SBAB Record 3 */
#define PFI1_SBAB3_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382060u)
/** Alias (User Manual Name) for PFI1_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB3_SBABRECORD.
*/
#define PFI1_SBABRECORD3 (PFI1_SBAB3_SBABRECORD)

/** \brief 2080, SBAB Record 4 */
#define PFI1_SBAB4_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382080u)
/** Alias (User Manual Name) for PFI1_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB4_SBABRECORD.
*/
#define PFI1_SBABRECORD4 (PFI1_SBAB4_SBABRECORD)

/** \brief 20A0, SBAB Record 5 */
#define PFI1_SBAB5_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA83820A0u)
/** Alias (User Manual Name) for PFI1_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB5_SBABRECORD.
*/
#define PFI1_SBABRECORD5 (PFI1_SBAB5_SBABRECORD)

/** \brief 20C0, SBAB Record 6 */
#define PFI1_SBAB6_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA83820C0u)
/** Alias (User Manual Name) for PFI1_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB6_SBABRECORD.
*/
#define PFI1_SBABRECORD6 (PFI1_SBAB6_SBABRECORD)

/** \brief 20E0, SBAB Record 7 */
#define PFI1_SBAB7_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA83820E0u)
/** Alias (User Manual Name) for PFI1_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB7_SBABRECORD.
*/
#define PFI1_SBABRECORD7 (PFI1_SBAB7_SBABRECORD)

/** \brief 2100, SBAB Record 8 */
#define PFI1_SBAB8_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382100u)
/** Alias (User Manual Name) for PFI1_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB8_SBABRECORD.
*/
#define PFI1_SBABRECORD8 (PFI1_SBAB8_SBABRECORD)

/** \brief 2120, SBAB Record 9 */
#define PFI1_SBAB9_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382120u)
/** Alias (User Manual Name) for PFI1_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB9_SBABRECORD.
*/
#define PFI1_SBABRECORD9 (PFI1_SBAB9_SBABRECORD)

/** \brief 2140, SBAB Record 10 */
#define PFI1_SBAB10_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382140u)
/** Alias (User Manual Name) for PFI1_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB10_SBABRECORD.
*/
#define PFI1_SBABRECORD10 (PFI1_SBAB10_SBABRECORD)

/** \brief 2160, SBAB Record 11 */
#define PFI1_SBAB11_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382160u)
/** Alias (User Manual Name) for PFI1_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB11_SBABRECORD.
*/
#define PFI1_SBABRECORD11 (PFI1_SBAB11_SBABRECORD)

/** \brief 2180, SBAB Record 12 */
#define PFI1_SBAB12_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382180u)
/** Alias (User Manual Name) for PFI1_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB12_SBABRECORD.
*/
#define PFI1_SBABRECORD12 (PFI1_SBAB12_SBABRECORD)

/** \brief 21A0, SBAB Record 13 */
#define PFI1_SBAB13_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA83821A0u)
/** Alias (User Manual Name) for PFI1_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB13_SBABRECORD.
*/
#define PFI1_SBABRECORD13 (PFI1_SBAB13_SBABRECORD)

/** \brief 21C0, SBAB Record 14 */
#define PFI1_SBAB14_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA83821C0u)
/** Alias (User Manual Name) for PFI1_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB14_SBABRECORD.
*/
#define PFI1_SBABRECORD14 (PFI1_SBAB14_SBABRECORD)

/** \brief 21E0, SBAB Record 15 */
#define PFI1_SBAB15_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA83821E0u)
/** Alias (User Manual Name) for PFI1_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB15_SBABRECORD.
*/
#define PFI1_SBABRECORD15 (PFI1_SBAB15_SBABRECORD)

/** \brief 2200, SBAB Record 16 */
#define PFI1_SBAB16_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8382200u)
/** Alias (User Manual Name) for PFI1_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI1_SBAB16_SBABRECORD.
*/
#define PFI1_SBABRECORD16 (PFI1_SBAB16_SBABRECORD)

/** \brief 4000, DBAB Record 0 */
#define PFI1_DBAB0_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8384000u)
/** Alias (User Manual Name) for PFI1_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI1_DBAB0_DBABRECORD.
*/
#define PFI1_DBABRECORD0 (PFI1_DBAB0_DBABRECORD)

/** \brief 4020, DBAB Record 1 */
#define PFI1_DBAB1_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8384020u)
/** Alias (User Manual Name) for PFI1_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI1_DBAB1_DBABRECORD.
*/
#define PFI1_DBABRECORD1 (PFI1_DBAB1_DBABRECORD)

/** \brief 8000, MBAB Record 0 */
#define PFI1_MBAB0_MBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_MBAB_MBABRECORD*)0xA8388000u)
/** Alias (User Manual Name) for PFI1_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI1_MBAB0_MBABRECORD.
*/
#define PFI1_MBABRECORD0 (PFI1_MBAB0_MBABRECORD)

/** \brief C000, ZBAB Record 0 */
#define PFI1_ZBAB0_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA838C000u)
/** Alias (User Manual Name) for PFI1_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI1_ZBAB0_ZBABRECORD.
*/
#define PFI1_ZBABRECORD0 (PFI1_ZBAB0_ZBABRECORD)

/** \brief C020, ZBAB Record 1 */
#define PFI1_ZBAB1_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA838C020u)
/** Alias (User Manual Name) for PFI1_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI1_ZBAB1_ZBABRECORD.
*/
#define PFI1_ZBABRECORD1 (PFI1_ZBAB1_ZBABRECORD)

/** \brief C040, ZBAB Record 2 */
#define PFI1_ZBAB2_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA838C040u)
/** Alias (User Manual Name) for PFI1_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI1_ZBAB2_ZBABRECORD.
*/
#define PFI1_ZBABRECORD2 (PFI1_ZBAB2_ZBABRECORD)

/** \brief C060, ZBAB Record 3 */
#define PFI1_ZBAB3_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA838C060u)
/** Alias (User Manual Name) for PFI1_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI1_ZBAB3_ZBABRECORD.
*/
#define PFI1_ZBABRECORD3 (PFI1_ZBAB3_ZBABRECORD)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_Registers_Cfg_Pfi2
 * \{  */
/** \brief 0, ECC Read Register */
#define PFI2_ECCR /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCR*)0xA8680000u)

/** \brief 20, ECC Status Register */
#define PFI2_ECCS /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCS*)0xA8680020u)

/** \brief 2000, SBAB Record 0 */
#define PFI2_SBAB0_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682000u)
/** Alias (User Manual Name) for PFI2_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB0_SBABRECORD.
*/
#define PFI2_SBABRECORD0 (PFI2_SBAB0_SBABRECORD)

/** \brief 2020, SBAB Record 1 */
#define PFI2_SBAB1_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682020u)
/** Alias (User Manual Name) for PFI2_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB1_SBABRECORD.
*/
#define PFI2_SBABRECORD1 (PFI2_SBAB1_SBABRECORD)

/** \brief 2040, SBAB Record 2 */
#define PFI2_SBAB2_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682040u)
/** Alias (User Manual Name) for PFI2_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB2_SBABRECORD.
*/
#define PFI2_SBABRECORD2 (PFI2_SBAB2_SBABRECORD)

/** \brief 2060, SBAB Record 3 */
#define PFI2_SBAB3_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682060u)
/** Alias (User Manual Name) for PFI2_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB3_SBABRECORD.
*/
#define PFI2_SBABRECORD3 (PFI2_SBAB3_SBABRECORD)

/** \brief 2080, SBAB Record 4 */
#define PFI2_SBAB4_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682080u)
/** Alias (User Manual Name) for PFI2_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB4_SBABRECORD.
*/
#define PFI2_SBABRECORD4 (PFI2_SBAB4_SBABRECORD)

/** \brief 20A0, SBAB Record 5 */
#define PFI2_SBAB5_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA86820A0u)
/** Alias (User Manual Name) for PFI2_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB5_SBABRECORD.
*/
#define PFI2_SBABRECORD5 (PFI2_SBAB5_SBABRECORD)

/** \brief 20C0, SBAB Record 6 */
#define PFI2_SBAB6_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA86820C0u)
/** Alias (User Manual Name) for PFI2_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB6_SBABRECORD.
*/
#define PFI2_SBABRECORD6 (PFI2_SBAB6_SBABRECORD)

/** \brief 20E0, SBAB Record 7 */
#define PFI2_SBAB7_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA86820E0u)
/** Alias (User Manual Name) for PFI2_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB7_SBABRECORD.
*/
#define PFI2_SBABRECORD7 (PFI2_SBAB7_SBABRECORD)

/** \brief 2100, SBAB Record 8 */
#define PFI2_SBAB8_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682100u)
/** Alias (User Manual Name) for PFI2_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB8_SBABRECORD.
*/
#define PFI2_SBABRECORD8 (PFI2_SBAB8_SBABRECORD)

/** \brief 2120, SBAB Record 9 */
#define PFI2_SBAB9_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682120u)
/** Alias (User Manual Name) for PFI2_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB9_SBABRECORD.
*/
#define PFI2_SBABRECORD9 (PFI2_SBAB9_SBABRECORD)

/** \brief 2140, SBAB Record 10 */
#define PFI2_SBAB10_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682140u)
/** Alias (User Manual Name) for PFI2_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB10_SBABRECORD.
*/
#define PFI2_SBABRECORD10 (PFI2_SBAB10_SBABRECORD)

/** \brief 2160, SBAB Record 11 */
#define PFI2_SBAB11_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682160u)
/** Alias (User Manual Name) for PFI2_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB11_SBABRECORD.
*/
#define PFI2_SBABRECORD11 (PFI2_SBAB11_SBABRECORD)

/** \brief 2180, SBAB Record 12 */
#define PFI2_SBAB12_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682180u)
/** Alias (User Manual Name) for PFI2_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB12_SBABRECORD.
*/
#define PFI2_SBABRECORD12 (PFI2_SBAB12_SBABRECORD)

/** \brief 21A0, SBAB Record 13 */
#define PFI2_SBAB13_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA86821A0u)
/** Alias (User Manual Name) for PFI2_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB13_SBABRECORD.
*/
#define PFI2_SBABRECORD13 (PFI2_SBAB13_SBABRECORD)

/** \brief 21C0, SBAB Record 14 */
#define PFI2_SBAB14_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA86821C0u)
/** Alias (User Manual Name) for PFI2_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB14_SBABRECORD.
*/
#define PFI2_SBABRECORD14 (PFI2_SBAB14_SBABRECORD)

/** \brief 21E0, SBAB Record 15 */
#define PFI2_SBAB15_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA86821E0u)
/** Alias (User Manual Name) for PFI2_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB15_SBABRECORD.
*/
#define PFI2_SBABRECORD15 (PFI2_SBAB15_SBABRECORD)

/** \brief 2200, SBAB Record 16 */
#define PFI2_SBAB16_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8682200u)
/** Alias (User Manual Name) for PFI2_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI2_SBAB16_SBABRECORD.
*/
#define PFI2_SBABRECORD16 (PFI2_SBAB16_SBABRECORD)

/** \brief 4000, DBAB Record 0 */
#define PFI2_DBAB0_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8684000u)
/** Alias (User Manual Name) for PFI2_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI2_DBAB0_DBABRECORD.
*/
#define PFI2_DBABRECORD0 (PFI2_DBAB0_DBABRECORD)

/** \brief 4020, DBAB Record 1 */
#define PFI2_DBAB1_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8684020u)
/** Alias (User Manual Name) for PFI2_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI2_DBAB1_DBABRECORD.
*/
#define PFI2_DBABRECORD1 (PFI2_DBAB1_DBABRECORD)

/** \brief 8000, MBAB Record 0 */
#define PFI2_MBAB0_MBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_MBAB_MBABRECORD*)0xA8688000u)
/** Alias (User Manual Name) for PFI2_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI2_MBAB0_MBABRECORD.
*/
#define PFI2_MBABRECORD0 (PFI2_MBAB0_MBABRECORD)

/** \brief C000, ZBAB Record 0 */
#define PFI2_ZBAB0_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA868C000u)
/** Alias (User Manual Name) for PFI2_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI2_ZBAB0_ZBABRECORD.
*/
#define PFI2_ZBABRECORD0 (PFI2_ZBAB0_ZBABRECORD)

/** \brief C020, ZBAB Record 1 */
#define PFI2_ZBAB1_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA868C020u)
/** Alias (User Manual Name) for PFI2_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI2_ZBAB1_ZBABRECORD.
*/
#define PFI2_ZBABRECORD1 (PFI2_ZBAB1_ZBABRECORD)

/** \brief C040, ZBAB Record 2 */
#define PFI2_ZBAB2_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA868C040u)
/** Alias (User Manual Name) for PFI2_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI2_ZBAB2_ZBABRECORD.
*/
#define PFI2_ZBABRECORD2 (PFI2_ZBAB2_ZBABRECORD)

/** \brief C060, ZBAB Record 3 */
#define PFI2_ZBAB3_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA868C060u)
/** Alias (User Manual Name) for PFI2_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI2_ZBAB3_ZBABRECORD.
*/
#define PFI2_ZBABRECORD3 (PFI2_ZBAB3_ZBABRECORD)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_Registers_Cfg_Pfi3
 * \{  */
/** \brief 0, ECC Read Register */
#define PFI3_ECCR /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCR*)0xA8980000u)

/** \brief 20, ECC Status Register */
#define PFI3_ECCS /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCS*)0xA8980020u)

/** \brief 2000, SBAB Record 0 */
#define PFI3_SBAB0_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982000u)
/** Alias (User Manual Name) for PFI3_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB0_SBABRECORD.
*/
#define PFI3_SBABRECORD0 (PFI3_SBAB0_SBABRECORD)

/** \brief 2020, SBAB Record 1 */
#define PFI3_SBAB1_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982020u)
/** Alias (User Manual Name) for PFI3_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB1_SBABRECORD.
*/
#define PFI3_SBABRECORD1 (PFI3_SBAB1_SBABRECORD)

/** \brief 2040, SBAB Record 2 */
#define PFI3_SBAB2_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982040u)
/** Alias (User Manual Name) for PFI3_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB2_SBABRECORD.
*/
#define PFI3_SBABRECORD2 (PFI3_SBAB2_SBABRECORD)

/** \brief 2060, SBAB Record 3 */
#define PFI3_SBAB3_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982060u)
/** Alias (User Manual Name) for PFI3_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB3_SBABRECORD.
*/
#define PFI3_SBABRECORD3 (PFI3_SBAB3_SBABRECORD)

/** \brief 2080, SBAB Record 4 */
#define PFI3_SBAB4_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982080u)
/** Alias (User Manual Name) for PFI3_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB4_SBABRECORD.
*/
#define PFI3_SBABRECORD4 (PFI3_SBAB4_SBABRECORD)

/** \brief 20A0, SBAB Record 5 */
#define PFI3_SBAB5_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA89820A0u)
/** Alias (User Manual Name) for PFI3_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB5_SBABRECORD.
*/
#define PFI3_SBABRECORD5 (PFI3_SBAB5_SBABRECORD)

/** \brief 20C0, SBAB Record 6 */
#define PFI3_SBAB6_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA89820C0u)
/** Alias (User Manual Name) for PFI3_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB6_SBABRECORD.
*/
#define PFI3_SBABRECORD6 (PFI3_SBAB6_SBABRECORD)

/** \brief 20E0, SBAB Record 7 */
#define PFI3_SBAB7_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA89820E0u)
/** Alias (User Manual Name) for PFI3_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB7_SBABRECORD.
*/
#define PFI3_SBABRECORD7 (PFI3_SBAB7_SBABRECORD)

/** \brief 2100, SBAB Record 8 */
#define PFI3_SBAB8_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982100u)
/** Alias (User Manual Name) for PFI3_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB8_SBABRECORD.
*/
#define PFI3_SBABRECORD8 (PFI3_SBAB8_SBABRECORD)

/** \brief 2120, SBAB Record 9 */
#define PFI3_SBAB9_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982120u)
/** Alias (User Manual Name) for PFI3_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB9_SBABRECORD.
*/
#define PFI3_SBABRECORD9 (PFI3_SBAB9_SBABRECORD)

/** \brief 2140, SBAB Record 10 */
#define PFI3_SBAB10_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982140u)
/** Alias (User Manual Name) for PFI3_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB10_SBABRECORD.
*/
#define PFI3_SBABRECORD10 (PFI3_SBAB10_SBABRECORD)

/** \brief 2160, SBAB Record 11 */
#define PFI3_SBAB11_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982160u)
/** Alias (User Manual Name) for PFI3_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB11_SBABRECORD.
*/
#define PFI3_SBABRECORD11 (PFI3_SBAB11_SBABRECORD)

/** \brief 2180, SBAB Record 12 */
#define PFI3_SBAB12_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982180u)
/** Alias (User Manual Name) for PFI3_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB12_SBABRECORD.
*/
#define PFI3_SBABRECORD12 (PFI3_SBAB12_SBABRECORD)

/** \brief 21A0, SBAB Record 13 */
#define PFI3_SBAB13_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA89821A0u)
/** Alias (User Manual Name) for PFI3_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB13_SBABRECORD.
*/
#define PFI3_SBABRECORD13 (PFI3_SBAB13_SBABRECORD)

/** \brief 21C0, SBAB Record 14 */
#define PFI3_SBAB14_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA89821C0u)
/** Alias (User Manual Name) for PFI3_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB14_SBABRECORD.
*/
#define PFI3_SBABRECORD14 (PFI3_SBAB14_SBABRECORD)

/** \brief 21E0, SBAB Record 15 */
#define PFI3_SBAB15_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA89821E0u)
/** Alias (User Manual Name) for PFI3_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB15_SBABRECORD.
*/
#define PFI3_SBABRECORD15 (PFI3_SBAB15_SBABRECORD)

/** \brief 2200, SBAB Record 16 */
#define PFI3_SBAB16_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8982200u)
/** Alias (User Manual Name) for PFI3_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI3_SBAB16_SBABRECORD.
*/
#define PFI3_SBABRECORD16 (PFI3_SBAB16_SBABRECORD)

/** \brief 4000, DBAB Record 0 */
#define PFI3_DBAB0_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8984000u)
/** Alias (User Manual Name) for PFI3_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI3_DBAB0_DBABRECORD.
*/
#define PFI3_DBABRECORD0 (PFI3_DBAB0_DBABRECORD)

/** \brief 4020, DBAB Record 1 */
#define PFI3_DBAB1_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8984020u)
/** Alias (User Manual Name) for PFI3_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI3_DBAB1_DBABRECORD.
*/
#define PFI3_DBABRECORD1 (PFI3_DBAB1_DBABRECORD)

/** \brief 8000, MBAB Record 0 */
#define PFI3_MBAB0_MBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_MBAB_MBABRECORD*)0xA8988000u)
/** Alias (User Manual Name) for PFI3_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI3_MBAB0_MBABRECORD.
*/
#define PFI3_MBABRECORD0 (PFI3_MBAB0_MBABRECORD)

/** \brief C000, ZBAB Record 0 */
#define PFI3_ZBAB0_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA898C000u)
/** Alias (User Manual Name) for PFI3_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI3_ZBAB0_ZBABRECORD.
*/
#define PFI3_ZBABRECORD0 (PFI3_ZBAB0_ZBABRECORD)

/** \brief C020, ZBAB Record 1 */
#define PFI3_ZBAB1_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA898C020u)
/** Alias (User Manual Name) for PFI3_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI3_ZBAB1_ZBABRECORD.
*/
#define PFI3_ZBABRECORD1 (PFI3_ZBAB1_ZBABRECORD)

/** \brief C040, ZBAB Record 2 */
#define PFI3_ZBAB2_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA898C040u)
/** Alias (User Manual Name) for PFI3_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI3_ZBAB2_ZBABRECORD.
*/
#define PFI3_ZBABRECORD2 (PFI3_ZBAB2_ZBABRECORD)

/** \brief C060, ZBAB Record 3 */
#define PFI3_ZBAB3_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA898C060u)
/** Alias (User Manual Name) for PFI3_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI3_ZBAB3_ZBABRECORD.
*/
#define PFI3_ZBABRECORD3 (PFI3_ZBAB3_ZBABRECORD)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_Registers_Cfg_Pfi4
 * \{  */
/** \brief 0, ECC Read Register */
#define PFI4_ECCR /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCR*)0xA8C80000u)

/** \brief 20, ECC Status Register */
#define PFI4_ECCS /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCS*)0xA8C80020u)

/** \brief 2000, SBAB Record 0 */
#define PFI4_SBAB0_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82000u)
/** Alias (User Manual Name) for PFI4_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB0_SBABRECORD.
*/
#define PFI4_SBABRECORD0 (PFI4_SBAB0_SBABRECORD)

/** \brief 2020, SBAB Record 1 */
#define PFI4_SBAB1_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82020u)
/** Alias (User Manual Name) for PFI4_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB1_SBABRECORD.
*/
#define PFI4_SBABRECORD1 (PFI4_SBAB1_SBABRECORD)

/** \brief 2040, SBAB Record 2 */
#define PFI4_SBAB2_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82040u)
/** Alias (User Manual Name) for PFI4_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB2_SBABRECORD.
*/
#define PFI4_SBABRECORD2 (PFI4_SBAB2_SBABRECORD)

/** \brief 2060, SBAB Record 3 */
#define PFI4_SBAB3_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82060u)
/** Alias (User Manual Name) for PFI4_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB3_SBABRECORD.
*/
#define PFI4_SBABRECORD3 (PFI4_SBAB3_SBABRECORD)

/** \brief 2080, SBAB Record 4 */
#define PFI4_SBAB4_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82080u)
/** Alias (User Manual Name) for PFI4_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB4_SBABRECORD.
*/
#define PFI4_SBABRECORD4 (PFI4_SBAB4_SBABRECORD)

/** \brief 20A0, SBAB Record 5 */
#define PFI4_SBAB5_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C820A0u)
/** Alias (User Manual Name) for PFI4_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB5_SBABRECORD.
*/
#define PFI4_SBABRECORD5 (PFI4_SBAB5_SBABRECORD)

/** \brief 20C0, SBAB Record 6 */
#define PFI4_SBAB6_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C820C0u)
/** Alias (User Manual Name) for PFI4_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB6_SBABRECORD.
*/
#define PFI4_SBABRECORD6 (PFI4_SBAB6_SBABRECORD)

/** \brief 20E0, SBAB Record 7 */
#define PFI4_SBAB7_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C820E0u)
/** Alias (User Manual Name) for PFI4_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB7_SBABRECORD.
*/
#define PFI4_SBABRECORD7 (PFI4_SBAB7_SBABRECORD)

/** \brief 2100, SBAB Record 8 */
#define PFI4_SBAB8_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82100u)
/** Alias (User Manual Name) for PFI4_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB8_SBABRECORD.
*/
#define PFI4_SBABRECORD8 (PFI4_SBAB8_SBABRECORD)

/** \brief 2120, SBAB Record 9 */
#define PFI4_SBAB9_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82120u)
/** Alias (User Manual Name) for PFI4_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB9_SBABRECORD.
*/
#define PFI4_SBABRECORD9 (PFI4_SBAB9_SBABRECORD)

/** \brief 2140, SBAB Record 10 */
#define PFI4_SBAB10_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82140u)
/** Alias (User Manual Name) for PFI4_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB10_SBABRECORD.
*/
#define PFI4_SBABRECORD10 (PFI4_SBAB10_SBABRECORD)

/** \brief 2160, SBAB Record 11 */
#define PFI4_SBAB11_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82160u)
/** Alias (User Manual Name) for PFI4_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB11_SBABRECORD.
*/
#define PFI4_SBABRECORD11 (PFI4_SBAB11_SBABRECORD)

/** \brief 2180, SBAB Record 12 */
#define PFI4_SBAB12_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82180u)
/** Alias (User Manual Name) for PFI4_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB12_SBABRECORD.
*/
#define PFI4_SBABRECORD12 (PFI4_SBAB12_SBABRECORD)

/** \brief 21A0, SBAB Record 13 */
#define PFI4_SBAB13_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C821A0u)
/** Alias (User Manual Name) for PFI4_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB13_SBABRECORD.
*/
#define PFI4_SBABRECORD13 (PFI4_SBAB13_SBABRECORD)

/** \brief 21C0, SBAB Record 14 */
#define PFI4_SBAB14_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C821C0u)
/** Alias (User Manual Name) for PFI4_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB14_SBABRECORD.
*/
#define PFI4_SBABRECORD14 (PFI4_SBAB14_SBABRECORD)

/** \brief 21E0, SBAB Record 15 */
#define PFI4_SBAB15_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C821E0u)
/** Alias (User Manual Name) for PFI4_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB15_SBABRECORD.
*/
#define PFI4_SBABRECORD15 (PFI4_SBAB15_SBABRECORD)

/** \brief 2200, SBAB Record 16 */
#define PFI4_SBAB16_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8C82200u)
/** Alias (User Manual Name) for PFI4_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI4_SBAB16_SBABRECORD.
*/
#define PFI4_SBABRECORD16 (PFI4_SBAB16_SBABRECORD)

/** \brief 4000, DBAB Record 0 */
#define PFI4_DBAB0_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8C84000u)
/** Alias (User Manual Name) for PFI4_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI4_DBAB0_DBABRECORD.
*/
#define PFI4_DBABRECORD0 (PFI4_DBAB0_DBABRECORD)

/** \brief 4020, DBAB Record 1 */
#define PFI4_DBAB1_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8C84020u)
/** Alias (User Manual Name) for PFI4_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI4_DBAB1_DBABRECORD.
*/
#define PFI4_DBABRECORD1 (PFI4_DBAB1_DBABRECORD)

/** \brief 8000, MBAB Record 0 */
#define PFI4_MBAB0_MBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_MBAB_MBABRECORD*)0xA8C88000u)
/** Alias (User Manual Name) for PFI4_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI4_MBAB0_MBABRECORD.
*/
#define PFI4_MBABRECORD0 (PFI4_MBAB0_MBABRECORD)

/** \brief C000, ZBAB Record 0 */
#define PFI4_ZBAB0_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA8C8C000u)
/** Alias (User Manual Name) for PFI4_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI4_ZBAB0_ZBABRECORD.
*/
#define PFI4_ZBABRECORD0 (PFI4_ZBAB0_ZBABRECORD)

/** \brief C020, ZBAB Record 1 */
#define PFI4_ZBAB1_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA8C8C020u)
/** Alias (User Manual Name) for PFI4_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI4_ZBAB1_ZBABRECORD.
*/
#define PFI4_ZBABRECORD1 (PFI4_ZBAB1_ZBABRECORD)

/** \brief C040, ZBAB Record 2 */
#define PFI4_ZBAB2_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA8C8C040u)
/** Alias (User Manual Name) for PFI4_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI4_ZBAB2_ZBABRECORD.
*/
#define PFI4_ZBABRECORD2 (PFI4_ZBAB2_ZBABRECORD)

/** \brief C060, ZBAB Record 3 */
#define PFI4_ZBAB3_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA8C8C060u)
/** Alias (User Manual Name) for PFI4_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI4_ZBAB3_ZBABRECORD.
*/
#define PFI4_ZBABRECORD3 (PFI4_ZBAB3_ZBABRECORD)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_Registers_Cfg_Pfi5
 * \{  */
/** \brief 0, ECC Read Register */
#define PFI5_ECCR /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCR*)0xA8F80000u)

/** \brief 20, ECC Status Register */
#define PFI5_ECCS /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ECCS*)0xA8F80020u)

/** \brief 2000, SBAB Record 0 */
#define PFI5_SBAB0_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82000u)
/** Alias (User Manual Name) for PFI5_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB0_SBABRECORD.
*/
#define PFI5_SBABRECORD0 (PFI5_SBAB0_SBABRECORD)

/** \brief 2020, SBAB Record 1 */
#define PFI5_SBAB1_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82020u)
/** Alias (User Manual Name) for PFI5_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB1_SBABRECORD.
*/
#define PFI5_SBABRECORD1 (PFI5_SBAB1_SBABRECORD)

/** \brief 2040, SBAB Record 2 */
#define PFI5_SBAB2_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82040u)
/** Alias (User Manual Name) for PFI5_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB2_SBABRECORD.
*/
#define PFI5_SBABRECORD2 (PFI5_SBAB2_SBABRECORD)

/** \brief 2060, SBAB Record 3 */
#define PFI5_SBAB3_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82060u)
/** Alias (User Manual Name) for PFI5_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB3_SBABRECORD.
*/
#define PFI5_SBABRECORD3 (PFI5_SBAB3_SBABRECORD)

/** \brief 2080, SBAB Record 4 */
#define PFI5_SBAB4_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82080u)
/** Alias (User Manual Name) for PFI5_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB4_SBABRECORD.
*/
#define PFI5_SBABRECORD4 (PFI5_SBAB4_SBABRECORD)

/** \brief 20A0, SBAB Record 5 */
#define PFI5_SBAB5_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F820A0u)
/** Alias (User Manual Name) for PFI5_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB5_SBABRECORD.
*/
#define PFI5_SBABRECORD5 (PFI5_SBAB5_SBABRECORD)

/** \brief 20C0, SBAB Record 6 */
#define PFI5_SBAB6_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F820C0u)
/** Alias (User Manual Name) for PFI5_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB6_SBABRECORD.
*/
#define PFI5_SBABRECORD6 (PFI5_SBAB6_SBABRECORD)

/** \brief 20E0, SBAB Record 7 */
#define PFI5_SBAB7_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F820E0u)
/** Alias (User Manual Name) for PFI5_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB7_SBABRECORD.
*/
#define PFI5_SBABRECORD7 (PFI5_SBAB7_SBABRECORD)

/** \brief 2100, SBAB Record 8 */
#define PFI5_SBAB8_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82100u)
/** Alias (User Manual Name) for PFI5_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB8_SBABRECORD.
*/
#define PFI5_SBABRECORD8 (PFI5_SBAB8_SBABRECORD)

/** \brief 2120, SBAB Record 9 */
#define PFI5_SBAB9_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82120u)
/** Alias (User Manual Name) for PFI5_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB9_SBABRECORD.
*/
#define PFI5_SBABRECORD9 (PFI5_SBAB9_SBABRECORD)

/** \brief 2140, SBAB Record 10 */
#define PFI5_SBAB10_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82140u)
/** Alias (User Manual Name) for PFI5_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB10_SBABRECORD.
*/
#define PFI5_SBABRECORD10 (PFI5_SBAB10_SBABRECORD)

/** \brief 2160, SBAB Record 11 */
#define PFI5_SBAB11_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82160u)
/** Alias (User Manual Name) for PFI5_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB11_SBABRECORD.
*/
#define PFI5_SBABRECORD11 (PFI5_SBAB11_SBABRECORD)

/** \brief 2180, SBAB Record 12 */
#define PFI5_SBAB12_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82180u)
/** Alias (User Manual Name) for PFI5_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB12_SBABRECORD.
*/
#define PFI5_SBABRECORD12 (PFI5_SBAB12_SBABRECORD)

/** \brief 21A0, SBAB Record 13 */
#define PFI5_SBAB13_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F821A0u)
/** Alias (User Manual Name) for PFI5_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB13_SBABRECORD.
*/
#define PFI5_SBABRECORD13 (PFI5_SBAB13_SBABRECORD)

/** \brief 21C0, SBAB Record 14 */
#define PFI5_SBAB14_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F821C0u)
/** Alias (User Manual Name) for PFI5_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB14_SBABRECORD.
*/
#define PFI5_SBABRECORD14 (PFI5_SBAB14_SBABRECORD)

/** \brief 21E0, SBAB Record 15 */
#define PFI5_SBAB15_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F821E0u)
/** Alias (User Manual Name) for PFI5_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB15_SBABRECORD.
*/
#define PFI5_SBABRECORD15 (PFI5_SBAB15_SBABRECORD)

/** \brief 2200, SBAB Record 16 */
#define PFI5_SBAB16_SBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_SBAB_SBABRECORD*)0xA8F82200u)
/** Alias (User Manual Name) for PFI5_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI5_SBAB16_SBABRECORD.
*/
#define PFI5_SBABRECORD16 (PFI5_SBAB16_SBABRECORD)

/** \brief 4000, DBAB Record 0 */
#define PFI5_DBAB0_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8F84000u)
/** Alias (User Manual Name) for PFI5_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI5_DBAB0_DBABRECORD.
*/
#define PFI5_DBABRECORD0 (PFI5_DBAB0_DBABRECORD)

/** \brief 4020, DBAB Record 1 */
#define PFI5_DBAB1_DBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_DBAB_DBABRECORD*)0xA8F84020u)
/** Alias (User Manual Name) for PFI5_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI5_DBAB1_DBABRECORD.
*/
#define PFI5_DBABRECORD1 (PFI5_DBAB1_DBABRECORD)

/** \brief 8000, MBAB Record 0 */
#define PFI5_MBAB0_MBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_MBAB_MBABRECORD*)0xA8F88000u)
/** Alias (User Manual Name) for PFI5_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI5_MBAB0_MBABRECORD.
*/
#define PFI5_MBABRECORD0 (PFI5_MBAB0_MBABRECORD)

/** \brief C000, ZBAB Record 0 */
#define PFI5_ZBAB0_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA8F8C000u)
/** Alias (User Manual Name) for PFI5_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI5_ZBAB0_ZBABRECORD.
*/
#define PFI5_ZBABRECORD0 (PFI5_ZBAB0_ZBABRECORD)

/** \brief C020, ZBAB Record 1 */
#define PFI5_ZBAB1_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA8F8C020u)
/** Alias (User Manual Name) for PFI5_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI5_ZBAB1_ZBABRECORD.
*/
#define PFI5_ZBABRECORD1 (PFI5_ZBAB1_ZBABRECORD)

/** \brief C040, ZBAB Record 2 */
#define PFI5_ZBAB2_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA8F8C040u)
/** Alias (User Manual Name) for PFI5_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI5_ZBAB2_ZBABRECORD.
*/
#define PFI5_ZBABRECORD2 (PFI5_ZBAB2_ZBABRECORD)

/** \brief C060, ZBAB Record 3 */
#define PFI5_ZBAB3_ZBABRECORD /*lint --e(923, 9078)*/ (*(volatile Ifx_PFI_ZBAB_ZBABRECORD*)0xA8F8C060u)
/** Alias (User Manual Name) for PFI5_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI5_ZBAB3_ZBABRECORD.
*/
#define PFI5_ZBABRECORD3 (PFI5_ZBAB3_ZBABRECORD)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXPFI_REG_H */