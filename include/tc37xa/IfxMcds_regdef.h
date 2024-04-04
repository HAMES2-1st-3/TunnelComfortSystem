/**
 * \file IfxMcds_regdef.h
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
 * \defgroup IfxSfr_Mcds_Registers Mcds Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Mcds_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Mcds_Registers
 * 
 * \defgroup IfxSfr_Mcds_Registers_union Register unions
 * \ingroup IfxSfr_Mcds_Registers
 * 
 * \defgroup IfxSfr_Mcds_Registers_struct Memory map
 * \ingroup IfxSfr_Mcds_Registers
 */
#ifndef IFXMCDS_REGDEF_H
#define IFXMCDS_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Mcds_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_MCDS_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID 0 - EN0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID 1 - EN1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID 2 - EN2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID 3 - EN3 (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID 4 - EN4 (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID 5 - EN5 (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID 6 - EN6 (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID 7 - EN7 (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID 8 - EN8 (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID 9 - EN9 (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID 10 - EN10 (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID 11 - EN11 (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID 12 - EN12 (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID 13 - EN13 (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID 14 - EN14 (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID 15 - EN15 (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID 16 - EN16 (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID 17 - EN17 (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID 18 - EN18 (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID 19 - EN19 (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID 20 - EN20 (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID 21 - EN21 (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID 22 - EN22 (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID 23 - EN23 (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID 24 - EN24 (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID 25 - EN25 (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID 26 - EN26 (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID 27 - EN27 (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID 28 - EN28 (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID 29 - EN29 (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID 30 - EN30 (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID 31 - EN31 (rw) */
} Ifx_MCDS_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_MCDS_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_MCDS_ACCEN1_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_MCDS_CLC_Bits
{
    Ifx_Strict_32Bit DISR:1;          /**< \brief [0:0] Disable Request Bit - DISR (rw) */
    Ifx_Strict_32Bit DISS:1;          /**< \brief [1:1] Disable Status Bit - DISS (rh) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_MCDS_CLC_Bits;

/** \brief MCDS Control Register */
typedef struct _Ifx_MCDS_CT_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit KOK:1;           /**< \brief [5:5] Key OK Flag - KOK (rh) */
    Ifx_Strict_32Bit CLRK:1;          /**< \brief [6:6] Clear Key OK Flag - CLRK (w) */
    Ifx_Strict_32Bit KAV:1;           /**< \brief [7:7] Key Available Flag - KAV (rh) */
    Ifx_Strict_32Bit reserved_8:5;    /**< \brief [12:8] \internal Reserved */
    Ifx_Strict_32Bit EN:1;            /**< \brief [13:13] MCDS Enable Flag - EN (rh) */
    Ifx_Strict_32Bit CLRE:1;          /**< \brief [14:14] Clear MCDS Enable Flag - CLRE (w) */
    Ifx_Strict_32Bit SETE:1;          /**< \brief [15:15] Set MCDS Enable Flag - SETE (w) */
    Ifx_Strict_32Bit BED:1;           /**< \brief [16:16] Bus Error Disable Flag - BED (rw) */
    Ifx_Strict_32Bit reserved_17:2;    /**< \brief [18:17] \internal Reserved */
    Ifx_Strict_32Bit BED_P:1;         /**< \brief [19:19] Bus Error Disable Protection - BED_P (w) */
    Ifx_Strict_32Bit reserved_20:1;    /**< \brief [20:20] \internal Reserved */
    Ifx_Strict_32Bit IRA:1;           /**< \brief [21:21] Invalid Read Access Flag - IRA (rh) */
    Ifx_Strict_32Bit CLRI:1;          /**< \brief [22:22] Clear Invalid Access Bits - CLRI (w) */
    Ifx_Strict_32Bit IWA:1;           /**< \brief [23:23] Invalid Write Access Flag - IWA (rh) */
    Ifx_Strict_32Bit reserved_24:5;    /**< \brief [28:24] \internal Reserved */
    Ifx_Strict_32Bit RES:1;           /**< \brief [29:29] MCDS ResetFlag - RES (rh) */
    Ifx_Strict_32Bit reserved_30:1;    /**< \brief [30:30] \internal Reserved */
    Ifx_Strict_32Bit SETR:1;          /**< \brief [31:31] MCDS ResetRequest Bit - SETR (w) */
} Ifx_MCDS_CT_Bits;

/** \brief Trace Buffer Bottom Register */
typedef struct _Ifx_MCDS_FIFOBOT_Bits
{
    Ifx_Strict_32Bit reserved_0:12;    /**< \brief [11:0] \internal Reserved */
    Ifx_Strict_32Bit BOTTOM:9;        /**< \brief [20:12] Trace Buffer lower Bound - BOTTOM (rw) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFOBOT_Bits;

/** \brief Trace Buffer Control Register */
typedef struct _Ifx_MCDS_FIFOCTL_Bits
{
    Ifx_Strict_32Bit TRG:1;           /**< \brief [0:0] Trigger Received Flag - TRG (rh) */
    Ifx_Strict_32Bit FFE:1;           /**< \brief [1:1] FIFO Feeder Empty - FFE (rh) */
    Ifx_Strict_32Bit TME:1;           /**< \brief [2:2] Trace Buffer Access Error - TME (rh) */
    Ifx_Strict_32Bit reserved_3:4;    /**< \brief [6:3] \internal Reserved */
    Ifx_Strict_32Bit DMC_MODE:1;      /**< \brief [7:7] Message sorting algorithm - DMC_MODE (rw) */
    Ifx_Strict_32Bit DMC_MODE_P:1;    /**< \brief [8:8] DMC Mode write protection - DMC_MODE_P (w) */
    Ifx_Strict_32Bit TRDIS:1;         /**< \brief [9:9] Trigger DisableFlag - TRDIS (rh) */
    Ifx_Strict_32Bit TRON:1;          /**< \brief [10:10] ClearTrigger DisableFlag - TRON (w) */
    Ifx_Strict_32Bit TROFF:1;         /**< \brief [11:11] SetTrigger DisableFlag - TROFF (w) */
    Ifx_Strict_32Bit reserved_12:1;    /**< \brief [12:12] \internal Reserved */
    Ifx_Strict_32Bit FLSH:1;          /**< \brief [13:13] FlushFlag - FLSH (rh) */
    Ifx_Strict_32Bit CLR:1;           /**< \brief [14:14] ClearFlushFlag - CLR (w) */
    Ifx_Strict_32Bit SET:1;           /**< \brief [15:15] SetFlushFlag - SET (w) */
    Ifx_Strict_32Bit NTN:1;           /**< \brief [16:16] Next Tile Now request - NTN (w) */
    Ifx_Strict_32Bit reserved_17:7;    /**< \brief [23:17] \internal Reserved */
    Ifx_Strict_32Bit CTTO:7;          /**< \brief [30:24] Continuous Trace Time Out - CTTO (rw) */
    Ifx_Strict_32Bit CTTO_P:1;        /**< \brief [31:31] CTTO write protection - CTTO_P (w) */
} Ifx_MCDS_FIFOCTL_Bits;

/** \brief Trace Buffer Write Pointer */
typedef struct _Ifx_MCDS_FIFONOW_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit NOW:16;          /**< \brief [20:5] Trace Buffer Current Write Pointer - NOW (rh) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFONOW_Bits;

/** \brief Trace Buffer Captured Write Pointer */
typedef struct _Ifx_MCDS_FIFONTNOW_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit NTNOW:16;        /**< \brief [20:5] Trace Buffer Captured Write Pointer - NTNOW (rh) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFONTNOW_Bits;

/** \brief FIFO Overflow Counter Register */
typedef struct _Ifx_MCDS_FIFOOVRCNT_Bits
{
    Ifx_Strict_32Bit COUNT:8;         /**< \brief [7:0] FIFO Overflow Counter - COUNT (rh) */
    Ifx_Strict_32Bit reserved_8:7;    /**< \brief [14:8] \internal Reserved */
    Ifx_Strict_32Bit CLR:1;           /**< \brief [15:15] Clear counter - CLR (w) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_FIFOOVRCNT_Bits;

/** \brief Trace Buffer PRE/POST Register */
typedef struct _Ifx_MCDS_FIFOPRE_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit PRE:16;          /**< \brief [20:5] Trace Buffer Pre-Trigger Area Size - PRE (rw) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFOPRE_Bits;

/** \brief Trace Buffer Top Register */
typedef struct _Ifx_MCDS_FIFOTOP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit TOP:16;          /**< \brief [20:5] Trace Buffer upper Bound - TOP (rw) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFOTOP_Bits;

/** \brief Trace Buffer Comparator Register */
typedef struct _Ifx_MCDS_FIFOWARN_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit WARN:16;         /**< \brief [20:5] Trace Buffer Warn Level - WARN (rw) */
    Ifx_Strict_32Bit reserved_21:9;    /**< \brief [29:21] \internal Reserved */
    Ifx_Strict_32Bit OCDEN:1;         /**< \brief [30:30] Enable Trigger Output - OCDEN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Enable Trigger Generation - EN (rw) */
} Ifx_MCDS_FIFOWARN_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_MCDS_ID_Bits
{
    Ifx_Strict_32Bit MOD_REV:8;       /**< \brief [7:0] Module Revision - MOD_REV (r) */
    Ifx_Strict_32Bit MOD_TYPE:8;      /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_Strict_32Bit MOD_NUMBER:16;    /**< \brief [31:16] Module Number - MOD_NUMBER (r) */
} Ifx_MCDS_ID_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_MCXACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_MCXACT_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_MCXEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_MCXEVT_Bits;

/** \brief Performance Counter Configuration Register */
typedef struct _Ifx_MCDS_MCXPERFCFG_Bits
{
    Ifx_Strict_32Bit DFLASH_MASTER:4;    /**< \brief [3:0] DFLASH access Master ID comparator bit mask - DFLASH_MASTER (rw) */
    Ifx_Strict_32Bit reserved_4:3;    /**< \brief [6:4] \internal Reserved */
    Ifx_Strict_32Bit DFLASH_MASTER_EN:1;    /**< \brief [7:7] DFLASH access Master ID comparator enable - DFLASH_MASTER_EN (rw) */
    Ifx_Strict_32Bit PFLASH_MASTER:4;    /**< \brief [11:8] PFLASH access Master ID comparator bit mask - PFLASH_MASTER (rw) */
    Ifx_Strict_32Bit reserved_12:3;    /**< \brief [14:12] \internal Reserved */
    Ifx_Strict_32Bit PFLASH_MASTER_EN:1;    /**< \brief [15:15] PFLASH access Master ID comparator enable - PFLASH_MASTER_EN (rw) */
    Ifx_Strict_32Bit PFLASH_ACC_EN:1;    /**< \brief [16:16] PFLASH access (trigger information) enable - PFLASH_ACC_EN (rw) */
    Ifx_Strict_32Bit PFLASH_WAIT_EN:1;    /**< \brief [17:17] PFLASH wait for prefetch buffer (trigger information) enable - PFLASH_WAIT_EN (rw) */
    Ifx_Strict_32Bit PFLASH_PRE_EN:1;    /**< \brief [18:18] PFLASH access hit prefetch buffer (trigger information) enable - PFLASH_PRE_EN (rw) */
    Ifx_Strict_32Bit PFLASH_LINE_EN:1;    /**< \brief [19:19] PFLASH access hit read line buffer (trigger information) enable - PFLASH_LINE_EN (rw) */
    Ifx_Strict_32Bit CPUMEM_MASTER:4;    /**< \brief [23:20] CPUMEM access Master ID comparator bit mask - CPUMEM_MASTER (rw) */
    Ifx_Strict_32Bit reserved_24:3;    /**< \brief [26:24] \internal Reserved */
    Ifx_Strict_32Bit CPUMEM_MASTER_EN:1;    /**< \brief [27:27] CPUMEM access Master ID comparator enable - CPUMEM_MASTER_EN (rw) */
    Ifx_Strict_32Bit PSPR_HIT_EN:1;    /**< \brief [28:28] PSPR access hit (trigger information) enable - PSPR_HIT_EN (rw) */
    Ifx_Strict_32Bit DSPR_HIT_EN:1;    /**< \brief [29:29] DSPR access hit (trigger information) enable - DSPR_HIT_EN (rw) */
    Ifx_Strict_32Bit DLMU_HIT_EN:1;    /**< \brief [30:30] DLMU access hit (trigger information) enable - DLMU_HIT_EN (rw) */
    Ifx_Strict_32Bit reserved_31:1;    /**< \brief [31:31] \internal Reserved */
} Ifx_MCDS_MCXPERFCFG_Bits;

/** \brief Counter Control Register */
typedef struct _Ifx_MCDS_MCX_CCL_Bits
{
    Ifx_Strict_32Bit INC0:7;          /**< \brief [6:0] Count Input Selector - INC0 (rw) */
    Ifx_Strict_32Bit ILV0:1;          /**< \brief [7:7] Count Input Level Mode - ILV0 (rw) */
    Ifx_Strict_32Bit CLR0:6;          /**< \brief [13:8] Clear Input Selector - CLR0 (rw) */
    Ifx_Strict_32Bit reserved_14:1;    /**< \brief [14:14] \internal Reserved */
    Ifx_Strict_32Bit CLV0:1;          /**< \brief [15:15] Clear Input Level Mode - CLV0 (rw) */
    Ifx_Strict_32Bit INC1:7;          /**< \brief [22:16] Count Input Selector - INC1 (rw) */
    Ifx_Strict_32Bit ILV1:1;          /**< \brief [23:23] Count Input Level Mode - ILV1 (rw) */
    Ifx_Strict_32Bit CLR1:6;          /**< \brief [29:24] Clear Input Selector - CLR1 (rw) */
    Ifx_Strict_32Bit reserved_30:1;    /**< \brief [30:30] \internal Reserved */
    Ifx_Strict_32Bit CLV1:1;          /**< \brief [31:31] Clear Input Level Mode - CLV1 (rw) */
} Ifx_MCDS_MCX_CCL_Bits;

/** \brief Current Count Register */
typedef struct _Ifx_MCDS_MCX_CNT_Bits
{
    Ifx_Strict_32Bit COUNT:16;        /**< \brief [15:0] Current Counter - COUNT (rh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_MCX_CNT_Bits;

/** \brief Counter Limit Register */
typedef struct _Ifx_MCDS_MCX_LMT_Bits
{
    Ifx_Strict_32Bit LIMIT:16;        /**< \brief [15:0] Counter Limit - LIMIT (rw) */
    Ifx_Strict_32Bit reserved_16:14;    /**< \brief [29:16] \internal Reserved */
    Ifx_Strict_32Bit MOD0:1;          /**< \brief [30:30] Modulo Count Control - MOD0 (rw) */
    Ifx_Strict_32Bit MOD1:1;          /**< \brief [31:31] Modulo Count Control - MOD1 (rw) */
} Ifx_MCDS_MCX_LMT_Bits;

/** \brief MCDS Signal Source Control */
typedef struct _Ifx_MCDS_MUX_Bits
{
    Ifx_Strict_32Bit TMUX0:4;         /**< \brief [3:0] Trace Source Select 0 - TMUX0 (rw) */
    Ifx_Strict_32Bit reserved_4:3;    /**< \brief [6:4] \internal Reserved */
    Ifx_Strict_32Bit TM0_P:1;         /**< \brief [7:7] Trace Source Select 0 Protection - TM0_P (w) */
    Ifx_Strict_32Bit TMUX1:4;         /**< \brief [11:8] Trace Source Select 1 - TMUX1 (rw) */
    Ifx_Strict_32Bit reserved_12:3;    /**< \brief [14:12] \internal Reserved */
    Ifx_Strict_32Bit TM1_P:1;         /**< \brief [15:15] Trace Source Select 1 Protection - TM1_P (w) */
    Ifx_Strict_32Bit TMUX2:4;         /**< \brief [19:16] Trace Source Select 2 - TMUX2 (rw) */
    Ifx_Strict_32Bit reserved_20:3;    /**< \brief [22:20] \internal Reserved */
    Ifx_Strict_32Bit TM2_P:1;         /**< \brief [23:23] Trace Source Select 2 Protection - TM2_P (w) */
    Ifx_Strict_32Bit TMUX3:4;         /**< \brief [27:24] Trace Source Select 3 - TMUX3 (rw) */
    Ifx_Strict_32Bit POBZ_TC_EN:1;    /**< \brief [28:28] Enable POBz Trace Source - POBz_TC_EN (rw) */
    Ifx_Strict_32Bit reserved_29:1;    /**< \brief [29:29] \internal Reserved */
    Ifx_Strict_32Bit POBZ_TC_EN_P:1;    /**< \brief [30:30] Enable POBz Trace Source Protection - POBz_TC_EN_P (w) */
    Ifx_Strict_32Bit TM3_P:1;         /**< \brief [31:31] Trace Source Select 3 Protection - TM3_P (w) */
} Ifx_MCDS_MUX_Bits;

/** \brief MCDS_TC Signal Source Control */
typedef struct _Ifx_MCDS_MUX_TC_RC_Bits
{
    Ifx_Strict_32Bit TC_MUX0:2;       /**< \brief [1:0] TC_MUX Trace Source Select - TC_MUX0 (rw) */
    Ifx_Strict_32Bit TC_MUX1:2;       /**< \brief [3:2] TC_MUX Trace Source Select - TC_MUX1 (rw) */
    Ifx_Strict_32Bit TC_MUX2:2;       /**< \brief [5:4] TC_MUX Trace Source Select - TC_MUX2 (rw) */
    Ifx_Strict_32Bit TC_MUX3:2;       /**< \brief [7:6] TC_MUX Trace Source Select - TC_MUX3 (rw) */
    Ifx_Strict_32Bit TC_MUX4:2;       /**< \brief [9:8] TC_MUX Trace Source Select - TC_MUX4 (rw) */
    Ifx_Strict_32Bit TC_MUX5:2;       /**< \brief [11:10] TC_MUX Trace Source Select - TC_MUX5 (rw) */
    Ifx_Strict_32Bit reserved_12:3;    /**< \brief [14:12] \internal Reserved */
    Ifx_Strict_32Bit TC_TM_P:1;       /**< \brief [15:15] TC_MUX Trace Source Select Protection - TC_TM_P (w) */
    Ifx_Strict_32Bit reserved_16:8;    /**< \brief [23:16] \internal Reserved */
    Ifx_Strict_32Bit RC:1;            /**< \brief [24:24] Reference Clock Select - RC (rw) */
    Ifx_Strict_32Bit reserved_25:2;    /**< \brief [26:25] \internal Reserved */
    Ifx_Strict_32Bit RC_P:1;          /**< \brief [27:27] Reference Clock Select Protection - RC_P (w) */
    Ifx_Strict_32Bit reserved_28:4;    /**< \brief [31:28] \internal Reserved */
} Ifx_MCDS_MUX_TC_RC_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_MCDS_OCS_Bits
{
    Ifx_Strict_32Bit reserved_0:24;    /**< \brief [23:0] \internal Reserved */
    Ifx_Strict_32Bit SUS:4;           /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_Strict_32Bit SUS_P:1;         /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_Strict_32Bit SUSSTA:1;        /**< \brief [29:29] Suspend State(inverted busy_o) - SUSSTA (rh) */
    Ifx_Strict_32Bit reserved_30:2;    /**< \brief [31:30] \internal Reserved */
} Ifx_MCDS_OCS_Bits;

/** \brief Session ID High Register */
typedef struct _Ifx_MCDS_SESSIDH_Bits
{
    Ifx_Strict_32Bit KEY_63_32:32;    /**< \brief [31:0] Key High Word (bits [63:32]) - KEY_63_32 (w) */
} Ifx_MCDS_SESSIDH_Bits;

/** \brief Session ID Low Register */
typedef struct _Ifx_MCDS_SESSIDL_Bits
{
    Ifx_Strict_32Bit KEY_31_0:32;     /**< \brief [31:0] Key Low Word (bits [31:0]) - KEY_31_0 (w) */
} Ifx_MCDS_SESSIDL_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_SPBACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_SPBACT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SPBAC_BND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SPBAC_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SPBAC_MSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_SPBAC_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SPBAC_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SPBAC_RNG_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_SPBDCSTS_Bits
{
    Ifx_Strict_32Bit EI:1;            /**< \brief [0:0] System ENDINIT Protection Flag - EI (rh) */
    Ifx_Strict_32Bit SUS:1;           /**< \brief [1:1] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit ERR:1;           /**< \brief [2:2] Error Flag - ERR (rh) */
    Ifx_Strict_32Bit RTY:1;           /**< \brief [3:3] Retry Flag - RTY (rh) */
    Ifx_Strict_32Bit SYSRES:1;        /**< \brief [4:4] System Reset Flag - SYSRES (rh) */
    Ifx_Strict_32Bit APPRES:1;        /**< \brief [5:5] Application Reset Flag - APPRES (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [7:6] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit SAFEEI:1;        /**< \brief [8:8] Safety ENDINIT Protection Flag - SAFEEI (rh) */
    Ifx_Strict_32Bit SLEEP:1;         /**< \brief [9:9] SLEEP Request Flag - SLEEP (rh) */
    Ifx_Strict_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_MCDS_SPBDCSTS_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SPBEA_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SPBEA_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SPBEA_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_SPBEA_RNG_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_SPBEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_SPBEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SPBWD_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Data Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SPBWD_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SPBWD_MSK_Bits
{
    Ifx_Strict_32Bit MASK:32;         /**< \brief [31:0] Data Comparator bit mask - MASK (rw) */
} Ifx_MCDS_SPBWD_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SPBWD_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Data Comparator range size - RANGE (rw) */
} Ifx_MCDS_SPBWD_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_SPBWD_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:5;          /**< \brief [4:0] Bit number (1\u202631) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_5:9;    /**< \brief [13:5] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_SPBWD_SGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI1AC_BND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SRI1AC_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI1AC_MSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_SRI1AC_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI1AC_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SRI1AC_RNG_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_SRI1BALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_SRI1BALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_SRI1BALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_SRI1BALLUTD_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_SRI1BAL_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SRI1BAL_BND_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_SRI1BAL_MAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_SRI1BAL_MAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_SRI1BAL_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_SRI1BAL_RNG_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_SRI1DTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_SRI1DTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI1EA_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SRI1EA_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI1EA_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_SRI1EA_RNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI1WD_BND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_SRI1WD_BND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI1WD_HBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_SRI1WD_HBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI1WD_HMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_SRI1WD_HMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI1WD_HRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_SRI1WD_HRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI1WD_MSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_SRI1WD_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI1WD_RNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_SRI1WD_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_SRI1WD_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_SRI1WD_SGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI2AC_BND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SRI2AC_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI2AC_MSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_SRI2AC_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI2AC_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SRI2AC_RNG_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_SRI2BALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_SRI2BALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_SRI2BALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_SRI2BALLUTD_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_SRI2BAL_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SRI2BAL_BND_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_SRI2BAL_MAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_SRI2BAL_MAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_SRI2BAL_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_SRI2BAL_RNG_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_SRI2DTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_SRI2DTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI2EA_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SRI2EA_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI2EA_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_SRI2EA_RNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI2WD_BND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_SRI2WD_BND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI2WD_HBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_SRI2WD_HBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI2WD_HMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_SRI2WD_HMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI2WD_HRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_SRI2WD_HRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI2WD_MSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_SRI2WD_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI2WD_RNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_SRI2WD_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_SRI2WD_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_SRI2WD_SGN_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_SRIACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_SRIACT_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_SRIDCSTS_Bits
{
    Ifx_Strict_32Bit EI:1;            /**< \brief [0:0] System ENDINIT Protection Flag - EI (rh) */
    Ifx_Strict_32Bit SUS:1;           /**< \brief [1:1] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit ERR:1;           /**< \brief [2:2] Error Flag - ERR (rh) */
    Ifx_Strict_32Bit reserved_3:1;    /**< \brief [3:3] \internal Reserved */
    Ifx_Strict_32Bit SYSRES:1;        /**< \brief [4:4] System Reset Flag - SYSRES (rh) */
    Ifx_Strict_32Bit APPRES:1;        /**< \brief [5:5] Application Reset Flag - APPRES (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [7:6] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit SAFEEI:1;        /**< \brief [8:8] Safety ENDINIT Protection Flag - SAFEEI (rh) */
    Ifx_Strict_32Bit SLEEP:1;         /**< \brief [9:9] SLEEP Request Flag - SLEEP (rh) */
    Ifx_Strict_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_MCDS_SRIDCSTS_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_SRIEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_SRIEVT_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_TCXACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_TCXACT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXAC_BND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCXAC_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCXAC_MSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCXAC_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXAC_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCXAC_RNG_Bits;

/** \brief Compact Function Trace Register */
typedef struct _Ifx_MCDS_TCXCFT_Bits
{
    Ifx_Strict_32Bit VSHRT_FCT:10;    /**< \brief [9:0] Length of very short leaf function - VSHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_10:6;    /**< \brief [15:10] \internal Reserved */
    Ifx_Strict_32Bit SHRT_FCT:10;     /**< \brief [25:16] Length of short leaf function - SHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_26:6;    /**< \brief [31:26] \internal Reserved */
} Ifx_MCDS_TCXCFT_Bits;

/** \brief Current Process ID */
typedef struct _Ifx_MCDS_TCXCID_Bits
{
    Ifx_Strict_32Bit CURRENT:3;       /**< \brief [2:0] Current Process ID - CURRENT (rh) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCXCID_Bits;

/** \brief Current Instruction Pointer */
typedef struct _Ifx_MCDS_TCXCIP_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit CURRENT:31;      /**< \brief [31:1] Current Instruction Pointer - CURRENT (rh) */
} Ifx_MCDS_TCXCIP_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_TCXDCSTS_Bits
{
    Ifx_Strict_32Bit SUS:1;           /**< \brief [0:0] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit IDLE:1;          /**< \brief [1:1] Run Flag - IDLE (rh) */
    Ifx_Strict_32Bit HALT:1;          /**< \brief [2:2] Halted Flag - HALT (rh) */
    Ifx_Strict_32Bit ISR:1;           /**< \brief [3:3] Interrupt Service Flag - ISR (rh) */
    Ifx_Strict_32Bit HBRK:1;          /**< \brief [4:4] Hardware Break Flag - HBRK (rh) */
    Ifx_Strict_32Bit SBRK:1;          /**< \brief [5:5] Software Break Flag - SBRK (rh) */
    Ifx_Strict_32Bit reserved_6:1;    /**< \brief [6:6] \internal Reserved */
    Ifx_Strict_32Bit IEN:1;           /**< \brief [7:7] Interrupt Enable Flag - IEN (rh) */
    Ifx_Strict_32Bit DBGEN:1;         /**< \brief [8:8] Debug Enabled Flag - DBGEN (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [10:9] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit NESTED_ISR:4;    /**< \brief [14:11] Nested Interrupt Level - NESTED_ISR (rh) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCXDCSTS_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_TCXDTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_TCXDTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXEA_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCXEA_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXEA_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCXEA_RNG_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_TCXEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_TCXEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXID_BND_Bits
{
    Ifx_Strict_32Bit BOUND:3;         /**< \brief [2:0] Process ID Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCXID_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCXID_MSK_Bits
{
    Ifx_Strict_32Bit MASK:3;          /**< \brief [2:0] Process ID Comparator bit mask - MASK (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCXID_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXID_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:3;         /**< \brief [2:0] Process ID Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCXID_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCXID_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:2;          /**< \brief [1:0] Bit number (1..2) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_MCDS_TCXID_SGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXIP_BND_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit BOUND:31;        /**< \brief [31:1] IP Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCXIP_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXIP_RNG_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit RANGE:31;        /**< \brief [31:1] IP Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCXIP_RNG_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_TCXPALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_TCXPALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_TCXPALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_TCXPALLUTD_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_TCXPAL_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCXPAL_BND_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_TCXPAL_MAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_TCXPAL_MAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_TCXPAL_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_TCXPAL_RNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXWD_BND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_TCXWD_BND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXWD_HBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_TCXWD_HBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCXWD_HMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_TCXWD_HMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXWD_HRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_TCXWD_HRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCXWD_MSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_TCXWD_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXWD_RNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_TCXWD_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCXWD_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_TCXWD_SGN_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_TCYACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_TCYACT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYAC_BND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCYAC_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCYAC_MSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCYAC_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYAC_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCYAC_RNG_Bits;

/** \brief Compact Function Trace Register */
typedef struct _Ifx_MCDS_TCYCFT_Bits
{
    Ifx_Strict_32Bit VSHRT_FCT:10;    /**< \brief [9:0] Length of very short leaf function - VSHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_10:6;    /**< \brief [15:10] \internal Reserved */
    Ifx_Strict_32Bit SHRT_FCT:10;     /**< \brief [25:16] Length of short leaf function - SHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_26:6;    /**< \brief [31:26] \internal Reserved */
} Ifx_MCDS_TCYCFT_Bits;

/** \brief Current Process ID */
typedef struct _Ifx_MCDS_TCYCID_Bits
{
    Ifx_Strict_32Bit CURRENT:3;       /**< \brief [2:0] Current Process ID - CURRENT (rh) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCYCID_Bits;

/** \brief Current Instruction Pointer */
typedef struct _Ifx_MCDS_TCYCIP_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit CURRENT:31;      /**< \brief [31:1] Current Instruction Pointer - CURRENT (rh) */
} Ifx_MCDS_TCYCIP_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_TCYDCSTS_Bits
{
    Ifx_Strict_32Bit SUS:1;           /**< \brief [0:0] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit IDLE:1;          /**< \brief [1:1] Run Flag - IDLE (rh) */
    Ifx_Strict_32Bit HALT:1;          /**< \brief [2:2] Halted Flag - HALT (rh) */
    Ifx_Strict_32Bit ISR:1;           /**< \brief [3:3] Interrupt Service Flag - ISR (rh) */
    Ifx_Strict_32Bit HBRK:1;          /**< \brief [4:4] Hardware Break Flag - HBRK (rh) */
    Ifx_Strict_32Bit SBRK:1;          /**< \brief [5:5] Software Break Flag - SBRK (rh) */
    Ifx_Strict_32Bit reserved_6:1;    /**< \brief [6:6] \internal Reserved */
    Ifx_Strict_32Bit IEN:1;           /**< \brief [7:7] Interrupt Enable Flag - IEN (rh) */
    Ifx_Strict_32Bit DBGEN:1;         /**< \brief [8:8] Debug Enabled Flag - DBGEN (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [10:9] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit NESTED_ISR:4;    /**< \brief [14:11] Nested Interrupt Level - NESTED_ISR (rh) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCYDCSTS_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_TCYDTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_TCYDTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYEA_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCYEA_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYEA_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCYEA_RNG_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_TCYEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_TCYEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYID_BND_Bits
{
    Ifx_Strict_32Bit BOUND:3;         /**< \brief [2:0] Process ID Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCYID_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCYID_MSK_Bits
{
    Ifx_Strict_32Bit MASK:3;          /**< \brief [2:0] Process ID Comparator bit mask - MASK (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCYID_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYID_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:3;         /**< \brief [2:0] Process ID Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCYID_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCYID_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:2;          /**< \brief [1:0] Bit number (1..2) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_MCDS_TCYID_SGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYIP_BND_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit BOUND:31;        /**< \brief [31:1] IP Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCYIP_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYIP_RNG_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit RANGE:31;        /**< \brief [31:1] IP Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCYIP_RNG_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_TCYPALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_TCYPALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_TCYPALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_TCYPALLUTD_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_TCYPAL_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCYPAL_BND_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_TCYPAL_MAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_TCYPAL_MAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_TCYPAL_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_TCYPAL_RNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYWD_BND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_TCYWD_BND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYWD_HBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_TCYWD_HBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCYWD_HMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_TCYWD_HMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYWD_HRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_TCYWD_HRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCYWD_MSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_TCYWD_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYWD_RNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_TCYWD_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCYWD_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_TCYWD_SGN_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_TCZACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_TCZACT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZAC_BND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCZAC_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCZAC_MSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCZAC_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZAC_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCZAC_RNG_Bits;

/** \brief Compact Function Trace Register */
typedef struct _Ifx_MCDS_TCZCFT_Bits
{
    Ifx_Strict_32Bit VSHRT_FCT:10;    /**< \brief [9:0] Length of very short leaf function - VSHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_10:6;    /**< \brief [15:10] \internal Reserved */
    Ifx_Strict_32Bit SHRT_FCT:10;     /**< \brief [25:16] Length of short leaf function - SHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_26:6;    /**< \brief [31:26] \internal Reserved */
} Ifx_MCDS_TCZCFT_Bits;

/** \brief Current Process ID */
typedef struct _Ifx_MCDS_TCZCID_Bits
{
    Ifx_Strict_32Bit CURRENT:3;       /**< \brief [2:0] Current Process ID - CURRENT (rh) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCZCID_Bits;

/** \brief Current Instruction Pointer */
typedef struct _Ifx_MCDS_TCZCIP_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit CURRENT:31;      /**< \brief [31:1] Current Instruction Pointer - CURRENT (rh) */
} Ifx_MCDS_TCZCIP_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_TCZDCSTS_Bits
{
    Ifx_Strict_32Bit SUS:1;           /**< \brief [0:0] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit IDLE:1;          /**< \brief [1:1] Run Flag - IDLE (rh) */
    Ifx_Strict_32Bit HALT:1;          /**< \brief [2:2] Halted Flag - HALT (rh) */
    Ifx_Strict_32Bit ISR:1;           /**< \brief [3:3] Interrupt Service Flag - ISR (rh) */
    Ifx_Strict_32Bit HBRK:1;          /**< \brief [4:4] Hardware Break Flag - HBRK (rh) */
    Ifx_Strict_32Bit SBRK:1;          /**< \brief [5:5] Software Break Flag - SBRK (rh) */
    Ifx_Strict_32Bit reserved_6:1;    /**< \brief [6:6] \internal Reserved */
    Ifx_Strict_32Bit IEN:1;           /**< \brief [7:7] Interrupt Enable Flag - IEN (rh) */
    Ifx_Strict_32Bit DBGEN:1;         /**< \brief [8:8] Debug Enabled Flag - DBGEN (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [10:9] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit NESTED_ISR:4;    /**< \brief [14:11] Nested Interrupt Level - NESTED_ISR (rh) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCZDCSTS_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_TCZDTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_TCZDTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZEA_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCZEA_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZEA_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCZEA_RNG_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_TCZEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_TCZEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZID_BND_Bits
{
    Ifx_Strict_32Bit BOUND:3;         /**< \brief [2:0] Process ID Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCZID_BND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCZID_MSK_Bits
{
    Ifx_Strict_32Bit MASK:3;          /**< \brief [2:0] Process ID Comparator bit mask - MASK (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCZID_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZID_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:3;         /**< \brief [2:0] Process ID Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCZID_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCZID_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:2;          /**< \brief [1:0] Bit number (1..2) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_MCDS_TCZID_SGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZIP_BND_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit BOUND:31;        /**< \brief [31:1] IP Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCZIP_BND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZIP_RNG_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit RANGE:31;        /**< \brief [31:1] IP Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCZIP_RNG_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_TCZPALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_TCZPALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_TCZPALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_TCZPALLUTD_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_TCZPAL_BND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCZPAL_BND_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_TCZPAL_MAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_TCZPAL_MAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_TCZPAL_RNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_TCZPAL_RNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZWD_BND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_TCZWD_BND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZWD_HBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_TCZWD_HBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCZWD_HMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_TCZWD_HMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZWD_HRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_TCZWD_HRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCZWD_MSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_TCZWD_MSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZWD_RNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_TCZWD_RNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCZWD_SGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_TCZWD_SGN_Bits;

/** \brief Clock Counter Register */
typedef struct _Ifx_MCDS_TSUEMUCNT_Bits
{
    Ifx_Strict_32Bit COUNT:32;        /**< \brief [31:0] Current Count Value - COUNT (rh) */
} Ifx_MCDS_TSUEMUCNT_Bits;

/** \brief Clock Prescaler Register */
typedef struct _Ifx_MCDS_TSUPRSCL_Bits
{
    Ifx_Strict_32Bit RELOAD:32;       /**< \brief [31:0] Prescaler Reload Value - RELOAD (rw) */
} Ifx_MCDS_TSUPRSCL_Bits;

/** \brief Clock Counter Register */
typedef struct _Ifx_MCDS_TSUREFCNT_Bits
{
    Ifx_Strict_32Bit COUNT:32;        /**< \brief [31:0] Current Count Value - COUNT (rh) */
} Ifx_MCDS_TSUREFCNT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_mcds_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_ACCEN1;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_MCDS_CLC;

/** \brief MCDS Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_CT_Bits B;               /**< \brief Bitfield access */
} Ifx_MCDS_CT;

/** \brief Trace Buffer Bottom Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOBOT_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFOBOT;

/** \brief Trace Buffer Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOCTL_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFOCTL;

/** \brief Trace Buffer Write Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFONOW_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFONOW;

/** \brief Trace Buffer Captured Write Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFONTNOW_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_FIFONTNOW;

/** \brief FIFO Overflow Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOOVRCNT_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_FIFOOVRCNT;

/** \brief Trace Buffer PRE/POST Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOPRE_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFOPRE;

/** \brief Trace Buffer Top Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOTOP_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFOTOP;

/** \brief Trace Buffer Comparator Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOWARN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_FIFOWARN;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_MCDS_ID;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_MCXACT;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_MCXEVT;

/** \brief Performance Counter Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXPERFCFG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_MCXPERFCFG;

/** \brief Counter Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCX_CCL_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_MCX_CCL;

/** \brief Current Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCX_CNT_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_MCX_CNT;

/** \brief Counter Limit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCX_LMT_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_MCX_LMT;

/** \brief MCDS Signal Source Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MUX_Bits B;              /**< \brief Bitfield access */
} Ifx_MCDS_MUX;

/** \brief MCDS_TC Signal Source Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MUX_TC_RC_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_MUX_TC_RC;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_OCS_Bits B;              /**< \brief Bitfield access */
} Ifx_MCDS_OCS;

/** \brief Session ID High Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SESSIDH_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_SESSIDH;

/** \brief Session ID Low Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SESSIDL_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_SESSIDL;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_SPBACT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBAC_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBAC_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBAC_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBAC_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBAC_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBAC_RNG;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBDCSTS;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBEA_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBEA_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBEA_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBEA_RNG;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_SPBEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBWD_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBWD_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBWD_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBWD_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBWD_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBWD_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBWD_SGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SPBWD_SGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1AC_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1AC_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1AC_MSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1AC_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1AC_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1AC_RNG;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BALLUTA_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BALLUTD_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BALLUTD;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BAL_BND_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BAL_BND;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BAL_MAP_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BAL_MAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BAL_RNG_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BAL_RNG;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1DTUFLV_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1DTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1EA_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1EA_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1EA_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1EA_RNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WD_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WD_BND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WD_HBND_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WD_HBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WD_HMSK_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WD_HMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WD_HRNG_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WD_HRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WD_MSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WD_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WD_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WD_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WD_SGN_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WD_SGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2AC_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2AC_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2AC_MSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2AC_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2AC_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2AC_RNG;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BALLUTA_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BALLUTD_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BALLUTD;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BAL_BND_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BAL_BND;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BAL_MAP_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BAL_MAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BAL_RNG_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BAL_RNG;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2DTUFLV_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2DTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2EA_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2EA_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2EA_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2EA_RNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WD_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WD_BND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WD_HBND_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WD_HBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WD_HMSK_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WD_HMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WD_HRNG_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WD_HRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WD_MSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WD_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WD_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WD_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WD_SGN_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WD_SGN;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRIACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_SRIACT;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRIDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SRIDCSTS;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRIEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_SRIEVT;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXACT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXAC_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXAC_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXAC_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXAC_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXAC_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXAC_RNG;

/** \brief Compact Function Trace Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXCFT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXCFT;

/** \brief Current Process ID   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXCID_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXCID;

/** \brief Current Instruction Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXCIP_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXCIP;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXDCSTS;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXDTUFLV_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXDTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXEA_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXEA_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXEA_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXEA_RNG;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXID_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXID_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXID_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXID_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXID_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXID_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXID_SGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXID_SGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXIP_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXIP_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXIP_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXIP_RNG;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPALLUTA_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXPALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPALLUTD_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXPALLUTD;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPAL_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXPAL_BND;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPAL_MAP_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXPAL_MAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPAL_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXPAL_RNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWD_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXWD_BND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWD_HBND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXWD_HBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWD_HMSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXWD_HMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWD_HRNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXWD_HRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWD_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXWD_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWD_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXWD_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWD_SGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXWD_SGN;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYACT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYAC_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYAC_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYAC_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYAC_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYAC_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYAC_RNG;

/** \brief Compact Function Trace Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYCFT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYCFT;

/** \brief Current Process ID   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYCID_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYCID;

/** \brief Current Instruction Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYCIP_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYCIP;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYDCSTS;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYDTUFLV_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYDTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYEA_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYEA_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYEA_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYEA_RNG;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYID_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYID_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYID_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYID_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYID_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYID_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYID_SGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYID_SGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYIP_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYIP_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYIP_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYIP_RNG;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPALLUTA_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYPALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPALLUTD_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYPALLUTD;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPAL_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYPAL_BND;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPAL_MAP_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYPAL_MAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPAL_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYPAL_RNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWD_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYWD_BND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWD_HBND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYWD_HBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWD_HMSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYWD_HMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWD_HRNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYWD_HRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWD_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYWD_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWD_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYWD_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWD_SGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYWD_SGN;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZACT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZAC_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZAC_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZAC_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZAC_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZAC_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZAC_RNG;

/** \brief Compact Function Trace Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZCFT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZCFT;

/** \brief Current Process ID   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZCID_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZCID;

/** \brief Current Instruction Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZCIP_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZCIP;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZDCSTS;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZDTUFLV_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZDTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZEA_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZEA_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZEA_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZEA_RNG;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZID_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZID_BND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZID_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZID_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZID_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZID_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZID_SGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZID_SGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZIP_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZIP_BND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZIP_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZIP_RNG;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPALLUTA_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZPALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPALLUTD_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZPALLUTD;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPAL_BND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZPAL_BND;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPAL_MAP_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZPAL_MAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPAL_RNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZPAL_RNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWD_BND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZWD_BND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWD_HBND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZWD_HBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWD_HMSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZWD_HMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWD_HRNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZWD_HRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWD_MSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZWD_MSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWD_RNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZWD_RNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWD_SGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZWD_SGN;

/** \brief Clock Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TSUEMUCNT_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TSUEMUCNT;

/** \brief Clock Prescaler Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TSUPRSCL_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TSUPRSCL;

/** \brief Clock Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TSUREFCNT_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TSUREFCNT;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_MCX_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MCX object */
typedef volatile struct _Ifx_MCDS_MCX
{
       Ifx_MCDS_MCX_CCL                    CCL;                    /**< \brief 0, Counter Control Register*/
       Ifx_MCDS_MCX_LMT                    LMT;                    /**< \brief 4, Counter Limit Register*/
       Ifx_MCDS_MCX_CNT                    CNT;                    /**< \brief 8, Current Count Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_MCX;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCXPAL_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCXPAL object */
typedef volatile struct _Ifx_MCDS_TCXPAL
{
       Ifx_MCDS_TCXPAL_BND                 BND;                    /**< \brief 0, Lookup Table Base Register*/
       Ifx_MCDS_TCXPAL_RNG                 RNG;                    /**< \brief 4, Lookup Table Range Register*/
       Ifx_MCDS_TCXPAL_MAP                 MAP;                    /**< \brief 8, Lookup Table Mapping Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_TCXPAL;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCXEA_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCXEA object */
typedef volatile struct _Ifx_MCDS_TCXEA
{
       Ifx_MCDS_TCXEA_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCXEA_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_TCXEA;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCXWD_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCXWD object */
typedef volatile struct _Ifx_MCDS_TCXWD
{
       Ifx_MCDS_TCXWD_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCXWD_HBND                 HBND;                   /**< \brief 4, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCXWD_RNG                  RNG;                    /**< \brief 8, Comparator Range Register ${x}*/
       Ifx_MCDS_TCXWD_HRNG                 HRNG;                   /**< \brief C, Comparator Range Register ${x}*/
       Ifx_MCDS_TCXWD_MSK                  MSK;                    /**< \brief 10, Comparator Mask Register ${x}*/
       Ifx_MCDS_TCXWD_HMSK                 HMSK;                   /**< \brief 14, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_18[4];         /**< \brief 18, \internal Reserved */
       Ifx_MCDS_TCXWD_SGN                  SGN;                    /**< \brief 1C, Comparator Sign Register ${x}*/
} Ifx_MCDS_TCXWD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCXAC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCXAC object */
typedef volatile struct _Ifx_MCDS_TCXAC
{
       Ifx_MCDS_TCXAC_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCXAC_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_TCXAC_MSK                  MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_TCXAC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCXID_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCXID object */
typedef volatile struct _Ifx_MCDS_TCXID
{
       Ifx_MCDS_TCXID_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCXID_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_TCXID_MSK                  MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_MCDS_TCXID_SGN                  SGN;                    /**< \brief C, Comparator Sign Register ${x}*/
} Ifx_MCDS_TCXID;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCXIP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCXIP object */
typedef volatile struct _Ifx_MCDS_TCXIP
{
       Ifx_MCDS_TCXIP_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCXIP_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_TCXIP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCYPAL_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCYPAL object */
typedef volatile struct _Ifx_MCDS_TCYPAL
{
       Ifx_MCDS_TCYPAL_BND                 BND;                    /**< \brief 0, Lookup Table Base Register*/
       Ifx_MCDS_TCYPAL_RNG                 RNG;                    /**< \brief 4, Lookup Table Range Register*/
       Ifx_MCDS_TCYPAL_MAP                 MAP;                    /**< \brief 8, Lookup Table Mapping Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_TCYPAL;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCYEA_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCYEA object */
typedef volatile struct _Ifx_MCDS_TCYEA
{
       Ifx_MCDS_TCYEA_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCYEA_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_TCYEA;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCYWD_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCYWD object */
typedef volatile struct _Ifx_MCDS_TCYWD
{
       Ifx_MCDS_TCYWD_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCYWD_HBND                 HBND;                   /**< \brief 4, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCYWD_RNG                  RNG;                    /**< \brief 8, Comparator Range Register ${x}*/
       Ifx_MCDS_TCYWD_HRNG                 HRNG;                   /**< \brief C, Comparator Range Register ${x}*/
       Ifx_MCDS_TCYWD_MSK                  MSK;                    /**< \brief 10, Comparator Mask Register ${x}*/
       Ifx_MCDS_TCYWD_HMSK                 HMSK;                   /**< \brief 14, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_18[4];         /**< \brief 18, \internal Reserved */
       Ifx_MCDS_TCYWD_SGN                  SGN;                    /**< \brief 1C, Comparator Sign Register ${x}*/
} Ifx_MCDS_TCYWD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCYAC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCYAC object */
typedef volatile struct _Ifx_MCDS_TCYAC
{
       Ifx_MCDS_TCYAC_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCYAC_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_TCYAC_MSK                  MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_TCYAC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCYID_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCYID object */
typedef volatile struct _Ifx_MCDS_TCYID
{
       Ifx_MCDS_TCYID_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCYID_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_TCYID_MSK                  MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_MCDS_TCYID_SGN                  SGN;                    /**< \brief C, Comparator Sign Register ${x}*/
} Ifx_MCDS_TCYID;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCYIP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCYIP object */
typedef volatile struct _Ifx_MCDS_TCYIP
{
       Ifx_MCDS_TCYIP_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCYIP_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_TCYIP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SPBEA_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SPBEA object */
typedef volatile struct _Ifx_MCDS_SPBEA
{
       Ifx_MCDS_SPBEA_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SPBEA_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_SPBEA;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SPBWD_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SPBWD object */
typedef volatile struct _Ifx_MCDS_SPBWD
{
       Ifx_MCDS_SPBWD_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SPBWD_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_SPBWD_MSK                  MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_MCDS_SPBWD_SGN                  SGN;                    /**< \brief C, Comparator Sign Register ${x}*/
} Ifx_MCDS_SPBWD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SPBAC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SPBAC object */
typedef volatile struct _Ifx_MCDS_SPBAC
{
       Ifx_MCDS_SPBAC_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SPBAC_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_SPBAC_MSK                  MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_SPBAC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SRI1BAL_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SRI1BAL object */
typedef volatile struct _Ifx_MCDS_SRI1BAL
{
       Ifx_MCDS_SRI1BAL_BND                BND;                    /**< \brief 0, Lookup Table Base Register*/
       Ifx_MCDS_SRI1BAL_RNG                RNG;                    /**< \brief 4, Lookup Table Range Register*/
       Ifx_MCDS_SRI1BAL_MAP                MAP;                    /**< \brief 8, Lookup Table Mapping Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_SRI1BAL;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SRI2BAL_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SRI2BAL object */
typedef volatile struct _Ifx_MCDS_SRI2BAL
{
       Ifx_MCDS_SRI2BAL_BND                BND;                    /**< \brief 0, Lookup Table Base Register*/
       Ifx_MCDS_SRI2BAL_RNG                RNG;                    /**< \brief 4, Lookup Table Range Register*/
       Ifx_MCDS_SRI2BAL_MAP                MAP;                    /**< \brief 8, Lookup Table Mapping Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_SRI2BAL;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SRI1EA_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SRI1EA object */
typedef volatile struct _Ifx_MCDS_SRI1EA
{
       Ifx_MCDS_SRI1EA_BND                 BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SRI1EA_RNG                 RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_SRI1EA;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SRI1WD_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SRI1WD object */
typedef volatile struct _Ifx_MCDS_SRI1WD
{
       Ifx_MCDS_SRI1WD_BND                 BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SRI1WD_HBND                HBND;                   /**< \brief 4, Comparator Bound Register ${x}*/
       Ifx_MCDS_SRI1WD_RNG                 RNG;                    /**< \brief 8, Comparator Range Register ${x}*/
       Ifx_MCDS_SRI1WD_HRNG                HRNG;                   /**< \brief C, Comparator Range Register ${x}*/
       Ifx_MCDS_SRI1WD_MSK                 MSK;                    /**< \brief 10, Comparator Mask Register ${x}*/
       Ifx_MCDS_SRI1WD_HMSK                HMSK;                   /**< \brief 14, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_18[4];         /**< \brief 18, \internal Reserved */
       Ifx_MCDS_SRI1WD_SGN                 SGN;                    /**< \brief 1C, Comparator Sign Register ${x}*/
} Ifx_MCDS_SRI1WD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SRI1AC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SRI1AC object */
typedef volatile struct _Ifx_MCDS_SRI1AC
{
       Ifx_MCDS_SRI1AC_BND                 BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SRI1AC_RNG                 RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_SRI1AC_MSK                 MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_SRI1AC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SRI2EA_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SRI2EA object */
typedef volatile struct _Ifx_MCDS_SRI2EA
{
       Ifx_MCDS_SRI2EA_BND                 BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SRI2EA_RNG                 RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_SRI2EA;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SRI2WD_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SRI2WD object */
typedef volatile struct _Ifx_MCDS_SRI2WD
{
       Ifx_MCDS_SRI2WD_BND                 BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SRI2WD_HBND                HBND;                   /**< \brief 4, Comparator Bound Register ${x}*/
       Ifx_MCDS_SRI2WD_RNG                 RNG;                    /**< \brief 8, Comparator Range Register ${x}*/
       Ifx_MCDS_SRI2WD_HRNG                HRNG;                   /**< \brief C, Comparator Range Register ${x}*/
       Ifx_MCDS_SRI2WD_MSK                 MSK;                    /**< \brief 10, Comparator Mask Register ${x}*/
       Ifx_MCDS_SRI2WD_HMSK                HMSK;                   /**< \brief 14, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_18[4];         /**< \brief 18, \internal Reserved */
       Ifx_MCDS_SRI2WD_SGN                 SGN;                    /**< \brief 1C, Comparator Sign Register ${x}*/
} Ifx_MCDS_SRI2WD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_SRI2AC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SRI2AC object */
typedef volatile struct _Ifx_MCDS_SRI2AC
{
       Ifx_MCDS_SRI2AC_BND                 BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_SRI2AC_RNG                 RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_SRI2AC_MSK                 MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_SRI2AC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCZPAL_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCZPAL object */
typedef volatile struct _Ifx_MCDS_TCZPAL
{
       Ifx_MCDS_TCZPAL_BND                 BND;                    /**< \brief 0, Lookup Table Base Register*/
       Ifx_MCDS_TCZPAL_RNG                 RNG;                    /**< \brief 4, Lookup Table Range Register*/
       Ifx_MCDS_TCZPAL_MAP                 MAP;                    /**< \brief 8, Lookup Table Mapping Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_TCZPAL;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCZEA_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCZEA object */
typedef volatile struct _Ifx_MCDS_TCZEA
{
       Ifx_MCDS_TCZEA_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCZEA_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_TCZEA;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCZWD_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCZWD object */
typedef volatile struct _Ifx_MCDS_TCZWD
{
       Ifx_MCDS_TCZWD_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCZWD_HBND                 HBND;                   /**< \brief 4, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCZWD_RNG                  RNG;                    /**< \brief 8, Comparator Range Register ${x}*/
       Ifx_MCDS_TCZWD_HRNG                 HRNG;                   /**< \brief C, Comparator Range Register ${x}*/
       Ifx_MCDS_TCZWD_MSK                  MSK;                    /**< \brief 10, Comparator Mask Register ${x}*/
       Ifx_MCDS_TCZWD_HMSK                 HMSK;                   /**< \brief 14, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_18[4];         /**< \brief 18, \internal Reserved */
       Ifx_MCDS_TCZWD_SGN                  SGN;                    /**< \brief 1C, Comparator Sign Register ${x}*/
} Ifx_MCDS_TCZWD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCZAC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCZAC object */
typedef volatile struct _Ifx_MCDS_TCZAC
{
       Ifx_MCDS_TCZAC_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCZAC_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_TCZAC_MSK                  MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_MCDS_TCZAC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCZID_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCZID object */
typedef volatile struct _Ifx_MCDS_TCZID
{
       Ifx_MCDS_TCZID_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCZID_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_MCDS_TCZID_MSK                  MSK;                    /**< \brief 8, Comparator Mask Register ${x}*/
       Ifx_MCDS_TCZID_SGN                  SGN;                    /**< \brief C, Comparator Sign Register ${x}*/
} Ifx_MCDS_TCZID;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_TCZIP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCZIP object */
typedef volatile struct _Ifx_MCDS_TCZIP
{
       Ifx_MCDS_TCZIP_BND                  BND;                    /**< \brief 0, Comparator Bound Register ${x}*/
       Ifx_MCDS_TCZIP_RNG                  RNG;                    /**< \brief 4, Comparator Range Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_MCDS_TCZIP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief MCDS object */
typedef volatile struct _Ifx_MCDS
{
       Ifx_MCDS_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_MCDS_OCS                        OCS;                    /**< \brief 4, OCDS Control and Status*/
       Ifx_MCDS_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_MCDS_CT                         CT;                     /**< \brief 10, MCDS Control Register*/
       Ifx_MCDS_MUX                        MUX;                    /**< \brief 14, MCDS Signal Source Control*/
       Ifx_MCDS_SESSIDL                    SESSIDL;                /**< \brief 18, Session ID Low Register*/
       Ifx_MCDS_SESSIDH                    SESSIDH;                /**< \brief 1C, Session ID High Register*/
       Ifx_MCDS_MUX_TC_RC                  MUX_TC_RC;              /**< \brief 20, MCDS_TC Signal Source Control*/
       Ifx_UReg_8Bit                       reserved_24[212];       /**< \brief 24, \internal Reserved */
       Ifx_MCDS_ACCEN1                     ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_MCDS_ACCEN0                     ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_100[256];      /**< \brief 100, \internal Reserved */
       Ifx_MCDS_FIFONOW                    FIFONOW;                /**< \brief 200, Trace Buffer Write Pointer*/
       Ifx_MCDS_FIFOBOT                    FIFOBOT;                /**< \brief 204, Trace Buffer Bottom Register*/
       Ifx_MCDS_FIFOPRE                    FIFOPRE;                /**< \brief 208, Trace Buffer PRE/POST Register*/
       Ifx_MCDS_FIFOTOP                    FIFOTOP;                /**< \brief 20C, Trace Buffer Top Register*/
       Ifx_MCDS_FIFOCTL                    FIFOCTL;                /**< \brief 210, Trace Buffer Control Register*/
       Ifx_MCDS_FIFOWARN                   FIFOWARN[2];            /**< \brief 214, Trace Buffer Comparator Register*/
       Ifx_MCDS_FIFOOVRCNT                 FIFOOVRCNT;             /**< \brief 21C, FIFO Overflow Counter Register*/
       Ifx_MCDS_FIFONTNOW                  FIFONTNOW;              /**< \brief 220, Trace Buffer Captured Write Pointer*/
       Ifx_UReg_8Bit                       reserved_224[476];      /**< \brief 224, \internal Reserved */
       Ifx_MCDS_TSUREFCNT                  TSUREFCNT;              /**< \brief 400, Clock Counter Register*/
       Ifx_MCDS_TSUPRSCL                   TSUPRSCL;               /**< \brief 404, Clock Prescaler Register*/
       Ifx_MCDS_TSUEMUCNT                  TSUEMUCNT;              /**< \brief 408, Clock Counter Register*/
       Ifx_UReg_8Bit                       reserved_40C[1012];     /**< \brief 40C, \internal Reserved */
       Ifx_MCDS_MCXEVT                     MCXEVT[24];             /**< \brief 800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_860[32];       /**< \brief 860, \internal Reserved */
       Ifx_MCDS_MCXACT                     MCXACT[81];             /**< \brief 880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_9C4[60];       /**< \brief 9C4, \internal Reserved */
       Ifx_MCDS_MCX                        MCX[32];                /**< \brief A00, */
       Ifx_MCDS_MCXPERFCFG                 MCXPERFCFG;             /**< \brief C00, Performance Counter Configuration Register*/
       Ifx_UReg_8Bit                       reserved_C04[5116];     /**< \brief C04, \internal Reserved */
       Ifx_MCDS_TCXDCSTS                   TCXDCSTS;               /**< \brief 2000, Debug Status Register*/
       Ifx_MCDS_TCXCID                     TCXCID;                 /**< \brief 2004, Current Process ID*/
       Ifx_MCDS_TCXCIP                     TCXCIP;                 /**< \brief 2008, Current Instruction Pointer*/
       Ifx_MCDS_TCXCFT                     TCXCFT;                 /**< \brief 200C, Compact Function Trace Register*/
       Ifx_UReg_8Bit                       reserved_2010[496];     /**< \brief 2010, \internal Reserved */
       Ifx_MCDS_TCXPALLUTD                 TCXPALLUTD;             /**< \brief 2200, Lookup Table Data Register*/
       Ifx_MCDS_TCXPALLUTA                 TCXPALLUTA;             /**< \brief 2204, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_2208[8];       /**< \brief 2208, \internal Reserved */
       Ifx_MCDS_TCXPAL                     TCXPAL[4];              /**< \brief 2210, */
       Ifx_UReg_8Bit                       reserved_2250[432];     /**< \brief 2250, \internal Reserved */
       Ifx_MCDS_TCXEA                      TCXEA[8];               /**< \brief 2400, */
       Ifx_MCDS_TCXWD                      TCXWD[4];               /**< \brief 2480, */
       Ifx_MCDS_TCXAC                      TCXAC[4];               /**< \brief 2500, */
       Ifx_UReg_8Bit                       reserved_2540[64];      /**< \brief 2540, \internal Reserved */
       Ifx_MCDS_TCXDTUFLV                  TCXDTUFLV;              /**< \brief 2580, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_2584[636];     /**< \brief 2584, \internal Reserved */
       Ifx_MCDS_TCXEVT                     TCXEVT[16];             /**< \brief 2800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_2840[64];      /**< \brief 2840, \internal Reserved */
       Ifx_MCDS_TCXACT                     TCXACT[24];             /**< \brief 2880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_28E0[800];     /**< \brief 28E0, \internal Reserved */
       Ifx_MCDS_TCXID                      TCXID[2];               /**< \brief 2C00, */
       Ifx_UReg_8Bit                       reserved_2C20[992];     /**< \brief 2C20, \internal Reserved */
       Ifx_MCDS_TCXIP                      TCXIP[6];               /**< \brief 3000, */
       Ifx_UReg_8Bit                       reserved_3060[4000];    /**< \brief 3060, \internal Reserved */
       Ifx_MCDS_TCYDCSTS                   TCYDCSTS;               /**< \brief 4000, Debug Status Register*/
       Ifx_MCDS_TCYCID                     TCYCID;                 /**< \brief 4004, Current Process ID*/
       Ifx_MCDS_TCYCIP                     TCYCIP;                 /**< \brief 4008, Current Instruction Pointer*/
       Ifx_MCDS_TCYCFT                     TCYCFT;                 /**< \brief 400C, Compact Function Trace Register*/
       Ifx_UReg_8Bit                       reserved_4010[496];     /**< \brief 4010, \internal Reserved */
       Ifx_MCDS_TCYPALLUTD                 TCYPALLUTD;             /**< \brief 4200, Lookup Table Data Register*/
       Ifx_MCDS_TCYPALLUTA                 TCYPALLUTA;             /**< \brief 4204, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_4208[8];       /**< \brief 4208, \internal Reserved */
       Ifx_MCDS_TCYPAL                     TCYPAL[4];              /**< \brief 4210, */
       Ifx_UReg_8Bit                       reserved_4250[432];     /**< \brief 4250, \internal Reserved */
       Ifx_MCDS_TCYEA                      TCYEA[8];               /**< \brief 4400, */
       Ifx_MCDS_TCYWD                      TCYWD[4];               /**< \brief 4480, */
       Ifx_MCDS_TCYAC                      TCYAC[4];               /**< \brief 4500, */
       Ifx_UReg_8Bit                       reserved_4540[64];      /**< \brief 4540, \internal Reserved */
       Ifx_MCDS_TCYDTUFLV                  TCYDTUFLV;              /**< \brief 4580, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_4584[636];     /**< \brief 4584, \internal Reserved */
       Ifx_MCDS_TCYEVT                     TCYEVT[16];             /**< \brief 4800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_4840[64];      /**< \brief 4840, \internal Reserved */
       Ifx_MCDS_TCYACT                     TCYACT[24];             /**< \brief 4880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_48E0[800];     /**< \brief 48E0, \internal Reserved */
       Ifx_MCDS_TCYID                      TCYID[2];               /**< \brief 4C00, */
       Ifx_UReg_8Bit                       reserved_4C20[992];     /**< \brief 4C20, \internal Reserved */
       Ifx_MCDS_TCYIP                      TCYIP[6];               /**< \brief 5000, */
       Ifx_UReg_8Bit                       reserved_5060[4000];    /**< \brief 5060, \internal Reserved */
       Ifx_MCDS_SPBDCSTS                   SPBDCSTS;               /**< \brief 6000, Debug Status Register*/
       Ifx_UReg_8Bit                       reserved_6004[1020];    /**< \brief 6004, \internal Reserved */
       Ifx_MCDS_SPBEA                      SPBEA[4];               /**< \brief 6400, */
       Ifx_UReg_8Bit                       reserved_6440[64];      /**< \brief 6440, \internal Reserved */
       Ifx_MCDS_SPBWD                      SPBWD[4];               /**< \brief 6480, */
       Ifx_UReg_8Bit                       reserved_64C0[64];      /**< \brief 64C0, \internal Reserved */
       Ifx_MCDS_SPBAC                      SPBAC[4];               /**< \brief 6500, */
       Ifx_UReg_8Bit                       reserved_6540[704];     /**< \brief 6540, \internal Reserved */
       Ifx_MCDS_SPBEVT                     SPBEVT[16];             /**< \brief 6800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_6840[64];      /**< \brief 6840, \internal Reserved */
       Ifx_MCDS_SPBACT                     SPBACT[15];             /**< \brief 6880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_68BC[1860];    /**< \brief 68BC, \internal Reserved */
       Ifx_MCDS_SRIDCSTS                   SRIDCSTS;               /**< \brief 7000, Debug Status Register*/
       Ifx_UReg_8Bit                       reserved_7004[508];     /**< \brief 7004, \internal Reserved */
       Ifx_MCDS_SRI1BALLUTD                SRI1BALLUTD;            /**< \brief 7200, Lookup Table Data Register*/
       Ifx_MCDS_SRI1BALLUTA                SRI1BALLUTA;            /**< \brief 7204, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_7208[8];       /**< \brief 7208, \internal Reserved */
       Ifx_MCDS_SRI1BAL                    SRI1BAL[4];             /**< \brief 7210, */
       Ifx_UReg_8Bit                       reserved_7250[176];     /**< \brief 7250, \internal Reserved */
       Ifx_MCDS_SRI2BALLUTD                SRI2BALLUTD;            /**< \brief 7300, Lookup Table Data Register*/
       Ifx_MCDS_SRI2BALLUTA                SRI2BALLUTA;            /**< \brief 7304, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_7308[8];       /**< \brief 7308, \internal Reserved */
       Ifx_MCDS_SRI2BAL                    SRI2BAL[4];             /**< \brief 7310, */
       Ifx_UReg_8Bit                       reserved_7350[176];     /**< \brief 7350, \internal Reserved */
       Ifx_MCDS_SRI1EA                     SRI1EA[4];              /**< \brief 7400, */
       Ifx_UReg_8Bit                       reserved_7440[64];      /**< \brief 7440, \internal Reserved */
       Ifx_MCDS_SRI1WD                     SRI1WD[4];              /**< \brief 7480, */
       Ifx_MCDS_SRI1AC                     SRI1AC[4];              /**< \brief 7500, */
       Ifx_UReg_8Bit                       reserved_7540[64];      /**< \brief 7540, \internal Reserved */
       Ifx_MCDS_SRI1DTUFLV                 SRI1DTUFLV;             /**< \brief 7580, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_7584[124];     /**< \brief 7584, \internal Reserved */
       Ifx_MCDS_SRI2EA                     SRI2EA[4];              /**< \brief 7600, */
       Ifx_UReg_8Bit                       reserved_7640[64];      /**< \brief 7640, \internal Reserved */
       Ifx_MCDS_SRI2WD                     SRI2WD[4];              /**< \brief 7680, */
       Ifx_MCDS_SRI2AC                     SRI2AC[4];              /**< \brief 7700, */
       Ifx_UReg_8Bit                       reserved_7740[64];      /**< \brief 7740, \internal Reserved */
       Ifx_MCDS_SRI2DTUFLV                 SRI2DTUFLV;             /**< \brief 7780, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_7784[124];     /**< \brief 7784, \internal Reserved */
       Ifx_MCDS_SRIEVT                     SRIEVT[16];             /**< \brief 7800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_7840[64];      /**< \brief 7840, \internal Reserved */
       Ifx_MCDS_SRIACT                     SRIACT[27];             /**< \brief 7880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_78EC[1812];    /**< \brief 78EC, \internal Reserved */
       Ifx_MCDS_TCZDCSTS                   TCZDCSTS;               /**< \brief 8000, Debug Status Register*/
       Ifx_MCDS_TCZCID                     TCZCID;                 /**< \brief 8004, Current Process ID*/
       Ifx_MCDS_TCZCIP                     TCZCIP;                 /**< \brief 8008, Current Instruction Pointer*/
       Ifx_MCDS_TCZCFT                     TCZCFT;                 /**< \brief 800C, Compact Function Trace Register*/
       Ifx_UReg_8Bit                       reserved_8010[496];     /**< \brief 8010, \internal Reserved */
       Ifx_MCDS_TCZPALLUTD                 TCZPALLUTD;             /**< \brief 8200, Lookup Table Data Register*/
       Ifx_MCDS_TCZPALLUTA                 TCZPALLUTA;             /**< \brief 8204, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_8208[8];       /**< \brief 8208, \internal Reserved */
       Ifx_MCDS_TCZPAL                     TCZPAL[4];              /**< \brief 8210, */
       Ifx_UReg_8Bit                       reserved_8250[432];     /**< \brief 8250, \internal Reserved */
       Ifx_MCDS_TCZEA                      TCZEA[8];               /**< \brief 8400, */
       Ifx_MCDS_TCZWD                      TCZWD[4];               /**< \brief 8480, */
       Ifx_MCDS_TCZAC                      TCZAC[4];               /**< \brief 8500, */
       Ifx_UReg_8Bit                       reserved_8540[64];      /**< \brief 8540, \internal Reserved */
       Ifx_MCDS_TCZDTUFLV                  TCZDTUFLV;              /**< \brief 8580, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_8584[636];     /**< \brief 8584, \internal Reserved */
       Ifx_MCDS_TCZEVT                     TCZEVT[16];             /**< \brief 8800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8840[64];      /**< \brief 8840, \internal Reserved */
       Ifx_MCDS_TCZACT                     TCZACT[24];             /**< \brief 8880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_88E0[800];     /**< \brief 88E0, \internal Reserved */
       Ifx_MCDS_TCZID                      TCZID[2];               /**< \brief 8C00, */
       Ifx_UReg_8Bit                       reserved_8C20[992];     /**< \brief 8C20, \internal Reserved */
       Ifx_MCDS_TCZIP                      TCZIP[6];               /**< \brief 9000, */
       Ifx_UReg_8Bit                       reserved_9060[28576];    /**< \brief 9060, \internal Reserved */
} Ifx_MCDS;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXMCDS_REGDEF_H */
