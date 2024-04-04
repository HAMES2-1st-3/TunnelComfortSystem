/**
 * \file IfxSent_regdef.h
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
 * \defgroup IfxSfr_Sent_Registers Sent Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Sent_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Sent_Registers
 * 
 * \defgroup IfxSfr_Sent_Registers_union Register unions
 * \ingroup IfxSfr_Sent_Registers
 * 
 * \defgroup IfxSfr_Sent_Registers_struct Memory map
 * \ingroup IfxSfr_Sent_Registers
 */
#ifndef IFXSENT_REGDEF_H
#define IFXSENT_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Sent_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_SENT_ACCEN0_Bits
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
} Ifx_SENT_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_SENT_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_SENT_ACCEN1_Bits;

/** \brief Channel Fractional Divider Register ${x} */
typedef struct _Ifx_SENT_CH_CFDR_Bits
{
    Ifx_UReg_32Bit DIV:16;            /**< \brief [15:0] Divider Value - DIV (rw) */
    Ifx_UReg_32Bit DIVM:16;           /**< \brief [31:16] Measured Divider Value - DIVM (rh) */
} Ifx_SENT_CH_CFDR_Bits;

/** \brief Channel Pre Divider Register ${x} */
typedef struct _Ifx_SENT_CH_CPDR_Bits
{
    Ifx_UReg_32Bit PDIV:12;           /**< \brief [11:0] Divider Factor of Pre Divider for Channel x - PDIV (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_SENT_CH_CPDR_Bits;

/** \brief Interrupt Node Pointer Register ${x} */
typedef struct _Ifx_SENT_CH_INP_Bits
{
    Ifx_UReg_32Bit RSI:4;             /**< \brief [3:0] Interrupt Node Pointer for Interrupt RSI - RSI (rw) */
    Ifx_UReg_32Bit RDI:4;             /**< \brief [7:4] Interrupt Node Pointer for Interrupt RDI - RDI (rw) */
    Ifx_UReg_32Bit RBI:4;             /**< \brief [11:8] Interrupt Node Pointer for Interrupt RBI - RBI (rw) */
    Ifx_UReg_32Bit TDI:4;             /**< \brief [15:12] Interrupt Node Pointer for Interrupt TDI - TDI (rw) */
    Ifx_UReg_32Bit TBI:4;             /**< \brief [19:16] Interrupt Node Pointer for Interrupt TBI - TBI (rw) */
    Ifx_UReg_32Bit ERRI:4;            /**< \brief [23:20] Interrupt Node Pointer for Interrupt FRI, FDI, NNI, NVI, CRCI, WSI, SCRI - ERRI (rw) */
    Ifx_UReg_32Bit SDI:4;             /**< \brief [27:24] Interrupt Node Pointer for Interrupt SDI - SDI (rw) */
    Ifx_UReg_32Bit WDI:4;             /**< \brief [31:28] Interrupt Node Pointer for Interrupt WDI - WDI (rw) */
} Ifx_SENT_CH_INP_Bits;

/** \brief Interrupt Clear Register ${x} */
typedef struct _Ifx_SENT_CH_INTCLR_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Clear Interrupt Request Flag RSI - RSI (w) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Clear Interrupt Request Flag RDI - RDI (w) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Clear Interrupt Request Flag RBI - RBI (w) */
    Ifx_UReg_32Bit TDI:1;             /**< \brief [3:3] Clear Interrupt Request Flag TDI - TDI (w) */
    Ifx_UReg_32Bit TBI:1;             /**< \brief [4:4] Clear Interrupt Request Flag TBI - TBI (w) */
    Ifx_UReg_32Bit FRI:1;             /**< \brief [5:5] Clear Interrupt Request Flag FRI - FRI (w) */
    Ifx_UReg_32Bit FDI:1;             /**< \brief [6:6] Clear Interrupt Request Flag FDI - FDI (w) */
    Ifx_UReg_32Bit NNI:1;             /**< \brief [7:7] Clear Interrupt Request Flag NNI - NNI (w) */
    Ifx_UReg_32Bit NVI:1;             /**< \brief [8:8] Clear Interrupt Request Flag NVI - NVI (w) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [9:9] Clear Interrupt Request Flag CRCI - CRCI (w) */
    Ifx_UReg_32Bit WSI:1;             /**< \brief [10:10] Clear Interrupt Request Flag WSI - WSI (w) */
    Ifx_UReg_32Bit SDI:1;             /**< \brief [11:11] Clear Interrupt Request Flag SDI - SDI (w) */
    Ifx_UReg_32Bit SCRI:1;            /**< \brief [12:12] Clear Interrupt Request Flag SCRI - SCRI (w) */
    Ifx_UReg_32Bit WDI:1;             /**< \brief [13:13] Clear Interrupt Request Flag WDI - WDI (w) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_SENT_CH_INTCLR_Bits;

/** \brief Interrupt Enable Register ${x} */
typedef struct _Ifx_SENT_CH_INTEN_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Enable Interrupt Request RSI - RSI (rw) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Enable Interrupt Request RDI - RDI (rw) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Enable Interrupt Request RBI - RBI (rw) */
    Ifx_UReg_32Bit TDI:1;             /**< \brief [3:3] Enable Interrupt Request TDI - TDI (rw) */
    Ifx_UReg_32Bit TBI:1;             /**< \brief [4:4] Enable Interrupt Request TBI - TBI (rw) */
    Ifx_UReg_32Bit FRI:1;             /**< \brief [5:5] Enable Interrupt Request FRI - FRI (rw) */
    Ifx_UReg_32Bit FDI:1;             /**< \brief [6:6] Enable Interrupt Request FDI - FDI (rw) */
    Ifx_UReg_32Bit NNI:1;             /**< \brief [7:7] Enable Interrupt Request NNI - NNI (rw) */
    Ifx_UReg_32Bit NVI:1;             /**< \brief [8:8] Enable Interrupt Request NVI - NVI (rw) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [9:9] Enable Interrupt Request CRCI - CRCI (rw) */
    Ifx_UReg_32Bit WSI:1;             /**< \brief [10:10] Enable Interrupt Request WSI - WSI (rw) */
    Ifx_UReg_32Bit SDI:1;             /**< \brief [11:11] Enable Interrupt Request SDI - SDI (rw) */
    Ifx_UReg_32Bit SCRI:1;            /**< \brief [12:12] Enable Interrupt Request SCRI - SCRI (rw) */
    Ifx_UReg_32Bit WDI:1;             /**< \brief [13:13] Enable Interrupt Request WDI - WDI (rw) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_SENT_CH_INTEN_Bits;

/** \brief Interrupt Set Register ${x} */
typedef struct _Ifx_SENT_CH_INTSET_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Set Interrupt Request Flag RSI - RSI (w) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Set Interrupt Request Flag RDI - RDI (w) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Set Interrupt Request Flag RBI - RBI (w) */
    Ifx_UReg_32Bit TDI:1;             /**< \brief [3:3] Set Interrupt Request Flag TDI - TDI (w) */
    Ifx_UReg_32Bit TBI:1;             /**< \brief [4:4] Set Interrupt Request Flag TBI - TBI (w) */
    Ifx_UReg_32Bit FRI:1;             /**< \brief [5:5] Set Interrupt Request Flag FRI - FRI (w) */
    Ifx_UReg_32Bit FDI:1;             /**< \brief [6:6] Set Interrupt Request Flag FDI - FDI (w) */
    Ifx_UReg_32Bit NNI:1;             /**< \brief [7:7] Set Interrupt Request Flag NNI - NNI (w) */
    Ifx_UReg_32Bit NVI:1;             /**< \brief [8:8] Set Interrupt Request Flag NVI - NVI (w) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [9:9] Set Interrupt Request Flag CRCI - CRCI (w) */
    Ifx_UReg_32Bit WSI:1;             /**< \brief [10:10] Set Interrupt Request Flag WSI - WSI (w) */
    Ifx_UReg_32Bit SDI:1;             /**< \brief [11:11] Set Interrupt Request Flag SDI - SDI (w) */
    Ifx_UReg_32Bit SCRI:1;            /**< \brief [12:12] Set Interrupt Request Flag SCRI - SCRI (w) */
    Ifx_UReg_32Bit WDI:1;             /**< \brief [13:13] Set Interrupt Request Flag WDI - WDI (w) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_SENT_CH_INTSET_Bits;

/** \brief Interrupt Status Register ${x} */
typedef struct _Ifx_SENT_CH_INTSTAT_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Receive Success Interrupt Request Flag - RSI (rh) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Receive Data Interrupt Request Flag - RDI (rh) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Receive Buffer Overflow Interrupt Request Flag - RBI (rh) */
    Ifx_UReg_32Bit TDI:1;             /**< \brief [3:3] Transfer Data Interrupt Request Flag - TDI (rh) */
    Ifx_UReg_32Bit TBI:1;             /**< \brief [4:4] Transmit Buffer Underflow Interrupt Request Flag - TBI (rh) */
    Ifx_UReg_32Bit FRI:1;             /**< \brief [5:5] Frequency Range Interrupt Request Flag - FRI (rh) */
    Ifx_UReg_32Bit FDI:1;             /**< \brief [6:6] Frequency Drift Interrupt Request Flag - FDI (rh) */
    Ifx_UReg_32Bit NNI:1;             /**< \brief [7:7] Number of Nibbles Wrong Request Flag - NNI (rh) */
    Ifx_UReg_32Bit NVI:1;             /**< \brief [8:8] Nibbles Value out of Range Request Flag - NVI (rh) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [9:9] CRC Error Request Flag - CRCI (rh) */
    Ifx_UReg_32Bit WSI:1;             /**< \brief [10:10] Wrong Status and Communication Nibble Error Request Flag - WSI (rh) */
    Ifx_UReg_32Bit SDI:1;             /**< \brief [11:11] Serial Data Receive Interrupt Request Flag - SDI (rh) */
    Ifx_UReg_32Bit SCRI:1;            /**< \brief [12:12] Serial Data CRC Error Request Flag - SCRI (rh) */
    Ifx_UReg_32Bit WDI:1;             /**< \brief [13:13] Watch Dog Error Request Flag - WDI (rh) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_SENT_CH_INTSTAT_Bits;

/** \brief Input and Output Control Register ${x} */
typedef struct _Ifx_SENT_CH_IOCR_Bits
{
    Ifx_UReg_32Bit ALTI:2;            /**< \brief [1:0] Alternate Input Select - ALTI (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit DEPTH:4;           /**< \brief [7:4] Digital Glitch Filter Depth - DEPTH (rw) */
    Ifx_UReg_32Bit OIE:1;             /**< \brief [8:8] Output Inverter Enable Channel x - OIE (rw) */
    Ifx_UReg_32Bit IIE:1;             /**< \brief [9:9] Input Inverter Enable Channel x - IIE (rw) */
    Ifx_UReg_32Bit CEC:1;             /**< \brief [10:10] Clear Edge Counter - CEC (w) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit REG:1;             /**< \brief [12:12] Rising Edge Glitch Flag for Channel x - REG (rh) */
    Ifx_UReg_32Bit FEG:1;             /**< \brief [13:13] Falling Edge Glitch Flag for Channel x - FEG (rh) */
    Ifx_UReg_32Bit CREG:1;            /**< \brief [14:14] Clear Rising Edge Glitch Flag for Channel x - CREG (rw) */
    Ifx_UReg_32Bit CFEG:1;            /**< \brief [15:15] Clear Falling Edge Glitch Flag for Channel x - CFEG (rw) */
    Ifx_UReg_32Bit ETS:4;             /**< \brief [19:16] External Trigger Select - ETS (rw) */
    Ifx_UReg_32Bit EC:8;              /**< \brief [27:20] Edge Counter - EC (rh) */
    Ifx_UReg_32Bit CTR:1;             /**< \brief [28:28] Clear Trigger Monitor Flag for Channel x - CTR (rw) */
    Ifx_UReg_32Bit TRM:1;             /**< \brief [29:29] Trigger Monitor Flag for Channel x - TRM (rh) */
    Ifx_UReg_32Bit RXM:1;             /**< \brief [30:30] Receive Monitor for Channel x - RXM (rh) */
    Ifx_UReg_32Bit TXM:1;             /**< \brief [31:31] Transmit Monitor for Channel x - TXM (rh) */
} Ifx_SENT_CH_IOCR_Bits;

/** \brief Receiver Control Register ${x} */
typedef struct _Ifx_SENT_CH_RCR_Bits
{
    Ifx_UReg_32Bit CEN:1;             /**< \brief [0:0] Channel Enable - CEN (rw) */
    Ifx_UReg_32Bit IEP:1;             /**< \brief [1:1] Ignore End Pulse - IEP (rw) */
    Ifx_UReg_32Bit ACE:1;             /**< \brief [2:2] Alternative CRC Mode Enable - ACE (rw) */
    Ifx_UReg_32Bit SNI:1;             /**< \brief [3:3] Status Nibble Included in CRC - SNI (rw) */
    Ifx_UReg_32Bit SDP:1;             /**< \brief [4:4] Serial Data Processing Mode - SDP (rw) */
    Ifx_UReg_32Bit SCDIS:1;           /**< \brief [5:5] CRC for Serial Data Disabled Mode - SCDIS (rw) */
    Ifx_UReg_32Bit CDIS:1;            /**< \brief [6:6] CRC Disabled Mode - CDIS (rw) */
    Ifx_UReg_32Bit CFC:1;             /**< \brief [7:7] Consecutive Frame Check - CFC (rw) */
    Ifx_UReg_32Bit FRL:8;             /**< \brief [15:8] Frame Length - FRL (rw) */
    Ifx_UReg_32Bit CRZ:1;             /**< \brief [16:16] CRC with Zero Nibble for Serial Data - CRZ (rw) */
    Ifx_UReg_32Bit ESF:1;             /**< \brief [17:17] Enhanced Serial Frame Mode - ESF (rw) */
    Ifx_UReg_32Bit IDE:1;             /**< \brief [18:18] Ignore Drift Error Mode - IDE (rw) */
    Ifx_UReg_32Bit SUSEN:1;           /**< \brief [19:19] Suspend Enable - SUSEN (rw) */
    Ifx_UReg_32Bit FDFL:1;            /**< \brief [20:20] Frequency Drift Check based on Frame Length - FDFL (rw) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_SENT_CH_RCR_Bits;

/** \brief Receive Status Register ${x} */
typedef struct _Ifx_SENT_CH_RSR_Bits
{
    Ifx_UReg_32Bit CRC:4;             /**< \brief [3:0] CRC - CRC (r) */
    Ifx_UReg_32Bit CST:2;             /**< \brief [5:4] Channel Status - CST (r) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit SCN:4;             /**< \brief [11:8] Status and Communication Nibble - SCN (r) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit FRLEN:16;          /**< \brief [31:16] Frame Length including Pause Nibble - FRLEN (r) */
} Ifx_SENT_CH_RSR_Bits;

/** \brief SPC Control Register ${x} */
typedef struct _Ifx_SENT_CH_SCR_Bits
{
    Ifx_UReg_32Bit PLEN:6;            /**< \brief [5:0] Pulse Length - PLEN (rw) */
    Ifx_UReg_32Bit TRIG:2;            /**< \brief [7:6] Trigger Source and Mode Selection - TRIG (rw) */
    Ifx_UReg_32Bit DEL:6;             /**< \brief [13:8] Delay Length - DEL (rw) */
    Ifx_UReg_32Bit BASE:1;            /**< \brief [14:14] Time Base - BASE (rw) */
    Ifx_UReg_32Bit TRQ:1;             /**< \brief [15:15] Transfer Request in Progress - TRQ (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SENT_CH_SCR_Bits;

/** \brief Serial Data and Status Register ${x} */
typedef struct _Ifx_SENT_CH_SDS_Bits
{
    Ifx_UReg_32Bit SD:16;             /**< \brief [15:0] Serial Data - SD (r) */
    Ifx_UReg_32Bit MID:8;             /**< \brief [23:16] Message ID - MID (r) */
    Ifx_UReg_32Bit SCRC:6;            /**< \brief [29:24] SCRC - SCRC (r) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit CON:1;             /**< \brief [31:31] Configuration bit - CON (r) */
} Ifx_SENT_CH_SDS_Bits;

/** \brief Receive Data View Register ${x} */
typedef struct _Ifx_SENT_CH_VIEW_Bits
{
    Ifx_UReg_32Bit RDNP0:3;           /**< \brief [2:0] Receive Data Target Nibble Pointer 0 - RDNP0 (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit RDNP1:3;           /**< \brief [6:4] Receive Data Target Nibble Pointer 1 - RDNP1 (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit RDNP2:3;           /**< \brief [10:8] Receive Data Target Nibble Pointer 2 - RDNP2 (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit RDNP3:3;           /**< \brief [14:12] Receive Data Target Nibble Pointer 3 - RDNP3 (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit RDNP4:3;           /**< \brief [18:16] Receive Data Target Nibble Pointer 4 - RDNP4 (rw) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit RDNP5:3;           /**< \brief [22:20] Receive Data Target Nibble Pointer 5 - RDNP5 (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit RDNP6:3;           /**< \brief [26:24] Receive Data Target Nibble Pointer 6 - RDNP6 (rw) */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit RDNP7:3;           /**< \brief [30:28] Receive Data Target Nibble Pointer 7 - RDNP7 (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SENT_CH_VIEW_Bits;

/** \brief Watch Dog Timer Register ${x} */
typedef struct _Ifx_SENT_CH_WDT_Bits
{
    Ifx_UReg_32Bit WDL:16;            /**< \brief [15:0] Watch Dog Timer Limit - WDL (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_SENT_CH_WDT_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_SENT_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_SENT_CLC_Bits;

/** \brief SENT Fractional Divider Register */
typedef struct _Ifx_SENT_FDR_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SENT_FDR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_SENT_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUM:16;         /**< \brief [31:16] Module Number Value - MODNUM (r) */
} Ifx_SENT_ID_Bits;

/** \brief Interrupt Overview Register */
typedef struct _Ifx_SENT_INTOV_Bits
{
    Ifx_UReg_32Bit IPC0:1;            /**< \brief [0:0] Interrupt Pending on Channel 0 - IPC0 (rh) */
    Ifx_UReg_32Bit IPC1:1;            /**< \brief [1:1] Interrupt Pending on Channel 1 - IPC1 (rh) */
    Ifx_UReg_32Bit IPC2:1;            /**< \brief [2:2] Interrupt Pending on Channel 2 - IPC2 (rh) */
    Ifx_UReg_32Bit IPC3:1;            /**< \brief [3:3] Interrupt Pending on Channel 3 - IPC3 (rh) */
    Ifx_UReg_32Bit IPC4:1;            /**< \brief [4:4] Interrupt Pending on Channel 4 - IPC4 (rh) */
    Ifx_UReg_32Bit IPC5:1;            /**< \brief [5:5] Interrupt Pending on Channel 5 - IPC5 (rh) */
    Ifx_UReg_32Bit IPC6:1;            /**< \brief [6:6] Interrupt Pending on Channel 6 - IPC6 (rh) */
    Ifx_UReg_32Bit IPC7:1;            /**< \brief [7:7] Interrupt Pending on Channel 7 - IPC7 (rh) */
    Ifx_UReg_32Bit IPC8:1;            /**< \brief [8:8] Interrupt Pending on Channel 8 - IPC8 (rh) */
    Ifx_UReg_32Bit IPC9:1;            /**< \brief [9:9] Interrupt Pending on Channel 9 - IPC9 (rh) */
    Ifx_UReg_32Bit IPC10:1;           /**< \brief [10:10] Interrupt Pending on Channel 10 - IPC10 (rh) */
    Ifx_UReg_32Bit IPC11:1;           /**< \brief [11:11] Interrupt Pending on Channel 11 - IPC11 (rh) */
    Ifx_UReg_32Bit IPC12:1;           /**< \brief [12:12] Interrupt Pending on Channel 12 - IPC12 (rh) */
    Ifx_UReg_32Bit IPC13:1;           /**< \brief [13:13] Interrupt Pending on Channel 13 - IPC13 (rh) */
    Ifx_UReg_32Bit IPC14:1;           /**< \brief [14:14] Interrupt Pending on Channel 14 - IPC14 (rh) */
    Ifx_UReg_32Bit IPC15:1;           /**< \brief [15:15] Interrupt Pending on Channel 15 - IPC15 (rh) */
    Ifx_UReg_32Bit IPC16:1;           /**< \brief [16:16] Interrupt Pending on Channel 16 - IPC16 (rh) */
    Ifx_UReg_32Bit IPC17:1;           /**< \brief [17:17] Interrupt Pending on Channel 17 - IPC17 (rh) */
    Ifx_UReg_32Bit IPC18:1;           /**< \brief [18:18] Interrupt Pending on Channel 18 - IPC18 (rh) */
    Ifx_UReg_32Bit IPC19:1;           /**< \brief [19:19] Interrupt Pending on Channel 19 - IPC19 (rh) */
    Ifx_UReg_32Bit IPC20:1;           /**< \brief [20:20] Interrupt Pending on Channel 20 - IPC20 (rh) */
    Ifx_UReg_32Bit IPC21:1;           /**< \brief [21:21] Interrupt Pending on Channel 21 - IPC21 (rh) */
    Ifx_UReg_32Bit IPC22:1;           /**< \brief [22:22] Interrupt Pending on Channel 22 - IPC22 (rh) */
    Ifx_UReg_32Bit IPC23:1;           /**< \brief [23:23] Interrupt Pending on Channel 23 - IPC23 (rh) */
    Ifx_UReg_32Bit IPC24:1;           /**< \brief [24:24] Interrupt Pending on Channel 24 - IPC24 (rh) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_SENT_INTOV_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_SENT_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_SENT_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_SENT_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_SENT_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_SENT_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_SENT_KRSTCLR_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_SENT_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_SENT_OCS_Bits;

/** \brief Receive Data Register ${x} */
typedef struct _Ifx_SENT_RDR_Bits
{
    Ifx_UReg_32Bit RD0:4;             /**< \brief [3:0] Receive Data Nibble 0 - RD0 (rh) */
    Ifx_UReg_32Bit RD1:4;             /**< \brief [7:4] Receive Data Nibble 1 - RD1 (rh) */
    Ifx_UReg_32Bit RD2:4;             /**< \brief [11:8] Receive Data Nibble 2 - RD2 (rh) */
    Ifx_UReg_32Bit RD3:4;             /**< \brief [15:12] Receive Data Nibble 3 - RD3 (rh) */
    Ifx_UReg_32Bit RD4:4;             /**< \brief [19:16] Receive Data Nibble 4 - RD4 (rh) */
    Ifx_UReg_32Bit RD5:4;             /**< \brief [23:20] Receive Data Nibble 5 - RD5 (rh) */
    Ifx_UReg_32Bit RD6:4;             /**< \brief [27:24] Receive Data Nibble 6 - RD6 (rh) */
    Ifx_UReg_32Bit RD7:4;             /**< \brief [31:28] Receive Data Nibble 7 - RD7 (rh) */
} Ifx_SENT_RDR_Bits;

/** \brief Receive Time Stamp Register ${x} */
typedef struct _Ifx_SENT_RTS_Bits
{
    Ifx_UReg_32Bit LTS:32;            /**< \brief [31:0] Last Receive Time Stamp for Channel x - LTS (r) */
} Ifx_SENT_RTS_Bits;

/** \brief Time Stamp Predivider Register */
typedef struct _Ifx_SENT_TPD_Bits
{
    Ifx_UReg_32Bit TDIV:20;           /**< \brief [19:0] Divider Factor of Pre Divider for TSR - TDIV (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_SENT_TPD_Bits;

/** \brief Module Time Stamp Register */
typedef struct _Ifx_SENT_TSR_Bits
{
    Ifx_UReg_32Bit CTS:32;            /**< \brief [31:0] Current Time Stamp for the Module - CTS (r) */
} Ifx_SENT_TSR_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_sent_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_SENT_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_SENT_ACCEN1;

/** \brief Channel Fractional Divider Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_CFDR_Bits B;          /**< \brief Bitfield access */
} Ifx_SENT_CH_CFDR;

/** \brief Channel Pre Divider Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_CPDR_Bits B;          /**< \brief Bitfield access */
} Ifx_SENT_CH_CPDR;

/** \brief Interrupt Node Pointer Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_INP_Bits B;           /**< \brief Bitfield access */
} Ifx_SENT_CH_INP;

/** \brief Interrupt Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_INTCLR_Bits B;        /**< \brief Bitfield access */
} Ifx_SENT_CH_INTCLR;

/** \brief Interrupt Enable Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_INTEN_Bits B;         /**< \brief Bitfield access */
} Ifx_SENT_CH_INTEN;

/** \brief Interrupt Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_INTSET_Bits B;        /**< \brief Bitfield access */
} Ifx_SENT_CH_INTSET;

/** \brief Interrupt Status Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_INTSTAT_Bits B;       /**< \brief Bitfield access */
} Ifx_SENT_CH_INTSTAT;

/** \brief Input and Output Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_IOCR_Bits B;          /**< \brief Bitfield access */
} Ifx_SENT_CH_IOCR;

/** \brief Receiver Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_RCR_Bits B;           /**< \brief Bitfield access */
} Ifx_SENT_CH_RCR;

/** \brief Receive Status Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_RSR_Bits B;           /**< \brief Bitfield access */
} Ifx_SENT_CH_RSR;

/** \brief SPC Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_SCR_Bits B;           /**< \brief Bitfield access */
} Ifx_SENT_CH_SCR;

/** \brief Serial Data and Status Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_SDS_Bits B;           /**< \brief Bitfield access */
} Ifx_SENT_CH_SDS;

/** \brief Receive Data View Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_VIEW_Bits B;          /**< \brief Bitfield access */
} Ifx_SENT_CH_VIEW;

/** \brief Watch Dog Timer Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CH_WDT_Bits B;           /**< \brief Bitfield access */
} Ifx_SENT_CH_WDT;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_SENT_CLC;

/** \brief SENT Fractional Divider Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_FDR_Bits B;              /**< \brief Bitfield access */
} Ifx_SENT_FDR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_SENT_ID;

/** \brief Interrupt Overview Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_INTOV_Bits B;            /**< \brief Bitfield access */
} Ifx_SENT_INTOV;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_KRST0_Bits B;            /**< \brief Bitfield access */
} Ifx_SENT_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_KRST1_Bits B;            /**< \brief Bitfield access */
} Ifx_SENT_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_KRSTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_SENT_KRSTCLR;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_OCS_Bits B;              /**< \brief Bitfield access */
} Ifx_SENT_OCS;

/** \brief Receive Data Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_RDR_Bits B;              /**< \brief Bitfield access */
} Ifx_SENT_RDR;

/** \brief Receive Time Stamp Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_RTS_Bits B;              /**< \brief Bitfield access */
} Ifx_SENT_RTS;

/** \brief Time Stamp Predivider Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_TPD_Bits B;              /**< \brief Bitfield access */
} Ifx_SENT_TPD;

/** \brief Module Time Stamp Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SENT_TSR_Bits B;              /**< \brief Bitfield access */
} Ifx_SENT_TSR;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Sent_CH_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CH object */
typedef volatile struct _Ifx_SENT_CH
{
       Ifx_SENT_CH_CPDR                    CPDR;                   /**< \brief 0, Channel Pre Divider Register ${x}*/
       Ifx_SENT_CH_CFDR                    CFDR;                   /**< \brief 4, Channel Fractional Divider Register ${x}*/
       Ifx_SENT_CH_RCR                     RCR;                    /**< \brief 8, Receiver Control Register ${x}*/
       Ifx_SENT_CH_RSR                     RSR;                    /**< \brief C, Receive Status Register ${x}*/
       Ifx_SENT_CH_SDS                     SDS;                    /**< \brief 10, Serial Data and Status Register ${x}*/
       Ifx_SENT_CH_IOCR                    IOCR;                   /**< \brief 14, Input and Output Control Register ${x}*/
       Ifx_SENT_CH_SCR                     SCR;                    /**< \brief 18, SPC Control Register ${x}*/
       Ifx_SENT_CH_VIEW                    VIEW;                   /**< \brief 1C, Receive Data View Register ${x}*/
       Ifx_SENT_CH_INTSTAT                 INTSTAT;                /**< \brief 20, Interrupt Status Register ${x}*/
       Ifx_SENT_CH_INTSET                  INTSET;                 /**< \brief 24, Interrupt Set Register ${x}*/
       Ifx_SENT_CH_INTCLR                  INTCLR;                 /**< \brief 28, Interrupt Clear Register ${x}*/
       Ifx_SENT_CH_INTEN                   INTEN;                  /**< \brief 2C, Interrupt Enable Register ${x}*/
       Ifx_SENT_CH_INP                     INP;                    /**< \brief 30, Interrupt Node Pointer Register ${x}*/
       Ifx_SENT_CH_WDT                     WDT;                    /**< \brief 34, Watch Dog Timer Register ${x}*/
       Ifx_UReg_8Bit                       reserved_38[8];         /**< \brief 38, \internal Reserved */
} Ifx_SENT_CH;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Sent_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief SENT object */
typedef volatile struct _Ifx_SENT
{
       Ifx_SENT_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_SENT_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_SENT_FDR                        FDR;                    /**< \brief C, SENT Fractional Divider Register*/
       Ifx_UReg_8Bit                       reserved_10[4];         /**< \brief 10, \internal Reserved */
       Ifx_SENT_INTOV                      INTOV;                  /**< \brief 14, Interrupt Overview Register*/
       Ifx_SENT_TSR                        TSR;                    /**< \brief 18, Module Time Stamp Register*/
       Ifx_SENT_TPD                        TPD;                    /**< \brief 1C, Time Stamp Predivider Register*/
       Ifx_UReg_8Bit                       reserved_20[96];        /**< \brief 20, \internal Reserved */
       Ifx_SENT_RDR                        RDR[15];                /**< \brief 80, Receive Data Register ${x}*/
       Ifx_UReg_8Bit                       reserved_BC[44];        /**< \brief BC, \internal Reserved */
       Ifx_SENT_OCS                        OCS;                    /**< \brief E8, OCDS Control and Status*/
       Ifx_SENT_KRSTCLR                    KRSTCLR;                /**< \brief EC, Kernel Reset Status Clear Register*/
       Ifx_SENT_KRST1                      KRST1;                  /**< \brief F0, Kernel Reset Register 1*/
       Ifx_SENT_KRST0                      KRST0;                  /**< \brief F4, Kernel Reset Register 0*/
       Ifx_SENT_ACCEN1                     ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_SENT_ACCEN0                     ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
       Ifx_SENT_CH                         CH[15];                 /**< \brief 100, Reserved*/
       Ifx_UReg_8Bit                       reserved_4C0[1472];     /**< \brief 4C0, \internal Reserved */
       Ifx_SENT_RTS                        RTS[15];                /**< \brief A80, Receive Time Stamp Register ${x}*/
       Ifx_UReg_8Bit                       reserved_ABC[68];       /**< \brief ABC, \internal Reserved */
} Ifx_SENT;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXSENT_REGDEF_H */
