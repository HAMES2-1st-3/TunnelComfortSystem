/* (c) HighTec EDV-Systeme GmbH */

/* block "PMU" of TriCore TC1728 (13 SFRs) */

#include <tc1728/pmu/addr.h>

#include <tc1728/pmu/masks.h>
#include <tc1728/pmu/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1728/pmu/types.h>
#include <tc1728/pmu/sharetypes.h>

#ifndef _HAVE_TRICORE_PMU_H_
#define _HAVE_TRICORE_PMU_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (FLASH0_COMM0, FLASH0_COMMm_t, FLASH0_COMM0_ADDR); /* "FSI Communication 0" */
SFR_NOABS (FLASH0_COMM1, FLASH0_COMMm_t, FLASH0_COMM1_ADDR); /* "FSI Communication 1" */
SFR_NOABS (FLASH0_COMM2, FLASH0_COMMm_t, FLASH0_COMM2_ADDR); /* "FSI Communication 2" */
SFR_NOABS (FLASH0_FCON, FLASH0_FCON_t, FLASH0_FCON_ADDR); /* "Flash Configuration Register" */
SFR_NOABS (FLASH0_FSR, FLASH0_FSR_t, FLASH0_FSR_ADDR); /* "Flash Status Register" */
SFR_NOABS (FLASH0_ID, FLASH0_ID_t, FLASH0_ID_ADDR); /* "Flash Module Identification Register" */
SFR_NOABS (FLASH0_MARD, FLASH0_MARD_t, FLASH0_MARD_ADDR); /* "Margin Control Register DFLASH" */
SFR_NOABS (FLASH0_MARP, FLASH0_MARP_t, FLASH0_MARP_ADDR); /* "Margin Control Register PFLASH" */
SFR_NOABS (FLASH0_PROCON0, FLASH0_PROCON0_t, FLASH0_PROCON0_ADDR); /* "Flash Protection Configuration Register User 0" */
SFR_NOABS (FLASH0_PROCON1, FLASH0_PROCON1_t, FLASH0_PROCON1_ADDR); /* "Flash Protection Configuration Register User 1" */
SFR_NOABS (FLASH0_PROCON2, FLASH0_PROCON2_t, FLASH0_PROCON2_ADDR); /* "Flash Protection Configuration Register User 2" */
SFR_NOABS (PMU0_ID, PMU0_ID_t, PMU0_ID_ADDR);     /* "PMU0 Identification Register" */
SFR_NOABS (PMU0_OVRCON, PMU0_OVRCON_t, PMU0_OVRCON_ADDR); /* "Overlay RAM Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_PMU_H_ (block "PMU") */


