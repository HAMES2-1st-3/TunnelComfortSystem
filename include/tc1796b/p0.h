/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Port0" of TriCore TC1796B (8 SFRs) */

#include <tc1796b/p0/addr.h>

#include <tc1796b/p0/masks.h>
#include <tc1796b/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/p0/types.h>
#include <tc1796b/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P0_H_
#define _HAVE_TRICORE_P0_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P0_IN, P0_IN_t, P0_IN_ADDR);             /* "Port 0 Input Register" */
SFR_ABS (P0_IOCR0, Pn_IOCRm_t, P0_IOCR0_ADDR);    /* "Port 0 Input/Output Control Register 0" */
SFR_ABS (P0_IOCR12, Pn_IOCRm_t, P0_IOCR12_ADDR);  /* "Port 0 Input/Output Control Register 12" */
SFR_ABS (P0_IOCR4, Pn_IOCRm_t, P0_IOCR4_ADDR);    /* "Port 0 Input/Output Control Register 4" */
SFR_ABS (P0_IOCR8, Pn_IOCRm_t, P0_IOCR8_ADDR);    /* "Port 0 Input/Output Control Register 8" */
SFR_ABS (P0_OMR, Pn_OMR_t, P0_OMR_ADDR);          /* "Port 0 Output Modification Register" */
SFR_ABS (P0_OUT, P0_OUT_t, P0_OUT_ADDR);          /* "Port 0 Output Register" */
SFR_ABS (P0_PDR, Pn_PDR_t, P0_PDR_ADDR);          /* "Port 0 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P0_H_ (block "Port0") */

