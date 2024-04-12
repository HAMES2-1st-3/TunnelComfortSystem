/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CAN" of TriCore TC1796B (1120 SFRs) */

#ifndef _HAVE_TRICORE_CAN_ADDRESSES_H_
#define _HAVE_TRICORE_CAN_ADDRESSES_H_

#define CAN_CLC_ADDR          0xF0004000     /* "CAN Clock Control Register" */
#define CAN_ID_ADDR           0xF0004008     /* "CAN Module Identification Register" */
#define CAN_FDR_ADDR          0xF000400C     /* "CAN Fractional Divider Register" */
#define CAN_SRC15_ADDR        0xF00040C0     /* "CAN Service Request Control Register 15" */
#define CAN_SRC14_ADDR        0xF00040C4     /* "CAN Service Request Control Register 14" */
#define CAN_SRC13_ADDR        0xF00040C8     /* "CAN Service Request Control Register 13" */
#define CAN_SRC12_ADDR        0xF00040CC     /* "CAN Service Request Control Register 12" */
#define CAN_SRC11_ADDR        0xF00040D0     /* "CAN Service Request Control Register 11" */
#define CAN_SRC10_ADDR        0xF00040D4     /* "CAN Service Request Control Register 10" */
#define CAN_SRC9_ADDR         0xF00040D8     /* "CAN Service Request Control Register 9" */
#define CAN_SRC8_ADDR         0xF00040DC     /* "CAN Service Request Control Register 8" */
#define CAN_SRC7_ADDR         0xF00040E0     /* "CAN Service Request Control Register 7" */
#define CAN_SRC6_ADDR         0xF00040E4     /* "CAN Service Request Control Register 6" */
#define CAN_SRC5_ADDR         0xF00040E8     /* "CAN Service Request Control Register 5" */
#define CAN_SRC4_ADDR         0xF00040EC     /* "CAN Service Request Control Register 4" */
#define CAN_SRC3_ADDR         0xF00040F0     /* "CAN Service Request Control Register 3" */
#define CAN_SRC2_ADDR         0xF00040F4     /* "CAN Service Request Control Register 2" */
#define CAN_SRC1_ADDR         0xF00040F8     /* "CAN Service Request Control Register 1" */
#define CAN_SRC0_ADDR         0xF00040FC     /* "CAN Service Request Control Register 0" */
#define CAN_LIST0_ADDR        0xF0004100     /* "CAN List Register 0" */
#define CAN_LIST1_ADDR        0xF0004104     /* "CAN List Register 1" */
#define CAN_LIST2_ADDR        0xF0004108     /* "CAN List Register 2" */
#define CAN_LIST3_ADDR        0xF000410C     /* "CAN List Register 3" */
#define CAN_LIST4_ADDR        0xF0004110     /* "CAN List Register 4" */
#define CAN_LIST5_ADDR        0xF0004114     /* "CAN List Register 5" */
#define CAN_LIST6_ADDR        0xF0004118     /* "CAN List Register 6" */
#define CAN_LIST7_ADDR        0xF000411C     /* "CAN List Register 7" */
#define CAN_MSPND0_ADDR       0xF0004120     /* "CAN Message Pending Register 0" */
#define CAN_MSPND1_ADDR       0xF0004124     /* "CAN Message Pending Register 1" */
#define CAN_MSPND2_ADDR       0xF0004128     /* "CAN Message Pending Register 2" */
#define CAN_MSPND3_ADDR       0xF000412C     /* "CAN Message Pending Register 3" */
#define CAN_MSPND4_ADDR       0xF0004130     /* "CAN Message Pending Register 4" */
#define CAN_MSPND5_ADDR       0xF0004134     /* "CAN Message Pending Register 5" */
#define CAN_MSPND6_ADDR       0xF0004138     /* "CAN Message Pending Register 6" */
#define CAN_MSPND7_ADDR       0xF000413C     /* "CAN Message Pending Register 7" */
#define CAN_MSID0_ADDR        0xF0004140     /* "CAN Message Index Register 0" */
#define CAN_MSID1_ADDR        0xF0004144     /* "CAN Message Index Register 1" */
#define CAN_MSID2_ADDR        0xF0004148     /* "CAN Message Index Register 2" */
#define CAN_MSID3_ADDR        0xF000414C     /* "CAN Message Index Register 3" */
#define CAN_MSID4_ADDR        0xF0004150     /* "CAN Message Index Register 4" */
#define CAN_MSID5_ADDR        0xF0004154     /* "CAN Message Index Register 5" */
#define CAN_MSID6_ADDR        0xF0004158     /* "CAN Message Index Register 6" */
#define CAN_MSID7_ADDR        0xF000415C     /* "CAN Message Index Register 7" */
#define CAN_MSIMASK_ADDR      0xF00041C0     /* "CAN Message Index Mask Register" */
#define CAN_PANCTR_ADDR       0xF00041C4     /* "CAN Panel Control Register" */
#define CAN_MCR_ADDR          0xF00041C8     /* "CAN Module Control Register" */
#define CAN_MITR_ADDR         0xF00041CC     /* "CAN Module Interrupt Trigger Register" */
#define CAN_NCR0_ADDR         0xF0004200     /* "CAN Node 0 Control Register" */
#define CAN_NSR0_ADDR         0xF0004204     /* "CAN Node 0 Status Register" */
#define CAN_NIPR0_ADDR        0xF0004208     /* "CAN Node 0 Interrupt Pointer Register" */
#define CAN_NPCR0_ADDR        0xF000420C     /* "CAN Node 0 Port Control Register" */
#define CAN_NBTR0_ADDR        0xF0004210     /* "CAN Node 0 Bit Timing Register" */
#define CAN_NECNT0_ADDR       0xF0004214     /* "CAN Node 0 Error Counter Register" */
#define CAN_NFCR0_ADDR        0xF0004218     /* "CAN Node 0 Frame Counter Register" */
#define CAN_LTR_ADDR          0xF0004280     /* "CAN Local Time Register" */
#define CAN_SYNMR_ADDR        0xF0004284     /* "CAN Synchronization Mark Register" */
#define CAN_REFMR_ADDR        0xF0004288     /* "CAN Reference Mark Register" */
#define CAN_LREFMR_ADDR       0xF000428C     /* "CAN Last Reference Mark Register" */
#define CAN_TURR_ADDR         0xF0004290     /* "CAN Time Unit Ratio Register" */
#define CAN_CYCTMR_ADDR       0xF0004294     /* "CAN Cycle Time Register" */
#define CAN_LOR_ADDR          0xF0004298     /* "CAN Local Offset Register" */
#define CAN_GMR_ADDR          0xF000429C     /* "CAN Global Mark Register" */
#define CAN_LGMR_ADDR         0xF00042A0     /* "CAN Last Global Mark Register" */
#define CAN_AWDR_ADDR         0xF00042A4     /* "CAN Application Watchdog Register" */
#define CAN_TTCR_ADDR         0xF00042C0     /* "CAN Time Trigger Control Register" */
#define CAN_TTCFGR_ADDR       0xF00042C4     /* "CAN Time Trigger Configuration Register" */
#define CAN_TTSR_ADDR         0xF00042C8     /* "CAN Time Trigger Status Register" */
#define CAN_TTFMR_ADDR        0xF00042CC     /* "CAN Time Trigger Flag Modification Register" */
#define CAN_TTIRR_ADDR        0xF00042D0     /* "CAN Time Trigger Interrupt Request Register" */
#define CAN_TTIER_ADDR        0xF00042D4     /* "CAN Time Trigger Interrupt Enable Register" */
#define CAN_TTINPR_ADDR       0xF00042D8     /* "CAN Time Trigger Interrupt Node Pointer Register" */
#define CAN_STSRL_ADDR        0xF00042F0     /* "CAN Scheduler Timing Status Register Low" */
#define CAN_STSRH_ADDR        0xF00042F4     /* "CAN Scheduler Timing Status Register High" */
#define CAN_SISR_ADDR         0xF00042F8     /* "CAN Scheduler Instruction Status Register" */
#define CAN_NCR1_ADDR         0xF0004300     /* "CAN Node 1 Control Register" */
#define CAN_NSR1_ADDR         0xF0004304     /* "CAN Node 1 Status Register" */
#define CAN_NIPR1_ADDR        0xF0004308     /* "CAN Node 1 Interrupt Pointer Register" */
#define CAN_NPCR1_ADDR        0xF000430C     /* "CAN Node 1 Port Control Register" */
#define CAN_NBTR1_ADDR        0xF0004310     /* "CAN Node 1 Bit Timing Register" */
#define CAN_NECNT1_ADDR       0xF0004314     /* "CAN Node 1 Error Counter Register" */
#define CAN_NFCR1_ADDR        0xF0004318     /* "CAN Node 1 Frame Counter Register" */
#define CAN_NCR2_ADDR         0xF0004400     /* "CAN Node 2 Control Register" */
#define CAN_NSR2_ADDR         0xF0004404     /* "CAN Node 2 Status Register" */
#define CAN_NIPR2_ADDR        0xF0004408     /* "CAN Node 2 Interrupt Pointer Register" */
#define CAN_NPCR2_ADDR        0xF000440C     /* "CAN Node 2 Port Control Register" */
#define CAN_NBTR2_ADDR        0xF0004410     /* "CAN Node 2 Bit Timing Register" */
#define CAN_NECNT2_ADDR       0xF0004414     /* "CAN Node 2 Error Counter Register" */
#define CAN_NFCR2_ADDR        0xF0004418     /* "CAN Node 2 Frame Counter Register" */
#define CAN_NCR3_ADDR         0xF0004500     /* "CAN Node 3 Control Register" */
#define CAN_NSR3_ADDR         0xF0004504     /* "CAN Node 3 Status Register" */
#define CAN_NIPR3_ADDR        0xF0004508     /* "CAN Node 3 Interrupt Pointer Register" */
#define CAN_NPCR3_ADDR        0xF000450C     /* "CAN Node 3 Port Control Register" */
#define CAN_NBTR3_ADDR        0xF0004510     /* "CAN Node 3 Bit Timing Register" */
#define CAN_NECNT3_ADDR       0xF0004514     /* "CAN Node 3 Error Counter Register" */
#define CAN_NFCR3_ADDR        0xF0004518     /* "CAN Node 3 Frame Counter Register" */
#define CAN_MOFCR0_ADDR       0xF0004600     /* "CAN Message Object 0 Function Control Register" */
#define CAN_MOFGPR0_ADDR      0xF0004604     /* "CAN Message Object 0 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR0_ADDR       0xF0004608     /* "CAN Message Object 0 Interrupt Pointer Register" */
#define CAN_MOAMR0_ADDR       0xF000460C     /* "CAN Message Object 0 Acceptance Mask Register" */
#define CAN_MODATAL0_ADDR     0xF0004610     /* "CAN Message Object 0 Data Register Low" */
#define CAN_MODATAH0_ADDR     0xF0004614     /* "CAN Message Object 0 Data Register High" */
#define CAN_MOAR0_ADDR        0xF0004618     /* "CAN Message Object 0 Arbitration Register" */
#define CAN_MOSTAT0_ADDR      0xF000461C     /* "Message Object 0" */
#define CAN_MOFCR1_ADDR       0xF0004620     /* "CAN Message Object 1 Function Control Register" */
#define CAN_MOFGPR1_ADDR      0xF0004624     /* "CAN Message Object 1 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR1_ADDR       0xF0004628     /* "CAN Message Object 1 Interrupt Pointer Register" */
#define CAN_MOAMR1_ADDR       0xF000462C     /* "CAN Message Object 1 Acceptance Mask Register" */
#define CAN_MODATAL1_ADDR     0xF0004630     /* "CAN Message Object 1 Data Register Low" */
#define CAN_MODATAH1_ADDR     0xF0004634     /* "CAN Message Object 1 Data Register High" */
#define CAN_MOAR1_ADDR        0xF0004638     /* "CAN Message Object 1 Arbitration Register" */
#define CAN_MOSTAT1_ADDR      0xF000463C     /* "Message Object 1" */
#define CAN_MOFCR2_ADDR       0xF0004640     /* "CAN Message Object 2 Function Control Register" */
#define CAN_MOFGPR2_ADDR      0xF0004644     /* "CAN Message Object 2 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR2_ADDR       0xF0004648     /* "CAN Message Object 2 Interrupt Pointer Register" */
#define CAN_MOAMR2_ADDR       0xF000464C     /* "CAN Message Object 2 Acceptance Mask Register" */
#define CAN_MODATAL2_ADDR     0xF0004650     /* "CAN Message Object 2 Data Register Low" */
#define CAN_MODATAH2_ADDR     0xF0004654     /* "CAN Message Object 2 Data Register High" */
#define CAN_MOAR2_ADDR        0xF0004658     /* "CAN Message Object 2 Arbitration Register" */
#define CAN_MOSTAT2_ADDR      0xF000465C     /* "Message Object 2" */
#define CAN_MOFCR3_ADDR       0xF0004660     /* "CAN Message Object 3 Function Control Register" */
#define CAN_MOFGPR3_ADDR      0xF0004664     /* "CAN Message Object 3 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR3_ADDR       0xF0004668     /* "CAN Message Object 3 Interrupt Pointer Register" */
#define CAN_MOAMR3_ADDR       0xF000466C     /* "CAN Message Object 3 Acceptance Mask Register" */
#define CAN_MODATAL3_ADDR     0xF0004670     /* "CAN Message Object 3 Data Register Low" */
#define CAN_MODATAH3_ADDR     0xF0004674     /* "CAN Message Object 3 Data Register High" */
#define CAN_MOAR3_ADDR        0xF0004678     /* "CAN Message Object 3 Arbitration Register" */
#define CAN_MOSTAT3_ADDR      0xF000467C     /* "Message Object 3" */
#define CAN_MOFCR4_ADDR       0xF0004680     /* "CAN Message Object 4 Function Control Register" */
#define CAN_MOFGPR4_ADDR      0xF0004684     /* "CAN Message Object 4 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR4_ADDR       0xF0004688     /* "CAN Message Object 4 Interrupt Pointer Register" */
#define CAN_MOAMR4_ADDR       0xF000468C     /* "CAN Message Object 4 Acceptance Mask Register" */
#define CAN_MODATAL4_ADDR     0xF0004690     /* "CAN Message Object 4 Data Register Low" */
#define CAN_MODATAH4_ADDR     0xF0004694     /* "CAN Message Object 4 Data Register High" */
#define CAN_MOAR4_ADDR        0xF0004698     /* "CAN Message Object 4 Arbitration Register" */
#define CAN_MOSTAT4_ADDR      0xF000469C     /* "Message Object 4" */
#define CAN_MOFCR5_ADDR       0xF00046A0     /* "CAN Message Object 5 Function Control Register" */
#define CAN_MOFGPR5_ADDR      0xF00046A4     /* "CAN Message Object 5 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR5_ADDR       0xF00046A8     /* "CAN Message Object 5 Interrupt Pointer Register" */
#define CAN_MOAMR5_ADDR       0xF00046AC     /* "CAN Message Object 5 Acceptance Mask Register" */
#define CAN_MODATAL5_ADDR     0xF00046B0     /* "CAN Message Object 5 Data Register Low" */
#define CAN_MODATAH5_ADDR     0xF00046B4     /* "CAN Message Object 5 Data Register High" */
#define CAN_MOAR5_ADDR        0xF00046B8     /* "CAN Message Object 5 Arbitration Register" */
#define CAN_MOSTAT5_ADDR      0xF00046BC     /* "Message Object 5" */
#define CAN_MOFCR6_ADDR       0xF00046C0     /* "CAN Message Object 6 Function Control Register" */
#define CAN_MOFGPR6_ADDR      0xF00046C4     /* "CAN Message Object 6 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR6_ADDR       0xF00046C8     /* "CAN Message Object 6 Interrupt Pointer Register" */
#define CAN_MOAMR6_ADDR       0xF00046CC     /* "CAN Message Object 6 Acceptance Mask Register" */
#define CAN_MODATAL6_ADDR     0xF00046D0     /* "CAN Message Object 6 Data Register Low" */
#define CAN_MODATAH6_ADDR     0xF00046D4     /* "CAN Message Object 6 Data Register High" */
#define CAN_MOAR6_ADDR        0xF00046D8     /* "CAN Message Object 6 Arbitration Register" */
#define CAN_MOSTAT6_ADDR      0xF00046DC     /* "Message Object 6" */
#define CAN_MOFCR7_ADDR       0xF00046E0     /* "CAN Message Object 7 Function Control Register" */
#define CAN_MOFGPR7_ADDR      0xF00046E4     /* "CAN Message Object 7 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR7_ADDR       0xF00046E8     /* "CAN Message Object 7 Interrupt Pointer Register" */
#define CAN_MOAMR7_ADDR       0xF00046EC     /* "CAN Message Object 7 Acceptance Mask Register" */
#define CAN_MODATAL7_ADDR     0xF00046F0     /* "CAN Message Object 7 Data Register Low" */
#define CAN_MODATAH7_ADDR     0xF00046F4     /* "CAN Message Object 7 Data Register High" */
#define CAN_MOAR7_ADDR        0xF00046F8     /* "CAN Message Object 7 Arbitration Register" */
#define CAN_MOSTAT7_ADDR      0xF00046FC     /* "Message Object 7" */
#define CAN_MOFCR8_ADDR       0xF0004700     /* "CAN Message Object 8 Function Control Register" */
#define CAN_MOFGPR8_ADDR      0xF0004704     /* "CAN Message Object 8 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR8_ADDR       0xF0004708     /* "CAN Message Object 8 Interrupt Pointer Register" */
#define CAN_MOAMR8_ADDR       0xF000470C     /* "CAN Message Object 8 Acceptance Mask Register" */
#define CAN_MODATAL8_ADDR     0xF0004710     /* "CAN Message Object 8 Data Register Low" */
#define CAN_MODATAH8_ADDR     0xF0004714     /* "CAN Message Object 8 Data Register High" */
#define CAN_MOAR8_ADDR        0xF0004718     /* "CAN Message Object 8 Arbitration Register" */
#define CAN_MOSTAT8_ADDR      0xF000471C     /* "Message Object 8" */
#define CAN_MOFCR9_ADDR       0xF0004720     /* "CAN Message Object 9 Function Control Register" */
#define CAN_MOFGPR9_ADDR      0xF0004724     /* "CAN Message Object 9 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR9_ADDR       0xF0004728     /* "CAN Message Object 9 Interrupt Pointer Register" */
#define CAN_MOAMR9_ADDR       0xF000472C     /* "CAN Message Object 9 Acceptance Mask Register" */
#define CAN_MODATAL9_ADDR     0xF0004730     /* "CAN Message Object 9 Data Register Low" */
#define CAN_MODATAH9_ADDR     0xF0004734     /* "CAN Message Object 9 Data Register High" */
#define CAN_MOAR9_ADDR        0xF0004738     /* "CAN Message Object 9 Arbitration Register" */
#define CAN_MOSTAT9_ADDR      0xF000473C     /* "Message Object 9" */
#define CAN_MOFCR10_ADDR      0xF0004740     /* "CAN Message Object 10 Function Control Register" */
#define CAN_MOFGPR10_ADDR     0xF0004744     /* "CAN Message Object 10 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR10_ADDR      0xF0004748     /* "CAN Message Object 10 Interrupt Pointer Register" */
#define CAN_MOAMR10_ADDR      0xF000474C     /* "CAN Message Object 10 Acceptance Mask Register" */
#define CAN_MODATAL10_ADDR    0xF0004750     /* "CAN Message Object 10 Data Register Low" */
#define CAN_MODATAH10_ADDR    0xF0004754     /* "CAN Message Object 10 Data Register High" */
#define CAN_MOAR10_ADDR       0xF0004758     /* "CAN Message Object 10 Arbitration Register" */
#define CAN_MOSTAT10_ADDR     0xF000475C     /* "Message Object 10" */
#define CAN_MOFCR11_ADDR      0xF0004760     /* "CAN Message Object 11 Function Control Register" */
#define CAN_MOFGPR11_ADDR     0xF0004764     /* "CAN Message Object 11 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR11_ADDR      0xF0004768     /* "CAN Message Object 11 Interrupt Pointer Register" */
#define CAN_MOAMR11_ADDR      0xF000476C     /* "CAN Message Object 11 Acceptance Mask Register" */
#define CAN_MODATAL11_ADDR    0xF0004770     /* "CAN Message Object 11 Data Register Low" */
#define CAN_MODATAH11_ADDR    0xF0004774     /* "CAN Message Object 11 Data Register High" */
#define CAN_MOAR11_ADDR       0xF0004778     /* "CAN Message Object 11 Arbitration Register" */
#define CAN_MOSTAT11_ADDR     0xF000477C     /* "Message Object 11" */
#define CAN_MOFCR12_ADDR      0xF0004780     /* "CAN Message Object 12 Function Control Register" */
#define CAN_MOFGPR12_ADDR     0xF0004784     /* "CAN Message Object 12 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR12_ADDR      0xF0004788     /* "CAN Message Object 12 Interrupt Pointer Register" */
#define CAN_MOAMR12_ADDR      0xF000478C     /* "CAN Message Object 12 Acceptance Mask Register" */
#define CAN_MODATAL12_ADDR    0xF0004790     /* "CAN Message Object 12 Data Register Low" */
#define CAN_MODATAH12_ADDR    0xF0004794     /* "CAN Message Object 12 Data Register High" */
#define CAN_MOAR12_ADDR       0xF0004798     /* "CAN Message Object 12 Arbitration Register" */
#define CAN_MOSTAT12_ADDR     0xF000479C     /* "Message Object 12" */
#define CAN_MOFCR13_ADDR      0xF00047A0     /* "CAN Message Object 13 Function Control Register" */
#define CAN_MOFGPR13_ADDR     0xF00047A4     /* "CAN Message Object 13 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR13_ADDR      0xF00047A8     /* "CAN Message Object 13 Interrupt Pointer Register" */
#define CAN_MOAMR13_ADDR      0xF00047AC     /* "CAN Message Object 13 Acceptance Mask Register" */
#define CAN_MODATAL13_ADDR    0xF00047B0     /* "CAN Message Object 13 Data Register Low" */
#define CAN_MODATAH13_ADDR    0xF00047B4     /* "CAN Message Object 13 Data Register High" */
#define CAN_MOAR13_ADDR       0xF00047B8     /* "CAN Message Object 13 Arbitration Register" */
#define CAN_MOSTAT13_ADDR     0xF00047BC     /* "Message Object 13" */
#define CAN_MOFCR14_ADDR      0xF00047C0     /* "CAN Message Object 14 Function Control Register" */
#define CAN_MOFGPR14_ADDR     0xF00047C4     /* "CAN Message Object 14 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR14_ADDR      0xF00047C8     /* "CAN Message Object 14 Interrupt Pointer Register" */
#define CAN_MOAMR14_ADDR      0xF00047CC     /* "CAN Message Object 14 Acceptance Mask Register" */
#define CAN_MODATAL14_ADDR    0xF00047D0     /* "CAN Message Object 14 Data Register Low" */
#define CAN_MODATAH14_ADDR    0xF00047D4     /* "CAN Message Object 14 Data Register High" */
#define CAN_MOAR14_ADDR       0xF00047D8     /* "CAN Message Object 14 Arbitration Register" */
#define CAN_MOSTAT14_ADDR     0xF00047DC     /* "Message Object 14" */
#define CAN_MOFCR15_ADDR      0xF00047E0     /* "CAN Message Object 15 Function Control Register" */
#define CAN_MOFGPR15_ADDR     0xF00047E4     /* "CAN Message Object 15 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR15_ADDR      0xF00047E8     /* "CAN Message Object 15 Interrupt Pointer Register" */
#define CAN_MOAMR15_ADDR      0xF00047EC     /* "CAN Message Object 15 Acceptance Mask Register" */
#define CAN_MODATAL15_ADDR    0xF00047F0     /* "CAN Message Object 15 Data Register Low" */
#define CAN_MODATAH15_ADDR    0xF00047F4     /* "CAN Message Object 15 Data Register High" */
#define CAN_MOAR15_ADDR       0xF00047F8     /* "CAN Message Object 15 Arbitration Register" */
#define CAN_MOSTAT15_ADDR     0xF00047FC     /* "Message Object 15" */
#define CAN_MOFCR16_ADDR      0xF0004800     /* "CAN Message Object 16 Function Control Register" */
#define CAN_MOFGPR16_ADDR     0xF0004804     /* "CAN Message Object 16 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR16_ADDR      0xF0004808     /* "CAN Message Object 16 Interrupt Pointer Register" */
#define CAN_MOAMR16_ADDR      0xF000480C     /* "CAN Message Object 16 Acceptance Mask Register" */
#define CAN_MODATAL16_ADDR    0xF0004810     /* "CAN Message Object 16 Data Register Low" */
#define CAN_MODATAH16_ADDR    0xF0004814     /* "CAN Message Object 16 Data Register High" */
#define CAN_MOAR16_ADDR       0xF0004818     /* "CAN Message Object 16 Arbitration Register" */
#define CAN_MOSTAT16_ADDR     0xF000481C     /* "Message Object 16" */
#define CAN_MOFCR17_ADDR      0xF0004820     /* "CAN Message Object 17 Function Control Register" */
#define CAN_MOFGPR17_ADDR     0xF0004824     /* "CAN Message Object 17 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR17_ADDR      0xF0004828     /* "CAN Message Object 17 Interrupt Pointer Register" */
#define CAN_MOAMR17_ADDR      0xF000482C     /* "CAN Message Object 17 Acceptance Mask Register" */
#define CAN_MODATAL17_ADDR    0xF0004830     /* "CAN Message Object 17 Data Register Low" */
#define CAN_MODATAH17_ADDR    0xF0004834     /* "CAN Message Object 17 Data Register High" */
#define CAN_MOAR17_ADDR       0xF0004838     /* "CAN Message Object 17 Arbitration Register" */
#define CAN_MOSTAT17_ADDR     0xF000483C     /* "Message Object 17" */
#define CAN_MOFCR18_ADDR      0xF0004840     /* "CAN Message Object 18 Function Control Register" */
#define CAN_MOFGPR18_ADDR     0xF0004844     /* "CAN Message Object 18 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR18_ADDR      0xF0004848     /* "CAN Message Object 18 Interrupt Pointer Register" */
#define CAN_MOAMR18_ADDR      0xF000484C     /* "CAN Message Object 18 Acceptance Mask Register" */
#define CAN_MODATAL18_ADDR    0xF0004850     /* "CAN Message Object 18 Data Register Low" */
#define CAN_MODATAH18_ADDR    0xF0004854     /* "CAN Message Object 18 Data Register High" */
#define CAN_MOAR18_ADDR       0xF0004858     /* "CAN Message Object 18 Arbitration Register" */
#define CAN_MOSTAT18_ADDR     0xF000485C     /* "Message Object 18" */
#define CAN_MOFCR19_ADDR      0xF0004860     /* "CAN Message Object 19 Function Control Register" */
#define CAN_MOFGPR19_ADDR     0xF0004864     /* "CAN Message Object 19 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR19_ADDR      0xF0004868     /* "CAN Message Object 19 Interrupt Pointer Register" */
#define CAN_MOAMR19_ADDR      0xF000486C     /* "CAN Message Object 19 Acceptance Mask Register" */
#define CAN_MODATAL19_ADDR    0xF0004870     /* "CAN Message Object 19 Data Register Low" */
#define CAN_MODATAH19_ADDR    0xF0004874     /* "CAN Message Object 19 Data Register High" */
#define CAN_MOAR19_ADDR       0xF0004878     /* "CAN Message Object 19 Arbitration Register" */
#define CAN_MOSTAT19_ADDR     0xF000487C     /* "Message Object 19" */
#define CAN_MOFCR20_ADDR      0xF0004880     /* "CAN Message Object 20 Function Control Register" */
#define CAN_MOFGPR20_ADDR     0xF0004884     /* "CAN Message Object 20 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR20_ADDR      0xF0004888     /* "CAN Message Object 20 Interrupt Pointer Register" */
#define CAN_MOAMR20_ADDR      0xF000488C     /* "CAN Message Object 20 Acceptance Mask Register" */
#define CAN_MODATAL20_ADDR    0xF0004890     /* "CAN Message Object 20 Data Register Low" */
#define CAN_MODATAH20_ADDR    0xF0004894     /* "CAN Message Object 20 Data Register High" */
#define CAN_MOAR20_ADDR       0xF0004898     /* "CAN Message Object 20 Arbitration Register" */
#define CAN_MOSTAT20_ADDR     0xF000489C     /* "Message Object 20" */
#define CAN_MOFCR21_ADDR      0xF00048A0     /* "CAN Message Object 21 Function Control Register" */
#define CAN_MOFGPR21_ADDR     0xF00048A4     /* "CAN Message Object 21 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR21_ADDR      0xF00048A8     /* "CAN Message Object 21 Interrupt Pointer Register" */
#define CAN_MOAMR21_ADDR      0xF00048AC     /* "CAN Message Object 21 Acceptance Mask Register" */
#define CAN_MODATAL21_ADDR    0xF00048B0     /* "CAN Message Object 21 Data Register Low" */
#define CAN_MODATAH21_ADDR    0xF00048B4     /* "CAN Message Object 21 Data Register High" */
#define CAN_MOAR21_ADDR       0xF00048B8     /* "CAN Message Object 21 Arbitration Register" */
#define CAN_MOSTAT21_ADDR     0xF00048BC     /* "Message Object 21" */
#define CAN_MOFCR22_ADDR      0xF00048C0     /* "CAN Message Object 22 Function Control Register" */
#define CAN_MOFGPR22_ADDR     0xF00048C4     /* "CAN Message Object 22 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR22_ADDR      0xF00048C8     /* "CAN Message Object 22 Interrupt Pointer Register" */
#define CAN_MOAMR22_ADDR      0xF00048CC     /* "CAN Message Object 22 Acceptance Mask Register" */
#define CAN_MODATAL22_ADDR    0xF00048D0     /* "CAN Message Object 22 Data Register Low" */
#define CAN_MODATAH22_ADDR    0xF00048D4     /* "CAN Message Object 22 Data Register High" */
#define CAN_MOAR22_ADDR       0xF00048D8     /* "CAN Message Object 22 Arbitration Register" */
#define CAN_MOSTAT22_ADDR     0xF00048DC     /* "Message Object 22" */
#define CAN_MOFCR23_ADDR      0xF00048E0     /* "CAN Message Object 23 Function Control Register" */
#define CAN_MOFGPR23_ADDR     0xF00048E4     /* "CAN Message Object 23 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR23_ADDR      0xF00048E8     /* "CAN Message Object 23 Interrupt Pointer Register" */
#define CAN_MOAMR23_ADDR      0xF00048EC     /* "CAN Message Object 23 Acceptance Mask Register" */
#define CAN_MODATAL23_ADDR    0xF00048F0     /* "CAN Message Object 23 Data Register Low" */
#define CAN_MODATAH23_ADDR    0xF00048F4     /* "CAN Message Object 23 Data Register High" */
#define CAN_MOAR23_ADDR       0xF00048F8     /* "CAN Message Object 23 Arbitration Register" */
#define CAN_MOSTAT23_ADDR     0xF00048FC     /* "Message Object 23" */
#define CAN_MOFCR24_ADDR      0xF0004900     /* "CAN Message Object 24 Function Control Register" */
#define CAN_MOFGPR24_ADDR     0xF0004904     /* "CAN Message Object 24 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR24_ADDR      0xF0004908     /* "CAN Message Object 24 Interrupt Pointer Register" */
#define CAN_MOAMR24_ADDR      0xF000490C     /* "CAN Message Object 24 Acceptance Mask Register" */
#define CAN_MODATAL24_ADDR    0xF0004910     /* "CAN Message Object 24 Data Register Low" */
#define CAN_MODATAH24_ADDR    0xF0004914     /* "CAN Message Object 24 Data Register High" */
#define CAN_MOAR24_ADDR       0xF0004918     /* "CAN Message Object 24 Arbitration Register" */
#define CAN_MOSTAT24_ADDR     0xF000491C     /* "Message Object 24" */
#define CAN_MOFCR25_ADDR      0xF0004920     /* "CAN Message Object 25 Function Control Register" */
#define CAN_MOFGPR25_ADDR     0xF0004924     /* "CAN Message Object 25 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR25_ADDR      0xF0004928     /* "CAN Message Object 25 Interrupt Pointer Register" */
#define CAN_MOAMR25_ADDR      0xF000492C     /* "CAN Message Object 25 Acceptance Mask Register" */
#define CAN_MODATAL25_ADDR    0xF0004930     /* "CAN Message Object 25 Data Register Low" */
#define CAN_MODATAH25_ADDR    0xF0004934     /* "CAN Message Object 25 Data Register High" */
#define CAN_MOAR25_ADDR       0xF0004938     /* "CAN Message Object 25 Arbitration Register" */
#define CAN_MOSTAT25_ADDR     0xF000493C     /* "Message Object 25" */
#define CAN_MOFCR26_ADDR      0xF0004940     /* "CAN Message Object 26 Function Control Register" */
#define CAN_MOFGPR26_ADDR     0xF0004944     /* "CAN Message Object 26 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR26_ADDR      0xF0004948     /* "CAN Message Object 26 Interrupt Pointer Register" */
#define CAN_MOAMR26_ADDR      0xF000494C     /* "CAN Message Object 26 Acceptance Mask Register" */
#define CAN_MODATAL26_ADDR    0xF0004950     /* "CAN Message Object 26 Data Register Low" */
#define CAN_MODATAH26_ADDR    0xF0004954     /* "CAN Message Object 26 Data Register High" */
#define CAN_MOAR26_ADDR       0xF0004958     /* "CAN Message Object 26 Arbitration Register" */
#define CAN_MOSTAT26_ADDR     0xF000495C     /* "Message Object 26" */
#define CAN_MOFCR27_ADDR      0xF0004960     /* "CAN Message Object 27 Function Control Register" */
#define CAN_MOFGPR27_ADDR     0xF0004964     /* "CAN Message Object 27 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR27_ADDR      0xF0004968     /* "CAN Message Object 27 Interrupt Pointer Register" */
#define CAN_MOAMR27_ADDR      0xF000496C     /* "CAN Message Object 27 Acceptance Mask Register" */
#define CAN_MODATAL27_ADDR    0xF0004970     /* "CAN Message Object 27 Data Register Low" */
#define CAN_MODATAH27_ADDR    0xF0004974     /* "CAN Message Object 27 Data Register High" */
#define CAN_MOAR27_ADDR       0xF0004978     /* "CAN Message Object 27 Arbitration Register" */
#define CAN_MOSTAT27_ADDR     0xF000497C     /* "Message Object 27" */
#define CAN_MOFCR28_ADDR      0xF0004980     /* "CAN Message Object 28 Function Control Register" */
#define CAN_MOFGPR28_ADDR     0xF0004984     /* "CAN Message Object 28 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR28_ADDR      0xF0004988     /* "CAN Message Object 28 Interrupt Pointer Register" */
#define CAN_MOAMR28_ADDR      0xF000498C     /* "CAN Message Object 28 Acceptance Mask Register" */
#define CAN_MODATAL28_ADDR    0xF0004990     /* "CAN Message Object 28 Data Register Low" */
#define CAN_MODATAH28_ADDR    0xF0004994     /* "CAN Message Object 28 Data Register High" */
#define CAN_MOAR28_ADDR       0xF0004998     /* "CAN Message Object 28 Arbitration Register" */
#define CAN_MOSTAT28_ADDR     0xF000499C     /* "Message Object 28" */
#define CAN_MOFCR29_ADDR      0xF00049A0     /* "CAN Message Object 29 Function Control Register" */
#define CAN_MOFGPR29_ADDR     0xF00049A4     /* "CAN Message Object 29 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR29_ADDR      0xF00049A8     /* "CAN Message Object 29 Interrupt Pointer Register" */
#define CAN_MOAMR29_ADDR      0xF00049AC     /* "CAN Message Object 29 Acceptance Mask Register" */
#define CAN_MODATAL29_ADDR    0xF00049B0     /* "CAN Message Object 29 Data Register Low" */
#define CAN_MODATAH29_ADDR    0xF00049B4     /* "CAN Message Object 29 Data Register High" */
#define CAN_MOAR29_ADDR       0xF00049B8     /* "CAN Message Object 29 Arbitration Register" */
#define CAN_MOSTAT29_ADDR     0xF00049BC     /* "Message Object 29" */
#define CAN_MOFCR30_ADDR      0xF00049C0     /* "CAN Message Object 30 Function Control Register" */
#define CAN_MOFGPR30_ADDR     0xF00049C4     /* "CAN Message Object 30 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR30_ADDR      0xF00049C8     /* "CAN Message Object 30 Interrupt Pointer Register" */
#define CAN_MOAMR30_ADDR      0xF00049CC     /* "CAN Message Object 30 Acceptance Mask Register" */
#define CAN_MODATAL30_ADDR    0xF00049D0     /* "CAN Message Object 30 Data Register Low" */
#define CAN_MODATAH30_ADDR    0xF00049D4     /* "CAN Message Object 30 Data Register High" */
#define CAN_MOAR30_ADDR       0xF00049D8     /* "CAN Message Object 30 Arbitration Register" */
#define CAN_MOSTAT30_ADDR     0xF00049DC     /* "Message Object 30" */
#define CAN_MOFCR31_ADDR      0xF00049E0     /* "CAN Message Object 31 Function Control Register" */
#define CAN_MOFGPR31_ADDR     0xF00049E4     /* "CAN Message Object 31 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR31_ADDR      0xF00049E8     /* "CAN Message Object 31 Interrupt Pointer Register" */
#define CAN_MOAMR31_ADDR      0xF00049EC     /* "CAN Message Object 31 Acceptance Mask Register" */
#define CAN_MODATAL31_ADDR    0xF00049F0     /* "CAN Message Object 31 Data Register Low" */
#define CAN_MODATAH31_ADDR    0xF00049F4     /* "CAN Message Object 31 Data Register High" */
#define CAN_MOAR31_ADDR       0xF00049F8     /* "CAN Message Object 31 Arbitration Register" */
#define CAN_MOSTAT31_ADDR     0xF00049FC     /* "Message Object 31" */
#define CAN_MOFCR32_ADDR      0xF0004A00     /* "CAN Message Object 32 Function Control Register" */
#define CAN_MOFGPR32_ADDR     0xF0004A04     /* "CAN Message Object 32 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR32_ADDR      0xF0004A08     /* "CAN Message Object 32 Interrupt Pointer Register" */
#define CAN_MOAMR32_ADDR      0xF0004A0C     /* "CAN Message Object 32 Acceptance Mask Register" */
#define CAN_MODATAL32_ADDR    0xF0004A10     /* "CAN Message Object 32 Data Register Low" */
#define CAN_MODATAH32_ADDR    0xF0004A14     /* "CAN Message Object 32 Data Register High" */
#define CAN_MOAR32_ADDR       0xF0004A18     /* "CAN Message Object 32 Arbitration Register" */
#define CAN_MOSTAT32_ADDR     0xF0004A1C     /* "Message Object 32" */
#define CAN_MOFCR33_ADDR      0xF0004A20     /* "CAN Message Object 33 Function Control Register" */
#define CAN_MOFGPR33_ADDR     0xF0004A24     /* "CAN Message Object 33 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR33_ADDR      0xF0004A28     /* "CAN Message Object 33 Interrupt Pointer Register" */
#define CAN_MOAMR33_ADDR      0xF0004A2C     /* "CAN Message Object 33 Acceptance Mask Register" */
#define CAN_MODATAL33_ADDR    0xF0004A30     /* "CAN Message Object 33 Data Register Low" */
#define CAN_MODATAH33_ADDR    0xF0004A34     /* "CAN Message Object 33 Data Register High" */
#define CAN_MOAR33_ADDR       0xF0004A38     /* "CAN Message Object 33 Arbitration Register" */
#define CAN_MOSTAT33_ADDR     0xF0004A3C     /* "Message Object 33" */
#define CAN_MOFCR34_ADDR      0xF0004A40     /* "CAN Message Object 34 Function Control Register" */
#define CAN_MOFGPR34_ADDR     0xF0004A44     /* "CAN Message Object 34 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR34_ADDR      0xF0004A48     /* "CAN Message Object 34 Interrupt Pointer Register" */
#define CAN_MOAMR34_ADDR      0xF0004A4C     /* "CAN Message Object 34 Acceptance Mask Register" */
#define CAN_MODATAL34_ADDR    0xF0004A50     /* "CAN Message Object 34 Data Register Low" */
#define CAN_MODATAH34_ADDR    0xF0004A54     /* "CAN Message Object 34 Data Register High" */
#define CAN_MOAR34_ADDR       0xF0004A58     /* "CAN Message Object 34 Arbitration Register" */
#define CAN_MOSTAT34_ADDR     0xF0004A5C     /* "Message Object 34" */
#define CAN_MOFCR35_ADDR      0xF0004A60     /* "CAN Message Object 35 Function Control Register" */
#define CAN_MOFGPR35_ADDR     0xF0004A64     /* "CAN Message Object 35 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR35_ADDR      0xF0004A68     /* "CAN Message Object 35 Interrupt Pointer Register" */
#define CAN_MOAMR35_ADDR      0xF0004A6C     /* "CAN Message Object 35 Acceptance Mask Register" */
#define CAN_MODATAL35_ADDR    0xF0004A70     /* "CAN Message Object 35 Data Register Low" */
#define CAN_MODATAH35_ADDR    0xF0004A74     /* "CAN Message Object 35 Data Register High" */
#define CAN_MOAR35_ADDR       0xF0004A78     /* "CAN Message Object 35 Arbitration Register" */
#define CAN_MOSTAT35_ADDR     0xF0004A7C     /* "Message Object 35" */
#define CAN_MOFCR36_ADDR      0xF0004A80     /* "CAN Message Object 36 Function Control Register" */
#define CAN_MOFGPR36_ADDR     0xF0004A84     /* "CAN Message Object 36 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR36_ADDR      0xF0004A88     /* "CAN Message Object 36 Interrupt Pointer Register" */
#define CAN_MOAMR36_ADDR      0xF0004A8C     /* "CAN Message Object 36 Acceptance Mask Register" */
#define CAN_MODATAL36_ADDR    0xF0004A90     /* "CAN Message Object 36 Data Register Low" */
#define CAN_MODATAH36_ADDR    0xF0004A94     /* "CAN Message Object 36 Data Register High" */
#define CAN_MOAR36_ADDR       0xF0004A98     /* "CAN Message Object 36 Arbitration Register" */
#define CAN_MOSTAT36_ADDR     0xF0004A9C     /* "Message Object 36" */
#define CAN_MOFCR37_ADDR      0xF0004AA0     /* "CAN Message Object 37 Function Control Register" */
#define CAN_MOFGPR37_ADDR     0xF0004AA4     /* "CAN Message Object 37 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR37_ADDR      0xF0004AA8     /* "CAN Message Object 37 Interrupt Pointer Register" */
#define CAN_MOAMR37_ADDR      0xF0004AAC     /* "CAN Message Object 37 Acceptance Mask Register" */
#define CAN_MODATAL37_ADDR    0xF0004AB0     /* "CAN Message Object 37 Data Register Low" */
#define CAN_MODATAH37_ADDR    0xF0004AB4     /* "CAN Message Object 37 Data Register High" */
#define CAN_MOAR37_ADDR       0xF0004AB8     /* "CAN Message Object 37 Arbitration Register" */
#define CAN_MOSTAT37_ADDR     0xF0004ABC     /* "Message Object 37" */
#define CAN_MOFCR38_ADDR      0xF0004AC0     /* "CAN Message Object 38 Function Control Register" */
#define CAN_MOFGPR38_ADDR     0xF0004AC4     /* "CAN Message Object 38 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR38_ADDR      0xF0004AC8     /* "CAN Message Object 38 Interrupt Pointer Register" */
#define CAN_MOAMR38_ADDR      0xF0004ACC     /* "CAN Message Object 38 Acceptance Mask Register" */
#define CAN_MODATAL38_ADDR    0xF0004AD0     /* "CAN Message Object 38 Data Register Low" */
#define CAN_MODATAH38_ADDR    0xF0004AD4     /* "CAN Message Object 38 Data Register High" */
#define CAN_MOAR38_ADDR       0xF0004AD8     /* "CAN Message Object 38 Arbitration Register" */
#define CAN_MOSTAT38_ADDR     0xF0004ADC     /* "Message Object 38" */
#define CAN_MOFCR39_ADDR      0xF0004AE0     /* "CAN Message Object 39 Function Control Register" */
#define CAN_MOFGPR39_ADDR     0xF0004AE4     /* "CAN Message Object 39 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR39_ADDR      0xF0004AE8     /* "CAN Message Object 39 Interrupt Pointer Register" */
#define CAN_MOAMR39_ADDR      0xF0004AEC     /* "CAN Message Object 39 Acceptance Mask Register" */
#define CAN_MODATAL39_ADDR    0xF0004AF0     /* "CAN Message Object 39 Data Register Low" */
#define CAN_MODATAH39_ADDR    0xF0004AF4     /* "CAN Message Object 39 Data Register High" */
#define CAN_MOAR39_ADDR       0xF0004AF8     /* "CAN Message Object 39 Arbitration Register" */
#define CAN_MOSTAT39_ADDR     0xF0004AFC     /* "Message Object 39" */
#define CAN_MOFCR40_ADDR      0xF0004B00     /* "CAN Message Object 40 Function Control Register" */
#define CAN_MOFGPR40_ADDR     0xF0004B04     /* "CAN Message Object 40 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR40_ADDR      0xF0004B08     /* "CAN Message Object 40 Interrupt Pointer Register" */
#define CAN_MOAMR40_ADDR      0xF0004B0C     /* "CAN Message Object 40 Acceptance Mask Register" */
#define CAN_MODATAL40_ADDR    0xF0004B10     /* "CAN Message Object 40 Data Register Low" */
#define CAN_MODATAH40_ADDR    0xF0004B14     /* "CAN Message Object 40 Data Register High" */
#define CAN_MOAR40_ADDR       0xF0004B18     /* "CAN Message Object 40 Arbitration Register" */
#define CAN_MOSTAT40_ADDR     0xF0004B1C     /* "Message Object 40" */
#define CAN_MOFCR41_ADDR      0xF0004B20     /* "CAN Message Object 41 Function Control Register" */
#define CAN_MOFGPR41_ADDR     0xF0004B24     /* "CAN Message Object 41 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR41_ADDR      0xF0004B28     /* "CAN Message Object 41 Interrupt Pointer Register" */
#define CAN_MOAMR41_ADDR      0xF0004B2C     /* "CAN Message Object 41 Acceptance Mask Register" */
#define CAN_MODATAL41_ADDR    0xF0004B30     /* "CAN Message Object 41 Data Register Low" */
#define CAN_MODATAH41_ADDR    0xF0004B34     /* "CAN Message Object 41 Data Register High" */
#define CAN_MOAR41_ADDR       0xF0004B38     /* "CAN Message Object 41 Arbitration Register" */
#define CAN_MOSTAT41_ADDR     0xF0004B3C     /* "Message Object 41" */
#define CAN_MOFCR42_ADDR      0xF0004B40     /* "CAN Message Object 42 Function Control Register" */
#define CAN_MOFGPR42_ADDR     0xF0004B44     /* "CAN Message Object 42 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR42_ADDR      0xF0004B48     /* "CAN Message Object 42 Interrupt Pointer Register" */
#define CAN_MOAMR42_ADDR      0xF0004B4C     /* "CAN Message Object 42 Acceptance Mask Register" */
#define CAN_MODATAL42_ADDR    0xF0004B50     /* "CAN Message Object 42 Data Register Low" */
#define CAN_MODATAH42_ADDR    0xF0004B54     /* "CAN Message Object 42 Data Register High" */
#define CAN_MOAR42_ADDR       0xF0004B58     /* "CAN Message Object 42 Arbitration Register" */
#define CAN_MOSTAT42_ADDR     0xF0004B5C     /* "Message Object 42" */
#define CAN_MOFCR43_ADDR      0xF0004B60     /* "CAN Message Object 43 Function Control Register" */
#define CAN_MOFGPR43_ADDR     0xF0004B64     /* "CAN Message Object 43 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR43_ADDR      0xF0004B68     /* "CAN Message Object 43 Interrupt Pointer Register" */
#define CAN_MOAMR43_ADDR      0xF0004B6C     /* "CAN Message Object 43 Acceptance Mask Register" */
#define CAN_MODATAL43_ADDR    0xF0004B70     /* "CAN Message Object 43 Data Register Low" */
#define CAN_MODATAH43_ADDR    0xF0004B74     /* "CAN Message Object 43 Data Register High" */
#define CAN_MOAR43_ADDR       0xF0004B78     /* "CAN Message Object 43 Arbitration Register" */
#define CAN_MOSTAT43_ADDR     0xF0004B7C     /* "Message Object 43" */
#define CAN_MOFCR44_ADDR      0xF0004B80     /* "CAN Message Object 44 Function Control Register" */
#define CAN_MOFGPR44_ADDR     0xF0004B84     /* "CAN Message Object 44 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR44_ADDR      0xF0004B88     /* "CAN Message Object 44 Interrupt Pointer Register" */
#define CAN_MOAMR44_ADDR      0xF0004B8C     /* "CAN Message Object 44 Acceptance Mask Register" */
#define CAN_MODATAL44_ADDR    0xF0004B90     /* "CAN Message Object 44 Data Register Low" */
#define CAN_MODATAH44_ADDR    0xF0004B94     /* "CAN Message Object 44 Data Register High" */
#define CAN_MOAR44_ADDR       0xF0004B98     /* "CAN Message Object 44 Arbitration Register" */
#define CAN_MOSTAT44_ADDR     0xF0004B9C     /* "Message Object 44" */
#define CAN_MOFCR45_ADDR      0xF0004BA0     /* "CAN Message Object 45 Function Control Register" */
#define CAN_MOFGPR45_ADDR     0xF0004BA4     /* "CAN Message Object 45 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR45_ADDR      0xF0004BA8     /* "CAN Message Object 45 Interrupt Pointer Register" */
#define CAN_MOAMR45_ADDR      0xF0004BAC     /* "CAN Message Object 45 Acceptance Mask Register" */
#define CAN_MODATAL45_ADDR    0xF0004BB0     /* "CAN Message Object 45 Data Register Low" */
#define CAN_MODATAH45_ADDR    0xF0004BB4     /* "CAN Message Object 45 Data Register High" */
#define CAN_MOAR45_ADDR       0xF0004BB8     /* "CAN Message Object 45 Arbitration Register" */
#define CAN_MOSTAT45_ADDR     0xF0004BBC     /* "Message Object 45" */
#define CAN_MOFCR46_ADDR      0xF0004BC0     /* "CAN Message Object 46 Function Control Register" */
#define CAN_MOFGPR46_ADDR     0xF0004BC4     /* "CAN Message Object 46 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR46_ADDR      0xF0004BC8     /* "CAN Message Object 46 Interrupt Pointer Register" */
#define CAN_MOAMR46_ADDR      0xF0004BCC     /* "CAN Message Object 46 Acceptance Mask Register" */
#define CAN_MODATAL46_ADDR    0xF0004BD0     /* "CAN Message Object 46 Data Register Low" */
#define CAN_MODATAH46_ADDR    0xF0004BD4     /* "CAN Message Object 46 Data Register High" */
#define CAN_MOAR46_ADDR       0xF0004BD8     /* "CAN Message Object 46 Arbitration Register" */
#define CAN_MOSTAT46_ADDR     0xF0004BDC     /* "Message Object 46" */
#define CAN_MOFCR47_ADDR      0xF0004BE0     /* "CAN Message Object 47 Function Control Register" */
#define CAN_MOFGPR47_ADDR     0xF0004BE4     /* "CAN Message Object 47 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR47_ADDR      0xF0004BE8     /* "CAN Message Object 47 Interrupt Pointer Register" */
#define CAN_MOAMR47_ADDR      0xF0004BEC     /* "CAN Message Object 47 Acceptance Mask Register" */
#define CAN_MODATAL47_ADDR    0xF0004BF0     /* "CAN Message Object 47 Data Register Low" */
#define CAN_MODATAH47_ADDR    0xF0004BF4     /* "CAN Message Object 47 Data Register High" */
#define CAN_MOAR47_ADDR       0xF0004BF8     /* "CAN Message Object 47 Arbitration Register" */
#define CAN_MOSTAT47_ADDR     0xF0004BFC     /* "Message Object 47" */
#define CAN_MOFCR48_ADDR      0xF0004C00     /* "CAN Message Object 48 Function Control Register" */
#define CAN_MOFGPR48_ADDR     0xF0004C04     /* "CAN Message Object 48 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR48_ADDR      0xF0004C08     /* "CAN Message Object 48 Interrupt Pointer Register" */
#define CAN_MOAMR48_ADDR      0xF0004C0C     /* "CAN Message Object 48 Acceptance Mask Register" */
#define CAN_MODATAL48_ADDR    0xF0004C10     /* "CAN Message Object 48 Data Register Low" */
#define CAN_MODATAH48_ADDR    0xF0004C14     /* "CAN Message Object 48 Data Register High" */
#define CAN_MOAR48_ADDR       0xF0004C18     /* "CAN Message Object 48 Arbitration Register" */
#define CAN_MOSTAT48_ADDR     0xF0004C1C     /* "Message Object 48" */
#define CAN_MOFCR49_ADDR      0xF0004C20     /* "CAN Message Object 49 Function Control Register" */
#define CAN_MOFGPR49_ADDR     0xF0004C24     /* "CAN Message Object 49 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR49_ADDR      0xF0004C28     /* "CAN Message Object 49 Interrupt Pointer Register" */
#define CAN_MOAMR49_ADDR      0xF0004C2C     /* "CAN Message Object 49 Acceptance Mask Register" */
#define CAN_MODATAL49_ADDR    0xF0004C30     /* "CAN Message Object 49 Data Register Low" */
#define CAN_MODATAH49_ADDR    0xF0004C34     /* "CAN Message Object 49 Data Register High" */
#define CAN_MOAR49_ADDR       0xF0004C38     /* "CAN Message Object 49 Arbitration Register" */
#define CAN_MOSTAT49_ADDR     0xF0004C3C     /* "Message Object 49" */
#define CAN_MOFCR50_ADDR      0xF0004C40     /* "CAN Message Object 50 Function Control Register" */
#define CAN_MOFGPR50_ADDR     0xF0004C44     /* "CAN Message Object 50 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR50_ADDR      0xF0004C48     /* "CAN Message Object 50 Interrupt Pointer Register" */
#define CAN_MOAMR50_ADDR      0xF0004C4C     /* "CAN Message Object 50 Acceptance Mask Register" */
#define CAN_MODATAL50_ADDR    0xF0004C50     /* "CAN Message Object 50 Data Register Low" */
#define CAN_MODATAH50_ADDR    0xF0004C54     /* "CAN Message Object 50 Data Register High" */
#define CAN_MOAR50_ADDR       0xF0004C58     /* "CAN Message Object 50 Arbitration Register" */
#define CAN_MOSTAT50_ADDR     0xF0004C5C     /* "Message Object 50" */
#define CAN_MOFCR51_ADDR      0xF0004C60     /* "CAN Message Object 51 Function Control Register" */
#define CAN_MOFGPR51_ADDR     0xF0004C64     /* "CAN Message Object 51 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR51_ADDR      0xF0004C68     /* "CAN Message Object 51 Interrupt Pointer Register" */
#define CAN_MOAMR51_ADDR      0xF0004C6C     /* "CAN Message Object 51 Acceptance Mask Register" */
#define CAN_MODATAL51_ADDR    0xF0004C70     /* "CAN Message Object 51 Data Register Low" */
#define CAN_MODATAH51_ADDR    0xF0004C74     /* "CAN Message Object 51 Data Register High" */
#define CAN_MOAR51_ADDR       0xF0004C78     /* "CAN Message Object 51 Arbitration Register" */
#define CAN_MOSTAT51_ADDR     0xF0004C7C     /* "Message Object 51" */
#define CAN_MOFCR52_ADDR      0xF0004C80     /* "CAN Message Object 52 Function Control Register" */
#define CAN_MOFGPR52_ADDR     0xF0004C84     /* "CAN Message Object 52 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR52_ADDR      0xF0004C88     /* "CAN Message Object 52 Interrupt Pointer Register" */
#define CAN_MOAMR52_ADDR      0xF0004C8C     /* "CAN Message Object 52 Acceptance Mask Register" */
#define CAN_MODATAL52_ADDR    0xF0004C90     /* "CAN Message Object 52 Data Register Low" */
#define CAN_MODATAH52_ADDR    0xF0004C94     /* "CAN Message Object 52 Data Register High" */
#define CAN_MOAR52_ADDR       0xF0004C98     /* "CAN Message Object 52 Arbitration Register" */
#define CAN_MOSTAT52_ADDR     0xF0004C9C     /* "Message Object 52" */
#define CAN_MOFCR53_ADDR      0xF0004CA0     /* "CAN Message Object 53 Function Control Register" */
#define CAN_MOFGPR53_ADDR     0xF0004CA4     /* "CAN Message Object 53 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR53_ADDR      0xF0004CA8     /* "CAN Message Object 53 Interrupt Pointer Register" */
#define CAN_MOAMR53_ADDR      0xF0004CAC     /* "CAN Message Object 53 Acceptance Mask Register" */
#define CAN_MODATAL53_ADDR    0xF0004CB0     /* "CAN Message Object 53 Data Register Low" */
#define CAN_MODATAH53_ADDR    0xF0004CB4     /* "CAN Message Object 53 Data Register High" */
#define CAN_MOAR53_ADDR       0xF0004CB8     /* "CAN Message Object 53 Arbitration Register" */
#define CAN_MOSTAT53_ADDR     0xF0004CBC     /* "Message Object 53" */
#define CAN_MOFCR54_ADDR      0xF0004CC0     /* "CAN Message Object 54 Function Control Register" */
#define CAN_MOFGPR54_ADDR     0xF0004CC4     /* "CAN Message Object 54 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR54_ADDR      0xF0004CC8     /* "CAN Message Object 54 Interrupt Pointer Register" */
#define CAN_MOAMR54_ADDR      0xF0004CCC     /* "CAN Message Object 54 Acceptance Mask Register" */
#define CAN_MODATAL54_ADDR    0xF0004CD0     /* "CAN Message Object 54 Data Register Low" */
#define CAN_MODATAH54_ADDR    0xF0004CD4     /* "CAN Message Object 54 Data Register High" */
#define CAN_MOAR54_ADDR       0xF0004CD8     /* "CAN Message Object 54 Arbitration Register" */
#define CAN_MOSTAT54_ADDR     0xF0004CDC     /* "Message Object 54" */
#define CAN_MOFCR55_ADDR      0xF0004CE0     /* "CAN Message Object 55 Function Control Register" */
#define CAN_MOFGPR55_ADDR     0xF0004CE4     /* "CAN Message Object 55 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR55_ADDR      0xF0004CE8     /* "CAN Message Object 55 Interrupt Pointer Register" */
#define CAN_MOAMR55_ADDR      0xF0004CEC     /* "CAN Message Object 55 Acceptance Mask Register" */
#define CAN_MODATAL55_ADDR    0xF0004CF0     /* "CAN Message Object 55 Data Register Low" */
#define CAN_MODATAH55_ADDR    0xF0004CF4     /* "CAN Message Object 55 Data Register High" */
#define CAN_MOAR55_ADDR       0xF0004CF8     /* "CAN Message Object 55 Arbitration Register" */
#define CAN_MOSTAT55_ADDR     0xF0004CFC     /* "Message Object 55" */
#define CAN_MOFCR56_ADDR      0xF0004D00     /* "CAN Message Object 56 Function Control Register" */
#define CAN_MOFGPR56_ADDR     0xF0004D04     /* "CAN Message Object 56 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR56_ADDR      0xF0004D08     /* "CAN Message Object 56 Interrupt Pointer Register" */
#define CAN_MOAMR56_ADDR      0xF0004D0C     /* "CAN Message Object 56 Acceptance Mask Register" */
#define CAN_MODATAL56_ADDR    0xF0004D10     /* "CAN Message Object 56 Data Register Low" */
#define CAN_MODATAH56_ADDR    0xF0004D14     /* "CAN Message Object 56 Data Register High" */
#define CAN_MOAR56_ADDR       0xF0004D18     /* "CAN Message Object 56 Arbitration Register" */
#define CAN_MOSTAT56_ADDR     0xF0004D1C     /* "Message Object 56" */
#define CAN_MOFCR57_ADDR      0xF0004D20     /* "CAN Message Object 57 Function Control Register" */
#define CAN_MOFGPR57_ADDR     0xF0004D24     /* "CAN Message Object 57 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR57_ADDR      0xF0004D28     /* "CAN Message Object 57 Interrupt Pointer Register" */
#define CAN_MOAMR57_ADDR      0xF0004D2C     /* "CAN Message Object 57 Acceptance Mask Register" */
#define CAN_MODATAL57_ADDR    0xF0004D30     /* "CAN Message Object 57 Data Register Low" */
#define CAN_MODATAH57_ADDR    0xF0004D34     /* "CAN Message Object 57 Data Register High" */
#define CAN_MOAR57_ADDR       0xF0004D38     /* "CAN Message Object 57 Arbitration Register" */
#define CAN_MOSTAT57_ADDR     0xF0004D3C     /* "Message Object 57" */
#define CAN_MOFCR58_ADDR      0xF0004D40     /* "CAN Message Object 58 Function Control Register" */
#define CAN_MOFGPR58_ADDR     0xF0004D44     /* "CAN Message Object 58 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR58_ADDR      0xF0004D48     /* "CAN Message Object 58 Interrupt Pointer Register" */
#define CAN_MOAMR58_ADDR      0xF0004D4C     /* "CAN Message Object 58 Acceptance Mask Register" */
#define CAN_MODATAL58_ADDR    0xF0004D50     /* "CAN Message Object 58 Data Register Low" */
#define CAN_MODATAH58_ADDR    0xF0004D54     /* "CAN Message Object 58 Data Register High" */
#define CAN_MOAR58_ADDR       0xF0004D58     /* "CAN Message Object 58 Arbitration Register" */
#define CAN_MOSTAT58_ADDR     0xF0004D5C     /* "Message Object 58" */
#define CAN_MOFCR59_ADDR      0xF0004D60     /* "CAN Message Object 59 Function Control Register" */
#define CAN_MOFGPR59_ADDR     0xF0004D64     /* "CAN Message Object 59 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR59_ADDR      0xF0004D68     /* "CAN Message Object 59 Interrupt Pointer Register" */
#define CAN_MOAMR59_ADDR      0xF0004D6C     /* "CAN Message Object 59 Acceptance Mask Register" */
#define CAN_MODATAL59_ADDR    0xF0004D70     /* "CAN Message Object 59 Data Register Low" */
#define CAN_MODATAH59_ADDR    0xF0004D74     /* "CAN Message Object 59 Data Register High" */
#define CAN_MOAR59_ADDR       0xF0004D78     /* "CAN Message Object 59 Arbitration Register" */
#define CAN_MOSTAT59_ADDR     0xF0004D7C     /* "Message Object 59" */
#define CAN_MOFCR60_ADDR      0xF0004D80     /* "CAN Message Object 60 Function Control Register" */
#define CAN_MOFGPR60_ADDR     0xF0004D84     /* "CAN Message Object 60 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR60_ADDR      0xF0004D88     /* "CAN Message Object 60 Interrupt Pointer Register" */
#define CAN_MOAMR60_ADDR      0xF0004D8C     /* "CAN Message Object 60 Acceptance Mask Register" */
#define CAN_MODATAL60_ADDR    0xF0004D90     /* "CAN Message Object 60 Data Register Low" */
#define CAN_MODATAH60_ADDR    0xF0004D94     /* "CAN Message Object 60 Data Register High" */
#define CAN_MOAR60_ADDR       0xF0004D98     /* "CAN Message Object 60 Arbitration Register" */
#define CAN_MOSTAT60_ADDR     0xF0004D9C     /* "Message Object 60" */
#define CAN_MOFCR61_ADDR      0xF0004DA0     /* "CAN Message Object 61 Function Control Register" */
#define CAN_MOFGPR61_ADDR     0xF0004DA4     /* "CAN Message Object 61 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR61_ADDR      0xF0004DA8     /* "CAN Message Object 61 Interrupt Pointer Register" */
#define CAN_MOAMR61_ADDR      0xF0004DAC     /* "CAN Message Object 61 Acceptance Mask Register" */
#define CAN_MODATAL61_ADDR    0xF0004DB0     /* "CAN Message Object 61 Data Register Low" */
#define CAN_MODATAH61_ADDR    0xF0004DB4     /* "CAN Message Object 61 Data Register High" */
#define CAN_MOAR61_ADDR       0xF0004DB8     /* "CAN Message Object 61 Arbitration Register" */
#define CAN_MOSTAT61_ADDR     0xF0004DBC     /* "Message Object 61" */
#define CAN_MOFCR62_ADDR      0xF0004DC0     /* "CAN Message Object 62 Function Control Register" */
#define CAN_MOFGPR62_ADDR     0xF0004DC4     /* "CAN Message Object 62 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR62_ADDR      0xF0004DC8     /* "CAN Message Object 62 Interrupt Pointer Register" */
#define CAN_MOAMR62_ADDR      0xF0004DCC     /* "CAN Message Object 62 Acceptance Mask Register" */
#define CAN_MODATAL62_ADDR    0xF0004DD0     /* "CAN Message Object 62 Data Register Low" */
#define CAN_MODATAH62_ADDR    0xF0004DD4     /* "CAN Message Object 62 Data Register High" */
#define CAN_MOAR62_ADDR       0xF0004DD8     /* "CAN Message Object 62 Arbitration Register" */
#define CAN_MOSTAT62_ADDR     0xF0004DDC     /* "Message Object 62" */
#define CAN_MOFCR63_ADDR      0xF0004DE0     /* "CAN Message Object 63 Function Control Register" */
#define CAN_MOFGPR63_ADDR     0xF0004DE4     /* "CAN Message Object 63 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR63_ADDR      0xF0004DE8     /* "CAN Message Object 63 Interrupt Pointer Register" */
#define CAN_MOAMR63_ADDR      0xF0004DEC     /* "CAN Message Object 63 Acceptance Mask Register" */
#define CAN_MODATAL63_ADDR    0xF0004DF0     /* "CAN Message Object 63 Data Register Low" */
#define CAN_MODATAH63_ADDR    0xF0004DF4     /* "CAN Message Object 63 Data Register High" */
#define CAN_MOAR63_ADDR       0xF0004DF8     /* "CAN Message Object 63 Arbitration Register" */
#define CAN_MOSTAT63_ADDR     0xF0004DFC     /* "Message Object 63" */
#define CAN_MOFCR64_ADDR      0xF0004E00     /* "CAN Message Object 64 Function Control Register" */
#define CAN_MOFGPR64_ADDR     0xF0004E04     /* "CAN Message Object 64 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR64_ADDR      0xF0004E08     /* "CAN Message Object 64 Interrupt Pointer Register" */
#define CAN_MOAMR64_ADDR      0xF0004E0C     /* "CAN Message Object 64 Acceptance Mask Register" */
#define CAN_MODATAL64_ADDR    0xF0004E10     /* "CAN Message Object 64 Data Register Low" */
#define CAN_MODATAH64_ADDR    0xF0004E14     /* "CAN Message Object 64 Data Register High" */
#define CAN_MOAR64_ADDR       0xF0004E18     /* "CAN Message Object 64 Arbitration Register" */
#define CAN_MOSTAT64_ADDR     0xF0004E1C     /* "Message Object 64" */
#define CAN_MOFCR65_ADDR      0xF0004E20     /* "CAN Message Object 65 Function Control Register" */
#define CAN_MOFGPR65_ADDR     0xF0004E24     /* "CAN Message Object 65 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR65_ADDR      0xF0004E28     /* "CAN Message Object 65 Interrupt Pointer Register" */
#define CAN_MOAMR65_ADDR      0xF0004E2C     /* "CAN Message Object 65 Acceptance Mask Register" */
#define CAN_MODATAL65_ADDR    0xF0004E30     /* "CAN Message Object 65 Data Register Low" */
#define CAN_MODATAH65_ADDR    0xF0004E34     /* "CAN Message Object 65 Data Register High" */
#define CAN_MOAR65_ADDR       0xF0004E38     /* "CAN Message Object 65 Arbitration Register" */
#define CAN_MOSTAT65_ADDR     0xF0004E3C     /* "Message Object 65" */
#define CAN_MOFCR66_ADDR      0xF0004E40     /* "CAN Message Object 66 Function Control Register" */
#define CAN_MOFGPR66_ADDR     0xF0004E44     /* "CAN Message Object 66 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR66_ADDR      0xF0004E48     /* "CAN Message Object 66 Interrupt Pointer Register" */
#define CAN_MOAMR66_ADDR      0xF0004E4C     /* "CAN Message Object 66 Acceptance Mask Register" */
#define CAN_MODATAL66_ADDR    0xF0004E50     /* "CAN Message Object 66 Data Register Low" */
#define CAN_MODATAH66_ADDR    0xF0004E54     /* "CAN Message Object 66 Data Register High" */
#define CAN_MOAR66_ADDR       0xF0004E58     /* "CAN Message Object 66 Arbitration Register" */
#define CAN_MOSTAT66_ADDR     0xF0004E5C     /* "Message Object 66" */
#define CAN_MOFCR67_ADDR      0xF0004E60     /* "CAN Message Object 67 Function Control Register" */
#define CAN_MOFGPR67_ADDR     0xF0004E64     /* "CAN Message Object 67 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR67_ADDR      0xF0004E68     /* "CAN Message Object 67 Interrupt Pointer Register" */
#define CAN_MOAMR67_ADDR      0xF0004E6C     /* "CAN Message Object 67 Acceptance Mask Register" */
#define CAN_MODATAL67_ADDR    0xF0004E70     /* "CAN Message Object 67 Data Register Low" */
#define CAN_MODATAH67_ADDR    0xF0004E74     /* "CAN Message Object 67 Data Register High" */
#define CAN_MOAR67_ADDR       0xF0004E78     /* "CAN Message Object 67 Arbitration Register" */
#define CAN_MOSTAT67_ADDR     0xF0004E7C     /* "Message Object 67" */
#define CAN_MOFCR68_ADDR      0xF0004E80     /* "CAN Message Object 68 Function Control Register" */
#define CAN_MOFGPR68_ADDR     0xF0004E84     /* "CAN Message Object 68 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR68_ADDR      0xF0004E88     /* "CAN Message Object 68 Interrupt Pointer Register" */
#define CAN_MOAMR68_ADDR      0xF0004E8C     /* "CAN Message Object 68 Acceptance Mask Register" */
#define CAN_MODATAL68_ADDR    0xF0004E90     /* "CAN Message Object 68 Data Register Low" */
#define CAN_MODATAH68_ADDR    0xF0004E94     /* "CAN Message Object 68 Data Register High" */
#define CAN_MOAR68_ADDR       0xF0004E98     /* "CAN Message Object 68 Arbitration Register" */
#define CAN_MOSTAT68_ADDR     0xF0004E9C     /* "Message Object 68" */
#define CAN_MOFCR69_ADDR      0xF0004EA0     /* "CAN Message Object 69 Function Control Register" */
#define CAN_MOFGPR69_ADDR     0xF0004EA4     /* "CAN Message Object 69 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR69_ADDR      0xF0004EA8     /* "CAN Message Object 69 Interrupt Pointer Register" */
#define CAN_MOAMR69_ADDR      0xF0004EAC     /* "CAN Message Object 69 Acceptance Mask Register" */
#define CAN_MODATAL69_ADDR    0xF0004EB0     /* "CAN Message Object 69 Data Register Low" */
#define CAN_MODATAH69_ADDR    0xF0004EB4     /* "CAN Message Object 69 Data Register High" */
#define CAN_MOAR69_ADDR       0xF0004EB8     /* "CAN Message Object 69 Arbitration Register" */
#define CAN_MOSTAT69_ADDR     0xF0004EBC     /* "Message Object 69" */
#define CAN_MOFCR70_ADDR      0xF0004EC0     /* "CAN Message Object 70 Function Control Register" */
#define CAN_MOFGPR70_ADDR     0xF0004EC4     /* "CAN Message Object 70 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR70_ADDR      0xF0004EC8     /* "CAN Message Object 70 Interrupt Pointer Register" */
#define CAN_MOAMR70_ADDR      0xF0004ECC     /* "CAN Message Object 70 Acceptance Mask Register" */
#define CAN_MODATAL70_ADDR    0xF0004ED0     /* "CAN Message Object 70 Data Register Low" */
#define CAN_MODATAH70_ADDR    0xF0004ED4     /* "CAN Message Object 70 Data Register High" */
#define CAN_MOAR70_ADDR       0xF0004ED8     /* "CAN Message Object 70 Arbitration Register" */
#define CAN_MOSTAT70_ADDR     0xF0004EDC     /* "Message Object 70" */
#define CAN_MOFCR71_ADDR      0xF0004EE0     /* "CAN Message Object 71 Function Control Register" */
#define CAN_MOFGPR71_ADDR     0xF0004EE4     /* "CAN Message Object 71 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR71_ADDR      0xF0004EE8     /* "CAN Message Object 71 Interrupt Pointer Register" */
#define CAN_MOAMR71_ADDR      0xF0004EEC     /* "CAN Message Object 71 Acceptance Mask Register" */
#define CAN_MODATAL71_ADDR    0xF0004EF0     /* "CAN Message Object 71 Data Register Low" */
#define CAN_MODATAH71_ADDR    0xF0004EF4     /* "CAN Message Object 71 Data Register High" */
#define CAN_MOAR71_ADDR       0xF0004EF8     /* "CAN Message Object 71 Arbitration Register" */
#define CAN_MOSTAT71_ADDR     0xF0004EFC     /* "Message Object 71" */
#define CAN_MOFCR72_ADDR      0xF0004F00     /* "CAN Message Object 72 Function Control Register" */
#define CAN_MOFGPR72_ADDR     0xF0004F04     /* "CAN Message Object 72 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR72_ADDR      0xF0004F08     /* "CAN Message Object 72 Interrupt Pointer Register" */
#define CAN_MOAMR72_ADDR      0xF0004F0C     /* "CAN Message Object 72 Acceptance Mask Register" */
#define CAN_MODATAL72_ADDR    0xF0004F10     /* "CAN Message Object 72 Data Register Low" */
#define CAN_MODATAH72_ADDR    0xF0004F14     /* "CAN Message Object 72 Data Register High" */
#define CAN_MOAR72_ADDR       0xF0004F18     /* "CAN Message Object 72 Arbitration Register" */
#define CAN_MOSTAT72_ADDR     0xF0004F1C     /* "Message Object 72" */
#define CAN_MOFCR73_ADDR      0xF0004F20     /* "CAN Message Object 73 Function Control Register" */
#define CAN_MOFGPR73_ADDR     0xF0004F24     /* "CAN Message Object 73 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR73_ADDR      0xF0004F28     /* "CAN Message Object 73 Interrupt Pointer Register" */
#define CAN_MOAMR73_ADDR      0xF0004F2C     /* "CAN Message Object 73 Acceptance Mask Register" */
#define CAN_MODATAL73_ADDR    0xF0004F30     /* "CAN Message Object 73 Data Register Low" */
#define CAN_MODATAH73_ADDR    0xF0004F34     /* "CAN Message Object 73 Data Register High" */
#define CAN_MOAR73_ADDR       0xF0004F38     /* "CAN Message Object 73 Arbitration Register" */
#define CAN_MOSTAT73_ADDR     0xF0004F3C     /* "Message Object 73" */
#define CAN_MOFCR74_ADDR      0xF0004F40     /* "CAN Message Object 74 Function Control Register" */
#define CAN_MOFGPR74_ADDR     0xF0004F44     /* "CAN Message Object 74 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR74_ADDR      0xF0004F48     /* "CAN Message Object 74 Interrupt Pointer Register" */
#define CAN_MOAMR74_ADDR      0xF0004F4C     /* "CAN Message Object 74 Acceptance Mask Register" */
#define CAN_MODATAL74_ADDR    0xF0004F50     /* "CAN Message Object 74 Data Register Low" */
#define CAN_MODATAH74_ADDR    0xF0004F54     /* "CAN Message Object 74 Data Register High" */
#define CAN_MOAR74_ADDR       0xF0004F58     /* "CAN Message Object 74 Arbitration Register" */
#define CAN_MOSTAT74_ADDR     0xF0004F5C     /* "Message Object 74" */
#define CAN_MOFCR75_ADDR      0xF0004F60     /* "CAN Message Object 75 Function Control Register" */
#define CAN_MOFGPR75_ADDR     0xF0004F64     /* "CAN Message Object 75 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR75_ADDR      0xF0004F68     /* "CAN Message Object 75 Interrupt Pointer Register" */
#define CAN_MOAMR75_ADDR      0xF0004F6C     /* "CAN Message Object 75 Acceptance Mask Register" */
#define CAN_MODATAL75_ADDR    0xF0004F70     /* "CAN Message Object 75 Data Register Low" */
#define CAN_MODATAH75_ADDR    0xF0004F74     /* "CAN Message Object 75 Data Register High" */
#define CAN_MOAR75_ADDR       0xF0004F78     /* "CAN Message Object 75 Arbitration Register" */
#define CAN_MOSTAT75_ADDR     0xF0004F7C     /* "Message Object 75" */
#define CAN_MOFCR76_ADDR      0xF0004F80     /* "CAN Message Object 76 Function Control Register" */
#define CAN_MOFGPR76_ADDR     0xF0004F84     /* "CAN Message Object 76 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR76_ADDR      0xF0004F88     /* "CAN Message Object 76 Interrupt Pointer Register" */
#define CAN_MOAMR76_ADDR      0xF0004F8C     /* "CAN Message Object 76 Acceptance Mask Register" */
#define CAN_MODATAL76_ADDR    0xF0004F90     /* "CAN Message Object 76 Data Register Low" */
#define CAN_MODATAH76_ADDR    0xF0004F94     /* "CAN Message Object 76 Data Register High" */
#define CAN_MOAR76_ADDR       0xF0004F98     /* "CAN Message Object 76 Arbitration Register" */
#define CAN_MOSTAT76_ADDR     0xF0004F9C     /* "Message Object 76" */
#define CAN_MOFCR77_ADDR      0xF0004FA0     /* "CAN Message Object 77 Function Control Register" */
#define CAN_MOFGPR77_ADDR     0xF0004FA4     /* "CAN Message Object 77 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR77_ADDR      0xF0004FA8     /* "CAN Message Object 77 Interrupt Pointer Register" */
#define CAN_MOAMR77_ADDR      0xF0004FAC     /* "CAN Message Object 77 Acceptance Mask Register" */
#define CAN_MODATAL77_ADDR    0xF0004FB0     /* "CAN Message Object 77 Data Register Low" */
#define CAN_MODATAH77_ADDR    0xF0004FB4     /* "CAN Message Object 77 Data Register High" */
#define CAN_MOAR77_ADDR       0xF0004FB8     /* "CAN Message Object 77 Arbitration Register" */
#define CAN_MOSTAT77_ADDR     0xF0004FBC     /* "Message Object 77" */
#define CAN_MOFCR78_ADDR      0xF0004FC0     /* "CAN Message Object 78 Function Control Register" */
#define CAN_MOFGPR78_ADDR     0xF0004FC4     /* "CAN Message Object 78 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR78_ADDR      0xF0004FC8     /* "CAN Message Object 78 Interrupt Pointer Register" */
#define CAN_MOAMR78_ADDR      0xF0004FCC     /* "CAN Message Object 78 Acceptance Mask Register" */
#define CAN_MODATAL78_ADDR    0xF0004FD0     /* "CAN Message Object 78 Data Register Low" */
#define CAN_MODATAH78_ADDR    0xF0004FD4     /* "CAN Message Object 78 Data Register High" */
#define CAN_MOAR78_ADDR       0xF0004FD8     /* "CAN Message Object 78 Arbitration Register" */
#define CAN_MOSTAT78_ADDR     0xF0004FDC     /* "Message Object 78" */
#define CAN_MOFCR79_ADDR      0xF0004FE0     /* "CAN Message Object 79 Function Control Register" */
#define CAN_MOFGPR79_ADDR     0xF0004FE4     /* "CAN Message Object 79 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR79_ADDR      0xF0004FE8     /* "CAN Message Object 79 Interrupt Pointer Register" */
#define CAN_MOAMR79_ADDR      0xF0004FEC     /* "CAN Message Object 79 Acceptance Mask Register" */
#define CAN_MODATAL79_ADDR    0xF0004FF0     /* "CAN Message Object 79 Data Register Low" */
#define CAN_MODATAH79_ADDR    0xF0004FF4     /* "CAN Message Object 79 Data Register High" */
#define CAN_MOAR79_ADDR       0xF0004FF8     /* "CAN Message Object 79 Arbitration Register" */
#define CAN_MOSTAT79_ADDR     0xF0004FFC     /* "Message Object 79" */
#define CAN_MOFCR80_ADDR      0xF0005000     /* "CAN Message Object 80 Function Control Register" */
#define CAN_MOFGPR80_ADDR     0xF0005004     /* "CAN Message Object 80 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR80_ADDR      0xF0005008     /* "CAN Message Object 80 Interrupt Pointer Register" */
#define CAN_MOAMR80_ADDR      0xF000500C     /* "CAN Message Object 80 Acceptance Mask Register" */
#define CAN_MODATAL80_ADDR    0xF0005010     /* "CAN Message Object 80 Data Register Low" */
#define CAN_MODATAH80_ADDR    0xF0005014     /* "CAN Message Object 80 Data Register High" */
#define CAN_MOAR80_ADDR       0xF0005018     /* "CAN Message Object 80 Arbitration Register" */
#define CAN_MOSTAT80_ADDR     0xF000501C     /* "Message Object 80" */
#define CAN_MOFCR81_ADDR      0xF0005020     /* "CAN Message Object 81 Function Control Register" */
#define CAN_MOFGPR81_ADDR     0xF0005024     /* "CAN Message Object 81 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR81_ADDR      0xF0005028     /* "CAN Message Object 81 Interrupt Pointer Register" */
#define CAN_MOAMR81_ADDR      0xF000502C     /* "CAN Message Object 81 Acceptance Mask Register" */
#define CAN_MODATAL81_ADDR    0xF0005030     /* "CAN Message Object 81 Data Register Low" */
#define CAN_MODATAH81_ADDR    0xF0005034     /* "CAN Message Object 81 Data Register High" */
#define CAN_MOAR81_ADDR       0xF0005038     /* "CAN Message Object 81 Arbitration Register" */
#define CAN_MOSTAT81_ADDR     0xF000503C     /* "Message Object 81" */
#define CAN_MOFCR82_ADDR      0xF0005040     /* "CAN Message Object 82 Function Control Register" */
#define CAN_MOFGPR82_ADDR     0xF0005044     /* "CAN Message Object 82 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR82_ADDR      0xF0005048     /* "CAN Message Object 82 Interrupt Pointer Register" */
#define CAN_MOAMR82_ADDR      0xF000504C     /* "CAN Message Object 82 Acceptance Mask Register" */
#define CAN_MODATAL82_ADDR    0xF0005050     /* "CAN Message Object 82 Data Register Low" */
#define CAN_MODATAH82_ADDR    0xF0005054     /* "CAN Message Object 82 Data Register High" */
#define CAN_MOAR82_ADDR       0xF0005058     /* "CAN Message Object 82 Arbitration Register" */
#define CAN_MOSTAT82_ADDR     0xF000505C     /* "Message Object 82" */
#define CAN_MOFCR83_ADDR      0xF0005060     /* "CAN Message Object 83 Function Control Register" */
#define CAN_MOFGPR83_ADDR     0xF0005064     /* "CAN Message Object 83 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR83_ADDR      0xF0005068     /* "CAN Message Object 83 Interrupt Pointer Register" */
#define CAN_MOAMR83_ADDR      0xF000506C     /* "CAN Message Object 83 Acceptance Mask Register" */
#define CAN_MODATAL83_ADDR    0xF0005070     /* "CAN Message Object 83 Data Register Low" */
#define CAN_MODATAH83_ADDR    0xF0005074     /* "CAN Message Object 83 Data Register High" */
#define CAN_MOAR83_ADDR       0xF0005078     /* "CAN Message Object 83 Arbitration Register" */
#define CAN_MOSTAT83_ADDR     0xF000507C     /* "Message Object 83" */
#define CAN_MOFCR84_ADDR      0xF0005080     /* "CAN Message Object 84 Function Control Register" */
#define CAN_MOFGPR84_ADDR     0xF0005084     /* "CAN Message Object 84 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR84_ADDR      0xF0005088     /* "CAN Message Object 84 Interrupt Pointer Register" */
#define CAN_MOAMR84_ADDR      0xF000508C     /* "CAN Message Object 84 Acceptance Mask Register" */
#define CAN_MODATAL84_ADDR    0xF0005090     /* "CAN Message Object 84 Data Register Low" */
#define CAN_MODATAH84_ADDR    0xF0005094     /* "CAN Message Object 84 Data Register High" */
#define CAN_MOAR84_ADDR       0xF0005098     /* "CAN Message Object 84 Arbitration Register" */
#define CAN_MOSTAT84_ADDR     0xF000509C     /* "Message Object 84" */
#define CAN_MOFCR85_ADDR      0xF00050A0     /* "CAN Message Object 85 Function Control Register" */
#define CAN_MOFGPR85_ADDR     0xF00050A4     /* "CAN Message Object 85 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR85_ADDR      0xF00050A8     /* "CAN Message Object 85 Interrupt Pointer Register" */
#define CAN_MOAMR85_ADDR      0xF00050AC     /* "CAN Message Object 85 Acceptance Mask Register" */
#define CAN_MODATAL85_ADDR    0xF00050B0     /* "CAN Message Object 85 Data Register Low" */
#define CAN_MODATAH85_ADDR    0xF00050B4     /* "CAN Message Object 85 Data Register High" */
#define CAN_MOAR85_ADDR       0xF00050B8     /* "CAN Message Object 85 Arbitration Register" */
#define CAN_MOSTAT85_ADDR     0xF00050BC     /* "Message Object 85" */
#define CAN_MOFCR86_ADDR      0xF00050C0     /* "CAN Message Object 86 Function Control Register" */
#define CAN_MOFGPR86_ADDR     0xF00050C4     /* "CAN Message Object 86 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR86_ADDR      0xF00050C8     /* "CAN Message Object 86 Interrupt Pointer Register" */
#define CAN_MOAMR86_ADDR      0xF00050CC     /* "CAN Message Object 86 Acceptance Mask Register" */
#define CAN_MODATAL86_ADDR    0xF00050D0     /* "CAN Message Object 86 Data Register Low" */
#define CAN_MODATAH86_ADDR    0xF00050D4     /* "CAN Message Object 86 Data Register High" */
#define CAN_MOAR86_ADDR       0xF00050D8     /* "CAN Message Object 86 Arbitration Register" */
#define CAN_MOSTAT86_ADDR     0xF00050DC     /* "Message Object 86" */
#define CAN_MOFCR87_ADDR      0xF00050E0     /* "CAN Message Object 87 Function Control Register" */
#define CAN_MOFGPR87_ADDR     0xF00050E4     /* "CAN Message Object 87 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR87_ADDR      0xF00050E8     /* "CAN Message Object 87 Interrupt Pointer Register" */
#define CAN_MOAMR87_ADDR      0xF00050EC     /* "CAN Message Object 87 Acceptance Mask Register" */
#define CAN_MODATAL87_ADDR    0xF00050F0     /* "CAN Message Object 87 Data Register Low" */
#define CAN_MODATAH87_ADDR    0xF00050F4     /* "CAN Message Object 87 Data Register High" */
#define CAN_MOAR87_ADDR       0xF00050F8     /* "CAN Message Object 87 Arbitration Register" */
#define CAN_MOSTAT87_ADDR     0xF00050FC     /* "Message Object 87" */
#define CAN_MOFCR88_ADDR      0xF0005100     /* "CAN Message Object 88 Function Control Register" */
#define CAN_MOFGPR88_ADDR     0xF0005104     /* "CAN Message Object 88 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR88_ADDR      0xF0005108     /* "CAN Message Object 88 Interrupt Pointer Register" */
#define CAN_MOAMR88_ADDR      0xF000510C     /* "CAN Message Object 88 Acceptance Mask Register" */
#define CAN_MODATAL88_ADDR    0xF0005110     /* "CAN Message Object 88 Data Register Low" */
#define CAN_MODATAH88_ADDR    0xF0005114     /* "CAN Message Object 88 Data Register High" */
#define CAN_MOAR88_ADDR       0xF0005118     /* "CAN Message Object 88 Arbitration Register" */
#define CAN_MOSTAT88_ADDR     0xF000511C     /* "Message Object 88" */
#define CAN_MOFCR89_ADDR      0xF0005120     /* "CAN Message Object 89 Function Control Register" */
#define CAN_MOFGPR89_ADDR     0xF0005124     /* "CAN Message Object 89 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR89_ADDR      0xF0005128     /* "CAN Message Object 89 Interrupt Pointer Register" */
#define CAN_MOAMR89_ADDR      0xF000512C     /* "CAN Message Object 89 Acceptance Mask Register" */
#define CAN_MODATAL89_ADDR    0xF0005130     /* "CAN Message Object 89 Data Register Low" */
#define CAN_MODATAH89_ADDR    0xF0005134     /* "CAN Message Object 89 Data Register High" */
#define CAN_MOAR89_ADDR       0xF0005138     /* "CAN Message Object 89 Arbitration Register" */
#define CAN_MOSTAT89_ADDR     0xF000513C     /* "Message Object 89" */
#define CAN_MOFCR90_ADDR      0xF0005140     /* "CAN Message Object 90 Function Control Register" */
#define CAN_MOFGPR90_ADDR     0xF0005144     /* "CAN Message Object 90 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR90_ADDR      0xF0005148     /* "CAN Message Object 90 Interrupt Pointer Register" */
#define CAN_MOAMR90_ADDR      0xF000514C     /* "CAN Message Object 90 Acceptance Mask Register" */
#define CAN_MODATAL90_ADDR    0xF0005150     /* "CAN Message Object 90 Data Register Low" */
#define CAN_MODATAH90_ADDR    0xF0005154     /* "CAN Message Object 90 Data Register High" */
#define CAN_MOAR90_ADDR       0xF0005158     /* "CAN Message Object 90 Arbitration Register" */
#define CAN_MOSTAT90_ADDR     0xF000515C     /* "Message Object 90" */
#define CAN_MOFCR91_ADDR      0xF0005160     /* "CAN Message Object 91 Function Control Register" */
#define CAN_MOFGPR91_ADDR     0xF0005164     /* "CAN Message Object 91 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR91_ADDR      0xF0005168     /* "CAN Message Object 91 Interrupt Pointer Register" */
#define CAN_MOAMR91_ADDR      0xF000516C     /* "CAN Message Object 91 Acceptance Mask Register" */
#define CAN_MODATAL91_ADDR    0xF0005170     /* "CAN Message Object 91 Data Register Low" */
#define CAN_MODATAH91_ADDR    0xF0005174     /* "CAN Message Object 91 Data Register High" */
#define CAN_MOAR91_ADDR       0xF0005178     /* "CAN Message Object 91 Arbitration Register" */
#define CAN_MOSTAT91_ADDR     0xF000517C     /* "Message Object 91" */
#define CAN_MOFCR92_ADDR      0xF0005180     /* "CAN Message Object 92 Function Control Register" */
#define CAN_MOFGPR92_ADDR     0xF0005184     /* "CAN Message Object 92 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR92_ADDR      0xF0005188     /* "CAN Message Object 92 Interrupt Pointer Register" */
#define CAN_MOAMR92_ADDR      0xF000518C     /* "CAN Message Object 92 Acceptance Mask Register" */
#define CAN_MODATAL92_ADDR    0xF0005190     /* "CAN Message Object 92 Data Register Low" */
#define CAN_MODATAH92_ADDR    0xF0005194     /* "CAN Message Object 92 Data Register High" */
#define CAN_MOAR92_ADDR       0xF0005198     /* "CAN Message Object 92 Arbitration Register" */
#define CAN_MOSTAT92_ADDR     0xF000519C     /* "Message Object 92" */
#define CAN_MOFCR93_ADDR      0xF00051A0     /* "CAN Message Object 93 Function Control Register" */
#define CAN_MOFGPR93_ADDR     0xF00051A4     /* "CAN Message Object 93 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR93_ADDR      0xF00051A8     /* "CAN Message Object 93 Interrupt Pointer Register" */
#define CAN_MOAMR93_ADDR      0xF00051AC     /* "CAN Message Object 93 Acceptance Mask Register" */
#define CAN_MODATAL93_ADDR    0xF00051B0     /* "CAN Message Object 93 Data Register Low" */
#define CAN_MODATAH93_ADDR    0xF00051B4     /* "CAN Message Object 93 Data Register High" */
#define CAN_MOAR93_ADDR       0xF00051B8     /* "CAN Message Object 93 Arbitration Register" */
#define CAN_MOSTAT93_ADDR     0xF00051BC     /* "Message Object 93" */
#define CAN_MOFCR94_ADDR      0xF00051C0     /* "CAN Message Object 94 Function Control Register" */
#define CAN_MOFGPR94_ADDR     0xF00051C4     /* "CAN Message Object 94 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR94_ADDR      0xF00051C8     /* "CAN Message Object 94 Interrupt Pointer Register" */
#define CAN_MOAMR94_ADDR      0xF00051CC     /* "CAN Message Object 94 Acceptance Mask Register" */
#define CAN_MODATAL94_ADDR    0xF00051D0     /* "CAN Message Object 94 Data Register Low" */
#define CAN_MODATAH94_ADDR    0xF00051D4     /* "CAN Message Object 94 Data Register High" */
#define CAN_MOAR94_ADDR       0xF00051D8     /* "CAN Message Object 94 Arbitration Register" */
#define CAN_MOSTAT94_ADDR     0xF00051DC     /* "Message Object 94" */
#define CAN_MOFCR95_ADDR      0xF00051E0     /* "CAN Message Object 95 Function Control Register" */
#define CAN_MOFGPR95_ADDR     0xF00051E4     /* "CAN Message Object 95 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR95_ADDR      0xF00051E8     /* "CAN Message Object 95 Interrupt Pointer Register" */
#define CAN_MOAMR95_ADDR      0xF00051EC     /* "CAN Message Object 95 Acceptance Mask Register" */
#define CAN_MODATAL95_ADDR    0xF00051F0     /* "CAN Message Object 95 Data Register Low" */
#define CAN_MODATAH95_ADDR    0xF00051F4     /* "CAN Message Object 95 Data Register High" */
#define CAN_MOAR95_ADDR       0xF00051F8     /* "CAN Message Object 95 Arbitration Register" */
#define CAN_MOSTAT95_ADDR     0xF00051FC     /* "Message Object 95" */
#define CAN_MOFCR96_ADDR      0xF0005200     /* "Message Object 96 Function Control Register" */
#define CAN_MOFGPR96_ADDR     0xF0005204     /* "Message Object 96 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR96_ADDR      0xF0005208     /* "Message Object 96 Interrupt Pointer Register" */
#define CAN_MOAMR96_ADDR      0xF000520C     /* "Message Object 96 Acceptance Mask Register" */
#define CAN_MODATAL96_ADDR    0xF0005210     /* "Message Object 96 Data Register Low" */
#define CAN_MODATAH96_ADDR    0xF0005214     /* "Message Object 96 Data Register High" */
#define CAN_MOAR96_ADDR       0xF0005218     /* "Message Object 96 Arbitration Register" */
#define CAN_MOSTAT96_ADDR     0xF000521C     /* "Message Object 96" */
#define CAN_MOFCR97_ADDR      0xF0005220     /* "Message Object 97 Function Control Register" */
#define CAN_MOFGPR97_ADDR     0xF0005224     /* "Message Object 97 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR97_ADDR      0xF0005228     /* "Message Object 97 Interrupt Pointer Register" */
#define CAN_MOAMR97_ADDR      0xF000522C     /* "Message Object 97 Acceptance Mask Register" */
#define CAN_MODATAL97_ADDR    0xF0005230     /* "Message Object 97 Data Register Low" */
#define CAN_MODATAH97_ADDR    0xF0005234     /* "Message Object 97 Data Register High" */
#define CAN_MOAR97_ADDR       0xF0005238     /* "Message Object 97 Arbitration Register" */
#define CAN_MOSTAT97_ADDR     0xF000523C     /* "Message Object 97" */
#define CAN_MOFCR98_ADDR      0xF0005240     /* "Message Object 98 Function Control Register" */
#define CAN_MOFGPR98_ADDR     0xF0005244     /* "Message Object 98 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR98_ADDR      0xF0005248     /* "Message Object 98 Interrupt Pointer Register" */
#define CAN_MOAMR98_ADDR      0xF000524C     /* "Message Object 98 Acceptance Mask Register" */
#define CAN_MODATAL98_ADDR    0xF0005250     /* "Message Object 98 Data Register Low" */
#define CAN_MODATAH98_ADDR    0xF0005254     /* "Message Object 98 Data Register High" */
#define CAN_MOAR98_ADDR       0xF0005258     /* "Message Object 98 Arbitration Register" */
#define CAN_MOSTAT98_ADDR     0xF000525C     /* "Message Object 98" */
#define CAN_MOFCR99_ADDR      0xF0005260     /* "Message Object 99 Function Control Register" */
#define CAN_MOFGPR99_ADDR     0xF0005264     /* "Message Object 99 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR99_ADDR      0xF0005268     /* "Message Object 99 Interrupt Pointer Register" */
#define CAN_MOAMR99_ADDR      0xF000526C     /* "Message Object 99 Acceptance Mask Register" */
#define CAN_MODATAL99_ADDR    0xF0005270     /* "Message Object 99 Data Register Low" */
#define CAN_MODATAH99_ADDR    0xF0005274     /* "Message Object 99 Data Register High" */
#define CAN_MOAR99_ADDR       0xF0005278     /* "Message Object 99 Arbitration Register" */
#define CAN_MOSTAT99_ADDR     0xF000527C     /* "Message Object 99" */
#define CAN_MOFCR100_ADDR     0xF0005280     /* "Message Object 100 Function Control Register" */
#define CAN_MOFGPR100_ADDR    0xF0005284     /* "Message Object 100 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR100_ADDR     0xF0005288     /* "Message Object 100 Interrupt Pointer Register" */
#define CAN_MOAMR100_ADDR     0xF000528C     /* "Message Object 100 Acceptance Mask Register" */
#define CAN_MODATAL100_ADDR   0xF0005290     /* "Message Object 100 Data Register Low" */
#define CAN_MODATAH100_ADDR   0xF0005294     /* "Message Object 100 Data Register High" */
#define CAN_MOAR100_ADDR      0xF0005298     /* "Message Object 100 Arbitration Register" */
#define CAN_MOSTAT100_ADDR    0xF000529C     /* "Message Object 100" */
#define CAN_MOFCR101_ADDR     0xF00052A0     /* "Message Object 101 Function Control Register" */
#define CAN_MOFGPR101_ADDR    0xF00052A4     /* "Message Object 101 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR101_ADDR     0xF00052A8     /* "Message Object 101 Interrupt Pointer Register" */
#define CAN_MOAMR101_ADDR     0xF00052AC     /* "Message Object 101 Acceptance Mask Register" */
#define CAN_MODATAL101_ADDR   0xF00052B0     /* "Message Object 101 Data Register Low" */
#define CAN_MODATAH101_ADDR   0xF00052B4     /* "Message Object 101 Data Register High" */
#define CAN_MOAR101_ADDR      0xF00052B8     /* "Message Object 101 Arbitration Register" */
#define CAN_MOSTAT101_ADDR    0xF00052BC     /* "Message Object 101" */
#define CAN_MOFCR102_ADDR     0xF00052C0     /* "Message Object 102 Function Control Register" */
#define CAN_MOFGPR102_ADDR    0xF00052C4     /* "Message Object 102 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR102_ADDR     0xF00052C8     /* "Message Object 102 Interrupt Pointer Register" */
#define CAN_MOAMR102_ADDR     0xF00052CC     /* "Message Object 102 Acceptance Mask Register" */
#define CAN_MODATAL102_ADDR   0xF00052D0     /* "Message Object 102 Data Register Low" */
#define CAN_MODATAH102_ADDR   0xF00052D4     /* "Message Object 102 Data Register High" */
#define CAN_MOAR102_ADDR      0xF00052D8     /* "Message Object 102 Arbitration Register" */
#define CAN_MOSTAT102_ADDR    0xF00052DC     /* "Message Object 102" */
#define CAN_MOFCR103_ADDR     0xF00052E0     /* "Message Object 103 Function Control Register" */
#define CAN_MOFGPR103_ADDR    0xF00052E4     /* "Message Object 103 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR103_ADDR     0xF00052E8     /* "Message Object 103 Interrupt Pointer Register" */
#define CAN_MOAMR103_ADDR     0xF00052EC     /* "Message Object 103 Acceptance Mask Register" */
#define CAN_MODATAL103_ADDR   0xF00052F0     /* "Message Object 103 Data Register Low" */
#define CAN_MODATAH103_ADDR   0xF00052F4     /* "Message Object 103 Data Register High" */
#define CAN_MOAR103_ADDR      0xF00052F8     /* "Message Object 103 Arbitration Register" */
#define CAN_MOSTAT103_ADDR    0xF00052FC     /* "Message Object 103" */
#define CAN_MOFCR104_ADDR     0xF0005300     /* "Message Object 104 Function Control Register" */
#define CAN_MOFGPR104_ADDR    0xF0005304     /* "Message Object 104 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR104_ADDR     0xF0005308     /* "Message Object 104 Interrupt Pointer Register" */
#define CAN_MOAMR104_ADDR     0xF000530C     /* "Message Object 104 Acceptance Mask Register" */
#define CAN_MODATAL104_ADDR   0xF0005310     /* "Message Object 104 Data Register Low" */
#define CAN_MODATAH104_ADDR   0xF0005314     /* "Message Object 104 Data Register High" */
#define CAN_MOAR104_ADDR      0xF0005318     /* "Message Object 104 Arbitration Register" */
#define CAN_MOSTAT104_ADDR    0xF000531C     /* "Message Object 104" */
#define CAN_MOFCR105_ADDR     0xF0005320     /* "Message Object 105 Function Control Register" */
#define CAN_MOFGPR105_ADDR    0xF0005324     /* "Message Object 105 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR105_ADDR     0xF0005328     /* "Message Object 105 Interrupt Pointer Register" */
#define CAN_MOAMR105_ADDR     0xF000532C     /* "Message Object 105 Acceptance Mask Register" */
#define CAN_MODATAL105_ADDR   0xF0005330     /* "Message Object 105 Data Register Low" */
#define CAN_MODATAH105_ADDR   0xF0005334     /* "Message Object 105 Data Register High" */
#define CAN_MOAR105_ADDR      0xF0005338     /* "Message Object 105 Arbitration Register" */
#define CAN_MOSTAT105_ADDR    0xF000533C     /* "Message Object 105" */
#define CAN_MOFCR106_ADDR     0xF0005340     /* "Message Object 106 Function Control Register" */
#define CAN_MOFGPR106_ADDR    0xF0005344     /* "Message Object 106 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR106_ADDR     0xF0005348     /* "Message Object 106 Interrupt Pointer Register" */
#define CAN_MOAMR106_ADDR     0xF000534C     /* "Message Object 106 Acceptance Mask Register" */
#define CAN_MODATAL106_ADDR   0xF0005350     /* "Message Object 106 Data Register Low" */
#define CAN_MODATAH106_ADDR   0xF0005354     /* "Message Object 106 Data Register High" */
#define CAN_MOAR106_ADDR      0xF0005358     /* "Message Object 106 Arbitration Register" */
#define CAN_MOSTAT106_ADDR    0xF000535C     /* "Message Object 106" */
#define CAN_MOFCR107_ADDR     0xF0005360     /* "Message Object 107 Function Control Register" */
#define CAN_MOFGPR107_ADDR    0xF0005364     /* "Message Object 107 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR107_ADDR     0xF0005368     /* "Message Object 107 Interrupt Pointer Register" */
#define CAN_MOAMR107_ADDR     0xF000536C     /* "Message Object 107 Acceptance Mask Register" */
#define CAN_MODATAL107_ADDR   0xF0005370     /* "Message Object 107 Data Register Low" */
#define CAN_MODATAH107_ADDR   0xF0005374     /* "Message Object 107 Data Register High" */
#define CAN_MOAR107_ADDR      0xF0005378     /* "Message Object 107 Arbitration Register" */
#define CAN_MOSTAT107_ADDR    0xF000537C     /* "Message Object 107" */
#define CAN_MOFCR108_ADDR     0xF0005380     /* "Message Object 108 Function Control Register" */
#define CAN_MOFGPR108_ADDR    0xF0005384     /* "Message Object 108 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR108_ADDR     0xF0005388     /* "Message Object 108 Interrupt Pointer Register" */
#define CAN_MOAMR108_ADDR     0xF000538C     /* "Message Object 108 Acceptance Mask Register" */
#define CAN_MODATAL108_ADDR   0xF0005390     /* "Message Object 108 Data Register Low" */
#define CAN_MODATAH108_ADDR   0xF0005394     /* "Message Object 108 Data Register High" */
#define CAN_MOAR108_ADDR      0xF0005398     /* "Message Object 108 Arbitration Register" */
#define CAN_MOSTAT108_ADDR    0xF000539C     /* "Message Object 108" */
#define CAN_MOFCR109_ADDR     0xF00053A0     /* "Message Object 109 Function Control Register" */
#define CAN_MOFGPR109_ADDR    0xF00053A4     /* "Message Object 109 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR109_ADDR     0xF00053A8     /* "Message Object 109 Interrupt Pointer Register" */
#define CAN_MOAMR109_ADDR     0xF00053AC     /* "Message Object 109 Acceptance Mask Register" */
#define CAN_MODATAL109_ADDR   0xF00053B0     /* "Message Object 109 Data Register Low" */
#define CAN_MODATAH109_ADDR   0xF00053B4     /* "Message Object 109 Data Register High" */
#define CAN_MOAR109_ADDR      0xF00053B8     /* "Message Object 109 Arbitration Register" */
#define CAN_MOSTAT109_ADDR    0xF00053BC     /* "Message Object 109" */
#define CAN_MOFCR110_ADDR     0xF00053C0     /* "Message Object 110 Function Control Register" */
#define CAN_MOFGPR110_ADDR    0xF00053C4     /* "Message Object 110 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR110_ADDR     0xF00053C8     /* "Message Object 110 Interrupt Pointer Register" */
#define CAN_MOAMR110_ADDR     0xF00053CC     /* "Message Object 110 Acceptance Mask Register" */
#define CAN_MODATAL110_ADDR   0xF00053D0     /* "Message Object 110 Data Register Low" */
#define CAN_MODATAH110_ADDR   0xF00053D4     /* "Message Object 110 Data Register High" */
#define CAN_MOAR110_ADDR      0xF00053D8     /* "Message Object 110 Arbitration Register" */
#define CAN_MOSTAT110_ADDR    0xF00053DC     /* "Message Object 110" */
#define CAN_MOFCR111_ADDR     0xF00053E0     /* "Message Object 111 Function Control Register" */
#define CAN_MOFGPR111_ADDR    0xF00053E4     /* "Message Object 111 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR111_ADDR     0xF00053E8     /* "Message Object 111 Interrupt Pointer Register" */
#define CAN_MOAMR111_ADDR     0xF00053EC     /* "Message Object 111 Acceptance Mask Register" */
#define CAN_MODATAL111_ADDR   0xF00053F0     /* "Message Object 111 Data Register Low" */
#define CAN_MODATAH111_ADDR   0xF00053F4     /* "Message Object 111 Data Register High" */
#define CAN_MOAR111_ADDR      0xF00053F8     /* "Message Object 111 Arbitration Register" */
#define CAN_MOSTAT111_ADDR    0xF00053FC     /* "Message Object 111" */
#define CAN_MOFCR112_ADDR     0xF0005400     /* "Message Object 112 Function Control Register" */
#define CAN_MOFGPR112_ADDR    0xF0005404     /* "Message Object 112 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR112_ADDR     0xF0005408     /* "Message Object 112 Interrupt Pointer Register" */
#define CAN_MOAMR112_ADDR     0xF000540C     /* "Message Object 112 Acceptance Mask Register" */
#define CAN_MODATAL112_ADDR   0xF0005410     /* "Message Object 112 Data Register Low" */
#define CAN_MODATAH112_ADDR   0xF0005414     /* "Message Object 112 Data Register High" */
#define CAN_MOAR112_ADDR      0xF0005418     /* "Message Object 112 Arbitration Register" */
#define CAN_MOSTAT112_ADDR    0xF000541C     /* "Message Object 112" */
#define CAN_MOFCR113_ADDR     0xF0005420     /* "Message Object 113 Function Control Register" */
#define CAN_MOFGPR113_ADDR    0xF0005424     /* "Message Object 113 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR113_ADDR     0xF0005428     /* "Message Object 113 Interrupt Pointer Register" */
#define CAN_MOAMR113_ADDR     0xF000542C     /* "Message Object 113 Acceptance Mask Register" */
#define CAN_MODATAL113_ADDR   0xF0005430     /* "Message Object 113 Data Register Low" */
#define CAN_MODATAH113_ADDR   0xF0005434     /* "Message Object 113 Data Register High" */
#define CAN_MOAR113_ADDR      0xF0005438     /* "Message Object 113 Arbitration Register" */
#define CAN_MOSTAT113_ADDR    0xF000543C     /* "Message Object 113" */
#define CAN_MOFCR114_ADDR     0xF0005440     /* "Message Object 114 Function Control Register" */
#define CAN_MOFGPR114_ADDR    0xF0005444     /* "Message Object 114 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR114_ADDR     0xF0005448     /* "Message Object 114 Interrupt Pointer Register" */
#define CAN_MOAMR114_ADDR     0xF000544C     /* "Message Object 114 Acceptance Mask Register" */
#define CAN_MODATAL114_ADDR   0xF0005450     /* "Message Object 114 Data Register Low" */
#define CAN_MODATAH114_ADDR   0xF0005454     /* "Message Object 114 Data Register High" */
#define CAN_MOAR114_ADDR      0xF0005458     /* "Message Object 114 Arbitration Register" */
#define CAN_MOSTAT114_ADDR    0xF000545C     /* "Message Object 114" */
#define CAN_MOFCR115_ADDR     0xF0005460     /* "Message Object 115 Function Control Register" */
#define CAN_MOFGPR115_ADDR    0xF0005464     /* "Message Object 115 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR115_ADDR     0xF0005468     /* "Message Object 115 Interrupt Pointer Register" */
#define CAN_MOAMR115_ADDR     0xF000546C     /* "Message Object 115 Acceptance Mask Register" */
#define CAN_MODATAL115_ADDR   0xF0005470     /* "Message Object 115 Data Register Low" */
#define CAN_MODATAH115_ADDR   0xF0005474     /* "Message Object 115 Data Register High" */
#define CAN_MOAR115_ADDR      0xF0005478     /* "Message Object 115 Arbitration Register" */
#define CAN_MOSTAT115_ADDR    0xF000547C     /* "Message Object 115" */
#define CAN_MOFCR116_ADDR     0xF0005480     /* "Message Object 116 Function Control Register" */
#define CAN_MOFGPR116_ADDR    0xF0005484     /* "Message Object 116 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR116_ADDR     0xF0005488     /* "Message Object 116 Interrupt Pointer Register" */
#define CAN_MOAMR116_ADDR     0xF000548C     /* "Message Object 116 Acceptance Mask Register" */
#define CAN_MODATAL116_ADDR   0xF0005490     /* "Message Object 116 Data Register Low" */
#define CAN_MODATAH116_ADDR   0xF0005494     /* "Message Object 116 Data Register High" */
#define CAN_MOAR116_ADDR      0xF0005498     /* "Message Object 116 Arbitration Register" */
#define CAN_MOSTAT116_ADDR    0xF000549C     /* "Message Object 116" */
#define CAN_MOFCR117_ADDR     0xF00054A0     /* "Message Object 117 Function Control Register" */
#define CAN_MOFGPR117_ADDR    0xF00054A4     /* "Message Object 117 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR117_ADDR     0xF00054A8     /* "Message Object 117 Interrupt Pointer Register" */
#define CAN_MOAMR117_ADDR     0xF00054AC     /* "Message Object 117 Acceptance Mask Register" */
#define CAN_MODATAL117_ADDR   0xF00054B0     /* "Message Object 117 Data Register Low" */
#define CAN_MODATAH117_ADDR   0xF00054B4     /* "Message Object 117 Data Register High" */
#define CAN_MOAR117_ADDR      0xF00054B8     /* "Message Object 117 Arbitration Register" */
#define CAN_MOSTAT117_ADDR    0xF00054BC     /* "Message Object 117" */
#define CAN_MOFCR118_ADDR     0xF00054C0     /* "Message Object 118 Function Control Register" */
#define CAN_MOFGPR118_ADDR    0xF00054C4     /* "Message Object 118 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR118_ADDR     0xF00054C8     /* "Message Object 118 Interrupt Pointer Register" */
#define CAN_MOAMR118_ADDR     0xF00054CC     /* "Message Object 118 Acceptance Mask Register" */
#define CAN_MODATAL118_ADDR   0xF00054D0     /* "Message Object 118 Data Register Low" */
#define CAN_MODATAH118_ADDR   0xF00054D4     /* "Message Object 118 Data Register High" */
#define CAN_MOAR118_ADDR      0xF00054D8     /* "Message Object 118 Arbitration Register" */
#define CAN_MOSTAT118_ADDR    0xF00054DC     /* "Message Object 118" */
#define CAN_MOFCR119_ADDR     0xF00054E0     /* "Message Object 119 Function Control Register" */
#define CAN_MOFGPR119_ADDR    0xF00054E4     /* "Message Object 119 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR119_ADDR     0xF00054E8     /* "Message Object 119 Interrupt Pointer Register" */
#define CAN_MOAMR119_ADDR     0xF00054EC     /* "Message Object 119 Acceptance Mask Register" */
#define CAN_MODATAL119_ADDR   0xF00054F0     /* "Message Object 119 Data Register Low" */
#define CAN_MODATAH119_ADDR   0xF00054F4     /* "Message Object 119 Data Register High" */
#define CAN_MOAR119_ADDR      0xF00054F8     /* "Message Object 119 Arbitration Register" */
#define CAN_MOSTAT119_ADDR    0xF00054FC     /* "Message Object 119" */
#define CAN_MOFCR120_ADDR     0xF0005500     /* "Message Object 120 Function Control Register" */
#define CAN_MOFGPR120_ADDR    0xF0005504     /* "Message Object 120 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR120_ADDR     0xF0005508     /* "Message Object 120 Interrupt Pointer Register" */
#define CAN_MOAMR120_ADDR     0xF000550C     /* "Message Object 120 Acceptance Mask Register" */
#define CAN_MODATAL120_ADDR   0xF0005510     /* "Message Object 120 Data Register Low" */
#define CAN_MODATAH120_ADDR   0xF0005514     /* "Message Object 120 Data Register High" */
#define CAN_MOAR120_ADDR      0xF0005518     /* "Message Object 120 Arbitration Register" */
#define CAN_MOSTAT120_ADDR    0xF000551C     /* "Message Object 120" */
#define CAN_MOFCR121_ADDR     0xF0005520     /* "Message Object 121 Function Control Register" */
#define CAN_MOFGPR121_ADDR    0xF0005524     /* "Message Object 121 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR121_ADDR     0xF0005528     /* "Message Object 121 Interrupt Pointer Register" */
#define CAN_MOAMR121_ADDR     0xF000552C     /* "Message Object 121 Acceptance Mask Register" */
#define CAN_MODATAL121_ADDR   0xF0005530     /* "Message Object 121 Data Register Low" */
#define CAN_MODATAH121_ADDR   0xF0005534     /* "Message Object 121 Data Register High" */
#define CAN_MOAR121_ADDR      0xF0005538     /* "Message Object 121 Arbitration Register" */
#define CAN_MOSTAT121_ADDR    0xF000553C     /* "Message Object 121" */
#define CAN_MOFCR122_ADDR     0xF0005540     /* "Message Object 122 Function Control Register" */
#define CAN_MOFGPR122_ADDR    0xF0005544     /* "Message Object 122 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR122_ADDR     0xF0005548     /* "Message Object 122 Interrupt Pointer Register" */
#define CAN_MOAMR122_ADDR     0xF000554C     /* "Message Object 122 Acceptance Mask Register" */
#define CAN_MODATAL122_ADDR   0xF0005550     /* "Message Object 122 Data Register Low" */
#define CAN_MODATAH122_ADDR   0xF0005554     /* "Message Object 122 Data Register High" */
#define CAN_MOAR122_ADDR      0xF0005558     /* "Message Object 122 Arbitration Register" */
#define CAN_MOSTAT122_ADDR    0xF000555C     /* "Message Object 122" */
#define CAN_MOFCR123_ADDR     0xF0005560     /* "Message Object 123 Function Control Register" */
#define CAN_MOFGPR123_ADDR    0xF0005564     /* "Message Object 123 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR123_ADDR     0xF0005568     /* "Message Object 123 Interrupt Pointer Register" */
#define CAN_MOAMR123_ADDR     0xF000556C     /* "Message Object 123 Acceptance Mask Register" */
#define CAN_MODATAL123_ADDR   0xF0005570     /* "Message Object 123 Data Register Low" */
#define CAN_MODATAH123_ADDR   0xF0005574     /* "Message Object 123 Data Register High" */
#define CAN_MOAR123_ADDR      0xF0005578     /* "Message Object 123 Arbitration Register" */
#define CAN_MOSTAT123_ADDR    0xF000557C     /* "Message Object 123" */
#define CAN_MOFCR124_ADDR     0xF0005580     /* "Message Object 124 Function Control Register" */
#define CAN_MOFGPR124_ADDR    0xF0005584     /* "Message Object 124 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR124_ADDR     0xF0005588     /* "Message Object 124 Interrupt Pointer Register" */
#define CAN_MOAMR124_ADDR     0xF000558C     /* "Message Object 124 Acceptance Mask Register" */
#define CAN_MODATAL124_ADDR   0xF0005590     /* "Message Object 124 Data Register Low" */
#define CAN_MODATAH124_ADDR   0xF0005594     /* "Message Object 124 Data Register High" */
#define CAN_MOAR124_ADDR      0xF0005598     /* "Message Object 124 Arbitration Register" */
#define CAN_MOSTAT124_ADDR    0xF000559C     /* "Message Object 124" */
#define CAN_MOFCR125_ADDR     0xF00055A0     /* "Message Object 125 Function Control Register" */
#define CAN_MOFGPR125_ADDR    0xF00055A4     /* "Message Object 125 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR125_ADDR     0xF00055A8     /* "Message Object 125 Interrupt Pointer Register" */
#define CAN_MOAMR125_ADDR     0xF00055AC     /* "Message Object 125 Acceptance Mask Register" */
#define CAN_MODATAL125_ADDR   0xF00055B0     /* "Message Object 125 Data Register Low" */
#define CAN_MODATAH125_ADDR   0xF00055B4     /* "Message Object 125 Data Register High" */
#define CAN_MOAR125_ADDR      0xF00055B8     /* "Message Object 125 Arbitration Register" */
#define CAN_MOSTAT125_ADDR    0xF00055BC     /* "Message Object 125" */
#define CAN_MOFCR126_ADDR     0xF00055C0     /* "Message Object 126 Function Control Register" */
#define CAN_MOFGPR126_ADDR    0xF00055C4     /* "Message Object 126 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR126_ADDR     0xF00055C8     /* "Message Object 126 Interrupt Pointer Register" */
#define CAN_MOAMR126_ADDR     0xF00055CC     /* "Message Object 126 Acceptance Mask Register" */
#define CAN_MODATAL126_ADDR   0xF00055D0     /* "Message Object 126 Data Register Low" */
#define CAN_MODATAH126_ADDR   0xF00055D4     /* "Message Object 126 Data Register High" */
#define CAN_MOAR126_ADDR      0xF00055D8     /* "Message Object 126 Arbitration Register" */
#define CAN_MOSTAT126_ADDR    0xF00055DC     /* "Message Object 126" */
#define CAN_MOFCR127_ADDR     0xF00055E0     /* "Message Object 127 Function Control Register" */
#define CAN_MOFGPR127_ADDR    0xF00055E4     /* "Message Object 127 FIFO/Gateway Pointer Register" */
#define CAN_MOIPR127_ADDR     0xF00055E8     /* "Message Object 127 Interrupt Pointer Register" */
#define CAN_MOAMR127_ADDR     0xF00055EC     /* "Message Object 127 Acceptance Mask Register" */
#define CAN_MODATAL127_ADDR   0xF00055F0     /* "Message Object 127 Data Register Low" */
#define CAN_MODATAH127_ADDR   0xF00055F4     /* "Message Object 127 Data Register High" */
#define CAN_MOAR127_ADDR      0xF00055F8     /* "Message Object 127 Arbitration Register" */
#define CAN_MOSTAT127_ADDR    0xF00055FC     /* "Message Object 127" */
#define CAN_STPTR0_ADDR       0xF00057FC     /* "CAN Scheduler Start Pointer Node 0 Register" */


#endif /* _HAVE_TRICORE_CAN_ADDRESSES_H_ (block "CAN") */

