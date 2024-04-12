/**
 * \file IfxCan_regdef.h
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
 *
 * $Revision: 663 $
 * $Date: 2012-05-09 16:02:34 +0200 (mer., 09 mai 2012) $
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
 */
#ifndef IFXCAN_REGDEF_H
#define IFXCAN_REGDEF_H
/******************************************************************************/
#include "Global/IfxGlobal_regdef.h"

/******************************************************************************/
/*                           Struct (0 - Bitfields)                           */
/******************************************************************************/

/** Access Enable Register 0 */
typedef struct
{
    unsigned int EN0: 1;                    /** \brief [0:0] Access Enable for Master TAG ID n (rw) */
    unsigned int EN1: 1;                    /** \brief [1:1] Access Enable for Master TAG ID n (rw) */
    unsigned int EN2: 1;                    /** \brief [2:2] Access Enable for Master TAG ID n (rw) */
    unsigned int EN3: 1;                    /** \brief [3:3] Access Enable for Master TAG ID n (rw) */
    unsigned int EN4: 1;                    /** \brief [4:4] Access Enable for Master TAG ID n (rw) */
    unsigned int EN5: 1;                    /** \brief [5:5] Access Enable for Master TAG ID n (rw) */
    unsigned int EN6: 1;                    /** \brief [6:6] Access Enable for Master TAG ID n (rw) */
    unsigned int EN7: 1;                    /** \brief [7:7] Access Enable for Master TAG ID n (rw) */
    unsigned int EN8: 1;                    /** \brief [8:8] Access Enable for Master TAG ID n (rw) */
    unsigned int EN9: 1;                    /** \brief [9:9] Access Enable for Master TAG ID n (rw) */
    unsigned int EN10: 1;                   /** \brief [10:10] Access Enable for Master TAG ID n (rw) */
    unsigned int EN11: 1;                   /** \brief [11:11] Access Enable for Master TAG ID n (rw) */
    unsigned int EN12: 1;                   /** \brief [12:12] Access Enable for Master TAG ID n (rw) */
    unsigned int EN13: 1;                   /** \brief [13:13] Access Enable for Master TAG ID n (rw) */
    unsigned int EN14: 1;                   /** \brief [14:14] Access Enable for Master TAG ID n (rw) */
    unsigned int EN15: 1;                   /** \brief [15:15] Access Enable for Master TAG ID n (rw) */
    unsigned int EN16: 1;                   /** \brief [16:16] Access Enable for Master TAG ID n (rw) */
    unsigned int EN17: 1;                   /** \brief [17:17] Access Enable for Master TAG ID n (rw) */
    unsigned int EN18: 1;                   /** \brief [18:18] Access Enable for Master TAG ID n (rw) */
    unsigned int EN19: 1;                   /** \brief [19:19] Access Enable for Master TAG ID n (rw) */
    unsigned int EN20: 1;                   /** \brief [20:20] Access Enable for Master TAG ID n (rw) */
    unsigned int EN21: 1;                   /** \brief [21:21] Access Enable for Master TAG ID n (rw) */
    unsigned int EN22: 1;                   /** \brief [22:22] Access Enable for Master TAG ID n (rw) */
    unsigned int EN23: 1;                   /** \brief [23:23] Access Enable for Master TAG ID n (rw) */
    unsigned int EN24: 1;                   /** \brief [24:24] Access Enable for Master TAG ID n (rw) */
    unsigned int EN25: 1;                   /** \brief [25:25] Access Enable for Master TAG ID n (rw) */
    unsigned int EN26: 1;                   /** \brief [26:26] Access Enable for Master TAG ID n (rw) */
    unsigned int EN27: 1;                   /** \brief [27:27] Access Enable for Master TAG ID n (rw) */
    unsigned int EN28: 1;                   /** \brief [28:28] Access Enable for Master TAG ID n (rw) */
    unsigned int EN29: 1;                   /** \brief [29:29] Access Enable for Master TAG ID n (rw) */
    unsigned int EN30: 1;                   /** \brief [30:30] Access Enable for Master TAG ID n (rw) */
    unsigned int EN31: 1;                   /** \brief [31:31] Access Enable for Master TAG ID n (rw) */
} Ifx_CAN_ACCEN0_Bits;

/** Access Enable Register 1 */
typedef struct
{
    unsigned int reserved_0: 32;
} Ifx_CAN_ACCEN1_Bits;

/** Application Watchdog Register */
typedef struct
{
    unsigned int AWDV: 8;                   /** \brief [7:0] Application Watchdog Value (rwh) */
    unsigned int reserved_8: 24;
} Ifx_CAN_AWDR_Bits;

/** CAN Clock Control Register */
typedef struct
{
    unsigned int DISR: 1;                   /** \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS: 1;                   /** \brief [1:1] Module Disable Status Bit (rh) */
    unsigned int reserved_2: 1;
    unsigned int EDIS: 1;                   /** \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int reserved_4: 28;
} Ifx_CAN_CLC_Bits;

/** Cycle Time Register */
typedef struct
{
    unsigned int CYCTM: 16;                 /** \brief [15:0] Cycle Time (rh) */
    unsigned int BCC: 6;                    /** \brief [21:16] Basic Cycle Count (rh) */
    unsigned int reserved_22: 2;
    unsigned int CSM: 6;                    /** \brief [29:24] Column of System Matrix (rh) */
    unsigned int reserved_30: 2;
} Ifx_CAN_CYCTMR_Bits;

/** CAN Fractional Divider Register */
typedef struct
{
    unsigned int STEP: 10;                  /** \brief [9:0] Step Value (rw) */
    unsigned int reserved_10: 4;
    unsigned int DM: 2;                     /** \brief [15:14] Divider Mode (rw) */
    unsigned int reserved_16: 16;
} Ifx_CAN_FDR_Bits;

/** Global Mark Register */
typedef struct
{
    unsigned int reserved_0: 9;
    unsigned int GMFR: 7;                   /** \brief [15:9] Global Mark Fraction (rh) */
    unsigned int GM: 16;                    /** \brief [31:16] Global Mark (rh) */
} Ifx_CAN_GMR_Bits;

/** Module Identification Register */
typedef struct
{
    unsigned int MODREV: 8;                 /** \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE: 8;                /** \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER: 16;             /** \brief [31:16] Module Number Value (r) */
} Ifx_CAN_ID_Bits;

/** Kernel Reset Register 0 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT: 1;                /** \brief [1:1] Kernel Reset Status (rw) */
    unsigned int reserved_2: 30;
} Ifx_CAN_KRST0_Bits;

/** Kernel Reset Register 1 */
typedef struct
{
    unsigned int RST: 1;                    /** \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1: 31;
} Ifx_CAN_KRST1_Bits;

/** Kernel Reset Status Clear Register */
typedef struct
{
    unsigned int CLR: 1;                    /** \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1: 31;
} Ifx_CAN_KRSTCLR_Bits;

/** Last Global Mark Register */
typedef struct
{
    unsigned int reserved_0: 9;
    unsigned int LGMFR: 7;                  /** \brief [15:9] Last Global Mark Fraction (rh) */
    unsigned int LGM: 16;                   /** \brief [31:16] Last Global Mark (rh) */
} Ifx_CAN_LGMR_Bits;

/** List Register */
typedef struct
{
    unsigned int BEGIN: 8;                  /** \brief [7:0] List Begin (rh) */
    unsigned int END: 8;                    /** \brief [15:8] List End (rh) */
    unsigned int SIZE: 8;                   /** \brief [23:16] List Size (rh) */
    unsigned int EMPTY: 1;                  /** \brief [24:24] List Empty Indication (rh) */
    unsigned int reserved_25: 7;
} Ifx_CAN_LIST_Bits;

/** Local Offset Register */
typedef struct
{
    unsigned int NEWDISC: 1;                /** \brief [0:0] New Discontinuity Bit (rh) */
    unsigned int DISC: 1;                   /** \brief [1:1] Discontinuity Bit (rh) */
    unsigned int reserved_2: 7;
    unsigned int LOFFR: 7;                  /** \brief [15:9] Local Offset Fraction (rwh) */
    unsigned int LOF: 16;                   /** \brief [31:16] Local Offset (rwh) */
} Ifx_CAN_LOR_Bits;

/** Last Reference Mark Register */
typedef struct
{
    unsigned int reserved_0: 9;
    unsigned int LREFMFR: 7;                /** \brief [15:9] Last Reference Mark Fraction (rh) */
    unsigned int LREFM: 16;                 /** \brief [31:16] Last Reference Mark (rh) */
} Ifx_CAN_LREFMR_Bits;

/** Local Time Capture Register */
typedef struct
{
    unsigned int reserved_0: 6;
    unsigned int LTFRC: 10;                 /** \brief [15:6] Local Time Fraction Value Capture (rh) */
    unsigned int LTC: 16;                   /** \brief [31:16] Local Time Value Capture (rh) */
} Ifx_CAN_LTCR_Bits;

/** Local Time Register */
typedef struct
{
    unsigned int reserved_0: 6;
    unsigned int LTFR: 10;                  /** \brief [15:6] Local Time Fraction (rh) */
    unsigned int LT: 16;                    /** \brief [31:16] Local Time (rh) */
} Ifx_CAN_LTR_Bits;

/** Module Control Register */
typedef struct
{
    unsigned int CLKSEL: 4;                 /** \brief [3:0] Baud Rate Logic Clock Select (rw) */
    unsigned int reserved_4: 8;
    unsigned int MPSEL: 4;                  /** \brief [15:12] Message Pending Selector (rw) */
    unsigned int reserved_16: 16;
} Ifx_CAN_MCR_Bits;

/** Module Interrupt Trigger Register */
typedef struct
{
    unsigned int IT: 16;                    /** \brief [15:0] Interrupt Trigger (w) */
    unsigned int reserved_16: 16;
} Ifx_CAN_MITR_Bits;

/** Message Object  Acceptance Mask Register */
typedef struct
{
    unsigned int AM: 29;                    /** \brief [28:0] Acceptance Mask for Message Identifier (rw) */
    unsigned int MIDE: 1;                   /** \brief [29:29] Acceptance Mask Bit for Message IDE Bit (rw) */
    unsigned int reserved_30: 2;
} Ifx_CAN_MO_AMR_Bits;

/** Message Object  Arbitration Register */
typedef struct
{
    unsigned int ID: 29;                    /** \brief [28:0] CAN Identifier of Message Object n (rwh) */
    unsigned int IDE: 1;                    /** \brief [29:29] Identifier Extension Bit of Message Object n (rwh) */
    unsigned int PRI: 2;                    /** \brief [31:30] Priority Class (rw) */
} Ifx_CAN_MO_AR_Bits;

/** Message Object  Control Register */
typedef struct
{
    unsigned int RESRXPND: 1;               /** \brief [0:0] Reset/Set Receive Pending (w) */
    unsigned int RESTXPND: 1;               /** \brief [1:1] Reset/Set Transmit Pending (w) */
    unsigned int RESRXUPD: 1;               /** \brief [2:2] Reset/Set Receive Updating (w) */
    unsigned int RESNEWDAT: 1;              /** \brief [3:3] Reset/Set New Data (w) */
    unsigned int RESMSGLST: 1;              /** \brief [4:4] Reset/Set Message Lost (w) */
    unsigned int RESMSGVAL: 1;              /** \brief [5:5] Reset/Set Message Valid (w) */
    unsigned int RESRTSEL: 1;               /** \brief [6:6] Reset/Set Receive/Transmit Selected (w) */
    unsigned int RESRXEN: 1;                /** \brief [7:7] Reset/Set Receive Enable (w) */
    unsigned int RESTXRQ: 1;                /** \brief [8:8] Reset/Set Transmit Request (w) */
    unsigned int RESTXEN0: 1;               /** \brief [9:9] Reset/Set Transmit Enable 0 (w) */
    unsigned int RESTXEN1: 1;               /** \brief [10:10] Reset/Set Transmit Enable 1 (w) */
    unsigned int RESDIR: 1;                 /** \brief [11:11] Reset/Set Message Direction (w) */
    unsigned int reserved_12: 4;
    unsigned int SETRXPND: 1;               /** \brief [16:16] Reset/Set Receive Pending (w) */
    unsigned int SETTXPND: 1;               /** \brief [17:17] Reset/Set Transmit Pending (w) */
    unsigned int SETRXUPD: 1;               /** \brief [18:18] Reset/Set Receive Updating (w) */
    unsigned int SETNEWDAT: 1;              /** \brief [19:19] Reset/Set New Data (w) */
    unsigned int SETMSGLST: 1;              /** \brief [20:20] Reset/Set Message Lost (w) */
    unsigned int SETMSGVAL: 1;              /** \brief [21:21] Reset/Set Message Valid (w) */
    unsigned int SETRTSEL: 1;               /** \brief [22:22] Reset/Set Receive/Transmit Selected (w) */
    unsigned int SETRXEN: 1;                /** \brief [23:23] Reset/Set Receive Enable (w) */
    unsigned int SETTXRQ: 1;                /** \brief [24:24] Reset/Set Transmit Request (w) */
    unsigned int SETTXEN0: 1;               /** \brief [25:25] Reset/Set Transmit Enable 0 (w) */
    unsigned int SETTXEN1: 1;               /** \brief [26:26] Reset/Set Transmit Enable 1 (w) */
    unsigned int SETDIR: 1;                 /** \brief [27:27] Reset/Set Message Direction (w) */
    unsigned int reserved_28: 4;
} Ifx_CAN_MO_CTR_Bits;

/** Message Object  Data Register High */
typedef struct
{
    unsigned int DB4: 8;                    /** \brief [7:0] Data Byte 4 of Message Object n (rwh) */
    unsigned int DB5: 8;                    /** \brief [15:8] Data Byte 5 of Message Object n (rwh) */
    unsigned int DB6: 8;                    /** \brief [23:16] Data Byte 6 of Message Object n (rwh) */
    unsigned int DB7: 8;                    /** \brief [31:24] Data Byte 7 of Message Object n (rwh) */
} Ifx_CAN_MO_DATAH_Bits;

/** Message Object  Data Register Low */
typedef struct
{
    unsigned int DB0: 8;                    /** \brief [7:0] Data Byte 0 of Message Object n (rwh) */
    unsigned int DB1: 8;                    /** \brief [15:8] Data Byte 1 of Message Object n (rwh) */
    unsigned int DB2: 8;                    /** \brief [23:16] Data Byte 2 of Message Object n (rwh) */
    unsigned int DB3: 8;                    /** \brief [31:24] Data Byte 3 of Message Object n (rwh) */
} Ifx_CAN_MO_DATAL_Bits;

/** Message Object  Function Control Register */
typedef struct
{
    unsigned int MMC: 4;                    /** \brief [3:0] Message Mode Control (rw) */
    unsigned int RXTOE: 1;                  /** \brief [4:4] Receive Time-Out Enable (rw) */
    unsigned int reserved_5: 3;
    unsigned int GDFS: 1;                   /** \brief [8:8] Gateway Data Frame Send (rw) */
    unsigned int IDC: 1;                    /** \brief [9:9] Identifier Copy (rw) */
    unsigned int DLCC: 1;                   /** \brief [10:10] Data Length Code Copy (rw) */
    unsigned int DATC: 1;                   /** \brief [11:11] Data Copy (rw) */
    unsigned int reserved_12: 4;
    unsigned int RXIE: 1;                   /** \brief [16:16] Receive Interrupt Enable (rw) */
    unsigned int TXIE: 1;                   /** \brief [17:17] Transmit Interrupt Enable (rw) */
    unsigned int OVIE: 1;                   /** \brief [18:18] Overflow Interrupt Enable (rw) */
    unsigned int reserved_19: 1;
    unsigned int FRREN: 1;                  /** \brief [20:20] Foreign Remote Request Enable (rw) */
    unsigned int RMM: 1;                    /** \brief [21:21] Transmit Object Remote Monitoring (rw) */
    unsigned int SDT: 1;                    /** \brief [22:22] Single Data Transfer (rw) */
    unsigned int STT: 1;                    /** \brief [23:23] Single Transmit Trial (rw) */
    unsigned int DLC: 4;                    /** \brief [27:24] Data Length Code (rwh) */
    unsigned int MSC: 4;                    /** \brief [31:28] Message Status Count (TTCAN only) (rwh) */
} Ifx_CAN_MO_FCR_Bits;

/** Message Object  FIFO/Gateway Pointer Register */
typedef struct
{
    unsigned int BOT: 8;                    /** \brief [7:0] Bottom Pointer (rw) */
    unsigned int TOP: 8;                    /** \brief [15:8] Top Pointer (rw) */
    unsigned int CUR: 8;                    /** \brief [23:16] Current Object Pointer (rwh) */
    unsigned int SEL: 8;                    /** \brief [31:24] Object Select Pointer (rw) */
} Ifx_CAN_MO_FGPR_Bits;

/** Message Object  Interrupt Pointer Register */
typedef struct
{
    unsigned int RXINP: 4;                  /** \brief [3:0] Receive Interrupt Node Pointer (rw) */
    unsigned int TXINP: 4;                  /** \brief [7:4] Transmit Interrupt Node Pointer (rw) */
    unsigned int MPN: 8;                    /** \brief [15:8] Message Pending Number (rw) */
    unsigned int CFCVAL: 16;                /** \brief [31:16] CAN Frame Counter Value (rwh) */
} Ifx_CAN_MO_IPR_Bits;

/** Message Index Register */
typedef struct
{
    unsigned int INDEX: 6;                  /** \brief [5:0] Message Pending Index (rh) */
    unsigned int reserved_6: 26;
} Ifx_CAN_MSID_Bits;

/** Message Index Mask Register */
typedef struct
{
    unsigned int IM: 32;                    /** \brief [31:0] Message Index Mask (rw) */
} Ifx_CAN_MSIMASK_Bits;

/** Message Pending Register */
typedef struct
{
    unsigned int PND: 32;                   /** \brief [31:0] Message Pending (rwh) */
} Ifx_CAN_MSPND_Bits;

/** Node Bit Timing Register */
typedef struct
{
    unsigned int BRP: 6;                    /** \brief [5:0] Baud Rate Prescaler (rw) */
    unsigned int SJW: 2;                    /** \brief [7:6] (Re) Synchronization Jump Width (rw) */
    unsigned int TSEG1: 4;                  /** \brief [11:8] Time Segment Before Sample Point (rw) */
    unsigned int TSEG2: 3;                  /** \brief [14:12] Time Segment After Sample Point (rw) */
    unsigned int DIV8: 1;                   /** \brief [15:15] Divide Prescaler Clock by 8 (rw) */
    unsigned int FTX: 1;                    /** \brief [16:16] Fast Transmit (TTCAN only) (rw) */
    unsigned int reserved_17: 15;
} Ifx_CAN_N_BTR_Bits;

/** Node Control Register */
typedef struct
{
    unsigned int INIT: 1;                   /** \brief [0:0] Node Initialization (rwh) */
    unsigned int TRIE: 1;                   /** \brief [1:1] Transfer Interrupt Enable (rw) */
    unsigned int LECIE: 1;                  /** \brief [2:2] LEC Indicated Error Interrupt Enable (rw) */
    unsigned int ALIE: 1;                   /** \brief [3:3] Alert Interrupt Enable (rw) */
    unsigned int CANDIS: 1;                 /** \brief [4:4] CAN Disable (rw) */
    unsigned int reserved_5: 1;
    unsigned int CCE: 1;                    /** \brief [6:6] Configuration Change Enable (rw) */
    unsigned int CALM: 1;                   /** \brief [7:7] CAN Analyzer Mode (rw) */
    unsigned int SUSEN: 1;                  /** \brief [8:8] Suspend Enable (rw) */
    unsigned int reserved_9: 23;
} Ifx_CAN_N_CR_Bits;

/** Node Error Counter Register */
typedef struct
{
    unsigned int REC: 8;                    /** \brief [7:0] Receive Error Counter (rwh) */
    unsigned int TEC: 8;                    /** \brief [15:8] Transmit Error Counter (rwh) */
    unsigned int EWRNLVL: 8;                /** \brief [23:16] Error Warning Level (rw) */
    unsigned int LETD: 1;                   /** \brief [24:24] Last Error Transfer Direction (rh) */
    unsigned int LEINC: 1;                  /** \brief [25:25] Last Error Increment (rh) */
    unsigned int reserved_26: 6;
} Ifx_CAN_N_ECNT_Bits;

/** Node Frame Counter Register */
typedef struct
{
    unsigned int CFC: 16;                   /** \brief [15:0] CAN Frame Counter (rwh) */
    unsigned int CFSEL: 3;                  /** \brief [18:16] CAN Frame Count Selection (rw) */
    unsigned int CFMOD: 2;                  /** \brief [20:19] CAN Frame Counter Mode (rw) */
    unsigned int reserved_21: 1;
    unsigned int CFCIE: 1;                  /** \brief [22:22] CAN Frame Count Interrupt Enable (rw) */
    unsigned int CFCOV: 1;                  /** \brief [23:23] CAN Frame Counter Overflow Flag (rwh) */
    unsigned int reserved_24: 8;
} Ifx_CAN_N_FCR_Bits;

/** Node Interrupt Pointer Register */
typedef struct
{
    unsigned int ALINP: 4;                  /** \brief [3:0] Alert Interrupt Node Pointer (rw) */
    unsigned int LECINP: 4;                 /** \brief [7:4] Last Error Code Interrupt Node Pointer (rw) */
    unsigned int TRINP: 4;                  /** \brief [11:8] Transfer OK Interrupt Node Pointer (rw) */
    unsigned int CFCINP: 4;                 /** \brief [15:12] Frame Counter Interrupt Node Pointer (rw) */
    unsigned int reserved_16: 16;
} Ifx_CAN_N_IPR_Bits;

/** Node Port Control Register */
typedef struct
{
    unsigned int RXSEL: 3;                  /** \brief [2:0] Receive Select (rw) */
    unsigned int reserved_3: 5;
    unsigned int LBM: 1;                    /** \brief [8:8] Loop-Back Mode (rw) */
    unsigned int reserved_9: 23;
} Ifx_CAN_N_PCR_Bits;

/** Node Status Register */
typedef struct
{
    unsigned int LEC: 3;                    /** \brief [2:0] Last Error Code (rwh) */
    unsigned int TXOK: 1;                   /** \brief [3:3] Message Transmitted Successfully (rwh) */
    unsigned int RXOK: 1;                   /** \brief [4:4] Message Received Successfully (rwh) */
    unsigned int ALERT: 1;                  /** \brief [5:5] Alert Warning (rwh) */
    unsigned int EWRN: 1;                   /** \brief [6:6] Error Warning Status (rh) */
    unsigned int BOFF: 1;                   /** \brief [7:7] Bus-off Status (rh) */
    unsigned int LLE: 1;                    /** \brief [8:8] List Length Error (rwh) */
    unsigned int LOE: 1;                    /** \brief [9:9] List Object Error (rwh) */
    unsigned int SUSACK: 1;                 /** \brief [10:10] Suspend Acknowledge (rh) */
    unsigned int reserved_11: 21;
} Ifx_CAN_N_SR_Bits;

/** Node Timer Clock Control Register */
typedef struct
{
    unsigned int reserved_0: 8;
    unsigned int TPSC: 4;                   /** \brief [11:8] Timer Prescaler (rw) */
    unsigned int reserved_12: 6;
    unsigned int TXTRIG: 3;                 /** \brief [20:18] Transmit Trigger Event (rw) */
    unsigned int reserved_21: 11;
} Ifx_CAN_N_TCCR_Bits;

/** Node Timer Receive Timeout Register */
typedef struct
{
    unsigned int RELOAD: 16;                /** \brief [15:0] Reload Value (rw) */
    unsigned int reserved_16: 6;
    unsigned int TEIE: 1;                   /** \brief [22:22] Timer Event Interrupt Enable (rw) */
    unsigned int TE: 1;                     /** \brief [23:23] Timer Event (rwh) */
    unsigned int reserved_24: 8;
} Ifx_CAN_N_TRTR_Bits;

/** Node Timer Transmit Trigger Register */
typedef struct
{
    unsigned int RELOAD: 16;                /** \brief [15:0] Reload Value (rw) */
    unsigned int TXMO: 8;                   /** \brief [23:16] Transmit Message Object (rw) */
    unsigned int STRT: 1;                   /** \brief [24:24] Timer Start (rw) */
    unsigned int reserved_25: 7;
} Ifx_CAN_N_TTTR_Bits;

/** OCDS Control and Status */
typedef struct
{
    unsigned int TGS: 2;                    /** \brief [1:0] Trigger Set for OTGB0/1 (rw) */
    unsigned int TGB: 1;                    /** \brief [2:2] OTGB0/1 Bus Select (rw) */
    unsigned int TG_P: 1;                   /** \brief [3:3] TGS, TGB Write Protection (w) */
    unsigned int reserved_4: 20;
    unsigned int SUS: 4;                    /** \brief [27:24] OCDS Suspend Control (rw) */
    unsigned int SUS_P: 1;                  /** \brief [28:28] SUS Write Protection (w) */
    unsigned int SUSSTA: 1;                 /** \brief [29:29] Suspend State (rh) */
    unsigned int reserved_30: 2;
} Ifx_CAN_OCS_Bits;

/** Panel Control Register */
typedef struct
{
    unsigned int PANCMD: 8;                 /** \brief [7:0] Panel Command (rwh) */
    unsigned int BUSY: 1;                   /** \brief [8:8] Panel Busy Flag (rh) */
    unsigned int RBUSY: 1;                  /** \brief [9:9] Result Busy Flag (rh) */
    unsigned int reserved_10: 6;
    unsigned int PANAR1: 8;                 /** \brief [23:16] Panel Argument 1 (rwh) */
    unsigned int PANAR2: 8;                 /** \brief [31:24] Panel Argument 2 (rwh) */
} Ifx_CAN_PANCTR_Bits;

/** Reference Mark Register */
typedef struct
{
    unsigned int reserved_0: 9;
    unsigned int REFMFR: 7;                 /** \brief [15:9] Reference Mark Fraction (rh) */
    unsigned int REFM: 16;                  /** \brief [31:16] Reference Mark (rh) */
} Ifx_CAN_REFMR_Bits;

/** Scheduler Instruction Status Register */
typedef struct
{
    unsigned int INP: 4;                    /** \brief [3:0] Interrupt Node Pointer (rh) */
    unsigned int IENTRAF0: 1;               /** \brief [4:4] Interrupt Enable if TRAF=0 (rh) */
    unsigned int IENTRAF1: 1;               /** \brief [5:5] Interrupt Enable if TRAF=1 (rh) */
    unsigned int IENRECF0: 1;               /** \brief [6:6] Interrupt Enable if RECF=0 (rh) */
    unsigned int IENRECF1: 1;               /** \brief [7:7] Interrupt Enable if RECF=1 (rh) */
    unsigned int CHEN: 1;                   /** \brief [8:8] Check Enable (rh) */
    unsigned int TREN: 1;                   /** \brief [9:9] Transmit Enable (rh) */
    unsigned int ALTMSG: 2;                 /** \brief [11:10] Alternative Message (rh) */
    unsigned int ARBM: 2;                   /** \brief [13:12] Arbitration Mode (rh) */
    unsigned int GM: 1;                     /** \brief [14:14] Gap Mode (rh) */
    unsigned int ICF: 1;                    /** \brief [15:15] Instruction Collection Finished (rh) */
    unsigned int RCEV: 1;                   /** \brief [16:16] Receive Control Entry Valid (rh) */
    unsigned int TCEV: 1;                   /** \brief [17:17] Transmit Control Entry Valid (rh) */
    unsigned int ICEV: 1;                   /** \brief [18:18] Interrupt Control Entry Valid (rh) */
    unsigned int ARBV: 1;                   /** \brief [19:19] Arbitration Entry Valid (rh) */
    unsigned int TMEV: 1;                   /** \brief [20:20] Time Mark Entry Valid (rh) */
    unsigned int RMEV: 1;                   /** \brief [21:21] Reference Mark Entry Valid (rh) */
    unsigned int BCEV: 1;                   /** \brief [22:22] Basic Cycle End Entry Valid (rh) */
    unsigned int reserved_23: 9;
} Ifx_CAN_SISR_Bits;

/** Scheduler Start Pointer Node 0 Register */
typedef struct
{
    unsigned int STPTR: 7;                  /** \brief [6:0] Start Pointer (rh) */
    unsigned int reserved_7: 25;
} Ifx_CAN_STPTR0_Bits;

/** Scheduler Timing Status Register High */
typedef struct
{
    unsigned int TMETMV: 16;                /** \brief [15:0] Time Mark Value from TME (rh) */
    unsigned int RCEMSGNR: 8;               /** \brief [23:16] Receive Control Entry Message Number (rh) */
    unsigned int TCEMSGNR: 8;               /** \brief [31:24] Transmit Control Entry Message Number (rh) */
} Ifx_CAN_STSRH_Bits;

/** Scheduler Timing Status Register Low */
typedef struct
{
    unsigned int RMETMV: 16;                /** \brief [15:0] Time Mark Value from RME (rh) */
    unsigned int BCETMV: 16;                /** \brief [31:16] Time Mark Value from BCE (rh) */
} Ifx_CAN_STSRL_Bits;

/** Synchronization Mark Register */
typedef struct
{
    unsigned int reserved_0: 9;
    unsigned int SYNMFR: 7;                 /** \brief [15:9] Synchronization Mark Fraction (rh) */
    unsigned int SYNM: 16;                  /** \brief [31:16] Synchronization Mark (rh) */
} Ifx_CAN_SYNMR_Bits;

/** Time Trigger Configuration Register */
typedef struct
{
    unsigned int IRO: 7;                    /** \brief [6:0] Initial Reference Offset (rw) */
    unsigned int reserved_7: 1;
    unsigned int EXPTT: 8;                  /** \brief [15:8] Expected Transmit Triggers (rw) */
    unsigned int RTO: 8;                    /** \brief [23:16] Reference Trigger Offset (rh) */
    unsigned int TTCNT: 8;                  /** \brief [31:24] Transmit Trigger Counter (rh) */
} Ifx_CAN_TTCFGR_Bits;

/** Time Trigger Control Register */
typedef struct
{
    unsigned int TTM: 2;                    /** \brief [1:0] Time Trigger Mode (rw) */
    unsigned int ETESEL: 2;                 /** \brief [3:2] External Trigger Event Selection (rw) */
    unsigned int ETSSEL: 3;                 /** \brief [6:4] External Trigger Source Selection (rw) */
    unsigned int ETM: 1;                    /** \brief [7:7] External Trigger Mode (rw) */
    unsigned int TTLVL: 1;                  /** \brief [8:8] Time Trigger Level (rw) */
    unsigned int LTCTSS: 3;                 /** \brief [11:9] Local Time Capture Trigger Source Select (rw) */
    unsigned int TMPRIO: 3;                 /** \brief [14:12] Time Master Priority (rw) */
    unsigned int ETSSEX: 1;                 /** \brief [15:15] External Trigger Source Select Extension (rw) */
    unsigned int CYCLE: 6;                  /** \brief [21:16] Basic Cycle Number (rw) */
    unsigned int reserved_22: 2;
    unsigned int TENW: 4;                   /** \brief [27:24] Transmit Enable Window (rw) */
    unsigned int RMDLC: 4;                  /** \brief [31:28] Reference Message DLC (rw) */
} Ifx_CAN_TTCR_Bits;

/** Time Trigger Flag Modification Register */
typedef struct
{
    unsigned int CFGMEL: 2;                 /** \brief [1:0] Configuration Mode Enter/Leave (w) */
    unsigned int NIGSR: 2;                  /** \brief [3:2] Next Is Gap Flag Set/Reset (w) */
    unsigned int STE: 1;                    /** \brief [4:4] Software Trigger Event (w) */
    unsigned int ETREVR: 1;                 /** \brief [5:5] Reset External Trigger Event (w) */
    unsigned int reserved_6: 26;
} Ifx_CAN_TTFMR_Bits;

/** Time Trigger Interrupt Enable Register */
typedef struct
{
    unsigned int NBCIE: 2;                  /** \brief [1:0] New Basic Cycle Interrupt Enable (rw) */
    unsigned int TENWERIE: 1;               /** \brief [2:2] Transmit Enable Window Error Interrupt Enable (rw) */
    unsigned int TTERIE: 1;                 /** \brief [3:3] Transmit Trigger Error Interrupt Enable (rw) */
    unsigned int reserved_4: 2;
    unsigned int WTEIE: 1;                  /** \brief [6:6] Watch Trigger Event Interrupt Enable (rw) */
    unsigned int AWDIE: 1;                  /** \brief [7:7] Application Watchdog Interrupt Enable (rw) */
    unsigned int ERRSCIE: 1;                /** \brief [8:8] Error State Change Interrupt Enable (rw) */
    unsigned int MSRCIE: 1;                 /** \brief [9:9] Master Slave Relation Change Interrupt Enable (rw) */
    unsigned int SYNCSCIE: 1;               /** \brief [10:10] Synchronization State Change Interrupt Enable (rw) */
    unsigned int SEIE: 1;                   /** \brief [11:11] Scheduler Error Interrupt Enable (rw) */
    unsigned int NOTIFIE: 1;                /** \brief [12:12] Notification Interrupt Enable (rw) */
    unsigned int reserved_13: 19;
} Ifx_CAN_TTIER_Bits;

/** Time Trigger Interrupt Node Pointer Register */
typedef struct
{
    unsigned int ERRINP: 4;                 /** \brief [3:0] Error Interrupt Node Pointer (rw) */
    unsigned int NBCINP: 4;                 /** \brief [7:4] New Basic Cycle Interrupt Node Pointer (rw) */
    unsigned int NOTIFINP: 4;               /** \brief [11:8] Notification Interrupt Node Pointer (rw) */
    unsigned int reserved_12: 20;
} Ifx_CAN_TTINPR_Bits;

/** Time Trigger Interrupt Request Register */
typedef struct
{
    unsigned int NMC: 1;                    /** \brief [0:0] New Matrix Cycle (rwh) */
    unsigned int NBC: 1;                    /** \brief [1:1] New Basic Cycle (rwh) */
    unsigned int TENWER: 1;                 /** \brief [2:2] Transmit Enable Window Error (rwh) */
    unsigned int TTUF: 1;                   /** \brief [3:3] Transmit Trigger Underflow (rwh) */
    unsigned int TTOF: 1;                   /** \brief [4:4] Transmit Trigger Overflow (rwh) */
    unsigned int WTE: 1;                    /** \brief [5:5] Watch Trigger EventThe WTE can be generated only after the first message has been transferred on the bus. (rwh) */
    unsigned int IWTE: 1;                   /** \brief [6:6] Init Watch Trigger EventThe IWTE can be generated only until the first message has been transferred on the bus. (rwh) */
    unsigned int AWDERR: 1;                 /** \brief [7:7] Application Watchdog Error (rwh) */
    unsigned int ERRSC: 1;                  /** \brief [8:8] Error State Change (rwh) */
    unsigned int MSRC: 1;                   /** \brief [9:9] Master-Slave Relation Change (rwh) */
    unsigned int SYNCSC: 1;                 /** \brief [10:10] Synchronization State Change (rwh) */
    unsigned int EOS: 1;                    /** \brief [11:11] End Of Scheduler Entry Flag (rwh) */
    unsigned int WFE: 1;                    /** \brief [12:12] Wait For Event Flag (rwh) */
    unsigned int DISC: 1;                   /** \brief [13:13] Discontinuity Flag (rwh) */
    unsigned int SERR1: 1;                  /** \brief [14:14] Scheduler Error 1 Flag (rwh) */
    unsigned int SERR2: 1;                  /** \brief [15:15] Scheduler Error 2 Flag (rwh) */
    unsigned int CFGERR: 1;                 /** \brief [16:16] Configuration Error (rwh) */
    unsigned int TURERR: 1;                 /** \brief [17:17] TUR Adjust Error (rwh) */
    unsigned int reserved_18: 14;
} Ifx_CAN_TTIRR_Bits;

/** Time Trigger Status Register */
typedef struct
{
    unsigned int ERRS: 2;                   /** \brief [1:0] Error State (rh) */
    unsigned int MSR: 2;                    /** \brief [3:2] Master-Slave Relation (rh) */
    unsigned int SYNCS: 2;                  /** \brief [5:4] Synchronization State (rh) */
    unsigned int reserved_6: 2;
    unsigned int EFI: 1;                    /** \brief [8:8] Error Frame Indication (rh) */
    unsigned int EFF: 1;                    /** \brief [9:9] Error Frame Flag (rh) */
    unsigned int REFTRG: 1;                 /** \brief [10:10] Reference Trigger Flag (rh) */
    unsigned int ARB: 1;                    /** \brief [11:11] Arbitration Window Flag (rh) */
    unsigned int CFGM: 1;                   /** \brief [12:12] Configuration Mode Flag (rh) */
    unsigned int TMPC: 1;                   /** \brief [13:13] Time Master Priority Conflict (rh) */
    unsigned int TRAF: 1;                   /** \brief [14:14] Transmission Finished Flag (rh) */
    unsigned int RECF: 1;                   /** \brief [15:15] Reception Finished Flag (rh) */
    unsigned int MSCMIN: 3;                 /** \brief [18:16] Minimum of MSC Bit Fields (rh) */
    unsigned int reserved_19: 1;
    unsigned int MSCMAX: 3;                 /** \brief [22:20] Maximum of MSC Bit Fields (rh) */
    unsigned int reserved_23: 1;
    unsigned int NIG: 1;                    /** \brief [24:24] Next Is Gap (rh) */
    unsigned int ETR: 1;                    /** \brief [25:25] External Trigger Request (rh) */
    unsigned int ETREV: 1;                  /** \brief [26:26] External Trigger Event (rh) */
    unsigned int reserved_27: 5;
} Ifx_CAN_TTSR_Bits;

/** Time Unit Ratio Register */
typedef struct
{
    unsigned int ADJEN: 1;                  /** \brief [0:0] Adjust Enable (rwh) */
    unsigned int reserved_1: 5;
    unsigned int TURADJ: 10;                /** \brief [15:6] Time Unit Ratio Adjust (rwh) */
    unsigned int VAL: 1;                    /** \brief [16:16] Valid (rh) */
    unsigned int LTCS: 1;                   /** \brief [17:17] Local Time Clock Source (rw) */
    unsigned int LTDIV: 3;                  /** \brief [20:18] Local Time Divider (rw) */
    unsigned int reserved_21: 1;
    unsigned int TUR: 10;                   /** \brief [31:22] TUR (rh) */
} Ifx_CAN_TURR_Bits;

/******************************************************************************/
/*                           Union (1 - Registers)                            */
/******************************************************************************/

/** Access Enable Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_ACCEN0_Bits B;
} Ifx_CAN_ACCEN0;

/** Access Enable Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_ACCEN1_Bits B;
} Ifx_CAN_ACCEN1;

/** Application Watchdog Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_AWDR_Bits B;
} Ifx_CAN_AWDR;

/** CAN Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_CLC_Bits B;
} Ifx_CAN_CLC;

/** Cycle Time Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_CYCTMR_Bits B;
} Ifx_CAN_CYCTMR;

/** CAN Fractional Divider Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_FDR_Bits B;
} Ifx_CAN_FDR;

/** Global Mark Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_GMR_Bits B;
} Ifx_CAN_GMR;

/** Module Identification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_ID_Bits B;
} Ifx_CAN_ID;

/** Kernel Reset Register 0 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_KRST0_Bits B;
} Ifx_CAN_KRST0;

/** Kernel Reset Register 1 */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_KRST1_Bits B;
} Ifx_CAN_KRST1;

/** Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_KRSTCLR_Bits B;
} Ifx_CAN_KRSTCLR;

/** Last Global Mark Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_LGMR_Bits B;
} Ifx_CAN_LGMR;

/** List Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_LIST_Bits B;
} Ifx_CAN_LIST;

/** Local Offset Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_LOR_Bits B;
} Ifx_CAN_LOR;

/** Last Reference Mark Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_LREFMR_Bits B;
} Ifx_CAN_LREFMR;

/** Local Time Capture Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_LTCR_Bits B;
} Ifx_CAN_LTCR;

/** Local Time Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_LTR_Bits B;
} Ifx_CAN_LTR;

/** Module Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MCR_Bits B;
} Ifx_CAN_MCR;

/** Module Interrupt Trigger Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MITR_Bits B;
} Ifx_CAN_MITR;

/** Message Object  Acceptance Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MO_AMR_Bits B;
} Ifx_CAN_MO_AMR;

/** Message Object  Arbitration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MO_AR_Bits B;
} Ifx_CAN_MO_AR;

/** Message Object  Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MO_CTR_Bits B;
} Ifx_CAN_MO_CTR;

/** Message Object  Data Register High */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MO_DATAH_Bits B;
} Ifx_CAN_MO_DATAH;

/** Message Object  Data Register Low */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MO_DATAL_Bits B;
} Ifx_CAN_MO_DATAL;

/** Message Object  Function Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MO_FCR_Bits B;
} Ifx_CAN_MO_FCR;

/** Message Object  FIFO/Gateway Pointer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MO_FGPR_Bits B;
} Ifx_CAN_MO_FGPR;

/** Message Object  Interrupt Pointer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MO_IPR_Bits B;
} Ifx_CAN_MO_IPR;

/** Message Index Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MSID_Bits B;
} Ifx_CAN_MSID;

/** Message Index Mask Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MSIMASK_Bits B;
} Ifx_CAN_MSIMASK;

/** Message Pending Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_MSPND_Bits B;
} Ifx_CAN_MSPND;

/** Node Bit Timing Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_BTR_Bits B;
} Ifx_CAN_N_BTR;

/** Node Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_CR_Bits B;
} Ifx_CAN_N_CR;

/** Node Error Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_ECNT_Bits B;
} Ifx_CAN_N_ECNT;

/** Node Frame Counter Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_FCR_Bits B;
} Ifx_CAN_N_FCR;

/** Node Interrupt Pointer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_IPR_Bits B;
} Ifx_CAN_N_IPR;

/** Node Port Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_PCR_Bits B;
} Ifx_CAN_N_PCR;

/** Node Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_SR_Bits B;
} Ifx_CAN_N_SR;

/** Node Timer Clock Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_TCCR_Bits B;
} Ifx_CAN_N_TCCR;

/** Node Timer Receive Timeout Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_TRTR_Bits B;
} Ifx_CAN_N_TRTR;

/** Node Timer Transmit Trigger Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_N_TTTR_Bits B;
} Ifx_CAN_N_TTTR;

/** OCDS Control and Status */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_OCS_Bits B;
} Ifx_CAN_OCS;

/** Panel Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_PANCTR_Bits B;
} Ifx_CAN_PANCTR;

/** Reference Mark Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_REFMR_Bits B;
} Ifx_CAN_REFMR;

/** Scheduler Instruction Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_SISR_Bits B;
} Ifx_CAN_SISR;

/** Scheduler Start Pointer Node 0 Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_STPTR0_Bits B;
} Ifx_CAN_STPTR0;

/** Scheduler Timing Status Register High */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_STSRH_Bits B;
} Ifx_CAN_STSRH;

/** Scheduler Timing Status Register Low */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_STSRL_Bits B;
} Ifx_CAN_STSRL;

/** Synchronization Mark Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_SYNMR_Bits B;
} Ifx_CAN_SYNMR;

/** Time Trigger Configuration Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_TTCFGR_Bits B;
} Ifx_CAN_TTCFGR;

/** Time Trigger Control Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_TTCR_Bits B;
} Ifx_CAN_TTCR;

/** Time Trigger Flag Modification Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_TTFMR_Bits B;
} Ifx_CAN_TTFMR;

/** Time Trigger Interrupt Enable Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_TTIER_Bits B;
} Ifx_CAN_TTIER;

/** Time Trigger Interrupt Node Pointer Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_TTINPR_Bits B;
} Ifx_CAN_TTINPR;

/** Time Trigger Interrupt Request Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_TTIRR_Bits B;
} Ifx_CAN_TTIRR;

/** Time Trigger Status Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_TTSR_Bits B;
} Ifx_CAN_TTSR;

/** Time Unit Ratio Register */
typedef union
{
    unsigned int U;
    signed int I;
    Ifx_CAN_TURR_Bits B;
} Ifx_CAN_TURR;

/******************************************************************************/
/*                           Struct (3 - Object L1)                           */
/******************************************************************************/

/** Message object */
typedef volatile struct
{
    Ifx_CAN_MO_FCR FCR;                     /** \brief 0, Message Object  Function Control Register */
    Ifx_CAN_MO_FGPR FGPR;                   /** \brief 4, Message Object  FIFO/Gateway Pointer Register */
    Ifx_CAN_MO_IPR IPR;                     /** \brief 8, Message Object  Interrupt Pointer Register */
    Ifx_CAN_MO_AMR AMR;                     /** \brief C, Message Object  Acceptance Mask Register */
    Ifx_CAN_MO_DATAL DATAL;                 /** \brief 10, Message Object  Data Register Low */
    Ifx_CAN_MO_DATAH DATAH;                 /** \brief 14, Message Object  Data Register High */
    Ifx_CAN_MO_AR AR;                       /** \brief 18, Message Object  Arbitration Register */
    Ifx_CAN_MO_CTR CTR;                     /** \brief 1C, Message Object  Control Register */
} Ifx_CAN_MO;

/** Node object */
typedef volatile struct
{
    Ifx_CAN_N_CR CR;                        /** \brief 0, Node Control Register */
    Ifx_CAN_N_SR SR;                        /** \brief 4, Node Status Register */
    Ifx_CAN_N_IPR IPR;                      /** \brief 8, Node Interrupt Pointer Register */
    Ifx_CAN_N_PCR PCR;                      /** \brief C, Node Port Control Register */
    Ifx_CAN_N_BTR BTR;                      /** \brief 10, Node Bit Timing Register */
    Ifx_CAN_N_ECNT ECNT;                    /** \brief 14, Node Error Counter Register */
    Ifx_CAN_N_FCR FCR;                      /** \brief 18, Node Frame Counter Register */
    Ifx_CAN_N_TCCR TCCR;                    /** \brief 1C, Node Timer Clock Control Register */
    Ifx_CAN_N_TRTR TRTR;                    /** \brief 20, Node Timer Receive Timeout Register */
    Ifx_CAN_N_TTTR TATTR;                   /** \brief 24, Node Timer A Transmit Trigger Register */
    Ifx_CAN_N_TTTR TBTTR;                   /** \brief 28, Node Timer B Transmit Trigger Register */
    Ifx_CAN_N_TTTR TCTTR;                   /** \brief 2C, Node Timer C Transmit Trigger Register */
} Ifx_CAN_N;

/******************************************************************************/
/*                           Struct (4 - Object L0)                           */
/******************************************************************************/

/** CAN object */
typedef volatile struct
{
    Ifx_CAN_CLC CLC;                        /** \brief 0, CAN Clock Control Register */
    unsigned char reserved_4[4];            /** \brief 4 */
    Ifx_CAN_ID ID;                          /** \brief 8, Module Identification Register */
    Ifx_CAN_FDR FDR;                        /** \brief C, CAN Fractional Divider Register */
    unsigned char reserved_10[216];         /** \brief 10 */
    Ifx_CAN_OCS OCS;                        /** \brief E8, OCDS Control and Status */
    Ifx_CAN_KRSTCLR KRSTCLR;                /** \brief EC, Kernel Reset Status Clear Register */
    Ifx_CAN_KRST1 KRST1;                    /** \brief F0, Kernel Reset Register 1 */
    Ifx_CAN_KRST0 KRST0;                    /** \brief F4, Kernel Reset Register 0 */
    Ifx_CAN_ACCEN1 ACCEN1;                  /** \brief F8, Access Enable Register 1 */
    Ifx_CAN_ACCEN0 ACCEN0;                  /** \brief FC, Access Enable Register 0 */
    Ifx_CAN_LIST LIST[16];                  /** \brief 100, List Register */
    Ifx_CAN_MSPND MSPND[8];                 /** \brief 140, Message Pending Register */
    unsigned char reserved_160[32];         /** \brief 160 */
    Ifx_CAN_MSID MSID[8];                   /** \brief 180, Message Index Register */
    unsigned char reserved_1A0[32];         /** \brief 1A0 */
    Ifx_CAN_MSIMASK MSIMASK;                /** \brief 1C0, Message Index Mask Register */
    Ifx_CAN_PANCTR PANCTR;                  /** \brief 1C4, Panel Control Register */
    Ifx_CAN_MCR MCR;                        /** \brief 1C8, Module Control Register */
    Ifx_CAN_MITR MITR;                      /** \brief 1CC, Module Interrupt Trigger Register */
    unsigned char reserved_1D0[48];         /** \brief 1D0 */
    Ifx_CAN_N N0;                           /** \brief 200, Node object */
    unsigned char reserved_230[80];         /** \brief 230 */
    Ifx_CAN_LTR LTR;                        /** \brief 280, Local Time Register */
    Ifx_CAN_SYNMR SYNMR;                    /** \brief 284, Synchronization Mark Register */
    Ifx_CAN_REFMR REFMR;                    /** \brief 288, Reference Mark Register */
    Ifx_CAN_LREFMR LREFMR;                  /** \brief 28C, Last Reference Mark Register */
    Ifx_CAN_TURR TURR;                      /** \brief 290, Time Unit Ratio Register */
    Ifx_CAN_CYCTMR CYCTMR;                  /** \brief 294, Cycle Time Register */
    Ifx_CAN_LOR LOR;                        /** \brief 298, Local Offset Register */
    Ifx_CAN_GMR GMR;                        /** \brief 29C, Global Mark Register */
    Ifx_CAN_LGMR LGMR;                      /** \brief 2A0, Last Global Mark Register */
    Ifx_CAN_AWDR AWDR;                      /** \brief 2A4, Application Watchdog Register */
    Ifx_CAN_LTCR LTCR;                      /** \brief 2A8, Local Time Capture Register */
    unsigned char reserved_2AC[20];         /** \brief 2AC */
    Ifx_CAN_TTCR TTCR;                      /** \brief 2C0, Time Trigger Control Register */
    Ifx_CAN_TTCFGR TTCFGR;                  /** \brief 2C4, Time Trigger Configuration Register */
    Ifx_CAN_TTSR TTSR;                      /** \brief 2C8, Time Trigger Status Register */
    Ifx_CAN_TTFMR TTFMR;                    /** \brief 2CC, Time Trigger Flag Modification Register */
    Ifx_CAN_TTIRR TTIRR;                    /** \brief 2D0, Time Trigger Interrupt Request Register */
    Ifx_CAN_TTIER TTIER;                    /** \brief 2D4, Time Trigger Interrupt Enable Register */
    Ifx_CAN_TTINPR TTINPR;                  /** \brief 2D8, Time Trigger Interrupt Node Pointer Register */
    unsigned char reserved_2DC[20];         /** \brief 2DC */
    Ifx_CAN_STSRL STSRL;                    /** \brief 2F0, Scheduler Timing Status Register Low */
    Ifx_CAN_STSRH STSRH;                    /** \brief 2F4, Scheduler Timing Status Register High */
    Ifx_CAN_SISR SISR;                      /** \brief 2F8, Scheduler Instruction Status Register */
    unsigned char reserved_2FC[4];          /** \brief 2FC */
    Ifx_CAN_N N1;                           /** \brief 300, Node object */
    unsigned char reserved_330[208];        /** \brief 330 */
    Ifx_CAN_N N2;                           /** \brief 400, Node object */
    unsigned char reserved_430[208];        /** \brief 430 */
    Ifx_CAN_N N3;                           /** \brief 500, Node object */
    unsigned char reserved_530[208];        /** \brief 530 */
    Ifx_CAN_N N4;                           /** \brief 600, Node object */
    unsigned char reserved_630[208];        /** \brief 630 */
    Ifx_CAN_N N5;                           /** \brief 700, Node object */
    unsigned char reserved_730[208];        /** \brief 730 */
    Ifx_CAN_N N6;                           /** \brief 800, Node object */
    unsigned char reserved_830[208];        /** \brief 830 */
    Ifx_CAN_N N7;                           /** \brief 900, Node object */
    unsigned char reserved_930[1744];       /** \brief 930 */
    Ifx_CAN_MO MO[256];                     /** \brief 1000, Message objects */
    unsigned char reserved_3000[4092];      /** \brief 3000 */
    Ifx_CAN_STPTR0 STPTR0;                  /** \brief 3FFC, Scheduler Start Pointer Node 0 Register */
} Ifx_CAN;
/******************************************************************************/
#endif /* IFXCAN_REGDEF_H */
