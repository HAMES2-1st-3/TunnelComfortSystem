/**
 * \file IfxCcu6_regdef.h
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
 * \defgroup IfxSfr_Ccu6_Registers Ccu6 Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Ccu6_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Ccu6_Registers
 * 
 * \defgroup IfxSfr_Ccu6_Registers_union Register unions
 * \ingroup IfxSfr_Ccu6_Registers
 * 
 * \defgroup IfxSfr_Ccu6_Registers_struct Memory map
 * \ingroup IfxSfr_Ccu6_Registers
 */
#ifndef IFXCCU6_REGDEF_H
#define IFXCCU6_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Ccu6_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_CCU6_ACCEN0_Bits
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
} Ifx_CCU6_ACCEN0_Bits;

/** \brief Compare Register for T13 */
typedef struct _Ifx_CCU6_CC63R_Bits
{
    Ifx_UReg_32Bit CCV:16;            /**< \brief [15:0] Channel CC63 Compare Value - CCV (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_CC63R_Bits;

/** \brief Compare Shadow Register for T13 */
typedef struct _Ifx_CCU6_CC63SR_Bits
{
    Ifx_UReg_32Bit CCS:16;            /**< \brief [15:0] Shadow Register for Channel CC63 Compare Value - CCS (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_CC63SR_Bits;

/** \brief Capture/Compare Register for Channel CC6${x} */
typedef struct _Ifx_CCU6_CC6R_Bits
{
    Ifx_UReg_32Bit CCV:16;            /**< \brief [15:0] Capture/Compare Value - CCV (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_CC6R_Bits;

/** \brief Capture/Compare Shadow Reg. for Channel CC6${x} */
typedef struct _Ifx_CCU6_CC6SR_Bits
{
    Ifx_UReg_32Bit CCS:16;            /**< \brief [15:0] Shadow Register for Channel x Capture/Compare Value - CCS (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_CC6SR_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_CCU6_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:12;     /**< \brief [15:4] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_CLC_Bits;

/** \brief Compare State Modification Register */
typedef struct _Ifx_CCU6_CMPMODIF_Bits
{
    Ifx_UReg_32Bit MCC60S:1;          /**< \brief [0:0] Capture/Compare Status Modification Bits MCC60S (x = 0, 1, 2) - MCC60S (w) */
    Ifx_UReg_32Bit MCC61S:1;          /**< \brief [1:1] Capture/Compare Status Modification Bits MCC61S (x = 0, 1, 2) - MCC61S (w) */
    Ifx_UReg_32Bit MCC62S:1;          /**< \brief [2:2] Capture/Compare Status Modification Bits MCC62S (x = 0, 1, 2) - MCC62S (w) */
    Ifx_UReg_32Bit reserved_3:3;      /**< \brief [5:3] \internal Reserved */
    Ifx_UReg_32Bit MCC63S:1;          /**< \brief [6:6] Capture/Compare Status Modification Bit MCC63S - MCC63S (w) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit MCC60R:1;          /**< \brief [8:8] Capture/Compare Status Modification Bits MCC60R (x = 0, 1, 2) - MCC60R (w) */
    Ifx_UReg_32Bit MCC61R:1;          /**< \brief [9:9] Capture/Compare Status Modification Bits MCC61R (x = 0, 1, 2) - MCC61R (w) */
    Ifx_UReg_32Bit MCC62R:1;          /**< \brief [10:10] Capture/Compare Status Modification Bits MCC62R (x = 0, 1, 2) - MCC62R (w) */
    Ifx_UReg_32Bit reserved_11:3;     /**< \brief [13:11] \internal Reserved */
    Ifx_UReg_32Bit MCC63R:1;          /**< \brief [14:14] Capture/Compare Status Modification Bits MCC63R - MCC63R (w) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_CCU6_CMPMODIF_Bits;

/** \brief Compare State Register */
typedef struct _Ifx_CCU6_CMPSTAT_Bits
{
    Ifx_UReg_32Bit CC60ST:1;          /**< \brief [0:0] Capture/Compare State Bits for CC60 (x = 0, 1, 2) - CC60ST (rh) */
    Ifx_UReg_32Bit CC61ST:1;          /**< \brief [1:1] Capture/Compare State Bits for CC61 (x = 0, 1, 2) - CC61ST (rh) */
    Ifx_UReg_32Bit CC62ST:1;          /**< \brief [2:2] Capture/Compare State Bits for CC62 (x = 0, 1, 2) - CC62ST (rh) */
    Ifx_UReg_32Bit CCPOS60:1;         /**< \brief [3:3] Sampled Hall Pattern Bits - CCPOS60 (rh) */
    Ifx_UReg_32Bit CCPOS61:1;         /**< \brief [4:4] Sampled Hall Pattern Bits - CCPOS61 (rh) */
    Ifx_UReg_32Bit CCPOS62:1;         /**< \brief [5:5] Sampled Hall Pattern Bits - CCPOS62 (rh) */
    Ifx_UReg_32Bit CC63ST:1;          /**< \brief [6:6] Capture/Compare State Bit for CC63 - CC63ST (rh) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit CC60PS:1;          /**< \brief [8:8] Passive State Select for Compare Outputs CC60 (x = 0, 1, 2) - CC60PS (rwh) */
    Ifx_UReg_32Bit COUT60PS:1;        /**< \brief [9:9] Passive State Select for Compare Outputs COUT60 (x = 0, 1, 2) - COUT60PS (rwh) */
    Ifx_UReg_32Bit CC61PS:1;          /**< \brief [10:10] Passive State Select for Compare Outputs CC61 (x = 0, 1, 2) - CC61PS (rwh) */
    Ifx_UReg_32Bit COUT61PS:1;        /**< \brief [11:11] Passive State Select for Compare Outputs COUT61 (x = 0, 1, 2) - COUT61PS (rwh) */
    Ifx_UReg_32Bit CC62PS:1;          /**< \brief [12:12] Passive State Select for Compare Outputs CC62 (x = 0, 1, 2) - CC62PS (rwh) */
    Ifx_UReg_32Bit COUT62PS:1;        /**< \brief [13:13] Passive State Select for Compare Outputs COUT62 (x = 0, 1, 2) - COUT62PS (rwh) */
    Ifx_UReg_32Bit COUT63PS:1;        /**< \brief [14:14] Passive State Select for Compare Output COUT63 - COUT63PS (rwh) */
    Ifx_UReg_32Bit T13IM:1;           /**< \brief [15:15] T13 Inverted Modulation - T13IM (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_CMPSTAT_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_CCU6_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODNUM:8;          /**< \brief [15:8] Module Number Value - MODNUM (r) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_ID_Bits;

/** \brief Interrupt Enable Register */
typedef struct _Ifx_CCU6_IEN_Bits
{
    Ifx_UReg_32Bit ENCC60R:1;         /**< \brief [0:0] Capture, Compare-Match Rising Edge Interrupt Enable for Channel CC6x ENCC6xF (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ENCC60F:1;         /**< \brief [1:1] Capture, Compare-Match Falling Edge Interrupt Enable for Channel CC6x ENCC6xF (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ENCC61R:1;         /**< \brief [2:2] Capture, Compare-Match Rising Edge Interrupt Enable for Channel CC6x ENCC6xF (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ENCC61F:1;         /**< \brief [3:3] Capture, Compare-Match Falling Edge Interrupt Enable for Channel CC6x ENCC6xF (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ENCC62R:1;         /**< \brief [4:4] Capture, Compare-Match Rising Edge Interrupt Enable for Channel CC6x ENCC6xF (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ENCC62F:1;         /**< \brief [5:5] Capture, Compare-Match Falling Edge Interrupt Enable for Channel CC6x ENCC6xF (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ENT12OM:1;         /**< \brief [6:6] Enable Interrupt for T12 One-Match - ENT12OM (rw) */
    Ifx_UReg_32Bit ENT12PM:1;         /**< \brief [7:7] Enable Interrupt for T12 Period-Match - ENT12PM (rw) */
    Ifx_UReg_32Bit ENT13CM:1;         /**< \brief [8:8] Enable Interrupt for T13 Compare-Match - ENT13CM (rw) */
    Ifx_UReg_32Bit ENT13PM:1;         /**< \brief [9:9] Enable Interrupt for T13 Period-Match - ENT13PM (rw) */
    Ifx_UReg_32Bit ENTRPF:1;          /**< \brief [10:10] Enable Interrupt for Trap Flag - ENTRPF (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit ENCHE:1;           /**< \brief [12:12] Enable Interrupt for Correct Hall Event - ENCHE (rw) */
    Ifx_UReg_32Bit ENWHE:1;           /**< \brief [13:13] Enable Interrupt for Wrong Hall Event - ENWHE (rw) */
    Ifx_UReg_32Bit ENIDLE:1;          /**< \brief [14:14] Enable Idle - ENIDLE (rw) */
    Ifx_UReg_32Bit ENSTR:1;           /**< \brief [15:15] Enable Multi-Channel Mode Shadow Transfer Interrupt - ENSTR (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_IEN_Bits;

/** \brief Input Monitoring Register */
typedef struct _Ifx_CCU6_IMON_Bits
{
    Ifx_UReg_32Bit LBE:1;             /**< \brief [0:0] Lost Bit Event - LBE (rwh) */
    Ifx_UReg_32Bit CCPOS0I:1;         /**< \brief [1:1] Event indication for input signal CCPOS0 - CCPOS0I (rwh) */
    Ifx_UReg_32Bit CCPOS1I:1;         /**< \brief [2:2] Event indication for input signal CCPOS1 - CCPOS1I (rwh) */
    Ifx_UReg_32Bit CCPOS2I:1;         /**< \brief [3:3] Event indication for input signal CCPOS2 - CCPOS2I (rwh) */
    Ifx_UReg_32Bit CC60INI:1;         /**< \brief [4:4] Event indication for input signal CC60IN - CC60INI (rwh) */
    Ifx_UReg_32Bit CC61INI:1;         /**< \brief [5:5] Event indication for input signal CC61IN - CC61INI (rwh) */
    Ifx_UReg_32Bit CC62INI:1;         /**< \brief [6:6] Event indication for input signal CC62IN - CC62INI (rwh) */
    Ifx_UReg_32Bit CTRAPI:1;          /**< \brief [7:7] Event indication for input signal CTRAP - CTRAPI (rwh) */
    Ifx_UReg_32Bit T12HRI:1;          /**< \brief [8:8] Event indication for input signal T12HR - T12HRI (rwh) */
    Ifx_UReg_32Bit T13HRI:1;          /**< \brief [9:9] Event indication for input signal T13HR - T13HRI (rwh) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_CCU6_IMON_Bits;

/** \brief Interrupt Node Pointer Register */
typedef struct _Ifx_CCU6_INP_Bits
{
    Ifx_UReg_32Bit INPCC60:2;         /**< \brief [1:0] Interrupt Node Pointer for Channel CC6x Interrupts  INPCC6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit INPCC61:2;         /**< \brief [3:2] Interrupt Node Pointer for Channel CC6x Interrupts  INPCC6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit INPCC62:2;         /**< \brief [5:4] Interrupt Node Pointer for Channel CC6x Interrupts  INPCC6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit INPCHE:2;          /**< \brief [7:6] Interrupt Node Pointer for the CHE Interrupt - INPCHE (rw) */
    Ifx_UReg_32Bit INPERR:2;          /**< \brief [9:8] Interrupt Node Pointer for Error Interrupts - INPERR (rw) */
    Ifx_UReg_32Bit INPT12:2;          /**< \brief [11:10] Interrupt Node Pointer for Timer12 Interrupts - INPT12 (rw) */
    Ifx_UReg_32Bit INPT13:2;          /**< \brief [13:12] Interrupt Node Pointer for Timer13 Interrupt - INPT13 (rw) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_CCU6_INP_Bits;

/** \brief Interrupt Status Register */
typedef struct _Ifx_CCU6_IS_Bits
{
    Ifx_UReg_32Bit ICC60R:1;          /**< \brief [0:0] Capture, Compare-Match Rising Edge Flag ICC6xR (x=0,1,2) (rh) */
    Ifx_UReg_32Bit ICC60F:1;          /**< \brief [1:1] Capture, Compare-Match Falling Edge Flag ICC6xF (x=0,1,2) (rh) */
    Ifx_UReg_32Bit ICC61R:1;          /**< \brief [2:2] Capture, Compare-Match Rising Edge Flag ICC6xR (x=0,1,2) (rh) */
    Ifx_UReg_32Bit ICC61F:1;          /**< \brief [3:3] Capture, Compare-Match Falling Edge Flag ICC6xF (x=0,1,2) (rh) */
    Ifx_UReg_32Bit ICC62R:1;          /**< \brief [4:4] Capture, Compare-Match Rising Edge Flag ICC6xR (x=0,1,2) (rh) */
    Ifx_UReg_32Bit ICC62F:1;          /**< \brief [5:5] Capture, Compare-Match Falling Edge Flag ICC6xF (x=0,1,2) (rh) */
    Ifx_UReg_32Bit T12OM:1;           /**< \brief [6:6] Timer T12 One-Match Flag - T12OM (rh) */
    Ifx_UReg_32Bit T12PM:1;           /**< \brief [7:7] Timer T12 Period-Match Flag - T12PM (rh) */
    Ifx_UReg_32Bit T13CM:1;           /**< \brief [8:8] Timer T13 Compare-Match Flag - T13CM (rh) */
    Ifx_UReg_32Bit T13PM:1;           /**< \brief [9:9] Timer T13 Period-Match Flag - T13PM (rh) */
    Ifx_UReg_32Bit TRPF:1;            /**< \brief [10:10] Trap Flag - TRPF (rh) */
    Ifx_UReg_32Bit TRPS:1;            /**< \brief [11:11] Trap State - TRPS (rh) */
    Ifx_UReg_32Bit CHE:1;             /**< \brief [12:12] Correct Hall Event - CHE (rh) */
    Ifx_UReg_32Bit WHE:1;             /**< \brief [13:13] Wrong Hall Event - WHE (rh) */
    Ifx_UReg_32Bit IDLE:1;            /**< \brief [14:14] IDLE State - IDLE (rh) */
    Ifx_UReg_32Bit STR:1;             /**< \brief [15:15] Multi-Channel Mode Shadow Transfer Request - STR (rh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_IS_Bits;

/** \brief Interrupt Status Reset Register */
typedef struct _Ifx_CCU6_ISR_Bits
{
    Ifx_UReg_32Bit RCC60R:1;          /**< \brief [0:0] Reset Capture, Compare-Match Rising Edge Flag - RCC6xR (x=0,1,2) (w) */
    Ifx_UReg_32Bit RCC60F:1;          /**< \brief [1:1] Reset Capture, Compare-Match Falling Edge Flag - RCC6xF (x=0,1,2) (w) */
    Ifx_UReg_32Bit RCC61R:1;          /**< \brief [2:2] Reset Capture, Compare-Match Rising Edge Flag - RCC6xR (x=0,1,2) (w) */
    Ifx_UReg_32Bit RCC61F:1;          /**< \brief [3:3] Reset Capture, Compare-Match Falling Edge Flag - RCC6xF (x=0,1,2) (w) */
    Ifx_UReg_32Bit RCC62R:1;          /**< \brief [4:4] Reset Capture, Compare-Match Rising Edge Flag - RCC6xR (x=0,1,2) (w) */
    Ifx_UReg_32Bit RCC62F:1;          /**< \brief [5:5] Reset Capture, Compare-Match Falling Edge Flag - RCC6xF (x=0,1,2) (w) */
    Ifx_UReg_32Bit RT12OM:1;          /**< \brief [6:6] Reset Timer T12 One-Match Flag - RT12OM (w) */
    Ifx_UReg_32Bit RT12PM:1;          /**< \brief [7:7] Reset Timer T12 Period-Match Flag - RT12PM (w) */
    Ifx_UReg_32Bit RT13CM:1;          /**< \brief [8:8] Reset Timer T13 Compare-Match Flag - RT13CM (w) */
    Ifx_UReg_32Bit RT13PM:1;          /**< \brief [9:9] Reset Timer T13 Period-Match Flag - RT13PM (w) */
    Ifx_UReg_32Bit RTRPF:1;           /**< \brief [10:10] Reset Trap Flag - RTRPF (w) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit RCHE:1;            /**< \brief [12:12] Reset Correct Hall Event Flag - RCHE (w) */
    Ifx_UReg_32Bit RWHE:1;            /**< \brief [13:13] Reset Wrong Hall Event Flag - RWHE (w) */
    Ifx_UReg_32Bit RIDLE:1;           /**< \brief [14:14] Reset IDLE Flag - RIDLE (w) */
    Ifx_UReg_32Bit RSTR:1;            /**< \brief [15:15] Reset STR Flag - RSTR (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_ISR_Bits;

/** \brief Interrupt Status Set Register */
typedef struct _Ifx_CCU6_ISS_Bits
{
    Ifx_UReg_32Bit SCC60R:1;          /**< \brief [0:0] Set Capture, Compare-Match Rising Edge Flag - SCC6xR (x=0,1,2) (w) */
    Ifx_UReg_32Bit SCC60F:1;          /**< \brief [1:1] Set Capture, Compare-Match Falling Edge Flag - SCC6xF (x=0,1,2) (w) */
    Ifx_UReg_32Bit SCC61R:1;          /**< \brief [2:2] Set Capture, Compare-Match Rising Edge Flag - SCC6xR (x=0,1,2) (w) */
    Ifx_UReg_32Bit SCC61F:1;          /**< \brief [3:3] Set Capture, Compare-Match Falling Edge Flag - SCC6xF (x=0,1,2) (w) */
    Ifx_UReg_32Bit SCC62R:1;          /**< \brief [4:4] Set Capture, Compare-Match Rising Edge Flag - SCC6xR (x=0,1,2) (w) */
    Ifx_UReg_32Bit SCC62F:1;          /**< \brief [5:5] Set Capture, Compare-Match Falling Edge Flag - SCC6xF (x=0,1,2) (w) */
    Ifx_UReg_32Bit ST12OM:1;          /**< \brief [6:6] Set Timer T12 One-Match Flag - ST12OM (w) */
    Ifx_UReg_32Bit ST12PM:1;          /**< \brief [7:7] Set Timer T12 Period-Match Flag - ST12PM (w) */
    Ifx_UReg_32Bit ST13CM:1;          /**< \brief [8:8] Set Timer T13 Compare-Match Flag - ST13CM (w) */
    Ifx_UReg_32Bit ST13PM:1;          /**< \brief [9:9] Set Timer T13 Period-Match Flag - ST13PM (w) */
    Ifx_UReg_32Bit STRPF:1;           /**< \brief [10:10] Set Trap Flag - STRPF (w) */
    Ifx_UReg_32Bit SWHC:1;            /**< \brief [11:11] Software Hall Compare - SWHC (w) */
    Ifx_UReg_32Bit SCHE:1;            /**< \brief [12:12] Set Correct Hall Event Flag - SCHE (w) */
    Ifx_UReg_32Bit SWHE:1;            /**< \brief [13:13] Set Wrong Hall Event Flag - SWHE (w) */
    Ifx_UReg_32Bit SIDLE:1;           /**< \brief [14:14] Set IDLE Flag - SIDLE (w) */
    Ifx_UReg_32Bit SSTR:1;            /**< \brief [15:15] Set STR Flag - SSTR (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_ISS_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_CCU6_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_CCU6_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_CCU6_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CCU6_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_CCU6_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_CCU6_KRSTCLR_Bits;

/** \brief Kernel State Control Sensitivity Register */
typedef struct _Ifx_CCU6_KSCSR_Bits
{
    Ifx_UReg_32Bit SB0:1;             /**< \brief [0:0] Sensitivity Block x  SBx (x=0,1,2,3) (rw) */
    Ifx_UReg_32Bit SB1:1;             /**< \brief [1:1] Sensitivity Block x  SBx (x=0,1,2,3) (rw) */
    Ifx_UReg_32Bit SB2:1;             /**< \brief [2:2] Sensitivity Block x  SBx (x=0,1,2,3) (rw) */
    Ifx_UReg_32Bit SB3:1;             /**< \brief [3:3] Sensitivity Block x  SBx (x=0,1,2,3) (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_CCU6_KSCSR_Bits;

/** \brief Lost Indicator Register */
typedef struct _Ifx_CCU6_LI_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit CCPOS0EN:1;        /**< \brief [1:1] Lost Indicator Enable for input signal CCPOS0 - CCPOS0EN (rw) */
    Ifx_UReg_32Bit CCPOS1EN:1;        /**< \brief [2:2] Lost Indicator Enable for input signal CCPOS1 - CCPOS1EN (rw) */
    Ifx_UReg_32Bit CCPOS2EN:1;        /**< \brief [3:3] Lost Indicator Enable for input signal CCPOS2 - CCPOS2EN (rw) */
    Ifx_UReg_32Bit CC60INEN:1;        /**< \brief [4:4] Lost Indicator Enable for input signal CC60IN - CC60INEN (rw) */
    Ifx_UReg_32Bit CC61INEN:1;        /**< \brief [5:5] Lost Indicator Enable for input signal CC61IN - CC61INEN (rw) */
    Ifx_UReg_32Bit CC62INEN:1;        /**< \brief [6:6] Lost Indicator Enable for input signal CC62IN - CC62INEN (rw) */
    Ifx_UReg_32Bit CTRAPEN:1;         /**< \brief [7:7] Lost Indicator Enable for input signal CTRAP - CTRAPEN (rw) */
    Ifx_UReg_32Bit T12HREN:1;         /**< \brief [8:8] Lost Indicator Enable for input signal T12HR - T12HREN (rw) */
    Ifx_UReg_32Bit T13HREN:1;         /**< \brief [9:9] Lost Indicator Enable for input signal T13HR - T13HREN (rw) */
    Ifx_UReg_32Bit reserved_10:3;     /**< \brief [12:10] \internal Reserved */
    Ifx_UReg_32Bit LBEEN:1;           /**< \brief [13:13] Interrupt Enable for Lost Bit Event - LBEEN (rw) */
    Ifx_UReg_32Bit INPLBE:2;          /**< \brief [15:14] Interrupt Node Pointer for lost bit event - INPLBE (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_LI_Bits;

/** \brief Module Configuration Register */
typedef struct _Ifx_CCU6_MCFG_Bits
{
    Ifx_UReg_32Bit T12:1;             /**< \brief [0:0] T12 Available - T12 (r) */
    Ifx_UReg_32Bit T13:1;             /**< \brief [1:1] T13 Available - T13 (r) */
    Ifx_UReg_32Bit MCM:1;             /**< \brief [2:2] Multi-Channel Mode Available - MCM (r) */
    Ifx_UReg_32Bit reserved_3:12;     /**< \brief [14:3] \internal Reserved */
    Ifx_UReg_32Bit reserved_15:1;     /**< \brief [15:15] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_MCFG_Bits;

/** \brief Multi-Channel Mode Control Register */
typedef struct _Ifx_CCU6_MCMCTR_Bits
{
    Ifx_UReg_32Bit SWSEL:3;           /**< \brief [2:0] Switching Selection - SWSEL (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit SWSYN:2;           /**< \brief [5:4] Switching Synchronization - SWSYN (rw) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit STE12U:1;          /**< \brief [8:8] Shadow Transfer Enable for T12 Upcounting - STE12U (rw) */
    Ifx_UReg_32Bit STE12D:1;          /**< \brief [9:9] Shadow Transfer Enable for T12 Downcounting - STE12D (rw) */
    Ifx_UReg_32Bit STE13U:1;          /**< \brief [10:10] Shadow Transfer Enable for T13 Upcounting - STE13U (rw) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_CCU6_MCMCTR_Bits;

/** \brief Multi-Channel Mode Output Register */
typedef struct _Ifx_CCU6_MCMOUT_Bits
{
    Ifx_UReg_32Bit MCMP:6;            /**< \brief [5:0] Multi-Channel PWM Pattern - MCMP (rh) */
    Ifx_UReg_32Bit R:1;               /**< \brief [6:6] Reminder Flag - R (rh) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit EXPH:3;            /**< \brief [10:8] Expected Hall Pattern - EXPH (rh) */
    Ifx_UReg_32Bit CURH:3;            /**< \brief [13:11] Current Hall Pattern - CURH (rh) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_CCU6_MCMOUT_Bits;

/** \brief Multi-Channel Mode Output Shadow Register */
typedef struct _Ifx_CCU6_MCMOUTS_Bits
{
    Ifx_UReg_32Bit MCMPS:6;           /**< \brief [5:0] Multi-Channel PWM Pattern Shadow - MCMPS (rw) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit STRMCM:1;          /**< \brief [7:7] Shadow Transfer Request for MCMPS - STRMCM (w) */
    Ifx_UReg_32Bit EXPHS:3;           /**< \brief [10:8] Expected Hall Pattern Shadow - EXPHS (rw) */
    Ifx_UReg_32Bit CURHS:3;           /**< \brief [13:11] Current Hall Pattern Shadow - CURHS (rw) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit STRHP:1;           /**< \brief [15:15] Shadow Transfer Request for the Hall Pattern - STRHP (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_MCMOUTS_Bits;

/** \brief Modulation Control Register */
typedef struct _Ifx_CCU6_MODCTR_Bits
{
    Ifx_UReg_32Bit T12MODEN:6;        /**< \brief [5:0] T12 Modulation Enable - T12MODEN (rw) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit MCMEN:1;           /**< \brief [7:7] Multi-Channel Mode Enable - MCMEN (rw) */
    Ifx_UReg_32Bit T13MODEN:6;        /**< \brief [13:8] T13 Modulation Enable - T13MODEN (rw) */
    Ifx_UReg_32Bit reserved_14:1;     /**< \brief [14:14] \internal Reserved */
    Ifx_UReg_32Bit ECT13O:1;          /**< \brief [15:15] Enable Compare Timer T13 Output - ECT13O (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_MODCTR_Bits;

/** \brief CCU60 Module Output Select Register */
typedef struct _Ifx_CCU6_MOSEL_Bits
{
    Ifx_UReg_32Bit TRIG0SEL:3;        /**< \brief [2:0] Output Trigger Select for CCU6061 TRIG0 (rw) */
    Ifx_UReg_32Bit TRIG1SEL:3;        /**< \brief [5:3] Output Trigger Select for CCU6061 TRIG1 (rw) */
    Ifx_UReg_32Bit TRIG2SEL:3;        /**< \brief [8:6] Output Trigger Select for CCU6061 TRIG2 (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_CCU6_MOSEL_Bits;

/** \brief OCDS Control and Status Register */
typedef struct _Ifx_CCU6_OCS_Bits
{
    Ifx_UReg_32Bit TGS:2;             /**< \brief [1:0] Trigger Set for OTGB0/1 - TGS (rw) */
    Ifx_UReg_32Bit TGB:1;             /**< \brief [2:2] OTGB0/1 Bus Select - TGB (rw) */
    Ifx_UReg_32Bit TG_P:1;            /**< \brief [3:3] TGS, TGB Write Protection - TG_P (w) */
    Ifx_UReg_32Bit reserved_4:20;     /**< \brief [23:4] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_CCU6_OCS_Bits;

/** \brief Port Input Select Register 0 */
typedef struct _Ifx_CCU6_PISEL0_Bits
{
    Ifx_UReg_32Bit ISCC60:2;          /**< \brief [1:0] Input Select for CC60 ISCC6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ISCC61:2;          /**< \brief [3:2] Input Select for CC60 ISCC6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ISCC62:2;          /**< \brief [5:4] Input Select for CC60 ISCC6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ISTRP:2;           /**< \brief [7:6] Input Select for CTRAP - ISTRP (rw) */
    Ifx_UReg_32Bit ISPOS0:2;          /**< \brief [9:8] Input Select for CCPOS0 ISPOSx (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ISPOS1:2;          /**< \brief [11:10] Input Select for CCPOS0 ISPOSx (x=0,1,2) (rw) */
    Ifx_UReg_32Bit ISPOS2:2;          /**< \brief [13:12] Input Select for CCPOS0 ISPOSx (x=0,1,2) (rw) */
    Ifx_UReg_32Bit IST12HR:2;         /**< \brief [15:14] Input Select for T12HR - IST12HR (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_PISEL0_Bits;

/** \brief Port Input Select Register 2 */
typedef struct _Ifx_CCU6_PISEL2_Bits
{
    Ifx_UReg_32Bit IST13HR:2;         /**< \brief [1:0] Input Select for T13HR - IST13HR (rw) */
    Ifx_UReg_32Bit ISCNT12:2;         /**< \brief [3:2] Input Select for T12 Counting Input - ISCNT12 (rw) */
    Ifx_UReg_32Bit ISCNT13:2;         /**< \brief [5:4] Input Select for T13 Counting Input - ISCNT13 (rw) */
    Ifx_UReg_32Bit T12EXT:1;          /**< \brief [6:6] Extension for T12HR Inputs - T12EXT (rw) */
    Ifx_UReg_32Bit T13EXT:1;          /**< \brief [7:7] Extension for T13HR Inputs - T13EXT (rw) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CCU6_PISEL2_Bits;

/** \brief Passive State Level Register */
typedef struct _Ifx_CCU6_PSLR_Bits
{
    Ifx_UReg_32Bit PSL:6;             /**< \brief [5:0] Compare Outputs Passive State Level - PSL (rwh) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit PSL63:1;           /**< \brief [7:7] Passive State Level of Output COUT63 - PSL63 (rwh) */
    Ifx_UReg_32Bit reserved_8:24;     /**< \brief [31:8] \internal Reserved */
} Ifx_CCU6_PSLR_Bits;

/** \brief Timer T12 Counter Register */
typedef struct _Ifx_CCU6_T12_Bits
{
    Ifx_UReg_32Bit T12CV:16;          /**< \brief [15:0] Timer 12 Counter Value - T12CV (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_T12_Bits;

/** \brief Dead-Time Control Register for Timer12 */
typedef struct _Ifx_CCU6_T12DTC_Bits
{
    Ifx_UReg_32Bit DTM:8;             /**< \brief [7:0] Dead-Time - DTM (rw) */
    Ifx_UReg_32Bit DTE0:1;            /**< \brief [8:8] Dead Time Enable Bits DTEx (x=0,1,2) (rw) */
    Ifx_UReg_32Bit DTE1:1;            /**< \brief [9:9] Dead Time Enable Bits DTEx (x=0,1,2) (rw) */
    Ifx_UReg_32Bit DTE2:1;            /**< \brief [10:10] Dead Time Enable Bits DTEx (x=0,1,2) (rw) */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit DTR0:1;            /**< \brief [12:12] Dead Time Run Indication Bits DTRx (x=1,2,3) (rh) */
    Ifx_UReg_32Bit DTR1:1;            /**< \brief [13:13] Dead Time Run Indication Bits DTRx (x=1,2,3) (rh) */
    Ifx_UReg_32Bit DTR2:1;            /**< \brief [14:14] Dead Time Run Indication Bits DTRx (x=1,2,3) (rh) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_CCU6_T12DTC_Bits;

/** \brief T12 Mode Select Register */
typedef struct _Ifx_CCU6_T12MSEL_Bits
{
    Ifx_UReg_32Bit MSEL60:4;          /**< \brief [3:0] Capture/Compare Mode Selection MSEL6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit MSEL61:4;          /**< \brief [7:4] Capture/Compare Mode Selection MSEL6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit MSEL62:4;          /**< \brief [11:8] Capture/Compare Mode Selection MSEL6x (x=0,1,2) (rw) */
    Ifx_UReg_32Bit HSYNC:3;           /**< \brief [14:12] Hall Synchronization - HSYNC (rw) */
    Ifx_UReg_32Bit DBYP:1;            /**< \brief [15:15] Delay Bypass - DBYP (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_T12MSEL_Bits;

/** \brief Timer 12 Period Register */
typedef struct _Ifx_CCU6_T12PR_Bits
{
    Ifx_UReg_32Bit T12PV:16;          /**< \brief [15:0] T12 Period Value - T12PV (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_T12PR_Bits;

/** \brief Timer T13 Counter Register */
typedef struct _Ifx_CCU6_T13_Bits
{
    Ifx_UReg_32Bit T13CV:16;          /**< \brief [15:0] Timer 13 Counter Value - T13CV (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_T13_Bits;

/** \brief Timer 13 Period Register */
typedef struct _Ifx_CCU6_T13PR_Bits
{
    Ifx_UReg_32Bit T13PV:16;          /**< \brief [15:0] T13 Period Value - T13PV (rwh) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_T13PR_Bits;

/** \brief Timer Control Register 0 */
typedef struct _Ifx_CCU6_TCTR0_Bits
{
    Ifx_UReg_32Bit T12CLK:3;          /**< \brief [2:0] Timer T12 Input Clock Select - T12CLK (rw) */
    Ifx_UReg_32Bit T12PRE:1;          /**< \brief [3:3] Timer T12 Prescaler Bit - T12PRE (rw) */
    Ifx_UReg_32Bit T12R:1;            /**< \brief [4:4] Timer T12 Run Bit - T12R (rh) */
    Ifx_UReg_32Bit STE12:1;           /**< \brief [5:5] Timer T12 Shadow Transfer Enable - STE12 (rh) */
    Ifx_UReg_32Bit CDIR:1;            /**< \brief [6:6] Count Direction of Timer T12 - CDIR (rh) */
    Ifx_UReg_32Bit CTM:1;             /**< \brief [7:7] T12 Operating Mode - CTM (rw) */
    Ifx_UReg_32Bit T13CLK:3;          /**< \brief [10:8] Timer T13 Input Clock Select - T13CLK (rw) */
    Ifx_UReg_32Bit T13PRE:1;          /**< \brief [11:11] Timer T13 Prescaler Bit - T13PRE (rw) */
    Ifx_UReg_32Bit T13R:1;            /**< \brief [12:12] Timer T13 Run Bit - T13R (rh) */
    Ifx_UReg_32Bit STE13:1;           /**< \brief [13:13] Timer T13 Shadow Transfer Enable - STE13 (rh) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_CCU6_TCTR0_Bits;

/** \brief Timer Control Register 2 */
typedef struct _Ifx_CCU6_TCTR2_Bits
{
    Ifx_UReg_32Bit T12SSC:1;          /**< \brief [0:0] Timer T12 Single Shot Control - T12SSC (rw) */
    Ifx_UReg_32Bit T13SSC:1;          /**< \brief [1:1] Timer T13 Single Shot Control - T13SSC (rw) */
    Ifx_UReg_32Bit T13TEC:3;          /**< \brief [4:2] T13 Trigger Event Control - T13TEC (rw) */
    Ifx_UReg_32Bit T13TED:2;          /**< \brief [6:5] Timer T13 Trigger Event Direction - T13TED (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit T12RSEL:2;         /**< \brief [9:8] Timer T12 External Run Selection - T12RSEL (rw) */
    Ifx_UReg_32Bit T13RSEL:2;         /**< \brief [11:10] Timer T13 External Run Selection - T13RSEL (rw) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_CCU6_TCTR2_Bits;

/** \brief Timer Control Register 4 */
typedef struct _Ifx_CCU6_TCTR4_Bits
{
    Ifx_UReg_32Bit T12RR:1;           /**< \brief [0:0] Timer T12 Run Reset - T12RR (w) */
    Ifx_UReg_32Bit T12RS:1;           /**< \brief [1:1] Timer T12 Run Set - T12RS (w) */
    Ifx_UReg_32Bit T12RES:1;          /**< \brief [2:2] Timer T12 Reset - T12RES (w) */
    Ifx_UReg_32Bit DTRES:1;           /**< \brief [3:3] Dead-Time Counter Reset - DTRES (w) */
    Ifx_UReg_32Bit reserved_4:1;      /**< \brief [4:4] \internal Reserved */
    Ifx_UReg_32Bit T12CNT:1;          /**< \brief [5:5] Timer T12 Count Event - T12CNT (w) */
    Ifx_UReg_32Bit T12STR:1;          /**< \brief [6:6] Timer T12 Shadow Transfer Request - T12STR (w) */
    Ifx_UReg_32Bit T12STD:1;          /**< \brief [7:7] Timer T12 Shadow Transfer Disable - T12STD (w) */
    Ifx_UReg_32Bit T13RR:1;           /**< \brief [8:8] Timer T13 Run Reset - T13RR (w) */
    Ifx_UReg_32Bit T13RS:1;           /**< \brief [9:9] Timer T13 Run Set - T13RS (w) */
    Ifx_UReg_32Bit T13RES:1;          /**< \brief [10:10] Timer T13 Reset - T13RES (w) */
    Ifx_UReg_32Bit reserved_11:2;     /**< \brief [12:11] \internal Reserved */
    Ifx_UReg_32Bit T13CNT:1;          /**< \brief [13:13] Timer T13 Count Event - T13CNT (w) */
    Ifx_UReg_32Bit T13STR:1;          /**< \brief [14:14] Timer T13 Shadow Transfer Request - T13STR (w) */
    Ifx_UReg_32Bit T13STD:1;          /**< \brief [15:15] Timer T13 Shadow Transfer Disable - T13STD (w) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_TCTR4_Bits;

/** \brief Trap Control Register */
typedef struct _Ifx_CCU6_TRPCTR_Bits
{
    Ifx_UReg_32Bit TRPM0:1;           /**< \brief [0:0] Trap Mode Control Bit 0 - TRPM0 (rw) */
    Ifx_UReg_32Bit TRPM1:1;           /**< \brief [1:1] Trap Mode Control Bit 1 - TRPM1 (rw) */
    Ifx_UReg_32Bit TRPM2:1;           /**< \brief [2:2] Trap Mode Control Bit 2 - TRPM2 (rw) */
    Ifx_UReg_32Bit reserved_3:5;      /**< \brief [7:3] \internal Reserved */
    Ifx_UReg_32Bit TRPEN:6;           /**< \brief [13:8] Trap Enable Control - TRPEN (rw) */
    Ifx_UReg_32Bit TRPEN13:1;         /**< \brief [14:14] Trap Enable Control for Timer T13 - TRPEN13 (rw) */
    Ifx_UReg_32Bit TRPPEN:1;          /**< \brief [15:15] Trap Pin Enable - TRPPEN (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_CCU6_TRPCTR_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_ccu6_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_ACCEN0;

/** \brief Compare Register for T13   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_CC63R_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_CC63R;

/** \brief Compare Shadow Register for T13   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_CC63SR_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_CC63SR;

/** \brief Capture/Compare Register for Channel CC6${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_CC6R_Bits B;             /**< \brief Bitfield access */
} Ifx_CCU6_CC6R;

/** \brief Capture/Compare Shadow Reg. for Channel CC6${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_CC6SR_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_CC6SR;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_CCU6_CLC;

/** \brief Compare State Modification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_CMPMODIF_Bits B;         /**< \brief Bitfield access */
} Ifx_CCU6_CMPMODIF;

/** \brief Compare State Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_CMPSTAT_Bits B;          /**< \brief Bitfield access */
} Ifx_CCU6_CMPSTAT;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_CCU6_ID;

/** \brief Interrupt Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_IEN_Bits B;              /**< \brief Bitfield access */
} Ifx_CCU6_IEN;

/** \brief Input Monitoring Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_IMON_Bits B;             /**< \brief Bitfield access */
} Ifx_CCU6_IMON;

/** \brief Interrupt Node Pointer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_INP_Bits B;              /**< \brief Bitfield access */
} Ifx_CCU6_INP;

/** \brief Interrupt Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_IS_Bits B;               /**< \brief Bitfield access */
} Ifx_CCU6_IS;

/** \brief Interrupt Status Reset Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_ISR_Bits B;              /**< \brief Bitfield access */
} Ifx_CCU6_ISR;

/** \brief Interrupt Status Set Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_ISS_Bits B;              /**< \brief Bitfield access */
} Ifx_CCU6_ISS;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_KRST0_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_KRST1_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_KRSTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_CCU6_KRSTCLR;

/** \brief Kernel State Control Sensitivity Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_KSCSR_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_KSCSR;

/** \brief Lost Indicator Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_LI_Bits B;               /**< \brief Bitfield access */
} Ifx_CCU6_LI;

/** \brief Module Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_MCFG_Bits B;             /**< \brief Bitfield access */
} Ifx_CCU6_MCFG;

/** \brief Multi-Channel Mode Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_MCMCTR_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_MCMCTR;

/** \brief Multi-Channel Mode Output Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_MCMOUT_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_MCMOUT;

/** \brief Multi-Channel Mode Output Shadow Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_MCMOUTS_Bits B;          /**< \brief Bitfield access */
} Ifx_CCU6_MCMOUTS;

/** \brief Modulation Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_MODCTR_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_MODCTR;

/** \brief CCU60 Module Output Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_MOSEL_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_MOSEL;

/** \brief OCDS Control and Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_OCS_Bits B;              /**< \brief Bitfield access */
} Ifx_CCU6_OCS;

/** \brief Port Input Select Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_PISEL0_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_PISEL0;

/** \brief Port Input Select Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_PISEL2_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_PISEL2;

/** \brief Passive State Level Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_PSLR_Bits B;             /**< \brief Bitfield access */
} Ifx_CCU6_PSLR;

/** \brief Timer T12 Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_T12_Bits B;              /**< \brief Bitfield access */
} Ifx_CCU6_T12;

/** \brief Dead-Time Control Register for Timer12   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_T12DTC_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_T12DTC;

/** \brief T12 Mode Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_T12MSEL_Bits B;          /**< \brief Bitfield access */
} Ifx_CCU6_T12MSEL;

/** \brief Timer 12 Period Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_T12PR_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_T12PR;

/** \brief Timer T13 Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_T13_Bits B;              /**< \brief Bitfield access */
} Ifx_CCU6_T13;

/** \brief Timer 13 Period Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_T13PR_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_T13PR;

/** \brief Timer Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_TCTR0_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_TCTR0;

/** \brief Timer Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_TCTR2_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_TCTR2;

/** \brief Timer Control Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_TCTR4_Bits B;            /**< \brief Bitfield access */
} Ifx_CCU6_TCTR4;

/** \brief Trap Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_CCU6_TRPCTR_Bits B;           /**< \brief Bitfield access */
} Ifx_CCU6_TRPCTR;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Ccu6_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief CCU6 object */
typedef volatile struct _Ifx_CCU6
{
       Ifx_CCU6_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_CCU6_MCFG                       MCFG;                   /**< \brief 4, Module Configuration Register*/
       Ifx_CCU6_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_CCU6_MOSEL                      MOSEL;                  /**< \brief C, CCU60 Module Output Select Register*/
       Ifx_CCU6_PISEL0                     PISEL0;                 /**< \brief 10, Port Input Select Register 0*/
       Ifx_CCU6_PISEL2                     PISEL2;                 /**< \brief 14, Port Input Select Register 2*/
       Ifx_UReg_8Bit                       reserved_18[4];         /**< \brief 18, \internal Reserved */
       Ifx_CCU6_KSCSR                      KSCSR;                  /**< \brief 1C, Kernel State Control Sensitivity Register*/
       Ifx_CCU6_T12                        T12;                    /**< \brief 20, Timer T12 Counter Register*/
       Ifx_CCU6_T12PR                      T12PR;                  /**< \brief 24, Timer 12 Period Register*/
       Ifx_CCU6_T12DTC                     T12DTC;                 /**< \brief 28, Dead-Time Control Register for Timer12*/
       Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, \internal Reserved */
       Ifx_CCU6_CC6R                       CC6R[3];                /**< \brief 30, Capture/Compare Register for Channel CC6${x}*/
       Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, \internal Reserved */
       Ifx_CCU6_CC6SR                      CC6SR[3];               /**< \brief 40, Capture/Compare Shadow Reg. for Channel CC6${x}*/
       Ifx_UReg_8Bit                       reserved_4C[4];         /**< \brief 4C, \internal Reserved */
       Ifx_CCU6_T13                        T13;                    /**< \brief 50, Timer T13 Counter Register*/
       Ifx_CCU6_T13PR                      T13PR;                  /**< \brief 54, Timer 13 Period Register*/
       Ifx_CCU6_CC63R                      CC63R;                  /**< \brief 58, Compare Register for T13*/
       Ifx_CCU6_CC63SR                     CC63SR;                 /**< \brief 5C, Compare Shadow Register for T13*/
       Ifx_CCU6_CMPSTAT                    CMPSTAT;                /**< \brief 60, Compare State Register*/
       Ifx_CCU6_CMPMODIF                   CMPMODIF;               /**< \brief 64, Compare State Modification Register*/
       Ifx_CCU6_T12MSEL                    T12MSEL;                /**< \brief 68, T12 Mode Select Register*/
       Ifx_UReg_8Bit                       reserved_6C[4];         /**< \brief 6C, \internal Reserved */
       Ifx_CCU6_TCTR0                      TCTR0;                  /**< \brief 70, Timer Control Register 0*/
       Ifx_CCU6_TCTR2                      TCTR2;                  /**< \brief 74, Timer Control Register 2*/
       Ifx_CCU6_TCTR4                      TCTR4;                  /**< \brief 78, Timer Control Register 4*/
       Ifx_UReg_8Bit                       reserved_7C[4];         /**< \brief 7C, \internal Reserved */
       Ifx_CCU6_MODCTR                     MODCTR;                 /**< \brief 80, Modulation Control Register*/
       Ifx_CCU6_TRPCTR                     TRPCTR;                 /**< \brief 84, Trap Control Register*/
       Ifx_CCU6_PSLR                       PSLR;                   /**< \brief 88, Passive State Level Register*/
       Ifx_CCU6_MCMOUTS                    MCMOUTS;                /**< \brief 8C, Multi-Channel Mode Output Shadow Register*/
       Ifx_CCU6_MCMOUT                     MCMOUT;                 /**< \brief 90, Multi-Channel Mode Output Register*/
       Ifx_CCU6_MCMCTR                     MCMCTR;                 /**< \brief 94, Multi-Channel Mode Control Register*/
       Ifx_CCU6_IMON                       IMON;                   /**< \brief 98, Input Monitoring Register*/
       Ifx_CCU6_LI                         LI;                     /**< \brief 9C, Lost Indicator Register*/
       Ifx_CCU6_IS                         IS;                     /**< \brief A0, Interrupt Status Register*/
       Ifx_CCU6_ISS                        ISS;                    /**< \brief A4, Interrupt Status Set Register*/
       Ifx_CCU6_ISR                        ISR;                    /**< \brief A8, Interrupt Status Reset Register*/
       Ifx_CCU6_INP                        INP;                    /**< \brief AC, Interrupt Node Pointer Register*/
       Ifx_CCU6_IEN                        IEN;                    /**< \brief B0, Interrupt Enable Register*/
       Ifx_UReg_8Bit                       reserved_B4[52];        /**< \brief B4, \internal Reserved */
       Ifx_CCU6_OCS                        OCS;                    /**< \brief E8, OCDS Control and Status Register*/
       Ifx_CCU6_KRSTCLR                    KRSTCLR;                /**< \brief EC, Kernel Reset Status Clear Register*/
       Ifx_CCU6_KRST1                      KRST1;                  /**< \brief F0, Kernel Reset Register 1*/
       Ifx_CCU6_KRST0                      KRST0;                  /**< \brief F4, Kernel Reset Register 0*/
       Ifx_UReg_8Bit                       reserved_F8[4];         /**< \brief F8, \internal Reserved */
       Ifx_CCU6_ACCEN0                     ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
} Ifx_CCU6;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXCCU6_REGDEF_H */
