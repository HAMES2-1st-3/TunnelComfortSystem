/**
 * \file IfxCan_reg.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC27XA_TS_V3.0.1.R2
 * Specification: TC27xA_TS_V3.0.1_SFR_OPEN_MARKET.xml (Revision: V3.0.1)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
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
 * \defgroup IfxLld_Can_Cfg Can address
 * \ingroup IfxLld_Can
 * 
 * \defgroup IfxLld_Can_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Can_Cfg
 * 
 * \defgroup IfxLld_Can_Cfg_Can 2-CAN
 * \ingroup IfxLld_Can_Cfg
 * 
 */
#ifndef IFXCAN_REG_H
#define IFXCAN_REG_H 1
/******************************************************************************/
#include "IfxCan_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Can_Cfg_BaseAddress
 * \{  */

/** \\brief  CAN object */
#define MODULE_CAN /*lint --e(923)*/ ((*(Ifx_CAN*)0xF0018000u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Can_Cfg_Can
 * \{  */

/** \\brief  FC, Access Enable Register 0 */
#define CAN_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_CAN_ACCEN0*)0xF00180FCu)

/** \\brief  F8, Access Enable Register 1 */
#define CAN_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_CAN_ACCEN1*)0xF00180F8u)

/** \\brief  2A4, Application Watchdog Register */
#define CAN_AWDR /*lint --e(923)*/ (*(volatile Ifx_CAN_AWDR*)0xF00182A4u)

/** \\brief  0, CAN Clock Control Register */
#define CAN_CLC /*lint --e(923)*/ (*(volatile Ifx_CAN_CLC*)0xF0018000u)

/** \\brief  294, Cycle Time Register */
#define CAN_CYCTMR /*lint --e(923)*/ (*(volatile Ifx_CAN_CYCTMR*)0xF0018294u)

/** \\brief  C, CAN Fractional Divider Register */
#define CAN_FDR /*lint --e(923)*/ (*(volatile Ifx_CAN_FDR*)0xF001800Cu)

/** \\brief  29C, Global Mark Register */
#define CAN_GMR /*lint --e(923)*/ (*(volatile Ifx_CAN_GMR*)0xF001829Cu)

/** \\brief  8, Module Identification Register */
#define CAN_ID /*lint --e(923)*/ (*(volatile Ifx_CAN_ID*)0xF0018008u)

/** \\brief  F4, Kernel Reset Register 0 */
#define CAN_KRST0 /*lint --e(923)*/ (*(volatile Ifx_CAN_KRST0*)0xF00180F4u)

/** \\brief  F0, Kernel Reset Register 1 */
#define CAN_KRST1 /*lint --e(923)*/ (*(volatile Ifx_CAN_KRST1*)0xF00180F0u)

/** \\brief  EC, Kernel Reset Status Clear Register */
#define CAN_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_CAN_KRSTCLR*)0xF00180ECu)

/** \\brief  2A0, Last Global Mark Register */
#define CAN_LGMR /*lint --e(923)*/ (*(volatile Ifx_CAN_LGMR*)0xF00182A0u)

/** \\brief  100, List Register */
#define CAN_LIST0 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018100u)

/** \\brief  104, List Register */
#define CAN_LIST1 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018104u)

/** \\brief  128, List Register */
#define CAN_LIST10 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018128u)

/** \\brief  12C, List Register */
#define CAN_LIST11 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF001812Cu)

/** \\brief  130, List Register */
#define CAN_LIST12 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018130u)

/** \\brief  134, List Register */
#define CAN_LIST13 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018134u)

/** \\brief  138, List Register */
#define CAN_LIST14 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018138u)

/** \\brief  13C, List Register */
#define CAN_LIST15 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF001813Cu)

/** \\brief  108, List Register */
#define CAN_LIST2 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018108u)

/** \\brief  10C, List Register */
#define CAN_LIST3 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF001810Cu)

/** \\brief  110, List Register */
#define CAN_LIST4 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018110u)

/** \\brief  114, List Register */
#define CAN_LIST5 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018114u)

/** \\brief  118, List Register */
#define CAN_LIST6 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018118u)

/** \\brief  11C, List Register */
#define CAN_LIST7 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF001811Cu)

/** \\brief  120, List Register */
#define CAN_LIST8 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018120u)

/** \\brief  124, List Register */
#define CAN_LIST9 /*lint --e(923)*/ (*(volatile Ifx_CAN_LIST*)0xF0018124u)

/** \\brief  298, Local Offset Register */
#define CAN_LOR /*lint --e(923)*/ (*(volatile Ifx_CAN_LOR*)0xF0018298u)

/** \\brief  28C, Last Reference Mark Register */
#define CAN_LREFMR /*lint --e(923)*/ (*(volatile Ifx_CAN_LREFMR*)0xF001828Cu)

/** \\brief  2A8, Local Time Capture Register */
#define CAN_LTCR /*lint --e(923)*/ (*(volatile Ifx_CAN_LTCR*)0xF00182A8u)

/** \\brief  280, Local Time Register */
#define CAN_LTR /*lint --e(923)*/ (*(volatile Ifx_CAN_LTR*)0xF0018280u)

/** \\brief  1C8, Module Control Register */
#define CAN_MCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MCR*)0xF00181C8u)

/** \\brief  1CC, Module Interrupt Trigger Register */
#define CAN_MITR /*lint --e(923)*/ (*(volatile Ifx_CAN_MITR*)0xF00181CCu)

/** \\brief  100C, Message Object  Acceptance Mask Register */
#define CAN_MO0_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001900Cu)

/** Alias (User Manual Name) for CAN_MO0_AMR.
* To use register names with standard convension, please use CAN_MO0_AMR.
*/
#define	CAN_MOAMR0	(CAN_MO0_AMR)

/** \\brief  1018, Message Object  Arbitration Register */
#define CAN_MO0_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019018u)

/** Alias (User Manual Name) for CAN_MO0_AR.
* To use register names with standard convension, please use CAN_MO0_AR.
*/
#define	CAN_MOAR0	(CAN_MO0_AR)

/** \\brief  101C, Message Object  Control Register */
#define CAN_MO0_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001901Cu)

/** Alias (User Manual Name) for CAN_MO0_CTR.
* To use register names with standard convension, please use CAN_MO0_CTR.
*/
#define	CAN_MOCTR0	(CAN_MO0_CTR)

/** \\brief  1014, Message Object  Data Register High */
#define CAN_MO0_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019014u)

/** Alias (User Manual Name) for CAN_MO0_DATAH.
* To use register names with standard convension, please use CAN_MO0_DATAH.
*/
#define	CAN_MODATAH0	(CAN_MO0_DATAH)

/** \\brief  1010, Message Object  Data Register Low */
#define CAN_MO0_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019010u)

/** Alias (User Manual Name) for CAN_MO0_DATAL.
* To use register names with standard convension, please use CAN_MO0_DATAL.
*/
#define	CAN_MODATAL0	(CAN_MO0_DATAL)

/** \\brief  1000, Message Object  Function Control Register */
#define CAN_MO0_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019000u)

/** Alias (User Manual Name) for CAN_MO0_FCR.
* To use register names with standard convension, please use CAN_MO0_FCR.
*/
#define	CAN_MOFCR0	(CAN_MO0_FCR)

/** \\brief  1004, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO0_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019004u)

/** Alias (User Manual Name) for CAN_MO0_FGPR.
* To use register names with standard convension, please use CAN_MO0_FGPR.
*/
#define	CAN_MOFGPR0	(CAN_MO0_FGPR)

/** \\brief  1008, Message Object  Interrupt Pointer Register */
#define CAN_MO0_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019008u)

/** Alias (User Manual Name) for CAN_MO0_IPR.
* To use register names with standard convension, please use CAN_MO0_IPR.
*/
#define	CAN_MOIPR0	(CAN_MO0_IPR)

/** \\brief  101C, Message Object  Control Register */
#define CAN_MO0_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001901Cu)

/** Alias (User Manual Name) for CAN_MO0_STAT.
* To use register names with standard convension, please use CAN_MO0_STAT.
*/
#define	CAN_MOSTAT0	(CAN_MO0_STAT)

/** \\brief  1C8C, Message Object  Acceptance Mask Register */
#define CAN_MO100_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019C8Cu)

/** Alias (User Manual Name) for CAN_MO100_AMR.
* To use register names with standard convension, please use CAN_MO100_AMR.
*/
#define	CAN_MOAMR100	(CAN_MO100_AMR)

/** \\brief  1C98, Message Object  Arbitration Register */
#define CAN_MO100_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019C98u)

/** Alias (User Manual Name) for CAN_MO100_AR.
* To use register names with standard convension, please use CAN_MO100_AR.
*/
#define	CAN_MOAR100	(CAN_MO100_AR)

/** \\brief  1C9C, Message Object  Control Register */
#define CAN_MO100_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019C9Cu)

/** Alias (User Manual Name) for CAN_MO100_CTR.
* To use register names with standard convension, please use CAN_MO100_CTR.
*/
#define	CAN_MOCTR100	(CAN_MO100_CTR)

/** \\brief  1C94, Message Object  Data Register High */
#define CAN_MO100_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019C94u)

/** Alias (User Manual Name) for CAN_MO100_DATAH.
* To use register names with standard convension, please use CAN_MO100_DATAH.
*/
#define	CAN_MODATAH100	(CAN_MO100_DATAH)

/** \\brief  1C90, Message Object  Data Register Low */
#define CAN_MO100_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019C90u)

/** Alias (User Manual Name) for CAN_MO100_DATAL.
* To use register names with standard convension, please use CAN_MO100_DATAL.
*/
#define	CAN_MODATAL100	(CAN_MO100_DATAL)

/** \\brief  1C80, Message Object  Function Control Register */
#define CAN_MO100_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019C80u)

/** Alias (User Manual Name) for CAN_MO100_FCR.
* To use register names with standard convension, please use CAN_MO100_FCR.
*/
#define	CAN_MOFCR100	(CAN_MO100_FCR)

/** \\brief  1C84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO100_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019C84u)

/** Alias (User Manual Name) for CAN_MO100_FGPR.
* To use register names with standard convension, please use CAN_MO100_FGPR.
*/
#define	CAN_MOFGPR100	(CAN_MO100_FGPR)

/** \\brief  1C88, Message Object  Interrupt Pointer Register */
#define CAN_MO100_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019C88u)

/** Alias (User Manual Name) for CAN_MO100_IPR.
* To use register names with standard convension, please use CAN_MO100_IPR.
*/
#define	CAN_MOIPR100	(CAN_MO100_IPR)

/** \\brief  1C9C, Message Object  Control Register */
#define CAN_MO100_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019C9Cu)

/** Alias (User Manual Name) for CAN_MO100_STAT.
* To use register names with standard convension, please use CAN_MO100_STAT.
*/
#define	CAN_MOSTAT100	(CAN_MO100_STAT)

/** \\brief  1CAC, Message Object  Acceptance Mask Register */
#define CAN_MO101_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019CACu)

/** Alias (User Manual Name) for CAN_MO101_AMR.
* To use register names with standard convension, please use CAN_MO101_AMR.
*/
#define	CAN_MOAMR101	(CAN_MO101_AMR)

/** \\brief  1CB8, Message Object  Arbitration Register */
#define CAN_MO101_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019CB8u)

/** Alias (User Manual Name) for CAN_MO101_AR.
* To use register names with standard convension, please use CAN_MO101_AR.
*/
#define	CAN_MOAR101	(CAN_MO101_AR)

/** \\brief  1CBC, Message Object  Control Register */
#define CAN_MO101_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019CBCu)

/** Alias (User Manual Name) for CAN_MO101_CTR.
* To use register names with standard convension, please use CAN_MO101_CTR.
*/
#define	CAN_MOCTR101	(CAN_MO101_CTR)

/** \\brief  1CB4, Message Object  Data Register High */
#define CAN_MO101_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019CB4u)

/** Alias (User Manual Name) for CAN_MO101_DATAH.
* To use register names with standard convension, please use CAN_MO101_DATAH.
*/
#define	CAN_MODATAH101	(CAN_MO101_DATAH)

/** \\brief  1CB0, Message Object  Data Register Low */
#define CAN_MO101_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019CB0u)

/** Alias (User Manual Name) for CAN_MO101_DATAL.
* To use register names with standard convension, please use CAN_MO101_DATAL.
*/
#define	CAN_MODATAL101	(CAN_MO101_DATAL)

/** \\brief  1CA0, Message Object  Function Control Register */
#define CAN_MO101_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019CA0u)

/** Alias (User Manual Name) for CAN_MO101_FCR.
* To use register names with standard convension, please use CAN_MO101_FCR.
*/
#define	CAN_MOFCR101	(CAN_MO101_FCR)

/** \\brief  1CA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO101_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019CA4u)

/** Alias (User Manual Name) for CAN_MO101_FGPR.
* To use register names with standard convension, please use CAN_MO101_FGPR.
*/
#define	CAN_MOFGPR101	(CAN_MO101_FGPR)

/** \\brief  1CA8, Message Object  Interrupt Pointer Register */
#define CAN_MO101_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019CA8u)

/** Alias (User Manual Name) for CAN_MO101_IPR.
* To use register names with standard convension, please use CAN_MO101_IPR.
*/
#define	CAN_MOIPR101	(CAN_MO101_IPR)

/** \\brief  1CBC, Message Object  Control Register */
#define CAN_MO101_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019CBCu)

/** Alias (User Manual Name) for CAN_MO101_STAT.
* To use register names with standard convension, please use CAN_MO101_STAT.
*/
#define	CAN_MOSTAT101	(CAN_MO101_STAT)

/** \\brief  1CCC, Message Object  Acceptance Mask Register */
#define CAN_MO102_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019CCCu)

/** Alias (User Manual Name) for CAN_MO102_AMR.
* To use register names with standard convension, please use CAN_MO102_AMR.
*/
#define	CAN_MOAMR102	(CAN_MO102_AMR)

/** \\brief  1CD8, Message Object  Arbitration Register */
#define CAN_MO102_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019CD8u)

/** Alias (User Manual Name) for CAN_MO102_AR.
* To use register names with standard convension, please use CAN_MO102_AR.
*/
#define	CAN_MOAR102	(CAN_MO102_AR)

/** \\brief  1CDC, Message Object  Control Register */
#define CAN_MO102_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019CDCu)

/** Alias (User Manual Name) for CAN_MO102_CTR.
* To use register names with standard convension, please use CAN_MO102_CTR.
*/
#define	CAN_MOCTR102	(CAN_MO102_CTR)

/** \\brief  1CD4, Message Object  Data Register High */
#define CAN_MO102_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019CD4u)

/** Alias (User Manual Name) for CAN_MO102_DATAH.
* To use register names with standard convension, please use CAN_MO102_DATAH.
*/
#define	CAN_MODATAH102	(CAN_MO102_DATAH)

/** \\brief  1CD0, Message Object  Data Register Low */
#define CAN_MO102_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019CD0u)

/** Alias (User Manual Name) for CAN_MO102_DATAL.
* To use register names with standard convension, please use CAN_MO102_DATAL.
*/
#define	CAN_MODATAL102	(CAN_MO102_DATAL)

/** \\brief  1CC0, Message Object  Function Control Register */
#define CAN_MO102_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019CC0u)

/** Alias (User Manual Name) for CAN_MO102_FCR.
* To use register names with standard convension, please use CAN_MO102_FCR.
*/
#define	CAN_MOFCR102	(CAN_MO102_FCR)

/** \\brief  1CC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO102_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019CC4u)

/** Alias (User Manual Name) for CAN_MO102_FGPR.
* To use register names with standard convension, please use CAN_MO102_FGPR.
*/
#define	CAN_MOFGPR102	(CAN_MO102_FGPR)

/** \\brief  1CC8, Message Object  Interrupt Pointer Register */
#define CAN_MO102_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019CC8u)

/** Alias (User Manual Name) for CAN_MO102_IPR.
* To use register names with standard convension, please use CAN_MO102_IPR.
*/
#define	CAN_MOIPR102	(CAN_MO102_IPR)

/** \\brief  1CDC, Message Object  Control Register */
#define CAN_MO102_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019CDCu)

/** Alias (User Manual Name) for CAN_MO102_STAT.
* To use register names with standard convension, please use CAN_MO102_STAT.
*/
#define	CAN_MOSTAT102	(CAN_MO102_STAT)

/** \\brief  1CEC, Message Object  Acceptance Mask Register */
#define CAN_MO103_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019CECu)

/** Alias (User Manual Name) for CAN_MO103_AMR.
* To use register names with standard convension, please use CAN_MO103_AMR.
*/
#define	CAN_MOAMR103	(CAN_MO103_AMR)

/** \\brief  1CF8, Message Object  Arbitration Register */
#define CAN_MO103_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019CF8u)

/** Alias (User Manual Name) for CAN_MO103_AR.
* To use register names with standard convension, please use CAN_MO103_AR.
*/
#define	CAN_MOAR103	(CAN_MO103_AR)

/** \\brief  1CFC, Message Object  Control Register */
#define CAN_MO103_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019CFCu)

/** Alias (User Manual Name) for CAN_MO103_CTR.
* To use register names with standard convension, please use CAN_MO103_CTR.
*/
#define	CAN_MOCTR103	(CAN_MO103_CTR)

/** \\brief  1CF4, Message Object  Data Register High */
#define CAN_MO103_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019CF4u)

/** Alias (User Manual Name) for CAN_MO103_DATAH.
* To use register names with standard convension, please use CAN_MO103_DATAH.
*/
#define	CAN_MODATAH103	(CAN_MO103_DATAH)

/** \\brief  1CF0, Message Object  Data Register Low */
#define CAN_MO103_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019CF0u)

/** Alias (User Manual Name) for CAN_MO103_DATAL.
* To use register names with standard convension, please use CAN_MO103_DATAL.
*/
#define	CAN_MODATAL103	(CAN_MO103_DATAL)

/** \\brief  1CE0, Message Object  Function Control Register */
#define CAN_MO103_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019CE0u)

/** Alias (User Manual Name) for CAN_MO103_FCR.
* To use register names with standard convension, please use CAN_MO103_FCR.
*/
#define	CAN_MOFCR103	(CAN_MO103_FCR)

/** \\brief  1CE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO103_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019CE4u)

/** Alias (User Manual Name) for CAN_MO103_FGPR.
* To use register names with standard convension, please use CAN_MO103_FGPR.
*/
#define	CAN_MOFGPR103	(CAN_MO103_FGPR)

/** \\brief  1CE8, Message Object  Interrupt Pointer Register */
#define CAN_MO103_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019CE8u)

/** Alias (User Manual Name) for CAN_MO103_IPR.
* To use register names with standard convension, please use CAN_MO103_IPR.
*/
#define	CAN_MOIPR103	(CAN_MO103_IPR)

/** \\brief  1CFC, Message Object  Control Register */
#define CAN_MO103_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019CFCu)

/** Alias (User Manual Name) for CAN_MO103_STAT.
* To use register names with standard convension, please use CAN_MO103_STAT.
*/
#define	CAN_MOSTAT103	(CAN_MO103_STAT)

/** \\brief  1D0C, Message Object  Acceptance Mask Register */
#define CAN_MO104_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019D0Cu)

/** Alias (User Manual Name) for CAN_MO104_AMR.
* To use register names with standard convension, please use CAN_MO104_AMR.
*/
#define	CAN_MOAMR104	(CAN_MO104_AMR)

/** \\brief  1D18, Message Object  Arbitration Register */
#define CAN_MO104_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019D18u)

/** Alias (User Manual Name) for CAN_MO104_AR.
* To use register names with standard convension, please use CAN_MO104_AR.
*/
#define	CAN_MOAR104	(CAN_MO104_AR)

/** \\brief  1D1C, Message Object  Control Register */
#define CAN_MO104_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019D1Cu)

/** Alias (User Manual Name) for CAN_MO104_CTR.
* To use register names with standard convension, please use CAN_MO104_CTR.
*/
#define	CAN_MOCTR104	(CAN_MO104_CTR)

/** \\brief  1D14, Message Object  Data Register High */
#define CAN_MO104_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019D14u)

/** Alias (User Manual Name) for CAN_MO104_DATAH.
* To use register names with standard convension, please use CAN_MO104_DATAH.
*/
#define	CAN_MODATAH104	(CAN_MO104_DATAH)

/** \\brief  1D10, Message Object  Data Register Low */
#define CAN_MO104_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019D10u)

/** Alias (User Manual Name) for CAN_MO104_DATAL.
* To use register names with standard convension, please use CAN_MO104_DATAL.
*/
#define	CAN_MODATAL104	(CAN_MO104_DATAL)

/** \\brief  1D00, Message Object  Function Control Register */
#define CAN_MO104_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019D00u)

/** Alias (User Manual Name) for CAN_MO104_FCR.
* To use register names with standard convension, please use CAN_MO104_FCR.
*/
#define	CAN_MOFCR104	(CAN_MO104_FCR)

/** \\brief  1D04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO104_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019D04u)

/** Alias (User Manual Name) for CAN_MO104_FGPR.
* To use register names with standard convension, please use CAN_MO104_FGPR.
*/
#define	CAN_MOFGPR104	(CAN_MO104_FGPR)

/** \\brief  1D08, Message Object  Interrupt Pointer Register */
#define CAN_MO104_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019D08u)

/** Alias (User Manual Name) for CAN_MO104_IPR.
* To use register names with standard convension, please use CAN_MO104_IPR.
*/
#define	CAN_MOIPR104	(CAN_MO104_IPR)

/** \\brief  1D1C, Message Object  Control Register */
#define CAN_MO104_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019D1Cu)

/** Alias (User Manual Name) for CAN_MO104_STAT.
* To use register names with standard convension, please use CAN_MO104_STAT.
*/
#define	CAN_MOSTAT104	(CAN_MO104_STAT)

/** \\brief  1D2C, Message Object  Acceptance Mask Register */
#define CAN_MO105_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019D2Cu)

/** Alias (User Manual Name) for CAN_MO105_AMR.
* To use register names with standard convension, please use CAN_MO105_AMR.
*/
#define	CAN_MOAMR105	(CAN_MO105_AMR)

/** \\brief  1D38, Message Object  Arbitration Register */
#define CAN_MO105_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019D38u)

/** Alias (User Manual Name) for CAN_MO105_AR.
* To use register names with standard convension, please use CAN_MO105_AR.
*/
#define	CAN_MOAR105	(CAN_MO105_AR)

/** \\brief  1D3C, Message Object  Control Register */
#define CAN_MO105_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019D3Cu)

/** Alias (User Manual Name) for CAN_MO105_CTR.
* To use register names with standard convension, please use CAN_MO105_CTR.
*/
#define	CAN_MOCTR105	(CAN_MO105_CTR)

/** \\brief  1D34, Message Object  Data Register High */
#define CAN_MO105_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019D34u)

/** Alias (User Manual Name) for CAN_MO105_DATAH.
* To use register names with standard convension, please use CAN_MO105_DATAH.
*/
#define	CAN_MODATAH105	(CAN_MO105_DATAH)

/** \\brief  1D30, Message Object  Data Register Low */
#define CAN_MO105_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019D30u)

/** Alias (User Manual Name) for CAN_MO105_DATAL.
* To use register names with standard convension, please use CAN_MO105_DATAL.
*/
#define	CAN_MODATAL105	(CAN_MO105_DATAL)

/** \\brief  1D20, Message Object  Function Control Register */
#define CAN_MO105_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019D20u)

/** Alias (User Manual Name) for CAN_MO105_FCR.
* To use register names with standard convension, please use CAN_MO105_FCR.
*/
#define	CAN_MOFCR105	(CAN_MO105_FCR)

/** \\brief  1D24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO105_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019D24u)

/** Alias (User Manual Name) for CAN_MO105_FGPR.
* To use register names with standard convension, please use CAN_MO105_FGPR.
*/
#define	CAN_MOFGPR105	(CAN_MO105_FGPR)

/** \\brief  1D28, Message Object  Interrupt Pointer Register */
#define CAN_MO105_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019D28u)

/** Alias (User Manual Name) for CAN_MO105_IPR.
* To use register names with standard convension, please use CAN_MO105_IPR.
*/
#define	CAN_MOIPR105	(CAN_MO105_IPR)

/** \\brief  1D3C, Message Object  Control Register */
#define CAN_MO105_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019D3Cu)

/** Alias (User Manual Name) for CAN_MO105_STAT.
* To use register names with standard convension, please use CAN_MO105_STAT.
*/
#define	CAN_MOSTAT105	(CAN_MO105_STAT)

/** \\brief  1D4C, Message Object  Acceptance Mask Register */
#define CAN_MO106_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019D4Cu)

/** Alias (User Manual Name) for CAN_MO106_AMR.
* To use register names with standard convension, please use CAN_MO106_AMR.
*/
#define	CAN_MOAMR106	(CAN_MO106_AMR)

/** \\brief  1D58, Message Object  Arbitration Register */
#define CAN_MO106_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019D58u)

/** Alias (User Manual Name) for CAN_MO106_AR.
* To use register names with standard convension, please use CAN_MO106_AR.
*/
#define	CAN_MOAR106	(CAN_MO106_AR)

/** \\brief  1D5C, Message Object  Control Register */
#define CAN_MO106_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019D5Cu)

/** Alias (User Manual Name) for CAN_MO106_CTR.
* To use register names with standard convension, please use CAN_MO106_CTR.
*/
#define	CAN_MOCTR106	(CAN_MO106_CTR)

/** \\brief  1D54, Message Object  Data Register High */
#define CAN_MO106_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019D54u)

/** Alias (User Manual Name) for CAN_MO106_DATAH.
* To use register names with standard convension, please use CAN_MO106_DATAH.
*/
#define	CAN_MODATAH106	(CAN_MO106_DATAH)

/** \\brief  1D50, Message Object  Data Register Low */
#define CAN_MO106_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019D50u)

/** Alias (User Manual Name) for CAN_MO106_DATAL.
* To use register names with standard convension, please use CAN_MO106_DATAL.
*/
#define	CAN_MODATAL106	(CAN_MO106_DATAL)

/** \\brief  1D40, Message Object  Function Control Register */
#define CAN_MO106_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019D40u)

/** Alias (User Manual Name) for CAN_MO106_FCR.
* To use register names with standard convension, please use CAN_MO106_FCR.
*/
#define	CAN_MOFCR106	(CAN_MO106_FCR)

/** \\brief  1D44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO106_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019D44u)

/** Alias (User Manual Name) for CAN_MO106_FGPR.
* To use register names with standard convension, please use CAN_MO106_FGPR.
*/
#define	CAN_MOFGPR106	(CAN_MO106_FGPR)

/** \\brief  1D48, Message Object  Interrupt Pointer Register */
#define CAN_MO106_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019D48u)

/** Alias (User Manual Name) for CAN_MO106_IPR.
* To use register names with standard convension, please use CAN_MO106_IPR.
*/
#define	CAN_MOIPR106	(CAN_MO106_IPR)

/** \\brief  1D5C, Message Object  Control Register */
#define CAN_MO106_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019D5Cu)

/** Alias (User Manual Name) for CAN_MO106_STAT.
* To use register names with standard convension, please use CAN_MO106_STAT.
*/
#define	CAN_MOSTAT106	(CAN_MO106_STAT)

/** \\brief  1D6C, Message Object  Acceptance Mask Register */
#define CAN_MO107_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019D6Cu)

/** Alias (User Manual Name) for CAN_MO107_AMR.
* To use register names with standard convension, please use CAN_MO107_AMR.
*/
#define	CAN_MOAMR107	(CAN_MO107_AMR)

/** \\brief  1D78, Message Object  Arbitration Register */
#define CAN_MO107_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019D78u)

/** Alias (User Manual Name) for CAN_MO107_AR.
* To use register names with standard convension, please use CAN_MO107_AR.
*/
#define	CAN_MOAR107	(CAN_MO107_AR)

/** \\brief  1D7C, Message Object  Control Register */
#define CAN_MO107_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019D7Cu)

/** Alias (User Manual Name) for CAN_MO107_CTR.
* To use register names with standard convension, please use CAN_MO107_CTR.
*/
#define	CAN_MOCTR107	(CAN_MO107_CTR)

/** \\brief  1D74, Message Object  Data Register High */
#define CAN_MO107_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019D74u)

/** Alias (User Manual Name) for CAN_MO107_DATAH.
* To use register names with standard convension, please use CAN_MO107_DATAH.
*/
#define	CAN_MODATAH107	(CAN_MO107_DATAH)

/** \\brief  1D70, Message Object  Data Register Low */
#define CAN_MO107_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019D70u)

/** Alias (User Manual Name) for CAN_MO107_DATAL.
* To use register names with standard convension, please use CAN_MO107_DATAL.
*/
#define	CAN_MODATAL107	(CAN_MO107_DATAL)

/** \\brief  1D60, Message Object  Function Control Register */
#define CAN_MO107_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019D60u)

/** Alias (User Manual Name) for CAN_MO107_FCR.
* To use register names with standard convension, please use CAN_MO107_FCR.
*/
#define	CAN_MOFCR107	(CAN_MO107_FCR)

/** \\brief  1D64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO107_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019D64u)

/** Alias (User Manual Name) for CAN_MO107_FGPR.
* To use register names with standard convension, please use CAN_MO107_FGPR.
*/
#define	CAN_MOFGPR107	(CAN_MO107_FGPR)

/** \\brief  1D68, Message Object  Interrupt Pointer Register */
#define CAN_MO107_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019D68u)

/** Alias (User Manual Name) for CAN_MO107_IPR.
* To use register names with standard convension, please use CAN_MO107_IPR.
*/
#define	CAN_MOIPR107	(CAN_MO107_IPR)

/** \\brief  1D7C, Message Object  Control Register */
#define CAN_MO107_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019D7Cu)

/** Alias (User Manual Name) for CAN_MO107_STAT.
* To use register names with standard convension, please use CAN_MO107_STAT.
*/
#define	CAN_MOSTAT107	(CAN_MO107_STAT)

/** \\brief  1D8C, Message Object  Acceptance Mask Register */
#define CAN_MO108_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019D8Cu)

/** Alias (User Manual Name) for CAN_MO108_AMR.
* To use register names with standard convension, please use CAN_MO108_AMR.
*/
#define	CAN_MOAMR108	(CAN_MO108_AMR)

/** \\brief  1D98, Message Object  Arbitration Register */
#define CAN_MO108_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019D98u)

/** Alias (User Manual Name) for CAN_MO108_AR.
* To use register names with standard convension, please use CAN_MO108_AR.
*/
#define	CAN_MOAR108	(CAN_MO108_AR)

/** \\brief  1D9C, Message Object  Control Register */
#define CAN_MO108_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019D9Cu)

/** Alias (User Manual Name) for CAN_MO108_CTR.
* To use register names with standard convension, please use CAN_MO108_CTR.
*/
#define	CAN_MOCTR108	(CAN_MO108_CTR)

/** \\brief  1D94, Message Object  Data Register High */
#define CAN_MO108_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019D94u)

/** Alias (User Manual Name) for CAN_MO108_DATAH.
* To use register names with standard convension, please use CAN_MO108_DATAH.
*/
#define	CAN_MODATAH108	(CAN_MO108_DATAH)

/** \\brief  1D90, Message Object  Data Register Low */
#define CAN_MO108_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019D90u)

/** Alias (User Manual Name) for CAN_MO108_DATAL.
* To use register names with standard convension, please use CAN_MO108_DATAL.
*/
#define	CAN_MODATAL108	(CAN_MO108_DATAL)

/** \\brief  1D80, Message Object  Function Control Register */
#define CAN_MO108_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019D80u)

/** Alias (User Manual Name) for CAN_MO108_FCR.
* To use register names with standard convension, please use CAN_MO108_FCR.
*/
#define	CAN_MOFCR108	(CAN_MO108_FCR)

/** \\brief  1D84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO108_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019D84u)

/** Alias (User Manual Name) for CAN_MO108_FGPR.
* To use register names with standard convension, please use CAN_MO108_FGPR.
*/
#define	CAN_MOFGPR108	(CAN_MO108_FGPR)

/** \\brief  1D88, Message Object  Interrupt Pointer Register */
#define CAN_MO108_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019D88u)

/** Alias (User Manual Name) for CAN_MO108_IPR.
* To use register names with standard convension, please use CAN_MO108_IPR.
*/
#define	CAN_MOIPR108	(CAN_MO108_IPR)

/** \\brief  1D9C, Message Object  Control Register */
#define CAN_MO108_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019D9Cu)

/** Alias (User Manual Name) for CAN_MO108_STAT.
* To use register names with standard convension, please use CAN_MO108_STAT.
*/
#define	CAN_MOSTAT108	(CAN_MO108_STAT)

/** \\brief  1DAC, Message Object  Acceptance Mask Register */
#define CAN_MO109_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019DACu)

/** Alias (User Manual Name) for CAN_MO109_AMR.
* To use register names with standard convension, please use CAN_MO109_AMR.
*/
#define	CAN_MOAMR109	(CAN_MO109_AMR)

/** \\brief  1DB8, Message Object  Arbitration Register */
#define CAN_MO109_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019DB8u)

/** Alias (User Manual Name) for CAN_MO109_AR.
* To use register names with standard convension, please use CAN_MO109_AR.
*/
#define	CAN_MOAR109	(CAN_MO109_AR)

/** \\brief  1DBC, Message Object  Control Register */
#define CAN_MO109_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019DBCu)

/** Alias (User Manual Name) for CAN_MO109_CTR.
* To use register names with standard convension, please use CAN_MO109_CTR.
*/
#define	CAN_MOCTR109	(CAN_MO109_CTR)

/** \\brief  1DB4, Message Object  Data Register High */
#define CAN_MO109_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019DB4u)

/** Alias (User Manual Name) for CAN_MO109_DATAH.
* To use register names with standard convension, please use CAN_MO109_DATAH.
*/
#define	CAN_MODATAH109	(CAN_MO109_DATAH)

/** \\brief  1DB0, Message Object  Data Register Low */
#define CAN_MO109_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019DB0u)

/** Alias (User Manual Name) for CAN_MO109_DATAL.
* To use register names with standard convension, please use CAN_MO109_DATAL.
*/
#define	CAN_MODATAL109	(CAN_MO109_DATAL)

/** \\brief  1DA0, Message Object  Function Control Register */
#define CAN_MO109_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019DA0u)

/** Alias (User Manual Name) for CAN_MO109_FCR.
* To use register names with standard convension, please use CAN_MO109_FCR.
*/
#define	CAN_MOFCR109	(CAN_MO109_FCR)

/** \\brief  1DA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO109_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019DA4u)

/** Alias (User Manual Name) for CAN_MO109_FGPR.
* To use register names with standard convension, please use CAN_MO109_FGPR.
*/
#define	CAN_MOFGPR109	(CAN_MO109_FGPR)

/** \\brief  1DA8, Message Object  Interrupt Pointer Register */
#define CAN_MO109_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019DA8u)

/** Alias (User Manual Name) for CAN_MO109_IPR.
* To use register names with standard convension, please use CAN_MO109_IPR.
*/
#define	CAN_MOIPR109	(CAN_MO109_IPR)

/** \\brief  1DBC, Message Object  Control Register */
#define CAN_MO109_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019DBCu)

/** Alias (User Manual Name) for CAN_MO109_STAT.
* To use register names with standard convension, please use CAN_MO109_STAT.
*/
#define	CAN_MOSTAT109	(CAN_MO109_STAT)

/** \\brief  114C, Message Object  Acceptance Mask Register */
#define CAN_MO10_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001914Cu)

/** Alias (User Manual Name) for CAN_MO10_AMR.
* To use register names with standard convension, please use CAN_MO10_AMR.
*/
#define	CAN_MOAMR10	(CAN_MO10_AMR)

/** \\brief  1158, Message Object  Arbitration Register */
#define CAN_MO10_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019158u)

/** Alias (User Manual Name) for CAN_MO10_AR.
* To use register names with standard convension, please use CAN_MO10_AR.
*/
#define	CAN_MOAR10	(CAN_MO10_AR)

/** \\brief  115C, Message Object  Control Register */
#define CAN_MO10_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001915Cu)

/** Alias (User Manual Name) for CAN_MO10_CTR.
* To use register names with standard convension, please use CAN_MO10_CTR.
*/
#define	CAN_MOCTR10	(CAN_MO10_CTR)

/** \\brief  1154, Message Object  Data Register High */
#define CAN_MO10_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019154u)

/** Alias (User Manual Name) for CAN_MO10_DATAH.
* To use register names with standard convension, please use CAN_MO10_DATAH.
*/
#define	CAN_MODATAH10	(CAN_MO10_DATAH)

/** \\brief  1150, Message Object  Data Register Low */
#define CAN_MO10_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019150u)

/** Alias (User Manual Name) for CAN_MO10_DATAL.
* To use register names with standard convension, please use CAN_MO10_DATAL.
*/
#define	CAN_MODATAL10	(CAN_MO10_DATAL)

/** \\brief  1140, Message Object  Function Control Register */
#define CAN_MO10_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019140u)

/** Alias (User Manual Name) for CAN_MO10_FCR.
* To use register names with standard convension, please use CAN_MO10_FCR.
*/
#define	CAN_MOFCR10	(CAN_MO10_FCR)

/** \\brief  1144, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO10_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019144u)

/** Alias (User Manual Name) for CAN_MO10_FGPR.
* To use register names with standard convension, please use CAN_MO10_FGPR.
*/
#define	CAN_MOFGPR10	(CAN_MO10_FGPR)

/** \\brief  1148, Message Object  Interrupt Pointer Register */
#define CAN_MO10_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019148u)

/** Alias (User Manual Name) for CAN_MO10_IPR.
* To use register names with standard convension, please use CAN_MO10_IPR.
*/
#define	CAN_MOIPR10	(CAN_MO10_IPR)

/** \\brief  115C, Message Object  Control Register */
#define CAN_MO10_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001915Cu)

/** Alias (User Manual Name) for CAN_MO10_STAT.
* To use register names with standard convension, please use CAN_MO10_STAT.
*/
#define	CAN_MOSTAT10	(CAN_MO10_STAT)

/** \\brief  1DCC, Message Object  Acceptance Mask Register */
#define CAN_MO110_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019DCCu)

/** Alias (User Manual Name) for CAN_MO110_AMR.
* To use register names with standard convension, please use CAN_MO110_AMR.
*/
#define	CAN_MOAMR110	(CAN_MO110_AMR)

/** \\brief  1DD8, Message Object  Arbitration Register */
#define CAN_MO110_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019DD8u)

/** Alias (User Manual Name) for CAN_MO110_AR.
* To use register names with standard convension, please use CAN_MO110_AR.
*/
#define	CAN_MOAR110	(CAN_MO110_AR)

/** \\brief  1DDC, Message Object  Control Register */
#define CAN_MO110_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019DDCu)

/** Alias (User Manual Name) for CAN_MO110_CTR.
* To use register names with standard convension, please use CAN_MO110_CTR.
*/
#define	CAN_MOCTR110	(CAN_MO110_CTR)

/** \\brief  1DD4, Message Object  Data Register High */
#define CAN_MO110_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019DD4u)

/** Alias (User Manual Name) for CAN_MO110_DATAH.
* To use register names with standard convension, please use CAN_MO110_DATAH.
*/
#define	CAN_MODATAH110	(CAN_MO110_DATAH)

/** \\brief  1DD0, Message Object  Data Register Low */
#define CAN_MO110_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019DD0u)

/** Alias (User Manual Name) for CAN_MO110_DATAL.
* To use register names with standard convension, please use CAN_MO110_DATAL.
*/
#define	CAN_MODATAL110	(CAN_MO110_DATAL)

/** \\brief  1DC0, Message Object  Function Control Register */
#define CAN_MO110_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019DC0u)

/** Alias (User Manual Name) for CAN_MO110_FCR.
* To use register names with standard convension, please use CAN_MO110_FCR.
*/
#define	CAN_MOFCR110	(CAN_MO110_FCR)

/** \\brief  1DC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO110_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019DC4u)

/** Alias (User Manual Name) for CAN_MO110_FGPR.
* To use register names with standard convension, please use CAN_MO110_FGPR.
*/
#define	CAN_MOFGPR110	(CAN_MO110_FGPR)

/** \\brief  1DC8, Message Object  Interrupt Pointer Register */
#define CAN_MO110_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019DC8u)

/** Alias (User Manual Name) for CAN_MO110_IPR.
* To use register names with standard convension, please use CAN_MO110_IPR.
*/
#define	CAN_MOIPR110	(CAN_MO110_IPR)

/** \\brief  1DDC, Message Object  Control Register */
#define CAN_MO110_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019DDCu)

/** Alias (User Manual Name) for CAN_MO110_STAT.
* To use register names with standard convension, please use CAN_MO110_STAT.
*/
#define	CAN_MOSTAT110	(CAN_MO110_STAT)

/** \\brief  1DEC, Message Object  Acceptance Mask Register */
#define CAN_MO111_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019DECu)

/** Alias (User Manual Name) for CAN_MO111_AMR.
* To use register names with standard convension, please use CAN_MO111_AMR.
*/
#define	CAN_MOAMR111	(CAN_MO111_AMR)

/** \\brief  1DF8, Message Object  Arbitration Register */
#define CAN_MO111_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019DF8u)

/** Alias (User Manual Name) for CAN_MO111_AR.
* To use register names with standard convension, please use CAN_MO111_AR.
*/
#define	CAN_MOAR111	(CAN_MO111_AR)

/** \\brief  1DFC, Message Object  Control Register */
#define CAN_MO111_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019DFCu)

/** Alias (User Manual Name) for CAN_MO111_CTR.
* To use register names with standard convension, please use CAN_MO111_CTR.
*/
#define	CAN_MOCTR111	(CAN_MO111_CTR)

/** \\brief  1DF4, Message Object  Data Register High */
#define CAN_MO111_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019DF4u)

/** Alias (User Manual Name) for CAN_MO111_DATAH.
* To use register names with standard convension, please use CAN_MO111_DATAH.
*/
#define	CAN_MODATAH111	(CAN_MO111_DATAH)

/** \\brief  1DF0, Message Object  Data Register Low */
#define CAN_MO111_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019DF0u)

/** Alias (User Manual Name) for CAN_MO111_DATAL.
* To use register names with standard convension, please use CAN_MO111_DATAL.
*/
#define	CAN_MODATAL111	(CAN_MO111_DATAL)

/** \\brief  1DE0, Message Object  Function Control Register */
#define CAN_MO111_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019DE0u)

/** Alias (User Manual Name) for CAN_MO111_FCR.
* To use register names with standard convension, please use CAN_MO111_FCR.
*/
#define	CAN_MOFCR111	(CAN_MO111_FCR)

/** \\brief  1DE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO111_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019DE4u)

/** Alias (User Manual Name) for CAN_MO111_FGPR.
* To use register names with standard convension, please use CAN_MO111_FGPR.
*/
#define	CAN_MOFGPR111	(CAN_MO111_FGPR)

/** \\brief  1DE8, Message Object  Interrupt Pointer Register */
#define CAN_MO111_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019DE8u)

/** Alias (User Manual Name) for CAN_MO111_IPR.
* To use register names with standard convension, please use CAN_MO111_IPR.
*/
#define	CAN_MOIPR111	(CAN_MO111_IPR)

/** \\brief  1DFC, Message Object  Control Register */
#define CAN_MO111_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019DFCu)

/** Alias (User Manual Name) for CAN_MO111_STAT.
* To use register names with standard convension, please use CAN_MO111_STAT.
*/
#define	CAN_MOSTAT111	(CAN_MO111_STAT)

/** \\brief  1E0C, Message Object  Acceptance Mask Register */
#define CAN_MO112_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019E0Cu)

/** Alias (User Manual Name) for CAN_MO112_AMR.
* To use register names with standard convension, please use CAN_MO112_AMR.
*/
#define	CAN_MOAMR112	(CAN_MO112_AMR)

/** \\brief  1E18, Message Object  Arbitration Register */
#define CAN_MO112_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019E18u)

/** Alias (User Manual Name) for CAN_MO112_AR.
* To use register names with standard convension, please use CAN_MO112_AR.
*/
#define	CAN_MOAR112	(CAN_MO112_AR)

/** \\brief  1E1C, Message Object  Control Register */
#define CAN_MO112_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019E1Cu)

/** Alias (User Manual Name) for CAN_MO112_CTR.
* To use register names with standard convension, please use CAN_MO112_CTR.
*/
#define	CAN_MOCTR112	(CAN_MO112_CTR)

/** \\brief  1E14, Message Object  Data Register High */
#define CAN_MO112_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019E14u)

/** Alias (User Manual Name) for CAN_MO112_DATAH.
* To use register names with standard convension, please use CAN_MO112_DATAH.
*/
#define	CAN_MODATAH112	(CAN_MO112_DATAH)

/** \\brief  1E10, Message Object  Data Register Low */
#define CAN_MO112_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019E10u)

/** Alias (User Manual Name) for CAN_MO112_DATAL.
* To use register names with standard convension, please use CAN_MO112_DATAL.
*/
#define	CAN_MODATAL112	(CAN_MO112_DATAL)

/** \\brief  1E00, Message Object  Function Control Register */
#define CAN_MO112_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019E00u)

/** Alias (User Manual Name) for CAN_MO112_FCR.
* To use register names with standard convension, please use CAN_MO112_FCR.
*/
#define	CAN_MOFCR112	(CAN_MO112_FCR)

/** \\brief  1E04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO112_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019E04u)

/** Alias (User Manual Name) for CAN_MO112_FGPR.
* To use register names with standard convension, please use CAN_MO112_FGPR.
*/
#define	CAN_MOFGPR112	(CAN_MO112_FGPR)

/** \\brief  1E08, Message Object  Interrupt Pointer Register */
#define CAN_MO112_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019E08u)

/** Alias (User Manual Name) for CAN_MO112_IPR.
* To use register names with standard convension, please use CAN_MO112_IPR.
*/
#define	CAN_MOIPR112	(CAN_MO112_IPR)

/** \\brief  1E1C, Message Object  Control Register */
#define CAN_MO112_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019E1Cu)

/** Alias (User Manual Name) for CAN_MO112_STAT.
* To use register names with standard convension, please use CAN_MO112_STAT.
*/
#define	CAN_MOSTAT112	(CAN_MO112_STAT)

/** \\brief  1E2C, Message Object  Acceptance Mask Register */
#define CAN_MO113_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019E2Cu)

/** Alias (User Manual Name) for CAN_MO113_AMR.
* To use register names with standard convension, please use CAN_MO113_AMR.
*/
#define	CAN_MOAMR113	(CAN_MO113_AMR)

/** \\brief  1E38, Message Object  Arbitration Register */
#define CAN_MO113_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019E38u)

/** Alias (User Manual Name) for CAN_MO113_AR.
* To use register names with standard convension, please use CAN_MO113_AR.
*/
#define	CAN_MOAR113	(CAN_MO113_AR)

/** \\brief  1E3C, Message Object  Control Register */
#define CAN_MO113_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019E3Cu)

/** Alias (User Manual Name) for CAN_MO113_CTR.
* To use register names with standard convension, please use CAN_MO113_CTR.
*/
#define	CAN_MOCTR113	(CAN_MO113_CTR)

/** \\brief  1E34, Message Object  Data Register High */
#define CAN_MO113_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019E34u)

/** Alias (User Manual Name) for CAN_MO113_DATAH.
* To use register names with standard convension, please use CAN_MO113_DATAH.
*/
#define	CAN_MODATAH113	(CAN_MO113_DATAH)

/** \\brief  1E30, Message Object  Data Register Low */
#define CAN_MO113_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019E30u)

/** Alias (User Manual Name) for CAN_MO113_DATAL.
* To use register names with standard convension, please use CAN_MO113_DATAL.
*/
#define	CAN_MODATAL113	(CAN_MO113_DATAL)

/** \\brief  1E20, Message Object  Function Control Register */
#define CAN_MO113_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019E20u)

/** Alias (User Manual Name) for CAN_MO113_FCR.
* To use register names with standard convension, please use CAN_MO113_FCR.
*/
#define	CAN_MOFCR113	(CAN_MO113_FCR)

/** \\brief  1E24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO113_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019E24u)

/** Alias (User Manual Name) for CAN_MO113_FGPR.
* To use register names with standard convension, please use CAN_MO113_FGPR.
*/
#define	CAN_MOFGPR113	(CAN_MO113_FGPR)

/** \\brief  1E28, Message Object  Interrupt Pointer Register */
#define CAN_MO113_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019E28u)

/** Alias (User Manual Name) for CAN_MO113_IPR.
* To use register names with standard convension, please use CAN_MO113_IPR.
*/
#define	CAN_MOIPR113	(CAN_MO113_IPR)

/** \\brief  1E3C, Message Object  Control Register */
#define CAN_MO113_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019E3Cu)

/** Alias (User Manual Name) for CAN_MO113_STAT.
* To use register names with standard convension, please use CAN_MO113_STAT.
*/
#define	CAN_MOSTAT113	(CAN_MO113_STAT)

/** \\brief  1E4C, Message Object  Acceptance Mask Register */
#define CAN_MO114_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019E4Cu)

/** Alias (User Manual Name) for CAN_MO114_AMR.
* To use register names with standard convension, please use CAN_MO114_AMR.
*/
#define	CAN_MOAMR114	(CAN_MO114_AMR)

/** \\brief  1E58, Message Object  Arbitration Register */
#define CAN_MO114_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019E58u)

/** Alias (User Manual Name) for CAN_MO114_AR.
* To use register names with standard convension, please use CAN_MO114_AR.
*/
#define	CAN_MOAR114	(CAN_MO114_AR)

/** \\brief  1E5C, Message Object  Control Register */
#define CAN_MO114_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019E5Cu)

/** Alias (User Manual Name) for CAN_MO114_CTR.
* To use register names with standard convension, please use CAN_MO114_CTR.
*/
#define	CAN_MOCTR114	(CAN_MO114_CTR)

/** \\brief  1E54, Message Object  Data Register High */
#define CAN_MO114_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019E54u)

/** Alias (User Manual Name) for CAN_MO114_DATAH.
* To use register names with standard convension, please use CAN_MO114_DATAH.
*/
#define	CAN_MODATAH114	(CAN_MO114_DATAH)

/** \\brief  1E50, Message Object  Data Register Low */
#define CAN_MO114_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019E50u)

/** Alias (User Manual Name) for CAN_MO114_DATAL.
* To use register names with standard convension, please use CAN_MO114_DATAL.
*/
#define	CAN_MODATAL114	(CAN_MO114_DATAL)

/** \\brief  1E40, Message Object  Function Control Register */
#define CAN_MO114_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019E40u)

/** Alias (User Manual Name) for CAN_MO114_FCR.
* To use register names with standard convension, please use CAN_MO114_FCR.
*/
#define	CAN_MOFCR114	(CAN_MO114_FCR)

/** \\brief  1E44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO114_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019E44u)

/** Alias (User Manual Name) for CAN_MO114_FGPR.
* To use register names with standard convension, please use CAN_MO114_FGPR.
*/
#define	CAN_MOFGPR114	(CAN_MO114_FGPR)

/** \\brief  1E48, Message Object  Interrupt Pointer Register */
#define CAN_MO114_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019E48u)

/** Alias (User Manual Name) for CAN_MO114_IPR.
* To use register names with standard convension, please use CAN_MO114_IPR.
*/
#define	CAN_MOIPR114	(CAN_MO114_IPR)

/** \\brief  1E5C, Message Object  Control Register */
#define CAN_MO114_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019E5Cu)

/** Alias (User Manual Name) for CAN_MO114_STAT.
* To use register names with standard convension, please use CAN_MO114_STAT.
*/
#define	CAN_MOSTAT114	(CAN_MO114_STAT)

/** \\brief  1E6C, Message Object  Acceptance Mask Register */
#define CAN_MO115_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019E6Cu)

/** Alias (User Manual Name) for CAN_MO115_AMR.
* To use register names with standard convension, please use CAN_MO115_AMR.
*/
#define	CAN_MOAMR115	(CAN_MO115_AMR)

/** \\brief  1E78, Message Object  Arbitration Register */
#define CAN_MO115_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019E78u)

/** Alias (User Manual Name) for CAN_MO115_AR.
* To use register names with standard convension, please use CAN_MO115_AR.
*/
#define	CAN_MOAR115	(CAN_MO115_AR)

/** \\brief  1E7C, Message Object  Control Register */
#define CAN_MO115_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019E7Cu)

/** Alias (User Manual Name) for CAN_MO115_CTR.
* To use register names with standard convension, please use CAN_MO115_CTR.
*/
#define	CAN_MOCTR115	(CAN_MO115_CTR)

/** \\brief  1E74, Message Object  Data Register High */
#define CAN_MO115_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019E74u)

/** Alias (User Manual Name) for CAN_MO115_DATAH.
* To use register names with standard convension, please use CAN_MO115_DATAH.
*/
#define	CAN_MODATAH115	(CAN_MO115_DATAH)

/** \\brief  1E70, Message Object  Data Register Low */
#define CAN_MO115_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019E70u)

/** Alias (User Manual Name) for CAN_MO115_DATAL.
* To use register names with standard convension, please use CAN_MO115_DATAL.
*/
#define	CAN_MODATAL115	(CAN_MO115_DATAL)

/** \\brief  1E60, Message Object  Function Control Register */
#define CAN_MO115_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019E60u)

/** Alias (User Manual Name) for CAN_MO115_FCR.
* To use register names with standard convension, please use CAN_MO115_FCR.
*/
#define	CAN_MOFCR115	(CAN_MO115_FCR)

/** \\brief  1E64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO115_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019E64u)

/** Alias (User Manual Name) for CAN_MO115_FGPR.
* To use register names with standard convension, please use CAN_MO115_FGPR.
*/
#define	CAN_MOFGPR115	(CAN_MO115_FGPR)

/** \\brief  1E68, Message Object  Interrupt Pointer Register */
#define CAN_MO115_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019E68u)

/** Alias (User Manual Name) for CAN_MO115_IPR.
* To use register names with standard convension, please use CAN_MO115_IPR.
*/
#define	CAN_MOIPR115	(CAN_MO115_IPR)

/** \\brief  1E7C, Message Object  Control Register */
#define CAN_MO115_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019E7Cu)

/** Alias (User Manual Name) for CAN_MO115_STAT.
* To use register names with standard convension, please use CAN_MO115_STAT.
*/
#define	CAN_MOSTAT115	(CAN_MO115_STAT)

/** \\brief  1E8C, Message Object  Acceptance Mask Register */
#define CAN_MO116_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019E8Cu)

/** Alias (User Manual Name) for CAN_MO116_AMR.
* To use register names with standard convension, please use CAN_MO116_AMR.
*/
#define	CAN_MOAMR116	(CAN_MO116_AMR)

/** \\brief  1E98, Message Object  Arbitration Register */
#define CAN_MO116_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019E98u)

/** Alias (User Manual Name) for CAN_MO116_AR.
* To use register names with standard convension, please use CAN_MO116_AR.
*/
#define	CAN_MOAR116	(CAN_MO116_AR)

/** \\brief  1E9C, Message Object  Control Register */
#define CAN_MO116_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019E9Cu)

/** Alias (User Manual Name) for CAN_MO116_CTR.
* To use register names with standard convension, please use CAN_MO116_CTR.
*/
#define	CAN_MOCTR116	(CAN_MO116_CTR)

/** \\brief  1E94, Message Object  Data Register High */
#define CAN_MO116_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019E94u)

/** Alias (User Manual Name) for CAN_MO116_DATAH.
* To use register names with standard convension, please use CAN_MO116_DATAH.
*/
#define	CAN_MODATAH116	(CAN_MO116_DATAH)

/** \\brief  1E90, Message Object  Data Register Low */
#define CAN_MO116_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019E90u)

/** Alias (User Manual Name) for CAN_MO116_DATAL.
* To use register names with standard convension, please use CAN_MO116_DATAL.
*/
#define	CAN_MODATAL116	(CAN_MO116_DATAL)

/** \\brief  1E80, Message Object  Function Control Register */
#define CAN_MO116_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019E80u)

/** Alias (User Manual Name) for CAN_MO116_FCR.
* To use register names with standard convension, please use CAN_MO116_FCR.
*/
#define	CAN_MOFCR116	(CAN_MO116_FCR)

/** \\brief  1E84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO116_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019E84u)

/** Alias (User Manual Name) for CAN_MO116_FGPR.
* To use register names with standard convension, please use CAN_MO116_FGPR.
*/
#define	CAN_MOFGPR116	(CAN_MO116_FGPR)

/** \\brief  1E88, Message Object  Interrupt Pointer Register */
#define CAN_MO116_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019E88u)

/** Alias (User Manual Name) for CAN_MO116_IPR.
* To use register names with standard convension, please use CAN_MO116_IPR.
*/
#define	CAN_MOIPR116	(CAN_MO116_IPR)

/** \\brief  1E9C, Message Object  Control Register */
#define CAN_MO116_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019E9Cu)

/** Alias (User Manual Name) for CAN_MO116_STAT.
* To use register names with standard convension, please use CAN_MO116_STAT.
*/
#define	CAN_MOSTAT116	(CAN_MO116_STAT)

/** \\brief  1EAC, Message Object  Acceptance Mask Register */
#define CAN_MO117_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019EACu)

/** Alias (User Manual Name) for CAN_MO117_AMR.
* To use register names with standard convension, please use CAN_MO117_AMR.
*/
#define	CAN_MOAMR117	(CAN_MO117_AMR)

/** \\brief  1EB8, Message Object  Arbitration Register */
#define CAN_MO117_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019EB8u)

/** Alias (User Manual Name) for CAN_MO117_AR.
* To use register names with standard convension, please use CAN_MO117_AR.
*/
#define	CAN_MOAR117	(CAN_MO117_AR)

/** \\brief  1EBC, Message Object  Control Register */
#define CAN_MO117_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019EBCu)

/** Alias (User Manual Name) for CAN_MO117_CTR.
* To use register names with standard convension, please use CAN_MO117_CTR.
*/
#define	CAN_MOCTR117	(CAN_MO117_CTR)

/** \\brief  1EB4, Message Object  Data Register High */
#define CAN_MO117_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019EB4u)

/** Alias (User Manual Name) for CAN_MO117_DATAH.
* To use register names with standard convension, please use CAN_MO117_DATAH.
*/
#define	CAN_MODATAH117	(CAN_MO117_DATAH)

/** \\brief  1EB0, Message Object  Data Register Low */
#define CAN_MO117_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019EB0u)

/** Alias (User Manual Name) for CAN_MO117_DATAL.
* To use register names with standard convension, please use CAN_MO117_DATAL.
*/
#define	CAN_MODATAL117	(CAN_MO117_DATAL)

/** \\brief  1EA0, Message Object  Function Control Register */
#define CAN_MO117_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019EA0u)

/** Alias (User Manual Name) for CAN_MO117_FCR.
* To use register names with standard convension, please use CAN_MO117_FCR.
*/
#define	CAN_MOFCR117	(CAN_MO117_FCR)

/** \\brief  1EA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO117_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019EA4u)

/** Alias (User Manual Name) for CAN_MO117_FGPR.
* To use register names with standard convension, please use CAN_MO117_FGPR.
*/
#define	CAN_MOFGPR117	(CAN_MO117_FGPR)

/** \\brief  1EA8, Message Object  Interrupt Pointer Register */
#define CAN_MO117_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019EA8u)

/** Alias (User Manual Name) for CAN_MO117_IPR.
* To use register names with standard convension, please use CAN_MO117_IPR.
*/
#define	CAN_MOIPR117	(CAN_MO117_IPR)

/** \\brief  1EBC, Message Object  Control Register */
#define CAN_MO117_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019EBCu)

/** Alias (User Manual Name) for CAN_MO117_STAT.
* To use register names with standard convension, please use CAN_MO117_STAT.
*/
#define	CAN_MOSTAT117	(CAN_MO117_STAT)

/** \\brief  1ECC, Message Object  Acceptance Mask Register */
#define CAN_MO118_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019ECCu)

/** Alias (User Manual Name) for CAN_MO118_AMR.
* To use register names with standard convension, please use CAN_MO118_AMR.
*/
#define	CAN_MOAMR118	(CAN_MO118_AMR)

/** \\brief  1ED8, Message Object  Arbitration Register */
#define CAN_MO118_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019ED8u)

/** Alias (User Manual Name) for CAN_MO118_AR.
* To use register names with standard convension, please use CAN_MO118_AR.
*/
#define	CAN_MOAR118	(CAN_MO118_AR)

/** \\brief  1EDC, Message Object  Control Register */
#define CAN_MO118_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019EDCu)

/** Alias (User Manual Name) for CAN_MO118_CTR.
* To use register names with standard convension, please use CAN_MO118_CTR.
*/
#define	CAN_MOCTR118	(CAN_MO118_CTR)

/** \\brief  1ED4, Message Object  Data Register High */
#define CAN_MO118_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019ED4u)

/** Alias (User Manual Name) for CAN_MO118_DATAH.
* To use register names with standard convension, please use CAN_MO118_DATAH.
*/
#define	CAN_MODATAH118	(CAN_MO118_DATAH)

/** \\brief  1ED0, Message Object  Data Register Low */
#define CAN_MO118_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019ED0u)

/** Alias (User Manual Name) for CAN_MO118_DATAL.
* To use register names with standard convension, please use CAN_MO118_DATAL.
*/
#define	CAN_MODATAL118	(CAN_MO118_DATAL)

/** \\brief  1EC0, Message Object  Function Control Register */
#define CAN_MO118_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019EC0u)

/** Alias (User Manual Name) for CAN_MO118_FCR.
* To use register names with standard convension, please use CAN_MO118_FCR.
*/
#define	CAN_MOFCR118	(CAN_MO118_FCR)

/** \\brief  1EC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO118_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019EC4u)

/** Alias (User Manual Name) for CAN_MO118_FGPR.
* To use register names with standard convension, please use CAN_MO118_FGPR.
*/
#define	CAN_MOFGPR118	(CAN_MO118_FGPR)

/** \\brief  1EC8, Message Object  Interrupt Pointer Register */
#define CAN_MO118_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019EC8u)

/** Alias (User Manual Name) for CAN_MO118_IPR.
* To use register names with standard convension, please use CAN_MO118_IPR.
*/
#define	CAN_MOIPR118	(CAN_MO118_IPR)

/** \\brief  1EDC, Message Object  Control Register */
#define CAN_MO118_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019EDCu)

/** Alias (User Manual Name) for CAN_MO118_STAT.
* To use register names with standard convension, please use CAN_MO118_STAT.
*/
#define	CAN_MOSTAT118	(CAN_MO118_STAT)

/** \\brief  1EEC, Message Object  Acceptance Mask Register */
#define CAN_MO119_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019EECu)

/** Alias (User Manual Name) for CAN_MO119_AMR.
* To use register names with standard convension, please use CAN_MO119_AMR.
*/
#define	CAN_MOAMR119	(CAN_MO119_AMR)

/** \\brief  1EF8, Message Object  Arbitration Register */
#define CAN_MO119_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019EF8u)

/** Alias (User Manual Name) for CAN_MO119_AR.
* To use register names with standard convension, please use CAN_MO119_AR.
*/
#define	CAN_MOAR119	(CAN_MO119_AR)

/** \\brief  1EFC, Message Object  Control Register */
#define CAN_MO119_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019EFCu)

/** Alias (User Manual Name) for CAN_MO119_CTR.
* To use register names with standard convension, please use CAN_MO119_CTR.
*/
#define	CAN_MOCTR119	(CAN_MO119_CTR)

/** \\brief  1EF4, Message Object  Data Register High */
#define CAN_MO119_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019EF4u)

/** Alias (User Manual Name) for CAN_MO119_DATAH.
* To use register names with standard convension, please use CAN_MO119_DATAH.
*/
#define	CAN_MODATAH119	(CAN_MO119_DATAH)

/** \\brief  1EF0, Message Object  Data Register Low */
#define CAN_MO119_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019EF0u)

/** Alias (User Manual Name) for CAN_MO119_DATAL.
* To use register names with standard convension, please use CAN_MO119_DATAL.
*/
#define	CAN_MODATAL119	(CAN_MO119_DATAL)

/** \\brief  1EE0, Message Object  Function Control Register */
#define CAN_MO119_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019EE0u)

/** Alias (User Manual Name) for CAN_MO119_FCR.
* To use register names with standard convension, please use CAN_MO119_FCR.
*/
#define	CAN_MOFCR119	(CAN_MO119_FCR)

/** \\brief  1EE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO119_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019EE4u)

/** Alias (User Manual Name) for CAN_MO119_FGPR.
* To use register names with standard convension, please use CAN_MO119_FGPR.
*/
#define	CAN_MOFGPR119	(CAN_MO119_FGPR)

/** \\brief  1EE8, Message Object  Interrupt Pointer Register */
#define CAN_MO119_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019EE8u)

/** Alias (User Manual Name) for CAN_MO119_IPR.
* To use register names with standard convension, please use CAN_MO119_IPR.
*/
#define	CAN_MOIPR119	(CAN_MO119_IPR)

/** \\brief  1EFC, Message Object  Control Register */
#define CAN_MO119_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019EFCu)

/** Alias (User Manual Name) for CAN_MO119_STAT.
* To use register names with standard convension, please use CAN_MO119_STAT.
*/
#define	CAN_MOSTAT119	(CAN_MO119_STAT)

/** \\brief  116C, Message Object  Acceptance Mask Register */
#define CAN_MO11_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001916Cu)

/** Alias (User Manual Name) for CAN_MO11_AMR.
* To use register names with standard convension, please use CAN_MO11_AMR.
*/
#define	CAN_MOAMR11	(CAN_MO11_AMR)

/** \\brief  1178, Message Object  Arbitration Register */
#define CAN_MO11_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019178u)

/** Alias (User Manual Name) for CAN_MO11_AR.
* To use register names with standard convension, please use CAN_MO11_AR.
*/
#define	CAN_MOAR11	(CAN_MO11_AR)

/** \\brief  117C, Message Object  Control Register */
#define CAN_MO11_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001917Cu)

/** Alias (User Manual Name) for CAN_MO11_CTR.
* To use register names with standard convension, please use CAN_MO11_CTR.
*/
#define	CAN_MOCTR11	(CAN_MO11_CTR)

/** \\brief  1174, Message Object  Data Register High */
#define CAN_MO11_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019174u)

/** Alias (User Manual Name) for CAN_MO11_DATAH.
* To use register names with standard convension, please use CAN_MO11_DATAH.
*/
#define	CAN_MODATAH11	(CAN_MO11_DATAH)

/** \\brief  1170, Message Object  Data Register Low */
#define CAN_MO11_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019170u)

/** Alias (User Manual Name) for CAN_MO11_DATAL.
* To use register names with standard convension, please use CAN_MO11_DATAL.
*/
#define	CAN_MODATAL11	(CAN_MO11_DATAL)

/** \\brief  1160, Message Object  Function Control Register */
#define CAN_MO11_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019160u)

/** Alias (User Manual Name) for CAN_MO11_FCR.
* To use register names with standard convension, please use CAN_MO11_FCR.
*/
#define	CAN_MOFCR11	(CAN_MO11_FCR)

/** \\brief  1164, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO11_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019164u)

/** Alias (User Manual Name) for CAN_MO11_FGPR.
* To use register names with standard convension, please use CAN_MO11_FGPR.
*/
#define	CAN_MOFGPR11	(CAN_MO11_FGPR)

/** \\brief  1168, Message Object  Interrupt Pointer Register */
#define CAN_MO11_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019168u)

/** Alias (User Manual Name) for CAN_MO11_IPR.
* To use register names with standard convension, please use CAN_MO11_IPR.
*/
#define	CAN_MOIPR11	(CAN_MO11_IPR)

/** \\brief  117C, Message Object  Control Register */
#define CAN_MO11_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001917Cu)

/** Alias (User Manual Name) for CAN_MO11_STAT.
* To use register names with standard convension, please use CAN_MO11_STAT.
*/
#define	CAN_MOSTAT11	(CAN_MO11_STAT)

/** \\brief  1F0C, Message Object  Acceptance Mask Register */
#define CAN_MO120_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019F0Cu)

/** Alias (User Manual Name) for CAN_MO120_AMR.
* To use register names with standard convension, please use CAN_MO120_AMR.
*/
#define	CAN_MOAMR120	(CAN_MO120_AMR)

/** \\brief  1F18, Message Object  Arbitration Register */
#define CAN_MO120_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019F18u)

/** Alias (User Manual Name) for CAN_MO120_AR.
* To use register names with standard convension, please use CAN_MO120_AR.
*/
#define	CAN_MOAR120	(CAN_MO120_AR)

/** \\brief  1F1C, Message Object  Control Register */
#define CAN_MO120_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019F1Cu)

/** Alias (User Manual Name) for CAN_MO120_CTR.
* To use register names with standard convension, please use CAN_MO120_CTR.
*/
#define	CAN_MOCTR120	(CAN_MO120_CTR)

/** \\brief  1F14, Message Object  Data Register High */
#define CAN_MO120_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019F14u)

/** Alias (User Manual Name) for CAN_MO120_DATAH.
* To use register names with standard convension, please use CAN_MO120_DATAH.
*/
#define	CAN_MODATAH120	(CAN_MO120_DATAH)

/** \\brief  1F10, Message Object  Data Register Low */
#define CAN_MO120_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019F10u)

/** Alias (User Manual Name) for CAN_MO120_DATAL.
* To use register names with standard convension, please use CAN_MO120_DATAL.
*/
#define	CAN_MODATAL120	(CAN_MO120_DATAL)

/** \\brief  1F00, Message Object  Function Control Register */
#define CAN_MO120_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019F00u)

/** Alias (User Manual Name) for CAN_MO120_FCR.
* To use register names with standard convension, please use CAN_MO120_FCR.
*/
#define	CAN_MOFCR120	(CAN_MO120_FCR)

/** \\brief  1F04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO120_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019F04u)

/** Alias (User Manual Name) for CAN_MO120_FGPR.
* To use register names with standard convension, please use CAN_MO120_FGPR.
*/
#define	CAN_MOFGPR120	(CAN_MO120_FGPR)

/** \\brief  1F08, Message Object  Interrupt Pointer Register */
#define CAN_MO120_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019F08u)

/** Alias (User Manual Name) for CAN_MO120_IPR.
* To use register names with standard convension, please use CAN_MO120_IPR.
*/
#define	CAN_MOIPR120	(CAN_MO120_IPR)

/** \\brief  1F1C, Message Object  Control Register */
#define CAN_MO120_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019F1Cu)

/** Alias (User Manual Name) for CAN_MO120_STAT.
* To use register names with standard convension, please use CAN_MO120_STAT.
*/
#define	CAN_MOSTAT120	(CAN_MO120_STAT)

/** \\brief  1F2C, Message Object  Acceptance Mask Register */
#define CAN_MO121_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019F2Cu)

/** Alias (User Manual Name) for CAN_MO121_AMR.
* To use register names with standard convension, please use CAN_MO121_AMR.
*/
#define	CAN_MOAMR121	(CAN_MO121_AMR)

/** \\brief  1F38, Message Object  Arbitration Register */
#define CAN_MO121_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019F38u)

/** Alias (User Manual Name) for CAN_MO121_AR.
* To use register names with standard convension, please use CAN_MO121_AR.
*/
#define	CAN_MOAR121	(CAN_MO121_AR)

/** \\brief  1F3C, Message Object  Control Register */
#define CAN_MO121_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019F3Cu)

/** Alias (User Manual Name) for CAN_MO121_CTR.
* To use register names with standard convension, please use CAN_MO121_CTR.
*/
#define	CAN_MOCTR121	(CAN_MO121_CTR)

/** \\brief  1F34, Message Object  Data Register High */
#define CAN_MO121_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019F34u)

/** Alias (User Manual Name) for CAN_MO121_DATAH.
* To use register names with standard convension, please use CAN_MO121_DATAH.
*/
#define	CAN_MODATAH121	(CAN_MO121_DATAH)

/** \\brief  1F30, Message Object  Data Register Low */
#define CAN_MO121_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019F30u)

/** Alias (User Manual Name) for CAN_MO121_DATAL.
* To use register names with standard convension, please use CAN_MO121_DATAL.
*/
#define	CAN_MODATAL121	(CAN_MO121_DATAL)

/** \\brief  1F20, Message Object  Function Control Register */
#define CAN_MO121_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019F20u)

/** Alias (User Manual Name) for CAN_MO121_FCR.
* To use register names with standard convension, please use CAN_MO121_FCR.
*/
#define	CAN_MOFCR121	(CAN_MO121_FCR)

/** \\brief  1F24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO121_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019F24u)

/** Alias (User Manual Name) for CAN_MO121_FGPR.
* To use register names with standard convension, please use CAN_MO121_FGPR.
*/
#define	CAN_MOFGPR121	(CAN_MO121_FGPR)

/** \\brief  1F28, Message Object  Interrupt Pointer Register */
#define CAN_MO121_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019F28u)

/** Alias (User Manual Name) for CAN_MO121_IPR.
* To use register names with standard convension, please use CAN_MO121_IPR.
*/
#define	CAN_MOIPR121	(CAN_MO121_IPR)

/** \\brief  1F3C, Message Object  Control Register */
#define CAN_MO121_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019F3Cu)

/** Alias (User Manual Name) for CAN_MO121_STAT.
* To use register names with standard convension, please use CAN_MO121_STAT.
*/
#define	CAN_MOSTAT121	(CAN_MO121_STAT)

/** \\brief  1F4C, Message Object  Acceptance Mask Register */
#define CAN_MO122_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019F4Cu)

/** Alias (User Manual Name) for CAN_MO122_AMR.
* To use register names with standard convension, please use CAN_MO122_AMR.
*/
#define	CAN_MOAMR122	(CAN_MO122_AMR)

/** \\brief  1F58, Message Object  Arbitration Register */
#define CAN_MO122_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019F58u)

/** Alias (User Manual Name) for CAN_MO122_AR.
* To use register names with standard convension, please use CAN_MO122_AR.
*/
#define	CAN_MOAR122	(CAN_MO122_AR)

/** \\brief  1F5C, Message Object  Control Register */
#define CAN_MO122_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019F5Cu)

/** Alias (User Manual Name) for CAN_MO122_CTR.
* To use register names with standard convension, please use CAN_MO122_CTR.
*/
#define	CAN_MOCTR122	(CAN_MO122_CTR)

/** \\brief  1F54, Message Object  Data Register High */
#define CAN_MO122_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019F54u)

/** Alias (User Manual Name) for CAN_MO122_DATAH.
* To use register names with standard convension, please use CAN_MO122_DATAH.
*/
#define	CAN_MODATAH122	(CAN_MO122_DATAH)

/** \\brief  1F50, Message Object  Data Register Low */
#define CAN_MO122_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019F50u)

/** Alias (User Manual Name) for CAN_MO122_DATAL.
* To use register names with standard convension, please use CAN_MO122_DATAL.
*/
#define	CAN_MODATAL122	(CAN_MO122_DATAL)

/** \\brief  1F40, Message Object  Function Control Register */
#define CAN_MO122_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019F40u)

/** Alias (User Manual Name) for CAN_MO122_FCR.
* To use register names with standard convension, please use CAN_MO122_FCR.
*/
#define	CAN_MOFCR122	(CAN_MO122_FCR)

/** \\brief  1F44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO122_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019F44u)

/** Alias (User Manual Name) for CAN_MO122_FGPR.
* To use register names with standard convension, please use CAN_MO122_FGPR.
*/
#define	CAN_MOFGPR122	(CAN_MO122_FGPR)

/** \\brief  1F48, Message Object  Interrupt Pointer Register */
#define CAN_MO122_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019F48u)

/** Alias (User Manual Name) for CAN_MO122_IPR.
* To use register names with standard convension, please use CAN_MO122_IPR.
*/
#define	CAN_MOIPR122	(CAN_MO122_IPR)

/** \\brief  1F5C, Message Object  Control Register */
#define CAN_MO122_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019F5Cu)

/** Alias (User Manual Name) for CAN_MO122_STAT.
* To use register names with standard convension, please use CAN_MO122_STAT.
*/
#define	CAN_MOSTAT122	(CAN_MO122_STAT)

/** \\brief  1F6C, Message Object  Acceptance Mask Register */
#define CAN_MO123_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019F6Cu)

/** Alias (User Manual Name) for CAN_MO123_AMR.
* To use register names with standard convension, please use CAN_MO123_AMR.
*/
#define	CAN_MOAMR123	(CAN_MO123_AMR)

/** \\brief  1F78, Message Object  Arbitration Register */
#define CAN_MO123_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019F78u)

/** Alias (User Manual Name) for CAN_MO123_AR.
* To use register names with standard convension, please use CAN_MO123_AR.
*/
#define	CAN_MOAR123	(CAN_MO123_AR)

/** \\brief  1F7C, Message Object  Control Register */
#define CAN_MO123_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019F7Cu)

/** Alias (User Manual Name) for CAN_MO123_CTR.
* To use register names with standard convension, please use CAN_MO123_CTR.
*/
#define	CAN_MOCTR123	(CAN_MO123_CTR)

/** \\brief  1F74, Message Object  Data Register High */
#define CAN_MO123_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019F74u)

/** Alias (User Manual Name) for CAN_MO123_DATAH.
* To use register names with standard convension, please use CAN_MO123_DATAH.
*/
#define	CAN_MODATAH123	(CAN_MO123_DATAH)

/** \\brief  1F70, Message Object  Data Register Low */
#define CAN_MO123_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019F70u)

/** Alias (User Manual Name) for CAN_MO123_DATAL.
* To use register names with standard convension, please use CAN_MO123_DATAL.
*/
#define	CAN_MODATAL123	(CAN_MO123_DATAL)

/** \\brief  1F60, Message Object  Function Control Register */
#define CAN_MO123_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019F60u)

/** Alias (User Manual Name) for CAN_MO123_FCR.
* To use register names with standard convension, please use CAN_MO123_FCR.
*/
#define	CAN_MOFCR123	(CAN_MO123_FCR)

/** \\brief  1F64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO123_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019F64u)

/** Alias (User Manual Name) for CAN_MO123_FGPR.
* To use register names with standard convension, please use CAN_MO123_FGPR.
*/
#define	CAN_MOFGPR123	(CAN_MO123_FGPR)

/** \\brief  1F68, Message Object  Interrupt Pointer Register */
#define CAN_MO123_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019F68u)

/** Alias (User Manual Name) for CAN_MO123_IPR.
* To use register names with standard convension, please use CAN_MO123_IPR.
*/
#define	CAN_MOIPR123	(CAN_MO123_IPR)

/** \\brief  1F7C, Message Object  Control Register */
#define CAN_MO123_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019F7Cu)

/** Alias (User Manual Name) for CAN_MO123_STAT.
* To use register names with standard convension, please use CAN_MO123_STAT.
*/
#define	CAN_MOSTAT123	(CAN_MO123_STAT)

/** \\brief  1F8C, Message Object  Acceptance Mask Register */
#define CAN_MO124_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019F8Cu)

/** Alias (User Manual Name) for CAN_MO124_AMR.
* To use register names with standard convension, please use CAN_MO124_AMR.
*/
#define	CAN_MOAMR124	(CAN_MO124_AMR)

/** \\brief  1F98, Message Object  Arbitration Register */
#define CAN_MO124_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019F98u)

/** Alias (User Manual Name) for CAN_MO124_AR.
* To use register names with standard convension, please use CAN_MO124_AR.
*/
#define	CAN_MOAR124	(CAN_MO124_AR)

/** \\brief  1F9C, Message Object  Control Register */
#define CAN_MO124_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019F9Cu)

/** Alias (User Manual Name) for CAN_MO124_CTR.
* To use register names with standard convension, please use CAN_MO124_CTR.
*/
#define	CAN_MOCTR124	(CAN_MO124_CTR)

/** \\brief  1F94, Message Object  Data Register High */
#define CAN_MO124_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019F94u)

/** Alias (User Manual Name) for CAN_MO124_DATAH.
* To use register names with standard convension, please use CAN_MO124_DATAH.
*/
#define	CAN_MODATAH124	(CAN_MO124_DATAH)

/** \\brief  1F90, Message Object  Data Register Low */
#define CAN_MO124_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019F90u)

/** Alias (User Manual Name) for CAN_MO124_DATAL.
* To use register names with standard convension, please use CAN_MO124_DATAL.
*/
#define	CAN_MODATAL124	(CAN_MO124_DATAL)

/** \\brief  1F80, Message Object  Function Control Register */
#define CAN_MO124_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019F80u)

/** Alias (User Manual Name) for CAN_MO124_FCR.
* To use register names with standard convension, please use CAN_MO124_FCR.
*/
#define	CAN_MOFCR124	(CAN_MO124_FCR)

/** \\brief  1F84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO124_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019F84u)

/** Alias (User Manual Name) for CAN_MO124_FGPR.
* To use register names with standard convension, please use CAN_MO124_FGPR.
*/
#define	CAN_MOFGPR124	(CAN_MO124_FGPR)

/** \\brief  1F88, Message Object  Interrupt Pointer Register */
#define CAN_MO124_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019F88u)

/** Alias (User Manual Name) for CAN_MO124_IPR.
* To use register names with standard convension, please use CAN_MO124_IPR.
*/
#define	CAN_MOIPR124	(CAN_MO124_IPR)

/** \\brief  1F9C, Message Object  Control Register */
#define CAN_MO124_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019F9Cu)

/** Alias (User Manual Name) for CAN_MO124_STAT.
* To use register names with standard convension, please use CAN_MO124_STAT.
*/
#define	CAN_MOSTAT124	(CAN_MO124_STAT)

/** \\brief  1FAC, Message Object  Acceptance Mask Register */
#define CAN_MO125_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019FACu)

/** Alias (User Manual Name) for CAN_MO125_AMR.
* To use register names with standard convension, please use CAN_MO125_AMR.
*/
#define	CAN_MOAMR125	(CAN_MO125_AMR)

/** \\brief  1FB8, Message Object  Arbitration Register */
#define CAN_MO125_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019FB8u)

/** Alias (User Manual Name) for CAN_MO125_AR.
* To use register names with standard convension, please use CAN_MO125_AR.
*/
#define	CAN_MOAR125	(CAN_MO125_AR)

/** \\brief  1FBC, Message Object  Control Register */
#define CAN_MO125_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019FBCu)

/** Alias (User Manual Name) for CAN_MO125_CTR.
* To use register names with standard convension, please use CAN_MO125_CTR.
*/
#define	CAN_MOCTR125	(CAN_MO125_CTR)

/** \\brief  1FB4, Message Object  Data Register High */
#define CAN_MO125_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019FB4u)

/** Alias (User Manual Name) for CAN_MO125_DATAH.
* To use register names with standard convension, please use CAN_MO125_DATAH.
*/
#define	CAN_MODATAH125	(CAN_MO125_DATAH)

/** \\brief  1FB0, Message Object  Data Register Low */
#define CAN_MO125_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019FB0u)

/** Alias (User Manual Name) for CAN_MO125_DATAL.
* To use register names with standard convension, please use CAN_MO125_DATAL.
*/
#define	CAN_MODATAL125	(CAN_MO125_DATAL)

/** \\brief  1FA0, Message Object  Function Control Register */
#define CAN_MO125_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019FA0u)

/** Alias (User Manual Name) for CAN_MO125_FCR.
* To use register names with standard convension, please use CAN_MO125_FCR.
*/
#define	CAN_MOFCR125	(CAN_MO125_FCR)

/** \\brief  1FA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO125_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019FA4u)

/** Alias (User Manual Name) for CAN_MO125_FGPR.
* To use register names with standard convension, please use CAN_MO125_FGPR.
*/
#define	CAN_MOFGPR125	(CAN_MO125_FGPR)

/** \\brief  1FA8, Message Object  Interrupt Pointer Register */
#define CAN_MO125_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019FA8u)

/** Alias (User Manual Name) for CAN_MO125_IPR.
* To use register names with standard convension, please use CAN_MO125_IPR.
*/
#define	CAN_MOIPR125	(CAN_MO125_IPR)

/** \\brief  1FBC, Message Object  Control Register */
#define CAN_MO125_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019FBCu)

/** Alias (User Manual Name) for CAN_MO125_STAT.
* To use register names with standard convension, please use CAN_MO125_STAT.
*/
#define	CAN_MOSTAT125	(CAN_MO125_STAT)

/** \\brief  1FCC, Message Object  Acceptance Mask Register */
#define CAN_MO126_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019FCCu)

/** Alias (User Manual Name) for CAN_MO126_AMR.
* To use register names with standard convension, please use CAN_MO126_AMR.
*/
#define	CAN_MOAMR126	(CAN_MO126_AMR)

/** \\brief  1FD8, Message Object  Arbitration Register */
#define CAN_MO126_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019FD8u)

/** Alias (User Manual Name) for CAN_MO126_AR.
* To use register names with standard convension, please use CAN_MO126_AR.
*/
#define	CAN_MOAR126	(CAN_MO126_AR)

/** \\brief  1FDC, Message Object  Control Register */
#define CAN_MO126_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019FDCu)

/** Alias (User Manual Name) for CAN_MO126_CTR.
* To use register names with standard convension, please use CAN_MO126_CTR.
*/
#define	CAN_MOCTR126	(CAN_MO126_CTR)

/** \\brief  1FD4, Message Object  Data Register High */
#define CAN_MO126_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019FD4u)

/** Alias (User Manual Name) for CAN_MO126_DATAH.
* To use register names with standard convension, please use CAN_MO126_DATAH.
*/
#define	CAN_MODATAH126	(CAN_MO126_DATAH)

/** \\brief  1FD0, Message Object  Data Register Low */
#define CAN_MO126_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019FD0u)

/** Alias (User Manual Name) for CAN_MO126_DATAL.
* To use register names with standard convension, please use CAN_MO126_DATAL.
*/
#define	CAN_MODATAL126	(CAN_MO126_DATAL)

/** \\brief  1FC0, Message Object  Function Control Register */
#define CAN_MO126_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019FC0u)

/** Alias (User Manual Name) for CAN_MO126_FCR.
* To use register names with standard convension, please use CAN_MO126_FCR.
*/
#define	CAN_MOFCR126	(CAN_MO126_FCR)

/** \\brief  1FC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO126_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019FC4u)

/** Alias (User Manual Name) for CAN_MO126_FGPR.
* To use register names with standard convension, please use CAN_MO126_FGPR.
*/
#define	CAN_MOFGPR126	(CAN_MO126_FGPR)

/** \\brief  1FC8, Message Object  Interrupt Pointer Register */
#define CAN_MO126_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019FC8u)

/** Alias (User Manual Name) for CAN_MO126_IPR.
* To use register names with standard convension, please use CAN_MO126_IPR.
*/
#define	CAN_MOIPR126	(CAN_MO126_IPR)

/** \\brief  1FDC, Message Object  Control Register */
#define CAN_MO126_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019FDCu)

/** Alias (User Manual Name) for CAN_MO126_STAT.
* To use register names with standard convension, please use CAN_MO126_STAT.
*/
#define	CAN_MOSTAT126	(CAN_MO126_STAT)

/** \\brief  1FEC, Message Object  Acceptance Mask Register */
#define CAN_MO127_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019FECu)

/** Alias (User Manual Name) for CAN_MO127_AMR.
* To use register names with standard convension, please use CAN_MO127_AMR.
*/
#define	CAN_MOAMR127	(CAN_MO127_AMR)

/** \\brief  1FF8, Message Object  Arbitration Register */
#define CAN_MO127_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019FF8u)

/** Alias (User Manual Name) for CAN_MO127_AR.
* To use register names with standard convension, please use CAN_MO127_AR.
*/
#define	CAN_MOAR127	(CAN_MO127_AR)

/** \\brief  1FFC, Message Object  Control Register */
#define CAN_MO127_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019FFCu)

/** Alias (User Manual Name) for CAN_MO127_CTR.
* To use register names with standard convension, please use CAN_MO127_CTR.
*/
#define	CAN_MOCTR127	(CAN_MO127_CTR)

/** \\brief  1FF4, Message Object  Data Register High */
#define CAN_MO127_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019FF4u)

/** Alias (User Manual Name) for CAN_MO127_DATAH.
* To use register names with standard convension, please use CAN_MO127_DATAH.
*/
#define	CAN_MODATAH127	(CAN_MO127_DATAH)

/** \\brief  1FF0, Message Object  Data Register Low */
#define CAN_MO127_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019FF0u)

/** Alias (User Manual Name) for CAN_MO127_DATAL.
* To use register names with standard convension, please use CAN_MO127_DATAL.
*/
#define	CAN_MODATAL127	(CAN_MO127_DATAL)

/** \\brief  1FE0, Message Object  Function Control Register */
#define CAN_MO127_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019FE0u)

/** Alias (User Manual Name) for CAN_MO127_FCR.
* To use register names with standard convension, please use CAN_MO127_FCR.
*/
#define	CAN_MOFCR127	(CAN_MO127_FCR)

/** \\brief  1FE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO127_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019FE4u)

/** Alias (User Manual Name) for CAN_MO127_FGPR.
* To use register names with standard convension, please use CAN_MO127_FGPR.
*/
#define	CAN_MOFGPR127	(CAN_MO127_FGPR)

/** \\brief  1FE8, Message Object  Interrupt Pointer Register */
#define CAN_MO127_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019FE8u)

/** Alias (User Manual Name) for CAN_MO127_IPR.
* To use register names with standard convension, please use CAN_MO127_IPR.
*/
#define	CAN_MOIPR127	(CAN_MO127_IPR)

/** \\brief  1FFC, Message Object  Control Register */
#define CAN_MO127_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019FFCu)

/** Alias (User Manual Name) for CAN_MO127_STAT.
* To use register names with standard convension, please use CAN_MO127_STAT.
*/
#define	CAN_MOSTAT127	(CAN_MO127_STAT)

/** \\brief  200C, Message Object  Acceptance Mask Register */
#define CAN_MO128_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A00Cu)

/** Alias (User Manual Name) for CAN_MO128_AMR.
* To use register names with standard convension, please use CAN_MO128_AMR.
*/
#define	CAN_MOAMR128	(CAN_MO128_AMR)

/** \\brief  2018, Message Object  Arbitration Register */
#define CAN_MO128_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A018u)

/** Alias (User Manual Name) for CAN_MO128_AR.
* To use register names with standard convension, please use CAN_MO128_AR.
*/
#define	CAN_MOAR128	(CAN_MO128_AR)

/** \\brief  201C, Message Object  Control Register */
#define CAN_MO128_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A01Cu)

/** Alias (User Manual Name) for CAN_MO128_CTR.
* To use register names with standard convension, please use CAN_MO128_CTR.
*/
#define	CAN_MOCTR128	(CAN_MO128_CTR)

/** \\brief  2014, Message Object  Data Register High */
#define CAN_MO128_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A014u)

/** Alias (User Manual Name) for CAN_MO128_DATAH.
* To use register names with standard convension, please use CAN_MO128_DATAH.
*/
#define	CAN_MODATAH128	(CAN_MO128_DATAH)

/** \\brief  2010, Message Object  Data Register Low */
#define CAN_MO128_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A010u)

/** Alias (User Manual Name) for CAN_MO128_DATAL.
* To use register names with standard convension, please use CAN_MO128_DATAL.
*/
#define	CAN_MODATAL128	(CAN_MO128_DATAL)

/** \\brief  2000, Message Object  Function Control Register */
#define CAN_MO128_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A000u)

/** Alias (User Manual Name) for CAN_MO128_FCR.
* To use register names with standard convension, please use CAN_MO128_FCR.
*/
#define	CAN_MOFCR128	(CAN_MO128_FCR)

/** \\brief  2004, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO128_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A004u)

/** Alias (User Manual Name) for CAN_MO128_FGPR.
* To use register names with standard convension, please use CAN_MO128_FGPR.
*/
#define	CAN_MOFGPR128	(CAN_MO128_FGPR)

/** \\brief  2008, Message Object  Interrupt Pointer Register */
#define CAN_MO128_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A008u)

/** Alias (User Manual Name) for CAN_MO128_IPR.
* To use register names with standard convension, please use CAN_MO128_IPR.
*/
#define	CAN_MOIPR128	(CAN_MO128_IPR)

/** \\brief  201C, Message Object  Control Register */
#define CAN_MO128_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A01Cu)

/** Alias (User Manual Name) for CAN_MO128_STAT.
* To use register names with standard convension, please use CAN_MO128_STAT.
*/
#define	CAN_MOSTAT128	(CAN_MO128_STAT)

/** \\brief  202C, Message Object  Acceptance Mask Register */
#define CAN_MO129_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A02Cu)

/** Alias (User Manual Name) for CAN_MO129_AMR.
* To use register names with standard convension, please use CAN_MO129_AMR.
*/
#define	CAN_MOAMR129	(CAN_MO129_AMR)

/** \\brief  2038, Message Object  Arbitration Register */
#define CAN_MO129_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A038u)

/** Alias (User Manual Name) for CAN_MO129_AR.
* To use register names with standard convension, please use CAN_MO129_AR.
*/
#define	CAN_MOAR129	(CAN_MO129_AR)

/** \\brief  203C, Message Object  Control Register */
#define CAN_MO129_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A03Cu)

/** Alias (User Manual Name) for CAN_MO129_CTR.
* To use register names with standard convension, please use CAN_MO129_CTR.
*/
#define	CAN_MOCTR129	(CAN_MO129_CTR)

/** \\brief  2034, Message Object  Data Register High */
#define CAN_MO129_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A034u)

/** Alias (User Manual Name) for CAN_MO129_DATAH.
* To use register names with standard convension, please use CAN_MO129_DATAH.
*/
#define	CAN_MODATAH129	(CAN_MO129_DATAH)

/** \\brief  2030, Message Object  Data Register Low */
#define CAN_MO129_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A030u)

/** Alias (User Manual Name) for CAN_MO129_DATAL.
* To use register names with standard convension, please use CAN_MO129_DATAL.
*/
#define	CAN_MODATAL129	(CAN_MO129_DATAL)

/** \\brief  2020, Message Object  Function Control Register */
#define CAN_MO129_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A020u)

/** Alias (User Manual Name) for CAN_MO129_FCR.
* To use register names with standard convension, please use CAN_MO129_FCR.
*/
#define	CAN_MOFCR129	(CAN_MO129_FCR)

/** \\brief  2024, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO129_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A024u)

/** Alias (User Manual Name) for CAN_MO129_FGPR.
* To use register names with standard convension, please use CAN_MO129_FGPR.
*/
#define	CAN_MOFGPR129	(CAN_MO129_FGPR)

/** \\brief  2028, Message Object  Interrupt Pointer Register */
#define CAN_MO129_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A028u)

/** Alias (User Manual Name) for CAN_MO129_IPR.
* To use register names with standard convension, please use CAN_MO129_IPR.
*/
#define	CAN_MOIPR129	(CAN_MO129_IPR)

/** \\brief  203C, Message Object  Control Register */
#define CAN_MO129_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A03Cu)

/** Alias (User Manual Name) for CAN_MO129_STAT.
* To use register names with standard convension, please use CAN_MO129_STAT.
*/
#define	CAN_MOSTAT129	(CAN_MO129_STAT)

/** \\brief  118C, Message Object  Acceptance Mask Register */
#define CAN_MO12_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001918Cu)

/** Alias (User Manual Name) for CAN_MO12_AMR.
* To use register names with standard convension, please use CAN_MO12_AMR.
*/
#define	CAN_MOAMR12	(CAN_MO12_AMR)

/** \\brief  1198, Message Object  Arbitration Register */
#define CAN_MO12_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019198u)

/** Alias (User Manual Name) for CAN_MO12_AR.
* To use register names with standard convension, please use CAN_MO12_AR.
*/
#define	CAN_MOAR12	(CAN_MO12_AR)

/** \\brief  119C, Message Object  Control Register */
#define CAN_MO12_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001919Cu)

/** Alias (User Manual Name) for CAN_MO12_CTR.
* To use register names with standard convension, please use CAN_MO12_CTR.
*/
#define	CAN_MOCTR12	(CAN_MO12_CTR)

/** \\brief  1194, Message Object  Data Register High */
#define CAN_MO12_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019194u)

/** Alias (User Manual Name) for CAN_MO12_DATAH.
* To use register names with standard convension, please use CAN_MO12_DATAH.
*/
#define	CAN_MODATAH12	(CAN_MO12_DATAH)

/** \\brief  1190, Message Object  Data Register Low */
#define CAN_MO12_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019190u)

/** Alias (User Manual Name) for CAN_MO12_DATAL.
* To use register names with standard convension, please use CAN_MO12_DATAL.
*/
#define	CAN_MODATAL12	(CAN_MO12_DATAL)

/** \\brief  1180, Message Object  Function Control Register */
#define CAN_MO12_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019180u)

/** Alias (User Manual Name) for CAN_MO12_FCR.
* To use register names with standard convension, please use CAN_MO12_FCR.
*/
#define	CAN_MOFCR12	(CAN_MO12_FCR)

/** \\brief  1184, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO12_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019184u)

/** Alias (User Manual Name) for CAN_MO12_FGPR.
* To use register names with standard convension, please use CAN_MO12_FGPR.
*/
#define	CAN_MOFGPR12	(CAN_MO12_FGPR)

/** \\brief  1188, Message Object  Interrupt Pointer Register */
#define CAN_MO12_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019188u)

/** Alias (User Manual Name) for CAN_MO12_IPR.
* To use register names with standard convension, please use CAN_MO12_IPR.
*/
#define	CAN_MOIPR12	(CAN_MO12_IPR)

/** \\brief  119C, Message Object  Control Register */
#define CAN_MO12_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001919Cu)

/** Alias (User Manual Name) for CAN_MO12_STAT.
* To use register names with standard convension, please use CAN_MO12_STAT.
*/
#define	CAN_MOSTAT12	(CAN_MO12_STAT)

/** \\brief  204C, Message Object  Acceptance Mask Register */
#define CAN_MO130_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A04Cu)

/** Alias (User Manual Name) for CAN_MO130_AMR.
* To use register names with standard convension, please use CAN_MO130_AMR.
*/
#define	CAN_MOAMR130	(CAN_MO130_AMR)

/** \\brief  2058, Message Object  Arbitration Register */
#define CAN_MO130_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A058u)

/** Alias (User Manual Name) for CAN_MO130_AR.
* To use register names with standard convension, please use CAN_MO130_AR.
*/
#define	CAN_MOAR130	(CAN_MO130_AR)

/** \\brief  205C, Message Object  Control Register */
#define CAN_MO130_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A05Cu)

/** Alias (User Manual Name) for CAN_MO130_CTR.
* To use register names with standard convension, please use CAN_MO130_CTR.
*/
#define	CAN_MOCTR130	(CAN_MO130_CTR)

/** \\brief  2054, Message Object  Data Register High */
#define CAN_MO130_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A054u)

/** Alias (User Manual Name) for CAN_MO130_DATAH.
* To use register names with standard convension, please use CAN_MO130_DATAH.
*/
#define	CAN_MODATAH130	(CAN_MO130_DATAH)

/** \\brief  2050, Message Object  Data Register Low */
#define CAN_MO130_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A050u)

/** Alias (User Manual Name) for CAN_MO130_DATAL.
* To use register names with standard convension, please use CAN_MO130_DATAL.
*/
#define	CAN_MODATAL130	(CAN_MO130_DATAL)

/** \\brief  2040, Message Object  Function Control Register */
#define CAN_MO130_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A040u)

/** Alias (User Manual Name) for CAN_MO130_FCR.
* To use register names with standard convension, please use CAN_MO130_FCR.
*/
#define	CAN_MOFCR130	(CAN_MO130_FCR)

/** \\brief  2044, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO130_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A044u)

/** Alias (User Manual Name) for CAN_MO130_FGPR.
* To use register names with standard convension, please use CAN_MO130_FGPR.
*/
#define	CAN_MOFGPR130	(CAN_MO130_FGPR)

/** \\brief  2048, Message Object  Interrupt Pointer Register */
#define CAN_MO130_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A048u)

/** Alias (User Manual Name) for CAN_MO130_IPR.
* To use register names with standard convension, please use CAN_MO130_IPR.
*/
#define	CAN_MOIPR130	(CAN_MO130_IPR)

/** \\brief  205C, Message Object  Control Register */
#define CAN_MO130_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A05Cu)

/** Alias (User Manual Name) for CAN_MO130_STAT.
* To use register names with standard convension, please use CAN_MO130_STAT.
*/
#define	CAN_MOSTAT130	(CAN_MO130_STAT)

/** \\brief  206C, Message Object  Acceptance Mask Register */
#define CAN_MO131_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A06Cu)

/** Alias (User Manual Name) for CAN_MO131_AMR.
* To use register names with standard convension, please use CAN_MO131_AMR.
*/
#define	CAN_MOAMR131	(CAN_MO131_AMR)

/** \\brief  2078, Message Object  Arbitration Register */
#define CAN_MO131_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A078u)

/** Alias (User Manual Name) for CAN_MO131_AR.
* To use register names with standard convension, please use CAN_MO131_AR.
*/
#define	CAN_MOAR131	(CAN_MO131_AR)

/** \\brief  207C, Message Object  Control Register */
#define CAN_MO131_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A07Cu)

/** Alias (User Manual Name) for CAN_MO131_CTR.
* To use register names with standard convension, please use CAN_MO131_CTR.
*/
#define	CAN_MOCTR131	(CAN_MO131_CTR)

/** \\brief  2074, Message Object  Data Register High */
#define CAN_MO131_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A074u)

/** Alias (User Manual Name) for CAN_MO131_DATAH.
* To use register names with standard convension, please use CAN_MO131_DATAH.
*/
#define	CAN_MODATAH131	(CAN_MO131_DATAH)

/** \\brief  2070, Message Object  Data Register Low */
#define CAN_MO131_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A070u)

/** Alias (User Manual Name) for CAN_MO131_DATAL.
* To use register names with standard convension, please use CAN_MO131_DATAL.
*/
#define	CAN_MODATAL131	(CAN_MO131_DATAL)

/** \\brief  2060, Message Object  Function Control Register */
#define CAN_MO131_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A060u)

/** Alias (User Manual Name) for CAN_MO131_FCR.
* To use register names with standard convension, please use CAN_MO131_FCR.
*/
#define	CAN_MOFCR131	(CAN_MO131_FCR)

/** \\brief  2064, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO131_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A064u)

/** Alias (User Manual Name) for CAN_MO131_FGPR.
* To use register names with standard convension, please use CAN_MO131_FGPR.
*/
#define	CAN_MOFGPR131	(CAN_MO131_FGPR)

/** \\brief  2068, Message Object  Interrupt Pointer Register */
#define CAN_MO131_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A068u)

/** Alias (User Manual Name) for CAN_MO131_IPR.
* To use register names with standard convension, please use CAN_MO131_IPR.
*/
#define	CAN_MOIPR131	(CAN_MO131_IPR)

/** \\brief  207C, Message Object  Control Register */
#define CAN_MO131_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A07Cu)

/** Alias (User Manual Name) for CAN_MO131_STAT.
* To use register names with standard convension, please use CAN_MO131_STAT.
*/
#define	CAN_MOSTAT131	(CAN_MO131_STAT)

/** \\brief  208C, Message Object  Acceptance Mask Register */
#define CAN_MO132_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A08Cu)

/** Alias (User Manual Name) for CAN_MO132_AMR.
* To use register names with standard convension, please use CAN_MO132_AMR.
*/
#define	CAN_MOAMR132	(CAN_MO132_AMR)

/** \\brief  2098, Message Object  Arbitration Register */
#define CAN_MO132_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A098u)

/** Alias (User Manual Name) for CAN_MO132_AR.
* To use register names with standard convension, please use CAN_MO132_AR.
*/
#define	CAN_MOAR132	(CAN_MO132_AR)

/** \\brief  209C, Message Object  Control Register */
#define CAN_MO132_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A09Cu)

/** Alias (User Manual Name) for CAN_MO132_CTR.
* To use register names with standard convension, please use CAN_MO132_CTR.
*/
#define	CAN_MOCTR132	(CAN_MO132_CTR)

/** \\brief  2094, Message Object  Data Register High */
#define CAN_MO132_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A094u)

/** Alias (User Manual Name) for CAN_MO132_DATAH.
* To use register names with standard convension, please use CAN_MO132_DATAH.
*/
#define	CAN_MODATAH132	(CAN_MO132_DATAH)

/** \\brief  2090, Message Object  Data Register Low */
#define CAN_MO132_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A090u)

/** Alias (User Manual Name) for CAN_MO132_DATAL.
* To use register names with standard convension, please use CAN_MO132_DATAL.
*/
#define	CAN_MODATAL132	(CAN_MO132_DATAL)

/** \\brief  2080, Message Object  Function Control Register */
#define CAN_MO132_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A080u)

/** Alias (User Manual Name) for CAN_MO132_FCR.
* To use register names with standard convension, please use CAN_MO132_FCR.
*/
#define	CAN_MOFCR132	(CAN_MO132_FCR)

/** \\brief  2084, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO132_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A084u)

/** Alias (User Manual Name) for CAN_MO132_FGPR.
* To use register names with standard convension, please use CAN_MO132_FGPR.
*/
#define	CAN_MOFGPR132	(CAN_MO132_FGPR)

/** \\brief  2088, Message Object  Interrupt Pointer Register */
#define CAN_MO132_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A088u)

/** Alias (User Manual Name) for CAN_MO132_IPR.
* To use register names with standard convension, please use CAN_MO132_IPR.
*/
#define	CAN_MOIPR132	(CAN_MO132_IPR)

/** \\brief  209C, Message Object  Control Register */
#define CAN_MO132_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A09Cu)

/** Alias (User Manual Name) for CAN_MO132_STAT.
* To use register names with standard convension, please use CAN_MO132_STAT.
*/
#define	CAN_MOSTAT132	(CAN_MO132_STAT)

/** \\brief  20AC, Message Object  Acceptance Mask Register */
#define CAN_MO133_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A0ACu)

/** Alias (User Manual Name) for CAN_MO133_AMR.
* To use register names with standard convension, please use CAN_MO133_AMR.
*/
#define	CAN_MOAMR133	(CAN_MO133_AMR)

/** \\brief  20B8, Message Object  Arbitration Register */
#define CAN_MO133_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A0B8u)

/** Alias (User Manual Name) for CAN_MO133_AR.
* To use register names with standard convension, please use CAN_MO133_AR.
*/
#define	CAN_MOAR133	(CAN_MO133_AR)

/** \\brief  20BC, Message Object  Control Register */
#define CAN_MO133_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A0BCu)

/** Alias (User Manual Name) for CAN_MO133_CTR.
* To use register names with standard convension, please use CAN_MO133_CTR.
*/
#define	CAN_MOCTR133	(CAN_MO133_CTR)

/** \\brief  20B4, Message Object  Data Register High */
#define CAN_MO133_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A0B4u)

/** Alias (User Manual Name) for CAN_MO133_DATAH.
* To use register names with standard convension, please use CAN_MO133_DATAH.
*/
#define	CAN_MODATAH133	(CAN_MO133_DATAH)

/** \\brief  20B0, Message Object  Data Register Low */
#define CAN_MO133_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A0B0u)

/** Alias (User Manual Name) for CAN_MO133_DATAL.
* To use register names with standard convension, please use CAN_MO133_DATAL.
*/
#define	CAN_MODATAL133	(CAN_MO133_DATAL)

/** \\brief  20A0, Message Object  Function Control Register */
#define CAN_MO133_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A0A0u)

/** Alias (User Manual Name) for CAN_MO133_FCR.
* To use register names with standard convension, please use CAN_MO133_FCR.
*/
#define	CAN_MOFCR133	(CAN_MO133_FCR)

/** \\brief  20A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO133_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A0A4u)

/** Alias (User Manual Name) for CAN_MO133_FGPR.
* To use register names with standard convension, please use CAN_MO133_FGPR.
*/
#define	CAN_MOFGPR133	(CAN_MO133_FGPR)

/** \\brief  20A8, Message Object  Interrupt Pointer Register */
#define CAN_MO133_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A0A8u)

/** Alias (User Manual Name) for CAN_MO133_IPR.
* To use register names with standard convension, please use CAN_MO133_IPR.
*/
#define	CAN_MOIPR133	(CAN_MO133_IPR)

/** \\brief  20BC, Message Object  Control Register */
#define CAN_MO133_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A0BCu)

/** Alias (User Manual Name) for CAN_MO133_STAT.
* To use register names with standard convension, please use CAN_MO133_STAT.
*/
#define	CAN_MOSTAT133	(CAN_MO133_STAT)

/** \\brief  20CC, Message Object  Acceptance Mask Register */
#define CAN_MO134_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A0CCu)

/** Alias (User Manual Name) for CAN_MO134_AMR.
* To use register names with standard convension, please use CAN_MO134_AMR.
*/
#define	CAN_MOAMR134	(CAN_MO134_AMR)

/** \\brief  20D8, Message Object  Arbitration Register */
#define CAN_MO134_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A0D8u)

/** Alias (User Manual Name) for CAN_MO134_AR.
* To use register names with standard convension, please use CAN_MO134_AR.
*/
#define	CAN_MOAR134	(CAN_MO134_AR)

/** \\brief  20DC, Message Object  Control Register */
#define CAN_MO134_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A0DCu)

/** Alias (User Manual Name) for CAN_MO134_CTR.
* To use register names with standard convension, please use CAN_MO134_CTR.
*/
#define	CAN_MOCTR134	(CAN_MO134_CTR)

/** \\brief  20D4, Message Object  Data Register High */
#define CAN_MO134_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A0D4u)

/** Alias (User Manual Name) for CAN_MO134_DATAH.
* To use register names with standard convension, please use CAN_MO134_DATAH.
*/
#define	CAN_MODATAH134	(CAN_MO134_DATAH)

/** \\brief  20D0, Message Object  Data Register Low */
#define CAN_MO134_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A0D0u)

/** Alias (User Manual Name) for CAN_MO134_DATAL.
* To use register names with standard convension, please use CAN_MO134_DATAL.
*/
#define	CAN_MODATAL134	(CAN_MO134_DATAL)

/** \\brief  20C0, Message Object  Function Control Register */
#define CAN_MO134_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A0C0u)

/** Alias (User Manual Name) for CAN_MO134_FCR.
* To use register names with standard convension, please use CAN_MO134_FCR.
*/
#define	CAN_MOFCR134	(CAN_MO134_FCR)

/** \\brief  20C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO134_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A0C4u)

/** Alias (User Manual Name) for CAN_MO134_FGPR.
* To use register names with standard convension, please use CAN_MO134_FGPR.
*/
#define	CAN_MOFGPR134	(CAN_MO134_FGPR)

/** \\brief  20C8, Message Object  Interrupt Pointer Register */
#define CAN_MO134_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A0C8u)

/** Alias (User Manual Name) for CAN_MO134_IPR.
* To use register names with standard convension, please use CAN_MO134_IPR.
*/
#define	CAN_MOIPR134	(CAN_MO134_IPR)

/** \\brief  20DC, Message Object  Control Register */
#define CAN_MO134_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A0DCu)

/** Alias (User Manual Name) for CAN_MO134_STAT.
* To use register names with standard convension, please use CAN_MO134_STAT.
*/
#define	CAN_MOSTAT134	(CAN_MO134_STAT)

/** \\brief  20EC, Message Object  Acceptance Mask Register */
#define CAN_MO135_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A0ECu)

/** Alias (User Manual Name) for CAN_MO135_AMR.
* To use register names with standard convension, please use CAN_MO135_AMR.
*/
#define	CAN_MOAMR135	(CAN_MO135_AMR)

/** \\brief  20F8, Message Object  Arbitration Register */
#define CAN_MO135_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A0F8u)

/** Alias (User Manual Name) for CAN_MO135_AR.
* To use register names with standard convension, please use CAN_MO135_AR.
*/
#define	CAN_MOAR135	(CAN_MO135_AR)

/** \\brief  20FC, Message Object  Control Register */
#define CAN_MO135_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A0FCu)

/** Alias (User Manual Name) for CAN_MO135_CTR.
* To use register names with standard convension, please use CAN_MO135_CTR.
*/
#define	CAN_MOCTR135	(CAN_MO135_CTR)

/** \\brief  20F4, Message Object  Data Register High */
#define CAN_MO135_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A0F4u)

/** Alias (User Manual Name) for CAN_MO135_DATAH.
* To use register names with standard convension, please use CAN_MO135_DATAH.
*/
#define	CAN_MODATAH135	(CAN_MO135_DATAH)

/** \\brief  20F0, Message Object  Data Register Low */
#define CAN_MO135_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A0F0u)

/** Alias (User Manual Name) for CAN_MO135_DATAL.
* To use register names with standard convension, please use CAN_MO135_DATAL.
*/
#define	CAN_MODATAL135	(CAN_MO135_DATAL)

/** \\brief  20E0, Message Object  Function Control Register */
#define CAN_MO135_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A0E0u)

/** Alias (User Manual Name) for CAN_MO135_FCR.
* To use register names with standard convension, please use CAN_MO135_FCR.
*/
#define	CAN_MOFCR135	(CAN_MO135_FCR)

/** \\brief  20E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO135_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A0E4u)

/** Alias (User Manual Name) for CAN_MO135_FGPR.
* To use register names with standard convension, please use CAN_MO135_FGPR.
*/
#define	CAN_MOFGPR135	(CAN_MO135_FGPR)

/** \\brief  20E8, Message Object  Interrupt Pointer Register */
#define CAN_MO135_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A0E8u)

/** Alias (User Manual Name) for CAN_MO135_IPR.
* To use register names with standard convension, please use CAN_MO135_IPR.
*/
#define	CAN_MOIPR135	(CAN_MO135_IPR)

/** \\brief  20FC, Message Object  Control Register */
#define CAN_MO135_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A0FCu)

/** Alias (User Manual Name) for CAN_MO135_STAT.
* To use register names with standard convension, please use CAN_MO135_STAT.
*/
#define	CAN_MOSTAT135	(CAN_MO135_STAT)

/** \\brief  210C, Message Object  Acceptance Mask Register */
#define CAN_MO136_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A10Cu)

/** Alias (User Manual Name) for CAN_MO136_AMR.
* To use register names with standard convension, please use CAN_MO136_AMR.
*/
#define	CAN_MOAMR136	(CAN_MO136_AMR)

/** \\brief  2118, Message Object  Arbitration Register */
#define CAN_MO136_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A118u)

/** Alias (User Manual Name) for CAN_MO136_AR.
* To use register names with standard convension, please use CAN_MO136_AR.
*/
#define	CAN_MOAR136	(CAN_MO136_AR)

/** \\brief  211C, Message Object  Control Register */
#define CAN_MO136_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A11Cu)

/** Alias (User Manual Name) for CAN_MO136_CTR.
* To use register names with standard convension, please use CAN_MO136_CTR.
*/
#define	CAN_MOCTR136	(CAN_MO136_CTR)

/** \\brief  2114, Message Object  Data Register High */
#define CAN_MO136_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A114u)

/** Alias (User Manual Name) for CAN_MO136_DATAH.
* To use register names with standard convension, please use CAN_MO136_DATAH.
*/
#define	CAN_MODATAH136	(CAN_MO136_DATAH)

/** \\brief  2110, Message Object  Data Register Low */
#define CAN_MO136_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A110u)

/** Alias (User Manual Name) for CAN_MO136_DATAL.
* To use register names with standard convension, please use CAN_MO136_DATAL.
*/
#define	CAN_MODATAL136	(CAN_MO136_DATAL)

/** \\brief  2100, Message Object  Function Control Register */
#define CAN_MO136_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A100u)

/** Alias (User Manual Name) for CAN_MO136_FCR.
* To use register names with standard convension, please use CAN_MO136_FCR.
*/
#define	CAN_MOFCR136	(CAN_MO136_FCR)

/** \\brief  2104, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO136_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A104u)

/** Alias (User Manual Name) for CAN_MO136_FGPR.
* To use register names with standard convension, please use CAN_MO136_FGPR.
*/
#define	CAN_MOFGPR136	(CAN_MO136_FGPR)

/** \\brief  2108, Message Object  Interrupt Pointer Register */
#define CAN_MO136_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A108u)

/** Alias (User Manual Name) for CAN_MO136_IPR.
* To use register names with standard convension, please use CAN_MO136_IPR.
*/
#define	CAN_MOIPR136	(CAN_MO136_IPR)

/** \\brief  211C, Message Object  Control Register */
#define CAN_MO136_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A11Cu)

/** Alias (User Manual Name) for CAN_MO136_STAT.
* To use register names with standard convension, please use CAN_MO136_STAT.
*/
#define	CAN_MOSTAT136	(CAN_MO136_STAT)

/** \\brief  212C, Message Object  Acceptance Mask Register */
#define CAN_MO137_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A12Cu)

/** Alias (User Manual Name) for CAN_MO137_AMR.
* To use register names with standard convension, please use CAN_MO137_AMR.
*/
#define	CAN_MOAMR137	(CAN_MO137_AMR)

/** \\brief  2138, Message Object  Arbitration Register */
#define CAN_MO137_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A138u)

/** Alias (User Manual Name) for CAN_MO137_AR.
* To use register names with standard convension, please use CAN_MO137_AR.
*/
#define	CAN_MOAR137	(CAN_MO137_AR)

/** \\brief  213C, Message Object  Control Register */
#define CAN_MO137_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A13Cu)

/** Alias (User Manual Name) for CAN_MO137_CTR.
* To use register names with standard convension, please use CAN_MO137_CTR.
*/
#define	CAN_MOCTR137	(CAN_MO137_CTR)

/** \\brief  2134, Message Object  Data Register High */
#define CAN_MO137_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A134u)

/** Alias (User Manual Name) for CAN_MO137_DATAH.
* To use register names with standard convension, please use CAN_MO137_DATAH.
*/
#define	CAN_MODATAH137	(CAN_MO137_DATAH)

/** \\brief  2130, Message Object  Data Register Low */
#define CAN_MO137_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A130u)

/** Alias (User Manual Name) for CAN_MO137_DATAL.
* To use register names with standard convension, please use CAN_MO137_DATAL.
*/
#define	CAN_MODATAL137	(CAN_MO137_DATAL)

/** \\brief  2120, Message Object  Function Control Register */
#define CAN_MO137_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A120u)

/** Alias (User Manual Name) for CAN_MO137_FCR.
* To use register names with standard convension, please use CAN_MO137_FCR.
*/
#define	CAN_MOFCR137	(CAN_MO137_FCR)

/** \\brief  2124, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO137_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A124u)

/** Alias (User Manual Name) for CAN_MO137_FGPR.
* To use register names with standard convension, please use CAN_MO137_FGPR.
*/
#define	CAN_MOFGPR137	(CAN_MO137_FGPR)

/** \\brief  2128, Message Object  Interrupt Pointer Register */
#define CAN_MO137_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A128u)

/** Alias (User Manual Name) for CAN_MO137_IPR.
* To use register names with standard convension, please use CAN_MO137_IPR.
*/
#define	CAN_MOIPR137	(CAN_MO137_IPR)

/** \\brief  213C, Message Object  Control Register */
#define CAN_MO137_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A13Cu)

/** Alias (User Manual Name) for CAN_MO137_STAT.
* To use register names with standard convension, please use CAN_MO137_STAT.
*/
#define	CAN_MOSTAT137	(CAN_MO137_STAT)

/** \\brief  214C, Message Object  Acceptance Mask Register */
#define CAN_MO138_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A14Cu)

/** Alias (User Manual Name) for CAN_MO138_AMR.
* To use register names with standard convension, please use CAN_MO138_AMR.
*/
#define	CAN_MOAMR138	(CAN_MO138_AMR)

/** \\brief  2158, Message Object  Arbitration Register */
#define CAN_MO138_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A158u)

/** Alias (User Manual Name) for CAN_MO138_AR.
* To use register names with standard convension, please use CAN_MO138_AR.
*/
#define	CAN_MOAR138	(CAN_MO138_AR)

/** \\brief  215C, Message Object  Control Register */
#define CAN_MO138_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A15Cu)

/** Alias (User Manual Name) for CAN_MO138_CTR.
* To use register names with standard convension, please use CAN_MO138_CTR.
*/
#define	CAN_MOCTR138	(CAN_MO138_CTR)

/** \\brief  2154, Message Object  Data Register High */
#define CAN_MO138_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A154u)

/** Alias (User Manual Name) for CAN_MO138_DATAH.
* To use register names with standard convension, please use CAN_MO138_DATAH.
*/
#define	CAN_MODATAH138	(CAN_MO138_DATAH)

/** \\brief  2150, Message Object  Data Register Low */
#define CAN_MO138_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A150u)

/** Alias (User Manual Name) for CAN_MO138_DATAL.
* To use register names with standard convension, please use CAN_MO138_DATAL.
*/
#define	CAN_MODATAL138	(CAN_MO138_DATAL)

/** \\brief  2140, Message Object  Function Control Register */
#define CAN_MO138_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A140u)

/** Alias (User Manual Name) for CAN_MO138_FCR.
* To use register names with standard convension, please use CAN_MO138_FCR.
*/
#define	CAN_MOFCR138	(CAN_MO138_FCR)

/** \\brief  2144, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO138_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A144u)

/** Alias (User Manual Name) for CAN_MO138_FGPR.
* To use register names with standard convension, please use CAN_MO138_FGPR.
*/
#define	CAN_MOFGPR138	(CAN_MO138_FGPR)

/** \\brief  2148, Message Object  Interrupt Pointer Register */
#define CAN_MO138_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A148u)

/** Alias (User Manual Name) for CAN_MO138_IPR.
* To use register names with standard convension, please use CAN_MO138_IPR.
*/
#define	CAN_MOIPR138	(CAN_MO138_IPR)

/** \\brief  215C, Message Object  Control Register */
#define CAN_MO138_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A15Cu)

/** Alias (User Manual Name) for CAN_MO138_STAT.
* To use register names with standard convension, please use CAN_MO138_STAT.
*/
#define	CAN_MOSTAT138	(CAN_MO138_STAT)

/** \\brief  216C, Message Object  Acceptance Mask Register */
#define CAN_MO139_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A16Cu)

/** Alias (User Manual Name) for CAN_MO139_AMR.
* To use register names with standard convension, please use CAN_MO139_AMR.
*/
#define	CAN_MOAMR139	(CAN_MO139_AMR)

/** \\brief  2178, Message Object  Arbitration Register */
#define CAN_MO139_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A178u)

/** Alias (User Manual Name) for CAN_MO139_AR.
* To use register names with standard convension, please use CAN_MO139_AR.
*/
#define	CAN_MOAR139	(CAN_MO139_AR)

/** \\brief  217C, Message Object  Control Register */
#define CAN_MO139_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A17Cu)

/** Alias (User Manual Name) for CAN_MO139_CTR.
* To use register names with standard convension, please use CAN_MO139_CTR.
*/
#define	CAN_MOCTR139	(CAN_MO139_CTR)

/** \\brief  2174, Message Object  Data Register High */
#define CAN_MO139_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A174u)

/** Alias (User Manual Name) for CAN_MO139_DATAH.
* To use register names with standard convension, please use CAN_MO139_DATAH.
*/
#define	CAN_MODATAH139	(CAN_MO139_DATAH)

/** \\brief  2170, Message Object  Data Register Low */
#define CAN_MO139_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A170u)

/** Alias (User Manual Name) for CAN_MO139_DATAL.
* To use register names with standard convension, please use CAN_MO139_DATAL.
*/
#define	CAN_MODATAL139	(CAN_MO139_DATAL)

/** \\brief  2160, Message Object  Function Control Register */
#define CAN_MO139_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A160u)

/** Alias (User Manual Name) for CAN_MO139_FCR.
* To use register names with standard convension, please use CAN_MO139_FCR.
*/
#define	CAN_MOFCR139	(CAN_MO139_FCR)

/** \\brief  2164, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO139_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A164u)

/** Alias (User Manual Name) for CAN_MO139_FGPR.
* To use register names with standard convension, please use CAN_MO139_FGPR.
*/
#define	CAN_MOFGPR139	(CAN_MO139_FGPR)

/** \\brief  2168, Message Object  Interrupt Pointer Register */
#define CAN_MO139_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A168u)

/** Alias (User Manual Name) for CAN_MO139_IPR.
* To use register names with standard convension, please use CAN_MO139_IPR.
*/
#define	CAN_MOIPR139	(CAN_MO139_IPR)

/** \\brief  217C, Message Object  Control Register */
#define CAN_MO139_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A17Cu)

/** Alias (User Manual Name) for CAN_MO139_STAT.
* To use register names with standard convension, please use CAN_MO139_STAT.
*/
#define	CAN_MOSTAT139	(CAN_MO139_STAT)

/** \\brief  11AC, Message Object  Acceptance Mask Register */
#define CAN_MO13_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00191ACu)

/** Alias (User Manual Name) for CAN_MO13_AMR.
* To use register names with standard convension, please use CAN_MO13_AMR.
*/
#define	CAN_MOAMR13	(CAN_MO13_AMR)

/** \\brief  11B8, Message Object  Arbitration Register */
#define CAN_MO13_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00191B8u)

/** Alias (User Manual Name) for CAN_MO13_AR.
* To use register names with standard convension, please use CAN_MO13_AR.
*/
#define	CAN_MOAR13	(CAN_MO13_AR)

/** \\brief  11BC, Message Object  Control Register */
#define CAN_MO13_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00191BCu)

/** Alias (User Manual Name) for CAN_MO13_CTR.
* To use register names with standard convension, please use CAN_MO13_CTR.
*/
#define	CAN_MOCTR13	(CAN_MO13_CTR)

/** \\brief  11B4, Message Object  Data Register High */
#define CAN_MO13_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00191B4u)

/** Alias (User Manual Name) for CAN_MO13_DATAH.
* To use register names with standard convension, please use CAN_MO13_DATAH.
*/
#define	CAN_MODATAH13	(CAN_MO13_DATAH)

/** \\brief  11B0, Message Object  Data Register Low */
#define CAN_MO13_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00191B0u)

/** Alias (User Manual Name) for CAN_MO13_DATAL.
* To use register names with standard convension, please use CAN_MO13_DATAL.
*/
#define	CAN_MODATAL13	(CAN_MO13_DATAL)

/** \\brief  11A0, Message Object  Function Control Register */
#define CAN_MO13_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00191A0u)

/** Alias (User Manual Name) for CAN_MO13_FCR.
* To use register names with standard convension, please use CAN_MO13_FCR.
*/
#define	CAN_MOFCR13	(CAN_MO13_FCR)

/** \\brief  11A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO13_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00191A4u)

/** Alias (User Manual Name) for CAN_MO13_FGPR.
* To use register names with standard convension, please use CAN_MO13_FGPR.
*/
#define	CAN_MOFGPR13	(CAN_MO13_FGPR)

/** \\brief  11A8, Message Object  Interrupt Pointer Register */
#define CAN_MO13_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00191A8u)

/** Alias (User Manual Name) for CAN_MO13_IPR.
* To use register names with standard convension, please use CAN_MO13_IPR.
*/
#define	CAN_MOIPR13	(CAN_MO13_IPR)

/** \\brief  11BC, Message Object  Control Register */
#define CAN_MO13_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00191BCu)

/** Alias (User Manual Name) for CAN_MO13_STAT.
* To use register names with standard convension, please use CAN_MO13_STAT.
*/
#define	CAN_MOSTAT13	(CAN_MO13_STAT)

/** \\brief  218C, Message Object  Acceptance Mask Register */
#define CAN_MO140_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A18Cu)

/** Alias (User Manual Name) for CAN_MO140_AMR.
* To use register names with standard convension, please use CAN_MO140_AMR.
*/
#define	CAN_MOAMR140	(CAN_MO140_AMR)

/** \\brief  2198, Message Object  Arbitration Register */
#define CAN_MO140_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A198u)

/** Alias (User Manual Name) for CAN_MO140_AR.
* To use register names with standard convension, please use CAN_MO140_AR.
*/
#define	CAN_MOAR140	(CAN_MO140_AR)

/** \\brief  219C, Message Object  Control Register */
#define CAN_MO140_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A19Cu)

/** Alias (User Manual Name) for CAN_MO140_CTR.
* To use register names with standard convension, please use CAN_MO140_CTR.
*/
#define	CAN_MOCTR140	(CAN_MO140_CTR)

/** \\brief  2194, Message Object  Data Register High */
#define CAN_MO140_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A194u)

/** Alias (User Manual Name) for CAN_MO140_DATAH.
* To use register names with standard convension, please use CAN_MO140_DATAH.
*/
#define	CAN_MODATAH140	(CAN_MO140_DATAH)

/** \\brief  2190, Message Object  Data Register Low */
#define CAN_MO140_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A190u)

/** Alias (User Manual Name) for CAN_MO140_DATAL.
* To use register names with standard convension, please use CAN_MO140_DATAL.
*/
#define	CAN_MODATAL140	(CAN_MO140_DATAL)

/** \\brief  2180, Message Object  Function Control Register */
#define CAN_MO140_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A180u)

/** Alias (User Manual Name) for CAN_MO140_FCR.
* To use register names with standard convension, please use CAN_MO140_FCR.
*/
#define	CAN_MOFCR140	(CAN_MO140_FCR)

/** \\brief  2184, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO140_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A184u)

/** Alias (User Manual Name) for CAN_MO140_FGPR.
* To use register names with standard convension, please use CAN_MO140_FGPR.
*/
#define	CAN_MOFGPR140	(CAN_MO140_FGPR)

/** \\brief  2188, Message Object  Interrupt Pointer Register */
#define CAN_MO140_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A188u)

/** Alias (User Manual Name) for CAN_MO140_IPR.
* To use register names with standard convension, please use CAN_MO140_IPR.
*/
#define	CAN_MOIPR140	(CAN_MO140_IPR)

/** \\brief  219C, Message Object  Control Register */
#define CAN_MO140_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A19Cu)

/** Alias (User Manual Name) for CAN_MO140_STAT.
* To use register names with standard convension, please use CAN_MO140_STAT.
*/
#define	CAN_MOSTAT140	(CAN_MO140_STAT)

/** \\brief  21AC, Message Object  Acceptance Mask Register */
#define CAN_MO141_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A1ACu)

/** Alias (User Manual Name) for CAN_MO141_AMR.
* To use register names with standard convension, please use CAN_MO141_AMR.
*/
#define	CAN_MOAMR141	(CAN_MO141_AMR)

/** \\brief  21B8, Message Object  Arbitration Register */
#define CAN_MO141_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A1B8u)

/** Alias (User Manual Name) for CAN_MO141_AR.
* To use register names with standard convension, please use CAN_MO141_AR.
*/
#define	CAN_MOAR141	(CAN_MO141_AR)

/** \\brief  21BC, Message Object  Control Register */
#define CAN_MO141_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A1BCu)

/** Alias (User Manual Name) for CAN_MO141_CTR.
* To use register names with standard convension, please use CAN_MO141_CTR.
*/
#define	CAN_MOCTR141	(CAN_MO141_CTR)

/** \\brief  21B4, Message Object  Data Register High */
#define CAN_MO141_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A1B4u)

/** Alias (User Manual Name) for CAN_MO141_DATAH.
* To use register names with standard convension, please use CAN_MO141_DATAH.
*/
#define	CAN_MODATAH141	(CAN_MO141_DATAH)

/** \\brief  21B0, Message Object  Data Register Low */
#define CAN_MO141_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A1B0u)

/** Alias (User Manual Name) for CAN_MO141_DATAL.
* To use register names with standard convension, please use CAN_MO141_DATAL.
*/
#define	CAN_MODATAL141	(CAN_MO141_DATAL)

/** \\brief  21A0, Message Object  Function Control Register */
#define CAN_MO141_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A1A0u)

/** Alias (User Manual Name) for CAN_MO141_FCR.
* To use register names with standard convension, please use CAN_MO141_FCR.
*/
#define	CAN_MOFCR141	(CAN_MO141_FCR)

/** \\brief  21A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO141_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A1A4u)

/** Alias (User Manual Name) for CAN_MO141_FGPR.
* To use register names with standard convension, please use CAN_MO141_FGPR.
*/
#define	CAN_MOFGPR141	(CAN_MO141_FGPR)

/** \\brief  21A8, Message Object  Interrupt Pointer Register */
#define CAN_MO141_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A1A8u)

/** Alias (User Manual Name) for CAN_MO141_IPR.
* To use register names with standard convension, please use CAN_MO141_IPR.
*/
#define	CAN_MOIPR141	(CAN_MO141_IPR)

/** \\brief  21BC, Message Object  Control Register */
#define CAN_MO141_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A1BCu)

/** Alias (User Manual Name) for CAN_MO141_STAT.
* To use register names with standard convension, please use CAN_MO141_STAT.
*/
#define	CAN_MOSTAT141	(CAN_MO141_STAT)

/** \\brief  21CC, Message Object  Acceptance Mask Register */
#define CAN_MO142_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A1CCu)

/** Alias (User Manual Name) for CAN_MO142_AMR.
* To use register names with standard convension, please use CAN_MO142_AMR.
*/
#define	CAN_MOAMR142	(CAN_MO142_AMR)

/** \\brief  21D8, Message Object  Arbitration Register */
#define CAN_MO142_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A1D8u)

/** Alias (User Manual Name) for CAN_MO142_AR.
* To use register names with standard convension, please use CAN_MO142_AR.
*/
#define	CAN_MOAR142	(CAN_MO142_AR)

/** \\brief  21DC, Message Object  Control Register */
#define CAN_MO142_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A1DCu)

/** Alias (User Manual Name) for CAN_MO142_CTR.
* To use register names with standard convension, please use CAN_MO142_CTR.
*/
#define	CAN_MOCTR142	(CAN_MO142_CTR)

/** \\brief  21D4, Message Object  Data Register High */
#define CAN_MO142_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A1D4u)

/** Alias (User Manual Name) for CAN_MO142_DATAH.
* To use register names with standard convension, please use CAN_MO142_DATAH.
*/
#define	CAN_MODATAH142	(CAN_MO142_DATAH)

/** \\brief  21D0, Message Object  Data Register Low */
#define CAN_MO142_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A1D0u)

/** Alias (User Manual Name) for CAN_MO142_DATAL.
* To use register names with standard convension, please use CAN_MO142_DATAL.
*/
#define	CAN_MODATAL142	(CAN_MO142_DATAL)

/** \\brief  21C0, Message Object  Function Control Register */
#define CAN_MO142_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A1C0u)

/** Alias (User Manual Name) for CAN_MO142_FCR.
* To use register names with standard convension, please use CAN_MO142_FCR.
*/
#define	CAN_MOFCR142	(CAN_MO142_FCR)

/** \\brief  21C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO142_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A1C4u)

/** Alias (User Manual Name) for CAN_MO142_FGPR.
* To use register names with standard convension, please use CAN_MO142_FGPR.
*/
#define	CAN_MOFGPR142	(CAN_MO142_FGPR)

/** \\brief  21C8, Message Object  Interrupt Pointer Register */
#define CAN_MO142_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A1C8u)

/** Alias (User Manual Name) for CAN_MO142_IPR.
* To use register names with standard convension, please use CAN_MO142_IPR.
*/
#define	CAN_MOIPR142	(CAN_MO142_IPR)

/** \\brief  21DC, Message Object  Control Register */
#define CAN_MO142_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A1DCu)

/** Alias (User Manual Name) for CAN_MO142_STAT.
* To use register names with standard convension, please use CAN_MO142_STAT.
*/
#define	CAN_MOSTAT142	(CAN_MO142_STAT)

/** \\brief  21EC, Message Object  Acceptance Mask Register */
#define CAN_MO143_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A1ECu)

/** Alias (User Manual Name) for CAN_MO143_AMR.
* To use register names with standard convension, please use CAN_MO143_AMR.
*/
#define	CAN_MOAMR143	(CAN_MO143_AMR)

/** \\brief  21F8, Message Object  Arbitration Register */
#define CAN_MO143_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A1F8u)

/** Alias (User Manual Name) for CAN_MO143_AR.
* To use register names with standard convension, please use CAN_MO143_AR.
*/
#define	CAN_MOAR143	(CAN_MO143_AR)

/** \\brief  21FC, Message Object  Control Register */
#define CAN_MO143_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A1FCu)

/** Alias (User Manual Name) for CAN_MO143_CTR.
* To use register names with standard convension, please use CAN_MO143_CTR.
*/
#define	CAN_MOCTR143	(CAN_MO143_CTR)

/** \\brief  21F4, Message Object  Data Register High */
#define CAN_MO143_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A1F4u)

/** Alias (User Manual Name) for CAN_MO143_DATAH.
* To use register names with standard convension, please use CAN_MO143_DATAH.
*/
#define	CAN_MODATAH143	(CAN_MO143_DATAH)

/** \\brief  21F0, Message Object  Data Register Low */
#define CAN_MO143_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A1F0u)

/** Alias (User Manual Name) for CAN_MO143_DATAL.
* To use register names with standard convension, please use CAN_MO143_DATAL.
*/
#define	CAN_MODATAL143	(CAN_MO143_DATAL)

/** \\brief  21E0, Message Object  Function Control Register */
#define CAN_MO143_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A1E0u)

/** Alias (User Manual Name) for CAN_MO143_FCR.
* To use register names with standard convension, please use CAN_MO143_FCR.
*/
#define	CAN_MOFCR143	(CAN_MO143_FCR)

/** \\brief  21E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO143_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A1E4u)

/** Alias (User Manual Name) for CAN_MO143_FGPR.
* To use register names with standard convension, please use CAN_MO143_FGPR.
*/
#define	CAN_MOFGPR143	(CAN_MO143_FGPR)

/** \\brief  21E8, Message Object  Interrupt Pointer Register */
#define CAN_MO143_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A1E8u)

/** Alias (User Manual Name) for CAN_MO143_IPR.
* To use register names with standard convension, please use CAN_MO143_IPR.
*/
#define	CAN_MOIPR143	(CAN_MO143_IPR)

/** \\brief  21FC, Message Object  Control Register */
#define CAN_MO143_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A1FCu)

/** Alias (User Manual Name) for CAN_MO143_STAT.
* To use register names with standard convension, please use CAN_MO143_STAT.
*/
#define	CAN_MOSTAT143	(CAN_MO143_STAT)

/** \\brief  220C, Message Object  Acceptance Mask Register */
#define CAN_MO144_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A20Cu)

/** Alias (User Manual Name) for CAN_MO144_AMR.
* To use register names with standard convension, please use CAN_MO144_AMR.
*/
#define	CAN_MOAMR144	(CAN_MO144_AMR)

/** \\brief  2218, Message Object  Arbitration Register */
#define CAN_MO144_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A218u)

/** Alias (User Manual Name) for CAN_MO144_AR.
* To use register names with standard convension, please use CAN_MO144_AR.
*/
#define	CAN_MOAR144	(CAN_MO144_AR)

/** \\brief  221C, Message Object  Control Register */
#define CAN_MO144_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A21Cu)

/** Alias (User Manual Name) for CAN_MO144_CTR.
* To use register names with standard convension, please use CAN_MO144_CTR.
*/
#define	CAN_MOCTR144	(CAN_MO144_CTR)

/** \\brief  2214, Message Object  Data Register High */
#define CAN_MO144_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A214u)

/** Alias (User Manual Name) for CAN_MO144_DATAH.
* To use register names with standard convension, please use CAN_MO144_DATAH.
*/
#define	CAN_MODATAH144	(CAN_MO144_DATAH)

/** \\brief  2210, Message Object  Data Register Low */
#define CAN_MO144_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A210u)

/** Alias (User Manual Name) for CAN_MO144_DATAL.
* To use register names with standard convension, please use CAN_MO144_DATAL.
*/
#define	CAN_MODATAL144	(CAN_MO144_DATAL)

/** \\brief  2200, Message Object  Function Control Register */
#define CAN_MO144_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A200u)

/** Alias (User Manual Name) for CAN_MO144_FCR.
* To use register names with standard convension, please use CAN_MO144_FCR.
*/
#define	CAN_MOFCR144	(CAN_MO144_FCR)

/** \\brief  2204, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO144_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A204u)

/** Alias (User Manual Name) for CAN_MO144_FGPR.
* To use register names with standard convension, please use CAN_MO144_FGPR.
*/
#define	CAN_MOFGPR144	(CAN_MO144_FGPR)

/** \\brief  2208, Message Object  Interrupt Pointer Register */
#define CAN_MO144_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A208u)

/** Alias (User Manual Name) for CAN_MO144_IPR.
* To use register names with standard convension, please use CAN_MO144_IPR.
*/
#define	CAN_MOIPR144	(CAN_MO144_IPR)

/** \\brief  221C, Message Object  Control Register */
#define CAN_MO144_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A21Cu)

/** Alias (User Manual Name) for CAN_MO144_STAT.
* To use register names with standard convension, please use CAN_MO144_STAT.
*/
#define	CAN_MOSTAT144	(CAN_MO144_STAT)

/** \\brief  222C, Message Object  Acceptance Mask Register */
#define CAN_MO145_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A22Cu)

/** Alias (User Manual Name) for CAN_MO145_AMR.
* To use register names with standard convension, please use CAN_MO145_AMR.
*/
#define	CAN_MOAMR145	(CAN_MO145_AMR)

/** \\brief  2238, Message Object  Arbitration Register */
#define CAN_MO145_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A238u)

/** Alias (User Manual Name) for CAN_MO145_AR.
* To use register names with standard convension, please use CAN_MO145_AR.
*/
#define	CAN_MOAR145	(CAN_MO145_AR)

/** \\brief  223C, Message Object  Control Register */
#define CAN_MO145_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A23Cu)

/** Alias (User Manual Name) for CAN_MO145_CTR.
* To use register names with standard convension, please use CAN_MO145_CTR.
*/
#define	CAN_MOCTR145	(CAN_MO145_CTR)

/** \\brief  2234, Message Object  Data Register High */
#define CAN_MO145_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A234u)

/** Alias (User Manual Name) for CAN_MO145_DATAH.
* To use register names with standard convension, please use CAN_MO145_DATAH.
*/
#define	CAN_MODATAH145	(CAN_MO145_DATAH)

/** \\brief  2230, Message Object  Data Register Low */
#define CAN_MO145_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A230u)

/** Alias (User Manual Name) for CAN_MO145_DATAL.
* To use register names with standard convension, please use CAN_MO145_DATAL.
*/
#define	CAN_MODATAL145	(CAN_MO145_DATAL)

/** \\brief  2220, Message Object  Function Control Register */
#define CAN_MO145_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A220u)

/** Alias (User Manual Name) for CAN_MO145_FCR.
* To use register names with standard convension, please use CAN_MO145_FCR.
*/
#define	CAN_MOFCR145	(CAN_MO145_FCR)

/** \\brief  2224, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO145_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A224u)

/** Alias (User Manual Name) for CAN_MO145_FGPR.
* To use register names with standard convension, please use CAN_MO145_FGPR.
*/
#define	CAN_MOFGPR145	(CAN_MO145_FGPR)

/** \\brief  2228, Message Object  Interrupt Pointer Register */
#define CAN_MO145_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A228u)

/** Alias (User Manual Name) for CAN_MO145_IPR.
* To use register names with standard convension, please use CAN_MO145_IPR.
*/
#define	CAN_MOIPR145	(CAN_MO145_IPR)

/** \\brief  223C, Message Object  Control Register */
#define CAN_MO145_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A23Cu)

/** Alias (User Manual Name) for CAN_MO145_STAT.
* To use register names with standard convension, please use CAN_MO145_STAT.
*/
#define	CAN_MOSTAT145	(CAN_MO145_STAT)

/** \\brief  224C, Message Object  Acceptance Mask Register */
#define CAN_MO146_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A24Cu)

/** Alias (User Manual Name) for CAN_MO146_AMR.
* To use register names with standard convension, please use CAN_MO146_AMR.
*/
#define	CAN_MOAMR146	(CAN_MO146_AMR)

/** \\brief  2258, Message Object  Arbitration Register */
#define CAN_MO146_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A258u)

/** Alias (User Manual Name) for CAN_MO146_AR.
* To use register names with standard convension, please use CAN_MO146_AR.
*/
#define	CAN_MOAR146	(CAN_MO146_AR)

/** \\brief  225C, Message Object  Control Register */
#define CAN_MO146_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A25Cu)

/** Alias (User Manual Name) for CAN_MO146_CTR.
* To use register names with standard convension, please use CAN_MO146_CTR.
*/
#define	CAN_MOCTR146	(CAN_MO146_CTR)

/** \\brief  2254, Message Object  Data Register High */
#define CAN_MO146_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A254u)

/** Alias (User Manual Name) for CAN_MO146_DATAH.
* To use register names with standard convension, please use CAN_MO146_DATAH.
*/
#define	CAN_MODATAH146	(CAN_MO146_DATAH)

/** \\brief  2250, Message Object  Data Register Low */
#define CAN_MO146_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A250u)

/** Alias (User Manual Name) for CAN_MO146_DATAL.
* To use register names with standard convension, please use CAN_MO146_DATAL.
*/
#define	CAN_MODATAL146	(CAN_MO146_DATAL)

/** \\brief  2240, Message Object  Function Control Register */
#define CAN_MO146_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A240u)

/** Alias (User Manual Name) for CAN_MO146_FCR.
* To use register names with standard convension, please use CAN_MO146_FCR.
*/
#define	CAN_MOFCR146	(CAN_MO146_FCR)

/** \\brief  2244, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO146_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A244u)

/** Alias (User Manual Name) for CAN_MO146_FGPR.
* To use register names with standard convension, please use CAN_MO146_FGPR.
*/
#define	CAN_MOFGPR146	(CAN_MO146_FGPR)

/** \\brief  2248, Message Object  Interrupt Pointer Register */
#define CAN_MO146_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A248u)

/** Alias (User Manual Name) for CAN_MO146_IPR.
* To use register names with standard convension, please use CAN_MO146_IPR.
*/
#define	CAN_MOIPR146	(CAN_MO146_IPR)

/** \\brief  225C, Message Object  Control Register */
#define CAN_MO146_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A25Cu)

/** Alias (User Manual Name) for CAN_MO146_STAT.
* To use register names with standard convension, please use CAN_MO146_STAT.
*/
#define	CAN_MOSTAT146	(CAN_MO146_STAT)

/** \\brief  226C, Message Object  Acceptance Mask Register */
#define CAN_MO147_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A26Cu)

/** Alias (User Manual Name) for CAN_MO147_AMR.
* To use register names with standard convension, please use CAN_MO147_AMR.
*/
#define	CAN_MOAMR147	(CAN_MO147_AMR)

/** \\brief  2278, Message Object  Arbitration Register */
#define CAN_MO147_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A278u)

/** Alias (User Manual Name) for CAN_MO147_AR.
* To use register names with standard convension, please use CAN_MO147_AR.
*/
#define	CAN_MOAR147	(CAN_MO147_AR)

/** \\brief  227C, Message Object  Control Register */
#define CAN_MO147_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A27Cu)

/** Alias (User Manual Name) for CAN_MO147_CTR.
* To use register names with standard convension, please use CAN_MO147_CTR.
*/
#define	CAN_MOCTR147	(CAN_MO147_CTR)

/** \\brief  2274, Message Object  Data Register High */
#define CAN_MO147_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A274u)

/** Alias (User Manual Name) for CAN_MO147_DATAH.
* To use register names with standard convension, please use CAN_MO147_DATAH.
*/
#define	CAN_MODATAH147	(CAN_MO147_DATAH)

/** \\brief  2270, Message Object  Data Register Low */
#define CAN_MO147_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A270u)

/** Alias (User Manual Name) for CAN_MO147_DATAL.
* To use register names with standard convension, please use CAN_MO147_DATAL.
*/
#define	CAN_MODATAL147	(CAN_MO147_DATAL)

/** \\brief  2260, Message Object  Function Control Register */
#define CAN_MO147_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A260u)

/** Alias (User Manual Name) for CAN_MO147_FCR.
* To use register names with standard convension, please use CAN_MO147_FCR.
*/
#define	CAN_MOFCR147	(CAN_MO147_FCR)

/** \\brief  2264, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO147_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A264u)

/** Alias (User Manual Name) for CAN_MO147_FGPR.
* To use register names with standard convension, please use CAN_MO147_FGPR.
*/
#define	CAN_MOFGPR147	(CAN_MO147_FGPR)

/** \\brief  2268, Message Object  Interrupt Pointer Register */
#define CAN_MO147_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A268u)

/** Alias (User Manual Name) for CAN_MO147_IPR.
* To use register names with standard convension, please use CAN_MO147_IPR.
*/
#define	CAN_MOIPR147	(CAN_MO147_IPR)

/** \\brief  227C, Message Object  Control Register */
#define CAN_MO147_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A27Cu)

/** Alias (User Manual Name) for CAN_MO147_STAT.
* To use register names with standard convension, please use CAN_MO147_STAT.
*/
#define	CAN_MOSTAT147	(CAN_MO147_STAT)

/** \\brief  228C, Message Object  Acceptance Mask Register */
#define CAN_MO148_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A28Cu)

/** Alias (User Manual Name) for CAN_MO148_AMR.
* To use register names with standard convension, please use CAN_MO148_AMR.
*/
#define	CAN_MOAMR148	(CAN_MO148_AMR)

/** \\brief  2298, Message Object  Arbitration Register */
#define CAN_MO148_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A298u)

/** Alias (User Manual Name) for CAN_MO148_AR.
* To use register names with standard convension, please use CAN_MO148_AR.
*/
#define	CAN_MOAR148	(CAN_MO148_AR)

/** \\brief  229C, Message Object  Control Register */
#define CAN_MO148_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A29Cu)

/** Alias (User Manual Name) for CAN_MO148_CTR.
* To use register names with standard convension, please use CAN_MO148_CTR.
*/
#define	CAN_MOCTR148	(CAN_MO148_CTR)

/** \\brief  2294, Message Object  Data Register High */
#define CAN_MO148_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A294u)

/** Alias (User Manual Name) for CAN_MO148_DATAH.
* To use register names with standard convension, please use CAN_MO148_DATAH.
*/
#define	CAN_MODATAH148	(CAN_MO148_DATAH)

/** \\brief  2290, Message Object  Data Register Low */
#define CAN_MO148_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A290u)

/** Alias (User Manual Name) for CAN_MO148_DATAL.
* To use register names with standard convension, please use CAN_MO148_DATAL.
*/
#define	CAN_MODATAL148	(CAN_MO148_DATAL)

/** \\brief  2280, Message Object  Function Control Register */
#define CAN_MO148_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A280u)

/** Alias (User Manual Name) for CAN_MO148_FCR.
* To use register names with standard convension, please use CAN_MO148_FCR.
*/
#define	CAN_MOFCR148	(CAN_MO148_FCR)

/** \\brief  2284, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO148_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A284u)

/** Alias (User Manual Name) for CAN_MO148_FGPR.
* To use register names with standard convension, please use CAN_MO148_FGPR.
*/
#define	CAN_MOFGPR148	(CAN_MO148_FGPR)

/** \\brief  2288, Message Object  Interrupt Pointer Register */
#define CAN_MO148_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A288u)

/** Alias (User Manual Name) for CAN_MO148_IPR.
* To use register names with standard convension, please use CAN_MO148_IPR.
*/
#define	CAN_MOIPR148	(CAN_MO148_IPR)

/** \\brief  229C, Message Object  Control Register */
#define CAN_MO148_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A29Cu)

/** Alias (User Manual Name) for CAN_MO148_STAT.
* To use register names with standard convension, please use CAN_MO148_STAT.
*/
#define	CAN_MOSTAT148	(CAN_MO148_STAT)

/** \\brief  22AC, Message Object  Acceptance Mask Register */
#define CAN_MO149_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A2ACu)

/** Alias (User Manual Name) for CAN_MO149_AMR.
* To use register names with standard convension, please use CAN_MO149_AMR.
*/
#define	CAN_MOAMR149	(CAN_MO149_AMR)

/** \\brief  22B8, Message Object  Arbitration Register */
#define CAN_MO149_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A2B8u)

/** Alias (User Manual Name) for CAN_MO149_AR.
* To use register names with standard convension, please use CAN_MO149_AR.
*/
#define	CAN_MOAR149	(CAN_MO149_AR)

/** \\brief  22BC, Message Object  Control Register */
#define CAN_MO149_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A2BCu)

/** Alias (User Manual Name) for CAN_MO149_CTR.
* To use register names with standard convension, please use CAN_MO149_CTR.
*/
#define	CAN_MOCTR149	(CAN_MO149_CTR)

/** \\brief  22B4, Message Object  Data Register High */
#define CAN_MO149_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A2B4u)

/** Alias (User Manual Name) for CAN_MO149_DATAH.
* To use register names with standard convension, please use CAN_MO149_DATAH.
*/
#define	CAN_MODATAH149	(CAN_MO149_DATAH)

/** \\brief  22B0, Message Object  Data Register Low */
#define CAN_MO149_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A2B0u)

/** Alias (User Manual Name) for CAN_MO149_DATAL.
* To use register names with standard convension, please use CAN_MO149_DATAL.
*/
#define	CAN_MODATAL149	(CAN_MO149_DATAL)

/** \\brief  22A0, Message Object  Function Control Register */
#define CAN_MO149_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A2A0u)

/** Alias (User Manual Name) for CAN_MO149_FCR.
* To use register names with standard convension, please use CAN_MO149_FCR.
*/
#define	CAN_MOFCR149	(CAN_MO149_FCR)

/** \\brief  22A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO149_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A2A4u)

/** Alias (User Manual Name) for CAN_MO149_FGPR.
* To use register names with standard convension, please use CAN_MO149_FGPR.
*/
#define	CAN_MOFGPR149	(CAN_MO149_FGPR)

/** \\brief  22A8, Message Object  Interrupt Pointer Register */
#define CAN_MO149_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A2A8u)

/** Alias (User Manual Name) for CAN_MO149_IPR.
* To use register names with standard convension, please use CAN_MO149_IPR.
*/
#define	CAN_MOIPR149	(CAN_MO149_IPR)

/** \\brief  22BC, Message Object  Control Register */
#define CAN_MO149_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A2BCu)

/** Alias (User Manual Name) for CAN_MO149_STAT.
* To use register names with standard convension, please use CAN_MO149_STAT.
*/
#define	CAN_MOSTAT149	(CAN_MO149_STAT)

/** \\brief  11CC, Message Object  Acceptance Mask Register */
#define CAN_MO14_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00191CCu)

/** Alias (User Manual Name) for CAN_MO14_AMR.
* To use register names with standard convension, please use CAN_MO14_AMR.
*/
#define	CAN_MOAMR14	(CAN_MO14_AMR)

/** \\brief  11D8, Message Object  Arbitration Register */
#define CAN_MO14_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00191D8u)

/** Alias (User Manual Name) for CAN_MO14_AR.
* To use register names with standard convension, please use CAN_MO14_AR.
*/
#define	CAN_MOAR14	(CAN_MO14_AR)

/** \\brief  11DC, Message Object  Control Register */
#define CAN_MO14_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00191DCu)

/** Alias (User Manual Name) for CAN_MO14_CTR.
* To use register names with standard convension, please use CAN_MO14_CTR.
*/
#define	CAN_MOCTR14	(CAN_MO14_CTR)

/** \\brief  11D4, Message Object  Data Register High */
#define CAN_MO14_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00191D4u)

/** Alias (User Manual Name) for CAN_MO14_DATAH.
* To use register names with standard convension, please use CAN_MO14_DATAH.
*/
#define	CAN_MODATAH14	(CAN_MO14_DATAH)

/** \\brief  11D0, Message Object  Data Register Low */
#define CAN_MO14_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00191D0u)

/** Alias (User Manual Name) for CAN_MO14_DATAL.
* To use register names with standard convension, please use CAN_MO14_DATAL.
*/
#define	CAN_MODATAL14	(CAN_MO14_DATAL)

/** \\brief  11C0, Message Object  Function Control Register */
#define CAN_MO14_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00191C0u)

/** Alias (User Manual Name) for CAN_MO14_FCR.
* To use register names with standard convension, please use CAN_MO14_FCR.
*/
#define	CAN_MOFCR14	(CAN_MO14_FCR)

/** \\brief  11C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO14_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00191C4u)

/** Alias (User Manual Name) for CAN_MO14_FGPR.
* To use register names with standard convension, please use CAN_MO14_FGPR.
*/
#define	CAN_MOFGPR14	(CAN_MO14_FGPR)

/** \\brief  11C8, Message Object  Interrupt Pointer Register */
#define CAN_MO14_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00191C8u)

/** Alias (User Manual Name) for CAN_MO14_IPR.
* To use register names with standard convension, please use CAN_MO14_IPR.
*/
#define	CAN_MOIPR14	(CAN_MO14_IPR)

/** \\brief  11DC, Message Object  Control Register */
#define CAN_MO14_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00191DCu)

/** Alias (User Manual Name) for CAN_MO14_STAT.
* To use register names with standard convension, please use CAN_MO14_STAT.
*/
#define	CAN_MOSTAT14	(CAN_MO14_STAT)

/** \\brief  22CC, Message Object  Acceptance Mask Register */
#define CAN_MO150_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A2CCu)

/** Alias (User Manual Name) for CAN_MO150_AMR.
* To use register names with standard convension, please use CAN_MO150_AMR.
*/
#define	CAN_MOAMR150	(CAN_MO150_AMR)

/** \\brief  22D8, Message Object  Arbitration Register */
#define CAN_MO150_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A2D8u)

/** Alias (User Manual Name) for CAN_MO150_AR.
* To use register names with standard convension, please use CAN_MO150_AR.
*/
#define	CAN_MOAR150	(CAN_MO150_AR)

/** \\brief  22DC, Message Object  Control Register */
#define CAN_MO150_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A2DCu)

/** Alias (User Manual Name) for CAN_MO150_CTR.
* To use register names with standard convension, please use CAN_MO150_CTR.
*/
#define	CAN_MOCTR150	(CAN_MO150_CTR)

/** \\brief  22D4, Message Object  Data Register High */
#define CAN_MO150_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A2D4u)

/** Alias (User Manual Name) for CAN_MO150_DATAH.
* To use register names with standard convension, please use CAN_MO150_DATAH.
*/
#define	CAN_MODATAH150	(CAN_MO150_DATAH)

/** \\brief  22D0, Message Object  Data Register Low */
#define CAN_MO150_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A2D0u)

/** Alias (User Manual Name) for CAN_MO150_DATAL.
* To use register names with standard convension, please use CAN_MO150_DATAL.
*/
#define	CAN_MODATAL150	(CAN_MO150_DATAL)

/** \\brief  22C0, Message Object  Function Control Register */
#define CAN_MO150_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A2C0u)

/** Alias (User Manual Name) for CAN_MO150_FCR.
* To use register names with standard convension, please use CAN_MO150_FCR.
*/
#define	CAN_MOFCR150	(CAN_MO150_FCR)

/** \\brief  22C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO150_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A2C4u)

/** Alias (User Manual Name) for CAN_MO150_FGPR.
* To use register names with standard convension, please use CAN_MO150_FGPR.
*/
#define	CAN_MOFGPR150	(CAN_MO150_FGPR)

/** \\brief  22C8, Message Object  Interrupt Pointer Register */
#define CAN_MO150_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A2C8u)

/** Alias (User Manual Name) for CAN_MO150_IPR.
* To use register names with standard convension, please use CAN_MO150_IPR.
*/
#define	CAN_MOIPR150	(CAN_MO150_IPR)

/** \\brief  22DC, Message Object  Control Register */
#define CAN_MO150_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A2DCu)

/** Alias (User Manual Name) for CAN_MO150_STAT.
* To use register names with standard convension, please use CAN_MO150_STAT.
*/
#define	CAN_MOSTAT150	(CAN_MO150_STAT)

/** \\brief  22EC, Message Object  Acceptance Mask Register */
#define CAN_MO151_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A2ECu)

/** Alias (User Manual Name) for CAN_MO151_AMR.
* To use register names with standard convension, please use CAN_MO151_AMR.
*/
#define	CAN_MOAMR151	(CAN_MO151_AMR)

/** \\brief  22F8, Message Object  Arbitration Register */
#define CAN_MO151_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A2F8u)

/** Alias (User Manual Name) for CAN_MO151_AR.
* To use register names with standard convension, please use CAN_MO151_AR.
*/
#define	CAN_MOAR151	(CAN_MO151_AR)

/** \\brief  22FC, Message Object  Control Register */
#define CAN_MO151_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A2FCu)

/** Alias (User Manual Name) for CAN_MO151_CTR.
* To use register names with standard convension, please use CAN_MO151_CTR.
*/
#define	CAN_MOCTR151	(CAN_MO151_CTR)

/** \\brief  22F4, Message Object  Data Register High */
#define CAN_MO151_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A2F4u)

/** Alias (User Manual Name) for CAN_MO151_DATAH.
* To use register names with standard convension, please use CAN_MO151_DATAH.
*/
#define	CAN_MODATAH151	(CAN_MO151_DATAH)

/** \\brief  22F0, Message Object  Data Register Low */
#define CAN_MO151_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A2F0u)

/** Alias (User Manual Name) for CAN_MO151_DATAL.
* To use register names with standard convension, please use CAN_MO151_DATAL.
*/
#define	CAN_MODATAL151	(CAN_MO151_DATAL)

/** \\brief  22E0, Message Object  Function Control Register */
#define CAN_MO151_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A2E0u)

/** Alias (User Manual Name) for CAN_MO151_FCR.
* To use register names with standard convension, please use CAN_MO151_FCR.
*/
#define	CAN_MOFCR151	(CAN_MO151_FCR)

/** \\brief  22E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO151_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A2E4u)

/** Alias (User Manual Name) for CAN_MO151_FGPR.
* To use register names with standard convension, please use CAN_MO151_FGPR.
*/
#define	CAN_MOFGPR151	(CAN_MO151_FGPR)

/** \\brief  22E8, Message Object  Interrupt Pointer Register */
#define CAN_MO151_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A2E8u)

/** Alias (User Manual Name) for CAN_MO151_IPR.
* To use register names with standard convension, please use CAN_MO151_IPR.
*/
#define	CAN_MOIPR151	(CAN_MO151_IPR)

/** \\brief  22FC, Message Object  Control Register */
#define CAN_MO151_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A2FCu)

/** Alias (User Manual Name) for CAN_MO151_STAT.
* To use register names with standard convension, please use CAN_MO151_STAT.
*/
#define	CAN_MOSTAT151	(CAN_MO151_STAT)

/** \\brief  230C, Message Object  Acceptance Mask Register */
#define CAN_MO152_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A30Cu)

/** Alias (User Manual Name) for CAN_MO152_AMR.
* To use register names with standard convension, please use CAN_MO152_AMR.
*/
#define	CAN_MOAMR152	(CAN_MO152_AMR)

/** \\brief  2318, Message Object  Arbitration Register */
#define CAN_MO152_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A318u)

/** Alias (User Manual Name) for CAN_MO152_AR.
* To use register names with standard convension, please use CAN_MO152_AR.
*/
#define	CAN_MOAR152	(CAN_MO152_AR)

/** \\brief  231C, Message Object  Control Register */
#define CAN_MO152_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A31Cu)

/** Alias (User Manual Name) for CAN_MO152_CTR.
* To use register names with standard convension, please use CAN_MO152_CTR.
*/
#define	CAN_MOCTR152	(CAN_MO152_CTR)

/** \\brief  2314, Message Object  Data Register High */
#define CAN_MO152_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A314u)

/** Alias (User Manual Name) for CAN_MO152_DATAH.
* To use register names with standard convension, please use CAN_MO152_DATAH.
*/
#define	CAN_MODATAH152	(CAN_MO152_DATAH)

/** \\brief  2310, Message Object  Data Register Low */
#define CAN_MO152_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A310u)

/** Alias (User Manual Name) for CAN_MO152_DATAL.
* To use register names with standard convension, please use CAN_MO152_DATAL.
*/
#define	CAN_MODATAL152	(CAN_MO152_DATAL)

/** \\brief  2300, Message Object  Function Control Register */
#define CAN_MO152_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A300u)

/** Alias (User Manual Name) for CAN_MO152_FCR.
* To use register names with standard convension, please use CAN_MO152_FCR.
*/
#define	CAN_MOFCR152	(CAN_MO152_FCR)

/** \\brief  2304, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO152_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A304u)

/** Alias (User Manual Name) for CAN_MO152_FGPR.
* To use register names with standard convension, please use CAN_MO152_FGPR.
*/
#define	CAN_MOFGPR152	(CAN_MO152_FGPR)

/** \\brief  2308, Message Object  Interrupt Pointer Register */
#define CAN_MO152_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A308u)

/** Alias (User Manual Name) for CAN_MO152_IPR.
* To use register names with standard convension, please use CAN_MO152_IPR.
*/
#define	CAN_MOIPR152	(CAN_MO152_IPR)

/** \\brief  231C, Message Object  Control Register */
#define CAN_MO152_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A31Cu)

/** Alias (User Manual Name) for CAN_MO152_STAT.
* To use register names with standard convension, please use CAN_MO152_STAT.
*/
#define	CAN_MOSTAT152	(CAN_MO152_STAT)

/** \\brief  232C, Message Object  Acceptance Mask Register */
#define CAN_MO153_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A32Cu)

/** Alias (User Manual Name) for CAN_MO153_AMR.
* To use register names with standard convension, please use CAN_MO153_AMR.
*/
#define	CAN_MOAMR153	(CAN_MO153_AMR)

/** \\brief  2338, Message Object  Arbitration Register */
#define CAN_MO153_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A338u)

/** Alias (User Manual Name) for CAN_MO153_AR.
* To use register names with standard convension, please use CAN_MO153_AR.
*/
#define	CAN_MOAR153	(CAN_MO153_AR)

/** \\brief  233C, Message Object  Control Register */
#define CAN_MO153_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A33Cu)

/** Alias (User Manual Name) for CAN_MO153_CTR.
* To use register names with standard convension, please use CAN_MO153_CTR.
*/
#define	CAN_MOCTR153	(CAN_MO153_CTR)

/** \\brief  2334, Message Object  Data Register High */
#define CAN_MO153_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A334u)

/** Alias (User Manual Name) for CAN_MO153_DATAH.
* To use register names with standard convension, please use CAN_MO153_DATAH.
*/
#define	CAN_MODATAH153	(CAN_MO153_DATAH)

/** \\brief  2330, Message Object  Data Register Low */
#define CAN_MO153_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A330u)

/** Alias (User Manual Name) for CAN_MO153_DATAL.
* To use register names with standard convension, please use CAN_MO153_DATAL.
*/
#define	CAN_MODATAL153	(CAN_MO153_DATAL)

/** \\brief  2320, Message Object  Function Control Register */
#define CAN_MO153_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A320u)

/** Alias (User Manual Name) for CAN_MO153_FCR.
* To use register names with standard convension, please use CAN_MO153_FCR.
*/
#define	CAN_MOFCR153	(CAN_MO153_FCR)

/** \\brief  2324, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO153_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A324u)

/** Alias (User Manual Name) for CAN_MO153_FGPR.
* To use register names with standard convension, please use CAN_MO153_FGPR.
*/
#define	CAN_MOFGPR153	(CAN_MO153_FGPR)

/** \\brief  2328, Message Object  Interrupt Pointer Register */
#define CAN_MO153_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A328u)

/** Alias (User Manual Name) for CAN_MO153_IPR.
* To use register names with standard convension, please use CAN_MO153_IPR.
*/
#define	CAN_MOIPR153	(CAN_MO153_IPR)

/** \\brief  233C, Message Object  Control Register */
#define CAN_MO153_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A33Cu)

/** Alias (User Manual Name) for CAN_MO153_STAT.
* To use register names with standard convension, please use CAN_MO153_STAT.
*/
#define	CAN_MOSTAT153	(CAN_MO153_STAT)

/** \\brief  234C, Message Object  Acceptance Mask Register */
#define CAN_MO154_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A34Cu)

/** Alias (User Manual Name) for CAN_MO154_AMR.
* To use register names with standard convension, please use CAN_MO154_AMR.
*/
#define	CAN_MOAMR154	(CAN_MO154_AMR)

/** \\brief  2358, Message Object  Arbitration Register */
#define CAN_MO154_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A358u)

/** Alias (User Manual Name) for CAN_MO154_AR.
* To use register names with standard convension, please use CAN_MO154_AR.
*/
#define	CAN_MOAR154	(CAN_MO154_AR)

/** \\brief  235C, Message Object  Control Register */
#define CAN_MO154_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A35Cu)

/** Alias (User Manual Name) for CAN_MO154_CTR.
* To use register names with standard convension, please use CAN_MO154_CTR.
*/
#define	CAN_MOCTR154	(CAN_MO154_CTR)

/** \\brief  2354, Message Object  Data Register High */
#define CAN_MO154_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A354u)

/** Alias (User Manual Name) for CAN_MO154_DATAH.
* To use register names with standard convension, please use CAN_MO154_DATAH.
*/
#define	CAN_MODATAH154	(CAN_MO154_DATAH)

/** \\brief  2350, Message Object  Data Register Low */
#define CAN_MO154_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A350u)

/** Alias (User Manual Name) for CAN_MO154_DATAL.
* To use register names with standard convension, please use CAN_MO154_DATAL.
*/
#define	CAN_MODATAL154	(CAN_MO154_DATAL)

/** \\brief  2340, Message Object  Function Control Register */
#define CAN_MO154_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A340u)

/** Alias (User Manual Name) for CAN_MO154_FCR.
* To use register names with standard convension, please use CAN_MO154_FCR.
*/
#define	CAN_MOFCR154	(CAN_MO154_FCR)

/** \\brief  2344, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO154_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A344u)

/** Alias (User Manual Name) for CAN_MO154_FGPR.
* To use register names with standard convension, please use CAN_MO154_FGPR.
*/
#define	CAN_MOFGPR154	(CAN_MO154_FGPR)

/** \\brief  2348, Message Object  Interrupt Pointer Register */
#define CAN_MO154_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A348u)

/** Alias (User Manual Name) for CAN_MO154_IPR.
* To use register names with standard convension, please use CAN_MO154_IPR.
*/
#define	CAN_MOIPR154	(CAN_MO154_IPR)

/** \\brief  235C, Message Object  Control Register */
#define CAN_MO154_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A35Cu)

/** Alias (User Manual Name) for CAN_MO154_STAT.
* To use register names with standard convension, please use CAN_MO154_STAT.
*/
#define	CAN_MOSTAT154	(CAN_MO154_STAT)

/** \\brief  236C, Message Object  Acceptance Mask Register */
#define CAN_MO155_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A36Cu)

/** Alias (User Manual Name) for CAN_MO155_AMR.
* To use register names with standard convension, please use CAN_MO155_AMR.
*/
#define	CAN_MOAMR155	(CAN_MO155_AMR)

/** \\brief  2378, Message Object  Arbitration Register */
#define CAN_MO155_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A378u)

/** Alias (User Manual Name) for CAN_MO155_AR.
* To use register names with standard convension, please use CAN_MO155_AR.
*/
#define	CAN_MOAR155	(CAN_MO155_AR)

/** \\brief  237C, Message Object  Control Register */
#define CAN_MO155_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A37Cu)

/** Alias (User Manual Name) for CAN_MO155_CTR.
* To use register names with standard convension, please use CAN_MO155_CTR.
*/
#define	CAN_MOCTR155	(CAN_MO155_CTR)

/** \\brief  2374, Message Object  Data Register High */
#define CAN_MO155_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A374u)

/** Alias (User Manual Name) for CAN_MO155_DATAH.
* To use register names with standard convension, please use CAN_MO155_DATAH.
*/
#define	CAN_MODATAH155	(CAN_MO155_DATAH)

/** \\brief  2370, Message Object  Data Register Low */
#define CAN_MO155_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A370u)

/** Alias (User Manual Name) for CAN_MO155_DATAL.
* To use register names with standard convension, please use CAN_MO155_DATAL.
*/
#define	CAN_MODATAL155	(CAN_MO155_DATAL)

/** \\brief  2360, Message Object  Function Control Register */
#define CAN_MO155_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A360u)

/** Alias (User Manual Name) for CAN_MO155_FCR.
* To use register names with standard convension, please use CAN_MO155_FCR.
*/
#define	CAN_MOFCR155	(CAN_MO155_FCR)

/** \\brief  2364, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO155_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A364u)

/** Alias (User Manual Name) for CAN_MO155_FGPR.
* To use register names with standard convension, please use CAN_MO155_FGPR.
*/
#define	CAN_MOFGPR155	(CAN_MO155_FGPR)

/** \\brief  2368, Message Object  Interrupt Pointer Register */
#define CAN_MO155_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A368u)

/** Alias (User Manual Name) for CAN_MO155_IPR.
* To use register names with standard convension, please use CAN_MO155_IPR.
*/
#define	CAN_MOIPR155	(CAN_MO155_IPR)

/** \\brief  237C, Message Object  Control Register */
#define CAN_MO155_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A37Cu)

/** Alias (User Manual Name) for CAN_MO155_STAT.
* To use register names with standard convension, please use CAN_MO155_STAT.
*/
#define	CAN_MOSTAT155	(CAN_MO155_STAT)

/** \\brief  238C, Message Object  Acceptance Mask Register */
#define CAN_MO156_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A38Cu)

/** Alias (User Manual Name) for CAN_MO156_AMR.
* To use register names with standard convension, please use CAN_MO156_AMR.
*/
#define	CAN_MOAMR156	(CAN_MO156_AMR)

/** \\brief  2398, Message Object  Arbitration Register */
#define CAN_MO156_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A398u)

/** Alias (User Manual Name) for CAN_MO156_AR.
* To use register names with standard convension, please use CAN_MO156_AR.
*/
#define	CAN_MOAR156	(CAN_MO156_AR)

/** \\brief  239C, Message Object  Control Register */
#define CAN_MO156_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A39Cu)

/** Alias (User Manual Name) for CAN_MO156_CTR.
* To use register names with standard convension, please use CAN_MO156_CTR.
*/
#define	CAN_MOCTR156	(CAN_MO156_CTR)

/** \\brief  2394, Message Object  Data Register High */
#define CAN_MO156_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A394u)

/** Alias (User Manual Name) for CAN_MO156_DATAH.
* To use register names with standard convension, please use CAN_MO156_DATAH.
*/
#define	CAN_MODATAH156	(CAN_MO156_DATAH)

/** \\brief  2390, Message Object  Data Register Low */
#define CAN_MO156_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A390u)

/** Alias (User Manual Name) for CAN_MO156_DATAL.
* To use register names with standard convension, please use CAN_MO156_DATAL.
*/
#define	CAN_MODATAL156	(CAN_MO156_DATAL)

/** \\brief  2380, Message Object  Function Control Register */
#define CAN_MO156_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A380u)

/** Alias (User Manual Name) for CAN_MO156_FCR.
* To use register names with standard convension, please use CAN_MO156_FCR.
*/
#define	CAN_MOFCR156	(CAN_MO156_FCR)

/** \\brief  2384, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO156_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A384u)

/** Alias (User Manual Name) for CAN_MO156_FGPR.
* To use register names with standard convension, please use CAN_MO156_FGPR.
*/
#define	CAN_MOFGPR156	(CAN_MO156_FGPR)

/** \\brief  2388, Message Object  Interrupt Pointer Register */
#define CAN_MO156_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A388u)

/** Alias (User Manual Name) for CAN_MO156_IPR.
* To use register names with standard convension, please use CAN_MO156_IPR.
*/
#define	CAN_MOIPR156	(CAN_MO156_IPR)

/** \\brief  239C, Message Object  Control Register */
#define CAN_MO156_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A39Cu)

/** Alias (User Manual Name) for CAN_MO156_STAT.
* To use register names with standard convension, please use CAN_MO156_STAT.
*/
#define	CAN_MOSTAT156	(CAN_MO156_STAT)

/** \\brief  23AC, Message Object  Acceptance Mask Register */
#define CAN_MO157_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A3ACu)

/** Alias (User Manual Name) for CAN_MO157_AMR.
* To use register names with standard convension, please use CAN_MO157_AMR.
*/
#define	CAN_MOAMR157	(CAN_MO157_AMR)

/** \\brief  23B8, Message Object  Arbitration Register */
#define CAN_MO157_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A3B8u)

/** Alias (User Manual Name) for CAN_MO157_AR.
* To use register names with standard convension, please use CAN_MO157_AR.
*/
#define	CAN_MOAR157	(CAN_MO157_AR)

/** \\brief  23BC, Message Object  Control Register */
#define CAN_MO157_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A3BCu)

/** Alias (User Manual Name) for CAN_MO157_CTR.
* To use register names with standard convension, please use CAN_MO157_CTR.
*/
#define	CAN_MOCTR157	(CAN_MO157_CTR)

/** \\brief  23B4, Message Object  Data Register High */
#define CAN_MO157_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A3B4u)

/** Alias (User Manual Name) for CAN_MO157_DATAH.
* To use register names with standard convension, please use CAN_MO157_DATAH.
*/
#define	CAN_MODATAH157	(CAN_MO157_DATAH)

/** \\brief  23B0, Message Object  Data Register Low */
#define CAN_MO157_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A3B0u)

/** Alias (User Manual Name) for CAN_MO157_DATAL.
* To use register names with standard convension, please use CAN_MO157_DATAL.
*/
#define	CAN_MODATAL157	(CAN_MO157_DATAL)

/** \\brief  23A0, Message Object  Function Control Register */
#define CAN_MO157_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A3A0u)

/** Alias (User Manual Name) for CAN_MO157_FCR.
* To use register names with standard convension, please use CAN_MO157_FCR.
*/
#define	CAN_MOFCR157	(CAN_MO157_FCR)

/** \\brief  23A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO157_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A3A4u)

/** Alias (User Manual Name) for CAN_MO157_FGPR.
* To use register names with standard convension, please use CAN_MO157_FGPR.
*/
#define	CAN_MOFGPR157	(CAN_MO157_FGPR)

/** \\brief  23A8, Message Object  Interrupt Pointer Register */
#define CAN_MO157_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A3A8u)

/** Alias (User Manual Name) for CAN_MO157_IPR.
* To use register names with standard convension, please use CAN_MO157_IPR.
*/
#define	CAN_MOIPR157	(CAN_MO157_IPR)

/** \\brief  23BC, Message Object  Control Register */
#define CAN_MO157_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A3BCu)

/** Alias (User Manual Name) for CAN_MO157_STAT.
* To use register names with standard convension, please use CAN_MO157_STAT.
*/
#define	CAN_MOSTAT157	(CAN_MO157_STAT)

/** \\brief  23CC, Message Object  Acceptance Mask Register */
#define CAN_MO158_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A3CCu)

/** Alias (User Manual Name) for CAN_MO158_AMR.
* To use register names with standard convension, please use CAN_MO158_AMR.
*/
#define	CAN_MOAMR158	(CAN_MO158_AMR)

/** \\brief  23D8, Message Object  Arbitration Register */
#define CAN_MO158_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A3D8u)

/** Alias (User Manual Name) for CAN_MO158_AR.
* To use register names with standard convension, please use CAN_MO158_AR.
*/
#define	CAN_MOAR158	(CAN_MO158_AR)

/** \\brief  23DC, Message Object  Control Register */
#define CAN_MO158_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A3DCu)

/** Alias (User Manual Name) for CAN_MO158_CTR.
* To use register names with standard convension, please use CAN_MO158_CTR.
*/
#define	CAN_MOCTR158	(CAN_MO158_CTR)

/** \\brief  23D4, Message Object  Data Register High */
#define CAN_MO158_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A3D4u)

/** Alias (User Manual Name) for CAN_MO158_DATAH.
* To use register names with standard convension, please use CAN_MO158_DATAH.
*/
#define	CAN_MODATAH158	(CAN_MO158_DATAH)

/** \\brief  23D0, Message Object  Data Register Low */
#define CAN_MO158_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A3D0u)

/** Alias (User Manual Name) for CAN_MO158_DATAL.
* To use register names with standard convension, please use CAN_MO158_DATAL.
*/
#define	CAN_MODATAL158	(CAN_MO158_DATAL)

/** \\brief  23C0, Message Object  Function Control Register */
#define CAN_MO158_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A3C0u)

/** Alias (User Manual Name) for CAN_MO158_FCR.
* To use register names with standard convension, please use CAN_MO158_FCR.
*/
#define	CAN_MOFCR158	(CAN_MO158_FCR)

/** \\brief  23C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO158_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A3C4u)

/** Alias (User Manual Name) for CAN_MO158_FGPR.
* To use register names with standard convension, please use CAN_MO158_FGPR.
*/
#define	CAN_MOFGPR158	(CAN_MO158_FGPR)

/** \\brief  23C8, Message Object  Interrupt Pointer Register */
#define CAN_MO158_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A3C8u)

/** Alias (User Manual Name) for CAN_MO158_IPR.
* To use register names with standard convension, please use CAN_MO158_IPR.
*/
#define	CAN_MOIPR158	(CAN_MO158_IPR)

/** \\brief  23DC, Message Object  Control Register */
#define CAN_MO158_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A3DCu)

/** Alias (User Manual Name) for CAN_MO158_STAT.
* To use register names with standard convension, please use CAN_MO158_STAT.
*/
#define	CAN_MOSTAT158	(CAN_MO158_STAT)

/** \\brief  23EC, Message Object  Acceptance Mask Register */
#define CAN_MO159_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A3ECu)

/** Alias (User Manual Name) for CAN_MO159_AMR.
* To use register names with standard convension, please use CAN_MO159_AMR.
*/
#define	CAN_MOAMR159	(CAN_MO159_AMR)

/** \\brief  23F8, Message Object  Arbitration Register */
#define CAN_MO159_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A3F8u)

/** Alias (User Manual Name) for CAN_MO159_AR.
* To use register names with standard convension, please use CAN_MO159_AR.
*/
#define	CAN_MOAR159	(CAN_MO159_AR)

/** \\brief  23FC, Message Object  Control Register */
#define CAN_MO159_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A3FCu)

/** Alias (User Manual Name) for CAN_MO159_CTR.
* To use register names with standard convension, please use CAN_MO159_CTR.
*/
#define	CAN_MOCTR159	(CAN_MO159_CTR)

/** \\brief  23F4, Message Object  Data Register High */
#define CAN_MO159_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A3F4u)

/** Alias (User Manual Name) for CAN_MO159_DATAH.
* To use register names with standard convension, please use CAN_MO159_DATAH.
*/
#define	CAN_MODATAH159	(CAN_MO159_DATAH)

/** \\brief  23F0, Message Object  Data Register Low */
#define CAN_MO159_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A3F0u)

/** Alias (User Manual Name) for CAN_MO159_DATAL.
* To use register names with standard convension, please use CAN_MO159_DATAL.
*/
#define	CAN_MODATAL159	(CAN_MO159_DATAL)

/** \\brief  23E0, Message Object  Function Control Register */
#define CAN_MO159_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A3E0u)

/** Alias (User Manual Name) for CAN_MO159_FCR.
* To use register names with standard convension, please use CAN_MO159_FCR.
*/
#define	CAN_MOFCR159	(CAN_MO159_FCR)

/** \\brief  23E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO159_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A3E4u)

/** Alias (User Manual Name) for CAN_MO159_FGPR.
* To use register names with standard convension, please use CAN_MO159_FGPR.
*/
#define	CAN_MOFGPR159	(CAN_MO159_FGPR)

/** \\brief  23E8, Message Object  Interrupt Pointer Register */
#define CAN_MO159_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A3E8u)

/** Alias (User Manual Name) for CAN_MO159_IPR.
* To use register names with standard convension, please use CAN_MO159_IPR.
*/
#define	CAN_MOIPR159	(CAN_MO159_IPR)

/** \\brief  23FC, Message Object  Control Register */
#define CAN_MO159_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A3FCu)

/** Alias (User Manual Name) for CAN_MO159_STAT.
* To use register names with standard convension, please use CAN_MO159_STAT.
*/
#define	CAN_MOSTAT159	(CAN_MO159_STAT)

/** \\brief  11EC, Message Object  Acceptance Mask Register */
#define CAN_MO15_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00191ECu)

/** Alias (User Manual Name) for CAN_MO15_AMR.
* To use register names with standard convension, please use CAN_MO15_AMR.
*/
#define	CAN_MOAMR15	(CAN_MO15_AMR)

/** \\brief  11F8, Message Object  Arbitration Register */
#define CAN_MO15_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00191F8u)

/** Alias (User Manual Name) for CAN_MO15_AR.
* To use register names with standard convension, please use CAN_MO15_AR.
*/
#define	CAN_MOAR15	(CAN_MO15_AR)

/** \\brief  11FC, Message Object  Control Register */
#define CAN_MO15_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00191FCu)

/** Alias (User Manual Name) for CAN_MO15_CTR.
* To use register names with standard convension, please use CAN_MO15_CTR.
*/
#define	CAN_MOCTR15	(CAN_MO15_CTR)

/** \\brief  11F4, Message Object  Data Register High */
#define CAN_MO15_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00191F4u)

/** Alias (User Manual Name) for CAN_MO15_DATAH.
* To use register names with standard convension, please use CAN_MO15_DATAH.
*/
#define	CAN_MODATAH15	(CAN_MO15_DATAH)

/** \\brief  11F0, Message Object  Data Register Low */
#define CAN_MO15_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00191F0u)

/** Alias (User Manual Name) for CAN_MO15_DATAL.
* To use register names with standard convension, please use CAN_MO15_DATAL.
*/
#define	CAN_MODATAL15	(CAN_MO15_DATAL)

/** \\brief  11E0, Message Object  Function Control Register */
#define CAN_MO15_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00191E0u)

/** Alias (User Manual Name) for CAN_MO15_FCR.
* To use register names with standard convension, please use CAN_MO15_FCR.
*/
#define	CAN_MOFCR15	(CAN_MO15_FCR)

/** \\brief  11E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO15_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00191E4u)

/** Alias (User Manual Name) for CAN_MO15_FGPR.
* To use register names with standard convension, please use CAN_MO15_FGPR.
*/
#define	CAN_MOFGPR15	(CAN_MO15_FGPR)

/** \\brief  11E8, Message Object  Interrupt Pointer Register */
#define CAN_MO15_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00191E8u)

/** Alias (User Manual Name) for CAN_MO15_IPR.
* To use register names with standard convension, please use CAN_MO15_IPR.
*/
#define	CAN_MOIPR15	(CAN_MO15_IPR)

/** \\brief  11FC, Message Object  Control Register */
#define CAN_MO15_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00191FCu)

/** Alias (User Manual Name) for CAN_MO15_STAT.
* To use register names with standard convension, please use CAN_MO15_STAT.
*/
#define	CAN_MOSTAT15	(CAN_MO15_STAT)

/** \\brief  240C, Message Object  Acceptance Mask Register */
#define CAN_MO160_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A40Cu)

/** Alias (User Manual Name) for CAN_MO160_AMR.
* To use register names with standard convension, please use CAN_MO160_AMR.
*/
#define	CAN_MOAMR160	(CAN_MO160_AMR)

/** \\brief  2418, Message Object  Arbitration Register */
#define CAN_MO160_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A418u)

/** Alias (User Manual Name) for CAN_MO160_AR.
* To use register names with standard convension, please use CAN_MO160_AR.
*/
#define	CAN_MOAR160	(CAN_MO160_AR)

/** \\brief  241C, Message Object  Control Register */
#define CAN_MO160_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A41Cu)

/** Alias (User Manual Name) for CAN_MO160_CTR.
* To use register names with standard convension, please use CAN_MO160_CTR.
*/
#define	CAN_MOCTR160	(CAN_MO160_CTR)

/** \\brief  2414, Message Object  Data Register High */
#define CAN_MO160_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A414u)

/** Alias (User Manual Name) for CAN_MO160_DATAH.
* To use register names with standard convension, please use CAN_MO160_DATAH.
*/
#define	CAN_MODATAH160	(CAN_MO160_DATAH)

/** \\brief  2410, Message Object  Data Register Low */
#define CAN_MO160_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A410u)

/** Alias (User Manual Name) for CAN_MO160_DATAL.
* To use register names with standard convension, please use CAN_MO160_DATAL.
*/
#define	CAN_MODATAL160	(CAN_MO160_DATAL)

/** \\brief  2400, Message Object  Function Control Register */
#define CAN_MO160_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A400u)

/** Alias (User Manual Name) for CAN_MO160_FCR.
* To use register names with standard convension, please use CAN_MO160_FCR.
*/
#define	CAN_MOFCR160	(CAN_MO160_FCR)

/** \\brief  2404, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO160_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A404u)

/** Alias (User Manual Name) for CAN_MO160_FGPR.
* To use register names with standard convension, please use CAN_MO160_FGPR.
*/
#define	CAN_MOFGPR160	(CAN_MO160_FGPR)

/** \\brief  2408, Message Object  Interrupt Pointer Register */
#define CAN_MO160_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A408u)

/** Alias (User Manual Name) for CAN_MO160_IPR.
* To use register names with standard convension, please use CAN_MO160_IPR.
*/
#define	CAN_MOIPR160	(CAN_MO160_IPR)

/** \\brief  241C, Message Object  Control Register */
#define CAN_MO160_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A41Cu)

/** Alias (User Manual Name) for CAN_MO160_STAT.
* To use register names with standard convension, please use CAN_MO160_STAT.
*/
#define	CAN_MOSTAT160	(CAN_MO160_STAT)

/** \\brief  242C, Message Object  Acceptance Mask Register */
#define CAN_MO161_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A42Cu)

/** Alias (User Manual Name) for CAN_MO161_AMR.
* To use register names with standard convension, please use CAN_MO161_AMR.
*/
#define	CAN_MOAMR161	(CAN_MO161_AMR)

/** \\brief  2438, Message Object  Arbitration Register */
#define CAN_MO161_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A438u)

/** Alias (User Manual Name) for CAN_MO161_AR.
* To use register names with standard convension, please use CAN_MO161_AR.
*/
#define	CAN_MOAR161	(CAN_MO161_AR)

/** \\brief  243C, Message Object  Control Register */
#define CAN_MO161_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A43Cu)

/** Alias (User Manual Name) for CAN_MO161_CTR.
* To use register names with standard convension, please use CAN_MO161_CTR.
*/
#define	CAN_MOCTR161	(CAN_MO161_CTR)

/** \\brief  2434, Message Object  Data Register High */
#define CAN_MO161_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A434u)

/** Alias (User Manual Name) for CAN_MO161_DATAH.
* To use register names with standard convension, please use CAN_MO161_DATAH.
*/
#define	CAN_MODATAH161	(CAN_MO161_DATAH)

/** \\brief  2430, Message Object  Data Register Low */
#define CAN_MO161_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A430u)

/** Alias (User Manual Name) for CAN_MO161_DATAL.
* To use register names with standard convension, please use CAN_MO161_DATAL.
*/
#define	CAN_MODATAL161	(CAN_MO161_DATAL)

/** \\brief  2420, Message Object  Function Control Register */
#define CAN_MO161_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A420u)

/** Alias (User Manual Name) for CAN_MO161_FCR.
* To use register names with standard convension, please use CAN_MO161_FCR.
*/
#define	CAN_MOFCR161	(CAN_MO161_FCR)

/** \\brief  2424, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO161_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A424u)

/** Alias (User Manual Name) for CAN_MO161_FGPR.
* To use register names with standard convension, please use CAN_MO161_FGPR.
*/
#define	CAN_MOFGPR161	(CAN_MO161_FGPR)

/** \\brief  2428, Message Object  Interrupt Pointer Register */
#define CAN_MO161_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A428u)

/** Alias (User Manual Name) for CAN_MO161_IPR.
* To use register names with standard convension, please use CAN_MO161_IPR.
*/
#define	CAN_MOIPR161	(CAN_MO161_IPR)

/** \\brief  243C, Message Object  Control Register */
#define CAN_MO161_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A43Cu)

/** Alias (User Manual Name) for CAN_MO161_STAT.
* To use register names with standard convension, please use CAN_MO161_STAT.
*/
#define	CAN_MOSTAT161	(CAN_MO161_STAT)

/** \\brief  244C, Message Object  Acceptance Mask Register */
#define CAN_MO162_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A44Cu)

/** Alias (User Manual Name) for CAN_MO162_AMR.
* To use register names with standard convension, please use CAN_MO162_AMR.
*/
#define	CAN_MOAMR162	(CAN_MO162_AMR)

/** \\brief  2458, Message Object  Arbitration Register */
#define CAN_MO162_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A458u)

/** Alias (User Manual Name) for CAN_MO162_AR.
* To use register names with standard convension, please use CAN_MO162_AR.
*/
#define	CAN_MOAR162	(CAN_MO162_AR)

/** \\brief  245C, Message Object  Control Register */
#define CAN_MO162_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A45Cu)

/** Alias (User Manual Name) for CAN_MO162_CTR.
* To use register names with standard convension, please use CAN_MO162_CTR.
*/
#define	CAN_MOCTR162	(CAN_MO162_CTR)

/** \\brief  2454, Message Object  Data Register High */
#define CAN_MO162_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A454u)

/** Alias (User Manual Name) for CAN_MO162_DATAH.
* To use register names with standard convension, please use CAN_MO162_DATAH.
*/
#define	CAN_MODATAH162	(CAN_MO162_DATAH)

/** \\brief  2450, Message Object  Data Register Low */
#define CAN_MO162_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A450u)

/** Alias (User Manual Name) for CAN_MO162_DATAL.
* To use register names with standard convension, please use CAN_MO162_DATAL.
*/
#define	CAN_MODATAL162	(CAN_MO162_DATAL)

/** \\brief  2440, Message Object  Function Control Register */
#define CAN_MO162_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A440u)

/** Alias (User Manual Name) for CAN_MO162_FCR.
* To use register names with standard convension, please use CAN_MO162_FCR.
*/
#define	CAN_MOFCR162	(CAN_MO162_FCR)

/** \\brief  2444, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO162_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A444u)

/** Alias (User Manual Name) for CAN_MO162_FGPR.
* To use register names with standard convension, please use CAN_MO162_FGPR.
*/
#define	CAN_MOFGPR162	(CAN_MO162_FGPR)

/** \\brief  2448, Message Object  Interrupt Pointer Register */
#define CAN_MO162_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A448u)

/** Alias (User Manual Name) for CAN_MO162_IPR.
* To use register names with standard convension, please use CAN_MO162_IPR.
*/
#define	CAN_MOIPR162	(CAN_MO162_IPR)

/** \\brief  245C, Message Object  Control Register */
#define CAN_MO162_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A45Cu)

/** Alias (User Manual Name) for CAN_MO162_STAT.
* To use register names with standard convension, please use CAN_MO162_STAT.
*/
#define	CAN_MOSTAT162	(CAN_MO162_STAT)

/** \\brief  246C, Message Object  Acceptance Mask Register */
#define CAN_MO163_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A46Cu)

/** Alias (User Manual Name) for CAN_MO163_AMR.
* To use register names with standard convension, please use CAN_MO163_AMR.
*/
#define	CAN_MOAMR163	(CAN_MO163_AMR)

/** \\brief  2478, Message Object  Arbitration Register */
#define CAN_MO163_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A478u)

/** Alias (User Manual Name) for CAN_MO163_AR.
* To use register names with standard convension, please use CAN_MO163_AR.
*/
#define	CAN_MOAR163	(CAN_MO163_AR)

/** \\brief  247C, Message Object  Control Register */
#define CAN_MO163_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A47Cu)

/** Alias (User Manual Name) for CAN_MO163_CTR.
* To use register names with standard convension, please use CAN_MO163_CTR.
*/
#define	CAN_MOCTR163	(CAN_MO163_CTR)

/** \\brief  2474, Message Object  Data Register High */
#define CAN_MO163_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A474u)

/** Alias (User Manual Name) for CAN_MO163_DATAH.
* To use register names with standard convension, please use CAN_MO163_DATAH.
*/
#define	CAN_MODATAH163	(CAN_MO163_DATAH)

/** \\brief  2470, Message Object  Data Register Low */
#define CAN_MO163_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A470u)

/** Alias (User Manual Name) for CAN_MO163_DATAL.
* To use register names with standard convension, please use CAN_MO163_DATAL.
*/
#define	CAN_MODATAL163	(CAN_MO163_DATAL)

/** \\brief  2460, Message Object  Function Control Register */
#define CAN_MO163_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A460u)

/** Alias (User Manual Name) for CAN_MO163_FCR.
* To use register names with standard convension, please use CAN_MO163_FCR.
*/
#define	CAN_MOFCR163	(CAN_MO163_FCR)

/** \\brief  2464, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO163_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A464u)

/** Alias (User Manual Name) for CAN_MO163_FGPR.
* To use register names with standard convension, please use CAN_MO163_FGPR.
*/
#define	CAN_MOFGPR163	(CAN_MO163_FGPR)

/** \\brief  2468, Message Object  Interrupt Pointer Register */
#define CAN_MO163_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A468u)

/** Alias (User Manual Name) for CAN_MO163_IPR.
* To use register names with standard convension, please use CAN_MO163_IPR.
*/
#define	CAN_MOIPR163	(CAN_MO163_IPR)

/** \\brief  247C, Message Object  Control Register */
#define CAN_MO163_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A47Cu)

/** Alias (User Manual Name) for CAN_MO163_STAT.
* To use register names with standard convension, please use CAN_MO163_STAT.
*/
#define	CAN_MOSTAT163	(CAN_MO163_STAT)

/** \\brief  248C, Message Object  Acceptance Mask Register */
#define CAN_MO164_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A48Cu)

/** Alias (User Manual Name) for CAN_MO164_AMR.
* To use register names with standard convension, please use CAN_MO164_AMR.
*/
#define	CAN_MOAMR164	(CAN_MO164_AMR)

/** \\brief  2498, Message Object  Arbitration Register */
#define CAN_MO164_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A498u)

/** Alias (User Manual Name) for CAN_MO164_AR.
* To use register names with standard convension, please use CAN_MO164_AR.
*/
#define	CAN_MOAR164	(CAN_MO164_AR)

/** \\brief  249C, Message Object  Control Register */
#define CAN_MO164_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A49Cu)

/** Alias (User Manual Name) for CAN_MO164_CTR.
* To use register names with standard convension, please use CAN_MO164_CTR.
*/
#define	CAN_MOCTR164	(CAN_MO164_CTR)

/** \\brief  2494, Message Object  Data Register High */
#define CAN_MO164_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A494u)

/** Alias (User Manual Name) for CAN_MO164_DATAH.
* To use register names with standard convension, please use CAN_MO164_DATAH.
*/
#define	CAN_MODATAH164	(CAN_MO164_DATAH)

/** \\brief  2490, Message Object  Data Register Low */
#define CAN_MO164_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A490u)

/** Alias (User Manual Name) for CAN_MO164_DATAL.
* To use register names with standard convension, please use CAN_MO164_DATAL.
*/
#define	CAN_MODATAL164	(CAN_MO164_DATAL)

/** \\brief  2480, Message Object  Function Control Register */
#define CAN_MO164_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A480u)

/** Alias (User Manual Name) for CAN_MO164_FCR.
* To use register names with standard convension, please use CAN_MO164_FCR.
*/
#define	CAN_MOFCR164	(CAN_MO164_FCR)

/** \\brief  2484, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO164_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A484u)

/** Alias (User Manual Name) for CAN_MO164_FGPR.
* To use register names with standard convension, please use CAN_MO164_FGPR.
*/
#define	CAN_MOFGPR164	(CAN_MO164_FGPR)

/** \\brief  2488, Message Object  Interrupt Pointer Register */
#define CAN_MO164_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A488u)

/** Alias (User Manual Name) for CAN_MO164_IPR.
* To use register names with standard convension, please use CAN_MO164_IPR.
*/
#define	CAN_MOIPR164	(CAN_MO164_IPR)

/** \\brief  249C, Message Object  Control Register */
#define CAN_MO164_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A49Cu)

/** Alias (User Manual Name) for CAN_MO164_STAT.
* To use register names with standard convension, please use CAN_MO164_STAT.
*/
#define	CAN_MOSTAT164	(CAN_MO164_STAT)

/** \\brief  24AC, Message Object  Acceptance Mask Register */
#define CAN_MO165_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A4ACu)

/** Alias (User Manual Name) for CAN_MO165_AMR.
* To use register names with standard convension, please use CAN_MO165_AMR.
*/
#define	CAN_MOAMR165	(CAN_MO165_AMR)

/** \\brief  24B8, Message Object  Arbitration Register */
#define CAN_MO165_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A4B8u)

/** Alias (User Manual Name) for CAN_MO165_AR.
* To use register names with standard convension, please use CAN_MO165_AR.
*/
#define	CAN_MOAR165	(CAN_MO165_AR)

/** \\brief  24BC, Message Object  Control Register */
#define CAN_MO165_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A4BCu)

/** Alias (User Manual Name) for CAN_MO165_CTR.
* To use register names with standard convension, please use CAN_MO165_CTR.
*/
#define	CAN_MOCTR165	(CAN_MO165_CTR)

/** \\brief  24B4, Message Object  Data Register High */
#define CAN_MO165_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A4B4u)

/** Alias (User Manual Name) for CAN_MO165_DATAH.
* To use register names with standard convension, please use CAN_MO165_DATAH.
*/
#define	CAN_MODATAH165	(CAN_MO165_DATAH)

/** \\brief  24B0, Message Object  Data Register Low */
#define CAN_MO165_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A4B0u)

/** Alias (User Manual Name) for CAN_MO165_DATAL.
* To use register names with standard convension, please use CAN_MO165_DATAL.
*/
#define	CAN_MODATAL165	(CAN_MO165_DATAL)

/** \\brief  24A0, Message Object  Function Control Register */
#define CAN_MO165_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A4A0u)

/** Alias (User Manual Name) for CAN_MO165_FCR.
* To use register names with standard convension, please use CAN_MO165_FCR.
*/
#define	CAN_MOFCR165	(CAN_MO165_FCR)

/** \\brief  24A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO165_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A4A4u)

/** Alias (User Manual Name) for CAN_MO165_FGPR.
* To use register names with standard convension, please use CAN_MO165_FGPR.
*/
#define	CAN_MOFGPR165	(CAN_MO165_FGPR)

/** \\brief  24A8, Message Object  Interrupt Pointer Register */
#define CAN_MO165_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A4A8u)

/** Alias (User Manual Name) for CAN_MO165_IPR.
* To use register names with standard convension, please use CAN_MO165_IPR.
*/
#define	CAN_MOIPR165	(CAN_MO165_IPR)

/** \\brief  24BC, Message Object  Control Register */
#define CAN_MO165_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A4BCu)

/** Alias (User Manual Name) for CAN_MO165_STAT.
* To use register names with standard convension, please use CAN_MO165_STAT.
*/
#define	CAN_MOSTAT165	(CAN_MO165_STAT)

/** \\brief  24CC, Message Object  Acceptance Mask Register */
#define CAN_MO166_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A4CCu)

/** Alias (User Manual Name) for CAN_MO166_AMR.
* To use register names with standard convension, please use CAN_MO166_AMR.
*/
#define	CAN_MOAMR166	(CAN_MO166_AMR)

/** \\brief  24D8, Message Object  Arbitration Register */
#define CAN_MO166_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A4D8u)

/** Alias (User Manual Name) for CAN_MO166_AR.
* To use register names with standard convension, please use CAN_MO166_AR.
*/
#define	CAN_MOAR166	(CAN_MO166_AR)

/** \\brief  24DC, Message Object  Control Register */
#define CAN_MO166_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A4DCu)

/** Alias (User Manual Name) for CAN_MO166_CTR.
* To use register names with standard convension, please use CAN_MO166_CTR.
*/
#define	CAN_MOCTR166	(CAN_MO166_CTR)

/** \\brief  24D4, Message Object  Data Register High */
#define CAN_MO166_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A4D4u)

/** Alias (User Manual Name) for CAN_MO166_DATAH.
* To use register names with standard convension, please use CAN_MO166_DATAH.
*/
#define	CAN_MODATAH166	(CAN_MO166_DATAH)

/** \\brief  24D0, Message Object  Data Register Low */
#define CAN_MO166_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A4D0u)

/** Alias (User Manual Name) for CAN_MO166_DATAL.
* To use register names with standard convension, please use CAN_MO166_DATAL.
*/
#define	CAN_MODATAL166	(CAN_MO166_DATAL)

/** \\brief  24C0, Message Object  Function Control Register */
#define CAN_MO166_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A4C0u)

/** Alias (User Manual Name) for CAN_MO166_FCR.
* To use register names with standard convension, please use CAN_MO166_FCR.
*/
#define	CAN_MOFCR166	(CAN_MO166_FCR)

/** \\brief  24C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO166_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A4C4u)

/** Alias (User Manual Name) for CAN_MO166_FGPR.
* To use register names with standard convension, please use CAN_MO166_FGPR.
*/
#define	CAN_MOFGPR166	(CAN_MO166_FGPR)

/** \\brief  24C8, Message Object  Interrupt Pointer Register */
#define CAN_MO166_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A4C8u)

/** Alias (User Manual Name) for CAN_MO166_IPR.
* To use register names with standard convension, please use CAN_MO166_IPR.
*/
#define	CAN_MOIPR166	(CAN_MO166_IPR)

/** \\brief  24DC, Message Object  Control Register */
#define CAN_MO166_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A4DCu)

/** Alias (User Manual Name) for CAN_MO166_STAT.
* To use register names with standard convension, please use CAN_MO166_STAT.
*/
#define	CAN_MOSTAT166	(CAN_MO166_STAT)

/** \\brief  24EC, Message Object  Acceptance Mask Register */
#define CAN_MO167_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A4ECu)

/** Alias (User Manual Name) for CAN_MO167_AMR.
* To use register names with standard convension, please use CAN_MO167_AMR.
*/
#define	CAN_MOAMR167	(CAN_MO167_AMR)

/** \\brief  24F8, Message Object  Arbitration Register */
#define CAN_MO167_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A4F8u)

/** Alias (User Manual Name) for CAN_MO167_AR.
* To use register names with standard convension, please use CAN_MO167_AR.
*/
#define	CAN_MOAR167	(CAN_MO167_AR)

/** \\brief  24FC, Message Object  Control Register */
#define CAN_MO167_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A4FCu)

/** Alias (User Manual Name) for CAN_MO167_CTR.
* To use register names with standard convension, please use CAN_MO167_CTR.
*/
#define	CAN_MOCTR167	(CAN_MO167_CTR)

/** \\brief  24F4, Message Object  Data Register High */
#define CAN_MO167_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A4F4u)

/** Alias (User Manual Name) for CAN_MO167_DATAH.
* To use register names with standard convension, please use CAN_MO167_DATAH.
*/
#define	CAN_MODATAH167	(CAN_MO167_DATAH)

/** \\brief  24F0, Message Object  Data Register Low */
#define CAN_MO167_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A4F0u)

/** Alias (User Manual Name) for CAN_MO167_DATAL.
* To use register names with standard convension, please use CAN_MO167_DATAL.
*/
#define	CAN_MODATAL167	(CAN_MO167_DATAL)

/** \\brief  24E0, Message Object  Function Control Register */
#define CAN_MO167_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A4E0u)

/** Alias (User Manual Name) for CAN_MO167_FCR.
* To use register names with standard convension, please use CAN_MO167_FCR.
*/
#define	CAN_MOFCR167	(CAN_MO167_FCR)

/** \\brief  24E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO167_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A4E4u)

/** Alias (User Manual Name) for CAN_MO167_FGPR.
* To use register names with standard convension, please use CAN_MO167_FGPR.
*/
#define	CAN_MOFGPR167	(CAN_MO167_FGPR)

/** \\brief  24E8, Message Object  Interrupt Pointer Register */
#define CAN_MO167_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A4E8u)

/** Alias (User Manual Name) for CAN_MO167_IPR.
* To use register names with standard convension, please use CAN_MO167_IPR.
*/
#define	CAN_MOIPR167	(CAN_MO167_IPR)

/** \\brief  24FC, Message Object  Control Register */
#define CAN_MO167_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A4FCu)

/** Alias (User Manual Name) for CAN_MO167_STAT.
* To use register names with standard convension, please use CAN_MO167_STAT.
*/
#define	CAN_MOSTAT167	(CAN_MO167_STAT)

/** \\brief  250C, Message Object  Acceptance Mask Register */
#define CAN_MO168_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A50Cu)

/** Alias (User Manual Name) for CAN_MO168_AMR.
* To use register names with standard convension, please use CAN_MO168_AMR.
*/
#define	CAN_MOAMR168	(CAN_MO168_AMR)

/** \\brief  2518, Message Object  Arbitration Register */
#define CAN_MO168_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A518u)

/** Alias (User Manual Name) for CAN_MO168_AR.
* To use register names with standard convension, please use CAN_MO168_AR.
*/
#define	CAN_MOAR168	(CAN_MO168_AR)

/** \\brief  251C, Message Object  Control Register */
#define CAN_MO168_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A51Cu)

/** Alias (User Manual Name) for CAN_MO168_CTR.
* To use register names with standard convension, please use CAN_MO168_CTR.
*/
#define	CAN_MOCTR168	(CAN_MO168_CTR)

/** \\brief  2514, Message Object  Data Register High */
#define CAN_MO168_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A514u)

/** Alias (User Manual Name) for CAN_MO168_DATAH.
* To use register names with standard convension, please use CAN_MO168_DATAH.
*/
#define	CAN_MODATAH168	(CAN_MO168_DATAH)

/** \\brief  2510, Message Object  Data Register Low */
#define CAN_MO168_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A510u)

/** Alias (User Manual Name) for CAN_MO168_DATAL.
* To use register names with standard convension, please use CAN_MO168_DATAL.
*/
#define	CAN_MODATAL168	(CAN_MO168_DATAL)

/** \\brief  2500, Message Object  Function Control Register */
#define CAN_MO168_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A500u)

/** Alias (User Manual Name) for CAN_MO168_FCR.
* To use register names with standard convension, please use CAN_MO168_FCR.
*/
#define	CAN_MOFCR168	(CAN_MO168_FCR)

/** \\brief  2504, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO168_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A504u)

/** Alias (User Manual Name) for CAN_MO168_FGPR.
* To use register names with standard convension, please use CAN_MO168_FGPR.
*/
#define	CAN_MOFGPR168	(CAN_MO168_FGPR)

/** \\brief  2508, Message Object  Interrupt Pointer Register */
#define CAN_MO168_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A508u)

/** Alias (User Manual Name) for CAN_MO168_IPR.
* To use register names with standard convension, please use CAN_MO168_IPR.
*/
#define	CAN_MOIPR168	(CAN_MO168_IPR)

/** \\brief  251C, Message Object  Control Register */
#define CAN_MO168_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A51Cu)

/** Alias (User Manual Name) for CAN_MO168_STAT.
* To use register names with standard convension, please use CAN_MO168_STAT.
*/
#define	CAN_MOSTAT168	(CAN_MO168_STAT)

/** \\brief  252C, Message Object  Acceptance Mask Register */
#define CAN_MO169_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A52Cu)

/** Alias (User Manual Name) for CAN_MO169_AMR.
* To use register names with standard convension, please use CAN_MO169_AMR.
*/
#define	CAN_MOAMR169	(CAN_MO169_AMR)

/** \\brief  2538, Message Object  Arbitration Register */
#define CAN_MO169_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A538u)

/** Alias (User Manual Name) for CAN_MO169_AR.
* To use register names with standard convension, please use CAN_MO169_AR.
*/
#define	CAN_MOAR169	(CAN_MO169_AR)

/** \\brief  253C, Message Object  Control Register */
#define CAN_MO169_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A53Cu)

/** Alias (User Manual Name) for CAN_MO169_CTR.
* To use register names with standard convension, please use CAN_MO169_CTR.
*/
#define	CAN_MOCTR169	(CAN_MO169_CTR)

/** \\brief  2534, Message Object  Data Register High */
#define CAN_MO169_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A534u)

/** Alias (User Manual Name) for CAN_MO169_DATAH.
* To use register names with standard convension, please use CAN_MO169_DATAH.
*/
#define	CAN_MODATAH169	(CAN_MO169_DATAH)

/** \\brief  2530, Message Object  Data Register Low */
#define CAN_MO169_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A530u)

/** Alias (User Manual Name) for CAN_MO169_DATAL.
* To use register names with standard convension, please use CAN_MO169_DATAL.
*/
#define	CAN_MODATAL169	(CAN_MO169_DATAL)

/** \\brief  2520, Message Object  Function Control Register */
#define CAN_MO169_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A520u)

/** Alias (User Manual Name) for CAN_MO169_FCR.
* To use register names with standard convension, please use CAN_MO169_FCR.
*/
#define	CAN_MOFCR169	(CAN_MO169_FCR)

/** \\brief  2524, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO169_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A524u)

/** Alias (User Manual Name) for CAN_MO169_FGPR.
* To use register names with standard convension, please use CAN_MO169_FGPR.
*/
#define	CAN_MOFGPR169	(CAN_MO169_FGPR)

/** \\brief  2528, Message Object  Interrupt Pointer Register */
#define CAN_MO169_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A528u)

/** Alias (User Manual Name) for CAN_MO169_IPR.
* To use register names with standard convension, please use CAN_MO169_IPR.
*/
#define	CAN_MOIPR169	(CAN_MO169_IPR)

/** \\brief  253C, Message Object  Control Register */
#define CAN_MO169_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A53Cu)

/** Alias (User Manual Name) for CAN_MO169_STAT.
* To use register names with standard convension, please use CAN_MO169_STAT.
*/
#define	CAN_MOSTAT169	(CAN_MO169_STAT)

/** \\brief  120C, Message Object  Acceptance Mask Register */
#define CAN_MO16_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001920Cu)

/** Alias (User Manual Name) for CAN_MO16_AMR.
* To use register names with standard convension, please use CAN_MO16_AMR.
*/
#define	CAN_MOAMR16	(CAN_MO16_AMR)

/** \\brief  1218, Message Object  Arbitration Register */
#define CAN_MO16_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019218u)

/** Alias (User Manual Name) for CAN_MO16_AR.
* To use register names with standard convension, please use CAN_MO16_AR.
*/
#define	CAN_MOAR16	(CAN_MO16_AR)

/** \\brief  121C, Message Object  Control Register */
#define CAN_MO16_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001921Cu)

/** Alias (User Manual Name) for CAN_MO16_CTR.
* To use register names with standard convension, please use CAN_MO16_CTR.
*/
#define	CAN_MOCTR16	(CAN_MO16_CTR)

/** \\brief  1214, Message Object  Data Register High */
#define CAN_MO16_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019214u)

/** Alias (User Manual Name) for CAN_MO16_DATAH.
* To use register names with standard convension, please use CAN_MO16_DATAH.
*/
#define	CAN_MODATAH16	(CAN_MO16_DATAH)

/** \\brief  1210, Message Object  Data Register Low */
#define CAN_MO16_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019210u)

/** Alias (User Manual Name) for CAN_MO16_DATAL.
* To use register names with standard convension, please use CAN_MO16_DATAL.
*/
#define	CAN_MODATAL16	(CAN_MO16_DATAL)

/** \\brief  1200, Message Object  Function Control Register */
#define CAN_MO16_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019200u)

/** Alias (User Manual Name) for CAN_MO16_FCR.
* To use register names with standard convension, please use CAN_MO16_FCR.
*/
#define	CAN_MOFCR16	(CAN_MO16_FCR)

/** \\brief  1204, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO16_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019204u)

/** Alias (User Manual Name) for CAN_MO16_FGPR.
* To use register names with standard convension, please use CAN_MO16_FGPR.
*/
#define	CAN_MOFGPR16	(CAN_MO16_FGPR)

/** \\brief  1208, Message Object  Interrupt Pointer Register */
#define CAN_MO16_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019208u)

/** Alias (User Manual Name) for CAN_MO16_IPR.
* To use register names with standard convension, please use CAN_MO16_IPR.
*/
#define	CAN_MOIPR16	(CAN_MO16_IPR)

/** \\brief  121C, Message Object  Control Register */
#define CAN_MO16_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001921Cu)

/** Alias (User Manual Name) for CAN_MO16_STAT.
* To use register names with standard convension, please use CAN_MO16_STAT.
*/
#define	CAN_MOSTAT16	(CAN_MO16_STAT)

/** \\brief  254C, Message Object  Acceptance Mask Register */
#define CAN_MO170_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A54Cu)

/** Alias (User Manual Name) for CAN_MO170_AMR.
* To use register names with standard convension, please use CAN_MO170_AMR.
*/
#define	CAN_MOAMR170	(CAN_MO170_AMR)

/** \\brief  2558, Message Object  Arbitration Register */
#define CAN_MO170_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A558u)

/** Alias (User Manual Name) for CAN_MO170_AR.
* To use register names with standard convension, please use CAN_MO170_AR.
*/
#define	CAN_MOAR170	(CAN_MO170_AR)

/** \\brief  255C, Message Object  Control Register */
#define CAN_MO170_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A55Cu)

/** Alias (User Manual Name) for CAN_MO170_CTR.
* To use register names with standard convension, please use CAN_MO170_CTR.
*/
#define	CAN_MOCTR170	(CAN_MO170_CTR)

/** \\brief  2554, Message Object  Data Register High */
#define CAN_MO170_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A554u)

/** Alias (User Manual Name) for CAN_MO170_DATAH.
* To use register names with standard convension, please use CAN_MO170_DATAH.
*/
#define	CAN_MODATAH170	(CAN_MO170_DATAH)

/** \\brief  2550, Message Object  Data Register Low */
#define CAN_MO170_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A550u)

/** Alias (User Manual Name) for CAN_MO170_DATAL.
* To use register names with standard convension, please use CAN_MO170_DATAL.
*/
#define	CAN_MODATAL170	(CAN_MO170_DATAL)

/** \\brief  2540, Message Object  Function Control Register */
#define CAN_MO170_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A540u)

/** Alias (User Manual Name) for CAN_MO170_FCR.
* To use register names with standard convension, please use CAN_MO170_FCR.
*/
#define	CAN_MOFCR170	(CAN_MO170_FCR)

/** \\brief  2544, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO170_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A544u)

/** Alias (User Manual Name) for CAN_MO170_FGPR.
* To use register names with standard convension, please use CAN_MO170_FGPR.
*/
#define	CAN_MOFGPR170	(CAN_MO170_FGPR)

/** \\brief  2548, Message Object  Interrupt Pointer Register */
#define CAN_MO170_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A548u)

/** Alias (User Manual Name) for CAN_MO170_IPR.
* To use register names with standard convension, please use CAN_MO170_IPR.
*/
#define	CAN_MOIPR170	(CAN_MO170_IPR)

/** \\brief  255C, Message Object  Control Register */
#define CAN_MO170_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A55Cu)

/** Alias (User Manual Name) for CAN_MO170_STAT.
* To use register names with standard convension, please use CAN_MO170_STAT.
*/
#define	CAN_MOSTAT170	(CAN_MO170_STAT)

/** \\brief  256C, Message Object  Acceptance Mask Register */
#define CAN_MO171_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A56Cu)

/** Alias (User Manual Name) for CAN_MO171_AMR.
* To use register names with standard convension, please use CAN_MO171_AMR.
*/
#define	CAN_MOAMR171	(CAN_MO171_AMR)

/** \\brief  2578, Message Object  Arbitration Register */
#define CAN_MO171_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A578u)

/** Alias (User Manual Name) for CAN_MO171_AR.
* To use register names with standard convension, please use CAN_MO171_AR.
*/
#define	CAN_MOAR171	(CAN_MO171_AR)

/** \\brief  257C, Message Object  Control Register */
#define CAN_MO171_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A57Cu)

/** Alias (User Manual Name) for CAN_MO171_CTR.
* To use register names with standard convension, please use CAN_MO171_CTR.
*/
#define	CAN_MOCTR171	(CAN_MO171_CTR)

/** \\brief  2574, Message Object  Data Register High */
#define CAN_MO171_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A574u)

/** Alias (User Manual Name) for CAN_MO171_DATAH.
* To use register names with standard convension, please use CAN_MO171_DATAH.
*/
#define	CAN_MODATAH171	(CAN_MO171_DATAH)

/** \\brief  2570, Message Object  Data Register Low */
#define CAN_MO171_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A570u)

/** Alias (User Manual Name) for CAN_MO171_DATAL.
* To use register names with standard convension, please use CAN_MO171_DATAL.
*/
#define	CAN_MODATAL171	(CAN_MO171_DATAL)

/** \\brief  2560, Message Object  Function Control Register */
#define CAN_MO171_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A560u)

/** Alias (User Manual Name) for CAN_MO171_FCR.
* To use register names with standard convension, please use CAN_MO171_FCR.
*/
#define	CAN_MOFCR171	(CAN_MO171_FCR)

/** \\brief  2564, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO171_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A564u)

/** Alias (User Manual Name) for CAN_MO171_FGPR.
* To use register names with standard convension, please use CAN_MO171_FGPR.
*/
#define	CAN_MOFGPR171	(CAN_MO171_FGPR)

/** \\brief  2568, Message Object  Interrupt Pointer Register */
#define CAN_MO171_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A568u)

/** Alias (User Manual Name) for CAN_MO171_IPR.
* To use register names with standard convension, please use CAN_MO171_IPR.
*/
#define	CAN_MOIPR171	(CAN_MO171_IPR)

/** \\brief  257C, Message Object  Control Register */
#define CAN_MO171_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A57Cu)

/** Alias (User Manual Name) for CAN_MO171_STAT.
* To use register names with standard convension, please use CAN_MO171_STAT.
*/
#define	CAN_MOSTAT171	(CAN_MO171_STAT)

/** \\brief  258C, Message Object  Acceptance Mask Register */
#define CAN_MO172_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A58Cu)

/** Alias (User Manual Name) for CAN_MO172_AMR.
* To use register names with standard convension, please use CAN_MO172_AMR.
*/
#define	CAN_MOAMR172	(CAN_MO172_AMR)

/** \\brief  2598, Message Object  Arbitration Register */
#define CAN_MO172_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A598u)

/** Alias (User Manual Name) for CAN_MO172_AR.
* To use register names with standard convension, please use CAN_MO172_AR.
*/
#define	CAN_MOAR172	(CAN_MO172_AR)

/** \\brief  259C, Message Object  Control Register */
#define CAN_MO172_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A59Cu)

/** Alias (User Manual Name) for CAN_MO172_CTR.
* To use register names with standard convension, please use CAN_MO172_CTR.
*/
#define	CAN_MOCTR172	(CAN_MO172_CTR)

/** \\brief  2594, Message Object  Data Register High */
#define CAN_MO172_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A594u)

/** Alias (User Manual Name) for CAN_MO172_DATAH.
* To use register names with standard convension, please use CAN_MO172_DATAH.
*/
#define	CAN_MODATAH172	(CAN_MO172_DATAH)

/** \\brief  2590, Message Object  Data Register Low */
#define CAN_MO172_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A590u)

/** Alias (User Manual Name) for CAN_MO172_DATAL.
* To use register names with standard convension, please use CAN_MO172_DATAL.
*/
#define	CAN_MODATAL172	(CAN_MO172_DATAL)

/** \\brief  2580, Message Object  Function Control Register */
#define CAN_MO172_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A580u)

/** Alias (User Manual Name) for CAN_MO172_FCR.
* To use register names with standard convension, please use CAN_MO172_FCR.
*/
#define	CAN_MOFCR172	(CAN_MO172_FCR)

/** \\brief  2584, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO172_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A584u)

/** Alias (User Manual Name) for CAN_MO172_FGPR.
* To use register names with standard convension, please use CAN_MO172_FGPR.
*/
#define	CAN_MOFGPR172	(CAN_MO172_FGPR)

/** \\brief  2588, Message Object  Interrupt Pointer Register */
#define CAN_MO172_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A588u)

/** Alias (User Manual Name) for CAN_MO172_IPR.
* To use register names with standard convension, please use CAN_MO172_IPR.
*/
#define	CAN_MOIPR172	(CAN_MO172_IPR)

/** \\brief  259C, Message Object  Control Register */
#define CAN_MO172_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A59Cu)

/** Alias (User Manual Name) for CAN_MO172_STAT.
* To use register names with standard convension, please use CAN_MO172_STAT.
*/
#define	CAN_MOSTAT172	(CAN_MO172_STAT)

/** \\brief  25AC, Message Object  Acceptance Mask Register */
#define CAN_MO173_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A5ACu)

/** Alias (User Manual Name) for CAN_MO173_AMR.
* To use register names with standard convension, please use CAN_MO173_AMR.
*/
#define	CAN_MOAMR173	(CAN_MO173_AMR)

/** \\brief  25B8, Message Object  Arbitration Register */
#define CAN_MO173_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A5B8u)

/** Alias (User Manual Name) for CAN_MO173_AR.
* To use register names with standard convension, please use CAN_MO173_AR.
*/
#define	CAN_MOAR173	(CAN_MO173_AR)

/** \\brief  25BC, Message Object  Control Register */
#define CAN_MO173_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A5BCu)

/** Alias (User Manual Name) for CAN_MO173_CTR.
* To use register names with standard convension, please use CAN_MO173_CTR.
*/
#define	CAN_MOCTR173	(CAN_MO173_CTR)

/** \\brief  25B4, Message Object  Data Register High */
#define CAN_MO173_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A5B4u)

/** Alias (User Manual Name) for CAN_MO173_DATAH.
* To use register names with standard convension, please use CAN_MO173_DATAH.
*/
#define	CAN_MODATAH173	(CAN_MO173_DATAH)

/** \\brief  25B0, Message Object  Data Register Low */
#define CAN_MO173_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A5B0u)

/** Alias (User Manual Name) for CAN_MO173_DATAL.
* To use register names with standard convension, please use CAN_MO173_DATAL.
*/
#define	CAN_MODATAL173	(CAN_MO173_DATAL)

/** \\brief  25A0, Message Object  Function Control Register */
#define CAN_MO173_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A5A0u)

/** Alias (User Manual Name) for CAN_MO173_FCR.
* To use register names with standard convension, please use CAN_MO173_FCR.
*/
#define	CAN_MOFCR173	(CAN_MO173_FCR)

/** \\brief  25A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO173_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A5A4u)

/** Alias (User Manual Name) for CAN_MO173_FGPR.
* To use register names with standard convension, please use CAN_MO173_FGPR.
*/
#define	CAN_MOFGPR173	(CAN_MO173_FGPR)

/** \\brief  25A8, Message Object  Interrupt Pointer Register */
#define CAN_MO173_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A5A8u)

/** Alias (User Manual Name) for CAN_MO173_IPR.
* To use register names with standard convension, please use CAN_MO173_IPR.
*/
#define	CAN_MOIPR173	(CAN_MO173_IPR)

/** \\brief  25BC, Message Object  Control Register */
#define CAN_MO173_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A5BCu)

/** Alias (User Manual Name) for CAN_MO173_STAT.
* To use register names with standard convension, please use CAN_MO173_STAT.
*/
#define	CAN_MOSTAT173	(CAN_MO173_STAT)

/** \\brief  25CC, Message Object  Acceptance Mask Register */
#define CAN_MO174_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A5CCu)

/** Alias (User Manual Name) for CAN_MO174_AMR.
* To use register names with standard convension, please use CAN_MO174_AMR.
*/
#define	CAN_MOAMR174	(CAN_MO174_AMR)

/** \\brief  25D8, Message Object  Arbitration Register */
#define CAN_MO174_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A5D8u)

/** Alias (User Manual Name) for CAN_MO174_AR.
* To use register names with standard convension, please use CAN_MO174_AR.
*/
#define	CAN_MOAR174	(CAN_MO174_AR)

/** \\brief  25DC, Message Object  Control Register */
#define CAN_MO174_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A5DCu)

/** Alias (User Manual Name) for CAN_MO174_CTR.
* To use register names with standard convension, please use CAN_MO174_CTR.
*/
#define	CAN_MOCTR174	(CAN_MO174_CTR)

/** \\brief  25D4, Message Object  Data Register High */
#define CAN_MO174_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A5D4u)

/** Alias (User Manual Name) for CAN_MO174_DATAH.
* To use register names with standard convension, please use CAN_MO174_DATAH.
*/
#define	CAN_MODATAH174	(CAN_MO174_DATAH)

/** \\brief  25D0, Message Object  Data Register Low */
#define CAN_MO174_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A5D0u)

/** Alias (User Manual Name) for CAN_MO174_DATAL.
* To use register names with standard convension, please use CAN_MO174_DATAL.
*/
#define	CAN_MODATAL174	(CAN_MO174_DATAL)

/** \\brief  25C0, Message Object  Function Control Register */
#define CAN_MO174_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A5C0u)

/** Alias (User Manual Name) for CAN_MO174_FCR.
* To use register names with standard convension, please use CAN_MO174_FCR.
*/
#define	CAN_MOFCR174	(CAN_MO174_FCR)

/** \\brief  25C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO174_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A5C4u)

/** Alias (User Manual Name) for CAN_MO174_FGPR.
* To use register names with standard convension, please use CAN_MO174_FGPR.
*/
#define	CAN_MOFGPR174	(CAN_MO174_FGPR)

/** \\brief  25C8, Message Object  Interrupt Pointer Register */
#define CAN_MO174_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A5C8u)

/** Alias (User Manual Name) for CAN_MO174_IPR.
* To use register names with standard convension, please use CAN_MO174_IPR.
*/
#define	CAN_MOIPR174	(CAN_MO174_IPR)

/** \\brief  25DC, Message Object  Control Register */
#define CAN_MO174_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A5DCu)

/** Alias (User Manual Name) for CAN_MO174_STAT.
* To use register names with standard convension, please use CAN_MO174_STAT.
*/
#define	CAN_MOSTAT174	(CAN_MO174_STAT)

/** \\brief  25EC, Message Object  Acceptance Mask Register */
#define CAN_MO175_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A5ECu)

/** Alias (User Manual Name) for CAN_MO175_AMR.
* To use register names with standard convension, please use CAN_MO175_AMR.
*/
#define	CAN_MOAMR175	(CAN_MO175_AMR)

/** \\brief  25F8, Message Object  Arbitration Register */
#define CAN_MO175_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A5F8u)

/** Alias (User Manual Name) for CAN_MO175_AR.
* To use register names with standard convension, please use CAN_MO175_AR.
*/
#define	CAN_MOAR175	(CAN_MO175_AR)

/** \\brief  25FC, Message Object  Control Register */
#define CAN_MO175_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A5FCu)

/** Alias (User Manual Name) for CAN_MO175_CTR.
* To use register names with standard convension, please use CAN_MO175_CTR.
*/
#define	CAN_MOCTR175	(CAN_MO175_CTR)

/** \\brief  25F4, Message Object  Data Register High */
#define CAN_MO175_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A5F4u)

/** Alias (User Manual Name) for CAN_MO175_DATAH.
* To use register names with standard convension, please use CAN_MO175_DATAH.
*/
#define	CAN_MODATAH175	(CAN_MO175_DATAH)

/** \\brief  25F0, Message Object  Data Register Low */
#define CAN_MO175_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A5F0u)

/** Alias (User Manual Name) for CAN_MO175_DATAL.
* To use register names with standard convension, please use CAN_MO175_DATAL.
*/
#define	CAN_MODATAL175	(CAN_MO175_DATAL)

/** \\brief  25E0, Message Object  Function Control Register */
#define CAN_MO175_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A5E0u)

/** Alias (User Manual Name) for CAN_MO175_FCR.
* To use register names with standard convension, please use CAN_MO175_FCR.
*/
#define	CAN_MOFCR175	(CAN_MO175_FCR)

/** \\brief  25E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO175_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A5E4u)

/** Alias (User Manual Name) for CAN_MO175_FGPR.
* To use register names with standard convension, please use CAN_MO175_FGPR.
*/
#define	CAN_MOFGPR175	(CAN_MO175_FGPR)

/** \\brief  25E8, Message Object  Interrupt Pointer Register */
#define CAN_MO175_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A5E8u)

/** Alias (User Manual Name) for CAN_MO175_IPR.
* To use register names with standard convension, please use CAN_MO175_IPR.
*/
#define	CAN_MOIPR175	(CAN_MO175_IPR)

/** \\brief  25FC, Message Object  Control Register */
#define CAN_MO175_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A5FCu)

/** Alias (User Manual Name) for CAN_MO175_STAT.
* To use register names with standard convension, please use CAN_MO175_STAT.
*/
#define	CAN_MOSTAT175	(CAN_MO175_STAT)

/** \\brief  260C, Message Object  Acceptance Mask Register */
#define CAN_MO176_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A60Cu)

/** Alias (User Manual Name) for CAN_MO176_AMR.
* To use register names with standard convension, please use CAN_MO176_AMR.
*/
#define	CAN_MOAMR176	(CAN_MO176_AMR)

/** \\brief  2618, Message Object  Arbitration Register */
#define CAN_MO176_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A618u)

/** Alias (User Manual Name) for CAN_MO176_AR.
* To use register names with standard convension, please use CAN_MO176_AR.
*/
#define	CAN_MOAR176	(CAN_MO176_AR)

/** \\brief  261C, Message Object  Control Register */
#define CAN_MO176_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A61Cu)

/** Alias (User Manual Name) for CAN_MO176_CTR.
* To use register names with standard convension, please use CAN_MO176_CTR.
*/
#define	CAN_MOCTR176	(CAN_MO176_CTR)

/** \\brief  2614, Message Object  Data Register High */
#define CAN_MO176_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A614u)

/** Alias (User Manual Name) for CAN_MO176_DATAH.
* To use register names with standard convension, please use CAN_MO176_DATAH.
*/
#define	CAN_MODATAH176	(CAN_MO176_DATAH)

/** \\brief  2610, Message Object  Data Register Low */
#define CAN_MO176_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A610u)

/** Alias (User Manual Name) for CAN_MO176_DATAL.
* To use register names with standard convension, please use CAN_MO176_DATAL.
*/
#define	CAN_MODATAL176	(CAN_MO176_DATAL)

/** \\brief  2600, Message Object  Function Control Register */
#define CAN_MO176_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A600u)

/** Alias (User Manual Name) for CAN_MO176_FCR.
* To use register names with standard convension, please use CAN_MO176_FCR.
*/
#define	CAN_MOFCR176	(CAN_MO176_FCR)

/** \\brief  2604, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO176_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A604u)

/** Alias (User Manual Name) for CAN_MO176_FGPR.
* To use register names with standard convension, please use CAN_MO176_FGPR.
*/
#define	CAN_MOFGPR176	(CAN_MO176_FGPR)

/** \\brief  2608, Message Object  Interrupt Pointer Register */
#define CAN_MO176_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A608u)

/** Alias (User Manual Name) for CAN_MO176_IPR.
* To use register names with standard convension, please use CAN_MO176_IPR.
*/
#define	CAN_MOIPR176	(CAN_MO176_IPR)

/** \\brief  261C, Message Object  Control Register */
#define CAN_MO176_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A61Cu)

/** Alias (User Manual Name) for CAN_MO176_STAT.
* To use register names with standard convension, please use CAN_MO176_STAT.
*/
#define	CAN_MOSTAT176	(CAN_MO176_STAT)

/** \\brief  262C, Message Object  Acceptance Mask Register */
#define CAN_MO177_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A62Cu)

/** Alias (User Manual Name) for CAN_MO177_AMR.
* To use register names with standard convension, please use CAN_MO177_AMR.
*/
#define	CAN_MOAMR177	(CAN_MO177_AMR)

/** \\brief  2638, Message Object  Arbitration Register */
#define CAN_MO177_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A638u)

/** Alias (User Manual Name) for CAN_MO177_AR.
* To use register names with standard convension, please use CAN_MO177_AR.
*/
#define	CAN_MOAR177	(CAN_MO177_AR)

/** \\brief  263C, Message Object  Control Register */
#define CAN_MO177_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A63Cu)

/** Alias (User Manual Name) for CAN_MO177_CTR.
* To use register names with standard convension, please use CAN_MO177_CTR.
*/
#define	CAN_MOCTR177	(CAN_MO177_CTR)

/** \\brief  2634, Message Object  Data Register High */
#define CAN_MO177_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A634u)

/** Alias (User Manual Name) for CAN_MO177_DATAH.
* To use register names with standard convension, please use CAN_MO177_DATAH.
*/
#define	CAN_MODATAH177	(CAN_MO177_DATAH)

/** \\brief  2630, Message Object  Data Register Low */
#define CAN_MO177_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A630u)

/** Alias (User Manual Name) for CAN_MO177_DATAL.
* To use register names with standard convension, please use CAN_MO177_DATAL.
*/
#define	CAN_MODATAL177	(CAN_MO177_DATAL)

/** \\brief  2620, Message Object  Function Control Register */
#define CAN_MO177_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A620u)

/** Alias (User Manual Name) for CAN_MO177_FCR.
* To use register names with standard convension, please use CAN_MO177_FCR.
*/
#define	CAN_MOFCR177	(CAN_MO177_FCR)

/** \\brief  2624, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO177_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A624u)

/** Alias (User Manual Name) for CAN_MO177_FGPR.
* To use register names with standard convension, please use CAN_MO177_FGPR.
*/
#define	CAN_MOFGPR177	(CAN_MO177_FGPR)

/** \\brief  2628, Message Object  Interrupt Pointer Register */
#define CAN_MO177_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A628u)

/** Alias (User Manual Name) for CAN_MO177_IPR.
* To use register names with standard convension, please use CAN_MO177_IPR.
*/
#define	CAN_MOIPR177	(CAN_MO177_IPR)

/** \\brief  263C, Message Object  Control Register */
#define CAN_MO177_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A63Cu)

/** Alias (User Manual Name) for CAN_MO177_STAT.
* To use register names with standard convension, please use CAN_MO177_STAT.
*/
#define	CAN_MOSTAT177	(CAN_MO177_STAT)

/** \\brief  264C, Message Object  Acceptance Mask Register */
#define CAN_MO178_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A64Cu)

/** Alias (User Manual Name) for CAN_MO178_AMR.
* To use register names with standard convension, please use CAN_MO178_AMR.
*/
#define	CAN_MOAMR178	(CAN_MO178_AMR)

/** \\brief  2658, Message Object  Arbitration Register */
#define CAN_MO178_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A658u)

/** Alias (User Manual Name) for CAN_MO178_AR.
* To use register names with standard convension, please use CAN_MO178_AR.
*/
#define	CAN_MOAR178	(CAN_MO178_AR)

/** \\brief  265C, Message Object  Control Register */
#define CAN_MO178_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A65Cu)

/** Alias (User Manual Name) for CAN_MO178_CTR.
* To use register names with standard convension, please use CAN_MO178_CTR.
*/
#define	CAN_MOCTR178	(CAN_MO178_CTR)

/** \\brief  2654, Message Object  Data Register High */
#define CAN_MO178_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A654u)

/** Alias (User Manual Name) for CAN_MO178_DATAH.
* To use register names with standard convension, please use CAN_MO178_DATAH.
*/
#define	CAN_MODATAH178	(CAN_MO178_DATAH)

/** \\brief  2650, Message Object  Data Register Low */
#define CAN_MO178_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A650u)

/** Alias (User Manual Name) for CAN_MO178_DATAL.
* To use register names with standard convension, please use CAN_MO178_DATAL.
*/
#define	CAN_MODATAL178	(CAN_MO178_DATAL)

/** \\brief  2640, Message Object  Function Control Register */
#define CAN_MO178_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A640u)

/** Alias (User Manual Name) for CAN_MO178_FCR.
* To use register names with standard convension, please use CAN_MO178_FCR.
*/
#define	CAN_MOFCR178	(CAN_MO178_FCR)

/** \\brief  2644, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO178_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A644u)

/** Alias (User Manual Name) for CAN_MO178_FGPR.
* To use register names with standard convension, please use CAN_MO178_FGPR.
*/
#define	CAN_MOFGPR178	(CAN_MO178_FGPR)

/** \\brief  2648, Message Object  Interrupt Pointer Register */
#define CAN_MO178_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A648u)

/** Alias (User Manual Name) for CAN_MO178_IPR.
* To use register names with standard convension, please use CAN_MO178_IPR.
*/
#define	CAN_MOIPR178	(CAN_MO178_IPR)

/** \\brief  265C, Message Object  Control Register */
#define CAN_MO178_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A65Cu)

/** Alias (User Manual Name) for CAN_MO178_STAT.
* To use register names with standard convension, please use CAN_MO178_STAT.
*/
#define	CAN_MOSTAT178	(CAN_MO178_STAT)

/** \\brief  266C, Message Object  Acceptance Mask Register */
#define CAN_MO179_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A66Cu)

/** Alias (User Manual Name) for CAN_MO179_AMR.
* To use register names with standard convension, please use CAN_MO179_AMR.
*/
#define	CAN_MOAMR179	(CAN_MO179_AMR)

/** \\brief  2678, Message Object  Arbitration Register */
#define CAN_MO179_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A678u)

/** Alias (User Manual Name) for CAN_MO179_AR.
* To use register names with standard convension, please use CAN_MO179_AR.
*/
#define	CAN_MOAR179	(CAN_MO179_AR)

/** \\brief  267C, Message Object  Control Register */
#define CAN_MO179_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A67Cu)

/** Alias (User Manual Name) for CAN_MO179_CTR.
* To use register names with standard convension, please use CAN_MO179_CTR.
*/
#define	CAN_MOCTR179	(CAN_MO179_CTR)

/** \\brief  2674, Message Object  Data Register High */
#define CAN_MO179_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A674u)

/** Alias (User Manual Name) for CAN_MO179_DATAH.
* To use register names with standard convension, please use CAN_MO179_DATAH.
*/
#define	CAN_MODATAH179	(CAN_MO179_DATAH)

/** \\brief  2670, Message Object  Data Register Low */
#define CAN_MO179_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A670u)

/** Alias (User Manual Name) for CAN_MO179_DATAL.
* To use register names with standard convension, please use CAN_MO179_DATAL.
*/
#define	CAN_MODATAL179	(CAN_MO179_DATAL)

/** \\brief  2660, Message Object  Function Control Register */
#define CAN_MO179_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A660u)

/** Alias (User Manual Name) for CAN_MO179_FCR.
* To use register names with standard convension, please use CAN_MO179_FCR.
*/
#define	CAN_MOFCR179	(CAN_MO179_FCR)

/** \\brief  2664, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO179_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A664u)

/** Alias (User Manual Name) for CAN_MO179_FGPR.
* To use register names with standard convension, please use CAN_MO179_FGPR.
*/
#define	CAN_MOFGPR179	(CAN_MO179_FGPR)

/** \\brief  2668, Message Object  Interrupt Pointer Register */
#define CAN_MO179_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A668u)

/** Alias (User Manual Name) for CAN_MO179_IPR.
* To use register names with standard convension, please use CAN_MO179_IPR.
*/
#define	CAN_MOIPR179	(CAN_MO179_IPR)

/** \\brief  267C, Message Object  Control Register */
#define CAN_MO179_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A67Cu)

/** Alias (User Manual Name) for CAN_MO179_STAT.
* To use register names with standard convension, please use CAN_MO179_STAT.
*/
#define	CAN_MOSTAT179	(CAN_MO179_STAT)

/** \\brief  122C, Message Object  Acceptance Mask Register */
#define CAN_MO17_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001922Cu)

/** Alias (User Manual Name) for CAN_MO17_AMR.
* To use register names with standard convension, please use CAN_MO17_AMR.
*/
#define	CAN_MOAMR17	(CAN_MO17_AMR)

/** \\brief  1238, Message Object  Arbitration Register */
#define CAN_MO17_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019238u)

/** Alias (User Manual Name) for CAN_MO17_AR.
* To use register names with standard convension, please use CAN_MO17_AR.
*/
#define	CAN_MOAR17	(CAN_MO17_AR)

/** \\brief  123C, Message Object  Control Register */
#define CAN_MO17_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001923Cu)

/** Alias (User Manual Name) for CAN_MO17_CTR.
* To use register names with standard convension, please use CAN_MO17_CTR.
*/
#define	CAN_MOCTR17	(CAN_MO17_CTR)

/** \\brief  1234, Message Object  Data Register High */
#define CAN_MO17_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019234u)

/** Alias (User Manual Name) for CAN_MO17_DATAH.
* To use register names with standard convension, please use CAN_MO17_DATAH.
*/
#define	CAN_MODATAH17	(CAN_MO17_DATAH)

/** \\brief  1230, Message Object  Data Register Low */
#define CAN_MO17_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019230u)

/** Alias (User Manual Name) for CAN_MO17_DATAL.
* To use register names with standard convension, please use CAN_MO17_DATAL.
*/
#define	CAN_MODATAL17	(CAN_MO17_DATAL)

/** \\brief  1220, Message Object  Function Control Register */
#define CAN_MO17_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019220u)

/** Alias (User Manual Name) for CAN_MO17_FCR.
* To use register names with standard convension, please use CAN_MO17_FCR.
*/
#define	CAN_MOFCR17	(CAN_MO17_FCR)

/** \\brief  1224, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO17_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019224u)

/** Alias (User Manual Name) for CAN_MO17_FGPR.
* To use register names with standard convension, please use CAN_MO17_FGPR.
*/
#define	CAN_MOFGPR17	(CAN_MO17_FGPR)

/** \\brief  1228, Message Object  Interrupt Pointer Register */
#define CAN_MO17_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019228u)

/** Alias (User Manual Name) for CAN_MO17_IPR.
* To use register names with standard convension, please use CAN_MO17_IPR.
*/
#define	CAN_MOIPR17	(CAN_MO17_IPR)

/** \\brief  123C, Message Object  Control Register */
#define CAN_MO17_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001923Cu)

/** Alias (User Manual Name) for CAN_MO17_STAT.
* To use register names with standard convension, please use CAN_MO17_STAT.
*/
#define	CAN_MOSTAT17	(CAN_MO17_STAT)

/** \\brief  268C, Message Object  Acceptance Mask Register */
#define CAN_MO180_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A68Cu)

/** Alias (User Manual Name) for CAN_MO180_AMR.
* To use register names with standard convension, please use CAN_MO180_AMR.
*/
#define	CAN_MOAMR180	(CAN_MO180_AMR)

/** \\brief  2698, Message Object  Arbitration Register */
#define CAN_MO180_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A698u)

/** Alias (User Manual Name) for CAN_MO180_AR.
* To use register names with standard convension, please use CAN_MO180_AR.
*/
#define	CAN_MOAR180	(CAN_MO180_AR)

/** \\brief  269C, Message Object  Control Register */
#define CAN_MO180_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A69Cu)

/** Alias (User Manual Name) for CAN_MO180_CTR.
* To use register names with standard convension, please use CAN_MO180_CTR.
*/
#define	CAN_MOCTR180	(CAN_MO180_CTR)

/** \\brief  2694, Message Object  Data Register High */
#define CAN_MO180_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A694u)

/** Alias (User Manual Name) for CAN_MO180_DATAH.
* To use register names with standard convension, please use CAN_MO180_DATAH.
*/
#define	CAN_MODATAH180	(CAN_MO180_DATAH)

/** \\brief  2690, Message Object  Data Register Low */
#define CAN_MO180_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A690u)

/** Alias (User Manual Name) for CAN_MO180_DATAL.
* To use register names with standard convension, please use CAN_MO180_DATAL.
*/
#define	CAN_MODATAL180	(CAN_MO180_DATAL)

/** \\brief  2680, Message Object  Function Control Register */
#define CAN_MO180_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A680u)

/** Alias (User Manual Name) for CAN_MO180_FCR.
* To use register names with standard convension, please use CAN_MO180_FCR.
*/
#define	CAN_MOFCR180	(CAN_MO180_FCR)

/** \\brief  2684, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO180_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A684u)

/** Alias (User Manual Name) for CAN_MO180_FGPR.
* To use register names with standard convension, please use CAN_MO180_FGPR.
*/
#define	CAN_MOFGPR180	(CAN_MO180_FGPR)

/** \\brief  2688, Message Object  Interrupt Pointer Register */
#define CAN_MO180_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A688u)

/** Alias (User Manual Name) for CAN_MO180_IPR.
* To use register names with standard convension, please use CAN_MO180_IPR.
*/
#define	CAN_MOIPR180	(CAN_MO180_IPR)

/** \\brief  269C, Message Object  Control Register */
#define CAN_MO180_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A69Cu)

/** Alias (User Manual Name) for CAN_MO180_STAT.
* To use register names with standard convension, please use CAN_MO180_STAT.
*/
#define	CAN_MOSTAT180	(CAN_MO180_STAT)

/** \\brief  26AC, Message Object  Acceptance Mask Register */
#define CAN_MO181_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A6ACu)

/** Alias (User Manual Name) for CAN_MO181_AMR.
* To use register names with standard convension, please use CAN_MO181_AMR.
*/
#define	CAN_MOAMR181	(CAN_MO181_AMR)

/** \\brief  26B8, Message Object  Arbitration Register */
#define CAN_MO181_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A6B8u)

/** Alias (User Manual Name) for CAN_MO181_AR.
* To use register names with standard convension, please use CAN_MO181_AR.
*/
#define	CAN_MOAR181	(CAN_MO181_AR)

/** \\brief  26BC, Message Object  Control Register */
#define CAN_MO181_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A6BCu)

/** Alias (User Manual Name) for CAN_MO181_CTR.
* To use register names with standard convension, please use CAN_MO181_CTR.
*/
#define	CAN_MOCTR181	(CAN_MO181_CTR)

/** \\brief  26B4, Message Object  Data Register High */
#define CAN_MO181_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A6B4u)

/** Alias (User Manual Name) for CAN_MO181_DATAH.
* To use register names with standard convension, please use CAN_MO181_DATAH.
*/
#define	CAN_MODATAH181	(CAN_MO181_DATAH)

/** \\brief  26B0, Message Object  Data Register Low */
#define CAN_MO181_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A6B0u)

/** Alias (User Manual Name) for CAN_MO181_DATAL.
* To use register names with standard convension, please use CAN_MO181_DATAL.
*/
#define	CAN_MODATAL181	(CAN_MO181_DATAL)

/** \\brief  26A0, Message Object  Function Control Register */
#define CAN_MO181_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A6A0u)

/** Alias (User Manual Name) for CAN_MO181_FCR.
* To use register names with standard convension, please use CAN_MO181_FCR.
*/
#define	CAN_MOFCR181	(CAN_MO181_FCR)

/** \\brief  26A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO181_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A6A4u)

/** Alias (User Manual Name) for CAN_MO181_FGPR.
* To use register names with standard convension, please use CAN_MO181_FGPR.
*/
#define	CAN_MOFGPR181	(CAN_MO181_FGPR)

/** \\brief  26A8, Message Object  Interrupt Pointer Register */
#define CAN_MO181_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A6A8u)

/** Alias (User Manual Name) for CAN_MO181_IPR.
* To use register names with standard convension, please use CAN_MO181_IPR.
*/
#define	CAN_MOIPR181	(CAN_MO181_IPR)

/** \\brief  26BC, Message Object  Control Register */
#define CAN_MO181_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A6BCu)

/** Alias (User Manual Name) for CAN_MO181_STAT.
* To use register names with standard convension, please use CAN_MO181_STAT.
*/
#define	CAN_MOSTAT181	(CAN_MO181_STAT)

/** \\brief  26CC, Message Object  Acceptance Mask Register */
#define CAN_MO182_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A6CCu)

/** Alias (User Manual Name) for CAN_MO182_AMR.
* To use register names with standard convension, please use CAN_MO182_AMR.
*/
#define	CAN_MOAMR182	(CAN_MO182_AMR)

/** \\brief  26D8, Message Object  Arbitration Register */
#define CAN_MO182_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A6D8u)

/** Alias (User Manual Name) for CAN_MO182_AR.
* To use register names with standard convension, please use CAN_MO182_AR.
*/
#define	CAN_MOAR182	(CAN_MO182_AR)

/** \\brief  26DC, Message Object  Control Register */
#define CAN_MO182_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A6DCu)

/** Alias (User Manual Name) for CAN_MO182_CTR.
* To use register names with standard convension, please use CAN_MO182_CTR.
*/
#define	CAN_MOCTR182	(CAN_MO182_CTR)

/** \\brief  26D4, Message Object  Data Register High */
#define CAN_MO182_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A6D4u)

/** Alias (User Manual Name) for CAN_MO182_DATAH.
* To use register names with standard convension, please use CAN_MO182_DATAH.
*/
#define	CAN_MODATAH182	(CAN_MO182_DATAH)

/** \\brief  26D0, Message Object  Data Register Low */
#define CAN_MO182_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A6D0u)

/** Alias (User Manual Name) for CAN_MO182_DATAL.
* To use register names with standard convension, please use CAN_MO182_DATAL.
*/
#define	CAN_MODATAL182	(CAN_MO182_DATAL)

/** \\brief  26C0, Message Object  Function Control Register */
#define CAN_MO182_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A6C0u)

/** Alias (User Manual Name) for CAN_MO182_FCR.
* To use register names with standard convension, please use CAN_MO182_FCR.
*/
#define	CAN_MOFCR182	(CAN_MO182_FCR)

/** \\brief  26C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO182_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A6C4u)

/** Alias (User Manual Name) for CAN_MO182_FGPR.
* To use register names with standard convension, please use CAN_MO182_FGPR.
*/
#define	CAN_MOFGPR182	(CAN_MO182_FGPR)

/** \\brief  26C8, Message Object  Interrupt Pointer Register */
#define CAN_MO182_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A6C8u)

/** Alias (User Manual Name) for CAN_MO182_IPR.
* To use register names with standard convension, please use CAN_MO182_IPR.
*/
#define	CAN_MOIPR182	(CAN_MO182_IPR)

/** \\brief  26DC, Message Object  Control Register */
#define CAN_MO182_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A6DCu)

/** Alias (User Manual Name) for CAN_MO182_STAT.
* To use register names with standard convension, please use CAN_MO182_STAT.
*/
#define	CAN_MOSTAT182	(CAN_MO182_STAT)

/** \\brief  26EC, Message Object  Acceptance Mask Register */
#define CAN_MO183_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A6ECu)

/** Alias (User Manual Name) for CAN_MO183_AMR.
* To use register names with standard convension, please use CAN_MO183_AMR.
*/
#define	CAN_MOAMR183	(CAN_MO183_AMR)

/** \\brief  26F8, Message Object  Arbitration Register */
#define CAN_MO183_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A6F8u)

/** Alias (User Manual Name) for CAN_MO183_AR.
* To use register names with standard convension, please use CAN_MO183_AR.
*/
#define	CAN_MOAR183	(CAN_MO183_AR)

/** \\brief  26FC, Message Object  Control Register */
#define CAN_MO183_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A6FCu)

/** Alias (User Manual Name) for CAN_MO183_CTR.
* To use register names with standard convension, please use CAN_MO183_CTR.
*/
#define	CAN_MOCTR183	(CAN_MO183_CTR)

/** \\brief  26F4, Message Object  Data Register High */
#define CAN_MO183_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A6F4u)

/** Alias (User Manual Name) for CAN_MO183_DATAH.
* To use register names with standard convension, please use CAN_MO183_DATAH.
*/
#define	CAN_MODATAH183	(CAN_MO183_DATAH)

/** \\brief  26F0, Message Object  Data Register Low */
#define CAN_MO183_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A6F0u)

/** Alias (User Manual Name) for CAN_MO183_DATAL.
* To use register names with standard convension, please use CAN_MO183_DATAL.
*/
#define	CAN_MODATAL183	(CAN_MO183_DATAL)

/** \\brief  26E0, Message Object  Function Control Register */
#define CAN_MO183_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A6E0u)

/** Alias (User Manual Name) for CAN_MO183_FCR.
* To use register names with standard convension, please use CAN_MO183_FCR.
*/
#define	CAN_MOFCR183	(CAN_MO183_FCR)

/** \\brief  26E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO183_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A6E4u)

/** Alias (User Manual Name) for CAN_MO183_FGPR.
* To use register names with standard convension, please use CAN_MO183_FGPR.
*/
#define	CAN_MOFGPR183	(CAN_MO183_FGPR)

/** \\brief  26E8, Message Object  Interrupt Pointer Register */
#define CAN_MO183_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A6E8u)

/** Alias (User Manual Name) for CAN_MO183_IPR.
* To use register names with standard convension, please use CAN_MO183_IPR.
*/
#define	CAN_MOIPR183	(CAN_MO183_IPR)

/** \\brief  26FC, Message Object  Control Register */
#define CAN_MO183_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A6FCu)

/** Alias (User Manual Name) for CAN_MO183_STAT.
* To use register names with standard convension, please use CAN_MO183_STAT.
*/
#define	CAN_MOSTAT183	(CAN_MO183_STAT)

/** \\brief  270C, Message Object  Acceptance Mask Register */
#define CAN_MO184_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A70Cu)

/** Alias (User Manual Name) for CAN_MO184_AMR.
* To use register names with standard convension, please use CAN_MO184_AMR.
*/
#define	CAN_MOAMR184	(CAN_MO184_AMR)

/** \\brief  2718, Message Object  Arbitration Register */
#define CAN_MO184_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A718u)

/** Alias (User Manual Name) for CAN_MO184_AR.
* To use register names with standard convension, please use CAN_MO184_AR.
*/
#define	CAN_MOAR184	(CAN_MO184_AR)

/** \\brief  271C, Message Object  Control Register */
#define CAN_MO184_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A71Cu)

/** Alias (User Manual Name) for CAN_MO184_CTR.
* To use register names with standard convension, please use CAN_MO184_CTR.
*/
#define	CAN_MOCTR184	(CAN_MO184_CTR)

/** \\brief  2714, Message Object  Data Register High */
#define CAN_MO184_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A714u)

/** Alias (User Manual Name) for CAN_MO184_DATAH.
* To use register names with standard convension, please use CAN_MO184_DATAH.
*/
#define	CAN_MODATAH184	(CAN_MO184_DATAH)

/** \\brief  2710, Message Object  Data Register Low */
#define CAN_MO184_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A710u)

/** Alias (User Manual Name) for CAN_MO184_DATAL.
* To use register names with standard convension, please use CAN_MO184_DATAL.
*/
#define	CAN_MODATAL184	(CAN_MO184_DATAL)

/** \\brief  2700, Message Object  Function Control Register */
#define CAN_MO184_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A700u)

/** Alias (User Manual Name) for CAN_MO184_FCR.
* To use register names with standard convension, please use CAN_MO184_FCR.
*/
#define	CAN_MOFCR184	(CAN_MO184_FCR)

/** \\brief  2704, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO184_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A704u)

/** Alias (User Manual Name) for CAN_MO184_FGPR.
* To use register names with standard convension, please use CAN_MO184_FGPR.
*/
#define	CAN_MOFGPR184	(CAN_MO184_FGPR)

/** \\brief  2708, Message Object  Interrupt Pointer Register */
#define CAN_MO184_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A708u)

/** Alias (User Manual Name) for CAN_MO184_IPR.
* To use register names with standard convension, please use CAN_MO184_IPR.
*/
#define	CAN_MOIPR184	(CAN_MO184_IPR)

/** \\brief  271C, Message Object  Control Register */
#define CAN_MO184_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A71Cu)

/** Alias (User Manual Name) for CAN_MO184_STAT.
* To use register names with standard convension, please use CAN_MO184_STAT.
*/
#define	CAN_MOSTAT184	(CAN_MO184_STAT)

/** \\brief  272C, Message Object  Acceptance Mask Register */
#define CAN_MO185_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A72Cu)

/** Alias (User Manual Name) for CAN_MO185_AMR.
* To use register names with standard convension, please use CAN_MO185_AMR.
*/
#define	CAN_MOAMR185	(CAN_MO185_AMR)

/** \\brief  2738, Message Object  Arbitration Register */
#define CAN_MO185_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A738u)

/** Alias (User Manual Name) for CAN_MO185_AR.
* To use register names with standard convension, please use CAN_MO185_AR.
*/
#define	CAN_MOAR185	(CAN_MO185_AR)

/** \\brief  273C, Message Object  Control Register */
#define CAN_MO185_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A73Cu)

/** Alias (User Manual Name) for CAN_MO185_CTR.
* To use register names with standard convension, please use CAN_MO185_CTR.
*/
#define	CAN_MOCTR185	(CAN_MO185_CTR)

/** \\brief  2734, Message Object  Data Register High */
#define CAN_MO185_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A734u)

/** Alias (User Manual Name) for CAN_MO185_DATAH.
* To use register names with standard convension, please use CAN_MO185_DATAH.
*/
#define	CAN_MODATAH185	(CAN_MO185_DATAH)

/** \\brief  2730, Message Object  Data Register Low */
#define CAN_MO185_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A730u)

/** Alias (User Manual Name) for CAN_MO185_DATAL.
* To use register names with standard convension, please use CAN_MO185_DATAL.
*/
#define	CAN_MODATAL185	(CAN_MO185_DATAL)

/** \\brief  2720, Message Object  Function Control Register */
#define CAN_MO185_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A720u)

/** Alias (User Manual Name) for CAN_MO185_FCR.
* To use register names with standard convension, please use CAN_MO185_FCR.
*/
#define	CAN_MOFCR185	(CAN_MO185_FCR)

/** \\brief  2724, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO185_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A724u)

/** Alias (User Manual Name) for CAN_MO185_FGPR.
* To use register names with standard convension, please use CAN_MO185_FGPR.
*/
#define	CAN_MOFGPR185	(CAN_MO185_FGPR)

/** \\brief  2728, Message Object  Interrupt Pointer Register */
#define CAN_MO185_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A728u)

/** Alias (User Manual Name) for CAN_MO185_IPR.
* To use register names with standard convension, please use CAN_MO185_IPR.
*/
#define	CAN_MOIPR185	(CAN_MO185_IPR)

/** \\brief  273C, Message Object  Control Register */
#define CAN_MO185_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A73Cu)

/** Alias (User Manual Name) for CAN_MO185_STAT.
* To use register names with standard convension, please use CAN_MO185_STAT.
*/
#define	CAN_MOSTAT185	(CAN_MO185_STAT)

/** \\brief  274C, Message Object  Acceptance Mask Register */
#define CAN_MO186_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A74Cu)

/** Alias (User Manual Name) for CAN_MO186_AMR.
* To use register names with standard convension, please use CAN_MO186_AMR.
*/
#define	CAN_MOAMR186	(CAN_MO186_AMR)

/** \\brief  2758, Message Object  Arbitration Register */
#define CAN_MO186_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A758u)

/** Alias (User Manual Name) for CAN_MO186_AR.
* To use register names with standard convension, please use CAN_MO186_AR.
*/
#define	CAN_MOAR186	(CAN_MO186_AR)

/** \\brief  275C, Message Object  Control Register */
#define CAN_MO186_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A75Cu)

/** Alias (User Manual Name) for CAN_MO186_CTR.
* To use register names with standard convension, please use CAN_MO186_CTR.
*/
#define	CAN_MOCTR186	(CAN_MO186_CTR)

/** \\brief  2754, Message Object  Data Register High */
#define CAN_MO186_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A754u)

/** Alias (User Manual Name) for CAN_MO186_DATAH.
* To use register names with standard convension, please use CAN_MO186_DATAH.
*/
#define	CAN_MODATAH186	(CAN_MO186_DATAH)

/** \\brief  2750, Message Object  Data Register Low */
#define CAN_MO186_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A750u)

/** Alias (User Manual Name) for CAN_MO186_DATAL.
* To use register names with standard convension, please use CAN_MO186_DATAL.
*/
#define	CAN_MODATAL186	(CAN_MO186_DATAL)

/** \\brief  2740, Message Object  Function Control Register */
#define CAN_MO186_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A740u)

/** Alias (User Manual Name) for CAN_MO186_FCR.
* To use register names with standard convension, please use CAN_MO186_FCR.
*/
#define	CAN_MOFCR186	(CAN_MO186_FCR)

/** \\brief  2744, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO186_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A744u)

/** Alias (User Manual Name) for CAN_MO186_FGPR.
* To use register names with standard convension, please use CAN_MO186_FGPR.
*/
#define	CAN_MOFGPR186	(CAN_MO186_FGPR)

/** \\brief  2748, Message Object  Interrupt Pointer Register */
#define CAN_MO186_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A748u)

/** Alias (User Manual Name) for CAN_MO186_IPR.
* To use register names with standard convension, please use CAN_MO186_IPR.
*/
#define	CAN_MOIPR186	(CAN_MO186_IPR)

/** \\brief  275C, Message Object  Control Register */
#define CAN_MO186_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A75Cu)

/** Alias (User Manual Name) for CAN_MO186_STAT.
* To use register names with standard convension, please use CAN_MO186_STAT.
*/
#define	CAN_MOSTAT186	(CAN_MO186_STAT)

/** \\brief  276C, Message Object  Acceptance Mask Register */
#define CAN_MO187_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A76Cu)

/** Alias (User Manual Name) for CAN_MO187_AMR.
* To use register names with standard convension, please use CAN_MO187_AMR.
*/
#define	CAN_MOAMR187	(CAN_MO187_AMR)

/** \\brief  2778, Message Object  Arbitration Register */
#define CAN_MO187_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A778u)

/** Alias (User Manual Name) for CAN_MO187_AR.
* To use register names with standard convension, please use CAN_MO187_AR.
*/
#define	CAN_MOAR187	(CAN_MO187_AR)

/** \\brief  277C, Message Object  Control Register */
#define CAN_MO187_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A77Cu)

/** Alias (User Manual Name) for CAN_MO187_CTR.
* To use register names with standard convension, please use CAN_MO187_CTR.
*/
#define	CAN_MOCTR187	(CAN_MO187_CTR)

/** \\brief  2774, Message Object  Data Register High */
#define CAN_MO187_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A774u)

/** Alias (User Manual Name) for CAN_MO187_DATAH.
* To use register names with standard convension, please use CAN_MO187_DATAH.
*/
#define	CAN_MODATAH187	(CAN_MO187_DATAH)

/** \\brief  2770, Message Object  Data Register Low */
#define CAN_MO187_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A770u)

/** Alias (User Manual Name) for CAN_MO187_DATAL.
* To use register names with standard convension, please use CAN_MO187_DATAL.
*/
#define	CAN_MODATAL187	(CAN_MO187_DATAL)

/** \\brief  2760, Message Object  Function Control Register */
#define CAN_MO187_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A760u)

/** Alias (User Manual Name) for CAN_MO187_FCR.
* To use register names with standard convension, please use CAN_MO187_FCR.
*/
#define	CAN_MOFCR187	(CAN_MO187_FCR)

/** \\brief  2764, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO187_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A764u)

/** Alias (User Manual Name) for CAN_MO187_FGPR.
* To use register names with standard convension, please use CAN_MO187_FGPR.
*/
#define	CAN_MOFGPR187	(CAN_MO187_FGPR)

/** \\brief  2768, Message Object  Interrupt Pointer Register */
#define CAN_MO187_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A768u)

/** Alias (User Manual Name) for CAN_MO187_IPR.
* To use register names with standard convension, please use CAN_MO187_IPR.
*/
#define	CAN_MOIPR187	(CAN_MO187_IPR)

/** \\brief  277C, Message Object  Control Register */
#define CAN_MO187_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A77Cu)

/** Alias (User Manual Name) for CAN_MO187_STAT.
* To use register names with standard convension, please use CAN_MO187_STAT.
*/
#define	CAN_MOSTAT187	(CAN_MO187_STAT)

/** \\brief  278C, Message Object  Acceptance Mask Register */
#define CAN_MO188_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A78Cu)

/** Alias (User Manual Name) for CAN_MO188_AMR.
* To use register names with standard convension, please use CAN_MO188_AMR.
*/
#define	CAN_MOAMR188	(CAN_MO188_AMR)

/** \\brief  2798, Message Object  Arbitration Register */
#define CAN_MO188_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A798u)

/** Alias (User Manual Name) for CAN_MO188_AR.
* To use register names with standard convension, please use CAN_MO188_AR.
*/
#define	CAN_MOAR188	(CAN_MO188_AR)

/** \\brief  279C, Message Object  Control Register */
#define CAN_MO188_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A79Cu)

/** Alias (User Manual Name) for CAN_MO188_CTR.
* To use register names with standard convension, please use CAN_MO188_CTR.
*/
#define	CAN_MOCTR188	(CAN_MO188_CTR)

/** \\brief  2794, Message Object  Data Register High */
#define CAN_MO188_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A794u)

/** Alias (User Manual Name) for CAN_MO188_DATAH.
* To use register names with standard convension, please use CAN_MO188_DATAH.
*/
#define	CAN_MODATAH188	(CAN_MO188_DATAH)

/** \\brief  2790, Message Object  Data Register Low */
#define CAN_MO188_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A790u)

/** Alias (User Manual Name) for CAN_MO188_DATAL.
* To use register names with standard convension, please use CAN_MO188_DATAL.
*/
#define	CAN_MODATAL188	(CAN_MO188_DATAL)

/** \\brief  2780, Message Object  Function Control Register */
#define CAN_MO188_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A780u)

/** Alias (User Manual Name) for CAN_MO188_FCR.
* To use register names with standard convension, please use CAN_MO188_FCR.
*/
#define	CAN_MOFCR188	(CAN_MO188_FCR)

/** \\brief  2784, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO188_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A784u)

/** Alias (User Manual Name) for CAN_MO188_FGPR.
* To use register names with standard convension, please use CAN_MO188_FGPR.
*/
#define	CAN_MOFGPR188	(CAN_MO188_FGPR)

/** \\brief  2788, Message Object  Interrupt Pointer Register */
#define CAN_MO188_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A788u)

/** Alias (User Manual Name) for CAN_MO188_IPR.
* To use register names with standard convension, please use CAN_MO188_IPR.
*/
#define	CAN_MOIPR188	(CAN_MO188_IPR)

/** \\brief  279C, Message Object  Control Register */
#define CAN_MO188_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A79Cu)

/** Alias (User Manual Name) for CAN_MO188_STAT.
* To use register names with standard convension, please use CAN_MO188_STAT.
*/
#define	CAN_MOSTAT188	(CAN_MO188_STAT)

/** \\brief  27AC, Message Object  Acceptance Mask Register */
#define CAN_MO189_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A7ACu)

/** Alias (User Manual Name) for CAN_MO189_AMR.
* To use register names with standard convension, please use CAN_MO189_AMR.
*/
#define	CAN_MOAMR189	(CAN_MO189_AMR)

/** \\brief  27B8, Message Object  Arbitration Register */
#define CAN_MO189_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A7B8u)

/** Alias (User Manual Name) for CAN_MO189_AR.
* To use register names with standard convension, please use CAN_MO189_AR.
*/
#define	CAN_MOAR189	(CAN_MO189_AR)

/** \\brief  27BC, Message Object  Control Register */
#define CAN_MO189_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A7BCu)

/** Alias (User Manual Name) for CAN_MO189_CTR.
* To use register names with standard convension, please use CAN_MO189_CTR.
*/
#define	CAN_MOCTR189	(CAN_MO189_CTR)

/** \\brief  27B4, Message Object  Data Register High */
#define CAN_MO189_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A7B4u)

/** Alias (User Manual Name) for CAN_MO189_DATAH.
* To use register names with standard convension, please use CAN_MO189_DATAH.
*/
#define	CAN_MODATAH189	(CAN_MO189_DATAH)

/** \\brief  27B0, Message Object  Data Register Low */
#define CAN_MO189_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A7B0u)

/** Alias (User Manual Name) for CAN_MO189_DATAL.
* To use register names with standard convension, please use CAN_MO189_DATAL.
*/
#define	CAN_MODATAL189	(CAN_MO189_DATAL)

/** \\brief  27A0, Message Object  Function Control Register */
#define CAN_MO189_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A7A0u)

/** Alias (User Manual Name) for CAN_MO189_FCR.
* To use register names with standard convension, please use CAN_MO189_FCR.
*/
#define	CAN_MOFCR189	(CAN_MO189_FCR)

/** \\brief  27A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO189_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A7A4u)

/** Alias (User Manual Name) for CAN_MO189_FGPR.
* To use register names with standard convension, please use CAN_MO189_FGPR.
*/
#define	CAN_MOFGPR189	(CAN_MO189_FGPR)

/** \\brief  27A8, Message Object  Interrupt Pointer Register */
#define CAN_MO189_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A7A8u)

/** Alias (User Manual Name) for CAN_MO189_IPR.
* To use register names with standard convension, please use CAN_MO189_IPR.
*/
#define	CAN_MOIPR189	(CAN_MO189_IPR)

/** \\brief  27BC, Message Object  Control Register */
#define CAN_MO189_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A7BCu)

/** Alias (User Manual Name) for CAN_MO189_STAT.
* To use register names with standard convension, please use CAN_MO189_STAT.
*/
#define	CAN_MOSTAT189	(CAN_MO189_STAT)

/** \\brief  124C, Message Object  Acceptance Mask Register */
#define CAN_MO18_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001924Cu)

/** Alias (User Manual Name) for CAN_MO18_AMR.
* To use register names with standard convension, please use CAN_MO18_AMR.
*/
#define	CAN_MOAMR18	(CAN_MO18_AMR)

/** \\brief  1258, Message Object  Arbitration Register */
#define CAN_MO18_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019258u)

/** Alias (User Manual Name) for CAN_MO18_AR.
* To use register names with standard convension, please use CAN_MO18_AR.
*/
#define	CAN_MOAR18	(CAN_MO18_AR)

/** \\brief  125C, Message Object  Control Register */
#define CAN_MO18_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001925Cu)

/** Alias (User Manual Name) for CAN_MO18_CTR.
* To use register names with standard convension, please use CAN_MO18_CTR.
*/
#define	CAN_MOCTR18	(CAN_MO18_CTR)

/** \\brief  1254, Message Object  Data Register High */
#define CAN_MO18_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019254u)

/** Alias (User Manual Name) for CAN_MO18_DATAH.
* To use register names with standard convension, please use CAN_MO18_DATAH.
*/
#define	CAN_MODATAH18	(CAN_MO18_DATAH)

/** \\brief  1250, Message Object  Data Register Low */
#define CAN_MO18_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019250u)

/** Alias (User Manual Name) for CAN_MO18_DATAL.
* To use register names with standard convension, please use CAN_MO18_DATAL.
*/
#define	CAN_MODATAL18	(CAN_MO18_DATAL)

/** \\brief  1240, Message Object  Function Control Register */
#define CAN_MO18_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019240u)

/** Alias (User Manual Name) for CAN_MO18_FCR.
* To use register names with standard convension, please use CAN_MO18_FCR.
*/
#define	CAN_MOFCR18	(CAN_MO18_FCR)

/** \\brief  1244, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO18_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019244u)

/** Alias (User Manual Name) for CAN_MO18_FGPR.
* To use register names with standard convension, please use CAN_MO18_FGPR.
*/
#define	CAN_MOFGPR18	(CAN_MO18_FGPR)

/** \\brief  1248, Message Object  Interrupt Pointer Register */
#define CAN_MO18_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019248u)

/** Alias (User Manual Name) for CAN_MO18_IPR.
* To use register names with standard convension, please use CAN_MO18_IPR.
*/
#define	CAN_MOIPR18	(CAN_MO18_IPR)

/** \\brief  125C, Message Object  Control Register */
#define CAN_MO18_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001925Cu)

/** Alias (User Manual Name) for CAN_MO18_STAT.
* To use register names with standard convension, please use CAN_MO18_STAT.
*/
#define	CAN_MOSTAT18	(CAN_MO18_STAT)

/** \\brief  27CC, Message Object  Acceptance Mask Register */
#define CAN_MO190_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A7CCu)

/** Alias (User Manual Name) for CAN_MO190_AMR.
* To use register names with standard convension, please use CAN_MO190_AMR.
*/
#define	CAN_MOAMR190	(CAN_MO190_AMR)

/** \\brief  27D8, Message Object  Arbitration Register */
#define CAN_MO190_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A7D8u)

/** Alias (User Manual Name) for CAN_MO190_AR.
* To use register names with standard convension, please use CAN_MO190_AR.
*/
#define	CAN_MOAR190	(CAN_MO190_AR)

/** \\brief  27DC, Message Object  Control Register */
#define CAN_MO190_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A7DCu)

/** Alias (User Manual Name) for CAN_MO190_CTR.
* To use register names with standard convension, please use CAN_MO190_CTR.
*/
#define	CAN_MOCTR190	(CAN_MO190_CTR)

/** \\brief  27D4, Message Object  Data Register High */
#define CAN_MO190_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A7D4u)

/** Alias (User Manual Name) for CAN_MO190_DATAH.
* To use register names with standard convension, please use CAN_MO190_DATAH.
*/
#define	CAN_MODATAH190	(CAN_MO190_DATAH)

/** \\brief  27D0, Message Object  Data Register Low */
#define CAN_MO190_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A7D0u)

/** Alias (User Manual Name) for CAN_MO190_DATAL.
* To use register names with standard convension, please use CAN_MO190_DATAL.
*/
#define	CAN_MODATAL190	(CAN_MO190_DATAL)

/** \\brief  27C0, Message Object  Function Control Register */
#define CAN_MO190_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A7C0u)

/** Alias (User Manual Name) for CAN_MO190_FCR.
* To use register names with standard convension, please use CAN_MO190_FCR.
*/
#define	CAN_MOFCR190	(CAN_MO190_FCR)

/** \\brief  27C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO190_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A7C4u)

/** Alias (User Manual Name) for CAN_MO190_FGPR.
* To use register names with standard convension, please use CAN_MO190_FGPR.
*/
#define	CAN_MOFGPR190	(CAN_MO190_FGPR)

/** \\brief  27C8, Message Object  Interrupt Pointer Register */
#define CAN_MO190_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A7C8u)

/** Alias (User Manual Name) for CAN_MO190_IPR.
* To use register names with standard convension, please use CAN_MO190_IPR.
*/
#define	CAN_MOIPR190	(CAN_MO190_IPR)

/** \\brief  27DC, Message Object  Control Register */
#define CAN_MO190_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A7DCu)

/** Alias (User Manual Name) for CAN_MO190_STAT.
* To use register names with standard convension, please use CAN_MO190_STAT.
*/
#define	CAN_MOSTAT190	(CAN_MO190_STAT)

/** \\brief  27EC, Message Object  Acceptance Mask Register */
#define CAN_MO191_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A7ECu)

/** Alias (User Manual Name) for CAN_MO191_AMR.
* To use register names with standard convension, please use CAN_MO191_AMR.
*/
#define	CAN_MOAMR191	(CAN_MO191_AMR)

/** \\brief  27F8, Message Object  Arbitration Register */
#define CAN_MO191_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A7F8u)

/** Alias (User Manual Name) for CAN_MO191_AR.
* To use register names with standard convension, please use CAN_MO191_AR.
*/
#define	CAN_MOAR191	(CAN_MO191_AR)

/** \\brief  27FC, Message Object  Control Register */
#define CAN_MO191_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A7FCu)

/** Alias (User Manual Name) for CAN_MO191_CTR.
* To use register names with standard convension, please use CAN_MO191_CTR.
*/
#define	CAN_MOCTR191	(CAN_MO191_CTR)

/** \\brief  27F4, Message Object  Data Register High */
#define CAN_MO191_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A7F4u)

/** Alias (User Manual Name) for CAN_MO191_DATAH.
* To use register names with standard convension, please use CAN_MO191_DATAH.
*/
#define	CAN_MODATAH191	(CAN_MO191_DATAH)

/** \\brief  27F0, Message Object  Data Register Low */
#define CAN_MO191_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A7F0u)

/** Alias (User Manual Name) for CAN_MO191_DATAL.
* To use register names with standard convension, please use CAN_MO191_DATAL.
*/
#define	CAN_MODATAL191	(CAN_MO191_DATAL)

/** \\brief  27E0, Message Object  Function Control Register */
#define CAN_MO191_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A7E0u)

/** Alias (User Manual Name) for CAN_MO191_FCR.
* To use register names with standard convension, please use CAN_MO191_FCR.
*/
#define	CAN_MOFCR191	(CAN_MO191_FCR)

/** \\brief  27E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO191_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A7E4u)

/** Alias (User Manual Name) for CAN_MO191_FGPR.
* To use register names with standard convension, please use CAN_MO191_FGPR.
*/
#define	CAN_MOFGPR191	(CAN_MO191_FGPR)

/** \\brief  27E8, Message Object  Interrupt Pointer Register */
#define CAN_MO191_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A7E8u)

/** Alias (User Manual Name) for CAN_MO191_IPR.
* To use register names with standard convension, please use CAN_MO191_IPR.
*/
#define	CAN_MOIPR191	(CAN_MO191_IPR)

/** \\brief  27FC, Message Object  Control Register */
#define CAN_MO191_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A7FCu)

/** Alias (User Manual Name) for CAN_MO191_STAT.
* To use register names with standard convension, please use CAN_MO191_STAT.
*/
#define	CAN_MOSTAT191	(CAN_MO191_STAT)

/** \\brief  280C, Message Object  Acceptance Mask Register */
#define CAN_MO192_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A80Cu)

/** Alias (User Manual Name) for CAN_MO192_AMR.
* To use register names with standard convension, please use CAN_MO192_AMR.
*/
#define	CAN_MOAMR192	(CAN_MO192_AMR)

/** \\brief  2818, Message Object  Arbitration Register */
#define CAN_MO192_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A818u)

/** Alias (User Manual Name) for CAN_MO192_AR.
* To use register names with standard convension, please use CAN_MO192_AR.
*/
#define	CAN_MOAR192	(CAN_MO192_AR)

/** \\brief  281C, Message Object  Control Register */
#define CAN_MO192_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A81Cu)

/** Alias (User Manual Name) for CAN_MO192_CTR.
* To use register names with standard convension, please use CAN_MO192_CTR.
*/
#define	CAN_MOCTR192	(CAN_MO192_CTR)

/** \\brief  2814, Message Object  Data Register High */
#define CAN_MO192_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A814u)

/** Alias (User Manual Name) for CAN_MO192_DATAH.
* To use register names with standard convension, please use CAN_MO192_DATAH.
*/
#define	CAN_MODATAH192	(CAN_MO192_DATAH)

/** \\brief  2810, Message Object  Data Register Low */
#define CAN_MO192_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A810u)

/** Alias (User Manual Name) for CAN_MO192_DATAL.
* To use register names with standard convension, please use CAN_MO192_DATAL.
*/
#define	CAN_MODATAL192	(CAN_MO192_DATAL)

/** \\brief  2800, Message Object  Function Control Register */
#define CAN_MO192_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A800u)

/** Alias (User Manual Name) for CAN_MO192_FCR.
* To use register names with standard convension, please use CAN_MO192_FCR.
*/
#define	CAN_MOFCR192	(CAN_MO192_FCR)

/** \\brief  2804, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO192_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A804u)

/** Alias (User Manual Name) for CAN_MO192_FGPR.
* To use register names with standard convension, please use CAN_MO192_FGPR.
*/
#define	CAN_MOFGPR192	(CAN_MO192_FGPR)

/** \\brief  2808, Message Object  Interrupt Pointer Register */
#define CAN_MO192_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A808u)

/** Alias (User Manual Name) for CAN_MO192_IPR.
* To use register names with standard convension, please use CAN_MO192_IPR.
*/
#define	CAN_MOIPR192	(CAN_MO192_IPR)

/** \\brief  281C, Message Object  Control Register */
#define CAN_MO192_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A81Cu)

/** Alias (User Manual Name) for CAN_MO192_STAT.
* To use register names with standard convension, please use CAN_MO192_STAT.
*/
#define	CAN_MOSTAT192	(CAN_MO192_STAT)

/** \\brief  282C, Message Object  Acceptance Mask Register */
#define CAN_MO193_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A82Cu)

/** Alias (User Manual Name) for CAN_MO193_AMR.
* To use register names with standard convension, please use CAN_MO193_AMR.
*/
#define	CAN_MOAMR193	(CAN_MO193_AMR)

/** \\brief  2838, Message Object  Arbitration Register */
#define CAN_MO193_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A838u)

/** Alias (User Manual Name) for CAN_MO193_AR.
* To use register names with standard convension, please use CAN_MO193_AR.
*/
#define	CAN_MOAR193	(CAN_MO193_AR)

/** \\brief  283C, Message Object  Control Register */
#define CAN_MO193_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A83Cu)

/** Alias (User Manual Name) for CAN_MO193_CTR.
* To use register names with standard convension, please use CAN_MO193_CTR.
*/
#define	CAN_MOCTR193	(CAN_MO193_CTR)

/** \\brief  2834, Message Object  Data Register High */
#define CAN_MO193_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A834u)

/** Alias (User Manual Name) for CAN_MO193_DATAH.
* To use register names with standard convension, please use CAN_MO193_DATAH.
*/
#define	CAN_MODATAH193	(CAN_MO193_DATAH)

/** \\brief  2830, Message Object  Data Register Low */
#define CAN_MO193_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A830u)

/** Alias (User Manual Name) for CAN_MO193_DATAL.
* To use register names with standard convension, please use CAN_MO193_DATAL.
*/
#define	CAN_MODATAL193	(CAN_MO193_DATAL)

/** \\brief  2820, Message Object  Function Control Register */
#define CAN_MO193_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A820u)

/** Alias (User Manual Name) for CAN_MO193_FCR.
* To use register names with standard convension, please use CAN_MO193_FCR.
*/
#define	CAN_MOFCR193	(CAN_MO193_FCR)

/** \\brief  2824, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO193_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A824u)

/** Alias (User Manual Name) for CAN_MO193_FGPR.
* To use register names with standard convension, please use CAN_MO193_FGPR.
*/
#define	CAN_MOFGPR193	(CAN_MO193_FGPR)

/** \\brief  2828, Message Object  Interrupt Pointer Register */
#define CAN_MO193_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A828u)

/** Alias (User Manual Name) for CAN_MO193_IPR.
* To use register names with standard convension, please use CAN_MO193_IPR.
*/
#define	CAN_MOIPR193	(CAN_MO193_IPR)

/** \\brief  283C, Message Object  Control Register */
#define CAN_MO193_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A83Cu)

/** Alias (User Manual Name) for CAN_MO193_STAT.
* To use register names with standard convension, please use CAN_MO193_STAT.
*/
#define	CAN_MOSTAT193	(CAN_MO193_STAT)

/** \\brief  284C, Message Object  Acceptance Mask Register */
#define CAN_MO194_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A84Cu)

/** Alias (User Manual Name) for CAN_MO194_AMR.
* To use register names with standard convension, please use CAN_MO194_AMR.
*/
#define	CAN_MOAMR194	(CAN_MO194_AMR)

/** \\brief  2858, Message Object  Arbitration Register */
#define CAN_MO194_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A858u)

/** Alias (User Manual Name) for CAN_MO194_AR.
* To use register names with standard convension, please use CAN_MO194_AR.
*/
#define	CAN_MOAR194	(CAN_MO194_AR)

/** \\brief  285C, Message Object  Control Register */
#define CAN_MO194_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A85Cu)

/** Alias (User Manual Name) for CAN_MO194_CTR.
* To use register names with standard convension, please use CAN_MO194_CTR.
*/
#define	CAN_MOCTR194	(CAN_MO194_CTR)

/** \\brief  2854, Message Object  Data Register High */
#define CAN_MO194_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A854u)

/** Alias (User Manual Name) for CAN_MO194_DATAH.
* To use register names with standard convension, please use CAN_MO194_DATAH.
*/
#define	CAN_MODATAH194	(CAN_MO194_DATAH)

/** \\brief  2850, Message Object  Data Register Low */
#define CAN_MO194_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A850u)

/** Alias (User Manual Name) for CAN_MO194_DATAL.
* To use register names with standard convension, please use CAN_MO194_DATAL.
*/
#define	CAN_MODATAL194	(CAN_MO194_DATAL)

/** \\brief  2840, Message Object  Function Control Register */
#define CAN_MO194_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A840u)

/** Alias (User Manual Name) for CAN_MO194_FCR.
* To use register names with standard convension, please use CAN_MO194_FCR.
*/
#define	CAN_MOFCR194	(CAN_MO194_FCR)

/** \\brief  2844, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO194_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A844u)

/** Alias (User Manual Name) for CAN_MO194_FGPR.
* To use register names with standard convension, please use CAN_MO194_FGPR.
*/
#define	CAN_MOFGPR194	(CAN_MO194_FGPR)

/** \\brief  2848, Message Object  Interrupt Pointer Register */
#define CAN_MO194_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A848u)

/** Alias (User Manual Name) for CAN_MO194_IPR.
* To use register names with standard convension, please use CAN_MO194_IPR.
*/
#define	CAN_MOIPR194	(CAN_MO194_IPR)

/** \\brief  285C, Message Object  Control Register */
#define CAN_MO194_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A85Cu)

/** Alias (User Manual Name) for CAN_MO194_STAT.
* To use register names with standard convension, please use CAN_MO194_STAT.
*/
#define	CAN_MOSTAT194	(CAN_MO194_STAT)

/** \\brief  286C, Message Object  Acceptance Mask Register */
#define CAN_MO195_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A86Cu)

/** Alias (User Manual Name) for CAN_MO195_AMR.
* To use register names with standard convension, please use CAN_MO195_AMR.
*/
#define	CAN_MOAMR195	(CAN_MO195_AMR)

/** \\brief  2878, Message Object  Arbitration Register */
#define CAN_MO195_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A878u)

/** Alias (User Manual Name) for CAN_MO195_AR.
* To use register names with standard convension, please use CAN_MO195_AR.
*/
#define	CAN_MOAR195	(CAN_MO195_AR)

/** \\brief  287C, Message Object  Control Register */
#define CAN_MO195_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A87Cu)

/** Alias (User Manual Name) for CAN_MO195_CTR.
* To use register names with standard convension, please use CAN_MO195_CTR.
*/
#define	CAN_MOCTR195	(CAN_MO195_CTR)

/** \\brief  2874, Message Object  Data Register High */
#define CAN_MO195_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A874u)

/** Alias (User Manual Name) for CAN_MO195_DATAH.
* To use register names with standard convension, please use CAN_MO195_DATAH.
*/
#define	CAN_MODATAH195	(CAN_MO195_DATAH)

/** \\brief  2870, Message Object  Data Register Low */
#define CAN_MO195_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A870u)

/** Alias (User Manual Name) for CAN_MO195_DATAL.
* To use register names with standard convension, please use CAN_MO195_DATAL.
*/
#define	CAN_MODATAL195	(CAN_MO195_DATAL)

/** \\brief  2860, Message Object  Function Control Register */
#define CAN_MO195_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A860u)

/** Alias (User Manual Name) for CAN_MO195_FCR.
* To use register names with standard convension, please use CAN_MO195_FCR.
*/
#define	CAN_MOFCR195	(CAN_MO195_FCR)

/** \\brief  2864, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO195_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A864u)

/** Alias (User Manual Name) for CAN_MO195_FGPR.
* To use register names with standard convension, please use CAN_MO195_FGPR.
*/
#define	CAN_MOFGPR195	(CAN_MO195_FGPR)

/** \\brief  2868, Message Object  Interrupt Pointer Register */
#define CAN_MO195_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A868u)

/** Alias (User Manual Name) for CAN_MO195_IPR.
* To use register names with standard convension, please use CAN_MO195_IPR.
*/
#define	CAN_MOIPR195	(CAN_MO195_IPR)

/** \\brief  287C, Message Object  Control Register */
#define CAN_MO195_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A87Cu)

/** Alias (User Manual Name) for CAN_MO195_STAT.
* To use register names with standard convension, please use CAN_MO195_STAT.
*/
#define	CAN_MOSTAT195	(CAN_MO195_STAT)

/** \\brief  288C, Message Object  Acceptance Mask Register */
#define CAN_MO196_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A88Cu)

/** Alias (User Manual Name) for CAN_MO196_AMR.
* To use register names with standard convension, please use CAN_MO196_AMR.
*/
#define	CAN_MOAMR196	(CAN_MO196_AMR)

/** \\brief  2898, Message Object  Arbitration Register */
#define CAN_MO196_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A898u)

/** Alias (User Manual Name) for CAN_MO196_AR.
* To use register names with standard convension, please use CAN_MO196_AR.
*/
#define	CAN_MOAR196	(CAN_MO196_AR)

/** \\brief  289C, Message Object  Control Register */
#define CAN_MO196_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A89Cu)

/** Alias (User Manual Name) for CAN_MO196_CTR.
* To use register names with standard convension, please use CAN_MO196_CTR.
*/
#define	CAN_MOCTR196	(CAN_MO196_CTR)

/** \\brief  2894, Message Object  Data Register High */
#define CAN_MO196_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A894u)

/** Alias (User Manual Name) for CAN_MO196_DATAH.
* To use register names with standard convension, please use CAN_MO196_DATAH.
*/
#define	CAN_MODATAH196	(CAN_MO196_DATAH)

/** \\brief  2890, Message Object  Data Register Low */
#define CAN_MO196_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A890u)

/** Alias (User Manual Name) for CAN_MO196_DATAL.
* To use register names with standard convension, please use CAN_MO196_DATAL.
*/
#define	CAN_MODATAL196	(CAN_MO196_DATAL)

/** \\brief  2880, Message Object  Function Control Register */
#define CAN_MO196_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A880u)

/** Alias (User Manual Name) for CAN_MO196_FCR.
* To use register names with standard convension, please use CAN_MO196_FCR.
*/
#define	CAN_MOFCR196	(CAN_MO196_FCR)

/** \\brief  2884, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO196_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A884u)

/** Alias (User Manual Name) for CAN_MO196_FGPR.
* To use register names with standard convension, please use CAN_MO196_FGPR.
*/
#define	CAN_MOFGPR196	(CAN_MO196_FGPR)

/** \\brief  2888, Message Object  Interrupt Pointer Register */
#define CAN_MO196_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A888u)

/** Alias (User Manual Name) for CAN_MO196_IPR.
* To use register names with standard convension, please use CAN_MO196_IPR.
*/
#define	CAN_MOIPR196	(CAN_MO196_IPR)

/** \\brief  289C, Message Object  Control Register */
#define CAN_MO196_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A89Cu)

/** Alias (User Manual Name) for CAN_MO196_STAT.
* To use register names with standard convension, please use CAN_MO196_STAT.
*/
#define	CAN_MOSTAT196	(CAN_MO196_STAT)

/** \\brief  28AC, Message Object  Acceptance Mask Register */
#define CAN_MO197_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A8ACu)

/** Alias (User Manual Name) for CAN_MO197_AMR.
* To use register names with standard convension, please use CAN_MO197_AMR.
*/
#define	CAN_MOAMR197	(CAN_MO197_AMR)

/** \\brief  28B8, Message Object  Arbitration Register */
#define CAN_MO197_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A8B8u)

/** Alias (User Manual Name) for CAN_MO197_AR.
* To use register names with standard convension, please use CAN_MO197_AR.
*/
#define	CAN_MOAR197	(CAN_MO197_AR)

/** \\brief  28BC, Message Object  Control Register */
#define CAN_MO197_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A8BCu)

/** Alias (User Manual Name) for CAN_MO197_CTR.
* To use register names with standard convension, please use CAN_MO197_CTR.
*/
#define	CAN_MOCTR197	(CAN_MO197_CTR)

/** \\brief  28B4, Message Object  Data Register High */
#define CAN_MO197_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A8B4u)

/** Alias (User Manual Name) for CAN_MO197_DATAH.
* To use register names with standard convension, please use CAN_MO197_DATAH.
*/
#define	CAN_MODATAH197	(CAN_MO197_DATAH)

/** \\brief  28B0, Message Object  Data Register Low */
#define CAN_MO197_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A8B0u)

/** Alias (User Manual Name) for CAN_MO197_DATAL.
* To use register names with standard convension, please use CAN_MO197_DATAL.
*/
#define	CAN_MODATAL197	(CAN_MO197_DATAL)

/** \\brief  28A0, Message Object  Function Control Register */
#define CAN_MO197_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A8A0u)

/** Alias (User Manual Name) for CAN_MO197_FCR.
* To use register names with standard convension, please use CAN_MO197_FCR.
*/
#define	CAN_MOFCR197	(CAN_MO197_FCR)

/** \\brief  28A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO197_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A8A4u)

/** Alias (User Manual Name) for CAN_MO197_FGPR.
* To use register names with standard convension, please use CAN_MO197_FGPR.
*/
#define	CAN_MOFGPR197	(CAN_MO197_FGPR)

/** \\brief  28A8, Message Object  Interrupt Pointer Register */
#define CAN_MO197_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A8A8u)

/** Alias (User Manual Name) for CAN_MO197_IPR.
* To use register names with standard convension, please use CAN_MO197_IPR.
*/
#define	CAN_MOIPR197	(CAN_MO197_IPR)

/** \\brief  28BC, Message Object  Control Register */
#define CAN_MO197_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A8BCu)

/** Alias (User Manual Name) for CAN_MO197_STAT.
* To use register names with standard convension, please use CAN_MO197_STAT.
*/
#define	CAN_MOSTAT197	(CAN_MO197_STAT)

/** \\brief  28CC, Message Object  Acceptance Mask Register */
#define CAN_MO198_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A8CCu)

/** Alias (User Manual Name) for CAN_MO198_AMR.
* To use register names with standard convension, please use CAN_MO198_AMR.
*/
#define	CAN_MOAMR198	(CAN_MO198_AMR)

/** \\brief  28D8, Message Object  Arbitration Register */
#define CAN_MO198_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A8D8u)

/** Alias (User Manual Name) for CAN_MO198_AR.
* To use register names with standard convension, please use CAN_MO198_AR.
*/
#define	CAN_MOAR198	(CAN_MO198_AR)

/** \\brief  28DC, Message Object  Control Register */
#define CAN_MO198_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A8DCu)

/** Alias (User Manual Name) for CAN_MO198_CTR.
* To use register names with standard convension, please use CAN_MO198_CTR.
*/
#define	CAN_MOCTR198	(CAN_MO198_CTR)

/** \\brief  28D4, Message Object  Data Register High */
#define CAN_MO198_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A8D4u)

/** Alias (User Manual Name) for CAN_MO198_DATAH.
* To use register names with standard convension, please use CAN_MO198_DATAH.
*/
#define	CAN_MODATAH198	(CAN_MO198_DATAH)

/** \\brief  28D0, Message Object  Data Register Low */
#define CAN_MO198_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A8D0u)

/** Alias (User Manual Name) for CAN_MO198_DATAL.
* To use register names with standard convension, please use CAN_MO198_DATAL.
*/
#define	CAN_MODATAL198	(CAN_MO198_DATAL)

/** \\brief  28C0, Message Object  Function Control Register */
#define CAN_MO198_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A8C0u)

/** Alias (User Manual Name) for CAN_MO198_FCR.
* To use register names with standard convension, please use CAN_MO198_FCR.
*/
#define	CAN_MOFCR198	(CAN_MO198_FCR)

/** \\brief  28C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO198_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A8C4u)

/** Alias (User Manual Name) for CAN_MO198_FGPR.
* To use register names with standard convension, please use CAN_MO198_FGPR.
*/
#define	CAN_MOFGPR198	(CAN_MO198_FGPR)

/** \\brief  28C8, Message Object  Interrupt Pointer Register */
#define CAN_MO198_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A8C8u)

/** Alias (User Manual Name) for CAN_MO198_IPR.
* To use register names with standard convension, please use CAN_MO198_IPR.
*/
#define	CAN_MOIPR198	(CAN_MO198_IPR)

/** \\brief  28DC, Message Object  Control Register */
#define CAN_MO198_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A8DCu)

/** Alias (User Manual Name) for CAN_MO198_STAT.
* To use register names with standard convension, please use CAN_MO198_STAT.
*/
#define	CAN_MOSTAT198	(CAN_MO198_STAT)

/** \\brief  28EC, Message Object  Acceptance Mask Register */
#define CAN_MO199_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A8ECu)

/** Alias (User Manual Name) for CAN_MO199_AMR.
* To use register names with standard convension, please use CAN_MO199_AMR.
*/
#define	CAN_MOAMR199	(CAN_MO199_AMR)

/** \\brief  28F8, Message Object  Arbitration Register */
#define CAN_MO199_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A8F8u)

/** Alias (User Manual Name) for CAN_MO199_AR.
* To use register names with standard convension, please use CAN_MO199_AR.
*/
#define	CAN_MOAR199	(CAN_MO199_AR)

/** \\brief  28FC, Message Object  Control Register */
#define CAN_MO199_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A8FCu)

/** Alias (User Manual Name) for CAN_MO199_CTR.
* To use register names with standard convension, please use CAN_MO199_CTR.
*/
#define	CAN_MOCTR199	(CAN_MO199_CTR)

/** \\brief  28F4, Message Object  Data Register High */
#define CAN_MO199_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A8F4u)

/** Alias (User Manual Name) for CAN_MO199_DATAH.
* To use register names with standard convension, please use CAN_MO199_DATAH.
*/
#define	CAN_MODATAH199	(CAN_MO199_DATAH)

/** \\brief  28F0, Message Object  Data Register Low */
#define CAN_MO199_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A8F0u)

/** Alias (User Manual Name) for CAN_MO199_DATAL.
* To use register names with standard convension, please use CAN_MO199_DATAL.
*/
#define	CAN_MODATAL199	(CAN_MO199_DATAL)

/** \\brief  28E0, Message Object  Function Control Register */
#define CAN_MO199_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A8E0u)

/** Alias (User Manual Name) for CAN_MO199_FCR.
* To use register names with standard convension, please use CAN_MO199_FCR.
*/
#define	CAN_MOFCR199	(CAN_MO199_FCR)

/** \\brief  28E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO199_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A8E4u)

/** Alias (User Manual Name) for CAN_MO199_FGPR.
* To use register names with standard convension, please use CAN_MO199_FGPR.
*/
#define	CAN_MOFGPR199	(CAN_MO199_FGPR)

/** \\brief  28E8, Message Object  Interrupt Pointer Register */
#define CAN_MO199_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A8E8u)

/** Alias (User Manual Name) for CAN_MO199_IPR.
* To use register names with standard convension, please use CAN_MO199_IPR.
*/
#define	CAN_MOIPR199	(CAN_MO199_IPR)

/** \\brief  28FC, Message Object  Control Register */
#define CAN_MO199_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A8FCu)

/** Alias (User Manual Name) for CAN_MO199_STAT.
* To use register names with standard convension, please use CAN_MO199_STAT.
*/
#define	CAN_MOSTAT199	(CAN_MO199_STAT)

/** \\brief  126C, Message Object  Acceptance Mask Register */
#define CAN_MO19_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001926Cu)

/** Alias (User Manual Name) for CAN_MO19_AMR.
* To use register names with standard convension, please use CAN_MO19_AMR.
*/
#define	CAN_MOAMR19	(CAN_MO19_AMR)

/** \\brief  1278, Message Object  Arbitration Register */
#define CAN_MO19_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019278u)

/** Alias (User Manual Name) for CAN_MO19_AR.
* To use register names with standard convension, please use CAN_MO19_AR.
*/
#define	CAN_MOAR19	(CAN_MO19_AR)

/** \\brief  127C, Message Object  Control Register */
#define CAN_MO19_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001927Cu)

/** Alias (User Manual Name) for CAN_MO19_CTR.
* To use register names with standard convension, please use CAN_MO19_CTR.
*/
#define	CAN_MOCTR19	(CAN_MO19_CTR)

/** \\brief  1274, Message Object  Data Register High */
#define CAN_MO19_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019274u)

/** Alias (User Manual Name) for CAN_MO19_DATAH.
* To use register names with standard convension, please use CAN_MO19_DATAH.
*/
#define	CAN_MODATAH19	(CAN_MO19_DATAH)

/** \\brief  1270, Message Object  Data Register Low */
#define CAN_MO19_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019270u)

/** Alias (User Manual Name) for CAN_MO19_DATAL.
* To use register names with standard convension, please use CAN_MO19_DATAL.
*/
#define	CAN_MODATAL19	(CAN_MO19_DATAL)

/** \\brief  1260, Message Object  Function Control Register */
#define CAN_MO19_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019260u)

/** Alias (User Manual Name) for CAN_MO19_FCR.
* To use register names with standard convension, please use CAN_MO19_FCR.
*/
#define	CAN_MOFCR19	(CAN_MO19_FCR)

/** \\brief  1264, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO19_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019264u)

/** Alias (User Manual Name) for CAN_MO19_FGPR.
* To use register names with standard convension, please use CAN_MO19_FGPR.
*/
#define	CAN_MOFGPR19	(CAN_MO19_FGPR)

/** \\brief  1268, Message Object  Interrupt Pointer Register */
#define CAN_MO19_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019268u)

/** Alias (User Manual Name) for CAN_MO19_IPR.
* To use register names with standard convension, please use CAN_MO19_IPR.
*/
#define	CAN_MOIPR19	(CAN_MO19_IPR)

/** \\brief  127C, Message Object  Control Register */
#define CAN_MO19_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001927Cu)

/** Alias (User Manual Name) for CAN_MO19_STAT.
* To use register names with standard convension, please use CAN_MO19_STAT.
*/
#define	CAN_MOSTAT19	(CAN_MO19_STAT)

/** \\brief  102C, Message Object  Acceptance Mask Register */
#define CAN_MO1_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001902Cu)

/** Alias (User Manual Name) for CAN_MO1_AMR.
* To use register names with standard convension, please use CAN_MO1_AMR.
*/
#define	CAN_MOAMR1	(CAN_MO1_AMR)

/** \\brief  1038, Message Object  Arbitration Register */
#define CAN_MO1_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019038u)

/** Alias (User Manual Name) for CAN_MO1_AR.
* To use register names with standard convension, please use CAN_MO1_AR.
*/
#define	CAN_MOAR1	(CAN_MO1_AR)

/** \\brief  103C, Message Object  Control Register */
#define CAN_MO1_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001903Cu)

/** Alias (User Manual Name) for CAN_MO1_CTR.
* To use register names with standard convension, please use CAN_MO1_CTR.
*/
#define	CAN_MOCTR1	(CAN_MO1_CTR)

/** \\brief  1034, Message Object  Data Register High */
#define CAN_MO1_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019034u)

/** Alias (User Manual Name) for CAN_MO1_DATAH.
* To use register names with standard convension, please use CAN_MO1_DATAH.
*/
#define	CAN_MODATAH1	(CAN_MO1_DATAH)

/** \\brief  1030, Message Object  Data Register Low */
#define CAN_MO1_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019030u)

/** Alias (User Manual Name) for CAN_MO1_DATAL.
* To use register names with standard convension, please use CAN_MO1_DATAL.
*/
#define	CAN_MODATAL1	(CAN_MO1_DATAL)

/** \\brief  1020, Message Object  Function Control Register */
#define CAN_MO1_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019020u)

/** Alias (User Manual Name) for CAN_MO1_FCR.
* To use register names with standard convension, please use CAN_MO1_FCR.
*/
#define	CAN_MOFCR1	(CAN_MO1_FCR)

/** \\brief  1024, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO1_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019024u)

/** Alias (User Manual Name) for CAN_MO1_FGPR.
* To use register names with standard convension, please use CAN_MO1_FGPR.
*/
#define	CAN_MOFGPR1	(CAN_MO1_FGPR)

/** \\brief  1028, Message Object  Interrupt Pointer Register */
#define CAN_MO1_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019028u)

/** Alias (User Manual Name) for CAN_MO1_IPR.
* To use register names with standard convension, please use CAN_MO1_IPR.
*/
#define	CAN_MOIPR1	(CAN_MO1_IPR)

/** \\brief  103C, Message Object  Control Register */
#define CAN_MO1_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001903Cu)

/** Alias (User Manual Name) for CAN_MO1_STAT.
* To use register names with standard convension, please use CAN_MO1_STAT.
*/
#define	CAN_MOSTAT1	(CAN_MO1_STAT)

/** \\brief  290C, Message Object  Acceptance Mask Register */
#define CAN_MO200_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A90Cu)

/** Alias (User Manual Name) for CAN_MO200_AMR.
* To use register names with standard convension, please use CAN_MO200_AMR.
*/
#define	CAN_MOAMR200	(CAN_MO200_AMR)

/** \\brief  2918, Message Object  Arbitration Register */
#define CAN_MO200_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A918u)

/** Alias (User Manual Name) for CAN_MO200_AR.
* To use register names with standard convension, please use CAN_MO200_AR.
*/
#define	CAN_MOAR200	(CAN_MO200_AR)

/** \\brief  291C, Message Object  Control Register */
#define CAN_MO200_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A91Cu)

/** Alias (User Manual Name) for CAN_MO200_CTR.
* To use register names with standard convension, please use CAN_MO200_CTR.
*/
#define	CAN_MOCTR200	(CAN_MO200_CTR)

/** \\brief  2914, Message Object  Data Register High */
#define CAN_MO200_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A914u)

/** Alias (User Manual Name) for CAN_MO200_DATAH.
* To use register names with standard convension, please use CAN_MO200_DATAH.
*/
#define	CAN_MODATAH200	(CAN_MO200_DATAH)

/** \\brief  2910, Message Object  Data Register Low */
#define CAN_MO200_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A910u)

/** Alias (User Manual Name) for CAN_MO200_DATAL.
* To use register names with standard convension, please use CAN_MO200_DATAL.
*/
#define	CAN_MODATAL200	(CAN_MO200_DATAL)

/** \\brief  2900, Message Object  Function Control Register */
#define CAN_MO200_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A900u)

/** Alias (User Manual Name) for CAN_MO200_FCR.
* To use register names with standard convension, please use CAN_MO200_FCR.
*/
#define	CAN_MOFCR200	(CAN_MO200_FCR)

/** \\brief  2904, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO200_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A904u)

/** Alias (User Manual Name) for CAN_MO200_FGPR.
* To use register names with standard convension, please use CAN_MO200_FGPR.
*/
#define	CAN_MOFGPR200	(CAN_MO200_FGPR)

/** \\brief  2908, Message Object  Interrupt Pointer Register */
#define CAN_MO200_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A908u)

/** Alias (User Manual Name) for CAN_MO200_IPR.
* To use register names with standard convension, please use CAN_MO200_IPR.
*/
#define	CAN_MOIPR200	(CAN_MO200_IPR)

/** \\brief  291C, Message Object  Control Register */
#define CAN_MO200_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A91Cu)

/** Alias (User Manual Name) for CAN_MO200_STAT.
* To use register names with standard convension, please use CAN_MO200_STAT.
*/
#define	CAN_MOSTAT200	(CAN_MO200_STAT)

/** \\brief  292C, Message Object  Acceptance Mask Register */
#define CAN_MO201_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A92Cu)

/** Alias (User Manual Name) for CAN_MO201_AMR.
* To use register names with standard convension, please use CAN_MO201_AMR.
*/
#define	CAN_MOAMR201	(CAN_MO201_AMR)

/** \\brief  2938, Message Object  Arbitration Register */
#define CAN_MO201_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A938u)

/** Alias (User Manual Name) for CAN_MO201_AR.
* To use register names with standard convension, please use CAN_MO201_AR.
*/
#define	CAN_MOAR201	(CAN_MO201_AR)

/** \\brief  293C, Message Object  Control Register */
#define CAN_MO201_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A93Cu)

/** Alias (User Manual Name) for CAN_MO201_CTR.
* To use register names with standard convension, please use CAN_MO201_CTR.
*/
#define	CAN_MOCTR201	(CAN_MO201_CTR)

/** \\brief  2934, Message Object  Data Register High */
#define CAN_MO201_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A934u)

/** Alias (User Manual Name) for CAN_MO201_DATAH.
* To use register names with standard convension, please use CAN_MO201_DATAH.
*/
#define	CAN_MODATAH201	(CAN_MO201_DATAH)

/** \\brief  2930, Message Object  Data Register Low */
#define CAN_MO201_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A930u)

/** Alias (User Manual Name) for CAN_MO201_DATAL.
* To use register names with standard convension, please use CAN_MO201_DATAL.
*/
#define	CAN_MODATAL201	(CAN_MO201_DATAL)

/** \\brief  2920, Message Object  Function Control Register */
#define CAN_MO201_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A920u)

/** Alias (User Manual Name) for CAN_MO201_FCR.
* To use register names with standard convension, please use CAN_MO201_FCR.
*/
#define	CAN_MOFCR201	(CAN_MO201_FCR)

/** \\brief  2924, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO201_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A924u)

/** Alias (User Manual Name) for CAN_MO201_FGPR.
* To use register names with standard convension, please use CAN_MO201_FGPR.
*/
#define	CAN_MOFGPR201	(CAN_MO201_FGPR)

/** \\brief  2928, Message Object  Interrupt Pointer Register */
#define CAN_MO201_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A928u)

/** Alias (User Manual Name) for CAN_MO201_IPR.
* To use register names with standard convension, please use CAN_MO201_IPR.
*/
#define	CAN_MOIPR201	(CAN_MO201_IPR)

/** \\brief  293C, Message Object  Control Register */
#define CAN_MO201_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A93Cu)

/** Alias (User Manual Name) for CAN_MO201_STAT.
* To use register names with standard convension, please use CAN_MO201_STAT.
*/
#define	CAN_MOSTAT201	(CAN_MO201_STAT)

/** \\brief  294C, Message Object  Acceptance Mask Register */
#define CAN_MO202_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A94Cu)

/** Alias (User Manual Name) for CAN_MO202_AMR.
* To use register names with standard convension, please use CAN_MO202_AMR.
*/
#define	CAN_MOAMR202	(CAN_MO202_AMR)

/** \\brief  2958, Message Object  Arbitration Register */
#define CAN_MO202_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A958u)

/** Alias (User Manual Name) for CAN_MO202_AR.
* To use register names with standard convension, please use CAN_MO202_AR.
*/
#define	CAN_MOAR202	(CAN_MO202_AR)

/** \\brief  295C, Message Object  Control Register */
#define CAN_MO202_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A95Cu)

/** Alias (User Manual Name) for CAN_MO202_CTR.
* To use register names with standard convension, please use CAN_MO202_CTR.
*/
#define	CAN_MOCTR202	(CAN_MO202_CTR)

/** \\brief  2954, Message Object  Data Register High */
#define CAN_MO202_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A954u)

/** Alias (User Manual Name) for CAN_MO202_DATAH.
* To use register names with standard convension, please use CAN_MO202_DATAH.
*/
#define	CAN_MODATAH202	(CAN_MO202_DATAH)

/** \\brief  2950, Message Object  Data Register Low */
#define CAN_MO202_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A950u)

/** Alias (User Manual Name) for CAN_MO202_DATAL.
* To use register names with standard convension, please use CAN_MO202_DATAL.
*/
#define	CAN_MODATAL202	(CAN_MO202_DATAL)

/** \\brief  2940, Message Object  Function Control Register */
#define CAN_MO202_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A940u)

/** Alias (User Manual Name) for CAN_MO202_FCR.
* To use register names with standard convension, please use CAN_MO202_FCR.
*/
#define	CAN_MOFCR202	(CAN_MO202_FCR)

/** \\brief  2944, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO202_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A944u)

/** Alias (User Manual Name) for CAN_MO202_FGPR.
* To use register names with standard convension, please use CAN_MO202_FGPR.
*/
#define	CAN_MOFGPR202	(CAN_MO202_FGPR)

/** \\brief  2948, Message Object  Interrupt Pointer Register */
#define CAN_MO202_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A948u)

/** Alias (User Manual Name) for CAN_MO202_IPR.
* To use register names with standard convension, please use CAN_MO202_IPR.
*/
#define	CAN_MOIPR202	(CAN_MO202_IPR)

/** \\brief  295C, Message Object  Control Register */
#define CAN_MO202_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A95Cu)

/** Alias (User Manual Name) for CAN_MO202_STAT.
* To use register names with standard convension, please use CAN_MO202_STAT.
*/
#define	CAN_MOSTAT202	(CAN_MO202_STAT)

/** \\brief  296C, Message Object  Acceptance Mask Register */
#define CAN_MO203_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A96Cu)

/** Alias (User Manual Name) for CAN_MO203_AMR.
* To use register names with standard convension, please use CAN_MO203_AMR.
*/
#define	CAN_MOAMR203	(CAN_MO203_AMR)

/** \\brief  2978, Message Object  Arbitration Register */
#define CAN_MO203_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A978u)

/** Alias (User Manual Name) for CAN_MO203_AR.
* To use register names with standard convension, please use CAN_MO203_AR.
*/
#define	CAN_MOAR203	(CAN_MO203_AR)

/** \\brief  297C, Message Object  Control Register */
#define CAN_MO203_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A97Cu)

/** Alias (User Manual Name) for CAN_MO203_CTR.
* To use register names with standard convension, please use CAN_MO203_CTR.
*/
#define	CAN_MOCTR203	(CAN_MO203_CTR)

/** \\brief  2974, Message Object  Data Register High */
#define CAN_MO203_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A974u)

/** Alias (User Manual Name) for CAN_MO203_DATAH.
* To use register names with standard convension, please use CAN_MO203_DATAH.
*/
#define	CAN_MODATAH203	(CAN_MO203_DATAH)

/** \\brief  2970, Message Object  Data Register Low */
#define CAN_MO203_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A970u)

/** Alias (User Manual Name) for CAN_MO203_DATAL.
* To use register names with standard convension, please use CAN_MO203_DATAL.
*/
#define	CAN_MODATAL203	(CAN_MO203_DATAL)

/** \\brief  2960, Message Object  Function Control Register */
#define CAN_MO203_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A960u)

/** Alias (User Manual Name) for CAN_MO203_FCR.
* To use register names with standard convension, please use CAN_MO203_FCR.
*/
#define	CAN_MOFCR203	(CAN_MO203_FCR)

/** \\brief  2964, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO203_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A964u)

/** Alias (User Manual Name) for CAN_MO203_FGPR.
* To use register names with standard convension, please use CAN_MO203_FGPR.
*/
#define	CAN_MOFGPR203	(CAN_MO203_FGPR)

/** \\brief  2968, Message Object  Interrupt Pointer Register */
#define CAN_MO203_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A968u)

/** Alias (User Manual Name) for CAN_MO203_IPR.
* To use register names with standard convension, please use CAN_MO203_IPR.
*/
#define	CAN_MOIPR203	(CAN_MO203_IPR)

/** \\brief  297C, Message Object  Control Register */
#define CAN_MO203_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A97Cu)

/** Alias (User Manual Name) for CAN_MO203_STAT.
* To use register names with standard convension, please use CAN_MO203_STAT.
*/
#define	CAN_MOSTAT203	(CAN_MO203_STAT)

/** \\brief  298C, Message Object  Acceptance Mask Register */
#define CAN_MO204_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A98Cu)

/** Alias (User Manual Name) for CAN_MO204_AMR.
* To use register names with standard convension, please use CAN_MO204_AMR.
*/
#define	CAN_MOAMR204	(CAN_MO204_AMR)

/** \\brief  2998, Message Object  Arbitration Register */
#define CAN_MO204_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A998u)

/** Alias (User Manual Name) for CAN_MO204_AR.
* To use register names with standard convension, please use CAN_MO204_AR.
*/
#define	CAN_MOAR204	(CAN_MO204_AR)

/** \\brief  299C, Message Object  Control Register */
#define CAN_MO204_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A99Cu)

/** Alias (User Manual Name) for CAN_MO204_CTR.
* To use register names with standard convension, please use CAN_MO204_CTR.
*/
#define	CAN_MOCTR204	(CAN_MO204_CTR)

/** \\brief  2994, Message Object  Data Register High */
#define CAN_MO204_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A994u)

/** Alias (User Manual Name) for CAN_MO204_DATAH.
* To use register names with standard convension, please use CAN_MO204_DATAH.
*/
#define	CAN_MODATAH204	(CAN_MO204_DATAH)

/** \\brief  2990, Message Object  Data Register Low */
#define CAN_MO204_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A990u)

/** Alias (User Manual Name) for CAN_MO204_DATAL.
* To use register names with standard convension, please use CAN_MO204_DATAL.
*/
#define	CAN_MODATAL204	(CAN_MO204_DATAL)

/** \\brief  2980, Message Object  Function Control Register */
#define CAN_MO204_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A980u)

/** Alias (User Manual Name) for CAN_MO204_FCR.
* To use register names with standard convension, please use CAN_MO204_FCR.
*/
#define	CAN_MOFCR204	(CAN_MO204_FCR)

/** \\brief  2984, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO204_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A984u)

/** Alias (User Manual Name) for CAN_MO204_FGPR.
* To use register names with standard convension, please use CAN_MO204_FGPR.
*/
#define	CAN_MOFGPR204	(CAN_MO204_FGPR)

/** \\brief  2988, Message Object  Interrupt Pointer Register */
#define CAN_MO204_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A988u)

/** Alias (User Manual Name) for CAN_MO204_IPR.
* To use register names with standard convension, please use CAN_MO204_IPR.
*/
#define	CAN_MOIPR204	(CAN_MO204_IPR)

/** \\brief  299C, Message Object  Control Register */
#define CAN_MO204_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A99Cu)

/** Alias (User Manual Name) for CAN_MO204_STAT.
* To use register names with standard convension, please use CAN_MO204_STAT.
*/
#define	CAN_MOSTAT204	(CAN_MO204_STAT)

/** \\brief  29AC, Message Object  Acceptance Mask Register */
#define CAN_MO205_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A9ACu)

/** Alias (User Manual Name) for CAN_MO205_AMR.
* To use register names with standard convension, please use CAN_MO205_AMR.
*/
#define	CAN_MOAMR205	(CAN_MO205_AMR)

/** \\brief  29B8, Message Object  Arbitration Register */
#define CAN_MO205_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A9B8u)

/** Alias (User Manual Name) for CAN_MO205_AR.
* To use register names with standard convension, please use CAN_MO205_AR.
*/
#define	CAN_MOAR205	(CAN_MO205_AR)

/** \\brief  29BC, Message Object  Control Register */
#define CAN_MO205_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A9BCu)

/** Alias (User Manual Name) for CAN_MO205_CTR.
* To use register names with standard convension, please use CAN_MO205_CTR.
*/
#define	CAN_MOCTR205	(CAN_MO205_CTR)

/** \\brief  29B4, Message Object  Data Register High */
#define CAN_MO205_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A9B4u)

/** Alias (User Manual Name) for CAN_MO205_DATAH.
* To use register names with standard convension, please use CAN_MO205_DATAH.
*/
#define	CAN_MODATAH205	(CAN_MO205_DATAH)

/** \\brief  29B0, Message Object  Data Register Low */
#define CAN_MO205_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A9B0u)

/** Alias (User Manual Name) for CAN_MO205_DATAL.
* To use register names with standard convension, please use CAN_MO205_DATAL.
*/
#define	CAN_MODATAL205	(CAN_MO205_DATAL)

/** \\brief  29A0, Message Object  Function Control Register */
#define CAN_MO205_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A9A0u)

/** Alias (User Manual Name) for CAN_MO205_FCR.
* To use register names with standard convension, please use CAN_MO205_FCR.
*/
#define	CAN_MOFCR205	(CAN_MO205_FCR)

/** \\brief  29A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO205_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A9A4u)

/** Alias (User Manual Name) for CAN_MO205_FGPR.
* To use register names with standard convension, please use CAN_MO205_FGPR.
*/
#define	CAN_MOFGPR205	(CAN_MO205_FGPR)

/** \\brief  29A8, Message Object  Interrupt Pointer Register */
#define CAN_MO205_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A9A8u)

/** Alias (User Manual Name) for CAN_MO205_IPR.
* To use register names with standard convension, please use CAN_MO205_IPR.
*/
#define	CAN_MOIPR205	(CAN_MO205_IPR)

/** \\brief  29BC, Message Object  Control Register */
#define CAN_MO205_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A9BCu)

/** Alias (User Manual Name) for CAN_MO205_STAT.
* To use register names with standard convension, please use CAN_MO205_STAT.
*/
#define	CAN_MOSTAT205	(CAN_MO205_STAT)

/** \\brief  29CC, Message Object  Acceptance Mask Register */
#define CAN_MO206_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A9CCu)

/** Alias (User Manual Name) for CAN_MO206_AMR.
* To use register names with standard convension, please use CAN_MO206_AMR.
*/
#define	CAN_MOAMR206	(CAN_MO206_AMR)

/** \\brief  29D8, Message Object  Arbitration Register */
#define CAN_MO206_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A9D8u)

/** Alias (User Manual Name) for CAN_MO206_AR.
* To use register names with standard convension, please use CAN_MO206_AR.
*/
#define	CAN_MOAR206	(CAN_MO206_AR)

/** \\brief  29DC, Message Object  Control Register */
#define CAN_MO206_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A9DCu)

/** Alias (User Manual Name) for CAN_MO206_CTR.
* To use register names with standard convension, please use CAN_MO206_CTR.
*/
#define	CAN_MOCTR206	(CAN_MO206_CTR)

/** \\brief  29D4, Message Object  Data Register High */
#define CAN_MO206_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A9D4u)

/** Alias (User Manual Name) for CAN_MO206_DATAH.
* To use register names with standard convension, please use CAN_MO206_DATAH.
*/
#define	CAN_MODATAH206	(CAN_MO206_DATAH)

/** \\brief  29D0, Message Object  Data Register Low */
#define CAN_MO206_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A9D0u)

/** Alias (User Manual Name) for CAN_MO206_DATAL.
* To use register names with standard convension, please use CAN_MO206_DATAL.
*/
#define	CAN_MODATAL206	(CAN_MO206_DATAL)

/** \\brief  29C0, Message Object  Function Control Register */
#define CAN_MO206_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A9C0u)

/** Alias (User Manual Name) for CAN_MO206_FCR.
* To use register names with standard convension, please use CAN_MO206_FCR.
*/
#define	CAN_MOFCR206	(CAN_MO206_FCR)

/** \\brief  29C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO206_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A9C4u)

/** Alias (User Manual Name) for CAN_MO206_FGPR.
* To use register names with standard convension, please use CAN_MO206_FGPR.
*/
#define	CAN_MOFGPR206	(CAN_MO206_FGPR)

/** \\brief  29C8, Message Object  Interrupt Pointer Register */
#define CAN_MO206_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A9C8u)

/** Alias (User Manual Name) for CAN_MO206_IPR.
* To use register names with standard convension, please use CAN_MO206_IPR.
*/
#define	CAN_MOIPR206	(CAN_MO206_IPR)

/** \\brief  29DC, Message Object  Control Register */
#define CAN_MO206_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A9DCu)

/** Alias (User Manual Name) for CAN_MO206_STAT.
* To use register names with standard convension, please use CAN_MO206_STAT.
*/
#define	CAN_MOSTAT206	(CAN_MO206_STAT)

/** \\brief  29EC, Message Object  Acceptance Mask Register */
#define CAN_MO207_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001A9ECu)

/** Alias (User Manual Name) for CAN_MO207_AMR.
* To use register names with standard convension, please use CAN_MO207_AMR.
*/
#define	CAN_MOAMR207	(CAN_MO207_AMR)

/** \\brief  29F8, Message Object  Arbitration Register */
#define CAN_MO207_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001A9F8u)

/** Alias (User Manual Name) for CAN_MO207_AR.
* To use register names with standard convension, please use CAN_MO207_AR.
*/
#define	CAN_MOAR207	(CAN_MO207_AR)

/** \\brief  29FC, Message Object  Control Register */
#define CAN_MO207_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001A9FCu)

/** Alias (User Manual Name) for CAN_MO207_CTR.
* To use register names with standard convension, please use CAN_MO207_CTR.
*/
#define	CAN_MOCTR207	(CAN_MO207_CTR)

/** \\brief  29F4, Message Object  Data Register High */
#define CAN_MO207_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001A9F4u)

/** Alias (User Manual Name) for CAN_MO207_DATAH.
* To use register names with standard convension, please use CAN_MO207_DATAH.
*/
#define	CAN_MODATAH207	(CAN_MO207_DATAH)

/** \\brief  29F0, Message Object  Data Register Low */
#define CAN_MO207_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001A9F0u)

/** Alias (User Manual Name) for CAN_MO207_DATAL.
* To use register names with standard convension, please use CAN_MO207_DATAL.
*/
#define	CAN_MODATAL207	(CAN_MO207_DATAL)

/** \\brief  29E0, Message Object  Function Control Register */
#define CAN_MO207_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001A9E0u)

/** Alias (User Manual Name) for CAN_MO207_FCR.
* To use register names with standard convension, please use CAN_MO207_FCR.
*/
#define	CAN_MOFCR207	(CAN_MO207_FCR)

/** \\brief  29E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO207_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001A9E4u)

/** Alias (User Manual Name) for CAN_MO207_FGPR.
* To use register names with standard convension, please use CAN_MO207_FGPR.
*/
#define	CAN_MOFGPR207	(CAN_MO207_FGPR)

/** \\brief  29E8, Message Object  Interrupt Pointer Register */
#define CAN_MO207_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001A9E8u)

/** Alias (User Manual Name) for CAN_MO207_IPR.
* To use register names with standard convension, please use CAN_MO207_IPR.
*/
#define	CAN_MOIPR207	(CAN_MO207_IPR)

/** \\brief  29FC, Message Object  Control Register */
#define CAN_MO207_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001A9FCu)

/** Alias (User Manual Name) for CAN_MO207_STAT.
* To use register names with standard convension, please use CAN_MO207_STAT.
*/
#define	CAN_MOSTAT207	(CAN_MO207_STAT)

/** \\brief  2A0C, Message Object  Acceptance Mask Register */
#define CAN_MO208_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AA0Cu)

/** Alias (User Manual Name) for CAN_MO208_AMR.
* To use register names with standard convension, please use CAN_MO208_AMR.
*/
#define	CAN_MOAMR208	(CAN_MO208_AMR)

/** \\brief  2A18, Message Object  Arbitration Register */
#define CAN_MO208_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AA18u)

/** Alias (User Manual Name) for CAN_MO208_AR.
* To use register names with standard convension, please use CAN_MO208_AR.
*/
#define	CAN_MOAR208	(CAN_MO208_AR)

/** \\brief  2A1C, Message Object  Control Register */
#define CAN_MO208_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AA1Cu)

/** Alias (User Manual Name) for CAN_MO208_CTR.
* To use register names with standard convension, please use CAN_MO208_CTR.
*/
#define	CAN_MOCTR208	(CAN_MO208_CTR)

/** \\brief  2A14, Message Object  Data Register High */
#define CAN_MO208_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AA14u)

/** Alias (User Manual Name) for CAN_MO208_DATAH.
* To use register names with standard convension, please use CAN_MO208_DATAH.
*/
#define	CAN_MODATAH208	(CAN_MO208_DATAH)

/** \\brief  2A10, Message Object  Data Register Low */
#define CAN_MO208_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AA10u)

/** Alias (User Manual Name) for CAN_MO208_DATAL.
* To use register names with standard convension, please use CAN_MO208_DATAL.
*/
#define	CAN_MODATAL208	(CAN_MO208_DATAL)

/** \\brief  2A00, Message Object  Function Control Register */
#define CAN_MO208_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AA00u)

/** Alias (User Manual Name) for CAN_MO208_FCR.
* To use register names with standard convension, please use CAN_MO208_FCR.
*/
#define	CAN_MOFCR208	(CAN_MO208_FCR)

/** \\brief  2A04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO208_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AA04u)

/** Alias (User Manual Name) for CAN_MO208_FGPR.
* To use register names with standard convension, please use CAN_MO208_FGPR.
*/
#define	CAN_MOFGPR208	(CAN_MO208_FGPR)

/** \\brief  2A08, Message Object  Interrupt Pointer Register */
#define CAN_MO208_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AA08u)

/** Alias (User Manual Name) for CAN_MO208_IPR.
* To use register names with standard convension, please use CAN_MO208_IPR.
*/
#define	CAN_MOIPR208	(CAN_MO208_IPR)

/** \\brief  2A1C, Message Object  Control Register */
#define CAN_MO208_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AA1Cu)

/** Alias (User Manual Name) for CAN_MO208_STAT.
* To use register names with standard convension, please use CAN_MO208_STAT.
*/
#define	CAN_MOSTAT208	(CAN_MO208_STAT)

/** \\brief  2A2C, Message Object  Acceptance Mask Register */
#define CAN_MO209_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AA2Cu)

/** Alias (User Manual Name) for CAN_MO209_AMR.
* To use register names with standard convension, please use CAN_MO209_AMR.
*/
#define	CAN_MOAMR209	(CAN_MO209_AMR)

/** \\brief  2A38, Message Object  Arbitration Register */
#define CAN_MO209_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AA38u)

/** Alias (User Manual Name) for CAN_MO209_AR.
* To use register names with standard convension, please use CAN_MO209_AR.
*/
#define	CAN_MOAR209	(CAN_MO209_AR)

/** \\brief  2A3C, Message Object  Control Register */
#define CAN_MO209_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AA3Cu)

/** Alias (User Manual Name) for CAN_MO209_CTR.
* To use register names with standard convension, please use CAN_MO209_CTR.
*/
#define	CAN_MOCTR209	(CAN_MO209_CTR)

/** \\brief  2A34, Message Object  Data Register High */
#define CAN_MO209_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AA34u)

/** Alias (User Manual Name) for CAN_MO209_DATAH.
* To use register names with standard convension, please use CAN_MO209_DATAH.
*/
#define	CAN_MODATAH209	(CAN_MO209_DATAH)

/** \\brief  2A30, Message Object  Data Register Low */
#define CAN_MO209_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AA30u)

/** Alias (User Manual Name) for CAN_MO209_DATAL.
* To use register names with standard convension, please use CAN_MO209_DATAL.
*/
#define	CAN_MODATAL209	(CAN_MO209_DATAL)

/** \\brief  2A20, Message Object  Function Control Register */
#define CAN_MO209_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AA20u)

/** Alias (User Manual Name) for CAN_MO209_FCR.
* To use register names with standard convension, please use CAN_MO209_FCR.
*/
#define	CAN_MOFCR209	(CAN_MO209_FCR)

/** \\brief  2A24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO209_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AA24u)

/** Alias (User Manual Name) for CAN_MO209_FGPR.
* To use register names with standard convension, please use CAN_MO209_FGPR.
*/
#define	CAN_MOFGPR209	(CAN_MO209_FGPR)

/** \\brief  2A28, Message Object  Interrupt Pointer Register */
#define CAN_MO209_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AA28u)

/** Alias (User Manual Name) for CAN_MO209_IPR.
* To use register names with standard convension, please use CAN_MO209_IPR.
*/
#define	CAN_MOIPR209	(CAN_MO209_IPR)

/** \\brief  2A3C, Message Object  Control Register */
#define CAN_MO209_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AA3Cu)

/** Alias (User Manual Name) for CAN_MO209_STAT.
* To use register names with standard convension, please use CAN_MO209_STAT.
*/
#define	CAN_MOSTAT209	(CAN_MO209_STAT)

/** \\brief  128C, Message Object  Acceptance Mask Register */
#define CAN_MO20_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001928Cu)

/** Alias (User Manual Name) for CAN_MO20_AMR.
* To use register names with standard convension, please use CAN_MO20_AMR.
*/
#define	CAN_MOAMR20	(CAN_MO20_AMR)

/** \\brief  1298, Message Object  Arbitration Register */
#define CAN_MO20_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019298u)

/** Alias (User Manual Name) for CAN_MO20_AR.
* To use register names with standard convension, please use CAN_MO20_AR.
*/
#define	CAN_MOAR20	(CAN_MO20_AR)

/** \\brief  129C, Message Object  Control Register */
#define CAN_MO20_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001929Cu)

/** Alias (User Manual Name) for CAN_MO20_CTR.
* To use register names with standard convension, please use CAN_MO20_CTR.
*/
#define	CAN_MOCTR20	(CAN_MO20_CTR)

/** \\brief  1294, Message Object  Data Register High */
#define CAN_MO20_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019294u)

/** Alias (User Manual Name) for CAN_MO20_DATAH.
* To use register names with standard convension, please use CAN_MO20_DATAH.
*/
#define	CAN_MODATAH20	(CAN_MO20_DATAH)

/** \\brief  1290, Message Object  Data Register Low */
#define CAN_MO20_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019290u)

/** Alias (User Manual Name) for CAN_MO20_DATAL.
* To use register names with standard convension, please use CAN_MO20_DATAL.
*/
#define	CAN_MODATAL20	(CAN_MO20_DATAL)

/** \\brief  1280, Message Object  Function Control Register */
#define CAN_MO20_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019280u)

/** Alias (User Manual Name) for CAN_MO20_FCR.
* To use register names with standard convension, please use CAN_MO20_FCR.
*/
#define	CAN_MOFCR20	(CAN_MO20_FCR)

/** \\brief  1284, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO20_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019284u)

/** Alias (User Manual Name) for CAN_MO20_FGPR.
* To use register names with standard convension, please use CAN_MO20_FGPR.
*/
#define	CAN_MOFGPR20	(CAN_MO20_FGPR)

/** \\brief  1288, Message Object  Interrupt Pointer Register */
#define CAN_MO20_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019288u)

/** Alias (User Manual Name) for CAN_MO20_IPR.
* To use register names with standard convension, please use CAN_MO20_IPR.
*/
#define	CAN_MOIPR20	(CAN_MO20_IPR)

/** \\brief  129C, Message Object  Control Register */
#define CAN_MO20_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001929Cu)

/** Alias (User Manual Name) for CAN_MO20_STAT.
* To use register names with standard convension, please use CAN_MO20_STAT.
*/
#define	CAN_MOSTAT20	(CAN_MO20_STAT)

/** \\brief  2A4C, Message Object  Acceptance Mask Register */
#define CAN_MO210_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AA4Cu)

/** Alias (User Manual Name) for CAN_MO210_AMR.
* To use register names with standard convension, please use CAN_MO210_AMR.
*/
#define	CAN_MOAMR210	(CAN_MO210_AMR)

/** \\brief  2A58, Message Object  Arbitration Register */
#define CAN_MO210_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AA58u)

/** Alias (User Manual Name) for CAN_MO210_AR.
* To use register names with standard convension, please use CAN_MO210_AR.
*/
#define	CAN_MOAR210	(CAN_MO210_AR)

/** \\brief  2A5C, Message Object  Control Register */
#define CAN_MO210_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AA5Cu)

/** Alias (User Manual Name) for CAN_MO210_CTR.
* To use register names with standard convension, please use CAN_MO210_CTR.
*/
#define	CAN_MOCTR210	(CAN_MO210_CTR)

/** \\brief  2A54, Message Object  Data Register High */
#define CAN_MO210_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AA54u)

/** Alias (User Manual Name) for CAN_MO210_DATAH.
* To use register names with standard convension, please use CAN_MO210_DATAH.
*/
#define	CAN_MODATAH210	(CAN_MO210_DATAH)

/** \\brief  2A50, Message Object  Data Register Low */
#define CAN_MO210_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AA50u)

/** Alias (User Manual Name) for CAN_MO210_DATAL.
* To use register names with standard convension, please use CAN_MO210_DATAL.
*/
#define	CAN_MODATAL210	(CAN_MO210_DATAL)

/** \\brief  2A40, Message Object  Function Control Register */
#define CAN_MO210_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AA40u)

/** Alias (User Manual Name) for CAN_MO210_FCR.
* To use register names with standard convension, please use CAN_MO210_FCR.
*/
#define	CAN_MOFCR210	(CAN_MO210_FCR)

/** \\brief  2A44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO210_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AA44u)

/** Alias (User Manual Name) for CAN_MO210_FGPR.
* To use register names with standard convension, please use CAN_MO210_FGPR.
*/
#define	CAN_MOFGPR210	(CAN_MO210_FGPR)

/** \\brief  2A48, Message Object  Interrupt Pointer Register */
#define CAN_MO210_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AA48u)

/** Alias (User Manual Name) for CAN_MO210_IPR.
* To use register names with standard convension, please use CAN_MO210_IPR.
*/
#define	CAN_MOIPR210	(CAN_MO210_IPR)

/** \\brief  2A5C, Message Object  Control Register */
#define CAN_MO210_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AA5Cu)

/** Alias (User Manual Name) for CAN_MO210_STAT.
* To use register names with standard convension, please use CAN_MO210_STAT.
*/
#define	CAN_MOSTAT210	(CAN_MO210_STAT)

/** \\brief  2A6C, Message Object  Acceptance Mask Register */
#define CAN_MO211_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AA6Cu)

/** Alias (User Manual Name) for CAN_MO211_AMR.
* To use register names with standard convension, please use CAN_MO211_AMR.
*/
#define	CAN_MOAMR211	(CAN_MO211_AMR)

/** \\brief  2A78, Message Object  Arbitration Register */
#define CAN_MO211_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AA78u)

/** Alias (User Manual Name) for CAN_MO211_AR.
* To use register names with standard convension, please use CAN_MO211_AR.
*/
#define	CAN_MOAR211	(CAN_MO211_AR)

/** \\brief  2A7C, Message Object  Control Register */
#define CAN_MO211_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AA7Cu)

/** Alias (User Manual Name) for CAN_MO211_CTR.
* To use register names with standard convension, please use CAN_MO211_CTR.
*/
#define	CAN_MOCTR211	(CAN_MO211_CTR)

/** \\brief  2A74, Message Object  Data Register High */
#define CAN_MO211_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AA74u)

/** Alias (User Manual Name) for CAN_MO211_DATAH.
* To use register names with standard convension, please use CAN_MO211_DATAH.
*/
#define	CAN_MODATAH211	(CAN_MO211_DATAH)

/** \\brief  2A70, Message Object  Data Register Low */
#define CAN_MO211_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AA70u)

/** Alias (User Manual Name) for CAN_MO211_DATAL.
* To use register names with standard convension, please use CAN_MO211_DATAL.
*/
#define	CAN_MODATAL211	(CAN_MO211_DATAL)

/** \\brief  2A60, Message Object  Function Control Register */
#define CAN_MO211_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AA60u)

/** Alias (User Manual Name) for CAN_MO211_FCR.
* To use register names with standard convension, please use CAN_MO211_FCR.
*/
#define	CAN_MOFCR211	(CAN_MO211_FCR)

/** \\brief  2A64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO211_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AA64u)

/** Alias (User Manual Name) for CAN_MO211_FGPR.
* To use register names with standard convension, please use CAN_MO211_FGPR.
*/
#define	CAN_MOFGPR211	(CAN_MO211_FGPR)

/** \\brief  2A68, Message Object  Interrupt Pointer Register */
#define CAN_MO211_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AA68u)

/** Alias (User Manual Name) for CAN_MO211_IPR.
* To use register names with standard convension, please use CAN_MO211_IPR.
*/
#define	CAN_MOIPR211	(CAN_MO211_IPR)

/** \\brief  2A7C, Message Object  Control Register */
#define CAN_MO211_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AA7Cu)

/** Alias (User Manual Name) for CAN_MO211_STAT.
* To use register names with standard convension, please use CAN_MO211_STAT.
*/
#define	CAN_MOSTAT211	(CAN_MO211_STAT)

/** \\brief  2A8C, Message Object  Acceptance Mask Register */
#define CAN_MO212_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AA8Cu)

/** Alias (User Manual Name) for CAN_MO212_AMR.
* To use register names with standard convension, please use CAN_MO212_AMR.
*/
#define	CAN_MOAMR212	(CAN_MO212_AMR)

/** \\brief  2A98, Message Object  Arbitration Register */
#define CAN_MO212_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AA98u)

/** Alias (User Manual Name) for CAN_MO212_AR.
* To use register names with standard convension, please use CAN_MO212_AR.
*/
#define	CAN_MOAR212	(CAN_MO212_AR)

/** \\brief  2A9C, Message Object  Control Register */
#define CAN_MO212_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AA9Cu)

/** Alias (User Manual Name) for CAN_MO212_CTR.
* To use register names with standard convension, please use CAN_MO212_CTR.
*/
#define	CAN_MOCTR212	(CAN_MO212_CTR)

/** \\brief  2A94, Message Object  Data Register High */
#define CAN_MO212_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AA94u)

/** Alias (User Manual Name) for CAN_MO212_DATAH.
* To use register names with standard convension, please use CAN_MO212_DATAH.
*/
#define	CAN_MODATAH212	(CAN_MO212_DATAH)

/** \\brief  2A90, Message Object  Data Register Low */
#define CAN_MO212_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AA90u)

/** Alias (User Manual Name) for CAN_MO212_DATAL.
* To use register names with standard convension, please use CAN_MO212_DATAL.
*/
#define	CAN_MODATAL212	(CAN_MO212_DATAL)

/** \\brief  2A80, Message Object  Function Control Register */
#define CAN_MO212_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AA80u)

/** Alias (User Manual Name) for CAN_MO212_FCR.
* To use register names with standard convension, please use CAN_MO212_FCR.
*/
#define	CAN_MOFCR212	(CAN_MO212_FCR)

/** \\brief  2A84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO212_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AA84u)

/** Alias (User Manual Name) for CAN_MO212_FGPR.
* To use register names with standard convension, please use CAN_MO212_FGPR.
*/
#define	CAN_MOFGPR212	(CAN_MO212_FGPR)

/** \\brief  2A88, Message Object  Interrupt Pointer Register */
#define CAN_MO212_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AA88u)

/** Alias (User Manual Name) for CAN_MO212_IPR.
* To use register names with standard convension, please use CAN_MO212_IPR.
*/
#define	CAN_MOIPR212	(CAN_MO212_IPR)

/** \\brief  2A9C, Message Object  Control Register */
#define CAN_MO212_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AA9Cu)

/** Alias (User Manual Name) for CAN_MO212_STAT.
* To use register names with standard convension, please use CAN_MO212_STAT.
*/
#define	CAN_MOSTAT212	(CAN_MO212_STAT)

/** \\brief  2AAC, Message Object  Acceptance Mask Register */
#define CAN_MO213_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AAACu)

/** Alias (User Manual Name) for CAN_MO213_AMR.
* To use register names with standard convension, please use CAN_MO213_AMR.
*/
#define	CAN_MOAMR213	(CAN_MO213_AMR)

/** \\brief  2AB8, Message Object  Arbitration Register */
#define CAN_MO213_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AAB8u)

/** Alias (User Manual Name) for CAN_MO213_AR.
* To use register names with standard convension, please use CAN_MO213_AR.
*/
#define	CAN_MOAR213	(CAN_MO213_AR)

/** \\brief  2ABC, Message Object  Control Register */
#define CAN_MO213_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AABCu)

/** Alias (User Manual Name) for CAN_MO213_CTR.
* To use register names with standard convension, please use CAN_MO213_CTR.
*/
#define	CAN_MOCTR213	(CAN_MO213_CTR)

/** \\brief  2AB4, Message Object  Data Register High */
#define CAN_MO213_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AAB4u)

/** Alias (User Manual Name) for CAN_MO213_DATAH.
* To use register names with standard convension, please use CAN_MO213_DATAH.
*/
#define	CAN_MODATAH213	(CAN_MO213_DATAH)

/** \\brief  2AB0, Message Object  Data Register Low */
#define CAN_MO213_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AAB0u)

/** Alias (User Manual Name) for CAN_MO213_DATAL.
* To use register names with standard convension, please use CAN_MO213_DATAL.
*/
#define	CAN_MODATAL213	(CAN_MO213_DATAL)

/** \\brief  2AA0, Message Object  Function Control Register */
#define CAN_MO213_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AAA0u)

/** Alias (User Manual Name) for CAN_MO213_FCR.
* To use register names with standard convension, please use CAN_MO213_FCR.
*/
#define	CAN_MOFCR213	(CAN_MO213_FCR)

/** \\brief  2AA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO213_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AAA4u)

/** Alias (User Manual Name) for CAN_MO213_FGPR.
* To use register names with standard convension, please use CAN_MO213_FGPR.
*/
#define	CAN_MOFGPR213	(CAN_MO213_FGPR)

/** \\brief  2AA8, Message Object  Interrupt Pointer Register */
#define CAN_MO213_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AAA8u)

/** Alias (User Manual Name) for CAN_MO213_IPR.
* To use register names with standard convension, please use CAN_MO213_IPR.
*/
#define	CAN_MOIPR213	(CAN_MO213_IPR)

/** \\brief  2ABC, Message Object  Control Register */
#define CAN_MO213_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AABCu)

/** Alias (User Manual Name) for CAN_MO213_STAT.
* To use register names with standard convension, please use CAN_MO213_STAT.
*/
#define	CAN_MOSTAT213	(CAN_MO213_STAT)

/** \\brief  2ACC, Message Object  Acceptance Mask Register */
#define CAN_MO214_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AACCu)

/** Alias (User Manual Name) for CAN_MO214_AMR.
* To use register names with standard convension, please use CAN_MO214_AMR.
*/
#define	CAN_MOAMR214	(CAN_MO214_AMR)

/** \\brief  2AD8, Message Object  Arbitration Register */
#define CAN_MO214_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AAD8u)

/** Alias (User Manual Name) for CAN_MO214_AR.
* To use register names with standard convension, please use CAN_MO214_AR.
*/
#define	CAN_MOAR214	(CAN_MO214_AR)

/** \\brief  2ADC, Message Object  Control Register */
#define CAN_MO214_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AADCu)

/** Alias (User Manual Name) for CAN_MO214_CTR.
* To use register names with standard convension, please use CAN_MO214_CTR.
*/
#define	CAN_MOCTR214	(CAN_MO214_CTR)

/** \\brief  2AD4, Message Object  Data Register High */
#define CAN_MO214_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AAD4u)

/** Alias (User Manual Name) for CAN_MO214_DATAH.
* To use register names with standard convension, please use CAN_MO214_DATAH.
*/
#define	CAN_MODATAH214	(CAN_MO214_DATAH)

/** \\brief  2AD0, Message Object  Data Register Low */
#define CAN_MO214_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AAD0u)

/** Alias (User Manual Name) for CAN_MO214_DATAL.
* To use register names with standard convension, please use CAN_MO214_DATAL.
*/
#define	CAN_MODATAL214	(CAN_MO214_DATAL)

/** \\brief  2AC0, Message Object  Function Control Register */
#define CAN_MO214_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AAC0u)

/** Alias (User Manual Name) for CAN_MO214_FCR.
* To use register names with standard convension, please use CAN_MO214_FCR.
*/
#define	CAN_MOFCR214	(CAN_MO214_FCR)

/** \\brief  2AC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO214_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AAC4u)

/** Alias (User Manual Name) for CAN_MO214_FGPR.
* To use register names with standard convension, please use CAN_MO214_FGPR.
*/
#define	CAN_MOFGPR214	(CAN_MO214_FGPR)

/** \\brief  2AC8, Message Object  Interrupt Pointer Register */
#define CAN_MO214_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AAC8u)

/** Alias (User Manual Name) for CAN_MO214_IPR.
* To use register names with standard convension, please use CAN_MO214_IPR.
*/
#define	CAN_MOIPR214	(CAN_MO214_IPR)

/** \\brief  2ADC, Message Object  Control Register */
#define CAN_MO214_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AADCu)

/** Alias (User Manual Name) for CAN_MO214_STAT.
* To use register names with standard convension, please use CAN_MO214_STAT.
*/
#define	CAN_MOSTAT214	(CAN_MO214_STAT)

/** \\brief  2AEC, Message Object  Acceptance Mask Register */
#define CAN_MO215_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AAECu)

/** Alias (User Manual Name) for CAN_MO215_AMR.
* To use register names with standard convension, please use CAN_MO215_AMR.
*/
#define	CAN_MOAMR215	(CAN_MO215_AMR)

/** \\brief  2AF8, Message Object  Arbitration Register */
#define CAN_MO215_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AAF8u)

/** Alias (User Manual Name) for CAN_MO215_AR.
* To use register names with standard convension, please use CAN_MO215_AR.
*/
#define	CAN_MOAR215	(CAN_MO215_AR)

/** \\brief  2AFC, Message Object  Control Register */
#define CAN_MO215_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AAFCu)

/** Alias (User Manual Name) for CAN_MO215_CTR.
* To use register names with standard convension, please use CAN_MO215_CTR.
*/
#define	CAN_MOCTR215	(CAN_MO215_CTR)

/** \\brief  2AF4, Message Object  Data Register High */
#define CAN_MO215_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AAF4u)

/** Alias (User Manual Name) for CAN_MO215_DATAH.
* To use register names with standard convension, please use CAN_MO215_DATAH.
*/
#define	CAN_MODATAH215	(CAN_MO215_DATAH)

/** \\brief  2AF0, Message Object  Data Register Low */
#define CAN_MO215_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AAF0u)

/** Alias (User Manual Name) for CAN_MO215_DATAL.
* To use register names with standard convension, please use CAN_MO215_DATAL.
*/
#define	CAN_MODATAL215	(CAN_MO215_DATAL)

/** \\brief  2AE0, Message Object  Function Control Register */
#define CAN_MO215_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AAE0u)

/** Alias (User Manual Name) for CAN_MO215_FCR.
* To use register names with standard convension, please use CAN_MO215_FCR.
*/
#define	CAN_MOFCR215	(CAN_MO215_FCR)

/** \\brief  2AE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO215_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AAE4u)

/** Alias (User Manual Name) for CAN_MO215_FGPR.
* To use register names with standard convension, please use CAN_MO215_FGPR.
*/
#define	CAN_MOFGPR215	(CAN_MO215_FGPR)

/** \\brief  2AE8, Message Object  Interrupt Pointer Register */
#define CAN_MO215_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AAE8u)

/** Alias (User Manual Name) for CAN_MO215_IPR.
* To use register names with standard convension, please use CAN_MO215_IPR.
*/
#define	CAN_MOIPR215	(CAN_MO215_IPR)

/** \\brief  2AFC, Message Object  Control Register */
#define CAN_MO215_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AAFCu)

/** Alias (User Manual Name) for CAN_MO215_STAT.
* To use register names with standard convension, please use CAN_MO215_STAT.
*/
#define	CAN_MOSTAT215	(CAN_MO215_STAT)

/** \\brief  2B0C, Message Object  Acceptance Mask Register */
#define CAN_MO216_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AB0Cu)

/** Alias (User Manual Name) for CAN_MO216_AMR.
* To use register names with standard convension, please use CAN_MO216_AMR.
*/
#define	CAN_MOAMR216	(CAN_MO216_AMR)

/** \\brief  2B18, Message Object  Arbitration Register */
#define CAN_MO216_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AB18u)

/** Alias (User Manual Name) for CAN_MO216_AR.
* To use register names with standard convension, please use CAN_MO216_AR.
*/
#define	CAN_MOAR216	(CAN_MO216_AR)

/** \\brief  2B1C, Message Object  Control Register */
#define CAN_MO216_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AB1Cu)

/** Alias (User Manual Name) for CAN_MO216_CTR.
* To use register names with standard convension, please use CAN_MO216_CTR.
*/
#define	CAN_MOCTR216	(CAN_MO216_CTR)

/** \\brief  2B14, Message Object  Data Register High */
#define CAN_MO216_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AB14u)

/** Alias (User Manual Name) for CAN_MO216_DATAH.
* To use register names with standard convension, please use CAN_MO216_DATAH.
*/
#define	CAN_MODATAH216	(CAN_MO216_DATAH)

/** \\brief  2B10, Message Object  Data Register Low */
#define CAN_MO216_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AB10u)

/** Alias (User Manual Name) for CAN_MO216_DATAL.
* To use register names with standard convension, please use CAN_MO216_DATAL.
*/
#define	CAN_MODATAL216	(CAN_MO216_DATAL)

/** \\brief  2B00, Message Object  Function Control Register */
#define CAN_MO216_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AB00u)

/** Alias (User Manual Name) for CAN_MO216_FCR.
* To use register names with standard convension, please use CAN_MO216_FCR.
*/
#define	CAN_MOFCR216	(CAN_MO216_FCR)

/** \\brief  2B04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO216_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AB04u)

/** Alias (User Manual Name) for CAN_MO216_FGPR.
* To use register names with standard convension, please use CAN_MO216_FGPR.
*/
#define	CAN_MOFGPR216	(CAN_MO216_FGPR)

/** \\brief  2B08, Message Object  Interrupt Pointer Register */
#define CAN_MO216_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AB08u)

/** Alias (User Manual Name) for CAN_MO216_IPR.
* To use register names with standard convension, please use CAN_MO216_IPR.
*/
#define	CAN_MOIPR216	(CAN_MO216_IPR)

/** \\brief  2B1C, Message Object  Control Register */
#define CAN_MO216_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AB1Cu)

/** Alias (User Manual Name) for CAN_MO216_STAT.
* To use register names with standard convension, please use CAN_MO216_STAT.
*/
#define	CAN_MOSTAT216	(CAN_MO216_STAT)

/** \\brief  2B2C, Message Object  Acceptance Mask Register */
#define CAN_MO217_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AB2Cu)

/** Alias (User Manual Name) for CAN_MO217_AMR.
* To use register names with standard convension, please use CAN_MO217_AMR.
*/
#define	CAN_MOAMR217	(CAN_MO217_AMR)

/** \\brief  2B38, Message Object  Arbitration Register */
#define CAN_MO217_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AB38u)

/** Alias (User Manual Name) for CAN_MO217_AR.
* To use register names with standard convension, please use CAN_MO217_AR.
*/
#define	CAN_MOAR217	(CAN_MO217_AR)

/** \\brief  2B3C, Message Object  Control Register */
#define CAN_MO217_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AB3Cu)

/** Alias (User Manual Name) for CAN_MO217_CTR.
* To use register names with standard convension, please use CAN_MO217_CTR.
*/
#define	CAN_MOCTR217	(CAN_MO217_CTR)

/** \\brief  2B34, Message Object  Data Register High */
#define CAN_MO217_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AB34u)

/** Alias (User Manual Name) for CAN_MO217_DATAH.
* To use register names with standard convension, please use CAN_MO217_DATAH.
*/
#define	CAN_MODATAH217	(CAN_MO217_DATAH)

/** \\brief  2B30, Message Object  Data Register Low */
#define CAN_MO217_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AB30u)

/** Alias (User Manual Name) for CAN_MO217_DATAL.
* To use register names with standard convension, please use CAN_MO217_DATAL.
*/
#define	CAN_MODATAL217	(CAN_MO217_DATAL)

/** \\brief  2B20, Message Object  Function Control Register */
#define CAN_MO217_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AB20u)

/** Alias (User Manual Name) for CAN_MO217_FCR.
* To use register names with standard convension, please use CAN_MO217_FCR.
*/
#define	CAN_MOFCR217	(CAN_MO217_FCR)

/** \\brief  2B24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO217_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AB24u)

/** Alias (User Manual Name) for CAN_MO217_FGPR.
* To use register names with standard convension, please use CAN_MO217_FGPR.
*/
#define	CAN_MOFGPR217	(CAN_MO217_FGPR)

/** \\brief  2B28, Message Object  Interrupt Pointer Register */
#define CAN_MO217_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AB28u)

/** Alias (User Manual Name) for CAN_MO217_IPR.
* To use register names with standard convension, please use CAN_MO217_IPR.
*/
#define	CAN_MOIPR217	(CAN_MO217_IPR)

/** \\brief  2B3C, Message Object  Control Register */
#define CAN_MO217_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AB3Cu)

/** Alias (User Manual Name) for CAN_MO217_STAT.
* To use register names with standard convension, please use CAN_MO217_STAT.
*/
#define	CAN_MOSTAT217	(CAN_MO217_STAT)

/** \\brief  2B4C, Message Object  Acceptance Mask Register */
#define CAN_MO218_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AB4Cu)

/** Alias (User Manual Name) for CAN_MO218_AMR.
* To use register names with standard convension, please use CAN_MO218_AMR.
*/
#define	CAN_MOAMR218	(CAN_MO218_AMR)

/** \\brief  2B58, Message Object  Arbitration Register */
#define CAN_MO218_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AB58u)

/** Alias (User Manual Name) for CAN_MO218_AR.
* To use register names with standard convension, please use CAN_MO218_AR.
*/
#define	CAN_MOAR218	(CAN_MO218_AR)

/** \\brief  2B5C, Message Object  Control Register */
#define CAN_MO218_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AB5Cu)

/** Alias (User Manual Name) for CAN_MO218_CTR.
* To use register names with standard convension, please use CAN_MO218_CTR.
*/
#define	CAN_MOCTR218	(CAN_MO218_CTR)

/** \\brief  2B54, Message Object  Data Register High */
#define CAN_MO218_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AB54u)

/** Alias (User Manual Name) for CAN_MO218_DATAH.
* To use register names with standard convension, please use CAN_MO218_DATAH.
*/
#define	CAN_MODATAH218	(CAN_MO218_DATAH)

/** \\brief  2B50, Message Object  Data Register Low */
#define CAN_MO218_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AB50u)

/** Alias (User Manual Name) for CAN_MO218_DATAL.
* To use register names with standard convension, please use CAN_MO218_DATAL.
*/
#define	CAN_MODATAL218	(CAN_MO218_DATAL)

/** \\brief  2B40, Message Object  Function Control Register */
#define CAN_MO218_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AB40u)

/** Alias (User Manual Name) for CAN_MO218_FCR.
* To use register names with standard convension, please use CAN_MO218_FCR.
*/
#define	CAN_MOFCR218	(CAN_MO218_FCR)

/** \\brief  2B44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO218_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AB44u)

/** Alias (User Manual Name) for CAN_MO218_FGPR.
* To use register names with standard convension, please use CAN_MO218_FGPR.
*/
#define	CAN_MOFGPR218	(CAN_MO218_FGPR)

/** \\brief  2B48, Message Object  Interrupt Pointer Register */
#define CAN_MO218_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AB48u)

/** Alias (User Manual Name) for CAN_MO218_IPR.
* To use register names with standard convension, please use CAN_MO218_IPR.
*/
#define	CAN_MOIPR218	(CAN_MO218_IPR)

/** \\brief  2B5C, Message Object  Control Register */
#define CAN_MO218_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AB5Cu)

/** Alias (User Manual Name) for CAN_MO218_STAT.
* To use register names with standard convension, please use CAN_MO218_STAT.
*/
#define	CAN_MOSTAT218	(CAN_MO218_STAT)

/** \\brief  2B6C, Message Object  Acceptance Mask Register */
#define CAN_MO219_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AB6Cu)

/** Alias (User Manual Name) for CAN_MO219_AMR.
* To use register names with standard convension, please use CAN_MO219_AMR.
*/
#define	CAN_MOAMR219	(CAN_MO219_AMR)

/** \\brief  2B78, Message Object  Arbitration Register */
#define CAN_MO219_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AB78u)

/** Alias (User Manual Name) for CAN_MO219_AR.
* To use register names with standard convension, please use CAN_MO219_AR.
*/
#define	CAN_MOAR219	(CAN_MO219_AR)

/** \\brief  2B7C, Message Object  Control Register */
#define CAN_MO219_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AB7Cu)

/** Alias (User Manual Name) for CAN_MO219_CTR.
* To use register names with standard convension, please use CAN_MO219_CTR.
*/
#define	CAN_MOCTR219	(CAN_MO219_CTR)

/** \\brief  2B74, Message Object  Data Register High */
#define CAN_MO219_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AB74u)

/** Alias (User Manual Name) for CAN_MO219_DATAH.
* To use register names with standard convension, please use CAN_MO219_DATAH.
*/
#define	CAN_MODATAH219	(CAN_MO219_DATAH)

/** \\brief  2B70, Message Object  Data Register Low */
#define CAN_MO219_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AB70u)

/** Alias (User Manual Name) for CAN_MO219_DATAL.
* To use register names with standard convension, please use CAN_MO219_DATAL.
*/
#define	CAN_MODATAL219	(CAN_MO219_DATAL)

/** \\brief  2B60, Message Object  Function Control Register */
#define CAN_MO219_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AB60u)

/** Alias (User Manual Name) for CAN_MO219_FCR.
* To use register names with standard convension, please use CAN_MO219_FCR.
*/
#define	CAN_MOFCR219	(CAN_MO219_FCR)

/** \\brief  2B64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO219_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AB64u)

/** Alias (User Manual Name) for CAN_MO219_FGPR.
* To use register names with standard convension, please use CAN_MO219_FGPR.
*/
#define	CAN_MOFGPR219	(CAN_MO219_FGPR)

/** \\brief  2B68, Message Object  Interrupt Pointer Register */
#define CAN_MO219_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AB68u)

/** Alias (User Manual Name) for CAN_MO219_IPR.
* To use register names with standard convension, please use CAN_MO219_IPR.
*/
#define	CAN_MOIPR219	(CAN_MO219_IPR)

/** \\brief  2B7C, Message Object  Control Register */
#define CAN_MO219_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AB7Cu)

/** Alias (User Manual Name) for CAN_MO219_STAT.
* To use register names with standard convension, please use CAN_MO219_STAT.
*/
#define	CAN_MOSTAT219	(CAN_MO219_STAT)

/** \\brief  12AC, Message Object  Acceptance Mask Register */
#define CAN_MO21_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00192ACu)

/** Alias (User Manual Name) for CAN_MO21_AMR.
* To use register names with standard convension, please use CAN_MO21_AMR.
*/
#define	CAN_MOAMR21	(CAN_MO21_AMR)

/** \\brief  12B8, Message Object  Arbitration Register */
#define CAN_MO21_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00192B8u)

/** Alias (User Manual Name) for CAN_MO21_AR.
* To use register names with standard convension, please use CAN_MO21_AR.
*/
#define	CAN_MOAR21	(CAN_MO21_AR)

/** \\brief  12BC, Message Object  Control Register */
#define CAN_MO21_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00192BCu)

/** Alias (User Manual Name) for CAN_MO21_CTR.
* To use register names with standard convension, please use CAN_MO21_CTR.
*/
#define	CAN_MOCTR21	(CAN_MO21_CTR)

/** \\brief  12B4, Message Object  Data Register High */
#define CAN_MO21_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00192B4u)

/** Alias (User Manual Name) for CAN_MO21_DATAH.
* To use register names with standard convension, please use CAN_MO21_DATAH.
*/
#define	CAN_MODATAH21	(CAN_MO21_DATAH)

/** \\brief  12B0, Message Object  Data Register Low */
#define CAN_MO21_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00192B0u)

/** Alias (User Manual Name) for CAN_MO21_DATAL.
* To use register names with standard convension, please use CAN_MO21_DATAL.
*/
#define	CAN_MODATAL21	(CAN_MO21_DATAL)

/** \\brief  12A0, Message Object  Function Control Register */
#define CAN_MO21_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00192A0u)

/** Alias (User Manual Name) for CAN_MO21_FCR.
* To use register names with standard convension, please use CAN_MO21_FCR.
*/
#define	CAN_MOFCR21	(CAN_MO21_FCR)

/** \\brief  12A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO21_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00192A4u)

/** Alias (User Manual Name) for CAN_MO21_FGPR.
* To use register names with standard convension, please use CAN_MO21_FGPR.
*/
#define	CAN_MOFGPR21	(CAN_MO21_FGPR)

/** \\brief  12A8, Message Object  Interrupt Pointer Register */
#define CAN_MO21_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00192A8u)

/** Alias (User Manual Name) for CAN_MO21_IPR.
* To use register names with standard convension, please use CAN_MO21_IPR.
*/
#define	CAN_MOIPR21	(CAN_MO21_IPR)

/** \\brief  12BC, Message Object  Control Register */
#define CAN_MO21_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00192BCu)

/** Alias (User Manual Name) for CAN_MO21_STAT.
* To use register names with standard convension, please use CAN_MO21_STAT.
*/
#define	CAN_MOSTAT21	(CAN_MO21_STAT)

/** \\brief  2B8C, Message Object  Acceptance Mask Register */
#define CAN_MO220_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AB8Cu)

/** Alias (User Manual Name) for CAN_MO220_AMR.
* To use register names with standard convension, please use CAN_MO220_AMR.
*/
#define	CAN_MOAMR220	(CAN_MO220_AMR)

/** \\brief  2B98, Message Object  Arbitration Register */
#define CAN_MO220_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AB98u)

/** Alias (User Manual Name) for CAN_MO220_AR.
* To use register names with standard convension, please use CAN_MO220_AR.
*/
#define	CAN_MOAR220	(CAN_MO220_AR)

/** \\brief  2B9C, Message Object  Control Register */
#define CAN_MO220_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AB9Cu)

/** Alias (User Manual Name) for CAN_MO220_CTR.
* To use register names with standard convension, please use CAN_MO220_CTR.
*/
#define	CAN_MOCTR220	(CAN_MO220_CTR)

/** \\brief  2B94, Message Object  Data Register High */
#define CAN_MO220_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AB94u)

/** Alias (User Manual Name) for CAN_MO220_DATAH.
* To use register names with standard convension, please use CAN_MO220_DATAH.
*/
#define	CAN_MODATAH220	(CAN_MO220_DATAH)

/** \\brief  2B90, Message Object  Data Register Low */
#define CAN_MO220_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AB90u)

/** Alias (User Manual Name) for CAN_MO220_DATAL.
* To use register names with standard convension, please use CAN_MO220_DATAL.
*/
#define	CAN_MODATAL220	(CAN_MO220_DATAL)

/** \\brief  2B80, Message Object  Function Control Register */
#define CAN_MO220_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AB80u)

/** Alias (User Manual Name) for CAN_MO220_FCR.
* To use register names with standard convension, please use CAN_MO220_FCR.
*/
#define	CAN_MOFCR220	(CAN_MO220_FCR)

/** \\brief  2B84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO220_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AB84u)

/** Alias (User Manual Name) for CAN_MO220_FGPR.
* To use register names with standard convension, please use CAN_MO220_FGPR.
*/
#define	CAN_MOFGPR220	(CAN_MO220_FGPR)

/** \\brief  2B88, Message Object  Interrupt Pointer Register */
#define CAN_MO220_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AB88u)

/** Alias (User Manual Name) for CAN_MO220_IPR.
* To use register names with standard convension, please use CAN_MO220_IPR.
*/
#define	CAN_MOIPR220	(CAN_MO220_IPR)

/** \\brief  2B9C, Message Object  Control Register */
#define CAN_MO220_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AB9Cu)

/** Alias (User Manual Name) for CAN_MO220_STAT.
* To use register names with standard convension, please use CAN_MO220_STAT.
*/
#define	CAN_MOSTAT220	(CAN_MO220_STAT)

/** \\brief  2BAC, Message Object  Acceptance Mask Register */
#define CAN_MO221_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ABACu)

/** Alias (User Manual Name) for CAN_MO221_AMR.
* To use register names with standard convension, please use CAN_MO221_AMR.
*/
#define	CAN_MOAMR221	(CAN_MO221_AMR)

/** \\brief  2BB8, Message Object  Arbitration Register */
#define CAN_MO221_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ABB8u)

/** Alias (User Manual Name) for CAN_MO221_AR.
* To use register names with standard convension, please use CAN_MO221_AR.
*/
#define	CAN_MOAR221	(CAN_MO221_AR)

/** \\brief  2BBC, Message Object  Control Register */
#define CAN_MO221_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ABBCu)

/** Alias (User Manual Name) for CAN_MO221_CTR.
* To use register names with standard convension, please use CAN_MO221_CTR.
*/
#define	CAN_MOCTR221	(CAN_MO221_CTR)

/** \\brief  2BB4, Message Object  Data Register High */
#define CAN_MO221_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ABB4u)

/** Alias (User Manual Name) for CAN_MO221_DATAH.
* To use register names with standard convension, please use CAN_MO221_DATAH.
*/
#define	CAN_MODATAH221	(CAN_MO221_DATAH)

/** \\brief  2BB0, Message Object  Data Register Low */
#define CAN_MO221_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ABB0u)

/** Alias (User Manual Name) for CAN_MO221_DATAL.
* To use register names with standard convension, please use CAN_MO221_DATAL.
*/
#define	CAN_MODATAL221	(CAN_MO221_DATAL)

/** \\brief  2BA0, Message Object  Function Control Register */
#define CAN_MO221_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ABA0u)

/** Alias (User Manual Name) for CAN_MO221_FCR.
* To use register names with standard convension, please use CAN_MO221_FCR.
*/
#define	CAN_MOFCR221	(CAN_MO221_FCR)

/** \\brief  2BA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO221_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ABA4u)

/** Alias (User Manual Name) for CAN_MO221_FGPR.
* To use register names with standard convension, please use CAN_MO221_FGPR.
*/
#define	CAN_MOFGPR221	(CAN_MO221_FGPR)

/** \\brief  2BA8, Message Object  Interrupt Pointer Register */
#define CAN_MO221_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ABA8u)

/** Alias (User Manual Name) for CAN_MO221_IPR.
* To use register names with standard convension, please use CAN_MO221_IPR.
*/
#define	CAN_MOIPR221	(CAN_MO221_IPR)

/** \\brief  2BBC, Message Object  Control Register */
#define CAN_MO221_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ABBCu)

/** Alias (User Manual Name) for CAN_MO221_STAT.
* To use register names with standard convension, please use CAN_MO221_STAT.
*/
#define	CAN_MOSTAT221	(CAN_MO221_STAT)

/** \\brief  2BCC, Message Object  Acceptance Mask Register */
#define CAN_MO222_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ABCCu)

/** Alias (User Manual Name) for CAN_MO222_AMR.
* To use register names with standard convension, please use CAN_MO222_AMR.
*/
#define	CAN_MOAMR222	(CAN_MO222_AMR)

/** \\brief  2BD8, Message Object  Arbitration Register */
#define CAN_MO222_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ABD8u)

/** Alias (User Manual Name) for CAN_MO222_AR.
* To use register names with standard convension, please use CAN_MO222_AR.
*/
#define	CAN_MOAR222	(CAN_MO222_AR)

/** \\brief  2BDC, Message Object  Control Register */
#define CAN_MO222_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ABDCu)

/** Alias (User Manual Name) for CAN_MO222_CTR.
* To use register names with standard convension, please use CAN_MO222_CTR.
*/
#define	CAN_MOCTR222	(CAN_MO222_CTR)

/** \\brief  2BD4, Message Object  Data Register High */
#define CAN_MO222_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ABD4u)

/** Alias (User Manual Name) for CAN_MO222_DATAH.
* To use register names with standard convension, please use CAN_MO222_DATAH.
*/
#define	CAN_MODATAH222	(CAN_MO222_DATAH)

/** \\brief  2BD0, Message Object  Data Register Low */
#define CAN_MO222_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ABD0u)

/** Alias (User Manual Name) for CAN_MO222_DATAL.
* To use register names with standard convension, please use CAN_MO222_DATAL.
*/
#define	CAN_MODATAL222	(CAN_MO222_DATAL)

/** \\brief  2BC0, Message Object  Function Control Register */
#define CAN_MO222_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ABC0u)

/** Alias (User Manual Name) for CAN_MO222_FCR.
* To use register names with standard convension, please use CAN_MO222_FCR.
*/
#define	CAN_MOFCR222	(CAN_MO222_FCR)

/** \\brief  2BC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO222_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ABC4u)

/** Alias (User Manual Name) for CAN_MO222_FGPR.
* To use register names with standard convension, please use CAN_MO222_FGPR.
*/
#define	CAN_MOFGPR222	(CAN_MO222_FGPR)

/** \\brief  2BC8, Message Object  Interrupt Pointer Register */
#define CAN_MO222_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ABC8u)

/** Alias (User Manual Name) for CAN_MO222_IPR.
* To use register names with standard convension, please use CAN_MO222_IPR.
*/
#define	CAN_MOIPR222	(CAN_MO222_IPR)

/** \\brief  2BDC, Message Object  Control Register */
#define CAN_MO222_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ABDCu)

/** Alias (User Manual Name) for CAN_MO222_STAT.
* To use register names with standard convension, please use CAN_MO222_STAT.
*/
#define	CAN_MOSTAT222	(CAN_MO222_STAT)

/** \\brief  2BEC, Message Object  Acceptance Mask Register */
#define CAN_MO223_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ABECu)

/** Alias (User Manual Name) for CAN_MO223_AMR.
* To use register names with standard convension, please use CAN_MO223_AMR.
*/
#define	CAN_MOAMR223	(CAN_MO223_AMR)

/** \\brief  2BF8, Message Object  Arbitration Register */
#define CAN_MO223_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ABF8u)

/** Alias (User Manual Name) for CAN_MO223_AR.
* To use register names with standard convension, please use CAN_MO223_AR.
*/
#define	CAN_MOAR223	(CAN_MO223_AR)

/** \\brief  2BFC, Message Object  Control Register */
#define CAN_MO223_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ABFCu)

/** Alias (User Manual Name) for CAN_MO223_CTR.
* To use register names with standard convension, please use CAN_MO223_CTR.
*/
#define	CAN_MOCTR223	(CAN_MO223_CTR)

/** \\brief  2BF4, Message Object  Data Register High */
#define CAN_MO223_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ABF4u)

/** Alias (User Manual Name) for CAN_MO223_DATAH.
* To use register names with standard convension, please use CAN_MO223_DATAH.
*/
#define	CAN_MODATAH223	(CAN_MO223_DATAH)

/** \\brief  2BF0, Message Object  Data Register Low */
#define CAN_MO223_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ABF0u)

/** Alias (User Manual Name) for CAN_MO223_DATAL.
* To use register names with standard convension, please use CAN_MO223_DATAL.
*/
#define	CAN_MODATAL223	(CAN_MO223_DATAL)

/** \\brief  2BE0, Message Object  Function Control Register */
#define CAN_MO223_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ABE0u)

/** Alias (User Manual Name) for CAN_MO223_FCR.
* To use register names with standard convension, please use CAN_MO223_FCR.
*/
#define	CAN_MOFCR223	(CAN_MO223_FCR)

/** \\brief  2BE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO223_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ABE4u)

/** Alias (User Manual Name) for CAN_MO223_FGPR.
* To use register names with standard convension, please use CAN_MO223_FGPR.
*/
#define	CAN_MOFGPR223	(CAN_MO223_FGPR)

/** \\brief  2BE8, Message Object  Interrupt Pointer Register */
#define CAN_MO223_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ABE8u)

/** Alias (User Manual Name) for CAN_MO223_IPR.
* To use register names with standard convension, please use CAN_MO223_IPR.
*/
#define	CAN_MOIPR223	(CAN_MO223_IPR)

/** \\brief  2BFC, Message Object  Control Register */
#define CAN_MO223_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ABFCu)

/** Alias (User Manual Name) for CAN_MO223_STAT.
* To use register names with standard convension, please use CAN_MO223_STAT.
*/
#define	CAN_MOSTAT223	(CAN_MO223_STAT)

/** \\brief  2C0C, Message Object  Acceptance Mask Register */
#define CAN_MO224_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AC0Cu)

/** Alias (User Manual Name) for CAN_MO224_AMR.
* To use register names with standard convension, please use CAN_MO224_AMR.
*/
#define	CAN_MOAMR224	(CAN_MO224_AMR)

/** \\brief  2C18, Message Object  Arbitration Register */
#define CAN_MO224_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AC18u)

/** Alias (User Manual Name) for CAN_MO224_AR.
* To use register names with standard convension, please use CAN_MO224_AR.
*/
#define	CAN_MOAR224	(CAN_MO224_AR)

/** \\brief  2C1C, Message Object  Control Register */
#define CAN_MO224_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AC1Cu)

/** Alias (User Manual Name) for CAN_MO224_CTR.
* To use register names with standard convension, please use CAN_MO224_CTR.
*/
#define	CAN_MOCTR224	(CAN_MO224_CTR)

/** \\brief  2C14, Message Object  Data Register High */
#define CAN_MO224_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AC14u)

/** Alias (User Manual Name) for CAN_MO224_DATAH.
* To use register names with standard convension, please use CAN_MO224_DATAH.
*/
#define	CAN_MODATAH224	(CAN_MO224_DATAH)

/** \\brief  2C10, Message Object  Data Register Low */
#define CAN_MO224_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AC10u)

/** Alias (User Manual Name) for CAN_MO224_DATAL.
* To use register names with standard convension, please use CAN_MO224_DATAL.
*/
#define	CAN_MODATAL224	(CAN_MO224_DATAL)

/** \\brief  2C00, Message Object  Function Control Register */
#define CAN_MO224_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AC00u)

/** Alias (User Manual Name) for CAN_MO224_FCR.
* To use register names with standard convension, please use CAN_MO224_FCR.
*/
#define	CAN_MOFCR224	(CAN_MO224_FCR)

/** \\brief  2C04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO224_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AC04u)

/** Alias (User Manual Name) for CAN_MO224_FGPR.
* To use register names with standard convension, please use CAN_MO224_FGPR.
*/
#define	CAN_MOFGPR224	(CAN_MO224_FGPR)

/** \\brief  2C08, Message Object  Interrupt Pointer Register */
#define CAN_MO224_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AC08u)

/** Alias (User Manual Name) for CAN_MO224_IPR.
* To use register names with standard convension, please use CAN_MO224_IPR.
*/
#define	CAN_MOIPR224	(CAN_MO224_IPR)

/** \\brief  2C1C, Message Object  Control Register */
#define CAN_MO224_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AC1Cu)

/** Alias (User Manual Name) for CAN_MO224_STAT.
* To use register names with standard convension, please use CAN_MO224_STAT.
*/
#define	CAN_MOSTAT224	(CAN_MO224_STAT)

/** \\brief  2C2C, Message Object  Acceptance Mask Register */
#define CAN_MO225_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AC2Cu)

/** Alias (User Manual Name) for CAN_MO225_AMR.
* To use register names with standard convension, please use CAN_MO225_AMR.
*/
#define	CAN_MOAMR225	(CAN_MO225_AMR)

/** \\brief  2C38, Message Object  Arbitration Register */
#define CAN_MO225_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AC38u)

/** Alias (User Manual Name) for CAN_MO225_AR.
* To use register names with standard convension, please use CAN_MO225_AR.
*/
#define	CAN_MOAR225	(CAN_MO225_AR)

/** \\brief  2C3C, Message Object  Control Register */
#define CAN_MO225_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AC3Cu)

/** Alias (User Manual Name) for CAN_MO225_CTR.
* To use register names with standard convension, please use CAN_MO225_CTR.
*/
#define	CAN_MOCTR225	(CAN_MO225_CTR)

/** \\brief  2C34, Message Object  Data Register High */
#define CAN_MO225_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AC34u)

/** Alias (User Manual Name) for CAN_MO225_DATAH.
* To use register names with standard convension, please use CAN_MO225_DATAH.
*/
#define	CAN_MODATAH225	(CAN_MO225_DATAH)

/** \\brief  2C30, Message Object  Data Register Low */
#define CAN_MO225_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AC30u)

/** Alias (User Manual Name) for CAN_MO225_DATAL.
* To use register names with standard convension, please use CAN_MO225_DATAL.
*/
#define	CAN_MODATAL225	(CAN_MO225_DATAL)

/** \\brief  2C20, Message Object  Function Control Register */
#define CAN_MO225_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AC20u)

/** Alias (User Manual Name) for CAN_MO225_FCR.
* To use register names with standard convension, please use CAN_MO225_FCR.
*/
#define	CAN_MOFCR225	(CAN_MO225_FCR)

/** \\brief  2C24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO225_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AC24u)

/** Alias (User Manual Name) for CAN_MO225_FGPR.
* To use register names with standard convension, please use CAN_MO225_FGPR.
*/
#define	CAN_MOFGPR225	(CAN_MO225_FGPR)

/** \\brief  2C28, Message Object  Interrupt Pointer Register */
#define CAN_MO225_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AC28u)

/** Alias (User Manual Name) for CAN_MO225_IPR.
* To use register names with standard convension, please use CAN_MO225_IPR.
*/
#define	CAN_MOIPR225	(CAN_MO225_IPR)

/** \\brief  2C3C, Message Object  Control Register */
#define CAN_MO225_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AC3Cu)

/** Alias (User Manual Name) for CAN_MO225_STAT.
* To use register names with standard convension, please use CAN_MO225_STAT.
*/
#define	CAN_MOSTAT225	(CAN_MO225_STAT)

/** \\brief  2C4C, Message Object  Acceptance Mask Register */
#define CAN_MO226_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AC4Cu)

/** Alias (User Manual Name) for CAN_MO226_AMR.
* To use register names with standard convension, please use CAN_MO226_AMR.
*/
#define	CAN_MOAMR226	(CAN_MO226_AMR)

/** \\brief  2C58, Message Object  Arbitration Register */
#define CAN_MO226_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AC58u)

/** Alias (User Manual Name) for CAN_MO226_AR.
* To use register names with standard convension, please use CAN_MO226_AR.
*/
#define	CAN_MOAR226	(CAN_MO226_AR)

/** \\brief  2C5C, Message Object  Control Register */
#define CAN_MO226_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AC5Cu)

/** Alias (User Manual Name) for CAN_MO226_CTR.
* To use register names with standard convension, please use CAN_MO226_CTR.
*/
#define	CAN_MOCTR226	(CAN_MO226_CTR)

/** \\brief  2C54, Message Object  Data Register High */
#define CAN_MO226_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AC54u)

/** Alias (User Manual Name) for CAN_MO226_DATAH.
* To use register names with standard convension, please use CAN_MO226_DATAH.
*/
#define	CAN_MODATAH226	(CAN_MO226_DATAH)

/** \\brief  2C50, Message Object  Data Register Low */
#define CAN_MO226_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AC50u)

/** Alias (User Manual Name) for CAN_MO226_DATAL.
* To use register names with standard convension, please use CAN_MO226_DATAL.
*/
#define	CAN_MODATAL226	(CAN_MO226_DATAL)

/** \\brief  2C40, Message Object  Function Control Register */
#define CAN_MO226_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AC40u)

/** Alias (User Manual Name) for CAN_MO226_FCR.
* To use register names with standard convension, please use CAN_MO226_FCR.
*/
#define	CAN_MOFCR226	(CAN_MO226_FCR)

/** \\brief  2C44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO226_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AC44u)

/** Alias (User Manual Name) for CAN_MO226_FGPR.
* To use register names with standard convension, please use CAN_MO226_FGPR.
*/
#define	CAN_MOFGPR226	(CAN_MO226_FGPR)

/** \\brief  2C48, Message Object  Interrupt Pointer Register */
#define CAN_MO226_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AC48u)

/** Alias (User Manual Name) for CAN_MO226_IPR.
* To use register names with standard convension, please use CAN_MO226_IPR.
*/
#define	CAN_MOIPR226	(CAN_MO226_IPR)

/** \\brief  2C5C, Message Object  Control Register */
#define CAN_MO226_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AC5Cu)

/** Alias (User Manual Name) for CAN_MO226_STAT.
* To use register names with standard convension, please use CAN_MO226_STAT.
*/
#define	CAN_MOSTAT226	(CAN_MO226_STAT)

/** \\brief  2C6C, Message Object  Acceptance Mask Register */
#define CAN_MO227_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AC6Cu)

/** Alias (User Manual Name) for CAN_MO227_AMR.
* To use register names with standard convension, please use CAN_MO227_AMR.
*/
#define	CAN_MOAMR227	(CAN_MO227_AMR)

/** \\brief  2C78, Message Object  Arbitration Register */
#define CAN_MO227_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AC78u)

/** Alias (User Manual Name) for CAN_MO227_AR.
* To use register names with standard convension, please use CAN_MO227_AR.
*/
#define	CAN_MOAR227	(CAN_MO227_AR)

/** \\brief  2C7C, Message Object  Control Register */
#define CAN_MO227_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AC7Cu)

/** Alias (User Manual Name) for CAN_MO227_CTR.
* To use register names with standard convension, please use CAN_MO227_CTR.
*/
#define	CAN_MOCTR227	(CAN_MO227_CTR)

/** \\brief  2C74, Message Object  Data Register High */
#define CAN_MO227_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AC74u)

/** Alias (User Manual Name) for CAN_MO227_DATAH.
* To use register names with standard convension, please use CAN_MO227_DATAH.
*/
#define	CAN_MODATAH227	(CAN_MO227_DATAH)

/** \\brief  2C70, Message Object  Data Register Low */
#define CAN_MO227_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AC70u)

/** Alias (User Manual Name) for CAN_MO227_DATAL.
* To use register names with standard convension, please use CAN_MO227_DATAL.
*/
#define	CAN_MODATAL227	(CAN_MO227_DATAL)

/** \\brief  2C60, Message Object  Function Control Register */
#define CAN_MO227_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AC60u)

/** Alias (User Manual Name) for CAN_MO227_FCR.
* To use register names with standard convension, please use CAN_MO227_FCR.
*/
#define	CAN_MOFCR227	(CAN_MO227_FCR)

/** \\brief  2C64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO227_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AC64u)

/** Alias (User Manual Name) for CAN_MO227_FGPR.
* To use register names with standard convension, please use CAN_MO227_FGPR.
*/
#define	CAN_MOFGPR227	(CAN_MO227_FGPR)

/** \\brief  2C68, Message Object  Interrupt Pointer Register */
#define CAN_MO227_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AC68u)

/** Alias (User Manual Name) for CAN_MO227_IPR.
* To use register names with standard convension, please use CAN_MO227_IPR.
*/
#define	CAN_MOIPR227	(CAN_MO227_IPR)

/** \\brief  2C7C, Message Object  Control Register */
#define CAN_MO227_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AC7Cu)

/** Alias (User Manual Name) for CAN_MO227_STAT.
* To use register names with standard convension, please use CAN_MO227_STAT.
*/
#define	CAN_MOSTAT227	(CAN_MO227_STAT)

/** \\brief  2C8C, Message Object  Acceptance Mask Register */
#define CAN_MO228_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AC8Cu)

/** Alias (User Manual Name) for CAN_MO228_AMR.
* To use register names with standard convension, please use CAN_MO228_AMR.
*/
#define	CAN_MOAMR228	(CAN_MO228_AMR)

/** \\brief  2C98, Message Object  Arbitration Register */
#define CAN_MO228_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AC98u)

/** Alias (User Manual Name) for CAN_MO228_AR.
* To use register names with standard convension, please use CAN_MO228_AR.
*/
#define	CAN_MOAR228	(CAN_MO228_AR)

/** \\brief  2C9C, Message Object  Control Register */
#define CAN_MO228_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AC9Cu)

/** Alias (User Manual Name) for CAN_MO228_CTR.
* To use register names with standard convension, please use CAN_MO228_CTR.
*/
#define	CAN_MOCTR228	(CAN_MO228_CTR)

/** \\brief  2C94, Message Object  Data Register High */
#define CAN_MO228_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AC94u)

/** Alias (User Manual Name) for CAN_MO228_DATAH.
* To use register names with standard convension, please use CAN_MO228_DATAH.
*/
#define	CAN_MODATAH228	(CAN_MO228_DATAH)

/** \\brief  2C90, Message Object  Data Register Low */
#define CAN_MO228_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AC90u)

/** Alias (User Manual Name) for CAN_MO228_DATAL.
* To use register names with standard convension, please use CAN_MO228_DATAL.
*/
#define	CAN_MODATAL228	(CAN_MO228_DATAL)

/** \\brief  2C80, Message Object  Function Control Register */
#define CAN_MO228_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AC80u)

/** Alias (User Manual Name) for CAN_MO228_FCR.
* To use register names with standard convension, please use CAN_MO228_FCR.
*/
#define	CAN_MOFCR228	(CAN_MO228_FCR)

/** \\brief  2C84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO228_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AC84u)

/** Alias (User Manual Name) for CAN_MO228_FGPR.
* To use register names with standard convension, please use CAN_MO228_FGPR.
*/
#define	CAN_MOFGPR228	(CAN_MO228_FGPR)

/** \\brief  2C88, Message Object  Interrupt Pointer Register */
#define CAN_MO228_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AC88u)

/** Alias (User Manual Name) for CAN_MO228_IPR.
* To use register names with standard convension, please use CAN_MO228_IPR.
*/
#define	CAN_MOIPR228	(CAN_MO228_IPR)

/** \\brief  2C9C, Message Object  Control Register */
#define CAN_MO228_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AC9Cu)

/** Alias (User Manual Name) for CAN_MO228_STAT.
* To use register names with standard convension, please use CAN_MO228_STAT.
*/
#define	CAN_MOSTAT228	(CAN_MO228_STAT)

/** \\brief  2CAC, Message Object  Acceptance Mask Register */
#define CAN_MO229_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ACACu)

/** Alias (User Manual Name) for CAN_MO229_AMR.
* To use register names with standard convension, please use CAN_MO229_AMR.
*/
#define	CAN_MOAMR229	(CAN_MO229_AMR)

/** \\brief  2CB8, Message Object  Arbitration Register */
#define CAN_MO229_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ACB8u)

/** Alias (User Manual Name) for CAN_MO229_AR.
* To use register names with standard convension, please use CAN_MO229_AR.
*/
#define	CAN_MOAR229	(CAN_MO229_AR)

/** \\brief  2CBC, Message Object  Control Register */
#define CAN_MO229_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ACBCu)

/** Alias (User Manual Name) for CAN_MO229_CTR.
* To use register names with standard convension, please use CAN_MO229_CTR.
*/
#define	CAN_MOCTR229	(CAN_MO229_CTR)

/** \\brief  2CB4, Message Object  Data Register High */
#define CAN_MO229_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ACB4u)

/** Alias (User Manual Name) for CAN_MO229_DATAH.
* To use register names with standard convension, please use CAN_MO229_DATAH.
*/
#define	CAN_MODATAH229	(CAN_MO229_DATAH)

/** \\brief  2CB0, Message Object  Data Register Low */
#define CAN_MO229_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ACB0u)

/** Alias (User Manual Name) for CAN_MO229_DATAL.
* To use register names with standard convension, please use CAN_MO229_DATAL.
*/
#define	CAN_MODATAL229	(CAN_MO229_DATAL)

/** \\brief  2CA0, Message Object  Function Control Register */
#define CAN_MO229_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ACA0u)

/** Alias (User Manual Name) for CAN_MO229_FCR.
* To use register names with standard convension, please use CAN_MO229_FCR.
*/
#define	CAN_MOFCR229	(CAN_MO229_FCR)

/** \\brief  2CA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO229_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ACA4u)

/** Alias (User Manual Name) for CAN_MO229_FGPR.
* To use register names with standard convension, please use CAN_MO229_FGPR.
*/
#define	CAN_MOFGPR229	(CAN_MO229_FGPR)

/** \\brief  2CA8, Message Object  Interrupt Pointer Register */
#define CAN_MO229_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ACA8u)

/** Alias (User Manual Name) for CAN_MO229_IPR.
* To use register names with standard convension, please use CAN_MO229_IPR.
*/
#define	CAN_MOIPR229	(CAN_MO229_IPR)

/** \\brief  2CBC, Message Object  Control Register */
#define CAN_MO229_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ACBCu)

/** Alias (User Manual Name) for CAN_MO229_STAT.
* To use register names with standard convension, please use CAN_MO229_STAT.
*/
#define	CAN_MOSTAT229	(CAN_MO229_STAT)

/** \\brief  12CC, Message Object  Acceptance Mask Register */
#define CAN_MO22_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00192CCu)

/** Alias (User Manual Name) for CAN_MO22_AMR.
* To use register names with standard convension, please use CAN_MO22_AMR.
*/
#define	CAN_MOAMR22	(CAN_MO22_AMR)

/** \\brief  12D8, Message Object  Arbitration Register */
#define CAN_MO22_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00192D8u)

/** Alias (User Manual Name) for CAN_MO22_AR.
* To use register names with standard convension, please use CAN_MO22_AR.
*/
#define	CAN_MOAR22	(CAN_MO22_AR)

/** \\brief  12DC, Message Object  Control Register */
#define CAN_MO22_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00192DCu)

/** Alias (User Manual Name) for CAN_MO22_CTR.
* To use register names with standard convension, please use CAN_MO22_CTR.
*/
#define	CAN_MOCTR22	(CAN_MO22_CTR)

/** \\brief  12D4, Message Object  Data Register High */
#define CAN_MO22_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00192D4u)

/** Alias (User Manual Name) for CAN_MO22_DATAH.
* To use register names with standard convension, please use CAN_MO22_DATAH.
*/
#define	CAN_MODATAH22	(CAN_MO22_DATAH)

/** \\brief  12D0, Message Object  Data Register Low */
#define CAN_MO22_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00192D0u)

/** Alias (User Manual Name) for CAN_MO22_DATAL.
* To use register names with standard convension, please use CAN_MO22_DATAL.
*/
#define	CAN_MODATAL22	(CAN_MO22_DATAL)

/** \\brief  12C0, Message Object  Function Control Register */
#define CAN_MO22_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00192C0u)

/** Alias (User Manual Name) for CAN_MO22_FCR.
* To use register names with standard convension, please use CAN_MO22_FCR.
*/
#define	CAN_MOFCR22	(CAN_MO22_FCR)

/** \\brief  12C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO22_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00192C4u)

/** Alias (User Manual Name) for CAN_MO22_FGPR.
* To use register names with standard convension, please use CAN_MO22_FGPR.
*/
#define	CAN_MOFGPR22	(CAN_MO22_FGPR)

/** \\brief  12C8, Message Object  Interrupt Pointer Register */
#define CAN_MO22_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00192C8u)

/** Alias (User Manual Name) for CAN_MO22_IPR.
* To use register names with standard convension, please use CAN_MO22_IPR.
*/
#define	CAN_MOIPR22	(CAN_MO22_IPR)

/** \\brief  12DC, Message Object  Control Register */
#define CAN_MO22_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00192DCu)

/** Alias (User Manual Name) for CAN_MO22_STAT.
* To use register names with standard convension, please use CAN_MO22_STAT.
*/
#define	CAN_MOSTAT22	(CAN_MO22_STAT)

/** \\brief  2CCC, Message Object  Acceptance Mask Register */
#define CAN_MO230_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ACCCu)

/** Alias (User Manual Name) for CAN_MO230_AMR.
* To use register names with standard convension, please use CAN_MO230_AMR.
*/
#define	CAN_MOAMR230	(CAN_MO230_AMR)

/** \\brief  2CD8, Message Object  Arbitration Register */
#define CAN_MO230_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ACD8u)

/** Alias (User Manual Name) for CAN_MO230_AR.
* To use register names with standard convension, please use CAN_MO230_AR.
*/
#define	CAN_MOAR230	(CAN_MO230_AR)

/** \\brief  2CDC, Message Object  Control Register */
#define CAN_MO230_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ACDCu)

/** Alias (User Manual Name) for CAN_MO230_CTR.
* To use register names with standard convension, please use CAN_MO230_CTR.
*/
#define	CAN_MOCTR230	(CAN_MO230_CTR)

/** \\brief  2CD4, Message Object  Data Register High */
#define CAN_MO230_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ACD4u)

/** Alias (User Manual Name) for CAN_MO230_DATAH.
* To use register names with standard convension, please use CAN_MO230_DATAH.
*/
#define	CAN_MODATAH230	(CAN_MO230_DATAH)

/** \\brief  2CD0, Message Object  Data Register Low */
#define CAN_MO230_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ACD0u)

/** Alias (User Manual Name) for CAN_MO230_DATAL.
* To use register names with standard convension, please use CAN_MO230_DATAL.
*/
#define	CAN_MODATAL230	(CAN_MO230_DATAL)

/** \\brief  2CC0, Message Object  Function Control Register */
#define CAN_MO230_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ACC0u)

/** Alias (User Manual Name) for CAN_MO230_FCR.
* To use register names with standard convension, please use CAN_MO230_FCR.
*/
#define	CAN_MOFCR230	(CAN_MO230_FCR)

/** \\brief  2CC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO230_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ACC4u)

/** Alias (User Manual Name) for CAN_MO230_FGPR.
* To use register names with standard convension, please use CAN_MO230_FGPR.
*/
#define	CAN_MOFGPR230	(CAN_MO230_FGPR)

/** \\brief  2CC8, Message Object  Interrupt Pointer Register */
#define CAN_MO230_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ACC8u)

/** Alias (User Manual Name) for CAN_MO230_IPR.
* To use register names with standard convension, please use CAN_MO230_IPR.
*/
#define	CAN_MOIPR230	(CAN_MO230_IPR)

/** \\brief  2CDC, Message Object  Control Register */
#define CAN_MO230_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ACDCu)

/** Alias (User Manual Name) for CAN_MO230_STAT.
* To use register names with standard convension, please use CAN_MO230_STAT.
*/
#define	CAN_MOSTAT230	(CAN_MO230_STAT)

/** \\brief  2CEC, Message Object  Acceptance Mask Register */
#define CAN_MO231_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ACECu)

/** Alias (User Manual Name) for CAN_MO231_AMR.
* To use register names with standard convension, please use CAN_MO231_AMR.
*/
#define	CAN_MOAMR231	(CAN_MO231_AMR)

/** \\brief  2CF8, Message Object  Arbitration Register */
#define CAN_MO231_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ACF8u)

/** Alias (User Manual Name) for CAN_MO231_AR.
* To use register names with standard convension, please use CAN_MO231_AR.
*/
#define	CAN_MOAR231	(CAN_MO231_AR)

/** \\brief  2CFC, Message Object  Control Register */
#define CAN_MO231_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ACFCu)

/** Alias (User Manual Name) for CAN_MO231_CTR.
* To use register names with standard convension, please use CAN_MO231_CTR.
*/
#define	CAN_MOCTR231	(CAN_MO231_CTR)

/** \\brief  2CF4, Message Object  Data Register High */
#define CAN_MO231_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ACF4u)

/** Alias (User Manual Name) for CAN_MO231_DATAH.
* To use register names with standard convension, please use CAN_MO231_DATAH.
*/
#define	CAN_MODATAH231	(CAN_MO231_DATAH)

/** \\brief  2CF0, Message Object  Data Register Low */
#define CAN_MO231_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ACF0u)

/** Alias (User Manual Name) for CAN_MO231_DATAL.
* To use register names with standard convension, please use CAN_MO231_DATAL.
*/
#define	CAN_MODATAL231	(CAN_MO231_DATAL)

/** \\brief  2CE0, Message Object  Function Control Register */
#define CAN_MO231_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ACE0u)

/** Alias (User Manual Name) for CAN_MO231_FCR.
* To use register names with standard convension, please use CAN_MO231_FCR.
*/
#define	CAN_MOFCR231	(CAN_MO231_FCR)

/** \\brief  2CE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO231_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ACE4u)

/** Alias (User Manual Name) for CAN_MO231_FGPR.
* To use register names with standard convension, please use CAN_MO231_FGPR.
*/
#define	CAN_MOFGPR231	(CAN_MO231_FGPR)

/** \\brief  2CE8, Message Object  Interrupt Pointer Register */
#define CAN_MO231_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ACE8u)

/** Alias (User Manual Name) for CAN_MO231_IPR.
* To use register names with standard convension, please use CAN_MO231_IPR.
*/
#define	CAN_MOIPR231	(CAN_MO231_IPR)

/** \\brief  2CFC, Message Object  Control Register */
#define CAN_MO231_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ACFCu)

/** Alias (User Manual Name) for CAN_MO231_STAT.
* To use register names with standard convension, please use CAN_MO231_STAT.
*/
#define	CAN_MOSTAT231	(CAN_MO231_STAT)

/** \\brief  2D0C, Message Object  Acceptance Mask Register */
#define CAN_MO232_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AD0Cu)

/** Alias (User Manual Name) for CAN_MO232_AMR.
* To use register names with standard convension, please use CAN_MO232_AMR.
*/
#define	CAN_MOAMR232	(CAN_MO232_AMR)

/** \\brief  2D18, Message Object  Arbitration Register */
#define CAN_MO232_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AD18u)

/** Alias (User Manual Name) for CAN_MO232_AR.
* To use register names with standard convension, please use CAN_MO232_AR.
*/
#define	CAN_MOAR232	(CAN_MO232_AR)

/** \\brief  2D1C, Message Object  Control Register */
#define CAN_MO232_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AD1Cu)

/** Alias (User Manual Name) for CAN_MO232_CTR.
* To use register names with standard convension, please use CAN_MO232_CTR.
*/
#define	CAN_MOCTR232	(CAN_MO232_CTR)

/** \\brief  2D14, Message Object  Data Register High */
#define CAN_MO232_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AD14u)

/** Alias (User Manual Name) for CAN_MO232_DATAH.
* To use register names with standard convension, please use CAN_MO232_DATAH.
*/
#define	CAN_MODATAH232	(CAN_MO232_DATAH)

/** \\brief  2D10, Message Object  Data Register Low */
#define CAN_MO232_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AD10u)

/** Alias (User Manual Name) for CAN_MO232_DATAL.
* To use register names with standard convension, please use CAN_MO232_DATAL.
*/
#define	CAN_MODATAL232	(CAN_MO232_DATAL)

/** \\brief  2D00, Message Object  Function Control Register */
#define CAN_MO232_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AD00u)

/** Alias (User Manual Name) for CAN_MO232_FCR.
* To use register names with standard convension, please use CAN_MO232_FCR.
*/
#define	CAN_MOFCR232	(CAN_MO232_FCR)

/** \\brief  2D04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO232_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AD04u)

/** Alias (User Manual Name) for CAN_MO232_FGPR.
* To use register names with standard convension, please use CAN_MO232_FGPR.
*/
#define	CAN_MOFGPR232	(CAN_MO232_FGPR)

/** \\brief  2D08, Message Object  Interrupt Pointer Register */
#define CAN_MO232_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AD08u)

/** Alias (User Manual Name) for CAN_MO232_IPR.
* To use register names with standard convension, please use CAN_MO232_IPR.
*/
#define	CAN_MOIPR232	(CAN_MO232_IPR)

/** \\brief  2D1C, Message Object  Control Register */
#define CAN_MO232_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AD1Cu)

/** Alias (User Manual Name) for CAN_MO232_STAT.
* To use register names with standard convension, please use CAN_MO232_STAT.
*/
#define	CAN_MOSTAT232	(CAN_MO232_STAT)

/** \\brief  2D2C, Message Object  Acceptance Mask Register */
#define CAN_MO233_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AD2Cu)

/** Alias (User Manual Name) for CAN_MO233_AMR.
* To use register names with standard convension, please use CAN_MO233_AMR.
*/
#define	CAN_MOAMR233	(CAN_MO233_AMR)

/** \\brief  2D38, Message Object  Arbitration Register */
#define CAN_MO233_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AD38u)

/** Alias (User Manual Name) for CAN_MO233_AR.
* To use register names with standard convension, please use CAN_MO233_AR.
*/
#define	CAN_MOAR233	(CAN_MO233_AR)

/** \\brief  2D3C, Message Object  Control Register */
#define CAN_MO233_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AD3Cu)

/** Alias (User Manual Name) for CAN_MO233_CTR.
* To use register names with standard convension, please use CAN_MO233_CTR.
*/
#define	CAN_MOCTR233	(CAN_MO233_CTR)

/** \\brief  2D34, Message Object  Data Register High */
#define CAN_MO233_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AD34u)

/** Alias (User Manual Name) for CAN_MO233_DATAH.
* To use register names with standard convension, please use CAN_MO233_DATAH.
*/
#define	CAN_MODATAH233	(CAN_MO233_DATAH)

/** \\brief  2D30, Message Object  Data Register Low */
#define CAN_MO233_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AD30u)

/** Alias (User Manual Name) for CAN_MO233_DATAL.
* To use register names with standard convension, please use CAN_MO233_DATAL.
*/
#define	CAN_MODATAL233	(CAN_MO233_DATAL)

/** \\brief  2D20, Message Object  Function Control Register */
#define CAN_MO233_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AD20u)

/** Alias (User Manual Name) for CAN_MO233_FCR.
* To use register names with standard convension, please use CAN_MO233_FCR.
*/
#define	CAN_MOFCR233	(CAN_MO233_FCR)

/** \\brief  2D24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO233_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AD24u)

/** Alias (User Manual Name) for CAN_MO233_FGPR.
* To use register names with standard convension, please use CAN_MO233_FGPR.
*/
#define	CAN_MOFGPR233	(CAN_MO233_FGPR)

/** \\brief  2D28, Message Object  Interrupt Pointer Register */
#define CAN_MO233_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AD28u)

/** Alias (User Manual Name) for CAN_MO233_IPR.
* To use register names with standard convension, please use CAN_MO233_IPR.
*/
#define	CAN_MOIPR233	(CAN_MO233_IPR)

/** \\brief  2D3C, Message Object  Control Register */
#define CAN_MO233_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AD3Cu)

/** Alias (User Manual Name) for CAN_MO233_STAT.
* To use register names with standard convension, please use CAN_MO233_STAT.
*/
#define	CAN_MOSTAT233	(CAN_MO233_STAT)

/** \\brief  2D4C, Message Object  Acceptance Mask Register */
#define CAN_MO234_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AD4Cu)

/** Alias (User Manual Name) for CAN_MO234_AMR.
* To use register names with standard convension, please use CAN_MO234_AMR.
*/
#define	CAN_MOAMR234	(CAN_MO234_AMR)

/** \\brief  2D58, Message Object  Arbitration Register */
#define CAN_MO234_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AD58u)

/** Alias (User Manual Name) for CAN_MO234_AR.
* To use register names with standard convension, please use CAN_MO234_AR.
*/
#define	CAN_MOAR234	(CAN_MO234_AR)

/** \\brief  2D5C, Message Object  Control Register */
#define CAN_MO234_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AD5Cu)

/** Alias (User Manual Name) for CAN_MO234_CTR.
* To use register names with standard convension, please use CAN_MO234_CTR.
*/
#define	CAN_MOCTR234	(CAN_MO234_CTR)

/** \\brief  2D54, Message Object  Data Register High */
#define CAN_MO234_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AD54u)

/** Alias (User Manual Name) for CAN_MO234_DATAH.
* To use register names with standard convension, please use CAN_MO234_DATAH.
*/
#define	CAN_MODATAH234	(CAN_MO234_DATAH)

/** \\brief  2D50, Message Object  Data Register Low */
#define CAN_MO234_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AD50u)

/** Alias (User Manual Name) for CAN_MO234_DATAL.
* To use register names with standard convension, please use CAN_MO234_DATAL.
*/
#define	CAN_MODATAL234	(CAN_MO234_DATAL)

/** \\brief  2D40, Message Object  Function Control Register */
#define CAN_MO234_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AD40u)

/** Alias (User Manual Name) for CAN_MO234_FCR.
* To use register names with standard convension, please use CAN_MO234_FCR.
*/
#define	CAN_MOFCR234	(CAN_MO234_FCR)

/** \\brief  2D44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO234_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AD44u)

/** Alias (User Manual Name) for CAN_MO234_FGPR.
* To use register names with standard convension, please use CAN_MO234_FGPR.
*/
#define	CAN_MOFGPR234	(CAN_MO234_FGPR)

/** \\brief  2D48, Message Object  Interrupt Pointer Register */
#define CAN_MO234_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AD48u)

/** Alias (User Manual Name) for CAN_MO234_IPR.
* To use register names with standard convension, please use CAN_MO234_IPR.
*/
#define	CAN_MOIPR234	(CAN_MO234_IPR)

/** \\brief  2D5C, Message Object  Control Register */
#define CAN_MO234_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AD5Cu)

/** Alias (User Manual Name) for CAN_MO234_STAT.
* To use register names with standard convension, please use CAN_MO234_STAT.
*/
#define	CAN_MOSTAT234	(CAN_MO234_STAT)

/** \\brief  2D6C, Message Object  Acceptance Mask Register */
#define CAN_MO235_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AD6Cu)

/** Alias (User Manual Name) for CAN_MO235_AMR.
* To use register names with standard convension, please use CAN_MO235_AMR.
*/
#define	CAN_MOAMR235	(CAN_MO235_AMR)

/** \\brief  2D78, Message Object  Arbitration Register */
#define CAN_MO235_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AD78u)

/** Alias (User Manual Name) for CAN_MO235_AR.
* To use register names with standard convension, please use CAN_MO235_AR.
*/
#define	CAN_MOAR235	(CAN_MO235_AR)

/** \\brief  2D7C, Message Object  Control Register */
#define CAN_MO235_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AD7Cu)

/** Alias (User Manual Name) for CAN_MO235_CTR.
* To use register names with standard convension, please use CAN_MO235_CTR.
*/
#define	CAN_MOCTR235	(CAN_MO235_CTR)

/** \\brief  2D74, Message Object  Data Register High */
#define CAN_MO235_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AD74u)

/** Alias (User Manual Name) for CAN_MO235_DATAH.
* To use register names with standard convension, please use CAN_MO235_DATAH.
*/
#define	CAN_MODATAH235	(CAN_MO235_DATAH)

/** \\brief  2D70, Message Object  Data Register Low */
#define CAN_MO235_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AD70u)

/** Alias (User Manual Name) for CAN_MO235_DATAL.
* To use register names with standard convension, please use CAN_MO235_DATAL.
*/
#define	CAN_MODATAL235	(CAN_MO235_DATAL)

/** \\brief  2D60, Message Object  Function Control Register */
#define CAN_MO235_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AD60u)

/** Alias (User Manual Name) for CAN_MO235_FCR.
* To use register names with standard convension, please use CAN_MO235_FCR.
*/
#define	CAN_MOFCR235	(CAN_MO235_FCR)

/** \\brief  2D64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO235_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AD64u)

/** Alias (User Manual Name) for CAN_MO235_FGPR.
* To use register names with standard convension, please use CAN_MO235_FGPR.
*/
#define	CAN_MOFGPR235	(CAN_MO235_FGPR)

/** \\brief  2D68, Message Object  Interrupt Pointer Register */
#define CAN_MO235_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AD68u)

/** Alias (User Manual Name) for CAN_MO235_IPR.
* To use register names with standard convension, please use CAN_MO235_IPR.
*/
#define	CAN_MOIPR235	(CAN_MO235_IPR)

/** \\brief  2D7C, Message Object  Control Register */
#define CAN_MO235_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AD7Cu)

/** Alias (User Manual Name) for CAN_MO235_STAT.
* To use register names with standard convension, please use CAN_MO235_STAT.
*/
#define	CAN_MOSTAT235	(CAN_MO235_STAT)

/** \\brief  2D8C, Message Object  Acceptance Mask Register */
#define CAN_MO236_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AD8Cu)

/** Alias (User Manual Name) for CAN_MO236_AMR.
* To use register names with standard convension, please use CAN_MO236_AMR.
*/
#define	CAN_MOAMR236	(CAN_MO236_AMR)

/** \\brief  2D98, Message Object  Arbitration Register */
#define CAN_MO236_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AD98u)

/** Alias (User Manual Name) for CAN_MO236_AR.
* To use register names with standard convension, please use CAN_MO236_AR.
*/
#define	CAN_MOAR236	(CAN_MO236_AR)

/** \\brief  2D9C, Message Object  Control Register */
#define CAN_MO236_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AD9Cu)

/** Alias (User Manual Name) for CAN_MO236_CTR.
* To use register names with standard convension, please use CAN_MO236_CTR.
*/
#define	CAN_MOCTR236	(CAN_MO236_CTR)

/** \\brief  2D94, Message Object  Data Register High */
#define CAN_MO236_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AD94u)

/** Alias (User Manual Name) for CAN_MO236_DATAH.
* To use register names with standard convension, please use CAN_MO236_DATAH.
*/
#define	CAN_MODATAH236	(CAN_MO236_DATAH)

/** \\brief  2D90, Message Object  Data Register Low */
#define CAN_MO236_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AD90u)

/** Alias (User Manual Name) for CAN_MO236_DATAL.
* To use register names with standard convension, please use CAN_MO236_DATAL.
*/
#define	CAN_MODATAL236	(CAN_MO236_DATAL)

/** \\brief  2D80, Message Object  Function Control Register */
#define CAN_MO236_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AD80u)

/** Alias (User Manual Name) for CAN_MO236_FCR.
* To use register names with standard convension, please use CAN_MO236_FCR.
*/
#define	CAN_MOFCR236	(CAN_MO236_FCR)

/** \\brief  2D84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO236_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AD84u)

/** Alias (User Manual Name) for CAN_MO236_FGPR.
* To use register names with standard convension, please use CAN_MO236_FGPR.
*/
#define	CAN_MOFGPR236	(CAN_MO236_FGPR)

/** \\brief  2D88, Message Object  Interrupt Pointer Register */
#define CAN_MO236_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AD88u)

/** Alias (User Manual Name) for CAN_MO236_IPR.
* To use register names with standard convension, please use CAN_MO236_IPR.
*/
#define	CAN_MOIPR236	(CAN_MO236_IPR)

/** \\brief  2D9C, Message Object  Control Register */
#define CAN_MO236_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AD9Cu)

/** Alias (User Manual Name) for CAN_MO236_STAT.
* To use register names with standard convension, please use CAN_MO236_STAT.
*/
#define	CAN_MOSTAT236	(CAN_MO236_STAT)

/** \\brief  2DAC, Message Object  Acceptance Mask Register */
#define CAN_MO237_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ADACu)

/** Alias (User Manual Name) for CAN_MO237_AMR.
* To use register names with standard convension, please use CAN_MO237_AMR.
*/
#define	CAN_MOAMR237	(CAN_MO237_AMR)

/** \\brief  2DB8, Message Object  Arbitration Register */
#define CAN_MO237_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ADB8u)

/** Alias (User Manual Name) for CAN_MO237_AR.
* To use register names with standard convension, please use CAN_MO237_AR.
*/
#define	CAN_MOAR237	(CAN_MO237_AR)

/** \\brief  2DBC, Message Object  Control Register */
#define CAN_MO237_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ADBCu)

/** Alias (User Manual Name) for CAN_MO237_CTR.
* To use register names with standard convension, please use CAN_MO237_CTR.
*/
#define	CAN_MOCTR237	(CAN_MO237_CTR)

/** \\brief  2DB4, Message Object  Data Register High */
#define CAN_MO237_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ADB4u)

/** Alias (User Manual Name) for CAN_MO237_DATAH.
* To use register names with standard convension, please use CAN_MO237_DATAH.
*/
#define	CAN_MODATAH237	(CAN_MO237_DATAH)

/** \\brief  2DB0, Message Object  Data Register Low */
#define CAN_MO237_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ADB0u)

/** Alias (User Manual Name) for CAN_MO237_DATAL.
* To use register names with standard convension, please use CAN_MO237_DATAL.
*/
#define	CAN_MODATAL237	(CAN_MO237_DATAL)

/** \\brief  2DA0, Message Object  Function Control Register */
#define CAN_MO237_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ADA0u)

/** Alias (User Manual Name) for CAN_MO237_FCR.
* To use register names with standard convension, please use CAN_MO237_FCR.
*/
#define	CAN_MOFCR237	(CAN_MO237_FCR)

/** \\brief  2DA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO237_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ADA4u)

/** Alias (User Manual Name) for CAN_MO237_FGPR.
* To use register names with standard convension, please use CAN_MO237_FGPR.
*/
#define	CAN_MOFGPR237	(CAN_MO237_FGPR)

/** \\brief  2DA8, Message Object  Interrupt Pointer Register */
#define CAN_MO237_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ADA8u)

/** Alias (User Manual Name) for CAN_MO237_IPR.
* To use register names with standard convension, please use CAN_MO237_IPR.
*/
#define	CAN_MOIPR237	(CAN_MO237_IPR)

/** \\brief  2DBC, Message Object  Control Register */
#define CAN_MO237_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ADBCu)

/** Alias (User Manual Name) for CAN_MO237_STAT.
* To use register names with standard convension, please use CAN_MO237_STAT.
*/
#define	CAN_MOSTAT237	(CAN_MO237_STAT)

/** \\brief  2DCC, Message Object  Acceptance Mask Register */
#define CAN_MO238_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ADCCu)

/** Alias (User Manual Name) for CAN_MO238_AMR.
* To use register names with standard convension, please use CAN_MO238_AMR.
*/
#define	CAN_MOAMR238	(CAN_MO238_AMR)

/** \\brief  2DD8, Message Object  Arbitration Register */
#define CAN_MO238_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ADD8u)

/** Alias (User Manual Name) for CAN_MO238_AR.
* To use register names with standard convension, please use CAN_MO238_AR.
*/
#define	CAN_MOAR238	(CAN_MO238_AR)

/** \\brief  2DDC, Message Object  Control Register */
#define CAN_MO238_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ADDCu)

/** Alias (User Manual Name) for CAN_MO238_CTR.
* To use register names with standard convension, please use CAN_MO238_CTR.
*/
#define	CAN_MOCTR238	(CAN_MO238_CTR)

/** \\brief  2DD4, Message Object  Data Register High */
#define CAN_MO238_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ADD4u)

/** Alias (User Manual Name) for CAN_MO238_DATAH.
* To use register names with standard convension, please use CAN_MO238_DATAH.
*/
#define	CAN_MODATAH238	(CAN_MO238_DATAH)

/** \\brief  2DD0, Message Object  Data Register Low */
#define CAN_MO238_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ADD0u)

/** Alias (User Manual Name) for CAN_MO238_DATAL.
* To use register names with standard convension, please use CAN_MO238_DATAL.
*/
#define	CAN_MODATAL238	(CAN_MO238_DATAL)

/** \\brief  2DC0, Message Object  Function Control Register */
#define CAN_MO238_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ADC0u)

/** Alias (User Manual Name) for CAN_MO238_FCR.
* To use register names with standard convension, please use CAN_MO238_FCR.
*/
#define	CAN_MOFCR238	(CAN_MO238_FCR)

/** \\brief  2DC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO238_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ADC4u)

/** Alias (User Manual Name) for CAN_MO238_FGPR.
* To use register names with standard convension, please use CAN_MO238_FGPR.
*/
#define	CAN_MOFGPR238	(CAN_MO238_FGPR)

/** \\brief  2DC8, Message Object  Interrupt Pointer Register */
#define CAN_MO238_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ADC8u)

/** Alias (User Manual Name) for CAN_MO238_IPR.
* To use register names with standard convension, please use CAN_MO238_IPR.
*/
#define	CAN_MOIPR238	(CAN_MO238_IPR)

/** \\brief  2DDC, Message Object  Control Register */
#define CAN_MO238_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ADDCu)

/** Alias (User Manual Name) for CAN_MO238_STAT.
* To use register names with standard convension, please use CAN_MO238_STAT.
*/
#define	CAN_MOSTAT238	(CAN_MO238_STAT)

/** \\brief  2DEC, Message Object  Acceptance Mask Register */
#define CAN_MO239_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001ADECu)

/** Alias (User Manual Name) for CAN_MO239_AMR.
* To use register names with standard convension, please use CAN_MO239_AMR.
*/
#define	CAN_MOAMR239	(CAN_MO239_AMR)

/** \\brief  2DF8, Message Object  Arbitration Register */
#define CAN_MO239_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001ADF8u)

/** Alias (User Manual Name) for CAN_MO239_AR.
* To use register names with standard convension, please use CAN_MO239_AR.
*/
#define	CAN_MOAR239	(CAN_MO239_AR)

/** \\brief  2DFC, Message Object  Control Register */
#define CAN_MO239_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001ADFCu)

/** Alias (User Manual Name) for CAN_MO239_CTR.
* To use register names with standard convension, please use CAN_MO239_CTR.
*/
#define	CAN_MOCTR239	(CAN_MO239_CTR)

/** \\brief  2DF4, Message Object  Data Register High */
#define CAN_MO239_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001ADF4u)

/** Alias (User Manual Name) for CAN_MO239_DATAH.
* To use register names with standard convension, please use CAN_MO239_DATAH.
*/
#define	CAN_MODATAH239	(CAN_MO239_DATAH)

/** \\brief  2DF0, Message Object  Data Register Low */
#define CAN_MO239_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001ADF0u)

/** Alias (User Manual Name) for CAN_MO239_DATAL.
* To use register names with standard convension, please use CAN_MO239_DATAL.
*/
#define	CAN_MODATAL239	(CAN_MO239_DATAL)

/** \\brief  2DE0, Message Object  Function Control Register */
#define CAN_MO239_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001ADE0u)

/** Alias (User Manual Name) for CAN_MO239_FCR.
* To use register names with standard convension, please use CAN_MO239_FCR.
*/
#define	CAN_MOFCR239	(CAN_MO239_FCR)

/** \\brief  2DE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO239_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001ADE4u)

/** Alias (User Manual Name) for CAN_MO239_FGPR.
* To use register names with standard convension, please use CAN_MO239_FGPR.
*/
#define	CAN_MOFGPR239	(CAN_MO239_FGPR)

/** \\brief  2DE8, Message Object  Interrupt Pointer Register */
#define CAN_MO239_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001ADE8u)

/** Alias (User Manual Name) for CAN_MO239_IPR.
* To use register names with standard convension, please use CAN_MO239_IPR.
*/
#define	CAN_MOIPR239	(CAN_MO239_IPR)

/** \\brief  2DFC, Message Object  Control Register */
#define CAN_MO239_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001ADFCu)

/** Alias (User Manual Name) for CAN_MO239_STAT.
* To use register names with standard convension, please use CAN_MO239_STAT.
*/
#define	CAN_MOSTAT239	(CAN_MO239_STAT)

/** \\brief  12EC, Message Object  Acceptance Mask Register */
#define CAN_MO23_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00192ECu)

/** Alias (User Manual Name) for CAN_MO23_AMR.
* To use register names with standard convension, please use CAN_MO23_AMR.
*/
#define	CAN_MOAMR23	(CAN_MO23_AMR)

/** \\brief  12F8, Message Object  Arbitration Register */
#define CAN_MO23_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00192F8u)

/** Alias (User Manual Name) for CAN_MO23_AR.
* To use register names with standard convension, please use CAN_MO23_AR.
*/
#define	CAN_MOAR23	(CAN_MO23_AR)

/** \\brief  12FC, Message Object  Control Register */
#define CAN_MO23_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00192FCu)

/** Alias (User Manual Name) for CAN_MO23_CTR.
* To use register names with standard convension, please use CAN_MO23_CTR.
*/
#define	CAN_MOCTR23	(CAN_MO23_CTR)

/** \\brief  12F4, Message Object  Data Register High */
#define CAN_MO23_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00192F4u)

/** Alias (User Manual Name) for CAN_MO23_DATAH.
* To use register names with standard convension, please use CAN_MO23_DATAH.
*/
#define	CAN_MODATAH23	(CAN_MO23_DATAH)

/** \\brief  12F0, Message Object  Data Register Low */
#define CAN_MO23_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00192F0u)

/** Alias (User Manual Name) for CAN_MO23_DATAL.
* To use register names with standard convension, please use CAN_MO23_DATAL.
*/
#define	CAN_MODATAL23	(CAN_MO23_DATAL)

/** \\brief  12E0, Message Object  Function Control Register */
#define CAN_MO23_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00192E0u)

/** Alias (User Manual Name) for CAN_MO23_FCR.
* To use register names with standard convension, please use CAN_MO23_FCR.
*/
#define	CAN_MOFCR23	(CAN_MO23_FCR)

/** \\brief  12E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO23_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00192E4u)

/** Alias (User Manual Name) for CAN_MO23_FGPR.
* To use register names with standard convension, please use CAN_MO23_FGPR.
*/
#define	CAN_MOFGPR23	(CAN_MO23_FGPR)

/** \\brief  12E8, Message Object  Interrupt Pointer Register */
#define CAN_MO23_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00192E8u)

/** Alias (User Manual Name) for CAN_MO23_IPR.
* To use register names with standard convension, please use CAN_MO23_IPR.
*/
#define	CAN_MOIPR23	(CAN_MO23_IPR)

/** \\brief  12FC, Message Object  Control Register */
#define CAN_MO23_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00192FCu)

/** Alias (User Manual Name) for CAN_MO23_STAT.
* To use register names with standard convension, please use CAN_MO23_STAT.
*/
#define	CAN_MOSTAT23	(CAN_MO23_STAT)

/** \\brief  2E0C, Message Object  Acceptance Mask Register */
#define CAN_MO240_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AE0Cu)

/** Alias (User Manual Name) for CAN_MO240_AMR.
* To use register names with standard convension, please use CAN_MO240_AMR.
*/
#define	CAN_MOAMR240	(CAN_MO240_AMR)

/** \\brief  2E18, Message Object  Arbitration Register */
#define CAN_MO240_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AE18u)

/** Alias (User Manual Name) for CAN_MO240_AR.
* To use register names with standard convension, please use CAN_MO240_AR.
*/
#define	CAN_MOAR240	(CAN_MO240_AR)

/** \\brief  2E1C, Message Object  Control Register */
#define CAN_MO240_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AE1Cu)

/** Alias (User Manual Name) for CAN_MO240_CTR.
* To use register names with standard convension, please use CAN_MO240_CTR.
*/
#define	CAN_MOCTR240	(CAN_MO240_CTR)

/** \\brief  2E14, Message Object  Data Register High */
#define CAN_MO240_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AE14u)

/** Alias (User Manual Name) for CAN_MO240_DATAH.
* To use register names with standard convension, please use CAN_MO240_DATAH.
*/
#define	CAN_MODATAH240	(CAN_MO240_DATAH)

/** \\brief  2E10, Message Object  Data Register Low */
#define CAN_MO240_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AE10u)

/** Alias (User Manual Name) for CAN_MO240_DATAL.
* To use register names with standard convension, please use CAN_MO240_DATAL.
*/
#define	CAN_MODATAL240	(CAN_MO240_DATAL)

/** \\brief  2E00, Message Object  Function Control Register */
#define CAN_MO240_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AE00u)

/** Alias (User Manual Name) for CAN_MO240_FCR.
* To use register names with standard convension, please use CAN_MO240_FCR.
*/
#define	CAN_MOFCR240	(CAN_MO240_FCR)

/** \\brief  2E04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO240_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AE04u)

/** Alias (User Manual Name) for CAN_MO240_FGPR.
* To use register names with standard convension, please use CAN_MO240_FGPR.
*/
#define	CAN_MOFGPR240	(CAN_MO240_FGPR)

/** \\brief  2E08, Message Object  Interrupt Pointer Register */
#define CAN_MO240_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AE08u)

/** Alias (User Manual Name) for CAN_MO240_IPR.
* To use register names with standard convension, please use CAN_MO240_IPR.
*/
#define	CAN_MOIPR240	(CAN_MO240_IPR)

/** \\brief  2E1C, Message Object  Control Register */
#define CAN_MO240_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AE1Cu)

/** Alias (User Manual Name) for CAN_MO240_STAT.
* To use register names with standard convension, please use CAN_MO240_STAT.
*/
#define	CAN_MOSTAT240	(CAN_MO240_STAT)

/** \\brief  2E2C, Message Object  Acceptance Mask Register */
#define CAN_MO241_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AE2Cu)

/** Alias (User Manual Name) for CAN_MO241_AMR.
* To use register names with standard convension, please use CAN_MO241_AMR.
*/
#define	CAN_MOAMR241	(CAN_MO241_AMR)

/** \\brief  2E38, Message Object  Arbitration Register */
#define CAN_MO241_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AE38u)

/** Alias (User Manual Name) for CAN_MO241_AR.
* To use register names with standard convension, please use CAN_MO241_AR.
*/
#define	CAN_MOAR241	(CAN_MO241_AR)

/** \\brief  2E3C, Message Object  Control Register */
#define CAN_MO241_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AE3Cu)

/** Alias (User Manual Name) for CAN_MO241_CTR.
* To use register names with standard convension, please use CAN_MO241_CTR.
*/
#define	CAN_MOCTR241	(CAN_MO241_CTR)

/** \\brief  2E34, Message Object  Data Register High */
#define CAN_MO241_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AE34u)

/** Alias (User Manual Name) for CAN_MO241_DATAH.
* To use register names with standard convension, please use CAN_MO241_DATAH.
*/
#define	CAN_MODATAH241	(CAN_MO241_DATAH)

/** \\brief  2E30, Message Object  Data Register Low */
#define CAN_MO241_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AE30u)

/** Alias (User Manual Name) for CAN_MO241_DATAL.
* To use register names with standard convension, please use CAN_MO241_DATAL.
*/
#define	CAN_MODATAL241	(CAN_MO241_DATAL)

/** \\brief  2E20, Message Object  Function Control Register */
#define CAN_MO241_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AE20u)

/** Alias (User Manual Name) for CAN_MO241_FCR.
* To use register names with standard convension, please use CAN_MO241_FCR.
*/
#define	CAN_MOFCR241	(CAN_MO241_FCR)

/** \\brief  2E24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO241_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AE24u)

/** Alias (User Manual Name) for CAN_MO241_FGPR.
* To use register names with standard convension, please use CAN_MO241_FGPR.
*/
#define	CAN_MOFGPR241	(CAN_MO241_FGPR)

/** \\brief  2E28, Message Object  Interrupt Pointer Register */
#define CAN_MO241_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AE28u)

/** Alias (User Manual Name) for CAN_MO241_IPR.
* To use register names with standard convension, please use CAN_MO241_IPR.
*/
#define	CAN_MOIPR241	(CAN_MO241_IPR)

/** \\brief  2E3C, Message Object  Control Register */
#define CAN_MO241_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AE3Cu)

/** Alias (User Manual Name) for CAN_MO241_STAT.
* To use register names with standard convension, please use CAN_MO241_STAT.
*/
#define	CAN_MOSTAT241	(CAN_MO241_STAT)

/** \\brief  2E4C, Message Object  Acceptance Mask Register */
#define CAN_MO242_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AE4Cu)

/** Alias (User Manual Name) for CAN_MO242_AMR.
* To use register names with standard convension, please use CAN_MO242_AMR.
*/
#define	CAN_MOAMR242	(CAN_MO242_AMR)

/** \\brief  2E58, Message Object  Arbitration Register */
#define CAN_MO242_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AE58u)

/** Alias (User Manual Name) for CAN_MO242_AR.
* To use register names with standard convension, please use CAN_MO242_AR.
*/
#define	CAN_MOAR242	(CAN_MO242_AR)

/** \\brief  2E5C, Message Object  Control Register */
#define CAN_MO242_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AE5Cu)

/** Alias (User Manual Name) for CAN_MO242_CTR.
* To use register names with standard convension, please use CAN_MO242_CTR.
*/
#define	CAN_MOCTR242	(CAN_MO242_CTR)

/** \\brief  2E54, Message Object  Data Register High */
#define CAN_MO242_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AE54u)

/** Alias (User Manual Name) for CAN_MO242_DATAH.
* To use register names with standard convension, please use CAN_MO242_DATAH.
*/
#define	CAN_MODATAH242	(CAN_MO242_DATAH)

/** \\brief  2E50, Message Object  Data Register Low */
#define CAN_MO242_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AE50u)

/** Alias (User Manual Name) for CAN_MO242_DATAL.
* To use register names with standard convension, please use CAN_MO242_DATAL.
*/
#define	CAN_MODATAL242	(CAN_MO242_DATAL)

/** \\brief  2E40, Message Object  Function Control Register */
#define CAN_MO242_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AE40u)

/** Alias (User Manual Name) for CAN_MO242_FCR.
* To use register names with standard convension, please use CAN_MO242_FCR.
*/
#define	CAN_MOFCR242	(CAN_MO242_FCR)

/** \\brief  2E44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO242_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AE44u)

/** Alias (User Manual Name) for CAN_MO242_FGPR.
* To use register names with standard convension, please use CAN_MO242_FGPR.
*/
#define	CAN_MOFGPR242	(CAN_MO242_FGPR)

/** \\brief  2E48, Message Object  Interrupt Pointer Register */
#define CAN_MO242_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AE48u)

/** Alias (User Manual Name) for CAN_MO242_IPR.
* To use register names with standard convension, please use CAN_MO242_IPR.
*/
#define	CAN_MOIPR242	(CAN_MO242_IPR)

/** \\brief  2E5C, Message Object  Control Register */
#define CAN_MO242_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AE5Cu)

/** Alias (User Manual Name) for CAN_MO242_STAT.
* To use register names with standard convension, please use CAN_MO242_STAT.
*/
#define	CAN_MOSTAT242	(CAN_MO242_STAT)

/** \\brief  2E6C, Message Object  Acceptance Mask Register */
#define CAN_MO243_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AE6Cu)

/** Alias (User Manual Name) for CAN_MO243_AMR.
* To use register names with standard convension, please use CAN_MO243_AMR.
*/
#define	CAN_MOAMR243	(CAN_MO243_AMR)

/** \\brief  2E78, Message Object  Arbitration Register */
#define CAN_MO243_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AE78u)

/** Alias (User Manual Name) for CAN_MO243_AR.
* To use register names with standard convension, please use CAN_MO243_AR.
*/
#define	CAN_MOAR243	(CAN_MO243_AR)

/** \\brief  2E7C, Message Object  Control Register */
#define CAN_MO243_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AE7Cu)

/** Alias (User Manual Name) for CAN_MO243_CTR.
* To use register names with standard convension, please use CAN_MO243_CTR.
*/
#define	CAN_MOCTR243	(CAN_MO243_CTR)

/** \\brief  2E74, Message Object  Data Register High */
#define CAN_MO243_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AE74u)

/** Alias (User Manual Name) for CAN_MO243_DATAH.
* To use register names with standard convension, please use CAN_MO243_DATAH.
*/
#define	CAN_MODATAH243	(CAN_MO243_DATAH)

/** \\brief  2E70, Message Object  Data Register Low */
#define CAN_MO243_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AE70u)

/** Alias (User Manual Name) for CAN_MO243_DATAL.
* To use register names with standard convension, please use CAN_MO243_DATAL.
*/
#define	CAN_MODATAL243	(CAN_MO243_DATAL)

/** \\brief  2E60, Message Object  Function Control Register */
#define CAN_MO243_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AE60u)

/** Alias (User Manual Name) for CAN_MO243_FCR.
* To use register names with standard convension, please use CAN_MO243_FCR.
*/
#define	CAN_MOFCR243	(CAN_MO243_FCR)

/** \\brief  2E64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO243_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AE64u)

/** Alias (User Manual Name) for CAN_MO243_FGPR.
* To use register names with standard convension, please use CAN_MO243_FGPR.
*/
#define	CAN_MOFGPR243	(CAN_MO243_FGPR)

/** \\brief  2E68, Message Object  Interrupt Pointer Register */
#define CAN_MO243_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AE68u)

/** Alias (User Manual Name) for CAN_MO243_IPR.
* To use register names with standard convension, please use CAN_MO243_IPR.
*/
#define	CAN_MOIPR243	(CAN_MO243_IPR)

/** \\brief  2E7C, Message Object  Control Register */
#define CAN_MO243_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AE7Cu)

/** Alias (User Manual Name) for CAN_MO243_STAT.
* To use register names with standard convension, please use CAN_MO243_STAT.
*/
#define	CAN_MOSTAT243	(CAN_MO243_STAT)

/** \\brief  2E8C, Message Object  Acceptance Mask Register */
#define CAN_MO244_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AE8Cu)

/** Alias (User Manual Name) for CAN_MO244_AMR.
* To use register names with standard convension, please use CAN_MO244_AMR.
*/
#define	CAN_MOAMR244	(CAN_MO244_AMR)

/** \\brief  2E98, Message Object  Arbitration Register */
#define CAN_MO244_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AE98u)

/** Alias (User Manual Name) for CAN_MO244_AR.
* To use register names with standard convension, please use CAN_MO244_AR.
*/
#define	CAN_MOAR244	(CAN_MO244_AR)

/** \\brief  2E9C, Message Object  Control Register */
#define CAN_MO244_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AE9Cu)

/** Alias (User Manual Name) for CAN_MO244_CTR.
* To use register names with standard convension, please use CAN_MO244_CTR.
*/
#define	CAN_MOCTR244	(CAN_MO244_CTR)

/** \\brief  2E94, Message Object  Data Register High */
#define CAN_MO244_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AE94u)

/** Alias (User Manual Name) for CAN_MO244_DATAH.
* To use register names with standard convension, please use CAN_MO244_DATAH.
*/
#define	CAN_MODATAH244	(CAN_MO244_DATAH)

/** \\brief  2E90, Message Object  Data Register Low */
#define CAN_MO244_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AE90u)

/** Alias (User Manual Name) for CAN_MO244_DATAL.
* To use register names with standard convension, please use CAN_MO244_DATAL.
*/
#define	CAN_MODATAL244	(CAN_MO244_DATAL)

/** \\brief  2E80, Message Object  Function Control Register */
#define CAN_MO244_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AE80u)

/** Alias (User Manual Name) for CAN_MO244_FCR.
* To use register names with standard convension, please use CAN_MO244_FCR.
*/
#define	CAN_MOFCR244	(CAN_MO244_FCR)

/** \\brief  2E84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO244_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AE84u)

/** Alias (User Manual Name) for CAN_MO244_FGPR.
* To use register names with standard convension, please use CAN_MO244_FGPR.
*/
#define	CAN_MOFGPR244	(CAN_MO244_FGPR)

/** \\brief  2E88, Message Object  Interrupt Pointer Register */
#define CAN_MO244_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AE88u)

/** Alias (User Manual Name) for CAN_MO244_IPR.
* To use register names with standard convension, please use CAN_MO244_IPR.
*/
#define	CAN_MOIPR244	(CAN_MO244_IPR)

/** \\brief  2E9C, Message Object  Control Register */
#define CAN_MO244_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AE9Cu)

/** Alias (User Manual Name) for CAN_MO244_STAT.
* To use register names with standard convension, please use CAN_MO244_STAT.
*/
#define	CAN_MOSTAT244	(CAN_MO244_STAT)

/** \\brief  2EAC, Message Object  Acceptance Mask Register */
#define CAN_MO245_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AEACu)

/** Alias (User Manual Name) for CAN_MO245_AMR.
* To use register names with standard convension, please use CAN_MO245_AMR.
*/
#define	CAN_MOAMR245	(CAN_MO245_AMR)

/** \\brief  2EB8, Message Object  Arbitration Register */
#define CAN_MO245_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AEB8u)

/** Alias (User Manual Name) for CAN_MO245_AR.
* To use register names with standard convension, please use CAN_MO245_AR.
*/
#define	CAN_MOAR245	(CAN_MO245_AR)

/** \\brief  2EBC, Message Object  Control Register */
#define CAN_MO245_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AEBCu)

/** Alias (User Manual Name) for CAN_MO245_CTR.
* To use register names with standard convension, please use CAN_MO245_CTR.
*/
#define	CAN_MOCTR245	(CAN_MO245_CTR)

/** \\brief  2EB4, Message Object  Data Register High */
#define CAN_MO245_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AEB4u)

/** Alias (User Manual Name) for CAN_MO245_DATAH.
* To use register names with standard convension, please use CAN_MO245_DATAH.
*/
#define	CAN_MODATAH245	(CAN_MO245_DATAH)

/** \\brief  2EB0, Message Object  Data Register Low */
#define CAN_MO245_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AEB0u)

/** Alias (User Manual Name) for CAN_MO245_DATAL.
* To use register names with standard convension, please use CAN_MO245_DATAL.
*/
#define	CAN_MODATAL245	(CAN_MO245_DATAL)

/** \\brief  2EA0, Message Object  Function Control Register */
#define CAN_MO245_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AEA0u)

/** Alias (User Manual Name) for CAN_MO245_FCR.
* To use register names with standard convension, please use CAN_MO245_FCR.
*/
#define	CAN_MOFCR245	(CAN_MO245_FCR)

/** \\brief  2EA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO245_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AEA4u)

/** Alias (User Manual Name) for CAN_MO245_FGPR.
* To use register names with standard convension, please use CAN_MO245_FGPR.
*/
#define	CAN_MOFGPR245	(CAN_MO245_FGPR)

/** \\brief  2EA8, Message Object  Interrupt Pointer Register */
#define CAN_MO245_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AEA8u)

/** Alias (User Manual Name) for CAN_MO245_IPR.
* To use register names with standard convension, please use CAN_MO245_IPR.
*/
#define	CAN_MOIPR245	(CAN_MO245_IPR)

/** \\brief  2EBC, Message Object  Control Register */
#define CAN_MO245_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AEBCu)

/** Alias (User Manual Name) for CAN_MO245_STAT.
* To use register names with standard convension, please use CAN_MO245_STAT.
*/
#define	CAN_MOSTAT245	(CAN_MO245_STAT)

/** \\brief  2ECC, Message Object  Acceptance Mask Register */
#define CAN_MO246_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AECCu)

/** Alias (User Manual Name) for CAN_MO246_AMR.
* To use register names with standard convension, please use CAN_MO246_AMR.
*/
#define	CAN_MOAMR246	(CAN_MO246_AMR)

/** \\brief  2ED8, Message Object  Arbitration Register */
#define CAN_MO246_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AED8u)

/** Alias (User Manual Name) for CAN_MO246_AR.
* To use register names with standard convension, please use CAN_MO246_AR.
*/
#define	CAN_MOAR246	(CAN_MO246_AR)

/** \\brief  2EDC, Message Object  Control Register */
#define CAN_MO246_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AEDCu)

/** Alias (User Manual Name) for CAN_MO246_CTR.
* To use register names with standard convension, please use CAN_MO246_CTR.
*/
#define	CAN_MOCTR246	(CAN_MO246_CTR)

/** \\brief  2ED4, Message Object  Data Register High */
#define CAN_MO246_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AED4u)

/** Alias (User Manual Name) for CAN_MO246_DATAH.
* To use register names with standard convension, please use CAN_MO246_DATAH.
*/
#define	CAN_MODATAH246	(CAN_MO246_DATAH)

/** \\brief  2ED0, Message Object  Data Register Low */
#define CAN_MO246_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AED0u)

/** Alias (User Manual Name) for CAN_MO246_DATAL.
* To use register names with standard convension, please use CAN_MO246_DATAL.
*/
#define	CAN_MODATAL246	(CAN_MO246_DATAL)

/** \\brief  2EC0, Message Object  Function Control Register */
#define CAN_MO246_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AEC0u)

/** Alias (User Manual Name) for CAN_MO246_FCR.
* To use register names with standard convension, please use CAN_MO246_FCR.
*/
#define	CAN_MOFCR246	(CAN_MO246_FCR)

/** \\brief  2EC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO246_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AEC4u)

/** Alias (User Manual Name) for CAN_MO246_FGPR.
* To use register names with standard convension, please use CAN_MO246_FGPR.
*/
#define	CAN_MOFGPR246	(CAN_MO246_FGPR)

/** \\brief  2EC8, Message Object  Interrupt Pointer Register */
#define CAN_MO246_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AEC8u)

/** Alias (User Manual Name) for CAN_MO246_IPR.
* To use register names with standard convension, please use CAN_MO246_IPR.
*/
#define	CAN_MOIPR246	(CAN_MO246_IPR)

/** \\brief  2EDC, Message Object  Control Register */
#define CAN_MO246_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AEDCu)

/** Alias (User Manual Name) for CAN_MO246_STAT.
* To use register names with standard convension, please use CAN_MO246_STAT.
*/
#define	CAN_MOSTAT246	(CAN_MO246_STAT)

/** \\brief  2EEC, Message Object  Acceptance Mask Register */
#define CAN_MO247_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AEECu)

/** Alias (User Manual Name) for CAN_MO247_AMR.
* To use register names with standard convension, please use CAN_MO247_AMR.
*/
#define	CAN_MOAMR247	(CAN_MO247_AMR)

/** \\brief  2EF8, Message Object  Arbitration Register */
#define CAN_MO247_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AEF8u)

/** Alias (User Manual Name) for CAN_MO247_AR.
* To use register names with standard convension, please use CAN_MO247_AR.
*/
#define	CAN_MOAR247	(CAN_MO247_AR)

/** \\brief  2EFC, Message Object  Control Register */
#define CAN_MO247_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AEFCu)

/** Alias (User Manual Name) for CAN_MO247_CTR.
* To use register names with standard convension, please use CAN_MO247_CTR.
*/
#define	CAN_MOCTR247	(CAN_MO247_CTR)

/** \\brief  2EF4, Message Object  Data Register High */
#define CAN_MO247_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AEF4u)

/** Alias (User Manual Name) for CAN_MO247_DATAH.
* To use register names with standard convension, please use CAN_MO247_DATAH.
*/
#define	CAN_MODATAH247	(CAN_MO247_DATAH)

/** \\brief  2EF0, Message Object  Data Register Low */
#define CAN_MO247_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AEF0u)

/** Alias (User Manual Name) for CAN_MO247_DATAL.
* To use register names with standard convension, please use CAN_MO247_DATAL.
*/
#define	CAN_MODATAL247	(CAN_MO247_DATAL)

/** \\brief  2EE0, Message Object  Function Control Register */
#define CAN_MO247_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AEE0u)

/** Alias (User Manual Name) for CAN_MO247_FCR.
* To use register names with standard convension, please use CAN_MO247_FCR.
*/
#define	CAN_MOFCR247	(CAN_MO247_FCR)

/** \\brief  2EE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO247_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AEE4u)

/** Alias (User Manual Name) for CAN_MO247_FGPR.
* To use register names with standard convension, please use CAN_MO247_FGPR.
*/
#define	CAN_MOFGPR247	(CAN_MO247_FGPR)

/** \\brief  2EE8, Message Object  Interrupt Pointer Register */
#define CAN_MO247_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AEE8u)

/** Alias (User Manual Name) for CAN_MO247_IPR.
* To use register names with standard convension, please use CAN_MO247_IPR.
*/
#define	CAN_MOIPR247	(CAN_MO247_IPR)

/** \\brief  2EFC, Message Object  Control Register */
#define CAN_MO247_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AEFCu)

/** Alias (User Manual Name) for CAN_MO247_STAT.
* To use register names with standard convension, please use CAN_MO247_STAT.
*/
#define	CAN_MOSTAT247	(CAN_MO247_STAT)

/** \\brief  2F0C, Message Object  Acceptance Mask Register */
#define CAN_MO248_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AF0Cu)

/** Alias (User Manual Name) for CAN_MO248_AMR.
* To use register names with standard convension, please use CAN_MO248_AMR.
*/
#define	CAN_MOAMR248	(CAN_MO248_AMR)

/** \\brief  2F18, Message Object  Arbitration Register */
#define CAN_MO248_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AF18u)

/** Alias (User Manual Name) for CAN_MO248_AR.
* To use register names with standard convension, please use CAN_MO248_AR.
*/
#define	CAN_MOAR248	(CAN_MO248_AR)

/** \\brief  2F1C, Message Object  Control Register */
#define CAN_MO248_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AF1Cu)

/** Alias (User Manual Name) for CAN_MO248_CTR.
* To use register names with standard convension, please use CAN_MO248_CTR.
*/
#define	CAN_MOCTR248	(CAN_MO248_CTR)

/** \\brief  2F14, Message Object  Data Register High */
#define CAN_MO248_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AF14u)

/** Alias (User Manual Name) for CAN_MO248_DATAH.
* To use register names with standard convension, please use CAN_MO248_DATAH.
*/
#define	CAN_MODATAH248	(CAN_MO248_DATAH)

/** \\brief  2F10, Message Object  Data Register Low */
#define CAN_MO248_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AF10u)

/** Alias (User Manual Name) for CAN_MO248_DATAL.
* To use register names with standard convension, please use CAN_MO248_DATAL.
*/
#define	CAN_MODATAL248	(CAN_MO248_DATAL)

/** \\brief  2F00, Message Object  Function Control Register */
#define CAN_MO248_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AF00u)

/** Alias (User Manual Name) for CAN_MO248_FCR.
* To use register names with standard convension, please use CAN_MO248_FCR.
*/
#define	CAN_MOFCR248	(CAN_MO248_FCR)

/** \\brief  2F04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO248_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AF04u)

/** Alias (User Manual Name) for CAN_MO248_FGPR.
* To use register names with standard convension, please use CAN_MO248_FGPR.
*/
#define	CAN_MOFGPR248	(CAN_MO248_FGPR)

/** \\brief  2F08, Message Object  Interrupt Pointer Register */
#define CAN_MO248_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AF08u)

/** Alias (User Manual Name) for CAN_MO248_IPR.
* To use register names with standard convension, please use CAN_MO248_IPR.
*/
#define	CAN_MOIPR248	(CAN_MO248_IPR)

/** \\brief  2F1C, Message Object  Control Register */
#define CAN_MO248_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AF1Cu)

/** Alias (User Manual Name) for CAN_MO248_STAT.
* To use register names with standard convension, please use CAN_MO248_STAT.
*/
#define	CAN_MOSTAT248	(CAN_MO248_STAT)

/** \\brief  2F2C, Message Object  Acceptance Mask Register */
#define CAN_MO249_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AF2Cu)

/** Alias (User Manual Name) for CAN_MO249_AMR.
* To use register names with standard convension, please use CAN_MO249_AMR.
*/
#define	CAN_MOAMR249	(CAN_MO249_AMR)

/** \\brief  2F38, Message Object  Arbitration Register */
#define CAN_MO249_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AF38u)

/** Alias (User Manual Name) for CAN_MO249_AR.
* To use register names with standard convension, please use CAN_MO249_AR.
*/
#define	CAN_MOAR249	(CAN_MO249_AR)

/** \\brief  2F3C, Message Object  Control Register */
#define CAN_MO249_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AF3Cu)

/** Alias (User Manual Name) for CAN_MO249_CTR.
* To use register names with standard convension, please use CAN_MO249_CTR.
*/
#define	CAN_MOCTR249	(CAN_MO249_CTR)

/** \\brief  2F34, Message Object  Data Register High */
#define CAN_MO249_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AF34u)

/** Alias (User Manual Name) for CAN_MO249_DATAH.
* To use register names with standard convension, please use CAN_MO249_DATAH.
*/
#define	CAN_MODATAH249	(CAN_MO249_DATAH)

/** \\brief  2F30, Message Object  Data Register Low */
#define CAN_MO249_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AF30u)

/** Alias (User Manual Name) for CAN_MO249_DATAL.
* To use register names with standard convension, please use CAN_MO249_DATAL.
*/
#define	CAN_MODATAL249	(CAN_MO249_DATAL)

/** \\brief  2F20, Message Object  Function Control Register */
#define CAN_MO249_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AF20u)

/** Alias (User Manual Name) for CAN_MO249_FCR.
* To use register names with standard convension, please use CAN_MO249_FCR.
*/
#define	CAN_MOFCR249	(CAN_MO249_FCR)

/** \\brief  2F24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO249_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AF24u)

/** Alias (User Manual Name) for CAN_MO249_FGPR.
* To use register names with standard convension, please use CAN_MO249_FGPR.
*/
#define	CAN_MOFGPR249	(CAN_MO249_FGPR)

/** \\brief  2F28, Message Object  Interrupt Pointer Register */
#define CAN_MO249_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AF28u)

/** Alias (User Manual Name) for CAN_MO249_IPR.
* To use register names with standard convension, please use CAN_MO249_IPR.
*/
#define	CAN_MOIPR249	(CAN_MO249_IPR)

/** \\brief  2F3C, Message Object  Control Register */
#define CAN_MO249_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AF3Cu)

/** Alias (User Manual Name) for CAN_MO249_STAT.
* To use register names with standard convension, please use CAN_MO249_STAT.
*/
#define	CAN_MOSTAT249	(CAN_MO249_STAT)

/** \\brief  130C, Message Object  Acceptance Mask Register */
#define CAN_MO24_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001930Cu)

/** Alias (User Manual Name) for CAN_MO24_AMR.
* To use register names with standard convension, please use CAN_MO24_AMR.
*/
#define	CAN_MOAMR24	(CAN_MO24_AMR)

/** \\brief  1318, Message Object  Arbitration Register */
#define CAN_MO24_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019318u)

/** Alias (User Manual Name) for CAN_MO24_AR.
* To use register names with standard convension, please use CAN_MO24_AR.
*/
#define	CAN_MOAR24	(CAN_MO24_AR)

/** \\brief  131C, Message Object  Control Register */
#define CAN_MO24_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001931Cu)

/** Alias (User Manual Name) for CAN_MO24_CTR.
* To use register names with standard convension, please use CAN_MO24_CTR.
*/
#define	CAN_MOCTR24	(CAN_MO24_CTR)

/** \\brief  1314, Message Object  Data Register High */
#define CAN_MO24_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019314u)

/** Alias (User Manual Name) for CAN_MO24_DATAH.
* To use register names with standard convension, please use CAN_MO24_DATAH.
*/
#define	CAN_MODATAH24	(CAN_MO24_DATAH)

/** \\brief  1310, Message Object  Data Register Low */
#define CAN_MO24_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019310u)

/** Alias (User Manual Name) for CAN_MO24_DATAL.
* To use register names with standard convension, please use CAN_MO24_DATAL.
*/
#define	CAN_MODATAL24	(CAN_MO24_DATAL)

/** \\brief  1300, Message Object  Function Control Register */
#define CAN_MO24_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019300u)

/** Alias (User Manual Name) for CAN_MO24_FCR.
* To use register names with standard convension, please use CAN_MO24_FCR.
*/
#define	CAN_MOFCR24	(CAN_MO24_FCR)

/** \\brief  1304, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO24_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019304u)

/** Alias (User Manual Name) for CAN_MO24_FGPR.
* To use register names with standard convension, please use CAN_MO24_FGPR.
*/
#define	CAN_MOFGPR24	(CAN_MO24_FGPR)

/** \\brief  1308, Message Object  Interrupt Pointer Register */
#define CAN_MO24_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019308u)

/** Alias (User Manual Name) for CAN_MO24_IPR.
* To use register names with standard convension, please use CAN_MO24_IPR.
*/
#define	CAN_MOIPR24	(CAN_MO24_IPR)

/** \\brief  131C, Message Object  Control Register */
#define CAN_MO24_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001931Cu)

/** Alias (User Manual Name) for CAN_MO24_STAT.
* To use register names with standard convension, please use CAN_MO24_STAT.
*/
#define	CAN_MOSTAT24	(CAN_MO24_STAT)

/** \\brief  2F4C, Message Object  Acceptance Mask Register */
#define CAN_MO250_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AF4Cu)

/** Alias (User Manual Name) for CAN_MO250_AMR.
* To use register names with standard convension, please use CAN_MO250_AMR.
*/
#define	CAN_MOAMR250	(CAN_MO250_AMR)

/** \\brief  2F58, Message Object  Arbitration Register */
#define CAN_MO250_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AF58u)

/** Alias (User Manual Name) for CAN_MO250_AR.
* To use register names with standard convension, please use CAN_MO250_AR.
*/
#define	CAN_MOAR250	(CAN_MO250_AR)

/** \\brief  2F5C, Message Object  Control Register */
#define CAN_MO250_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AF5Cu)

/** Alias (User Manual Name) for CAN_MO250_CTR.
* To use register names with standard convension, please use CAN_MO250_CTR.
*/
#define	CAN_MOCTR250	(CAN_MO250_CTR)

/** \\brief  2F54, Message Object  Data Register High */
#define CAN_MO250_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AF54u)

/** Alias (User Manual Name) for CAN_MO250_DATAH.
* To use register names with standard convension, please use CAN_MO250_DATAH.
*/
#define	CAN_MODATAH250	(CAN_MO250_DATAH)

/** \\brief  2F50, Message Object  Data Register Low */
#define CAN_MO250_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AF50u)

/** Alias (User Manual Name) for CAN_MO250_DATAL.
* To use register names with standard convension, please use CAN_MO250_DATAL.
*/
#define	CAN_MODATAL250	(CAN_MO250_DATAL)

/** \\brief  2F40, Message Object  Function Control Register */
#define CAN_MO250_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AF40u)

/** Alias (User Manual Name) for CAN_MO250_FCR.
* To use register names with standard convension, please use CAN_MO250_FCR.
*/
#define	CAN_MOFCR250	(CAN_MO250_FCR)

/** \\brief  2F44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO250_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AF44u)

/** Alias (User Manual Name) for CAN_MO250_FGPR.
* To use register names with standard convension, please use CAN_MO250_FGPR.
*/
#define	CAN_MOFGPR250	(CAN_MO250_FGPR)

/** \\brief  2F48, Message Object  Interrupt Pointer Register */
#define CAN_MO250_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AF48u)

/** Alias (User Manual Name) for CAN_MO250_IPR.
* To use register names with standard convension, please use CAN_MO250_IPR.
*/
#define	CAN_MOIPR250	(CAN_MO250_IPR)

/** \\brief  2F5C, Message Object  Control Register */
#define CAN_MO250_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AF5Cu)

/** Alias (User Manual Name) for CAN_MO250_STAT.
* To use register names with standard convension, please use CAN_MO250_STAT.
*/
#define	CAN_MOSTAT250	(CAN_MO250_STAT)

/** \\brief  2F6C, Message Object  Acceptance Mask Register */
#define CAN_MO251_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AF6Cu)

/** Alias (User Manual Name) for CAN_MO251_AMR.
* To use register names with standard convension, please use CAN_MO251_AMR.
*/
#define	CAN_MOAMR251	(CAN_MO251_AMR)

/** \\brief  2F78, Message Object  Arbitration Register */
#define CAN_MO251_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AF78u)

/** Alias (User Manual Name) for CAN_MO251_AR.
* To use register names with standard convension, please use CAN_MO251_AR.
*/
#define	CAN_MOAR251	(CAN_MO251_AR)

/** \\brief  2F7C, Message Object  Control Register */
#define CAN_MO251_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AF7Cu)

/** Alias (User Manual Name) for CAN_MO251_CTR.
* To use register names with standard convension, please use CAN_MO251_CTR.
*/
#define	CAN_MOCTR251	(CAN_MO251_CTR)

/** \\brief  2F74, Message Object  Data Register High */
#define CAN_MO251_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AF74u)

/** Alias (User Manual Name) for CAN_MO251_DATAH.
* To use register names with standard convension, please use CAN_MO251_DATAH.
*/
#define	CAN_MODATAH251	(CAN_MO251_DATAH)

/** \\brief  2F70, Message Object  Data Register Low */
#define CAN_MO251_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AF70u)

/** Alias (User Manual Name) for CAN_MO251_DATAL.
* To use register names with standard convension, please use CAN_MO251_DATAL.
*/
#define	CAN_MODATAL251	(CAN_MO251_DATAL)

/** \\brief  2F60, Message Object  Function Control Register */
#define CAN_MO251_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AF60u)

/** Alias (User Manual Name) for CAN_MO251_FCR.
* To use register names with standard convension, please use CAN_MO251_FCR.
*/
#define	CAN_MOFCR251	(CAN_MO251_FCR)

/** \\brief  2F64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO251_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AF64u)

/** Alias (User Manual Name) for CAN_MO251_FGPR.
* To use register names with standard convension, please use CAN_MO251_FGPR.
*/
#define	CAN_MOFGPR251	(CAN_MO251_FGPR)

/** \\brief  2F68, Message Object  Interrupt Pointer Register */
#define CAN_MO251_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AF68u)

/** Alias (User Manual Name) for CAN_MO251_IPR.
* To use register names with standard convension, please use CAN_MO251_IPR.
*/
#define	CAN_MOIPR251	(CAN_MO251_IPR)

/** \\brief  2F7C, Message Object  Control Register */
#define CAN_MO251_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AF7Cu)

/** Alias (User Manual Name) for CAN_MO251_STAT.
* To use register names with standard convension, please use CAN_MO251_STAT.
*/
#define	CAN_MOSTAT251	(CAN_MO251_STAT)

/** \\brief  2F8C, Message Object  Acceptance Mask Register */
#define CAN_MO252_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AF8Cu)

/** Alias (User Manual Name) for CAN_MO252_AMR.
* To use register names with standard convension, please use CAN_MO252_AMR.
*/
#define	CAN_MOAMR252	(CAN_MO252_AMR)

/** \\brief  2F98, Message Object  Arbitration Register */
#define CAN_MO252_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AF98u)

/** Alias (User Manual Name) for CAN_MO252_AR.
* To use register names with standard convension, please use CAN_MO252_AR.
*/
#define	CAN_MOAR252	(CAN_MO252_AR)

/** \\brief  2F9C, Message Object  Control Register */
#define CAN_MO252_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AF9Cu)

/** Alias (User Manual Name) for CAN_MO252_CTR.
* To use register names with standard convension, please use CAN_MO252_CTR.
*/
#define	CAN_MOCTR252	(CAN_MO252_CTR)

/** \\brief  2F94, Message Object  Data Register High */
#define CAN_MO252_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AF94u)

/** Alias (User Manual Name) for CAN_MO252_DATAH.
* To use register names with standard convension, please use CAN_MO252_DATAH.
*/
#define	CAN_MODATAH252	(CAN_MO252_DATAH)

/** \\brief  2F90, Message Object  Data Register Low */
#define CAN_MO252_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AF90u)

/** Alias (User Manual Name) for CAN_MO252_DATAL.
* To use register names with standard convension, please use CAN_MO252_DATAL.
*/
#define	CAN_MODATAL252	(CAN_MO252_DATAL)

/** \\brief  2F80, Message Object  Function Control Register */
#define CAN_MO252_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AF80u)

/** Alias (User Manual Name) for CAN_MO252_FCR.
* To use register names with standard convension, please use CAN_MO252_FCR.
*/
#define	CAN_MOFCR252	(CAN_MO252_FCR)

/** \\brief  2F84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO252_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AF84u)

/** Alias (User Manual Name) for CAN_MO252_FGPR.
* To use register names with standard convension, please use CAN_MO252_FGPR.
*/
#define	CAN_MOFGPR252	(CAN_MO252_FGPR)

/** \\brief  2F88, Message Object  Interrupt Pointer Register */
#define CAN_MO252_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AF88u)

/** Alias (User Manual Name) for CAN_MO252_IPR.
* To use register names with standard convension, please use CAN_MO252_IPR.
*/
#define	CAN_MOIPR252	(CAN_MO252_IPR)

/** \\brief  2F9C, Message Object  Control Register */
#define CAN_MO252_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AF9Cu)

/** Alias (User Manual Name) for CAN_MO252_STAT.
* To use register names with standard convension, please use CAN_MO252_STAT.
*/
#define	CAN_MOSTAT252	(CAN_MO252_STAT)

/** \\brief  2FAC, Message Object  Acceptance Mask Register */
#define CAN_MO253_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AFACu)

/** Alias (User Manual Name) for CAN_MO253_AMR.
* To use register names with standard convension, please use CAN_MO253_AMR.
*/
#define	CAN_MOAMR253	(CAN_MO253_AMR)

/** \\brief  2FB8, Message Object  Arbitration Register */
#define CAN_MO253_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AFB8u)

/** Alias (User Manual Name) for CAN_MO253_AR.
* To use register names with standard convension, please use CAN_MO253_AR.
*/
#define	CAN_MOAR253	(CAN_MO253_AR)

/** \\brief  2FBC, Message Object  Control Register */
#define CAN_MO253_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AFBCu)

/** Alias (User Manual Name) for CAN_MO253_CTR.
* To use register names with standard convension, please use CAN_MO253_CTR.
*/
#define	CAN_MOCTR253	(CAN_MO253_CTR)

/** \\brief  2FB4, Message Object  Data Register High */
#define CAN_MO253_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AFB4u)

/** Alias (User Manual Name) for CAN_MO253_DATAH.
* To use register names with standard convension, please use CAN_MO253_DATAH.
*/
#define	CAN_MODATAH253	(CAN_MO253_DATAH)

/** \\brief  2FB0, Message Object  Data Register Low */
#define CAN_MO253_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AFB0u)

/** Alias (User Manual Name) for CAN_MO253_DATAL.
* To use register names with standard convension, please use CAN_MO253_DATAL.
*/
#define	CAN_MODATAL253	(CAN_MO253_DATAL)

/** \\brief  2FA0, Message Object  Function Control Register */
#define CAN_MO253_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AFA0u)

/** Alias (User Manual Name) for CAN_MO253_FCR.
* To use register names with standard convension, please use CAN_MO253_FCR.
*/
#define	CAN_MOFCR253	(CAN_MO253_FCR)

/** \\brief  2FA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO253_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AFA4u)

/** Alias (User Manual Name) for CAN_MO253_FGPR.
* To use register names with standard convension, please use CAN_MO253_FGPR.
*/
#define	CAN_MOFGPR253	(CAN_MO253_FGPR)

/** \\brief  2FA8, Message Object  Interrupt Pointer Register */
#define CAN_MO253_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AFA8u)

/** Alias (User Manual Name) for CAN_MO253_IPR.
* To use register names with standard convension, please use CAN_MO253_IPR.
*/
#define	CAN_MOIPR253	(CAN_MO253_IPR)

/** \\brief  2FBC, Message Object  Control Register */
#define CAN_MO253_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AFBCu)

/** Alias (User Manual Name) for CAN_MO253_STAT.
* To use register names with standard convension, please use CAN_MO253_STAT.
*/
#define	CAN_MOSTAT253	(CAN_MO253_STAT)

/** \\brief  2FCC, Message Object  Acceptance Mask Register */
#define CAN_MO254_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AFCCu)

/** Alias (User Manual Name) for CAN_MO254_AMR.
* To use register names with standard convension, please use CAN_MO254_AMR.
*/
#define	CAN_MOAMR254	(CAN_MO254_AMR)

/** \\brief  2FD8, Message Object  Arbitration Register */
#define CAN_MO254_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AFD8u)

/** Alias (User Manual Name) for CAN_MO254_AR.
* To use register names with standard convension, please use CAN_MO254_AR.
*/
#define	CAN_MOAR254	(CAN_MO254_AR)

/** \\brief  2FDC, Message Object  Control Register */
#define CAN_MO254_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AFDCu)

/** Alias (User Manual Name) for CAN_MO254_CTR.
* To use register names with standard convension, please use CAN_MO254_CTR.
*/
#define	CAN_MOCTR254	(CAN_MO254_CTR)

/** \\brief  2FD4, Message Object  Data Register High */
#define CAN_MO254_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AFD4u)

/** Alias (User Manual Name) for CAN_MO254_DATAH.
* To use register names with standard convension, please use CAN_MO254_DATAH.
*/
#define	CAN_MODATAH254	(CAN_MO254_DATAH)

/** \\brief  2FD0, Message Object  Data Register Low */
#define CAN_MO254_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AFD0u)

/** Alias (User Manual Name) for CAN_MO254_DATAL.
* To use register names with standard convension, please use CAN_MO254_DATAL.
*/
#define	CAN_MODATAL254	(CAN_MO254_DATAL)

/** \\brief  2FC0, Message Object  Function Control Register */
#define CAN_MO254_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AFC0u)

/** Alias (User Manual Name) for CAN_MO254_FCR.
* To use register names with standard convension, please use CAN_MO254_FCR.
*/
#define	CAN_MOFCR254	(CAN_MO254_FCR)

/** \\brief  2FC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO254_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AFC4u)

/** Alias (User Manual Name) for CAN_MO254_FGPR.
* To use register names with standard convension, please use CAN_MO254_FGPR.
*/
#define	CAN_MOFGPR254	(CAN_MO254_FGPR)

/** \\brief  2FC8, Message Object  Interrupt Pointer Register */
#define CAN_MO254_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AFC8u)

/** Alias (User Manual Name) for CAN_MO254_IPR.
* To use register names with standard convension, please use CAN_MO254_IPR.
*/
#define	CAN_MOIPR254	(CAN_MO254_IPR)

/** \\brief  2FDC, Message Object  Control Register */
#define CAN_MO254_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AFDCu)

/** Alias (User Manual Name) for CAN_MO254_STAT.
* To use register names with standard convension, please use CAN_MO254_STAT.
*/
#define	CAN_MOSTAT254	(CAN_MO254_STAT)

/** \\brief  2FEC, Message Object  Acceptance Mask Register */
#define CAN_MO255_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001AFECu)

/** Alias (User Manual Name) for CAN_MO255_AMR.
* To use register names with standard convension, please use CAN_MO255_AMR.
*/
#define	CAN_MOAMR255	(CAN_MO255_AMR)

/** \\brief  2FF8, Message Object  Arbitration Register */
#define CAN_MO255_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF001AFF8u)

/** Alias (User Manual Name) for CAN_MO255_AR.
* To use register names with standard convension, please use CAN_MO255_AR.
*/
#define	CAN_MOAR255	(CAN_MO255_AR)

/** \\brief  2FFC, Message Object  Control Register */
#define CAN_MO255_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001AFFCu)

/** Alias (User Manual Name) for CAN_MO255_CTR.
* To use register names with standard convension, please use CAN_MO255_CTR.
*/
#define	CAN_MOCTR255	(CAN_MO255_CTR)

/** \\brief  2FF4, Message Object  Data Register High */
#define CAN_MO255_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF001AFF4u)

/** Alias (User Manual Name) for CAN_MO255_DATAH.
* To use register names with standard convension, please use CAN_MO255_DATAH.
*/
#define	CAN_MODATAH255	(CAN_MO255_DATAH)

/** \\brief  2FF0, Message Object  Data Register Low */
#define CAN_MO255_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF001AFF0u)

/** Alias (User Manual Name) for CAN_MO255_DATAL.
* To use register names with standard convension, please use CAN_MO255_DATAL.
*/
#define	CAN_MODATAL255	(CAN_MO255_DATAL)

/** \\brief  2FE0, Message Object  Function Control Register */
#define CAN_MO255_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF001AFE0u)

/** Alias (User Manual Name) for CAN_MO255_FCR.
* To use register names with standard convension, please use CAN_MO255_FCR.
*/
#define	CAN_MOFCR255	(CAN_MO255_FCR)

/** \\brief  2FE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO255_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF001AFE4u)

/** Alias (User Manual Name) for CAN_MO255_FGPR.
* To use register names with standard convension, please use CAN_MO255_FGPR.
*/
#define	CAN_MOFGPR255	(CAN_MO255_FGPR)

/** \\brief  2FE8, Message Object  Interrupt Pointer Register */
#define CAN_MO255_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF001AFE8u)

/** Alias (User Manual Name) for CAN_MO255_IPR.
* To use register names with standard convension, please use CAN_MO255_IPR.
*/
#define	CAN_MOIPR255	(CAN_MO255_IPR)

/** \\brief  2FFC, Message Object  Control Register */
#define CAN_MO255_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001AFFCu)

/** Alias (User Manual Name) for CAN_MO255_STAT.
* To use register names with standard convension, please use CAN_MO255_STAT.
*/
#define	CAN_MOSTAT255	(CAN_MO255_STAT)

/** \\brief  132C, Message Object  Acceptance Mask Register */
#define CAN_MO25_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001932Cu)

/** Alias (User Manual Name) for CAN_MO25_AMR.
* To use register names with standard convension, please use CAN_MO25_AMR.
*/
#define	CAN_MOAMR25	(CAN_MO25_AMR)

/** \\brief  1338, Message Object  Arbitration Register */
#define CAN_MO25_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019338u)

/** Alias (User Manual Name) for CAN_MO25_AR.
* To use register names with standard convension, please use CAN_MO25_AR.
*/
#define	CAN_MOAR25	(CAN_MO25_AR)

/** \\brief  133C, Message Object  Control Register */
#define CAN_MO25_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001933Cu)

/** Alias (User Manual Name) for CAN_MO25_CTR.
* To use register names with standard convension, please use CAN_MO25_CTR.
*/
#define	CAN_MOCTR25	(CAN_MO25_CTR)

/** \\brief  1334, Message Object  Data Register High */
#define CAN_MO25_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019334u)

/** Alias (User Manual Name) for CAN_MO25_DATAH.
* To use register names with standard convension, please use CAN_MO25_DATAH.
*/
#define	CAN_MODATAH25	(CAN_MO25_DATAH)

/** \\brief  1330, Message Object  Data Register Low */
#define CAN_MO25_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019330u)

/** Alias (User Manual Name) for CAN_MO25_DATAL.
* To use register names with standard convension, please use CAN_MO25_DATAL.
*/
#define	CAN_MODATAL25	(CAN_MO25_DATAL)

/** \\brief  1320, Message Object  Function Control Register */
#define CAN_MO25_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019320u)

/** Alias (User Manual Name) for CAN_MO25_FCR.
* To use register names with standard convension, please use CAN_MO25_FCR.
*/
#define	CAN_MOFCR25	(CAN_MO25_FCR)

/** \\brief  1324, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO25_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019324u)

/** Alias (User Manual Name) for CAN_MO25_FGPR.
* To use register names with standard convension, please use CAN_MO25_FGPR.
*/
#define	CAN_MOFGPR25	(CAN_MO25_FGPR)

/** \\brief  1328, Message Object  Interrupt Pointer Register */
#define CAN_MO25_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019328u)

/** Alias (User Manual Name) for CAN_MO25_IPR.
* To use register names with standard convension, please use CAN_MO25_IPR.
*/
#define	CAN_MOIPR25	(CAN_MO25_IPR)

/** \\brief  133C, Message Object  Control Register */
#define CAN_MO25_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001933Cu)

/** Alias (User Manual Name) for CAN_MO25_STAT.
* To use register names with standard convension, please use CAN_MO25_STAT.
*/
#define	CAN_MOSTAT25	(CAN_MO25_STAT)

/** \\brief  134C, Message Object  Acceptance Mask Register */
#define CAN_MO26_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001934Cu)

/** Alias (User Manual Name) for CAN_MO26_AMR.
* To use register names with standard convension, please use CAN_MO26_AMR.
*/
#define	CAN_MOAMR26	(CAN_MO26_AMR)

/** \\brief  1358, Message Object  Arbitration Register */
#define CAN_MO26_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019358u)

/** Alias (User Manual Name) for CAN_MO26_AR.
* To use register names with standard convension, please use CAN_MO26_AR.
*/
#define	CAN_MOAR26	(CAN_MO26_AR)

/** \\brief  135C, Message Object  Control Register */
#define CAN_MO26_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001935Cu)

/** Alias (User Manual Name) for CAN_MO26_CTR.
* To use register names with standard convension, please use CAN_MO26_CTR.
*/
#define	CAN_MOCTR26	(CAN_MO26_CTR)

/** \\brief  1354, Message Object  Data Register High */
#define CAN_MO26_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019354u)

/** Alias (User Manual Name) for CAN_MO26_DATAH.
* To use register names with standard convension, please use CAN_MO26_DATAH.
*/
#define	CAN_MODATAH26	(CAN_MO26_DATAH)

/** \\brief  1350, Message Object  Data Register Low */
#define CAN_MO26_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019350u)

/** Alias (User Manual Name) for CAN_MO26_DATAL.
* To use register names with standard convension, please use CAN_MO26_DATAL.
*/
#define	CAN_MODATAL26	(CAN_MO26_DATAL)

/** \\brief  1340, Message Object  Function Control Register */
#define CAN_MO26_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019340u)

/** Alias (User Manual Name) for CAN_MO26_FCR.
* To use register names with standard convension, please use CAN_MO26_FCR.
*/
#define	CAN_MOFCR26	(CAN_MO26_FCR)

/** \\brief  1344, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO26_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019344u)

/** Alias (User Manual Name) for CAN_MO26_FGPR.
* To use register names with standard convension, please use CAN_MO26_FGPR.
*/
#define	CAN_MOFGPR26	(CAN_MO26_FGPR)

/** \\brief  1348, Message Object  Interrupt Pointer Register */
#define CAN_MO26_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019348u)

/** Alias (User Manual Name) for CAN_MO26_IPR.
* To use register names with standard convension, please use CAN_MO26_IPR.
*/
#define	CAN_MOIPR26	(CAN_MO26_IPR)

/** \\brief  135C, Message Object  Control Register */
#define CAN_MO26_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001935Cu)

/** Alias (User Manual Name) for CAN_MO26_STAT.
* To use register names with standard convension, please use CAN_MO26_STAT.
*/
#define	CAN_MOSTAT26	(CAN_MO26_STAT)

/** \\brief  136C, Message Object  Acceptance Mask Register */
#define CAN_MO27_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001936Cu)

/** Alias (User Manual Name) for CAN_MO27_AMR.
* To use register names with standard convension, please use CAN_MO27_AMR.
*/
#define	CAN_MOAMR27	(CAN_MO27_AMR)

/** \\brief  1378, Message Object  Arbitration Register */
#define CAN_MO27_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019378u)

/** Alias (User Manual Name) for CAN_MO27_AR.
* To use register names with standard convension, please use CAN_MO27_AR.
*/
#define	CAN_MOAR27	(CAN_MO27_AR)

/** \\brief  137C, Message Object  Control Register */
#define CAN_MO27_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001937Cu)

/** Alias (User Manual Name) for CAN_MO27_CTR.
* To use register names with standard convension, please use CAN_MO27_CTR.
*/
#define	CAN_MOCTR27	(CAN_MO27_CTR)

/** \\brief  1374, Message Object  Data Register High */
#define CAN_MO27_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019374u)

/** Alias (User Manual Name) for CAN_MO27_DATAH.
* To use register names with standard convension, please use CAN_MO27_DATAH.
*/
#define	CAN_MODATAH27	(CAN_MO27_DATAH)

/** \\brief  1370, Message Object  Data Register Low */
#define CAN_MO27_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019370u)

/** Alias (User Manual Name) for CAN_MO27_DATAL.
* To use register names with standard convension, please use CAN_MO27_DATAL.
*/
#define	CAN_MODATAL27	(CAN_MO27_DATAL)

/** \\brief  1360, Message Object  Function Control Register */
#define CAN_MO27_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019360u)

/** Alias (User Manual Name) for CAN_MO27_FCR.
* To use register names with standard convension, please use CAN_MO27_FCR.
*/
#define	CAN_MOFCR27	(CAN_MO27_FCR)

/** \\brief  1364, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO27_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019364u)

/** Alias (User Manual Name) for CAN_MO27_FGPR.
* To use register names with standard convension, please use CAN_MO27_FGPR.
*/
#define	CAN_MOFGPR27	(CAN_MO27_FGPR)

/** \\brief  1368, Message Object  Interrupt Pointer Register */
#define CAN_MO27_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019368u)

/** Alias (User Manual Name) for CAN_MO27_IPR.
* To use register names with standard convension, please use CAN_MO27_IPR.
*/
#define	CAN_MOIPR27	(CAN_MO27_IPR)

/** \\brief  137C, Message Object  Control Register */
#define CAN_MO27_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001937Cu)

/** Alias (User Manual Name) for CAN_MO27_STAT.
* To use register names with standard convension, please use CAN_MO27_STAT.
*/
#define	CAN_MOSTAT27	(CAN_MO27_STAT)

/** \\brief  138C, Message Object  Acceptance Mask Register */
#define CAN_MO28_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001938Cu)

/** Alias (User Manual Name) for CAN_MO28_AMR.
* To use register names with standard convension, please use CAN_MO28_AMR.
*/
#define	CAN_MOAMR28	(CAN_MO28_AMR)

/** \\brief  1398, Message Object  Arbitration Register */
#define CAN_MO28_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019398u)

/** Alias (User Manual Name) for CAN_MO28_AR.
* To use register names with standard convension, please use CAN_MO28_AR.
*/
#define	CAN_MOAR28	(CAN_MO28_AR)

/** \\brief  139C, Message Object  Control Register */
#define CAN_MO28_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001939Cu)

/** Alias (User Manual Name) for CAN_MO28_CTR.
* To use register names with standard convension, please use CAN_MO28_CTR.
*/
#define	CAN_MOCTR28	(CAN_MO28_CTR)

/** \\brief  1394, Message Object  Data Register High */
#define CAN_MO28_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019394u)

/** Alias (User Manual Name) for CAN_MO28_DATAH.
* To use register names with standard convension, please use CAN_MO28_DATAH.
*/
#define	CAN_MODATAH28	(CAN_MO28_DATAH)

/** \\brief  1390, Message Object  Data Register Low */
#define CAN_MO28_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019390u)

/** Alias (User Manual Name) for CAN_MO28_DATAL.
* To use register names with standard convension, please use CAN_MO28_DATAL.
*/
#define	CAN_MODATAL28	(CAN_MO28_DATAL)

/** \\brief  1380, Message Object  Function Control Register */
#define CAN_MO28_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019380u)

/** Alias (User Manual Name) for CAN_MO28_FCR.
* To use register names with standard convension, please use CAN_MO28_FCR.
*/
#define	CAN_MOFCR28	(CAN_MO28_FCR)

/** \\brief  1384, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO28_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019384u)

/** Alias (User Manual Name) for CAN_MO28_FGPR.
* To use register names with standard convension, please use CAN_MO28_FGPR.
*/
#define	CAN_MOFGPR28	(CAN_MO28_FGPR)

/** \\brief  1388, Message Object  Interrupt Pointer Register */
#define CAN_MO28_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019388u)

/** Alias (User Manual Name) for CAN_MO28_IPR.
* To use register names with standard convension, please use CAN_MO28_IPR.
*/
#define	CAN_MOIPR28	(CAN_MO28_IPR)

/** \\brief  139C, Message Object  Control Register */
#define CAN_MO28_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001939Cu)

/** Alias (User Manual Name) for CAN_MO28_STAT.
* To use register names with standard convension, please use CAN_MO28_STAT.
*/
#define	CAN_MOSTAT28	(CAN_MO28_STAT)

/** \\brief  13AC, Message Object  Acceptance Mask Register */
#define CAN_MO29_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00193ACu)

/** Alias (User Manual Name) for CAN_MO29_AMR.
* To use register names with standard convension, please use CAN_MO29_AMR.
*/
#define	CAN_MOAMR29	(CAN_MO29_AMR)

/** \\brief  13B8, Message Object  Arbitration Register */
#define CAN_MO29_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00193B8u)

/** Alias (User Manual Name) for CAN_MO29_AR.
* To use register names with standard convension, please use CAN_MO29_AR.
*/
#define	CAN_MOAR29	(CAN_MO29_AR)

/** \\brief  13BC, Message Object  Control Register */
#define CAN_MO29_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00193BCu)

/** Alias (User Manual Name) for CAN_MO29_CTR.
* To use register names with standard convension, please use CAN_MO29_CTR.
*/
#define	CAN_MOCTR29	(CAN_MO29_CTR)

/** \\brief  13B4, Message Object  Data Register High */
#define CAN_MO29_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00193B4u)

/** Alias (User Manual Name) for CAN_MO29_DATAH.
* To use register names with standard convension, please use CAN_MO29_DATAH.
*/
#define	CAN_MODATAH29	(CAN_MO29_DATAH)

/** \\brief  13B0, Message Object  Data Register Low */
#define CAN_MO29_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00193B0u)

/** Alias (User Manual Name) for CAN_MO29_DATAL.
* To use register names with standard convension, please use CAN_MO29_DATAL.
*/
#define	CAN_MODATAL29	(CAN_MO29_DATAL)

/** \\brief  13A0, Message Object  Function Control Register */
#define CAN_MO29_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00193A0u)

/** Alias (User Manual Name) for CAN_MO29_FCR.
* To use register names with standard convension, please use CAN_MO29_FCR.
*/
#define	CAN_MOFCR29	(CAN_MO29_FCR)

/** \\brief  13A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO29_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00193A4u)

/** Alias (User Manual Name) for CAN_MO29_FGPR.
* To use register names with standard convension, please use CAN_MO29_FGPR.
*/
#define	CAN_MOFGPR29	(CAN_MO29_FGPR)

/** \\brief  13A8, Message Object  Interrupt Pointer Register */
#define CAN_MO29_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00193A8u)

/** Alias (User Manual Name) for CAN_MO29_IPR.
* To use register names with standard convension, please use CAN_MO29_IPR.
*/
#define	CAN_MOIPR29	(CAN_MO29_IPR)

/** \\brief  13BC, Message Object  Control Register */
#define CAN_MO29_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00193BCu)

/** Alias (User Manual Name) for CAN_MO29_STAT.
* To use register names with standard convension, please use CAN_MO29_STAT.
*/
#define	CAN_MOSTAT29	(CAN_MO29_STAT)

/** \\brief  104C, Message Object  Acceptance Mask Register */
#define CAN_MO2_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001904Cu)

/** Alias (User Manual Name) for CAN_MO2_AMR.
* To use register names with standard convension, please use CAN_MO2_AMR.
*/
#define	CAN_MOAMR2	(CAN_MO2_AMR)

/** \\brief  1058, Message Object  Arbitration Register */
#define CAN_MO2_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019058u)

/** Alias (User Manual Name) for CAN_MO2_AR.
* To use register names with standard convension, please use CAN_MO2_AR.
*/
#define	CAN_MOAR2	(CAN_MO2_AR)

/** \\brief  105C, Message Object  Control Register */
#define CAN_MO2_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001905Cu)

/** Alias (User Manual Name) for CAN_MO2_CTR.
* To use register names with standard convension, please use CAN_MO2_CTR.
*/
#define	CAN_MOCTR2	(CAN_MO2_CTR)

/** \\brief  1054, Message Object  Data Register High */
#define CAN_MO2_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019054u)

/** Alias (User Manual Name) for CAN_MO2_DATAH.
* To use register names with standard convension, please use CAN_MO2_DATAH.
*/
#define	CAN_MODATAH2	(CAN_MO2_DATAH)

/** \\brief  1050, Message Object  Data Register Low */
#define CAN_MO2_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019050u)

/** Alias (User Manual Name) for CAN_MO2_DATAL.
* To use register names with standard convension, please use CAN_MO2_DATAL.
*/
#define	CAN_MODATAL2	(CAN_MO2_DATAL)

/** \\brief  1040, Message Object  Function Control Register */
#define CAN_MO2_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019040u)

/** Alias (User Manual Name) for CAN_MO2_FCR.
* To use register names with standard convension, please use CAN_MO2_FCR.
*/
#define	CAN_MOFCR2	(CAN_MO2_FCR)

/** \\brief  1044, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO2_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019044u)

/** Alias (User Manual Name) for CAN_MO2_FGPR.
* To use register names with standard convension, please use CAN_MO2_FGPR.
*/
#define	CAN_MOFGPR2	(CAN_MO2_FGPR)

/** \\brief  1048, Message Object  Interrupt Pointer Register */
#define CAN_MO2_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019048u)

/** Alias (User Manual Name) for CAN_MO2_IPR.
* To use register names with standard convension, please use CAN_MO2_IPR.
*/
#define	CAN_MOIPR2	(CAN_MO2_IPR)

/** \\brief  105C, Message Object  Control Register */
#define CAN_MO2_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001905Cu)

/** Alias (User Manual Name) for CAN_MO2_STAT.
* To use register names with standard convension, please use CAN_MO2_STAT.
*/
#define	CAN_MOSTAT2	(CAN_MO2_STAT)

/** \\brief  13CC, Message Object  Acceptance Mask Register */
#define CAN_MO30_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00193CCu)

/** Alias (User Manual Name) for CAN_MO30_AMR.
* To use register names with standard convension, please use CAN_MO30_AMR.
*/
#define	CAN_MOAMR30	(CAN_MO30_AMR)

/** \\brief  13D8, Message Object  Arbitration Register */
#define CAN_MO30_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00193D8u)

/** Alias (User Manual Name) for CAN_MO30_AR.
* To use register names with standard convension, please use CAN_MO30_AR.
*/
#define	CAN_MOAR30	(CAN_MO30_AR)

/** \\brief  13DC, Message Object  Control Register */
#define CAN_MO30_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00193DCu)

/** Alias (User Manual Name) for CAN_MO30_CTR.
* To use register names with standard convension, please use CAN_MO30_CTR.
*/
#define	CAN_MOCTR30	(CAN_MO30_CTR)

/** \\brief  13D4, Message Object  Data Register High */
#define CAN_MO30_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00193D4u)

/** Alias (User Manual Name) for CAN_MO30_DATAH.
* To use register names with standard convension, please use CAN_MO30_DATAH.
*/
#define	CAN_MODATAH30	(CAN_MO30_DATAH)

/** \\brief  13D0, Message Object  Data Register Low */
#define CAN_MO30_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00193D0u)

/** Alias (User Manual Name) for CAN_MO30_DATAL.
* To use register names with standard convension, please use CAN_MO30_DATAL.
*/
#define	CAN_MODATAL30	(CAN_MO30_DATAL)

/** \\brief  13C0, Message Object  Function Control Register */
#define CAN_MO30_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00193C0u)

/** Alias (User Manual Name) for CAN_MO30_FCR.
* To use register names with standard convension, please use CAN_MO30_FCR.
*/
#define	CAN_MOFCR30	(CAN_MO30_FCR)

/** \\brief  13C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO30_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00193C4u)

/** Alias (User Manual Name) for CAN_MO30_FGPR.
* To use register names with standard convension, please use CAN_MO30_FGPR.
*/
#define	CAN_MOFGPR30	(CAN_MO30_FGPR)

/** \\brief  13C8, Message Object  Interrupt Pointer Register */
#define CAN_MO30_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00193C8u)

/** Alias (User Manual Name) for CAN_MO30_IPR.
* To use register names with standard convension, please use CAN_MO30_IPR.
*/
#define	CAN_MOIPR30	(CAN_MO30_IPR)

/** \\brief  13DC, Message Object  Control Register */
#define CAN_MO30_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00193DCu)

/** Alias (User Manual Name) for CAN_MO30_STAT.
* To use register names with standard convension, please use CAN_MO30_STAT.
*/
#define	CAN_MOSTAT30	(CAN_MO30_STAT)

/** \\brief  13EC, Message Object  Acceptance Mask Register */
#define CAN_MO31_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00193ECu)

/** Alias (User Manual Name) for CAN_MO31_AMR.
* To use register names with standard convension, please use CAN_MO31_AMR.
*/
#define	CAN_MOAMR31	(CAN_MO31_AMR)

/** \\brief  13F8, Message Object  Arbitration Register */
#define CAN_MO31_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00193F8u)

/** Alias (User Manual Name) for CAN_MO31_AR.
* To use register names with standard convension, please use CAN_MO31_AR.
*/
#define	CAN_MOAR31	(CAN_MO31_AR)

/** \\brief  13FC, Message Object  Control Register */
#define CAN_MO31_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00193FCu)

/** Alias (User Manual Name) for CAN_MO31_CTR.
* To use register names with standard convension, please use CAN_MO31_CTR.
*/
#define	CAN_MOCTR31	(CAN_MO31_CTR)

/** \\brief  13F4, Message Object  Data Register High */
#define CAN_MO31_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00193F4u)

/** Alias (User Manual Name) for CAN_MO31_DATAH.
* To use register names with standard convension, please use CAN_MO31_DATAH.
*/
#define	CAN_MODATAH31	(CAN_MO31_DATAH)

/** \\brief  13F0, Message Object  Data Register Low */
#define CAN_MO31_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00193F0u)

/** Alias (User Manual Name) for CAN_MO31_DATAL.
* To use register names with standard convension, please use CAN_MO31_DATAL.
*/
#define	CAN_MODATAL31	(CAN_MO31_DATAL)

/** \\brief  13E0, Message Object  Function Control Register */
#define CAN_MO31_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00193E0u)

/** Alias (User Manual Name) for CAN_MO31_FCR.
* To use register names with standard convension, please use CAN_MO31_FCR.
*/
#define	CAN_MOFCR31	(CAN_MO31_FCR)

/** \\brief  13E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO31_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00193E4u)

/** Alias (User Manual Name) for CAN_MO31_FGPR.
* To use register names with standard convension, please use CAN_MO31_FGPR.
*/
#define	CAN_MOFGPR31	(CAN_MO31_FGPR)

/** \\brief  13E8, Message Object  Interrupt Pointer Register */
#define CAN_MO31_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00193E8u)

/** Alias (User Manual Name) for CAN_MO31_IPR.
* To use register names with standard convension, please use CAN_MO31_IPR.
*/
#define	CAN_MOIPR31	(CAN_MO31_IPR)

/** \\brief  13FC, Message Object  Control Register */
#define CAN_MO31_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00193FCu)

/** Alias (User Manual Name) for CAN_MO31_STAT.
* To use register names with standard convension, please use CAN_MO31_STAT.
*/
#define	CAN_MOSTAT31	(CAN_MO31_STAT)

/** \\brief  140C, Message Object  Acceptance Mask Register */
#define CAN_MO32_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001940Cu)

/** Alias (User Manual Name) for CAN_MO32_AMR.
* To use register names with standard convension, please use CAN_MO32_AMR.
*/
#define	CAN_MOAMR32	(CAN_MO32_AMR)

/** \\brief  1418, Message Object  Arbitration Register */
#define CAN_MO32_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019418u)

/** Alias (User Manual Name) for CAN_MO32_AR.
* To use register names with standard convension, please use CAN_MO32_AR.
*/
#define	CAN_MOAR32	(CAN_MO32_AR)

/** \\brief  141C, Message Object  Control Register */
#define CAN_MO32_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001941Cu)

/** Alias (User Manual Name) for CAN_MO32_CTR.
* To use register names with standard convension, please use CAN_MO32_CTR.
*/
#define	CAN_MOCTR32	(CAN_MO32_CTR)

/** \\brief  1414, Message Object  Data Register High */
#define CAN_MO32_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019414u)

/** Alias (User Manual Name) for CAN_MO32_DATAH.
* To use register names with standard convension, please use CAN_MO32_DATAH.
*/
#define	CAN_MODATAH32	(CAN_MO32_DATAH)

/** \\brief  1410, Message Object  Data Register Low */
#define CAN_MO32_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019410u)

/** Alias (User Manual Name) for CAN_MO32_DATAL.
* To use register names with standard convension, please use CAN_MO32_DATAL.
*/
#define	CAN_MODATAL32	(CAN_MO32_DATAL)

/** \\brief  1400, Message Object  Function Control Register */
#define CAN_MO32_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019400u)

/** Alias (User Manual Name) for CAN_MO32_FCR.
* To use register names with standard convension, please use CAN_MO32_FCR.
*/
#define	CAN_MOFCR32	(CAN_MO32_FCR)

/** \\brief  1404, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO32_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019404u)

/** Alias (User Manual Name) for CAN_MO32_FGPR.
* To use register names with standard convension, please use CAN_MO32_FGPR.
*/
#define	CAN_MOFGPR32	(CAN_MO32_FGPR)

/** \\brief  1408, Message Object  Interrupt Pointer Register */
#define CAN_MO32_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019408u)

/** Alias (User Manual Name) for CAN_MO32_IPR.
* To use register names with standard convension, please use CAN_MO32_IPR.
*/
#define	CAN_MOIPR32	(CAN_MO32_IPR)

/** \\brief  141C, Message Object  Control Register */
#define CAN_MO32_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001941Cu)

/** Alias (User Manual Name) for CAN_MO32_STAT.
* To use register names with standard convension, please use CAN_MO32_STAT.
*/
#define	CAN_MOSTAT32	(CAN_MO32_STAT)

/** \\brief  142C, Message Object  Acceptance Mask Register */
#define CAN_MO33_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001942Cu)

/** Alias (User Manual Name) for CAN_MO33_AMR.
* To use register names with standard convension, please use CAN_MO33_AMR.
*/
#define	CAN_MOAMR33	(CAN_MO33_AMR)

/** \\brief  1438, Message Object  Arbitration Register */
#define CAN_MO33_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019438u)

/** Alias (User Manual Name) for CAN_MO33_AR.
* To use register names with standard convension, please use CAN_MO33_AR.
*/
#define	CAN_MOAR33	(CAN_MO33_AR)

/** \\brief  143C, Message Object  Control Register */
#define CAN_MO33_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001943Cu)

/** Alias (User Manual Name) for CAN_MO33_CTR.
* To use register names with standard convension, please use CAN_MO33_CTR.
*/
#define	CAN_MOCTR33	(CAN_MO33_CTR)

/** \\brief  1434, Message Object  Data Register High */
#define CAN_MO33_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019434u)

/** Alias (User Manual Name) for CAN_MO33_DATAH.
* To use register names with standard convension, please use CAN_MO33_DATAH.
*/
#define	CAN_MODATAH33	(CAN_MO33_DATAH)

/** \\brief  1430, Message Object  Data Register Low */
#define CAN_MO33_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019430u)

/** Alias (User Manual Name) for CAN_MO33_DATAL.
* To use register names with standard convension, please use CAN_MO33_DATAL.
*/
#define	CAN_MODATAL33	(CAN_MO33_DATAL)

/** \\brief  1420, Message Object  Function Control Register */
#define CAN_MO33_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019420u)

/** Alias (User Manual Name) for CAN_MO33_FCR.
* To use register names with standard convension, please use CAN_MO33_FCR.
*/
#define	CAN_MOFCR33	(CAN_MO33_FCR)

/** \\brief  1424, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO33_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019424u)

/** Alias (User Manual Name) for CAN_MO33_FGPR.
* To use register names with standard convension, please use CAN_MO33_FGPR.
*/
#define	CAN_MOFGPR33	(CAN_MO33_FGPR)

/** \\brief  1428, Message Object  Interrupt Pointer Register */
#define CAN_MO33_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019428u)

/** Alias (User Manual Name) for CAN_MO33_IPR.
* To use register names with standard convension, please use CAN_MO33_IPR.
*/
#define	CAN_MOIPR33	(CAN_MO33_IPR)

/** \\brief  143C, Message Object  Control Register */
#define CAN_MO33_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001943Cu)

/** Alias (User Manual Name) for CAN_MO33_STAT.
* To use register names with standard convension, please use CAN_MO33_STAT.
*/
#define	CAN_MOSTAT33	(CAN_MO33_STAT)

/** \\brief  144C, Message Object  Acceptance Mask Register */
#define CAN_MO34_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001944Cu)

/** Alias (User Manual Name) for CAN_MO34_AMR.
* To use register names with standard convension, please use CAN_MO34_AMR.
*/
#define	CAN_MOAMR34	(CAN_MO34_AMR)

/** \\brief  1458, Message Object  Arbitration Register */
#define CAN_MO34_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019458u)

/** Alias (User Manual Name) for CAN_MO34_AR.
* To use register names with standard convension, please use CAN_MO34_AR.
*/
#define	CAN_MOAR34	(CAN_MO34_AR)

/** \\brief  145C, Message Object  Control Register */
#define CAN_MO34_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001945Cu)

/** Alias (User Manual Name) for CAN_MO34_CTR.
* To use register names with standard convension, please use CAN_MO34_CTR.
*/
#define	CAN_MOCTR34	(CAN_MO34_CTR)

/** \\brief  1454, Message Object  Data Register High */
#define CAN_MO34_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019454u)

/** Alias (User Manual Name) for CAN_MO34_DATAH.
* To use register names with standard convension, please use CAN_MO34_DATAH.
*/
#define	CAN_MODATAH34	(CAN_MO34_DATAH)

/** \\brief  1450, Message Object  Data Register Low */
#define CAN_MO34_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019450u)

/** Alias (User Manual Name) for CAN_MO34_DATAL.
* To use register names with standard convension, please use CAN_MO34_DATAL.
*/
#define	CAN_MODATAL34	(CAN_MO34_DATAL)

/** \\brief  1440, Message Object  Function Control Register */
#define CAN_MO34_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019440u)

/** Alias (User Manual Name) for CAN_MO34_FCR.
* To use register names with standard convension, please use CAN_MO34_FCR.
*/
#define	CAN_MOFCR34	(CAN_MO34_FCR)

/** \\brief  1444, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO34_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019444u)

/** Alias (User Manual Name) for CAN_MO34_FGPR.
* To use register names with standard convension, please use CAN_MO34_FGPR.
*/
#define	CAN_MOFGPR34	(CAN_MO34_FGPR)

/** \\brief  1448, Message Object  Interrupt Pointer Register */
#define CAN_MO34_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019448u)

/** Alias (User Manual Name) for CAN_MO34_IPR.
* To use register names with standard convension, please use CAN_MO34_IPR.
*/
#define	CAN_MOIPR34	(CAN_MO34_IPR)

/** \\brief  145C, Message Object  Control Register */
#define CAN_MO34_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001945Cu)

/** Alias (User Manual Name) for CAN_MO34_STAT.
* To use register names with standard convension, please use CAN_MO34_STAT.
*/
#define	CAN_MOSTAT34	(CAN_MO34_STAT)

/** \\brief  146C, Message Object  Acceptance Mask Register */
#define CAN_MO35_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001946Cu)

/** Alias (User Manual Name) for CAN_MO35_AMR.
* To use register names with standard convension, please use CAN_MO35_AMR.
*/
#define	CAN_MOAMR35	(CAN_MO35_AMR)

/** \\brief  1478, Message Object  Arbitration Register */
#define CAN_MO35_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019478u)

/** Alias (User Manual Name) for CAN_MO35_AR.
* To use register names with standard convension, please use CAN_MO35_AR.
*/
#define	CAN_MOAR35	(CAN_MO35_AR)

/** \\brief  147C, Message Object  Control Register */
#define CAN_MO35_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001947Cu)

/** Alias (User Manual Name) for CAN_MO35_CTR.
* To use register names with standard convension, please use CAN_MO35_CTR.
*/
#define	CAN_MOCTR35	(CAN_MO35_CTR)

/** \\brief  1474, Message Object  Data Register High */
#define CAN_MO35_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019474u)

/** Alias (User Manual Name) for CAN_MO35_DATAH.
* To use register names with standard convension, please use CAN_MO35_DATAH.
*/
#define	CAN_MODATAH35	(CAN_MO35_DATAH)

/** \\brief  1470, Message Object  Data Register Low */
#define CAN_MO35_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019470u)

/** Alias (User Manual Name) for CAN_MO35_DATAL.
* To use register names with standard convension, please use CAN_MO35_DATAL.
*/
#define	CAN_MODATAL35	(CAN_MO35_DATAL)

/** \\brief  1460, Message Object  Function Control Register */
#define CAN_MO35_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019460u)

/** Alias (User Manual Name) for CAN_MO35_FCR.
* To use register names with standard convension, please use CAN_MO35_FCR.
*/
#define	CAN_MOFCR35	(CAN_MO35_FCR)

/** \\brief  1464, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO35_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019464u)

/** Alias (User Manual Name) for CAN_MO35_FGPR.
* To use register names with standard convension, please use CAN_MO35_FGPR.
*/
#define	CAN_MOFGPR35	(CAN_MO35_FGPR)

/** \\brief  1468, Message Object  Interrupt Pointer Register */
#define CAN_MO35_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019468u)

/** Alias (User Manual Name) for CAN_MO35_IPR.
* To use register names with standard convension, please use CAN_MO35_IPR.
*/
#define	CAN_MOIPR35	(CAN_MO35_IPR)

/** \\brief  147C, Message Object  Control Register */
#define CAN_MO35_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001947Cu)

/** Alias (User Manual Name) for CAN_MO35_STAT.
* To use register names with standard convension, please use CAN_MO35_STAT.
*/
#define	CAN_MOSTAT35	(CAN_MO35_STAT)

/** \\brief  148C, Message Object  Acceptance Mask Register */
#define CAN_MO36_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001948Cu)

/** Alias (User Manual Name) for CAN_MO36_AMR.
* To use register names with standard convension, please use CAN_MO36_AMR.
*/
#define	CAN_MOAMR36	(CAN_MO36_AMR)

/** \\brief  1498, Message Object  Arbitration Register */
#define CAN_MO36_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019498u)

/** Alias (User Manual Name) for CAN_MO36_AR.
* To use register names with standard convension, please use CAN_MO36_AR.
*/
#define	CAN_MOAR36	(CAN_MO36_AR)

/** \\brief  149C, Message Object  Control Register */
#define CAN_MO36_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001949Cu)

/** Alias (User Manual Name) for CAN_MO36_CTR.
* To use register names with standard convension, please use CAN_MO36_CTR.
*/
#define	CAN_MOCTR36	(CAN_MO36_CTR)

/** \\brief  1494, Message Object  Data Register High */
#define CAN_MO36_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019494u)

/** Alias (User Manual Name) for CAN_MO36_DATAH.
* To use register names with standard convension, please use CAN_MO36_DATAH.
*/
#define	CAN_MODATAH36	(CAN_MO36_DATAH)

/** \\brief  1490, Message Object  Data Register Low */
#define CAN_MO36_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019490u)

/** Alias (User Manual Name) for CAN_MO36_DATAL.
* To use register names with standard convension, please use CAN_MO36_DATAL.
*/
#define	CAN_MODATAL36	(CAN_MO36_DATAL)

/** \\brief  1480, Message Object  Function Control Register */
#define CAN_MO36_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019480u)

/** Alias (User Manual Name) for CAN_MO36_FCR.
* To use register names with standard convension, please use CAN_MO36_FCR.
*/
#define	CAN_MOFCR36	(CAN_MO36_FCR)

/** \\brief  1484, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO36_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019484u)

/** Alias (User Manual Name) for CAN_MO36_FGPR.
* To use register names with standard convension, please use CAN_MO36_FGPR.
*/
#define	CAN_MOFGPR36	(CAN_MO36_FGPR)

/** \\brief  1488, Message Object  Interrupt Pointer Register */
#define CAN_MO36_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019488u)

/** Alias (User Manual Name) for CAN_MO36_IPR.
* To use register names with standard convension, please use CAN_MO36_IPR.
*/
#define	CAN_MOIPR36	(CAN_MO36_IPR)

/** \\brief  149C, Message Object  Control Register */
#define CAN_MO36_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001949Cu)

/** Alias (User Manual Name) for CAN_MO36_STAT.
* To use register names with standard convension, please use CAN_MO36_STAT.
*/
#define	CAN_MOSTAT36	(CAN_MO36_STAT)

/** \\brief  14AC, Message Object  Acceptance Mask Register */
#define CAN_MO37_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00194ACu)

/** Alias (User Manual Name) for CAN_MO37_AMR.
* To use register names with standard convension, please use CAN_MO37_AMR.
*/
#define	CAN_MOAMR37	(CAN_MO37_AMR)

/** \\brief  14B8, Message Object  Arbitration Register */
#define CAN_MO37_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00194B8u)

/** Alias (User Manual Name) for CAN_MO37_AR.
* To use register names with standard convension, please use CAN_MO37_AR.
*/
#define	CAN_MOAR37	(CAN_MO37_AR)

/** \\brief  14BC, Message Object  Control Register */
#define CAN_MO37_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00194BCu)

/** Alias (User Manual Name) for CAN_MO37_CTR.
* To use register names with standard convension, please use CAN_MO37_CTR.
*/
#define	CAN_MOCTR37	(CAN_MO37_CTR)

/** \\brief  14B4, Message Object  Data Register High */
#define CAN_MO37_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00194B4u)

/** Alias (User Manual Name) for CAN_MO37_DATAH.
* To use register names with standard convension, please use CAN_MO37_DATAH.
*/
#define	CAN_MODATAH37	(CAN_MO37_DATAH)

/** \\brief  14B0, Message Object  Data Register Low */
#define CAN_MO37_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00194B0u)

/** Alias (User Manual Name) for CAN_MO37_DATAL.
* To use register names with standard convension, please use CAN_MO37_DATAL.
*/
#define	CAN_MODATAL37	(CAN_MO37_DATAL)

/** \\brief  14A0, Message Object  Function Control Register */
#define CAN_MO37_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00194A0u)

/** Alias (User Manual Name) for CAN_MO37_FCR.
* To use register names with standard convension, please use CAN_MO37_FCR.
*/
#define	CAN_MOFCR37	(CAN_MO37_FCR)

/** \\brief  14A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO37_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00194A4u)

/** Alias (User Manual Name) for CAN_MO37_FGPR.
* To use register names with standard convension, please use CAN_MO37_FGPR.
*/
#define	CAN_MOFGPR37	(CAN_MO37_FGPR)

/** \\brief  14A8, Message Object  Interrupt Pointer Register */
#define CAN_MO37_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00194A8u)

/** Alias (User Manual Name) for CAN_MO37_IPR.
* To use register names with standard convension, please use CAN_MO37_IPR.
*/
#define	CAN_MOIPR37	(CAN_MO37_IPR)

/** \\brief  14BC, Message Object  Control Register */
#define CAN_MO37_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00194BCu)

/** Alias (User Manual Name) for CAN_MO37_STAT.
* To use register names with standard convension, please use CAN_MO37_STAT.
*/
#define	CAN_MOSTAT37	(CAN_MO37_STAT)

/** \\brief  14CC, Message Object  Acceptance Mask Register */
#define CAN_MO38_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00194CCu)

/** Alias (User Manual Name) for CAN_MO38_AMR.
* To use register names with standard convension, please use CAN_MO38_AMR.
*/
#define	CAN_MOAMR38	(CAN_MO38_AMR)

/** \\brief  14D8, Message Object  Arbitration Register */
#define CAN_MO38_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00194D8u)

/** Alias (User Manual Name) for CAN_MO38_AR.
* To use register names with standard convension, please use CAN_MO38_AR.
*/
#define	CAN_MOAR38	(CAN_MO38_AR)

/** \\brief  14DC, Message Object  Control Register */
#define CAN_MO38_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00194DCu)

/** Alias (User Manual Name) for CAN_MO38_CTR.
* To use register names with standard convension, please use CAN_MO38_CTR.
*/
#define	CAN_MOCTR38	(CAN_MO38_CTR)

/** \\brief  14D4, Message Object  Data Register High */
#define CAN_MO38_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00194D4u)

/** Alias (User Manual Name) for CAN_MO38_DATAH.
* To use register names with standard convension, please use CAN_MO38_DATAH.
*/
#define	CAN_MODATAH38	(CAN_MO38_DATAH)

/** \\brief  14D0, Message Object  Data Register Low */
#define CAN_MO38_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00194D0u)

/** Alias (User Manual Name) for CAN_MO38_DATAL.
* To use register names with standard convension, please use CAN_MO38_DATAL.
*/
#define	CAN_MODATAL38	(CAN_MO38_DATAL)

/** \\brief  14C0, Message Object  Function Control Register */
#define CAN_MO38_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00194C0u)

/** Alias (User Manual Name) for CAN_MO38_FCR.
* To use register names with standard convension, please use CAN_MO38_FCR.
*/
#define	CAN_MOFCR38	(CAN_MO38_FCR)

/** \\brief  14C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO38_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00194C4u)

/** Alias (User Manual Name) for CAN_MO38_FGPR.
* To use register names with standard convension, please use CAN_MO38_FGPR.
*/
#define	CAN_MOFGPR38	(CAN_MO38_FGPR)

/** \\brief  14C8, Message Object  Interrupt Pointer Register */
#define CAN_MO38_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00194C8u)

/** Alias (User Manual Name) for CAN_MO38_IPR.
* To use register names with standard convension, please use CAN_MO38_IPR.
*/
#define	CAN_MOIPR38	(CAN_MO38_IPR)

/** \\brief  14DC, Message Object  Control Register */
#define CAN_MO38_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00194DCu)

/** Alias (User Manual Name) for CAN_MO38_STAT.
* To use register names with standard convension, please use CAN_MO38_STAT.
*/
#define	CAN_MOSTAT38	(CAN_MO38_STAT)

/** \\brief  14EC, Message Object  Acceptance Mask Register */
#define CAN_MO39_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00194ECu)

/** Alias (User Manual Name) for CAN_MO39_AMR.
* To use register names with standard convension, please use CAN_MO39_AMR.
*/
#define	CAN_MOAMR39	(CAN_MO39_AMR)

/** \\brief  14F8, Message Object  Arbitration Register */
#define CAN_MO39_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00194F8u)

/** Alias (User Manual Name) for CAN_MO39_AR.
* To use register names with standard convension, please use CAN_MO39_AR.
*/
#define	CAN_MOAR39	(CAN_MO39_AR)

/** \\brief  14FC, Message Object  Control Register */
#define CAN_MO39_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00194FCu)

/** Alias (User Manual Name) for CAN_MO39_CTR.
* To use register names with standard convension, please use CAN_MO39_CTR.
*/
#define	CAN_MOCTR39	(CAN_MO39_CTR)

/** \\brief  14F4, Message Object  Data Register High */
#define CAN_MO39_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00194F4u)

/** Alias (User Manual Name) for CAN_MO39_DATAH.
* To use register names with standard convension, please use CAN_MO39_DATAH.
*/
#define	CAN_MODATAH39	(CAN_MO39_DATAH)

/** \\brief  14F0, Message Object  Data Register Low */
#define CAN_MO39_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00194F0u)

/** Alias (User Manual Name) for CAN_MO39_DATAL.
* To use register names with standard convension, please use CAN_MO39_DATAL.
*/
#define	CAN_MODATAL39	(CAN_MO39_DATAL)

/** \\brief  14E0, Message Object  Function Control Register */
#define CAN_MO39_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00194E0u)

/** Alias (User Manual Name) for CAN_MO39_FCR.
* To use register names with standard convension, please use CAN_MO39_FCR.
*/
#define	CAN_MOFCR39	(CAN_MO39_FCR)

/** \\brief  14E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO39_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00194E4u)

/** Alias (User Manual Name) for CAN_MO39_FGPR.
* To use register names with standard convension, please use CAN_MO39_FGPR.
*/
#define	CAN_MOFGPR39	(CAN_MO39_FGPR)

/** \\brief  14E8, Message Object  Interrupt Pointer Register */
#define CAN_MO39_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00194E8u)

/** Alias (User Manual Name) for CAN_MO39_IPR.
* To use register names with standard convension, please use CAN_MO39_IPR.
*/
#define	CAN_MOIPR39	(CAN_MO39_IPR)

/** \\brief  14FC, Message Object  Control Register */
#define CAN_MO39_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00194FCu)

/** Alias (User Manual Name) for CAN_MO39_STAT.
* To use register names with standard convension, please use CAN_MO39_STAT.
*/
#define	CAN_MOSTAT39	(CAN_MO39_STAT)

/** \\brief  106C, Message Object  Acceptance Mask Register */
#define CAN_MO3_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001906Cu)

/** Alias (User Manual Name) for CAN_MO3_AMR.
* To use register names with standard convension, please use CAN_MO3_AMR.
*/
#define	CAN_MOAMR3	(CAN_MO3_AMR)

/** \\brief  1078, Message Object  Arbitration Register */
#define CAN_MO3_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019078u)

/** Alias (User Manual Name) for CAN_MO3_AR.
* To use register names with standard convension, please use CAN_MO3_AR.
*/
#define	CAN_MOAR3	(CAN_MO3_AR)

/** \\brief  107C, Message Object  Control Register */
#define CAN_MO3_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001907Cu)

/** Alias (User Manual Name) for CAN_MO3_CTR.
* To use register names with standard convension, please use CAN_MO3_CTR.
*/
#define	CAN_MOCTR3	(CAN_MO3_CTR)

/** \\brief  1074, Message Object  Data Register High */
#define CAN_MO3_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019074u)

/** Alias (User Manual Name) for CAN_MO3_DATAH.
* To use register names with standard convension, please use CAN_MO3_DATAH.
*/
#define	CAN_MODATAH3	(CAN_MO3_DATAH)

/** \\brief  1070, Message Object  Data Register Low */
#define CAN_MO3_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019070u)

/** Alias (User Manual Name) for CAN_MO3_DATAL.
* To use register names with standard convension, please use CAN_MO3_DATAL.
*/
#define	CAN_MODATAL3	(CAN_MO3_DATAL)

/** \\brief  1060, Message Object  Function Control Register */
#define CAN_MO3_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019060u)

/** Alias (User Manual Name) for CAN_MO3_FCR.
* To use register names with standard convension, please use CAN_MO3_FCR.
*/
#define	CAN_MOFCR3	(CAN_MO3_FCR)

/** \\brief  1064, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO3_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019064u)

/** Alias (User Manual Name) for CAN_MO3_FGPR.
* To use register names with standard convension, please use CAN_MO3_FGPR.
*/
#define	CAN_MOFGPR3	(CAN_MO3_FGPR)

/** \\brief  1068, Message Object  Interrupt Pointer Register */
#define CAN_MO3_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019068u)

/** Alias (User Manual Name) for CAN_MO3_IPR.
* To use register names with standard convension, please use CAN_MO3_IPR.
*/
#define	CAN_MOIPR3	(CAN_MO3_IPR)

/** \\brief  107C, Message Object  Control Register */
#define CAN_MO3_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001907Cu)

/** Alias (User Manual Name) for CAN_MO3_STAT.
* To use register names with standard convension, please use CAN_MO3_STAT.
*/
#define	CAN_MOSTAT3	(CAN_MO3_STAT)

/** \\brief  150C, Message Object  Acceptance Mask Register */
#define CAN_MO40_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001950Cu)

/** Alias (User Manual Name) for CAN_MO40_AMR.
* To use register names with standard convension, please use CAN_MO40_AMR.
*/
#define	CAN_MOAMR40	(CAN_MO40_AMR)

/** \\brief  1518, Message Object  Arbitration Register */
#define CAN_MO40_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019518u)

/** Alias (User Manual Name) for CAN_MO40_AR.
* To use register names with standard convension, please use CAN_MO40_AR.
*/
#define	CAN_MOAR40	(CAN_MO40_AR)

/** \\brief  151C, Message Object  Control Register */
#define CAN_MO40_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001951Cu)

/** Alias (User Manual Name) for CAN_MO40_CTR.
* To use register names with standard convension, please use CAN_MO40_CTR.
*/
#define	CAN_MOCTR40	(CAN_MO40_CTR)

/** \\brief  1514, Message Object  Data Register High */
#define CAN_MO40_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019514u)

/** Alias (User Manual Name) for CAN_MO40_DATAH.
* To use register names with standard convension, please use CAN_MO40_DATAH.
*/
#define	CAN_MODATAH40	(CAN_MO40_DATAH)

/** \\brief  1510, Message Object  Data Register Low */
#define CAN_MO40_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019510u)

/** Alias (User Manual Name) for CAN_MO40_DATAL.
* To use register names with standard convension, please use CAN_MO40_DATAL.
*/
#define	CAN_MODATAL40	(CAN_MO40_DATAL)

/** \\brief  1500, Message Object  Function Control Register */
#define CAN_MO40_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019500u)

/** Alias (User Manual Name) for CAN_MO40_FCR.
* To use register names with standard convension, please use CAN_MO40_FCR.
*/
#define	CAN_MOFCR40	(CAN_MO40_FCR)

/** \\brief  1504, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO40_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019504u)

/** Alias (User Manual Name) for CAN_MO40_FGPR.
* To use register names with standard convension, please use CAN_MO40_FGPR.
*/
#define	CAN_MOFGPR40	(CAN_MO40_FGPR)

/** \\brief  1508, Message Object  Interrupt Pointer Register */
#define CAN_MO40_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019508u)

/** Alias (User Manual Name) for CAN_MO40_IPR.
* To use register names with standard convension, please use CAN_MO40_IPR.
*/
#define	CAN_MOIPR40	(CAN_MO40_IPR)

/** \\brief  151C, Message Object  Control Register */
#define CAN_MO40_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001951Cu)

/** Alias (User Manual Name) for CAN_MO40_STAT.
* To use register names with standard convension, please use CAN_MO40_STAT.
*/
#define	CAN_MOSTAT40	(CAN_MO40_STAT)

/** \\brief  152C, Message Object  Acceptance Mask Register */
#define CAN_MO41_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001952Cu)

/** Alias (User Manual Name) for CAN_MO41_AMR.
* To use register names with standard convension, please use CAN_MO41_AMR.
*/
#define	CAN_MOAMR41	(CAN_MO41_AMR)

/** \\brief  1538, Message Object  Arbitration Register */
#define CAN_MO41_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019538u)

/** Alias (User Manual Name) for CAN_MO41_AR.
* To use register names with standard convension, please use CAN_MO41_AR.
*/
#define	CAN_MOAR41	(CAN_MO41_AR)

/** \\brief  153C, Message Object  Control Register */
#define CAN_MO41_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001953Cu)

/** Alias (User Manual Name) for CAN_MO41_CTR.
* To use register names with standard convension, please use CAN_MO41_CTR.
*/
#define	CAN_MOCTR41	(CAN_MO41_CTR)

/** \\brief  1534, Message Object  Data Register High */
#define CAN_MO41_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019534u)

/** Alias (User Manual Name) for CAN_MO41_DATAH.
* To use register names with standard convension, please use CAN_MO41_DATAH.
*/
#define	CAN_MODATAH41	(CAN_MO41_DATAH)

/** \\brief  1530, Message Object  Data Register Low */
#define CAN_MO41_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019530u)

/** Alias (User Manual Name) for CAN_MO41_DATAL.
* To use register names with standard convension, please use CAN_MO41_DATAL.
*/
#define	CAN_MODATAL41	(CAN_MO41_DATAL)

/** \\brief  1520, Message Object  Function Control Register */
#define CAN_MO41_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019520u)

/** Alias (User Manual Name) for CAN_MO41_FCR.
* To use register names with standard convension, please use CAN_MO41_FCR.
*/
#define	CAN_MOFCR41	(CAN_MO41_FCR)

/** \\brief  1524, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO41_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019524u)

/** Alias (User Manual Name) for CAN_MO41_FGPR.
* To use register names with standard convension, please use CAN_MO41_FGPR.
*/
#define	CAN_MOFGPR41	(CAN_MO41_FGPR)

/** \\brief  1528, Message Object  Interrupt Pointer Register */
#define CAN_MO41_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019528u)

/** Alias (User Manual Name) for CAN_MO41_IPR.
* To use register names with standard convension, please use CAN_MO41_IPR.
*/
#define	CAN_MOIPR41	(CAN_MO41_IPR)

/** \\brief  153C, Message Object  Control Register */
#define CAN_MO41_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001953Cu)

/** Alias (User Manual Name) for CAN_MO41_STAT.
* To use register names with standard convension, please use CAN_MO41_STAT.
*/
#define	CAN_MOSTAT41	(CAN_MO41_STAT)

/** \\brief  154C, Message Object  Acceptance Mask Register */
#define CAN_MO42_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001954Cu)

/** Alias (User Manual Name) for CAN_MO42_AMR.
* To use register names with standard convension, please use CAN_MO42_AMR.
*/
#define	CAN_MOAMR42	(CAN_MO42_AMR)

/** \\brief  1558, Message Object  Arbitration Register */
#define CAN_MO42_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019558u)

/** Alias (User Manual Name) for CAN_MO42_AR.
* To use register names with standard convension, please use CAN_MO42_AR.
*/
#define	CAN_MOAR42	(CAN_MO42_AR)

/** \\brief  155C, Message Object  Control Register */
#define CAN_MO42_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001955Cu)

/** Alias (User Manual Name) for CAN_MO42_CTR.
* To use register names with standard convension, please use CAN_MO42_CTR.
*/
#define	CAN_MOCTR42	(CAN_MO42_CTR)

/** \\brief  1554, Message Object  Data Register High */
#define CAN_MO42_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019554u)

/** Alias (User Manual Name) for CAN_MO42_DATAH.
* To use register names with standard convension, please use CAN_MO42_DATAH.
*/
#define	CAN_MODATAH42	(CAN_MO42_DATAH)

/** \\brief  1550, Message Object  Data Register Low */
#define CAN_MO42_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019550u)

/** Alias (User Manual Name) for CAN_MO42_DATAL.
* To use register names with standard convension, please use CAN_MO42_DATAL.
*/
#define	CAN_MODATAL42	(CAN_MO42_DATAL)

/** \\brief  1540, Message Object  Function Control Register */
#define CAN_MO42_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019540u)

/** Alias (User Manual Name) for CAN_MO42_FCR.
* To use register names with standard convension, please use CAN_MO42_FCR.
*/
#define	CAN_MOFCR42	(CAN_MO42_FCR)

/** \\brief  1544, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO42_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019544u)

/** Alias (User Manual Name) for CAN_MO42_FGPR.
* To use register names with standard convension, please use CAN_MO42_FGPR.
*/
#define	CAN_MOFGPR42	(CAN_MO42_FGPR)

/** \\brief  1548, Message Object  Interrupt Pointer Register */
#define CAN_MO42_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019548u)

/** Alias (User Manual Name) for CAN_MO42_IPR.
* To use register names with standard convension, please use CAN_MO42_IPR.
*/
#define	CAN_MOIPR42	(CAN_MO42_IPR)

/** \\brief  155C, Message Object  Control Register */
#define CAN_MO42_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001955Cu)

/** Alias (User Manual Name) for CAN_MO42_STAT.
* To use register names with standard convension, please use CAN_MO42_STAT.
*/
#define	CAN_MOSTAT42	(CAN_MO42_STAT)

/** \\brief  156C, Message Object  Acceptance Mask Register */
#define CAN_MO43_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001956Cu)

/** Alias (User Manual Name) for CAN_MO43_AMR.
* To use register names with standard convension, please use CAN_MO43_AMR.
*/
#define	CAN_MOAMR43	(CAN_MO43_AMR)

/** \\brief  1578, Message Object  Arbitration Register */
#define CAN_MO43_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019578u)

/** Alias (User Manual Name) for CAN_MO43_AR.
* To use register names with standard convension, please use CAN_MO43_AR.
*/
#define	CAN_MOAR43	(CAN_MO43_AR)

/** \\brief  157C, Message Object  Control Register */
#define CAN_MO43_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001957Cu)

/** Alias (User Manual Name) for CAN_MO43_CTR.
* To use register names with standard convension, please use CAN_MO43_CTR.
*/
#define	CAN_MOCTR43	(CAN_MO43_CTR)

/** \\brief  1574, Message Object  Data Register High */
#define CAN_MO43_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019574u)

/** Alias (User Manual Name) for CAN_MO43_DATAH.
* To use register names with standard convension, please use CAN_MO43_DATAH.
*/
#define	CAN_MODATAH43	(CAN_MO43_DATAH)

/** \\brief  1570, Message Object  Data Register Low */
#define CAN_MO43_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019570u)

/** Alias (User Manual Name) for CAN_MO43_DATAL.
* To use register names with standard convension, please use CAN_MO43_DATAL.
*/
#define	CAN_MODATAL43	(CAN_MO43_DATAL)

/** \\brief  1560, Message Object  Function Control Register */
#define CAN_MO43_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019560u)

/** Alias (User Manual Name) for CAN_MO43_FCR.
* To use register names with standard convension, please use CAN_MO43_FCR.
*/
#define	CAN_MOFCR43	(CAN_MO43_FCR)

/** \\brief  1564, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO43_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019564u)

/** Alias (User Manual Name) for CAN_MO43_FGPR.
* To use register names with standard convension, please use CAN_MO43_FGPR.
*/
#define	CAN_MOFGPR43	(CAN_MO43_FGPR)

/** \\brief  1568, Message Object  Interrupt Pointer Register */
#define CAN_MO43_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019568u)

/** Alias (User Manual Name) for CAN_MO43_IPR.
* To use register names with standard convension, please use CAN_MO43_IPR.
*/
#define	CAN_MOIPR43	(CAN_MO43_IPR)

/** \\brief  157C, Message Object  Control Register */
#define CAN_MO43_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001957Cu)

/** Alias (User Manual Name) for CAN_MO43_STAT.
* To use register names with standard convension, please use CAN_MO43_STAT.
*/
#define	CAN_MOSTAT43	(CAN_MO43_STAT)

/** \\brief  158C, Message Object  Acceptance Mask Register */
#define CAN_MO44_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001958Cu)

/** Alias (User Manual Name) for CAN_MO44_AMR.
* To use register names with standard convension, please use CAN_MO44_AMR.
*/
#define	CAN_MOAMR44	(CAN_MO44_AMR)

/** \\brief  1598, Message Object  Arbitration Register */
#define CAN_MO44_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019598u)

/** Alias (User Manual Name) for CAN_MO44_AR.
* To use register names with standard convension, please use CAN_MO44_AR.
*/
#define	CAN_MOAR44	(CAN_MO44_AR)

/** \\brief  159C, Message Object  Control Register */
#define CAN_MO44_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001959Cu)

/** Alias (User Manual Name) for CAN_MO44_CTR.
* To use register names with standard convension, please use CAN_MO44_CTR.
*/
#define	CAN_MOCTR44	(CAN_MO44_CTR)

/** \\brief  1594, Message Object  Data Register High */
#define CAN_MO44_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019594u)

/** Alias (User Manual Name) for CAN_MO44_DATAH.
* To use register names with standard convension, please use CAN_MO44_DATAH.
*/
#define	CAN_MODATAH44	(CAN_MO44_DATAH)

/** \\brief  1590, Message Object  Data Register Low */
#define CAN_MO44_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019590u)

/** Alias (User Manual Name) for CAN_MO44_DATAL.
* To use register names with standard convension, please use CAN_MO44_DATAL.
*/
#define	CAN_MODATAL44	(CAN_MO44_DATAL)

/** \\brief  1580, Message Object  Function Control Register */
#define CAN_MO44_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019580u)

/** Alias (User Manual Name) for CAN_MO44_FCR.
* To use register names with standard convension, please use CAN_MO44_FCR.
*/
#define	CAN_MOFCR44	(CAN_MO44_FCR)

/** \\brief  1584, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO44_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019584u)

/** Alias (User Manual Name) for CAN_MO44_FGPR.
* To use register names with standard convension, please use CAN_MO44_FGPR.
*/
#define	CAN_MOFGPR44	(CAN_MO44_FGPR)

/** \\brief  1588, Message Object  Interrupt Pointer Register */
#define CAN_MO44_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019588u)

/** Alias (User Manual Name) for CAN_MO44_IPR.
* To use register names with standard convension, please use CAN_MO44_IPR.
*/
#define	CAN_MOIPR44	(CAN_MO44_IPR)

/** \\brief  159C, Message Object  Control Register */
#define CAN_MO44_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001959Cu)

/** Alias (User Manual Name) for CAN_MO44_STAT.
* To use register names with standard convension, please use CAN_MO44_STAT.
*/
#define	CAN_MOSTAT44	(CAN_MO44_STAT)

/** \\brief  15AC, Message Object  Acceptance Mask Register */
#define CAN_MO45_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00195ACu)

/** Alias (User Manual Name) for CAN_MO45_AMR.
* To use register names with standard convension, please use CAN_MO45_AMR.
*/
#define	CAN_MOAMR45	(CAN_MO45_AMR)

/** \\brief  15B8, Message Object  Arbitration Register */
#define CAN_MO45_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00195B8u)

/** Alias (User Manual Name) for CAN_MO45_AR.
* To use register names with standard convension, please use CAN_MO45_AR.
*/
#define	CAN_MOAR45	(CAN_MO45_AR)

/** \\brief  15BC, Message Object  Control Register */
#define CAN_MO45_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00195BCu)

/** Alias (User Manual Name) for CAN_MO45_CTR.
* To use register names with standard convension, please use CAN_MO45_CTR.
*/
#define	CAN_MOCTR45	(CAN_MO45_CTR)

/** \\brief  15B4, Message Object  Data Register High */
#define CAN_MO45_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00195B4u)

/** Alias (User Manual Name) for CAN_MO45_DATAH.
* To use register names with standard convension, please use CAN_MO45_DATAH.
*/
#define	CAN_MODATAH45	(CAN_MO45_DATAH)

/** \\brief  15B0, Message Object  Data Register Low */
#define CAN_MO45_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00195B0u)

/** Alias (User Manual Name) for CAN_MO45_DATAL.
* To use register names with standard convension, please use CAN_MO45_DATAL.
*/
#define	CAN_MODATAL45	(CAN_MO45_DATAL)

/** \\brief  15A0, Message Object  Function Control Register */
#define CAN_MO45_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00195A0u)

/** Alias (User Manual Name) for CAN_MO45_FCR.
* To use register names with standard convension, please use CAN_MO45_FCR.
*/
#define	CAN_MOFCR45	(CAN_MO45_FCR)

/** \\brief  15A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO45_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00195A4u)

/** Alias (User Manual Name) for CAN_MO45_FGPR.
* To use register names with standard convension, please use CAN_MO45_FGPR.
*/
#define	CAN_MOFGPR45	(CAN_MO45_FGPR)

/** \\brief  15A8, Message Object  Interrupt Pointer Register */
#define CAN_MO45_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00195A8u)

/** Alias (User Manual Name) for CAN_MO45_IPR.
* To use register names with standard convension, please use CAN_MO45_IPR.
*/
#define	CAN_MOIPR45	(CAN_MO45_IPR)

/** \\brief  15BC, Message Object  Control Register */
#define CAN_MO45_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00195BCu)

/** Alias (User Manual Name) for CAN_MO45_STAT.
* To use register names with standard convension, please use CAN_MO45_STAT.
*/
#define	CAN_MOSTAT45	(CAN_MO45_STAT)

/** \\brief  15CC, Message Object  Acceptance Mask Register */
#define CAN_MO46_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00195CCu)

/** Alias (User Manual Name) for CAN_MO46_AMR.
* To use register names with standard convension, please use CAN_MO46_AMR.
*/
#define	CAN_MOAMR46	(CAN_MO46_AMR)

/** \\brief  15D8, Message Object  Arbitration Register */
#define CAN_MO46_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00195D8u)

/** Alias (User Manual Name) for CAN_MO46_AR.
* To use register names with standard convension, please use CAN_MO46_AR.
*/
#define	CAN_MOAR46	(CAN_MO46_AR)

/** \\brief  15DC, Message Object  Control Register */
#define CAN_MO46_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00195DCu)

/** Alias (User Manual Name) for CAN_MO46_CTR.
* To use register names with standard convension, please use CAN_MO46_CTR.
*/
#define	CAN_MOCTR46	(CAN_MO46_CTR)

/** \\brief  15D4, Message Object  Data Register High */
#define CAN_MO46_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00195D4u)

/** Alias (User Manual Name) for CAN_MO46_DATAH.
* To use register names with standard convension, please use CAN_MO46_DATAH.
*/
#define	CAN_MODATAH46	(CAN_MO46_DATAH)

/** \\brief  15D0, Message Object  Data Register Low */
#define CAN_MO46_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00195D0u)

/** Alias (User Manual Name) for CAN_MO46_DATAL.
* To use register names with standard convension, please use CAN_MO46_DATAL.
*/
#define	CAN_MODATAL46	(CAN_MO46_DATAL)

/** \\brief  15C0, Message Object  Function Control Register */
#define CAN_MO46_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00195C0u)

/** Alias (User Manual Name) for CAN_MO46_FCR.
* To use register names with standard convension, please use CAN_MO46_FCR.
*/
#define	CAN_MOFCR46	(CAN_MO46_FCR)

/** \\brief  15C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO46_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00195C4u)

/** Alias (User Manual Name) for CAN_MO46_FGPR.
* To use register names with standard convension, please use CAN_MO46_FGPR.
*/
#define	CAN_MOFGPR46	(CAN_MO46_FGPR)

/** \\brief  15C8, Message Object  Interrupt Pointer Register */
#define CAN_MO46_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00195C8u)

/** Alias (User Manual Name) for CAN_MO46_IPR.
* To use register names with standard convension, please use CAN_MO46_IPR.
*/
#define	CAN_MOIPR46	(CAN_MO46_IPR)

/** \\brief  15DC, Message Object  Control Register */
#define CAN_MO46_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00195DCu)

/** Alias (User Manual Name) for CAN_MO46_STAT.
* To use register names with standard convension, please use CAN_MO46_STAT.
*/
#define	CAN_MOSTAT46	(CAN_MO46_STAT)

/** \\brief  15EC, Message Object  Acceptance Mask Register */
#define CAN_MO47_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00195ECu)

/** Alias (User Manual Name) for CAN_MO47_AMR.
* To use register names with standard convension, please use CAN_MO47_AMR.
*/
#define	CAN_MOAMR47	(CAN_MO47_AMR)

/** \\brief  15F8, Message Object  Arbitration Register */
#define CAN_MO47_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00195F8u)

/** Alias (User Manual Name) for CAN_MO47_AR.
* To use register names with standard convension, please use CAN_MO47_AR.
*/
#define	CAN_MOAR47	(CAN_MO47_AR)

/** \\brief  15FC, Message Object  Control Register */
#define CAN_MO47_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00195FCu)

/** Alias (User Manual Name) for CAN_MO47_CTR.
* To use register names with standard convension, please use CAN_MO47_CTR.
*/
#define	CAN_MOCTR47	(CAN_MO47_CTR)

/** \\brief  15F4, Message Object  Data Register High */
#define CAN_MO47_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00195F4u)

/** Alias (User Manual Name) for CAN_MO47_DATAH.
* To use register names with standard convension, please use CAN_MO47_DATAH.
*/
#define	CAN_MODATAH47	(CAN_MO47_DATAH)

/** \\brief  15F0, Message Object  Data Register Low */
#define CAN_MO47_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00195F0u)

/** Alias (User Manual Name) for CAN_MO47_DATAL.
* To use register names with standard convension, please use CAN_MO47_DATAL.
*/
#define	CAN_MODATAL47	(CAN_MO47_DATAL)

/** \\brief  15E0, Message Object  Function Control Register */
#define CAN_MO47_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00195E0u)

/** Alias (User Manual Name) for CAN_MO47_FCR.
* To use register names with standard convension, please use CAN_MO47_FCR.
*/
#define	CAN_MOFCR47	(CAN_MO47_FCR)

/** \\brief  15E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO47_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00195E4u)

/** Alias (User Manual Name) for CAN_MO47_FGPR.
* To use register names with standard convension, please use CAN_MO47_FGPR.
*/
#define	CAN_MOFGPR47	(CAN_MO47_FGPR)

/** \\brief  15E8, Message Object  Interrupt Pointer Register */
#define CAN_MO47_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00195E8u)

/** Alias (User Manual Name) for CAN_MO47_IPR.
* To use register names with standard convension, please use CAN_MO47_IPR.
*/
#define	CAN_MOIPR47	(CAN_MO47_IPR)

/** \\brief  15FC, Message Object  Control Register */
#define CAN_MO47_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00195FCu)

/** Alias (User Manual Name) for CAN_MO47_STAT.
* To use register names with standard convension, please use CAN_MO47_STAT.
*/
#define	CAN_MOSTAT47	(CAN_MO47_STAT)

/** \\brief  160C, Message Object  Acceptance Mask Register */
#define CAN_MO48_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001960Cu)

/** Alias (User Manual Name) for CAN_MO48_AMR.
* To use register names with standard convension, please use CAN_MO48_AMR.
*/
#define	CAN_MOAMR48	(CAN_MO48_AMR)

/** \\brief  1618, Message Object  Arbitration Register */
#define CAN_MO48_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019618u)

/** Alias (User Manual Name) for CAN_MO48_AR.
* To use register names with standard convension, please use CAN_MO48_AR.
*/
#define	CAN_MOAR48	(CAN_MO48_AR)

/** \\brief  161C, Message Object  Control Register */
#define CAN_MO48_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001961Cu)

/** Alias (User Manual Name) for CAN_MO48_CTR.
* To use register names with standard convension, please use CAN_MO48_CTR.
*/
#define	CAN_MOCTR48	(CAN_MO48_CTR)

/** \\brief  1614, Message Object  Data Register High */
#define CAN_MO48_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019614u)

/** Alias (User Manual Name) for CAN_MO48_DATAH.
* To use register names with standard convension, please use CAN_MO48_DATAH.
*/
#define	CAN_MODATAH48	(CAN_MO48_DATAH)

/** \\brief  1610, Message Object  Data Register Low */
#define CAN_MO48_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019610u)

/** Alias (User Manual Name) for CAN_MO48_DATAL.
* To use register names with standard convension, please use CAN_MO48_DATAL.
*/
#define	CAN_MODATAL48	(CAN_MO48_DATAL)

/** \\brief  1600, Message Object  Function Control Register */
#define CAN_MO48_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019600u)

/** Alias (User Manual Name) for CAN_MO48_FCR.
* To use register names with standard convension, please use CAN_MO48_FCR.
*/
#define	CAN_MOFCR48	(CAN_MO48_FCR)

/** \\brief  1604, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO48_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019604u)

/** Alias (User Manual Name) for CAN_MO48_FGPR.
* To use register names with standard convension, please use CAN_MO48_FGPR.
*/
#define	CAN_MOFGPR48	(CAN_MO48_FGPR)

/** \\brief  1608, Message Object  Interrupt Pointer Register */
#define CAN_MO48_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019608u)

/** Alias (User Manual Name) for CAN_MO48_IPR.
* To use register names with standard convension, please use CAN_MO48_IPR.
*/
#define	CAN_MOIPR48	(CAN_MO48_IPR)

/** \\brief  161C, Message Object  Control Register */
#define CAN_MO48_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001961Cu)

/** Alias (User Manual Name) for CAN_MO48_STAT.
* To use register names with standard convension, please use CAN_MO48_STAT.
*/
#define	CAN_MOSTAT48	(CAN_MO48_STAT)

/** \\brief  162C, Message Object  Acceptance Mask Register */
#define CAN_MO49_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001962Cu)

/** Alias (User Manual Name) for CAN_MO49_AMR.
* To use register names with standard convension, please use CAN_MO49_AMR.
*/
#define	CAN_MOAMR49	(CAN_MO49_AMR)

/** \\brief  1638, Message Object  Arbitration Register */
#define CAN_MO49_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019638u)

/** Alias (User Manual Name) for CAN_MO49_AR.
* To use register names with standard convension, please use CAN_MO49_AR.
*/
#define	CAN_MOAR49	(CAN_MO49_AR)

/** \\brief  163C, Message Object  Control Register */
#define CAN_MO49_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001963Cu)

/** Alias (User Manual Name) for CAN_MO49_CTR.
* To use register names with standard convension, please use CAN_MO49_CTR.
*/
#define	CAN_MOCTR49	(CAN_MO49_CTR)

/** \\brief  1634, Message Object  Data Register High */
#define CAN_MO49_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019634u)

/** Alias (User Manual Name) for CAN_MO49_DATAH.
* To use register names with standard convension, please use CAN_MO49_DATAH.
*/
#define	CAN_MODATAH49	(CAN_MO49_DATAH)

/** \\brief  1630, Message Object  Data Register Low */
#define CAN_MO49_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019630u)

/** Alias (User Manual Name) for CAN_MO49_DATAL.
* To use register names with standard convension, please use CAN_MO49_DATAL.
*/
#define	CAN_MODATAL49	(CAN_MO49_DATAL)

/** \\brief  1620, Message Object  Function Control Register */
#define CAN_MO49_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019620u)

/** Alias (User Manual Name) for CAN_MO49_FCR.
* To use register names with standard convension, please use CAN_MO49_FCR.
*/
#define	CAN_MOFCR49	(CAN_MO49_FCR)

/** \\brief  1624, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO49_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019624u)

/** Alias (User Manual Name) for CAN_MO49_FGPR.
* To use register names with standard convension, please use CAN_MO49_FGPR.
*/
#define	CAN_MOFGPR49	(CAN_MO49_FGPR)

/** \\brief  1628, Message Object  Interrupt Pointer Register */
#define CAN_MO49_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019628u)

/** Alias (User Manual Name) for CAN_MO49_IPR.
* To use register names with standard convension, please use CAN_MO49_IPR.
*/
#define	CAN_MOIPR49	(CAN_MO49_IPR)

/** \\brief  163C, Message Object  Control Register */
#define CAN_MO49_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001963Cu)

/** Alias (User Manual Name) for CAN_MO49_STAT.
* To use register names with standard convension, please use CAN_MO49_STAT.
*/
#define	CAN_MOSTAT49	(CAN_MO49_STAT)

/** \\brief  108C, Message Object  Acceptance Mask Register */
#define CAN_MO4_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001908Cu)

/** Alias (User Manual Name) for CAN_MO4_AMR.
* To use register names with standard convension, please use CAN_MO4_AMR.
*/
#define	CAN_MOAMR4	(CAN_MO4_AMR)

/** \\brief  1098, Message Object  Arbitration Register */
#define CAN_MO4_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019098u)

/** Alias (User Manual Name) for CAN_MO4_AR.
* To use register names with standard convension, please use CAN_MO4_AR.
*/
#define	CAN_MOAR4	(CAN_MO4_AR)

/** \\brief  109C, Message Object  Control Register */
#define CAN_MO4_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001909Cu)

/** Alias (User Manual Name) for CAN_MO4_CTR.
* To use register names with standard convension, please use CAN_MO4_CTR.
*/
#define	CAN_MOCTR4	(CAN_MO4_CTR)

/** \\brief  1094, Message Object  Data Register High */
#define CAN_MO4_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019094u)

/** Alias (User Manual Name) for CAN_MO4_DATAH.
* To use register names with standard convension, please use CAN_MO4_DATAH.
*/
#define	CAN_MODATAH4	(CAN_MO4_DATAH)

/** \\brief  1090, Message Object  Data Register Low */
#define CAN_MO4_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019090u)

/** Alias (User Manual Name) for CAN_MO4_DATAL.
* To use register names with standard convension, please use CAN_MO4_DATAL.
*/
#define	CAN_MODATAL4	(CAN_MO4_DATAL)

/** \\brief  1080, Message Object  Function Control Register */
#define CAN_MO4_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019080u)

/** Alias (User Manual Name) for CAN_MO4_FCR.
* To use register names with standard convension, please use CAN_MO4_FCR.
*/
#define	CAN_MOFCR4	(CAN_MO4_FCR)

/** \\brief  1084, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO4_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019084u)

/** Alias (User Manual Name) for CAN_MO4_FGPR.
* To use register names with standard convension, please use CAN_MO4_FGPR.
*/
#define	CAN_MOFGPR4	(CAN_MO4_FGPR)

/** \\brief  1088, Message Object  Interrupt Pointer Register */
#define CAN_MO4_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019088u)

/** Alias (User Manual Name) for CAN_MO4_IPR.
* To use register names with standard convension, please use CAN_MO4_IPR.
*/
#define	CAN_MOIPR4	(CAN_MO4_IPR)

/** \\brief  109C, Message Object  Control Register */
#define CAN_MO4_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001909Cu)

/** Alias (User Manual Name) for CAN_MO4_STAT.
* To use register names with standard convension, please use CAN_MO4_STAT.
*/
#define	CAN_MOSTAT4	(CAN_MO4_STAT)

/** \\brief  164C, Message Object  Acceptance Mask Register */
#define CAN_MO50_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001964Cu)

/** Alias (User Manual Name) for CAN_MO50_AMR.
* To use register names with standard convension, please use CAN_MO50_AMR.
*/
#define	CAN_MOAMR50	(CAN_MO50_AMR)

/** \\brief  1658, Message Object  Arbitration Register */
#define CAN_MO50_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019658u)

/** Alias (User Manual Name) for CAN_MO50_AR.
* To use register names with standard convension, please use CAN_MO50_AR.
*/
#define	CAN_MOAR50	(CAN_MO50_AR)

/** \\brief  165C, Message Object  Control Register */
#define CAN_MO50_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001965Cu)

/** Alias (User Manual Name) for CAN_MO50_CTR.
* To use register names with standard convension, please use CAN_MO50_CTR.
*/
#define	CAN_MOCTR50	(CAN_MO50_CTR)

/** \\brief  1654, Message Object  Data Register High */
#define CAN_MO50_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019654u)

/** Alias (User Manual Name) for CAN_MO50_DATAH.
* To use register names with standard convension, please use CAN_MO50_DATAH.
*/
#define	CAN_MODATAH50	(CAN_MO50_DATAH)

/** \\brief  1650, Message Object  Data Register Low */
#define CAN_MO50_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019650u)

/** Alias (User Manual Name) for CAN_MO50_DATAL.
* To use register names with standard convension, please use CAN_MO50_DATAL.
*/
#define	CAN_MODATAL50	(CAN_MO50_DATAL)

/** \\brief  1640, Message Object  Function Control Register */
#define CAN_MO50_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019640u)

/** Alias (User Manual Name) for CAN_MO50_FCR.
* To use register names with standard convension, please use CAN_MO50_FCR.
*/
#define	CAN_MOFCR50	(CAN_MO50_FCR)

/** \\brief  1644, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO50_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019644u)

/** Alias (User Manual Name) for CAN_MO50_FGPR.
* To use register names with standard convension, please use CAN_MO50_FGPR.
*/
#define	CAN_MOFGPR50	(CAN_MO50_FGPR)

/** \\brief  1648, Message Object  Interrupt Pointer Register */
#define CAN_MO50_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019648u)

/** Alias (User Manual Name) for CAN_MO50_IPR.
* To use register names with standard convension, please use CAN_MO50_IPR.
*/
#define	CAN_MOIPR50	(CAN_MO50_IPR)

/** \\brief  165C, Message Object  Control Register */
#define CAN_MO50_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001965Cu)

/** Alias (User Manual Name) for CAN_MO50_STAT.
* To use register names with standard convension, please use CAN_MO50_STAT.
*/
#define	CAN_MOSTAT50	(CAN_MO50_STAT)

/** \\brief  166C, Message Object  Acceptance Mask Register */
#define CAN_MO51_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001966Cu)

/** Alias (User Manual Name) for CAN_MO51_AMR.
* To use register names with standard convension, please use CAN_MO51_AMR.
*/
#define	CAN_MOAMR51	(CAN_MO51_AMR)

/** \\brief  1678, Message Object  Arbitration Register */
#define CAN_MO51_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019678u)

/** Alias (User Manual Name) for CAN_MO51_AR.
* To use register names with standard convension, please use CAN_MO51_AR.
*/
#define	CAN_MOAR51	(CAN_MO51_AR)

/** \\brief  167C, Message Object  Control Register */
#define CAN_MO51_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001967Cu)

/** Alias (User Manual Name) for CAN_MO51_CTR.
* To use register names with standard convension, please use CAN_MO51_CTR.
*/
#define	CAN_MOCTR51	(CAN_MO51_CTR)

/** \\brief  1674, Message Object  Data Register High */
#define CAN_MO51_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019674u)

/** Alias (User Manual Name) for CAN_MO51_DATAH.
* To use register names with standard convension, please use CAN_MO51_DATAH.
*/
#define	CAN_MODATAH51	(CAN_MO51_DATAH)

/** \\brief  1670, Message Object  Data Register Low */
#define CAN_MO51_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019670u)

/** Alias (User Manual Name) for CAN_MO51_DATAL.
* To use register names with standard convension, please use CAN_MO51_DATAL.
*/
#define	CAN_MODATAL51	(CAN_MO51_DATAL)

/** \\brief  1660, Message Object  Function Control Register */
#define CAN_MO51_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019660u)

/** Alias (User Manual Name) for CAN_MO51_FCR.
* To use register names with standard convension, please use CAN_MO51_FCR.
*/
#define	CAN_MOFCR51	(CAN_MO51_FCR)

/** \\brief  1664, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO51_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019664u)

/** Alias (User Manual Name) for CAN_MO51_FGPR.
* To use register names with standard convension, please use CAN_MO51_FGPR.
*/
#define	CAN_MOFGPR51	(CAN_MO51_FGPR)

/** \\brief  1668, Message Object  Interrupt Pointer Register */
#define CAN_MO51_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019668u)

/** Alias (User Manual Name) for CAN_MO51_IPR.
* To use register names with standard convension, please use CAN_MO51_IPR.
*/
#define	CAN_MOIPR51	(CAN_MO51_IPR)

/** \\brief  167C, Message Object  Control Register */
#define CAN_MO51_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001967Cu)

/** Alias (User Manual Name) for CAN_MO51_STAT.
* To use register names with standard convension, please use CAN_MO51_STAT.
*/
#define	CAN_MOSTAT51	(CAN_MO51_STAT)

/** \\brief  168C, Message Object  Acceptance Mask Register */
#define CAN_MO52_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001968Cu)

/** Alias (User Manual Name) for CAN_MO52_AMR.
* To use register names with standard convension, please use CAN_MO52_AMR.
*/
#define	CAN_MOAMR52	(CAN_MO52_AMR)

/** \\brief  1698, Message Object  Arbitration Register */
#define CAN_MO52_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019698u)

/** Alias (User Manual Name) for CAN_MO52_AR.
* To use register names with standard convension, please use CAN_MO52_AR.
*/
#define	CAN_MOAR52	(CAN_MO52_AR)

/** \\brief  169C, Message Object  Control Register */
#define CAN_MO52_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001969Cu)

/** Alias (User Manual Name) for CAN_MO52_CTR.
* To use register names with standard convension, please use CAN_MO52_CTR.
*/
#define	CAN_MOCTR52	(CAN_MO52_CTR)

/** \\brief  1694, Message Object  Data Register High */
#define CAN_MO52_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019694u)

/** Alias (User Manual Name) for CAN_MO52_DATAH.
* To use register names with standard convension, please use CAN_MO52_DATAH.
*/
#define	CAN_MODATAH52	(CAN_MO52_DATAH)

/** \\brief  1690, Message Object  Data Register Low */
#define CAN_MO52_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019690u)

/** Alias (User Manual Name) for CAN_MO52_DATAL.
* To use register names with standard convension, please use CAN_MO52_DATAL.
*/
#define	CAN_MODATAL52	(CAN_MO52_DATAL)

/** \\brief  1680, Message Object  Function Control Register */
#define CAN_MO52_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019680u)

/** Alias (User Manual Name) for CAN_MO52_FCR.
* To use register names with standard convension, please use CAN_MO52_FCR.
*/
#define	CAN_MOFCR52	(CAN_MO52_FCR)

/** \\brief  1684, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO52_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019684u)

/** Alias (User Manual Name) for CAN_MO52_FGPR.
* To use register names with standard convension, please use CAN_MO52_FGPR.
*/
#define	CAN_MOFGPR52	(CAN_MO52_FGPR)

/** \\brief  1688, Message Object  Interrupt Pointer Register */
#define CAN_MO52_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019688u)

/** Alias (User Manual Name) for CAN_MO52_IPR.
* To use register names with standard convension, please use CAN_MO52_IPR.
*/
#define	CAN_MOIPR52	(CAN_MO52_IPR)

/** \\brief  169C, Message Object  Control Register */
#define CAN_MO52_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001969Cu)

/** Alias (User Manual Name) for CAN_MO52_STAT.
* To use register names with standard convension, please use CAN_MO52_STAT.
*/
#define	CAN_MOSTAT52	(CAN_MO52_STAT)

/** \\brief  16AC, Message Object  Acceptance Mask Register */
#define CAN_MO53_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00196ACu)

/** Alias (User Manual Name) for CAN_MO53_AMR.
* To use register names with standard convension, please use CAN_MO53_AMR.
*/
#define	CAN_MOAMR53	(CAN_MO53_AMR)

/** \\brief  16B8, Message Object  Arbitration Register */
#define CAN_MO53_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00196B8u)

/** Alias (User Manual Name) for CAN_MO53_AR.
* To use register names with standard convension, please use CAN_MO53_AR.
*/
#define	CAN_MOAR53	(CAN_MO53_AR)

/** \\brief  16BC, Message Object  Control Register */
#define CAN_MO53_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00196BCu)

/** Alias (User Manual Name) for CAN_MO53_CTR.
* To use register names with standard convension, please use CAN_MO53_CTR.
*/
#define	CAN_MOCTR53	(CAN_MO53_CTR)

/** \\brief  16B4, Message Object  Data Register High */
#define CAN_MO53_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00196B4u)

/** Alias (User Manual Name) for CAN_MO53_DATAH.
* To use register names with standard convension, please use CAN_MO53_DATAH.
*/
#define	CAN_MODATAH53	(CAN_MO53_DATAH)

/** \\brief  16B0, Message Object  Data Register Low */
#define CAN_MO53_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00196B0u)

/** Alias (User Manual Name) for CAN_MO53_DATAL.
* To use register names with standard convension, please use CAN_MO53_DATAL.
*/
#define	CAN_MODATAL53	(CAN_MO53_DATAL)

/** \\brief  16A0, Message Object  Function Control Register */
#define CAN_MO53_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00196A0u)

/** Alias (User Manual Name) for CAN_MO53_FCR.
* To use register names with standard convension, please use CAN_MO53_FCR.
*/
#define	CAN_MOFCR53	(CAN_MO53_FCR)

/** \\brief  16A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO53_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00196A4u)

/** Alias (User Manual Name) for CAN_MO53_FGPR.
* To use register names with standard convension, please use CAN_MO53_FGPR.
*/
#define	CAN_MOFGPR53	(CAN_MO53_FGPR)

/** \\brief  16A8, Message Object  Interrupt Pointer Register */
#define CAN_MO53_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00196A8u)

/** Alias (User Manual Name) for CAN_MO53_IPR.
* To use register names with standard convension, please use CAN_MO53_IPR.
*/
#define	CAN_MOIPR53	(CAN_MO53_IPR)

/** \\brief  16BC, Message Object  Control Register */
#define CAN_MO53_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00196BCu)

/** Alias (User Manual Name) for CAN_MO53_STAT.
* To use register names with standard convension, please use CAN_MO53_STAT.
*/
#define	CAN_MOSTAT53	(CAN_MO53_STAT)

/** \\brief  16CC, Message Object  Acceptance Mask Register */
#define CAN_MO54_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00196CCu)

/** Alias (User Manual Name) for CAN_MO54_AMR.
* To use register names with standard convension, please use CAN_MO54_AMR.
*/
#define	CAN_MOAMR54	(CAN_MO54_AMR)

/** \\brief  16D8, Message Object  Arbitration Register */
#define CAN_MO54_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00196D8u)

/** Alias (User Manual Name) for CAN_MO54_AR.
* To use register names with standard convension, please use CAN_MO54_AR.
*/
#define	CAN_MOAR54	(CAN_MO54_AR)

/** \\brief  16DC, Message Object  Control Register */
#define CAN_MO54_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00196DCu)

/** Alias (User Manual Name) for CAN_MO54_CTR.
* To use register names with standard convension, please use CAN_MO54_CTR.
*/
#define	CAN_MOCTR54	(CAN_MO54_CTR)

/** \\brief  16D4, Message Object  Data Register High */
#define CAN_MO54_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00196D4u)

/** Alias (User Manual Name) for CAN_MO54_DATAH.
* To use register names with standard convension, please use CAN_MO54_DATAH.
*/
#define	CAN_MODATAH54	(CAN_MO54_DATAH)

/** \\brief  16D0, Message Object  Data Register Low */
#define CAN_MO54_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00196D0u)

/** Alias (User Manual Name) for CAN_MO54_DATAL.
* To use register names with standard convension, please use CAN_MO54_DATAL.
*/
#define	CAN_MODATAL54	(CAN_MO54_DATAL)

/** \\brief  16C0, Message Object  Function Control Register */
#define CAN_MO54_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00196C0u)

/** Alias (User Manual Name) for CAN_MO54_FCR.
* To use register names with standard convension, please use CAN_MO54_FCR.
*/
#define	CAN_MOFCR54	(CAN_MO54_FCR)

/** \\brief  16C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO54_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00196C4u)

/** Alias (User Manual Name) for CAN_MO54_FGPR.
* To use register names with standard convension, please use CAN_MO54_FGPR.
*/
#define	CAN_MOFGPR54	(CAN_MO54_FGPR)

/** \\brief  16C8, Message Object  Interrupt Pointer Register */
#define CAN_MO54_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00196C8u)

/** Alias (User Manual Name) for CAN_MO54_IPR.
* To use register names with standard convension, please use CAN_MO54_IPR.
*/
#define	CAN_MOIPR54	(CAN_MO54_IPR)

/** \\brief  16DC, Message Object  Control Register */
#define CAN_MO54_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00196DCu)

/** Alias (User Manual Name) for CAN_MO54_STAT.
* To use register names with standard convension, please use CAN_MO54_STAT.
*/
#define	CAN_MOSTAT54	(CAN_MO54_STAT)

/** \\brief  16EC, Message Object  Acceptance Mask Register */
#define CAN_MO55_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00196ECu)

/** Alias (User Manual Name) for CAN_MO55_AMR.
* To use register names with standard convension, please use CAN_MO55_AMR.
*/
#define	CAN_MOAMR55	(CAN_MO55_AMR)

/** \\brief  16F8, Message Object  Arbitration Register */
#define CAN_MO55_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00196F8u)

/** Alias (User Manual Name) for CAN_MO55_AR.
* To use register names with standard convension, please use CAN_MO55_AR.
*/
#define	CAN_MOAR55	(CAN_MO55_AR)

/** \\brief  16FC, Message Object  Control Register */
#define CAN_MO55_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00196FCu)

/** Alias (User Manual Name) for CAN_MO55_CTR.
* To use register names with standard convension, please use CAN_MO55_CTR.
*/
#define	CAN_MOCTR55	(CAN_MO55_CTR)

/** \\brief  16F4, Message Object  Data Register High */
#define CAN_MO55_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00196F4u)

/** Alias (User Manual Name) for CAN_MO55_DATAH.
* To use register names with standard convension, please use CAN_MO55_DATAH.
*/
#define	CAN_MODATAH55	(CAN_MO55_DATAH)

/** \\brief  16F0, Message Object  Data Register Low */
#define CAN_MO55_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00196F0u)

/** Alias (User Manual Name) for CAN_MO55_DATAL.
* To use register names with standard convension, please use CAN_MO55_DATAL.
*/
#define	CAN_MODATAL55	(CAN_MO55_DATAL)

/** \\brief  16E0, Message Object  Function Control Register */
#define CAN_MO55_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00196E0u)

/** Alias (User Manual Name) for CAN_MO55_FCR.
* To use register names with standard convension, please use CAN_MO55_FCR.
*/
#define	CAN_MOFCR55	(CAN_MO55_FCR)

/** \\brief  16E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO55_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00196E4u)

/** Alias (User Manual Name) for CAN_MO55_FGPR.
* To use register names with standard convension, please use CAN_MO55_FGPR.
*/
#define	CAN_MOFGPR55	(CAN_MO55_FGPR)

/** \\brief  16E8, Message Object  Interrupt Pointer Register */
#define CAN_MO55_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00196E8u)

/** Alias (User Manual Name) for CAN_MO55_IPR.
* To use register names with standard convension, please use CAN_MO55_IPR.
*/
#define	CAN_MOIPR55	(CAN_MO55_IPR)

/** \\brief  16FC, Message Object  Control Register */
#define CAN_MO55_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00196FCu)

/** Alias (User Manual Name) for CAN_MO55_STAT.
* To use register names with standard convension, please use CAN_MO55_STAT.
*/
#define	CAN_MOSTAT55	(CAN_MO55_STAT)

/** \\brief  170C, Message Object  Acceptance Mask Register */
#define CAN_MO56_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001970Cu)

/** Alias (User Manual Name) for CAN_MO56_AMR.
* To use register names with standard convension, please use CAN_MO56_AMR.
*/
#define	CAN_MOAMR56	(CAN_MO56_AMR)

/** \\brief  1718, Message Object  Arbitration Register */
#define CAN_MO56_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019718u)

/** Alias (User Manual Name) for CAN_MO56_AR.
* To use register names with standard convension, please use CAN_MO56_AR.
*/
#define	CAN_MOAR56	(CAN_MO56_AR)

/** \\brief  171C, Message Object  Control Register */
#define CAN_MO56_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001971Cu)

/** Alias (User Manual Name) for CAN_MO56_CTR.
* To use register names with standard convension, please use CAN_MO56_CTR.
*/
#define	CAN_MOCTR56	(CAN_MO56_CTR)

/** \\brief  1714, Message Object  Data Register High */
#define CAN_MO56_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019714u)

/** Alias (User Manual Name) for CAN_MO56_DATAH.
* To use register names with standard convension, please use CAN_MO56_DATAH.
*/
#define	CAN_MODATAH56	(CAN_MO56_DATAH)

/** \\brief  1710, Message Object  Data Register Low */
#define CAN_MO56_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019710u)

/** Alias (User Manual Name) for CAN_MO56_DATAL.
* To use register names with standard convension, please use CAN_MO56_DATAL.
*/
#define	CAN_MODATAL56	(CAN_MO56_DATAL)

/** \\brief  1700, Message Object  Function Control Register */
#define CAN_MO56_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019700u)

/** Alias (User Manual Name) for CAN_MO56_FCR.
* To use register names with standard convension, please use CAN_MO56_FCR.
*/
#define	CAN_MOFCR56	(CAN_MO56_FCR)

/** \\brief  1704, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO56_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019704u)

/** Alias (User Manual Name) for CAN_MO56_FGPR.
* To use register names with standard convension, please use CAN_MO56_FGPR.
*/
#define	CAN_MOFGPR56	(CAN_MO56_FGPR)

/** \\brief  1708, Message Object  Interrupt Pointer Register */
#define CAN_MO56_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019708u)

/** Alias (User Manual Name) for CAN_MO56_IPR.
* To use register names with standard convension, please use CAN_MO56_IPR.
*/
#define	CAN_MOIPR56	(CAN_MO56_IPR)

/** \\brief  171C, Message Object  Control Register */
#define CAN_MO56_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001971Cu)

/** Alias (User Manual Name) for CAN_MO56_STAT.
* To use register names with standard convension, please use CAN_MO56_STAT.
*/
#define	CAN_MOSTAT56	(CAN_MO56_STAT)

/** \\brief  172C, Message Object  Acceptance Mask Register */
#define CAN_MO57_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001972Cu)

/** Alias (User Manual Name) for CAN_MO57_AMR.
* To use register names with standard convension, please use CAN_MO57_AMR.
*/
#define	CAN_MOAMR57	(CAN_MO57_AMR)

/** \\brief  1738, Message Object  Arbitration Register */
#define CAN_MO57_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019738u)

/** Alias (User Manual Name) for CAN_MO57_AR.
* To use register names with standard convension, please use CAN_MO57_AR.
*/
#define	CAN_MOAR57	(CAN_MO57_AR)

/** \\brief  173C, Message Object  Control Register */
#define CAN_MO57_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001973Cu)

/** Alias (User Manual Name) for CAN_MO57_CTR.
* To use register names with standard convension, please use CAN_MO57_CTR.
*/
#define	CAN_MOCTR57	(CAN_MO57_CTR)

/** \\brief  1734, Message Object  Data Register High */
#define CAN_MO57_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019734u)

/** Alias (User Manual Name) for CAN_MO57_DATAH.
* To use register names with standard convension, please use CAN_MO57_DATAH.
*/
#define	CAN_MODATAH57	(CAN_MO57_DATAH)

/** \\brief  1730, Message Object  Data Register Low */
#define CAN_MO57_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019730u)

/** Alias (User Manual Name) for CAN_MO57_DATAL.
* To use register names with standard convension, please use CAN_MO57_DATAL.
*/
#define	CAN_MODATAL57	(CAN_MO57_DATAL)

/** \\brief  1720, Message Object  Function Control Register */
#define CAN_MO57_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019720u)

/** Alias (User Manual Name) for CAN_MO57_FCR.
* To use register names with standard convension, please use CAN_MO57_FCR.
*/
#define	CAN_MOFCR57	(CAN_MO57_FCR)

/** \\brief  1724, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO57_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019724u)

/** Alias (User Manual Name) for CAN_MO57_FGPR.
* To use register names with standard convension, please use CAN_MO57_FGPR.
*/
#define	CAN_MOFGPR57	(CAN_MO57_FGPR)

/** \\brief  1728, Message Object  Interrupt Pointer Register */
#define CAN_MO57_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019728u)

/** Alias (User Manual Name) for CAN_MO57_IPR.
* To use register names with standard convension, please use CAN_MO57_IPR.
*/
#define	CAN_MOIPR57	(CAN_MO57_IPR)

/** \\brief  173C, Message Object  Control Register */
#define CAN_MO57_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001973Cu)

/** Alias (User Manual Name) for CAN_MO57_STAT.
* To use register names with standard convension, please use CAN_MO57_STAT.
*/
#define	CAN_MOSTAT57	(CAN_MO57_STAT)

/** \\brief  174C, Message Object  Acceptance Mask Register */
#define CAN_MO58_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001974Cu)

/** Alias (User Manual Name) for CAN_MO58_AMR.
* To use register names with standard convension, please use CAN_MO58_AMR.
*/
#define	CAN_MOAMR58	(CAN_MO58_AMR)

/** \\brief  1758, Message Object  Arbitration Register */
#define CAN_MO58_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019758u)

/** Alias (User Manual Name) for CAN_MO58_AR.
* To use register names with standard convension, please use CAN_MO58_AR.
*/
#define	CAN_MOAR58	(CAN_MO58_AR)

/** \\brief  175C, Message Object  Control Register */
#define CAN_MO58_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001975Cu)

/** Alias (User Manual Name) for CAN_MO58_CTR.
* To use register names with standard convension, please use CAN_MO58_CTR.
*/
#define	CAN_MOCTR58	(CAN_MO58_CTR)

/** \\brief  1754, Message Object  Data Register High */
#define CAN_MO58_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019754u)

/** Alias (User Manual Name) for CAN_MO58_DATAH.
* To use register names with standard convension, please use CAN_MO58_DATAH.
*/
#define	CAN_MODATAH58	(CAN_MO58_DATAH)

/** \\brief  1750, Message Object  Data Register Low */
#define CAN_MO58_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019750u)

/** Alias (User Manual Name) for CAN_MO58_DATAL.
* To use register names with standard convension, please use CAN_MO58_DATAL.
*/
#define	CAN_MODATAL58	(CAN_MO58_DATAL)

/** \\brief  1740, Message Object  Function Control Register */
#define CAN_MO58_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019740u)

/** Alias (User Manual Name) for CAN_MO58_FCR.
* To use register names with standard convension, please use CAN_MO58_FCR.
*/
#define	CAN_MOFCR58	(CAN_MO58_FCR)

/** \\brief  1744, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO58_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019744u)

/** Alias (User Manual Name) for CAN_MO58_FGPR.
* To use register names with standard convension, please use CAN_MO58_FGPR.
*/
#define	CAN_MOFGPR58	(CAN_MO58_FGPR)

/** \\brief  1748, Message Object  Interrupt Pointer Register */
#define CAN_MO58_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019748u)

/** Alias (User Manual Name) for CAN_MO58_IPR.
* To use register names with standard convension, please use CAN_MO58_IPR.
*/
#define	CAN_MOIPR58	(CAN_MO58_IPR)

/** \\brief  175C, Message Object  Control Register */
#define CAN_MO58_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001975Cu)

/** Alias (User Manual Name) for CAN_MO58_STAT.
* To use register names with standard convension, please use CAN_MO58_STAT.
*/
#define	CAN_MOSTAT58	(CAN_MO58_STAT)

/** \\brief  176C, Message Object  Acceptance Mask Register */
#define CAN_MO59_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001976Cu)

/** Alias (User Manual Name) for CAN_MO59_AMR.
* To use register names with standard convension, please use CAN_MO59_AMR.
*/
#define	CAN_MOAMR59	(CAN_MO59_AMR)

/** \\brief  1778, Message Object  Arbitration Register */
#define CAN_MO59_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019778u)

/** Alias (User Manual Name) for CAN_MO59_AR.
* To use register names with standard convension, please use CAN_MO59_AR.
*/
#define	CAN_MOAR59	(CAN_MO59_AR)

/** \\brief  177C, Message Object  Control Register */
#define CAN_MO59_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001977Cu)

/** Alias (User Manual Name) for CAN_MO59_CTR.
* To use register names with standard convension, please use CAN_MO59_CTR.
*/
#define	CAN_MOCTR59	(CAN_MO59_CTR)

/** \\brief  1774, Message Object  Data Register High */
#define CAN_MO59_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019774u)

/** Alias (User Manual Name) for CAN_MO59_DATAH.
* To use register names with standard convension, please use CAN_MO59_DATAH.
*/
#define	CAN_MODATAH59	(CAN_MO59_DATAH)

/** \\brief  1770, Message Object  Data Register Low */
#define CAN_MO59_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019770u)

/** Alias (User Manual Name) for CAN_MO59_DATAL.
* To use register names with standard convension, please use CAN_MO59_DATAL.
*/
#define	CAN_MODATAL59	(CAN_MO59_DATAL)

/** \\brief  1760, Message Object  Function Control Register */
#define CAN_MO59_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019760u)

/** Alias (User Manual Name) for CAN_MO59_FCR.
* To use register names with standard convension, please use CAN_MO59_FCR.
*/
#define	CAN_MOFCR59	(CAN_MO59_FCR)

/** \\brief  1764, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO59_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019764u)

/** Alias (User Manual Name) for CAN_MO59_FGPR.
* To use register names with standard convension, please use CAN_MO59_FGPR.
*/
#define	CAN_MOFGPR59	(CAN_MO59_FGPR)

/** \\brief  1768, Message Object  Interrupt Pointer Register */
#define CAN_MO59_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019768u)

/** Alias (User Manual Name) for CAN_MO59_IPR.
* To use register names with standard convension, please use CAN_MO59_IPR.
*/
#define	CAN_MOIPR59	(CAN_MO59_IPR)

/** \\brief  177C, Message Object  Control Register */
#define CAN_MO59_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001977Cu)

/** Alias (User Manual Name) for CAN_MO59_STAT.
* To use register names with standard convension, please use CAN_MO59_STAT.
*/
#define	CAN_MOSTAT59	(CAN_MO59_STAT)

/** \\brief  10AC, Message Object  Acceptance Mask Register */
#define CAN_MO5_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00190ACu)

/** Alias (User Manual Name) for CAN_MO5_AMR.
* To use register names with standard convension, please use CAN_MO5_AMR.
*/
#define	CAN_MOAMR5	(CAN_MO5_AMR)

/** \\brief  10B8, Message Object  Arbitration Register */
#define CAN_MO5_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00190B8u)

/** Alias (User Manual Name) for CAN_MO5_AR.
* To use register names with standard convension, please use CAN_MO5_AR.
*/
#define	CAN_MOAR5	(CAN_MO5_AR)

/** \\brief  10BC, Message Object  Control Register */
#define CAN_MO5_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00190BCu)

/** Alias (User Manual Name) for CAN_MO5_CTR.
* To use register names with standard convension, please use CAN_MO5_CTR.
*/
#define	CAN_MOCTR5	(CAN_MO5_CTR)

/** \\brief  10B4, Message Object  Data Register High */
#define CAN_MO5_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00190B4u)

/** Alias (User Manual Name) for CAN_MO5_DATAH.
* To use register names with standard convension, please use CAN_MO5_DATAH.
*/
#define	CAN_MODATAH5	(CAN_MO5_DATAH)

/** \\brief  10B0, Message Object  Data Register Low */
#define CAN_MO5_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00190B0u)

/** Alias (User Manual Name) for CAN_MO5_DATAL.
* To use register names with standard convension, please use CAN_MO5_DATAL.
*/
#define	CAN_MODATAL5	(CAN_MO5_DATAL)

/** \\brief  10A0, Message Object  Function Control Register */
#define CAN_MO5_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00190A0u)

/** Alias (User Manual Name) for CAN_MO5_FCR.
* To use register names with standard convension, please use CAN_MO5_FCR.
*/
#define	CAN_MOFCR5	(CAN_MO5_FCR)

/** \\brief  10A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO5_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00190A4u)

/** Alias (User Manual Name) for CAN_MO5_FGPR.
* To use register names with standard convension, please use CAN_MO5_FGPR.
*/
#define	CAN_MOFGPR5	(CAN_MO5_FGPR)

/** \\brief  10A8, Message Object  Interrupt Pointer Register */
#define CAN_MO5_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00190A8u)

/** Alias (User Manual Name) for CAN_MO5_IPR.
* To use register names with standard convension, please use CAN_MO5_IPR.
*/
#define	CAN_MOIPR5	(CAN_MO5_IPR)

/** \\brief  10BC, Message Object  Control Register */
#define CAN_MO5_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00190BCu)

/** Alias (User Manual Name) for CAN_MO5_STAT.
* To use register names with standard convension, please use CAN_MO5_STAT.
*/
#define	CAN_MOSTAT5	(CAN_MO5_STAT)

/** \\brief  178C, Message Object  Acceptance Mask Register */
#define CAN_MO60_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001978Cu)

/** Alias (User Manual Name) for CAN_MO60_AMR.
* To use register names with standard convension, please use CAN_MO60_AMR.
*/
#define	CAN_MOAMR60	(CAN_MO60_AMR)

/** \\brief  1798, Message Object  Arbitration Register */
#define CAN_MO60_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019798u)

/** Alias (User Manual Name) for CAN_MO60_AR.
* To use register names with standard convension, please use CAN_MO60_AR.
*/
#define	CAN_MOAR60	(CAN_MO60_AR)

/** \\brief  179C, Message Object  Control Register */
#define CAN_MO60_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001979Cu)

/** Alias (User Manual Name) for CAN_MO60_CTR.
* To use register names with standard convension, please use CAN_MO60_CTR.
*/
#define	CAN_MOCTR60	(CAN_MO60_CTR)

/** \\brief  1794, Message Object  Data Register High */
#define CAN_MO60_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019794u)

/** Alias (User Manual Name) for CAN_MO60_DATAH.
* To use register names with standard convension, please use CAN_MO60_DATAH.
*/
#define	CAN_MODATAH60	(CAN_MO60_DATAH)

/** \\brief  1790, Message Object  Data Register Low */
#define CAN_MO60_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019790u)

/** Alias (User Manual Name) for CAN_MO60_DATAL.
* To use register names with standard convension, please use CAN_MO60_DATAL.
*/
#define	CAN_MODATAL60	(CAN_MO60_DATAL)

/** \\brief  1780, Message Object  Function Control Register */
#define CAN_MO60_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019780u)

/** Alias (User Manual Name) for CAN_MO60_FCR.
* To use register names with standard convension, please use CAN_MO60_FCR.
*/
#define	CAN_MOFCR60	(CAN_MO60_FCR)

/** \\brief  1784, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO60_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019784u)

/** Alias (User Manual Name) for CAN_MO60_FGPR.
* To use register names with standard convension, please use CAN_MO60_FGPR.
*/
#define	CAN_MOFGPR60	(CAN_MO60_FGPR)

/** \\brief  1788, Message Object  Interrupt Pointer Register */
#define CAN_MO60_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019788u)

/** Alias (User Manual Name) for CAN_MO60_IPR.
* To use register names with standard convension, please use CAN_MO60_IPR.
*/
#define	CAN_MOIPR60	(CAN_MO60_IPR)

/** \\brief  179C, Message Object  Control Register */
#define CAN_MO60_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001979Cu)

/** Alias (User Manual Name) for CAN_MO60_STAT.
* To use register names with standard convension, please use CAN_MO60_STAT.
*/
#define	CAN_MOSTAT60	(CAN_MO60_STAT)

/** \\brief  17AC, Message Object  Acceptance Mask Register */
#define CAN_MO61_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00197ACu)

/** Alias (User Manual Name) for CAN_MO61_AMR.
* To use register names with standard convension, please use CAN_MO61_AMR.
*/
#define	CAN_MOAMR61	(CAN_MO61_AMR)

/** \\brief  17B8, Message Object  Arbitration Register */
#define CAN_MO61_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00197B8u)

/** Alias (User Manual Name) for CAN_MO61_AR.
* To use register names with standard convension, please use CAN_MO61_AR.
*/
#define	CAN_MOAR61	(CAN_MO61_AR)

/** \\brief  17BC, Message Object  Control Register */
#define CAN_MO61_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00197BCu)

/** Alias (User Manual Name) for CAN_MO61_CTR.
* To use register names with standard convension, please use CAN_MO61_CTR.
*/
#define	CAN_MOCTR61	(CAN_MO61_CTR)

/** \\brief  17B4, Message Object  Data Register High */
#define CAN_MO61_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00197B4u)

/** Alias (User Manual Name) for CAN_MO61_DATAH.
* To use register names with standard convension, please use CAN_MO61_DATAH.
*/
#define	CAN_MODATAH61	(CAN_MO61_DATAH)

/** \\brief  17B0, Message Object  Data Register Low */
#define CAN_MO61_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00197B0u)

/** Alias (User Manual Name) for CAN_MO61_DATAL.
* To use register names with standard convension, please use CAN_MO61_DATAL.
*/
#define	CAN_MODATAL61	(CAN_MO61_DATAL)

/** \\brief  17A0, Message Object  Function Control Register */
#define CAN_MO61_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00197A0u)

/** Alias (User Manual Name) for CAN_MO61_FCR.
* To use register names with standard convension, please use CAN_MO61_FCR.
*/
#define	CAN_MOFCR61	(CAN_MO61_FCR)

/** \\brief  17A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO61_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00197A4u)

/** Alias (User Manual Name) for CAN_MO61_FGPR.
* To use register names with standard convension, please use CAN_MO61_FGPR.
*/
#define	CAN_MOFGPR61	(CAN_MO61_FGPR)

/** \\brief  17A8, Message Object  Interrupt Pointer Register */
#define CAN_MO61_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00197A8u)

/** Alias (User Manual Name) for CAN_MO61_IPR.
* To use register names with standard convension, please use CAN_MO61_IPR.
*/
#define	CAN_MOIPR61	(CAN_MO61_IPR)

/** \\brief  17BC, Message Object  Control Register */
#define CAN_MO61_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00197BCu)

/** Alias (User Manual Name) for CAN_MO61_STAT.
* To use register names with standard convension, please use CAN_MO61_STAT.
*/
#define	CAN_MOSTAT61	(CAN_MO61_STAT)

/** \\brief  17CC, Message Object  Acceptance Mask Register */
#define CAN_MO62_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00197CCu)

/** Alias (User Manual Name) for CAN_MO62_AMR.
* To use register names with standard convension, please use CAN_MO62_AMR.
*/
#define	CAN_MOAMR62	(CAN_MO62_AMR)

/** \\brief  17D8, Message Object  Arbitration Register */
#define CAN_MO62_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00197D8u)

/** Alias (User Manual Name) for CAN_MO62_AR.
* To use register names with standard convension, please use CAN_MO62_AR.
*/
#define	CAN_MOAR62	(CAN_MO62_AR)

/** \\brief  17DC, Message Object  Control Register */
#define CAN_MO62_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00197DCu)

/** Alias (User Manual Name) for CAN_MO62_CTR.
* To use register names with standard convension, please use CAN_MO62_CTR.
*/
#define	CAN_MOCTR62	(CAN_MO62_CTR)

/** \\brief  17D4, Message Object  Data Register High */
#define CAN_MO62_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00197D4u)

/** Alias (User Manual Name) for CAN_MO62_DATAH.
* To use register names with standard convension, please use CAN_MO62_DATAH.
*/
#define	CAN_MODATAH62	(CAN_MO62_DATAH)

/** \\brief  17D0, Message Object  Data Register Low */
#define CAN_MO62_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00197D0u)

/** Alias (User Manual Name) for CAN_MO62_DATAL.
* To use register names with standard convension, please use CAN_MO62_DATAL.
*/
#define	CAN_MODATAL62	(CAN_MO62_DATAL)

/** \\brief  17C0, Message Object  Function Control Register */
#define CAN_MO62_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00197C0u)

/** Alias (User Manual Name) for CAN_MO62_FCR.
* To use register names with standard convension, please use CAN_MO62_FCR.
*/
#define	CAN_MOFCR62	(CAN_MO62_FCR)

/** \\brief  17C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO62_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00197C4u)

/** Alias (User Manual Name) for CAN_MO62_FGPR.
* To use register names with standard convension, please use CAN_MO62_FGPR.
*/
#define	CAN_MOFGPR62	(CAN_MO62_FGPR)

/** \\brief  17C8, Message Object  Interrupt Pointer Register */
#define CAN_MO62_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00197C8u)

/** Alias (User Manual Name) for CAN_MO62_IPR.
* To use register names with standard convension, please use CAN_MO62_IPR.
*/
#define	CAN_MOIPR62	(CAN_MO62_IPR)

/** \\brief  17DC, Message Object  Control Register */
#define CAN_MO62_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00197DCu)

/** Alias (User Manual Name) for CAN_MO62_STAT.
* To use register names with standard convension, please use CAN_MO62_STAT.
*/
#define	CAN_MOSTAT62	(CAN_MO62_STAT)

/** \\brief  17EC, Message Object  Acceptance Mask Register */
#define CAN_MO63_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00197ECu)

/** Alias (User Manual Name) for CAN_MO63_AMR.
* To use register names with standard convension, please use CAN_MO63_AMR.
*/
#define	CAN_MOAMR63	(CAN_MO63_AMR)

/** \\brief  17F8, Message Object  Arbitration Register */
#define CAN_MO63_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00197F8u)

/** Alias (User Manual Name) for CAN_MO63_AR.
* To use register names with standard convension, please use CAN_MO63_AR.
*/
#define	CAN_MOAR63	(CAN_MO63_AR)

/** \\brief  17FC, Message Object  Control Register */
#define CAN_MO63_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00197FCu)

/** Alias (User Manual Name) for CAN_MO63_CTR.
* To use register names with standard convension, please use CAN_MO63_CTR.
*/
#define	CAN_MOCTR63	(CAN_MO63_CTR)

/** \\brief  17F4, Message Object  Data Register High */
#define CAN_MO63_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00197F4u)

/** Alias (User Manual Name) for CAN_MO63_DATAH.
* To use register names with standard convension, please use CAN_MO63_DATAH.
*/
#define	CAN_MODATAH63	(CAN_MO63_DATAH)

/** \\brief  17F0, Message Object  Data Register Low */
#define CAN_MO63_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00197F0u)

/** Alias (User Manual Name) for CAN_MO63_DATAL.
* To use register names with standard convension, please use CAN_MO63_DATAL.
*/
#define	CAN_MODATAL63	(CAN_MO63_DATAL)

/** \\brief  17E0, Message Object  Function Control Register */
#define CAN_MO63_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00197E0u)

/** Alias (User Manual Name) for CAN_MO63_FCR.
* To use register names with standard convension, please use CAN_MO63_FCR.
*/
#define	CAN_MOFCR63	(CAN_MO63_FCR)

/** \\brief  17E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO63_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00197E4u)

/** Alias (User Manual Name) for CAN_MO63_FGPR.
* To use register names with standard convension, please use CAN_MO63_FGPR.
*/
#define	CAN_MOFGPR63	(CAN_MO63_FGPR)

/** \\brief  17E8, Message Object  Interrupt Pointer Register */
#define CAN_MO63_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00197E8u)

/** Alias (User Manual Name) for CAN_MO63_IPR.
* To use register names with standard convension, please use CAN_MO63_IPR.
*/
#define	CAN_MOIPR63	(CAN_MO63_IPR)

/** \\brief  17FC, Message Object  Control Register */
#define CAN_MO63_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00197FCu)

/** Alias (User Manual Name) for CAN_MO63_STAT.
* To use register names with standard convension, please use CAN_MO63_STAT.
*/
#define	CAN_MOSTAT63	(CAN_MO63_STAT)

/** \\brief  180C, Message Object  Acceptance Mask Register */
#define CAN_MO64_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001980Cu)

/** Alias (User Manual Name) for CAN_MO64_AMR.
* To use register names with standard convension, please use CAN_MO64_AMR.
*/
#define	CAN_MOAMR64	(CAN_MO64_AMR)

/** \\brief  1818, Message Object  Arbitration Register */
#define CAN_MO64_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019818u)

/** Alias (User Manual Name) for CAN_MO64_AR.
* To use register names with standard convension, please use CAN_MO64_AR.
*/
#define	CAN_MOAR64	(CAN_MO64_AR)

/** \\brief  181C, Message Object  Control Register */
#define CAN_MO64_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001981Cu)

/** Alias (User Manual Name) for CAN_MO64_CTR.
* To use register names with standard convension, please use CAN_MO64_CTR.
*/
#define	CAN_MOCTR64	(CAN_MO64_CTR)

/** \\brief  1814, Message Object  Data Register High */
#define CAN_MO64_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019814u)

/** Alias (User Manual Name) for CAN_MO64_DATAH.
* To use register names with standard convension, please use CAN_MO64_DATAH.
*/
#define	CAN_MODATAH64	(CAN_MO64_DATAH)

/** \\brief  1810, Message Object  Data Register Low */
#define CAN_MO64_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019810u)

/** Alias (User Manual Name) for CAN_MO64_DATAL.
* To use register names with standard convension, please use CAN_MO64_DATAL.
*/
#define	CAN_MODATAL64	(CAN_MO64_DATAL)

/** \\brief  1800, Message Object  Function Control Register */
#define CAN_MO64_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019800u)

/** Alias (User Manual Name) for CAN_MO64_FCR.
* To use register names with standard convension, please use CAN_MO64_FCR.
*/
#define	CAN_MOFCR64	(CAN_MO64_FCR)

/** \\brief  1804, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO64_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019804u)

/** Alias (User Manual Name) for CAN_MO64_FGPR.
* To use register names with standard convension, please use CAN_MO64_FGPR.
*/
#define	CAN_MOFGPR64	(CAN_MO64_FGPR)

/** \\brief  1808, Message Object  Interrupt Pointer Register */
#define CAN_MO64_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019808u)

/** Alias (User Manual Name) for CAN_MO64_IPR.
* To use register names with standard convension, please use CAN_MO64_IPR.
*/
#define	CAN_MOIPR64	(CAN_MO64_IPR)

/** \\brief  181C, Message Object  Control Register */
#define CAN_MO64_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001981Cu)

/** Alias (User Manual Name) for CAN_MO64_STAT.
* To use register names with standard convension, please use CAN_MO64_STAT.
*/
#define	CAN_MOSTAT64	(CAN_MO64_STAT)

/** \\brief  182C, Message Object  Acceptance Mask Register */
#define CAN_MO65_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001982Cu)

/** Alias (User Manual Name) for CAN_MO65_AMR.
* To use register names with standard convension, please use CAN_MO65_AMR.
*/
#define	CAN_MOAMR65	(CAN_MO65_AMR)

/** \\brief  1838, Message Object  Arbitration Register */
#define CAN_MO65_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019838u)

/** Alias (User Manual Name) for CAN_MO65_AR.
* To use register names with standard convension, please use CAN_MO65_AR.
*/
#define	CAN_MOAR65	(CAN_MO65_AR)

/** \\brief  183C, Message Object  Control Register */
#define CAN_MO65_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001983Cu)

/** Alias (User Manual Name) for CAN_MO65_CTR.
* To use register names with standard convension, please use CAN_MO65_CTR.
*/
#define	CAN_MOCTR65	(CAN_MO65_CTR)

/** \\brief  1834, Message Object  Data Register High */
#define CAN_MO65_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019834u)

/** Alias (User Manual Name) for CAN_MO65_DATAH.
* To use register names with standard convension, please use CAN_MO65_DATAH.
*/
#define	CAN_MODATAH65	(CAN_MO65_DATAH)

/** \\brief  1830, Message Object  Data Register Low */
#define CAN_MO65_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019830u)

/** Alias (User Manual Name) for CAN_MO65_DATAL.
* To use register names with standard convension, please use CAN_MO65_DATAL.
*/
#define	CAN_MODATAL65	(CAN_MO65_DATAL)

/** \\brief  1820, Message Object  Function Control Register */
#define CAN_MO65_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019820u)

/** Alias (User Manual Name) for CAN_MO65_FCR.
* To use register names with standard convension, please use CAN_MO65_FCR.
*/
#define	CAN_MOFCR65	(CAN_MO65_FCR)

/** \\brief  1824, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO65_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019824u)

/** Alias (User Manual Name) for CAN_MO65_FGPR.
* To use register names with standard convension, please use CAN_MO65_FGPR.
*/
#define	CAN_MOFGPR65	(CAN_MO65_FGPR)

/** \\brief  1828, Message Object  Interrupt Pointer Register */
#define CAN_MO65_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019828u)

/** Alias (User Manual Name) for CAN_MO65_IPR.
* To use register names with standard convension, please use CAN_MO65_IPR.
*/
#define	CAN_MOIPR65	(CAN_MO65_IPR)

/** \\brief  183C, Message Object  Control Register */
#define CAN_MO65_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001983Cu)

/** Alias (User Manual Name) for CAN_MO65_STAT.
* To use register names with standard convension, please use CAN_MO65_STAT.
*/
#define	CAN_MOSTAT65	(CAN_MO65_STAT)

/** \\brief  184C, Message Object  Acceptance Mask Register */
#define CAN_MO66_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001984Cu)

/** Alias (User Manual Name) for CAN_MO66_AMR.
* To use register names with standard convension, please use CAN_MO66_AMR.
*/
#define	CAN_MOAMR66	(CAN_MO66_AMR)

/** \\brief  1858, Message Object  Arbitration Register */
#define CAN_MO66_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019858u)

/** Alias (User Manual Name) for CAN_MO66_AR.
* To use register names with standard convension, please use CAN_MO66_AR.
*/
#define	CAN_MOAR66	(CAN_MO66_AR)

/** \\brief  185C, Message Object  Control Register */
#define CAN_MO66_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001985Cu)

/** Alias (User Manual Name) for CAN_MO66_CTR.
* To use register names with standard convension, please use CAN_MO66_CTR.
*/
#define	CAN_MOCTR66	(CAN_MO66_CTR)

/** \\brief  1854, Message Object  Data Register High */
#define CAN_MO66_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019854u)

/** Alias (User Manual Name) for CAN_MO66_DATAH.
* To use register names with standard convension, please use CAN_MO66_DATAH.
*/
#define	CAN_MODATAH66	(CAN_MO66_DATAH)

/** \\brief  1850, Message Object  Data Register Low */
#define CAN_MO66_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019850u)

/** Alias (User Manual Name) for CAN_MO66_DATAL.
* To use register names with standard convension, please use CAN_MO66_DATAL.
*/
#define	CAN_MODATAL66	(CAN_MO66_DATAL)

/** \\brief  1840, Message Object  Function Control Register */
#define CAN_MO66_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019840u)

/** Alias (User Manual Name) for CAN_MO66_FCR.
* To use register names with standard convension, please use CAN_MO66_FCR.
*/
#define	CAN_MOFCR66	(CAN_MO66_FCR)

/** \\brief  1844, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO66_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019844u)

/** Alias (User Manual Name) for CAN_MO66_FGPR.
* To use register names with standard convension, please use CAN_MO66_FGPR.
*/
#define	CAN_MOFGPR66	(CAN_MO66_FGPR)

/** \\brief  1848, Message Object  Interrupt Pointer Register */
#define CAN_MO66_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019848u)

/** Alias (User Manual Name) for CAN_MO66_IPR.
* To use register names with standard convension, please use CAN_MO66_IPR.
*/
#define	CAN_MOIPR66	(CAN_MO66_IPR)

/** \\brief  185C, Message Object  Control Register */
#define CAN_MO66_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001985Cu)

/** Alias (User Manual Name) for CAN_MO66_STAT.
* To use register names with standard convension, please use CAN_MO66_STAT.
*/
#define	CAN_MOSTAT66	(CAN_MO66_STAT)

/** \\brief  186C, Message Object  Acceptance Mask Register */
#define CAN_MO67_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001986Cu)

/** Alias (User Manual Name) for CAN_MO67_AMR.
* To use register names with standard convension, please use CAN_MO67_AMR.
*/
#define	CAN_MOAMR67	(CAN_MO67_AMR)

/** \\brief  1878, Message Object  Arbitration Register */
#define CAN_MO67_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019878u)

/** Alias (User Manual Name) for CAN_MO67_AR.
* To use register names with standard convension, please use CAN_MO67_AR.
*/
#define	CAN_MOAR67	(CAN_MO67_AR)

/** \\brief  187C, Message Object  Control Register */
#define CAN_MO67_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001987Cu)

/** Alias (User Manual Name) for CAN_MO67_CTR.
* To use register names with standard convension, please use CAN_MO67_CTR.
*/
#define	CAN_MOCTR67	(CAN_MO67_CTR)

/** \\brief  1874, Message Object  Data Register High */
#define CAN_MO67_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019874u)

/** Alias (User Manual Name) for CAN_MO67_DATAH.
* To use register names with standard convension, please use CAN_MO67_DATAH.
*/
#define	CAN_MODATAH67	(CAN_MO67_DATAH)

/** \\brief  1870, Message Object  Data Register Low */
#define CAN_MO67_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019870u)

/** Alias (User Manual Name) for CAN_MO67_DATAL.
* To use register names with standard convension, please use CAN_MO67_DATAL.
*/
#define	CAN_MODATAL67	(CAN_MO67_DATAL)

/** \\brief  1860, Message Object  Function Control Register */
#define CAN_MO67_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019860u)

/** Alias (User Manual Name) for CAN_MO67_FCR.
* To use register names with standard convension, please use CAN_MO67_FCR.
*/
#define	CAN_MOFCR67	(CAN_MO67_FCR)

/** \\brief  1864, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO67_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019864u)

/** Alias (User Manual Name) for CAN_MO67_FGPR.
* To use register names with standard convension, please use CAN_MO67_FGPR.
*/
#define	CAN_MOFGPR67	(CAN_MO67_FGPR)

/** \\brief  1868, Message Object  Interrupt Pointer Register */
#define CAN_MO67_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019868u)

/** Alias (User Manual Name) for CAN_MO67_IPR.
* To use register names with standard convension, please use CAN_MO67_IPR.
*/
#define	CAN_MOIPR67	(CAN_MO67_IPR)

/** \\brief  187C, Message Object  Control Register */
#define CAN_MO67_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001987Cu)

/** Alias (User Manual Name) for CAN_MO67_STAT.
* To use register names with standard convension, please use CAN_MO67_STAT.
*/
#define	CAN_MOSTAT67	(CAN_MO67_STAT)

/** \\brief  188C, Message Object  Acceptance Mask Register */
#define CAN_MO68_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001988Cu)

/** Alias (User Manual Name) for CAN_MO68_AMR.
* To use register names with standard convension, please use CAN_MO68_AMR.
*/
#define	CAN_MOAMR68	(CAN_MO68_AMR)

/** \\brief  1898, Message Object  Arbitration Register */
#define CAN_MO68_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019898u)

/** Alias (User Manual Name) for CAN_MO68_AR.
* To use register names with standard convension, please use CAN_MO68_AR.
*/
#define	CAN_MOAR68	(CAN_MO68_AR)

/** \\brief  189C, Message Object  Control Register */
#define CAN_MO68_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001989Cu)

/** Alias (User Manual Name) for CAN_MO68_CTR.
* To use register names with standard convension, please use CAN_MO68_CTR.
*/
#define	CAN_MOCTR68	(CAN_MO68_CTR)

/** \\brief  1894, Message Object  Data Register High */
#define CAN_MO68_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019894u)

/** Alias (User Manual Name) for CAN_MO68_DATAH.
* To use register names with standard convension, please use CAN_MO68_DATAH.
*/
#define	CAN_MODATAH68	(CAN_MO68_DATAH)

/** \\brief  1890, Message Object  Data Register Low */
#define CAN_MO68_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019890u)

/** Alias (User Manual Name) for CAN_MO68_DATAL.
* To use register names with standard convension, please use CAN_MO68_DATAL.
*/
#define	CAN_MODATAL68	(CAN_MO68_DATAL)

/** \\brief  1880, Message Object  Function Control Register */
#define CAN_MO68_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019880u)

/** Alias (User Manual Name) for CAN_MO68_FCR.
* To use register names with standard convension, please use CAN_MO68_FCR.
*/
#define	CAN_MOFCR68	(CAN_MO68_FCR)

/** \\brief  1884, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO68_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019884u)

/** Alias (User Manual Name) for CAN_MO68_FGPR.
* To use register names with standard convension, please use CAN_MO68_FGPR.
*/
#define	CAN_MOFGPR68	(CAN_MO68_FGPR)

/** \\brief  1888, Message Object  Interrupt Pointer Register */
#define CAN_MO68_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019888u)

/** Alias (User Manual Name) for CAN_MO68_IPR.
* To use register names with standard convension, please use CAN_MO68_IPR.
*/
#define	CAN_MOIPR68	(CAN_MO68_IPR)

/** \\brief  189C, Message Object  Control Register */
#define CAN_MO68_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001989Cu)

/** Alias (User Manual Name) for CAN_MO68_STAT.
* To use register names with standard convension, please use CAN_MO68_STAT.
*/
#define	CAN_MOSTAT68	(CAN_MO68_STAT)

/** \\brief  18AC, Message Object  Acceptance Mask Register */
#define CAN_MO69_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00198ACu)

/** Alias (User Manual Name) for CAN_MO69_AMR.
* To use register names with standard convension, please use CAN_MO69_AMR.
*/
#define	CAN_MOAMR69	(CAN_MO69_AMR)

/** \\brief  18B8, Message Object  Arbitration Register */
#define CAN_MO69_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00198B8u)

/** Alias (User Manual Name) for CAN_MO69_AR.
* To use register names with standard convension, please use CAN_MO69_AR.
*/
#define	CAN_MOAR69	(CAN_MO69_AR)

/** \\brief  18BC, Message Object  Control Register */
#define CAN_MO69_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00198BCu)

/** Alias (User Manual Name) for CAN_MO69_CTR.
* To use register names with standard convension, please use CAN_MO69_CTR.
*/
#define	CAN_MOCTR69	(CAN_MO69_CTR)

/** \\brief  18B4, Message Object  Data Register High */
#define CAN_MO69_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00198B4u)

/** Alias (User Manual Name) for CAN_MO69_DATAH.
* To use register names with standard convension, please use CAN_MO69_DATAH.
*/
#define	CAN_MODATAH69	(CAN_MO69_DATAH)

/** \\brief  18B0, Message Object  Data Register Low */
#define CAN_MO69_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00198B0u)

/** Alias (User Manual Name) for CAN_MO69_DATAL.
* To use register names with standard convension, please use CAN_MO69_DATAL.
*/
#define	CAN_MODATAL69	(CAN_MO69_DATAL)

/** \\brief  18A0, Message Object  Function Control Register */
#define CAN_MO69_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00198A0u)

/** Alias (User Manual Name) for CAN_MO69_FCR.
* To use register names with standard convension, please use CAN_MO69_FCR.
*/
#define	CAN_MOFCR69	(CAN_MO69_FCR)

/** \\brief  18A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO69_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00198A4u)

/** Alias (User Manual Name) for CAN_MO69_FGPR.
* To use register names with standard convension, please use CAN_MO69_FGPR.
*/
#define	CAN_MOFGPR69	(CAN_MO69_FGPR)

/** \\brief  18A8, Message Object  Interrupt Pointer Register */
#define CAN_MO69_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00198A8u)

/** Alias (User Manual Name) for CAN_MO69_IPR.
* To use register names with standard convension, please use CAN_MO69_IPR.
*/
#define	CAN_MOIPR69	(CAN_MO69_IPR)

/** \\brief  18BC, Message Object  Control Register */
#define CAN_MO69_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00198BCu)

/** Alias (User Manual Name) for CAN_MO69_STAT.
* To use register names with standard convension, please use CAN_MO69_STAT.
*/
#define	CAN_MOSTAT69	(CAN_MO69_STAT)

/** \\brief  10CC, Message Object  Acceptance Mask Register */
#define CAN_MO6_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00190CCu)

/** Alias (User Manual Name) for CAN_MO6_AMR.
* To use register names with standard convension, please use CAN_MO6_AMR.
*/
#define	CAN_MOAMR6	(CAN_MO6_AMR)

/** \\brief  10D8, Message Object  Arbitration Register */
#define CAN_MO6_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00190D8u)

/** Alias (User Manual Name) for CAN_MO6_AR.
* To use register names with standard convension, please use CAN_MO6_AR.
*/
#define	CAN_MOAR6	(CAN_MO6_AR)

/** \\brief  10DC, Message Object  Control Register */
#define CAN_MO6_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00190DCu)

/** Alias (User Manual Name) for CAN_MO6_CTR.
* To use register names with standard convension, please use CAN_MO6_CTR.
*/
#define	CAN_MOCTR6	(CAN_MO6_CTR)

/** \\brief  10D4, Message Object  Data Register High */
#define CAN_MO6_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00190D4u)

/** Alias (User Manual Name) for CAN_MO6_DATAH.
* To use register names with standard convension, please use CAN_MO6_DATAH.
*/
#define	CAN_MODATAH6	(CAN_MO6_DATAH)

/** \\brief  10D0, Message Object  Data Register Low */
#define CAN_MO6_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00190D0u)

/** Alias (User Manual Name) for CAN_MO6_DATAL.
* To use register names with standard convension, please use CAN_MO6_DATAL.
*/
#define	CAN_MODATAL6	(CAN_MO6_DATAL)

/** \\brief  10C0, Message Object  Function Control Register */
#define CAN_MO6_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00190C0u)

/** Alias (User Manual Name) for CAN_MO6_FCR.
* To use register names with standard convension, please use CAN_MO6_FCR.
*/
#define	CAN_MOFCR6	(CAN_MO6_FCR)

/** \\brief  10C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO6_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00190C4u)

/** Alias (User Manual Name) for CAN_MO6_FGPR.
* To use register names with standard convension, please use CAN_MO6_FGPR.
*/
#define	CAN_MOFGPR6	(CAN_MO6_FGPR)

/** \\brief  10C8, Message Object  Interrupt Pointer Register */
#define CAN_MO6_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00190C8u)

/** Alias (User Manual Name) for CAN_MO6_IPR.
* To use register names with standard convension, please use CAN_MO6_IPR.
*/
#define	CAN_MOIPR6	(CAN_MO6_IPR)

/** \\brief  10DC, Message Object  Control Register */
#define CAN_MO6_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00190DCu)

/** Alias (User Manual Name) for CAN_MO6_STAT.
* To use register names with standard convension, please use CAN_MO6_STAT.
*/
#define	CAN_MOSTAT6	(CAN_MO6_STAT)

/** \\brief  18CC, Message Object  Acceptance Mask Register */
#define CAN_MO70_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00198CCu)

/** Alias (User Manual Name) for CAN_MO70_AMR.
* To use register names with standard convension, please use CAN_MO70_AMR.
*/
#define	CAN_MOAMR70	(CAN_MO70_AMR)

/** \\brief  18D8, Message Object  Arbitration Register */
#define CAN_MO70_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00198D8u)

/** Alias (User Manual Name) for CAN_MO70_AR.
* To use register names with standard convension, please use CAN_MO70_AR.
*/
#define	CAN_MOAR70	(CAN_MO70_AR)

/** \\brief  18DC, Message Object  Control Register */
#define CAN_MO70_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00198DCu)

/** Alias (User Manual Name) for CAN_MO70_CTR.
* To use register names with standard convension, please use CAN_MO70_CTR.
*/
#define	CAN_MOCTR70	(CAN_MO70_CTR)

/** \\brief  18D4, Message Object  Data Register High */
#define CAN_MO70_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00198D4u)

/** Alias (User Manual Name) for CAN_MO70_DATAH.
* To use register names with standard convension, please use CAN_MO70_DATAH.
*/
#define	CAN_MODATAH70	(CAN_MO70_DATAH)

/** \\brief  18D0, Message Object  Data Register Low */
#define CAN_MO70_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00198D0u)

/** Alias (User Manual Name) for CAN_MO70_DATAL.
* To use register names with standard convension, please use CAN_MO70_DATAL.
*/
#define	CAN_MODATAL70	(CAN_MO70_DATAL)

/** \\brief  18C0, Message Object  Function Control Register */
#define CAN_MO70_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00198C0u)

/** Alias (User Manual Name) for CAN_MO70_FCR.
* To use register names with standard convension, please use CAN_MO70_FCR.
*/
#define	CAN_MOFCR70	(CAN_MO70_FCR)

/** \\brief  18C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO70_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00198C4u)

/** Alias (User Manual Name) for CAN_MO70_FGPR.
* To use register names with standard convension, please use CAN_MO70_FGPR.
*/
#define	CAN_MOFGPR70	(CAN_MO70_FGPR)

/** \\brief  18C8, Message Object  Interrupt Pointer Register */
#define CAN_MO70_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00198C8u)

/** Alias (User Manual Name) for CAN_MO70_IPR.
* To use register names with standard convension, please use CAN_MO70_IPR.
*/
#define	CAN_MOIPR70	(CAN_MO70_IPR)

/** \\brief  18DC, Message Object  Control Register */
#define CAN_MO70_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00198DCu)

/** Alias (User Manual Name) for CAN_MO70_STAT.
* To use register names with standard convension, please use CAN_MO70_STAT.
*/
#define	CAN_MOSTAT70	(CAN_MO70_STAT)

/** \\brief  18EC, Message Object  Acceptance Mask Register */
#define CAN_MO71_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00198ECu)

/** Alias (User Manual Name) for CAN_MO71_AMR.
* To use register names with standard convension, please use CAN_MO71_AMR.
*/
#define	CAN_MOAMR71	(CAN_MO71_AMR)

/** \\brief  18F8, Message Object  Arbitration Register */
#define CAN_MO71_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00198F8u)

/** Alias (User Manual Name) for CAN_MO71_AR.
* To use register names with standard convension, please use CAN_MO71_AR.
*/
#define	CAN_MOAR71	(CAN_MO71_AR)

/** \\brief  18FC, Message Object  Control Register */
#define CAN_MO71_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00198FCu)

/** Alias (User Manual Name) for CAN_MO71_CTR.
* To use register names with standard convension, please use CAN_MO71_CTR.
*/
#define	CAN_MOCTR71	(CAN_MO71_CTR)

/** \\brief  18F4, Message Object  Data Register High */
#define CAN_MO71_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00198F4u)

/** Alias (User Manual Name) for CAN_MO71_DATAH.
* To use register names with standard convension, please use CAN_MO71_DATAH.
*/
#define	CAN_MODATAH71	(CAN_MO71_DATAH)

/** \\brief  18F0, Message Object  Data Register Low */
#define CAN_MO71_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00198F0u)

/** Alias (User Manual Name) for CAN_MO71_DATAL.
* To use register names with standard convension, please use CAN_MO71_DATAL.
*/
#define	CAN_MODATAL71	(CAN_MO71_DATAL)

/** \\brief  18E0, Message Object  Function Control Register */
#define CAN_MO71_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00198E0u)

/** Alias (User Manual Name) for CAN_MO71_FCR.
* To use register names with standard convension, please use CAN_MO71_FCR.
*/
#define	CAN_MOFCR71	(CAN_MO71_FCR)

/** \\brief  18E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO71_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00198E4u)

/** Alias (User Manual Name) for CAN_MO71_FGPR.
* To use register names with standard convension, please use CAN_MO71_FGPR.
*/
#define	CAN_MOFGPR71	(CAN_MO71_FGPR)

/** \\brief  18E8, Message Object  Interrupt Pointer Register */
#define CAN_MO71_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00198E8u)

/** Alias (User Manual Name) for CAN_MO71_IPR.
* To use register names with standard convension, please use CAN_MO71_IPR.
*/
#define	CAN_MOIPR71	(CAN_MO71_IPR)

/** \\brief  18FC, Message Object  Control Register */
#define CAN_MO71_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00198FCu)

/** Alias (User Manual Name) for CAN_MO71_STAT.
* To use register names with standard convension, please use CAN_MO71_STAT.
*/
#define	CAN_MOSTAT71	(CAN_MO71_STAT)

/** \\brief  190C, Message Object  Acceptance Mask Register */
#define CAN_MO72_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001990Cu)

/** Alias (User Manual Name) for CAN_MO72_AMR.
* To use register names with standard convension, please use CAN_MO72_AMR.
*/
#define	CAN_MOAMR72	(CAN_MO72_AMR)

/** \\brief  1918, Message Object  Arbitration Register */
#define CAN_MO72_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019918u)

/** Alias (User Manual Name) for CAN_MO72_AR.
* To use register names with standard convension, please use CAN_MO72_AR.
*/
#define	CAN_MOAR72	(CAN_MO72_AR)

/** \\brief  191C, Message Object  Control Register */
#define CAN_MO72_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001991Cu)

/** Alias (User Manual Name) for CAN_MO72_CTR.
* To use register names with standard convension, please use CAN_MO72_CTR.
*/
#define	CAN_MOCTR72	(CAN_MO72_CTR)

/** \\brief  1914, Message Object  Data Register High */
#define CAN_MO72_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019914u)

/** Alias (User Manual Name) for CAN_MO72_DATAH.
* To use register names with standard convension, please use CAN_MO72_DATAH.
*/
#define	CAN_MODATAH72	(CAN_MO72_DATAH)

/** \\brief  1910, Message Object  Data Register Low */
#define CAN_MO72_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019910u)

/** Alias (User Manual Name) for CAN_MO72_DATAL.
* To use register names with standard convension, please use CAN_MO72_DATAL.
*/
#define	CAN_MODATAL72	(CAN_MO72_DATAL)

/** \\brief  1900, Message Object  Function Control Register */
#define CAN_MO72_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019900u)

/** Alias (User Manual Name) for CAN_MO72_FCR.
* To use register names with standard convension, please use CAN_MO72_FCR.
*/
#define	CAN_MOFCR72	(CAN_MO72_FCR)

/** \\brief  1904, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO72_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019904u)

/** Alias (User Manual Name) for CAN_MO72_FGPR.
* To use register names with standard convension, please use CAN_MO72_FGPR.
*/
#define	CAN_MOFGPR72	(CAN_MO72_FGPR)

/** \\brief  1908, Message Object  Interrupt Pointer Register */
#define CAN_MO72_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019908u)

/** Alias (User Manual Name) for CAN_MO72_IPR.
* To use register names with standard convension, please use CAN_MO72_IPR.
*/
#define	CAN_MOIPR72	(CAN_MO72_IPR)

/** \\brief  191C, Message Object  Control Register */
#define CAN_MO72_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001991Cu)

/** Alias (User Manual Name) for CAN_MO72_STAT.
* To use register names with standard convension, please use CAN_MO72_STAT.
*/
#define	CAN_MOSTAT72	(CAN_MO72_STAT)

/** \\brief  192C, Message Object  Acceptance Mask Register */
#define CAN_MO73_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001992Cu)

/** Alias (User Manual Name) for CAN_MO73_AMR.
* To use register names with standard convension, please use CAN_MO73_AMR.
*/
#define	CAN_MOAMR73	(CAN_MO73_AMR)

/** \\brief  1938, Message Object  Arbitration Register */
#define CAN_MO73_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019938u)

/** Alias (User Manual Name) for CAN_MO73_AR.
* To use register names with standard convension, please use CAN_MO73_AR.
*/
#define	CAN_MOAR73	(CAN_MO73_AR)

/** \\brief  193C, Message Object  Control Register */
#define CAN_MO73_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001993Cu)

/** Alias (User Manual Name) for CAN_MO73_CTR.
* To use register names with standard convension, please use CAN_MO73_CTR.
*/
#define	CAN_MOCTR73	(CAN_MO73_CTR)

/** \\brief  1934, Message Object  Data Register High */
#define CAN_MO73_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019934u)

/** Alias (User Manual Name) for CAN_MO73_DATAH.
* To use register names with standard convension, please use CAN_MO73_DATAH.
*/
#define	CAN_MODATAH73	(CAN_MO73_DATAH)

/** \\brief  1930, Message Object  Data Register Low */
#define CAN_MO73_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019930u)

/** Alias (User Manual Name) for CAN_MO73_DATAL.
* To use register names with standard convension, please use CAN_MO73_DATAL.
*/
#define	CAN_MODATAL73	(CAN_MO73_DATAL)

/** \\brief  1920, Message Object  Function Control Register */
#define CAN_MO73_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019920u)

/** Alias (User Manual Name) for CAN_MO73_FCR.
* To use register names with standard convension, please use CAN_MO73_FCR.
*/
#define	CAN_MOFCR73	(CAN_MO73_FCR)

/** \\brief  1924, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO73_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019924u)

/** Alias (User Manual Name) for CAN_MO73_FGPR.
* To use register names with standard convension, please use CAN_MO73_FGPR.
*/
#define	CAN_MOFGPR73	(CAN_MO73_FGPR)

/** \\brief  1928, Message Object  Interrupt Pointer Register */
#define CAN_MO73_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019928u)

/** Alias (User Manual Name) for CAN_MO73_IPR.
* To use register names with standard convension, please use CAN_MO73_IPR.
*/
#define	CAN_MOIPR73	(CAN_MO73_IPR)

/** \\brief  193C, Message Object  Control Register */
#define CAN_MO73_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001993Cu)

/** Alias (User Manual Name) for CAN_MO73_STAT.
* To use register names with standard convension, please use CAN_MO73_STAT.
*/
#define	CAN_MOSTAT73	(CAN_MO73_STAT)

/** \\brief  194C, Message Object  Acceptance Mask Register */
#define CAN_MO74_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001994Cu)

/** Alias (User Manual Name) for CAN_MO74_AMR.
* To use register names with standard convension, please use CAN_MO74_AMR.
*/
#define	CAN_MOAMR74	(CAN_MO74_AMR)

/** \\brief  1958, Message Object  Arbitration Register */
#define CAN_MO74_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019958u)

/** Alias (User Manual Name) for CAN_MO74_AR.
* To use register names with standard convension, please use CAN_MO74_AR.
*/
#define	CAN_MOAR74	(CAN_MO74_AR)

/** \\brief  195C, Message Object  Control Register */
#define CAN_MO74_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001995Cu)

/** Alias (User Manual Name) for CAN_MO74_CTR.
* To use register names with standard convension, please use CAN_MO74_CTR.
*/
#define	CAN_MOCTR74	(CAN_MO74_CTR)

/** \\brief  1954, Message Object  Data Register High */
#define CAN_MO74_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019954u)

/** Alias (User Manual Name) for CAN_MO74_DATAH.
* To use register names with standard convension, please use CAN_MO74_DATAH.
*/
#define	CAN_MODATAH74	(CAN_MO74_DATAH)

/** \\brief  1950, Message Object  Data Register Low */
#define CAN_MO74_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019950u)

/** Alias (User Manual Name) for CAN_MO74_DATAL.
* To use register names with standard convension, please use CAN_MO74_DATAL.
*/
#define	CAN_MODATAL74	(CAN_MO74_DATAL)

/** \\brief  1940, Message Object  Function Control Register */
#define CAN_MO74_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019940u)

/** Alias (User Manual Name) for CAN_MO74_FCR.
* To use register names with standard convension, please use CAN_MO74_FCR.
*/
#define	CAN_MOFCR74	(CAN_MO74_FCR)

/** \\brief  1944, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO74_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019944u)

/** Alias (User Manual Name) for CAN_MO74_FGPR.
* To use register names with standard convension, please use CAN_MO74_FGPR.
*/
#define	CAN_MOFGPR74	(CAN_MO74_FGPR)

/** \\brief  1948, Message Object  Interrupt Pointer Register */
#define CAN_MO74_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019948u)

/** Alias (User Manual Name) for CAN_MO74_IPR.
* To use register names with standard convension, please use CAN_MO74_IPR.
*/
#define	CAN_MOIPR74	(CAN_MO74_IPR)

/** \\brief  195C, Message Object  Control Register */
#define CAN_MO74_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001995Cu)

/** Alias (User Manual Name) for CAN_MO74_STAT.
* To use register names with standard convension, please use CAN_MO74_STAT.
*/
#define	CAN_MOSTAT74	(CAN_MO74_STAT)

/** \\brief  196C, Message Object  Acceptance Mask Register */
#define CAN_MO75_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001996Cu)

/** Alias (User Manual Name) for CAN_MO75_AMR.
* To use register names with standard convension, please use CAN_MO75_AMR.
*/
#define	CAN_MOAMR75	(CAN_MO75_AMR)

/** \\brief  1978, Message Object  Arbitration Register */
#define CAN_MO75_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019978u)

/** Alias (User Manual Name) for CAN_MO75_AR.
* To use register names with standard convension, please use CAN_MO75_AR.
*/
#define	CAN_MOAR75	(CAN_MO75_AR)

/** \\brief  197C, Message Object  Control Register */
#define CAN_MO75_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001997Cu)

/** Alias (User Manual Name) for CAN_MO75_CTR.
* To use register names with standard convension, please use CAN_MO75_CTR.
*/
#define	CAN_MOCTR75	(CAN_MO75_CTR)

/** \\brief  1974, Message Object  Data Register High */
#define CAN_MO75_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019974u)

/** Alias (User Manual Name) for CAN_MO75_DATAH.
* To use register names with standard convension, please use CAN_MO75_DATAH.
*/
#define	CAN_MODATAH75	(CAN_MO75_DATAH)

/** \\brief  1970, Message Object  Data Register Low */
#define CAN_MO75_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019970u)

/** Alias (User Manual Name) for CAN_MO75_DATAL.
* To use register names with standard convension, please use CAN_MO75_DATAL.
*/
#define	CAN_MODATAL75	(CAN_MO75_DATAL)

/** \\brief  1960, Message Object  Function Control Register */
#define CAN_MO75_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019960u)

/** Alias (User Manual Name) for CAN_MO75_FCR.
* To use register names with standard convension, please use CAN_MO75_FCR.
*/
#define	CAN_MOFCR75	(CAN_MO75_FCR)

/** \\brief  1964, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO75_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019964u)

/** Alias (User Manual Name) for CAN_MO75_FGPR.
* To use register names with standard convension, please use CAN_MO75_FGPR.
*/
#define	CAN_MOFGPR75	(CAN_MO75_FGPR)

/** \\brief  1968, Message Object  Interrupt Pointer Register */
#define CAN_MO75_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019968u)

/** Alias (User Manual Name) for CAN_MO75_IPR.
* To use register names with standard convension, please use CAN_MO75_IPR.
*/
#define	CAN_MOIPR75	(CAN_MO75_IPR)

/** \\brief  197C, Message Object  Control Register */
#define CAN_MO75_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001997Cu)

/** Alias (User Manual Name) for CAN_MO75_STAT.
* To use register names with standard convension, please use CAN_MO75_STAT.
*/
#define	CAN_MOSTAT75	(CAN_MO75_STAT)

/** \\brief  198C, Message Object  Acceptance Mask Register */
#define CAN_MO76_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001998Cu)

/** Alias (User Manual Name) for CAN_MO76_AMR.
* To use register names with standard convension, please use CAN_MO76_AMR.
*/
#define	CAN_MOAMR76	(CAN_MO76_AMR)

/** \\brief  1998, Message Object  Arbitration Register */
#define CAN_MO76_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019998u)

/** Alias (User Manual Name) for CAN_MO76_AR.
* To use register names with standard convension, please use CAN_MO76_AR.
*/
#define	CAN_MOAR76	(CAN_MO76_AR)

/** \\brief  199C, Message Object  Control Register */
#define CAN_MO76_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001999Cu)

/** Alias (User Manual Name) for CAN_MO76_CTR.
* To use register names with standard convension, please use CAN_MO76_CTR.
*/
#define	CAN_MOCTR76	(CAN_MO76_CTR)

/** \\brief  1994, Message Object  Data Register High */
#define CAN_MO76_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019994u)

/** Alias (User Manual Name) for CAN_MO76_DATAH.
* To use register names with standard convension, please use CAN_MO76_DATAH.
*/
#define	CAN_MODATAH76	(CAN_MO76_DATAH)

/** \\brief  1990, Message Object  Data Register Low */
#define CAN_MO76_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019990u)

/** Alias (User Manual Name) for CAN_MO76_DATAL.
* To use register names with standard convension, please use CAN_MO76_DATAL.
*/
#define	CAN_MODATAL76	(CAN_MO76_DATAL)

/** \\brief  1980, Message Object  Function Control Register */
#define CAN_MO76_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019980u)

/** Alias (User Manual Name) for CAN_MO76_FCR.
* To use register names with standard convension, please use CAN_MO76_FCR.
*/
#define	CAN_MOFCR76	(CAN_MO76_FCR)

/** \\brief  1984, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO76_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019984u)

/** Alias (User Manual Name) for CAN_MO76_FGPR.
* To use register names with standard convension, please use CAN_MO76_FGPR.
*/
#define	CAN_MOFGPR76	(CAN_MO76_FGPR)

/** \\brief  1988, Message Object  Interrupt Pointer Register */
#define CAN_MO76_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019988u)

/** Alias (User Manual Name) for CAN_MO76_IPR.
* To use register names with standard convension, please use CAN_MO76_IPR.
*/
#define	CAN_MOIPR76	(CAN_MO76_IPR)

/** \\brief  199C, Message Object  Control Register */
#define CAN_MO76_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001999Cu)

/** Alias (User Manual Name) for CAN_MO76_STAT.
* To use register names with standard convension, please use CAN_MO76_STAT.
*/
#define	CAN_MOSTAT76	(CAN_MO76_STAT)

/** \\brief  19AC, Message Object  Acceptance Mask Register */
#define CAN_MO77_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00199ACu)

/** Alias (User Manual Name) for CAN_MO77_AMR.
* To use register names with standard convension, please use CAN_MO77_AMR.
*/
#define	CAN_MOAMR77	(CAN_MO77_AMR)

/** \\brief  19B8, Message Object  Arbitration Register */
#define CAN_MO77_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00199B8u)

/** Alias (User Manual Name) for CAN_MO77_AR.
* To use register names with standard convension, please use CAN_MO77_AR.
*/
#define	CAN_MOAR77	(CAN_MO77_AR)

/** \\brief  19BC, Message Object  Control Register */
#define CAN_MO77_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00199BCu)

/** Alias (User Manual Name) for CAN_MO77_CTR.
* To use register names with standard convension, please use CAN_MO77_CTR.
*/
#define	CAN_MOCTR77	(CAN_MO77_CTR)

/** \\brief  19B4, Message Object  Data Register High */
#define CAN_MO77_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00199B4u)

/** Alias (User Manual Name) for CAN_MO77_DATAH.
* To use register names with standard convension, please use CAN_MO77_DATAH.
*/
#define	CAN_MODATAH77	(CAN_MO77_DATAH)

/** \\brief  19B0, Message Object  Data Register Low */
#define CAN_MO77_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00199B0u)

/** Alias (User Manual Name) for CAN_MO77_DATAL.
* To use register names with standard convension, please use CAN_MO77_DATAL.
*/
#define	CAN_MODATAL77	(CAN_MO77_DATAL)

/** \\brief  19A0, Message Object  Function Control Register */
#define CAN_MO77_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00199A0u)

/** Alias (User Manual Name) for CAN_MO77_FCR.
* To use register names with standard convension, please use CAN_MO77_FCR.
*/
#define	CAN_MOFCR77	(CAN_MO77_FCR)

/** \\brief  19A4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO77_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00199A4u)

/** Alias (User Manual Name) for CAN_MO77_FGPR.
* To use register names with standard convension, please use CAN_MO77_FGPR.
*/
#define	CAN_MOFGPR77	(CAN_MO77_FGPR)

/** \\brief  19A8, Message Object  Interrupt Pointer Register */
#define CAN_MO77_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00199A8u)

/** Alias (User Manual Name) for CAN_MO77_IPR.
* To use register names with standard convension, please use CAN_MO77_IPR.
*/
#define	CAN_MOIPR77	(CAN_MO77_IPR)

/** \\brief  19BC, Message Object  Control Register */
#define CAN_MO77_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00199BCu)

/** Alias (User Manual Name) for CAN_MO77_STAT.
* To use register names with standard convension, please use CAN_MO77_STAT.
*/
#define	CAN_MOSTAT77	(CAN_MO77_STAT)

/** \\brief  19CC, Message Object  Acceptance Mask Register */
#define CAN_MO78_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00199CCu)

/** Alias (User Manual Name) for CAN_MO78_AMR.
* To use register names with standard convension, please use CAN_MO78_AMR.
*/
#define	CAN_MOAMR78	(CAN_MO78_AMR)

/** \\brief  19D8, Message Object  Arbitration Register */
#define CAN_MO78_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00199D8u)

/** Alias (User Manual Name) for CAN_MO78_AR.
* To use register names with standard convension, please use CAN_MO78_AR.
*/
#define	CAN_MOAR78	(CAN_MO78_AR)

/** \\brief  19DC, Message Object  Control Register */
#define CAN_MO78_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00199DCu)

/** Alias (User Manual Name) for CAN_MO78_CTR.
* To use register names with standard convension, please use CAN_MO78_CTR.
*/
#define	CAN_MOCTR78	(CAN_MO78_CTR)

/** \\brief  19D4, Message Object  Data Register High */
#define CAN_MO78_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00199D4u)

/** Alias (User Manual Name) for CAN_MO78_DATAH.
* To use register names with standard convension, please use CAN_MO78_DATAH.
*/
#define	CAN_MODATAH78	(CAN_MO78_DATAH)

/** \\brief  19D0, Message Object  Data Register Low */
#define CAN_MO78_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00199D0u)

/** Alias (User Manual Name) for CAN_MO78_DATAL.
* To use register names with standard convension, please use CAN_MO78_DATAL.
*/
#define	CAN_MODATAL78	(CAN_MO78_DATAL)

/** \\brief  19C0, Message Object  Function Control Register */
#define CAN_MO78_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00199C0u)

/** Alias (User Manual Name) for CAN_MO78_FCR.
* To use register names with standard convension, please use CAN_MO78_FCR.
*/
#define	CAN_MOFCR78	(CAN_MO78_FCR)

/** \\brief  19C4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO78_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00199C4u)

/** Alias (User Manual Name) for CAN_MO78_FGPR.
* To use register names with standard convension, please use CAN_MO78_FGPR.
*/
#define	CAN_MOFGPR78	(CAN_MO78_FGPR)

/** \\brief  19C8, Message Object  Interrupt Pointer Register */
#define CAN_MO78_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00199C8u)

/** Alias (User Manual Name) for CAN_MO78_IPR.
* To use register names with standard convension, please use CAN_MO78_IPR.
*/
#define	CAN_MOIPR78	(CAN_MO78_IPR)

/** \\brief  19DC, Message Object  Control Register */
#define CAN_MO78_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00199DCu)

/** Alias (User Manual Name) for CAN_MO78_STAT.
* To use register names with standard convension, please use CAN_MO78_STAT.
*/
#define	CAN_MOSTAT78	(CAN_MO78_STAT)

/** \\brief  19EC, Message Object  Acceptance Mask Register */
#define CAN_MO79_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00199ECu)

/** Alias (User Manual Name) for CAN_MO79_AMR.
* To use register names with standard convension, please use CAN_MO79_AMR.
*/
#define	CAN_MOAMR79	(CAN_MO79_AMR)

/** \\brief  19F8, Message Object  Arbitration Register */
#define CAN_MO79_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00199F8u)

/** Alias (User Manual Name) for CAN_MO79_AR.
* To use register names with standard convension, please use CAN_MO79_AR.
*/
#define	CAN_MOAR79	(CAN_MO79_AR)

/** \\brief  19FC, Message Object  Control Register */
#define CAN_MO79_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00199FCu)

/** Alias (User Manual Name) for CAN_MO79_CTR.
* To use register names with standard convension, please use CAN_MO79_CTR.
*/
#define	CAN_MOCTR79	(CAN_MO79_CTR)

/** \\brief  19F4, Message Object  Data Register High */
#define CAN_MO79_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00199F4u)

/** Alias (User Manual Name) for CAN_MO79_DATAH.
* To use register names with standard convension, please use CAN_MO79_DATAH.
*/
#define	CAN_MODATAH79	(CAN_MO79_DATAH)

/** \\brief  19F0, Message Object  Data Register Low */
#define CAN_MO79_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00199F0u)

/** Alias (User Manual Name) for CAN_MO79_DATAL.
* To use register names with standard convension, please use CAN_MO79_DATAL.
*/
#define	CAN_MODATAL79	(CAN_MO79_DATAL)

/** \\brief  19E0, Message Object  Function Control Register */
#define CAN_MO79_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00199E0u)

/** Alias (User Manual Name) for CAN_MO79_FCR.
* To use register names with standard convension, please use CAN_MO79_FCR.
*/
#define	CAN_MOFCR79	(CAN_MO79_FCR)

/** \\brief  19E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO79_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00199E4u)

/** Alias (User Manual Name) for CAN_MO79_FGPR.
* To use register names with standard convension, please use CAN_MO79_FGPR.
*/
#define	CAN_MOFGPR79	(CAN_MO79_FGPR)

/** \\brief  19E8, Message Object  Interrupt Pointer Register */
#define CAN_MO79_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00199E8u)

/** Alias (User Manual Name) for CAN_MO79_IPR.
* To use register names with standard convension, please use CAN_MO79_IPR.
*/
#define	CAN_MOIPR79	(CAN_MO79_IPR)

/** \\brief  19FC, Message Object  Control Register */
#define CAN_MO79_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00199FCu)

/** Alias (User Manual Name) for CAN_MO79_STAT.
* To use register names with standard convension, please use CAN_MO79_STAT.
*/
#define	CAN_MOSTAT79	(CAN_MO79_STAT)

/** \\brief  10EC, Message Object  Acceptance Mask Register */
#define CAN_MO7_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF00190ECu)

/** Alias (User Manual Name) for CAN_MO7_AMR.
* To use register names with standard convension, please use CAN_MO7_AMR.
*/
#define	CAN_MOAMR7	(CAN_MO7_AMR)

/** \\brief  10F8, Message Object  Arbitration Register */
#define CAN_MO7_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF00190F8u)

/** Alias (User Manual Name) for CAN_MO7_AR.
* To use register names with standard convension, please use CAN_MO7_AR.
*/
#define	CAN_MOAR7	(CAN_MO7_AR)

/** \\brief  10FC, Message Object  Control Register */
#define CAN_MO7_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF00190FCu)

/** Alias (User Manual Name) for CAN_MO7_CTR.
* To use register names with standard convension, please use CAN_MO7_CTR.
*/
#define	CAN_MOCTR7	(CAN_MO7_CTR)

/** \\brief  10F4, Message Object  Data Register High */
#define CAN_MO7_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF00190F4u)

/** Alias (User Manual Name) for CAN_MO7_DATAH.
* To use register names with standard convension, please use CAN_MO7_DATAH.
*/
#define	CAN_MODATAH7	(CAN_MO7_DATAH)

/** \\brief  10F0, Message Object  Data Register Low */
#define CAN_MO7_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF00190F0u)

/** Alias (User Manual Name) for CAN_MO7_DATAL.
* To use register names with standard convension, please use CAN_MO7_DATAL.
*/
#define	CAN_MODATAL7	(CAN_MO7_DATAL)

/** \\brief  10E0, Message Object  Function Control Register */
#define CAN_MO7_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF00190E0u)

/** Alias (User Manual Name) for CAN_MO7_FCR.
* To use register names with standard convension, please use CAN_MO7_FCR.
*/
#define	CAN_MOFCR7	(CAN_MO7_FCR)

/** \\brief  10E4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO7_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF00190E4u)

/** Alias (User Manual Name) for CAN_MO7_FGPR.
* To use register names with standard convension, please use CAN_MO7_FGPR.
*/
#define	CAN_MOFGPR7	(CAN_MO7_FGPR)

/** \\brief  10E8, Message Object  Interrupt Pointer Register */
#define CAN_MO7_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF00190E8u)

/** Alias (User Manual Name) for CAN_MO7_IPR.
* To use register names with standard convension, please use CAN_MO7_IPR.
*/
#define	CAN_MOIPR7	(CAN_MO7_IPR)

/** \\brief  10FC, Message Object  Control Register */
#define CAN_MO7_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF00190FCu)

/** Alias (User Manual Name) for CAN_MO7_STAT.
* To use register names with standard convension, please use CAN_MO7_STAT.
*/
#define	CAN_MOSTAT7	(CAN_MO7_STAT)

/** \\brief  1A0C, Message Object  Acceptance Mask Register */
#define CAN_MO80_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019A0Cu)

/** Alias (User Manual Name) for CAN_MO80_AMR.
* To use register names with standard convension, please use CAN_MO80_AMR.
*/
#define	CAN_MOAMR80	(CAN_MO80_AMR)

/** \\brief  1A18, Message Object  Arbitration Register */
#define CAN_MO80_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019A18u)

/** Alias (User Manual Name) for CAN_MO80_AR.
* To use register names with standard convension, please use CAN_MO80_AR.
*/
#define	CAN_MOAR80	(CAN_MO80_AR)

/** \\brief  1A1C, Message Object  Control Register */
#define CAN_MO80_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019A1Cu)

/** Alias (User Manual Name) for CAN_MO80_CTR.
* To use register names with standard convension, please use CAN_MO80_CTR.
*/
#define	CAN_MOCTR80	(CAN_MO80_CTR)

/** \\brief  1A14, Message Object  Data Register High */
#define CAN_MO80_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019A14u)

/** Alias (User Manual Name) for CAN_MO80_DATAH.
* To use register names with standard convension, please use CAN_MO80_DATAH.
*/
#define	CAN_MODATAH80	(CAN_MO80_DATAH)

/** \\brief  1A10, Message Object  Data Register Low */
#define CAN_MO80_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019A10u)

/** Alias (User Manual Name) for CAN_MO80_DATAL.
* To use register names with standard convension, please use CAN_MO80_DATAL.
*/
#define	CAN_MODATAL80	(CAN_MO80_DATAL)

/** \\brief  1A00, Message Object  Function Control Register */
#define CAN_MO80_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019A00u)

/** Alias (User Manual Name) for CAN_MO80_FCR.
* To use register names with standard convension, please use CAN_MO80_FCR.
*/
#define	CAN_MOFCR80	(CAN_MO80_FCR)

/** \\brief  1A04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO80_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019A04u)

/** Alias (User Manual Name) for CAN_MO80_FGPR.
* To use register names with standard convension, please use CAN_MO80_FGPR.
*/
#define	CAN_MOFGPR80	(CAN_MO80_FGPR)

/** \\brief  1A08, Message Object  Interrupt Pointer Register */
#define CAN_MO80_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019A08u)

/** Alias (User Manual Name) for CAN_MO80_IPR.
* To use register names with standard convension, please use CAN_MO80_IPR.
*/
#define	CAN_MOIPR80	(CAN_MO80_IPR)

/** \\brief  1A1C, Message Object  Control Register */
#define CAN_MO80_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019A1Cu)

/** Alias (User Manual Name) for CAN_MO80_STAT.
* To use register names with standard convension, please use CAN_MO80_STAT.
*/
#define	CAN_MOSTAT80	(CAN_MO80_STAT)

/** \\brief  1A2C, Message Object  Acceptance Mask Register */
#define CAN_MO81_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019A2Cu)

/** Alias (User Manual Name) for CAN_MO81_AMR.
* To use register names with standard convension, please use CAN_MO81_AMR.
*/
#define	CAN_MOAMR81	(CAN_MO81_AMR)

/** \\brief  1A38, Message Object  Arbitration Register */
#define CAN_MO81_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019A38u)

/** Alias (User Manual Name) for CAN_MO81_AR.
* To use register names with standard convension, please use CAN_MO81_AR.
*/
#define	CAN_MOAR81	(CAN_MO81_AR)

/** \\brief  1A3C, Message Object  Control Register */
#define CAN_MO81_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019A3Cu)

/** Alias (User Manual Name) for CAN_MO81_CTR.
* To use register names with standard convension, please use CAN_MO81_CTR.
*/
#define	CAN_MOCTR81	(CAN_MO81_CTR)

/** \\brief  1A34, Message Object  Data Register High */
#define CAN_MO81_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019A34u)

/** Alias (User Manual Name) for CAN_MO81_DATAH.
* To use register names with standard convension, please use CAN_MO81_DATAH.
*/
#define	CAN_MODATAH81	(CAN_MO81_DATAH)

/** \\brief  1A30, Message Object  Data Register Low */
#define CAN_MO81_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019A30u)

/** Alias (User Manual Name) for CAN_MO81_DATAL.
* To use register names with standard convension, please use CAN_MO81_DATAL.
*/
#define	CAN_MODATAL81	(CAN_MO81_DATAL)

/** \\brief  1A20, Message Object  Function Control Register */
#define CAN_MO81_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019A20u)

/** Alias (User Manual Name) for CAN_MO81_FCR.
* To use register names with standard convension, please use CAN_MO81_FCR.
*/
#define	CAN_MOFCR81	(CAN_MO81_FCR)

/** \\brief  1A24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO81_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019A24u)

/** Alias (User Manual Name) for CAN_MO81_FGPR.
* To use register names with standard convension, please use CAN_MO81_FGPR.
*/
#define	CAN_MOFGPR81	(CAN_MO81_FGPR)

/** \\brief  1A28, Message Object  Interrupt Pointer Register */
#define CAN_MO81_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019A28u)

/** Alias (User Manual Name) for CAN_MO81_IPR.
* To use register names with standard convension, please use CAN_MO81_IPR.
*/
#define	CAN_MOIPR81	(CAN_MO81_IPR)

/** \\brief  1A3C, Message Object  Control Register */
#define CAN_MO81_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019A3Cu)

/** Alias (User Manual Name) for CAN_MO81_STAT.
* To use register names with standard convension, please use CAN_MO81_STAT.
*/
#define	CAN_MOSTAT81	(CAN_MO81_STAT)

/** \\brief  1A4C, Message Object  Acceptance Mask Register */
#define CAN_MO82_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019A4Cu)

/** Alias (User Manual Name) for CAN_MO82_AMR.
* To use register names with standard convension, please use CAN_MO82_AMR.
*/
#define	CAN_MOAMR82	(CAN_MO82_AMR)

/** \\brief  1A58, Message Object  Arbitration Register */
#define CAN_MO82_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019A58u)

/** Alias (User Manual Name) for CAN_MO82_AR.
* To use register names with standard convension, please use CAN_MO82_AR.
*/
#define	CAN_MOAR82	(CAN_MO82_AR)

/** \\brief  1A5C, Message Object  Control Register */
#define CAN_MO82_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019A5Cu)

/** Alias (User Manual Name) for CAN_MO82_CTR.
* To use register names with standard convension, please use CAN_MO82_CTR.
*/
#define	CAN_MOCTR82	(CAN_MO82_CTR)

/** \\brief  1A54, Message Object  Data Register High */
#define CAN_MO82_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019A54u)

/** Alias (User Manual Name) for CAN_MO82_DATAH.
* To use register names with standard convension, please use CAN_MO82_DATAH.
*/
#define	CAN_MODATAH82	(CAN_MO82_DATAH)

/** \\brief  1A50, Message Object  Data Register Low */
#define CAN_MO82_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019A50u)

/** Alias (User Manual Name) for CAN_MO82_DATAL.
* To use register names with standard convension, please use CAN_MO82_DATAL.
*/
#define	CAN_MODATAL82	(CAN_MO82_DATAL)

/** \\brief  1A40, Message Object  Function Control Register */
#define CAN_MO82_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019A40u)

/** Alias (User Manual Name) for CAN_MO82_FCR.
* To use register names with standard convension, please use CAN_MO82_FCR.
*/
#define	CAN_MOFCR82	(CAN_MO82_FCR)

/** \\brief  1A44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO82_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019A44u)

/** Alias (User Manual Name) for CAN_MO82_FGPR.
* To use register names with standard convension, please use CAN_MO82_FGPR.
*/
#define	CAN_MOFGPR82	(CAN_MO82_FGPR)

/** \\brief  1A48, Message Object  Interrupt Pointer Register */
#define CAN_MO82_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019A48u)

/** Alias (User Manual Name) for CAN_MO82_IPR.
* To use register names with standard convension, please use CAN_MO82_IPR.
*/
#define	CAN_MOIPR82	(CAN_MO82_IPR)

/** \\brief  1A5C, Message Object  Control Register */
#define CAN_MO82_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019A5Cu)

/** Alias (User Manual Name) for CAN_MO82_STAT.
* To use register names with standard convension, please use CAN_MO82_STAT.
*/
#define	CAN_MOSTAT82	(CAN_MO82_STAT)

/** \\brief  1A6C, Message Object  Acceptance Mask Register */
#define CAN_MO83_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019A6Cu)

/** Alias (User Manual Name) for CAN_MO83_AMR.
* To use register names with standard convension, please use CAN_MO83_AMR.
*/
#define	CAN_MOAMR83	(CAN_MO83_AMR)

/** \\brief  1A78, Message Object  Arbitration Register */
#define CAN_MO83_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019A78u)

/** Alias (User Manual Name) for CAN_MO83_AR.
* To use register names with standard convension, please use CAN_MO83_AR.
*/
#define	CAN_MOAR83	(CAN_MO83_AR)

/** \\brief  1A7C, Message Object  Control Register */
#define CAN_MO83_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019A7Cu)

/** Alias (User Manual Name) for CAN_MO83_CTR.
* To use register names with standard convension, please use CAN_MO83_CTR.
*/
#define	CAN_MOCTR83	(CAN_MO83_CTR)

/** \\brief  1A74, Message Object  Data Register High */
#define CAN_MO83_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019A74u)

/** Alias (User Manual Name) for CAN_MO83_DATAH.
* To use register names with standard convension, please use CAN_MO83_DATAH.
*/
#define	CAN_MODATAH83	(CAN_MO83_DATAH)

/** \\brief  1A70, Message Object  Data Register Low */
#define CAN_MO83_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019A70u)

/** Alias (User Manual Name) for CAN_MO83_DATAL.
* To use register names with standard convension, please use CAN_MO83_DATAL.
*/
#define	CAN_MODATAL83	(CAN_MO83_DATAL)

/** \\brief  1A60, Message Object  Function Control Register */
#define CAN_MO83_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019A60u)

/** Alias (User Manual Name) for CAN_MO83_FCR.
* To use register names with standard convension, please use CAN_MO83_FCR.
*/
#define	CAN_MOFCR83	(CAN_MO83_FCR)

/** \\brief  1A64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO83_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019A64u)

/** Alias (User Manual Name) for CAN_MO83_FGPR.
* To use register names with standard convension, please use CAN_MO83_FGPR.
*/
#define	CAN_MOFGPR83	(CAN_MO83_FGPR)

/** \\brief  1A68, Message Object  Interrupt Pointer Register */
#define CAN_MO83_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019A68u)

/** Alias (User Manual Name) for CAN_MO83_IPR.
* To use register names with standard convension, please use CAN_MO83_IPR.
*/
#define	CAN_MOIPR83	(CAN_MO83_IPR)

/** \\brief  1A7C, Message Object  Control Register */
#define CAN_MO83_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019A7Cu)

/** Alias (User Manual Name) for CAN_MO83_STAT.
* To use register names with standard convension, please use CAN_MO83_STAT.
*/
#define	CAN_MOSTAT83	(CAN_MO83_STAT)

/** \\brief  1A8C, Message Object  Acceptance Mask Register */
#define CAN_MO84_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019A8Cu)

/** Alias (User Manual Name) for CAN_MO84_AMR.
* To use register names with standard convension, please use CAN_MO84_AMR.
*/
#define	CAN_MOAMR84	(CAN_MO84_AMR)

/** \\brief  1A98, Message Object  Arbitration Register */
#define CAN_MO84_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019A98u)

/** Alias (User Manual Name) for CAN_MO84_AR.
* To use register names with standard convension, please use CAN_MO84_AR.
*/
#define	CAN_MOAR84	(CAN_MO84_AR)

/** \\brief  1A9C, Message Object  Control Register */
#define CAN_MO84_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019A9Cu)

/** Alias (User Manual Name) for CAN_MO84_CTR.
* To use register names with standard convension, please use CAN_MO84_CTR.
*/
#define	CAN_MOCTR84	(CAN_MO84_CTR)

/** \\brief  1A94, Message Object  Data Register High */
#define CAN_MO84_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019A94u)

/** Alias (User Manual Name) for CAN_MO84_DATAH.
* To use register names with standard convension, please use CAN_MO84_DATAH.
*/
#define	CAN_MODATAH84	(CAN_MO84_DATAH)

/** \\brief  1A90, Message Object  Data Register Low */
#define CAN_MO84_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019A90u)

/** Alias (User Manual Name) for CAN_MO84_DATAL.
* To use register names with standard convension, please use CAN_MO84_DATAL.
*/
#define	CAN_MODATAL84	(CAN_MO84_DATAL)

/** \\brief  1A80, Message Object  Function Control Register */
#define CAN_MO84_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019A80u)

/** Alias (User Manual Name) for CAN_MO84_FCR.
* To use register names with standard convension, please use CAN_MO84_FCR.
*/
#define	CAN_MOFCR84	(CAN_MO84_FCR)

/** \\brief  1A84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO84_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019A84u)

/** Alias (User Manual Name) for CAN_MO84_FGPR.
* To use register names with standard convension, please use CAN_MO84_FGPR.
*/
#define	CAN_MOFGPR84	(CAN_MO84_FGPR)

/** \\brief  1A88, Message Object  Interrupt Pointer Register */
#define CAN_MO84_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019A88u)

/** Alias (User Manual Name) for CAN_MO84_IPR.
* To use register names with standard convension, please use CAN_MO84_IPR.
*/
#define	CAN_MOIPR84	(CAN_MO84_IPR)

/** \\brief  1A9C, Message Object  Control Register */
#define CAN_MO84_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019A9Cu)

/** Alias (User Manual Name) for CAN_MO84_STAT.
* To use register names with standard convension, please use CAN_MO84_STAT.
*/
#define	CAN_MOSTAT84	(CAN_MO84_STAT)

/** \\brief  1AAC, Message Object  Acceptance Mask Register */
#define CAN_MO85_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019AACu)

/** Alias (User Manual Name) for CAN_MO85_AMR.
* To use register names with standard convension, please use CAN_MO85_AMR.
*/
#define	CAN_MOAMR85	(CAN_MO85_AMR)

/** \\brief  1AB8, Message Object  Arbitration Register */
#define CAN_MO85_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019AB8u)

/** Alias (User Manual Name) for CAN_MO85_AR.
* To use register names with standard convension, please use CAN_MO85_AR.
*/
#define	CAN_MOAR85	(CAN_MO85_AR)

/** \\brief  1ABC, Message Object  Control Register */
#define CAN_MO85_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019ABCu)

/** Alias (User Manual Name) for CAN_MO85_CTR.
* To use register names with standard convension, please use CAN_MO85_CTR.
*/
#define	CAN_MOCTR85	(CAN_MO85_CTR)

/** \\brief  1AB4, Message Object  Data Register High */
#define CAN_MO85_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019AB4u)

/** Alias (User Manual Name) for CAN_MO85_DATAH.
* To use register names with standard convension, please use CAN_MO85_DATAH.
*/
#define	CAN_MODATAH85	(CAN_MO85_DATAH)

/** \\brief  1AB0, Message Object  Data Register Low */
#define CAN_MO85_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019AB0u)

/** Alias (User Manual Name) for CAN_MO85_DATAL.
* To use register names with standard convension, please use CAN_MO85_DATAL.
*/
#define	CAN_MODATAL85	(CAN_MO85_DATAL)

/** \\brief  1AA0, Message Object  Function Control Register */
#define CAN_MO85_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019AA0u)

/** Alias (User Manual Name) for CAN_MO85_FCR.
* To use register names with standard convension, please use CAN_MO85_FCR.
*/
#define	CAN_MOFCR85	(CAN_MO85_FCR)

/** \\brief  1AA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO85_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019AA4u)

/** Alias (User Manual Name) for CAN_MO85_FGPR.
* To use register names with standard convension, please use CAN_MO85_FGPR.
*/
#define	CAN_MOFGPR85	(CAN_MO85_FGPR)

/** \\brief  1AA8, Message Object  Interrupt Pointer Register */
#define CAN_MO85_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019AA8u)

/** Alias (User Manual Name) for CAN_MO85_IPR.
* To use register names with standard convension, please use CAN_MO85_IPR.
*/
#define	CAN_MOIPR85	(CAN_MO85_IPR)

/** \\brief  1ABC, Message Object  Control Register */
#define CAN_MO85_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019ABCu)

/** Alias (User Manual Name) for CAN_MO85_STAT.
* To use register names with standard convension, please use CAN_MO85_STAT.
*/
#define	CAN_MOSTAT85	(CAN_MO85_STAT)

/** \\brief  1ACC, Message Object  Acceptance Mask Register */
#define CAN_MO86_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019ACCu)

/** Alias (User Manual Name) for CAN_MO86_AMR.
* To use register names with standard convension, please use CAN_MO86_AMR.
*/
#define	CAN_MOAMR86	(CAN_MO86_AMR)

/** \\brief  1AD8, Message Object  Arbitration Register */
#define CAN_MO86_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019AD8u)

/** Alias (User Manual Name) for CAN_MO86_AR.
* To use register names with standard convension, please use CAN_MO86_AR.
*/
#define	CAN_MOAR86	(CAN_MO86_AR)

/** \\brief  1ADC, Message Object  Control Register */
#define CAN_MO86_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019ADCu)

/** Alias (User Manual Name) for CAN_MO86_CTR.
* To use register names with standard convension, please use CAN_MO86_CTR.
*/
#define	CAN_MOCTR86	(CAN_MO86_CTR)

/** \\brief  1AD4, Message Object  Data Register High */
#define CAN_MO86_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019AD4u)

/** Alias (User Manual Name) for CAN_MO86_DATAH.
* To use register names with standard convension, please use CAN_MO86_DATAH.
*/
#define	CAN_MODATAH86	(CAN_MO86_DATAH)

/** \\brief  1AD0, Message Object  Data Register Low */
#define CAN_MO86_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019AD0u)

/** Alias (User Manual Name) for CAN_MO86_DATAL.
* To use register names with standard convension, please use CAN_MO86_DATAL.
*/
#define	CAN_MODATAL86	(CAN_MO86_DATAL)

/** \\brief  1AC0, Message Object  Function Control Register */
#define CAN_MO86_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019AC0u)

/** Alias (User Manual Name) for CAN_MO86_FCR.
* To use register names with standard convension, please use CAN_MO86_FCR.
*/
#define	CAN_MOFCR86	(CAN_MO86_FCR)

/** \\brief  1AC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO86_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019AC4u)

/** Alias (User Manual Name) for CAN_MO86_FGPR.
* To use register names with standard convension, please use CAN_MO86_FGPR.
*/
#define	CAN_MOFGPR86	(CAN_MO86_FGPR)

/** \\brief  1AC8, Message Object  Interrupt Pointer Register */
#define CAN_MO86_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019AC8u)

/** Alias (User Manual Name) for CAN_MO86_IPR.
* To use register names with standard convension, please use CAN_MO86_IPR.
*/
#define	CAN_MOIPR86	(CAN_MO86_IPR)

/** \\brief  1ADC, Message Object  Control Register */
#define CAN_MO86_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019ADCu)

/** Alias (User Manual Name) for CAN_MO86_STAT.
* To use register names with standard convension, please use CAN_MO86_STAT.
*/
#define	CAN_MOSTAT86	(CAN_MO86_STAT)

/** \\brief  1AEC, Message Object  Acceptance Mask Register */
#define CAN_MO87_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019AECu)

/** Alias (User Manual Name) for CAN_MO87_AMR.
* To use register names with standard convension, please use CAN_MO87_AMR.
*/
#define	CAN_MOAMR87	(CAN_MO87_AMR)

/** \\brief  1AF8, Message Object  Arbitration Register */
#define CAN_MO87_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019AF8u)

/** Alias (User Manual Name) for CAN_MO87_AR.
* To use register names with standard convension, please use CAN_MO87_AR.
*/
#define	CAN_MOAR87	(CAN_MO87_AR)

/** \\brief  1AFC, Message Object  Control Register */
#define CAN_MO87_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019AFCu)

/** Alias (User Manual Name) for CAN_MO87_CTR.
* To use register names with standard convension, please use CAN_MO87_CTR.
*/
#define	CAN_MOCTR87	(CAN_MO87_CTR)

/** \\brief  1AF4, Message Object  Data Register High */
#define CAN_MO87_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019AF4u)

/** Alias (User Manual Name) for CAN_MO87_DATAH.
* To use register names with standard convension, please use CAN_MO87_DATAH.
*/
#define	CAN_MODATAH87	(CAN_MO87_DATAH)

/** \\brief  1AF0, Message Object  Data Register Low */
#define CAN_MO87_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019AF0u)

/** Alias (User Manual Name) for CAN_MO87_DATAL.
* To use register names with standard convension, please use CAN_MO87_DATAL.
*/
#define	CAN_MODATAL87	(CAN_MO87_DATAL)

/** \\brief  1AE0, Message Object  Function Control Register */
#define CAN_MO87_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019AE0u)

/** Alias (User Manual Name) for CAN_MO87_FCR.
* To use register names with standard convension, please use CAN_MO87_FCR.
*/
#define	CAN_MOFCR87	(CAN_MO87_FCR)

/** \\brief  1AE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO87_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019AE4u)

/** Alias (User Manual Name) for CAN_MO87_FGPR.
* To use register names with standard convension, please use CAN_MO87_FGPR.
*/
#define	CAN_MOFGPR87	(CAN_MO87_FGPR)

/** \\brief  1AE8, Message Object  Interrupt Pointer Register */
#define CAN_MO87_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019AE8u)

/** Alias (User Manual Name) for CAN_MO87_IPR.
* To use register names with standard convension, please use CAN_MO87_IPR.
*/
#define	CAN_MOIPR87	(CAN_MO87_IPR)

/** \\brief  1AFC, Message Object  Control Register */
#define CAN_MO87_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019AFCu)

/** Alias (User Manual Name) for CAN_MO87_STAT.
* To use register names with standard convension, please use CAN_MO87_STAT.
*/
#define	CAN_MOSTAT87	(CAN_MO87_STAT)

/** \\brief  1B0C, Message Object  Acceptance Mask Register */
#define CAN_MO88_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019B0Cu)

/** Alias (User Manual Name) for CAN_MO88_AMR.
* To use register names with standard convension, please use CAN_MO88_AMR.
*/
#define	CAN_MOAMR88	(CAN_MO88_AMR)

/** \\brief  1B18, Message Object  Arbitration Register */
#define CAN_MO88_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019B18u)

/** Alias (User Manual Name) for CAN_MO88_AR.
* To use register names with standard convension, please use CAN_MO88_AR.
*/
#define	CAN_MOAR88	(CAN_MO88_AR)

/** \\brief  1B1C, Message Object  Control Register */
#define CAN_MO88_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019B1Cu)

/** Alias (User Manual Name) for CAN_MO88_CTR.
* To use register names with standard convension, please use CAN_MO88_CTR.
*/
#define	CAN_MOCTR88	(CAN_MO88_CTR)

/** \\brief  1B14, Message Object  Data Register High */
#define CAN_MO88_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019B14u)

/** Alias (User Manual Name) for CAN_MO88_DATAH.
* To use register names with standard convension, please use CAN_MO88_DATAH.
*/
#define	CAN_MODATAH88	(CAN_MO88_DATAH)

/** \\brief  1B10, Message Object  Data Register Low */
#define CAN_MO88_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019B10u)

/** Alias (User Manual Name) for CAN_MO88_DATAL.
* To use register names with standard convension, please use CAN_MO88_DATAL.
*/
#define	CAN_MODATAL88	(CAN_MO88_DATAL)

/** \\brief  1B00, Message Object  Function Control Register */
#define CAN_MO88_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019B00u)

/** Alias (User Manual Name) for CAN_MO88_FCR.
* To use register names with standard convension, please use CAN_MO88_FCR.
*/
#define	CAN_MOFCR88	(CAN_MO88_FCR)

/** \\brief  1B04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO88_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019B04u)

/** Alias (User Manual Name) for CAN_MO88_FGPR.
* To use register names with standard convension, please use CAN_MO88_FGPR.
*/
#define	CAN_MOFGPR88	(CAN_MO88_FGPR)

/** \\brief  1B08, Message Object  Interrupt Pointer Register */
#define CAN_MO88_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019B08u)

/** Alias (User Manual Name) for CAN_MO88_IPR.
* To use register names with standard convension, please use CAN_MO88_IPR.
*/
#define	CAN_MOIPR88	(CAN_MO88_IPR)

/** \\brief  1B1C, Message Object  Control Register */
#define CAN_MO88_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019B1Cu)

/** Alias (User Manual Name) for CAN_MO88_STAT.
* To use register names with standard convension, please use CAN_MO88_STAT.
*/
#define	CAN_MOSTAT88	(CAN_MO88_STAT)

/** \\brief  1B2C, Message Object  Acceptance Mask Register */
#define CAN_MO89_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019B2Cu)

/** Alias (User Manual Name) for CAN_MO89_AMR.
* To use register names with standard convension, please use CAN_MO89_AMR.
*/
#define	CAN_MOAMR89	(CAN_MO89_AMR)

/** \\brief  1B38, Message Object  Arbitration Register */
#define CAN_MO89_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019B38u)

/** Alias (User Manual Name) for CAN_MO89_AR.
* To use register names with standard convension, please use CAN_MO89_AR.
*/
#define	CAN_MOAR89	(CAN_MO89_AR)

/** \\brief  1B3C, Message Object  Control Register */
#define CAN_MO89_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019B3Cu)

/** Alias (User Manual Name) for CAN_MO89_CTR.
* To use register names with standard convension, please use CAN_MO89_CTR.
*/
#define	CAN_MOCTR89	(CAN_MO89_CTR)

/** \\brief  1B34, Message Object  Data Register High */
#define CAN_MO89_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019B34u)

/** Alias (User Manual Name) for CAN_MO89_DATAH.
* To use register names with standard convension, please use CAN_MO89_DATAH.
*/
#define	CAN_MODATAH89	(CAN_MO89_DATAH)

/** \\brief  1B30, Message Object  Data Register Low */
#define CAN_MO89_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019B30u)

/** Alias (User Manual Name) for CAN_MO89_DATAL.
* To use register names with standard convension, please use CAN_MO89_DATAL.
*/
#define	CAN_MODATAL89	(CAN_MO89_DATAL)

/** \\brief  1B20, Message Object  Function Control Register */
#define CAN_MO89_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019B20u)

/** Alias (User Manual Name) for CAN_MO89_FCR.
* To use register names with standard convension, please use CAN_MO89_FCR.
*/
#define	CAN_MOFCR89	(CAN_MO89_FCR)

/** \\brief  1B24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO89_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019B24u)

/** Alias (User Manual Name) for CAN_MO89_FGPR.
* To use register names with standard convension, please use CAN_MO89_FGPR.
*/
#define	CAN_MOFGPR89	(CAN_MO89_FGPR)

/** \\brief  1B28, Message Object  Interrupt Pointer Register */
#define CAN_MO89_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019B28u)

/** Alias (User Manual Name) for CAN_MO89_IPR.
* To use register names with standard convension, please use CAN_MO89_IPR.
*/
#define	CAN_MOIPR89	(CAN_MO89_IPR)

/** \\brief  1B3C, Message Object  Control Register */
#define CAN_MO89_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019B3Cu)

/** Alias (User Manual Name) for CAN_MO89_STAT.
* To use register names with standard convension, please use CAN_MO89_STAT.
*/
#define	CAN_MOSTAT89	(CAN_MO89_STAT)

/** \\brief  110C, Message Object  Acceptance Mask Register */
#define CAN_MO8_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001910Cu)

/** Alias (User Manual Name) for CAN_MO8_AMR.
* To use register names with standard convension, please use CAN_MO8_AMR.
*/
#define	CAN_MOAMR8	(CAN_MO8_AMR)

/** \\brief  1118, Message Object  Arbitration Register */
#define CAN_MO8_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019118u)

/** Alias (User Manual Name) for CAN_MO8_AR.
* To use register names with standard convension, please use CAN_MO8_AR.
*/
#define	CAN_MOAR8	(CAN_MO8_AR)

/** \\brief  111C, Message Object  Control Register */
#define CAN_MO8_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001911Cu)

/** Alias (User Manual Name) for CAN_MO8_CTR.
* To use register names with standard convension, please use CAN_MO8_CTR.
*/
#define	CAN_MOCTR8	(CAN_MO8_CTR)

/** \\brief  1114, Message Object  Data Register High */
#define CAN_MO8_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019114u)

/** Alias (User Manual Name) for CAN_MO8_DATAH.
* To use register names with standard convension, please use CAN_MO8_DATAH.
*/
#define	CAN_MODATAH8	(CAN_MO8_DATAH)

/** \\brief  1110, Message Object  Data Register Low */
#define CAN_MO8_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019110u)

/** Alias (User Manual Name) for CAN_MO8_DATAL.
* To use register names with standard convension, please use CAN_MO8_DATAL.
*/
#define	CAN_MODATAL8	(CAN_MO8_DATAL)

/** \\brief  1100, Message Object  Function Control Register */
#define CAN_MO8_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019100u)

/** Alias (User Manual Name) for CAN_MO8_FCR.
* To use register names with standard convension, please use CAN_MO8_FCR.
*/
#define	CAN_MOFCR8	(CAN_MO8_FCR)

/** \\brief  1104, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO8_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019104u)

/** Alias (User Manual Name) for CAN_MO8_FGPR.
* To use register names with standard convension, please use CAN_MO8_FGPR.
*/
#define	CAN_MOFGPR8	(CAN_MO8_FGPR)

/** \\brief  1108, Message Object  Interrupt Pointer Register */
#define CAN_MO8_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019108u)

/** Alias (User Manual Name) for CAN_MO8_IPR.
* To use register names with standard convension, please use CAN_MO8_IPR.
*/
#define	CAN_MOIPR8	(CAN_MO8_IPR)

/** \\brief  111C, Message Object  Control Register */
#define CAN_MO8_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001911Cu)

/** Alias (User Manual Name) for CAN_MO8_STAT.
* To use register names with standard convension, please use CAN_MO8_STAT.
*/
#define	CAN_MOSTAT8	(CAN_MO8_STAT)

/** \\brief  1B4C, Message Object  Acceptance Mask Register */
#define CAN_MO90_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019B4Cu)

/** Alias (User Manual Name) for CAN_MO90_AMR.
* To use register names with standard convension, please use CAN_MO90_AMR.
*/
#define	CAN_MOAMR90	(CAN_MO90_AMR)

/** \\brief  1B58, Message Object  Arbitration Register */
#define CAN_MO90_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019B58u)

/** Alias (User Manual Name) for CAN_MO90_AR.
* To use register names with standard convension, please use CAN_MO90_AR.
*/
#define	CAN_MOAR90	(CAN_MO90_AR)

/** \\brief  1B5C, Message Object  Control Register */
#define CAN_MO90_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019B5Cu)

/** Alias (User Manual Name) for CAN_MO90_CTR.
* To use register names with standard convension, please use CAN_MO90_CTR.
*/
#define	CAN_MOCTR90	(CAN_MO90_CTR)

/** \\brief  1B54, Message Object  Data Register High */
#define CAN_MO90_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019B54u)

/** Alias (User Manual Name) for CAN_MO90_DATAH.
* To use register names with standard convension, please use CAN_MO90_DATAH.
*/
#define	CAN_MODATAH90	(CAN_MO90_DATAH)

/** \\brief  1B50, Message Object  Data Register Low */
#define CAN_MO90_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019B50u)

/** Alias (User Manual Name) for CAN_MO90_DATAL.
* To use register names with standard convension, please use CAN_MO90_DATAL.
*/
#define	CAN_MODATAL90	(CAN_MO90_DATAL)

/** \\brief  1B40, Message Object  Function Control Register */
#define CAN_MO90_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019B40u)

/** Alias (User Manual Name) for CAN_MO90_FCR.
* To use register names with standard convension, please use CAN_MO90_FCR.
*/
#define	CAN_MOFCR90	(CAN_MO90_FCR)

/** \\brief  1B44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO90_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019B44u)

/** Alias (User Manual Name) for CAN_MO90_FGPR.
* To use register names with standard convension, please use CAN_MO90_FGPR.
*/
#define	CAN_MOFGPR90	(CAN_MO90_FGPR)

/** \\brief  1B48, Message Object  Interrupt Pointer Register */
#define CAN_MO90_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019B48u)

/** Alias (User Manual Name) for CAN_MO90_IPR.
* To use register names with standard convension, please use CAN_MO90_IPR.
*/
#define	CAN_MOIPR90	(CAN_MO90_IPR)

/** \\brief  1B5C, Message Object  Control Register */
#define CAN_MO90_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019B5Cu)

/** Alias (User Manual Name) for CAN_MO90_STAT.
* To use register names with standard convension, please use CAN_MO90_STAT.
*/
#define	CAN_MOSTAT90	(CAN_MO90_STAT)

/** \\brief  1B6C, Message Object  Acceptance Mask Register */
#define CAN_MO91_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019B6Cu)

/** Alias (User Manual Name) for CAN_MO91_AMR.
* To use register names with standard convension, please use CAN_MO91_AMR.
*/
#define	CAN_MOAMR91	(CAN_MO91_AMR)

/** \\brief  1B78, Message Object  Arbitration Register */
#define CAN_MO91_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019B78u)

/** Alias (User Manual Name) for CAN_MO91_AR.
* To use register names with standard convension, please use CAN_MO91_AR.
*/
#define	CAN_MOAR91	(CAN_MO91_AR)

/** \\brief  1B7C, Message Object  Control Register */
#define CAN_MO91_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019B7Cu)

/** Alias (User Manual Name) for CAN_MO91_CTR.
* To use register names with standard convension, please use CAN_MO91_CTR.
*/
#define	CAN_MOCTR91	(CAN_MO91_CTR)

/** \\brief  1B74, Message Object  Data Register High */
#define CAN_MO91_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019B74u)

/** Alias (User Manual Name) for CAN_MO91_DATAH.
* To use register names with standard convension, please use CAN_MO91_DATAH.
*/
#define	CAN_MODATAH91	(CAN_MO91_DATAH)

/** \\brief  1B70, Message Object  Data Register Low */
#define CAN_MO91_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019B70u)

/** Alias (User Manual Name) for CAN_MO91_DATAL.
* To use register names with standard convension, please use CAN_MO91_DATAL.
*/
#define	CAN_MODATAL91	(CAN_MO91_DATAL)

/** \\brief  1B60, Message Object  Function Control Register */
#define CAN_MO91_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019B60u)

/** Alias (User Manual Name) for CAN_MO91_FCR.
* To use register names with standard convension, please use CAN_MO91_FCR.
*/
#define	CAN_MOFCR91	(CAN_MO91_FCR)

/** \\brief  1B64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO91_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019B64u)

/** Alias (User Manual Name) for CAN_MO91_FGPR.
* To use register names with standard convension, please use CAN_MO91_FGPR.
*/
#define	CAN_MOFGPR91	(CAN_MO91_FGPR)

/** \\brief  1B68, Message Object  Interrupt Pointer Register */
#define CAN_MO91_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019B68u)

/** Alias (User Manual Name) for CAN_MO91_IPR.
* To use register names with standard convension, please use CAN_MO91_IPR.
*/
#define	CAN_MOIPR91	(CAN_MO91_IPR)

/** \\brief  1B7C, Message Object  Control Register */
#define CAN_MO91_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019B7Cu)

/** Alias (User Manual Name) for CAN_MO91_STAT.
* To use register names with standard convension, please use CAN_MO91_STAT.
*/
#define	CAN_MOSTAT91	(CAN_MO91_STAT)

/** \\brief  1B8C, Message Object  Acceptance Mask Register */
#define CAN_MO92_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019B8Cu)

/** Alias (User Manual Name) for CAN_MO92_AMR.
* To use register names with standard convension, please use CAN_MO92_AMR.
*/
#define	CAN_MOAMR92	(CAN_MO92_AMR)

/** \\brief  1B98, Message Object  Arbitration Register */
#define CAN_MO92_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019B98u)

/** Alias (User Manual Name) for CAN_MO92_AR.
* To use register names with standard convension, please use CAN_MO92_AR.
*/
#define	CAN_MOAR92	(CAN_MO92_AR)

/** \\brief  1B9C, Message Object  Control Register */
#define CAN_MO92_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019B9Cu)

/** Alias (User Manual Name) for CAN_MO92_CTR.
* To use register names with standard convension, please use CAN_MO92_CTR.
*/
#define	CAN_MOCTR92	(CAN_MO92_CTR)

/** \\brief  1B94, Message Object  Data Register High */
#define CAN_MO92_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019B94u)

/** Alias (User Manual Name) for CAN_MO92_DATAH.
* To use register names with standard convension, please use CAN_MO92_DATAH.
*/
#define	CAN_MODATAH92	(CAN_MO92_DATAH)

/** \\brief  1B90, Message Object  Data Register Low */
#define CAN_MO92_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019B90u)

/** Alias (User Manual Name) for CAN_MO92_DATAL.
* To use register names with standard convension, please use CAN_MO92_DATAL.
*/
#define	CAN_MODATAL92	(CAN_MO92_DATAL)

/** \\brief  1B80, Message Object  Function Control Register */
#define CAN_MO92_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019B80u)

/** Alias (User Manual Name) for CAN_MO92_FCR.
* To use register names with standard convension, please use CAN_MO92_FCR.
*/
#define	CAN_MOFCR92	(CAN_MO92_FCR)

/** \\brief  1B84, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO92_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019B84u)

/** Alias (User Manual Name) for CAN_MO92_FGPR.
* To use register names with standard convension, please use CAN_MO92_FGPR.
*/
#define	CAN_MOFGPR92	(CAN_MO92_FGPR)

/** \\brief  1B88, Message Object  Interrupt Pointer Register */
#define CAN_MO92_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019B88u)

/** Alias (User Manual Name) for CAN_MO92_IPR.
* To use register names with standard convension, please use CAN_MO92_IPR.
*/
#define	CAN_MOIPR92	(CAN_MO92_IPR)

/** \\brief  1B9C, Message Object  Control Register */
#define CAN_MO92_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019B9Cu)

/** Alias (User Manual Name) for CAN_MO92_STAT.
* To use register names with standard convension, please use CAN_MO92_STAT.
*/
#define	CAN_MOSTAT92	(CAN_MO92_STAT)

/** \\brief  1BAC, Message Object  Acceptance Mask Register */
#define CAN_MO93_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019BACu)

/** Alias (User Manual Name) for CAN_MO93_AMR.
* To use register names with standard convension, please use CAN_MO93_AMR.
*/
#define	CAN_MOAMR93	(CAN_MO93_AMR)

/** \\brief  1BB8, Message Object  Arbitration Register */
#define CAN_MO93_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019BB8u)

/** Alias (User Manual Name) for CAN_MO93_AR.
* To use register names with standard convension, please use CAN_MO93_AR.
*/
#define	CAN_MOAR93	(CAN_MO93_AR)

/** \\brief  1BBC, Message Object  Control Register */
#define CAN_MO93_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019BBCu)

/** Alias (User Manual Name) for CAN_MO93_CTR.
* To use register names with standard convension, please use CAN_MO93_CTR.
*/
#define	CAN_MOCTR93	(CAN_MO93_CTR)

/** \\brief  1BB4, Message Object  Data Register High */
#define CAN_MO93_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019BB4u)

/** Alias (User Manual Name) for CAN_MO93_DATAH.
* To use register names with standard convension, please use CAN_MO93_DATAH.
*/
#define	CAN_MODATAH93	(CAN_MO93_DATAH)

/** \\brief  1BB0, Message Object  Data Register Low */
#define CAN_MO93_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019BB0u)

/** Alias (User Manual Name) for CAN_MO93_DATAL.
* To use register names with standard convension, please use CAN_MO93_DATAL.
*/
#define	CAN_MODATAL93	(CAN_MO93_DATAL)

/** \\brief  1BA0, Message Object  Function Control Register */
#define CAN_MO93_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019BA0u)

/** Alias (User Manual Name) for CAN_MO93_FCR.
* To use register names with standard convension, please use CAN_MO93_FCR.
*/
#define	CAN_MOFCR93	(CAN_MO93_FCR)

/** \\brief  1BA4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO93_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019BA4u)

/** Alias (User Manual Name) for CAN_MO93_FGPR.
* To use register names with standard convension, please use CAN_MO93_FGPR.
*/
#define	CAN_MOFGPR93	(CAN_MO93_FGPR)

/** \\brief  1BA8, Message Object  Interrupt Pointer Register */
#define CAN_MO93_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019BA8u)

/** Alias (User Manual Name) for CAN_MO93_IPR.
* To use register names with standard convension, please use CAN_MO93_IPR.
*/
#define	CAN_MOIPR93	(CAN_MO93_IPR)

/** \\brief  1BBC, Message Object  Control Register */
#define CAN_MO93_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019BBCu)

/** Alias (User Manual Name) for CAN_MO93_STAT.
* To use register names with standard convension, please use CAN_MO93_STAT.
*/
#define	CAN_MOSTAT93	(CAN_MO93_STAT)

/** \\brief  1BCC, Message Object  Acceptance Mask Register */
#define CAN_MO94_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019BCCu)

/** Alias (User Manual Name) for CAN_MO94_AMR.
* To use register names with standard convension, please use CAN_MO94_AMR.
*/
#define	CAN_MOAMR94	(CAN_MO94_AMR)

/** \\brief  1BD8, Message Object  Arbitration Register */
#define CAN_MO94_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019BD8u)

/** Alias (User Manual Name) for CAN_MO94_AR.
* To use register names with standard convension, please use CAN_MO94_AR.
*/
#define	CAN_MOAR94	(CAN_MO94_AR)

/** \\brief  1BDC, Message Object  Control Register */
#define CAN_MO94_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019BDCu)

/** Alias (User Manual Name) for CAN_MO94_CTR.
* To use register names with standard convension, please use CAN_MO94_CTR.
*/
#define	CAN_MOCTR94	(CAN_MO94_CTR)

/** \\brief  1BD4, Message Object  Data Register High */
#define CAN_MO94_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019BD4u)

/** Alias (User Manual Name) for CAN_MO94_DATAH.
* To use register names with standard convension, please use CAN_MO94_DATAH.
*/
#define	CAN_MODATAH94	(CAN_MO94_DATAH)

/** \\brief  1BD0, Message Object  Data Register Low */
#define CAN_MO94_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019BD0u)

/** Alias (User Manual Name) for CAN_MO94_DATAL.
* To use register names with standard convension, please use CAN_MO94_DATAL.
*/
#define	CAN_MODATAL94	(CAN_MO94_DATAL)

/** \\brief  1BC0, Message Object  Function Control Register */
#define CAN_MO94_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019BC0u)

/** Alias (User Manual Name) for CAN_MO94_FCR.
* To use register names with standard convension, please use CAN_MO94_FCR.
*/
#define	CAN_MOFCR94	(CAN_MO94_FCR)

/** \\brief  1BC4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO94_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019BC4u)

/** Alias (User Manual Name) for CAN_MO94_FGPR.
* To use register names with standard convension, please use CAN_MO94_FGPR.
*/
#define	CAN_MOFGPR94	(CAN_MO94_FGPR)

/** \\brief  1BC8, Message Object  Interrupt Pointer Register */
#define CAN_MO94_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019BC8u)

/** Alias (User Manual Name) for CAN_MO94_IPR.
* To use register names with standard convension, please use CAN_MO94_IPR.
*/
#define	CAN_MOIPR94	(CAN_MO94_IPR)

/** \\brief  1BDC, Message Object  Control Register */
#define CAN_MO94_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019BDCu)

/** Alias (User Manual Name) for CAN_MO94_STAT.
* To use register names with standard convension, please use CAN_MO94_STAT.
*/
#define	CAN_MOSTAT94	(CAN_MO94_STAT)

/** \\brief  1BEC, Message Object  Acceptance Mask Register */
#define CAN_MO95_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019BECu)

/** Alias (User Manual Name) for CAN_MO95_AMR.
* To use register names with standard convension, please use CAN_MO95_AMR.
*/
#define	CAN_MOAMR95	(CAN_MO95_AMR)

/** \\brief  1BF8, Message Object  Arbitration Register */
#define CAN_MO95_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019BF8u)

/** Alias (User Manual Name) for CAN_MO95_AR.
* To use register names with standard convension, please use CAN_MO95_AR.
*/
#define	CAN_MOAR95	(CAN_MO95_AR)

/** \\brief  1BFC, Message Object  Control Register */
#define CAN_MO95_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019BFCu)

/** Alias (User Manual Name) for CAN_MO95_CTR.
* To use register names with standard convension, please use CAN_MO95_CTR.
*/
#define	CAN_MOCTR95	(CAN_MO95_CTR)

/** \\brief  1BF4, Message Object  Data Register High */
#define CAN_MO95_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019BF4u)

/** Alias (User Manual Name) for CAN_MO95_DATAH.
* To use register names with standard convension, please use CAN_MO95_DATAH.
*/
#define	CAN_MODATAH95	(CAN_MO95_DATAH)

/** \\brief  1BF0, Message Object  Data Register Low */
#define CAN_MO95_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019BF0u)

/** Alias (User Manual Name) for CAN_MO95_DATAL.
* To use register names with standard convension, please use CAN_MO95_DATAL.
*/
#define	CAN_MODATAL95	(CAN_MO95_DATAL)

/** \\brief  1BE0, Message Object  Function Control Register */
#define CAN_MO95_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019BE0u)

/** Alias (User Manual Name) for CAN_MO95_FCR.
* To use register names with standard convension, please use CAN_MO95_FCR.
*/
#define	CAN_MOFCR95	(CAN_MO95_FCR)

/** \\brief  1BE4, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO95_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019BE4u)

/** Alias (User Manual Name) for CAN_MO95_FGPR.
* To use register names with standard convension, please use CAN_MO95_FGPR.
*/
#define	CAN_MOFGPR95	(CAN_MO95_FGPR)

/** \\brief  1BE8, Message Object  Interrupt Pointer Register */
#define CAN_MO95_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019BE8u)

/** Alias (User Manual Name) for CAN_MO95_IPR.
* To use register names with standard convension, please use CAN_MO95_IPR.
*/
#define	CAN_MOIPR95	(CAN_MO95_IPR)

/** \\brief  1BFC, Message Object  Control Register */
#define CAN_MO95_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019BFCu)

/** Alias (User Manual Name) for CAN_MO95_STAT.
* To use register names with standard convension, please use CAN_MO95_STAT.
*/
#define	CAN_MOSTAT95	(CAN_MO95_STAT)

/** \\brief  1C0C, Message Object  Acceptance Mask Register */
#define CAN_MO96_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019C0Cu)

/** Alias (User Manual Name) for CAN_MO96_AMR.
* To use register names with standard convension, please use CAN_MO96_AMR.
*/
#define	CAN_MOAMR96	(CAN_MO96_AMR)

/** \\brief  1C18, Message Object  Arbitration Register */
#define CAN_MO96_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019C18u)

/** Alias (User Manual Name) for CAN_MO96_AR.
* To use register names with standard convension, please use CAN_MO96_AR.
*/
#define	CAN_MOAR96	(CAN_MO96_AR)

/** \\brief  1C1C, Message Object  Control Register */
#define CAN_MO96_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019C1Cu)

/** Alias (User Manual Name) for CAN_MO96_CTR.
* To use register names with standard convension, please use CAN_MO96_CTR.
*/
#define	CAN_MOCTR96	(CAN_MO96_CTR)

/** \\brief  1C14, Message Object  Data Register High */
#define CAN_MO96_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019C14u)

/** Alias (User Manual Name) for CAN_MO96_DATAH.
* To use register names with standard convension, please use CAN_MO96_DATAH.
*/
#define	CAN_MODATAH96	(CAN_MO96_DATAH)

/** \\brief  1C10, Message Object  Data Register Low */
#define CAN_MO96_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019C10u)

/** Alias (User Manual Name) for CAN_MO96_DATAL.
* To use register names with standard convension, please use CAN_MO96_DATAL.
*/
#define	CAN_MODATAL96	(CAN_MO96_DATAL)

/** \\brief  1C00, Message Object  Function Control Register */
#define CAN_MO96_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019C00u)

/** Alias (User Manual Name) for CAN_MO96_FCR.
* To use register names with standard convension, please use CAN_MO96_FCR.
*/
#define	CAN_MOFCR96	(CAN_MO96_FCR)

/** \\brief  1C04, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO96_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019C04u)

/** Alias (User Manual Name) for CAN_MO96_FGPR.
* To use register names with standard convension, please use CAN_MO96_FGPR.
*/
#define	CAN_MOFGPR96	(CAN_MO96_FGPR)

/** \\brief  1C08, Message Object  Interrupt Pointer Register */
#define CAN_MO96_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019C08u)

/** Alias (User Manual Name) for CAN_MO96_IPR.
* To use register names with standard convension, please use CAN_MO96_IPR.
*/
#define	CAN_MOIPR96	(CAN_MO96_IPR)

/** \\brief  1C1C, Message Object  Control Register */
#define CAN_MO96_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019C1Cu)

/** Alias (User Manual Name) for CAN_MO96_STAT.
* To use register names with standard convension, please use CAN_MO96_STAT.
*/
#define	CAN_MOSTAT96	(CAN_MO96_STAT)

/** \\brief  1C2C, Message Object  Acceptance Mask Register */
#define CAN_MO97_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019C2Cu)

/** Alias (User Manual Name) for CAN_MO97_AMR.
* To use register names with standard convension, please use CAN_MO97_AMR.
*/
#define	CAN_MOAMR97	(CAN_MO97_AMR)

/** \\brief  1C38, Message Object  Arbitration Register */
#define CAN_MO97_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019C38u)

/** Alias (User Manual Name) for CAN_MO97_AR.
* To use register names with standard convension, please use CAN_MO97_AR.
*/
#define	CAN_MOAR97	(CAN_MO97_AR)

/** \\brief  1C3C, Message Object  Control Register */
#define CAN_MO97_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019C3Cu)

/** Alias (User Manual Name) for CAN_MO97_CTR.
* To use register names with standard convension, please use CAN_MO97_CTR.
*/
#define	CAN_MOCTR97	(CAN_MO97_CTR)

/** \\brief  1C34, Message Object  Data Register High */
#define CAN_MO97_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019C34u)

/** Alias (User Manual Name) for CAN_MO97_DATAH.
* To use register names with standard convension, please use CAN_MO97_DATAH.
*/
#define	CAN_MODATAH97	(CAN_MO97_DATAH)

/** \\brief  1C30, Message Object  Data Register Low */
#define CAN_MO97_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019C30u)

/** Alias (User Manual Name) for CAN_MO97_DATAL.
* To use register names with standard convension, please use CAN_MO97_DATAL.
*/
#define	CAN_MODATAL97	(CAN_MO97_DATAL)

/** \\brief  1C20, Message Object  Function Control Register */
#define CAN_MO97_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019C20u)

/** Alias (User Manual Name) for CAN_MO97_FCR.
* To use register names with standard convension, please use CAN_MO97_FCR.
*/
#define	CAN_MOFCR97	(CAN_MO97_FCR)

/** \\brief  1C24, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO97_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019C24u)

/** Alias (User Manual Name) for CAN_MO97_FGPR.
* To use register names with standard convension, please use CAN_MO97_FGPR.
*/
#define	CAN_MOFGPR97	(CAN_MO97_FGPR)

/** \\brief  1C28, Message Object  Interrupt Pointer Register */
#define CAN_MO97_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019C28u)

/** Alias (User Manual Name) for CAN_MO97_IPR.
* To use register names with standard convension, please use CAN_MO97_IPR.
*/
#define	CAN_MOIPR97	(CAN_MO97_IPR)

/** \\brief  1C3C, Message Object  Control Register */
#define CAN_MO97_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019C3Cu)

/** Alias (User Manual Name) for CAN_MO97_STAT.
* To use register names with standard convension, please use CAN_MO97_STAT.
*/
#define	CAN_MOSTAT97	(CAN_MO97_STAT)

/** \\brief  1C4C, Message Object  Acceptance Mask Register */
#define CAN_MO98_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019C4Cu)

/** Alias (User Manual Name) for CAN_MO98_AMR.
* To use register names with standard convension, please use CAN_MO98_AMR.
*/
#define	CAN_MOAMR98	(CAN_MO98_AMR)

/** \\brief  1C58, Message Object  Arbitration Register */
#define CAN_MO98_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019C58u)

/** Alias (User Manual Name) for CAN_MO98_AR.
* To use register names with standard convension, please use CAN_MO98_AR.
*/
#define	CAN_MOAR98	(CAN_MO98_AR)

/** \\brief  1C5C, Message Object  Control Register */
#define CAN_MO98_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019C5Cu)

/** Alias (User Manual Name) for CAN_MO98_CTR.
* To use register names with standard convension, please use CAN_MO98_CTR.
*/
#define	CAN_MOCTR98	(CAN_MO98_CTR)

/** \\brief  1C54, Message Object  Data Register High */
#define CAN_MO98_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019C54u)

/** Alias (User Manual Name) for CAN_MO98_DATAH.
* To use register names with standard convension, please use CAN_MO98_DATAH.
*/
#define	CAN_MODATAH98	(CAN_MO98_DATAH)

/** \\brief  1C50, Message Object  Data Register Low */
#define CAN_MO98_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019C50u)

/** Alias (User Manual Name) for CAN_MO98_DATAL.
* To use register names with standard convension, please use CAN_MO98_DATAL.
*/
#define	CAN_MODATAL98	(CAN_MO98_DATAL)

/** \\brief  1C40, Message Object  Function Control Register */
#define CAN_MO98_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019C40u)

/** Alias (User Manual Name) for CAN_MO98_FCR.
* To use register names with standard convension, please use CAN_MO98_FCR.
*/
#define	CAN_MOFCR98	(CAN_MO98_FCR)

/** \\brief  1C44, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO98_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019C44u)

/** Alias (User Manual Name) for CAN_MO98_FGPR.
* To use register names with standard convension, please use CAN_MO98_FGPR.
*/
#define	CAN_MOFGPR98	(CAN_MO98_FGPR)

/** \\brief  1C48, Message Object  Interrupt Pointer Register */
#define CAN_MO98_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019C48u)

/** Alias (User Manual Name) for CAN_MO98_IPR.
* To use register names with standard convension, please use CAN_MO98_IPR.
*/
#define	CAN_MOIPR98	(CAN_MO98_IPR)

/** \\brief  1C5C, Message Object  Control Register */
#define CAN_MO98_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019C5Cu)

/** Alias (User Manual Name) for CAN_MO98_STAT.
* To use register names with standard convension, please use CAN_MO98_STAT.
*/
#define	CAN_MOSTAT98	(CAN_MO98_STAT)

/** \\brief  1C6C, Message Object  Acceptance Mask Register */
#define CAN_MO99_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF0019C6Cu)

/** Alias (User Manual Name) for CAN_MO99_AMR.
* To use register names with standard convension, please use CAN_MO99_AMR.
*/
#define	CAN_MOAMR99	(CAN_MO99_AMR)

/** \\brief  1C78, Message Object  Arbitration Register */
#define CAN_MO99_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019C78u)

/** Alias (User Manual Name) for CAN_MO99_AR.
* To use register names with standard convension, please use CAN_MO99_AR.
*/
#define	CAN_MOAR99	(CAN_MO99_AR)

/** \\brief  1C7C, Message Object  Control Register */
#define CAN_MO99_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF0019C7Cu)

/** Alias (User Manual Name) for CAN_MO99_CTR.
* To use register names with standard convension, please use CAN_MO99_CTR.
*/
#define	CAN_MOCTR99	(CAN_MO99_CTR)

/** \\brief  1C74, Message Object  Data Register High */
#define CAN_MO99_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019C74u)

/** Alias (User Manual Name) for CAN_MO99_DATAH.
* To use register names with standard convension, please use CAN_MO99_DATAH.
*/
#define	CAN_MODATAH99	(CAN_MO99_DATAH)

/** \\brief  1C70, Message Object  Data Register Low */
#define CAN_MO99_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019C70u)

/** Alias (User Manual Name) for CAN_MO99_DATAL.
* To use register names with standard convension, please use CAN_MO99_DATAL.
*/
#define	CAN_MODATAL99	(CAN_MO99_DATAL)

/** \\brief  1C60, Message Object  Function Control Register */
#define CAN_MO99_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019C60u)

/** Alias (User Manual Name) for CAN_MO99_FCR.
* To use register names with standard convension, please use CAN_MO99_FCR.
*/
#define	CAN_MOFCR99	(CAN_MO99_FCR)

/** \\brief  1C64, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO99_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019C64u)

/** Alias (User Manual Name) for CAN_MO99_FGPR.
* To use register names with standard convension, please use CAN_MO99_FGPR.
*/
#define	CAN_MOFGPR99	(CAN_MO99_FGPR)

/** \\brief  1C68, Message Object  Interrupt Pointer Register */
#define CAN_MO99_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019C68u)

/** Alias (User Manual Name) for CAN_MO99_IPR.
* To use register names with standard convension, please use CAN_MO99_IPR.
*/
#define	CAN_MOIPR99	(CAN_MO99_IPR)

/** \\brief  1C7C, Message Object  Control Register */
#define CAN_MO99_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF0019C7Cu)

/** Alias (User Manual Name) for CAN_MO99_STAT.
* To use register names with standard convension, please use CAN_MO99_STAT.
*/
#define	CAN_MOSTAT99	(CAN_MO99_STAT)

/** \\brief  112C, Message Object  Acceptance Mask Register */
#define CAN_MO9_AMR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AMR*)0xF001912Cu)

/** Alias (User Manual Name) for CAN_MO9_AMR.
* To use register names with standard convension, please use CAN_MO9_AMR.
*/
#define	CAN_MOAMR9	(CAN_MO9_AMR)

/** \\brief  1138, Message Object  Arbitration Register */
#define CAN_MO9_AR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_AR*)0xF0019138u)

/** Alias (User Manual Name) for CAN_MO9_AR.
* To use register names with standard convension, please use CAN_MO9_AR.
*/
#define	CAN_MOAR9	(CAN_MO9_AR)

/** \\brief  113C, Message Object  Control Register */
#define CAN_MO9_CTR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_CTR*)0xF001913Cu)

/** Alias (User Manual Name) for CAN_MO9_CTR.
* To use register names with standard convension, please use CAN_MO9_CTR.
*/
#define	CAN_MOCTR9	(CAN_MO9_CTR)

/** \\brief  1134, Message Object  Data Register High */
#define CAN_MO9_DATAH /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAH*)0xF0019134u)

/** Alias (User Manual Name) for CAN_MO9_DATAH.
* To use register names with standard convension, please use CAN_MO9_DATAH.
*/
#define	CAN_MODATAH9	(CAN_MO9_DATAH)

/** \\brief  1130, Message Object  Data Register Low */
#define CAN_MO9_DATAL /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_DATAL*)0xF0019130u)

/** Alias (User Manual Name) for CAN_MO9_DATAL.
* To use register names with standard convension, please use CAN_MO9_DATAL.
*/
#define	CAN_MODATAL9	(CAN_MO9_DATAL)

/** \\brief  1120, Message Object  Function Control Register */
#define CAN_MO9_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FCR*)0xF0019120u)

/** Alias (User Manual Name) for CAN_MO9_FCR.
* To use register names with standard convension, please use CAN_MO9_FCR.
*/
#define	CAN_MOFCR9	(CAN_MO9_FCR)

/** \\brief  1124, Message Object  FIFO/Gateway Pointer Register */
#define CAN_MO9_FGPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_FGPR*)0xF0019124u)

/** Alias (User Manual Name) for CAN_MO9_FGPR.
* To use register names with standard convension, please use CAN_MO9_FGPR.
*/
#define	CAN_MOFGPR9	(CAN_MO9_FGPR)

/** \\brief  1128, Message Object  Interrupt Pointer Register */
#define CAN_MO9_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_IPR*)0xF0019128u)

/** Alias (User Manual Name) for CAN_MO9_IPR.
* To use register names with standard convension, please use CAN_MO9_IPR.
*/
#define	CAN_MOIPR9	(CAN_MO9_IPR)

/** \\brief  113C, Message Object  Control Register */
#define CAN_MO9_STAT /*lint --e(923)*/ (*(volatile Ifx_CAN_MO_STAT*)0xF001913Cu)

/** Alias (User Manual Name) for CAN_MO9_STAT.
* To use register names with standard convension, please use CAN_MO9_STAT.
*/
#define	CAN_MOSTAT9	(CAN_MO9_STAT)

/** \\brief  180, Message Index Register */
#define CAN_MSID0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID*)0xF0018180u)

/** \\brief  184, Message Index Register */
#define CAN_MSID1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID*)0xF0018184u)

/** \\brief  188, Message Index Register */
#define CAN_MSID2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID*)0xF0018188u)

/** \\brief  18C, Message Index Register */
#define CAN_MSID3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID*)0xF001818Cu)

/** \\brief  190, Message Index Register */
#define CAN_MSID4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID*)0xF0018190u)

/** \\brief  194, Message Index Register */
#define CAN_MSID5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID*)0xF0018194u)

/** \\brief  198, Message Index Register */
#define CAN_MSID6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID*)0xF0018198u)

/** \\brief  19C, Message Index Register */
#define CAN_MSID7 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSID*)0xF001819Cu)

/** \\brief  1C0, Message Index Mask Register */
#define CAN_MSIMASK /*lint --e(923)*/ (*(volatile Ifx_CAN_MSIMASK*)0xF00181C0u)

/** \\brief  140, Message Pending Register */
#define CAN_MSPND0 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND*)0xF0018140u)

/** \\brief  144, Message Pending Register */
#define CAN_MSPND1 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND*)0xF0018144u)

/** \\brief  148, Message Pending Register */
#define CAN_MSPND2 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND*)0xF0018148u)

/** \\brief  14C, Message Pending Register */
#define CAN_MSPND3 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND*)0xF001814Cu)

/** \\brief  150, Message Pending Register */
#define CAN_MSPND4 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND*)0xF0018150u)

/** \\brief  154, Message Pending Register */
#define CAN_MSPND5 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND*)0xF0018154u)

/** \\brief  158, Message Pending Register */
#define CAN_MSPND6 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND*)0xF0018158u)

/** \\brief  15C, Message Pending Register */
#define CAN_MSPND7 /*lint --e(923)*/ (*(volatile Ifx_CAN_MSPND*)0xF001815Cu)

/** \\brief  210, Node Bit Timing Register */
#define CAN_N0_BTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR*)0xF0018210u)

/** Alias (User Manual Name) for CAN_N0_BTR.
* To use register names with standard convension, please use CAN_N0_BTR.
*/
#define	CAN_NBTR0	(CAN_N0_BTR)

/** \\brief  200, Node Control Register */
#define CAN_N0_CR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR*)0xF0018200u)

/** Alias (User Manual Name) for CAN_N0_CR.
* To use register names with standard convension, please use CAN_N0_CR.
*/
#define	CAN_NCR0	(CAN_N0_CR)

/** \\brief  214, Node Error Counter Register */
#define CAN_N0_ECNT /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT*)0xF0018214u)

/** Alias (User Manual Name) for CAN_N0_ECNT.
* To use register names with standard convension, please use CAN_N0_ECNT.
*/
#define	CAN_NECNT0	(CAN_N0_ECNT)

/** \\brief  218, Node Frame Counter Register */
#define CAN_N0_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR*)0xF0018218u)

/** Alias (User Manual Name) for CAN_N0_FCR.
* To use register names with standard convension, please use CAN_N0_FCR.
*/
#define	CAN_NFCR0	(CAN_N0_FCR)

/** \\brief  208, Node Interrupt Pointer Register */
#define CAN_N0_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR*)0xF0018208u)

/** Alias (User Manual Name) for CAN_N0_IPR.
* To use register names with standard convension, please use CAN_N0_IPR.
*/
#define	CAN_NIPR0	(CAN_N0_IPR)

/** \\brief  20C, Node Port Control Register */
#define CAN_N0_PCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR*)0xF001820Cu)

/** Alias (User Manual Name) for CAN_N0_PCR.
* To use register names with standard convension, please use CAN_N0_PCR.
*/
#define	CAN_NPCR0	(CAN_N0_PCR)

/** \\brief  204, Node Status Register */
#define CAN_N0_SR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR*)0xF0018204u)

/** Alias (User Manual Name) for CAN_N0_SR.
* To use register names with standard convension, please use CAN_N0_SR.
*/
#define	CAN_NSR0	(CAN_N0_SR)

/** \\brief  224, Node Timer A Transmit Trigger Register */
#define CAN_N0_TATTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018224u)

/** Alias (User Manual Name) for CAN_N0_TATTR.
* To use register names with standard convension, please use CAN_N0_TATTR.
*/
#define	CAN_NTATTR0	(CAN_N0_TATTR)

/** \\brief  228, Node Timer B Transmit Trigger Register */
#define CAN_N0_TBTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018228u)

/** Alias (User Manual Name) for CAN_N0_TBTTR.
* To use register names with standard convension, please use CAN_N0_TBTTR.
*/
#define	CAN_NTBTTR0	(CAN_N0_TBTTR)

/** \\brief  21C, Node Timer Clock Control Register */
#define CAN_N0_TCCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR*)0xF001821Cu)

/** Alias (User Manual Name) for CAN_N0_TCCR.
* To use register names with standard convension, please use CAN_N0_TCCR.
*/
#define	CAN_NTCCR0	(CAN_N0_TCCR)

/** \\brief  22C, Node Timer C Transmit Trigger Register */
#define CAN_N0_TCTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF001822Cu)

/** Alias (User Manual Name) for CAN_N0_TCTTR.
* To use register names with standard convension, please use CAN_N0_TCTTR.
*/
#define	CAN_NTCTTR0	(CAN_N0_TCTTR)

/** \\brief  220, Node Timer Receive Timeout Register */
#define CAN_N0_TRTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR*)0xF0018220u)

/** Alias (User Manual Name) for CAN_N0_TRTR.
* To use register names with standard convension, please use CAN_N0_TRTR.
*/
#define	CAN_NTRTR0	(CAN_N0_TRTR)

/** \\brief  310, Node Bit Timing Register */
#define CAN_N1_BTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR*)0xF0018310u)

/** Alias (User Manual Name) for CAN_N1_BTR.
* To use register names with standard convension, please use CAN_N1_BTR.
*/
#define	CAN_NBTR1	(CAN_N1_BTR)

/** \\brief  300, Node Control Register */
#define CAN_N1_CR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR*)0xF0018300u)

/** Alias (User Manual Name) for CAN_N1_CR.
* To use register names with standard convension, please use CAN_N1_CR.
*/
#define	CAN_NCR1	(CAN_N1_CR)

/** \\brief  314, Node Error Counter Register */
#define CAN_N1_ECNT /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT*)0xF0018314u)

/** Alias (User Manual Name) for CAN_N1_ECNT.
* To use register names with standard convension, please use CAN_N1_ECNT.
*/
#define	CAN_NECNT1	(CAN_N1_ECNT)

/** \\brief  318, Node Frame Counter Register */
#define CAN_N1_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR*)0xF0018318u)

/** Alias (User Manual Name) for CAN_N1_FCR.
* To use register names with standard convension, please use CAN_N1_FCR.
*/
#define	CAN_NFCR1	(CAN_N1_FCR)

/** \\brief  308, Node Interrupt Pointer Register */
#define CAN_N1_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR*)0xF0018308u)

/** Alias (User Manual Name) for CAN_N1_IPR.
* To use register names with standard convension, please use CAN_N1_IPR.
*/
#define	CAN_NIPR1	(CAN_N1_IPR)

/** \\brief  30C, Node Port Control Register */
#define CAN_N1_PCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR*)0xF001830Cu)

/** Alias (User Manual Name) for CAN_N1_PCR.
* To use register names with standard convension, please use CAN_N1_PCR.
*/
#define	CAN_NPCR1	(CAN_N1_PCR)

/** \\brief  304, Node Status Register */
#define CAN_N1_SR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR*)0xF0018304u)

/** Alias (User Manual Name) for CAN_N1_SR.
* To use register names with standard convension, please use CAN_N1_SR.
*/
#define	CAN_NSR1	(CAN_N1_SR)

/** \\brief  324, Node Timer A Transmit Trigger Register */
#define CAN_N1_TATTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018324u)

/** Alias (User Manual Name) for CAN_N1_TATTR.
* To use register names with standard convension, please use CAN_N1_TATTR.
*/
#define	CAN_NTATTR1	(CAN_N1_TATTR)

/** \\brief  328, Node Timer B Transmit Trigger Register */
#define CAN_N1_TBTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018328u)

/** Alias (User Manual Name) for CAN_N1_TBTTR.
* To use register names with standard convension, please use CAN_N1_TBTTR.
*/
#define	CAN_NTBTTR1	(CAN_N1_TBTTR)

/** \\brief  31C, Node Timer Clock Control Register */
#define CAN_N1_TCCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR*)0xF001831Cu)

/** Alias (User Manual Name) for CAN_N1_TCCR.
* To use register names with standard convension, please use CAN_N1_TCCR.
*/
#define	CAN_NTCCR1	(CAN_N1_TCCR)

/** \\brief  32C, Node Timer C Transmit Trigger Register */
#define CAN_N1_TCTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF001832Cu)

/** Alias (User Manual Name) for CAN_N1_TCTTR.
* To use register names with standard convension, please use CAN_N1_TCTTR.
*/
#define	CAN_NTCTTR1	(CAN_N1_TCTTR)

/** \\brief  320, Node Timer Receive Timeout Register */
#define CAN_N1_TRTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR*)0xF0018320u)

/** Alias (User Manual Name) for CAN_N1_TRTR.
* To use register names with standard convension, please use CAN_N1_TRTR.
*/
#define	CAN_NTRTR1	(CAN_N1_TRTR)

/** \\brief  410, Node Bit Timing Register */
#define CAN_N2_BTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR*)0xF0018410u)

/** Alias (User Manual Name) for CAN_N2_BTR.
* To use register names with standard convension, please use CAN_N2_BTR.
*/
#define	CAN_NBTR2	(CAN_N2_BTR)

/** \\brief  400, Node Control Register */
#define CAN_N2_CR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR*)0xF0018400u)

/** Alias (User Manual Name) for CAN_N2_CR.
* To use register names with standard convension, please use CAN_N2_CR.
*/
#define	CAN_NCR2	(CAN_N2_CR)

/** \\brief  414, Node Error Counter Register */
#define CAN_N2_ECNT /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT*)0xF0018414u)

/** Alias (User Manual Name) for CAN_N2_ECNT.
* To use register names with standard convension, please use CAN_N2_ECNT.
*/
#define	CAN_NECNT2	(CAN_N2_ECNT)

/** \\brief  418, Node Frame Counter Register */
#define CAN_N2_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR*)0xF0018418u)

/** Alias (User Manual Name) for CAN_N2_FCR.
* To use register names with standard convension, please use CAN_N2_FCR.
*/
#define	CAN_NFCR2	(CAN_N2_FCR)

/** \\brief  408, Node Interrupt Pointer Register */
#define CAN_N2_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR*)0xF0018408u)

/** Alias (User Manual Name) for CAN_N2_IPR.
* To use register names with standard convension, please use CAN_N2_IPR.
*/
#define	CAN_NIPR2	(CAN_N2_IPR)

/** \\brief  40C, Node Port Control Register */
#define CAN_N2_PCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR*)0xF001840Cu)

/** Alias (User Manual Name) for CAN_N2_PCR.
* To use register names with standard convension, please use CAN_N2_PCR.
*/
#define	CAN_NPCR2	(CAN_N2_PCR)

/** \\brief  404, Node Status Register */
#define CAN_N2_SR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR*)0xF0018404u)

/** Alias (User Manual Name) for CAN_N2_SR.
* To use register names with standard convension, please use CAN_N2_SR.
*/
#define	CAN_NSR2	(CAN_N2_SR)

/** \\brief  424, Node Timer A Transmit Trigger Register */
#define CAN_N2_TATTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018424u)

/** Alias (User Manual Name) for CAN_N2_TATTR.
* To use register names with standard convension, please use CAN_N2_TATTR.
*/
#define	CAN_NTATTR2	(CAN_N2_TATTR)

/** \\brief  428, Node Timer B Transmit Trigger Register */
#define CAN_N2_TBTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018428u)

/** Alias (User Manual Name) for CAN_N2_TBTTR.
* To use register names with standard convension, please use CAN_N2_TBTTR.
*/
#define	CAN_NTBTTR2	(CAN_N2_TBTTR)

/** \\brief  41C, Node Timer Clock Control Register */
#define CAN_N2_TCCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR*)0xF001841Cu)

/** Alias (User Manual Name) for CAN_N2_TCCR.
* To use register names with standard convension, please use CAN_N2_TCCR.
*/
#define	CAN_NTCCR2	(CAN_N2_TCCR)

/** \\brief  42C, Node Timer C Transmit Trigger Register */
#define CAN_N2_TCTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF001842Cu)

/** Alias (User Manual Name) for CAN_N2_TCTTR.
* To use register names with standard convension, please use CAN_N2_TCTTR.
*/
#define	CAN_NTCTTR2	(CAN_N2_TCTTR)

/** \\brief  420, Node Timer Receive Timeout Register */
#define CAN_N2_TRTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR*)0xF0018420u)

/** Alias (User Manual Name) for CAN_N2_TRTR.
* To use register names with standard convension, please use CAN_N2_TRTR.
*/
#define	CAN_NTRTR2	(CAN_N2_TRTR)

/** \\brief  510, Node Bit Timing Register */
#define CAN_N3_BTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR*)0xF0018510u)

/** Alias (User Manual Name) for CAN_N3_BTR.
* To use register names with standard convension, please use CAN_N3_BTR.
*/
#define	CAN_NBTR3	(CAN_N3_BTR)

/** \\brief  500, Node Control Register */
#define CAN_N3_CR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR*)0xF0018500u)

/** Alias (User Manual Name) for CAN_N3_CR.
* To use register names with standard convension, please use CAN_N3_CR.
*/
#define	CAN_NCR3	(CAN_N3_CR)

/** \\brief  514, Node Error Counter Register */
#define CAN_N3_ECNT /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT*)0xF0018514u)

/** Alias (User Manual Name) for CAN_N3_ECNT.
* To use register names with standard convension, please use CAN_N3_ECNT.
*/
#define	CAN_NECNT3	(CAN_N3_ECNT)

/** \\brief  518, Node Frame Counter Register */
#define CAN_N3_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR*)0xF0018518u)

/** Alias (User Manual Name) for CAN_N3_FCR.
* To use register names with standard convension, please use CAN_N3_FCR.
*/
#define	CAN_NFCR3	(CAN_N3_FCR)

/** \\brief  508, Node Interrupt Pointer Register */
#define CAN_N3_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR*)0xF0018508u)

/** Alias (User Manual Name) for CAN_N3_IPR.
* To use register names with standard convension, please use CAN_N3_IPR.
*/
#define	CAN_NIPR3	(CAN_N3_IPR)

/** \\brief  50C, Node Port Control Register */
#define CAN_N3_PCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR*)0xF001850Cu)

/** Alias (User Manual Name) for CAN_N3_PCR.
* To use register names with standard convension, please use CAN_N3_PCR.
*/
#define	CAN_NPCR3	(CAN_N3_PCR)

/** \\brief  504, Node Status Register */
#define CAN_N3_SR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR*)0xF0018504u)

/** Alias (User Manual Name) for CAN_N3_SR.
* To use register names with standard convension, please use CAN_N3_SR.
*/
#define	CAN_NSR3	(CAN_N3_SR)

/** \\brief  524, Node Timer A Transmit Trigger Register */
#define CAN_N3_TATTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018524u)

/** Alias (User Manual Name) for CAN_N3_TATTR.
* To use register names with standard convension, please use CAN_N3_TATTR.
*/
#define	CAN_NTATTR3	(CAN_N3_TATTR)

/** \\brief  528, Node Timer B Transmit Trigger Register */
#define CAN_N3_TBTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018528u)

/** Alias (User Manual Name) for CAN_N3_TBTTR.
* To use register names with standard convension, please use CAN_N3_TBTTR.
*/
#define	CAN_NTBTTR3	(CAN_N3_TBTTR)

/** \\brief  51C, Node Timer Clock Control Register */
#define CAN_N3_TCCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR*)0xF001851Cu)

/** Alias (User Manual Name) for CAN_N3_TCCR.
* To use register names with standard convension, please use CAN_N3_TCCR.
*/
#define	CAN_NTCCR3	(CAN_N3_TCCR)

/** \\brief  52C, Node Timer C Transmit Trigger Register */
#define CAN_N3_TCTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF001852Cu)

/** Alias (User Manual Name) for CAN_N3_TCTTR.
* To use register names with standard convension, please use CAN_N3_TCTTR.
*/
#define	CAN_NTCTTR3	(CAN_N3_TCTTR)

/** \\brief  520, Node Timer Receive Timeout Register */
#define CAN_N3_TRTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR*)0xF0018520u)

/** Alias (User Manual Name) for CAN_N3_TRTR.
* To use register names with standard convension, please use CAN_N3_TRTR.
*/
#define	CAN_NTRTR3	(CAN_N3_TRTR)

/** \\brief  610, Node Bit Timing Register */
#define CAN_N4_BTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR*)0xF0018610u)

/** Alias (User Manual Name) for CAN_N4_BTR.
* To use register names with standard convension, please use CAN_N4_BTR.
*/
#define	CAN_NBTR4	(CAN_N4_BTR)

/** \\brief  600, Node Control Register */
#define CAN_N4_CR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR*)0xF0018600u)

/** Alias (User Manual Name) for CAN_N4_CR.
* To use register names with standard convension, please use CAN_N4_CR.
*/
#define	CAN_NCR4	(CAN_N4_CR)

/** \\brief  614, Node Error Counter Register */
#define CAN_N4_ECNT /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT*)0xF0018614u)

/** Alias (User Manual Name) for CAN_N4_ECNT.
* To use register names with standard convension, please use CAN_N4_ECNT.
*/
#define	CAN_NECNT4	(CAN_N4_ECNT)

/** \\brief  618, Node Frame Counter Register */
#define CAN_N4_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR*)0xF0018618u)

/** Alias (User Manual Name) for CAN_N4_FCR.
* To use register names with standard convension, please use CAN_N4_FCR.
*/
#define	CAN_NFCR4	(CAN_N4_FCR)

/** \\brief  608, Node Interrupt Pointer Register */
#define CAN_N4_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR*)0xF0018608u)

/** Alias (User Manual Name) for CAN_N4_IPR.
* To use register names with standard convension, please use CAN_N4_IPR.
*/
#define	CAN_NIPR4	(CAN_N4_IPR)

/** \\brief  60C, Node Port Control Register */
#define CAN_N4_PCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR*)0xF001860Cu)

/** Alias (User Manual Name) for CAN_N4_PCR.
* To use register names with standard convension, please use CAN_N4_PCR.
*/
#define	CAN_NPCR4	(CAN_N4_PCR)

/** \\brief  604, Node Status Register */
#define CAN_N4_SR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR*)0xF0018604u)

/** Alias (User Manual Name) for CAN_N4_SR.
* To use register names with standard convension, please use CAN_N4_SR.
*/
#define	CAN_NSR4	(CAN_N4_SR)

/** \\brief  624, Node Timer A Transmit Trigger Register */
#define CAN_N4_TATTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018624u)

/** Alias (User Manual Name) for CAN_N4_TATTR.
* To use register names with standard convension, please use CAN_N4_TATTR.
*/
#define	CAN_NTATTR4	(CAN_N4_TATTR)

/** \\brief  628, Node Timer B Transmit Trigger Register */
#define CAN_N4_TBTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018628u)

/** Alias (User Manual Name) for CAN_N4_TBTTR.
* To use register names with standard convension, please use CAN_N4_TBTTR.
*/
#define	CAN_NTBTTR4	(CAN_N4_TBTTR)

/** \\brief  61C, Node Timer Clock Control Register */
#define CAN_N4_TCCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR*)0xF001861Cu)

/** Alias (User Manual Name) for CAN_N4_TCCR.
* To use register names with standard convension, please use CAN_N4_TCCR.
*/
#define	CAN_NTCCR4	(CAN_N4_TCCR)

/** \\brief  62C, Node Timer C Transmit Trigger Register */
#define CAN_N4_TCTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF001862Cu)

/** Alias (User Manual Name) for CAN_N4_TCTTR.
* To use register names with standard convension, please use CAN_N4_TCTTR.
*/
#define	CAN_NTCTTR4	(CAN_N4_TCTTR)

/** \\brief  620, Node Timer Receive Timeout Register */
#define CAN_N4_TRTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR*)0xF0018620u)

/** Alias (User Manual Name) for CAN_N4_TRTR.
* To use register names with standard convension, please use CAN_N4_TRTR.
*/
#define	CAN_NTRTR4	(CAN_N4_TRTR)

/** \\brief  710, Node Bit Timing Register */
#define CAN_N5_BTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR*)0xF0018710u)

/** Alias (User Manual Name) for CAN_N5_BTR.
* To use register names with standard convension, please use CAN_N5_BTR.
*/
#define	CAN_NBTR5	(CAN_N5_BTR)

/** \\brief  700, Node Control Register */
#define CAN_N5_CR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR*)0xF0018700u)

/** Alias (User Manual Name) for CAN_N5_CR.
* To use register names with standard convension, please use CAN_N5_CR.
*/
#define	CAN_NCR5	(CAN_N5_CR)

/** \\brief  714, Node Error Counter Register */
#define CAN_N5_ECNT /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT*)0xF0018714u)

/** Alias (User Manual Name) for CAN_N5_ECNT.
* To use register names with standard convension, please use CAN_N5_ECNT.
*/
#define	CAN_NECNT5	(CAN_N5_ECNT)

/** \\brief  718, Node Frame Counter Register */
#define CAN_N5_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR*)0xF0018718u)

/** Alias (User Manual Name) for CAN_N5_FCR.
* To use register names with standard convension, please use CAN_N5_FCR.
*/
#define	CAN_NFCR5	(CAN_N5_FCR)

/** \\brief  708, Node Interrupt Pointer Register */
#define CAN_N5_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR*)0xF0018708u)

/** Alias (User Manual Name) for CAN_N5_IPR.
* To use register names with standard convension, please use CAN_N5_IPR.
*/
#define	CAN_NIPR5	(CAN_N5_IPR)

/** \\brief  70C, Node Port Control Register */
#define CAN_N5_PCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR*)0xF001870Cu)

/** Alias (User Manual Name) for CAN_N5_PCR.
* To use register names with standard convension, please use CAN_N5_PCR.
*/
#define	CAN_NPCR5	(CAN_N5_PCR)

/** \\brief  704, Node Status Register */
#define CAN_N5_SR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR*)0xF0018704u)

/** Alias (User Manual Name) for CAN_N5_SR.
* To use register names with standard convension, please use CAN_N5_SR.
*/
#define	CAN_NSR5	(CAN_N5_SR)

/** \\brief  724, Node Timer A Transmit Trigger Register */
#define CAN_N5_TATTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018724u)

/** Alias (User Manual Name) for CAN_N5_TATTR.
* To use register names with standard convension, please use CAN_N5_TATTR.
*/
#define	CAN_NTATTR5	(CAN_N5_TATTR)

/** \\brief  728, Node Timer B Transmit Trigger Register */
#define CAN_N5_TBTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018728u)

/** Alias (User Manual Name) for CAN_N5_TBTTR.
* To use register names with standard convension, please use CAN_N5_TBTTR.
*/
#define	CAN_NTBTTR5	(CAN_N5_TBTTR)

/** \\brief  71C, Node Timer Clock Control Register */
#define CAN_N5_TCCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR*)0xF001871Cu)

/** Alias (User Manual Name) for CAN_N5_TCCR.
* To use register names with standard convension, please use CAN_N5_TCCR.
*/
#define	CAN_NTCCR5	(CAN_N5_TCCR)

/** \\brief  72C, Node Timer C Transmit Trigger Register */
#define CAN_N5_TCTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF001872Cu)

/** Alias (User Manual Name) for CAN_N5_TCTTR.
* To use register names with standard convension, please use CAN_N5_TCTTR.
*/
#define	CAN_NTCTTR5	(CAN_N5_TCTTR)

/** \\brief  720, Node Timer Receive Timeout Register */
#define CAN_N5_TRTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR*)0xF0018720u)

/** Alias (User Manual Name) for CAN_N5_TRTR.
* To use register names with standard convension, please use CAN_N5_TRTR.
*/
#define	CAN_NTRTR5	(CAN_N5_TRTR)

/** \\brief  810, Node Bit Timing Register */
#define CAN_N6_BTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR*)0xF0018810u)

/** Alias (User Manual Name) for CAN_N6_BTR.
* To use register names with standard convension, please use CAN_N6_BTR.
*/
#define	CAN_NBTR6	(CAN_N6_BTR)

/** \\brief  800, Node Control Register */
#define CAN_N6_CR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR*)0xF0018800u)

/** Alias (User Manual Name) for CAN_N6_CR.
* To use register names with standard convension, please use CAN_N6_CR.
*/
#define	CAN_NCR6	(CAN_N6_CR)

/** \\brief  814, Node Error Counter Register */
#define CAN_N6_ECNT /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT*)0xF0018814u)

/** Alias (User Manual Name) for CAN_N6_ECNT.
* To use register names with standard convension, please use CAN_N6_ECNT.
*/
#define	CAN_NECNT6	(CAN_N6_ECNT)

/** \\brief  818, Node Frame Counter Register */
#define CAN_N6_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR*)0xF0018818u)

/** Alias (User Manual Name) for CAN_N6_FCR.
* To use register names with standard convension, please use CAN_N6_FCR.
*/
#define	CAN_NFCR6	(CAN_N6_FCR)

/** \\brief  808, Node Interrupt Pointer Register */
#define CAN_N6_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR*)0xF0018808u)

/** Alias (User Manual Name) for CAN_N6_IPR.
* To use register names with standard convension, please use CAN_N6_IPR.
*/
#define	CAN_NIPR6	(CAN_N6_IPR)

/** \\brief  80C, Node Port Control Register */
#define CAN_N6_PCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR*)0xF001880Cu)

/** Alias (User Manual Name) for CAN_N6_PCR.
* To use register names with standard convension, please use CAN_N6_PCR.
*/
#define	CAN_NPCR6	(CAN_N6_PCR)

/** \\brief  804, Node Status Register */
#define CAN_N6_SR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR*)0xF0018804u)

/** Alias (User Manual Name) for CAN_N6_SR.
* To use register names with standard convension, please use CAN_N6_SR.
*/
#define	CAN_NSR6	(CAN_N6_SR)

/** \\brief  824, Node Timer A Transmit Trigger Register */
#define CAN_N6_TATTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018824u)

/** Alias (User Manual Name) for CAN_N6_TATTR.
* To use register names with standard convension, please use CAN_N6_TATTR.
*/
#define	CAN_NTATTR6	(CAN_N6_TATTR)

/** \\brief  828, Node Timer B Transmit Trigger Register */
#define CAN_N6_TBTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018828u)

/** Alias (User Manual Name) for CAN_N6_TBTTR.
* To use register names with standard convension, please use CAN_N6_TBTTR.
*/
#define	CAN_NTBTTR6	(CAN_N6_TBTTR)

/** \\brief  81C, Node Timer Clock Control Register */
#define CAN_N6_TCCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR*)0xF001881Cu)

/** Alias (User Manual Name) for CAN_N6_TCCR.
* To use register names with standard convension, please use CAN_N6_TCCR.
*/
#define	CAN_NTCCR6	(CAN_N6_TCCR)

/** \\brief  82C, Node Timer C Transmit Trigger Register */
#define CAN_N6_TCTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF001882Cu)

/** Alias (User Manual Name) for CAN_N6_TCTTR.
* To use register names with standard convension, please use CAN_N6_TCTTR.
*/
#define	CAN_NTCTTR6	(CAN_N6_TCTTR)

/** \\brief  820, Node Timer Receive Timeout Register */
#define CAN_N6_TRTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR*)0xF0018820u)

/** Alias (User Manual Name) for CAN_N6_TRTR.
* To use register names with standard convension, please use CAN_N6_TRTR.
*/
#define	CAN_NTRTR6	(CAN_N6_TRTR)

/** \\brief  910, Node Bit Timing Register */
#define CAN_N7_BTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_BTR*)0xF0018910u)

/** Alias (User Manual Name) for CAN_N7_BTR.
* To use register names with standard convension, please use CAN_N7_BTR.
*/
#define	CAN_NBTR7	(CAN_N7_BTR)

/** \\brief  900, Node Control Register */
#define CAN_N7_CR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_CR*)0xF0018900u)

/** Alias (User Manual Name) for CAN_N7_CR.
* To use register names with standard convension, please use CAN_N7_CR.
*/
#define	CAN_NCR7	(CAN_N7_CR)

/** \\brief  914, Node Error Counter Register */
#define CAN_N7_ECNT /*lint --e(923)*/ (*(volatile Ifx_CAN_N_ECNT*)0xF0018914u)

/** Alias (User Manual Name) for CAN_N7_ECNT.
* To use register names with standard convension, please use CAN_N7_ECNT.
*/
#define	CAN_NECNT7	(CAN_N7_ECNT)

/** \\brief  918, Node Frame Counter Register */
#define CAN_N7_FCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_FCR*)0xF0018918u)

/** Alias (User Manual Name) for CAN_N7_FCR.
* To use register names with standard convension, please use CAN_N7_FCR.
*/
#define	CAN_NFCR7	(CAN_N7_FCR)

/** \\brief  908, Node Interrupt Pointer Register */
#define CAN_N7_IPR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_IPR*)0xF0018908u)

/** Alias (User Manual Name) for CAN_N7_IPR.
* To use register names with standard convension, please use CAN_N7_IPR.
*/
#define	CAN_NIPR7	(CAN_N7_IPR)

/** \\brief  90C, Node Port Control Register */
#define CAN_N7_PCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_PCR*)0xF001890Cu)

/** Alias (User Manual Name) for CAN_N7_PCR.
* To use register names with standard convension, please use CAN_N7_PCR.
*/
#define	CAN_NPCR7	(CAN_N7_PCR)

/** \\brief  904, Node Status Register */
#define CAN_N7_SR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_SR*)0xF0018904u)

/** Alias (User Manual Name) for CAN_N7_SR.
* To use register names with standard convension, please use CAN_N7_SR.
*/
#define	CAN_NSR7	(CAN_N7_SR)

/** \\brief  924, Node Timer A Transmit Trigger Register */
#define CAN_N7_TATTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018924u)

/** Alias (User Manual Name) for CAN_N7_TATTR.
* To use register names with standard convension, please use CAN_N7_TATTR.
*/
#define	CAN_NTATTR7	(CAN_N7_TATTR)

/** \\brief  928, Node Timer B Transmit Trigger Register */
#define CAN_N7_TBTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF0018928u)

/** Alias (User Manual Name) for CAN_N7_TBTTR.
* To use register names with standard convension, please use CAN_N7_TBTTR.
*/
#define	CAN_NTBTTR7	(CAN_N7_TBTTR)

/** \\brief  91C, Node Timer Clock Control Register */
#define CAN_N7_TCCR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TCCR*)0xF001891Cu)

/** Alias (User Manual Name) for CAN_N7_TCCR.
* To use register names with standard convension, please use CAN_N7_TCCR.
*/
#define	CAN_NTCCR7	(CAN_N7_TCCR)

/** \\brief  92C, Node Timer C Transmit Trigger Register */
#define CAN_N7_TCTTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TTTR*)0xF001892Cu)

/** Alias (User Manual Name) for CAN_N7_TCTTR.
* To use register names with standard convension, please use CAN_N7_TCTTR.
*/
#define	CAN_NTCTTR7	(CAN_N7_TCTTR)

/** \\brief  920, Node Timer Receive Timeout Register */
#define CAN_N7_TRTR /*lint --e(923)*/ (*(volatile Ifx_CAN_N_TRTR*)0xF0018920u)

/** Alias (User Manual Name) for CAN_N7_TRTR.
* To use register names with standard convension, please use CAN_N7_TRTR.
*/
#define	CAN_NTRTR7	(CAN_N7_TRTR)

/** \\brief  E8, OCDS Control and Status */
#define CAN_OCS /*lint --e(923)*/ (*(volatile Ifx_CAN_OCS*)0xF00180E8u)

/** \\brief  1C4, Panel Control Register */
#define CAN_PANCTR /*lint --e(923)*/ (*(volatile Ifx_CAN_PANCTR*)0xF00181C4u)

/** \\brief  288, Reference Mark Register */
#define CAN_REFMR /*lint --e(923)*/ (*(volatile Ifx_CAN_REFMR*)0xF0018288u)

/** \\brief  2F8, Scheduler Instruction Status Register */
#define CAN_SISR /*lint --e(923)*/ (*(volatile Ifx_CAN_SISR*)0xF00182F8u)

/** \\brief  3FFC, Scheduler Start Pointer Node 0 Register */
#define CAN_STPTR0 /*lint --e(923)*/ (*(volatile Ifx_CAN_STPTR0*)0xF001BFFCu)

/** \\brief  2F4, Scheduler Timing Status Register High */
#define CAN_STSRH /*lint --e(923)*/ (*(volatile Ifx_CAN_STSRH*)0xF00182F4u)

/** \\brief  2F0, Scheduler Timing Status Register Low */
#define CAN_STSRL /*lint --e(923)*/ (*(volatile Ifx_CAN_STSRL*)0xF00182F0u)

/** \\brief  284, Synchronization Mark Register */
#define CAN_SYNMR /*lint --e(923)*/ (*(volatile Ifx_CAN_SYNMR*)0xF0018284u)

/** \\brief  2C4, Time Trigger Configuration Register */
#define CAN_TTCFGR /*lint --e(923)*/ (*(volatile Ifx_CAN_TTCFGR*)0xF00182C4u)

/** \\brief  2C0, Time Trigger Control Register */
#define CAN_TTCR /*lint --e(923)*/ (*(volatile Ifx_CAN_TTCR*)0xF00182C0u)

/** \\brief  2CC, Time Trigger Flag Modification Register */
#define CAN_TTFMR /*lint --e(923)*/ (*(volatile Ifx_CAN_TTFMR*)0xF00182CCu)

/** \\brief  2D4, Time Trigger Interrupt Enable Register */
#define CAN_TTIER /*lint --e(923)*/ (*(volatile Ifx_CAN_TTIER*)0xF00182D4u)

/** \\brief  2D8, Time Trigger Interrupt Node Pointer Register */
#define CAN_TTINPR /*lint --e(923)*/ (*(volatile Ifx_CAN_TTINPR*)0xF00182D8u)

/** \\brief  2D0, Time Trigger Interrupt Request Register */
#define CAN_TTIRR /*lint --e(923)*/ (*(volatile Ifx_CAN_TTIRR*)0xF00182D0u)

/** \\brief  2C8, Time Trigger Status Register */
#define CAN_TTSR /*lint --e(923)*/ (*(volatile Ifx_CAN_TTSR*)0xF00182C8u)

/** \\brief  290, Time Unit Ratio Register */
#define CAN_TURR /*lint --e(923)*/ (*(volatile Ifx_CAN_TURR*)0xF0018290u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXCAN_REG_H */
