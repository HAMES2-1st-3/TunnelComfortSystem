/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CCU60_CCU61_SHARETYPES_H_
#define _HAVE_TRICORE_CCU60_CCU61_SHARETYPES_H_


/********************** CCUn_CC60R_t *************************/
/*
   CCU60_CC60R           "Capture/Compare Register for Channel CC60"
   CCU61_CC60R           "Capture/Compare Register for Channel CC60"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC60V:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CC60R_t_nonv;

typedef volatile CCUn_CC60R_t_nonv CCUn_CC60R_t;

/********************** CCUn_CC60SR_t *************************/
/*
   CCU60_CC60SR          "Capture/Compare Shadow Register for Channel CC60"
   CCU61_CC60SR          "Capture/Compare Shadow Register for Channel CC60"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC60S:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CC60SR_t_nonv;

typedef volatile CCUn_CC60SR_t_nonv CCUn_CC60SR_t;

/********************** CCUn_CC61R_t *************************/
/*
   CCU60_CC61R           "Capture/Compare Register for Channel CC61"
   CCU61_CC61R           "Capture/Compare Register for Channel CC61"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC61V:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CC61R_t_nonv;

typedef volatile CCUn_CC61R_t_nonv CCUn_CC61R_t;

/********************** CCUn_CC61SR_t *************************/
/*
   CCU60_CC61SR          "Capture/Compare Shadow Register for Channel CC61"
   CCU61_CC61SR          "Capture/Compare Shadow Register for Channel CC61"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC61S:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CC61SR_t_nonv;

typedef volatile CCUn_CC61SR_t_nonv CCUn_CC61SR_t;

/********************** CCUn_CC62R_t *************************/
/*
   CCU60_CC62R           "Capture/Compare Register for Channel CC62"
   CCU61_CC62R           "Capture/Compare Register for Channel CC62"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC62V:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CC62R_t_nonv;

typedef volatile CCUn_CC62R_t_nonv CCUn_CC62R_t;

/********************** CCUn_CC62SR_t *************************/
/*
   CCU60_CC62SR          "Capture/Compare Shadow Register for Channel CC62"
   CCU61_CC62SR          "Capture/Compare Shadow Register for Channel CC62"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC62S:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CC62SR_t_nonv;

typedef volatile CCUn_CC62SR_t_nonv CCUn_CC62SR_t;

/********************** CCUn_CC63R_t *************************/
/*
   CCU60_CC63R           "Compare Register for Channel CC63"
   CCU61_CC63R           "Compare Register for Channel CC63"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC63V:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CC63R_t_nonv;

typedef volatile CCUn_CC63R_t_nonv CCUn_CC63R_t;

/********************** CCUn_CC63SR_t *************************/
/*
   CCU60_CC63SR          "Compare Shadow Register for Channel  CC63"
   CCU61_CC63SR          "Compare Shadow Register for Channel  CC63"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC63S:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CC63SR_t_nonv;

typedef volatile CCUn_CC63SR_t_nonv CCUn_CC63SR_t;

/********************** CCUn_CMPMODIF_t *************************/
/*
   CCU60_CMPMODIF        "Compare State Modification Register"
   CCU61_CMPMODIF        "Compare State Modification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MCC60S:1;            /*  = [0..0] = 0x00000001 */
      unsigned int MCC61S:1;            /*  = [1..1] = 0x00000002 */
      unsigned int MCC62S:1;            /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int MCC63S:1;            /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int MCC60R:1;            /*  = [8..8] = 0x00000100 */
      unsigned int MCC61R:1;            /*  = [9..9] = 0x00000200 */
      unsigned int MCC62R:1;            /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int MCC63R:1;            /*  = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CMPMODIF_t_nonv;

typedef volatile CCUn_CMPMODIF_t_nonv CCUn_CMPMODIF_t;

/********************** CCUn_CMPSTAT_t *************************/
/*
   CCU60_CMPSTAT         "Compare Status Register"
   CCU61_CMPSTAT         "Compare Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CC60ST:1;            /*  = [0..0] = 0x00000001 */
      unsigned int CC61ST:1;            /*  = [1..1] = 0x00000002 */
      unsigned int CC62ST:1;            /*  = [2..2] = 0x00000004 */
      unsigned int CCPOS0:1;            /*  = [3..3] = 0x00000008 */
      unsigned int CCPOS1:1;            /*  = [4..4] = 0x00000010 */
      unsigned int CCPOS2:1;            /*  = [5..5] = 0x00000020 */
      unsigned int CC63ST:1;            /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int CC60PS:1;            /*  = [8..8] = 0x00000100 */
      unsigned int COUT60PS:1;          /*  = [9..9] = 0x00000200 */
      unsigned int CC61PS:1;            /*  = [10..10] = 0x00000400 */
      unsigned int COUT61PS:1;          /*  = [11..11] = 0x00000800 */
      unsigned int CC62PS:1;            /*  = [12..12] = 0x00001000 */
      unsigned int COUT62PS:1;          /*  = [13..13] = 0x00002000 */
      unsigned int COUT63PS:1;          /*  = [14..14] = 0x00004000 */
      unsigned int T13IM:1;             /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_CMPSTAT_t_nonv;

typedef volatile CCUn_CMPSTAT_t_nonv CCUn_CMPSTAT_t;

/********************** CCUn_ID_t *************************/
/*
   CCU60_ID              "Module Identification Register"
   CCU61_ID              "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_ID_t_nonv;

typedef volatile CCUn_ID_t_nonv CCUn_ID_t;

/********************** CCUn_IEN_t *************************/
/*
   CCU60_IEN             "Capture/Compare Interrupt Enable Register"
   CCU61_IEN             "Capture/Compare Interrupt Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ENCC60R:1;           /*  = [0..0] = 0x00000001 */
      unsigned int ENCC60F:1;           /*  = [1..1] = 0x00000002 */
      unsigned int ENCC61R:1;           /*  = [2..2] = 0x00000004 */
      unsigned int ENCC61F:1;           /*  = [3..3] = 0x00000008 */
      unsigned int ENCC62R:1;           /*  = [4..4] = 0x00000010 */
      unsigned int ENCC62F:1;           /*  = [5..5] = 0x00000020 */
      unsigned int ENT12OM:1;           /*  = [6..6] = 0x00000040 */
      unsigned int ENT12PM:1;           /*  = [7..7] = 0x00000080 */
      unsigned int ENT13CM:1;           /*  = [8..8] = 0x00000100 */
      unsigned int ENT13PM:1;           /*  = [9..9] = 0x00000200 */
      unsigned int ENTRPF:1;            /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int ENCHE:1;             /*  = [12..12] = 0x00001000 */
      unsigned int ENWHE:1;             /*  = [13..13] = 0x00002000 */
      unsigned int ENIDLE:1;            /*  = [14..14] = 0x00004000 */
      unsigned int ENSTR:1;             /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_IEN_t_nonv;

typedef volatile CCUn_IEN_t_nonv CCUn_IEN_t;

/********************** CCUn_INP_t *************************/
/*
   CCU60_INP             "Capture/Compare Interrupt Node Pointer Register"
   CCU61_INP             "Capture/Compare Interrupt Node Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int INPCC60:2;           /*  = [0..1] = 0x00000003 */
      unsigned int INPCC61:2;           /*  = [2..3] = 0x0000000c */
      unsigned int INPCC62:2;           /*  = [4..5] = 0x00000030 */
      unsigned int INPCHE:2;            /*  = [6..7] = 0x000000c0 */
      unsigned int INPERR:2;            /*  = [8..9] = 0x00000300 */
      unsigned int INPT12:2;            /*  = [10..11] = 0x00000c00 */
      unsigned int INPT13:2;            /*  = [12..13] = 0x00003000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_INP_t_nonv;

typedef volatile CCUn_INP_t_nonv CCUn_INP_t;

/********************** CCUn_IS_t *************************/
/*
   CCU60_IS              "Capture/Compare Interrupt Status Register"
   CCU61_IS              "Capture/Compare Interrupt Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ICC60R:1;            /*  = [0..0] = 0x00000001 */
      unsigned int ICC60F:1;            /*  = [1..1] = 0x00000002 */
      unsigned int ICC61R:1;            /*  = [2..2] = 0x00000004 */
      unsigned int ICC61F:1;            /*  = [3..3] = 0x00000008 */
      unsigned int ICC62R:1;            /*  = [4..4] = 0x00000010 */
      unsigned int ICC62F:1;            /*  = [5..5] = 0x00000020 */
      unsigned int T12OM:1;             /*  = [6..6] = 0x00000040 */
      unsigned int T12PM:1;             /*  = [7..7] = 0x00000080 */
      unsigned int T13CM:1;             /*  = [8..8] = 0x00000100 */
      unsigned int T13PM:1;             /*  = [9..9] = 0x00000200 */
      unsigned int TRPF:1;              /*  = [10..10] = 0x00000400 */
      unsigned int TRPS:1;              /*  = [11..11] = 0x00000800 */
      unsigned int CHE:1;               /*  = [12..12] = 0x00001000 */
      unsigned int WHE:1;               /*  = [13..13] = 0x00002000 */
      unsigned int IDLE:1;              /*  = [14..14] = 0x00004000 */
      unsigned int STR:1;               /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_IS_t_nonv;

typedef volatile CCUn_IS_t_nonv CCUn_IS_t;

/********************** CCUn_ISR_t *************************/
/*
   CCU60_ISR             "Capture/Compare Interrupt Status Reset Register"
   CCU61_ISR             "Capture/Compare Interrupt Status Reset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RCC60R:1;            /*  = [0..0] = 0x00000001 */
      unsigned int RCC60F:1;            /*  = [1..1] = 0x00000002 */
      unsigned int RCC61R:1;            /*  = [2..2] = 0x00000004 */
      unsigned int RCC61F:1;            /*  = [3..3] = 0x00000008 */
      unsigned int RCC62R:1;            /*  = [4..4] = 0x00000010 */
      unsigned int RCC62F:1;            /*  = [5..5] = 0x00000020 */
      unsigned int RT12OM:1;            /*  = [6..6] = 0x00000040 */
      unsigned int RT12PM:1;            /*  = [7..7] = 0x00000080 */
      unsigned int RT13CM:1;            /*  = [8..8] = 0x00000100 */
      unsigned int RT13PM:1;            /*  = [9..9] = 0x00000200 */
      unsigned int RTRPF:1;             /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int RCHE:1;              /*  = [12..12] = 0x00001000 */
      unsigned int RWHE:1;              /*  = [13..13] = 0x00002000 */
      unsigned int RIDLE:1;             /*  = [14..14] = 0x00004000 */
      unsigned int RSTR:1;              /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_ISR_t_nonv;

typedef volatile CCUn_ISR_t_nonv CCUn_ISR_t;

/********************** CCUn_ISS_t *************************/
/*
   CCU60_ISS             "Capture/Compare Interrupt Status Set Register"
   CCU61_ISS             "Capture/Compare Interrupt Status Set Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCC60R:1;            /*  = [0..0] = 0x00000001 */
      unsigned int SCC60F:1;            /*  = [1..1] = 0x00000002 */
      unsigned int SCC61R:1;            /*  = [2..2] = 0x00000004 */
      unsigned int SCC61F:1;            /*  = [3..3] = 0x00000008 */
      unsigned int SCC62R:1;            /*  = [4..4] = 0x00000010 */
      unsigned int SCC62F:1;            /*  = [5..5] = 0x00000020 */
      unsigned int ST12OM:1;            /*  = [6..6] = 0x00000040 */
      unsigned int ST12PM:1;            /*  = [7..7] = 0x00000080 */
      unsigned int ST13CM:1;            /*  = [8..8] = 0x00000100 */
      unsigned int ST13PM:1;            /*  = [9..9] = 0x00000200 */
      unsigned int STRPF:1;             /*  = [10..10] = 0x00000400 */
      unsigned int SWHC:1;              /*  = [11..11] = 0x00000800 */
      unsigned int SCHE:1;              /*  = [12..12] = 0x00001000 */
      unsigned int SWHE:1;              /*  = [13..13] = 0x00002000 */
      unsigned int SIDLE:1;             /*  = [14..14] = 0x00004000 */
      unsigned int SSTR:1;              /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_ISS_t_nonv;

typedef volatile CCUn_ISS_t_nonv CCUn_ISS_t;

/********************** CCUn_MCMCTR_t *************************/
/*
   CCU60_MCMCTR          "Multi-Channel Mode Control Register"
   CCU61_MCMCTR          "Multi-Channel Mode Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SWSEL:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int SWSYN:2;             /*  = [4..5] = 0x00000030 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_MCMCTR_t_nonv;

typedef volatile CCUn_MCMCTR_t_nonv CCUn_MCMCTR_t;

/********************** CCUn_MCMOUT_t *************************/
/*
   CCU60_MCMOUT          "Multi-Channel Mode Output Register"
   CCU61_MCMOUT          "Multi-Channel Mode Output Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MCMP:6;              /*  = [0..5] = 0x0000003f */
      unsigned int R:1;                 /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int EXPH:3;              /*  = [8..10] = 0x00000700 */
      unsigned int CURH:3;              /*  = [11..13] = 0x00003800 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_MCMOUT_t_nonv;

typedef volatile CCUn_MCMOUT_t_nonv CCUn_MCMOUT_t;

/********************** CCUn_MCMOUTS_t *************************/
/*
   CCU60_MCMOUTS         "Multi-Channel Mode Output Shadow Register"
   CCU61_MCMOUTS         "Multi-Channel Mode Output Shadow Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MCMPS:6;             /*  = [0..5] = 0x0000003f */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int STRMCM:1;            /*  = [7..7] = 0x00000080 */
      unsigned int EXPHS:3;             /*  = [8..10] = 0x00000700 */
      unsigned int CURHS:3;             /*  = [11..13] = 0x00003800 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int STRHP:1;             /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_MCMOUTS_t_nonv;

typedef volatile CCUn_MCMOUTS_t_nonv CCUn_MCMOUTS_t;

/********************** CCUn_MODCTR_t *************************/
/*
   CCU60_MODCTR          "Modulation Control Register"
   CCU61_MODCTR          "Modulation Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T12MODEN:6;          /*  = [0..5] = 0x0000003f */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int MCMEN:1;             /*  = [7..7] = 0x00000080 */
      unsigned int T13MODEN:6;          /*  = [8..13] = 0x00003f00 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int ECT13O:1;            /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_MODCTR_t_nonv;

typedef volatile CCUn_MODCTR_t_nonv CCUn_MODCTR_t;

/********************** CCUn_PISEL0_t *************************/
/*
   CCU60_PISEL0          "Port Input Select Register 0"
   CCU61_PISEL0          "Port Input Select Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ISCC60:2;            /*  = [0..1] = 0x00000003 */
      unsigned int ISCC61:2;            /*  = [2..3] = 0x0000000c */
      unsigned int ISCC62:2;            /*  = [4..5] = 0x00000030 */
      unsigned int ISTRP:2;             /*  = [6..7] = 0x000000c0 */
      unsigned int ISPOS0:2;            /*  = [8..9] = 0x00000300 */
      unsigned int ISPOS1:2;            /*  = [10..11] = 0x00000c00 */
      unsigned int ISPOS2:2;            /*  = [12..13] = 0x00003000 */
      unsigned int IST12HR:2;           /*  = [14..15] = 0x0000c000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_PISEL0_t_nonv;

typedef volatile CCUn_PISEL0_t_nonv CCUn_PISEL0_t;

/********************** CCUn_PISEL2_t *************************/
/*
   CCU60_PISEL2          "Port Input Select Register 2"
   CCU61_PISEL2          "Port Input Select Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int IST13HR:2;           /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_PISEL2_t_nonv;

typedef volatile CCUn_PISEL2_t_nonv CCUn_PISEL2_t;

/********************** CCUn_PSLR_t *************************/
/*
   CCU60_PSLR            "Passive State Level Register"
   CCU61_PSLR            "Passive State Level Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PSL:6;               /*  = [0..5] = 0x0000003f */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int PSL63:1;             /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_PSLR_t_nonv;

typedef volatile CCUn_PSLR_t_nonv CCUn_PSLR_t;

/********************** CCUn_SRCm_t *************************/
/*
   CCU60_SRC0            "CCU60 Service Request Control Register 0"
   CCU60_SRC1            "CCU60 Service Request Control Register 1"
   CCU60_SRC2            "CCU60 Service Request Control Register 2"
   CCU60_SRC3            "CCU60 Service Request Control Register 3"
   CCU61_SRC0            "CCU60 Service Request Control Register 0"
   CCU61_SRC1            "CCU60 Service Request Control Register 1"
   CCU61_SRC2            "CCU60 Service Request Control Register 2"
   CCU61_SRC3            "CCU60 Service Request Control Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SRE:1;               /*  = [12..12] = 0x00001000 */
      unsigned int SRR:1;               /*  = [13..13] = 0x00002000 */
      unsigned int CLRR:1;              /*  = [14..14] = 0x00004000 */
      unsigned int SETR:1;              /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_SRCm_t_nonv;

typedef volatile CCUn_SRCm_t_nonv CCUn_SRCm_t;

/********************** CCUn_T12_t *************************/
/*
   CCU60_T12             "Timer T12 Counter Register"
   CCU61_T12             "Timer T12 Counter Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T12CV:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_T12_t_nonv;

typedef volatile CCUn_T12_t_nonv CCUn_T12_t;

/********************** CCUn_T12DTC_t *************************/
/*
   CCU60_T12DTC          "Dead-Time Control Register for Timer12"
   CCU61_T12DTC          "Dead-Time Control Register for Timer12"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DTM:8;               /*  = [0..7] = 0x000000ff */
      unsigned int DTE0:1;              /*  = [8..8] = 0x00000100 */
      unsigned int DTE1:1;              /*  = [9..9] = 0x00000200 */
      unsigned int DTE2:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int DTR0:1;              /*  = [12..12] = 0x00001000 */
      unsigned int DTR1:1;              /*  = [13..13] = 0x00002000 */
      unsigned int DTR2:1;              /*  = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_T12DTC_t_nonv;

typedef volatile CCUn_T12DTC_t_nonv CCUn_T12DTC_t;

/********************** CCUn_T12MSEL_t *************************/
/*
   CCU60_T12MSEL         "T12 Capture/Compare Mode Select Register"
   CCU61_T12MSEL         "T12 Capture/Compare Mode Select Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MSEL60:4;            /*  = [0..3] = 0x0000000f */
      unsigned int MSEL61:4;            /*  = [4..7] = 0x000000f0 */
      unsigned int MSEL62:4;            /*  = [8..11] = 0x00000f00 */
      unsigned int HSYNC:3;             /*  = [12..14] = 0x00007000 */
      unsigned int DBYP:1;              /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_T12MSEL_t_nonv;

typedef volatile CCUn_T12MSEL_t_nonv CCUn_T12MSEL_t;

/********************** CCUn_T12PR_t *************************/
/*
   CCU60_T12PR           "Timer T12 period register"
   CCU61_T12PR           "Timer T12 period register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T12PV:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_T12PR_t_nonv;

typedef volatile CCUn_T12PR_t_nonv CCUn_T12PR_t;

/********************** CCUn_T13_t *************************/
/*
   CCU60_T13             "Timer T13 Register"
   CCU61_T13             "Timer T13 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T13CV:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_T13_t_nonv;

typedef volatile CCUn_T13_t_nonv CCUn_T13_t;

/********************** CCUn_T13PR_t *************************/
/*
   CCU60_T13PR           "Timer T13 Period Register"
   CCU61_T13PR           "Timer T13 Period Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T13PV:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_T13PR_t_nonv;

typedef volatile CCUn_T13PR_t_nonv CCUn_T13PR_t;

/********************** CCUn_TCTR0_t *************************/
/*
   CCU60_TCTR0           "Timer Control Register 0"
   CCU61_TCTR0           "Timer Control Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T12CLK:3;            /*  = [0..2] = 0x00000007 */
      unsigned int T12PRE:1;            /*  = [3..3] = 0x00000008 */
      unsigned int T12R:1;              /*  = [4..4] = 0x00000010 */
      unsigned int STE12:1;             /*  = [5..5] = 0x00000020 */
      unsigned int CDIR:1;              /*  = [6..6] = 0x00000040 */
      unsigned int CTM:1;               /*  = [7..7] = 0x00000080 */
      unsigned int T13CLK:3;            /*  = [8..10] = 0x00000700 */
      unsigned int T13PRE:1;            /*  = [11..11] = 0x00000800 */
      unsigned int T13R:1;              /*  = [12..12] = 0x00001000 */
      unsigned int STE13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_TCTR0_t_nonv;

typedef volatile CCUn_TCTR0_t_nonv CCUn_TCTR0_t;

/********************** CCUn_TCTR2_t *************************/
/*
   CCU60_TCTR2           "Timer Control Register 2"
   CCU61_TCTR2           "Timer Control Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T12SSC:1;            /*  = [0..0] = 0x00000001 */
      unsigned int T13SSC:1;            /*  = [1..1] = 0x00000002 */
      unsigned int T13TEC:3;            /*  = [2..4] = 0x0000001c */
      unsigned int T13TED:2;            /*  = [5..6] = 0x00000060 */
      unsigned int SUSCFG:1;            /*  = [7..7] = 0x00000080 */
      unsigned int T12RSEL:2;           /*  = [8..9] = 0x00000300 */
      unsigned int T13RSEL:2;           /*  = [10..11] = 0x00000c00 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_TCTR2_t_nonv;

typedef volatile CCUn_TCTR2_t_nonv CCUn_TCTR2_t;

/********************** CCUn_TCTR4_t *************************/
/*
   CCU60_TCTR4           "Timer Control Register 4"
   CCU61_TCTR4           "Timer Control Register 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T12RR:1;             /*  = [0..0] = 0x00000001 */
      unsigned int T12RS:1;             /*  = [1..1] = 0x00000002 */
      unsigned int T12RES:1;            /*  = [2..2] = 0x00000004 */
      unsigned int DTRES:1;             /*  = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int T12STR:1;            /*  = [6..6] = 0x00000040 */
      unsigned int T12STD:1;            /*  = [7..7] = 0x00000080 */
      unsigned int T13RR:1;             /*  = [8..8] = 0x00000100 */
      unsigned int T13RS:1;             /*  = [9..9] = 0x00000200 */
      unsigned int T13RES:1;            /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int T13STR:1;            /*  = [14..14] = 0x00004000 */
      unsigned int T13STD:1;            /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_TCTR4_t_nonv;

typedef volatile CCUn_TCTR4_t_nonv CCUn_TCTR4_t;

/********************** CCUn_TRPCTR_t *************************/
/*
   CCU60_TRPCTR          "Trap Control Register"
   CCU61_TRPCTR          "Trap Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRPM0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int TRPM1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int TRPM2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int TRPEN:6;             /*  = [8..13] = 0x00003f00 */
      unsigned int TRPEN13:1;           /*  = [14..14] = 0x00004000 */
      unsigned int TRPPEN:1;            /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CCUn_TRPCTR_t_nonv;

typedef volatile CCUn_TRPCTR_t_nonv CCUn_TRPCTR_t;


#endif /* _HAVE_TRICORE_CCU60_CCU61_SHARETYPES_H_ */
