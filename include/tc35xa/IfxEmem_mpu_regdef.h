/**
 * \file IfxEmem_mpu_regdef.h
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
 * \defgroup IfxSfr_Emem_mpu_Registers Emem_mpu Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Emem_mpu_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Emem_mpu_Registers
 * 
 * \defgroup IfxSfr_Emem_mpu_Registers_union Register unions
 * \ingroup IfxSfr_Emem_mpu_Registers
 * 
 * \defgroup IfxSfr_Emem_mpu_Registers_struct Memory map
 * \ingroup IfxSfr_Emem_mpu_Registers
 */
#ifndef IFXEMEM_MPU_REGDEF_H
#define IFXEMEM_MPU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Emem_mpu_Registers_Bitfields
 * \{  */
/** \brief EMEM Module Access Enable Register 0 */
typedef struct _Ifx_EMEM_MPU_ACCEN0_Bits
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
} Ifx_EMEM_MPU_ACCEN0_Bits;

/** \brief EMEM Module Access Enable Register 1 */
typedef struct _Ifx_EMEM_MPU_ACCEN1_Bits
{
    Ifx_UReg_32Bit EN32:1;            /**< \brief [0:0] Access Enable for Master TAG ID 32 - EN32 (rw) */
    Ifx_UReg_32Bit EN33:1;            /**< \brief [1:1] Access Enable for Master TAG ID 33 - EN33 (rw) */
    Ifx_UReg_32Bit EN34:1;            /**< \brief [2:2] Access Enable for Master TAG ID 34 - EN34 (rw) */
    Ifx_UReg_32Bit EN35:1;            /**< \brief [3:3] Access Enable for Master TAG ID 35 - EN35 (rw) */
    Ifx_UReg_32Bit EN36:1;            /**< \brief [4:4] Access Enable for Master TAG ID 36 - EN36 (rw) */
    Ifx_UReg_32Bit EN37:1;            /**< \brief [5:5] Access Enable for Master TAG ID 37 - EN37 (rw) */
    Ifx_UReg_32Bit EN38:1;            /**< \brief [6:6] Access Enable for Master TAG ID 38 - EN38 (rw) */
    Ifx_UReg_32Bit EN39:1;            /**< \brief [7:7] Access Enable for Master TAG ID 39 - EN39 (rw) */
    Ifx_UReg_32Bit EN40:1;            /**< \brief [8:8] Access Enable for Master TAG ID 40 - EN40 (rw) */
    Ifx_UReg_32Bit EN41:1;            /**< \brief [9:9] Access Enable for Master TAG ID 41 - EN41 (rw) */
    Ifx_UReg_32Bit EN42:1;            /**< \brief [10:10] Access Enable for Master TAG ID 42 - EN42 (rw) */
    Ifx_UReg_32Bit EN43:1;            /**< \brief [11:11] Access Enable for Master TAG ID 43 - EN43 (rw) */
    Ifx_UReg_32Bit EN44:1;            /**< \brief [12:12] Access Enable for Master TAG ID 44 - EN44 (rw) */
    Ifx_UReg_32Bit EN45:1;            /**< \brief [13:13] Access Enable for Master TAG ID 45 - EN45 (rw) */
    Ifx_UReg_32Bit EN46:1;            /**< \brief [14:14] Access Enable for Master TAG ID 46 - EN46 (rw) */
    Ifx_UReg_32Bit EN47:1;            /**< \brief [15:15] Access Enable for Master TAG ID 47 - EN47 (rw) */
    Ifx_UReg_32Bit EN48:1;            /**< \brief [16:16] Access Enable for Master TAG ID 48 - EN48 (rw) */
    Ifx_UReg_32Bit EN49:1;            /**< \brief [17:17] Access Enable for Master TAG ID 49 - EN49 (rw) */
    Ifx_UReg_32Bit EN50:1;            /**< \brief [18:18] Access Enable for Master TAG ID 50 - EN50 (rw) */
    Ifx_UReg_32Bit EN51:1;            /**< \brief [19:19] Access Enable for Master TAG ID 51 - EN51 (rw) */
    Ifx_UReg_32Bit EN52:1;            /**< \brief [20:20] Access Enable for Master TAG ID 52 - EN52 (rw) */
    Ifx_UReg_32Bit EN53:1;            /**< \brief [21:21] Access Enable for Master TAG ID 53 - EN53 (rw) */
    Ifx_UReg_32Bit EN54:1;            /**< \brief [22:22] Access Enable for Master TAG ID 54 - EN54 (rw) */
    Ifx_UReg_32Bit EN55:1;            /**< \brief [23:23] Access Enable for Master TAG ID 55 - EN55 (rw) */
    Ifx_UReg_32Bit EN56:1;            /**< \brief [24:24] Access Enable for Master TAG ID 56 - EN56 (rw) */
    Ifx_UReg_32Bit EN57:1;            /**< \brief [25:25] Access Enable for Master TAG ID 57 - EN57 (rw) */
    Ifx_UReg_32Bit EN58:1;            /**< \brief [26:26] Access Enable for Master TAG ID 58 - EN58 (rw) */
    Ifx_UReg_32Bit EN59:1;            /**< \brief [27:27] Access Enable for Master TAG ID 59 - EN59 (rw) */
    Ifx_UReg_32Bit EN60:1;            /**< \brief [28:28] Access Enable for Master TAG ID 60 - EN60 (rw) */
    Ifx_UReg_32Bit EN61:1;            /**< \brief [29:29] Access Enable for Master TAG ID 61 - EN61 (rw) */
    Ifx_UReg_32Bit EN62:1;            /**< \brief [30:30] Access Enable for Master TAG ID 62 - EN62 (rw) */
    Ifx_UReg_32Bit EN63:1;            /**< \brief [31:31] Access Enable for Master TAG ID 63 - EN63 (rw) */
} Ifx_EMEM_MPU_ACCEN1_Bits;

/** \brief EMEM Module Clock Control Register */
typedef struct _Ifx_EMEM_MPU_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Module Disable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Module Disable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_EMEM_MPU_CLC_Bits;

/** \brief EMEM Module Memory Control Register */
typedef struct _Ifx_EMEM_MPU_MEMCON_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit INTERR:1;          /**< \brief [2:2] Internal ECC Error - INTERR (rwh) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit RMWERR:1;          /**< \brief [4:4] Internal Read Modify Write Error - RMWERR (rwh) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit DATAERR:1;         /**< \brief [6:6] SRI Data Phase ECC Error - DATAERR (rwh) */
    Ifx_UReg_32Bit ADDERR:1;          /**< \brief [7:7] SRI Address Phase ECC Error - ADDERR (rwh) */
    Ifx_UReg_32Bit PMIC:1;            /**< \brief [8:8] Protection Bit for Memory Integrity Control Bit - PMIC (w) */
    Ifx_UReg_32Bit ERRDIS:1;          /**< \brief [9:9] ECC Error Disable - ERRDIS (rw) */
    Ifx_UReg_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_EMEM_MPU_MEMCON_Bits;

/** \brief EMEM Module ID Register */
typedef struct _Ifx_EMEM_MPU_MODID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number - MOD_REV (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value - MOD_NUMBER (r) */
} Ifx_EMEM_MPU_MODID_Bits;

/** \brief EMEM Module Region i Read Access Enable Register 0 */
typedef struct _Ifx_EMEM_MPU_RGNACCEN_RGNACCENRA_Bits
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
} Ifx_EMEM_MPU_RGNACCEN_RGNACCENRA_Bits;

/** \brief EMEM Module Region i Read Access Enable Register 1 */
typedef struct _Ifx_EMEM_MPU_RGNACCEN_RGNACCENRB_Bits
{
    Ifx_UReg_32Bit EN32:1;            /**< \brief [0:0] Access Enable for Master TAG ID 32 - EN32 (rw) */
    Ifx_UReg_32Bit EN33:1;            /**< \brief [1:1] Access Enable for Master TAG ID 33 - EN33 (rw) */
    Ifx_UReg_32Bit EN34:1;            /**< \brief [2:2] Access Enable for Master TAG ID 34 - EN34 (rw) */
    Ifx_UReg_32Bit EN35:1;            /**< \brief [3:3] Access Enable for Master TAG ID 35 - EN35 (rw) */
    Ifx_UReg_32Bit EN36:1;            /**< \brief [4:4] Access Enable for Master TAG ID 36 - EN36 (rw) */
    Ifx_UReg_32Bit EN37:1;            /**< \brief [5:5] Access Enable for Master TAG ID 37 - EN37 (rw) */
    Ifx_UReg_32Bit EN38:1;            /**< \brief [6:6] Access Enable for Master TAG ID 38 - EN38 (rw) */
    Ifx_UReg_32Bit EN39:1;            /**< \brief [7:7] Access Enable for Master TAG ID 39 - EN39 (rw) */
    Ifx_UReg_32Bit EN40:1;            /**< \brief [8:8] Access Enable for Master TAG ID 40 - EN40 (rw) */
    Ifx_UReg_32Bit EN41:1;            /**< \brief [9:9] Access Enable for Master TAG ID 41 - EN41 (rw) */
    Ifx_UReg_32Bit EN42:1;            /**< \brief [10:10] Access Enable for Master TAG ID 42 - EN42 (rw) */
    Ifx_UReg_32Bit EN43:1;            /**< \brief [11:11] Access Enable for Master TAG ID 43 - EN43 (rw) */
    Ifx_UReg_32Bit EN44:1;            /**< \brief [12:12] Access Enable for Master TAG ID 44 - EN44 (rw) */
    Ifx_UReg_32Bit EN45:1;            /**< \brief [13:13] Access Enable for Master TAG ID 45 - EN45 (rw) */
    Ifx_UReg_32Bit EN46:1;            /**< \brief [14:14] Access Enable for Master TAG ID 46 - EN46 (rw) */
    Ifx_UReg_32Bit EN47:1;            /**< \brief [15:15] Access Enable for Master TAG ID 47 - EN47 (rw) */
    Ifx_UReg_32Bit EN48:1;            /**< \brief [16:16] Access Enable for Master TAG ID 48 - EN48 (rw) */
    Ifx_UReg_32Bit EN49:1;            /**< \brief [17:17] Access Enable for Master TAG ID 49 - EN49 (rw) */
    Ifx_UReg_32Bit EN50:1;            /**< \brief [18:18] Access Enable for Master TAG ID 50 - EN50 (rw) */
    Ifx_UReg_32Bit EN51:1;            /**< \brief [19:19] Access Enable for Master TAG ID 51 - EN51 (rw) */
    Ifx_UReg_32Bit EN52:1;            /**< \brief [20:20] Access Enable for Master TAG ID 52 - EN52 (rw) */
    Ifx_UReg_32Bit EN53:1;            /**< \brief [21:21] Access Enable for Master TAG ID 53 - EN53 (rw) */
    Ifx_UReg_32Bit EN54:1;            /**< \brief [22:22] Access Enable for Master TAG ID 54 - EN54 (rw) */
    Ifx_UReg_32Bit EN55:1;            /**< \brief [23:23] Access Enable for Master TAG ID 55 - EN55 (rw) */
    Ifx_UReg_32Bit EN56:1;            /**< \brief [24:24] Access Enable for Master TAG ID 56 - EN56 (rw) */
    Ifx_UReg_32Bit EN57:1;            /**< \brief [25:25] Access Enable for Master TAG ID 57 - EN57 (rw) */
    Ifx_UReg_32Bit EN58:1;            /**< \brief [26:26] Access Enable for Master TAG ID 58 - EN58 (rw) */
    Ifx_UReg_32Bit EN59:1;            /**< \brief [27:27] Access Enable for Master TAG ID 59 - EN59 (rw) */
    Ifx_UReg_32Bit EN60:1;            /**< \brief [28:28] Access Enable for Master TAG ID 60 - EN60 (rw) */
    Ifx_UReg_32Bit EN61:1;            /**< \brief [29:29] Access Enable for Master TAG ID 61 - EN61 (rw) */
    Ifx_UReg_32Bit EN62:1;            /**< \brief [30:30] Access Enable for Master TAG ID 62 - EN62 (rw) */
    Ifx_UReg_32Bit EN63:1;            /**< \brief [31:31] Access Enable for Master TAG ID 63 - EN63 (rw) */
} Ifx_EMEM_MPU_RGNACCEN_RGNACCENRB_Bits;

/** \brief EMEM Module Region i Write Access Enable Register 0 */
typedef struct _Ifx_EMEM_MPU_RGNWRN_RGNACCENWA_Bits
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
} Ifx_EMEM_MPU_RGNWRN_RGNACCENWA_Bits;

/** \brief EMEM Module Region i Write Access Enable Register 1 */
typedef struct _Ifx_EMEM_MPU_RGNWRN_RGNACCENWB_Bits
{
    Ifx_UReg_32Bit EN32:1;            /**< \brief [0:0] Access Enable for Master TAG ID 32 - EN32 (rw) */
    Ifx_UReg_32Bit EN33:1;            /**< \brief [1:1] Access Enable for Master TAG ID 33 - EN33 (rw) */
    Ifx_UReg_32Bit EN34:1;            /**< \brief [2:2] Access Enable for Master TAG ID 34 - EN34 (rw) */
    Ifx_UReg_32Bit EN35:1;            /**< \brief [3:3] Access Enable for Master TAG ID 35 - EN35 (rw) */
    Ifx_UReg_32Bit EN36:1;            /**< \brief [4:4] Access Enable for Master TAG ID 36 - EN36 (rw) */
    Ifx_UReg_32Bit EN37:1;            /**< \brief [5:5] Access Enable for Master TAG ID 37 - EN37 (rw) */
    Ifx_UReg_32Bit EN38:1;            /**< \brief [6:6] Access Enable for Master TAG ID 38 - EN38 (rw) */
    Ifx_UReg_32Bit EN39:1;            /**< \brief [7:7] Access Enable for Master TAG ID 39 - EN39 (rw) */
    Ifx_UReg_32Bit EN40:1;            /**< \brief [8:8] Access Enable for Master TAG ID 40 - EN40 (rw) */
    Ifx_UReg_32Bit EN41:1;            /**< \brief [9:9] Access Enable for Master TAG ID 41 - EN41 (rw) */
    Ifx_UReg_32Bit EN42:1;            /**< \brief [10:10] Access Enable for Master TAG ID 42 - EN42 (rw) */
    Ifx_UReg_32Bit EN43:1;            /**< \brief [11:11] Access Enable for Master TAG ID 43 - EN43 (rw) */
    Ifx_UReg_32Bit EN44:1;            /**< \brief [12:12] Access Enable for Master TAG ID 44 - EN44 (rw) */
    Ifx_UReg_32Bit EN45:1;            /**< \brief [13:13] Access Enable for Master TAG ID 45 - EN45 (rw) */
    Ifx_UReg_32Bit EN46:1;            /**< \brief [14:14] Access Enable for Master TAG ID 46 - EN46 (rw) */
    Ifx_UReg_32Bit EN47:1;            /**< \brief [15:15] Access Enable for Master TAG ID 47 - EN47 (rw) */
    Ifx_UReg_32Bit EN48:1;            /**< \brief [16:16] Access Enable for Master TAG ID 48 - EN48 (rw) */
    Ifx_UReg_32Bit EN49:1;            /**< \brief [17:17] Access Enable for Master TAG ID 49 - EN49 (rw) */
    Ifx_UReg_32Bit EN50:1;            /**< \brief [18:18] Access Enable for Master TAG ID 50 - EN50 (rw) */
    Ifx_UReg_32Bit EN51:1;            /**< \brief [19:19] Access Enable for Master TAG ID 51 - EN51 (rw) */
    Ifx_UReg_32Bit EN52:1;            /**< \brief [20:20] Access Enable for Master TAG ID 52 - EN52 (rw) */
    Ifx_UReg_32Bit EN53:1;            /**< \brief [21:21] Access Enable for Master TAG ID 53 - EN53 (rw) */
    Ifx_UReg_32Bit EN54:1;            /**< \brief [22:22] Access Enable for Master TAG ID 54 - EN54 (rw) */
    Ifx_UReg_32Bit EN55:1;            /**< \brief [23:23] Access Enable for Master TAG ID 55 - EN55 (rw) */
    Ifx_UReg_32Bit EN56:1;            /**< \brief [24:24] Access Enable for Master TAG ID 56 - EN56 (rw) */
    Ifx_UReg_32Bit EN57:1;            /**< \brief [25:25] Access Enable for Master TAG ID 57 - EN57 (rw) */
    Ifx_UReg_32Bit EN58:1;            /**< \brief [26:26] Access Enable for Master TAG ID 58 - EN58 (rw) */
    Ifx_UReg_32Bit EN59:1;            /**< \brief [27:27] Access Enable for Master TAG ID 59 - EN59 (rw) */
    Ifx_UReg_32Bit EN60:1;            /**< \brief [28:28] Access Enable for Master TAG ID 60 - EN60 (rw) */
    Ifx_UReg_32Bit EN61:1;            /**< \brief [29:29] Access Enable for Master TAG ID 61 - EN61 (rw) */
    Ifx_UReg_32Bit EN62:1;            /**< \brief [30:30] Access Enable for Master TAG ID 62 - EN62 (rw) */
    Ifx_UReg_32Bit EN63:1;            /**< \brief [31:31] Access Enable for Master TAG ID 63 - EN63 (rw) */
} Ifx_EMEM_MPU_RGNWRN_RGNACCENWB_Bits;

/** \brief EMEM Module Region i Lower Address Register */
typedef struct _Ifx_EMEM_MPU_RGNWRN_RGNLA_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit ADDR:27;           /**< \brief [31:5] Region Lower Address - ADDR (rw) */
} Ifx_EMEM_MPU_RGNWRN_RGNLA_Bits;

/** \brief EMEM Module Region i Upper Address Register */
typedef struct _Ifx_EMEM_MPU_RGNWRN_RGNUA_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit ADDR:27;           /**< \brief [31:5] Region Upper Address - ADDR (rw) */
} Ifx_EMEM_MPU_RGNWRN_RGNUA_Bits;

/** \brief EMEM Module Safety Control Register */
typedef struct _Ifx_EMEM_MPU_SCTRL_Bits
{
    Ifx_UReg_32Bit GED:1;             /**< \brief [0:0] Generate Error in ECC for Data Protection - GED (w) */
    Ifx_UReg_32Bit GEC:1;             /**< \brief [1:1] Generate Error in ECC for Error Correction - GEC (w) */
    Ifx_UReg_32Bit reserved_2:6;      /**< \brief [7:2] \internal Reserved */
    Ifx_UReg_32Bit LSEN:2;            /**< \brief [9:8] Lockstep Enable (rw) */
    Ifx_UReg_32Bit LSTST:2;           /**< \brief [11:10] Lockstep Test (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit LSSTAT:2;          /**< \brief [17:16] Lockstep Status (rh) */
    Ifx_UReg_32Bit reserved_18:14;    /**< \brief [31:18] \internal Reserved */
} Ifx_EMEM_MPU_SCTRL_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_emem_mpu_Registers_union
 * \{   */
/** \brief EMEM Module Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_ACCEN0_Bits B;       /**< \brief Bitfield access */
} Ifx_EMEM_MPU_ACCEN0;

/** \brief EMEM Module Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_ACCEN1_Bits B;       /**< \brief Bitfield access */
} Ifx_EMEM_MPU_ACCEN1;

/** \brief EMEM Module Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_CLC_Bits B;          /**< \brief Bitfield access */
} Ifx_EMEM_MPU_CLC;

/** \brief EMEM Module Memory Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_MEMCON_Bits B;       /**< \brief Bitfield access */
} Ifx_EMEM_MPU_MEMCON;

/** \brief EMEM Module ID Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_MODID_Bits B;        /**< \brief Bitfield access */
} Ifx_EMEM_MPU_MODID;

/** \brief EMEM Module Region i Read Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_RGNACCEN_RGNACCENRA_Bits B;    /**< \brief Bitfield access */
} Ifx_EMEM_MPU_RGNACCEN_RGNACCENRA;

/** \brief EMEM Module Region i Read Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_RGNACCEN_RGNACCENRB_Bits B;    /**< \brief Bitfield access */
} Ifx_EMEM_MPU_RGNACCEN_RGNACCENRB;

/** \brief EMEM Module Region i Write Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_RGNWRN_RGNACCENWA_Bits B;    /**< \brief Bitfield access */
} Ifx_EMEM_MPU_RGNWRN_RGNACCENWA;

/** \brief EMEM Module Region i Write Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_RGNWRN_RGNACCENWB_Bits B;    /**< \brief Bitfield access */
} Ifx_EMEM_MPU_RGNWRN_RGNACCENWB;

/** \brief EMEM Module Region i Lower Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_RGNWRN_RGNLA_Bits B;    /**< \brief Bitfield access */
} Ifx_EMEM_MPU_RGNWRN_RGNLA;

/** \brief EMEM Module Region i Upper Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_RGNWRN_RGNUA_Bits B;    /**< \brief Bitfield access */
} Ifx_EMEM_MPU_RGNWRN_RGNUA;

/** \brief EMEM Module Safety Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_EMEM_MPU_SCTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_EMEM_MPU_SCTRL;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Emem_mpu_RGNWRn_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief RGNWRN object */
typedef volatile struct _Ifx_EMEM_MPU_RGNWRN
{
       Ifx_EMEM_MPU_RGNWRN_RGNLA           RGNLA;                  /**< \brief 0, EMEM Module Region i Lower Address Register*/
       Ifx_EMEM_MPU_RGNWRN_RGNUA           RGNUA;                  /**< \brief 4, EMEM Module Region i Upper Address Register*/
       Ifx_EMEM_MPU_RGNWRN_RGNACCENWA      RGNACCENWA;             /**< \brief 8, EMEM Module Region i Write Access Enable Register 0*/
       Ifx_EMEM_MPU_RGNWRN_RGNACCENWB      RGNACCENWB;             /**< \brief C, EMEM Module Region i Write Access Enable Register 1*/
} Ifx_EMEM_MPU_RGNWRN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Emem_mpu_RGNACCEN_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief RGNACCEN object */
typedef volatile struct _Ifx_EMEM_MPU_RGNACCEN
{
       Ifx_EMEM_MPU_RGNACCEN_RGNACCENRA    RGNACCENRA;             /**< \brief 0, EMEM Module Region i Read Access Enable Register 0*/
       Ifx_EMEM_MPU_RGNACCEN_RGNACCENRB    RGNACCENRB;             /**< \brief 4, EMEM Module Region i Read Access Enable Register 1*/
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, \internal Reserved */
} Ifx_EMEM_MPU_RGNACCEN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Emem_mpu_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief EMEM_MPU object */
typedef volatile struct _Ifx_EMEM_MPU
{
       Ifx_EMEM_MPU_CLC                    CLC;                    /**< \brief 0, EMEM Module Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_EMEM_MPU_MODID                  MODID;                  /**< \brief 8, EMEM Module ID Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_EMEM_MPU_ACCEN0                 ACCEN0;                 /**< \brief 10, EMEM Module Access Enable Register 0*/
       Ifx_EMEM_MPU_ACCEN1                 ACCEN1;                 /**< \brief 14, EMEM Module Access Enable Register 1*/
       Ifx_UReg_8Bit                       reserved_18[8];         /**< \brief 18, \internal Reserved */
       Ifx_EMEM_MPU_MEMCON                 MEMCON;                 /**< \brief 20, EMEM Module Memory Control Register*/
       Ifx_EMEM_MPU_SCTRL                  SCTRL;                  /**< \brief 24, EMEM Module Safety Control Register*/
       Ifx_UReg_8Bit                       reserved_28[40];        /**< \brief 28, \internal Reserved */
       Ifx_EMEM_MPU_RGNWRN                 RGNWRN[8];              /**< \brief 50, EMEM Module Region i Write Access Enable Register 1*/
       Ifx_UReg_8Bit                       reserved_D0[8];         /**< \brief D0, \internal Reserved */
       Ifx_EMEM_MPU_RGNACCEN               RGNACCEN[8];            /**< \brief D8, */
       Ifx_UReg_8Bit                       reserved_158[65192];    /**< \brief 158, \internal Reserved */
} Ifx_EMEM_MPU;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXEMEM_MPU_REGDEF_H */
