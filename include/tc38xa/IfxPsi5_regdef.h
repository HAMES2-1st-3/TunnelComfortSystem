/**
 * \file IfxPsi5_regdef.h
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
 * \defgroup IfxSfr_Psi5_Registers Psi5 Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Psi5_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Psi5_Registers
 * 
 * \defgroup IfxSfr_Psi5_Registers_union Register unions
 * \ingroup IfxSfr_Psi5_Registers
 * 
 * \defgroup IfxSfr_Psi5_Registers_struct Memory map
 * \ingroup IfxSfr_Psi5_Registers
 */
#ifndef IFXPSI5_REGDEF_H
#define IFXPSI5_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Psi5_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_PSI5_ACCEN0_Bits
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
} Ifx_PSI5_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_PSI5_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_PSI5_ACCEN1_Bits;

/** \brief Channel Trigger Value Register ${x} */
typedef struct _Ifx_PSI5_CH_CTV_Bits
{
    Ifx_UReg_32Bit CTV:16;            /**< \brief [15:0] Channel Trigger Value CTV - CTV (rw) */
    Ifx_UReg_32Bit CTC:16;            /**< \brief [31:16] Channel Trigger Counter - CTC (rwh) */
} Ifx_PSI5_CH_CTV_Bits;

/** \brief Input and Output Control Register ${x} */
typedef struct _Ifx_PSI5_CH_IOCR_Bits
{
    Ifx_UReg_32Bit ALTI:2;            /**< \brief [1:0] Alternate Input Select - ALTI (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit DEPTH:4;           /**< \brief [7:4] Digital Glitch Filter Depth - DEPTH (rw) */
    Ifx_UReg_32Bit OIE:1;             /**< \brief [8:8] Output Inverter Enable Channel x - OIE (rw) */
    Ifx_UReg_32Bit IIE:1;             /**< \brief [9:9] Input Inverter Enable Channel x - IIE (rw) */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit REG:1;             /**< \brief [12:12] Rising Edge Glitch Flag for Channel x - REG (rh) */
    Ifx_UReg_32Bit FEG:1;             /**< \brief [13:13] Falling Edge Glitch Flag for Channel x - FEG (rh) */
    Ifx_UReg_32Bit CREG:1;            /**< \brief [14:14] Clear Rising Edge Glitch Flag for Channel x - CREG (w) */
    Ifx_UReg_32Bit CFEG:1;            /**< \brief [15:15] Clear Falling Edge Glitch Flag for Channel x - CFEG (w) */
    Ifx_UReg_32Bit reserved_16:14;    /**< \brief [29:16] \internal Reserved */
    Ifx_UReg_32Bit RXM:1;             /**< \brief [30:30] Receive Monitor for Channel x - RXM (rh) */
    Ifx_UReg_32Bit TXM:1;             /**< \brief [31:31] Transmit Monitor for Channel x - TXM (rh) */
} Ifx_PSI5_CH_IOCR_Bits;

/** \brief Pulse Generation Control Register ${x} */
typedef struct _Ifx_PSI5_CH_PGC_Bits
{
    Ifx_UReg_32Bit PLEN:6;            /**< \brief [5:0] Pulse Length - PLEN (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit DEL:6;             /**< \brief [13:8] Delay Length - DEL (rw) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit TBS:1;             /**< \brief [15:15] Time Base Select - TBS (rw) */
    Ifx_UReg_32Bit ETB:3;             /**< \brief [18:16] External Time Base Select - ETB (rw) */
    Ifx_UReg_32Bit PTE:1;             /**< \brief [19:19] Periodic Trigger Enable - PTE (rw) */
    Ifx_UReg_32Bit ETS:3;             /**< \brief [22:20] External Trigger Select - ETS (rw) */
    Ifx_UReg_32Bit ETE:1;             /**< \brief [23:23] External Trigger Enable - ETE (rw) */
    Ifx_UReg_32Bit BYP:1;             /**< \brief [24:24] Bypass Enable - BYP (rw) */
    Ifx_UReg_32Bit BOT:7;             /**< \brief [31:25] Blank Out Time - BOT (rw) */
} Ifx_PSI5_CH_PGC_Bits;

/** \brief Receiver Control Register A ${x} */
typedef struct _Ifx_PSI5_CH_RCRA_Bits
{
    Ifx_UReg_32Bit PDL0:5;            /**< \brief [4:0] Payload Data Length - PDL0 (rw) */
    Ifx_UReg_32Bit PDL1:5;            /**< \brief [9:5] Payload Data Length - PDL1 (rw) */
    Ifx_UReg_32Bit PDL2:5;            /**< \brief [14:10] Payload Data Length - PDL2 (rw) */
    Ifx_UReg_32Bit PDL3:5;            /**< \brief [19:15] Payload Data Length - PDL3 (rw) */
    Ifx_UReg_32Bit PDL4:5;            /**< \brief [24:20] Payload Data Length - PDL4 (rw) */
    Ifx_UReg_32Bit PDL5:5;            /**< \brief [29:25] Payload Data Length - PDL5 (rw) */
    Ifx_UReg_32Bit ASYN:1;            /**< \brief [30:30] Asynchronous Mode - ASYN (rw) */
    Ifx_UReg_32Bit AVBS:1;            /**< \brief [31:31] Verbose Mode for Asynchronous Mode - AVBS (rw) */
} Ifx_PSI5_CH_RCRA_Bits;

/** \brief Receiver Control Register B ${x} */
typedef struct _Ifx_PSI5_CH_RCRB_Bits
{
    Ifx_UReg_32Bit MSG0:1;            /**< \brief [0:0] Messaging Bits - MSG0 (rw) */
    Ifx_UReg_32Bit CRC0:1;            /**< \brief [1:1] CRC or Parit0 Selection - CRC0 (rw) */
    Ifx_UReg_32Bit FEC0:1;            /**< \brief [2:2] Frame Expectation Control - FEC0 (rw) */
    Ifx_UReg_32Bit VBS0:1;            /**< \brief [3:3] Verbose Mode - VBS0 (rw) */
    Ifx_UReg_32Bit MSG1:1;            /**< \brief [4:4] Messaging Bits - MSG1 (rw) */
    Ifx_UReg_32Bit CRC1:1;            /**< \brief [5:5] CRC or Parit1 Selection - CRC1 (rw) */
    Ifx_UReg_32Bit FEC1:1;            /**< \brief [6:6] Frame Expectation Control - FEC1 (rw) */
    Ifx_UReg_32Bit VBS1:1;            /**< \brief [7:7] Verbose Mode - VBS1 (rw) */
    Ifx_UReg_32Bit MSG2:1;            /**< \brief [8:8] Messaging Bits - MSG2 (rw) */
    Ifx_UReg_32Bit CRC2:1;            /**< \brief [9:9] CRC or Parit2 Selection - CRC2 (rw) */
    Ifx_UReg_32Bit FEC2:1;            /**< \brief [10:10] Frame Expectation Control - FEC2 (rw) */
    Ifx_UReg_32Bit VBS2:1;            /**< \brief [11:11] Verbose Mode - VBS2 (rw) */
    Ifx_UReg_32Bit MSG3:1;            /**< \brief [12:12] Messaging Bits - MSG3 (rw) */
    Ifx_UReg_32Bit CRC3:1;            /**< \brief [13:13] CRC or Parit3 Selection - CRC3 (rw) */
    Ifx_UReg_32Bit FEC3:1;            /**< \brief [14:14] Frame Expectation Control - FEC3 (rw) */
    Ifx_UReg_32Bit VBS3:1;            /**< \brief [15:15] Verbose Mode - VBS3 (rw) */
    Ifx_UReg_32Bit MSG4:1;            /**< \brief [16:16] Messaging Bits - MSG4 (rw) */
    Ifx_UReg_32Bit CRC4:1;            /**< \brief [17:17] CRC or Parit4 Selection - CRC4 (rw) */
    Ifx_UReg_32Bit FEC4:1;            /**< \brief [18:18] Frame Expectation Control - FEC4 (rw) */
    Ifx_UReg_32Bit VBS4:1;            /**< \brief [19:19] Verbose Mode - VBS4 (rw) */
    Ifx_UReg_32Bit MSG5:1;            /**< \brief [20:20] Messaging Bits - MSG5 (rw) */
    Ifx_UReg_32Bit CRC5:1;            /**< \brief [21:21] CRC or Parit5 Selection - CRC5 (rw) */
    Ifx_UReg_32Bit FEC5:1;            /**< \brief [22:22] Frame Expectation Control - FEC5 (rw) */
    Ifx_UReg_32Bit VBS5:1;            /**< \brief [23:23] Verbose Mode - VBS5 (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5_CH_RCRB_Bits;

/** \brief Receiver Control Register C ${x} */
typedef struct _Ifx_PSI5_CH_RCRC_Bits
{
    Ifx_UReg_32Bit BRS:1;             /**< \brief [0:0] Bit Rate Select - BRS (rw) */
    Ifx_UReg_32Bit TSP:2;             /**< \brief [2:1] Time Stamp Select for Pulses - TSP (rw) */
    Ifx_UReg_32Bit TSF:2;             /**< \brief [4:3] Time Stamp Select for Start of Frame (SOF) - TSF (rw) */
    Ifx_UReg_32Bit TSR:1;             /**< \brief [5:5] Time Stamp Select for Receive Data Registers - TSR (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_PSI5_CH_RCRC_Bits;

/** \brief Receive Data Register High ${x} */
typedef struct _Ifx_PSI5_CH_RDRH_Bits
{
    Ifx_UReg_32Bit TS:24;             /**< \brief [23:0] Time Stamp - TS (rh) */
    Ifx_UReg_32Bit SC:3;              /**< \brief [26:24] Slot Counter - SC (rh) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [27:27] Time Slot Error Flag - TEI (rh) */
    Ifx_UReg_32Bit NBI:1;             /**< \brief [28:28] Number of bits Error Flag - NBI (rh) */
    Ifx_UReg_32Bit MEI:1;             /**< \brief [29:29] Error in Message Bits Flag - MEI (rh) */
    Ifx_UReg_32Bit NFI:1;             /**< \brief [30:30] No Frame Received Flag - NFI (rh) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [31:31] Receive Buffer Overflow Flag - RBI (rh) */
} Ifx_PSI5_CH_RDRH_Bits;

/** \brief Receive Data Register Low ${x} */
typedef struct _Ifx_PSI5_CH_RDRL_Bits
{
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [0:0] CRC Error Flag - CRCI (rh) */
    Ifx_UReg_32Bit CRC:3;             /**< \brief [3:1] CRC - CRC (rh) */
    Ifx_UReg_32Bit RD:28;             /**< \brief [31:4] RD - RD (rh) */
} Ifx_PSI5_CH_RDRL_Bits;

/** \brief Receive Status Register ${x} */
typedef struct _Ifx_PSI5_CH_RSR_Bits
{
    Ifx_UReg_32Bit CRC:3;             /**< \brief [2:0] CRC - CRC (r) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit MSG:2;             /**< \brief [9:8] Messaging Bits - MSG (r) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_PSI5_CH_RSR_Bits;

/** \brief Send Control Register ${x} */
typedef struct _Ifx_PSI5_CH_SCR_Bits
{
    Ifx_UReg_32Bit PLL:6;             /**< \brief [5:0] Pay Load Length of Registers SDRL/H - PLL (rw) */
    Ifx_UReg_32Bit EPS:1;             /**< \brief [6:6] Enhanced Protocol Selection - EPS (rw) */
    Ifx_UReg_32Bit BSC:1;             /**< \brief [7:7] Bit Stuffing Control - BSC (rw) */
    Ifx_UReg_32Bit SSL:6;             /**< \brief [13:8] Pay Load Length of Registers SSRL/H - SSL (rw) */
    Ifx_UReg_32Bit FLUS:1;            /**< \brief [14:14] Flush SSRH/Lx - FLUS (w) */
    Ifx_UReg_32Bit FLUO:1;            /**< \brief [15:15] Flush SORH/Lx - FLUO (w) */
    Ifx_UReg_32Bit SOL:6;             /**< \brief [21:16] Pay Load Length of Registers SORL/H - SOL (rw) */
    Ifx_UReg_32Bit CRC:1;             /**< \brief [22:22] CRC Generation Control - CRC (rw) */
    Ifx_UReg_32Bit STA:1;             /**< \brief [23:23] Start Sequence Generation Control - STA (rw) */
    Ifx_UReg_32Bit INH:1;             /**< \brief [24:24] Inhibit Transfer - INH (rw) */
    Ifx_UReg_32Bit GO:1;              /**< \brief [25:25] Release prepared Send data - GO (w) */
    Ifx_UReg_32Bit TPF:1;             /**< \brief [26:26] Transmit Preparation Flag - TPF (r) */
    Ifx_UReg_32Bit TSF:1;             /**< \brief [27:27] Transmit Shift Flag - TSF (r) */
    Ifx_UReg_32Bit TOF:1;             /**< \brief [28:28] Transmit Output Flag - TOF (r) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit TRQ:1;             /**< \brief [31:31] Transfer Request in Progress - TRQ (r) */
} Ifx_PSI5_CH_SCR_Bits;

/** \brief Send Data Register High ${x} */
typedef struct _Ifx_PSI5_CH_SDRH_Bits
{
    Ifx_UReg_32Bit SD32:1;            /**< \brief [0:0] SD32 - SD32 (rw) */
    Ifx_UReg_32Bit SD33:1;            /**< \brief [1:1] SD33 - SD33 (rw) */
    Ifx_UReg_32Bit SD34:1;            /**< \brief [2:2] SD34 - SD34 (rw) */
    Ifx_UReg_32Bit SD35:1;            /**< \brief [3:3] SD35 - SD35 (rw) */
    Ifx_UReg_32Bit SD36:1;            /**< \brief [4:4] SD36 - SD36 (rw) */
    Ifx_UReg_32Bit SD37:1;            /**< \brief [5:5] SD37 - SD37 (rw) */
    Ifx_UReg_32Bit SD38:1;            /**< \brief [6:6] SD38 - SD38 (rw) */
    Ifx_UReg_32Bit SD39:1;            /**< \brief [7:7] SD39 - SD39 (rw) */
    Ifx_UReg_32Bit SD40:1;            /**< \brief [8:8] SD40 - SD40 (rw) */
    Ifx_UReg_32Bit SD41:1;            /**< \brief [9:9] SD41 - SD41 (rw) */
    Ifx_UReg_32Bit SD42:1;            /**< \brief [10:10] SD42 - SD42 (rw) */
    Ifx_UReg_32Bit SD43:1;            /**< \brief [11:11] SD43 - SD43 (rw) */
    Ifx_UReg_32Bit SD44:1;            /**< \brief [12:12] SD44 - SD44 (rw) */
    Ifx_UReg_32Bit SD45:1;            /**< \brief [13:13] SD45 - SD45 (rw) */
    Ifx_UReg_32Bit SD46:1;            /**< \brief [14:14] SD46 - SD46 (rw) */
    Ifx_UReg_32Bit SD47:1;            /**< \brief [15:15] SD47 - SD47 (rw) */
    Ifx_UReg_32Bit SD48:1;            /**< \brief [16:16] SD48 - SD48 (rw) */
    Ifx_UReg_32Bit SD49:1;            /**< \brief [17:17] SD49 - SD49 (rw) */
    Ifx_UReg_32Bit SD50:1;            /**< \brief [18:18] SD50 - SD50 (rw) */
    Ifx_UReg_32Bit SD51:1;            /**< \brief [19:19] SD51 - SD51 (rw) */
    Ifx_UReg_32Bit SD52:1;            /**< \brief [20:20] SD52 - SD52 (rw) */
    Ifx_UReg_32Bit SD53:1;            /**< \brief [21:21] SD53 - SD53 (rw) */
    Ifx_UReg_32Bit SD54:1;            /**< \brief [22:22] SD54 - SD54 (rw) */
    Ifx_UReg_32Bit SD55:1;            /**< \brief [23:23] SD55 - SD55 (rw) */
    Ifx_UReg_32Bit SD56:1;            /**< \brief [24:24] SD56 - SD56 (rw) */
    Ifx_UReg_32Bit SD57:1;            /**< \brief [25:25] SD57 - SD57 (rw) */
    Ifx_UReg_32Bit SD58:1;            /**< \brief [26:26] SD58 - SD58 (rw) */
    Ifx_UReg_32Bit SD59:1;            /**< \brief [27:27] SD59 - SD59 (rw) */
    Ifx_UReg_32Bit SD60:1;            /**< \brief [28:28] SD60 - SD60 (rw) */
    Ifx_UReg_32Bit SD61:1;            /**< \brief [29:29] SD61 - SD61 (rw) */
    Ifx_UReg_32Bit SD62:1;            /**< \brief [30:30] SD62 - SD62 (rw) */
    Ifx_UReg_32Bit SD63:1;            /**< \brief [31:31] SD63 - SD63 (rw) */
} Ifx_PSI5_CH_SDRH_Bits;

/** \brief Send Data Register Low ${x} */
typedef struct _Ifx_PSI5_CH_SDRL_Bits
{
    Ifx_UReg_32Bit SD0:1;             /**< \brief [0:0] SD0 - SD0 (rw) */
    Ifx_UReg_32Bit SD1:1;             /**< \brief [1:1] SD1 - SD1 (rw) */
    Ifx_UReg_32Bit SD2:1;             /**< \brief [2:2] SD2 - SD2 (rw) */
    Ifx_UReg_32Bit SD3:1;             /**< \brief [3:3] SD3 - SD3 (rw) */
    Ifx_UReg_32Bit SD4:1;             /**< \brief [4:4] SD4 - SD4 (rw) */
    Ifx_UReg_32Bit SD5:1;             /**< \brief [5:5] SD5 - SD5 (rw) */
    Ifx_UReg_32Bit SD6:1;             /**< \brief [6:6] SD6 - SD6 (rw) */
    Ifx_UReg_32Bit SD7:1;             /**< \brief [7:7] SD7 - SD7 (rw) */
    Ifx_UReg_32Bit SD8:1;             /**< \brief [8:8] SD8 - SD8 (rw) */
    Ifx_UReg_32Bit SD9:1;             /**< \brief [9:9] SD9 - SD9 (rw) */
    Ifx_UReg_32Bit SD10:1;            /**< \brief [10:10] SD10 - SD10 (rw) */
    Ifx_UReg_32Bit SD11:1;            /**< \brief [11:11] SD11 - SD11 (rw) */
    Ifx_UReg_32Bit SD12:1;            /**< \brief [12:12] SD12 - SD12 (rw) */
    Ifx_UReg_32Bit SD13:1;            /**< \brief [13:13] SD13 - SD13 (rw) */
    Ifx_UReg_32Bit SD14:1;            /**< \brief [14:14] SD14 - SD14 (rw) */
    Ifx_UReg_32Bit SD15:1;            /**< \brief [15:15] SD15 - SD15 (rw) */
    Ifx_UReg_32Bit SD16:1;            /**< \brief [16:16] SD16 - SD16 (rw) */
    Ifx_UReg_32Bit SD17:1;            /**< \brief [17:17] SD17 - SD17 (rw) */
    Ifx_UReg_32Bit SD18:1;            /**< \brief [18:18] SD18 - SD18 (rw) */
    Ifx_UReg_32Bit SD19:1;            /**< \brief [19:19] SD19 - SD19 (rw) */
    Ifx_UReg_32Bit SD20:1;            /**< \brief [20:20] SD20 - SD20 (rw) */
    Ifx_UReg_32Bit SD21:1;            /**< \brief [21:21] SD21 - SD21 (rw) */
    Ifx_UReg_32Bit SD22:1;            /**< \brief [22:22] SD22 - SD22 (rw) */
    Ifx_UReg_32Bit SD23:1;            /**< \brief [23:23] SD23 - SD23 (rw) */
    Ifx_UReg_32Bit SD24:1;            /**< \brief [24:24] SD24 - SD24 (rw) */
    Ifx_UReg_32Bit SD25:1;            /**< \brief [25:25] SD25 - SD25 (rw) */
    Ifx_UReg_32Bit SD26:1;            /**< \brief [26:26] SD26 - SD26 (rw) */
    Ifx_UReg_32Bit SD27:1;            /**< \brief [27:27] SD27 - SD27 (rw) */
    Ifx_UReg_32Bit SD28:1;            /**< \brief [28:28] SD28 - SD28 (rw) */
    Ifx_UReg_32Bit SD29:1;            /**< \brief [29:29] SD29 - SD29 (rw) */
    Ifx_UReg_32Bit SD30:1;            /**< \brief [30:30] SD30 - SD30 (rw) */
    Ifx_UReg_32Bit SD31:1;            /**< \brief [31:31] SD31 - SD31 (rw) */
} Ifx_PSI5_CH_SDRL_Bits;

/** \brief Serial Data and Status Register ${x}${z} */
typedef struct _Ifx_PSI5_CH_SDS_Bits
{
    Ifx_UReg_32Bit SD:16;             /**< \brief [15:0] Serial Data - SD (r) */
    Ifx_UReg_32Bit MID:8;             /**< \brief [23:16] Message ID - MID (r) */
    Ifx_UReg_32Bit SCRC:6;            /**< \brief [29:24] SCRC - SCRC (r) */
    Ifx_UReg_32Bit SCRI:1;            /**< \brief [30:30] CRC of Serial Message failed Interrupt Flag. - SCRI (r) */
    Ifx_UReg_32Bit CON:1;             /**< \brief [31:31] Configuration bit - CON (r) */
} Ifx_PSI5_CH_SDS_Bits;

/** \brief Start of Frame Time Stamp Capture Register ${x} */
typedef struct _Ifx_PSI5_CH_SFTSC_Bits
{
    Ifx_UReg_32Bit TS:24;             /**< \brief [23:0] Time Stamp - TS (rh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5_CH_SFTSC_Bits;

/** \brief Send Output Register High ${x} */
typedef struct _Ifx_PSI5_CH_SORH_Bits
{
    Ifx_UReg_32Bit SD32:1;            /**< \brief [0:0] SD32 - SD32 (rwh) */
    Ifx_UReg_32Bit SD33:1;            /**< \brief [1:1] SD33 - SD33 (rwh) */
    Ifx_UReg_32Bit SD34:1;            /**< \brief [2:2] SD34 - SD34 (rwh) */
    Ifx_UReg_32Bit SD35:1;            /**< \brief [3:3] SD35 - SD35 (rwh) */
    Ifx_UReg_32Bit SD36:1;            /**< \brief [4:4] SD36 - SD36 (rwh) */
    Ifx_UReg_32Bit SD37:1;            /**< \brief [5:5] SD37 - SD37 (rwh) */
    Ifx_UReg_32Bit SD38:1;            /**< \brief [6:6] SD38 - SD38 (rwh) */
    Ifx_UReg_32Bit SD39:1;            /**< \brief [7:7] SD39 - SD39 (rwh) */
    Ifx_UReg_32Bit SD40:1;            /**< \brief [8:8] SD40 - SD40 (rwh) */
    Ifx_UReg_32Bit SD41:1;            /**< \brief [9:9] SD41 - SD41 (rwh) */
    Ifx_UReg_32Bit SD42:1;            /**< \brief [10:10] SD42 - SD42 (rwh) */
    Ifx_UReg_32Bit SD43:1;            /**< \brief [11:11] SD43 - SD43 (rwh) */
    Ifx_UReg_32Bit SD44:1;            /**< \brief [12:12] SD44 - SD44 (rwh) */
    Ifx_UReg_32Bit SD45:1;            /**< \brief [13:13] SD45 - SD45 (rwh) */
    Ifx_UReg_32Bit SD46:1;            /**< \brief [14:14] SD46 - SD46 (rwh) */
    Ifx_UReg_32Bit SD47:1;            /**< \brief [15:15] SD47 - SD47 (rwh) */
    Ifx_UReg_32Bit SD48:1;            /**< \brief [16:16] SD48 - SD48 (rwh) */
    Ifx_UReg_32Bit SD49:1;            /**< \brief [17:17] SD49 - SD49 (rwh) */
    Ifx_UReg_32Bit SD50:1;            /**< \brief [18:18] SD50 - SD50 (rwh) */
    Ifx_UReg_32Bit SD51:1;            /**< \brief [19:19] SD51 - SD51 (rwh) */
    Ifx_UReg_32Bit SD52:1;            /**< \brief [20:20] SD52 - SD52 (rwh) */
    Ifx_UReg_32Bit SD53:1;            /**< \brief [21:21] SD53 - SD53 (rwh) */
    Ifx_UReg_32Bit SD54:1;            /**< \brief [22:22] SD54 - SD54 (rwh) */
    Ifx_UReg_32Bit SD55:1;            /**< \brief [23:23] SD55 - SD55 (rwh) */
    Ifx_UReg_32Bit SD56:1;            /**< \brief [24:24] SD56 - SD56 (rwh) */
    Ifx_UReg_32Bit SD57:1;            /**< \brief [25:25] SD57 - SD57 (rwh) */
    Ifx_UReg_32Bit SD58:1;            /**< \brief [26:26] SD58 - SD58 (rwh) */
    Ifx_UReg_32Bit SD59:1;            /**< \brief [27:27] SD59 - SD59 (rwh) */
    Ifx_UReg_32Bit SD60:1;            /**< \brief [28:28] SD60 - SD60 (rwh) */
    Ifx_UReg_32Bit SD61:1;            /**< \brief [29:29] SD61 - SD61 (rwh) */
    Ifx_UReg_32Bit SD62:1;            /**< \brief [30:30] SD62 - SD62 (rwh) */
    Ifx_UReg_32Bit SD63:1;            /**< \brief [31:31] SD63 - SD63 (rwh) */
} Ifx_PSI5_CH_SORH_Bits;

/** \brief Send Output Register Low ${x} */
typedef struct _Ifx_PSI5_CH_SORL_Bits
{
    Ifx_UReg_32Bit SD0:1;             /**< \brief [0:0] SD0 - SD0 (rwh) */
    Ifx_UReg_32Bit SD1:1;             /**< \brief [1:1] SD1 - SD1 (rwh) */
    Ifx_UReg_32Bit SD2:1;             /**< \brief [2:2] SD2 - SD2 (rwh) */
    Ifx_UReg_32Bit SD3:1;             /**< \brief [3:3] SD3 - SD3 (rwh) */
    Ifx_UReg_32Bit SD4:1;             /**< \brief [4:4] SD4 - SD4 (rwh) */
    Ifx_UReg_32Bit SD5:1;             /**< \brief [5:5] SD5 - SD5 (rwh) */
    Ifx_UReg_32Bit SD6:1;             /**< \brief [6:6] SD6 - SD6 (rwh) */
    Ifx_UReg_32Bit SD7:1;             /**< \brief [7:7] SD7 - SD7 (rwh) */
    Ifx_UReg_32Bit SD8:1;             /**< \brief [8:8] SD8 - SD8 (rwh) */
    Ifx_UReg_32Bit SD9:1;             /**< \brief [9:9] SD9 - SD9 (rwh) */
    Ifx_UReg_32Bit SD10:1;            /**< \brief [10:10] SD10 - SD10 (rwh) */
    Ifx_UReg_32Bit SD11:1;            /**< \brief [11:11] SD11 - SD11 (rwh) */
    Ifx_UReg_32Bit SD12:1;            /**< \brief [12:12] SD12 - SD12 (rwh) */
    Ifx_UReg_32Bit SD13:1;            /**< \brief [13:13] SD13 - SD13 (rwh) */
    Ifx_UReg_32Bit SD14:1;            /**< \brief [14:14] SD14 - SD14 (rwh) */
    Ifx_UReg_32Bit SD15:1;            /**< \brief [15:15] SD15 - SD15 (rwh) */
    Ifx_UReg_32Bit SD16:1;            /**< \brief [16:16] SD16 - SD16 (rwh) */
    Ifx_UReg_32Bit SD17:1;            /**< \brief [17:17] SD17 - SD17 (rwh) */
    Ifx_UReg_32Bit SD18:1;            /**< \brief [18:18] SD18 - SD18 (rwh) */
    Ifx_UReg_32Bit SD19:1;            /**< \brief [19:19] SD19 - SD19 (rwh) */
    Ifx_UReg_32Bit SD20:1;            /**< \brief [20:20] SD20 - SD20 (rwh) */
    Ifx_UReg_32Bit SD21:1;            /**< \brief [21:21] SD21 - SD21 (rwh) */
    Ifx_UReg_32Bit SD22:1;            /**< \brief [22:22] SD22 - SD22 (rwh) */
    Ifx_UReg_32Bit SD23:1;            /**< \brief [23:23] SD23 - SD23 (rwh) */
    Ifx_UReg_32Bit SD24:1;            /**< \brief [24:24] SD24 - SD24 (rwh) */
    Ifx_UReg_32Bit SD25:1;            /**< \brief [25:25] SD25 - SD25 (rwh) */
    Ifx_UReg_32Bit SD26:1;            /**< \brief [26:26] SD26 - SD26 (rwh) */
    Ifx_UReg_32Bit SD27:1;            /**< \brief [27:27] SD27 - SD27 (rwh) */
    Ifx_UReg_32Bit SD28:1;            /**< \brief [28:28] SD28 - SD28 (rwh) */
    Ifx_UReg_32Bit SD29:1;            /**< \brief [29:29] SD29 - SD29 (rwh) */
    Ifx_UReg_32Bit SD30:1;            /**< \brief [30:30] SD30 - SD30 (rwh) */
    Ifx_UReg_32Bit SD31:1;            /**< \brief [31:31] SD31 - SD31 (rwh) */
} Ifx_PSI5_CH_SORL_Bits;

/** \brief Start of Pulse Time Stamp Capture Register ${x} */
typedef struct _Ifx_PSI5_CH_SPTSC_Bits
{
    Ifx_UReg_32Bit TS:24;             /**< \brief [23:0] Time Stamp - TS (rh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5_CH_SPTSC_Bits;

/** \brief Send Shift Register High ${x} */
typedef struct _Ifx_PSI5_CH_SSRH_Bits
{
    Ifx_UReg_32Bit SD32:1;            /**< \brief [0:0] SD32 - SD32 (rwh) */
    Ifx_UReg_32Bit SD33:1;            /**< \brief [1:1] SD33 - SD33 (rwh) */
    Ifx_UReg_32Bit SD34:1;            /**< \brief [2:2] SD34 - SD34 (rwh) */
    Ifx_UReg_32Bit SD35:1;            /**< \brief [3:3] SD35 - SD35 (rwh) */
    Ifx_UReg_32Bit SD36:1;            /**< \brief [4:4] SD36 - SD36 (rwh) */
    Ifx_UReg_32Bit SD37:1;            /**< \brief [5:5] SD37 - SD37 (rwh) */
    Ifx_UReg_32Bit SD38:1;            /**< \brief [6:6] SD38 - SD38 (rwh) */
    Ifx_UReg_32Bit SD39:1;            /**< \brief [7:7] SD39 - SD39 (rwh) */
    Ifx_UReg_32Bit SD40:1;            /**< \brief [8:8] SD40 - SD40 (rwh) */
    Ifx_UReg_32Bit SD41:1;            /**< \brief [9:9] SD41 - SD41 (rwh) */
    Ifx_UReg_32Bit SD42:1;            /**< \brief [10:10] SD42 - SD42 (rwh) */
    Ifx_UReg_32Bit SD43:1;            /**< \brief [11:11] SD43 - SD43 (rwh) */
    Ifx_UReg_32Bit SD44:1;            /**< \brief [12:12] SD44 - SD44 (rwh) */
    Ifx_UReg_32Bit SD45:1;            /**< \brief [13:13] SD45 - SD45 (rwh) */
    Ifx_UReg_32Bit SD46:1;            /**< \brief [14:14] SD46 - SD46 (rwh) */
    Ifx_UReg_32Bit SD47:1;            /**< \brief [15:15] SD47 - SD47 (rwh) */
    Ifx_UReg_32Bit SD48:1;            /**< \brief [16:16] SD48 - SD48 (rwh) */
    Ifx_UReg_32Bit SD49:1;            /**< \brief [17:17] SD49 - SD49 (rwh) */
    Ifx_UReg_32Bit SD50:1;            /**< \brief [18:18] SD50 - SD50 (rwh) */
    Ifx_UReg_32Bit SD51:1;            /**< \brief [19:19] SD51 - SD51 (rwh) */
    Ifx_UReg_32Bit SD52:1;            /**< \brief [20:20] SD52 - SD52 (rwh) */
    Ifx_UReg_32Bit SD53:1;            /**< \brief [21:21] SD53 - SD53 (rwh) */
    Ifx_UReg_32Bit SD54:1;            /**< \brief [22:22] SD54 - SD54 (rwh) */
    Ifx_UReg_32Bit SD55:1;            /**< \brief [23:23] SD55 - SD55 (rwh) */
    Ifx_UReg_32Bit SD56:1;            /**< \brief [24:24] SD56 - SD56 (rwh) */
    Ifx_UReg_32Bit SD57:1;            /**< \brief [25:25] SD57 - SD57 (rwh) */
    Ifx_UReg_32Bit SD58:1;            /**< \brief [26:26] SD58 - SD58 (rwh) */
    Ifx_UReg_32Bit SD59:1;            /**< \brief [27:27] SD59 - SD59 (rwh) */
    Ifx_UReg_32Bit SD60:1;            /**< \brief [28:28] SD60 - SD60 (rwh) */
    Ifx_UReg_32Bit SD61:1;            /**< \brief [29:29] SD61 - SD61 (rwh) */
    Ifx_UReg_32Bit SD62:1;            /**< \brief [30:30] SD62 - SD62 (rwh) */
    Ifx_UReg_32Bit SD63:1;            /**< \brief [31:31] SD63 - SD63 (rwh) */
} Ifx_PSI5_CH_SSRH_Bits;

/** \brief Send Shift Register Low ${x} */
typedef struct _Ifx_PSI5_CH_SSRL_Bits
{
    Ifx_UReg_32Bit SD0:1;             /**< \brief [0:0] SD0 - SD0 (rwh) */
    Ifx_UReg_32Bit SD1:1;             /**< \brief [1:1] SD1 - SD1 (rwh) */
    Ifx_UReg_32Bit SD2:1;             /**< \brief [2:2] SD2 - SD2 (rwh) */
    Ifx_UReg_32Bit SD3:1;             /**< \brief [3:3] SD3 - SD3 (rwh) */
    Ifx_UReg_32Bit SD4:1;             /**< \brief [4:4] SD4 - SD4 (rwh) */
    Ifx_UReg_32Bit SD5:1;             /**< \brief [5:5] SD5 - SD5 (rwh) */
    Ifx_UReg_32Bit SD6:1;             /**< \brief [6:6] SD6 - SD6 (rwh) */
    Ifx_UReg_32Bit SD7:1;             /**< \brief [7:7] SD7 - SD7 (rwh) */
    Ifx_UReg_32Bit SD8:1;             /**< \brief [8:8] SD8 - SD8 (rwh) */
    Ifx_UReg_32Bit SD9:1;             /**< \brief [9:9] SD9 - SD9 (rwh) */
    Ifx_UReg_32Bit SD10:1;            /**< \brief [10:10] SD10 - SD10 (rwh) */
    Ifx_UReg_32Bit SD11:1;            /**< \brief [11:11] SD11 - SD11 (rwh) */
    Ifx_UReg_32Bit SD12:1;            /**< \brief [12:12] SD12 - SD12 (rwh) */
    Ifx_UReg_32Bit SD13:1;            /**< \brief [13:13] SD13 - SD13 (rwh) */
    Ifx_UReg_32Bit SD14:1;            /**< \brief [14:14] SD14 - SD14 (rwh) */
    Ifx_UReg_32Bit SD15:1;            /**< \brief [15:15] SD15 - SD15 (rwh) */
    Ifx_UReg_32Bit SD16:1;            /**< \brief [16:16] SD16 - SD16 (rwh) */
    Ifx_UReg_32Bit SD17:1;            /**< \brief [17:17] SD17 - SD17 (rwh) */
    Ifx_UReg_32Bit SD18:1;            /**< \brief [18:18] SD18 - SD18 (rwh) */
    Ifx_UReg_32Bit SD19:1;            /**< \brief [19:19] SD19 - SD19 (rwh) */
    Ifx_UReg_32Bit SD20:1;            /**< \brief [20:20] SD20 - SD20 (rwh) */
    Ifx_UReg_32Bit SD21:1;            /**< \brief [21:21] SD21 - SD21 (rwh) */
    Ifx_UReg_32Bit SD22:1;            /**< \brief [22:22] SD22 - SD22 (rwh) */
    Ifx_UReg_32Bit SD23:1;            /**< \brief [23:23] SD23 - SD23 (rwh) */
    Ifx_UReg_32Bit SD24:1;            /**< \brief [24:24] SD24 - SD24 (rwh) */
    Ifx_UReg_32Bit SD25:1;            /**< \brief [25:25] SD25 - SD25 (rwh) */
    Ifx_UReg_32Bit SD26:1;            /**< \brief [26:26] SD26 - SD26 (rwh) */
    Ifx_UReg_32Bit SD27:1;            /**< \brief [27:27] SD27 - SD27 (rwh) */
    Ifx_UReg_32Bit SD28:1;            /**< \brief [28:28] SD28 - SD28 (rwh) */
    Ifx_UReg_32Bit SD29:1;            /**< \brief [29:29] SD29 - SD29 (rwh) */
    Ifx_UReg_32Bit SD30:1;            /**< \brief [30:30] SD30 - SD30 (rwh) */
    Ifx_UReg_32Bit SD31:1;            /**< \brief [31:31] SD31 - SD31 (rwh) */
} Ifx_PSI5_CH_SSRL_Bits;

/** \brief Watch Dog Timer Register ${x}${w} */
typedef struct _Ifx_PSI5_CH_WDT_Bits
{
    Ifx_UReg_32Bit WDL:16;            /**< \brief [15:0] Watch Dog Timer Limit - WDL (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_PSI5_CH_WDT_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_PSI5_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] External Sleep Mode Request Disable Bit - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_PSI5_CLC_Bits;

/** \brief CRCI Overview Clear Register ${x} */
typedef struct _Ifx_PSI5_CRCICLR_Bits
{
    Ifx_UReg_32Bit CRCI0:1;           /**< \brief [0:0] Clear CRCI Flag of Buffer 0 - CRCI0 (w) */
    Ifx_UReg_32Bit CRCI1:1;           /**< \brief [1:1] Clear CRCI Flag of Buffer 1 - CRCI1 (w) */
    Ifx_UReg_32Bit CRCI2:1;           /**< \brief [2:2] Clear CRCI Flag of Buffer 2 - CRCI2 (w) */
    Ifx_UReg_32Bit CRCI3:1;           /**< \brief [3:3] Clear CRCI Flag of Buffer 3 - CRCI3 (w) */
    Ifx_UReg_32Bit CRCI4:1;           /**< \brief [4:4] Clear CRCI Flag of Buffer 4 - CRCI4 (w) */
    Ifx_UReg_32Bit CRCI5:1;           /**< \brief [5:5] Clear CRCI Flag of Buffer 5 - CRCI5 (w) */
    Ifx_UReg_32Bit CRCI6:1;           /**< \brief [6:6] Clear CRCI Flag of Buffer 6 - CRCI6 (w) */
    Ifx_UReg_32Bit CRCI7:1;           /**< \brief [7:7] Clear CRCI Flag of Buffer 7 - CRCI7 (w) */
    Ifx_UReg_32Bit CRCI8:1;           /**< \brief [8:8] Clear CRCI Flag of Buffer 8 - CRCI8 (w) */
    Ifx_UReg_32Bit CRCI9:1;           /**< \brief [9:9] Clear CRCI Flag of Buffer 9 - CRCI9 (w) */
    Ifx_UReg_32Bit CRCI10:1;          /**< \brief [10:10] Clear CRCI Flag of Buffer 10 - CRCI10 (w) */
    Ifx_UReg_32Bit CRCI11:1;          /**< \brief [11:11] Clear CRCI Flag of Buffer 11 - CRCI11 (w) */
    Ifx_UReg_32Bit CRCI12:1;          /**< \brief [12:12] Clear CRCI Flag of Buffer 12 - CRCI12 (w) */
    Ifx_UReg_32Bit CRCI13:1;          /**< \brief [13:13] Clear CRCI Flag of Buffer 13 - CRCI13 (w) */
    Ifx_UReg_32Bit CRCI14:1;          /**< \brief [14:14] Clear CRCI Flag of Buffer 14 - CRCI14 (w) */
    Ifx_UReg_32Bit CRCI15:1;          /**< \brief [15:15] Clear CRCI Flag of Buffer 15 - CRCI15 (w) */
    Ifx_UReg_32Bit CRCI16:1;          /**< \brief [16:16] Clear CRCI Flag of Buffer 16 - CRCI16 (w) */
    Ifx_UReg_32Bit CRCI17:1;          /**< \brief [17:17] Clear CRCI Flag of Buffer 17 - CRCI17 (w) */
    Ifx_UReg_32Bit CRCI18:1;          /**< \brief [18:18] Clear CRCI Flag of Buffer 18 - CRCI18 (w) */
    Ifx_UReg_32Bit CRCI19:1;          /**< \brief [19:19] Clear CRCI Flag of Buffer 19 - CRCI19 (w) */
    Ifx_UReg_32Bit CRCI20:1;          /**< \brief [20:20] Clear CRCI Flag of Buffer 20 - CRCI20 (w) */
    Ifx_UReg_32Bit CRCI21:1;          /**< \brief [21:21] Clear CRCI Flag of Buffer 21 - CRCI21 (w) */
    Ifx_UReg_32Bit CRCI22:1;          /**< \brief [22:22] Clear CRCI Flag of Buffer 22 - CRCI22 (w) */
    Ifx_UReg_32Bit CRCI23:1;          /**< \brief [23:23] Clear CRCI Flag of Buffer 23 - CRCI23 (w) */
    Ifx_UReg_32Bit CRCI24:1;          /**< \brief [24:24] Clear CRCI Flag of Buffer 24 - CRCI24 (w) */
    Ifx_UReg_32Bit CRCI25:1;          /**< \brief [25:25] Clear CRCI Flag of Buffer 25 - CRCI25 (w) */
    Ifx_UReg_32Bit CRCI26:1;          /**< \brief [26:26] Clear CRCI Flag of Buffer 26 - CRCI26 (w) */
    Ifx_UReg_32Bit CRCI27:1;          /**< \brief [27:27] Clear CRCI Flag of Buffer 27 - CRCI27 (w) */
    Ifx_UReg_32Bit CRCI28:1;          /**< \brief [28:28] Clear CRCI Flag of Buffer 28 - CRCI28 (w) */
    Ifx_UReg_32Bit CRCI29:1;          /**< \brief [29:29] Clear CRCI Flag of Buffer 29 - CRCI29 (w) */
    Ifx_UReg_32Bit CRCI30:1;          /**< \brief [30:30] Clear CRCI Flag of Buffer 30 - CRCI30 (w) */
    Ifx_UReg_32Bit CRCI31:1;          /**< \brief [31:31] Clear CRCI Flag of Buffer 31 - CRCI31 (w) */
} Ifx_PSI5_CRCICLR_Bits;

/** \brief CRCI Overview Register ${x} */
typedef struct _Ifx_PSI5_CRCIOV_Bits
{
    Ifx_UReg_32Bit CRCI0:1;           /**< \brief [0:0] CRCI Flag of Buffer 0 - CRCI0 (rh) */
    Ifx_UReg_32Bit CRCI1:1;           /**< \brief [1:1] CRCI Flag of Buffer 1 - CRCI1 (rh) */
    Ifx_UReg_32Bit CRCI2:1;           /**< \brief [2:2] CRCI Flag of Buffer 2 - CRCI2 (rh) */
    Ifx_UReg_32Bit CRCI3:1;           /**< \brief [3:3] CRCI Flag of Buffer 3 - CRCI3 (rh) */
    Ifx_UReg_32Bit CRCI4:1;           /**< \brief [4:4] CRCI Flag of Buffer 4 - CRCI4 (rh) */
    Ifx_UReg_32Bit CRCI5:1;           /**< \brief [5:5] CRCI Flag of Buffer 5 - CRCI5 (rh) */
    Ifx_UReg_32Bit CRCI6:1;           /**< \brief [6:6] CRCI Flag of Buffer 6 - CRCI6 (rh) */
    Ifx_UReg_32Bit CRCI7:1;           /**< \brief [7:7] CRCI Flag of Buffer 7 - CRCI7 (rh) */
    Ifx_UReg_32Bit CRCI8:1;           /**< \brief [8:8] CRCI Flag of Buffer 8 - CRCI8 (rh) */
    Ifx_UReg_32Bit CRCI9:1;           /**< \brief [9:9] CRCI Flag of Buffer 9 - CRCI9 (rh) */
    Ifx_UReg_32Bit CRCI10:1;          /**< \brief [10:10] CRCI Flag of Buffer 10 - CRCI10 (rh) */
    Ifx_UReg_32Bit CRCI11:1;          /**< \brief [11:11] CRCI Flag of Buffer 11 - CRCI11 (rh) */
    Ifx_UReg_32Bit CRCI12:1;          /**< \brief [12:12] CRCI Flag of Buffer 12 - CRCI12 (rh) */
    Ifx_UReg_32Bit CRCI13:1;          /**< \brief [13:13] CRCI Flag of Buffer 13 - CRCI13 (rh) */
    Ifx_UReg_32Bit CRCI14:1;          /**< \brief [14:14] CRCI Flag of Buffer 14 - CRCI14 (rh) */
    Ifx_UReg_32Bit CRCI15:1;          /**< \brief [15:15] CRCI Flag of Buffer 15 - CRCI15 (rh) */
    Ifx_UReg_32Bit CRCI16:1;          /**< \brief [16:16] CRCI Flag of Buffer 16 - CRCI16 (rh) */
    Ifx_UReg_32Bit CRCI17:1;          /**< \brief [17:17] CRCI Flag of Buffer 17 - CRCI17 (rh) */
    Ifx_UReg_32Bit CRCI18:1;          /**< \brief [18:18] CRCI Flag of Buffer 18 - CRCI18 (rh) */
    Ifx_UReg_32Bit CRCI19:1;          /**< \brief [19:19] CRCI Flag of Buffer 19 - CRCI19 (rh) */
    Ifx_UReg_32Bit CRCI20:1;          /**< \brief [20:20] CRCI Flag of Buffer 20 - CRCI20 (rh) */
    Ifx_UReg_32Bit CRCI21:1;          /**< \brief [21:21] CRCI Flag of Buffer 21 - CRCI21 (rh) */
    Ifx_UReg_32Bit CRCI22:1;          /**< \brief [22:22] CRCI Flag of Buffer 22 - CRCI22 (rh) */
    Ifx_UReg_32Bit CRCI23:1;          /**< \brief [23:23] CRCI Flag of Buffer 23 - CRCI23 (rh) */
    Ifx_UReg_32Bit CRCI24:1;          /**< \brief [24:24] CRCI Flag of Buffer 24 - CRCI24 (rh) */
    Ifx_UReg_32Bit CRCI25:1;          /**< \brief [25:25] CRCI Flag of Buffer 25 - CRCI25 (rh) */
    Ifx_UReg_32Bit CRCI26:1;          /**< \brief [26:26] CRCI Flag of Buffer 26 - CRCI26 (rh) */
    Ifx_UReg_32Bit CRCI27:1;          /**< \brief [27:27] CRCI Flag of Buffer 27 - CRCI27 (rh) */
    Ifx_UReg_32Bit CRCI28:1;          /**< \brief [28:28] CRCI Flag of Buffer 28 - CRCI28 (rh) */
    Ifx_UReg_32Bit CRCI29:1;          /**< \brief [29:29] CRCI Flag of Buffer 29 - CRCI29 (rh) */
    Ifx_UReg_32Bit CRCI30:1;          /**< \brief [30:30] CRCI Flag of Buffer 30 - CRCI30 (rh) */
    Ifx_UReg_32Bit CRCI31:1;          /**< \brief [31:31] CRCI Flag of Buffer 31 - CRCI31 (rh) */
} Ifx_PSI5_CRCIOV_Bits;

/** \brief CRCI Overview Set Register ${x} */
typedef struct _Ifx_PSI5_CRCISET_Bits
{
    Ifx_UReg_32Bit CRCI0:1;           /**< \brief [0:0] Set CRCI Flag of Buffer 0 - CRCI0 (w) */
    Ifx_UReg_32Bit CRCI1:1;           /**< \brief [1:1] Set CRCI Flag of Buffer 1 - CRCI1 (w) */
    Ifx_UReg_32Bit CRCI2:1;           /**< \brief [2:2] Set CRCI Flag of Buffer 2 - CRCI2 (w) */
    Ifx_UReg_32Bit CRCI3:1;           /**< \brief [3:3] Set CRCI Flag of Buffer 3 - CRCI3 (w) */
    Ifx_UReg_32Bit CRCI4:1;           /**< \brief [4:4] Set CRCI Flag of Buffer 4 - CRCI4 (w) */
    Ifx_UReg_32Bit CRCI5:1;           /**< \brief [5:5] Set CRCI Flag of Buffer 5 - CRCI5 (w) */
    Ifx_UReg_32Bit CRCI6:1;           /**< \brief [6:6] Set CRCI Flag of Buffer 6 - CRCI6 (w) */
    Ifx_UReg_32Bit CRCI7:1;           /**< \brief [7:7] Set CRCI Flag of Buffer 7 - CRCI7 (w) */
    Ifx_UReg_32Bit CRCI8:1;           /**< \brief [8:8] Set CRCI Flag of Buffer 8 - CRCI8 (w) */
    Ifx_UReg_32Bit CRCI9:1;           /**< \brief [9:9] Set CRCI Flag of Buffer 9 - CRCI9 (w) */
    Ifx_UReg_32Bit CRCI10:1;          /**< \brief [10:10] Set CRCI Flag of Buffer 10 - CRCI10 (w) */
    Ifx_UReg_32Bit CRCI11:1;          /**< \brief [11:11] Set CRCI Flag of Buffer 11 - CRCI11 (w) */
    Ifx_UReg_32Bit CRCI12:1;          /**< \brief [12:12] Set CRCI Flag of Buffer 12 - CRCI12 (w) */
    Ifx_UReg_32Bit CRCI13:1;          /**< \brief [13:13] Set CRCI Flag of Buffer 13 - CRCI13 (w) */
    Ifx_UReg_32Bit CRCI14:1;          /**< \brief [14:14] Set CRCI Flag of Buffer 14 - CRCI14 (w) */
    Ifx_UReg_32Bit CRCI15:1;          /**< \brief [15:15] Set CRCI Flag of Buffer 15 - CRCI15 (w) */
    Ifx_UReg_32Bit CRCI16:1;          /**< \brief [16:16] Set CRCI Flag of Buffer 16 - CRCI16 (w) */
    Ifx_UReg_32Bit CRCI17:1;          /**< \brief [17:17] Set CRCI Flag of Buffer 17 - CRCI17 (w) */
    Ifx_UReg_32Bit CRCI18:1;          /**< \brief [18:18] Set CRCI Flag of Buffer 18 - CRCI18 (w) */
    Ifx_UReg_32Bit CRCI19:1;          /**< \brief [19:19] Set CRCI Flag of Buffer 19 - CRCI19 (w) */
    Ifx_UReg_32Bit CRCI20:1;          /**< \brief [20:20] Set CRCI Flag of Buffer 20 - CRCI20 (w) */
    Ifx_UReg_32Bit CRCI21:1;          /**< \brief [21:21] Set CRCI Flag of Buffer 21 - CRCI21 (w) */
    Ifx_UReg_32Bit CRCI22:1;          /**< \brief [22:22] Set CRCI Flag of Buffer 22 - CRCI22 (w) */
    Ifx_UReg_32Bit CRCI23:1;          /**< \brief [23:23] Set CRCI Flag of Buffer 23 - CRCI23 (w) */
    Ifx_UReg_32Bit CRCI24:1;          /**< \brief [24:24] Set CRCI Flag of Buffer 24 - CRCI24 (w) */
    Ifx_UReg_32Bit CRCI25:1;          /**< \brief [25:25] Set CRCI Flag of Buffer 25 - CRCI25 (w) */
    Ifx_UReg_32Bit CRCI26:1;          /**< \brief [26:26] Set CRCI Flag of Buffer 26 - CRCI26 (w) */
    Ifx_UReg_32Bit CRCI27:1;          /**< \brief [27:27] Set CRCI Flag of Buffer 27 - CRCI27 (w) */
    Ifx_UReg_32Bit CRCI28:1;          /**< \brief [28:28] Set CRCI Flag of Buffer 28 - CRCI28 (w) */
    Ifx_UReg_32Bit CRCI29:1;          /**< \brief [29:29] Set CRCI Flag of Buffer 29 - CRCI29 (w) */
    Ifx_UReg_32Bit CRCI30:1;          /**< \brief [30:30] Set CRCI Flag of Buffer 30 - CRCI30 (w) */
    Ifx_UReg_32Bit CRCI31:1;          /**< \brief [31:31] Set CRCI Flag of Buffer 31 - CRCI31 (w) */
} Ifx_PSI5_CRCISET_Bits;

/** \brief PSI5 Fractional Divider Register */
typedef struct _Ifx_PSI5_FDR_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_PSI5_FDR_Bits;

/** \brief Fractional Divider Register for Higher Bit Rate */
typedef struct _Ifx_PSI5_FDRH_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_PSI5_FDRH_Bits;

/** \brief Fractional Divider Register for Lower Bit Rate */
typedef struct _Ifx_PSI5_FDRL_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_PSI5_FDRL_Bits;

/** \brief Fractional Divider Register for Time Stamp */
typedef struct _Ifx_PSI5_FDRT_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit ECS:3;             /**< \brief [28:26] External Time Stamp Clear Source Select - ECS (rw) */
    Ifx_UReg_32Bit ECEA:1;            /**< \brief [29:29] External Time Stamp Clear Enable A - ECEA (rw) */
    Ifx_UReg_32Bit ECEB:1;            /**< \brief [30:30] External Time Stamp Clear Enable B - ECEB (rw) */
    Ifx_UReg_32Bit ECEC:1;            /**< \brief [31:31] External Time Stamp Clear Enable C - ECEC (rw) */
} Ifx_PSI5_FDRT_Bits;

/** \brief Global Control Register */
typedef struct _Ifx_PSI5_GCR_Bits
{
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [0:0] CRCI - CRCI (rw) */
    Ifx_UReg_32Bit NBI:1;             /**< \brief [1:1] NBI - NBI (rw) */
    Ifx_UReg_32Bit MEI:1;             /**< \brief [2:2] MEI - MEI (rw) */
    Ifx_UReg_32Bit NFI:1;             /**< \brief [3:3] NFI - NFI (rw) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [4:4] TEI - TEI (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit ETC0:1;            /**< \brief [8:8] Enable Channel Trigger Counter CTV0.CTC - ETC0 (rw) */
    Ifx_UReg_32Bit ETC1:1;            /**< \brief [9:9] Enable Channel Trigger Counter CTV1.CTC - ETC1 (rw) */
    Ifx_UReg_32Bit ETC2:1;            /**< \brief [10:10] Enable Channel Trigger Counter CTV2.CTC - ETC2 (rw) */
    Ifx_UReg_32Bit ETC3:1;            /**< \brief [11:11] Enable Channel Trigger Counter CTV3.CTC - ETC3 (rw) */
    Ifx_UReg_32Bit ETC4:1;            /**< \brief [12:12] Enable Channel Trigger Counter CTV4.CTC - ETC4 (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit CEN0:1;            /**< \brief [16:16] Enable Channel - CEN0 (rw) */
    Ifx_UReg_32Bit CEN1:1;            /**< \brief [17:17] Enable Channel - CEN1 (rw) */
    Ifx_UReg_32Bit CEN2:1;            /**< \brief [18:18] Enable Channel - CEN2 (rw) */
    Ifx_UReg_32Bit CEN3:1;            /**< \brief [19:19] Enable Channel - CEN3 (rw) */
    Ifx_UReg_32Bit CEN4:1;            /**< \brief [20:20] Enable Channel - CEN4 (rw) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_PSI5_GCR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_PSI5_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUM:16;         /**< \brief [31:16] Module Number Value - MODNUM (r) */
} Ifx_PSI5_ID_Bits;

/** \brief Interrupt Node Pointer Register ${x} */
typedef struct _Ifx_PSI5_INP_Bits
{
    Ifx_UReg_32Bit RSI:4;             /**< \brief [3:0] Interrupt Node Pointer for Interrupt RSI - RSI (rw) */
    Ifx_UReg_32Bit RDI:4;             /**< \brief [7:4] Interrupt Node Pointer for Interrupt RDI - RDI (rw) */
    Ifx_UReg_32Bit RBI:4;             /**< \brief [11:8] Interrupt Node Pointer for Interrupt RBI - RBI (rw) */
    Ifx_UReg_32Bit TDI:4;             /**< \brief [15:12] Interrupt Node Pointer for Interrupt TDI - TDI (rw) */
    Ifx_UReg_32Bit TBI:4;             /**< \brief [19:16] Interrupt Node Pointer for Interrupt TBI - TBI (rw) */
    Ifx_UReg_32Bit ERRI:4;            /**< \brief [23:20] Interrupt Node Pointer for Interrupt ERRI - ERRI (rw) */
    Ifx_UReg_32Bit SDI:4;             /**< \brief [27:24] Interrupt Node Pointer for Interrupt SDI - SDI (rw) */
    Ifx_UReg_32Bit FWI:4;             /**< \brief [31:28] Interrupt Node Pointer for FWI - FWI (rw) */
} Ifx_PSI5_INP_Bits;

/** \brief Interrupt Clear Register A ${x} */
typedef struct _Ifx_PSI5_INTCLRA_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Clear Interrupt Request Flag RSI - RSI (w) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Clear Interrupt Request Flag RDI - RDI (w) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Clear Interrupt Request Flag RBI - RBI (w) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Clear Interrupt Request Flag TEI - TEI (w) */
    Ifx_UReg_32Bit NBI:1;             /**< \brief [4:4] Clear Interrupt Request Flag NBI - NBI (w) */
    Ifx_UReg_32Bit MEI:1;             /**< \brief [5:5] Clear Interrupt Request Flag MEI - MEI (w) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [6:6] Clear Interrupt Request Flag CRCI - CRCI (w) */
    Ifx_UReg_32Bit FWI:1;             /**< \brief [7:7] Clear Interrupt Request Flag FWI - FWI (w) */
    Ifx_UReg_32Bit RUI:1;             /**< \brief [8:8] Clear Interrupt Request Flag RUI - RUI (w) */
    Ifx_UReg_32Bit RMI:1;             /**< \brief [9:9] Clear Interrupt Request Flag RMI - RMI (w) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [10:10] Clear Interrupt Request Flag TPI - TPI (w) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [11:11] Clear Interrupt Request Flag TPOI - TPOI (w) */
    Ifx_UReg_32Bit TSI:1;             /**< \brief [12:12] Clear Interrupt Request Flag TSI - TSI (w) */
    Ifx_UReg_32Bit TSOI:1;            /**< \brief [13:13] Clear Interrupt Request Flag TSOI - TSOI (w) */
    Ifx_UReg_32Bit TOI:1;             /**< \brief [14:14] Clear Interrupt Request Flag TOI - TOI (w) */
    Ifx_UReg_32Bit TOOI:1;            /**< \brief [15:15] Clear Interrupt Request Flag TOOI - TOOI (w) */
    Ifx_UReg_32Bit NFI:1;             /**< \brief [16:16] Clear Interrupt Request Flag NFI - NFI (w) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_PSI5_INTCLRA_Bits;

/** \brief Interrupt Clear Register A ${x} */
typedef struct _Ifx_PSI5_INTCLRB_Bits
{
    Ifx_UReg_32Bit WSI0:1;            /**< \brief [0:0] Clear Interrupt Request Flag WSI0 - WSI0 (w) */
    Ifx_UReg_32Bit WSI1:1;            /**< \brief [1:1] Clear Interrupt Request Flag WSI1 - WSI1 (w) */
    Ifx_UReg_32Bit WSI2:1;            /**< \brief [2:2] Clear Interrupt Request Flag WSI2 - WSI2 (w) */
    Ifx_UReg_32Bit WSI3:1;            /**< \brief [3:3] Clear Interrupt Request Flag WSI3 - WSI3 (w) */
    Ifx_UReg_32Bit WSI4:1;            /**< \brief [4:4] Clear Interrupt Request Flag WSI4 - WSI4 (w) */
    Ifx_UReg_32Bit WSI5:1;            /**< \brief [5:5] Clear Interrupt Request Flag WSI5 - WSI5 (w) */
    Ifx_UReg_32Bit SDI0:1;            /**< \brief [6:6] Clear Interrupt Request Flag SDI0 - SDI0 (w) */
    Ifx_UReg_32Bit SDI1:1;            /**< \brief [7:7] Clear Interrupt Request Flag SDI1 - SDI1 (w) */
    Ifx_UReg_32Bit SDI2:1;            /**< \brief [8:8] Clear Interrupt Request Flag SDI2 - SDI2 (w) */
    Ifx_UReg_32Bit SDI3:1;            /**< \brief [9:9] Clear Interrupt Request Flag SDI3 - SDI3 (w) */
    Ifx_UReg_32Bit SDI4:1;            /**< \brief [10:10] Clear Interrupt Request Flag SDI4 - SDI4 (w) */
    Ifx_UReg_32Bit SDI5:1;            /**< \brief [11:11] Clear Interrupt Request Flag SDI5 - SDI5 (w) */
    Ifx_UReg_32Bit SOI0:1;            /**< \brief [12:12] Clear Interrupt Request Flag SOI0 - SOI0 (w) */
    Ifx_UReg_32Bit SOI1:1;            /**< \brief [13:13] Clear Interrupt Request Flag SOI1 - SOI1 (w) */
    Ifx_UReg_32Bit SOI2:1;            /**< \brief [14:14] Clear Interrupt Request Flag SOI2 - SOI2 (w) */
    Ifx_UReg_32Bit SOI3:1;            /**< \brief [15:15] Clear Interrupt Request Flag SOI3 - SOI3 (w) */
    Ifx_UReg_32Bit SOI4:1;            /**< \brief [16:16] Clear Interrupt Request Flag SOI4 - SOI4 (w) */
    Ifx_UReg_32Bit SOI5:1;            /**< \brief [17:17] Clear Interrupt Request Flag SOI5 - SOI5 (w) */
    Ifx_UReg_32Bit SCRI0:1;           /**< \brief [18:18] Clear Interrupt Request Flag SCRI0 - SCRI0 (w) */
    Ifx_UReg_32Bit SCRI1:1;           /**< \brief [19:19] Clear Interrupt Request Flag SCRI1 - SCRI1 (w) */
    Ifx_UReg_32Bit SCRI2:1;           /**< \brief [20:20] Clear Interrupt Request Flag SCRI2 - SCRI2 (w) */
    Ifx_UReg_32Bit SCRI3:1;           /**< \brief [21:21] Clear Interrupt Request Flag SCRI3 - SCRI3 (w) */
    Ifx_UReg_32Bit SCRI4:1;           /**< \brief [22:22] Clear Interrupt Request Flag SCRI4 - SCRI4 (w) */
    Ifx_UReg_32Bit SCRI5:1;           /**< \brief [23:23] Clear Interrupt Request Flag SCRI5 - SCRI5 (w) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5_INTCLRB_Bits;

/** \brief Interrupt Enable Register A ${x} */
typedef struct _Ifx_PSI5_INTENA_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Enable Interrupt Request RSI - RSI (rw) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Enable Interrupt Request RDI - RDI (rw) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Enable Interrupt Request RBI - RBI (rw) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Enable Interrupt Request TEI - TEI (rw) */
    Ifx_UReg_32Bit NBI:1;             /**< \brief [4:4] Enable Interrupt Request NBI - NBI (rw) */
    Ifx_UReg_32Bit MEI:1;             /**< \brief [5:5] Enable Interrupt Request MEII - MEI (rw) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [6:6] Enable Interrupt Request CRCI - CRCI (rw) */
    Ifx_UReg_32Bit FWI:1;             /**< \brief [7:7] Enable Interrupt Request FWI - FWI (rw) */
    Ifx_UReg_32Bit RUI:1;             /**< \brief [8:8] Enable Interrupt Request RUI - RUI (rw) */
    Ifx_UReg_32Bit RMI:1;             /**< \brief [9:9] Enable Interrupt Request RMII - RMI (rw) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [10:10] Enable Interrupt Request TPI - TPI (rw) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [11:11] Enable Interrupt Request TPOI - TPOI (rw) */
    Ifx_UReg_32Bit TSI:1;             /**< \brief [12:12] Enable Interrupt Request TSI - TSI (rw) */
    Ifx_UReg_32Bit TSOI:1;            /**< \brief [13:13] Enable Interrupt Request TSOI - TSOI (rw) */
    Ifx_UReg_32Bit TOI:1;             /**< \brief [14:14] Enable Interrupt Request TOI - TOI (rw) */
    Ifx_UReg_32Bit TOOI:1;            /**< \brief [15:15] Enable Interrupt Request TOOI - TOOI (rw) */
    Ifx_UReg_32Bit NFI:1;             /**< \brief [16:16] Enable Interrupt Request NFI - NFI (rw) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_PSI5_INTENA_Bits;

/** \brief Interrupt Enable Register B ${x} */
typedef struct _Ifx_PSI5_INTENB_Bits
{
    Ifx_UReg_32Bit WSI0:1;            /**< \brief [0:0] Enable Interrupt Request WSI0 - WSI0 (rw) */
    Ifx_UReg_32Bit WSI1:1;            /**< \brief [1:1] Enable Interrupt Request WSI1 - WSI1 (rw) */
    Ifx_UReg_32Bit WSI2:1;            /**< \brief [2:2] Enable Interrupt Request WSI2 - WSI2 (rw) */
    Ifx_UReg_32Bit WSI3:1;            /**< \brief [3:3] Enable Interrupt Request WSI3 - WSI3 (rw) */
    Ifx_UReg_32Bit WSI4:1;            /**< \brief [4:4] Enable Interrupt Request WSI4 - WSI4 (rw) */
    Ifx_UReg_32Bit WSI5:1;            /**< \brief [5:5] Enable Interrupt Request WSI5 - WSI5 (rw) */
    Ifx_UReg_32Bit SDI0:1;            /**< \brief [6:6] Enable Interrupt Request SDI0 - SDI0 (rw) */
    Ifx_UReg_32Bit SDI1:1;            /**< \brief [7:7] Enable Interrupt Request SDI1 - SDI1 (rw) */
    Ifx_UReg_32Bit SDI2:1;            /**< \brief [8:8] Enable Interrupt Request SDI2 - SDI2 (rw) */
    Ifx_UReg_32Bit SDI3:1;            /**< \brief [9:9] Enable Interrupt Request SDI3 - SDI3 (rw) */
    Ifx_UReg_32Bit SDI4:1;            /**< \brief [10:10] Enable Interrupt Request SDI4 - SDI4 (rw) */
    Ifx_UReg_32Bit SDI5:1;            /**< \brief [11:11] Enable Interrupt Request SDI5 - SDI5 (rw) */
    Ifx_UReg_32Bit SOI0:1;            /**< \brief [12:12] Enable Interrupt Request SOI0 - SOI0 (rw) */
    Ifx_UReg_32Bit SOI1:1;            /**< \brief [13:13] Enable Interrupt Request SOI1 - SOI1 (rw) */
    Ifx_UReg_32Bit SOI2:1;            /**< \brief [14:14] Enable Interrupt Request SOI2 - SOI2 (rw) */
    Ifx_UReg_32Bit SOI3:1;            /**< \brief [15:15] Enable Interrupt Request SOI3 - SOI3 (rw) */
    Ifx_UReg_32Bit SOI4:1;            /**< \brief [16:16] Enable Interrupt Request SOI4 - SOI4 (rw) */
    Ifx_UReg_32Bit SOI5:1;            /**< \brief [17:17] Enable Interrupt Request SOI5 - SOI5 (rw) */
    Ifx_UReg_32Bit SCRI0:1;           /**< \brief [18:18] Enable Interrupt Request SCRI0 - SCRI0 (rw) */
    Ifx_UReg_32Bit SCRI1:1;           /**< \brief [19:19] Enable Interrupt Request SCRI1 - SCRI1 (rw) */
    Ifx_UReg_32Bit SCRI2:1;           /**< \brief [20:20] Enable Interrupt Request SCRI2 - SCRI2 (rw) */
    Ifx_UReg_32Bit SCRI3:1;           /**< \brief [21:21] Enable Interrupt Request SCRI3 - SCRI3 (rw) */
    Ifx_UReg_32Bit SCRI4:1;           /**< \brief [22:22] Enable Interrupt Request SCRI4 - SCRI4 (rw) */
    Ifx_UReg_32Bit SCRI5:1;           /**< \brief [23:23] Enable Interrupt Request SCRI5 - SCRI5 (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5_INTENB_Bits;

/** \brief Interrupt Overview Register */
typedef struct _Ifx_PSI5_INTOV_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Interrupt Pending on any Node Pointer RSI - RSI (rh) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Interrupt Pending on any Node Pointer RDI - RDI (rh) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Interrupt Pending on any Node Pointer RBI - RBI (rh) */
    Ifx_UReg_32Bit TDI:1;             /**< \brief [3:3] Interrupt Pending on any Node Pointer TDI - TDI (rh) */
    Ifx_UReg_32Bit TBI:1;             /**< \brief [4:4] Interrupt Pending on any Node Pointer TBI - TBI (rh) */
    Ifx_UReg_32Bit ERRI:1;            /**< \brief [5:5] Interrupt Pending on any Node Pointer ERRI - ERRI (rh) */
    Ifx_UReg_32Bit SDI:1;             /**< \brief [6:6] Interrupt Pending on any Node Pointer SDI - SDI (rh) */
    Ifx_UReg_32Bit FWI:1;             /**< \brief [7:7] Interrupt Pending on any Node Pointer FWI - FWI (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_PSI5_INTOV_Bits;

/** \brief Interrupt Set Register A ${x} */
typedef struct _Ifx_PSI5_INTSETA_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Set Interrupt Request Flag RSI - RSI (w) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Set Interrupt Request Flag RDI - RDI (w) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Set Interrupt Request Flag RBI - RBI (w) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Set Interrupt Request Flag TEI - TEI (w) */
    Ifx_UReg_32Bit NBI:1;             /**< \brief [4:4] Set Interrupt Request Flag NBI - NBI (w) */
    Ifx_UReg_32Bit MEI:1;             /**< \brief [5:5] Set Interrupt Request Flag MEI - MEI (w) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [6:6] Set Interrupt Request Flag CRCI - CRCI (w) */
    Ifx_UReg_32Bit FWI:1;             /**< \brief [7:7] Set Interrupt Request Flag FWI - FWI (w) */
    Ifx_UReg_32Bit RUI:1;             /**< \brief [8:8] Set Interrupt Request Flag RUI - RUI (w) */
    Ifx_UReg_32Bit RMI:1;             /**< \brief [9:9] Set Interrupt Request Flag RMI - RMI (w) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [10:10] Set Interrupt Request Flag TPI - TPI (w) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [11:11] Set Interrupt Request Flag TPOI - TPOI (w) */
    Ifx_UReg_32Bit TSI:1;             /**< \brief [12:12] Set Interrupt Request Flag TSI - TSI (w) */
    Ifx_UReg_32Bit TSOI:1;            /**< \brief [13:13] Set Interrupt Request Flag TSOI - TSOI (w) */
    Ifx_UReg_32Bit TOI:1;             /**< \brief [14:14] Set Interrupt Request Flag TOI - TOI (w) */
    Ifx_UReg_32Bit TOOI:1;            /**< \brief [15:15] Set Interrupt Request Flag TOOI - TOOI (w) */
    Ifx_UReg_32Bit NFI:1;             /**< \brief [16:16] Set Interrupt Request Flag NFI - NFI (w) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_PSI5_INTSETA_Bits;

/** \brief Interrupt Set Register B ${x} */
typedef struct _Ifx_PSI5_INTSETB_Bits
{
    Ifx_UReg_32Bit WSI0:1;            /**< \brief [0:0] Set Interrupt Request Flag WSI0 - WSI0 (w) */
    Ifx_UReg_32Bit WSI1:1;            /**< \brief [1:1] Set Interrupt Request Flag WSI1 - WSI1 (w) */
    Ifx_UReg_32Bit WSI2:1;            /**< \brief [2:2] Set Interrupt Request Flag WSI2 - WSI2 (w) */
    Ifx_UReg_32Bit WSI3:1;            /**< \brief [3:3] Set Interrupt Request Flag WSI3 - WSI3 (w) */
    Ifx_UReg_32Bit WSI4:1;            /**< \brief [4:4] Set Interrupt Request Flag WSI4 - WSI4 (w) */
    Ifx_UReg_32Bit WSI5:1;            /**< \brief [5:5] Set Interrupt Request Flag WSI5 - WSI5 (w) */
    Ifx_UReg_32Bit SDI0:1;            /**< \brief [6:6] Set Interrupt Request Flag SDI0 - SDI0 (w) */
    Ifx_UReg_32Bit SDI1:1;            /**< \brief [7:7] Set Interrupt Request Flag SDI1 - SDI1 (w) */
    Ifx_UReg_32Bit SDI2:1;            /**< \brief [8:8] Set Interrupt Request Flag SDI2 - SDI2 (w) */
    Ifx_UReg_32Bit SDI3:1;            /**< \brief [9:9] Set Interrupt Request Flag SDI3 - SDI3 (w) */
    Ifx_UReg_32Bit SDI4:1;            /**< \brief [10:10] Set Interrupt Request Flag SDI4 - SDI4 (w) */
    Ifx_UReg_32Bit SDI5:1;            /**< \brief [11:11] Set Interrupt Request Flag SDI5 - SDI5 (w) */
    Ifx_UReg_32Bit SOI0:1;            /**< \brief [12:12] Set Interrupt Request Flag SOI0 - SOI0 (w) */
    Ifx_UReg_32Bit SOI1:1;            /**< \brief [13:13] Set Interrupt Request Flag SOI1 - SOI1 (w) */
    Ifx_UReg_32Bit SOI2:1;            /**< \brief [14:14] Set Interrupt Request Flag SOI2 - SOI2 (w) */
    Ifx_UReg_32Bit SOI3:1;            /**< \brief [15:15] Set Interrupt Request Flag SOI3 - SOI3 (w) */
    Ifx_UReg_32Bit SOI4:1;            /**< \brief [16:16] Set Interrupt Request Flag SOI4 - SOI4 (w) */
    Ifx_UReg_32Bit SOI5:1;            /**< \brief [17:17] Set Interrupt Request Flag SOI5 - SOI5 (w) */
    Ifx_UReg_32Bit SCRI0:1;           /**< \brief [18:18] Set Interrupt Request Flag SCRI0 - SCRI0 (w) */
    Ifx_UReg_32Bit SCRI1:1;           /**< \brief [19:19] Set Interrupt Request Flag SCRI1 - SCRI1 (w) */
    Ifx_UReg_32Bit SCRI2:1;           /**< \brief [20:20] Set Interrupt Request Flag SCRI2 - SCRI2 (w) */
    Ifx_UReg_32Bit SCRI3:1;           /**< \brief [21:21] Set Interrupt Request Flag SCRI3 - SCRI3 (w) */
    Ifx_UReg_32Bit SCRI4:1;           /**< \brief [22:22] Set Interrupt Request Flag SCRI4 - SCRI4 (w) */
    Ifx_UReg_32Bit SCRI5:1;           /**< \brief [23:23] Set Interrupt Request Flag SCRI5 - SCRI5 (w) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5_INTSETB_Bits;

/** \brief Interrupt Status Register A ${x} */
typedef struct _Ifx_PSI5_INTSTATA_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Receive Success Interrupt Request Flag - RSI (rh) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Receive Data Interrupt Request Flag - RDI (rh) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Receive Buffer Overflow Interrupt Request Flag - RBI (rh) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Time Slot Error Interrupt Request Flag - TEI (rh) */
    Ifx_UReg_32Bit NBI:1;             /**< \brief [4:4] Number of Bits Wrong Request Flag - NBI (rh) */
    Ifx_UReg_32Bit MEI:1;             /**< \brief [5:5] Error in Message Bits Flag - MEI (rh) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [6:6] CRC Error Request Flag - CRCI (rh) */
    Ifx_UReg_32Bit FWI:1;             /**< \brief [7:7] FIFO Warning Level Request Flag - FWI (rh) */
    Ifx_UReg_32Bit RUI:1;             /**< \brief [8:8] Receive Memory Underrun Interrupt Request Flag - RUI (rh) */
    Ifx_UReg_32Bit RMI:1;             /**< \brief [9:9] Receive Memory Overflow Flag - RMI (rh) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [10:10] Transfer Preparation Interrupt Request Flag - TPI (rh) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [11:11] Transmit Preparation Overflow Interrupt Request Flag - TPOI (rh) */
    Ifx_UReg_32Bit TSI:1;             /**< \brief [12:12] Transfer Shift Interrupt Request Flag - TSI (rh) */
    Ifx_UReg_32Bit TSOI:1;            /**< \brief [13:13] Transmit Shift Overflow Interrupt Request Flag - TSOI (rh) */
    Ifx_UReg_32Bit TOI:1;             /**< \brief [14:14] Transfer Output Interrupt Request Flag - TOI (rh) */
    Ifx_UReg_32Bit TOOI:1;            /**< \brief [15:15] Transmit Shift Overflow Interrupt Request Flag - TOOI (rh) */
    Ifx_UReg_32Bit NFI:1;             /**< \brief [16:16] No Frame Received Interrupt Flag - NFI (rh) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_PSI5_INTSTATA_Bits;

/** \brief Interrupt Status Register B ${x} */
typedef struct _Ifx_PSI5_INTSTATB_Bits
{
    Ifx_UReg_32Bit WSI0:1;            /**< \brief [0:0] Wrong Serial Protocol Error Request Flag - WSI0 (rh) */
    Ifx_UReg_32Bit WSI1:1;            /**< \brief [1:1] Wrong Serial Protocol Error Request Flag - WSI1 (rh) */
    Ifx_UReg_32Bit WSI2:1;            /**< \brief [2:2] Wrong Serial Protocol Error Request Flag - WSI2 (rh) */
    Ifx_UReg_32Bit WSI3:1;            /**< \brief [3:3] Wrong Serial Protocol Error Request Flag - WSI3 (rh) */
    Ifx_UReg_32Bit WSI4:1;            /**< \brief [4:4] Wrong Serial Protocol Error Request Flag - WSI4 (rh) */
    Ifx_UReg_32Bit WSI5:1;            /**< \brief [5:5] Wrong Serial Protocol Error Request Flag - WSI5 (rh) */
    Ifx_UReg_32Bit SDI0:1;            /**< \brief [6:6] Serial Data Receive Interrupt Request Flag - SDI0 (rh) */
    Ifx_UReg_32Bit SDI1:1;            /**< \brief [7:7] Serial Data Receive Interrupt Request Flag - SDI1 (rh) */
    Ifx_UReg_32Bit SDI2:1;            /**< \brief [8:8] Serial Data Receive Interrupt Request Flag - SDI2 (rh) */
    Ifx_UReg_32Bit SDI3:1;            /**< \brief [9:9] Serial Data Receive Interrupt Request Flag - SDI3 (rh) */
    Ifx_UReg_32Bit SDI4:1;            /**< \brief [10:10] Serial Data Receive Interrupt Request Flag - SDI4 (rh) */
    Ifx_UReg_32Bit SDI5:1;            /**< \brief [11:11] Serial Data Receive Interrupt Request Flag - SDI5 (rh) */
    Ifx_UReg_32Bit SOI0:1;            /**< \brief [12:12] Serial Data Buffer Overrun Interrupt Request Flag - SOI0 (rh) */
    Ifx_UReg_32Bit SOI1:1;            /**< \brief [13:13] Serial Data Buffer Overrun Interrupt Request Flag - SOI1 (rh) */
    Ifx_UReg_32Bit SOI2:1;            /**< \brief [14:14] Serial Data Buffer Overrun Interrupt Request Flag - SOI2 (rh) */
    Ifx_UReg_32Bit SOI3:1;            /**< \brief [15:15] Serial Data Buffer Overrun Interrupt Request Flag - SOI3 (rh) */
    Ifx_UReg_32Bit SOI4:1;            /**< \brief [16:16] Serial Data Buffer Overrun Interrupt Request Flag - SOI4 (rh) */
    Ifx_UReg_32Bit SOI5:1;            /**< \brief [17:17] Serial Data Buffer Overrun Interrupt Request Flag - SOI5 (rh) */
    Ifx_UReg_32Bit SCRI0:1;           /**< \brief [18:18] Serial Data CRC Error Request Flag - SCRI0 (rh) */
    Ifx_UReg_32Bit SCRI1:1;           /**< \brief [19:19] Serial Data CRC Error Request Flag - SCRI1 (rh) */
    Ifx_UReg_32Bit SCRI2:1;           /**< \brief [20:20] Serial Data CRC Error Request Flag - SCRI2 (rh) */
    Ifx_UReg_32Bit SCRI3:1;           /**< \brief [21:21] Serial Data CRC Error Request Flag - SCRI3 (rh) */
    Ifx_UReg_32Bit SCRI4:1;           /**< \brief [22:22] Serial Data CRC Error Request Flag - SCRI4 (rh) */
    Ifx_UReg_32Bit SCRI5:1;           /**< \brief [23:23] Serial Data CRC Error Request Flag - SCRI5 (rh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5_INTSTATB_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_PSI5_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_PSI5_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_PSI5_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_PSI5_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_PSI5_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_PSI5_KRSTCLR_Bits;

/** \brief MEI Overview Clear Register ${x} */
typedef struct _Ifx_PSI5_MEICLR_Bits
{
    Ifx_UReg_32Bit MEI0:1;            /**< \brief [0:0] Clear MEI Flag of Buffer 0 - MEI0 (w) */
    Ifx_UReg_32Bit MEI1:1;            /**< \brief [1:1] Clear MEI Flag of Buffer 1 - MEI1 (w) */
    Ifx_UReg_32Bit MEI2:1;            /**< \brief [2:2] Clear MEI Flag of Buffer 2 - MEI2 (w) */
    Ifx_UReg_32Bit MEI3:1;            /**< \brief [3:3] Clear MEI Flag of Buffer 3 - MEI3 (w) */
    Ifx_UReg_32Bit MEI4:1;            /**< \brief [4:4] Clear MEI Flag of Buffer 4 - MEI4 (w) */
    Ifx_UReg_32Bit MEI5:1;            /**< \brief [5:5] Clear MEI Flag of Buffer 5 - MEI5 (w) */
    Ifx_UReg_32Bit MEI6:1;            /**< \brief [6:6] Clear MEI Flag of Buffer 6 - MEI6 (w) */
    Ifx_UReg_32Bit MEI7:1;            /**< \brief [7:7] Clear MEI Flag of Buffer 7 - MEI7 (w) */
    Ifx_UReg_32Bit MEI8:1;            /**< \brief [8:8] Clear MEI Flag of Buffer 8 - MEI8 (w) */
    Ifx_UReg_32Bit MEI9:1;            /**< \brief [9:9] Clear MEI Flag of Buffer 9 - MEI9 (w) */
    Ifx_UReg_32Bit MEI10:1;           /**< \brief [10:10] Clear MEI Flag of Buffer 10 - MEI10 (w) */
    Ifx_UReg_32Bit MEI11:1;           /**< \brief [11:11] Clear MEI Flag of Buffer 11 - MEI11 (w) */
    Ifx_UReg_32Bit MEI12:1;           /**< \brief [12:12] Clear MEI Flag of Buffer 12 - MEI12 (w) */
    Ifx_UReg_32Bit MEI13:1;           /**< \brief [13:13] Clear MEI Flag of Buffer 13 - MEI13 (w) */
    Ifx_UReg_32Bit MEI14:1;           /**< \brief [14:14] Clear MEI Flag of Buffer 14 - MEI14 (w) */
    Ifx_UReg_32Bit MEI15:1;           /**< \brief [15:15] Clear MEI Flag of Buffer 15 - MEI15 (w) */
    Ifx_UReg_32Bit MEI16:1;           /**< \brief [16:16] Clear MEI Flag of Buffer 16 - MEI16 (w) */
    Ifx_UReg_32Bit MEI17:1;           /**< \brief [17:17] Clear MEI Flag of Buffer 17 - MEI17 (w) */
    Ifx_UReg_32Bit MEI18:1;           /**< \brief [18:18] Clear MEI Flag of Buffer 18 - MEI18 (w) */
    Ifx_UReg_32Bit MEI19:1;           /**< \brief [19:19] Clear MEI Flag of Buffer 19 - MEI19 (w) */
    Ifx_UReg_32Bit MEI20:1;           /**< \brief [20:20] Clear MEI Flag of Buffer 20 - MEI20 (w) */
    Ifx_UReg_32Bit MEI21:1;           /**< \brief [21:21] Clear MEI Flag of Buffer 21 - MEI21 (w) */
    Ifx_UReg_32Bit MEI22:1;           /**< \brief [22:22] Clear MEI Flag of Buffer 22 - MEI22 (w) */
    Ifx_UReg_32Bit MEI23:1;           /**< \brief [23:23] Clear MEI Flag of Buffer 23 - MEI23 (w) */
    Ifx_UReg_32Bit MEI24:1;           /**< \brief [24:24] Clear MEI Flag of Buffer 24 - MEI24 (w) */
    Ifx_UReg_32Bit MEI25:1;           /**< \brief [25:25] Clear MEI Flag of Buffer 25 - MEI25 (w) */
    Ifx_UReg_32Bit MEI26:1;           /**< \brief [26:26] Clear MEI Flag of Buffer 26 - MEI26 (w) */
    Ifx_UReg_32Bit MEI27:1;           /**< \brief [27:27] Clear MEI Flag of Buffer 27 - MEI27 (w) */
    Ifx_UReg_32Bit MEI28:1;           /**< \brief [28:28] Clear MEI Flag of Buffer 28 - MEI28 (w) */
    Ifx_UReg_32Bit MEI29:1;           /**< \brief [29:29] Clear MEI Flag of Buffer 29 - MEI29 (w) */
    Ifx_UReg_32Bit MEI30:1;           /**< \brief [30:30] Clear MEI Flag of Buffer 30 - MEI30 (w) */
    Ifx_UReg_32Bit MEI31:1;           /**< \brief [31:31] Clear MEI Flag of Buffer 31 - MEI31 (w) */
} Ifx_PSI5_MEICLR_Bits;

/** \brief MEI Overview Register ${x} */
typedef struct _Ifx_PSI5_MEIOV_Bits
{
    Ifx_UReg_32Bit MEI0:1;            /**< \brief [0:0] MEI Flag of Buffer 0 - MEI0 (rh) */
    Ifx_UReg_32Bit MEI1:1;            /**< \brief [1:1] MEI Flag of Buffer 1 - MEI1 (rh) */
    Ifx_UReg_32Bit MEI2:1;            /**< \brief [2:2] MEI Flag of Buffer 2 - MEI2 (rh) */
    Ifx_UReg_32Bit MEI3:1;            /**< \brief [3:3] MEI Flag of Buffer 3 - MEI3 (rh) */
    Ifx_UReg_32Bit MEI4:1;            /**< \brief [4:4] MEI Flag of Buffer 4 - MEI4 (rh) */
    Ifx_UReg_32Bit MEI5:1;            /**< \brief [5:5] MEI Flag of Buffer 5 - MEI5 (rh) */
    Ifx_UReg_32Bit MEI6:1;            /**< \brief [6:6] MEI Flag of Buffer 6 - MEI6 (rh) */
    Ifx_UReg_32Bit MEI7:1;            /**< \brief [7:7] MEI Flag of Buffer 7 - MEI7 (rh) */
    Ifx_UReg_32Bit MEI8:1;            /**< \brief [8:8] MEI Flag of Buffer 8 - MEI8 (rh) */
    Ifx_UReg_32Bit MEI9:1;            /**< \brief [9:9] MEI Flag of Buffer 9 - MEI9 (rh) */
    Ifx_UReg_32Bit MEI10:1;           /**< \brief [10:10] MEI Flag of Buffer 10 - MEI10 (rh) */
    Ifx_UReg_32Bit MEI11:1;           /**< \brief [11:11] MEI Flag of Buffer 11 - MEI11 (rh) */
    Ifx_UReg_32Bit MEI12:1;           /**< \brief [12:12] MEI Flag of Buffer 12 - MEI12 (rh) */
    Ifx_UReg_32Bit MEI13:1;           /**< \brief [13:13] MEI Flag of Buffer 13 - MEI13 (rh) */
    Ifx_UReg_32Bit MEI14:1;           /**< \brief [14:14] MEI Flag of Buffer 14 - MEI14 (rh) */
    Ifx_UReg_32Bit MEI15:1;           /**< \brief [15:15] MEI Flag of Buffer 15 - MEI15 (rh) */
    Ifx_UReg_32Bit MEI16:1;           /**< \brief [16:16] MEI Flag of Buffer 16 - MEI16 (rh) */
    Ifx_UReg_32Bit MEI17:1;           /**< \brief [17:17] MEI Flag of Buffer 17 - MEI17 (rh) */
    Ifx_UReg_32Bit MEI18:1;           /**< \brief [18:18] MEI Flag of Buffer 18 - MEI18 (rh) */
    Ifx_UReg_32Bit MEI19:1;           /**< \brief [19:19] MEI Flag of Buffer 19 - MEI19 (rh) */
    Ifx_UReg_32Bit MEI20:1;           /**< \brief [20:20] MEI Flag of Buffer 20 - MEI20 (rh) */
    Ifx_UReg_32Bit MEI21:1;           /**< \brief [21:21] MEI Flag of Buffer 21 - MEI21 (rh) */
    Ifx_UReg_32Bit MEI22:1;           /**< \brief [22:22] MEI Flag of Buffer 22 - MEI22 (rh) */
    Ifx_UReg_32Bit MEI23:1;           /**< \brief [23:23] MEI Flag of Buffer 23 - MEI23 (rh) */
    Ifx_UReg_32Bit MEI24:1;           /**< \brief [24:24] MEI Flag of Buffer 24 - MEI24 (rh) */
    Ifx_UReg_32Bit MEI25:1;           /**< \brief [25:25] MEI Flag of Buffer 25 - MEI25 (rh) */
    Ifx_UReg_32Bit MEI26:1;           /**< \brief [26:26] MEI Flag of Buffer 26 - MEI26 (rh) */
    Ifx_UReg_32Bit MEI27:1;           /**< \brief [27:27] MEI Flag of Buffer 27 - MEI27 (rh) */
    Ifx_UReg_32Bit MEI28:1;           /**< \brief [28:28] MEI Flag of Buffer 28 - MEI28 (rh) */
    Ifx_UReg_32Bit MEI29:1;           /**< \brief [29:29] MEI Flag of Buffer 29 - MEI29 (rh) */
    Ifx_UReg_32Bit MEI30:1;           /**< \brief [30:30] MEI Flag of Buffer 30 - MEI30 (rh) */
    Ifx_UReg_32Bit MEI31:1;           /**< \brief [31:31] MEI Flag of Buffer 31 - MEI31 (rh) */
} Ifx_PSI5_MEIOV_Bits;

/** \brief MEI Overview Set Register ${x} */
typedef struct _Ifx_PSI5_MEISET_Bits
{
    Ifx_UReg_32Bit MEI0:1;            /**< \brief [0:0] Set MEI Flag of Buffer 0 - MEI0 (w) */
    Ifx_UReg_32Bit MEI1:1;            /**< \brief [1:1] Set MEI Flag of Buffer 1 - MEI1 (w) */
    Ifx_UReg_32Bit MEI2:1;            /**< \brief [2:2] Set MEI Flag of Buffer 2 - MEI2 (w) */
    Ifx_UReg_32Bit MEI3:1;            /**< \brief [3:3] Set MEI Flag of Buffer 3 - MEI3 (w) */
    Ifx_UReg_32Bit MEI4:1;            /**< \brief [4:4] Set MEI Flag of Buffer 4 - MEI4 (w) */
    Ifx_UReg_32Bit MEI5:1;            /**< \brief [5:5] Set MEI Flag of Buffer 5 - MEI5 (w) */
    Ifx_UReg_32Bit MEI6:1;            /**< \brief [6:6] Set MEI Flag of Buffer 6 - MEI6 (w) */
    Ifx_UReg_32Bit MEI7:1;            /**< \brief [7:7] Set MEI Flag of Buffer 7 - MEI7 (w) */
    Ifx_UReg_32Bit MEI8:1;            /**< \brief [8:8] Set MEI Flag of Buffer 8 - MEI8 (w) */
    Ifx_UReg_32Bit MEI9:1;            /**< \brief [9:9] Set MEI Flag of Buffer 9 - MEI9 (w) */
    Ifx_UReg_32Bit MEI10:1;           /**< \brief [10:10] Set MEI Flag of Buffer 10 - MEI10 (w) */
    Ifx_UReg_32Bit MEI11:1;           /**< \brief [11:11] Set MEI Flag of Buffer 11 - MEI11 (w) */
    Ifx_UReg_32Bit MEI12:1;           /**< \brief [12:12] Set MEI Flag of Buffer 12 - MEI12 (w) */
    Ifx_UReg_32Bit MEI13:1;           /**< \brief [13:13] Set MEI Flag of Buffer 13 - MEI13 (w) */
    Ifx_UReg_32Bit MEI14:1;           /**< \brief [14:14] Set MEI Flag of Buffer 14 - MEI14 (w) */
    Ifx_UReg_32Bit MEI15:1;           /**< \brief [15:15] Set MEI Flag of Buffer 15 - MEI15 (w) */
    Ifx_UReg_32Bit MEI16:1;           /**< \brief [16:16] Set MEI Flag of Buffer 16 - MEI16 (w) */
    Ifx_UReg_32Bit MEI17:1;           /**< \brief [17:17] Set MEI Flag of Buffer 17 - MEI17 (w) */
    Ifx_UReg_32Bit MEI18:1;           /**< \brief [18:18] Set MEI Flag of Buffer 18 - MEI18 (w) */
    Ifx_UReg_32Bit MEI19:1;           /**< \brief [19:19] Set MEI Flag of Buffer 19 - MEI19 (w) */
    Ifx_UReg_32Bit MEI20:1;           /**< \brief [20:20] Set MEI Flag of Buffer 20 - MEI20 (w) */
    Ifx_UReg_32Bit MEI21:1;           /**< \brief [21:21] Set MEI Flag of Buffer 21 - MEI21 (w) */
    Ifx_UReg_32Bit MEI22:1;           /**< \brief [22:22] Set MEI Flag of Buffer 22 - MEI22 (w) */
    Ifx_UReg_32Bit MEI23:1;           /**< \brief [23:23] Set MEI Flag of Buffer 23 - MEI23 (w) */
    Ifx_UReg_32Bit MEI24:1;           /**< \brief [24:24] Set MEI Flag of Buffer 24 - MEI24 (w) */
    Ifx_UReg_32Bit MEI25:1;           /**< \brief [25:25] Set MEI Flag of Buffer 25 - MEI25 (w) */
    Ifx_UReg_32Bit MEI26:1;           /**< \brief [26:26] Set MEI Flag of Buffer 26 - MEI26 (w) */
    Ifx_UReg_32Bit MEI27:1;           /**< \brief [27:27] Set MEI Flag of Buffer 27 - MEI27 (w) */
    Ifx_UReg_32Bit MEI28:1;           /**< \brief [28:28] Set MEI Flag of Buffer 28 - MEI28 (w) */
    Ifx_UReg_32Bit MEI29:1;           /**< \brief [29:29] Set MEI Flag of Buffer 29 - MEI29 (w) */
    Ifx_UReg_32Bit MEI30:1;           /**< \brief [30:30] Set MEI Flag of Buffer 30 - MEI30 (w) */
    Ifx_UReg_32Bit MEI31:1;           /**< \brief [31:31] Set MEI Flag of Buffer 31 - MEI31 (w) */
} Ifx_PSI5_MEISET_Bits;

/** \brief NBI Overview Clear Register ${x} */
typedef struct _Ifx_PSI5_NBICLR_Bits
{
    Ifx_UReg_32Bit NBI0:1;            /**< \brief [0:0] Clear NBI Flag of Buffer 0 - NBI0 (w) */
    Ifx_UReg_32Bit NBI1:1;            /**< \brief [1:1] Clear NBI Flag of Buffer 1 - NBI1 (w) */
    Ifx_UReg_32Bit NBI2:1;            /**< \brief [2:2] Clear NBI Flag of Buffer 2 - NBI2 (w) */
    Ifx_UReg_32Bit NBI3:1;            /**< \brief [3:3] Clear NBI Flag of Buffer 3 - NBI3 (w) */
    Ifx_UReg_32Bit NBI4:1;            /**< \brief [4:4] Clear NBI Flag of Buffer 4 - NBI4 (w) */
    Ifx_UReg_32Bit NBI5:1;            /**< \brief [5:5] Clear NBI Flag of Buffer 5 - NBI5 (w) */
    Ifx_UReg_32Bit NBI6:1;            /**< \brief [6:6] Clear NBI Flag of Buffer 6 - NBI6 (w) */
    Ifx_UReg_32Bit NBI7:1;            /**< \brief [7:7] Clear NBI Flag of Buffer 7 - NBI7 (w) */
    Ifx_UReg_32Bit NBI8:1;            /**< \brief [8:8] Clear NBI Flag of Buffer 8 - NBI8 (w) */
    Ifx_UReg_32Bit NBI9:1;            /**< \brief [9:9] Clear NBI Flag of Buffer 9 - NBI9 (w) */
    Ifx_UReg_32Bit NBI10:1;           /**< \brief [10:10] Clear NBI Flag of Buffer 10 - NBI10 (w) */
    Ifx_UReg_32Bit NBI11:1;           /**< \brief [11:11] Clear NBI Flag of Buffer 11 - NBI11 (w) */
    Ifx_UReg_32Bit NBI12:1;           /**< \brief [12:12] Clear NBI Flag of Buffer 12 - NBI12 (w) */
    Ifx_UReg_32Bit NBI13:1;           /**< \brief [13:13] Clear NBI Flag of Buffer 13 - NBI13 (w) */
    Ifx_UReg_32Bit NBI14:1;           /**< \brief [14:14] Clear NBI Flag of Buffer 14 - NBI14 (w) */
    Ifx_UReg_32Bit NBI15:1;           /**< \brief [15:15] Clear NBI Flag of Buffer 15 - NBI15 (w) */
    Ifx_UReg_32Bit NBI16:1;           /**< \brief [16:16] Clear NBI Flag of Buffer 16 - NBI16 (w) */
    Ifx_UReg_32Bit NBI17:1;           /**< \brief [17:17] Clear NBI Flag of Buffer 17 - NBI17 (w) */
    Ifx_UReg_32Bit NBI18:1;           /**< \brief [18:18] Clear NBI Flag of Buffer 18 - NBI18 (w) */
    Ifx_UReg_32Bit NBI19:1;           /**< \brief [19:19] Clear NBI Flag of Buffer 19 - NBI19 (w) */
    Ifx_UReg_32Bit NBI20:1;           /**< \brief [20:20] Clear NBI Flag of Buffer 20 - NBI20 (w) */
    Ifx_UReg_32Bit NBI21:1;           /**< \brief [21:21] Clear NBI Flag of Buffer 21 - NBI21 (w) */
    Ifx_UReg_32Bit NBI22:1;           /**< \brief [22:22] Clear NBI Flag of Buffer 22 - NBI22 (w) */
    Ifx_UReg_32Bit NBI23:1;           /**< \brief [23:23] Clear NBI Flag of Buffer 23 - NBI23 (w) */
    Ifx_UReg_32Bit NBI24:1;           /**< \brief [24:24] Clear NBI Flag of Buffer 24 - NBI24 (w) */
    Ifx_UReg_32Bit NBI25:1;           /**< \brief [25:25] Clear NBI Flag of Buffer 25 - NBI25 (w) */
    Ifx_UReg_32Bit NBI26:1;           /**< \brief [26:26] Clear NBI Flag of Buffer 26 - NBI26 (w) */
    Ifx_UReg_32Bit NBI27:1;           /**< \brief [27:27] Clear NBI Flag of Buffer 27 - NBI27 (w) */
    Ifx_UReg_32Bit NBI28:1;           /**< \brief [28:28] Clear NBI Flag of Buffer 28 - NBI28 (w) */
    Ifx_UReg_32Bit NBI29:1;           /**< \brief [29:29] Clear NBI Flag of Buffer 29 - NBI29 (w) */
    Ifx_UReg_32Bit NBI30:1;           /**< \brief [30:30] Clear NBI Flag of Buffer 30 - NBI30 (w) */
    Ifx_UReg_32Bit NBI31:1;           /**< \brief [31:31] Clear NBI Flag of Buffer 31 - NBI31 (w) */
} Ifx_PSI5_NBICLR_Bits;

/** \brief NBI Overview Register ${x} */
typedef struct _Ifx_PSI5_NBIOV_Bits
{
    Ifx_UReg_32Bit NBI0:1;            /**< \brief [0:0] NBI Flag of Buffer 0 - NBI0 (rh) */
    Ifx_UReg_32Bit NBI1:1;            /**< \brief [1:1] NBI Flag of Buffer 1 - NBI1 (rh) */
    Ifx_UReg_32Bit NBI2:1;            /**< \brief [2:2] NBI Flag of Buffer 2 - NBI2 (rh) */
    Ifx_UReg_32Bit NBI3:1;            /**< \brief [3:3] NBI Flag of Buffer 3 - NBI3 (rh) */
    Ifx_UReg_32Bit NBI4:1;            /**< \brief [4:4] NBI Flag of Buffer 4 - NBI4 (rh) */
    Ifx_UReg_32Bit NBI5:1;            /**< \brief [5:5] NBI Flag of Buffer 5 - NBI5 (rh) */
    Ifx_UReg_32Bit NBI6:1;            /**< \brief [6:6] NBI Flag of Buffer 6 - NBI6 (rh) */
    Ifx_UReg_32Bit NBI7:1;            /**< \brief [7:7] NBI Flag of Buffer 7 - NBI7 (rh) */
    Ifx_UReg_32Bit NBI8:1;            /**< \brief [8:8] NBI Flag of Buffer 8 - NBI8 (rh) */
    Ifx_UReg_32Bit NBI9:1;            /**< \brief [9:9] NBI Flag of Buffer 9 - NBI9 (rh) */
    Ifx_UReg_32Bit NBI10:1;           /**< \brief [10:10] NBI Flag of Buffer 10 - NBI10 (rh) */
    Ifx_UReg_32Bit NBI11:1;           /**< \brief [11:11] NBI Flag of Buffer 11 - NBI11 (rh) */
    Ifx_UReg_32Bit NBI12:1;           /**< \brief [12:12] NBI Flag of Buffer 12 - NBI12 (rh) */
    Ifx_UReg_32Bit NBI13:1;           /**< \brief [13:13] NBI Flag of Buffer 13 - NBI13 (rh) */
    Ifx_UReg_32Bit NBI14:1;           /**< \brief [14:14] NBI Flag of Buffer 14 - NBI14 (rh) */
    Ifx_UReg_32Bit NBI15:1;           /**< \brief [15:15] NBI Flag of Buffer 15 - NBI15 (rh) */
    Ifx_UReg_32Bit NBI16:1;           /**< \brief [16:16] NBI Flag of Buffer 16 - NBI16 (rh) */
    Ifx_UReg_32Bit NBI17:1;           /**< \brief [17:17] NBI Flag of Buffer 17 - NBI17 (rh) */
    Ifx_UReg_32Bit NBI18:1;           /**< \brief [18:18] NBI Flag of Buffer 18 - NBI18 (rh) */
    Ifx_UReg_32Bit NBI19:1;           /**< \brief [19:19] NBI Flag of Buffer 19 - NBI19 (rh) */
    Ifx_UReg_32Bit NBI20:1;           /**< \brief [20:20] NBI Flag of Buffer 20 - NBI20 (rh) */
    Ifx_UReg_32Bit NBI21:1;           /**< \brief [21:21] NBI Flag of Buffer 21 - NBI21 (rh) */
    Ifx_UReg_32Bit NBI22:1;           /**< \brief [22:22] NBI Flag of Buffer 22 - NBI22 (rh) */
    Ifx_UReg_32Bit NBI23:1;           /**< \brief [23:23] NBI Flag of Buffer 23 - NBI23 (rh) */
    Ifx_UReg_32Bit NBI24:1;           /**< \brief [24:24] NBI Flag of Buffer 24 - NBI24 (rh) */
    Ifx_UReg_32Bit NBI25:1;           /**< \brief [25:25] NBI Flag of Buffer 25 - NBI25 (rh) */
    Ifx_UReg_32Bit NBI26:1;           /**< \brief [26:26] NBI Flag of Buffer 26 - NBI26 (rh) */
    Ifx_UReg_32Bit NBI27:1;           /**< \brief [27:27] NBI Flag of Buffer 27 - NBI27 (rh) */
    Ifx_UReg_32Bit NBI28:1;           /**< \brief [28:28] NBI Flag of Buffer 28 - NBI28 (rh) */
    Ifx_UReg_32Bit NBI29:1;           /**< \brief [29:29] NBI Flag of Buffer 29 - NBI29 (rh) */
    Ifx_UReg_32Bit NBI30:1;           /**< \brief [30:30] NBI Flag of Buffer 30 - NBI30 (rh) */
    Ifx_UReg_32Bit NBI31:1;           /**< \brief [31:31] NBI Flag of Buffer 31 - NBI31 (rh) */
} Ifx_PSI5_NBIOV_Bits;

/** \brief NBI Overview Set Register ${x} */
typedef struct _Ifx_PSI5_NBISET_Bits
{
    Ifx_UReg_32Bit NBI0:1;            /**< \brief [0:0] Set NBI Flag of Buffer 0 - NBI0 (w) */
    Ifx_UReg_32Bit NBI1:1;            /**< \brief [1:1] Set NBI Flag of Buffer 1 - NBI1 (w) */
    Ifx_UReg_32Bit NBI2:1;            /**< \brief [2:2] Set NBI Flag of Buffer 2 - NBI2 (w) */
    Ifx_UReg_32Bit NBI3:1;            /**< \brief [3:3] Set NBI Flag of Buffer 3 - NBI3 (w) */
    Ifx_UReg_32Bit NBI4:1;            /**< \brief [4:4] Set NBI Flag of Buffer 4 - NBI4 (w) */
    Ifx_UReg_32Bit NBI5:1;            /**< \brief [5:5] Set NBI Flag of Buffer 5 - NBI5 (w) */
    Ifx_UReg_32Bit NBI6:1;            /**< \brief [6:6] Set NBI Flag of Buffer 6 - NBI6 (w) */
    Ifx_UReg_32Bit NBI7:1;            /**< \brief [7:7] Set NBI Flag of Buffer 7 - NBI7 (w) */
    Ifx_UReg_32Bit NBI8:1;            /**< \brief [8:8] Set NBI Flag of Buffer 8 - NBI8 (w) */
    Ifx_UReg_32Bit NBI9:1;            /**< \brief [9:9] Set NBI Flag of Buffer 9 - NBI9 (w) */
    Ifx_UReg_32Bit NBI10:1;           /**< \brief [10:10] Set NBI Flag of Buffer 10 - NBI10 (w) */
    Ifx_UReg_32Bit NBI11:1;           /**< \brief [11:11] Set NBI Flag of Buffer 11 - NBI11 (w) */
    Ifx_UReg_32Bit NBI12:1;           /**< \brief [12:12] Set NBI Flag of Buffer 12 - NBI12 (w) */
    Ifx_UReg_32Bit NBI13:1;           /**< \brief [13:13] Set NBI Flag of Buffer 13 - NBI13 (w) */
    Ifx_UReg_32Bit NBI14:1;           /**< \brief [14:14] Set NBI Flag of Buffer 14 - NBI14 (w) */
    Ifx_UReg_32Bit NBI15:1;           /**< \brief [15:15] Set NBI Flag of Buffer 15 - NBI15 (w) */
    Ifx_UReg_32Bit NBI16:1;           /**< \brief [16:16] Set NBI Flag of Buffer 16 - NBI16 (w) */
    Ifx_UReg_32Bit NBI17:1;           /**< \brief [17:17] Set NBI Flag of Buffer 17 - NBI17 (w) */
    Ifx_UReg_32Bit NBI18:1;           /**< \brief [18:18] Set NBI Flag of Buffer 18 - NBI18 (w) */
    Ifx_UReg_32Bit NBI19:1;           /**< \brief [19:19] Set NBI Flag of Buffer 19 - NBI19 (w) */
    Ifx_UReg_32Bit NBI20:1;           /**< \brief [20:20] Set NBI Flag of Buffer 20 - NBI20 (w) */
    Ifx_UReg_32Bit NBI21:1;           /**< \brief [21:21] Set NBI Flag of Buffer 21 - NBI21 (w) */
    Ifx_UReg_32Bit NBI22:1;           /**< \brief [22:22] Set NBI Flag of Buffer 22 - NBI22 (w) */
    Ifx_UReg_32Bit NBI23:1;           /**< \brief [23:23] Set NBI Flag of Buffer 23 - NBI23 (w) */
    Ifx_UReg_32Bit NBI24:1;           /**< \brief [24:24] Set NBI Flag of Buffer 24 - NBI24 (w) */
    Ifx_UReg_32Bit NBI25:1;           /**< \brief [25:25] Set NBI Flag of Buffer 25 - NBI25 (w) */
    Ifx_UReg_32Bit NBI26:1;           /**< \brief [26:26] Set NBI Flag of Buffer 26 - NBI26 (w) */
    Ifx_UReg_32Bit NBI27:1;           /**< \brief [27:27] Set NBI Flag of Buffer 27 - NBI27 (w) */
    Ifx_UReg_32Bit NBI28:1;           /**< \brief [28:28] Set NBI Flag of Buffer 28 - NBI28 (w) */
    Ifx_UReg_32Bit NBI29:1;           /**< \brief [29:29] Set NBI Flag of Buffer 29 - NBI29 (w) */
    Ifx_UReg_32Bit NBI30:1;           /**< \brief [30:30] Set NBI Flag of Buffer 30 - NBI30 (w) */
    Ifx_UReg_32Bit NBI31:1;           /**< \brief [31:31] Set NBI Flag of Buffer 31 - NBI31 (w) */
} Ifx_PSI5_NBISET_Bits;

/** \brief NFI Overview Clear Register ${x} */
typedef struct _Ifx_PSI5_NFICLR_Bits
{
    Ifx_UReg_32Bit NFI0:1;            /**< \brief [0:0] Clear NFI Flag of Buffer 0 - NFI0 (w) */
    Ifx_UReg_32Bit NFI1:1;            /**< \brief [1:1] Clear NFI Flag of Buffer 1 - NFI1 (w) */
    Ifx_UReg_32Bit NFI2:1;            /**< \brief [2:2] Clear NFI Flag of Buffer 2 - NFI2 (w) */
    Ifx_UReg_32Bit NFI3:1;            /**< \brief [3:3] Clear NFI Flag of Buffer 3 - NFI3 (w) */
    Ifx_UReg_32Bit NFI4:1;            /**< \brief [4:4] Clear NFI Flag of Buffer 4 - NFI4 (w) */
    Ifx_UReg_32Bit NFI5:1;            /**< \brief [5:5] Clear NFI Flag of Buffer 5 - NFI5 (w) */
    Ifx_UReg_32Bit NFI6:1;            /**< \brief [6:6] Clear NFI Flag of Buffer 6 - NFI6 (w) */
    Ifx_UReg_32Bit NFI7:1;            /**< \brief [7:7] Clear NFI Flag of Buffer 7 - NFI7 (w) */
    Ifx_UReg_32Bit NFI8:1;            /**< \brief [8:8] Clear NFI Flag of Buffer 8 - NFI8 (w) */
    Ifx_UReg_32Bit NFI9:1;            /**< \brief [9:9] Clear NFI Flag of Buffer 9 - NFI9 (w) */
    Ifx_UReg_32Bit NFI10:1;           /**< \brief [10:10] Clear NFI Flag of Buffer 10 - NFI10 (w) */
    Ifx_UReg_32Bit NFI11:1;           /**< \brief [11:11] Clear NFI Flag of Buffer 11 - NFI11 (w) */
    Ifx_UReg_32Bit NFI12:1;           /**< \brief [12:12] Clear NFI Flag of Buffer 12 - NFI12 (w) */
    Ifx_UReg_32Bit NFI13:1;           /**< \brief [13:13] Clear NFI Flag of Buffer 13 - NFI13 (w) */
    Ifx_UReg_32Bit NFI14:1;           /**< \brief [14:14] Clear NFI Flag of Buffer 14 - NFI14 (w) */
    Ifx_UReg_32Bit NFI15:1;           /**< \brief [15:15] Clear NFI Flag of Buffer 15 - NFI15 (w) */
    Ifx_UReg_32Bit NFI16:1;           /**< \brief [16:16] Clear NFI Flag of Buffer 16 - NFI16 (w) */
    Ifx_UReg_32Bit NFI17:1;           /**< \brief [17:17] Clear NFI Flag of Buffer 17 - NFI17 (w) */
    Ifx_UReg_32Bit NFI18:1;           /**< \brief [18:18] Clear NFI Flag of Buffer 18 - NFI18 (w) */
    Ifx_UReg_32Bit NFI19:1;           /**< \brief [19:19] Clear NFI Flag of Buffer 19 - NFI19 (w) */
    Ifx_UReg_32Bit NFI20:1;           /**< \brief [20:20] Clear NFI Flag of Buffer 20 - NFI20 (w) */
    Ifx_UReg_32Bit NFI21:1;           /**< \brief [21:21] Clear NFI Flag of Buffer 21 - NFI21 (w) */
    Ifx_UReg_32Bit NFI22:1;           /**< \brief [22:22] Clear NFI Flag of Buffer 22 - NFI22 (w) */
    Ifx_UReg_32Bit NFI23:1;           /**< \brief [23:23] Clear NFI Flag of Buffer 23 - NFI23 (w) */
    Ifx_UReg_32Bit NFI24:1;           /**< \brief [24:24] Clear NFI Flag of Buffer 24 - NFI24 (w) */
    Ifx_UReg_32Bit NFI25:1;           /**< \brief [25:25] Clear NFI Flag of Buffer 25 - NFI25 (w) */
    Ifx_UReg_32Bit NFI26:1;           /**< \brief [26:26] Clear NFI Flag of Buffer 26 - NFI26 (w) */
    Ifx_UReg_32Bit NFI27:1;           /**< \brief [27:27] Clear NFI Flag of Buffer 27 - NFI27 (w) */
    Ifx_UReg_32Bit NFI28:1;           /**< \brief [28:28] Clear NFI Flag of Buffer 28 - NFI28 (w) */
    Ifx_UReg_32Bit NFI29:1;           /**< \brief [29:29] Clear NFI Flag of Buffer 29 - NFI29 (w) */
    Ifx_UReg_32Bit NFI30:1;           /**< \brief [30:30] Clear NFI Flag of Buffer 30 - NFI30 (w) */
    Ifx_UReg_32Bit NFI31:1;           /**< \brief [31:31] Clear NFI Flag of Buffer 31 - NFI31 (w) */
} Ifx_PSI5_NFICLR_Bits;

/** \brief NFI Overview Register ${x} */
typedef struct _Ifx_PSI5_NFIOV_Bits
{
    Ifx_UReg_32Bit NFI0:1;            /**< \brief [0:0] NFI Flag of Buffer 0 - NFI0 (rh) */
    Ifx_UReg_32Bit NFI1:1;            /**< \brief [1:1] NFI Flag of Buffer 1 - NFI1 (rh) */
    Ifx_UReg_32Bit NFI2:1;            /**< \brief [2:2] NFI Flag of Buffer 2 - NFI2 (rh) */
    Ifx_UReg_32Bit NFI3:1;            /**< \brief [3:3] NFI Flag of Buffer 3 - NFI3 (rh) */
    Ifx_UReg_32Bit NFI4:1;            /**< \brief [4:4] NFI Flag of Buffer 4 - NFI4 (rh) */
    Ifx_UReg_32Bit NFI5:1;            /**< \brief [5:5] NFI Flag of Buffer 5 - NFI5 (rh) */
    Ifx_UReg_32Bit NFI6:1;            /**< \brief [6:6] NFI Flag of Buffer 6 - NFI6 (rh) */
    Ifx_UReg_32Bit NFI7:1;            /**< \brief [7:7] NFI Flag of Buffer 7 - NFI7 (rh) */
    Ifx_UReg_32Bit NFI8:1;            /**< \brief [8:8] NFI Flag of Buffer 8 - NFI8 (rh) */
    Ifx_UReg_32Bit NFI9:1;            /**< \brief [9:9] NFI Flag of Buffer 9 - NFI9 (rh) */
    Ifx_UReg_32Bit NFI10:1;           /**< \brief [10:10] NFI Flag of Buffer 10 - NFI10 (rh) */
    Ifx_UReg_32Bit NFI11:1;           /**< \brief [11:11] NFI Flag of Buffer 11 - NFI11 (rh) */
    Ifx_UReg_32Bit NFI12:1;           /**< \brief [12:12] NFI Flag of Buffer 12 - NFI12 (rh) */
    Ifx_UReg_32Bit NFI13:1;           /**< \brief [13:13] NFI Flag of Buffer 13 - NFI13 (rh) */
    Ifx_UReg_32Bit NFI14:1;           /**< \brief [14:14] NFI Flag of Buffer 14 - NFI14 (rh) */
    Ifx_UReg_32Bit NFI15:1;           /**< \brief [15:15] NFI Flag of Buffer 15 - NFI15 (rh) */
    Ifx_UReg_32Bit NFI16:1;           /**< \brief [16:16] NFI Flag of Buffer 16 - NFI16 (rh) */
    Ifx_UReg_32Bit NFI17:1;           /**< \brief [17:17] NFI Flag of Buffer 17 - NFI17 (rh) */
    Ifx_UReg_32Bit NFI18:1;           /**< \brief [18:18] NFI Flag of Buffer 18 - NFI18 (rh) */
    Ifx_UReg_32Bit NFI19:1;           /**< \brief [19:19] NFI Flag of Buffer 19 - NFI19 (rh) */
    Ifx_UReg_32Bit NFI20:1;           /**< \brief [20:20] NFI Flag of Buffer 20 - NFI20 (rh) */
    Ifx_UReg_32Bit NFI21:1;           /**< \brief [21:21] NFI Flag of Buffer 21 - NFI21 (rh) */
    Ifx_UReg_32Bit NFI22:1;           /**< \brief [22:22] NFI Flag of Buffer 22 - NFI22 (rh) */
    Ifx_UReg_32Bit NFI23:1;           /**< \brief [23:23] NFI Flag of Buffer 23 - NFI23 (rh) */
    Ifx_UReg_32Bit NFI24:1;           /**< \brief [24:24] NFI Flag of Buffer 24 - NFI24 (rh) */
    Ifx_UReg_32Bit NFI25:1;           /**< \brief [25:25] NFI Flag of Buffer 25 - NFI25 (rh) */
    Ifx_UReg_32Bit NFI26:1;           /**< \brief [26:26] NFI Flag of Buffer 26 - NFI26 (rh) */
    Ifx_UReg_32Bit NFI27:1;           /**< \brief [27:27] NFI Flag of Buffer 27 - NFI27 (rh) */
    Ifx_UReg_32Bit NFI28:1;           /**< \brief [28:28] NFI Flag of Buffer 28 - NFI28 (rh) */
    Ifx_UReg_32Bit NFI29:1;           /**< \brief [29:29] NFI Flag of Buffer 29 - NFI29 (rh) */
    Ifx_UReg_32Bit NFI30:1;           /**< \brief [30:30] NFI Flag of Buffer 30 - NFI30 (rh) */
    Ifx_UReg_32Bit NFI31:1;           /**< \brief [31:31] NFI Flag of Buffer 31 - NFI31 (rh) */
} Ifx_PSI5_NFIOV_Bits;

/** \brief NFI Overview Set Register ${x} */
typedef struct _Ifx_PSI5_NFISET_Bits
{
    Ifx_UReg_32Bit NFI0:1;            /**< \brief [0:0] Set NFI Flag of Buffer 0 - NFI0 (w) */
    Ifx_UReg_32Bit NFI1:1;            /**< \brief [1:1] Set NFI Flag of Buffer 1 - NFI1 (w) */
    Ifx_UReg_32Bit NFI2:1;            /**< \brief [2:2] Set NFI Flag of Buffer 2 - NFI2 (w) */
    Ifx_UReg_32Bit NFI3:1;            /**< \brief [3:3] Set NFI Flag of Buffer 3 - NFI3 (w) */
    Ifx_UReg_32Bit NFI4:1;            /**< \brief [4:4] Set NFI Flag of Buffer 4 - NFI4 (w) */
    Ifx_UReg_32Bit NFI5:1;            /**< \brief [5:5] Set NFI Flag of Buffer 5 - NFI5 (w) */
    Ifx_UReg_32Bit NFI6:1;            /**< \brief [6:6] Set NFI Flag of Buffer 6 - NFI6 (w) */
    Ifx_UReg_32Bit NFI7:1;            /**< \brief [7:7] Set NFI Flag of Buffer 7 - NFI7 (w) */
    Ifx_UReg_32Bit NFI8:1;            /**< \brief [8:8] Set NFI Flag of Buffer 8 - NFI8 (w) */
    Ifx_UReg_32Bit NFI9:1;            /**< \brief [9:9] Set NFI Flag of Buffer 9 - NFI9 (w) */
    Ifx_UReg_32Bit NFI10:1;           /**< \brief [10:10] Set NFI Flag of Buffer 10 - NFI10 (w) */
    Ifx_UReg_32Bit NFI11:1;           /**< \brief [11:11] Set NFI Flag of Buffer 11 - NFI11 (w) */
    Ifx_UReg_32Bit NFI12:1;           /**< \brief [12:12] Set NFI Flag of Buffer 12 - NFI12 (w) */
    Ifx_UReg_32Bit NFI13:1;           /**< \brief [13:13] Set NFI Flag of Buffer 13 - NFI13 (w) */
    Ifx_UReg_32Bit NFI14:1;           /**< \brief [14:14] Set NFI Flag of Buffer 14 - NFI14 (w) */
    Ifx_UReg_32Bit NFI15:1;           /**< \brief [15:15] Set NFI Flag of Buffer 15 - NFI15 (w) */
    Ifx_UReg_32Bit NFI16:1;           /**< \brief [16:16] Set NFI Flag of Buffer 16 - NFI16 (w) */
    Ifx_UReg_32Bit NFI17:1;           /**< \brief [17:17] Set NFI Flag of Buffer 17 - NFI17 (w) */
    Ifx_UReg_32Bit NFI18:1;           /**< \brief [18:18] Set NFI Flag of Buffer 18 - NFI18 (w) */
    Ifx_UReg_32Bit NFI19:1;           /**< \brief [19:19] Set NFI Flag of Buffer 19 - NFI19 (w) */
    Ifx_UReg_32Bit NFI20:1;           /**< \brief [20:20] Set NFI Flag of Buffer 20 - NFI20 (w) */
    Ifx_UReg_32Bit NFI21:1;           /**< \brief [21:21] Set NFI Flag of Buffer 21 - NFI21 (w) */
    Ifx_UReg_32Bit NFI22:1;           /**< \brief [22:22] Set NFI Flag of Buffer 22 - NFI22 (w) */
    Ifx_UReg_32Bit NFI23:1;           /**< \brief [23:23] Set NFI Flag of Buffer 23 - NFI23 (w) */
    Ifx_UReg_32Bit NFI24:1;           /**< \brief [24:24] Set NFI Flag of Buffer 24 - NFI24 (w) */
    Ifx_UReg_32Bit NFI25:1;           /**< \brief [25:25] Set NFI Flag of Buffer 25 - NFI25 (w) */
    Ifx_UReg_32Bit NFI26:1;           /**< \brief [26:26] Set NFI Flag of Buffer 26 - NFI26 (w) */
    Ifx_UReg_32Bit NFI27:1;           /**< \brief [27:27] Set NFI Flag of Buffer 27 - NFI27 (w) */
    Ifx_UReg_32Bit NFI28:1;           /**< \brief [28:28] Set NFI Flag of Buffer 28 - NFI28 (w) */
    Ifx_UReg_32Bit NFI29:1;           /**< \brief [29:29] Set NFI Flag of Buffer 29 - NFI29 (w) */
    Ifx_UReg_32Bit NFI30:1;           /**< \brief [30:30] Set NFI Flag of Buffer 30 - NFI30 (w) */
    Ifx_UReg_32Bit NFI31:1;           /**< \brief [31:31] Set NFI Flag of Buffer 31 - NFI31 (w) */
} Ifx_PSI5_NFISET_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_PSI5_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_PSI5_OCS_Bits;

/** \brief Receive Data FIFO ${x} */
typedef struct _Ifx_PSI5_RDF_Bits
{
    Ifx_UReg_32Bit RD:32;             /**< \brief [31:0] RD - RD (rh) */
} Ifx_PSI5_RDF_Bits;

/** \brief RDI Overview Clear Register ${x} */
typedef struct _Ifx_PSI5_RDICLR_Bits
{
    Ifx_UReg_32Bit RDI0:1;            /**< \brief [0:0] Clear RDI Flag of Buffer 0 - RDI0 (w) */
    Ifx_UReg_32Bit RDI1:1;            /**< \brief [1:1] Clear RDI Flag of Buffer 1 - RDI1 (w) */
    Ifx_UReg_32Bit RDI2:1;            /**< \brief [2:2] Clear RDI Flag of Buffer 2 - RDI2 (w) */
    Ifx_UReg_32Bit RDI3:1;            /**< \brief [3:3] Clear RDI Flag of Buffer 3 - RDI3 (w) */
    Ifx_UReg_32Bit RDI4:1;            /**< \brief [4:4] Clear RDI Flag of Buffer 4 - RDI4 (w) */
    Ifx_UReg_32Bit RDI5:1;            /**< \brief [5:5] Clear RDI Flag of Buffer 5 - RDI5 (w) */
    Ifx_UReg_32Bit RDI6:1;            /**< \brief [6:6] Clear RDI Flag of Buffer 6 - RDI6 (w) */
    Ifx_UReg_32Bit RDI7:1;            /**< \brief [7:7] Clear RDI Flag of Buffer 7 - RDI7 (w) */
    Ifx_UReg_32Bit RDI8:1;            /**< \brief [8:8] Clear RDI Flag of Buffer 8 - RDI8 (w) */
    Ifx_UReg_32Bit RDI9:1;            /**< \brief [9:9] Clear RDI Flag of Buffer 9 - RDI9 (w) */
    Ifx_UReg_32Bit RDI10:1;           /**< \brief [10:10] Clear RDI Flag of Buffer 10 - RDI10 (w) */
    Ifx_UReg_32Bit RDI11:1;           /**< \brief [11:11] Clear RDI Flag of Buffer 11 - RDI11 (w) */
    Ifx_UReg_32Bit RDI12:1;           /**< \brief [12:12] Clear RDI Flag of Buffer 12 - RDI12 (w) */
    Ifx_UReg_32Bit RDI13:1;           /**< \brief [13:13] Clear RDI Flag of Buffer 13 - RDI13 (w) */
    Ifx_UReg_32Bit RDI14:1;           /**< \brief [14:14] Clear RDI Flag of Buffer 14 - RDI14 (w) */
    Ifx_UReg_32Bit RDI15:1;           /**< \brief [15:15] Clear RDI Flag of Buffer 15 - RDI15 (w) */
    Ifx_UReg_32Bit RDI16:1;           /**< \brief [16:16] Clear RDI Flag of Buffer 16 - RDI16 (w) */
    Ifx_UReg_32Bit RDI17:1;           /**< \brief [17:17] Clear RDI Flag of Buffer 17 - RDI17 (w) */
    Ifx_UReg_32Bit RDI18:1;           /**< \brief [18:18] Clear RDI Flag of Buffer 18 - RDI18 (w) */
    Ifx_UReg_32Bit RDI19:1;           /**< \brief [19:19] Clear RDI Flag of Buffer 19 - RDI19 (w) */
    Ifx_UReg_32Bit RDI20:1;           /**< \brief [20:20] Clear RDI Flag of Buffer 20 - RDI20 (w) */
    Ifx_UReg_32Bit RDI21:1;           /**< \brief [21:21] Clear RDI Flag of Buffer 21 - RDI21 (w) */
    Ifx_UReg_32Bit RDI22:1;           /**< \brief [22:22] Clear RDI Flag of Buffer 22 - RDI22 (w) */
    Ifx_UReg_32Bit RDI23:1;           /**< \brief [23:23] Clear RDI Flag of Buffer 23 - RDI23 (w) */
    Ifx_UReg_32Bit RDI24:1;           /**< \brief [24:24] Clear RDI Flag of Buffer 24 - RDI24 (w) */
    Ifx_UReg_32Bit RDI25:1;           /**< \brief [25:25] Clear RDI Flag of Buffer 25 - RDI25 (w) */
    Ifx_UReg_32Bit RDI26:1;           /**< \brief [26:26] Clear RDI Flag of Buffer 26 - RDI26 (w) */
    Ifx_UReg_32Bit RDI27:1;           /**< \brief [27:27] Clear RDI Flag of Buffer 27 - RDI27 (w) */
    Ifx_UReg_32Bit RDI28:1;           /**< \brief [28:28] Clear RDI Flag of Buffer 28 - RDI28 (w) */
    Ifx_UReg_32Bit RDI29:1;           /**< \brief [29:29] Clear RDI Flag of Buffer 29 - RDI29 (w) */
    Ifx_UReg_32Bit RDI30:1;           /**< \brief [30:30] Clear RDI Flag of Buffer 30 - RDI30 (w) */
    Ifx_UReg_32Bit RDI31:1;           /**< \brief [31:31] Clear RDI Flag of Buffer 31 - RDI31 (w) */
} Ifx_PSI5_RDICLR_Bits;

/** \brief RDI Overview Register ${x} */
typedef struct _Ifx_PSI5_RDIOV_Bits
{
    Ifx_UReg_32Bit RDI0:1;            /**< \brief [0:0] RDI Flag of Buffer 0 - RDI0 (rh) */
    Ifx_UReg_32Bit RDI1:1;            /**< \brief [1:1] RDI Flag of Buffer 1 - RDI1 (rh) */
    Ifx_UReg_32Bit RDI2:1;            /**< \brief [2:2] RDI Flag of Buffer 2 - RDI2 (rh) */
    Ifx_UReg_32Bit RDI3:1;            /**< \brief [3:3] RDI Flag of Buffer 3 - RDI3 (rh) */
    Ifx_UReg_32Bit RDI4:1;            /**< \brief [4:4] RDI Flag of Buffer 4 - RDI4 (rh) */
    Ifx_UReg_32Bit RDI5:1;            /**< \brief [5:5] RDI Flag of Buffer 5 - RDI5 (rh) */
    Ifx_UReg_32Bit RDI6:1;            /**< \brief [6:6] RDI Flag of Buffer 6 - RDI6 (rh) */
    Ifx_UReg_32Bit RDI7:1;            /**< \brief [7:7] RDI Flag of Buffer 7 - RDI7 (rh) */
    Ifx_UReg_32Bit RDI8:1;            /**< \brief [8:8] RDI Flag of Buffer 8 - RDI8 (rh) */
    Ifx_UReg_32Bit RDI9:1;            /**< \brief [9:9] RDI Flag of Buffer 9 - RDI9 (rh) */
    Ifx_UReg_32Bit RDI10:1;           /**< \brief [10:10] RDI Flag of Buffer 10 - RDI10 (rh) */
    Ifx_UReg_32Bit RDI11:1;           /**< \brief [11:11] RDI Flag of Buffer 11 - RDI11 (rh) */
    Ifx_UReg_32Bit RDI12:1;           /**< \brief [12:12] RDI Flag of Buffer 12 - RDI12 (rh) */
    Ifx_UReg_32Bit RDI13:1;           /**< \brief [13:13] RDI Flag of Buffer 13 - RDI13 (rh) */
    Ifx_UReg_32Bit RDI14:1;           /**< \brief [14:14] RDI Flag of Buffer 14 - RDI14 (rh) */
    Ifx_UReg_32Bit RDI15:1;           /**< \brief [15:15] RDI Flag of Buffer 15 - RDI15 (rh) */
    Ifx_UReg_32Bit RDI16:1;           /**< \brief [16:16] RDI Flag of Buffer 16 - RDI16 (rh) */
    Ifx_UReg_32Bit RDI17:1;           /**< \brief [17:17] RDI Flag of Buffer 17 - RDI17 (rh) */
    Ifx_UReg_32Bit RDI18:1;           /**< \brief [18:18] RDI Flag of Buffer 18 - RDI18 (rh) */
    Ifx_UReg_32Bit RDI19:1;           /**< \brief [19:19] RDI Flag of Buffer 19 - RDI19 (rh) */
    Ifx_UReg_32Bit RDI20:1;           /**< \brief [20:20] RDI Flag of Buffer 20 - RDI20 (rh) */
    Ifx_UReg_32Bit RDI21:1;           /**< \brief [21:21] RDI Flag of Buffer 21 - RDI21 (rh) */
    Ifx_UReg_32Bit RDI22:1;           /**< \brief [22:22] RDI Flag of Buffer 22 - RDI22 (rh) */
    Ifx_UReg_32Bit RDI23:1;           /**< \brief [23:23] RDI Flag of Buffer 23 - RDI23 (rh) */
    Ifx_UReg_32Bit RDI24:1;           /**< \brief [24:24] RDI Flag of Buffer 24 - RDI24 (rh) */
    Ifx_UReg_32Bit RDI25:1;           /**< \brief [25:25] RDI Flag of Buffer 25 - RDI25 (rh) */
    Ifx_UReg_32Bit RDI26:1;           /**< \brief [26:26] RDI Flag of Buffer 26 - RDI26 (rh) */
    Ifx_UReg_32Bit RDI27:1;           /**< \brief [27:27] RDI Flag of Buffer 27 - RDI27 (rh) */
    Ifx_UReg_32Bit RDI28:1;           /**< \brief [28:28] RDI Flag of Buffer 28 - RDI28 (rh) */
    Ifx_UReg_32Bit RDI29:1;           /**< \brief [29:29] RDI Flag of Buffer 29 - RDI29 (rh) */
    Ifx_UReg_32Bit RDI30:1;           /**< \brief [30:30] RDI Flag of Buffer 30 - RDI30 (rh) */
    Ifx_UReg_32Bit RDI31:1;           /**< \brief [31:31] RDI Flag of Buffer 31 - RDI31 (rh) */
} Ifx_PSI5_RDIOV_Bits;

/** \brief RDI Overview Set Register ${x} */
typedef struct _Ifx_PSI5_RDISET_Bits
{
    Ifx_UReg_32Bit RDI0:1;            /**< \brief [0:0] Set RDI Flag of Buffer 0 - RDI0 (w) */
    Ifx_UReg_32Bit RDI1:1;            /**< \brief [1:1] Set RDI Flag of Buffer 1 - RDI1 (w) */
    Ifx_UReg_32Bit RDI2:1;            /**< \brief [2:2] Set RDI Flag of Buffer 2 - RDI2 (w) */
    Ifx_UReg_32Bit RDI3:1;            /**< \brief [3:3] Set RDI Flag of Buffer 3 - RDI3 (w) */
    Ifx_UReg_32Bit RDI4:1;            /**< \brief [4:4] Set RDI Flag of Buffer 4 - RDI4 (w) */
    Ifx_UReg_32Bit RDI5:1;            /**< \brief [5:5] Set RDI Flag of Buffer 5 - RDI5 (w) */
    Ifx_UReg_32Bit RDI6:1;            /**< \brief [6:6] Set RDI Flag of Buffer 6 - RDI6 (w) */
    Ifx_UReg_32Bit RDI7:1;            /**< \brief [7:7] Set RDI Flag of Buffer 7 - RDI7 (w) */
    Ifx_UReg_32Bit RDI8:1;            /**< \brief [8:8] Set RDI Flag of Buffer 8 - RDI8 (w) */
    Ifx_UReg_32Bit RDI9:1;            /**< \brief [9:9] Set RDI Flag of Buffer 9 - RDI9 (w) */
    Ifx_UReg_32Bit RDI10:1;           /**< \brief [10:10] Set RDI Flag of Buffer 10 - RDI10 (w) */
    Ifx_UReg_32Bit RDI11:1;           /**< \brief [11:11] Set RDI Flag of Buffer 11 - RDI11 (w) */
    Ifx_UReg_32Bit RDI12:1;           /**< \brief [12:12] Set RDI Flag of Buffer 12 - RDI12 (w) */
    Ifx_UReg_32Bit RDI13:1;           /**< \brief [13:13] Set RDI Flag of Buffer 13 - RDI13 (w) */
    Ifx_UReg_32Bit RDI14:1;           /**< \brief [14:14] Set RDI Flag of Buffer 14 - RDI14 (w) */
    Ifx_UReg_32Bit RDI15:1;           /**< \brief [15:15] Set RDI Flag of Buffer 15 - RDI15 (w) */
    Ifx_UReg_32Bit RDI16:1;           /**< \brief [16:16] Set RDI Flag of Buffer 16 - RDI16 (w) */
    Ifx_UReg_32Bit RDI17:1;           /**< \brief [17:17] Set RDI Flag of Buffer 17 - RDI17 (w) */
    Ifx_UReg_32Bit RDI18:1;           /**< \brief [18:18] Set RDI Flag of Buffer 18 - RDI18 (w) */
    Ifx_UReg_32Bit RDI19:1;           /**< \brief [19:19] Set RDI Flag of Buffer 19 - RDI19 (w) */
    Ifx_UReg_32Bit RDI20:1;           /**< \brief [20:20] Set RDI Flag of Buffer 20 - RDI20 (w) */
    Ifx_UReg_32Bit RDI21:1;           /**< \brief [21:21] Set RDI Flag of Buffer 21 - RDI21 (w) */
    Ifx_UReg_32Bit RDI22:1;           /**< \brief [22:22] Set RDI Flag of Buffer 22 - RDI22 (w) */
    Ifx_UReg_32Bit RDI23:1;           /**< \brief [23:23] Set RDI Flag of Buffer 23 - RDI23 (w) */
    Ifx_UReg_32Bit RDI24:1;           /**< \brief [24:24] Set RDI Flag of Buffer 24 - RDI24 (w) */
    Ifx_UReg_32Bit RDI25:1;           /**< \brief [25:25] Set RDI Flag of Buffer 25 - RDI25 (w) */
    Ifx_UReg_32Bit RDI26:1;           /**< \brief [26:26] Set RDI Flag of Buffer 26 - RDI26 (w) */
    Ifx_UReg_32Bit RDI27:1;           /**< \brief [27:27] Set RDI Flag of Buffer 27 - RDI27 (w) */
    Ifx_UReg_32Bit RDI28:1;           /**< \brief [28:28] Set RDI Flag of Buffer 28 - RDI28 (w) */
    Ifx_UReg_32Bit RDI29:1;           /**< \brief [29:29] Set RDI Flag of Buffer 29 - RDI29 (w) */
    Ifx_UReg_32Bit RDI30:1;           /**< \brief [30:30] Set RDI Flag of Buffer 30 - RDI30 (w) */
    Ifx_UReg_32Bit RDI31:1;           /**< \brief [31:31] Set RDI Flag of Buffer 31 - RDI31 (w) */
} Ifx_PSI5_RDISET_Bits;

/** \brief Receive Data Memory High ${x}${y} */
typedef struct _Ifx_PSI5_RDM_H_Bits
{
    Ifx_UReg_32Bit TS:24;             /**< \brief [23:0] Time Stamp - TS (rh) */
    Ifx_UReg_32Bit SC:3;              /**< \brief [26:24] Slot Counter - SC (rh) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [27:27] Time Slot Error Flag - TEI (rh) */
    Ifx_UReg_32Bit NBI:1;             /**< \brief [28:28] Number of bits Error Flag - NBI (rh) */
    Ifx_UReg_32Bit MEI:1;             /**< \brief [29:29] Error in Messaging Bits Flag - MEI (rh) */
    Ifx_UReg_32Bit NFI:1;             /**< \brief [30:30] No Frame Received Flag - NFI (rh) */
    Ifx_UReg_32Bit RMI:1;             /**< \brief [31:31] Receive Memory Overflow Flag - RMI (rh) */
} Ifx_PSI5_RDM_H_Bits;

/** \brief Receive Data Memory Low ${x}${y} */
typedef struct _Ifx_PSI5_RDM_L_Bits
{
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [0:0] CRC Error Flag - CRCI (rh) */
    Ifx_UReg_32Bit CRC:3;             /**< \brief [3:1] CRC - CRC (rh) */
    Ifx_UReg_32Bit RD:28;             /**< \brief [31:4] RD - RD (rh) */
} Ifx_PSI5_RDM_L_Bits;

/** \brief Receive FIFO Control Register ${x} */
typedef struct _Ifx_PSI5_RFC_Bits
{
    Ifx_UReg_32Bit REP:6;             /**< \brief [5:0] FIFO Read Pointer - REP (r) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit WRP:6;             /**< \brief [13:8] FIFO/Ring Buffer Write Pointer - WRP (r) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit FWL:5;             /**< \brief [20:16] FIFO Warning Level - FWL (rw) */
    Ifx_UReg_32Bit reserved_21:8;     /**< \brief [28:21] \internal Reserved */
    Ifx_UReg_32Bit WRAP:1;            /**< \brief [29:29] Write Pointer WRAP Indicator - WRAP (r) */
    Ifx_UReg_32Bit FRQ:1;             /**< \brief [30:30] Flush Request - FRQ (r) */
    Ifx_UReg_32Bit FLU:1;             /**< \brief [31:31] Flush - FLU (w) */
} Ifx_PSI5_RFC_Bits;

/** \brief RMI Overview Clear Register ${x} */
typedef struct _Ifx_PSI5_RMICLR_Bits
{
    Ifx_UReg_32Bit RMI0:1;            /**< \brief [0:0] Clear RMI Flag of Buffer 0 - RMI0 (w) */
    Ifx_UReg_32Bit RMI1:1;            /**< \brief [1:1] Clear RMI Flag of Buffer 1 - RMI1 (w) */
    Ifx_UReg_32Bit RMI2:1;            /**< \brief [2:2] Clear RMI Flag of Buffer 2 - RMI2 (w) */
    Ifx_UReg_32Bit RMI3:1;            /**< \brief [3:3] Clear RMI Flag of Buffer 3 - RMI3 (w) */
    Ifx_UReg_32Bit RMI4:1;            /**< \brief [4:4] Clear RMI Flag of Buffer 4 - RMI4 (w) */
    Ifx_UReg_32Bit RMI5:1;            /**< \brief [5:5] Clear RMI Flag of Buffer 5 - RMI5 (w) */
    Ifx_UReg_32Bit RMI6:1;            /**< \brief [6:6] Clear RMI Flag of Buffer 6 - RMI6 (w) */
    Ifx_UReg_32Bit RMI7:1;            /**< \brief [7:7] Clear RMI Flag of Buffer 7 - RMI7 (w) */
    Ifx_UReg_32Bit RMI8:1;            /**< \brief [8:8] Clear RMI Flag of Buffer 8 - RMI8 (w) */
    Ifx_UReg_32Bit RMI9:1;            /**< \brief [9:9] Clear RMI Flag of Buffer 9 - RMI9 (w) */
    Ifx_UReg_32Bit RMI10:1;           /**< \brief [10:10] Clear RMI Flag of Buffer 10 - RMI10 (w) */
    Ifx_UReg_32Bit RMI11:1;           /**< \brief [11:11] Clear RMI Flag of Buffer 11 - RMI11 (w) */
    Ifx_UReg_32Bit RMI12:1;           /**< \brief [12:12] Clear RMI Flag of Buffer 12 - RMI12 (w) */
    Ifx_UReg_32Bit RMI13:1;           /**< \brief [13:13] Clear RMI Flag of Buffer 13 - RMI13 (w) */
    Ifx_UReg_32Bit RMI14:1;           /**< \brief [14:14] Clear RMI Flag of Buffer 14 - RMI14 (w) */
    Ifx_UReg_32Bit RMI15:1;           /**< \brief [15:15] Clear RMI Flag of Buffer 15 - RMI15 (w) */
    Ifx_UReg_32Bit RMI16:1;           /**< \brief [16:16] Clear RMI Flag of Buffer 16 - RMI16 (w) */
    Ifx_UReg_32Bit RMI17:1;           /**< \brief [17:17] Clear RMI Flag of Buffer 17 - RMI17 (w) */
    Ifx_UReg_32Bit RMI18:1;           /**< \brief [18:18] Clear RMI Flag of Buffer 18 - RMI18 (w) */
    Ifx_UReg_32Bit RMI19:1;           /**< \brief [19:19] Clear RMI Flag of Buffer 19 - RMI19 (w) */
    Ifx_UReg_32Bit RMI20:1;           /**< \brief [20:20] Clear RMI Flag of Buffer 20 - RMI20 (w) */
    Ifx_UReg_32Bit RMI21:1;           /**< \brief [21:21] Clear RMI Flag of Buffer 21 - RMI21 (w) */
    Ifx_UReg_32Bit RMI22:1;           /**< \brief [22:22] Clear RMI Flag of Buffer 22 - RMI22 (w) */
    Ifx_UReg_32Bit RMI23:1;           /**< \brief [23:23] Clear RMI Flag of Buffer 23 - RMI23 (w) */
    Ifx_UReg_32Bit RMI24:1;           /**< \brief [24:24] Clear RMI Flag of Buffer 24 - RMI24 (w) */
    Ifx_UReg_32Bit RMI25:1;           /**< \brief [25:25] Clear RMI Flag of Buffer 25 - RMI25 (w) */
    Ifx_UReg_32Bit RMI26:1;           /**< \brief [26:26] Clear RMI Flag of Buffer 26 - RMI26 (w) */
    Ifx_UReg_32Bit RMI27:1;           /**< \brief [27:27] Clear RMI Flag of Buffer 27 - RMI27 (w) */
    Ifx_UReg_32Bit RMI28:1;           /**< \brief [28:28] Clear RMI Flag of Buffer 28 - RMI28 (w) */
    Ifx_UReg_32Bit RMI29:1;           /**< \brief [29:29] Clear RMI Flag of Buffer 29 - RMI29 (w) */
    Ifx_UReg_32Bit RMI30:1;           /**< \brief [30:30] Clear RMI Flag of Buffer 30 - RMI30 (w) */
    Ifx_UReg_32Bit RMI31:1;           /**< \brief [31:31] Clear RMI Flag of Buffer 31 - RMI31 (w) */
} Ifx_PSI5_RMICLR_Bits;

/** \brief RMI Overview Register ${x} */
typedef struct _Ifx_PSI5_RMIOV_Bits
{
    Ifx_UReg_32Bit RMI0:1;            /**< \brief [0:0] RMI Flag of Buffer 0 - RMI0 (rh) */
    Ifx_UReg_32Bit RMI1:1;            /**< \brief [1:1] RMI Flag of Buffer 1 - RMI1 (rh) */
    Ifx_UReg_32Bit RMI2:1;            /**< \brief [2:2] RMI Flag of Buffer 2 - RMI2 (rh) */
    Ifx_UReg_32Bit RMI3:1;            /**< \brief [3:3] RMI Flag of Buffer 3 - RMI3 (rh) */
    Ifx_UReg_32Bit RMI4:1;            /**< \brief [4:4] RMI Flag of Buffer 4 - RMI4 (rh) */
    Ifx_UReg_32Bit RMI5:1;            /**< \brief [5:5] RMI Flag of Buffer 5 - RMI5 (rh) */
    Ifx_UReg_32Bit RMI6:1;            /**< \brief [6:6] RMI Flag of Buffer 6 - RMI6 (rh) */
    Ifx_UReg_32Bit RMI7:1;            /**< \brief [7:7] RMI Flag of Buffer 7 - RMI7 (rh) */
    Ifx_UReg_32Bit RMI8:1;            /**< \brief [8:8] RMI Flag of Buffer 8 - RMI8 (rh) */
    Ifx_UReg_32Bit RMI9:1;            /**< \brief [9:9] RMI Flag of Buffer 9 - RMI9 (rh) */
    Ifx_UReg_32Bit RMI10:1;           /**< \brief [10:10] RMI Flag of Buffer 10 - RMI10 (rh) */
    Ifx_UReg_32Bit RMI11:1;           /**< \brief [11:11] RMI Flag of Buffer 11 - RMI11 (rh) */
    Ifx_UReg_32Bit RMI12:1;           /**< \brief [12:12] RMI Flag of Buffer 12 - RMI12 (rh) */
    Ifx_UReg_32Bit RMI13:1;           /**< \brief [13:13] RMI Flag of Buffer 13 - RMI13 (rh) */
    Ifx_UReg_32Bit RMI14:1;           /**< \brief [14:14] RMI Flag of Buffer 14 - RMI14 (rh) */
    Ifx_UReg_32Bit RMI15:1;           /**< \brief [15:15] RMI Flag of Buffer 15 - RMI15 (rh) */
    Ifx_UReg_32Bit RMI16:1;           /**< \brief [16:16] RMI Flag of Buffer 16 - RMI16 (rh) */
    Ifx_UReg_32Bit RMI17:1;           /**< \brief [17:17] RMI Flag of Buffer 17 - RMI17 (rh) */
    Ifx_UReg_32Bit RMI18:1;           /**< \brief [18:18] RMI Flag of Buffer 18 - RMI18 (rh) */
    Ifx_UReg_32Bit RMI19:1;           /**< \brief [19:19] RMI Flag of Buffer 19 - RMI19 (rh) */
    Ifx_UReg_32Bit RMI20:1;           /**< \brief [20:20] RMI Flag of Buffer 20 - RMI20 (rh) */
    Ifx_UReg_32Bit RMI21:1;           /**< \brief [21:21] RMI Flag of Buffer 21 - RMI21 (rh) */
    Ifx_UReg_32Bit RMI22:1;           /**< \brief [22:22] RMI Flag of Buffer 22 - RMI22 (rh) */
    Ifx_UReg_32Bit RMI23:1;           /**< \brief [23:23] RMI Flag of Buffer 23 - RMI23 (rh) */
    Ifx_UReg_32Bit RMI24:1;           /**< \brief [24:24] RMI Flag of Buffer 24 - RMI24 (rh) */
    Ifx_UReg_32Bit RMI25:1;           /**< \brief [25:25] RMI Flag of Buffer 25 - RMI25 (rh) */
    Ifx_UReg_32Bit RMI26:1;           /**< \brief [26:26] RMI Flag of Buffer 26 - RMI26 (rh) */
    Ifx_UReg_32Bit RMI27:1;           /**< \brief [27:27] RMI Flag of Buffer 27 - RMI27 (rh) */
    Ifx_UReg_32Bit RMI28:1;           /**< \brief [28:28] RMI Flag of Buffer 28 - RMI28 (rh) */
    Ifx_UReg_32Bit RMI29:1;           /**< \brief [29:29] RMI Flag of Buffer 29 - RMI29 (rh) */
    Ifx_UReg_32Bit RMI30:1;           /**< \brief [30:30] RMI Flag of Buffer 30 - RMI30 (rh) */
    Ifx_UReg_32Bit RMI31:1;           /**< \brief [31:31] RMI Flag of Buffer 31 - RMI31 (rh) */
} Ifx_PSI5_RMIOV_Bits;

/** \brief RMI Overview Set Register ${x} */
typedef struct _Ifx_PSI5_RMISET_Bits
{
    Ifx_UReg_32Bit RMI0:1;            /**< \brief [0:0] Set RMI Flag of Buffer 0 - RMI0 (w) */
    Ifx_UReg_32Bit RMI1:1;            /**< \brief [1:1] Set RMI Flag of Buffer 1 - RMI1 (w) */
    Ifx_UReg_32Bit RMI2:1;            /**< \brief [2:2] Set RMI Flag of Buffer 2 - RMI2 (w) */
    Ifx_UReg_32Bit RMI3:1;            /**< \brief [3:3] Set RMI Flag of Buffer 3 - RMI3 (w) */
    Ifx_UReg_32Bit RMI4:1;            /**< \brief [4:4] Set RMI Flag of Buffer 4 - RMI4 (w) */
    Ifx_UReg_32Bit RMI5:1;            /**< \brief [5:5] Set RMI Flag of Buffer 5 - RMI5 (w) */
    Ifx_UReg_32Bit RMI6:1;            /**< \brief [6:6] Set RMI Flag of Buffer 6 - RMI6 (w) */
    Ifx_UReg_32Bit RMI7:1;            /**< \brief [7:7] Set RMI Flag of Buffer 7 - RMI7 (w) */
    Ifx_UReg_32Bit RMI8:1;            /**< \brief [8:8] Set RMI Flag of Buffer 8 - RMI8 (w) */
    Ifx_UReg_32Bit RMI9:1;            /**< \brief [9:9] Set RMI Flag of Buffer 9 - RMI9 (w) */
    Ifx_UReg_32Bit RMI10:1;           /**< \brief [10:10] Set RMI Flag of Buffer 10 - RMI10 (w) */
    Ifx_UReg_32Bit RMI11:1;           /**< \brief [11:11] Set RMI Flag of Buffer 11 - RMI11 (w) */
    Ifx_UReg_32Bit RMI12:1;           /**< \brief [12:12] Set RMI Flag of Buffer 12 - RMI12 (w) */
    Ifx_UReg_32Bit RMI13:1;           /**< \brief [13:13] Set RMI Flag of Buffer 13 - RMI13 (w) */
    Ifx_UReg_32Bit RMI14:1;           /**< \brief [14:14] Set RMI Flag of Buffer 14 - RMI14 (w) */
    Ifx_UReg_32Bit RMI15:1;           /**< \brief [15:15] Set RMI Flag of Buffer 15 - RMI15 (w) */
    Ifx_UReg_32Bit RMI16:1;           /**< \brief [16:16] Set RMI Flag of Buffer 16 - RMI16 (w) */
    Ifx_UReg_32Bit RMI17:1;           /**< \brief [17:17] Set RMI Flag of Buffer 17 - RMI17 (w) */
    Ifx_UReg_32Bit RMI18:1;           /**< \brief [18:18] Set RMI Flag of Buffer 18 - RMI18 (w) */
    Ifx_UReg_32Bit RMI19:1;           /**< \brief [19:19] Set RMI Flag of Buffer 19 - RMI19 (w) */
    Ifx_UReg_32Bit RMI20:1;           /**< \brief [20:20] Set RMI Flag of Buffer 20 - RMI20 (w) */
    Ifx_UReg_32Bit RMI21:1;           /**< \brief [21:21] Set RMI Flag of Buffer 21 - RMI21 (w) */
    Ifx_UReg_32Bit RMI22:1;           /**< \brief [22:22] Set RMI Flag of Buffer 22 - RMI22 (w) */
    Ifx_UReg_32Bit RMI23:1;           /**< \brief [23:23] Set RMI Flag of Buffer 23 - RMI23 (w) */
    Ifx_UReg_32Bit RMI24:1;           /**< \brief [24:24] Set RMI Flag of Buffer 24 - RMI24 (w) */
    Ifx_UReg_32Bit RMI25:1;           /**< \brief [25:25] Set RMI Flag of Buffer 25 - RMI25 (w) */
    Ifx_UReg_32Bit RMI26:1;           /**< \brief [26:26] Set RMI Flag of Buffer 26 - RMI26 (w) */
    Ifx_UReg_32Bit RMI27:1;           /**< \brief [27:27] Set RMI Flag of Buffer 27 - RMI27 (w) */
    Ifx_UReg_32Bit RMI28:1;           /**< \brief [28:28] Set RMI Flag of Buffer 28 - RMI28 (w) */
    Ifx_UReg_32Bit RMI29:1;           /**< \brief [29:29] Set RMI Flag of Buffer 29 - RMI29 (w) */
    Ifx_UReg_32Bit RMI30:1;           /**< \brief [30:30] Set RMI Flag of Buffer 30 - RMI30 (w) */
    Ifx_UReg_32Bit RMI31:1;           /**< \brief [31:31] Set RMI Flag of Buffer 31 - RMI31 (w) */
} Ifx_PSI5_RMISET_Bits;

/** \brief RSI Overview Clear Register ${x} */
typedef struct _Ifx_PSI5_RSICLR_Bits
{
    Ifx_UReg_32Bit RSI0:1;            /**< \brief [0:0] Clear RSI Flag of Buffer 0 - RSI0 (w) */
    Ifx_UReg_32Bit RSI1:1;            /**< \brief [1:1] Clear RSI Flag of Buffer 1 - RSI1 (w) */
    Ifx_UReg_32Bit RSI2:1;            /**< \brief [2:2] Clear RSI Flag of Buffer 2 - RSI2 (w) */
    Ifx_UReg_32Bit RSI3:1;            /**< \brief [3:3] Clear RSI Flag of Buffer 3 - RSI3 (w) */
    Ifx_UReg_32Bit RSI4:1;            /**< \brief [4:4] Clear RSI Flag of Buffer 4 - RSI4 (w) */
    Ifx_UReg_32Bit RSI5:1;            /**< \brief [5:5] Clear RSI Flag of Buffer 5 - RSI5 (w) */
    Ifx_UReg_32Bit RSI6:1;            /**< \brief [6:6] Clear RSI Flag of Buffer 6 - RSI6 (w) */
    Ifx_UReg_32Bit RSI7:1;            /**< \brief [7:7] Clear RSI Flag of Buffer 7 - RSI7 (w) */
    Ifx_UReg_32Bit RSI8:1;            /**< \brief [8:8] Clear RSI Flag of Buffer 8 - RSI8 (w) */
    Ifx_UReg_32Bit RSI9:1;            /**< \brief [9:9] Clear RSI Flag of Buffer 9 - RSI9 (w) */
    Ifx_UReg_32Bit RSI10:1;           /**< \brief [10:10] Clear RSI Flag of Buffer 10 - RSI10 (w) */
    Ifx_UReg_32Bit RSI11:1;           /**< \brief [11:11] Clear RSI Flag of Buffer 11 - RSI11 (w) */
    Ifx_UReg_32Bit RSI12:1;           /**< \brief [12:12] Clear RSI Flag of Buffer 12 - RSI12 (w) */
    Ifx_UReg_32Bit RSI13:1;           /**< \brief [13:13] Clear RSI Flag of Buffer 13 - RSI13 (w) */
    Ifx_UReg_32Bit RSI14:1;           /**< \brief [14:14] Clear RSI Flag of Buffer 14 - RSI14 (w) */
    Ifx_UReg_32Bit RSI15:1;           /**< \brief [15:15] Clear RSI Flag of Buffer 15 - RSI15 (w) */
    Ifx_UReg_32Bit RSI16:1;           /**< \brief [16:16] Clear RSI Flag of Buffer 16 - RSI16 (w) */
    Ifx_UReg_32Bit RSI17:1;           /**< \brief [17:17] Clear RSI Flag of Buffer 17 - RSI17 (w) */
    Ifx_UReg_32Bit RSI18:1;           /**< \brief [18:18] Clear RSI Flag of Buffer 18 - RSI18 (w) */
    Ifx_UReg_32Bit RSI19:1;           /**< \brief [19:19] Clear RSI Flag of Buffer 19 - RSI19 (w) */
    Ifx_UReg_32Bit RSI20:1;           /**< \brief [20:20] Clear RSI Flag of Buffer 20 - RSI20 (w) */
    Ifx_UReg_32Bit RSI21:1;           /**< \brief [21:21] Clear RSI Flag of Buffer 21 - RSI21 (w) */
    Ifx_UReg_32Bit RSI22:1;           /**< \brief [22:22] Clear RSI Flag of Buffer 22 - RSI22 (w) */
    Ifx_UReg_32Bit RSI23:1;           /**< \brief [23:23] Clear RSI Flag of Buffer 23 - RSI23 (w) */
    Ifx_UReg_32Bit RSI24:1;           /**< \brief [24:24] Clear RSI Flag of Buffer 24 - RSI24 (w) */
    Ifx_UReg_32Bit RSI25:1;           /**< \brief [25:25] Clear RSI Flag of Buffer 25 - RSI25 (w) */
    Ifx_UReg_32Bit RSI26:1;           /**< \brief [26:26] Clear RSI Flag of Buffer 26 - RSI26 (w) */
    Ifx_UReg_32Bit RSI27:1;           /**< \brief [27:27] Clear RSI Flag of Buffer 27 - RSI27 (w) */
    Ifx_UReg_32Bit RSI28:1;           /**< \brief [28:28] Clear RSI Flag of Buffer 28 - RSI28 (w) */
    Ifx_UReg_32Bit RSI29:1;           /**< \brief [29:29] Clear RSI Flag of Buffer 29 - RSI29 (w) */
    Ifx_UReg_32Bit RSI30:1;           /**< \brief [30:30] Clear RSI Flag of Buffer 30 - RSI30 (w) */
    Ifx_UReg_32Bit RSI31:1;           /**< \brief [31:31] Clear RSI Flag of Buffer 31 - RSI31 (w) */
} Ifx_PSI5_RSICLR_Bits;

/** \brief RSI Overview Register ${x} */
typedef struct _Ifx_PSI5_RSIOV_Bits
{
    Ifx_UReg_32Bit RSI0:1;            /**< \brief [0:0] RSI Flag of Buffer 0 - RSI0 (rh) */
    Ifx_UReg_32Bit RSI1:1;            /**< \brief [1:1] RSI Flag of Buffer 1 - RSI1 (rh) */
    Ifx_UReg_32Bit RSI2:1;            /**< \brief [2:2] RSI Flag of Buffer 2 - RSI2 (rh) */
    Ifx_UReg_32Bit RSI3:1;            /**< \brief [3:3] RSI Flag of Buffer 3 - RSI3 (rh) */
    Ifx_UReg_32Bit RSI4:1;            /**< \brief [4:4] RSI Flag of Buffer 4 - RSI4 (rh) */
    Ifx_UReg_32Bit RSI5:1;            /**< \brief [5:5] RSI Flag of Buffer 5 - RSI5 (rh) */
    Ifx_UReg_32Bit RSI6:1;            /**< \brief [6:6] RSI Flag of Buffer 6 - RSI6 (rh) */
    Ifx_UReg_32Bit RSI7:1;            /**< \brief [7:7] RSI Flag of Buffer 7 - RSI7 (rh) */
    Ifx_UReg_32Bit RSI8:1;            /**< \brief [8:8] RSI Flag of Buffer 8 - RSI8 (rh) */
    Ifx_UReg_32Bit RSI9:1;            /**< \brief [9:9] RSI Flag of Buffer 9 - RSI9 (rh) */
    Ifx_UReg_32Bit RSI10:1;           /**< \brief [10:10] RSI Flag of Buffer 10 - RSI10 (rh) */
    Ifx_UReg_32Bit RSI11:1;           /**< \brief [11:11] RSI Flag of Buffer 11 - RSI11 (rh) */
    Ifx_UReg_32Bit RSI12:1;           /**< \brief [12:12] RSI Flag of Buffer 12 - RSI12 (rh) */
    Ifx_UReg_32Bit RSI13:1;           /**< \brief [13:13] RSI Flag of Buffer 13 - RSI13 (rh) */
    Ifx_UReg_32Bit RSI14:1;           /**< \brief [14:14] RSI Flag of Buffer 14 - RSI14 (rh) */
    Ifx_UReg_32Bit RSI15:1;           /**< \brief [15:15] RSI Flag of Buffer 15 - RSI15 (rh) */
    Ifx_UReg_32Bit RSI16:1;           /**< \brief [16:16] RSI Flag of Buffer 16 - RSI16 (rh) */
    Ifx_UReg_32Bit RSI17:1;           /**< \brief [17:17] RSI Flag of Buffer 17 - RSI17 (rh) */
    Ifx_UReg_32Bit RSI18:1;           /**< \brief [18:18] RSI Flag of Buffer 18 - RSI18 (rh) */
    Ifx_UReg_32Bit RSI19:1;           /**< \brief [19:19] RSI Flag of Buffer 19 - RSI19 (rh) */
    Ifx_UReg_32Bit RSI20:1;           /**< \brief [20:20] RSI Flag of Buffer 20 - RSI20 (rh) */
    Ifx_UReg_32Bit RSI21:1;           /**< \brief [21:21] RSI Flag of Buffer 21 - RSI21 (rh) */
    Ifx_UReg_32Bit RSI22:1;           /**< \brief [22:22] RSI Flag of Buffer 22 - RSI22 (rh) */
    Ifx_UReg_32Bit RSI23:1;           /**< \brief [23:23] RSI Flag of Buffer 23 - RSI23 (rh) */
    Ifx_UReg_32Bit RSI24:1;           /**< \brief [24:24] RSI Flag of Buffer 24 - RSI24 (rh) */
    Ifx_UReg_32Bit RSI25:1;           /**< \brief [25:25] RSI Flag of Buffer 25 - RSI25 (rh) */
    Ifx_UReg_32Bit RSI26:1;           /**< \brief [26:26] RSI Flag of Buffer 26 - RSI26 (rh) */
    Ifx_UReg_32Bit RSI27:1;           /**< \brief [27:27] RSI Flag of Buffer 27 - RSI27 (rh) */
    Ifx_UReg_32Bit RSI28:1;           /**< \brief [28:28] RSI Flag of Buffer 28 - RSI28 (rh) */
    Ifx_UReg_32Bit RSI29:1;           /**< \brief [29:29] RSI Flag of Buffer 29 - RSI29 (rh) */
    Ifx_UReg_32Bit RSI30:1;           /**< \brief [30:30] RSI Flag of Buffer 30 - RSI30 (rh) */
    Ifx_UReg_32Bit RSI31:1;           /**< \brief [31:31] RSI Flag of Buffer 31 - RSI31 (rh) */
} Ifx_PSI5_RSIOV_Bits;

/** \brief RSI Overview Set Register ${x} */
typedef struct _Ifx_PSI5_RSISET_Bits
{
    Ifx_UReg_32Bit RSI0:1;            /**< \brief [0:0] Set RSI Flag of Buffer 0 - RSI0 (w) */
    Ifx_UReg_32Bit RSI1:1;            /**< \brief [1:1] Set RSI Flag of Buffer 1 - RSI1 (w) */
    Ifx_UReg_32Bit RSI2:1;            /**< \brief [2:2] Set RSI Flag of Buffer 2 - RSI2 (w) */
    Ifx_UReg_32Bit RSI3:1;            /**< \brief [3:3] Set RSI Flag of Buffer 3 - RSI3 (w) */
    Ifx_UReg_32Bit RSI4:1;            /**< \brief [4:4] Set RSI Flag of Buffer 4 - RSI4 (w) */
    Ifx_UReg_32Bit RSI5:1;            /**< \brief [5:5] Set RSI Flag of Buffer 5 - RSI5 (w) */
    Ifx_UReg_32Bit RSI6:1;            /**< \brief [6:6] Set RSI Flag of Buffer 6 - RSI6 (w) */
    Ifx_UReg_32Bit RSI7:1;            /**< \brief [7:7] Set RSI Flag of Buffer 7 - RSI7 (w) */
    Ifx_UReg_32Bit RSI8:1;            /**< \brief [8:8] Set RSI Flag of Buffer 8 - RSI8 (w) */
    Ifx_UReg_32Bit RSI9:1;            /**< \brief [9:9] Set RSI Flag of Buffer 9 - RSI9 (w) */
    Ifx_UReg_32Bit RSI10:1;           /**< \brief [10:10] Set RSI Flag of Buffer 10 - RSI10 (w) */
    Ifx_UReg_32Bit RSI11:1;           /**< \brief [11:11] Set RSI Flag of Buffer 11 - RSI11 (w) */
    Ifx_UReg_32Bit RSI12:1;           /**< \brief [12:12] Set RSI Flag of Buffer 12 - RSI12 (w) */
    Ifx_UReg_32Bit RSI13:1;           /**< \brief [13:13] Set RSI Flag of Buffer 13 - RSI13 (w) */
    Ifx_UReg_32Bit RSI14:1;           /**< \brief [14:14] Set RSI Flag of Buffer 14 - RSI14 (w) */
    Ifx_UReg_32Bit RSI15:1;           /**< \brief [15:15] Set RSI Flag of Buffer 15 - RSI15 (w) */
    Ifx_UReg_32Bit RSI16:1;           /**< \brief [16:16] Set RSI Flag of Buffer 16 - RSI16 (w) */
    Ifx_UReg_32Bit RSI17:1;           /**< \brief [17:17] Set RSI Flag of Buffer 17 - RSI17 (w) */
    Ifx_UReg_32Bit RSI18:1;           /**< \brief [18:18] Set RSI Flag of Buffer 18 - RSI18 (w) */
    Ifx_UReg_32Bit RSI19:1;           /**< \brief [19:19] Set RSI Flag of Buffer 19 - RSI19 (w) */
    Ifx_UReg_32Bit RSI20:1;           /**< \brief [20:20] Set RSI Flag of Buffer 20 - RSI20 (w) */
    Ifx_UReg_32Bit RSI21:1;           /**< \brief [21:21] Set RSI Flag of Buffer 21 - RSI21 (w) */
    Ifx_UReg_32Bit RSI22:1;           /**< \brief [22:22] Set RSI Flag of Buffer 22 - RSI22 (w) */
    Ifx_UReg_32Bit RSI23:1;           /**< \brief [23:23] Set RSI Flag of Buffer 23 - RSI23 (w) */
    Ifx_UReg_32Bit RSI24:1;           /**< \brief [24:24] Set RSI Flag of Buffer 24 - RSI24 (w) */
    Ifx_UReg_32Bit RSI25:1;           /**< \brief [25:25] Set RSI Flag of Buffer 25 - RSI25 (w) */
    Ifx_UReg_32Bit RSI26:1;           /**< \brief [26:26] Set RSI Flag of Buffer 26 - RSI26 (w) */
    Ifx_UReg_32Bit RSI27:1;           /**< \brief [27:27] Set RSI Flag of Buffer 27 - RSI27 (w) */
    Ifx_UReg_32Bit RSI28:1;           /**< \brief [28:28] Set RSI Flag of Buffer 28 - RSI28 (w) */
    Ifx_UReg_32Bit RSI29:1;           /**< \brief [29:29] Set RSI Flag of Buffer 29 - RSI29 (w) */
    Ifx_UReg_32Bit RSI30:1;           /**< \brief [30:30] Set RSI Flag of Buffer 30 - RSI30 (w) */
    Ifx_UReg_32Bit RSI31:1;           /**< \brief [31:31] Set RSI Flag of Buffer 31 - RSI31 (w) */
} Ifx_PSI5_RSISET_Bits;

/** \brief TEI Overview Clear Register ${x} */
typedef struct _Ifx_PSI5_TEICLR_Bits
{
    Ifx_UReg_32Bit TEI0:1;            /**< \brief [0:0] Clear TEI Flag of Buffer 0 - TEI0 (w) */
    Ifx_UReg_32Bit TEI1:1;            /**< \brief [1:1] Clear TEI Flag of Buffer 1 - TEI1 (w) */
    Ifx_UReg_32Bit TEI2:1;            /**< \brief [2:2] Clear TEI Flag of Buffer 2 - TEI2 (w) */
    Ifx_UReg_32Bit TEI3:1;            /**< \brief [3:3] Clear TEI Flag of Buffer 3 - TEI3 (w) */
    Ifx_UReg_32Bit TEI4:1;            /**< \brief [4:4] Clear TEI Flag of Buffer 4 - TEI4 (w) */
    Ifx_UReg_32Bit TEI5:1;            /**< \brief [5:5] Clear TEI Flag of Buffer 5 - TEI5 (w) */
    Ifx_UReg_32Bit TEI6:1;            /**< \brief [6:6] Clear TEI Flag of Buffer 6 - TEI6 (w) */
    Ifx_UReg_32Bit TEI7:1;            /**< \brief [7:7] Clear TEI Flag of Buffer 7 - TEI7 (w) */
    Ifx_UReg_32Bit TEI8:1;            /**< \brief [8:8] Clear TEI Flag of Buffer 8 - TEI8 (w) */
    Ifx_UReg_32Bit TEI9:1;            /**< \brief [9:9] Clear TEI Flag of Buffer 9 - TEI9 (w) */
    Ifx_UReg_32Bit TEI10:1;           /**< \brief [10:10] Clear TEI Flag of Buffer 10 - TEI10 (w) */
    Ifx_UReg_32Bit TEI11:1;           /**< \brief [11:11] Clear TEI Flag of Buffer 11 - TEI11 (w) */
    Ifx_UReg_32Bit TEI12:1;           /**< \brief [12:12] Clear TEI Flag of Buffer 12 - TEI12 (w) */
    Ifx_UReg_32Bit TEI13:1;           /**< \brief [13:13] Clear TEI Flag of Buffer 13 - TEI13 (w) */
    Ifx_UReg_32Bit TEI14:1;           /**< \brief [14:14] Clear TEI Flag of Buffer 14 - TEI14 (w) */
    Ifx_UReg_32Bit TEI15:1;           /**< \brief [15:15] Clear TEI Flag of Buffer 15 - TEI15 (w) */
    Ifx_UReg_32Bit TEI16:1;           /**< \brief [16:16] Clear TEI Flag of Buffer 16 - TEI16 (w) */
    Ifx_UReg_32Bit TEI17:1;           /**< \brief [17:17] Clear TEI Flag of Buffer 17 - TEI17 (w) */
    Ifx_UReg_32Bit TEI18:1;           /**< \brief [18:18] Clear TEI Flag of Buffer 18 - TEI18 (w) */
    Ifx_UReg_32Bit TEI19:1;           /**< \brief [19:19] Clear TEI Flag of Buffer 19 - TEI19 (w) */
    Ifx_UReg_32Bit TEI20:1;           /**< \brief [20:20] Clear TEI Flag of Buffer 20 - TEI20 (w) */
    Ifx_UReg_32Bit TEI21:1;           /**< \brief [21:21] Clear TEI Flag of Buffer 21 - TEI21 (w) */
    Ifx_UReg_32Bit TEI22:1;           /**< \brief [22:22] Clear TEI Flag of Buffer 22 - TEI22 (w) */
    Ifx_UReg_32Bit TEI23:1;           /**< \brief [23:23] Clear TEI Flag of Buffer 23 - TEI23 (w) */
    Ifx_UReg_32Bit TEI24:1;           /**< \brief [24:24] Clear TEI Flag of Buffer 24 - TEI24 (w) */
    Ifx_UReg_32Bit TEI25:1;           /**< \brief [25:25] Clear TEI Flag of Buffer 25 - TEI25 (w) */
    Ifx_UReg_32Bit TEI26:1;           /**< \brief [26:26] Clear TEI Flag of Buffer 26 - TEI26 (w) */
    Ifx_UReg_32Bit TEI27:1;           /**< \brief [27:27] Clear TEI Flag of Buffer 27 - TEI27 (w) */
    Ifx_UReg_32Bit TEI28:1;           /**< \brief [28:28] Clear TEI Flag of Buffer 28 - TEI28 (w) */
    Ifx_UReg_32Bit TEI29:1;           /**< \brief [29:29] Clear TEI Flag of Buffer 29 - TEI29 (w) */
    Ifx_UReg_32Bit TEI30:1;           /**< \brief [30:30] Clear TEI Flag of Buffer 30 - TEI30 (w) */
    Ifx_UReg_32Bit TEI31:1;           /**< \brief [31:31] Clear TEI Flag of Buffer 31 - TEI31 (w) */
} Ifx_PSI5_TEICLR_Bits;

/** \brief TEI Overview Register ${x} */
typedef struct _Ifx_PSI5_TEIOV_Bits
{
    Ifx_UReg_32Bit TEI0:1;            /**< \brief [0:0] TEI Flag of Buffer 0 - TEI0 (rh) */
    Ifx_UReg_32Bit TEI1:1;            /**< \brief [1:1] TEI Flag of Buffer 1 - TEI1 (rh) */
    Ifx_UReg_32Bit TEI2:1;            /**< \brief [2:2] TEI Flag of Buffer 2 - TEI2 (rh) */
    Ifx_UReg_32Bit TEI3:1;            /**< \brief [3:3] TEI Flag of Buffer 3 - TEI3 (rh) */
    Ifx_UReg_32Bit TEI4:1;            /**< \brief [4:4] TEI Flag of Buffer 4 - TEI4 (rh) */
    Ifx_UReg_32Bit TEI5:1;            /**< \brief [5:5] TEI Flag of Buffer 5 - TEI5 (rh) */
    Ifx_UReg_32Bit TEI6:1;            /**< \brief [6:6] TEI Flag of Buffer 6 - TEI6 (rh) */
    Ifx_UReg_32Bit TEI7:1;            /**< \brief [7:7] TEI Flag of Buffer 7 - TEI7 (rh) */
    Ifx_UReg_32Bit TEI8:1;            /**< \brief [8:8] TEI Flag of Buffer 8 - TEI8 (rh) */
    Ifx_UReg_32Bit TEI9:1;            /**< \brief [9:9] TEI Flag of Buffer 9 - TEI9 (rh) */
    Ifx_UReg_32Bit TEI10:1;           /**< \brief [10:10] TEI Flag of Buffer 10 - TEI10 (rh) */
    Ifx_UReg_32Bit TEI11:1;           /**< \brief [11:11] TEI Flag of Buffer 11 - TEI11 (rh) */
    Ifx_UReg_32Bit TEI12:1;           /**< \brief [12:12] TEI Flag of Buffer 12 - TEI12 (rh) */
    Ifx_UReg_32Bit TEI13:1;           /**< \brief [13:13] TEI Flag of Buffer 13 - TEI13 (rh) */
    Ifx_UReg_32Bit TEI14:1;           /**< \brief [14:14] TEI Flag of Buffer 14 - TEI14 (rh) */
    Ifx_UReg_32Bit TEI15:1;           /**< \brief [15:15] TEI Flag of Buffer 15 - TEI15 (rh) */
    Ifx_UReg_32Bit TEI16:1;           /**< \brief [16:16] TEI Flag of Buffer 16 - TEI16 (rh) */
    Ifx_UReg_32Bit TEI17:1;           /**< \brief [17:17] TEI Flag of Buffer 17 - TEI17 (rh) */
    Ifx_UReg_32Bit TEI18:1;           /**< \brief [18:18] TEI Flag of Buffer 18 - TEI18 (rh) */
    Ifx_UReg_32Bit TEI19:1;           /**< \brief [19:19] TEI Flag of Buffer 19 - TEI19 (rh) */
    Ifx_UReg_32Bit TEI20:1;           /**< \brief [20:20] TEI Flag of Buffer 20 - TEI20 (rh) */
    Ifx_UReg_32Bit TEI21:1;           /**< \brief [21:21] TEI Flag of Buffer 21 - TEI21 (rh) */
    Ifx_UReg_32Bit TEI22:1;           /**< \brief [22:22] TEI Flag of Buffer 22 - TEI22 (rh) */
    Ifx_UReg_32Bit TEI23:1;           /**< \brief [23:23] TEI Flag of Buffer 23 - TEI23 (rh) */
    Ifx_UReg_32Bit TEI24:1;           /**< \brief [24:24] TEI Flag of Buffer 24 - TEI24 (rh) */
    Ifx_UReg_32Bit TEI25:1;           /**< \brief [25:25] TEI Flag of Buffer 25 - TEI25 (rh) */
    Ifx_UReg_32Bit TEI26:1;           /**< \brief [26:26] TEI Flag of Buffer 26 - TEI26 (rh) */
    Ifx_UReg_32Bit TEI27:1;           /**< \brief [27:27] TEI Flag of Buffer 27 - TEI27 (rh) */
    Ifx_UReg_32Bit TEI28:1;           /**< \brief [28:28] TEI Flag of Buffer 28 - TEI28 (rh) */
    Ifx_UReg_32Bit TEI29:1;           /**< \brief [29:29] TEI Flag of Buffer 29 - TEI29 (rh) */
    Ifx_UReg_32Bit TEI30:1;           /**< \brief [30:30] TEI Flag of Buffer 30 - TEI30 (rh) */
    Ifx_UReg_32Bit TEI31:1;           /**< \brief [31:31] TEI Flag of Buffer 31 - TEI31 (rh) */
} Ifx_PSI5_TEIOV_Bits;

/** \brief TEI Overview Set Register ${x} */
typedef struct _Ifx_PSI5_TEISET_Bits
{
    Ifx_UReg_32Bit TEI0:1;            /**< \brief [0:0] Set TEI Flag of Buffer 0 - TEI0 (w) */
    Ifx_UReg_32Bit TEI1:1;            /**< \brief [1:1] Set TEI Flag of Buffer 1 - TEI1 (w) */
    Ifx_UReg_32Bit TEI2:1;            /**< \brief [2:2] Set TEI Flag of Buffer 2 - TEI2 (w) */
    Ifx_UReg_32Bit TEI3:1;            /**< \brief [3:3] Set TEI Flag of Buffer 3 - TEI3 (w) */
    Ifx_UReg_32Bit TEI4:1;            /**< \brief [4:4] Set TEI Flag of Buffer 4 - TEI4 (w) */
    Ifx_UReg_32Bit TEI5:1;            /**< \brief [5:5] Set TEI Flag of Buffer 5 - TEI5 (w) */
    Ifx_UReg_32Bit TEI6:1;            /**< \brief [6:6] Set TEI Flag of Buffer 6 - TEI6 (w) */
    Ifx_UReg_32Bit TEI7:1;            /**< \brief [7:7] Set TEI Flag of Buffer 7 - TEI7 (w) */
    Ifx_UReg_32Bit TEI8:1;            /**< \brief [8:8] Set TEI Flag of Buffer 8 - TEI8 (w) */
    Ifx_UReg_32Bit TEI9:1;            /**< \brief [9:9] Set TEI Flag of Buffer 9 - TEI9 (w) */
    Ifx_UReg_32Bit TEI10:1;           /**< \brief [10:10] Set TEI Flag of Buffer 10 - TEI10 (w) */
    Ifx_UReg_32Bit TEI11:1;           /**< \brief [11:11] Set TEI Flag of Buffer 11 - TEI11 (w) */
    Ifx_UReg_32Bit TEI12:1;           /**< \brief [12:12] Set TEI Flag of Buffer 12 - TEI12 (w) */
    Ifx_UReg_32Bit TEI13:1;           /**< \brief [13:13] Set TEI Flag of Buffer 13 - TEI13 (w) */
    Ifx_UReg_32Bit TEI14:1;           /**< \brief [14:14] Set TEI Flag of Buffer 14 - TEI14 (w) */
    Ifx_UReg_32Bit TEI15:1;           /**< \brief [15:15] Set TEI Flag of Buffer 15 - TEI15 (w) */
    Ifx_UReg_32Bit TEI16:1;           /**< \brief [16:16] Set TEI Flag of Buffer 16 - TEI16 (w) */
    Ifx_UReg_32Bit TEI17:1;           /**< \brief [17:17] Set TEI Flag of Buffer 17 - TEI17 (w) */
    Ifx_UReg_32Bit TEI18:1;           /**< \brief [18:18] Set TEI Flag of Buffer 18 - TEI18 (w) */
    Ifx_UReg_32Bit TEI19:1;           /**< \brief [19:19] Set TEI Flag of Buffer 19 - TEI19 (w) */
    Ifx_UReg_32Bit TEI20:1;           /**< \brief [20:20] Set TEI Flag of Buffer 20 - TEI20 (w) */
    Ifx_UReg_32Bit TEI21:1;           /**< \brief [21:21] Set TEI Flag of Buffer 21 - TEI21 (w) */
    Ifx_UReg_32Bit TEI22:1;           /**< \brief [22:22] Set TEI Flag of Buffer 22 - TEI22 (w) */
    Ifx_UReg_32Bit TEI23:1;           /**< \brief [23:23] Set TEI Flag of Buffer 23 - TEI23 (w) */
    Ifx_UReg_32Bit TEI24:1;           /**< \brief [24:24] Set TEI Flag of Buffer 24 - TEI24 (w) */
    Ifx_UReg_32Bit TEI25:1;           /**< \brief [25:25] Set TEI Flag of Buffer 25 - TEI25 (w) */
    Ifx_UReg_32Bit TEI26:1;           /**< \brief [26:26] Set TEI Flag of Buffer 26 - TEI26 (w) */
    Ifx_UReg_32Bit TEI27:1;           /**< \brief [27:27] Set TEI Flag of Buffer 27 - TEI27 (w) */
    Ifx_UReg_32Bit TEI28:1;           /**< \brief [28:28] Set TEI Flag of Buffer 28 - TEI28 (w) */
    Ifx_UReg_32Bit TEI29:1;           /**< \brief [29:29] Set TEI Flag of Buffer 29 - TEI29 (w) */
    Ifx_UReg_32Bit TEI30:1;           /**< \brief [30:30] Set TEI Flag of Buffer 30 - TEI30 (w) */
    Ifx_UReg_32Bit TEI31:1;           /**< \brief [31:31] Set TEI Flag of Buffer 31 - TEI31 (w) */
} Ifx_PSI5_TEISET_Bits;

/** \brief Module Time Stamp Register A */
typedef struct _Ifx_PSI5_TSRA_Bits
{
    Ifx_UReg_32Bit CTS:24;            /**< \brief [23:0] Current Time Stamp for the Module - CTS (r) */
    Ifx_UReg_32Bit ETB:3;             /**< \brief [26:24] External Time Base Select - ETB (rw) */
    Ifx_UReg_32Bit TBS:1;             /**< \brief [27:27] Time Base Select - TBS (rw) */
    Ifx_UReg_32Bit reserved_28:2;     /**< \brief [29:28] \internal Reserved */
    Ifx_UReg_32Bit ACLR:1;            /**< \brief [30:30] Clear All Current Time Stamp Counters - ACLR (w) */
    Ifx_UReg_32Bit CLR:1;             /**< \brief [31:31] Clear Current Time Stamp for the Module - CLR (w) */
} Ifx_PSI5_TSRA_Bits;

/** \brief Time Stamp Register B */
typedef struct _Ifx_PSI5_TSRB_Bits
{
    Ifx_UReg_32Bit CTS:24;            /**< \brief [23:0] Current Time Stamp for the Module - CTS (r) */
    Ifx_UReg_32Bit ETB:3;             /**< \brief [26:24] External Time Base Select - ETB (rw) */
    Ifx_UReg_32Bit TBS:1;             /**< \brief [27:27] Time Base Select - TBS (rw) */
    Ifx_UReg_32Bit reserved_28:2;     /**< \brief [29:28] \internal Reserved */
    Ifx_UReg_32Bit ACLR:1;            /**< \brief [30:30] Clear All Current Time Stamp Counters - ACLR (w) */
    Ifx_UReg_32Bit CLR:1;             /**< \brief [31:31] Clear Current Time Stamp for the Module - CLR (w) */
} Ifx_PSI5_TSRB_Bits;

/** \brief Module Time Stamp Register C */
typedef struct _Ifx_PSI5_TSRC_Bits
{
    Ifx_UReg_32Bit CTS:24;            /**< \brief [23:0] Current Time Stamp for the Module - CTS (r) */
    Ifx_UReg_32Bit ETB:3;             /**< \brief [26:24] External Time Base Select - ETB (rw) */
    Ifx_UReg_32Bit TBS:1;             /**< \brief [27:27] Time Base Select - TBS (rw) */
    Ifx_UReg_32Bit reserved_28:2;     /**< \brief [29:28] \internal Reserved */
    Ifx_UReg_32Bit ACLR:1;            /**< \brief [30:30] Clear All Current Time Stamp Counters - ACLR (w) */
    Ifx_UReg_32Bit CLR:1;             /**< \brief [31:31] Clear Current Time Stamp for the Module - CLR (w) */
} Ifx_PSI5_TSRC_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_psi5_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_ACCEN1;

/** \brief Channel Trigger Value Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_CTV_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_CH_CTV;

/** \brief Input and Output Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_IOCR_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_IOCR;

/** \brief Pulse Generation Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_PGC_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_CH_PGC;

/** \brief Receiver Control Register A ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_RCRA_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_RCRA;

/** \brief Receiver Control Register B ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_RCRB_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_RCRB;

/** \brief Receiver Control Register C ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_RCRC_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_RCRC;

/** \brief Receive Data Register High ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_RDRH_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_RDRH;

/** \brief Receive Data Register Low ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_RDRL_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_RDRL;

/** \brief Receive Status Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_RSR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_CH_RSR;

/** \brief Send Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SCR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_CH_SCR;

/** \brief Send Data Register High ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SDRH_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_SDRH;

/** \brief Send Data Register Low ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SDRL_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_SDRL;

/** \brief Serial Data and Status Register ${x}${z}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SDS_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_CH_SDS;

/** \brief Start of Frame Time Stamp Capture Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SFTSC_Bits B;         /**< \brief Bitfield access */
} Ifx_PSI5_CH_SFTSC;

/** \brief Send Output Register High ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SORH_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_SORH;

/** \brief Send Output Register Low ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SORL_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_SORL;

/** \brief Start of Pulse Time Stamp Capture Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SPTSC_Bits B;         /**< \brief Bitfield access */
} Ifx_PSI5_CH_SPTSC;

/** \brief Send Shift Register High ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SSRH_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_SSRH;

/** \brief Send Shift Register Low ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_SSRL_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CH_SSRL;

/** \brief Watch Dog Timer Register ${x}${w}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CH_WDT_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_CH_WDT;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5_CLC;

/** \brief CRCI Overview Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CRCICLR_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CRCICLR;

/** \brief CRCI Overview Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CRCIOV_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_CRCIOV;

/** \brief CRCI Overview Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_CRCISET_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_CRCISET;

/** \brief PSI5 Fractional Divider Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_FDR_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5_FDR;

/** \brief Fractional Divider Register for Higher Bit Rate   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_FDRH_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5_FDRH;

/** \brief Fractional Divider Register for Lower Bit Rate   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_FDRL_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5_FDRL;

/** \brief Fractional Divider Register for Time Stamp   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_FDRT_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5_FDRT;

/** \brief Global Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_GCR_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5_GCR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_PSI5_ID;

/** \brief Interrupt Node Pointer Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INP_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5_INP;

/** \brief Interrupt Clear Register A ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTCLRA_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_INTCLRA;

/** \brief Interrupt Clear Register A ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTCLRB_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_INTCLRB;

/** \brief Interrupt Enable Register A ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTENA_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_INTENA;

/** \brief Interrupt Enable Register B ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTENB_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_INTENB;

/** \brief Interrupt Overview Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTOV_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_INTOV;

/** \brief Interrupt Set Register A ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTSETA_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_INTSETA;

/** \brief Interrupt Set Register B ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTSETB_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_INTSETB;

/** \brief Interrupt Status Register A ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTSTATA_Bits B;         /**< \brief Bitfield access */
} Ifx_PSI5_INTSTATA;

/** \brief Interrupt Status Register B ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_INTSTATB_Bits B;         /**< \brief Bitfield access */
} Ifx_PSI5_INTSTATB;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_KRST0_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_KRST1_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_KRSTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5_KRSTCLR;

/** \brief MEI Overview Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_MEICLR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_MEICLR;

/** \brief MEI Overview Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_MEIOV_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_MEIOV;

/** \brief MEI Overview Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_MEISET_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_MEISET;

/** \brief NBI Overview Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_NBICLR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_NBICLR;

/** \brief NBI Overview Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_NBIOV_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_NBIOV;

/** \brief NBI Overview Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_NBISET_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_NBISET;

/** \brief NFI Overview Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_NFICLR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_NFICLR;

/** \brief NFI Overview Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_NFIOV_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_NFIOV;

/** \brief NFI Overview Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_NFISET_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_NFISET;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_OCS_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5_OCS;

/** \brief Receive Data FIFO ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RDF_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5_RDF;

/** \brief RDI Overview Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RDICLR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_RDICLR;

/** \brief RDI Overview Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RDIOV_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_RDIOV;

/** \brief RDI Overview Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RDISET_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_RDISET;

/** \brief Receive Data Memory High ${x}${y}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RDM_H_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_RDM_H;

/** \brief Receive Data Memory Low ${x}${y}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RDM_L_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_RDM_L;

/** \brief Receive FIFO Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RFC_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5_RFC;

/** \brief RMI Overview Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RMICLR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_RMICLR;

/** \brief RMI Overview Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RMIOV_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_RMIOV;

/** \brief RMI Overview Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RMISET_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_RMISET;

/** \brief RSI Overview Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RSICLR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_RSICLR;

/** \brief RSI Overview Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RSIOV_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_RSIOV;

/** \brief RSI Overview Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_RSISET_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_RSISET;

/** \brief TEI Overview Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_TEICLR_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_TEICLR;

/** \brief TEI Overview Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_TEIOV_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5_TEIOV;

/** \brief TEI Overview Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_TEISET_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5_TEISET;

/** \brief Module Time Stamp Register A   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_TSRA_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5_TSRA;

/** \brief Time Stamp Register B   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_TSRB_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5_TSRB;

/** \brief Module Time Stamp Register C   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5_TSRC_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5_TSRC;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Psi5_CH_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CH object */
typedef volatile struct _Ifx_PSI5_CH
{
       Ifx_PSI5_CH_IOCR                    IOCR;                   /**< \brief 0, Input and Output Control Register ${x}*/
       Ifx_PSI5_CH_RCRA                    RCRA;                   /**< \brief 4, Receiver Control Register A ${x}*/
       Ifx_PSI5_CH_RCRB                    RCRB;                   /**< \brief 8, Receiver Control Register B ${x}*/
       Ifx_PSI5_CH_RCRC                    RCRC;                   /**< \brief C, Receiver Control Register C ${x}*/
       Ifx_PSI5_CH_WDT                     WDT[7];                 /**< \brief 10, Watch Dog Timer Register ${x}${w}*/
       Ifx_PSI5_CH_RSR                     RSR;                    /**< \brief 2C, Receive Status Register ${x}*/
       Ifx_PSI5_CH_SDS                     SDS[6];                 /**< \brief 30, Serial Data and Status Register ${x}${z}*/
       Ifx_PSI5_CH_SPTSC                   SPTSC;                  /**< \brief 48, Start of Pulse Time Stamp Capture Register ${x}*/
       Ifx_PSI5_CH_SFTSC                   SFTSC;                  /**< \brief 4C, Start of Frame Time Stamp Capture Register ${x}*/
       Ifx_PSI5_CH_RDRL                    RDRL;                   /**< \brief 50, Receive Data Register Low ${x}*/
       Ifx_PSI5_CH_RDRH                    RDRH;                   /**< \brief 54, Receive Data Register High ${x}*/
       Ifx_PSI5_CH_PGC                     PGC;                    /**< \brief 58, Pulse Generation Control Register ${x}*/
       Ifx_PSI5_CH_CTV                     CTV;                    /**< \brief 5C, Channel Trigger Value Register ${x}*/
       Ifx_PSI5_CH_SCR                     SCR;                    /**< \brief 60, Send Control Register ${x}*/
       Ifx_PSI5_CH_SDRL                    SDRL;                   /**< \brief 64, Send Data Register Low ${x}*/
       Ifx_PSI5_CH_SDRH                    SDRH;                   /**< \brief 68, Send Data Register High ${x}*/
       Ifx_PSI5_CH_SSRL                    SSRL;                   /**< \brief 6C, Send Shift Register Low ${x}*/
       Ifx_PSI5_CH_SSRH                    SSRH;                   /**< \brief 70, Send Shift Register High ${x}*/
       Ifx_PSI5_CH_SORL                    SORL;                   /**< \brief 74, Send Output Register Low ${x}*/
       Ifx_PSI5_CH_SORH                    SORH;                   /**< \brief 78, Send Output Register High ${x}*/
       Ifx_UReg_8Bit                       reserved_7C[20];        /**< \brief 7C, \internal Reserved */
} Ifx_PSI5_CH;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Psi5_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief RDM object */
typedef volatile struct _Ifx_PSI5_RDM
{
       Ifx_PSI5_RDM_L                      L;                      /**< \brief 0, Receive Data Memory Low ${x}${y}*/
       Ifx_PSI5_RDM_H                      H;                      /**< \brief 4, Receive Data Memory High ${x}${y}*/
} Ifx_PSI5_RDM;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Psi5_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief PSI5 object */
typedef volatile struct _Ifx_PSI5
{
       Ifx_PSI5_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_PSI5_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_PSI5_FDR                        FDR;                    /**< \brief C, PSI5 Fractional Divider Register*/
       Ifx_PSI5_FDRL                       FDRL;                   /**< \brief 10, Fractional Divider Register for Lower Bit Rate*/
       Ifx_PSI5_FDRH                       FDRH;                   /**< \brief 14, Fractional Divider Register for Higher Bit Rate*/
       Ifx_PSI5_FDRT                       FDRT;                   /**< \brief 18, Fractional Divider Register for Time Stamp*/
       Ifx_PSI5_TSRA                       TSRA;                   /**< \brief 1C, Module Time Stamp Register A*/
       Ifx_PSI5_TSRB                       TSRB;                   /**< \brief 20, Time Stamp Register B*/
       Ifx_PSI5_TSRC                       TSRC;                   /**< \brief 24, Module Time Stamp Register C*/
       Ifx_UReg_8Bit                       reserved_28[4];         /**< \brief 28, \internal Reserved */
       Ifx_PSI5_GCR                        GCR;                    /**< \brief 2C, Global Control Register*/
       Ifx_PSI5_CH                         CH[4];                  /**< \brief 30, */
       Ifx_UReg_8Bit                       reserved_270[136];      /**< \brief 270, \internal Reserved */
       Ifx_PSI5_INTOV                      INTOV;                  /**< \brief 2F8, Interrupt Overview Register*/
       Ifx_PSI5_INP                        INP[4];                 /**< \brief 2FC, Interrupt Node Pointer Register ${x}*/
       Ifx_UReg_8Bit                       reserved_30C[4];        /**< \brief 30C, \internal Reserved */
       Ifx_PSI5_INTSTATA                   INTSTATA[4];            /**< \brief 310, Interrupt Status Register A ${x}*/
       Ifx_UReg_8Bit                       reserved_320[4];        /**< \brief 320, \internal Reserved */
       Ifx_PSI5_INTSTATB                   INTSTATB[4];            /**< \brief 324, Interrupt Status Register B ${x}*/
       Ifx_UReg_8Bit                       reserved_334[4];        /**< \brief 334, \internal Reserved */
       Ifx_PSI5_INTSETA                    INTSETA[4];             /**< \brief 338, Interrupt Set Register A ${x}*/
       Ifx_UReg_8Bit                       reserved_348[4];        /**< \brief 348, \internal Reserved */
       Ifx_PSI5_INTSETB                    INTSETB[4];             /**< \brief 34C, Interrupt Set Register B ${x}*/
       Ifx_UReg_8Bit                       reserved_35C[4];        /**< \brief 35C, \internal Reserved */
       Ifx_PSI5_INTCLRA                    INTCLRA[4];             /**< \brief 360, Interrupt Clear Register A ${x}*/
       Ifx_UReg_8Bit                       reserved_370[4];        /**< \brief 370, \internal Reserved */
       Ifx_PSI5_INTCLRB                    INTCLRB[4];             /**< \brief 374, Interrupt Clear Register A ${x}*/
       Ifx_UReg_8Bit                       reserved_384[4];        /**< \brief 384, \internal Reserved */
       Ifx_PSI5_INTENA                     INTENA[4];              /**< \brief 388, Interrupt Enable Register A ${x}*/
       Ifx_UReg_8Bit                       reserved_398[4];        /**< \brief 398, \internal Reserved */
       Ifx_PSI5_INTENB                     INTENB[4];              /**< \brief 39C, Interrupt Enable Register B ${x}*/
       Ifx_UReg_8Bit                       reserved_3AC[32];       /**< \brief 3AC, \internal Reserved */
       Ifx_PSI5_OCS                        OCS;                    /**< \brief 3CC, OCDS Control and Status*/
       Ifx_PSI5_ACCEN0                     ACCEN0;                 /**< \brief 3D0, Access Enable Register 0*/
       Ifx_PSI5_ACCEN1                     ACCEN1;                 /**< \brief 3D4, Access Enable Register 1*/
       Ifx_PSI5_KRST0                      KRST0;                  /**< \brief 3D8, Kernel Reset Register 0*/
       Ifx_PSI5_KRST1                      KRST1;                  /**< \brief 3DC, Kernel Reset Register 1*/
       Ifx_PSI5_KRSTCLR                    KRSTCLR;                /**< \brief 3E0, Kernel Reset Status Clear Register*/
       Ifx_PSI5_RFC                        RFC[4];                 /**< \brief 3E4, Receive FIFO Control Register ${x}*/
       Ifx_UReg_8Bit                       reserved_3F4[4];        /**< \brief 3F4, \internal Reserved */
       Ifx_PSI5_RDF                        RDF[4];                 /**< \brief 3F8, Receive Data FIFO ${x}*/
       Ifx_UReg_8Bit                       reserved_408[4];        /**< \brief 408, \internal Reserved */
       Ifx_PSI5_RSIOV                      RSIOV[4];               /**< \brief 40C, RSI Overview Register ${x}*/
       Ifx_UReg_8Bit                       reserved_41C[4];        /**< \brief 41C, \internal Reserved */
       Ifx_PSI5_RMIOV                      RMIOV[4];               /**< \brief 420, RMI Overview Register ${x}*/
       Ifx_UReg_8Bit                       reserved_430[4];        /**< \brief 430, \internal Reserved */
       Ifx_PSI5_NBIOV                      NBIOV[4];               /**< \brief 434, NBI Overview Register ${x}*/
       Ifx_UReg_8Bit                       reserved_444[4];        /**< \brief 444, \internal Reserved */
       Ifx_PSI5_TEIOV                      TEIOV[4];               /**< \brief 448, TEI Overview Register ${x}*/
       Ifx_UReg_8Bit                       reserved_458[4];        /**< \brief 458, \internal Reserved */
       Ifx_PSI5_CRCIOV                     CRCIOV[4];              /**< \brief 45C, CRCI Overview Register ${x}*/
       Ifx_UReg_8Bit                       reserved_46C[4];        /**< \brief 46C, \internal Reserved */
       Ifx_PSI5_RDIOV                      RDIOV[4];               /**< \brief 470, RDI Overview Register ${x}*/
       Ifx_UReg_8Bit                       reserved_480[4];        /**< \brief 480, \internal Reserved */
       Ifx_PSI5_NFIOV                      NFIOV[4];               /**< \brief 484, NFI Overview Register ${x}*/
       Ifx_UReg_8Bit                       reserved_494[4];        /**< \brief 494, \internal Reserved */
       Ifx_PSI5_MEIOV                      MEIOV[4];               /**< \brief 498, MEI Overview Register ${x}*/
       Ifx_UReg_8Bit                       reserved_4A8[4];        /**< \brief 4A8, \internal Reserved */
       Ifx_PSI5_RSISET                     RSISET[4];              /**< \brief 4AC, RSI Overview Set Register ${x}*/
       Ifx_UReg_8Bit                       reserved_4BC[4];        /**< \brief 4BC, \internal Reserved */
       Ifx_PSI5_RMISET                     RMISET[4];              /**< \brief 4C0, RMI Overview Set Register ${x}*/
       Ifx_UReg_8Bit                       reserved_4D0[4];        /**< \brief 4D0, \internal Reserved */
       Ifx_PSI5_NBISET                     NBISET[4];              /**< \brief 4D4, NBI Overview Set Register ${x}*/
       Ifx_UReg_8Bit                       reserved_4E4[4];        /**< \brief 4E4, \internal Reserved */
       Ifx_PSI5_TEISET                     TEISET[4];              /**< \brief 4E8, TEI Overview Set Register ${x}*/
       Ifx_UReg_8Bit                       reserved_4F8[4];        /**< \brief 4F8, \internal Reserved */
       Ifx_PSI5_CRCISET                    CRCISET[4];             /**< \brief 4FC, CRCI Overview Set Register ${x}*/
       Ifx_UReg_8Bit                       reserved_50C[4];        /**< \brief 50C, \internal Reserved */
       Ifx_PSI5_RDISET                     RDISET[4];              /**< \brief 510, RDI Overview Set Register ${x}*/
       Ifx_UReg_8Bit                       reserved_520[4];        /**< \brief 520, \internal Reserved */
       Ifx_PSI5_NFISET                     NFISET[4];              /**< \brief 524, NFI Overview Set Register ${x}*/
       Ifx_UReg_8Bit                       reserved_534[4];        /**< \brief 534, \internal Reserved */
       Ifx_PSI5_MEISET                     MEISET[4];              /**< \brief 538, MEI Overview Set Register ${x}*/
       Ifx_UReg_8Bit                       reserved_548[4];        /**< \brief 548, \internal Reserved */
       Ifx_PSI5_RSICLR                     RSICLR[4];              /**< \brief 54C, RSI Overview Clear Register ${x}*/
       Ifx_UReg_8Bit                       reserved_55C[4];        /**< \brief 55C, \internal Reserved */
       Ifx_PSI5_RMICLR                     RMICLR[4];              /**< \brief 560, RMI Overview Clear Register ${x}*/
       Ifx_UReg_8Bit                       reserved_570[4];        /**< \brief 570, \internal Reserved */
       Ifx_PSI5_NBICLR                     NBICLR[4];              /**< \brief 574, NBI Overview Clear Register ${x}*/
       Ifx_UReg_8Bit                       reserved_584[4];        /**< \brief 584, \internal Reserved */
       Ifx_PSI5_TEICLR                     TEICLR[4];              /**< \brief 588, TEI Overview Clear Register ${x}*/
       Ifx_UReg_8Bit                       reserved_598[4];        /**< \brief 598, \internal Reserved */
       Ifx_PSI5_CRCICLR                    CRCICLR[4];             /**< \brief 59C, CRCI Overview Clear Register ${x}*/
       Ifx_UReg_8Bit                       reserved_5AC[4];        /**< \brief 5AC, \internal Reserved */
       Ifx_PSI5_RDICLR                     RDICLR[4];              /**< \brief 5B0, RDI Overview Clear Register ${x}*/
       Ifx_UReg_8Bit                       reserved_5C0[4];        /**< \brief 5C0, \internal Reserved */
       Ifx_PSI5_NFICLR                     NFICLR[4];              /**< \brief 5C4, NFI Overview Clear Register ${x}*/
       Ifx_UReg_8Bit                       reserved_5D4[4];        /**< \brief 5D4, \internal Reserved */
       Ifx_PSI5_MEICLR                     MEICLR[4];              /**< \brief 5D8, MEI Overview Clear Register ${x}*/
       Ifx_UReg_8Bit                       reserved_5E8[24];       /**< \brief 5E8, \internal Reserved */
       Ifx_PSI5_RDM                        RDM[4][32];             /**< \brief 600, */
       Ifx_UReg_8Bit                       reserved_A00[256];      /**< \brief A00, \internal Reserved */
} Ifx_PSI5;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXPSI5_REGDEF_H */
