/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1728_PORT1_STRUCTS_H_
#define _TC1728_PORT1_STRUCTS_H_
/*
   TriCore TC1728
   Some struct definitions for conveniance
*/

#include <tc1728/p1.h>
#ifndef P1_BASE
#define P1_BASE 0xf0000d00
#endif /* P1_BASE */


typedef struct
{
    Pn_OUT_t        OUT;                /* 0x0 */
    Pn_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    Pn_IOCRm_t      IOCR8;              /* 0x18 */
    Pn_IOCRm_t      IOCR12;             /* 0x1c */
    unsigned int    reserved7[0x1];     /* 0x20 */
    Pn_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved9[0x6];     /* 0x28 */
    P1_PDR0_t       PDR0;               /* 0x40 */
    P1_PDR1_t       PDR1;               /* 0x44 */
    unsigned int    reserved12[0x2];    /* 0x48 */
    Pn_ESR_t        ESR;                /* 0x50 */
} PORT1_t;

#endif /* _TC1728_PORT1_STRUCTS_H_ */
