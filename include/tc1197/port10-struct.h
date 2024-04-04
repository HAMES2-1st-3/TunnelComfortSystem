/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1197_PORT10_STRUCTS_H_
#define _TC1197_PORT10_STRUCTS_H_
/*
   TriCore TC1197
   Some struct definitions for conveniance
*/

#include <tc1197/p10.h>
#ifndef P10_BASE
#define P10_BASE 0xf0001600
#endif /* P10_BASE */


typedef struct
{
    Pn_OUT_t        OUT;                /* 0x0 */
    Pn_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    unsigned int    reserved5[0x3];     /* 0x18 */
    Pn_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved7[0x6];     /* 0x28 */
    P10_PDR_t       PDR;                /* 0x40 */
} PORT10_t;

#endif /* _TC1197_PORT10_STRUCTS_H_ */
