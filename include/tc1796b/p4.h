/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "Port4" of TriCore TC1796B (9 SFRs) */

#include <tc1796b/p4/addr.h>

#include <tc1796b/p4/masks.h>
#include <tc1796b/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/p4/types.h>
#include <tc1796b/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P4_H_
#define _HAVE_TRICORE_P4_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P4_ESR, Pn_ESR_t, P4_ESR_ADDR);          /* "Port 4 Emergency Stop Register" */
SFR_ABS (P4_IN, P4_IN_t, P4_IN_ADDR);             /* "Port 4 Input Register" */
SFR_ABS (P4_IOCR0, Pn_IOCRm_t, P4_IOCR0_ADDR);    /* "Port 4 Input/Output Control Register 0" */
SFR_ABS (P4_IOCR12, Pn_IOCRm_t, P4_IOCR12_ADDR);  /* "Port 4 Input/Output Control Register 12" */
SFR_ABS (P4_IOCR4, Pn_IOCRm_t, P4_IOCR4_ADDR);    /* "Port 4 Input/Output Control Register 4" */
SFR_ABS (P4_IOCR8, Pn_IOCRm_t, P4_IOCR8_ADDR);    /* "Port 4 Input/Output Control Register 8" */
SFR_ABS (P4_OMR, Pn_OMR_t, P4_OMR_ADDR);          /* "Port 4 Output Modification Register" */
SFR_ABS (P4_OUT, P4_OUT_t, P4_OUT_ADDR);          /* "Port 4 Output Register" */
SFR_ABS (P4_PDR, Pn_PDR_t, P4_PDR_ADDR);          /* "Port 4 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P4_H_ (block "Port4") */

