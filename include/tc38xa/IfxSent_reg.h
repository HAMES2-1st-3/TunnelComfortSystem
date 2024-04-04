/**
 * \file IfxSent_reg.h
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
 * \defgroup IfxSfr_Sent_Registers_Cfg Sent address
 * \ingroup IfxSfr_Sent_Registers
 * 
 * \defgroup IfxSfr_Sent_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Sent_Registers_Cfg
 *
 * \defgroup IfxSfr_Sent_Registers_Cfg_Sent 2-SENT
 * \ingroup IfxSfr_Sent_Registers_Cfg
 *
 *
 */
#ifndef IFXSENT_REG_H
#define IFXSENT_REG_H 1
/******************************************************************************/
#include "IfxSent_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Sent_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SENT object */
#define MODULE_SENT /*lint --e(923, 9078)*/ ((*(Ifx_SENT*)0xF0003000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Sent_Registers_Cfg_Sent
 * \{  */
/** \brief 0, Clock Control Register */
#define SENT_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CLC*)0xF0003000u)

/** \brief 8, Module Identification Register */
#define SENT_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_ID*)0xF0003008u)

/** \brief C, SENT Fractional Divider Register */
#define SENT_FDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_FDR*)0xF000300Cu)

/** \brief 14, Interrupt Overview Register */
#define SENT_INTOV /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_INTOV*)0xF0003014u)

/** \brief 18, Module Time Stamp Register */
#define SENT_TSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_TSR*)0xF0003018u)

/** \brief 1C, Time Stamp Predivider Register */
#define SENT_TPD /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_TPD*)0xF000301Cu)

/** \brief 80, Receive Data Register 0 */
#define SENT_RDR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF0003080u)

/** \brief 84, Receive Data Register 1 */
#define SENT_RDR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF0003084u)

/** \brief 88, Receive Data Register 2 */
#define SENT_RDR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF0003088u)

/** \brief 8C, Receive Data Register 3 */
#define SENT_RDR3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF000308Cu)

/** \brief 90, Receive Data Register 4 */
#define SENT_RDR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF0003090u)

/** \brief 94, Receive Data Register 5 */
#define SENT_RDR5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF0003094u)

/** \brief 98, Receive Data Register 6 */
#define SENT_RDR6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF0003098u)

/** \brief 9C, Receive Data Register 7 */
#define SENT_RDR7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF000309Cu)

/** \brief A0, Receive Data Register 8 */
#define SENT_RDR8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030A0u)

/** \brief A4, Receive Data Register 9 */
#define SENT_RDR9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030A4u)

/** \brief A8, Receive Data Register 10 */
#define SENT_RDR10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030A8u)

/** \brief AC, Receive Data Register 11 */
#define SENT_RDR11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030ACu)

/** \brief B0, Receive Data Register 12 */
#define SENT_RDR12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030B0u)

/** \brief B4, Receive Data Register 13 */
#define SENT_RDR13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030B4u)

/** \brief B8, Receive Data Register 14 */
#define SENT_RDR14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030B8u)

/** \brief BC, Receive Data Register 15 */
#define SENT_RDR15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030BCu)

/** \brief C0, Receive Data Register 16 */
#define SENT_RDR16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030C0u)

/** \brief C4, Receive Data Register 17 */
#define SENT_RDR17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030C4u)

/** \brief C8, Receive Data Register 18 */
#define SENT_RDR18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030C8u)

/** \brief CC, Receive Data Register 19 */
#define SENT_RDR19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030CCu)

/** \brief D0, Receive Data Register 20 */
#define SENT_RDR20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030D0u)

/** \brief D4, Receive Data Register 21 */
#define SENT_RDR21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030D4u)

/** \brief D8, Receive Data Register 22 */
#define SENT_RDR22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030D8u)

/** \brief DC, Receive Data Register 23 */
#define SENT_RDR23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030DCu)

/** \brief E0, Receive Data Register 24 */
#define SENT_RDR24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RDR*)0xF00030E0u)

/** \brief E8, OCDS Control and Status */
#define SENT_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_OCS*)0xF00030E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define SENT_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_KRSTCLR*)0xF00030ECu)

/** \brief F0, Kernel Reset Register 1 */
#define SENT_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_KRST1*)0xF00030F0u)

/** \brief F4, Kernel Reset Register 0 */
#define SENT_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_KRST0*)0xF00030F4u)

/** \brief F8, Access Enable Register 1 */
#define SENT_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_ACCEN1*)0xF00030F8u)

/** \brief FC, Access Enable Register 0 */
#define SENT_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_ACCEN0*)0xF00030FCu)

/** \brief 100, Channel Pre Divider Register 0 */
#define SENT_CH0_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003100u)
/** Alias (User Manual Name) for SENT_CH0_CPDR.
* To use register names with standard convension, please use SENT_CH0_CPDR.
*/
#define SENT_CPDR0 (SENT_CH0_CPDR)

/** \brief 104, Channel Fractional Divider Register 0 */
#define SENT_CH0_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003104u)
/** Alias (User Manual Name) for SENT_CH0_CFDR.
* To use register names with standard convension, please use SENT_CH0_CFDR.
*/
#define SENT_CFDR0 (SENT_CH0_CFDR)

/** \brief 108, Receiver Control Register 0 */
#define SENT_CH0_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003108u)
/** Alias (User Manual Name) for SENT_CH0_RCR.
* To use register names with standard convension, please use SENT_CH0_RCR.
*/
#define SENT_RCR0 (SENT_CH0_RCR)

/** \brief 10C, Receive Status Register 0 */
#define SENT_CH0_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000310Cu)
/** Alias (User Manual Name) for SENT_CH0_RSR.
* To use register names with standard convension, please use SENT_CH0_RSR.
*/
#define SENT_RSR0 (SENT_CH0_RSR)

/** \brief 110, Serial Data and Status Register 0 */
#define SENT_CH0_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003110u)
/** Alias (User Manual Name) for SENT_CH0_SDS.
* To use register names with standard convension, please use SENT_CH0_SDS.
*/
#define SENT_SDS0 (SENT_CH0_SDS)

/** \brief 114, Input and Output Control Register 0 */
#define SENT_CH0_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003114u)
/** Alias (User Manual Name) for SENT_CH0_IOCR.
* To use register names with standard convension, please use SENT_CH0_IOCR.
*/
#define SENT_IOCR0 (SENT_CH0_IOCR)

/** \brief 118, SPC Control Register 0 */
#define SENT_CH0_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003118u)
/** Alias (User Manual Name) for SENT_CH0_SCR.
* To use register names with standard convension, please use SENT_CH0_SCR.
*/
#define SENT_SCR0 (SENT_CH0_SCR)

/** \brief 11C, Receive Data View Register 0 */
#define SENT_CH0_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000311Cu)
/** Alias (User Manual Name) for SENT_CH0_VIEW.
* To use register names with standard convension, please use SENT_CH0_VIEW.
*/
#define SENT_VIEW0 (SENT_CH0_VIEW)

/** \brief 120, Interrupt Status Register 0 */
#define SENT_CH0_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003120u)
/** Alias (User Manual Name) for SENT_CH0_INTSTAT.
* To use register names with standard convension, please use SENT_CH0_INTSTAT.
*/
#define SENT_INTSTAT0 (SENT_CH0_INTSTAT)

/** \brief 124, Interrupt Set Register 0 */
#define SENT_CH0_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003124u)
/** Alias (User Manual Name) for SENT_CH0_INTSET.
* To use register names with standard convension, please use SENT_CH0_INTSET.
*/
#define SENT_INTSET0 (SENT_CH0_INTSET)

/** \brief 128, Interrupt Clear Register 0 */
#define SENT_CH0_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003128u)
/** Alias (User Manual Name) for SENT_CH0_INTCLR.
* To use register names with standard convension, please use SENT_CH0_INTCLR.
*/
#define SENT_INTCLR0 (SENT_CH0_INTCLR)

/** \brief 12C, Interrupt Enable Register 0 */
#define SENT_CH0_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000312Cu)
/** Alias (User Manual Name) for SENT_CH0_INTEN.
* To use register names with standard convension, please use SENT_CH0_INTEN.
*/
#define SENT_INTEN0 (SENT_CH0_INTEN)

/** \brief 130, Interrupt Node Pointer Register 0 */
#define SENT_CH0_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003130u)
/** Alias (User Manual Name) for SENT_CH0_INP.
* To use register names with standard convension, please use SENT_CH0_INP.
*/
#define SENT_INP0 (SENT_CH0_INP)

/** \brief 134, Watch Dog Timer Register 0 */
#define SENT_CH0_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003134u)
/** Alias (User Manual Name) for SENT_CH0_WDT.
* To use register names with standard convension, please use SENT_CH0_WDT.
*/
#define SENT_WDT0 (SENT_CH0_WDT)

/** \brief 140, Channel Pre Divider Register 1 */
#define SENT_CH1_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003140u)
/** Alias (User Manual Name) for SENT_CH1_CPDR.
* To use register names with standard convension, please use SENT_CH1_CPDR.
*/
#define SENT_CPDR1 (SENT_CH1_CPDR)

/** \brief 144, Channel Fractional Divider Register 1 */
#define SENT_CH1_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003144u)
/** Alias (User Manual Name) for SENT_CH1_CFDR.
* To use register names with standard convension, please use SENT_CH1_CFDR.
*/
#define SENT_CFDR1 (SENT_CH1_CFDR)

/** \brief 148, Receiver Control Register 1 */
#define SENT_CH1_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003148u)
/** Alias (User Manual Name) for SENT_CH1_RCR.
* To use register names with standard convension, please use SENT_CH1_RCR.
*/
#define SENT_RCR1 (SENT_CH1_RCR)

/** \brief 14C, Receive Status Register 1 */
#define SENT_CH1_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000314Cu)
/** Alias (User Manual Name) for SENT_CH1_RSR.
* To use register names with standard convension, please use SENT_CH1_RSR.
*/
#define SENT_RSR1 (SENT_CH1_RSR)

/** \brief 150, Serial Data and Status Register 1 */
#define SENT_CH1_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003150u)
/** Alias (User Manual Name) for SENT_CH1_SDS.
* To use register names with standard convension, please use SENT_CH1_SDS.
*/
#define SENT_SDS1 (SENT_CH1_SDS)

/** \brief 154, Input and Output Control Register 1 */
#define SENT_CH1_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003154u)
/** Alias (User Manual Name) for SENT_CH1_IOCR.
* To use register names with standard convension, please use SENT_CH1_IOCR.
*/
#define SENT_IOCR1 (SENT_CH1_IOCR)

/** \brief 158, SPC Control Register 1 */
#define SENT_CH1_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003158u)
/** Alias (User Manual Name) for SENT_CH1_SCR.
* To use register names with standard convension, please use SENT_CH1_SCR.
*/
#define SENT_SCR1 (SENT_CH1_SCR)

/** \brief 15C, Receive Data View Register 1 */
#define SENT_CH1_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000315Cu)
/** Alias (User Manual Name) for SENT_CH1_VIEW.
* To use register names with standard convension, please use SENT_CH1_VIEW.
*/
#define SENT_VIEW1 (SENT_CH1_VIEW)

/** \brief 160, Interrupt Status Register 1 */
#define SENT_CH1_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003160u)
/** Alias (User Manual Name) for SENT_CH1_INTSTAT.
* To use register names with standard convension, please use SENT_CH1_INTSTAT.
*/
#define SENT_INTSTAT1 (SENT_CH1_INTSTAT)

/** \brief 164, Interrupt Set Register 1 */
#define SENT_CH1_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003164u)
/** Alias (User Manual Name) for SENT_CH1_INTSET.
* To use register names with standard convension, please use SENT_CH1_INTSET.
*/
#define SENT_INTSET1 (SENT_CH1_INTSET)

/** \brief 168, Interrupt Clear Register 1 */
#define SENT_CH1_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003168u)
/** Alias (User Manual Name) for SENT_CH1_INTCLR.
* To use register names with standard convension, please use SENT_CH1_INTCLR.
*/
#define SENT_INTCLR1 (SENT_CH1_INTCLR)

/** \brief 16C, Interrupt Enable Register 1 */
#define SENT_CH1_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000316Cu)
/** Alias (User Manual Name) for SENT_CH1_INTEN.
* To use register names with standard convension, please use SENT_CH1_INTEN.
*/
#define SENT_INTEN1 (SENT_CH1_INTEN)

/** \brief 170, Interrupt Node Pointer Register 1 */
#define SENT_CH1_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003170u)
/** Alias (User Manual Name) for SENT_CH1_INP.
* To use register names with standard convension, please use SENT_CH1_INP.
*/
#define SENT_INP1 (SENT_CH1_INP)

/** \brief 174, Watch Dog Timer Register 1 */
#define SENT_CH1_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003174u)
/** Alias (User Manual Name) for SENT_CH1_WDT.
* To use register names with standard convension, please use SENT_CH1_WDT.
*/
#define SENT_WDT1 (SENT_CH1_WDT)

/** \brief 180, Channel Pre Divider Register 2 */
#define SENT_CH2_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003180u)
/** Alias (User Manual Name) for SENT_CH2_CPDR.
* To use register names with standard convension, please use SENT_CH2_CPDR.
*/
#define SENT_CPDR2 (SENT_CH2_CPDR)

/** \brief 184, Channel Fractional Divider Register 2 */
#define SENT_CH2_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003184u)
/** Alias (User Manual Name) for SENT_CH2_CFDR.
* To use register names with standard convension, please use SENT_CH2_CFDR.
*/
#define SENT_CFDR2 (SENT_CH2_CFDR)

/** \brief 188, Receiver Control Register 2 */
#define SENT_CH2_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003188u)
/** Alias (User Manual Name) for SENT_CH2_RCR.
* To use register names with standard convension, please use SENT_CH2_RCR.
*/
#define SENT_RCR2 (SENT_CH2_RCR)

/** \brief 18C, Receive Status Register 2 */
#define SENT_CH2_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000318Cu)
/** Alias (User Manual Name) for SENT_CH2_RSR.
* To use register names with standard convension, please use SENT_CH2_RSR.
*/
#define SENT_RSR2 (SENT_CH2_RSR)

/** \brief 190, Serial Data and Status Register 2 */
#define SENT_CH2_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003190u)
/** Alias (User Manual Name) for SENT_CH2_SDS.
* To use register names with standard convension, please use SENT_CH2_SDS.
*/
#define SENT_SDS2 (SENT_CH2_SDS)

/** \brief 194, Input and Output Control Register 2 */
#define SENT_CH2_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003194u)
/** Alias (User Manual Name) for SENT_CH2_IOCR.
* To use register names with standard convension, please use SENT_CH2_IOCR.
*/
#define SENT_IOCR2 (SENT_CH2_IOCR)

/** \brief 198, SPC Control Register 2 */
#define SENT_CH2_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003198u)
/** Alias (User Manual Name) for SENT_CH2_SCR.
* To use register names with standard convension, please use SENT_CH2_SCR.
*/
#define SENT_SCR2 (SENT_CH2_SCR)

/** \brief 19C, Receive Data View Register 2 */
#define SENT_CH2_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000319Cu)
/** Alias (User Manual Name) for SENT_CH2_VIEW.
* To use register names with standard convension, please use SENT_CH2_VIEW.
*/
#define SENT_VIEW2 (SENT_CH2_VIEW)

/** \brief 1A0, Interrupt Status Register 2 */
#define SENT_CH2_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00031A0u)
/** Alias (User Manual Name) for SENT_CH2_INTSTAT.
* To use register names with standard convension, please use SENT_CH2_INTSTAT.
*/
#define SENT_INTSTAT2 (SENT_CH2_INTSTAT)

/** \brief 1A4, Interrupt Set Register 2 */
#define SENT_CH2_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00031A4u)
/** Alias (User Manual Name) for SENT_CH2_INTSET.
* To use register names with standard convension, please use SENT_CH2_INTSET.
*/
#define SENT_INTSET2 (SENT_CH2_INTSET)

/** \brief 1A8, Interrupt Clear Register 2 */
#define SENT_CH2_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00031A8u)
/** Alias (User Manual Name) for SENT_CH2_INTCLR.
* To use register names with standard convension, please use SENT_CH2_INTCLR.
*/
#define SENT_INTCLR2 (SENT_CH2_INTCLR)

/** \brief 1AC, Interrupt Enable Register 2 */
#define SENT_CH2_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00031ACu)
/** Alias (User Manual Name) for SENT_CH2_INTEN.
* To use register names with standard convension, please use SENT_CH2_INTEN.
*/
#define SENT_INTEN2 (SENT_CH2_INTEN)

/** \brief 1B0, Interrupt Node Pointer Register 2 */
#define SENT_CH2_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00031B0u)
/** Alias (User Manual Name) for SENT_CH2_INP.
* To use register names with standard convension, please use SENT_CH2_INP.
*/
#define SENT_INP2 (SENT_CH2_INP)

/** \brief 1B4, Watch Dog Timer Register 2 */
#define SENT_CH2_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00031B4u)
/** Alias (User Manual Name) for SENT_CH2_WDT.
* To use register names with standard convension, please use SENT_CH2_WDT.
*/
#define SENT_WDT2 (SENT_CH2_WDT)

/** \brief 1C0, Channel Pre Divider Register 3 */
#define SENT_CH3_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF00031C0u)
/** Alias (User Manual Name) for SENT_CH3_CPDR.
* To use register names with standard convension, please use SENT_CH3_CPDR.
*/
#define SENT_CPDR3 (SENT_CH3_CPDR)

/** \brief 1C4, Channel Fractional Divider Register 3 */
#define SENT_CH3_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF00031C4u)
/** Alias (User Manual Name) for SENT_CH3_CFDR.
* To use register names with standard convension, please use SENT_CH3_CFDR.
*/
#define SENT_CFDR3 (SENT_CH3_CFDR)

/** \brief 1C8, Receiver Control Register 3 */
#define SENT_CH3_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF00031C8u)
/** Alias (User Manual Name) for SENT_CH3_RCR.
* To use register names with standard convension, please use SENT_CH3_RCR.
*/
#define SENT_RCR3 (SENT_CH3_RCR)

/** \brief 1CC, Receive Status Register 3 */
#define SENT_CH3_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF00031CCu)
/** Alias (User Manual Name) for SENT_CH3_RSR.
* To use register names with standard convension, please use SENT_CH3_RSR.
*/
#define SENT_RSR3 (SENT_CH3_RSR)

/** \brief 1D0, Serial Data and Status Register 3 */
#define SENT_CH3_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF00031D0u)
/** Alias (User Manual Name) for SENT_CH3_SDS.
* To use register names with standard convension, please use SENT_CH3_SDS.
*/
#define SENT_SDS3 (SENT_CH3_SDS)

/** \brief 1D4, Input and Output Control Register 3 */
#define SENT_CH3_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF00031D4u)
/** Alias (User Manual Name) for SENT_CH3_IOCR.
* To use register names with standard convension, please use SENT_CH3_IOCR.
*/
#define SENT_IOCR3 (SENT_CH3_IOCR)

/** \brief 1D8, SPC Control Register 3 */
#define SENT_CH3_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF00031D8u)
/** Alias (User Manual Name) for SENT_CH3_SCR.
* To use register names with standard convension, please use SENT_CH3_SCR.
*/
#define SENT_SCR3 (SENT_CH3_SCR)

/** \brief 1DC, Receive Data View Register 3 */
#define SENT_CH3_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF00031DCu)
/** Alias (User Manual Name) for SENT_CH3_VIEW.
* To use register names with standard convension, please use SENT_CH3_VIEW.
*/
#define SENT_VIEW3 (SENT_CH3_VIEW)

/** \brief 1E0, Interrupt Status Register 3 */
#define SENT_CH3_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00031E0u)
/** Alias (User Manual Name) for SENT_CH3_INTSTAT.
* To use register names with standard convension, please use SENT_CH3_INTSTAT.
*/
#define SENT_INTSTAT3 (SENT_CH3_INTSTAT)

/** \brief 1E4, Interrupt Set Register 3 */
#define SENT_CH3_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00031E4u)
/** Alias (User Manual Name) for SENT_CH3_INTSET.
* To use register names with standard convension, please use SENT_CH3_INTSET.
*/
#define SENT_INTSET3 (SENT_CH3_INTSET)

/** \brief 1E8, Interrupt Clear Register 3 */
#define SENT_CH3_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00031E8u)
/** Alias (User Manual Name) for SENT_CH3_INTCLR.
* To use register names with standard convension, please use SENT_CH3_INTCLR.
*/
#define SENT_INTCLR3 (SENT_CH3_INTCLR)

/** \brief 1EC, Interrupt Enable Register 3 */
#define SENT_CH3_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00031ECu)
/** Alias (User Manual Name) for SENT_CH3_INTEN.
* To use register names with standard convension, please use SENT_CH3_INTEN.
*/
#define SENT_INTEN3 (SENT_CH3_INTEN)

/** \brief 1F0, Interrupt Node Pointer Register 3 */
#define SENT_CH3_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00031F0u)
/** Alias (User Manual Name) for SENT_CH3_INP.
* To use register names with standard convension, please use SENT_CH3_INP.
*/
#define SENT_INP3 (SENT_CH3_INP)

/** \brief 1F4, Watch Dog Timer Register 3 */
#define SENT_CH3_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00031F4u)
/** Alias (User Manual Name) for SENT_CH3_WDT.
* To use register names with standard convension, please use SENT_CH3_WDT.
*/
#define SENT_WDT3 (SENT_CH3_WDT)

/** \brief 200, Channel Pre Divider Register 4 */
#define SENT_CH4_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003200u)
/** Alias (User Manual Name) for SENT_CH4_CPDR.
* To use register names with standard convension, please use SENT_CH4_CPDR.
*/
#define SENT_CPDR4 (SENT_CH4_CPDR)

/** \brief 204, Channel Fractional Divider Register 4 */
#define SENT_CH4_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003204u)
/** Alias (User Manual Name) for SENT_CH4_CFDR.
* To use register names with standard convension, please use SENT_CH4_CFDR.
*/
#define SENT_CFDR4 (SENT_CH4_CFDR)

/** \brief 208, Receiver Control Register 4 */
#define SENT_CH4_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003208u)
/** Alias (User Manual Name) for SENT_CH4_RCR.
* To use register names with standard convension, please use SENT_CH4_RCR.
*/
#define SENT_RCR4 (SENT_CH4_RCR)

/** \brief 20C, Receive Status Register 4 */
#define SENT_CH4_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000320Cu)
/** Alias (User Manual Name) for SENT_CH4_RSR.
* To use register names with standard convension, please use SENT_CH4_RSR.
*/
#define SENT_RSR4 (SENT_CH4_RSR)

/** \brief 210, Serial Data and Status Register 4 */
#define SENT_CH4_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003210u)
/** Alias (User Manual Name) for SENT_CH4_SDS.
* To use register names with standard convension, please use SENT_CH4_SDS.
*/
#define SENT_SDS4 (SENT_CH4_SDS)

/** \brief 214, Input and Output Control Register 4 */
#define SENT_CH4_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003214u)
/** Alias (User Manual Name) for SENT_CH4_IOCR.
* To use register names with standard convension, please use SENT_CH4_IOCR.
*/
#define SENT_IOCR4 (SENT_CH4_IOCR)

/** \brief 218, SPC Control Register 4 */
#define SENT_CH4_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003218u)
/** Alias (User Manual Name) for SENT_CH4_SCR.
* To use register names with standard convension, please use SENT_CH4_SCR.
*/
#define SENT_SCR4 (SENT_CH4_SCR)

/** \brief 21C, Receive Data View Register 4 */
#define SENT_CH4_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000321Cu)
/** Alias (User Manual Name) for SENT_CH4_VIEW.
* To use register names with standard convension, please use SENT_CH4_VIEW.
*/
#define SENT_VIEW4 (SENT_CH4_VIEW)

/** \brief 220, Interrupt Status Register 4 */
#define SENT_CH4_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003220u)
/** Alias (User Manual Name) for SENT_CH4_INTSTAT.
* To use register names with standard convension, please use SENT_CH4_INTSTAT.
*/
#define SENT_INTSTAT4 (SENT_CH4_INTSTAT)

/** \brief 224, Interrupt Set Register 4 */
#define SENT_CH4_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003224u)
/** Alias (User Manual Name) for SENT_CH4_INTSET.
* To use register names with standard convension, please use SENT_CH4_INTSET.
*/
#define SENT_INTSET4 (SENT_CH4_INTSET)

/** \brief 228, Interrupt Clear Register 4 */
#define SENT_CH4_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003228u)
/** Alias (User Manual Name) for SENT_CH4_INTCLR.
* To use register names with standard convension, please use SENT_CH4_INTCLR.
*/
#define SENT_INTCLR4 (SENT_CH4_INTCLR)

/** \brief 22C, Interrupt Enable Register 4 */
#define SENT_CH4_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000322Cu)
/** Alias (User Manual Name) for SENT_CH4_INTEN.
* To use register names with standard convension, please use SENT_CH4_INTEN.
*/
#define SENT_INTEN4 (SENT_CH4_INTEN)

/** \brief 230, Interrupt Node Pointer Register 4 */
#define SENT_CH4_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003230u)
/** Alias (User Manual Name) for SENT_CH4_INP.
* To use register names with standard convension, please use SENT_CH4_INP.
*/
#define SENT_INP4 (SENT_CH4_INP)

/** \brief 234, Watch Dog Timer Register 4 */
#define SENT_CH4_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003234u)
/** Alias (User Manual Name) for SENT_CH4_WDT.
* To use register names with standard convension, please use SENT_CH4_WDT.
*/
#define SENT_WDT4 (SENT_CH4_WDT)

/** \brief 240, Channel Pre Divider Register 5 */
#define SENT_CH5_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003240u)
/** Alias (User Manual Name) for SENT_CH5_CPDR.
* To use register names with standard convension, please use SENT_CH5_CPDR.
*/
#define SENT_CPDR5 (SENT_CH5_CPDR)

/** \brief 244, Channel Fractional Divider Register 5 */
#define SENT_CH5_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003244u)
/** Alias (User Manual Name) for SENT_CH5_CFDR.
* To use register names with standard convension, please use SENT_CH5_CFDR.
*/
#define SENT_CFDR5 (SENT_CH5_CFDR)

/** \brief 248, Receiver Control Register 5 */
#define SENT_CH5_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003248u)
/** Alias (User Manual Name) for SENT_CH5_RCR.
* To use register names with standard convension, please use SENT_CH5_RCR.
*/
#define SENT_RCR5 (SENT_CH5_RCR)

/** \brief 24C, Receive Status Register 5 */
#define SENT_CH5_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000324Cu)
/** Alias (User Manual Name) for SENT_CH5_RSR.
* To use register names with standard convension, please use SENT_CH5_RSR.
*/
#define SENT_RSR5 (SENT_CH5_RSR)

/** \brief 250, Serial Data and Status Register 5 */
#define SENT_CH5_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003250u)
/** Alias (User Manual Name) for SENT_CH5_SDS.
* To use register names with standard convension, please use SENT_CH5_SDS.
*/
#define SENT_SDS5 (SENT_CH5_SDS)

/** \brief 254, Input and Output Control Register 5 */
#define SENT_CH5_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003254u)
/** Alias (User Manual Name) for SENT_CH5_IOCR.
* To use register names with standard convension, please use SENT_CH5_IOCR.
*/
#define SENT_IOCR5 (SENT_CH5_IOCR)

/** \brief 258, SPC Control Register 5 */
#define SENT_CH5_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003258u)
/** Alias (User Manual Name) for SENT_CH5_SCR.
* To use register names with standard convension, please use SENT_CH5_SCR.
*/
#define SENT_SCR5 (SENT_CH5_SCR)

/** \brief 25C, Receive Data View Register 5 */
#define SENT_CH5_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000325Cu)
/** Alias (User Manual Name) for SENT_CH5_VIEW.
* To use register names with standard convension, please use SENT_CH5_VIEW.
*/
#define SENT_VIEW5 (SENT_CH5_VIEW)

/** \brief 260, Interrupt Status Register 5 */
#define SENT_CH5_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003260u)
/** Alias (User Manual Name) for SENT_CH5_INTSTAT.
* To use register names with standard convension, please use SENT_CH5_INTSTAT.
*/
#define SENT_INTSTAT5 (SENT_CH5_INTSTAT)

/** \brief 264, Interrupt Set Register 5 */
#define SENT_CH5_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003264u)
/** Alias (User Manual Name) for SENT_CH5_INTSET.
* To use register names with standard convension, please use SENT_CH5_INTSET.
*/
#define SENT_INTSET5 (SENT_CH5_INTSET)

/** \brief 268, Interrupt Clear Register 5 */
#define SENT_CH5_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003268u)
/** Alias (User Manual Name) for SENT_CH5_INTCLR.
* To use register names with standard convension, please use SENT_CH5_INTCLR.
*/
#define SENT_INTCLR5 (SENT_CH5_INTCLR)

/** \brief 26C, Interrupt Enable Register 5 */
#define SENT_CH5_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000326Cu)
/** Alias (User Manual Name) for SENT_CH5_INTEN.
* To use register names with standard convension, please use SENT_CH5_INTEN.
*/
#define SENT_INTEN5 (SENT_CH5_INTEN)

/** \brief 270, Interrupt Node Pointer Register 5 */
#define SENT_CH5_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003270u)
/** Alias (User Manual Name) for SENT_CH5_INP.
* To use register names with standard convension, please use SENT_CH5_INP.
*/
#define SENT_INP5 (SENT_CH5_INP)

/** \brief 274, Watch Dog Timer Register 5 */
#define SENT_CH5_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003274u)
/** Alias (User Manual Name) for SENT_CH5_WDT.
* To use register names with standard convension, please use SENT_CH5_WDT.
*/
#define SENT_WDT5 (SENT_CH5_WDT)

/** \brief 280, Channel Pre Divider Register 6 */
#define SENT_CH6_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003280u)
/** Alias (User Manual Name) for SENT_CH6_CPDR.
* To use register names with standard convension, please use SENT_CH6_CPDR.
*/
#define SENT_CPDR6 (SENT_CH6_CPDR)

/** \brief 284, Channel Fractional Divider Register 6 */
#define SENT_CH6_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003284u)
/** Alias (User Manual Name) for SENT_CH6_CFDR.
* To use register names with standard convension, please use SENT_CH6_CFDR.
*/
#define SENT_CFDR6 (SENT_CH6_CFDR)

/** \brief 288, Receiver Control Register 6 */
#define SENT_CH6_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003288u)
/** Alias (User Manual Name) for SENT_CH6_RCR.
* To use register names with standard convension, please use SENT_CH6_RCR.
*/
#define SENT_RCR6 (SENT_CH6_RCR)

/** \brief 28C, Receive Status Register 6 */
#define SENT_CH6_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000328Cu)
/** Alias (User Manual Name) for SENT_CH6_RSR.
* To use register names with standard convension, please use SENT_CH6_RSR.
*/
#define SENT_RSR6 (SENT_CH6_RSR)

/** \brief 290, Serial Data and Status Register 6 */
#define SENT_CH6_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003290u)
/** Alias (User Manual Name) for SENT_CH6_SDS.
* To use register names with standard convension, please use SENT_CH6_SDS.
*/
#define SENT_SDS6 (SENT_CH6_SDS)

/** \brief 294, Input and Output Control Register 6 */
#define SENT_CH6_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003294u)
/** Alias (User Manual Name) for SENT_CH6_IOCR.
* To use register names with standard convension, please use SENT_CH6_IOCR.
*/
#define SENT_IOCR6 (SENT_CH6_IOCR)

/** \brief 298, SPC Control Register 6 */
#define SENT_CH6_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003298u)
/** Alias (User Manual Name) for SENT_CH6_SCR.
* To use register names with standard convension, please use SENT_CH6_SCR.
*/
#define SENT_SCR6 (SENT_CH6_SCR)

/** \brief 29C, Receive Data View Register 6 */
#define SENT_CH6_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000329Cu)
/** Alias (User Manual Name) for SENT_CH6_VIEW.
* To use register names with standard convension, please use SENT_CH6_VIEW.
*/
#define SENT_VIEW6 (SENT_CH6_VIEW)

/** \brief 2A0, Interrupt Status Register 6 */
#define SENT_CH6_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00032A0u)
/** Alias (User Manual Name) for SENT_CH6_INTSTAT.
* To use register names with standard convension, please use SENT_CH6_INTSTAT.
*/
#define SENT_INTSTAT6 (SENT_CH6_INTSTAT)

/** \brief 2A4, Interrupt Set Register 6 */
#define SENT_CH6_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00032A4u)
/** Alias (User Manual Name) for SENT_CH6_INTSET.
* To use register names with standard convension, please use SENT_CH6_INTSET.
*/
#define SENT_INTSET6 (SENT_CH6_INTSET)

/** \brief 2A8, Interrupt Clear Register 6 */
#define SENT_CH6_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00032A8u)
/** Alias (User Manual Name) for SENT_CH6_INTCLR.
* To use register names with standard convension, please use SENT_CH6_INTCLR.
*/
#define SENT_INTCLR6 (SENT_CH6_INTCLR)

/** \brief 2AC, Interrupt Enable Register 6 */
#define SENT_CH6_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00032ACu)
/** Alias (User Manual Name) for SENT_CH6_INTEN.
* To use register names with standard convension, please use SENT_CH6_INTEN.
*/
#define SENT_INTEN6 (SENT_CH6_INTEN)

/** \brief 2B0, Interrupt Node Pointer Register 6 */
#define SENT_CH6_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00032B0u)
/** Alias (User Manual Name) for SENT_CH6_INP.
* To use register names with standard convension, please use SENT_CH6_INP.
*/
#define SENT_INP6 (SENT_CH6_INP)

/** \brief 2B4, Watch Dog Timer Register 6 */
#define SENT_CH6_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00032B4u)
/** Alias (User Manual Name) for SENT_CH6_WDT.
* To use register names with standard convension, please use SENT_CH6_WDT.
*/
#define SENT_WDT6 (SENT_CH6_WDT)

/** \brief 2C0, Channel Pre Divider Register 7 */
#define SENT_CH7_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF00032C0u)
/** Alias (User Manual Name) for SENT_CH7_CPDR.
* To use register names with standard convension, please use SENT_CH7_CPDR.
*/
#define SENT_CPDR7 (SENT_CH7_CPDR)

/** \brief 2C4, Channel Fractional Divider Register 7 */
#define SENT_CH7_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF00032C4u)
/** Alias (User Manual Name) for SENT_CH7_CFDR.
* To use register names with standard convension, please use SENT_CH7_CFDR.
*/
#define SENT_CFDR7 (SENT_CH7_CFDR)

/** \brief 2C8, Receiver Control Register 7 */
#define SENT_CH7_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF00032C8u)
/** Alias (User Manual Name) for SENT_CH7_RCR.
* To use register names with standard convension, please use SENT_CH7_RCR.
*/
#define SENT_RCR7 (SENT_CH7_RCR)

/** \brief 2CC, Receive Status Register 7 */
#define SENT_CH7_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF00032CCu)
/** Alias (User Manual Name) for SENT_CH7_RSR.
* To use register names with standard convension, please use SENT_CH7_RSR.
*/
#define SENT_RSR7 (SENT_CH7_RSR)

/** \brief 2D0, Serial Data and Status Register 7 */
#define SENT_CH7_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF00032D0u)
/** Alias (User Manual Name) for SENT_CH7_SDS.
* To use register names with standard convension, please use SENT_CH7_SDS.
*/
#define SENT_SDS7 (SENT_CH7_SDS)

/** \brief 2D4, Input and Output Control Register 7 */
#define SENT_CH7_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF00032D4u)
/** Alias (User Manual Name) for SENT_CH7_IOCR.
* To use register names with standard convension, please use SENT_CH7_IOCR.
*/
#define SENT_IOCR7 (SENT_CH7_IOCR)

/** \brief 2D8, SPC Control Register 7 */
#define SENT_CH7_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF00032D8u)
/** Alias (User Manual Name) for SENT_CH7_SCR.
* To use register names with standard convension, please use SENT_CH7_SCR.
*/
#define SENT_SCR7 (SENT_CH7_SCR)

/** \brief 2DC, Receive Data View Register 7 */
#define SENT_CH7_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF00032DCu)
/** Alias (User Manual Name) for SENT_CH7_VIEW.
* To use register names with standard convension, please use SENT_CH7_VIEW.
*/
#define SENT_VIEW7 (SENT_CH7_VIEW)

/** \brief 2E0, Interrupt Status Register 7 */
#define SENT_CH7_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00032E0u)
/** Alias (User Manual Name) for SENT_CH7_INTSTAT.
* To use register names with standard convension, please use SENT_CH7_INTSTAT.
*/
#define SENT_INTSTAT7 (SENT_CH7_INTSTAT)

/** \brief 2E4, Interrupt Set Register 7 */
#define SENT_CH7_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00032E4u)
/** Alias (User Manual Name) for SENT_CH7_INTSET.
* To use register names with standard convension, please use SENT_CH7_INTSET.
*/
#define SENT_INTSET7 (SENT_CH7_INTSET)

/** \brief 2E8, Interrupt Clear Register 7 */
#define SENT_CH7_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00032E8u)
/** Alias (User Manual Name) for SENT_CH7_INTCLR.
* To use register names with standard convension, please use SENT_CH7_INTCLR.
*/
#define SENT_INTCLR7 (SENT_CH7_INTCLR)

/** \brief 2EC, Interrupt Enable Register 7 */
#define SENT_CH7_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00032ECu)
/** Alias (User Manual Name) for SENT_CH7_INTEN.
* To use register names with standard convension, please use SENT_CH7_INTEN.
*/
#define SENT_INTEN7 (SENT_CH7_INTEN)

/** \brief 2F0, Interrupt Node Pointer Register 7 */
#define SENT_CH7_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00032F0u)
/** Alias (User Manual Name) for SENT_CH7_INP.
* To use register names with standard convension, please use SENT_CH7_INP.
*/
#define SENT_INP7 (SENT_CH7_INP)

/** \brief 2F4, Watch Dog Timer Register 7 */
#define SENT_CH7_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00032F4u)
/** Alias (User Manual Name) for SENT_CH7_WDT.
* To use register names with standard convension, please use SENT_CH7_WDT.
*/
#define SENT_WDT7 (SENT_CH7_WDT)

/** \brief 300, Channel Pre Divider Register 8 */
#define SENT_CH8_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003300u)
/** Alias (User Manual Name) for SENT_CH8_CPDR.
* To use register names with standard convension, please use SENT_CH8_CPDR.
*/
#define SENT_CPDR8 (SENT_CH8_CPDR)

/** \brief 304, Channel Fractional Divider Register 8 */
#define SENT_CH8_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003304u)
/** Alias (User Manual Name) for SENT_CH8_CFDR.
* To use register names with standard convension, please use SENT_CH8_CFDR.
*/
#define SENT_CFDR8 (SENT_CH8_CFDR)

/** \brief 308, Receiver Control Register 8 */
#define SENT_CH8_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003308u)
/** Alias (User Manual Name) for SENT_CH8_RCR.
* To use register names with standard convension, please use SENT_CH8_RCR.
*/
#define SENT_RCR8 (SENT_CH8_RCR)

/** \brief 30C, Receive Status Register 8 */
#define SENT_CH8_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000330Cu)
/** Alias (User Manual Name) for SENT_CH8_RSR.
* To use register names with standard convension, please use SENT_CH8_RSR.
*/
#define SENT_RSR8 (SENT_CH8_RSR)

/** \brief 310, Serial Data and Status Register 8 */
#define SENT_CH8_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003310u)
/** Alias (User Manual Name) for SENT_CH8_SDS.
* To use register names with standard convension, please use SENT_CH8_SDS.
*/
#define SENT_SDS8 (SENT_CH8_SDS)

/** \brief 314, Input and Output Control Register 8 */
#define SENT_CH8_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003314u)
/** Alias (User Manual Name) for SENT_CH8_IOCR.
* To use register names with standard convension, please use SENT_CH8_IOCR.
*/
#define SENT_IOCR8 (SENT_CH8_IOCR)

/** \brief 318, SPC Control Register 8 */
#define SENT_CH8_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003318u)
/** Alias (User Manual Name) for SENT_CH8_SCR.
* To use register names with standard convension, please use SENT_CH8_SCR.
*/
#define SENT_SCR8 (SENT_CH8_SCR)

/** \brief 31C, Receive Data View Register 8 */
#define SENT_CH8_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000331Cu)
/** Alias (User Manual Name) for SENT_CH8_VIEW.
* To use register names with standard convension, please use SENT_CH8_VIEW.
*/
#define SENT_VIEW8 (SENT_CH8_VIEW)

/** \brief 320, Interrupt Status Register 8 */
#define SENT_CH8_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003320u)
/** Alias (User Manual Name) for SENT_CH8_INTSTAT.
* To use register names with standard convension, please use SENT_CH8_INTSTAT.
*/
#define SENT_INTSTAT8 (SENT_CH8_INTSTAT)

/** \brief 324, Interrupt Set Register 8 */
#define SENT_CH8_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003324u)
/** Alias (User Manual Name) for SENT_CH8_INTSET.
* To use register names with standard convension, please use SENT_CH8_INTSET.
*/
#define SENT_INTSET8 (SENT_CH8_INTSET)

/** \brief 328, Interrupt Clear Register 8 */
#define SENT_CH8_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003328u)
/** Alias (User Manual Name) for SENT_CH8_INTCLR.
* To use register names with standard convension, please use SENT_CH8_INTCLR.
*/
#define SENT_INTCLR8 (SENT_CH8_INTCLR)

/** \brief 32C, Interrupt Enable Register 8 */
#define SENT_CH8_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000332Cu)
/** Alias (User Manual Name) for SENT_CH8_INTEN.
* To use register names with standard convension, please use SENT_CH8_INTEN.
*/
#define SENT_INTEN8 (SENT_CH8_INTEN)

/** \brief 330, Interrupt Node Pointer Register 8 */
#define SENT_CH8_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003330u)
/** Alias (User Manual Name) for SENT_CH8_INP.
* To use register names with standard convension, please use SENT_CH8_INP.
*/
#define SENT_INP8 (SENT_CH8_INP)

/** \brief 334, Watch Dog Timer Register 8 */
#define SENT_CH8_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003334u)
/** Alias (User Manual Name) for SENT_CH8_WDT.
* To use register names with standard convension, please use SENT_CH8_WDT.
*/
#define SENT_WDT8 (SENT_CH8_WDT)

/** \brief 340, Channel Pre Divider Register 9 */
#define SENT_CH9_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003340u)
/** Alias (User Manual Name) for SENT_CH9_CPDR.
* To use register names with standard convension, please use SENT_CH9_CPDR.
*/
#define SENT_CPDR9 (SENT_CH9_CPDR)

/** \brief 344, Channel Fractional Divider Register 9 */
#define SENT_CH9_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003344u)
/** Alias (User Manual Name) for SENT_CH9_CFDR.
* To use register names with standard convension, please use SENT_CH9_CFDR.
*/
#define SENT_CFDR9 (SENT_CH9_CFDR)

/** \brief 348, Receiver Control Register 9 */
#define SENT_CH9_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003348u)
/** Alias (User Manual Name) for SENT_CH9_RCR.
* To use register names with standard convension, please use SENT_CH9_RCR.
*/
#define SENT_RCR9 (SENT_CH9_RCR)

/** \brief 34C, Receive Status Register 9 */
#define SENT_CH9_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000334Cu)
/** Alias (User Manual Name) for SENT_CH9_RSR.
* To use register names with standard convension, please use SENT_CH9_RSR.
*/
#define SENT_RSR9 (SENT_CH9_RSR)

/** \brief 350, Serial Data and Status Register 9 */
#define SENT_CH9_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003350u)
/** Alias (User Manual Name) for SENT_CH9_SDS.
* To use register names with standard convension, please use SENT_CH9_SDS.
*/
#define SENT_SDS9 (SENT_CH9_SDS)

/** \brief 354, Input and Output Control Register 9 */
#define SENT_CH9_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003354u)
/** Alias (User Manual Name) for SENT_CH9_IOCR.
* To use register names with standard convension, please use SENT_CH9_IOCR.
*/
#define SENT_IOCR9 (SENT_CH9_IOCR)

/** \brief 358, SPC Control Register 9 */
#define SENT_CH9_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003358u)
/** Alias (User Manual Name) for SENT_CH9_SCR.
* To use register names with standard convension, please use SENT_CH9_SCR.
*/
#define SENT_SCR9 (SENT_CH9_SCR)

/** \brief 35C, Receive Data View Register 9 */
#define SENT_CH9_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000335Cu)
/** Alias (User Manual Name) for SENT_CH9_VIEW.
* To use register names with standard convension, please use SENT_CH9_VIEW.
*/
#define SENT_VIEW9 (SENT_CH9_VIEW)

/** \brief 360, Interrupt Status Register 9 */
#define SENT_CH9_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003360u)
/** Alias (User Manual Name) for SENT_CH9_INTSTAT.
* To use register names with standard convension, please use SENT_CH9_INTSTAT.
*/
#define SENT_INTSTAT9 (SENT_CH9_INTSTAT)

/** \brief 364, Interrupt Set Register 9 */
#define SENT_CH9_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003364u)
/** Alias (User Manual Name) for SENT_CH9_INTSET.
* To use register names with standard convension, please use SENT_CH9_INTSET.
*/
#define SENT_INTSET9 (SENT_CH9_INTSET)

/** \brief 368, Interrupt Clear Register 9 */
#define SENT_CH9_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003368u)
/** Alias (User Manual Name) for SENT_CH9_INTCLR.
* To use register names with standard convension, please use SENT_CH9_INTCLR.
*/
#define SENT_INTCLR9 (SENT_CH9_INTCLR)

/** \brief 36C, Interrupt Enable Register 9 */
#define SENT_CH9_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000336Cu)
/** Alias (User Manual Name) for SENT_CH9_INTEN.
* To use register names with standard convension, please use SENT_CH9_INTEN.
*/
#define SENT_INTEN9 (SENT_CH9_INTEN)

/** \brief 370, Interrupt Node Pointer Register 9 */
#define SENT_CH9_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003370u)
/** Alias (User Manual Name) for SENT_CH9_INP.
* To use register names with standard convension, please use SENT_CH9_INP.
*/
#define SENT_INP9 (SENT_CH9_INP)

/** \brief 374, Watch Dog Timer Register 9 */
#define SENT_CH9_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003374u)
/** Alias (User Manual Name) for SENT_CH9_WDT.
* To use register names with standard convension, please use SENT_CH9_WDT.
*/
#define SENT_WDT9 (SENT_CH9_WDT)

/** \brief 380, Channel Pre Divider Register 10 */
#define SENT_CH10_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003380u)
/** Alias (User Manual Name) for SENT_CH10_CPDR.
* To use register names with standard convension, please use SENT_CH10_CPDR.
*/
#define SENT_CPDR10 (SENT_CH10_CPDR)

/** \brief 384, Channel Fractional Divider Register 10 */
#define SENT_CH10_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003384u)
/** Alias (User Manual Name) for SENT_CH10_CFDR.
* To use register names with standard convension, please use SENT_CH10_CFDR.
*/
#define SENT_CFDR10 (SENT_CH10_CFDR)

/** \brief 388, Receiver Control Register 10 */
#define SENT_CH10_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003388u)
/** Alias (User Manual Name) for SENT_CH10_RCR.
* To use register names with standard convension, please use SENT_CH10_RCR.
*/
#define SENT_RCR10 (SENT_CH10_RCR)

/** \brief 38C, Receive Status Register 10 */
#define SENT_CH10_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000338Cu)
/** Alias (User Manual Name) for SENT_CH10_RSR.
* To use register names with standard convension, please use SENT_CH10_RSR.
*/
#define SENT_RSR10 (SENT_CH10_RSR)

/** \brief 390, Serial Data and Status Register 10 */
#define SENT_CH10_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003390u)
/** Alias (User Manual Name) for SENT_CH10_SDS.
* To use register names with standard convension, please use SENT_CH10_SDS.
*/
#define SENT_SDS10 (SENT_CH10_SDS)

/** \brief 394, Input and Output Control Register 10 */
#define SENT_CH10_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003394u)
/** Alias (User Manual Name) for SENT_CH10_IOCR.
* To use register names with standard convension, please use SENT_CH10_IOCR.
*/
#define SENT_IOCR10 (SENT_CH10_IOCR)

/** \brief 398, SPC Control Register 10 */
#define SENT_CH10_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003398u)
/** Alias (User Manual Name) for SENT_CH10_SCR.
* To use register names with standard convension, please use SENT_CH10_SCR.
*/
#define SENT_SCR10 (SENT_CH10_SCR)

/** \brief 39C, Receive Data View Register 10 */
#define SENT_CH10_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000339Cu)
/** Alias (User Manual Name) for SENT_CH10_VIEW.
* To use register names with standard convension, please use SENT_CH10_VIEW.
*/
#define SENT_VIEW10 (SENT_CH10_VIEW)

/** \brief 3A0, Interrupt Status Register 10 */
#define SENT_CH10_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00033A0u)
/** Alias (User Manual Name) for SENT_CH10_INTSTAT.
* To use register names with standard convension, please use SENT_CH10_INTSTAT.
*/
#define SENT_INTSTAT10 (SENT_CH10_INTSTAT)

/** \brief 3A4, Interrupt Set Register 10 */
#define SENT_CH10_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00033A4u)
/** Alias (User Manual Name) for SENT_CH10_INTSET.
* To use register names with standard convension, please use SENT_CH10_INTSET.
*/
#define SENT_INTSET10 (SENT_CH10_INTSET)

/** \brief 3A8, Interrupt Clear Register 10 */
#define SENT_CH10_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00033A8u)
/** Alias (User Manual Name) for SENT_CH10_INTCLR.
* To use register names with standard convension, please use SENT_CH10_INTCLR.
*/
#define SENT_INTCLR10 (SENT_CH10_INTCLR)

/** \brief 3AC, Interrupt Enable Register 10 */
#define SENT_CH10_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00033ACu)
/** Alias (User Manual Name) for SENT_CH10_INTEN.
* To use register names with standard convension, please use SENT_CH10_INTEN.
*/
#define SENT_INTEN10 (SENT_CH10_INTEN)

/** \brief 3B0, Interrupt Node Pointer Register 10 */
#define SENT_CH10_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00033B0u)
/** Alias (User Manual Name) for SENT_CH10_INP.
* To use register names with standard convension, please use SENT_CH10_INP.
*/
#define SENT_INP10 (SENT_CH10_INP)

/** \brief 3B4, Watch Dog Timer Register 10 */
#define SENT_CH10_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00033B4u)
/** Alias (User Manual Name) for SENT_CH10_WDT.
* To use register names with standard convension, please use SENT_CH10_WDT.
*/
#define SENT_WDT10 (SENT_CH10_WDT)

/** \brief 3C0, Channel Pre Divider Register 11 */
#define SENT_CH11_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF00033C0u)
/** Alias (User Manual Name) for SENT_CH11_CPDR.
* To use register names with standard convension, please use SENT_CH11_CPDR.
*/
#define SENT_CPDR11 (SENT_CH11_CPDR)

/** \brief 3C4, Channel Fractional Divider Register 11 */
#define SENT_CH11_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF00033C4u)
/** Alias (User Manual Name) for SENT_CH11_CFDR.
* To use register names with standard convension, please use SENT_CH11_CFDR.
*/
#define SENT_CFDR11 (SENT_CH11_CFDR)

/** \brief 3C8, Receiver Control Register 11 */
#define SENT_CH11_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF00033C8u)
/** Alias (User Manual Name) for SENT_CH11_RCR.
* To use register names with standard convension, please use SENT_CH11_RCR.
*/
#define SENT_RCR11 (SENT_CH11_RCR)

/** \brief 3CC, Receive Status Register 11 */
#define SENT_CH11_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF00033CCu)
/** Alias (User Manual Name) for SENT_CH11_RSR.
* To use register names with standard convension, please use SENT_CH11_RSR.
*/
#define SENT_RSR11 (SENT_CH11_RSR)

/** \brief 3D0, Serial Data and Status Register 11 */
#define SENT_CH11_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF00033D0u)
/** Alias (User Manual Name) for SENT_CH11_SDS.
* To use register names with standard convension, please use SENT_CH11_SDS.
*/
#define SENT_SDS11 (SENT_CH11_SDS)

/** \brief 3D4, Input and Output Control Register 11 */
#define SENT_CH11_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF00033D4u)
/** Alias (User Manual Name) for SENT_CH11_IOCR.
* To use register names with standard convension, please use SENT_CH11_IOCR.
*/
#define SENT_IOCR11 (SENT_CH11_IOCR)

/** \brief 3D8, SPC Control Register 11 */
#define SENT_CH11_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF00033D8u)
/** Alias (User Manual Name) for SENT_CH11_SCR.
* To use register names with standard convension, please use SENT_CH11_SCR.
*/
#define SENT_SCR11 (SENT_CH11_SCR)

/** \brief 3DC, Receive Data View Register 11 */
#define SENT_CH11_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF00033DCu)
/** Alias (User Manual Name) for SENT_CH11_VIEW.
* To use register names with standard convension, please use SENT_CH11_VIEW.
*/
#define SENT_VIEW11 (SENT_CH11_VIEW)

/** \brief 3E0, Interrupt Status Register 11 */
#define SENT_CH11_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00033E0u)
/** Alias (User Manual Name) for SENT_CH11_INTSTAT.
* To use register names with standard convension, please use SENT_CH11_INTSTAT.
*/
#define SENT_INTSTAT11 (SENT_CH11_INTSTAT)

/** \brief 3E4, Interrupt Set Register 11 */
#define SENT_CH11_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00033E4u)
/** Alias (User Manual Name) for SENT_CH11_INTSET.
* To use register names with standard convension, please use SENT_CH11_INTSET.
*/
#define SENT_INTSET11 (SENT_CH11_INTSET)

/** \brief 3E8, Interrupt Clear Register 11 */
#define SENT_CH11_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00033E8u)
/** Alias (User Manual Name) for SENT_CH11_INTCLR.
* To use register names with standard convension, please use SENT_CH11_INTCLR.
*/
#define SENT_INTCLR11 (SENT_CH11_INTCLR)

/** \brief 3EC, Interrupt Enable Register 11 */
#define SENT_CH11_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00033ECu)
/** Alias (User Manual Name) for SENT_CH11_INTEN.
* To use register names with standard convension, please use SENT_CH11_INTEN.
*/
#define SENT_INTEN11 (SENT_CH11_INTEN)

/** \brief 3F0, Interrupt Node Pointer Register 11 */
#define SENT_CH11_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00033F0u)
/** Alias (User Manual Name) for SENT_CH11_INP.
* To use register names with standard convension, please use SENT_CH11_INP.
*/
#define SENT_INP11 (SENT_CH11_INP)

/** \brief 3F4, Watch Dog Timer Register 11 */
#define SENT_CH11_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00033F4u)
/** Alias (User Manual Name) for SENT_CH11_WDT.
* To use register names with standard convension, please use SENT_CH11_WDT.
*/
#define SENT_WDT11 (SENT_CH11_WDT)

/** \brief 400, Channel Pre Divider Register 12 */
#define SENT_CH12_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003400u)
/** Alias (User Manual Name) for SENT_CH12_CPDR.
* To use register names with standard convension, please use SENT_CH12_CPDR.
*/
#define SENT_CPDR12 (SENT_CH12_CPDR)

/** \brief 404, Channel Fractional Divider Register 12 */
#define SENT_CH12_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003404u)
/** Alias (User Manual Name) for SENT_CH12_CFDR.
* To use register names with standard convension, please use SENT_CH12_CFDR.
*/
#define SENT_CFDR12 (SENT_CH12_CFDR)

/** \brief 408, Receiver Control Register 12 */
#define SENT_CH12_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003408u)
/** Alias (User Manual Name) for SENT_CH12_RCR.
* To use register names with standard convension, please use SENT_CH12_RCR.
*/
#define SENT_RCR12 (SENT_CH12_RCR)

/** \brief 40C, Receive Status Register 12 */
#define SENT_CH12_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000340Cu)
/** Alias (User Manual Name) for SENT_CH12_RSR.
* To use register names with standard convension, please use SENT_CH12_RSR.
*/
#define SENT_RSR12 (SENT_CH12_RSR)

/** \brief 410, Serial Data and Status Register 12 */
#define SENT_CH12_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003410u)
/** Alias (User Manual Name) for SENT_CH12_SDS.
* To use register names with standard convension, please use SENT_CH12_SDS.
*/
#define SENT_SDS12 (SENT_CH12_SDS)

/** \brief 414, Input and Output Control Register 12 */
#define SENT_CH12_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003414u)
/** Alias (User Manual Name) for SENT_CH12_IOCR.
* To use register names with standard convension, please use SENT_CH12_IOCR.
*/
#define SENT_IOCR12 (SENT_CH12_IOCR)

/** \brief 418, SPC Control Register 12 */
#define SENT_CH12_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003418u)
/** Alias (User Manual Name) for SENT_CH12_SCR.
* To use register names with standard convension, please use SENT_CH12_SCR.
*/
#define SENT_SCR12 (SENT_CH12_SCR)

/** \brief 41C, Receive Data View Register 12 */
#define SENT_CH12_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000341Cu)
/** Alias (User Manual Name) for SENT_CH12_VIEW.
* To use register names with standard convension, please use SENT_CH12_VIEW.
*/
#define SENT_VIEW12 (SENT_CH12_VIEW)

/** \brief 420, Interrupt Status Register 12 */
#define SENT_CH12_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003420u)
/** Alias (User Manual Name) for SENT_CH12_INTSTAT.
* To use register names with standard convension, please use SENT_CH12_INTSTAT.
*/
#define SENT_INTSTAT12 (SENT_CH12_INTSTAT)

/** \brief 424, Interrupt Set Register 12 */
#define SENT_CH12_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003424u)
/** Alias (User Manual Name) for SENT_CH12_INTSET.
* To use register names with standard convension, please use SENT_CH12_INTSET.
*/
#define SENT_INTSET12 (SENT_CH12_INTSET)

/** \brief 428, Interrupt Clear Register 12 */
#define SENT_CH12_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003428u)
/** Alias (User Manual Name) for SENT_CH12_INTCLR.
* To use register names with standard convension, please use SENT_CH12_INTCLR.
*/
#define SENT_INTCLR12 (SENT_CH12_INTCLR)

/** \brief 42C, Interrupt Enable Register 12 */
#define SENT_CH12_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000342Cu)
/** Alias (User Manual Name) for SENT_CH12_INTEN.
* To use register names with standard convension, please use SENT_CH12_INTEN.
*/
#define SENT_INTEN12 (SENT_CH12_INTEN)

/** \brief 430, Interrupt Node Pointer Register 12 */
#define SENT_CH12_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003430u)
/** Alias (User Manual Name) for SENT_CH12_INP.
* To use register names with standard convension, please use SENT_CH12_INP.
*/
#define SENT_INP12 (SENT_CH12_INP)

/** \brief 434, Watch Dog Timer Register 12 */
#define SENT_CH12_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003434u)
/** Alias (User Manual Name) for SENT_CH12_WDT.
* To use register names with standard convension, please use SENT_CH12_WDT.
*/
#define SENT_WDT12 (SENT_CH12_WDT)

/** \brief 440, Channel Pre Divider Register 13 */
#define SENT_CH13_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003440u)
/** Alias (User Manual Name) for SENT_CH13_CPDR.
* To use register names with standard convension, please use SENT_CH13_CPDR.
*/
#define SENT_CPDR13 (SENT_CH13_CPDR)

/** \brief 444, Channel Fractional Divider Register 13 */
#define SENT_CH13_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003444u)
/** Alias (User Manual Name) for SENT_CH13_CFDR.
* To use register names with standard convension, please use SENT_CH13_CFDR.
*/
#define SENT_CFDR13 (SENT_CH13_CFDR)

/** \brief 448, Receiver Control Register 13 */
#define SENT_CH13_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003448u)
/** Alias (User Manual Name) for SENT_CH13_RCR.
* To use register names with standard convension, please use SENT_CH13_RCR.
*/
#define SENT_RCR13 (SENT_CH13_RCR)

/** \brief 44C, Receive Status Register 13 */
#define SENT_CH13_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000344Cu)
/** Alias (User Manual Name) for SENT_CH13_RSR.
* To use register names with standard convension, please use SENT_CH13_RSR.
*/
#define SENT_RSR13 (SENT_CH13_RSR)

/** \brief 450, Serial Data and Status Register 13 */
#define SENT_CH13_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003450u)
/** Alias (User Manual Name) for SENT_CH13_SDS.
* To use register names with standard convension, please use SENT_CH13_SDS.
*/
#define SENT_SDS13 (SENT_CH13_SDS)

/** \brief 454, Input and Output Control Register 13 */
#define SENT_CH13_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003454u)
/** Alias (User Manual Name) for SENT_CH13_IOCR.
* To use register names with standard convension, please use SENT_CH13_IOCR.
*/
#define SENT_IOCR13 (SENT_CH13_IOCR)

/** \brief 458, SPC Control Register 13 */
#define SENT_CH13_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003458u)
/** Alias (User Manual Name) for SENT_CH13_SCR.
* To use register names with standard convension, please use SENT_CH13_SCR.
*/
#define SENT_SCR13 (SENT_CH13_SCR)

/** \brief 45C, Receive Data View Register 13 */
#define SENT_CH13_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000345Cu)
/** Alias (User Manual Name) for SENT_CH13_VIEW.
* To use register names with standard convension, please use SENT_CH13_VIEW.
*/
#define SENT_VIEW13 (SENT_CH13_VIEW)

/** \brief 460, Interrupt Status Register 13 */
#define SENT_CH13_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003460u)
/** Alias (User Manual Name) for SENT_CH13_INTSTAT.
* To use register names with standard convension, please use SENT_CH13_INTSTAT.
*/
#define SENT_INTSTAT13 (SENT_CH13_INTSTAT)

/** \brief 464, Interrupt Set Register 13 */
#define SENT_CH13_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003464u)
/** Alias (User Manual Name) for SENT_CH13_INTSET.
* To use register names with standard convension, please use SENT_CH13_INTSET.
*/
#define SENT_INTSET13 (SENT_CH13_INTSET)

/** \brief 468, Interrupt Clear Register 13 */
#define SENT_CH13_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003468u)
/** Alias (User Manual Name) for SENT_CH13_INTCLR.
* To use register names with standard convension, please use SENT_CH13_INTCLR.
*/
#define SENT_INTCLR13 (SENT_CH13_INTCLR)

/** \brief 46C, Interrupt Enable Register 13 */
#define SENT_CH13_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000346Cu)
/** Alias (User Manual Name) for SENT_CH13_INTEN.
* To use register names with standard convension, please use SENT_CH13_INTEN.
*/
#define SENT_INTEN13 (SENT_CH13_INTEN)

/** \brief 470, Interrupt Node Pointer Register 13 */
#define SENT_CH13_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003470u)
/** Alias (User Manual Name) for SENT_CH13_INP.
* To use register names with standard convension, please use SENT_CH13_INP.
*/
#define SENT_INP13 (SENT_CH13_INP)

/** \brief 474, Watch Dog Timer Register 13 */
#define SENT_CH13_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003474u)
/** Alias (User Manual Name) for SENT_CH13_WDT.
* To use register names with standard convension, please use SENT_CH13_WDT.
*/
#define SENT_WDT13 (SENT_CH13_WDT)

/** \brief 480, Channel Pre Divider Register 14 */
#define SENT_CH14_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003480u)
/** Alias (User Manual Name) for SENT_CH14_CPDR.
* To use register names with standard convension, please use SENT_CH14_CPDR.
*/
#define SENT_CPDR14 (SENT_CH14_CPDR)

/** \brief 484, Channel Fractional Divider Register 14 */
#define SENT_CH14_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003484u)
/** Alias (User Manual Name) for SENT_CH14_CFDR.
* To use register names with standard convension, please use SENT_CH14_CFDR.
*/
#define SENT_CFDR14 (SENT_CH14_CFDR)

/** \brief 488, Receiver Control Register 14 */
#define SENT_CH14_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003488u)
/** Alias (User Manual Name) for SENT_CH14_RCR.
* To use register names with standard convension, please use SENT_CH14_RCR.
*/
#define SENT_RCR14 (SENT_CH14_RCR)

/** \brief 48C, Receive Status Register 14 */
#define SENT_CH14_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000348Cu)
/** Alias (User Manual Name) for SENT_CH14_RSR.
* To use register names with standard convension, please use SENT_CH14_RSR.
*/
#define SENT_RSR14 (SENT_CH14_RSR)

/** \brief 490, Serial Data and Status Register 14 */
#define SENT_CH14_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003490u)
/** Alias (User Manual Name) for SENT_CH14_SDS.
* To use register names with standard convension, please use SENT_CH14_SDS.
*/
#define SENT_SDS14 (SENT_CH14_SDS)

/** \brief 494, Input and Output Control Register 14 */
#define SENT_CH14_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003494u)
/** Alias (User Manual Name) for SENT_CH14_IOCR.
* To use register names with standard convension, please use SENT_CH14_IOCR.
*/
#define SENT_IOCR14 (SENT_CH14_IOCR)

/** \brief 498, SPC Control Register 14 */
#define SENT_CH14_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003498u)
/** Alias (User Manual Name) for SENT_CH14_SCR.
* To use register names with standard convension, please use SENT_CH14_SCR.
*/
#define SENT_SCR14 (SENT_CH14_SCR)

/** \brief 49C, Receive Data View Register 14 */
#define SENT_CH14_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000349Cu)
/** Alias (User Manual Name) for SENT_CH14_VIEW.
* To use register names with standard convension, please use SENT_CH14_VIEW.
*/
#define SENT_VIEW14 (SENT_CH14_VIEW)

/** \brief 4A0, Interrupt Status Register 14 */
#define SENT_CH14_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00034A0u)
/** Alias (User Manual Name) for SENT_CH14_INTSTAT.
* To use register names with standard convension, please use SENT_CH14_INTSTAT.
*/
#define SENT_INTSTAT14 (SENT_CH14_INTSTAT)

/** \brief 4A4, Interrupt Set Register 14 */
#define SENT_CH14_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00034A4u)
/** Alias (User Manual Name) for SENT_CH14_INTSET.
* To use register names with standard convension, please use SENT_CH14_INTSET.
*/
#define SENT_INTSET14 (SENT_CH14_INTSET)

/** \brief 4A8, Interrupt Clear Register 14 */
#define SENT_CH14_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00034A8u)
/** Alias (User Manual Name) for SENT_CH14_INTCLR.
* To use register names with standard convension, please use SENT_CH14_INTCLR.
*/
#define SENT_INTCLR14 (SENT_CH14_INTCLR)

/** \brief 4AC, Interrupt Enable Register 14 */
#define SENT_CH14_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00034ACu)
/** Alias (User Manual Name) for SENT_CH14_INTEN.
* To use register names with standard convension, please use SENT_CH14_INTEN.
*/
#define SENT_INTEN14 (SENT_CH14_INTEN)

/** \brief 4B0, Interrupt Node Pointer Register 14 */
#define SENT_CH14_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00034B0u)
/** Alias (User Manual Name) for SENT_CH14_INP.
* To use register names with standard convension, please use SENT_CH14_INP.
*/
#define SENT_INP14 (SENT_CH14_INP)

/** \brief 4B4, Watch Dog Timer Register 14 */
#define SENT_CH14_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00034B4u)
/** Alias (User Manual Name) for SENT_CH14_WDT.
* To use register names with standard convension, please use SENT_CH14_WDT.
*/
#define SENT_WDT14 (SENT_CH14_WDT)

/** \brief 4C0, Channel Pre Divider Register 15 */
#define SENT_CH15_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF00034C0u)
/** Alias (User Manual Name) for SENT_CH15_CPDR.
* To use register names with standard convension, please use SENT_CH15_CPDR.
*/
#define SENT_CPDR15 (SENT_CH15_CPDR)

/** \brief 4C4, Channel Fractional Divider Register 15 */
#define SENT_CH15_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF00034C4u)
/** Alias (User Manual Name) for SENT_CH15_CFDR.
* To use register names with standard convension, please use SENT_CH15_CFDR.
*/
#define SENT_CFDR15 (SENT_CH15_CFDR)

/** \brief 4C8, Receiver Control Register 15 */
#define SENT_CH15_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF00034C8u)
/** Alias (User Manual Name) for SENT_CH15_RCR.
* To use register names with standard convension, please use SENT_CH15_RCR.
*/
#define SENT_RCR15 (SENT_CH15_RCR)

/** \brief 4CC, Receive Status Register 15 */
#define SENT_CH15_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF00034CCu)
/** Alias (User Manual Name) for SENT_CH15_RSR.
* To use register names with standard convension, please use SENT_CH15_RSR.
*/
#define SENT_RSR15 (SENT_CH15_RSR)

/** \brief 4D0, Serial Data and Status Register 15 */
#define SENT_CH15_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF00034D0u)
/** Alias (User Manual Name) for SENT_CH15_SDS.
* To use register names with standard convension, please use SENT_CH15_SDS.
*/
#define SENT_SDS15 (SENT_CH15_SDS)

/** \brief 4D4, Input and Output Control Register 15 */
#define SENT_CH15_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF00034D4u)
/** Alias (User Manual Name) for SENT_CH15_IOCR.
* To use register names with standard convension, please use SENT_CH15_IOCR.
*/
#define SENT_IOCR15 (SENT_CH15_IOCR)

/** \brief 4D8, SPC Control Register 15 */
#define SENT_CH15_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF00034D8u)
/** Alias (User Manual Name) for SENT_CH15_SCR.
* To use register names with standard convension, please use SENT_CH15_SCR.
*/
#define SENT_SCR15 (SENT_CH15_SCR)

/** \brief 4DC, Receive Data View Register 15 */
#define SENT_CH15_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF00034DCu)
/** Alias (User Manual Name) for SENT_CH15_VIEW.
* To use register names with standard convension, please use SENT_CH15_VIEW.
*/
#define SENT_VIEW15 (SENT_CH15_VIEW)

/** \brief 4E0, Interrupt Status Register 15 */
#define SENT_CH15_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00034E0u)
/** Alias (User Manual Name) for SENT_CH15_INTSTAT.
* To use register names with standard convension, please use SENT_CH15_INTSTAT.
*/
#define SENT_INTSTAT15 (SENT_CH15_INTSTAT)

/** \brief 4E4, Interrupt Set Register 15 */
#define SENT_CH15_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00034E4u)
/** Alias (User Manual Name) for SENT_CH15_INTSET.
* To use register names with standard convension, please use SENT_CH15_INTSET.
*/
#define SENT_INTSET15 (SENT_CH15_INTSET)

/** \brief 4E8, Interrupt Clear Register 15 */
#define SENT_CH15_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00034E8u)
/** Alias (User Manual Name) for SENT_CH15_INTCLR.
* To use register names with standard convension, please use SENT_CH15_INTCLR.
*/
#define SENT_INTCLR15 (SENT_CH15_INTCLR)

/** \brief 4EC, Interrupt Enable Register 15 */
#define SENT_CH15_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00034ECu)
/** Alias (User Manual Name) for SENT_CH15_INTEN.
* To use register names with standard convension, please use SENT_CH15_INTEN.
*/
#define SENT_INTEN15 (SENT_CH15_INTEN)

/** \brief 4F0, Interrupt Node Pointer Register 15 */
#define SENT_CH15_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00034F0u)
/** Alias (User Manual Name) for SENT_CH15_INP.
* To use register names with standard convension, please use SENT_CH15_INP.
*/
#define SENT_INP15 (SENT_CH15_INP)

/** \brief 4F4, Watch Dog Timer Register 15 */
#define SENT_CH15_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00034F4u)
/** Alias (User Manual Name) for SENT_CH15_WDT.
* To use register names with standard convension, please use SENT_CH15_WDT.
*/
#define SENT_WDT15 (SENT_CH15_WDT)

/** \brief 500, Channel Pre Divider Register 16 */
#define SENT_CH16_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003500u)
/** Alias (User Manual Name) for SENT_CH16_CPDR.
* To use register names with standard convension, please use SENT_CH16_CPDR.
*/
#define SENT_CPDR16 (SENT_CH16_CPDR)

/** \brief 504, Channel Fractional Divider Register 16 */
#define SENT_CH16_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003504u)
/** Alias (User Manual Name) for SENT_CH16_CFDR.
* To use register names with standard convension, please use SENT_CH16_CFDR.
*/
#define SENT_CFDR16 (SENT_CH16_CFDR)

/** \brief 508, Receiver Control Register 16 */
#define SENT_CH16_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003508u)
/** Alias (User Manual Name) for SENT_CH16_RCR.
* To use register names with standard convension, please use SENT_CH16_RCR.
*/
#define SENT_RCR16 (SENT_CH16_RCR)

/** \brief 50C, Receive Status Register 16 */
#define SENT_CH16_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000350Cu)
/** Alias (User Manual Name) for SENT_CH16_RSR.
* To use register names with standard convension, please use SENT_CH16_RSR.
*/
#define SENT_RSR16 (SENT_CH16_RSR)

/** \brief 510, Serial Data and Status Register 16 */
#define SENT_CH16_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003510u)
/** Alias (User Manual Name) for SENT_CH16_SDS.
* To use register names with standard convension, please use SENT_CH16_SDS.
*/
#define SENT_SDS16 (SENT_CH16_SDS)

/** \brief 514, Input and Output Control Register 16 */
#define SENT_CH16_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003514u)
/** Alias (User Manual Name) for SENT_CH16_IOCR.
* To use register names with standard convension, please use SENT_CH16_IOCR.
*/
#define SENT_IOCR16 (SENT_CH16_IOCR)

/** \brief 518, SPC Control Register 16 */
#define SENT_CH16_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003518u)
/** Alias (User Manual Name) for SENT_CH16_SCR.
* To use register names with standard convension, please use SENT_CH16_SCR.
*/
#define SENT_SCR16 (SENT_CH16_SCR)

/** \brief 51C, Receive Data View Register 16 */
#define SENT_CH16_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000351Cu)
/** Alias (User Manual Name) for SENT_CH16_VIEW.
* To use register names with standard convension, please use SENT_CH16_VIEW.
*/
#define SENT_VIEW16 (SENT_CH16_VIEW)

/** \brief 520, Interrupt Status Register 16 */
#define SENT_CH16_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003520u)
/** Alias (User Manual Name) for SENT_CH16_INTSTAT.
* To use register names with standard convension, please use SENT_CH16_INTSTAT.
*/
#define SENT_INTSTAT16 (SENT_CH16_INTSTAT)

/** \brief 524, Interrupt Set Register 16 */
#define SENT_CH16_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003524u)
/** Alias (User Manual Name) for SENT_CH16_INTSET.
* To use register names with standard convension, please use SENT_CH16_INTSET.
*/
#define SENT_INTSET16 (SENT_CH16_INTSET)

/** \brief 528, Interrupt Clear Register 16 */
#define SENT_CH16_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003528u)
/** Alias (User Manual Name) for SENT_CH16_INTCLR.
* To use register names with standard convension, please use SENT_CH16_INTCLR.
*/
#define SENT_INTCLR16 (SENT_CH16_INTCLR)

/** \brief 52C, Interrupt Enable Register 16 */
#define SENT_CH16_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000352Cu)
/** Alias (User Manual Name) for SENT_CH16_INTEN.
* To use register names with standard convension, please use SENT_CH16_INTEN.
*/
#define SENT_INTEN16 (SENT_CH16_INTEN)

/** \brief 530, Interrupt Node Pointer Register 16 */
#define SENT_CH16_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003530u)
/** Alias (User Manual Name) for SENT_CH16_INP.
* To use register names with standard convension, please use SENT_CH16_INP.
*/
#define SENT_INP16 (SENT_CH16_INP)

/** \brief 534, Watch Dog Timer Register 16 */
#define SENT_CH16_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003534u)
/** Alias (User Manual Name) for SENT_CH16_WDT.
* To use register names with standard convension, please use SENT_CH16_WDT.
*/
#define SENT_WDT16 (SENT_CH16_WDT)

/** \brief 540, Channel Pre Divider Register 17 */
#define SENT_CH17_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003540u)
/** Alias (User Manual Name) for SENT_CH17_CPDR.
* To use register names with standard convension, please use SENT_CH17_CPDR.
*/
#define SENT_CPDR17 (SENT_CH17_CPDR)

/** \brief 544, Channel Fractional Divider Register 17 */
#define SENT_CH17_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003544u)
/** Alias (User Manual Name) for SENT_CH17_CFDR.
* To use register names with standard convension, please use SENT_CH17_CFDR.
*/
#define SENT_CFDR17 (SENT_CH17_CFDR)

/** \brief 548, Receiver Control Register 17 */
#define SENT_CH17_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003548u)
/** Alias (User Manual Name) for SENT_CH17_RCR.
* To use register names with standard convension, please use SENT_CH17_RCR.
*/
#define SENT_RCR17 (SENT_CH17_RCR)

/** \brief 54C, Receive Status Register 17 */
#define SENT_CH17_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000354Cu)
/** Alias (User Manual Name) for SENT_CH17_RSR.
* To use register names with standard convension, please use SENT_CH17_RSR.
*/
#define SENT_RSR17 (SENT_CH17_RSR)

/** \brief 550, Serial Data and Status Register 17 */
#define SENT_CH17_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003550u)
/** Alias (User Manual Name) for SENT_CH17_SDS.
* To use register names with standard convension, please use SENT_CH17_SDS.
*/
#define SENT_SDS17 (SENT_CH17_SDS)

/** \brief 554, Input and Output Control Register 17 */
#define SENT_CH17_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003554u)
/** Alias (User Manual Name) for SENT_CH17_IOCR.
* To use register names with standard convension, please use SENT_CH17_IOCR.
*/
#define SENT_IOCR17 (SENT_CH17_IOCR)

/** \brief 558, SPC Control Register 17 */
#define SENT_CH17_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003558u)
/** Alias (User Manual Name) for SENT_CH17_SCR.
* To use register names with standard convension, please use SENT_CH17_SCR.
*/
#define SENT_SCR17 (SENT_CH17_SCR)

/** \brief 55C, Receive Data View Register 17 */
#define SENT_CH17_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000355Cu)
/** Alias (User Manual Name) for SENT_CH17_VIEW.
* To use register names with standard convension, please use SENT_CH17_VIEW.
*/
#define SENT_VIEW17 (SENT_CH17_VIEW)

/** \brief 560, Interrupt Status Register 17 */
#define SENT_CH17_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003560u)
/** Alias (User Manual Name) for SENT_CH17_INTSTAT.
* To use register names with standard convension, please use SENT_CH17_INTSTAT.
*/
#define SENT_INTSTAT17 (SENT_CH17_INTSTAT)

/** \brief 564, Interrupt Set Register 17 */
#define SENT_CH17_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003564u)
/** Alias (User Manual Name) for SENT_CH17_INTSET.
* To use register names with standard convension, please use SENT_CH17_INTSET.
*/
#define SENT_INTSET17 (SENT_CH17_INTSET)

/** \brief 568, Interrupt Clear Register 17 */
#define SENT_CH17_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003568u)
/** Alias (User Manual Name) for SENT_CH17_INTCLR.
* To use register names with standard convension, please use SENT_CH17_INTCLR.
*/
#define SENT_INTCLR17 (SENT_CH17_INTCLR)

/** \brief 56C, Interrupt Enable Register 17 */
#define SENT_CH17_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000356Cu)
/** Alias (User Manual Name) for SENT_CH17_INTEN.
* To use register names with standard convension, please use SENT_CH17_INTEN.
*/
#define SENT_INTEN17 (SENT_CH17_INTEN)

/** \brief 570, Interrupt Node Pointer Register 17 */
#define SENT_CH17_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003570u)
/** Alias (User Manual Name) for SENT_CH17_INP.
* To use register names with standard convension, please use SENT_CH17_INP.
*/
#define SENT_INP17 (SENT_CH17_INP)

/** \brief 574, Watch Dog Timer Register 17 */
#define SENT_CH17_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003574u)
/** Alias (User Manual Name) for SENT_CH17_WDT.
* To use register names with standard convension, please use SENT_CH17_WDT.
*/
#define SENT_WDT17 (SENT_CH17_WDT)

/** \brief 580, Channel Pre Divider Register 18 */
#define SENT_CH18_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003580u)
/** Alias (User Manual Name) for SENT_CH18_CPDR.
* To use register names with standard convension, please use SENT_CH18_CPDR.
*/
#define SENT_CPDR18 (SENT_CH18_CPDR)

/** \brief 584, Channel Fractional Divider Register 18 */
#define SENT_CH18_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003584u)
/** Alias (User Manual Name) for SENT_CH18_CFDR.
* To use register names with standard convension, please use SENT_CH18_CFDR.
*/
#define SENT_CFDR18 (SENT_CH18_CFDR)

/** \brief 588, Receiver Control Register 18 */
#define SENT_CH18_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003588u)
/** Alias (User Manual Name) for SENT_CH18_RCR.
* To use register names with standard convension, please use SENT_CH18_RCR.
*/
#define SENT_RCR18 (SENT_CH18_RCR)

/** \brief 58C, Receive Status Register 18 */
#define SENT_CH18_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000358Cu)
/** Alias (User Manual Name) for SENT_CH18_RSR.
* To use register names with standard convension, please use SENT_CH18_RSR.
*/
#define SENT_RSR18 (SENT_CH18_RSR)

/** \brief 590, Serial Data and Status Register 18 */
#define SENT_CH18_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003590u)
/** Alias (User Manual Name) for SENT_CH18_SDS.
* To use register names with standard convension, please use SENT_CH18_SDS.
*/
#define SENT_SDS18 (SENT_CH18_SDS)

/** \brief 594, Input and Output Control Register 18 */
#define SENT_CH18_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003594u)
/** Alias (User Manual Name) for SENT_CH18_IOCR.
* To use register names with standard convension, please use SENT_CH18_IOCR.
*/
#define SENT_IOCR18 (SENT_CH18_IOCR)

/** \brief 598, SPC Control Register 18 */
#define SENT_CH18_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003598u)
/** Alias (User Manual Name) for SENT_CH18_SCR.
* To use register names with standard convension, please use SENT_CH18_SCR.
*/
#define SENT_SCR18 (SENT_CH18_SCR)

/** \brief 59C, Receive Data View Register 18 */
#define SENT_CH18_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000359Cu)
/** Alias (User Manual Name) for SENT_CH18_VIEW.
* To use register names with standard convension, please use SENT_CH18_VIEW.
*/
#define SENT_VIEW18 (SENT_CH18_VIEW)

/** \brief 5A0, Interrupt Status Register 18 */
#define SENT_CH18_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00035A0u)
/** Alias (User Manual Name) for SENT_CH18_INTSTAT.
* To use register names with standard convension, please use SENT_CH18_INTSTAT.
*/
#define SENT_INTSTAT18 (SENT_CH18_INTSTAT)

/** \brief 5A4, Interrupt Set Register 18 */
#define SENT_CH18_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00035A4u)
/** Alias (User Manual Name) for SENT_CH18_INTSET.
* To use register names with standard convension, please use SENT_CH18_INTSET.
*/
#define SENT_INTSET18 (SENT_CH18_INTSET)

/** \brief 5A8, Interrupt Clear Register 18 */
#define SENT_CH18_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00035A8u)
/** Alias (User Manual Name) for SENT_CH18_INTCLR.
* To use register names with standard convension, please use SENT_CH18_INTCLR.
*/
#define SENT_INTCLR18 (SENT_CH18_INTCLR)

/** \brief 5AC, Interrupt Enable Register 18 */
#define SENT_CH18_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00035ACu)
/** Alias (User Manual Name) for SENT_CH18_INTEN.
* To use register names with standard convension, please use SENT_CH18_INTEN.
*/
#define SENT_INTEN18 (SENT_CH18_INTEN)

/** \brief 5B0, Interrupt Node Pointer Register 18 */
#define SENT_CH18_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00035B0u)
/** Alias (User Manual Name) for SENT_CH18_INP.
* To use register names with standard convension, please use SENT_CH18_INP.
*/
#define SENT_INP18 (SENT_CH18_INP)

/** \brief 5B4, Watch Dog Timer Register 18 */
#define SENT_CH18_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00035B4u)
/** Alias (User Manual Name) for SENT_CH18_WDT.
* To use register names with standard convension, please use SENT_CH18_WDT.
*/
#define SENT_WDT18 (SENT_CH18_WDT)

/** \brief 5C0, Channel Pre Divider Register 19 */
#define SENT_CH19_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF00035C0u)
/** Alias (User Manual Name) for SENT_CH19_CPDR.
* To use register names with standard convension, please use SENT_CH19_CPDR.
*/
#define SENT_CPDR19 (SENT_CH19_CPDR)

/** \brief 5C4, Channel Fractional Divider Register 19 */
#define SENT_CH19_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF00035C4u)
/** Alias (User Manual Name) for SENT_CH19_CFDR.
* To use register names with standard convension, please use SENT_CH19_CFDR.
*/
#define SENT_CFDR19 (SENT_CH19_CFDR)

/** \brief 5C8, Receiver Control Register 19 */
#define SENT_CH19_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF00035C8u)
/** Alias (User Manual Name) for SENT_CH19_RCR.
* To use register names with standard convension, please use SENT_CH19_RCR.
*/
#define SENT_RCR19 (SENT_CH19_RCR)

/** \brief 5CC, Receive Status Register 19 */
#define SENT_CH19_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF00035CCu)
/** Alias (User Manual Name) for SENT_CH19_RSR.
* To use register names with standard convension, please use SENT_CH19_RSR.
*/
#define SENT_RSR19 (SENT_CH19_RSR)

/** \brief 5D0, Serial Data and Status Register 19 */
#define SENT_CH19_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF00035D0u)
/** Alias (User Manual Name) for SENT_CH19_SDS.
* To use register names with standard convension, please use SENT_CH19_SDS.
*/
#define SENT_SDS19 (SENT_CH19_SDS)

/** \brief 5D4, Input and Output Control Register 19 */
#define SENT_CH19_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF00035D4u)
/** Alias (User Manual Name) for SENT_CH19_IOCR.
* To use register names with standard convension, please use SENT_CH19_IOCR.
*/
#define SENT_IOCR19 (SENT_CH19_IOCR)

/** \brief 5D8, SPC Control Register 19 */
#define SENT_CH19_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF00035D8u)
/** Alias (User Manual Name) for SENT_CH19_SCR.
* To use register names with standard convension, please use SENT_CH19_SCR.
*/
#define SENT_SCR19 (SENT_CH19_SCR)

/** \brief 5DC, Receive Data View Register 19 */
#define SENT_CH19_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF00035DCu)
/** Alias (User Manual Name) for SENT_CH19_VIEW.
* To use register names with standard convension, please use SENT_CH19_VIEW.
*/
#define SENT_VIEW19 (SENT_CH19_VIEW)

/** \brief 5E0, Interrupt Status Register 19 */
#define SENT_CH19_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00035E0u)
/** Alias (User Manual Name) for SENT_CH19_INTSTAT.
* To use register names with standard convension, please use SENT_CH19_INTSTAT.
*/
#define SENT_INTSTAT19 (SENT_CH19_INTSTAT)

/** \brief 5E4, Interrupt Set Register 19 */
#define SENT_CH19_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00035E4u)
/** Alias (User Manual Name) for SENT_CH19_INTSET.
* To use register names with standard convension, please use SENT_CH19_INTSET.
*/
#define SENT_INTSET19 (SENT_CH19_INTSET)

/** \brief 5E8, Interrupt Clear Register 19 */
#define SENT_CH19_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00035E8u)
/** Alias (User Manual Name) for SENT_CH19_INTCLR.
* To use register names with standard convension, please use SENT_CH19_INTCLR.
*/
#define SENT_INTCLR19 (SENT_CH19_INTCLR)

/** \brief 5EC, Interrupt Enable Register 19 */
#define SENT_CH19_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00035ECu)
/** Alias (User Manual Name) for SENT_CH19_INTEN.
* To use register names with standard convension, please use SENT_CH19_INTEN.
*/
#define SENT_INTEN19 (SENT_CH19_INTEN)

/** \brief 5F0, Interrupt Node Pointer Register 19 */
#define SENT_CH19_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00035F0u)
/** Alias (User Manual Name) for SENT_CH19_INP.
* To use register names with standard convension, please use SENT_CH19_INP.
*/
#define SENT_INP19 (SENT_CH19_INP)

/** \brief 5F4, Watch Dog Timer Register 19 */
#define SENT_CH19_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00035F4u)
/** Alias (User Manual Name) for SENT_CH19_WDT.
* To use register names with standard convension, please use SENT_CH19_WDT.
*/
#define SENT_WDT19 (SENT_CH19_WDT)

/** \brief 600, Channel Pre Divider Register 20 */
#define SENT_CH20_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003600u)
/** Alias (User Manual Name) for SENT_CH20_CPDR.
* To use register names with standard convension, please use SENT_CH20_CPDR.
*/
#define SENT_CPDR20 (SENT_CH20_CPDR)

/** \brief 604, Channel Fractional Divider Register 20 */
#define SENT_CH20_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003604u)
/** Alias (User Manual Name) for SENT_CH20_CFDR.
* To use register names with standard convension, please use SENT_CH20_CFDR.
*/
#define SENT_CFDR20 (SENT_CH20_CFDR)

/** \brief 608, Receiver Control Register 20 */
#define SENT_CH20_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003608u)
/** Alias (User Manual Name) for SENT_CH20_RCR.
* To use register names with standard convension, please use SENT_CH20_RCR.
*/
#define SENT_RCR20 (SENT_CH20_RCR)

/** \brief 60C, Receive Status Register 20 */
#define SENT_CH20_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000360Cu)
/** Alias (User Manual Name) for SENT_CH20_RSR.
* To use register names with standard convension, please use SENT_CH20_RSR.
*/
#define SENT_RSR20 (SENT_CH20_RSR)

/** \brief 610, Serial Data and Status Register 20 */
#define SENT_CH20_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003610u)
/** Alias (User Manual Name) for SENT_CH20_SDS.
* To use register names with standard convension, please use SENT_CH20_SDS.
*/
#define SENT_SDS20 (SENT_CH20_SDS)

/** \brief 614, Input and Output Control Register 20 */
#define SENT_CH20_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003614u)
/** Alias (User Manual Name) for SENT_CH20_IOCR.
* To use register names with standard convension, please use SENT_CH20_IOCR.
*/
#define SENT_IOCR20 (SENT_CH20_IOCR)

/** \brief 618, SPC Control Register 20 */
#define SENT_CH20_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003618u)
/** Alias (User Manual Name) for SENT_CH20_SCR.
* To use register names with standard convension, please use SENT_CH20_SCR.
*/
#define SENT_SCR20 (SENT_CH20_SCR)

/** \brief 61C, Receive Data View Register 20 */
#define SENT_CH20_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000361Cu)
/** Alias (User Manual Name) for SENT_CH20_VIEW.
* To use register names with standard convension, please use SENT_CH20_VIEW.
*/
#define SENT_VIEW20 (SENT_CH20_VIEW)

/** \brief 620, Interrupt Status Register 20 */
#define SENT_CH20_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003620u)
/** Alias (User Manual Name) for SENT_CH20_INTSTAT.
* To use register names with standard convension, please use SENT_CH20_INTSTAT.
*/
#define SENT_INTSTAT20 (SENT_CH20_INTSTAT)

/** \brief 624, Interrupt Set Register 20 */
#define SENT_CH20_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003624u)
/** Alias (User Manual Name) for SENT_CH20_INTSET.
* To use register names with standard convension, please use SENT_CH20_INTSET.
*/
#define SENT_INTSET20 (SENT_CH20_INTSET)

/** \brief 628, Interrupt Clear Register 20 */
#define SENT_CH20_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003628u)
/** Alias (User Manual Name) for SENT_CH20_INTCLR.
* To use register names with standard convension, please use SENT_CH20_INTCLR.
*/
#define SENT_INTCLR20 (SENT_CH20_INTCLR)

/** \brief 62C, Interrupt Enable Register 20 */
#define SENT_CH20_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000362Cu)
/** Alias (User Manual Name) for SENT_CH20_INTEN.
* To use register names with standard convension, please use SENT_CH20_INTEN.
*/
#define SENT_INTEN20 (SENT_CH20_INTEN)

/** \brief 630, Interrupt Node Pointer Register 20 */
#define SENT_CH20_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003630u)
/** Alias (User Manual Name) for SENT_CH20_INP.
* To use register names with standard convension, please use SENT_CH20_INP.
*/
#define SENT_INP20 (SENT_CH20_INP)

/** \brief 634, Watch Dog Timer Register 20 */
#define SENT_CH20_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003634u)
/** Alias (User Manual Name) for SENT_CH20_WDT.
* To use register names with standard convension, please use SENT_CH20_WDT.
*/
#define SENT_WDT20 (SENT_CH20_WDT)

/** \brief 640, Channel Pre Divider Register 21 */
#define SENT_CH21_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003640u)
/** Alias (User Manual Name) for SENT_CH21_CPDR.
* To use register names with standard convension, please use SENT_CH21_CPDR.
*/
#define SENT_CPDR21 (SENT_CH21_CPDR)

/** \brief 644, Channel Fractional Divider Register 21 */
#define SENT_CH21_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003644u)
/** Alias (User Manual Name) for SENT_CH21_CFDR.
* To use register names with standard convension, please use SENT_CH21_CFDR.
*/
#define SENT_CFDR21 (SENT_CH21_CFDR)

/** \brief 648, Receiver Control Register 21 */
#define SENT_CH21_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003648u)
/** Alias (User Manual Name) for SENT_CH21_RCR.
* To use register names with standard convension, please use SENT_CH21_RCR.
*/
#define SENT_RCR21 (SENT_CH21_RCR)

/** \brief 64C, Receive Status Register 21 */
#define SENT_CH21_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000364Cu)
/** Alias (User Manual Name) for SENT_CH21_RSR.
* To use register names with standard convension, please use SENT_CH21_RSR.
*/
#define SENT_RSR21 (SENT_CH21_RSR)

/** \brief 650, Serial Data and Status Register 21 */
#define SENT_CH21_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003650u)
/** Alias (User Manual Name) for SENT_CH21_SDS.
* To use register names with standard convension, please use SENT_CH21_SDS.
*/
#define SENT_SDS21 (SENT_CH21_SDS)

/** \brief 654, Input and Output Control Register 21 */
#define SENT_CH21_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003654u)
/** Alias (User Manual Name) for SENT_CH21_IOCR.
* To use register names with standard convension, please use SENT_CH21_IOCR.
*/
#define SENT_IOCR21 (SENT_CH21_IOCR)

/** \brief 658, SPC Control Register 21 */
#define SENT_CH21_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003658u)
/** Alias (User Manual Name) for SENT_CH21_SCR.
* To use register names with standard convension, please use SENT_CH21_SCR.
*/
#define SENT_SCR21 (SENT_CH21_SCR)

/** \brief 65C, Receive Data View Register 21 */
#define SENT_CH21_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000365Cu)
/** Alias (User Manual Name) for SENT_CH21_VIEW.
* To use register names with standard convension, please use SENT_CH21_VIEW.
*/
#define SENT_VIEW21 (SENT_CH21_VIEW)

/** \brief 660, Interrupt Status Register 21 */
#define SENT_CH21_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003660u)
/** Alias (User Manual Name) for SENT_CH21_INTSTAT.
* To use register names with standard convension, please use SENT_CH21_INTSTAT.
*/
#define SENT_INTSTAT21 (SENT_CH21_INTSTAT)

/** \brief 664, Interrupt Set Register 21 */
#define SENT_CH21_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003664u)
/** Alias (User Manual Name) for SENT_CH21_INTSET.
* To use register names with standard convension, please use SENT_CH21_INTSET.
*/
#define SENT_INTSET21 (SENT_CH21_INTSET)

/** \brief 668, Interrupt Clear Register 21 */
#define SENT_CH21_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003668u)
/** Alias (User Manual Name) for SENT_CH21_INTCLR.
* To use register names with standard convension, please use SENT_CH21_INTCLR.
*/
#define SENT_INTCLR21 (SENT_CH21_INTCLR)

/** \brief 66C, Interrupt Enable Register 21 */
#define SENT_CH21_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000366Cu)
/** Alias (User Manual Name) for SENT_CH21_INTEN.
* To use register names with standard convension, please use SENT_CH21_INTEN.
*/
#define SENT_INTEN21 (SENT_CH21_INTEN)

/** \brief 670, Interrupt Node Pointer Register 21 */
#define SENT_CH21_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003670u)
/** Alias (User Manual Name) for SENT_CH21_INP.
* To use register names with standard convension, please use SENT_CH21_INP.
*/
#define SENT_INP21 (SENT_CH21_INP)

/** \brief 674, Watch Dog Timer Register 21 */
#define SENT_CH21_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003674u)
/** Alias (User Manual Name) for SENT_CH21_WDT.
* To use register names with standard convension, please use SENT_CH21_WDT.
*/
#define SENT_WDT21 (SENT_CH21_WDT)

/** \brief 680, Channel Pre Divider Register 22 */
#define SENT_CH22_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003680u)
/** Alias (User Manual Name) for SENT_CH22_CPDR.
* To use register names with standard convension, please use SENT_CH22_CPDR.
*/
#define SENT_CPDR22 (SENT_CH22_CPDR)

/** \brief 684, Channel Fractional Divider Register 22 */
#define SENT_CH22_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003684u)
/** Alias (User Manual Name) for SENT_CH22_CFDR.
* To use register names with standard convension, please use SENT_CH22_CFDR.
*/
#define SENT_CFDR22 (SENT_CH22_CFDR)

/** \brief 688, Receiver Control Register 22 */
#define SENT_CH22_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003688u)
/** Alias (User Manual Name) for SENT_CH22_RCR.
* To use register names with standard convension, please use SENT_CH22_RCR.
*/
#define SENT_RCR22 (SENT_CH22_RCR)

/** \brief 68C, Receive Status Register 22 */
#define SENT_CH22_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000368Cu)
/** Alias (User Manual Name) for SENT_CH22_RSR.
* To use register names with standard convension, please use SENT_CH22_RSR.
*/
#define SENT_RSR22 (SENT_CH22_RSR)

/** \brief 690, Serial Data and Status Register 22 */
#define SENT_CH22_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003690u)
/** Alias (User Manual Name) for SENT_CH22_SDS.
* To use register names with standard convension, please use SENT_CH22_SDS.
*/
#define SENT_SDS22 (SENT_CH22_SDS)

/** \brief 694, Input and Output Control Register 22 */
#define SENT_CH22_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003694u)
/** Alias (User Manual Name) for SENT_CH22_IOCR.
* To use register names with standard convension, please use SENT_CH22_IOCR.
*/
#define SENT_IOCR22 (SENT_CH22_IOCR)

/** \brief 698, SPC Control Register 22 */
#define SENT_CH22_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003698u)
/** Alias (User Manual Name) for SENT_CH22_SCR.
* To use register names with standard convension, please use SENT_CH22_SCR.
*/
#define SENT_SCR22 (SENT_CH22_SCR)

/** \brief 69C, Receive Data View Register 22 */
#define SENT_CH22_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000369Cu)
/** Alias (User Manual Name) for SENT_CH22_VIEW.
* To use register names with standard convension, please use SENT_CH22_VIEW.
*/
#define SENT_VIEW22 (SENT_CH22_VIEW)

/** \brief 6A0, Interrupt Status Register 22 */
#define SENT_CH22_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00036A0u)
/** Alias (User Manual Name) for SENT_CH22_INTSTAT.
* To use register names with standard convension, please use SENT_CH22_INTSTAT.
*/
#define SENT_INTSTAT22 (SENT_CH22_INTSTAT)

/** \brief 6A4, Interrupt Set Register 22 */
#define SENT_CH22_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00036A4u)
/** Alias (User Manual Name) for SENT_CH22_INTSET.
* To use register names with standard convension, please use SENT_CH22_INTSET.
*/
#define SENT_INTSET22 (SENT_CH22_INTSET)

/** \brief 6A8, Interrupt Clear Register 22 */
#define SENT_CH22_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00036A8u)
/** Alias (User Manual Name) for SENT_CH22_INTCLR.
* To use register names with standard convension, please use SENT_CH22_INTCLR.
*/
#define SENT_INTCLR22 (SENT_CH22_INTCLR)

/** \brief 6AC, Interrupt Enable Register 22 */
#define SENT_CH22_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00036ACu)
/** Alias (User Manual Name) for SENT_CH22_INTEN.
* To use register names with standard convension, please use SENT_CH22_INTEN.
*/
#define SENT_INTEN22 (SENT_CH22_INTEN)

/** \brief 6B0, Interrupt Node Pointer Register 22 */
#define SENT_CH22_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00036B0u)
/** Alias (User Manual Name) for SENT_CH22_INP.
* To use register names with standard convension, please use SENT_CH22_INP.
*/
#define SENT_INP22 (SENT_CH22_INP)

/** \brief 6B4, Watch Dog Timer Register 22 */
#define SENT_CH22_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00036B4u)
/** Alias (User Manual Name) for SENT_CH22_WDT.
* To use register names with standard convension, please use SENT_CH22_WDT.
*/
#define SENT_WDT22 (SENT_CH22_WDT)

/** \brief 6C0, Channel Pre Divider Register 23 */
#define SENT_CH23_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF00036C0u)
/** Alias (User Manual Name) for SENT_CH23_CPDR.
* To use register names with standard convension, please use SENT_CH23_CPDR.
*/
#define SENT_CPDR23 (SENT_CH23_CPDR)

/** \brief 6C4, Channel Fractional Divider Register 23 */
#define SENT_CH23_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF00036C4u)
/** Alias (User Manual Name) for SENT_CH23_CFDR.
* To use register names with standard convension, please use SENT_CH23_CFDR.
*/
#define SENT_CFDR23 (SENT_CH23_CFDR)

/** \brief 6C8, Receiver Control Register 23 */
#define SENT_CH23_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF00036C8u)
/** Alias (User Manual Name) for SENT_CH23_RCR.
* To use register names with standard convension, please use SENT_CH23_RCR.
*/
#define SENT_RCR23 (SENT_CH23_RCR)

/** \brief 6CC, Receive Status Register 23 */
#define SENT_CH23_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF00036CCu)
/** Alias (User Manual Name) for SENT_CH23_RSR.
* To use register names with standard convension, please use SENT_CH23_RSR.
*/
#define SENT_RSR23 (SENT_CH23_RSR)

/** \brief 6D0, Serial Data and Status Register 23 */
#define SENT_CH23_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF00036D0u)
/** Alias (User Manual Name) for SENT_CH23_SDS.
* To use register names with standard convension, please use SENT_CH23_SDS.
*/
#define SENT_SDS23 (SENT_CH23_SDS)

/** \brief 6D4, Input and Output Control Register 23 */
#define SENT_CH23_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF00036D4u)
/** Alias (User Manual Name) for SENT_CH23_IOCR.
* To use register names with standard convension, please use SENT_CH23_IOCR.
*/
#define SENT_IOCR23 (SENT_CH23_IOCR)

/** \brief 6D8, SPC Control Register 23 */
#define SENT_CH23_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF00036D8u)
/** Alias (User Manual Name) for SENT_CH23_SCR.
* To use register names with standard convension, please use SENT_CH23_SCR.
*/
#define SENT_SCR23 (SENT_CH23_SCR)

/** \brief 6DC, Receive Data View Register 23 */
#define SENT_CH23_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF00036DCu)
/** Alias (User Manual Name) for SENT_CH23_VIEW.
* To use register names with standard convension, please use SENT_CH23_VIEW.
*/
#define SENT_VIEW23 (SENT_CH23_VIEW)

/** \brief 6E0, Interrupt Status Register 23 */
#define SENT_CH23_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00036E0u)
/** Alias (User Manual Name) for SENT_CH23_INTSTAT.
* To use register names with standard convension, please use SENT_CH23_INTSTAT.
*/
#define SENT_INTSTAT23 (SENT_CH23_INTSTAT)

/** \brief 6E4, Interrupt Set Register 23 */
#define SENT_CH23_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00036E4u)
/** Alias (User Manual Name) for SENT_CH23_INTSET.
* To use register names with standard convension, please use SENT_CH23_INTSET.
*/
#define SENT_INTSET23 (SENT_CH23_INTSET)

/** \brief 6E8, Interrupt Clear Register 23 */
#define SENT_CH23_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00036E8u)
/** Alias (User Manual Name) for SENT_CH23_INTCLR.
* To use register names with standard convension, please use SENT_CH23_INTCLR.
*/
#define SENT_INTCLR23 (SENT_CH23_INTCLR)

/** \brief 6EC, Interrupt Enable Register 23 */
#define SENT_CH23_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00036ECu)
/** Alias (User Manual Name) for SENT_CH23_INTEN.
* To use register names with standard convension, please use SENT_CH23_INTEN.
*/
#define SENT_INTEN23 (SENT_CH23_INTEN)

/** \brief 6F0, Interrupt Node Pointer Register 23 */
#define SENT_CH23_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00036F0u)
/** Alias (User Manual Name) for SENT_CH23_INP.
* To use register names with standard convension, please use SENT_CH23_INP.
*/
#define SENT_INP23 (SENT_CH23_INP)

/** \brief 6F4, Watch Dog Timer Register 23 */
#define SENT_CH23_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00036F4u)
/** Alias (User Manual Name) for SENT_CH23_WDT.
* To use register names with standard convension, please use SENT_CH23_WDT.
*/
#define SENT_WDT23 (SENT_CH23_WDT)

/** \brief 700, Channel Pre Divider Register 24 */
#define SENT_CH24_CPDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003700u)
/** Alias (User Manual Name) for SENT_CH24_CPDR.
* To use register names with standard convension, please use SENT_CH24_CPDR.
*/
#define SENT_CPDR24 (SENT_CH24_CPDR)

/** \brief 704, Channel Fractional Divider Register 24 */
#define SENT_CH24_CFDR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003704u)
/** Alias (User Manual Name) for SENT_CH24_CFDR.
* To use register names with standard convension, please use SENT_CH24_CFDR.
*/
#define SENT_CFDR24 (SENT_CH24_CFDR)

/** \brief 708, Receiver Control Register 24 */
#define SENT_CH24_RCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003708u)
/** Alias (User Manual Name) for SENT_CH24_RCR.
* To use register names with standard convension, please use SENT_CH24_RCR.
*/
#define SENT_RCR24 (SENT_CH24_RCR)

/** \brief 70C, Receive Status Register 24 */
#define SENT_CH24_RSR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000370Cu)
/** Alias (User Manual Name) for SENT_CH24_RSR.
* To use register names with standard convension, please use SENT_CH24_RSR.
*/
#define SENT_RSR24 (SENT_CH24_RSR)

/** \brief 710, Serial Data and Status Register 24 */
#define SENT_CH24_SDS /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003710u)
/** Alias (User Manual Name) for SENT_CH24_SDS.
* To use register names with standard convension, please use SENT_CH24_SDS.
*/
#define SENT_SDS24 (SENT_CH24_SDS)

/** \brief 714, Input and Output Control Register 24 */
#define SENT_CH24_IOCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003714u)
/** Alias (User Manual Name) for SENT_CH24_IOCR.
* To use register names with standard convension, please use SENT_CH24_IOCR.
*/
#define SENT_IOCR24 (SENT_CH24_IOCR)

/** \brief 718, SPC Control Register 24 */
#define SENT_CH24_SCR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003718u)
/** Alias (User Manual Name) for SENT_CH24_SCR.
* To use register names with standard convension, please use SENT_CH24_SCR.
*/
#define SENT_SCR24 (SENT_CH24_SCR)

/** \brief 71C, Receive Data View Register 24 */
#define SENT_CH24_VIEW /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000371Cu)
/** Alias (User Manual Name) for SENT_CH24_VIEW.
* To use register names with standard convension, please use SENT_CH24_VIEW.
*/
#define SENT_VIEW24 (SENT_CH24_VIEW)

/** \brief 720, Interrupt Status Register 24 */
#define SENT_CH24_INTSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003720u)
/** Alias (User Manual Name) for SENT_CH24_INTSTAT.
* To use register names with standard convension, please use SENT_CH24_INTSTAT.
*/
#define SENT_INTSTAT24 (SENT_CH24_INTSTAT)

/** \brief 724, Interrupt Set Register 24 */
#define SENT_CH24_INTSET /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003724u)
/** Alias (User Manual Name) for SENT_CH24_INTSET.
* To use register names with standard convension, please use SENT_CH24_INTSET.
*/
#define SENT_INTSET24 (SENT_CH24_INTSET)

/** \brief 728, Interrupt Clear Register 24 */
#define SENT_CH24_INTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003728u)
/** Alias (User Manual Name) for SENT_CH24_INTCLR.
* To use register names with standard convension, please use SENT_CH24_INTCLR.
*/
#define SENT_INTCLR24 (SENT_CH24_INTCLR)

/** \brief 72C, Interrupt Enable Register 24 */
#define SENT_CH24_INTEN /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000372Cu)
/** Alias (User Manual Name) for SENT_CH24_INTEN.
* To use register names with standard convension, please use SENT_CH24_INTEN.
*/
#define SENT_INTEN24 (SENT_CH24_INTEN)

/** \brief 730, Interrupt Node Pointer Register 24 */
#define SENT_CH24_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003730u)
/** Alias (User Manual Name) for SENT_CH24_INP.
* To use register names with standard convension, please use SENT_CH24_INP.
*/
#define SENT_INP24 (SENT_CH24_INP)

/** \brief 734, Watch Dog Timer Register 24 */
#define SENT_CH24_WDT /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003734u)
/** Alias (User Manual Name) for SENT_CH24_WDT.
* To use register names with standard convension, please use SENT_CH24_WDT.
*/
#define SENT_WDT24 (SENT_CH24_WDT)

/** \brief A80, Receive Time Stamp Register 0 */
#define SENT_RTS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A80u)

/** \brief A84, Receive Time Stamp Register 1 */
#define SENT_RTS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A84u)

/** \brief A88, Receive Time Stamp Register 2 */
#define SENT_RTS2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A88u)

/** \brief A8C, Receive Time Stamp Register 3 */
#define SENT_RTS3 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A8Cu)

/** \brief A90, Receive Time Stamp Register 4 */
#define SENT_RTS4 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A90u)

/** \brief A94, Receive Time Stamp Register 5 */
#define SENT_RTS5 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A94u)

/** \brief A98, Receive Time Stamp Register 6 */
#define SENT_RTS6 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A98u)

/** \brief A9C, Receive Time Stamp Register 7 */
#define SENT_RTS7 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A9Cu)

/** \brief AA0, Receive Time Stamp Register 8 */
#define SENT_RTS8 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AA0u)

/** \brief AA4, Receive Time Stamp Register 9 */
#define SENT_RTS9 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AA4u)

/** \brief AA8, Receive Time Stamp Register 10 */
#define SENT_RTS10 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AA8u)

/** \brief AAC, Receive Time Stamp Register 11 */
#define SENT_RTS11 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AACu)

/** \brief AB0, Receive Time Stamp Register 12 */
#define SENT_RTS12 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AB0u)

/** \brief AB4, Receive Time Stamp Register 13 */
#define SENT_RTS13 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AB4u)

/** \brief AB8, Receive Time Stamp Register 14 */
#define SENT_RTS14 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AB8u)

/** \brief ABC, Receive Time Stamp Register 15 */
#define SENT_RTS15 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003ABCu)

/** \brief AC0, Receive Time Stamp Register 16 */
#define SENT_RTS16 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AC0u)

/** \brief AC4, Receive Time Stamp Register 17 */
#define SENT_RTS17 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AC4u)

/** \brief AC8, Receive Time Stamp Register 18 */
#define SENT_RTS18 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AC8u)

/** \brief ACC, Receive Time Stamp Register 19 */
#define SENT_RTS19 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003ACCu)

/** \brief AD0, Receive Time Stamp Register 20 */
#define SENT_RTS20 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AD0u)

/** \brief AD4, Receive Time Stamp Register 21 */
#define SENT_RTS21 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AD4u)

/** \brief AD8, Receive Time Stamp Register 22 */
#define SENT_RTS22 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AD8u)

/** \brief ADC, Receive Time Stamp Register 23 */
#define SENT_RTS23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003ADCu)

/** \brief AE0, Receive Time Stamp Register 24 */
#define SENT_RTS24 /*lint --e(923, 9078)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AE0u)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXSENT_REG_H */
