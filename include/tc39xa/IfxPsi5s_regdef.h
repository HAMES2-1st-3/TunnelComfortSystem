/**
 * \file IfxPsi5s_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:08 GMT
 * Version: TBD
 * Specification: TBD
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
 * \defgroup IfxLld_Psi5s_Registers Psi5sRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Psi5s_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Psi5s_Registers
 * 
 * \defgroup IfxLld_Psi5s_Registers_union Register unions
 * \ingroup IfxLld_Psi5s_Registers
 * 
 * \defgroup IfxLld_Psi5s_Registers_struct Memory map
 * \ingroup IfxLld_Psi5s_Registers
 */
#ifndef IFXPSI5S_REGDEF_H
#define IFXPSI5S_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Psi5s_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_PSI5S_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
} Ifx_PSI5S_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_PSI5S_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_PSI5S_ACCEN1_Bits;

/** \brief Base Address Register */
typedef struct _Ifx_PSI5S_BAR_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit BA:30;             /**< \brief [31:2] Base Address - BA (rw) */
} Ifx_PSI5S_BAR_Bits;

/** \brief Baud Rate Timer/Reload Register */
typedef struct _Ifx_PSI5S_BG_Bits
{
    Ifx_UReg_32Bit BR_VALUE:13;       /**< \brief [12:0] Baud Rate Timer/Reload Register Value - BR_VALUE (rwh) */
    Ifx_UReg_32Bit reserved_13:19;    /**< \brief [31:13] \internal Reserved */
} Ifx_PSI5S_BG_Bits;

/** \brief CPU Direct Write Register */
typedef struct _Ifx_PSI5S_CDW_Bits
{
    Ifx_UReg_32Bit SD0:1;             /**< \brief [0:0] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD1:1;             /**< \brief [1:1] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD2:1;             /**< \brief [2:2] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD3:1;             /**< \brief [3:3] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD4:1;             /**< \brief [4:4] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD5:1;             /**< \brief [5:5] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD6:1;             /**< \brief [6:6] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD7:1;             /**< \brief [7:7] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit TSI:1;             /**< \brief [8:8] Trigger Pulse Indicator - TSI (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_PSI5S_CDW_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_PSI5S_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] External Sleep Mode Request Disable Bit - EDIS (rw) */
    Ifx_UReg_32Bit reserved_4:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_PSI5S_CLC_Bits;

/** \brief Control Register */
typedef struct _Ifx_PSI5S_CON_Bits
{
    Ifx_UReg_32Bit M:3;               /**< \brief [2:0] Mode Selection - M (rw) */
    Ifx_UReg_32Bit STP:1;             /**< \brief [3:3] Number of Stop Bit Selection - STP (rw) */
    Ifx_UReg_32Bit REN:1;             /**< \brief [4:4] Receiver Enable Control - REN (r) */
    Ifx_UReg_32Bit PEN:1;             /**< \brief [5:5] Parity Check Enable (asynchronous mode only) - PEN (rw) */
    Ifx_UReg_32Bit FEN:1;             /**< \brief [6:6] Framing Check Enable (asynchronous mode only) - FEN (rw) */
    Ifx_UReg_32Bit OEN:1;             /**< \brief [7:7] Overrun Check Enable - OEN (rw) */
    Ifx_UReg_32Bit PE:1;              /**< \brief [8:8] ASC Parity Error Flag - PE (r) */
    Ifx_UReg_32Bit FE:1;              /**< \brief [9:9] ASC Framing Error Flag - FE (r) */
    Ifx_UReg_32Bit OE:1;              /**< \brief [10:10] ASC Overrun Error Flag - OE (r) */
    Ifx_UReg_32Bit FDE:1;             /**< \brief [11:11] Fractional Divider Enable - FDE (rw) */
    Ifx_UReg_32Bit ODD:1;             /**< \brief [12:12] Parity Selection - ODD (rw) */
    Ifx_UReg_32Bit BRS:1;             /**< \brief [13:13] Baud Rate Selection - BRS (rw) */
    Ifx_UReg_32Bit LB:1;              /**< \brief [14:14] Loop-back Mode Enable - LB (rw) */
    Ifx_UReg_32Bit R:1;               /**< \brief [15:15] Baud Rate Generator Run Control - R (rw) */
    Ifx_UReg_32Bit MTX:3;             /**< \brief [18:16] Mode Selection TX direction - MTX (rw) */
    Ifx_UReg_32Bit reserved_19:9;     /**< \brief [27:19] \internal Reserved */
    Ifx_UReg_32Bit ODDTX:1;           /**< \brief [28:28] Parity Selection TX direction - ODDTX (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_PSI5S_CON_Bits;

/** \brief Channel Trigger Value Register ${x} */
typedef struct _Ifx_PSI5S_CTV_Bits
{
    Ifx_UReg_32Bit CTV:16;            /**< \brief [15:0] Channel Trigger Value CTV - CTV (rw) */
    Ifx_UReg_32Bit CTC:16;            /**< \brief [31:16] Channel Trigger Counter - CTC (rw) */
} Ifx_PSI5S_CTV_Bits;

/** \brief Frame Counter Register */
typedef struct _Ifx_PSI5S_FCNT_Bits
{
    Ifx_UReg_32Bit FC0:3;             /**< \brief [2:0] Frame Counter for Channel ${x} - FC${x} (r) */
    Ifx_UReg_32Bit FC1:3;             /**< \brief [5:3] Frame Counter for Channel ${x} - FC${x} (r) */
    Ifx_UReg_32Bit FC2:3;             /**< \brief [8:6] Frame Counter for Channel ${x} - FC${x} (r) */
    Ifx_UReg_32Bit FC3:3;             /**< \brief [11:9] Frame Counter for Channel ${x} - FC${x} (r) */
    Ifx_UReg_32Bit FC4:3;             /**< \brief [14:12] Frame Counter for Channel ${x} - FC${x} (r) */
    Ifx_UReg_32Bit FC5:3;             /**< \brief [17:15] Frame Counter for Channel ${x} - FC${x} (r) */
    Ifx_UReg_32Bit FC6:3;             /**< \brief [20:18] Frame Counter for Channel ${x} - FC${x} (r) */
    Ifx_UReg_32Bit FC7:3;             /**< \brief [23:21] Frame Counter for Channel ${x} - FC${x} (r) */
    Ifx_UReg_32Bit NFCLR0:1;          /**< \brief [24:24] Clear Number of Frame Counter for Channel ${x} - NFCLR${x} (w) */
    Ifx_UReg_32Bit NFCLR1:1;          /**< \brief [25:25] Clear Number of Frame Counter for Channel ${x} - NFCLR${x} (w) */
    Ifx_UReg_32Bit NFCLR2:1;          /**< \brief [26:26] Clear Number of Frame Counter for Channel ${x} - NFCLR${x} (w) */
    Ifx_UReg_32Bit NFCLR3:1;          /**< \brief [27:27] Clear Number of Frame Counter for Channel ${x} - NFCLR${x} (w) */
    Ifx_UReg_32Bit NFCLR4:1;          /**< \brief [28:28] Clear Number of Frame Counter for Channel ${x} - NFCLR${x} (w) */
    Ifx_UReg_32Bit NFCLR5:1;          /**< \brief [29:29] Clear Number of Frame Counter for Channel ${x} - NFCLR${x} (w) */
    Ifx_UReg_32Bit NFCLR6:1;          /**< \brief [30:30] Clear Number of Frame Counter for Channel ${x} - NFCLR${x} (w) */
    Ifx_UReg_32Bit NFCLR7:1;          /**< \brief [31:31] Clear Number of Frame Counter for Channel ${x} - NFCLR${x} (w) */
} Ifx_PSI5S_FCNT_Bits;

/** \brief Fractional Divider for Output CLK Register */
typedef struct _Ifx_PSI5S_FDO_Bits
{
    Ifx_UReg_32Bit STEP:11;           /**< \brief [10:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_11:3;     /**< \brief [13:11] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_PSI5S_FDO_Bits;

/** \brief PSI5-S Fractional Divider Register */
typedef struct _Ifx_PSI5S_FDR_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_PSI5S_FDR_Bits;

/** \brief Fractional Divider Register for Time Stamp */
typedef struct _Ifx_PSI5S_FDRT_Bits
{
    Ifx_UReg_32Bit STEP:10;           /**< \brief [9:0] Step Value - STEP (rw) */
    Ifx_UReg_32Bit reserved_10:4;     /**< \brief [13:10] \internal Reserved */
    Ifx_UReg_32Bit DM:2;              /**< \brief [15:14] Divider Mode - DM (rw) */
    Ifx_UReg_32Bit RESULT:10;         /**< \brief [25:16] Result Value - RESULT (rh) */
    Ifx_UReg_32Bit ECS:3;             /**< \brief [28:26] External Time Stamp Clear Source Select - ECS (rw) */
    Ifx_UReg_32Bit ECEA:1;            /**< \brief [29:29] External Time Stamp Clear Enable A - ECEA (rw) */
    Ifx_UReg_32Bit ECEB:1;            /**< \brief [30:30] External Time Stamp Clear Enable B - ECEB (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PSI5S_FDRT_Bits;

/** \brief Fractional Divider Register */
typedef struct _Ifx_PSI5S_FDV_Bits
{
    Ifx_UReg_32Bit FD_VALUE:11;       /**< \brief [10:0] Fractional Divider Register Value - FD_VALUE (rw) */
    Ifx_UReg_32Bit reserved_11:21;    /**< \brief [31:11] \internal Reserved */
} Ifx_PSI5S_FDV_Bits;

/** \brief Global Control Register */
typedef struct _Ifx_PSI5S_GCR_Bits
{
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [0:0] CRCI - CRCI (rw) */
    Ifx_UReg_32Bit XCRCI:1;           /**< \brief [1:1] XCRCI - XCRCI (rw) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [2:2] TEI - TEI (rw) */
    Ifx_UReg_32Bit PE:1;              /**< \brief [3:3] PE - PE (rw) */
    Ifx_UReg_32Bit FE:1;              /**< \brief [4:4] FE - FE (rw) */
    Ifx_UReg_32Bit OE:1;              /**< \brief [5:5] OE - OE (rw) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [6:6] RBI - RBI (rw) */
    Ifx_UReg_32Bit HDI:1;             /**< \brief [7:7] HDI - HDI (rw) */
    Ifx_UReg_32Bit ETC0:1;            /**< \brief [8:8] Enable Channel Trigger Counter CTV${x}.CTC - ETC${x} (rw) */
    Ifx_UReg_32Bit ETC1:1;            /**< \brief [9:9] Enable Channel Trigger Counter CTV${x}.CTC - ETC${x} (rw) */
    Ifx_UReg_32Bit ETC2:1;            /**< \brief [10:10] Enable Channel Trigger Counter CTV${x}.CTC - ETC${x} (rw) */
    Ifx_UReg_32Bit ETC3:1;            /**< \brief [11:11] Enable Channel Trigger Counter CTV${x}.CTC - ETC${x} (rw) */
    Ifx_UReg_32Bit ETC4:1;            /**< \brief [12:12] Enable Channel Trigger Counter CTV${x}.CTC - ETC${x} (rw) */
    Ifx_UReg_32Bit ETC5:1;            /**< \brief [13:13] Enable Channel Trigger Counter CTV${x}.CTC - ETC${x} (rw) */
    Ifx_UReg_32Bit ETC6:1;            /**< \brief [14:14] Enable Channel Trigger Counter CTV${x}.CTC - ETC${x} (rw) */
    Ifx_UReg_32Bit ETC7:1;            /**< \brief [15:15] Enable Channel Trigger Counter CTV${x}.CTC - ETC${x} (rw) */
    Ifx_UReg_32Bit CEN0:1;            /**< \brief [16:16] Enable Channel ${x} - CEN${x} (rw) */
    Ifx_UReg_32Bit CEN1:1;            /**< \brief [17:17] Enable Channel ${x} - CEN${x} (rw) */
    Ifx_UReg_32Bit CEN2:1;            /**< \brief [18:18] Enable Channel ${x} - CEN${x} (rw) */
    Ifx_UReg_32Bit CEN3:1;            /**< \brief [19:19] Enable Channel ${x} - CEN${x} (rw) */
    Ifx_UReg_32Bit CEN4:1;            /**< \brief [20:20] Enable Channel ${x} - CEN${x} (rw) */
    Ifx_UReg_32Bit CEN5:1;            /**< \brief [21:21] Enable Channel ${x} - CEN${x} (rw) */
    Ifx_UReg_32Bit CEN6:1;            /**< \brief [22:22] Enable Channel ${x} - CEN${x} (rw) */
    Ifx_UReg_32Bit CEN7:1;            /**< \brief [23:23] Enable Channel ${x} - CEN${x} (rw) */
    Ifx_UReg_32Bit IDT:4;             /**< \brief [27:24] Idle Time (GLOBAL VALUE FOR ALL CHANNELS) - IDT (rw) */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [30:28] \internal Reserved */
    Ifx_UReg_32Bit ASC:1;             /**< \brief [31:31] ASC only Mode - ASC (rw) */
} Ifx_PSI5S_GCR_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_PSI5S_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (r) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (r) */
    Ifx_UReg_32Bit MODNUM:16;         /**< \brief [31:16] Module Number Value - MODNUM (r) */
} Ifx_PSI5S_ID_Bits;

/** \brief Interrupt Node Pointer Register ${x} */
typedef struct _Ifx_PSI5S_INP_Bits
{
    Ifx_UReg_32Bit RSI:3;             /**< \brief [2:0] Interrupt Node Pointer for Interrupt RSI - RSI (rw) */
    Ifx_UReg_32Bit RDI:3;             /**< \brief [5:3] Interrupt Node Pointer for Interrupt RDI - RDI (rw) */
    Ifx_UReg_32Bit RBI:3;             /**< \brief [8:6] Interrupt Node Pointer for Interrupt RBI - RBI (rw) */
    Ifx_UReg_32Bit TEI:3;             /**< \brief [11:9] Interrupt Node Pointer for Interrupt TEI - TEI (rw) */
    Ifx_UReg_32Bit CHCI:3;            /**< \brief [14:12] Interrupt Node Pointer for Interrupt CHCI - CHCI (rw) */
    Ifx_UReg_32Bit CRCI:3;            /**< \brief [17:15] Interrupt Node Pointer for Interrupt CRCI - CRCI (rw) */
    Ifx_UReg_32Bit TPI:3;             /**< \brief [20:18] Interrupt Node Pointer for Interrupt TOI - TPI (rw) */
    Ifx_UReg_32Bit TPOI:3;            /**< \brief [23:21] Interrupt Node Pointer for TPOI - TPOI (rw) */
    Ifx_UReg_32Bit HDI:3;             /**< \brief [26:24] Interrupt Node Pointer for HDI - HDI (rw) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_PSI5S_INP_Bits;

/** \brief Interrupt Node Pointer Register Global */
typedef struct _Ifx_PSI5S_INPG_Bits
{
    Ifx_UReg_32Bit TIR:3;             /**< \brief [2:0] Interrupt Node Pointer for Interrupt TIR - TIR (rw) */
    Ifx_UReg_32Bit RIR:3;             /**< \brief [5:3] Interrupt Node Pointer for Interrupt RIR - RIR (rw) */
    Ifx_UReg_32Bit EIR:3;             /**< \brief [8:6] Interrupt Node Pointer for Interrupt EIR - EIR (rw) */
    Ifx_UReg_32Bit TBIR:3;            /**< \brief [11:9] Interrupt Node Pointer for Interrupt TBIR - TBIR (rw) */
    Ifx_UReg_32Bit XCRCI:3;           /**< \brief [14:12] Interrupt Node Pointer for Interrupt XCRCI - XCRCI (rw) */
    Ifx_UReg_32Bit FOI:3;             /**< \brief [17:15] Interrupt Node Pointer for Interrupt FOI - FOI (rw) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_PSI5S_INPG_Bits;

/** \brief Interrupt Clear Register ${x} */
typedef struct _Ifx_PSI5S_INTCLR_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Clear Interrupt Request Flag RSI - RSI (w) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Clear Interrupt Request Flag RDI - RDI (w) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Clear Interrupt Request Flag RBI - RBI (w) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Clear Interrupt Request Flag TEI - TEI (w) */
    Ifx_UReg_32Bit CHCI:1;            /**< \brief [4:4] Clear Interrupt Request Flag CHCI - CHCI (w) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [5:5] Clear Interrupt Request Flag CRCI - CRCI (w) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [6:6] Clear Interrupt Request Flag TPI - TPI (w) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [7:7] Clear Interrupt Request Flag TPOI - TPOI (w) */
    Ifx_UReg_32Bit HDI:1;             /**< \brief [8:8] Clear Interrupt Request Flag HDI - HDI (w) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_PSI5S_INTCLR_Bits;

/** \brief Interrupt Clear Register Global */
typedef struct _Ifx_PSI5S_INTCLRG_Bits
{
    Ifx_UReg_32Bit TIR:1;             /**< \brief [0:0] Clear Interrupt Request Flag TIR - TIR (w) */
    Ifx_UReg_32Bit RIR:1;             /**< \brief [1:1] Clear Interrupt Request Flag RIR - RIR (w) */
    Ifx_UReg_32Bit EIR:1;             /**< \brief [2:2] Clear Interrupt Request Flag EIR - EIR (w) */
    Ifx_UReg_32Bit TBIR:1;            /**< \brief [3:3] Clear Interrupt Request Flag TBIR - TBIR (w) */
    Ifx_UReg_32Bit XCRCI:1;           /**< \brief [4:4] Clear Interrupt Request Flag XCRCI - XCRCI (w) */
    Ifx_UReg_32Bit FOI:1;             /**< \brief [5:5] Clear Interrupt Request Flag FOI - FOI (w) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_PSI5S_INTCLRG_Bits;

/** \brief Interrupt Enable Register ${x} */
typedef struct _Ifx_PSI5S_INTEN_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Enable Interrupt Request RSI - RSI (rw) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Enable Interrupt Request RDI - RDI (rw) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Enable Interrupt Request RBI - RBI (rw) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Enable Interrupt Request TEI - TEI (rw) */
    Ifx_UReg_32Bit CHCI:1;            /**< \brief [4:4] Enable Interrupt Request CHCI - CHCI (rw) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [5:5] Enable Interrupt Request CRCI - CRCI (rw) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [6:6] Enable Interrupt Request TPI - TPI (rw) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [7:7] Enable Interrupt Request TPOI - TPOI (rw) */
    Ifx_UReg_32Bit HDI:1;             /**< \brief [8:8] Enable Interrupt Request HDI - HDI (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_PSI5S_INTEN_Bits;

/** \brief Interrupt Enable Register Global */
typedef struct _Ifx_PSI5S_INTENG_Bits
{
    Ifx_UReg_32Bit TIR:1;             /**< \brief [0:0] Enable Interrupt Request TIR - TIR (rw) */
    Ifx_UReg_32Bit RIR:1;             /**< \brief [1:1] Enable Interrupt Request RIR - RIR (rw) */
    Ifx_UReg_32Bit EIR:1;             /**< \brief [2:2] Enable Interrupt Request EIR - EIR (rw) */
    Ifx_UReg_32Bit TBIR:1;            /**< \brief [3:3] Enable Interrupt Request TBIR - TBIR (rw) */
    Ifx_UReg_32Bit XCRCI:1;           /**< \brief [4:4] Enable Interrupt Request XCRCI - XCRCI (rw) */
    Ifx_UReg_32Bit FOI:1;             /**< \brief [5:5] Enable Interrupt Request FOI - FOI (rw) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_PSI5S_INTENG_Bits;

/** \brief Interrupt Overview Register */
typedef struct _Ifx_PSI5S_INTOV_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Interrupt Pending on Node Pointer RSI - RSI (rh) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Interrupt Pending on Node Pointer RDI - RDI (rh) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Interrupt Pending on Node Pointer RBI - RBI (rh) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Interrupt Pending on Node Pointer TEI - TEI (rh) */
    Ifx_UReg_32Bit CHCI:1;            /**< \brief [4:4] Interrupt Pending on Node Pointer CHCI - CHCI (rh) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [5:5] Interrupt Pending on Node Pointer CRCI - CRCI (rh) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [6:6] Interrupt Pending on Node Pointer TPI - TPI (rh) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [7:7] Interrupt Pending on Node Pointer TPOI - TPOI (rh) */
    Ifx_UReg_32Bit HDI:1;             /**< \brief [8:8] Interrupt Pending on Node Pointer HDI - HDI (rh) */
    Ifx_UReg_32Bit TIR:1;             /**< \brief [9:9] Interrupt Pending on Node Pointer TIR - TIR (rh) */
    Ifx_UReg_32Bit RIR:1;             /**< \brief [10:10] Interrupt Pending on Node Pointer RIR - RIR (rh) */
    Ifx_UReg_32Bit EIR:1;             /**< \brief [11:11] Interrupt Pending on Node Pointer EIR - EIR (rh) */
    Ifx_UReg_32Bit TBIR:1;            /**< \brief [12:12] Interrupt Pending on Node Pointer TBIR - TBIR (rh) */
    Ifx_UReg_32Bit XCRCI:1;           /**< \brief [13:13] Interrupt Pending on Node Pointer XCRCI - XCRCI (rh) */
    Ifx_UReg_32Bit FOI:1;             /**< \brief [14:14] Interrupt Pending on Node Pointer FOI - FOI (rh) */
    Ifx_UReg_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_PSI5S_INTOV_Bits;

/** \brief Interrupt Set Register ${x} */
typedef struct _Ifx_PSI5S_INTSET_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Set Interrupt Request Flag RSI - RSI (w) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Set Interrupt Request Flag RDI - RDI (w) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Set Interrupt Request Flag RBI - RBI (w) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Set Interrupt Request Flag TEI - TEI (w) */
    Ifx_UReg_32Bit CHCI:1;            /**< \brief [4:4] Set Interrupt Request Flag CHCI - CHCI (w) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [5:5] Set Interrupt Request Flag CRCI - CRCI (w) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [6:6] Set Interrupt Request Flag TPI - TPI (w) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [7:7] Set Interrupt Request Flag TPOI - TPOI (w) */
    Ifx_UReg_32Bit HDI:1;             /**< \brief [8:8] Set Interrupt Request Flag HDI - HDI (w) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_PSI5S_INTSET_Bits;

/** \brief Interrupt Set Register Global */
typedef struct _Ifx_PSI5S_INTSETG_Bits
{
    Ifx_UReg_32Bit TIR:1;             /**< \brief [0:0] Set Interrupt Request Flag TIR - TIR (w) */
    Ifx_UReg_32Bit RIR:1;             /**< \brief [1:1] Set Interrupt Request Flag RIR - RIR (w) */
    Ifx_UReg_32Bit EIR:1;             /**< \brief [2:2] Set Interrupt Request Flag EIR - EIR (w) */
    Ifx_UReg_32Bit TBIR:1;            /**< \brief [3:3] Set Interrupt Request Flag TBIR - TBIR (w) */
    Ifx_UReg_32Bit XCRCI:1;           /**< \brief [4:4] Set Interrupt Request Flag XCRCI - XCRCI (w) */
    Ifx_UReg_32Bit FOI:1;             /**< \brief [5:5] Set Interrupt Request Flag FOI - FOI (w) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_PSI5S_INTSETG_Bits;

/** \brief Interrupt Status Register ${x} */
typedef struct _Ifx_PSI5S_INTSTAT_Bits
{
    Ifx_UReg_32Bit RSI:1;             /**< \brief [0:0] Receive Success Interrupt Request Flag - RSI (rh) */
    Ifx_UReg_32Bit RDI:1;             /**< \brief [1:1] Receive Data Interrupt Request Flag - RDI (rh) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [2:2] Receive Buffer Overflow Interrupt Request Flag - RBI (rh) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [3:3] Timing Error Interrupt Request Flag - TEI (rh) */
    Ifx_UReg_32Bit CHCI:1;            /**< \brief [4:4] Channel Completed Interrupt Request Flag - CHCI (rh) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [5:5] CRC Error Request Flag - CRCI (rh) */
    Ifx_UReg_32Bit TPI:1;             /**< \brief [6:6] Transfer Preparation Interrupt Request Flag - TPI (rh) */
    Ifx_UReg_32Bit TPOI:1;            /**< \brief [7:7] Transmit Preparation Overflow Interrupt Request Flag - TPOI (rh) */
    Ifx_UReg_32Bit HDI:1;             /**< \brief [8:8] Header Error Signalled Flag - HDI (rh) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_PSI5S_INTSTAT_Bits;

/** \brief Interrupt Status Register Global */
typedef struct _Ifx_PSI5S_INTSTATG_Bits
{
    Ifx_UReg_32Bit TIR:1;             /**< \brief [0:0] Transmit Interrupt Request Flag - TIR (rh) */
    Ifx_UReg_32Bit RIR:1;             /**< \brief [1:1] Receive Interrupt Request Flag - RIR (rh) */
    Ifx_UReg_32Bit EIR:1;             /**< \brief [2:2] Error Interrupt Request Flag - EIR (rh) */
    Ifx_UReg_32Bit TBIR:1;            /**< \brief [3:3] Transmit Buffer Interrupt Request Flag - TBIR (rh) */
    Ifx_UReg_32Bit XCRCI:1;           /**< \brief [4:4] XCRC Error Request Flag - XCRCI (rh) */
    Ifx_UReg_32Bit FOI:1;             /**< \brief [5:5] FIFO Error Request Flag - FOI (rh) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_PSI5S_INTSTATG_Bits;

/** \brief Input and Output Control Register */
typedef struct _Ifx_PSI5S_IOCR_Bits
{
    Ifx_UReg_32Bit ALTI:2;            /**< \brief [1:0] Alternate Input Select - ALTI (rw) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_PSI5S_IOCR_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_PSI5S_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status - RSTSTAT (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_PSI5S_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_PSI5S_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset - RST (rwh) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_PSI5S_KRST1_Bits;

/** \brief Kernel Reset Status Clear Register */
typedef struct _Ifx_PSI5S_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear - CLR (w) */
    Ifx_UReg_32Bit reserved_1:31;     /**< \brief [31:1] \internal Reserved */
} Ifx_PSI5S_KRSTCLR_Bits;

/** \brief Number of Frames Control Register */
typedef struct _Ifx_PSI5S_NFC_Bits
{
    Ifx_UReg_32Bit NF0:3;             /**< \brief [2:0] Number of expected Frames on Channel ${x} - NF${x} (rw) */
    Ifx_UReg_32Bit NF1:3;             /**< \brief [5:3] Number of expected Frames on Channel ${x} - NF${x} (rw) */
    Ifx_UReg_32Bit NF2:3;             /**< \brief [8:6] Number of expected Frames on Channel ${x} - NF${x} (rw) */
    Ifx_UReg_32Bit NF3:3;             /**< \brief [11:9] Number of expected Frames on Channel ${x} - NF${x} (rw) */
    Ifx_UReg_32Bit NF4:3;             /**< \brief [14:12] Number of expected Frames on Channel ${x} - NF${x} (rw) */
    Ifx_UReg_32Bit NF5:3;             /**< \brief [17:15] Number of expected Frames on Channel ${x} - NF${x} (rw) */
    Ifx_UReg_32Bit NF6:3;             /**< \brief [20:18] Number of expected Frames on Channel ${x} - NF${x} (rw) */
    Ifx_UReg_32Bit NF7:3;             /**< \brief [23:21] Number of expected Frames on Channel ${x} - NF${x} (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5S_NFC_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_PSI5S_OCS_Bits
{
    Ifx_UReg_32Bit reserved_0:24;     /**< \brief [23:0] \internal Reserved */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Suspend State - SUSSTA (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_PSI5S_OCS_Bits;

/** \brief Pulse Generation Control Register ${x} */
typedef struct _Ifx_PSI5S_PGC_Bits
{
    Ifx_UReg_32Bit TXCMD:5;           /**< \brief [4:0] TX Command - TXCMD (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit ATXCMD:5;          /**< \brief [12:8] Alternate TX Command - ATXCMD (rw) */
    Ifx_UReg_32Bit reserved_13:2;     /**< \brief [14:13] \internal Reserved */
    Ifx_UReg_32Bit TBS:1;             /**< \brief [15:15] Time Base Select - TBS (rw) */
    Ifx_UReg_32Bit ETB:3;             /**< \brief [18:16] External Time Base Select - ETB (rw) */
    Ifx_UReg_32Bit PTE:1;             /**< \brief [19:19] Periodic Trigger Enable - PTE (rw) */
    Ifx_UReg_32Bit ETS:3;             /**< \brief [22:20] External Trigger Select - ETS (rw) */
    Ifx_UReg_32Bit ETE:1;             /**< \brief [23:23] External Trigger Enable - ETE (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5S_PGC_Bits;

/** \brief Receive Buffer Register */
typedef struct _Ifx_PSI5S_RBUF_Bits
{
    Ifx_UReg_32Bit RD_VALUE:9;        /**< \brief [8:0] Receive Data Register Value - RD_VALUE (rh) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_PSI5S_RBUF_Bits;

/** \brief Receiver Control Register A${x} */
typedef struct _Ifx_PSI5S_RCRA_Bits
{
    Ifx_UReg_32Bit CRC0:1;            /**< \brief [0:0] CRC or Parit${y} Selection - CRC${y} (rw) */
    Ifx_UReg_32Bit CRC1:1;            /**< \brief [1:1] CRC or Parit${y} Selection - CRC${y} (rw) */
    Ifx_UReg_32Bit CRC2:1;            /**< \brief [2:2] CRC or Parit${y} Selection - CRC${y} (rw) */
    Ifx_UReg_32Bit CRC3:1;            /**< \brief [3:3] CRC or Parit${y} Selection - CRC${y} (rw) */
    Ifx_UReg_32Bit CRC4:1;            /**< \brief [4:4] CRC or Parit${y} Selection - CRC${y} (rw) */
    Ifx_UReg_32Bit CRC5:1;            /**< \brief [5:5] CRC or Parit${y} Selection - CRC${y} (rw) */
    Ifx_UReg_32Bit TSEN:1;            /**< \brief [6:6] Time Stamp Enable - TSEN (rw) */
    Ifx_UReg_32Bit TSP:1;             /**< \brief [7:7] Time Stamp Select - TSP (rw) */
    Ifx_UReg_32Bit TSTS:1;            /**< \brief [8:8] Time Stamp Trigger Select - TSTS (rw) */
    Ifx_UReg_32Bit FIDS:1;            /**< \brief [9:9] Frame ID Select - FIDS (rw) */
    Ifx_UReg_32Bit WDMS:1;            /**< \brief [10:10] Watch Dog Timer Mode Select - WDMS (rw) */
    Ifx_UReg_32Bit reserved_11:5;     /**< \brief [15:11] \internal Reserved */
    Ifx_UReg_32Bit UFC0:2;            /**< \brief [17:16] UART Frame Count per Packet Frame in Slot ${y} - UFC${y} (rw) */
    Ifx_UReg_32Bit UFC1:2;            /**< \brief [19:18] UART Frame Count per Packet Frame in Slot ${y} - UFC${y} (rw) */
    Ifx_UReg_32Bit UFC2:2;            /**< \brief [21:20] UART Frame Count per Packet Frame in Slot ${y} - UFC${y} (rw) */
    Ifx_UReg_32Bit UFC3:2;            /**< \brief [23:22] UART Frame Count per Packet Frame in Slot ${y} - UFC${y} (rw) */
    Ifx_UReg_32Bit UFC4:2;            /**< \brief [25:24] UART Frame Count per Packet Frame in Slot ${y} - UFC${y} (rw) */
    Ifx_UReg_32Bit UFC5:2;            /**< \brief [27:26] UART Frame Count per Packet Frame in Slot ${y} - UFC${y} (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_PSI5S_RCRA_Bits;

/** \brief Receiver Control Register B${x} */
typedef struct _Ifx_PSI5S_RCRB_Bits
{
    Ifx_UReg_32Bit PDL0:5;            /**< \brief [4:0] Pa${y}load Data Length - PDL${y} (rw) */
    Ifx_UReg_32Bit PDL1:5;            /**< \brief [9:5] Pa${y}load Data Length - PDL${y} (rw) */
    Ifx_UReg_32Bit PDL2:5;            /**< \brief [14:10] Pa${y}load Data Length - PDL${y} (rw) */
    Ifx_UReg_32Bit PDL3:5;            /**< \brief [19:15] Pa${y}load Data Length - PDL${y} (rw) */
    Ifx_UReg_32Bit PDL4:5;            /**< \brief [24:20] Pa${y}load Data Length - PDL${y} (rw) */
    Ifx_UReg_32Bit PDL5:5;            /**< \brief [29:25] Pa${y}load Data Length - PDL${y} (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_PSI5S_RCRB_Bits;

/** \brief Receive Data Register */
typedef struct _Ifx_PSI5S_RDR_Bits
{
    Ifx_UReg_32Bit RD0:1;             /**< \brief [0:0] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD1:1;             /**< \brief [1:1] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD2:1;             /**< \brief [2:2] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD3:1;             /**< \brief [3:3] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD4:1;             /**< \brief [4:4] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD5:1;             /**< \brief [5:5] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD6:1;             /**< \brief [6:6] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD7:1;             /**< \brief [7:7] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD8:1;             /**< \brief [8:8] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD9:1;             /**< \brief [9:9] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD10:1;            /**< \brief [10:10] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD11:1;            /**< \brief [11:11] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD12:1;            /**< \brief [12:12] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD13:1;            /**< \brief [13:13] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD14:1;            /**< \brief [14:14] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD15:1;            /**< \brief [15:15] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD16:1;            /**< \brief [16:16] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD17:1;            /**< \brief [17:17] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD18:1;            /**< \brief [18:18] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD19:1;            /**< \brief [19:19] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD20:1;            /**< \brief [20:20] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD21:1;            /**< \brief [21:21] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD22:1;            /**< \brief [22:22] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD23:1;            /**< \brief [23:23] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD24:1;            /**< \brief [24:24] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD25:1;            /**< \brief [25:25] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD26:1;            /**< \brief [26:26] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit RD27:1;            /**< \brief [27:27] PSI5 Receive Data - RD${y} (r) */
    Ifx_UReg_32Bit PFC:4;             /**< \brief [31:28] Packet Frame Count - PFC (r) */
} Ifx_PSI5S_RDR_Bits;

/** \brief Receive Status Register */
typedef struct _Ifx_PSI5S_RDS_Bits
{
    Ifx_UReg_32Bit XCRC0:1;           /**< \brief [0:0] XCRC - XCRC${y} (r) */
    Ifx_UReg_32Bit XCRC1:1;           /**< \brief [1:1] XCRC - XCRC${y} (r) */
    Ifx_UReg_32Bit XCRC2:1;           /**< \brief [2:2] XCRC - XCRC${y} (r) */
    Ifx_UReg_32Bit XCRC3:1;           /**< \brief [3:3] XCRC - XCRC${y} (r) */
    Ifx_UReg_32Bit XCRC4:1;           /**< \brief [4:4] XCRC - XCRC${y} (r) */
    Ifx_UReg_32Bit XCRC5:1;           /**< \brief [5:5] XCRC - XCRC${y} (r) */
    Ifx_UReg_32Bit XCRCI:1;           /**< \brief [6:6] XCRC Error Flag - XCRCI (r) */
    Ifx_UReg_32Bit CRC0:1;            /**< \brief [7:7] CRC - CRC${y} (r) */
    Ifx_UReg_32Bit CRC1:1;            /**< \brief [8:8] CRC - CRC${y} (r) */
    Ifx_UReg_32Bit CRC2:1;            /**< \brief [9:9] CRC - CRC${y} (r) */
    Ifx_UReg_32Bit CRCI:1;            /**< \brief [10:10] CRC Error Flag - CRCI (r) */
    Ifx_UReg_32Bit ERR0:1;            /**< \brief [11:11] Error signalling Flag 0 - ERR0 (r) */
    Ifx_UReg_32Bit ERR1:1;            /**< \brief [12:12] Error signalling Flag 1 - ERR1 (r) */
    Ifx_UReg_32Bit HDI:1;             /**< \brief [13:13] Header Error Signalled Flag - HDI (r) */
    Ifx_UReg_32Bit PE:1;              /**< \brief [14:14] ASC Parity Error Flag - PE (r) */
    Ifx_UReg_32Bit FE:1;              /**< \brief [15:15] ASC Framing Error Flag - FE (r) */
    Ifx_UReg_32Bit OE:1;              /**< \brief [16:16] ASC Overrun Error Flag - OE (r) */
    Ifx_UReg_32Bit TEI:1;             /**< \brief [17:17] Time Error Flag - TEI (r) */
    Ifx_UReg_32Bit RBI:1;             /**< \brief [18:18] Receive Buffer Overflow Flag - RBI (r) */
    Ifx_UReg_32Bit FID:3;             /**< \brief [21:19] Frame ID (Frame Number) - FID (r) */
    Ifx_UReg_32Bit CID:3;             /**< \brief [24:22] Channel ID (Channel Number) - CID (r) */
    Ifx_UReg_32Bit AFC:3;             /**< \brief [27:25] Actual UART Frame Count - AFC (r) */
    Ifx_UReg_32Bit PFC:4;             /**< \brief [31:28] Packet Frame Count - PFC (r) */
} Ifx_PSI5S_RDS_Bits;

/** \brief Send Control Register ${x} */
typedef struct _Ifx_PSI5S_SCR_Bits
{
    Ifx_UReg_32Bit PLL:5;             /**< \brief [4:0] Pay Load Length of Registers SDRx - PLL (rw) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit EPS:2;             /**< \brief [7:6] Enhanced Protocol Selection - EPS (rw) */
    Ifx_UReg_32Bit BSC:1;             /**< \brief [8:8] Bit Stuffing Control - BSC (rw) */
    Ifx_UReg_32Bit reserved_9:5;      /**< \brief [13:9] \internal Reserved */
    Ifx_UReg_32Bit FLUS:1;            /**< \brief [14:14] Flush SDRx - FLUS (w) */
    Ifx_UReg_32Bit reserved_15:7;     /**< \brief [21:15] \internal Reserved */
    Ifx_UReg_32Bit CRC:1;             /**< \brief [22:22] CRC Generation Control - CRC (rw) */
    Ifx_UReg_32Bit STA:1;             /**< \brief [23:23] Start Sequence Generation Control - STA (rw) */
    Ifx_UReg_32Bit reserved_24:2;     /**< \brief [25:24] \internal Reserved */
    Ifx_UReg_32Bit TPF:1;             /**< \brief [26:26] Transmit in Progress Flag - TPF (r) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_PSI5S_SCR_Bits;

/** \brief Send Data Register ${x} */
typedef struct _Ifx_PSI5S_SDR_Bits
{
    Ifx_UReg_32Bit SD0:1;             /**< \brief [0:0] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD1:1;             /**< \brief [1:1] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD2:1;             /**< \brief [2:2] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD3:1;             /**< \brief [3:3] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD4:1;             /**< \brief [4:4] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD5:1;             /**< \brief [5:5] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD6:1;             /**< \brief [6:6] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD7:1;             /**< \brief [7:7] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD8:1;             /**< \brief [8:8] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD9:1;             /**< \brief [9:9] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD10:1;            /**< \brief [10:10] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD11:1;            /**< \brief [11:11] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD12:1;            /**< \brief [12:12] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD13:1;            /**< \brief [13:13] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD14:1;            /**< \brief [14:14] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD15:1;            /**< \brief [15:15] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD16:1;            /**< \brief [16:16] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD17:1;            /**< \brief [17:17] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD18:1;            /**< \brief [18:18] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD19:1;            /**< \brief [19:19] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD20:1;            /**< \brief [20:20] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD21:1;            /**< \brief [21:21] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD22:1;            /**< \brief [22:22] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit SD23:1;            /**< \brief [23:23] SD${y} - SD${y} (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5S_SDR_Bits;

/** \brief Target Address Register */
typedef struct _Ifx_PSI5S_TAR_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit TA:30;             /**< \brief [31:2] Target Address - TA (r) */
} Ifx_PSI5S_TAR_Bits;

/** \brief Transmit Buffer Register */
typedef struct _Ifx_PSI5S_TBUF_Bits
{
    Ifx_UReg_32Bit TD_VALUE:9;        /**< \brief [8:0] Transmit Data Register Value - TD_VALUE (rw) */
    Ifx_UReg_32Bit reserved_9:23;     /**< \brief [31:9] \internal Reserved */
} Ifx_PSI5S_TBUF_Bits;

/** \brief Time Stamp Count Register A */
typedef struct _Ifx_PSI5S_TSCNTA_Bits
{
    Ifx_UReg_32Bit CTS:24;            /**< \brief [23:0] Current Time Stamp for the Module - CTS (r) */
    Ifx_UReg_32Bit ETB:3;             /**< \brief [26:24] External Time Base Select - ETB (rw) */
    Ifx_UReg_32Bit TBS:1;             /**< \brief [27:27] Time Base Select - TBS (rw) */
    Ifx_UReg_32Bit TBEA:1;            /**< \brief [28:28] Time Base Enable TSCNTA - TBEA (rw) */
    Ifx_UReg_32Bit TBEB:1;            /**< \brief [29:29] Time Base Enable TSCNTB - TBEB (rw) */
    Ifx_UReg_32Bit CLRA:1;            /**< \brief [30:30] Clear Time Stamp Counter A - CLRA (w) */
    Ifx_UReg_32Bit CLRB:1;            /**< \brief [31:31] Clear Time Stamp Counter B - CLRB (w) */
} Ifx_PSI5S_TSCNTA_Bits;

/** \brief Time Stamp Count Register B */
typedef struct _Ifx_PSI5S_TSCNTB_Bits
{
    Ifx_UReg_32Bit CTS:24;            /**< \brief [23:0] Current Time Stamp for the Module - CTS (r) */
    Ifx_UReg_32Bit ETB:3;             /**< \brief [26:24] External Time Base Select - ETB (rw) */
    Ifx_UReg_32Bit TBS:1;             /**< \brief [27:27] Time Base Select - TBS (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_PSI5S_TSCNTB_Bits;

/** \brief Capture Register TSCR${x} */
typedef struct _Ifx_PSI5S_TSCR_Bits
{
    Ifx_UReg_32Bit TS:24;             /**< \brief [23:0] Time Stamp - TS (r) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5S_TSCR_Bits;

/** \brief Time Stamp Mirror Register */
typedef struct _Ifx_PSI5S_TSM_Bits
{
    Ifx_UReg_32Bit TS:24;             /**< \brief [23:0] Time Stamp - TS (r) */
    Ifx_UReg_32Bit reserved_24:4;     /**< \brief [27:24] \internal Reserved */
    Ifx_UReg_32Bit PFC:4;             /**< \brief [31:28] Packet Frame Count - PFC (r) */
} Ifx_PSI5S_TSM_Bits;

/** \brief Watch Dog Timer Register ${x} */
typedef struct _Ifx_PSI5S_WDT_Bits
{
    Ifx_UReg_32Bit WDL:24;            /**< \brief [23:0] Watch Dog Timer Limit - WDL (rw) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PSI5S_WDT_Bits;

/** \brief Write Hardware Bits Control Register */
typedef struct _Ifx_PSI5S_WHBCON_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit CLRREN:1;          /**< \brief [4:4] Clear Receiver Enable Bit - CLRREN (w) */
    Ifx_UReg_32Bit SETREN:1;          /**< \brief [5:5] Set Receiver Enable Bit - SETREN (w) */
    Ifx_UReg_32Bit reserved_6:2;      /**< \brief [7:6] \internal Reserved */
    Ifx_UReg_32Bit CLRPE:1;           /**< \brief [8:8] Clear Parity Error Flag - CLRPE (w) */
    Ifx_UReg_32Bit CLRFE:1;           /**< \brief [9:9] Clear Framing Error Flag - CLRFE (w) */
    Ifx_UReg_32Bit CLROE:1;           /**< \brief [10:10] Clear Overrun Error Flag - CLROE (w) */
    Ifx_UReg_32Bit SETPE:1;           /**< \brief [11:11] Set Parity Error Flag - SETPE (w) */
    Ifx_UReg_32Bit SETFE:1;           /**< \brief [12:12] Set Framing Error Flag - SETFE (w) */
    Ifx_UReg_32Bit SETOE:1;           /**< \brief [13:13] Set Overrun Error Flag - SETOE (w) */
    Ifx_UReg_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_PSI5S_WHBCON_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_psi5s_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_ACCEN0_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5S_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_ACCEN1_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5S_ACCEN1;

/** \brief Base Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_BAR_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_BAR;

/** \brief Baud Rate Timer/Reload Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_BG_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5S_BG;

/** \brief CPU Direct Write Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_CDW_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_CDW;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_CLC_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_CLC;

/** \brief Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_CON_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_CON;

/** \brief Channel Trigger Value Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_CTV_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_CTV;

/** \brief Frame Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_FCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_FCNT;

/** \brief Fractional Divider for Output CLK Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_FDO_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_FDO;

/** \brief PSI5-S Fractional Divider Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_FDR_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_FDR;

/** \brief Fractional Divider Register for Time Stamp   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_FDRT_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_FDRT;

/** \brief Fractional Divider Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_FDV_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_FDV;

/** \brief Global Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_GCR_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_GCR;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_ID_Bits B;              /**< \brief Bitfield access */
} Ifx_PSI5S_ID;

/** \brief Interrupt Node Pointer Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INP_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_INP;

/** \brief Interrupt Node Pointer Register Global   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INPG_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_INPG;

/** \brief Interrupt Clear Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTCLR_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5S_INTCLR;

/** \brief Interrupt Clear Register Global   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTCLRG_Bits B;         /**< \brief Bitfield access */
} Ifx_PSI5S_INTCLRG;

/** \brief Interrupt Enable Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTEN_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5S_INTEN;

/** \brief Interrupt Enable Register Global   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTENG_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5S_INTENG;

/** \brief Interrupt Overview Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTOV_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5S_INTOV;

/** \brief Interrupt Set Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTSET_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5S_INTSET;

/** \brief Interrupt Set Register Global   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTSETG_Bits B;         /**< \brief Bitfield access */
} Ifx_PSI5S_INTSETG;

/** \brief Interrupt Status Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTSTAT_Bits B;         /**< \brief Bitfield access */
} Ifx_PSI5S_INTSTAT;

/** \brief Interrupt Status Register Global   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_INTSTATG_Bits B;        /**< \brief Bitfield access */
} Ifx_PSI5S_INTSTATG;

/** \brief Input and Output Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_IOCR_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_IOCR;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_KRST0_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5S_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_KRST1_Bits B;           /**< \brief Bitfield access */
} Ifx_PSI5S_KRST1;

/** \brief Kernel Reset Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_KRSTCLR_Bits B;         /**< \brief Bitfield access */
} Ifx_PSI5S_KRSTCLR;

/** \brief Number of Frames Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_NFC_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_NFC;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_OCS_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_OCS;

/** \brief Pulse Generation Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_PGC_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_PGC;

/** \brief Receive Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_RBUF_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_RBUF;

/** \brief Receiver Control Register A${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_RCRA_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_RCRA;

/** \brief Receiver Control Register B${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_RCRB_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_RCRB;

/** \brief Receive Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_RDR_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_RDR;

/** \brief Receive Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_RDS_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_RDS;

/** \brief Send Control Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_SCR_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_SCR;

/** \brief Send Data Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_SDR_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_SDR;

/** \brief Target Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_TAR_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_TAR;

/** \brief Transmit Buffer Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_TBUF_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_TBUF;

/** \brief Time Stamp Count Register A   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_TSCNTA_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5S_TSCNTA;

/** \brief Time Stamp Count Register B   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_TSCNTB_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5S_TSCNTB;

/** \brief Capture Register TSCR${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_TSCR_Bits B;            /**< \brief Bitfield access */
} Ifx_PSI5S_TSCR;

/** \brief Time Stamp Mirror Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_TSM_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_TSM;

/** \brief Watch Dog Timer Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_WDT_Bits B;             /**< \brief Bitfield access */
} Ifx_PSI5S_WDT;

/** \brief Write Hardware Bits Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PSI5S_WHBCON_Bits B;          /**< \brief Bitfield access */
} Ifx_PSI5S_WHBCON;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Psi5s_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief PSI5S object */
typedef volatile struct _Ifx_PSI5S
{
       Ifx_PSI5S_CLC                       CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_PSI5S_ID                        ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_PSI5S_FDR                       FDR;                    /**< \brief C, PSI5-S Fractional Divider Register*/
       Ifx_PSI5S_FDRT                      FDRT;                   /**< \brief 10, Fractional Divider Register for Time Stamp*/
       Ifx_PSI5S_TSCNTA                    TSCNTA;                 /**< \brief 14, Time Stamp Count Register A*/
       Ifx_PSI5S_TSCNTB                    TSCNTB;                 /**< \brief 18, Time Stamp Count Register B*/
       Ifx_PSI5S_GCR                       GCR;                    /**< \brief 1C, Global Control Register*/
       Ifx_PSI5S_NFC                       NFC;                    /**< \brief 20, Number of Frames Control Register*/
       Ifx_PSI5S_FCNT                      FCNT;                   /**< \brief 24, Frame Counter Register*/
       Ifx_PSI5S_IOCR                      IOCR;                   /**< \brief 28, Input and Output Control Register*/
       Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, \internal Reserved */
       Ifx_PSI5S_RCRA                      RCRA[8];                /**< \brief 30, Receiver Control Register A${x}*/
       Ifx_PSI5S_RCRB                      RCRB[8];                /**< \brief 50, Receiver Control Register B${x}*/
       Ifx_PSI5S_WDT                       WDT[8];                 /**< \brief 70, Watch Dog Timer Register ${x}*/
       Ifx_PSI5S_TSCR                      TSCR[8];                /**< \brief 90, Capture Register TSCR${x}*/
       Ifx_PSI5S_RDS                       RDS;                    /**< \brief B0, Receive Status Register*/
       Ifx_PSI5S_RDR                       RDR;                    /**< \brief B4, Receive Data Register*/
       Ifx_PSI5S_TSM                       TSM;                    /**< \brief B8, Time Stamp Mirror Register*/
       Ifx_UReg_8Bit                       reserved_BC[20];        /**< \brief BC, \internal Reserved */
       Ifx_PSI5S_TAR                       TAR;                    /**< \brief D0, Target Address Register*/
       Ifx_PSI5S_BAR                       BAR;                    /**< \brief D4, Base Address Register*/
       Ifx_UReg_8Bit                       reserved_D8[24];        /**< \brief D8, \internal Reserved */
       Ifx_PSI5S_PGC                       PGC[8];                 /**< \brief F0, Pulse Generation Control Register ${x}*/
       Ifx_PSI5S_CTV                       CTV[8];                 /**< \brief 110, Channel Trigger Value Register ${x}*/
       Ifx_PSI5S_SCR                       SCR[8];                 /**< \brief 130, Send Control Register ${x}*/
       Ifx_PSI5S_SDR                       SDR[8];                 /**< \brief 150, Send Data Register ${x}*/
       Ifx_PSI5S_CDW                       CDW;                    /**< \brief 170, CPU Direct Write Register*/
       Ifx_UReg_8Bit                       reserved_174[156];      /**< \brief 174, \internal Reserved */
       Ifx_PSI5S_CON                       CON;                    /**< \brief 210, Control Register*/
       Ifx_PSI5S_BG                        BG;                     /**< \brief 214, Baud Rate Timer/Reload Register*/
       Ifx_PSI5S_FDV                       FDV;                    /**< \brief 218, Fractional Divider Register*/
       Ifx_PSI5S_FDO                       FDO;                    /**< \brief 21C, Fractional Divider for Output CLK Register*/
       Ifx_PSI5S_TBUF                      TBUF;                   /**< \brief 220, Transmit Buffer Register*/
       Ifx_PSI5S_RBUF                      RBUF;                   /**< \brief 224, Receive Buffer Register*/
       Ifx_UReg_8Bit                       reserved_228[40];       /**< \brief 228, \internal Reserved */
       Ifx_PSI5S_WHBCON                    WHBCON;                 /**< \brief 250, Write Hardware Bits Control Register*/
       Ifx_UReg_8Bit                       reserved_254[12];       /**< \brief 254, \internal Reserved */
       Ifx_PSI5S_INTSTAT                   INTSTAT[8];             /**< \brief 260, Interrupt Status Register ${x}*/
       Ifx_PSI5S_INTSET                    INTSET[8];              /**< \brief 280, Interrupt Set Register ${x}*/
       Ifx_PSI5S_INTCLR                    INTCLR[8];              /**< \brief 2A0, Interrupt Clear Register ${x}*/
       Ifx_PSI5S_INTEN                     INTEN[8];               /**< \brief 2C0, Interrupt Enable Register ${x}*/
       Ifx_PSI5S_INP                       INP[8];                 /**< \brief 2E0, Interrupt Node Pointer Register ${x}*/
       Ifx_PSI5S_INTOV                     INTOV;                  /**< \brief 300, Interrupt Overview Register*/
       Ifx_PSI5S_INTSTATG                  INTSTATG;               /**< \brief 304, Interrupt Status Register Global*/
       Ifx_PSI5S_INTSETG                   INTSETG;                /**< \brief 308, Interrupt Set Register Global*/
       Ifx_PSI5S_INTCLRG                   INTCLRG;                /**< \brief 30C, Interrupt Clear Register Global*/
       Ifx_PSI5S_INTENG                    INTENG;                 /**< \brief 310, Interrupt Enable Register Global*/
       Ifx_PSI5S_INPG                      INPG;                   /**< \brief 314, Interrupt Node Pointer Register Global*/
       Ifx_UReg_8Bit                       reserved_318[180];      /**< \brief 318, \internal Reserved */
       Ifx_PSI5S_OCS                       OCS;                    /**< \brief 3CC, OCDS Control and Status*/
       Ifx_PSI5S_ACCEN0                    ACCEN0;                 /**< \brief 3D0, Access Enable Register 0*/
       Ifx_PSI5S_ACCEN1                    ACCEN1;                 /**< \brief 3D4, Access Enable Register 1*/
       Ifx_PSI5S_KRST0                     KRST0;                  /**< \brief 3D8, Kernel Reset Register 0*/
       Ifx_PSI5S_KRST1                     KRST1;                  /**< \brief 3DC, Kernel Reset Register 1*/
       Ifx_PSI5S_KRSTCLR                   KRSTCLR;                /**< \brief 3E0, Kernel Reset Status Clear Register*/
       Ifx_UReg_8Bit                       reserved_3E4[3100];     /**< \brief 3E4, \internal Reserved */
} Ifx_PSI5S;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPSI5S_REGDEF_H */
