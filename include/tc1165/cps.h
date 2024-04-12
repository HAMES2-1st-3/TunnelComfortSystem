/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CPS" of TriCore TC1165 (6 SFRs) */

#include <tc1165/cps/addr.h>

#include <tc1165/cps/masks.h>
#include <tc1165/cps/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1165/cps/types.h>
#include <tc1165/cps/sharetypes.h>

#ifndef _HAVE_TRICORE_CPS_H_
#define _HAVE_TRICORE_CPS_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (CPS_ID, CPS_ID_t, CPS_ID_ADDR);        /* "CPS Module Identification Register" */
SFR_NOABS (CPU_SBSRC, CPU_SBSRC_t, CPU_SBSRC_ADDR); /* "Software Break Service Request Control Register" */
SFR_NOABS (CPU_SRC0, CPU_SRCm_t, CPU_SRC0_ADDR);  /* "CPU Service Request Control Register 0" */
SFR_NOABS (CPU_SRC1, CPU_SRCm_t, CPU_SRC1_ADDR);  /* "CPU Service Request Control Register 1" */
SFR_NOABS (CPU_SRC2, CPU_SRCm_t, CPU_SRC2_ADDR);  /* "CPU Service Request Control Register 2" */
SFR_NOABS (CPU_SRC3, CPU_SRCm_t, CPU_SRC3_ADDR);  /* "CPU Service Request Control Register 3" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CPS_H_ (block "CPS") */

