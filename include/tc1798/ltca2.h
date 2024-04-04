/* (c) HighTec EDV-Systeme GmbH */

/* block "LTCA2" of TriCore TC1798 (152 SFRs) */

#include <tc1798/ltca2/addr.h>

#include <tc1798/ltca2/masks.h>
#include <tc1798/ltca2/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/ltca2/types.h>
#include <tc1798/ltca2/sharetypes.h>

#ifndef _HAVE_TRICORE_LTCA2_H_
#define _HAVE_TRICORE_LTCA2_H_

#include <tricore-abs-noabs.h>

SFR_ABS (LTCA2_ID, LTCA2_ID_t, LTCA2_ID_ADDR);    /* "LTCA2 Identification Register" */
SFR_ABS (LTCA2_LTCCTR00, LTCA2_LTCCTRm_t, LTCA2_LTCCTR00_ADDR); /* "Local Timer Cell Control Register 00" */
SFR_ABS (LTCA2_LTCCTR01, LTCA2_LTCCTRm_t, LTCA2_LTCCTR01_ADDR); /* "Local Timer Cell Control Register 01" */
SFR_ABS (LTCA2_LTCCTR02, LTCA2_LTCCTRm_t, LTCA2_LTCCTR02_ADDR); /* "Local Timer Cell Control Register 02" */
SFR_ABS (LTCA2_LTCCTR03, LTCA2_LTCCTRm_t, LTCA2_LTCCTR03_ADDR); /* "Local Timer Cell Control Register 03" */
SFR_ABS (LTCA2_LTCCTR04, LTCA2_LTCCTRm_t, LTCA2_LTCCTR04_ADDR); /* "Local Timer Cell Control Register 04" */
SFR_ABS (LTCA2_LTCCTR05, LTCA2_LTCCTRm_t, LTCA2_LTCCTR05_ADDR); /* "Local Timer Cell Control Register 05" */
SFR_ABS (LTCA2_LTCCTR06, LTCA2_LTCCTRm_t, LTCA2_LTCCTR06_ADDR); /* "Local Timer Cell Control Register 06" */
SFR_ABS (LTCA2_LTCCTR07, LTCA2_LTCCTRm_t, LTCA2_LTCCTR07_ADDR); /* "Local Timer Cell Control Register 07" */
SFR_ABS (LTCA2_LTCCTR08, LTCA2_LTCCTRm_t, LTCA2_LTCCTR08_ADDR); /* "Local Timer Cell Control Register 08" */
SFR_ABS (LTCA2_LTCCTR09, LTCA2_LTCCTRm_t, LTCA2_LTCCTR09_ADDR); /* "Local Timer Cell Control Register 09" */
SFR_ABS (LTCA2_LTCCTR10, LTCA2_LTCCTRm_t, LTCA2_LTCCTR10_ADDR); /* "Local Timer Cell Control Register 10" */
SFR_ABS (LTCA2_LTCCTR11, LTCA2_LTCCTRm_t, LTCA2_LTCCTR11_ADDR); /* "Local Timer Cell Control Register 11" */
SFR_ABS (LTCA2_LTCCTR12, LTCA2_LTCCTRm_t, LTCA2_LTCCTR12_ADDR); /* "Local Timer Cell Control Register 12" */
SFR_ABS (LTCA2_LTCCTR13, LTCA2_LTCCTRm_t, LTCA2_LTCCTR13_ADDR); /* "Local Timer Cell Control Register 13" */
SFR_ABS (LTCA2_LTCCTR14, LTCA2_LTCCTRm_t, LTCA2_LTCCTR14_ADDR); /* "Local Timer Cell Control Register 14" */
SFR_ABS (LTCA2_LTCCTR15, LTCA2_LTCCTRm_t, LTCA2_LTCCTR15_ADDR); /* "Local Timer Cell Control Register 15" */
SFR_ABS (LTCA2_LTCCTR16, LTCA2_LTCCTRm_t, LTCA2_LTCCTR16_ADDR); /* "Local Timer Cell Control Register 16" */
SFR_ABS (LTCA2_LTCCTR17, LTCA2_LTCCTRm_t, LTCA2_LTCCTR17_ADDR); /* "Local Timer Cell Control Register 17" */
SFR_ABS (LTCA2_LTCCTR18, LTCA2_LTCCTRm_t, LTCA2_LTCCTR18_ADDR); /* "Local Timer Cell Control Register 18" */
SFR_ABS (LTCA2_LTCCTR19, LTCA2_LTCCTRm_t, LTCA2_LTCCTR19_ADDR); /* "Local Timer Cell Control Register 19" */
SFR_ABS (LTCA2_LTCCTR20, LTCA2_LTCCTRm_t, LTCA2_LTCCTR20_ADDR); /* "Local Timer Cell Control Register 20" */
SFR_ABS (LTCA2_LTCCTR21, LTCA2_LTCCTRm_t, LTCA2_LTCCTR21_ADDR); /* "Local Timer Cell Control Register 21" */
SFR_ABS (LTCA2_LTCCTR22, LTCA2_LTCCTRm_t, LTCA2_LTCCTR22_ADDR); /* "Local Timer Cell Control Register 22" */
SFR_ABS (LTCA2_LTCCTR23, LTCA2_LTCCTRm_t, LTCA2_LTCCTR23_ADDR); /* "Local Timer Cell Control Register 23" */
SFR_ABS (LTCA2_LTCCTR24, LTCA2_LTCCTRm_t, LTCA2_LTCCTR24_ADDR); /* "Local Timer Cell Control Register 24" */
SFR_ABS (LTCA2_LTCCTR25, LTCA2_LTCCTRm_t, LTCA2_LTCCTR25_ADDR); /* "Local Timer Cell Control Register 25" */
SFR_ABS (LTCA2_LTCCTR26, LTCA2_LTCCTRm_t, LTCA2_LTCCTR26_ADDR); /* "Local Timer Cell Control Register 26" */
SFR_ABS (LTCA2_LTCCTR27, LTCA2_LTCCTRm_t, LTCA2_LTCCTR27_ADDR); /* "Local Timer Cell Control Register 27" */
SFR_ABS (LTCA2_LTCCTR28, LTCA2_LTCCTRm_t, LTCA2_LTCCTR28_ADDR); /* "Local Timer Cell Control Register 28" */
SFR_ABS (LTCA2_LTCCTR29, LTCA2_LTCCTRm_t, LTCA2_LTCCTR29_ADDR); /* "Local Timer Cell Control Register 29" */
SFR_ABS (LTCA2_LTCCTR30, LTCA2_LTCCTRm_t, LTCA2_LTCCTR30_ADDR); /* "Local Timer Cell Control Register 30" */
SFR_ABS (LTCA2_LTCCTR31, LTCA2_LTCCTRm_t, LTCA2_LTCCTR31_ADDR); /* "Local Timer Cell Control Register 31" */
SFR_ABS (LTCA2_LTCCTR32, LTCA2_LTCCTRm_t, LTCA2_LTCCTR32_ADDR); /* "Local Timer Cell Control Register 32" */
SFR_ABS (LTCA2_LTCCTR33, LTCA2_LTCCTRm_t, LTCA2_LTCCTR33_ADDR); /* "Local Timer Cell Control Register 33" */
SFR_ABS (LTCA2_LTCCTR34, LTCA2_LTCCTRm_t, LTCA2_LTCCTR34_ADDR); /* "Local Timer Cell Control Register 34" */
SFR_ABS (LTCA2_LTCCTR35, LTCA2_LTCCTRm_t, LTCA2_LTCCTR35_ADDR); /* "Local Timer Cell Control Register 35" */
SFR_ABS (LTCA2_LTCCTR36, LTCA2_LTCCTRm_t, LTCA2_LTCCTR36_ADDR); /* "Local Timer Cell Control Register 36" */
SFR_ABS (LTCA2_LTCCTR37, LTCA2_LTCCTRm_t, LTCA2_LTCCTR37_ADDR); /* "Local Timer Cell Control Register 37" */
SFR_ABS (LTCA2_LTCCTR38, LTCA2_LTCCTRm_t, LTCA2_LTCCTR38_ADDR); /* "Local Timer Cell Control Register 38" */
SFR_ABS (LTCA2_LTCCTR39, LTCA2_LTCCTRm_t, LTCA2_LTCCTR39_ADDR); /* "Local Timer Cell Control Register 39" */
SFR_ABS (LTCA2_LTCCTR40, LTCA2_LTCCTRm_t, LTCA2_LTCCTR40_ADDR); /* "Local Timer Cell Control Register 40" */
SFR_ABS (LTCA2_LTCCTR41, LTCA2_LTCCTRm_t, LTCA2_LTCCTR41_ADDR); /* "Local Timer Cell Control Register 41" */
SFR_ABS (LTCA2_LTCCTR42, LTCA2_LTCCTRm_t, LTCA2_LTCCTR42_ADDR); /* "Local Timer Cell Control Register 42" */
SFR_ABS (LTCA2_LTCCTR43, LTCA2_LTCCTRm_t, LTCA2_LTCCTR43_ADDR); /* "Local Timer Cell Control Register 43" */
SFR_ABS (LTCA2_LTCCTR44, LTCA2_LTCCTRm_t, LTCA2_LTCCTR44_ADDR); /* "Local Timer Cell Control Register 44" */
SFR_ABS (LTCA2_LTCCTR45, LTCA2_LTCCTRm_t, LTCA2_LTCCTR45_ADDR); /* "Local Timer Cell Control Register 45" */
SFR_ABS (LTCA2_LTCCTR46, LTCA2_LTCCTRm_t, LTCA2_LTCCTR46_ADDR); /* "Local Timer Cell Control Register 46" */
SFR_ABS (LTCA2_LTCCTR47, LTCA2_LTCCTRm_t, LTCA2_LTCCTR47_ADDR); /* "Local Timer Cell Control Register 47" */
SFR_ABS (LTCA2_LTCCTR48, LTCA2_LTCCTRm_t, LTCA2_LTCCTR48_ADDR); /* "Local Timer Cell Control Register 48" */
SFR_ABS (LTCA2_LTCCTR49, LTCA2_LTCCTRm_t, LTCA2_LTCCTR49_ADDR); /* "Local Timer Cell Control Register 49" */
SFR_ABS (LTCA2_LTCCTR50, LTCA2_LTCCTRm_t, LTCA2_LTCCTR50_ADDR); /* "Local Timer Cell Control Register 50" */
SFR_ABS (LTCA2_LTCCTR51, LTCA2_LTCCTRm_t, LTCA2_LTCCTR51_ADDR); /* "Local Timer Cell Control Register 51" */
SFR_ABS (LTCA2_LTCCTR52, LTCA2_LTCCTRm_t, LTCA2_LTCCTR52_ADDR); /* "Local Timer Cell Control Register 52" */
SFR_ABS (LTCA2_LTCCTR53, LTCA2_LTCCTRm_t, LTCA2_LTCCTR53_ADDR); /* "Local Timer Cell Control Register 53" */
SFR_ABS (LTCA2_LTCCTR54, LTCA2_LTCCTRm_t, LTCA2_LTCCTR54_ADDR); /* "Local Timer Cell Control Register 54" */
SFR_ABS (LTCA2_LTCCTR55, LTCA2_LTCCTRm_t, LTCA2_LTCCTR55_ADDR); /* "Local Timer Cell Control Register 55" */
SFR_ABS (LTCA2_LTCCTR56, LTCA2_LTCCTRm_t, LTCA2_LTCCTR56_ADDR); /* "Local Timer Cell Control Register 56" */
SFR_ABS (LTCA2_LTCCTR57, LTCA2_LTCCTRm_t, LTCA2_LTCCTR57_ADDR); /* "Local Timer Cell Control Register 57" */
SFR_ABS (LTCA2_LTCCTR58, LTCA2_LTCCTRm_t, LTCA2_LTCCTR58_ADDR); /* "Local Timer Cell Control Register 58" */
SFR_ABS (LTCA2_LTCCTR59, LTCA2_LTCCTRm_t, LTCA2_LTCCTR59_ADDR); /* "Local Timer Cell Control Register 59" */
SFR_ABS (LTCA2_LTCCTR60, LTCA2_LTCCTRm_t, LTCA2_LTCCTR60_ADDR); /* "Local Timer Cell Control Register 60" */
SFR_ABS (LTCA2_LTCCTR61, LTCA2_LTCCTRm_t, LTCA2_LTCCTR61_ADDR); /* "Local Timer Cell Control Register 61" */
SFR_ABS (LTCA2_LTCCTR62, LTCA2_LTCCTRm_t, LTCA2_LTCCTR62_ADDR); /* "Local Timer Cell Control Register 62" */
SFR_ABS (LTCA2_LTCCTR63, LTCA2_LTCCTR63_t, LTCA2_LTCCTR63_ADDR); /* "Local Timer Cell Control Register 63" */
SFR_ABS (LTCA2_LTCXR00, LTCA2_LTCXRm_t, LTCA2_LTCXR00_ADDR); /* "Local Timer Cell X Register 00" */
SFR_ABS (LTCA2_LTCXR01, LTCA2_LTCXRm_t, LTCA2_LTCXR01_ADDR); /* "Local Timer Cell X Register 01" */
SFR_ABS (LTCA2_LTCXR02, LTCA2_LTCXRm_t, LTCA2_LTCXR02_ADDR); /* "Local Timer Cell X Register 02" */
SFR_ABS (LTCA2_LTCXR03, LTCA2_LTCXRm_t, LTCA2_LTCXR03_ADDR); /* "Local Timer Cell X Register 03" */
SFR_ABS (LTCA2_LTCXR04, LTCA2_LTCXRm_t, LTCA2_LTCXR04_ADDR); /* "Local Timer Cell X Register 04" */
SFR_ABS (LTCA2_LTCXR05, LTCA2_LTCXRm_t, LTCA2_LTCXR05_ADDR); /* "Local Timer Cell X Register 05" */
SFR_ABS (LTCA2_LTCXR06, LTCA2_LTCXRm_t, LTCA2_LTCXR06_ADDR); /* "Local Timer Cell X Register 06" */
SFR_ABS (LTCA2_LTCXR07, LTCA2_LTCXRm_t, LTCA2_LTCXR07_ADDR); /* "Local Timer Cell X Register 07" */
SFR_ABS (LTCA2_LTCXR08, LTCA2_LTCXRm_t, LTCA2_LTCXR08_ADDR); /* "Local Timer Cell X Register 08" */
SFR_ABS (LTCA2_LTCXR09, LTCA2_LTCXRm_t, LTCA2_LTCXR09_ADDR); /* "Local Timer Cell X Register 09" */
SFR_ABS (LTCA2_LTCXR10, LTCA2_LTCXRm_t, LTCA2_LTCXR10_ADDR); /* "Local Timer Cell X Register 10" */
SFR_ABS (LTCA2_LTCXR11, LTCA2_LTCXRm_t, LTCA2_LTCXR11_ADDR); /* "Local Timer Cell X Register 11" */
SFR_ABS (LTCA2_LTCXR12, LTCA2_LTCXRm_t, LTCA2_LTCXR12_ADDR); /* "Local Timer Cell X Register 12" */
SFR_ABS (LTCA2_LTCXR13, LTCA2_LTCXRm_t, LTCA2_LTCXR13_ADDR); /* "Local Timer Cell X Register 13" */
SFR_ABS (LTCA2_LTCXR14, LTCA2_LTCXRm_t, LTCA2_LTCXR14_ADDR); /* "Local Timer Cell X Register 14" */
SFR_ABS (LTCA2_LTCXR15, LTCA2_LTCXRm_t, LTCA2_LTCXR15_ADDR); /* "Local Timer Cell X Register 15" */
SFR_ABS (LTCA2_LTCXR16, LTCA2_LTCXRm_t, LTCA2_LTCXR16_ADDR); /* "Local Timer Cell X Register 16" */
SFR_ABS (LTCA2_LTCXR17, LTCA2_LTCXRm_t, LTCA2_LTCXR17_ADDR); /* "Local Timer Cell X Register 17" */
SFR_ABS (LTCA2_LTCXR18, LTCA2_LTCXRm_t, LTCA2_LTCXR18_ADDR); /* "Local Timer Cell X Register 18" */
SFR_ABS (LTCA2_LTCXR19, LTCA2_LTCXRm_t, LTCA2_LTCXR19_ADDR); /* "Local Timer Cell X Register 19" */
SFR_ABS (LTCA2_LTCXR20, LTCA2_LTCXRm_t, LTCA2_LTCXR20_ADDR); /* "Local Timer Cell X Register 20" */
SFR_ABS (LTCA2_LTCXR21, LTCA2_LTCXRm_t, LTCA2_LTCXR21_ADDR); /* "Local Timer Cell X Register 21" */
SFR_ABS (LTCA2_LTCXR22, LTCA2_LTCXRm_t, LTCA2_LTCXR22_ADDR); /* "Local Timer Cell X Register 22" */
SFR_ABS (LTCA2_LTCXR23, LTCA2_LTCXRm_t, LTCA2_LTCXR23_ADDR); /* "Local Timer Cell X Register 23" */
SFR_ABS (LTCA2_LTCXR24, LTCA2_LTCXRm_t, LTCA2_LTCXR24_ADDR); /* "Local Timer Cell X Register 24" */
SFR_ABS (LTCA2_LTCXR25, LTCA2_LTCXRm_t, LTCA2_LTCXR25_ADDR); /* "Local Timer Cell X Register 25" */
SFR_ABS (LTCA2_LTCXR26, LTCA2_LTCXRm_t, LTCA2_LTCXR26_ADDR); /* "Local Timer Cell X Register 26" */
SFR_ABS (LTCA2_LTCXR27, LTCA2_LTCXRm_t, LTCA2_LTCXR27_ADDR); /* "Local Timer Cell X Register 27" */
SFR_ABS (LTCA2_LTCXR28, LTCA2_LTCXRm_t, LTCA2_LTCXR28_ADDR); /* "Local Timer Cell X Register 28" */
SFR_ABS (LTCA2_LTCXR29, LTCA2_LTCXRm_t, LTCA2_LTCXR29_ADDR); /* "Local Timer Cell X Register 29" */
SFR_ABS (LTCA2_LTCXR30, LTCA2_LTCXRm_t, LTCA2_LTCXR30_ADDR); /* "Local Timer Cell X Register 30" */
SFR_ABS (LTCA2_LTCXR31, LTCA2_LTCXRm_t, LTCA2_LTCXR31_ADDR); /* "Local Timer Cell X Register 31" */
SFR_ABS (LTCA2_LTCXR32, LTCA2_LTCXRm_t, LTCA2_LTCXR32_ADDR); /* "Local Timer Cell X Register 32" */
SFR_ABS (LTCA2_LTCXR33, LTCA2_LTCXRm_t, LTCA2_LTCXR33_ADDR); /* "Local Timer Cell X Register 33" */
SFR_ABS (LTCA2_LTCXR34, LTCA2_LTCXRm_t, LTCA2_LTCXR34_ADDR); /* "Local Timer Cell X Register 34" */
SFR_ABS (LTCA2_LTCXR35, LTCA2_LTCXRm_t, LTCA2_LTCXR35_ADDR); /* "Local Timer Cell X Register 35" */
SFR_ABS (LTCA2_LTCXR36, LTCA2_LTCXRm_t, LTCA2_LTCXR36_ADDR); /* "Local Timer Cell X Register 36" */
SFR_ABS (LTCA2_LTCXR37, LTCA2_LTCXRm_t, LTCA2_LTCXR37_ADDR); /* "Local Timer Cell X Register 37" */
SFR_ABS (LTCA2_LTCXR38, LTCA2_LTCXRm_t, LTCA2_LTCXR38_ADDR); /* "Local Timer Cell X Register 38" */
SFR_ABS (LTCA2_LTCXR39, LTCA2_LTCXRm_t, LTCA2_LTCXR39_ADDR); /* "Local Timer Cell X Register 39" */
SFR_ABS (LTCA2_LTCXR40, LTCA2_LTCXRm_t, LTCA2_LTCXR40_ADDR); /* "Local Timer Cell X Register 40" */
SFR_ABS (LTCA2_LTCXR41, LTCA2_LTCXRm_t, LTCA2_LTCXR41_ADDR); /* "Local Timer Cell X Register 41" */
SFR_ABS (LTCA2_LTCXR42, LTCA2_LTCXRm_t, LTCA2_LTCXR42_ADDR); /* "Local Timer Cell X Register 42" */
SFR_ABS (LTCA2_LTCXR43, LTCA2_LTCXRm_t, LTCA2_LTCXR43_ADDR); /* "Local Timer Cell X Register 43" */
SFR_ABS (LTCA2_LTCXR44, LTCA2_LTCXRm_t, LTCA2_LTCXR44_ADDR); /* "Local Timer Cell X Register 44" */
SFR_ABS (LTCA2_LTCXR45, LTCA2_LTCXRm_t, LTCA2_LTCXR45_ADDR); /* "Local Timer Cell X Register 45" */
SFR_ABS (LTCA2_LTCXR46, LTCA2_LTCXRm_t, LTCA2_LTCXR46_ADDR); /* "Local Timer Cell X Register 46" */
SFR_ABS (LTCA2_LTCXR47, LTCA2_LTCXRm_t, LTCA2_LTCXR47_ADDR); /* "Local Timer Cell X Register 47" */
SFR_ABS (LTCA2_LTCXR48, LTCA2_LTCXRm_t, LTCA2_LTCXR48_ADDR); /* "Local Timer Cell X Register 48" */
SFR_ABS (LTCA2_LTCXR49, LTCA2_LTCXRm_t, LTCA2_LTCXR49_ADDR); /* "Local Timer Cell X Register 49" */
SFR_ABS (LTCA2_LTCXR50, LTCA2_LTCXRm_t, LTCA2_LTCXR50_ADDR); /* "Local Timer Cell X Register 50" */
SFR_ABS (LTCA2_LTCXR51, LTCA2_LTCXRm_t, LTCA2_LTCXR51_ADDR); /* "Local Timer Cell X Register 51" */
SFR_ABS (LTCA2_LTCXR52, LTCA2_LTCXRm_t, LTCA2_LTCXR52_ADDR); /* "Local Timer Cell X Register 52" */
SFR_ABS (LTCA2_LTCXR53, LTCA2_LTCXRm_t, LTCA2_LTCXR53_ADDR); /* "Local Timer Cell X Register 53" */
SFR_ABS (LTCA2_LTCXR54, LTCA2_LTCXRm_t, LTCA2_LTCXR54_ADDR); /* "Local Timer Cell X Register 54" */
SFR_ABS (LTCA2_LTCXR55, LTCA2_LTCXRm_t, LTCA2_LTCXR55_ADDR); /* "Local Timer Cell X Register 55" */
SFR_ABS (LTCA2_LTCXR56, LTCA2_LTCXRm_t, LTCA2_LTCXR56_ADDR); /* "Local Timer Cell X Register 56" */
SFR_ABS (LTCA2_LTCXR57, LTCA2_LTCXRm_t, LTCA2_LTCXR57_ADDR); /* "Local Timer Cell X Register 57" */
SFR_ABS (LTCA2_LTCXR58, LTCA2_LTCXRm_t, LTCA2_LTCXR58_ADDR); /* "Local Timer Cell X Register 58" */
SFR_ABS (LTCA2_LTCXR59, LTCA2_LTCXRm_t, LTCA2_LTCXR59_ADDR); /* "Local Timer Cell X Register 59" */
SFR_ABS (LTCA2_LTCXR60, LTCA2_LTCXRm_t, LTCA2_LTCXR60_ADDR); /* "Local Timer Cell X Register 60" */
SFR_ABS (LTCA2_LTCXR61, LTCA2_LTCXRm_t, LTCA2_LTCXR61_ADDR); /* "Local Timer Cell X Register 61" */
SFR_ABS (LTCA2_LTCXR62, LTCA2_LTCXRm_t, LTCA2_LTCXR62_ADDR); /* "Local Timer Cell X Register 62" */
SFR_ABS (LTCA2_LTCXR63, LTCA2_LTCXR63_t, LTCA2_LTCXR63_ADDR); /* "Local Timer Cell X Register 63" */
SFR_ABS (LTCA2_MRACTL, LTCA2_MRACTL_t, LTCA2_MRACTL_ADDR); /* "Multiplexer Register Array Control Register" */
SFR_ABS (LTCA2_MRADIN, LTCA2_MRADIN_t, LTCA2_MRADIN_ADDR); /* "Multiplexer Register Array Data In Register" */
SFR_ABS (LTCA2_MRADOUT, LTCA2_MRADOUT_t, LTCA2_MRADOUT_ADDR); /* "Multiplexer Register Array Data Out Register" */
SFR_ABS (LTCA2_SRC00, LTCA2_SRCm_t, LTCA2_SRC00_ADDR); /* "LTCA2 Interrupt Service Request Control Register 00" */
SFR_ABS (LTCA2_SRC01, LTCA2_SRCm_t, LTCA2_SRC01_ADDR); /* "LTCA2 Interrupt Service Request Control Register 01" */
SFR_ABS (LTCA2_SRC02, LTCA2_SRCm_t, LTCA2_SRC02_ADDR); /* "LTCA2 Interrupt Service Request Control Register 02" */
SFR_ABS (LTCA2_SRC03, LTCA2_SRCm_t, LTCA2_SRC03_ADDR); /* "LTCA2 Interrupt Service Request Control Register 03" */
SFR_ABS (LTCA2_SRC04, LTCA2_SRCm_t, LTCA2_SRC04_ADDR); /* "LTCA2 Interrupt Service Request Control Register 04" */
SFR_ABS (LTCA2_SRC05, LTCA2_SRCm_t, LTCA2_SRC05_ADDR); /* "LTCA2 Interrupt Service Request Control Register 05" */
SFR_ABS (LTCA2_SRC06, LTCA2_SRCm_t, LTCA2_SRC06_ADDR); /* "LTCA2 Interrupt Service Request Control Register 06" */
SFR_ABS (LTCA2_SRC07, LTCA2_SRCm_t, LTCA2_SRC07_ADDR); /* "LTCA2 Interrupt Service Request Control Register 07" */
SFR_ABS (LTCA2_SRC08, LTCA2_SRCm_t, LTCA2_SRC08_ADDR); /* "LTCA2 Interrupt Service Request Control Register 08" */
SFR_ABS (LTCA2_SRC09, LTCA2_SRCm_t, LTCA2_SRC09_ADDR); /* "LTCA2 Interrupt Service Request Control Register 09" */
SFR_ABS (LTCA2_SRC10, LTCA2_SRCm_t, LTCA2_SRC10_ADDR); /* "LTCA2 Interrupt Service Request Control Register 10" */
SFR_ABS (LTCA2_SRC11, LTCA2_SRCm_t, LTCA2_SRC11_ADDR); /* "LTCA2 Interrupt Service Request Control Register 11" */
SFR_ABS (LTCA2_SRC12, LTCA2_SRCm_t, LTCA2_SRC12_ADDR); /* "LTCA2 Interrupt Service Request Control Register 12" */
SFR_ABS (LTCA2_SRC13, LTCA2_SRCm_t, LTCA2_SRC13_ADDR); /* "LTCA2 Interrupt Service Request Control Register 13" */
SFR_ABS (LTCA2_SRC14, LTCA2_SRCm_t, LTCA2_SRC14_ADDR); /* "LTCA2 Interrupt Service Request Control Register 14" */
SFR_ABS (LTCA2_SRC15, LTCA2_SRCm_t, LTCA2_SRC15_ADDR); /* "LTCA2 Interrupt Service Request Control Register 15" */
SFR_ABS (LTCA2_SRSC2, LTCA2_SRSCm_t, LTCA2_SRSC2_ADDR); /* "LTCA2 Service Request State Clear Register 2" */
SFR_ABS (LTCA2_SRSC3, LTCA2_SRSCm_t, LTCA2_SRSC3_ADDR); /* "LTCA2 Service Request State Clear Register 3" */
SFR_ABS (LTCA2_SRSS2, LTCA2_SRSSm_t, LTCA2_SRSS2_ADDR); /* "LTCA2 Service Request State Set Register 2" */
SFR_ABS (LTCA2_SRSS3, LTCA2_SRSSm_t, LTCA2_SRSS3_ADDR); /* "LTCA2 Service Request State Set Register 3" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_LTCA2_H_ (block "LTCA2") */


