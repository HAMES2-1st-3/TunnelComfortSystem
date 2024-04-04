/**
 * \file IfxEvadc_regdef.h
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
 * \defgroup IfxSfr_Evadc_Registers Evadc Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Evadc_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Evadc_Registers
 * 
 * \defgroup IfxSfr_Evadc_Registers_union Register unions
 * \ingroup IfxSfr_Evadc_Registers
 * 
 * \defgroup IfxSfr_Evadc_Registers_struct Memory map
 * \ingroup IfxSfr_Evadc_Registers
 */
#ifndef IFXEVADC_REGDEF_H
#define IFXEVADC_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Evadc_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_EVADC_ACCEN0_Bits
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
} Ifx_EVADC_ACCEN0_Bits;

/** \brief Access Protection Register 0 */
typedef struct _Ifx_EVADC_ACCPROT0_Bits
{
    Ifx_UReg_32Bit APCP:4;            /**< \brief [3:0] Access Protection Channel Control, Primary Groups (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit APCS:4;            /**< \brief [11:8] Access Protection Channel Control, Secondary Groups (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit APIP:4;            /**< \brief [19:16] Access Protection Initialization, Primary Groups (rw) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit APIS:4;            /**< \brief [27:24] Access Protection Initialization, Secondary Groups (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_EVADC_ACCPROT0_Bits;

/** \brief Access Protection Register 1 */
typedef struct _Ifx_EVADC_ACCPROT1_Bits
{
    Ifx_UReg_32Bit APSP:4;            /**< \brief [3:0] Access Protection Service Request, Primary Groups (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit APSS:4;            /**< \brief [11:8] Access Protection Service Request, Secondary Groups (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit APRP:4;            /**< \brief [19:16] Access Protection Result Registers, Primary Groups (rw) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit APRS:4;            /**< \brief [27:24] Access Protection Result Registers, Secondary Groups (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_EVADC_ACCPROT1_Bits;

/** \brief Access Protection Register 2 */
typedef struct _Ifx_EVADC_ACCPROT2_Bits
{
    Ifx_UReg_32Bit APF:4;             /**< \brief [3:0] Access Protection Fast Compare Channels (rw) */
    Ifx_UReg_32Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
    Ifx_UReg_32Bit APGC:1;            /**< \brief [16:16] Access Protection Global Configuration - APGC (rw) */
    Ifx_UReg_32Bit APEM:1;            /**< \brief [17:17] Access Protection External Multiplexer - APEM (rw) */
    Ifx_UReg_32Bit APTF:1;            /**< \brief [18:18] Access Protection Test Function - APTF (rw) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_EVADC_ACCPROT2_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_EVADC_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_EVADC_CLC_Bits;

/** \brief External Multiplexer Interface Select Register */
typedef struct _Ifx_EVADC_EMUXSEL_Bits
{
    Ifx_UReg_32Bit EMUXGRP0:4;        /**< \brief [3:0] External Multiplexer Group for Interface 0 (rw) */
    Ifx_UReg_32Bit EMUXGRP1:4;        /**< \brief [7:4] External Multiplexer Group for Interface 1 (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_EVADC_EMUXSEL_Bits;

/** \brief Boundary Flag Register, FC Channel ${x} */
typedef struct _Ifx_EVADC_FC_FCBFL_Bits
{
    Ifx_UReg_32Bit BFL:1;             /**< \brief [0:0] Boundary Flag - BFL (rh) */
    Ifx_UReg_32Bit reserved_1:3;      /**< \brief [3:1] \internal Reserved */
    Ifx_UReg_32Bit BFA:1;             /**< \brief [4:4] Boundary Flag Activation Select - BFA (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit BFI:1;             /**< \brief [8:8] Boundary Flag Inversion Control - BFI (rw) */
    Ifx_UReg_32Bit reserved_9:3;      /**< \brief [11:9] \internal Reserved */
    Ifx_UReg_32Bit BFS:2;             /**< \brief [13:12] Boundary Flag Software Control - BFS (w) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit BFM:1;             /**< \brief [16:16] Boundary Flag Mode Control - BFM (rw) */
    Ifx_UReg_32Bit BFV:1;             /**< \brief [17:17] Boundary Flag Value - BFV (rw) */
    Ifx_UReg_32Bit reserved_18:6;     /**< \brief [23:18] \internal Reserved */
    Ifx_UReg_32Bit BFLNP:4;           /**< \brief [27:24] Boundary Flag Node Pointer (rw) */
    Ifx_UReg_32Bit FCR:1;             /**< \brief [28:28] Fast Compare Result - FCR (rh) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit VF:1;              /**< \brief [31:31] Valid Flag - VF (rh) */
} Ifx_EVADC_FC_FCBFL_Bits;

/** \brief Fast Compare Control Register, FC Channel ${x} */
typedef struct _Ifx_EVADC_FC_FCCTRL_Bits
{
    Ifx_UReg_32Bit STCF:5;            /**< \brief [4:0] Sample Time Control for Fast Comparisons - STCF (rw) */
    Ifx_UReg_32Bit RPE:1;             /**< \brief [5:5] Reference Precharge Enable - RPE (rw) */
    Ifx_UReg_32Bit AIPF:2;            /**< \brief [7:6] Analog Input Precharge Enable for Fast Comparisons - AIPF (rw) */
    Ifx_UReg_32Bit CHEVMODE:2;        /**< \brief [9:8] Channel Event Mode - CHEVMODE (rw) */
    Ifx_UReg_32Bit DIVA:5;            /**< \brief [14:10] Divider Factor for the Analog Internal Clock - DIVA (rw) */
    Ifx_UReg_32Bit CPWC:1;            /**< \brief [15:15] Write Control for Control Parameters - CPWC (w) */
    Ifx_UReg_32Bit XTSEL:4;           /**< \brief [19:16] External Trigger Input Selection - XTSEL (rw) */
    Ifx_UReg_32Bit XTLVL:1;           /**< \brief [20:20] External Trigger Level - XTLVL (rh) */
    Ifx_UReg_32Bit XTMODE:2;          /**< \brief [22:21] Trigger Operating Mode - XTMODE (rw) */
    Ifx_UReg_32Bit XTPOL:1;           /**< \brief [23:23] External Trigger Polarity - XTPOL (rw) */
    Ifx_UReg_32Bit GTMODE:2;          /**< \brief [25:24] Gate Operating Mode - GTMODE (rw) */
    Ifx_UReg_32Bit FCCHNR:5;          /**< \brief [30:26] Fast Compare Channel: Cannel Number - FCCHNR (rw) */
    Ifx_UReg_32Bit XTWC:1;            /**< \brief [31:31] Write Control for Trigger/Gate Configuration - XTWC (w) */
} Ifx_EVADC_FC_FCCTRL_Bits;

/** \brief Fast Comp. Hysteresis Register, FC Channel ${x} */
typedef struct _Ifx_EVADC_FC_FCHYST_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit DELTAMINUS:10;     /**< \brief [11:2] Lower Delta Value - DELTAMINUS (rw) */
    Ifx_UReg_32Bit reserved_12:6;     /**< \brief [17:12] \internal Reserved */
    Ifx_UReg_32Bit DELTAPLUS:10;      /**< \brief [27:18] Upper Delta Value - DELTAPLUS (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_EVADC_FC_FCHYST_Bits;

/** \brief Fast Compare Mode Register, FC Channel ${x} */
typedef struct _Ifx_EVADC_FC_FCM_Bits
{
    Ifx_UReg_32Bit RUNCOMP:2;         /**< \brief [1:0] Run Control for Compare Channel - RUNCOMP (rw) */
    Ifx_UReg_32Bit RUNRAMP:2;         /**< \brief [3:2] Run Control for Ramp - RUNRAMP (rw) */
    Ifx_UReg_32Bit FCRDIR:1;          /**< \brief [4:4] Fast Compare Ramp Direction - FCRDIR (rw) */
    Ifx_UReg_32Bit ANON:1;            /**< \brief [5:5] Analog Converter Control - ANON (rw) */
    Ifx_UReg_32Bit ACSD:2;            /**< \brief [7:6] Analog Clock Synchronization Delay - ACSD (rw) */
    Ifx_UReg_32Bit FCTRIV:8;          /**< \brief [15:8] Fast Compare Trigger Interval - FCTRIV (rw) */
    Ifx_UReg_32Bit SRG:2;             /**< \brief [17:16] Service Request Generation - SRG (rw) */
    Ifx_UReg_32Bit AUE:2;             /**< \brief [19:18] Automatic Update Enable - AUE (rw) */
    Ifx_UReg_32Bit SSE:1;             /**< \brief [20:20] Sample Synchronization Enable - SSE (rw) */
    Ifx_UReg_32Bit FCMWC:1;           /**< \brief [21:21] Write Control for Fast Compare Mode Configuration - FCMWC (w) */
    Ifx_UReg_32Bit FCREF:10;          /**< \brief [31:22] Fast Compare Reference Value - FCREF (rwh) */
} Ifx_EVADC_FC_FCM_Bits;

/** \brief Fast Compare Ramp Register 0, FC Channel ${x} */
typedef struct _Ifx_EVADC_FC_FCRAMP0_Bits
{
    Ifx_UReg_32Bit FCRCOMPA:10;       /**< \brief [9:0] Fast Compare Ramp Compare Value A - FCRCOMPA (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit FCRSTEP:8;         /**< \brief [23:16] Fast Compare Ramp Step Width - FCRSTEP (rw) */
    Ifx_UReg_32Bit reserved_24:7;     /**< \brief [30:24] \internal Reserved */
    Ifx_UReg_32Bit FSWC:1;            /**< \brief [31:31] Write Control for Fast Compare Stepwidth - FSWC (w) */
} Ifx_EVADC_FC_FCRAMP0_Bits;

/** \brief Fast Compare Ramp Register 1, FC Channel ${x} */
typedef struct _Ifx_EVADC_FC_FCRAMP1_Bits
{
    Ifx_UReg_32Bit FCRCOMPB:10;       /**< \brief [9:0] Fast Compare Ramp Compare Value B - FCRCOMPB (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_EVADC_FC_FCRAMP1_Bits;

/** \brief Global Configuration Register */
typedef struct _Ifx_EVADC_GLOBCFG_Bits
{
    Ifx_UReg_32Bit reserved_0:12;     /**< \brief [11:0] \internal Reserved */
    Ifx_UReg_32Bit USC:1;             /**< \brief [12:12] Unsynchronized Clock Generation - USC (rw) */
    Ifx_UReg_32Bit SUPLEV:2;          /**< \brief [14:13] Supply Voltage Level - SUPLEV (rw) */
    Ifx_UReg_32Bit CPWC:1;            /**< \brief [15:15] Write Control for Control Parameters - CPWC (w) */
    Ifx_UReg_32Bit reserved_16:15;    /**< \brief [30:16] \internal Reserved */
    Ifx_UReg_32Bit SUCAL:1;           /**< \brief [31:31] Start-Up Calibration - SUCAL (w) */
} Ifx_EVADC_GLOBCFG_Bits;

/** \brief Global Boundary Select Register */
typedef struct _Ifx_EVADC_GLOB_BOUND_Bits
{
    Ifx_UReg_32Bit BOUNDARY0:12;      /**< \brief [11:0] Boundary Value 0 for Limit Checking - BOUNDARY0 (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit BOUNDARY1:12;      /**< \brief [27:16] Boundary Value 1 for Limit Checking - BOUNDARY1 (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_EVADC_GLOB_BOUND_Bits;

/** \brief Global Event Flag Register */
typedef struct _Ifx_EVADC_GLOB_EFLAG_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit REVGLB:1;          /**< \brief [8:8] Global Result Event - REVGLB (rwh) */
    Ifx_UReg_32Bit reserved_9:15;     /**< \brief [23:9] \internal Reserved */
    Ifx_UReg_32Bit REVGLBCLR:1;       /**< \brief [24:24] Clear Global Result Event - REVGLBCLR (w) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_EVADC_GLOB_EFLAG_Bits;

/** \brief Global Event Node Pointer Register */
typedef struct _Ifx_EVADC_GLOB_EVNP_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit REV0NP:4;          /**< \brief [19:16] Service Request Node Pointer Global Result (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_EVADC_GLOB_EVNP_Bits;

/** \brief Input Class Register ${i}, Global */
typedef struct _Ifx_EVADC_GLOB_ICLASS_Bits
{
    Ifx_UReg_32Bit STCS:5;            /**< \brief [4:0] Sample Time Control for Standard Conversions - STCS (rw) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit AIPS:2;            /**< \brief [7:6] Analog Input Precharge Control for Standard Conversions - AIPS (rw) */
    Ifx_UReg_32Bit CMS:2;             /**< \brief [9:8] Conversion Mode for Standard Conversions - CMS (rw) */
    Ifx_UReg_32Bit SESPS:1;           /**< \brief [10:10] Spread Early Sample Point for Standard Conversions - SESPS (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit STCE:5;            /**< \brief [20:16] Sample Time Control for EMUX Conversions - STCE (rw) */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit AIPE:2;            /**< \brief [23:22] Analog Input Precharge Control for EMUX Conversions - AIPE (rw) */
    Ifx_UReg_32Bit CME:2;             /**< \brief [25:24] Conversion Mode for EMUX Conversions - CME (rw) */
    Ifx_UReg_32Bit SESPE:1;           /**< \brief [26:26] Spread Early Sample Point for EMUX Conversions - SESPE (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_EVADC_GLOB_ICLASS_Bits;

/** \brief Global Result Control Register */
typedef struct _Ifx_EVADC_GLOB_RCR_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit DRCTR:4;           /**< \brief [19:16] Data Reduction Control - DRCTR (rw) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit WFR:1;             /**< \brief [24:24] Wait-for-Read Mode Enable - WFR (rw) */
    Ifx_UReg_32Bit reserved_25:6;     /**< \brief [30:25] \internal Reserved */
    Ifx_UReg_32Bit SRGEN:1;           /**< \brief [31:31] Service Request Generation Enable - SRGEN (rw) */
} Ifx_EVADC_GLOB_RCR_Bits;

/** \brief Global Result Register */
typedef struct _Ifx_EVADC_GLOB_RES_Bits
{
    Ifx_UReg_32Bit RESULT:16;         /**< \brief [15:0] Result of most recent conversion - RESULT (rwh) */
    Ifx_UReg_32Bit GNR:4;             /**< \brief [19:16] Group Number - GNR (rh) */
    Ifx_UReg_32Bit CHNR:5;            /**< \brief [24:20] Channel Number - CHNR (rh) */
    Ifx_UReg_32Bit EMUX:3;            /**< \brief [27:25] External Multiplexer Setting - EMUX (rh) */
    Ifx_UReg_32Bit CRS:2;             /**< \brief [29:28] Converted Request Source - CRS (rh) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit VF:1;              /**< \brief [31:31] Valid Flag - VF (rwh) */
} Ifx_EVADC_GLOB_RES_Bits;

/** \brief Global Result Register, Debug */
typedef struct _Ifx_EVADC_GLOB_RESD_Bits
{
    Ifx_UReg_32Bit RESULT:16;         /**< \brief [15:0] Result of most recent conversion - RESULT (rh) */
    Ifx_UReg_32Bit GNR:4;             /**< \brief [19:16] Group Number - GNR (rh) */
    Ifx_UReg_32Bit CHNR:5;            /**< \brief [24:20] Channel Number - CHNR (rh) */
    Ifx_UReg_32Bit EMUX:3;            /**< \brief [27:25] External Multiplexer Setting - EMUX (rh) */
    Ifx_UReg_32Bit CRS:2;             /**< \brief [29:28] Converted Request Source - CRS (rh) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit VF:1;              /**< \brief [31:31] Valid Flag - VF (rh) */
} Ifx_EVADC_GLOB_RESD_Bits;

/** \brief Global Test Enable Register */
typedef struct _Ifx_EVADC_GLOB_TE_Bits
{
    Ifx_UReg_32Bit TFEP:4;            /**< \brief [3:0] Test Function Enable, Primary Groups (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit TFES:4;            /**< \brief [11:8] Test Function Enable, Secondary Groups (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_EVADC_GLOB_TE_Bits;

/** \brief Global Test Functions Register */
typedef struct _Ifx_EVADC_GLOB_TF_Bits
{
    Ifx_UReg_32Bit CDCH:4;            /**< \brief [3:0] Conversion Diagnostics Channel - CDCH (rw) */
    Ifx_UReg_32Bit CDGR:4;            /**< \brief [7:4] Conversion Diagnostics Group - CDGR (rw) */
    Ifx_UReg_32Bit CDEN:1;            /**< \brief [8:8] Converter Diagnostics Enable - CDEN (rw) */
    Ifx_UReg_32Bit CDSEL:2;           /**< \brief [10:9] Converter Diagnostics Pull-Devices Select - CDSEL (rw) */
    Ifx_UReg_32Bit reserved_11:4;     /**< \brief [14:11] \internal Reserved */
    Ifx_UReg_32Bit CDWC:1;            /**< \brief [15:15] Write Control for Conversion Diagnostics - CDWC (w) */
    Ifx_UReg_32Bit PDD:1;             /**< \brief [16:16] Pull-Down Diagnostics Enable - PDD (rw) */
    Ifx_UReg_32Bit MDPD:1;            /**< \brief [17:17] Multiplexer Diagnostics Pull-Down-Devices Enable (rw) */
    Ifx_UReg_32Bit MDPU:1;            /**< \brief [18:18] Multiplexer Diagnostics Pull-Up-Devices Enable (rw) */
    Ifx_UReg_32Bit reserved_19:4;     /**< \brief [22:19] \internal Reserved */
    Ifx_UReg_32Bit MDWC:1;            /**< \brief [23:23] Write Control for Multiplexer Diagnostics - MDWC (w) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_EVADC_GLOB_TF_Bits;

/** \brief Alias Register, Group ${x} */
typedef struct _Ifx_EVADC_G_ALIAS_Bits
{
    Ifx_UReg_32Bit ALIAS0:5;          /**< \brief [4:0] Alias Value for CH0 Conversion Requests - ALIAS0 (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit ALIAS1:5;          /**< \brief [12:8] Alias Value for CH1 Conversion Requests - ALIAS1 (rw) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_EVADC_G_ALIAS_Bits;

/** \brief Analog Fct. Config. Register, Group ${x} */
typedef struct _Ifx_EVADC_G_ANCFG_Bits
{
    Ifx_UReg_32Bit IPE:1;             /**< \brief [0:0] Idle Precharge Enable - IPE (rw) */
    Ifx_UReg_32Bit BE:1;              /**< \brief [1:1] Input Buffer Enable - BE (rw) */
    Ifx_UReg_32Bit RPE:1;             /**< \brief [2:2] Reference Precharge Enable - RPE (rw) */
    Ifx_UReg_32Bit RPC:1;             /**< \brief [3:3] Reference Precharge Control - RPC (rw) */
    Ifx_UReg_32Bit CALSTC:2;          /**< \brief [5:4] Calibration Sample Time Control - CALSTC (rw) */
    Ifx_UReg_32Bit DPCAL:1;           /**< \brief [6:6] Disable Post-Calibration - DPCAL (rw) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit ACSD:3;            /**< \brief [18:16] Analog Clock Synchronization Delay - ACSD (rw) */
    Ifx_UReg_32Bit SSE:1;             /**< \brief [19:19] Sample Synchronization Enable - SSE (rw) */
    Ifx_UReg_32Bit DIVA:5;            /**< \brief [24:20] Divider Factor for the Analog Internal Clock - DIVA (rw) */
    Ifx_UReg_32Bit DCMSB:1;           /**< \brief [25:25] Double Clock for the MSB Conversion - DCMSB (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_EVADC_G_ANCFG_Bits;

/** \brief Arbitration Config. Register, Group ${x} */
typedef struct _Ifx_EVADC_G_ARBCFG_Bits
{
    Ifx_UReg_32Bit ANONC:2;           /**< \brief [1:0] Analog Converter Control - ANONC (rw) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit ANONS:2;           /**< \brief [17:16] Analog Converter Control Status - ANONS (rh) */
    Ifx_UReg_32Bit CSRC:2;            /**< \brief [19:18] Currently Converted Request Source - CSRC (rh) */
    Ifx_UReg_32Bit CHNR:5;            /**< \brief [24:20] Channel Number - CHNR (rh) */
    Ifx_UReg_32Bit SYNRUN:1;          /**< \brief [25:25] Synchronous Conversion Running - SYNRUN (rh) */
    Ifx_UReg_32Bit reserved_26:2;     /**< \brief [27:26] \internal Reserved */
    Ifx_UReg_32Bit CAL:1;             /**< \brief [28:28] Start-Up Calibration Active Indication - CAL (rh) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit BUSY:1;            /**< \brief [30:30] Converter Busy Flag - BUSY (rh) */
    Ifx_UReg_32Bit SAMPLE:1;          /**< \brief [31:31] Sample Phase Flag - SAMPLE (rh) */
} Ifx_EVADC_G_ARBCFG_Bits;

/** \brief Arbitration Priority Register, Group ${x} */
typedef struct _Ifx_EVADC_G_ARBPR_Bits
{
    Ifx_UReg_32Bit PRIO0:2;           /**< \brief [1:0] Priority of Request Source i (rw) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit CSM0:1;            /**< \brief [3:3] Conversion Start Mode of Request Source 0 (rw) */
    Ifx_UReg_32Bit PRIO1:2;           /**< \brief [5:4] Priority of Request Source i (rw) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit CSM1:1;            /**< \brief [7:7] Conversion Start Mode of Request Source 1 (rw) */
    Ifx_UReg_32Bit PRIO2:2;           /**< \brief [9:8] Priority of Request Source i (rw) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit CSM2:1;            /**< \brief [11:11] Conversion Start Mode of Request Source 2 (rw) */
    Ifx_UReg_32Bit reserved_12:12;    /**< \brief [23:12] \internal Reserved */
    Ifx_UReg_32Bit ASEN0:1;           /**< \brief [24:24] Arbitration Source Input 0 Enable (rw) */
    Ifx_UReg_32Bit ASEN1:1;           /**< \brief [25:25] Arbitration Source Input 1 Enable (rw) */
    Ifx_UReg_32Bit ASEN2:1;           /**< \brief [26:26] Arbitration Source Input 2 Enable (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_EVADC_G_ARBPR_Bits;

/** \brief Boundary Select Register, Group ${x} */
typedef struct _Ifx_EVADC_G_BOUND_Bits
{
    Ifx_UReg_32Bit BOUNDARY0:12;      /**< \brief [11:0] Boundary Value 0 for Limit Checking - BOUNDARY0 (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit BOUNDARY1:12;      /**< \brief [27:16] Boundary Value 1 for Limit Checking - BOUNDARY1 (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_EVADC_G_BOUND_Bits;

/** \brief Channel Event Flag Clear Register, Group ${x} */
typedef struct _Ifx_EVADC_G_CEFCLR_Bits
{
    Ifx_UReg_32Bit CEV0:1;            /**< \brief [0:0] Clear Channel Event for Channel 0 - CEV0 (w) */
    Ifx_UReg_32Bit CEV1:1;            /**< \brief [1:1] Clear Channel Event for Channel 1 - CEV1 (w) */
    Ifx_UReg_32Bit CEV2:1;            /**< \brief [2:2] Clear Channel Event for Channel 2 - CEV2 (w) */
    Ifx_UReg_32Bit CEV3:1;            /**< \brief [3:3] Clear Channel Event for Channel 3 - CEV3 (w) */
    Ifx_UReg_32Bit CEV4:1;            /**< \brief [4:4] Clear Channel Event for Channel 4 - CEV4 (w) */
    Ifx_UReg_32Bit CEV5:1;            /**< \brief [5:5] Clear Channel Event for Channel 5 - CEV5 (w) */
    Ifx_UReg_32Bit CEV6:1;            /**< \brief [6:6] Clear Channel Event for Channel 6 - CEV6 (w) */
    Ifx_UReg_32Bit CEV7:1;            /**< \brief [7:7] Clear Channel Event for Channel 7 - CEV7 (w) */
    Ifx_UReg_32Bit CEV8:1;            /**< \brief [8:8] Clear Channel Event for Channel 8 - CEV8 (w) */
    Ifx_UReg_32Bit CEV9:1;            /**< \brief [9:9] Clear Channel Event for Channel 9 - CEV9 (w) */
    Ifx_UReg_32Bit CEV10:1;           /**< \brief [10:10] Clear Channel Event for Channel 10 - CEV10 (w) */
    Ifx_UReg_32Bit CEV11:1;           /**< \brief [11:11] Clear Channel Event for Channel 11 - CEV11 (w) */
    Ifx_UReg_32Bit CEV12:1;           /**< \brief [12:12] Clear Channel Event for Channel 12 - CEV12 (w) */
    Ifx_UReg_32Bit CEV13:1;           /**< \brief [13:13] Clear Channel Event for Channel 13 - CEV13 (w) */
    Ifx_UReg_32Bit CEV14:1;           /**< \brief [14:14] Clear Channel Event for Channel 14 - CEV14 (w) */
    Ifx_UReg_32Bit CEV15:1;           /**< \brief [15:15] Clear Channel Event for Channel 15 - CEV15 (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EVADC_G_CEFCLR_Bits;

/** \brief Channel Event Flag Register, Group ${x} */
typedef struct _Ifx_EVADC_G_CEFLAG_Bits
{
    Ifx_UReg_32Bit CEV0:1;            /**< \brief [0:0] Channel Event for Channel 0 (rwh) */
    Ifx_UReg_32Bit CEV1:1;            /**< \brief [1:1] Channel Event for Channel 1 (rwh) */
    Ifx_UReg_32Bit CEV2:1;            /**< \brief [2:2] Channel Event for Channel 2 (rwh) */
    Ifx_UReg_32Bit CEV3:1;            /**< \brief [3:3] Channel Event for Channel 3 (rwh) */
    Ifx_UReg_32Bit CEV4:1;            /**< \brief [4:4] Channel Event for Channel 4 (rwh) */
    Ifx_UReg_32Bit CEV5:1;            /**< \brief [5:5] Channel Event for Channel 5 (rwh) */
    Ifx_UReg_32Bit CEV6:1;            /**< \brief [6:6] Channel Event for Channel 6 (rwh) */
    Ifx_UReg_32Bit CEV7:1;            /**< \brief [7:7] Channel Event for Channel 7 (rwh) */
    Ifx_UReg_32Bit CEV8:1;            /**< \brief [8:8] Channel Event for Channel 8 (rwh) */
    Ifx_UReg_32Bit CEV9:1;            /**< \brief [9:9] Channel Event for Channel 9 (rwh) */
    Ifx_UReg_32Bit CEV10:1;           /**< \brief [10:10] Channel Event for Channel 10 (rwh) */
    Ifx_UReg_32Bit CEV11:1;           /**< \brief [11:11] Channel Event for Channel 11 (rwh) */
    Ifx_UReg_32Bit CEV12:1;           /**< \brief [12:12] Channel Event for Channel 12 (rwh) */
    Ifx_UReg_32Bit CEV13:1;           /**< \brief [13:13] Channel Event for Channel 13 (rwh) */
    Ifx_UReg_32Bit CEV14:1;           /**< \brief [14:14] Channel Event for Channel 14 (rwh) */
    Ifx_UReg_32Bit CEV15:1;           /**< \brief [15:15] Channel Event for Channel 15 (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EVADC_G_CEFLAG_Bits;

/** \brief Channel Event Node Pointer Reg. 0, Group ${x} */
typedef struct _Ifx_EVADC_G_CEVNP0_Bits
{
    Ifx_UReg_32Bit CEV0NP:4;          /**< \brief [3:0] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV1NP:4;          /**< \brief [7:4] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV2NP:4;          /**< \brief [11:8] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV3NP:4;          /**< \brief [15:12] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV4NP:4;          /**< \brief [19:16] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV5NP:4;          /**< \brief [23:20] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV6NP:4;          /**< \brief [27:24] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV7NP:4;          /**< \brief [31:28] Service Request Node Pointer Channel Event i (rw) */
} Ifx_EVADC_G_CEVNP0_Bits;

/** \brief Channel Event Node Pointer Reg. 1, Group ${x} */
typedef struct _Ifx_EVADC_G_CEVNP1_Bits
{
    Ifx_UReg_32Bit CEV8NP:4;          /**< \brief [3:0] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV9NP:4;          /**< \brief [7:4] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV10NP:4;         /**< \brief [11:8] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV11NP:4;         /**< \brief [15:12] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV12NP:4;         /**< \brief [19:16] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV13NP:4;         /**< \brief [23:20] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV14NP:4;         /**< \brief [27:24] Service Request Node Pointer Channel Event i (rw) */
    Ifx_UReg_32Bit CEV15NP:4;         /**< \brief [31:28] Service Request Node Pointer Channel Event i (rw) */
} Ifx_EVADC_G_CEVNP1_Bits;

/** \brief Group ${x}, Channel ${y} Control Register */
typedef struct _Ifx_EVADC_G_CHCTR_Bits
{
    Ifx_UReg_32Bit ICLSEL:2;          /**< \brief [1:0] Input Class Select - ICLSEL (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit BNDSELL:2;         /**< \brief [5:4] Lower Boundary Select - BNDSELL (rw) */
    Ifx_UReg_32Bit BNDSELU:2;         /**< \brief [7:6] Upper Boundary Select - BNDSELU (rw) */
    Ifx_UReg_32Bit CHEVMODE:2;        /**< \brief [9:8] Channel Event Mode - CHEVMODE (rw) */
    Ifx_UReg_32Bit SYNC:1;            /**< \brief [10:10] Synchronization Request - SYNC (rw) */
    Ifx_UReg_32Bit REFSEL:1;          /**< \brief [11:11] Reference Input Selection - REFSEL (rw) */
    Ifx_UReg_32Bit BNDSELX:4;         /**< \brief [15:12] BoundaryExtension - BNDSELX (rw) */
    Ifx_UReg_32Bit RESREG:4;          /**< \brief [19:16] Result Register - RESREG (rw) */
    Ifx_UReg_32Bit RESTGT:1;          /**< \brief [20:20] Result Target - RESTGT (rw) */
    Ifx_UReg_32Bit RESPOS:1;          /**< \brief [21:21] Result Position - RESPOS (rw) */
    Ifx_UReg_32Bit reserved_22:6;     /**< \brief [27:22] \internal Reserved */
    Ifx_UReg_32Bit BWDCH:2;           /**< \brief [29:28] Broken Wire Detection Channel - BWDCH (rw) */
    Ifx_UReg_32Bit BWDEN:1;           /**< \brief [30:30] Broken Wire Detection Enable - BWDEN (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_EVADC_G_CHCTR_Bits;

/** \brief Ext. Multiplexer Channel Select Reg., Group ${x} */
typedef struct _Ifx_EVADC_G_EMUXCS_Bits
{
    Ifx_UReg_32Bit EMUXCH:16;         /**< \brief [15:0] External Multiplexer Channel Select - EMUXCH (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EVADC_G_EMUXCS_Bits;

/** \brief External Multiplexer Control Reg., Group ${x} */
typedef struct _Ifx_EVADC_G_EMUXCTR_Bits
{
    Ifx_UReg_32Bit EMUXSET:3;         /**< \brief [2:0] External Multiplexer Start Selection - EMUXSET (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit EMUXMODE:3;        /**< \brief [6:4] External Multiplexer Mode - EMUXMODE (rw) */
    Ifx_UReg_32Bit reserved_7:5;      /**< \brief [11:7] \internal Reserved */
    Ifx_UReg_32Bit EMXCOD:1;          /**< \brief [12:12] External Multiplexer Coding Scheme - EMXCOD (rw) */
    Ifx_UReg_32Bit EMXST:1;           /**< \brief [13:13] External Multiplexer Sample Time Control - EMXST (rw) */
    Ifx_UReg_32Bit EMXCSS:1;          /**< \brief [14:14] External Multiplexer Channel Selection Style - EMXCSS (rw) */
    Ifx_UReg_32Bit EMXWC:1;           /**< \brief [15:15] Write Control for EMUX Configuration - EMXWC (w) */
    Ifx_UReg_32Bit EMUXACT:3;         /**< \brief [18:16] External Multiplexer Actual Selection - EMUXACT (rh) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit EMUXCCB:5;         /**< \brief [24:20] External Multiplexer Channel Selection for Block Mode - EMUXCCB (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_EVADC_G_EMUXCTR_Bits;

/** \brief Input Class Register ${i}, Group ${x} */
typedef struct _Ifx_EVADC_G_ICLASS_Bits
{
    Ifx_UReg_32Bit STCS:5;            /**< \brief [4:0] Sample Time Control for Standard Conversions - STCS (rw) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit AIPS:2;            /**< \brief [7:6] Analog Input Precharge Control for Standard Conversions - AIPS (rw) */
    Ifx_UReg_32Bit CMS:2;             /**< \brief [9:8] Conversion Mode for Standard Conversions - CMS (rw) */
    Ifx_UReg_32Bit SESPS:1;           /**< \brief [10:10] Spread Early Sample Point for Standard Conversions - SESPS (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit STCE:5;            /**< \brief [20:16] Sample Time Control for EMUX Conversions - STCE (rw) */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit AIPE:2;            /**< \brief [23:22] Analog Input Precharge Control for EMUX Conversions - AIPE (rw) */
    Ifx_UReg_32Bit CME:2;             /**< \brief [25:24] Conversion Mode for EMUX Conversions - CME (rw) */
    Ifx_UReg_32Bit SESPE:1;           /**< \brief [26:26] Spread Early Sample Point for EMUX Conversions - SESPE (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_EVADC_G_ICLASS_Bits;

/** \brief Queue ${i} Register 0, Group ${x} */
typedef struct _Ifx_EVADC_G_Q_Q0R_Bits
{
    Ifx_UReg_32Bit REQCHNR:5;         /**< \brief [4:0] Request Channel Number - REQCHNR (rh) */
    Ifx_UReg_32Bit RF:1;              /**< \brief [5:5] Refill - RF (rh) */
    Ifx_UReg_32Bit ENSI:1;            /**< \brief [6:6] Enable Source Interrupt - ENSI (rh) */
    Ifx_UReg_32Bit EXTR:1;            /**< \brief [7:7] External Trigger - EXTR (rh) */
    Ifx_UReg_32Bit V:1;               /**< \brief [8:8] Request Channel Number Valid - V (rh) */
    Ifx_UReg_32Bit PDD:1;             /**< \brief [9:9] Pull-Down Diagnostics Enable - PDD (rh) */
    Ifx_UReg_32Bit MDPD:1;            /**< \brief [10:10] Multiplexer Diagnostics Pull-Devices Enable - MDPD,MDPU (rh) */
    Ifx_UReg_32Bit MDPU:1;            /**< \brief [11:11] Multiplexer Diagnostics Pull-Devices Enable - MDPD,MDPU (rh) */
    Ifx_UReg_32Bit CDEN:1;            /**< \brief [12:12] Converter Diagnostics Enable - CDEN (rh) */
    Ifx_UReg_32Bit CDSEL:2;           /**< \brief [14:13] Converter Diagnostics Pull-Devices Select - CDSEL (rh) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_EVADC_G_Q_Q0R_Bits;

/** \brief Queue ${i} Backup Register, Group ${x} */
typedef struct _Ifx_EVADC_G_Q_QBUR_Bits
{
    Ifx_UReg_32Bit REQCHNR:5;         /**< \brief [4:0] Request Channel Number - REQCHNR (rh) */
    Ifx_UReg_32Bit RF:1;              /**< \brief [5:5] Refill - RF (rh) */
    Ifx_UReg_32Bit ENSI:1;            /**< \brief [6:6] Enable Source Interrupt - ENSI (rh) */
    Ifx_UReg_32Bit EXTR:1;            /**< \brief [7:7] External Trigger - EXTR (rh) */
    Ifx_UReg_32Bit V:1;               /**< \brief [8:8] Request Channel Number Valid - V (rh) */
    Ifx_UReg_32Bit PDD:1;             /**< \brief [9:9] Pull-Down Diagnostics Enable - PDD (rh) */
    Ifx_UReg_32Bit MDPD:1;            /**< \brief [10:10] Multiplexer Diagnostics Pull-Down Devices Enable (rh) */
    Ifx_UReg_32Bit MDPU:1;            /**< \brief [11:11] Multiplexer Diagnostics Pull-Up Devices Enable (rh) */
    Ifx_UReg_32Bit CDEN:1;            /**< \brief [12:12] Converter Diagnostics Enable - CDEN (rh) */
    Ifx_UReg_32Bit CDSEL:2;           /**< \brief [14:13] Converter Diagnostics Pull-Devices Select - CDSEL (rh) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_EVADC_G_Q_QBUR_Bits;

/** \brief Queue ${i} Source Contr. Register, Group ${x} */
typedef struct _Ifx_EVADC_G_Q_QCTRL_Bits
{
    Ifx_UReg_32Bit SRCRESREG:4;       /**< \brief [3:0] Source-specific Result Register - SRCRESREG (rw) */
    Ifx_UReg_32Bit reserved_4:2;      /**< \brief [5:4] \internal Reserved */
    Ifx_UReg_32Bit TRSEL:2;           /**< \brief [7:6] Trigger Source Selection - TRSEL (rw) */
    Ifx_UReg_32Bit XTSEL:4;           /**< \brief [11:8] External Trigger Input Selection - XTSEL (rw) */
    Ifx_UReg_32Bit XTLVL:1;           /**< \brief [12:12] External Trigger Level - XTLVL (rh) */
    Ifx_UReg_32Bit XTMODE:2;          /**< \brief [14:13] Trigger Operating Mode - XTMODE (rw) */
    Ifx_UReg_32Bit XTWC:1;            /**< \brief [15:15] Write Control for Trigger Configuration - XTWC (w) */
    Ifx_UReg_32Bit GTSEL:4;           /**< \brief [19:16] Gate Input Selection - GTSEL (rw) */
    Ifx_UReg_32Bit GTLVL:1;           /**< \brief [20:20] Gate Input Level - GTLVL (rh) */
    Ifx_UReg_32Bit reserved_21:2;     /**< \brief [22:21] \internal Reserved */
    Ifx_UReg_32Bit GTWC:1;            /**< \brief [23:23] Write Control for Gate Configuration - GTWC (w) */
    Ifx_UReg_32Bit reserved_24:4;     /**< \brief [27:24] \internal Reserved */
    Ifx_UReg_32Bit TMEN:1;            /**< \brief [28:28] Timer Mode Enable - TMEN (rw) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit TMWC:1;            /**< \brief [31:31] Write Control for Timer Mode - TMWC (w) */
} Ifx_EVADC_G_Q_QCTRL_Bits;

/** \brief Queue ${i} Input Register, Group ${x} */
typedef struct _Ifx_EVADC_G_Q_QINR_Bits
{
    Ifx_UReg_32Bit REQCHNR:5;         /**< \brief [4:0] Request Channel Number - REQCHNR (w) */
    Ifx_UReg_32Bit RF:1;              /**< \brief [5:5] Refill - RF (w) */
    Ifx_UReg_32Bit ENSI:1;            /**< \brief [6:6] Enable Source Interrupt - ENSI (w) */
    Ifx_UReg_32Bit EXTR:1;            /**< \brief [7:7] External Trigger - EXTR (w) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit PDD:1;             /**< \brief [9:9] Pull-Down Diagnostics Enable - PDD (w) */
    Ifx_UReg_32Bit MDPD:1;            /**< \brief [10:10] Multiplexer Diagnostics Pull-Devices Enable - MDPD,MDPU (w) */
    Ifx_UReg_32Bit MDPU:1;            /**< \brief [11:11] Multiplexer Diagnostics Pull-Devices Enable - MDPD,MDPU (w) */
    Ifx_UReg_32Bit CDEN:1;            /**< \brief [12:12] Converter Diagnostics Enable - CDEN (w) */
    Ifx_UReg_32Bit CDSEL:2;           /**< \brief [14:13] Converter Diagnostics Pull-Devices Select - CDSEL (w) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_EVADC_G_Q_QINR_Bits;

/** \brief Queue ${i} Mode Register, Group ${x} */
typedef struct _Ifx_EVADC_G_Q_QMR_Bits
{
    Ifx_UReg_32Bit ENGT:2;            /**< \brief [1:0] Enable Gate - ENGT (rw) */
    Ifx_UReg_32Bit ENTR:1;            /**< \brief [2:2] Enable External Trigger - ENTR (rw) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit CLRV:1;            /**< \brief [8:8] Clear Valid Bit - CLRV (w) */
    Ifx_UReg_32Bit TREV:1;            /**< \brief [9:9] Trigger Event - TREV (w) */
    Ifx_UReg_32Bit FLUSH:1;           /**< \brief [10:10] Flush Queue - FLUSH (w) */
    Ifx_UReg_32Bit CEV:1;             /**< \brief [11:11] Clear Event Flag - CEV (w) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit RPTDIS:1;          /**< \brief [16:16] Repeat Disable - RPTDIS (rw) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_EVADC_G_Q_QMR_Bits;

/** \brief Queue ${i} Status Register, Group ${x} */
typedef struct _Ifx_EVADC_G_Q_QSR_Bits
{
    Ifx_UReg_32Bit FILL:4;            /**< \brief [3:0] Filling Level for Queue - FILL (rh) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit EMPTY:1;           /**< \brief [5:5] Queue Empty - EMPTY (rh) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit REQGT:1;           /**< \brief [7:7] Request Gate Level - REQGT (rh) */
    Ifx_UReg_32Bit EV:1;              /**< \brief [8:8] Event Detected - EV (rh) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_EVADC_G_Q_QSR_Bits;

/** \brief Queue ${i} Requ. Timer Mode Reg., Group ${x} */
typedef struct _Ifx_EVADC_G_Q_REQTM_Bits
{
    Ifx_UReg_32Bit SEQMOD:2;          /**< \brief [1:0] Sequence Mode - SEQMOD (rw) */
    Ifx_UReg_32Bit reserved_2:4;      /**< \brief [5:2] \internal Reserved */
    Ifx_UReg_32Bit SEQTIMSET:10;      /**< \brief [15:6] Sequence Timer, Set Value - SEQTIMSET (rw) */
    Ifx_UReg_32Bit REQTS:1;           /**< \brief [16:16] Request Timer Start Trigger - REQTS (w) */
    Ifx_UReg_32Bit ENTR:1;            /**< \brief [17:17] Enable External Trigger - ENTR (rw) */
    Ifx_UReg_32Bit reserved_18:4;     /**< \brief [21:18] \internal Reserved */
    Ifx_UReg_32Bit SEQTIMOFF:10;      /**< \brief [31:22] Sequence Timer, Switch Off Value - SEQTIMOFF (rw) */
} Ifx_EVADC_G_Q_REQTM_Bits;

/** \brief Queue ${i} Requ. Timer Status Reg., Group ${x} */
typedef struct _Ifx_EVADC_G_Q_REQTS_Bits
{
    Ifx_UReg_32Bit reserved_0:6;      /**< \brief [5:0] \internal Reserved */
    Ifx_UReg_32Bit SEQTIMER:10;       /**< \brief [15:6] Sequence Timer - SEQTIMER (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EVADC_G_Q_REQTS_Bits;

/** \brief Group ${x} Result Control Register ${y} */
typedef struct _Ifx_EVADC_G_RCR_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit DRCTR:4;           /**< \brief [19:16] Data Reduction Control - DRCTR (rw) */
    Ifx_UReg_32Bit DMM:2;             /**< \brief [21:20] Data Modification Mode - DMM (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit WFR:1;             /**< \brief [24:24] Wait-for-Read Mode Enable - WFR (rw) */
    Ifx_UReg_32Bit FEN:2;             /**< \brief [26:25] FIFO Mode Enable - FEN (rw) */
    Ifx_UReg_32Bit reserved_27:4;     /**< \brief [30:27] \internal Reserved */
    Ifx_UReg_32Bit SRGEN:1;           /**< \brief [31:31] Service Request Generation Enable - SRGEN (rw) */
} Ifx_EVADC_G_RCR_Bits;

/** \brief Result Event Flag Clear Register, Group ${x} */
typedef struct _Ifx_EVADC_G_REFCLR_Bits
{
    Ifx_UReg_32Bit REV0:1;            /**< \brief [0:0] Clear Result Event for Result Register 0 (w) */
    Ifx_UReg_32Bit REV1:1;            /**< \brief [1:1] Clear Result Event for Result Register 1 (w) */
    Ifx_UReg_32Bit REV2:1;            /**< \brief [2:2] Clear Result Event for Result Register 2 (w) */
    Ifx_UReg_32Bit REV3:1;            /**< \brief [3:3] Clear Result Event for Result Register 3 (w) */
    Ifx_UReg_32Bit REV4:1;            /**< \brief [4:4] Clear Result Event for Result Register 4 (w) */
    Ifx_UReg_32Bit REV5:1;            /**< \brief [5:5] Clear Result Event for Result Register 5 (w) */
    Ifx_UReg_32Bit REV6:1;            /**< \brief [6:6] Clear Result Event for Result Register 6 (w) */
    Ifx_UReg_32Bit REV7:1;            /**< \brief [7:7] Clear Result Event for Result Register 7 (w) */
    Ifx_UReg_32Bit REV8:1;            /**< \brief [8:8] Clear Result Event for Result Register 8 (w) */
    Ifx_UReg_32Bit REV9:1;            /**< \brief [9:9] Clear Result Event for Result Register 9 (w) */
    Ifx_UReg_32Bit REV10:1;           /**< \brief [10:10] Clear Result Event for Result Register 10 (w) */
    Ifx_UReg_32Bit REV11:1;           /**< \brief [11:11] Clear Result Event for Result Register 11 (w) */
    Ifx_UReg_32Bit REV12:1;           /**< \brief [12:12] Clear Result Event for Result Register 12 (w) */
    Ifx_UReg_32Bit REV13:1;           /**< \brief [13:13] Clear Result Event for Result Register 13 (w) */
    Ifx_UReg_32Bit REV14:1;           /**< \brief [14:14] Clear Result Event for Result Register 14 (w) */
    Ifx_UReg_32Bit REV15:1;           /**< \brief [15:15] Clear Result Event for Result Register 15 (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EVADC_G_REFCLR_Bits;

/** \brief Result Event Flag Register, Group ${x} */
typedef struct _Ifx_EVADC_G_REFLAG_Bits
{
    Ifx_UReg_32Bit REV0:1;            /**< \brief [0:0] Result Event for Result Register 0 (rwh) */
    Ifx_UReg_32Bit REV1:1;            /**< \brief [1:1] Result Event for Result Register 1 (rwh) */
    Ifx_UReg_32Bit REV2:1;            /**< \brief [2:2] Result Event for Result Register 2 (rwh) */
    Ifx_UReg_32Bit REV3:1;            /**< \brief [3:3] Result Event for Result Register 3 (rwh) */
    Ifx_UReg_32Bit REV4:1;            /**< \brief [4:4] Result Event for Result Register 4 (rwh) */
    Ifx_UReg_32Bit REV5:1;            /**< \brief [5:5] Result Event for Result Register 5 (rwh) */
    Ifx_UReg_32Bit REV6:1;            /**< \brief [6:6] Result Event for Result Register 6 (rwh) */
    Ifx_UReg_32Bit REV7:1;            /**< \brief [7:7] Result Event for Result Register 7 (rwh) */
    Ifx_UReg_32Bit REV8:1;            /**< \brief [8:8] Result Event for Result Register 8 (rwh) */
    Ifx_UReg_32Bit REV9:1;            /**< \brief [9:9] Result Event for Result Register 9 (rwh) */
    Ifx_UReg_32Bit REV10:1;           /**< \brief [10:10] Result Event for Result Register 10 (rwh) */
    Ifx_UReg_32Bit REV11:1;           /**< \brief [11:11] Result Event for Result Register 11 (rwh) */
    Ifx_UReg_32Bit REV12:1;           /**< \brief [12:12] Result Event for Result Register 12 (rwh) */
    Ifx_UReg_32Bit REV13:1;           /**< \brief [13:13] Result Event for Result Register 13 (rwh) */
    Ifx_UReg_32Bit REV14:1;           /**< \brief [14:14] Result Event for Result Register 14 (rwh) */
    Ifx_UReg_32Bit REV15:1;           /**< \brief [15:15] Result Event for Result Register 15 (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EVADC_G_REFLAG_Bits;

/** \brief Group ${x} Result Register ${y} */
typedef struct _Ifx_EVADC_G_RES_Bits
{
    Ifx_UReg_32Bit RESULT:16;         /**< \brief [15:0] Result of Most Recent Conversion - RESULT (rwh) */
    Ifx_UReg_32Bit DRC:4;             /**< \brief [19:16] Data Reduction Counter - DRC (rh) */
    Ifx_UReg_32Bit CHNR:5;            /**< \brief [24:20] Channel Number - CHNR (rh) */
    Ifx_UReg_32Bit EMUX:3;            /**< \brief [27:25] External Multiplexer Setting - EMUX (rh) */
    Ifx_UReg_32Bit CRS:2;             /**< \brief [29:28] Converted Request Source - CRS (rh) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit VF:1;              /**< \brief [31:31] Valid Flag - VF (rh) */
} Ifx_EVADC_G_RES_Bits;

/** \brief Group ${x} Result Reg. ${y}, Debug */
typedef struct _Ifx_EVADC_G_RESD_Bits
{
    Ifx_UReg_32Bit RESULT:16;         /**< \brief [15:0] Result of Most Recent Conversion - RESULT (rh) */
    Ifx_UReg_32Bit DRC:4;             /**< \brief [19:16] Data Reduction Counter - DRC (rh) */
    Ifx_UReg_32Bit CHNR:5;            /**< \brief [24:20] Channel Number - CHNR (rh) */
    Ifx_UReg_32Bit EMUX:3;            /**< \brief [27:25] External Multiplexer Setting - EMUX (rh) */
    Ifx_UReg_32Bit CRS:2;             /**< \brief [29:28] Converted Request Source - CRS (rh) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit VF:1;              /**< \brief [31:31] Valid Flag - VF (rh) */
} Ifx_EVADC_G_RESD_Bits;

/** \brief Result Event Node Pointer Reg. 0, Group ${x} */
typedef struct _Ifx_EVADC_G_REVNP0_Bits
{
    Ifx_UReg_32Bit REV0NP:4;          /**< \brief [3:0] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV1NP:4;          /**< \brief [7:4] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV2NP:4;          /**< \brief [11:8] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV3NP:4;          /**< \brief [15:12] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV4NP:4;          /**< \brief [19:16] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV5NP:4;          /**< \brief [23:20] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV6NP:4;          /**< \brief [27:24] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV7NP:4;          /**< \brief [31:28] Service Request Node Pointer Result Event i (rw) */
} Ifx_EVADC_G_REVNP0_Bits;

/** \brief Result Event Node Pointer Reg. 1, Group ${x} */
typedef struct _Ifx_EVADC_G_REVNP1_Bits
{
    Ifx_UReg_32Bit REV8NP:4;          /**< \brief [3:0] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV9NP:4;          /**< \brief [7:4] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV10NP:4;         /**< \brief [11:8] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV11NP:4;         /**< \brief [15:12] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV12NP:4;         /**< \brief [19:16] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV13NP:4;         /**< \brief [23:20] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV14NP:4;         /**< \brief [27:24] Service Request Node Pointer Result Event i (rw) */
    Ifx_UReg_32Bit REV15NP:4;         /**< \brief [31:28] Service Request Node Pointer Result Event i (rw) */
} Ifx_EVADC_G_REVNP1_Bits;

/** \brief Source Event Flag Clear Reg., Group ${x} */
typedef struct _Ifx_EVADC_G_SEFCLR_Bits
{
    Ifx_UReg_32Bit SEV0:1;            /**< \brief [0:0] Clear Source Event i (w) */
    Ifx_UReg_32Bit SEV1:1;            /**< \brief [1:1] Clear Source Event i (w) */
    Ifx_UReg_32Bit SEV2:1;            /**< \brief [2:2] Clear Source Event i (w) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_EVADC_G_SEFCLR_Bits;

/** \brief Source Event Flag Register, Group ${x} */
typedef struct _Ifx_EVADC_G_SEFLAG_Bits
{
    Ifx_UReg_32Bit SEV0:1;            /**< \brief [0:0] Source Event i (rwh) */
    Ifx_UReg_32Bit SEV1:1;            /**< \brief [1:1] Source Event i (rwh) */
    Ifx_UReg_32Bit SEV2:1;            /**< \brief [2:2] Source Event i (rwh) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_EVADC_G_SEFLAG_Bits;

/** \brief Source Event Node Pointer Reg., Group ${x} */
typedef struct _Ifx_EVADC_G_SEVNP_Bits
{
    Ifx_UReg_32Bit SEV0NP:4;          /**< \brief [3:0] Service Request Node Pointer Source Event i (rw) */
    Ifx_UReg_32Bit SEV1NP:4;          /**< \brief [7:4] Service Request Node Pointer Source Event i (rw) */
    Ifx_UReg_32Bit SEV2NP:4;          /**< \brief [11:8] Service Request Node Pointer Source Event i (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_EVADC_G_SEVNP_Bits;

/** \brief Service Request Software Activation Trigger, Group ${x} */
typedef struct _Ifx_EVADC_G_SRACT_Bits
{
    Ifx_UReg_32Bit AGSR0:1;           /**< \brief [0:0] Activate Group Service Request Node 0 - AGSR0 (w) */
    Ifx_UReg_32Bit AGSR1:1;           /**< \brief [1:1] Activate Group Service Request Node 1 - AGSR1 (w) */
    Ifx_UReg_32Bit AGSR2:1;           /**< \brief [2:2] Activate Group Service Request Node 2 - AGSR2 (w) */
    Ifx_UReg_32Bit AGSR3:1;           /**< \brief [3:3] Activate Group Service Request Node 3 - AGSR3 (w) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit ASSR0:1;           /**< \brief [8:8] Activate Shared Service Request Node 0 - ASSR0 (w) */
    Ifx_UReg_32Bit ASSR1:1;           /**< \brief [9:9] Activate Shared Service Request Node 1 - ASSR1 (w) */
    Ifx_UReg_32Bit ASSR2:1;           /**< \brief [10:10] Activate Shared Service Request Node 2 - ASSR2 (w) */
    Ifx_UReg_32Bit ASSR3:1;           /**< \brief [11:11] Activate Shared Service Request Node 3 - ASSR3 (w) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_EVADC_G_SRACT_Bits;

/** \brief Synchronization Control Register, Group ${x} */
typedef struct _Ifx_EVADC_G_SYNCTR_Bits
{
    Ifx_UReg_32Bit STSEL:2;           /**< \brief [1:0] Start Selection - STSEL (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit EVALR1:1;          /**< \brief [4:4] Evaluate Ready Input Ri (rw) */
    Ifx_UReg_32Bit EVALR2:1;          /**< \brief [5:5] Evaluate Ready Input Ri (rw) */
    Ifx_UReg_32Bit EVALR3:1;          /**< \brief [6:6] Evaluate Ready Input Ri (rw) */
    Ifx_UReg_32Bit reserved_7:25;     /**< \brief [31:7] \internal Reserved */
} Ifx_EVADC_G_SYNCTR_Bits;

/** \brief Trigger Control Register, Group ${x} */
typedef struct _Ifx_EVADC_G_TRCTR_Bits
{
    Ifx_UReg_32Bit TSC:6;             /**< \brief [5:0] Trigger Sequence Counter - TSC (rh) */
    Ifx_UReg_32Bit reserved_6:8;      /**< \brief [13:6] \internal Reserved */
    Ifx_UReg_32Bit QACT:1;            /**< \brief [14:14] Queue Active - QACT (rh) */
    Ifx_UReg_32Bit OV:1;              /**< \brief [15:15] Overflow Detected - OV (rh) */
    Ifx_UReg_32Bit TSCSET:6;          /**< \brief [21:16] Trigger Sequence Counter Start Value - TSCSET (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit ITSEL:2;           /**< \brief [25:24] Internal Trigger Input Selection - ITSEL (rw) */
    Ifx_UReg_32Bit reserved_26:2;     /**< \brief [27:26] \internal Reserved */
    Ifx_UReg_32Bit SRDIS:1;           /**< \brief [28:28] Service Request Disable - SRDIS (rw) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit COV:1;             /**< \brief [31:31] Clear Overflow Flag - COV (w) */
} Ifx_EVADC_G_TRCTR_Bits;

/** \brief Valid Flag Register, Group ${x} */
typedef struct _Ifx_EVADC_G_VFR_Bits
{
    Ifx_UReg_32Bit VF0:1;             /**< \brief [0:0] Valid Flag of Result Register x - VF0 (rwh) */
    Ifx_UReg_32Bit VF1:1;             /**< \brief [1:1] Valid Flag of Result Register x - VF1 (rwh) */
    Ifx_UReg_32Bit VF2:1;             /**< \brief [2:2] Valid Flag of Result Register x - VF2 (rwh) */
    Ifx_UReg_32Bit VF3:1;             /**< \brief [3:3] Valid Flag of Result Register x - VF3 (rwh) */
    Ifx_UReg_32Bit VF4:1;             /**< \brief [4:4] Valid Flag of Result Register x - VF4 (rwh) */
    Ifx_UReg_32Bit VF5:1;             /**< \brief [5:5] Valid Flag of Result Register x - VF5 (rwh) */
    Ifx_UReg_32Bit VF6:1;             /**< \brief [6:6] Valid Flag of Result Register x - VF6 (rwh) */
    Ifx_UReg_32Bit VF7:1;             /**< \brief [7:7] Valid Flag of Result Register x - VF7 (rwh) */
    Ifx_UReg_32Bit VF8:1;             /**< \brief [8:8] Valid Flag of Result Register x - VF8 (rwh) */
    Ifx_UReg_32Bit VF9:1;             /**< \brief [9:9] Valid Flag of Result Register x - VF9 (rwh) */
    Ifx_UReg_32Bit VF10:1;            /**< \brief [10:10] Valid Flag of Result Register x - VF10 (rwh) */
    Ifx_UReg_32Bit VF11:1;            /**< \brief [11:11] Valid Flag of Result Register x - VF11 (rwh) */
    Ifx_UReg_32Bit VF12:1;            /**< \brief [12:12] Valid Flag of Result Register x - VF12 (rwh) */
    Ifx_UReg_32Bit VF13:1;            /**< \brief [13:13] Valid Flag of Result Register x - VF13 (rwh) */
    Ifx_UReg_32Bit VF14:1;            /**< \brief [14:14] Valid Flag of Result Register x - VF14 (rwh) */
    Ifx_UReg_32Bit VF15:1;            /**< \brief [15:15] Valid Flag of Result Register x - VF15 (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_EVADC_G_VFR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_EVADC_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number - MOD_NUMBER (r) */
} Ifx_EVADC_ID_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_EVADC_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_EVADC_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_EVADC_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_EVADC_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_EVADC_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_EVADC_KRSTCLR_Bits;

/** \brief OCDS Control and Status Register */
typedef struct _Ifx_EVADC_OCS_Bits
{
    Ifx_UReg_32Bit TGS:2;             /**< \brief [1:0] Trigger Set for OTGB0/1 - TGS (rw) */
    Ifx_UReg_32Bit TGB:1;             /**< \brief [2:2] OTGB0/1 Bus Select - TGB (rw) */
    Ifx_UReg_32Bit TG_P:1;            /**< \brief [3:3] TGS, TGB Write Protection - TG_P (w) */
    Ifx_UReg_32Bit reserved_4:20;     /**< \brief [23:4] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_EVADC_OCS_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_evadc_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_ACCEN0_Bits B;          /**< \brief Bitfield access */
} Ifx_EVADC_ACCEN0;

/** \brief Access Protection Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_ACCPROT0_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_ACCPROT0;

/** \brief Access Protection Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_ACCPROT1_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_ACCPROT1;

/** \brief Access Protection Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_ACCPROT2_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_ACCPROT2;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_CLC_Bits B;             /**< \brief Bitfield access */
} Ifx_EVADC_CLC;

/** \brief External Multiplexer Interface Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_EMUXSEL_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_EMUXSEL;

/** \brief Boundary Flag Register, FC Channel ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_FC_FCBFL_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_FC_FCBFL;

/** \brief Fast Compare Control Register, FC Channel ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_FC_FCCTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_EVADC_FC_FCCTRL;

/** \brief Fast Comp. Hysteresis Register, FC Channel ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_FC_FCHYST_Bits B;       /**< \brief Bitfield access */
} Ifx_EVADC_FC_FCHYST;

/** \brief Fast Compare Mode Register, FC Channel ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_FC_FCM_Bits B;          /**< \brief Bitfield access */
} Ifx_EVADC_FC_FCM;

/** \brief Fast Compare Ramp Register 0, FC Channel ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_FC_FCRAMP0_Bits B;      /**< \brief Bitfield access */
} Ifx_EVADC_FC_FCRAMP0;

/** \brief Fast Compare Ramp Register 1, FC Channel ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_FC_FCRAMP1_Bits B;      /**< \brief Bitfield access */
} Ifx_EVADC_FC_FCRAMP1;

/** \brief Global Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOBCFG_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_GLOBCFG;

/** \brief Global Boundary Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_BOUND_Bits B;      /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_BOUND;

/** \brief Global Event Flag Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_EFLAG_Bits B;      /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_EFLAG;

/** \brief Global Event Node Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_EVNP_Bits B;       /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_EVNP;

/** \brief Input Class Register ${i}, Global   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_ICLASS_Bits B;     /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_ICLASS;

/** \brief Global Result Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_RCR_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_RCR;

/** \brief Global Result Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_RES_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_RES;

/** \brief Global Result Register, Debug   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_RESD_Bits B;       /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_RESD;

/** \brief Global Test Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_TE_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_TE;

/** \brief Global Test Functions Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_GLOB_TF_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_TF;

/** \brief Alias Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_ALIAS_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_ALIAS;

/** \brief Analog Fct. Config. Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_ANCFG_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_ANCFG;

/** \brief Arbitration Config. Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_ARBCFG_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_ARBCFG;

/** \brief Arbitration Priority Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_ARBPR_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_ARBPR;

/** \brief Boundary Select Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_BOUND_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_BOUND;

/** \brief Channel Event Flag Clear Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_CEFCLR_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_CEFCLR;

/** \brief Channel Event Flag Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_CEFLAG_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_CEFLAG;

/** \brief Channel Event Node Pointer Reg. 0, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_CEVNP0_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_CEVNP0;

/** \brief Channel Event Node Pointer Reg. 1, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_CEVNP1_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_CEVNP1;

/** \brief Group ${x}, Channel ${y} Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_CHCTR_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_CHCTR;

/** \brief Ext. Multiplexer Channel Select Reg., Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_EMUXCS_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_EMUXCS;

/** \brief External Multiplexer Control Reg., Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_EMUXCTR_Bits B;       /**< \brief Bitfield access */
} Ifx_EVADC_G_EMUXCTR;

/** \brief Input Class Register ${i}, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_ICLASS_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_ICLASS;

/** \brief Queue ${i} Register 0, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_Q_Q0R_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_Q0R;

/** \brief Queue ${i} Backup Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_Q_QBUR_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QBUR;

/** \brief Queue ${i} Source Contr. Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_Q_QCTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QCTRL;

/** \brief Queue ${i} Input Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_Q_QINR_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QINR;

/** \brief Queue ${i} Mode Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_Q_QMR_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QMR;

/** \brief Queue ${i} Status Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_Q_QSR_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QSR;

/** \brief Queue ${i} Requ. Timer Mode Reg., Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_Q_REQTM_Bits B;       /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_REQTM;

/** \brief Queue ${i} Requ. Timer Status Reg., Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_Q_REQTS_Bits B;       /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_REQTS;

/** \brief Group ${x} Result Control Register ${y}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_RCR_Bits B;           /**< \brief Bitfield access */
} Ifx_EVADC_G_RCR;

/** \brief Result Event Flag Clear Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_REFCLR_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_REFCLR;

/** \brief Result Event Flag Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_REFLAG_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_REFLAG;

/** \brief Group ${x} Result Register ${y}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_RES_Bits B;           /**< \brief Bitfield access */
} Ifx_EVADC_G_RES;

/** \brief Group ${x} Result Reg. ${y}, Debug   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_RESD_Bits B;          /**< \brief Bitfield access */
} Ifx_EVADC_G_RESD;

/** \brief Result Event Node Pointer Reg. 0, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_REVNP0_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_REVNP0;

/** \brief Result Event Node Pointer Reg. 1, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_REVNP1_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_REVNP1;

/** \brief Source Event Flag Clear Reg., Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_SEFCLR_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_SEFCLR;

/** \brief Source Event Flag Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_SEFLAG_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_SEFLAG;

/** \brief Source Event Node Pointer Reg., Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_SEVNP_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_SEVNP;

/** \brief Service Request Software Activation Trigger, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_SRACT_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_SRACT;

/** \brief Synchronization Control Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_SYNCTR_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_SYNCTR;

/** \brief Trigger Control Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_TRCTR_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_G_TRCTR;

/** \brief Valid Flag Register, Group ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_G_VFR_Bits B;           /**< \brief Bitfield access */
} Ifx_EVADC_G_VFR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_ID_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_ID;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_KRST0_Bits B;           /**< \brief Bitfield access */
} Ifx_EVADC_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_KRST1_Bits B;           /**< \brief Bitfield access */
} Ifx_EVADC_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_KRSTCLR_Bits B;         /**< \brief Bitfield access */
} Ifx_EVADC_KRSTCLR;

/** \brief OCDS Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EVADC_OCS_Bits B;             /**< \brief Bitfield access */
} Ifx_EVADC_OCS;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Evadc_GLOB_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief GLOB object */
typedef volatile struct _Ifx_EVADC_GLOB
{
       Ifx_EVADC_GLOB_ICLASS               ICLASS[2];              /**< \brief 0, Input Class Register ${i}, Global*/
       Ifx_UReg_8Bit                       reserved_8[16];         /**< \brief 8, \internal Reserved */
       Ifx_EVADC_GLOB_BOUND                BOUND;                  /**< \brief 18, Global Boundary Select Register*/
       Ifx_UReg_8Bit                       reserved_1C[36];        /**< \brief 1C, \internal Reserved */
       Ifx_EVADC_GLOB_EFLAG                EFLAG;                  /**< \brief 40, Global Event Flag Register*/
       Ifx_UReg_8Bit                       reserved_44[92];        /**< \brief 44, \internal Reserved */
       Ifx_EVADC_GLOB_EVNP                 EVNP;                   /**< \brief A0, Global Event Node Pointer Register*/
       Ifx_UReg_8Bit                       reserved_A4[28];        /**< \brief A4, \internal Reserved */
       Ifx_EVADC_GLOB_TF                   TF;                     /**< \brief C0, Global Test Functions Register*/
       Ifx_EVADC_GLOB_TE                   TE;                     /**< \brief C4, Global Test Enable Register*/
       Ifx_UReg_8Bit                       reserved_C8[280];       /**< \brief C8, \internal Reserved */
       Ifx_EVADC_GLOB_RCR                  RCR;                    /**< \brief 1E0, Global Result Control Register*/
       Ifx_UReg_8Bit                       reserved_1E4[124];      /**< \brief 1E4, \internal Reserved */
       Ifx_EVADC_GLOB_RES                  RES;                    /**< \brief 260, Global Result Register*/
       Ifx_UReg_8Bit                       reserved_264[124];      /**< \brief 264, \internal Reserved */
       Ifx_EVADC_GLOB_RESD                 RESD;                   /**< \brief 2E0, Global Result Register, Debug*/
} Ifx_EVADC_GLOB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Evadc_G_Q_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief Q object */
typedef volatile struct _Ifx_EVADC_G_Q
{
       Ifx_EVADC_G_Q_QCTRL                 QCTRL;                  /**< \brief 0, Queue ${i} Source Contr. Register, Group ${x}*/
       Ifx_EVADC_G_Q_QMR                   QMR;                    /**< \brief 4, Queue ${i} Mode Register, Group ${x}*/
       Ifx_EVADC_G_Q_QSR                   QSR;                    /**< \brief 8, Queue ${i} Status Register, Group ${x}*/
       Ifx_EVADC_G_Q_Q0R                   Q0R;                    /**< \brief C, Queue ${i} Register 0, Group ${x}*/
       Ifx_EVADC_G_Q_QINR                  QINR;                   /**< \brief 10, Queue ${i} Input Register, Group ${x}*/
       Ifx_EVADC_G_Q_QBUR                  QBUR;                   /**< \brief 14, Queue ${i} Backup Register, Group ${x}*/
       Ifx_EVADC_G_Q_REQTM                 REQTM;                  /**< \brief 18, Queue ${i} Requ. Timer Mode Reg., Group ${x}*/
       Ifx_EVADC_G_Q_REQTS                 REQTS;                  /**< \brief 1C, Queue ${i} Requ. Timer Status Reg., Group ${x}*/
} Ifx_EVADC_G_Q;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Evadc_G_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief G object */
typedef volatile struct _Ifx_EVADC_G
{
       Ifx_UReg_8Bit                       reserved_0[16];         /**< \brief 0, \internal Reserved */
       Ifx_EVADC_G_TRCTR                   TRCTR;                  /**< \brief 10, Trigger Control Register, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_14[108];       /**< \brief 14, \internal Reserved */
       Ifx_EVADC_G_ARBCFG                  ARBCFG;                 /**< \brief 80, Arbitration Config. Register, Group ${x}*/
       Ifx_EVADC_G_ARBPR                   ARBPR;                  /**< \brief 84, Arbitration Priority Register, Group ${x}*/
       Ifx_EVADC_G_ANCFG                   ANCFG;                  /**< \brief 88, Analog Fct. Config. Register, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_8C[20];        /**< \brief 8C, \internal Reserved */
       Ifx_EVADC_G_ICLASS                  ICLASS[2];              /**< \brief A0, Input Class Register ${i}, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_A8[8];         /**< \brief A8, \internal Reserved */
       Ifx_EVADC_G_ALIAS                   ALIAS;                  /**< \brief B0, Alias Register, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_B4[4];         /**< \brief B4, \internal Reserved */
       Ifx_EVADC_G_BOUND                   BOUND;                  /**< \brief B8, Boundary Select Register, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_BC[4];         /**< \brief BC, \internal Reserved */
       Ifx_EVADC_G_SYNCTR                  SYNCTR;                 /**< \brief C0, Synchronization Control Register, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_C4[60];        /**< \brief C4, \internal Reserved */
       Ifx_EVADC_G_Q                       Q[3];                   /**< \brief 100, Queue ${i} Requ. Timer Status Reg., Group ${x}*/
       Ifx_UReg_8Bit                       reserved_160[32];       /**< \brief 160, \internal Reserved */
       Ifx_EVADC_G_CEFLAG                  CEFLAG;                 /**< \brief 180, Channel Event Flag Register, Group ${x}*/
       Ifx_EVADC_G_REFLAG                  REFLAG;                 /**< \brief 184, Result Event Flag Register, Group ${x}*/
       Ifx_EVADC_G_SEFLAG                  SEFLAG;                 /**< \brief 188, Source Event Flag Register, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_18C[4];        /**< \brief 18C, \internal Reserved */
       Ifx_EVADC_G_CEFCLR                  CEFCLR;                 /**< \brief 190, Channel Event Flag Clear Register, Group ${x}*/
       Ifx_EVADC_G_REFCLR                  REFCLR;                 /**< \brief 194, Result Event Flag Clear Register, Group ${x}*/
       Ifx_EVADC_G_SEFCLR                  SEFCLR;                 /**< \brief 198, Source Event Flag Clear Reg., Group ${x}*/
       Ifx_UReg_8Bit                       reserved_19C[4];        /**< \brief 19C, \internal Reserved */
       Ifx_EVADC_G_CEVNP0                  CEVNP0;                 /**< \brief 1A0, Channel Event Node Pointer Reg. 0, Group ${x}*/
       Ifx_EVADC_G_CEVNP1                  CEVNP1;                 /**< \brief 1A4, Channel Event Node Pointer Reg. 1, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_1A8[8];        /**< \brief 1A8, \internal Reserved */
       Ifx_EVADC_G_REVNP0                  REVNP0;                 /**< \brief 1B0, Result Event Node Pointer Reg. 0, Group ${x}*/
       Ifx_EVADC_G_REVNP1                  REVNP1;                 /**< \brief 1B4, Result Event Node Pointer Reg. 1, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_1B8[8];        /**< \brief 1B8, \internal Reserved */
       Ifx_EVADC_G_SEVNP                   SEVNP;                  /**< \brief 1C0, Source Event Node Pointer Reg., Group ${x}*/
       Ifx_UReg_8Bit                       reserved_1C4[4];        /**< \brief 1C4, \internal Reserved */
       Ifx_EVADC_G_SRACT                   SRACT;                  /**< \brief 1C8, Service Request Software Activation Trigger, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_1CC[36];       /**< \brief 1CC, \internal Reserved */
       Ifx_EVADC_G_EMUXCTR                 EMUXCTR;                /**< \brief 1F0, External Multiplexer Control Reg., Group ${x}*/
       Ifx_EVADC_G_EMUXCS                  EMUXCS;                 /**< \brief 1F4, Ext. Multiplexer Channel Select Reg., Group ${x}*/
       Ifx_EVADC_G_VFR                     VFR;                    /**< \brief 1F8, Valid Flag Register, Group ${x}*/
       Ifx_UReg_8Bit                       reserved_1FC[4];        /**< \brief 1FC, \internal Reserved */
       Ifx_EVADC_G_CHCTR                   CHCTR[16];              /**< \brief 200, Group ${x}, Channel ${y} Control Register*/
       Ifx_UReg_8Bit                       reserved_240[64];       /**< \brief 240, \internal Reserved */
       Ifx_EVADC_G_RCR                     RCR[16];                /**< \brief 280, Group ${x} Result Control Register ${y}*/
       Ifx_UReg_8Bit                       reserved_2C0[64];       /**< \brief 2C0, \internal Reserved */
       Ifx_EVADC_G_RES                     RES[16];                /**< \brief 300, Group ${x} Result Register ${y}*/
       Ifx_UReg_8Bit                       reserved_340[64];       /**< \brief 340, \internal Reserved */
       Ifx_EVADC_G_RESD                    RESD[16];               /**< \brief 380, Group ${x} Result Reg. ${y}, Debug*/
       Ifx_UReg_8Bit                       reserved_3C0[64];       /**< \brief 3C0, \internal Reserved */
} Ifx_EVADC_G;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Evadc_FC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief FC object */
typedef volatile struct _Ifx_EVADC_FC
{
       Ifx_EVADC_FC_FCCTRL                 FCCTRL;                 /**< \brief 0, Fast Compare Control Register, FC Channel ${x}*/
       Ifx_EVADC_FC_FCM                    FCM;                    /**< \brief 4, Fast Compare Mode Register, FC Channel ${x}*/
       Ifx_EVADC_FC_FCRAMP0                FCRAMP0;                /**< \brief 8, Fast Compare Ramp Register 0, FC Channel ${x}*/
       Ifx_EVADC_FC_FCRAMP1                FCRAMP1;                /**< \brief C, Fast Compare Ramp Register 1, FC Channel ${x}*/
       Ifx_UReg_8Bit                       reserved_10[16];        /**< \brief 10, \internal Reserved */
       Ifx_EVADC_FC_FCBFL                  FCBFL;                  /**< \brief 20, Boundary Flag Register, FC Channel ${x}*/
       Ifx_EVADC_FC_FCHYST                 FCHYST;                 /**< \brief 24, Fast Comp. Hysteresis Register, FC Channel ${x}*/
       Ifx_UReg_8Bit                       reserved_28[216];       /**< \brief 28, \internal Reserved */
} Ifx_EVADC_FC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Evadc_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief EVADC object */
typedef volatile struct _Ifx_EVADC
{
       Ifx_EVADC_CLC                       CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_EVADC_ID                        ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[28];         /**< \brief C, \internal Reserved */
       Ifx_EVADC_OCS                       OCS;                    /**< \brief 28, OCDS Control and Status Register*/
       Ifx_EVADC_KRSTCLR                   KRSTCLR;                /**< \brief 2C, Kernel Reset Status Clear Register*/
       Ifx_EVADC_KRST1                     KRST1;                  /**< \brief 30, Kernel Reset Register 1*/
       Ifx_EVADC_KRST0                     KRST0;                  /**< \brief 34, Kernel Reset Register 0*/
       Ifx_UReg_8Bit                       reserved_38[4];         /**< \brief 38, \internal Reserved */
       Ifx_EVADC_ACCEN0                    ACCEN0;                 /**< \brief 3C, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_40[64];        /**< \brief 40, \internal Reserved */
       Ifx_EVADC_GLOBCFG                   GLOBCFG;                /**< \brief 80, Global Configuration Register*/
       Ifx_UReg_8Bit                       reserved_84[4];         /**< \brief 84, \internal Reserved */
       Ifx_EVADC_ACCPROT0                  ACCPROT0;               /**< \brief 88, Access Protection Register 0*/
       Ifx_EVADC_ACCPROT1                  ACCPROT1;               /**< \brief 8C, Access Protection Register 1*/
       Ifx_EVADC_ACCPROT2                  ACCPROT2;               /**< \brief 90, Access Protection Register 2*/
       Ifx_UReg_8Bit                       reserved_94[12];        /**< \brief 94, \internal Reserved */
       Ifx_EVADC_GLOB                      GLOB;                   /**< \brief A0, Global Result Register, Debug*/
       Ifx_UReg_8Bit                       reserved_384[108];      /**< \brief 384, \internal Reserved */
       Ifx_EVADC_EMUXSEL                   EMUXSEL;                /**< \brief 3F0, External Multiplexer Interface Select Register*/
       Ifx_UReg_8Bit                       reserved_3F4[12];       /**< \brief 3F4, \internal Reserved */
       Ifx_EVADC_G                         G[12];                  /**< \brief 400, */
       Ifx_EVADC_FC                        FC[4];                  /**< \brief 3400, */
       Ifx_UReg_8Bit                       reserved_3800[2048];    /**< \brief 3800, \internal Reserved */
} Ifx_EVADC;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXEVADC_REGDEF_H */
