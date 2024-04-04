/**
 * \file IfxEray_regdef.h
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
 * \defgroup IfxSfr_Eray_Registers Eray Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Eray_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Eray_Registers
 * 
 * \defgroup IfxSfr_Eray_Registers_union Register unions
 * \ingroup IfxSfr_Eray_Registers
 * 
 * \defgroup IfxSfr_Eray_Registers_struct Memory map
 * \ingroup IfxSfr_Eray_Registers
 */
#ifndef IFXERAY_REGDEF_H
#define IFXERAY_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Eray_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_ERAY_ACCEN0_Bits
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
} Ifx_ERAY_ACCEN0_Bits;

/** \brief Aggregated Channel Status */
typedef struct _Ifx_ERAY_ACS_Bits
{
    Ifx_UReg_32Bit VFRA:1;            /**< \brief [0:0] Valid Frame Received on Channel A(vSS!ValidFrameA) - VFRA (rwh) */
    Ifx_UReg_32Bit SEDA:1;            /**< \brief [1:1] Syntax Error Detected on Channel A(vSS!SyntaxErrorA) - SEDA (rwh) */
    Ifx_UReg_32Bit CEDA:1;            /**< \brief [2:2] Content Error Detected on Channel A(vSS!ContentErrorA) - CEDA (rwh) */
    Ifx_UReg_32Bit CIA:1;             /**< \brief [3:3] Communication Indicator Channel A - CIA (rwh) */
    Ifx_UReg_32Bit SBVA:1;            /**< \brief [4:4] Slot Boundary Violation on Channel A(vSS!BViolationA) - SBVA (rwh) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit VFRB:1;            /**< \brief [8:8] Valid Frame Received on Channel B(vSS!ValidFrameB) - VFRB (rwh) */
    Ifx_UReg_32Bit SEDB:1;            /**< \brief [9:9] Syntax Error Detected on Channel B(vSS!SyntaxErrorB) - SEDB (rwh) */
    Ifx_UReg_32Bit CEDB:1;            /**< \brief [10:10] Content Error Detected on Channel B(vSS!ContentErrorB) - CEDB (rwh) */
    Ifx_UReg_32Bit CIB:1;             /**< \brief [11:11] Communication Indicator Channel B - CIB (rwh) */
    Ifx_UReg_32Bit SBVB:1;            /**< \brief [12:12] Slot Boundary Violation on Channel B(vSS!BViolationB) - SBVB (rwh) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_ERAY_ACS_Bits;

/** \brief Communication Controller Error Vector */
typedef struct _Ifx_ERAY_CCEV_Bits
{
    Ifx_UReg_32Bit CCFC:4;            /**< \brief [3:0] Clock Correction Failed Counter(vClockCorrectionFailed) - CCFC (rh) */
    Ifx_UReg_32Bit reserved_4:2;      /**< \brief [5:4] \internal Reserved */
    Ifx_UReg_32Bit ERRM:2;            /**< \brief [7:6] Error Mode(vPOC!ErrorMode) - ERRM (rh) */
    Ifx_UReg_32Bit PTAC:5;            /**< \brief [12:8] Passive to Active Count(vAllowPassiveToActive) - PTAC (rh) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_ERAY_CCEV_Bits;

/** \brief Communication Controller Status Vector */
typedef struct _Ifx_ERAY_CCSV_Bits
{
    Ifx_UReg_32Bit POCS:6;            /**< \brief [5:0] Protocol Operation Control Status - POCS (rh) */
    Ifx_UReg_32Bit FSI:1;             /**< \brief [6:6] Freeze Status Indicator(vPOC!Freeze) - FSI (rh) */
    Ifx_UReg_32Bit HRQ:1;             /**< \brief [7:7] Halt Request(vPOC!CHIHaltRequest) - HRQ (rh) */
    Ifx_UReg_32Bit SLM:2;             /**< \brief [9:8] Slot Mode(vPOC!SlotMode) - SLM (rh) */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit CSNI:1;            /**< \brief [12:12] Coldstart Noise Indicator(vPOC!ColdstartNoise) - CSNI (rh) */
    Ifx_UReg_32Bit CSAI:1;            /**< \brief [13:13] Coldstart Abort Indicator - CSAI (rh) */
    Ifx_UReg_32Bit CSI:1;             /**< \brief [14:14] Cold Start Inhibit(vColdStartInhibit) - CSI (rh) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit WSV:3;             /**< \brief [18:16] Wakeup Status(vPOC!WakeupStatus) - WSV (rh) */
    Ifx_UReg_32Bit RCA:5;             /**< \brief [23:19] Remaining Coldstart Attempts(vRemainingColdstartAttempts) - RCA (rh) */
    Ifx_UReg_32Bit PSL:6;             /**< \brief [29:24] POC Status Log - PSL (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_CCSV_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_ERAY_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] External Sleep Mode Request Disable Bit - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit RMC:3;             /**< \brief [10:8] Clock Divider in Run Mode - RMC (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_ERAY_CLC_Bits;

/** \brief Core Release Register */
typedef struct _Ifx_ERAY_CREL_Bits
{
    Ifx_UReg_32Bit DAY:8;             /**< \brief [7:0] Design Time Stamp, Day - DAY (r) */
    Ifx_UReg_32Bit MON:8;             /**< \brief [15:8] Design Time Stamp, Month - MON (r) */
    Ifx_UReg_32Bit YEAR:4;            /**< \brief [19:16] Design Time Stamp, Year - YEAR (r) */
    Ifx_UReg_32Bit SUBSTEP:4;         /**< \brief [23:20] Sub-Step of Core Release - SUBSTEP (r) */
    Ifx_UReg_32Bit STEP:4;            /**< \brief [27:24] Step of Core Release - STEP (r) */
    Ifx_UReg_32Bit REL:4;             /**< \brief [31:28] Core Release - REL (r) */
} Ifx_ERAY_CREL_Bits;

/** \brief Busy and Input Buffer Control Register */
typedef struct _Ifx_ERAY_CUST1_Bits
{
    Ifx_UReg_32Bit INT0:1;            /**< \brief [0:0] CIF Timeout Service Request Status - INT0 (rwh) */
    Ifx_UReg_32Bit OEN:1;             /**< \brief [1:1] Enable auto delay scheme for Output Buffer Control Register (OBCR) - OEN (rw) */
    Ifx_UReg_32Bit IEN:1;             /**< \brief [2:2] Enable auto delay scheme for Input Buffer Control Register (IBCR) - IEN (rw) */
    Ifx_UReg_32Bit IBFS:1;            /**< \brief [3:3] Input Buffer Status Register - IBFS (rh) */
    Ifx_UReg_32Bit IBF1PAG:1;         /**< \brief [4:4] Input Buffer 1 Page Select Register - IBF1PAG (rw) */
    Ifx_UReg_32Bit reserved_5:2;      /**< \brief [6:5] \internal Reserved */
    Ifx_UReg_32Bit IBF2PAG:1;         /**< \brief [7:7] Input Buffer 2 Page Select Register - IBF2PAG (rw) */
    Ifx_UReg_32Bit reserved_8:2;      /**< \brief [9:8] \internal Reserved */
    Ifx_UReg_32Bit RISA:2;            /**< \brief [11:10] Receive Input Select Channel A - RISA (rw) */
    Ifx_UReg_32Bit RISB:2;            /**< \brief [13:12] Receive Input Select Channel B - RISB (rw) */
    Ifx_UReg_32Bit STPWTS:2;          /**< \brief [15:14] Stop Watch Trigger Input Select - STPWTS (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_ERAY_CUST1_Bits;

/** \brief Customer Interface Timeout Counter Register */
typedef struct _Ifx_ERAY_CUST3_Bits
{
    Ifx_UReg_32Bit TO:32;             /**< \brief [31:0] CIF Timeout Reload Value - TO (rw) */
} Ifx_ERAY_CUST3_Bits;

/** \brief Error Service Request Enable Reset */
typedef struct _Ifx_ERAY_EIER_Bits
{
    Ifx_UReg_32Bit PEMCE:1;           /**< \brief [0:0] POC Error Mode Changed Service Request Enable - PEMCE (rwh) */
    Ifx_UReg_32Bit CNAE:1;            /**< \brief [1:1] Command Not Accepted Service Request Enable - CNAE (rwh) */
    Ifx_UReg_32Bit SFBME:1;           /**< \brief [2:2] SYNC Frames Below Minimum Service Request Enable - SFBME (rwh) */
    Ifx_UReg_32Bit SFOE:1;            /**< \brief [3:3] SYNC Frame Overflow Service Request Enable - SFOE (rwh) */
    Ifx_UReg_32Bit CCFE:1;            /**< \brief [4:4] Clock Correction Failure Service Request Enable - CCFE (rwh) */
    Ifx_UReg_32Bit CCLE:1;            /**< \brief [5:5] CHI Command Locked Service Request Enable - CCLE (rwh) */
    Ifx_UReg_32Bit EERRE:1;           /**< \brief [6:6] ECC Error Service Request Enable - EERRE (rwh) */
    Ifx_UReg_32Bit RFOE:1;            /**< \brief [7:7] Receive FIFO Overrun Service Request Enable - RFOE (rwh) */
    Ifx_UReg_32Bit EFAE:1;            /**< \brief [8:8] Empty FIFO Access Service Request Enable - EFAE (rwh) */
    Ifx_UReg_32Bit IIBAE:1;           /**< \brief [9:9] Illegal Input Buffer Access Service Request Enable - IIBAE (rwh) */
    Ifx_UReg_32Bit IOBAE:1;           /**< \brief [10:10] Illegal Output Buffer Access Service Request Enable - IOBAE (rwh) */
    Ifx_UReg_32Bit MHFE:1;            /**< \brief [11:11] Message Handler Constraints Flag Service Request Enable - MHFE (rwh) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit EDAE:1;            /**< \brief [16:16] Error Detected on Channel A Service Request Enable - EDAE (rwh) */
    Ifx_UReg_32Bit LTVAE:1;           /**< \brief [17:17] Latest Transmit Violation Channel A Service Request Enable - LTVAE (rwh) */
    Ifx_UReg_32Bit TABAE:1;           /**< \brief [18:18] Transmission Across Boundary Channel A Service Request Enable - TABAE (rwh) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit EDBE:1;            /**< \brief [24:24] Error Detected on Channel B Service Request Enable - EDBE (rwh) */
    Ifx_UReg_32Bit LTVBE:1;           /**< \brief [25:25] Latest Transmit Violation Channel B Service Request Enable - LTVBE (rwh) */
    Ifx_UReg_32Bit TABBE:1;           /**< \brief [26:26] Transmission Across Boundary Channel B Service Request Enable - TABBE (rwh) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_EIER_Bits;

/** \brief Error Service Request Enable Set */
typedef struct _Ifx_ERAY_EIES_Bits
{
    Ifx_UReg_32Bit PEMCE:1;           /**< \brief [0:0] POC Error Mode Changed Service Request Enable - PEMCE (rwh) */
    Ifx_UReg_32Bit CNAE:1;            /**< \brief [1:1] Command Not Accepted Service Request Enable - CNAE (rwh) */
    Ifx_UReg_32Bit SFBME:1;           /**< \brief [2:2] SYNC Frames Below Minimum Service Request Enable - SFBME (rwh) */
    Ifx_UReg_32Bit SFOE:1;            /**< \brief [3:3] SYNC Frame Overflow Service Request Enable - SFOE (rwh) */
    Ifx_UReg_32Bit CCFE:1;            /**< \brief [4:4] Clock Correction Failure Service Request Enable - CCFE (rwh) */
    Ifx_UReg_32Bit CCLE:1;            /**< \brief [5:5] CHI Command Locked Service Request Enable - CCLE (rwh) */
    Ifx_UReg_32Bit EERRE:1;           /**< \brief [6:6] ECC Error Service Request Enable - EERRE (rwh) */
    Ifx_UReg_32Bit RFOE:1;            /**< \brief [7:7] Receive FIFO Overrun Service Request Enable - RFOE (rwh) */
    Ifx_UReg_32Bit EFAE:1;            /**< \brief [8:8] Empty FIFO Access Service Request Enable - EFAE (rwh) */
    Ifx_UReg_32Bit IIBAE:1;           /**< \brief [9:9] Illegal Input Buffer Access Service Request Enable - IIBAE (rwh) */
    Ifx_UReg_32Bit IOBAE:1;           /**< \brief [10:10] Illegal Output Buffer Access Service Request Enable - IOBAE (rwh) */
    Ifx_UReg_32Bit MHFE:1;            /**< \brief [11:11] Message Handler Constraints Flag Service Request Enable - MHFE (rwh) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit EDAE:1;            /**< \brief [16:16] Error Detected on Channel A Service Request Enable - EDAE (rwh) */
    Ifx_UReg_32Bit LTVAE:1;           /**< \brief [17:17] Latest Transmit Violation Channel A Service Request Enable - LTVAE (rwh) */
    Ifx_UReg_32Bit TABAE:1;           /**< \brief [18:18] Transmission Across Boundary Channel A Service Request Enable - TABAE (rwh) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit EDBE:1;            /**< \brief [24:24] Error Detected on Channel B Service Request Enable - EDBE (rwh) */
    Ifx_UReg_32Bit LTVBE:1;           /**< \brief [25:25] Latest Transmit Violation Channel B Service Request Enable - LTVBE (rwh) */
    Ifx_UReg_32Bit TABBE:1;           /**< \brief [26:26] Transmission Across Boundary Channel B Service Request Enable - TABBE (rwh) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_EIES_Bits;

/** \brief Error Service Request Line Select */
typedef struct _Ifx_ERAY_EILS_Bits
{
    Ifx_UReg_32Bit PEMCL:1;           /**< \brief [0:0] POC Error Mode Changed Service Request Line - PEMCL (rw) */
    Ifx_UReg_32Bit CNAL:1;            /**< \brief [1:1] Command Not Accepted Service Request Line - CNAL (rw) */
    Ifx_UReg_32Bit SFBML:1;           /**< \brief [2:2] SYNC Frames Below Minimum Service Request Line - SFBML (rw) */
    Ifx_UReg_32Bit SFOL:1;            /**< \brief [3:3] SYNC Frame Overflow Service Request Line - SFOL (rw) */
    Ifx_UReg_32Bit CCFL:1;            /**< \brief [4:4] Clock Correction Failure Service Request Line - CCFL (rw) */
    Ifx_UReg_32Bit CCLL:1;            /**< \brief [5:5] CHI Command Locked Service Request Line - CCLL (rw) */
    Ifx_UReg_32Bit EERRL:1;           /**< \brief [6:6] ECC Error Service Request Line - EERRL (rw) */
    Ifx_UReg_32Bit RFOL:1;            /**< \brief [7:7] Receive FIFO Overrun Service Request Line - RFOL (rw) */
    Ifx_UReg_32Bit EFAL:1;            /**< \brief [8:8] Empty FIFO Access Service Request Line - EFAL (rw) */
    Ifx_UReg_32Bit IIBAL:1;           /**< \brief [9:9] Illegal Input Buffer Access Service Request Line - IIBAL (rw) */
    Ifx_UReg_32Bit IOBAL:1;           /**< \brief [10:10] Illegal Output Buffer Access Service Request Line - IOBAL (rw) */
    Ifx_UReg_32Bit MHFL:1;            /**< \brief [11:11] Message Handler Constrains Flag Service Request Line - MHFL (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit EDAL:1;            /**< \brief [16:16] Error Detected on Channel A Service Request Line - EDAL (rw) */
    Ifx_UReg_32Bit LTVAL:1;           /**< \brief [17:17] Latest Transmit Violation Channel A Service Request Line - LTVAL (rw) */
    Ifx_UReg_32Bit TABAL:1;           /**< \brief [18:18] Transmission Across Boundary Channel A Service Request Line - TABAL (rw) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit EDBL:1;            /**< \brief [24:24] Error Detected on Channel B Service Request Line - EDBL (rw) */
    Ifx_UReg_32Bit LTVBL:1;           /**< \brief [25:25] Latest Transmit Violation Channel B Service Request Line - LTVBL (rw) */
    Ifx_UReg_32Bit TABBL:1;           /**< \brief [26:26] Transmission Across Boundary Channel A Service Request Line - TABBL (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_EILS_Bits;

/** \brief Error Service Request Select Register */
typedef struct _Ifx_ERAY_EIR_Bits
{
    Ifx_UReg_32Bit PEMC:1;            /**< \brief [0:0] POC Error Mode Changed - PEMC (rwh) */
    Ifx_UReg_32Bit CNA:1;             /**< \brief [1:1] Command Not Accepted - CNA (rwh) */
    Ifx_UReg_32Bit SFBM:1;            /**< \brief [2:2] SYNC Frames Below Minimum - SFBM (rwh) */
    Ifx_UReg_32Bit SFO:1;             /**< \brief [3:3] SYNC Frame Overflow - SFO (rwh) */
    Ifx_UReg_32Bit CCF:1;             /**< \brief [4:4] Clock Correction Failure - CCF (rwh) */
    Ifx_UReg_32Bit CCL:1;             /**< \brief [5:5] CHI Command Locked - CCL (rwh) */
    Ifx_UReg_32Bit EERR:1;            /**< \brief [6:6] ECC Error - EERR (rh) */
    Ifx_UReg_32Bit RFO:1;             /**< \brief [7:7] Receive FIFO Overrun - RFO (rh) */
    Ifx_UReg_32Bit EFA:1;             /**< \brief [8:8] Empty FIFO Access - EFA (rwh) */
    Ifx_UReg_32Bit IIBA:1;            /**< \brief [9:9] Illegal Input Buffer Access - IIBA (rwh) */
    Ifx_UReg_32Bit IOBA:1;            /**< \brief [10:10] Illegal Output Buffer Access - IOBA (rwh) */
    Ifx_UReg_32Bit MHF:1;             /**< \brief [11:11] Message Handler Constraints Flag - MHF (rwh) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit EDA:1;             /**< \brief [16:16] Error Detected on Channel A - EDA (rwh) */
    Ifx_UReg_32Bit LTVA:1;            /**< \brief [17:17] Latest Transmit Violation Channel A - LTVA (rwh) */
    Ifx_UReg_32Bit TABA:1;            /**< \brief [18:18] Transmission Across Boundary Channel A - TABA (rwh) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit EDB:1;             /**< \brief [24:24] Error Detected on Channel B - EDB (rwh) */
    Ifx_UReg_32Bit LTVB:1;            /**< \brief [25:25] Latest Transmit Violation Channel B - LTVB (rwh) */
    Ifx_UReg_32Bit TABB:1;            /**< \brief [26:26] Transmission Across Boundary Channel B - TABB (rwh) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_EIR_Bits;

/** \brief Endian Register */
typedef struct _Ifx_ERAY_ENDN_Bits
{
    Ifx_UReg_32Bit ETV:32;            /**< \brief [31:0] Endianness Test Value - ETV (r) */
} Ifx_ERAY_ENDN_Bits;

/** \brief Even Sync ID Symbol Window ${n} */
typedef struct _Ifx_ERAY_ESID_Bits
{
    Ifx_UReg_32Bit EID:10;            /**< \brief [9:0] Even Sync ID(vsSyncIDListA,B even) - EID (rh) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit RXEA:1;            /**< \brief [14:14] Received/Configured Even Sync ID on Channel A - RXEA (rh) */
    Ifx_UReg_32Bit RXEB:1;            /**< \brief [15:15] Received/Configured Even Sync ID on Channel B - RXEB (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_ERAY_ESID_Bits;

/** \brief FIFO Critical Level */
typedef struct _Ifx_ERAY_FCL_Bits
{
    Ifx_UReg_32Bit CL:8;              /**< \brief [7:0] Critical Level - CL (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_ERAY_FCL_Bits;

/** \brief FIFO Rejection Filter */
typedef struct _Ifx_ERAY_FRF_Bits
{
    Ifx_UReg_32Bit CH:2;              /**< \brief [1:0] Channel Filter - CH (rw) */
    Ifx_UReg_32Bit FID:11;            /**< \brief [12:2] Frame ID Filter - FID (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit CYF:7;             /**< \brief [22:16] Cycle Counter Filter - CYF (rw) */
    Ifx_UReg_32Bit RSS:1;             /**< \brief [23:23] Reject in Static Segment - RSS (rw) */
    Ifx_UReg_32Bit RNF:1;             /**< \brief [24:24] Reject NULL Frames - RNF (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_ERAY_FRF_Bits;

/** \brief FIFO Rejection Filter Mask */
typedef struct _Ifx_ERAY_FRFM_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit MFID:11;           /**< \brief [12:2] Mask Frame ID Filter - MFID (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_ERAY_FRFM_Bits;

/** \brief FIFO Status Register */
typedef struct _Ifx_ERAY_FSR_Bits
{
    Ifx_UReg_32Bit RFNE:1;            /**< \brief [0:0] Receive FIFO Not Empty - RFNE (rh) */
    Ifx_UReg_32Bit RFCL:1;            /**< \brief [1:1] Receive FIFO Critical Level - RFCL (rh) */
    Ifx_UReg_32Bit RFO:1;             /**< \brief [2:2] Receive FIFO Overrun - RFO (rh) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit RFFL:8;            /**< \brief [15:8] Receive FIFO Fill Level - RFFL (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_ERAY_FSR_Bits;

/** \brief GTU Configuration Register 1 */
typedef struct _Ifx_ERAY_GTUC01_Bits
{
    Ifx_UReg_32Bit UT:20;             /**< \brief [19:0] Microtick per Cycle(pMicroPerCycle) - UT (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_ERAY_GTUC01_Bits;

/** \brief GTU Configuration Register 2 */
typedef struct _Ifx_ERAY_GTUC02_Bits
{
    Ifx_UReg_32Bit MPC:14;            /**< \brief [13:0] Macrotick Per Cycle(gMacroPerCycle) - MPC (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit SNM:4;             /**< \brief [19:16] Sync Node Max(gSyncNodeMax) - SNM (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_ERAY_GTUC02_Bits;

/** \brief GTU Configuration Register 3 */
typedef struct _Ifx_ERAY_GTUC03_Bits
{
    Ifx_UReg_32Bit UIOA:8;            /**< \brief [7:0] Microtick Initial Offset Channel A(pMicroInitialOffset[A]) - UIOA (rw) */
    Ifx_UReg_32Bit UIOB:8;            /**< \brief [15:8] Microtick Initial Offset Channel B (pMicroInitialOffset[B]) - UIOB (rw) */
    Ifx_UReg_32Bit MIOA:7;            /**< \brief [22:16] Macrotick Initial Offset Channel A(gMacroInitialOffset[A]) - MIOA (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit MIOB:7;            /**< \brief [30:24] Macrotick Initial Offset Channel B(gMacroInitialOffset[B]) - MIOB (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_ERAY_GTUC03_Bits;

/** \brief GTU Configuration Register 4 */
typedef struct _Ifx_ERAY_GTUC04_Bits
{
    Ifx_UReg_32Bit NIT:14;            /**< \brief [13:0] Network Idle Time Start(gMacroPerCycle - gdNIT - 1) - NIT (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit OCS:14;            /**< \brief [29:16] Offset Correction Start (gOffsetCorrectionStart - 1) - OCS (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_GTUC04_Bits;

/** \brief GTU Configuration Register 5 */
typedef struct _Ifx_ERAY_GTUC05_Bits
{
    Ifx_UReg_32Bit DCA:8;             /**< \brief [7:0] Delay Compensation Channel A(pDelayCompensation[A]) - DCA (rw) */
    Ifx_UReg_32Bit DCB:8;             /**< \brief [15:8] Delay Compensation Channel B (pDelayCompensation[B]) - DCB (rw) */
    Ifx_UReg_32Bit CDD:5;             /**< \brief [20:16] Cluster Drift Damping(pClusterDriftDamping) - CDD (rw) */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit DEC:8;             /**< \brief [31:24] Decoding Correction(pDecodingCorrection) - DEC (rw) */
} Ifx_ERAY_GTUC05_Bits;

/** \brief GTU Configuration Register 6 */
typedef struct _Ifx_ERAY_GTUC06_Bits
{
    Ifx_UReg_32Bit ASR:11;            /**< \brief [10:0] Accepted Startup Range(pdAcceptedStartupRange) - ASR (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit MOD:11;            /**< \brief [26:16] Maximum Oscillator Drift(pdMaxDrift)1) - MOD (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_GTUC06_Bits;

/** \brief GTU Configuration Register 7 */
typedef struct _Ifx_ERAY_GTUC07_Bits
{
    Ifx_UReg_32Bit SSL:10;            /**< \brief [9:0] Static Slot Length(gdStaticSlot) - SSL (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit NSS:10;            /**< \brief [25:16] Number of Static Slots(gNumberOfStaticSlots) - NSS (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_ERAY_GTUC07_Bits;

/** \brief GTU Configuration Register 8 */
typedef struct _Ifx_ERAY_GTUC08_Bits
{
    Ifx_UReg_32Bit MSL:6;             /**< \brief [5:0] Minislot Length(gdMinislot) - MSL (rw) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit NMS:13;            /**< \brief [28:16] Number of Minislots(gNumberOfMinislots) - NMS (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_ERAY_GTUC08_Bits;

/** \brief GTU Configuration Register 9 */
typedef struct _Ifx_ERAY_GTUC09_Bits
{
    Ifx_UReg_32Bit APO:6;             /**< \brief [5:0] Action Point Offset(gdActionPointOffset) - APO (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit MAPO:5;            /**< \brief [12:8] Minislot Action Point Offset (gd Minislot Action Point Offset) - MAPO (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit DSI:2;             /**< \brief [17:16] Dynamic Slot Idle Phase (gdDynamicSlotIdlePhase) - DSI (rw) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_ERAY_GTUC09_Bits;

/** \brief GTU Configuration Register 10 */
typedef struct _Ifx_ERAY_GTUC10_Bits
{
    Ifx_UReg_32Bit MOC:14;            /**< \brief [13:0] Maximum Offset Correction(pOffsetCorrectionOut) - MOC (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit MRC:11;            /**< \brief [26:16] Maximum Rate Correction (pRateCorrectionOut) - MRC (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_GTUC10_Bits;

/** \brief GTU Configuration Register 11 */
typedef struct _Ifx_ERAY_GTUC11_Bits
{
    Ifx_UReg_32Bit EOCC:2;            /**< \brief [1:0] External Offset Correction Control(pExternOffsetControl) - EOCC (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit ERCC:2;            /**< \brief [9:8] External Rate Correction Control(pExternRateControl) - ERCC (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit EOC:3;             /**< \brief [18:16] External Offset Correction(pExternOffsetCorrection) - EOC (rw) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit ERC:3;             /**< \brief [26:24] External Rate Correction (pExternRateCorrection) - ERC (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_GTUC11_Bits;

/** \brief Input Buffer Command Mask */
typedef struct _Ifx_ERAY_IBCM_Bits
{
    Ifx_UReg_32Bit LHSH:1;            /**< \brief [0:0] Load Header Section Host - LHSH (rwh) */
    Ifx_UReg_32Bit LDSH:1;            /**< \brief [1:1] Load Data Section Host - LDSH (rwh) */
    Ifx_UReg_32Bit STXRH:1;           /**< \brief [2:2] Set Transmission Request Host - STXRH (rwh) */
    Ifx_UReg_32Bit reserved_3:13;     /**< \brief [15:3] \internal Reserved */
    Ifx_UReg_32Bit LHSS:1;            /**< \brief [16:16] Load Header Section Shadow - LHSS (rh) */
    Ifx_UReg_32Bit LDSS:1;            /**< \brief [17:17] Load Data Section Shadow - LDSS (rh) */
    Ifx_UReg_32Bit STXRS:1;           /**< \brief [18:18] Transmission Request Shadow - STXRS (rh) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_ERAY_IBCM_Bits;

/** \brief Input Buffer Command Request */
typedef struct _Ifx_ERAY_IBCR_Bits
{
    Ifx_UReg_32Bit IBRH:7;            /**< \brief [6:0] Input Buffer Request Host - IBRH (rwh) */
    Ifx_UReg_32Bit reserved_7:8;      /**< \brief [14:7] \internal Reserved */
    Ifx_UReg_32Bit IBSYH:1;           /**< \brief [15:15] Input Buffer Busy Host - IBSYH (rh) */
    Ifx_UReg_32Bit IBRS:7;            /**< \brief [22:16] Input Buffer Request Shadow - IBRS (rh) */
    Ifx_UReg_32Bit reserved_23:8;     /**< \brief [30:23] \internal Reserved */
    Ifx_UReg_32Bit IBSYS:1;           /**< \brief [31:31] Input Buffer Busy Shadow - IBSYS (rh) */
} Ifx_ERAY_IBCR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_ERAY_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value - MOD_NUMBER (r) */
} Ifx_ERAY_ID_Bits;

/** \brief Service Request Line Enable */
typedef struct _Ifx_ERAY_ILE_Bits
{
    Ifx_UReg_32Bit EINT0:1;           /**< \brief [0:0] Enable Service Request Line 0(INT0SRC) - EINT0 (rw) */
    Ifx_UReg_32Bit EINT1:1;           /**< \brief [1:1] Enable Service Request Line 1(INT1SRC) - EINT1 (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_ERAY_ILE_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_ERAY_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_ERAY_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_ERAY_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_ERAY_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_ERAY_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_ERAY_KRSTCLR_Bits;

/** \brief Lock Register */
typedef struct _Ifx_ERAY_LCK_Bits
{
    Ifx_UReg_32Bit CLK:8;             /**< \brief [7:0] Configuration Lock Key - CLK (w) */
    Ifx_UReg_32Bit TMK:8;             /**< \brief [15:8] Test Mode Key - TMK (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_ERAY_LCK_Bits;

/** \brief Last Dynamic Transmit Slot */
typedef struct _Ifx_ERAY_LDTS_Bits
{
    Ifx_UReg_32Bit LDTA:11;           /**< \brief [10:0] Last Dynamic Transmission Channel A - LDTA (rh) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit LDTB:11;           /**< \brief [26:16] Last Dynamic Transmission Channel B - LDTB (rh) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_LDTS_Bits;

/** \brief Message Buffer Status */
typedef struct _Ifx_ERAY_MBS_Bits
{
    Ifx_UReg_32Bit VFRA:1;            /**< \brief [0:0] Valid Frame Received on Channel A(vSS!ValidFrameA) - VFRA (rh) */
    Ifx_UReg_32Bit VFRB:1;            /**< \brief [1:1] Valid Frame Received on Channel B(vSS!ValidFrameB) - VFRB (rh) */
    Ifx_UReg_32Bit SEOA:1;            /**< \brief [2:2] Syntax Error Observed on Channel A(vSS!SyntaxErrorA) - SEOA (rh) */
    Ifx_UReg_32Bit SEOB:1;            /**< \brief [3:3] Syntax Error Observed on Channel B(vSS!SyntaxErrorB) - SEOB (rh) */
    Ifx_UReg_32Bit CEOA:1;            /**< \brief [4:4] Content Error Observed on Channel A(vSS!ContentErrorA) - CEOA (rh) */
    Ifx_UReg_32Bit CEOB:1;            /**< \brief [5:5] Content Error Observed on Channel B(vSS!ContentErrorB) - CEOB (rh) */
    Ifx_UReg_32Bit SVOA:1;            /**< \brief [6:6] Slot Boundary Violation Observed on Channel A(vSS!BViolationA) - SVOA (rh) */
    Ifx_UReg_32Bit SVOB:1;            /**< \brief [7:7] Slot Boundary Violation Observed on Channel B(vSS!BViolationB) - SVOB (rh) */
    Ifx_UReg_32Bit TCIA:1;            /**< \brief [8:8] Transmission Conflict Indication Channel A(vSS!TxConflictA) - TCIA (rh) */
    Ifx_UReg_32Bit TCIB:1;            /**< \brief [9:9] Transmission Conflict Indication Channel B(vSS!TxConflictB) - TCIB (rh) */
    Ifx_UReg_32Bit ESA:1;             /**< \brief [10:10] Empty Slot Channel A - ESA (rh) */
    Ifx_UReg_32Bit ESB:1;             /**< \brief [11:11] Empty Slot Channel B - ESB (rh) */
    Ifx_UReg_32Bit MLST:1;            /**< \brief [12:12] Message Lost - MLST (rh) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit FTA:1;             /**< \brief [14:14] Frame Transmitted on Channel A - FTA (rh) */
    Ifx_UReg_32Bit FTB:1;             /**< \brief [15:15] Frame Transmitted on Channel B - FTB (rh) */
    Ifx_UReg_32Bit CCS:6;             /**< \brief [21:16] Cycle Count Status - CCS (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit RCIS:1;            /**< \brief [24:24] Received on Channel Indicator Status(vSS!Channel) - RCIS (rh) */
    Ifx_UReg_32Bit SFIS:1;            /**< \brief [25:25] Startup Frame Indicator Status(vRF!Header!SuFIndicator) - SFIS (rh) */
    Ifx_UReg_32Bit SYNS:1;            /**< \brief [26:26] SYNC Frame Indicator Status(vRF!Header!SyFIndicator) - SYNS (rh) */
    Ifx_UReg_32Bit NFIS:1;            /**< \brief [27:27] NULL Frame Indicator Status(vRF!Header!NFIndicator) - NFIS (rh) */
    Ifx_UReg_32Bit PPIS:1;            /**< \brief [28:28] Payload Preamble Indictor Status(vRF!Header!PPIndicator) - PPIS (rh) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_MBS_Bits;

/** \brief Message Buffer Status Changed 1 */
typedef struct _Ifx_ERAY_MBSC1_Bits
{
    Ifx_UReg_32Bit MBC0:1;            /**< \brief [0:0] Message Buffer Status Changed 0 (n = 0-31) - MBC0 (rh) */
    Ifx_UReg_32Bit MBC1:1;            /**< \brief [1:1] Message Buffer Status Changed 1 (n = 0-31) - MBC1 (rh) */
    Ifx_UReg_32Bit MBC2:1;            /**< \brief [2:2] Message Buffer Status Changed 2 (n = 0-31) - MBC2 (rh) */
    Ifx_UReg_32Bit MBC3:1;            /**< \brief [3:3] Message Buffer Status Changed 3 (n = 0-31) - MBC3 (rh) */
    Ifx_UReg_32Bit MBC4:1;            /**< \brief [4:4] Message Buffer Status Changed 4 (n = 0-31) - MBC4 (rh) */
    Ifx_UReg_32Bit MBC5:1;            /**< \brief [5:5] Message Buffer Status Changed 5 (n = 0-31) - MBC5 (rh) */
    Ifx_UReg_32Bit MBC6:1;            /**< \brief [6:6] Message Buffer Status Changed 6 (n = 0-31) - MBC6 (rh) */
    Ifx_UReg_32Bit MBC7:1;            /**< \brief [7:7] Message Buffer Status Changed 7 (n = 0-31) - MBC7 (rh) */
    Ifx_UReg_32Bit MBC8:1;            /**< \brief [8:8] Message Buffer Status Changed 8 (n = 0-31) - MBC8 (rh) */
    Ifx_UReg_32Bit MBC9:1;            /**< \brief [9:9] Message Buffer Status Changed 9 (n = 0-31) - MBC9 (rh) */
    Ifx_UReg_32Bit MBC10:1;           /**< \brief [10:10] Message Buffer Status Changed 10 (n = 0-31) - MBC10 (rh) */
    Ifx_UReg_32Bit MBC11:1;           /**< \brief [11:11] Message Buffer Status Changed 11 (n = 0-31) - MBC11 (rh) */
    Ifx_UReg_32Bit MBC12:1;           /**< \brief [12:12] Message Buffer Status Changed 12 (n = 0-31) - MBC12 (rh) */
    Ifx_UReg_32Bit MBC13:1;           /**< \brief [13:13] Message Buffer Status Changed 13 (n = 0-31) - MBC13 (rh) */
    Ifx_UReg_32Bit MBC14:1;           /**< \brief [14:14] Message Buffer Status Changed 14 (n = 0-31) - MBC14 (rh) */
    Ifx_UReg_32Bit MBC15:1;           /**< \brief [15:15] Message Buffer Status Changed 15 (n = 0-31) - MBC15 (rh) */
    Ifx_UReg_32Bit MBC16:1;           /**< \brief [16:16] Message Buffer Status Changed 16 (n = 0-31) - MBC16 (rh) */
    Ifx_UReg_32Bit MBC17:1;           /**< \brief [17:17] Message Buffer Status Changed 17 (n = 0-31) - MBC17 (rh) */
    Ifx_UReg_32Bit MBC18:1;           /**< \brief [18:18] Message Buffer Status Changed 18 (n = 0-31) - MBC18 (rh) */
    Ifx_UReg_32Bit MBC19:1;           /**< \brief [19:19] Message Buffer Status Changed 19 (n = 0-31) - MBC19 (rh) */
    Ifx_UReg_32Bit MBC20:1;           /**< \brief [20:20] Message Buffer Status Changed 20 (n = 0-31) - MBC20 (rh) */
    Ifx_UReg_32Bit MBC21:1;           /**< \brief [21:21] Message Buffer Status Changed 21 (n = 0-31) - MBC21 (rh) */
    Ifx_UReg_32Bit MBC22:1;           /**< \brief [22:22] Message Buffer Status Changed 22 (n = 0-31) - MBC22 (rh) */
    Ifx_UReg_32Bit MBC23:1;           /**< \brief [23:23] Message Buffer Status Changed 23 (n = 0-31) - MBC23 (rh) */
    Ifx_UReg_32Bit MBC24:1;           /**< \brief [24:24] Message Buffer Status Changed 24 (n = 0-31) - MBC24 (rh) */
    Ifx_UReg_32Bit MBC25:1;           /**< \brief [25:25] Message Buffer Status Changed 25 (n = 0-31) - MBC25 (rh) */
    Ifx_UReg_32Bit MBC26:1;           /**< \brief [26:26] Message Buffer Status Changed 26 (n = 0-31) - MBC26 (rh) */
    Ifx_UReg_32Bit MBC27:1;           /**< \brief [27:27] Message Buffer Status Changed 27 (n = 0-31) - MBC27 (rh) */
    Ifx_UReg_32Bit MBC28:1;           /**< \brief [28:28] Message Buffer Status Changed 28 (n = 0-31) - MBC28 (rh) */
    Ifx_UReg_32Bit MBC29:1;           /**< \brief [29:29] Message Buffer Status Changed 29 (n = 0-31) - MBC29 (rh) */
    Ifx_UReg_32Bit MBC30:1;           /**< \brief [30:30] Message Buffer Status Changed 30 (n = 0-31) - MBC30 (rh) */
    Ifx_UReg_32Bit MBC31:1;           /**< \brief [31:31] Message Buffer Status Changed 31 (n = 0-31) - MBC31 (rh) */
} Ifx_ERAY_MBSC1_Bits;

/** \brief Message Buffer Status Changed 2 */
typedef struct _Ifx_ERAY_MBSC2_Bits
{
    Ifx_UReg_32Bit MBC32:1;           /**< \brief [0:0] Message Buffer Status Changed 32 (n = 32-63) - MBC32 (rh) */
    Ifx_UReg_32Bit MBC33:1;           /**< \brief [1:1] Message Buffer Status Changed 33 (n = 32-63) - MBC33 (rh) */
    Ifx_UReg_32Bit MBC34:1;           /**< \brief [2:2] Message Buffer Status Changed 34 (n = 32-63) - MBC34 (rh) */
    Ifx_UReg_32Bit MBC35:1;           /**< \brief [3:3] Message Buffer Status Changed 35 (n = 32-63) - MBC35 (rh) */
    Ifx_UReg_32Bit MBC36:1;           /**< \brief [4:4] Message Buffer Status Changed 36 (n = 32-63) - MBC36 (rh) */
    Ifx_UReg_32Bit MBC37:1;           /**< \brief [5:5] Message Buffer Status Changed 37 (n = 32-63) - MBC37 (rh) */
    Ifx_UReg_32Bit MBC38:1;           /**< \brief [6:6] Message Buffer Status Changed 38 (n = 32-63) - MBC38 (rh) */
    Ifx_UReg_32Bit MBC39:1;           /**< \brief [7:7] Message Buffer Status Changed 39 (n = 32-63) - MBC39 (rh) */
    Ifx_UReg_32Bit MBC40:1;           /**< \brief [8:8] Message Buffer Status Changed 40 (n = 32-63) - MBC40 (rh) */
    Ifx_UReg_32Bit MBC41:1;           /**< \brief [9:9] Message Buffer Status Changed 41 (n = 32-63) - MBC41 (rh) */
    Ifx_UReg_32Bit MBC42:1;           /**< \brief [10:10] Message Buffer Status Changed 42 (n = 32-63) - MBC42 (rh) */
    Ifx_UReg_32Bit MBC43:1;           /**< \brief [11:11] Message Buffer Status Changed 43 (n = 32-63) - MBC43 (rh) */
    Ifx_UReg_32Bit MBC44:1;           /**< \brief [12:12] Message Buffer Status Changed 44 (n = 32-63) - MBC44 (rh) */
    Ifx_UReg_32Bit MBC45:1;           /**< \brief [13:13] Message Buffer Status Changed 45 (n = 32-63) - MBC45 (rh) */
    Ifx_UReg_32Bit MBC46:1;           /**< \brief [14:14] Message Buffer Status Changed 46 (n = 32-63) - MBC46 (rh) */
    Ifx_UReg_32Bit MBC47:1;           /**< \brief [15:15] Message Buffer Status Changed 47 (n = 32-63) - MBC47 (rh) */
    Ifx_UReg_32Bit MBC48:1;           /**< \brief [16:16] Message Buffer Status Changed 48 (n = 32-63) - MBC48 (rh) */
    Ifx_UReg_32Bit MBC49:1;           /**< \brief [17:17] Message Buffer Status Changed 49 (n = 32-63) - MBC49 (rh) */
    Ifx_UReg_32Bit MBC50:1;           /**< \brief [18:18] Message Buffer Status Changed 50 (n = 32-63) - MBC50 (rh) */
    Ifx_UReg_32Bit MBC51:1;           /**< \brief [19:19] Message Buffer Status Changed 51 (n = 32-63) - MBC51 (rh) */
    Ifx_UReg_32Bit MBC52:1;           /**< \brief [20:20] Message Buffer Status Changed 52 (n = 32-63) - MBC52 (rh) */
    Ifx_UReg_32Bit MBC53:1;           /**< \brief [21:21] Message Buffer Status Changed 53 (n = 32-63) - MBC53 (rh) */
    Ifx_UReg_32Bit MBC54:1;           /**< \brief [22:22] Message Buffer Status Changed 54 (n = 32-63) - MBC54 (rh) */
    Ifx_UReg_32Bit MBC55:1;           /**< \brief [23:23] Message Buffer Status Changed 55 (n = 32-63) - MBC55 (rh) */
    Ifx_UReg_32Bit MBC56:1;           /**< \brief [24:24] Message Buffer Status Changed 56 (n = 32-63) - MBC56 (rh) */
    Ifx_UReg_32Bit MBC57:1;           /**< \brief [25:25] Message Buffer Status Changed 57 (n = 32-63) - MBC57 (rh) */
    Ifx_UReg_32Bit MBC58:1;           /**< \brief [26:26] Message Buffer Status Changed 58 (n = 32-63) - MBC58 (rh) */
    Ifx_UReg_32Bit MBC59:1;           /**< \brief [27:27] Message Buffer Status Changed 59 (n = 32-63) - MBC59 (rh) */
    Ifx_UReg_32Bit MBC60:1;           /**< \brief [28:28] Message Buffer Status Changed 60 (n = 32-63) - MBC60 (rh) */
    Ifx_UReg_32Bit MBC61:1;           /**< \brief [29:29] Message Buffer Status Changed 61 (n = 32-63) - MBC61 (rh) */
    Ifx_UReg_32Bit MBC62:1;           /**< \brief [30:30] Message Buffer Status Changed 62 (n = 32-63) - MBC62 (rh) */
    Ifx_UReg_32Bit MBC63:1;           /**< \brief [31:31] Message Buffer Status Changed 63 (n = 32-63) - MBC63 (rh) */
} Ifx_ERAY_MBSC2_Bits;

/** \brief Message Buffer Status Changed 3 */
typedef struct _Ifx_ERAY_MBSC3_Bits
{
    Ifx_UReg_32Bit MBC64:1;           /**< \brief [0:0] Message Buffer Status Changed 64 (n = 64-95) - MBC64 (rh) */
    Ifx_UReg_32Bit MBC65:1;           /**< \brief [1:1] Message Buffer Status Changed 65 (n = 64-95) - MBC65 (rh) */
    Ifx_UReg_32Bit MBC66:1;           /**< \brief [2:2] Message Buffer Status Changed 66 (n = 64-95) - MBC66 (rh) */
    Ifx_UReg_32Bit MBC67:1;           /**< \brief [3:3] Message Buffer Status Changed 67 (n = 64-95) - MBC67 (rh) */
    Ifx_UReg_32Bit MBC68:1;           /**< \brief [4:4] Message Buffer Status Changed 68 (n = 64-95) - MBC68 (rh) */
    Ifx_UReg_32Bit MBC69:1;           /**< \brief [5:5] Message Buffer Status Changed 69 (n = 64-95) - MBC69 (rh) */
    Ifx_UReg_32Bit MBC70:1;           /**< \brief [6:6] Message Buffer Status Changed 70 (n = 64-95) - MBC70 (rh) */
    Ifx_UReg_32Bit MBC71:1;           /**< \brief [7:7] Message Buffer Status Changed 71 (n = 64-95) - MBC71 (rh) */
    Ifx_UReg_32Bit MBC72:1;           /**< \brief [8:8] Message Buffer Status Changed 72 (n = 64-95) - MBC72 (rh) */
    Ifx_UReg_32Bit MBC73:1;           /**< \brief [9:9] Message Buffer Status Changed 73 (n = 64-95) - MBC73 (rh) */
    Ifx_UReg_32Bit MBC74:1;           /**< \brief [10:10] Message Buffer Status Changed 74 (n = 64-95) - MBC74 (rh) */
    Ifx_UReg_32Bit MBC75:1;           /**< \brief [11:11] Message Buffer Status Changed 75 (n = 64-95) - MBC75 (rh) */
    Ifx_UReg_32Bit MBC76:1;           /**< \brief [12:12] Message Buffer Status Changed 76 (n = 64-95) - MBC76 (rh) */
    Ifx_UReg_32Bit MBC77:1;           /**< \brief [13:13] Message Buffer Status Changed 77 (n = 64-95) - MBC77 (rh) */
    Ifx_UReg_32Bit MBC78:1;           /**< \brief [14:14] Message Buffer Status Changed 78 (n = 64-95) - MBC78 (rh) */
    Ifx_UReg_32Bit MBC79:1;           /**< \brief [15:15] Message Buffer Status Changed 79 (n = 64-95) - MBC79 (rh) */
    Ifx_UReg_32Bit MBC80:1;           /**< \brief [16:16] Message Buffer Status Changed 80 (n = 64-95) - MBC80 (rh) */
    Ifx_UReg_32Bit MBC81:1;           /**< \brief [17:17] Message Buffer Status Changed 81 (n = 64-95) - MBC81 (rh) */
    Ifx_UReg_32Bit MBC82:1;           /**< \brief [18:18] Message Buffer Status Changed 82 (n = 64-95) - MBC82 (rh) */
    Ifx_UReg_32Bit MBC83:1;           /**< \brief [19:19] Message Buffer Status Changed 83 (n = 64-95) - MBC83 (rh) */
    Ifx_UReg_32Bit MBC84:1;           /**< \brief [20:20] Message Buffer Status Changed 84 (n = 64-95) - MBC84 (rh) */
    Ifx_UReg_32Bit MBC85:1;           /**< \brief [21:21] Message Buffer Status Changed 85 (n = 64-95) - MBC85 (rh) */
    Ifx_UReg_32Bit MBC86:1;           /**< \brief [22:22] Message Buffer Status Changed 86 (n = 64-95) - MBC86 (rh) */
    Ifx_UReg_32Bit MBC87:1;           /**< \brief [23:23] Message Buffer Status Changed 87 (n = 64-95) - MBC87 (rh) */
    Ifx_UReg_32Bit MBC88:1;           /**< \brief [24:24] Message Buffer Status Changed 88 (n = 64-95) - MBC88 (rh) */
    Ifx_UReg_32Bit MBC89:1;           /**< \brief [25:25] Message Buffer Status Changed 89 (n = 64-95) - MBC89 (rh) */
    Ifx_UReg_32Bit MBC90:1;           /**< \brief [26:26] Message Buffer Status Changed 90 (n = 64-95) - MBC90 (rh) */
    Ifx_UReg_32Bit MBC91:1;           /**< \brief [27:27] Message Buffer Status Changed 91 (n = 64-95) - MBC91 (rh) */
    Ifx_UReg_32Bit MBC92:1;           /**< \brief [28:28] Message Buffer Status Changed 92 (n = 64-95) - MBC92 (rh) */
    Ifx_UReg_32Bit MBC93:1;           /**< \brief [29:29] Message Buffer Status Changed 93 (n = 64-95) - MBC93 (rh) */
    Ifx_UReg_32Bit MBC94:1;           /**< \brief [30:30] Message Buffer Status Changed 94 (n = 64-95) - MBC94 (rh) */
    Ifx_UReg_32Bit MBC95:1;           /**< \brief [31:31] Message Buffer Status Changed 95 (n = 64-95) - MBC95 (rh) */
} Ifx_ERAY_MBSC3_Bits;

/** \brief Message Buffer Status Changed 4 */
typedef struct _Ifx_ERAY_MBSC4_Bits
{
    Ifx_UReg_32Bit MBC96:1;           /**< \brief [0:0] Message Buffer Status Changed 96 (n = 96-127) - MBC96 (rh) */
    Ifx_UReg_32Bit MBC97:1;           /**< \brief [1:1] Message Buffer Status Changed 97 (n = 96-127) - MBC97 (rh) */
    Ifx_UReg_32Bit MBC98:1;           /**< \brief [2:2] Message Buffer Status Changed 98 (n = 96-127) - MBC98 (rh) */
    Ifx_UReg_32Bit MBC99:1;           /**< \brief [3:3] Message Buffer Status Changed 99 (n = 96-127) - MBC99 (rh) */
    Ifx_UReg_32Bit MBC100:1;          /**< \brief [4:4] Message Buffer Status Changed 100 (n = 96-127) - MBC100 (rh) */
    Ifx_UReg_32Bit MBC101:1;          /**< \brief [5:5] Message Buffer Status Changed 101 (n = 96-127) - MBC101 (rh) */
    Ifx_UReg_32Bit MBC102:1;          /**< \brief [6:6] Message Buffer Status Changed 102 (n = 96-127) - MBC102 (rh) */
    Ifx_UReg_32Bit MBC103:1;          /**< \brief [7:7] Message Buffer Status Changed 103 (n = 96-127) - MBC103 (rh) */
    Ifx_UReg_32Bit MBC104:1;          /**< \brief [8:8] Message Buffer Status Changed 104 (n = 96-127) - MBC104 (rh) */
    Ifx_UReg_32Bit MBC105:1;          /**< \brief [9:9] Message Buffer Status Changed 105 (n = 96-127) - MBC105 (rh) */
    Ifx_UReg_32Bit MBC106:1;          /**< \brief [10:10] Message Buffer Status Changed 106 (n = 96-127) - MBC106 (rh) */
    Ifx_UReg_32Bit MBC107:1;          /**< \brief [11:11] Message Buffer Status Changed 107 (n = 96-127) - MBC107 (rh) */
    Ifx_UReg_32Bit MBC108:1;          /**< \brief [12:12] Message Buffer Status Changed 108 (n = 96-127) - MBC108 (rh) */
    Ifx_UReg_32Bit MBC109:1;          /**< \brief [13:13] Message Buffer Status Changed 109 (n = 96-127) - MBC109 (rh) */
    Ifx_UReg_32Bit MBC110:1;          /**< \brief [14:14] Message Buffer Status Changed 110 (n = 96-127) - MBC110 (rh) */
    Ifx_UReg_32Bit MBC111:1;          /**< \brief [15:15] Message Buffer Status Changed 111 (n = 96-127) - MBC111 (rh) */
    Ifx_UReg_32Bit MBC112:1;          /**< \brief [16:16] Message Buffer Status Changed 112 (n = 96-127) - MBC112 (rh) */
    Ifx_UReg_32Bit MBC113:1;          /**< \brief [17:17] Message Buffer Status Changed 113 (n = 96-127) - MBC113 (rh) */
    Ifx_UReg_32Bit MBC114:1;          /**< \brief [18:18] Message Buffer Status Changed 114 (n = 96-127) - MBC114 (rh) */
    Ifx_UReg_32Bit MBC115:1;          /**< \brief [19:19] Message Buffer Status Changed 115 (n = 96-127) - MBC115 (rh) */
    Ifx_UReg_32Bit MBC116:1;          /**< \brief [20:20] Message Buffer Status Changed 116 (n = 96-127) - MBC116 (rh) */
    Ifx_UReg_32Bit MBC117:1;          /**< \brief [21:21] Message Buffer Status Changed 117 (n = 96-127) - MBC117 (rh) */
    Ifx_UReg_32Bit MBC118:1;          /**< \brief [22:22] Message Buffer Status Changed 118 (n = 96-127) - MBC118 (rh) */
    Ifx_UReg_32Bit MBC119:1;          /**< \brief [23:23] Message Buffer Status Changed 119 (n = 96-127) - MBC119 (rh) */
    Ifx_UReg_32Bit MBC120:1;          /**< \brief [24:24] Message Buffer Status Changed 120 (n = 96-127) - MBC120 (rh) */
    Ifx_UReg_32Bit MBC121:1;          /**< \brief [25:25] Message Buffer Status Changed 121 (n = 96-127) - MBC121 (rh) */
    Ifx_UReg_32Bit MBC122:1;          /**< \brief [26:26] Message Buffer Status Changed 122 (n = 96-127) - MBC122 (rh) */
    Ifx_UReg_32Bit MBC123:1;          /**< \brief [27:27] Message Buffer Status Changed 123 (n = 96-127) - MBC123 (rh) */
    Ifx_UReg_32Bit MBC124:1;          /**< \brief [28:28] Message Buffer Status Changed 124 (n = 96-127) - MBC124 (rh) */
    Ifx_UReg_32Bit MBC125:1;          /**< \brief [29:29] Message Buffer Status Changed 125 (n = 96-127) - MBC125 (rh) */
    Ifx_UReg_32Bit MBC126:1;          /**< \brief [30:30] Message Buffer Status Changed 126 (n = 96-127) - MBC126 (rh) */
    Ifx_UReg_32Bit MBC127:1;          /**< \brief [31:31] Message Buffer Status Changed 127 (n = 96-127) - MBC127 (rh) */
} Ifx_ERAY_MBSC4_Bits;

/** \brief MHD Configuration Register */
typedef struct _Ifx_ERAY_MHDC_Bits
{
    Ifx_UReg_32Bit SFDL:7;            /**< \brief [6:0] Static Frame Data Length(gPayloadLengthStatic) - SFDL (rw) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit SLT:13;            /**< \brief [28:16] Start of Latest Transmit(pLatestTx)  - SLT (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_ERAY_MHDC_Bits;

/** \brief Message Handler Constraints Flags */
typedef struct _Ifx_ERAY_MHDF_Bits
{
    Ifx_UReg_32Bit SNUA:1;            /**< \brief [0:0] Status Not Updated Channel A - SNUA (rwh) */
    Ifx_UReg_32Bit SNUB:1;            /**< \brief [1:1] Status Not Updated Channel B - SNUB (rwh) */
    Ifx_UReg_32Bit FNFA:1;            /**< \brief [2:2] Find Sequence Not Finished Channel A - FNFA (rwh) */
    Ifx_UReg_32Bit FNFB:1;            /**< \brief [3:3] Find Sequence Not Finished Channel B - FNFB (rwh) */
    Ifx_UReg_32Bit TBFA:1;            /**< \brief [4:4] Transient Buffer Access Failure A - TBFA (rwh) */
    Ifx_UReg_32Bit TBFB:1;            /**< \brief [5:5] Transient Buffer Access Failure B - TBFB (rwh) */
    Ifx_UReg_32Bit TNSA:1;            /**< \brief [6:6] Transmission Not Started Channel A - TNSA (rwh) */
    Ifx_UReg_32Bit TNSB:1;            /**< \brief [7:7] Transmission Not Started Channel B - TNSB (rwh) */
    Ifx_UReg_32Bit WAHP:1;            /**< \brief [8:8] Write Attempt to Header Partition - WAHP (rwh) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_ERAY_MHDF_Bits;

/** \brief Message Handler Status */
typedef struct _Ifx_ERAY_MHDS_Bits
{
    Ifx_UReg_32Bit EIBF:1;            /**< \brief [0:0] ECC Error Input Buffer RAM 1,2 - EIBF (rwh) */
    Ifx_UReg_32Bit EOBF:1;            /**< \brief [1:1] ECC Error Output Buffer RAM 1,2 - EOBF (rwh) */
    Ifx_UReg_32Bit EMR:1;             /**< \brief [2:2] ECC Error Message RAM - EMR (rwh) */
    Ifx_UReg_32Bit ETBF1:1;           /**< \brief [3:3] ECC Error Transient Buffer RAM A - ETBF1 (rwh) */
    Ifx_UReg_32Bit ETBF2:1;           /**< \brief [4:4] ECC Error Transient Buffer RAM B - ETBF2 (rwh) */
    Ifx_UReg_32Bit FMBD:1;            /**< \brief [5:5] Faulty Message Buffer Detected - FMBD (rwh) */
    Ifx_UReg_32Bit MFMB:1;            /**< \brief [6:6] Multiple Faulty Message Buffers detected - MFMB (rwh) */
    Ifx_UReg_32Bit CRAM:1;            /**< \brief [7:7] Clear all internal RAM\u2019s - CRAM (rh) */
    Ifx_UReg_32Bit FMB:7;             /**< \brief [14:8] Faulty Message Buffer - FMB (rh) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit MBT:7;             /**< \brief [22:16] Message Buffer Transmitted - MBT (rh) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit MBU:7;             /**< \brief [30:24] Message Buffer Updated - MBU (rh) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_ERAY_MHDS_Bits;

/** \brief Message RAM Configuration */
typedef struct _Ifx_ERAY_MRC_Bits
{
    Ifx_UReg_32Bit FDB:8;             /**< \brief [7:0] First Dynamic Buffer - FDB (rw) */
    Ifx_UReg_32Bit FFB:8;             /**< \brief [15:8] First Buffer of FIFO - FFB (rw) */
    Ifx_UReg_32Bit LCB:8;             /**< \brief [23:16] Last Configured Buffer - LCB (rw) */
    Ifx_UReg_32Bit SEC:2;             /**< \brief [25:24] Secure Buffers - SEC (rw) */
    Ifx_UReg_32Bit SPLM:1;            /**< \brief [26:26] SYNC Frame Payload Multiplex - SPLM (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_MRC_Bits;

/** \brief Message Buffer Status Changed Interrupt Control 1 */
typedef struct _Ifx_ERAY_MSIC1_Bits
{
    Ifx_UReg_32Bit MSIP0:1;           /**< \brief [0:0] Message Buffer Status Changed Interrupt Pointer 0 (n = 0-31) - MSIP0 (rw) */
    Ifx_UReg_32Bit MSIP1:1;           /**< \brief [1:1] Message Buffer Status Changed Interrupt Pointer 1 (n = 0-31) - MSIP1 (rw) */
    Ifx_UReg_32Bit MSIP2:1;           /**< \brief [2:2] Message Buffer Status Changed Interrupt Pointer 2 (n = 0-31) - MSIP2 (rw) */
    Ifx_UReg_32Bit MSIP3:1;           /**< \brief [3:3] Message Buffer Status Changed Interrupt Pointer 3 (n = 0-31) - MSIP3 (rw) */
    Ifx_UReg_32Bit MSIP4:1;           /**< \brief [4:4] Message Buffer Status Changed Interrupt Pointer 4 (n = 0-31) - MSIP4 (rw) */
    Ifx_UReg_32Bit MSIP5:1;           /**< \brief [5:5] Message Buffer Status Changed Interrupt Pointer 5 (n = 0-31) - MSIP5 (rw) */
    Ifx_UReg_32Bit MSIP6:1;           /**< \brief [6:6] Message Buffer Status Changed Interrupt Pointer 6 (n = 0-31) - MSIP6 (rw) */
    Ifx_UReg_32Bit MSIP7:1;           /**< \brief [7:7] Message Buffer Status Changed Interrupt Pointer 7 (n = 0-31) - MSIP7 (rw) */
    Ifx_UReg_32Bit MSIP8:1;           /**< \brief [8:8] Message Buffer Status Changed Interrupt Pointer 8 (n = 0-31) - MSIP8 (rw) */
    Ifx_UReg_32Bit MSIP9:1;           /**< \brief [9:9] Message Buffer Status Changed Interrupt Pointer 9 (n = 0-31) - MSIP9 (rw) */
    Ifx_UReg_32Bit MSIP10:1;          /**< \brief [10:10] Message Buffer Status Changed Interrupt Pointer 10 (n = 0-31) - MSIP10 (rw) */
    Ifx_UReg_32Bit MSIP11:1;          /**< \brief [11:11] Message Buffer Status Changed Interrupt Pointer 11 (n = 0-31) - MSIP11 (rw) */
    Ifx_UReg_32Bit MSIP12:1;          /**< \brief [12:12] Message Buffer Status Changed Interrupt Pointer 12 (n = 0-31) - MSIP12 (rw) */
    Ifx_UReg_32Bit MSIP13:1;          /**< \brief [13:13] Message Buffer Status Changed Interrupt Pointer 13 (n = 0-31) - MSIP13 (rw) */
    Ifx_UReg_32Bit MSIP14:1;          /**< \brief [14:14] Message Buffer Status Changed Interrupt Pointer 14 (n = 0-31) - MSIP14 (rw) */
    Ifx_UReg_32Bit MSIP15:1;          /**< \brief [15:15] Message Buffer Status Changed Interrupt Pointer 15 (n = 0-31) - MSIP15 (rw) */
    Ifx_UReg_32Bit MSIP16:1;          /**< \brief [16:16] Message Buffer Status Changed Interrupt Pointer 16 (n = 0-31) - MSIP16 (rw) */
    Ifx_UReg_32Bit MSIP17:1;          /**< \brief [17:17] Message Buffer Status Changed Interrupt Pointer 17 (n = 0-31) - MSIP17 (rw) */
    Ifx_UReg_32Bit MSIP18:1;          /**< \brief [18:18] Message Buffer Status Changed Interrupt Pointer 18 (n = 0-31) - MSIP18 (rw) */
    Ifx_UReg_32Bit MSIP19:1;          /**< \brief [19:19] Message Buffer Status Changed Interrupt Pointer 19 (n = 0-31) - MSIP19 (rw) */
    Ifx_UReg_32Bit MSIP20:1;          /**< \brief [20:20] Message Buffer Status Changed Interrupt Pointer 20 (n = 0-31) - MSIP20 (rw) */
    Ifx_UReg_32Bit MSIP21:1;          /**< \brief [21:21] Message Buffer Status Changed Interrupt Pointer 21 (n = 0-31) - MSIP21 (rw) */
    Ifx_UReg_32Bit MSIP22:1;          /**< \brief [22:22] Message Buffer Status Changed Interrupt Pointer 22 (n = 0-31) - MSIP22 (rw) */
    Ifx_UReg_32Bit MSIP23:1;          /**< \brief [23:23] Message Buffer Status Changed Interrupt Pointer 23 (n = 0-31) - MSIP23 (rw) */
    Ifx_UReg_32Bit MSIP24:1;          /**< \brief [24:24] Message Buffer Status Changed Interrupt Pointer 24 (n = 0-31) - MSIP24 (rw) */
    Ifx_UReg_32Bit MSIP25:1;          /**< \brief [25:25] Message Buffer Status Changed Interrupt Pointer 25 (n = 0-31) - MSIP25 (rw) */
    Ifx_UReg_32Bit MSIP26:1;          /**< \brief [26:26] Message Buffer Status Changed Interrupt Pointer 26 (n = 0-31) - MSIP26 (rw) */
    Ifx_UReg_32Bit MSIP27:1;          /**< \brief [27:27] Message Buffer Status Changed Interrupt Pointer 27 (n = 0-31) - MSIP27 (rw) */
    Ifx_UReg_32Bit MSIP28:1;          /**< \brief [28:28] Message Buffer Status Changed Interrupt Pointer 28 (n = 0-31) - MSIP28 (rw) */
    Ifx_UReg_32Bit MSIP29:1;          /**< \brief [29:29] Message Buffer Status Changed Interrupt Pointer 29 (n = 0-31) - MSIP29 (rw) */
    Ifx_UReg_32Bit MSIP30:1;          /**< \brief [30:30] Message Buffer Status Changed Interrupt Pointer 30 (n = 0-31) - MSIP30 (rw) */
    Ifx_UReg_32Bit MSIP31:1;          /**< \brief [31:31] Message Buffer Status Changed Interrupt Pointer 31 (n = 0-31) - MSIP31 (rw) */
} Ifx_ERAY_MSIC1_Bits;

/** \brief Message Buffer Status Changed Interrupt Control 2 */
typedef struct _Ifx_ERAY_MSIC2_Bits
{
    Ifx_UReg_32Bit MSIP32:1;          /**< \brief [0:0] Message Buffer Status Changed Interrupt Pointer 32 (n = 32-63) - MSIP32 (rw) */
    Ifx_UReg_32Bit MSIP33:1;          /**< \brief [1:1] Message Buffer Status Changed Interrupt Pointer 33 (n = 32-63) - MSIP33 (rw) */
    Ifx_UReg_32Bit MSIP34:1;          /**< \brief [2:2] Message Buffer Status Changed Interrupt Pointer 34 (n = 32-63) - MSIP34 (rw) */
    Ifx_UReg_32Bit MSIP35:1;          /**< \brief [3:3] Message Buffer Status Changed Interrupt Pointer 35 (n = 32-63) - MSIP35 (rw) */
    Ifx_UReg_32Bit MSIP36:1;          /**< \brief [4:4] Message Buffer Status Changed Interrupt Pointer 36 (n = 32-63) - MSIP36 (rw) */
    Ifx_UReg_32Bit MSIP37:1;          /**< \brief [5:5] Message Buffer Status Changed Interrupt Pointer 37 (n = 32-63) - MSIP37 (rw) */
    Ifx_UReg_32Bit MSIP38:1;          /**< \brief [6:6] Message Buffer Status Changed Interrupt Pointer 38 (n = 32-63) - MSIP38 (rw) */
    Ifx_UReg_32Bit MSIP39:1;          /**< \brief [7:7] Message Buffer Status Changed Interrupt Pointer 39 (n = 32-63) - MSIP39 (rw) */
    Ifx_UReg_32Bit MSIP40:1;          /**< \brief [8:8] Message Buffer Status Changed Interrupt Pointer 40 (n = 32-63) - MSIP40 (rw) */
    Ifx_UReg_32Bit MSIP41:1;          /**< \brief [9:9] Message Buffer Status Changed Interrupt Pointer 41 (n = 32-63) - MSIP41 (rw) */
    Ifx_UReg_32Bit MSIP42:1;          /**< \brief [10:10] Message Buffer Status Changed Interrupt Pointer 42 (n = 32-63) - MSIP42 (rw) */
    Ifx_UReg_32Bit MSIP43:1;          /**< \brief [11:11] Message Buffer Status Changed Interrupt Pointer 43 (n = 32-63) - MSIP43 (rw) */
    Ifx_UReg_32Bit MSIP44:1;          /**< \brief [12:12] Message Buffer Status Changed Interrupt Pointer 44 (n = 32-63) - MSIP44 (rw) */
    Ifx_UReg_32Bit MSIP45:1;          /**< \brief [13:13] Message Buffer Status Changed Interrupt Pointer 45 (n = 32-63) - MSIP45 (rw) */
    Ifx_UReg_32Bit MSIP46:1;          /**< \brief [14:14] Message Buffer Status Changed Interrupt Pointer 46 (n = 32-63) - MSIP46 (rw) */
    Ifx_UReg_32Bit MSIP47:1;          /**< \brief [15:15] Message Buffer Status Changed Interrupt Pointer 47 (n = 32-63) - MSIP47 (rw) */
    Ifx_UReg_32Bit MSIP48:1;          /**< \brief [16:16] Message Buffer Status Changed Interrupt Pointer 48 (n = 32-63) - MSIP48 (rw) */
    Ifx_UReg_32Bit MSIP49:1;          /**< \brief [17:17] Message Buffer Status Changed Interrupt Pointer 49 (n = 32-63) - MSIP49 (rw) */
    Ifx_UReg_32Bit MSIP50:1;          /**< \brief [18:18] Message Buffer Status Changed Interrupt Pointer 50 (n = 32-63) - MSIP50 (rw) */
    Ifx_UReg_32Bit MSIP51:1;          /**< \brief [19:19] Message Buffer Status Changed Interrupt Pointer 51 (n = 32-63) - MSIP51 (rw) */
    Ifx_UReg_32Bit MSIP52:1;          /**< \brief [20:20] Message Buffer Status Changed Interrupt Pointer 52 (n = 32-63) - MSIP52 (rw) */
    Ifx_UReg_32Bit MSIP53:1;          /**< \brief [21:21] Message Buffer Status Changed Interrupt Pointer 53 (n = 32-63) - MSIP53 (rw) */
    Ifx_UReg_32Bit MSIP54:1;          /**< \brief [22:22] Message Buffer Status Changed Interrupt Pointer 54 (n = 32-63) - MSIP54 (rw) */
    Ifx_UReg_32Bit MSIP55:1;          /**< \brief [23:23] Message Buffer Status Changed Interrupt Pointer 55 (n = 32-63) - MSIP55 (rw) */
    Ifx_UReg_32Bit MSIP56:1;          /**< \brief [24:24] Message Buffer Status Changed Interrupt Pointer 56 (n = 32-63) - MSIP56 (rw) */
    Ifx_UReg_32Bit MSIP57:1;          /**< \brief [25:25] Message Buffer Status Changed Interrupt Pointer 57 (n = 32-63) - MSIP57 (rw) */
    Ifx_UReg_32Bit MSIP58:1;          /**< \brief [26:26] Message Buffer Status Changed Interrupt Pointer 58 (n = 32-63) - MSIP58 (rw) */
    Ifx_UReg_32Bit MSIP59:1;          /**< \brief [27:27] Message Buffer Status Changed Interrupt Pointer 59 (n = 32-63) - MSIP59 (rw) */
    Ifx_UReg_32Bit MSIP60:1;          /**< \brief [28:28] Message Buffer Status Changed Interrupt Pointer 60 (n = 32-63) - MSIP60 (rw) */
    Ifx_UReg_32Bit MSIP61:1;          /**< \brief [29:29] Message Buffer Status Changed Interrupt Pointer 61 (n = 32-63) - MSIP61 (rw) */
    Ifx_UReg_32Bit MSIP62:1;          /**< \brief [30:30] Message Buffer Status Changed Interrupt Pointer 62 (n = 32-63) - MSIP62 (rw) */
    Ifx_UReg_32Bit MSIP63:1;          /**< \brief [31:31] Message Buffer Status Changed Interrupt Pointer 63 (n = 32-63) - MSIP63 (rw) */
} Ifx_ERAY_MSIC2_Bits;

/** \brief Message Buffer Status Changed Interrupt Control 3 */
typedef struct _Ifx_ERAY_MSIC3_Bits
{
    Ifx_UReg_32Bit MSIP64:1;          /**< \brief [0:0] Message Buffer Status Changed Interrupt Pointer 64 (n = 64-95) - MSIP64 (rw) */
    Ifx_UReg_32Bit MSIP65:1;          /**< \brief [1:1] Message Buffer Status Changed Interrupt Pointer 65 (n = 64-95) - MSIP65 (rw) */
    Ifx_UReg_32Bit MSIP66:1;          /**< \brief [2:2] Message Buffer Status Changed Interrupt Pointer 66 (n = 64-95) - MSIP66 (rw) */
    Ifx_UReg_32Bit MSIP67:1;          /**< \brief [3:3] Message Buffer Status Changed Interrupt Pointer 67 (n = 64-95) - MSIP67 (rw) */
    Ifx_UReg_32Bit MSIP68:1;          /**< \brief [4:4] Message Buffer Status Changed Interrupt Pointer 68 (n = 64-95) - MSIP68 (rw) */
    Ifx_UReg_32Bit MSIP69:1;          /**< \brief [5:5] Message Buffer Status Changed Interrupt Pointer 69 (n = 64-95) - MSIP69 (rw) */
    Ifx_UReg_32Bit MSIP70:1;          /**< \brief [6:6] Message Buffer Status Changed Interrupt Pointer 70 (n = 64-95) - MSIP70 (rw) */
    Ifx_UReg_32Bit MSIP71:1;          /**< \brief [7:7] Message Buffer Status Changed Interrupt Pointer 71 (n = 64-95) - MSIP71 (rw) */
    Ifx_UReg_32Bit MSIP72:1;          /**< \brief [8:8] Message Buffer Status Changed Interrupt Pointer 72 (n = 64-95) - MSIP72 (rw) */
    Ifx_UReg_32Bit MSIP73:1;          /**< \brief [9:9] Message Buffer Status Changed Interrupt Pointer 73 (n = 64-95) - MSIP73 (rw) */
    Ifx_UReg_32Bit MSIP74:1;          /**< \brief [10:10] Message Buffer Status Changed Interrupt Pointer 74 (n = 64-95) - MSIP74 (rw) */
    Ifx_UReg_32Bit MSIP75:1;          /**< \brief [11:11] Message Buffer Status Changed Interrupt Pointer 75 (n = 64-95) - MSIP75 (rw) */
    Ifx_UReg_32Bit MSIP76:1;          /**< \brief [12:12] Message Buffer Status Changed Interrupt Pointer 76 (n = 64-95) - MSIP76 (rw) */
    Ifx_UReg_32Bit MSIP77:1;          /**< \brief [13:13] Message Buffer Status Changed Interrupt Pointer 77 (n = 64-95) - MSIP77 (rw) */
    Ifx_UReg_32Bit MSIP78:1;          /**< \brief [14:14] Message Buffer Status Changed Interrupt Pointer 78 (n = 64-95) - MSIP78 (rw) */
    Ifx_UReg_32Bit MSIP79:1;          /**< \brief [15:15] Message Buffer Status Changed Interrupt Pointer 79 (n = 64-95) - MSIP79 (rw) */
    Ifx_UReg_32Bit MSIP80:1;          /**< \brief [16:16] Message Buffer Status Changed Interrupt Pointer 80 (n = 64-95) - MSIP80 (rw) */
    Ifx_UReg_32Bit MSIP81:1;          /**< \brief [17:17] Message Buffer Status Changed Interrupt Pointer 81 (n = 64-95) - MSIP81 (rw) */
    Ifx_UReg_32Bit MSIP82:1;          /**< \brief [18:18] Message Buffer Status Changed Interrupt Pointer 82 (n = 64-95) - MSIP82 (rw) */
    Ifx_UReg_32Bit MSIP83:1;          /**< \brief [19:19] Message Buffer Status Changed Interrupt Pointer 83 (n = 64-95) - MSIP83 (rw) */
    Ifx_UReg_32Bit MSIP84:1;          /**< \brief [20:20] Message Buffer Status Changed Interrupt Pointer 84 (n = 64-95) - MSIP84 (rw) */
    Ifx_UReg_32Bit MSIP85:1;          /**< \brief [21:21] Message Buffer Status Changed Interrupt Pointer 85 (n = 64-95) - MSIP85 (rw) */
    Ifx_UReg_32Bit MSIP86:1;          /**< \brief [22:22] Message Buffer Status Changed Interrupt Pointer 86 (n = 64-95) - MSIP86 (rw) */
    Ifx_UReg_32Bit MSIP87:1;          /**< \brief [23:23] Message Buffer Status Changed Interrupt Pointer 87 (n = 64-95) - MSIP87 (rw) */
    Ifx_UReg_32Bit MSIP88:1;          /**< \brief [24:24] Message Buffer Status Changed Interrupt Pointer 88 (n = 64-95) - MSIP88 (rw) */
    Ifx_UReg_32Bit MSIP89:1;          /**< \brief [25:25] Message Buffer Status Changed Interrupt Pointer 89 (n = 64-95) - MSIP89 (rw) */
    Ifx_UReg_32Bit MSIP90:1;          /**< \brief [26:26] Message Buffer Status Changed Interrupt Pointer 90 (n = 64-95) - MSIP90 (rw) */
    Ifx_UReg_32Bit MSIP91:1;          /**< \brief [27:27] Message Buffer Status Changed Interrupt Pointer 91 (n = 64-95) - MSIP91 (rw) */
    Ifx_UReg_32Bit MSIP92:1;          /**< \brief [28:28] Message Buffer Status Changed Interrupt Pointer 92 (n = 64-95) - MSIP92 (rw) */
    Ifx_UReg_32Bit MSIP93:1;          /**< \brief [29:29] Message Buffer Status Changed Interrupt Pointer 93 (n = 64-95) - MSIP93 (rw) */
    Ifx_UReg_32Bit MSIP94:1;          /**< \brief [30:30] Message Buffer Status Changed Interrupt Pointer 94 (n = 64-95) - MSIP94 (rw) */
    Ifx_UReg_32Bit MSIP95:1;          /**< \brief [31:31] Message Buffer Status Changed Interrupt Pointer 95 (n = 64-95) - MSIP95 (rw) */
} Ifx_ERAY_MSIC3_Bits;

/** \brief Message Buffer Status Changed Interrupt Control 4 */
typedef struct _Ifx_ERAY_MSIC4_Bits
{
    Ifx_UReg_32Bit MSIP96:1;          /**< \brief [0:0] Message Buffer Status Changed Interrupt Pointer 96 (n = 96-127) - MSIP96 (rw) */
    Ifx_UReg_32Bit MSIP97:1;          /**< \brief [1:1] Message Buffer Status Changed Interrupt Pointer 97 (n = 96-127) - MSIP97 (rw) */
    Ifx_UReg_32Bit MSIP98:1;          /**< \brief [2:2] Message Buffer Status Changed Interrupt Pointer 98 (n = 96-127) - MSIP98 (rw) */
    Ifx_UReg_32Bit MSIP99:1;          /**< \brief [3:3] Message Buffer Status Changed Interrupt Pointer 99 (n = 96-127) - MSIP99 (rw) */
    Ifx_UReg_32Bit MSIP100:1;         /**< \brief [4:4] Message Buffer Status Changed Interrupt Pointer 100 (n = 96-127) - MSIP100 (rw) */
    Ifx_UReg_32Bit MSIP101:1;         /**< \brief [5:5] Message Buffer Status Changed Interrupt Pointer 101 (n = 96-127) - MSIP101 (rw) */
    Ifx_UReg_32Bit MSIP102:1;         /**< \brief [6:6] Message Buffer Status Changed Interrupt Pointer 102 (n = 96-127) - MSIP102 (rw) */
    Ifx_UReg_32Bit MSIP103:1;         /**< \brief [7:7] Message Buffer Status Changed Interrupt Pointer 103 (n = 96-127) - MSIP103 (rw) */
    Ifx_UReg_32Bit MSIP104:1;         /**< \brief [8:8] Message Buffer Status Changed Interrupt Pointer 104 (n = 96-127) - MSIP104 (rw) */
    Ifx_UReg_32Bit MSIP105:1;         /**< \brief [9:9] Message Buffer Status Changed Interrupt Pointer 105 (n = 96-127) - MSIP105 (rw) */
    Ifx_UReg_32Bit MSIP106:1;         /**< \brief [10:10] Message Buffer Status Changed Interrupt Pointer 106 (n = 96-127) - MSIP106 (rw) */
    Ifx_UReg_32Bit MSIP107:1;         /**< \brief [11:11] Message Buffer Status Changed Interrupt Pointer 107 (n = 96-127) - MSIP107 (rw) */
    Ifx_UReg_32Bit MSIP108:1;         /**< \brief [12:12] Message Buffer Status Changed Interrupt Pointer 108 (n = 96-127) - MSIP108 (rw) */
    Ifx_UReg_32Bit MSIP109:1;         /**< \brief [13:13] Message Buffer Status Changed Interrupt Pointer 109 (n = 96-127) - MSIP109 (rw) */
    Ifx_UReg_32Bit MSIP110:1;         /**< \brief [14:14] Message Buffer Status Changed Interrupt Pointer 110 (n = 96-127) - MSIP110 (rw) */
    Ifx_UReg_32Bit MSIP111:1;         /**< \brief [15:15] Message Buffer Status Changed Interrupt Pointer 111 (n = 96-127) - MSIP111 (rw) */
    Ifx_UReg_32Bit MSIP112:1;         /**< \brief [16:16] Message Buffer Status Changed Interrupt Pointer 112 (n = 96-127) - MSIP112 (rw) */
    Ifx_UReg_32Bit MSIP113:1;         /**< \brief [17:17] Message Buffer Status Changed Interrupt Pointer 113 (n = 96-127) - MSIP113 (rw) */
    Ifx_UReg_32Bit MSIP114:1;         /**< \brief [18:18] Message Buffer Status Changed Interrupt Pointer 114 (n = 96-127) - MSIP114 (rw) */
    Ifx_UReg_32Bit MSIP115:1;         /**< \brief [19:19] Message Buffer Status Changed Interrupt Pointer 115 (n = 96-127) - MSIP115 (rw) */
    Ifx_UReg_32Bit MSIP116:1;         /**< \brief [20:20] Message Buffer Status Changed Interrupt Pointer 116 (n = 96-127) - MSIP116 (rw) */
    Ifx_UReg_32Bit MSIP117:1;         /**< \brief [21:21] Message Buffer Status Changed Interrupt Pointer 117 (n = 96-127) - MSIP117 (rw) */
    Ifx_UReg_32Bit MSIP118:1;         /**< \brief [22:22] Message Buffer Status Changed Interrupt Pointer 118 (n = 96-127) - MSIP118 (rw) */
    Ifx_UReg_32Bit MSIP119:1;         /**< \brief [23:23] Message Buffer Status Changed Interrupt Pointer 119 (n = 96-127) - MSIP119 (rw) */
    Ifx_UReg_32Bit MSIP120:1;         /**< \brief [24:24] Message Buffer Status Changed Interrupt Pointer 120 (n = 96-127) - MSIP120 (rw) */
    Ifx_UReg_32Bit MSIP121:1;         /**< \brief [25:25] Message Buffer Status Changed Interrupt Pointer 121 (n = 96-127) - MSIP121 (rw) */
    Ifx_UReg_32Bit MSIP122:1;         /**< \brief [26:26] Message Buffer Status Changed Interrupt Pointer 122 (n = 96-127) - MSIP122 (rw) */
    Ifx_UReg_32Bit MSIP123:1;         /**< \brief [27:27] Message Buffer Status Changed Interrupt Pointer 123 (n = 96-127) - MSIP123 (rw) */
    Ifx_UReg_32Bit MSIP124:1;         /**< \brief [28:28] Message Buffer Status Changed Interrupt Pointer 124 (n = 96-127) - MSIP124 (rw) */
    Ifx_UReg_32Bit MSIP125:1;         /**< \brief [29:29] Message Buffer Status Changed Interrupt Pointer 125 (n = 96-127) - MSIP125 (rw) */
    Ifx_UReg_32Bit MSIP126:1;         /**< \brief [30:30] Message Buffer Status Changed Interrupt Pointer 126 (n = 96-127) - MSIP126 (rw) */
    Ifx_UReg_32Bit MSIP127:1;         /**< \brief [31:31] Message Buffer Status Changed Interrupt Pointer 127 (n = 96-127) - MSIP127 (rw) */
} Ifx_ERAY_MSIC4_Bits;

/** \brief Macrotick and Cycle Counter Value */
typedef struct _Ifx_ERAY_MTCCV_Bits
{
    Ifx_UReg_32Bit MTV:14;            /**< \brief [13:0] Macrotick Value(vMacrotick) - MTV (rh) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit CCV:6;             /**< \brief [21:16] Cycle Counter Value(vCycleCounter) - CCV (rh) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_ERAY_MTCCV_Bits;

/** \brief New Data Register 1 */
typedef struct _Ifx_ERAY_NDAT1_Bits
{
    Ifx_UReg_32Bit ND0:1;             /**< \brief [0:0] New Data 0 (n = 0-31) - ND0 (rh) */
    Ifx_UReg_32Bit ND1:1;             /**< \brief [1:1] New Data 1 (n = 0-31) - ND1 (rh) */
    Ifx_UReg_32Bit ND2:1;             /**< \brief [2:2] New Data 2 (n = 0-31) - ND2 (rh) */
    Ifx_UReg_32Bit ND3:1;             /**< \brief [3:3] New Data 3 (n = 0-31) - ND3 (rh) */
    Ifx_UReg_32Bit ND4:1;             /**< \brief [4:4] New Data 4 (n = 0-31) - ND4 (rh) */
    Ifx_UReg_32Bit ND5:1;             /**< \brief [5:5] New Data 5 (n = 0-31) - ND5 (rh) */
    Ifx_UReg_32Bit ND6:1;             /**< \brief [6:6] New Data 6 (n = 0-31) - ND6 (rh) */
    Ifx_UReg_32Bit ND7:1;             /**< \brief [7:7] New Data 7 (n = 0-31) - ND7 (rh) */
    Ifx_UReg_32Bit ND8:1;             /**< \brief [8:8] New Data 8 (n = 0-31) - ND8 (rh) */
    Ifx_UReg_32Bit ND9:1;             /**< \brief [9:9] New Data 9 (n = 0-31) - ND9 (rh) */
    Ifx_UReg_32Bit ND10:1;            /**< \brief [10:10] New Data 10 (n = 0-31) - ND10 (rh) */
    Ifx_UReg_32Bit ND11:1;            /**< \brief [11:11] New Data 11 (n = 0-31) - ND11 (rh) */
    Ifx_UReg_32Bit ND12:1;            /**< \brief [12:12] New Data 12 (n = 0-31) - ND12 (rh) */
    Ifx_UReg_32Bit ND13:1;            /**< \brief [13:13] New Data 13 (n = 0-31) - ND13 (rh) */
    Ifx_UReg_32Bit ND14:1;            /**< \brief [14:14] New Data 14 (n = 0-31) - ND14 (rh) */
    Ifx_UReg_32Bit ND15:1;            /**< \brief [15:15] New Data 15 (n = 0-31) - ND15 (rh) */
    Ifx_UReg_32Bit ND16:1;            /**< \brief [16:16] New Data 16 (n = 0-31) - ND16 (rh) */
    Ifx_UReg_32Bit ND17:1;            /**< \brief [17:17] New Data 17 (n = 0-31) - ND17 (rh) */
    Ifx_UReg_32Bit ND18:1;            /**< \brief [18:18] New Data 18 (n = 0-31) - ND18 (rh) */
    Ifx_UReg_32Bit ND19:1;            /**< \brief [19:19] New Data 19 (n = 0-31) - ND19 (rh) */
    Ifx_UReg_32Bit ND20:1;            /**< \brief [20:20] New Data 20 (n = 0-31) - ND20 (rh) */
    Ifx_UReg_32Bit ND21:1;            /**< \brief [21:21] New Data 21 (n = 0-31) - ND21 (rh) */
    Ifx_UReg_32Bit ND22:1;            /**< \brief [22:22] New Data 22 (n = 0-31) - ND22 (rh) */
    Ifx_UReg_32Bit ND23:1;            /**< \brief [23:23] New Data 23 (n = 0-31) - ND23 (rh) */
    Ifx_UReg_32Bit ND24:1;            /**< \brief [24:24] New Data 24 (n = 0-31) - ND24 (rh) */
    Ifx_UReg_32Bit ND25:1;            /**< \brief [25:25] New Data 25 (n = 0-31) - ND25 (rh) */
    Ifx_UReg_32Bit ND26:1;            /**< \brief [26:26] New Data 26 (n = 0-31) - ND26 (rh) */
    Ifx_UReg_32Bit ND27:1;            /**< \brief [27:27] New Data 27 (n = 0-31) - ND27 (rh) */
    Ifx_UReg_32Bit ND28:1;            /**< \brief [28:28] New Data 28 (n = 0-31) - ND28 (rh) */
    Ifx_UReg_32Bit ND29:1;            /**< \brief [29:29] New Data 29 (n = 0-31) - ND29 (rh) */
    Ifx_UReg_32Bit ND30:1;            /**< \brief [30:30] New Data 30 (n = 0-31) - ND30 (rh) */
    Ifx_UReg_32Bit ND31:1;            /**< \brief [31:31] New Data 31 (n = 0-31) - ND31 (rh) */
} Ifx_ERAY_NDAT1_Bits;

/** \brief New Data Register 2 */
typedef struct _Ifx_ERAY_NDAT2_Bits
{
    Ifx_UReg_32Bit ND32:1;            /**< \brief [0:0] New Data 32 (n = 32-63) - ND32 (rh) */
    Ifx_UReg_32Bit ND33:1;            /**< \brief [1:1] New Data 33 (n = 32-63) - ND33 (rh) */
    Ifx_UReg_32Bit ND34:1;            /**< \brief [2:2] New Data 34 (n = 32-63) - ND34 (rh) */
    Ifx_UReg_32Bit ND35:1;            /**< \brief [3:3] New Data 35 (n = 32-63) - ND35 (rh) */
    Ifx_UReg_32Bit ND36:1;            /**< \brief [4:4] New Data 36 (n = 32-63) - ND36 (rh) */
    Ifx_UReg_32Bit ND37:1;            /**< \brief [5:5] New Data 37 (n = 32-63) - ND37 (rh) */
    Ifx_UReg_32Bit ND38:1;            /**< \brief [6:6] New Data 38 (n = 32-63) - ND38 (rh) */
    Ifx_UReg_32Bit ND39:1;            /**< \brief [7:7] New Data 39 (n = 32-63) - ND39 (rh) */
    Ifx_UReg_32Bit ND40:1;            /**< \brief [8:8] New Data 40 (n = 32-63) - ND40 (rh) */
    Ifx_UReg_32Bit ND41:1;            /**< \brief [9:9] New Data 41 (n = 32-63) - ND41 (rh) */
    Ifx_UReg_32Bit ND42:1;            /**< \brief [10:10] New Data 42 (n = 32-63) - ND42 (rh) */
    Ifx_UReg_32Bit ND43:1;            /**< \brief [11:11] New Data 43 (n = 32-63) - ND43 (rh) */
    Ifx_UReg_32Bit ND44:1;            /**< \brief [12:12] New Data 44 (n = 32-63) - ND44 (rh) */
    Ifx_UReg_32Bit ND45:1;            /**< \brief [13:13] New Data 45 (n = 32-63) - ND45 (rh) */
    Ifx_UReg_32Bit ND46:1;            /**< \brief [14:14] New Data 46 (n = 32-63) - ND46 (rh) */
    Ifx_UReg_32Bit ND47:1;            /**< \brief [15:15] New Data 47 (n = 32-63) - ND47 (rh) */
    Ifx_UReg_32Bit ND48:1;            /**< \brief [16:16] New Data 48 (n = 32-63) - ND48 (rh) */
    Ifx_UReg_32Bit ND49:1;            /**< \brief [17:17] New Data 49 (n = 32-63) - ND49 (rh) */
    Ifx_UReg_32Bit ND50:1;            /**< \brief [18:18] New Data 50 (n = 32-63) - ND50 (rh) */
    Ifx_UReg_32Bit ND51:1;            /**< \brief [19:19] New Data 51 (n = 32-63) - ND51 (rh) */
    Ifx_UReg_32Bit ND52:1;            /**< \brief [20:20] New Data 52 (n = 32-63) - ND52 (rh) */
    Ifx_UReg_32Bit ND53:1;            /**< \brief [21:21] New Data 53 (n = 32-63) - ND53 (rh) */
    Ifx_UReg_32Bit ND54:1;            /**< \brief [22:22] New Data 54 (n = 32-63) - ND54 (rh) */
    Ifx_UReg_32Bit ND55:1;            /**< \brief [23:23] New Data 55 (n = 32-63) - ND55 (rh) */
    Ifx_UReg_32Bit ND56:1;            /**< \brief [24:24] New Data 56 (n = 32-63) - ND56 (rh) */
    Ifx_UReg_32Bit ND57:1;            /**< \brief [25:25] New Data 57 (n = 32-63) - ND57 (rh) */
    Ifx_UReg_32Bit ND58:1;            /**< \brief [26:26] New Data 58 (n = 32-63) - ND58 (rh) */
    Ifx_UReg_32Bit ND59:1;            /**< \brief [27:27] New Data 59 (n = 32-63) - ND59 (rh) */
    Ifx_UReg_32Bit ND60:1;            /**< \brief [28:28] New Data 60 (n = 32-63) - ND60 (rh) */
    Ifx_UReg_32Bit ND61:1;            /**< \brief [29:29] New Data 61 (n = 32-63) - ND61 (rh) */
    Ifx_UReg_32Bit ND62:1;            /**< \brief [30:30] New Data 62 (n = 32-63) - ND62 (rh) */
    Ifx_UReg_32Bit ND63:1;            /**< \brief [31:31] New Data 63 (n = 32-63) - ND63 (rh) */
} Ifx_ERAY_NDAT2_Bits;

/** \brief New Data Register 3 */
typedef struct _Ifx_ERAY_NDAT3_Bits
{
    Ifx_UReg_32Bit ND64:1;            /**< \brief [0:0] New Data 64 (n = 64-95) - ND64 (rh) */
    Ifx_UReg_32Bit ND65:1;            /**< \brief [1:1] New Data 65 (n = 64-95) - ND65 (rh) */
    Ifx_UReg_32Bit ND66:1;            /**< \brief [2:2] New Data 66 (n = 64-95) - ND66 (rh) */
    Ifx_UReg_32Bit ND67:1;            /**< \brief [3:3] New Data 67 (n = 64-95) - ND67 (rh) */
    Ifx_UReg_32Bit ND68:1;            /**< \brief [4:4] New Data 68 (n = 64-95) - ND68 (rh) */
    Ifx_UReg_32Bit ND69:1;            /**< \brief [5:5] New Data 69 (n = 64-95) - ND69 (rh) */
    Ifx_UReg_32Bit ND70:1;            /**< \brief [6:6] New Data 70 (n = 64-95) - ND70 (rh) */
    Ifx_UReg_32Bit ND71:1;            /**< \brief [7:7] New Data 71 (n = 64-95) - ND71 (rh) */
    Ifx_UReg_32Bit ND72:1;            /**< \brief [8:8] New Data 72 (n = 64-95) - ND72 (rh) */
    Ifx_UReg_32Bit ND73:1;            /**< \brief [9:9] New Data 73 (n = 64-95) - ND73 (rh) */
    Ifx_UReg_32Bit ND74:1;            /**< \brief [10:10] New Data 74 (n = 64-95) - ND74 (rh) */
    Ifx_UReg_32Bit ND75:1;            /**< \brief [11:11] New Data 75 (n = 64-95) - ND75 (rh) */
    Ifx_UReg_32Bit ND76:1;            /**< \brief [12:12] New Data 76 (n = 64-95) - ND76 (rh) */
    Ifx_UReg_32Bit ND77:1;            /**< \brief [13:13] New Data 77 (n = 64-95) - ND77 (rh) */
    Ifx_UReg_32Bit ND78:1;            /**< \brief [14:14] New Data 78 (n = 64-95) - ND78 (rh) */
    Ifx_UReg_32Bit ND79:1;            /**< \brief [15:15] New Data 79 (n = 64-95) - ND79 (rh) */
    Ifx_UReg_32Bit ND80:1;            /**< \brief [16:16] New Data 80 (n = 64-95) - ND80 (rh) */
    Ifx_UReg_32Bit ND81:1;            /**< \brief [17:17] New Data 81 (n = 64-95) - ND81 (rh) */
    Ifx_UReg_32Bit ND82:1;            /**< \brief [18:18] New Data 82 (n = 64-95) - ND82 (rh) */
    Ifx_UReg_32Bit ND83:1;            /**< \brief [19:19] New Data 83 (n = 64-95) - ND83 (rh) */
    Ifx_UReg_32Bit ND84:1;            /**< \brief [20:20] New Data 84 (n = 64-95) - ND84 (rh) */
    Ifx_UReg_32Bit ND85:1;            /**< \brief [21:21] New Data 85 (n = 64-95) - ND85 (rh) */
    Ifx_UReg_32Bit ND86:1;            /**< \brief [22:22] New Data 86 (n = 64-95) - ND86 (rh) */
    Ifx_UReg_32Bit ND87:1;            /**< \brief [23:23] New Data 87 (n = 64-95) - ND87 (rh) */
    Ifx_UReg_32Bit ND88:1;            /**< \brief [24:24] New Data 88 (n = 64-95) - ND88 (rh) */
    Ifx_UReg_32Bit ND89:1;            /**< \brief [25:25] New Data 89 (n = 64-95) - ND89 (rh) */
    Ifx_UReg_32Bit ND90:1;            /**< \brief [26:26] New Data 90 (n = 64-95) - ND90 (rh) */
    Ifx_UReg_32Bit ND91:1;            /**< \brief [27:27] New Data 91 (n = 64-95) - ND91 (rh) */
    Ifx_UReg_32Bit ND92:1;            /**< \brief [28:28] New Data 92 (n = 64-95) - ND92 (rh) */
    Ifx_UReg_32Bit ND93:1;            /**< \brief [29:29] New Data 93 (n = 64-95) - ND93 (rh) */
    Ifx_UReg_32Bit ND94:1;            /**< \brief [30:30] New Data 94 (n = 64-95) - ND94 (rh) */
    Ifx_UReg_32Bit ND95:1;            /**< \brief [31:31] New Data 95 (n = 64-95) - ND95 (rh) */
} Ifx_ERAY_NDAT3_Bits;

/** \brief New Data Register 4 */
typedef struct _Ifx_ERAY_NDAT4_Bits
{
    Ifx_UReg_32Bit ND96:1;            /**< \brief [0:0] New Data 96 (n = 96-127) - ND96 (rh) */
    Ifx_UReg_32Bit ND97:1;            /**< \brief [1:1] New Data 97 (n = 96-127) - ND97 (rh) */
    Ifx_UReg_32Bit ND98:1;            /**< \brief [2:2] New Data 98 (n = 96-127) - ND98 (rh) */
    Ifx_UReg_32Bit ND99:1;            /**< \brief [3:3] New Data 99 (n = 96-127) - ND99 (rh) */
    Ifx_UReg_32Bit ND100:1;           /**< \brief [4:4] New Data 100 (n = 96-127) - ND100 (rh) */
    Ifx_UReg_32Bit ND101:1;           /**< \brief [5:5] New Data 101 (n = 96-127) - ND101 (rh) */
    Ifx_UReg_32Bit ND102:1;           /**< \brief [6:6] New Data 102 (n = 96-127) - ND102 (rh) */
    Ifx_UReg_32Bit ND103:1;           /**< \brief [7:7] New Data 103 (n = 96-127) - ND103 (rh) */
    Ifx_UReg_32Bit ND104:1;           /**< \brief [8:8] New Data 104 (n = 96-127) - ND104 (rh) */
    Ifx_UReg_32Bit ND105:1;           /**< \brief [9:9] New Data 105 (n = 96-127) - ND105 (rh) */
    Ifx_UReg_32Bit ND106:1;           /**< \brief [10:10] New Data 106 (n = 96-127) - ND106 (rh) */
    Ifx_UReg_32Bit ND107:1;           /**< \brief [11:11] New Data 107 (n = 96-127) - ND107 (rh) */
    Ifx_UReg_32Bit ND108:1;           /**< \brief [12:12] New Data 108 (n = 96-127) - ND108 (rh) */
    Ifx_UReg_32Bit ND109:1;           /**< \brief [13:13] New Data 109 (n = 96-127) - ND109 (rh) */
    Ifx_UReg_32Bit ND110:1;           /**< \brief [14:14] New Data 110 (n = 96-127) - ND110 (rh) */
    Ifx_UReg_32Bit ND111:1;           /**< \brief [15:15] New Data 111 (n = 96-127) - ND111 (rh) */
    Ifx_UReg_32Bit ND112:1;           /**< \brief [16:16] New Data 112 (n = 96-127) - ND112 (rh) */
    Ifx_UReg_32Bit ND113:1;           /**< \brief [17:17] New Data 113 (n = 96-127) - ND113 (rh) */
    Ifx_UReg_32Bit ND114:1;           /**< \brief [18:18] New Data 114 (n = 96-127) - ND114 (rh) */
    Ifx_UReg_32Bit ND115:1;           /**< \brief [19:19] New Data 115 (n = 96-127) - ND115 (rh) */
    Ifx_UReg_32Bit ND116:1;           /**< \brief [20:20] New Data 116 (n = 96-127) - ND116 (rh) */
    Ifx_UReg_32Bit ND117:1;           /**< \brief [21:21] New Data 117 (n = 96-127) - ND117 (rh) */
    Ifx_UReg_32Bit ND118:1;           /**< \brief [22:22] New Data 118 (n = 96-127) - ND118 (rh) */
    Ifx_UReg_32Bit ND119:1;           /**< \brief [23:23] New Data 119 (n = 96-127) - ND119 (rh) */
    Ifx_UReg_32Bit ND120:1;           /**< \brief [24:24] New Data 120 (n = 96-127) - ND120 (rh) */
    Ifx_UReg_32Bit ND121:1;           /**< \brief [25:25] New Data 121 (n = 96-127) - ND121 (rh) */
    Ifx_UReg_32Bit ND122:1;           /**< \brief [26:26] New Data 122 (n = 96-127) - ND122 (rh) */
    Ifx_UReg_32Bit ND123:1;           /**< \brief [27:27] New Data 123 (n = 96-127) - ND123 (rh) */
    Ifx_UReg_32Bit ND124:1;           /**< \brief [28:28] New Data 124 (n = 96-127) - ND124 (rh) */
    Ifx_UReg_32Bit ND125:1;           /**< \brief [29:29] New Data 125 (n = 96-127) - ND125 (rh) */
    Ifx_UReg_32Bit ND126:1;           /**< \brief [30:30] New Data 126 (n = 96-127) - ND126 (rh) */
    Ifx_UReg_32Bit ND127:1;           /**< \brief [31:31] New Data 127 (n = 96-127) - ND127 (rh) */
} Ifx_ERAY_NDAT4_Bits;

/** \brief New Data Interrupt Control 1 */
typedef struct _Ifx_ERAY_NDIC1_Bits
{
    Ifx_UReg_32Bit NDIP0:1;           /**< \brief [0:0] New Data Interrupt Pointer 0 (n = 0-31) - NDIP0 (rw) */
    Ifx_UReg_32Bit NDIP1:1;           /**< \brief [1:1] New Data Interrupt Pointer 1 (n = 0-31) - NDIP1 (rw) */
    Ifx_UReg_32Bit NDIP2:1;           /**< \brief [2:2] New Data Interrupt Pointer 2 (n = 0-31) - NDIP2 (rw) */
    Ifx_UReg_32Bit NDIP3:1;           /**< \brief [3:3] New Data Interrupt Pointer 3 (n = 0-31) - NDIP3 (rw) */
    Ifx_UReg_32Bit NDIP4:1;           /**< \brief [4:4] New Data Interrupt Pointer 4 (n = 0-31) - NDIP4 (rw) */
    Ifx_UReg_32Bit NDIP5:1;           /**< \brief [5:5] New Data Interrupt Pointer 5 (n = 0-31) - NDIP5 (rw) */
    Ifx_UReg_32Bit NDIP6:1;           /**< \brief [6:6] New Data Interrupt Pointer 6 (n = 0-31) - NDIP6 (rw) */
    Ifx_UReg_32Bit NDIP7:1;           /**< \brief [7:7] New Data Interrupt Pointer 7 (n = 0-31) - NDIP7 (rw) */
    Ifx_UReg_32Bit NDIP8:1;           /**< \brief [8:8] New Data Interrupt Pointer 8 (n = 0-31) - NDIP8 (rw) */
    Ifx_UReg_32Bit NDIP9:1;           /**< \brief [9:9] New Data Interrupt Pointer 9 (n = 0-31) - NDIP9 (rw) */
    Ifx_UReg_32Bit NDIP10:1;          /**< \brief [10:10] New Data Interrupt Pointer 10 (n = 0-31) - NDIP10 (rw) */
    Ifx_UReg_32Bit NDIP11:1;          /**< \brief [11:11] New Data Interrupt Pointer 11 (n = 0-31) - NDIP11 (rw) */
    Ifx_UReg_32Bit NDIP12:1;          /**< \brief [12:12] New Data Interrupt Pointer 12 (n = 0-31) - NDIP12 (rw) */
    Ifx_UReg_32Bit NDIP13:1;          /**< \brief [13:13] New Data Interrupt Pointer 13 (n = 0-31) - NDIP13 (rw) */
    Ifx_UReg_32Bit NDIP14:1;          /**< \brief [14:14] New Data Interrupt Pointer 14 (n = 0-31) - NDIP14 (rw) */
    Ifx_UReg_32Bit NDIP15:1;          /**< \brief [15:15] New Data Interrupt Pointer 15 (n = 0-31) - NDIP15 (rw) */
    Ifx_UReg_32Bit NDIP16:1;          /**< \brief [16:16] New Data Interrupt Pointer 16 (n = 0-31) - NDIP16 (rw) */
    Ifx_UReg_32Bit NDIP17:1;          /**< \brief [17:17] New Data Interrupt Pointer 17 (n = 0-31) - NDIP17 (rw) */
    Ifx_UReg_32Bit NDIP18:1;          /**< \brief [18:18] New Data Interrupt Pointer 18 (n = 0-31) - NDIP18 (rw) */
    Ifx_UReg_32Bit NDIP19:1;          /**< \brief [19:19] New Data Interrupt Pointer 19 (n = 0-31) - NDIP19 (rw) */
    Ifx_UReg_32Bit NDIP20:1;          /**< \brief [20:20] New Data Interrupt Pointer 20 (n = 0-31) - NDIP20 (rw) */
    Ifx_UReg_32Bit NDIP21:1;          /**< \brief [21:21] New Data Interrupt Pointer 21 (n = 0-31) - NDIP21 (rw) */
    Ifx_UReg_32Bit NDIP22:1;          /**< \brief [22:22] New Data Interrupt Pointer 22 (n = 0-31) - NDIP22 (rw) */
    Ifx_UReg_32Bit NDIP23:1;          /**< \brief [23:23] New Data Interrupt Pointer 23 (n = 0-31) - NDIP23 (rw) */
    Ifx_UReg_32Bit NDIP24:1;          /**< \brief [24:24] New Data Interrupt Pointer 24 (n = 0-31) - NDIP24 (rw) */
    Ifx_UReg_32Bit NDIP25:1;          /**< \brief [25:25] New Data Interrupt Pointer 25 (n = 0-31) - NDIP25 (rw) */
    Ifx_UReg_32Bit NDIP26:1;          /**< \brief [26:26] New Data Interrupt Pointer 26 (n = 0-31) - NDIP26 (rw) */
    Ifx_UReg_32Bit NDIP27:1;          /**< \brief [27:27] New Data Interrupt Pointer 27 (n = 0-31) - NDIP27 (rw) */
    Ifx_UReg_32Bit NDIP28:1;          /**< \brief [28:28] New Data Interrupt Pointer 28 (n = 0-31) - NDIP28 (rw) */
    Ifx_UReg_32Bit NDIP29:1;          /**< \brief [29:29] New Data Interrupt Pointer 29 (n = 0-31) - NDIP29 (rw) */
    Ifx_UReg_32Bit NDIP30:1;          /**< \brief [30:30] New Data Interrupt Pointer 30 (n = 0-31) - NDIP30 (rw) */
    Ifx_UReg_32Bit NDIP31:1;          /**< \brief [31:31] New Data Interrupt Pointer 31 (n = 0-31) - NDIP31 (rw) */
} Ifx_ERAY_NDIC1_Bits;

/** \brief New Data Interrupt Control 2 */
typedef struct _Ifx_ERAY_NDIC2_Bits
{
    Ifx_UReg_32Bit NDIP32:1;          /**< \brief [0:0] New Data Interrupt Pointer 32 (n = 32-63) - NDIP32 (rw) */
    Ifx_UReg_32Bit NDIP33:1;          /**< \brief [1:1] New Data Interrupt Pointer 33 (n = 32-63) - NDIP33 (rw) */
    Ifx_UReg_32Bit NDIP34:1;          /**< \brief [2:2] New Data Interrupt Pointer 34 (n = 32-63) - NDIP34 (rw) */
    Ifx_UReg_32Bit NDIP35:1;          /**< \brief [3:3] New Data Interrupt Pointer 35 (n = 32-63) - NDIP35 (rw) */
    Ifx_UReg_32Bit NDIP36:1;          /**< \brief [4:4] New Data Interrupt Pointer 36 (n = 32-63) - NDIP36 (rw) */
    Ifx_UReg_32Bit NDIP37:1;          /**< \brief [5:5] New Data Interrupt Pointer 37 (n = 32-63) - NDIP37 (rw) */
    Ifx_UReg_32Bit NDIP38:1;          /**< \brief [6:6] New Data Interrupt Pointer 38 (n = 32-63) - NDIP38 (rw) */
    Ifx_UReg_32Bit NDIP39:1;          /**< \brief [7:7] New Data Interrupt Pointer 39 (n = 32-63) - NDIP39 (rw) */
    Ifx_UReg_32Bit NDIP40:1;          /**< \brief [8:8] New Data Interrupt Pointer 40 (n = 32-63) - NDIP40 (rw) */
    Ifx_UReg_32Bit NDIP41:1;          /**< \brief [9:9] New Data Interrupt Pointer 41 (n = 32-63) - NDIP41 (rw) */
    Ifx_UReg_32Bit NDIP42:1;          /**< \brief [10:10] New Data Interrupt Pointer 42 (n = 32-63) - NDIP42 (rw) */
    Ifx_UReg_32Bit NDIP43:1;          /**< \brief [11:11] New Data Interrupt Pointer 43 (n = 32-63) - NDIP43 (rw) */
    Ifx_UReg_32Bit NDIP44:1;          /**< \brief [12:12] New Data Interrupt Pointer 44 (n = 32-63) - NDIP44 (rw) */
    Ifx_UReg_32Bit NDIP45:1;          /**< \brief [13:13] New Data Interrupt Pointer 45 (n = 32-63) - NDIP45 (rw) */
    Ifx_UReg_32Bit NDIP46:1;          /**< \brief [14:14] New Data Interrupt Pointer 46 (n = 32-63) - NDIP46 (rw) */
    Ifx_UReg_32Bit NDIP47:1;          /**< \brief [15:15] New Data Interrupt Pointer 47 (n = 32-63) - NDIP47 (rw) */
    Ifx_UReg_32Bit NDIP48:1;          /**< \brief [16:16] New Data Interrupt Pointer 48 (n = 32-63) - NDIP48 (rw) */
    Ifx_UReg_32Bit NDIP49:1;          /**< \brief [17:17] New Data Interrupt Pointer 49 (n = 32-63) - NDIP49 (rw) */
    Ifx_UReg_32Bit NDIP50:1;          /**< \brief [18:18] New Data Interrupt Pointer 50 (n = 32-63) - NDIP50 (rw) */
    Ifx_UReg_32Bit NDIP51:1;          /**< \brief [19:19] New Data Interrupt Pointer 51 (n = 32-63) - NDIP51 (rw) */
    Ifx_UReg_32Bit NDIP52:1;          /**< \brief [20:20] New Data Interrupt Pointer 52 (n = 32-63) - NDIP52 (rw) */
    Ifx_UReg_32Bit NDIP53:1;          /**< \brief [21:21] New Data Interrupt Pointer 53 (n = 32-63) - NDIP53 (rw) */
    Ifx_UReg_32Bit NDIP54:1;          /**< \brief [22:22] New Data Interrupt Pointer 54 (n = 32-63) - NDIP54 (rw) */
    Ifx_UReg_32Bit NDIP55:1;          /**< \brief [23:23] New Data Interrupt Pointer 55 (n = 32-63) - NDIP55 (rw) */
    Ifx_UReg_32Bit NDIP56:1;          /**< \brief [24:24] New Data Interrupt Pointer 56 (n = 32-63) - NDIP56 (rw) */
    Ifx_UReg_32Bit NDIP57:1;          /**< \brief [25:25] New Data Interrupt Pointer 57 (n = 32-63) - NDIP57 (rw) */
    Ifx_UReg_32Bit NDIP58:1;          /**< \brief [26:26] New Data Interrupt Pointer 58 (n = 32-63) - NDIP58 (rw) */
    Ifx_UReg_32Bit NDIP59:1;          /**< \brief [27:27] New Data Interrupt Pointer 59 (n = 32-63) - NDIP59 (rw) */
    Ifx_UReg_32Bit NDIP60:1;          /**< \brief [28:28] New Data Interrupt Pointer 60 (n = 32-63) - NDIP60 (rw) */
    Ifx_UReg_32Bit NDIP61:1;          /**< \brief [29:29] New Data Interrupt Pointer 61 (n = 32-63) - NDIP61 (rw) */
    Ifx_UReg_32Bit NDIP62:1;          /**< \brief [30:30] New Data Interrupt Pointer 62 (n = 32-63) - NDIP62 (rw) */
    Ifx_UReg_32Bit NDIP63:1;          /**< \brief [31:31] New Data Interrupt Pointer 63 (n = 32-63) - NDIP63 (rw) */
} Ifx_ERAY_NDIC2_Bits;

/** \brief New Data Interrupt Control 3 */
typedef struct _Ifx_ERAY_NDIC3_Bits
{
    Ifx_UReg_32Bit NDIP64:1;          /**< \brief [0:0] New Data Interrupt Pointer 64 (n = 64-95) - NDIP64 (rw) */
    Ifx_UReg_32Bit NDIP65:1;          /**< \brief [1:1] New Data Interrupt Pointer 65 (n = 64-95) - NDIP65 (rw) */
    Ifx_UReg_32Bit NDIP66:1;          /**< \brief [2:2] New Data Interrupt Pointer 66 (n = 64-95) - NDIP66 (rw) */
    Ifx_UReg_32Bit NDIP67:1;          /**< \brief [3:3] New Data Interrupt Pointer 67 (n = 64-95) - NDIP67 (rw) */
    Ifx_UReg_32Bit NDIP68:1;          /**< \brief [4:4] New Data Interrupt Pointer 68 (n = 64-95) - NDIP68 (rw) */
    Ifx_UReg_32Bit NDIP69:1;          /**< \brief [5:5] New Data Interrupt Pointer 69 (n = 64-95) - NDIP69 (rw) */
    Ifx_UReg_32Bit NDIP70:1;          /**< \brief [6:6] New Data Interrupt Pointer 70 (n = 64-95) - NDIP70 (rw) */
    Ifx_UReg_32Bit NDIP71:1;          /**< \brief [7:7] New Data Interrupt Pointer 71 (n = 64-95) - NDIP71 (rw) */
    Ifx_UReg_32Bit NDIP72:1;          /**< \brief [8:8] New Data Interrupt Pointer 72 (n = 64-95) - NDIP72 (rw) */
    Ifx_UReg_32Bit NDIP73:1;          /**< \brief [9:9] New Data Interrupt Pointer 73 (n = 64-95) - NDIP73 (rw) */
    Ifx_UReg_32Bit NDIP74:1;          /**< \brief [10:10] New Data Interrupt Pointer 74 (n = 64-95) - NDIP74 (rw) */
    Ifx_UReg_32Bit NDIP75:1;          /**< \brief [11:11] New Data Interrupt Pointer 75 (n = 64-95) - NDIP75 (rw) */
    Ifx_UReg_32Bit NDIP76:1;          /**< \brief [12:12] New Data Interrupt Pointer 76 (n = 64-95) - NDIP76 (rw) */
    Ifx_UReg_32Bit NDIP77:1;          /**< \brief [13:13] New Data Interrupt Pointer 77 (n = 64-95) - NDIP77 (rw) */
    Ifx_UReg_32Bit NDIP78:1;          /**< \brief [14:14] New Data Interrupt Pointer 78 (n = 64-95) - NDIP78 (rw) */
    Ifx_UReg_32Bit NDIP79:1;          /**< \brief [15:15] New Data Interrupt Pointer 79 (n = 64-95) - NDIP79 (rw) */
    Ifx_UReg_32Bit NDIP80:1;          /**< \brief [16:16] New Data Interrupt Pointer 80 (n = 64-95) - NDIP80 (rw) */
    Ifx_UReg_32Bit NDIP81:1;          /**< \brief [17:17] New Data Interrupt Pointer 81 (n = 64-95) - NDIP81 (rw) */
    Ifx_UReg_32Bit NDIP82:1;          /**< \brief [18:18] New Data Interrupt Pointer 82 (n = 64-95) - NDIP82 (rw) */
    Ifx_UReg_32Bit NDIP83:1;          /**< \brief [19:19] New Data Interrupt Pointer 83 (n = 64-95) - NDIP83 (rw) */
    Ifx_UReg_32Bit NDIP84:1;          /**< \brief [20:20] New Data Interrupt Pointer 84 (n = 64-95) - NDIP84 (rw) */
    Ifx_UReg_32Bit NDIP85:1;          /**< \brief [21:21] New Data Interrupt Pointer 85 (n = 64-95) - NDIP85 (rw) */
    Ifx_UReg_32Bit NDIP86:1;          /**< \brief [22:22] New Data Interrupt Pointer 86 (n = 64-95) - NDIP86 (rw) */
    Ifx_UReg_32Bit NDIP87:1;          /**< \brief [23:23] New Data Interrupt Pointer 87 (n = 64-95) - NDIP87 (rw) */
    Ifx_UReg_32Bit NDIP88:1;          /**< \brief [24:24] New Data Interrupt Pointer 88 (n = 64-95) - NDIP88 (rw) */
    Ifx_UReg_32Bit NDIP89:1;          /**< \brief [25:25] New Data Interrupt Pointer 89 (n = 64-95) - NDIP89 (rw) */
    Ifx_UReg_32Bit NDIP90:1;          /**< \brief [26:26] New Data Interrupt Pointer 90 (n = 64-95) - NDIP90 (rw) */
    Ifx_UReg_32Bit NDIP91:1;          /**< \brief [27:27] New Data Interrupt Pointer 91 (n = 64-95) - NDIP91 (rw) */
    Ifx_UReg_32Bit NDIP92:1;          /**< \brief [28:28] New Data Interrupt Pointer 92 (n = 64-95) - NDIP92 (rw) */
    Ifx_UReg_32Bit NDIP93:1;          /**< \brief [29:29] New Data Interrupt Pointer 93 (n = 64-95) - NDIP93 (rw) */
    Ifx_UReg_32Bit NDIP94:1;          /**< \brief [30:30] New Data Interrupt Pointer 94 (n = 64-95) - NDIP94 (rw) */
    Ifx_UReg_32Bit NDIP95:1;          /**< \brief [31:31] New Data Interrupt Pointer 95 (n = 64-95) - NDIP95 (rw) */
} Ifx_ERAY_NDIC3_Bits;

/** \brief New Data Interrupt Control 4 */
typedef struct _Ifx_ERAY_NDIC4_Bits
{
    Ifx_UReg_32Bit NDIP96:1;          /**< \brief [0:0] New Data Interrupt Pointer 96 (n = 96-127) - NDIP96 (rw) */
    Ifx_UReg_32Bit NDIP97:1;          /**< \brief [1:1] New Data Interrupt Pointer 97 (n = 96-127) - NDIP97 (rw) */
    Ifx_UReg_32Bit NDIP98:1;          /**< \brief [2:2] New Data Interrupt Pointer 98 (n = 96-127) - NDIP98 (rw) */
    Ifx_UReg_32Bit NDIP99:1;          /**< \brief [3:3] New Data Interrupt Pointer 99 (n = 96-127) - NDIP99 (rw) */
    Ifx_UReg_32Bit NDIP100:1;         /**< \brief [4:4] New Data Interrupt Pointer 100 (n = 96-127) - NDIP100 (rw) */
    Ifx_UReg_32Bit NDIP101:1;         /**< \brief [5:5] New Data Interrupt Pointer 101 (n = 96-127) - NDIP101 (rw) */
    Ifx_UReg_32Bit NDIP102:1;         /**< \brief [6:6] New Data Interrupt Pointer 102 (n = 96-127) - NDIP102 (rw) */
    Ifx_UReg_32Bit NDIP103:1;         /**< \brief [7:7] New Data Interrupt Pointer 103 (n = 96-127) - NDIP103 (rw) */
    Ifx_UReg_32Bit NDIP104:1;         /**< \brief [8:8] New Data Interrupt Pointer 104 (n = 96-127) - NDIP104 (rw) */
    Ifx_UReg_32Bit NDIP105:1;         /**< \brief [9:9] New Data Interrupt Pointer 105 (n = 96-127) - NDIP105 (rw) */
    Ifx_UReg_32Bit NDIP106:1;         /**< \brief [10:10] New Data Interrupt Pointer 106 (n = 96-127) - NDIP106 (rw) */
    Ifx_UReg_32Bit NDIP107:1;         /**< \brief [11:11] New Data Interrupt Pointer 107 (n = 96-127) - NDIP107 (rw) */
    Ifx_UReg_32Bit NDIP108:1;         /**< \brief [12:12] New Data Interrupt Pointer 108 (n = 96-127) - NDIP108 (rw) */
    Ifx_UReg_32Bit NDIP109:1;         /**< \brief [13:13] New Data Interrupt Pointer 109 (n = 96-127) - NDIP109 (rw) */
    Ifx_UReg_32Bit NDIP110:1;         /**< \brief [14:14] New Data Interrupt Pointer 110 (n = 96-127) - NDIP110 (rw) */
    Ifx_UReg_32Bit NDIP111:1;         /**< \brief [15:15] New Data Interrupt Pointer 111 (n = 96-127) - NDIP111 (rw) */
    Ifx_UReg_32Bit NDIP112:1;         /**< \brief [16:16] New Data Interrupt Pointer 112 (n = 96-127) - NDIP112 (rw) */
    Ifx_UReg_32Bit NDIP113:1;         /**< \brief [17:17] New Data Interrupt Pointer 113 (n = 96-127) - NDIP113 (rw) */
    Ifx_UReg_32Bit NDIP114:1;         /**< \brief [18:18] New Data Interrupt Pointer 114 (n = 96-127) - NDIP114 (rw) */
    Ifx_UReg_32Bit NDIP115:1;         /**< \brief [19:19] New Data Interrupt Pointer 115 (n = 96-127) - NDIP115 (rw) */
    Ifx_UReg_32Bit NDIP116:1;         /**< \brief [20:20] New Data Interrupt Pointer 116 (n = 96-127) - NDIP116 (rw) */
    Ifx_UReg_32Bit NDIP117:1;         /**< \brief [21:21] New Data Interrupt Pointer 117 (n = 96-127) - NDIP117 (rw) */
    Ifx_UReg_32Bit NDIP118:1;         /**< \brief [22:22] New Data Interrupt Pointer 118 (n = 96-127) - NDIP118 (rw) */
    Ifx_UReg_32Bit NDIP119:1;         /**< \brief [23:23] New Data Interrupt Pointer 119 (n = 96-127) - NDIP119 (rw) */
    Ifx_UReg_32Bit NDIP120:1;         /**< \brief [24:24] New Data Interrupt Pointer 120 (n = 96-127) - NDIP120 (rw) */
    Ifx_UReg_32Bit NDIP121:1;         /**< \brief [25:25] New Data Interrupt Pointer 121 (n = 96-127) - NDIP121 (rw) */
    Ifx_UReg_32Bit NDIP122:1;         /**< \brief [26:26] New Data Interrupt Pointer 122 (n = 96-127) - NDIP122 (rw) */
    Ifx_UReg_32Bit NDIP123:1;         /**< \brief [27:27] New Data Interrupt Pointer 123 (n = 96-127) - NDIP123 (rw) */
    Ifx_UReg_32Bit NDIP124:1;         /**< \brief [28:28] New Data Interrupt Pointer 124 (n = 96-127) - NDIP124 (rw) */
    Ifx_UReg_32Bit NDIP125:1;         /**< \brief [29:29] New Data Interrupt Pointer 125 (n = 96-127) - NDIP125 (rw) */
    Ifx_UReg_32Bit NDIP126:1;         /**< \brief [30:30] New Data Interrupt Pointer 126 (n = 96-127) - NDIP126 (rw) */
    Ifx_UReg_32Bit NDIP127:1;         /**< \brief [31:31] New Data Interrupt Pointer 127 (n = 96-127) - NDIP127 (rw) */
} Ifx_ERAY_NDIC4_Bits;

/** \brief NEM Configuration Register */
typedef struct _Ifx_ERAY_NEMC_Bits
{
    Ifx_UReg_32Bit NML:4;             /**< \brief [3:0] Network Management Vector Length(gNetworkManagementVectorLength) - NML (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_ERAY_NEMC_Bits;

/** \brief Network Management Vector ${x} */
typedef struct _Ifx_ERAY_NMV_Bits
{
    Ifx_UReg_32Bit NM:32;             /**< \brief [31:0] Network Management Vector - NM (rh) */
} Ifx_ERAY_NMV_Bits;

/** \brief Output Buffer Command Mask */
typedef struct _Ifx_ERAY_OBCM_Bits
{
    Ifx_UReg_32Bit RHSS:1;            /**< \brief [0:0] Read Header Section Shadow - RHSS (rwh) */
    Ifx_UReg_32Bit RDSS:1;            /**< \brief [1:1] Read Data Section Shadow - RDSS (rwh) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit RHSH:1;            /**< \brief [16:16] Read Header Section Host - RHSH (rh) */
    Ifx_UReg_32Bit RDSH:1;            /**< \brief [17:17] Read Data Section Host - RDSH (rh) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_ERAY_OBCM_Bits;

/** \brief Output Buffer Command Request */
typedef struct _Ifx_ERAY_OBCR_Bits
{
    Ifx_UReg_32Bit OBRS:7;            /**< \brief [6:0] Output Buffer Request Shadow - OBRS (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit VIEW:1;            /**< \brief [8:8] View Shadow Buffer - VIEW (rw) */
    Ifx_UReg_32Bit REQ:1;             /**< \brief [9:9] Request Message RAM Transfer - REQ (rw) */
    Ifx_UReg_32Bit reserved_10:5;     /**< \brief [14:10] \internal Reserved */
    Ifx_UReg_32Bit OBSYS:1;           /**< \brief [15:15] Output Buffer Busy Shadow - OBSYS (rh) */
    Ifx_UReg_32Bit OBRH:7;            /**< \brief [22:16] Output Buffer Request Host - OBRH (rh) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_ERAY_OBCR_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_ERAY_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_OCS_Bits;

/** \brief Offset Correction Value */
typedef struct _Ifx_ERAY_OCV_Bits
{
    Ifx_UReg_32Bit OCV:19;            /**< \brief [18:0] Offset Correction Value(vOffsetCorrection) - OCV (rh) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_ERAY_OCV_Bits;

/** \brief Odd Sync ID Symbol Window ${n} */
typedef struct _Ifx_ERAY_OSID_Bits
{
    Ifx_UReg_32Bit OID:10;            /**< \brief [9:0] Odd Sync ID(vsSyncIDListA,B odd) - OID (rh) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit RXOA:1;            /**< \brief [14:14] Received Odd Sync ID on Channel A - RXOA (rh) */
    Ifx_UReg_32Bit RXOB:1;            /**< \brief [15:15] Received Odd Sync ID on Channel B - RXOB (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_ERAY_OSID_Bits;

/** \brief OCDS Trigger Set Select */
typedef struct _Ifx_ERAY_OTSS_Bits
{
    Ifx_UReg_32Bit OTGB0:2;           /**< \brief [1:0] Trigger Set for OTGB0 - OTGB0 (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit OTGB1:2;           /**< \brief [9:8] Trigger Set for OTGB1 - OTGB1 (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit OTGB2:1;           /**< \brief [16:16] Trigger Set for OTGB2 - OTGB2 (rw) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_ERAY_OTSS_Bits;

/** \brief PRT Configuration Register 1 */
typedef struct _Ifx_ERAY_PRTC1_Bits
{
    Ifx_UReg_32Bit TSST:4;            /**< \brief [3:0] Transmission Start Sequence Transmitter(gdTSSTransmitter) - TSST (rw) */
    Ifx_UReg_32Bit CASM:7;            /**< \brief [10:4] Collision Avoidance Symbol Maximum (gdCASRxLowMax) - CASM (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit SPP:2;             /**< \brief [13:12] Strobe Point Position - SPP (rw) */
    Ifx_UReg_32Bit BRP:2;             /**< \brief [15:14] Baud Rate Prescaler (gdSampleClockPeriod, pSamplePerMicrotick) - BRP (rw) */
    Ifx_UReg_32Bit RXW:9;             /**< \brief [24:16] Wakeup Symbol Receive Window Length (gdWakeupSymbolRxWindow) - RXW (rw) */
    Ifx_UReg_32Bit reserved_25:1;     /**< \brief [25:25] \internal Reserved */
    Ifx_UReg_32Bit RWP:6;             /**< \brief [31:26] Repetitions of Tx Wakeup Pattern (pWakeupPattern) - RWP (rw) */
} Ifx_ERAY_PRTC1_Bits;

/** \brief PRT Configuration Register 2 */
typedef struct _Ifx_ERAY_PRTC2_Bits
{
    Ifx_UReg_32Bit RXI:6;             /**< \brief [5:0] Wakeup Symbol Receive Idle(gdWakeupSymbolRxIdle) - RXI (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit RXL:6;             /**< \brief [13:8] Wakeup Symbol Receive Low (gdWakeupSymbolRxLow) - RXL (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit TXI:8;             /**< \brief [23:16] Wakeup Symbol Transmit Idle (gdWakeupSymbolTxIdle) - TXI (rw) */
    Ifx_UReg_32Bit TXL:6;             /**< \brief [29:24] Wakeup Symbol Transmit Low (gdWakeupSymbolTxLow) - TXL (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_PRTC2_Bits;

/** \brief Rate Correction Value */
typedef struct _Ifx_ERAY_RCV_Bits
{
    Ifx_UReg_32Bit RCV:12;            /**< \brief [11:0] Rate Correction Value(vRateCorrection) - RCV (rh) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_ERAY_RCV_Bits;

/** \brief Read Data Section ${n} */
typedef struct _Ifx_ERAY_RDDS_Bits
{
    Ifx_UReg_32Bit MDRB0:8;           /**< \brief [7:0] 32-Bit Word nn, Byte 0 - MDRB0 (rh) */
    Ifx_UReg_32Bit MDRB1:8;           /**< \brief [15:8] 32-Bit Word nn, Byte 1 - MDRB1 (rh) */
    Ifx_UReg_32Bit MDRB2:8;           /**< \brief [23:16] 32-Bit Word nn, Byte 2 - MDRB2 (rh) */
    Ifx_UReg_32Bit MDRB3:8;           /**< \brief [31:24] 32-Bit Word nn, Byte 3 - MDRB3 (rh) */
} Ifx_ERAY_RDDS_Bits;

/** \brief Read Header Section 1 */
typedef struct _Ifx_ERAY_RDHS1_Bits
{
    Ifx_UReg_32Bit FID:11;            /**< \brief [10:0] Frame ID - FID (rh) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit CYC:7;             /**< \brief [22:16] Cycle Code - CYC (rh) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit CHA:1;             /**< \brief [24:24] Channel Filter Control A - CHA (rh) */
    Ifx_UReg_32Bit CHB:1;             /**< \brief [25:25] Channel Filter Control B - CHB (rh) */
    Ifx_UReg_32Bit CFG:1;             /**< \brief [26:26] Message Buffer Direction Configuration Bit - CFG (rh) */
    Ifx_UReg_32Bit PPIT:1;            /**< \brief [27:27] Payload Preamble Indicator Transmit - PPIT (rh) */
    Ifx_UReg_32Bit TXM:1;             /**< \brief [28:28] Transmission Mode - TXM (rh) */
    Ifx_UReg_32Bit MBI:1;             /**< \brief [29:29] Message Buffer Service Request - MBI (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_RDHS1_Bits;

/** \brief Read Header Section 2 */
typedef struct _Ifx_ERAY_RDHS2_Bits
{
    Ifx_UReg_32Bit CRC:11;            /**< \brief [10:0] Header CRC(vRF!Header!HeaderCRC) - CRC (rh) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit PLC:7;             /**< \brief [22:16] Payload Length Configured - PLC (rh) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit PLR:7;             /**< \brief [30:24] Payload Length Received(vRF!Header!Length) - PLR (rh) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_ERAY_RDHS2_Bits;

/** \brief Read Header Section 3 */
typedef struct _Ifx_ERAY_RDHS3_Bits
{
    Ifx_UReg_32Bit DP:11;             /**< \brief [10:0] Data Pointer - DP (rh) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit RCC:6;             /**< \brief [21:16] Receive Cycle Count(vRF!Header!CycleCount) - RCC (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit RCI:1;             /**< \brief [24:24] Received on Channel Indicator(vSS!Channel) - RCI (rh) */
    Ifx_UReg_32Bit SFI:1;             /**< \brief [25:25] Startup Frame Indicator(vRF!Header!SuFIndicator) - SFI (rh) */
    Ifx_UReg_32Bit SYN:1;             /**< \brief [26:26] SYNC Frame Indicator(vRF!Header!SyFIndicator) - SYN (rh) */
    Ifx_UReg_32Bit NFI:1;             /**< \brief [27:27] NULL Frame Indicator(vRF!Header!NFIndicator) - NFI (rh) */
    Ifx_UReg_32Bit PPI:1;             /**< \brief [28:28] Payload Preamble Indicator(vRF!Header!PPIndicator) - PPI (rh) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_RDHS3_Bits;

/** \brief Slot Counter Value */
typedef struct _Ifx_ERAY_SCV_Bits
{
    Ifx_UReg_32Bit SCCA:11;           /**< \brief [10:0] Slot Counter Channel A(vSlotCounter[A]) - SCCA (rh) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit SCCB:11;           /**< \brief [26:16] Slot Counter Channel B(vSlotCounter[B]) - SCCB (rh) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_SCV_Bits;

/** \brief SYNC Frame Status */
typedef struct _Ifx_ERAY_SFS_Bits
{
    Ifx_UReg_32Bit VSAE:4;            /**< \brief [3:0] Valid SYNC Frames Channel A, even communication cycle - VSAE (rh) */
    Ifx_UReg_32Bit VSAO:4;            /**< \brief [7:4] Valid SYNC Frames Channel A, odd communication cycle - VSAO (rh) */
    Ifx_UReg_32Bit VSBE:4;            /**< \brief [11:8] Valid SYNC Frames Channel B, even communication cycle - VSBE (rh) */
    Ifx_UReg_32Bit VSBO:4;            /**< \brief [15:12] Valid SYNC Frames Channel B, odd communication cycle - VSBO (rh) */
    Ifx_UReg_32Bit MOCS:1;            /**< \brief [16:16] Missing Offset Correction Signal - MOCS (rh) */
    Ifx_UReg_32Bit OCLR:1;            /**< \brief [17:17] Offset Correction Limit Reached - OCLR (rh) */
    Ifx_UReg_32Bit MRCS:1;            /**< \brief [18:18] Missing Rate Correction Signal - MRCS (rh) */
    Ifx_UReg_32Bit RCLR:1;            /**< \brief [19:19] Rate Correction Limit Reached - RCLR (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_ERAY_SFS_Bits;

/** \brief Status Service Request Enable Reset */
typedef struct _Ifx_ERAY_SIER_Bits
{
    Ifx_UReg_32Bit WSTE:1;            /**< \brief [0:0] Wakeup Status Service Request Enable - WSTE (rwh) */
    Ifx_UReg_32Bit CASE:1;            /**< \brief [1:1] Collision Avoidance Symbol Service Request Enable - CASE (rwh) */
    Ifx_UReg_32Bit CYCSE:1;           /**< \brief [2:2] Cycle Start Service Request Enable - CYCSE (rwh) */
    Ifx_UReg_32Bit TXIE:1;            /**< \brief [3:3] Transmit Service Request Enable - TXIE (rwh) */
    Ifx_UReg_32Bit RXIE:1;            /**< \brief [4:4] Receive Service Request Enable - RXIE (rwh) */
    Ifx_UReg_32Bit RFNEE:1;           /**< \brief [5:5] Receive FIFO Not Empty Service Request Enable - RFNEE (rwh) */
    Ifx_UReg_32Bit RFCLE:1;           /**< \brief [6:6] Receive FIFO Critical Level Service Request Enable - RFCLE (rwh) */
    Ifx_UReg_32Bit NMVCE:1;           /**< \brief [7:7] Network Management Vector Changed Service Request Enable - NMVCE (rwh) */
    Ifx_UReg_32Bit TI0E:1;            /**< \brief [8:8] Timer Service Request 0 Enable - TI0E (rwh) */
    Ifx_UReg_32Bit TI1E:1;            /**< \brief [9:9] Timer Service Request 1 Enable - TI1E (rwh) */
    Ifx_UReg_32Bit TIBCE:1;           /**< \brief [10:10] Transfer Input Buffer Completed Service Request Enable - TIBCE (rwh) */
    Ifx_UReg_32Bit TOBCE:1;           /**< \brief [11:11] Transfer Output Buffer Completed Service Request Enable - TOBCE (rwh) */
    Ifx_UReg_32Bit SWEE:1;            /**< \brief [12:12] Stop Watch Event Service Request Enable - SWEE (rwh) */
    Ifx_UReg_32Bit SUCSE:1;           /**< \brief [13:13] Startup Completed Successfully Service Request Enable - SUCSE (rwh) */
    Ifx_UReg_32Bit MBSIE:1;           /**< \brief [14:14] Message Buffer Status Service Request Enable - MBSIE (rwh) */
    Ifx_UReg_32Bit SDSE:1;            /**< \brief [15:15] Start of Dynamic Segment Service Request Enable - SDSE (rwh) */
    Ifx_UReg_32Bit WUPAE:1;           /**< \brief [16:16] Wakeup Pattern Channel A Service Request Enable - WUPAE (rwh) */
    Ifx_UReg_32Bit MTSAE:1;           /**< \brief [17:17] Media Access Test Symbol Channel A Service Request Enable - MTSAE (rwh) */
    Ifx_UReg_32Bit reserved_18:6;     /**< \brief [23:18] \internal Reserved */
    Ifx_UReg_32Bit WUPBE:1;           /**< \brief [24:24] Wakeup Pattern Channel B Service Request Enable - WUPBE (rwh) */
    Ifx_UReg_32Bit MTSBE:1;           /**< \brief [25:25] Media Access Test Symbol Channel B Service Request Enable - MTSBE (rwh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_ERAY_SIER_Bits;

/** \brief Status Service Request Enable Set */
typedef struct _Ifx_ERAY_SIES_Bits
{
    Ifx_UReg_32Bit WSTE:1;            /**< \brief [0:0] Wakeup Status Service Request Enable - WSTE (rwh) */
    Ifx_UReg_32Bit CASE:1;            /**< \brief [1:1] Collision Avoidance Symbol Service Request Enable - CASE (rwh) */
    Ifx_UReg_32Bit CYCSE:1;           /**< \brief [2:2] Cycle Start Service Request Enable - CYCSE (rwh) */
    Ifx_UReg_32Bit TXIE:1;            /**< \brief [3:3] Transmit Service Request Enable - TXIE (rwh) */
    Ifx_UReg_32Bit RXIE:1;            /**< \brief [4:4] Receive Service Request Enable - RXIE (rwh) */
    Ifx_UReg_32Bit RFNEE:1;           /**< \brief [5:5] Receive FIFO Not Empty Service Request Enable - RFNEE (rwh) */
    Ifx_UReg_32Bit RFCLE:1;           /**< \brief [6:6] Receive FIFO Critical Level Service Request Enable - RFCLE (rwh) */
    Ifx_UReg_32Bit NMVCE:1;           /**< \brief [7:7] Network Management Vector Changed Service Request Enable - NMVCE (rwh) */
    Ifx_UReg_32Bit TI0E:1;            /**< \brief [8:8] Timer Service Request 0 Enable - TI0E (rwh) */
    Ifx_UReg_32Bit TI1E:1;            /**< \brief [9:9] Timer Service Request 1 Enable - TI1E (rwh) */
    Ifx_UReg_32Bit TIBCE:1;           /**< \brief [10:10] Transfer Input Buffer Completed Service Request Enable - TIBCE (rwh) */
    Ifx_UReg_32Bit TOBCE:1;           /**< \brief [11:11] Transfer Output Buffer Completed Service Request Enable - TOBCE (rwh) */
    Ifx_UReg_32Bit SWEE:1;            /**< \brief [12:12] Stop Watch Event Service Request Enable - SWEE (rwh) */
    Ifx_UReg_32Bit SUCSE:1;           /**< \brief [13:13] Startup Completed Successfully Service Request Enable - SUCSE (rwh) */
    Ifx_UReg_32Bit MBSIE:1;           /**< \brief [14:14] Message Buffer Status Service Request Enable - MBSIE (rwh) */
    Ifx_UReg_32Bit SDSE:1;            /**< \brief [15:15] Start of Dynamic Segment Service Request Enable - SDSE (rwh) */
    Ifx_UReg_32Bit WUPAE:1;           /**< \brief [16:16] Wakeup Pattern Channel A Service Request Enable - WUPAE (rwh) */
    Ifx_UReg_32Bit MTSAE:1;           /**< \brief [17:17] Media Access Test Symbol Channel A Service Request Enable - MTSAE (rwh) */
    Ifx_UReg_32Bit reserved_18:6;     /**< \brief [23:18] \internal Reserved */
    Ifx_UReg_32Bit WUPBE:1;           /**< \brief [24:24] Wakeup Pattern Channel B Service Request Enable - WUPBE (rwh) */
    Ifx_UReg_32Bit MTSBE:1;           /**< \brief [25:25] Media Access Test Symbol Channel B Service Request Enable - MTSBE (rwh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_ERAY_SIES_Bits;

/** \brief Status Service Request Line Select */
typedef struct _Ifx_ERAY_SILS_Bits
{
    Ifx_UReg_32Bit WSTL:1;            /**< \brief [0:0] Wakeup Status Service Request Line - WSTL (rw) */
    Ifx_UReg_32Bit CASL:1;            /**< \brief [1:1] Collision Avoidance Symbol Service Request Line - CASL (rw) */
    Ifx_UReg_32Bit CYCSL:1;           /**< \brief [2:2] Cycle Start Service Request Line - CYCSL (rw) */
    Ifx_UReg_32Bit TXIL:1;            /**< \brief [3:3] Transmit Service Request Line - TXIL (rw) */
    Ifx_UReg_32Bit RXIL:1;            /**< \brief [4:4] Receive Service Request Line - RXIL (rw) */
    Ifx_UReg_32Bit RFNEL:1;           /**< \brief [5:5] Receive FIFO Not Empty Service Request Line - RFNEL (rw) */
    Ifx_UReg_32Bit RFCLL:1;           /**< \brief [6:6] Receive FIFO Critical Level Service Request Line - RFCLL (rw) */
    Ifx_UReg_32Bit NMVCL:1;           /**< \brief [7:7] Network Management Vector Changed Service Request Line - NMVCL (rw) */
    Ifx_UReg_32Bit TI0L:1;            /**< \brief [8:8] Timer Service Request 0 Line - TI0L (rw) */
    Ifx_UReg_32Bit TI1L:1;            /**< \brief [9:9] Timer Service Request 1 Line - TI1L (rw) */
    Ifx_UReg_32Bit TIBCL:1;           /**< \brief [10:10] Transfer Input Buffer Completed Service Request Line - TIBCL (rw) */
    Ifx_UReg_32Bit TOBCL:1;           /**< \brief [11:11] Transfer Output Buffer Completed Service Request Line - TOBCL (rw) */
    Ifx_UReg_32Bit SWEL:1;            /**< \brief [12:12] Stop Watch Event Service Request Line - SWEL (rw) */
    Ifx_UReg_32Bit SUCSL:1;           /**< \brief [13:13] Startup Completed Successfully Service Request Line - SUCSL (rw) */
    Ifx_UReg_32Bit MBSIL:1;           /**< \brief [14:14] Message Buffer Status Service Request Line - MBSIL (rw) */
    Ifx_UReg_32Bit SDSL:1;            /**< \brief [15:15] Start of Dynamic Segment Service Request Line - SDSL (rw) */
    Ifx_UReg_32Bit WUPAL:1;           /**< \brief [16:16] Wakeup Pattern Channel A Service Request Line - WUPAL (rw) */
    Ifx_UReg_32Bit MTSAL:1;           /**< \brief [17:17] Media Access Test Symbol Channel A Service Request Line - MTSAL (rw) */
    Ifx_UReg_32Bit reserved_18:6;     /**< \brief [23:18] \internal Reserved */
    Ifx_UReg_32Bit WUPBL:1;           /**< \brief [24:24] Wakeup Pattern Channel B Service Request Line - WUPBL (rw) */
    Ifx_UReg_32Bit MTSBL:1;           /**< \brief [25:25] Media Access Test Symbol Channel B Service Request Line - MTSBL (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_ERAY_SILS_Bits;

/** \brief Status Service Request Register */
typedef struct _Ifx_ERAY_SIR_Bits
{
    Ifx_UReg_32Bit WST:1;             /**< \brief [0:0] Wakeup Status - WST (rwh) */
    Ifx_UReg_32Bit CAS:1;             /**< \brief [1:1] Collision Avoidance Symbol - CAS (rwh) */
    Ifx_UReg_32Bit CYCS:1;            /**< \brief [2:2] Cycle Start Service Request - CYCS (rwh) */
    Ifx_UReg_32Bit TXI:1;             /**< \brief [3:3] Transmit Service Request - TXI (rwh) */
    Ifx_UReg_32Bit RXI:1;             /**< \brief [4:4] Receive Service Request - RXI (rwh) */
    Ifx_UReg_32Bit RFNE:1;            /**< \brief [5:5] Receive FIFO Not Empty - RFNE (rh) */
    Ifx_UReg_32Bit RFCL:1;            /**< \brief [6:6] Receive FIFO Critical Level - RFCL (rh) */
    Ifx_UReg_32Bit NMVC:1;            /**< \brief [7:7] Network Management Vector Changed - NMVC (rwh) */
    Ifx_UReg_32Bit TI0:1;             /**< \brief [8:8] Timer Service Request 0 - TI0 (rwh) */
    Ifx_UReg_32Bit TI1:1;             /**< \brief [9:9] Timer Service Request 1 - TI1 (rwh) */
    Ifx_UReg_32Bit TIBC:1;            /**< \brief [10:10] Transfer Input Buffer Completed - TIBC (rwh) */
    Ifx_UReg_32Bit TOBC:1;            /**< \brief [11:11] Transfer Output Buffer Completed - TOBC (rwh) */
    Ifx_UReg_32Bit SWE:1;             /**< \brief [12:12] Stop Watch Event - SWE (rwh) */
    Ifx_UReg_32Bit SUCS:1;            /**< \brief [13:13] Startup Completed Successfully - SUCS (rwh) */
    Ifx_UReg_32Bit MBSI:1;            /**< \brief [14:14] Message Buffer Status Service Request - MBSI (rwh) */
    Ifx_UReg_32Bit SDS:1;             /**< \brief [15:15] Start of Dynamic Segment - SDS (rwh) */
    Ifx_UReg_32Bit WUPA:1;            /**< \brief [16:16] Wakeup Pattern Channel A - WUPA (rwh) */
    Ifx_UReg_32Bit MTSA:1;            /**< \brief [17:17] MTS Received on Channel A(vSS!ValidMTSA) - MTSA (rwh) */
    Ifx_UReg_32Bit reserved_18:6;     /**< \brief [23:18] \internal Reserved */
    Ifx_UReg_32Bit WUPB:1;            /**< \brief [24:24] Wakeup Pattern Channel B - WUPB (rwh) */
    Ifx_UReg_32Bit MTSB:1;            /**< \brief [25:25] MTS Received on Channel B - MTSB (rwh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_ERAY_SIR_Bits;

/** \brief Stop Watch Register 1 */
typedef struct _Ifx_ERAY_STPW1_Bits
{
    Ifx_UReg_32Bit ESWT:1;            /**< \brief [0:0] Enable Stop Watch Trigger - ESWT (rwh) */
    Ifx_UReg_32Bit SWMS:1;            /**< \brief [1:1] Stop Watch Mode Select - SWMS (rw) */
    Ifx_UReg_32Bit EDGE:1;            /**< \brief [2:2] Stop Watch Trigger Edge Select - EDGE (rw) */
    Ifx_UReg_32Bit SSWT:1;            /**< \brief [3:3] Software Stop Watch Trigger - SSWT (rwh) */
    Ifx_UReg_32Bit EETP:1;            /**< \brief [4:4] Enable External Trigger Pin - EETP (rw) */
    Ifx_UReg_32Bit EINT0:1;           /**< \brief [5:5] Enable Service Request 0 Trigger - EINT0 (rw) */
    Ifx_UReg_32Bit EINT1:1;           /**< \brief [6:6] Enable Service Request 1 Trigger - EINT1 (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit SCCV:6;            /**< \brief [13:8] Stopped Cycle Counter Value - SCCV (rh) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit SMTV:14;           /**< \brief [29:16] Stopped Macrotick Value - SMTV (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_STPW1_Bits;

/** \brief Stop Watch Register 2 */
typedef struct _Ifx_ERAY_STPW2_Bits
{
    Ifx_UReg_32Bit SSCVA:11;          /**< \brief [10:0] Stop Watch Captured Slot Counter Value Channel A - SSCVA (rh) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit SSCVB:11;          /**< \brief [26:16] Stop Watch Captured Slot Counter Value Channel B - SSCVB (rh) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_ERAY_STPW2_Bits;

/** \brief SUC Configuration Register 1 */
typedef struct _Ifx_ERAY_SUCC1_Bits
{
    Ifx_UReg_32Bit CMD:4;             /**< \brief [3:0] CHI Command Vector - CMD (rwh) */
    Ifx_UReg_32Bit reserved_4:3;      /**< \brief [6:4] \internal Reserved */
    Ifx_UReg_32Bit PBSY:1;            /**< \brief [7:7] POC Busy - PBSY (rh) */
    Ifx_UReg_32Bit TXST:1;            /**< \brief [8:8] Transmit Startup Frame in Key Slot  (pKeySlotUsedForStartup) - TXST (rw) */
    Ifx_UReg_32Bit TXSY:1;            /**< \brief [9:9] Transmit SYNC Frame in Key Slot (pKeySlotUsedForSync) - TXSY (rw) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit CSA:5;             /**< \brief [15:11] Cold Start Attempts (gColdStartAttempts) - CSA (rw) */
    Ifx_UReg_32Bit PTA:5;             /**< \brief [20:16] Passive to Active (pAllowPassiveToActive) - PTA (rw) */
    Ifx_UReg_32Bit WUCS:1;            /**< \brief [21:21] Wakeup Channel Select (pWakeupChannel) - WUCS (rw) */
    Ifx_UReg_32Bit TSM:1;             /**< \brief [22:22] Transmission Slot Mode (pSingleSlotEnabled) - TSM (rw) */
    Ifx_UReg_32Bit HCSE:1;            /**< \brief [23:23] Halt due to Clock Sync Error (pAllowHaltDueToClock) - HCSE (rw) */
    Ifx_UReg_32Bit MTSA:1;            /**< \brief [24:24] Select Channel A for MTS Transmission - MTSA (rw) */
    Ifx_UReg_32Bit MTSB:1;            /**< \brief [25:25] Select Channel B for MTS Transmission - MTSB (rw) */
    Ifx_UReg_32Bit CCHA:1;            /**< \brief [26:26] Connected to Channel A (pChannels) - CCHA (rw) */
    Ifx_UReg_32Bit CCHB:1;            /**< \brief [27:27] Connected to Channel B (pChannels) - CCHB (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_ERAY_SUCC1_Bits;

/** \brief SUC Configuration Register 2 */
typedef struct _Ifx_ERAY_SUCC2_Bits
{
    Ifx_UReg_32Bit LT:21;             /**< \brief [20:0] Listen Timeout(pdListenTimeout) - LT (rw) */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit LTN:4;             /**< \brief [27:24] Listen Time-out Noise (gListenNoise - 1)  - LTN (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_ERAY_SUCC2_Bits;

/** \brief SUC Configuration Register 3 */
typedef struct _Ifx_ERAY_SUCC3_Bits
{
    Ifx_UReg_32Bit WCP:4;             /**< \brief [3:0] Maximum Without Clock Correction Passive(gMaxWithoutClockCorrectionPassive) - WCP (rw) */
    Ifx_UReg_32Bit WCF:4;             /**< \brief [7:4] Maximum Without Clock Correction Fatal (gMaxWithoutClockCorrecti on Fatal) - WCF (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_ERAY_SUCC3_Bits;

/** \brief Symbol Window and Network Idle Time Status */
typedef struct _Ifx_ERAY_SWNIT_Bits
{
    Ifx_UReg_32Bit SESA:1;            /**< \brief [0:0] Syntax Error in Symbol Window Channel A(vSS!SyntaxErrorA) - SESA (rh) */
    Ifx_UReg_32Bit SBSA:1;            /**< \brief [1:1] Slot Boundary Violation in Symbol Window Channel A(vSS!BViolationA) - SBSA (rh) */
    Ifx_UReg_32Bit TCSA:1;            /**< \brief [2:2] Transmission Conflict in Symbol Window Channel A(vSS!TxConflictA) - TCSA (rh) */
    Ifx_UReg_32Bit SESB:1;            /**< \brief [3:3] Syntax Error in Symbol Window Channel B(vSS!SyntaxErrorB) - SESB (rh) */
    Ifx_UReg_32Bit SBSB:1;            /**< \brief [4:4] Slot Boundary Violation in Symbol Window Channel B(vSS!BViolationB) - SBSB (rh) */
    Ifx_UReg_32Bit TCSB:1;            /**< \brief [5:5] Transmission Conflict in Symbol Window Channel B(vSS!TxConflictB) - TCSB (rh) */
    Ifx_UReg_32Bit MTSA:1;            /**< \brief [6:6] MTS Received on Channel A(vSS!ValidMTSA) - MTSA (rh) */
    Ifx_UReg_32Bit MTSB:1;            /**< \brief [7:7] MTS Received on Channel B(vSS!ValidMTSB) - MTSB (rh) */
    Ifx_UReg_32Bit SENA:1;            /**< \brief [8:8] Syntax Error during network idle time (NIT) Channel A(vSS!SyntaxErrorA) - SENA (rh) */
    Ifx_UReg_32Bit SBNA:1;            /**< \brief [9:9] Slot Boundary Violation during network idle time (NIT) Channel A(vSS!BViolationA) - SBNA (rh) */
    Ifx_UReg_32Bit SENB:1;            /**< \brief [10:10] Syntax Error during network idle time (NIT) Channel B(vSS!SyntaxErrorB) - SENB (rh) */
    Ifx_UReg_32Bit SBNB:1;            /**< \brief [11:11] Slot Boundary Violation during network idle time (NIT) Channel B(vSS!BViolationB) - SBNB (rh) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_ERAY_SWNIT_Bits;

/** \brief Timer 0 Configuration */
typedef struct _Ifx_ERAY_T0C_Bits
{
    Ifx_UReg_32Bit T0RC:1;            /**< \brief [0:0] Timer 0 Run Control - T0RC (rwh) */
    Ifx_UReg_32Bit T0MS:1;            /**< \brief [1:1] Timer 0 Mode Select - T0MS (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit T0CC:7;            /**< \brief [14:8] Timer 0 Cycle Code - T0CC (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit T0MO:14;           /**< \brief [29:16] Timer 0 Macrotick Offset - T0MO (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_T0C_Bits;

/** \brief Timer 1 Configuration */
typedef struct _Ifx_ERAY_T1C_Bits
{
    Ifx_UReg_32Bit T1RC:1;            /**< \brief [0:0] Timer 1 Run Control - T1RC (rwh) */
    Ifx_UReg_32Bit T1MS:1;            /**< \brief [1:1] Timer 1 Mode Select - T1MS (rw) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit T1MC:14;           /**< \brief [29:16] Timer 1 Macrotick Count - T1MC (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_T1C_Bits;

/** \brief Test Register 1 */
typedef struct _Ifx_ERAY_TEST1_Bits
{
    Ifx_UReg_32Bit WRTEN:1;           /**< \brief [0:0] Write Test Register Enable - WRTEN (rw) */
    Ifx_UReg_32Bit ELBE:1;            /**< \brief [1:1] External Loop Back Enable - ELBE (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit TMC:2;             /**< \brief [5:4] Test Multiplexer Control - TMC (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit AOA:1;             /**< \brief [8:8] Activity on A - AOA (rh) */
    Ifx_UReg_32Bit AOB:1;             /**< \brief [9:9] Activity on B - AOB (rh) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit RXA:1;             /**< \brief [16:16] Read Channel A Receive Pin - RXA (rh) */
    Ifx_UReg_32Bit RXB:1;             /**< \brief [17:17] Read Channel B Receive Pin - RXB (rh) */
    Ifx_UReg_32Bit TXA:1;             /**< \brief [18:18] Read or Write to Channel A Transmit Pin - TXA (rwh) */
    Ifx_UReg_32Bit TXB:1;             /**< \brief [19:19] Read or Write to Channel B Transmit Pin - TXB (rwh) */
    Ifx_UReg_32Bit TXENA:1;           /**< \brief [20:20] Read or Write to Channel A Transmit Enable Pin - TXENA (rwh) */
    Ifx_UReg_32Bit TXENB:1;           /**< \brief [21:21] Read or Write to Channel B Transmit Enable Pin - TXENB (rwh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit CERA:4;            /**< \brief [27:24] Coding Error Report Channel A - CERA (rh) */
    Ifx_UReg_32Bit CERB:4;            /**< \brief [31:28] Coding Error Report Channel B  - CERB (rh) */
} Ifx_ERAY_TEST1_Bits;

/** \brief Test Register 2 */
typedef struct _Ifx_ERAY_TEST2_Bits
{
    Ifx_UReg_32Bit RS:3;              /**< \brief [2:0] RAM Select - RS (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit SSEL:3;            /**< \brief [6:4] Segment Select - SSEL (rw) */
    Ifx_UReg_32Bit reserved_7:7;      /**< \brief [13:7] \internal Reserved */
    Ifx_UReg_32Bit WRECC:1;           /**< \brief [14:14] Write ECC Data Enable - WRECC (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_ERAY_TEST2_Bits;

/** \brief Transmission Request Register 1 */
typedef struct _Ifx_ERAY_TXRQ1_Bits
{
    Ifx_UReg_32Bit TXR0:1;            /**< \brief [0:0] Transmission Request 0 (n = 0-31) - TXR0 (rh) */
    Ifx_UReg_32Bit TXR1:1;            /**< \brief [1:1] Transmission Request 1 (n = 0-31) - TXR1 (rh) */
    Ifx_UReg_32Bit TXR2:1;            /**< \brief [2:2] Transmission Request 2 (n = 0-31) - TXR2 (rh) */
    Ifx_UReg_32Bit TXR3:1;            /**< \brief [3:3] Transmission Request 3 (n = 0-31) - TXR3 (rh) */
    Ifx_UReg_32Bit TXR4:1;            /**< \brief [4:4] Transmission Request 4 (n = 0-31) - TXR4 (rh) */
    Ifx_UReg_32Bit TXR5:1;            /**< \brief [5:5] Transmission Request 5 (n = 0-31) - TXR5 (rh) */
    Ifx_UReg_32Bit TXR6:1;            /**< \brief [6:6] Transmission Request 6 (n = 0-31) - TXR6 (rh) */
    Ifx_UReg_32Bit TXR7:1;            /**< \brief [7:7] Transmission Request 7 (n = 0-31) - TXR7 (rh) */
    Ifx_UReg_32Bit TXR8:1;            /**< \brief [8:8] Transmission Request 8 (n = 0-31) - TXR8 (rh) */
    Ifx_UReg_32Bit TXR9:1;            /**< \brief [9:9] Transmission Request 9 (n = 0-31) - TXR9 (rh) */
    Ifx_UReg_32Bit TXR10:1;           /**< \brief [10:10] Transmission Request 10 (n = 0-31) - TXR10 (rh) */
    Ifx_UReg_32Bit TXR11:1;           /**< \brief [11:11] Transmission Request 11 (n = 0-31) - TXR11 (rh) */
    Ifx_UReg_32Bit TXR12:1;           /**< \brief [12:12] Transmission Request 12 (n = 0-31) - TXR12 (rh) */
    Ifx_UReg_32Bit TXR13:1;           /**< \brief [13:13] Transmission Request 13 (n = 0-31) - TXR13 (rh) */
    Ifx_UReg_32Bit TXR14:1;           /**< \brief [14:14] Transmission Request 14 (n = 0-31) - TXR14 (rh) */
    Ifx_UReg_32Bit TXR15:1;           /**< \brief [15:15] Transmission Request 15 (n = 0-31) - TXR15 (rh) */
    Ifx_UReg_32Bit TXR16:1;           /**< \brief [16:16] Transmission Request 16 (n = 0-31) - TXR16 (rh) */
    Ifx_UReg_32Bit TXR17:1;           /**< \brief [17:17] Transmission Request 17 (n = 0-31) - TXR17 (rh) */
    Ifx_UReg_32Bit TXR18:1;           /**< \brief [18:18] Transmission Request 18 (n = 0-31) - TXR18 (rh) */
    Ifx_UReg_32Bit TXR19:1;           /**< \brief [19:19] Transmission Request 19 (n = 0-31) - TXR19 (rh) */
    Ifx_UReg_32Bit TXR20:1;           /**< \brief [20:20] Transmission Request 20 (n = 0-31) - TXR20 (rh) */
    Ifx_UReg_32Bit TXR21:1;           /**< \brief [21:21] Transmission Request 21 (n = 0-31) - TXR21 (rh) */
    Ifx_UReg_32Bit TXR22:1;           /**< \brief [22:22] Transmission Request 22 (n = 0-31) - TXR22 (rh) */
    Ifx_UReg_32Bit TXR23:1;           /**< \brief [23:23] Transmission Request 23 (n = 0-31) - TXR23 (rh) */
    Ifx_UReg_32Bit TXR24:1;           /**< \brief [24:24] Transmission Request 24 (n = 0-31) - TXR24 (rh) */
    Ifx_UReg_32Bit TXR25:1;           /**< \brief [25:25] Transmission Request 25 (n = 0-31) - TXR25 (rh) */
    Ifx_UReg_32Bit TXR26:1;           /**< \brief [26:26] Transmission Request 26 (n = 0-31) - TXR26 (rh) */
    Ifx_UReg_32Bit TXR27:1;           /**< \brief [27:27] Transmission Request 27 (n = 0-31) - TXR27 (rh) */
    Ifx_UReg_32Bit TXR28:1;           /**< \brief [28:28] Transmission Request 28 (n = 0-31) - TXR28 (rh) */
    Ifx_UReg_32Bit TXR29:1;           /**< \brief [29:29] Transmission Request 29 (n = 0-31) - TXR29 (rh) */
    Ifx_UReg_32Bit TXR30:1;           /**< \brief [30:30] Transmission Request 30 (n = 0-31) - TXR30 (rh) */
    Ifx_UReg_32Bit TXR31:1;           /**< \brief [31:31] Transmission Request 31 (n = 0-31) - TXR31 (rh) */
} Ifx_ERAY_TXRQ1_Bits;

/** \brief Transmission Request Register 2 */
typedef struct _Ifx_ERAY_TXRQ2_Bits
{
    Ifx_UReg_32Bit TXR32:1;           /**< \brief [0:0] Transmission Request 32 (n = 32-63) - TXR32 (rh) */
    Ifx_UReg_32Bit TXR33:1;           /**< \brief [1:1] Transmission Request 33 (n = 32-63) - TXR33 (rh) */
    Ifx_UReg_32Bit TXR34:1;           /**< \brief [2:2] Transmission Request 34 (n = 32-63) - TXR34 (rh) */
    Ifx_UReg_32Bit TXR35:1;           /**< \brief [3:3] Transmission Request 35 (n = 32-63) - TXR35 (rh) */
    Ifx_UReg_32Bit TXR36:1;           /**< \brief [4:4] Transmission Request 36 (n = 32-63) - TXR36 (rh) */
    Ifx_UReg_32Bit TXR37:1;           /**< \brief [5:5] Transmission Request 37 (n = 32-63) - TXR37 (rh) */
    Ifx_UReg_32Bit TXR38:1;           /**< \brief [6:6] Transmission Request 38 (n = 32-63) - TXR38 (rh) */
    Ifx_UReg_32Bit TXR39:1;           /**< \brief [7:7] Transmission Request 39 (n = 32-63) - TXR39 (rh) */
    Ifx_UReg_32Bit TXR40:1;           /**< \brief [8:8] Transmission Request 40 (n = 32-63) - TXR40 (rh) */
    Ifx_UReg_32Bit TXR41:1;           /**< \brief [9:9] Transmission Request 41 (n = 32-63) - TXR41 (rh) */
    Ifx_UReg_32Bit TXR42:1;           /**< \brief [10:10] Transmission Request 42 (n = 32-63) - TXR42 (rh) */
    Ifx_UReg_32Bit TXR43:1;           /**< \brief [11:11] Transmission Request 43 (n = 32-63) - TXR43 (rh) */
    Ifx_UReg_32Bit TXR44:1;           /**< \brief [12:12] Transmission Request 44 (n = 32-63) - TXR44 (rh) */
    Ifx_UReg_32Bit TXR45:1;           /**< \brief [13:13] Transmission Request 45 (n = 32-63) - TXR45 (rh) */
    Ifx_UReg_32Bit TXR46:1;           /**< \brief [14:14] Transmission Request 46 (n = 32-63) - TXR46 (rh) */
    Ifx_UReg_32Bit TXR47:1;           /**< \brief [15:15] Transmission Request 47 (n = 32-63) - TXR47 (rh) */
    Ifx_UReg_32Bit TXR48:1;           /**< \brief [16:16] Transmission Request 48 (n = 32-63) - TXR48 (rh) */
    Ifx_UReg_32Bit TXR49:1;           /**< \brief [17:17] Transmission Request 49 (n = 32-63) - TXR49 (rh) */
    Ifx_UReg_32Bit TXR50:1;           /**< \brief [18:18] Transmission Request 50 (n = 32-63) - TXR50 (rh) */
    Ifx_UReg_32Bit TXR51:1;           /**< \brief [19:19] Transmission Request 51 (n = 32-63) - TXR51 (rh) */
    Ifx_UReg_32Bit TXR52:1;           /**< \brief [20:20] Transmission Request 52 (n = 32-63) - TXR52 (rh) */
    Ifx_UReg_32Bit TXR53:1;           /**< \brief [21:21] Transmission Request 53 (n = 32-63) - TXR53 (rh) */
    Ifx_UReg_32Bit TXR54:1;           /**< \brief [22:22] Transmission Request 54 (n = 32-63) - TXR54 (rh) */
    Ifx_UReg_32Bit TXR55:1;           /**< \brief [23:23] Transmission Request 55 (n = 32-63) - TXR55 (rh) */
    Ifx_UReg_32Bit TXR56:1;           /**< \brief [24:24] Transmission Request 56 (n = 32-63) - TXR56 (rh) */
    Ifx_UReg_32Bit TXR57:1;           /**< \brief [25:25] Transmission Request 57 (n = 32-63) - TXR57 (rh) */
    Ifx_UReg_32Bit TXR58:1;           /**< \brief [26:26] Transmission Request 58 (n = 32-63) - TXR58 (rh) */
    Ifx_UReg_32Bit TXR59:1;           /**< \brief [27:27] Transmission Request 59 (n = 32-63) - TXR59 (rh) */
    Ifx_UReg_32Bit TXR60:1;           /**< \brief [28:28] Transmission Request 60 (n = 32-63) - TXR60 (rh) */
    Ifx_UReg_32Bit TXR61:1;           /**< \brief [29:29] Transmission Request 61 (n = 32-63) - TXR61 (rh) */
    Ifx_UReg_32Bit TXR62:1;           /**< \brief [30:30] Transmission Request 62 (n = 32-63) - TXR62 (rh) */
    Ifx_UReg_32Bit TXR63:1;           /**< \brief [31:31] Transmission Request 63 (n = 32-63) - TXR63 (rh) */
} Ifx_ERAY_TXRQ2_Bits;

/** \brief Transmission Request Register 3 */
typedef struct _Ifx_ERAY_TXRQ3_Bits
{
    Ifx_UReg_32Bit TXR64:1;           /**< \brief [0:0] Transmission Request 64 (n = 64-95) - TXR64 (rh) */
    Ifx_UReg_32Bit TXR65:1;           /**< \brief [1:1] Transmission Request 65 (n = 64-95) - TXR65 (rh) */
    Ifx_UReg_32Bit TXR66:1;           /**< \brief [2:2] Transmission Request 66 (n = 64-95) - TXR66 (rh) */
    Ifx_UReg_32Bit TXR67:1;           /**< \brief [3:3] Transmission Request 67 (n = 64-95) - TXR67 (rh) */
    Ifx_UReg_32Bit TXR68:1;           /**< \brief [4:4] Transmission Request 68 (n = 64-95) - TXR68 (rh) */
    Ifx_UReg_32Bit TXR69:1;           /**< \brief [5:5] Transmission Request 69 (n = 64-95) - TXR69 (rh) */
    Ifx_UReg_32Bit TXR70:1;           /**< \brief [6:6] Transmission Request 70 (n = 64-95) - TXR70 (rh) */
    Ifx_UReg_32Bit TXR71:1;           /**< \brief [7:7] Transmission Request 71 (n = 64-95) - TXR71 (rh) */
    Ifx_UReg_32Bit TXR72:1;           /**< \brief [8:8] Transmission Request 72 (n = 64-95) - TXR72 (rh) */
    Ifx_UReg_32Bit TXR73:1;           /**< \brief [9:9] Transmission Request 73 (n = 64-95) - TXR73 (rh) */
    Ifx_UReg_32Bit TXR74:1;           /**< \brief [10:10] Transmission Request 74 (n = 64-95) - TXR74 (rh) */
    Ifx_UReg_32Bit TXR75:1;           /**< \brief [11:11] Transmission Request 75 (n = 64-95) - TXR75 (rh) */
    Ifx_UReg_32Bit TXR76:1;           /**< \brief [12:12] Transmission Request 76 (n = 64-95) - TXR76 (rh) */
    Ifx_UReg_32Bit TXR77:1;           /**< \brief [13:13] Transmission Request 77 (n = 64-95) - TXR77 (rh) */
    Ifx_UReg_32Bit TXR78:1;           /**< \brief [14:14] Transmission Request 78 (n = 64-95) - TXR78 (rh) */
    Ifx_UReg_32Bit TXR79:1;           /**< \brief [15:15] Transmission Request 79 (n = 64-95) - TXR79 (rh) */
    Ifx_UReg_32Bit TXR80:1;           /**< \brief [16:16] Transmission Request 80 (n = 64-95) - TXR80 (rh) */
    Ifx_UReg_32Bit TXR81:1;           /**< \brief [17:17] Transmission Request 81 (n = 64-95) - TXR81 (rh) */
    Ifx_UReg_32Bit TXR82:1;           /**< \brief [18:18] Transmission Request 82 (n = 64-95) - TXR82 (rh) */
    Ifx_UReg_32Bit TXR83:1;           /**< \brief [19:19] Transmission Request 83 (n = 64-95) - TXR83 (rh) */
    Ifx_UReg_32Bit TXR84:1;           /**< \brief [20:20] Transmission Request 84 (n = 64-95) - TXR84 (rh) */
    Ifx_UReg_32Bit TXR85:1;           /**< \brief [21:21] Transmission Request 85 (n = 64-95) - TXR85 (rh) */
    Ifx_UReg_32Bit TXR86:1;           /**< \brief [22:22] Transmission Request 86 (n = 64-95) - TXR86 (rh) */
    Ifx_UReg_32Bit TXR87:1;           /**< \brief [23:23] Transmission Request 87 (n = 64-95) - TXR87 (rh) */
    Ifx_UReg_32Bit TXR88:1;           /**< \brief [24:24] Transmission Request 88 (n = 64-95) - TXR88 (rh) */
    Ifx_UReg_32Bit TXR89:1;           /**< \brief [25:25] Transmission Request 89 (n = 64-95) - TXR89 (rh) */
    Ifx_UReg_32Bit TXR90:1;           /**< \brief [26:26] Transmission Request 90 (n = 64-95) - TXR90 (rh) */
    Ifx_UReg_32Bit TXR91:1;           /**< \brief [27:27] Transmission Request 91 (n = 64-95) - TXR91 (rh) */
    Ifx_UReg_32Bit TXR92:1;           /**< \brief [28:28] Transmission Request 92 (n = 64-95) - TXR92 (rh) */
    Ifx_UReg_32Bit TXR93:1;           /**< \brief [29:29] Transmission Request 93 (n = 64-95) - TXR93 (rh) */
    Ifx_UReg_32Bit TXR94:1;           /**< \brief [30:30] Transmission Request 94 (n = 64-95) - TXR94 (rh) */
    Ifx_UReg_32Bit TXR95:1;           /**< \brief [31:31] Transmission Request 95 (n = 64-95) - TXR95 (rh) */
} Ifx_ERAY_TXRQ3_Bits;

/** \brief Transmission Request Register 4 */
typedef struct _Ifx_ERAY_TXRQ4_Bits
{
    Ifx_UReg_32Bit TXR96:1;           /**< \brief [0:0] Transmission Request 96 (n = 96-127) - TXR96 (rh) */
    Ifx_UReg_32Bit TXR97:1;           /**< \brief [1:1] Transmission Request 97 (n = 96-127) - TXR97 (rh) */
    Ifx_UReg_32Bit TXR98:1;           /**< \brief [2:2] Transmission Request 98 (n = 96-127) - TXR98 (rh) */
    Ifx_UReg_32Bit TXR99:1;           /**< \brief [3:3] Transmission Request 99 (n = 96-127) - TXR99 (rh) */
    Ifx_UReg_32Bit TXR100:1;          /**< \brief [4:4] Transmission Request 100 (n = 96-127) - TXR100 (rh) */
    Ifx_UReg_32Bit TXR101:1;          /**< \brief [5:5] Transmission Request 101 (n = 96-127) - TXR101 (rh) */
    Ifx_UReg_32Bit TXR102:1;          /**< \brief [6:6] Transmission Request 102 (n = 96-127) - TXR102 (rh) */
    Ifx_UReg_32Bit TXR103:1;          /**< \brief [7:7] Transmission Request 103 (n = 96-127) - TXR103 (rh) */
    Ifx_UReg_32Bit TXR104:1;          /**< \brief [8:8] Transmission Request 104 (n = 96-127) - TXR104 (rh) */
    Ifx_UReg_32Bit TXR105:1;          /**< \brief [9:9] Transmission Request 105 (n = 96-127) - TXR105 (rh) */
    Ifx_UReg_32Bit TXR106:1;          /**< \brief [10:10] Transmission Request 106 (n = 96-127) - TXR106 (rh) */
    Ifx_UReg_32Bit TXR107:1;          /**< \brief [11:11] Transmission Request 107 (n = 96-127) - TXR107 (rh) */
    Ifx_UReg_32Bit TXR108:1;          /**< \brief [12:12] Transmission Request 108 (n = 96-127) - TXR108 (rh) */
    Ifx_UReg_32Bit TXR109:1;          /**< \brief [13:13] Transmission Request 109 (n = 96-127) - TXR109 (rh) */
    Ifx_UReg_32Bit TXR110:1;          /**< \brief [14:14] Transmission Request 110 (n = 96-127) - TXR110 (rh) */
    Ifx_UReg_32Bit TXR111:1;          /**< \brief [15:15] Transmission Request 111 (n = 96-127) - TXR111 (rh) */
    Ifx_UReg_32Bit TXR112:1;          /**< \brief [16:16] Transmission Request 112 (n = 96-127) - TXR112 (rh) */
    Ifx_UReg_32Bit TXR113:1;          /**< \brief [17:17] Transmission Request 113 (n = 96-127) - TXR113 (rh) */
    Ifx_UReg_32Bit TXR114:1;          /**< \brief [18:18] Transmission Request 114 (n = 96-127) - TXR114 (rh) */
    Ifx_UReg_32Bit TXR115:1;          /**< \brief [19:19] Transmission Request 115 (n = 96-127) - TXR115 (rh) */
    Ifx_UReg_32Bit TXR116:1;          /**< \brief [20:20] Transmission Request 116 (n = 96-127) - TXR116 (rh) */
    Ifx_UReg_32Bit TXR117:1;          /**< \brief [21:21] Transmission Request 117 (n = 96-127) - TXR117 (rh) */
    Ifx_UReg_32Bit TXR118:1;          /**< \brief [22:22] Transmission Request 118 (n = 96-127) - TXR118 (rh) */
    Ifx_UReg_32Bit TXR119:1;          /**< \brief [23:23] Transmission Request 119 (n = 96-127) - TXR119 (rh) */
    Ifx_UReg_32Bit TXR120:1;          /**< \brief [24:24] Transmission Request 120 (n = 96-127) - TXR120 (rh) */
    Ifx_UReg_32Bit TXR121:1;          /**< \brief [25:25] Transmission Request 121 (n = 96-127) - TXR121 (rh) */
    Ifx_UReg_32Bit TXR122:1;          /**< \brief [26:26] Transmission Request 122 (n = 96-127) - TXR122 (rh) */
    Ifx_UReg_32Bit TXR123:1;          /**< \brief [27:27] Transmission Request 123 (n = 96-127) - TXR123 (rh) */
    Ifx_UReg_32Bit TXR124:1;          /**< \brief [28:28] Transmission Request 124 (n = 96-127) - TXR124 (rh) */
    Ifx_UReg_32Bit TXR125:1;          /**< \brief [29:29] Transmission Request 125 (n = 96-127) - TXR125 (rh) */
    Ifx_UReg_32Bit TXR126:1;          /**< \brief [30:30] Transmission Request 126 (n = 96-127) - TXR126 (rh) */
    Ifx_UReg_32Bit TXR127:1;          /**< \brief [31:31] Transmission Request 127 (n = 96-127) - TXR127 (rh) */
} Ifx_ERAY_TXRQ4_Bits;

/** \brief Write Data Section ${n} */
typedef struct _Ifx_ERAY_WRDS_Bits
{
    Ifx_UReg_32Bit MDWB0:8;           /**< \brief [7:0] 32-Bit Word nn, Byte 0 - MDWB0 (rw) */
    Ifx_UReg_32Bit MDWB1:8;           /**< \brief [15:8] 32-Bit Word nn, Byte 1 - MDWB1 (rw) */
    Ifx_UReg_32Bit MDWB2:8;           /**< \brief [23:16] 32-Bit Word nn, Byte 2 - MDWB2 (rw) */
    Ifx_UReg_32Bit MDWB3:8;           /**< \brief [31:24] 32-Bit Word nn, Byte 3 - MDWB3 (rw) */
} Ifx_ERAY_WRDS_Bits;

/** \brief Write Header Section 1 */
typedef struct _Ifx_ERAY_WRHS1_Bits
{
    Ifx_UReg_32Bit FID:11;            /**< \brief [10:0] Frame ID - FID (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit CYC:7;             /**< \brief [22:16] Cycle Code - CYC (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit CHA:1;             /**< \brief [24:24] Channel Filter Control A - CHA (rw) */
    Ifx_UReg_32Bit CHB:1;             /**< \brief [25:25] Channel Filter Control B - CHB (rw) */
    Ifx_UReg_32Bit CFG:1;             /**< \brief [26:26] Message Buffer Direction Configuration Bit - CFG (rw) */
    Ifx_UReg_32Bit PPIT:1;            /**< \brief [27:27] Payload Preamble Indicator Transmit - PPIT (rw) */
    Ifx_UReg_32Bit TXM:1;             /**< \brief [28:28] Transmission Mode - TXM (rw) */
    Ifx_UReg_32Bit MBI:1;             /**< \brief [29:29] Message Buffer Service Request - MBI (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_ERAY_WRHS1_Bits;

/** \brief Write Header Section 2 */
typedef struct _Ifx_ERAY_WRHS2_Bits
{
    Ifx_UReg_32Bit CRC:11;            /**< \brief [10:0] Header CRC(vRF!Header!HeaderCRC) - CRC (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit PLC:7;             /**< \brief [22:16] Payload Length Configured - PLC (rw) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_ERAY_WRHS2_Bits;

/** \brief Write Header Section 3 */
typedef struct _Ifx_ERAY_WRHS3_Bits
{
    Ifx_UReg_32Bit DP:11;             /**< \brief [10:0] Data Pointer - DP (rw) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_ERAY_WRHS3_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_eray_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_ACCEN0;

/** \brief Aggregated Channel Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_ACS_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_ACS;

/** \brief Communication Controller Error Vector   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_CCEV_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_CCEV;

/** \brief Communication Controller Status Vector   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_CCSV_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_CCSV;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_CLC;

/** \brief Core Release Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_CREL_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_CREL;

/** \brief Busy and Input Buffer Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_CUST1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_CUST1;

/** \brief Customer Interface Timeout Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_CUST3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_CUST3;

/** \brief Error Service Request Enable Reset   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_EIER_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_EIER;

/** \brief Error Service Request Enable Set   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_EIES_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_EIES;

/** \brief Error Service Request Line Select   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_EILS_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_EILS;

/** \brief Error Service Request Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_EIR_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_EIR;

/** \brief Endian Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_ENDN_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_ENDN;

/** \brief Even Sync ID Symbol Window ${n}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_ESID_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_ESID;

/** \brief FIFO Critical Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_FCL_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_FCL;

/** \brief FIFO Rejection Filter   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_FRF_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_FRF;

/** \brief FIFO Rejection Filter Mask   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_FRFM_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_FRFM;

/** \brief FIFO Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_FSR_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_FSR;

/** \brief GTU Configuration Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC01_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC01;

/** \brief GTU Configuration Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC02_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC02;

/** \brief GTU Configuration Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC03_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC03;

/** \brief GTU Configuration Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC04_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC04;

/** \brief GTU Configuration Register 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC05_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC05;

/** \brief GTU Configuration Register 6   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC06_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC06;

/** \brief GTU Configuration Register 7   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC07_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC07;

/** \brief GTU Configuration Register 8   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC08_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC08;

/** \brief GTU Configuration Register 9   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC09_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC09;

/** \brief GTU Configuration Register 10   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC10_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC10;

/** \brief GTU Configuration Register 11   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_GTUC11_Bits B;           /**< \brief Bitfield access */
} Ifx_ERAY_GTUC11;

/** \brief Input Buffer Command Mask   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_IBCM_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_IBCM;

/** \brief Input Buffer Command Request   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_IBCR_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_IBCR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_ERAY_ID;

/** \brief Service Request Line Enable   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_ILE_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_ILE;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_KRST0_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_KRST1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_KRSTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_ERAY_KRSTCLR;

/** \brief Lock Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_LCK_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_LCK;

/** \brief Last Dynamic Transmit Slot   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_LDTS_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_LDTS;

/** \brief Message Buffer Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MBS_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_MBS;

/** \brief Message Buffer Status Changed 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MBSC1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MBSC1;

/** \brief Message Buffer Status Changed 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MBSC2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MBSC2;

/** \brief Message Buffer Status Changed 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MBSC3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MBSC3;

/** \brief Message Buffer Status Changed 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MBSC4_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MBSC4;

/** \brief MHD Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MHDC_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_MHDC;

/** \brief Message Handler Constraints Flags   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MHDF_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_MHDF;

/** \brief Message Handler Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MHDS_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_MHDS;

/** \brief Message RAM Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MRC_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_MRC;

/** \brief Message Buffer Status Changed Interrupt Control 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MSIC1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MSIC1;

/** \brief Message Buffer Status Changed Interrupt Control 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MSIC2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MSIC2;

/** \brief Message Buffer Status Changed Interrupt Control 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MSIC3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MSIC3;

/** \brief Message Buffer Status Changed Interrupt Control 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MSIC4_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MSIC4;

/** \brief Macrotick and Cycle Counter Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_MTCCV_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_MTCCV;

/** \brief New Data Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NDAT1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_NDAT1;

/** \brief New Data Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NDAT2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_NDAT2;

/** \brief New Data Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NDAT3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_NDAT3;

/** \brief New Data Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NDAT4_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_NDAT4;

/** \brief New Data Interrupt Control 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NDIC1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_NDIC1;

/** \brief New Data Interrupt Control 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NDIC2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_NDIC2;

/** \brief New Data Interrupt Control 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NDIC3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_NDIC3;

/** \brief New Data Interrupt Control 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NDIC4_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_NDIC4;

/** \brief NEM Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NEMC_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_NEMC;

/** \brief Network Management Vector ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_NMV_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_NMV;

/** \brief Output Buffer Command Mask   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_OBCM_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_OBCM;

/** \brief Output Buffer Command Request   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_OBCR_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_OBCR;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_OCS_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_OCS;

/** \brief Offset Correction Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_OCV_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_OCV;

/** \brief Odd Sync ID Symbol Window ${n}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_OSID_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_OSID;

/** \brief OCDS Trigger Set Select   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_OTSS_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_OTSS;

/** \brief PRT Configuration Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_PRTC1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_PRTC1;

/** \brief PRT Configuration Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_PRTC2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_PRTC2;

/** \brief Rate Correction Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_RCV_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_RCV;

/** \brief Read Data Section ${n}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_RDDS_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_RDDS;

/** \brief Read Header Section 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_RDHS1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_RDHS1;

/** \brief Read Header Section 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_RDHS2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_RDHS2;

/** \brief Read Header Section 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_RDHS3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_RDHS3;

/** \brief Slot Counter Value   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SCV_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_SCV;

/** \brief SYNC Frame Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SFS_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_SFS;

/** \brief Status Service Request Enable Reset   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SIER_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_SIER;

/** \brief Status Service Request Enable Set   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SIES_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_SIES;

/** \brief Status Service Request Line Select   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SILS_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_SILS;

/** \brief Status Service Request Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SIR_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_SIR;

/** \brief Stop Watch Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_STPW1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_STPW1;

/** \brief Stop Watch Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_STPW2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_STPW2;

/** \brief SUC Configuration Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SUCC1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_SUCC1;

/** \brief SUC Configuration Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SUCC2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_SUCC2;

/** \brief SUC Configuration Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SUCC3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_SUCC3;

/** \brief Symbol Window and Network Idle Time Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_SWNIT_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_SWNIT;

/** \brief Timer 0 Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_T0C_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_T0C;

/** \brief Timer 1 Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_T1C_Bits B;              /**< \brief Bitfield access */
} Ifx_ERAY_T1C;

/** \brief Test Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_TEST1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_TEST1;

/** \brief Test Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_TEST2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_TEST2;

/** \brief Transmission Request Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_TXRQ1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_TXRQ1;

/** \brief Transmission Request Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_TXRQ2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_TXRQ2;

/** \brief Transmission Request Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_TXRQ3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_TXRQ3;

/** \brief Transmission Request Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_TXRQ4_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_TXRQ4;

/** \brief Write Data Section ${n}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_WRDS_Bits B;             /**< \brief Bitfield access */
} Ifx_ERAY_WRDS;

/** \brief Write Header Section 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_WRHS1_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_WRHS1;

/** \brief Write Header Section 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_WRHS2_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_WRHS2;

/** \brief Write Header Section 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_ERAY_WRHS3_Bits B;            /**< \brief Bitfield access */
} Ifx_ERAY_WRHS3;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Eray_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief ERAY object */
typedef volatile struct _Ifx_ERAY
{
       Ifx_ERAY_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_ERAY_CUST1                      CUST1;                  /**< \brief 4, Busy and Input Buffer Control Register*/
       Ifx_ERAY_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_ERAY_CUST3                      CUST3;                  /**< \brief C, Customer Interface Timeout Counter Register*/
       Ifx_ERAY_TEST1                      TEST1;                  /**< \brief 10, Test Register 1*/
       Ifx_ERAY_TEST2                      TEST2;                  /**< \brief 14, Test Register 2*/
       Ifx_UReg_8Bit                       reserved_18[4];         /**< \brief 18, \internal Reserved */
       Ifx_ERAY_LCK                        LCK;                    /**< \brief 1C, Lock Register*/
       Ifx_ERAY_EIR                        EIR;                    /**< \brief 20, Error Service Request Select Register*/
       Ifx_ERAY_SIR                        SIR;                    /**< \brief 24, Status Service Request Register*/
       Ifx_ERAY_EILS                       EILS;                   /**< \brief 28, Error Service Request Line Select*/
       Ifx_ERAY_SILS                       SILS;                   /**< \brief 2C, Status Service Request Line Select*/
       Ifx_ERAY_EIES                       EIES;                   /**< \brief 30, Error Service Request Enable Set*/
       Ifx_ERAY_EIER                       EIER;                   /**< \brief 34, Error Service Request Enable Reset*/
       Ifx_ERAY_SIES                       SIES;                   /**< \brief 38, Status Service Request Enable Set*/
       Ifx_ERAY_SIER                       SIER;                   /**< \brief 3C, Status Service Request Enable Reset*/
       Ifx_ERAY_ILE                        ILE;                    /**< \brief 40, Service Request Line Enable*/
       Ifx_ERAY_T0C                        T0C;                    /**< \brief 44, Timer 0 Configuration*/
       Ifx_ERAY_T1C                        T1C;                    /**< \brief 48, Timer 1 Configuration*/
       Ifx_ERAY_STPW1                      STPW1;                  /**< \brief 4C, Stop Watch Register 1*/
       Ifx_ERAY_STPW2                      STPW2;                  /**< \brief 50, Stop Watch Register 2*/
       Ifx_UReg_8Bit                       reserved_54[44];        /**< \brief 54, \internal Reserved */
       Ifx_ERAY_SUCC1                      SUCC1;                  /**< \brief 80, SUC Configuration Register 1*/
       Ifx_ERAY_SUCC2                      SUCC2;                  /**< \brief 84, SUC Configuration Register 2*/
       Ifx_ERAY_SUCC3                      SUCC3;                  /**< \brief 88, SUC Configuration Register 3*/
       Ifx_ERAY_NEMC                       NEMC;                   /**< \brief 8C, NEM Configuration Register*/
       Ifx_ERAY_PRTC1                      PRTC1;                  /**< \brief 90, PRT Configuration Register 1*/
       Ifx_ERAY_PRTC2                      PRTC2;                  /**< \brief 94, PRT Configuration Register 2*/
       Ifx_ERAY_MHDC                       MHDC;                   /**< \brief 98, MHD Configuration Register*/
       Ifx_UReg_8Bit                       reserved_9C[4];         /**< \brief 9C, \internal Reserved */
       Ifx_ERAY_GTUC01                     GTUC01;                 /**< \brief A0, GTU Configuration Register 1*/
       Ifx_ERAY_GTUC02                     GTUC02;                 /**< \brief A4, GTU Configuration Register 2*/
       Ifx_ERAY_GTUC03                     GTUC03;                 /**< \brief A8, GTU Configuration Register 3*/
       Ifx_ERAY_GTUC04                     GTUC04;                 /**< \brief AC, GTU Configuration Register 4*/
       Ifx_ERAY_GTUC05                     GTUC05;                 /**< \brief B0, GTU Configuration Register 5*/
       Ifx_ERAY_GTUC06                     GTUC06;                 /**< \brief B4, GTU Configuration Register 6*/
       Ifx_ERAY_GTUC07                     GTUC07;                 /**< \brief B8, GTU Configuration Register 7*/
       Ifx_ERAY_GTUC08                     GTUC08;                 /**< \brief BC, GTU Configuration Register 8*/
       Ifx_ERAY_GTUC09                     GTUC09;                 /**< \brief C0, GTU Configuration Register 9*/
       Ifx_ERAY_GTUC10                     GTUC10;                 /**< \brief C4, GTU Configuration Register 10*/
       Ifx_ERAY_GTUC11                     GTUC11;                 /**< \brief C8, GTU Configuration Register 11*/
       Ifx_UReg_8Bit                       reserved_CC[52];        /**< \brief CC, \internal Reserved */
       Ifx_ERAY_CCSV                       CCSV;                   /**< \brief 100, Communication Controller Status Vector*/
       Ifx_ERAY_CCEV                       CCEV;                   /**< \brief 104, Communication Controller Error Vector*/
       Ifx_UReg_8Bit                       reserved_108[8];        /**< \brief 108, \internal Reserved */
       Ifx_ERAY_SCV                        SCV;                    /**< \brief 110, Slot Counter Value*/
       Ifx_ERAY_MTCCV                      MTCCV;                  /**< \brief 114, Macrotick and Cycle Counter Value*/
       Ifx_ERAY_RCV                        RCV;                    /**< \brief 118, Rate Correction Value*/
       Ifx_ERAY_OCV                        OCV;                    /**< \brief 11C, Offset Correction Value*/
       Ifx_ERAY_SFS                        SFS;                    /**< \brief 120, SYNC Frame Status*/
       Ifx_ERAY_SWNIT                      SWNIT;                  /**< \brief 124, Symbol Window and Network Idle Time Status*/
       Ifx_ERAY_ACS                        ACS;                    /**< \brief 128, Aggregated Channel Status*/
       Ifx_UReg_8Bit                       reserved_12C[4];        /**< \brief 12C, \internal Reserved */
       Ifx_ERAY_ESID                       ESID_1S[15];            /**< \brief 130, Even Sync ID Symbol Window ${n}*/
       Ifx_UReg_8Bit                       reserved_16C[4];        /**< \brief 16C, \internal Reserved */
       Ifx_ERAY_OSID                       OSID_1S[15];            /**< \brief 170, Odd Sync ID Symbol Window ${n}*/
       Ifx_UReg_8Bit                       reserved_1AC[4];        /**< \brief 1AC, \internal Reserved */
       Ifx_ERAY_NMV                        NMV_1S[3];              /**< \brief 1B0, Network Management Vector ${x}*/
       Ifx_UReg_8Bit                       reserved_1BC[324];      /**< \brief 1BC, \internal Reserved */
       Ifx_ERAY_MRC                        MRC;                    /**< \brief 300, Message RAM Configuration*/
       Ifx_ERAY_FRF                        FRF;                    /**< \brief 304, FIFO Rejection Filter*/
       Ifx_ERAY_FRFM                       FRFM;                   /**< \brief 308, FIFO Rejection Filter Mask*/
       Ifx_ERAY_FCL                        FCL;                    /**< \brief 30C, FIFO Critical Level*/
       Ifx_ERAY_MHDS                       MHDS;                   /**< \brief 310, Message Handler Status*/
       Ifx_ERAY_LDTS                       LDTS;                   /**< \brief 314, Last Dynamic Transmit Slot*/
       Ifx_ERAY_FSR                        FSR;                    /**< \brief 318, FIFO Status Register*/
       Ifx_ERAY_MHDF                       MHDF;                   /**< \brief 31C, Message Handler Constraints Flags*/
       Ifx_ERAY_TXRQ1                      TXRQ1;                  /**< \brief 320, Transmission Request Register 1*/
       Ifx_ERAY_TXRQ2                      TXRQ2;                  /**< \brief 324, Transmission Request Register 2*/
       Ifx_ERAY_TXRQ3                      TXRQ3;                  /**< \brief 328, Transmission Request Register 3*/
       Ifx_ERAY_TXRQ4                      TXRQ4;                  /**< \brief 32C, Transmission Request Register 4*/
       Ifx_ERAY_NDAT1                      NDAT1;                  /**< \brief 330, New Data Register 1*/
       Ifx_ERAY_NDAT2                      NDAT2;                  /**< \brief 334, New Data Register 2*/
       Ifx_ERAY_NDAT3                      NDAT3;                  /**< \brief 338, New Data Register 3*/
       Ifx_ERAY_NDAT4                      NDAT4;                  /**< \brief 33C, New Data Register 4*/
       Ifx_ERAY_MBSC1                      MBSC1;                  /**< \brief 340, Message Buffer Status Changed 1*/
       Ifx_ERAY_MBSC2                      MBSC2;                  /**< \brief 344, Message Buffer Status Changed 2*/
       Ifx_ERAY_MBSC3                      MBSC3;                  /**< \brief 348, Message Buffer Status Changed 3*/
       Ifx_ERAY_MBSC4                      MBSC4;                  /**< \brief 34C, Message Buffer Status Changed 4*/
       Ifx_UReg_8Bit                       reserved_350[88];       /**< \brief 350, \internal Reserved */
       Ifx_ERAY_NDIC1                      NDIC1;                  /**< \brief 3A8, New Data Interrupt Control 1*/
       Ifx_ERAY_NDIC2                      NDIC2;                  /**< \brief 3AC, New Data Interrupt Control 2*/
       Ifx_ERAY_NDIC3                      NDIC3;                  /**< \brief 3B0, New Data Interrupt Control 3*/
       Ifx_ERAY_NDIC4                      NDIC4;                  /**< \brief 3B4, New Data Interrupt Control 4*/
       Ifx_ERAY_MSIC1                      MSIC1;                  /**< \brief 3B8, Message Buffer Status Changed Interrupt Control 1*/
       Ifx_ERAY_MSIC2                      MSIC2;                  /**< \brief 3BC, Message Buffer Status Changed Interrupt Control 2*/
       Ifx_ERAY_MSIC3                      MSIC3;                  /**< \brief 3C0, Message Buffer Status Changed Interrupt Control 3*/
       Ifx_ERAY_MSIC4                      MSIC4;                  /**< \brief 3C4, Message Buffer Status Changed Interrupt Control 4*/
       Ifx_UReg_8Bit                       reserved_3C8[40];       /**< \brief 3C8, \internal Reserved */
       Ifx_ERAY_CREL                       CREL;                   /**< \brief 3F0, Core Release Register*/
       Ifx_ERAY_ENDN                       ENDN;                   /**< \brief 3F4, Endian Register*/
       Ifx_UReg_8Bit                       reserved_3F8[8];        /**< \brief 3F8, \internal Reserved */
       Ifx_ERAY_WRDS                       WRDS_1S[64];            /**< \brief 400, Write Data Section ${n}*/
       Ifx_ERAY_WRHS1                      WRHS1;                  /**< \brief 500, Write Header Section 1*/
       Ifx_ERAY_WRHS2                      WRHS2;                  /**< \brief 504, Write Header Section 2*/
       Ifx_ERAY_WRHS3                      WRHS3;                  /**< \brief 508, Write Header Section 3*/
       Ifx_UReg_8Bit                       reserved_50C[4];        /**< \brief 50C, \internal Reserved */
       Ifx_ERAY_IBCM                       IBCM;                   /**< \brief 510, Input Buffer Command Mask*/
       Ifx_ERAY_IBCR                       IBCR;                   /**< \brief 514, Input Buffer Command Request*/
       Ifx_UReg_8Bit                       reserved_518[232];      /**< \brief 518, \internal Reserved */
       Ifx_ERAY_RDDS                       RDDS_1S[64];            /**< \brief 600, Read Data Section ${n}*/
       Ifx_ERAY_RDHS1                      RDHS1;                  /**< \brief 700, Read Header Section 1*/
       Ifx_ERAY_RDHS2                      RDHS2;                  /**< \brief 704, Read Header Section 2*/
       Ifx_ERAY_RDHS3                      RDHS3;                  /**< \brief 708, Read Header Section 3*/
       Ifx_ERAY_MBS                        MBS;                    /**< \brief 70C, Message Buffer Status*/
       Ifx_ERAY_OBCM                       OBCM;                   /**< \brief 710, Output Buffer Command Mask*/
       Ifx_ERAY_OBCR                       OBCR;                   /**< \brief 714, Output Buffer Command Request*/
       Ifx_UReg_8Bit                       reserved_718[344];      /**< \brief 718, \internal Reserved */
       Ifx_ERAY_OTSS                       OTSS;                   /**< \brief 870, OCDS Trigger Set Select*/
       Ifx_UReg_8Bit                       reserved_874[116];      /**< \brief 874, \internal Reserved */
       Ifx_ERAY_OCS                        OCS;                    /**< \brief 8E8, OCDS Control and Status*/
       Ifx_ERAY_KRSTCLR                    KRSTCLR;                /**< \brief 8EC, Kernel Reset Status Clear Register*/
       Ifx_ERAY_KRST1                      KRST1;                  /**< \brief 8F0, Kernel Reset Register 1*/
       Ifx_ERAY_KRST0                      KRST0;                  /**< \brief 8F4, Kernel Reset Register 0*/
       Ifx_UReg_8Bit                       reserved_8F8[4];        /**< \brief 8F8, \internal Reserved */
       Ifx_ERAY_ACCEN0                     ACCEN0;                 /**< \brief 8FC, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_900[1792];     /**< \brief 900, \internal Reserved */
} Ifx_ERAY;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXERAY_REGDEF_H */
