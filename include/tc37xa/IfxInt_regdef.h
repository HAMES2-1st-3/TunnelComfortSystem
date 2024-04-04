/**
 * \file IfxInt_regdef.h
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
 * \defgroup IfxSfr_Int_Registers Int Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Int_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Int_Registers
 * 
 * \defgroup IfxSfr_Int_Registers_union Register unions
 * \ingroup IfxSfr_Int_Registers
 * 
 * \defgroup IfxSfr_Int_Registers_struct Memory map
 * \ingroup IfxSfr_Int_Registers
 */
#ifndef IFXINT_REGDEF_H
#define IFXINT_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Int_Registers_Bitfields
 * \{  */
/** \brief Access Enable covering all INT_ECRx and all SRCy[15:0], Register 0 */
typedef struct _Ifx_INT_ACCEN_CONFIG0_Bits
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
} Ifx_INT_ACCEN_CONFIG0_Bits;

/** \brief Access Enable covering all INT_ECRx and all SRCy[15:0], Register 1 */
typedef struct _Ifx_INT_ACCEN_CONFIG1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_INT_ACCEN_CONFIG1_Bits;

/** \brief Access Enable covering SRB${x}, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRB0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID 0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID 1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID 2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID 3 (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID 4 (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID 5 (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID 6 (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID 7 (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID 8 (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID 9 (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID 10 (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID 11 (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID 12 (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID 13 (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID 14 (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID 15 (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID 16 (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID 17 (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID 18 (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID 19 (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID 20 (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID 21 (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID 22 (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID 23 (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID 24 (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID 25 (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID 26 (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID 27 (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID 28 (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID 29 (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID 30 (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID 31 (rw) */
} Ifx_INT_ACCEN_SRB0_Bits;

/** \brief Access Enable covering SRB${x}, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRB1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_INT_ACCEN_SRB1_Bits;

/** \brief Access Enable covering all SRCx[31:16] mapped to ICU${x}, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID 0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID 1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID 2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID 3 (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID 4 (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID 5 (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID 6 (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID 7 (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID 8 (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID 9 (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID 10 (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID 11 (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID 12 (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID 13 (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID 14 (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID 15 (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID 16 (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID 17 (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID 18 (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID 19 (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID 20 (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID 21 (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID 22 (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID 23 (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID 24 (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID 25 (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID 26 (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID 27 (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID 28 (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID 29 (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID 30 (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID 31 (rw) */
} Ifx_INT_ACCEN_SRC_TOS0_Bits;

/** \brief Access Enable covering all SRCx[31:16] mapped to ICU${x}, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS1_Bits;

/** \brief Error Capture Register ${x}, related to ICU${x} */
typedef struct _Ifx_INT_CH_ECR_Bits
{
    Ifx_UReg_32Bit PN:8;              /**< \brief [7:0] Service Request Priority Number (rwh) */
    Ifx_UReg_32Bit reserved_8:2;      /**< \brief [9:8] \internal Reserved */
    Ifx_UReg_32Bit ECC:5;             /**< \brief [14:10] Service Request ECC (rwh) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit ID:10;             /**< \brief [25:16] Service Request Node ID (rwh) */
    Ifx_UReg_32Bit reserved_26:2;     /**< \brief [27:26] \internal Reserved */
    Ifx_UReg_32Bit EOVCLR:1;          /**< \brief [28:28] Error Overflow Bit (w) */
    Ifx_UReg_32Bit STATCLR:1;         /**< \brief [29:29] Error Status Bit (w) */
    Ifx_UReg_32Bit EOV:1;             /**< \brief [30:30] Error Overflow Bit (rh) */
    Ifx_UReg_32Bit STAT:1;            /**< \brief [31:31] Error Status Bit (rh) */
} Ifx_INT_CH_ECR_Bits;

/** \brief Last Acknowledged Service Request Register ${x}, related to ICU${x} */
typedef struct _Ifx_INT_CH_LASR_Bits
{
    Ifx_UReg_32Bit PN:8;              /**< \brief [7:0] Last Acknowledged Service Request Priority Number (r) */
    Ifx_UReg_32Bit reserved_8:2;      /**< \brief [9:8] \internal Reserved */
    Ifx_UReg_32Bit ECC:5;             /**< \brief [14:10] Last Acknowledged Interrupt ECC (r) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit ID:10;             /**< \brief [25:16] Last Acknowledged Interrupt SRN ID (r) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_INT_CH_LASR_Bits;

/** \brief Latest Winning Service Request Register ${x}, related to ICU${x} */
typedef struct _Ifx_INT_CH_LWSR_Bits
{
    Ifx_UReg_32Bit PN:8;              /**< \brief [7:0] Latest Winner Priority Number (r) */
    Ifx_UReg_32Bit reserved_8:2;      /**< \brief [9:8] \internal Reserved */
    Ifx_UReg_32Bit ECC:5;             /**< \brief [14:10] Latest Winner ECC (r) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit ID:10;             /**< \brief [25:16] Latest Winner Index Number (r) */
    Ifx_UReg_32Bit reserved_26:5;     /**< \brief [30:26] \internal Reserved */
    Ifx_UReg_32Bit STAT:1;            /**< \brief [31:31] LWSR Register Status (r) */
} Ifx_INT_CH_LWSR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_INT_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value (r) */
} Ifx_INT_ID_Bits;

/** \brief OTGM IRQ Trace */
typedef struct _Ifx_INT_OIT_Bits
{
    Ifx_UReg_32Bit TOS0:3;            /**< \brief [2:0] Type of Service for Observation on OTGB0 (rw) */
    Ifx_UReg_32Bit reserved_3:4;      /**< \brief [6:3] \internal Reserved */
    Ifx_UReg_32Bit OE0:1;             /**< \brief [7:7] Output Enable for OTGB0 (rw) */
    Ifx_UReg_32Bit TOS1:3;            /**< \brief [10:8] Type of Service for Observation on OTGB1 (rw) */
    Ifx_UReg_32Bit reserved_11:4;     /**< \brief [14:11] \internal Reserved */
    Ifx_UReg_32Bit OE1:1;             /**< \brief [15:15] Output Enable for OTGB1 (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_INT_OIT_Bits;

/** \brief OTGM IRQ MUX Missed IRQ Select */
typedef struct _Ifx_INT_OIXMS_Bits
{
    Ifx_UReg_32Bit MIRQ:10;           /**< \brief [9:0] SRN Index for Missed Interrupt Trigger (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_INT_OIXMS_Bits;

/** \brief OTGM IRQ MUX Select 0 */
typedef struct _Ifx_INT_OIXS0_Bits
{
    Ifx_UReg_32Bit IRQ0:10;           /**< \brief [9:0] SRN Index for Interrupt Trigger 0 (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit IRQ1:10;           /**< \brief [25:16] SRN Index for Interrupt Trigger 1 (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_INT_OIXS0_Bits;

/** \brief OTGM IRQ MUX Select 1 */
typedef struct _Ifx_INT_OIXS1_Bits
{
    Ifx_UReg_32Bit IRQ2:10;           /**< \brief [9:0] SRN Index for Interrupt Trigger 2 (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit IRQ3:10;           /**< \brief [25:16] SRN Index for Interrupt Trigger 3 (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_INT_OIXS1_Bits;

/** \brief OTGM IRQ MUX Trigger Set Select */
typedef struct _Ifx_INT_OIXTS_Bits
{
    Ifx_UReg_32Bit TGS:2;             /**< \brief [1:0] Trigger Set Select for OTGB0/1 Overlay (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit OBS:2;             /**< \brief [9:8] Overlay Byte Select (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_INT_OIXTS_Bits;

/** \brief OTGM MCDS I/F Sensitivity Negedge */
typedef struct _Ifx_INT_OMISN_Bits
{
    Ifx_UReg_32Bit OTGB0:16;          /**< \brief [15:0] Bitwise Negedge Sensitivity for OTGB0 (rw) */
    Ifx_UReg_32Bit OTGB1:16;          /**< \brief [31:16] Bitwise Negedge Sensitivity for OTGB1 (rw) */
} Ifx_INT_OMISN_Bits;

/** \brief OTGM MCDS I/F Sensitivity Posedge */
typedef struct _Ifx_INT_OMISP_Bits
{
    Ifx_UReg_32Bit OTGB0:16;          /**< \brief [15:0] Bitwise Posedge Sensitivity for OTGB0 (rw) */
    Ifx_UReg_32Bit OTGB1:16;          /**< \brief [31:16] Bitwise Posedge Sensitivity for OTGB1 (rw) */
} Ifx_INT_OMISP_Bits;

/** \brief OTGM OTGB0/1 Status */
typedef struct _Ifx_INT_OOBS_Bits
{
    Ifx_UReg_32Bit OTGB0:16;          /**< \brief [15:0] Status of OTGB0 (rh) */
    Ifx_UReg_32Bit OTGB1:16;          /**< \brief [31:16] Status of OTGB1 (rh) */
} Ifx_INT_OOBS_Bits;

/** \brief OTGM SSI Control */
typedef struct _Ifx_INT_OSSIC_Bits
{
    Ifx_UReg_32Bit TGS:2;             /**< \brief [1:0] Trigger Set for OTGB0/1 (rw) */
    Ifx_UReg_32Bit TGB:1;             /**< \brief [2:2] OTGB0/1 Bus Select (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_INT_OSSIC_Bits;

/** \brief Service Request Broadcast Register ${x} */
typedef struct _Ifx_INT_SRB_Bits
{
    Ifx_UReg_32Bit TRIG0:1;           /**< \brief [0:0] General Purpose Service Request Trigger 0 (w) */
    Ifx_UReg_32Bit TRIG1:1;           /**< \brief [1:1] General Purpose Service Request Trigger 1 (w) */
    Ifx_UReg_32Bit TRIG2:1;           /**< \brief [2:2] General Purpose Service Request Trigger 2 (w) */
    Ifx_UReg_32Bit TRIG3:1;           /**< \brief [3:3] General Purpose Service Request Trigger 3 (w) */
    Ifx_UReg_32Bit TRIG4:1;           /**< \brief [4:4] General Purpose Service Request Trigger 4 (w) */
    Ifx_UReg_32Bit TRIG5:1;           /**< \brief [5:5] General Purpose Service Request Trigger 5 (w) */
    Ifx_UReg_32Bit TRIG6:1;           /**< \brief [6:6] General Purpose Service Request Trigger 6 (w) */
    Ifx_UReg_32Bit TRIG7:1;           /**< \brief [7:7] General Purpose Service Request Trigger 7 (w) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_INT_SRB_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_int_Registers_union
 * \{   */
/** \brief Access Enable covering all INT_ECRx and all SRCy[15:0], Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_ACCEN_CONFIG0_Bits B;     /**< \brief Bitfield access */
} Ifx_INT_ACCEN_CONFIG0;

/** \brief Access Enable covering all INT_ECRx and all SRCy[15:0], Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_ACCEN_CONFIG1_Bits B;     /**< \brief Bitfield access */
} Ifx_INT_ACCEN_CONFIG1;

/** \brief Access Enable covering SRB${x}, Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB0_Bits B;        /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB0;

/** \brief Access Enable covering SRB${x}, Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB1_Bits B;        /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB1;

/** \brief Access Enable covering all SRCx[31:16] mapped to ICU${x}, Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS0_Bits B;    /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS0;

/** \brief Access Enable covering all SRCx[31:16] mapped to ICU${x}, Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS1_Bits B;    /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS1;

/** \brief Error Capture Register ${x}, related to ICU${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_CH_ECR_Bits B;            /**< \brief Bitfield access */
} Ifx_INT_CH_ECR;

/** \brief Last Acknowledged Service Request Register ${x}, related to ICU${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_CH_LASR_Bits B;           /**< \brief Bitfield access */
} Ifx_INT_CH_LASR;

/** \brief Latest Winning Service Request Register ${x}, related to ICU${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_CH_LWSR_Bits B;           /**< \brief Bitfield access */
} Ifx_INT_CH_LWSR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_INT_ID;

/** \brief OTGM IRQ Trace   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OIT_Bits B;               /**< \brief Bitfield access */
} Ifx_INT_OIT;

/** \brief OTGM IRQ MUX Missed IRQ Select   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OIXMS_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_OIXMS;

/** \brief OTGM IRQ MUX Select 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OIXS0_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_OIXS0;

/** \brief OTGM IRQ MUX Select 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OIXS1_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_OIXS1;

/** \brief OTGM IRQ MUX Trigger Set Select   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OIXTS_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_OIXTS;

/** \brief OTGM MCDS I/F Sensitivity Negedge   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OMISN_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_OMISN;

/** \brief OTGM MCDS I/F Sensitivity Posedge   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OMISP_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_OMISP;

/** \brief OTGM OTGB0/1 Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OOBS_Bits B;              /**< \brief Bitfield access */
} Ifx_INT_OOBS;

/** \brief OTGM SSI Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_OSSIC_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_OSSIC;

/** \brief Service Request Broadcast Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_INT_SRB_Bits B;               /**< \brief Bitfield access */
} Ifx_INT_SRB;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Int_ACCEN_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ACCEN object */
typedef volatile struct _Ifx_INT_ACCEN
{
       Ifx_INT_ACCEN_SRB0                  SRB0;                   /**< \brief 0, Access Enable covering SRB${x}, Register 0*/
       Ifx_INT_ACCEN_SRB1                  SRB1;                   /**< \brief 4, Access Enable covering SRB${x}, Register 1*/
} Ifx_INT_ACCEN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Int_ACCEN_SRC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ACCEN_SRC object */
typedef volatile struct _Ifx_INT_ACCEN_SRC
{
       Ifx_INT_ACCEN_SRC_TOS0              TOS0;                   /**< \brief 0, Access Enable covering all SRCx[31:16] mapped to ICU${x}, Register 0*/
       Ifx_INT_ACCEN_SRC_TOS1              TOS1;                   /**< \brief 4, Access Enable covering all SRCx[31:16] mapped to ICU${x}, Register 1*/
} Ifx_INT_ACCEN_SRC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Int_CH_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CH object */
typedef volatile struct _Ifx_INT_CH
{
       Ifx_INT_CH_LWSR                     LWSR;                   /**< \brief 0, Latest Winning Service Request Register ${x}, related to ICU${x}*/
       Ifx_INT_CH_LASR                     LASR;                   /**< \brief 4, Last Acknowledged Service Request Register ${x}, related to ICU${x}*/
       Ifx_INT_CH_ECR                      ECR;                    /**< \brief 8, Error Capture Register ${x}, related to ICU${x}*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
} Ifx_INT_CH;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Int_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief INT object */
typedef volatile struct _Ifx_INT
{
       Ifx_UReg_8Bit                       reserved_0[8];          /**< \brief 0, \internal Reserved */
       Ifx_INT_ID                          ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_INT_SRB                         SRB[3];                 /**< \brief 10, Service Request Broadcast Register ${x}*/
       Ifx_UReg_8Bit                       reserved_1C[100];       /**< \brief 1C, \internal Reserved */
       Ifx_INT_OOBS                        OOBS;                   /**< \brief 80, OTGM OTGB0/1 Status*/
       Ifx_INT_OSSIC                       OSSIC;                  /**< \brief 84, OTGM SSI Control*/
       Ifx_INT_OIXTS                       OIXTS;                  /**< \brief 88, OTGM IRQ MUX Trigger Set Select*/
       Ifx_INT_OIXMS                       OIXMS;                  /**< \brief 8C, OTGM IRQ MUX Missed IRQ Select*/
       Ifx_INT_OIXS0                       OIXS0;                  /**< \brief 90, OTGM IRQ MUX Select 0*/
       Ifx_INT_OIXS1                       OIXS1;                  /**< \brief 94, OTGM IRQ MUX Select 1*/
       Ifx_UReg_8Bit                       reserved_98[8];         /**< \brief 98, \internal Reserved */
       Ifx_INT_OIT                         OIT;                    /**< \brief A0, OTGM IRQ Trace*/
       Ifx_INT_OMISP                       OMISP;                  /**< \brief A4, OTGM MCDS I/F Sensitivity Posedge*/
       Ifx_INT_OMISN                       OMISN;                  /**< \brief A8, OTGM MCDS I/F Sensitivity Negedge*/
       Ifx_UReg_8Bit                       reserved_AC[68];        /**< \brief AC, \internal Reserved */
       Ifx_INT_ACCEN_CONFIG0               ACCEN_CONFIG0;          /**< \brief F0, Access Enable covering all INT_ECRx and all SRCy[15:0], Register 0*/
       Ifx_INT_ACCEN_CONFIG1               ACCEN_CONFIG1;          /**< \brief F4, Access Enable covering all INT_ECRx and all SRCy[15:0], Register 1*/
       Ifx_UReg_8Bit                       reserved_F8[8];         /**< \brief F8, \internal Reserved */
       Ifx_INT_ACCEN                       ACCEN[3];               /**< \brief 100, Access Enable covering SRB${x}, Register 1*/
       Ifx_UReg_8Bit                       reserved_118[104];      /**< \brief 118, \internal Reserved */
       Ifx_INT_ACCEN_SRC                   ACCEN_SRC[4];           /**< \brief 180, Access Enable covering all SRCx[31:16] mapped to ICU${x}, Register 1*/
       Ifx_UReg_8Bit                       reserved_1A0[96];       /**< \brief 1A0, \internal Reserved */
       Ifx_INT_CH                          CH[4];                  /**< \brief 200, */
       Ifx_UReg_8Bit                       reserved_240[3520];     /**< \brief 240, \internal Reserved */
} Ifx_INT;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXINT_REGDEF_H */
