/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MultiCAN LL" of TriCore TC1162 (563 SFRs) */

#include <tc1162/can/addr.h>

#include <tc1162/can/masks.h>
#include <tc1162/can/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1162/can/types.h>
#include <tc1162/can/sharetypes.h>

#ifndef _HAVE_TRICORE_CAN_H_
#define _HAVE_TRICORE_CAN_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (CAN_CLC, CAN_CLC_t, CAN_CLC_ADDR);     /* "MultiCAN Clock Control Register" */
SFR_NOABS (CAN_FDR, CAN_FDR_t, CAN_FDR_ADDR);     /* "MultiCAN Fractional Divider Register" */
SFR_NOABS (CAN_ID, CAN_ID_t, CAN_ID_ADDR);        /* "MultiCAN Module Identification Register" */
SFR_NOABS (CAN_LIST0, CAN_LISTm_t, CAN_LIST0_ADDR); /* "List Register 0" */
SFR_NOABS (CAN_LIST1, CAN_LISTm_t, CAN_LIST1_ADDR); /* "List Register 1" */
SFR_NOABS (CAN_LIST2, CAN_LISTm_t, CAN_LIST2_ADDR); /* "List Register 2" */
SFR_NOABS (CAN_LIST3, CAN_LISTm_t, CAN_LIST3_ADDR); /* "List Register 3" */
SFR_NOABS (CAN_LIST4, CAN_LISTm_t, CAN_LIST4_ADDR); /* "List Register 4" */
SFR_NOABS (CAN_LIST5, CAN_LISTm_t, CAN_LIST5_ADDR); /* "List Register 5" */
SFR_NOABS (CAN_LIST6, CAN_LISTm_t, CAN_LIST6_ADDR); /* "List Register 6" */
SFR_NOABS (CAN_LIST7, CAN_LISTm_t, CAN_LIST7_ADDR); /* "List Register 7" */
SFR_NOABS (CAN_MCR, CAN_MCR_t, CAN_MCR_ADDR);     /* "MultiCAN Module Control Register" */
SFR_NOABS (CAN_MITR, CAN_MITR_t, CAN_MITR_ADDR);  /* "Module Interrupt Trigger Register" */
SFR_NOABS (CAN_MOAMR0, CAN_MOAMRm_t, CAN_MOAMR0_ADDR); /* "CAN Message Object 0 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR1, CAN_MOAMRm_t, CAN_MOAMR1_ADDR); /* "CAN Message Object 1 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR10, CAN_MOAMRm_t, CAN_MOAMR10_ADDR); /* "CAN Message Object 10 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR11, CAN_MOAMRm_t, CAN_MOAMR11_ADDR); /* "CAN Message Object 11 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR12, CAN_MOAMRm_t, CAN_MOAMR12_ADDR); /* "CAN Message Object 12 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR13, CAN_MOAMRm_t, CAN_MOAMR13_ADDR); /* "CAN Message Object 13 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR14, CAN_MOAMRm_t, CAN_MOAMR14_ADDR); /* "CAN Message Object 14 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR15, CAN_MOAMRm_t, CAN_MOAMR15_ADDR); /* "CAN Message Object 15 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR16, CAN_MOAMRm_t, CAN_MOAMR16_ADDR); /* "CAN Message Object 16 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR17, CAN_MOAMRm_t, CAN_MOAMR17_ADDR); /* "CAN Message Object 17 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR18, CAN_MOAMRm_t, CAN_MOAMR18_ADDR); /* "CAN Message Object 18 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR19, CAN_MOAMRm_t, CAN_MOAMR19_ADDR); /* "CAN Message Object 19 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR2, CAN_MOAMRm_t, CAN_MOAMR2_ADDR); /* "CAN Message Object 2 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR20, CAN_MOAMRm_t, CAN_MOAMR20_ADDR); /* "CAN Message Object 20 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR21, CAN_MOAMRm_t, CAN_MOAMR21_ADDR); /* "CAN Message Object 21 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR22, CAN_MOAMRm_t, CAN_MOAMR22_ADDR); /* "CAN Message Object 22 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR23, CAN_MOAMRm_t, CAN_MOAMR23_ADDR); /* "CAN Message Object 23 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR24, CAN_MOAMRm_t, CAN_MOAMR24_ADDR); /* "CAN Message Object 24 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR25, CAN_MOAMRm_t, CAN_MOAMR25_ADDR); /* "CAN Message Object 25 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR26, CAN_MOAMRm_t, CAN_MOAMR26_ADDR); /* "CAN Message Object 26 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR27, CAN_MOAMRm_t, CAN_MOAMR27_ADDR); /* "CAN Message Object 27 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR28, CAN_MOAMRm_t, CAN_MOAMR28_ADDR); /* "CAN Message Object 28 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR29, CAN_MOAMRm_t, CAN_MOAMR29_ADDR); /* "CAN Message Object 29 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR3, CAN_MOAMRm_t, CAN_MOAMR3_ADDR); /* "CAN Message Object 3 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR30, CAN_MOAMRm_t, CAN_MOAMR30_ADDR); /* "CAN Message Object 30 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR31, CAN_MOAMRm_t, CAN_MOAMR31_ADDR); /* "CAN Message Object 31 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR32, CAN_MOAMRm_t, CAN_MOAMR32_ADDR); /* "CAN Message Object 32 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR33, CAN_MOAMRm_t, CAN_MOAMR33_ADDR); /* "CAN Message Object 33 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR34, CAN_MOAMRm_t, CAN_MOAMR34_ADDR); /* "CAN Message Object 34 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR35, CAN_MOAMRm_t, CAN_MOAMR35_ADDR); /* "CAN Message Object 35 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR36, CAN_MOAMRm_t, CAN_MOAMR36_ADDR); /* "CAN Message Object 36 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR37, CAN_MOAMRm_t, CAN_MOAMR37_ADDR); /* "CAN Message Object 37 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR38, CAN_MOAMRm_t, CAN_MOAMR38_ADDR); /* "CAN Message Object 38 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR39, CAN_MOAMRm_t, CAN_MOAMR39_ADDR); /* "CAN Message Object 39 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR4, CAN_MOAMRm_t, CAN_MOAMR4_ADDR); /* "CAN Message Object 4 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR40, CAN_MOAMRm_t, CAN_MOAMR40_ADDR); /* "CAN Message Object 40 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR41, CAN_MOAMRm_t, CAN_MOAMR41_ADDR); /* "CAN Message Object 41 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR42, CAN_MOAMRm_t, CAN_MOAMR42_ADDR); /* "CAN Message Object 42 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR43, CAN_MOAMRm_t, CAN_MOAMR43_ADDR); /* "CAN Message Object 43 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR44, CAN_MOAMRm_t, CAN_MOAMR44_ADDR); /* "CAN Message Object 44 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR45, CAN_MOAMRm_t, CAN_MOAMR45_ADDR); /* "CAN Message Object 45 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR46, CAN_MOAMRm_t, CAN_MOAMR46_ADDR); /* "CAN Message Object 46 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR47, CAN_MOAMRm_t, CAN_MOAMR47_ADDR); /* "CAN Message Object 47 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR48, CAN_MOAMRm_t, CAN_MOAMR48_ADDR); /* "CAN Message Object 48 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR49, CAN_MOAMRm_t, CAN_MOAMR49_ADDR); /* "CAN Message Object 49 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR5, CAN_MOAMRm_t, CAN_MOAMR5_ADDR); /* "CAN Message Object 5 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR50, CAN_MOAMRm_t, CAN_MOAMR50_ADDR); /* "CAN Message Object 50 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR51, CAN_MOAMRm_t, CAN_MOAMR51_ADDR); /* "CAN Message Object 51 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR52, CAN_MOAMRm_t, CAN_MOAMR52_ADDR); /* "CAN Message Object 52 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR53, CAN_MOAMRm_t, CAN_MOAMR53_ADDR); /* "CAN Message Object 53 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR54, CAN_MOAMRm_t, CAN_MOAMR54_ADDR); /* "CAN Message Object 54 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR55, CAN_MOAMRm_t, CAN_MOAMR55_ADDR); /* "CAN Message Object 55 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR56, CAN_MOAMRm_t, CAN_MOAMR56_ADDR); /* "CAN Message Object 56 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR57, CAN_MOAMRm_t, CAN_MOAMR57_ADDR); /* "CAN Message Object 57 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR58, CAN_MOAMRm_t, CAN_MOAMR58_ADDR); /* "CAN Message Object 58 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR59, CAN_MOAMRm_t, CAN_MOAMR59_ADDR); /* "CAN Message Object 59 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR6, CAN_MOAMRm_t, CAN_MOAMR6_ADDR); /* "CAN Message Object 6 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR60, CAN_MOAMRm_t, CAN_MOAMR60_ADDR); /* "CAN Message Object 60 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR61, CAN_MOAMRm_t, CAN_MOAMR61_ADDR); /* "CAN Message Object 61 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR62, CAN_MOAMRm_t, CAN_MOAMR62_ADDR); /* "CAN Message Object 62 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR63, CAN_MOAMRm_t, CAN_MOAMR63_ADDR); /* "CAN Message Object 63 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR7, CAN_MOAMRm_t, CAN_MOAMR7_ADDR); /* "CAN Message Object 7 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR8, CAN_MOAMRm_t, CAN_MOAMR8_ADDR); /* "CAN Message Object 8 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR9, CAN_MOAMRm_t, CAN_MOAMR9_ADDR); /* "CAN Message Object 9 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAR0, CAN_MOARm_t, CAN_MOAR0_ADDR); /* "CAN Message Object 0 Arbitration Register" */
SFR_NOABS (CAN_MOAR1, CAN_MOARm_t, CAN_MOAR1_ADDR); /* "CAN Message Object 1 Arbitration Register" */
SFR_NOABS (CAN_MOAR10, CAN_MOARm_t, CAN_MOAR10_ADDR); /* "CAN Message Object 10 Arbitration Register" */
SFR_NOABS (CAN_MOAR11, CAN_MOARm_t, CAN_MOAR11_ADDR); /* "CAN Message Object 11 Arbitration Register" */
SFR_NOABS (CAN_MOAR12, CAN_MOARm_t, CAN_MOAR12_ADDR); /* "CAN Message Object 12 Arbitration Register" */
SFR_NOABS (CAN_MOAR13, CAN_MOARm_t, CAN_MOAR13_ADDR); /* "CAN Message Object 13 Arbitration Register" */
SFR_NOABS (CAN_MOAR14, CAN_MOARm_t, CAN_MOAR14_ADDR); /* "CAN Message Object 14 Arbitration Register" */
SFR_NOABS (CAN_MOAR15, CAN_MOARm_t, CAN_MOAR15_ADDR); /* "CAN Message Object 15 Arbitration Register" */
SFR_NOABS (CAN_MOAR16, CAN_MOARm_t, CAN_MOAR16_ADDR); /* "CAN Message Object 16 Arbitration Register" */
SFR_NOABS (CAN_MOAR17, CAN_MOARm_t, CAN_MOAR17_ADDR); /* "CAN Message Object 17 Arbitration Register" */
SFR_NOABS (CAN_MOAR18, CAN_MOARm_t, CAN_MOAR18_ADDR); /* "CAN Message Object 18 Arbitration Register" */
SFR_NOABS (CAN_MOAR19, CAN_MOARm_t, CAN_MOAR19_ADDR); /* "CAN Message Object 19 Arbitration Register" */
SFR_NOABS (CAN_MOAR2, CAN_MOARm_t, CAN_MOAR2_ADDR); /* "CAN Message Object 2 Arbitration Register" */
SFR_NOABS (CAN_MOAR20, CAN_MOARm_t, CAN_MOAR20_ADDR); /* "CAN Message Object 20 Arbitration Register" */
SFR_NOABS (CAN_MOAR21, CAN_MOARm_t, CAN_MOAR21_ADDR); /* "CAN Message Object 21 Arbitration Register" */
SFR_NOABS (CAN_MOAR22, CAN_MOARm_t, CAN_MOAR22_ADDR); /* "CAN Message Object 22 Arbitration Register" */
SFR_NOABS (CAN_MOAR23, CAN_MOARm_t, CAN_MOAR23_ADDR); /* "CAN Message Object 23 Arbitration Register" */
SFR_NOABS (CAN_MOAR24, CAN_MOARm_t, CAN_MOAR24_ADDR); /* "CAN Message Object 24 Arbitration Register" */
SFR_NOABS (CAN_MOAR25, CAN_MOARm_t, CAN_MOAR25_ADDR); /* "CAN Message Object 25 Arbitration Register" */
SFR_NOABS (CAN_MOAR26, CAN_MOARm_t, CAN_MOAR26_ADDR); /* "CAN Message Object 26 Arbitration Register" */
SFR_NOABS (CAN_MOAR27, CAN_MOARm_t, CAN_MOAR27_ADDR); /* "CAN Message Object 27 Arbitration Register" */
SFR_NOABS (CAN_MOAR28, CAN_MOARm_t, CAN_MOAR28_ADDR); /* "CAN Message Object 28 Arbitration Register" */
SFR_NOABS (CAN_MOAR29, CAN_MOARm_t, CAN_MOAR29_ADDR); /* "CAN Message Object 29 Arbitration Register" */
SFR_NOABS (CAN_MOAR3, CAN_MOARm_t, CAN_MOAR3_ADDR); /* "CAN Message Object 3 Arbitration Register" */
SFR_NOABS (CAN_MOAR30, CAN_MOARm_t, CAN_MOAR30_ADDR); /* "CAN Message Object 30 Arbitration Register" */
SFR_NOABS (CAN_MOAR31, CAN_MOARm_t, CAN_MOAR31_ADDR); /* "CAN Message Object 31 Arbitration Register" */
SFR_NOABS (CAN_MOAR32, CAN_MOARm_t, CAN_MOAR32_ADDR); /* "CAN Message Object 32 Arbitration Register" */
SFR_NOABS (CAN_MOAR33, CAN_MOARm_t, CAN_MOAR33_ADDR); /* "CAN Message Object 33 Arbitration Register" */
SFR_NOABS (CAN_MOAR34, CAN_MOARm_t, CAN_MOAR34_ADDR); /* "CAN Message Object 34 Arbitration Register" */
SFR_NOABS (CAN_MOAR35, CAN_MOARm_t, CAN_MOAR35_ADDR); /* "CAN Message Object 35 Arbitration Register" */
SFR_NOABS (CAN_MOAR36, CAN_MOARm_t, CAN_MOAR36_ADDR); /* "CAN Message Object 36 Arbitration Register" */
SFR_NOABS (CAN_MOAR37, CAN_MOARm_t, CAN_MOAR37_ADDR); /* "CAN Message Object 37 Arbitration Register" */
SFR_NOABS (CAN_MOAR38, CAN_MOARm_t, CAN_MOAR38_ADDR); /* "CAN Message Object 38 Arbitration Register" */
SFR_NOABS (CAN_MOAR39, CAN_MOARm_t, CAN_MOAR39_ADDR); /* "CAN Message Object 39 Arbitration Register" */
SFR_NOABS (CAN_MOAR4, CAN_MOARm_t, CAN_MOAR4_ADDR); /* "CAN Message Object 4 Arbitration Register" */
SFR_NOABS (CAN_MOAR40, CAN_MOARm_t, CAN_MOAR40_ADDR); /* "CAN Message Object 40 Arbitration Register" */
SFR_NOABS (CAN_MOAR41, CAN_MOARm_t, CAN_MOAR41_ADDR); /* "CAN Message Object 41 Arbitration Register" */
SFR_NOABS (CAN_MOAR42, CAN_MOARm_t, CAN_MOAR42_ADDR); /* "CAN Message Object 42 Arbitration Register" */
SFR_NOABS (CAN_MOAR43, CAN_MOARm_t, CAN_MOAR43_ADDR); /* "CAN Message Object 43 Arbitration Register" */
SFR_NOABS (CAN_MOAR44, CAN_MOARm_t, CAN_MOAR44_ADDR); /* "CAN Message Object 44 Arbitration Register" */
SFR_NOABS (CAN_MOAR45, CAN_MOARm_t, CAN_MOAR45_ADDR); /* "CAN Message Object 45 Arbitration Register" */
SFR_NOABS (CAN_MOAR46, CAN_MOARm_t, CAN_MOAR46_ADDR); /* "CAN Message Object 46 Arbitration Register" */
SFR_NOABS (CAN_MOAR47, CAN_MOARm_t, CAN_MOAR47_ADDR); /* "CAN Message Object 47 Arbitration Register" */
SFR_NOABS (CAN_MOAR48, CAN_MOARm_t, CAN_MOAR48_ADDR); /* "CAN Message Object 48 Arbitration Register" */
SFR_NOABS (CAN_MOAR49, CAN_MOARm_t, CAN_MOAR49_ADDR); /* "CAN Message Object 49 Arbitration Register" */
SFR_NOABS (CAN_MOAR5, CAN_MOARm_t, CAN_MOAR5_ADDR); /* "CAN Message Object 5 Arbitration Register" */
SFR_NOABS (CAN_MOAR50, CAN_MOARm_t, CAN_MOAR50_ADDR); /* "CAN Message Object 50 Arbitration Register" */
SFR_NOABS (CAN_MOAR51, CAN_MOARm_t, CAN_MOAR51_ADDR); /* "CAN Message Object 51 Arbitration Register" */
SFR_NOABS (CAN_MOAR52, CAN_MOARm_t, CAN_MOAR52_ADDR); /* "CAN Message Object 52 Arbitration Register" */
SFR_NOABS (CAN_MOAR53, CAN_MOARm_t, CAN_MOAR53_ADDR); /* "CAN Message Object 53 Arbitration Register" */
SFR_NOABS (CAN_MOAR54, CAN_MOARm_t, CAN_MOAR54_ADDR); /* "CAN Message Object 54 Arbitration Register" */
SFR_NOABS (CAN_MOAR55, CAN_MOARm_t, CAN_MOAR55_ADDR); /* "CAN Message Object 55 Arbitration Register" */
SFR_NOABS (CAN_MOAR56, CAN_MOARm_t, CAN_MOAR56_ADDR); /* "CAN Message Object 56 Arbitration Register" */
SFR_NOABS (CAN_MOAR57, CAN_MOARm_t, CAN_MOAR57_ADDR); /* "CAN Message Object 57 Arbitration Register" */
SFR_NOABS (CAN_MOAR58, CAN_MOARm_t, CAN_MOAR58_ADDR); /* "CAN Message Object 58 Arbitration Register" */
SFR_NOABS (CAN_MOAR59, CAN_MOARm_t, CAN_MOAR59_ADDR); /* "CAN Message Object 59 Arbitration Register" */
SFR_NOABS (CAN_MOAR6, CAN_MOARm_t, CAN_MOAR6_ADDR); /* "CAN Message Object 6 Arbitration Register" */
SFR_NOABS (CAN_MOAR60, CAN_MOARm_t, CAN_MOAR60_ADDR); /* "CAN Message Object 60 Arbitration Register" */
SFR_NOABS (CAN_MOAR61, CAN_MOARm_t, CAN_MOAR61_ADDR); /* "CAN Message Object 61 Arbitration Register" */
SFR_NOABS (CAN_MOAR62, CAN_MOARm_t, CAN_MOAR62_ADDR); /* "CAN Message Object 62 Arbitration Register" */
SFR_NOABS (CAN_MOAR63, CAN_MOARm_t, CAN_MOAR63_ADDR); /* "CAN Message Object 63 Arbitration Register" */
SFR_NOABS (CAN_MOAR7, CAN_MOARm_t, CAN_MOAR7_ADDR); /* "CAN Message Object 7 Arbitration Register" */
SFR_NOABS (CAN_MOAR8, CAN_MOARm_t, CAN_MOAR8_ADDR); /* "CAN Message Object 8 Arbitration Register" */
SFR_NOABS (CAN_MOAR9, CAN_MOARm_t, CAN_MOAR9_ADDR); /* "CAN Message Object 9 Arbitration Register" */
SFR_NOABS (CAN_MODATAH0, CAN_MODATAHm_t, CAN_MODATAH0_ADDR); /* "CAN Message Object 0 Data Register High" */
SFR_NOABS (CAN_MODATAH1, CAN_MODATAHm_t, CAN_MODATAH1_ADDR); /* "CAN Message Object 1 Data Register High" */
SFR_NOABS (CAN_MODATAH10, CAN_MODATAHm_t, CAN_MODATAH10_ADDR); /* "CAN Message Object 10 Data Register High" */
SFR_NOABS (CAN_MODATAH11, CAN_MODATAHm_t, CAN_MODATAH11_ADDR); /* "CAN Message Object 11 Data Register High" */
SFR_NOABS (CAN_MODATAH12, CAN_MODATAHm_t, CAN_MODATAH12_ADDR); /* "CAN Message Object 12 Data Register High" */
SFR_NOABS (CAN_MODATAH13, CAN_MODATAHm_t, CAN_MODATAH13_ADDR); /* "CAN Message Object 13 Data Register High" */
SFR_NOABS (CAN_MODATAH14, CAN_MODATAHm_t, CAN_MODATAH14_ADDR); /* "CAN Message Object 14 Data Register High" */
SFR_NOABS (CAN_MODATAH15, CAN_MODATAHm_t, CAN_MODATAH15_ADDR); /* "CAN Message Object 15 Data Register High" */
SFR_NOABS (CAN_MODATAH16, CAN_MODATAHm_t, CAN_MODATAH16_ADDR); /* "CAN Message Object 16 Data Register High" */
SFR_NOABS (CAN_MODATAH17, CAN_MODATAHm_t, CAN_MODATAH17_ADDR); /* "CAN Message Object 17 Data Register High" */
SFR_NOABS (CAN_MODATAH18, CAN_MODATAHm_t, CAN_MODATAH18_ADDR); /* "CAN Message Object 18 Data Register High" */
SFR_NOABS (CAN_MODATAH19, CAN_MODATAHm_t, CAN_MODATAH19_ADDR); /* "CAN Message Object 19 Data Register High" */
SFR_NOABS (CAN_MODATAH2, CAN_MODATAHm_t, CAN_MODATAH2_ADDR); /* "CAN Message Object 2 Data Register High" */
SFR_NOABS (CAN_MODATAH20, CAN_MODATAHm_t, CAN_MODATAH20_ADDR); /* "CAN Message Object 20 Data Register High" */
SFR_NOABS (CAN_MODATAH21, CAN_MODATAHm_t, CAN_MODATAH21_ADDR); /* "CAN Message Object 21 Data Register High" */
SFR_NOABS (CAN_MODATAH22, CAN_MODATAHm_t, CAN_MODATAH22_ADDR); /* "CAN Message Object 22 Data Register High" */
SFR_NOABS (CAN_MODATAH23, CAN_MODATAHm_t, CAN_MODATAH23_ADDR); /* "CAN Message Object 23 Data Register High" */
SFR_NOABS (CAN_MODATAH24, CAN_MODATAHm_t, CAN_MODATAH24_ADDR); /* "CAN Message Object 24 Data Register High" */
SFR_NOABS (CAN_MODATAH25, CAN_MODATAHm_t, CAN_MODATAH25_ADDR); /* "CAN Message Object 25 Data Register High" */
SFR_NOABS (CAN_MODATAH26, CAN_MODATAHm_t, CAN_MODATAH26_ADDR); /* "CAN Message Object 26 Data Register High" */
SFR_NOABS (CAN_MODATAH27, CAN_MODATAHm_t, CAN_MODATAH27_ADDR); /* "CAN Message Object 27 Data Register High" */
SFR_NOABS (CAN_MODATAH28, CAN_MODATAHm_t, CAN_MODATAH28_ADDR); /* "CAN Message Object 28 Data Register High" */
SFR_NOABS (CAN_MODATAH29, CAN_MODATAHm_t, CAN_MODATAH29_ADDR); /* "CAN Message Object 29 Data Register High" */
SFR_NOABS (CAN_MODATAH3, CAN_MODATAHm_t, CAN_MODATAH3_ADDR); /* "CAN Message Object 3 Data Register High" */
SFR_NOABS (CAN_MODATAH30, CAN_MODATAHm_t, CAN_MODATAH30_ADDR); /* "CAN Message Object 30 Data Register High" */
SFR_NOABS (CAN_MODATAH31, CAN_MODATAHm_t, CAN_MODATAH31_ADDR); /* "CAN Message Object 31 Data Register High" */
SFR_NOABS (CAN_MODATAH32, CAN_MODATAHm_t, CAN_MODATAH32_ADDR); /* "CAN Message Object 32 Data Register High" */
SFR_NOABS (CAN_MODATAH33, CAN_MODATAHm_t, CAN_MODATAH33_ADDR); /* "CAN Message Object 33 Data Register High" */
SFR_NOABS (CAN_MODATAH34, CAN_MODATAHm_t, CAN_MODATAH34_ADDR); /* "CAN Message Object 34 Data Register High" */
SFR_NOABS (CAN_MODATAH35, CAN_MODATAHm_t, CAN_MODATAH35_ADDR); /* "CAN Message Object 35 Data Register High" */
SFR_NOABS (CAN_MODATAH36, CAN_MODATAHm_t, CAN_MODATAH36_ADDR); /* "CAN Message Object 36 Data Register High" */
SFR_NOABS (CAN_MODATAH37, CAN_MODATAHm_t, CAN_MODATAH37_ADDR); /* "CAN Message Object 37 Data Register High" */
SFR_NOABS (CAN_MODATAH38, CAN_MODATAHm_t, CAN_MODATAH38_ADDR); /* "CAN Message Object 38 Data Register High" */
SFR_NOABS (CAN_MODATAH39, CAN_MODATAHm_t, CAN_MODATAH39_ADDR); /* "CAN Message Object 39 Data Register High" */
SFR_NOABS (CAN_MODATAH4, CAN_MODATAHm_t, CAN_MODATAH4_ADDR); /* "CAN Message Object 4 Data Register High" */
SFR_NOABS (CAN_MODATAH40, CAN_MODATAHm_t, CAN_MODATAH40_ADDR); /* "CAN Message Object 40 Data Register High" */
SFR_NOABS (CAN_MODATAH41, CAN_MODATAHm_t, CAN_MODATAH41_ADDR); /* "CAN Message Object 41 Data Register High" */
SFR_NOABS (CAN_MODATAH42, CAN_MODATAHm_t, CAN_MODATAH42_ADDR); /* "CAN Message Object 42 Data Register High" */
SFR_NOABS (CAN_MODATAH43, CAN_MODATAHm_t, CAN_MODATAH43_ADDR); /* "CAN Message Object 43 Data Register High" */
SFR_NOABS (CAN_MODATAH44, CAN_MODATAHm_t, CAN_MODATAH44_ADDR); /* "CAN Message Object 44 Data Register High" */
SFR_NOABS (CAN_MODATAH45, CAN_MODATAHm_t, CAN_MODATAH45_ADDR); /* "CAN Message Object 45 Data Register High" */
SFR_NOABS (CAN_MODATAH46, CAN_MODATAHm_t, CAN_MODATAH46_ADDR); /* "CAN Message Object 46 Data Register High" */
SFR_NOABS (CAN_MODATAH47, CAN_MODATAHm_t, CAN_MODATAH47_ADDR); /* "CAN Message Object 47 Data Register High" */
SFR_NOABS (CAN_MODATAH48, CAN_MODATAHm_t, CAN_MODATAH48_ADDR); /* "CAN Message Object 48 Data Register High" */
SFR_NOABS (CAN_MODATAH49, CAN_MODATAHm_t, CAN_MODATAH49_ADDR); /* "CAN Message Object 49 Data Register High" */
SFR_NOABS (CAN_MODATAH5, CAN_MODATAHm_t, CAN_MODATAH5_ADDR); /* "CAN Message Object 5 Data Register High" */
SFR_NOABS (CAN_MODATAH50, CAN_MODATAHm_t, CAN_MODATAH50_ADDR); /* "CAN Message Object 50 Data Register High" */
SFR_NOABS (CAN_MODATAH51, CAN_MODATAHm_t, CAN_MODATAH51_ADDR); /* "CAN Message Object 51 Data Register High" */
SFR_NOABS (CAN_MODATAH52, CAN_MODATAHm_t, CAN_MODATAH52_ADDR); /* "CAN Message Object 52 Data Register High" */
SFR_NOABS (CAN_MODATAH53, CAN_MODATAHm_t, CAN_MODATAH53_ADDR); /* "CAN Message Object 53 Data Register High" */
SFR_NOABS (CAN_MODATAH54, CAN_MODATAHm_t, CAN_MODATAH54_ADDR); /* "CAN Message Object 54 Data Register High" */
SFR_NOABS (CAN_MODATAH55, CAN_MODATAHm_t, CAN_MODATAH55_ADDR); /* "CAN Message Object 55 Data Register High" */
SFR_NOABS (CAN_MODATAH56, CAN_MODATAHm_t, CAN_MODATAH56_ADDR); /* "CAN Message Object 56 Data Register High" */
SFR_NOABS (CAN_MODATAH57, CAN_MODATAHm_t, CAN_MODATAH57_ADDR); /* "CAN Message Object 57 Data Register High" */
SFR_NOABS (CAN_MODATAH58, CAN_MODATAHm_t, CAN_MODATAH58_ADDR); /* "CAN Message Object 58 Data Register High" */
SFR_NOABS (CAN_MODATAH59, CAN_MODATAHm_t, CAN_MODATAH59_ADDR); /* "CAN Message Object 59 Data Register High" */
SFR_NOABS (CAN_MODATAH6, CAN_MODATAHm_t, CAN_MODATAH6_ADDR); /* "CAN Message Object 6 Data Register High" */
SFR_NOABS (CAN_MODATAH60, CAN_MODATAHm_t, CAN_MODATAH60_ADDR); /* "CAN Message Object 60 Data Register High" */
SFR_NOABS (CAN_MODATAH61, CAN_MODATAHm_t, CAN_MODATAH61_ADDR); /* "CAN Message Object 61 Data Register High" */
SFR_NOABS (CAN_MODATAH62, CAN_MODATAHm_t, CAN_MODATAH62_ADDR); /* "CAN Message Object 62 Data Register High" */
SFR_NOABS (CAN_MODATAH63, CAN_MODATAHm_t, CAN_MODATAH63_ADDR); /* "CAN Message Object 63 Data Register High" */
SFR_NOABS (CAN_MODATAH7, CAN_MODATAHm_t, CAN_MODATAH7_ADDR); /* "CAN Message Object 7 Data Register High" */
SFR_NOABS (CAN_MODATAH8, CAN_MODATAHm_t, CAN_MODATAH8_ADDR); /* "CAN Message Object 8 Data Register High" */
SFR_NOABS (CAN_MODATAH9, CAN_MODATAHm_t, CAN_MODATAH9_ADDR); /* "CAN Message Object 9 Data Register High" */
SFR_NOABS (CAN_MODATAL0, CAN_MODATALm_t, CAN_MODATAL0_ADDR); /* "CAN Message Object 0 Data Register Low" */
SFR_NOABS (CAN_MODATAL1, CAN_MODATALm_t, CAN_MODATAL1_ADDR); /* "CAN Message Object 1 Data Register Low" */
SFR_NOABS (CAN_MODATAL10, CAN_MODATALm_t, CAN_MODATAL10_ADDR); /* "CAN Message Object 10 Data Register Low" */
SFR_NOABS (CAN_MODATAL11, CAN_MODATALm_t, CAN_MODATAL11_ADDR); /* "CAN Message Object 11 Data Register Low" */
SFR_NOABS (CAN_MODATAL12, CAN_MODATALm_t, CAN_MODATAL12_ADDR); /* "CAN Message Object 12 Data Register Low" */
SFR_NOABS (CAN_MODATAL13, CAN_MODATALm_t, CAN_MODATAL13_ADDR); /* "CAN Message Object 13 Data Register Low" */
SFR_NOABS (CAN_MODATAL14, CAN_MODATALm_t, CAN_MODATAL14_ADDR); /* "CAN Message Object 14 Data Register Low" */
SFR_NOABS (CAN_MODATAL15, CAN_MODATALm_t, CAN_MODATAL15_ADDR); /* "CAN Message Object 15 Data Register Low" */
SFR_NOABS (CAN_MODATAL16, CAN_MODATALm_t, CAN_MODATAL16_ADDR); /* "CAN Message Object 16 Data Register Low" */
SFR_NOABS (CAN_MODATAL17, CAN_MODATALm_t, CAN_MODATAL17_ADDR); /* "CAN Message Object 17 Data Register Low" */
SFR_NOABS (CAN_MODATAL18, CAN_MODATALm_t, CAN_MODATAL18_ADDR); /* "CAN Message Object 18 Data Register Low" */
SFR_NOABS (CAN_MODATAL19, CAN_MODATALm_t, CAN_MODATAL19_ADDR); /* "CAN Message Object 19 Data Register Low" */
SFR_NOABS (CAN_MODATAL2, CAN_MODATALm_t, CAN_MODATAL2_ADDR); /* "CAN Message Object 2 Data Register Low" */
SFR_NOABS (CAN_MODATAL20, CAN_MODATALm_t, CAN_MODATAL20_ADDR); /* "CAN Message Object 20 Data Register Low" */
SFR_NOABS (CAN_MODATAL21, CAN_MODATALm_t, CAN_MODATAL21_ADDR); /* "CAN Message Object 21 Data Register Low" */
SFR_NOABS (CAN_MODATAL22, CAN_MODATALm_t, CAN_MODATAL22_ADDR); /* "CAN Message Object 22 Data Register Low" */
SFR_NOABS (CAN_MODATAL23, CAN_MODATALm_t, CAN_MODATAL23_ADDR); /* "CAN Message Object 23 Data Register Low" */
SFR_NOABS (CAN_MODATAL24, CAN_MODATALm_t, CAN_MODATAL24_ADDR); /* "CAN Message Object 24 Data Register Low" */
SFR_NOABS (CAN_MODATAL25, CAN_MODATALm_t, CAN_MODATAL25_ADDR); /* "CAN Message Object 25 Data Register Low" */
SFR_NOABS (CAN_MODATAL26, CAN_MODATALm_t, CAN_MODATAL26_ADDR); /* "CAN Message Object 26 Data Register Low" */
SFR_NOABS (CAN_MODATAL27, CAN_MODATALm_t, CAN_MODATAL27_ADDR); /* "CAN Message Object 27 Data Register Low" */
SFR_NOABS (CAN_MODATAL28, CAN_MODATALm_t, CAN_MODATAL28_ADDR); /* "CAN Message Object 28 Data Register Low" */
SFR_NOABS (CAN_MODATAL29, CAN_MODATALm_t, CAN_MODATAL29_ADDR); /* "CAN Message Object 29 Data Register Low" */
SFR_NOABS (CAN_MODATAL3, CAN_MODATALm_t, CAN_MODATAL3_ADDR); /* "CAN Message Object 3 Data Register Low" */
SFR_NOABS (CAN_MODATAL30, CAN_MODATALm_t, CAN_MODATAL30_ADDR); /* "CAN Message Object 30 Data Register Low" */
SFR_NOABS (CAN_MODATAL31, CAN_MODATALm_t, CAN_MODATAL31_ADDR); /* "CAN Message Object 31 Data Register Low" */
SFR_NOABS (CAN_MODATAL32, CAN_MODATALm_t, CAN_MODATAL32_ADDR); /* "CAN Message Object 32 Data Register Low" */
SFR_NOABS (CAN_MODATAL33, CAN_MODATALm_t, CAN_MODATAL33_ADDR); /* "CAN Message Object 33 Data Register Low" */
SFR_NOABS (CAN_MODATAL34, CAN_MODATALm_t, CAN_MODATAL34_ADDR); /* "CAN Message Object 34 Data Register Low" */
SFR_NOABS (CAN_MODATAL35, CAN_MODATALm_t, CAN_MODATAL35_ADDR); /* "CAN Message Object 35 Data Register Low" */
SFR_NOABS (CAN_MODATAL36, CAN_MODATALm_t, CAN_MODATAL36_ADDR); /* "CAN Message Object 36 Data Register Low" */
SFR_NOABS (CAN_MODATAL37, CAN_MODATALm_t, CAN_MODATAL37_ADDR); /* "CAN Message Object 37 Data Register Low" */
SFR_NOABS (CAN_MODATAL38, CAN_MODATALm_t, CAN_MODATAL38_ADDR); /* "CAN Message Object 38 Data Register Low" */
SFR_NOABS (CAN_MODATAL39, CAN_MODATALm_t, CAN_MODATAL39_ADDR); /* "CAN Message Object 39 Data Register Low" */
SFR_NOABS (CAN_MODATAL4, CAN_MODATALm_t, CAN_MODATAL4_ADDR); /* "CAN Message Object 4 Data Register Low" */
SFR_NOABS (CAN_MODATAL40, CAN_MODATALm_t, CAN_MODATAL40_ADDR); /* "CAN Message Object 40 Data Register Low" */
SFR_NOABS (CAN_MODATAL41, CAN_MODATALm_t, CAN_MODATAL41_ADDR); /* "CAN Message Object 41 Data Register Low" */
SFR_NOABS (CAN_MODATAL42, CAN_MODATALm_t, CAN_MODATAL42_ADDR); /* "CAN Message Object 42 Data Register Low" */
SFR_NOABS (CAN_MODATAL43, CAN_MODATALm_t, CAN_MODATAL43_ADDR); /* "CAN Message Object 43 Data Register Low" */
SFR_NOABS (CAN_MODATAL44, CAN_MODATALm_t, CAN_MODATAL44_ADDR); /* "CAN Message Object 44 Data Register Low" */
SFR_NOABS (CAN_MODATAL45, CAN_MODATALm_t, CAN_MODATAL45_ADDR); /* "CAN Message Object 45 Data Register Low" */
SFR_NOABS (CAN_MODATAL46, CAN_MODATALm_t, CAN_MODATAL46_ADDR); /* "CAN Message Object 46 Data Register Low" */
SFR_NOABS (CAN_MODATAL47, CAN_MODATALm_t, CAN_MODATAL47_ADDR); /* "CAN Message Object 47 Data Register Low" */
SFR_NOABS (CAN_MODATAL48, CAN_MODATALm_t, CAN_MODATAL48_ADDR); /* "CAN Message Object 48 Data Register Low" */
SFR_NOABS (CAN_MODATAL49, CAN_MODATALm_t, CAN_MODATAL49_ADDR); /* "CAN Message Object 49 Data Register Low" */
SFR_NOABS (CAN_MODATAL5, CAN_MODATALm_t, CAN_MODATAL5_ADDR); /* "CAN Message Object 5 Data Register Low" */
SFR_NOABS (CAN_MODATAL50, CAN_MODATALm_t, CAN_MODATAL50_ADDR); /* "CAN Message Object 50 Data Register Low" */
SFR_NOABS (CAN_MODATAL51, CAN_MODATALm_t, CAN_MODATAL51_ADDR); /* "CAN Message Object 51 Data Register Low" */
SFR_NOABS (CAN_MODATAL52, CAN_MODATALm_t, CAN_MODATAL52_ADDR); /* "CAN Message Object 52 Data Register Low" */
SFR_NOABS (CAN_MODATAL53, CAN_MODATALm_t, CAN_MODATAL53_ADDR); /* "CAN Message Object 53 Data Register Low" */
SFR_NOABS (CAN_MODATAL54, CAN_MODATALm_t, CAN_MODATAL54_ADDR); /* "CAN Message Object 54 Data Register Low" */
SFR_NOABS (CAN_MODATAL55, CAN_MODATALm_t, CAN_MODATAL55_ADDR); /* "CAN Message Object 55 Data Register Low" */
SFR_NOABS (CAN_MODATAL56, CAN_MODATALm_t, CAN_MODATAL56_ADDR); /* "CAN Message Object 56 Data Register Low" */
SFR_NOABS (CAN_MODATAL57, CAN_MODATALm_t, CAN_MODATAL57_ADDR); /* "CAN Message Object 57 Data Register Low" */
SFR_NOABS (CAN_MODATAL58, CAN_MODATALm_t, CAN_MODATAL58_ADDR); /* "CAN Message Object 58 Data Register Low" */
SFR_NOABS (CAN_MODATAL59, CAN_MODATALm_t, CAN_MODATAL59_ADDR); /* "CAN Message Object 59 Data Register Low" */
SFR_NOABS (CAN_MODATAL6, CAN_MODATALm_t, CAN_MODATAL6_ADDR); /* "CAN Message Object 6 Data Register Low" */
SFR_NOABS (CAN_MODATAL60, CAN_MODATALm_t, CAN_MODATAL60_ADDR); /* "CAN Message Object 60 Data Register Low" */
SFR_NOABS (CAN_MODATAL61, CAN_MODATALm_t, CAN_MODATAL61_ADDR); /* "CAN Message Object 61 Data Register Low" */
SFR_NOABS (CAN_MODATAL62, CAN_MODATALm_t, CAN_MODATAL62_ADDR); /* "CAN Message Object 62 Data Register Low" */
SFR_NOABS (CAN_MODATAL63, CAN_MODATALm_t, CAN_MODATAL63_ADDR); /* "CAN Message Object 63 Data Register Low" */
SFR_NOABS (CAN_MODATAL7, CAN_MODATALm_t, CAN_MODATAL7_ADDR); /* "CAN Message Object 7 Data Register Low" */
SFR_NOABS (CAN_MODATAL8, CAN_MODATALm_t, CAN_MODATAL8_ADDR); /* "CAN Message Object 8 Data Register Low" */
SFR_NOABS (CAN_MODATAL9, CAN_MODATALm_t, CAN_MODATAL9_ADDR); /* "CAN Message Object 9 Data Register Low" */
SFR_NOABS (CAN_MOFCR0, CAN_MOFCRm_t, CAN_MOFCR0_ADDR); /* "CAN Message Object 0 Function Control Register" */
SFR_NOABS (CAN_MOFCR1, CAN_MOFCRm_t, CAN_MOFCR1_ADDR); /* "CAN Message Object 1 Function Control Register" */
SFR_NOABS (CAN_MOFCR10, CAN_MOFCRm_t, CAN_MOFCR10_ADDR); /* "CAN Message Object 10 Function Control Register" */
SFR_NOABS (CAN_MOFCR11, CAN_MOFCRm_t, CAN_MOFCR11_ADDR); /* "CAN Message Object 11 Function Control Register" */
SFR_NOABS (CAN_MOFCR12, CAN_MOFCRm_t, CAN_MOFCR12_ADDR); /* "CAN Message Object 12 Function Control Register" */
SFR_NOABS (CAN_MOFCR13, CAN_MOFCRm_t, CAN_MOFCR13_ADDR); /* "CAN Message Object 13 Function Control Register" */
SFR_NOABS (CAN_MOFCR14, CAN_MOFCRm_t, CAN_MOFCR14_ADDR); /* "CAN Message Object 14 Function Control Register" */
SFR_NOABS (CAN_MOFCR15, CAN_MOFCRm_t, CAN_MOFCR15_ADDR); /* "CAN Message Object 15 Function Control Register" */
SFR_NOABS (CAN_MOFCR16, CAN_MOFCRm_t, CAN_MOFCR16_ADDR); /* "CAN Message Object 16 Function Control Register" */
SFR_NOABS (CAN_MOFCR17, CAN_MOFCRm_t, CAN_MOFCR17_ADDR); /* "CAN Message Object 17 Function Control Register" */
SFR_NOABS (CAN_MOFCR18, CAN_MOFCRm_t, CAN_MOFCR18_ADDR); /* "CAN Message Object 18 Function Control Register" */
SFR_NOABS (CAN_MOFCR19, CAN_MOFCRm_t, CAN_MOFCR19_ADDR); /* "CAN Message Object 19 Function Control Register" */
SFR_NOABS (CAN_MOFCR2, CAN_MOFCRm_t, CAN_MOFCR2_ADDR); /* "CAN Message Object 2 Function Control Register" */
SFR_NOABS (CAN_MOFCR20, CAN_MOFCRm_t, CAN_MOFCR20_ADDR); /* "CAN Message Object 20 Function Control Register" */
SFR_NOABS (CAN_MOFCR21, CAN_MOFCRm_t, CAN_MOFCR21_ADDR); /* "CAN Message Object 21 Function Control Register" */
SFR_NOABS (CAN_MOFCR22, CAN_MOFCRm_t, CAN_MOFCR22_ADDR); /* "CAN Message Object 22 Function Control Register" */
SFR_NOABS (CAN_MOFCR23, CAN_MOFCRm_t, CAN_MOFCR23_ADDR); /* "CAN Message Object 23 Function Control Register" */
SFR_NOABS (CAN_MOFCR24, CAN_MOFCRm_t, CAN_MOFCR24_ADDR); /* "CAN Message Object 24 Function Control Register" */
SFR_NOABS (CAN_MOFCR25, CAN_MOFCRm_t, CAN_MOFCR25_ADDR); /* "CAN Message Object 25 Function Control Register" */
SFR_NOABS (CAN_MOFCR26, CAN_MOFCRm_t, CAN_MOFCR26_ADDR); /* "CAN Message Object 26 Function Control Register" */
SFR_NOABS (CAN_MOFCR27, CAN_MOFCRm_t, CAN_MOFCR27_ADDR); /* "CAN Message Object 27 Function Control Register" */
SFR_NOABS (CAN_MOFCR28, CAN_MOFCRm_t, CAN_MOFCR28_ADDR); /* "CAN Message Object 28 Function Control Register" */
SFR_NOABS (CAN_MOFCR29, CAN_MOFCRm_t, CAN_MOFCR29_ADDR); /* "CAN Message Object 29 Function Control Register" */
SFR_NOABS (CAN_MOFCR3, CAN_MOFCRm_t, CAN_MOFCR3_ADDR); /* "CAN Message Object 3 Function Control Register" */
SFR_NOABS (CAN_MOFCR30, CAN_MOFCRm_t, CAN_MOFCR30_ADDR); /* "CAN Message Object 30 Function Control Register" */
SFR_NOABS (CAN_MOFCR31, CAN_MOFCRm_t, CAN_MOFCR31_ADDR); /* "CAN Message Object 31 Function Control Register" */
SFR_NOABS (CAN_MOFCR32, CAN_MOFCRm_t, CAN_MOFCR32_ADDR); /* "CAN Message Object 32 Function Control Register" */
SFR_NOABS (CAN_MOFCR33, CAN_MOFCRm_t, CAN_MOFCR33_ADDR); /* "CAN Message Object 33 Function Control Register" */
SFR_NOABS (CAN_MOFCR34, CAN_MOFCRm_t, CAN_MOFCR34_ADDR); /* "CAN Message Object 34 Function Control Register" */
SFR_NOABS (CAN_MOFCR35, CAN_MOFCRm_t, CAN_MOFCR35_ADDR); /* "CAN Message Object 35 Function Control Register" */
SFR_NOABS (CAN_MOFCR36, CAN_MOFCRm_t, CAN_MOFCR36_ADDR); /* "CAN Message Object 36 Function Control Register" */
SFR_NOABS (CAN_MOFCR37, CAN_MOFCRm_t, CAN_MOFCR37_ADDR); /* "CAN Message Object 37 Function Control Register" */
SFR_NOABS (CAN_MOFCR38, CAN_MOFCRm_t, CAN_MOFCR38_ADDR); /* "CAN Message Object 38 Function Control Register" */
SFR_NOABS (CAN_MOFCR39, CAN_MOFCRm_t, CAN_MOFCR39_ADDR); /* "CAN Message Object 39 Function Control Register" */
SFR_NOABS (CAN_MOFCR4, CAN_MOFCRm_t, CAN_MOFCR4_ADDR); /* "CAN Message Object 4 Function Control Register" */
SFR_NOABS (CAN_MOFCR40, CAN_MOFCRm_t, CAN_MOFCR40_ADDR); /* "CAN Message Object 40 Function Control Register" */
SFR_NOABS (CAN_MOFCR41, CAN_MOFCRm_t, CAN_MOFCR41_ADDR); /* "CAN Message Object 41 Function Control Register" */
SFR_NOABS (CAN_MOFCR42, CAN_MOFCRm_t, CAN_MOFCR42_ADDR); /* "CAN Message Object 42 Function Control Register" */
SFR_NOABS (CAN_MOFCR43, CAN_MOFCRm_t, CAN_MOFCR43_ADDR); /* "CAN Message Object 43 Function Control Register" */
SFR_NOABS (CAN_MOFCR44, CAN_MOFCRm_t, CAN_MOFCR44_ADDR); /* "CAN Message Object 44 Function Control Register" */
SFR_NOABS (CAN_MOFCR45, CAN_MOFCRm_t, CAN_MOFCR45_ADDR); /* "CAN Message Object 45 Function Control Register" */
SFR_NOABS (CAN_MOFCR46, CAN_MOFCRm_t, CAN_MOFCR46_ADDR); /* "CAN Message Object 46 Function Control Register" */
SFR_NOABS (CAN_MOFCR47, CAN_MOFCRm_t, CAN_MOFCR47_ADDR); /* "CAN Message Object 47 Function Control Register" */
SFR_NOABS (CAN_MOFCR48, CAN_MOFCRm_t, CAN_MOFCR48_ADDR); /* "CAN Message Object 48 Function Control Register" */
SFR_NOABS (CAN_MOFCR49, CAN_MOFCRm_t, CAN_MOFCR49_ADDR); /* "CAN Message Object 49 Function Control Register" */
SFR_NOABS (CAN_MOFCR5, CAN_MOFCRm_t, CAN_MOFCR5_ADDR); /* "CAN Message Object 5 Function Control Register" */
SFR_NOABS (CAN_MOFCR50, CAN_MOFCRm_t, CAN_MOFCR50_ADDR); /* "CAN Message Object 50 Function Control Register" */
SFR_NOABS (CAN_MOFCR51, CAN_MOFCRm_t, CAN_MOFCR51_ADDR); /* "CAN Message Object 51 Function Control Register" */
SFR_NOABS (CAN_MOFCR52, CAN_MOFCRm_t, CAN_MOFCR52_ADDR); /* "CAN Message Object 52 Function Control Register" */
SFR_NOABS (CAN_MOFCR53, CAN_MOFCRm_t, CAN_MOFCR53_ADDR); /* "CAN Message Object 53 Function Control Register" */
SFR_NOABS (CAN_MOFCR54, CAN_MOFCRm_t, CAN_MOFCR54_ADDR); /* "CAN Message Object 54 Function Control Register" */
SFR_NOABS (CAN_MOFCR55, CAN_MOFCRm_t, CAN_MOFCR55_ADDR); /* "CAN Message Object 55 Function Control Register" */
SFR_NOABS (CAN_MOFCR56, CAN_MOFCRm_t, CAN_MOFCR56_ADDR); /* "CAN Message Object 56 Function Control Register" */
SFR_NOABS (CAN_MOFCR57, CAN_MOFCRm_t, CAN_MOFCR57_ADDR); /* "CAN Message Object 57 Function Control Register" */
SFR_NOABS (CAN_MOFCR58, CAN_MOFCRm_t, CAN_MOFCR58_ADDR); /* "CAN Message Object 58 Function Control Register" */
SFR_NOABS (CAN_MOFCR59, CAN_MOFCRm_t, CAN_MOFCR59_ADDR); /* "CAN Message Object 59 Function Control Register" */
SFR_NOABS (CAN_MOFCR6, CAN_MOFCRm_t, CAN_MOFCR6_ADDR); /* "CAN Message Object 6 Function Control Register" */
SFR_NOABS (CAN_MOFCR60, CAN_MOFCRm_t, CAN_MOFCR60_ADDR); /* "CAN Message Object 60 Function Control Register" */
SFR_NOABS (CAN_MOFCR61, CAN_MOFCRm_t, CAN_MOFCR61_ADDR); /* "CAN Message Object 61 Function Control Register" */
SFR_NOABS (CAN_MOFCR62, CAN_MOFCRm_t, CAN_MOFCR62_ADDR); /* "CAN Message Object 62 Function Control Register" */
SFR_NOABS (CAN_MOFCR63, CAN_MOFCRm_t, CAN_MOFCR63_ADDR); /* "CAN Message Object 63 Function Control Register" */
SFR_NOABS (CAN_MOFCR7, CAN_MOFCRm_t, CAN_MOFCR7_ADDR); /* "CAN Message Object 7 Function Control Register" */
SFR_NOABS (CAN_MOFCR8, CAN_MOFCRm_t, CAN_MOFCR8_ADDR); /* "CAN Message Object 8 Function Control Register" */
SFR_NOABS (CAN_MOFCR9, CAN_MOFCRm_t, CAN_MOFCR9_ADDR); /* "CAN Message Object 9 Function Control Register" */
SFR_NOABS (CAN_MOFGPR0, CAN_MOFGPRm_t, CAN_MOFGPR0_ADDR); /* "CAN Message Object 0 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR1, CAN_MOFGPRm_t, CAN_MOFGPR1_ADDR); /* "CAN Message Object 1 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR10, CAN_MOFGPRm_t, CAN_MOFGPR10_ADDR); /* "CAN Message Object 10 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR11, CAN_MOFGPRm_t, CAN_MOFGPR11_ADDR); /* "CAN Message Object 11 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR12, CAN_MOFGPRm_t, CAN_MOFGPR12_ADDR); /* "CAN Message Object 12 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR13, CAN_MOFGPRm_t, CAN_MOFGPR13_ADDR); /* "CAN Message Object 13 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR14, CAN_MOFGPRm_t, CAN_MOFGPR14_ADDR); /* "CAN Message Object 14 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR15, CAN_MOFGPRm_t, CAN_MOFGPR15_ADDR); /* "CAN Message Object 15 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR16, CAN_MOFGPRm_t, CAN_MOFGPR16_ADDR); /* "CAN Message Object 16 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR17, CAN_MOFGPRm_t, CAN_MOFGPR17_ADDR); /* "CAN Message Object 17 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR18, CAN_MOFGPRm_t, CAN_MOFGPR18_ADDR); /* "CAN Message Object 18 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR19, CAN_MOFGPRm_t, CAN_MOFGPR19_ADDR); /* "CAN Message Object 19 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR2, CAN_MOFGPRm_t, CAN_MOFGPR2_ADDR); /* "CAN Message Object 2 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR20, CAN_MOFGPRm_t, CAN_MOFGPR20_ADDR); /* "CAN Message Object 20 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR21, CAN_MOFGPRm_t, CAN_MOFGPR21_ADDR); /* "CAN Message Object 21 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR22, CAN_MOFGPRm_t, CAN_MOFGPR22_ADDR); /* "CAN Message Object 22 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR23, CAN_MOFGPRm_t, CAN_MOFGPR23_ADDR); /* "CAN Message Object 23 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR24, CAN_MOFGPRm_t, CAN_MOFGPR24_ADDR); /* "CAN Message Object 24 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR25, CAN_MOFGPRm_t, CAN_MOFGPR25_ADDR); /* "CAN Message Object 25 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR26, CAN_MOFGPRm_t, CAN_MOFGPR26_ADDR); /* "CAN Message Object 26 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR27, CAN_MOFGPRm_t, CAN_MOFGPR27_ADDR); /* "CAN Message Object 27 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR28, CAN_MOFGPRm_t, CAN_MOFGPR28_ADDR); /* "CAN Message Object 28 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR29, CAN_MOFGPRm_t, CAN_MOFGPR29_ADDR); /* "CAN Message Object 29 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR3, CAN_MOFGPRm_t, CAN_MOFGPR3_ADDR); /* "CAN Message Object 3 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR30, CAN_MOFGPRm_t, CAN_MOFGPR30_ADDR); /* "CAN Message Object 30 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR31, CAN_MOFGPRm_t, CAN_MOFGPR31_ADDR); /* "CAN Message Object 31 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR32, CAN_MOFGPRm_t, CAN_MOFGPR32_ADDR); /* "CAN Message Object 32 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR33, CAN_MOFGPRm_t, CAN_MOFGPR33_ADDR); /* "CAN Message Object 33 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR34, CAN_MOFGPRm_t, CAN_MOFGPR34_ADDR); /* "CAN Message Object 34 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR35, CAN_MOFGPRm_t, CAN_MOFGPR35_ADDR); /* "CAN Message Object 35 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR36, CAN_MOFGPRm_t, CAN_MOFGPR36_ADDR); /* "CAN Message Object 36 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR37, CAN_MOFGPRm_t, CAN_MOFGPR37_ADDR); /* "CAN Message Object 37 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR38, CAN_MOFGPRm_t, CAN_MOFGPR38_ADDR); /* "CAN Message Object 38 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR39, CAN_MOFGPRm_t, CAN_MOFGPR39_ADDR); /* "CAN Message Object 39 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR4, CAN_MOFGPRm_t, CAN_MOFGPR4_ADDR); /* "CAN Message Object 4 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR40, CAN_MOFGPRm_t, CAN_MOFGPR40_ADDR); /* "CAN Message Object 40 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR41, CAN_MOFGPRm_t, CAN_MOFGPR41_ADDR); /* "CAN Message Object 41 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR42, CAN_MOFGPRm_t, CAN_MOFGPR42_ADDR); /* "CAN Message Object 42 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR43, CAN_MOFGPRm_t, CAN_MOFGPR43_ADDR); /* "CAN Message Object 43 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR44, CAN_MOFGPRm_t, CAN_MOFGPR44_ADDR); /* "CAN Message Object 44 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR45, CAN_MOFGPRm_t, CAN_MOFGPR45_ADDR); /* "CAN Message Object 45 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR46, CAN_MOFGPRm_t, CAN_MOFGPR46_ADDR); /* "CAN Message Object 46 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR47, CAN_MOFGPRm_t, CAN_MOFGPR47_ADDR); /* "CAN Message Object 47 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR48, CAN_MOFGPRm_t, CAN_MOFGPR48_ADDR); /* "CAN Message Object 48 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR49, CAN_MOFGPRm_t, CAN_MOFGPR49_ADDR); /* "CAN Message Object 49 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR5, CAN_MOFGPRm_t, CAN_MOFGPR5_ADDR); /* "CAN Message Object 5 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR50, CAN_MOFGPRm_t, CAN_MOFGPR50_ADDR); /* "CAN Message Object 50 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR51, CAN_MOFGPRm_t, CAN_MOFGPR51_ADDR); /* "CAN Message Object 51 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR52, CAN_MOFGPRm_t, CAN_MOFGPR52_ADDR); /* "CAN Message Object 52 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR53, CAN_MOFGPRm_t, CAN_MOFGPR53_ADDR); /* "CAN Message Object 53 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR54, CAN_MOFGPRm_t, CAN_MOFGPR54_ADDR); /* "CAN Message Object 54 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR55, CAN_MOFGPRm_t, CAN_MOFGPR55_ADDR); /* "CAN Message Object 55 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR56, CAN_MOFGPRm_t, CAN_MOFGPR56_ADDR); /* "CAN Message Object 56 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR57, CAN_MOFGPRm_t, CAN_MOFGPR57_ADDR); /* "CAN Message Object 57 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR58, CAN_MOFGPRm_t, CAN_MOFGPR58_ADDR); /* "CAN Message Object 58 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR59, CAN_MOFGPRm_t, CAN_MOFGPR59_ADDR); /* "CAN Message Object 59 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR6, CAN_MOFGPRm_t, CAN_MOFGPR6_ADDR); /* "CAN Message Object 6 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR60, CAN_MOFGPRm_t, CAN_MOFGPR60_ADDR); /* "CAN Message Object 60 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR61, CAN_MOFGPRm_t, CAN_MOFGPR61_ADDR); /* "CAN Message Object 61 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR62, CAN_MOFGPRm_t, CAN_MOFGPR62_ADDR); /* "CAN Message Object 62 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR63, CAN_MOFGPRm_t, CAN_MOFGPR63_ADDR); /* "CAN Message Object 63 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR7, CAN_MOFGPRm_t, CAN_MOFGPR7_ADDR); /* "CAN Message Object 7 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR8, CAN_MOFGPRm_t, CAN_MOFGPR8_ADDR); /* "CAN Message Object 8 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR9, CAN_MOFGPRm_t, CAN_MOFGPR9_ADDR); /* "CAN Message Object 9 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOIPR0, CAN_MOIPRm_t, CAN_MOIPR0_ADDR); /* "CAN Message Object 0 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR1, CAN_MOIPRm_t, CAN_MOIPR1_ADDR); /* "CAN Message Object 1 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR10, CAN_MOIPRm_t, CAN_MOIPR10_ADDR); /* "CAN Message Object 10 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR11, CAN_MOIPRm_t, CAN_MOIPR11_ADDR); /* "CAN Message Object 11 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR12, CAN_MOIPRm_t, CAN_MOIPR12_ADDR); /* "CAN Message Object 12 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR13, CAN_MOIPRm_t, CAN_MOIPR13_ADDR); /* "CAN Message Object 13 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR14, CAN_MOIPRm_t, CAN_MOIPR14_ADDR); /* "CAN Message Object 14 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR15, CAN_MOIPRm_t, CAN_MOIPR15_ADDR); /* "CAN Message Object 15 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR16, CAN_MOIPRm_t, CAN_MOIPR16_ADDR); /* "CAN Message Object 16 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR17, CAN_MOIPRm_t, CAN_MOIPR17_ADDR); /* "CAN Message Object 17 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR18, CAN_MOIPRm_t, CAN_MOIPR18_ADDR); /* "CAN Message Object 18 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR19, CAN_MOIPRm_t, CAN_MOIPR19_ADDR); /* "CAN Message Object 19 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR2, CAN_MOIPRm_t, CAN_MOIPR2_ADDR); /* "CAN Message Object 2 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR20, CAN_MOIPRm_t, CAN_MOIPR20_ADDR); /* "CAN Message Object 20 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR21, CAN_MOIPRm_t, CAN_MOIPR21_ADDR); /* "CAN Message Object 21 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR22, CAN_MOIPRm_t, CAN_MOIPR22_ADDR); /* "CAN Message Object 22 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR23, CAN_MOIPRm_t, CAN_MOIPR23_ADDR); /* "CAN Message Object 23 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR24, CAN_MOIPRm_t, CAN_MOIPR24_ADDR); /* "CAN Message Object 24 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR25, CAN_MOIPRm_t, CAN_MOIPR25_ADDR); /* "CAN Message Object 25 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR26, CAN_MOIPRm_t, CAN_MOIPR26_ADDR); /* "CAN Message Object 26 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR27, CAN_MOIPRm_t, CAN_MOIPR27_ADDR); /* "CAN Message Object 27 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR28, CAN_MOIPRm_t, CAN_MOIPR28_ADDR); /* "CAN Message Object 28 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR29, CAN_MOIPRm_t, CAN_MOIPR29_ADDR); /* "CAN Message Object 29 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR3, CAN_MOIPRm_t, CAN_MOIPR3_ADDR); /* "CAN Message Object 3 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR30, CAN_MOIPRm_t, CAN_MOIPR30_ADDR); /* "CAN Message Object 30 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR31, CAN_MOIPRm_t, CAN_MOIPR31_ADDR); /* "CAN Message Object 31 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR32, CAN_MOIPRm_t, CAN_MOIPR32_ADDR); /* "CAN Message Object 32 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR33, CAN_MOIPRm_t, CAN_MOIPR33_ADDR); /* "CAN Message Object 33 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR34, CAN_MOIPRm_t, CAN_MOIPR34_ADDR); /* "CAN Message Object 34 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR35, CAN_MOIPRm_t, CAN_MOIPR35_ADDR); /* "CAN Message Object 35 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR36, CAN_MOIPRm_t, CAN_MOIPR36_ADDR); /* "CAN Message Object 36 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR37, CAN_MOIPRm_t, CAN_MOIPR37_ADDR); /* "CAN Message Object 37 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR38, CAN_MOIPRm_t, CAN_MOIPR38_ADDR); /* "CAN Message Object 38 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR39, CAN_MOIPRm_t, CAN_MOIPR39_ADDR); /* "CAN Message Object 39 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR4, CAN_MOIPRm_t, CAN_MOIPR4_ADDR); /* "CAN Message Object 4 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR40, CAN_MOIPRm_t, CAN_MOIPR40_ADDR); /* "CAN Message Object 40 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR41, CAN_MOIPRm_t, CAN_MOIPR41_ADDR); /* "CAN Message Object 41 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR42, CAN_MOIPRm_t, CAN_MOIPR42_ADDR); /* "CAN Message Object 42 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR43, CAN_MOIPRm_t, CAN_MOIPR43_ADDR); /* "CAN Message Object 43 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR44, CAN_MOIPRm_t, CAN_MOIPR44_ADDR); /* "CAN Message Object 44 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR45, CAN_MOIPRm_t, CAN_MOIPR45_ADDR); /* "CAN Message Object 45 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR46, CAN_MOIPRm_t, CAN_MOIPR46_ADDR); /* "CAN Message Object 46 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR47, CAN_MOIPRm_t, CAN_MOIPR47_ADDR); /* "CAN Message Object 47 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR48, CAN_MOIPRm_t, CAN_MOIPR48_ADDR); /* "CAN Message Object 48 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR49, CAN_MOIPRm_t, CAN_MOIPR49_ADDR); /* "CAN Message Object 49 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR5, CAN_MOIPRm_t, CAN_MOIPR5_ADDR); /* "CAN Message Object 5 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR50, CAN_MOIPRm_t, CAN_MOIPR50_ADDR); /* "CAN Message Object 50 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR51, CAN_MOIPRm_t, CAN_MOIPR51_ADDR); /* "CAN Message Object 51 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR52, CAN_MOIPRm_t, CAN_MOIPR52_ADDR); /* "CAN Message Object 52 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR53, CAN_MOIPRm_t, CAN_MOIPR53_ADDR); /* "CAN Message Object 53 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR54, CAN_MOIPRm_t, CAN_MOIPR54_ADDR); /* "CAN Message Object 54 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR55, CAN_MOIPRm_t, CAN_MOIPR55_ADDR); /* "CAN Message Object 55 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR56, CAN_MOIPRm_t, CAN_MOIPR56_ADDR); /* "CAN Message Object 56 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR57, CAN_MOIPRm_t, CAN_MOIPR57_ADDR); /* "CAN Message Object 57 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR58, CAN_MOIPRm_t, CAN_MOIPR58_ADDR); /* "CAN Message Object 58 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR59, CAN_MOIPRm_t, CAN_MOIPR59_ADDR); /* "CAN Message Object 59 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR6, CAN_MOIPRm_t, CAN_MOIPR6_ADDR); /* "CAN Message Object 6 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR60, CAN_MOIPRm_t, CAN_MOIPR60_ADDR); /* "CAN Message Object 60 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR61, CAN_MOIPRm_t, CAN_MOIPR61_ADDR); /* "CAN Message Object 61 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR62, CAN_MOIPRm_t, CAN_MOIPR62_ADDR); /* "CAN Message Object 62 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR63, CAN_MOIPRm_t, CAN_MOIPR63_ADDR); /* "CAN Message Object 63 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR7, CAN_MOIPRm_t, CAN_MOIPR7_ADDR); /* "CAN Message Object 7 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR8, CAN_MOIPRm_t, CAN_MOIPR8_ADDR); /* "CAN Message Object 8 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR9, CAN_MOIPRm_t, CAN_MOIPR9_ADDR); /* "CAN Message Object 9 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOSTAT0, CAN_MOSTATm_t, CAN_MOSTAT0_ADDR); /* "CAN Message Object 0" */
SFR_NOABS (CAN_MOSTAT1, CAN_MOSTATm_t, CAN_MOSTAT1_ADDR); /* "CAN Message Object 1" */
SFR_NOABS (CAN_MOSTAT10, CAN_MOSTATm_t, CAN_MOSTAT10_ADDR); /* "CAN Message Object 10" */
SFR_NOABS (CAN_MOSTAT11, CAN_MOSTATm_t, CAN_MOSTAT11_ADDR); /* "CAN Message Object 11" */
SFR_NOABS (CAN_MOSTAT12, CAN_MOSTATm_t, CAN_MOSTAT12_ADDR); /* "CAN Message Object 12" */
SFR_NOABS (CAN_MOSTAT13, CAN_MOSTATm_t, CAN_MOSTAT13_ADDR); /* "CAN Message Object 13" */
SFR_NOABS (CAN_MOSTAT14, CAN_MOSTATm_t, CAN_MOSTAT14_ADDR); /* "CAN Message Object 14" */
SFR_NOABS (CAN_MOSTAT15, CAN_MOSTATm_t, CAN_MOSTAT15_ADDR); /* "CAN Message Object 15" */
SFR_NOABS (CAN_MOSTAT16, CAN_MOSTATm_t, CAN_MOSTAT16_ADDR); /* "CAN Message Object 16" */
SFR_NOABS (CAN_MOSTAT17, CAN_MOSTATm_t, CAN_MOSTAT17_ADDR); /* "CAN Message Object 17" */
SFR_NOABS (CAN_MOSTAT18, CAN_MOSTATm_t, CAN_MOSTAT18_ADDR); /* "CAN Message Object 18" */
SFR_NOABS (CAN_MOSTAT19, CAN_MOSTATm_t, CAN_MOSTAT19_ADDR); /* "CAN Message Object 19" */
SFR_NOABS (CAN_MOSTAT2, CAN_MOSTATm_t, CAN_MOSTAT2_ADDR); /* "CAN Message Object 2" */
SFR_NOABS (CAN_MOSTAT20, CAN_MOSTATm_t, CAN_MOSTAT20_ADDR); /* "CAN Message Object 20" */
SFR_NOABS (CAN_MOSTAT21, CAN_MOSTATm_t, CAN_MOSTAT21_ADDR); /* "CAN Message Object 21" */
SFR_NOABS (CAN_MOSTAT22, CAN_MOSTATm_t, CAN_MOSTAT22_ADDR); /* "CAN Message Object 22" */
SFR_NOABS (CAN_MOSTAT23, CAN_MOSTATm_t, CAN_MOSTAT23_ADDR); /* "CAN Message Object 23" */
SFR_NOABS (CAN_MOSTAT24, CAN_MOSTATm_t, CAN_MOSTAT24_ADDR); /* "CAN Message Object 24" */
SFR_NOABS (CAN_MOSTAT25, CAN_MOSTATm_t, CAN_MOSTAT25_ADDR); /* "CAN Message Object 25" */
SFR_NOABS (CAN_MOSTAT26, CAN_MOSTATm_t, CAN_MOSTAT26_ADDR); /* "CAN Message Object 26" */
SFR_NOABS (CAN_MOSTAT27, CAN_MOSTATm_t, CAN_MOSTAT27_ADDR); /* "CAN Message Object 27" */
SFR_NOABS (CAN_MOSTAT28, CAN_MOSTATm_t, CAN_MOSTAT28_ADDR); /* "CAN Message Object 28" */
SFR_NOABS (CAN_MOSTAT29, CAN_MOSTATm_t, CAN_MOSTAT29_ADDR); /* "CAN Message Object 29" */
SFR_NOABS (CAN_MOSTAT3, CAN_MOSTATm_t, CAN_MOSTAT3_ADDR); /* "CAN Message Object 3" */
SFR_NOABS (CAN_MOSTAT30, CAN_MOSTATm_t, CAN_MOSTAT30_ADDR); /* "CAN Message Object 30" */
SFR_NOABS (CAN_MOSTAT31, CAN_MOSTATm_t, CAN_MOSTAT31_ADDR); /* "CAN Message Object 31" */
SFR_NOABS (CAN_MOSTAT32, CAN_MOSTATm_t, CAN_MOSTAT32_ADDR); /* "CAN Message Object 32" */
SFR_NOABS (CAN_MOSTAT33, CAN_MOSTATm_t, CAN_MOSTAT33_ADDR); /* "CAN Message Object 33" */
SFR_NOABS (CAN_MOSTAT34, CAN_MOSTATm_t, CAN_MOSTAT34_ADDR); /* "CAN Message Object 34" */
SFR_NOABS (CAN_MOSTAT35, CAN_MOSTATm_t, CAN_MOSTAT35_ADDR); /* "CAN Message Object 35" */
SFR_NOABS (CAN_MOSTAT36, CAN_MOSTATm_t, CAN_MOSTAT36_ADDR); /* "CAN Message Object 36" */
SFR_NOABS (CAN_MOSTAT37, CAN_MOSTATm_t, CAN_MOSTAT37_ADDR); /* "CAN Message Object 37" */
SFR_NOABS (CAN_MOSTAT38, CAN_MOSTATm_t, CAN_MOSTAT38_ADDR); /* "CAN Message Object 38" */
SFR_NOABS (CAN_MOSTAT39, CAN_MOSTATm_t, CAN_MOSTAT39_ADDR); /* "CAN Message Object 39" */
SFR_NOABS (CAN_MOSTAT4, CAN_MOSTATm_t, CAN_MOSTAT4_ADDR); /* "CAN Message Object 4" */
SFR_NOABS (CAN_MOSTAT40, CAN_MOSTATm_t, CAN_MOSTAT40_ADDR); /* "CAN Message Object 40" */
SFR_NOABS (CAN_MOSTAT41, CAN_MOSTATm_t, CAN_MOSTAT41_ADDR); /* "CAN Message Object 41" */
SFR_NOABS (CAN_MOSTAT42, CAN_MOSTATm_t, CAN_MOSTAT42_ADDR); /* "CAN Message Object 42" */
SFR_NOABS (CAN_MOSTAT43, CAN_MOSTATm_t, CAN_MOSTAT43_ADDR); /* "CAN Message Object 43" */
SFR_NOABS (CAN_MOSTAT44, CAN_MOSTATm_t, CAN_MOSTAT44_ADDR); /* "CAN Message Object 44" */
SFR_NOABS (CAN_MOSTAT45, CAN_MOSTATm_t, CAN_MOSTAT45_ADDR); /* "CAN Message Object 45" */
SFR_NOABS (CAN_MOSTAT46, CAN_MOSTATm_t, CAN_MOSTAT46_ADDR); /* "CAN Message Object 46" */
SFR_NOABS (CAN_MOSTAT47, CAN_MOSTATm_t, CAN_MOSTAT47_ADDR); /* "CAN Message Object 47" */
SFR_NOABS (CAN_MOSTAT48, CAN_MOSTATm_t, CAN_MOSTAT48_ADDR); /* "CAN Message Object 48" */
SFR_NOABS (CAN_MOSTAT49, CAN_MOSTATm_t, CAN_MOSTAT49_ADDR); /* "CAN Message Object 49" */
SFR_NOABS (CAN_MOSTAT5, CAN_MOSTATm_t, CAN_MOSTAT5_ADDR); /* "CAN Message Object 5" */
SFR_NOABS (CAN_MOSTAT50, CAN_MOSTATm_t, CAN_MOSTAT50_ADDR); /* "CAN Message Object 50" */
SFR_NOABS (CAN_MOSTAT51, CAN_MOSTATm_t, CAN_MOSTAT51_ADDR); /* "CAN Message Object 51" */
SFR_NOABS (CAN_MOSTAT52, CAN_MOSTATm_t, CAN_MOSTAT52_ADDR); /* "CAN Message Object 52" */
SFR_NOABS (CAN_MOSTAT53, CAN_MOSTATm_t, CAN_MOSTAT53_ADDR); /* "CAN Message Object 53" */
SFR_NOABS (CAN_MOSTAT54, CAN_MOSTATm_t, CAN_MOSTAT54_ADDR); /* "CAN Message Object 54" */
SFR_NOABS (CAN_MOSTAT55, CAN_MOSTATm_t, CAN_MOSTAT55_ADDR); /* "CAN Message Object 55" */
SFR_NOABS (CAN_MOSTAT56, CAN_MOSTATm_t, CAN_MOSTAT56_ADDR); /* "CAN Message Object 56" */
SFR_NOABS (CAN_MOSTAT57, CAN_MOSTATm_t, CAN_MOSTAT57_ADDR); /* "CAN Message Object 57" */
SFR_NOABS (CAN_MOSTAT58, CAN_MOSTATm_t, CAN_MOSTAT58_ADDR); /* "CAN Message Object 58" */
SFR_NOABS (CAN_MOSTAT59, CAN_MOSTATm_t, CAN_MOSTAT59_ADDR); /* "CAN Message Object 59" */
SFR_NOABS (CAN_MOSTAT6, CAN_MOSTATm_t, CAN_MOSTAT6_ADDR); /* "CAN Message Object 6" */
SFR_NOABS (CAN_MOSTAT60, CAN_MOSTATm_t, CAN_MOSTAT60_ADDR); /* "CAN Message Object 60" */
SFR_NOABS (CAN_MOSTAT61, CAN_MOSTATm_t, CAN_MOSTAT61_ADDR); /* "CAN Message Object 61" */
SFR_NOABS (CAN_MOSTAT62, CAN_MOSTATm_t, CAN_MOSTAT62_ADDR); /* "CAN Message Object 62" */
SFR_NOABS (CAN_MOSTAT63, CAN_MOSTATm_t, CAN_MOSTAT63_ADDR); /* "CAN Message Object 63" */
SFR_NOABS (CAN_MOSTAT7, CAN_MOSTATm_t, CAN_MOSTAT7_ADDR); /* "CAN Message Object 7" */
SFR_NOABS (CAN_MOSTAT8, CAN_MOSTATm_t, CAN_MOSTAT8_ADDR); /* "CAN Message Object 8" */
SFR_NOABS (CAN_MOSTAT9, CAN_MOSTATm_t, CAN_MOSTAT9_ADDR); /* "CAN Message Object 9" */
SFR_NOABS (CAN_MSID0, CAN_MSIDm_t, CAN_MSID0_ADDR); /* "Message Index Register 0" */
SFR_NOABS (CAN_MSID1, CAN_MSIDm_t, CAN_MSID1_ADDR); /* "Message Index Register 1" */
SFR_NOABS (CAN_MSID2, CAN_MSIDm_t, CAN_MSID2_ADDR); /* "Message Index Register 2" */
SFR_NOABS (CAN_MSID3, CAN_MSIDm_t, CAN_MSID3_ADDR); /* "Message Index Register 3" */
SFR_NOABS (CAN_MSID4, CAN_MSIDm_t, CAN_MSID4_ADDR); /* "Message Index Register 4" */
SFR_NOABS (CAN_MSID5, CAN_MSIDm_t, CAN_MSID5_ADDR); /* "Message Index Register 5" */
SFR_NOABS (CAN_MSID6, CAN_MSIDm_t, CAN_MSID6_ADDR); /* "Message Index Register 6" */
SFR_NOABS (CAN_MSID7, CAN_MSIDm_t, CAN_MSID7_ADDR); /* "Message Index Register 7" */
SFR_NOABS (CAN_MSIMASK, CAN_MSIMASK_t, CAN_MSIMASK_ADDR); /* "Message Index Mask Register" */
SFR_NOABS (CAN_MSPND0, CAN_MSPNDm_t, CAN_MSPND0_ADDR); /* "Message Pending Register 0" */
SFR_NOABS (CAN_MSPND1, CAN_MSPNDm_t, CAN_MSPND1_ADDR); /* "Message Pending Register 1" */
SFR_NOABS (CAN_MSPND2, CAN_MSPNDm_t, CAN_MSPND2_ADDR); /* "Message Pending Register 2" */
SFR_NOABS (CAN_MSPND3, CAN_MSPNDm_t, CAN_MSPND3_ADDR); /* "Message Pending Register 3" */
SFR_NOABS (CAN_MSPND4, CAN_MSPNDm_t, CAN_MSPND4_ADDR); /* "Message Pending Register 4" */
SFR_NOABS (CAN_MSPND5, CAN_MSPNDm_t, CAN_MSPND5_ADDR); /* "Message Pending Register 5" */
SFR_NOABS (CAN_MSPND6, CAN_MSPNDm_t, CAN_MSPND6_ADDR); /* "Message Pending Register 6" */
SFR_NOABS (CAN_MSPND7, CAN_MSPNDm_t, CAN_MSPND7_ADDR); /* "Message Pending Register 7" */
SFR_NOABS (CAN_NBTR0, CAN_NBTRm_t, CAN_NBTR0_ADDR); /* "Node 0 Bit Timing Register" */
SFR_NOABS (CAN_NBTR1, CAN_NBTRm_t, CAN_NBTR1_ADDR); /* "Node 1 Bit Timing Register" */
SFR_NOABS (CAN_NCR0, CAN_NCRm_t, CAN_NCR0_ADDR);  /* "Node 0 Control Register" */
SFR_NOABS (CAN_NCR1, CAN_NCRm_t, CAN_NCR1_ADDR);  /* "Node 1 Control Register" */
SFR_NOABS (CAN_NECNT0, CAN_NECNTm_t, CAN_NECNT0_ADDR); /* "Node 0 Error Counter Register" */
SFR_NOABS (CAN_NECNT1, CAN_NECNTm_t, CAN_NECNT1_ADDR); /* "Node 1 Error Counter Register" */
SFR_NOABS (CAN_NFCR0, CAN_NFCRm_t, CAN_NFCR0_ADDR); /* "Node 0 Frame Counter Register" */
SFR_NOABS (CAN_NFCR1, CAN_NFCRm_t, CAN_NFCR1_ADDR); /* "Node 1 Frame Counter Register" */
SFR_NOABS (CAN_NIPR0, CAN_NIPRm_t, CAN_NIPR0_ADDR); /* "Node 0 Interrupt Pointer Register" */
SFR_NOABS (CAN_NIPR1, CAN_NIPRm_t, CAN_NIPR1_ADDR); /* "Node 1 Interrupt Pointer Register" */
SFR_NOABS (CAN_NPCR0, CAN_NPCRm_t, CAN_NPCR0_ADDR); /* "Node 0 Port Control Register" */
SFR_NOABS (CAN_NPCR1, CAN_NPCRm_t, CAN_NPCR1_ADDR); /* "Node 1 Port Control Register" */
SFR_NOABS (CAN_NSR0, CAN_NSRm_t, CAN_NSR0_ADDR);  /* "Node 0 Status Register" */
SFR_NOABS (CAN_NSR1, CAN_NSRm_t, CAN_NSR1_ADDR);  /* "Node 1 Status Register" */
SFR_NOABS (CAN_PANCTR, CAN_PANCTR_t, CAN_PANCTR_ADDR); /* "Panel Control Register" */
SFR_NOABS (CAN_SRC0, CAN_SRCm_t, CAN_SRC0_ADDR);  /* "CAN Service Request Control Register 0" */
SFR_NOABS (CAN_SRC1, CAN_SRCm_t, CAN_SRC1_ADDR);  /* "CAN Service Request Control Register 1" */
SFR_NOABS (CAN_SRC2, CAN_SRCm_t, CAN_SRC2_ADDR);  /* "CAN Service Request Control Register 2" */
SFR_NOABS (CAN_SRC3, CAN_SRCm_t, CAN_SRC3_ADDR);  /* "CAN Service Request Control Register 3" */
SFR_NOABS (CAN_SRC4, CAN_SRCm_t, CAN_SRC4_ADDR);  /* "CAN Service Request Control Register 4" */
SFR_NOABS (CAN_SRC5, CAN_SRCm_t, CAN_SRC5_ADDR);  /* "CAN Service Request Control Register 5" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CAN_H_ (block "MultiCAN LL") */

