/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1166_PORT4_STRUCTS_H_
#define _TC1166_PORT4_STRUCTS_H_
/*
   TriCore TC1166
   Some struct definitions for conveniance
*/

#include <tc1166/p4.h>
#ifndef P4_BASE
#define P4_BASE 0xf0001000
#endif /* P4_BASE */


typedef struct
{
    P4_OUT_t        OUT;                /* 0x0 */
    P4_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    unsigned int    reserved4[0x4];     /* 0x14 */
    P4_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved6[0x6];     /* 0x28 */
    P4_PDR_t        PDR;                /* 0x40 */
    unsigned int    reserved8[0x3];     /* 0x44 */
    P4_ESR_t        ESR;                /* 0x50 */
} PORT4_t;

#endif /* _TC1166_PORT4_STRUCTS_H_ */