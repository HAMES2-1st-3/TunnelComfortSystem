/**
 * \file IfxQspi_reg.h
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
 * \defgroup IfxSfr_Qspi_Registers_Cfg Qspi address
 * \ingroup IfxSfr_Qspi_Registers
 * 
 * \defgroup IfxSfr_Qspi_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Qspi_Registers_Cfg
 *
 * \defgroup IfxSfr_Qspi_Registers_Cfg_Qspi0 2-QSPI0
 * \ingroup IfxSfr_Qspi_Registers_Cfg
 *
 * \defgroup IfxSfr_Qspi_Registers_Cfg_Qspi1 2-QSPI1
 * \ingroup IfxSfr_Qspi_Registers_Cfg
 *
 * \defgroup IfxSfr_Qspi_Registers_Cfg_Qspi2 2-QSPI2
 * \ingroup IfxSfr_Qspi_Registers_Cfg
 *
 * \defgroup IfxSfr_Qspi_Registers_Cfg_Qspi3 2-QSPI3
 * \ingroup IfxSfr_Qspi_Registers_Cfg
 *
 * \defgroup IfxSfr_Qspi_Registers_Cfg_Qspi4 2-QSPI4
 * \ingroup IfxSfr_Qspi_Registers_Cfg
 *
 *
 */
#ifndef IFXQSPI_REG_H
#define IFXQSPI_REG_H 1
/******************************************************************************/
#include "IfxQspi_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Qspi_Registers_Cfg_BaseAddress
 * \{  */

/** \brief QSPI object */
#define MODULE_QSPI0 /*lint --e(923, 9078)*/ ((*(Ifx_QSPI*)0xF0001C00u))
#define MODULE_QSPI1 /*lint --e(923, 9078)*/ ((*(Ifx_QSPI*)0xF0001D00u))
#define MODULE_QSPI2 /*lint --e(923, 9078)*/ ((*(Ifx_QSPI*)0xF0001E00u))
#define MODULE_QSPI3 /*lint --e(923, 9078)*/ ((*(Ifx_QSPI*)0xF0001F00u))
#define MODULE_QSPI4 /*lint --e(923, 9078)*/ ((*(Ifx_QSPI*)0xF0002000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Qspi_Registers_Cfg_Qspi0
 * \{  */
/** \brief 0, Clock Control Register */
#define QSPI0_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_CLC*)0xF0001C00u)

/** \brief 4, Port Input Select Register */
#define QSPI0_PISEL /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_PISEL*)0xF0001C04u)

/** \brief 8, Module Identification Register */
#define QSPI0_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ID*)0xF0001C08u)

/** \brief 10, Global Configuration Register */
#define QSPI0_GLOBALCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON*)0xF0001C10u)

/** \brief 14, Global Configuration Register 1 */
#define QSPI0_GLOBALCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON1*)0xF0001C14u)

/** \brief 18, Basic Configuration Register */
#define QSPI0_BACON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACON*)0xF0001C18u)

/** \brief 20, Configuration Extension 0 */
#define QSPI0_ECON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001C20u)

/** \brief 24, Configuration Extension 1 */
#define QSPI0_ECON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001C24u)

/** \brief 28, Configuration Extension 2 */
#define QSPI0_ECON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001C28u)

/** \brief 2C, Configuration Extension 3 */
#define QSPI0_ECON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001C2Cu)

/** \brief 30, Configuration Extension 4 */
#define QSPI0_ECON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001C30u)

/** \brief 34, Configuration Extension 5 */
#define QSPI0_ECON5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001C34u)

/** \brief 38, Configuration Extension 6 */
#define QSPI0_ECON6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001C38u)

/** \brief 3C, Configuration Extension 7 */
#define QSPI0_ECON7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001C3Cu)

/** \brief 40, Status Register */
#define QSPI0_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS*)0xF0001C40u)

/** \brief 44, Status Register 1 */
#define QSPI0_STATUS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS1*)0xF0001C44u)

/** \brief 48, Slave Select Output Control Register */
#define QSPI0_SSOC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_SSOC*)0xF0001C48u)

/** \brief 54, Flags Clear Register */
#define QSPI0_FLAGSCLEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0001C54u)

/** \brief 58, Extra Large Data Configuration Register */
#define QSPI0_XXLCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_XXLCON*)0xF0001C58u)

/** \brief 5C, MIX_ENTRY Register */
#define QSPI0_MIXENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MIXENTRY*)0xF0001C5Cu)

/** \brief 60, BACON_ENTRY Register */
#define QSPI0_BACONENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACONENTRY*)0xF0001C60u)

/** \brief 64, DATA_ENTRY Register 0 */
#define QSPI0_DATAENTRY0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C64u)

/** \brief 68, DATA_ENTRY Register 1 */
#define QSPI0_DATAENTRY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C68u)

/** \brief 6C, DATA_ENTRY Register 2 */
#define QSPI0_DATAENTRY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C6Cu)

/** \brief 70, DATA_ENTRY Register 3 */
#define QSPI0_DATAENTRY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C70u)

/** \brief 74, DATA_ENTRY Register 4 */
#define QSPI0_DATAENTRY4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C74u)

/** \brief 78, DATA_ENTRY Register 5 */
#define QSPI0_DATAENTRY5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C78u)

/** \brief 7C, DATA_ENTRY Register 6 */
#define QSPI0_DATAENTRY6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C7Cu)

/** \brief 80, DATA_ENTRY Register 7 */
#define QSPI0_DATAENTRY7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001C80u)

/** \brief 90, RX_EXIT Register */
#define QSPI0_RXEXIT /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXIT*)0xF0001C90u)

/** \brief 94, RX_EXIT Debug Register */
#define QSPI0_RXEXITD /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXITD*)0xF0001C94u)

/** \brief A4, Move Counter Register */
#define QSPI0_MC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MC*)0xF0001CA4u)

/** \brief A8, Move Counter control Register */
#define QSPI0_MCCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MCCON*)0xF0001CA8u)

/** \brief E8, OCDS Control and Status */
#define QSPI0_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_OCS*)0xF0001CE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define QSPI0_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRSTCLR*)0xF0001CECu)

/** \brief F0, Kernel Reset Register 1 */
#define QSPI0_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST1*)0xF0001CF0u)

/** \brief F4, Kernel Reset Register 0 */
#define QSPI0_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST0*)0xF0001CF4u)

/** \brief F8, Access Enable Register 1 */
#define QSPI0_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN1*)0xF0001CF8u)

/** \brief FC, Access Enable Register 0 */
#define QSPI0_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN0*)0xF0001CFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Qspi_Registers_Cfg_Qspi1
 * \{  */
/** \brief 0, Clock Control Register */
#define QSPI1_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_CLC*)0xF0001D00u)

/** \brief 4, Port Input Select Register */
#define QSPI1_PISEL /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_PISEL*)0xF0001D04u)

/** \brief 8, Module Identification Register */
#define QSPI1_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ID*)0xF0001D08u)

/** \brief 10, Global Configuration Register */
#define QSPI1_GLOBALCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON*)0xF0001D10u)

/** \brief 14, Global Configuration Register 1 */
#define QSPI1_GLOBALCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON1*)0xF0001D14u)

/** \brief 18, Basic Configuration Register */
#define QSPI1_BACON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACON*)0xF0001D18u)

/** \brief 20, Configuration Extension 0 */
#define QSPI1_ECON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001D20u)

/** \brief 24, Configuration Extension 1 */
#define QSPI1_ECON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001D24u)

/** \brief 28, Configuration Extension 2 */
#define QSPI1_ECON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001D28u)

/** \brief 2C, Configuration Extension 3 */
#define QSPI1_ECON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001D2Cu)

/** \brief 30, Configuration Extension 4 */
#define QSPI1_ECON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001D30u)

/** \brief 34, Configuration Extension 5 */
#define QSPI1_ECON5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001D34u)

/** \brief 38, Configuration Extension 6 */
#define QSPI1_ECON6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001D38u)

/** \brief 3C, Configuration Extension 7 */
#define QSPI1_ECON7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001D3Cu)

/** \brief 40, Status Register */
#define QSPI1_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS*)0xF0001D40u)

/** \brief 44, Status Register 1 */
#define QSPI1_STATUS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS1*)0xF0001D44u)

/** \brief 48, Slave Select Output Control Register */
#define QSPI1_SSOC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_SSOC*)0xF0001D48u)

/** \brief 54, Flags Clear Register */
#define QSPI1_FLAGSCLEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0001D54u)

/** \brief 58, Extra Large Data Configuration Register */
#define QSPI1_XXLCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_XXLCON*)0xF0001D58u)

/** \brief 5C, MIX_ENTRY Register */
#define QSPI1_MIXENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MIXENTRY*)0xF0001D5Cu)

/** \brief 60, BACON_ENTRY Register */
#define QSPI1_BACONENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACONENTRY*)0xF0001D60u)

/** \brief 64, DATA_ENTRY Register 0 */
#define QSPI1_DATAENTRY0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D64u)

/** \brief 68, DATA_ENTRY Register 1 */
#define QSPI1_DATAENTRY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D68u)

/** \brief 6C, DATA_ENTRY Register 2 */
#define QSPI1_DATAENTRY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D6Cu)

/** \brief 70, DATA_ENTRY Register 3 */
#define QSPI1_DATAENTRY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D70u)

/** \brief 74, DATA_ENTRY Register 4 */
#define QSPI1_DATAENTRY4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D74u)

/** \brief 78, DATA_ENTRY Register 5 */
#define QSPI1_DATAENTRY5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D78u)

/** \brief 7C, DATA_ENTRY Register 6 */
#define QSPI1_DATAENTRY6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D7Cu)

/** \brief 80, DATA_ENTRY Register 7 */
#define QSPI1_DATAENTRY7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001D80u)

/** \brief 90, RX_EXIT Register */
#define QSPI1_RXEXIT /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXIT*)0xF0001D90u)

/** \brief 94, RX_EXIT Debug Register */
#define QSPI1_RXEXITD /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXITD*)0xF0001D94u)

/** \brief A4, Move Counter Register */
#define QSPI1_MC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MC*)0xF0001DA4u)

/** \brief A8, Move Counter control Register */
#define QSPI1_MCCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MCCON*)0xF0001DA8u)

/** \brief E8, OCDS Control and Status */
#define QSPI1_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_OCS*)0xF0001DE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define QSPI1_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRSTCLR*)0xF0001DECu)

/** \brief F0, Kernel Reset Register 1 */
#define QSPI1_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST1*)0xF0001DF0u)

/** \brief F4, Kernel Reset Register 0 */
#define QSPI1_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST0*)0xF0001DF4u)

/** \brief F8, Access Enable Register 1 */
#define QSPI1_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN1*)0xF0001DF8u)

/** \brief FC, Access Enable Register 0 */
#define QSPI1_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN0*)0xF0001DFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Qspi_Registers_Cfg_Qspi2
 * \{  */
/** \brief 0, Clock Control Register */
#define QSPI2_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_CLC*)0xF0001E00u)

/** \brief 4, Port Input Select Register */
#define QSPI2_PISEL /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_PISEL*)0xF0001E04u)

/** \brief 8, Module Identification Register */
#define QSPI2_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ID*)0xF0001E08u)

/** \brief 10, Global Configuration Register */
#define QSPI2_GLOBALCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON*)0xF0001E10u)

/** \brief 14, Global Configuration Register 1 */
#define QSPI2_GLOBALCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON1*)0xF0001E14u)

/** \brief 18, Basic Configuration Register */
#define QSPI2_BACON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACON*)0xF0001E18u)

/** \brief 20, Configuration Extension 0 */
#define QSPI2_ECON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001E20u)

/** \brief 24, Configuration Extension 1 */
#define QSPI2_ECON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001E24u)

/** \brief 28, Configuration Extension 2 */
#define QSPI2_ECON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001E28u)

/** \brief 2C, Configuration Extension 3 */
#define QSPI2_ECON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001E2Cu)

/** \brief 30, Configuration Extension 4 */
#define QSPI2_ECON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001E30u)

/** \brief 34, Configuration Extension 5 */
#define QSPI2_ECON5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001E34u)

/** \brief 38, Configuration Extension 6 */
#define QSPI2_ECON6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001E38u)

/** \brief 3C, Configuration Extension 7 */
#define QSPI2_ECON7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001E3Cu)

/** \brief 40, Status Register */
#define QSPI2_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS*)0xF0001E40u)

/** \brief 44, Status Register 1 */
#define QSPI2_STATUS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS1*)0xF0001E44u)

/** \brief 48, Slave Select Output Control Register */
#define QSPI2_SSOC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_SSOC*)0xF0001E48u)

/** \brief 54, Flags Clear Register */
#define QSPI2_FLAGSCLEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0001E54u)

/** \brief 58, Extra Large Data Configuration Register */
#define QSPI2_XXLCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_XXLCON*)0xF0001E58u)

/** \brief 5C, MIX_ENTRY Register */
#define QSPI2_MIXENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MIXENTRY*)0xF0001E5Cu)

/** \brief 60, BACON_ENTRY Register */
#define QSPI2_BACONENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACONENTRY*)0xF0001E60u)

/** \brief 64, DATA_ENTRY Register 0 */
#define QSPI2_DATAENTRY0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E64u)

/** \brief 68, DATA_ENTRY Register 1 */
#define QSPI2_DATAENTRY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E68u)

/** \brief 6C, DATA_ENTRY Register 2 */
#define QSPI2_DATAENTRY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E6Cu)

/** \brief 70, DATA_ENTRY Register 3 */
#define QSPI2_DATAENTRY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E70u)

/** \brief 74, DATA_ENTRY Register 4 */
#define QSPI2_DATAENTRY4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E74u)

/** \brief 78, DATA_ENTRY Register 5 */
#define QSPI2_DATAENTRY5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E78u)

/** \brief 7C, DATA_ENTRY Register 6 */
#define QSPI2_DATAENTRY6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E7Cu)

/** \brief 80, DATA_ENTRY Register 7 */
#define QSPI2_DATAENTRY7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001E80u)

/** \brief 90, RX_EXIT Register */
#define QSPI2_RXEXIT /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXIT*)0xF0001E90u)

/** \brief 94, RX_EXIT Debug Register */
#define QSPI2_RXEXITD /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXITD*)0xF0001E94u)

/** \brief A4, Move Counter Register */
#define QSPI2_MC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MC*)0xF0001EA4u)

/** \brief A8, Move Counter control Register */
#define QSPI2_MCCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MCCON*)0xF0001EA8u)

/** \brief E8, OCDS Control and Status */
#define QSPI2_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_OCS*)0xF0001EE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define QSPI2_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRSTCLR*)0xF0001EECu)

/** \brief F0, Kernel Reset Register 1 */
#define QSPI2_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST1*)0xF0001EF0u)

/** \brief F4, Kernel Reset Register 0 */
#define QSPI2_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST0*)0xF0001EF4u)

/** \brief F8, Access Enable Register 1 */
#define QSPI2_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN1*)0xF0001EF8u)

/** \brief FC, Access Enable Register 0 */
#define QSPI2_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN0*)0xF0001EFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Qspi_Registers_Cfg_Qspi3
 * \{  */
/** \brief 0, Clock Control Register */
#define QSPI3_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_CLC*)0xF0001F00u)

/** \brief 4, Port Input Select Register */
#define QSPI3_PISEL /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_PISEL*)0xF0001F04u)

/** \brief 8, Module Identification Register */
#define QSPI3_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ID*)0xF0001F08u)

/** \brief 10, Global Configuration Register */
#define QSPI3_GLOBALCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON*)0xF0001F10u)

/** \brief 14, Global Configuration Register 1 */
#define QSPI3_GLOBALCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON1*)0xF0001F14u)

/** \brief 18, Basic Configuration Register */
#define QSPI3_BACON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACON*)0xF0001F18u)

/** \brief 20, Configuration Extension 0 */
#define QSPI3_ECON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001F20u)

/** \brief 24, Configuration Extension 1 */
#define QSPI3_ECON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001F24u)

/** \brief 28, Configuration Extension 2 */
#define QSPI3_ECON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001F28u)

/** \brief 2C, Configuration Extension 3 */
#define QSPI3_ECON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001F2Cu)

/** \brief 30, Configuration Extension 4 */
#define QSPI3_ECON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001F30u)

/** \brief 34, Configuration Extension 5 */
#define QSPI3_ECON5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001F34u)

/** \brief 38, Configuration Extension 6 */
#define QSPI3_ECON6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001F38u)

/** \brief 3C, Configuration Extension 7 */
#define QSPI3_ECON7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0001F3Cu)

/** \brief 40, Status Register */
#define QSPI3_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS*)0xF0001F40u)

/** \brief 44, Status Register 1 */
#define QSPI3_STATUS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS1*)0xF0001F44u)

/** \brief 48, Slave Select Output Control Register */
#define QSPI3_SSOC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_SSOC*)0xF0001F48u)

/** \brief 54, Flags Clear Register */
#define QSPI3_FLAGSCLEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0001F54u)

/** \brief 58, Extra Large Data Configuration Register */
#define QSPI3_XXLCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_XXLCON*)0xF0001F58u)

/** \brief 5C, MIX_ENTRY Register */
#define QSPI3_MIXENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MIXENTRY*)0xF0001F5Cu)

/** \brief 60, BACON_ENTRY Register */
#define QSPI3_BACONENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACONENTRY*)0xF0001F60u)

/** \brief 64, DATA_ENTRY Register 0 */
#define QSPI3_DATAENTRY0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F64u)

/** \brief 68, DATA_ENTRY Register 1 */
#define QSPI3_DATAENTRY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F68u)

/** \brief 6C, DATA_ENTRY Register 2 */
#define QSPI3_DATAENTRY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F6Cu)

/** \brief 70, DATA_ENTRY Register 3 */
#define QSPI3_DATAENTRY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F70u)

/** \brief 74, DATA_ENTRY Register 4 */
#define QSPI3_DATAENTRY4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F74u)

/** \brief 78, DATA_ENTRY Register 5 */
#define QSPI3_DATAENTRY5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F78u)

/** \brief 7C, DATA_ENTRY Register 6 */
#define QSPI3_DATAENTRY6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F7Cu)

/** \brief 80, DATA_ENTRY Register 7 */
#define QSPI3_DATAENTRY7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0001F80u)

/** \brief 90, RX_EXIT Register */
#define QSPI3_RXEXIT /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXIT*)0xF0001F90u)

/** \brief 94, RX_EXIT Debug Register */
#define QSPI3_RXEXITD /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXITD*)0xF0001F94u)

/** \brief A4, Move Counter Register */
#define QSPI3_MC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MC*)0xF0001FA4u)

/** \brief A8, Move Counter control Register */
#define QSPI3_MCCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MCCON*)0xF0001FA8u)

/** \brief E8, OCDS Control and Status */
#define QSPI3_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_OCS*)0xF0001FE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define QSPI3_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRSTCLR*)0xF0001FECu)

/** \brief F0, Kernel Reset Register 1 */
#define QSPI3_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST1*)0xF0001FF0u)

/** \brief F4, Kernel Reset Register 0 */
#define QSPI3_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST0*)0xF0001FF4u)

/** \brief F8, Access Enable Register 1 */
#define QSPI3_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN1*)0xF0001FF8u)

/** \brief FC, Access Enable Register 0 */
#define QSPI3_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN0*)0xF0001FFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Qspi_Registers_Cfg_Qspi4
 * \{  */
/** \brief 0, Clock Control Register */
#define QSPI4_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_CLC*)0xF0002000u)

/** \brief 4, Port Input Select Register */
#define QSPI4_PISEL /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_PISEL*)0xF0002004u)

/** \brief 8, Module Identification Register */
#define QSPI4_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ID*)0xF0002008u)

/** \brief 10, Global Configuration Register */
#define QSPI4_GLOBALCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON*)0xF0002010u)

/** \brief 14, Global Configuration Register 1 */
#define QSPI4_GLOBALCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_GLOBALCON1*)0xF0002014u)

/** \brief 18, Basic Configuration Register */
#define QSPI4_BACON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACON*)0xF0002018u)

/** \brief 20, Configuration Extension 0 */
#define QSPI4_ECON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0002020u)

/** \brief 24, Configuration Extension 1 */
#define QSPI4_ECON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0002024u)

/** \brief 28, Configuration Extension 2 */
#define QSPI4_ECON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0002028u)

/** \brief 2C, Configuration Extension 3 */
#define QSPI4_ECON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF000202Cu)

/** \brief 30, Configuration Extension 4 */
#define QSPI4_ECON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0002030u)

/** \brief 34, Configuration Extension 5 */
#define QSPI4_ECON5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0002034u)

/** \brief 38, Configuration Extension 6 */
#define QSPI4_ECON6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF0002038u)

/** \brief 3C, Configuration Extension 7 */
#define QSPI4_ECON7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ECON*)0xF000203Cu)

/** \brief 40, Status Register */
#define QSPI4_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS*)0xF0002040u)

/** \brief 44, Status Register 1 */
#define QSPI4_STATUS1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_STATUS1*)0xF0002044u)

/** \brief 48, Slave Select Output Control Register */
#define QSPI4_SSOC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_SSOC*)0xF0002048u)

/** \brief 54, Flags Clear Register */
#define QSPI4_FLAGSCLEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_FLAGSCLEAR*)0xF0002054u)

/** \brief 58, Extra Large Data Configuration Register */
#define QSPI4_XXLCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_XXLCON*)0xF0002058u)

/** \brief 5C, MIX_ENTRY Register */
#define QSPI4_MIXENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MIXENTRY*)0xF000205Cu)

/** \brief 60, BACON_ENTRY Register */
#define QSPI4_BACONENTRY /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_BACONENTRY*)0xF0002060u)

/** \brief 64, DATA_ENTRY Register 0 */
#define QSPI4_DATAENTRY0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0002064u)

/** \brief 68, DATA_ENTRY Register 1 */
#define QSPI4_DATAENTRY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0002068u)

/** \brief 6C, DATA_ENTRY Register 2 */
#define QSPI4_DATAENTRY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF000206Cu)

/** \brief 70, DATA_ENTRY Register 3 */
#define QSPI4_DATAENTRY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0002070u)

/** \brief 74, DATA_ENTRY Register 4 */
#define QSPI4_DATAENTRY4 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0002074u)

/** \brief 78, DATA_ENTRY Register 5 */
#define QSPI4_DATAENTRY5 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0002078u)

/** \brief 7C, DATA_ENTRY Register 6 */
#define QSPI4_DATAENTRY6 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF000207Cu)

/** \brief 80, DATA_ENTRY Register 7 */
#define QSPI4_DATAENTRY7 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_DATAENTRY*)0xF0002080u)

/** \brief 90, RX_EXIT Register */
#define QSPI4_RXEXIT /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXIT*)0xF0002090u)

/** \brief 94, RX_EXIT Debug Register */
#define QSPI4_RXEXITD /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_RXEXITD*)0xF0002094u)

/** \brief A4, Move Counter Register */
#define QSPI4_MC /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MC*)0xF00020A4u)

/** \brief A8, Move Counter control Register */
#define QSPI4_MCCON /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_MCCON*)0xF00020A8u)

/** \brief E8, OCDS Control and Status */
#define QSPI4_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_OCS*)0xF00020E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define QSPI4_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRSTCLR*)0xF00020ECu)

/** \brief F0, Kernel Reset Register 1 */
#define QSPI4_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST1*)0xF00020F0u)

/** \brief F4, Kernel Reset Register 0 */
#define QSPI4_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_KRST0*)0xF00020F4u)

/** \brief F8, Access Enable Register 1 */
#define QSPI4_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN1*)0xF00020F8u)

/** \brief FC, Access Enable Register 0 */
#define QSPI4_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_QSPI_ACCEN0*)0xF00020FCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXQSPI_REG_H */
