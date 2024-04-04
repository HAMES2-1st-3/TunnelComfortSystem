/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P9_TYPES_H_
#define _HAVE_TRICORE_P9_TYPES_H_


/********************** P9_IOCR12_t *************************/
/*
   P9_IOCR12             "Port 9 Input/Output Control Register 12"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int PC12:4;              /*  = [4..7] = 0x000000f0 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int PC13:4;              /*  = [12..15] = 0x0000f000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int PC14:4;              /*  = [20..23] = 0x00f00000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) P9_IOCR12_t_nonv;

typedef volatile P9_IOCR12_t_nonv P9_IOCR12_t;

/********************** P9_PDR1_t *************************/
/*
   P9_PDR1               "Port 9 Pad Driver Mode 1 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PD8:3;               /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int PD9:3;               /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int PD10:3;              /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int PD11:3;              /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int PD12:3;              /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int PD13:3;              /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int PD14:3;              /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) P9_PDR1_t_nonv;

typedef volatile P9_PDR1_t_nonv P9_PDR1_t;


#endif /* _HAVE_TRICORE_P9_TYPES_H_ */

