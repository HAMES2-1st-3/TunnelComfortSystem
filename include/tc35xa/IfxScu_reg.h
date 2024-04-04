/**
 * \file IfxScu_reg.h
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
 * \defgroup IfxSfr_Scu_Registers_Cfg Scu address
 * \ingroup IfxSfr_Scu_Registers
 * 
 * \defgroup IfxSfr_Scu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Scu_Registers_Cfg
 *
 * \defgroup IfxSfr_Scu_Registers_Cfg_Scu 2-SCU
 * \ingroup IfxSfr_Scu_Registers_Cfg
 *
 *
 */
#ifndef IFXSCU_REG_H
#define IFXSCU_REG_H 1
/******************************************************************************/
#include "IfxScu_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Scu_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SCU object */
#define MODULE_SCU /*lint --e(923, 9078)*/ ((*(Ifx_SCU*)0xF0036000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Scu_Registers_Cfg_Scu
 * \{  */
/** \brief 8, Identification Register */
#define SCU_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ID*)0xF0036008u)

/** \brief 10, OSC Control Register */
#define SCU_OSCCON /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_OSCCON*)0xF0036010u)

/** \brief 14, System PLL Status Register */
#define SCU_SYSPLLSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SYSPLLSTAT*)0xF0036014u)

/** \brief 18, System PLL Configuration 0 Register */
#define SCU_SYSPLLCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SYSPLLCON0*)0xF0036018u)

/** \brief 1C, System PLL Configuration 1 Register */
#define SCU_SYSPLLCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SYSPLLCON1*)0xF003601Cu)

/** \brief 20, System PLL Configuration 2 Register */
#define SCU_SYSPLLCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SYSPLLCON2*)0xF0036020u)

/** \brief 24, Peripheral PLL Status Register */
#define SCU_PERPLLSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PERPLLSTAT*)0xF0036024u)

/** \brief 28, Peripheral PLL Configuration 0 Register */
#define SCU_PERPLLCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PERPLLCON0*)0xF0036028u)

/** \brief 2C, Peripheral PLL Configuration 1 Register */
#define SCU_PERPLLCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PERPLLCON1*)0xF003602Cu)

/** \brief 30, CCU Clock Control Register 0 */
#define SCU_CCUCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON0*)0xF0036030u)

/** \brief 34, CCU Clock Control Register 1 */
#define SCU_CCUCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON1*)0xF0036034u)

/** \brief 38, Fractional Divider Register */
#define SCU_FDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_FDR*)0xF0036038u)

/** \brief 3C, External Clock Control Register */
#define SCU_EXTCON /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EXTCON*)0xF003603Cu)

/** \brief 40, CCU Clock Control Register 2 */
#define SCU_CCUCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON2*)0xF0036040u)

/** \brief 44, CCU Clock Control Register 3 */
#define SCU_CCUCON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON3*)0xF0036044u)

/** \brief 48, CCU Clock Control Register 4 */
#define SCU_CCUCON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON4*)0xF0036048u)

/** \brief 4C, CCU Clock Control Register 5 */
#define SCU_CCUCON5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON5*)0xF003604Cu)

/** \brief 50, Reset Status Register */
#define SCU_RSTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_RSTSTAT*)0xF0036050u)

/** \brief 58, Reset Configuration Register */
#define SCU_RSTCON /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_RSTCON*)0xF0036058u)

/** \brief 5C, Application Reset Disable Register */
#define SCU_ARSTDIS /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ARSTDIS*)0xF003605Cu)

/** \brief 60, Software Reset Configuration Register */
#define SCU_SWRSTCON /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SWRSTCON*)0xF0036060u)

/** \brief 64, Additional Reset Control Register */
#define SCU_RSTCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_RSTCON2*)0xF0036064u)

/** \brief 68, Reset Configuration Register 3 */
#define SCU_RSTCON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_RSTCON3*)0xF0036068u)

/** \brief 70, ESR0 Input Configuration Register */
#define SCU_ESRCFGX0_ESRCFGX /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ESRCFGX_ESRCFGX*)0xF0036070u)
/** Alias (User Manual Name) for SCU_ESRCFGX0_ESRCFGX.
* To use register names with standard convension, please use SCU_ESRCFGX0_ESRCFGX.
*/
#define SCU_ESRCFG0 (SCU_ESRCFGX0_ESRCFGX)

/** \brief 74, ESR1 Input Configuration Register */
#define SCU_ESRCFGX1_ESRCFGX /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ESRCFGX_ESRCFGX*)0xF0036074u)
/** Alias (User Manual Name) for SCU_ESRCFGX1_ESRCFGX.
* To use register names with standard convension, please use SCU_ESRCFGX1_ESRCFGX.
*/
#define SCU_ESRCFG1 (SCU_ESRCFGX1_ESRCFGX)

/** \brief 78, ESR Output Configuration Register */
#define SCU_ESROCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ESROCFG*)0xF0036078u)

/** \brief 7C, System Control Register */
#define SCU_SYSCON /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SYSCON*)0xF003607Cu)

/** \brief 80, CCU Clock Control Register 6 */
#define SCU_CCUCON6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON6*)0xF0036080u)

/** \brief 84, CCU Clock Control Register 7 */
#define SCU_CCUCON7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON7*)0xF0036084u)

/** \brief 88, CCU Clock Control Register 8 */
#define SCU_CCUCON8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CCUCON8*)0xF0036088u)

/** \brief 9C, ESR Pad Driver Mode Register */
#define SCU_PDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PDR*)0xF003609Cu)

/** \brief A0, Input/Output Control Register */
#define SCU_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_IOCR*)0xF00360A0u)

/** \brief A4, ESR Output Register */
#define SCU_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_OUT*)0xF00360A4u)

/** \brief A8, ESR Output Modification Register */
#define SCU_OMR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_OMR*)0xF00360A8u)

/** \brief AC, ESR Input Register */
#define SCU_IN /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_IN*)0xF00360ACu)

/** \brief C0, Start-up Status Register */
#define SCU_STSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_STSTAT*)0xF00360C0u)

/** \brief C4, Start-up Configuration Register */
#define SCU_STCON /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_STCON*)0xF00360C4u)

/** \brief C8, Power Management Control and Status Register */
#define SCU_PMCSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMCSR0*)0xF00360C8u)

/** \brief CC, Power Management Control and Status Register */
#define SCU_PMCSR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMCSR1*)0xF00360CCu)

/** \brief D0, Power Management Control and Status Register */
#define SCU_PMCSR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMCSR2*)0xF00360D0u)

/** \brief D4, Power Management Control and Status Register */
#define SCU_PMCSR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMCSR3*)0xF00360D4u)

/** \brief D8, Power Management Control and Status Register */
#define SCU_PMCSR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMCSR4*)0xF00360D8u)

/** \brief DC, Power Management Control and Status Register */
#define SCU_PMCSR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMCSR5*)0xF00360DCu)

/** \brief E4, Power Management Status Register 0 */
#define SCU_PMSTAT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMSTAT0*)0xF00360E4u)

/** \brief E8, Standby and Wake-up Control Register 1 */
#define SCU_PMSWCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMSWCR1*)0xF00360E8u)

/** \brief FC, Emergency Stop Register */
#define SCU_EMSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EMSR*)0xF00360FCu)

/** \brief 100, Emergency Stop Software set and clear register */
#define SCU_EMSSW /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EMSSW*)0xF0036100u)

/** \brief 104, Core Die Temperature Sensor Status Register */
#define SCU_DTSCSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_DTSCSTAT*)0xF0036104u)

/** \brief 108, Core Die Temperature Sensor Limit Register */
#define SCU_DTSCLIM /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_DTSCLIM*)0xF0036108u)

/** \brief 120, Trap Disable Register 1 */
#define SCU_TRAPDIS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_TRAPDIS1*)0xF0036120u)

/** \brief 124, Trap Status Register */
#define SCU_TRAPSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_TRAPSTAT*)0xF0036124u)

/** \brief 128, Trap Set Register */
#define SCU_TRAPSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_TRAPSET*)0xF0036128u)

/** \brief 12C, Trap Clear Register */
#define SCU_TRAPCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_TRAPCLR*)0xF003612Cu)

/** \brief 130, Trap Disable Register 0 */
#define SCU_TRAPDIS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_TRAPDIS0*)0xF0036130u)

/** \brief 134, LCL CPU0 and CPU2 Control Register */
#define SCU_LCLCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_LCLCON0*)0xF0036134u)

/** \brief 138, LCL CPU1 and CPU3 Control Register */
#define SCU_LCLCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_LCLCON1*)0xF0036138u)

/** \brief 13C, LCL Test Register */
#define SCU_LCLTEST /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_LCLTEST*)0xF003613Cu)

/** \brief 140, Chip Identification Register */
#define SCU_CHIPID /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_CHIPID*)0xF0036140u)

/** \brief 144, Manufacturer Identification Register */
#define SCU_MANID /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_MANID*)0xF0036144u)

/** \brief 14C, Alternate Address Control Register */
#define SCU_SWAPCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SWAPCTRL*)0xF003614Cu)

/** \brief 164, Logic BIST Control 0 Register */
#define SCU_LBISTCTRL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_LBISTCTRL0*)0xF0036164u)

/** \brief 168, Logic BIST Control 1 Register */
#define SCU_LBISTCTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_LBISTCTRL1*)0xF0036168u)

/** \brief 16C, Logic BIST Control 2 Register */
#define SCU_LBISTCTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_LBISTCTRL2*)0xF003616Cu)

/** \brief 170, Logic BIST Control 3 Register */
#define SCU_LBISTCTRL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_LBISTCTRL3*)0xF0036170u)

/** \brief 184, Start-up Memory Register 1 */
#define SCU_STMEM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_STMEM1*)0xF0036184u)

/** \brief 188, Start-up Memory Register 2 */
#define SCU_STMEM2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_STMEM2*)0xF0036188u)

/** \brief 18C, Pad Disable Control Register */
#define SCU_PDISC /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PDISC*)0xF003618Cu)

/** \brief 198, Power Management Transition Control and Status Register 0 */
#define SCU_PMTRCSR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMTRCSR0*)0xF0036198u)

/** \brief 19C, Power Management Transition Control and Status Register 1 */
#define SCU_PMTRCSR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMTRCSR1*)0xF003619Cu)

/** \brief 1A0, Power Management Transition Control and Status Register 2 */
#define SCU_PMTRCSR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMTRCSR2*)0xF00361A0u)

/** \brief 1A4, Power Management Transition Control and Status Register 3 */
#define SCU_PMTRCSR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PMTRCSR3*)0xF00361A4u)

/** \brief 1C0, Start-up Memory Register 3 */
#define SCU_STMEM3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_STMEM3*)0xF00361C0u)

/** \brief 1C4, Start-up Memory Register 4 */
#define SCU_STMEM4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_STMEM4*)0xF00361C4u)

/** \brief 1C8, Start-up Memory Register 5 */
#define SCU_STMEM5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_STMEM5*)0xF00361C8u)

/** \brief 1CC, Start-up Memory Register 6 */
#define SCU_STMEM6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_STMEM6*)0xF00361CCu)

/** \brief 1E0, Overlay Enable Register */
#define SCU_OVCENABLE /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_OVCENABLE*)0xF00361E0u)

/** \brief 1E4, Overlay Control Register */
#define SCU_OVCCON /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_OVCCON*)0xF00361E4u)

/** \brief 20C, External Input Filter Register */
#define SCU_EIFILT /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EIFILT*)0xF003620Cu)

/** \brief 210, External Input Channel Register 0 */
#define SCU_EICR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EICR*)0xF0036210u)

/** \brief 214, External Input Channel Register 1 */
#define SCU_EICR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EICR*)0xF0036214u)

/** \brief 218, External Input Channel Register 2 */
#define SCU_EICR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EICR*)0xF0036218u)

/** \brief 21C, External Input Channel Register 3 */
#define SCU_EICR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EICR*)0xF003621Cu)

/** \brief 220, External Input Flag Register */
#define SCU_EIFR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EIFR*)0xF0036220u)

/** \brief 224, Flag Modification Register */
#define SCU_FMR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_FMR*)0xF0036224u)

/** \brief 228, Pattern Detection Result Register */
#define SCU_PDRR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_PDRR*)0xF0036228u)

/** \brief 22C, Flag Gating Register 0 */
#define SCU_IGCR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_IGCR*)0xF003622Cu)

/** \brief 230, Flag Gating Register 1 */
#define SCU_IGCR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_IGCR*)0xF0036230u)

/** \brief 234, Flag Gating Register 2 */
#define SCU_IGCR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_IGCR*)0xF0036234u)

/** \brief 238, Flag Gating Register 3 */
#define SCU_IGCR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_IGCR*)0xF0036238u)

/** \brief 24C, CPU0 WDT Control Register 0 */
#define SCU_WDTCPU0_CON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_CON0*)0xF003624Cu)
/** Alias (User Manual Name) for SCU_WDTCPU0_CON0.
* To use register names with standard convension, please use SCU_WDTCPU0_CON0.
*/
#define SCU_WDTCPU0CON0 (SCU_WDTCPU0_CON0)

/** \brief 250, CPU0 WDT Control Register 1 */
#define SCU_WDTCPU0_CON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_CON1*)0xF0036250u)
/** Alias (User Manual Name) for SCU_WDTCPU0_CON1.
* To use register names with standard convension, please use SCU_WDTCPU0_CON1.
*/
#define SCU_WDTCPU0CON1 (SCU_WDTCPU0_CON1)

/** \brief 254, CPU0 WDT Status Register */
#define SCU_WDTCPU0_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_SR*)0xF0036254u)
/** Alias (User Manual Name) for SCU_WDTCPU0_SR.
* To use register names with standard convension, please use SCU_WDTCPU0_SR.
*/
#define SCU_WDTCPU0SR (SCU_WDTCPU0_SR)

/** \brief 258, CPU1 WDT Control Register 0 */
#define SCU_WDTCPU1_CON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_CON0*)0xF0036258u)
/** Alias (User Manual Name) for SCU_WDTCPU1_CON0.
* To use register names with standard convension, please use SCU_WDTCPU1_CON0.
*/
#define SCU_WDTCPU1CON0 (SCU_WDTCPU1_CON0)

/** \brief 25C, CPU1 WDT Control Register 1 */
#define SCU_WDTCPU1_CON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_CON1*)0xF003625Cu)
/** Alias (User Manual Name) for SCU_WDTCPU1_CON1.
* To use register names with standard convension, please use SCU_WDTCPU1_CON1.
*/
#define SCU_WDTCPU1CON1 (SCU_WDTCPU1_CON1)

/** \brief 260, CPU1 WDT Status Register */
#define SCU_WDTCPU1_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_SR*)0xF0036260u)
/** Alias (User Manual Name) for SCU_WDTCPU1_SR.
* To use register names with standard convension, please use SCU_WDTCPU1_SR.
*/
#define SCU_WDTCPU1SR (SCU_WDTCPU1_SR)

/** \brief 264, CPU2 WDT Control Register 0 */
#define SCU_WDTCPU2_CON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_CON0*)0xF0036264u)
/** Alias (User Manual Name) for SCU_WDTCPU2_CON0.
* To use register names with standard convension, please use SCU_WDTCPU2_CON0.
*/
#define SCU_WDTCPU2CON0 (SCU_WDTCPU2_CON0)

/** \brief 268, CPU2 WDT Control Register 1 */
#define SCU_WDTCPU2_CON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_CON1*)0xF0036268u)
/** Alias (User Manual Name) for SCU_WDTCPU2_CON1.
* To use register names with standard convension, please use SCU_WDTCPU2_CON1.
*/
#define SCU_WDTCPU2CON1 (SCU_WDTCPU2_CON1)

/** \brief 26C, CPU2 WDT Status Register */
#define SCU_WDTCPU2_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTCPU_SR*)0xF003626Cu)
/** Alias (User Manual Name) for SCU_WDTCPU2_SR.
* To use register names with standard convension, please use SCU_WDTCPU2_SR.
*/
#define SCU_WDTCPU2SR (SCU_WDTCPU2_SR)

/** \brief 29C, ENDINIT Global Control Register 0 */
#define SCU_EICON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EICON0*)0xF003629Cu)

/** \brief 2A0, ENDINIT Global Control Register 1 */
#define SCU_EICON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EICON1*)0xF00362A0u)

/** \brief 2A4, ENDINIT Timeout Counter Status Register */
#define SCU_EISR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_EISR*)0xF00362A4u)

/** \brief 2A8, Safety WDT Control Register 0 */
#define SCU_WDTS_CON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTS_CON0*)0xF00362A8u)
/** Alias (User Manual Name) for SCU_WDTS_CON0.
* To use register names with standard convension, please use SCU_WDTS_CON0.
*/
#define SCU_WDTSCON0 (SCU_WDTS_CON0)

/** \brief 2AC, Safety WDT Control Register 1 */
#define SCU_WDTS_CON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTS_CON1*)0xF00362ACu)
/** Alias (User Manual Name) for SCU_WDTS_CON1.
* To use register names with standard convension, please use SCU_WDTS_CON1.
*/
#define SCU_WDTSCON1 (SCU_WDTS_CON1)

/** \brief 2B0, Safety WDT Status Register */
#define SCU_WDTS_SR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_WDTS_SR*)0xF00362B0u)
/** Alias (User Manual Name) for SCU_WDTS_SR.
* To use register names with standard convension, please use SCU_WDTS_SR.
*/
#define SCU_WDTSSR (SCU_WDTS_SR)

/** \brief 2B4, Safety ENDINIT Control Register 0 */
#define SCU_SEICON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SEICON0*)0xF00362B4u)

/** \brief 2B8, Safety ENDINIT Control Register 1 */
#define SCU_SEICON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SEICON1*)0xF00362B8u)

/** \brief 2BC, Safety ENDINIT Timeout Status Register */
#define SCU_SEISR /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_SEISR*)0xF00362BCu)

/** \brief 3F0, Access Enable Register 11 */
#define SCU_ACCEN11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ACCEN11*)0xF00363F0u)

/** \brief 3F4, Access Enable Register 10 */
#define SCU_ACCEN10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ACCEN10*)0xF00363F4u)

/** \brief 3F8, Access Enable Register 01 */
#define SCU_ACCEN01 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ACCEN01*)0xF00363F8u)

/** \brief 3FC, Access Enable Register 00 */
#define SCU_ACCEN00 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCU_ACCEN00*)0xF00363FCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXSCU_REG_H */
