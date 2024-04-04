/**
 * \file IfxSpu_reg.h
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
 * \defgroup IfxSfr_Spu_Registers_Cfg Spu address
 * \ingroup IfxSfr_Spu_Registers
 * 
 * \defgroup IfxSfr_Spu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Spu_Registers_Cfg
 *
 * \defgroup IfxSfr_Spu_Registers_Cfg_Spu0 2-SPU0
 * \ingroup IfxSfr_Spu_Registers_Cfg
 *
 * \defgroup IfxSfr_Spu_Registers_Cfg_Spu1 2-SPU1
 * \ingroup IfxSfr_Spu_Registers_Cfg
 *
 *
 */
#ifndef IFXSPU_REG_H
#define IFXSPU_REG_H 1
/******************************************************************************/
#include "IfxSpu_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Spu_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SPU object */
#define MODULE_SPU0 /*lint --e(923, 9078)*/ ((*(Ifx_SPU*)0xFA800000u))
#define MODULE_SPU1 /*lint --e(923, 9078)*/ ((*(Ifx_SPU*)0xFAC00000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Spu_Registers_Cfg_Spu0
 * \{  */
/** \brief 0, Clock Control */
#define SPU0_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CLC*)0xFA800000u)

/** \brief 4, Module Identification Register */
#define SPU0_MODID /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MODID*)0xFA800004u)

/** \brief 8, Status and Reporting */
#define SPU0_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_STAT*)0xFA800008u)

/** \brief 30, Input DMA Configuration */
#define SPU0_ID_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_CONF*)0xFA800030u)

/** \brief 34, Input DMA Configuration 2 */
#define SPU0_ID_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_CONF2*)0xFA800034u)

/** \brief 38, Input DMA Configuration: Radar Memory */
#define SPU0_ID_RM_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_CONF*)0xFA800038u)

/** \brief 3C, Inner Loop Address Offset */
#define SPU0_ID_RM_ILO /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_ILO*)0xFA80003Cu)

/** \brief 40, Outer Loop Address Offset */
#define SPU0_ID_RM_OLO /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_OLO*)0xFA800040u)

/** \brief 44, Bin Offset Address Configuration */
#define SPU0_ID_RM_BLO /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_BLO*)0xFA800044u)

/** \brief 48, Inner and Outer Loop Repeat */
#define SPU0_ID_RM_IOLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_IOLR*)0xFA800048u)

/** \brief 4C, Bin Loop Repeat */
#define SPU0_ID_RM_BLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_BLR*)0xFA80004Cu)

/** \brief 50, Spare Configuration Register */
#define SPU0_ID_RM_ACFG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_ACFG0*)0xFA800050u)

/** \brief 54, Spare Configuration Register */
#define SPU0_ID_RM_ACFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_ACFG1*)0xFA800054u)

/** \brief 58, Partial-Acquisition Counter */
#define SPU0_PACTR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_PACTR*)0xFA800058u)

/** \brief 5C, Double Pass Configuration */
#define SPU0_DPASS_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_DPASS_CONF*)0xFA80005Cu)

/** \brief 60, Loader Configuration */
#define SPU0_BE0_LDR_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_LDR_CONF*)0xFA800060u)

/** \brief 64, Loader Configuration Extended */
#define SPU0_BE0_LDR_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_LDR_CONF2*)0xFA800064u)

/** \brief 68, Antenna Offset */
#define SPU0_BE0_ANTOFST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFA800068u)
/** Alias (User Manual Name) for SPU0_BE0_ANTOFST0.
* To use register names with standard convension, please use SPU0_BE0_ANTOFST0.
*/
#define SPU0_BE0_A0_ANTOFST (SPU0_BE0_ANTOFST0)

/** \brief 6C, Antenna Offset */
#define SPU0_BE0_ANTOFST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFA80006Cu)
/** Alias (User Manual Name) for SPU0_BE0_ANTOFST1.
* To use register names with standard convension, please use SPU0_BE0_ANTOFST1.
*/
#define SPU0_BE0_A1_ANTOFST (SPU0_BE0_ANTOFST1)

/** \brief 70, Antenna Offset */
#define SPU0_BE0_ANTOFST2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFA800070u)
/** Alias (User Manual Name) for SPU0_BE0_ANTOFST2.
* To use register names with standard convension, please use SPU0_BE0_ANTOFST2.
*/
#define SPU0_BE0_A2_ANTOFST (SPU0_BE0_ANTOFST2)

/** \brief 74, Antenna Offset */
#define SPU0_BE0_ANTOFST3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFA800074u)
/** Alias (User Manual Name) for SPU0_BE0_ANTOFST3.
* To use register names with standard convension, please use SPU0_BE0_ANTOFST3.
*/
#define SPU0_BE0_A3_ANTOFST (SPU0_BE0_ANTOFST3)

/** \brief 78, Unloader Configuration */
#define SPU0_BE0_UNLDR_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF*)0xFA800078u)

/** \brief 7C, Unloader Configuration 2 */
#define SPU0_BE0_UNLDR_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF2*)0xFA80007Cu)

/** \brief 80, Spare Configuration Register */
#define SPU0_BE0_UNLDR_ACFG /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_ACFG*)0xFA800080u)

/** \brief 84, Output Data Processor Configuration */
#define SPU0_BE0_ODP_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ODP_CONF*)0xFA800084u)

/** \brief 88, NCI Control */
#define SPU0_BE0_NCICTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_NCICTRL*)0xFA800088u)

/** \brief 8C, Summation Unit Control */
#define SPU0_BE0_SUMCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_SUMCTRL*)0xFA80008Cu)

/** \brief 90, Power Summation */
#define SPU0_BE0_PWRSUM /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_PWRSUM*)0xFA800090u)

/** \brief 94, Power Information Channel Control */
#define SPU0_BE0_PWRCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_PWRCTRL*)0xFA800094u)

/** \brief 98, CFAR Module Control */
#define SPU0_BE0_CFARCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_CFARCTRL*)0xFA800098u)

/** \brief 9C, Sideband Control */
#define SPU0_BE0_SBCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_SBCTRL*)0xFA80009Cu)

/** \brief A0, Loader Configuration */
#define SPU0_BE1_LDR_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_LDR_CONF*)0xFA8000A0u)

/** \brief A4, Loader Configuration Extended */
#define SPU0_BE1_LDR_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_LDR_CONF2*)0xFA8000A4u)

/** \brief A8, Antenna Offset */
#define SPU0_BE1_ANTOFST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFA8000A8u)
/** Alias (User Manual Name) for SPU0_BE1_ANTOFST0.
* To use register names with standard convension, please use SPU0_BE1_ANTOFST0.
*/
#define SPU0_BE1_A0_ANTOFST (SPU0_BE1_ANTOFST0)

/** \brief AC, Antenna Offset */
#define SPU0_BE1_ANTOFST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFA8000ACu)
/** Alias (User Manual Name) for SPU0_BE1_ANTOFST1.
* To use register names with standard convension, please use SPU0_BE1_ANTOFST1.
*/
#define SPU0_BE1_A1_ANTOFST (SPU0_BE1_ANTOFST1)

/** \brief B0, Antenna Offset */
#define SPU0_BE1_ANTOFST2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFA8000B0u)
/** Alias (User Manual Name) for SPU0_BE1_ANTOFST2.
* To use register names with standard convension, please use SPU0_BE1_ANTOFST2.
*/
#define SPU0_BE1_A2_ANTOFST (SPU0_BE1_ANTOFST2)

/** \brief B4, Antenna Offset */
#define SPU0_BE1_ANTOFST3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFA8000B4u)
/** Alias (User Manual Name) for SPU0_BE1_ANTOFST3.
* To use register names with standard convension, please use SPU0_BE1_ANTOFST3.
*/
#define SPU0_BE1_A3_ANTOFST (SPU0_BE1_ANTOFST3)

/** \brief B8, Unloader Configuration */
#define SPU0_BE1_UNLDR_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF*)0xFA8000B8u)

/** \brief BC, Unloader Configuration 2 */
#define SPU0_BE1_UNLDR_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF2*)0xFA8000BCu)

/** \brief C0, Spare Configuration Register */
#define SPU0_BE1_UNLDR_ACFG /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_ACFG*)0xFA8000C0u)

/** \brief C4, Output Data Processor Configuration */
#define SPU0_BE1_ODP_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ODP_CONF*)0xFA8000C4u)

/** \brief C8, NCI Control */
#define SPU0_BE1_NCICTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_NCICTRL*)0xFA8000C8u)

/** \brief CC, Summation Unit Control */
#define SPU0_BE1_SUMCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_SUMCTRL*)0xFA8000CCu)

/** \brief D0, Power Summation */
#define SPU0_BE1_PWRSUM /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_PWRSUM*)0xFA8000D0u)

/** \brief D4, Power Information Channel Control */
#define SPU0_BE1_PWRCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_PWRCTRL*)0xFA8000D4u)

/** \brief D8, CFAR Module Control */
#define SPU0_BE1_CFARCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_CFARCTRL*)0xFA8000D8u)

/** \brief DC, Sideband Control */
#define SPU0_BE1_SBCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_SBCTRL*)0xFA8000DCu)

/** \brief E0, Bin Rejection Mask */
#define SPU0_BIN_REJ0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000E0u)
/** Alias (User Manual Name) for SPU0_BIN_REJ0.
* To use register names with standard convension, please use SPU0_BIN_REJ0.
*/
#define SPU0_BIN0_REJ (SPU0_BIN_REJ0)

/** \brief E4, Bin Rejection Mask */
#define SPU0_BIN_REJ1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000E4u)
/** Alias (User Manual Name) for SPU0_BIN_REJ1.
* To use register names with standard convension, please use SPU0_BIN_REJ1.
*/
#define SPU0_BIN1_REJ (SPU0_BIN_REJ1)

/** \brief E8, Bin Rejection Mask */
#define SPU0_BIN_REJ2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000E8u)
/** Alias (User Manual Name) for SPU0_BIN_REJ2.
* To use register names with standard convension, please use SPU0_BIN_REJ2.
*/
#define SPU0_BIN2_REJ (SPU0_BIN_REJ2)

/** \brief EC, Bin Rejection Mask */
#define SPU0_BIN_REJ3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000ECu)
/** Alias (User Manual Name) for SPU0_BIN_REJ3.
* To use register names with standard convension, please use SPU0_BIN_REJ3.
*/
#define SPU0_BIN3_REJ (SPU0_BIN_REJ3)

/** \brief F0, Bin Rejection Mask */
#define SPU0_BIN_REJ4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000F0u)
/** Alias (User Manual Name) for SPU0_BIN_REJ4.
* To use register names with standard convension, please use SPU0_BIN_REJ4.
*/
#define SPU0_BIN4_REJ (SPU0_BIN_REJ4)

/** \brief F4, Bin Rejection Mask */
#define SPU0_BIN_REJ5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000F4u)
/** Alias (User Manual Name) for SPU0_BIN_REJ5.
* To use register names with standard convension, please use SPU0_BIN_REJ5.
*/
#define SPU0_BIN5_REJ (SPU0_BIN_REJ5)

/** \brief F8, Bin Rejection Mask */
#define SPU0_BIN_REJ6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000F8u)
/** Alias (User Manual Name) for SPU0_BIN_REJ6.
* To use register names with standard convension, please use SPU0_BIN_REJ6.
*/
#define SPU0_BIN6_REJ (SPU0_BIN_REJ6)

/** \brief FC, Bin Rejection Mask */
#define SPU0_BIN_REJ7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000FCu)
/** Alias (User Manual Name) for SPU0_BIN_REJ7.
* To use register names with standard convension, please use SPU0_BIN_REJ7.
*/
#define SPU0_BIN7_REJ (SPU0_BIN_REJ7)

/** \brief 100, Bin Rejection Mask */
#define SPU0_BIN_REJ8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800100u)
/** Alias (User Manual Name) for SPU0_BIN_REJ8.
* To use register names with standard convension, please use SPU0_BIN_REJ8.
*/
#define SPU0_BIN8_REJ (SPU0_BIN_REJ8)

/** \brief 104, Bin Rejection Mask */
#define SPU0_BIN_REJ9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800104u)
/** Alias (User Manual Name) for SPU0_BIN_REJ9.
* To use register names with standard convension, please use SPU0_BIN_REJ9.
*/
#define SPU0_BIN9_REJ (SPU0_BIN_REJ9)

/** \brief 108, Bin Rejection Mask */
#define SPU0_BIN_REJ10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800108u)
/** Alias (User Manual Name) for SPU0_BIN_REJ10.
* To use register names with standard convension, please use SPU0_BIN_REJ10.
*/
#define SPU0_BIN10_REJ (SPU0_BIN_REJ10)

/** \brief 10C, Bin Rejection Mask */
#define SPU0_BIN_REJ11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80010Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ11.
* To use register names with standard convension, please use SPU0_BIN_REJ11.
*/
#define SPU0_BIN11_REJ (SPU0_BIN_REJ11)

/** \brief 110, Bin Rejection Mask */
#define SPU0_BIN_REJ12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800110u)
/** Alias (User Manual Name) for SPU0_BIN_REJ12.
* To use register names with standard convension, please use SPU0_BIN_REJ12.
*/
#define SPU0_BIN12_REJ (SPU0_BIN_REJ12)

/** \brief 114, Bin Rejection Mask */
#define SPU0_BIN_REJ13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800114u)
/** Alias (User Manual Name) for SPU0_BIN_REJ13.
* To use register names with standard convension, please use SPU0_BIN_REJ13.
*/
#define SPU0_BIN13_REJ (SPU0_BIN_REJ13)

/** \brief 118, Bin Rejection Mask */
#define SPU0_BIN_REJ14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800118u)
/** Alias (User Manual Name) for SPU0_BIN_REJ14.
* To use register names with standard convension, please use SPU0_BIN_REJ14.
*/
#define SPU0_BIN14_REJ (SPU0_BIN_REJ14)

/** \brief 11C, Bin Rejection Mask */
#define SPU0_BIN_REJ15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80011Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ15.
* To use register names with standard convension, please use SPU0_BIN_REJ15.
*/
#define SPU0_BIN15_REJ (SPU0_BIN_REJ15)

/** \brief 120, Bin Rejection Mask */
#define SPU0_BIN_REJ16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800120u)
/** Alias (User Manual Name) for SPU0_BIN_REJ16.
* To use register names with standard convension, please use SPU0_BIN_REJ16.
*/
#define SPU0_BIN16_REJ (SPU0_BIN_REJ16)

/** \brief 124, Bin Rejection Mask */
#define SPU0_BIN_REJ17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800124u)
/** Alias (User Manual Name) for SPU0_BIN_REJ17.
* To use register names with standard convension, please use SPU0_BIN_REJ17.
*/
#define SPU0_BIN17_REJ (SPU0_BIN_REJ17)

/** \brief 128, Bin Rejection Mask */
#define SPU0_BIN_REJ18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800128u)
/** Alias (User Manual Name) for SPU0_BIN_REJ18.
* To use register names with standard convension, please use SPU0_BIN_REJ18.
*/
#define SPU0_BIN18_REJ (SPU0_BIN_REJ18)

/** \brief 12C, Bin Rejection Mask */
#define SPU0_BIN_REJ19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80012Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ19.
* To use register names with standard convension, please use SPU0_BIN_REJ19.
*/
#define SPU0_BIN19_REJ (SPU0_BIN_REJ19)

/** \brief 130, Bin Rejection Mask */
#define SPU0_BIN_REJ20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800130u)
/** Alias (User Manual Name) for SPU0_BIN_REJ20.
* To use register names with standard convension, please use SPU0_BIN_REJ20.
*/
#define SPU0_BIN20_REJ (SPU0_BIN_REJ20)

/** \brief 134, Bin Rejection Mask */
#define SPU0_BIN_REJ21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800134u)
/** Alias (User Manual Name) for SPU0_BIN_REJ21.
* To use register names with standard convension, please use SPU0_BIN_REJ21.
*/
#define SPU0_BIN21_REJ (SPU0_BIN_REJ21)

/** \brief 138, Bin Rejection Mask */
#define SPU0_BIN_REJ22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800138u)
/** Alias (User Manual Name) for SPU0_BIN_REJ22.
* To use register names with standard convension, please use SPU0_BIN_REJ22.
*/
#define SPU0_BIN22_REJ (SPU0_BIN_REJ22)

/** \brief 13C, Bin Rejection Mask */
#define SPU0_BIN_REJ23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80013Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ23.
* To use register names with standard convension, please use SPU0_BIN_REJ23.
*/
#define SPU0_BIN23_REJ (SPU0_BIN_REJ23)

/** \brief 140, Bin Rejection Mask */
#define SPU0_BIN_REJ24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800140u)
/** Alias (User Manual Name) for SPU0_BIN_REJ24.
* To use register names with standard convension, please use SPU0_BIN_REJ24.
*/
#define SPU0_BIN24_REJ (SPU0_BIN_REJ24)

/** \brief 144, Bin Rejection Mask */
#define SPU0_BIN_REJ25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800144u)
/** Alias (User Manual Name) for SPU0_BIN_REJ25.
* To use register names with standard convension, please use SPU0_BIN_REJ25.
*/
#define SPU0_BIN25_REJ (SPU0_BIN_REJ25)

/** \brief 148, Bin Rejection Mask */
#define SPU0_BIN_REJ26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800148u)
/** Alias (User Manual Name) for SPU0_BIN_REJ26.
* To use register names with standard convension, please use SPU0_BIN_REJ26.
*/
#define SPU0_BIN26_REJ (SPU0_BIN_REJ26)

/** \brief 14C, Bin Rejection Mask */
#define SPU0_BIN_REJ27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80014Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ27.
* To use register names with standard convension, please use SPU0_BIN_REJ27.
*/
#define SPU0_BIN27_REJ (SPU0_BIN_REJ27)

/** \brief 150, Bin Rejection Mask */
#define SPU0_BIN_REJ28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800150u)
/** Alias (User Manual Name) for SPU0_BIN_REJ28.
* To use register names with standard convension, please use SPU0_BIN_REJ28.
*/
#define SPU0_BIN28_REJ (SPU0_BIN_REJ28)

/** \brief 154, Bin Rejection Mask */
#define SPU0_BIN_REJ29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800154u)
/** Alias (User Manual Name) for SPU0_BIN_REJ29.
* To use register names with standard convension, please use SPU0_BIN_REJ29.
*/
#define SPU0_BIN29_REJ (SPU0_BIN_REJ29)

/** \brief 158, Bin Rejection Mask */
#define SPU0_BIN_REJ30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800158u)
/** Alias (User Manual Name) for SPU0_BIN_REJ30.
* To use register names with standard convension, please use SPU0_BIN_REJ30.
*/
#define SPU0_BIN30_REJ (SPU0_BIN_REJ30)

/** \brief 15C, Bin Rejection Mask */
#define SPU0_BIN_REJ31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80015Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ31.
* To use register names with standard convension, please use SPU0_BIN_REJ31.
*/
#define SPU0_BIN31_REJ (SPU0_BIN_REJ31)

/** \brief 160, Bin Rejection Mask */
#define SPU0_BIN_REJ32 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800160u)
/** Alias (User Manual Name) for SPU0_BIN_REJ32.
* To use register names with standard convension, please use SPU0_BIN_REJ32.
*/
#define SPU0_BIN32_REJ (SPU0_BIN_REJ32)

/** \brief 164, Bin Rejection Mask */
#define SPU0_BIN_REJ33 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800164u)
/** Alias (User Manual Name) for SPU0_BIN_REJ33.
* To use register names with standard convension, please use SPU0_BIN_REJ33.
*/
#define SPU0_BIN33_REJ (SPU0_BIN_REJ33)

/** \brief 168, Bin Rejection Mask */
#define SPU0_BIN_REJ34 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800168u)
/** Alias (User Manual Name) for SPU0_BIN_REJ34.
* To use register names with standard convension, please use SPU0_BIN_REJ34.
*/
#define SPU0_BIN34_REJ (SPU0_BIN_REJ34)

/** \brief 16C, Bin Rejection Mask */
#define SPU0_BIN_REJ35 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80016Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ35.
* To use register names with standard convension, please use SPU0_BIN_REJ35.
*/
#define SPU0_BIN35_REJ (SPU0_BIN_REJ35)

/** \brief 170, Bin Rejection Mask */
#define SPU0_BIN_REJ36 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800170u)
/** Alias (User Manual Name) for SPU0_BIN_REJ36.
* To use register names with standard convension, please use SPU0_BIN_REJ36.
*/
#define SPU0_BIN36_REJ (SPU0_BIN_REJ36)

/** \brief 174, Bin Rejection Mask */
#define SPU0_BIN_REJ37 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800174u)
/** Alias (User Manual Name) for SPU0_BIN_REJ37.
* To use register names with standard convension, please use SPU0_BIN_REJ37.
*/
#define SPU0_BIN37_REJ (SPU0_BIN_REJ37)

/** \brief 178, Bin Rejection Mask */
#define SPU0_BIN_REJ38 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800178u)
/** Alias (User Manual Name) for SPU0_BIN_REJ38.
* To use register names with standard convension, please use SPU0_BIN_REJ38.
*/
#define SPU0_BIN38_REJ (SPU0_BIN_REJ38)

/** \brief 17C, Bin Rejection Mask */
#define SPU0_BIN_REJ39 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80017Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ39.
* To use register names with standard convension, please use SPU0_BIN_REJ39.
*/
#define SPU0_BIN39_REJ (SPU0_BIN_REJ39)

/** \brief 180, Bin Rejection Mask */
#define SPU0_BIN_REJ40 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800180u)
/** Alias (User Manual Name) for SPU0_BIN_REJ40.
* To use register names with standard convension, please use SPU0_BIN_REJ40.
*/
#define SPU0_BIN40_REJ (SPU0_BIN_REJ40)

/** \brief 184, Bin Rejection Mask */
#define SPU0_BIN_REJ41 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800184u)
/** Alias (User Manual Name) for SPU0_BIN_REJ41.
* To use register names with standard convension, please use SPU0_BIN_REJ41.
*/
#define SPU0_BIN41_REJ (SPU0_BIN_REJ41)

/** \brief 188, Bin Rejection Mask */
#define SPU0_BIN_REJ42 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800188u)
/** Alias (User Manual Name) for SPU0_BIN_REJ42.
* To use register names with standard convension, please use SPU0_BIN_REJ42.
*/
#define SPU0_BIN42_REJ (SPU0_BIN_REJ42)

/** \brief 18C, Bin Rejection Mask */
#define SPU0_BIN_REJ43 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80018Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ43.
* To use register names with standard convension, please use SPU0_BIN_REJ43.
*/
#define SPU0_BIN43_REJ (SPU0_BIN_REJ43)

/** \brief 190, Bin Rejection Mask */
#define SPU0_BIN_REJ44 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800190u)
/** Alias (User Manual Name) for SPU0_BIN_REJ44.
* To use register names with standard convension, please use SPU0_BIN_REJ44.
*/
#define SPU0_BIN44_REJ (SPU0_BIN_REJ44)

/** \brief 194, Bin Rejection Mask */
#define SPU0_BIN_REJ45 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800194u)
/** Alias (User Manual Name) for SPU0_BIN_REJ45.
* To use register names with standard convension, please use SPU0_BIN_REJ45.
*/
#define SPU0_BIN45_REJ (SPU0_BIN_REJ45)

/** \brief 198, Bin Rejection Mask */
#define SPU0_BIN_REJ46 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800198u)
/** Alias (User Manual Name) for SPU0_BIN_REJ46.
* To use register names with standard convension, please use SPU0_BIN_REJ46.
*/
#define SPU0_BIN46_REJ (SPU0_BIN_REJ46)

/** \brief 19C, Bin Rejection Mask */
#define SPU0_BIN_REJ47 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80019Cu)
/** Alias (User Manual Name) for SPU0_BIN_REJ47.
* To use register names with standard convension, please use SPU0_BIN_REJ47.
*/
#define SPU0_BIN47_REJ (SPU0_BIN_REJ47)

/** \brief 1A0, Bin Rejection Mask */
#define SPU0_BIN_REJ48 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001A0u)
/** Alias (User Manual Name) for SPU0_BIN_REJ48.
* To use register names with standard convension, please use SPU0_BIN_REJ48.
*/
#define SPU0_BIN48_REJ (SPU0_BIN_REJ48)

/** \brief 1A4, Bin Rejection Mask */
#define SPU0_BIN_REJ49 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001A4u)
/** Alias (User Manual Name) for SPU0_BIN_REJ49.
* To use register names with standard convension, please use SPU0_BIN_REJ49.
*/
#define SPU0_BIN49_REJ (SPU0_BIN_REJ49)

/** \brief 1A8, Bin Rejection Mask */
#define SPU0_BIN_REJ50 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001A8u)
/** Alias (User Manual Name) for SPU0_BIN_REJ50.
* To use register names with standard convension, please use SPU0_BIN_REJ50.
*/
#define SPU0_BIN50_REJ (SPU0_BIN_REJ50)

/** \brief 1AC, Bin Rejection Mask */
#define SPU0_BIN_REJ51 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001ACu)
/** Alias (User Manual Name) for SPU0_BIN_REJ51.
* To use register names with standard convension, please use SPU0_BIN_REJ51.
*/
#define SPU0_BIN51_REJ (SPU0_BIN_REJ51)

/** \brief 1B0, Bin Rejection Mask */
#define SPU0_BIN_REJ52 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001B0u)
/** Alias (User Manual Name) for SPU0_BIN_REJ52.
* To use register names with standard convension, please use SPU0_BIN_REJ52.
*/
#define SPU0_BIN52_REJ (SPU0_BIN_REJ52)

/** \brief 1B4, Bin Rejection Mask */
#define SPU0_BIN_REJ53 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001B4u)
/** Alias (User Manual Name) for SPU0_BIN_REJ53.
* To use register names with standard convension, please use SPU0_BIN_REJ53.
*/
#define SPU0_BIN53_REJ (SPU0_BIN_REJ53)

/** \brief 1B8, Bin Rejection Mask */
#define SPU0_BIN_REJ54 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001B8u)
/** Alias (User Manual Name) for SPU0_BIN_REJ54.
* To use register names with standard convension, please use SPU0_BIN_REJ54.
*/
#define SPU0_BIN54_REJ (SPU0_BIN_REJ54)

/** \brief 1BC, Bin Rejection Mask */
#define SPU0_BIN_REJ55 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001BCu)
/** Alias (User Manual Name) for SPU0_BIN_REJ55.
* To use register names with standard convension, please use SPU0_BIN_REJ55.
*/
#define SPU0_BIN55_REJ (SPU0_BIN_REJ55)

/** \brief 1C0, Bin Rejection Mask */
#define SPU0_BIN_REJ56 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001C0u)
/** Alias (User Manual Name) for SPU0_BIN_REJ56.
* To use register names with standard convension, please use SPU0_BIN_REJ56.
*/
#define SPU0_BIN56_REJ (SPU0_BIN_REJ56)

/** \brief 1C4, Bin Rejection Mask */
#define SPU0_BIN_REJ57 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001C4u)
/** Alias (User Manual Name) for SPU0_BIN_REJ57.
* To use register names with standard convension, please use SPU0_BIN_REJ57.
*/
#define SPU0_BIN57_REJ (SPU0_BIN_REJ57)

/** \brief 1C8, Bin Rejection Mask */
#define SPU0_BIN_REJ58 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001C8u)
/** Alias (User Manual Name) for SPU0_BIN_REJ58.
* To use register names with standard convension, please use SPU0_BIN_REJ58.
*/
#define SPU0_BIN58_REJ (SPU0_BIN_REJ58)

/** \brief 1CC, Bin Rejection Mask */
#define SPU0_BIN_REJ59 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001CCu)
/** Alias (User Manual Name) for SPU0_BIN_REJ59.
* To use register names with standard convension, please use SPU0_BIN_REJ59.
*/
#define SPU0_BIN59_REJ (SPU0_BIN_REJ59)

/** \brief 1D0, Bin Rejection Mask */
#define SPU0_BIN_REJ60 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001D0u)
/** Alias (User Manual Name) for SPU0_BIN_REJ60.
* To use register names with standard convension, please use SPU0_BIN_REJ60.
*/
#define SPU0_BIN60_REJ (SPU0_BIN_REJ60)

/** \brief 1D4, Bin Rejection Mask */
#define SPU0_BIN_REJ61 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001D4u)
/** Alias (User Manual Name) for SPU0_BIN_REJ61.
* To use register names with standard convension, please use SPU0_BIN_REJ61.
*/
#define SPU0_BIN61_REJ (SPU0_BIN_REJ61)

/** \brief 1D8, Bin Rejection Mask */
#define SPU0_BIN_REJ62 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001D8u)
/** Alias (User Manual Name) for SPU0_BIN_REJ62.
* To use register names with standard convension, please use SPU0_BIN_REJ62.
*/
#define SPU0_BIN62_REJ (SPU0_BIN_REJ62)

/** \brief 1DC, Bin Rejection Mask */
#define SPU0_BIN_REJ63 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001DCu)
/** Alias (User Manual Name) for SPU0_BIN_REJ63.
* To use register names with standard convension, please use SPU0_BIN_REJ63.
*/
#define SPU0_BIN63_REJ (SPU0_BIN_REJ63)

/** \brief 1E0, Magnitude Approximation Constants */
#define SPU0_MAGAPPROX /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MAGAPPROX*)0xFA8001E0u)

/** \brief 1E4, NCI Antennae Scaling Factor */
#define SPU0_NCI_SCALAR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_NCI_SCALAR0*)0xFA8001E4u)
/** Alias (User Manual Name) for SPU0_NCI_SCALAR0.
* To use register names with standard convension, please use SPU0_NCI_SCALAR0.
*/
#define SPU0_NCISCALAR0 (SPU0_NCI_SCALAR0)

/** \brief 1E8, NCI Antennae Scaling Factor */
#define SPU0_NCI_SCALAR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_NCI_SCALAR1*)0xFA8001E8u)
/** Alias (User Manual Name) for SPU0_NCI_SCALAR1.
* To use register names with standard convension, please use SPU0_NCI_SCALAR1.
*/
#define SPU0_NCISCALAR1 (SPU0_NCI_SCALAR1)

/** \brief 1EC, NCI Antennae Scaling Factor */
#define SPU0_NCI_SCALAR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_NCI_SCALAR2*)0xFA8001ECu)
/** Alias (User Manual Name) for SPU0_NCI_SCALAR2.
* To use register names with standard convension, please use SPU0_NCI_SCALAR2.
*/
#define SPU0_NCISCALAR2 (SPU0_NCI_SCALAR2)

/** \brief 1F0, NCI Antennae Scaling Factor */
#define SPU0_NCI_SCALAR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_NCI_SCALAR3*)0xFA8001F0u)
/** Alias (User Manual Name) for SPU0_NCI_SCALAR3.
* To use register names with standard convension, please use SPU0_NCI_SCALAR3.
*/
#define SPU0_NCISCALAR3 (SPU0_NCI_SCALAR3)

/** \brief 1F4, CFAR Configuration */
#define SPU0_CFAR0_CFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CFAR_CFG1*)0xFA8001F4u)
/** Alias (User Manual Name) for SPU0_CFAR0_CFG1.
* To use register names with standard convension, please use SPU0_CFAR0_CFG1.
*/
#define SPU0_CFARCFG (SPU0_CFAR0_CFG1)

/** \brief 1F8, CFAR Configuration 2 */
#define SPU0_CFAR0_CFG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CFAR_CFG2*)0xFA8001F8u)
/** Alias (User Manual Name) for SPU0_CFAR0_CFG2.
* To use register names with standard convension, please use SPU0_CFAR0_CFG2.
*/
#define SPU0_CFARCFG2 (SPU0_CFAR0_CFG2)

/** \brief 1FC, CFAR Configuration 3 */
#define SPU0_CFAR0_CFG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CFAR_CFG3*)0xFA8001FCu)
/** Alias (User Manual Name) for SPU0_CFAR0_CFG3.
* To use register names with standard convension, please use SPU0_CFAR0_CFG3.
*/
#define SPU0_CFARCFG3 (SPU0_CFAR0_CFG3)

/** \brief 200, Scalar Addition Operand */
#define SPU0_SCALARADD /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SCALARADD*)0xFA800200u)

/** \brief 204, Scalar Multiplication Operand */
#define SPU0_SCALARMULT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SCALARMULT*)0xFA800204u)

/** \brief 208, Bin Rejection Unit Control */
#define SPU0_BINREJCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BINREJCTRL*)0xFA800208u)

/** \brief 20C, Local Maximum Control */
#define SPU0_LCLMAX /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_LCLMAX*)0xFA80020Cu)

/** \brief 210, Spare Configuration Register  */
#define SPU0_ACFG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ACFG2*)0xFA800210u)

/** \brief 218, Register CRC */
#define SPU0_REGCRC /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_REGCRC*)0xFA800218u)

/** \brief 21C, SPU Control */
#define SPU0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CTRL*)0xFA80021Cu)

/** \brief 220, Dataset Metadata */
#define SPU0_MD0_METADATA /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_METADATA*)0xFA800220u)

/** \brief 224, Bin Rejection Unit Tracking */
#define SPU0_MD0_BINCOUNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_BINCOUNT*)0xFA800224u)

/** \brief 228, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800228u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT0.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT0.
*/
#define SPU0_MD0_MASK0_ACCEPT (SPU0_MD0_MASK_ACCEPT0)

/** \brief 22C, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80022Cu)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT1.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT1.
*/
#define SPU0_MD0_MASK1_ACCEPT (SPU0_MD0_MASK_ACCEPT1)

/** \brief 230, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800230u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT2.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT2.
*/
#define SPU0_MD0_MASK2_ACCEPT (SPU0_MD0_MASK_ACCEPT2)

/** \brief 234, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800234u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT3.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT3.
*/
#define SPU0_MD0_MASK3_ACCEPT (SPU0_MD0_MASK_ACCEPT3)

/** \brief 238, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800238u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT4.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT4.
*/
#define SPU0_MD0_MASK4_ACCEPT (SPU0_MD0_MASK_ACCEPT4)

/** \brief 23C, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80023Cu)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT5.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT5.
*/
#define SPU0_MD0_MASK5_ACCEPT (SPU0_MD0_MASK_ACCEPT5)

/** \brief 240, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800240u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT6.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT6.
*/
#define SPU0_MD0_MASK6_ACCEPT (SPU0_MD0_MASK_ACCEPT6)

/** \brief 244, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800244u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT7.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT7.
*/
#define SPU0_MD0_MASK7_ACCEPT (SPU0_MD0_MASK_ACCEPT7)

/** \brief 248, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800248u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT8.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT8.
*/
#define SPU0_MD0_MASK8_ACCEPT (SPU0_MD0_MASK_ACCEPT8)

/** \brief 24C, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80024Cu)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT9.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT9.
*/
#define SPU0_MD0_MASK9_ACCEPT (SPU0_MD0_MASK_ACCEPT9)

/** \brief 250, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800250u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT10.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT10.
*/
#define SPU0_MD0_MASK10_ACCEPT (SPU0_MD0_MASK_ACCEPT10)

/** \brief 254, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800254u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT11.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT11.
*/
#define SPU0_MD0_MASK11_ACCEPT (SPU0_MD0_MASK_ACCEPT11)

/** \brief 258, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800258u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT12.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT12.
*/
#define SPU0_MD0_MASK12_ACCEPT (SPU0_MD0_MASK_ACCEPT12)

/** \brief 25C, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80025Cu)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT13.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT13.
*/
#define SPU0_MD0_MASK13_ACCEPT (SPU0_MD0_MASK_ACCEPT13)

/** \brief 260, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800260u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT14.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT14.
*/
#define SPU0_MD0_MASK14_ACCEPT (SPU0_MD0_MASK_ACCEPT14)

/** \brief 264, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800264u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT15.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT15.
*/
#define SPU0_MD0_MASK15_ACCEPT (SPU0_MD0_MASK_ACCEPT15)

/** \brief 268, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800268u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT16.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT16.
*/
#define SPU0_MD0_MASK16_ACCEPT (SPU0_MD0_MASK_ACCEPT16)

/** \brief 26C, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80026Cu)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT17.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT17.
*/
#define SPU0_MD0_MASK17_ACCEPT (SPU0_MD0_MASK_ACCEPT17)

/** \brief 270, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800270u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT18.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT18.
*/
#define SPU0_MD0_MASK18_ACCEPT (SPU0_MD0_MASK_ACCEPT18)

/** \brief 274, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800274u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT19.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT19.
*/
#define SPU0_MD0_MASK19_ACCEPT (SPU0_MD0_MASK_ACCEPT19)

/** \brief 278, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800278u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT20.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT20.
*/
#define SPU0_MD0_MASK20_ACCEPT (SPU0_MD0_MASK_ACCEPT20)

/** \brief 27C, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80027Cu)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT21.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT21.
*/
#define SPU0_MD0_MASK21_ACCEPT (SPU0_MD0_MASK_ACCEPT21)

/** \brief 280, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800280u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT22.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT22.
*/
#define SPU0_MD0_MASK22_ACCEPT (SPU0_MD0_MASK_ACCEPT22)

/** \brief 284, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800284u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT23.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT23.
*/
#define SPU0_MD0_MASK23_ACCEPT (SPU0_MD0_MASK_ACCEPT23)

/** \brief 288, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800288u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT24.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT24.
*/
#define SPU0_MD0_MASK24_ACCEPT (SPU0_MD0_MASK_ACCEPT24)

/** \brief 28C, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80028Cu)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT25.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT25.
*/
#define SPU0_MD0_MASK25_ACCEPT (SPU0_MD0_MASK_ACCEPT25)

/** \brief 290, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800290u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT26.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT26.
*/
#define SPU0_MD0_MASK26_ACCEPT (SPU0_MD0_MASK_ACCEPT26)

/** \brief 294, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800294u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT27.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT27.
*/
#define SPU0_MD0_MASK27_ACCEPT (SPU0_MD0_MASK_ACCEPT27)

/** \brief 298, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800298u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT28.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT28.
*/
#define SPU0_MD0_MASK28_ACCEPT (SPU0_MD0_MASK_ACCEPT28)

/** \brief 29C, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80029Cu)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT29.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT29.
*/
#define SPU0_MD0_MASK29_ACCEPT (SPU0_MD0_MASK_ACCEPT29)

/** \brief 2A0, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002A0u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT30.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT30.
*/
#define SPU0_MD0_MASK30_ACCEPT (SPU0_MD0_MASK_ACCEPT30)

/** \brief 2A4, Bin Acceptance  Mask */
#define SPU0_MD0_MASK_ACCEPT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002A4u)
/** Alias (User Manual Name) for SPU0_MD0_MASK_ACCEPT31.
* To use register names with standard convension, please use SPU0_MD0_MASK_ACCEPT31.
*/
#define SPU0_MD0_MASK31_ACCEPT (SPU0_MD0_MASK_ACCEPT31)

/** \brief 2A8, Dataset Metadata */
#define SPU0_MD1_METADATA /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_METADATA*)0xFA8002A8u)

/** \brief 2AC, Bin Rejection Unit Tracking */
#define SPU0_MD1_BINCOUNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_BINCOUNT*)0xFA8002ACu)

/** \brief 2B0, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002B0u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT0.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT0.
*/
#define SPU0_MD1_MASK0_ACCEPT (SPU0_MD1_MASK_ACCEPT0)

/** \brief 2B4, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002B4u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT1.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT1.
*/
#define SPU0_MD1_MASK1_ACCEPT (SPU0_MD1_MASK_ACCEPT1)

/** \brief 2B8, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002B8u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT2.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT2.
*/
#define SPU0_MD1_MASK2_ACCEPT (SPU0_MD1_MASK_ACCEPT2)

/** \brief 2BC, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002BCu)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT3.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT3.
*/
#define SPU0_MD1_MASK3_ACCEPT (SPU0_MD1_MASK_ACCEPT3)

/** \brief 2C0, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002C0u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT4.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT4.
*/
#define SPU0_MD1_MASK4_ACCEPT (SPU0_MD1_MASK_ACCEPT4)

/** \brief 2C4, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002C4u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT5.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT5.
*/
#define SPU0_MD1_MASK5_ACCEPT (SPU0_MD1_MASK_ACCEPT5)

/** \brief 2C8, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002C8u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT6.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT6.
*/
#define SPU0_MD1_MASK6_ACCEPT (SPU0_MD1_MASK_ACCEPT6)

/** \brief 2CC, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002CCu)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT7.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT7.
*/
#define SPU0_MD1_MASK7_ACCEPT (SPU0_MD1_MASK_ACCEPT7)

/** \brief 2D0, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002D0u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT8.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT8.
*/
#define SPU0_MD1_MASK8_ACCEPT (SPU0_MD1_MASK_ACCEPT8)

/** \brief 2D4, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002D4u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT9.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT9.
*/
#define SPU0_MD1_MASK9_ACCEPT (SPU0_MD1_MASK_ACCEPT9)

/** \brief 2D8, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002D8u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT10.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT10.
*/
#define SPU0_MD1_MASK10_ACCEPT (SPU0_MD1_MASK_ACCEPT10)

/** \brief 2DC, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002DCu)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT11.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT11.
*/
#define SPU0_MD1_MASK11_ACCEPT (SPU0_MD1_MASK_ACCEPT11)

/** \brief 2E0, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002E0u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT12.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT12.
*/
#define SPU0_MD1_MASK12_ACCEPT (SPU0_MD1_MASK_ACCEPT12)

/** \brief 2E4, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002E4u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT13.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT13.
*/
#define SPU0_MD1_MASK13_ACCEPT (SPU0_MD1_MASK_ACCEPT13)

/** \brief 2E8, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002E8u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT14.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT14.
*/
#define SPU0_MD1_MASK14_ACCEPT (SPU0_MD1_MASK_ACCEPT14)

/** \brief 2EC, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002ECu)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT15.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT15.
*/
#define SPU0_MD1_MASK15_ACCEPT (SPU0_MD1_MASK_ACCEPT15)

/** \brief 2F0, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002F0u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT16.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT16.
*/
#define SPU0_MD1_MASK16_ACCEPT (SPU0_MD1_MASK_ACCEPT16)

/** \brief 2F4, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002F4u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT17.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT17.
*/
#define SPU0_MD1_MASK17_ACCEPT (SPU0_MD1_MASK_ACCEPT17)

/** \brief 2F8, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002F8u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT18.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT18.
*/
#define SPU0_MD1_MASK18_ACCEPT (SPU0_MD1_MASK_ACCEPT18)

/** \brief 2FC, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA8002FCu)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT19.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT19.
*/
#define SPU0_MD1_MASK19_ACCEPT (SPU0_MD1_MASK_ACCEPT19)

/** \brief 300, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800300u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT20.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT20.
*/
#define SPU0_MD1_MASK20_ACCEPT (SPU0_MD1_MASK_ACCEPT20)

/** \brief 304, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800304u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT21.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT21.
*/
#define SPU0_MD1_MASK21_ACCEPT (SPU0_MD1_MASK_ACCEPT21)

/** \brief 308, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800308u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT22.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT22.
*/
#define SPU0_MD1_MASK22_ACCEPT (SPU0_MD1_MASK_ACCEPT22)

/** \brief 30C, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80030Cu)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT23.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT23.
*/
#define SPU0_MD1_MASK23_ACCEPT (SPU0_MD1_MASK_ACCEPT23)

/** \brief 310, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800310u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT24.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT24.
*/
#define SPU0_MD1_MASK24_ACCEPT (SPU0_MD1_MASK_ACCEPT24)

/** \brief 314, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800314u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT25.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT25.
*/
#define SPU0_MD1_MASK25_ACCEPT (SPU0_MD1_MASK_ACCEPT25)

/** \brief 318, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800318u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT26.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT26.
*/
#define SPU0_MD1_MASK26_ACCEPT (SPU0_MD1_MASK_ACCEPT26)

/** \brief 31C, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80031Cu)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT27.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT27.
*/
#define SPU0_MD1_MASK27_ACCEPT (SPU0_MD1_MASK_ACCEPT27)

/** \brief 320, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800320u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT28.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT28.
*/
#define SPU0_MD1_MASK28_ACCEPT (SPU0_MD1_MASK_ACCEPT28)

/** \brief 324, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800324u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT29.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT29.
*/
#define SPU0_MD1_MASK29_ACCEPT (SPU0_MD1_MASK_ACCEPT29)

/** \brief 328, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA800328u)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT30.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT30.
*/
#define SPU0_MD1_MASK30_ACCEPT (SPU0_MD1_MASK_ACCEPT30)

/** \brief 32C, Bin Acceptance  Mask */
#define SPU0_MD1_MASK_ACCEPT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFA80032Cu)
/** Alias (User Manual Name) for SPU0_MD1_MASK_ACCEPT31.
* To use register names with standard convension, please use SPU0_MD1_MASK_ACCEPT31.
*/
#define SPU0_MD1_MASK31_ACCEPT (SPU0_MD1_MASK_ACCEPT31)

/** \brief 330, Input DMA Count */
#define SPU0_IDMCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_IDMCNT*)0xFA800330u)

/** \brief 334, Input Buffer Memory Count */
#define SPU0_IBMCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_IBMCNT*)0xFA800334u)

/** \brief 338, Input Buffer Memory Read Count */
#define SPU0_LDRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_LDRCNT*)0xFA800338u)

/** \brief 33C, FFT Load Count */
#define SPU0_FFTWCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_FFTWCNT*)0xFA80033Cu)

/** \brief 340, FFT Unload Count */
#define SPU0_FFTRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_FFTRCNT*)0xFA800340u)

/** \brief 344, Output Buffer Memory Write Count */
#define SPU0_ULDRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ULDRCNT*)0xFA800344u)

/** \brief 348, Output Buffer Memory Read Count */
#define SPU0_ODMCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMCNT*)0xFA800348u)

/** \brief 34C, Bin Rejection Unit Load Count */
#define SPU0_BRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BRCNT*)0xFA80034Cu)

/** \brief 350, CFAR Unit Load Count */
#define SPU0_CFARCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CFARCNT*)0xFA800350u)

/** \brief 354, Output DMA Port Write Count */
#define SPU0_ODMACNT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFA800354u)

/** \brief 358, Output DMA Port Write Count */
#define SPU0_ODMACNT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFA800358u)

/** \brief 35C, Output DMA Port Write Count */
#define SPU0_ODMACNT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFA80035Cu)

/** \brief 360, Output DMA Port Write Count */
#define SPU0_ODMACNT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFA800360u)

/** \brief 364, Output DMA Port Write Count */
#define SPU0_ODMACNT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFA800364u)

/** \brief 368, Output DMA Port Write Count */
#define SPU0_ODMACNT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFA800368u)

/** \brief 36C, Output DMA Port Write Count */
#define SPU0_ODMACNT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFA80036Cu)

/** \brief 370, Output DMA Port Write Count */
#define SPU0_ODMACNT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFA800370u)

/** \brief 374, Safety Counter Clear */
#define SPU0_CNTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CNTCLR*)0xFA800374u)

/** \brief 378, SPU Monitor */
#define SPU0_MONITOR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MONITOR*)0xFA800378u)

/** \brief 37C, Safety Mechanism Control Functions */
#define SPU0_SMCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SMCTRL*)0xFA80037Cu)

/** \brief 380, Safety Mechanism Status */
#define SPU0_SMSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SMSTAT*)0xFA800380u)

/** \brief 384, Safety Mechanism Control Functions (User) */
#define SPU0_SMUSER /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SMUSER*)0xFA800384u)

/** \brief 388, Monitor CRC Register */
#define SPU0_CRC_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800388u)
/** Alias (User Manual Name) for SPU0_CRC_DATA0.
* To use register names with standard convension, please use SPU0_CRC_DATA0.
*/
#define SPU0_DATA0_CRC (SPU0_CRC_DATA0)

/** \brief 38C, Monitor CRC Register */
#define SPU0_CRC_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80038Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA1.
* To use register names with standard convension, please use SPU0_CRC_DATA1.
*/
#define SPU0_DATA1_CRC (SPU0_CRC_DATA1)

/** \brief 390, Monitor CRC Register */
#define SPU0_CRC_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800390u)
/** Alias (User Manual Name) for SPU0_CRC_DATA2.
* To use register names with standard convension, please use SPU0_CRC_DATA2.
*/
#define SPU0_DATA2_CRC (SPU0_CRC_DATA2)

/** \brief 394, Monitor CRC Register */
#define SPU0_CRC_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800394u)
/** Alias (User Manual Name) for SPU0_CRC_DATA3.
* To use register names with standard convension, please use SPU0_CRC_DATA3.
*/
#define SPU0_DATA3_CRC (SPU0_CRC_DATA3)

/** \brief 398, Monitor CRC Register */
#define SPU0_CRC_DATA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800398u)
/** Alias (User Manual Name) for SPU0_CRC_DATA4.
* To use register names with standard convension, please use SPU0_CRC_DATA4.
*/
#define SPU0_DATA4_CRC (SPU0_CRC_DATA4)

/** \brief 39C, Monitor CRC Register */
#define SPU0_CRC_DATA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80039Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA5.
* To use register names with standard convension, please use SPU0_CRC_DATA5.
*/
#define SPU0_DATA5_CRC (SPU0_CRC_DATA5)

/** \brief 3A0, Monitor CRC Register */
#define SPU0_CRC_DATA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003A0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA6.
* To use register names with standard convension, please use SPU0_CRC_DATA6.
*/
#define SPU0_DATA6_CRC (SPU0_CRC_DATA6)

/** \brief 3A4, Monitor CRC Register */
#define SPU0_CRC_DATA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003A4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA7.
* To use register names with standard convension, please use SPU0_CRC_DATA7.
*/
#define SPU0_DATA7_CRC (SPU0_CRC_DATA7)

/** \brief 3A8, Monitor CRC Register */
#define SPU0_CRC_DATA8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003A8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA8.
* To use register names with standard convension, please use SPU0_CRC_DATA8.
*/
#define SPU0_DATA8_CRC (SPU0_CRC_DATA8)

/** \brief 3AC, Monitor CRC Register */
#define SPU0_CRC_DATA9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003ACu)
/** Alias (User Manual Name) for SPU0_CRC_DATA9.
* To use register names with standard convension, please use SPU0_CRC_DATA9.
*/
#define SPU0_DATA9_CRC (SPU0_CRC_DATA9)

/** \brief 3B0, Monitor CRC Register */
#define SPU0_CRC_DATA10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003B0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA10.
* To use register names with standard convension, please use SPU0_CRC_DATA10.
*/
#define SPU0_DATA10_CRC (SPU0_CRC_DATA10)

/** \brief 3B4, Monitor CRC Register */
#define SPU0_CRC_DATA11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003B4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA11.
* To use register names with standard convension, please use SPU0_CRC_DATA11.
*/
#define SPU0_DATA11_CRC (SPU0_CRC_DATA11)

/** \brief 3B8, Monitor CRC Register */
#define SPU0_CRC_DATA12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003B8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA12.
* To use register names with standard convension, please use SPU0_CRC_DATA12.
*/
#define SPU0_DATA12_CRC (SPU0_CRC_DATA12)

/** \brief 3BC, Monitor CRC Register */
#define SPU0_CRC_DATA13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003BCu)
/** Alias (User Manual Name) for SPU0_CRC_DATA13.
* To use register names with standard convension, please use SPU0_CRC_DATA13.
*/
#define SPU0_DATA13_CRC (SPU0_CRC_DATA13)

/** \brief 3C0, Monitor CRC Register */
#define SPU0_CRC_DATA14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003C0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA14.
* To use register names with standard convension, please use SPU0_CRC_DATA14.
*/
#define SPU0_DATA14_CRC (SPU0_CRC_DATA14)

/** \brief 3C4, Monitor CRC Register */
#define SPU0_CRC_DATA15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003C4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA15.
* To use register names with standard convension, please use SPU0_CRC_DATA15.
*/
#define SPU0_DATA15_CRC (SPU0_CRC_DATA15)

/** \brief 3C8, Monitor CRC Register */
#define SPU0_CRC_DATA16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003C8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA16.
* To use register names with standard convension, please use SPU0_CRC_DATA16.
*/
#define SPU0_DATA16_CRC (SPU0_CRC_DATA16)

/** \brief 3CC, Monitor CRC Register */
#define SPU0_CRC_DATA17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003CCu)
/** Alias (User Manual Name) for SPU0_CRC_DATA17.
* To use register names with standard convension, please use SPU0_CRC_DATA17.
*/
#define SPU0_DATA17_CRC (SPU0_CRC_DATA17)

/** \brief 3D0, Monitor CRC Register */
#define SPU0_CRC_DATA18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003D0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA18.
* To use register names with standard convension, please use SPU0_CRC_DATA18.
*/
#define SPU0_DATA18_CRC (SPU0_CRC_DATA18)

/** \brief 3D4, Monitor CRC Register */
#define SPU0_CRC_DATA19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003D4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA19.
* To use register names with standard convension, please use SPU0_CRC_DATA19.
*/
#define SPU0_DATA19_CRC (SPU0_CRC_DATA19)

/** \brief 3D8, Monitor CRC Register */
#define SPU0_CRC_DATA20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003D8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA20.
* To use register names with standard convension, please use SPU0_CRC_DATA20.
*/
#define SPU0_DATA20_CRC (SPU0_CRC_DATA20)

/** \brief 3DC, Monitor CRC Register */
#define SPU0_CRC_DATA21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003DCu)
/** Alias (User Manual Name) for SPU0_CRC_DATA21.
* To use register names with standard convension, please use SPU0_CRC_DATA21.
*/
#define SPU0_DATA21_CRC (SPU0_CRC_DATA21)

/** \brief 3E0, Monitor CRC Register */
#define SPU0_CRC_DATA22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003E0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA22.
* To use register names with standard convension, please use SPU0_CRC_DATA22.
*/
#define SPU0_DATA22_CRC (SPU0_CRC_DATA22)

/** \brief 3E4, Monitor CRC Register */
#define SPU0_CRC_DATA23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003E4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA23.
* To use register names with standard convension, please use SPU0_CRC_DATA23.
*/
#define SPU0_DATA23_CRC (SPU0_CRC_DATA23)

/** \brief 3E8, Monitor CRC Register */
#define SPU0_CRC_DATA24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003E8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA24.
* To use register names with standard convension, please use SPU0_CRC_DATA24.
*/
#define SPU0_DATA24_CRC (SPU0_CRC_DATA24)

/** \brief 3EC, Monitor CRC Register */
#define SPU0_CRC_DATA25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003ECu)
/** Alias (User Manual Name) for SPU0_CRC_DATA25.
* To use register names with standard convension, please use SPU0_CRC_DATA25.
*/
#define SPU0_DATA25_CRC (SPU0_CRC_DATA25)

/** \brief 3F0, Monitor CRC Register */
#define SPU0_CRC_DATA26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003F0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA26.
* To use register names with standard convension, please use SPU0_CRC_DATA26.
*/
#define SPU0_DATA26_CRC (SPU0_CRC_DATA26)

/** \brief 3F4, Monitor CRC Register */
#define SPU0_CRC_DATA27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003F4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA27.
* To use register names with standard convension, please use SPU0_CRC_DATA27.
*/
#define SPU0_DATA27_CRC (SPU0_CRC_DATA27)

/** \brief 3F8, Monitor CRC Register */
#define SPU0_CRC_DATA28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003F8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA28.
* To use register names with standard convension, please use SPU0_CRC_DATA28.
*/
#define SPU0_DATA28_CRC (SPU0_CRC_DATA28)

/** \brief 3FC, Monitor CRC Register */
#define SPU0_CRC_DATA29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8003FCu)
/** Alias (User Manual Name) for SPU0_CRC_DATA29.
* To use register names with standard convension, please use SPU0_CRC_DATA29.
*/
#define SPU0_DATA29_CRC (SPU0_CRC_DATA29)

/** \brief 400, Monitor CRC Register */
#define SPU0_CRC_DATA30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800400u)
/** Alias (User Manual Name) for SPU0_CRC_DATA30.
* To use register names with standard convension, please use SPU0_CRC_DATA30.
*/
#define SPU0_DATA30_CRC (SPU0_CRC_DATA30)

/** \brief 404, Monitor CRC Register */
#define SPU0_CRC_DATA31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800404u)
/** Alias (User Manual Name) for SPU0_CRC_DATA31.
* To use register names with standard convension, please use SPU0_CRC_DATA31.
*/
#define SPU0_DATA31_CRC (SPU0_CRC_DATA31)

/** \brief 408, Monitor CRC Register */
#define SPU0_CRC_DATA32 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800408u)
/** Alias (User Manual Name) for SPU0_CRC_DATA32.
* To use register names with standard convension, please use SPU0_CRC_DATA32.
*/
#define SPU0_DATA32_CRC (SPU0_CRC_DATA32)

/** \brief 40C, Monitor CRC Register */
#define SPU0_CRC_DATA33 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80040Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA33.
* To use register names with standard convension, please use SPU0_CRC_DATA33.
*/
#define SPU0_DATA33_CRC (SPU0_CRC_DATA33)

/** \brief 410, Monitor CRC Register */
#define SPU0_CRC_DATA34 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800410u)
/** Alias (User Manual Name) for SPU0_CRC_DATA34.
* To use register names with standard convension, please use SPU0_CRC_DATA34.
*/
#define SPU0_DATA34_CRC (SPU0_CRC_DATA34)

/** \brief 414, Monitor CRC Register */
#define SPU0_CRC_DATA35 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800414u)
/** Alias (User Manual Name) for SPU0_CRC_DATA35.
* To use register names with standard convension, please use SPU0_CRC_DATA35.
*/
#define SPU0_DATA35_CRC (SPU0_CRC_DATA35)

/** \brief 418, Monitor CRC Register */
#define SPU0_CRC_DATA36 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800418u)
/** Alias (User Manual Name) for SPU0_CRC_DATA36.
* To use register names with standard convension, please use SPU0_CRC_DATA36.
*/
#define SPU0_DATA36_CRC (SPU0_CRC_DATA36)

/** \brief 41C, Monitor CRC Register */
#define SPU0_CRC_DATA37 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80041Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA37.
* To use register names with standard convension, please use SPU0_CRC_DATA37.
*/
#define SPU0_DATA37_CRC (SPU0_CRC_DATA37)

/** \brief 420, Monitor CRC Register */
#define SPU0_CRC_DATA38 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800420u)
/** Alias (User Manual Name) for SPU0_CRC_DATA38.
* To use register names with standard convension, please use SPU0_CRC_DATA38.
*/
#define SPU0_DATA38_CRC (SPU0_CRC_DATA38)

/** \brief 424, Monitor CRC Register */
#define SPU0_CRC_DATA39 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800424u)
/** Alias (User Manual Name) for SPU0_CRC_DATA39.
* To use register names with standard convension, please use SPU0_CRC_DATA39.
*/
#define SPU0_DATA39_CRC (SPU0_CRC_DATA39)

/** \brief 428, Monitor CRC Register */
#define SPU0_CRC_DATA40 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800428u)
/** Alias (User Manual Name) for SPU0_CRC_DATA40.
* To use register names with standard convension, please use SPU0_CRC_DATA40.
*/
#define SPU0_DATA40_CRC (SPU0_CRC_DATA40)

/** \brief 42C, Monitor CRC Register */
#define SPU0_CRC_DATA41 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80042Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA41.
* To use register names with standard convension, please use SPU0_CRC_DATA41.
*/
#define SPU0_DATA41_CRC (SPU0_CRC_DATA41)

/** \brief 430, Monitor CRC Register */
#define SPU0_CRC_DATA42 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800430u)
/** Alias (User Manual Name) for SPU0_CRC_DATA42.
* To use register names with standard convension, please use SPU0_CRC_DATA42.
*/
#define SPU0_DATA42_CRC (SPU0_CRC_DATA42)

/** \brief 434, Monitor CRC Register */
#define SPU0_CRC_DATA43 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800434u)
/** Alias (User Manual Name) for SPU0_CRC_DATA43.
* To use register names with standard convension, please use SPU0_CRC_DATA43.
*/
#define SPU0_DATA43_CRC (SPU0_CRC_DATA43)

/** \brief 438, Monitor CRC Register */
#define SPU0_CRC_DATA44 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800438u)
/** Alias (User Manual Name) for SPU0_CRC_DATA44.
* To use register names with standard convension, please use SPU0_CRC_DATA44.
*/
#define SPU0_DATA44_CRC (SPU0_CRC_DATA44)

/** \brief 43C, Monitor CRC Register */
#define SPU0_CRC_DATA45 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80043Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA45.
* To use register names with standard convension, please use SPU0_CRC_DATA45.
*/
#define SPU0_DATA45_CRC (SPU0_CRC_DATA45)

/** \brief 440, Monitor CRC Register */
#define SPU0_CRC_DATA46 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800440u)
/** Alias (User Manual Name) for SPU0_CRC_DATA46.
* To use register names with standard convension, please use SPU0_CRC_DATA46.
*/
#define SPU0_DATA46_CRC (SPU0_CRC_DATA46)

/** \brief 444, Monitor CRC Register */
#define SPU0_CRC_DATA47 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800444u)
/** Alias (User Manual Name) for SPU0_CRC_DATA47.
* To use register names with standard convension, please use SPU0_CRC_DATA47.
*/
#define SPU0_DATA47_CRC (SPU0_CRC_DATA47)

/** \brief 448, Monitor CRC Register */
#define SPU0_CRC_DATA48 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800448u)
/** Alias (User Manual Name) for SPU0_CRC_DATA48.
* To use register names with standard convension, please use SPU0_CRC_DATA48.
*/
#define SPU0_DATA48_CRC (SPU0_CRC_DATA48)

/** \brief 44C, Monitor CRC Register */
#define SPU0_CRC_DATA49 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80044Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA49.
* To use register names with standard convension, please use SPU0_CRC_DATA49.
*/
#define SPU0_DATA49_CRC (SPU0_CRC_DATA49)

/** \brief 450, Monitor CRC Register */
#define SPU0_CRC_DATA50 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800450u)
/** Alias (User Manual Name) for SPU0_CRC_DATA50.
* To use register names with standard convension, please use SPU0_CRC_DATA50.
*/
#define SPU0_DATA50_CRC (SPU0_CRC_DATA50)

/** \brief 454, Monitor CRC Register */
#define SPU0_CRC_DATA51 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800454u)
/** Alias (User Manual Name) for SPU0_CRC_DATA51.
* To use register names with standard convension, please use SPU0_CRC_DATA51.
*/
#define SPU0_DATA51_CRC (SPU0_CRC_DATA51)

/** \brief 458, Monitor CRC Register */
#define SPU0_CRC_DATA52 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800458u)
/** Alias (User Manual Name) for SPU0_CRC_DATA52.
* To use register names with standard convension, please use SPU0_CRC_DATA52.
*/
#define SPU0_DATA52_CRC (SPU0_CRC_DATA52)

/** \brief 45C, Monitor CRC Register */
#define SPU0_CRC_DATA53 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80045Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA53.
* To use register names with standard convension, please use SPU0_CRC_DATA53.
*/
#define SPU0_DATA53_CRC (SPU0_CRC_DATA53)

/** \brief 460, Monitor CRC Register */
#define SPU0_CRC_DATA54 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800460u)
/** Alias (User Manual Name) for SPU0_CRC_DATA54.
* To use register names with standard convension, please use SPU0_CRC_DATA54.
*/
#define SPU0_DATA54_CRC (SPU0_CRC_DATA54)

/** \brief 464, Monitor CRC Register */
#define SPU0_CRC_DATA55 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800464u)
/** Alias (User Manual Name) for SPU0_CRC_DATA55.
* To use register names with standard convension, please use SPU0_CRC_DATA55.
*/
#define SPU0_DATA55_CRC (SPU0_CRC_DATA55)

/** \brief 468, Monitor CRC Register */
#define SPU0_CRC_DATA56 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800468u)
/** Alias (User Manual Name) for SPU0_CRC_DATA56.
* To use register names with standard convension, please use SPU0_CRC_DATA56.
*/
#define SPU0_DATA56_CRC (SPU0_CRC_DATA56)

/** \brief 46C, Monitor CRC Register */
#define SPU0_CRC_DATA57 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80046Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA57.
* To use register names with standard convension, please use SPU0_CRC_DATA57.
*/
#define SPU0_DATA57_CRC (SPU0_CRC_DATA57)

/** \brief 470, Monitor CRC Register */
#define SPU0_CRC_DATA58 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800470u)
/** Alias (User Manual Name) for SPU0_CRC_DATA58.
* To use register names with standard convension, please use SPU0_CRC_DATA58.
*/
#define SPU0_DATA58_CRC (SPU0_CRC_DATA58)

/** \brief 474, Monitor CRC Register */
#define SPU0_CRC_DATA59 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800474u)
/** Alias (User Manual Name) for SPU0_CRC_DATA59.
* To use register names with standard convension, please use SPU0_CRC_DATA59.
*/
#define SPU0_DATA59_CRC (SPU0_CRC_DATA59)

/** \brief 478, Monitor CRC Register */
#define SPU0_CRC_DATA60 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800478u)
/** Alias (User Manual Name) for SPU0_CRC_DATA60.
* To use register names with standard convension, please use SPU0_CRC_DATA60.
*/
#define SPU0_DATA60_CRC (SPU0_CRC_DATA60)

/** \brief 47C, Monitor CRC Register */
#define SPU0_CRC_DATA61 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80047Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA61.
* To use register names with standard convension, please use SPU0_CRC_DATA61.
*/
#define SPU0_DATA61_CRC (SPU0_CRC_DATA61)

/** \brief 480, Monitor CRC Register */
#define SPU0_CRC_DATA62 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800480u)
/** Alias (User Manual Name) for SPU0_CRC_DATA62.
* To use register names with standard convension, please use SPU0_CRC_DATA62.
*/
#define SPU0_DATA62_CRC (SPU0_CRC_DATA62)

/** \brief 484, Monitor CRC Register */
#define SPU0_CRC_DATA63 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800484u)
/** Alias (User Manual Name) for SPU0_CRC_DATA63.
* To use register names with standard convension, please use SPU0_CRC_DATA63.
*/
#define SPU0_DATA63_CRC (SPU0_CRC_DATA63)

/** \brief 488, Monitor CRC Register */
#define SPU0_CRC_DATA64 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800488u)
/** Alias (User Manual Name) for SPU0_CRC_DATA64.
* To use register names with standard convension, please use SPU0_CRC_DATA64.
*/
#define SPU0_DATA64_CRC (SPU0_CRC_DATA64)

/** \brief 48C, Monitor CRC Register */
#define SPU0_CRC_DATA65 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80048Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA65.
* To use register names with standard convension, please use SPU0_CRC_DATA65.
*/
#define SPU0_DATA65_CRC (SPU0_CRC_DATA65)

/** \brief 490, Monitor CRC Register */
#define SPU0_CRC_DATA66 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800490u)
/** Alias (User Manual Name) for SPU0_CRC_DATA66.
* To use register names with standard convension, please use SPU0_CRC_DATA66.
*/
#define SPU0_DATA66_CRC (SPU0_CRC_DATA66)

/** \brief 494, Monitor CRC Register */
#define SPU0_CRC_DATA67 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800494u)
/** Alias (User Manual Name) for SPU0_CRC_DATA67.
* To use register names with standard convension, please use SPU0_CRC_DATA67.
*/
#define SPU0_DATA67_CRC (SPU0_CRC_DATA67)

/** \brief 498, Monitor CRC Register */
#define SPU0_CRC_DATA68 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA800498u)
/** Alias (User Manual Name) for SPU0_CRC_DATA68.
* To use register names with standard convension, please use SPU0_CRC_DATA68.
*/
#define SPU0_DATA68_CRC (SPU0_CRC_DATA68)

/** \brief 49C, Monitor CRC Register */
#define SPU0_CRC_DATA69 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA80049Cu)
/** Alias (User Manual Name) for SPU0_CRC_DATA69.
* To use register names with standard convension, please use SPU0_CRC_DATA69.
*/
#define SPU0_DATA69_CRC (SPU0_CRC_DATA69)

/** \brief 4A0, Monitor CRC Register */
#define SPU0_CRC_DATA70 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004A0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA70.
* To use register names with standard convension, please use SPU0_CRC_DATA70.
*/
#define SPU0_DATA70_CRC (SPU0_CRC_DATA70)

/** \brief 4A4, Monitor CRC Register */
#define SPU0_CRC_DATA71 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004A4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA71.
* To use register names with standard convension, please use SPU0_CRC_DATA71.
*/
#define SPU0_DATA71_CRC (SPU0_CRC_DATA71)

/** \brief 4A8, Monitor CRC Register */
#define SPU0_CRC_DATA72 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004A8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA72.
* To use register names with standard convension, please use SPU0_CRC_DATA72.
*/
#define SPU0_DATA72_CRC (SPU0_CRC_DATA72)

/** \brief 4AC, Monitor CRC Register */
#define SPU0_CRC_DATA73 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004ACu)
/** Alias (User Manual Name) for SPU0_CRC_DATA73.
* To use register names with standard convension, please use SPU0_CRC_DATA73.
*/
#define SPU0_DATA73_CRC (SPU0_CRC_DATA73)

/** \brief 4B0, Monitor CRC Register */
#define SPU0_CRC_DATA74 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004B0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA74.
* To use register names with standard convension, please use SPU0_CRC_DATA74.
*/
#define SPU0_DATA74_CRC (SPU0_CRC_DATA74)

/** \brief 4B4, Monitor CRC Register */
#define SPU0_CRC_DATA75 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004B4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA75.
* To use register names with standard convension, please use SPU0_CRC_DATA75.
*/
#define SPU0_DATA75_CRC (SPU0_CRC_DATA75)

/** \brief 4B8, Monitor CRC Register */
#define SPU0_CRC_DATA76 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004B8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA76.
* To use register names with standard convension, please use SPU0_CRC_DATA76.
*/
#define SPU0_DATA76_CRC (SPU0_CRC_DATA76)

/** \brief 4BC, Monitor CRC Register */
#define SPU0_CRC_DATA77 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004BCu)
/** Alias (User Manual Name) for SPU0_CRC_DATA77.
* To use register names with standard convension, please use SPU0_CRC_DATA77.
*/
#define SPU0_DATA77_CRC (SPU0_CRC_DATA77)

/** \brief 4C0, Monitor CRC Register */
#define SPU0_CRC_DATA78 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004C0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA78.
* To use register names with standard convension, please use SPU0_CRC_DATA78.
*/
#define SPU0_DATA78_CRC (SPU0_CRC_DATA78)

/** \brief 4C4, Monitor CRC Register */
#define SPU0_CRC_DATA79 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004C4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA79.
* To use register names with standard convension, please use SPU0_CRC_DATA79.
*/
#define SPU0_DATA79_CRC (SPU0_CRC_DATA79)

/** \brief 4C8, Monitor CRC Register */
#define SPU0_CRC_DATA80 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004C8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA80.
* To use register names with standard convension, please use SPU0_CRC_DATA80.
*/
#define SPU0_DATA80_CRC (SPU0_CRC_DATA80)

/** \brief 4CC, Monitor CRC Register */
#define SPU0_CRC_DATA81 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004CCu)
/** Alias (User Manual Name) for SPU0_CRC_DATA81.
* To use register names with standard convension, please use SPU0_CRC_DATA81.
*/
#define SPU0_DATA81_CRC (SPU0_CRC_DATA81)

/** \brief 4D0, Monitor CRC Register */
#define SPU0_CRC_DATA82 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004D0u)
/** Alias (User Manual Name) for SPU0_CRC_DATA82.
* To use register names with standard convension, please use SPU0_CRC_DATA82.
*/
#define SPU0_DATA82_CRC (SPU0_CRC_DATA82)

/** \brief 4D4, Monitor CRC Register */
#define SPU0_CRC_DATA83 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004D4u)
/** Alias (User Manual Name) for SPU0_CRC_DATA83.
* To use register names with standard convension, please use SPU0_CRC_DATA83.
*/
#define SPU0_DATA83_CRC (SPU0_CRC_DATA83)

/** \brief 4D8, Monitor CRC Register */
#define SPU0_CRC_DATA84 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004D8u)
/** Alias (User Manual Name) for SPU0_CRC_DATA84.
* To use register names with standard convension, please use SPU0_CRC_DATA84.
*/
#define SPU0_DATA84_CRC (SPU0_CRC_DATA84)

/** \brief 4DC, Monitor CRC Register */
#define SPU0_CRC_DATA85 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFA8004DCu)
/** Alias (User Manual Name) for SPU0_CRC_DATA85.
* To use register names with standard convension, please use SPU0_CRC_DATA85.
*/
#define SPU0_DATA85_CRC (SPU0_CRC_DATA85)

/** \brief 500, Monitor CRC Register */
#define SPU0_CRC_CTRL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800500u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL0.
* To use register names with standard convension, please use SPU0_CRC_CTRL0.
*/
#define SPU0_CTRL0_CRC (SPU0_CRC_CTRL0)

/** \brief 504, Monitor CRC Register */
#define SPU0_CRC_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800504u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL1.
* To use register names with standard convension, please use SPU0_CRC_CTRL1.
*/
#define SPU0_CTRL1_CRC (SPU0_CRC_CTRL1)

/** \brief 508, Monitor CRC Register */
#define SPU0_CRC_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800508u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL2.
* To use register names with standard convension, please use SPU0_CRC_CTRL2.
*/
#define SPU0_CTRL2_CRC (SPU0_CRC_CTRL2)

/** \brief 50C, Monitor CRC Register */
#define SPU0_CRC_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA80050Cu)
/** Alias (User Manual Name) for SPU0_CRC_CTRL3.
* To use register names with standard convension, please use SPU0_CRC_CTRL3.
*/
#define SPU0_CTRL3_CRC (SPU0_CRC_CTRL3)

/** \brief 510, Monitor CRC Register */
#define SPU0_CRC_CTRL4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800510u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL4.
* To use register names with standard convension, please use SPU0_CRC_CTRL4.
*/
#define SPU0_CTRL4_CRC (SPU0_CRC_CTRL4)

/** \brief 514, Monitor CRC Register */
#define SPU0_CRC_CTRL5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800514u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL5.
* To use register names with standard convension, please use SPU0_CRC_CTRL5.
*/
#define SPU0_CTRL5_CRC (SPU0_CRC_CTRL5)

/** \brief 518, Monitor CRC Register */
#define SPU0_CRC_CTRL6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800518u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL6.
* To use register names with standard convension, please use SPU0_CRC_CTRL6.
*/
#define SPU0_CTRL6_CRC (SPU0_CRC_CTRL6)

/** \brief 51C, Monitor CRC Register */
#define SPU0_CRC_CTRL7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA80051Cu)
/** Alias (User Manual Name) for SPU0_CRC_CTRL7.
* To use register names with standard convension, please use SPU0_CRC_CTRL7.
*/
#define SPU0_CTRL7_CRC (SPU0_CRC_CTRL7)

/** \brief 520, Monitor CRC Register */
#define SPU0_CRC_CTRL8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800520u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL8.
* To use register names with standard convension, please use SPU0_CRC_CTRL8.
*/
#define SPU0_CTRL8_CRC (SPU0_CRC_CTRL8)

/** \brief 524, Monitor CRC Register */
#define SPU0_CRC_CTRL9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800524u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL9.
* To use register names with standard convension, please use SPU0_CRC_CTRL9.
*/
#define SPU0_CTRL9_CRC (SPU0_CRC_CTRL9)

/** \brief 528, Monitor CRC Register */
#define SPU0_CRC_CTRL10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800528u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL10.
* To use register names with standard convension, please use SPU0_CRC_CTRL10.
*/
#define SPU0_CTRL10_CRC (SPU0_CRC_CTRL10)

/** \brief 52C, Monitor CRC Register */
#define SPU0_CRC_CTRL11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA80052Cu)
/** Alias (User Manual Name) for SPU0_CRC_CTRL11.
* To use register names with standard convension, please use SPU0_CRC_CTRL11.
*/
#define SPU0_CTRL11_CRC (SPU0_CRC_CTRL11)

/** \brief 530, Monitor CRC Register */
#define SPU0_CRC_CTRL12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800530u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL12.
* To use register names with standard convension, please use SPU0_CRC_CTRL12.
*/
#define SPU0_CTRL12_CRC (SPU0_CRC_CTRL12)

/** \brief 534, Monitor CRC Register */
#define SPU0_CRC_CTRL13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800534u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL13.
* To use register names with standard convension, please use SPU0_CRC_CTRL13.
*/
#define SPU0_CTRL13_CRC (SPU0_CRC_CTRL13)

/** \brief 538, Monitor CRC Register */
#define SPU0_CRC_CTRL14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800538u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL14.
* To use register names with standard convension, please use SPU0_CRC_CTRL14.
*/
#define SPU0_CTRL14_CRC (SPU0_CRC_CTRL14)

/** \brief 53C, Monitor CRC Register */
#define SPU0_CRC_CTRL15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA80053Cu)
/** Alias (User Manual Name) for SPU0_CRC_CTRL15.
* To use register names with standard convension, please use SPU0_CRC_CTRL15.
*/
#define SPU0_CTRL15_CRC (SPU0_CRC_CTRL15)

/** \brief 540, Monitor CRC Register */
#define SPU0_CRC_CTRL16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800540u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL16.
* To use register names with standard convension, please use SPU0_CRC_CTRL16.
*/
#define SPU0_CTRL16_CRC (SPU0_CRC_CTRL16)

/** \brief 544, Monitor CRC Register */
#define SPU0_CRC_CTRL17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800544u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL17.
* To use register names with standard convension, please use SPU0_CRC_CTRL17.
*/
#define SPU0_CTRL17_CRC (SPU0_CRC_CTRL17)

/** \brief 548, Monitor CRC Register */
#define SPU0_CRC_CTRL18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800548u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL18.
* To use register names with standard convension, please use SPU0_CRC_CTRL18.
*/
#define SPU0_CTRL18_CRC (SPU0_CRC_CTRL18)

/** \brief 54C, Monitor CRC Register */
#define SPU0_CRC_CTRL19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA80054Cu)
/** Alias (User Manual Name) for SPU0_CRC_CTRL19.
* To use register names with standard convension, please use SPU0_CRC_CTRL19.
*/
#define SPU0_CTRL19_CRC (SPU0_CRC_CTRL19)

/** \brief 550, Monitor CRC Register */
#define SPU0_CRC_CTRL20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800550u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL20.
* To use register names with standard convension, please use SPU0_CRC_CTRL20.
*/
#define SPU0_CTRL20_CRC (SPU0_CRC_CTRL20)

/** \brief 554, Monitor CRC Register */
#define SPU0_CRC_CTRL21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800554u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL21.
* To use register names with standard convension, please use SPU0_CRC_CTRL21.
*/
#define SPU0_CTRL21_CRC (SPU0_CRC_CTRL21)

/** \brief 558, Monitor CRC Register */
#define SPU0_CRC_CTRL22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800558u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL22.
* To use register names with standard convension, please use SPU0_CRC_CTRL22.
*/
#define SPU0_CTRL22_CRC (SPU0_CRC_CTRL22)

/** \brief 55C, Monitor CRC Register */
#define SPU0_CRC_CTRL23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA80055Cu)
/** Alias (User Manual Name) for SPU0_CRC_CTRL23.
* To use register names with standard convension, please use SPU0_CRC_CTRL23.
*/
#define SPU0_CTRL23_CRC (SPU0_CRC_CTRL23)

/** \brief 560, Monitor CRC Register */
#define SPU0_CRC_CTRL24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFA800560u)
/** Alias (User Manual Name) for SPU0_CRC_CTRL24.
* To use register names with standard convension, please use SPU0_CRC_CTRL24.
*/
#define SPU0_CTRL24_CRC (SPU0_CRC_CTRL24)

/** \brief 7E0, User OCDS Trace Control */
#define SPU0_USROTC /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_USROTC*)0xFA8007E0u)

/** \brief 7E4, Access Enable Register 0 */
#define SPU0_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ACCEN0*)0xFA8007E4u)

/** \brief 7E8, Access Enable Register 1 */
#define SPU0_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ACCEN1*)0xFA8007E8u)

/** \brief 7EC, OCDS Control and Status */
#define SPU0_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_OCS*)0xFA8007ECu)

/** \brief 7F0, OCDS Debug Access Register */
#define SPU0_ODA /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODA*)0xFA8007F0u)

/** \brief 7F4, Kernel Reset Register 0 */
#define SPU0_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_KRST0*)0xFA8007F4u)

/** \brief 7F8, Kernel Reset Register 1 */
#define SPU0_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_KRST1*)0xFA8007F8u)

/** \brief 7FC, Kernel Reset Clear */
#define SPU0_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_KRSTCLR*)0xFA8007FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Spu_Registers_Cfg_Spu1
 * \{  */
/** \brief 0, Clock Control */
#define SPU1_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CLC*)0xFAC00000u)

/** \brief 4, Module Identification Register */
#define SPU1_MODID /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MODID*)0xFAC00004u)

/** \brief 8, Status and Reporting */
#define SPU1_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_STAT*)0xFAC00008u)

/** \brief 30, Input DMA Configuration */
#define SPU1_ID_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_CONF*)0xFAC00030u)

/** \brief 34, Input DMA Configuration 2 */
#define SPU1_ID_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_CONF2*)0xFAC00034u)

/** \brief 38, Input DMA Configuration: Radar Memory */
#define SPU1_ID_RM_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_CONF*)0xFAC00038u)

/** \brief 3C, Inner Loop Address Offset */
#define SPU1_ID_RM_ILO /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_ILO*)0xFAC0003Cu)

/** \brief 40, Outer Loop Address Offset */
#define SPU1_ID_RM_OLO /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_OLO*)0xFAC00040u)

/** \brief 44, Bin Offset Address Configuration */
#define SPU1_ID_RM_BLO /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_BLO*)0xFAC00044u)

/** \brief 48, Inner and Outer Loop Repeat */
#define SPU1_ID_RM_IOLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_IOLR*)0xFAC00048u)

/** \brief 4C, Bin Loop Repeat */
#define SPU1_ID_RM_BLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_BLR*)0xFAC0004Cu)

/** \brief 50, Spare Configuration Register */
#define SPU1_ID_RM_ACFG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_ACFG0*)0xFAC00050u)

/** \brief 54, Spare Configuration Register */
#define SPU1_ID_RM_ACFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ID_RM_ACFG1*)0xFAC00054u)

/** \brief 58, Partial-Acquisition Counter */
#define SPU1_PACTR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_PACTR*)0xFAC00058u)

/** \brief 5C, Double Pass Configuration */
#define SPU1_DPASS_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_DPASS_CONF*)0xFAC0005Cu)

/** \brief 60, Loader Configuration */
#define SPU1_BE0_LDR_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_LDR_CONF*)0xFAC00060u)

/** \brief 64, Loader Configuration Extended */
#define SPU1_BE0_LDR_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_LDR_CONF2*)0xFAC00064u)

/** \brief 68, Antenna Offset */
#define SPU1_BE0_ANTOFST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFAC00068u)
/** Alias (User Manual Name) for SPU1_BE0_ANTOFST0.
* To use register names with standard convension, please use SPU1_BE0_ANTOFST0.
*/
#define SPU1_BE0_A0_ANTOFST (SPU1_BE0_ANTOFST0)

/** \brief 6C, Antenna Offset */
#define SPU1_BE0_ANTOFST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFAC0006Cu)
/** Alias (User Manual Name) for SPU1_BE0_ANTOFST1.
* To use register names with standard convension, please use SPU1_BE0_ANTOFST1.
*/
#define SPU1_BE0_A1_ANTOFST (SPU1_BE0_ANTOFST1)

/** \brief 70, Antenna Offset */
#define SPU1_BE0_ANTOFST2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFAC00070u)
/** Alias (User Manual Name) for SPU1_BE0_ANTOFST2.
* To use register names with standard convension, please use SPU1_BE0_ANTOFST2.
*/
#define SPU1_BE0_A2_ANTOFST (SPU1_BE0_ANTOFST2)

/** \brief 74, Antenna Offset */
#define SPU1_BE0_ANTOFST3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFAC00074u)
/** Alias (User Manual Name) for SPU1_BE0_ANTOFST3.
* To use register names with standard convension, please use SPU1_BE0_ANTOFST3.
*/
#define SPU1_BE0_A3_ANTOFST (SPU1_BE0_ANTOFST3)

/** \brief 78, Unloader Configuration */
#define SPU1_BE0_UNLDR_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF*)0xFAC00078u)

/** \brief 7C, Unloader Configuration 2 */
#define SPU1_BE0_UNLDR_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF2*)0xFAC0007Cu)

/** \brief 80, Spare Configuration Register */
#define SPU1_BE0_UNLDR_ACFG /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_ACFG*)0xFAC00080u)

/** \brief 84, Output Data Processor Configuration */
#define SPU1_BE0_ODP_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ODP_CONF*)0xFAC00084u)

/** \brief 88, NCI Control */
#define SPU1_BE0_NCICTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_NCICTRL*)0xFAC00088u)

/** \brief 8C, Summation Unit Control */
#define SPU1_BE0_SUMCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_SUMCTRL*)0xFAC0008Cu)

/** \brief 90, Power Summation */
#define SPU1_BE0_PWRSUM /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_PWRSUM*)0xFAC00090u)

/** \brief 94, Power Information Channel Control */
#define SPU1_BE0_PWRCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_PWRCTRL*)0xFAC00094u)

/** \brief 98, CFAR Module Control */
#define SPU1_BE0_CFARCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_CFARCTRL*)0xFAC00098u)

/** \brief 9C, Sideband Control */
#define SPU1_BE0_SBCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_SBCTRL*)0xFAC0009Cu)

/** \brief A0, Loader Configuration */
#define SPU1_BE1_LDR_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_LDR_CONF*)0xFAC000A0u)

/** \brief A4, Loader Configuration Extended */
#define SPU1_BE1_LDR_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_LDR_CONF2*)0xFAC000A4u)

/** \brief A8, Antenna Offset */
#define SPU1_BE1_ANTOFST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFAC000A8u)
/** Alias (User Manual Name) for SPU1_BE1_ANTOFST0.
* To use register names with standard convension, please use SPU1_BE1_ANTOFST0.
*/
#define SPU1_BE1_A0_ANTOFST (SPU1_BE1_ANTOFST0)

/** \brief AC, Antenna Offset */
#define SPU1_BE1_ANTOFST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFAC000ACu)
/** Alias (User Manual Name) for SPU1_BE1_ANTOFST1.
* To use register names with standard convension, please use SPU1_BE1_ANTOFST1.
*/
#define SPU1_BE1_A1_ANTOFST (SPU1_BE1_ANTOFST1)

/** \brief B0, Antenna Offset */
#define SPU1_BE1_ANTOFST2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFAC000B0u)
/** Alias (User Manual Name) for SPU1_BE1_ANTOFST2.
* To use register names with standard convension, please use SPU1_BE1_ANTOFST2.
*/
#define SPU1_BE1_A2_ANTOFST (SPU1_BE1_ANTOFST2)

/** \brief B4, Antenna Offset */
#define SPU1_BE1_ANTOFST3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ANTOFST*)0xFAC000B4u)
/** Alias (User Manual Name) for SPU1_BE1_ANTOFST3.
* To use register names with standard convension, please use SPU1_BE1_ANTOFST3.
*/
#define SPU1_BE1_A3_ANTOFST (SPU1_BE1_ANTOFST3)

/** \brief B8, Unloader Configuration */
#define SPU1_BE1_UNLDR_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF*)0xFAC000B8u)

/** \brief BC, Unloader Configuration 2 */
#define SPU1_BE1_UNLDR_CONF2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF2*)0xFAC000BCu)

/** \brief C0, Spare Configuration Register */
#define SPU1_BE1_UNLDR_ACFG /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_UNLDR_ACFG*)0xFAC000C0u)

/** \brief C4, Output Data Processor Configuration */
#define SPU1_BE1_ODP_CONF /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_ODP_CONF*)0xFAC000C4u)

/** \brief C8, NCI Control */
#define SPU1_BE1_NCICTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_NCICTRL*)0xFAC000C8u)

/** \brief CC, Summation Unit Control */
#define SPU1_BE1_SUMCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_SUMCTRL*)0xFAC000CCu)

/** \brief D0, Power Summation */
#define SPU1_BE1_PWRSUM /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_PWRSUM*)0xFAC000D0u)

/** \brief D4, Power Information Channel Control */
#define SPU1_BE1_PWRCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_PWRCTRL*)0xFAC000D4u)

/** \brief D8, CFAR Module Control */
#define SPU1_BE1_CFARCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_CFARCTRL*)0xFAC000D8u)

/** \brief DC, Sideband Control */
#define SPU1_BE1_SBCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BE_SBCTRL*)0xFAC000DCu)

/** \brief E0, Bin Rejection Mask */
#define SPU1_BIN_REJ0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000E0u)
/** Alias (User Manual Name) for SPU1_BIN_REJ0.
* To use register names with standard convension, please use SPU1_BIN_REJ0.
*/
#define SPU1_BIN0_REJ (SPU1_BIN_REJ0)

/** \brief E4, Bin Rejection Mask */
#define SPU1_BIN_REJ1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000E4u)
/** Alias (User Manual Name) for SPU1_BIN_REJ1.
* To use register names with standard convension, please use SPU1_BIN_REJ1.
*/
#define SPU1_BIN1_REJ (SPU1_BIN_REJ1)

/** \brief E8, Bin Rejection Mask */
#define SPU1_BIN_REJ2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000E8u)
/** Alias (User Manual Name) for SPU1_BIN_REJ2.
* To use register names with standard convension, please use SPU1_BIN_REJ2.
*/
#define SPU1_BIN2_REJ (SPU1_BIN_REJ2)

/** \brief EC, Bin Rejection Mask */
#define SPU1_BIN_REJ3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000ECu)
/** Alias (User Manual Name) for SPU1_BIN_REJ3.
* To use register names with standard convension, please use SPU1_BIN_REJ3.
*/
#define SPU1_BIN3_REJ (SPU1_BIN_REJ3)

/** \brief F0, Bin Rejection Mask */
#define SPU1_BIN_REJ4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000F0u)
/** Alias (User Manual Name) for SPU1_BIN_REJ4.
* To use register names with standard convension, please use SPU1_BIN_REJ4.
*/
#define SPU1_BIN4_REJ (SPU1_BIN_REJ4)

/** \brief F4, Bin Rejection Mask */
#define SPU1_BIN_REJ5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000F4u)
/** Alias (User Manual Name) for SPU1_BIN_REJ5.
* To use register names with standard convension, please use SPU1_BIN_REJ5.
*/
#define SPU1_BIN5_REJ (SPU1_BIN_REJ5)

/** \brief F8, Bin Rejection Mask */
#define SPU1_BIN_REJ6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000F8u)
/** Alias (User Manual Name) for SPU1_BIN_REJ6.
* To use register names with standard convension, please use SPU1_BIN_REJ6.
*/
#define SPU1_BIN6_REJ (SPU1_BIN_REJ6)

/** \brief FC, Bin Rejection Mask */
#define SPU1_BIN_REJ7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000FCu)
/** Alias (User Manual Name) for SPU1_BIN_REJ7.
* To use register names with standard convension, please use SPU1_BIN_REJ7.
*/
#define SPU1_BIN7_REJ (SPU1_BIN_REJ7)

/** \brief 100, Bin Rejection Mask */
#define SPU1_BIN_REJ8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00100u)
/** Alias (User Manual Name) for SPU1_BIN_REJ8.
* To use register names with standard convension, please use SPU1_BIN_REJ8.
*/
#define SPU1_BIN8_REJ (SPU1_BIN_REJ8)

/** \brief 104, Bin Rejection Mask */
#define SPU1_BIN_REJ9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00104u)
/** Alias (User Manual Name) for SPU1_BIN_REJ9.
* To use register names with standard convension, please use SPU1_BIN_REJ9.
*/
#define SPU1_BIN9_REJ (SPU1_BIN_REJ9)

/** \brief 108, Bin Rejection Mask */
#define SPU1_BIN_REJ10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00108u)
/** Alias (User Manual Name) for SPU1_BIN_REJ10.
* To use register names with standard convension, please use SPU1_BIN_REJ10.
*/
#define SPU1_BIN10_REJ (SPU1_BIN_REJ10)

/** \brief 10C, Bin Rejection Mask */
#define SPU1_BIN_REJ11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0010Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ11.
* To use register names with standard convension, please use SPU1_BIN_REJ11.
*/
#define SPU1_BIN11_REJ (SPU1_BIN_REJ11)

/** \brief 110, Bin Rejection Mask */
#define SPU1_BIN_REJ12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00110u)
/** Alias (User Manual Name) for SPU1_BIN_REJ12.
* To use register names with standard convension, please use SPU1_BIN_REJ12.
*/
#define SPU1_BIN12_REJ (SPU1_BIN_REJ12)

/** \brief 114, Bin Rejection Mask */
#define SPU1_BIN_REJ13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00114u)
/** Alias (User Manual Name) for SPU1_BIN_REJ13.
* To use register names with standard convension, please use SPU1_BIN_REJ13.
*/
#define SPU1_BIN13_REJ (SPU1_BIN_REJ13)

/** \brief 118, Bin Rejection Mask */
#define SPU1_BIN_REJ14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00118u)
/** Alias (User Manual Name) for SPU1_BIN_REJ14.
* To use register names with standard convension, please use SPU1_BIN_REJ14.
*/
#define SPU1_BIN14_REJ (SPU1_BIN_REJ14)

/** \brief 11C, Bin Rejection Mask */
#define SPU1_BIN_REJ15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0011Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ15.
* To use register names with standard convension, please use SPU1_BIN_REJ15.
*/
#define SPU1_BIN15_REJ (SPU1_BIN_REJ15)

/** \brief 120, Bin Rejection Mask */
#define SPU1_BIN_REJ16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00120u)
/** Alias (User Manual Name) for SPU1_BIN_REJ16.
* To use register names with standard convension, please use SPU1_BIN_REJ16.
*/
#define SPU1_BIN16_REJ (SPU1_BIN_REJ16)

/** \brief 124, Bin Rejection Mask */
#define SPU1_BIN_REJ17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00124u)
/** Alias (User Manual Name) for SPU1_BIN_REJ17.
* To use register names with standard convension, please use SPU1_BIN_REJ17.
*/
#define SPU1_BIN17_REJ (SPU1_BIN_REJ17)

/** \brief 128, Bin Rejection Mask */
#define SPU1_BIN_REJ18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00128u)
/** Alias (User Manual Name) for SPU1_BIN_REJ18.
* To use register names with standard convension, please use SPU1_BIN_REJ18.
*/
#define SPU1_BIN18_REJ (SPU1_BIN_REJ18)

/** \brief 12C, Bin Rejection Mask */
#define SPU1_BIN_REJ19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0012Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ19.
* To use register names with standard convension, please use SPU1_BIN_REJ19.
*/
#define SPU1_BIN19_REJ (SPU1_BIN_REJ19)

/** \brief 130, Bin Rejection Mask */
#define SPU1_BIN_REJ20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00130u)
/** Alias (User Manual Name) for SPU1_BIN_REJ20.
* To use register names with standard convension, please use SPU1_BIN_REJ20.
*/
#define SPU1_BIN20_REJ (SPU1_BIN_REJ20)

/** \brief 134, Bin Rejection Mask */
#define SPU1_BIN_REJ21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00134u)
/** Alias (User Manual Name) for SPU1_BIN_REJ21.
* To use register names with standard convension, please use SPU1_BIN_REJ21.
*/
#define SPU1_BIN21_REJ (SPU1_BIN_REJ21)

/** \brief 138, Bin Rejection Mask */
#define SPU1_BIN_REJ22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00138u)
/** Alias (User Manual Name) for SPU1_BIN_REJ22.
* To use register names with standard convension, please use SPU1_BIN_REJ22.
*/
#define SPU1_BIN22_REJ (SPU1_BIN_REJ22)

/** \brief 13C, Bin Rejection Mask */
#define SPU1_BIN_REJ23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0013Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ23.
* To use register names with standard convension, please use SPU1_BIN_REJ23.
*/
#define SPU1_BIN23_REJ (SPU1_BIN_REJ23)

/** \brief 140, Bin Rejection Mask */
#define SPU1_BIN_REJ24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00140u)
/** Alias (User Manual Name) for SPU1_BIN_REJ24.
* To use register names with standard convension, please use SPU1_BIN_REJ24.
*/
#define SPU1_BIN24_REJ (SPU1_BIN_REJ24)

/** \brief 144, Bin Rejection Mask */
#define SPU1_BIN_REJ25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00144u)
/** Alias (User Manual Name) for SPU1_BIN_REJ25.
* To use register names with standard convension, please use SPU1_BIN_REJ25.
*/
#define SPU1_BIN25_REJ (SPU1_BIN_REJ25)

/** \brief 148, Bin Rejection Mask */
#define SPU1_BIN_REJ26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00148u)
/** Alias (User Manual Name) for SPU1_BIN_REJ26.
* To use register names with standard convension, please use SPU1_BIN_REJ26.
*/
#define SPU1_BIN26_REJ (SPU1_BIN_REJ26)

/** \brief 14C, Bin Rejection Mask */
#define SPU1_BIN_REJ27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0014Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ27.
* To use register names with standard convension, please use SPU1_BIN_REJ27.
*/
#define SPU1_BIN27_REJ (SPU1_BIN_REJ27)

/** \brief 150, Bin Rejection Mask */
#define SPU1_BIN_REJ28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00150u)
/** Alias (User Manual Name) for SPU1_BIN_REJ28.
* To use register names with standard convension, please use SPU1_BIN_REJ28.
*/
#define SPU1_BIN28_REJ (SPU1_BIN_REJ28)

/** \brief 154, Bin Rejection Mask */
#define SPU1_BIN_REJ29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00154u)
/** Alias (User Manual Name) for SPU1_BIN_REJ29.
* To use register names with standard convension, please use SPU1_BIN_REJ29.
*/
#define SPU1_BIN29_REJ (SPU1_BIN_REJ29)

/** \brief 158, Bin Rejection Mask */
#define SPU1_BIN_REJ30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00158u)
/** Alias (User Manual Name) for SPU1_BIN_REJ30.
* To use register names with standard convension, please use SPU1_BIN_REJ30.
*/
#define SPU1_BIN30_REJ (SPU1_BIN_REJ30)

/** \brief 15C, Bin Rejection Mask */
#define SPU1_BIN_REJ31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0015Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ31.
* To use register names with standard convension, please use SPU1_BIN_REJ31.
*/
#define SPU1_BIN31_REJ (SPU1_BIN_REJ31)

/** \brief 160, Bin Rejection Mask */
#define SPU1_BIN_REJ32 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00160u)
/** Alias (User Manual Name) for SPU1_BIN_REJ32.
* To use register names with standard convension, please use SPU1_BIN_REJ32.
*/
#define SPU1_BIN32_REJ (SPU1_BIN_REJ32)

/** \brief 164, Bin Rejection Mask */
#define SPU1_BIN_REJ33 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00164u)
/** Alias (User Manual Name) for SPU1_BIN_REJ33.
* To use register names with standard convension, please use SPU1_BIN_REJ33.
*/
#define SPU1_BIN33_REJ (SPU1_BIN_REJ33)

/** \brief 168, Bin Rejection Mask */
#define SPU1_BIN_REJ34 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00168u)
/** Alias (User Manual Name) for SPU1_BIN_REJ34.
* To use register names with standard convension, please use SPU1_BIN_REJ34.
*/
#define SPU1_BIN34_REJ (SPU1_BIN_REJ34)

/** \brief 16C, Bin Rejection Mask */
#define SPU1_BIN_REJ35 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0016Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ35.
* To use register names with standard convension, please use SPU1_BIN_REJ35.
*/
#define SPU1_BIN35_REJ (SPU1_BIN_REJ35)

/** \brief 170, Bin Rejection Mask */
#define SPU1_BIN_REJ36 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00170u)
/** Alias (User Manual Name) for SPU1_BIN_REJ36.
* To use register names with standard convension, please use SPU1_BIN_REJ36.
*/
#define SPU1_BIN36_REJ (SPU1_BIN_REJ36)

/** \brief 174, Bin Rejection Mask */
#define SPU1_BIN_REJ37 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00174u)
/** Alias (User Manual Name) for SPU1_BIN_REJ37.
* To use register names with standard convension, please use SPU1_BIN_REJ37.
*/
#define SPU1_BIN37_REJ (SPU1_BIN_REJ37)

/** \brief 178, Bin Rejection Mask */
#define SPU1_BIN_REJ38 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00178u)
/** Alias (User Manual Name) for SPU1_BIN_REJ38.
* To use register names with standard convension, please use SPU1_BIN_REJ38.
*/
#define SPU1_BIN38_REJ (SPU1_BIN_REJ38)

/** \brief 17C, Bin Rejection Mask */
#define SPU1_BIN_REJ39 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0017Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ39.
* To use register names with standard convension, please use SPU1_BIN_REJ39.
*/
#define SPU1_BIN39_REJ (SPU1_BIN_REJ39)

/** \brief 180, Bin Rejection Mask */
#define SPU1_BIN_REJ40 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00180u)
/** Alias (User Manual Name) for SPU1_BIN_REJ40.
* To use register names with standard convension, please use SPU1_BIN_REJ40.
*/
#define SPU1_BIN40_REJ (SPU1_BIN_REJ40)

/** \brief 184, Bin Rejection Mask */
#define SPU1_BIN_REJ41 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00184u)
/** Alias (User Manual Name) for SPU1_BIN_REJ41.
* To use register names with standard convension, please use SPU1_BIN_REJ41.
*/
#define SPU1_BIN41_REJ (SPU1_BIN_REJ41)

/** \brief 188, Bin Rejection Mask */
#define SPU1_BIN_REJ42 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00188u)
/** Alias (User Manual Name) for SPU1_BIN_REJ42.
* To use register names with standard convension, please use SPU1_BIN_REJ42.
*/
#define SPU1_BIN42_REJ (SPU1_BIN_REJ42)

/** \brief 18C, Bin Rejection Mask */
#define SPU1_BIN_REJ43 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0018Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ43.
* To use register names with standard convension, please use SPU1_BIN_REJ43.
*/
#define SPU1_BIN43_REJ (SPU1_BIN_REJ43)

/** \brief 190, Bin Rejection Mask */
#define SPU1_BIN_REJ44 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00190u)
/** Alias (User Manual Name) for SPU1_BIN_REJ44.
* To use register names with standard convension, please use SPU1_BIN_REJ44.
*/
#define SPU1_BIN44_REJ (SPU1_BIN_REJ44)

/** \brief 194, Bin Rejection Mask */
#define SPU1_BIN_REJ45 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00194u)
/** Alias (User Manual Name) for SPU1_BIN_REJ45.
* To use register names with standard convension, please use SPU1_BIN_REJ45.
*/
#define SPU1_BIN45_REJ (SPU1_BIN_REJ45)

/** \brief 198, Bin Rejection Mask */
#define SPU1_BIN_REJ46 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00198u)
/** Alias (User Manual Name) for SPU1_BIN_REJ46.
* To use register names with standard convension, please use SPU1_BIN_REJ46.
*/
#define SPU1_BIN46_REJ (SPU1_BIN_REJ46)

/** \brief 19C, Bin Rejection Mask */
#define SPU1_BIN_REJ47 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0019Cu)
/** Alias (User Manual Name) for SPU1_BIN_REJ47.
* To use register names with standard convension, please use SPU1_BIN_REJ47.
*/
#define SPU1_BIN47_REJ (SPU1_BIN_REJ47)

/** \brief 1A0, Bin Rejection Mask */
#define SPU1_BIN_REJ48 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001A0u)
/** Alias (User Manual Name) for SPU1_BIN_REJ48.
* To use register names with standard convension, please use SPU1_BIN_REJ48.
*/
#define SPU1_BIN48_REJ (SPU1_BIN_REJ48)

/** \brief 1A4, Bin Rejection Mask */
#define SPU1_BIN_REJ49 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001A4u)
/** Alias (User Manual Name) for SPU1_BIN_REJ49.
* To use register names with standard convension, please use SPU1_BIN_REJ49.
*/
#define SPU1_BIN49_REJ (SPU1_BIN_REJ49)

/** \brief 1A8, Bin Rejection Mask */
#define SPU1_BIN_REJ50 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001A8u)
/** Alias (User Manual Name) for SPU1_BIN_REJ50.
* To use register names with standard convension, please use SPU1_BIN_REJ50.
*/
#define SPU1_BIN50_REJ (SPU1_BIN_REJ50)

/** \brief 1AC, Bin Rejection Mask */
#define SPU1_BIN_REJ51 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001ACu)
/** Alias (User Manual Name) for SPU1_BIN_REJ51.
* To use register names with standard convension, please use SPU1_BIN_REJ51.
*/
#define SPU1_BIN51_REJ (SPU1_BIN_REJ51)

/** \brief 1B0, Bin Rejection Mask */
#define SPU1_BIN_REJ52 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001B0u)
/** Alias (User Manual Name) for SPU1_BIN_REJ52.
* To use register names with standard convension, please use SPU1_BIN_REJ52.
*/
#define SPU1_BIN52_REJ (SPU1_BIN_REJ52)

/** \brief 1B4, Bin Rejection Mask */
#define SPU1_BIN_REJ53 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001B4u)
/** Alias (User Manual Name) for SPU1_BIN_REJ53.
* To use register names with standard convension, please use SPU1_BIN_REJ53.
*/
#define SPU1_BIN53_REJ (SPU1_BIN_REJ53)

/** \brief 1B8, Bin Rejection Mask */
#define SPU1_BIN_REJ54 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001B8u)
/** Alias (User Manual Name) for SPU1_BIN_REJ54.
* To use register names with standard convension, please use SPU1_BIN_REJ54.
*/
#define SPU1_BIN54_REJ (SPU1_BIN_REJ54)

/** \brief 1BC, Bin Rejection Mask */
#define SPU1_BIN_REJ55 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001BCu)
/** Alias (User Manual Name) for SPU1_BIN_REJ55.
* To use register names with standard convension, please use SPU1_BIN_REJ55.
*/
#define SPU1_BIN55_REJ (SPU1_BIN_REJ55)

/** \brief 1C0, Bin Rejection Mask */
#define SPU1_BIN_REJ56 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001C0u)
/** Alias (User Manual Name) for SPU1_BIN_REJ56.
* To use register names with standard convension, please use SPU1_BIN_REJ56.
*/
#define SPU1_BIN56_REJ (SPU1_BIN_REJ56)

/** \brief 1C4, Bin Rejection Mask */
#define SPU1_BIN_REJ57 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001C4u)
/** Alias (User Manual Name) for SPU1_BIN_REJ57.
* To use register names with standard convension, please use SPU1_BIN_REJ57.
*/
#define SPU1_BIN57_REJ (SPU1_BIN_REJ57)

/** \brief 1C8, Bin Rejection Mask */
#define SPU1_BIN_REJ58 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001C8u)
/** Alias (User Manual Name) for SPU1_BIN_REJ58.
* To use register names with standard convension, please use SPU1_BIN_REJ58.
*/
#define SPU1_BIN58_REJ (SPU1_BIN_REJ58)

/** \brief 1CC, Bin Rejection Mask */
#define SPU1_BIN_REJ59 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001CCu)
/** Alias (User Manual Name) for SPU1_BIN_REJ59.
* To use register names with standard convension, please use SPU1_BIN_REJ59.
*/
#define SPU1_BIN59_REJ (SPU1_BIN_REJ59)

/** \brief 1D0, Bin Rejection Mask */
#define SPU1_BIN_REJ60 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001D0u)
/** Alias (User Manual Name) for SPU1_BIN_REJ60.
* To use register names with standard convension, please use SPU1_BIN_REJ60.
*/
#define SPU1_BIN60_REJ (SPU1_BIN_REJ60)

/** \brief 1D4, Bin Rejection Mask */
#define SPU1_BIN_REJ61 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001D4u)
/** Alias (User Manual Name) for SPU1_BIN_REJ61.
* To use register names with standard convension, please use SPU1_BIN_REJ61.
*/
#define SPU1_BIN61_REJ (SPU1_BIN_REJ61)

/** \brief 1D8, Bin Rejection Mask */
#define SPU1_BIN_REJ62 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001D8u)
/** Alias (User Manual Name) for SPU1_BIN_REJ62.
* To use register names with standard convension, please use SPU1_BIN_REJ62.
*/
#define SPU1_BIN62_REJ (SPU1_BIN_REJ62)

/** \brief 1DC, Bin Rejection Mask */
#define SPU1_BIN_REJ63 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001DCu)
/** Alias (User Manual Name) for SPU1_BIN_REJ63.
* To use register names with standard convension, please use SPU1_BIN_REJ63.
*/
#define SPU1_BIN63_REJ (SPU1_BIN_REJ63)

/** \brief 1E0, Magnitude Approximation Constants */
#define SPU1_MAGAPPROX /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MAGAPPROX*)0xFAC001E0u)

/** \brief 1E4, NCI Antennae Scaling Factor */
#define SPU1_NCI_SCALAR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_NCI_SCALAR0*)0xFAC001E4u)
/** Alias (User Manual Name) for SPU1_NCI_SCALAR0.
* To use register names with standard convension, please use SPU1_NCI_SCALAR0.
*/
#define SPU1_NCISCALAR0 (SPU1_NCI_SCALAR0)

/** \brief 1E8, NCI Antennae Scaling Factor */
#define SPU1_NCI_SCALAR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_NCI_SCALAR1*)0xFAC001E8u)
/** Alias (User Manual Name) for SPU1_NCI_SCALAR1.
* To use register names with standard convension, please use SPU1_NCI_SCALAR1.
*/
#define SPU1_NCISCALAR1 (SPU1_NCI_SCALAR1)

/** \brief 1EC, NCI Antennae Scaling Factor */
#define SPU1_NCI_SCALAR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_NCI_SCALAR2*)0xFAC001ECu)
/** Alias (User Manual Name) for SPU1_NCI_SCALAR2.
* To use register names with standard convension, please use SPU1_NCI_SCALAR2.
*/
#define SPU1_NCISCALAR2 (SPU1_NCI_SCALAR2)

/** \brief 1F0, NCI Antennae Scaling Factor */
#define SPU1_NCI_SCALAR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_NCI_SCALAR3*)0xFAC001F0u)
/** Alias (User Manual Name) for SPU1_NCI_SCALAR3.
* To use register names with standard convension, please use SPU1_NCI_SCALAR3.
*/
#define SPU1_NCISCALAR3 (SPU1_NCI_SCALAR3)

/** \brief 1F4, CFAR Configuration */
#define SPU1_CFAR0_CFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CFAR_CFG1*)0xFAC001F4u)
/** Alias (User Manual Name) for SPU1_CFAR0_CFG1.
* To use register names with standard convension, please use SPU1_CFAR0_CFG1.
*/
#define SPU1_CFARCFG (SPU1_CFAR0_CFG1)

/** \brief 1F8, CFAR Configuration 2 */
#define SPU1_CFAR0_CFG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CFAR_CFG2*)0xFAC001F8u)
/** Alias (User Manual Name) for SPU1_CFAR0_CFG2.
* To use register names with standard convension, please use SPU1_CFAR0_CFG2.
*/
#define SPU1_CFARCFG2 (SPU1_CFAR0_CFG2)

/** \brief 1FC, CFAR Configuration 3 */
#define SPU1_CFAR0_CFG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CFAR_CFG3*)0xFAC001FCu)
/** Alias (User Manual Name) for SPU1_CFAR0_CFG3.
* To use register names with standard convension, please use SPU1_CFAR0_CFG3.
*/
#define SPU1_CFARCFG3 (SPU1_CFAR0_CFG3)

/** \brief 200, Scalar Addition Operand */
#define SPU1_SCALARADD /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SCALARADD*)0xFAC00200u)

/** \brief 204, Scalar Multiplication Operand */
#define SPU1_SCALARMULT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SCALARMULT*)0xFAC00204u)

/** \brief 208, Bin Rejection Unit Control */
#define SPU1_BINREJCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BINREJCTRL*)0xFAC00208u)

/** \brief 20C, Local Maximum Control */
#define SPU1_LCLMAX /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_LCLMAX*)0xFAC0020Cu)

/** \brief 210, Spare Configuration Register  */
#define SPU1_ACFG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ACFG2*)0xFAC00210u)

/** \brief 218, Register CRC */
#define SPU1_REGCRC /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_REGCRC*)0xFAC00218u)

/** \brief 21C, SPU Control */
#define SPU1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CTRL*)0xFAC0021Cu)

/** \brief 220, Dataset Metadata */
#define SPU1_MD0_METADATA /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_METADATA*)0xFAC00220u)

/** \brief 224, Bin Rejection Unit Tracking */
#define SPU1_MD0_BINCOUNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_BINCOUNT*)0xFAC00224u)

/** \brief 228, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00228u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT0.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT0.
*/
#define SPU1_MD0_MASK0_ACCEPT (SPU1_MD0_MASK_ACCEPT0)

/** \brief 22C, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0022Cu)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT1.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT1.
*/
#define SPU1_MD0_MASK1_ACCEPT (SPU1_MD0_MASK_ACCEPT1)

/** \brief 230, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00230u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT2.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT2.
*/
#define SPU1_MD0_MASK2_ACCEPT (SPU1_MD0_MASK_ACCEPT2)

/** \brief 234, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00234u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT3.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT3.
*/
#define SPU1_MD0_MASK3_ACCEPT (SPU1_MD0_MASK_ACCEPT3)

/** \brief 238, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00238u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT4.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT4.
*/
#define SPU1_MD0_MASK4_ACCEPT (SPU1_MD0_MASK_ACCEPT4)

/** \brief 23C, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0023Cu)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT5.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT5.
*/
#define SPU1_MD0_MASK5_ACCEPT (SPU1_MD0_MASK_ACCEPT5)

/** \brief 240, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00240u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT6.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT6.
*/
#define SPU1_MD0_MASK6_ACCEPT (SPU1_MD0_MASK_ACCEPT6)

/** \brief 244, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00244u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT7.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT7.
*/
#define SPU1_MD0_MASK7_ACCEPT (SPU1_MD0_MASK_ACCEPT7)

/** \brief 248, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00248u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT8.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT8.
*/
#define SPU1_MD0_MASK8_ACCEPT (SPU1_MD0_MASK_ACCEPT8)

/** \brief 24C, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0024Cu)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT9.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT9.
*/
#define SPU1_MD0_MASK9_ACCEPT (SPU1_MD0_MASK_ACCEPT9)

/** \brief 250, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00250u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT10.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT10.
*/
#define SPU1_MD0_MASK10_ACCEPT (SPU1_MD0_MASK_ACCEPT10)

/** \brief 254, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00254u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT11.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT11.
*/
#define SPU1_MD0_MASK11_ACCEPT (SPU1_MD0_MASK_ACCEPT11)

/** \brief 258, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00258u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT12.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT12.
*/
#define SPU1_MD0_MASK12_ACCEPT (SPU1_MD0_MASK_ACCEPT12)

/** \brief 25C, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0025Cu)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT13.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT13.
*/
#define SPU1_MD0_MASK13_ACCEPT (SPU1_MD0_MASK_ACCEPT13)

/** \brief 260, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00260u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT14.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT14.
*/
#define SPU1_MD0_MASK14_ACCEPT (SPU1_MD0_MASK_ACCEPT14)

/** \brief 264, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00264u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT15.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT15.
*/
#define SPU1_MD0_MASK15_ACCEPT (SPU1_MD0_MASK_ACCEPT15)

/** \brief 268, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00268u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT16.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT16.
*/
#define SPU1_MD0_MASK16_ACCEPT (SPU1_MD0_MASK_ACCEPT16)

/** \brief 26C, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0026Cu)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT17.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT17.
*/
#define SPU1_MD0_MASK17_ACCEPT (SPU1_MD0_MASK_ACCEPT17)

/** \brief 270, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00270u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT18.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT18.
*/
#define SPU1_MD0_MASK18_ACCEPT (SPU1_MD0_MASK_ACCEPT18)

/** \brief 274, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00274u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT19.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT19.
*/
#define SPU1_MD0_MASK19_ACCEPT (SPU1_MD0_MASK_ACCEPT19)

/** \brief 278, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00278u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT20.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT20.
*/
#define SPU1_MD0_MASK20_ACCEPT (SPU1_MD0_MASK_ACCEPT20)

/** \brief 27C, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0027Cu)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT21.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT21.
*/
#define SPU1_MD0_MASK21_ACCEPT (SPU1_MD0_MASK_ACCEPT21)

/** \brief 280, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00280u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT22.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT22.
*/
#define SPU1_MD0_MASK22_ACCEPT (SPU1_MD0_MASK_ACCEPT22)

/** \brief 284, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00284u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT23.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT23.
*/
#define SPU1_MD0_MASK23_ACCEPT (SPU1_MD0_MASK_ACCEPT23)

/** \brief 288, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00288u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT24.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT24.
*/
#define SPU1_MD0_MASK24_ACCEPT (SPU1_MD0_MASK_ACCEPT24)

/** \brief 28C, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0028Cu)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT25.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT25.
*/
#define SPU1_MD0_MASK25_ACCEPT (SPU1_MD0_MASK_ACCEPT25)

/** \brief 290, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00290u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT26.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT26.
*/
#define SPU1_MD0_MASK26_ACCEPT (SPU1_MD0_MASK_ACCEPT26)

/** \brief 294, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00294u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT27.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT27.
*/
#define SPU1_MD0_MASK27_ACCEPT (SPU1_MD0_MASK_ACCEPT27)

/** \brief 298, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00298u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT28.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT28.
*/
#define SPU1_MD0_MASK28_ACCEPT (SPU1_MD0_MASK_ACCEPT28)

/** \brief 29C, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0029Cu)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT29.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT29.
*/
#define SPU1_MD0_MASK29_ACCEPT (SPU1_MD0_MASK_ACCEPT29)

/** \brief 2A0, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002A0u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT30.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT30.
*/
#define SPU1_MD0_MASK30_ACCEPT (SPU1_MD0_MASK_ACCEPT30)

/** \brief 2A4, Bin Acceptance  Mask */
#define SPU1_MD0_MASK_ACCEPT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002A4u)
/** Alias (User Manual Name) for SPU1_MD0_MASK_ACCEPT31.
* To use register names with standard convension, please use SPU1_MD0_MASK_ACCEPT31.
*/
#define SPU1_MD0_MASK31_ACCEPT (SPU1_MD0_MASK_ACCEPT31)

/** \brief 2A8, Dataset Metadata */
#define SPU1_MD1_METADATA /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_METADATA*)0xFAC002A8u)

/** \brief 2AC, Bin Rejection Unit Tracking */
#define SPU1_MD1_BINCOUNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_BINCOUNT*)0xFAC002ACu)

/** \brief 2B0, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002B0u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT0.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT0.
*/
#define SPU1_MD1_MASK0_ACCEPT (SPU1_MD1_MASK_ACCEPT0)

/** \brief 2B4, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002B4u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT1.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT1.
*/
#define SPU1_MD1_MASK1_ACCEPT (SPU1_MD1_MASK_ACCEPT1)

/** \brief 2B8, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002B8u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT2.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT2.
*/
#define SPU1_MD1_MASK2_ACCEPT (SPU1_MD1_MASK_ACCEPT2)

/** \brief 2BC, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002BCu)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT3.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT3.
*/
#define SPU1_MD1_MASK3_ACCEPT (SPU1_MD1_MASK_ACCEPT3)

/** \brief 2C0, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002C0u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT4.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT4.
*/
#define SPU1_MD1_MASK4_ACCEPT (SPU1_MD1_MASK_ACCEPT4)

/** \brief 2C4, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002C4u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT5.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT5.
*/
#define SPU1_MD1_MASK5_ACCEPT (SPU1_MD1_MASK_ACCEPT5)

/** \brief 2C8, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002C8u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT6.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT6.
*/
#define SPU1_MD1_MASK6_ACCEPT (SPU1_MD1_MASK_ACCEPT6)

/** \brief 2CC, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002CCu)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT7.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT7.
*/
#define SPU1_MD1_MASK7_ACCEPT (SPU1_MD1_MASK_ACCEPT7)

/** \brief 2D0, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002D0u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT8.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT8.
*/
#define SPU1_MD1_MASK8_ACCEPT (SPU1_MD1_MASK_ACCEPT8)

/** \brief 2D4, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002D4u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT9.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT9.
*/
#define SPU1_MD1_MASK9_ACCEPT (SPU1_MD1_MASK_ACCEPT9)

/** \brief 2D8, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002D8u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT10.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT10.
*/
#define SPU1_MD1_MASK10_ACCEPT (SPU1_MD1_MASK_ACCEPT10)

/** \brief 2DC, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002DCu)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT11.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT11.
*/
#define SPU1_MD1_MASK11_ACCEPT (SPU1_MD1_MASK_ACCEPT11)

/** \brief 2E0, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002E0u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT12.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT12.
*/
#define SPU1_MD1_MASK12_ACCEPT (SPU1_MD1_MASK_ACCEPT12)

/** \brief 2E4, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002E4u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT13.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT13.
*/
#define SPU1_MD1_MASK13_ACCEPT (SPU1_MD1_MASK_ACCEPT13)

/** \brief 2E8, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002E8u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT14.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT14.
*/
#define SPU1_MD1_MASK14_ACCEPT (SPU1_MD1_MASK_ACCEPT14)

/** \brief 2EC, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002ECu)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT15.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT15.
*/
#define SPU1_MD1_MASK15_ACCEPT (SPU1_MD1_MASK_ACCEPT15)

/** \brief 2F0, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002F0u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT16.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT16.
*/
#define SPU1_MD1_MASK16_ACCEPT (SPU1_MD1_MASK_ACCEPT16)

/** \brief 2F4, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002F4u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT17.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT17.
*/
#define SPU1_MD1_MASK17_ACCEPT (SPU1_MD1_MASK_ACCEPT17)

/** \brief 2F8, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002F8u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT18.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT18.
*/
#define SPU1_MD1_MASK18_ACCEPT (SPU1_MD1_MASK_ACCEPT18)

/** \brief 2FC, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC002FCu)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT19.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT19.
*/
#define SPU1_MD1_MASK19_ACCEPT (SPU1_MD1_MASK_ACCEPT19)

/** \brief 300, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00300u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT20.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT20.
*/
#define SPU1_MD1_MASK20_ACCEPT (SPU1_MD1_MASK_ACCEPT20)

/** \brief 304, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00304u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT21.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT21.
*/
#define SPU1_MD1_MASK21_ACCEPT (SPU1_MD1_MASK_ACCEPT21)

/** \brief 308, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00308u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT22.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT22.
*/
#define SPU1_MD1_MASK22_ACCEPT (SPU1_MD1_MASK_ACCEPT22)

/** \brief 30C, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0030Cu)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT23.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT23.
*/
#define SPU1_MD1_MASK23_ACCEPT (SPU1_MD1_MASK_ACCEPT23)

/** \brief 310, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00310u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT24.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT24.
*/
#define SPU1_MD1_MASK24_ACCEPT (SPU1_MD1_MASK_ACCEPT24)

/** \brief 314, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00314u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT25.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT25.
*/
#define SPU1_MD1_MASK25_ACCEPT (SPU1_MD1_MASK_ACCEPT25)

/** \brief 318, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00318u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT26.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT26.
*/
#define SPU1_MD1_MASK26_ACCEPT (SPU1_MD1_MASK_ACCEPT26)

/** \brief 31C, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0031Cu)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT27.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT27.
*/
#define SPU1_MD1_MASK27_ACCEPT (SPU1_MD1_MASK_ACCEPT27)

/** \brief 320, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00320u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT28.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT28.
*/
#define SPU1_MD1_MASK28_ACCEPT (SPU1_MD1_MASK_ACCEPT28)

/** \brief 324, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00324u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT29.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT29.
*/
#define SPU1_MD1_MASK29_ACCEPT (SPU1_MD1_MASK_ACCEPT29)

/** \brief 328, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC00328u)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT30.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT30.
*/
#define SPU1_MD1_MASK30_ACCEPT (SPU1_MD1_MASK_ACCEPT30)

/** \brief 32C, Bin Acceptance  Mask */
#define SPU1_MD1_MASK_ACCEPT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MD_MASK_ACCEPT*)0xFAC0032Cu)
/** Alias (User Manual Name) for SPU1_MD1_MASK_ACCEPT31.
* To use register names with standard convension, please use SPU1_MD1_MASK_ACCEPT31.
*/
#define SPU1_MD1_MASK31_ACCEPT (SPU1_MD1_MASK_ACCEPT31)

/** \brief 330, Input DMA Count */
#define SPU1_IDMCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_IDMCNT*)0xFAC00330u)

/** \brief 334, Input Buffer Memory Count */
#define SPU1_IBMCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_IBMCNT*)0xFAC00334u)

/** \brief 338, Input Buffer Memory Read Count */
#define SPU1_LDRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_LDRCNT*)0xFAC00338u)

/** \brief 33C, FFT Load Count */
#define SPU1_FFTWCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_FFTWCNT*)0xFAC0033Cu)

/** \brief 340, FFT Unload Count */
#define SPU1_FFTRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_FFTRCNT*)0xFAC00340u)

/** \brief 344, Output Buffer Memory Write Count */
#define SPU1_ULDRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ULDRCNT*)0xFAC00344u)

/** \brief 348, Output Buffer Memory Read Count */
#define SPU1_ODMCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMCNT*)0xFAC00348u)

/** \brief 34C, Bin Rejection Unit Load Count */
#define SPU1_BRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_BRCNT*)0xFAC0034Cu)

/** \brief 350, CFAR Unit Load Count */
#define SPU1_CFARCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CFARCNT*)0xFAC00350u)

/** \brief 354, Output DMA Port Write Count */
#define SPU1_ODMACNT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFAC00354u)

/** \brief 358, Output DMA Port Write Count */
#define SPU1_ODMACNT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFAC00358u)

/** \brief 35C, Output DMA Port Write Count */
#define SPU1_ODMACNT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFAC0035Cu)

/** \brief 360, Output DMA Port Write Count */
#define SPU1_ODMACNT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFAC00360u)

/** \brief 364, Output DMA Port Write Count */
#define SPU1_ODMACNT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFAC00364u)

/** \brief 368, Output DMA Port Write Count */
#define SPU1_ODMACNT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFAC00368u)

/** \brief 36C, Output DMA Port Write Count */
#define SPU1_ODMACNT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFAC0036Cu)

/** \brief 370, Output DMA Port Write Count */
#define SPU1_ODMACNT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODMACNT*)0xFAC00370u)

/** \brief 374, Safety Counter Clear */
#define SPU1_CNTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CNTCLR*)0xFAC00374u)

/** \brief 378, SPU Monitor */
#define SPU1_MONITOR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_MONITOR*)0xFAC00378u)

/** \brief 37C, Safety Mechanism Control Functions */
#define SPU1_SMCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SMCTRL*)0xFAC0037Cu)

/** \brief 380, Safety Mechanism Status */
#define SPU1_SMSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SMSTAT*)0xFAC00380u)

/** \brief 384, Safety Mechanism Control Functions (User) */
#define SPU1_SMUSER /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_SMUSER*)0xFAC00384u)

/** \brief 388, Monitor CRC Register */
#define SPU1_CRC_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00388u)
/** Alias (User Manual Name) for SPU1_CRC_DATA0.
* To use register names with standard convension, please use SPU1_CRC_DATA0.
*/
#define SPU1_DATA0_CRC (SPU1_CRC_DATA0)

/** \brief 38C, Monitor CRC Register */
#define SPU1_CRC_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0038Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA1.
* To use register names with standard convension, please use SPU1_CRC_DATA1.
*/
#define SPU1_DATA1_CRC (SPU1_CRC_DATA1)

/** \brief 390, Monitor CRC Register */
#define SPU1_CRC_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00390u)
/** Alias (User Manual Name) for SPU1_CRC_DATA2.
* To use register names with standard convension, please use SPU1_CRC_DATA2.
*/
#define SPU1_DATA2_CRC (SPU1_CRC_DATA2)

/** \brief 394, Monitor CRC Register */
#define SPU1_CRC_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00394u)
/** Alias (User Manual Name) for SPU1_CRC_DATA3.
* To use register names with standard convension, please use SPU1_CRC_DATA3.
*/
#define SPU1_DATA3_CRC (SPU1_CRC_DATA3)

/** \brief 398, Monitor CRC Register */
#define SPU1_CRC_DATA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00398u)
/** Alias (User Manual Name) for SPU1_CRC_DATA4.
* To use register names with standard convension, please use SPU1_CRC_DATA4.
*/
#define SPU1_DATA4_CRC (SPU1_CRC_DATA4)

/** \brief 39C, Monitor CRC Register */
#define SPU1_CRC_DATA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0039Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA5.
* To use register names with standard convension, please use SPU1_CRC_DATA5.
*/
#define SPU1_DATA5_CRC (SPU1_CRC_DATA5)

/** \brief 3A0, Monitor CRC Register */
#define SPU1_CRC_DATA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003A0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA6.
* To use register names with standard convension, please use SPU1_CRC_DATA6.
*/
#define SPU1_DATA6_CRC (SPU1_CRC_DATA6)

/** \brief 3A4, Monitor CRC Register */
#define SPU1_CRC_DATA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003A4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA7.
* To use register names with standard convension, please use SPU1_CRC_DATA7.
*/
#define SPU1_DATA7_CRC (SPU1_CRC_DATA7)

/** \brief 3A8, Monitor CRC Register */
#define SPU1_CRC_DATA8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003A8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA8.
* To use register names with standard convension, please use SPU1_CRC_DATA8.
*/
#define SPU1_DATA8_CRC (SPU1_CRC_DATA8)

/** \brief 3AC, Monitor CRC Register */
#define SPU1_CRC_DATA9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003ACu)
/** Alias (User Manual Name) for SPU1_CRC_DATA9.
* To use register names with standard convension, please use SPU1_CRC_DATA9.
*/
#define SPU1_DATA9_CRC (SPU1_CRC_DATA9)

/** \brief 3B0, Monitor CRC Register */
#define SPU1_CRC_DATA10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003B0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA10.
* To use register names with standard convension, please use SPU1_CRC_DATA10.
*/
#define SPU1_DATA10_CRC (SPU1_CRC_DATA10)

/** \brief 3B4, Monitor CRC Register */
#define SPU1_CRC_DATA11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003B4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA11.
* To use register names with standard convension, please use SPU1_CRC_DATA11.
*/
#define SPU1_DATA11_CRC (SPU1_CRC_DATA11)

/** \brief 3B8, Monitor CRC Register */
#define SPU1_CRC_DATA12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003B8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA12.
* To use register names with standard convension, please use SPU1_CRC_DATA12.
*/
#define SPU1_DATA12_CRC (SPU1_CRC_DATA12)

/** \brief 3BC, Monitor CRC Register */
#define SPU1_CRC_DATA13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003BCu)
/** Alias (User Manual Name) for SPU1_CRC_DATA13.
* To use register names with standard convension, please use SPU1_CRC_DATA13.
*/
#define SPU1_DATA13_CRC (SPU1_CRC_DATA13)

/** \brief 3C0, Monitor CRC Register */
#define SPU1_CRC_DATA14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003C0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA14.
* To use register names with standard convension, please use SPU1_CRC_DATA14.
*/
#define SPU1_DATA14_CRC (SPU1_CRC_DATA14)

/** \brief 3C4, Monitor CRC Register */
#define SPU1_CRC_DATA15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003C4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA15.
* To use register names with standard convension, please use SPU1_CRC_DATA15.
*/
#define SPU1_DATA15_CRC (SPU1_CRC_DATA15)

/** \brief 3C8, Monitor CRC Register */
#define SPU1_CRC_DATA16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003C8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA16.
* To use register names with standard convension, please use SPU1_CRC_DATA16.
*/
#define SPU1_DATA16_CRC (SPU1_CRC_DATA16)

/** \brief 3CC, Monitor CRC Register */
#define SPU1_CRC_DATA17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003CCu)
/** Alias (User Manual Name) for SPU1_CRC_DATA17.
* To use register names with standard convension, please use SPU1_CRC_DATA17.
*/
#define SPU1_DATA17_CRC (SPU1_CRC_DATA17)

/** \brief 3D0, Monitor CRC Register */
#define SPU1_CRC_DATA18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003D0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA18.
* To use register names with standard convension, please use SPU1_CRC_DATA18.
*/
#define SPU1_DATA18_CRC (SPU1_CRC_DATA18)

/** \brief 3D4, Monitor CRC Register */
#define SPU1_CRC_DATA19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003D4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA19.
* To use register names with standard convension, please use SPU1_CRC_DATA19.
*/
#define SPU1_DATA19_CRC (SPU1_CRC_DATA19)

/** \brief 3D8, Monitor CRC Register */
#define SPU1_CRC_DATA20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003D8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA20.
* To use register names with standard convension, please use SPU1_CRC_DATA20.
*/
#define SPU1_DATA20_CRC (SPU1_CRC_DATA20)

/** \brief 3DC, Monitor CRC Register */
#define SPU1_CRC_DATA21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003DCu)
/** Alias (User Manual Name) for SPU1_CRC_DATA21.
* To use register names with standard convension, please use SPU1_CRC_DATA21.
*/
#define SPU1_DATA21_CRC (SPU1_CRC_DATA21)

/** \brief 3E0, Monitor CRC Register */
#define SPU1_CRC_DATA22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003E0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA22.
* To use register names with standard convension, please use SPU1_CRC_DATA22.
*/
#define SPU1_DATA22_CRC (SPU1_CRC_DATA22)

/** \brief 3E4, Monitor CRC Register */
#define SPU1_CRC_DATA23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003E4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA23.
* To use register names with standard convension, please use SPU1_CRC_DATA23.
*/
#define SPU1_DATA23_CRC (SPU1_CRC_DATA23)

/** \brief 3E8, Monitor CRC Register */
#define SPU1_CRC_DATA24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003E8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA24.
* To use register names with standard convension, please use SPU1_CRC_DATA24.
*/
#define SPU1_DATA24_CRC (SPU1_CRC_DATA24)

/** \brief 3EC, Monitor CRC Register */
#define SPU1_CRC_DATA25 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003ECu)
/** Alias (User Manual Name) for SPU1_CRC_DATA25.
* To use register names with standard convension, please use SPU1_CRC_DATA25.
*/
#define SPU1_DATA25_CRC (SPU1_CRC_DATA25)

/** \brief 3F0, Monitor CRC Register */
#define SPU1_CRC_DATA26 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003F0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA26.
* To use register names with standard convension, please use SPU1_CRC_DATA26.
*/
#define SPU1_DATA26_CRC (SPU1_CRC_DATA26)

/** \brief 3F4, Monitor CRC Register */
#define SPU1_CRC_DATA27 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003F4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA27.
* To use register names with standard convension, please use SPU1_CRC_DATA27.
*/
#define SPU1_DATA27_CRC (SPU1_CRC_DATA27)

/** \brief 3F8, Monitor CRC Register */
#define SPU1_CRC_DATA28 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003F8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA28.
* To use register names with standard convension, please use SPU1_CRC_DATA28.
*/
#define SPU1_DATA28_CRC (SPU1_CRC_DATA28)

/** \brief 3FC, Monitor CRC Register */
#define SPU1_CRC_DATA29 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC003FCu)
/** Alias (User Manual Name) for SPU1_CRC_DATA29.
* To use register names with standard convension, please use SPU1_CRC_DATA29.
*/
#define SPU1_DATA29_CRC (SPU1_CRC_DATA29)

/** \brief 400, Monitor CRC Register */
#define SPU1_CRC_DATA30 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00400u)
/** Alias (User Manual Name) for SPU1_CRC_DATA30.
* To use register names with standard convension, please use SPU1_CRC_DATA30.
*/
#define SPU1_DATA30_CRC (SPU1_CRC_DATA30)

/** \brief 404, Monitor CRC Register */
#define SPU1_CRC_DATA31 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00404u)
/** Alias (User Manual Name) for SPU1_CRC_DATA31.
* To use register names with standard convension, please use SPU1_CRC_DATA31.
*/
#define SPU1_DATA31_CRC (SPU1_CRC_DATA31)

/** \brief 408, Monitor CRC Register */
#define SPU1_CRC_DATA32 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00408u)
/** Alias (User Manual Name) for SPU1_CRC_DATA32.
* To use register names with standard convension, please use SPU1_CRC_DATA32.
*/
#define SPU1_DATA32_CRC (SPU1_CRC_DATA32)

/** \brief 40C, Monitor CRC Register */
#define SPU1_CRC_DATA33 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0040Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA33.
* To use register names with standard convension, please use SPU1_CRC_DATA33.
*/
#define SPU1_DATA33_CRC (SPU1_CRC_DATA33)

/** \brief 410, Monitor CRC Register */
#define SPU1_CRC_DATA34 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00410u)
/** Alias (User Manual Name) for SPU1_CRC_DATA34.
* To use register names with standard convension, please use SPU1_CRC_DATA34.
*/
#define SPU1_DATA34_CRC (SPU1_CRC_DATA34)

/** \brief 414, Monitor CRC Register */
#define SPU1_CRC_DATA35 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00414u)
/** Alias (User Manual Name) for SPU1_CRC_DATA35.
* To use register names with standard convension, please use SPU1_CRC_DATA35.
*/
#define SPU1_DATA35_CRC (SPU1_CRC_DATA35)

/** \brief 418, Monitor CRC Register */
#define SPU1_CRC_DATA36 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00418u)
/** Alias (User Manual Name) for SPU1_CRC_DATA36.
* To use register names with standard convension, please use SPU1_CRC_DATA36.
*/
#define SPU1_DATA36_CRC (SPU1_CRC_DATA36)

/** \brief 41C, Monitor CRC Register */
#define SPU1_CRC_DATA37 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0041Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA37.
* To use register names with standard convension, please use SPU1_CRC_DATA37.
*/
#define SPU1_DATA37_CRC (SPU1_CRC_DATA37)

/** \brief 420, Monitor CRC Register */
#define SPU1_CRC_DATA38 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00420u)
/** Alias (User Manual Name) for SPU1_CRC_DATA38.
* To use register names with standard convension, please use SPU1_CRC_DATA38.
*/
#define SPU1_DATA38_CRC (SPU1_CRC_DATA38)

/** \brief 424, Monitor CRC Register */
#define SPU1_CRC_DATA39 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00424u)
/** Alias (User Manual Name) for SPU1_CRC_DATA39.
* To use register names with standard convension, please use SPU1_CRC_DATA39.
*/
#define SPU1_DATA39_CRC (SPU1_CRC_DATA39)

/** \brief 428, Monitor CRC Register */
#define SPU1_CRC_DATA40 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00428u)
/** Alias (User Manual Name) for SPU1_CRC_DATA40.
* To use register names with standard convension, please use SPU1_CRC_DATA40.
*/
#define SPU1_DATA40_CRC (SPU1_CRC_DATA40)

/** \brief 42C, Monitor CRC Register */
#define SPU1_CRC_DATA41 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0042Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA41.
* To use register names with standard convension, please use SPU1_CRC_DATA41.
*/
#define SPU1_DATA41_CRC (SPU1_CRC_DATA41)

/** \brief 430, Monitor CRC Register */
#define SPU1_CRC_DATA42 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00430u)
/** Alias (User Manual Name) for SPU1_CRC_DATA42.
* To use register names with standard convension, please use SPU1_CRC_DATA42.
*/
#define SPU1_DATA42_CRC (SPU1_CRC_DATA42)

/** \brief 434, Monitor CRC Register */
#define SPU1_CRC_DATA43 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00434u)
/** Alias (User Manual Name) for SPU1_CRC_DATA43.
* To use register names with standard convension, please use SPU1_CRC_DATA43.
*/
#define SPU1_DATA43_CRC (SPU1_CRC_DATA43)

/** \brief 438, Monitor CRC Register */
#define SPU1_CRC_DATA44 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00438u)
/** Alias (User Manual Name) for SPU1_CRC_DATA44.
* To use register names with standard convension, please use SPU1_CRC_DATA44.
*/
#define SPU1_DATA44_CRC (SPU1_CRC_DATA44)

/** \brief 43C, Monitor CRC Register */
#define SPU1_CRC_DATA45 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0043Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA45.
* To use register names with standard convension, please use SPU1_CRC_DATA45.
*/
#define SPU1_DATA45_CRC (SPU1_CRC_DATA45)

/** \brief 440, Monitor CRC Register */
#define SPU1_CRC_DATA46 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00440u)
/** Alias (User Manual Name) for SPU1_CRC_DATA46.
* To use register names with standard convension, please use SPU1_CRC_DATA46.
*/
#define SPU1_DATA46_CRC (SPU1_CRC_DATA46)

/** \brief 444, Monitor CRC Register */
#define SPU1_CRC_DATA47 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00444u)
/** Alias (User Manual Name) for SPU1_CRC_DATA47.
* To use register names with standard convension, please use SPU1_CRC_DATA47.
*/
#define SPU1_DATA47_CRC (SPU1_CRC_DATA47)

/** \brief 448, Monitor CRC Register */
#define SPU1_CRC_DATA48 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00448u)
/** Alias (User Manual Name) for SPU1_CRC_DATA48.
* To use register names with standard convension, please use SPU1_CRC_DATA48.
*/
#define SPU1_DATA48_CRC (SPU1_CRC_DATA48)

/** \brief 44C, Monitor CRC Register */
#define SPU1_CRC_DATA49 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0044Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA49.
* To use register names with standard convension, please use SPU1_CRC_DATA49.
*/
#define SPU1_DATA49_CRC (SPU1_CRC_DATA49)

/** \brief 450, Monitor CRC Register */
#define SPU1_CRC_DATA50 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00450u)
/** Alias (User Manual Name) for SPU1_CRC_DATA50.
* To use register names with standard convension, please use SPU1_CRC_DATA50.
*/
#define SPU1_DATA50_CRC (SPU1_CRC_DATA50)

/** \brief 454, Monitor CRC Register */
#define SPU1_CRC_DATA51 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00454u)
/** Alias (User Manual Name) for SPU1_CRC_DATA51.
* To use register names with standard convension, please use SPU1_CRC_DATA51.
*/
#define SPU1_DATA51_CRC (SPU1_CRC_DATA51)

/** \brief 458, Monitor CRC Register */
#define SPU1_CRC_DATA52 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00458u)
/** Alias (User Manual Name) for SPU1_CRC_DATA52.
* To use register names with standard convension, please use SPU1_CRC_DATA52.
*/
#define SPU1_DATA52_CRC (SPU1_CRC_DATA52)

/** \brief 45C, Monitor CRC Register */
#define SPU1_CRC_DATA53 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0045Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA53.
* To use register names with standard convension, please use SPU1_CRC_DATA53.
*/
#define SPU1_DATA53_CRC (SPU1_CRC_DATA53)

/** \brief 460, Monitor CRC Register */
#define SPU1_CRC_DATA54 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00460u)
/** Alias (User Manual Name) for SPU1_CRC_DATA54.
* To use register names with standard convension, please use SPU1_CRC_DATA54.
*/
#define SPU1_DATA54_CRC (SPU1_CRC_DATA54)

/** \brief 464, Monitor CRC Register */
#define SPU1_CRC_DATA55 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00464u)
/** Alias (User Manual Name) for SPU1_CRC_DATA55.
* To use register names with standard convension, please use SPU1_CRC_DATA55.
*/
#define SPU1_DATA55_CRC (SPU1_CRC_DATA55)

/** \brief 468, Monitor CRC Register */
#define SPU1_CRC_DATA56 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00468u)
/** Alias (User Manual Name) for SPU1_CRC_DATA56.
* To use register names with standard convension, please use SPU1_CRC_DATA56.
*/
#define SPU1_DATA56_CRC (SPU1_CRC_DATA56)

/** \brief 46C, Monitor CRC Register */
#define SPU1_CRC_DATA57 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0046Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA57.
* To use register names with standard convension, please use SPU1_CRC_DATA57.
*/
#define SPU1_DATA57_CRC (SPU1_CRC_DATA57)

/** \brief 470, Monitor CRC Register */
#define SPU1_CRC_DATA58 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00470u)
/** Alias (User Manual Name) for SPU1_CRC_DATA58.
* To use register names with standard convension, please use SPU1_CRC_DATA58.
*/
#define SPU1_DATA58_CRC (SPU1_CRC_DATA58)

/** \brief 474, Monitor CRC Register */
#define SPU1_CRC_DATA59 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00474u)
/** Alias (User Manual Name) for SPU1_CRC_DATA59.
* To use register names with standard convension, please use SPU1_CRC_DATA59.
*/
#define SPU1_DATA59_CRC (SPU1_CRC_DATA59)

/** \brief 478, Monitor CRC Register */
#define SPU1_CRC_DATA60 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00478u)
/** Alias (User Manual Name) for SPU1_CRC_DATA60.
* To use register names with standard convension, please use SPU1_CRC_DATA60.
*/
#define SPU1_DATA60_CRC (SPU1_CRC_DATA60)

/** \brief 47C, Monitor CRC Register */
#define SPU1_CRC_DATA61 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0047Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA61.
* To use register names with standard convension, please use SPU1_CRC_DATA61.
*/
#define SPU1_DATA61_CRC (SPU1_CRC_DATA61)

/** \brief 480, Monitor CRC Register */
#define SPU1_CRC_DATA62 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00480u)
/** Alias (User Manual Name) for SPU1_CRC_DATA62.
* To use register names with standard convension, please use SPU1_CRC_DATA62.
*/
#define SPU1_DATA62_CRC (SPU1_CRC_DATA62)

/** \brief 484, Monitor CRC Register */
#define SPU1_CRC_DATA63 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00484u)
/** Alias (User Manual Name) for SPU1_CRC_DATA63.
* To use register names with standard convension, please use SPU1_CRC_DATA63.
*/
#define SPU1_DATA63_CRC (SPU1_CRC_DATA63)

/** \brief 488, Monitor CRC Register */
#define SPU1_CRC_DATA64 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00488u)
/** Alias (User Manual Name) for SPU1_CRC_DATA64.
* To use register names with standard convension, please use SPU1_CRC_DATA64.
*/
#define SPU1_DATA64_CRC (SPU1_CRC_DATA64)

/** \brief 48C, Monitor CRC Register */
#define SPU1_CRC_DATA65 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0048Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA65.
* To use register names with standard convension, please use SPU1_CRC_DATA65.
*/
#define SPU1_DATA65_CRC (SPU1_CRC_DATA65)

/** \brief 490, Monitor CRC Register */
#define SPU1_CRC_DATA66 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00490u)
/** Alias (User Manual Name) for SPU1_CRC_DATA66.
* To use register names with standard convension, please use SPU1_CRC_DATA66.
*/
#define SPU1_DATA66_CRC (SPU1_CRC_DATA66)

/** \brief 494, Monitor CRC Register */
#define SPU1_CRC_DATA67 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00494u)
/** Alias (User Manual Name) for SPU1_CRC_DATA67.
* To use register names with standard convension, please use SPU1_CRC_DATA67.
*/
#define SPU1_DATA67_CRC (SPU1_CRC_DATA67)

/** \brief 498, Monitor CRC Register */
#define SPU1_CRC_DATA68 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC00498u)
/** Alias (User Manual Name) for SPU1_CRC_DATA68.
* To use register names with standard convension, please use SPU1_CRC_DATA68.
*/
#define SPU1_DATA68_CRC (SPU1_CRC_DATA68)

/** \brief 49C, Monitor CRC Register */
#define SPU1_CRC_DATA69 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC0049Cu)
/** Alias (User Manual Name) for SPU1_CRC_DATA69.
* To use register names with standard convension, please use SPU1_CRC_DATA69.
*/
#define SPU1_DATA69_CRC (SPU1_CRC_DATA69)

/** \brief 4A0, Monitor CRC Register */
#define SPU1_CRC_DATA70 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004A0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA70.
* To use register names with standard convension, please use SPU1_CRC_DATA70.
*/
#define SPU1_DATA70_CRC (SPU1_CRC_DATA70)

/** \brief 4A4, Monitor CRC Register */
#define SPU1_CRC_DATA71 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004A4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA71.
* To use register names with standard convension, please use SPU1_CRC_DATA71.
*/
#define SPU1_DATA71_CRC (SPU1_CRC_DATA71)

/** \brief 4A8, Monitor CRC Register */
#define SPU1_CRC_DATA72 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004A8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA72.
* To use register names with standard convension, please use SPU1_CRC_DATA72.
*/
#define SPU1_DATA72_CRC (SPU1_CRC_DATA72)

/** \brief 4AC, Monitor CRC Register */
#define SPU1_CRC_DATA73 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004ACu)
/** Alias (User Manual Name) for SPU1_CRC_DATA73.
* To use register names with standard convension, please use SPU1_CRC_DATA73.
*/
#define SPU1_DATA73_CRC (SPU1_CRC_DATA73)

/** \brief 4B0, Monitor CRC Register */
#define SPU1_CRC_DATA74 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004B0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA74.
* To use register names with standard convension, please use SPU1_CRC_DATA74.
*/
#define SPU1_DATA74_CRC (SPU1_CRC_DATA74)

/** \brief 4B4, Monitor CRC Register */
#define SPU1_CRC_DATA75 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004B4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA75.
* To use register names with standard convension, please use SPU1_CRC_DATA75.
*/
#define SPU1_DATA75_CRC (SPU1_CRC_DATA75)

/** \brief 4B8, Monitor CRC Register */
#define SPU1_CRC_DATA76 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004B8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA76.
* To use register names with standard convension, please use SPU1_CRC_DATA76.
*/
#define SPU1_DATA76_CRC (SPU1_CRC_DATA76)

/** \brief 4BC, Monitor CRC Register */
#define SPU1_CRC_DATA77 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004BCu)
/** Alias (User Manual Name) for SPU1_CRC_DATA77.
* To use register names with standard convension, please use SPU1_CRC_DATA77.
*/
#define SPU1_DATA77_CRC (SPU1_CRC_DATA77)

/** \brief 4C0, Monitor CRC Register */
#define SPU1_CRC_DATA78 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004C0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA78.
* To use register names with standard convension, please use SPU1_CRC_DATA78.
*/
#define SPU1_DATA78_CRC (SPU1_CRC_DATA78)

/** \brief 4C4, Monitor CRC Register */
#define SPU1_CRC_DATA79 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004C4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA79.
* To use register names with standard convension, please use SPU1_CRC_DATA79.
*/
#define SPU1_DATA79_CRC (SPU1_CRC_DATA79)

/** \brief 4C8, Monitor CRC Register */
#define SPU1_CRC_DATA80 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004C8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA80.
* To use register names with standard convension, please use SPU1_CRC_DATA80.
*/
#define SPU1_DATA80_CRC (SPU1_CRC_DATA80)

/** \brief 4CC, Monitor CRC Register */
#define SPU1_CRC_DATA81 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004CCu)
/** Alias (User Manual Name) for SPU1_CRC_DATA81.
* To use register names with standard convension, please use SPU1_CRC_DATA81.
*/
#define SPU1_DATA81_CRC (SPU1_CRC_DATA81)

/** \brief 4D0, Monitor CRC Register */
#define SPU1_CRC_DATA82 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004D0u)
/** Alias (User Manual Name) for SPU1_CRC_DATA82.
* To use register names with standard convension, please use SPU1_CRC_DATA82.
*/
#define SPU1_DATA82_CRC (SPU1_CRC_DATA82)

/** \brief 4D4, Monitor CRC Register */
#define SPU1_CRC_DATA83 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004D4u)
/** Alias (User Manual Name) for SPU1_CRC_DATA83.
* To use register names with standard convension, please use SPU1_CRC_DATA83.
*/
#define SPU1_DATA83_CRC (SPU1_CRC_DATA83)

/** \brief 4D8, Monitor CRC Register */
#define SPU1_CRC_DATA84 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004D8u)
/** Alias (User Manual Name) for SPU1_CRC_DATA84.
* To use register names with standard convension, please use SPU1_CRC_DATA84.
*/
#define SPU1_DATA84_CRC (SPU1_CRC_DATA84)

/** \brief 4DC, Monitor CRC Register */
#define SPU1_CRC_DATA85 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_DATA*)0xFAC004DCu)
/** Alias (User Manual Name) for SPU1_CRC_DATA85.
* To use register names with standard convension, please use SPU1_CRC_DATA85.
*/
#define SPU1_DATA85_CRC (SPU1_CRC_DATA85)

/** \brief 500, Monitor CRC Register */
#define SPU1_CRC_CTRL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00500u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL0.
* To use register names with standard convension, please use SPU1_CRC_CTRL0.
*/
#define SPU1_CTRL0_CRC (SPU1_CRC_CTRL0)

/** \brief 504, Monitor CRC Register */
#define SPU1_CRC_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00504u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL1.
* To use register names with standard convension, please use SPU1_CRC_CTRL1.
*/
#define SPU1_CTRL1_CRC (SPU1_CRC_CTRL1)

/** \brief 508, Monitor CRC Register */
#define SPU1_CRC_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00508u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL2.
* To use register names with standard convension, please use SPU1_CRC_CTRL2.
*/
#define SPU1_CTRL2_CRC (SPU1_CRC_CTRL2)

/** \brief 50C, Monitor CRC Register */
#define SPU1_CRC_CTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC0050Cu)
/** Alias (User Manual Name) for SPU1_CRC_CTRL3.
* To use register names with standard convension, please use SPU1_CRC_CTRL3.
*/
#define SPU1_CTRL3_CRC (SPU1_CRC_CTRL3)

/** \brief 510, Monitor CRC Register */
#define SPU1_CRC_CTRL4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00510u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL4.
* To use register names with standard convension, please use SPU1_CRC_CTRL4.
*/
#define SPU1_CTRL4_CRC (SPU1_CRC_CTRL4)

/** \brief 514, Monitor CRC Register */
#define SPU1_CRC_CTRL5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00514u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL5.
* To use register names with standard convension, please use SPU1_CRC_CTRL5.
*/
#define SPU1_CTRL5_CRC (SPU1_CRC_CTRL5)

/** \brief 518, Monitor CRC Register */
#define SPU1_CRC_CTRL6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00518u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL6.
* To use register names with standard convension, please use SPU1_CRC_CTRL6.
*/
#define SPU1_CTRL6_CRC (SPU1_CRC_CTRL6)

/** \brief 51C, Monitor CRC Register */
#define SPU1_CRC_CTRL7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC0051Cu)
/** Alias (User Manual Name) for SPU1_CRC_CTRL7.
* To use register names with standard convension, please use SPU1_CRC_CTRL7.
*/
#define SPU1_CTRL7_CRC (SPU1_CRC_CTRL7)

/** \brief 520, Monitor CRC Register */
#define SPU1_CRC_CTRL8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00520u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL8.
* To use register names with standard convension, please use SPU1_CRC_CTRL8.
*/
#define SPU1_CTRL8_CRC (SPU1_CRC_CTRL8)

/** \brief 524, Monitor CRC Register */
#define SPU1_CRC_CTRL9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00524u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL9.
* To use register names with standard convension, please use SPU1_CRC_CTRL9.
*/
#define SPU1_CTRL9_CRC (SPU1_CRC_CTRL9)

/** \brief 528, Monitor CRC Register */
#define SPU1_CRC_CTRL10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00528u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL10.
* To use register names with standard convension, please use SPU1_CRC_CTRL10.
*/
#define SPU1_CTRL10_CRC (SPU1_CRC_CTRL10)

/** \brief 52C, Monitor CRC Register */
#define SPU1_CRC_CTRL11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC0052Cu)
/** Alias (User Manual Name) for SPU1_CRC_CTRL11.
* To use register names with standard convension, please use SPU1_CRC_CTRL11.
*/
#define SPU1_CTRL11_CRC (SPU1_CRC_CTRL11)

/** \brief 530, Monitor CRC Register */
#define SPU1_CRC_CTRL12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00530u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL12.
* To use register names with standard convension, please use SPU1_CRC_CTRL12.
*/
#define SPU1_CTRL12_CRC (SPU1_CRC_CTRL12)

/** \brief 534, Monitor CRC Register */
#define SPU1_CRC_CTRL13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00534u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL13.
* To use register names with standard convension, please use SPU1_CRC_CTRL13.
*/
#define SPU1_CTRL13_CRC (SPU1_CRC_CTRL13)

/** \brief 538, Monitor CRC Register */
#define SPU1_CRC_CTRL14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00538u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL14.
* To use register names with standard convension, please use SPU1_CRC_CTRL14.
*/
#define SPU1_CTRL14_CRC (SPU1_CRC_CTRL14)

/** \brief 53C, Monitor CRC Register */
#define SPU1_CRC_CTRL15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC0053Cu)
/** Alias (User Manual Name) for SPU1_CRC_CTRL15.
* To use register names with standard convension, please use SPU1_CRC_CTRL15.
*/
#define SPU1_CTRL15_CRC (SPU1_CRC_CTRL15)

/** \brief 540, Monitor CRC Register */
#define SPU1_CRC_CTRL16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00540u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL16.
* To use register names with standard convension, please use SPU1_CRC_CTRL16.
*/
#define SPU1_CTRL16_CRC (SPU1_CRC_CTRL16)

/** \brief 544, Monitor CRC Register */
#define SPU1_CRC_CTRL17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00544u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL17.
* To use register names with standard convension, please use SPU1_CRC_CTRL17.
*/
#define SPU1_CTRL17_CRC (SPU1_CRC_CTRL17)

/** \brief 548, Monitor CRC Register */
#define SPU1_CRC_CTRL18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00548u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL18.
* To use register names with standard convension, please use SPU1_CRC_CTRL18.
*/
#define SPU1_CTRL18_CRC (SPU1_CRC_CTRL18)

/** \brief 54C, Monitor CRC Register */
#define SPU1_CRC_CTRL19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC0054Cu)
/** Alias (User Manual Name) for SPU1_CRC_CTRL19.
* To use register names with standard convension, please use SPU1_CRC_CTRL19.
*/
#define SPU1_CTRL19_CRC (SPU1_CRC_CTRL19)

/** \brief 550, Monitor CRC Register */
#define SPU1_CRC_CTRL20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00550u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL20.
* To use register names with standard convension, please use SPU1_CRC_CTRL20.
*/
#define SPU1_CTRL20_CRC (SPU1_CRC_CTRL20)

/** \brief 554, Monitor CRC Register */
#define SPU1_CRC_CTRL21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00554u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL21.
* To use register names with standard convension, please use SPU1_CRC_CTRL21.
*/
#define SPU1_CTRL21_CRC (SPU1_CRC_CTRL21)

/** \brief 558, Monitor CRC Register */
#define SPU1_CRC_CTRL22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00558u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL22.
* To use register names with standard convension, please use SPU1_CRC_CTRL22.
*/
#define SPU1_CTRL22_CRC (SPU1_CRC_CTRL22)

/** \brief 55C, Monitor CRC Register */
#define SPU1_CRC_CTRL23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC0055Cu)
/** Alias (User Manual Name) for SPU1_CRC_CTRL23.
* To use register names with standard convension, please use SPU1_CRC_CTRL23.
*/
#define SPU1_CTRL23_CRC (SPU1_CRC_CTRL23)

/** \brief 560, Monitor CRC Register */
#define SPU1_CRC_CTRL24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_CRC_CTRL*)0xFAC00560u)
/** Alias (User Manual Name) for SPU1_CRC_CTRL24.
* To use register names with standard convension, please use SPU1_CRC_CTRL24.
*/
#define SPU1_CTRL24_CRC (SPU1_CRC_CTRL24)

/** \brief 7E0, User OCDS Trace Control */
#define SPU1_USROTC /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_USROTC*)0xFAC007E0u)

/** \brief 7E4, Access Enable Register 0 */
#define SPU1_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ACCEN0*)0xFAC007E4u)

/** \brief 7E8, Access Enable Register 1 */
#define SPU1_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ACCEN1*)0xFAC007E8u)

/** \brief 7EC, OCDS Control and Status */
#define SPU1_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_OCS*)0xFAC007ECu)

/** \brief 7F0, OCDS Debug Access Register */
#define SPU1_ODA /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_ODA*)0xFAC007F0u)

/** \brief 7F4, Kernel Reset Register 0 */
#define SPU1_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_KRST0*)0xFAC007F4u)

/** \brief 7F8, Kernel Reset Register 1 */
#define SPU1_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_KRST1*)0xFAC007F8u)

/** \brief 7FC, Kernel Reset Clear */
#define SPU1_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SPU_KRSTCLR*)0xFAC007FCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXSPU_REG_H */
