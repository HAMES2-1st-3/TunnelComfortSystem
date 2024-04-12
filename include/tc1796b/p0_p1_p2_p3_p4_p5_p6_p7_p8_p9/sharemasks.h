/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P0_P1_P2_P3_P4_P5_P6_P7_P8_P9_SHAREMASKS_H_
#define _HAVE_TRICORE_P0_P1_P2_P3_P4_P5_P6_P7_P8_P9_SHAREMASKS_H_


/****************** Masks for Pn_ESR_t **********************/
/*
   P3_ESR                "Port 3 Emergency Stop Register"
   P4_ESR                "Port 4 Emergency Stop Register"
*/
/**********************************************************/

#define Pn_ESR_MASK                     0x0000ffff
#define Pn_ESR_EN0_MASK                 0x00000001
#define Pn_ESR_EN0_SHIFT                0
#define Pn_ESR_EN1_MASK                 0x00000002
#define Pn_ESR_EN1_SHIFT                1
#define Pn_ESR_EN2_MASK                 0x00000004
#define Pn_ESR_EN2_SHIFT                2
#define Pn_ESR_EN3_MASK                 0x00000008
#define Pn_ESR_EN3_SHIFT                3
#define Pn_ESR_EN4_MASK                 0x00000010
#define Pn_ESR_EN4_SHIFT                4
#define Pn_ESR_EN5_MASK                 0x00000020
#define Pn_ESR_EN5_SHIFT                5
#define Pn_ESR_EN6_MASK                 0x00000040
#define Pn_ESR_EN6_SHIFT                6
#define Pn_ESR_EN7_MASK                 0x00000080
#define Pn_ESR_EN7_SHIFT                7
#define Pn_ESR_EN8_MASK                 0x00000100
#define Pn_ESR_EN8_SHIFT                8
#define Pn_ESR_EN9_MASK                 0x00000200
#define Pn_ESR_EN9_SHIFT                9
#define Pn_ESR_EN10_MASK                0x00000400
#define Pn_ESR_EN10_SHIFT               10
#define Pn_ESR_EN11_MASK                0x00000800
#define Pn_ESR_EN11_SHIFT               11
#define Pn_ESR_EN12_MASK                0x00001000
#define Pn_ESR_EN12_SHIFT               12
#define Pn_ESR_EN13_MASK                0x00002000
#define Pn_ESR_EN13_SHIFT               13
#define Pn_ESR_EN14_MASK                0x00004000
#define Pn_ESR_EN14_SHIFT               14
#define Pn_ESR_EN15_MASK                0x00008000
#define Pn_ESR_EN15_SHIFT               15



/****************** Masks for Pn_IN_t **********************/
/*
   P5_IN                 "Port 5 Input Register"
   P7_IN                 "Port 7 Input Register"
   P8_IN                 "Port 8 Input Register"
*/
/**********************************************************/

#define Pn_IN_MASK                      0x000000ff
#define Pn_IN_P0_MASK                   0x00000001
#define Pn_IN_P0_SHIFT                  0
#define Pn_IN_P1_MASK                   0x00000002
#define Pn_IN_P1_SHIFT                  1
#define Pn_IN_P2_MASK                   0x00000004
#define Pn_IN_P2_SHIFT                  2
#define Pn_IN_P3_MASK                   0x00000008
#define Pn_IN_P3_SHIFT                  3
#define Pn_IN_P4_MASK                   0x00000010
#define Pn_IN_P4_SHIFT                  4
#define Pn_IN_P5_MASK                   0x00000020
#define Pn_IN_P5_SHIFT                  5
#define Pn_IN_P6_MASK                   0x00000040
#define Pn_IN_P6_SHIFT                  6
#define Pn_IN_P7_MASK                   0x00000080
#define Pn_IN_P7_SHIFT                  7



/****************** Masks for Pn_IOCRm_t **********************/
/*
   P0_IOCR0              "Port 0 Input/Output Control Register 0"
   P0_IOCR12             "Port 0 Input/Output Control Register 12"
   P0_IOCR4              "Port 0 Input/Output Control Register 4"
   P0_IOCR8              "Port 0 Input/Output Control Register 8"
   P1_IOCR0              "Port 1 Input/Output Control Register 0"
   P1_IOCR12             "Port 1 Input/Output Control Register 12"
   P1_IOCR4              "Port 1 Input/Output Control Register 4"
   P1_IOCR8              "Port 1 Input/Output Control Register 8"
   P2_IOCR12             "Port 2 Input/Output Control Register 12"
   P2_IOCR4              "Port 2 Input/Output Control Register 4"
   P2_IOCR8              "Port 2 Input/Output Control Register 8"
   P3_IOCR0              "Port 3 Input/Output Control Register 0"
   P3_IOCR12             "Port 3 Input/Output Control Register 12"
   P3_IOCR4              "Port 3 Input/Output Control Register 4"
   P3_IOCR8              "Port 3 Input/Output Control Register 8"
   P4_IOCR0              "Port 4 Input/Output Control Register 0"
   P4_IOCR12             "Port 4 Input/Output Control Register 12"
   P4_IOCR4              "Port 4 Input/Output Control Register 4"
   P4_IOCR8              "Port 4 Input/Output Control Register 8"
   P5_IOCR0              "Port 5 Input/Output Control Register 0"
   P5_IOCR4              "Port 5 Input/Output Control Register 4"
   P6_IOCR12             "Port 6 Input/Output Control Register 12"
   P6_IOCR4              "Port 6 Input/Output Control Register 4"
   P6_IOCR8              "Port 6 Input/Output Control Register 8"
   P7_IOCR0              "Port 7 Input/Output Control Register 0"
   P7_IOCR4              "Port 7 Input/Output Control Register 4"
   P8_IOCR0              "Port 8 Input/Output Control Register 0"
   P8_IOCR4              "Port 8 Input/Output Control Register 4"
   P9_IOCR0              "Port 9 Input/Output Control Register 0"
   P9_IOCR4              "Port 9 Input/Output Control Register 4"
*/
/**********************************************************/

#define Pn_IOCRm_MASK                   0xf0f0f0f0
#define Pn_IOCRm_PC0_MASK               0x000000f0
#define Pn_IOCRm_PC0_SHIFT              4
#define Pn_IOCRm_PC1_MASK               0x0000f000
#define Pn_IOCRm_PC1_SHIFT              12
#define Pn_IOCRm_PC2_MASK               0x00f00000
#define Pn_IOCRm_PC2_SHIFT              20
#define Pn_IOCRm_PC3_MASK               0xf0000000
#define Pn_IOCRm_PC3_SHIFT              28



/****************** Masks for Pn_OMR_t **********************/
/*
   P0_OMR                "Port 0 Output Modification Register"
   P1_OMR                "Port 1 Output Modification Register"
   P2_OMR                "Port 2 Output Modification Register"
   P3_OMR                "Port 3 Output Modification Register"
   P4_OMR                "Port 4 Output Modification Register"
*/
/**********************************************************/

#define Pn_OMR_MASK                     0xffffffff
#define Pn_OMR_PS0_MASK                 0x00000001
#define Pn_OMR_PS0_SHIFT                0
#define Pn_OMR_PS1_MASK                 0x00000002
#define Pn_OMR_PS1_SHIFT                1
#define Pn_OMR_PS2_MASK                 0x00000004
#define Pn_OMR_PS2_SHIFT                2
#define Pn_OMR_PS3_MASK                 0x00000008
#define Pn_OMR_PS3_SHIFT                3
#define Pn_OMR_PS4_MASK                 0x00000010
#define Pn_OMR_PS4_SHIFT                4
#define Pn_OMR_PS5_MASK                 0x00000020
#define Pn_OMR_PS5_SHIFT                5
#define Pn_OMR_PS6_MASK                 0x00000040
#define Pn_OMR_PS6_SHIFT                6
#define Pn_OMR_PS7_MASK                 0x00000080
#define Pn_OMR_PS7_SHIFT                7
#define Pn_OMR_PS8_MASK                 0x00000100
#define Pn_OMR_PS8_SHIFT                8
#define Pn_OMR_PS9_MASK                 0x00000200
#define Pn_OMR_PS9_SHIFT                9
#define Pn_OMR_PS10_MASK                0x00000400
#define Pn_OMR_PS10_SHIFT               10
#define Pn_OMR_PS11_MASK                0x00000800
#define Pn_OMR_PS11_SHIFT               11
#define Pn_OMR_PS12_MASK                0x00001000
#define Pn_OMR_PS12_SHIFT               12
#define Pn_OMR_PS13_MASK                0x00002000
#define Pn_OMR_PS13_SHIFT               13
#define Pn_OMR_PS14_MASK                0x00004000
#define Pn_OMR_PS14_SHIFT               14
#define Pn_OMR_PS15_MASK                0x00008000
#define Pn_OMR_PS15_SHIFT               15
#define Pn_OMR_PR0_MASK                 0x00010000
#define Pn_OMR_PR0_SHIFT                16
#define Pn_OMR_PR1_MASK                 0x00020000
#define Pn_OMR_PR1_SHIFT                17
#define Pn_OMR_PR2_MASK                 0x00040000
#define Pn_OMR_PR2_SHIFT                18
#define Pn_OMR_PR3_MASK                 0x00080000
#define Pn_OMR_PR3_SHIFT                19
#define Pn_OMR_PR4_MASK                 0x00100000
#define Pn_OMR_PR4_SHIFT                20
#define Pn_OMR_PR5_MASK                 0x00200000
#define Pn_OMR_PR5_SHIFT                21
#define Pn_OMR_PR6_MASK                 0x00400000
#define Pn_OMR_PR6_SHIFT                22
#define Pn_OMR_PR7_MASK                 0x00800000
#define Pn_OMR_PR7_SHIFT                23
#define Pn_OMR_PR8_MASK                 0x01000000
#define Pn_OMR_PR8_SHIFT                24
#define Pn_OMR_PR9_MASK                 0x02000000
#define Pn_OMR_PR9_SHIFT                25
#define Pn_OMR_PR10_MASK                0x04000000
#define Pn_OMR_PR10_SHIFT               26
#define Pn_OMR_PR11_MASK                0x08000000
#define Pn_OMR_PR11_SHIFT               27
#define Pn_OMR_PR12_MASK                0x10000000
#define Pn_OMR_PR12_SHIFT               28
#define Pn_OMR_PR13_MASK                0x20000000
#define Pn_OMR_PR13_SHIFT               29
#define Pn_OMR_PR14_MASK                0x40000000
#define Pn_OMR_PR14_SHIFT               30
#define Pn_OMR_PR15_MASK                0x80000000
#define Pn_OMR_PR15_SHIFT               31



/****************** Masks for Pn_OUT_t **********************/
/*
   P5_OUT                "Port 5 Output Register"
   P7_OUT                "Port 7 Output Register"
   P8_OUT                "Port 8 Output Register"
*/
/**********************************************************/

#define Pn_OUT_MASK                     0x000000ff
#define Pn_OUT_P0_MASK                  0x00000001
#define Pn_OUT_P0_SHIFT                 0
#define Pn_OUT_P1_MASK                  0x00000002
#define Pn_OUT_P1_SHIFT                 1
#define Pn_OUT_P2_MASK                  0x00000004
#define Pn_OUT_P2_SHIFT                 2
#define Pn_OUT_P3_MASK                  0x00000008
#define Pn_OUT_P3_SHIFT                 3
#define Pn_OUT_P4_MASK                  0x00000010
#define Pn_OUT_P4_SHIFT                 4
#define Pn_OUT_P5_MASK                  0x00000020
#define Pn_OUT_P5_SHIFT                 5
#define Pn_OUT_P6_MASK                  0x00000040
#define Pn_OUT_P6_SHIFT                 6
#define Pn_OUT_P7_MASK                  0x00000080
#define Pn_OUT_P7_SHIFT                 7



/****************** Masks for Pn_PDR_t **********************/
/*
   P0_PDR                "Port 0 Pad Driver Mode Register"
   P3_PDR                "Port 3 Pad Driver Mode Register"
   P4_PDR                "Port 4 Pad Driver Mode Register"
*/
/**********************************************************/

#define Pn_PDR_MASK                     0x00000077
#define Pn_PDR_PD0_MASK                 0x00000007
#define Pn_PDR_PD0_SHIFT                0
#define Pn_PDR_PD1_MASK                 0x00000070
#define Pn_PDR_PD1_SHIFT                4




#endif /* _HAVE_TRICORE_P0_P1_P2_P3_P4_P5_P6_P7_P8_P9_SHAREMASKS_H_ */
