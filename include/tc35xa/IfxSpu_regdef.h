/**
 * \file IfxSpu_regdef.h
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
 * \defgroup IfxSfr_Spu_Registers Spu Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Spu_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Spu_Registers
 * 
 * \defgroup IfxSfr_Spu_Registers_union Register unions
 * \ingroup IfxSfr_Spu_Registers
 * 
 * \defgroup IfxSfr_Spu_Registers_struct Memory map
 * \ingroup IfxSfr_Spu_Registers
 */
#ifndef IFXSPU_REGDEF_H
#define IFXSPU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Spu_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_SPU_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID x (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID x (rw) */
} Ifx_SPU_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_SPU_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SPU_ACCEN1_Bits;

/** \brief Spare Configuration Register */
typedef struct _Ifx_SPU_ACFG2_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SPU_ACFG2_Bits;

/** \brief Antenna Offset */
typedef struct _Ifx_SPU_BE_ANTOFST_Bits
{
    Ifx_UReg_32Bit ADROFST0_ANT:16;    /**< \brief [15:0] Antenna Offset Address (rw) */
    Ifx_UReg_32Bit ADROFST1_ANT:16;    /**< \brief [31:16] Antenna Offset Address (rw) */
} Ifx_SPU_BE_ANTOFST_Bits;

/** \brief CFAR Module Control */
typedef struct _Ifx_SPU_BE_CFARCTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] CFAR Base Address (rw) */
    Ifx_UReg_32Bit SEWIN:6;           /**< \brief [24:19] Spectrum Extension Window (rw) */
    Ifx_UReg_32Bit EXTNSN:2;          /**< \brief [26:25] Spectrum Extension (rw) */
    Ifx_UReg_32Bit CFAR_CAE:1;        /**< \brief [27:27] CFAR CA Engine Enable (rw) */
    Ifx_UReg_32Bit CFAR_GOSE:1;       /**< \brief [28:28] CFAR GOS Engine Enable (rw) */
    Ifx_UReg_32Bit CFAREN:3;          /**< \brief [31:29] CFAR Module Enable (rw) */
} Ifx_SPU_BE_CFARCTRL_Bits;

/** \brief Loader Configuration */
typedef struct _Ifx_SPU_BE_LDR_CONF_Bits
{
    Ifx_UReg_32Bit DRPL:8;            /**< \brief [7:0] Drop Last (rw) */
    Ifx_UReg_32Bit DRPF:8;            /**< \brief [15:8] Drop First (rw) */
    Ifx_UReg_32Bit EXPNT:6;           /**< \brief [21:16] Common Exponent (rw) */
    Ifx_UReg_32Bit PHSHFT:2;          /**< \brief [23:22] Fast Phase Shift (rw) */
    Ifx_UReg_32Bit SIZE:4;            /**< \brief [27:24] FFT Size (rw) */
    Ifx_UReg_32Bit FORMAT:2;          /**< \brief [29:28] Window Data Format (rw) */
    Ifx_UReg_32Bit FFTBYPS:1;         /**< \brief [30:30] FFT Bypass (rw) */
    Ifx_UReg_32Bit IFFT:1;            /**< \brief [31:31] Inverse FFT Enable (rw) */
} Ifx_SPU_BE_LDR_CONF_Bits;

/** \brief Loader Configuration Extended */
typedef struct _Ifx_SPU_BE_LDR_CONF2_Bits
{
    Ifx_UReg_32Bit WBASE:16;          /**< \brief [15:0] Window Coefficient Base Address (rw) */
    Ifx_UReg_32Bit PADF:13;           /**< \brief [28:16] Pad at Front (rw) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit WINEN:1;           /**< \brief [31:31] Window Function Enable (rw) */
} Ifx_SPU_BE_LDR_CONF2_Bits;

/** \brief NCI Control */
typedef struct _Ifx_SPU_BE_NCICTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit EN:1;              /**< \brief [19:19] Enable (rw) */
    Ifx_UReg_32Bit FORMAT:2;          /**< \brief [21:20] Output Format (rw) */
    Ifx_UReg_32Bit SCALE:2;           /**< \brief [23:22] Result Scaling (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SPU_BE_NCICTRL_Bits;

/** \brief Output Data Processor Configuration */
typedef struct _Ifx_SPU_BE_ODP_CONF_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit MODE:1;            /**< \brief [19:19] ODP Mode (rw) */
    Ifx_UReg_32Bit FTR:1;             /**< \brief [20:20] Force to Real (rw) */
    Ifx_UReg_32Bit SCALE:1;           /**< \brief [21:21] Scale Results to 16 bit (rw) */
    Ifx_UReg_32Bit EXPNT:5;           /**< \brief [26:22] Common Exponent (rw) */
    Ifx_UReg_32Bit IPF:1;             /**< \brief [27:27] In Place FFT (rw) */
    Ifx_UReg_32Bit ROF:1;             /**< \brief [28:28] Real Only Format (rw) */
    Ifx_UReg_32Bit HPFP:1;            /**< \brief [29:29] Half Precision Floating Point (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_SPU_BE_ODP_CONF_Bits;

/** \brief Power Information Channel Control */
typedef struct _Ifx_SPU_BE_PWRCTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit reserved_19:12;    /**< \brief [30:19] \internal Reserved */
    Ifx_UReg_32Bit EN:1;              /**< \brief [31:31] Enable (rw) */
} Ifx_SPU_BE_PWRCTRL_Bits;

/** \brief Power Summation */
typedef struct _Ifx_SPU_BE_PWRSUM_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit SCALE:2;           /**< \brief [20:19] Sum Antenna Result Scaling (rw) */
    Ifx_UReg_32Bit PRECISION:1;       /**< \brief [21:21] Output Precision (rw) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_SPU_BE_PWRSUM_Bits;

/** \brief Sideband Control */
typedef struct _Ifx_SPU_BE_SBCTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit reserved_19:12;    /**< \brief [30:19] \internal Reserved */
    Ifx_UReg_32Bit EN:1;              /**< \brief [31:31] Enable (rw) */
} Ifx_SPU_BE_SBCTRL_Bits;

/** \brief Summation Unit Control */
typedef struct _Ifx_SPU_BE_SUMCTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit PWRMODE:1;         /**< \brief [19:19] Power Mode (rw) */
    Ifx_UReg_32Bit SUMMODE:2;         /**< \brief [21:20] Summation Mode (rw) */
    Ifx_UReg_32Bit REAL:1;            /**< \brief [22:22] Real Value (rw) */
    Ifx_UReg_32Bit USEANT:8;          /**< \brief [30:23] Antennae to Use (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SPU_BE_SUMCTRL_Bits;

/** \brief Spare Configuration Register */
typedef struct _Ifx_SPU_BE_UNLDR_ACFG_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SPU_BE_UNLDR_ACFG_Bits;

/** \brief Unloader Configuration */
typedef struct _Ifx_SPU_BE_UNLDR_CONF_Bits
{
    Ifx_UReg_32Bit EXPNT:5;           /**< \brief [4:0] Common Exponent (rw) */
    Ifx_UReg_32Bit FORMAT:1;          /**< \brief [5:5] Input Data Format (rw) */
    Ifx_UReg_32Bit HISTEN:1;          /**< \brief [6:6] Histogram Enable (rw) */
    Ifx_UReg_32Bit HAFE:1;            /**< \brief [7:7] Histogram Antenna Filter Enable (rw) */
    Ifx_UReg_32Bit AFV:3;             /**< \brief [10:8] Antenna Filter Value (rw) */
    Ifx_UReg_32Bit reserved_11:2;     /**< \brief [12:11] \internal Reserved */
    Ifx_UReg_32Bit HISTBINS:3;        /**< \brief [15:13] Number of power values per histogram bin. (rw) */
    Ifx_UReg_32Bit HISTBASE:16;       /**< \brief [31:16] Histogram Base Address (rw) */
} Ifx_SPU_BE_UNLDR_CONF_Bits;

/** \brief Unloader Configuration 2 */
typedef struct _Ifx_SPU_BE_UNLDR_CONF2_Bits
{
    Ifx_UReg_32Bit STRT:16;           /**< \brief [15:0] Start Count (rw) */
    Ifx_UReg_32Bit END:16;            /**< \brief [31:16] End Count (rw) */
} Ifx_SPU_BE_UNLDR_CONF2_Bits;

/** \brief Bin Rejection Unit Control */
typedef struct _Ifx_SPU_BINREJCTRL_Bits
{
    Ifx_UReg_32Bit RMODE:2;           /**< \brief [1:0] Bin Rejection Mode (rw) */
    Ifx_UReg_32Bit ZMODE:1;           /**< \brief [2:2] Threshold Rejection Mode (rw) */
    Ifx_UReg_32Bit LJUST:1;           /**< \brief [3:3] Left Justify (rw) */
    Ifx_UReg_32Bit VALUE:24;          /**< \brief [27:4] Threshold Value (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_SPU_BINREJCTRL_Bits;

/** \brief Bin Rejection Mask */
typedef struct _Ifx_SPU_BIN_REJ_Bits
{
    Ifx_UReg_32Bit B_R0:1;            /**< \brief [0:0] BIN (rw) */
    Ifx_UReg_32Bit B_R1:1;            /**< \brief [1:1] BIN (rw) */
    Ifx_UReg_32Bit B_R2:1;            /**< \brief [2:2] BIN (rw) */
    Ifx_UReg_32Bit B_R3:1;            /**< \brief [3:3] BIN (rw) */
    Ifx_UReg_32Bit B_R4:1;            /**< \brief [4:4] BIN (rw) */
    Ifx_UReg_32Bit B_R5:1;            /**< \brief [5:5] BIN (rw) */
    Ifx_UReg_32Bit B_R6:1;            /**< \brief [6:6] BIN (rw) */
    Ifx_UReg_32Bit B_R7:1;            /**< \brief [7:7] BIN (rw) */
    Ifx_UReg_32Bit B_R8:1;            /**< \brief [8:8] BIN (rw) */
    Ifx_UReg_32Bit B_R9:1;            /**< \brief [9:9] BIN (rw) */
    Ifx_UReg_32Bit B_R10:1;           /**< \brief [10:10] BIN (rw) */
    Ifx_UReg_32Bit B_R11:1;           /**< \brief [11:11] BIN (rw) */
    Ifx_UReg_32Bit B_R12:1;           /**< \brief [12:12] BIN (rw) */
    Ifx_UReg_32Bit B_R13:1;           /**< \brief [13:13] BIN (rw) */
    Ifx_UReg_32Bit B_R14:1;           /**< \brief [14:14] BIN (rw) */
    Ifx_UReg_32Bit B_R15:1;           /**< \brief [15:15] BIN (rw) */
    Ifx_UReg_32Bit B_R16:1;           /**< \brief [16:16] BIN (rw) */
    Ifx_UReg_32Bit B_R17:1;           /**< \brief [17:17] BIN (rw) */
    Ifx_UReg_32Bit B_R18:1;           /**< \brief [18:18] BIN (rw) */
    Ifx_UReg_32Bit B_R19:1;           /**< \brief [19:19] BIN (rw) */
    Ifx_UReg_32Bit B_R20:1;           /**< \brief [20:20] BIN (rw) */
    Ifx_UReg_32Bit B_R21:1;           /**< \brief [21:21] BIN (rw) */
    Ifx_UReg_32Bit B_R22:1;           /**< \brief [22:22] BIN (rw) */
    Ifx_UReg_32Bit B_R23:1;           /**< \brief [23:23] BIN (rw) */
    Ifx_UReg_32Bit B_R24:1;           /**< \brief [24:24] BIN (rw) */
    Ifx_UReg_32Bit B_R25:1;           /**< \brief [25:25] BIN (rw) */
    Ifx_UReg_32Bit B_R26:1;           /**< \brief [26:26] BIN (rw) */
    Ifx_UReg_32Bit B_R27:1;           /**< \brief [27:27] BIN (rw) */
    Ifx_UReg_32Bit B_R28:1;           /**< \brief [28:28] BIN (rw) */
    Ifx_UReg_32Bit B_R29:1;           /**< \brief [29:29] BIN (rw) */
    Ifx_UReg_32Bit B_R30:1;           /**< \brief [30:30] BIN (rw) */
    Ifx_UReg_32Bit B_R31:1;           /**< \brief [31:31] BIN (rw) */
} Ifx_SPU_BIN_REJ_Bits;

/** \brief Bin Rejection Unit Load Count */
typedef struct _Ifx_SPU_BRCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SPU_BRCNT_Bits;

/** \brief CFAR Unit Load Count */
typedef struct _Ifx_SPU_CFARCNT_Bits
{
    Ifx_UReg_32Bit CNT:21;            /**< \brief [20:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_SPU_CFARCNT_Bits;

/** \brief CFAR Configuration */
typedef struct _Ifx_SPU_CFAR_CFG1_Bits
{
    Ifx_UReg_32Bit CAALGO:2;          /**< \brief [1:0] CA-CFAR Algorithm Select (rw) */
    Ifx_UReg_32Bit GOSALGO:2;         /**< \brief [3:2] GOS-CFAR Algorithm Select (rw) */
    Ifx_UReg_32Bit CAGUARD:6;         /**< \brief [9:4] Guard Cells (rw) */
    Ifx_UReg_32Bit CAWINCELL:3;       /**< \brief [12:10] Window Cells Exponent (rw) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit CFARSEL:2;         /**< \brief [15:14] Inline CFAR Engine (rw) */
    Ifx_UReg_32Bit CABETA:16;         /**< \brief [31:16] CA-CFAR Beta (rw) */
} Ifx_SPU_CFAR_CFG1_Bits;

/** \brief CFAR Configuration 2 */
typedef struct _Ifx_SPU_CFAR_CFG2_Bits
{
    Ifx_UReg_32Bit GOSGUARD:6;        /**< \brief [5:0] Guard Cells (rw) */
    Ifx_UReg_32Bit IDXLD:5;           /**< \brief [10:6] Index Lead (rw) */
    Ifx_UReg_32Bit IDXLG:5;           /**< \brief [15:11] Index Lag (rw) */
    Ifx_UReg_32Bit GOSWINCELL:6;      /**< \brief [21:16] Window Cells Exponent (rw) */
    Ifx_UReg_32Bit CASHWIN:3;         /**< \brief [24:22] CASH Subwindow (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_SPU_CFAR_CFG2_Bits;

/** \brief CFAR Configuration 3 */
typedef struct _Ifx_SPU_CFAR_CFG3_Bits
{
    Ifx_UReg_32Bit GOSBETA:16;        /**< \brief [15:0] GOS-CFAR Beta (rw) */
    Ifx_UReg_32Bit CHAN5OFFST:16;     /**< \brief [31:16] Channel 5 Address Offset (rw) */
} Ifx_SPU_CFAR_CFG3_Bits;

/** \brief Clock Control */
typedef struct _Ifx_SPU_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Disable Request (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Disable Status (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_SPU_CLC_Bits;

/** \brief Safety Counter Clear */
typedef struct _Ifx_SPU_CNTCLR_Bits
{
    Ifx_UReg_32Bit CLR:2;             /**< \brief [1:0] Clear (rwh) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit CNTTST:2;          /**< \brief [17:16] Monitor Counter Test (rwh) */
    Ifx_UReg_32Bit SELECT:5;          /**< \brief [22:18] Counter Select (rw) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_SPU_CNTCLR_Bits;

/** \brief Monitor CRC Register */
typedef struct _Ifx_SPU_CRC_CTRL_Bits
{
    Ifx_UReg_32Bit CRC:32;            /**< \brief [31:0] CRC (rh) */
} Ifx_SPU_CRC_CTRL_Bits;

/** \brief Monitor CRC Register */
typedef struct _Ifx_SPU_CRC_DATA_Bits
{
    Ifx_UReg_32Bit CRC:32;            /**< \brief [31:0] CRC (rh) */
} Ifx_SPU_CRC_DATA_Bits;

/** \brief SPU Control */
typedef struct _Ifx_SPU_CTRL_Bits
{
    Ifx_UReg_32Bit TRIG:1;            /**< \brief [0:0] SPU Software Trigger (rwh) */
    Ifx_UReg_32Bit BUSY:1;            /**< \brief [1:1] SPU Busy Flag (rh) */
    Ifx_UReg_32Bit MODE:3;            /**< \brief [4:2] SPU Trigger Mode (rw) */
    Ifx_UReg_32Bit NXT_CONF:19;       /**< \brief [23:5] Next Configuration Base Address (rw) */
    Ifx_UReg_32Bit DIV:2;             /**< \brief [25:24] Clock Division Ratio (rw) */
    Ifx_UReg_32Bit ATTN:1;            /**< \brief [26:26] Generate Service Request Interrupt (rw) */
    Ifx_UReg_32Bit XTRIG:1;           /**< \brief [27:27] Cross Trigger (rw) */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [30:28] \internal Reserved */
    Ifx_UReg_32Bit LAST:1;            /**< \brief [31:31] Last Configuration (rw) */
} Ifx_SPU_CTRL_Bits;

/** \brief Double Pass Configuration */
typedef struct _Ifx_SPU_DPASS_CONF_Bits
{
    Ifx_UReg_32Bit EN:1;              /**< \brief [0:0] Enable (rw) */
    Ifx_UReg_32Bit SWITCH:1;          /**< \brief [1:1] Buffer Memory Switch (rw) */
    Ifx_UReg_32Bit COUNT:3;           /**< \brief [4:2] Switch Count (rw) */
    Ifx_UReg_32Bit EN_CNT:1;          /**< \brief [5:5] Enable Count (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_SPU_DPASS_CONF_Bits;

/** \brief FFT Unload Count */
typedef struct _Ifx_SPU_FFTRCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SPU_FFTRCNT_Bits;

/** \brief FFT Load Count */
typedef struct _Ifx_SPU_FFTWCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SPU_FFTWCNT_Bits;

/** \brief Input Buffer Memory Count */
typedef struct _Ifx_SPU_IBMCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SPU_IBMCNT_Bits;

/** \brief Input DMA Count */
typedef struct _Ifx_SPU_IDMCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SPU_IDMCNT_Bits;

/** \brief Input DMA Configuration */
typedef struct _Ifx_SPU_ID_CONF_Bits
{
    Ifx_UReg_32Bit SRC:2;             /**< \brief [1:0] Data Source (rw) */
    Ifx_UReg_32Bit ANT:2;             /**< \brief [3:2] Number of Antennae (rw) */
    Ifx_UReg_32Bit SMPLCNT:11;        /**< \brief [14:4] Sample Count (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit RAMPS:11;          /**< \brief [26:16] Ramps per Measurement Cycle (rw) */
    Ifx_UReg_32Bit reserved_27:3;     /**< \brief [29:27] \internal Reserved */
    Ifx_UReg_32Bit SIGNED:1;          /**< \brief [30:30] Signed or Unsigned Data (rw) */
    Ifx_UReg_32Bit FORMAT:1;          /**< \brief [31:31] RIF Data Format (rw) */
} Ifx_SPU_ID_CONF_Bits;

/** \brief Input DMA Configuration 2 */
typedef struct _Ifx_SPU_ID_CONF2_Bits
{
    Ifx_UReg_32Bit BPADDR:19;         /**< \brief [18:0] Bypass Address (rw) */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit BYPASS:1;          /**< \brief [24:24] SPU Bypass Mode (rw) */
    Ifx_UReg_32Bit BPRLD:1;           /**< \brief [25:25] Bypass Reload (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SPU_ID_CONF2_Bits;

/** \brief Spare Configuration Register */
typedef struct _Ifx_SPU_ID_RM_ACFG0_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SPU_ID_RM_ACFG0_Bits;

/** \brief Spare Configuration Register */
typedef struct _Ifx_SPU_ID_RM_ACFG1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SPU_ID_RM_ACFG1_Bits;

/** \brief Bin Offset Address Configuration */
typedef struct _Ifx_SPU_ID_RM_BLO_Bits
{
    Ifx_UReg_32Bit BLO:24;            /**< \brief [23:0] Bin Loop Offset (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SPU_ID_RM_BLO_Bits;

/** \brief Bin Loop Repeat */
typedef struct _Ifx_SPU_ID_RM_BLR_Bits
{
    Ifx_UReg_32Bit BLR:13;            /**< \brief [12:0] Bin Loop Repeat (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_SPU_ID_RM_BLR_Bits;

/** \brief Input DMA Configuration: Radar Memory */
typedef struct _Ifx_SPU_ID_RM_CONF_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit FORMAT:3;          /**< \brief [21:19] Input Data Format (rw) */
    Ifx_UReg_32Bit TRNSPS:1;          /**< \brief [22:22] Transpose Addressing (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit AM:3;              /**< \brief [26:24] Antenna Mapping (rw) */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit BLOCKS:3;          /**< \brief [30:28] Number of Datablocks (rw) */
    Ifx_UReg_32Bit PM:1;              /**< \brief [31:31] Processing Mode (rw) */
} Ifx_SPU_ID_RM_CONF_Bits;

/** \brief Inner Loop Address Offset */
typedef struct _Ifx_SPU_ID_RM_ILO_Bits
{
    Ifx_UReg_32Bit ILO:24;            /**< \brief [23:0] Inner Loop Offset (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SPU_ID_RM_ILO_Bits;

/** \brief Inner and Outer Loop Repeat */
typedef struct _Ifx_SPU_ID_RM_IOLR_Bits
{
    Ifx_UReg_32Bit ILR:13;            /**< \brief [12:0] Inner Loop Repeat (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit OLR:13;            /**< \brief [28:16] Outer Loop Repeat (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_SPU_ID_RM_IOLR_Bits;

/** \brief Outer Loop Address Offset */
typedef struct _Ifx_SPU_ID_RM_OLO_Bits
{
    Ifx_UReg_32Bit OLO:24;            /**< \brief [23:0] Outer Loop Offset (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SPU_ID_RM_OLO_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_SPU_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SPU_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_SPU_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_SPU_KRST1_Bits;

/** \brief Kernel Reset Clear */
typedef struct _Ifx_SPU_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_SPU_KRSTCLR_Bits;

/** \brief Local Maximum Control */
typedef struct _Ifx_SPU_LCLMAX_Bits
{
    Ifx_UReg_32Bit WIDTH:2;           /**< \brief [1:0] Local Maximum Window Width (rw) */
    Ifx_UReg_32Bit TMODE:2;           /**< \brief [3:2] Threshold Mode (rw) */
    Ifx_UReg_32Bit LMODE:2;           /**< \brief [5:4] Local Max Mode (rw) */
    Ifx_UReg_32Bit CMBN:1;            /**< \brief [6:6] Check Combine (rw) */
    Ifx_UReg_32Bit LJUST:1;           /**< \brief [7:7] Left Justify (rw) */
    Ifx_UReg_32Bit TSHLD:24;          /**< \brief [31:8] Threshold (rw) */
} Ifx_SPU_LCLMAX_Bits;

/** \brief Input Buffer Memory Read Count */
typedef struct _Ifx_SPU_LDRCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SPU_LDRCNT_Bits;

/** \brief Magnitude Approximation Constants */
typedef struct _Ifx_SPU_MAGAPPROX_Bits
{
    Ifx_UReg_32Bit ALPHA:16;          /**< \brief [15:0] Alpha Constant (rw) */
    Ifx_UReg_32Bit BETA:16;           /**< \brief [31:16] Beta Constant (rw) */
} Ifx_SPU_MAGAPPROX_Bits;

/** \brief Bin Rejection Unit Tracking */
typedef struct _Ifx_SPU_MD_BINCOUNT_Bits
{
    Ifx_UReg_32Bit REJCNT:12;         /**< \brief [11:0] Rejection Count (rh) */
    Ifx_UReg_32Bit THSLDCNT:12;       /**< \brief [23:12] Threshold Function Count (rh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SPU_MD_BINCOUNT_Bits;

/** \brief Bin Acceptance  Mask */
typedef struct _Ifx_SPU_MD_MASK_ACCEPT_Bits
{
    Ifx_UReg_32Bit B_A0:1;            /**< \brief [0:0] BIN (rh) */
    Ifx_UReg_32Bit B_A1:1;            /**< \brief [1:1] BIN (rh) */
    Ifx_UReg_32Bit B_A2:1;            /**< \brief [2:2] BIN (rh) */
    Ifx_UReg_32Bit B_A3:1;            /**< \brief [3:3] BIN (rh) */
    Ifx_UReg_32Bit B_A4:1;            /**< \brief [4:4] BIN (rh) */
    Ifx_UReg_32Bit B_A5:1;            /**< \brief [5:5] BIN (rh) */
    Ifx_UReg_32Bit B_A6:1;            /**< \brief [6:6] BIN (rh) */
    Ifx_UReg_32Bit B_A7:1;            /**< \brief [7:7] BIN (rh) */
    Ifx_UReg_32Bit B_A8:1;            /**< \brief [8:8] BIN (rh) */
    Ifx_UReg_32Bit B_A9:1;            /**< \brief [9:9] BIN (rh) */
    Ifx_UReg_32Bit B_A10:1;           /**< \brief [10:10] BIN (rh) */
    Ifx_UReg_32Bit B_A11:1;           /**< \brief [11:11] BIN (rh) */
    Ifx_UReg_32Bit B_A12:1;           /**< \brief [12:12] BIN (rh) */
    Ifx_UReg_32Bit B_A13:1;           /**< \brief [13:13] BIN (rh) */
    Ifx_UReg_32Bit B_A14:1;           /**< \brief [14:14] BIN (rh) */
    Ifx_UReg_32Bit B_A15:1;           /**< \brief [15:15] BIN (rh) */
    Ifx_UReg_32Bit B_A16:1;           /**< \brief [16:16] BIN (rh) */
    Ifx_UReg_32Bit B_A17:1;           /**< \brief [17:17] BIN (rh) */
    Ifx_UReg_32Bit B_A18:1;           /**< \brief [18:18] BIN (rh) */
    Ifx_UReg_32Bit B_A19:1;           /**< \brief [19:19] BIN (rh) */
    Ifx_UReg_32Bit B_A20:1;           /**< \brief [20:20] BIN (rh) */
    Ifx_UReg_32Bit B_A21:1;           /**< \brief [21:21] BIN (rh) */
    Ifx_UReg_32Bit B_A22:1;           /**< \brief [22:22] BIN (rh) */
    Ifx_UReg_32Bit B_A23:1;           /**< \brief [23:23] BIN (rh) */
    Ifx_UReg_32Bit B_A24:1;           /**< \brief [24:24] BIN (rh) */
    Ifx_UReg_32Bit B_A25:1;           /**< \brief [25:25] BIN (rh) */
    Ifx_UReg_32Bit B_A26:1;           /**< \brief [26:26] BIN (rh) */
    Ifx_UReg_32Bit B_A27:1;           /**< \brief [27:27] BIN (rh) */
    Ifx_UReg_32Bit B_A28:1;           /**< \brief [28:28] BIN (rh) */
    Ifx_UReg_32Bit B_A29:1;           /**< \brief [29:29] BIN (rh) */
    Ifx_UReg_32Bit B_A30:1;           /**< \brief [30:30] BIN (rh) */
    Ifx_UReg_32Bit B_A31:1;           /**< \brief [31:31] BIN (rh) */
} Ifx_SPU_MD_MASK_ACCEPT_Bits;

/** \brief Dataset Metadata */
typedef struct _Ifx_SPU_MD_METADATA_Bits
{
    Ifx_UReg_32Bit SMPLCNT:12;        /**< \brief [11:0] Sample Count (rh) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit EXPNT:5;           /**< \brief [20:16] Common Exponent (rh) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_SPU_MD_METADATA_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_SPU_MODID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value (r) */
} Ifx_SPU_MODID_Bits;

/** \brief SPU Monitor */
typedef struct _Ifx_SPU_MONITOR_Bits
{
    Ifx_UReg_32Bit RAMP:11;           /**< \brief [10:0] Ramp Counter (rh) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit SAMPLE:11;         /**< \brief [22:12] Sample Count (rh) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit IDM_BUSY:1;        /**< \brief [24:24] IDM Busy (rh) */
    Ifx_UReg_32Bit LDR_BUSY:1;        /**< \brief [25:25] Loader Busy (rh) */
    Ifx_UReg_32Bit M1_BUSY:1;         /**< \brief [26:26] MATH1 Unit Busy (rh) */
    Ifx_UReg_32Bit UL_BUSY:1;         /**< \brief [27:27] Unloader Busy (rh) */
    Ifx_UReg_32Bit M2_BUSY:1;         /**< \brief [28:28] MATH2 Busy (rh) */
    Ifx_UReg_32Bit ODM_BUSY:1;        /**< \brief [29:29] ODM Busy (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_SPU_MONITOR_Bits;

/** \brief NCI Antennae Scaling Factor */
typedef struct _Ifx_SPU_NCI_SCALAR0_Bits
{
    Ifx_UReg_32Bit ANT0:16;           /**< \brief [15:0] Scaling Factor for Antenna 0 (rw) */
    Ifx_UReg_32Bit ANT1:16;           /**< \brief [31:16] Scaling Factor for Antenna 1 (rw) */
} Ifx_SPU_NCI_SCALAR0_Bits;

/** \brief NCI Antennae Scaling Factor */
typedef struct _Ifx_SPU_NCI_SCALAR1_Bits
{
    Ifx_UReg_32Bit ANT2:16;           /**< \brief [15:0] Scaling Factor for Antenna 2 (rw) */
    Ifx_UReg_32Bit ANT3:16;           /**< \brief [31:16] Scaling Factor for Antenna 3 (rw) */
} Ifx_SPU_NCI_SCALAR1_Bits;

/** \brief NCI Antennae Scaling Factor */
typedef struct _Ifx_SPU_NCI_SCALAR2_Bits
{
    Ifx_UReg_32Bit ANT4:16;           /**< \brief [15:0] Scaling Factor for Antenna 4 (rw) */
    Ifx_UReg_32Bit ANT5:16;           /**< \brief [31:16] Scaling Factor for Antenna 5 (rw) */
} Ifx_SPU_NCI_SCALAR2_Bits;

/** \brief NCI Antennae Scaling Factor */
typedef struct _Ifx_SPU_NCI_SCALAR3_Bits
{
    Ifx_UReg_32Bit ANT6:16;           /**< \brief [15:0] Scaling Factor for Antenna 6 (rw) */
    Ifx_UReg_32Bit ANT7:16;           /**< \brief [31:16] Scaling Factor for Antenna 7 (rw) */
} Ifx_SPU_NCI_SCALAR3_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_SPU_OCS_Bits
{
    Ifx_UReg_32Bit TGS:2;             /**< \brief [1:0] Trigger Bus Select (rw) */
    Ifx_UReg_32Bit TGB:1;             /**< \brief [2:2] OTGB0/1 Bus Select (rw) */
    Ifx_UReg_32Bit TG_P:1;            /**< \brief [3:3] TGS, TGB Write Protection (rw) */
    Ifx_UReg_32Bit reserved_4:20;     /**< \brief [23:4] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] Suspend (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] Suspend Protect (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend Status (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_SPU_OCS_Bits;

/** \brief OCDS Debug Access Register */
typedef struct _Ifx_SPU_ODA_Bits
{
    Ifx_UReg_32Bit DDREN:1;           /**< \brief [0:0] Destructive Debug Read Enable (rw) */
    Ifx_UReg_32Bit DREN:1;            /**< \brief [1:1] Destructive Read Enable (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SPU_ODA_Bits;

/** \brief Output DMA Port Write Count */
typedef struct _Ifx_SPU_ODMACNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SPU_ODMACNT_Bits;

/** \brief Output Buffer Memory Read Count */
typedef struct _Ifx_SPU_ODMCNT_Bits
{
    Ifx_UReg_32Bit CNT:21;            /**< \brief [20:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_SPU_ODMCNT_Bits;

/** \brief Partial-Acquisition Counter */
typedef struct _Ifx_SPU_PACTR_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Counter Reset (w) */
    Ifx_UReg_32Bit EN:1;              /**< \brief [1:1] Counter Enable (rwh) */
    Ifx_UReg_32Bit LIMIT:11;          /**< \brief [12:2] Preacquisition Counter Limit (rw) */
    Ifx_UReg_32Bit TRIG:1;            /**< \brief [13:13] Trigger on Limit (rw) */
    Ifx_UReg_32Bit ERR:1;             /**< \brief [14:14] Error Interrupt on Limit (rw) */
    Ifx_UReg_32Bit ATTN:1;            /**< \brief [15:15] Attention Request Interrupt onLimit (rw) */
    Ifx_UReg_32Bit COUNT:11;          /**< \brief [26:16] Counter Value (rh) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_SPU_PACTR_Bits;

/** \brief Register CRC */
typedef struct _Ifx_SPU_REGCRC_Bits
{
    Ifx_UReg_32Bit CRC:32;            /**< \brief [31:0] CRC (rw) */
} Ifx_SPU_REGCRC_Bits;

/** \brief Scalar Addition Operand */
typedef struct _Ifx_SPU_SCALARADD_Bits
{
    Ifx_UReg_32Bit OPERAND:32;        /**< \brief [31:0] Operand for Scaling (rw) */
} Ifx_SPU_SCALARADD_Bits;

/** \brief Scalar Multiplication Operand */
typedef struct _Ifx_SPU_SCALARMULT_Bits
{
    Ifx_UReg_32Bit OPERAND:32;        /**< \brief [31:0] Operand for Scaling (rw) */
} Ifx_SPU_SCALARMULT_Bits;

/** \brief Safety Mechanism Control Functions */
typedef struct _Ifx_SPU_SMCTRL_Bits
{
    Ifx_UReg_32Bit CTRLCRCEN:2;       /**< \brief [1:0] Control CRC Enable (rw) */
    Ifx_UReg_32Bit DATACRCEN:2;       /**< \brief [3:2] Data CRC Enable (rw) */
    Ifx_UReg_32Bit REGCRCEN:2;        /**< \brief [5:4] Register CRC Enable (rw) */
    Ifx_UReg_32Bit RIFCRC:2;          /**< \brief [7:6] RIF Data CRC Check Enable (rw) */
    Ifx_UReg_32Bit BPCRC:2;           /**< \brief [9:8] Bypass Data CRC Check Enable (rw) */
    Ifx_UReg_32Bit RMTAERR:2;         /**< \brief [11:10] Radar Memory Access Address Error Enable (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_SPU_SMCTRL_Bits;

/** \brief Safety Mechanism Status */
typedef struct _Ifx_SPU_SMSTAT_Bits
{
    Ifx_UReg_32Bit SMSTAT:6;          /**< \brief [5:0] Safety Mechanism Status (rh) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit SMSCLR:1;          /**< \brief [8:8] Clear Safety Mechanism Status (w) */
    Ifx_UReg_32Bit reserved_9:7;      /**< \brief [15:9] \internal Reserved */
    Ifx_UReg_32Bit SMCTRLSTS:1;       /**< \brief [16:16] Safety Machanism Control Status (rh) */
    Ifx_UReg_32Bit SMCTRLCLR:1;       /**< \brief [17:17] Clear SMCTRL Status Flag (w) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_SPU_SMSTAT_Bits;

/** \brief Safety Mechanism Control Functions (User) */
typedef struct _Ifx_SPU_SMUSER_Bits
{
    Ifx_UReg_32Bit CINIT:2;           /**< \brief [1:0] Monitor CRC Unit Initialise (rw) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit RIFCRCTST:2;       /**< \brief [17:16] Test RIF CRC (rw) */
    Ifx_UReg_32Bit BPCRCTST:2;        /**< \brief [19:18] Test Bypass CRC (rw) */
    Ifx_UReg_32Bit RMCTRLTST:2;       /**< \brief [21:20] Test Radar Memory Control (rw) */
    Ifx_UReg_32Bit RDECCTST:2;        /**< \brief [23:22] Test EMEM Read Data ECC (rw) */
    Ifx_UReg_32Bit RMTAERRTST:2;      /**< \brief [25:24] Test Radar Memory Access Address Error (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SPU_SMUSER_Bits;

/** \brief Status and Reporting */
typedef struct _Ifx_SPU_STAT_Bits
{
    Ifx_UReg_32Bit ERRSTS:1;          /**< \brief [0:0] Error Status (rw) */
    Ifx_UReg_32Bit ERRCLR:1;          /**< \brief [1:1] Error Clear (w) */
    Ifx_UReg_32Bit ERRMSK:6;          /**< \brief [7:2] Error Mask (rw) */
    Ifx_UReg_32Bit INTSTS:1;          /**< \brief [8:8] Interrupt Status (rw) */
    Ifx_UReg_32Bit INTCLR:1;          /**< \brief [9:9] Interrupt Clear (w) */
    Ifx_UReg_32Bit INTMSK:6;          /**< \brief [15:10] Interrupt Mask (rw) */
    Ifx_UReg_32Bit OVRRN:3;           /**< \brief [18:16] Overrun (rwh) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit ERRTRG:6;          /**< \brief [25:20] Interrupt Trigger (rh) */
    Ifx_UReg_32Bit INTTRG:6;          /**< \brief [31:26] Interrupt Trigger (rh) */
} Ifx_SPU_STAT_Bits;

/** \brief Output Buffer Memory Write Count */
typedef struct _Ifx_SPU_ULDRCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SPU_ULDRCNT_Bits;

/** \brief User OCDS Trace Control */
typedef struct _Ifx_SPU_USROTC_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit TRSCTRL:8;         /**< \brief [23:16] Trace Control (rwh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_SPU_USROTC_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_spu_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_ACCEN1;

/** \brief Spare Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ACFG2_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_ACFG2;

/** \brief Antenna Offset   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_ANTOFST_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BE_ANTOFST;

/** \brief CFAR Module Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_CFARCTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_BE_CFARCTRL;

/** \brief Loader Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_LDR_CONF_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_BE_LDR_CONF;

/** \brief Loader Configuration Extended   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_LDR_CONF2_Bits B;      /**< \brief Bitfield access */
} Ifx_SPU_BE_LDR_CONF2;

/** \brief NCI Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_NCICTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BE_NCICTRL;

/** \brief Output Data Processor Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_ODP_CONF_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_BE_ODP_CONF;

/** \brief Power Information Channel Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_PWRCTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BE_PWRCTRL;

/** \brief Power Summation   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_PWRSUM_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_BE_PWRSUM;

/** \brief Sideband Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_SBCTRL_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_BE_SBCTRL;

/** \brief Summation Unit Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_SUMCTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BE_SUMCTRL;

/** \brief Spare Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_UNLDR_ACFG_Bits B;     /**< \brief Bitfield access */
} Ifx_SPU_BE_UNLDR_ACFG;

/** \brief Unloader Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_UNLDR_CONF_Bits B;     /**< \brief Bitfield access */
} Ifx_SPU_BE_UNLDR_CONF;

/** \brief Unloader Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_UNLDR_CONF2_Bits B;    /**< \brief Bitfield access */
} Ifx_SPU_BE_UNLDR_CONF2;

/** \brief Bin Rejection Unit Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BINREJCTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BINREJCTRL;

/** \brief Bin Rejection Mask   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BIN_REJ_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_BIN_REJ;

/** \brief Bin Rejection Unit Load Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BRCNT_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_BRCNT;

/** \brief CFAR Unit Load Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CFARCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_CFARCNT;

/** \brief CFAR Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CFAR_CFG1_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_CFAR_CFG1;

/** \brief CFAR Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CFAR_CFG2_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_CFAR_CFG2;

/** \brief CFAR Configuration 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CFAR_CFG3_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_CFAR_CFG3;

/** \brief Clock Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CLC_Bits B;               /**< \brief Bitfield access */
} Ifx_SPU_CLC;

/** \brief Safety Counter Clear   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CNTCLR_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_CNTCLR;

/** \brief Monitor CRC Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CRC_CTRL_Bits B;          /**< \brief Bitfield access */
} Ifx_SPU_CRC_CTRL;

/** \brief Monitor CRC Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CRC_DATA_Bits B;          /**< \brief Bitfield access */
} Ifx_SPU_CRC_DATA;

/** \brief SPU Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CTRL_Bits B;              /**< \brief Bitfield access */
} Ifx_SPU_CTRL;

/** \brief Double Pass Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_DPASS_CONF_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_DPASS_CONF;

/** \brief FFT Unload Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_FFTRCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_FFTRCNT;

/** \brief FFT Load Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_FFTWCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_FFTWCNT;

/** \brief Input Buffer Memory Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_IBMCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_IBMCNT;

/** \brief Input DMA Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_IDMCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_IDMCNT;

/** \brief Input DMA Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_CONF_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_ID_CONF;

/** \brief Input DMA Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_CONF2_Bits B;          /**< \brief Bitfield access */
} Ifx_SPU_ID_CONF2;

/** \brief Spare Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_ACFG0_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_ACFG0;

/** \brief Spare Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_ACFG1_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_ACFG1;

/** \brief Bin Offset Address Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_BLO_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_BLO;

/** \brief Bin Loop Repeat   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_BLR_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_BLR;

/** \brief Input DMA Configuration: Radar Memory   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_CONF_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_CONF;

/** \brief Inner Loop Address Offset   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_ILO_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_ILO;

/** \brief Inner and Outer Loop Repeat   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_IOLR_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_IOLR;

/** \brief Outer Loop Address Offset   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_OLO_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_OLO;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_KRST0_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_KRST1_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_KRST1;

/** \brief Kernel Reset Clear   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_KRSTCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_KRSTCLR;

/** \brief Local Maximum Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_LCLMAX_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_LCLMAX;

/** \brief Input Buffer Memory Read Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_LDRCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_LDRCNT;

/** \brief Magnitude Approximation Constants   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MAGAPPROX_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_MAGAPPROX;

/** \brief Bin Rejection Unit Tracking   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MD_BINCOUNT_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_MD_BINCOUNT;

/** \brief Bin Acceptance  Mask   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MD_MASK_ACCEPT_Bits B;    /**< \brief Bitfield access */
} Ifx_SPU_MD_MASK_ACCEPT;

/** \brief Dataset Metadata   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MD_METADATA_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_MD_METADATA;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MODID_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_MODID;

/** \brief SPU Monitor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MONITOR_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_MONITOR;

/** \brief NCI Antennae Scaling Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_NCI_SCALAR0_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_NCI_SCALAR0;

/** \brief NCI Antennae Scaling Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_NCI_SCALAR1_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_NCI_SCALAR1;

/** \brief NCI Antennae Scaling Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_NCI_SCALAR2_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_NCI_SCALAR2;

/** \brief NCI Antennae Scaling Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_NCI_SCALAR3_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_NCI_SCALAR3;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_OCS_Bits B;               /**< \brief Bitfield access */
} Ifx_SPU_OCS;

/** \brief OCDS Debug Access Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ODA_Bits B;               /**< \brief Bitfield access */
} Ifx_SPU_ODA;

/** \brief Output DMA Port Write Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ODMACNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_ODMACNT;

/** \brief Output Buffer Memory Read Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ODMCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_ODMCNT;

/** \brief Partial-Acquisition Counter   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_PACTR_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_PACTR;

/** \brief Register CRC   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_REGCRC_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_REGCRC;

/** \brief Scalar Addition Operand   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_SCALARADD_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_SCALARADD;

/** \brief Scalar Multiplication Operand   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_SCALARMULT_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_SCALARMULT;

/** \brief Safety Mechanism Control Functions   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_SMCTRL_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_SMCTRL;

/** \brief Safety Mechanism Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_SMSTAT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_SMSTAT;

/** \brief Safety Mechanism Control Functions (User)   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_SMUSER_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_SMUSER;

/** \brief Status and Reporting   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_STAT_Bits B;              /**< \brief Bitfield access */
} Ifx_SPU_STAT;

/** \brief Output Buffer Memory Write Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ULDRCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_ULDRCNT;

/** \brief User OCDS Trace Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_USROTC_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_USROTC;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Spu_ID_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief ID object */
typedef volatile struct _Ifx_SPU_ID
{
       Ifx_SPU_ID_CONF                     CONF;                   /**< \brief 0, Input DMA Configuration*/
       Ifx_SPU_ID_CONF2                    CONF2;                  /**< \brief 4, Input DMA Configuration 2*/
       Ifx_SPU_ID_RM_CONF                  RM_CONF;                /**< \brief 8, Input DMA Configuration: Radar Memory*/
       Ifx_SPU_ID_RM_ILO                   RM_ILO;                 /**< \brief C, Inner Loop Address Offset*/
       Ifx_SPU_ID_RM_OLO                   RM_OLO;                 /**< \brief 10, Outer Loop Address Offset*/
       Ifx_SPU_ID_RM_BLO                   RM_BLO;                 /**< \brief 14, Bin Offset Address Configuration*/
       Ifx_SPU_ID_RM_IOLR                  RM_IOLR;                /**< \brief 18, Inner and Outer Loop Repeat*/
       Ifx_SPU_ID_RM_BLR                   RM_BLR;                 /**< \brief 1C, Bin Loop Repeat*/
       Ifx_SPU_ID_RM_ACFG0                 RM_ACFG0;               /**< \brief 20, Spare Configuration Register*/
       Ifx_SPU_ID_RM_ACFG1                 RM_ACFG1;               /**< \brief 24, Spare Configuration Register*/
} Ifx_SPU_ID;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Spu_BE_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief BE object */
typedef volatile struct _Ifx_SPU_BE
{
       Ifx_SPU_BE_LDR_CONF                 LDR_CONF;               /**< \brief 0, Loader Configuration*/
       Ifx_SPU_BE_LDR_CONF2                LDR_CONF2;              /**< \brief 4, Loader Configuration Extended*/
       Ifx_SPU_BE_ANTOFST                  ANTOFST[4];             /**< \brief 8, Antenna Offset*/
       Ifx_SPU_BE_UNLDR_CONF               UNLDR_CONF;             /**< \brief 18, Unloader Configuration*/
       Ifx_SPU_BE_UNLDR_CONF2              UNLDR_CONF2;            /**< \brief 1C, Unloader Configuration 2*/
       Ifx_SPU_BE_UNLDR_ACFG               UNLDR_ACFG;             /**< \brief 20, Spare Configuration Register*/
       Ifx_SPU_BE_ODP_CONF                 ODP_CONF;               /**< \brief 24, Output Data Processor Configuration*/
       Ifx_SPU_BE_NCICTRL                  NCICTRL;                /**< \brief 28, NCI Control*/
       Ifx_SPU_BE_SUMCTRL                  SUMCTRL;                /**< \brief 2C, Summation Unit Control*/
       Ifx_SPU_BE_PWRSUM                   PWRSUM;                 /**< \brief 30, Power Summation*/
       Ifx_SPU_BE_PWRCTRL                  PWRCTRL;                /**< \brief 34, Power Information Channel Control*/
       Ifx_SPU_BE_CFARCTRL                 CFARCTRL;               /**< \brief 38, CFAR Module Control*/
       Ifx_SPU_BE_SBCTRL                   SBCTRL;                 /**< \brief 3C, Sideband Control*/
} Ifx_SPU_BE;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Spu_NCI_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief NCI object */
typedef volatile struct _Ifx_SPU_NCI
{
       Ifx_SPU_NCI_SCALAR0                 SCALAR0;                /**< \brief 0, NCI Antennae Scaling Factor*/
       Ifx_SPU_NCI_SCALAR1                 SCALAR1;                /**< \brief 4, NCI Antennae Scaling Factor*/
       Ifx_SPU_NCI_SCALAR2                 SCALAR2;                /**< \brief 8, NCI Antennae Scaling Factor*/
       Ifx_SPU_NCI_SCALAR3                 SCALAR3;                /**< \brief C, NCI Antennae Scaling Factor*/
} Ifx_SPU_NCI;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Spu_CFAR_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CFAR object */
typedef volatile struct _Ifx_SPU_CFAR
{
       Ifx_SPU_CFAR_CFG1                   CFG1;                   /**< \brief 0, CFAR Configuration*/
       Ifx_SPU_CFAR_CFG2                   CFG2;                   /**< \brief 4, CFAR Configuration 2*/
       Ifx_SPU_CFAR_CFG3                   CFG3;                   /**< \brief 8, CFAR Configuration 3*/
} Ifx_SPU_CFAR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Spu_MD_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MD object */
typedef volatile struct _Ifx_SPU_MD
{
       Ifx_SPU_MD_METADATA                 METADATA;               /**< \brief 0, Dataset Metadata*/
       Ifx_SPU_MD_BINCOUNT                 BINCOUNT;               /**< \brief 4, Bin Rejection Unit Tracking*/
       Ifx_SPU_MD_MASK_ACCEPT              MASK_ACCEPT[32];        /**< \brief 8, Bin Acceptance  Mask*/
} Ifx_SPU_MD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Spu_CRC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CRC object */
typedef volatile struct _Ifx_SPU_CRC
{
       Ifx_SPU_CRC_DATA                    DATA[86];               /**< \brief 0, Monitor CRC Register*/
       Ifx_UReg_8Bit                       reserved_158[32];       /**< \brief 158, \internal Reserved */
       Ifx_SPU_CRC_CTRL                    CTRL[25];               /**< \brief 178, Monitor CRC Register*/
} Ifx_SPU_CRC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Spu_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief SPU object */
typedef volatile struct _Ifx_SPU
{
       Ifx_SPU_CLC                         CLC;                    /**< \brief 0, Clock Control*/
       Ifx_SPU_MODID                       MODID;                  /**< \brief 4, Module Identification Register*/
       Ifx_SPU_STAT                        STAT;                   /**< \brief 8, Status and Reporting*/
       Ifx_UReg_8Bit                       reserved_C[20];         /**< \brief C, \internal Reserved */
       Ifx_UReg_8Bit                       reserved_20[16];        /**< \brief 20, \internal Reserved */
       Ifx_SPU_ID                          ID;                     /**< \brief 30, Spare Configuration Register*/
       Ifx_SPU_PACTR                       PACTR;                  /**< \brief 58, Partial-Acquisition Counter*/
       Ifx_SPU_DPASS_CONF                  DPASS_CONF;             /**< \brief 5C, Double Pass Configuration*/
       Ifx_SPU_BE                          BE[2];                  /**< \brief 60, Sideband Control*/
       Ifx_SPU_BIN_REJ                     BIN_REJ[64];            /**< \brief E0, Bin Rejection Mask*/
       Ifx_SPU_MAGAPPROX                   MAGAPPROX;              /**< \brief 1E0, Magnitude Approximation Constants*/
       Ifx_SPU_NCI                         NCI;                    /**< \brief 1E4, NCI Antennae Scaling Factor*/
       Ifx_SPU_CFAR                        CFAR[1];                /**< \brief 1F4, CFAR Configuration 3*/
       Ifx_SPU_SCALARADD                   SCALARADD;              /**< \brief 200, Scalar Addition Operand*/
       Ifx_SPU_SCALARMULT                  SCALARMULT;             /**< \brief 204, Scalar Multiplication Operand*/
       Ifx_SPU_BINREJCTRL                  BINREJCTRL;             /**< \brief 208, Bin Rejection Unit Control*/
       Ifx_SPU_LCLMAX                      LCLMAX;                 /**< \brief 20C, Local Maximum Control*/
       Ifx_SPU_ACFG2                       ACFG2;                  /**< \brief 210, Spare Configuration Register*/
       Ifx_UReg_8Bit                       reserved_214[4];        /**< \brief 214, \internal Reserved */
       Ifx_SPU_REGCRC                      REGCRC;                 /**< \brief 218, Register CRC*/
       Ifx_SPU_CTRL                        CTRL;                   /**< \brief 21C, SPU Control*/
       Ifx_SPU_MD                          MD[2];                  /**< \brief 220, Bin Acceptance Mask*/
       Ifx_SPU_IDMCNT                      IDMCNT;                 /**< \brief 330, Input DMA Count*/
       Ifx_SPU_IBMCNT                      IBMCNT;                 /**< \brief 334, Input Buffer Memory Count*/
       Ifx_SPU_LDRCNT                      LDRCNT;                 /**< \brief 338, Input Buffer Memory Read Count*/
       Ifx_SPU_FFTWCNT                     FFTWCNT;                /**< \brief 33C, FFT Load Count*/
       Ifx_SPU_FFTRCNT                     FFTRCNT;                /**< \brief 340, FFT Unload Count*/
       Ifx_SPU_ULDRCNT                     ULDRCNT;                /**< \brief 344, Output Buffer Memory Write Count*/
       Ifx_SPU_ODMCNT                      ODMCNT;                 /**< \brief 348, Output Buffer Memory Read Count*/
       Ifx_SPU_BRCNT                       BRCNT;                  /**< \brief 34C, Bin Rejection Unit Load Count*/
       Ifx_SPU_CFARCNT                     CFARCNT;                /**< \brief 350, CFAR Unit Load Count*/
       Ifx_SPU_ODMACNT                     ODMACNT[8];             /**< \brief 354, Output DMA Port Write Count*/
       Ifx_SPU_CNTCLR                      CNTCLR;                 /**< \brief 374, Safety Counter Clear*/
       Ifx_SPU_MONITOR                     MONITOR;                /**< \brief 378, SPU Monitor*/
       Ifx_SPU_SMCTRL                      SMCTRL;                 /**< \brief 37C, Safety Mechanism Control Functions*/
       Ifx_SPU_SMSTAT                      SMSTAT;                 /**< \brief 380, Safety Mechanism Status*/
       Ifx_SPU_SMUSER                      SMUSER;                 /**< \brief 384, Safety Mechanism Control Functions (User)*/
       Ifx_SPU_CRC                         CRC;                    /**< \brief 388, Control CRC*/
       Ifx_UReg_8Bit                       reserved_564[636];      /**< \brief 564, \internal Reserved */
       Ifx_SPU_USROTC                      USROTC;                 /**< \brief 7E0, User OCDS Trace Control*/
       Ifx_SPU_ACCEN0                      ACCEN0;                 /**< \brief 7E4, Access Enable Register 0*/
       Ifx_SPU_ACCEN1                      ACCEN1;                 /**< \brief 7E8, Access Enable Register 1*/
       Ifx_SPU_OCS                         OCS;                    /**< \brief 7EC, OCDS Control and Status*/
       Ifx_SPU_ODA                         ODA;                    /**< \brief 7F0, OCDS Debug Access Register*/
       Ifx_SPU_KRST0                       KRST0;                  /**< \brief 7F4, Kernel Reset Register 0*/
       Ifx_SPU_KRST1                       KRST1;                  /**< \brief 7F8, Kernel Reset Register 1*/
       Ifx_SPU_KRSTCLR                     KRSTCLR;                /**< \brief 7FC, Kernel Reset Clear*/
} Ifx_SPU;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXSPU_REGDEF_H */
