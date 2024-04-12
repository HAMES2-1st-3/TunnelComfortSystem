/**
 * \file IfxEray_reg.h
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
 * \defgroup IfxSfr_Eray_Registers_Cfg Eray address
 * \ingroup IfxSfr_Eray_Registers
 * 
 * \defgroup IfxSfr_Eray_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Eray_Registers_Cfg
 *
 * \defgroup IfxSfr_Eray_Registers_Cfg_Eray0 2-ERAY0
 * \ingroup IfxSfr_Eray_Registers_Cfg
 *
 *
 */
#ifndef IFXERAY_REG_H
#define IFXERAY_REG_H 1
/******************************************************************************/
#include "IfxEray_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Eray_Registers_Cfg_BaseAddress
 * \{  */

/** \brief ERAY object */
#define MODULE_ERAY0 /*lint --e(923, 9078)*/ ((*(Ifx_ERAY*)0xF001C000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Eray_Registers_Cfg_Eray0
 * \{  */
/** \brief 0, Clock Control Register */
#define ERAY0_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_CLC*)0xF001C000u)

/** \brief 4, Busy and Input Buffer Control Register */
#define ERAY0_CUST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_CUST1*)0xF001C004u)

/** \brief 8, Module Identification Register */
#define ERAY0_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ID*)0xF001C008u)

/** \brief C, Customer Interface Timeout Counter Register */
#define ERAY0_CUST3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_CUST3*)0xF001C00Cu)

/** \brief 10, Test Register 1 */
#define ERAY0_TEST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_TEST1*)0xF001C010u)

/** \brief 14, Test Register 2 */
#define ERAY0_TEST2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_TEST2*)0xF001C014u)

/** \brief 1C, Lock Register */
#define ERAY0_LCK /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_LCK*)0xF001C01Cu)

/** \brief 20, Error Service Request Select Register */
#define ERAY0_EIR /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_EIR*)0xF001C020u)

/** \brief 24, Status Service Request Register */
#define ERAY0_SIR /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SIR*)0xF001C024u)

/** \brief 28, Error Service Request Line Select */
#define ERAY0_EILS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_EILS*)0xF001C028u)

/** \brief 2C, Status Service Request Line Select */
#define ERAY0_SILS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SILS*)0xF001C02Cu)

/** \brief 30, Error Service Request Enable Set */
#define ERAY0_EIES /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_EIES*)0xF001C030u)

/** \brief 34, Error Service Request Enable Reset */
#define ERAY0_EIER /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_EIER*)0xF001C034u)

/** \brief 38, Status Service Request Enable Set */
#define ERAY0_SIES /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SIES*)0xF001C038u)

/** \brief 3C, Status Service Request Enable Reset */
#define ERAY0_SIER /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SIER*)0xF001C03Cu)

/** \brief 40, Service Request Line Enable */
#define ERAY0_ILE /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ILE*)0xF001C040u)

/** \brief 44, Timer 0 Configuration */
#define ERAY0_T0C /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_T0C*)0xF001C044u)

/** \brief 48, Timer 1 Configuration */
#define ERAY0_T1C /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_T1C*)0xF001C048u)

/** \brief 4C, Stop Watch Register 1 */
#define ERAY0_STPW1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_STPW1*)0xF001C04Cu)

/** \brief 50, Stop Watch Register 2 */
#define ERAY0_STPW2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_STPW2*)0xF001C050u)

/** \brief 80, SUC Configuration Register 1 */
#define ERAY0_SUCC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SUCC1*)0xF001C080u)

/** \brief 84, SUC Configuration Register 2 */
#define ERAY0_SUCC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SUCC2*)0xF001C084u)

/** \brief 88, SUC Configuration Register 3 */
#define ERAY0_SUCC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SUCC3*)0xF001C088u)

/** \brief 8C, NEM Configuration Register */
#define ERAY0_NEMC /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NEMC*)0xF001C08Cu)

/** \brief 90, PRT Configuration Register 1 */
#define ERAY0_PRTC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_PRTC1*)0xF001C090u)

/** \brief 94, PRT Configuration Register 2 */
#define ERAY0_PRTC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_PRTC2*)0xF001C094u)

/** \brief 98, MHD Configuration Register */
#define ERAY0_MHDC /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MHDC*)0xF001C098u)

/** \brief A0, GTU Configuration Register 1 */
#define ERAY0_GTUC01 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC01*)0xF001C0A0u)

/** \brief A4, GTU Configuration Register 2 */
#define ERAY0_GTUC02 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC02*)0xF001C0A4u)

/** \brief A8, GTU Configuration Register 3 */
#define ERAY0_GTUC03 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC03*)0xF001C0A8u)

/** \brief AC, GTU Configuration Register 4 */
#define ERAY0_GTUC04 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC04*)0xF001C0ACu)

/** \brief B0, GTU Configuration Register 5 */
#define ERAY0_GTUC05 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC05*)0xF001C0B0u)

/** \brief B4, GTU Configuration Register 6 */
#define ERAY0_GTUC06 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC06*)0xF001C0B4u)

/** \brief B8, GTU Configuration Register 7 */
#define ERAY0_GTUC07 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC07*)0xF001C0B8u)

/** \brief BC, GTU Configuration Register 8 */
#define ERAY0_GTUC08 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC08*)0xF001C0BCu)

/** \brief C0, GTU Configuration Register 9 */
#define ERAY0_GTUC09 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC09*)0xF001C0C0u)

/** \brief C4, GTU Configuration Register 10 */
#define ERAY0_GTUC10 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC10*)0xF001C0C4u)

/** \brief C8, GTU Configuration Register 11 */
#define ERAY0_GTUC11 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_GTUC11*)0xF001C0C8u)

/** \brief 100, Communication Controller Status Vector */
#define ERAY0_CCSV /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_CCSV*)0xF001C100u)

/** \brief 104, Communication Controller Error Vector */
#define ERAY0_CCEV /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_CCEV*)0xF001C104u)

/** \brief 110, Slot Counter Value */
#define ERAY0_SCV /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SCV*)0xF001C110u)

/** \brief 114, Macrotick and Cycle Counter Value */
#define ERAY0_MTCCV /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MTCCV*)0xF001C114u)

/** \brief 118, Rate Correction Value */
#define ERAY0_RCV /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RCV*)0xF001C118u)

/** \brief 11C, Offset Correction Value */
#define ERAY0_OCV /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OCV*)0xF001C11Cu)

/** \brief 120, SYNC Frame Status */
#define ERAY0_SFS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SFS*)0xF001C120u)

/** \brief 124, Symbol Window and Network Idle Time Status */
#define ERAY0_SWNIT /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_SWNIT*)0xF001C124u)

/** \brief 128, Aggregated Channel Status */
#define ERAY0_ACS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ACS*)0xF001C128u)

/** \brief 130, Even Sync ID Symbol Window 1 */
#define ERAY0_ESID_1S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C130u)
/** Alias (User Manual Name) for ERAY0_ESID_1S0.
* To use register names with standard convension, please use ERAY0_ESID_1S0.
*/
#define ERAY0_ESID01 (ERAY0_ESID_1S0)

/** \brief 134, Even Sync ID Symbol Window 2 */
#define ERAY0_ESID_1S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C134u)
/** Alias (User Manual Name) for ERAY0_ESID_1S1.
* To use register names with standard convension, please use ERAY0_ESID_1S1.
*/
#define ERAY0_ESID02 (ERAY0_ESID_1S1)

/** \brief 138, Even Sync ID Symbol Window 3 */
#define ERAY0_ESID_1S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C138u)
/** Alias (User Manual Name) for ERAY0_ESID_1S2.
* To use register names with standard convension, please use ERAY0_ESID_1S2.
*/
#define ERAY0_ESID03 (ERAY0_ESID_1S2)

/** \brief 13C, Even Sync ID Symbol Window 4 */
#define ERAY0_ESID_1S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C13Cu)
/** Alias (User Manual Name) for ERAY0_ESID_1S3.
* To use register names with standard convension, please use ERAY0_ESID_1S3.
*/
#define ERAY0_ESID04 (ERAY0_ESID_1S3)

/** \brief 140, Even Sync ID Symbol Window 5 */
#define ERAY0_ESID_1S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C140u)
/** Alias (User Manual Name) for ERAY0_ESID_1S4.
* To use register names with standard convension, please use ERAY0_ESID_1S4.
*/
#define ERAY0_ESID05 (ERAY0_ESID_1S4)

/** \brief 144, Even Sync ID Symbol Window 6 */
#define ERAY0_ESID_1S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C144u)
/** Alias (User Manual Name) for ERAY0_ESID_1S5.
* To use register names with standard convension, please use ERAY0_ESID_1S5.
*/
#define ERAY0_ESID06 (ERAY0_ESID_1S5)

/** \brief 148, Even Sync ID Symbol Window 7 */
#define ERAY0_ESID_1S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C148u)
/** Alias (User Manual Name) for ERAY0_ESID_1S6.
* To use register names with standard convension, please use ERAY0_ESID_1S6.
*/
#define ERAY0_ESID07 (ERAY0_ESID_1S6)

/** \brief 14C, Even Sync ID Symbol Window 8 */
#define ERAY0_ESID_1S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C14Cu)
/** Alias (User Manual Name) for ERAY0_ESID_1S7.
* To use register names with standard convension, please use ERAY0_ESID_1S7.
*/
#define ERAY0_ESID08 (ERAY0_ESID_1S7)

/** \brief 150, Even Sync ID Symbol Window 9 */
#define ERAY0_ESID_1S8 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C150u)
/** Alias (User Manual Name) for ERAY0_ESID_1S8.
* To use register names with standard convension, please use ERAY0_ESID_1S8.
*/
#define ERAY0_ESID09 (ERAY0_ESID_1S8)

/** \brief 154, Even Sync ID Symbol Window 10 */
#define ERAY0_ESID_1S9 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C154u)
/** Alias (User Manual Name) for ERAY0_ESID_1S9.
* To use register names with standard convension, please use ERAY0_ESID_1S9.
*/
#define ERAY0_ESID10 (ERAY0_ESID_1S9)

/** \brief 158, Even Sync ID Symbol Window 11 */
#define ERAY0_ESID_1S10 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C158u)
/** Alias (User Manual Name) for ERAY0_ESID_1S10.
* To use register names with standard convension, please use ERAY0_ESID_1S10.
*/
#define ERAY0_ESID11 (ERAY0_ESID_1S10)

/** \brief 15C, Even Sync ID Symbol Window 12 */
#define ERAY0_ESID_1S11 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C15Cu)
/** Alias (User Manual Name) for ERAY0_ESID_1S11.
* To use register names with standard convension, please use ERAY0_ESID_1S11.
*/
#define ERAY0_ESID12 (ERAY0_ESID_1S11)

/** \brief 160, Even Sync ID Symbol Window 13 */
#define ERAY0_ESID_1S12 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C160u)
/** Alias (User Manual Name) for ERAY0_ESID_1S12.
* To use register names with standard convension, please use ERAY0_ESID_1S12.
*/
#define ERAY0_ESID13 (ERAY0_ESID_1S12)

/** \brief 164, Even Sync ID Symbol Window 14 */
#define ERAY0_ESID_1S13 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C164u)
/** Alias (User Manual Name) for ERAY0_ESID_1S13.
* To use register names with standard convension, please use ERAY0_ESID_1S13.
*/
#define ERAY0_ESID14 (ERAY0_ESID_1S13)

/** \brief 168, Even Sync ID Symbol Window 15 */
#define ERAY0_ESID_1S14 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C168u)
/** Alias (User Manual Name) for ERAY0_ESID_1S14.
* To use register names with standard convension, please use ERAY0_ESID_1S14.
*/
#define ERAY0_ESID15 (ERAY0_ESID_1S14)

/** \brief 170, Odd Sync ID Symbol Window 1 */
#define ERAY0_OSID_1S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C170u)
/** Alias (User Manual Name) for ERAY0_OSID_1S0.
* To use register names with standard convension, please use ERAY0_OSID_1S0.
*/
#define ERAY0_OSID01 (ERAY0_OSID_1S0)

/** \brief 174, Odd Sync ID Symbol Window 2 */
#define ERAY0_OSID_1S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C174u)
/** Alias (User Manual Name) for ERAY0_OSID_1S1.
* To use register names with standard convension, please use ERAY0_OSID_1S1.
*/
#define ERAY0_OSID02 (ERAY0_OSID_1S1)

/** \brief 178, Odd Sync ID Symbol Window 3 */
#define ERAY0_OSID_1S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C178u)
/** Alias (User Manual Name) for ERAY0_OSID_1S2.
* To use register names with standard convension, please use ERAY0_OSID_1S2.
*/
#define ERAY0_OSID03 (ERAY0_OSID_1S2)

/** \brief 17C, Odd Sync ID Symbol Window 4 */
#define ERAY0_OSID_1S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C17Cu)
/** Alias (User Manual Name) for ERAY0_OSID_1S3.
* To use register names with standard convension, please use ERAY0_OSID_1S3.
*/
#define ERAY0_OSID04 (ERAY0_OSID_1S3)

/** \brief 180, Odd Sync ID Symbol Window 5 */
#define ERAY0_OSID_1S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C180u)
/** Alias (User Manual Name) for ERAY0_OSID_1S4.
* To use register names with standard convension, please use ERAY0_OSID_1S4.
*/
#define ERAY0_OSID05 (ERAY0_OSID_1S4)

/** \brief 184, Odd Sync ID Symbol Window 6 */
#define ERAY0_OSID_1S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C184u)
/** Alias (User Manual Name) for ERAY0_OSID_1S5.
* To use register names with standard convension, please use ERAY0_OSID_1S5.
*/
#define ERAY0_OSID06 (ERAY0_OSID_1S5)

/** \brief 188, Odd Sync ID Symbol Window 7 */
#define ERAY0_OSID_1S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C188u)
/** Alias (User Manual Name) for ERAY0_OSID_1S6.
* To use register names with standard convension, please use ERAY0_OSID_1S6.
*/
#define ERAY0_OSID07 (ERAY0_OSID_1S6)

/** \brief 18C, Odd Sync ID Symbol Window 8 */
#define ERAY0_OSID_1S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C18Cu)
/** Alias (User Manual Name) for ERAY0_OSID_1S7.
* To use register names with standard convension, please use ERAY0_OSID_1S7.
*/
#define ERAY0_OSID08 (ERAY0_OSID_1S7)

/** \brief 190, Odd Sync ID Symbol Window 9 */
#define ERAY0_OSID_1S8 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C190u)
/** Alias (User Manual Name) for ERAY0_OSID_1S8.
* To use register names with standard convension, please use ERAY0_OSID_1S8.
*/
#define ERAY0_OSID09 (ERAY0_OSID_1S8)

/** \brief 194, Odd Sync ID Symbol Window 10 */
#define ERAY0_OSID_1S9 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C194u)
/** Alias (User Manual Name) for ERAY0_OSID_1S9.
* To use register names with standard convension, please use ERAY0_OSID_1S9.
*/
#define ERAY0_OSID10 (ERAY0_OSID_1S9)

/** \brief 198, Odd Sync ID Symbol Window 11 */
#define ERAY0_OSID_1S10 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C198u)
/** Alias (User Manual Name) for ERAY0_OSID_1S10.
* To use register names with standard convension, please use ERAY0_OSID_1S10.
*/
#define ERAY0_OSID11 (ERAY0_OSID_1S10)

/** \brief 19C, Odd Sync ID Symbol Window 12 */
#define ERAY0_OSID_1S11 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C19Cu)
/** Alias (User Manual Name) for ERAY0_OSID_1S11.
* To use register names with standard convension, please use ERAY0_OSID_1S11.
*/
#define ERAY0_OSID12 (ERAY0_OSID_1S11)

/** \brief 1A0, Odd Sync ID Symbol Window 13 */
#define ERAY0_OSID_1S12 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C1A0u)
/** Alias (User Manual Name) for ERAY0_OSID_1S12.
* To use register names with standard convension, please use ERAY0_OSID_1S12.
*/
#define ERAY0_OSID13 (ERAY0_OSID_1S12)

/** \brief 1A4, Odd Sync ID Symbol Window 14 */
#define ERAY0_OSID_1S13 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C1A4u)
/** Alias (User Manual Name) for ERAY0_OSID_1S13.
* To use register names with standard convension, please use ERAY0_OSID_1S13.
*/
#define ERAY0_OSID14 (ERAY0_OSID_1S13)

/** \brief 1A8, Odd Sync ID Symbol Window 15 */
#define ERAY0_OSID_1S14 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C1A8u)
/** Alias (User Manual Name) for ERAY0_OSID_1S14.
* To use register names with standard convension, please use ERAY0_OSID_1S14.
*/
#define ERAY0_OSID15 (ERAY0_OSID_1S14)

/** \brief 1B0, Network Management Vector 1 */
#define ERAY0_NMV_1S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NMV*)0xF001C1B0u)
/** Alias (User Manual Name) for ERAY0_NMV_1S0.
* To use register names with standard convension, please use ERAY0_NMV_1S0.
*/
#define ERAY0_NMV1 (ERAY0_NMV_1S0)

/** \brief 1B4, Network Management Vector 2 */
#define ERAY0_NMV_1S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NMV*)0xF001C1B4u)
/** Alias (User Manual Name) for ERAY0_NMV_1S1.
* To use register names with standard convension, please use ERAY0_NMV_1S1.
*/
#define ERAY0_NMV2 (ERAY0_NMV_1S1)

/** \brief 1B8, Network Management Vector 3 */
#define ERAY0_NMV_1S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NMV*)0xF001C1B8u)
/** Alias (User Manual Name) for ERAY0_NMV_1S2.
* To use register names with standard convension, please use ERAY0_NMV_1S2.
*/
#define ERAY0_NMV3 (ERAY0_NMV_1S2)

/** \brief 300, Message RAM Configuration */
#define ERAY0_MRC /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MRC*)0xF001C300u)

/** \brief 304, FIFO Rejection Filter */
#define ERAY0_FRF /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_FRF*)0xF001C304u)

/** \brief 308, FIFO Rejection Filter Mask */
#define ERAY0_FRFM /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_FRFM*)0xF001C308u)

/** \brief 30C, FIFO Critical Level */
#define ERAY0_FCL /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_FCL*)0xF001C30Cu)

/** \brief 310, Message Handler Status */
#define ERAY0_MHDS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MHDS*)0xF001C310u)

/** \brief 314, Last Dynamic Transmit Slot */
#define ERAY0_LDTS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_LDTS*)0xF001C314u)

/** \brief 318, FIFO Status Register */
#define ERAY0_FSR /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_FSR*)0xF001C318u)

/** \brief 31C, Message Handler Constraints Flags */
#define ERAY0_MHDF /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MHDF*)0xF001C31Cu)

/** \brief 320, Transmission Request Register 1 */
#define ERAY0_TXRQ1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_TXRQ1*)0xF001C320u)

/** \brief 324, Transmission Request Register 2 */
#define ERAY0_TXRQ2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_TXRQ2*)0xF001C324u)

/** \brief 328, Transmission Request Register 3 */
#define ERAY0_TXRQ3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_TXRQ3*)0xF001C328u)

/** \brief 32C, Transmission Request Register 4 */
#define ERAY0_TXRQ4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_TXRQ4*)0xF001C32Cu)

/** \brief 330, New Data Register 1 */
#define ERAY0_NDAT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NDAT1*)0xF001C330u)

/** \brief 334, New Data Register 2 */
#define ERAY0_NDAT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NDAT2*)0xF001C334u)

/** \brief 338, New Data Register 3 */
#define ERAY0_NDAT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NDAT3*)0xF001C338u)

/** \brief 33C, New Data Register 4 */
#define ERAY0_NDAT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NDAT4*)0xF001C33Cu)

/** \brief 340, Message Buffer Status Changed 1 */
#define ERAY0_MBSC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MBSC1*)0xF001C340u)

/** \brief 344, Message Buffer Status Changed 2 */
#define ERAY0_MBSC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MBSC2*)0xF001C344u)

/** \brief 348, Message Buffer Status Changed 3 */
#define ERAY0_MBSC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MBSC3*)0xF001C348u)

/** \brief 34C, Message Buffer Status Changed 4 */
#define ERAY0_MBSC4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MBSC4*)0xF001C34Cu)

/** \brief 3A8, New Data Interrupt Control 1 */
#define ERAY0_NDIC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NDIC1*)0xF001C3A8u)

/** \brief 3AC, New Data Interrupt Control 2 */
#define ERAY0_NDIC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NDIC2*)0xF001C3ACu)

/** \brief 3B0, New Data Interrupt Control 3 */
#define ERAY0_NDIC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NDIC3*)0xF001C3B0u)

/** \brief 3B4, New Data Interrupt Control 4 */
#define ERAY0_NDIC4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_NDIC4*)0xF001C3B4u)

/** \brief 3B8, Message Buffer Status Changed Interrupt Control 1 */
#define ERAY0_MSIC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MSIC1*)0xF001C3B8u)

/** \brief 3BC, Message Buffer Status Changed Interrupt Control 2 */
#define ERAY0_MSIC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MSIC2*)0xF001C3BCu)

/** \brief 3C0, Message Buffer Status Changed Interrupt Control 3 */
#define ERAY0_MSIC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MSIC3*)0xF001C3C0u)

/** \brief 3C4, Message Buffer Status Changed Interrupt Control 4 */
#define ERAY0_MSIC4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MSIC4*)0xF001C3C4u)

/** \brief 3F0, Core Release Register */
#define ERAY0_CREL /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_CREL*)0xF001C3F0u)

/** \brief 3F4, Endian Register */
#define ERAY0_ENDN /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ENDN*)0xF001C3F4u)

/** \brief 400, Write Data Section 1 */
#define ERAY0_WRDS_1S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C400u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S0.
* To use register names with standard convension, please use ERAY0_WRDS_1S0.
*/
#define ERAY0_WRDS01 (ERAY0_WRDS_1S0)

/** \brief 404, Write Data Section 2 */
#define ERAY0_WRDS_1S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C404u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S1.
* To use register names with standard convension, please use ERAY0_WRDS_1S1.
*/
#define ERAY0_WRDS02 (ERAY0_WRDS_1S1)

/** \brief 408, Write Data Section 3 */
#define ERAY0_WRDS_1S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C408u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S2.
* To use register names with standard convension, please use ERAY0_WRDS_1S2.
*/
#define ERAY0_WRDS03 (ERAY0_WRDS_1S2)

/** \brief 40C, Write Data Section 4 */
#define ERAY0_WRDS_1S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C40Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S3.
* To use register names with standard convension, please use ERAY0_WRDS_1S3.
*/
#define ERAY0_WRDS04 (ERAY0_WRDS_1S3)

/** \brief 410, Write Data Section 5 */
#define ERAY0_WRDS_1S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C410u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S4.
* To use register names with standard convension, please use ERAY0_WRDS_1S4.
*/
#define ERAY0_WRDS05 (ERAY0_WRDS_1S4)

/** \brief 414, Write Data Section 6 */
#define ERAY0_WRDS_1S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C414u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S5.
* To use register names with standard convension, please use ERAY0_WRDS_1S5.
*/
#define ERAY0_WRDS06 (ERAY0_WRDS_1S5)

/** \brief 418, Write Data Section 7 */
#define ERAY0_WRDS_1S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C418u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S6.
* To use register names with standard convension, please use ERAY0_WRDS_1S6.
*/
#define ERAY0_WRDS07 (ERAY0_WRDS_1S6)

/** \brief 41C, Write Data Section 8 */
#define ERAY0_WRDS_1S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C41Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S7.
* To use register names with standard convension, please use ERAY0_WRDS_1S7.
*/
#define ERAY0_WRDS08 (ERAY0_WRDS_1S7)

/** \brief 420, Write Data Section 9 */
#define ERAY0_WRDS_1S8 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C420u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S8.
* To use register names with standard convension, please use ERAY0_WRDS_1S8.
*/
#define ERAY0_WRDS09 (ERAY0_WRDS_1S8)

/** \brief 424, Write Data Section 10 */
#define ERAY0_WRDS_1S9 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C424u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S9.
* To use register names with standard convension, please use ERAY0_WRDS_1S9.
*/
#define ERAY0_WRDS10 (ERAY0_WRDS_1S9)

/** \brief 428, Write Data Section 11 */
#define ERAY0_WRDS_1S10 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C428u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S10.
* To use register names with standard convension, please use ERAY0_WRDS_1S10.
*/
#define ERAY0_WRDS11 (ERAY0_WRDS_1S10)

/** \brief 42C, Write Data Section 12 */
#define ERAY0_WRDS_1S11 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C42Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S11.
* To use register names with standard convension, please use ERAY0_WRDS_1S11.
*/
#define ERAY0_WRDS12 (ERAY0_WRDS_1S11)

/** \brief 430, Write Data Section 13 */
#define ERAY0_WRDS_1S12 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C430u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S12.
* To use register names with standard convension, please use ERAY0_WRDS_1S12.
*/
#define ERAY0_WRDS13 (ERAY0_WRDS_1S12)

/** \brief 434, Write Data Section 14 */
#define ERAY0_WRDS_1S13 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C434u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S13.
* To use register names with standard convension, please use ERAY0_WRDS_1S13.
*/
#define ERAY0_WRDS14 (ERAY0_WRDS_1S13)

/** \brief 438, Write Data Section 15 */
#define ERAY0_WRDS_1S14 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C438u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S14.
* To use register names with standard convension, please use ERAY0_WRDS_1S14.
*/
#define ERAY0_WRDS15 (ERAY0_WRDS_1S14)

/** \brief 43C, Write Data Section 16 */
#define ERAY0_WRDS_1S15 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C43Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S15.
* To use register names with standard convension, please use ERAY0_WRDS_1S15.
*/
#define ERAY0_WRDS16 (ERAY0_WRDS_1S15)

/** \brief 440, Write Data Section 17 */
#define ERAY0_WRDS_1S16 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C440u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S16.
* To use register names with standard convension, please use ERAY0_WRDS_1S16.
*/
#define ERAY0_WRDS17 (ERAY0_WRDS_1S16)

/** \brief 444, Write Data Section 18 */
#define ERAY0_WRDS_1S17 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C444u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S17.
* To use register names with standard convension, please use ERAY0_WRDS_1S17.
*/
#define ERAY0_WRDS18 (ERAY0_WRDS_1S17)

/** \brief 448, Write Data Section 19 */
#define ERAY0_WRDS_1S18 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C448u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S18.
* To use register names with standard convension, please use ERAY0_WRDS_1S18.
*/
#define ERAY0_WRDS19 (ERAY0_WRDS_1S18)

/** \brief 44C, Write Data Section 20 */
#define ERAY0_WRDS_1S19 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C44Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S19.
* To use register names with standard convension, please use ERAY0_WRDS_1S19.
*/
#define ERAY0_WRDS20 (ERAY0_WRDS_1S19)

/** \brief 450, Write Data Section 21 */
#define ERAY0_WRDS_1S20 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C450u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S20.
* To use register names with standard convension, please use ERAY0_WRDS_1S20.
*/
#define ERAY0_WRDS21 (ERAY0_WRDS_1S20)

/** \brief 454, Write Data Section 22 */
#define ERAY0_WRDS_1S21 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C454u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S21.
* To use register names with standard convension, please use ERAY0_WRDS_1S21.
*/
#define ERAY0_WRDS22 (ERAY0_WRDS_1S21)

/** \brief 458, Write Data Section 23 */
#define ERAY0_WRDS_1S22 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C458u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S22.
* To use register names with standard convension, please use ERAY0_WRDS_1S22.
*/
#define ERAY0_WRDS23 (ERAY0_WRDS_1S22)

/** \brief 45C, Write Data Section 24 */
#define ERAY0_WRDS_1S23 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C45Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S23.
* To use register names with standard convension, please use ERAY0_WRDS_1S23.
*/
#define ERAY0_WRDS24 (ERAY0_WRDS_1S23)

/** \brief 460, Write Data Section 25 */
#define ERAY0_WRDS_1S24 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C460u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S24.
* To use register names with standard convension, please use ERAY0_WRDS_1S24.
*/
#define ERAY0_WRDS25 (ERAY0_WRDS_1S24)

/** \brief 464, Write Data Section 26 */
#define ERAY0_WRDS_1S25 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C464u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S25.
* To use register names with standard convension, please use ERAY0_WRDS_1S25.
*/
#define ERAY0_WRDS26 (ERAY0_WRDS_1S25)

/** \brief 468, Write Data Section 27 */
#define ERAY0_WRDS_1S26 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C468u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S26.
* To use register names with standard convension, please use ERAY0_WRDS_1S26.
*/
#define ERAY0_WRDS27 (ERAY0_WRDS_1S26)

/** \brief 46C, Write Data Section 28 */
#define ERAY0_WRDS_1S27 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C46Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S27.
* To use register names with standard convension, please use ERAY0_WRDS_1S27.
*/
#define ERAY0_WRDS28 (ERAY0_WRDS_1S27)

/** \brief 470, Write Data Section 29 */
#define ERAY0_WRDS_1S28 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C470u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S28.
* To use register names with standard convension, please use ERAY0_WRDS_1S28.
*/
#define ERAY0_WRDS29 (ERAY0_WRDS_1S28)

/** \brief 474, Write Data Section 30 */
#define ERAY0_WRDS_1S29 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C474u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S29.
* To use register names with standard convension, please use ERAY0_WRDS_1S29.
*/
#define ERAY0_WRDS30 (ERAY0_WRDS_1S29)

/** \brief 478, Write Data Section 31 */
#define ERAY0_WRDS_1S30 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C478u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S30.
* To use register names with standard convension, please use ERAY0_WRDS_1S30.
*/
#define ERAY0_WRDS31 (ERAY0_WRDS_1S30)

/** \brief 47C, Write Data Section 32 */
#define ERAY0_WRDS_1S31 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C47Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S31.
* To use register names with standard convension, please use ERAY0_WRDS_1S31.
*/
#define ERAY0_WRDS32 (ERAY0_WRDS_1S31)

/** \brief 480, Write Data Section 33 */
#define ERAY0_WRDS_1S32 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C480u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S32.
* To use register names with standard convension, please use ERAY0_WRDS_1S32.
*/
#define ERAY0_WRDS33 (ERAY0_WRDS_1S32)

/** \brief 484, Write Data Section 34 */
#define ERAY0_WRDS_1S33 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C484u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S33.
* To use register names with standard convension, please use ERAY0_WRDS_1S33.
*/
#define ERAY0_WRDS34 (ERAY0_WRDS_1S33)

/** \brief 488, Write Data Section 35 */
#define ERAY0_WRDS_1S34 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C488u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S34.
* To use register names with standard convension, please use ERAY0_WRDS_1S34.
*/
#define ERAY0_WRDS35 (ERAY0_WRDS_1S34)

/** \brief 48C, Write Data Section 36 */
#define ERAY0_WRDS_1S35 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C48Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S35.
* To use register names with standard convension, please use ERAY0_WRDS_1S35.
*/
#define ERAY0_WRDS36 (ERAY0_WRDS_1S35)

/** \brief 490, Write Data Section 37 */
#define ERAY0_WRDS_1S36 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C490u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S36.
* To use register names with standard convension, please use ERAY0_WRDS_1S36.
*/
#define ERAY0_WRDS37 (ERAY0_WRDS_1S36)

/** \brief 494, Write Data Section 38 */
#define ERAY0_WRDS_1S37 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C494u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S37.
* To use register names with standard convension, please use ERAY0_WRDS_1S37.
*/
#define ERAY0_WRDS38 (ERAY0_WRDS_1S37)

/** \brief 498, Write Data Section 39 */
#define ERAY0_WRDS_1S38 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C498u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S38.
* To use register names with standard convension, please use ERAY0_WRDS_1S38.
*/
#define ERAY0_WRDS39 (ERAY0_WRDS_1S38)

/** \brief 49C, Write Data Section 40 */
#define ERAY0_WRDS_1S39 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C49Cu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S39.
* To use register names with standard convension, please use ERAY0_WRDS_1S39.
*/
#define ERAY0_WRDS40 (ERAY0_WRDS_1S39)

/** \brief 4A0, Write Data Section 41 */
#define ERAY0_WRDS_1S40 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4A0u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S40.
* To use register names with standard convension, please use ERAY0_WRDS_1S40.
*/
#define ERAY0_WRDS41 (ERAY0_WRDS_1S40)

/** \brief 4A4, Write Data Section 42 */
#define ERAY0_WRDS_1S41 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4A4u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S41.
* To use register names with standard convension, please use ERAY0_WRDS_1S41.
*/
#define ERAY0_WRDS42 (ERAY0_WRDS_1S41)

/** \brief 4A8, Write Data Section 43 */
#define ERAY0_WRDS_1S42 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4A8u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S42.
* To use register names with standard convension, please use ERAY0_WRDS_1S42.
*/
#define ERAY0_WRDS43 (ERAY0_WRDS_1S42)

/** \brief 4AC, Write Data Section 44 */
#define ERAY0_WRDS_1S43 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4ACu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S43.
* To use register names with standard convension, please use ERAY0_WRDS_1S43.
*/
#define ERAY0_WRDS44 (ERAY0_WRDS_1S43)

/** \brief 4B0, Write Data Section 45 */
#define ERAY0_WRDS_1S44 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4B0u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S44.
* To use register names with standard convension, please use ERAY0_WRDS_1S44.
*/
#define ERAY0_WRDS45 (ERAY0_WRDS_1S44)

/** \brief 4B4, Write Data Section 46 */
#define ERAY0_WRDS_1S45 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4B4u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S45.
* To use register names with standard convension, please use ERAY0_WRDS_1S45.
*/
#define ERAY0_WRDS46 (ERAY0_WRDS_1S45)

/** \brief 4B8, Write Data Section 47 */
#define ERAY0_WRDS_1S46 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4B8u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S46.
* To use register names with standard convension, please use ERAY0_WRDS_1S46.
*/
#define ERAY0_WRDS47 (ERAY0_WRDS_1S46)

/** \brief 4BC, Write Data Section 48 */
#define ERAY0_WRDS_1S47 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4BCu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S47.
* To use register names with standard convension, please use ERAY0_WRDS_1S47.
*/
#define ERAY0_WRDS48 (ERAY0_WRDS_1S47)

/** \brief 4C0, Write Data Section 49 */
#define ERAY0_WRDS_1S48 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4C0u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S48.
* To use register names with standard convension, please use ERAY0_WRDS_1S48.
*/
#define ERAY0_WRDS49 (ERAY0_WRDS_1S48)

/** \brief 4C4, Write Data Section 50 */
#define ERAY0_WRDS_1S49 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4C4u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S49.
* To use register names with standard convension, please use ERAY0_WRDS_1S49.
*/
#define ERAY0_WRDS50 (ERAY0_WRDS_1S49)

/** \brief 4C8, Write Data Section 51 */
#define ERAY0_WRDS_1S50 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4C8u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S50.
* To use register names with standard convension, please use ERAY0_WRDS_1S50.
*/
#define ERAY0_WRDS51 (ERAY0_WRDS_1S50)

/** \brief 4CC, Write Data Section 52 */
#define ERAY0_WRDS_1S51 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4CCu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S51.
* To use register names with standard convension, please use ERAY0_WRDS_1S51.
*/
#define ERAY0_WRDS52 (ERAY0_WRDS_1S51)

/** \brief 4D0, Write Data Section 53 */
#define ERAY0_WRDS_1S52 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4D0u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S52.
* To use register names with standard convension, please use ERAY0_WRDS_1S52.
*/
#define ERAY0_WRDS53 (ERAY0_WRDS_1S52)

/** \brief 4D4, Write Data Section 54 */
#define ERAY0_WRDS_1S53 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4D4u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S53.
* To use register names with standard convension, please use ERAY0_WRDS_1S53.
*/
#define ERAY0_WRDS54 (ERAY0_WRDS_1S53)

/** \brief 4D8, Write Data Section 55 */
#define ERAY0_WRDS_1S54 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4D8u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S54.
* To use register names with standard convension, please use ERAY0_WRDS_1S54.
*/
#define ERAY0_WRDS55 (ERAY0_WRDS_1S54)

/** \brief 4DC, Write Data Section 56 */
#define ERAY0_WRDS_1S55 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4DCu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S55.
* To use register names with standard convension, please use ERAY0_WRDS_1S55.
*/
#define ERAY0_WRDS56 (ERAY0_WRDS_1S55)

/** \brief 4E0, Write Data Section 57 */
#define ERAY0_WRDS_1S56 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4E0u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S56.
* To use register names with standard convension, please use ERAY0_WRDS_1S56.
*/
#define ERAY0_WRDS57 (ERAY0_WRDS_1S56)

/** \brief 4E4, Write Data Section 58 */
#define ERAY0_WRDS_1S57 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4E4u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S57.
* To use register names with standard convension, please use ERAY0_WRDS_1S57.
*/
#define ERAY0_WRDS58 (ERAY0_WRDS_1S57)

/** \brief 4E8, Write Data Section 59 */
#define ERAY0_WRDS_1S58 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4E8u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S58.
* To use register names with standard convension, please use ERAY0_WRDS_1S58.
*/
#define ERAY0_WRDS59 (ERAY0_WRDS_1S58)

/** \brief 4EC, Write Data Section 60 */
#define ERAY0_WRDS_1S59 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4ECu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S59.
* To use register names with standard convension, please use ERAY0_WRDS_1S59.
*/
#define ERAY0_WRDS60 (ERAY0_WRDS_1S59)

/** \brief 4F0, Write Data Section 61 */
#define ERAY0_WRDS_1S60 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4F0u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S60.
* To use register names with standard convension, please use ERAY0_WRDS_1S60.
*/
#define ERAY0_WRDS61 (ERAY0_WRDS_1S60)

/** \brief 4F4, Write Data Section 62 */
#define ERAY0_WRDS_1S61 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4F4u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S61.
* To use register names with standard convension, please use ERAY0_WRDS_1S61.
*/
#define ERAY0_WRDS62 (ERAY0_WRDS_1S61)

/** \brief 4F8, Write Data Section 63 */
#define ERAY0_WRDS_1S62 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4F8u)
/** Alias (User Manual Name) for ERAY0_WRDS_1S62.
* To use register names with standard convension, please use ERAY0_WRDS_1S62.
*/
#define ERAY0_WRDS63 (ERAY0_WRDS_1S62)

/** \brief 4FC, Write Data Section 64 */
#define ERAY0_WRDS_1S63 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4FCu)
/** Alias (User Manual Name) for ERAY0_WRDS_1S63.
* To use register names with standard convension, please use ERAY0_WRDS_1S63.
*/
#define ERAY0_WRDS64 (ERAY0_WRDS_1S63)

/** \brief 500, Write Header Section 1 */
#define ERAY0_WRHS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRHS1*)0xF001C500u)

/** \brief 504, Write Header Section 2 */
#define ERAY0_WRHS2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRHS2*)0xF001C504u)

/** \brief 508, Write Header Section 3 */
#define ERAY0_WRHS3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_WRHS3*)0xF001C508u)

/** \brief 510, Input Buffer Command Mask */
#define ERAY0_IBCM /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_IBCM*)0xF001C510u)

/** \brief 514, Input Buffer Command Request */
#define ERAY0_IBCR /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_IBCR*)0xF001C514u)

/** \brief 600, Read Data Section 1 */
#define ERAY0_RDDS_1S0 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C600u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S0.
* To use register names with standard convension, please use ERAY0_RDDS_1S0.
*/
#define ERAY0_RDDS01 (ERAY0_RDDS_1S0)

/** \brief 604, Read Data Section 2 */
#define ERAY0_RDDS_1S1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C604u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S1.
* To use register names with standard convension, please use ERAY0_RDDS_1S1.
*/
#define ERAY0_RDDS02 (ERAY0_RDDS_1S1)

/** \brief 608, Read Data Section 3 */
#define ERAY0_RDDS_1S2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C608u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S2.
* To use register names with standard convension, please use ERAY0_RDDS_1S2.
*/
#define ERAY0_RDDS03 (ERAY0_RDDS_1S2)

/** \brief 60C, Read Data Section 4 */
#define ERAY0_RDDS_1S3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C60Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S3.
* To use register names with standard convension, please use ERAY0_RDDS_1S3.
*/
#define ERAY0_RDDS04 (ERAY0_RDDS_1S3)

/** \brief 610, Read Data Section 5 */
#define ERAY0_RDDS_1S4 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C610u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S4.
* To use register names with standard convension, please use ERAY0_RDDS_1S4.
*/
#define ERAY0_RDDS05 (ERAY0_RDDS_1S4)

/** \brief 614, Read Data Section 6 */
#define ERAY0_RDDS_1S5 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C614u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S5.
* To use register names with standard convension, please use ERAY0_RDDS_1S5.
*/
#define ERAY0_RDDS06 (ERAY0_RDDS_1S5)

/** \brief 618, Read Data Section 7 */
#define ERAY0_RDDS_1S6 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C618u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S6.
* To use register names with standard convension, please use ERAY0_RDDS_1S6.
*/
#define ERAY0_RDDS07 (ERAY0_RDDS_1S6)

/** \brief 61C, Read Data Section 8 */
#define ERAY0_RDDS_1S7 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C61Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S7.
* To use register names with standard convension, please use ERAY0_RDDS_1S7.
*/
#define ERAY0_RDDS08 (ERAY0_RDDS_1S7)

/** \brief 620, Read Data Section 9 */
#define ERAY0_RDDS_1S8 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C620u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S8.
* To use register names with standard convension, please use ERAY0_RDDS_1S8.
*/
#define ERAY0_RDDS09 (ERAY0_RDDS_1S8)

/** \brief 624, Read Data Section 10 */
#define ERAY0_RDDS_1S9 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C624u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S9.
* To use register names with standard convension, please use ERAY0_RDDS_1S9.
*/
#define ERAY0_RDDS10 (ERAY0_RDDS_1S9)

/** \brief 628, Read Data Section 11 */
#define ERAY0_RDDS_1S10 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C628u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S10.
* To use register names with standard convension, please use ERAY0_RDDS_1S10.
*/
#define ERAY0_RDDS11 (ERAY0_RDDS_1S10)

/** \brief 62C, Read Data Section 12 */
#define ERAY0_RDDS_1S11 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C62Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S11.
* To use register names with standard convension, please use ERAY0_RDDS_1S11.
*/
#define ERAY0_RDDS12 (ERAY0_RDDS_1S11)

/** \brief 630, Read Data Section 13 */
#define ERAY0_RDDS_1S12 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C630u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S12.
* To use register names with standard convension, please use ERAY0_RDDS_1S12.
*/
#define ERAY0_RDDS13 (ERAY0_RDDS_1S12)

/** \brief 634, Read Data Section 14 */
#define ERAY0_RDDS_1S13 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C634u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S13.
* To use register names with standard convension, please use ERAY0_RDDS_1S13.
*/
#define ERAY0_RDDS14 (ERAY0_RDDS_1S13)

/** \brief 638, Read Data Section 15 */
#define ERAY0_RDDS_1S14 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C638u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S14.
* To use register names with standard convension, please use ERAY0_RDDS_1S14.
*/
#define ERAY0_RDDS15 (ERAY0_RDDS_1S14)

/** \brief 63C, Read Data Section 16 */
#define ERAY0_RDDS_1S15 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C63Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S15.
* To use register names with standard convension, please use ERAY0_RDDS_1S15.
*/
#define ERAY0_RDDS16 (ERAY0_RDDS_1S15)

/** \brief 640, Read Data Section 17 */
#define ERAY0_RDDS_1S16 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C640u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S16.
* To use register names with standard convension, please use ERAY0_RDDS_1S16.
*/
#define ERAY0_RDDS17 (ERAY0_RDDS_1S16)

/** \brief 644, Read Data Section 18 */
#define ERAY0_RDDS_1S17 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C644u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S17.
* To use register names with standard convension, please use ERAY0_RDDS_1S17.
*/
#define ERAY0_RDDS18 (ERAY0_RDDS_1S17)

/** \brief 648, Read Data Section 19 */
#define ERAY0_RDDS_1S18 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C648u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S18.
* To use register names with standard convension, please use ERAY0_RDDS_1S18.
*/
#define ERAY0_RDDS19 (ERAY0_RDDS_1S18)

/** \brief 64C, Read Data Section 20 */
#define ERAY0_RDDS_1S19 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C64Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S19.
* To use register names with standard convension, please use ERAY0_RDDS_1S19.
*/
#define ERAY0_RDDS20 (ERAY0_RDDS_1S19)

/** \brief 650, Read Data Section 21 */
#define ERAY0_RDDS_1S20 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C650u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S20.
* To use register names with standard convension, please use ERAY0_RDDS_1S20.
*/
#define ERAY0_RDDS21 (ERAY0_RDDS_1S20)

/** \brief 654, Read Data Section 22 */
#define ERAY0_RDDS_1S21 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C654u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S21.
* To use register names with standard convension, please use ERAY0_RDDS_1S21.
*/
#define ERAY0_RDDS22 (ERAY0_RDDS_1S21)

/** \brief 658, Read Data Section 23 */
#define ERAY0_RDDS_1S22 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C658u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S22.
* To use register names with standard convension, please use ERAY0_RDDS_1S22.
*/
#define ERAY0_RDDS23 (ERAY0_RDDS_1S22)

/** \brief 65C, Read Data Section 24 */
#define ERAY0_RDDS_1S23 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C65Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S23.
* To use register names with standard convension, please use ERAY0_RDDS_1S23.
*/
#define ERAY0_RDDS24 (ERAY0_RDDS_1S23)

/** \brief 660, Read Data Section 25 */
#define ERAY0_RDDS_1S24 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C660u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S24.
* To use register names with standard convension, please use ERAY0_RDDS_1S24.
*/
#define ERAY0_RDDS25 (ERAY0_RDDS_1S24)

/** \brief 664, Read Data Section 26 */
#define ERAY0_RDDS_1S25 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C664u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S25.
* To use register names with standard convension, please use ERAY0_RDDS_1S25.
*/
#define ERAY0_RDDS26 (ERAY0_RDDS_1S25)

/** \brief 668, Read Data Section 27 */
#define ERAY0_RDDS_1S26 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C668u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S26.
* To use register names with standard convension, please use ERAY0_RDDS_1S26.
*/
#define ERAY0_RDDS27 (ERAY0_RDDS_1S26)

/** \brief 66C, Read Data Section 28 */
#define ERAY0_RDDS_1S27 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C66Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S27.
* To use register names with standard convension, please use ERAY0_RDDS_1S27.
*/
#define ERAY0_RDDS28 (ERAY0_RDDS_1S27)

/** \brief 670, Read Data Section 29 */
#define ERAY0_RDDS_1S28 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C670u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S28.
* To use register names with standard convension, please use ERAY0_RDDS_1S28.
*/
#define ERAY0_RDDS29 (ERAY0_RDDS_1S28)

/** \brief 674, Read Data Section 30 */
#define ERAY0_RDDS_1S29 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C674u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S29.
* To use register names with standard convension, please use ERAY0_RDDS_1S29.
*/
#define ERAY0_RDDS30 (ERAY0_RDDS_1S29)

/** \brief 678, Read Data Section 31 */
#define ERAY0_RDDS_1S30 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C678u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S30.
* To use register names with standard convension, please use ERAY0_RDDS_1S30.
*/
#define ERAY0_RDDS31 (ERAY0_RDDS_1S30)

/** \brief 67C, Read Data Section 32 */
#define ERAY0_RDDS_1S31 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C67Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S31.
* To use register names with standard convension, please use ERAY0_RDDS_1S31.
*/
#define ERAY0_RDDS32 (ERAY0_RDDS_1S31)

/** \brief 680, Read Data Section 33 */
#define ERAY0_RDDS_1S32 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C680u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S32.
* To use register names with standard convension, please use ERAY0_RDDS_1S32.
*/
#define ERAY0_RDDS33 (ERAY0_RDDS_1S32)

/** \brief 684, Read Data Section 34 */
#define ERAY0_RDDS_1S33 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C684u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S33.
* To use register names with standard convension, please use ERAY0_RDDS_1S33.
*/
#define ERAY0_RDDS34 (ERAY0_RDDS_1S33)

/** \brief 688, Read Data Section 35 */
#define ERAY0_RDDS_1S34 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C688u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S34.
* To use register names with standard convension, please use ERAY0_RDDS_1S34.
*/
#define ERAY0_RDDS35 (ERAY0_RDDS_1S34)

/** \brief 68C, Read Data Section 36 */
#define ERAY0_RDDS_1S35 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C68Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S35.
* To use register names with standard convension, please use ERAY0_RDDS_1S35.
*/
#define ERAY0_RDDS36 (ERAY0_RDDS_1S35)

/** \brief 690, Read Data Section 37 */
#define ERAY0_RDDS_1S36 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C690u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S36.
* To use register names with standard convension, please use ERAY0_RDDS_1S36.
*/
#define ERAY0_RDDS37 (ERAY0_RDDS_1S36)

/** \brief 694, Read Data Section 38 */
#define ERAY0_RDDS_1S37 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C694u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S37.
* To use register names with standard convension, please use ERAY0_RDDS_1S37.
*/
#define ERAY0_RDDS38 (ERAY0_RDDS_1S37)

/** \brief 698, Read Data Section 39 */
#define ERAY0_RDDS_1S38 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C698u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S38.
* To use register names with standard convension, please use ERAY0_RDDS_1S38.
*/
#define ERAY0_RDDS39 (ERAY0_RDDS_1S38)

/** \brief 69C, Read Data Section 40 */
#define ERAY0_RDDS_1S39 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C69Cu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S39.
* To use register names with standard convension, please use ERAY0_RDDS_1S39.
*/
#define ERAY0_RDDS40 (ERAY0_RDDS_1S39)

/** \brief 6A0, Read Data Section 41 */
#define ERAY0_RDDS_1S40 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6A0u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S40.
* To use register names with standard convension, please use ERAY0_RDDS_1S40.
*/
#define ERAY0_RDDS41 (ERAY0_RDDS_1S40)

/** \brief 6A4, Read Data Section 42 */
#define ERAY0_RDDS_1S41 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6A4u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S41.
* To use register names with standard convension, please use ERAY0_RDDS_1S41.
*/
#define ERAY0_RDDS42 (ERAY0_RDDS_1S41)

/** \brief 6A8, Read Data Section 43 */
#define ERAY0_RDDS_1S42 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6A8u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S42.
* To use register names with standard convension, please use ERAY0_RDDS_1S42.
*/
#define ERAY0_RDDS43 (ERAY0_RDDS_1S42)

/** \brief 6AC, Read Data Section 44 */
#define ERAY0_RDDS_1S43 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6ACu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S43.
* To use register names with standard convension, please use ERAY0_RDDS_1S43.
*/
#define ERAY0_RDDS44 (ERAY0_RDDS_1S43)

/** \brief 6B0, Read Data Section 45 */
#define ERAY0_RDDS_1S44 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6B0u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S44.
* To use register names with standard convension, please use ERAY0_RDDS_1S44.
*/
#define ERAY0_RDDS45 (ERAY0_RDDS_1S44)

/** \brief 6B4, Read Data Section 46 */
#define ERAY0_RDDS_1S45 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6B4u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S45.
* To use register names with standard convension, please use ERAY0_RDDS_1S45.
*/
#define ERAY0_RDDS46 (ERAY0_RDDS_1S45)

/** \brief 6B8, Read Data Section 47 */
#define ERAY0_RDDS_1S46 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6B8u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S46.
* To use register names with standard convension, please use ERAY0_RDDS_1S46.
*/
#define ERAY0_RDDS47 (ERAY0_RDDS_1S46)

/** \brief 6BC, Read Data Section 48 */
#define ERAY0_RDDS_1S47 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6BCu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S47.
* To use register names with standard convension, please use ERAY0_RDDS_1S47.
*/
#define ERAY0_RDDS48 (ERAY0_RDDS_1S47)

/** \brief 6C0, Read Data Section 49 */
#define ERAY0_RDDS_1S48 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6C0u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S48.
* To use register names with standard convension, please use ERAY0_RDDS_1S48.
*/
#define ERAY0_RDDS49 (ERAY0_RDDS_1S48)

/** \brief 6C4, Read Data Section 50 */
#define ERAY0_RDDS_1S49 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6C4u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S49.
* To use register names with standard convension, please use ERAY0_RDDS_1S49.
*/
#define ERAY0_RDDS50 (ERAY0_RDDS_1S49)

/** \brief 6C8, Read Data Section 51 */
#define ERAY0_RDDS_1S50 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6C8u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S50.
* To use register names with standard convension, please use ERAY0_RDDS_1S50.
*/
#define ERAY0_RDDS51 (ERAY0_RDDS_1S50)

/** \brief 6CC, Read Data Section 52 */
#define ERAY0_RDDS_1S51 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6CCu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S51.
* To use register names with standard convension, please use ERAY0_RDDS_1S51.
*/
#define ERAY0_RDDS52 (ERAY0_RDDS_1S51)

/** \brief 6D0, Read Data Section 53 */
#define ERAY0_RDDS_1S52 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6D0u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S52.
* To use register names with standard convension, please use ERAY0_RDDS_1S52.
*/
#define ERAY0_RDDS53 (ERAY0_RDDS_1S52)

/** \brief 6D4, Read Data Section 54 */
#define ERAY0_RDDS_1S53 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6D4u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S53.
* To use register names with standard convension, please use ERAY0_RDDS_1S53.
*/
#define ERAY0_RDDS54 (ERAY0_RDDS_1S53)

/** \brief 6D8, Read Data Section 55 */
#define ERAY0_RDDS_1S54 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6D8u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S54.
* To use register names with standard convension, please use ERAY0_RDDS_1S54.
*/
#define ERAY0_RDDS55 (ERAY0_RDDS_1S54)

/** \brief 6DC, Read Data Section 56 */
#define ERAY0_RDDS_1S55 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6DCu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S55.
* To use register names with standard convension, please use ERAY0_RDDS_1S55.
*/
#define ERAY0_RDDS56 (ERAY0_RDDS_1S55)

/** \brief 6E0, Read Data Section 57 */
#define ERAY0_RDDS_1S56 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6E0u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S56.
* To use register names with standard convension, please use ERAY0_RDDS_1S56.
*/
#define ERAY0_RDDS57 (ERAY0_RDDS_1S56)

/** \brief 6E4, Read Data Section 58 */
#define ERAY0_RDDS_1S57 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6E4u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S57.
* To use register names with standard convension, please use ERAY0_RDDS_1S57.
*/
#define ERAY0_RDDS58 (ERAY0_RDDS_1S57)

/** \brief 6E8, Read Data Section 59 */
#define ERAY0_RDDS_1S58 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6E8u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S58.
* To use register names with standard convension, please use ERAY0_RDDS_1S58.
*/
#define ERAY0_RDDS59 (ERAY0_RDDS_1S58)

/** \brief 6EC, Read Data Section 60 */
#define ERAY0_RDDS_1S59 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6ECu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S59.
* To use register names with standard convension, please use ERAY0_RDDS_1S59.
*/
#define ERAY0_RDDS60 (ERAY0_RDDS_1S59)

/** \brief 6F0, Read Data Section 61 */
#define ERAY0_RDDS_1S60 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6F0u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S60.
* To use register names with standard convension, please use ERAY0_RDDS_1S60.
*/
#define ERAY0_RDDS61 (ERAY0_RDDS_1S60)

/** \brief 6F4, Read Data Section 62 */
#define ERAY0_RDDS_1S61 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6F4u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S61.
* To use register names with standard convension, please use ERAY0_RDDS_1S61.
*/
#define ERAY0_RDDS62 (ERAY0_RDDS_1S61)

/** \brief 6F8, Read Data Section 63 */
#define ERAY0_RDDS_1S62 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6F8u)
/** Alias (User Manual Name) for ERAY0_RDDS_1S62.
* To use register names with standard convension, please use ERAY0_RDDS_1S62.
*/
#define ERAY0_RDDS63 (ERAY0_RDDS_1S62)

/** \brief 6FC, Read Data Section 64 */
#define ERAY0_RDDS_1S63 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6FCu)
/** Alias (User Manual Name) for ERAY0_RDDS_1S63.
* To use register names with standard convension, please use ERAY0_RDDS_1S63.
*/
#define ERAY0_RDDS64 (ERAY0_RDDS_1S63)

/** \brief 700, Read Header Section 1 */
#define ERAY0_RDHS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDHS1*)0xF001C700u)

/** \brief 704, Read Header Section 2 */
#define ERAY0_RDHS2 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDHS2*)0xF001C704u)

/** \brief 708, Read Header Section 3 */
#define ERAY0_RDHS3 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_RDHS3*)0xF001C708u)

/** \brief 70C, Message Buffer Status */
#define ERAY0_MBS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_MBS*)0xF001C70Cu)

/** \brief 710, Output Buffer Command Mask */
#define ERAY0_OBCM /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OBCM*)0xF001C710u)

/** \brief 714, Output Buffer Command Request */
#define ERAY0_OBCR /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OBCR*)0xF001C714u)

/** \brief 870, OCDS Trigger Set Select */
#define ERAY0_OTSS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OTSS*)0xF001C870u)

/** \brief 8E8, OCDS Control and Status */
#define ERAY0_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_OCS*)0xF001C8E8u)

/** \brief 8EC, Kernel Reset Status Clear Register */
#define ERAY0_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_KRSTCLR*)0xF001C8ECu)

/** \brief 8F0, Kernel Reset Register 1 */
#define ERAY0_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_KRST1*)0xF001C8F0u)

/** \brief 8F4, Kernel Reset Register 0 */
#define ERAY0_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_KRST0*)0xF001C8F4u)

/** \brief 8FC, Access Enable Register 0 */
#define ERAY0_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_ERAY_ACCEN0*)0xF001C8FCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXERAY_REG_H */