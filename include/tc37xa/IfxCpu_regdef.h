/**
 * \file IfxCpu_regdef.h
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
 * \defgroup IfxSfr_Cpu_Registers Cpu Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Cpu_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Cpu_Registers
 * 
 * \defgroup IfxSfr_Cpu_Registers_union Register unions
 * \ingroup IfxSfr_Cpu_Registers
 * 
 * \defgroup IfxSfr_Cpu_Registers_struct Memory map
 * \ingroup IfxSfr_Cpu_Registers
 */
#ifndef IFXCPU_REGDEF_H
#define IFXCPU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Cpu_Registers_Bitfields
 * \{  */
/** \brief CPUx Address General Purpose Register ${y} */
typedef struct _Ifx_CPU_A_Bits
{
    Ifx_Strict_32Bit ADDR:32;         /**< \brief [31:0] Address Register - ADDR (rw) */
} Ifx_CPU_A_Bits;

/** \brief CPUx Base Interrupt Vector Table Pointer */
typedef struct _Ifx_CPU_BIV_Bits
{
    Ifx_Strict_32Bit VSS:1;           /**< \brief [0:0] Vector Spacing Select - VSS (rw) */
    Ifx_Strict_32Bit BIV:31;          /**< \brief [31:1] Base Address of Interrupt Vector Table - BIV (rw) */
} Ifx_CPU_BIV_Bits;

/** \brief CPUx Overlay Mask Register ${i} */
typedef struct _Ifx_CPU_BLK_OMASK_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;        /**< \brief [16:5] Overlay Address Mask - OMASK (rw) */
    Ifx_Strict_32Bit ONE:11;          /**< \brief [27:17] Fixed "1" Values - ONE (r) */
    Ifx_Strict_32Bit reserved_28:4;    /**< \brief [31:28] \internal Reserved */
} Ifx_CPU_BLK_OMASK_Bits;

/** \brief CPUx Overlay Target Address Register ${i} */
typedef struct _Ifx_CPU_BLK_OTAR_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;        /**< \brief [27:5] Target Base - TBASE (rw) */
    Ifx_Strict_32Bit reserved_28:4;    /**< \brief [31:28] \internal Reserved */
} Ifx_CPU_BLK_OTAR_Bits;

/** \brief CPUx Redirected Address Base Register ${i} */
typedef struct _Ifx_CPU_BLK_RABR_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;        /**< \brief [21:5] Overlay Block Base Address - OBASE (rw) */
    Ifx_Strict_32Bit reserved_22:2;    /**< \brief [23:22] \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;          /**< \brief [27:24] Overlay Memory Select - OMEM (rw) */
    Ifx_Strict_32Bit reserved_28:3;    /**< \brief [30:28] \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;          /**< \brief [31:31] Overlay Enabled - OVEN (rwh) */
} Ifx_CPU_BLK_RABR_Bits;

/** \brief CPUx Base Trap Vector Table Pointer */
typedef struct _Ifx_CPU_BTV_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit BTV:31;          /**< \brief [31:1] Base Address of Trap Vector Table - BTV (rw) */
} Ifx_CPU_BTV_Bits;

/** \brief CPUx CPU Clock Cycle Count */
typedef struct _Ifx_CPU_CCNT_Bits
{
    Ifx_Strict_32Bit COUNTVALUE:31;    /**< \brief [30:0] Count Value - CountValue (rwh) */
    Ifx_Strict_32Bit SOVF:1;          /**< \brief [31:31] Sticky Overflow Bit - SOvf (rwh) */
} Ifx_CPU_CCNT_Bits;

/** \brief CPUx Counter Control */
typedef struct _Ifx_CPU_CCTRL_Bits
{
    Ifx_Strict_32Bit CM:1;            /**< \brief [0:0] Counter Mode - CM (rw) */
    Ifx_Strict_32Bit CE:1;            /**< \brief [1:1] Count Enable - CE (rw) */
    Ifx_Strict_32Bit M1:3;            /**< \brief [4:2] M1CNT Configuration - M1 (rw) */
    Ifx_Strict_32Bit M2:3;            /**< \brief [7:5] M2CNT Configuration - M2 (rw) */
    Ifx_Strict_32Bit M3:3;            /**< \brief [10:8] M3CNT Configuration - M3 (rw) */
    Ifx_Strict_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CPU_CCTRL_Bits;

/** \brief CPUx Compatibility Control Register */
typedef struct _Ifx_CPU_COMPAT_Bits
{
    Ifx_Strict_32Bit reserved_0:3;    /**< \brief [2:0] \internal Reserved */
    Ifx_Strict_32Bit RM:1;            /**< \brief [3:3] Rounding Mode Compatibility - RM (rw) */
    Ifx_Strict_32Bit SP:1;            /**< \brief [4:4] SYSCON Safety Protection Mode Compatibility - SP (rw) */
    Ifx_Strict_32Bit reserved_5:27;    /**< \brief [31:5] \internal Reserved */
} Ifx_CPU_COMPAT_Bits;

/** \brief CPUx Core Identification Register */
typedef struct _Ifx_CPU_CORE_ID_Bits
{
    Ifx_Strict_32Bit CORE_ID:3;       /**< \brief [2:0] Core Identification Number - CORE_ID (r) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_CPU_CORE_ID_Bits;

/** \brief CPUx Code Protection Range ${y} Lower Bound Register */
typedef struct _Ifx_CPU_CPR_L_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit LOWBND:27;       /**< \brief [31:5] CPRy Lower Boundary Address - LOWBND (rw) */
} Ifx_CPU_CPR_L_Bits;

/** \brief CPUx Code Protection Range ${y} Upper Bound Register */
typedef struct _Ifx_CPU_CPR_U_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit UPPBND:27;       /**< \brief [31:5] CPR0_m Upper Boundary Address - UPPBND (rw) */
} Ifx_CPU_CPR_U_Bits;

/** \brief CPUx Identification Register TC1.6.2P */
typedef struct _Ifx_CPU_CPU_ID_Bits
{
    Ifx_Strict_32Bit MOD_REV:8;       /**< \brief [7:0] Revision Number - MOD_REV (r) */
    Ifx_Strict_32Bit MOD_32B:8;       /**< \brief [15:8] 32-Bit Module Enable - MOD_32B (r) */
    Ifx_Strict_32Bit MOD:16;          /**< \brief [31:16] Module Identification Number - MOD (r) */
} Ifx_CPU_CPU_ID_Bits;

/** \brief  */
typedef struct _Ifx_CPU_CPXE_Bits
{
    Ifx_Strict_32Bit XE_N:10;         /**< \brief [9:0] Execute Enable Range select - XE[n] (rw) */
    Ifx_Strict_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_CPU_CPXE_Bits;

/** \brief CPUx Core Register Access Event */
typedef struct _Ifx_CPU_CREVT_Bits
{
    Ifx_Strict_32Bit EVTA:3;          /**< \brief [2:0] Event Associated - EVTA (rw) */
    Ifx_Strict_32Bit BBM:1;           /**< \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection - BBM (rw) */
    Ifx_Strict_32Bit BOD:1;           /**< \brief [4:4] Breakout Disable - BOD (rw) */
    Ifx_Strict_32Bit SUSP:1;          /**< \brief [5:5] CDC Suspend-Out Signal State - SUSP (rw) */
    Ifx_Strict_32Bit CNT:2;           /**< \brief [7:6] Counter - CNT (rw) */
    Ifx_Strict_32Bit reserved_8:24;    /**< \brief [31:8] \internal Reserved */
} Ifx_CPU_CREVT_Bits;

/** \brief CPUx Customer ID register */
typedef struct _Ifx_CPU_CUS_ID_Bits
{
    Ifx_Strict_32Bit CID:3;           /**< \brief [2:0] Customer ID - CID (r) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_CPU_CUS_ID_Bits;

/** \brief CPUx Data General Purpose Register ${y} */
typedef struct _Ifx_CPU_D_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data Register - DATA (rw) */
} Ifx_CPU_D_Bits;

/** \brief CPUx Data Asynchronous Trap Register */
typedef struct _Ifx_CPU_DATR_Bits
{
    Ifx_Strict_32Bit reserved_0:3;    /**< \brief [2:0] \internal Reserved */
    Ifx_Strict_32Bit SBE:1;           /**< \brief [3:3] Store Bus Error - SBE (rwh) */
    Ifx_Strict_32Bit reserved_4:5;    /**< \brief [8:4] \internal Reserved */
    Ifx_Strict_32Bit CWE:1;           /**< \brief [9:9] Cache Writeback Error - CWE (rwh) */
    Ifx_Strict_32Bit CFE:1;           /**< \brief [10:10] Cache Flush Error - CFE (rwh) */
    Ifx_Strict_32Bit reserved_11:3;    /**< \brief [13:11] \internal Reserved */
    Ifx_Strict_32Bit SOE:1;           /**< \brief [14:14] Store Overlay Error - SOE (rwh) */
    Ifx_Strict_32Bit reserved_15:1;    /**< \brief [15:15] \internal Reserved */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CPU_DATR_Bits;

/** \brief CPUx Debug Status Register */
typedef struct _Ifx_CPU_DBGSR_Bits
{
    Ifx_Strict_32Bit DE:1;            /**< \brief [0:0] Debug Enable - DE (rh) */
    Ifx_Strict_32Bit HALT:2;          /**< \brief [2:1] CPU Halt Request / Status Field - HALT (rwh) */
    Ifx_Strict_32Bit SIH:1;           /**< \brief [3:3] Suspend-in Halt - SIH (rh) */
    Ifx_Strict_32Bit SUSP:1;          /**< \brief [4:4] Current State of the Core Suspend-Out Signal - SUSP (rwh) */
    Ifx_Strict_32Bit reserved_5:1;    /**< \brief [5:5] \internal Reserved */
    Ifx_Strict_32Bit PREVSUSP:1;      /**< \brief [6:6] Previous State of Core Suspend-Out Signal - PREVSUSP (rh) */
    Ifx_Strict_32Bit PEVT:1;          /**< \brief [7:7] Posted Event - PEVT (rwh) */
    Ifx_Strict_32Bit EVTSRC:5;        /**< \brief [12:8] Event Source - EVTSRC (rh) */
    Ifx_Strict_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_CPU_DBGSR_Bits;

/** \brief CPUx Debug Trap Control Register */
typedef struct _Ifx_CPU_DBGTCR_Bits
{
    Ifx_Strict_32Bit DTA:1;           /**< \brief [0:0] Debug Trap Active Bit - DTA (rwh) */
    Ifx_Strict_32Bit reserved_1:31;    /**< \brief [31:1] \internal Reserved */
} Ifx_CPU_DBGTCR_Bits;

/** \brief CPUx Data Memory Control Register */
typedef struct _Ifx_CPU_DCON0_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit DCBYP:1;         /**< \brief [1:1] Data Cache Bypass - DCBYP (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_CPU_DCON0_Bits;

/** \brief CPUx Data Control Register 2 */
typedef struct _Ifx_CPU_DCON2_Bits
{
    Ifx_Strict_32Bit DCACHE_SZE:16;    /**< \brief [15:0] Data Cache Size - DCACHE_SZE (r) */
    Ifx_Strict_32Bit DSCRATCH_SZE:16;    /**< \brief [31:16] Data Scratch Size - DSCRATCH_SZE (r) */
} Ifx_CPU_DCON2_Bits;

/** \brief CPUx Debug Context Save Area Pointer */
typedef struct _Ifx_CPU_DCX_Bits
{
    Ifx_Strict_32Bit reserved_0:6;    /**< \brief [5:0] \internal Reserved */
    Ifx_Strict_32Bit DCXVALUE:26;     /**< \brief [31:6] Debug Context Save Area Pointer - DCXValue (rw) */
} Ifx_CPU_DCX_Bits;

/** \brief CPUx Data Error Address Register */
typedef struct _Ifx_CPU_DEADD_Bits
{
    Ifx_Strict_32Bit ERROR_ADDRESS:32;    /**< \brief [31:0] Error Address - ERROR_ADDRESS (rh) */
} Ifx_CPU_DEADD_Bits;

/** \brief CPUx Data Integrity Error Address Register */
typedef struct _Ifx_CPU_DIEAR_Bits
{
    Ifx_Strict_32Bit TA:32;           /**< \brief [31:0] Transaction Address - TA (rh) */
} Ifx_CPU_DIEAR_Bits;

/** \brief CPUx Data Integrity Error Trap Register */
typedef struct _Ifx_CPU_DIETR_Bits
{
    Ifx_Strict_32Bit IED:1;           /**< \brief [0:0] Integrity Error Detected - IED (rwh) */
    Ifx_Strict_32Bit IE_T:1;          /**< \brief [1:1] Integrity Error - Tag Memory - IE_T (rh) */
    Ifx_Strict_32Bit IE_C:1;          /**< \brief [2:2] Integrity Error - Cache Memory - IE_C (rh) */
    Ifx_Strict_32Bit IE_S:1;          /**< \brief [3:3] Integrity Error - Scratchpad Memory - IE_S (rh) */
    Ifx_Strict_32Bit IE_BI:1;         /**< \brief [4:4] Integrity Error - Bus Interface - IE_BI (rh) */
    Ifx_Strict_32Bit E_INFO:6;        /**< \brief [10:5] Error Information - E_INFO (rh) */
    Ifx_Strict_32Bit IE_UNC:1;        /**< \brief [11:11] Dual Bit Error Detected - IE_UNC (rh) */
    Ifx_Strict_32Bit IE_SP:1;         /**< \brief [12:12] Safety Protection Error Detected - IE_SP (rh) */
    Ifx_Strict_32Bit IE_BS:1;         /**< \brief [13:13] Bus Slave Access Indicator - IE_BS (rh) */
    Ifx_Strict_32Bit IE_DLMU:1;       /**< \brief [14:14] Integrity Error - DLMU - IE_DLMU (rh) */
    Ifx_Strict_32Bit IE_LPB:1;        /**< \brief [15:15] Integrity Error - Local Pflash Bank - IE_LPB (rh) */
    Ifx_Strict_32Bit IE_MTMV:1;       /**< \brief [16:16] Memory Test Mode Violation detected - IE_MTMV (rh) */
    Ifx_Strict_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_CPU_DIETR_Bits;

/** \brief CPUx Safety Protection Region DLMU Read Access Enable Register A${x} */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA_R_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) - EN (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA_R_Bits;

/** \brief CPUx  Safety Protection Region DLMU Write Access Enable Register A${x} */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA_W_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Write Access Enable for Master TAG ID n (n=0-31) - EN (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA_W_Bits;

/** \brief CPUx Safety Protection Region DLMU Read Access Enable Register B${x} */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB_R_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=32-63) - EN (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENB_R_Bits;

/** \brief CPUx  Safety Protection Region DLMU Write Access Enable Register B${x} */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB_W_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Write Access Enable for Master TAG ID n (n=32-63) - EN (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENB_W_Bits;

/** \brief CPUx  Safety Protection DLMU Region Lower Address Register ${x} */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNLA_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:27;         /**< \brief [31:5] Region Lower Address - ADDR (rw) */
} Ifx_CPU_DLMU_SPROT_RGNLA_Bits;

/** \brief CPUx  Safety protection DLMU Region Upper Address Register ${x} */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNUA_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:27;         /**< \brief [31:5] Region Upper Address - ADDR (rw) */
} Ifx_CPU_DLMU_SPROT_RGNUA_Bits;

/** \brief CPUx Debug Monitor Start Address */
typedef struct _Ifx_CPU_DMS_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit DMSVALUE:31;     /**< \brief [31:1] Debug Monitor Start Address - DMSValue (rw) */
} Ifx_CPU_DMS_Bits;

/** \brief  */
typedef struct _Ifx_CPU_DPRE_Bits
{
    Ifx_Strict_32Bit RE_N:18;         /**< \brief [17:0] Read Enable Range Select - RE[n] (rw) */
    Ifx_Strict_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_CPU_DPRE_Bits;

/** \brief CPUx Data Protection Range ${y}, Lower Bound Register */
typedef struct _Ifx_CPU_DPR_L_Bits
{
    Ifx_Strict_32Bit reserved_0:3;    /**< \brief [2:0] \internal Reserved */
    Ifx_Strict_32Bit LOWBND:29;       /**< \brief [31:3] DPRy Lower Boundary Address - LOWBND (rw) */
} Ifx_CPU_DPR_L_Bits;

/** \brief CPUx Data Protection Range ${y}, Upper Bound Register */
typedef struct _Ifx_CPU_DPR_U_Bits
{
    Ifx_Strict_32Bit reserved_0:3;    /**< \brief [2:0] \internal Reserved */
    Ifx_Strict_32Bit UPPBND:29;       /**< \brief [31:3] DPRy Upper Boundary Address - UPPBND (rw) */
} Ifx_CPU_DPR_U_Bits;

/** \brief  */
typedef struct _Ifx_CPU_DPWE_Bits
{
    Ifx_Strict_32Bit WE_N:18;         /**< \brief [17:0] Write Enable Range Select - WE[n] (rw) */
    Ifx_Strict_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_CPU_DPWE_Bits;

/** \brief CPUx Data Synchronous Trap Register */
typedef struct _Ifx_CPU_DSTR_Bits
{
    Ifx_Strict_32Bit SRE:1;           /**< \brief [0:0] Scratch Range Error - SRE (rwh) */
    Ifx_Strict_32Bit GAE:1;           /**< \brief [1:1] Global Address Error - GAE (rwh) */
    Ifx_Strict_32Bit LBE:1;           /**< \brief [2:2] Load Bus Error - LBE (rwh) */
    Ifx_Strict_32Bit DRE:1;           /**< \brief [3:3] Local DLMU Range Error - DRE (rwh) */
    Ifx_Strict_32Bit reserved_4:2;    /**< \brief [5:4] \internal Reserved */
    Ifx_Strict_32Bit CRE:1;           /**< \brief [6:6] Cache Refill Error - CRE (rwh) */
    Ifx_Strict_32Bit reserved_7:7;    /**< \brief [13:7] \internal Reserved */
    Ifx_Strict_32Bit DTME:1;          /**< \brief [14:14] DTAG MSIST Error - DTME (rwh) */
    Ifx_Strict_32Bit LOE:1;           /**< \brief [15:15] Load Overlay Error - LOE (rwh) */
    Ifx_Strict_32Bit SDE:1;           /**< \brief [16:16] Segment Difference Error - SDE (rwh) */
    Ifx_Strict_32Bit SCE:1;           /**< \brief [17:17] Segment Crossing Error - SCE (rwh) */
    Ifx_Strict_32Bit CAC:1;           /**< \brief [18:18] CSFR Access Error - CAC (rwh) */
    Ifx_Strict_32Bit MPE:1;           /**< \brief [19:19] Memory Protection Error - MPE (rwh) */
    Ifx_Strict_32Bit CLE:1;           /**< \brief [20:20] Context Location Error - CLE (rwh) */
    Ifx_Strict_32Bit reserved_21:3;    /**< \brief [23:21] \internal Reserved */
    Ifx_Strict_32Bit ALN:1;           /**< \brief [24:24] Alignment Error - ALN (rwh) */
    Ifx_Strict_32Bit reserved_25:7;    /**< \brief [31:25] \internal Reserved */
} Ifx_CPU_DSTR_Bits;

/** \brief CPUx External Event Register */
typedef struct _Ifx_CPU_EXEVT_Bits
{
    Ifx_Strict_32Bit EVTA:3;          /**< \brief [2:0] Event Associated - EVTA (rw) */
    Ifx_Strict_32Bit BBM:1;           /**< \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection - BBM (rw) */
    Ifx_Strict_32Bit BOD:1;           /**< \brief [4:4] Breakout Disable - BOD (rw) */
    Ifx_Strict_32Bit SUSP:1;          /**< \brief [5:5] CDC Suspend-Out Signal State - SUSP (rw) */
    Ifx_Strict_32Bit CNT:2;           /**< \brief [7:6] Counter - CNT (rw) */
    Ifx_Strict_32Bit reserved_8:24;    /**< \brief [31:8] \internal Reserved */
} Ifx_CPU_EXEVT_Bits;

/** \brief CPUx Free CSA List Head Pointer */
typedef struct _Ifx_CPU_FCX_Bits
{
    Ifx_Strict_32Bit FCXO:16;         /**< \brief [15:0] FCX Offset Address Field - FCXO (rwh) */
    Ifx_Strict_32Bit FCXS:4;          /**< \brief [19:16] FCX Segment Address Field - FCXS (rwh) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CPU_FCX_Bits;

/** \brief CPUx Flash Configuration Register 0 */
typedef struct _Ifx_CPU_FLASHCON0_Bits
{
    Ifx_Strict_32Bit TAG1:6;          /**< \brief [5:0] Flash Prefetch Buffer 1 Configuration (rw) */
    Ifx_Strict_32Bit reserved_6:2;    /**< \brief [7:6] \internal Reserved */
    Ifx_Strict_32Bit TAG2:6;          /**< \brief [13:8] Flash Prefetch Buffer 2 Configuration (rw) */
    Ifx_Strict_32Bit reserved_14:2;    /**< \brief [15:14] \internal Reserved */
    Ifx_Strict_32Bit TAG3:6;          /**< \brief [21:16] Flash Prefetch Buffer 3 Configuration (rw) */
    Ifx_Strict_32Bit reserved_22:2;    /**< \brief [23:22] \internal Reserved */
    Ifx_Strict_32Bit TAG4:6;          /**< \brief [29:24] Flash Prefetch Buffer 4 Configuration (rw) */
    Ifx_Strict_32Bit reserved_30:2;    /**< \brief [31:30] \internal Reserved */
} Ifx_CPU_FLASHCON0_Bits;

/** \brief CPUx Flash Configuration Register 1 */
typedef struct _Ifx_CPU_FLASHCON1_Bits
{
    Ifx_Strict_32Bit STALL:1;         /**< \brief [0:0] Stall Bus Request (rw) */
    Ifx_Strict_32Bit reserved_1:15;    /**< \brief [15:1] \internal Reserved */
    Ifx_Strict_32Bit MASKUECC:2;      /**< \brief [17:16] Mask PFLASH Uncorrectable ECC Bit Error (rw) */
    Ifx_Strict_32Bit reserved_18:6;    /**< \brief [23:18] \internal Reserved */
    Ifx_Strict_32Bit reserved_24:2;    /**< \brief [25:24] \internal Reserved */
    Ifx_Strict_32Bit reserved_26:6;    /**< \brief [31:26] \internal Reserved */
} Ifx_CPU_FLASHCON1_Bits;

/** \brief CPUx Flash Configuration Register 2 */
typedef struct _Ifx_CPU_FLASHCON2_Bits
{
    Ifx_Strict_32Bit RECDIS:2;        /**< \brief [1:0] Address Buffer Recording Disable (rw) */
    Ifx_Strict_32Bit ECCCORDIS:2;     /**< \brief [3:2] ECC Correction Disable - ECCCORDIS (rw) */
    Ifx_Strict_32Bit reserved_4:4;    /**< \brief [7:4] \internal Reserved */
    Ifx_Strict_32Bit HMARGIN:2;       /**< \brief [9:8] Hard Margin Selection (rw) */
    Ifx_Strict_32Bit MSEL:2;          /**< \brief [11:10] Margin Read Selection (rw) */
    Ifx_Strict_32Bit reserved_12:4;    /**< \brief [15:12] \internal Reserved */
    Ifx_Strict_32Bit ECCSCLR:2;       /**< \brief [17:16] Clear ECC Status Register (w) */
    Ifx_Strict_32Bit reserved_18:6;    /**< \brief [23:18] \internal Reserved */
    Ifx_Strict_32Bit SBABCLR:2;       /**< \brief [25:24] Clear SBAB Record Registers (w) */
    Ifx_Strict_32Bit DBABCLR:2;       /**< \brief [27:26] Clear DBAB Record Registers (w) */
    Ifx_Strict_32Bit MBABCLR:2;       /**< \brief [29:28] Clear MBAB Record Registers (w) */
    Ifx_Strict_32Bit ZBABCLR:2;       /**< \brief [31:30] Clear ZBAB Record Registers - ZBABCLR (w) */
} Ifx_CPU_FLASHCON2_Bits;

/** \brief CPUx Flash Configuration Register 3 */
typedef struct _Ifx_CPU_FLASHCON3_Bits
{
    Ifx_Strict_32Bit ECCERRINJ:1;     /**< \brief [0:0] ECC Error Injection (rw) */
    Ifx_Strict_32Bit EDCERRINJ:1;     /**< \brief [1:1] EDC Error Injection (rw) */
    Ifx_Strict_32Bit SBABERRINJ:1;    /**< \brief [2:2] Corrected Single Bits Address Buffer (SBAB) Error Injection (rw) */
    Ifx_Strict_32Bit DBABERRINJ:1;    /**< \brief [3:3] Corrected Double Bits Address Buffer (DBAB) Error Injection (rw) */
    Ifx_Strict_32Bit MBABERRINJ:1;    /**< \brief [4:4] Uncorrected Multi Bit Address Buffer (MBAB) Error Injection (rw) */
    Ifx_Strict_32Bit ZBABERRINJ:1;    /**< \brief [5:5] Uncorrected All Zeros Bits Address Buffer (ZBAB) Error Injection (rw) */
    Ifx_Strict_32Bit SBERERRINJ:1;    /**< \brief [6:6] Single Bit Error (SBER) Injection (rw) */
    Ifx_Strict_32Bit DBERERRINJ:1;    /**< \brief [7:7] Double Bit Error (DBER) Injection (rw) */
    Ifx_Strict_32Bit NVMCERRINJ:1;    /**< \brief [8:8] NVM Configuration (NVMCER) Injection (rw) */
    Ifx_Strict_32Bit FLCONERRINJ:1;    /**< \brief [9:9] Flashcon Error (FLCONER) Injection (rw) */
    Ifx_Strict_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_CPU_FLASHCON3_Bits;

/** \brief CPUx Flash Configuration Register 4 */
typedef struct _Ifx_CPU_FLASHCON4_Bits
{
    Ifx_Strict_32Bit DDIS:1;          /**< \brief [0:0] Disable direct LPB access (rw) */
    Ifx_Strict_32Bit reserved_1:31;    /**< \brief [31:1] \internal Reserved */
} Ifx_CPU_FLASHCON4_Bits;

/** \brief CPUx Trap Control Register */
typedef struct _Ifx_CPU_FPU_TRAP_CON_Bits
{
    Ifx_Strict_32Bit TST:1;           /**< \brief [0:0] Trap Status - TST (rh) */
    Ifx_Strict_32Bit TCL:1;           /**< \brief [1:1] Trap Clear - TCL (w) */
    Ifx_Strict_32Bit reserved_2:6;    /**< \brief [7:2] \internal Reserved */
    Ifx_Strict_32Bit RM:2;            /**< \brief [9:8] Captured Rounding Mode - RM (rh) */
    Ifx_Strict_32Bit reserved_10:8;    /**< \brief [17:10] \internal Reserved */
    Ifx_Strict_32Bit FXE:1;           /**< \brief [18:18] FX Trap Enable - FXE (rw) */
    Ifx_Strict_32Bit FUE:1;           /**< \brief [19:19] FU Trap Enable - FUE (rw) */
    Ifx_Strict_32Bit FZE:1;           /**< \brief [20:20] FZ Trap Enable - FZE (rw) */
    Ifx_Strict_32Bit FVE:1;           /**< \brief [21:21] FV Trap Enable - FVE (rw) */
    Ifx_Strict_32Bit FIE:1;           /**< \brief [22:22] FI Trap Enable - FIE (rw) */
    Ifx_Strict_32Bit reserved_23:3;    /**< \brief [25:23] \internal Reserved */
    Ifx_Strict_32Bit FX:1;            /**< \brief [26:26] Captured FX - FX (rh) */
    Ifx_Strict_32Bit FU:1;            /**< \brief [27:27] Captured FU - FU (rh) */
    Ifx_Strict_32Bit FZ:1;            /**< \brief [28:28] Captured FZ - FZ (rh) */
    Ifx_Strict_32Bit FV:1;            /**< \brief [29:29] Captured FV - FV (rh) */
    Ifx_Strict_32Bit FI:1;            /**< \brief [30:30] Captured FI - FI (rh) */
    Ifx_Strict_32Bit reserved_31:1;    /**< \brief [31:31] \internal Reserved */
} Ifx_CPU_FPU_TRAP_CON_Bits;

/** \brief CPUx Trapping Instruction Opcode Register */
typedef struct _Ifx_CPU_FPU_TRAP_OPC_Bits
{
    Ifx_Strict_32Bit OPC:8;           /**< \brief [7:0] Captured Opcode - OPC (rh) */
    Ifx_Strict_32Bit FMT:1;           /**< \brief [8:8] Captured Instruction Format - FMT (rh) */
    Ifx_Strict_32Bit reserved_9:7;    /**< \brief [15:9] \internal Reserved */
    Ifx_Strict_32Bit DREG:4;          /**< \brief [19:16] Captured Destination Register - DREG (rh) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CPU_FPU_TRAP_OPC_Bits;

/** \brief CPUx Trapping Instruction Program Counter Register */
typedef struct _Ifx_CPU_FPU_TRAP_PC_Bits
{
    Ifx_Strict_32Bit PC:32;           /**< \brief [31:0] Captured Program Counter - PC (rh) */
} Ifx_CPU_FPU_TRAP_PC_Bits;

/** \brief CPUx Trapping Instruction Operand Register */
typedef struct _Ifx_CPU_FPU_TRAP_SRC1_Bits
{
    Ifx_Strict_32Bit SRC1:32;         /**< \brief [31:0] Captured SRC1 Operand - SRC1 (rh) */
} Ifx_CPU_FPU_TRAP_SRC1_Bits;

/** \brief CPUx Trapping Instruction Operand Register */
typedef struct _Ifx_CPU_FPU_TRAP_SRC2_Bits
{
    Ifx_Strict_32Bit SRC2:32;         /**< \brief [31:0] Captured SRC2 Operand - SRC2 (rh) */
} Ifx_CPU_FPU_TRAP_SRC2_Bits;

/** \brief CPUx Trapping Instruction Operand Register */
typedef struct _Ifx_CPU_FPU_TRAP_SRC3_Bits
{
    Ifx_Strict_32Bit SRC3:32;         /**< \brief [31:0] Captured SRC3 Operand - SRC3 (rh) */
} Ifx_CPU_FPU_TRAP_SRC3_Bits;

/** \brief CPUx Instruction Count */
typedef struct _Ifx_CPU_ICNT_Bits
{
    Ifx_Strict_32Bit COUNTVALUE:31;    /**< \brief [30:0] Count Value - CountValue (rwh) */
    Ifx_Strict_32Bit SOVF:1;          /**< \brief [31:31] Sticky Overflow Bit - SOvf (rwh) */
} Ifx_CPU_ICNT_Bits;

/** \brief CPUx Interrupt Control Register */
typedef struct _Ifx_CPU_ICR_Bits
{
    Ifx_Strict_32Bit CCPN:8;          /**< \brief [7:0] Current CPU Priority Number - CCPN (rwh) */
    Ifx_Strict_32Bit reserved_8:7;    /**< \brief [14:8] \internal Reserved */
    Ifx_Strict_32Bit IE:1;            /**< \brief [15:15] Global Interrupt Enable Bit - IE (rwh) */
    Ifx_Strict_32Bit PIPN:8;          /**< \brief [23:16] Pending Interrupt Priority Number - PIPN (rh) */
    Ifx_Strict_32Bit reserved_24:8;    /**< \brief [31:24] \internal Reserved */
} Ifx_CPU_ICR_Bits;

/** \brief CPUx Interrupt Stack Pointer */
typedef struct _Ifx_CPU_ISP_Bits
{
    Ifx_Strict_32Bit ISP:32;          /**< \brief [31:0] Interrupt Stack Pointer - ISP (rw) */
} Ifx_CPU_ISP_Bits;

/** \brief CPUx  Reset Register 0 */
typedef struct _Ifx_CPU_KRST0_Bits
{
    Ifx_Strict_32Bit RST:1;           /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_Strict_32Bit RSTSTAT:2;       /**< \brief [2:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_CPU_KRST0_Bits;

/** \brief CPUx  Reset Register 1 */
typedef struct _Ifx_CPU_KRST1_Bits
{
    Ifx_Strict_32Bit RST:1;           /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_Strict_32Bit reserved_1:31;    /**< \brief [31:1] \internal Reserved */
} Ifx_CPU_KRST1_Bits;

/** \brief CPUx Reset Clear Register */
typedef struct _Ifx_CPU_KRSTCLR_Bits
{
    Ifx_Strict_32Bit CLR:1;           /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_Strict_32Bit reserved_1:31;    /**< \brief [31:1] \internal Reserved */
} Ifx_CPU_KRSTCLR_Bits;

/** \brief CPUx Free CSA List Limit Pointer */
typedef struct _Ifx_CPU_LCX_Bits
{
    Ifx_Strict_32Bit LCXO:16;         /**< \brief [15:0] LCX Offset Field - LCXO (rw) */
    Ifx_Strict_32Bit LCXS:4;          /**< \brief [19:16] LCX Segment Address - LCXS (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CPU_LCX_Bits;

/** \brief CPUx  Safety Protection Region LPB Read Access Enable Register A */
typedef struct _Ifx_CPU_LPB_SPROT_ACCENA_R_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Access Enable for Master TAG ID n (n= 0-31) - EN (rw) */
} Ifx_CPU_LPB_SPROT_ACCENA_R_Bits;

/** \brief CPUx Safety Protection Region LPB Read Access Enable Register B */
typedef struct _Ifx_CPU_LPB_SPROT_ACCENB_R_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Access Enable for Master TAG ID n (n= 32-63) - EN (rw) */
} Ifx_CPU_LPB_SPROT_ACCENB_R_Bits;

/** \brief CPUx Multi-Count Register 1 */
typedef struct _Ifx_CPU_M1CNT_Bits
{
    Ifx_Strict_32Bit COUNTVALUE:31;    /**< \brief [30:0] Count Value - CountValue (rwh) */
    Ifx_Strict_32Bit SOVF:1;          /**< \brief [31:31] Sticky Overflow Bit - SOvf (rwh) */
} Ifx_CPU_M1CNT_Bits;

/** \brief CPUx Multi-Count Register 2 */
typedef struct _Ifx_CPU_M2CNT_Bits
{
    Ifx_Strict_32Bit COUNTVALUE:31;    /**< \brief [30:0] Count Value - CountValue (rwh) */
    Ifx_Strict_32Bit SOVF:1;          /**< \brief [31:31] Sticky Overflow Bit - SOvf (rwh) */
} Ifx_CPU_M2CNT_Bits;

/** \brief CPUx Multi-Count Register 3 */
typedef struct _Ifx_CPU_M3CNT_Bits
{
    Ifx_Strict_32Bit COUNTVALUE:31;    /**< \brief [30:0] Count Value - CountValue (rwh) */
    Ifx_Strict_32Bit SOVF:1;          /**< \brief [31:31] Sticky Overflow Bit - SOvf (rwh) */
} Ifx_CPU_M3CNT_Bits;

/** \brief CPUx  Overlay Range Select Register */
typedef struct _Ifx_CPU_OSEL_Bits
{
    Ifx_Strict_32Bit SHOVEN_X:32;     /**< \brief [31:0] Shadow Overlay Enable - SHOVEN[x] (rw) */
} Ifx_CPU_OSEL_Bits;

/** \brief CPUx Program Counter */
typedef struct _Ifx_CPU_PC_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit PC:31;           /**< \brief [31:1] Program Counter - PC (rwh) */
} Ifx_CPU_PC_Bits;

/** \brief CPUx Program Control 0 */
typedef struct _Ifx_CPU_PCON0_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit PCBYP:1;         /**< \brief [1:1] Program Cache Bypass - PCBYP (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_CPU_PCON0_Bits;

/** \brief CPUx Program Control 1 */
typedef struct _Ifx_CPU_PCON1_Bits
{
    Ifx_Strict_32Bit PCINV:1;         /**< \brief [0:0] Program Cache Invalidate - PCINV (rw) */
    Ifx_Strict_32Bit PBINV:1;         /**< \brief [1:1] Program Buffer Invalidate - PBINV (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_CPU_PCON1_Bits;

/** \brief CPUx Program Control 2 */
typedef struct _Ifx_CPU_PCON2_Bits
{
    Ifx_Strict_32Bit PCACHE_SZE:16;    /**< \brief [15:0] Program Cache Size (ICACHE) in KBytes - PCACHE_SZE (r) */
    Ifx_Strict_32Bit PSCRATCH_SZE:16;    /**< \brief [31:16] Program Scratch Size in KBytes - PSCRATCH_SZE (r) */
} Ifx_CPU_PCON2_Bits;

/** \brief CPUx Previous Context Information Register */
typedef struct _Ifx_CPU_PCXI_Bits
{
    Ifx_Strict_32Bit PCXO:16;         /**< \brief [15:0] Previous Context Pointer Offset Field - PCXO (rwh) */
    Ifx_Strict_32Bit PCXS:4;          /**< \brief [19:16] Previous Context Pointer Segment Address - PCXS (rwh) */
    Ifx_Strict_32Bit UL:1;            /**< \brief [20:20] Upper or Lower Context Tag - UL (rwh) */
    Ifx_Strict_32Bit PIE:1;           /**< \brief [21:21] Previous Interrupt Enable - PIE (rwh) */
    Ifx_Strict_32Bit PCPN:8;          /**< \brief [29:22] Previous CPU Priority Number - PCPN (rwh) */
    Ifx_Strict_32Bit reserved_30:2;    /**< \brief [31:30] \internal Reserved */
} Ifx_CPU_PCXI_Bits;

/** \brief CPUx Program Integrity Error Address Register */
typedef struct _Ifx_CPU_PIEAR_Bits
{
    Ifx_Strict_32Bit TA:32;           /**< \brief [31:0] Transaction Address - TA (rh) */
} Ifx_CPU_PIEAR_Bits;

/** \brief CPUx Program Integrity Error Trap Register */
typedef struct _Ifx_CPU_PIETR_Bits
{
    Ifx_Strict_32Bit IED:1;           /**< \brief [0:0] Integrity Error Detected - IED (rwh) */
    Ifx_Strict_32Bit IE_T:1;          /**< \brief [1:1] Integrity Error - TAG Memory - IE_T (rh) */
    Ifx_Strict_32Bit IE_C:1;          /**< \brief [2:2] Integrity Error - Cache Memory - IE_C (rh) */
    Ifx_Strict_32Bit IE_S:1;          /**< \brief [3:3] Integrity Error - Scratchpad Memory - IE_S (rh) */
    Ifx_Strict_32Bit IE_BI:1;         /**< \brief [4:4] Integrity Error - Bus Interface - IE_BI (rh) */
    Ifx_Strict_32Bit E_INFO:6;        /**< \brief [10:5] Error Information - E_INFO (rh) */
    Ifx_Strict_32Bit IE_UNC:1;        /**< \brief [11:11] Integrity Error - Uncorrectable Error Detected - IE_UNC (rh) */
    Ifx_Strict_32Bit IE_SP:1;         /**< \brief [12:12] Safety Protection Error Detected - IE_SP (rh) */
    Ifx_Strict_32Bit IE_BS:1;         /**< \brief [13:13] Bus Slave Access Indicator - IE_BS (rh) */
    Ifx_Strict_32Bit IE_ADDR:1;       /**< \brief [14:14] Address Phase error detected at SRI slave interface - IE_ADDR (rh) */
    Ifx_Strict_32Bit IE_LPB:1;        /**< \brief [15:15] Integrity Error - Local Pflash bank - IE_LPB (rh) */
    Ifx_Strict_32Bit IE_MTMV:1;       /**< \brief [16:16] Memory Test Mode Violation detected - IE_MTMV (rh) */
    Ifx_Strict_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_CPU_PIETR_Bits;

/** \brief CPUx Data Access CacheabilityRegister */
typedef struct _Ifx_CPU_PMA0_Bits
{
    Ifx_Strict_32Bit DAC:16;          /**< \brief [15:0] Data Access Cacheability Segments FHto 0H - DAC (rw) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CPU_PMA0_Bits;

/** \brief CPUx Code Access CacheabilityRegister */
typedef struct _Ifx_CPU_PMA1_Bits
{
    Ifx_Strict_32Bit CAC:16;          /**< \brief [15:0] Code Access Cacheability Segments FH-0H - CAC (rw) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CPU_PMA1_Bits;

/** \brief CPUx  Peripheral Space Identifier register */
typedef struct _Ifx_CPU_PMA2_Bits
{
    Ifx_Strict_32Bit PSI:16;          /**< \brief [15:0] Peripheral Space Identifier Segments FH-0H - PSI (r) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CPU_PMA2_Bits;

/** \brief CPUx Program Synchronous Trap Register */
typedef struct _Ifx_CPU_PSTR_Bits
{
    Ifx_Strict_32Bit FRE:1;           /**< \brief [0:0] Fetch Range Error - FRE (rwh) */
    Ifx_Strict_32Bit reserved_1:1;    /**< \brief [1:1] \internal Reserved */
    Ifx_Strict_32Bit FBE:1;           /**< \brief [2:2] Fetch Bus Error - FBE (rwh) */
    Ifx_Strict_32Bit reserved_3:9;    /**< \brief [11:3] \internal Reserved */
    Ifx_Strict_32Bit FPE:1;           /**< \brief [12:12] Fetch Peripheral Error - FPE (rwh) */
    Ifx_Strict_32Bit reserved_13:1;    /**< \brief [13:13] \internal Reserved */
    Ifx_Strict_32Bit FME:1;           /**< \brief [14:14] Fetch MSIST Error - FME (rwh) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_CPU_PSTR_Bits;

/** \brief CPUx Program Status Word */
typedef struct _Ifx_CPU_PSW_Bits
{
    Ifx_Strict_32Bit CDC:7;           /**< \brief [6:0] Call Depth Counter - CDC (rwh) */
    Ifx_Strict_32Bit CDE:1;           /**< \brief [7:7] Call Depth Count Enable - CDE (rwh) */
    Ifx_Strict_32Bit GW:1;            /**< \brief [8:8] Global Address Register Write Permission - GW (rwh) */
    Ifx_Strict_32Bit IS:1;            /**< \brief [9:9] Interrupt Stack Control - IS (rwh) */
    Ifx_Strict_32Bit IO:2;            /**< \brief [11:10] Access Privilege Level Control (I/O Privilege) - IO (rwh) */
    Ifx_Strict_32Bit PRS:2;           /**< \brief [13:12] Protection Register Set - PRS (rwh) */
    Ifx_Strict_32Bit S:1;             /**< \brief [14:14] Safe Task Identifier - S (rwh) */
    Ifx_Strict_32Bit PRS2:1;          /**< \brief [15:15] Protection Register Set MSB - PRS2 (rwh) */
    Ifx_Strict_32Bit reserved_16:8;    /**< \brief [23:16] \internal Reserved */
    Ifx_Strict_32Bit USB:8;           /**< \brief [31:24] User Status Bits - USB (rw) */
} Ifx_CPU_PSW_Bits;

/** \brief CPUx  Safety Protection Region SPR Write Access Enable Register A${i} */
typedef struct _Ifx_CPU_RGN_ACCENA_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Write Access Enable for Master TAG ID n (n=0-31) - EN (rw) */
} Ifx_CPU_RGN_ACCENA_Bits;

/** \brief CPUx  Safety Protection Region SPR Write Access Enable Register B${i} */
typedef struct _Ifx_CPU_RGN_ACCENB_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Write Access Enable for Master TAG ID n (n=32-63) - EN (rw) */
} Ifx_CPU_RGN_ACCENB_Bits;

/** \brief CPUx  Safety Protection SPR Region Lower Address Register ${i} */
typedef struct _Ifx_CPU_RGN_LA_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:27;         /**< \brief [31:5] Region Lower Address - ADDR (rw) */
} Ifx_CPU_RGN_LA_Bits;

/** \brief CPUx  Safety protection SPR Region Upper Address Register ${i} */
typedef struct _Ifx_CPU_RGN_UA_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:27;         /**< \brief [31:5] Region Upper Address - ADDR (rw) */
} Ifx_CPU_RGN_UA_Bits;

/** \brief CPUx SRI Error Generation Register */
typedef struct _Ifx_CPU_SEGEN_Bits
{
    Ifx_Strict_32Bit ADFLIP:8;        /**< \brief [7:0] Address ECC Bit Flip - ADFLIP (rw) */
    Ifx_Strict_32Bit ADTYPE:2;        /**< \brief [9:8] Type of error - ADTYPE (rw) */
    Ifx_Strict_32Bit reserved_10:21;    /**< \brief [30:10] \internal Reserved */
    Ifx_Strict_32Bit AE:1;            /**< \brief [31:31] Activate Error Enable - AE (rwh) */
} Ifx_CPU_SEGEN_Bits;

/** \brief CPUx  Safety Protection Register Access Enable Register A */
typedef struct _Ifx_CPU_SFR_SPROT_ACCENA_W_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Access Enable for Master TAG ID n (n= 0-31) - EN (rw) */
} Ifx_CPU_SFR_SPROT_ACCENA_W_Bits;

/** \brief CPUx  Safety Protection Region Access Enable Register B */
typedef struct _Ifx_CPU_SFR_SPROT_ACCENB_W_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Access Enable for Master TAG ID n (n= 32-63) - EN (rw) */
} Ifx_CPU_SFR_SPROT_ACCENB_W_Bits;

/** \brief CPUx SIST Mode Access Control Register */
typedef struct _Ifx_CPU_SMACON_Bits
{
    Ifx_Strict_32Bit reserved_0:24;    /**< \brief [23:0] \internal Reserved */
    Ifx_Strict_32Bit IODT:1;          /**< \brief [24:24] In-Order Data Transactions - IODT (rw) */
    Ifx_Strict_32Bit reserved_25:7;    /**< \brief [31:25] \internal Reserved */
} Ifx_CPU_SMACON_Bits;

/** \brief CPUx Safety Protection Region SPR Read Access Enable Register A${x} */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA_R_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) - EN (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA_R_Bits;

/** \brief CPUx Safety Protection Region SPR Read Access Enable Register B${x} */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB_R_Bits
{
    Ifx_Strict_32Bit EN:32;           /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=32-63) - EN (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENB_R_Bits;

/** \brief CPUx Software Debug Event */
typedef struct _Ifx_CPU_SWEVT_Bits
{
    Ifx_Strict_32Bit EVTA:3;          /**< \brief [2:0] Event Associated - EVTA (rw) */
    Ifx_Strict_32Bit BBM:1;           /**< \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection - BBM (rw) */
    Ifx_Strict_32Bit BOD:1;           /**< \brief [4:4] Breakout Disable - BOD (rw) */
    Ifx_Strict_32Bit SUSP:1;          /**< \brief [5:5] CDC Suspend-Out Signal State - SUSP (rw) */
    Ifx_Strict_32Bit CNT:2;           /**< \brief [7:6] Counter - CNT (rw) */
    Ifx_Strict_32Bit reserved_8:24;    /**< \brief [31:8] \internal Reserved */
} Ifx_CPU_SWEVT_Bits;

/** \brief CPUx System Configuration Register */
typedef struct _Ifx_CPU_SYSCON_Bits
{
    Ifx_Strict_32Bit FCDSF:1;         /**< \brief [0:0] Free Context List Depleted Sticky Flag - FCDSF (rwh) */
    Ifx_Strict_32Bit PROTEN:1;        /**< \brief [1:1] Memory Protection Enable - PROTEN (rw) */
    Ifx_Strict_32Bit TPROTEN:1;       /**< \brief [2:2] Temporal Protection Enable - TPROTEN (rw) */
    Ifx_Strict_32Bit IS:1;            /**< \brief [3:3] Initial State Interrupt - IS (rw) */
    Ifx_Strict_32Bit TS:1;            /**< \brief [4:4] Initial State Trap - TS (rw) */
    Ifx_Strict_32Bit reserved_5:3;    /**< \brief [7:5] \internal Reserved */
    Ifx_Strict_32Bit ESDIS:1;         /**< \brief [8:8] Emulator Space Disable (rw) */
    Ifx_Strict_32Bit reserved_9:7;    /**< \brief [15:9] \internal Reserved */
    Ifx_Strict_32Bit U1_IED:1;        /**< \brief [16:16] User-1 Instruction execution disable - U1_IED (rw) */
    Ifx_Strict_32Bit U1_IOS:1;        /**< \brief [17:17] User-1 Peripheral access as supervisor - U1_IOS (rw) */
    Ifx_Strict_32Bit reserved_18:6;    /**< \brief [23:18] \internal Reserved */
    Ifx_Strict_32Bit BHALT:1;         /**< \brief [24:24] Boot Halt - BHALT (rw) */
    Ifx_Strict_32Bit reserved_25:7;    /**< \brief [31:25] \internal Reserved */
} Ifx_CPU_SYSCON_Bits;

/** \brief CPUx Task Address Space Identifier Register */
typedef struct _Ifx_CPU_TASK_ASI_Bits
{
    Ifx_Strict_32Bit ASI:5;           /**< \brief [4:0] Address Space Identifier - ASI (rw) */
    Ifx_Strict_32Bit reserved_5:27;    /**< \brief [31:5] \internal Reserved */
} Ifx_CPU_TASK_ASI_Bits;

/** \brief CPUx Temporal Protection System Control Register */
typedef struct _Ifx_CPU_TPS_CON_Bits
{
    Ifx_Strict_32Bit TEXP0:1;         /**< \brief [0:0] Timer0 Expired Flag - TEXP0 (rh) */
    Ifx_Strict_32Bit TEXP1:1;         /**< \brief [1:1] Timer1 Expired Flag - TEXP1 (rh) */
    Ifx_Strict_32Bit TEXP2:1;         /**< \brief [2:2] Timer1 Expired Flag - TEXP2 (rh) */
    Ifx_Strict_32Bit reserved_3:13;    /**< \brief [15:3] \internal Reserved */
    Ifx_Strict_32Bit TTRAP:1;         /**< \brief [16:16] Temporal Protection Trap - TTRAP (rh) */
    Ifx_Strict_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_CPU_TPS_CON_Bits;

/** \brief CPUx Exception Timer Class Enable Register */
typedef struct _Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits
{
    Ifx_Strict_32Bit EXTIM_CLASS_EN:8;    /**< \brief [7:0] Exception Timer Class Enables - EXTIM_CLASS_EN (rw) */
    Ifx_Strict_32Bit reserved_8:24;    /**< \brief [31:8] \internal Reserved */
} Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits;

/** \brief CPUx Exception Entry Timer Current Value */
typedef struct _Ifx_CPU_TPS_EXTIM_ENTRY_CVAL_Bits
{
    Ifx_Strict_32Bit ENTRY_CVAL:12;    /**< \brief [11:0] Exception Entry Timer Current Value - ENTRY_CVAL (rh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CPU_TPS_EXTIM_ENTRY_CVAL_Bits;

/** \brief CPUx Exception Entry Timer Load Value */
typedef struct _Ifx_CPU_TPS_EXTIM_ENTRY_LVAL_Bits
{
    Ifx_Strict_32Bit reserved_0:4;    /**< \brief [3:0] \internal Reserved */
    Ifx_Strict_32Bit ENTRY_LVAL:8;    /**< \brief [11:4] Exception Entry Timer Load value - ENTRY_LVAL (rw) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CPU_TPS_EXTIM_ENTRY_LVAL_Bits;

/** \brief CPUx Exception Exit Timer Current Value */
typedef struct _Ifx_CPU_TPS_EXTIM_EXIT_CVAL_Bits
{
    Ifx_Strict_32Bit EXIT_CVAL:24;    /**< \brief [23:0] Exception Exit Timer Current Value - EXIT_CVAL (rh) */
    Ifx_Strict_32Bit reserved_24:8;    /**< \brief [31:24] \internal Reserved */
} Ifx_CPU_TPS_EXTIM_EXIT_CVAL_Bits;

/** \brief CPUx Exception Exit  Timer Load Value */
typedef struct _Ifx_CPU_TPS_EXTIM_EXIT_LVAL_Bits
{
    Ifx_Strict_32Bit reserved_0:4;    /**< \brief [3:0] \internal Reserved */
    Ifx_Strict_32Bit EXIT_LVAL:20;    /**< \brief [23:4] Exception Exit Timer Load value - EXIT_LVAL (rw) */
    Ifx_Strict_32Bit reserved_24:8;    /**< \brief [31:24] \internal Reserved */
} Ifx_CPU_TPS_EXTIM_EXIT_LVAL_Bits;

/** \brief CPUx Exception Timer FCX Register */
typedef struct _Ifx_CPU_TPS_EXTIM_FCX_Bits
{
    Ifx_Strict_32Bit EXIT_FCX:20;     /**< \brief [19:0] Exception Exit Timer FCX - EXIT_FCX (rh) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CPU_TPS_EXTIM_FCX_Bits;

/** \brief CPUx Exception Timer Status Register */
typedef struct _Ifx_CPU_TPS_EXTIM_STAT_Bits
{
    Ifx_Strict_32Bit EXIT_TIN:8;      /**< \brief [7:0] Exception Exit Timer TIN - EXIT_TIN (rwh) */
    Ifx_Strict_32Bit EXIT_CLASS:3;    /**< \brief [10:8] Exception Exit Timer Class - EXIT_CLASS (rwh) */
    Ifx_Strict_32Bit reserved_11:4;    /**< \brief [14:11] \internal Reserved */
    Ifx_Strict_32Bit EXIT_AT:1;       /**< \brief [15:15] Exception Exit Timer Alarm Triggered - EXIT_AT (rh) */
    Ifx_Strict_32Bit ENTRY_TIN:8;     /**< \brief [23:16] Exception Entry Timer TIN - ENTRY_TIN (rwh) */
    Ifx_Strict_32Bit ENTRY_CLASS:3;    /**< \brief [26:24] Exception Entry Timer Class - ENTRY_CLASS (rwh) */
    Ifx_Strict_32Bit reserved_27:4;    /**< \brief [30:27] \internal Reserved */
    Ifx_Strict_32Bit ENTRY_AT:1;      /**< \brief [31:31] Exception Entry Timer Alarm Triggered - ENTRY_AT (rh) */
} Ifx_CPU_TPS_EXTIM_STAT_Bits;

/** \brief CPUx Temporal Protection System Timer Register ${y} */
typedef struct _Ifx_CPU_TPS_TIMER_Bits
{
    Ifx_Strict_32Bit TIMER:32;        /**< \brief [31:0] Temporal Protection Timer - Timer (rwh) */
} Ifx_CPU_TPS_TIMER_Bits;

/** \brief CPUx TriggerAddressx */
typedef struct _Ifx_CPU_TRIG_ACC_Bits
{
    Ifx_Strict_32Bit T0:1;            /**< \brief [0:0] Trigger-0 - T0 (rh) */
    Ifx_Strict_32Bit T1:1;            /**< \brief [1:1] Trigger-1 - T1 (rh) */
    Ifx_Strict_32Bit T2:1;            /**< \brief [2:2] Trigger-2 - T2 (rh) */
    Ifx_Strict_32Bit T3:1;            /**< \brief [3:3] Trigger-3 - T3 (rh) */
    Ifx_Strict_32Bit T4:1;            /**< \brief [4:4] Trigger-4 - T4 (rh) */
    Ifx_Strict_32Bit T5:1;            /**< \brief [5:5] Trigger-5 - T5 (rh) */
    Ifx_Strict_32Bit T6:1;            /**< \brief [6:6] Trigger-6 - T6 (rh) */
    Ifx_Strict_32Bit T7:1;            /**< \brief [7:7] Trigger-7 - T7 (rh) */
    Ifx_Strict_32Bit reserved_8:24;    /**< \brief [31:8] \internal Reserved */
} Ifx_CPU_TRIG_ACC_Bits;

/** \brief CPUx Trigger Address ${i} */
typedef struct _Ifx_CPU_TR_ADR_Bits
{
    Ifx_Strict_32Bit ADDR:32;         /**< \brief [31:0] Comparison Address - ADDR (rw) */
} Ifx_CPU_TR_ADR_Bits;

/** \brief CPUx Trigger Event ${i} */
typedef struct _Ifx_CPU_TR_EVT_Bits
{
    Ifx_Strict_32Bit EVTA:3;          /**< \brief [2:0] Event Associated - EVTA (rw) */
    Ifx_Strict_32Bit BBM:1;           /**< \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection - BBM (rw) */
    Ifx_Strict_32Bit BOD:1;           /**< \brief [4:4] Breakout Disable - BOD (rw) */
    Ifx_Strict_32Bit SUSP:1;          /**< \brief [5:5] CDC Suspend-Out Signal State - SUSP (rw) */
    Ifx_Strict_32Bit CNT:2;           /**< \brief [7:6] Counter - CNT (rw) */
    Ifx_Strict_32Bit reserved_8:4;    /**< \brief [11:8] \internal Reserved */
    Ifx_Strict_32Bit TYP:1;           /**< \brief [12:12] Input Selection - TYP (rw) */
    Ifx_Strict_32Bit RNG:1;           /**< \brief [13:13] Compare Type - RNG (rw) */
    Ifx_Strict_32Bit reserved_14:1;    /**< \brief [14:14] \internal Reserved */
    Ifx_Strict_32Bit ASI_EN:1;        /**< \brief [15:15] Enable ASI Comparison - ASI_EN (rw) */
    Ifx_Strict_32Bit ASI:5;           /**< \brief [20:16] Address Space Identifier - ASI (rw) */
    Ifx_Strict_32Bit reserved_21:6;    /**< \brief [26:21] \internal Reserved */
    Ifx_Strict_32Bit AST:1;           /**< \brief [27:27] Address Store - AST (rw) */
    Ifx_Strict_32Bit ALD:1;           /**< \brief [28:28] Address Load - ALD (rw) */
    Ifx_Strict_32Bit reserved_29:3;    /**< \brief [31:29] \internal Reserved */
} Ifx_CPU_TR_EVT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_cpu_Registers_union
 * \{   */
/** \brief CPUx Address General Purpose Register ${y}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_A_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_A;

/** \brief CPUx Base Interrupt Vector Table Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_BIV_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_BIV;

/** \brief CPUx Overlay Mask Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_BLK_OMASK_Bits B;         /**< \brief Bitfield access */
} Ifx_CPU_BLK_OMASK;

/** \brief CPUx Overlay Target Address Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_BLK_OTAR_Bits B;          /**< \brief Bitfield access */
} Ifx_CPU_BLK_OTAR;

/** \brief CPUx Redirected Address Base Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_BLK_RABR_Bits B;          /**< \brief Bitfield access */
} Ifx_CPU_BLK_RABR;

/** \brief CPUx Base Trap Vector Table Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_BTV_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_BTV;

/** \brief CPUx CPU Clock Cycle Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CCNT_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_CCNT;

/** \brief CPUx Counter Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CCTRL_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_CCTRL;

/** \brief CPUx Compatibility Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_COMPAT_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_COMPAT;

/** \brief CPUx Core Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CORE_ID_Bits B;           /**< \brief Bitfield access */
} Ifx_CPU_CORE_ID;

/** \brief CPUx Code Protection Range ${y} Lower Bound Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CPR_L_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_CPR_L;

/** \brief CPUx Code Protection Range ${y} Upper Bound Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CPR_U_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_CPR_U;

/** \brief CPUx Identification Register TC1.6.2P   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CPU_ID_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_CPU_ID;

/** \brief    */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CPXE_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_CPXE;

/** \brief CPUx Core Register Access Event   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CREVT_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_CREVT;

/** \brief CPUx Customer ID register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_CUS_ID_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_CUS_ID;

/** \brief CPUx Data General Purpose Register ${y}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_D_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_D;

/** \brief CPUx Data Asynchronous Trap Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DATR_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_DATR;

/** \brief CPUx Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DBGSR_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_DBGSR;

/** \brief CPUx Debug Trap Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DBGTCR_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_DBGTCR;

/** \brief CPUx Data Memory Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DCON0_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_DCON0;

/** \brief CPUx Data Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DCON2_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_DCON2;

/** \brief CPUx Debug Context Save Area Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DCX_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_DCX;

/** \brief CPUx Data Error Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DEADD_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_DEADD;

/** \brief CPUx Data Integrity Error Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DIEAR_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_DIEAR;

/** \brief CPUx Data Integrity Error Trap Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DIETR_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_DIETR;

/** \brief CPUx Safety Protection Region DLMU Read Access Enable Register A${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA_R_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA_R;

/** \brief CPUx  Safety Protection Region DLMU Write Access Enable Register A${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA_W_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA_W;

/** \brief CPUx Safety Protection Region DLMU Read Access Enable Register B${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB_R_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB_R;

/** \brief CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB_W_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB_W;

/** \brief CPUx  Safety Protection DLMU Region Lower Address Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNLA_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNLA;

/** \brief CPUx  Safety protection DLMU Region Upper Address Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNUA_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNUA;

/** \brief CPUx Debug Monitor Start Address   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DMS_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_DMS;

/** \brief    */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DPRE_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_DPRE;

/** \brief CPUx Data Protection Range ${y}, Lower Bound Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DPR_L_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_DPR_L;

/** \brief CPUx Data Protection Range ${y}, Upper Bound Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DPR_U_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_DPR_U;

/** \brief    */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DPWE_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_DPWE;

/** \brief CPUx Data Synchronous Trap Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_DSTR_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_DSTR;

/** \brief CPUx External Event Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_EXEVT_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_EXEVT;

/** \brief CPUx Free CSA List Head Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FCX_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_FCX;

/** \brief CPUx Flash Configuration Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FLASHCON0_Bits B;         /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON0;

/** \brief CPUx Flash Configuration Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FLASHCON1_Bits B;         /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON1;

/** \brief CPUx Flash Configuration Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FLASHCON2_Bits B;         /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON2;

/** \brief CPUx Flash Configuration Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FLASHCON3_Bits B;         /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON3;

/** \brief CPUx Flash Configuration Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FLASHCON4_Bits B;         /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON4;

/** \brief CPUx Trap Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_CON_Bits B;      /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_CON;

/** \brief CPUx Trapping Instruction Opcode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_OPC_Bits B;      /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_OPC;

/** \brief CPUx Trapping Instruction Program Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_PC_Bits B;       /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_PC;

/** \brief CPUx Trapping Instruction Operand Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_SRC1_Bits B;     /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_SRC1;

/** \brief CPUx Trapping Instruction Operand Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_SRC2_Bits B;     /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_SRC2;

/** \brief CPUx Trapping Instruction Operand Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_SRC3_Bits B;     /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_SRC3;

/** \brief CPUx Instruction Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_ICNT_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_ICNT;

/** \brief CPUx Interrupt Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_ICR_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_ICR;

/** \brief CPUx Interrupt Stack Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_ISP_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_ISP;

/** \brief CPUx  Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_KRST0_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_KRST0;

/** \brief CPUx  Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_KRST1_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_KRST1;

/** \brief CPUx Reset Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_KRSTCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_CPU_KRSTCLR;

/** \brief CPUx Free CSA List Limit Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_LCX_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_LCX;

/** \brief CPUx  Safety Protection Region LPB Read Access Enable Register A   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_LPB_SPROT_ACCENA_R_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_LPB_SPROT_ACCENA_R;

/** \brief CPUx Safety Protection Region LPB Read Access Enable Register B   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_LPB_SPROT_ACCENB_R_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_LPB_SPROT_ACCENB_R;

/** \brief CPUx Multi-Count Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_M1CNT_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_M1CNT;

/** \brief CPUx Multi-Count Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_M2CNT_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_M2CNT;

/** \brief CPUx Multi-Count Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_M3CNT_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_M3CNT;

/** \brief CPUx  Overlay Range Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_OSEL_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_OSEL;

/** \brief CPUx Program Counter   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PC_Bits B;                /**< \brief Bitfield access */
} Ifx_CPU_PC;

/** \brief CPUx Program Control 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PCON0_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_PCON0;

/** \brief CPUx Program Control 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PCON1_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_PCON1;

/** \brief CPUx Program Control 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PCON2_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_PCON2;

/** \brief CPUx Previous Context Information Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PCXI_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_PCXI;

/** \brief CPUx Program Integrity Error Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PIEAR_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_PIEAR;

/** \brief CPUx Program Integrity Error Trap Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PIETR_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_PIETR;

/** \brief CPUx Data Access CacheabilityRegister   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PMA0_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_PMA0;

/** \brief CPUx Code Access CacheabilityRegister   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PMA1_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_PMA1;

/** \brief CPUx  Peripheral Space Identifier register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PMA2_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_PMA2;

/** \brief CPUx Program Synchronous Trap Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PSTR_Bits B;              /**< \brief Bitfield access */
} Ifx_CPU_PSTR;

/** \brief CPUx Program Status Word   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_PSW_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_PSW;

/** \brief CPUx  Safety Protection Region SPR Write Access Enable Register A${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_RGN_ACCENA_Bits B;        /**< \brief Bitfield access */
} Ifx_CPU_RGN_ACCENA;

/** \brief CPUx  Safety Protection Region SPR Write Access Enable Register B${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_RGN_ACCENB_Bits B;        /**< \brief Bitfield access */
} Ifx_CPU_RGN_ACCENB;

/** \brief CPUx  Safety Protection SPR Region Lower Address Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_RGN_LA_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_RGN_LA;

/** \brief CPUx  Safety protection SPR Region Upper Address Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_RGN_UA_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_RGN_UA;

/** \brief CPUx SRI Error Generation Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_SEGEN_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_SEGEN;

/** \brief CPUx  Safety Protection Register Access Enable Register A   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_SFR_SPROT_ACCENA_W_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_SFR_SPROT_ACCENA_W;

/** \brief CPUx  Safety Protection Region Access Enable Register B   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_SFR_SPROT_ACCENB_W_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_SFR_SPROT_ACCENB_W;

/** \brief CPUx SIST Mode Access Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_SMACON_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_SMACON;

/** \brief CPUx Safety Protection Region SPR Read Access Enable Register A${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA_R_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA_R;

/** \brief CPUx Safety Protection Region SPR Read Access Enable Register B${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB_R_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB_R;

/** \brief CPUx Software Debug Event   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_SWEVT_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_SWEVT;

/** \brief CPUx System Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_SYSCON_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_SYSCON;

/** \brief CPUx Task Address Space Identifier Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TASK_ASI_Bits B;          /**< \brief Bitfield access */
} Ifx_CPU_TASK_ASI;

/** \brief CPUx Temporal Protection System Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_CON_Bits B;           /**< \brief Bitfield access */
} Ifx_CPU_TPS_CON;

/** \brief CPUx Exception Timer Class Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_CLASS_EN;

/** \brief CPUx Exception Entry Timer Current Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_ENTRY_CVAL_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_ENTRY_CVAL;

/** \brief CPUx Exception Entry Timer Load Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_ENTRY_LVAL_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_ENTRY_LVAL;

/** \brief CPUx Exception Exit Timer Current Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_EXIT_CVAL_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_EXIT_CVAL;

/** \brief CPUx Exception Exit  Timer Load Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_EXIT_LVAL_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_EXIT_LVAL;

/** \brief CPUx Exception Timer FCX Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_FCX_Bits B;     /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_FCX;

/** \brief CPUx Exception Timer Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_STAT_Bits B;    /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_STAT;

/** \brief CPUx Temporal Protection System Timer Register ${y}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TPS_TIMER_Bits B;         /**< \brief Bitfield access */
} Ifx_CPU_TPS_TIMER;

/** \brief CPUx TriggerAddressx   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TRIG_ACC_Bits B;          /**< \brief Bitfield access */
} Ifx_CPU_TRIG_ACC;

/** \brief CPUx Trigger Address ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TR_ADR_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_TR_ADR;

/** \brief CPUx Trigger Event ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CPU_TR_EVT_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_TR_EVT;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_RGN_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief RGN object */
typedef volatile struct _Ifx_CPU_RGN
{
       Ifx_CPU_RGN_LA                      LA;                     /**< \brief 0, CPUx  Safety Protection SPR Region Lower Address Register ${i}*/
       Ifx_CPU_RGN_UA                      UA;                     /**< \brief 4, CPUx  Safety protection SPR Region Upper Address Register ${i}*/
       Ifx_CPU_RGN_ACCENA                  ACCENA;                 /**< \brief 8, CPUx  Safety Protection Region SPR Write Access Enable Register A${i}*/
       Ifx_CPU_RGN_ACCENB                  ACCENB;                 /**< \brief C, CPUx  Safety Protection Region SPR Write Access Enable Register B${i}*/
} Ifx_CPU_RGN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_BLK_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief BLK object */
typedef volatile struct _Ifx_CPU_BLK
{
       Ifx_CPU_BLK_RABR                    RABR;                   /**< \brief 0, CPUx Redirected Address Base Register ${i}*/
       Ifx_CPU_BLK_OTAR                    OTAR;                   /**< \brief 4, CPUx Overlay Target Address Register ${i}*/
       Ifx_CPU_BLK_OMASK                   OMASK;                  /**< \brief 8, CPUx Overlay Mask Register ${i}*/
} Ifx_CPU_BLK;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_FPU_TRAP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief FPU_TRAP object */
typedef volatile struct _Ifx_CPU_FPU_TRAP
{
       Ifx_CPU_FPU_TRAP_CON                CON;                    /**< \brief 0, CPUx Trap Control Register*/
       Ifx_CPU_FPU_TRAP_PC                 PC;                     /**< \brief 4, CPUx Trapping Instruction Program Counter Register*/
       Ifx_CPU_FPU_TRAP_OPC                OPC;                    /**< \brief 8, CPUx Trapping Instruction Opcode Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_CPU_FPU_TRAP_SRC1               SRC1;                   /**< \brief 10, CPUx Trapping Instruction Operand Register*/
       Ifx_CPU_FPU_TRAP_SRC2               SRC2;                   /**< \brief 14, CPUx Trapping Instruction Operand Register*/
       Ifx_CPU_FPU_TRAP_SRC3               SRC3;                   /**< \brief 18, CPUx Trapping Instruction Operand Register*/
} Ifx_CPU_FPU_TRAP;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_DPR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief DPR object */
typedef volatile struct _Ifx_CPU_DPR
{
       Ifx_CPU_DPR_L                       L;                      /**< \brief 0, CPUx Data Protection Range ${y}, Lower Bound Register*/
       Ifx_CPU_DPR_U                       U;                      /**< \brief 4, CPUx Data Protection Range ${y}, Upper Bound Register*/
} Ifx_CPU_DPR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_CPR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CPR object */
typedef volatile struct _Ifx_CPU_CPR
{
       Ifx_CPU_CPR_L                       L;                      /**< \brief 0, CPUx Code Protection Range ${y} Lower Bound Register*/
       Ifx_CPU_CPR_U                       U;                      /**< \brief 4, CPUx Code Protection Range ${y} Upper Bound Register*/
} Ifx_CPU_CPR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_TPS_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TPS object */
typedef volatile struct _Ifx_CPU_TPS
{
       Ifx_CPU_TPS_CON                     CON;                    /**< \brief 0, CPUx Temporal Protection System Control Register*/
       Ifx_CPU_TPS_TIMER                   TIMER[3];               /**< \brief 4, CPUx Temporal Protection System Timer Register ${y}*/
} Ifx_CPU_TPS;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_TPS_EXTIM_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TPS_EXTIM object */
typedef volatile struct _Ifx_CPU_TPS_EXTIM
{
       Ifx_CPU_TPS_EXTIM_ENTRY_LVAL        ENTRY_LVAL;             /**< \brief 0, CPUx Exception Entry Timer Load Value*/
       Ifx_CPU_TPS_EXTIM_ENTRY_CVAL        ENTRY_CVAL;             /**< \brief 4, CPUx Exception Entry Timer Current Value*/
       Ifx_CPU_TPS_EXTIM_EXIT_LVAL         EXIT_LVAL;              /**< \brief 8, CPUx Exception Exit  Timer Load Value*/
       Ifx_CPU_TPS_EXTIM_EXIT_CVAL         EXIT_CVAL;              /**< \brief C, CPUx Exception Exit Timer Current Value*/
       Ifx_CPU_TPS_EXTIM_CLASS_EN          CLASS_EN;               /**< \brief 10, CPUx Exception Timer Class Enable Register*/
       Ifx_CPU_TPS_EXTIM_STAT              STAT;                   /**< \brief 14, CPUx Exception Timer Status Register*/
       Ifx_CPU_TPS_EXTIM_FCX               FCX;                    /**< \brief 18, CPUx Exception Timer FCX Register*/
} Ifx_CPU_TPS_EXTIM;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_TR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TR object */
typedef volatile struct _Ifx_CPU_TR
{
       Ifx_CPU_TR_EVT                      EVT;                    /**< \brief 0, CPUx Trigger Event ${i}*/
       Ifx_CPU_TR_ADR                      ADR;                    /**< \brief 4, CPUx Trigger Address ${i}*/
} Ifx_CPU_TR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief CPU object */
typedef volatile struct _Ifx_CPU
{
       Ifx_UReg_8Bit                       reserved_0[4352];       /**< \brief 0, \internal Reserved */
       Ifx_CPU_FLASHCON0                   FLASHCON0;              /**< \brief 1100, CPUx Flash Configuration Register 0*/
       Ifx_CPU_FLASHCON1                   FLASHCON1;              /**< \brief 1104, CPUx Flash Configuration Register 1*/
       Ifx_CPU_FLASHCON2                   FLASHCON2;              /**< \brief 1108, CPUx Flash Configuration Register 2*/
       Ifx_CPU_FLASHCON3                   FLASHCON3;              /**< \brief 110C, CPUx Flash Configuration Register 3*/
       Ifx_CPU_FLASHCON4                   FLASHCON4;              /**< \brief 1110, CPUx Flash Configuration Register 4*/
       Ifx_UReg_8Bit                       reserved_1114[48876];    /**< \brief 1114, \internal Reserved */
       Ifx_CPU_KRST0                       KRST0;                  /**< \brief D000, CPUx  Reset Register 0*/
       Ifx_CPU_KRST1                       KRST1;                  /**< \brief D004, CPUx  Reset Register 1*/
       Ifx_CPU_KRSTCLR                     KRSTCLR;                /**< \brief D008, CPUx Reset Clear Register*/
       Ifx_UReg_8Bit                       reserved_D00C[4084];    /**< \brief D00C, \internal Reserved */
       Ifx_CPU_RGN                         RGN[8];                 /**< \brief E000, CPUx  Safety Protection Region SPR Write Access Enable Register B${i}*/
       Ifx_UReg_8Bit                       reserved_E080[8];       /**< \brief E080, \internal Reserved */
       Ifx_CPU_SPR_SPROT_RGNACCENA_R       SPR_SPROT_RGNACCENA_R0;    /**< \brief E088, */
       Ifx_CPU_SPR_SPROT_RGNACCENB_R       SPR_SPROT_RGNACCENB_R0;    /**< \brief E08C, */
       Ifx_UReg_8Bit                       reserved_E090[8];       /**< \brief E090, \internal Reserved */
       Ifx_CPU_SPR_SPROT_RGNACCENA_R       SPR_SPROT_RGNACCENA_R1;    /**< \brief E098, */
       Ifx_CPU_SPR_SPROT_RGNACCENB_R       SPR_SPROT_RGNACCENB_R1;    /**< \brief E09C, */
       Ifx_UReg_8Bit                       reserved_E0A0[8];       /**< \brief E0A0, \internal Reserved */
       Ifx_CPU_SPR_SPROT_RGNACCENA_R       SPR_SPROT_RGNACCENA_R2;    /**< \brief E0A8, */
       Ifx_CPU_SPR_SPROT_RGNACCENB_R       SPR_SPROT_RGNACCENB_R2;    /**< \brief E0AC, */
       Ifx_UReg_8Bit                       reserved_E0B0[8];       /**< \brief E0B0, \internal Reserved */
       Ifx_CPU_SPR_SPROT_RGNACCENA_R       SPR_SPROT_RGNACCENA_R3;    /**< \brief E0B8, */
       Ifx_CPU_SPR_SPROT_RGNACCENB_R       SPR_SPROT_RGNACCENB_R3;    /**< \brief E0BC, */
       Ifx_UReg_8Bit                       reserved_E0C0[8];       /**< \brief E0C0, \internal Reserved */
       Ifx_CPU_SPR_SPROT_RGNACCENA_R       SPR_SPROT_RGNACCENA_R4;    /**< \brief E0C8, */
       Ifx_CPU_SPR_SPROT_RGNACCENB_R       SPR_SPROT_RGNACCENB_R4;    /**< \brief E0CC, */
       Ifx_UReg_8Bit                       reserved_E0D0[8];       /**< \brief E0D0, \internal Reserved */
       Ifx_CPU_SPR_SPROT_RGNACCENA_R       SPR_SPROT_RGNACCENA_R5;    /**< \brief E0D8, */
       Ifx_CPU_SPR_SPROT_RGNACCENB_R       SPR_SPROT_RGNACCENB_R5;    /**< \brief E0DC, */
       Ifx_UReg_8Bit                       reserved_E0E0[8];       /**< \brief E0E0, \internal Reserved */
       Ifx_CPU_SPR_SPROT_RGNACCENA_R       SPR_SPROT_RGNACCENA_R6;    /**< \brief E0E8, */
       Ifx_CPU_SPR_SPROT_RGNACCENB_R       SPR_SPROT_RGNACCENB_R6;    /**< \brief E0EC, */
       Ifx_UReg_8Bit                       reserved_E0F0[8];       /**< \brief E0F0, \internal Reserved */
       Ifx_CPU_SPR_SPROT_RGNACCENA_R       SPR_SPROT_RGNACCENA_R7;    /**< \brief E0F8, */
       Ifx_CPU_SPR_SPROT_RGNACCENB_R       SPR_SPROT_RGNACCENB_R7;    /**< \brief E0FC, */
       Ifx_CPU_SFR_SPROT_ACCENA_W          SFR_SPROT_ACCENA_W;     /**< \brief E100, CPUx  Safety Protection Register Access Enable Register A*/
       Ifx_CPU_SFR_SPROT_ACCENB_W          SFR_SPROT_ACCENB_W;     /**< \brief E104, CPUx  Safety Protection Region Access Enable Register B*/
       Ifx_UReg_8Bit                       reserved_E108[8];       /**< \brief E108, \internal Reserved */
       Ifx_CPU_LPB_SPROT_ACCENA_R          LPB_SPROT_ACCENA_R;     /**< \brief E110, CPUx  Safety Protection Region LPB Read Access Enable Register A*/
       Ifx_CPU_LPB_SPROT_ACCENB_R          LPB_SPROT_ACCENB_R;     /**< \brief E114, CPUx Safety Protection Region LPB Read Access Enable Register B*/
       Ifx_UReg_8Bit                       reserved_E118[232];     /**< \brief E118, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNLA            DLMU_SPROT_RGNLA0;      /**< \brief E200, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNUA            DLMU_SPROT_RGNUA0;      /**< \brief E204, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENA_W      DLMU_SPROT_RGNACCENA_W0;    /**< \brief E208, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENB_W      DLMU_SPROT_RGNACCENB_W0;    /**< \brief E20C, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNLA            DLMU_SPROT_RGNLA1;      /**< \brief E210, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNUA            DLMU_SPROT_RGNUA1;      /**< \brief E214, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENA_W      DLMU_SPROT_RGNACCENA_W1;    /**< \brief E218, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENB_W      DLMU_SPROT_RGNACCENB_W1;    /**< \brief E21C, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNLA            DLMU_SPROT_RGNLA2;      /**< \brief E220, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNUA            DLMU_SPROT_RGNUA2;      /**< \brief E224, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENA_W      DLMU_SPROT_RGNACCENA_W2;    /**< \brief E228, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENB_W      DLMU_SPROT_RGNACCENB_W2;    /**< \brief E22C, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNLA            DLMU_SPROT_RGNLA3;      /**< \brief E230, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNUA            DLMU_SPROT_RGNUA3;      /**< \brief E234, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENA_W      DLMU_SPROT_RGNACCENA_W3;    /**< \brief E238, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENB_W      DLMU_SPROT_RGNACCENB_W3;    /**< \brief E23C, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNLA            DLMU_SPROT_RGNLA4;      /**< \brief E240, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNUA            DLMU_SPROT_RGNUA4;      /**< \brief E244, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENA_W      DLMU_SPROT_RGNACCENA_W4;    /**< \brief E248, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENB_W      DLMU_SPROT_RGNACCENB_W4;    /**< \brief E24C, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNLA            DLMU_SPROT_RGNLA5;      /**< \brief E250, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNUA            DLMU_SPROT_RGNUA5;      /**< \brief E254, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENA_W      DLMU_SPROT_RGNACCENA_W5;    /**< \brief E258, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENB_W      DLMU_SPROT_RGNACCENB_W5;    /**< \brief E25C, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNLA            DLMU_SPROT_RGNLA6;      /**< \brief E260, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNUA            DLMU_SPROT_RGNUA6;      /**< \brief E264, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENA_W      DLMU_SPROT_RGNACCENA_W6;    /**< \brief E268, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENB_W      DLMU_SPROT_RGNACCENB_W6;    /**< \brief E26C, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNLA            DLMU_SPROT_RGNLA7;      /**< \brief E270, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNUA            DLMU_SPROT_RGNUA7;      /**< \brief E274, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENA_W      DLMU_SPROT_RGNACCENA_W7;    /**< \brief E278, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_CPU_DLMU_SPROT_RGNACCENB_W      DLMU_SPROT_RGNACCENB_W7;    /**< \brief E27C, CPUx  Safety Protection Region DLMU Write Access Enable Register B${x}*/
       Ifx_UReg_8Bit                       reserved_E280[8];       /**< \brief E280, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNACCENA_R      DLMU_SPROT_RGNACCENA_R0;    /**< \brief E288, */
       Ifx_CPU_DLMU_SPROT_RGNACCENB_R      DLMU_SPROT_RGNACCENB_R0;    /**< \brief E28C, */
       Ifx_UReg_8Bit                       reserved_E290[8];       /**< \brief E290, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNACCENA_R      DLMU_SPROT_RGNACCENA_R1;    /**< \brief E298, */
       Ifx_CPU_DLMU_SPROT_RGNACCENB_R      DLMU_SPROT_RGNACCENB_R1;    /**< \brief E29C, */
       Ifx_UReg_8Bit                       reserved_E2A0[8];       /**< \brief E2A0, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNACCENA_R      DLMU_SPROT_RGNACCENA_R2;    /**< \brief E2A8, */
       Ifx_CPU_DLMU_SPROT_RGNACCENB_R      DLMU_SPROT_RGNACCENB_R2;    /**< \brief E2AC, */
       Ifx_UReg_8Bit                       reserved_E2B0[8];       /**< \brief E2B0, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNACCENA_R      DLMU_SPROT_RGNACCENA_R3;    /**< \brief E2B8, */
       Ifx_CPU_DLMU_SPROT_RGNACCENB_R      DLMU_SPROT_RGNACCENB_R3;    /**< \brief E2BC, */
       Ifx_UReg_8Bit                       reserved_E2C0[8];       /**< \brief E2C0, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNACCENA_R      DLMU_SPROT_RGNACCENA_R4;    /**< \brief E2C8, */
       Ifx_CPU_DLMU_SPROT_RGNACCENB_R      DLMU_SPROT_RGNACCENB_R4;    /**< \brief E2CC, */
       Ifx_UReg_8Bit                       reserved_E2D0[8];       /**< \brief E2D0, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNACCENA_R      DLMU_SPROT_RGNACCENA_R5;    /**< \brief E2D8, */
       Ifx_CPU_DLMU_SPROT_RGNACCENB_R      DLMU_SPROT_RGNACCENB_R5;    /**< \brief E2DC, */
       Ifx_UReg_8Bit                       reserved_E2E0[8];       /**< \brief E2E0, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNACCENA_R      DLMU_SPROT_RGNACCENA_R6;    /**< \brief E2E8, */
       Ifx_CPU_DLMU_SPROT_RGNACCENB_R      DLMU_SPROT_RGNACCENB_R6;    /**< \brief E2EC, */
       Ifx_UReg_8Bit                       reserved_E2F0[8];       /**< \brief E2F0, \internal Reserved */
       Ifx_CPU_DLMU_SPROT_RGNACCENA_R      DLMU_SPROT_RGNACCENA_R7;    /**< \brief E2F8, */
       Ifx_CPU_DLMU_SPROT_RGNACCENB_R      DLMU_SPROT_RGNACCENB_R7;    /**< \brief E2FC, */
       Ifx_UReg_8Bit                       reserved_E300[6144];    /**< \brief E300, \internal Reserved */
       Ifx_CPU_OSEL                        OSEL;                   /**< \brief FB00, CPUx  Overlay Range Select Register*/
       Ifx_UReg_8Bit                       reserved_FB04[12];      /**< \brief FB04, \internal Reserved */
       Ifx_CPU_BLK                         BLK[32];                /**< \brief FB10, CPUx Overlay Mask Register ${i}*/
       Ifx_UReg_8Bit                       reserved_FC90[5024];    /**< \brief FC90, \internal Reserved */
       Ifx_CPU_SEGEN                       SEGEN;                  /**< \brief 11030, CPUx SRI Error Generation Register*/
       Ifx_UReg_8Bit                       reserved_11034[28624];    /**< \brief 11034, \internal Reserved */
       Ifx_CPU_TASK_ASI                    TASK_ASI;               /**< \brief 18004, CPUx Task Address Space Identifier Register*/
       Ifx_UReg_8Bit                       reserved_18008[248];    /**< \brief 18008, \internal Reserved */
       Ifx_CPU_PMA0                        PMA0;                   /**< \brief 18100, CPUx Data Access CacheabilityRegister*/
       Ifx_CPU_PMA1                        PMA1;                   /**< \brief 18104, CPUx Code Access CacheabilityRegister*/
       Ifx_CPU_PMA2                        PMA2;                   /**< \brief 18108, CPUx  Peripheral Space Identifier register*/
       Ifx_UReg_8Bit                       reserved_1810C[3828];    /**< \brief 1810C, \internal Reserved */
       Ifx_CPU_DCON2                       DCON2;                  /**< \brief 19000, CPUx Data Control Register 2*/
       Ifx_UReg_8Bit                       reserved_19004[8];      /**< \brief 19004, \internal Reserved */
       Ifx_CPU_SMACON                      SMACON;                 /**< \brief 1900C, CPUx SIST Mode Access Control Register*/
       Ifx_CPU_DSTR                        DSTR;                   /**< \brief 19010, CPUx Data Synchronous Trap Register*/
       Ifx_UReg_8Bit                       reserved_19014[4];      /**< \brief 19014, \internal Reserved */
       Ifx_CPU_DATR                        DATR;                   /**< \brief 19018, CPUx Data Asynchronous Trap Register*/
       Ifx_CPU_DEADD                       DEADD;                  /**< \brief 1901C, CPUx Data Error Address Register*/
       Ifx_CPU_DIEAR                       DIEAR;                  /**< \brief 19020, CPUx Data Integrity Error Address Register*/
       Ifx_CPU_DIETR                       DIETR;                  /**< \brief 19024, CPUx Data Integrity Error Trap Register*/
       Ifx_UReg_8Bit                       reserved_19028[24];     /**< \brief 19028, \internal Reserved */
       Ifx_CPU_DCON0                       DCON0;                  /**< \brief 19040, CPUx Data Memory Control Register*/
       Ifx_UReg_8Bit                       reserved_19044[444];    /**< \brief 19044, \internal Reserved */
       Ifx_CPU_PSTR                        PSTR;                   /**< \brief 19200, CPUx Program Synchronous Trap Register*/
       Ifx_CPU_PCON1                       PCON1;                  /**< \brief 19204, CPUx Program Control 1*/
       Ifx_CPU_PCON2                       PCON2;                  /**< \brief 19208, CPUx Program Control 2*/
       Ifx_CPU_PCON0                       PCON0;                  /**< \brief 1920C, CPUx Program Control 0*/
       Ifx_CPU_PIEAR                       PIEAR;                  /**< \brief 19210, CPUx Program Integrity Error Address Register*/
       Ifx_CPU_PIETR                       PIETR;                  /**< \brief 19214, CPUx Program Integrity Error Trap Register*/
       Ifx_UReg_8Bit                       reserved_19218[488];    /**< \brief 19218, \internal Reserved */
       Ifx_CPU_COMPAT                      COMPAT;                 /**< \brief 19400, CPUx Compatibility Control Register*/
       Ifx_UReg_8Bit                       reserved_19404[3068];    /**< \brief 19404, \internal Reserved */
       Ifx_CPU_FPU_TRAP                    FPU_TRAP;               /**< \brief 1A000, CPUx Trapping Instruction Operand Register*/
       Ifx_UReg_8Bit                       reserved_1A01C[8164];    /**< \brief 1A01C, \internal Reserved */
       Ifx_CPU_DPR                         DPR[18];                /**< \brief 1C000, CPUx Data Protection Range ${y}, Upper Bound Register*/
       Ifx_UReg_8Bit                       reserved_1C090[3952];    /**< \brief 1C090, \internal Reserved */
       Ifx_CPU_CPR                         CPR[10];                /**< \brief 1D000, CPUx Code Protection Range ${y} Upper Bound Register*/
       Ifx_UReg_8Bit                       reserved_1D050[4016];    /**< \brief 1D050, \internal Reserved */
       Ifx_CPU_CPXE                        CPXE_0;                 /**< \brief 1E000, CPUx Code Protection Execute Enable Register Set ${y}*/
       Ifx_CPU_CPXE                        CPXE_1;                 /**< \brief 1E004, CPUx Code Protection Execute Enable Register Set ${y}*/
       Ifx_CPU_CPXE                        CPXE_2;                 /**< \brief 1E008, CPUx Code Protection Execute Enable Register Set ${y}*/
       Ifx_CPU_CPXE                        CPXE_3;                 /**< \brief 1E00C, CPUx Code Protection Execute Enable Register Set ${y}*/
       Ifx_CPU_DPRE                        DPRE_0;                 /**< \brief 1E010, CPUx Data Protection Read Enable Register Set ${y}*/
       Ifx_CPU_DPRE                        DPRE_1;                 /**< \brief 1E014, CPUx Data Protection Read Enable Register Set ${y}*/
       Ifx_CPU_DPRE                        DPRE_2;                 /**< \brief 1E018, CPUx Data Protection Read Enable Register Set ${y}*/
       Ifx_CPU_DPRE                        DPRE_3;                 /**< \brief 1E01C, CPUx Data Protection Read Enable Register Set ${y}*/
       Ifx_CPU_DPWE                        DPWE_0;                 /**< \brief 1E020, CPUx Data Protection Write Enable Register Set ${y}*/
       Ifx_CPU_DPWE                        DPWE_1;                 /**< \brief 1E024, CPUx Data Protection Write Enable Register Set ${y}*/
       Ifx_CPU_DPWE                        DPWE_2;                 /**< \brief 1E028, CPUx Data Protection Write Enable Register Set ${y}*/
       Ifx_CPU_DPWE                        DPWE_3;                 /**< \brief 1E02C, CPUx Data Protection Write Enable Register Set ${y}*/
       Ifx_UReg_8Bit                       reserved_1E030[16];     /**< \brief 1E030, \internal Reserved */
       Ifx_CPU_CPXE                        CPXE_4;                 /**< \brief 1E040, CPUx Code Protection Execute Enable Register Set ${y}*/
       Ifx_CPU_CPXE                        CPXE_5;                 /**< \brief 1E044, CPUx Code Protection Execute Enable Register Set ${y}*/
       Ifx_UReg_8Bit                       reserved_1E048[8];      /**< \brief 1E048, \internal Reserved */
       Ifx_CPU_DPRE                        DPRE_4;                 /**< \brief 1E050, CPUx Data Protection Read Enable Register Set ${y}*/
       Ifx_CPU_DPRE                        DPRE_5;                 /**< \brief 1E054, CPUx Data Protection Read Enable Register Set ${y}*/
       Ifx_UReg_8Bit                       reserved_1E058[8];      /**< \brief 1E058, \internal Reserved */
       Ifx_CPU_DPWE                        DPWE_4;                 /**< \brief 1E060, CPUx Data Protection Write Enable Register Set ${y}*/
       Ifx_CPU_DPWE                        DPWE_5;                 /**< \brief 1E064, CPUx Data Protection Write Enable Register Set ${y}*/
       Ifx_UReg_8Bit                       reserved_1E068[920];    /**< \brief 1E068, \internal Reserved */
       Ifx_CPU_TPS                         TPS;                    /**< \brief 1E400, */
       Ifx_UReg_8Bit                       reserved_1E410[48];     /**< \brief 1E410, \internal Reserved */
       Ifx_CPU_TPS_EXTIM                   TPS_EXTIM;              /**< \brief 1E440, CPUx Exception Timer FCX Register*/
       Ifx_UReg_8Bit                       reserved_1E45C[2980];    /**< \brief 1E45C, \internal Reserved */
       Ifx_CPU_TR                          TR[8];                  /**< \brief 1F000, CPUx Trigger Address ${i}*/
       Ifx_UReg_8Bit                       reserved_1F040[3008];    /**< \brief 1F040, \internal Reserved */
       Ifx_CPU_CCTRL                       CCTRL;                  /**< \brief 1FC00, CPUx Counter Control*/
       Ifx_CPU_CCNT                        CCNT;                   /**< \brief 1FC04, CPUx CPU Clock Cycle Count*/
       Ifx_CPU_ICNT                        ICNT;                   /**< \brief 1FC08, CPUx Instruction Count*/
       Ifx_CPU_M1CNT                       M1CNT;                  /**< \brief 1FC0C, CPUx Multi-Count Register 1*/
       Ifx_CPU_M2CNT                       M2CNT;                  /**< \brief 1FC10, CPUx Multi-Count Register 2*/
       Ifx_CPU_M3CNT                       M3CNT;                  /**< \brief 1FC14, CPUx Multi-Count Register 3*/
       Ifx_UReg_8Bit                       reserved_1FC18[232];    /**< \brief 1FC18, \internal Reserved */
       Ifx_CPU_DBGSR                       DBGSR;                  /**< \brief 1FD00, CPUx Debug Status Register*/
       Ifx_UReg_8Bit                       reserved_1FD04[4];      /**< \brief 1FD04, \internal Reserved */
       Ifx_CPU_EXEVT                       EXEVT;                  /**< \brief 1FD08, CPUx External Event Register*/
       Ifx_CPU_CREVT                       CREVT;                  /**< \brief 1FD0C, CPUx Core Register Access Event*/
       Ifx_CPU_SWEVT                       SWEVT;                  /**< \brief 1FD10, CPUx Software Debug Event*/
       Ifx_UReg_8Bit                       reserved_1FD14[28];     /**< \brief 1FD14, \internal Reserved */
       Ifx_CPU_TRIG_ACC                    TRIG_ACC;               /**< \brief 1FD30, CPUx TriggerAddressx*/
       Ifx_UReg_8Bit                       reserved_1FD34[12];     /**< \brief 1FD34, \internal Reserved */
       Ifx_CPU_DMS                         DMS;                    /**< \brief 1FD40, CPUx Debug Monitor Start Address*/
       Ifx_CPU_DCX                         DCX;                    /**< \brief 1FD44, CPUx Debug Context Save Area Pointer*/
       Ifx_CPU_DBGTCR                      DBGTCR;                 /**< \brief 1FD48, CPUx Debug Trap Control Register*/
       Ifx_UReg_8Bit                       reserved_1FD4C[180];    /**< \brief 1FD4C, \internal Reserved */
       Ifx_CPU_PCXI                        PCXI;                   /**< \brief 1FE00, CPUx Previous Context Information Register*/
       Ifx_CPU_PSW                         PSW;                    /**< \brief 1FE04, CPUx Program Status Word*/
       Ifx_CPU_PC                          PC;                     /**< \brief 1FE08, CPUx Program Counter*/
       Ifx_UReg_8Bit                       reserved_1FE0C[8];      /**< \brief 1FE0C, \internal Reserved */
       Ifx_CPU_SYSCON                      SYSCON;                 /**< \brief 1FE14, CPUx System Configuration Register*/
       Ifx_CPU_CPU_ID                      CPU_ID;                 /**< \brief 1FE18, CPUx Identification Register TC1.6.2P*/
       Ifx_CPU_CORE_ID                     CORE_ID;                /**< \brief 1FE1C, CPUx Core Identification Register*/
       Ifx_CPU_BIV                         BIV;                    /**< \brief 1FE20, CPUx Base Interrupt Vector Table Pointer*/
       Ifx_CPU_BTV                         BTV;                    /**< \brief 1FE24, CPUx Base Trap Vector Table Pointer*/
       Ifx_CPU_ISP                         ISP;                    /**< \brief 1FE28, CPUx Interrupt Stack Pointer*/
       Ifx_CPU_ICR                         ICR;                    /**< \brief 1FE2C, CPUx Interrupt Control Register*/
       Ifx_UReg_8Bit                       reserved_1FE30[8];      /**< \brief 1FE30, \internal Reserved */
       Ifx_CPU_FCX                         FCX;                    /**< \brief 1FE38, CPUx Free CSA List Head Pointer*/
       Ifx_CPU_LCX                         LCX;                    /**< \brief 1FE3C, CPUx Free CSA List Limit Pointer*/
       Ifx_UReg_8Bit                       reserved_1FE40[16];     /**< \brief 1FE40, \internal Reserved */
       Ifx_CPU_CUS_ID                      CUS_ID;                 /**< \brief 1FE50, CPUx Customer ID register*/
       Ifx_UReg_8Bit                       reserved_1FE54[172];    /**< \brief 1FE54, \internal Reserved */
       Ifx_CPU_D                           D[16];                  /**< \brief 1FF00, CPUx Data General Purpose Register ${y}*/
       Ifx_UReg_8Bit                       reserved_1FF40[64];     /**< \brief 1FF40, \internal Reserved */
       Ifx_CPU_A                           A[16];                  /**< \brief 1FF80, CPUx Address General Purpose Register ${y}*/
       Ifx_UReg_8Bit                       reserved_1FFC0[64];     /**< \brief 1FFC0, \internal Reserved */
} Ifx_CPU;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXCPU_REGDEF_H */
