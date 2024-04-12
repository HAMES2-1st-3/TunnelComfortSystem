/* (c) HighTec EDV-Systeme GmbH */

/* block "P9" of TriCore TC1798 (10 SFRs) */

#include <tc1798/p9/addr.h>

#include <tc1798/p9/masks.h>
#include <tc1798/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/p9/types.h>
#include <tc1798/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P9_H_
#define _HAVE_TRICORE_P9_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P9_ESR, Pn_ESR_t, P9_ESR_ADDR);          /* "Port 9 Emergency Stop Register" */
SFR_ABS (P9_IN, Pn_IN_t, P9_IN_ADDR);             /* "Port 9 Input Register" */
SFR_ABS (P9_IOCR0, Pn_IOCRm_t, P9_IOCR0_ADDR);    /* "Port 9 Input/Output Control Register 0" */
SFR_ABS (P9_IOCR12, P9_IOCR12_t, P9_IOCR12_ADDR); /* "Port 9 Input/Output Control Register 12" */
SFR_ABS (P9_IOCR4, Pn_IOCRm_t, P9_IOCR4_ADDR);    /* "Port 9 Input/Output Control Register 4" */
SFR_ABS (P9_IOCR8, Pn_IOCRm_t, P9_IOCR8_ADDR);    /* "Port 9 Input/Output Control Register 8" */
SFR_ABS (P9_OMR, Pn_OMR_t, P9_OMR_ADDR);          /* "Port 9 Output Modification Register" */
SFR_ABS (P9_OUT, Pn_OUT_t, P9_OUT_ADDR);          /* "Port 9 Output Register" */
SFR_ABS (P9_PDR0, Pn_PDRm_t, P9_PDR0_ADDR);       /* "Port 9 Pad Driver Mode 0 Register" */
SFR_ABS (P9_PDR1, P9_PDR1_t, P9_PDR1_ADDR);       /* "Port 9 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P9_H_ (block "P9") */

