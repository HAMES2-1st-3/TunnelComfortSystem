/**
 * \file IfxSdmmc_reg.h
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
 * \defgroup IfxSfr_Sdmmc_Registers_Cfg Sdmmc address
 * \ingroup IfxSfr_Sdmmc_Registers
 * 
 * \defgroup IfxSfr_Sdmmc_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Sdmmc_Registers_Cfg
 *
 * \defgroup IfxSfr_Sdmmc_Registers_Cfg_Sdmmc0 2-SDMMC0
 * \ingroup IfxSfr_Sdmmc_Registers_Cfg
 *
 *
 */
#ifndef IFXSDMMC_REG_H
#define IFXSDMMC_REG_H 1
/******************************************************************************/
#include "IfxSdmmc_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Sdmmc_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SDMMC object */
#define MODULE_SDMMC0 /*lint --e(923, 9078)*/ ((*(Ifx_SDMMC*)0xF02B0000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Sdmmc_Registers_Cfg_Sdmmc0
 * \{  */
/** \brief 0, SDMA System Address register */
#define SDMMC0_SDMASA /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_SDMASA*)0xF02B0000u)

/** \brief 4, Block Size register */
#define SDMMC0_BLOCKSIZE /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_BLOCKSIZE*)0xF02B0004u)

/** \brief 6, 16-bit Block Count register */
#define SDMMC0_BLOCKCOUNT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_BLOCKCOUNT*)0xF02B0006u)

/** \brief 8, Argument register */
#define SDMMC0_ARGUMENT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ARGUMENT*)0xF02B0008u)

/** \brief C, Transfer Mode register */
#define SDMMC0_XFER_MODE /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_XFER_MODE*)0xF02B000Cu)

/** \brief E, Command register */
#define SDMMC0_CMD /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_CMD*)0xF02B000Eu)

/** \brief 10, Response Register 01 */
#define SDMMC0_RESP01 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_RESP01*)0xF02B0010u)

/** \brief 14, Response Register 23 */
#define SDMMC0_RESP23 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_RESP23*)0xF02B0014u)

/** \brief 18, Response Register 45 */
#define SDMMC0_RESP45 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_RESP45*)0xF02B0018u)

/** \brief 1C, Response Register 67 */
#define SDMMC0_RESP67 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_RESP67*)0xF02B001Cu)

/** \brief 20, Buffer Data Port Register */
#define SDMMC0_BUF_DATA /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_BUF_DATA*)0xF02B0020u)

/** \brief 24, Present State Register */
#define SDMMC0_PSTATE_REG /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_PSTATE_REG*)0xF02B0024u)

/** \brief 28, Host Control 1 Register */
#define SDMMC0_HOST_CTRL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_HOST_CTRL1*)0xF02B0028u)

/** \brief 29, Power Control Register */
#define SDMMC0_PWR_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_PWR_CTRL*)0xF02B0029u)

/** \brief 2A, Block Gap Control Register */
#define SDMMC0_BGAP_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_BGAP_CTRL*)0xF02B002Au)

/** \brief 2B, Wakeup Control Register */
#define SDMMC0_WUP_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_WUP_CTRL*)0xF02B002Bu)

/** \brief 2C, Clock Control Register */
#define SDMMC0_CLK_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_CLK_CTRL*)0xF02B002Cu)

/** \brief 2E, Timeout Control Register */
#define SDMMC0_TOUT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_TOUT_CTRL*)0xF02B002Eu)

/** \brief 2F, Software Reset Register */
#define SDMMC0_SW_RST /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_SW_RST*)0xF02B002Fu)

/** \brief 30, Normal Interrupt Status Register */
#define SDMMC0_NORMAL_INT_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_NORMAL_INT_STAT*)0xF02B0030u)

/** \brief 32, Error Interrupt Status Register */
#define SDMMC0_ERROR_INT_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ERROR_INT_STAT*)0xF02B0032u)

/** \brief 34, Normal Interrupt Status Enable Register */
#define SDMMC0_NORMAL_INT_STAT_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_NORMAL_INT_STAT_EN*)0xF02B0034u)

/** \brief 36, Error Interrupt Status Enable Register */
#define SDMMC0_ERROR_INT_STAT_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ERROR_INT_STAT_EN*)0xF02B0036u)

/** \brief 38, Normal Interrupt Signal Enable Register */
#define SDMMC0_NORMAL_INT_SIGNAL_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_NORMAL_INT_SIGNAL_EN*)0xF02B0038u)

/** \brief 3A, Error Interrupt Signal Enable Register */
#define SDMMC0_ERROR_INT_SIGNAL_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ERROR_INT_SIGNAL_EN*)0xF02B003Au)

/** \brief 3C, Auto CMD Status Register */
#define SDMMC0_AUTO_CMD_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_AUTO_CMD_STAT*)0xF02B003Cu)

/** \brief 3E, Host Control 2 Register */
#define SDMMC0_HOST_CTRL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_HOST_CTRL2*)0xF02B003Eu)

/** \brief 40, Capabilities 1 Register 0 to 31 */
#define SDMMC0_CAPABILITIES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_CAPABILITIES1*)0xF02B0040u)

/** \brief 44, Capabilities Register 32 to 63 */
#define SDMMC0_CAPABILITIES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_CAPABILITIES2*)0xF02B0044u)

/** \brief 48, Maximum Current Capabilities Register 0 to 31 */
#define SDMMC0_CURR_CAPABILITIES1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_CURR_CAPABILITIES1*)0xF02B0048u)

/** \brief 4C, Maximum Current Capabilities Register 32 to 63 */
#define SDMMC0_CURR_CAPABILITIES2 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_CURR_CAPABILITIES2*)0xF02B004Cu)

/** \brief 50, Force Event Register for Auto CMD Error Status register */
#define SDMMC0_FORCE_AUTO_CMD_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_FORCE_AUTO_CMD_STAT*)0xF02B0050u)

/** \brief 52, Force Event Register for Error Interrupt Status */
#define SDMMC0_FORCE_ERROR_INT_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_FORCE_ERROR_INT_STAT*)0xF02B0052u)

/** \brief 54, ADMA Error Status Register */
#define SDMMC0_ADMA_ERR_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ADMA_ERR_STAT*)0xF02B0054u)

/** \brief 58, ADMA System Address Register Low */
#define SDMMC0_ADMA_SA_LOW /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ADMA_SA_LOW*)0xF02B0058u)

/** \brief 60, Preset Value for Initialization */
#define SDMMC0_PRESET_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_PRESET_INIT*)0xF02B0060u)

/** \brief 62, Preset Value for Default Speed */
#define SDMMC0_PRESET_DS /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_PRESET_DS*)0xF02B0062u)

/** \brief 64, Preset Value for High Speed */
#define SDMMC0_PRESET_HS /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_PRESET_HS*)0xF02B0064u)

/** \brief 78, ADMA3 Integrated Descriptor Address Register - Low */
#define SDMMC0_ADMA_ID_LOW /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ADMA_ID_LOW*)0xF02B0078u)

/** \brief E8, Pointer for Vendor Specific Area 1 */
#define SDMMC0_P_VENDOR_SPECIFIC_AREA /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_P_VENDOR_SPECIFIC_AREA*)0xF02B00E8u)

/** \brief EA, Pointer for Vendor Specific Area 2 */
#define SDMMC0_P_VENDOR2_SPECIFIC_AREA /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_P_VENDOR2_SPECIFIC_AREA*)0xF02B00EAu)

/** \brief FC, Slot Interrupt Status Register */
#define SDMMC0_SLOT_INTR_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_SLOT_INTR_STATUS*)0xF02B00FCu)

/** \brief FE, Host Controller Version */
#define SDMMC0_HOST_CNTRL_VERS /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_HOST_CNTRL_VERS*)0xF02B00FEu)

/** \brief 180, MSHC version */
#define SDMMC0_MSHC_VER_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_MSHC_VER_ID*)0xF02B0180u)

/** \brief 184, MSHC version type */
#define SDMMC0_MSHC_VER_TYPE /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_MSHC_VER_TYPE*)0xF02B0184u)

/** \brief 190, DMA burst control register */
#define SDMMC0_MBIU_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_MBIU_CTRL*)0xF02B0190u)

/** \brief 1AC, eMMC Control register */
#define SDMMC0_EMMC_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_EMMC_CTRL*)0xF02B01ACu)

/** \brief 1AE, eMMC Boot Control register */
#define SDMMC0_BOOT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_BOOT_CTRL*)0xF02B01AEu)

/** \brief 280, Embedded Control register */
#define SDMMC0_EMBEDDED_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_EMBEDDED_CTRL*)0xF02B0280u)

/** \brief 300, Clock Control Register */
#define SDMMC0_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_CLC*)0xF02B0300u)

/** \brief 304, Module Identification Register */
#define SDMMC0_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ID*)0xF02B0304u)

/** \brief 30C, Access Enable Register 0 */
#define SDMMC0_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ACCEN0*)0xF02B030Cu)

/** \brief 310, Access Enable Register 1 */
#define SDMMC0_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_ACCEN1*)0xF02B0310u)

/** \brief 314, Kernel Reset Register 0 */
#define SDMMC0_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_KRST0*)0xF02B0314u)

/** \brief 318, Kernel Reset Register 1 */
#define SDMMC0_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_KRST1*)0xF02B0318u)

/** \brief 31C, Kernel Reset Status Clear Register */
#define SDMMC0_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_SDMMC_KRSTCLR*)0xF02B031Cu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXSDMMC_REG_H */
