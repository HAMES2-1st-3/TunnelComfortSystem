/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P5 LL" of TriCore TC1762 (9 SFRs) */

#include <tc1762/p5/addr.h>

#include <tc1762/p5/masks.h>
#include <tc1762/p0_p1_p2_p3_p4_p5/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1762/p5/types.h>
#include <tc1762/p0_p1_p2_p3_p4_p5/sharetypes.h>

#ifndef _HAVE_TRICORE_P5_H_
#define _HAVE_TRICORE_P5_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P5_ESR, Pn_ESR_t, P5_ESR_ADDR);          /* "Port 5 Emergency Stop Register" */
SFR_ABS (P5_IN, Pn_IN_t, P5_IN_ADDR);             /* "Port 5 Input Register" */
SFR_ABS (P5_IOCR0, Pn_IOCRm_t, P5_IOCR0_ADDR);    /* "Input/Output Control Register 0" */
SFR_ABS (P5_IOCR12, Pn_IOCRm_t, P5_IOCR12_ADDR);  /* "Input/Output Control Register 12" */
SFR_ABS (P5_IOCR4, Pn_IOCRm_t, P5_IOCR4_ADDR);    /* "Input/Output Control Register 4" */
SFR_ABS (P5_IOCR8, Pn_IOCRm_t, P5_IOCR8_ADDR);    /* "Input/Output Control Register 8" */
SFR_ABS (P5_OMR, Pn_OMR_t, P5_OMR_ADDR);          /* "Port 5 Output Modification Register" */
SFR_ABS (P5_OUT, Pn_OUT_t, P5_OUT_ADDR);          /* "Output Register" */
SFR_ABS (P5_PDR, P5_PDR_t, P5_PDR_ADDR);          /* "Port 5 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P5_H_ (block "P5 LL") */

