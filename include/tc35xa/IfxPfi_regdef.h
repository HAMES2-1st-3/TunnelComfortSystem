/**
 * \file IfxPfi_regdef.h
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
 * \defgroup IfxSfr_Pfi_Registers Pfi Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Pfi_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Pfi_Registers
 * 
 * \defgroup IfxSfr_Pfi_Registers_union Register unions
 * \ingroup IfxSfr_Pfi_Registers
 * 
 * \defgroup IfxSfr_Pfi_Registers_struct Memory map
 * \ingroup IfxSfr_Pfi_Registers
 */
#ifndef IFXPFI_REGDEF_H
#define IFXPFI_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Pfi_Registers_Bitfields
 * \{  */
/** \brief DBAB Record ${x} */
typedef struct _Ifx_PFI_DBAB_DBABRECORD_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit ADDR:19;           /**< \brief [23:5] Address - ADDR (rh) */
    Ifx_UReg_32Bit reserved_24:3;     /**< \brief [26:24] \internal Reserved */
    Ifx_UReg_32Bit ECMK:1;            /**< \brief [27:27] Erase Counter Marker - ECMK (rh) */
    Ifx_UReg_32Bit RES:3;             /**< \brief [30:28] Reserved - RES (r) */
    Ifx_UReg_32Bit VLD:1;             /**< \brief [31:31] Valid - VLD (rh) */
} Ifx_PFI_DBAB_DBABRECORD_Bits;

/** \brief ECC Read Register */
typedef struct _Ifx_PFI_ECCR_Bits
{
    Ifx_UReg_32Bit RCODE:22;          /**< \brief [21:0] Error Correction Read Code - RCODE (rh) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PFI_ECCR_Bits;

/** \brief ECC Status Register */
typedef struct _Ifx_PFI_ECCS_Bits
{
    Ifx_UReg_32Bit ERR1:1;            /**< \brief [0:0] Read Access Single Bit ECC Error - ERR1 (rh) */
    Ifx_UReg_32Bit ERR2:1;            /**< \brief [1:1] Read Access Double Bit ECC Error - ERR2 (rh) */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit ERRM:1;            /**< \brief [3:3] Read Access Multi-bit ECC Error - ERRM (rh) */
    Ifx_UReg_32Bit ERRA:1;            /**< \brief [4:4] Read Access ECC Error Within the Address - ERRA (rh) */
    Ifx_UReg_32Bit ALL0:1;            /**< \brief [5:5] Read Access All Zeros - ALL0 (rh) */
    Ifx_UReg_32Bit ALL1:1;            /**< \brief [6:6] All Ones - ALL1 (rh) */
    Ifx_UReg_32Bit ERRANY:1;          /**< \brief [7:7] Any Read Access ECC Error - ERRANY (rh) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit AER1:1;            /**< \brief [16:16] Accumulated Single Bit ECC Errors - AER1 (rh) */
    Ifx_UReg_32Bit AER2:1;            /**< \brief [17:17] Accumulated Double Bit ECC Errors - AER2 (rh) */
    Ifx_UReg_32Bit reserved_18:1;     /**< \brief [18:18] \internal Reserved */
    Ifx_UReg_32Bit AERM:1;            /**< \brief [19:19] Accumulated Multi-bit ECC Errors - AERM (rh) */
    Ifx_UReg_32Bit ARRA:1;            /**< \brief [20:20] Accumulated ECC Error Within the Address - ARRA (rh) */
    Ifx_UReg_32Bit AAL0:1;            /**< \brief [21:21] Accumulated All Zeros - AAL0 (rh) */
    Ifx_UReg_32Bit AAL1:1;            /**< \brief [22:22] Accumulated All Ones - AAL1 (rh) */
    Ifx_UReg_32Bit AERANY:1;          /**< \brief [23:23] Accumulated Any Read Access ECC Error - AERANY (rh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PFI_ECCS_Bits;

/** \brief MBAB Record 0 */
typedef struct _Ifx_PFI_MBAB_MBABRECORD_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit ADDR:19;           /**< \brief [23:5] Address - ADDR (rh) */
    Ifx_UReg_32Bit reserved_24:3;     /**< \brief [26:24] \internal Reserved */
    Ifx_UReg_32Bit ECMK:1;            /**< \brief [27:27] Erase Counter Marker - ECMK (rh) */
    Ifx_UReg_32Bit RES:3;             /**< \brief [30:28] Reserved - RES (r) */
    Ifx_UReg_32Bit VLD:1;             /**< \brief [31:31] Valid - VLD (rh) */
} Ifx_PFI_MBAB_MBABRECORD_Bits;

/** \brief SBAB Record ${x} */
typedef struct _Ifx_PFI_SBAB_SBABRECORD_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit ADDR:19;           /**< \brief [23:5] Address - ADDR (rh) */
    Ifx_UReg_32Bit reserved_24:3;     /**< \brief [26:24] \internal Reserved */
    Ifx_UReg_32Bit ECMK:1;            /**< \brief [27:27] Erase Counter Marker - ECMK (rh) */
    Ifx_UReg_32Bit RES:3;             /**< \brief [30:28] Reserved - RES (r) */
    Ifx_UReg_32Bit VLD:1;             /**< \brief [31:31] Valid - VLD (rh) */
} Ifx_PFI_SBAB_SBABRECORD_Bits;

/** \brief ZBAB Record ${x} */
typedef struct _Ifx_PFI_ZBAB_ZBABRECORD_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit ADDR:19;           /**< \brief [23:5] Address - ADDR (rh) */
    Ifx_UReg_32Bit reserved_24:3;     /**< \brief [26:24] \internal Reserved */
    Ifx_UReg_32Bit ECMK:1;            /**< \brief [27:27] Erase Counter Marker - ECMK (rh) */
    Ifx_UReg_32Bit RES:3;             /**< \brief [30:28] Reserved - RES (r) */
    Ifx_UReg_32Bit VLD:1;             /**< \brief [31:31] Valid - VLD (rh) */
} Ifx_PFI_ZBAB_ZBABRECORD_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_pfi_Registers_union
 * \{   */
/** \brief DBAB Record ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PFI_DBAB_DBABRECORD_Bits B;    /**< \brief Bitfield access */
} Ifx_PFI_DBAB_DBABRECORD;

/** \brief ECC Read Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PFI_ECCR_Bits B;              /**< \brief Bitfield access */
} Ifx_PFI_ECCR;

/** \brief ECC Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PFI_ECCS_Bits B;              /**< \brief Bitfield access */
} Ifx_PFI_ECCS;

/** \brief MBAB Record 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PFI_MBAB_MBABRECORD_Bits B;    /**< \brief Bitfield access */
} Ifx_PFI_MBAB_MBABRECORD;

/** \brief SBAB Record ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PFI_SBAB_SBABRECORD_Bits B;    /**< \brief Bitfield access */
} Ifx_PFI_SBAB_SBABRECORD;

/** \brief ZBAB Record ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PFI_ZBAB_ZBABRECORD_Bits B;    /**< \brief Bitfield access */
} Ifx_PFI_ZBAB_ZBABRECORD;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_SBAB_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SBAB object */
typedef volatile struct _Ifx_PFI_SBAB
{
       Ifx_PFI_SBAB_SBABRECORD             SBABRECORD;             /**< \brief 0, SBAB Record ${x}*/
       Ifx_UReg_8Bit                       reserved_4[28];         /**< \brief 4, \internal Reserved */
} Ifx_PFI_SBAB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_DBAB_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief DBAB object */
typedef volatile struct _Ifx_PFI_DBAB
{
       Ifx_PFI_DBAB_DBABRECORD             DBABRECORD;             /**< \brief 0, DBAB Record ${x}*/
       Ifx_UReg_8Bit                       reserved_4[28];         /**< \brief 4, \internal Reserved */
} Ifx_PFI_DBAB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_MBAB_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MBAB object */
typedef volatile struct _Ifx_PFI_MBAB
{
       Ifx_PFI_MBAB_MBABRECORD             MBABRECORD;             /**< \brief 0, MBAB Record 0*/
} Ifx_PFI_MBAB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_ZBAB_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ZBAB object */
typedef volatile struct _Ifx_PFI_ZBAB
{
       Ifx_PFI_ZBAB_ZBABRECORD             ZBABRECORD;             /**< \brief 0, ZBAB Record ${x}*/
       Ifx_UReg_8Bit                       reserved_4[28];         /**< \brief 4, \internal Reserved */
} Ifx_PFI_ZBAB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxSfr_Pfi_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief PFI object */
typedef volatile struct _Ifx_PFI
{
       Ifx_PFI_ECCR                        ECCR;                   /**< \brief 0, ECC Read Register*/
       Ifx_UReg_8Bit                       reserved_4[28];         /**< \brief 4, \internal Reserved */
       Ifx_PFI_ECCS                        ECCS;                   /**< \brief 20, ECC Status Register*/
       Ifx_UReg_8Bit                       reserved_24[8156];      /**< \brief 24, \internal Reserved */
       Ifx_PFI_SBAB                        SBAB[17];               /**< \brief 2000, */
       Ifx_UReg_8Bit                       reserved_2220[7648];    /**< \brief 2220, \internal Reserved */
       Ifx_PFI_DBAB                        DBAB[2];                /**< \brief 4000, */
       Ifx_UReg_8Bit                       reserved_4040[16320];    /**< \brief 4040, \internal Reserved */
       Ifx_PFI_MBAB                        MBAB[1];                /**< \brief 8000, MBAB Record 0*/
       Ifx_UReg_8Bit                       reserved_8004[16380];    /**< \brief 8004, \internal Reserved */
       Ifx_PFI_ZBAB                        ZBAB[4];                /**< \brief C000, */
       Ifx_UReg_8Bit                       reserved_C080[475008];    /**< \brief C080, \internal Reserved */
} Ifx_PFI;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXPFI_REGDEF_H */
