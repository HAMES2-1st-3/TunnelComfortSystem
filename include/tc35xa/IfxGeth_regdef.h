/**
 * \file IfxGeth_regdef.h
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
 * \defgroup IfxSfr_Geth_Registers Geth Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Geth_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Geth_Registers
 * 
 * \defgroup IfxSfr_Geth_Registers_union Register unions
 * \ingroup IfxSfr_Geth_Registers
 * 
 * \defgroup IfxSfr_Geth_Registers_struct Memory map
 * \ingroup IfxSfr_Geth_Registers
 */
#ifndef IFXGETH_REGDEF_H
#define IFXGETH_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/******************************************************************************/
#if defined (__TASKING__)
#pragma warning 586
#endif
/******************************************************************************/

/** \addtogroup IfxSfr_Geth_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_GETH_ACCEN0_Bits
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
} Ifx_GETH_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_GETH_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_GETH_ACCEN1_Bits;

/** \brief Access Enable Register 0 for DMA${x} */
typedef struct _Ifx_GETH_ACCEND_ACCEN0D_Bits
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
} Ifx_GETH_ACCEND_ACCEN0D_Bits;

/** \brief Access Enable Register 1 for DMA${x} */
typedef struct _Ifx_GETH_ACCEND_ACCEN1D_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_GETH_ACCEND_ACCEN1D_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_GETH_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_GETH_CLC_Bits;

/** \brief DMA Channel ${i} Control Register */
typedef struct _Ifx_GETH_DMA_CH_CONTROL_Bits
{
    Ifx_UReg_32Bit reserved_0:14;     /**< \brief [13:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit PBLX8:1;           /**< \brief [16:16] 8xPBL mode - PBLx8 (rw) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit DSL:3;             /**< \brief [20:18] Descriptor Skip Length - DSL (rw) */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit SPH:1;             /**< \brief [24:24] Split Headers - SPH (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_GETH_DMA_CH_CONTROL_Bits;

/** \brief DMA Channel ${i} Current Application Receive Buffer Address Register */
typedef struct _Ifx_GETH_DMA_CH_CURRENT_APP_RXBUFFER_Bits
{
    Ifx_UReg_32Bit CURRBUFAPTR:32;    /**< \brief [31:0] Application Receive Buffer Address Pointer - CURRBUFAPTR (r) */
} Ifx_GETH_DMA_CH_CURRENT_APP_RXBUFFER_Bits;

/** \brief DMA Channel ${i} Current Application Receive Descriptor Register */
typedef struct _Ifx_GETH_DMA_CH_CURRENT_APP_RXDESC_Bits
{
    Ifx_UReg_32Bit CURRDESAPTR:32;    /**< \brief [31:0] Application Receive Descriptor Address Pointer - CURRDESAPTR (r) */
} Ifx_GETH_DMA_CH_CURRENT_APP_RXDESC_Bits;

/** \brief DMA Channel ${i} Current Application Transmit Buffer Address Register */
typedef struct _Ifx_GETH_DMA_CH_CURRENT_APP_TXBUFFER_Bits
{
    Ifx_UReg_32Bit CURTBUFAPTR:32;    /**< \brief [31:0] Application Transmit Buffer Address Pointer - CURTBUFAPTR (r) */
} Ifx_GETH_DMA_CH_CURRENT_APP_TXBUFFER_Bits;

/** \brief DMA Channel ${i} Current Application Transmit Descriptor Register */
typedef struct _Ifx_GETH_DMA_CH_CURRENT_APP_TXDESC_Bits
{
    Ifx_UReg_32Bit CURTDESAPTR:32;    /**< \brief [31:0] Application Transmit Descriptor Address Pointer - CURTDESAPTR (r) */
} Ifx_GETH_DMA_CH_CURRENT_APP_TXDESC_Bits;

/** \brief DMA Channel ${i} Interrupt Enable Register */
typedef struct _Ifx_GETH_DMA_CH_INTERRUPT_ENABLE_Bits
{
    Ifx_UReg_32Bit TIE:1;             /**< \brief [0:0] Transmit Interrupt Enable - TIE (rw) */
    Ifx_UReg_32Bit TXSE:1;            /**< \brief [1:1] Transmit Stopped Enable - TXSE (rw) */
    Ifx_UReg_32Bit TBUE:1;            /**< \brief [2:2] Transmit Buffer Unavailable Enable - TBUE (rw) */
    Ifx_UReg_32Bit reserved_3:3;      /**< \brief [5:3] \internal Reserved */
    Ifx_UReg_32Bit RIE:1;             /**< \brief [6:6] Receive Interrupt Enable - RIE (rw) */
    Ifx_UReg_32Bit RBUE:1;            /**< \brief [7:7] Receive Buffer Unavailable Enable - RBUE (rw) */
    Ifx_UReg_32Bit RSE:1;             /**< \brief [8:8] Receive Stopped Enable - RSE (rw) */
    Ifx_UReg_32Bit RWTE:1;            /**< \brief [9:9] Receive Watchdog Timeout Enable - RWTE (rw) */
    Ifx_UReg_32Bit ETIE:1;            /**< \brief [10:10] Early Transmit Interrupt Enable - ETIE (rw) */
    Ifx_UReg_32Bit ERIE:1;            /**< \brief [11:11] Early Receive Interrupt Enable - ERIE (rw) */
    Ifx_UReg_32Bit FBEE:1;            /**< \brief [12:12] Fatal Bus Error Enable - FBEE (rw) */
    Ifx_UReg_32Bit CDEE:1;            /**< \brief [13:13] Context Descriptor Error Enable - CDEE (rw) */
    Ifx_UReg_32Bit AIE:1;             /**< \brief [14:14] Abnormal Interrupt Summary Enable - AIE (rw) */
    Ifx_UReg_32Bit NIE:1;             /**< \brief [15:15] Normal Interrupt Summary Enable - NIE (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_DMA_CH_INTERRUPT_ENABLE_Bits;

/** \brief DMA Channel ${i} Missed Frames Count Register */
typedef struct _Ifx_GETH_DMA_CH_MISS_FRAME_CNT_Bits
{
    Ifx_UReg_32Bit MFC:11;            /**< \brief [10:0] Dropped Packet Counters - MFC (r) */
    Ifx_UReg_32Bit reserved_11:4;     /**< \brief [14:11] \internal Reserved */
    Ifx_UReg_32Bit MFCO:1;            /**< \brief [15:15] Overflow status of the MFC Counter - MFCO (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_DMA_CH_MISS_FRAME_CNT_Bits;

/** \brief DMA Channel ${i} Receive Descriptor List Address Register */
typedef struct _Ifx_GETH_DMA_CH_RXDESC_LIST_ADDRESS_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit RDESLA:30;         /**< \brief [31:2] Start of Receive List - RDESLA (rw) */
} Ifx_GETH_DMA_CH_RXDESC_LIST_ADDRESS_Bits;

/** \brief DMA Channel ${i} Recieve Descriptor Ring Length Register */
typedef struct _Ifx_GETH_DMA_CH_RXDESC_RING_LENGTH_Bits
{
    Ifx_UReg_32Bit RDRL:10;           /**< \brief [9:0] Receive Descriptor Ring Length - RDRL (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_GETH_DMA_CH_RXDESC_RING_LENGTH_Bits;

/** \brief DMA Channel ${i} Recieve Descriptor Tail Pointer Register */
typedef struct _Ifx_GETH_DMA_CH_RXDESC_TAIL_POINTER_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit RDTP:30;           /**< \brief [31:2] Receive Descriptor Tail Pointer - RDTP (rw) */
} Ifx_GETH_DMA_CH_RXDESC_TAIL_POINTER_Bits;

/** \brief DMA Channel ${i} Receive Control Register */
typedef struct _Ifx_GETH_DMA_CH_RX_CONTROL_Bits
{
    Ifx_UReg_32Bit SR:1;              /**< \brief [0:0] Start or Stop Receive - SR (rw) */
    Ifx_UReg_32Bit RBSZ_X_0:2;        /**< \brief [2:1] Receive Buffer size Low - RBSZ_x_0 (r) */
    Ifx_UReg_32Bit RBSZ_13_Y:12;      /**< \brief [14:3] Receive Buffer size High - RBSZ_13_y (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit RXPBL:6;           /**< \brief [21:16] Receive Programmable Burst Length - RxPBL (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:4;     /**< \brief [27:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [30:28] \internal Reserved */
    Ifx_UReg_32Bit RPF:1;             /**< \brief [31:31] DMA Rx Channel0 Packet Flush - RPF (rw) */
} Ifx_GETH_DMA_CH_RX_CONTROL_Bits;

/** \brief DMA Channel ${i} Recieve Interrupt Watchdog Timer Register */
typedef struct _Ifx_GETH_DMA_CH_RX_INTERRUPT_WATCHDOG_TIMER_Bits
{
    Ifx_UReg_32Bit RWT:8;             /**< \brief [7:0] Receive Interrupt Watchdog Timer Count - RWT (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit RWTU:2;            /**< \brief [17:16] Receive Interrupt Watchdog Timer Count Units - RWTU (rw) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_GETH_DMA_CH_RX_INTERRUPT_WATCHDOG_TIMER_Bits;

/** \brief DMA Channel ${i} Slot Function Control and Status Register */
typedef struct _Ifx_GETH_DMA_CH_SLOT_FUNCTION_CONTROL_STATUS_Bits
{
    Ifx_UReg_32Bit ESC:1;             /**< \brief [0:0] Enable Slot Comparison - ESC (rw) */
    Ifx_UReg_32Bit ASC:1;             /**< \brief [1:1] Advance Slot Check - ASC (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit SIV:12;            /**< \brief [15:4] Slot Interval Value - SIV (rw) */
    Ifx_UReg_32Bit RSN:4;             /**< \brief [19:16] Reference Slot Number - RSN (r) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_GETH_DMA_CH_SLOT_FUNCTION_CONTROL_STATUS_Bits;

/** \brief DMA Channel ${i} Status Register */
typedef struct _Ifx_GETH_DMA_CH_STATUS_Bits
{
    Ifx_UReg_32Bit TI:1;              /**< \brief [0:0] Transmit Interrupt - TI (rw) */
    Ifx_UReg_32Bit TPS:1;             /**< \brief [1:1] Transmit Process Stopped - TPS (rw) */
    Ifx_UReg_32Bit TBU:1;             /**< \brief [2:2] Transmit Buffer Unavailable - TBU (rw) */
    Ifx_UReg_32Bit reserved_3:3;      /**< \brief [5:3] \internal Reserved */
    Ifx_UReg_32Bit RI:1;              /**< \brief [6:6] Receive Interrupt - RI (rw) */
    Ifx_UReg_32Bit RBU:1;             /**< \brief [7:7] Receive Buffer Unavailable - RBU (rw) */
    Ifx_UReg_32Bit RPS:1;             /**< \brief [8:8] Receive Process Stopped - RPS (rw) */
    Ifx_UReg_32Bit RWT:1;             /**< \brief [9:9] Receive Watchdog Timeout - RWT (rw) */
    Ifx_UReg_32Bit ETI:1;             /**< \brief [10:10] Early Transmit Interrupt - ETI (rw) */
    Ifx_UReg_32Bit ERI:1;             /**< \brief [11:11] Early Receive Interrupt - ERI (rw) */
    Ifx_UReg_32Bit FBE:1;             /**< \brief [12:12] Fatal Bus Error - FBE (rw) */
    Ifx_UReg_32Bit CDE:1;             /**< \brief [13:13] Context Descriptor Error - CDE (rw) */
    Ifx_UReg_32Bit AIS:1;             /**< \brief [14:14] Abnormal Interrupt Summary - AIS (rw) */
    Ifx_UReg_32Bit NIS:1;             /**< \brief [15:15] Normal Interrupt Summary - NIS (rw) */
    Ifx_UReg_32Bit TEB:3;             /**< \brief [18:16] Tx DMA Error Bits - TEB (r) */
    Ifx_UReg_32Bit REB:3;             /**< \brief [21:19] Rx DMA Error Bits - REB (r) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_GETH_DMA_CH_STATUS_Bits;

/** \brief DMA Channel ${i} Transmit Descriptor List Address Register */
typedef struct _Ifx_GETH_DMA_CH_TXDESC_LIST_ADDRESS_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit TDESLA:30;         /**< \brief [31:2] Start of Transmit List - TDESLA (rw) */
} Ifx_GETH_DMA_CH_TXDESC_LIST_ADDRESS_Bits;

/** \brief DMA Channel ${i} Transmit Descriptor Ring Length Register */
typedef struct _Ifx_GETH_DMA_CH_TXDESC_RING_LENGTH_Bits
{
    Ifx_UReg_32Bit TDRL:10;           /**< \brief [9:0] Transmit Descriptor Ring Length - TDRL (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_GETH_DMA_CH_TXDESC_RING_LENGTH_Bits;

/** \brief DMA Channel ${i} Transmit Descriptor Tail Pointer Register */
typedef struct _Ifx_GETH_DMA_CH_TXDESC_TAIL_POINTER_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit TDTP:30;           /**< \brief [31:2] Transmit Descriptor Tail Pointer - TDTP (rw) */
} Ifx_GETH_DMA_CH_TXDESC_TAIL_POINTER_Bits;

/** \brief DMA Channel ${i} Transmit Control Register */
typedef struct _Ifx_GETH_DMA_CH_TX_CONTROL_Bits
{
    Ifx_UReg_32Bit ST:1;              /**< \brief [0:0] Start or Stop Transmission Command - ST (rw) */
    Ifx_UReg_32Bit TCW:3;             /**< \brief [3:1] Transmit Channel Weight - TCW (rw) */
    Ifx_UReg_32Bit OSF:1;             /**< \brief [4:4] Operate on Second Packet - OSF (rw) */
    Ifx_UReg_32Bit reserved_5:7;      /**< \brief [11:5] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_13:2;     /**< \brief [14:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit TXPBL:6;           /**< \brief [21:16] Transmit Programmable Burst Length - TxPBL (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:4;     /**< \brief [27:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_DMA_CH_TX_CONTROL_Bits;

/** \brief DMA Debug Status 0 Register */
typedef struct _Ifx_GETH_DMA_DEBUG_STATUS0_Bits
{
    Ifx_UReg_32Bit AXWHSTS:1;         /**< \brief [0:0] AHB Master Status - AXWHSTS (r) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit RPS0:4;            /**< \brief [11:8] DMA Channel 0 Receive Process State - RPS0 (r) */
    Ifx_UReg_32Bit TPS0:4;            /**< \brief [15:12] DMA Channel 0 Transmit Process State - TPS0 (r) */
    Ifx_UReg_32Bit RPS1:4;            /**< \brief [19:16] DMA Channel 1 Receive Process State - RPS1 (r) */
    Ifx_UReg_32Bit TPS1:4;            /**< \brief [23:20] DMA Channel 1 Transmit Process State - TPS1 (r) */
    Ifx_UReg_32Bit RPS2:4;            /**< \brief [27:24] DMA Channel 2 Receive Process State - RPS2 (r) */
    Ifx_UReg_32Bit TPS2:4;            /**< \brief [31:28] DMA Channel 2 Transmit Process State - TPS2 (r) */
} Ifx_GETH_DMA_DEBUG_STATUS0_Bits;

/** \brief DMA Debug Status 1 Register */
typedef struct _Ifx_GETH_DMA_DEBUG_STATUS1_Bits
{
    Ifx_UReg_32Bit RPS3:4;            /**< \brief [3:0] DMA Channel 3 Receive Process State - RPS3 (r) */
    Ifx_UReg_32Bit TPS3:4;            /**< \brief [7:4] DMA Channel 3 Transmit Process State - TPS3 (r) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_GETH_DMA_DEBUG_STATUS1_Bits;

/** \brief DMA Interrupt Status Register */
typedef struct _Ifx_GETH_DMA_INTERRUPT_STATUS_Bits
{
    Ifx_UReg_32Bit DC0IS:1;           /**< \brief [0:0] DMA Channel 0 Interrupt Status - DC0IS (r) */
    Ifx_UReg_32Bit DC1IS:1;           /**< \brief [1:1] DMA Channel 1 Interrupt Status - DC1IS (r) */
    Ifx_UReg_32Bit DC2IS:1;           /**< \brief [2:2] DMA Channel 2 Interrupt Status - DC2IS (r) */
    Ifx_UReg_32Bit DC3IS:1;           /**< \brief [3:3] DMA Channel 3 Interrupt Status - DC3IS (r) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit MTLIS:1;           /**< \brief [16:16] MTL Interrupt Status - MTLIS (r) */
    Ifx_UReg_32Bit MACIS:1;           /**< \brief [17:17] MAC Interrupt Status - MACIS (r) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_GETH_DMA_INTERRUPT_STATUS_Bits;

/** \brief DMA Bus Mode Register */
typedef struct _Ifx_GETH_DMA_MODE_Bits
{
    Ifx_UReg_32Bit SWR:1;             /**< \brief [0:0] Software Reset - SWR (rw) */
    Ifx_UReg_32Bit DA:1;              /**< \brief [1:1] DMA Tx or Rx Arbitration Scheme - DA (rw) */
    Ifx_UReg_32Bit TAA:3;             /**< \brief [4:2] Transmit Arbitration Algorithm - TAA (rw) */
    Ifx_UReg_32Bit reserved_5:4;      /**< \brief [8:5] \internal Reserved */
    Ifx_UReg_32Bit ARBC:1;            /**< \brief [9:9] Arbitration Control - ARBC (rw) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit TXPR:1;            /**< \brief [11:11] Transmit Priority - TXPR (rw) */
    Ifx_UReg_32Bit PR:3;              /**< \brief [14:12] Priority Ratio - PR (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit INTM:2;            /**< \brief [17:16] Interrupt Mode - INTM (rw) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_GETH_DMA_MODE_Bits;

/** \brief DMA System Bus Mode Register */
typedef struct _Ifx_GETH_DMA_SYSBUS_MODE_Bits
{
    Ifx_UReg_32Bit FB:1;              /**< \brief [0:0] Fixed Burst Length - FB (rw) */
    Ifx_UReg_32Bit reserved_1:7;      /**< \brief [7:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:2;      /**< \brief [9:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit AAL:1;             /**< \brief [12:12] Address-Aligned Beats - AAL (rw) */
    Ifx_UReg_32Bit reserved_13:1;     /**< \brief [13:13] \internal Reserved */
    Ifx_UReg_32Bit MB:1;              /**< \brief [14:14] Mixed Burst - MB (rw) */
    Ifx_UReg_32Bit RB:1;              /**< \brief [15:15] Rebuild INCRx Burst - RB (rw) */
    Ifx_UReg_32Bit reserved_16:3;     /**< \brief [18:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:5;     /**< \brief [23:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:3;     /**< \brief [26:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_27:3;     /**< \brief [29:27] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_GETH_DMA_SYSBUS_MODE_Bits;

/** \brief General Purpose Control Register */
typedef struct _Ifx_GETH_GPCTL_Bits
{
    Ifx_UReg_32Bit ALTI0:2;           /**< \brief [1:0] Alternate Input Select - ALTI0 (rw) */
    Ifx_UReg_32Bit ALTI1:2;           /**< \brief [3:2] Alternate Input Select - ALTI1 (rw) */
    Ifx_UReg_32Bit ALTI2:2;           /**< \brief [5:4] Alternate Input Select - ALTI2 (rw) */
    Ifx_UReg_32Bit ALTI3:2;           /**< \brief [7:6] Alternate Input Select - ALTI3 (rw) */
    Ifx_UReg_32Bit ALTI4:2;           /**< \brief [9:8] Alternate Input Select - ALTI4 (rw) */
    Ifx_UReg_32Bit ALTI5:2;           /**< \brief [11:10] Alternate Input Select - ALTI5 (rw) */
    Ifx_UReg_32Bit ALTI6:2;           /**< \brief [13:12] Alternate Input Select - ALTI6 (rw) */
    Ifx_UReg_32Bit ALTI7:2;           /**< \brief [15:14] Alternate Input Select - ALTI7 (rw) */
    Ifx_UReg_32Bit ALTI8:2;           /**< \brief [17:16] Alternate Input Select - ALTI8 (rw) */
    Ifx_UReg_32Bit ALTI9:2;           /**< \brief [19:18] Alternate Input Select - ALTI9 (rw) */
    Ifx_UReg_32Bit ALTI10:2;          /**< \brief [21:20] Alternate Input Select - ALTI10 (rw) */
    Ifx_UReg_32Bit EPR:3;             /**< \brief [24:22] External Phy Interface RMII Mode Bit - EPR (rw) */
    Ifx_UReg_32Bit reserved_25:6;     /**< \brief [30:25] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_GETH_GPCTL_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_GETH_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUM:16;         /**< \brief [31:16] Module Number Value - MODNUM (r) */
} Ifx_GETH_ID_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_GETH_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_GETH_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_GETH_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_GETH_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_GETH_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_GETH_KRSTCLR_Bits;

/** \brief MAC One Microsecond Tic Counter Register */
typedef struct _Ifx_GETH_MAC_1US_TIC_COUNTER_Bits
{
    Ifx_UReg_32Bit TIC_1US_CNTR:12;    /**< \brief [11:0] 1US TIC Counter - TIC_1US_CNTR (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_GETH_MAC_1US_TIC_COUNTER_Bits;

/** \brief MAC Address ${i} High Register */
typedef struct _Ifx_GETH_MAC_ADDRESS_HIGH_Bits
{
    Ifx_UReg_32Bit ADDRHI:16;         /**< \brief [15:0] MAC Address1 [47:32] - ADDRHI (rw) */
    Ifx_UReg_32Bit DCS:2;             /**< \brief [17:16] DMA Channel Select - DCS (rw) */
    Ifx_UReg_32Bit reserved_18:6;     /**< \brief [23:18] \internal Reserved */
    Ifx_UReg_32Bit MBC:6;             /**< \brief [29:24] Mask Byte Control - MBC (rw) */
    Ifx_UReg_32Bit SA:1;              /**< \brief [30:30] Source Address - SA (rw) */
    Ifx_UReg_32Bit AE:1;              /**< \brief [31:31] Address Enable - AE (rw) */
} Ifx_GETH_MAC_ADDRESS_HIGH_Bits;

/** \brief MAC Address 0 High Register */
typedef struct _Ifx_GETH_MAC_ADDRESS_HIGH0_Bits
{
    Ifx_UReg_32Bit ADDRHI:16;         /**< \brief [15:0] MAC Address0[47:32] - ADDRHI (rw) */
    Ifx_UReg_32Bit DCS:2;             /**< \brief [17:16] DMA Channel Select - DCS (rw) */
    Ifx_UReg_32Bit reserved_18:13;    /**< \brief [30:18] \internal Reserved */
    Ifx_UReg_32Bit AE:1;              /**< \brief [31:31] Address Enable - AE (r) */
} Ifx_GETH_MAC_ADDRESS_HIGH0_Bits;

/** \brief MAC Address ${i} Low Register */
typedef struct _Ifx_GETH_MAC_ADDRESS_LOW_Bits
{
    Ifx_UReg_32Bit ADDRLO:32;         /**< \brief [31:0] MAC Address1 [31:0] - ADDRLO (rw) */
} Ifx_GETH_MAC_ADDRESS_LOW_Bits;

/** \brief MAC Address 0 Low Register */
typedef struct _Ifx_GETH_MAC_ADDRESS_LOW0_Bits
{
    Ifx_UReg_32Bit ADDRLO:32;         /**< \brief [31:0] MAC Address0[31:0] - ADDRLO (rw) */
} Ifx_GETH_MAC_ADDRESS_LOW0_Bits;

/** \brief MAC Configuration Register */
typedef struct _Ifx_GETH_MAC_CONFIGURATION_Bits
{
    Ifx_UReg_32Bit RE:1;              /**< \brief [0:0] Receiver Enable - RE (rw) */
    Ifx_UReg_32Bit TE:1;              /**< \brief [1:1] Transmitter Enable - TE (rw) */
    Ifx_UReg_32Bit PRELEN:2;          /**< \brief [3:2] Preamble Length for Transmit packets - PRELEN (rw) */
    Ifx_UReg_32Bit DC:1;              /**< \brief [4:4] Deferral Check - DC (rw) */
    Ifx_UReg_32Bit BL:2;              /**< \brief [6:5] Back-Off Limit - BL (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit DR:1;              /**< \brief [8:8] Disable Retry - DR (rw) */
    Ifx_UReg_32Bit DCRS:1;            /**< \brief [9:9] Disable Carrier Sense During Transmission - DCRS (rw) */
    Ifx_UReg_32Bit DO:1;              /**< \brief [10:10] Disable Receive Own - DO (rw) */
    Ifx_UReg_32Bit ECRSFD:1;          /**< \brief [11:11] Enable Carrier Sense Before Transmission in Full-Duplex Mode - ECRSFD (rw) */
    Ifx_UReg_32Bit LM:1;              /**< \brief [12:12] Loopback Mode - LM (rw) */
    Ifx_UReg_32Bit DM:1;              /**< \brief [13:13] Duplex Mode - DM (rw) */
    Ifx_UReg_32Bit FES:1;             /**< \brief [14:14] Speed - FES (rw) */
    Ifx_UReg_32Bit PS:1;              /**< \brief [15:15] Port Select - PS (rw) */
    Ifx_UReg_32Bit JE:1;              /**< \brief [16:16] Jumbo Packet Enable - JE (rw) */
    Ifx_UReg_32Bit JD:1;              /**< \brief [17:17] Jabber Disable - JD (rw) */
    Ifx_UReg_32Bit BE:1;              /**< \brief [18:18] Packet Burst Enable - BE (rw) */
    Ifx_UReg_32Bit WD:1;              /**< \brief [19:19] Watchdog Disable - WD (rw) */
    Ifx_UReg_32Bit ACS:1;             /**< \brief [20:20] Automatic Pad or CRC Stripping - ACS (rw) */
    Ifx_UReg_32Bit CST:1;             /**< \brief [21:21] CRC stripping for Type packets - CST (rw) */
    Ifx_UReg_32Bit S2KP:1;            /**< \brief [22:22] IEEE 802.3as Support for 2K Packets - S2KP (rw) */
    Ifx_UReg_32Bit GPSLCE:1;          /**< \brief [23:23] Giant Packet Size Limit Control Enable - GPSLCE (rw) */
    Ifx_UReg_32Bit IPG:3;             /**< \brief [26:24] Inter-Packet Gap - IPG (rw) */
    Ifx_UReg_32Bit IPC:1;             /**< \brief [27:27] Checksum Offload - IPC (rw) */
    Ifx_UReg_32Bit SARC:3;            /**< \brief [30:28] Source Address Insertion or Replacement Control - SARC (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_GETH_MAC_CONFIGURATION_Bits;

/** \brief MAC CSR Software Controls Register */
typedef struct _Ifx_GETH_MAC_CSR_SW_CTRL_Bits
{
    Ifx_UReg_32Bit RCWE:1;            /**< \brief [0:0] Register Clear on Write 1 Enable - RCWE (rw) */
    Ifx_UReg_32Bit reserved_1:7;      /**< \brief [7:1] \internal Reserved */
    Ifx_UReg_32Bit SEEN:1;            /**< \brief [8:8] Slave Error Response Enable - SEEN (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_GETH_MAC_CSR_SW_CTRL_Bits;

/** \brief MAC Debug Register */
typedef struct _Ifx_GETH_MAC_DEBUG_Bits
{
    Ifx_UReg_32Bit RPESTS:1;          /**< \brief [0:0] MAC GMII or MII Receive Protocol Engine Status - RPESTS (r) */
    Ifx_UReg_32Bit RFCFCSTS:2;        /**< \brief [2:1] MAC Receive Packet Controller FIFO Status - RFCFCSTS (r) */
    Ifx_UReg_32Bit reserved_3:13;     /**< \brief [15:3] \internal Reserved */
    Ifx_UReg_32Bit TPESTS:1;          /**< \brief [16:16] MAC GMII or MII Transmit Protocol Engine Status - TPESTS (r) */
    Ifx_UReg_32Bit TFCSTS:2;          /**< \brief [18:17] MAC Transmit Packet Controller Status - TFCSTS (r) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_GETH_MAC_DEBUG_Bits;

/** \brief MAC Extended Configuration Register 1 */
typedef struct _Ifx_GETH_MAC_EXT_CFG1_Bits
{
    Ifx_UReg_32Bit SPLOFST:7;         /**< \brief [6:0] Split Offset - SPLOFST (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit SPLM:2;            /**< \brief [9:8] Split Mode - SPLM (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_GETH_MAC_EXT_CFG1_Bits;

/** \brief MAC Extended Configuration Register */
typedef struct _Ifx_GETH_MAC_EXT_CONFIGURATION_Bits
{
    Ifx_UReg_32Bit GPSL:14;           /**< \brief [13:0] Giant Packet Size Limit - GPSL (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit DCRCC:1;           /**< \brief [16:16] Disable CRC Checking for Received Packets - DCRCC (rw) */
    Ifx_UReg_32Bit SPEN:1;            /**< \brief [17:17] Slow Protocol Detection Enable - SPEN (rw) */
    Ifx_UReg_32Bit USP:1;             /**< \brief [18:18] Unicast Slow Protocol Packet Detect - USP (rw) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit HDSMS:3;           /**< \brief [22:20] Maximum Size for Splitting the Header Data - HDSMS (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit EIPGEN:1;          /**< \brief [24:24] Extended Inter-Packet Gap Enable - EIPGEN (rw) */
    Ifx_UReg_32Bit EIPG:5;            /**< \brief [29:25] Extended Inter-Packet Gap - EIPG (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit FHE:1;             /**< \brief [31:31] Flexible Header Enable (rw) */
} Ifx_GETH_MAC_EXT_CONFIGURATION_Bits;

/** \brief MAC Hardware Feature Register 0 */
typedef struct _Ifx_GETH_MAC_HW_FEATURE0_Bits
{
    Ifx_UReg_32Bit MIISEL:1;          /**< \brief [0:0] 10 or 100 Mbps Support - MIISEL (r) */
    Ifx_UReg_32Bit GMIISEL:1;         /**< \brief [1:1] 1000 Mbps Support - GMIISEL (r) */
    Ifx_UReg_32Bit HDSEL:1;           /**< \brief [2:2] Half-duplex Support - HDSEL (r) */
    Ifx_UReg_32Bit PCSSEL:1;          /**< \brief [3:3] PCS Registers (TBI, SGMII, or RTBI PHY interface) - PCSSEL (r) */
    Ifx_UReg_32Bit VLHASH:1;          /**< \brief [4:4] VLAN Hash Filter Selected - VLHASH (r) */
    Ifx_UReg_32Bit SMASEL:1;          /**< \brief [5:5] SMA (MDIO) Interface - SMASEL (r) */
    Ifx_UReg_32Bit RWKSEL:1;          /**< \brief [6:6] PMT Remote Wake-up Packet Enable - RWKSEL (r) */
    Ifx_UReg_32Bit MGKSEL:1;          /**< \brief [7:7] PMT Magic Packet Enable - MGKSEL (r) */
    Ifx_UReg_32Bit MMCSEL:1;          /**< \brief [8:8] RMON Module Enable - MMCSEL (r) */
    Ifx_UReg_32Bit ARPOFFSEL:1;       /**< \brief [9:9] ARP Offload Enabled - ARPOFFSEL (r) */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit TSSEL:1;           /**< \brief [12:12] IEEE 1588-2008 Timestamp Enabled - TSSEL (r) */
    Ifx_UReg_32Bit EEESEL:1;          /**< \brief [13:13] Energy Efficient Ethernet Enabled - EEESEL (r) */
    Ifx_UReg_32Bit TXCOESEL:1;        /**< \brief [14:14] Transmit Checksum Offload Enabled - TXCOESEL (r) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit RXCOESEL:1;        /**< \brief [16:16] Receive Checksum Offload Enabled - RXCOESEL (r) */
    Ifx_UReg_32Bit reserved_17:1;     /**< \brief [17:17] \internal Reserved */
    Ifx_UReg_32Bit ADDMACADRSEL:5;    /**< \brief [22:18] MAC Addresses 1-31 Selected - ADDMACADRSEL (r) */
    Ifx_UReg_32Bit MACADR32SEL:1;     /**< \brief [23:23] MAC Addresses 32-63 Selected - MACADR32SEL (r) */
    Ifx_UReg_32Bit MACADR64SEL:1;     /**< \brief [24:24] MAC Addresses 64-127 Selected - MACADR64SEL (r) */
    Ifx_UReg_32Bit TSSTSSEL:2;        /**< \brief [26:25] Timestamp System Time Source - TSSTSSEL (r) */
    Ifx_UReg_32Bit SAVLANINS:1;       /**< \brief [27:27] Source Address or VLAN Insertion Enable - SAVLANINS (r) */
    Ifx_UReg_32Bit ACTPHYSEL:3;       /**< \brief [30:28] Active PHY Selected - ACTPHYSEL (r) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_GETH_MAC_HW_FEATURE0_Bits;

/** \brief MAC Hardware Feature Register 1 */
typedef struct _Ifx_GETH_MAC_HW_FEATURE1_Bits
{
    Ifx_UReg_32Bit RXFIFOSIZE:5;      /**< \brief [4:0] MTL Receive FIFO Size - RXFIFOSIZE (r) */
    Ifx_UReg_32Bit SPRAM:1;           /**< \brief [5:5] Single Port RAM Enable - SPRAM (r) */
    Ifx_UReg_32Bit TXFIFOSIZE:5;      /**< \brief [10:6] MTL Transmit FIFO Size - TXFIFOSIZE (r) */
    Ifx_UReg_32Bit OSTEN:1;           /**< \brief [11:11] One-Step Timestamping Enable - OSTEN (r) */
    Ifx_UReg_32Bit PTOEN:1;           /**< \brief [12:12] PTP Offload Enable - PTOEN (r) */
    Ifx_UReg_32Bit ADVTHWORD:1;       /**< \brief [13:13] IEEE 1588 High Word Register Enable - ADVTHWORD (r) */
    Ifx_UReg_32Bit ADDR64:2;          /**< \brief [15:14] Address Width. - ADDR64 (r) */
    Ifx_UReg_32Bit DCBEN:1;           /**< \brief [16:16] DCB Feature Enable - DCBEN (r) */
    Ifx_UReg_32Bit SPHEN:1;           /**< \brief [17:17] Split Header Feature Enable - SPHEN (r) */
    Ifx_UReg_32Bit TSOEN:1;           /**< \brief [18:18] TCP Segmentation Offload Enable - TSOEN (r) */
    Ifx_UReg_32Bit DBGMEMA:1;         /**< \brief [19:19] DMA Debug Registers Enable - DBGMEMA (r) */
    Ifx_UReg_32Bit AVSEL:1;           /**< \brief [20:20] AV Feature Enable - AVSEL (r) */
    Ifx_UReg_32Bit RAVSEL:1;          /**< \brief [21:21] Rx Side Only AV Feature Enable - RAVSEL (r) */
    Ifx_UReg_32Bit reserved_22:1;     /**< \brief [22:22] \internal Reserved */
    Ifx_UReg_32Bit POUOST:1;          /**< \brief [23:23] One Step for PTP over UDP/IP Feature Enable - POUOST (r) */
    Ifx_UReg_32Bit HASHTBLSZ:2;       /**< \brief [25:24] Hash Table Size - HASHTBLSZ (r) */
    Ifx_UReg_32Bit reserved_26:1;     /**< \brief [26:26] \internal Reserved */
    Ifx_UReg_32Bit L3L4FNUM:4;        /**< \brief [30:27] Total number of L3 or L4 Filters - L3L4FNUM (r) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_GETH_MAC_HW_FEATURE1_Bits;

/** \brief MAC Hardware Feature Register 2 */
typedef struct _Ifx_GETH_MAC_HW_FEATURE2_Bits
{
    Ifx_UReg_32Bit RXQCNT:4;          /**< \brief [3:0] Number of MTL Receive Queues - RXQCNT (r) */
    Ifx_UReg_32Bit reserved_4:2;      /**< \brief [5:4] \internal Reserved */
    Ifx_UReg_32Bit TXQCNT:4;          /**< \brief [9:6] Number of MTL Transmit Queues - TXQCNT (r) */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit RXCHCNT:4;         /**< \brief [15:12] Number of DMA Receive Channels - RXCHCNT (r) */
    Ifx_UReg_32Bit reserved_16:2;     /**< \brief [17:16] \internal Reserved */
    Ifx_UReg_32Bit TXCHCNT:4;         /**< \brief [21:18] Number of DMA Transmit Channels - TXCHCNT (r) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit PPSOUTNUM:3;       /**< \brief [26:24] Number of PPS Outputs - PPSOUTNUM (r) */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit AUXSNAPNUM:3;      /**< \brief [30:28] Number of Auxiliary Snapshot Inputs - AUXSNAPNUM (r) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_GETH_MAC_HW_FEATURE2_Bits;

/** \brief MAC Hardware Feature Register 3 */
typedef struct _Ifx_GETH_MAC_HW_FEATURE3_Bits
{
    Ifx_UReg_32Bit NRVF:3;            /**< \brief [2:0] Number of Extended VLAN Tag Filters Enabled - NRVF (r) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit CBTISEL:1;         /**< \brief [4:4] Queue/Channel based VLAN tag insertion on Tx Enable - CBTISEL (r) */
    Ifx_UReg_32Bit DVLAN:1;           /**< \brief [5:5] DVLAN (r) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_GETH_MAC_HW_FEATURE3_Bits;

/** \brief MAC Inner VLAN Tag Inclusion or Replacement Register */
typedef struct _Ifx_GETH_MAC_INNER_VLAN_INCL_Bits
{
    Ifx_UReg_32Bit VLT:16;            /**< \brief [15:0] VLAN Tag for Transmit Packets - VLT (rw) */
    Ifx_UReg_32Bit VLC:2;             /**< \brief [17:16] VLAN Tag Control in Transmit Packets - VLC (rw) */
    Ifx_UReg_32Bit VLP:1;             /**< \brief [18:18] VLAN Priority Control - VLP (rw) */
    Ifx_UReg_32Bit CSVL:1;            /**< \brief [19:19] C-VLAN or S-VLAN - CSVL (rw) */
    Ifx_UReg_32Bit VLTI:1;            /**< \brief [20:20] VLAN Tag Input - VLTI (rw) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_GETH_MAC_INNER_VLAN_INCL_Bits;

/** \brief MAC Interrupt Enable Register */
typedef struct _Ifx_GETH_MAC_INTERRUPT_ENABLE_Bits
{
    Ifx_UReg_32Bit RGSMIIIE:1;        /**< \brief [0:0] RGMII or SMII Interrupt Enable - RGSMIIIE (rw) */
    Ifx_UReg_32Bit reserved_1:2;      /**< \brief [2:1] \internal Reserved */
    Ifx_UReg_32Bit PHYIE:1;           /**< \brief [3:3] PHY Interrupt Enable - PHYIE (rw) */
    Ifx_UReg_32Bit PMTIE:1;           /**< \brief [4:4] PMT Interrupt Enable - PMTIE (rw) */
    Ifx_UReg_32Bit LPIIE:1;           /**< \brief [5:5] LPI Interrupt Enable - LPIIE (rw) */
    Ifx_UReg_32Bit reserved_6:6;      /**< \brief [11:6] \internal Reserved */
    Ifx_UReg_32Bit TSIE:1;            /**< \brief [12:12] Timestamp Interrupt Enable - TSIE (rw) */
    Ifx_UReg_32Bit TXSTSIE:1;         /**< \brief [13:13] Transmit Status Interrupt Enable - TXSTSIE (rw) */
    Ifx_UReg_32Bit RXSTSIE:1;         /**< \brief [14:14] Receive Status Interrupt Enable - RXSTSIE (rw) */
    Ifx_UReg_32Bit reserved_15:3;     /**< \brief [17:15] \internal Reserved */
    Ifx_UReg_32Bit MDIOIE:1;          /**< \brief [18:18] MDIO Interrupt Enable - MDIOIE (rw) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_GETH_MAC_INTERRUPT_ENABLE_Bits;

/** \brief MAC Interrupt Status Register */
typedef struct _Ifx_GETH_MAC_INTERRUPT_STATUS_Bits
{
    Ifx_UReg_32Bit RGSMIIIS:1;        /**< \brief [0:0] RGMII or SMII Interrupt Status - RGSMIIIS (r) */
    Ifx_UReg_32Bit reserved_1:2;      /**< \brief [2:1] \internal Reserved */
    Ifx_UReg_32Bit PHYIS:1;           /**< \brief [3:3] PHY Interrupt - PHYIS (r) */
    Ifx_UReg_32Bit PMTIS:1;           /**< \brief [4:4] PMT Interrupt Status - PMTIS (r) */
    Ifx_UReg_32Bit LPIIS:1;           /**< \brief [5:5] LPI Interrupt Status - LPIIS (r) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit MMCIS:1;           /**< \brief [8:8] MMC Interrupt Status - MMCIS (r) */
    Ifx_UReg_32Bit MMCRXIS:1;         /**< \brief [9:9] MMC Receive Interrupt Status - MMCRXIS (r) */
    Ifx_UReg_32Bit MMCTXIS:1;         /**< \brief [10:10] MMC Transmit Interrupt Status - MMCTXIS (r) */
    Ifx_UReg_32Bit MMCRXIPIS:1;       /**< \brief [11:11] MMC Receive Checksum Offload Interrupt Status - MMCRXIPIS (r) */
    Ifx_UReg_32Bit TSIS:1;            /**< \brief [12:12] Timestamp Interrupt Status - TSIS (r) */
    Ifx_UReg_32Bit TXSTSIS:1;         /**< \brief [13:13] Transmit Status Interrupt - TXSTSIS (r) */
    Ifx_UReg_32Bit RXSTSIS:1;         /**< \brief [14:14] Receive Status Interrupt - RXSTSIS (r) */
    Ifx_UReg_32Bit reserved_15:3;     /**< \brief [17:15] \internal Reserved */
    Ifx_UReg_32Bit MDIOIS:1;          /**< \brief [18:18] MDIO Interrupt Status - MDIOIS (r) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_GETH_MAC_INTERRUPT_STATUS_Bits;

/** \brief MAC LPI Control and Status Register */
typedef struct _Ifx_GETH_MAC_LPI_CONTROL_STATUS_Bits
{
    Ifx_UReg_32Bit TLPIEN:1;          /**< \brief [0:0] Transmit LPI Entry - TLPIEN (r) */
    Ifx_UReg_32Bit TLPIEX:1;          /**< \brief [1:1] Transmit LPI Exit - TLPIEX (r) */
    Ifx_UReg_32Bit RLPIEN:1;          /**< \brief [2:2] Receive LPI Entry - RLPIEN (r) */
    Ifx_UReg_32Bit RLPIEX:1;          /**< \brief [3:3] Receive LPI Exit - RLPIEX (r) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit TLPIST:1;          /**< \brief [8:8] Transmit LPI State - TLPIST (r) */
    Ifx_UReg_32Bit RLPIST:1;          /**< \brief [9:9] Receive LPI State - RLPIST (r) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit LPIEN:1;           /**< \brief [16:16] LPI Enable - LPIEN (rw) */
    Ifx_UReg_32Bit PLS:1;             /**< \brief [17:17] PHY Link Status - PLS (rw) */
    Ifx_UReg_32Bit PLSEN:1;           /**< \brief [18:18] PHY Link Status Enable - PLSEN (rw) */
    Ifx_UReg_32Bit LPITXA:1;          /**< \brief [19:19] LPI Tx Automate - LPITXA (rw) */
    Ifx_UReg_32Bit LPIATE:1;          /**< \brief [20:20] LPI Timer Enable - LPIATE (rw) */
    Ifx_UReg_32Bit LPITCSE:1;         /**< \brief [21:21] LPI Tx Clock Stop Enable - LPITCSE (rw) */
    Ifx_UReg_32Bit reserved_22:10;    /**< \brief [31:22] \internal Reserved */
} Ifx_GETH_MAC_LPI_CONTROL_STATUS_Bits;

/** \brief MAC LPI Entry Timer Register */
typedef struct _Ifx_GETH_MAC_LPI_ENTRY_TIMER_Bits
{
    Ifx_UReg_32Bit reserved_0:3;      /**< \brief [2:0] \internal Reserved */
    Ifx_UReg_32Bit LPIET:17;          /**< \brief [19:3] LPI Entry Timer - LPIET (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_GETH_MAC_LPI_ENTRY_TIMER_Bits;

/** \brief MAC LPI Timers Control Register */
typedef struct _Ifx_GETH_MAC_LPI_TIMERS_CONTROL_Bits
{
    Ifx_UReg_32Bit TWT:16;            /**< \brief [15:0] LPI TW Timer - TWT (rw) */
    Ifx_UReg_32Bit LST:10;            /**< \brief [25:16] LPI LS Timer - LST (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_GETH_MAC_LPI_TIMERS_CONTROL_Bits;

/** \brief MAC MDIO Address Register */
typedef struct _Ifx_GETH_MAC_MDIO_ADDRESS_Bits
{
    Ifx_UReg_32Bit GB:1;              /**< \brief [0:0] GMII Busy - GB (rw) */
    Ifx_UReg_32Bit C45E:1;            /**< \brief [1:1] Clause 45 PHY Enable - C45E (rw) */
    Ifx_UReg_32Bit GOC_0:1;           /**< \brief [2:2] GMII Operation Command 0 - GOC_0 (rw) */
    Ifx_UReg_32Bit GOC_1:1;           /**< \brief [3:3] GMII Operation Command 1 - GOC_1 (rw) */
    Ifx_UReg_32Bit SKAP:1;            /**< \brief [4:4] Skip Address Packet - SKAP (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit CR:4;              /**< \brief [11:8] CSR Clock Range - CR (rw) */
    Ifx_UReg_32Bit NTC:3;             /**< \brief [14:12] Number of Trailing Clocks - NTC (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit RDA:5;             /**< \brief [20:16] Register/Device Address - RDA (rw) */
    Ifx_UReg_32Bit PA:5;              /**< \brief [25:21] Physical Layer Address - PA (rw) */
    Ifx_UReg_32Bit BTB:1;             /**< \brief [26:26] Back to Back transactions - BTB (rw) */
    Ifx_UReg_32Bit PSE:1;             /**< \brief [27:27] Preamble Suppression Enable - PSE (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_MAC_MDIO_ADDRESS_Bits;

/** \brief MAC MDIO Data Register */
typedef struct _Ifx_GETH_MAC_MDIO_DATA_Bits
{
    Ifx_UReg_32Bit GD:16;             /**< \brief [15:0] GMII Data - GD (rw) */
    Ifx_UReg_32Bit RA:16;             /**< \brief [31:16] Register Address - RA (rw) */
} Ifx_GETH_MAC_MDIO_DATA_Bits;

/** \brief MAC Packet Filter Register */
typedef struct _Ifx_GETH_MAC_PACKET_FILTER_Bits
{
    Ifx_UReg_32Bit PR:1;              /**< \brief [0:0] Promiscuous Mode - PR (rw) */
    Ifx_UReg_32Bit reserved_1:2;      /**< \brief [2:1] \internal Reserved */
    Ifx_UReg_32Bit DAIF:1;            /**< \brief [3:3] DA Inverse Filtering - DAIF (rw) */
    Ifx_UReg_32Bit PM:1;              /**< \brief [4:4] Pass All Multicast - PM (rw) */
    Ifx_UReg_32Bit DBF:1;             /**< \brief [5:5] Disable Broadcast Packets - DBF (rw) */
    Ifx_UReg_32Bit PCF:2;             /**< \brief [7:6] Pass Control Packets - PCF (rw) */
    Ifx_UReg_32Bit SAIF:1;            /**< \brief [8:8] SA Inverse Filtering - SAIF (rw) */
    Ifx_UReg_32Bit SAF:1;             /**< \brief [9:9] Source Address Filter Enable - SAF (rw) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit VTFE:1;            /**< \brief [16:16] VLAN Tag Filter Enable - VTFE (rw) */
    Ifx_UReg_32Bit reserved_17:3;     /**< \brief [19:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:2;     /**< \brief [21:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_22:9;     /**< \brief [30:22] \internal Reserved */
    Ifx_UReg_32Bit RA:1;              /**< \brief [31:31] Receive All - RA (rw) */
} Ifx_GETH_MAC_PACKET_FILTER_Bits;

/** \brief MAC PHY Interface Control and Status Register */
typedef struct _Ifx_GETH_MAC_PHYIF_CONTROL_STATUS_Bits
{
    Ifx_UReg_32Bit TC:1;              /**< \brief [0:0] Transmit Configuration in RGMII, SGMII, or SMII - TC (rw) */
    Ifx_UReg_32Bit LUD:1;             /**< \brief [1:1] Link Up or Down - LUD (rw) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_5:11;     /**< \brief [15:5] \internal Reserved */
    Ifx_UReg_32Bit LNKMOD:1;          /**< \brief [16:16] Link Mode - LNKMOD (r) */
    Ifx_UReg_32Bit LNKSPEED:2;        /**< \brief [18:17] Link Speed - LNKSPEED (r) */
    Ifx_UReg_32Bit LNKSTS:1;          /**< \brief [19:19] Link Status - LNKSTS (r) */
    Ifx_UReg_32Bit reserved_20:10;    /**< \brief [29:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_GETH_MAC_PHYIF_CONTROL_STATUS_Bits;

/** \brief MAC PMT Control and Status Register */
typedef struct _Ifx_GETH_MAC_PMT_CONTROL_STATUS_Bits
{
    Ifx_UReg_32Bit PWRDWN:1;          /**< \brief [0:0] Power Down - PWRDWN (rw) */
    Ifx_UReg_32Bit MGKPKTEN:1;        /**< \brief [1:1] Magic Packet Enable - MGKPKTEN (rw) */
    Ifx_UReg_32Bit RWKPKTEN:1;        /**< \brief [2:2] Remote Wake-Up Packet Enable - RWKPKTEN (rw) */
    Ifx_UReg_32Bit reserved_3:2;      /**< \brief [4:3] \internal Reserved */
    Ifx_UReg_32Bit MGKPRCVD:1;        /**< \brief [5:5] Magic Packet Received - MGKPRCVD (r) */
    Ifx_UReg_32Bit RWKPRCVD:1;        /**< \brief [6:6] Remote Wake-Up Packet Received - RWKPRCVD (r) */
    Ifx_UReg_32Bit reserved_7:2;      /**< \brief [8:7] \internal Reserved */
    Ifx_UReg_32Bit GLBLUCAST:1;       /**< \brief [9:9] Global Unicast - GLBLUCAST (rw) */
    Ifx_UReg_32Bit RWKPFE:1;          /**< \brief [10:10] Remote Wake-up Packet Forwarding Enable - RWKPFE (rw) */
    Ifx_UReg_32Bit reserved_11:13;    /**< \brief [23:11] \internal Reserved */
    Ifx_UReg_32Bit RWKPTR:5;          /**< \brief [28:24] Remote Wake-up FIFO Pointer - RWKPTR (r) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit RWKFILTRST:1;      /**< \brief [31:31] Remote Wake-Up Packet Filter Register Pointer Reset - RWKFILTRST (rw) */
} Ifx_GETH_MAC_PMT_CONTROL_STATUS_Bits;

/** \brief MAC PPS 0 Interval Register */
typedef struct _Ifx_GETH_MAC_PPS0_INTERVAL_Bits
{
    Ifx_UReg_32Bit PPSINT0:32;        /**< \brief [31:0] PPS Output Signal Interval - PPSINT0 (rw) */
} Ifx_GETH_MAC_PPS0_INTERVAL_Bits;

/** \brief MAC PPS 0 Target Time Nanoeconds Register */
typedef struct _Ifx_GETH_MAC_PPS0_TARGET_TIME_NANOSECONDS_Bits
{
    Ifx_UReg_32Bit TTSL0:31;          /**< \brief [30:0] Target Time Low for PPS Register - TTSL0 (rw) */
    Ifx_UReg_32Bit TRGTBUSY0:1;       /**< \brief [31:31] PPS Target Time Register Busy - TRGTBUSY0 (rw) */
} Ifx_GETH_MAC_PPS0_TARGET_TIME_NANOSECONDS_Bits;

/** \brief MAC PPS 0 Target Time Seconds Register */
typedef struct _Ifx_GETH_MAC_PPS0_TARGET_TIME_SECONDS_Bits
{
    Ifx_UReg_32Bit TSTRH0:32;         /**< \brief [31:0] PPS Target Time Seconds Register - TSTRH0 (rw) */
} Ifx_GETH_MAC_PPS0_TARGET_TIME_SECONDS_Bits;

/** \brief MAC PPS 0 Width Register */
typedef struct _Ifx_GETH_MAC_PPS0_WIDTH_Bits
{
    Ifx_UReg_32Bit PPSWIDTH0:32;      /**< \brief [31:0] PPS Output Signal Width - PPSWIDTH0 (rw) */
} Ifx_GETH_MAC_PPS0_WIDTH_Bits;

/** \brief MAC PPS Control Register */
typedef struct _Ifx_GETH_MAC_PPS_CONTROL_Bits
{
    Ifx_UReg_32Bit PPSCTRL_PPSCMD:4;    /**< \brief [3:0] Flexible PPS Output (ptp_pps_o[0]) Control - PPSCTRL_PPSCMD (rw) */
    Ifx_UReg_32Bit PPSEN0:1;          /**< \brief [4:4] Flexible PPS Output Mode Enable - PPSEN0 (rw) */
    Ifx_UReg_32Bit TRGTMODSEL0:2;     /**< \brief [6:5] Target Time Register Mode for PPS0 Output - TRGTMODSEL0 (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:3;      /**< \brief [10:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:2;     /**< \brief [12:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_13:2;     /**< \brief [14:13] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:3;     /**< \brief [18:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_19:2;     /**< \brief [20:19] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:2;     /**< \brief [22:21] \internal Reserved */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:3;     /**< \brief [26:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_27:2;     /**< \brief [28:27] \internal Reserved */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_GETH_MAC_PPS_CONTROL_Bits;

/** \brief MAC Queue 0 TX Flow Control Register */
typedef struct _Ifx_GETH_MAC_Q0_TX_FLOW_CTRL_Bits
{
    Ifx_UReg_32Bit FCB_BPA:1;         /**< \brief [0:0] Flow Control Busy or Backpressure Activate - FCB_BPA (rw) */
    Ifx_UReg_32Bit TFE:1;             /**< \brief [1:1] Transmit Flow Control Enable - TFE (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit PLT:3;             /**< \brief [6:4] Pause Low Threshold - PLT (rw) */
    Ifx_UReg_32Bit DZPQ:1;            /**< \brief [7:7] Disable Zero-Quanta Pause - DZPQ (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit PT:16;             /**< \brief [31:16] Pause Time - PT (rw) */
} Ifx_GETH_MAC_Q0_TX_FLOW_CTRL_Bits;

/** \brief MAC Wake-up Packet Filter Register */
typedef struct _Ifx_GETH_MAC_RWK_PACKET_FILTER_Bits
{
    Ifx_UReg_32Bit WKUPFRMFTR:32;     /**< \brief [31:0] RWK Packet Filter - WKUPFRMFTR (rw) */
} Ifx_GETH_MAC_RWK_PACKET_FILTER_Bits;

/** \brief MAC Receive Queue Control 0 Register */
typedef struct _Ifx_GETH_MAC_RXQ_CTRL0_Bits
{
    Ifx_UReg_32Bit RXQ0EN:2;          /**< \brief [1:0] Receive Queue 0 Enable - RXQ0EN (rw) */
    Ifx_UReg_32Bit RXQ1EN:2;          /**< \brief [3:2] Receive Queue 1 Enable - RXQ1EN (rw) */
    Ifx_UReg_32Bit RXQ2EN:2;          /**< \brief [5:4] Receive Queue 2 Enable - RXQ2EN (rw) */
    Ifx_UReg_32Bit RXQ3EN:2;          /**< \brief [7:6] Receive Queue 3 Enable - RXQ3EN (rw) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_MAC_RXQ_CTRL0_Bits;

/** \brief MAC Receive Queue Control 1 Register */
typedef struct _Ifx_GETH_MAC_RXQ_CTRL1_Bits
{
    Ifx_UReg_32Bit AVCPQ:3;           /**< \brief [2:0] AV Untagged Control Packets Queue - AVCPQ (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit PTPQ:3;            /**< \brief [6:4] PTP Packets Queue - PTPQ (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:3;      /**< \brief [10:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit UPQ:3;             /**< \brief [14:12] Untagged Packet Queue - UPQ (rw) */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit MCBCQ:3;           /**< \brief [18:16] Multicast and Broadcast Queue - MCBCQ (rw) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit MCBCQEN:1;         /**< \brief [20:20] Multicast and Broadcast Queue Enable - MCBCQEN (rw) */
    Ifx_UReg_32Bit TACPQE:1;          /**< \brief [21:21] Tagged AV Control Packets Queuing Enable. - TACPQE (rw) */
    Ifx_UReg_32Bit TPQC:2;            /**< \brief [23:22] Tagged PTP over Ethernet Packets Queuing Control - MFFQE (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_GETH_MAC_RXQ_CTRL1_Bits;

/** \brief MAC Receive Queue Control 2 Register */
typedef struct _Ifx_GETH_MAC_RXQ_CTRL2_Bits
{
    Ifx_UReg_32Bit PSRQ0:8;           /**< \brief [7:0] Priorities Selected in the Receive Queue 0 - PSRQ0 (rw) */
    Ifx_UReg_32Bit PSRQ1:8;           /**< \brief [15:8] Priorities Selected in the Receive Queue 1 - PSRQ1 (rw) */
    Ifx_UReg_32Bit PSRQ2:8;           /**< \brief [23:16] Priorities Selected in the Receive Queue 2 - PSRQ2 (rw) */
    Ifx_UReg_32Bit PSRQ3:8;           /**< \brief [31:24] Priorities Selected in the Receive Queue 3 - PSRQ3 (rw) */
} Ifx_GETH_MAC_RXQ_CTRL2_Bits;

/** \brief MAC Receive Queue Control 4 register */
typedef struct _Ifx_GETH_MAC_RXQ_CTRL4_Bits
{
    Ifx_UReg_32Bit UFFQE:1;           /**< \brief [0:0] Unicast Address Filter Fail Packets Queuing Enable  - UFFQE (rw) */
    Ifx_UReg_32Bit UFFQ:2;            /**< \brief [2:1] Unicast Address Filter Fail Packets Queue - UFFQ (rw) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit MFFQE:1;           /**< \brief [8:8] Multicast Address Filter Fail Packets Queuing Enable  - MFFQE (rw) */
    Ifx_UReg_32Bit MFFQ:2;            /**< \brief [10:9] Multicast Address Filter Fail Packets Queue - MFFQ (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit VFFQE:1;           /**< \brief [16:16] VLAN Tag Filter Fail Packets Queuing Enable  - VFFQE (rw) */
    Ifx_UReg_32Bit VFFQ:2;            /**< \brief [18:17] VLAN Tag Filter Fail Packets Queue - VFFQ (rw) */
    Ifx_UReg_32Bit reserved_19:13;    /**< \brief [31:19] \internal Reserved */
} Ifx_GETH_MAC_RXQ_CTRL4_Bits;

/** \brief MAC Receive Flow Control Register */
typedef struct _Ifx_GETH_MAC_RX_FLOW_CTRL_Bits
{
    Ifx_UReg_32Bit RFE:1;             /**< \brief [0:0] Receive Flow Control Enable - RFE (rw) */
    Ifx_UReg_32Bit UP:1;              /**< \brief [1:1] Unicast Pause Packet Detect - UP (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_GETH_MAC_RX_FLOW_CTRL_Bits;

/** \brief MAC Receive Transmit Status Register */
typedef struct _Ifx_GETH_MAC_RX_TX_STATUS_Bits
{
    Ifx_UReg_32Bit TJT:1;             /**< \brief [0:0] Transmit Jabber Timeout - TJT (r) */
    Ifx_UReg_32Bit NCARR:1;           /**< \brief [1:1] No Carrier - NCARR (r) */
    Ifx_UReg_32Bit LCARR:1;           /**< \brief [2:2] Loss of Carrier - LCARR (r) */
    Ifx_UReg_32Bit EXDEF:1;           /**< \brief [3:3] Excessive Deferral - EXDEF (r) */
    Ifx_UReg_32Bit LCOL:1;            /**< \brief [4:4] Late Collision - LCOL (r) */
    Ifx_UReg_32Bit EXCOL:1;           /**< \brief [5:5] Excessive Collisions - EXCOL (r) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit RWT:1;             /**< \brief [8:8] Receive Watchdog Timeout - RWT (r) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_GETH_MAC_RX_TX_STATUS_Bits;

/** \brief MAC Sub-Second Increment Register */
typedef struct _Ifx_GETH_MAC_SUB_SECOND_INCREMENT_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit SNSINC:8;          /**< \brief [15:8] Sub-nanosecond Increment Value - SNSINC (rw) */
    Ifx_UReg_32Bit SSINC:8;           /**< \brief [23:16] Sub-second Increment Value - SSINC (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_GETH_MAC_SUB_SECOND_INCREMENT_Bits;

/** \brief MAC System Time Higher Word Seconds Register */
typedef struct _Ifx_GETH_MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS_Bits
{
    Ifx_UReg_32Bit TSHWR:16;          /**< \brief [15:0] Timestamp Higher Word Register - TSHWR (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS_Bits;

/** \brief MAC System Time Nanoseconds Register */
typedef struct _Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS_Bits
{
    Ifx_UReg_32Bit TSSS:31;           /**< \brief [30:0] Timestamp Sub Seconds - TSSS (r) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS_Bits;

/** \brief MAC System Time Nanoseconds Update Register */
typedef struct _Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE_Bits
{
    Ifx_UReg_32Bit TSSS:31;           /**< \brief [30:0] Timestamp Sub Seconds - TSSS (rw) */
    Ifx_UReg_32Bit ADDSUB:1;          /**< \brief [31:31] Add or Subtract Time - ADDSUB (rw) */
} Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE_Bits;

/** \brief MAC System Time Seconds Register */
typedef struct _Ifx_GETH_MAC_SYSTEM_TIME_SECONDS_Bits
{
    Ifx_UReg_32Bit TSS:32;            /**< \brief [31:0] Timestamp Second - TSS (r) */
} Ifx_GETH_MAC_SYSTEM_TIME_SECONDS_Bits;

/** \brief MAC System Time Seconds Update Register */
typedef struct _Ifx_GETH_MAC_SYSTEM_TIME_SECONDS_UPDATE_Bits
{
    Ifx_UReg_32Bit TSS:32;            /**< \brief [31:0] Timestamp Seconds - TSS (rw) */
} Ifx_GETH_MAC_SYSTEM_TIME_SECONDS_UPDATE_Bits;

/** \brief MAC Timestamp Addend Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_ADDEND_Bits
{
    Ifx_UReg_32Bit TSAR:32;           /**< \brief [31:0] Timestamp Addend Register - TSAR (rw) */
} Ifx_GETH_MAC_TIMESTAMP_ADDEND_Bits;

/** \brief MAC Timestamp Control Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_CONTROL_Bits
{
    Ifx_UReg_32Bit TSENA:1;           /**< \brief [0:0] Enable Timestamp - TSENA (rw) */
    Ifx_UReg_32Bit TSCFUPDT:1;        /**< \brief [1:1] Fine or Coarse Timestamp Update - TSCFUPDT (rw) */
    Ifx_UReg_32Bit TSINIT:1;          /**< \brief [2:2] Initialize Timestamp - TSINIT (rw) */
    Ifx_UReg_32Bit TSUPDT:1;          /**< \brief [3:3] Update Timestamp - TSUPDT (rw) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit TSADDREG:1;        /**< \brief [5:5] Update Addend Register - TSADDREG (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit TSENALL:1;         /**< \brief [8:8] Enable Timestamp for All Packets - TSENALL (rw) */
    Ifx_UReg_32Bit TSCTRLSSR:1;       /**< \brief [9:9] Timestamp Digital or Binary Rollover Control - TSCTRLSSR (rw) */
    Ifx_UReg_32Bit TSVER2ENA:1;       /**< \brief [10:10] Enable PTP Packet Processing for Version 2 Format - TSVER2ENA (rw) */
    Ifx_UReg_32Bit TSIPENA:1;         /**< \brief [11:11] Enable Processing of PTP over Ethernet Packets - TSIPENA (rw) */
    Ifx_UReg_32Bit TSIPV6ENA:1;       /**< \brief [12:12] Enable Processing of PTP Packets Sent over IPv6-UDP - TSIPV6ENA (rw) */
    Ifx_UReg_32Bit TSIPV4ENA:1;       /**< \brief [13:13] Enable Processing of PTP Packets Sent over IPv4-UDP - TSIPV4ENA (rw) */
    Ifx_UReg_32Bit TSEVNTENA:1;       /**< \brief [14:14] Enable Timestamp Snapshot for Event Messages - TSEVNTENA (rw) */
    Ifx_UReg_32Bit TSMSTRENA:1;       /**< \brief [15:15] Enable Snapshot for Messages Relevant to Master - TSMSTRENA (rw) */
    Ifx_UReg_32Bit SNAPTYPSEL:2;      /**< \brief [17:16] Select PTP packets for Taking Snapshots - SNAPTYPSEL (rw) */
    Ifx_UReg_32Bit TSENMACADDR:1;     /**< \brief [18:18] Enable MAC Address for PTP Packet Filtering - TSENMACADDR (rw) */
    Ifx_UReg_32Bit CSC:1;             /**< \brief [19:19] Enable checksum correction during OST for PTP over UDP/IPv4 packets - CSC (rw) */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit TXTSSTSM:1;        /**< \brief [24:24] Transmit Timestamp Status Mode - TXTSSTSM (rw) */
    Ifx_UReg_32Bit reserved_25:3;     /**< \brief [27:25] \internal Reserved */
    Ifx_UReg_32Bit AV8021ASMEN:1;     /**< \brief [28:28] AV 802.1AS Mode Enable - AV8021ASMEN (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_GETH_MAC_TIMESTAMP_CONTROL_Bits;

/** \brief MAC Timestamp Egress Asymmetry Correction Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_EGRESS_ASYM_CORR_Bits
{
    Ifx_UReg_32Bit OSTEAC:32;         /**< \brief [31:0] One-Step Timestamp Egress Asymmetry Correction - OSTEAC (rw) */
} Ifx_GETH_MAC_TIMESTAMP_EGRESS_ASYM_CORR_Bits;

/** \brief MAC Timestamp Egress Correction Nanoseconds Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND_Bits
{
    Ifx_UReg_32Bit TSEC:32;           /**< \brief [31:0] Timestamp Egress Correction - TSEC (rw) */
} Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND_Bits;

/** \brief MAC Timestamp Egress Correction Subnanoseconds Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit TSECSNS:8;         /**< \brief [15:8] Timestamp Egress Correction, sub-nanoseconds - TSECSNS (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC_Bits;

/** \brief MAC Timestamp Ingress Asymmetry Correction Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_INGRESS_ASYM_CORR_Bits
{
    Ifx_UReg_32Bit OSTIAC:32;         /**< \brief [31:0] One-Step Timestamp Ingress Asymmetry Correction - OSTIAC (rw) */
} Ifx_GETH_MAC_TIMESTAMP_INGRESS_ASYM_CORR_Bits;

/** \brief MAC Timestamp Ingress Correction Nanoseconds Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND_Bits
{
    Ifx_UReg_32Bit TSIC:32;           /**< \brief [31:0] Timestamp Ingress Correction - TSIC (rw) */
} Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND_Bits;

/** \brief MAC Timestamp Ingress Correction Subnanoseconds Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC_Bits
{
    Ifx_UReg_32Bit reserved_0:8;      /**< \brief [7:0] \internal Reserved */
    Ifx_UReg_32Bit TSICSNS:8;         /**< \brief [15:8] Timestamp Ingress Correction, sub-nanoseconds - TSICSNS (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC_Bits;

/** \brief MAC Timestamp Status Register */
typedef struct _Ifx_GETH_MAC_TIMESTAMP_STATUS_Bits
{
    Ifx_UReg_32Bit TSSOVF:1;          /**< \brief [0:0] Timestamp Seconds Overflow - TSSOVF (r) */
    Ifx_UReg_32Bit TSTARGT0:1;        /**< \brief [1:1] Timestamp Target Time Reached - TSTARGT0 (r) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit TSTRGTERR0:1;      /**< \brief [3:3] Timestamp Target Time Error - TSTRGTERR0 (r) */
    Ifx_UReg_32Bit TSTARGT1:1;        /**< \brief [4:4] Timestamp Target Time Reached for Target Time PPS1 - TSTARGT1 (r) */
    Ifx_UReg_32Bit TSTRGTERR1:1;      /**< \brief [5:5] Timestamp Target Time Error - TSTRGTERR1 (r) */
    Ifx_UReg_32Bit TSTARGT2:1;        /**< \brief [6:6] Timestamp Target Time Reached for Target Time PPS2 - TSTARGT2 (r) */
    Ifx_UReg_32Bit TSTRGTERR2:1;      /**< \brief [7:7] Timestamp Target Time Error - TSTRGTERR2 (r) */
    Ifx_UReg_32Bit TSTARGT3:1;        /**< \brief [8:8] Timestamp Target Time Reached for Target Time PPS3 - TSTARGT3 (r) */
    Ifx_UReg_32Bit TSTRGTERR3:1;      /**< \brief [9:9] Timestamp Target Time Error - TSTRGTERR3 (r) */
    Ifx_UReg_32Bit reserved_10:5;     /**< \brief [14:10] \internal Reserved */
    Ifx_UReg_32Bit TXTSSIS:1;         /**< \brief [15:15] Tx Timestamp Status Interrupt Status - TXTSSIS (r) */
    Ifx_UReg_32Bit reserved_16:4;     /**< \brief [19:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_GETH_MAC_TIMESTAMP_STATUS_Bits;

/** \brief MAC Transmit Timestamp Nanoseconds Status Register */
typedef struct _Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_NANOSECONDS_Bits
{
    Ifx_UReg_32Bit TXTSSLO:31;        /**< \brief [30:0] Transmit Timestamp Status Low - TXTSSLO (r) */
    Ifx_UReg_32Bit TXTSSMIS:1;        /**< \brief [31:31] Transmit Timestamp Status Missed - TXTSSMIS (r) */
} Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_NANOSECONDS_Bits;

/** \brief MAC Transmit Timestamp Seconds Status Register */
typedef struct _Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_SECONDS_Bits
{
    Ifx_UReg_32Bit TXTSSHI:32;        /**< \brief [31:0] Transmit Timestamp Status High - TXTSSHI (r) */
} Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_SECONDS_Bits;

/** \brief MAC Version Register */
typedef struct _Ifx_GETH_MAC_VERSION_Bits
{
    Ifx_UReg_32Bit SNPSVER:8;         /**< \brief [7:0] Synopsys-defined Version - SNPSVER (r) */
    Ifx_UReg_32Bit USERVER:8;         /**< \brief [15:8] User-defined Version (configured with coreConsultant) - USERVER (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_MAC_VERSION_Bits;

/** \brief MAC VLAN Hash Table Register */
typedef struct _Ifx_GETH_MAC_VLAN_HASH_TABLE_Bits
{
    Ifx_UReg_32Bit VLHT:16;           /**< \brief [15:0] VLAN Hash Table - VLHT (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_MAC_VLAN_HASH_TABLE_Bits;

/** \brief MAC VLAN Tag Inclusion or Replacement Register */
typedef struct _Ifx_GETH_MAC_VLAN_INCL_Bits
{
    Ifx_UReg_32Bit VLT:16;            /**< \brief [15:0] VLAN Tag for Transmit Packets - VLT (rw) */
    Ifx_UReg_32Bit VLC:2;             /**< \brief [17:16] VLAN Tag Control in Transmit Packets - VLC (rw) */
    Ifx_UReg_32Bit VLP:1;             /**< \brief [18:18] VLAN Priority Control - VLP (rw) */
    Ifx_UReg_32Bit CSVL:1;            /**< \brief [19:19] C-VLAN or S-VLAN - CSVL (rw) */
    Ifx_UReg_32Bit VLTI:1;            /**< \brief [20:20] VLAN Tag Input - VLTI (rw) */
    Ifx_UReg_32Bit CBTI:1;            /**< \brief [21:21] Channel based tag insertion - CBTI (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit ADDR:2;            /**< \brief [25:24] Address - ADDR (rw) */
    Ifx_UReg_32Bit reserved_26:4;     /**< \brief [29:26] \internal Reserved */
    Ifx_UReg_32Bit RDWR:1;            /**< \brief [30:30] Read write control - RDWR (rw) */
    Ifx_UReg_32Bit BUSY:1;            /**< \brief [31:31] Busy - BUSY (r) */
} Ifx_GETH_MAC_VLAN_INCL_Bits;

/** \brief MAC VLAN Tag Inclusion or Replacement Register per Queue */
typedef struct _Ifx_GETH_MAC_VLAN_INCL_Q_Bits
{
    Ifx_UReg_32Bit VLT:16;            /**< \brief [15:0] VLAN Tag for Transmit Packets - VLT (rw) */
    Ifx_UReg_32Bit reserved_16:3;     /**< \brief [18:16] \internal Reserved */
    Ifx_UReg_32Bit CSVL:1;            /**< \brief [19:19] C-VLAN or S-VLAN - CSVL (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_GETH_MAC_VLAN_INCL_Q_Bits;

/** \brief MAC VLAN Tag Control Register */
typedef struct _Ifx_GETH_MAC_VLAN_TAG_CTRL_Bits
{
    Ifx_UReg_32Bit OB:1;              /**< \brief [0:0] Operation Busy - OB (rw) */
    Ifx_UReg_32Bit CT:1;              /**< \brief [1:1] Command Type - CT (rw) */
    Ifx_UReg_32Bit OFS:5;             /**< \brief [6:2] Offset - OFS (rw) */
    Ifx_UReg_32Bit reserved_7:10;     /**< \brief [16:7] \internal Reserved */
    Ifx_UReg_32Bit VTIM:1;            /**< \brief [17:17] VLAN Tag Inverse Match Enable - VTIM (rw) */
    Ifx_UReg_32Bit ESVL:1;            /**< \brief [18:18] Enable S-VLAN - ESVL (rw) */
    Ifx_UReg_32Bit reserved_19:2;     /**< \brief [20:19] \internal Reserved */
    Ifx_UReg_32Bit EVLS:2;            /**< \brief [22:21] Enable VLAN Tag Stripping on Receive - EVLS (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit EVLRXS:1;          /**< \brief [24:24] Enable VLAN Tag in Rx status - EVLRXS (rw) */
    Ifx_UReg_32Bit VTHM:1;            /**< \brief [25:25] VLAN Tag Hash Table Match Enable - VTHM (rw) */
    Ifx_UReg_32Bit EDVLP:1;           /**< \brief [26:26] Enable Double VLAN Processing - EDVLP (rw) */
    Ifx_UReg_32Bit RES_27:1;          /**< \brief [27:27] Reserved - RES_27 (rw) */
    Ifx_UReg_32Bit EIVLS:2;           /**< \brief [29:28] Enable Inner VLAN Tag Stripping on Receive - EIVLS (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit EIVLRXS:1;         /**< \brief [31:31] Enable Inner VLAN Tag in Rx Status - EIVLRXS (rw) */
} Ifx_GETH_MAC_VLAN_TAG_CTRL_Bits;

/** \brief MAC VLAN Tag Data Register */
typedef struct _Ifx_GETH_MAC_VLAN_TAG_DATA_Bits
{
    Ifx_UReg_32Bit VID:16;            /**< \brief [15:0] VLAN Tag ID - VID (rw) */
    Ifx_UReg_32Bit VEN:1;             /**< \brief [16:16] VLAN Tag Enable - VEN (rw) */
    Ifx_UReg_32Bit ETV:1;             /**< \brief [17:17] 12bits or 16bits VLAN comparison - ETV (rw) */
    Ifx_UReg_32Bit DOVLTC:1;          /**< \brief [18:18] Disable VLAN Type Comparison - DOVLTC (rw) */
    Ifx_UReg_32Bit ERSVLM:1;          /**< \brief [19:19] Enable S-VLAN Match for received Frames - ERSVLM (rw) */
    Ifx_UReg_32Bit ERIVLT:1;          /**< \brief [20:20] Enable Inner VLAN Tag Comparison - ERIVLT (rw) */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit DMACHEN:1;         /**< \brief [24:24] DMA Channel Number Enable - DMACHEN (rw) */
    Ifx_UReg_32Bit DMACHN:2;          /**< \brief [26:25] DMA Channel Number - DMACHN (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_GETH_MAC_VLAN_TAG_DATA_Bits;

/** \brief MAC VLAN Tag Filter ${i} Register */
typedef struct _Ifx_GETH_MAC_VLAN_TAG_FILTER_Bits
{
    Ifx_UReg_32Bit VID:16;            /**< \brief [15:0] VLAN Tag ID - VID (rw) */
    Ifx_UReg_32Bit VEN:1;             /**< \brief [16:16] VLAN Tag Enable - VEN (rw) */
    Ifx_UReg_32Bit ETV:1;             /**< \brief [17:17] 12bits or 16bits VLAN comparison - ETV (rw) */
    Ifx_UReg_32Bit DOVLTC:1;          /**< \brief [18:18] Disable VLAN Type Comparison - DOVLTC (rw) */
    Ifx_UReg_32Bit ERSVLM:1;          /**< \brief [19:19] Enable S-VLAN Match for received Frames - ERSVLM (rw) */
    Ifx_UReg_32Bit ERIVLT:1;          /**< \brief [20:20] Enable Inner VLAN Tag Comparison - ERIVLT (rw) */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit DMACHEN:1;         /**< \brief [24:24] DMA Channel Number Enable - DMACHEN (rw) */
    Ifx_UReg_32Bit DMACHN:2;          /**< \brief [26:25] DMA Channel Number - DMACHN (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_GETH_MAC_VLAN_TAG_FILTER_Bits;

/** \brief MAC Watchdog Timeout Register */
typedef struct _Ifx_GETH_MAC_WATCHDOG_TIMEOUT_Bits
{
    Ifx_UReg_32Bit WTO:4;             /**< \brief [3:0] Watchdog Timeout - WTO (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit PWE:1;             /**< \brief [8:8] Programmable Watchdog Enable - PWE (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_GETH_MAC_WATCHDOG_TIMEOUT_Bits;

/** \brief MMC Control Register */
typedef struct _Ifx_GETH_MMC_CONTROL_Bits
{
    Ifx_UReg_32Bit CNTRST:1;          /**< \brief [0:0] Counters Reset - CNTRST (rw) */
    Ifx_UReg_32Bit CNTSTOPRO:1;       /**< \brief [1:1] Counter Stop Rollover - CNTSTOPRO (rw) */
    Ifx_UReg_32Bit RSTONRD:1;         /**< \brief [2:2] Reset on Read - RSTONRD (rw) */
    Ifx_UReg_32Bit CNTFREEZ:1;        /**< \brief [3:3] MMC Counter Freeze - CNTFREEZ (rw) */
    Ifx_UReg_32Bit CNTPRST:1;         /**< \brief [4:4] Counters Preset - CNTPRST (rw) */
    Ifx_UReg_32Bit CNTPRSTLVL:1;      /**< \brief [5:5] Full-Half Preset - CNTPRSTLVL (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit UCDBC:1;           /**< \brief [8:8] Update MMC Counters for Dropped Broadcast Packets - UCDBC (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_GETH_MMC_CONTROL_Bits;

/** \brief MMC IPC Receive Interrupts Register */
typedef struct _Ifx_GETH_MMC_IPC_RX_INTERRUPT_Bits
{
    Ifx_UReg_32Bit RXIPV4GPIS:1;      /**< \brief [0:0] MMC Receive IPV4 Good Packet Counter Interrupt Status - RXIPV4GPIS (r) */
    Ifx_UReg_32Bit RXIPV4HERPIS:1;    /**< \brief [1:1] MMC Receive IPV4 Header Error Packet Counter Interrupt Status - RXIPV4HERPIS (r) */
    Ifx_UReg_32Bit RXIPV4NOPAYPIS:1;    /**< \brief [2:2] MMC Receive IPV4 No Payload Packet Counter Interrupt Status - RXIPV4NOPAYPIS (r) */
    Ifx_UReg_32Bit RXIPV4FRAGPIS:1;    /**< \brief [3:3] MMC Receive IPV4 Fragmented Packet Counter Interrupt Status - RXIPV4FRAGPIS (r) */
    Ifx_UReg_32Bit RXIPV4UDSBLPIS:1;    /**< \brief [4:4] MMC Receive IPV4 UDP Checksum Disabled Packet Counter Interrupt Status - RXIPV4UDSBLPIS (r) */
    Ifx_UReg_32Bit RXIPV6GPIS:1;      /**< \brief [5:5] MMC Receive IPV6 Good Packet Counter Interrupt Status - RXIPV6GPIS (r) */
    Ifx_UReg_32Bit RXIPV6HERPIS:1;    /**< \brief [6:6] MMC Receive IPV6 Header Error Packet Counter Interrupt Status - RXIPV6HERPIS (r) */
    Ifx_UReg_32Bit RXIPV6NOPAYPIS:1;    /**< \brief [7:7] MMC Receive IPV6 No Payload Packet Counter Interrupt Status - RXIPV6NOPAYPIS (r) */
    Ifx_UReg_32Bit RXUDPGPIS:1;       /**< \brief [8:8] MC Receive UDP Good Packet Counter Interrupt Status - RXUDPGPIS (r) */
    Ifx_UReg_32Bit RXUDPERPIS:1;      /**< \brief [9:9] MMC Receive UDP Error Packet Counter Interrupt Status - RXUDPERPIS (r) */
    Ifx_UReg_32Bit RXTCPGPIS:1;       /**< \brief [10:10] MMC Receive TCP Good Packet Counter Interrupt Status - RXTCPGPIS (r) */
    Ifx_UReg_32Bit RXTCPERPIS:1;      /**< \brief [11:11] MMC Receive TCP Error Packet Counter Interrupt Status - RXTCPERPIS (r) */
    Ifx_UReg_32Bit RXICMPGPIS:1;      /**< \brief [12:12] MMC Receive ICMP Good Packet Counter Interrupt Status - RXICMPGPIS (r) */
    Ifx_UReg_32Bit RXICMPERPIS:1;     /**< \brief [13:13] MMC Receive ICMP Error Packet Counter Interrupt Status - RXICMPERPIS (r) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit RXIPV4GOIS:1;      /**< \brief [16:16] MMC Receive IPV4 Good Octet Counter Interrupt Status - RXIPV4GOIS (r) */
    Ifx_UReg_32Bit RXIPV4HEROIS:1;    /**< \brief [17:17] MMC Receive IPV4 Header Error Octet Counter Interrupt Status - RXIPV4HEROIS (r) */
    Ifx_UReg_32Bit RXIPV4NOPAYOIS:1;    /**< \brief [18:18] MMC Receive IPV4 No Payload Octet Counter Interrupt Status - RXIPV4NOPAYOIS (r) */
    Ifx_UReg_32Bit RXIPV4FRAGOIS:1;    /**< \brief [19:19] MMC Receive IPV4 Fragmented Octet Counter Interrupt Status - RXIPV4FRAGOIS (r) */
    Ifx_UReg_32Bit RXIPV4UDSBLOIS:1;    /**< \brief [20:20] MMC Receive IPV4 UDP Checksum Disabled Octet Counter Interrupt Status - RXIPV4UDSBLOIS (r) */
    Ifx_UReg_32Bit RXIPV6GOIS:1;      /**< \brief [21:21] MMC Receive IPV6 Good Octet Counter Interrupt Status - RXIPV6GOIS (r) */
    Ifx_UReg_32Bit RXIPV6HEROIS:1;    /**< \brief [22:22] MMC Receive IPV6 Header Error Octet Counter Interrupt Status - RXIPV6HEROIS (r) */
    Ifx_UReg_32Bit RXIPV6NOPAYOIS:1;    /**< \brief [23:23] MMC Receive IPV6 No Payload Octet Counter Interrupt Status - RXIPV6NOPAYOIS (r) */
    Ifx_UReg_32Bit RXUDPGOIS:1;       /**< \brief [24:24] MMC Receive UDP Good Octet Counter Interrupt Status - RXUDPGOIS (r) */
    Ifx_UReg_32Bit RXUDPEROIS:1;      /**< \brief [25:25] MMC Receive UDP Error Octet Counter Interrupt Status - RXUDPEROIS (r) */
    Ifx_UReg_32Bit RXTCPGOIS:1;       /**< \brief [26:26] MMC Receive TCP Good Octet Counter Interrupt Status - RXTCPGOIS (r) */
    Ifx_UReg_32Bit RXTCPEROIS:1;      /**< \brief [27:27] MMC Receive TCP Error Octet Counter Interrupt Status - RXTCPEROIS (r) */
    Ifx_UReg_32Bit RXICMPGOIS:1;      /**< \brief [28:28] MMC Receive ICMP Good Octet Counter Interrupt Status - RXICMPGOIS (r) */
    Ifx_UReg_32Bit RXICMPEROIS:1;     /**< \brief [29:29] MMC Receive ICMP Error Octet Counter Interrupt Status - RXICMPEROIS (r) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_GETH_MMC_IPC_RX_INTERRUPT_Bits;

/** \brief MMC IPC Receive Interrupts Mask Register */
typedef struct _Ifx_GETH_MMC_IPC_RX_INTERRUPT_MASK_Bits
{
    Ifx_UReg_32Bit RXIPV4GPIM:1;      /**< \brief [0:0] MMC Receive IPV4 Good Packet Counter Interrupt Mask - RXIPV4GPIM (rw) */
    Ifx_UReg_32Bit RXIPV4HERPIM:1;    /**< \brief [1:1] MMC Receive IPV4 Header Error Packet Counter Interrupt Mask - RXIPV4HERPIM (rw) */
    Ifx_UReg_32Bit RXIPV4NOPAYPIM:1;    /**< \brief [2:2] MMC Receive IPV4 No Payload Packet Counter Interrupt Mask - RXIPV4NOPAYPIM (rw) */
    Ifx_UReg_32Bit RXIPV4FRAGPIM:1;    /**< \brief [3:3] MMC Receive IPV4 Fragmented Packet Counter Interrupt Mask - RXIPV4FRAGPIM (rw) */
    Ifx_UReg_32Bit RXIPV4UDSBLPIM:1;    /**< \brief [4:4] MMC Receive IPV4 UDP Checksum Disabled Packet Counter Interrupt Mask - RXIPV4UDSBLPIM (rw) */
    Ifx_UReg_32Bit RXIPV6GPIM:1;      /**< \brief [5:5] MMC Receive IPV6 Good Packet Counter Interrupt Mask - RXIPV6GPIM (rw) */
    Ifx_UReg_32Bit RXIPV6HERPIM:1;    /**< \brief [6:6] MMC Receive IPV6 Header Error Packet Counter Interrupt Mask - RXIPV6HERPIM (rw) */
    Ifx_UReg_32Bit RXIPV6NOPAYPIM:1;    /**< \brief [7:7] MMC Receive IPV6 No Payload Packet Counter Interrupt Mask - RXIPV6NOPAYPIM (rw) */
    Ifx_UReg_32Bit RXUDPGPIM:1;       /**< \brief [8:8] MMC Receive UDP Good Packet Counter Interrupt Mask - RXUDPGPIM (rw) */
    Ifx_UReg_32Bit RXUDPERPIM:1;      /**< \brief [9:9] MMC Receive UDP Error Packet Counter Interrupt Mask - RXUDPERPIM (rw) */
    Ifx_UReg_32Bit RXTCPGPIM:1;       /**< \brief [10:10] MMC Receive TCP Good Packet Counter Interrupt Mask - RXTCPGPIM (rw) */
    Ifx_UReg_32Bit RXTCPERPIM:1;      /**< \brief [11:11] MMC Receive TCP Error Packet Counter Interrupt Mask - RXTCPERPIM (rw) */
    Ifx_UReg_32Bit RXICMPGPIM:1;      /**< \brief [12:12] MMC Receive ICMP Good Packet Counter Interrupt Mask - RXICMPGPIM (rw) */
    Ifx_UReg_32Bit RXICMPERPIM:1;     /**< \brief [13:13] MMC Receive ICMP Error Packet Counter Interrupt Mask - RXICMPERPIM (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit RXIPV4GOIM:1;      /**< \brief [16:16] MMC Receive IPV4 Good Octet Counter Interrupt Mask - RXIPV4GOIM (rw) */
    Ifx_UReg_32Bit RXIPV4HEROIM:1;    /**< \brief [17:17] MMC Receive IPV4 Header Error Octet Counter Interrupt Mask - RXIPV4HEROIM (rw) */
    Ifx_UReg_32Bit RXIPV4NOPAYOIM:1;    /**< \brief [18:18] MMC Receive IPV4 No Payload Octet Counter Interrupt Mask - RXIPV4NOPAYOIM (rw) */
    Ifx_UReg_32Bit RXIPV4FRAGOIM:1;    /**< \brief [19:19] MMC Receive IPV4 Fragmented Octet Counter Interrupt Mask - RXIPV4FRAGOIM (rw) */
    Ifx_UReg_32Bit RXIPV4UDSBLOIM:1;    /**< \brief [20:20] MMC Receive IPV4 UDP Checksum Disabled Octet Counter Interrupt Mask - RXIPV4UDSBLOIM (rw) */
    Ifx_UReg_32Bit RXIPV6GOIM:1;      /**< \brief [21:21] MMC Receive IPV6 Good Octet Counter Interrupt Mask - RXIPV6GOIM (rw) */
    Ifx_UReg_32Bit RXIPV6HEROIM:1;    /**< \brief [22:22] MMC Receive IPV6 Good Octet Counter Interrupt Mask - RXIPV6HEROIM (rw) */
    Ifx_UReg_32Bit RXIPV6NOPAYOIM:1;    /**< \brief [23:23] MMC Receive IPV6 Header Error Octet Counter Interrupt Mask - RXIPV6NOPAYOIM (rw) */
    Ifx_UReg_32Bit RXUDPGOIM:1;       /**< \brief [24:24] MMC Receive IPV6 No Payload Octet Counter Interrupt Mask - RXUDPGOIM (rw) */
    Ifx_UReg_32Bit RXUDPEROIM:1;      /**< \brief [25:25] MMC Receive UDP Good Octet Counter Interrupt Mask - RXUDPEROIM (rw) */
    Ifx_UReg_32Bit RXTCPGOIM:1;       /**< \brief [26:26] MMC Receive TCP Good Octet Counter Interrupt Mask - RXTCPGOIM (rw) */
    Ifx_UReg_32Bit RXTCPEROIM:1;      /**< \brief [27:27] MMC Receive TCP Error Octet Counter Interrupt Mask - RXTCPEROIM (rw) */
    Ifx_UReg_32Bit RXICMPGOIM:1;      /**< \brief [28:28] MMC Receive ICMP Good Octet Counter Interrupt Mask - RXICMPGOIM (rw) */
    Ifx_UReg_32Bit RXICMPEROIM:1;     /**< \brief [29:29] MMC Receive ICMP Error Octet Counter Interrupt Mask - RXICMPEROIM (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_GETH_MMC_IPC_RX_INTERRUPT_MASK_Bits;

/** \brief MMC Receive Interrupts Register */
typedef struct _Ifx_GETH_MMC_RX_INTERRUPT_Bits
{
    Ifx_UReg_32Bit RXGBPKTIS:1;       /**< \brief [0:0] MMC Receive Good Bad Packet Counter Interrupt Status - RXGBPKTIS (r) */
    Ifx_UReg_32Bit RXGBOCTIS:1;       /**< \brief [1:1] MMC Receive Good Bad Octet Counter Interrupt Status - RXGBOCTIS (r) */
    Ifx_UReg_32Bit RXGOCTIS:1;        /**< \brief [2:2] MMC Receive Good Octet Counter Interrupt Status - RXGOCTIS (r) */
    Ifx_UReg_32Bit RXBCGPIS:1;        /**< \brief [3:3] MMC Receive Broadcast Good Packet Counter Interrupt Status - RXBCGPIS (r) */
    Ifx_UReg_32Bit RXMCGPIS:1;        /**< \brief [4:4] MMC Receive Multicast Good Packet Counter Interrupt Status - RXMCGPIS (r) */
    Ifx_UReg_32Bit RXCRCERPIS:1;      /**< \brief [5:5] MMC Receive CRC Error Packet Counter Interrupt Status - RXCRCERPIS (r) */
    Ifx_UReg_32Bit RXALGNERPIS:1;     /**< \brief [6:6] MMC Receive Alignment Error Packet Counter Interrupt Status - RXALGNERPIS (r) */
    Ifx_UReg_32Bit RXRUNTPIS:1;       /**< \brief [7:7] MMC Receive Runt Packet Counter Interrupt Status - RXRUNTPIS (r) */
    Ifx_UReg_32Bit RXJABERPIS:1;      /**< \brief [8:8] MMC Receive Jabber Error Packet Counter Interrupt Status - RXJABERPIS (r) */
    Ifx_UReg_32Bit RXUSIZEGPIS:1;     /**< \brief [9:9] MMC Receive Undersize Good Packet Counter Interrupt Status - RXUSIZEGPIS (r) */
    Ifx_UReg_32Bit RXOSIZEGPIS:1;     /**< \brief [10:10] MMC Receive Oversize Good Packet Counter Interrupt Status - RXOSIZEGPIS (r) */
    Ifx_UReg_32Bit RX64OCTGBPIS:1;    /**< \brief [11:11] MMC Receive 64 Octet Good Bad Packet Counter Interrupt Status - RX64OCTGBPIS (r) */
    Ifx_UReg_32Bit RX65T127OCTGBPIS:1;    /**< \brief [12:12] MMC Receive 65 to 127 Octet Good Bad Packet Counter Interrupt Status - RX65T127OCTGBPIS (r) */
    Ifx_UReg_32Bit RX128T255OCTGBPIS:1;    /**< \brief [13:13] MMC Receive 128 to 255 Octet Good Bad Packet Counter Interrupt Status - RX128T255OCTGBPIS (r) */
    Ifx_UReg_32Bit RX256T511OCTGBPIS:1;    /**< \brief [14:14] MMC Receive 256 to 511 Octet Good Bad Packet Counter Interrupt Status - RX256T511OCTGBPIS (r) */
    Ifx_UReg_32Bit RX512T1023OCTGBPIS:1;    /**< \brief [15:15] MMC Receive 512 to 1023 Octet Good Bad Packet Counter Interrupt Status - RX512T1023OCTGBPIS (r) */
    Ifx_UReg_32Bit RX1024TMAXOCTGBPIS:1;    /**< \brief [16:16] MMC Receive 1024 to Maximum Octet Good Bad Packet Counter Interrupt Status - RX1024TMAXOCTGBPIS (r) */
    Ifx_UReg_32Bit RXUCGPIS:1;        /**< \brief [17:17] MMC Receive Unicast Good Packet Counter Interrupt Status - RXUCGPIS (r) */
    Ifx_UReg_32Bit RXLENERPIS:1;      /**< \brief [18:18] MMC Receive Length Error Packet Counter Interrupt Status - RXLENERPIS (r) */
    Ifx_UReg_32Bit RXORANGEPIS:1;     /**< \brief [19:19] MMC Receive Out Of Range Error Packet Counter Interrupt Status. - RXORANGEPIS (r) */
    Ifx_UReg_32Bit RXPAUSPIS:1;       /**< \brief [20:20] MMC Receive Pause Packet Counter Interrupt Status - RXPAUSPIS (r) */
    Ifx_UReg_32Bit RXFOVPIS:1;        /**< \brief [21:21] MMC Receive FIFO Overflow Packet Counter Interrupt Status - RXFOVPIS (r) */
    Ifx_UReg_32Bit RXVLANGBPIS:1;     /**< \brief [22:22] MMC Receive VLAN Good Bad Packet Counter Interrupt Status - RXVLANGBPIS (r) */
    Ifx_UReg_32Bit RXWDOGPIS:1;       /**< \brief [23:23] MMC Receive Watchdog Error Packet Counter Interrupt Status - RXWDOGPIS (r) */
    Ifx_UReg_32Bit RXRCVERRPIS:1;     /**< \brief [24:24] MMC Receive Error Packet Counter Interrupt Status - RXRCVERRPIS (r) */
    Ifx_UReg_32Bit RXCTRLPIS:1;       /**< \brief [25:25] MMC Receive Control Packet Counter Interrupt Status - RXCTRLPIS (r) */
    Ifx_UReg_32Bit RXLPIUSCIS:1;      /**< \brief [26:26] MMC Receive LPI microsecond counter interrupt status - RXLPIUSCIS (r) */
    Ifx_UReg_32Bit RXLPITRCIS:1;      /**< \brief [27:27] MMC Receive LPI transition counter interrupt status - RXLPITRCIS (r) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_MMC_RX_INTERRUPT_Bits;

/** \brief MMC Receive Interrupts Mask Register */
typedef struct _Ifx_GETH_MMC_RX_INTERRUPT_MASK_Bits
{
    Ifx_UReg_32Bit RXGBPKTIM:1;       /**< \brief [0:0] MMC Receive Good Bad Packet Counter Interrupt Mask - RXGBPKTIM (rw) */
    Ifx_UReg_32Bit RXGBOCTIM:1;       /**< \brief [1:1] MMC Receive Good Bad Octet Counter Interrupt Mask - RXGBOCTIM (rw) */
    Ifx_UReg_32Bit RXGOCTIM:1;        /**< \brief [2:2] MMC Receive Good Octet Counter Interrupt Mask - RXGOCTIM (rw) */
    Ifx_UReg_32Bit RXBCGPIM:1;        /**< \brief [3:3] MMC Receive Broadcast Good Packet Counter Interrupt Mask - RXBCGPIM (rw) */
    Ifx_UReg_32Bit RXMCGPIM:1;        /**< \brief [4:4] MMC Receive Multicast Good Packet Counter Interrupt Mask - RXMCGPIM (rw) */
    Ifx_UReg_32Bit RXCRCERPIM:1;      /**< \brief [5:5] MMC Receive CRC Error Packet Counter Interrupt Mask - RXCRCERPIM (rw) */
    Ifx_UReg_32Bit RXALGNERPIM:1;     /**< \brief [6:6] MMC Receive Alignment Error Packet Counter Interrupt Mask - RXALGNERPIM (rw) */
    Ifx_UReg_32Bit RXRUNTPIM:1;       /**< \brief [7:7] MMC Receive Runt Packet Counter Interrupt Mask - RXRUNTPIM (rw) */
    Ifx_UReg_32Bit RXJABERPIM:1;      /**< \brief [8:8] MMC Receive Jabber Error Packet Counter Interrupt Mask - RXJABERPIM (rw) */
    Ifx_UReg_32Bit RXUSIZEGPIM:1;     /**< \brief [9:9] MMC Receive Undersize Good Packet Counter Interrupt Mask - RXUSIZEGPIM (rw) */
    Ifx_UReg_32Bit RXOSIZEGPIM:1;     /**< \brief [10:10] MMC Receive Oversize Good Packet Counter Interrupt Mask - RXOSIZEGPIM (rw) */
    Ifx_UReg_32Bit RX64OCTGBPIM:1;    /**< \brief [11:11] MMC Receive 64 Octet Good Bad Packet Counter Interrupt Mask - RX64OCTGBPIM (rw) */
    Ifx_UReg_32Bit RX65T127OCTGBPIM:1;    /**< \brief [12:12] MMC Receive 65 to 127 Octet Good Bad Packet Counter Interrupt Mask - RX65T127OCTGBPIM (rw) */
    Ifx_UReg_32Bit RX128T255OCTGBPIM:1;    /**< \brief [13:13] MMC Receive 128 to 255 Octet Good Bad Packet Counter Interrupt Mask - RX128T255OCTGBPIM (rw) */
    Ifx_UReg_32Bit RX256T511OCTGBPIM:1;    /**< \brief [14:14] MMC Receive 256 to 511 Octet Good Bad Packet Counter Interrupt Mask - RX256T511OCTGBPIM (rw) */
    Ifx_UReg_32Bit RX512T1023OCTGBPIM:1;    /**< \brief [15:15] MMC Receive 512 to 1023 Octet Good Bad Packet Counter Interrupt Mask - RX512T1023OCTGBPIM (rw) */
    Ifx_UReg_32Bit RX1024TMAXOCTGBPIM:1;    /**< \brief [16:16] MMC Receive 1024 to Maximum Octet Good Bad Packet Counter Interrupt Mask. - RX1024TMAXOCTGBPIM (rw) */
    Ifx_UReg_32Bit RXUCGPIM:1;        /**< \brief [17:17] MMC Receive Unicast Good Packet Counter Interrupt Mask - RXUCGPIM (rw) */
    Ifx_UReg_32Bit RXLENERPIM:1;      /**< \brief [18:18] MMC Receive Length Error Packet Counter Interrupt Mask - RXLENERPIM (rw) */
    Ifx_UReg_32Bit RXORANGEPIM:1;     /**< \brief [19:19] MMC Receive Out Of Range Error Packet Counter Interrupt Mask - RXORANGEPIM (rw) */
    Ifx_UReg_32Bit RXPAUSPIM:1;       /**< \brief [20:20] MMC Receive Pause Packet Counter Interrupt Mask - RXPAUSPIM (rw) */
    Ifx_UReg_32Bit RXFOVPIM:1;        /**< \brief [21:21] MMC Receive FIFO Overflow Packet Counter Interrupt Mask - RXFOVPIM (rw) */
    Ifx_UReg_32Bit RXVLANGBPIM:1;     /**< \brief [22:22] MMC Receive VLAN Good Bad Packet Counter Interrupt Mask - RXVLANGBPIM (rw) */
    Ifx_UReg_32Bit RXWDOGPIM:1;       /**< \brief [23:23] MMC Receive Watchdog Error Packet Counter Interrupt Mask - RXWDOGPIM (rw) */
    Ifx_UReg_32Bit RXRCVERRPIM:1;     /**< \brief [24:24] MMC Receive Error Packet Counter Interrupt Mask - RXRCVERRPIM (rw) */
    Ifx_UReg_32Bit RXCTRLPIM:1;       /**< \brief [25:25] MMC Receive Control Packet Counter Interrupt Mask - RXCTRLPIM (rw) */
    Ifx_UReg_32Bit RXLPIUSCIM:1;      /**< \brief [26:26] MMC Receive LPI microsecond counter interrupt Mask - RXLPIUSCIM (rw) */
    Ifx_UReg_32Bit RXLPITRCIM:1;      /**< \brief [27:27] MMC Receive LPI transition counter interrupt Mask - RXLPITRCIM (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_MMC_RX_INTERRUPT_MASK_Bits;

/** \brief MMC Transmit Interrupts Register */
typedef struct _Ifx_GETH_MMC_TX_INTERRUPT_Bits
{
    Ifx_UReg_32Bit TXGBOCTIS:1;       /**< \brief [0:0] MMC Transmit Good Bad Octet Counter Interrupt Status - TXGBOCTIS (r) */
    Ifx_UReg_32Bit TXGBPKTIS:1;       /**< \brief [1:1] MMC Transmit Good Bad Packet Counter Interrupt Status - TXGBPKTIS (r) */
    Ifx_UReg_32Bit TXBCGPIS:1;        /**< \brief [2:2] MMC Transmit Broadcast Good Packet Counter Interrupt Status - TXBCGPIS (r) */
    Ifx_UReg_32Bit TXMCGPIS:1;        /**< \brief [3:3] MMC Transmit Multicast Good Packet Counter Interrupt Status - TXMCGPIS (r) */
    Ifx_UReg_32Bit TX64OCTGBPIS:1;    /**< \brief [4:4] MMC Transmit 64 Octet Good Bad Packet Counter Interrupt Status - TX64OCTGBPIS (r) */
    Ifx_UReg_32Bit TX65T127OCTGBPIS:1;    /**< \brief [5:5] MMC Transmit 65 to 127 Octet Good Bad Packet Counter Interrupt Status - TX65T127OCTGBPIS (r) */
    Ifx_UReg_32Bit TX128T255OCTGBPIS:1;    /**< \brief [6:6] MMC Transmit 128 to 255 Octet Good Bad Packet Counter Interrupt Status - TX128T255OCTGBPIS (r) */
    Ifx_UReg_32Bit TX256T511OCTGBPIS:1;    /**< \brief [7:7] MMC Transmit 256 to 511 Octet Good Bad Packet Counter Interrupt Status - TX256T511OCTGBPIS (r) */
    Ifx_UReg_32Bit TX512T1023OCTGBPIS:1;    /**< \brief [8:8] MMC Transmit 512 to 1023 Octet Good Bad Packet Counter Interrupt Status - TX512T1023OCTGBPIS (r) */
    Ifx_UReg_32Bit TX1024TMAXOCTGBPIS:1;    /**< \brief [9:9] MMC Transmit 1024 to Maximum Octet Good Bad Packet Counter Interrupt Status - TX1024TMAXOCTGBPIS (r) */
    Ifx_UReg_32Bit TXUCGBPIS:1;       /**< \brief [10:10] MMC Transmit Unicast Good Bad Packet Counter Interrupt Status - TXUCGBPIS (r) */
    Ifx_UReg_32Bit TXMCGBPIS:1;       /**< \brief [11:11] MMC Transmit Multicast Good Bad Packet Counter Interrupt Status - TXMCGBPIS (r) */
    Ifx_UReg_32Bit TXBCGBPIS:1;       /**< \brief [12:12] MMC Transmit Broadcast Good Bad Packet Counter Interrupt Status - TXBCGBPIS (r) */
    Ifx_UReg_32Bit TXUFLOWERPIS:1;    /**< \brief [13:13] MMC Transmit Underflow Error Packet Counter Interrupt Status - TXUFLOWERPIS (r) */
    Ifx_UReg_32Bit TXSCOLGPIS:1;      /**< \brief [14:14] MMC Transmit Single Collision Good Packet Counter Interrupt Status - TXSCOLGPIS (r) */
    Ifx_UReg_32Bit TXMCOLGPIS:1;      /**< \brief [15:15] MMC Transmit Multiple Collision Good Packet Counter Interrupt Status - TXMCOLGPIS (r) */
    Ifx_UReg_32Bit TXDEFPIS:1;        /**< \brief [16:16] MMC Transmit Deferred Packet Counter Interrupt Status - TXDEFPIS (r) */
    Ifx_UReg_32Bit TXLATCOLPIS:1;     /**< \brief [17:17] MMC Transmit Late Collision Packet Counter Interrupt Status - TXLATCOLPIS (r) */
    Ifx_UReg_32Bit TXEXCOLPIS:1;      /**< \brief [18:18] MMC Transmit Excessive Collision Packet Counter Interrupt Status - TXEXCOLPIS (r) */
    Ifx_UReg_32Bit TXCARERPIS:1;      /**< \brief [19:19] MMC Transmit Carrier Error Packet Counter Interrupt Status - TXCARERPIS (r) */
    Ifx_UReg_32Bit TXGOCTIS:1;        /**< \brief [20:20] MMC Transmit Good Octet Counter Interrupt Status - TXGOCTIS (r) */
    Ifx_UReg_32Bit TXGPKTIS:1;        /**< \brief [21:21] MMC Transmit Good Packet Counter Interrupt Status - TXGPKTIS (r) */
    Ifx_UReg_32Bit TXEXDEFPIS:1;      /**< \brief [22:22] MMC Transmit Excessive Deferral Packet Counter Interrupt Status - TXEXDEFPIS (r) */
    Ifx_UReg_32Bit TXPAUSPIS:1;       /**< \brief [23:23] MMC Transmit Pause Packet Counter Interrupt Status - TXPAUSPIS (r) */
    Ifx_UReg_32Bit TXVLANGPIS:1;      /**< \brief [24:24] MMC Transmit VLAN Good Packet Counter Interrupt Status - TXVLANGPIS (r) */
    Ifx_UReg_32Bit TXOSIZEGPIS:1;     /**< \brief [25:25] MMC Transmit Oversize Good Packet Counter Interrupt Status - TXOSIZEGPIS (r) */
    Ifx_UReg_32Bit TXLPIUSCIS:1;      /**< \brief [26:26] MMC Transmit LPI microsecond counter interrupt status - TXLPIUSCIS (r) */
    Ifx_UReg_32Bit TXLPITRCIS:1;      /**< \brief [27:27] MMC Transmit LPI transition counter interrupt status - TXLPITRCIS (r) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_MMC_TX_INTERRUPT_Bits;

/** \brief MMC Transmit Interrupts Mask Register */
typedef struct _Ifx_GETH_MMC_TX_INTERRUPT_MASK_Bits
{
    Ifx_UReg_32Bit TXGBOCTIM:1;       /**< \brief [0:0] MMC Transmit Good Bad Octet Counter Interrupt Mask - TXGBOCTIM (rw) */
    Ifx_UReg_32Bit TXGBPKTIM:1;       /**< \brief [1:1] MMC Transmit Good Bad Packet Counter Interrupt Mask - TXGBPKTIM (rw) */
    Ifx_UReg_32Bit TXBCGPIM:1;        /**< \brief [2:2] MMC Transmit Broadcast Good Packet Counter Interrupt Mask - TXBCGPIM (rw) */
    Ifx_UReg_32Bit TXMCGPIM:1;        /**< \brief [3:3] MMC Transmit Multicast Good Packet Counter Interrupt Mask - TXMCGPIM (rw) */
    Ifx_UReg_32Bit TX64OCTGBPIM:1;    /**< \brief [4:4] MMC Transmit 64 Octet Good Bad Packet Counter Interrupt Mask - TX64OCTGBPIM (rw) */
    Ifx_UReg_32Bit TX65T127OCTGBPIM:1;    /**< \brief [5:5] MMC Transmit 65 to 127 Octet Good Bad Packet Counter Interrupt Mask - TX65T127OCTGBPIM (rw) */
    Ifx_UReg_32Bit TX128T255OCTGBPIM:1;    /**< \brief [6:6] MMC Transmit 128 to 255 Octet Good Bad Packet Counter Interrupt Mask - TX128T255OCTGBPIM (rw) */
    Ifx_UReg_32Bit TX256T511OCTGBPIM:1;    /**< \brief [7:7] MMC Transmit 256 to 511 Octet Good Bad Packet Counter Interrupt Mask - TX256T511OCTGBPIM (rw) */
    Ifx_UReg_32Bit TX512T1023OCTGBPIM:1;    /**< \brief [8:8] MMC Transmit 512 to 1023 Octet Good Bad Packet Counter Interrupt Mask - TX512T1023OCTGBPIM (rw) */
    Ifx_UReg_32Bit TX1024TMAXOCTGBPIM:1;    /**< \brief [9:9] MMC Transmit 1024 to Maximum Octet Good Bad Packet Counter Interrupt Mask - TX1024TMAXOCTGBPIM (rw) */
    Ifx_UReg_32Bit TXUCGBPIM:1;       /**< \brief [10:10] MMC Transmit Unicast Good Bad Packet Counter Interrupt Mask - TXUCGBPIM (rw) */
    Ifx_UReg_32Bit TXMCGBPIM:1;       /**< \brief [11:11] MMC Transmit Multicast Good Bad Packet Counter Interrupt Mask - TXMCGBPIM (rw) */
    Ifx_UReg_32Bit TXBCGBPIM:1;       /**< \brief [12:12] MMC Transmit Broadcast Good Bad Packet Counter Interrupt Mask - TXBCGBPIM (rw) */
    Ifx_UReg_32Bit TXUFLOWERPIM:1;    /**< \brief [13:13] MMC Transmit Underflow Error Packet Counter Interrupt Mask - TXUFLOWERPIM (rw) */
    Ifx_UReg_32Bit TXSCOLGPIM:1;      /**< \brief [14:14] MMC Transmit Single Collision Good Packet Counter Interrupt Mask - TXSCOLGPIM (rw) */
    Ifx_UReg_32Bit TXMCOLGPIM:1;      /**< \brief [15:15] MMC Transmit Multiple Collision Good Packet Counter Interrupt Mask - TXMCOLGPIM (rw) */
    Ifx_UReg_32Bit TXDEFPIM:1;        /**< \brief [16:16] MMC Transmit Deferred Packet Counter Interrupt Mask - TXDEFPIM (rw) */
    Ifx_UReg_32Bit TXLATCOLPIM:1;     /**< \brief [17:17] MMC Transmit Late Collision Packet Counter Interrupt Mask - TXLATCOLPIM (rw) */
    Ifx_UReg_32Bit TXEXCOLPIM:1;      /**< \brief [18:18] MMC Transmit Excessive Collision Packet Counter Interrupt Mask - TXEXCOLPIM (rw) */
    Ifx_UReg_32Bit TXCARERPIM:1;      /**< \brief [19:19] MMC Transmit Carrier Error Packet Counter Interrupt Mask - TXCARERPIM (rw) */
    Ifx_UReg_32Bit TXGOCTIM:1;        /**< \brief [20:20] MMC Transmit Good Octet Counter Interrupt Mask - TXGOCTIM (rw) */
    Ifx_UReg_32Bit TXGPKTIM:1;        /**< \brief [21:21] MMC Transmit Good Packet Counter Interrupt Mask - TXGPKTIM (rw) */
    Ifx_UReg_32Bit TXEXDEFPIM:1;      /**< \brief [22:22] MMC Transmit Excessive Deferral Packet Counter Interrupt Mask - TXEXDEFPIM (rw) */
    Ifx_UReg_32Bit TXPAUSPIM:1;       /**< \brief [23:23] MMC Transmit Pause Packet Counter Interrupt Mask - TXPAUSPIM (rw) */
    Ifx_UReg_32Bit TXVLANGPIM:1;      /**< \brief [24:24] MMC Transmit VLAN Good Packet Counter Interrupt Mask - TXVLANGPIM (rw) */
    Ifx_UReg_32Bit TXOSIZEGPIM:1;     /**< \brief [25:25] MMC Transmit Oversize Good Packet Counter Interrupt Mask - TXOSIZEGPIM (rw) */
    Ifx_UReg_32Bit TXLPIUSCIM:1;      /**< \brief [26:26] MMC Transmit LPI microsecond counter interrupt Mask - TXLPIUSCIM (rw) */
    Ifx_UReg_32Bit TXLPITRCIM:1;      /**< \brief [27:27] MMC Transmit LPI transition counter interrupt Mask - TXLPITRCIM (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_MMC_TX_INTERRUPT_MASK_Bits;

/** \brief MTL Interrupt Status Register */
typedef struct _Ifx_GETH_MTL_INTERRUPT_STATUS_Bits
{
    Ifx_UReg_32Bit Q0IS:1;            /**< \brief [0:0] Queue 0 Interrupt status - Q0IS (r) */
    Ifx_UReg_32Bit Q1IS:1;            /**< \brief [1:1] Queue 1 Interrupt status - Q1IS (r) */
    Ifx_UReg_32Bit Q2IS:1;            /**< \brief [2:2] Queue 2 Interrupt status - Q2IS (r) */
    Ifx_UReg_32Bit Q3IS:1;            /**< \brief [3:3] Queue 3 Interrupt status - Q3IS (r) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:2;     /**< \brief [17:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_GETH_MTL_INTERRUPT_STATUS_Bits;

/** \brief MTL Operation Mode Register */
typedef struct _Ifx_GETH_MTL_OPERATION_MODE_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit DTXSTS:1;          /**< \brief [1:1] Drop Transmit Status - DTXSTS (rw) */
    Ifx_UReg_32Bit RAA:1;             /**< \brief [2:2] Receive Arbitration Algorithm - RAA (rw) */
    Ifx_UReg_32Bit reserved_3:2;      /**< \brief [4:3] \internal Reserved */
    Ifx_UReg_32Bit SCHALG:2;          /**< \brief [6:5] Tx Scheduling Algorithm - SCHALG (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit CNTPRST:1;         /**< \brief [8:8] Counters Preset - CNTPRST (rw) */
    Ifx_UReg_32Bit CNTCLR:1;          /**< \brief [9:9] Counters Reset - CNTCLR (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_GETH_MTL_OPERATION_MODE_Bits;

/** \brief MTL Queue 0 Interrupt Control Status Register */
typedef struct _Ifx_GETH_MTL_Q0_INTERRUPT_CONTROL_STATUS_Bits
{
    Ifx_UReg_32Bit TXUNFIS:1;         /**< \brief [0:0] Transmit Queue Underflow Interrupt Status - TXUNFIS (rw) */
    Ifx_UReg_32Bit ABPSIS:1;          /**< \brief [1:1] Average Bits Per Slot Interrupt Status - ABPSIS (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit TXUIE:1;           /**< \brief [8:8] Transmit Queue Underflow Interrupt Enable - TXUIE (rw) */
    Ifx_UReg_32Bit ABPSIE:1;          /**< \brief [9:9] Average Bits Per Slot Interrupt Enable - ABPSIE (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit RXOVFIS:1;         /**< \brief [16:16] Receive Queue Overflow Interrupt Status - RXOVFIS (rw) */
    Ifx_UReg_32Bit reserved_17:7;     /**< \brief [23:17] \internal Reserved */
    Ifx_UReg_32Bit RXOIE:1;           /**< \brief [24:24] Receive Queue Overflow Interrupt Enable - RXOIE (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_GETH_MTL_Q0_INTERRUPT_CONTROL_STATUS_Bits;

/** \brief MTL Queue ${i} Interrupt Status Register */
typedef struct _Ifx_GETH_MTL_Q_INTERRUPT_CONTROL_STATUS_Bits
{
    Ifx_UReg_32Bit TXUNFIS:1;         /**< \brief [0:0] Transmit Queue Underflow Interrupt Status - TXUNFIS (rw) */
    Ifx_UReg_32Bit ABPSIS:1;          /**< \brief [1:1] Average Bits Per Slot Interrupt Status - ABPSIS (rw) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit TXUIE:1;           /**< \brief [8:8] Transmit Queue Underflow Interrupt Enable - TXUIE (rw) */
    Ifx_UReg_32Bit ABPSIE:1;          /**< \brief [9:9] Average Bits Per Slot Interrupt Enable - ABPSIE (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit RXOVFIS:1;         /**< \brief [16:16] Receive Queue Overflow Interrupt Status - RXOVFIS (rw) */
    Ifx_UReg_32Bit reserved_17:7;     /**< \brief [23:17] \internal Reserved */
    Ifx_UReg_32Bit RXOIE:1;           /**< \brief [24:24] Receive Queue Overflow Interrupt Enable - RXOIE (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_GETH_MTL_Q_INTERRUPT_CONTROL_STATUS_Bits;

/** \brief MTL Queue 0 Receive Control Register */
typedef struct _Ifx_GETH_MTL_RXQ0_CONTROL_Bits
{
    Ifx_UReg_32Bit RXQ_WEGT:3;        /**< \brief [2:0] Receive Queue Weight - RXQ_WEGT (rw) */
    Ifx_UReg_32Bit RXQ_FRM_ARBIT:1;    /**< \brief [3:3] Receive Queue Packet Arbitration - RXQ_FRM_ARBIT (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_GETH_MTL_RXQ0_CONTROL_Bits;

/** \brief MTL Queue 0 Receive Debug Register */
typedef struct _Ifx_GETH_MTL_RXQ0_DEBUG_Bits
{
    Ifx_UReg_32Bit RWCSTS:1;          /**< \brief [0:0] MTL Rx Queue Write Controller Active Status - RWCSTS (r) */
    Ifx_UReg_32Bit RRCSTS:2;          /**< \brief [2:1] MTL Rx Queue Read Controller State - RRCSTS (r) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit RXQSTS:2;          /**< \brief [5:4] MTL Rx Queue Fill-Level Status - RXQSTS (r) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit PRXQ:14;           /**< \brief [29:16] Number of Packets in Receive Queue - PRXQ (r) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_GETH_MTL_RXQ0_DEBUG_Bits;

/** \brief MTL Queue 0 Receive Missed Packet and Overflow Counter Register */
typedef struct _Ifx_GETH_MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT_Bits
{
    Ifx_UReg_32Bit OVFPKTCNT:11;      /**< \brief [10:0] Overflow Packet Counter - OVFPKTCNT (r) */
    Ifx_UReg_32Bit OVFCNTOVF:1;       /**< \brief [11:11] Overflow Counter Overflow Bit - OVFCNTOVF (r) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit MISPKTCNT:11;      /**< \brief [26:16] Missed Packet Counter - MISPKTCNT (r) */
    Ifx_UReg_32Bit MISCNTOVF:1;       /**< \brief [27:27] Missed Packet Counter Overflow Bit - MISCNTOVF (r) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT_Bits;

/** \brief MTL Queue 0 Receive Operation Mode Register */
typedef struct _Ifx_GETH_MTL_RXQ0_OPERATION_MODE_Bits
{
    Ifx_UReg_32Bit RTC:2;             /**< \brief [1:0] Receive Queue Threshold Control - RTC (rw) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit FUP:1;             /**< \brief [3:3] Forward Undersized Good Packets - FUP (rw) */
    Ifx_UReg_32Bit FEP:1;             /**< \brief [4:4] Forward Error Packets - FEP (rw) */
    Ifx_UReg_32Bit RSF:1;             /**< \brief [5:5] Receive Queue Store and Forward - RSF (rw) */
    Ifx_UReg_32Bit DIS_TCP_EF:1;      /**< \brief [6:6] Disable Dropping of TCP/IP Checksum Error Packets - DIS_TCP_EF (rw) */
    Ifx_UReg_32Bit EHFC:1;            /**< \brief [7:7] Enable Hardware Flow Control - EHFC (rw) */
    Ifx_UReg_32Bit RFA:4;             /**< \brief [11:8] Threshold for Activating Flow Control (in half-duplex and full-duplex - RFA (rw) */
    Ifx_UReg_32Bit reserved_12:2;     /**< \brief [13:12] \internal Reserved */
    Ifx_UReg_32Bit RFD:4;             /**< \brief [17:14] Threshold for Deactivating Flow Control (in half-duplex and full-duplex modes) - RFD (rw) */
    Ifx_UReg_32Bit reserved_18:2;     /**< \brief [19:18] \internal Reserved */
    Ifx_UReg_32Bit RQS:5;             /**< \brief [24:20] Receive Queue Size - RQS (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_GETH_MTL_RXQ0_OPERATION_MODE_Bits;

/** \brief MTL Queue ${i} Receive Control Register */
typedef struct _Ifx_GETH_MTL_RXQ_CONTROL_Bits
{
    Ifx_UReg_32Bit RXQ_WEGT:3;        /**< \brief [2:0] Receive Queue Weight - RXQ_WEGT (rw) */
    Ifx_UReg_32Bit RXQ_FRM_ARBIT:1;    /**< \brief [3:3] Receive Queue Packet Arbitration - RXQ_FRM_ARBIT (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_GETH_MTL_RXQ_CONTROL_Bits;

/** \brief MTL Queue ${i} Receive Debug Register */
typedef struct _Ifx_GETH_MTL_RXQ_DEBUG_Bits
{
    Ifx_UReg_32Bit RWCSTS:1;          /**< \brief [0:0] MTL Rx Queue Write Controller Active Status - RWCSTS (r) */
    Ifx_UReg_32Bit RRCSTS:2;          /**< \brief [2:1] MTL Rx Queue Read Controller State - RRCSTS (r) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit RXQSTS:2;          /**< \brief [5:4] MTL Rx Queue Fill-Level Status - RXQSTS (r) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit PRXQ:14;           /**< \brief [29:16] Number of Packets in Receive Queue - PRXQ (r) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_GETH_MTL_RXQ_DEBUG_Bits;

/** \brief MTL Receive Queue and DMA Channel Mapping 0 Register */
typedef struct _Ifx_GETH_MTL_RXQ_DMA_MAP0_Bits
{
    Ifx_UReg_32Bit Q0MDMACH:2;        /**< \brief [1:0] Queue 0 Mapped to DMA Channel - Q0MDMACH (rw) */
    Ifx_UReg_32Bit reserved_2:2;      /**< \brief [3:2] \internal Reserved */
    Ifx_UReg_32Bit Q0DDMACH:1;        /**< \brief [4:4] Queue 0 Enabled for DA-based DMA Channel Selection - Q0DDMACH (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit Q1MDMACH:2;        /**< \brief [9:8] Queue 1 Mapped to DMA Channel - Q1MDMACH (rw) */
    Ifx_UReg_32Bit reserved_10:2;     /**< \brief [11:10] \internal Reserved */
    Ifx_UReg_32Bit Q1DDMACH:1;        /**< \brief [12:12] Queue 1 Enabled for DA-based DMA Channel Selection - Q1DDMACH (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit Q2MDMACH:2;        /**< \brief [17:16] Queue 2 Mapped to DMA Channel - Q2MDMACH (rw) */
    Ifx_UReg_32Bit reserved_18:2;     /**< \brief [19:18] \internal Reserved */
    Ifx_UReg_32Bit Q2DDMACH:1;        /**< \brief [20:20] Queue 2 Enabled for DA-based DMA Channel Selection - Q2DDMACH (rw) */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit Q3MDMACH:2;        /**< \brief [25:24] Queue 3 Mapped to DMA Channel - Q3MDMACH (rw) */
    Ifx_UReg_32Bit reserved_26:2;     /**< \brief [27:26] \internal Reserved */
    Ifx_UReg_32Bit Q3DDMACH:1;        /**< \brief [28:28] Queue 3 Enabled for Dynamic (per packet) DMA Channel Selection - Q3DDMACH (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_GETH_MTL_RXQ_DMA_MAP0_Bits;

/** \brief MTL Queue ${i} Receive Missed Packet and Overflow Counter Register */
typedef struct _Ifx_GETH_MTL_RXQ_MISSED_PACKET_OVERFLOW_CNT_Bits
{
    Ifx_UReg_32Bit OVFPKTCNT:11;      /**< \brief [10:0] Overflow Packet Counter - OVFPKTCNT (r) */
    Ifx_UReg_32Bit OVFCNTOVF:1;       /**< \brief [11:11] Overflow Counter Overflow Bit - OVFCNTOVF (r) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit MISPKTCNT:11;      /**< \brief [26:16] Missed Packet Counter - MISPKTCNT (r) */
    Ifx_UReg_32Bit MISCNTOVF:1;       /**< \brief [27:27] Missed Packet Counter Overflow Bit - MISCNTOVF (r) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_MTL_RXQ_MISSED_PACKET_OVERFLOW_CNT_Bits;

/** \brief MTL Queue ${i} Receive Operation Mode Register */
typedef struct _Ifx_GETH_MTL_RXQ_OPERATION_MODE_Bits
{
    Ifx_UReg_32Bit RTC:2;             /**< \brief [1:0] Receive Queue Threshold Control - RTC (rw) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit FUP:1;             /**< \brief [3:3] Forward Undersized Good Packets - FUP (rw) */
    Ifx_UReg_32Bit FEP:1;             /**< \brief [4:4] Forward Error Packets - FEP (rw) */
    Ifx_UReg_32Bit RSF:1;             /**< \brief [5:5] Receive Queue Store and Forward - RSF (rw) */
    Ifx_UReg_32Bit DIS_TCP_EF:1;      /**< \brief [6:6] Disable Dropping of TCP/IP Checksum Error Packets - DIS_TCP_EF (rw) */
    Ifx_UReg_32Bit EHFC:1;            /**< \brief [7:7] Enable Hardware Flow Control - EHFC (rw) */
    Ifx_UReg_32Bit RFA:4;             /**< \brief [11:8] Threshold for Activating Flow Control (in half-duplex and full-duplex - RFA (rw) */
    Ifx_UReg_32Bit reserved_12:2;     /**< \brief [13:12] \internal Reserved */
    Ifx_UReg_32Bit RFD:4;             /**< \brief [17:14] Threshold for Deactivating Flow Control (in half-duplex and full-duplex modes) - RFD (rw) */
    Ifx_UReg_32Bit reserved_18:2;     /**< \brief [19:18] \internal Reserved */
    Ifx_UReg_32Bit RQS:5;             /**< \brief [24:20] Receive Queue Size - RQS (rw) */
    Ifx_UReg_32Bit reserved_25:7;     /**< \brief [31:25] \internal Reserved */
} Ifx_GETH_MTL_RXQ_OPERATION_MODE_Bits;

/** \brief MTL Queue 0 Transmit Debug Register */
typedef struct _Ifx_GETH_MTL_TXQ0_DEBUG_Bits
{
    Ifx_UReg_32Bit TXQPAUSED:1;       /**< \brief [0:0] Transmit Queue in Pause - TXQPAUSED (r) */
    Ifx_UReg_32Bit TRCSTS:2;          /**< \brief [2:1] MTL Tx Queue Read Controller Status - TRCSTS (r) */
    Ifx_UReg_32Bit TWCSTS:1;          /**< \brief [3:3] MTL Tx Queue Write Controller Status - TWCSTS (r) */
    Ifx_UReg_32Bit TXQSTS:1;          /**< \brief [4:4] MTL Tx Queue Not Empty Status - TXQSTS (r) */
    Ifx_UReg_32Bit TXSTSFSTS:1;       /**< \brief [5:5] MTL Tx Status FIFO Full Status - TXSTSFSTS (r) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit PTXQ:3;            /**< \brief [18:16] Number of Packets in the Transmit Queue - PTXQ (r) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit STXSTSF:3;         /**< \brief [22:20] Number of Status Words in Tx Status FIFO of Queue - STXSTSF (r) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_GETH_MTL_TXQ0_DEBUG_Bits;

/** \brief MTL Queue 0 Transmit Status Register */
typedef struct _Ifx_GETH_MTL_TXQ0_ETS_STATUS_Bits
{
    Ifx_UReg_32Bit ABS:24;            /**< \brief [23:0] Average Bits per Slot This field contains the average transmitted bits per slot. - ABS (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_GETH_MTL_TXQ0_ETS_STATUS_Bits;

/** \brief MTL Queue 0 Transmit Operation Mode Register */
typedef struct _Ifx_GETH_MTL_TXQ0_OPERATION_MODE_Bits
{
    Ifx_UReg_32Bit FTQ:1;             /**< \brief [0:0] Flush Transmit Queue - FTQ (rw) */
    Ifx_UReg_32Bit TSF:1;             /**< \brief [1:1] Transmit Store and Forward - TSF (rw) */
    Ifx_UReg_32Bit TXQEN:2;           /**< \brief [3:2] Transmit Queue Enable - TXQEN (rw) */
    Ifx_UReg_32Bit TTC:3;             /**< \brief [6:4] Transmit Threshold Control - TTC (rw) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit TQS:4;             /**< \brief [19:16] Transmit Queue Size - TQS (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_GETH_MTL_TXQ0_OPERATION_MODE_Bits;

/** \brief MTL Queue 0 Transmit Quantum or Weights Register */
typedef struct _Ifx_GETH_MTL_TXQ0_QUANTUM_WEIGHT_Bits
{
    Ifx_UReg_32Bit ISCQW:21;          /**< \brief [20:0] Quantum or Weights - ISCQW (rw) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_GETH_MTL_TXQ0_QUANTUM_WEIGHT_Bits;

/** \brief MTL Queue 0 Transmit Underflow Counter Register */
typedef struct _Ifx_GETH_MTL_TXQ0_UNDERFLOW_Bits
{
    Ifx_UReg_32Bit UFFRMCNT:11;       /**< \brief [10:0] Underflow Packet Counter - UFFRMCNT (r) */
    Ifx_UReg_32Bit UFCNTOVF:1;        /**< \brief [11:11] Overflow Bit for Underflow Packet Counter - UFCNTOVF (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_GETH_MTL_TXQ0_UNDERFLOW_Bits;

/** \brief MTL Queue ${i} Transmit Debug Register */
typedef struct _Ifx_GETH_MTL_TXQ_DEBUG_Bits
{
    Ifx_UReg_32Bit TXQPAUSED:1;       /**< \brief [0:0] Transmit Queue in Pause - TXQPAUSED (r) */
    Ifx_UReg_32Bit TRCSTS:2;          /**< \brief [2:1] MTL Tx Queue Read Controller Status - TRCSTS (r) */
    Ifx_UReg_32Bit TWCSTS:1;          /**< \brief [3:3] MTL Tx Queue Write Controller Status - TWCSTS (r) */
    Ifx_UReg_32Bit TXQSTS:1;          /**< \brief [4:4] MTL Tx Queue Not Empty Status - TXQSTS (r) */
    Ifx_UReg_32Bit TXSTSFSTS:1;       /**< \brief [5:5] MTL Tx Status FIFO Full Status - TXSTSFSTS (r) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit PTXQ:3;            /**< \brief [18:16] Number of Packets in the Transmit Queue - PTXQ (r) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit STXSTSF:3;         /**< \brief [22:20] Number of Status Words in Tx Status FIFO of Queue - STXSTSF (r) */
    Ifx_UReg_32Bit reserved_23:9;     /**< \brief [31:23] \internal Reserved */
} Ifx_GETH_MTL_TXQ_DEBUG_Bits;

/** \brief MTL Queue ${i} Transmit ETS Control Register */
typedef struct _Ifx_GETH_MTL_TXQ_ETS_CONTROL_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit AVALG:1;           /**< \brief [2:2] AV Algorithm - AVALG (rw) */
    Ifx_UReg_32Bit CC:1;              /**< \brief [3:3] Credit Control - CC (rw) */
    Ifx_UReg_32Bit SLC:3;             /**< \brief [6:4] Slot Count - SLC (rw) */
    Ifx_UReg_32Bit reserved_7:25;     /**< \brief [31:7] \internal Reserved */
} Ifx_GETH_MTL_TXQ_ETS_CONTROL_Bits;

/** \brief MTL Queue ${i} Transmit ETS Status Register */
typedef struct _Ifx_GETH_MTL_TXQ_ETS_STATUS_Bits
{
    Ifx_UReg_32Bit ABS:24;            /**< \brief [23:0] Average Bits per Slot - ABS (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_GETH_MTL_TXQ_ETS_STATUS_Bits;

/** \brief MTL Queue ${i} Transmit HiCredit Register */
typedef struct _Ifx_GETH_MTL_TXQ_HICREDIT_Bits
{
    Ifx_UReg_32Bit HC:29;             /**< \brief [28:0] hiCredit Value - HC (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_GETH_MTL_TXQ_HICREDIT_Bits;

/** \brief MTL Queue ${i} Transmit LoCredit Register */
typedef struct _Ifx_GETH_MTL_TXQ_LOCREDIT_Bits
{
    Ifx_UReg_32Bit LC:29;             /**< \brief [28:0] loCredit Value - LC (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_GETH_MTL_TXQ_LOCREDIT_Bits;

/** \brief MTL Queue ${i} Transmit Operation Mode Register */
typedef struct _Ifx_GETH_MTL_TXQ_OPERATION_MODE_Bits
{
    Ifx_UReg_32Bit FTQ:1;             /**< \brief [0:0] Flush Transmit Queue - FTQ (rw) */
    Ifx_UReg_32Bit TSF:1;             /**< \brief [1:1] Transmit Store and Forward - TSF (rw) */
    Ifx_UReg_32Bit TXQEN:2;           /**< \brief [3:2] Transmit Queue Enable - TXQEN (rw) */
    Ifx_UReg_32Bit TTC:3;             /**< \brief [6:4] Transmit Threshold Control - TTC (rw) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit TQS:4;             /**< \brief [19:16] Transmit Queue Size - TQS (rw) */
    Ifx_UReg_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_GETH_MTL_TXQ_OPERATION_MODE_Bits;

/** \brief MTL Queue ${i} Transmit Quantum or Weights Register */
typedef struct _Ifx_GETH_MTL_TXQ_QUANTUM_WEIGHT_Bits
{
    Ifx_UReg_32Bit ISCQW:21;          /**< \brief [20:0] idleSlopeCredit, Quantum or Weights - ISCQW (rw) */
    Ifx_UReg_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_GETH_MTL_TXQ_QUANTUM_WEIGHT_Bits;

/** \brief MTL Queue ${i} Transmit SendSlopeCredit Register */
typedef struct _Ifx_GETH_MTL_TXQ_SENDSLOPECREDIT_Bits
{
    Ifx_UReg_32Bit SSC:14;            /**< \brief [13:0] sendSlopeCredit Value - SSC (rw) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_GETH_MTL_TXQ_SENDSLOPECREDIT_Bits;

/** \brief MTL Queue ${i} Transmit Underflow Counter Register */
typedef struct _Ifx_GETH_MTL_TXQ_UNDERFLOW_Bits
{
    Ifx_UReg_32Bit UFFRMCNT:11;       /**< \brief [10:0] Underflow Packet Counter - UFFRMCNT (r) */
    Ifx_UReg_32Bit UFCNTOVF:1;        /**< \brief [11:11] Overflow Bit for Underflow Packet Counter - UFCNTOVF (r) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_GETH_MTL_TXQ_UNDERFLOW_Bits;

/** \brief MAC Wake-up ${i} Filter Byte Mask register */
typedef struct _Ifx_GETH_RWK_FILTER_BYTE_MASK_Bits
{
    Ifx_UReg_32Bit FILTERI_BYTE_MASK:32;    /**< \brief [31:0] Filter${i} 32-bit Mask - Filteri_Byte_Mask (rw) */
} Ifx_GETH_RWK_FILTER_BYTE_MASK_Bits;

/** \brief MAC Wake-up Filter Command 0 Register */
typedef struct _Ifx_GETH_RWK_FILTER_COMMAND_0_Bits
{
    Ifx_UReg_32Bit FILTER0_COMMAND:4;    /**< \brief [3:0] Filter0_Command (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit FILTER1_COMMAND:4;    /**< \brief [11:8] Filter1_Command (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit FILTER2_COMMAND:4;    /**< \brief [19:16] Filter2_Command (rw) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit FILTER3_COMMAND:4;    /**< \brief [27:24] Filter3_Command (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_GETH_RWK_FILTER_COMMAND_0_Bits;

/** \brief MAC Wake-up Filter CRC ${i} Register */
typedef struct _Ifx_GETH_RWK_FILTER_CRC_Bits
{
    Ifx_UReg_32Bit FILTER0_CRC:16;    /**< \brief [15:0] Filter0_CRC (rw) */
    Ifx_UReg_32Bit FILTER1_CRC:16;    /**< \brief [31:16] Filter1_CRC (rw) */
} Ifx_GETH_RWK_FILTER_CRC_Bits;

/** \brief MAC Wake-up Filter Offset 0 Register */
typedef struct _Ifx_GETH_RWK_FILTER_OFFSET_0_Bits
{
    Ifx_UReg_32Bit FILTER0_OFFSET:8;    /**< \brief [7:0] Filter0_Offset (rw) */
    Ifx_UReg_32Bit FILTER1_OFFSET:8;    /**< \brief [15:8] Filter1_Offset (rw) */
    Ifx_UReg_32Bit FILTER2_OFFSET:8;    /**< \brief [23:16] Filter2_Offset (rw) */
    Ifx_UReg_32Bit FILTER3_OFFSET:8;    /**< \brief [31:24] Filter3_Offset (rw) */
} Ifx_GETH_RWK_FILTER_OFFSET_0_Bits;

/** \brief Received ICMP Error Octets Count Register */
typedef struct _Ifx_GETH_RXICMP_ERROR_OCTETS_Bits
{
    Ifx_UReg_32Bit RXICMPERROCT:32;    /**< \brief [31:0] RxICMP Error Octets - RXICMPERROCT (r) */
} Ifx_GETH_RXICMP_ERROR_OCTETS_Bits;

/** \brief Received ICMP Error Packets Count Register */
typedef struct _Ifx_GETH_RXICMP_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXICMPERRPKT:16;    /**< \brief [15:0] RxICMP Error Packets - RXICMPERRPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXICMP_ERROR_PACKETS_Bits;

/** \brief Good Received ICMP Octets Count Register */
typedef struct _Ifx_GETH_RXICMP_GOOD_OCTETS_Bits
{
    Ifx_UReg_32Bit RXICMPGDOCT:32;    /**< \brief [31:0] RxICMP Good Octets - RXICMPGDOCT (r) */
} Ifx_GETH_RXICMP_GOOD_OCTETS_Bits;

/** \brief Good Received ICMP Packets Count Register */
typedef struct _Ifx_GETH_RXICMP_GOOD_PACKETS_Bits
{
    Ifx_UReg_32Bit RXICMPGDPKT:16;    /**< \brief [15:0] RxICMP Good Packets - RXICMPGDPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXICMP_GOOD_PACKETS_Bits;

/** \brief Received IPV4 Fragmented Octets Count Register */
typedef struct _Ifx_GETH_RXIPV4_FRAGMENTED_OCTETS_Bits
{
    Ifx_UReg_32Bit RXIPV4FRAGOCT:32;    /**< \brief [31:0] RxIPv4 Fragmented Octets - RXIPV4FRAGOCT (r) */
} Ifx_GETH_RXIPV4_FRAGMENTED_OCTETS_Bits;

/** \brief Received IPv4 Fragmented Packets Count Register */
typedef struct _Ifx_GETH_RXIPV4_FRAGMENTED_PACKETS_Bits
{
    Ifx_UReg_32Bit RXIPV4FRAGPKT:16;    /**< \brief [15:0] RxIPv4 Fragmented Packets - RXIPV4FRAGPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXIPV4_FRAGMENTED_PACKETS_Bits;

/** \brief Good Received IPV4 Octets Count Register */
typedef struct _Ifx_GETH_RXIPV4_GOOD_OCTETS_Bits
{
    Ifx_UReg_32Bit RXIPV4GDOCT:32;    /**< \brief [31:0] RxIPv4 Good Octets - RXIPV4GDOCT (r) */
} Ifx_GETH_RXIPV4_GOOD_OCTETS_Bits;

/** \brief Good Received RxIPv4 Packets Count Register */
typedef struct _Ifx_GETH_RXIPV4_GOOD_PACKETS_Bits
{
    Ifx_UReg_32Bit RXIPV4GDPKT:16;    /**< \brief [15:0] RxIPv4 Good Packets - RXIPV4GDPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXIPV4_GOOD_PACKETS_Bits;

/** \brief Received IPV4 Header Error Octets Count Register */
typedef struct _Ifx_GETH_RXIPV4_HEADER_ERROR_OCTETS_Bits
{
    Ifx_UReg_32Bit RXIPV4HDRERROCT:32;    /**< \brief [31:0] RxIPv4 Header Error Octets - RXIPV4HDRERROCT (r) */
} Ifx_GETH_RXIPV4_HEADER_ERROR_OCTETS_Bits;

/** \brief Received IPv4 Header Error Packets Count Register */
typedef struct _Ifx_GETH_RXIPV4_HEADER_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXIPV4HDRERRPKT:16;    /**< \brief [15:0] RxIPv4 Header Error Packets - RXIPV4HDRERRPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXIPV4_HEADER_ERROR_PACKETS_Bits;

/** \brief Received IPV4 No Payload Octets Count Register */
typedef struct _Ifx_GETH_RXIPV4_NO_PAYLOAD_OCTETS_Bits
{
    Ifx_UReg_32Bit RXIPV4NOPAYOCT:32;    /**< \brief [31:0] RxIPv4 Payload Octets - RXIPV4NOPAYOCT (r) */
} Ifx_GETH_RXIPV4_NO_PAYLOAD_OCTETS_Bits;

/** \brief Received IPv4 No Payload Packets Count Register */
typedef struct _Ifx_GETH_RXIPV4_NO_PAYLOAD_PACKETS_Bits
{
    Ifx_UReg_32Bit RXIPV4NOPAYPKT:16;    /**< \brief [15:0] RxIPv4 Payload Packets - RXIPV4NOPAYPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXIPV4_NO_PAYLOAD_PACKETS_Bits;

/** \brief Received IPv4 UPD Checksum Disabled Packets Count Register */
typedef struct _Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS_Bits
{
    Ifx_UReg_32Bit RXIPV4UDSBLPKT:16;    /**< \brief [15:0] RxIPv4 UDP Checksum Disabled Packets - RXIPV4UDSBLPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS_Bits;

/** \brief Received IPV4 UPD Checksum Disabled Octets Count Register */
typedef struct _Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS_Bits
{
    Ifx_UReg_32Bit RXIPV4UDSBLOCT:32;    /**< \brief [31:0] RxIPv4 UDP Checksum Disable Octets - RXIPV4UDSBLOCT (r) */
} Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS_Bits;

/** \brief Good Received IPV6 Octets Count Register */
typedef struct _Ifx_GETH_RXIPV6_GOOD_OCTETS_Bits
{
    Ifx_UReg_32Bit RXIPV6GDOCT:32;    /**< \brief [31:0] RxIPv6 Good Octets - RXIPV6GDOCT (r) */
} Ifx_GETH_RXIPV6_GOOD_OCTETS_Bits;

/** \brief Good Received RxIPv6 Packets Count Register */
typedef struct _Ifx_GETH_RXIPV6_GOOD_PACKETS_Bits
{
    Ifx_UReg_32Bit RXIPV6GDPKT:16;    /**< \brief [15:0] RxIPv6 Good Packets - RXIPV6GDPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXIPV6_GOOD_PACKETS_Bits;

/** \brief Received IPV6 Header Error Octets Count Register */
typedef struct _Ifx_GETH_RXIPV6_HEADER_ERROR_OCTETS_Bits
{
    Ifx_UReg_32Bit RXIPV6HDRERROCT:32;    /**< \brief [31:0] RxIPv6 Header Error Octets - RXIPV6HDRERROCT (r) */
} Ifx_GETH_RXIPV6_HEADER_ERROR_OCTETS_Bits;

/** \brief Received IPv6 Header Error Packets Count Register */
typedef struct _Ifx_GETH_RXIPV6_HEADER_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXIPV6HDRERRPKT:16;    /**< \brief [15:0] RxIPv6 Header Error Packets - RXIPV6HDRERRPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXIPV6_HEADER_ERROR_PACKETS_Bits;

/** \brief Received IPV6 No Payload Octets Count Register */
typedef struct _Ifx_GETH_RXIPV6_NO_PAYLOAD_OCTETS_Bits
{
    Ifx_UReg_32Bit RXIPV6NOPAYOCT:32;    /**< \brief [31:0] RxIPv6 Payload Octets - RXIPV6NOPAYOCT (r) */
} Ifx_GETH_RXIPV6_NO_PAYLOAD_OCTETS_Bits;

/** \brief Received IPv6 No Payload Packets Count Register */
typedef struct _Ifx_GETH_RXIPV6_NO_PAYLOAD_PACKETS_Bits
{
    Ifx_UReg_32Bit RXIPV6NOPAYPKT:16;    /**< \brief [15:0] RxIPv6 Payload Packets - RXIPV6NOPAYPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXIPV6_NO_PAYLOAD_PACKETS_Bits;

/** \brief Received TCP Error Octets Count Register */
typedef struct _Ifx_GETH_RXTCP_ERROR_OCTETS_Bits
{
    Ifx_UReg_32Bit RXTCPERROCT:32;    /**< \brief [31:0] RxTCP Error Octets - RXTCPERROCT (r) */
} Ifx_GETH_RXTCP_ERROR_OCTETS_Bits;

/** \brief Received TCP Error Packets Count Register */
typedef struct _Ifx_GETH_RXTCP_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXTCPERRPKT:16;    /**< \brief [15:0] RxTCP Error Packets - RXTCPERRPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXTCP_ERROR_PACKETS_Bits;

/** \brief Good Received TCP Octets Count Register */
typedef struct _Ifx_GETH_RXTCP_GOOD_OCTETS_Bits
{
    Ifx_UReg_32Bit RXTCPGDOCT:32;     /**< \brief [31:0] RxTCP Good Octets - RXTCPGDOCT (r) */
} Ifx_GETH_RXTCP_GOOD_OCTETS_Bits;

/** \brief Good Received TCP Packets Count Register */
typedef struct _Ifx_GETH_RXTCP_GOOD_PACKETS_Bits
{
    Ifx_UReg_32Bit RXTCPGDPKT:16;     /**< \brief [15:0] RxTCP Good Packets - RXTCPGDPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXTCP_GOOD_PACKETS_Bits;

/** \brief Received UDP Error Octets Count Register */
typedef struct _Ifx_GETH_RXUDP_ERROR_OCTETS_Bits
{
    Ifx_UReg_32Bit RXUDPERROCT:32;    /**< \brief [31:0] RxUDP Error Octets - RXUDPERROCT (r) */
} Ifx_GETH_RXUDP_ERROR_OCTETS_Bits;

/** \brief Received UDP Error Packets Count Register */
typedef struct _Ifx_GETH_RXUDP_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXUDPERRPKT:16;    /**< \brief [15:0] RxUDP Error Packets - RXUDPERRPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXUDP_ERROR_PACKETS_Bits;

/** \brief Good Received UDP Octets Count Register */
typedef struct _Ifx_GETH_RXUDP_GOOD_OCTETS_Bits
{
    Ifx_UReg_32Bit RXUDPGDOCT:32;     /**< \brief [31:0] RxUDP Good Octets - RXUDPGDOCT (r) */
} Ifx_GETH_RXUDP_GOOD_OCTETS_Bits;

/** \brief Good Received UDP Packets Count Register */
typedef struct _Ifx_GETH_RXUDP_GOOD_PACKETS_Bits
{
    Ifx_UReg_32Bit RXUDPGDPKT:16;     /**< \brief [15:0] RxUDP Good Packets - RXUDPGDPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RXUDP_GOOD_PACKETS_Bits;

/** \brief Good And Bad 1024toMax Octets Packets Received Count Register */
typedef struct _Ifx_GETH_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RX1024_MAXOCTGB:16;    /**< \brief [15:0] Rx 1024-Max Octets Good Bad - RX1024_MAXOCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 128to255 Octets Packets Received Count Register */
typedef struct _Ifx_GETH_RX_128TO255OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RX128_255OCTGB:16;    /**< \brief [15:0] Rx 128-255 Octets Packets Good Bad - RX128_255OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_128TO255OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 256to511 Octets Packets Received Count Register */
typedef struct _Ifx_GETH_RX_256TO511OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RX256_511OCTGB:16;    /**< \brief [15:0] Rx 256-511 Octets Packets Good Bad - RX256_511OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_256TO511OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 512to1023 Octets Packets Received Count Register */
typedef struct _Ifx_GETH_RX_512TO1023OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RX512_1023OCTGB:16;    /**< \brief [15:0] RX 512-1023 Octets Packets Good Bad - RX512_1023OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_512TO1023OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 64 Octets Packets Received Count Register */
typedef struct _Ifx_GETH_RX_64OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RX64OCTGB:16;      /**< \brief [15:0] Rx 64 Octets Packets Good Bad - RX64OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_64OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 65to127 Octets Packets Received Count Register */
typedef struct _Ifx_GETH_RX_65TO127OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RX65_127OCTGB:16;    /**< \brief [15:0] Rx 65-127 Octets Packets Good Bad - RX65_127OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_65TO127OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Received Alignment Error Count Register */
typedef struct _Ifx_GETH_RX_ALIGNMENT_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXALGNERR:16;      /**< \brief [15:0] Rx Alignment Error Packets - RXALGNERR (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_ALIGNMENT_ERROR_PACKETS_Bits;

/** \brief Good Received Broadcast Packets Count Register */
typedef struct _Ifx_GETH_RX_BROADCAST_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit RXBCASTG:16;       /**< \brief [15:0] Rx Broadcast Packets Good - RXBCASTG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_BROADCAST_PACKETS_GOOD_Bits;

/** \brief Good Received Control Packets Count Register */
typedef struct _Ifx_GETH_RX_CONTROL_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit RXCTRLG:16;        /**< \brief [15:0] Rx Control Packets Good - RXCTRLG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_CONTROL_PACKETS_GOOD_Bits;

/** \brief Received CRC Error Packets Count Register */
typedef struct _Ifx_GETH_RX_CRC_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXCRCERR:16;       /**< \brief [15:0] Rx CRC Error Packets - RXCRCERR (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_CRC_ERROR_PACKETS_Bits;

/** \brief Received FIFO Overflow Count Register */
typedef struct _Ifx_GETH_RX_FIFO_OVERFLOW_PACKETS_Bits
{
    Ifx_UReg_32Bit RXFIFOOVFL:16;     /**< \brief [15:0] Rx FIFO Overflow Packets - RXFIFOOVFL (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_FIFO_OVERFLOW_PACKETS_Bits;

/** \brief Received Jabber Error Count Register */
typedef struct _Ifx_GETH_RX_JABBER_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXJABERR:16;       /**< \brief [15:0] Rx Jabber Error Packets - RXJABERR (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_JABBER_ERROR_PACKETS_Bits;

/** \brief Received Length Error Packets Count Register */
typedef struct _Ifx_GETH_RX_LENGTH_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXLENERR:16;       /**< \brief [15:0] Rx Length Error Packets - RXLENERR (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_LENGTH_ERROR_PACKETS_Bits;

/** \brief Received LPI Transition Count Register */
typedef struct _Ifx_GETH_RX_LPI_TRAN_CNTR_Bits
{
    Ifx_UReg_32Bit RXLPITRC:16;       /**< \brief [15:0] Rx LPI Transition counter - RXLPITRC (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_LPI_TRAN_CNTR_Bits;

/** \brief Received Microseconds LPI Count Register */
typedef struct _Ifx_GETH_RX_LPI_USEC_CNTR_Bits
{
    Ifx_UReg_32Bit RXLPIUSC:16;       /**< \brief [15:0] Rx LPI Microseconds Counter - RXLPIUSC (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_LPI_USEC_CNTR_Bits;

/** \brief Good Received Multicast Packets Count Register */
typedef struct _Ifx_GETH_RX_MULTICAST_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit RXMCASTG:16;       /**< \brief [15:0] Rx Multicast Packets Good - RXMCASTG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_MULTICAST_PACKETS_GOOD_Bits;

/** \brief Good Received Octet Count Register */
typedef struct _Ifx_GETH_RX_OCTET_COUNT_GOOD_Bits
{
    Ifx_UReg_32Bit RXOCTG:32;         /**< \brief [31:0] Rx Octet Count Good - RXOCTG (r) */
} Ifx_GETH_RX_OCTET_COUNT_GOOD_Bits;

/** \brief Good And Bad Received Octet Count Register */
typedef struct _Ifx_GETH_RX_OCTET_COUNT_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RXOCTGB:32;        /**< \brief [31:0] Rx Octet Count Good Bad - RXOCTGB (r) */
} Ifx_GETH_RX_OCTET_COUNT_GOOD_BAD_Bits;

/** \brief Received Out Of Range Type Count Register */
typedef struct _Ifx_GETH_RX_OUT_OF_RANGE_TYPE_PACKETS_Bits
{
    Ifx_UReg_32Bit RXOUTOFRNG:16;     /**< \brief [15:0] Rx Out of Range Type Packet - RXOUTOFRNG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_OUT_OF_RANGE_TYPE_PACKETS_Bits;

/** \brief Good Received Oversized Packets Count Register */
typedef struct _Ifx_GETH_RX_OVERSIZE_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit RXOVERSZG:16;      /**< \brief [15:0] Rx Oversize Packets Good - RXOVERSZG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_OVERSIZE_PACKETS_GOOD_Bits;

/** \brief Good And Bad Received Packets Count Register */
typedef struct _Ifx_GETH_RX_PACKETS_COUNT_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RXPKTGB:16;        /**< \brief [15:0] Rx Packets Count Good Bad - RXPKTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_PACKETS_COUNT_GOOD_BAD_Bits;

/** \brief Received Pause Packets Count Register */
typedef struct _Ifx_GETH_RX_PAUSE_PACKETS_Bits
{
    Ifx_UReg_32Bit RXPAUSEPKT:16;     /**< \brief [15:0] Rx Pause Packets - RXPAUSEPKT (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_PAUSE_PACKETS_Bits;

/** \brief Received Receive Error Count Register */
typedef struct _Ifx_GETH_RX_RECEIVE_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXRCVERR:16;       /**< \brief [15:0] Rx Receive Error Packets - RXRCVERR (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_RECEIVE_ERROR_PACKETS_Bits;

/** \brief Received Runtime Error Count Register */
typedef struct _Ifx_GETH_RX_RUNT_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXRUNTERR:16;      /**< \brief [15:0] Rx Runt Error Packets - RXRUNTERR (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_RUNT_ERROR_PACKETS_Bits;

/** \brief Good Received Undersized Packets Count Register */
typedef struct _Ifx_GETH_RX_UNDERSIZE_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit RXUNDERSZG:16;     /**< \brief [15:0] Rx Undersize Packets Good - RXUNDERSZG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_UNDERSIZE_PACKETS_GOOD_Bits;

/** \brief Good Received Unicat Packets Count Register */
typedef struct _Ifx_GETH_RX_UNICAST_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit RXUCASTG:16;       /**< \brief [15:0] Rx Unicast Packets Good - RXUCASTG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_UNICAST_PACKETS_GOOD_Bits;

/** \brief Good And Bad Received VLAN Packets Count Registerv */
typedef struct _Ifx_GETH_RX_VLAN_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit RXVLANPKTGB:16;    /**< \brief [15:0] Rx VLAN Packets Good Bad - RXVLANPKTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_VLAN_PACKETS_GOOD_BAD_Bits;

/** \brief Received Watchdog Error Count Register */
typedef struct _Ifx_GETH_RX_WATCHDOG_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit RXWDGERR:16;       /**< \brief [15:0] Rx Watchdog Error Packets - RXWDGERR (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_RX_WATCHDOG_ERROR_PACKETS_Bits;

/** \brief Skew Control Register */
typedef struct _Ifx_GETH_SKEWCTL_Bits
{
    Ifx_UReg_32Bit TXCFG:4;           /**< \brief [3:0] TX Clock delay control for RGMII Mode - TXCFG (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit RXCFG:4;           /**< \brief [11:8] RX Clock delay control for RGMII Mode - RXCFG (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_GETH_SKEWCTL_Bits;

/** \brief Good And Bad 1024toMax Octets Packets Transmitted Count Register */
typedef struct _Ifx_GETH_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TX1024_MAXOCTGB:16;    /**< \brief [15:0] Tx 1024ToMaxOctets Packets Good Bad - TX1024_MAXOCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 128to255 Octets Packets Transmitted Count Register */
typedef struct _Ifx_GETH_TX_128TO255OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TX128_255OCTGB:16;    /**< \brief [15:0] Tx 128To255Octets Packets Good Bad - TX128_255OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_128TO255OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 256to511 Octets Packets Transmitted Count Register */
typedef struct _Ifx_GETH_TX_256TO511OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TX256_511OCTGB:16;    /**< \brief [15:0] Tx 256To511Octets Packets Good Bad - TX256_511OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_256TO511OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 512to1023 Octets Packets Transmitted Count Register */
typedef struct _Ifx_GETH_TX_512TO1023OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TX512_1023OCTGB:16;    /**< \brief [15:0] Tx 512To1023Octets Packets Good Bad - TX512_1023OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_512TO1023OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 64 Octets Packets Transmitted Count Register */
typedef struct _Ifx_GETH_TX_64OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TX64OCTGB:16;      /**< \brief [15:0] Tx 64Octets Packets Good_Bad - TX64OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_64OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good And Bad 65to127 Octets Packets Transmitted Count Register */
typedef struct _Ifx_GETH_TX_65TO127OCTETS_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TX65_127OCTGB:16;    /**< \brief [15:0] Tx 65To127Octets Packets Good Bad - TX65_127OCTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_65TO127OCTETS_PACKETS_GOOD_BAD_Bits;

/** \brief Good Transmitted Broadcast Packets Count Register */
typedef struct _Ifx_GETH_TX_BROADCAST_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit TXBCASTG:16;       /**< \brief [15:0] Tx Broadcast Packets Good - TXBCASTG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_BROADCAST_PACKETS_GOOD_Bits;

/** \brief Good And Bad Transmitted Broadcast Packets Count Register */
typedef struct _Ifx_GETH_TX_BROADCAST_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TXBCASTGB:16;      /**< \brief [15:0] Tx Broadcast Packets Good Bad - TXBCASTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_BROADCAST_PACKETS_GOOD_BAD_Bits;

/** \brief Transmitted Carrier Error Packets Count Register */
typedef struct _Ifx_GETH_TX_CARRIER_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit TXCARR:16;         /**< \brief [15:0] Tx Carrier Error Packets - TXCARR (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_CARRIER_ERROR_PACKETS_Bits;

/** \brief Transmitted Deferred Packets Count Register */
typedef struct _Ifx_GETH_TX_DEFERRED_PACKETS_Bits
{
    Ifx_UReg_32Bit TXDEFRD:16;        /**< \brief [15:0] Tx Deferred Packets - TXDEFRD (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_DEFERRED_PACKETS_Bits;

/** \brief Transmitted Excessive Collision Packets Count Register */
typedef struct _Ifx_GETH_TX_EXCESSIVE_COLLISION_PACKETS_Bits
{
    Ifx_UReg_32Bit TXEXSCOL:16;       /**< \brief [15:0] Tx Excessive Collision Packets - TXEXSCOL (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_EXCESSIVE_COLLISION_PACKETS_Bits;

/** \brief Transmitted Excessive Deferral Error Count Register */
typedef struct _Ifx_GETH_TX_EXCESSIVE_DEFERRAL_ERROR_Bits
{
    Ifx_UReg_32Bit TXEXSDEF:16;       /**< \brief [15:0] Tx Excessive Deferral Error - TXEXSDEF (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_EXCESSIVE_DEFERRAL_ERROR_Bits;

/** \brief Transmitted Late Collision Packets Count Register */
typedef struct _Ifx_GETH_TX_LATE_COLLISION_PACKETS_Bits
{
    Ifx_UReg_32Bit TXLATECOL:16;      /**< \brief [15:0] Tx Late Collision Packets - TXLATECOL (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_LATE_COLLISION_PACKETS_Bits;

/** \brief Transmitted LPI Transition Count Register */
typedef struct _Ifx_GETH_TX_LPI_TRAN_CNTR_Bits
{
    Ifx_UReg_32Bit TXLPITRC:16;       /**< \brief [15:0] Tx LPI Transition counter - TXLPITRC (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_LPI_TRAN_CNTR_Bits;

/** \brief Transmitted LPI Microseconds Count Register */
typedef struct _Ifx_GETH_TX_LPI_USEC_CNTR_Bits
{
    Ifx_UReg_32Bit TXLPIUSC:16;       /**< \brief [15:0] Tx LPI Microseconds Counter - TXLPIUSC (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_LPI_USEC_CNTR_Bits;

/** \brief Good Transmitted Multicast Packets Count Register */
typedef struct _Ifx_GETH_TX_MULTICAST_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit TXMCASTG:16;       /**< \brief [15:0] Tx Multicast Packets Good - TXMCASTG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_MULTICAST_PACKETS_GOOD_Bits;

/** \brief Good And Bad Transmitted Multicast Packets Count Register */
typedef struct _Ifx_GETH_TX_MULTICAST_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TXMCASTGB:16;      /**< \brief [15:0] Tx Multicast Packets Good Bad - TXMCASTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_MULTICAST_PACKETS_GOOD_BAD_Bits;

/** \brief Transmitted Multiple Collision Count Register */
typedef struct _Ifx_GETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS_Bits
{
    Ifx_UReg_32Bit TXMULTCOLG:16;     /**< \brief [15:0] Tx Multiple Collision Good Packets - TXMULTCOLG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS_Bits;

/** \brief Good Transmitted Octet Count Register */
typedef struct _Ifx_GETH_TX_OCTET_COUNT_GOOD_Bits
{
    Ifx_UReg_32Bit TXOCTG:32;         /**< \brief [31:0] Tx Octet Count Good - TXOCTG (r) */
} Ifx_GETH_TX_OCTET_COUNT_GOOD_Bits;

/** \brief Good And Bad Transmitted Octet Count Register */
typedef struct _Ifx_GETH_TX_OCTET_COUNT_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TXOCTGB:32;        /**< \brief [31:0] Tx Octet Count Good Bad - TXOCTGB (r) */
} Ifx_GETH_TX_OCTET_COUNT_GOOD_BAD_Bits;

/** \brief Good Transmitted Osize Packets Count Register */
typedef struct _Ifx_GETH_TX_OSIZE_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit TXOSIZG:16;        /**< \brief [15:0] Tx OSize Packets Good - TXOSIZG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_OSIZE_PACKETS_GOOD_Bits;

/** \brief Good Transmitted Packet Count Register */
typedef struct _Ifx_GETH_TX_PACKET_COUNT_GOOD_Bits
{
    Ifx_UReg_32Bit TXPKTG:16;         /**< \brief [15:0] Tx Packet Count Good - TXPKTG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_PACKET_COUNT_GOOD_Bits;

/** \brief Good And Bad Transmitted Packets Count Register */
typedef struct _Ifx_GETH_TX_PACKET_COUNT_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TXPKTGB:16;        /**< \brief [15:0] Tx Packet Count Good Bad - TXPKTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_PACKET_COUNT_GOOD_BAD_Bits;

/** \brief Transmitted Pause Packets Count Register */
typedef struct _Ifx_GETH_TX_PAUSE_PACKETS_Bits
{
    Ifx_UReg_32Bit TXPAUSE:16;        /**< \brief [15:0] Tx Pause Packets - TXPAUSE (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_PAUSE_PACKETS_Bits;

/** \brief Good Transmitted Single Collision Count Register */
typedef struct _Ifx_GETH_TX_SINGLE_COLLISION_GOOD_PACKETS_Bits
{
    Ifx_UReg_32Bit TXSNGLCOLG:16;     /**< \brief [15:0] Tx Single Collision Good Packets - TXSNGLCOLG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_SINGLE_COLLISION_GOOD_PACKETS_Bits;

/** \brief Transmitted Underflow Error Packets Count Register */
typedef struct _Ifx_GETH_TX_UNDERFLOW_ERROR_PACKETS_Bits
{
    Ifx_UReg_32Bit TXUNDRFLW:16;      /**< \brief [15:0] Tx Underflow Error Packets - TXUNDRFLW (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_UNDERFLOW_ERROR_PACKETS_Bits;

/** \brief Good Transmitted Unicat Packets Count Register */
typedef struct _Ifx_GETH_TX_UNICAST_PACKETS_GOOD_BAD_Bits
{
    Ifx_UReg_32Bit TXUCASTGB:16;      /**< \brief [15:0] Tx Unicast Packets Good Bad - TXUCASTGB (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_UNICAST_PACKETS_GOOD_BAD_Bits;

/** \brief Good Transmitted VLAN Packets Count Register */
typedef struct _Ifx_GETH_TX_VLAN_PACKETS_GOOD_Bits
{
    Ifx_UReg_32Bit TXVLANG:16;        /**< \brief [15:0] Tx VLAN Packets Good - TXVLANG (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_GETH_TX_VLAN_PACKETS_GOOD_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_geth_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_GETH_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_GETH_ACCEN1;

/** \brief Access Enable Register 0 for DMA${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_ACCEND_ACCEN0D_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_ACCEND_ACCEN0D;

/** \brief Access Enable Register 1 for DMA${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_ACCEND_ACCEN1D_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_ACCEND_ACCEN1D;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_GETH_CLC;

/** \brief DMA Channel ${i} Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_CONTROL;

/** \brief DMA Channel ${i} Current Application Receive Buffer Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_CURRENT_APP_RXBUFFER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_CURRENT_APP_RXBUFFER;

/** \brief DMA Channel ${i} Current Application Receive Descriptor Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_CURRENT_APP_RXDESC_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_CURRENT_APP_RXDESC;

/** \brief DMA Channel ${i} Current Application Transmit Buffer Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_CURRENT_APP_TXBUFFER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_CURRENT_APP_TXBUFFER;

/** \brief DMA Channel ${i} Current Application Transmit Descriptor Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_CURRENT_APP_TXDESC_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_CURRENT_APP_TXDESC;

/** \brief DMA Channel ${i} Interrupt Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_INTERRUPT_ENABLE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_INTERRUPT_ENABLE;

/** \brief DMA Channel ${i} Missed Frames Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_MISS_FRAME_CNT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_MISS_FRAME_CNT;

/** \brief DMA Channel ${i} Receive Descriptor List Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_RXDESC_LIST_ADDRESS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_RXDESC_LIST_ADDRESS;

/** \brief DMA Channel ${i} Recieve Descriptor Ring Length Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_RXDESC_RING_LENGTH_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_RXDESC_RING_LENGTH;

/** \brief DMA Channel ${i} Recieve Descriptor Tail Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_RXDESC_TAIL_POINTER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_RXDESC_TAIL_POINTER;

/** \brief DMA Channel ${i} Receive Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_RX_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_RX_CONTROL;

/** \brief DMA Channel ${i} Recieve Interrupt Watchdog Timer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_RX_INTERRUPT_WATCHDOG_TIMER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_RX_INTERRUPT_WATCHDOG_TIMER;

/** \brief DMA Channel ${i} Slot Function Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_SLOT_FUNCTION_CONTROL_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_SLOT_FUNCTION_CONTROL_STATUS;

/** \brief DMA Channel ${i} Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_STATUS;

/** \brief DMA Channel ${i} Transmit Descriptor List Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_TXDESC_LIST_ADDRESS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_TXDESC_LIST_ADDRESS;

/** \brief DMA Channel ${i} Transmit Descriptor Ring Length Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_TXDESC_RING_LENGTH_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_TXDESC_RING_LENGTH;

/** \brief DMA Channel ${i} Transmit Descriptor Tail Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_TXDESC_TAIL_POINTER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_TXDESC_TAIL_POINTER;

/** \brief DMA Channel ${i} Transmit Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_CH_TX_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_CH_TX_CONTROL;

/** \brief DMA Debug Status 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_DEBUG_STATUS0_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_DEBUG_STATUS0;

/** \brief DMA Debug Status 1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_DEBUG_STATUS1_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_DEBUG_STATUS1;

/** \brief DMA Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_INTERRUPT_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_INTERRUPT_STATUS;

/** \brief DMA Bus Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_MODE_Bits B;         /**< \brief Bitfield access */
} Ifx_GETH_DMA_MODE;

/** \brief DMA System Bus Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_DMA_SYSBUS_MODE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_DMA_SYSBUS_MODE;

/** \brief General Purpose Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_GPCTL_Bits B;            /**< \brief Bitfield access */
} Ifx_GETH_GPCTL;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_GETH_ID;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_KRST0_Bits B;            /**< \brief Bitfield access */
} Ifx_GETH_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_KRST1_Bits B;            /**< \brief Bitfield access */
} Ifx_GETH_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_KRSTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_GETH_KRSTCLR;

/** \brief MAC One Microsecond Tic Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_1US_TIC_COUNTER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_1US_TIC_COUNTER;

/** \brief MAC Address ${i} High Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_ADDRESS_HIGH_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_ADDRESS_HIGH;

/** \brief MAC Address 0 High Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_ADDRESS_HIGH0_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_ADDRESS_HIGH0;

/** \brief MAC Address ${i} Low Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_ADDRESS_LOW_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_ADDRESS_LOW;

/** \brief MAC Address 0 Low Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_ADDRESS_LOW0_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_ADDRESS_LOW0;

/** \brief MAC Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_CONFIGURATION_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_CONFIGURATION;

/** \brief MAC CSR Software Controls Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_CSR_SW_CTRL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_CSR_SW_CTRL;

/** \brief MAC Debug Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_DEBUG_Bits B;        /**< \brief Bitfield access */
} Ifx_GETH_MAC_DEBUG;

/** \brief MAC Extended Configuration Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_EXT_CFG1_Bits B;     /**< \brief Bitfield access */
} Ifx_GETH_MAC_EXT_CFG1;

/** \brief MAC Extended Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_EXT_CONFIGURATION_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_EXT_CONFIGURATION;

/** \brief MAC Hardware Feature Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_HW_FEATURE0_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_HW_FEATURE0;

/** \brief MAC Hardware Feature Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_HW_FEATURE1_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_HW_FEATURE1;

/** \brief MAC Hardware Feature Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_HW_FEATURE2_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_HW_FEATURE2;

/** \brief MAC Hardware Feature Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_HW_FEATURE3_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_HW_FEATURE3;

/** \brief MAC Inner VLAN Tag Inclusion or Replacement Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_INNER_VLAN_INCL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_INNER_VLAN_INCL;

/** \brief MAC Interrupt Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_INTERRUPT_ENABLE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_INTERRUPT_ENABLE;

/** \brief MAC Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_INTERRUPT_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_INTERRUPT_STATUS;

/** \brief MAC LPI Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_LPI_CONTROL_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_LPI_CONTROL_STATUS;

/** \brief MAC LPI Entry Timer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_LPI_ENTRY_TIMER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_LPI_ENTRY_TIMER;

/** \brief MAC LPI Timers Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_LPI_TIMERS_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_LPI_TIMERS_CONTROL;

/** \brief MAC MDIO Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_MDIO_ADDRESS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_MDIO_ADDRESS;

/** \brief MAC MDIO Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_MDIO_DATA_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_MDIO_DATA;

/** \brief MAC Packet Filter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_PACKET_FILTER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_PACKET_FILTER;

/** \brief MAC PHY Interface Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_PHYIF_CONTROL_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_PHYIF_CONTROL_STATUS;

/** \brief MAC PMT Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_PMT_CONTROL_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_PMT_CONTROL_STATUS;

/** \brief MAC PPS 0 Interval Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_PPS0_INTERVAL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_PPS0_INTERVAL;

/** \brief MAC PPS 0 Target Time Nanoeconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_PPS0_TARGET_TIME_NANOSECONDS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_PPS0_TARGET_TIME_NANOSECONDS;

/** \brief MAC PPS 0 Target Time Seconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_PPS0_TARGET_TIME_SECONDS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_PPS0_TARGET_TIME_SECONDS;

/** \brief MAC PPS 0 Width Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_PPS0_WIDTH_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_PPS0_WIDTH;

/** \brief MAC PPS Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_PPS_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_PPS_CONTROL;

/** \brief MAC Queue 0 TX Flow Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_Q0_TX_FLOW_CTRL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_Q0_TX_FLOW_CTRL;

/** \brief MAC Wake-up Packet Filter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_RWK_PACKET_FILTER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_RWK_PACKET_FILTER;

/** \brief MAC Receive Queue Control 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_RXQ_CTRL0_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_RXQ_CTRL0;

/** \brief MAC Receive Queue Control 1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_RXQ_CTRL1_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_RXQ_CTRL1;

/** \brief MAC Receive Queue Control 2 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_RXQ_CTRL2_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_RXQ_CTRL2;

/** \brief MAC Receive Queue Control 4 register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_RXQ_CTRL4_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_RXQ_CTRL4;

/** \brief MAC Receive Flow Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_RX_FLOW_CTRL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_RX_FLOW_CTRL;

/** \brief MAC Receive Transmit Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_RX_TX_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_RX_TX_STATUS;

/** \brief MAC Sub-Second Increment Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_SUB_SECOND_INCREMENT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_SUB_SECOND_INCREMENT;

/** \brief MAC System Time Higher Word Seconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS;

/** \brief MAC System Time Nanoseconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS;

/** \brief MAC System Time Nanoseconds Update Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE;

/** \brief MAC System Time Seconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_SYSTEM_TIME_SECONDS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_SYSTEM_TIME_SECONDS;

/** \brief MAC System Time Seconds Update Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_SYSTEM_TIME_SECONDS_UPDATE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_SYSTEM_TIME_SECONDS_UPDATE;

/** \brief MAC Timestamp Addend Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_ADDEND_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_ADDEND;

/** \brief MAC Timestamp Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_CONTROL;

/** \brief MAC Timestamp Egress Asymmetry Correction Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_EGRESS_ASYM_CORR_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_EGRESS_ASYM_CORR;

/** \brief MAC Timestamp Egress Correction Nanoseconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND;

/** \brief MAC Timestamp Egress Correction Subnanoseconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC;

/** \brief MAC Timestamp Ingress Asymmetry Correction Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_INGRESS_ASYM_CORR_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_INGRESS_ASYM_CORR;

/** \brief MAC Timestamp Ingress Correction Nanoseconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND;

/** \brief MAC Timestamp Ingress Correction Subnanoseconds Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC;

/** \brief MAC Timestamp Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TIMESTAMP_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TIMESTAMP_STATUS;

/** \brief MAC Transmit Timestamp Nanoseconds Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_NANOSECONDS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_NANOSECONDS;

/** \brief MAC Transmit Timestamp Seconds Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_SECONDS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_SECONDS;

/** \brief MAC Version Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_VERSION_Bits B;      /**< \brief Bitfield access */
} Ifx_GETH_MAC_VERSION;

/** \brief MAC VLAN Hash Table Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_VLAN_HASH_TABLE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_VLAN_HASH_TABLE;

/** \brief MAC VLAN Tag Inclusion or Replacement Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_VLAN_INCL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_VLAN_INCL;

/** \brief MAC VLAN Tag Inclusion or Replacement Register per Queue   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_VLAN_INCL_Q_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_VLAN_INCL_Q;

/** \brief MAC VLAN Tag Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_VLAN_TAG_CTRL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_VLAN_TAG_CTRL;

/** \brief MAC VLAN Tag Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_VLAN_TAG_DATA_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_VLAN_TAG_DATA;

/** \brief MAC VLAN Tag Filter ${i} Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_VLAN_TAG_FILTER_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_VLAN_TAG_FILTER;

/** \brief MAC Watchdog Timeout Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MAC_WATCHDOG_TIMEOUT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MAC_WATCHDOG_TIMEOUT;

/** \brief MMC Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MMC_CONTROL_Bits B;      /**< \brief Bitfield access */
} Ifx_GETH_MMC_CONTROL;

/** \brief MMC IPC Receive Interrupts Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MMC_IPC_RX_INTERRUPT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MMC_IPC_RX_INTERRUPT;

/** \brief MMC IPC Receive Interrupts Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MMC_IPC_RX_INTERRUPT_MASK_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MMC_IPC_RX_INTERRUPT_MASK;

/** \brief MMC Receive Interrupts Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MMC_RX_INTERRUPT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MMC_RX_INTERRUPT;

/** \brief MMC Receive Interrupts Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MMC_RX_INTERRUPT_MASK_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MMC_RX_INTERRUPT_MASK;

/** \brief MMC Transmit Interrupts Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MMC_TX_INTERRUPT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MMC_TX_INTERRUPT;

/** \brief MMC Transmit Interrupts Mask Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MMC_TX_INTERRUPT_MASK_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MMC_TX_INTERRUPT_MASK;

/** \brief MTL Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_INTERRUPT_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_INTERRUPT_STATUS;

/** \brief MTL Operation Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_OPERATION_MODE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_OPERATION_MODE;

/** \brief MTL Queue 0 Interrupt Control Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_Q0_INTERRUPT_CONTROL_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_Q0_INTERRUPT_CONTROL_STATUS;

/** \brief MTL Queue ${i} Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_Q_INTERRUPT_CONTROL_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_Q_INTERRUPT_CONTROL_STATUS;

/** \brief MTL Queue 0 Receive Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ0_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ0_CONTROL;

/** \brief MTL Queue 0 Receive Debug Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ0_DEBUG_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ0_DEBUG;

/** \brief MTL Queue 0 Receive Missed Packet and Overflow Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT;

/** \brief MTL Queue 0 Receive Operation Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ0_OPERATION_MODE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ0_OPERATION_MODE;

/** \brief MTL Queue ${i} Receive Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ_CONTROL;

/** \brief MTL Queue ${i} Receive Debug Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ_DEBUG_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ_DEBUG;

/** \brief MTL Receive Queue and DMA Channel Mapping 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ_DMA_MAP0_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ_DMA_MAP0;

/** \brief MTL Queue ${i} Receive Missed Packet and Overflow Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ_MISSED_PACKET_OVERFLOW_CNT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ_MISSED_PACKET_OVERFLOW_CNT;

/** \brief MTL Queue ${i} Receive Operation Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_RXQ_OPERATION_MODE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_RXQ_OPERATION_MODE;

/** \brief MTL Queue 0 Transmit Debug Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ0_DEBUG_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ0_DEBUG;

/** \brief MTL Queue 0 Transmit Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ0_ETS_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ0_ETS_STATUS;

/** \brief MTL Queue 0 Transmit Operation Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ0_OPERATION_MODE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ0_OPERATION_MODE;

/** \brief MTL Queue 0 Transmit Quantum or Weights Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ0_QUANTUM_WEIGHT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ0_QUANTUM_WEIGHT;

/** \brief MTL Queue 0 Transmit Underflow Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ0_UNDERFLOW_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ0_UNDERFLOW;

/** \brief MTL Queue ${i} Transmit Debug Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_DEBUG_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_DEBUG;

/** \brief MTL Queue ${i} Transmit ETS Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_ETS_CONTROL_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_ETS_CONTROL;

/** \brief MTL Queue ${i} Transmit ETS Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_ETS_STATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_ETS_STATUS;

/** \brief MTL Queue ${i} Transmit HiCredit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_HICREDIT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_HICREDIT;

/** \brief MTL Queue ${i} Transmit LoCredit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_LOCREDIT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_LOCREDIT;

/** \brief MTL Queue ${i} Transmit Operation Mode Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_OPERATION_MODE_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_OPERATION_MODE;

/** \brief MTL Queue ${i} Transmit Quantum or Weights Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_QUANTUM_WEIGHT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_QUANTUM_WEIGHT;

/** \brief MTL Queue ${i} Transmit SendSlopeCredit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_SENDSLOPECREDIT_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_SENDSLOPECREDIT;

/** \brief MTL Queue ${i} Transmit Underflow Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_MTL_TXQ_UNDERFLOW_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_MTL_TXQ_UNDERFLOW;

/** \brief MAC Wake-up ${i} Filter Byte Mask register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RWK_FILTER_BYTE_MASK_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RWK_FILTER_BYTE_MASK;

/** \brief MAC Wake-up Filter Command 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RWK_FILTER_COMMAND_0_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RWK_FILTER_COMMAND_0;

/** \brief MAC Wake-up Filter CRC ${i} Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RWK_FILTER_CRC_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RWK_FILTER_CRC;

/** \brief MAC Wake-up Filter Offset 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RWK_FILTER_OFFSET_0_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RWK_FILTER_OFFSET_0;

/** \brief Received ICMP Error Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXICMP_ERROR_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXICMP_ERROR_OCTETS;

/** \brief Received ICMP Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXICMP_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXICMP_ERROR_PACKETS;

/** \brief Good Received ICMP Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXICMP_GOOD_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXICMP_GOOD_OCTETS;

/** \brief Good Received ICMP Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXICMP_GOOD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXICMP_GOOD_PACKETS;

/** \brief Received IPV4 Fragmented Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_FRAGMENTED_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_FRAGMENTED_OCTETS;

/** \brief Received IPv4 Fragmented Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_FRAGMENTED_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_FRAGMENTED_PACKETS;

/** \brief Good Received IPV4 Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_GOOD_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_GOOD_OCTETS;

/** \brief Good Received RxIPv4 Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_GOOD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_GOOD_PACKETS;

/** \brief Received IPV4 Header Error Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_HEADER_ERROR_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_HEADER_ERROR_OCTETS;

/** \brief Received IPv4 Header Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_HEADER_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_HEADER_ERROR_PACKETS;

/** \brief Received IPV4 No Payload Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_NO_PAYLOAD_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_NO_PAYLOAD_OCTETS;

/** \brief Received IPv4 No Payload Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_NO_PAYLOAD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_NO_PAYLOAD_PACKETS;

/** \brief Received IPv4 UPD Checksum Disabled Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS;

/** \brief Received IPV4 UPD Checksum Disabled Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS;

/** \brief Good Received IPV6 Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV6_GOOD_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV6_GOOD_OCTETS;

/** \brief Good Received RxIPv6 Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV6_GOOD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV6_GOOD_PACKETS;

/** \brief Received IPV6 Header Error Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV6_HEADER_ERROR_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV6_HEADER_ERROR_OCTETS;

/** \brief Received IPv6 Header Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV6_HEADER_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV6_HEADER_ERROR_PACKETS;

/** \brief Received IPV6 No Payload Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV6_NO_PAYLOAD_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV6_NO_PAYLOAD_OCTETS;

/** \brief Received IPv6 No Payload Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXIPV6_NO_PAYLOAD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXIPV6_NO_PAYLOAD_PACKETS;

/** \brief Received TCP Error Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXTCP_ERROR_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXTCP_ERROR_OCTETS;

/** \brief Received TCP Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXTCP_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXTCP_ERROR_PACKETS;

/** \brief Good Received TCP Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXTCP_GOOD_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXTCP_GOOD_OCTETS;

/** \brief Good Received TCP Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXTCP_GOOD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXTCP_GOOD_PACKETS;

/** \brief Received UDP Error Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXUDP_ERROR_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXUDP_ERROR_OCTETS;

/** \brief Received UDP Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXUDP_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXUDP_ERROR_PACKETS;

/** \brief Good Received UDP Octets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXUDP_GOOD_OCTETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXUDP_GOOD_OCTETS;

/** \brief Good Received UDP Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RXUDP_GOOD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RXUDP_GOOD_PACKETS;

/** \brief Good And Bad 1024toMax Octets Packets Received Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 128to255 Octets Packets Received Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_128TO255OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_128TO255OCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 256to511 Octets Packets Received Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_256TO511OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_256TO511OCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 512to1023 Octets Packets Received Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_512TO1023OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_512TO1023OCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 64 Octets Packets Received Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_64OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_64OCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 65to127 Octets Packets Received Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_65TO127OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_65TO127OCTETS_PACKETS_GOOD_BAD;

/** \brief Received Alignment Error Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_ALIGNMENT_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_ALIGNMENT_ERROR_PACKETS;

/** \brief Good Received Broadcast Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_BROADCAST_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_BROADCAST_PACKETS_GOOD;

/** \brief Good Received Control Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_CONTROL_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_CONTROL_PACKETS_GOOD;

/** \brief Received CRC Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_CRC_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_CRC_ERROR_PACKETS;

/** \brief Received FIFO Overflow Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_FIFO_OVERFLOW_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_FIFO_OVERFLOW_PACKETS;

/** \brief Received Jabber Error Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_JABBER_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_JABBER_ERROR_PACKETS;

/** \brief Received Length Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_LENGTH_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_LENGTH_ERROR_PACKETS;

/** \brief Received LPI Transition Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_LPI_TRAN_CNTR_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_LPI_TRAN_CNTR;

/** \brief Received Microseconds LPI Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_LPI_USEC_CNTR_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_LPI_USEC_CNTR;

/** \brief Good Received Multicast Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_MULTICAST_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_MULTICAST_PACKETS_GOOD;

/** \brief Good Received Octet Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_OCTET_COUNT_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_OCTET_COUNT_GOOD;

/** \brief Good And Bad Received Octet Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_OCTET_COUNT_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_OCTET_COUNT_GOOD_BAD;

/** \brief Received Out Of Range Type Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_OUT_OF_RANGE_TYPE_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_OUT_OF_RANGE_TYPE_PACKETS;

/** \brief Good Received Oversized Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_OVERSIZE_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_OVERSIZE_PACKETS_GOOD;

/** \brief Good And Bad Received Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_PACKETS_COUNT_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_PACKETS_COUNT_GOOD_BAD;

/** \brief Received Pause Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_PAUSE_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_PAUSE_PACKETS;

/** \brief Received Receive Error Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_RECEIVE_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_RECEIVE_ERROR_PACKETS;

/** \brief Received Runtime Error Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_RUNT_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_RUNT_ERROR_PACKETS;

/** \brief Good Received Undersized Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_UNDERSIZE_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_UNDERSIZE_PACKETS_GOOD;

/** \brief Good Received Unicat Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_UNICAST_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_UNICAST_PACKETS_GOOD;

/** \brief Good And Bad Received VLAN Packets Count Registerv   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_VLAN_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_VLAN_PACKETS_GOOD_BAD;

/** \brief Received Watchdog Error Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_RX_WATCHDOG_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_RX_WATCHDOG_ERROR_PACKETS;

/** \brief Skew Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_SKEWCTL_Bits B;          /**< \brief Bitfield access */
} Ifx_GETH_SKEWCTL;

/** \brief Good And Bad 1024toMax Octets Packets Transmitted Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 128to255 Octets Packets Transmitted Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_128TO255OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_128TO255OCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 256to511 Octets Packets Transmitted Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_256TO511OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_256TO511OCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 512to1023 Octets Packets Transmitted Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_512TO1023OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_512TO1023OCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 64 Octets Packets Transmitted Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_64OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_64OCTETS_PACKETS_GOOD_BAD;

/** \brief Good And Bad 65to127 Octets Packets Transmitted Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_65TO127OCTETS_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_65TO127OCTETS_PACKETS_GOOD_BAD;

/** \brief Good Transmitted Broadcast Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_BROADCAST_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_BROADCAST_PACKETS_GOOD;

/** \brief Good And Bad Transmitted Broadcast Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_BROADCAST_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_BROADCAST_PACKETS_GOOD_BAD;

/** \brief Transmitted Carrier Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_CARRIER_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_CARRIER_ERROR_PACKETS;

/** \brief Transmitted Deferred Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_DEFERRED_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_DEFERRED_PACKETS;

/** \brief Transmitted Excessive Collision Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_EXCESSIVE_COLLISION_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_EXCESSIVE_COLLISION_PACKETS;

/** \brief Transmitted Excessive Deferral Error Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_EXCESSIVE_DEFERRAL_ERROR_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_EXCESSIVE_DEFERRAL_ERROR;

/** \brief Transmitted Late Collision Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_LATE_COLLISION_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_LATE_COLLISION_PACKETS;

/** \brief Transmitted LPI Transition Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_LPI_TRAN_CNTR_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_LPI_TRAN_CNTR;

/** \brief Transmitted LPI Microseconds Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_LPI_USEC_CNTR_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_LPI_USEC_CNTR;

/** \brief Good Transmitted Multicast Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_MULTICAST_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_MULTICAST_PACKETS_GOOD;

/** \brief Good And Bad Transmitted Multicast Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_MULTICAST_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_MULTICAST_PACKETS_GOOD_BAD;

/** \brief Transmitted Multiple Collision Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS;

/** \brief Good Transmitted Octet Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_OCTET_COUNT_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_OCTET_COUNT_GOOD;

/** \brief Good And Bad Transmitted Octet Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_OCTET_COUNT_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_OCTET_COUNT_GOOD_BAD;

/** \brief Good Transmitted Osize Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_OSIZE_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_OSIZE_PACKETS_GOOD;

/** \brief Good Transmitted Packet Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_PACKET_COUNT_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_PACKET_COUNT_GOOD;

/** \brief Good And Bad Transmitted Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_PACKET_COUNT_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_PACKET_COUNT_GOOD_BAD;

/** \brief Transmitted Pause Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_PAUSE_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_PAUSE_PACKETS;

/** \brief Good Transmitted Single Collision Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_SINGLE_COLLISION_GOOD_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_SINGLE_COLLISION_GOOD_PACKETS;

/** \brief Transmitted Underflow Error Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_UNDERFLOW_ERROR_PACKETS_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_UNDERFLOW_ERROR_PACKETS;

/** \brief Good Transmitted Unicat Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_UNICAST_PACKETS_GOOD_BAD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_UNICAST_PACKETS_GOOD_BAD;

/** \brief Good Transmitted VLAN Packets Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_GETH_TX_VLAN_PACKETS_GOOD_Bits B;    /**< \brief Bitfield access */
} Ifx_GETH_TX_VLAN_PACKETS_GOOD;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Geth_MTL_TXQ0_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MTL_TXQ0 object */
typedef volatile struct _Ifx_GETH_MTL_TXQ0
{
       Ifx_GETH_MTL_TXQ0_OPERATION_MODE    OPERATION_MODE;         /**< \brief 0, MTL Queue 0 Transmit Operation Mode Register*/
       Ifx_GETH_MTL_TXQ0_UNDERFLOW         UNDERFLOW;              /**< \brief 4, MTL Queue 0 Transmit Underflow Counter Register*/
       Ifx_GETH_MTL_TXQ0_DEBUG             DEBUG;                  /**< \brief 8, MTL Queue 0 Transmit Debug Register*/
       Ifx_UReg_8Bit                       reserved_C[8];          /**< \brief C, \internal Reserved */
       Ifx_GETH_MTL_TXQ0_ETS_STATUS        ETS_STATUS;             /**< \brief 14, MTL Queue 0 Transmit Status Register*/
       Ifx_GETH_MTL_TXQ0_QUANTUM_WEIGHT    QUANTUM_WEIGHT;         /**< \brief 18, MTL Queue 0 Transmit Quantum or Weights Register*/
} Ifx_GETH_MTL_TXQ0;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Geth_MTL_Q0_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MTL_Q0 object */
typedef volatile struct _Ifx_GETH_MTL_Q0
{
       Ifx_GETH_MTL_Q0_INTERRUPT_CONTROL_STATUS INTERRUPT_CONTROL_STATUS;    /**< \brief 0, MTL Queue 0 Interrupt Control Status Register*/
} Ifx_GETH_MTL_Q0;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Geth_MTL_RXQ0_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MTL_RXQ0 object */
typedef volatile struct _Ifx_GETH_MTL_RXQ0
{
       Ifx_GETH_MTL_RXQ0_OPERATION_MODE    OPERATION_MODE;         /**< \brief 0, MTL Queue 0 Receive Operation Mode Register*/
       Ifx_GETH_MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT MISSED_PACKET_OVERFLOW_CNT;    /**< \brief 4, MTL Queue 0 Receive Missed Packet and Overflow Counter Register*/
       Ifx_GETH_MTL_RXQ0_DEBUG             DEBUG;                  /**< \brief 8, MTL Queue 0 Receive Debug Register*/
       Ifx_GETH_MTL_RXQ0_CONTROL           CONTROL;                /**< \brief C, MTL Queue 0 Receive Control Register*/
} Ifx_GETH_MTL_RXQ0;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Geth_MTL_TXQ_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MTL_TXQ object */
typedef volatile struct _Ifx_GETH_MTL_TXQ
{
       Ifx_GETH_MTL_TXQ_OPERATION_MODE     OPERATION_MODE;         /**< \brief 0, MTL Queue ${i} Transmit Operation Mode Register*/
       Ifx_GETH_MTL_TXQ_UNDERFLOW          UNDERFLOW;              /**< \brief 4, MTL Queue ${i} Transmit Underflow Counter Register*/
       Ifx_GETH_MTL_TXQ_DEBUG              DEBUG;                  /**< \brief 8, MTL Queue ${i} Transmit Debug Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_GETH_MTL_TXQ_ETS_CONTROL        ETS_CONTROL;            /**< \brief 10, MTL Queue ${i} Transmit ETS Control Register*/
       Ifx_GETH_MTL_TXQ_ETS_STATUS         ETS_STATUS;             /**< \brief 14, MTL Queue ${i} Transmit ETS Status Register*/
       Ifx_GETH_MTL_TXQ_QUANTUM_WEIGHT     QUANTUM_WEIGHT;         /**< \brief 18, MTL Queue ${i} Transmit Quantum or Weights Register*/
       Ifx_GETH_MTL_TXQ_SENDSLOPECREDIT    SENDSLOPECREDIT;        /**< \brief 1C, MTL Queue ${i} Transmit SendSlopeCredit Register*/
       Ifx_GETH_MTL_TXQ_HICREDIT           HICREDIT;               /**< \brief 20, MTL Queue ${i} Transmit HiCredit Register*/
       Ifx_GETH_MTL_TXQ_LOCREDIT           LOCREDIT;               /**< \brief 24, MTL Queue ${i} Transmit LoCredit Register*/
} Ifx_GETH_MTL_TXQ;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Geth_MTL_Q_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MTL_Q object */
typedef volatile struct _Ifx_GETH_MTL_Q
{
       Ifx_GETH_MTL_Q_INTERRUPT_CONTROL_STATUS INTERRUPT_CONTROL_STATUS;    /**< \brief 0, MTL Queue ${i} Interrupt Status Register*/
} Ifx_GETH_MTL_Q;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Geth_MTL_RXQ_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MTL_RXQ object */
typedef volatile struct _Ifx_GETH_MTL_RXQ
{
       Ifx_GETH_MTL_RXQ_OPERATION_MODE     OPERATION_MODE;         /**< \brief 0, MTL Queue ${i} Receive Operation Mode Register*/
       Ifx_GETH_MTL_RXQ_MISSED_PACKET_OVERFLOW_CNT MISSED_PACKET_OVERFLOW_CNT;    /**< \brief 4, MTL Queue ${i} Receive Missed Packet and Overflow Counter Register*/
       Ifx_GETH_MTL_RXQ_DEBUG              DEBUG;                  /**< \brief 8, MTL Queue ${i} Receive Debug Register*/
       Ifx_GETH_MTL_RXQ_CONTROL            CONTROL;                /**< \brief C, MTL Queue ${i} Receive Control Register*/
} Ifx_GETH_MTL_RXQ;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Geth_DMA_CH_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief DMA_CH object */
typedef volatile struct _Ifx_GETH_DMA_CH
{
       Ifx_GETH_DMA_CH_CONTROL             CONTROL;                /**< \brief 0, DMA Channel ${i} Control Register*/
       Ifx_GETH_DMA_CH_TX_CONTROL          TX_CONTROL;             /**< \brief 4, DMA Channel ${i} Transmit Control Register*/
       Ifx_GETH_DMA_CH_RX_CONTROL          RX_CONTROL;             /**< \brief 8, DMA Channel ${i} Receive Control Register*/
       Ifx_UReg_8Bit                       reserved_C[8];          /**< \brief C, \internal Reserved */
       Ifx_GETH_DMA_CH_TXDESC_LIST_ADDRESS TXDESC_LIST_ADDRESS;    /**< \brief 14, DMA Channel ${i} Transmit Descriptor List Address Register*/
       Ifx_UReg_8Bit                       reserved_18[4];         /**< \brief 18, \internal Reserved */
       Ifx_GETH_DMA_CH_RXDESC_LIST_ADDRESS RXDESC_LIST_ADDRESS;    /**< \brief 1C, DMA Channel ${i} Receive Descriptor List Address Register*/
       Ifx_GETH_DMA_CH_TXDESC_TAIL_POINTER TXDESC_TAIL_POINTER;    /**< \brief 20, DMA Channel ${i} Transmit Descriptor Tail Pointer Register*/
       Ifx_UReg_8Bit                       reserved_24[4];         /**< \brief 24, \internal Reserved */
       Ifx_GETH_DMA_CH_RXDESC_TAIL_POINTER RXDESC_TAIL_POINTER;    /**< \brief 28, DMA Channel ${i} Recieve Descriptor Tail Pointer Register*/
       Ifx_GETH_DMA_CH_TXDESC_RING_LENGTH  TXDESC_RING_LENGTH;     /**< \brief 2C, DMA Channel ${i} Transmit Descriptor Ring Length Register*/
       Ifx_GETH_DMA_CH_RXDESC_RING_LENGTH  RXDESC_RING_LENGTH;     /**< \brief 30, DMA Channel ${i} Recieve Descriptor Ring Length Register*/
       Ifx_GETH_DMA_CH_INTERRUPT_ENABLE    INTERRUPT_ENABLE;       /**< \brief 34, DMA Channel ${i} Interrupt Enable Register*/
       Ifx_GETH_DMA_CH_RX_INTERRUPT_WATCHDOG_TIMER RX_INTERRUPT_WATCHDOG_TIMER;    /**< \brief 38, DMA Channel ${i} Recieve Interrupt Watchdog Timer Register*/
       Ifx_GETH_DMA_CH_SLOT_FUNCTION_CONTROL_STATUS SLOT_FUNCTION_CONTROL_STATUS;    /**< \brief 3C, DMA Channel ${i} Slot Function Control and Status Register*/
       Ifx_UReg_8Bit                       reserved_40[4];         /**< \brief 40, \internal Reserved */
       Ifx_GETH_DMA_CH_CURRENT_APP_TXDESC  CURRENT_APP_TXDESC;     /**< \brief 44, DMA Channel ${i} Current Application Transmit Descriptor Register*/
       Ifx_UReg_8Bit                       reserved_48[4];         /**< \brief 48, \internal Reserved */
       Ifx_GETH_DMA_CH_CURRENT_APP_RXDESC  CURRENT_APP_RXDESC;     /**< \brief 4C, DMA Channel ${i} Current Application Receive Descriptor Register*/
       Ifx_UReg_8Bit                       reserved_50[4];         /**< \brief 50, \internal Reserved */
       Ifx_GETH_DMA_CH_CURRENT_APP_TXBUFFER CURRENT_APP_TXBUFFER;    /**< \brief 54, DMA Channel ${i} Current Application Transmit Buffer Address Register*/
       Ifx_UReg_8Bit                       reserved_58[4];         /**< \brief 58, \internal Reserved */
       Ifx_GETH_DMA_CH_CURRENT_APP_RXBUFFER CURRENT_APP_RXBUFFER;    /**< \brief 5C, DMA Channel ${i} Current Application Receive Buffer Address Register*/
       Ifx_GETH_DMA_CH_STATUS              STATUS;                 /**< \brief 60, DMA Channel ${i} Status Register*/
       Ifx_GETH_DMA_CH_MISS_FRAME_CNT      MISS_FRAME_CNT;         /**< \brief 64, DMA Channel ${i} Missed Frames Count Register*/
       Ifx_UReg_8Bit                       reserved_68[24];        /**< \brief 68, \internal Reserved */
} Ifx_GETH_DMA_CH;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Geth_ACCEND_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ACCEND object */
typedef volatile struct _Ifx_GETH_ACCEND
{
       Ifx_GETH_ACCEND_ACCEN0D             ACCEN0D;                /**< \brief 0, Access Enable Register 0 for DMA${x}*/
       Ifx_GETH_ACCEND_ACCEN1D             ACCEN1D;                /**< \brief 4, Access Enable Register 1 for DMA${x}*/
} Ifx_GETH_ACCEND;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Geth_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief GETH object */
typedef volatile struct _Ifx_GETH
{
       Ifx_GETH_MAC_CONFIGURATION          MAC_CONFIGURATION;      /**< \brief 0, MAC Configuration Register*/
       Ifx_GETH_MAC_EXT_CONFIGURATION      MAC_EXT_CONFIGURATION;    /**< \brief 4, MAC Extended Configuration Register*/
       Ifx_GETH_MAC_PACKET_FILTER          MAC_PACKET_FILTER;      /**< \brief 8, MAC Packet Filter Register*/
       Ifx_GETH_MAC_WATCHDOG_TIMEOUT       MAC_WATCHDOG_TIMEOUT;    /**< \brief C, MAC Watchdog Timeout Register*/
       Ifx_UReg_8Bit                       reserved_10[64];        /**< \brief 10, \internal Reserved */
       Ifx_GETH_MAC_VLAN_TAG_CTRL          MAC_VLAN_TAG_CTRL;      /**< \brief 50, MAC VLAN Tag Control Register*/
       union
       {
             Ifx_GETH_MAC_VLAN_TAG_DATA          MAC_VLAN_TAG_DATA;      /**< \brief 54, MAC VLAN Tag Data Register*/
             Ifx_GETH_MAC_VLAN_TAG_FILTER        MAC_VLAN_TAG_FILTER;    /**< \brief 54, MAC VLAN Tag Filter ${i} Register*/
       };
       Ifx_GETH_MAC_VLAN_HASH_TABLE        MAC_VLAN_HASH_TABLE;    /**< \brief 58, MAC VLAN Hash Table Register*/
       Ifx_UReg_8Bit                       reserved_5C[4];         /**< \brief 5C, \internal Reserved */
       union
       {
             Ifx_GETH_MAC_VLAN_INCL              MAC_VLAN_INCL;          /**< \brief 60, MAC VLAN Tag Inclusion or Replacement Register*/
             Ifx_GETH_MAC_VLAN_INCL_Q            MAC_VLAN_INCL_Q;        /**< \brief 60, MAC VLAN Tag Inclusion or Replacement Register per Queue*/
       };
       Ifx_GETH_MAC_INNER_VLAN_INCL        MAC_INNER_VLAN_INCL;    /**< \brief 64, */
       Ifx_UReg_8Bit                       reserved_68[8];         /**< \brief 68, \internal Reserved */
       Ifx_GETH_MAC_Q0_TX_FLOW_CTRL        MAC_Q0_TX_FLOW_CTRL;    /**< \brief 70, MAC Queue 0 TX Flow Control Register*/
       Ifx_UReg_8Bit                       reserved_74[28];        /**< \brief 74, \internal Reserved */
       Ifx_GETH_MAC_RX_FLOW_CTRL           MAC_RX_FLOW_CTRL;       /**< \brief 90, MAC Receive Flow Control Register*/
       Ifx_GETH_MAC_RXQ_CTRL4              MAC_RXQ_CTRL4;          /**< \brief 94, MAC Receive Queue Control 4 register*/
       Ifx_UReg_8Bit                       reserved_98[8];         /**< \brief 98, \internal Reserved */
       Ifx_GETH_MAC_RXQ_CTRL0              MAC_RXQ_CTRL0;          /**< \brief A0, MAC Receive Queue Control 0 Register*/
       Ifx_GETH_MAC_RXQ_CTRL1              MAC_RXQ_CTRL1;          /**< \brief A4, MAC Receive Queue Control 1 Register*/
       Ifx_GETH_MAC_RXQ_CTRL2              MAC_RXQ_CTRL2;          /**< \brief A8, MAC Receive Queue Control 2 Register*/
       Ifx_UReg_8Bit                       reserved_AC[4];         /**< \brief AC, \internal Reserved */
       Ifx_GETH_MAC_INTERRUPT_STATUS       MAC_INTERRUPT_STATUS;    /**< \brief B0, MAC Interrupt Status Register*/
       Ifx_GETH_MAC_INTERRUPT_ENABLE       MAC_INTERRUPT_ENABLE;    /**< \brief B4, MAC Interrupt Enable Register*/
       Ifx_GETH_MAC_RX_TX_STATUS           MAC_RX_TX_STATUS;       /**< \brief B8, MAC Receive Transmit Status Register*/
       Ifx_UReg_8Bit                       reserved_BC[4];         /**< \brief BC, \internal Reserved */
       Ifx_GETH_MAC_PMT_CONTROL_STATUS     MAC_PMT_CONTROL_STATUS;    /**< \brief C0, MAC PMT Control and Status Register*/
       union
       {
             Ifx_GETH_MAC_RWK_PACKET_FILTER      MAC_RWK_PACKET_FILTER;    /**< \brief C4, MAC Wake-up Packet Filter Register*/
             Ifx_GETH_RWK_FILTER_COMMAND_0       RWK_FILTER_COMMAND_0;    /**< \brief C4, MAC Wake-up Filter Command 0 Register*/
             Ifx_GETH_RWK_FILTER_OFFSET_0        RWK_FILTER_OFFSET_0;    /**< \brief C4, MAC Wake-up Filter Offset 0 Register*/
             Ifx_GETH_RWK_FILTER_CRC             RWK_FILTER_CRC;         /**< \brief C4, MAC Wake-up Filter CRC ${i} Register*/
             Ifx_GETH_RWK_FILTER_BYTE_MASK       RWK_FILTER_BYTE_MASK;    /**< \brief C4, MAC Wake-up ${i} Filter Byte Mask register*/
       };
       Ifx_UReg_8Bit                       reserved_C8[8];         /**< \brief C8, \internal Reserved */
       Ifx_GETH_MAC_LPI_CONTROL_STATUS     MAC_LPI_CONTROL_STATUS;    /**< \brief D0, MAC LPI Control and Status Register*/
       Ifx_GETH_MAC_LPI_TIMERS_CONTROL     MAC_LPI_TIMERS_CONTROL;    /**< \brief D4, MAC LPI Timers Control Register*/
       Ifx_GETH_MAC_LPI_ENTRY_TIMER        MAC_LPI_ENTRY_TIMER;    /**< \brief D8, MAC LPI Entry Timer Register*/
       Ifx_GETH_MAC_1US_TIC_COUNTER        MAC_1US_TIC_COUNTER;    /**< \brief DC, MAC One Microsecond Tic Counter Register*/
       Ifx_UReg_8Bit                       reserved_E0[24];        /**< \brief E0, \internal Reserved */
       Ifx_GETH_MAC_PHYIF_CONTROL_STATUS   MAC_PHYIF_CONTROL_STATUS;    /**< \brief F8, MAC PHY Interface Control and Status Register*/
       Ifx_UReg_8Bit                       reserved_FC[20];        /**< \brief FC, \internal Reserved */
       Ifx_GETH_MAC_VERSION                MAC_VERSION;            /**< \brief 110, MAC Version Register*/
       Ifx_GETH_MAC_DEBUG                  MAC_DEBUG;              /**< \brief 114, MAC Debug Register*/
       Ifx_UReg_8Bit                       reserved_118[4];        /**< \brief 118, \internal Reserved */
       Ifx_GETH_MAC_HW_FEATURE0            MAC_HW_FEATURE0;        /**< \brief 11C, MAC Hardware Feature Register 0*/
       Ifx_GETH_MAC_HW_FEATURE1            MAC_HW_FEATURE1;        /**< \brief 120, MAC Hardware Feature Register 1*/
       Ifx_GETH_MAC_HW_FEATURE2            MAC_HW_FEATURE2;        /**< \brief 124, MAC Hardware Feature Register 2*/
       Ifx_GETH_MAC_HW_FEATURE3            MAC_HW_FEATURE3;        /**< \brief 128, MAC Hardware Feature Register 3*/
       Ifx_UReg_8Bit                       reserved_12C[212];      /**< \brief 12C, \internal Reserved */
       Ifx_GETH_MAC_MDIO_ADDRESS           MAC_MDIO_ADDRESS;       /**< \brief 200, MAC MDIO Address Register*/
       Ifx_GETH_MAC_MDIO_DATA              MAC_MDIO_DATA;          /**< \brief 204, MAC MDIO Data Register*/
       Ifx_UReg_8Bit                       reserved_208[40];       /**< \brief 208, \internal Reserved */
       Ifx_GETH_MAC_CSR_SW_CTRL            MAC_CSR_SW_CTRL;        /**< \brief 230, MAC CSR Software Controls Register*/
       Ifx_UReg_8Bit                       reserved_234[4];        /**< \brief 234, \internal Reserved */
       Ifx_GETH_MAC_EXT_CFG1               MAC_EXT_CFG1;           /**< \brief 238, MAC Extended Configuration Register 1*/
       Ifx_UReg_8Bit                       reserved_23C[196];      /**< \brief 23C, \internal Reserved */
       Ifx_GETH_MAC_ADDRESS_HIGH0          MAC_ADDRESS_HIGH0;      /**< \brief 300, MAC Address 0 High Register*/
       Ifx_GETH_MAC_ADDRESS_LOW0           MAC_ADDRESS_LOW0;       /**< \brief 304, MAC Address 0 Low Register*/
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH1;      /**< \brief 308, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW1;       /**< \brief 30C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH2;      /**< \brief 310, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW2;       /**< \brief 314, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH3;      /**< \brief 318, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW3;       /**< \brief 31C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH4;      /**< \brief 320, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW4;       /**< \brief 324, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH5;      /**< \brief 328, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW5;       /**< \brief 32C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH6;      /**< \brief 330, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW6;       /**< \brief 334, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH7;      /**< \brief 338, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW7;       /**< \brief 33C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH8;      /**< \brief 340, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW8;       /**< \brief 344, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH9;      /**< \brief 348, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW9;       /**< \brief 34C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH10;     /**< \brief 350, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW10;      /**< \brief 354, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH11;     /**< \brief 358, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW11;      /**< \brief 35C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH12;     /**< \brief 360, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW12;      /**< \brief 364, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH13;     /**< \brief 368, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW13;      /**< \brief 36C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH14;     /**< \brief 370, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW14;      /**< \brief 374, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH15;     /**< \brief 378, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW15;      /**< \brief 37C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH16;     /**< \brief 380, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW16;      /**< \brief 384, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH17;     /**< \brief 388, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW17;      /**< \brief 38C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH18;     /**< \brief 390, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW18;      /**< \brief 394, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH19;     /**< \brief 398, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW19;      /**< \brief 39C, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH20;     /**< \brief 3A0, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW20;      /**< \brief 3A4, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH21;     /**< \brief 3A8, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW21;      /**< \brief 3AC, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH22;     /**< \brief 3B0, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW22;      /**< \brief 3B4, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH23;     /**< \brief 3B8, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW23;      /**< \brief 3BC, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH24;     /**< \brief 3C0, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW24;      /**< \brief 3C4, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH25;     /**< \brief 3C8, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW25;      /**< \brief 3CC, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH26;     /**< \brief 3D0, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW26;      /**< \brief 3D4, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH27;     /**< \brief 3D8, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW27;      /**< \brief 3DC, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH28;     /**< \brief 3E0, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW28;      /**< \brief 3E4, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH29;     /**< \brief 3E8, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW29;      /**< \brief 3EC, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH30;     /**< \brief 3F0, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW30;      /**< \brief 3F4, */
       Ifx_GETH_MAC_ADDRESS_HIGH           MAC_ADDRESS_HIGH31;     /**< \brief 3F8, */
       Ifx_GETH_MAC_ADDRESS_LOW            MAC_ADDRESS_LOW31;      /**< \brief 3FC, */
       Ifx_UReg_8Bit                       reserved_400[768];      /**< \brief 400, \internal Reserved */
       Ifx_GETH_MMC_CONTROL                MMC_CONTROL;            /**< \brief 700, MMC Control Register*/
       Ifx_GETH_MMC_RX_INTERRUPT           MMC_RX_INTERRUPT;       /**< \brief 704, MMC Receive Interrupts Register*/
       Ifx_GETH_MMC_TX_INTERRUPT           MMC_TX_INTERRUPT;       /**< \brief 708, MMC Transmit Interrupts Register*/
       Ifx_GETH_MMC_RX_INTERRUPT_MASK      MMC_RX_INTERRUPT_MASK;    /**< \brief 70C, MMC Receive Interrupts Mask Register*/
       Ifx_GETH_MMC_TX_INTERRUPT_MASK      MMC_TX_INTERRUPT_MASK;    /**< \brief 710, MMC Transmit Interrupts Mask Register*/
       Ifx_GETH_TX_OCTET_COUNT_GOOD_BAD    TX_OCTET_COUNT_GOOD_BAD;    /**< \brief 714, Good And Bad Transmitted Octet Count Register*/
       Ifx_GETH_TX_PACKET_COUNT_GOOD_BAD   TX_PACKET_COUNT_GOOD_BAD;    /**< \brief 718, Good And Bad Transmitted Packets Count Register*/
       Ifx_GETH_TX_BROADCAST_PACKETS_GOOD  TX_BROADCAST_PACKETS_GOOD;    /**< \brief 71C, Good Transmitted Broadcast Packets Count Register*/
       Ifx_GETH_TX_MULTICAST_PACKETS_GOOD  TX_MULTICAST_PACKETS_GOOD;    /**< \brief 720, Good Transmitted Multicast Packets Count Register*/
       Ifx_GETH_TX_64OCTETS_PACKETS_GOOD_BAD TX_64OCTETS_PACKETS_GOOD_BAD;    /**< \brief 724, Good And Bad 64 Octets Packets Transmitted Count Register*/
       Ifx_GETH_TX_65TO127OCTETS_PACKETS_GOOD_BAD TX_65TO127OCTETS_PACKETS_GOOD_BAD;    /**< \brief 728, Good And Bad 65to127 Octets Packets Transmitted Count Register*/
       Ifx_GETH_TX_128TO255OCTETS_PACKETS_GOOD_BAD TX_128TO255OCTETS_PACKETS_GOOD_BAD;    /**< \brief 72C, Good And Bad 128to255 Octets Packets Transmitted Count Register*/
       Ifx_GETH_TX_256TO511OCTETS_PACKETS_GOOD_BAD TX_256TO511OCTETS_PACKETS_GOOD_BAD;    /**< \brief 730, Good And Bad 256to511 Octets Packets Transmitted Count Register*/
       Ifx_GETH_TX_512TO1023OCTETS_PACKETS_GOOD_BAD TX_512TO1023OCTETS_PACKETS_GOOD_BAD;    /**< \brief 734, Good And Bad 512to1023 Octets Packets Transmitted Count Register*/
       Ifx_GETH_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD;    /**< \brief 738, Good And Bad 1024toMax Octets Packets Transmitted Count Register*/
       Ifx_GETH_TX_UNICAST_PACKETS_GOOD_BAD TX_UNICAST_PACKETS_GOOD_BAD;    /**< \brief 73C, Good Transmitted Unicat Packets Count Register*/
       Ifx_GETH_TX_MULTICAST_PACKETS_GOOD_BAD TX_MULTICAST_PACKETS_GOOD_BAD;    /**< \brief 740, Good And Bad Transmitted Multicast Packets Count Register*/
       Ifx_GETH_TX_BROADCAST_PACKETS_GOOD_BAD TX_BROADCAST_PACKETS_GOOD_BAD;    /**< \brief 744, Good And Bad Transmitted Broadcast Packets Count Register*/
       Ifx_GETH_TX_UNDERFLOW_ERROR_PACKETS TX_UNDERFLOW_ERROR_PACKETS;    /**< \brief 748, Transmitted Underflow Error Packets Count Register*/
       Ifx_GETH_TX_SINGLE_COLLISION_GOOD_PACKETS TX_SINGLE_COLLISION_GOOD_PACKETS;    /**< \brief 74C, Good Transmitted Single Collision Count Register*/
       Ifx_GETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS TX_MULTIPLE_COLLISION_GOOD_PACKETS;    /**< \brief 750, Transmitted Multiple Collision Count Register*/
       Ifx_GETH_TX_DEFERRED_PACKETS        TX_DEFERRED_PACKETS;    /**< \brief 754, Transmitted Deferred Packets Count Register*/
       Ifx_GETH_TX_LATE_COLLISION_PACKETS  TX_LATE_COLLISION_PACKETS;    /**< \brief 758, Transmitted Late Collision Packets Count Register*/
       Ifx_GETH_TX_EXCESSIVE_COLLISION_PACKETS TX_EXCESSIVE_COLLISION_PACKETS;    /**< \brief 75C, Transmitted Excessive Collision Packets Count Register*/
       Ifx_GETH_TX_CARRIER_ERROR_PACKETS   TX_CARRIER_ERROR_PACKETS;    /**< \brief 760, Transmitted Carrier Error Packets Count Register*/
       Ifx_GETH_TX_OCTET_COUNT_GOOD        TX_OCTET_COUNT_GOOD;    /**< \brief 764, Good Transmitted Octet Count Register*/
       Ifx_GETH_TX_PACKET_COUNT_GOOD       TX_PACKET_COUNT_GOOD;    /**< \brief 768, Good Transmitted Packet Count Register*/
       Ifx_GETH_TX_EXCESSIVE_DEFERRAL_ERROR TX_EXCESSIVE_DEFERRAL_ERROR;    /**< \brief 76C, Transmitted Excessive Deferral Error Count Register*/
       Ifx_GETH_TX_PAUSE_PACKETS           TX_PAUSE_PACKETS;       /**< \brief 770, Transmitted Pause Packets Count Register*/
       Ifx_GETH_TX_VLAN_PACKETS_GOOD       TX_VLAN_PACKETS_GOOD;    /**< \brief 774, Good Transmitted VLAN Packets Count Register*/
       Ifx_GETH_TX_OSIZE_PACKETS_GOOD      TX_OSIZE_PACKETS_GOOD;    /**< \brief 778, Good Transmitted Osize Packets Count Register*/
       Ifx_UReg_8Bit                       reserved_77C[4];        /**< \brief 77C, \internal Reserved */
       Ifx_GETH_RX_PACKETS_COUNT_GOOD_BAD  RX_PACKETS_COUNT_GOOD_BAD;    /**< \brief 780, Good And Bad Received Packets Count Register*/
       Ifx_GETH_RX_OCTET_COUNT_GOOD_BAD    RX_OCTET_COUNT_GOOD_BAD;    /**< \brief 784, Good And Bad Received Octet Count Register*/
       Ifx_GETH_RX_OCTET_COUNT_GOOD        RX_OCTET_COUNT_GOOD;    /**< \brief 788, Good Received Octet Count Register*/
       Ifx_GETH_RX_BROADCAST_PACKETS_GOOD  RX_BROADCAST_PACKETS_GOOD;    /**< \brief 78C, Good Received Broadcast Packets Count Register*/
       Ifx_GETH_RX_MULTICAST_PACKETS_GOOD  RX_MULTICAST_PACKETS_GOOD;    /**< \brief 790, Good Received Multicast Packets Count Register*/
       Ifx_GETH_RX_CRC_ERROR_PACKETS       RX_CRC_ERROR_PACKETS;    /**< \brief 794, Received CRC Error Packets Count Register*/
       Ifx_GETH_RX_ALIGNMENT_ERROR_PACKETS RX_ALIGNMENT_ERROR_PACKETS;    /**< \brief 798, Received Alignment Error Count Register*/
       Ifx_GETH_RX_RUNT_ERROR_PACKETS      RX_RUNT_ERROR_PACKETS;    /**< \brief 79C, Received Runtime Error Count Register*/
       Ifx_GETH_RX_JABBER_ERROR_PACKETS    RX_JABBER_ERROR_PACKETS;    /**< \brief 7A0, Received Jabber Error Count Register*/
       Ifx_GETH_RX_UNDERSIZE_PACKETS_GOOD  RX_UNDERSIZE_PACKETS_GOOD;    /**< \brief 7A4, Good Received Undersized Packets Count Register*/
       Ifx_GETH_RX_OVERSIZE_PACKETS_GOOD   RX_OVERSIZE_PACKETS_GOOD;    /**< \brief 7A8, Good Received Oversized Packets Count Register*/
       Ifx_GETH_RX_64OCTETS_PACKETS_GOOD_BAD RX_64OCTETS_PACKETS_GOOD_BAD;    /**< \brief 7AC, Good And Bad 64 Octets Packets Received Count Register*/
       Ifx_GETH_RX_65TO127OCTETS_PACKETS_GOOD_BAD RX_65TO127OCTETS_PACKETS_GOOD_BAD;    /**< \brief 7B0, Good And Bad 65to127 Octets Packets Received Count Register*/
       Ifx_GETH_RX_128TO255OCTETS_PACKETS_GOOD_BAD RX_128TO255OCTETS_PACKETS_GOOD_BAD;    /**< \brief 7B4, Good And Bad 128to255 Octets Packets Received Count Register*/
       Ifx_GETH_RX_256TO511OCTETS_PACKETS_GOOD_BAD RX_256TO511OCTETS_PACKETS_GOOD_BAD;    /**< \brief 7B8, Good And Bad 256to511 Octets Packets Received Count Register*/
       Ifx_GETH_RX_512TO1023OCTETS_PACKETS_GOOD_BAD RX_512TO1023OCTETS_PACKETS_GOOD_BAD;    /**< \brief 7BC, Good And Bad 512to1023 Octets Packets Received Count Register*/
       Ifx_GETH_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD;    /**< \brief 7C0, Good And Bad 1024toMax Octets Packets Received Count Register*/
       Ifx_GETH_RX_UNICAST_PACKETS_GOOD    RX_UNICAST_PACKETS_GOOD;    /**< \brief 7C4, Good Received Unicat Packets Count Register*/
       Ifx_GETH_RX_LENGTH_ERROR_PACKETS    RX_LENGTH_ERROR_PACKETS;    /**< \brief 7C8, Received Length Error Packets Count Register*/
       Ifx_GETH_RX_OUT_OF_RANGE_TYPE_PACKETS RX_OUT_OF_RANGE_TYPE_PACKETS;    /**< \brief 7CC, Received Out Of Range Type Count Register*/
       Ifx_GETH_RX_PAUSE_PACKETS           RX_PAUSE_PACKETS;       /**< \brief 7D0, Received Pause Packets Count Register*/
       Ifx_GETH_RX_FIFO_OVERFLOW_PACKETS   RX_FIFO_OVERFLOW_PACKETS;    /**< \brief 7D4, Received FIFO Overflow Count Register*/
       Ifx_GETH_RX_VLAN_PACKETS_GOOD_BAD   RX_VLAN_PACKETS_GOOD_BAD;    /**< \brief 7D8, Good And Bad Received VLAN Packets Count Registerv*/
       Ifx_GETH_RX_WATCHDOG_ERROR_PACKETS  RX_WATCHDOG_ERROR_PACKETS;    /**< \brief 7DC, Received Watchdog Error Count Register*/
       Ifx_GETH_RX_RECEIVE_ERROR_PACKETS   RX_RECEIVE_ERROR_PACKETS;    /**< \brief 7E0, Received Receive Error Count Register*/
       Ifx_GETH_RX_CONTROL_PACKETS_GOOD    RX_CONTROL_PACKETS_GOOD;    /**< \brief 7E4, Good Received Control Packets Count Register*/
       Ifx_UReg_8Bit                       reserved_7E8[4];        /**< \brief 7E8, \internal Reserved */
       Ifx_GETH_TX_LPI_USEC_CNTR           TX_LPI_USEC_CNTR;       /**< \brief 7EC, Transmitted LPI Microseconds Count Register*/
       Ifx_GETH_TX_LPI_TRAN_CNTR           TX_LPI_TRAN_CNTR;       /**< \brief 7F0, Transmitted LPI Transition Count Register*/
       Ifx_GETH_RX_LPI_USEC_CNTR           RX_LPI_USEC_CNTR;       /**< \brief 7F4, Received Microseconds LPI Count Register*/
       Ifx_GETH_RX_LPI_TRAN_CNTR           RX_LPI_TRAN_CNTR;       /**< \brief 7F8, Received LPI Transition Count Register*/
       Ifx_UReg_8Bit                       reserved_7FC[4];        /**< \brief 7FC, \internal Reserved */
       Ifx_GETH_MMC_IPC_RX_INTERRUPT_MASK  MMC_IPC_RX_INTERRUPT_MASK;    /**< \brief 800, MMC IPC Receive Interrupts Mask Register*/
       Ifx_UReg_8Bit                       reserved_804[4];        /**< \brief 804, \internal Reserved */
       Ifx_GETH_MMC_IPC_RX_INTERRUPT       MMC_IPC_RX_INTERRUPT;    /**< \brief 808, MMC IPC Receive Interrupts Register*/
       Ifx_UReg_8Bit                       reserved_80C[4];        /**< \brief 80C, \internal Reserved */
       Ifx_GETH_RXIPV4_GOOD_PACKETS        RXIPV4_GOOD_PACKETS;    /**< \brief 810, Good Received RxIPv4 Packets Count Register*/
       Ifx_GETH_RXIPV4_HEADER_ERROR_PACKETS RXIPV4_HEADER_ERROR_PACKETS;    /**< \brief 814, Received IPv4 Header Error Packets Count Register*/
       Ifx_GETH_RXIPV4_NO_PAYLOAD_PACKETS  RXIPV4_NO_PAYLOAD_PACKETS;    /**< \brief 818, Received IPv4 No Payload Packets Count Register*/
       Ifx_GETH_RXIPV4_FRAGMENTED_PACKETS  RXIPV4_FRAGMENTED_PACKETS;    /**< \brief 81C, Received IPv4 Fragmented Packets Count Register*/
       Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS;    /**< \brief 820, Received IPv4 UPD Checksum Disabled Packets Count Register*/
       Ifx_GETH_RXIPV6_GOOD_PACKETS        RXIPV6_GOOD_PACKETS;    /**< \brief 824, Good Received RxIPv6 Packets Count Register*/
       Ifx_GETH_RXIPV6_HEADER_ERROR_PACKETS RXIPV6_HEADER_ERROR_PACKETS;    /**< \brief 828, Received IPv6 Header Error Packets Count Register*/
       Ifx_GETH_RXIPV6_NO_PAYLOAD_PACKETS  RXIPV6_NO_PAYLOAD_PACKETS;    /**< \brief 82C, Received IPv6 No Payload Packets Count Register*/
       Ifx_GETH_RXUDP_GOOD_PACKETS         RXUDP_GOOD_PACKETS;     /**< \brief 830, Good Received UDP Packets Count Register*/
       Ifx_GETH_RXUDP_ERROR_PACKETS        RXUDP_ERROR_PACKETS;    /**< \brief 834, Received UDP Error Packets Count Register*/
       Ifx_GETH_RXTCP_GOOD_PACKETS         RXTCP_GOOD_PACKETS;     /**< \brief 838, Good Received TCP Packets Count Register*/
       Ifx_GETH_RXTCP_ERROR_PACKETS        RXTCP_ERROR_PACKETS;    /**< \brief 83C, Received TCP Error Packets Count Register*/
       Ifx_GETH_RXICMP_GOOD_PACKETS        RXICMP_GOOD_PACKETS;    /**< \brief 840, Good Received ICMP Packets Count Register*/
       Ifx_GETH_RXICMP_ERROR_PACKETS       RXICMP_ERROR_PACKETS;    /**< \brief 844, Received ICMP Error Packets Count Register*/
       Ifx_UReg_8Bit                       reserved_848[8];        /**< \brief 848, \internal Reserved */
       Ifx_GETH_RXIPV4_GOOD_OCTETS         RXIPV4_GOOD_OCTETS;     /**< \brief 850, Good Received IPV4 Octets Count Register*/
       Ifx_GETH_RXIPV4_HEADER_ERROR_OCTETS RXIPV4_HEADER_ERROR_OCTETS;    /**< \brief 854, Received IPV4 Header Error Octets Count Register*/
       Ifx_GETH_RXIPV4_NO_PAYLOAD_OCTETS   RXIPV4_NO_PAYLOAD_OCTETS;    /**< \brief 858, Received IPV4 No Payload Octets Count Register*/
       Ifx_GETH_RXIPV4_FRAGMENTED_OCTETS   RXIPV4_FRAGMENTED_OCTETS;    /**< \brief 85C, Received IPV4 Fragmented Octets Count Register*/
       Ifx_GETH_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS;    /**< \brief 860, Received IPV4 UPD Checksum Disabled Octets Count Register*/
       Ifx_GETH_RXIPV6_GOOD_OCTETS         RXIPV6_GOOD_OCTETS;     /**< \brief 864, Good Received IPV6 Octets Count Register*/
       Ifx_GETH_RXIPV6_HEADER_ERROR_OCTETS RXIPV6_HEADER_ERROR_OCTETS;    /**< \brief 868, Received IPV6 Header Error Octets Count Register*/
       Ifx_GETH_RXIPV6_NO_PAYLOAD_OCTETS   RXIPV6_NO_PAYLOAD_OCTETS;    /**< \brief 86C, Received IPV6 No Payload Octets Count Register*/
       Ifx_GETH_RXUDP_GOOD_OCTETS          RXUDP_GOOD_OCTETS;      /**< \brief 870, Good Received UDP Octets Count Register*/
       Ifx_GETH_RXUDP_ERROR_OCTETS         RXUDP_ERROR_OCTETS;     /**< \brief 874, Received UDP Error Octets Count Register*/
       Ifx_GETH_RXTCP_GOOD_OCTETS          RXTCP_GOOD_OCTETS;      /**< \brief 878, Good Received TCP Octets Count Register*/
       Ifx_GETH_RXTCP_ERROR_OCTETS         RXTCP_ERROR_OCTETS;     /**< \brief 87C, Received TCP Error Octets Count Register*/
       Ifx_GETH_RXICMP_GOOD_OCTETS         RXICMP_GOOD_OCTETS;     /**< \brief 880, Good Received ICMP Octets Count Register*/
       Ifx_GETH_RXICMP_ERROR_OCTETS        RXICMP_ERROR_OCTETS;    /**< \brief 884, Received ICMP Error Octets Count Register*/
       Ifx_UReg_8Bit                       reserved_888[632];      /**< \brief 888, \internal Reserved */
       Ifx_GETH_MAC_TIMESTAMP_CONTROL      MAC_TIMESTAMP_CONTROL;    /**< \brief B00, MAC Timestamp Control Register*/
       Ifx_GETH_MAC_SUB_SECOND_INCREMENT   MAC_SUB_SECOND_INCREMENT;    /**< \brief B04, MAC Sub-Second Increment Register*/
       Ifx_GETH_MAC_SYSTEM_TIME_SECONDS    MAC_SYSTEM_TIME_SECONDS;    /**< \brief B08, MAC System Time Seconds Register*/
       Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS MAC_SYSTEM_TIME_NANOSECONDS;    /**< \brief B0C, MAC System Time Nanoseconds Register*/
       Ifx_GETH_MAC_SYSTEM_TIME_SECONDS_UPDATE MAC_SYSTEM_TIME_SECONDS_UPDATE;    /**< \brief B10, MAC System Time Seconds Update Register*/
       Ifx_GETH_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE MAC_SYSTEM_TIME_NANOSECONDS_UPDATE;    /**< \brief B14, MAC System Time Nanoseconds Update Register*/
       Ifx_GETH_MAC_TIMESTAMP_ADDEND       MAC_TIMESTAMP_ADDEND;    /**< \brief B18, MAC Timestamp Addend Register*/
       Ifx_GETH_MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS;    /**< \brief B1C, MAC System Time Higher Word Seconds Register*/
       Ifx_GETH_MAC_TIMESTAMP_STATUS       MAC_TIMESTAMP_STATUS;    /**< \brief B20, MAC Timestamp Status Register*/
       Ifx_UReg_8Bit                       reserved_B24[12];       /**< \brief B24, \internal Reserved */
       Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_NANOSECONDS MAC_TX_TIMESTAMP_STATUS_NANOSECONDS;    /**< \brief B30, MAC Transmit Timestamp Nanoseconds Status Register*/
       Ifx_GETH_MAC_TX_TIMESTAMP_STATUS_SECONDS MAC_TX_TIMESTAMP_STATUS_SECONDS;    /**< \brief B34, MAC Transmit Timestamp Seconds Status Register*/
       Ifx_UReg_8Bit                       reserved_B38[24];       /**< \brief B38, \internal Reserved */
       Ifx_GETH_MAC_TIMESTAMP_INGRESS_ASYM_CORR MAC_TIMESTAMP_INGRESS_ASYM_CORR;    /**< \brief B50, MAC Timestamp Ingress Asymmetry Correction Register*/
       Ifx_GETH_MAC_TIMESTAMP_EGRESS_ASYM_CORR MAC_TIMESTAMP_EGRESS_ASYM_CORR;    /**< \brief B54, MAC Timestamp Egress Asymmetry Correction Register*/
       Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND;    /**< \brief B58, MAC Timestamp Ingress Correction Nanoseconds Register*/
       Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND;    /**< \brief B5C, MAC Timestamp Egress Correction Nanoseconds Register*/
       Ifx_GETH_MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC;    /**< \brief B60, MAC Timestamp Ingress Correction Subnanoseconds Register*/
       Ifx_GETH_MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC;    /**< \brief B64, MAC Timestamp Egress Correction Subnanoseconds Register*/
       Ifx_UReg_8Bit                       reserved_B68[8];        /**< \brief B68, \internal Reserved */
       Ifx_GETH_MAC_PPS_CONTROL            MAC_PPS_CONTROL;        /**< \brief B70, MAC PPS Control Register*/
       Ifx_UReg_8Bit                       reserved_B74[12];       /**< \brief B74, \internal Reserved */
       Ifx_GETH_MAC_PPS0_TARGET_TIME_SECONDS MAC_PPS0_TARGET_TIME_SECONDS;    /**< \brief B80, MAC PPS 0 Target Time Seconds Register*/
       Ifx_GETH_MAC_PPS0_TARGET_TIME_NANOSECONDS MAC_PPS0_TARGET_TIME_NANOSECONDS;    /**< \brief B84, MAC PPS 0 Target Time Nanoeconds Register*/
       Ifx_GETH_MAC_PPS0_INTERVAL          MAC_PPS0_INTERVAL;      /**< \brief B88, MAC PPS 0 Interval Register*/
       Ifx_GETH_MAC_PPS0_WIDTH             MAC_PPS0_WIDTH;         /**< \brief B8C, MAC PPS 0 Width Register*/
       Ifx_UReg_8Bit                       reserved_B90[112];      /**< \brief B90, \internal Reserved */
       Ifx_GETH_MTL_OPERATION_MODE         MTL_OPERATION_MODE;     /**< \brief C00, MTL Operation Mode Register*/
       Ifx_UReg_8Bit                       reserved_C04[28];       /**< \brief C04, \internal Reserved */
       Ifx_GETH_MTL_INTERRUPT_STATUS       MTL_INTERRUPT_STATUS;    /**< \brief C20, MTL Interrupt Status Register*/
       Ifx_UReg_8Bit                       reserved_C24[12];       /**< \brief C24, \internal Reserved */
       Ifx_GETH_MTL_RXQ_DMA_MAP0           MTL_RXQ_DMA_MAP0;       /**< \brief C30, MTL Receive Queue and DMA Channel Mapping 0 Register*/
       Ifx_UReg_8Bit                       reserved_C34[204];      /**< \brief C34, \internal Reserved */
       Ifx_GETH_MTL_TXQ0                   MTL_TXQ0;               /**< \brief D00, MTL Queue 0 Transmit Quantum or Weights Register*/
       Ifx_UReg_8Bit                       reserved_D1C[16];       /**< \brief D1C, \internal Reserved */
       Ifx_GETH_MTL_Q0                     MTL_Q0;                 /**< \brief D2C, MTL Queue 0 Interrupt Control Status Register*/
       Ifx_GETH_MTL_RXQ0                   MTL_RXQ0;               /**< \brief D30, MTL Queue 0 Receive Control Register*/
       Ifx_GETH_MTL_TXQ                    MTL_TXQ1;               /**< \brief D40, */
       Ifx_UReg_8Bit                       reserved_D68[4];        /**< \brief D68, \internal Reserved */
       Ifx_GETH_MTL_Q                      MTL_Q1;                 /**< \brief D6C, */
       Ifx_GETH_MTL_RXQ                    MTL_RXQ1;               /**< \brief D70, */
       Ifx_GETH_MTL_TXQ                    MTL_TXQ2;               /**< \brief D80, */
       Ifx_UReg_8Bit                       reserved_DA8[4];        /**< \brief DA8, \internal Reserved */
       Ifx_GETH_MTL_Q                      MTL_Q2;                 /**< \brief DAC, */
       Ifx_GETH_MTL_RXQ                    MTL_RXQ2;               /**< \brief DB0, */
       Ifx_GETH_MTL_TXQ                    MTL_TXQ3;               /**< \brief DC0, */
       Ifx_UReg_8Bit                       reserved_DE8[4];        /**< \brief DE8, \internal Reserved */
       Ifx_GETH_MTL_Q                      MTL_Q3;                 /**< \brief DEC, */
       Ifx_GETH_MTL_RXQ                    MTL_RXQ3;               /**< \brief DF0, */
       Ifx_UReg_8Bit                       reserved_E00[512];      /**< \brief E00, \internal Reserved */
       Ifx_GETH_DMA_MODE                   DMA_MODE;               /**< \brief 1000, DMA Bus Mode Register*/
       Ifx_GETH_DMA_SYSBUS_MODE            DMA_SYSBUS_MODE;        /**< \brief 1004, DMA System Bus Mode Register*/
       Ifx_GETH_DMA_INTERRUPT_STATUS       DMA_INTERRUPT_STATUS;    /**< \brief 1008, DMA Interrupt Status Register*/
       Ifx_GETH_DMA_DEBUG_STATUS0          DMA_DEBUG_STATUS0;      /**< \brief 100C, DMA Debug Status 0 Register*/
       Ifx_GETH_DMA_DEBUG_STATUS1          DMA_DEBUG_STATUS1;      /**< \brief 1010, DMA Debug Status 1 Register*/
       Ifx_UReg_8Bit                       reserved_1014[236];     /**< \brief 1014, \internal Reserved */
       Ifx_GETH_DMA_CH                     DMA_CH[4];              /**< \brief 1100, */
       Ifx_UReg_8Bit                       reserved_1300[3328];    /**< \brief 1300, \internal Reserved */
       Ifx_GETH_CLC                        CLC;                    /**< \brief 2000, Clock Control Register*/
       Ifx_GETH_ID                         ID;                     /**< \brief 2004, Module Identification Register*/
       Ifx_GETH_GPCTL                      GPCTL;                  /**< \brief 2008, General Purpose Control Register*/
       Ifx_GETH_ACCEN0                     ACCEN0;                 /**< \brief 200C, Access Enable Register 0*/
       Ifx_GETH_ACCEN1                     ACCEN1;                 /**< \brief 2010, Access Enable Register 1*/
       Ifx_GETH_KRST0                      KRST0;                  /**< \brief 2014, Kernel Reset Register 0*/
       Ifx_GETH_KRST1                      KRST1;                  /**< \brief 2018, Kernel Reset Register 1*/
       Ifx_GETH_KRSTCLR                    KRSTCLR;                /**< \brief 201C, Kernel Reset Status Clear Register*/
       Ifx_GETH_ACCEND                     ACCEND[4];              /**< \brief 2020, Access Enable Register 1 for DMA${x}*/
       Ifx_GETH_SKEWCTL                    SKEWCTL;                /**< \brief 2040, Skew Control Register*/
       Ifx_UReg_8Bit                       reserved_2044[188];     /**< \brief 2044, \internal Reserved */
} Ifx_GETH;

/** \}  */
/******************************************************************************/
/** \}  */

/******************************************************************************/
#if defined (_TASKING_)
#pragma restore
#endif
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

#endif /* IFXGETH_REGDEF_H */
