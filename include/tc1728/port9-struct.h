/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1728_PORT9_STRUCTS_H_
#define _TC1728_PORT9_STRUCTS_H_
/*
   TriCore TC1728
   Some struct definitions for conveniance
*/

#include <tc1728/p9.h>
#ifndef P9_BASE
#define P9_BASE 0xf0001500
#endif /* P9_BASE */


typedef struct
{
    Pn_OUT_t        OUT;                /* 0x0 */
    Pn_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    Pn_IOCRm_t      IOCR8;              /* 0x18 */
    unsigned int    reserved6[0x2];     /* 0x1c */
    Pn_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved8[0x6];     /* 0x28 */
    P9_PDR0_t       PDR0;               /* 0x40 */
    Pn_PDRm_t       PDR1;               /* 0x44 */
    unsigned int    reserved11[0x2];    /* 0x48 */
    Pn_ESR_t        ESR;                /* 0x50 */
} PORT9_t;

#endif /* _TC1728_PORT9_STRUCTS_H_ */
