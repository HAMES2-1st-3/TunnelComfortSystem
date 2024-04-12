/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MCHK" of TriCore TC1762 (4 SFRs) */

#include <tc1762/mchk/addr.h>

#include <tc1762/mchk/masks.h>
#include <tc1762/mchk/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1762/mchk/types.h>
#include <tc1762/mchk/sharetypes.h>

#ifndef _HAVE_TRICORE_MCHK_H_
#define _HAVE_TRICORE_MCHK_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (MCHK_ID, MCHK_ID_t, MCHK_ID_ADDR);     /* "MCHK Module Identification Register" */
SFR_NOABS (MCHK_IR, MCHK_IR_t, MCHK_IR_ADDR);     /* "MCHK Memory Checker Input Register" */
SFR_NOABS (MCHK_RR, MCHK_RR_t, MCHK_RR_ADDR);     /* "Memory Checker Result Register" */
SFR_NOABS (MCHK_WR, MCHK_WR_t, MCHK_WR_ADDR);     /* "Write Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MCHK_H_ (block "MCHK") */

