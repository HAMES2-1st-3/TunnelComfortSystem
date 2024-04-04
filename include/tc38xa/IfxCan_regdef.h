/**
 * \file IfxCan_regdef.h
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
 * \defgroup IfxSfr_Can_Registers Can Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Can_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Can_Registers
 * 
 * \defgroup IfxSfr_Can_Registers_union Register unions
 * \ingroup IfxSfr_Can_Registers
 * 
 * \defgroup IfxSfr_Can_Registers_struct Memory map
 * \ingroup IfxSfr_Can_Registers
 */
#ifndef IFXCAN_REGDEF_H
#define IFXCAN_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Can_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_CAN_ACCEN0_Bits
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
} Ifx_CAN_ACCEN0_Bits;

/** \brief Access Enable Register Control 0 */
typedef struct _Ifx_CAN_ACCENCTR0_Bits
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
} Ifx_CAN_ACCENCTR0_Bits;

/** \brief Buffer receive address and transmit address */
typedef struct _Ifx_CAN_BUFADR_Bits
{
    Ifx_UReg_32Bit TXBUF:14;          /**< \brief [13:0] Transmit Buffer start address - TXBUF (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit RXBUF:14;          /**< \brief [29:16] Receive Buffer start address - RXBUF (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CAN_BUFADR_Bits;

/** \brief CAN Clock Control Register */
typedef struct _Ifx_CAN_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Disable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CAN_CLC_Bits;

/** \brief  */
typedef struct _Ifx_CAN_DB_Bits
{
    Ifx_UReg_8Bit DB:8;               /**< \brief [7:0] Data Byte m (rwh) */
} Ifx_CAN_DB_Bits;

/** \brief Filter Element 0 */
typedef struct _Ifx_CAN_EXTMSG_F0_Bits
{
    Ifx_UReg_32Bit EFID1:29;          /**< \brief [28:0] Extended Filter ID 1 (rw) */
    Ifx_UReg_32Bit EFEC:3;            /**< \brief [31:29] Extended Filter Element Configuration (rw) */
} Ifx_CAN_EXTMSG_F0_Bits;

/** \brief Filter Element 1 */
typedef struct _Ifx_CAN_EXTMSG_F1_Bits
{
    Ifx_UReg_32Bit EFID2:29;          /**< \brief [28:0] Extended Filter ID 2 (rw) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit EFT:2;             /**< \brief [31:30] Extended Filter Type (rw) */
} Ifx_CAN_EXTMSG_F1_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_CAN_ID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value - MOD_NUMBER (r) */
} Ifx_CAN_ID_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_CAN_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CAN_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_CAN_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CAN_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_CAN_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CAN_KRSTCLR_Bits;

/** \brief Module Control Register */
typedef struct _Ifx_CAN_MCR_Bits
{
    Ifx_UReg_32Bit CLKSEL0:2;         /**< \brief [1:0] Clock Select 0 - CLKSEL0 (rw) */
    Ifx_UReg_32Bit CLKSEL1:2;         /**< \brief [3:2] Clock Select 1 - CLKSEL1 (rw) */
    Ifx_UReg_32Bit CLKSEL2:2;         /**< \brief [5:4] Clock Select 2 - CLKSEL2 (rw) */
    Ifx_UReg_32Bit CLKSEL3:2;         /**< \brief [7:6] Clock Select 3 - CLKSEL3 (rw) */
    Ifx_UReg_32Bit reserved_8:16;     /**< \brief [23:8] \internal Reserved */
    Ifx_UReg_32Bit NODE:3;            /**< \brief [26:24] Node - NODE (rw) */
    Ifx_UReg_32Bit DXCM:1;            /**< \brief [27:27] Debug Over CAN Messages Enable - DXCM (rw) */
    Ifx_UReg_32Bit RBUSY:1;           /**< \brief [28:28] RAM BUSY - RBUSY (rh) */
    Ifx_UReg_32Bit RINIT:1;           /**< \brief [29:29] RAM Init - RINIT (rw) */
    Ifx_UReg_32Bit CI:1;              /**< \brief [30:30] Change Init - CI (rw) */
    Ifx_UReg_32Bit CCCE:1;            /**< \brief [31:31] Clock and RAM Change Enable - CCCE (rw) */
} Ifx_CAN_MCR_Bits;

/** \brief Measure Control Register */
typedef struct _Ifx_CAN_MECR_Bits
{
    Ifx_UReg_32Bit TH:16;             /**< \brief [15:0] Threshold - TH (rw) */
    Ifx_UReg_32Bit INP:4;             /**< \brief [19:16] Interrupt Node Pointer - INP (rw) */
    Ifx_UReg_32Bit NODE:3;            /**< \brief [22:20] Node - NODE (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit ANYED:1;           /**< \brief [24:24] Any Edge - ANYED (rw) */
    Ifx_UReg_32Bit CAPEIE:1;          /**< \brief [25:25] Capture Event Interrupt Enable - CAPEIE (rw) */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit DEPTH:3;           /**< \brief [29:27] Digital Glitch Filter Depth - DEPTH (rw) */
    Ifx_UReg_32Bit SOF:1;             /**< \brief [30:30] Start Of Frame - SOF (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_CAN_MECR_Bits;

/** \brief Measure Status Register */
typedef struct _Ifx_CAN_MESTAT_Bits
{
    Ifx_UReg_32Bit CAPT:16;           /**< \brief [15:0] Captured Timer - CAPT (rh) */
    Ifx_UReg_32Bit CAPRED:1;          /**< \brief [16:16] Captured Rising Edge - CAPRED (rh) */
    Ifx_UReg_32Bit CAPE:1;            /**< \brief [17:17] Capture Event - CAPE (rwh) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_CAN_MESTAT_Bits;

/** \brief Access Enable Register CAN Node ${i} 0 */
typedef struct _Ifx_CAN_N_ACCENNODE0_Bits
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
} Ifx_CAN_N_ACCENNODE0_Bits;

/** \brief CC Control Register ${i} */
typedef struct _Ifx_CAN_N_CCCR_Bits
{
    Ifx_UReg_32Bit INIT:1;            /**< \brief [0:0] Initialization - INIT (rwh) */
    Ifx_UReg_32Bit CCE:1;             /**< \brief [1:1] Configuration Change Enable - CCE (rw) */
    Ifx_UReg_32Bit ASM:1;             /**< \brief [2:2] Restricted Operation Mode - ASM (rwh) */
    Ifx_UReg_32Bit CSA:1;             /**< \brief [3:3] Clock Stop Acknowledge - CSA (rh) */
    Ifx_UReg_32Bit CSR:1;             /**< \brief [4:4] Clock Stop Request - CSR (rw) */
    Ifx_UReg_32Bit MON:1;             /**< \brief [5:5] Bus Monitoring Mode - MON (rwh) */
    Ifx_UReg_32Bit DAR:1;             /**< \brief [6:6] Disable Automatic Retransmission - DAR (rw) */
    Ifx_UReg_32Bit TEST:1;            /**< \brief [7:7] Test Mode Enable - TEST (rw) */
    Ifx_UReg_32Bit FDOE:1;            /**< \brief [8:8] FD Operation Enable - FDOE (rw) */
    Ifx_UReg_32Bit BRSE:1;            /**< \brief [9:9] Bit Rate Switch Enable - BRSE (rw) */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit PXHD:1;            /**< \brief [12:12] Protocol Exception Handling Disable - PXHD (rw) */
    Ifx_UReg_32Bit EFBI:1;            /**< \brief [13:13] Edge Filtering during Bus Integration - EFBI (rw) */
    Ifx_UReg_32Bit TXP:1;             /**< \brief [14:14] Transmit Pause - TXP (rw) */
    Ifx_UReg_32Bit NISO:1;            /**< \brief [15:15] Non ISO Operation - NISO (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_CCCR_Bits;

/** \brief Core Release Register ${i} */
typedef struct _Ifx_CAN_N_CREL_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:4;     /**< \brief [19:16] \internal Reserved */
    Ifx_UReg_32Bit SUBSTEP:4;         /**< \brief [23:20] Sub-step of Core Release - SUBSTEP (r) */
    Ifx_UReg_32Bit STEP:4;            /**< \brief [27:24] Step of Core Release - STEP (r) */
    Ifx_UReg_32Bit REL:4;             /**< \brief [31:28] Core Release - REL (r) */
} Ifx_CAN_N_CREL_Bits;

/** \brief Data Bit Timing & Prescaler Register ${i} */
typedef struct _Ifx_CAN_N_DBTP_Bits
{
    Ifx_UReg_32Bit DSJW:4;            /**< \brief [3:0] Data (Re) Synchronization Jump Width - DSJW (rw) */
    Ifx_UReg_32Bit DTSEG2:4;          /**< \brief [7:4] Data time segment after sample point - DTSEG2 (rw) */
    Ifx_UReg_32Bit DTSEG1:5;          /**< \brief [12:8] Data time segment before sample point - DTSEG1 (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit DBRP:5;            /**< \brief [20:16] Data Baud Rate Prescaler - DBRP (rw) */
    Ifx_UReg_32Bit reserved_21:2;     /**< \brief [22:21] \internal Reserved */
    Ifx_UReg_32Bit TDC:1;             /**< \brief [23:23] Transmitter Delay Compensation - TDC (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CAN_N_DBTP_Bits;

/** \brief Error Counter Register ${i} */
typedef struct _Ifx_CAN_N_ECR_Bits
{
    Ifx_UReg_32Bit TEC:8;             /**< \brief [7:0] Transmit Error Counter - TEC (rh) */
    Ifx_UReg_32Bit REC:7;             /**< \brief [14:8] Receive Error Counter - REC (rh) */
    Ifx_UReg_32Bit RP:1;              /**< \brief [15:15] Receive Error Passive - RP (rh) */
    Ifx_UReg_32Bit CEL:8;             /**< \brief [23:16] CAN Error Logging - CEL (rh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CAN_N_ECR_Bits;

/** \brief End Address Node ${i} */
typedef struct _Ifx_CAN_N_ENDADR_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit END:14;            /**< \brief [15:2] Message RAM end - END (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_ENDADR_Bits;

/** \brief Endian Register ${i} */
typedef struct _Ifx_CAN_N_ENDN_Bits
{
    Ifx_UReg_32Bit ETV:32;            /**< \brief [31:0] Endianness Test Value - ETV (r) */
} Ifx_CAN_N_ENDN_Bits;

/** \brief Global Filter Configuration ${i} */
typedef struct _Ifx_CAN_N_GFC_Bits
{
    Ifx_UReg_32Bit RRFE:1;            /**< \brief [0:0] Reject Remote Frames Extended - RRFE (rw) */
    Ifx_UReg_32Bit RRFS:1;            /**< \brief [1:1] Reject Remote Frames Standard - RRFS (rw) */
    Ifx_UReg_32Bit ANFE:2;            /**< \brief [3:2] Accept Non-matching Frames Extended - ANFE (rw) */
    Ifx_UReg_32Bit ANFS:2;            /**< \brief [5:4] Accept Non-matching Frames Standard - ANFS (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CAN_N_GFC_Bits;

/** \brief Interrupt routing for Groups 1 ${i} */
typedef struct _Ifx_CAN_N_GRINT1_Bits
{
    Ifx_UReg_32Bit TEFIFO:4;          /**< \brief [3:0] Transmit Event FIFO Incidents - TEFIFO (rw) */
    Ifx_UReg_32Bit HPE:4;             /**< \brief [7:4] High Priority Events - HPE (rw) */
    Ifx_UReg_32Bit WATI:4;            /**< \brief [11:8] Watermark interrupts - WATI (rw) */
    Ifx_UReg_32Bit ALRT:4;            /**< \brief [15:12] ALERTS - ALRT (rw) */
    Ifx_UReg_32Bit MOER:4;            /**< \brief [19:16] Module errors - MOER (rw) */
    Ifx_UReg_32Bit SAFE:4;            /**< \brief [23:20] Safety counter overflow - SAFE (rw) */
    Ifx_UReg_32Bit BOFF:4;            /**< \brief [27:24] Bus Off has been reached - BOFF (rw) */
    Ifx_UReg_32Bit LOI:4;             /**< \brief [31:28] Last Error Interrupts - LOI (rw) */
} Ifx_CAN_N_GRINT1_Bits;

/** \brief Interrupt routing for Groups 2 ${i} */
typedef struct _Ifx_CAN_N_GRINT2_Bits
{
    Ifx_UReg_32Bit REINT:4;           /**< \brief [3:0] Message stored in dedicated receive buffer interrupt (IR.DRX) - REINT (rw) */
    Ifx_UReg_32Bit RXF1F:4;           /**< \brief [7:4] IR.RF1F - RxF1F (rw) */
    Ifx_UReg_32Bit RXF0F:4;           /**< \brief [11:8] IR.RF0F - RxF0F (rw) */
    Ifx_UReg_32Bit RXF1N:4;           /**< \brief [15:12] IR.RF1N - RxF1N (rw) */
    Ifx_UReg_32Bit RXF0N:4;           /**< \brief [19:16] IR.RF0N - RxF0N (rw) */
    Ifx_UReg_32Bit RETI:4;            /**< \brief [23:20] Receive Timeouts - RETI (rw) */
    Ifx_UReg_32Bit TRAQ:4;            /**< \brief [27:24] Transmission Queue Events - TRAQ (rw) */
    Ifx_UReg_32Bit TRACO:4;           /**< \brief [31:28] Interrupts of the transmission control - TRACO (rw) */
} Ifx_CAN_N_GRINT2_Bits;

/** \brief High Priority Message Status ${i} */
typedef struct _Ifx_CAN_N_HPMS_Bits
{
    Ifx_UReg_32Bit BIDX:6;            /**< \brief [5:0] Buffer Index - BIDX (rh) */
    Ifx_UReg_32Bit MSI:2;             /**< \brief [7:6] Message Storage Indicator - MSI (rh) */
    Ifx_UReg_32Bit FIDX:7;            /**< \brief [14:8] Filter Index - FIDX (rh) */
    Ifx_UReg_32Bit FLST:1;            /**< \brief [15:15] Filter List - FLST (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_HPMS_Bits;

/** \brief Interrupt Enable ${i} */
typedef struct _Ifx_CAN_N_IE_Bits
{
    Ifx_UReg_32Bit RF0NE:1;           /**< \brief [0:0] Rx FIFO 0 New Message Interrupt Enable - RF0NE (rw) */
    Ifx_UReg_32Bit RF0WE:1;           /**< \brief [1:1] Rx FIFO 0 Watermark Reached Interrupt Enable - RF0WE (rw) */
    Ifx_UReg_32Bit RF0FE:1;           /**< \brief [2:2] Rx FIFO 0 Full Interrupt Enable - RF0FE (rw) */
    Ifx_UReg_32Bit RF0LE:1;           /**< \brief [3:3] Rx FIFO 0 Message Lost Interrupt Enable - RF0LE (rw) */
    Ifx_UReg_32Bit RF1NE:1;           /**< \brief [4:4] Rx FIFO 1 New Message Interrupt Enable - RF1NE (rw) */
    Ifx_UReg_32Bit RF1WE:1;           /**< \brief [5:5] Rx FIFO 1 Watermark Reached Interrupt Enable - RF1WE (rw) */
    Ifx_UReg_32Bit RF1FE:1;           /**< \brief [6:6] Rx FIFO 1 Full Interrupt Enable - RF1FE (rw) */
    Ifx_UReg_32Bit RF1LE:1;           /**< \brief [7:7] Rx FIFO 1 Message Lost Interrupt Enable - RF1LE (rw) */
    Ifx_UReg_32Bit HPME:1;            /**< \brief [8:8] High Priority Message Interrupt Enable - HPME (rw) */
    Ifx_UReg_32Bit TCE:1;             /**< \brief [9:9] Transmission Completed Interrupt Enable - TCE (rw) */
    Ifx_UReg_32Bit TCFE:1;            /**< \brief [10:10] Transmission Cancellation Finished Interrupt Enable - TCFE (rw) */
    Ifx_UReg_32Bit TFEE:1;            /**< \brief [11:11] Tx FIFO Empty Interrupt Enable - TFEE (rw) */
    Ifx_UReg_32Bit TEFNE:1;           /**< \brief [12:12] Tx Event FIFO New Entry Interrupt Enable - TEFNE (rw) */
    Ifx_UReg_32Bit TEFWE:1;           /**< \brief [13:13] Tx Event FIFO Watermark Reached Interrupt Enable - TEFWE (rw) */
    Ifx_UReg_32Bit TEFFE:1;           /**< \brief [14:14] Tx Event FIFO Full Interrupt Enable - TEFFE (rw) */
    Ifx_UReg_32Bit TEFLE:1;           /**< \brief [15:15] Tx Event FIFO Element Lost Interrupt Enable - TEFLE (rw) */
    Ifx_UReg_32Bit TSWE:1;            /**< \brief [16:16] Timestamp Wraparound Interrupt Enable - TSWE (rw) */
    Ifx_UReg_32Bit MRAFE:1;           /**< \brief [17:17] Message RAM Access Failure Interrupt Enable - MRAFE (rw) */
    Ifx_UReg_32Bit TOOE:1;            /**< \brief [18:18] Timeout Occurred Interrupt Enable - TOOE (rw) */
    Ifx_UReg_32Bit DRXE:1;            /**< \brief [19:19] Message stored to Dedicated Rx Buffer Interrupt Enable - DRXE (rw) */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit ELOE:1;            /**< \brief [22:22] Error Logging Overflow Interrupt Enable - ELOE (rw) */
    Ifx_UReg_32Bit EPE:1;             /**< \brief [23:23] Error Passive Interrupt Enable - EPE (rw) */
    Ifx_UReg_32Bit EWE:1;             /**< \brief [24:24] Warning Status Interrupt Enable - EWE (rw) */
    Ifx_UReg_32Bit BOE:1;             /**< \brief [25:25] Bus_Off Status Interrupt Enable - BOE (rw) */
    Ifx_UReg_32Bit WDIE:1;            /**< \brief [26:26] Watchdog Interrupt Enable - WDIE (rw) */
    Ifx_UReg_32Bit PEAE:1;            /**< \brief [27:27] Protocol Error in Arbitration Phase Enable - PEAE (rw) */
    Ifx_UReg_32Bit PEDE:1;            /**< \brief [28:28] Protocol Error in Data Phase Enable - PEDE (rw) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CAN_N_IE_Bits;

/** \brief Interrupt Register ${i} */
typedef struct _Ifx_CAN_N_IR_Bits
{
    Ifx_UReg_32Bit RF0N:1;            /**< \brief [0:0] Rx FIFO 0 New Message - RF0N (rwh) */
    Ifx_UReg_32Bit RF0W:1;            /**< \brief [1:1] Rx FIFO 0 Watermark Reached - RF0W (rwh) */
    Ifx_UReg_32Bit RF0F:1;            /**< \brief [2:2] Rx FIFO 0 Full - RF0F (rwh) */
    Ifx_UReg_32Bit RF0L:1;            /**< \brief [3:3] Rx FIFO 0 Message Lost - RF0L (rwh) */
    Ifx_UReg_32Bit RF1N:1;            /**< \brief [4:4] Rx FIFO 1 New Message - RF1N (rwh) */
    Ifx_UReg_32Bit RF1W:1;            /**< \brief [5:5] Rx FIFO 1 Watermark Reached - RF1W (rwh) */
    Ifx_UReg_32Bit RF1F:1;            /**< \brief [6:6] Rx FIFO 1 Full - RF1F (rwh) */
    Ifx_UReg_32Bit RF1L:1;            /**< \brief [7:7] Rx FIFO 1 Message Lost - RF1L (rwh) */
    Ifx_UReg_32Bit HPM:1;             /**< \brief [8:8] High Priority Message - HPM (rwh) */
    Ifx_UReg_32Bit TC:1;              /**< \brief [9:9] Transmission Completed - TC (rwh) */
    Ifx_UReg_32Bit TCF:1;             /**< \brief [10:10] Transmission Cancellation Finished - TCF (rwh) */
    Ifx_UReg_32Bit TFE:1;             /**< \brief [11:11] Tx FIFO Empty - TFE (rwh) */
    Ifx_UReg_32Bit TEFN:1;            /**< \brief [12:12] Tx Event FIFO New Entry - TEFN (rwh) */
    Ifx_UReg_32Bit TEFW:1;            /**< \brief [13:13] Tx Event FIFO Watermark Reached - TEFW (rwh) */
    Ifx_UReg_32Bit TEFF:1;            /**< \brief [14:14] Tx Event FIFO Full - TEFF (rwh) */
    Ifx_UReg_32Bit TEFL:1;            /**< \brief [15:15] Tx Event FIFO Element Lost - TEFL (rwh) */
    Ifx_UReg_32Bit TSW:1;             /**< \brief [16:16] Timestamp Wraparound - TSW (rwh) */
    Ifx_UReg_32Bit MRAF:1;            /**< \brief [17:17] Message RAM Access Failure - MRAF (rwh) */
    Ifx_UReg_32Bit TOO:1;             /**< \brief [18:18] Timeout Occurred - TOO (rwh) */
    Ifx_UReg_32Bit DRX:1;             /**< \brief [19:19] Message stored to Dedicated Rx Buffer - DRX (rwh) */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:1;     /**< \brief [21:21] \internal Reserved */
    Ifx_UReg_32Bit ELO:1;             /**< \brief [22:22] Error Logging Overflow - ELO (rwh) */
    Ifx_UReg_32Bit EP:1;              /**< \brief [23:23] Error Passive - EP (rwh) */
    Ifx_UReg_32Bit EW:1;              /**< \brief [24:24] Warning Status - EW (rwh) */
    Ifx_UReg_32Bit BO:1;              /**< \brief [25:25] Bus_Off Status - BO (rwh) */
    Ifx_UReg_32Bit WDI:1;             /**< \brief [26:26] Watchdog Interrupt - WDI (rwh) */
    Ifx_UReg_32Bit PEA:1;             /**< \brief [27:27] Protocol Error in Arbitration Phase - PEA (rwh) */
    Ifx_UReg_32Bit PED:1;             /**< \brief [28:28] Protocol Error in Data Phase - PED (rwh) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CAN_N_IR_Bits;

/** \brief Interrupt Signalling Register ${i} */
typedef struct _Ifx_CAN_N_ISREG_Bits
{
    Ifx_UReg_32Bit REINT:1;           /**< \brief [0:0] A message stored in a receive buffer interrupt - REINT (rh) */
    Ifx_UReg_32Bit RXF1F:1;           /**< \brief [1:1] Receive FIFO1 is full interrupt - RxF1F (rh) */
    Ifx_UReg_32Bit RXF0F:1;           /**< \brief [2:2] Receive FIFO0 is full interrupt - RxF0F (rh) */
    Ifx_UReg_32Bit RXF1N:1;           /**< \brief [3:3] Receive FIFO1 got a new message interrupt - RxF1N (rh) */
    Ifx_UReg_32Bit RXF0N:1;           /**< \brief [4:4] Receive FIFO0 got a new message interrupt - RxF0N (rh) */
    Ifx_UReg_32Bit RETI:1;            /**< \brief [5:5] A receive timeout event interrupt - RETI (rh) */
    Ifx_UReg_32Bit TRAQ:1;            /**< \brief [6:6] A transmission queue event interrupt - TRAQ (rh) */
    Ifx_UReg_32Bit TRACO:1;           /**< \brief [7:7] A transmission control event interrupt - TRACO (rh) */
    Ifx_UReg_32Bit TEFIFO:1;          /**< \brief [8:8] A Transmit Event FIFO Incident interrupt - TEFIFO (rh) */
    Ifx_UReg_32Bit HPE:1;             /**< \brief [9:9] A high priority event interrupt - HPE (rh) */
    Ifx_UReg_32Bit WATI:1;            /**< \brief [10:10] A watermark interrupt has been reached - WATI (rh) */
    Ifx_UReg_32Bit ALRT:1;            /**< \brief [11:11] An alert interrupt - ALRT (rh) */
    Ifx_UReg_32Bit MOER:1;            /**< \brief [12:12] Module error interrupt - MOER (rh) */
    Ifx_UReg_32Bit SAFE:1;            /**< \brief [13:13] The safety counter interrupt ELO - SAFE (rh) */
    Ifx_UReg_32Bit BOFF:1;            /**< \brief [14:14] Bus Off Interrupt - BOFF (rh) */
    Ifx_UReg_32Bit LOI:1;             /**< \brief [15:15] Last Error Interrupt - LOI (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_ISREG_Bits;

/** \brief Nominal Bit Timing & Prescaler Register ${i} */
typedef struct _Ifx_CAN_N_NBTP_Bits
{
    Ifx_UReg_32Bit NTSEG2:7;          /**< \brief [6:0] Nominal Time segment after sample point - NTSEG2 (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit NTSEG1:8;          /**< \brief [15:8] Nominal Time segment before sample point - NTSEG1 (rw) */
    Ifx_UReg_32Bit NBRP:9;            /**< \brief [24:16] Baud Rate Prescaler - NBRP (rw) */
    Ifx_UReg_32Bit NSJW:7;            /**< \brief [31:25] (Re) Synchronization Jump Width - NSJW (rw) */
} Ifx_CAN_N_NBTP_Bits;

/** \brief New Data 1 ${i} */
typedef struct _Ifx_CAN_N_NDAT1_Bits
{
    Ifx_UReg_32Bit ND0:1;             /**< \brief [0:0] New Data in Rx Buffer 0 - ND (rwh) */
    Ifx_UReg_32Bit ND1:1;             /**< \brief [1:1] New Data in Rx Buffer 1 - ND (rwh) */
    Ifx_UReg_32Bit ND2:1;             /**< \brief [2:2] New Data in Rx Buffer 2 - ND (rwh) */
    Ifx_UReg_32Bit ND3:1;             /**< \brief [3:3] New Data in Rx Buffer 3 - ND (rwh) */
    Ifx_UReg_32Bit ND4:1;             /**< \brief [4:4] New Data in Rx Buffer 4 - ND (rwh) */
    Ifx_UReg_32Bit ND5:1;             /**< \brief [5:5] New Data in Rx Buffer 5 - ND (rwh) */
    Ifx_UReg_32Bit ND6:1;             /**< \brief [6:6] New Data in Rx Buffer 6 - ND (rwh) */
    Ifx_UReg_32Bit ND7:1;             /**< \brief [7:7] New Data in Rx Buffer 7 - ND (rwh) */
    Ifx_UReg_32Bit ND8:1;             /**< \brief [8:8] New Data in Rx Buffer 8 - ND (rwh) */
    Ifx_UReg_32Bit ND9:1;             /**< \brief [9:9] New Data in Rx Buffer 9 - ND (rwh) */
    Ifx_UReg_32Bit ND10:1;            /**< \brief [10:10] New Data in Rx Buffer 10 - ND (rwh) */
    Ifx_UReg_32Bit ND11:1;            /**< \brief [11:11] New Data in Rx Buffer 11 - ND (rwh) */
    Ifx_UReg_32Bit ND12:1;            /**< \brief [12:12] New Data in Rx Buffer 12 - ND (rwh) */
    Ifx_UReg_32Bit ND13:1;            /**< \brief [13:13] New Data in Rx Buffer 13 - ND (rwh) */
    Ifx_UReg_32Bit ND14:1;            /**< \brief [14:14] New Data in Rx Buffer 14 - ND (rwh) */
    Ifx_UReg_32Bit ND15:1;            /**< \brief [15:15] New Data in Rx Buffer 15 - ND (rwh) */
    Ifx_UReg_32Bit ND16:1;            /**< \brief [16:16] New Data in Rx Buffer 16 - ND (rwh) */
    Ifx_UReg_32Bit ND17:1;            /**< \brief [17:17] New Data in Rx Buffer 17 - ND (rwh) */
    Ifx_UReg_32Bit ND18:1;            /**< \brief [18:18] New Data in Rx Buffer 18 - ND (rwh) */
    Ifx_UReg_32Bit ND19:1;            /**< \brief [19:19] New Data in Rx Buffer 19 - ND (rwh) */
    Ifx_UReg_32Bit ND20:1;            /**< \brief [20:20] New Data in Rx Buffer 20 - ND (rwh) */
    Ifx_UReg_32Bit ND21:1;            /**< \brief [21:21] New Data in Rx Buffer 21 - ND (rwh) */
    Ifx_UReg_32Bit ND22:1;            /**< \brief [22:22] New Data in Rx Buffer 22 - ND (rwh) */
    Ifx_UReg_32Bit ND23:1;            /**< \brief [23:23] New Data in Rx Buffer 23 - ND (rwh) */
    Ifx_UReg_32Bit ND24:1;            /**< \brief [24:24] New Data in Rx Buffer 24 - ND (rwh) */
    Ifx_UReg_32Bit ND25:1;            /**< \brief [25:25] New Data in Rx Buffer 25 - ND (rwh) */
    Ifx_UReg_32Bit ND26:1;            /**< \brief [26:26] New Data in Rx Buffer 26 - ND (rwh) */
    Ifx_UReg_32Bit ND27:1;            /**< \brief [27:27] New Data in Rx Buffer 27 - ND (rwh) */
    Ifx_UReg_32Bit ND28:1;            /**< \brief [28:28] New Data in Rx Buffer 28 - ND (rwh) */
    Ifx_UReg_32Bit ND29:1;            /**< \brief [29:29] New Data in Rx Buffer 29 - ND (rwh) */
    Ifx_UReg_32Bit ND30:1;            /**< \brief [30:30] New Data in Rx Buffer 30 - ND (rwh) */
    Ifx_UReg_32Bit ND31:1;            /**< \brief [31:31] New Data in Rx Buffer 31 - ND (rwh) */
} Ifx_CAN_N_NDAT1_Bits;

/** \brief New Data 2 ${i} */
typedef struct _Ifx_CAN_N_NDAT2_Bits
{
    Ifx_UReg_32Bit ND32:1;            /**< \brief [0:0] New Data in Rx Buffer 32 - ND (rwh) */
    Ifx_UReg_32Bit ND33:1;            /**< \brief [1:1] New Data in Rx Buffer 33 - ND (rwh) */
    Ifx_UReg_32Bit ND34:1;            /**< \brief [2:2] New Data in Rx Buffer 34 - ND (rwh) */
    Ifx_UReg_32Bit ND35:1;            /**< \brief [3:3] New Data in Rx Buffer 35 - ND (rwh) */
    Ifx_UReg_32Bit ND36:1;            /**< \brief [4:4] New Data in Rx Buffer 36 - ND (rwh) */
    Ifx_UReg_32Bit ND37:1;            /**< \brief [5:5] New Data in Rx Buffer 37 - ND (rwh) */
    Ifx_UReg_32Bit ND38:1;            /**< \brief [6:6] New Data in Rx Buffer 38 - ND (rwh) */
    Ifx_UReg_32Bit ND39:1;            /**< \brief [7:7] New Data in Rx Buffer 39 - ND (rwh) */
    Ifx_UReg_32Bit ND40:1;            /**< \brief [8:8] New Data in Rx Buffer 40 - ND (rwh) */
    Ifx_UReg_32Bit ND41:1;            /**< \brief [9:9] New Data in Rx Buffer 41 - ND (rwh) */
    Ifx_UReg_32Bit ND42:1;            /**< \brief [10:10] New Data in Rx Buffer 42 - ND (rwh) */
    Ifx_UReg_32Bit ND43:1;            /**< \brief [11:11] New Data in Rx Buffer 43 - ND (rwh) */
    Ifx_UReg_32Bit ND44:1;            /**< \brief [12:12] New Data in Rx Buffer 44 - ND (rwh) */
    Ifx_UReg_32Bit ND45:1;            /**< \brief [13:13] New Data in Rx Buffer 45 - ND (rwh) */
    Ifx_UReg_32Bit ND46:1;            /**< \brief [14:14] New Data in Rx Buffer 46 - ND (rwh) */
    Ifx_UReg_32Bit ND47:1;            /**< \brief [15:15] New Data in Rx Buffer 47 - ND (rwh) */
    Ifx_UReg_32Bit ND48:1;            /**< \brief [16:16] New Data in Rx Buffer 48 - ND (rwh) */
    Ifx_UReg_32Bit ND49:1;            /**< \brief [17:17] New Data in Rx Buffer 49 - ND (rwh) */
    Ifx_UReg_32Bit ND50:1;            /**< \brief [18:18] New Data in Rx Buffer 50 - ND (rwh) */
    Ifx_UReg_32Bit ND51:1;            /**< \brief [19:19] New Data in Rx Buffer 51 - ND (rwh) */
    Ifx_UReg_32Bit ND52:1;            /**< \brief [20:20] New Data in Rx Buffer 52 - ND (rwh) */
    Ifx_UReg_32Bit ND53:1;            /**< \brief [21:21] New Data in Rx Buffer 53 - ND (rwh) */
    Ifx_UReg_32Bit ND54:1;            /**< \brief [22:22] New Data in Rx Buffer 54 - ND (rwh) */
    Ifx_UReg_32Bit ND55:1;            /**< \brief [23:23] New Data in Rx Buffer 55 - ND (rwh) */
    Ifx_UReg_32Bit ND56:1;            /**< \brief [24:24] New Data in Rx Buffer 56 - ND (rwh) */
    Ifx_UReg_32Bit ND57:1;            /**< \brief [25:25] New Data in Rx Buffer 57 - ND (rwh) */
    Ifx_UReg_32Bit ND58:1;            /**< \brief [26:26] New Data in Rx Buffer 58 - ND (rwh) */
    Ifx_UReg_32Bit ND59:1;            /**< \brief [27:27] New Data in Rx Buffer 59 - ND (rwh) */
    Ifx_UReg_32Bit ND60:1;            /**< \brief [28:28] New Data in Rx Buffer 60 - ND (rwh) */
    Ifx_UReg_32Bit ND61:1;            /**< \brief [29:29] New Data in Rx Buffer 61 - ND (rwh) */
    Ifx_UReg_32Bit ND62:1;            /**< \brief [30:30] New Data in Rx Buffer 62 - ND (rwh) */
    Ifx_UReg_32Bit ND63:1;            /**< \brief [31:31] New Data in Rx Buffer 63 - ND (rwh) */
} Ifx_CAN_N_NDAT2_Bits;

/** \brief Node ${i} Port Control Register */
typedef struct _Ifx_CAN_N_NPCR_Bits
{
    Ifx_UReg_32Bit RXSEL:3;           /**< \brief [2:0] Receive Select - RXSEL (rw) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit LBM:1;             /**< \brief [8:8] Loop-Back Mode - LBM (rw) */
    Ifx_UReg_32Bit LOUT:1;            /**< \brief [9:9] Loop Back Mode Out - LOUT (rw) */
    Ifx_UReg_32Bit DELE:1;            /**< \brief [10:10] Enable destructive read on ECR${i}.CEL - DELE (rw) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CAN_N_NPCR_Bits;

/** \brief Node ${i} Timer A Transmit Trigger Register */
typedef struct _Ifx_CAN_N_NT_ATTR_Bits
{
    Ifx_UReg_32Bit RELOAD:16;         /**< \brief [15:0] Reload Value - RELOAD (rw) */
    Ifx_UReg_32Bit TXMO:8;            /**< \brief [23:16] Transmit Message Object - TXMO (r) */
    Ifx_UReg_32Bit STRT:1;            /**< \brief [24:24] Timer Start - STRT (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_CAN_N_NT_ATTR_Bits;

/** \brief Node ${i} Timer B Transmit Trigger Register */
typedef struct _Ifx_CAN_N_NT_BTTR_Bits
{
    Ifx_UReg_32Bit RELOAD:16;         /**< \brief [15:0] Reload Value - RELOAD (rw) */
    Ifx_UReg_32Bit TXMO:8;            /**< \brief [23:16] Transmit Message Object - TXMO (r) */
    Ifx_UReg_32Bit STRT:1;            /**< \brief [24:24] Timer Start - STRT (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_CAN_N_NT_BTTR_Bits;

/** \brief Node ${i} Timer Clock Control Register */
typedef struct _Ifx_CAN_N_NT_CCR_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit TPSC:4;            /**< \brief [11:8] Timer Prescaler - TPSC (rw) */
    Ifx_UReg_32Bit reserved_12:2;     /**< \brief [13:12] \internal Reserved */
    Ifx_UReg_32Bit STRESET:1;         /**< \brief [14:14] Stamping Reset - STRESET (rw) */
    Ifx_UReg_32Bit STSTART:1;         /**< \brief [15:15] Stamping Start - STSTART (rw) */
    Ifx_UReg_32Bit reserved_16:2;     /**< \brief [17:16] \internal Reserved */
    Ifx_UReg_32Bit TRIGSRC:3;         /**< \brief [20:18] Trigger Source - TRIGSRC (rw) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_CAN_N_NT_CCR_Bits;

/** \brief Node ${i} Timer C Transmit Trigger Register */
typedef struct _Ifx_CAN_N_NT_CTTR_Bits
{
    Ifx_UReg_32Bit RELOAD:16;         /**< \brief [15:0] Reload Value - RELOAD (rw) */
    Ifx_UReg_32Bit TXMO:8;            /**< \brief [23:16] Transmit Message Object - TXMO (r) */
    Ifx_UReg_32Bit STRT:1;            /**< \brief [24:24] Timer Start - STRT (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_CAN_N_NT_CTTR_Bits;

/** \brief Node ${i} Timer Receive Timeout Register */
typedef struct _Ifx_CAN_N_NT_RTR_Bits
{
    Ifx_UReg_32Bit RELOAD:16;         /**< \brief [15:0] Reload Value - RELOAD (rw) */
    Ifx_UReg_32Bit reserved_16:6;     /**< \brief [21:16] \internal Reserved */
    Ifx_UReg_32Bit TEIE:1;            /**< \brief [22:22] Timer Event Interrupt Enable - TEIE (rw) */
    Ifx_UReg_32Bit TE:1;              /**< \brief [23:23] Timer Event - TE (rwh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CAN_N_NT_RTR_Bits;

/** \brief Protocol Status Register ${i} */
typedef struct _Ifx_CAN_N_PSR_Bits
{
    Ifx_UReg_32Bit LEC:3;             /**< \brief [2:0] Last Error Code - LEC (rh) */
    Ifx_UReg_32Bit ACT:2;             /**< \brief [4:3] Activity - ACT (rh) */
    Ifx_UReg_32Bit EP:1;              /**< \brief [5:5] Error Passive - EP (rh) */
    Ifx_UReg_32Bit EW:1;              /**< \brief [6:6] Warning Status - EW (rh) */
    Ifx_UReg_32Bit BO:1;              /**< \brief [7:7] Bus_Off Status - BO (rh) */
    Ifx_UReg_32Bit DLEC:3;            /**< \brief [10:8] Data Phase Last Error Code - DLEC (rh) */
    Ifx_UReg_32Bit RESI:1;            /**< \brief [11:11] ESI flag of last received CAN FD Message - RESI (rh) */
    Ifx_UReg_32Bit RBRS:1;            /**< \brief [12:12] BRS flag of last received CAN FD Message - RBRS (rh) */
    Ifx_UReg_32Bit RFDF:1;            /**< \brief [13:13] Received a CAN FD Message - RFDF (rh) */
    Ifx_UReg_32Bit PXE:1;             /**< \brief [14:14] Protocol Exception Event - PXE (rh) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit TDCV:7;            /**< \brief [22:16] Transmitter Delay Compensation Value - TDCV (r) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_CAN_N_PSR_Bits;

/** \brief RAM Watchdog ${i} */
typedef struct _Ifx_CAN_N_RWD_Bits
{
    Ifx_UReg_32Bit WDC:8;             /**< \brief [7:0] Watchdog Configuration - WDC (rw) */
    Ifx_UReg_32Bit WDV:8;             /**< \brief [15:8] Watchdog Value - WDV (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_RWD_Bits;

/** \brief Rx Buffer Configuration ${i} */
typedef struct _Ifx_CAN_N_RX_BC_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit RBSA:14;           /**< \brief [15:2] Rx Buffer Start Address - RBSA (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_RX_BC_Bits;

/** \brief Rx Buffer/FIFO Element Size Configuration ${i} */
typedef struct _Ifx_CAN_N_RX_ESC_Bits
{
    Ifx_UReg_32Bit F0DS:3;            /**< \brief [2:0] Rx FIFO 0 Data Field Size - F0DS (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit F1DS:3;            /**< \brief [6:4] Rx FIFO 1 Data Field Size - F1DS (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit RBDS:3;            /**< \brief [10:8] Rx Buffer Data Field Size - RBDS (rw) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CAN_N_RX_ESC_Bits;

/** \brief Rx FIFO 0 Acknowledge ${i} */
typedef struct _Ifx_CAN_N_RX_F0A_Bits
{
    Ifx_UReg_32Bit F0AI:6;            /**< \brief [5:0] Rx FIFO 0 Acknowledge Index - F0AI (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CAN_N_RX_F0A_Bits;

/** \brief Rx FIFO 0 Configuration ${i} */
typedef struct _Ifx_CAN_N_RX_F0C_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit F0SA:14;           /**< \brief [15:2] Rx FIFO 0 Start Address - F0SA (rw) */
    Ifx_UReg_32Bit F0S:7;             /**< \brief [22:16] Rx FIFO 0 Size - F0S (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit F0WM:7;            /**< \brief [30:24] Rx FIFO 0 Watermark - F0WM (rw) */
    Ifx_UReg_32Bit F0OM:1;            /**< \brief [31:31] FIFO 0 Operation Mode - F0OM (rw) */
} Ifx_CAN_N_RX_F0C_Bits;

/** \brief Rx FIFO 0 Status ${i} */
typedef struct _Ifx_CAN_N_RX_F0S_Bits
{
    Ifx_UReg_32Bit F0FL:7;            /**< \brief [6:0] Rx FIFO 0 Fill Level - F0FL (rh) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit F0GI:6;            /**< \brief [13:8] Rx FIFO 0 Get Index - F0GI (rh) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit F0PI:6;            /**< \brief [21:16] Rx FIFO 0 Put Index - F0PI (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit F0F:1;             /**< \brief [24:24] Rx FIFO 0 Full - F0F (rh) */
    Ifx_UReg_32Bit RF0L:1;            /**< \brief [25:25] Rx FIFO 0 Message Lost - RF0L (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_CAN_N_RX_F0S_Bits;

/** \brief Rx FIFO 1 Acknowledge ${i} */
typedef struct _Ifx_CAN_N_RX_F1A_Bits
{
    Ifx_UReg_32Bit F1AI:6;            /**< \brief [5:0] Rx FIFO 1 Acknowledge Index - F1AI (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_CAN_N_RX_F1A_Bits;

/** \brief Rx FIFO 1 Configuration ${i} */
typedef struct _Ifx_CAN_N_RX_F1C_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit F1SA:14;           /**< \brief [15:2] Rx FIFO 1 Start Address - F1SA (rw) */
    Ifx_UReg_32Bit F1S:7;             /**< \brief [22:16] Rx FIFO 1 Size - F1S (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit F1WM:7;            /**< \brief [30:24] Rx FIFO 1 Watermark - F1WM (rw) */
    Ifx_UReg_32Bit F1OM:1;            /**< \brief [31:31] FIFO 1 Operation Mode - F1OM (rw) */
} Ifx_CAN_N_RX_F1C_Bits;

/** \brief Rx FIFO 1 Status ${i} */
typedef struct _Ifx_CAN_N_RX_F1S_Bits
{
    Ifx_UReg_32Bit F1FL:7;            /**< \brief [6:0] Rx FIFO 1 Fill Level - F1FL (rh) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit F1GI:6;            /**< \brief [13:8] Rx FIFO 1 Get Index - F1GI (rh) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit F1PI:6;            /**< \brief [21:16] Rx FIFO 1 Put Index - F1PI (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit F1F:1;             /**< \brief [24:24] Rx FIFO 1 Full - F1F (rh) */
    Ifx_UReg_32Bit RF1L:1;            /**< \brief [25:25] Rx FIFO 1 Message Lost - RF1L (rh) */
    Ifx_UReg_32Bit reserved_26:4;     /**< \brief [29:26] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CAN_N_RX_F1S_Bits;

/** \brief Standard ID Filter Configuration ${i} */
typedef struct _Ifx_CAN_N_SIDFC_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit FLSSA:14;          /**< \brief [15:2] Filter List Standard Start Address - FLSSA (rw) */
    Ifx_UReg_32Bit LSS:8;             /**< \brief [23:16] List Size Standard - LSS (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CAN_N_SIDFC_Bits;

/** \brief Start Address Node ${i} */
typedef struct _Ifx_CAN_N_STARTADR_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit START:14;          /**< \brief [15:2] Message RAM start - START (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_STARTADR_Bits;

/** \brief Transmitter Delay Compensation Register ${i} */
typedef struct _Ifx_CAN_N_TDCR_Bits
{
    Ifx_UReg_32Bit TDCF:7;            /**< \brief [6:0] Transmitter Delay Compensation Filter Window Length - TDCF (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit TDCO:7;            /**< \brief [14:8] Transmitter Delay Compensation Offset - TDCO (rw) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_CAN_N_TDCR_Bits;

/** \brief Test Register ${i} */
typedef struct _Ifx_CAN_N_TEST_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit LBCK:1;            /**< \brief [4:4] Loop Back Mode - LBCK (rwh) */
    Ifx_UReg_32Bit TX:2;              /**< \brief [6:5] Control of Transmit Pin - TX (rwh) */
    Ifx_UReg_32Bit RX:1;              /**< \brief [7:7] Receive Pin - RX (rh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CAN_N_TEST_Bits;

/** \brief Timeout Counter Configuration ${i} */
typedef struct _Ifx_CAN_N_TOCC_Bits
{
    Ifx_UReg_32Bit ETOC:1;            /**< \brief [0:0] Enable Timeout Counter - ETOC (rw) */
    Ifx_UReg_32Bit TOS:2;             /**< \brief [2:1] Timeout Select - TOS (rw) */
    Ifx_UReg_32Bit reserved_3:13;     /**< \brief [15:3] \internal Reserved */
    Ifx_UReg_32Bit TOP:16;            /**< \brief [31:16] Timeout Period - TOP (rw) */
} Ifx_CAN_N_TOCC_Bits;

/** \brief Timeout Counter Value ${i} */
typedef struct _Ifx_CAN_N_TOCV_Bits
{
    Ifx_UReg_32Bit TOC:16;            /**< \brief [15:0] Timeout Counter - TOC (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_TOCV_Bits;

/** \brief Timestamp Counter Configuration ${i} */
typedef struct _Ifx_CAN_N_TSCC_Bits
{
    Ifx_UReg_32Bit TSS:2;             /**< \brief [1:0] Time segment before sample point - TSS (rw) */
    Ifx_UReg_32Bit reserved_2:14;     /**< \brief [15:2] \internal Reserved */
    Ifx_UReg_32Bit TCP:4;             /**< \brief [19:16] Timestamp Counter Prescaler - TCP (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_CAN_N_TSCC_Bits;

/** \brief Timestamp Counter Value ${i} */
typedef struct _Ifx_CAN_N_TSCV_Bits
{
    Ifx_UReg_32Bit TSC:16;            /**< \brief [15:0] Timestamp Counter - TSC (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_TSCV_Bits;

/** \brief Time Trigger Control Register */
typedef struct _Ifx_CAN_N_TTCR_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit ETESEL:2;          /**< \brief [3:2] External Trigger Event Selection - ETESEL (rw) */
    Ifx_UReg_32Bit ETSSEL:3;          /**< \brief [6:4] External Trigger Source Selection - ETSSEL (rw) */
    Ifx_UReg_32Bit reserved_7:2;      /**< \brief [8:7] \internal Reserved */
    Ifx_UReg_32Bit TTCTSS:3;          /**< \brief [11:9] TTCapture Time Trigger Source Select - TTCTSS (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CAN_N_TTCR_Bits;

/** \brief TT Capture Time ${i} */
typedef struct _Ifx_CAN_N_TT_CPT_Bits
{
    Ifx_UReg_32Bit CCV:6;             /**< \brief [5:0] Cycle Count Value - CCV (rh) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit SWV:16;            /**< \brief [31:16] Stop Watch Value - SWV (rh) */
} Ifx_CAN_N_TT_CPT_Bits;

/** \brief TT Cycle Sync Mark ${i} */
typedef struct _Ifx_CAN_N_TT_CSM_Bits
{
    Ifx_UReg_32Bit CSM:16;            /**< \brief [15:0] Cycle Sync Mark - CSM (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_TT_CSM_Bits;

/** \brief TT Cycle Time & Count ${i} */
typedef struct _Ifx_CAN_N_TT_CTC_Bits
{
    Ifx_UReg_32Bit CT:16;             /**< \brief [15:0] Cycle Time - CT (rh) */
    Ifx_UReg_32Bit CC:6;              /**< \brief [21:16] Cycle Count - CC (rh) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_CAN_N_TT_CTC_Bits;

/** \brief TT Global Time Preset ${i} */
typedef struct _Ifx_CAN_N_TT_GTP_Bits
{
    Ifx_UReg_32Bit TP:16;             /**< \brief [15:0] Time Preset - TP (rwh) */
    Ifx_UReg_32Bit CTP:16;            /**< \brief [31:16] Cycle Time Target Phase - CTP (rwh) */
} Ifx_CAN_N_TT_GTP_Bits;

/** \brief TT Interrupt Enable ${i} */
typedef struct _Ifx_CAN_N_TT_IE_Bits
{
    Ifx_UReg_32Bit SBCE:1;            /**< \brief [0:0] Start of Basic Cycle Interrupt Enable - SBCE (rw) */
    Ifx_UReg_32Bit SMCE:1;            /**< \brief [1:1] Start of Matrix Cycle Interrupt Enable - SMCE (rw) */
    Ifx_UReg_32Bit CSME:1;            /**< \brief [2:2] Change of Synchronization Mode Interrupt Enable - CSME (rw) */
    Ifx_UReg_32Bit SOGE:1;            /**< \brief [3:3] Start of Gap Interrupt Enable - SOGE (rw) */
    Ifx_UReg_32Bit RTMIE:1;           /**< \brief [4:4] Register Time Mark Interrupt Enable - RTMIE (rw) */
    Ifx_UReg_32Bit TTMIE:1;           /**< \brief [5:5] Trigger Time Mark Event Internal Interrupt Enable - TTMIE (rw) */
    Ifx_UReg_32Bit SWEE:1;            /**< \brief [6:6] Stop Watch Polarity Interrupt Enable - SWEE (rw) */
    Ifx_UReg_32Bit GTWE:1;            /**< \brief [7:7] Global Time Wrap Interrupt Enable - GTWE (rw) */
    Ifx_UReg_32Bit GTDE:1;            /**< \brief [8:8] Global Time Discontinuity Interrupt Enable - GTDE (rw) */
    Ifx_UReg_32Bit GTEE:1;            /**< \brief [9:9] Global Time Error Interrupt Enable - GTEE (rw) */
    Ifx_UReg_32Bit TXUE:1;            /**< \brief [10:10] Tx Count Underflow Interrupt Enable - TXUE (rw) */
    Ifx_UReg_32Bit TXOE:1;            /**< \brief [11:11] Tx Count Overflow Interrupt Enable - TXOE (rw) */
    Ifx_UReg_32Bit SE1E:1;            /**< \brief [12:12] Scheduling Error 1 Interrupt Enable - SE1E (rw) */
    Ifx_UReg_32Bit SE2E:1;            /**< \brief [13:13] Scheduling Error 2 Interrupt Enable - SE2E (rw) */
    Ifx_UReg_32Bit ELCE:1;            /**< \brief [14:14] Change Error Level Interrupt Enable - ELCE (rw) */
    Ifx_UReg_32Bit IWTE:1;            /**< \brief [15:15] Initialization Watch Trigger Interrupt Enable - IWTE (rw) */
    Ifx_UReg_32Bit WTE:1;             /**< \brief [16:16] Watch Trigger Interrupt Enable - WTE (rw) */
    Ifx_UReg_32Bit AWE:1;             /**< \brief [17:17] Application Watchdog Interrupt Enable - AWE (rw) */
    Ifx_UReg_32Bit CERE:1;            /**< \brief [18:18] Configuration Error Interrupt Enable - CERE (rw) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_CAN_N_TT_IE_Bits;

/** \brief TT Interrupt Register ${i} */
typedef struct _Ifx_CAN_N_TT_IR_Bits
{
    Ifx_UReg_32Bit SBC:1;             /**< \brief [0:0] Start of Basic Cycle - SBC (rwh) */
    Ifx_UReg_32Bit SMC:1;             /**< \brief [1:1] Start of Matrix Cycle - SMC (rwh) */
    Ifx_UReg_32Bit CSM:1;             /**< \brief [2:2] Change of Synchronization Mode - CSM (rwh) */
    Ifx_UReg_32Bit SOG:1;             /**< \brief [3:3] Start of Gap - SOG (rwh) */
    Ifx_UReg_32Bit RTMI:1;            /**< \brief [4:4] Register Time Mark Interrupt - RTMI (rwh) */
    Ifx_UReg_32Bit TTMI:1;            /**< \brief [5:5] Trigger Time Mark Event Internal - TTMI (rwh) */
    Ifx_UReg_32Bit SWE:1;             /**< \brief [6:6] Stop Watch Polarity - SWE (rwh) */
    Ifx_UReg_32Bit GTW:1;             /**< \brief [7:7] Global Time Wrap - GTW (rwh) */
    Ifx_UReg_32Bit GTD:1;             /**< \brief [8:8] Global Time Discontinuity - GTD (rwh) */
    Ifx_UReg_32Bit GTE:1;             /**< \brief [9:9] Global Time Error - GTE (rwh) */
    Ifx_UReg_32Bit TXU:1;             /**< \brief [10:10] Tx Count Underflow - TXU (rwh) */
    Ifx_UReg_32Bit TXO:1;             /**< \brief [11:11] Tx Count Overflow - TXO (rwh) */
    Ifx_UReg_32Bit SE1:1;             /**< \brief [12:12] Scheduling Error 1 - SE1 (rwh) */
    Ifx_UReg_32Bit SE2:1;             /**< \brief [13:13] Scheduling Error 2 - SE2 (rwh) */
    Ifx_UReg_32Bit ELC:1;             /**< \brief [14:14] Error Level Changed - ELC (rwh) */
    Ifx_UReg_32Bit IWT:1;             /**< \brief [15:15] Initialization Watch Trigger - IWT (rwh) */
    Ifx_UReg_32Bit WT:1;              /**< \brief [16:16] Watch Trigger - WT (rwh) */
    Ifx_UReg_32Bit AW:1;              /**< \brief [17:17] Application Watchdog - AW (rwh) */
    Ifx_UReg_32Bit CER:1;             /**< \brief [18:18] Configuration Error - CER (rwh) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_CAN_N_TT_IR_Bits;

/** \brief TT Local & Global Time ${i} */
typedef struct _Ifx_CAN_N_TT_LGT_Bits
{
    Ifx_UReg_32Bit LT:16;             /**< \brief [15:0] Local Time - LT (rh) */
    Ifx_UReg_32Bit GT:16;             /**< \brief [31:16] Global Time - GT (rh) */
} Ifx_CAN_N_TT_LGT_Bits;

/** \brief TT Matrix Limits ${i} */
typedef struct _Ifx_CAN_N_TT_MLM_Bits
{
    Ifx_UReg_32Bit CCM:6;             /**< \brief [5:0] Cycle Count Max - CCM (rw) */
    Ifx_UReg_32Bit CSS:2;             /**< \brief [7:6] Cycle Start Synchronization - CSS (rw) */
    Ifx_UReg_32Bit TXEW:4;            /**< \brief [11:8] Tx Enable Window - TXEW (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit ENTT:12;           /**< \brief [27:16] Expected Number of Tx Triggers - ENTT (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_CAN_N_TT_MLM_Bits;

/** \brief TT Operation Configuration ${i} */
typedef struct _Ifx_CAN_N_TT_OCF_Bits
{
    Ifx_UReg_32Bit OM:2;              /**< \brief [1:0] Operation Mode - OM (rw) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit GEN:1;             /**< \brief [3:3] Gap Enable - GEN (rw) */
    Ifx_UReg_32Bit TM:1;              /**< \brief [4:4] Time Master - TM (rw) */
    Ifx_UReg_32Bit LDSDL:3;           /**< \brief [7:5] LD of Synchronization Deviation Limit - LDSDL (rw) */
    Ifx_UReg_32Bit IRTO:7;            /**< \brief [14:8] Initial Reference Trigger Offset - IRTO (rw) */
    Ifx_UReg_32Bit EECS:1;            /**< \brief [15:15] Enable External Clock Synchronization - EECS (rw) */
    Ifx_UReg_32Bit AWL:8;             /**< \brief [23:16] Application Watchdog Limit - AWL (rw) */
    Ifx_UReg_32Bit EGTF:1;            /**< \brief [24:24] Enable Global Time Filtering - EGTF (rw) */
    Ifx_UReg_32Bit ECC:1;             /**< \brief [25:25] Enable Clock Calibration - ECC (rw) */
    Ifx_UReg_32Bit EVTP:1;            /**< \brief [26:26] Event Trigger Polarity - EVTP (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_CAN_N_TT_OCF_Bits;

/** \brief TT Operation Control ${i} */
typedef struct _Ifx_CAN_N_TT_OCN_Bits
{
    Ifx_UReg_32Bit SGT:1;             /**< \brief [0:0] Set Global time - SGT (rwh) */
    Ifx_UReg_32Bit ECS:1;             /**< \brief [1:1] External Clock Synchronization - ECS (rwh) */
    Ifx_UReg_32Bit SWP:1;             /**< \brief [2:2] Stop Watch Polarity - SWP (rw) */
    Ifx_UReg_32Bit SWS:2;             /**< \brief [4:3] Stop Watch Source - SWS (rw) */
    Ifx_UReg_32Bit RTIE:1;            /**< \brief [5:5] Register Time Mark Interrupt Pulse Enable - RTIE (rw) */
    Ifx_UReg_32Bit TMC:2;             /**< \brief [7:6] Register Time Mark Compare - TMC (rw) */
    Ifx_UReg_32Bit TTIE:1;            /**< \brief [8:8] Trigger Time Mark Interrupt Pulse Enable - TTIE (rw) */
    Ifx_UReg_32Bit GCS:1;             /**< \brief [9:9] Gap Control Select - GCS (rw) */
    Ifx_UReg_32Bit FGP:1;             /**< \brief [10:10] Finish Gap - FGP (rwh) */
    Ifx_UReg_32Bit TMG:1;             /**< \brief [11:11] Time Mark Gap - TMG (rw) */
    Ifx_UReg_32Bit NIG:1;             /**< \brief [12:12] Next is Gap - NIG (rwh) */
    Ifx_UReg_32Bit ESCN:1;            /**< \brief [13:13] External Synchronization Control - ESCN (rw) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit LCKC:1;            /**< \brief [15:15] TT Operation Control Register Locked - LCKC (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CAN_N_TT_OCN_Bits;

/** \brief TT Operation Status ${i} */
typedef struct _Ifx_CAN_N_TT_OST_Bits
{
    Ifx_UReg_32Bit EL:2;              /**< \brief [1:0] Error Level - EL (rh) */
    Ifx_UReg_32Bit MS:2;              /**< \brief [3:2] Master State - MS (rh) */
    Ifx_UReg_32Bit SYS:2;             /**< \brief [5:4] Synchronization State - SYS (rh) */
    Ifx_UReg_32Bit QGTP:1;            /**< \brief [6:6] Quality of Global Time Phase - QGTP (rh) */
    Ifx_UReg_32Bit QCS:1;             /**< \brief [7:7] Quality of Clock Speed - QCS (rh) */
    Ifx_UReg_32Bit RTO:8;             /**< \brief [15:8] Reference Trigger Offset - RTO (rh) */
    Ifx_UReg_32Bit reserved_16:6;     /**< \brief [21:16] \internal Reserved */
    Ifx_UReg_32Bit WGTD:1;            /**< \brief [22:22] Wait for Global Time Discontinuity - WGTD (rh) */
    Ifx_UReg_32Bit GFI:1;             /**< \brief [23:23] Gap Finished Indicator - GFI (rh) */
    Ifx_UReg_32Bit TMP:3;             /**< \brief [26:24] Time Master Priority - TMP (rh) */
    Ifx_UReg_32Bit GSI:1;             /**< \brief [27:27] Gap Started Indicator - GSI (rh) */
    Ifx_UReg_32Bit WFE:1;             /**< \brief [28:28] Wait for Event - WFE (rh) */
    Ifx_UReg_32Bit AWE:1;             /**< \brief [29:29] Application Watchdog Event - AWE (rh) */
    Ifx_UReg_32Bit WECS:1;            /**< \brief [30:30] Wait for External Clock Synchronization - WECS (rh) */
    Ifx_UReg_32Bit SPL:1;             /**< \brief [31:31] Schedule Phase Lock - SPL (rh) */
} Ifx_CAN_N_TT_OST_Bits;

/** \brief TT Reference Message Configuration ${i} */
typedef struct _Ifx_CAN_N_TT_RMC_Bits
{
    Ifx_UReg_32Bit RID:29;            /**< \brief [28:0] Reference Identifier - RID (rw) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit XTD:1;             /**< \brief [30:30] Extended Identifier - XTD (rw) */
    Ifx_UReg_32Bit RMPS:1;            /**< \brief [31:31] Reference Message Payload Select - RMPS (rw) */
} Ifx_CAN_N_TT_RMC_Bits;

/** \brief TT Trigger Memory Configuration ${i} */
typedef struct _Ifx_CAN_N_TT_TMC_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit TMSA:14;           /**< \brief [15:2] Trigger Memory Start Address - TMSA (rw) */
    Ifx_UReg_32Bit TME:7;             /**< \brief [22:16] Trigger Memory Elements - TME (rw) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_CAN_N_TT_TMC_Bits;

/** \brief TT Time Mark ${i} */
typedef struct _Ifx_CAN_N_TT_TMK_Bits
{
    Ifx_UReg_32Bit TM:16;             /**< \brief [15:0] Time Mark - TM (rw) */
    Ifx_UReg_32Bit TICC:7;            /**< \brief [22:16] Time Mark Cycle Code - TICC (rw) */
    Ifx_UReg_32Bit reserved_23:8;     /**< \brief [30:23] \internal Reserved */
    Ifx_UReg_32Bit LCKM:1;            /**< \brief [31:31] TT Time Mark Register Locked - LCKM (rh) */
} Ifx_CAN_N_TT_TMK_Bits;

/** \brief TUR Configuration ${i} */
typedef struct _Ifx_CAN_N_TT_TURCF_Bits
{
    Ifx_UReg_32Bit NCL:16;            /**< \brief [15:0] Numerator Configuration Low - NCL (rw) */
    Ifx_UReg_32Bit DC:14;             /**< \brief [29:16] Denominator Configuration - DC (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit ELT:1;             /**< \brief [31:31] Enable Local Time - ELT (rw) */
} Ifx_CAN_N_TT_TURCF_Bits;

/** \brief TUR Numerator Actual ${i} */
typedef struct _Ifx_CAN_N_TT_TURNA_Bits
{
    Ifx_UReg_32Bit NAV:18;            /**< \brief [17:0] Numerator Actual Value - NAV (rh) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_CAN_N_TT_TURNA_Bits;

/** \brief Tx Buffer Add Request ${i} */
typedef struct _Ifx_CAN_N_TX_BAR_Bits
{
    Ifx_UReg_32Bit AR0:1;             /**< \brief [0:0] Add Request Tx Buffer 0 - AR (rwh) */
    Ifx_UReg_32Bit AR1:1;             /**< \brief [1:1] Add Request Tx Buffer 1 - AR (rwh) */
    Ifx_UReg_32Bit AR2:1;             /**< \brief [2:2] Add Request Tx Buffer 2 - AR (rwh) */
    Ifx_UReg_32Bit AR3:1;             /**< \brief [3:3] Add Request Tx Buffer 3 - AR (rwh) */
    Ifx_UReg_32Bit AR4:1;             /**< \brief [4:4] Add Request Tx Buffer 4 - AR (rwh) */
    Ifx_UReg_32Bit AR5:1;             /**< \brief [5:5] Add Request Tx Buffer 5 - AR (rwh) */
    Ifx_UReg_32Bit AR6:1;             /**< \brief [6:6] Add Request Tx Buffer 6 - AR (rwh) */
    Ifx_UReg_32Bit AR7:1;             /**< \brief [7:7] Add Request Tx Buffer 7 - AR (rwh) */
    Ifx_UReg_32Bit AR8:1;             /**< \brief [8:8] Add Request Tx Buffer 8 - AR (rwh) */
    Ifx_UReg_32Bit AR9:1;             /**< \brief [9:9] Add Request Tx Buffer 9 - AR (rwh) */
    Ifx_UReg_32Bit AR10:1;            /**< \brief [10:10] Add Request Tx Buffer 10 - AR (rwh) */
    Ifx_UReg_32Bit AR11:1;            /**< \brief [11:11] Add Request Tx Buffer 11 - AR (rwh) */
    Ifx_UReg_32Bit AR12:1;            /**< \brief [12:12] Add Request Tx Buffer 12 - AR (rwh) */
    Ifx_UReg_32Bit AR13:1;            /**< \brief [13:13] Add Request Tx Buffer 13 - AR (rwh) */
    Ifx_UReg_32Bit AR14:1;            /**< \brief [14:14] Add Request Tx Buffer 14 - AR (rwh) */
    Ifx_UReg_32Bit AR15:1;            /**< \brief [15:15] Add Request Tx Buffer 15 - AR (rwh) */
    Ifx_UReg_32Bit AR16:1;            /**< \brief [16:16] Add Request Tx Buffer 16 - AR (rwh) */
    Ifx_UReg_32Bit AR17:1;            /**< \brief [17:17] Add Request Tx Buffer 17 - AR (rwh) */
    Ifx_UReg_32Bit AR18:1;            /**< \brief [18:18] Add Request Tx Buffer 18 - AR (rwh) */
    Ifx_UReg_32Bit AR19:1;            /**< \brief [19:19] Add Request Tx Buffer 19 - AR (rwh) */
    Ifx_UReg_32Bit AR20:1;            /**< \brief [20:20] Add Request Tx Buffer 20 - AR (rwh) */
    Ifx_UReg_32Bit AR21:1;            /**< \brief [21:21] Add Request Tx Buffer 21 - AR (rwh) */
    Ifx_UReg_32Bit AR22:1;            /**< \brief [22:22] Add Request Tx Buffer 22 - AR (rwh) */
    Ifx_UReg_32Bit AR23:1;            /**< \brief [23:23] Add Request Tx Buffer 23 - AR (rwh) */
    Ifx_UReg_32Bit AR24:1;            /**< \brief [24:24] Add Request Tx Buffer 24 - AR (rwh) */
    Ifx_UReg_32Bit AR25:1;            /**< \brief [25:25] Add Request Tx Buffer 25 - AR (rwh) */
    Ifx_UReg_32Bit AR26:1;            /**< \brief [26:26] Add Request Tx Buffer 26 - AR (rwh) */
    Ifx_UReg_32Bit AR27:1;            /**< \brief [27:27] Add Request Tx Buffer 27 - AR (rwh) */
    Ifx_UReg_32Bit AR28:1;            /**< \brief [28:28] Add Request Tx Buffer 28 - AR (rwh) */
    Ifx_UReg_32Bit AR29:1;            /**< \brief [29:29] Add Request Tx Buffer 29 - AR (rwh) */
    Ifx_UReg_32Bit AR30:1;            /**< \brief [30:30] Add Request Tx Buffer 30 - AR (rwh) */
    Ifx_UReg_32Bit AR31:1;            /**< \brief [31:31] Add Request Tx Buffer 31 - AR (rwh) */
} Ifx_CAN_N_TX_BAR_Bits;

/** \brief Tx Buffer Configuration ${i} */
typedef struct _Ifx_CAN_N_TX_BC_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit TBSA:14;           /**< \brief [15:2] Tx Buffers Start Address - TBSA (rw) */
    Ifx_UReg_32Bit NDTB:6;            /**< \brief [21:16] Number of Dedicated Transmit Buffers - NDTB (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit TFQS:6;            /**< \brief [29:24] Transmit FIFO/Queue Size - TFQS (rw) */
    Ifx_UReg_32Bit TFQM:1;            /**< \brief [30:30] Tx FIFO/Queue Mode - TFQM (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_CAN_N_TX_BC_Bits;

/** \brief Tx Buffer Cancellation Finished ${i} */
typedef struct _Ifx_CAN_N_TX_BCF_Bits
{
    Ifx_UReg_32Bit CF0:1;             /**< \brief [0:0] Cancellation Finished Tx Buffer 0 - CF (rh) */
    Ifx_UReg_32Bit CF1:1;             /**< \brief [1:1] Cancellation Finished Tx Buffer 1 - CF (rh) */
    Ifx_UReg_32Bit CF2:1;             /**< \brief [2:2] Cancellation Finished Tx Buffer 2 - CF (rh) */
    Ifx_UReg_32Bit CF3:1;             /**< \brief [3:3] Cancellation Finished Tx Buffer 3 - CF (rh) */
    Ifx_UReg_32Bit CF4:1;             /**< \brief [4:4] Cancellation Finished Tx Buffer 4 - CF (rh) */
    Ifx_UReg_32Bit CF5:1;             /**< \brief [5:5] Cancellation Finished Tx Buffer 5 - CF (rh) */
    Ifx_UReg_32Bit CF6:1;             /**< \brief [6:6] Cancellation Finished Tx Buffer 6 - CF (rh) */
    Ifx_UReg_32Bit CF7:1;             /**< \brief [7:7] Cancellation Finished Tx Buffer 7 - CF (rh) */
    Ifx_UReg_32Bit CF8:1;             /**< \brief [8:8] Cancellation Finished Tx Buffer 8 - CF (rh) */
    Ifx_UReg_32Bit CF9:1;             /**< \brief [9:9] Cancellation Finished Tx Buffer 9 - CF (rh) */
    Ifx_UReg_32Bit CF10:1;            /**< \brief [10:10] Cancellation Finished Tx Buffer 10 - CF (rh) */
    Ifx_UReg_32Bit CF11:1;            /**< \brief [11:11] Cancellation Finished Tx Buffer 11 - CF (rh) */
    Ifx_UReg_32Bit CF12:1;            /**< \brief [12:12] Cancellation Finished Tx Buffer 12 - CF (rh) */
    Ifx_UReg_32Bit CF13:1;            /**< \brief [13:13] Cancellation Finished Tx Buffer 13 - CF (rh) */
    Ifx_UReg_32Bit CF14:1;            /**< \brief [14:14] Cancellation Finished Tx Buffer 14 - CF (rh) */
    Ifx_UReg_32Bit CF15:1;            /**< \brief [15:15] Cancellation Finished Tx Buffer 15 - CF (rh) */
    Ifx_UReg_32Bit CF16:1;            /**< \brief [16:16] Cancellation Finished Tx Buffer 16 - CF (rh) */
    Ifx_UReg_32Bit CF17:1;            /**< \brief [17:17] Cancellation Finished Tx Buffer 17 - CF (rh) */
    Ifx_UReg_32Bit CF18:1;            /**< \brief [18:18] Cancellation Finished Tx Buffer 18 - CF (rh) */
    Ifx_UReg_32Bit CF19:1;            /**< \brief [19:19] Cancellation Finished Tx Buffer 19 - CF (rh) */
    Ifx_UReg_32Bit CF20:1;            /**< \brief [20:20] Cancellation Finished Tx Buffer 20 - CF (rh) */
    Ifx_UReg_32Bit CF21:1;            /**< \brief [21:21] Cancellation Finished Tx Buffer 21 - CF (rh) */
    Ifx_UReg_32Bit CF22:1;            /**< \brief [22:22] Cancellation Finished Tx Buffer 22 - CF (rh) */
    Ifx_UReg_32Bit CF23:1;            /**< \brief [23:23] Cancellation Finished Tx Buffer 23 - CF (rh) */
    Ifx_UReg_32Bit CF24:1;            /**< \brief [24:24] Cancellation Finished Tx Buffer 24 - CF (rh) */
    Ifx_UReg_32Bit CF25:1;            /**< \brief [25:25] Cancellation Finished Tx Buffer 25 - CF (rh) */
    Ifx_UReg_32Bit CF26:1;            /**< \brief [26:26] Cancellation Finished Tx Buffer 26 - CF (rh) */
    Ifx_UReg_32Bit CF27:1;            /**< \brief [27:27] Cancellation Finished Tx Buffer 27 - CF (rh) */
    Ifx_UReg_32Bit CF28:1;            /**< \brief [28:28] Cancellation Finished Tx Buffer 28 - CF (rh) */
    Ifx_UReg_32Bit CF29:1;            /**< \brief [29:29] Cancellation Finished Tx Buffer 29 - CF (rh) */
    Ifx_UReg_32Bit CF30:1;            /**< \brief [30:30] Cancellation Finished Tx Buffer 30 - CF (rh) */
    Ifx_UReg_32Bit CF31:1;            /**< \brief [31:31] Cancellation Finished Tx Buffer 31 - CF (rh) */
} Ifx_CAN_N_TX_BCF_Bits;

/** \brief Tx Buffer Cancellation Finished Interrupt Enable ${i} */
typedef struct _Ifx_CAN_N_TX_BCIE_Bits
{
    Ifx_UReg_32Bit CFIE0:1;           /**< \brief [0:0] Cancellation Finished Interrupt Enable Tx Buffer 0 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE1:1;           /**< \brief [1:1] Cancellation Finished Interrupt Enable Tx Buffer 1 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE2:1;           /**< \brief [2:2] Cancellation Finished Interrupt Enable Tx Buffer 2 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE3:1;           /**< \brief [3:3] Cancellation Finished Interrupt Enable Tx Buffer 3 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE4:1;           /**< \brief [4:4] Cancellation Finished Interrupt Enable Tx Buffer 4 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE5:1;           /**< \brief [5:5] Cancellation Finished Interrupt Enable Tx Buffer 5 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE6:1;           /**< \brief [6:6] Cancellation Finished Interrupt Enable Tx Buffer 6 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE7:1;           /**< \brief [7:7] Cancellation Finished Interrupt Enable Tx Buffer 7 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE8:1;           /**< \brief [8:8] Cancellation Finished Interrupt Enable Tx Buffer 8 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE9:1;           /**< \brief [9:9] Cancellation Finished Interrupt Enable Tx Buffer 9 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE10:1;          /**< \brief [10:10] Cancellation Finished Interrupt Enable Tx Buffer 10 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE11:1;          /**< \brief [11:11] Cancellation Finished Interrupt Enable Tx Buffer 11 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE12:1;          /**< \brief [12:12] Cancellation Finished Interrupt Enable Tx Buffer 12 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE13:1;          /**< \brief [13:13] Cancellation Finished Interrupt Enable Tx Buffer 13 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE14:1;          /**< \brief [14:14] Cancellation Finished Interrupt Enable Tx Buffer 14 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE15:1;          /**< \brief [15:15] Cancellation Finished Interrupt Enable Tx Buffer 15 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE16:1;          /**< \brief [16:16] Cancellation Finished Interrupt Enable Tx Buffer 16 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE17:1;          /**< \brief [17:17] Cancellation Finished Interrupt Enable Tx Buffer 17 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE18:1;          /**< \brief [18:18] Cancellation Finished Interrupt Enable Tx Buffer 18 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE19:1;          /**< \brief [19:19] Cancellation Finished Interrupt Enable Tx Buffer 19 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE20:1;          /**< \brief [20:20] Cancellation Finished Interrupt Enable Tx Buffer 20 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE21:1;          /**< \brief [21:21] Cancellation Finished Interrupt Enable Tx Buffer 21 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE22:1;          /**< \brief [22:22] Cancellation Finished Interrupt Enable Tx Buffer 22 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE23:1;          /**< \brief [23:23] Cancellation Finished Interrupt Enable Tx Buffer 23 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE24:1;          /**< \brief [24:24] Cancellation Finished Interrupt Enable Tx Buffer 24 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE25:1;          /**< \brief [25:25] Cancellation Finished Interrupt Enable Tx Buffer 25 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE26:1;          /**< \brief [26:26] Cancellation Finished Interrupt Enable Tx Buffer 26 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE27:1;          /**< \brief [27:27] Cancellation Finished Interrupt Enable Tx Buffer 27 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE28:1;          /**< \brief [28:28] Cancellation Finished Interrupt Enable Tx Buffer 28 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE29:1;          /**< \brief [29:29] Cancellation Finished Interrupt Enable Tx Buffer 29 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE30:1;          /**< \brief [30:30] Cancellation Finished Interrupt Enable Tx Buffer 30 - CFIE (rw) */
    Ifx_UReg_32Bit CFIE31:1;          /**< \brief [31:31] Cancellation Finished Interrupt Enable Tx Buffer 31 - CFIE (rw) */
} Ifx_CAN_N_TX_BCIE_Bits;

/** \brief Tx Buffer Cancellation Request ${i} */
typedef struct _Ifx_CAN_N_TX_BCR_Bits
{
    Ifx_UReg_32Bit CR0:1;             /**< \brief [0:0] Cancellation Request Tx Buffer 0 - CR (rwh) */
    Ifx_UReg_32Bit CR1:1;             /**< \brief [1:1] Cancellation Request Tx Buffer 1 - CR (rwh) */
    Ifx_UReg_32Bit CR2:1;             /**< \brief [2:2] Cancellation Request Tx Buffer 2 - CR (rwh) */
    Ifx_UReg_32Bit CR3:1;             /**< \brief [3:3] Cancellation Request Tx Buffer 3 - CR (rwh) */
    Ifx_UReg_32Bit CR4:1;             /**< \brief [4:4] Cancellation Request Tx Buffer 4 - CR (rwh) */
    Ifx_UReg_32Bit CR5:1;             /**< \brief [5:5] Cancellation Request Tx Buffer 5 - CR (rwh) */
    Ifx_UReg_32Bit CR6:1;             /**< \brief [6:6] Cancellation Request Tx Buffer 6 - CR (rwh) */
    Ifx_UReg_32Bit CR7:1;             /**< \brief [7:7] Cancellation Request Tx Buffer 7 - CR (rwh) */
    Ifx_UReg_32Bit CR8:1;             /**< \brief [8:8] Cancellation Request Tx Buffer 8 - CR (rwh) */
    Ifx_UReg_32Bit CR9:1;             /**< \brief [9:9] Cancellation Request Tx Buffer 9 - CR (rwh) */
    Ifx_UReg_32Bit CR10:1;            /**< \brief [10:10] Cancellation Request Tx Buffer 10 - CR (rwh) */
    Ifx_UReg_32Bit CR11:1;            /**< \brief [11:11] Cancellation Request Tx Buffer 11 - CR (rwh) */
    Ifx_UReg_32Bit CR12:1;            /**< \brief [12:12] Cancellation Request Tx Buffer 12 - CR (rwh) */
    Ifx_UReg_32Bit CR13:1;            /**< \brief [13:13] Cancellation Request Tx Buffer 13 - CR (rwh) */
    Ifx_UReg_32Bit CR14:1;            /**< \brief [14:14] Cancellation Request Tx Buffer 14 - CR (rwh) */
    Ifx_UReg_32Bit CR15:1;            /**< \brief [15:15] Cancellation Request Tx Buffer 15 - CR (rwh) */
    Ifx_UReg_32Bit CR16:1;            /**< \brief [16:16] Cancellation Request Tx Buffer 16 - CR (rwh) */
    Ifx_UReg_32Bit CR17:1;            /**< \brief [17:17] Cancellation Request Tx Buffer 17 - CR (rwh) */
    Ifx_UReg_32Bit CR18:1;            /**< \brief [18:18] Cancellation Request Tx Buffer 18 - CR (rwh) */
    Ifx_UReg_32Bit CR19:1;            /**< \brief [19:19] Cancellation Request Tx Buffer 19 - CR (rwh) */
    Ifx_UReg_32Bit CR20:1;            /**< \brief [20:20] Cancellation Request Tx Buffer 20 - CR (rwh) */
    Ifx_UReg_32Bit CR21:1;            /**< \brief [21:21] Cancellation Request Tx Buffer 21 - CR (rwh) */
    Ifx_UReg_32Bit CR22:1;            /**< \brief [22:22] Cancellation Request Tx Buffer 22 - CR (rwh) */
    Ifx_UReg_32Bit CR23:1;            /**< \brief [23:23] Cancellation Request Tx Buffer 23 - CR (rwh) */
    Ifx_UReg_32Bit CR24:1;            /**< \brief [24:24] Cancellation Request Tx Buffer 24 - CR (rwh) */
    Ifx_UReg_32Bit CR25:1;            /**< \brief [25:25] Cancellation Request Tx Buffer 25 - CR (rwh) */
    Ifx_UReg_32Bit CR26:1;            /**< \brief [26:26] Cancellation Request Tx Buffer 26 - CR (rwh) */
    Ifx_UReg_32Bit CR27:1;            /**< \brief [27:27] Cancellation Request Tx Buffer 27 - CR (rwh) */
    Ifx_UReg_32Bit CR28:1;            /**< \brief [28:28] Cancellation Request Tx Buffer 28 - CR (rwh) */
    Ifx_UReg_32Bit CR29:1;            /**< \brief [29:29] Cancellation Request Tx Buffer 29 - CR (rwh) */
    Ifx_UReg_32Bit CR30:1;            /**< \brief [30:30] Cancellation Request Tx Buffer 30 - CR (rwh) */
    Ifx_UReg_32Bit CR31:1;            /**< \brief [31:31] Cancellation Request Tx Buffer 31 - CR (rwh) */
} Ifx_CAN_N_TX_BCR_Bits;

/** \brief Tx Buffer Request Pending ${i} */
typedef struct _Ifx_CAN_N_TX_BRP_Bits
{
    Ifx_UReg_32Bit TRP0:1;            /**< \brief [0:0] Transmission Request Pending Tx  Buffer 0 - TRP (rh) */
    Ifx_UReg_32Bit TRP1:1;            /**< \brief [1:1] Transmission Request Pending Tx  Buffer 1 - TRP (rh) */
    Ifx_UReg_32Bit TRP2:1;            /**< \brief [2:2] Transmission Request Pending Tx  Buffer 2 - TRP (rh) */
    Ifx_UReg_32Bit TRP3:1;            /**< \brief [3:3] Transmission Request Pending Tx  Buffer 3 - TRP (rh) */
    Ifx_UReg_32Bit TRP4:1;            /**< \brief [4:4] Transmission Request Pending Tx  Buffer 4 - TRP (rh) */
    Ifx_UReg_32Bit TRP5:1;            /**< \brief [5:5] Transmission Request Pending Tx  Buffer 5 - TRP (rh) */
    Ifx_UReg_32Bit TRP6:1;            /**< \brief [6:6] Transmission Request Pending Tx  Buffer 6 - TRP (rh) */
    Ifx_UReg_32Bit TRP7:1;            /**< \brief [7:7] Transmission Request Pending Tx  Buffer 7 - TRP (rh) */
    Ifx_UReg_32Bit TRP8:1;            /**< \brief [8:8] Transmission Request Pending Tx  Buffer 8 - TRP (rh) */
    Ifx_UReg_32Bit TRP9:1;            /**< \brief [9:9] Transmission Request Pending Tx  Buffer 9 - TRP (rh) */
    Ifx_UReg_32Bit TRP10:1;           /**< \brief [10:10] Transmission Request Pending Tx  Buffer 10 - TRP (rh) */
    Ifx_UReg_32Bit TRP11:1;           /**< \brief [11:11] Transmission Request Pending Tx  Buffer 11 - TRP (rh) */
    Ifx_UReg_32Bit TRP12:1;           /**< \brief [12:12] Transmission Request Pending Tx  Buffer 12 - TRP (rh) */
    Ifx_UReg_32Bit TRP13:1;           /**< \brief [13:13] Transmission Request Pending Tx  Buffer 13 - TRP (rh) */
    Ifx_UReg_32Bit TRP14:1;           /**< \brief [14:14] Transmission Request Pending Tx  Buffer 14 - TRP (rh) */
    Ifx_UReg_32Bit TRP15:1;           /**< \brief [15:15] Transmission Request Pending Tx  Buffer 15 - TRP (rh) */
    Ifx_UReg_32Bit TRP16:1;           /**< \brief [16:16] Transmission Request Pending Tx  Buffer 16 - TRP (rh) */
    Ifx_UReg_32Bit TRP17:1;           /**< \brief [17:17] Transmission Request Pending Tx  Buffer 17 - TRP (rh) */
    Ifx_UReg_32Bit TRP18:1;           /**< \brief [18:18] Transmission Request Pending Tx  Buffer 18 - TRP (rh) */
    Ifx_UReg_32Bit TRP19:1;           /**< \brief [19:19] Transmission Request Pending Tx  Buffer 19 - TRP (rh) */
    Ifx_UReg_32Bit TRP20:1;           /**< \brief [20:20] Transmission Request Pending Tx  Buffer 20 - TRP (rh) */
    Ifx_UReg_32Bit TRP21:1;           /**< \brief [21:21] Transmission Request Pending Tx  Buffer 21 - TRP (rh) */
    Ifx_UReg_32Bit TRP22:1;           /**< \brief [22:22] Transmission Request Pending Tx  Buffer 22 - TRP (rh) */
    Ifx_UReg_32Bit TRP23:1;           /**< \brief [23:23] Transmission Request Pending Tx  Buffer 23 - TRP (rh) */
    Ifx_UReg_32Bit TRP24:1;           /**< \brief [24:24] Transmission Request Pending Tx  Buffer 24 - TRP (rh) */
    Ifx_UReg_32Bit TRP25:1;           /**< \brief [25:25] Transmission Request Pending Tx  Buffer 25 - TRP (rh) */
    Ifx_UReg_32Bit TRP26:1;           /**< \brief [26:26] Transmission Request Pending Tx  Buffer 26 - TRP (rh) */
    Ifx_UReg_32Bit TRP27:1;           /**< \brief [27:27] Transmission Request Pending Tx  Buffer 27 - TRP (rh) */
    Ifx_UReg_32Bit TRP28:1;           /**< \brief [28:28] Transmission Request Pending Tx  Buffer 28 - TRP (rh) */
    Ifx_UReg_32Bit TRP29:1;           /**< \brief [29:29] Transmission Request Pending Tx  Buffer 29 - TRP (rh) */
    Ifx_UReg_32Bit TRP30:1;           /**< \brief [30:30] Transmission Request Pending Tx  Buffer 30 - TRP (rh) */
    Ifx_UReg_32Bit TRP31:1;           /**< \brief [31:31] Transmission Request Pending Tx  Buffer 31 - TRP (rh) */
} Ifx_CAN_N_TX_BRP_Bits;

/** \brief Tx Buffer Transmission Interrupt Enable ${i} */
typedef struct _Ifx_CAN_N_TX_BTIE_Bits
{
    Ifx_UReg_32Bit TIE0:1;            /**< \brief [0:0] Transmission Interrupt Enable Tx Buffer 0 - TIE (rw) */
    Ifx_UReg_32Bit TIE1:1;            /**< \brief [1:1] Transmission Interrupt Enable Tx Buffer 1 - TIE (rw) */
    Ifx_UReg_32Bit TIE2:1;            /**< \brief [2:2] Transmission Interrupt Enable Tx Buffer 2 - TIE (rw) */
    Ifx_UReg_32Bit TIE3:1;            /**< \brief [3:3] Transmission Interrupt Enable Tx Buffer 3 - TIE (rw) */
    Ifx_UReg_32Bit TIE4:1;            /**< \brief [4:4] Transmission Interrupt Enable Tx Buffer 4 - TIE (rw) */
    Ifx_UReg_32Bit TIE5:1;            /**< \brief [5:5] Transmission Interrupt Enable Tx Buffer 5 - TIE (rw) */
    Ifx_UReg_32Bit TIE6:1;            /**< \brief [6:6] Transmission Interrupt Enable Tx Buffer 6 - TIE (rw) */
    Ifx_UReg_32Bit TIE7:1;            /**< \brief [7:7] Transmission Interrupt Enable Tx Buffer 7 - TIE (rw) */
    Ifx_UReg_32Bit TIE8:1;            /**< \brief [8:8] Transmission Interrupt Enable Tx Buffer 8 - TIE (rw) */
    Ifx_UReg_32Bit TIE9:1;            /**< \brief [9:9] Transmission Interrupt Enable Tx Buffer 9 - TIE (rw) */
    Ifx_UReg_32Bit TIE10:1;           /**< \brief [10:10] Transmission Interrupt Enable Tx Buffer 10 - TIE (rw) */
    Ifx_UReg_32Bit TIE11:1;           /**< \brief [11:11] Transmission Interrupt Enable Tx Buffer 11 - TIE (rw) */
    Ifx_UReg_32Bit TIE12:1;           /**< \brief [12:12] Transmission Interrupt Enable Tx Buffer 12 - TIE (rw) */
    Ifx_UReg_32Bit TIE13:1;           /**< \brief [13:13] Transmission Interrupt Enable Tx Buffer 13 - TIE (rw) */
    Ifx_UReg_32Bit TIE14:1;           /**< \brief [14:14] Transmission Interrupt Enable Tx Buffer 14 - TIE (rw) */
    Ifx_UReg_32Bit TIE15:1;           /**< \brief [15:15] Transmission Interrupt Enable Tx Buffer 15 - TIE (rw) */
    Ifx_UReg_32Bit TIE16:1;           /**< \brief [16:16] Transmission Interrupt Enable Tx Buffer 16 - TIE (rw) */
    Ifx_UReg_32Bit TIE17:1;           /**< \brief [17:17] Transmission Interrupt Enable Tx Buffer 17 - TIE (rw) */
    Ifx_UReg_32Bit TIE18:1;           /**< \brief [18:18] Transmission Interrupt Enable Tx Buffer 18 - TIE (rw) */
    Ifx_UReg_32Bit TIE19:1;           /**< \brief [19:19] Transmission Interrupt Enable Tx Buffer 19 - TIE (rw) */
    Ifx_UReg_32Bit TIE20:1;           /**< \brief [20:20] Transmission Interrupt Enable Tx Buffer 20 - TIE (rw) */
    Ifx_UReg_32Bit TIE21:1;           /**< \brief [21:21] Transmission Interrupt Enable Tx Buffer 21 - TIE (rw) */
    Ifx_UReg_32Bit TIE22:1;           /**< \brief [22:22] Transmission Interrupt Enable Tx Buffer 22 - TIE (rw) */
    Ifx_UReg_32Bit TIE23:1;           /**< \brief [23:23] Transmission Interrupt Enable Tx Buffer 23 - TIE (rw) */
    Ifx_UReg_32Bit TIE24:1;           /**< \brief [24:24] Transmission Interrupt Enable Tx Buffer 24 - TIE (rw) */
    Ifx_UReg_32Bit TIE25:1;           /**< \brief [25:25] Transmission Interrupt Enable Tx Buffer 25 - TIE (rw) */
    Ifx_UReg_32Bit TIE26:1;           /**< \brief [26:26] Transmission Interrupt Enable Tx Buffer 26 - TIE (rw) */
    Ifx_UReg_32Bit TIE27:1;           /**< \brief [27:27] Transmission Interrupt Enable Tx Buffer 27 - TIE (rw) */
    Ifx_UReg_32Bit TIE28:1;           /**< \brief [28:28] Transmission Interrupt Enable Tx Buffer 28 - TIE (rw) */
    Ifx_UReg_32Bit TIE29:1;           /**< \brief [29:29] Transmission Interrupt Enable Tx Buffer 29 - TIE (rw) */
    Ifx_UReg_32Bit TIE30:1;           /**< \brief [30:30] Transmission Interrupt Enable Tx Buffer 30 - TIE (rw) */
    Ifx_UReg_32Bit TIE31:1;           /**< \brief [31:31] Transmission Interrupt Enable Tx Buffer 31 - TIE (rw) */
} Ifx_CAN_N_TX_BTIE_Bits;

/** \brief Tx Buffer Transmission Occurred ${i} */
typedef struct _Ifx_CAN_N_TX_BTO_Bits
{
    Ifx_UReg_32Bit TO0:1;             /**< \brief [0:0] Transmission Occurred Tx Buffer 0 - TO (rh) */
    Ifx_UReg_32Bit TO1:1;             /**< \brief [1:1] Transmission Occurred Tx Buffer 1 - TO (rh) */
    Ifx_UReg_32Bit TO2:1;             /**< \brief [2:2] Transmission Occurred Tx Buffer 2 - TO (rh) */
    Ifx_UReg_32Bit TO3:1;             /**< \brief [3:3] Transmission Occurred Tx Buffer 3 - TO (rh) */
    Ifx_UReg_32Bit TO4:1;             /**< \brief [4:4] Transmission Occurred Tx Buffer 4 - TO (rh) */
    Ifx_UReg_32Bit TO5:1;             /**< \brief [5:5] Transmission Occurred Tx Buffer 5 - TO (rh) */
    Ifx_UReg_32Bit TO6:1;             /**< \brief [6:6] Transmission Occurred Tx Buffer 6 - TO (rh) */
    Ifx_UReg_32Bit TO7:1;             /**< \brief [7:7] Transmission Occurred Tx Buffer 7 - TO (rh) */
    Ifx_UReg_32Bit TO8:1;             /**< \brief [8:8] Transmission Occurred Tx Buffer 8 - TO (rh) */
    Ifx_UReg_32Bit TO9:1;             /**< \brief [9:9] Transmission Occurred Tx Buffer 9 - TO (rh) */
    Ifx_UReg_32Bit TO10:1;            /**< \brief [10:10] Transmission Occurred Tx Buffer 10 - TO (rh) */
    Ifx_UReg_32Bit TO11:1;            /**< \brief [11:11] Transmission Occurred Tx Buffer 11 - TO (rh) */
    Ifx_UReg_32Bit TO12:1;            /**< \brief [12:12] Transmission Occurred Tx Buffer 12 - TO (rh) */
    Ifx_UReg_32Bit TO13:1;            /**< \brief [13:13] Transmission Occurred Tx Buffer 13 - TO (rh) */
    Ifx_UReg_32Bit TO14:1;            /**< \brief [14:14] Transmission Occurred Tx Buffer 14 - TO (rh) */
    Ifx_UReg_32Bit TO15:1;            /**< \brief [15:15] Transmission Occurred Tx Buffer 15 - TO (rh) */
    Ifx_UReg_32Bit TO16:1;            /**< \brief [16:16] Transmission Occurred Tx Buffer 16 - TO (rh) */
    Ifx_UReg_32Bit TO17:1;            /**< \brief [17:17] Transmission Occurred Tx Buffer 17 - TO (rh) */
    Ifx_UReg_32Bit TO18:1;            /**< \brief [18:18] Transmission Occurred Tx Buffer 18 - TO (rh) */
    Ifx_UReg_32Bit TO19:1;            /**< \brief [19:19] Transmission Occurred Tx Buffer 19 - TO (rh) */
    Ifx_UReg_32Bit TO20:1;            /**< \brief [20:20] Transmission Occurred Tx Buffer 20 - TO (rh) */
    Ifx_UReg_32Bit TO21:1;            /**< \brief [21:21] Transmission Occurred Tx Buffer 21 - TO (rh) */
    Ifx_UReg_32Bit TO22:1;            /**< \brief [22:22] Transmission Occurred Tx Buffer 22 - TO (rh) */
    Ifx_UReg_32Bit TO23:1;            /**< \brief [23:23] Transmission Occurred Tx Buffer 23 - TO (rh) */
    Ifx_UReg_32Bit TO24:1;            /**< \brief [24:24] Transmission Occurred Tx Buffer 24 - TO (rh) */
    Ifx_UReg_32Bit TO25:1;            /**< \brief [25:25] Transmission Occurred Tx Buffer 25 - TO (rh) */
    Ifx_UReg_32Bit TO26:1;            /**< \brief [26:26] Transmission Occurred Tx Buffer 26 - TO (rh) */
    Ifx_UReg_32Bit TO27:1;            /**< \brief [27:27] Transmission Occurred Tx Buffer 27 - TO (rh) */
    Ifx_UReg_32Bit TO28:1;            /**< \brief [28:28] Transmission Occurred Tx Buffer 28 - TO (rh) */
    Ifx_UReg_32Bit TO29:1;            /**< \brief [29:29] Transmission Occurred Tx Buffer 29 - TO (rh) */
    Ifx_UReg_32Bit TO30:1;            /**< \brief [30:30] Transmission Occurred Tx Buffer 30 - TO (rh) */
    Ifx_UReg_32Bit TO31:1;            /**< \brief [31:31] Transmission Occurred Tx Buffer 31 - TO (rh) */
} Ifx_CAN_N_TX_BTO_Bits;

/** \brief Tx Event FIFO Acknowledge ${i} */
typedef struct _Ifx_CAN_N_TX_EFA_Bits
{
    Ifx_UReg_32Bit EFAI:5;            /**< \brief [4:0] Event FIFO Acknowledge Index - EFAI (rw) */
    Ifx_UReg_32Bit reserved_5:27;     /**< \brief [31:5] \internal Reserved */
} Ifx_CAN_N_TX_EFA_Bits;

/** \brief Tx Event FIFO Configuration ${i} */
typedef struct _Ifx_CAN_N_TX_EFC_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit EFSA:14;           /**< \brief [15:2] Event FIFO Start Address - EFSA (rw) */
    Ifx_UReg_32Bit EFS:6;             /**< \brief [21:16] Event FIFO Size - EFS (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit EFWM:6;            /**< \brief [29:24] Event FIFO Watermark - EFWM (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CAN_N_TX_EFC_Bits;

/** \brief Tx Event FIFO Status ${i} */
typedef struct _Ifx_CAN_N_TX_EFS_Bits
{
    Ifx_UReg_32Bit EFFL:6;            /**< \brief [5:0] Event FIFO Fill Level - EFFL (rh) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit EFGI:5;            /**< \brief [12:8] Event FIFO Get Index - EFGI (rh) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit EFPI:5;            /**< \brief [20:16] Event FIFO Put Index - EFPI (rh) */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit EFF:1;             /**< \brief [24:24] Event FIFO Full - EFF (rh) */
    Ifx_UReg_32Bit TEFL:1;            /**< \brief [25:25] Tx Event FIFO Element Lost - TEFL (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_CAN_N_TX_EFS_Bits;

/** \brief Tx Buffer Element Size Configuration ${i} */
typedef struct _Ifx_CAN_N_TX_ESC_Bits
{
    Ifx_UReg_32Bit TBDS:3;            /**< \brief [2:0] Tx Buffer Data Field Size - TBDS (rw) */
    Ifx_UReg_32Bit reserved_3:29;     /**< \brief [31:3] \internal Reserved */
} Ifx_CAN_N_TX_ESC_Bits;

/** \brief Tx FIFO/Queue Status ${i} */
typedef struct _Ifx_CAN_N_TX_FQS_Bits
{
    Ifx_UReg_32Bit TFFL:6;            /**< \brief [5:0] Tx FIFO Free Level - TFFL (rh) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit TFGI:5;            /**< \brief [12:8] Tx FIFO Get Index - TFGI (rh) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit TFQPI:5;           /**< \brief [20:16] Tx FIFO/Queue Put Index - TFQPI (rh) */
    Ifx_UReg_32Bit TFQF:1;            /**< \brief [21:21] Tx FIFO/Queue Full - TFQF (rh) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_CAN_N_TX_FQS_Bits;

/** \brief Extended ID AND Mask ${i} */
typedef struct _Ifx_CAN_N_XIDAM_Bits
{
    Ifx_UReg_32Bit EIDM:29;           /**< \brief [28:0] Extended ID Mask - EIDM (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_CAN_N_XIDAM_Bits;

/** \brief Extended ID Filter Configuration ${i} */
typedef struct _Ifx_CAN_N_XIDFC_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit FLESA:14;          /**< \brief [15:2] Filter List Extended Start Address - FLESA (rw) */
    Ifx_UReg_32Bit LSE:7;             /**< \brief [22:16] List Size Extended - LSE (rw) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_CAN_N_XIDFC_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_CAN_OCS_Bits
{
    Ifx_UReg_32Bit TGS:2;             /**< \brief [1:0] Trigger Set for OTGB0/1 - TGS (rw) */
    Ifx_UReg_32Bit TGB:1;             /**< \brief [2:2] OTGB0/1 Bus Select - TGB (rw) */
    Ifx_UReg_32Bit TG_P:1;            /**< \brief [3:3] TGS, TGB Write Protection - TG_P (w) */
    Ifx_UReg_32Bit reserved_4:20;     /**< \brief [23:4] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CAN_OCS_Bits;

/** \brief Register 0 */
typedef struct _Ifx_CAN_R0_Bits
{
    Ifx_UReg_32Bit ID:29;             /**< \brief [28:0] Identifier (rwh) */
    Ifx_UReg_32Bit RTR:1;             /**< \brief [29:29] Remote Transmission Request (rwh) */
    Ifx_UReg_32Bit XTD:1;             /**< \brief [30:30] Extended Identifier (rwh) */
    Ifx_UReg_32Bit ESI:1;             /**< \brief [31:31] Error State Indicator (rwh) */
} Ifx_CAN_R0_Bits;

/** \brief Register 1 */
typedef struct _Ifx_CAN_R1_Bits
{
    Ifx_UReg_32Bit RXTS:16;           /**< \brief [15:0] Rx Timestamp (rwh) */
    Ifx_UReg_32Bit DLC:4;             /**< \brief [19:16] Data Length Code (rwh) */
    Ifx_UReg_32Bit BRS:1;             /**< \brief [20:20] Bit Rate Switch (rwh) */
    Ifx_UReg_32Bit FDF:1;             /**< \brief [21:21] Frame Data Format (rwh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit FIDX:7;            /**< \brief [30:24] Filter Index (rwh) */
    Ifx_UReg_32Bit ANMF:1;            /**< \brief [31:31] Accepted Non-matching Frame (rwh) */
} Ifx_CAN_R1_Bits;

/** \brief Standard Message 0 */
typedef struct _Ifx_CAN_STDMSG_S0_Bits
{
    Ifx_UReg_32Bit SFID2:11;          /**< \brief [10:0] Standard Filter ID 2 (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit SFID1:11;          /**< \brief [26:16] Standard Filter ID 1 (rw) */
    Ifx_UReg_32Bit SFEC:3;            /**< \brief [29:27] Standard Filter Element Configuration (rw) */
    Ifx_UReg_32Bit SFT:2;             /**< \brief [31:30] Standard Filter Type (rw) */
} Ifx_CAN_STDMSG_S0_Bits;

/** \brief Trigger Memory Element 0 */
typedef struct _Ifx_CAN_TRIGMSG_TM0_Bits
{
    Ifx_UReg_32Bit TYPE:4;            /**< \brief [3:0] Trigger Type (rw) */
    Ifx_UReg_32Bit TMEX:1;            /**< \brief [4:4] Time Mark Event External (rw) */
    Ifx_UReg_32Bit TMIN:1;            /**< \brief [5:5] Time Mark Event Internal (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit CC:7;              /**< \brief [14:8] Cycle Code (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit TM:16;             /**< \brief [31:16] Time Mark (rw) */
} Ifx_CAN_TRIGMSG_TM0_Bits;

/** \brief  */
typedef struct _Ifx_CAN_TRIGMSG_TM1_Bits
{
    Ifx_UReg_32Bit MSC:3;             /**< \brief [2:0] Message Status Count - MSC (rwh) */
    Ifx_UReg_32Bit reserved_3:13;     /**< \brief [15:3] \internal Reserved */
    Ifx_UReg_32Bit MMR:7;             /**< \brief [22:16] Message Number - MMR (rw) */
    Ifx_UReg_32Bit FTYPE:1;           /**< \brief [23:23] Filter Type - FTYPE (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_CAN_TRIGMSG_TM1_Bits;

/** \brief Event 0 */
typedef struct _Ifx_CAN_TXEVENT_E0_Bits
{
    Ifx_UReg_32Bit ID:29;             /**< \brief [28:0] Identifier (rwh) */
    Ifx_UReg_32Bit RTR:1;             /**< \brief [29:29] Remote Transmission Request (rwh) */
    Ifx_UReg_32Bit XTD:1;             /**< \brief [30:30] Extended Identifier (rwh) */
    Ifx_UReg_32Bit ESI:1;             /**< \brief [31:31] Error State Indicator (rwh) */
} Ifx_CAN_TXEVENT_E0_Bits;

/** \brief Event 1 */
typedef struct _Ifx_CAN_TXEVENT_E1_Bits
{
    Ifx_UReg_32Bit TXTS:16;           /**< \brief [15:0] Tx Timestamp (rwh) */
    Ifx_UReg_32Bit DLC:4;             /**< \brief [19:16] Data Length Code (rwh) */
    Ifx_UReg_32Bit BRS:1;             /**< \brief [20:20] Bit Rate Switch (rwh) */
    Ifx_UReg_32Bit FDF:1;             /**< \brief [21:21] FD Format (rwh) */
    Ifx_UReg_32Bit ET:2;              /**< \brief [23:22] Event Type (rwh) */
    Ifx_UReg_32Bit MM:8;              /**< \brief [31:24] Message Marker (rwh) */
} Ifx_CAN_TXEVENT_E1_Bits;

/** \brief Data Byte m */
typedef struct _Ifx_CAN_TXMSG_DB_Bits
{
    Ifx_UReg_8Bit DB:8;               /**< \brief [7:0] Data Byte m (rw) */
} Ifx_CAN_TXMSG_DB_Bits;

/** \brief Transmit Buffer 0 */
typedef struct _Ifx_CAN_TXMSG_T0_Bits
{
    Ifx_UReg_32Bit ID:29;             /**< \brief [28:0] Identifier (rw) */
    Ifx_UReg_32Bit RTR:1;             /**< \brief [29:29] Remote Transmission Request (rw) */
    Ifx_UReg_32Bit XTD:1;             /**< \brief [30:30] Extended Identifier (rw) */
    Ifx_UReg_32Bit ESI:1;             /**< \brief [31:31] Error State Indicator (rw) */
} Ifx_CAN_TXMSG_T0_Bits;

/** \brief Transmit Buffer 1 */
typedef struct _Ifx_CAN_TXMSG_T1_Bits
{
    Ifx_UReg_32Bit reserved_0:16;     /**< \brief [15:0] \internal Reserved */
    Ifx_UReg_32Bit DLC:4;             /**< \brief [19:16] Data Length Code (rw) */
    Ifx_UReg_32Bit BRS:1;             /**< \brief [20:20] Bit Rate Switching (rw) */
    Ifx_UReg_32Bit FDF:1;             /**< \brief [21:21] FD Format (rw) */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit EFC:1;             /**< \brief [23:23] Event FIFO Control (rw) */
    Ifx_UReg_32Bit MM:8;              /**< \brief [31:24] Message Marker (rw) */
} Ifx_CAN_TXMSG_T1_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_can_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_ACCEN0;

/** \brief Access Enable Register Control 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_ACCENCTR0_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_ACCENCTR0;

/** \brief Buffer receive address and transmit address   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_BUFADR_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_BUFADR;

/** \brief CAN Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_CLC_Bits B;               /**< \brief Bitfield access */
} Ifx_CAN_CLC;

/** \brief    */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_CAN_DB_Bits B;                /**< \brief Bitfield access */
} Ifx_CAN_DB;

/** \brief Filter Element 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_EXTMSG_F0_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_EXTMSG_F0;

/** \brief Filter Element 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_EXTMSG_F1_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_EXTMSG_F1;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_CAN_ID;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_KRST0_Bits B;             /**< \brief Bitfield access */
} Ifx_CAN_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_KRST1_Bits B;             /**< \brief Bitfield access */
} Ifx_CAN_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_KRSTCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_KRSTCLR;

/** \brief Module Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_MCR_Bits B;               /**< \brief Bitfield access */
} Ifx_CAN_MCR;

/** \brief Measure Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_MECR_Bits B;              /**< \brief Bitfield access */
} Ifx_CAN_MECR;

/** \brief Measure Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_MESTAT_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_MESTAT;

/** \brief Access Enable Register CAN Node ${i} 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_ACCENNODE0_Bits B;      /**< \brief Bitfield access */
} Ifx_CAN_N_ACCENNODE0;

/** \brief CC Control Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_CCCR_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_CCCR;

/** \brief Core Release Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_CREL_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_CREL;

/** \brief Data Bit Timing & Prescaler Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_DBTP_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_DBTP;

/** \brief Error Counter Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_ECR_Bits B;             /**< \brief Bitfield access */
} Ifx_CAN_N_ECR;

/** \brief End Address Node ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_ENDADR_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_ENDADR;

/** \brief Endian Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_ENDN_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_ENDN;

/** \brief Global Filter Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_GFC_Bits B;             /**< \brief Bitfield access */
} Ifx_CAN_N_GFC;

/** \brief Interrupt routing for Groups 1 ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_GRINT1_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_GRINT1;

/** \brief Interrupt routing for Groups 2 ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_GRINT2_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_GRINT2;

/** \brief High Priority Message Status ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_HPMS_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_HPMS;

/** \brief Interrupt Enable ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_IE_Bits B;              /**< \brief Bitfield access */
} Ifx_CAN_N_IE;

/** \brief Interrupt Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_IR_Bits B;              /**< \brief Bitfield access */
} Ifx_CAN_N_IR;

/** \brief Interrupt Signalling Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_ISREG_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_ISREG;

/** \brief Nominal Bit Timing & Prescaler Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NBTP_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_NBTP;

/** \brief New Data 1 ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NDAT1_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_NDAT1;

/** \brief New Data 2 ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NDAT2_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_NDAT2;

/** \brief Node ${i} Port Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NPCR_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_NPCR;

/** \brief Node ${i} Timer A Transmit Trigger Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NT_ATTR_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_N_NT_ATTR;

/** \brief Node ${i} Timer B Transmit Trigger Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NT_BTTR_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_N_NT_BTTR;

/** \brief Node ${i} Timer Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NT_CCR_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_NT_CCR;

/** \brief Node ${i} Timer C Transmit Trigger Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NT_CTTR_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_N_NT_CTTR;

/** \brief Node ${i} Timer Receive Timeout Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_NT_RTR_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_NT_RTR;

/** \brief Protocol Status Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_PSR_Bits B;             /**< \brief Bitfield access */
} Ifx_CAN_N_PSR;

/** \brief RAM Watchdog ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RWD_Bits B;             /**< \brief Bitfield access */
} Ifx_CAN_N_RWD;

/** \brief Rx Buffer Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RX_BC_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_RX_BC;

/** \brief Rx Buffer/FIFO Element Size Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RX_ESC_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_RX_ESC;

/** \brief Rx FIFO 0 Acknowledge ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RX_F0A_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_RX_F0A;

/** \brief Rx FIFO 0 Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RX_F0C_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_RX_F0C;

/** \brief Rx FIFO 0 Status ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RX_F0S_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_RX_F0S;

/** \brief Rx FIFO 1 Acknowledge ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RX_F1A_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_RX_F1A;

/** \brief Rx FIFO 1 Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RX_F1C_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_RX_F1C;

/** \brief Rx FIFO 1 Status ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_RX_F1S_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_RX_F1S;

/** \brief Standard ID Filter Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_SIDFC_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_SIDFC;

/** \brief Start Address Node ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_STARTADR_Bits B;        /**< \brief Bitfield access */
} Ifx_CAN_N_STARTADR;

/** \brief Transmitter Delay Compensation Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TDCR_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_TDCR;

/** \brief Test Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TEST_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_TEST;

/** \brief Timeout Counter Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TOCC_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_TOCC;

/** \brief Timeout Counter Value ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TOCV_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_TOCV;

/** \brief Timestamp Counter Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TSCC_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_TSCC;

/** \brief Timestamp Counter Value ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TSCV_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_TSCV;

/** \brief Time Trigger Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TTCR_Bits B;            /**< \brief Bitfield access */
} Ifx_CAN_N_TTCR;

/** \brief TT Capture Time ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_CPT_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_CPT;

/** \brief TT Cycle Sync Mark ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_CSM_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_CSM;

/** \brief TT Cycle Time & Count ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_CTC_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_CTC;

/** \brief TT Global Time Preset ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_GTP_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_GTP;

/** \brief TT Interrupt Enable ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_IE_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_TT_IE;

/** \brief TT Interrupt Register ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_IR_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_TT_IR;

/** \brief TT Local & Global Time ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_LGT_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_LGT;

/** \brief TT Matrix Limits ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_MLM_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_MLM;

/** \brief TT Operation Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_OCF_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_OCF;

/** \brief TT Operation Control ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_OCN_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_OCN;

/** \brief TT Operation Status ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_OST_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_OST;

/** \brief TT Reference Message Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_RMC_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_RMC;

/** \brief TT Trigger Memory Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_TMC_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_TMC;

/** \brief TT Time Mark ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_TMK_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TT_TMK;

/** \brief TUR Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_TURCF_Bits B;        /**< \brief Bitfield access */
} Ifx_CAN_N_TT_TURCF;

/** \brief TUR Numerator Actual ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TT_TURNA_Bits B;        /**< \brief Bitfield access */
} Ifx_CAN_N_TT_TURNA;

/** \brief Tx Buffer Add Request ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_BAR_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_BAR;

/** \brief Tx Buffer Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_BC_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_TX_BC;

/** \brief Tx Buffer Cancellation Finished ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_BCF_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_BCF;

/** \brief Tx Buffer Cancellation Finished Interrupt Enable ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_BCIE_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_N_TX_BCIE;

/** \brief Tx Buffer Cancellation Request ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_BCR_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_BCR;

/** \brief Tx Buffer Request Pending ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_BRP_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_BRP;

/** \brief Tx Buffer Transmission Interrupt Enable ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_BTIE_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_N_TX_BTIE;

/** \brief Tx Buffer Transmission Occurred ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_BTO_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_BTO;

/** \brief Tx Event FIFO Acknowledge ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_EFA_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_EFA;

/** \brief Tx Event FIFO Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_EFC_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_EFC;

/** \brief Tx Event FIFO Status ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_EFS_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_EFS;

/** \brief Tx Buffer Element Size Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_ESC_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_ESC;

/** \brief Tx FIFO/Queue Status ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_TX_FQS_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_N_TX_FQS;

/** \brief Extended ID AND Mask ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_XIDAM_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_XIDAM;

/** \brief Extended ID Filter Configuration ${i}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_N_XIDFC_Bits B;           /**< \brief Bitfield access */
} Ifx_CAN_N_XIDFC;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_OCS_Bits B;               /**< \brief Bitfield access */
} Ifx_CAN_OCS;

/** \brief Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_R0_Bits B;                /**< \brief Bitfield access */
} Ifx_CAN_R0;

/** \brief Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_R1_Bits B;                /**< \brief Bitfield access */
} Ifx_CAN_R1;

/** \brief Standard Message 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_STDMSG_S0_Bits B;         /**< \brief Bitfield access */
} Ifx_CAN_STDMSG_S0;

/** \brief Trigger Memory Element 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_TRIGMSG_TM0_Bits B;       /**< \brief Bitfield access */
} Ifx_CAN_TRIGMSG_TM0;

/** \brief    */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_TRIGMSG_TM1_Bits B;       /**< \brief Bitfield access */
} Ifx_CAN_TRIGMSG_TM1;

/** \brief Event 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_TXEVENT_E0_Bits B;        /**< \brief Bitfield access */
} Ifx_CAN_TXEVENT_E0;

/** \brief Event 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_TXEVENT_E1_Bits B;        /**< \brief Bitfield access */
} Ifx_CAN_TXEVENT_E1;

/** \brief Data Byte m   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_CAN_TXMSG_DB_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_TXMSG_DB;

/** \brief Transmit Buffer 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_TXMSG_T0_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_TXMSG_T0;

/** \brief Transmit Buffer 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CAN_TXMSG_T1_Bits B;          /**< \brief Bitfield access */
} Ifx_CAN_TXMSG_T1;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_N_NT_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief NT object */
typedef volatile struct _Ifx_CAN_N_NT
{
       Ifx_CAN_N_NT_CCR                    CCR;                    /**< \brief 0, Node ${i} Timer Clock Control Register*/
       Ifx_CAN_N_NT_ATTR                   ATTR;                   /**< \brief 4, Node ${i} Timer A Transmit Trigger Register*/
       Ifx_CAN_N_NT_BTTR                   BTTR;                   /**< \brief 8, Node ${i} Timer B Transmit Trigger Register*/
       Ifx_CAN_N_NT_CTTR                   CTTR;                   /**< \brief C, Node ${i} Timer C Transmit Trigger Register*/
       Ifx_CAN_N_NT_RTR                    RTR;                    /**< \brief 10, Node ${i} Timer Receive Timeout Register*/
} Ifx_CAN_N_NT;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_N_RX_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief RX object */
typedef volatile struct _Ifx_CAN_N_RX
{
       Ifx_CAN_N_RX_F0C                    F0C;                    /**< \brief 0, Rx FIFO 0 Configuration ${i}*/
       Ifx_CAN_N_RX_F0S                    F0S;                    /**< \brief 4, Rx FIFO 0 Status ${i}*/
       Ifx_CAN_N_RX_F0A                    F0A;                    /**< \brief 8, Rx FIFO 0 Acknowledge ${i}*/
       Ifx_CAN_N_RX_BC                     BC;                     /**< \brief C, Rx Buffer Configuration ${i}*/
       Ifx_CAN_N_RX_F1C                    F1C;                    /**< \brief 10, Rx FIFO 1 Configuration ${i}*/
       Ifx_CAN_N_RX_F1S                    F1S;                    /**< \brief 14, Rx FIFO 1 Status ${i}*/
       Ifx_CAN_N_RX_F1A                    F1A;                    /**< \brief 18, Rx FIFO 1 Acknowledge ${i}*/
       Ifx_CAN_N_RX_ESC                    ESC;                    /**< \brief 1C, Rx Buffer/FIFO Element Size Configuration ${i}*/
} Ifx_CAN_N_RX;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_N_TX_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief TX object */
typedef volatile struct _Ifx_CAN_N_TX
{
       Ifx_CAN_N_TX_BC                     BC;                     /**< \brief 0, Tx Buffer Configuration ${i}*/
       Ifx_CAN_N_TX_FQS                    FQS;                    /**< \brief 4, Tx FIFO/Queue Status ${i}*/
       Ifx_CAN_N_TX_ESC                    ESC;                    /**< \brief 8, Tx Buffer Element Size Configuration ${i}*/
       Ifx_CAN_N_TX_BRP                    BRP;                    /**< \brief C, Tx Buffer Request Pending ${i}*/
       Ifx_CAN_N_TX_BAR                    BAR;                    /**< \brief 10, Tx Buffer Add Request ${i}*/
       Ifx_CAN_N_TX_BCR                    BCR;                    /**< \brief 14, Tx Buffer Cancellation Request ${i}*/
       Ifx_CAN_N_TX_BTO                    BTO;                    /**< \brief 18, Tx Buffer Transmission Occurred ${i}*/
       Ifx_CAN_N_TX_BCF                    BCF;                    /**< \brief 1C, Tx Buffer Cancellation Finished ${i}*/
       Ifx_CAN_N_TX_BTIE                   BTIE;                   /**< \brief 20, Tx Buffer Transmission Interrupt Enable ${i}*/
       Ifx_CAN_N_TX_BCIE                   BCIE;                   /**< \brief 24, Tx Buffer Cancellation Finished Interrupt Enable ${i}*/
       Ifx_UReg_8Bit                       reserved_28[8];         /**< \brief 28, \internal Reserved */
       Ifx_CAN_N_TX_EFC                    EFC;                    /**< \brief 30, Tx Event FIFO Configuration ${i}*/
       Ifx_CAN_N_TX_EFS                    EFS;                    /**< \brief 34, Tx Event FIFO Status ${i}*/
       Ifx_CAN_N_TX_EFA                    EFA;                    /**< \brief 38, Tx Event FIFO Acknowledge ${i}*/
} Ifx_CAN_N_TX;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_N_TT_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief TT object */
typedef volatile struct _Ifx_CAN_N_TT
{
       Ifx_CAN_N_TT_TMC                    TMC;                    /**< \brief 0, TT Trigger Memory Configuration ${i}*/
       Ifx_CAN_N_TT_RMC                    RMC;                    /**< \brief 4, TT Reference Message Configuration ${i}*/
       Ifx_CAN_N_TT_OCF                    OCF;                    /**< \brief 8, TT Operation Configuration ${i}*/
       Ifx_CAN_N_TT_MLM                    MLM;                    /**< \brief C, TT Matrix Limits ${i}*/
       Ifx_CAN_N_TT_TURCF                  TURCF;                  /**< \brief 10, TUR Configuration ${i}*/
       Ifx_CAN_N_TT_OCN                    OCN;                    /**< \brief 14, TT Operation Control ${i}*/
       Ifx_CAN_N_TT_GTP                    GTP;                    /**< \brief 18, TT Global Time Preset ${i}*/
       Ifx_CAN_N_TT_TMK                    TMK;                    /**< \brief 1C, TT Time Mark ${i}*/
       Ifx_CAN_N_TT_IR                     IR;                     /**< \brief 20, TT Interrupt Register ${i}*/
       Ifx_CAN_N_TT_IE                     IE;                     /**< \brief 24, TT Interrupt Enable ${i}*/
       Ifx_UReg_8Bit                       reserved_28[4];         /**< \brief 28, \internal Reserved */
       Ifx_CAN_N_TT_OST                    OST;                    /**< \brief 2C, TT Operation Status ${i}*/
       Ifx_CAN_N_TT_TURNA                  TURNA;                  /**< \brief 30, TUR Numerator Actual ${i}*/
       Ifx_CAN_N_TT_LGT                    LGT;                    /**< \brief 34, TT Local & Global Time ${i}*/
       Ifx_CAN_N_TT_CTC                    CTC;                    /**< \brief 38, TT Cycle Time & Count ${i}*/
       Ifx_CAN_N_TT_CPT                    CPT;                    /**< \brief 3C, TT Capture Time ${i}*/
       Ifx_CAN_N_TT_CSM                    CSM;                    /**< \brief 40, TT Cycle Sync Mark ${i}*/
} Ifx_CAN_N_TT;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_N_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief N object */
typedef volatile struct _Ifx_CAN_N
{
       Ifx_CAN_N_ACCENNODE0                ACCENNODE0;             /**< \brief 0, Access Enable Register CAN Node ${i} 0*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_CAN_N_STARTADR                  STARTADR;               /**< \brief 8, Start Address Node ${i}*/
       Ifx_CAN_N_ENDADR                    ENDADR;                 /**< \brief C, End Address Node ${i}*/
       Ifx_CAN_N_ISREG                     ISREG;                  /**< \brief 10, Interrupt Signalling Register ${i}*/
       Ifx_CAN_N_GRINT1                    GRINT1;                 /**< \brief 14, Interrupt routing for Groups 1 ${i}*/
       Ifx_CAN_N_GRINT2                    GRINT2;                 /**< \brief 18, Interrupt routing for Groups 2 ${i}*/
       Ifx_UReg_8Bit                       reserved_1C[4];         /**< \brief 1C, \internal Reserved */
       Ifx_CAN_N_NT                        NT;                     /**< \brief 20, Node ${i} Timer Receive Timeout Register*/
       Ifx_UReg_8Bit                       reserved_34[12];        /**< \brief 34, \internal Reserved */
       Ifx_CAN_N_NPCR                      NPCR;                   /**< \brief 40, Node ${i} Port Control Register*/
       Ifx_UReg_8Bit                       reserved_44[172];       /**< \brief 44, \internal Reserved */
       Ifx_CAN_N_TTCR                      TTCR;                   /**< \brief F0, Time Trigger Control Register*/
       Ifx_UReg_8Bit                       reserved_F4[12];        /**< \brief F4, \internal Reserved */
       Ifx_CAN_N_CREL                      CREL;                   /**< \brief 100, Core Release Register ${i}*/
       Ifx_CAN_N_ENDN                      ENDN;                   /**< \brief 104, Endian Register ${i}*/
       Ifx_UReg_8Bit                       reserved_108[4];        /**< \brief 108, \internal Reserved */
       Ifx_CAN_N_DBTP                      DBTP;                   /**< \brief 10C, Data Bit Timing & Prescaler Register ${i}*/
       Ifx_CAN_N_TEST                      TEST;                   /**< \brief 110, Test Register ${i}*/
       Ifx_CAN_N_RWD                       RWD;                    /**< \brief 114, RAM Watchdog ${i}*/
       Ifx_CAN_N_CCCR                      CCCR;                   /**< \brief 118, CC Control Register ${i}*/
       Ifx_CAN_N_NBTP                      NBTP;                   /**< \brief 11C, Nominal Bit Timing & Prescaler Register ${i}*/
       Ifx_CAN_N_TSCC                      TSCC;                   /**< \brief 120, Timestamp Counter Configuration ${i}*/
       Ifx_CAN_N_TSCV                      TSCV;                   /**< \brief 124, Timestamp Counter Value ${i}*/
       Ifx_CAN_N_TOCC                      TOCC;                   /**< \brief 128, Timeout Counter Configuration ${i}*/
       Ifx_CAN_N_TOCV                      TOCV;                   /**< \brief 12C, Timeout Counter Value ${i}*/
       Ifx_UReg_8Bit                       reserved_130[16];       /**< \brief 130, \internal Reserved */
       Ifx_CAN_N_ECR                       ECR;                    /**< \brief 140, Error Counter Register ${i}*/
       Ifx_CAN_N_PSR                       PSR;                    /**< \brief 144, Protocol Status Register ${i}*/
       Ifx_CAN_N_TDCR                      TDCR;                   /**< \brief 148, Transmitter Delay Compensation Register ${i}*/
       Ifx_UReg_8Bit                       reserved_14C[4];        /**< \brief 14C, \internal Reserved */
       Ifx_CAN_N_IR                        IR;                     /**< \brief 150, Interrupt Register ${i}*/
       Ifx_CAN_N_IE                        IE;                     /**< \brief 154, Interrupt Enable ${i}*/
       Ifx_UReg_8Bit                       reserved_158[40];       /**< \brief 158, \internal Reserved */
       Ifx_CAN_N_GFC                       GFC;                    /**< \brief 180, Global Filter Configuration ${i}*/
       Ifx_CAN_N_SIDFC                     SIDFC;                  /**< \brief 184, Standard ID Filter Configuration ${i}*/
       Ifx_CAN_N_XIDFC                     XIDFC;                  /**< \brief 188, Extended ID Filter Configuration ${i}*/
       Ifx_UReg_8Bit                       reserved_18C[4];        /**< \brief 18C, \internal Reserved */
       Ifx_CAN_N_XIDAM                     XIDAM;                  /**< \brief 190, Extended ID AND Mask ${i}*/
       Ifx_CAN_N_HPMS                      HPMS;                   /**< \brief 194, High Priority Message Status ${i}*/
       Ifx_CAN_N_NDAT1                     NDAT1;                  /**< \brief 198, New Data 1 ${i}*/
       Ifx_CAN_N_NDAT2                     NDAT2;                  /**< \brief 19C, New Data 2 ${i}*/
       Ifx_CAN_N_RX                        RX;                     /**< \brief 1A0, Rx Buffer/FIFO Element Size Configuration ${i}*/
       Ifx_CAN_N_TX                        TX;                     /**< \brief 1C0, */
       Ifx_UReg_8Bit                       reserved_1FC[4];        /**< \brief 1FC, \internal Reserved */
       Ifx_CAN_N_TT                        TT;                     /**< \brief 200, TT Cycle Sync Mark ${i}*/
       Ifx_UReg_8Bit                       reserved_244[444];      /**< \brief 244, \internal Reserved */
} Ifx_CAN_N;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_StdMsg_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief STDMSG object */
typedef volatile struct _Ifx_CAN_STDMSG
{
       Ifx_CAN_STDMSG_S0                   S0;                     /**< \brief 0, Standard Message 0*/
} Ifx_CAN_STDMSG;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_ExtMsg_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief EXTMSG object */
typedef volatile struct _Ifx_CAN_EXTMSG
{
       Ifx_CAN_EXTMSG_F0                   F0;                     /**< \brief 0, Filter Element 0*/
       Ifx_CAN_EXTMSG_F1                   F1;                     /**< \brief 4, Filter Element 1*/
} Ifx_CAN_EXTMSG;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_RxMsg_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief RXMSG object */
typedef volatile struct _Ifx_CAN_RXMSG
{
       Ifx_CAN_R0                          R0;                     /**< \brief 0, Register 0*/
       Ifx_CAN_R1                          R1;                     /**< \brief 4, Register 1*/
       Ifx_CAN_DB                          DB[64];                 /**< \brief 8, Data Byte m*/
} Ifx_CAN_RXMSG;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_TxEvent_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TXEVENT object */
typedef volatile struct _Ifx_CAN_TXEVENT
{
       Ifx_CAN_TXEVENT_E0                  E0;                     /**< \brief 0, Event 0*/
       Ifx_CAN_TXEVENT_E1                  E1;                     /**< \brief 4, Event 1*/
} Ifx_CAN_TXEVENT;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_TxMsg_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TXMSG object */
typedef volatile struct _Ifx_CAN_TXMSG
{
       Ifx_CAN_TXMSG_T0                    T0;                     /**< \brief 0, Transmit Buffer 0*/
       Ifx_CAN_TXMSG_T1                    T1;                     /**< \brief 4, Transmit Buffer 1*/
       Ifx_CAN_TXMSG_DB                    DB[64];                 /**< \brief 8, Data Byte m*/
} Ifx_CAN_TXMSG;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Can_TrigMsg_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TRIGMSG object */
typedef volatile struct _Ifx_CAN_TRIGMSG
{
       Ifx_CAN_TRIGMSG_TM0                 TM0;                    /**< \brief 0, Trigger Memory Element 0*/
       Ifx_CAN_TRIGMSG_TM1                 TM1;                    /**< \brief 4, */
} Ifx_CAN_TRIGMSG;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Can_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief CAN object */
typedef volatile struct _Ifx_CAN
{
       Ifx_UReg_32Bit                      RAM[8192];             /**< \brief 0, Embedded SRAM for messages*/
       Ifx_CAN_CLC                         CLC;                    /**< \brief 8000, CAN Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_8004[4];       /**< \brief 8004, \internal Reserved */
       Ifx_CAN_ID                          ID;                     /**< \brief 8008, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_800C[36];      /**< \brief 800C, \internal Reserved */
       Ifx_CAN_MCR                         MCR;                    /**< \brief 8030, Module Control Register*/
       Ifx_CAN_BUFADR                      BUFADR;                 /**< \brief 8034, Buffer receive address and transmit address*/
       Ifx_UReg_8Bit                       reserved_8038[8];       /**< \brief 8038, \internal Reserved */
       Ifx_CAN_MECR                        MECR;                   /**< \brief 8040, Measure Control Register*/
       Ifx_CAN_MESTAT                      MESTAT;                 /**< \brief 8044, Measure Status Register*/
       Ifx_UReg_8Bit                       reserved_8048[148];     /**< \brief 8048, \internal Reserved */
       Ifx_CAN_ACCENCTR0                   ACCENCTR0;              /**< \brief 80DC, Access Enable Register Control 0*/
       Ifx_UReg_8Bit                       reserved_80E0[8];       /**< \brief 80E0, \internal Reserved */
       Ifx_CAN_OCS                         OCS;                    /**< \brief 80E8, OCDS Control and Status*/
       Ifx_CAN_KRSTCLR                     KRSTCLR;                /**< \brief 80EC, Kernel Reset Status Clear Register*/
       Ifx_CAN_KRST1                       KRST1;                  /**< \brief 80F0, Kernel Reset Register 1*/
       Ifx_CAN_KRST0                       KRST0;                  /**< \brief 80F4, Kernel Reset Register 0*/
       Ifx_UReg_8Bit                       reserved_80F8[4];       /**< \brief 80F8, \internal Reserved */
       Ifx_CAN_ACCEN0                      ACCEN0;                 /**< \brief 80FC, Access Enable Register 0*/
       Ifx_CAN_N                           N[4];                   /**< \brief 8100, */
} Ifx_CAN;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXCAN_REGDEF_H */
