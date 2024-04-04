/**
 * \file IfxCpu_reg.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37x_TS_V2.6.0.R0
 * Specification: TC3xx Target Specification.V2.6.0
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxSfr_Cpu_Registers_Cfg Cpu address
 * \ingroup IfxSfr_Cpu_Registers
 * 
 * \defgroup IfxSfr_Cpu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Cpu_Registers_Cfg
 *
 * \defgroup IfxSfr_Cpu_Registers_Cfg_Cpu0 2-CPU0
 * \ingroup IfxSfr_Cpu_Registers_Cfg
 *
 * \defgroup IfxSfr_Cpu_Registers_Cfg_Cpu1 2-CPU1
 * \ingroup IfxSfr_Cpu_Registers_Cfg
 *
 * \defgroup IfxSfr_Cpu_Registers_Cfg_Cpu2 2-CPU2
 * \ingroup IfxSfr_Cpu_Registers_Cfg
 *
 *
 */
#ifndef IFXCPU_REG_H
#define IFXCPU_REG_H 1
/******************************************************************************/
#include "IfxCpu_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Cpu_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CPU object */
#define MODULE_CPU0 /*lint --e(923, 9078)*/ ((*(Ifx_CPU*)0xF8800000u))
#define MODULE_CPU1 /*lint --e(923, 9078)*/ ((*(Ifx_CPU*)0xF8820000u))
#define MODULE_CPU2 /*lint --e(923, 9078)*/ ((*(Ifx_CPU*)0xF8840000u))
/** \}  */

/** \brief 1030, CPUx SRI Error Generation Register */
#define CPU_SEGEN 0x1030

/** \brief 8004, CPUx Task Address Space Identifier Register */
#define CPU_TASK_ASI 0x8004

/** \brief 8100, CPUx Data Access CacheabilityRegister */
#define CPU_PMA0 0x8100

/** \brief 8104, CPUx Code Access CacheabilityRegister */
#define CPU_PMA1 0x8104

/** \brief 8108, CPUx  Peripheral Space Identifier register */
#define CPU_PMA2 0x8108

/** \brief 9000, CPUx Data Control Register 2 */
#define CPU_DCON2 0x9000

/** \brief 900C, CPUx SIST Mode Access Control Register */
#define CPU_SMACON 0x900C

/** \brief 9010, CPUx Data Synchronous Trap Register */
#define CPU_DSTR 0x9010

/** \brief 9018, CPUx Data Asynchronous Trap Register */
#define CPU_DATR 0x9018

/** \brief 901C, CPUx Data Error Address Register */
#define CPU_DEADD 0x901C

/** \brief 9020, CPUx Data Integrity Error Address Register */
#define CPU_DIEAR 0x9020

/** \brief 9024, CPUx Data Integrity Error Trap Register */
#define CPU_DIETR 0x9024

/** \brief 9040, CPUx Data Memory Control Register */
#define CPU_DCON0 0x9040

/** \brief 9200, CPUx Program Synchronous Trap Register */
#define CPU_PSTR 0x9200

/** \brief 9204, CPUx Program Control 1 */
#define CPU_PCON1 0x9204

/** \brief 9208, CPUx Program Control 2 */
#define CPU_PCON2 0x9208

/** \brief 920C, CPUx Program Control 0 */
#define CPU_PCON0 0x920C

/** \brief 9210, CPUx Program Integrity Error Address Register */
#define CPU_PIEAR 0x9210

/** \brief 9214, CPUx Program Integrity Error Trap Register */
#define CPU_PIETR 0x9214

/** \brief 9400, CPUx Compatibility Control Register */
#define CPU_COMPAT 0x9400

/** \brief A000, CPUx Trap Control Register */
#define CPU_FPU_TRAP_CON 0xA000

/** \brief A004, CPUx Trapping Instruction Program Counter Register */
#define CPU_FPU_TRAP_PC 0xA004

/** \brief A008, CPUx Trapping Instruction Opcode Register */
#define CPU_FPU_TRAP_OPC 0xA008

/** \brief A010, CPUx Trapping Instruction Operand Register */
#define CPU_FPU_TRAP_SRC1 0xA010

/** \brief A014, CPUx Trapping Instruction Operand Register */
#define CPU_FPU_TRAP_SRC2 0xA014

/** \brief A018, CPUx Trapping Instruction Operand Register */
#define CPU_FPU_TRAP_SRC3 0xA018

/** \brief C000, CPUx Data Protection Range 0, Lower Bound Register */
#define CPU_DPR0_L 0xC000

/** \brief C004, CPUx Data Protection Range 0, Upper Bound Register */
#define CPU_DPR0_U 0xC004

/** \brief C008, CPUx Data Protection Range 1, Lower Bound Register */
#define CPU_DPR1_L 0xC008

/** \brief C00C, CPUx Data Protection Range 1, Upper Bound Register */
#define CPU_DPR1_U 0xC00C

/** \brief C010, CPUx Data Protection Range 2, Lower Bound Register */
#define CPU_DPR2_L 0xC010

/** \brief C014, CPUx Data Protection Range 2, Upper Bound Register */
#define CPU_DPR2_U 0xC014

/** \brief C018, CPUx Data Protection Range 3, Lower Bound Register */
#define CPU_DPR3_L 0xC018

/** \brief C01C, CPUx Data Protection Range 3, Upper Bound Register */
#define CPU_DPR3_U 0xC01C

/** \brief C020, CPUx Data Protection Range 4, Lower Bound Register */
#define CPU_DPR4_L 0xC020

/** \brief C024, CPUx Data Protection Range 4, Upper Bound Register */
#define CPU_DPR4_U 0xC024

/** \brief C028, CPUx Data Protection Range 5, Lower Bound Register */
#define CPU_DPR5_L 0xC028

/** \brief C02C, CPUx Data Protection Range 5, Upper Bound Register */
#define CPU_DPR5_U 0xC02C

/** \brief C030, CPUx Data Protection Range 6, Lower Bound Register */
#define CPU_DPR6_L 0xC030

/** \brief C034, CPUx Data Protection Range 6, Upper Bound Register */
#define CPU_DPR6_U 0xC034

/** \brief C038, CPUx Data Protection Range 7, Lower Bound Register */
#define CPU_DPR7_L 0xC038

/** \brief C03C, CPUx Data Protection Range 7, Upper Bound Register */
#define CPU_DPR7_U 0xC03C

/** \brief C040, CPUx Data Protection Range 8, Lower Bound Register */
#define CPU_DPR8_L 0xC040

/** \brief C044, CPUx Data Protection Range 8, Upper Bound Register */
#define CPU_DPR8_U 0xC044

/** \brief C048, CPUx Data Protection Range 9, Lower Bound Register */
#define CPU_DPR9_L 0xC048

/** \brief C04C, CPUx Data Protection Range 9, Upper Bound Register */
#define CPU_DPR9_U 0xC04C

/** \brief C050, CPUx Data Protection Range 10, Lower Bound Register */
#define CPU_DPR10_L 0xC050

/** \brief C054, CPUx Data Protection Range 10, Upper Bound Register */
#define CPU_DPR10_U 0xC054

/** \brief C058, CPUx Data Protection Range 11, Lower Bound Register */
#define CPU_DPR11_L 0xC058

/** \brief C05C, CPUx Data Protection Range 11, Upper Bound Register */
#define CPU_DPR11_U 0xC05C

/** \brief C060, CPUx Data Protection Range 12, Lower Bound Register */
#define CPU_DPR12_L 0xC060

/** \brief C064, CPUx Data Protection Range 12, Upper Bound Register */
#define CPU_DPR12_U 0xC064

/** \brief C068, CPUx Data Protection Range 13, Lower Bound Register */
#define CPU_DPR13_L 0xC068

/** \brief C06C, CPUx Data Protection Range 13, Upper Bound Register */
#define CPU_DPR13_U 0xC06C

/** \brief C070, CPUx Data Protection Range 14, Lower Bound Register */
#define CPU_DPR14_L 0xC070

/** \brief C074, CPUx Data Protection Range 14, Upper Bound Register */
#define CPU_DPR14_U 0xC074

/** \brief C078, CPUx Data Protection Range 15, Lower Bound Register */
#define CPU_DPR15_L 0xC078

/** \brief C07C, CPUx Data Protection Range 15, Upper Bound Register */
#define CPU_DPR15_U 0xC07C

/** \brief C080, CPUx Data Protection Range 16, Lower Bound Register */
#define CPU_DPR16_L 0xC080

/** \brief C084, CPUx Data Protection Range 16, Upper Bound Register */
#define CPU_DPR16_U 0xC084

/** \brief C088, CPUx Data Protection Range 17, Lower Bound Register */
#define CPU_DPR17_L 0xC088

/** \brief C08C, CPUx Data Protection Range 17, Upper Bound Register */
#define CPU_DPR17_U 0xC08C

/** \brief D000, CPUx Code Protection Range 0 Lower Bound Register */
#define CPU_CPR0_L 0xD000

/** \brief D004, CPUx Code Protection Range 0 Upper Bound Register */
#define CPU_CPR0_U 0xD004

/** \brief D008, CPUx Code Protection Range 1 Lower Bound Register */
#define CPU_CPR1_L 0xD008

/** \brief D00C, CPUx Code Protection Range 1 Upper Bound Register */
#define CPU_CPR1_U 0xD00C

/** \brief D010, CPUx Code Protection Range 2 Lower Bound Register */
#define CPU_CPR2_L 0xD010

/** \brief D014, CPUx Code Protection Range 2 Upper Bound Register */
#define CPU_CPR2_U 0xD014

/** \brief D018, CPUx Code Protection Range 3 Lower Bound Register */
#define CPU_CPR3_L 0xD018

/** \brief D01C, CPUx Code Protection Range 3 Upper Bound Register */
#define CPU_CPR3_U 0xD01C

/** \brief D020, CPUx Code Protection Range 4 Lower Bound Register */
#define CPU_CPR4_L 0xD020

/** \brief D024, CPUx Code Protection Range 4 Upper Bound Register */
#define CPU_CPR4_U 0xD024

/** \brief D028, CPUx Code Protection Range 5 Lower Bound Register */
#define CPU_CPR5_L 0xD028

/** \brief D02C, CPUx Code Protection Range 5 Upper Bound Register */
#define CPU_CPR5_U 0xD02C

/** \brief D030, CPUx Code Protection Range 6 Lower Bound Register */
#define CPU_CPR6_L 0xD030

/** \brief D034, CPUx Code Protection Range 6 Upper Bound Register */
#define CPU_CPR6_U 0xD034

/** \brief D038, CPUx Code Protection Range 7 Lower Bound Register */
#define CPU_CPR7_L 0xD038

/** \brief D03C, CPUx Code Protection Range 7 Upper Bound Register */
#define CPU_CPR7_U 0xD03C

/** \brief D040, CPUx Code Protection Range 8 Lower Bound Register */
#define CPU_CPR8_L 0xD040

/** \brief D044, CPUx Code Protection Range 8 Upper Bound Register */
#define CPU_CPR8_U 0xD044

/** \brief D048, CPUx Code Protection Range 9 Lower Bound Register */
#define CPU_CPR9_L 0xD048

/** \brief D04C, CPUx Code Protection Range 9 Upper Bound Register */
#define CPU_CPR9_U 0xD04C

/** \brief E000, CPUx Code Protection Execute Enable Register Set 0 */
#define CPU_CPXE_0 0xE000

/** \brief E004, CPUx Code Protection Execute Enable Register Set 1 */
#define CPU_CPXE_1 0xE004

/** \brief E008, CPUx Code Protection Execute Enable Register Set 2 */
#define CPU_CPXE_2 0xE008

/** \brief E00C, CPUx Code Protection Execute Enable Register Set 3 */
#define CPU_CPXE_3 0xE00C

/** \brief E010, CPUx Data Protection Read Enable Register Set 0 */
#define CPU_DPRE_0 0xE010

/** \brief E014, CPUx Data Protection Read Enable Register Set 1 */
#define CPU_DPRE_1 0xE014

/** \brief E018, CPUx Data Protection Read Enable Register Set 2 */
#define CPU_DPRE_2 0xE018

/** \brief E01C, CPUx Data Protection Read Enable Register Set 3 */
#define CPU_DPRE_3 0xE01C

/** \brief E020, CPUx Data Protection Write Enable Register Set 0 */
#define CPU_DPWE_0 0xE020

/** \brief E024, CPUx Data Protection Write Enable Register Set 1 */
#define CPU_DPWE_1 0xE024

/** \brief E028, CPUx Data Protection Write Enable Register Set 2 */
#define CPU_DPWE_2 0xE028

/** \brief E02C, CPUx Data Protection Write Enable Register Set 3 */
#define CPU_DPWE_3 0xE02C

/** \brief E040, CPUx Code Protection Execute Enable Register Set 4 */
#define CPU_CPXE_4 0xE040

/** \brief E044, CPUx Code Protection Execute Enable Register Set 5 */
#define CPU_CPXE_5 0xE044

/** \brief E050, CPUx Data Protection Read Enable Register Set 4 */
#define CPU_DPRE_4 0xE050

/** \brief E054, CPUx Data Protection Read Enable Register Set 5 */
#define CPU_DPRE_5 0xE054

/** \brief E060, CPUx Data Protection Write Enable Register Set 4 */
#define CPU_DPWE_4 0xE060

/** \brief E064, CPUx Data Protection Write Enable Register Set 5 */
#define CPU_DPWE_5 0xE064

/** \brief E400, CPUx Temporal Protection System Control Register */
#define CPU_TPS_CON 0xE400

/** \brief E404, CPUx Temporal Protection System Timer Register 0 */
#define CPU_TPS_TIMER0 0xE404

/** \brief E408, CPUx Temporal Protection System Timer Register 1 */
#define CPU_TPS_TIMER1 0xE408

/** \brief E40C, CPUx Temporal Protection System Timer Register 2 */
#define CPU_TPS_TIMER2 0xE40C

/** \brief E440, CPUx Exception Entry Timer Load Value */
#define CPU_TPS_EXTIM_ENTRY_LVAL 0xE440

/** \brief E444, CPUx Exception Entry Timer Current Value */
#define CPU_TPS_EXTIM_ENTRY_CVAL 0xE444

/** \brief E448, CPUx Exception Exit  Timer Load Value */
#define CPU_TPS_EXTIM_EXIT_LVAL 0xE448

/** \brief E44C, CPUx Exception Exit Timer Current Value */
#define CPU_TPS_EXTIM_EXIT_CVAL 0xE44C

/** \brief E450, CPUx Exception Timer Class Enable Register */
#define CPU_TPS_EXTIM_CLASS_EN 0xE450

/** \brief E454, CPUx Exception Timer Status Register */
#define CPU_TPS_EXTIM_STAT 0xE454

/** \brief E458, CPUx Exception Timer FCX Register */
#define CPU_TPS_EXTIM_FCX 0xE458

/** \brief F000, CPUx Trigger Event 0 */
#define CPU_TR0_EVT 0xF000
/** Alias (User Manual Name) for CPU_TR0_EVT.
* To use register names with standard convension, please use CPU_TR0_EVT.
*/
#define CPU_TR0EVT (CPU_TR0_EVT)

/** \brief F004, CPUx Trigger Address 0 */
#define CPU_TR0_ADR 0xF004
/** Alias (User Manual Name) for CPU_TR0_ADR.
* To use register names with standard convension, please use CPU_TR0_ADR.
*/
#define CPU_TR0ADR (CPU_TR0_ADR)

/** \brief F008, CPUx Trigger Event 1 */
#define CPU_TR1_EVT 0xF008
/** Alias (User Manual Name) for CPU_TR1_EVT.
* To use register names with standard convension, please use CPU_TR1_EVT.
*/
#define CPU_TR1EVT (CPU_TR1_EVT)

/** \brief F00C, CPUx Trigger Address 1 */
#define CPU_TR1_ADR 0xF00C
/** Alias (User Manual Name) for CPU_TR1_ADR.
* To use register names with standard convension, please use CPU_TR1_ADR.
*/
#define CPU_TR1ADR (CPU_TR1_ADR)

/** \brief F010, CPUx Trigger Event 2 */
#define CPU_TR2_EVT 0xF010
/** Alias (User Manual Name) for CPU_TR2_EVT.
* To use register names with standard convension, please use CPU_TR2_EVT.
*/
#define CPU_TR2EVT (CPU_TR2_EVT)

/** \brief F014, CPUx Trigger Address 2 */
#define CPU_TR2_ADR 0xF014
/** Alias (User Manual Name) for CPU_TR2_ADR.
* To use register names with standard convension, please use CPU_TR2_ADR.
*/
#define CPU_TR2ADR (CPU_TR2_ADR)

/** \brief F018, CPUx Trigger Event 3 */
#define CPU_TR3_EVT 0xF018
/** Alias (User Manual Name) for CPU_TR3_EVT.
* To use register names with standard convension, please use CPU_TR3_EVT.
*/
#define CPU_TR3EVT (CPU_TR3_EVT)

/** \brief F01C, CPUx Trigger Address 3 */
#define CPU_TR3_ADR 0xF01C
/** Alias (User Manual Name) for CPU_TR3_ADR.
* To use register names with standard convension, please use CPU_TR3_ADR.
*/
#define CPU_TR3ADR (CPU_TR3_ADR)

/** \brief F020, CPUx Trigger Event 4 */
#define CPU_TR4_EVT 0xF020
/** Alias (User Manual Name) for CPU_TR4_EVT.
* To use register names with standard convension, please use CPU_TR4_EVT.
*/
#define CPU_TR4EVT (CPU_TR4_EVT)

/** \brief F024, CPUx Trigger Address 4 */
#define CPU_TR4_ADR 0xF024
/** Alias (User Manual Name) for CPU_TR4_ADR.
* To use register names with standard convension, please use CPU_TR4_ADR.
*/
#define CPU_TR4ADR (CPU_TR4_ADR)

/** \brief F028, CPUx Trigger Event 5 */
#define CPU_TR5_EVT 0xF028
/** Alias (User Manual Name) for CPU_TR5_EVT.
* To use register names with standard convension, please use CPU_TR5_EVT.
*/
#define CPU_TR5EVT (CPU_TR5_EVT)

/** \brief F02C, CPUx Trigger Address 5 */
#define CPU_TR5_ADR 0xF02C
/** Alias (User Manual Name) for CPU_TR5_ADR.
* To use register names with standard convension, please use CPU_TR5_ADR.
*/
#define CPU_TR5ADR (CPU_TR5_ADR)

/** \brief F030, CPUx Trigger Event 6 */
#define CPU_TR6_EVT 0xF030
/** Alias (User Manual Name) for CPU_TR6_EVT.
* To use register names with standard convension, please use CPU_TR6_EVT.
*/
#define CPU_TR6EVT (CPU_TR6_EVT)

/** \brief F034, CPUx Trigger Address 6 */
#define CPU_TR6_ADR 0xF034
/** Alias (User Manual Name) for CPU_TR6_ADR.
* To use register names with standard convension, please use CPU_TR6_ADR.
*/
#define CPU_TR6ADR (CPU_TR6_ADR)

/** \brief F038, CPUx Trigger Event 7 */
#define CPU_TR7_EVT 0xF038
/** Alias (User Manual Name) for CPU_TR7_EVT.
* To use register names with standard convension, please use CPU_TR7_EVT.
*/
#define CPU_TR7EVT (CPU_TR7_EVT)

/** \brief F03C, CPUx Trigger Address 7 */
#define CPU_TR7_ADR 0xF03C
/** Alias (User Manual Name) for CPU_TR7_ADR.
* To use register names with standard convension, please use CPU_TR7_ADR.
*/
#define CPU_TR7ADR (CPU_TR7_ADR)

/** \brief FC00, CPUx Counter Control */
#define CPU_CCTRL 0xFC00

/** \brief FC04, CPUx CPU Clock Cycle Count */
#define CPU_CCNT 0xFC04

/** \brief FC08, CPUx Instruction Count */
#define CPU_ICNT 0xFC08

/** \brief FC0C, CPUx Multi-Count Register 1 */
#define CPU_M1CNT 0xFC0C

/** \brief FC10, CPUx Multi-Count Register 2 */
#define CPU_M2CNT 0xFC10

/** \brief FC14, CPUx Multi-Count Register 3 */
#define CPU_M3CNT 0xFC14

/** \brief FD00, CPUx Debug Status Register */
#define CPU_DBGSR 0xFD00

/** \brief FD08, CPUx External Event Register */
#define CPU_EXEVT 0xFD08

/** \brief FD0C, CPUx Core Register Access Event */
#define CPU_CREVT 0xFD0C

/** \brief FD10, CPUx Software Debug Event */
#define CPU_SWEVT 0xFD10

/** \brief FD30, CPUx TriggerAddressx */
#define CPU_TRIG_ACC 0xFD30

/** \brief FD40, CPUx Debug Monitor Start Address */
#define CPU_DMS 0xFD40

/** \brief FD44, CPUx Debug Context Save Area Pointer */
#define CPU_DCX 0xFD44

/** \brief FD48, CPUx Debug Trap Control Register */
#define CPU_DBGTCR 0xFD48

/** \brief FE00, CPUx Previous Context Information Register */
#define CPU_PCXI 0xFE00

/** \brief FE04, CPUx Program Status Word */
#define CPU_PSW 0xFE04

/** \brief FE08, CPUx Program Counter */
#define CPU_PC 0xFE08

/** \brief FE14, CPUx System Configuration Register */
#define CPU_SYSCON 0xFE14

/** \brief FE18, CPUx Identification Register TC1.6.2P */
#define CPU_CPU_ID 0xFE18

/** \brief FE1C, CPUx Core Identification Register */
#define CPU_CORE_ID 0xFE1C

/** \brief FE20, CPUx Base Interrupt Vector Table Pointer */
#define CPU_BIV 0xFE20

/** \brief FE24, CPUx Base Trap Vector Table Pointer */
#define CPU_BTV 0xFE24

/** \brief FE28, CPUx Interrupt Stack Pointer */
#define CPU_ISP 0xFE28

/** \brief FE2C, CPUx Interrupt Control Register */
#define CPU_ICR 0xFE2C

/** \brief FE38, CPUx Free CSA List Head Pointer */
#define CPU_FCX 0xFE38

/** \brief FE3C, CPUx Free CSA List Limit Pointer */
#define CPU_LCX 0xFE3C

/** \brief FE50, CPUx Customer ID register */
#define CPU_CUS_ID 0xFE50

/** \brief FF00, CPUx Data General Purpose Register 0 */
#define CPU_D0 0xFF00

/** \brief FF04, CPUx Data General Purpose Register 1 */
#define CPU_D1 0xFF04

/** \brief FF08, CPUx Data General Purpose Register 2 */
#define CPU_D2 0xFF08

/** \brief FF0C, CPUx Data General Purpose Register 3 */
#define CPU_D3 0xFF0C

/** \brief FF10, CPUx Data General Purpose Register 4 */
#define CPU_D4 0xFF10

/** \brief FF14, CPUx Data General Purpose Register 5 */
#define CPU_D5 0xFF14

/** \brief FF18, CPUx Data General Purpose Register 6 */
#define CPU_D6 0xFF18

/** \brief FF1C, CPUx Data General Purpose Register 7 */
#define CPU_D7 0xFF1C

/** \brief FF20, CPUx Data General Purpose Register 8 */
#define CPU_D8 0xFF20

/** \brief FF24, CPUx Data General Purpose Register 9 */
#define CPU_D9 0xFF24

/** \brief FF28, CPUx Data General Purpose Register 10 */
#define CPU_D10 0xFF28

/** \brief FF2C, CPUx Data General Purpose Register 11 */
#define CPU_D11 0xFF2C

/** \brief FF30, CPUx Data General Purpose Register 12 */
#define CPU_D12 0xFF30

/** \brief FF34, CPUx Data General Purpose Register 13 */
#define CPU_D13 0xFF34

/** \brief FF38, CPUx Data General Purpose Register 14 */
#define CPU_D14 0xFF38

/** \brief FF3C, CPUx Data General Purpose Register 15 */
#define CPU_D15 0xFF3C

/** \brief FF80, CPUx Address General Purpose Register 0 */
#define CPU_A0 0xFF80

/** \brief FF84, CPUx Address General Purpose Register 1 */
#define CPU_A1 0xFF84

/** \brief FF88, CPUx Address General Purpose Register 2 */
#define CPU_A2 0xFF88

/** \brief FF8C, CPUx Address General Purpose Register 3 */
#define CPU_A3 0xFF8C

/** \brief FF90, CPUx Address General Purpose Register 4 */
#define CPU_A4 0xFF90

/** \brief FF94, CPUx Address General Purpose Register 5 */
#define CPU_A5 0xFF94

/** \brief FF98, CPUx Address General Purpose Register 6 */
#define CPU_A6 0xFF98

/** \brief FF9C, CPUx Address General Purpose Register 7 */
#define CPU_A7 0xFF9C

/** \brief FFA0, CPUx Address General Purpose Register 8 */
#define CPU_A8 0xFFA0

/** \brief FFA4, CPUx Address General Purpose Register 9 */
#define CPU_A9 0xFFA4

/** \brief FFA8, CPUx Address General Purpose Register 10 */
#define CPU_A10 0xFFA8

/** \brief FFAC, CPUx Address General Purpose Register 11 */
#define CPU_A11 0xFFAC

/** \brief FFB0, CPUx Address General Purpose Register 12 */
#define CPU_A12 0xFFB0

/** \brief FFB4, CPUx Address General Purpose Register 13 */
#define CPU_A13 0xFFB4

/** \brief FFB8, CPUx Address General Purpose Register 14 */
#define CPU_A14 0xFFB8

/** \brief FFBC, CPUx Address General Purpose Register 15 */
#define CPU_A15 0xFFBC


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_Registers_Cfg_Cpu0
 * \{  */
/** \brief 1100, CPUx Flash Configuration Register 0 */
#define CPU0_FLASHCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF8801100u)

/** \brief 1104, CPUx Flash Configuration Register 1 */
#define CPU0_FLASHCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF8801104u)

/** \brief 1108, CPUx Flash Configuration Register 2 */
#define CPU0_FLASHCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF8801108u)

/** \brief 110C, CPUx Flash Configuration Register 3 */
#define CPU0_FLASHCON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF880110Cu)

/** \brief 1110, CPUx Flash Configuration Register 4 */
#define CPU0_FLASHCON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON4*)0xF8801110u)

/** \brief D000, CPUx  Reset Register 0 */
#define CPU0_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRST0*)0xF880D000u)

/** \brief D004, CPUx  Reset Register 1 */
#define CPU0_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRST1*)0xF880D004u)

/** \brief D008, CPUx Reset Clear Register */
#define CPU0_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF880D008u)

/** \brief E000, CPUx  Safety Protection SPR Region Lower Address Register 0 */
#define CPU0_RGN0_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF880E000u)
/** Alias (User Manual Name) for CPU0_RGN0_LA.
* To use register names with standard convension, please use CPU0_RGN0_LA.
*/
#define CPU0_SPR_SPROT_RGNLA0 (CPU0_RGN0_LA)

/** \brief E004, CPUx  Safety protection SPR Region Upper Address Register 0 */
#define CPU0_RGN0_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF880E004u)
/** Alias (User Manual Name) for CPU0_RGN0_UA.
* To use register names with standard convension, please use CPU0_RGN0_UA.
*/
#define CPU0_SPR_SPROT_RGNUA0 (CPU0_RGN0_UA)

/** \brief E008, CPUx  Safety Protection Region SPR Write Access Enable Register A0 */
#define CPU0_RGN0_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF880E008u)
/** Alias (User Manual Name) for CPU0_RGN0_ACCENA.
* To use register names with standard convension, please use CPU0_RGN0_ACCENA.
*/
#define CPU0_SPR_SPROT_RGNACCENA0_W (CPU0_RGN0_ACCENA)

/** \brief E00C, CPUx  Safety Protection Region SPR Write Access Enable Register B0 */
#define CPU0_RGN0_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF880E00Cu)
/** Alias (User Manual Name) for CPU0_RGN0_ACCENB.
* To use register names with standard convension, please use CPU0_RGN0_ACCENB.
*/
#define CPU0_SPR_SPROT_RGNACCENB0_W (CPU0_RGN0_ACCENB)

/** \brief E010, CPUx  Safety Protection SPR Region Lower Address Register 1 */
#define CPU0_RGN1_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF880E010u)
/** Alias (User Manual Name) for CPU0_RGN1_LA.
* To use register names with standard convension, please use CPU0_RGN1_LA.
*/
#define CPU0_SPR_SPROT_RGNLA1 (CPU0_RGN1_LA)

/** \brief E014, CPUx  Safety protection SPR Region Upper Address Register 1 */
#define CPU0_RGN1_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF880E014u)
/** Alias (User Manual Name) for CPU0_RGN1_UA.
* To use register names with standard convension, please use CPU0_RGN1_UA.
*/
#define CPU0_SPR_SPROT_RGNUA1 (CPU0_RGN1_UA)

/** \brief E018, CPUx  Safety Protection Region SPR Write Access Enable Register A1 */
#define CPU0_RGN1_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF880E018u)
/** Alias (User Manual Name) for CPU0_RGN1_ACCENA.
* To use register names with standard convension, please use CPU0_RGN1_ACCENA.
*/
#define CPU0_SPR_SPROT_RGNACCENA1_W (CPU0_RGN1_ACCENA)

/** \brief E01C, CPUx  Safety Protection Region SPR Write Access Enable Register B1 */
#define CPU0_RGN1_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF880E01Cu)
/** Alias (User Manual Name) for CPU0_RGN1_ACCENB.
* To use register names with standard convension, please use CPU0_RGN1_ACCENB.
*/
#define CPU0_SPR_SPROT_RGNACCENB1_W (CPU0_RGN1_ACCENB)

/** \brief E020, CPUx  Safety Protection SPR Region Lower Address Register 2 */
#define CPU0_RGN2_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF880E020u)
/** Alias (User Manual Name) for CPU0_RGN2_LA.
* To use register names with standard convension, please use CPU0_RGN2_LA.
*/
#define CPU0_SPR_SPROT_RGNLA2 (CPU0_RGN2_LA)

/** \brief E024, CPUx  Safety protection SPR Region Upper Address Register 2 */
#define CPU0_RGN2_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF880E024u)
/** Alias (User Manual Name) for CPU0_RGN2_UA.
* To use register names with standard convension, please use CPU0_RGN2_UA.
*/
#define CPU0_SPR_SPROT_RGNUA2 (CPU0_RGN2_UA)

/** \brief E028, CPUx  Safety Protection Region SPR Write Access Enable Register A2 */
#define CPU0_RGN2_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF880E028u)
/** Alias (User Manual Name) for CPU0_RGN2_ACCENA.
* To use register names with standard convension, please use CPU0_RGN2_ACCENA.
*/
#define CPU0_SPR_SPROT_RGNACCENA2_W (CPU0_RGN2_ACCENA)

/** \brief E02C, CPUx  Safety Protection Region SPR Write Access Enable Register B2 */
#define CPU0_RGN2_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF880E02Cu)
/** Alias (User Manual Name) for CPU0_RGN2_ACCENB.
* To use register names with standard convension, please use CPU0_RGN2_ACCENB.
*/
#define CPU0_SPR_SPROT_RGNACCENB2_W (CPU0_RGN2_ACCENB)

/** \brief E030, CPUx  Safety Protection SPR Region Lower Address Register 3 */
#define CPU0_RGN3_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF880E030u)
/** Alias (User Manual Name) for CPU0_RGN3_LA.
* To use register names with standard convension, please use CPU0_RGN3_LA.
*/
#define CPU0_SPR_SPROT_RGNLA3 (CPU0_RGN3_LA)

/** \brief E034, CPUx  Safety protection SPR Region Upper Address Register 3 */
#define CPU0_RGN3_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF880E034u)
/** Alias (User Manual Name) for CPU0_RGN3_UA.
* To use register names with standard convension, please use CPU0_RGN3_UA.
*/
#define CPU0_SPR_SPROT_RGNUA3 (CPU0_RGN3_UA)

/** \brief E038, CPUx  Safety Protection Region SPR Write Access Enable Register A3 */
#define CPU0_RGN3_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF880E038u)
/** Alias (User Manual Name) for CPU0_RGN3_ACCENA.
* To use register names with standard convension, please use CPU0_RGN3_ACCENA.
*/
#define CPU0_SPR_SPROT_RGNACCENA3_W (CPU0_RGN3_ACCENA)

/** \brief E03C, CPUx  Safety Protection Region SPR Write Access Enable Register B3 */
#define CPU0_RGN3_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF880E03Cu)
/** Alias (User Manual Name) for CPU0_RGN3_ACCENB.
* To use register names with standard convension, please use CPU0_RGN3_ACCENB.
*/
#define CPU0_SPR_SPROT_RGNACCENB3_W (CPU0_RGN3_ACCENB)

/** \brief E040, CPUx  Safety Protection SPR Region Lower Address Register 4 */
#define CPU0_RGN4_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF880E040u)
/** Alias (User Manual Name) for CPU0_RGN4_LA.
* To use register names with standard convension, please use CPU0_RGN4_LA.
*/
#define CPU0_SPR_SPROT_RGNLA4 (CPU0_RGN4_LA)

/** \brief E044, CPUx  Safety protection SPR Region Upper Address Register 4 */
#define CPU0_RGN4_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF880E044u)
/** Alias (User Manual Name) for CPU0_RGN4_UA.
* To use register names with standard convension, please use CPU0_RGN4_UA.
*/
#define CPU0_SPR_SPROT_RGNUA4 (CPU0_RGN4_UA)

/** \brief E048, CPUx  Safety Protection Region SPR Write Access Enable Register A4 */
#define CPU0_RGN4_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF880E048u)
/** Alias (User Manual Name) for CPU0_RGN4_ACCENA.
* To use register names with standard convension, please use CPU0_RGN4_ACCENA.
*/
#define CPU0_SPR_SPROT_RGNACCENA4_W (CPU0_RGN4_ACCENA)

/** \brief E04C, CPUx  Safety Protection Region SPR Write Access Enable Register B4 */
#define CPU0_RGN4_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF880E04Cu)
/** Alias (User Manual Name) for CPU0_RGN4_ACCENB.
* To use register names with standard convension, please use CPU0_RGN4_ACCENB.
*/
#define CPU0_SPR_SPROT_RGNACCENB4_W (CPU0_RGN4_ACCENB)

/** \brief E050, CPUx  Safety Protection SPR Region Lower Address Register 5 */
#define CPU0_RGN5_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF880E050u)
/** Alias (User Manual Name) for CPU0_RGN5_LA.
* To use register names with standard convension, please use CPU0_RGN5_LA.
*/
#define CPU0_SPR_SPROT_RGNLA5 (CPU0_RGN5_LA)

/** \brief E054, CPUx  Safety protection SPR Region Upper Address Register 5 */
#define CPU0_RGN5_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF880E054u)
/** Alias (User Manual Name) for CPU0_RGN5_UA.
* To use register names with standard convension, please use CPU0_RGN5_UA.
*/
#define CPU0_SPR_SPROT_RGNUA5 (CPU0_RGN5_UA)

/** \brief E058, CPUx  Safety Protection Region SPR Write Access Enable Register A5 */
#define CPU0_RGN5_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF880E058u)
/** Alias (User Manual Name) for CPU0_RGN5_ACCENA.
* To use register names with standard convension, please use CPU0_RGN5_ACCENA.
*/
#define CPU0_SPR_SPROT_RGNACCENA5_W (CPU0_RGN5_ACCENA)

/** \brief E05C, CPUx  Safety Protection Region SPR Write Access Enable Register B5 */
#define CPU0_RGN5_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF880E05Cu)
/** Alias (User Manual Name) for CPU0_RGN5_ACCENB.
* To use register names with standard convension, please use CPU0_RGN5_ACCENB.
*/
#define CPU0_SPR_SPROT_RGNACCENB5_W (CPU0_RGN5_ACCENB)

/** \brief E060, CPUx  Safety Protection SPR Region Lower Address Register 6 */
#define CPU0_RGN6_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF880E060u)
/** Alias (User Manual Name) for CPU0_RGN6_LA.
* To use register names with standard convension, please use CPU0_RGN6_LA.
*/
#define CPU0_SPR_SPROT_RGNLA6 (CPU0_RGN6_LA)

/** \brief E064, CPUx  Safety protection SPR Region Upper Address Register 6 */
#define CPU0_RGN6_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF880E064u)
/** Alias (User Manual Name) for CPU0_RGN6_UA.
* To use register names with standard convension, please use CPU0_RGN6_UA.
*/
#define CPU0_SPR_SPROT_RGNUA6 (CPU0_RGN6_UA)

/** \brief E068, CPUx  Safety Protection Region SPR Write Access Enable Register A6 */
#define CPU0_RGN6_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF880E068u)
/** Alias (User Manual Name) for CPU0_RGN6_ACCENA.
* To use register names with standard convension, please use CPU0_RGN6_ACCENA.
*/
#define CPU0_SPR_SPROT_RGNACCENA6_W (CPU0_RGN6_ACCENA)

/** \brief E06C, CPUx  Safety Protection Region SPR Write Access Enable Register B6 */
#define CPU0_RGN6_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF880E06Cu)
/** Alias (User Manual Name) for CPU0_RGN6_ACCENB.
* To use register names with standard convension, please use CPU0_RGN6_ACCENB.
*/
#define CPU0_SPR_SPROT_RGNACCENB6_W (CPU0_RGN6_ACCENB)

/** \brief E070, CPUx  Safety Protection SPR Region Lower Address Register 7 */
#define CPU0_RGN7_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF880E070u)
/** Alias (User Manual Name) for CPU0_RGN7_LA.
* To use register names with standard convension, please use CPU0_RGN7_LA.
*/
#define CPU0_SPR_SPROT_RGNLA7 (CPU0_RGN7_LA)

/** \brief E074, CPUx  Safety protection SPR Region Upper Address Register 7 */
#define CPU0_RGN7_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF880E074u)
/** Alias (User Manual Name) for CPU0_RGN7_UA.
* To use register names with standard convension, please use CPU0_RGN7_UA.
*/
#define CPU0_SPR_SPROT_RGNUA7 (CPU0_RGN7_UA)

/** \brief E078, CPUx  Safety Protection Region SPR Write Access Enable Register A7 */
#define CPU0_RGN7_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF880E078u)
/** Alias (User Manual Name) for CPU0_RGN7_ACCENA.
* To use register names with standard convension, please use CPU0_RGN7_ACCENA.
*/
#define CPU0_SPR_SPROT_RGNACCENA7_W (CPU0_RGN7_ACCENA)

/** \brief E07C, CPUx  Safety Protection Region SPR Write Access Enable Register B7 */
#define CPU0_RGN7_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF880E07Cu)
/** Alias (User Manual Name) for CPU0_RGN7_ACCENB.
* To use register names with standard convension, please use CPU0_RGN7_ACCENB.
*/
#define CPU0_SPR_SPROT_RGNACCENB7_W (CPU0_RGN7_ACCENB)

/** \brief E088, CPUx Safety Protection Region SPR Read Access Enable Register A0 */
#define CPU0_SPR_SPROT_RGNACCENA_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF880E088u)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENA_R0.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENA_R0.
*/
#define CPU0_SPR_SPROT_RGNACCENA0_R (CPU0_SPR_SPROT_RGNACCENA_R0)

/** \brief E08C, CPUx Safety Protection Region SPR Read Access Enable Register B0 */
#define CPU0_SPR_SPROT_RGNACCENB_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF880E08Cu)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENB_R0.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENB_R0.
*/
#define CPU0_SPR_SPROT_RGNACCENB0_R (CPU0_SPR_SPROT_RGNACCENB_R0)

/** \brief E098, CPUx Safety Protection Region SPR Read Access Enable Register A1 */
#define CPU0_SPR_SPROT_RGNACCENA_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF880E098u)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENA_R1.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENA_R1.
*/
#define CPU0_SPR_SPROT_RGNACCENA1_R (CPU0_SPR_SPROT_RGNACCENA_R1)

/** \brief E09C, CPUx Safety Protection Region SPR Read Access Enable Register B1 */
#define CPU0_SPR_SPROT_RGNACCENB_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF880E09Cu)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENB_R1.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENB_R1.
*/
#define CPU0_SPR_SPROT_RGNACCENB1_R (CPU0_SPR_SPROT_RGNACCENB_R1)

/** \brief E0A8, CPUx Safety Protection Region SPR Read Access Enable Register A2 */
#define CPU0_SPR_SPROT_RGNACCENA_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF880E0A8u)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENA_R2.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENA_R2.
*/
#define CPU0_SPR_SPROT_RGNACCENA2_R (CPU0_SPR_SPROT_RGNACCENA_R2)

/** \brief E0AC, CPUx Safety Protection Region SPR Read Access Enable Register B2 */
#define CPU0_SPR_SPROT_RGNACCENB_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF880E0ACu)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENB_R2.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENB_R2.
*/
#define CPU0_SPR_SPROT_RGNACCENB2_R (CPU0_SPR_SPROT_RGNACCENB_R2)

/** \brief E0B8, CPUx Safety Protection Region SPR Read Access Enable Register A3 */
#define CPU0_SPR_SPROT_RGNACCENA_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF880E0B8u)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENA_R3.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENA_R3.
*/
#define CPU0_SPR_SPROT_RGNACCENA3_R (CPU0_SPR_SPROT_RGNACCENA_R3)

/** \brief E0BC, CPUx Safety Protection Region SPR Read Access Enable Register B3 */
#define CPU0_SPR_SPROT_RGNACCENB_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF880E0BCu)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENB_R3.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENB_R3.
*/
#define CPU0_SPR_SPROT_RGNACCENB3_R (CPU0_SPR_SPROT_RGNACCENB_R3)

/** \brief E0C8, CPUx Safety Protection Region SPR Read Access Enable Register A4 */
#define CPU0_SPR_SPROT_RGNACCENA_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF880E0C8u)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENA_R4.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENA_R4.
*/
#define CPU0_SPR_SPROT_RGNACCENA4_R (CPU0_SPR_SPROT_RGNACCENA_R4)

/** \brief E0CC, CPUx Safety Protection Region SPR Read Access Enable Register B4 */
#define CPU0_SPR_SPROT_RGNACCENB_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF880E0CCu)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENB_R4.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENB_R4.
*/
#define CPU0_SPR_SPROT_RGNACCENB4_R (CPU0_SPR_SPROT_RGNACCENB_R4)

/** \brief E0D8, CPUx Safety Protection Region SPR Read Access Enable Register A5 */
#define CPU0_SPR_SPROT_RGNACCENA_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF880E0D8u)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENA_R5.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENA_R5.
*/
#define CPU0_SPR_SPROT_RGNACCENA5_R (CPU0_SPR_SPROT_RGNACCENA_R5)

/** \brief E0DC, CPUx Safety Protection Region SPR Read Access Enable Register B5 */
#define CPU0_SPR_SPROT_RGNACCENB_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF880E0DCu)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENB_R5.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENB_R5.
*/
#define CPU0_SPR_SPROT_RGNACCENB5_R (CPU0_SPR_SPROT_RGNACCENB_R5)

/** \brief E0E8, CPUx Safety Protection Region SPR Read Access Enable Register A6 */
#define CPU0_SPR_SPROT_RGNACCENA_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF880E0E8u)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENA_R6.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENA_R6.
*/
#define CPU0_SPR_SPROT_RGNACCENA6_R (CPU0_SPR_SPROT_RGNACCENA_R6)

/** \brief E0EC, CPUx Safety Protection Region SPR Read Access Enable Register B6 */
#define CPU0_SPR_SPROT_RGNACCENB_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF880E0ECu)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENB_R6.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENB_R6.
*/
#define CPU0_SPR_SPROT_RGNACCENB6_R (CPU0_SPR_SPROT_RGNACCENB_R6)

/** \brief E0F8, CPUx Safety Protection Region SPR Read Access Enable Register A7 */
#define CPU0_SPR_SPROT_RGNACCENA_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF880E0F8u)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENA_R7.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENA_R7.
*/
#define CPU0_SPR_SPROT_RGNACCENA7_R (CPU0_SPR_SPROT_RGNACCENA_R7)

/** \brief E0FC, CPUx Safety Protection Region SPR Read Access Enable Register B7 */
#define CPU0_SPR_SPROT_RGNACCENB_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF880E0FCu)
/** Alias (User Manual Name) for CPU0_SPR_SPROT_RGNACCENB_R7.
* To use register names with standard convension, please use CPU0_SPR_SPROT_RGNACCENB_R7.
*/
#define CPU0_SPR_SPROT_RGNACCENB7_R (CPU0_SPR_SPROT_RGNACCENB_R7)

/** \brief E100, CPUx  Safety Protection Register Access Enable Register A */
#define CPU0_SFR_SPROT_ACCENA_W /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF880E100u)

/** \brief E104, CPUx  Safety Protection Region Access Enable Register B */
#define CPU0_SFR_SPROT_ACCENB_W /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF880E104u)

/** \brief E110, CPUx  Safety Protection Region LPB Read Access Enable Register A */
#define CPU0_LPB_SPROT_ACCENA_R /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF880E110u)

/** \brief E114, CPUx Safety Protection Region LPB Read Access Enable Register B */
#define CPU0_LPB_SPROT_ACCENB_R /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF880E114u)

/** \brief E200, CPUx  Safety Protection DLMU Region Lower Address Register 0 */
#define CPU0_DLMU_SPROT_RGNLA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF880E200u)

/** \brief E204, CPUx  Safety protection DLMU Region Upper Address Register 0 */
#define CPU0_DLMU_SPROT_RGNUA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF880E204u)

/** \brief E208, CPUx  Safety Protection Region DLMU Write Access Enable Register A0 */
#define CPU0_DLMU_SPROT_RGNACCENA_W0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF880E208u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_W0.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_W0.
*/
#define CPU0_DLMU_SPROT_RGNACCENA0_W (CPU0_DLMU_SPROT_RGNACCENA_W0)

/** \brief E20C, CPUx  Safety Protection Region DLMU Write Access Enable Register B0 */
#define CPU0_DLMU_SPROT_RGNACCENB_W0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF880E20Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_W0.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_W0.
*/
#define CPU0_DLMU_SPROT_RGNACCENB0_W (CPU0_DLMU_SPROT_RGNACCENB_W0)

/** \brief E210, CPUx  Safety Protection DLMU Region Lower Address Register 1 */
#define CPU0_DLMU_SPROT_RGNLA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF880E210u)

/** \brief E214, CPUx  Safety protection DLMU Region Upper Address Register 1 */
#define CPU0_DLMU_SPROT_RGNUA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF880E214u)

/** \brief E218, CPUx  Safety Protection Region DLMU Write Access Enable Register A1 */
#define CPU0_DLMU_SPROT_RGNACCENA_W1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF880E218u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_W1.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_W1.
*/
#define CPU0_DLMU_SPROT_RGNACCENA1_W (CPU0_DLMU_SPROT_RGNACCENA_W1)

/** \brief E21C, CPUx  Safety Protection Region DLMU Write Access Enable Register B1 */
#define CPU0_DLMU_SPROT_RGNACCENB_W1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF880E21Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_W1.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_W1.
*/
#define CPU0_DLMU_SPROT_RGNACCENB1_W (CPU0_DLMU_SPROT_RGNACCENB_W1)

/** \brief E220, CPUx  Safety Protection DLMU Region Lower Address Register 2 */
#define CPU0_DLMU_SPROT_RGNLA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF880E220u)

/** \brief E224, CPUx  Safety protection DLMU Region Upper Address Register 2 */
#define CPU0_DLMU_SPROT_RGNUA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF880E224u)

/** \brief E228, CPUx  Safety Protection Region DLMU Write Access Enable Register A2 */
#define CPU0_DLMU_SPROT_RGNACCENA_W2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF880E228u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_W2.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_W2.
*/
#define CPU0_DLMU_SPROT_RGNACCENA2_W (CPU0_DLMU_SPROT_RGNACCENA_W2)

/** \brief E22C, CPUx  Safety Protection Region DLMU Write Access Enable Register B2 */
#define CPU0_DLMU_SPROT_RGNACCENB_W2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF880E22Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_W2.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_W2.
*/
#define CPU0_DLMU_SPROT_RGNACCENB2_W (CPU0_DLMU_SPROT_RGNACCENB_W2)

/** \brief E230, CPUx  Safety Protection DLMU Region Lower Address Register 3 */
#define CPU0_DLMU_SPROT_RGNLA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF880E230u)

/** \brief E234, CPUx  Safety protection DLMU Region Upper Address Register 3 */
#define CPU0_DLMU_SPROT_RGNUA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF880E234u)

/** \brief E238, CPUx  Safety Protection Region DLMU Write Access Enable Register A3 */
#define CPU0_DLMU_SPROT_RGNACCENA_W3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF880E238u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_W3.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_W3.
*/
#define CPU0_DLMU_SPROT_RGNACCENA3_W (CPU0_DLMU_SPROT_RGNACCENA_W3)

/** \brief E23C, CPUx  Safety Protection Region DLMU Write Access Enable Register B3 */
#define CPU0_DLMU_SPROT_RGNACCENB_W3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF880E23Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_W3.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_W3.
*/
#define CPU0_DLMU_SPROT_RGNACCENB3_W (CPU0_DLMU_SPROT_RGNACCENB_W3)

/** \brief E240, CPUx  Safety Protection DLMU Region Lower Address Register 4 */
#define CPU0_DLMU_SPROT_RGNLA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF880E240u)

/** \brief E244, CPUx  Safety protection DLMU Region Upper Address Register 4 */
#define CPU0_DLMU_SPROT_RGNUA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF880E244u)

/** \brief E248, CPUx  Safety Protection Region DLMU Write Access Enable Register A4 */
#define CPU0_DLMU_SPROT_RGNACCENA_W4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF880E248u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_W4.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_W4.
*/
#define CPU0_DLMU_SPROT_RGNACCENA4_W (CPU0_DLMU_SPROT_RGNACCENA_W4)

/** \brief E24C, CPUx  Safety Protection Region DLMU Write Access Enable Register B4 */
#define CPU0_DLMU_SPROT_RGNACCENB_W4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF880E24Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_W4.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_W4.
*/
#define CPU0_DLMU_SPROT_RGNACCENB4_W (CPU0_DLMU_SPROT_RGNACCENB_W4)

/** \brief E250, CPUx  Safety Protection DLMU Region Lower Address Register 5 */
#define CPU0_DLMU_SPROT_RGNLA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF880E250u)

/** \brief E254, CPUx  Safety protection DLMU Region Upper Address Register 5 */
#define CPU0_DLMU_SPROT_RGNUA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF880E254u)

/** \brief E258, CPUx  Safety Protection Region DLMU Write Access Enable Register A5 */
#define CPU0_DLMU_SPROT_RGNACCENA_W5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF880E258u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_W5.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_W5.
*/
#define CPU0_DLMU_SPROT_RGNACCENA5_W (CPU0_DLMU_SPROT_RGNACCENA_W5)

/** \brief E25C, CPUx  Safety Protection Region DLMU Write Access Enable Register B5 */
#define CPU0_DLMU_SPROT_RGNACCENB_W5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF880E25Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_W5.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_W5.
*/
#define CPU0_DLMU_SPROT_RGNACCENB5_W (CPU0_DLMU_SPROT_RGNACCENB_W5)

/** \brief E260, CPUx  Safety Protection DLMU Region Lower Address Register 6 */
#define CPU0_DLMU_SPROT_RGNLA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF880E260u)

/** \brief E264, CPUx  Safety protection DLMU Region Upper Address Register 6 */
#define CPU0_DLMU_SPROT_RGNUA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF880E264u)

/** \brief E268, CPUx  Safety Protection Region DLMU Write Access Enable Register A6 */
#define CPU0_DLMU_SPROT_RGNACCENA_W6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF880E268u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_W6.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_W6.
*/
#define CPU0_DLMU_SPROT_RGNACCENA6_W (CPU0_DLMU_SPROT_RGNACCENA_W6)

/** \brief E26C, CPUx  Safety Protection Region DLMU Write Access Enable Register B6 */
#define CPU0_DLMU_SPROT_RGNACCENB_W6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF880E26Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_W6.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_W6.
*/
#define CPU0_DLMU_SPROT_RGNACCENB6_W (CPU0_DLMU_SPROT_RGNACCENB_W6)

/** \brief E270, CPUx  Safety Protection DLMU Region Lower Address Register 7 */
#define CPU0_DLMU_SPROT_RGNLA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF880E270u)

/** \brief E274, CPUx  Safety protection DLMU Region Upper Address Register 7 */
#define CPU0_DLMU_SPROT_RGNUA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF880E274u)

/** \brief E278, CPUx  Safety Protection Region DLMU Write Access Enable Register A7 */
#define CPU0_DLMU_SPROT_RGNACCENA_W7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF880E278u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_W7.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_W7.
*/
#define CPU0_DLMU_SPROT_RGNACCENA7_W (CPU0_DLMU_SPROT_RGNACCENA_W7)

/** \brief E27C, CPUx  Safety Protection Region DLMU Write Access Enable Register B7 */
#define CPU0_DLMU_SPROT_RGNACCENB_W7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF880E27Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_W7.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_W7.
*/
#define CPU0_DLMU_SPROT_RGNACCENB7_W (CPU0_DLMU_SPROT_RGNACCENB_W7)

/** \brief E288, CPUx Safety Protection Region DLMU Read Access Enable Register A0 */
#define CPU0_DLMU_SPROT_RGNACCENA_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF880E288u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_R0.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_R0.
*/
#define CPU0_DLMU_SPROT_RGNACCENA0_R (CPU0_DLMU_SPROT_RGNACCENA_R0)

/** \brief E28C, CPUx Safety Protection Region DLMU Read Access Enable Register B0 */
#define CPU0_DLMU_SPROT_RGNACCENB_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF880E28Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_R0.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_R0.
*/
#define CPU0_DLMU_SPROT_RGNACCENB0_R (CPU0_DLMU_SPROT_RGNACCENB_R0)

/** \brief E298, CPUx Safety Protection Region DLMU Read Access Enable Register A1 */
#define CPU0_DLMU_SPROT_RGNACCENA_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF880E298u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_R1.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_R1.
*/
#define CPU0_DLMU_SPROT_RGNACCENA1_R (CPU0_DLMU_SPROT_RGNACCENA_R1)

/** \brief E29C, CPUx Safety Protection Region DLMU Read Access Enable Register B1 */
#define CPU0_DLMU_SPROT_RGNACCENB_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF880E29Cu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_R1.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_R1.
*/
#define CPU0_DLMU_SPROT_RGNACCENB1_R (CPU0_DLMU_SPROT_RGNACCENB_R1)

/** \brief E2A8, CPUx Safety Protection Region DLMU Read Access Enable Register A2 */
#define CPU0_DLMU_SPROT_RGNACCENA_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF880E2A8u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_R2.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_R2.
*/
#define CPU0_DLMU_SPROT_RGNACCENA2_R (CPU0_DLMU_SPROT_RGNACCENA_R2)

/** \brief E2AC, CPUx Safety Protection Region DLMU Read Access Enable Register B2 */
#define CPU0_DLMU_SPROT_RGNACCENB_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF880E2ACu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_R2.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_R2.
*/
#define CPU0_DLMU_SPROT_RGNACCENB2_R (CPU0_DLMU_SPROT_RGNACCENB_R2)

/** \brief E2B8, CPUx Safety Protection Region DLMU Read Access Enable Register A3 */
#define CPU0_DLMU_SPROT_RGNACCENA_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF880E2B8u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_R3.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_R3.
*/
#define CPU0_DLMU_SPROT_RGNACCENA3_R (CPU0_DLMU_SPROT_RGNACCENA_R3)

/** \brief E2BC, CPUx Safety Protection Region DLMU Read Access Enable Register B3 */
#define CPU0_DLMU_SPROT_RGNACCENB_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF880E2BCu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_R3.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_R3.
*/
#define CPU0_DLMU_SPROT_RGNACCENB3_R (CPU0_DLMU_SPROT_RGNACCENB_R3)

/** \brief E2C8, CPUx Safety Protection Region DLMU Read Access Enable Register A4 */
#define CPU0_DLMU_SPROT_RGNACCENA_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF880E2C8u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_R4.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_R4.
*/
#define CPU0_DLMU_SPROT_RGNACCENA4_R (CPU0_DLMU_SPROT_RGNACCENA_R4)

/** \brief E2CC, CPUx Safety Protection Region DLMU Read Access Enable Register B4 */
#define CPU0_DLMU_SPROT_RGNACCENB_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF880E2CCu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_R4.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_R4.
*/
#define CPU0_DLMU_SPROT_RGNACCENB4_R (CPU0_DLMU_SPROT_RGNACCENB_R4)

/** \brief E2D8, CPUx Safety Protection Region DLMU Read Access Enable Register A5 */
#define CPU0_DLMU_SPROT_RGNACCENA_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF880E2D8u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_R5.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_R5.
*/
#define CPU0_DLMU_SPROT_RGNACCENA5_R (CPU0_DLMU_SPROT_RGNACCENA_R5)

/** \brief E2DC, CPUx Safety Protection Region DLMU Read Access Enable Register B5 */
#define CPU0_DLMU_SPROT_RGNACCENB_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF880E2DCu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_R5.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_R5.
*/
#define CPU0_DLMU_SPROT_RGNACCENB5_R (CPU0_DLMU_SPROT_RGNACCENB_R5)

/** \brief E2E8, CPUx Safety Protection Region DLMU Read Access Enable Register A6 */
#define CPU0_DLMU_SPROT_RGNACCENA_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF880E2E8u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_R6.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_R6.
*/
#define CPU0_DLMU_SPROT_RGNACCENA6_R (CPU0_DLMU_SPROT_RGNACCENA_R6)

/** \brief E2EC, CPUx Safety Protection Region DLMU Read Access Enable Register B6 */
#define CPU0_DLMU_SPROT_RGNACCENB_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF880E2ECu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_R6.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_R6.
*/
#define CPU0_DLMU_SPROT_RGNACCENB6_R (CPU0_DLMU_SPROT_RGNACCENB_R6)

/** \brief E2F8, CPUx Safety Protection Region DLMU Read Access Enable Register A7 */
#define CPU0_DLMU_SPROT_RGNACCENA_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF880E2F8u)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENA_R7.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENA_R7.
*/
#define CPU0_DLMU_SPROT_RGNACCENA7_R (CPU0_DLMU_SPROT_RGNACCENA_R7)

/** \brief E2FC, CPUx Safety Protection Region DLMU Read Access Enable Register B7 */
#define CPU0_DLMU_SPROT_RGNACCENB_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF880E2FCu)
/** Alias (User Manual Name) for CPU0_DLMU_SPROT_RGNACCENB_R7.
* To use register names with standard convension, please use CPU0_DLMU_SPROT_RGNACCENB_R7.
*/
#define CPU0_DLMU_SPROT_RGNACCENB7_R (CPU0_DLMU_SPROT_RGNACCENB_R7)

/** \brief FB00, CPUx  Overlay Range Select Register */
#define CPU0_OSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_OSEL*)0xF880FB00u)

/** \brief FB10, CPUx Redirected Address Base Register 0 */
#define CPU0_BLK0_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB10u)
/** Alias (User Manual Name) for CPU0_BLK0_RABR.
* To use register names with standard convension, please use CPU0_BLK0_RABR.
*/
#define CPU0_RABR0 (CPU0_BLK0_RABR)

/** \brief FB14, CPUx Overlay Target Address Register 0 */
#define CPU0_BLK0_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB14u)
/** Alias (User Manual Name) for CPU0_BLK0_OTAR.
* To use register names with standard convension, please use CPU0_BLK0_OTAR.
*/
#define CPU0_OTAR0 (CPU0_BLK0_OTAR)

/** \brief FB18, CPUx Overlay Mask Register 0 */
#define CPU0_BLK0_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB18u)
/** Alias (User Manual Name) for CPU0_BLK0_OMASK.
* To use register names with standard convension, please use CPU0_BLK0_OMASK.
*/
#define CPU0_OMASK0 (CPU0_BLK0_OMASK)

/** \brief FB1C, CPUx Redirected Address Base Register 1 */
#define CPU0_BLK1_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB1Cu)
/** Alias (User Manual Name) for CPU0_BLK1_RABR.
* To use register names with standard convension, please use CPU0_BLK1_RABR.
*/
#define CPU0_RABR1 (CPU0_BLK1_RABR)

/** \brief FB20, CPUx Overlay Target Address Register 1 */
#define CPU0_BLK1_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB20u)
/** Alias (User Manual Name) for CPU0_BLK1_OTAR.
* To use register names with standard convension, please use CPU0_BLK1_OTAR.
*/
#define CPU0_OTAR1 (CPU0_BLK1_OTAR)

/** \brief FB24, CPUx Overlay Mask Register 1 */
#define CPU0_BLK1_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB24u)
/** Alias (User Manual Name) for CPU0_BLK1_OMASK.
* To use register names with standard convension, please use CPU0_BLK1_OMASK.
*/
#define CPU0_OMASK1 (CPU0_BLK1_OMASK)

/** \brief FB28, CPUx Redirected Address Base Register 2 */
#define CPU0_BLK2_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB28u)
/** Alias (User Manual Name) for CPU0_BLK2_RABR.
* To use register names with standard convension, please use CPU0_BLK2_RABR.
*/
#define CPU0_RABR2 (CPU0_BLK2_RABR)

/** \brief FB2C, CPUx Overlay Target Address Register 2 */
#define CPU0_BLK2_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB2Cu)
/** Alias (User Manual Name) for CPU0_BLK2_OTAR.
* To use register names with standard convension, please use CPU0_BLK2_OTAR.
*/
#define CPU0_OTAR2 (CPU0_BLK2_OTAR)

/** \brief FB30, CPUx Overlay Mask Register 2 */
#define CPU0_BLK2_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB30u)
/** Alias (User Manual Name) for CPU0_BLK2_OMASK.
* To use register names with standard convension, please use CPU0_BLK2_OMASK.
*/
#define CPU0_OMASK2 (CPU0_BLK2_OMASK)

/** \brief FB34, CPUx Redirected Address Base Register 3 */
#define CPU0_BLK3_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB34u)
/** Alias (User Manual Name) for CPU0_BLK3_RABR.
* To use register names with standard convension, please use CPU0_BLK3_RABR.
*/
#define CPU0_RABR3 (CPU0_BLK3_RABR)

/** \brief FB38, CPUx Overlay Target Address Register 3 */
#define CPU0_BLK3_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB38u)
/** Alias (User Manual Name) for CPU0_BLK3_OTAR.
* To use register names with standard convension, please use CPU0_BLK3_OTAR.
*/
#define CPU0_OTAR3 (CPU0_BLK3_OTAR)

/** \brief FB3C, CPUx Overlay Mask Register 3 */
#define CPU0_BLK3_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB3Cu)
/** Alias (User Manual Name) for CPU0_BLK3_OMASK.
* To use register names with standard convension, please use CPU0_BLK3_OMASK.
*/
#define CPU0_OMASK3 (CPU0_BLK3_OMASK)

/** \brief FB40, CPUx Redirected Address Base Register 4 */
#define CPU0_BLK4_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB40u)
/** Alias (User Manual Name) for CPU0_BLK4_RABR.
* To use register names with standard convension, please use CPU0_BLK4_RABR.
*/
#define CPU0_RABR4 (CPU0_BLK4_RABR)

/** \brief FB44, CPUx Overlay Target Address Register 4 */
#define CPU0_BLK4_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB44u)
/** Alias (User Manual Name) for CPU0_BLK4_OTAR.
* To use register names with standard convension, please use CPU0_BLK4_OTAR.
*/
#define CPU0_OTAR4 (CPU0_BLK4_OTAR)

/** \brief FB48, CPUx Overlay Mask Register 4 */
#define CPU0_BLK4_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB48u)
/** Alias (User Manual Name) for CPU0_BLK4_OMASK.
* To use register names with standard convension, please use CPU0_BLK4_OMASK.
*/
#define CPU0_OMASK4 (CPU0_BLK4_OMASK)

/** \brief FB4C, CPUx Redirected Address Base Register 5 */
#define CPU0_BLK5_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB4Cu)
/** Alias (User Manual Name) for CPU0_BLK5_RABR.
* To use register names with standard convension, please use CPU0_BLK5_RABR.
*/
#define CPU0_RABR5 (CPU0_BLK5_RABR)

/** \brief FB50, CPUx Overlay Target Address Register 5 */
#define CPU0_BLK5_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB50u)
/** Alias (User Manual Name) for CPU0_BLK5_OTAR.
* To use register names with standard convension, please use CPU0_BLK5_OTAR.
*/
#define CPU0_OTAR5 (CPU0_BLK5_OTAR)

/** \brief FB54, CPUx Overlay Mask Register 5 */
#define CPU0_BLK5_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB54u)
/** Alias (User Manual Name) for CPU0_BLK5_OMASK.
* To use register names with standard convension, please use CPU0_BLK5_OMASK.
*/
#define CPU0_OMASK5 (CPU0_BLK5_OMASK)

/** \brief FB58, CPUx Redirected Address Base Register 6 */
#define CPU0_BLK6_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB58u)
/** Alias (User Manual Name) for CPU0_BLK6_RABR.
* To use register names with standard convension, please use CPU0_BLK6_RABR.
*/
#define CPU0_RABR6 (CPU0_BLK6_RABR)

/** \brief FB5C, CPUx Overlay Target Address Register 6 */
#define CPU0_BLK6_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB5Cu)
/** Alias (User Manual Name) for CPU0_BLK6_OTAR.
* To use register names with standard convension, please use CPU0_BLK6_OTAR.
*/
#define CPU0_OTAR6 (CPU0_BLK6_OTAR)

/** \brief FB60, CPUx Overlay Mask Register 6 */
#define CPU0_BLK6_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB60u)
/** Alias (User Manual Name) for CPU0_BLK6_OMASK.
* To use register names with standard convension, please use CPU0_BLK6_OMASK.
*/
#define CPU0_OMASK6 (CPU0_BLK6_OMASK)

/** \brief FB64, CPUx Redirected Address Base Register 7 */
#define CPU0_BLK7_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB64u)
/** Alias (User Manual Name) for CPU0_BLK7_RABR.
* To use register names with standard convension, please use CPU0_BLK7_RABR.
*/
#define CPU0_RABR7 (CPU0_BLK7_RABR)

/** \brief FB68, CPUx Overlay Target Address Register 7 */
#define CPU0_BLK7_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB68u)
/** Alias (User Manual Name) for CPU0_BLK7_OTAR.
* To use register names with standard convension, please use CPU0_BLK7_OTAR.
*/
#define CPU0_OTAR7 (CPU0_BLK7_OTAR)

/** \brief FB6C, CPUx Overlay Mask Register 7 */
#define CPU0_BLK7_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB6Cu)
/** Alias (User Manual Name) for CPU0_BLK7_OMASK.
* To use register names with standard convension, please use CPU0_BLK7_OMASK.
*/
#define CPU0_OMASK7 (CPU0_BLK7_OMASK)

/** \brief FB70, CPUx Redirected Address Base Register 8 */
#define CPU0_BLK8_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB70u)
/** Alias (User Manual Name) for CPU0_BLK8_RABR.
* To use register names with standard convension, please use CPU0_BLK8_RABR.
*/
#define CPU0_RABR8 (CPU0_BLK8_RABR)

/** \brief FB74, CPUx Overlay Target Address Register 8 */
#define CPU0_BLK8_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB74u)
/** Alias (User Manual Name) for CPU0_BLK8_OTAR.
* To use register names with standard convension, please use CPU0_BLK8_OTAR.
*/
#define CPU0_OTAR8 (CPU0_BLK8_OTAR)

/** \brief FB78, CPUx Overlay Mask Register 8 */
#define CPU0_BLK8_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB78u)
/** Alias (User Manual Name) for CPU0_BLK8_OMASK.
* To use register names with standard convension, please use CPU0_BLK8_OMASK.
*/
#define CPU0_OMASK8 (CPU0_BLK8_OMASK)

/** \brief FB7C, CPUx Redirected Address Base Register 9 */
#define CPU0_BLK9_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB7Cu)
/** Alias (User Manual Name) for CPU0_BLK9_RABR.
* To use register names with standard convension, please use CPU0_BLK9_RABR.
*/
#define CPU0_RABR9 (CPU0_BLK9_RABR)

/** \brief FB80, CPUx Overlay Target Address Register 9 */
#define CPU0_BLK9_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB80u)
/** Alias (User Manual Name) for CPU0_BLK9_OTAR.
* To use register names with standard convension, please use CPU0_BLK9_OTAR.
*/
#define CPU0_OTAR9 (CPU0_BLK9_OTAR)

/** \brief FB84, CPUx Overlay Mask Register 9 */
#define CPU0_BLK9_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB84u)
/** Alias (User Manual Name) for CPU0_BLK9_OMASK.
* To use register names with standard convension, please use CPU0_BLK9_OMASK.
*/
#define CPU0_OMASK9 (CPU0_BLK9_OMASK)

/** \brief FB88, CPUx Redirected Address Base Register 10 */
#define CPU0_BLK10_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB88u)
/** Alias (User Manual Name) for CPU0_BLK10_RABR.
* To use register names with standard convension, please use CPU0_BLK10_RABR.
*/
#define CPU0_RABR10 (CPU0_BLK10_RABR)

/** \brief FB8C, CPUx Overlay Target Address Register 10 */
#define CPU0_BLK10_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB8Cu)
/** Alias (User Manual Name) for CPU0_BLK10_OTAR.
* To use register names with standard convension, please use CPU0_BLK10_OTAR.
*/
#define CPU0_OTAR10 (CPU0_BLK10_OTAR)

/** \brief FB90, CPUx Overlay Mask Register 10 */
#define CPU0_BLK10_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB90u)
/** Alias (User Manual Name) for CPU0_BLK10_OMASK.
* To use register names with standard convension, please use CPU0_BLK10_OMASK.
*/
#define CPU0_OMASK10 (CPU0_BLK10_OMASK)

/** \brief FB94, CPUx Redirected Address Base Register 11 */
#define CPU0_BLK11_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FB94u)
/** Alias (User Manual Name) for CPU0_BLK11_RABR.
* To use register names with standard convension, please use CPU0_BLK11_RABR.
*/
#define CPU0_RABR11 (CPU0_BLK11_RABR)

/** \brief FB98, CPUx Overlay Target Address Register 11 */
#define CPU0_BLK11_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FB98u)
/** Alias (User Manual Name) for CPU0_BLK11_OTAR.
* To use register names with standard convension, please use CPU0_BLK11_OTAR.
*/
#define CPU0_OTAR11 (CPU0_BLK11_OTAR)

/** \brief FB9C, CPUx Overlay Mask Register 11 */
#define CPU0_BLK11_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FB9Cu)
/** Alias (User Manual Name) for CPU0_BLK11_OMASK.
* To use register names with standard convension, please use CPU0_BLK11_OMASK.
*/
#define CPU0_OMASK11 (CPU0_BLK11_OMASK)

/** \brief FBA0, CPUx Redirected Address Base Register 12 */
#define CPU0_BLK12_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FBA0u)
/** Alias (User Manual Name) for CPU0_BLK12_RABR.
* To use register names with standard convension, please use CPU0_BLK12_RABR.
*/
#define CPU0_RABR12 (CPU0_BLK12_RABR)

/** \brief FBA4, CPUx Overlay Target Address Register 12 */
#define CPU0_BLK12_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FBA4u)
/** Alias (User Manual Name) for CPU0_BLK12_OTAR.
* To use register names with standard convension, please use CPU0_BLK12_OTAR.
*/
#define CPU0_OTAR12 (CPU0_BLK12_OTAR)

/** \brief FBA8, CPUx Overlay Mask Register 12 */
#define CPU0_BLK12_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FBA8u)
/** Alias (User Manual Name) for CPU0_BLK12_OMASK.
* To use register names with standard convension, please use CPU0_BLK12_OMASK.
*/
#define CPU0_OMASK12 (CPU0_BLK12_OMASK)

/** \brief FBAC, CPUx Redirected Address Base Register 13 */
#define CPU0_BLK13_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FBACu)
/** Alias (User Manual Name) for CPU0_BLK13_RABR.
* To use register names with standard convension, please use CPU0_BLK13_RABR.
*/
#define CPU0_RABR13 (CPU0_BLK13_RABR)

/** \brief FBB0, CPUx Overlay Target Address Register 13 */
#define CPU0_BLK13_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FBB0u)
/** Alias (User Manual Name) for CPU0_BLK13_OTAR.
* To use register names with standard convension, please use CPU0_BLK13_OTAR.
*/
#define CPU0_OTAR13 (CPU0_BLK13_OTAR)

/** \brief FBB4, CPUx Overlay Mask Register 13 */
#define CPU0_BLK13_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FBB4u)
/** Alias (User Manual Name) for CPU0_BLK13_OMASK.
* To use register names with standard convension, please use CPU0_BLK13_OMASK.
*/
#define CPU0_OMASK13 (CPU0_BLK13_OMASK)

/** \brief FBB8, CPUx Redirected Address Base Register 14 */
#define CPU0_BLK14_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FBB8u)
/** Alias (User Manual Name) for CPU0_BLK14_RABR.
* To use register names with standard convension, please use CPU0_BLK14_RABR.
*/
#define CPU0_RABR14 (CPU0_BLK14_RABR)

/** \brief FBBC, CPUx Overlay Target Address Register 14 */
#define CPU0_BLK14_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FBBCu)
/** Alias (User Manual Name) for CPU0_BLK14_OTAR.
* To use register names with standard convension, please use CPU0_BLK14_OTAR.
*/
#define CPU0_OTAR14 (CPU0_BLK14_OTAR)

/** \brief FBC0, CPUx Overlay Mask Register 14 */
#define CPU0_BLK14_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FBC0u)
/** Alias (User Manual Name) for CPU0_BLK14_OMASK.
* To use register names with standard convension, please use CPU0_BLK14_OMASK.
*/
#define CPU0_OMASK14 (CPU0_BLK14_OMASK)

/** \brief FBC4, CPUx Redirected Address Base Register 15 */
#define CPU0_BLK15_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FBC4u)
/** Alias (User Manual Name) for CPU0_BLK15_RABR.
* To use register names with standard convension, please use CPU0_BLK15_RABR.
*/
#define CPU0_RABR15 (CPU0_BLK15_RABR)

/** \brief FBC8, CPUx Overlay Target Address Register 15 */
#define CPU0_BLK15_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FBC8u)
/** Alias (User Manual Name) for CPU0_BLK15_OTAR.
* To use register names with standard convension, please use CPU0_BLK15_OTAR.
*/
#define CPU0_OTAR15 (CPU0_BLK15_OTAR)

/** \brief FBCC, CPUx Overlay Mask Register 15 */
#define CPU0_BLK15_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FBCCu)
/** Alias (User Manual Name) for CPU0_BLK15_OMASK.
* To use register names with standard convension, please use CPU0_BLK15_OMASK.
*/
#define CPU0_OMASK15 (CPU0_BLK15_OMASK)

/** \brief FBD0, CPUx Redirected Address Base Register 16 */
#define CPU0_BLK16_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FBD0u)
/** Alias (User Manual Name) for CPU0_BLK16_RABR.
* To use register names with standard convension, please use CPU0_BLK16_RABR.
*/
#define CPU0_RABR16 (CPU0_BLK16_RABR)

/** \brief FBD4, CPUx Overlay Target Address Register 16 */
#define CPU0_BLK16_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FBD4u)
/** Alias (User Manual Name) for CPU0_BLK16_OTAR.
* To use register names with standard convension, please use CPU0_BLK16_OTAR.
*/
#define CPU0_OTAR16 (CPU0_BLK16_OTAR)

/** \brief FBD8, CPUx Overlay Mask Register 16 */
#define CPU0_BLK16_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FBD8u)
/** Alias (User Manual Name) for CPU0_BLK16_OMASK.
* To use register names with standard convension, please use CPU0_BLK16_OMASK.
*/
#define CPU0_OMASK16 (CPU0_BLK16_OMASK)

/** \brief FBDC, CPUx Redirected Address Base Register 17 */
#define CPU0_BLK17_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FBDCu)
/** Alias (User Manual Name) for CPU0_BLK17_RABR.
* To use register names with standard convension, please use CPU0_BLK17_RABR.
*/
#define CPU0_RABR17 (CPU0_BLK17_RABR)

/** \brief FBE0, CPUx Overlay Target Address Register 17 */
#define CPU0_BLK17_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FBE0u)
/** Alias (User Manual Name) for CPU0_BLK17_OTAR.
* To use register names with standard convension, please use CPU0_BLK17_OTAR.
*/
#define CPU0_OTAR17 (CPU0_BLK17_OTAR)

/** \brief FBE4, CPUx Overlay Mask Register 17 */
#define CPU0_BLK17_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FBE4u)
/** Alias (User Manual Name) for CPU0_BLK17_OMASK.
* To use register names with standard convension, please use CPU0_BLK17_OMASK.
*/
#define CPU0_OMASK17 (CPU0_BLK17_OMASK)

/** \brief FBE8, CPUx Redirected Address Base Register 18 */
#define CPU0_BLK18_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FBE8u)
/** Alias (User Manual Name) for CPU0_BLK18_RABR.
* To use register names with standard convension, please use CPU0_BLK18_RABR.
*/
#define CPU0_RABR18 (CPU0_BLK18_RABR)

/** \brief FBEC, CPUx Overlay Target Address Register 18 */
#define CPU0_BLK18_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FBECu)
/** Alias (User Manual Name) for CPU0_BLK18_OTAR.
* To use register names with standard convension, please use CPU0_BLK18_OTAR.
*/
#define CPU0_OTAR18 (CPU0_BLK18_OTAR)

/** \brief FBF0, CPUx Overlay Mask Register 18 */
#define CPU0_BLK18_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FBF0u)
/** Alias (User Manual Name) for CPU0_BLK18_OMASK.
* To use register names with standard convension, please use CPU0_BLK18_OMASK.
*/
#define CPU0_OMASK18 (CPU0_BLK18_OMASK)

/** \brief FBF4, CPUx Redirected Address Base Register 19 */
#define CPU0_BLK19_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FBF4u)
/** Alias (User Manual Name) for CPU0_BLK19_RABR.
* To use register names with standard convension, please use CPU0_BLK19_RABR.
*/
#define CPU0_RABR19 (CPU0_BLK19_RABR)

/** \brief FBF8, CPUx Overlay Target Address Register 19 */
#define CPU0_BLK19_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FBF8u)
/** Alias (User Manual Name) for CPU0_BLK19_OTAR.
* To use register names with standard convension, please use CPU0_BLK19_OTAR.
*/
#define CPU0_OTAR19 (CPU0_BLK19_OTAR)

/** \brief FBFC, CPUx Overlay Mask Register 19 */
#define CPU0_BLK19_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FBFCu)
/** Alias (User Manual Name) for CPU0_BLK19_OMASK.
* To use register names with standard convension, please use CPU0_BLK19_OMASK.
*/
#define CPU0_OMASK19 (CPU0_BLK19_OMASK)

/** \brief FC00, CPUx Redirected Address Base Register 20 */
#define CPU0_BLK20_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC00u)
/** Alias (User Manual Name) for CPU0_BLK20_RABR.
* To use register names with standard convension, please use CPU0_BLK20_RABR.
*/
#define CPU0_RABR20 (CPU0_BLK20_RABR)

/** \brief FC04, CPUx Overlay Target Address Register 20 */
#define CPU0_BLK20_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC04u)
/** Alias (User Manual Name) for CPU0_BLK20_OTAR.
* To use register names with standard convension, please use CPU0_BLK20_OTAR.
*/
#define CPU0_OTAR20 (CPU0_BLK20_OTAR)

/** \brief FC08, CPUx Overlay Mask Register 20 */
#define CPU0_BLK20_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC08u)
/** Alias (User Manual Name) for CPU0_BLK20_OMASK.
* To use register names with standard convension, please use CPU0_BLK20_OMASK.
*/
#define CPU0_OMASK20 (CPU0_BLK20_OMASK)

/** \brief FC0C, CPUx Redirected Address Base Register 21 */
#define CPU0_BLK21_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC0Cu)
/** Alias (User Manual Name) for CPU0_BLK21_RABR.
* To use register names with standard convension, please use CPU0_BLK21_RABR.
*/
#define CPU0_RABR21 (CPU0_BLK21_RABR)

/** \brief FC10, CPUx Overlay Target Address Register 21 */
#define CPU0_BLK21_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC10u)
/** Alias (User Manual Name) for CPU0_BLK21_OTAR.
* To use register names with standard convension, please use CPU0_BLK21_OTAR.
*/
#define CPU0_OTAR21 (CPU0_BLK21_OTAR)

/** \brief FC14, CPUx Overlay Mask Register 21 */
#define CPU0_BLK21_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC14u)
/** Alias (User Manual Name) for CPU0_BLK21_OMASK.
* To use register names with standard convension, please use CPU0_BLK21_OMASK.
*/
#define CPU0_OMASK21 (CPU0_BLK21_OMASK)

/** \brief FC18, CPUx Redirected Address Base Register 22 */
#define CPU0_BLK22_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC18u)
/** Alias (User Manual Name) for CPU0_BLK22_RABR.
* To use register names with standard convension, please use CPU0_BLK22_RABR.
*/
#define CPU0_RABR22 (CPU0_BLK22_RABR)

/** \brief FC1C, CPUx Overlay Target Address Register 22 */
#define CPU0_BLK22_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC1Cu)
/** Alias (User Manual Name) for CPU0_BLK22_OTAR.
* To use register names with standard convension, please use CPU0_BLK22_OTAR.
*/
#define CPU0_OTAR22 (CPU0_BLK22_OTAR)

/** \brief FC20, CPUx Overlay Mask Register 22 */
#define CPU0_BLK22_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC20u)
/** Alias (User Manual Name) for CPU0_BLK22_OMASK.
* To use register names with standard convension, please use CPU0_BLK22_OMASK.
*/
#define CPU0_OMASK22 (CPU0_BLK22_OMASK)

/** \brief FC24, CPUx Redirected Address Base Register 23 */
#define CPU0_BLK23_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC24u)
/** Alias (User Manual Name) for CPU0_BLK23_RABR.
* To use register names with standard convension, please use CPU0_BLK23_RABR.
*/
#define CPU0_RABR23 (CPU0_BLK23_RABR)

/** \brief FC28, CPUx Overlay Target Address Register 23 */
#define CPU0_BLK23_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC28u)
/** Alias (User Manual Name) for CPU0_BLK23_OTAR.
* To use register names with standard convension, please use CPU0_BLK23_OTAR.
*/
#define CPU0_OTAR23 (CPU0_BLK23_OTAR)

/** \brief FC2C, CPUx Overlay Mask Register 23 */
#define CPU0_BLK23_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC2Cu)
/** Alias (User Manual Name) for CPU0_BLK23_OMASK.
* To use register names with standard convension, please use CPU0_BLK23_OMASK.
*/
#define CPU0_OMASK23 (CPU0_BLK23_OMASK)

/** \brief FC30, CPUx Redirected Address Base Register 24 */
#define CPU0_BLK24_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC30u)
/** Alias (User Manual Name) for CPU0_BLK24_RABR.
* To use register names with standard convension, please use CPU0_BLK24_RABR.
*/
#define CPU0_RABR24 (CPU0_BLK24_RABR)

/** \brief FC34, CPUx Overlay Target Address Register 24 */
#define CPU0_BLK24_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC34u)
/** Alias (User Manual Name) for CPU0_BLK24_OTAR.
* To use register names with standard convension, please use CPU0_BLK24_OTAR.
*/
#define CPU0_OTAR24 (CPU0_BLK24_OTAR)

/** \brief FC38, CPUx Overlay Mask Register 24 */
#define CPU0_BLK24_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC38u)
/** Alias (User Manual Name) for CPU0_BLK24_OMASK.
* To use register names with standard convension, please use CPU0_BLK24_OMASK.
*/
#define CPU0_OMASK24 (CPU0_BLK24_OMASK)

/** \brief FC3C, CPUx Redirected Address Base Register 25 */
#define CPU0_BLK25_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC3Cu)
/** Alias (User Manual Name) for CPU0_BLK25_RABR.
* To use register names with standard convension, please use CPU0_BLK25_RABR.
*/
#define CPU0_RABR25 (CPU0_BLK25_RABR)

/** \brief FC40, CPUx Overlay Target Address Register 25 */
#define CPU0_BLK25_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC40u)
/** Alias (User Manual Name) for CPU0_BLK25_OTAR.
* To use register names with standard convension, please use CPU0_BLK25_OTAR.
*/
#define CPU0_OTAR25 (CPU0_BLK25_OTAR)

/** \brief FC44, CPUx Overlay Mask Register 25 */
#define CPU0_BLK25_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC44u)
/** Alias (User Manual Name) for CPU0_BLK25_OMASK.
* To use register names with standard convension, please use CPU0_BLK25_OMASK.
*/
#define CPU0_OMASK25 (CPU0_BLK25_OMASK)

/** \brief FC48, CPUx Redirected Address Base Register 26 */
#define CPU0_BLK26_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC48u)
/** Alias (User Manual Name) for CPU0_BLK26_RABR.
* To use register names with standard convension, please use CPU0_BLK26_RABR.
*/
#define CPU0_RABR26 (CPU0_BLK26_RABR)

/** \brief FC4C, CPUx Overlay Target Address Register 26 */
#define CPU0_BLK26_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC4Cu)
/** Alias (User Manual Name) for CPU0_BLK26_OTAR.
* To use register names with standard convension, please use CPU0_BLK26_OTAR.
*/
#define CPU0_OTAR26 (CPU0_BLK26_OTAR)

/** \brief FC50, CPUx Overlay Mask Register 26 */
#define CPU0_BLK26_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC50u)
/** Alias (User Manual Name) for CPU0_BLK26_OMASK.
* To use register names with standard convension, please use CPU0_BLK26_OMASK.
*/
#define CPU0_OMASK26 (CPU0_BLK26_OMASK)

/** \brief FC54, CPUx Redirected Address Base Register 27 */
#define CPU0_BLK27_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC54u)
/** Alias (User Manual Name) for CPU0_BLK27_RABR.
* To use register names with standard convension, please use CPU0_BLK27_RABR.
*/
#define CPU0_RABR27 (CPU0_BLK27_RABR)

/** \brief FC58, CPUx Overlay Target Address Register 27 */
#define CPU0_BLK27_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC58u)
/** Alias (User Manual Name) for CPU0_BLK27_OTAR.
* To use register names with standard convension, please use CPU0_BLK27_OTAR.
*/
#define CPU0_OTAR27 (CPU0_BLK27_OTAR)

/** \brief FC5C, CPUx Overlay Mask Register 27 */
#define CPU0_BLK27_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC5Cu)
/** Alias (User Manual Name) for CPU0_BLK27_OMASK.
* To use register names with standard convension, please use CPU0_BLK27_OMASK.
*/
#define CPU0_OMASK27 (CPU0_BLK27_OMASK)

/** \brief FC60, CPUx Redirected Address Base Register 28 */
#define CPU0_BLK28_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC60u)
/** Alias (User Manual Name) for CPU0_BLK28_RABR.
* To use register names with standard convension, please use CPU0_BLK28_RABR.
*/
#define CPU0_RABR28 (CPU0_BLK28_RABR)

/** \brief FC64, CPUx Overlay Target Address Register 28 */
#define CPU0_BLK28_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC64u)
/** Alias (User Manual Name) for CPU0_BLK28_OTAR.
* To use register names with standard convension, please use CPU0_BLK28_OTAR.
*/
#define CPU0_OTAR28 (CPU0_BLK28_OTAR)

/** \brief FC68, CPUx Overlay Mask Register 28 */
#define CPU0_BLK28_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC68u)
/** Alias (User Manual Name) for CPU0_BLK28_OMASK.
* To use register names with standard convension, please use CPU0_BLK28_OMASK.
*/
#define CPU0_OMASK28 (CPU0_BLK28_OMASK)

/** \brief FC6C, CPUx Redirected Address Base Register 29 */
#define CPU0_BLK29_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC6Cu)
/** Alias (User Manual Name) for CPU0_BLK29_RABR.
* To use register names with standard convension, please use CPU0_BLK29_RABR.
*/
#define CPU0_RABR29 (CPU0_BLK29_RABR)

/** \brief FC70, CPUx Overlay Target Address Register 29 */
#define CPU0_BLK29_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC70u)
/** Alias (User Manual Name) for CPU0_BLK29_OTAR.
* To use register names with standard convension, please use CPU0_BLK29_OTAR.
*/
#define CPU0_OTAR29 (CPU0_BLK29_OTAR)

/** \brief FC74, CPUx Overlay Mask Register 29 */
#define CPU0_BLK29_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC74u)
/** Alias (User Manual Name) for CPU0_BLK29_OMASK.
* To use register names with standard convension, please use CPU0_BLK29_OMASK.
*/
#define CPU0_OMASK29 (CPU0_BLK29_OMASK)

/** \brief FC78, CPUx Redirected Address Base Register 30 */
#define CPU0_BLK30_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC78u)
/** Alias (User Manual Name) for CPU0_BLK30_RABR.
* To use register names with standard convension, please use CPU0_BLK30_RABR.
*/
#define CPU0_RABR30 (CPU0_BLK30_RABR)

/** \brief FC7C, CPUx Overlay Target Address Register 30 */
#define CPU0_BLK30_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC7Cu)
/** Alias (User Manual Name) for CPU0_BLK30_OTAR.
* To use register names with standard convension, please use CPU0_BLK30_OTAR.
*/
#define CPU0_OTAR30 (CPU0_BLK30_OTAR)

/** \brief FC80, CPUx Overlay Mask Register 30 */
#define CPU0_BLK30_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC80u)
/** Alias (User Manual Name) for CPU0_BLK30_OMASK.
* To use register names with standard convension, please use CPU0_BLK30_OMASK.
*/
#define CPU0_OMASK30 (CPU0_BLK30_OMASK)

/** \brief FC84, CPUx Redirected Address Base Register 31 */
#define CPU0_BLK31_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF880FC84u)
/** Alias (User Manual Name) for CPU0_BLK31_RABR.
* To use register names with standard convension, please use CPU0_BLK31_RABR.
*/
#define CPU0_RABR31 (CPU0_BLK31_RABR)

/** \brief FC88, CPUx Overlay Target Address Register 31 */
#define CPU0_BLK31_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF880FC88u)
/** Alias (User Manual Name) for CPU0_BLK31_OTAR.
* To use register names with standard convension, please use CPU0_BLK31_OTAR.
*/
#define CPU0_OTAR31 (CPU0_BLK31_OTAR)

/** \brief FC8C, CPUx Overlay Mask Register 31 */
#define CPU0_BLK31_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF880FC8Cu)
/** Alias (User Manual Name) for CPU0_BLK31_OMASK.
* To use register names with standard convension, please use CPU0_BLK31_OMASK.
*/
#define CPU0_OMASK31 (CPU0_BLK31_OMASK)

/** \brief 1030, CPUx SRI Error Generation Register */
#define CPU0_SEGEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SEGEN*)0xF8811030u)

/** \brief 8004, CPUx Task Address Space Identifier Register */
#define CPU0_TASK_ASI /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF8818004u)

/** \brief 8100, CPUx Data Access CacheabilityRegister */
#define CPU0_PMA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA0*)0xF8818100u)

/** \brief 8104, CPUx Code Access CacheabilityRegister */
#define CPU0_PMA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA1*)0xF8818104u)

/** \brief 8108, CPUx  Peripheral Space Identifier register */
#define CPU0_PMA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA2*)0xF8818108u)

/** \brief 9000, CPUx Data Control Register 2 */
#define CPU0_DCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCON2*)0xF8819000u)

/** \brief 900C, CPUx SIST Mode Access Control Register */
#define CPU0_SMACON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SMACON*)0xF881900Cu)

/** \brief 9010, CPUx Data Synchronous Trap Register */
#define CPU0_DSTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DSTR*)0xF8819010u)

/** \brief 9018, CPUx Data Asynchronous Trap Register */
#define CPU0_DATR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DATR*)0xF8819018u)

/** \brief 901C, CPUx Data Error Address Register */
#define CPU0_DEADD /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DEADD*)0xF881901Cu)

/** \brief 9020, CPUx Data Integrity Error Address Register */
#define CPU0_DIEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DIEAR*)0xF8819020u)

/** \brief 9024, CPUx Data Integrity Error Trap Register */
#define CPU0_DIETR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DIETR*)0xF8819024u)

/** \brief 9040, CPUx Data Memory Control Register */
#define CPU0_DCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCON0*)0xF8819040u)

/** \brief 9200, CPUx Program Synchronous Trap Register */
#define CPU0_PSTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PSTR*)0xF8819200u)

/** \brief 9204, CPUx Program Control 1 */
#define CPU0_PCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON1*)0xF8819204u)

/** \brief 9208, CPUx Program Control 2 */
#define CPU0_PCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON2*)0xF8819208u)

/** \brief 920C, CPUx Program Control 0 */
#define CPU0_PCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON0*)0xF881920Cu)

/** \brief 9210, CPUx Program Integrity Error Address Register */
#define CPU0_PIEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PIEAR*)0xF8819210u)

/** \brief 9214, CPUx Program Integrity Error Trap Register */
#define CPU0_PIETR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PIETR*)0xF8819214u)

/** \brief 9400, CPUx Compatibility Control Register */
#define CPU0_COMPAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_COMPAT*)0xF8819400u)

/** \brief A000, CPUx Trap Control Register */
#define CPU0_FPU_TRAP_CON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF881A000u)

/** \brief A004, CPUx Trapping Instruction Program Counter Register */
#define CPU0_FPU_TRAP_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF881A004u)

/** \brief A008, CPUx Trapping Instruction Opcode Register */
#define CPU0_FPU_TRAP_OPC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF881A008u)

/** \brief A010, CPUx Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF881A010u)

/** \brief A014, CPUx Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF881A014u)

/** \brief A018, CPUx Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF881A018u)

/** \brief C000, CPUx Data Protection Range 0, Lower Bound Register */
#define CPU0_DPR0_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C000u)

/** \brief C004, CPUx Data Protection Range 0, Upper Bound Register */
#define CPU0_DPR0_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C004u)

/** \brief C008, CPUx Data Protection Range 1, Lower Bound Register */
#define CPU0_DPR1_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C008u)

/** \brief C00C, CPUx Data Protection Range 1, Upper Bound Register */
#define CPU0_DPR1_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C00Cu)

/** \brief C010, CPUx Data Protection Range 2, Lower Bound Register */
#define CPU0_DPR2_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C010u)

/** \brief C014, CPUx Data Protection Range 2, Upper Bound Register */
#define CPU0_DPR2_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C014u)

/** \brief C018, CPUx Data Protection Range 3, Lower Bound Register */
#define CPU0_DPR3_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C018u)

/** \brief C01C, CPUx Data Protection Range 3, Upper Bound Register */
#define CPU0_DPR3_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C01Cu)

/** \brief C020, CPUx Data Protection Range 4, Lower Bound Register */
#define CPU0_DPR4_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C020u)

/** \brief C024, CPUx Data Protection Range 4, Upper Bound Register */
#define CPU0_DPR4_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C024u)

/** \brief C028, CPUx Data Protection Range 5, Lower Bound Register */
#define CPU0_DPR5_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C028u)

/** \brief C02C, CPUx Data Protection Range 5, Upper Bound Register */
#define CPU0_DPR5_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C02Cu)

/** \brief C030, CPUx Data Protection Range 6, Lower Bound Register */
#define CPU0_DPR6_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C030u)

/** \brief C034, CPUx Data Protection Range 6, Upper Bound Register */
#define CPU0_DPR6_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C034u)

/** \brief C038, CPUx Data Protection Range 7, Lower Bound Register */
#define CPU0_DPR7_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C038u)

/** \brief C03C, CPUx Data Protection Range 7, Upper Bound Register */
#define CPU0_DPR7_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C03Cu)

/** \brief C040, CPUx Data Protection Range 8, Lower Bound Register */
#define CPU0_DPR8_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C040u)

/** \brief C044, CPUx Data Protection Range 8, Upper Bound Register */
#define CPU0_DPR8_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C044u)

/** \brief C048, CPUx Data Protection Range 9, Lower Bound Register */
#define CPU0_DPR9_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C048u)

/** \brief C04C, CPUx Data Protection Range 9, Upper Bound Register */
#define CPU0_DPR9_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C04Cu)

/** \brief C050, CPUx Data Protection Range 10, Lower Bound Register */
#define CPU0_DPR10_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C050u)

/** \brief C054, CPUx Data Protection Range 10, Upper Bound Register */
#define CPU0_DPR10_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C054u)

/** \brief C058, CPUx Data Protection Range 11, Lower Bound Register */
#define CPU0_DPR11_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C058u)

/** \brief C05C, CPUx Data Protection Range 11, Upper Bound Register */
#define CPU0_DPR11_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C05Cu)

/** \brief C060, CPUx Data Protection Range 12, Lower Bound Register */
#define CPU0_DPR12_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C060u)

/** \brief C064, CPUx Data Protection Range 12, Upper Bound Register */
#define CPU0_DPR12_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C064u)

/** \brief C068, CPUx Data Protection Range 13, Lower Bound Register */
#define CPU0_DPR13_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C068u)

/** \brief C06C, CPUx Data Protection Range 13, Upper Bound Register */
#define CPU0_DPR13_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C06Cu)

/** \brief C070, CPUx Data Protection Range 14, Lower Bound Register */
#define CPU0_DPR14_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C070u)

/** \brief C074, CPUx Data Protection Range 14, Upper Bound Register */
#define CPU0_DPR14_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C074u)

/** \brief C078, CPUx Data Protection Range 15, Lower Bound Register */
#define CPU0_DPR15_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C078u)

/** \brief C07C, CPUx Data Protection Range 15, Upper Bound Register */
#define CPU0_DPR15_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C07Cu)

/** \brief C080, CPUx Data Protection Range 16, Lower Bound Register */
#define CPU0_DPR16_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C080u)

/** \brief C084, CPUx Data Protection Range 16, Upper Bound Register */
#define CPU0_DPR16_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C084u)

/** \brief C088, CPUx Data Protection Range 17, Lower Bound Register */
#define CPU0_DPR17_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C088u)

/** \brief C08C, CPUx Data Protection Range 17, Upper Bound Register */
#define CPU0_DPR17_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C08Cu)

/** \brief D000, CPUx Code Protection Range 0 Lower Bound Register */
#define CPU0_CPR0_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D000u)

/** \brief D004, CPUx Code Protection Range 0 Upper Bound Register */
#define CPU0_CPR0_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D004u)

/** \brief D008, CPUx Code Protection Range 1 Lower Bound Register */
#define CPU0_CPR1_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D008u)

/** \brief D00C, CPUx Code Protection Range 1 Upper Bound Register */
#define CPU0_CPR1_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D00Cu)

/** \brief D010, CPUx Code Protection Range 2 Lower Bound Register */
#define CPU0_CPR2_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D010u)

/** \brief D014, CPUx Code Protection Range 2 Upper Bound Register */
#define CPU0_CPR2_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D014u)

/** \brief D018, CPUx Code Protection Range 3 Lower Bound Register */
#define CPU0_CPR3_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D018u)

/** \brief D01C, CPUx Code Protection Range 3 Upper Bound Register */
#define CPU0_CPR3_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D01Cu)

/** \brief D020, CPUx Code Protection Range 4 Lower Bound Register */
#define CPU0_CPR4_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D020u)

/** \brief D024, CPUx Code Protection Range 4 Upper Bound Register */
#define CPU0_CPR4_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D024u)

/** \brief D028, CPUx Code Protection Range 5 Lower Bound Register */
#define CPU0_CPR5_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D028u)

/** \brief D02C, CPUx Code Protection Range 5 Upper Bound Register */
#define CPU0_CPR5_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D02Cu)

/** \brief D030, CPUx Code Protection Range 6 Lower Bound Register */
#define CPU0_CPR6_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D030u)

/** \brief D034, CPUx Code Protection Range 6 Upper Bound Register */
#define CPU0_CPR6_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D034u)

/** \brief D038, CPUx Code Protection Range 7 Lower Bound Register */
#define CPU0_CPR7_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D038u)

/** \brief D03C, CPUx Code Protection Range 7 Upper Bound Register */
#define CPU0_CPR7_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D03Cu)

/** \brief D040, CPUx Code Protection Range 8 Lower Bound Register */
#define CPU0_CPR8_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D040u)

/** \brief D044, CPUx Code Protection Range 8 Upper Bound Register */
#define CPU0_CPR8_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D044u)

/** \brief D048, CPUx Code Protection Range 9 Lower Bound Register */
#define CPU0_CPR9_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D048u)

/** \brief D04C, CPUx Code Protection Range 9 Upper Bound Register */
#define CPU0_CPR9_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D04Cu)

/** \brief E000, CPUx Code Protection Execute Enable Register Set 0 */
#define CPU0_CPXE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF881E000u)

/** \brief E004, CPUx Code Protection Execute Enable Register Set 1 */
#define CPU0_CPXE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF881E004u)

/** \brief E008, CPUx Code Protection Execute Enable Register Set 2 */
#define CPU0_CPXE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF881E008u)

/** \brief E00C, CPUx Code Protection Execute Enable Register Set 3 */
#define CPU0_CPXE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF881E00Cu)

/** \brief E010, CPUx Data Protection Read Enable Register Set 0 */
#define CPU0_DPRE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF881E010u)

/** \brief E014, CPUx Data Protection Read Enable Register Set 1 */
#define CPU0_DPRE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF881E014u)

/** \brief E018, CPUx Data Protection Read Enable Register Set 2 */
#define CPU0_DPRE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF881E018u)

/** \brief E01C, CPUx Data Protection Read Enable Register Set 3 */
#define CPU0_DPRE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF881E01Cu)

/** \brief E020, CPUx Data Protection Write Enable Register Set 0 */
#define CPU0_DPWE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF881E020u)

/** \brief E024, CPUx Data Protection Write Enable Register Set 1 */
#define CPU0_DPWE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF881E024u)

/** \brief E028, CPUx Data Protection Write Enable Register Set 2 */
#define CPU0_DPWE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF881E028u)

/** \brief E02C, CPUx Data Protection Write Enable Register Set 3 */
#define CPU0_DPWE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF881E02Cu)

/** \brief E040, CPUx Code Protection Execute Enable Register Set 4 */
#define CPU0_CPXE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF881E040u)

/** \brief E044, CPUx Code Protection Execute Enable Register Set 5 */
#define CPU0_CPXE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF881E044u)

/** \brief E050, CPUx Data Protection Read Enable Register Set 4 */
#define CPU0_DPRE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF881E050u)

/** \brief E054, CPUx Data Protection Read Enable Register Set 5 */
#define CPU0_DPRE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF881E054u)

/** \brief E060, CPUx Data Protection Write Enable Register Set 4 */
#define CPU0_DPWE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF881E060u)

/** \brief E064, CPUx Data Protection Write Enable Register Set 5 */
#define CPU0_DPWE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF881E064u)

/** \brief E400, CPUx Temporal Protection System Control Register */
#define CPU0_TPS_CON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF881E400u)

/** \brief E404, CPUx Temporal Protection System Timer Register 0 */
#define CPU0_TPS_TIMER0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF881E404u)

/** \brief E408, CPUx Temporal Protection System Timer Register 1 */
#define CPU0_TPS_TIMER1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF881E408u)

/** \brief E40C, CPUx Temporal Protection System Timer Register 2 */
#define CPU0_TPS_TIMER2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF881E40Cu)

/** \brief E440, CPUx Exception Entry Timer Load Value */
#define CPU0_TPS_EXTIM_ENTRY_LVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_ENTRY_LVAL*)0xF881E440u)

/** \brief E444, CPUx Exception Entry Timer Current Value */
#define CPU0_TPS_EXTIM_ENTRY_CVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_ENTRY_CVAL*)0xF881E444u)

/** \brief E448, CPUx Exception Exit  Timer Load Value */
#define CPU0_TPS_EXTIM_EXIT_LVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_EXIT_LVAL*)0xF881E448u)

/** \brief E44C, CPUx Exception Exit Timer Current Value */
#define CPU0_TPS_EXTIM_EXIT_CVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_EXIT_CVAL*)0xF881E44Cu)

/** \brief E450, CPUx Exception Timer Class Enable Register */
#define CPU0_TPS_EXTIM_CLASS_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF881E450u)

/** \brief E454, CPUx Exception Timer Status Register */
#define CPU0_TPS_EXTIM_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF881E454u)

/** \brief E458, CPUx Exception Timer FCX Register */
#define CPU0_TPS_EXTIM_FCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF881E458u)

/** \brief F000, CPUx Trigger Event 0 */
#define CPU0_TR0_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F000u)
/** Alias (User Manual Name) for CPU0_TR0_EVT.
* To use register names with standard convension, please use CPU0_TR0_EVT.
*/
#define CPU0_TR0EVT (CPU0_TR0_EVT)

/** \brief F004, CPUx Trigger Address 0 */
#define CPU0_TR0_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F004u)
/** Alias (User Manual Name) for CPU0_TR0_ADR.
* To use register names with standard convension, please use CPU0_TR0_ADR.
*/
#define CPU0_TR0ADR (CPU0_TR0_ADR)

/** \brief F008, CPUx Trigger Event 1 */
#define CPU0_TR1_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F008u)
/** Alias (User Manual Name) for CPU0_TR1_EVT.
* To use register names with standard convension, please use CPU0_TR1_EVT.
*/
#define CPU0_TR1EVT (CPU0_TR1_EVT)

/** \brief F00C, CPUx Trigger Address 1 */
#define CPU0_TR1_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F00Cu)
/** Alias (User Manual Name) for CPU0_TR1_ADR.
* To use register names with standard convension, please use CPU0_TR1_ADR.
*/
#define CPU0_TR1ADR (CPU0_TR1_ADR)

/** \brief F010, CPUx Trigger Event 2 */
#define CPU0_TR2_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F010u)
/** Alias (User Manual Name) for CPU0_TR2_EVT.
* To use register names with standard convension, please use CPU0_TR2_EVT.
*/
#define CPU0_TR2EVT (CPU0_TR2_EVT)

/** \brief F014, CPUx Trigger Address 2 */
#define CPU0_TR2_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F014u)
/** Alias (User Manual Name) for CPU0_TR2_ADR.
* To use register names with standard convension, please use CPU0_TR2_ADR.
*/
#define CPU0_TR2ADR (CPU0_TR2_ADR)

/** \brief F018, CPUx Trigger Event 3 */
#define CPU0_TR3_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F018u)
/** Alias (User Manual Name) for CPU0_TR3_EVT.
* To use register names with standard convension, please use CPU0_TR3_EVT.
*/
#define CPU0_TR3EVT (CPU0_TR3_EVT)

/** \brief F01C, CPUx Trigger Address 3 */
#define CPU0_TR3_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F01Cu)
/** Alias (User Manual Name) for CPU0_TR3_ADR.
* To use register names with standard convension, please use CPU0_TR3_ADR.
*/
#define CPU0_TR3ADR (CPU0_TR3_ADR)

/** \brief F020, CPUx Trigger Event 4 */
#define CPU0_TR4_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F020u)
/** Alias (User Manual Name) for CPU0_TR4_EVT.
* To use register names with standard convension, please use CPU0_TR4_EVT.
*/
#define CPU0_TR4EVT (CPU0_TR4_EVT)

/** \brief F024, CPUx Trigger Address 4 */
#define CPU0_TR4_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F024u)
/** Alias (User Manual Name) for CPU0_TR4_ADR.
* To use register names with standard convension, please use CPU0_TR4_ADR.
*/
#define CPU0_TR4ADR (CPU0_TR4_ADR)

/** \brief F028, CPUx Trigger Event 5 */
#define CPU0_TR5_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F028u)
/** Alias (User Manual Name) for CPU0_TR5_EVT.
* To use register names with standard convension, please use CPU0_TR5_EVT.
*/
#define CPU0_TR5EVT (CPU0_TR5_EVT)

/** \brief F02C, CPUx Trigger Address 5 */
#define CPU0_TR5_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F02Cu)
/** Alias (User Manual Name) for CPU0_TR5_ADR.
* To use register names with standard convension, please use CPU0_TR5_ADR.
*/
#define CPU0_TR5ADR (CPU0_TR5_ADR)

/** \brief F030, CPUx Trigger Event 6 */
#define CPU0_TR6_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F030u)
/** Alias (User Manual Name) for CPU0_TR6_EVT.
* To use register names with standard convension, please use CPU0_TR6_EVT.
*/
#define CPU0_TR6EVT (CPU0_TR6_EVT)

/** \brief F034, CPUx Trigger Address 6 */
#define CPU0_TR6_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F034u)
/** Alias (User Manual Name) for CPU0_TR6_ADR.
* To use register names with standard convension, please use CPU0_TR6_ADR.
*/
#define CPU0_TR6ADR (CPU0_TR6_ADR)

/** \brief F038, CPUx Trigger Event 7 */
#define CPU0_TR7_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F038u)
/** Alias (User Manual Name) for CPU0_TR7_EVT.
* To use register names with standard convension, please use CPU0_TR7_EVT.
*/
#define CPU0_TR7EVT (CPU0_TR7_EVT)

/** \brief F03C, CPUx Trigger Address 7 */
#define CPU0_TR7_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F03Cu)
/** Alias (User Manual Name) for CPU0_TR7_ADR.
* To use register names with standard convension, please use CPU0_TR7_ADR.
*/
#define CPU0_TR7ADR (CPU0_TR7_ADR)

/** \brief FC00, CPUx Counter Control */
#define CPU0_CCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CCTRL*)0xF881FC00u)

/** \brief FC04, CPUx CPU Clock Cycle Count */
#define CPU0_CCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CCNT*)0xF881FC04u)

/** \brief FC08, CPUx Instruction Count */
#define CPU0_ICNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ICNT*)0xF881FC08u)

/** \brief FC0C, CPUx Multi-Count Register 1 */
#define CPU0_M1CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M1CNT*)0xF881FC0Cu)

/** \brief FC10, CPUx Multi-Count Register 2 */
#define CPU0_M2CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M2CNT*)0xF881FC10u)

/** \brief FC14, CPUx Multi-Count Register 3 */
#define CPU0_M3CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M3CNT*)0xF881FC14u)

/** \brief FD00, CPUx Debug Status Register */
#define CPU0_DBGSR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DBGSR*)0xF881FD00u)

/** \brief FD08, CPUx External Event Register */
#define CPU0_EXEVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_EXEVT*)0xF881FD08u)

/** \brief FD0C, CPUx Core Register Access Event */
#define CPU0_CREVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CREVT*)0xF881FD0Cu)

/** \brief FD10, CPUx Software Debug Event */
#define CPU0_SWEVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SWEVT*)0xF881FD10u)

/** \brief FD30, CPUx TriggerAddressx */
#define CPU0_TRIG_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF881FD30u)

/** \brief FD40, CPUx Debug Monitor Start Address */
#define CPU0_DMS /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DMS*)0xF881FD40u)

/** \brief FD44, CPUx Debug Context Save Area Pointer */
#define CPU0_DCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCX*)0xF881FD44u)

/** \brief FD48, CPUx Debug Trap Control Register */
#define CPU0_DBGTCR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF881FD48u)

/** \brief FE00, CPUx Previous Context Information Register */
#define CPU0_PCXI /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCXI*)0xF881FE00u)

/** \brief FE04, CPUx Program Status Word */
#define CPU0_PSW /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PSW*)0xF881FE04u)

/** \brief FE08, CPUx Program Counter */
#define CPU0_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PC*)0xF881FE08u)

/** \brief FE14, CPUx System Configuration Register */
#define CPU0_SYSCON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SYSCON*)0xF881FE14u)

/** \brief FE18, CPUx Identification Register TC1.6.2P */
#define CPU0_CPU_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF881FE18u)

/** \brief FE1C, CPUx Core Identification Register */
#define CPU0_CORE_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF881FE1Cu)

/** \brief FE20, CPUx Base Interrupt Vector Table Pointer */
#define CPU0_BIV /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BIV*)0xF881FE20u)

/** \brief FE24, CPUx Base Trap Vector Table Pointer */
#define CPU0_BTV /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BTV*)0xF881FE24u)

/** \brief FE28, CPUx Interrupt Stack Pointer */
#define CPU0_ISP /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ISP*)0xF881FE28u)

/** \brief FE2C, CPUx Interrupt Control Register */
#define CPU0_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ICR*)0xF881FE2Cu)

/** \brief FE38, CPUx Free CSA List Head Pointer */
#define CPU0_FCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FCX*)0xF881FE38u)

/** \brief FE3C, CPUx Free CSA List Limit Pointer */
#define CPU0_LCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LCX*)0xF881FE3Cu)

/** \brief FE50, CPUx Customer ID register */
#define CPU0_CUS_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF881FE50u)

/** \brief FF00, CPUx Data General Purpose Register 0 */
#define CPU0_D0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF00u)

/** \brief FF04, CPUx Data General Purpose Register 1 */
#define CPU0_D1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF04u)

/** \brief FF08, CPUx Data General Purpose Register 2 */
#define CPU0_D2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF08u)

/** \brief FF0C, CPUx Data General Purpose Register 3 */
#define CPU0_D3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF0Cu)

/** \brief FF10, CPUx Data General Purpose Register 4 */
#define CPU0_D4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF10u)

/** \brief FF14, CPUx Data General Purpose Register 5 */
#define CPU0_D5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF14u)

/** \brief FF18, CPUx Data General Purpose Register 6 */
#define CPU0_D6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF18u)

/** \brief FF1C, CPUx Data General Purpose Register 7 */
#define CPU0_D7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF1Cu)

/** \brief FF20, CPUx Data General Purpose Register 8 */
#define CPU0_D8 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF20u)

/** \brief FF24, CPUx Data General Purpose Register 9 */
#define CPU0_D9 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF24u)

/** \brief FF28, CPUx Data General Purpose Register 10 */
#define CPU0_D10 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF28u)

/** \brief FF2C, CPUx Data General Purpose Register 11 */
#define CPU0_D11 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF2Cu)

/** \brief FF30, CPUx Data General Purpose Register 12 */
#define CPU0_D12 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF30u)

/** \brief FF34, CPUx Data General Purpose Register 13 */
#define CPU0_D13 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF34u)

/** \brief FF38, CPUx Data General Purpose Register 14 */
#define CPU0_D14 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF38u)

/** \brief FF3C, CPUx Data General Purpose Register 15 */
#define CPU0_D15 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF881FF3Cu)

/** \brief FF80, CPUx Address General Purpose Register 0 */
#define CPU0_A0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FF80u)

/** \brief FF84, CPUx Address General Purpose Register 1 */
#define CPU0_A1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FF84u)

/** \brief FF88, CPUx Address General Purpose Register 2 */
#define CPU0_A2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FF88u)

/** \brief FF8C, CPUx Address General Purpose Register 3 */
#define CPU0_A3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FF8Cu)

/** \brief FF90, CPUx Address General Purpose Register 4 */
#define CPU0_A4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FF90u)

/** \brief FF94, CPUx Address General Purpose Register 5 */
#define CPU0_A5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FF94u)

/** \brief FF98, CPUx Address General Purpose Register 6 */
#define CPU0_A6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FF98u)

/** \brief FF9C, CPUx Address General Purpose Register 7 */
#define CPU0_A7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FF9Cu)

/** \brief FFA0, CPUx Address General Purpose Register 8 */
#define CPU0_A8 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FFA0u)

/** \brief FFA4, CPUx Address General Purpose Register 9 */
#define CPU0_A9 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FFA4u)

/** \brief FFA8, CPUx Address General Purpose Register 10 */
#define CPU0_A10 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FFA8u)

/** \brief FFAC, CPUx Address General Purpose Register 11 */
#define CPU0_A11 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FFACu)

/** \brief FFB0, CPUx Address General Purpose Register 12 */
#define CPU0_A12 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FFB0u)

/** \brief FFB4, CPUx Address General Purpose Register 13 */
#define CPU0_A13 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FFB4u)

/** \brief FFB8, CPUx Address General Purpose Register 14 */
#define CPU0_A14 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FFB8u)

/** \brief FFBC, CPUx Address General Purpose Register 15 */
#define CPU0_A15 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF881FFBCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_Registers_Cfg_Cpu1
 * \{  */
/** \brief 1100, CPUx Flash Configuration Register 0 */
#define CPU1_FLASHCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF8821100u)

/** \brief 1104, CPUx Flash Configuration Register 1 */
#define CPU1_FLASHCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF8821104u)

/** \brief 1108, CPUx Flash Configuration Register 2 */
#define CPU1_FLASHCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF8821108u)

/** \brief 110C, CPUx Flash Configuration Register 3 */
#define CPU1_FLASHCON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF882110Cu)

/** \brief 1110, CPUx Flash Configuration Register 4 */
#define CPU1_FLASHCON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON4*)0xF8821110u)

/** \brief D000, CPUx  Reset Register 0 */
#define CPU1_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRST0*)0xF882D000u)

/** \brief D004, CPUx  Reset Register 1 */
#define CPU1_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRST1*)0xF882D004u)

/** \brief D008, CPUx Reset Clear Register */
#define CPU1_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF882D008u)

/** \brief E000, CPUx  Safety Protection SPR Region Lower Address Register 0 */
#define CPU1_RGN0_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF882E000u)
/** Alias (User Manual Name) for CPU1_RGN0_LA.
* To use register names with standard convension, please use CPU1_RGN0_LA.
*/
#define CPU1_SPR_SPROT_RGNLA0 (CPU1_RGN0_LA)

/** \brief E004, CPUx  Safety protection SPR Region Upper Address Register 0 */
#define CPU1_RGN0_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF882E004u)
/** Alias (User Manual Name) for CPU1_RGN0_UA.
* To use register names with standard convension, please use CPU1_RGN0_UA.
*/
#define CPU1_SPR_SPROT_RGNUA0 (CPU1_RGN0_UA)

/** \brief E008, CPUx  Safety Protection Region SPR Write Access Enable Register A0 */
#define CPU1_RGN0_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF882E008u)
/** Alias (User Manual Name) for CPU1_RGN0_ACCENA.
* To use register names with standard convension, please use CPU1_RGN0_ACCENA.
*/
#define CPU1_SPR_SPROT_RGNACCENA0_W (CPU1_RGN0_ACCENA)

/** \brief E00C, CPUx  Safety Protection Region SPR Write Access Enable Register B0 */
#define CPU1_RGN0_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF882E00Cu)
/** Alias (User Manual Name) for CPU1_RGN0_ACCENB.
* To use register names with standard convension, please use CPU1_RGN0_ACCENB.
*/
#define CPU1_SPR_SPROT_RGNACCENB0_W (CPU1_RGN0_ACCENB)

/** \brief E010, CPUx  Safety Protection SPR Region Lower Address Register 1 */
#define CPU1_RGN1_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF882E010u)
/** Alias (User Manual Name) for CPU1_RGN1_LA.
* To use register names with standard convension, please use CPU1_RGN1_LA.
*/
#define CPU1_SPR_SPROT_RGNLA1 (CPU1_RGN1_LA)

/** \brief E014, CPUx  Safety protection SPR Region Upper Address Register 1 */
#define CPU1_RGN1_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF882E014u)
/** Alias (User Manual Name) for CPU1_RGN1_UA.
* To use register names with standard convension, please use CPU1_RGN1_UA.
*/
#define CPU1_SPR_SPROT_RGNUA1 (CPU1_RGN1_UA)

/** \brief E018, CPUx  Safety Protection Region SPR Write Access Enable Register A1 */
#define CPU1_RGN1_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF882E018u)
/** Alias (User Manual Name) for CPU1_RGN1_ACCENA.
* To use register names with standard convension, please use CPU1_RGN1_ACCENA.
*/
#define CPU1_SPR_SPROT_RGNACCENA1_W (CPU1_RGN1_ACCENA)

/** \brief E01C, CPUx  Safety Protection Region SPR Write Access Enable Register B1 */
#define CPU1_RGN1_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF882E01Cu)
/** Alias (User Manual Name) for CPU1_RGN1_ACCENB.
* To use register names with standard convension, please use CPU1_RGN1_ACCENB.
*/
#define CPU1_SPR_SPROT_RGNACCENB1_W (CPU1_RGN1_ACCENB)

/** \brief E020, CPUx  Safety Protection SPR Region Lower Address Register 2 */
#define CPU1_RGN2_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF882E020u)
/** Alias (User Manual Name) for CPU1_RGN2_LA.
* To use register names with standard convension, please use CPU1_RGN2_LA.
*/
#define CPU1_SPR_SPROT_RGNLA2 (CPU1_RGN2_LA)

/** \brief E024, CPUx  Safety protection SPR Region Upper Address Register 2 */
#define CPU1_RGN2_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF882E024u)
/** Alias (User Manual Name) for CPU1_RGN2_UA.
* To use register names with standard convension, please use CPU1_RGN2_UA.
*/
#define CPU1_SPR_SPROT_RGNUA2 (CPU1_RGN2_UA)

/** \brief E028, CPUx  Safety Protection Region SPR Write Access Enable Register A2 */
#define CPU1_RGN2_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF882E028u)
/** Alias (User Manual Name) for CPU1_RGN2_ACCENA.
* To use register names with standard convension, please use CPU1_RGN2_ACCENA.
*/
#define CPU1_SPR_SPROT_RGNACCENA2_W (CPU1_RGN2_ACCENA)

/** \brief E02C, CPUx  Safety Protection Region SPR Write Access Enable Register B2 */
#define CPU1_RGN2_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF882E02Cu)
/** Alias (User Manual Name) for CPU1_RGN2_ACCENB.
* To use register names with standard convension, please use CPU1_RGN2_ACCENB.
*/
#define CPU1_SPR_SPROT_RGNACCENB2_W (CPU1_RGN2_ACCENB)

/** \brief E030, CPUx  Safety Protection SPR Region Lower Address Register 3 */
#define CPU1_RGN3_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF882E030u)
/** Alias (User Manual Name) for CPU1_RGN3_LA.
* To use register names with standard convension, please use CPU1_RGN3_LA.
*/
#define CPU1_SPR_SPROT_RGNLA3 (CPU1_RGN3_LA)

/** \brief E034, CPUx  Safety protection SPR Region Upper Address Register 3 */
#define CPU1_RGN3_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF882E034u)
/** Alias (User Manual Name) for CPU1_RGN3_UA.
* To use register names with standard convension, please use CPU1_RGN3_UA.
*/
#define CPU1_SPR_SPROT_RGNUA3 (CPU1_RGN3_UA)

/** \brief E038, CPUx  Safety Protection Region SPR Write Access Enable Register A3 */
#define CPU1_RGN3_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF882E038u)
/** Alias (User Manual Name) for CPU1_RGN3_ACCENA.
* To use register names with standard convension, please use CPU1_RGN3_ACCENA.
*/
#define CPU1_SPR_SPROT_RGNACCENA3_W (CPU1_RGN3_ACCENA)

/** \brief E03C, CPUx  Safety Protection Region SPR Write Access Enable Register B3 */
#define CPU1_RGN3_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF882E03Cu)
/** Alias (User Manual Name) for CPU1_RGN3_ACCENB.
* To use register names with standard convension, please use CPU1_RGN3_ACCENB.
*/
#define CPU1_SPR_SPROT_RGNACCENB3_W (CPU1_RGN3_ACCENB)

/** \brief E040, CPUx  Safety Protection SPR Region Lower Address Register 4 */
#define CPU1_RGN4_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF882E040u)
/** Alias (User Manual Name) for CPU1_RGN4_LA.
* To use register names with standard convension, please use CPU1_RGN4_LA.
*/
#define CPU1_SPR_SPROT_RGNLA4 (CPU1_RGN4_LA)

/** \brief E044, CPUx  Safety protection SPR Region Upper Address Register 4 */
#define CPU1_RGN4_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF882E044u)
/** Alias (User Manual Name) for CPU1_RGN4_UA.
* To use register names with standard convension, please use CPU1_RGN4_UA.
*/
#define CPU1_SPR_SPROT_RGNUA4 (CPU1_RGN4_UA)

/** \brief E048, CPUx  Safety Protection Region SPR Write Access Enable Register A4 */
#define CPU1_RGN4_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF882E048u)
/** Alias (User Manual Name) for CPU1_RGN4_ACCENA.
* To use register names with standard convension, please use CPU1_RGN4_ACCENA.
*/
#define CPU1_SPR_SPROT_RGNACCENA4_W (CPU1_RGN4_ACCENA)

/** \brief E04C, CPUx  Safety Protection Region SPR Write Access Enable Register B4 */
#define CPU1_RGN4_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF882E04Cu)
/** Alias (User Manual Name) for CPU1_RGN4_ACCENB.
* To use register names with standard convension, please use CPU1_RGN4_ACCENB.
*/
#define CPU1_SPR_SPROT_RGNACCENB4_W (CPU1_RGN4_ACCENB)

/** \brief E050, CPUx  Safety Protection SPR Region Lower Address Register 5 */
#define CPU1_RGN5_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF882E050u)
/** Alias (User Manual Name) for CPU1_RGN5_LA.
* To use register names with standard convension, please use CPU1_RGN5_LA.
*/
#define CPU1_SPR_SPROT_RGNLA5 (CPU1_RGN5_LA)

/** \brief E054, CPUx  Safety protection SPR Region Upper Address Register 5 */
#define CPU1_RGN5_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF882E054u)
/** Alias (User Manual Name) for CPU1_RGN5_UA.
* To use register names with standard convension, please use CPU1_RGN5_UA.
*/
#define CPU1_SPR_SPROT_RGNUA5 (CPU1_RGN5_UA)

/** \brief E058, CPUx  Safety Protection Region SPR Write Access Enable Register A5 */
#define CPU1_RGN5_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF882E058u)
/** Alias (User Manual Name) for CPU1_RGN5_ACCENA.
* To use register names with standard convension, please use CPU1_RGN5_ACCENA.
*/
#define CPU1_SPR_SPROT_RGNACCENA5_W (CPU1_RGN5_ACCENA)

/** \brief E05C, CPUx  Safety Protection Region SPR Write Access Enable Register B5 */
#define CPU1_RGN5_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF882E05Cu)
/** Alias (User Manual Name) for CPU1_RGN5_ACCENB.
* To use register names with standard convension, please use CPU1_RGN5_ACCENB.
*/
#define CPU1_SPR_SPROT_RGNACCENB5_W (CPU1_RGN5_ACCENB)

/** \brief E060, CPUx  Safety Protection SPR Region Lower Address Register 6 */
#define CPU1_RGN6_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF882E060u)
/** Alias (User Manual Name) for CPU1_RGN6_LA.
* To use register names with standard convension, please use CPU1_RGN6_LA.
*/
#define CPU1_SPR_SPROT_RGNLA6 (CPU1_RGN6_LA)

/** \brief E064, CPUx  Safety protection SPR Region Upper Address Register 6 */
#define CPU1_RGN6_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF882E064u)
/** Alias (User Manual Name) for CPU1_RGN6_UA.
* To use register names with standard convension, please use CPU1_RGN6_UA.
*/
#define CPU1_SPR_SPROT_RGNUA6 (CPU1_RGN6_UA)

/** \brief E068, CPUx  Safety Protection Region SPR Write Access Enable Register A6 */
#define CPU1_RGN6_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF882E068u)
/** Alias (User Manual Name) for CPU1_RGN6_ACCENA.
* To use register names with standard convension, please use CPU1_RGN6_ACCENA.
*/
#define CPU1_SPR_SPROT_RGNACCENA6_W (CPU1_RGN6_ACCENA)

/** \brief E06C, CPUx  Safety Protection Region SPR Write Access Enable Register B6 */
#define CPU1_RGN6_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF882E06Cu)
/** Alias (User Manual Name) for CPU1_RGN6_ACCENB.
* To use register names with standard convension, please use CPU1_RGN6_ACCENB.
*/
#define CPU1_SPR_SPROT_RGNACCENB6_W (CPU1_RGN6_ACCENB)

/** \brief E070, CPUx  Safety Protection SPR Region Lower Address Register 7 */
#define CPU1_RGN7_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF882E070u)
/** Alias (User Manual Name) for CPU1_RGN7_LA.
* To use register names with standard convension, please use CPU1_RGN7_LA.
*/
#define CPU1_SPR_SPROT_RGNLA7 (CPU1_RGN7_LA)

/** \brief E074, CPUx  Safety protection SPR Region Upper Address Register 7 */
#define CPU1_RGN7_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF882E074u)
/** Alias (User Manual Name) for CPU1_RGN7_UA.
* To use register names with standard convension, please use CPU1_RGN7_UA.
*/
#define CPU1_SPR_SPROT_RGNUA7 (CPU1_RGN7_UA)

/** \brief E078, CPUx  Safety Protection Region SPR Write Access Enable Register A7 */
#define CPU1_RGN7_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF882E078u)
/** Alias (User Manual Name) for CPU1_RGN7_ACCENA.
* To use register names with standard convension, please use CPU1_RGN7_ACCENA.
*/
#define CPU1_SPR_SPROT_RGNACCENA7_W (CPU1_RGN7_ACCENA)

/** \brief E07C, CPUx  Safety Protection Region SPR Write Access Enable Register B7 */
#define CPU1_RGN7_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF882E07Cu)
/** Alias (User Manual Name) for CPU1_RGN7_ACCENB.
* To use register names with standard convension, please use CPU1_RGN7_ACCENB.
*/
#define CPU1_SPR_SPROT_RGNACCENB7_W (CPU1_RGN7_ACCENB)

/** \brief E088, CPUx Safety Protection Region SPR Read Access Enable Register A0 */
#define CPU1_SPR_SPROT_RGNACCENA_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF882E088u)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENA_R0.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENA_R0.
*/
#define CPU1_SPR_SPROT_RGNACCENA0_R (CPU1_SPR_SPROT_RGNACCENA_R0)

/** \brief E08C, CPUx Safety Protection Region SPR Read Access Enable Register B0 */
#define CPU1_SPR_SPROT_RGNACCENB_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF882E08Cu)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENB_R0.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENB_R0.
*/
#define CPU1_SPR_SPROT_RGNACCENB0_R (CPU1_SPR_SPROT_RGNACCENB_R0)

/** \brief E098, CPUx Safety Protection Region SPR Read Access Enable Register A1 */
#define CPU1_SPR_SPROT_RGNACCENA_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF882E098u)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENA_R1.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENA_R1.
*/
#define CPU1_SPR_SPROT_RGNACCENA1_R (CPU1_SPR_SPROT_RGNACCENA_R1)

/** \brief E09C, CPUx Safety Protection Region SPR Read Access Enable Register B1 */
#define CPU1_SPR_SPROT_RGNACCENB_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF882E09Cu)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENB_R1.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENB_R1.
*/
#define CPU1_SPR_SPROT_RGNACCENB1_R (CPU1_SPR_SPROT_RGNACCENB_R1)

/** \brief E0A8, CPUx Safety Protection Region SPR Read Access Enable Register A2 */
#define CPU1_SPR_SPROT_RGNACCENA_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF882E0A8u)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENA_R2.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENA_R2.
*/
#define CPU1_SPR_SPROT_RGNACCENA2_R (CPU1_SPR_SPROT_RGNACCENA_R2)

/** \brief E0AC, CPUx Safety Protection Region SPR Read Access Enable Register B2 */
#define CPU1_SPR_SPROT_RGNACCENB_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF882E0ACu)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENB_R2.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENB_R2.
*/
#define CPU1_SPR_SPROT_RGNACCENB2_R (CPU1_SPR_SPROT_RGNACCENB_R2)

/** \brief E0B8, CPUx Safety Protection Region SPR Read Access Enable Register A3 */
#define CPU1_SPR_SPROT_RGNACCENA_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF882E0B8u)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENA_R3.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENA_R3.
*/
#define CPU1_SPR_SPROT_RGNACCENA3_R (CPU1_SPR_SPROT_RGNACCENA_R3)

/** \brief E0BC, CPUx Safety Protection Region SPR Read Access Enable Register B3 */
#define CPU1_SPR_SPROT_RGNACCENB_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF882E0BCu)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENB_R3.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENB_R3.
*/
#define CPU1_SPR_SPROT_RGNACCENB3_R (CPU1_SPR_SPROT_RGNACCENB_R3)

/** \brief E0C8, CPUx Safety Protection Region SPR Read Access Enable Register A4 */
#define CPU1_SPR_SPROT_RGNACCENA_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF882E0C8u)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENA_R4.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENA_R4.
*/
#define CPU1_SPR_SPROT_RGNACCENA4_R (CPU1_SPR_SPROT_RGNACCENA_R4)

/** \brief E0CC, CPUx Safety Protection Region SPR Read Access Enable Register B4 */
#define CPU1_SPR_SPROT_RGNACCENB_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF882E0CCu)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENB_R4.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENB_R4.
*/
#define CPU1_SPR_SPROT_RGNACCENB4_R (CPU1_SPR_SPROT_RGNACCENB_R4)

/** \brief E0D8, CPUx Safety Protection Region SPR Read Access Enable Register A5 */
#define CPU1_SPR_SPROT_RGNACCENA_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF882E0D8u)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENA_R5.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENA_R5.
*/
#define CPU1_SPR_SPROT_RGNACCENA5_R (CPU1_SPR_SPROT_RGNACCENA_R5)

/** \brief E0DC, CPUx Safety Protection Region SPR Read Access Enable Register B5 */
#define CPU1_SPR_SPROT_RGNACCENB_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF882E0DCu)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENB_R5.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENB_R5.
*/
#define CPU1_SPR_SPROT_RGNACCENB5_R (CPU1_SPR_SPROT_RGNACCENB_R5)

/** \brief E0E8, CPUx Safety Protection Region SPR Read Access Enable Register A6 */
#define CPU1_SPR_SPROT_RGNACCENA_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF882E0E8u)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENA_R6.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENA_R6.
*/
#define CPU1_SPR_SPROT_RGNACCENA6_R (CPU1_SPR_SPROT_RGNACCENA_R6)

/** \brief E0EC, CPUx Safety Protection Region SPR Read Access Enable Register B6 */
#define CPU1_SPR_SPROT_RGNACCENB_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF882E0ECu)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENB_R6.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENB_R6.
*/
#define CPU1_SPR_SPROT_RGNACCENB6_R (CPU1_SPR_SPROT_RGNACCENB_R6)

/** \brief E0F8, CPUx Safety Protection Region SPR Read Access Enable Register A7 */
#define CPU1_SPR_SPROT_RGNACCENA_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF882E0F8u)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENA_R7.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENA_R7.
*/
#define CPU1_SPR_SPROT_RGNACCENA7_R (CPU1_SPR_SPROT_RGNACCENA_R7)

/** \brief E0FC, CPUx Safety Protection Region SPR Read Access Enable Register B7 */
#define CPU1_SPR_SPROT_RGNACCENB_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF882E0FCu)
/** Alias (User Manual Name) for CPU1_SPR_SPROT_RGNACCENB_R7.
* To use register names with standard convension, please use CPU1_SPR_SPROT_RGNACCENB_R7.
*/
#define CPU1_SPR_SPROT_RGNACCENB7_R (CPU1_SPR_SPROT_RGNACCENB_R7)

/** \brief E100, CPUx  Safety Protection Register Access Enable Register A */
#define CPU1_SFR_SPROT_ACCENA_W /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF882E100u)

/** \brief E104, CPUx  Safety Protection Region Access Enable Register B */
#define CPU1_SFR_SPROT_ACCENB_W /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF882E104u)

/** \brief E110, CPUx  Safety Protection Region LPB Read Access Enable Register A */
#define CPU1_LPB_SPROT_ACCENA_R /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF882E110u)

/** \brief E114, CPUx Safety Protection Region LPB Read Access Enable Register B */
#define CPU1_LPB_SPROT_ACCENB_R /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF882E114u)

/** \brief E200, CPUx  Safety Protection DLMU Region Lower Address Register 0 */
#define CPU1_DLMU_SPROT_RGNLA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF882E200u)

/** \brief E204, CPUx  Safety protection DLMU Region Upper Address Register 0 */
#define CPU1_DLMU_SPROT_RGNUA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF882E204u)

/** \brief E208, CPUx  Safety Protection Region DLMU Write Access Enable Register A0 */
#define CPU1_DLMU_SPROT_RGNACCENA_W0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF882E208u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_W0.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_W0.
*/
#define CPU1_DLMU_SPROT_RGNACCENA0_W (CPU1_DLMU_SPROT_RGNACCENA_W0)

/** \brief E20C, CPUx  Safety Protection Region DLMU Write Access Enable Register B0 */
#define CPU1_DLMU_SPROT_RGNACCENB_W0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF882E20Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_W0.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_W0.
*/
#define CPU1_DLMU_SPROT_RGNACCENB0_W (CPU1_DLMU_SPROT_RGNACCENB_W0)

/** \brief E210, CPUx  Safety Protection DLMU Region Lower Address Register 1 */
#define CPU1_DLMU_SPROT_RGNLA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF882E210u)

/** \brief E214, CPUx  Safety protection DLMU Region Upper Address Register 1 */
#define CPU1_DLMU_SPROT_RGNUA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF882E214u)

/** \brief E218, CPUx  Safety Protection Region DLMU Write Access Enable Register A1 */
#define CPU1_DLMU_SPROT_RGNACCENA_W1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF882E218u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_W1.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_W1.
*/
#define CPU1_DLMU_SPROT_RGNACCENA1_W (CPU1_DLMU_SPROT_RGNACCENA_W1)

/** \brief E21C, CPUx  Safety Protection Region DLMU Write Access Enable Register B1 */
#define CPU1_DLMU_SPROT_RGNACCENB_W1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF882E21Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_W1.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_W1.
*/
#define CPU1_DLMU_SPROT_RGNACCENB1_W (CPU1_DLMU_SPROT_RGNACCENB_W1)

/** \brief E220, CPUx  Safety Protection DLMU Region Lower Address Register 2 */
#define CPU1_DLMU_SPROT_RGNLA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF882E220u)

/** \brief E224, CPUx  Safety protection DLMU Region Upper Address Register 2 */
#define CPU1_DLMU_SPROT_RGNUA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF882E224u)

/** \brief E228, CPUx  Safety Protection Region DLMU Write Access Enable Register A2 */
#define CPU1_DLMU_SPROT_RGNACCENA_W2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF882E228u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_W2.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_W2.
*/
#define CPU1_DLMU_SPROT_RGNACCENA2_W (CPU1_DLMU_SPROT_RGNACCENA_W2)

/** \brief E22C, CPUx  Safety Protection Region DLMU Write Access Enable Register B2 */
#define CPU1_DLMU_SPROT_RGNACCENB_W2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF882E22Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_W2.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_W2.
*/
#define CPU1_DLMU_SPROT_RGNACCENB2_W (CPU1_DLMU_SPROT_RGNACCENB_W2)

/** \brief E230, CPUx  Safety Protection DLMU Region Lower Address Register 3 */
#define CPU1_DLMU_SPROT_RGNLA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF882E230u)

/** \brief E234, CPUx  Safety protection DLMU Region Upper Address Register 3 */
#define CPU1_DLMU_SPROT_RGNUA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF882E234u)

/** \brief E238, CPUx  Safety Protection Region DLMU Write Access Enable Register A3 */
#define CPU1_DLMU_SPROT_RGNACCENA_W3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF882E238u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_W3.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_W3.
*/
#define CPU1_DLMU_SPROT_RGNACCENA3_W (CPU1_DLMU_SPROT_RGNACCENA_W3)

/** \brief E23C, CPUx  Safety Protection Region DLMU Write Access Enable Register B3 */
#define CPU1_DLMU_SPROT_RGNACCENB_W3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF882E23Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_W3.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_W3.
*/
#define CPU1_DLMU_SPROT_RGNACCENB3_W (CPU1_DLMU_SPROT_RGNACCENB_W3)

/** \brief E240, CPUx  Safety Protection DLMU Region Lower Address Register 4 */
#define CPU1_DLMU_SPROT_RGNLA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF882E240u)

/** \brief E244, CPUx  Safety protection DLMU Region Upper Address Register 4 */
#define CPU1_DLMU_SPROT_RGNUA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF882E244u)

/** \brief E248, CPUx  Safety Protection Region DLMU Write Access Enable Register A4 */
#define CPU1_DLMU_SPROT_RGNACCENA_W4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF882E248u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_W4.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_W4.
*/
#define CPU1_DLMU_SPROT_RGNACCENA4_W (CPU1_DLMU_SPROT_RGNACCENA_W4)

/** \brief E24C, CPUx  Safety Protection Region DLMU Write Access Enable Register B4 */
#define CPU1_DLMU_SPROT_RGNACCENB_W4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF882E24Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_W4.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_W4.
*/
#define CPU1_DLMU_SPROT_RGNACCENB4_W (CPU1_DLMU_SPROT_RGNACCENB_W4)

/** \brief E250, CPUx  Safety Protection DLMU Region Lower Address Register 5 */
#define CPU1_DLMU_SPROT_RGNLA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF882E250u)

/** \brief E254, CPUx  Safety protection DLMU Region Upper Address Register 5 */
#define CPU1_DLMU_SPROT_RGNUA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF882E254u)

/** \brief E258, CPUx  Safety Protection Region DLMU Write Access Enable Register A5 */
#define CPU1_DLMU_SPROT_RGNACCENA_W5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF882E258u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_W5.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_W5.
*/
#define CPU1_DLMU_SPROT_RGNACCENA5_W (CPU1_DLMU_SPROT_RGNACCENA_W5)

/** \brief E25C, CPUx  Safety Protection Region DLMU Write Access Enable Register B5 */
#define CPU1_DLMU_SPROT_RGNACCENB_W5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF882E25Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_W5.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_W5.
*/
#define CPU1_DLMU_SPROT_RGNACCENB5_W (CPU1_DLMU_SPROT_RGNACCENB_W5)

/** \brief E260, CPUx  Safety Protection DLMU Region Lower Address Register 6 */
#define CPU1_DLMU_SPROT_RGNLA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF882E260u)

/** \brief E264, CPUx  Safety protection DLMU Region Upper Address Register 6 */
#define CPU1_DLMU_SPROT_RGNUA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF882E264u)

/** \brief E268, CPUx  Safety Protection Region DLMU Write Access Enable Register A6 */
#define CPU1_DLMU_SPROT_RGNACCENA_W6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF882E268u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_W6.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_W6.
*/
#define CPU1_DLMU_SPROT_RGNACCENA6_W (CPU1_DLMU_SPROT_RGNACCENA_W6)

/** \brief E26C, CPUx  Safety Protection Region DLMU Write Access Enable Register B6 */
#define CPU1_DLMU_SPROT_RGNACCENB_W6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF882E26Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_W6.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_W6.
*/
#define CPU1_DLMU_SPROT_RGNACCENB6_W (CPU1_DLMU_SPROT_RGNACCENB_W6)

/** \brief E270, CPUx  Safety Protection DLMU Region Lower Address Register 7 */
#define CPU1_DLMU_SPROT_RGNLA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF882E270u)

/** \brief E274, CPUx  Safety protection DLMU Region Upper Address Register 7 */
#define CPU1_DLMU_SPROT_RGNUA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF882E274u)

/** \brief E278, CPUx  Safety Protection Region DLMU Write Access Enable Register A7 */
#define CPU1_DLMU_SPROT_RGNACCENA_W7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF882E278u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_W7.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_W7.
*/
#define CPU1_DLMU_SPROT_RGNACCENA7_W (CPU1_DLMU_SPROT_RGNACCENA_W7)

/** \brief E27C, CPUx  Safety Protection Region DLMU Write Access Enable Register B7 */
#define CPU1_DLMU_SPROT_RGNACCENB_W7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF882E27Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_W7.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_W7.
*/
#define CPU1_DLMU_SPROT_RGNACCENB7_W (CPU1_DLMU_SPROT_RGNACCENB_W7)

/** \brief E288, CPUx Safety Protection Region DLMU Read Access Enable Register A0 */
#define CPU1_DLMU_SPROT_RGNACCENA_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF882E288u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_R0.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_R0.
*/
#define CPU1_DLMU_SPROT_RGNACCENA0_R (CPU1_DLMU_SPROT_RGNACCENA_R0)

/** \brief E28C, CPUx Safety Protection Region DLMU Read Access Enable Register B0 */
#define CPU1_DLMU_SPROT_RGNACCENB_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF882E28Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_R0.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_R0.
*/
#define CPU1_DLMU_SPROT_RGNACCENB0_R (CPU1_DLMU_SPROT_RGNACCENB_R0)

/** \brief E298, CPUx Safety Protection Region DLMU Read Access Enable Register A1 */
#define CPU1_DLMU_SPROT_RGNACCENA_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF882E298u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_R1.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_R1.
*/
#define CPU1_DLMU_SPROT_RGNACCENA1_R (CPU1_DLMU_SPROT_RGNACCENA_R1)

/** \brief E29C, CPUx Safety Protection Region DLMU Read Access Enable Register B1 */
#define CPU1_DLMU_SPROT_RGNACCENB_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF882E29Cu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_R1.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_R1.
*/
#define CPU1_DLMU_SPROT_RGNACCENB1_R (CPU1_DLMU_SPROT_RGNACCENB_R1)

/** \brief E2A8, CPUx Safety Protection Region DLMU Read Access Enable Register A2 */
#define CPU1_DLMU_SPROT_RGNACCENA_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF882E2A8u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_R2.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_R2.
*/
#define CPU1_DLMU_SPROT_RGNACCENA2_R (CPU1_DLMU_SPROT_RGNACCENA_R2)

/** \brief E2AC, CPUx Safety Protection Region DLMU Read Access Enable Register B2 */
#define CPU1_DLMU_SPROT_RGNACCENB_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF882E2ACu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_R2.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_R2.
*/
#define CPU1_DLMU_SPROT_RGNACCENB2_R (CPU1_DLMU_SPROT_RGNACCENB_R2)

/** \brief E2B8, CPUx Safety Protection Region DLMU Read Access Enable Register A3 */
#define CPU1_DLMU_SPROT_RGNACCENA_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF882E2B8u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_R3.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_R3.
*/
#define CPU1_DLMU_SPROT_RGNACCENA3_R (CPU1_DLMU_SPROT_RGNACCENA_R3)

/** \brief E2BC, CPUx Safety Protection Region DLMU Read Access Enable Register B3 */
#define CPU1_DLMU_SPROT_RGNACCENB_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF882E2BCu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_R3.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_R3.
*/
#define CPU1_DLMU_SPROT_RGNACCENB3_R (CPU1_DLMU_SPROT_RGNACCENB_R3)

/** \brief E2C8, CPUx Safety Protection Region DLMU Read Access Enable Register A4 */
#define CPU1_DLMU_SPROT_RGNACCENA_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF882E2C8u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_R4.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_R4.
*/
#define CPU1_DLMU_SPROT_RGNACCENA4_R (CPU1_DLMU_SPROT_RGNACCENA_R4)

/** \brief E2CC, CPUx Safety Protection Region DLMU Read Access Enable Register B4 */
#define CPU1_DLMU_SPROT_RGNACCENB_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF882E2CCu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_R4.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_R4.
*/
#define CPU1_DLMU_SPROT_RGNACCENB4_R (CPU1_DLMU_SPROT_RGNACCENB_R4)

/** \brief E2D8, CPUx Safety Protection Region DLMU Read Access Enable Register A5 */
#define CPU1_DLMU_SPROT_RGNACCENA_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF882E2D8u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_R5.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_R5.
*/
#define CPU1_DLMU_SPROT_RGNACCENA5_R (CPU1_DLMU_SPROT_RGNACCENA_R5)

/** \brief E2DC, CPUx Safety Protection Region DLMU Read Access Enable Register B5 */
#define CPU1_DLMU_SPROT_RGNACCENB_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF882E2DCu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_R5.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_R5.
*/
#define CPU1_DLMU_SPROT_RGNACCENB5_R (CPU1_DLMU_SPROT_RGNACCENB_R5)

/** \brief E2E8, CPUx Safety Protection Region DLMU Read Access Enable Register A6 */
#define CPU1_DLMU_SPROT_RGNACCENA_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF882E2E8u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_R6.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_R6.
*/
#define CPU1_DLMU_SPROT_RGNACCENA6_R (CPU1_DLMU_SPROT_RGNACCENA_R6)

/** \brief E2EC, CPUx Safety Protection Region DLMU Read Access Enable Register B6 */
#define CPU1_DLMU_SPROT_RGNACCENB_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF882E2ECu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_R6.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_R6.
*/
#define CPU1_DLMU_SPROT_RGNACCENB6_R (CPU1_DLMU_SPROT_RGNACCENB_R6)

/** \brief E2F8, CPUx Safety Protection Region DLMU Read Access Enable Register A7 */
#define CPU1_DLMU_SPROT_RGNACCENA_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF882E2F8u)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENA_R7.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENA_R7.
*/
#define CPU1_DLMU_SPROT_RGNACCENA7_R (CPU1_DLMU_SPROT_RGNACCENA_R7)

/** \brief E2FC, CPUx Safety Protection Region DLMU Read Access Enable Register B7 */
#define CPU1_DLMU_SPROT_RGNACCENB_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF882E2FCu)
/** Alias (User Manual Name) for CPU1_DLMU_SPROT_RGNACCENB_R7.
* To use register names with standard convension, please use CPU1_DLMU_SPROT_RGNACCENB_R7.
*/
#define CPU1_DLMU_SPROT_RGNACCENB7_R (CPU1_DLMU_SPROT_RGNACCENB_R7)

/** \brief FB00, CPUx  Overlay Range Select Register */
#define CPU1_OSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_OSEL*)0xF882FB00u)

/** \brief FB10, CPUx Redirected Address Base Register 0 */
#define CPU1_BLK0_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB10u)
/** Alias (User Manual Name) for CPU1_BLK0_RABR.
* To use register names with standard convension, please use CPU1_BLK0_RABR.
*/
#define CPU1_RABR0 (CPU1_BLK0_RABR)

/** \brief FB14, CPUx Overlay Target Address Register 0 */
#define CPU1_BLK0_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB14u)
/** Alias (User Manual Name) for CPU1_BLK0_OTAR.
* To use register names with standard convension, please use CPU1_BLK0_OTAR.
*/
#define CPU1_OTAR0 (CPU1_BLK0_OTAR)

/** \brief FB18, CPUx Overlay Mask Register 0 */
#define CPU1_BLK0_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB18u)
/** Alias (User Manual Name) for CPU1_BLK0_OMASK.
* To use register names with standard convension, please use CPU1_BLK0_OMASK.
*/
#define CPU1_OMASK0 (CPU1_BLK0_OMASK)

/** \brief FB1C, CPUx Redirected Address Base Register 1 */
#define CPU1_BLK1_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB1Cu)
/** Alias (User Manual Name) for CPU1_BLK1_RABR.
* To use register names with standard convension, please use CPU1_BLK1_RABR.
*/
#define CPU1_RABR1 (CPU1_BLK1_RABR)

/** \brief FB20, CPUx Overlay Target Address Register 1 */
#define CPU1_BLK1_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB20u)
/** Alias (User Manual Name) for CPU1_BLK1_OTAR.
* To use register names with standard convension, please use CPU1_BLK1_OTAR.
*/
#define CPU1_OTAR1 (CPU1_BLK1_OTAR)

/** \brief FB24, CPUx Overlay Mask Register 1 */
#define CPU1_BLK1_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB24u)
/** Alias (User Manual Name) for CPU1_BLK1_OMASK.
* To use register names with standard convension, please use CPU1_BLK1_OMASK.
*/
#define CPU1_OMASK1 (CPU1_BLK1_OMASK)

/** \brief FB28, CPUx Redirected Address Base Register 2 */
#define CPU1_BLK2_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB28u)
/** Alias (User Manual Name) for CPU1_BLK2_RABR.
* To use register names with standard convension, please use CPU1_BLK2_RABR.
*/
#define CPU1_RABR2 (CPU1_BLK2_RABR)

/** \brief FB2C, CPUx Overlay Target Address Register 2 */
#define CPU1_BLK2_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB2Cu)
/** Alias (User Manual Name) for CPU1_BLK2_OTAR.
* To use register names with standard convension, please use CPU1_BLK2_OTAR.
*/
#define CPU1_OTAR2 (CPU1_BLK2_OTAR)

/** \brief FB30, CPUx Overlay Mask Register 2 */
#define CPU1_BLK2_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB30u)
/** Alias (User Manual Name) for CPU1_BLK2_OMASK.
* To use register names with standard convension, please use CPU1_BLK2_OMASK.
*/
#define CPU1_OMASK2 (CPU1_BLK2_OMASK)

/** \brief FB34, CPUx Redirected Address Base Register 3 */
#define CPU1_BLK3_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB34u)
/** Alias (User Manual Name) for CPU1_BLK3_RABR.
* To use register names with standard convension, please use CPU1_BLK3_RABR.
*/
#define CPU1_RABR3 (CPU1_BLK3_RABR)

/** \brief FB38, CPUx Overlay Target Address Register 3 */
#define CPU1_BLK3_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB38u)
/** Alias (User Manual Name) for CPU1_BLK3_OTAR.
* To use register names with standard convension, please use CPU1_BLK3_OTAR.
*/
#define CPU1_OTAR3 (CPU1_BLK3_OTAR)

/** \brief FB3C, CPUx Overlay Mask Register 3 */
#define CPU1_BLK3_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB3Cu)
/** Alias (User Manual Name) for CPU1_BLK3_OMASK.
* To use register names with standard convension, please use CPU1_BLK3_OMASK.
*/
#define CPU1_OMASK3 (CPU1_BLK3_OMASK)

/** \brief FB40, CPUx Redirected Address Base Register 4 */
#define CPU1_BLK4_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB40u)
/** Alias (User Manual Name) for CPU1_BLK4_RABR.
* To use register names with standard convension, please use CPU1_BLK4_RABR.
*/
#define CPU1_RABR4 (CPU1_BLK4_RABR)

/** \brief FB44, CPUx Overlay Target Address Register 4 */
#define CPU1_BLK4_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB44u)
/** Alias (User Manual Name) for CPU1_BLK4_OTAR.
* To use register names with standard convension, please use CPU1_BLK4_OTAR.
*/
#define CPU1_OTAR4 (CPU1_BLK4_OTAR)

/** \brief FB48, CPUx Overlay Mask Register 4 */
#define CPU1_BLK4_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB48u)
/** Alias (User Manual Name) for CPU1_BLK4_OMASK.
* To use register names with standard convension, please use CPU1_BLK4_OMASK.
*/
#define CPU1_OMASK4 (CPU1_BLK4_OMASK)

/** \brief FB4C, CPUx Redirected Address Base Register 5 */
#define CPU1_BLK5_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB4Cu)
/** Alias (User Manual Name) for CPU1_BLK5_RABR.
* To use register names with standard convension, please use CPU1_BLK5_RABR.
*/
#define CPU1_RABR5 (CPU1_BLK5_RABR)

/** \brief FB50, CPUx Overlay Target Address Register 5 */
#define CPU1_BLK5_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB50u)
/** Alias (User Manual Name) for CPU1_BLK5_OTAR.
* To use register names with standard convension, please use CPU1_BLK5_OTAR.
*/
#define CPU1_OTAR5 (CPU1_BLK5_OTAR)

/** \brief FB54, CPUx Overlay Mask Register 5 */
#define CPU1_BLK5_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB54u)
/** Alias (User Manual Name) for CPU1_BLK5_OMASK.
* To use register names with standard convension, please use CPU1_BLK5_OMASK.
*/
#define CPU1_OMASK5 (CPU1_BLK5_OMASK)

/** \brief FB58, CPUx Redirected Address Base Register 6 */
#define CPU1_BLK6_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB58u)
/** Alias (User Manual Name) for CPU1_BLK6_RABR.
* To use register names with standard convension, please use CPU1_BLK6_RABR.
*/
#define CPU1_RABR6 (CPU1_BLK6_RABR)

/** \brief FB5C, CPUx Overlay Target Address Register 6 */
#define CPU1_BLK6_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB5Cu)
/** Alias (User Manual Name) for CPU1_BLK6_OTAR.
* To use register names with standard convension, please use CPU1_BLK6_OTAR.
*/
#define CPU1_OTAR6 (CPU1_BLK6_OTAR)

/** \brief FB60, CPUx Overlay Mask Register 6 */
#define CPU1_BLK6_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB60u)
/** Alias (User Manual Name) for CPU1_BLK6_OMASK.
* To use register names with standard convension, please use CPU1_BLK6_OMASK.
*/
#define CPU1_OMASK6 (CPU1_BLK6_OMASK)

/** \brief FB64, CPUx Redirected Address Base Register 7 */
#define CPU1_BLK7_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB64u)
/** Alias (User Manual Name) for CPU1_BLK7_RABR.
* To use register names with standard convension, please use CPU1_BLK7_RABR.
*/
#define CPU1_RABR7 (CPU1_BLK7_RABR)

/** \brief FB68, CPUx Overlay Target Address Register 7 */
#define CPU1_BLK7_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB68u)
/** Alias (User Manual Name) for CPU1_BLK7_OTAR.
* To use register names with standard convension, please use CPU1_BLK7_OTAR.
*/
#define CPU1_OTAR7 (CPU1_BLK7_OTAR)

/** \brief FB6C, CPUx Overlay Mask Register 7 */
#define CPU1_BLK7_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB6Cu)
/** Alias (User Manual Name) for CPU1_BLK7_OMASK.
* To use register names with standard convension, please use CPU1_BLK7_OMASK.
*/
#define CPU1_OMASK7 (CPU1_BLK7_OMASK)

/** \brief FB70, CPUx Redirected Address Base Register 8 */
#define CPU1_BLK8_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB70u)
/** Alias (User Manual Name) for CPU1_BLK8_RABR.
* To use register names with standard convension, please use CPU1_BLK8_RABR.
*/
#define CPU1_RABR8 (CPU1_BLK8_RABR)

/** \brief FB74, CPUx Overlay Target Address Register 8 */
#define CPU1_BLK8_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB74u)
/** Alias (User Manual Name) for CPU1_BLK8_OTAR.
* To use register names with standard convension, please use CPU1_BLK8_OTAR.
*/
#define CPU1_OTAR8 (CPU1_BLK8_OTAR)

/** \brief FB78, CPUx Overlay Mask Register 8 */
#define CPU1_BLK8_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB78u)
/** Alias (User Manual Name) for CPU1_BLK8_OMASK.
* To use register names with standard convension, please use CPU1_BLK8_OMASK.
*/
#define CPU1_OMASK8 (CPU1_BLK8_OMASK)

/** \brief FB7C, CPUx Redirected Address Base Register 9 */
#define CPU1_BLK9_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB7Cu)
/** Alias (User Manual Name) for CPU1_BLK9_RABR.
* To use register names with standard convension, please use CPU1_BLK9_RABR.
*/
#define CPU1_RABR9 (CPU1_BLK9_RABR)

/** \brief FB80, CPUx Overlay Target Address Register 9 */
#define CPU1_BLK9_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB80u)
/** Alias (User Manual Name) for CPU1_BLK9_OTAR.
* To use register names with standard convension, please use CPU1_BLK9_OTAR.
*/
#define CPU1_OTAR9 (CPU1_BLK9_OTAR)

/** \brief FB84, CPUx Overlay Mask Register 9 */
#define CPU1_BLK9_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB84u)
/** Alias (User Manual Name) for CPU1_BLK9_OMASK.
* To use register names with standard convension, please use CPU1_BLK9_OMASK.
*/
#define CPU1_OMASK9 (CPU1_BLK9_OMASK)

/** \brief FB88, CPUx Redirected Address Base Register 10 */
#define CPU1_BLK10_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB88u)
/** Alias (User Manual Name) for CPU1_BLK10_RABR.
* To use register names with standard convension, please use CPU1_BLK10_RABR.
*/
#define CPU1_RABR10 (CPU1_BLK10_RABR)

/** \brief FB8C, CPUx Overlay Target Address Register 10 */
#define CPU1_BLK10_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB8Cu)
/** Alias (User Manual Name) for CPU1_BLK10_OTAR.
* To use register names with standard convension, please use CPU1_BLK10_OTAR.
*/
#define CPU1_OTAR10 (CPU1_BLK10_OTAR)

/** \brief FB90, CPUx Overlay Mask Register 10 */
#define CPU1_BLK10_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB90u)
/** Alias (User Manual Name) for CPU1_BLK10_OMASK.
* To use register names with standard convension, please use CPU1_BLK10_OMASK.
*/
#define CPU1_OMASK10 (CPU1_BLK10_OMASK)

/** \brief FB94, CPUx Redirected Address Base Register 11 */
#define CPU1_BLK11_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FB94u)
/** Alias (User Manual Name) for CPU1_BLK11_RABR.
* To use register names with standard convension, please use CPU1_BLK11_RABR.
*/
#define CPU1_RABR11 (CPU1_BLK11_RABR)

/** \brief FB98, CPUx Overlay Target Address Register 11 */
#define CPU1_BLK11_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FB98u)
/** Alias (User Manual Name) for CPU1_BLK11_OTAR.
* To use register names with standard convension, please use CPU1_BLK11_OTAR.
*/
#define CPU1_OTAR11 (CPU1_BLK11_OTAR)

/** \brief FB9C, CPUx Overlay Mask Register 11 */
#define CPU1_BLK11_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FB9Cu)
/** Alias (User Manual Name) for CPU1_BLK11_OMASK.
* To use register names with standard convension, please use CPU1_BLK11_OMASK.
*/
#define CPU1_OMASK11 (CPU1_BLK11_OMASK)

/** \brief FBA0, CPUx Redirected Address Base Register 12 */
#define CPU1_BLK12_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FBA0u)
/** Alias (User Manual Name) for CPU1_BLK12_RABR.
* To use register names with standard convension, please use CPU1_BLK12_RABR.
*/
#define CPU1_RABR12 (CPU1_BLK12_RABR)

/** \brief FBA4, CPUx Overlay Target Address Register 12 */
#define CPU1_BLK12_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FBA4u)
/** Alias (User Manual Name) for CPU1_BLK12_OTAR.
* To use register names with standard convension, please use CPU1_BLK12_OTAR.
*/
#define CPU1_OTAR12 (CPU1_BLK12_OTAR)

/** \brief FBA8, CPUx Overlay Mask Register 12 */
#define CPU1_BLK12_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FBA8u)
/** Alias (User Manual Name) for CPU1_BLK12_OMASK.
* To use register names with standard convension, please use CPU1_BLK12_OMASK.
*/
#define CPU1_OMASK12 (CPU1_BLK12_OMASK)

/** \brief FBAC, CPUx Redirected Address Base Register 13 */
#define CPU1_BLK13_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FBACu)
/** Alias (User Manual Name) for CPU1_BLK13_RABR.
* To use register names with standard convension, please use CPU1_BLK13_RABR.
*/
#define CPU1_RABR13 (CPU1_BLK13_RABR)

/** \brief FBB0, CPUx Overlay Target Address Register 13 */
#define CPU1_BLK13_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FBB0u)
/** Alias (User Manual Name) for CPU1_BLK13_OTAR.
* To use register names with standard convension, please use CPU1_BLK13_OTAR.
*/
#define CPU1_OTAR13 (CPU1_BLK13_OTAR)

/** \brief FBB4, CPUx Overlay Mask Register 13 */
#define CPU1_BLK13_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FBB4u)
/** Alias (User Manual Name) for CPU1_BLK13_OMASK.
* To use register names with standard convension, please use CPU1_BLK13_OMASK.
*/
#define CPU1_OMASK13 (CPU1_BLK13_OMASK)

/** \brief FBB8, CPUx Redirected Address Base Register 14 */
#define CPU1_BLK14_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FBB8u)
/** Alias (User Manual Name) for CPU1_BLK14_RABR.
* To use register names with standard convension, please use CPU1_BLK14_RABR.
*/
#define CPU1_RABR14 (CPU1_BLK14_RABR)

/** \brief FBBC, CPUx Overlay Target Address Register 14 */
#define CPU1_BLK14_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FBBCu)
/** Alias (User Manual Name) for CPU1_BLK14_OTAR.
* To use register names with standard convension, please use CPU1_BLK14_OTAR.
*/
#define CPU1_OTAR14 (CPU1_BLK14_OTAR)

/** \brief FBC0, CPUx Overlay Mask Register 14 */
#define CPU1_BLK14_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FBC0u)
/** Alias (User Manual Name) for CPU1_BLK14_OMASK.
* To use register names with standard convension, please use CPU1_BLK14_OMASK.
*/
#define CPU1_OMASK14 (CPU1_BLK14_OMASK)

/** \brief FBC4, CPUx Redirected Address Base Register 15 */
#define CPU1_BLK15_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FBC4u)
/** Alias (User Manual Name) for CPU1_BLK15_RABR.
* To use register names with standard convension, please use CPU1_BLK15_RABR.
*/
#define CPU1_RABR15 (CPU1_BLK15_RABR)

/** \brief FBC8, CPUx Overlay Target Address Register 15 */
#define CPU1_BLK15_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FBC8u)
/** Alias (User Manual Name) for CPU1_BLK15_OTAR.
* To use register names with standard convension, please use CPU1_BLK15_OTAR.
*/
#define CPU1_OTAR15 (CPU1_BLK15_OTAR)

/** \brief FBCC, CPUx Overlay Mask Register 15 */
#define CPU1_BLK15_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FBCCu)
/** Alias (User Manual Name) for CPU1_BLK15_OMASK.
* To use register names with standard convension, please use CPU1_BLK15_OMASK.
*/
#define CPU1_OMASK15 (CPU1_BLK15_OMASK)

/** \brief FBD0, CPUx Redirected Address Base Register 16 */
#define CPU1_BLK16_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FBD0u)
/** Alias (User Manual Name) for CPU1_BLK16_RABR.
* To use register names with standard convension, please use CPU1_BLK16_RABR.
*/
#define CPU1_RABR16 (CPU1_BLK16_RABR)

/** \brief FBD4, CPUx Overlay Target Address Register 16 */
#define CPU1_BLK16_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FBD4u)
/** Alias (User Manual Name) for CPU1_BLK16_OTAR.
* To use register names with standard convension, please use CPU1_BLK16_OTAR.
*/
#define CPU1_OTAR16 (CPU1_BLK16_OTAR)

/** \brief FBD8, CPUx Overlay Mask Register 16 */
#define CPU1_BLK16_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FBD8u)
/** Alias (User Manual Name) for CPU1_BLK16_OMASK.
* To use register names with standard convension, please use CPU1_BLK16_OMASK.
*/
#define CPU1_OMASK16 (CPU1_BLK16_OMASK)

/** \brief FBDC, CPUx Redirected Address Base Register 17 */
#define CPU1_BLK17_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FBDCu)
/** Alias (User Manual Name) for CPU1_BLK17_RABR.
* To use register names with standard convension, please use CPU1_BLK17_RABR.
*/
#define CPU1_RABR17 (CPU1_BLK17_RABR)

/** \brief FBE0, CPUx Overlay Target Address Register 17 */
#define CPU1_BLK17_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FBE0u)
/** Alias (User Manual Name) for CPU1_BLK17_OTAR.
* To use register names with standard convension, please use CPU1_BLK17_OTAR.
*/
#define CPU1_OTAR17 (CPU1_BLK17_OTAR)

/** \brief FBE4, CPUx Overlay Mask Register 17 */
#define CPU1_BLK17_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FBE4u)
/** Alias (User Manual Name) for CPU1_BLK17_OMASK.
* To use register names with standard convension, please use CPU1_BLK17_OMASK.
*/
#define CPU1_OMASK17 (CPU1_BLK17_OMASK)

/** \brief FBE8, CPUx Redirected Address Base Register 18 */
#define CPU1_BLK18_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FBE8u)
/** Alias (User Manual Name) for CPU1_BLK18_RABR.
* To use register names with standard convension, please use CPU1_BLK18_RABR.
*/
#define CPU1_RABR18 (CPU1_BLK18_RABR)

/** \brief FBEC, CPUx Overlay Target Address Register 18 */
#define CPU1_BLK18_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FBECu)
/** Alias (User Manual Name) for CPU1_BLK18_OTAR.
* To use register names with standard convension, please use CPU1_BLK18_OTAR.
*/
#define CPU1_OTAR18 (CPU1_BLK18_OTAR)

/** \brief FBF0, CPUx Overlay Mask Register 18 */
#define CPU1_BLK18_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FBF0u)
/** Alias (User Manual Name) for CPU1_BLK18_OMASK.
* To use register names with standard convension, please use CPU1_BLK18_OMASK.
*/
#define CPU1_OMASK18 (CPU1_BLK18_OMASK)

/** \brief FBF4, CPUx Redirected Address Base Register 19 */
#define CPU1_BLK19_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FBF4u)
/** Alias (User Manual Name) for CPU1_BLK19_RABR.
* To use register names with standard convension, please use CPU1_BLK19_RABR.
*/
#define CPU1_RABR19 (CPU1_BLK19_RABR)

/** \brief FBF8, CPUx Overlay Target Address Register 19 */
#define CPU1_BLK19_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FBF8u)
/** Alias (User Manual Name) for CPU1_BLK19_OTAR.
* To use register names with standard convension, please use CPU1_BLK19_OTAR.
*/
#define CPU1_OTAR19 (CPU1_BLK19_OTAR)

/** \brief FBFC, CPUx Overlay Mask Register 19 */
#define CPU1_BLK19_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FBFCu)
/** Alias (User Manual Name) for CPU1_BLK19_OMASK.
* To use register names with standard convension, please use CPU1_BLK19_OMASK.
*/
#define CPU1_OMASK19 (CPU1_BLK19_OMASK)

/** \brief FC00, CPUx Redirected Address Base Register 20 */
#define CPU1_BLK20_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC00u)
/** Alias (User Manual Name) for CPU1_BLK20_RABR.
* To use register names with standard convension, please use CPU1_BLK20_RABR.
*/
#define CPU1_RABR20 (CPU1_BLK20_RABR)

/** \brief FC04, CPUx Overlay Target Address Register 20 */
#define CPU1_BLK20_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC04u)
/** Alias (User Manual Name) for CPU1_BLK20_OTAR.
* To use register names with standard convension, please use CPU1_BLK20_OTAR.
*/
#define CPU1_OTAR20 (CPU1_BLK20_OTAR)

/** \brief FC08, CPUx Overlay Mask Register 20 */
#define CPU1_BLK20_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC08u)
/** Alias (User Manual Name) for CPU1_BLK20_OMASK.
* To use register names with standard convension, please use CPU1_BLK20_OMASK.
*/
#define CPU1_OMASK20 (CPU1_BLK20_OMASK)

/** \brief FC0C, CPUx Redirected Address Base Register 21 */
#define CPU1_BLK21_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC0Cu)
/** Alias (User Manual Name) for CPU1_BLK21_RABR.
* To use register names with standard convension, please use CPU1_BLK21_RABR.
*/
#define CPU1_RABR21 (CPU1_BLK21_RABR)

/** \brief FC10, CPUx Overlay Target Address Register 21 */
#define CPU1_BLK21_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC10u)
/** Alias (User Manual Name) for CPU1_BLK21_OTAR.
* To use register names with standard convension, please use CPU1_BLK21_OTAR.
*/
#define CPU1_OTAR21 (CPU1_BLK21_OTAR)

/** \brief FC14, CPUx Overlay Mask Register 21 */
#define CPU1_BLK21_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC14u)
/** Alias (User Manual Name) for CPU1_BLK21_OMASK.
* To use register names with standard convension, please use CPU1_BLK21_OMASK.
*/
#define CPU1_OMASK21 (CPU1_BLK21_OMASK)

/** \brief FC18, CPUx Redirected Address Base Register 22 */
#define CPU1_BLK22_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC18u)
/** Alias (User Manual Name) for CPU1_BLK22_RABR.
* To use register names with standard convension, please use CPU1_BLK22_RABR.
*/
#define CPU1_RABR22 (CPU1_BLK22_RABR)

/** \brief FC1C, CPUx Overlay Target Address Register 22 */
#define CPU1_BLK22_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC1Cu)
/** Alias (User Manual Name) for CPU1_BLK22_OTAR.
* To use register names with standard convension, please use CPU1_BLK22_OTAR.
*/
#define CPU1_OTAR22 (CPU1_BLK22_OTAR)

/** \brief FC20, CPUx Overlay Mask Register 22 */
#define CPU1_BLK22_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC20u)
/** Alias (User Manual Name) for CPU1_BLK22_OMASK.
* To use register names with standard convension, please use CPU1_BLK22_OMASK.
*/
#define CPU1_OMASK22 (CPU1_BLK22_OMASK)

/** \brief FC24, CPUx Redirected Address Base Register 23 */
#define CPU1_BLK23_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC24u)
/** Alias (User Manual Name) for CPU1_BLK23_RABR.
* To use register names with standard convension, please use CPU1_BLK23_RABR.
*/
#define CPU1_RABR23 (CPU1_BLK23_RABR)

/** \brief FC28, CPUx Overlay Target Address Register 23 */
#define CPU1_BLK23_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC28u)
/** Alias (User Manual Name) for CPU1_BLK23_OTAR.
* To use register names with standard convension, please use CPU1_BLK23_OTAR.
*/
#define CPU1_OTAR23 (CPU1_BLK23_OTAR)

/** \brief FC2C, CPUx Overlay Mask Register 23 */
#define CPU1_BLK23_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC2Cu)
/** Alias (User Manual Name) for CPU1_BLK23_OMASK.
* To use register names with standard convension, please use CPU1_BLK23_OMASK.
*/
#define CPU1_OMASK23 (CPU1_BLK23_OMASK)

/** \brief FC30, CPUx Redirected Address Base Register 24 */
#define CPU1_BLK24_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC30u)
/** Alias (User Manual Name) for CPU1_BLK24_RABR.
* To use register names with standard convension, please use CPU1_BLK24_RABR.
*/
#define CPU1_RABR24 (CPU1_BLK24_RABR)

/** \brief FC34, CPUx Overlay Target Address Register 24 */
#define CPU1_BLK24_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC34u)
/** Alias (User Manual Name) for CPU1_BLK24_OTAR.
* To use register names with standard convension, please use CPU1_BLK24_OTAR.
*/
#define CPU1_OTAR24 (CPU1_BLK24_OTAR)

/** \brief FC38, CPUx Overlay Mask Register 24 */
#define CPU1_BLK24_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC38u)
/** Alias (User Manual Name) for CPU1_BLK24_OMASK.
* To use register names with standard convension, please use CPU1_BLK24_OMASK.
*/
#define CPU1_OMASK24 (CPU1_BLK24_OMASK)

/** \brief FC3C, CPUx Redirected Address Base Register 25 */
#define CPU1_BLK25_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC3Cu)
/** Alias (User Manual Name) for CPU1_BLK25_RABR.
* To use register names with standard convension, please use CPU1_BLK25_RABR.
*/
#define CPU1_RABR25 (CPU1_BLK25_RABR)

/** \brief FC40, CPUx Overlay Target Address Register 25 */
#define CPU1_BLK25_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC40u)
/** Alias (User Manual Name) for CPU1_BLK25_OTAR.
* To use register names with standard convension, please use CPU1_BLK25_OTAR.
*/
#define CPU1_OTAR25 (CPU1_BLK25_OTAR)

/** \brief FC44, CPUx Overlay Mask Register 25 */
#define CPU1_BLK25_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC44u)
/** Alias (User Manual Name) for CPU1_BLK25_OMASK.
* To use register names with standard convension, please use CPU1_BLK25_OMASK.
*/
#define CPU1_OMASK25 (CPU1_BLK25_OMASK)

/** \brief FC48, CPUx Redirected Address Base Register 26 */
#define CPU1_BLK26_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC48u)
/** Alias (User Manual Name) for CPU1_BLK26_RABR.
* To use register names with standard convension, please use CPU1_BLK26_RABR.
*/
#define CPU1_RABR26 (CPU1_BLK26_RABR)

/** \brief FC4C, CPUx Overlay Target Address Register 26 */
#define CPU1_BLK26_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC4Cu)
/** Alias (User Manual Name) for CPU1_BLK26_OTAR.
* To use register names with standard convension, please use CPU1_BLK26_OTAR.
*/
#define CPU1_OTAR26 (CPU1_BLK26_OTAR)

/** \brief FC50, CPUx Overlay Mask Register 26 */
#define CPU1_BLK26_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC50u)
/** Alias (User Manual Name) for CPU1_BLK26_OMASK.
* To use register names with standard convension, please use CPU1_BLK26_OMASK.
*/
#define CPU1_OMASK26 (CPU1_BLK26_OMASK)

/** \brief FC54, CPUx Redirected Address Base Register 27 */
#define CPU1_BLK27_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC54u)
/** Alias (User Manual Name) for CPU1_BLK27_RABR.
* To use register names with standard convension, please use CPU1_BLK27_RABR.
*/
#define CPU1_RABR27 (CPU1_BLK27_RABR)

/** \brief FC58, CPUx Overlay Target Address Register 27 */
#define CPU1_BLK27_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC58u)
/** Alias (User Manual Name) for CPU1_BLK27_OTAR.
* To use register names with standard convension, please use CPU1_BLK27_OTAR.
*/
#define CPU1_OTAR27 (CPU1_BLK27_OTAR)

/** \brief FC5C, CPUx Overlay Mask Register 27 */
#define CPU1_BLK27_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC5Cu)
/** Alias (User Manual Name) for CPU1_BLK27_OMASK.
* To use register names with standard convension, please use CPU1_BLK27_OMASK.
*/
#define CPU1_OMASK27 (CPU1_BLK27_OMASK)

/** \brief FC60, CPUx Redirected Address Base Register 28 */
#define CPU1_BLK28_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC60u)
/** Alias (User Manual Name) for CPU1_BLK28_RABR.
* To use register names with standard convension, please use CPU1_BLK28_RABR.
*/
#define CPU1_RABR28 (CPU1_BLK28_RABR)

/** \brief FC64, CPUx Overlay Target Address Register 28 */
#define CPU1_BLK28_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC64u)
/** Alias (User Manual Name) for CPU1_BLK28_OTAR.
* To use register names with standard convension, please use CPU1_BLK28_OTAR.
*/
#define CPU1_OTAR28 (CPU1_BLK28_OTAR)

/** \brief FC68, CPUx Overlay Mask Register 28 */
#define CPU1_BLK28_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC68u)
/** Alias (User Manual Name) for CPU1_BLK28_OMASK.
* To use register names with standard convension, please use CPU1_BLK28_OMASK.
*/
#define CPU1_OMASK28 (CPU1_BLK28_OMASK)

/** \brief FC6C, CPUx Redirected Address Base Register 29 */
#define CPU1_BLK29_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC6Cu)
/** Alias (User Manual Name) for CPU1_BLK29_RABR.
* To use register names with standard convension, please use CPU1_BLK29_RABR.
*/
#define CPU1_RABR29 (CPU1_BLK29_RABR)

/** \brief FC70, CPUx Overlay Target Address Register 29 */
#define CPU1_BLK29_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC70u)
/** Alias (User Manual Name) for CPU1_BLK29_OTAR.
* To use register names with standard convension, please use CPU1_BLK29_OTAR.
*/
#define CPU1_OTAR29 (CPU1_BLK29_OTAR)

/** \brief FC74, CPUx Overlay Mask Register 29 */
#define CPU1_BLK29_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC74u)
/** Alias (User Manual Name) for CPU1_BLK29_OMASK.
* To use register names with standard convension, please use CPU1_BLK29_OMASK.
*/
#define CPU1_OMASK29 (CPU1_BLK29_OMASK)

/** \brief FC78, CPUx Redirected Address Base Register 30 */
#define CPU1_BLK30_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC78u)
/** Alias (User Manual Name) for CPU1_BLK30_RABR.
* To use register names with standard convension, please use CPU1_BLK30_RABR.
*/
#define CPU1_RABR30 (CPU1_BLK30_RABR)

/** \brief FC7C, CPUx Overlay Target Address Register 30 */
#define CPU1_BLK30_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC7Cu)
/** Alias (User Manual Name) for CPU1_BLK30_OTAR.
* To use register names with standard convension, please use CPU1_BLK30_OTAR.
*/
#define CPU1_OTAR30 (CPU1_BLK30_OTAR)

/** \brief FC80, CPUx Overlay Mask Register 30 */
#define CPU1_BLK30_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC80u)
/** Alias (User Manual Name) for CPU1_BLK30_OMASK.
* To use register names with standard convension, please use CPU1_BLK30_OMASK.
*/
#define CPU1_OMASK30 (CPU1_BLK30_OMASK)

/** \brief FC84, CPUx Redirected Address Base Register 31 */
#define CPU1_BLK31_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF882FC84u)
/** Alias (User Manual Name) for CPU1_BLK31_RABR.
* To use register names with standard convension, please use CPU1_BLK31_RABR.
*/
#define CPU1_RABR31 (CPU1_BLK31_RABR)

/** \brief FC88, CPUx Overlay Target Address Register 31 */
#define CPU1_BLK31_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF882FC88u)
/** Alias (User Manual Name) for CPU1_BLK31_OTAR.
* To use register names with standard convension, please use CPU1_BLK31_OTAR.
*/
#define CPU1_OTAR31 (CPU1_BLK31_OTAR)

/** \brief FC8C, CPUx Overlay Mask Register 31 */
#define CPU1_BLK31_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF882FC8Cu)
/** Alias (User Manual Name) for CPU1_BLK31_OMASK.
* To use register names with standard convension, please use CPU1_BLK31_OMASK.
*/
#define CPU1_OMASK31 (CPU1_BLK31_OMASK)

/** \brief 1030, CPUx SRI Error Generation Register */
#define CPU1_SEGEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SEGEN*)0xF8831030u)

/** \brief 8004, CPUx Task Address Space Identifier Register */
#define CPU1_TASK_ASI /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF8838004u)

/** \brief 8100, CPUx Data Access CacheabilityRegister */
#define CPU1_PMA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA0*)0xF8838100u)

/** \brief 8104, CPUx Code Access CacheabilityRegister */
#define CPU1_PMA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA1*)0xF8838104u)

/** \brief 8108, CPUx  Peripheral Space Identifier register */
#define CPU1_PMA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA2*)0xF8838108u)

/** \brief 9000, CPUx Data Control Register 2 */
#define CPU1_DCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCON2*)0xF8839000u)

/** \brief 900C, CPUx SIST Mode Access Control Register */
#define CPU1_SMACON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SMACON*)0xF883900Cu)

/** \brief 9010, CPUx Data Synchronous Trap Register */
#define CPU1_DSTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DSTR*)0xF8839010u)

/** \brief 9018, CPUx Data Asynchronous Trap Register */
#define CPU1_DATR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DATR*)0xF8839018u)

/** \brief 901C, CPUx Data Error Address Register */
#define CPU1_DEADD /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DEADD*)0xF883901Cu)

/** \brief 9020, CPUx Data Integrity Error Address Register */
#define CPU1_DIEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DIEAR*)0xF8839020u)

/** \brief 9024, CPUx Data Integrity Error Trap Register */
#define CPU1_DIETR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DIETR*)0xF8839024u)

/** \brief 9040, CPUx Data Memory Control Register */
#define CPU1_DCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCON0*)0xF8839040u)

/** \brief 9200, CPUx Program Synchronous Trap Register */
#define CPU1_PSTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PSTR*)0xF8839200u)

/** \brief 9204, CPUx Program Control 1 */
#define CPU1_PCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON1*)0xF8839204u)

/** \brief 9208, CPUx Program Control 2 */
#define CPU1_PCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON2*)0xF8839208u)

/** \brief 920C, CPUx Program Control 0 */
#define CPU1_PCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON0*)0xF883920Cu)

/** \brief 9210, CPUx Program Integrity Error Address Register */
#define CPU1_PIEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PIEAR*)0xF8839210u)

/** \brief 9214, CPUx Program Integrity Error Trap Register */
#define CPU1_PIETR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PIETR*)0xF8839214u)

/** \brief 9400, CPUx Compatibility Control Register */
#define CPU1_COMPAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_COMPAT*)0xF8839400u)

/** \brief A000, CPUx Trap Control Register */
#define CPU1_FPU_TRAP_CON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF883A000u)

/** \brief A004, CPUx Trapping Instruction Program Counter Register */
#define CPU1_FPU_TRAP_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF883A004u)

/** \brief A008, CPUx Trapping Instruction Opcode Register */
#define CPU1_FPU_TRAP_OPC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF883A008u)

/** \brief A010, CPUx Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF883A010u)

/** \brief A014, CPUx Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF883A014u)

/** \brief A018, CPUx Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF883A018u)

/** \brief C000, CPUx Data Protection Range 0, Lower Bound Register */
#define CPU1_DPR0_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C000u)

/** \brief C004, CPUx Data Protection Range 0, Upper Bound Register */
#define CPU1_DPR0_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C004u)

/** \brief C008, CPUx Data Protection Range 1, Lower Bound Register */
#define CPU1_DPR1_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C008u)

/** \brief C00C, CPUx Data Protection Range 1, Upper Bound Register */
#define CPU1_DPR1_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C00Cu)

/** \brief C010, CPUx Data Protection Range 2, Lower Bound Register */
#define CPU1_DPR2_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C010u)

/** \brief C014, CPUx Data Protection Range 2, Upper Bound Register */
#define CPU1_DPR2_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C014u)

/** \brief C018, CPUx Data Protection Range 3, Lower Bound Register */
#define CPU1_DPR3_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C018u)

/** \brief C01C, CPUx Data Protection Range 3, Upper Bound Register */
#define CPU1_DPR3_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C01Cu)

/** \brief C020, CPUx Data Protection Range 4, Lower Bound Register */
#define CPU1_DPR4_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C020u)

/** \brief C024, CPUx Data Protection Range 4, Upper Bound Register */
#define CPU1_DPR4_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C024u)

/** \brief C028, CPUx Data Protection Range 5, Lower Bound Register */
#define CPU1_DPR5_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C028u)

/** \brief C02C, CPUx Data Protection Range 5, Upper Bound Register */
#define CPU1_DPR5_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C02Cu)

/** \brief C030, CPUx Data Protection Range 6, Lower Bound Register */
#define CPU1_DPR6_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C030u)

/** \brief C034, CPUx Data Protection Range 6, Upper Bound Register */
#define CPU1_DPR6_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C034u)

/** \brief C038, CPUx Data Protection Range 7, Lower Bound Register */
#define CPU1_DPR7_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C038u)

/** \brief C03C, CPUx Data Protection Range 7, Upper Bound Register */
#define CPU1_DPR7_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C03Cu)

/** \brief C040, CPUx Data Protection Range 8, Lower Bound Register */
#define CPU1_DPR8_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C040u)

/** \brief C044, CPUx Data Protection Range 8, Upper Bound Register */
#define CPU1_DPR8_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C044u)

/** \brief C048, CPUx Data Protection Range 9, Lower Bound Register */
#define CPU1_DPR9_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C048u)

/** \brief C04C, CPUx Data Protection Range 9, Upper Bound Register */
#define CPU1_DPR9_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C04Cu)

/** \brief C050, CPUx Data Protection Range 10, Lower Bound Register */
#define CPU1_DPR10_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C050u)

/** \brief C054, CPUx Data Protection Range 10, Upper Bound Register */
#define CPU1_DPR10_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C054u)

/** \brief C058, CPUx Data Protection Range 11, Lower Bound Register */
#define CPU1_DPR11_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C058u)

/** \brief C05C, CPUx Data Protection Range 11, Upper Bound Register */
#define CPU1_DPR11_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C05Cu)

/** \brief C060, CPUx Data Protection Range 12, Lower Bound Register */
#define CPU1_DPR12_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C060u)

/** \brief C064, CPUx Data Protection Range 12, Upper Bound Register */
#define CPU1_DPR12_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C064u)

/** \brief C068, CPUx Data Protection Range 13, Lower Bound Register */
#define CPU1_DPR13_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C068u)

/** \brief C06C, CPUx Data Protection Range 13, Upper Bound Register */
#define CPU1_DPR13_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C06Cu)

/** \brief C070, CPUx Data Protection Range 14, Lower Bound Register */
#define CPU1_DPR14_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C070u)

/** \brief C074, CPUx Data Protection Range 14, Upper Bound Register */
#define CPU1_DPR14_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C074u)

/** \brief C078, CPUx Data Protection Range 15, Lower Bound Register */
#define CPU1_DPR15_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C078u)

/** \brief C07C, CPUx Data Protection Range 15, Upper Bound Register */
#define CPU1_DPR15_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C07Cu)

/** \brief C080, CPUx Data Protection Range 16, Lower Bound Register */
#define CPU1_DPR16_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C080u)

/** \brief C084, CPUx Data Protection Range 16, Upper Bound Register */
#define CPU1_DPR16_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C084u)

/** \brief C088, CPUx Data Protection Range 17, Lower Bound Register */
#define CPU1_DPR17_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C088u)

/** \brief C08C, CPUx Data Protection Range 17, Upper Bound Register */
#define CPU1_DPR17_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C08Cu)

/** \brief D000, CPUx Code Protection Range 0 Lower Bound Register */
#define CPU1_CPR0_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D000u)

/** \brief D004, CPUx Code Protection Range 0 Upper Bound Register */
#define CPU1_CPR0_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D004u)

/** \brief D008, CPUx Code Protection Range 1 Lower Bound Register */
#define CPU1_CPR1_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D008u)

/** \brief D00C, CPUx Code Protection Range 1 Upper Bound Register */
#define CPU1_CPR1_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D00Cu)

/** \brief D010, CPUx Code Protection Range 2 Lower Bound Register */
#define CPU1_CPR2_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D010u)

/** \brief D014, CPUx Code Protection Range 2 Upper Bound Register */
#define CPU1_CPR2_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D014u)

/** \brief D018, CPUx Code Protection Range 3 Lower Bound Register */
#define CPU1_CPR3_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D018u)

/** \brief D01C, CPUx Code Protection Range 3 Upper Bound Register */
#define CPU1_CPR3_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D01Cu)

/** \brief D020, CPUx Code Protection Range 4 Lower Bound Register */
#define CPU1_CPR4_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D020u)

/** \brief D024, CPUx Code Protection Range 4 Upper Bound Register */
#define CPU1_CPR4_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D024u)

/** \brief D028, CPUx Code Protection Range 5 Lower Bound Register */
#define CPU1_CPR5_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D028u)

/** \brief D02C, CPUx Code Protection Range 5 Upper Bound Register */
#define CPU1_CPR5_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D02Cu)

/** \brief D030, CPUx Code Protection Range 6 Lower Bound Register */
#define CPU1_CPR6_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D030u)

/** \brief D034, CPUx Code Protection Range 6 Upper Bound Register */
#define CPU1_CPR6_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D034u)

/** \brief D038, CPUx Code Protection Range 7 Lower Bound Register */
#define CPU1_CPR7_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D038u)

/** \brief D03C, CPUx Code Protection Range 7 Upper Bound Register */
#define CPU1_CPR7_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D03Cu)

/** \brief D040, CPUx Code Protection Range 8 Lower Bound Register */
#define CPU1_CPR8_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D040u)

/** \brief D044, CPUx Code Protection Range 8 Upper Bound Register */
#define CPU1_CPR8_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D044u)

/** \brief D048, CPUx Code Protection Range 9 Lower Bound Register */
#define CPU1_CPR9_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D048u)

/** \brief D04C, CPUx Code Protection Range 9 Upper Bound Register */
#define CPU1_CPR9_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D04Cu)

/** \brief E000, CPUx Code Protection Execute Enable Register Set 0 */
#define CPU1_CPXE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF883E000u)

/** \brief E004, CPUx Code Protection Execute Enable Register Set 1 */
#define CPU1_CPXE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF883E004u)

/** \brief E008, CPUx Code Protection Execute Enable Register Set 2 */
#define CPU1_CPXE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF883E008u)

/** \brief E00C, CPUx Code Protection Execute Enable Register Set 3 */
#define CPU1_CPXE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF883E00Cu)

/** \brief E010, CPUx Data Protection Read Enable Register Set 0 */
#define CPU1_DPRE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF883E010u)

/** \brief E014, CPUx Data Protection Read Enable Register Set 1 */
#define CPU1_DPRE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF883E014u)

/** \brief E018, CPUx Data Protection Read Enable Register Set 2 */
#define CPU1_DPRE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF883E018u)

/** \brief E01C, CPUx Data Protection Read Enable Register Set 3 */
#define CPU1_DPRE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF883E01Cu)

/** \brief E020, CPUx Data Protection Write Enable Register Set 0 */
#define CPU1_DPWE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF883E020u)

/** \brief E024, CPUx Data Protection Write Enable Register Set 1 */
#define CPU1_DPWE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF883E024u)

/** \brief E028, CPUx Data Protection Write Enable Register Set 2 */
#define CPU1_DPWE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF883E028u)

/** \brief E02C, CPUx Data Protection Write Enable Register Set 3 */
#define CPU1_DPWE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF883E02Cu)

/** \brief E040, CPUx Code Protection Execute Enable Register Set 4 */
#define CPU1_CPXE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF883E040u)

/** \brief E044, CPUx Code Protection Execute Enable Register Set 5 */
#define CPU1_CPXE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF883E044u)

/** \brief E050, CPUx Data Protection Read Enable Register Set 4 */
#define CPU1_DPRE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF883E050u)

/** \brief E054, CPUx Data Protection Read Enable Register Set 5 */
#define CPU1_DPRE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF883E054u)

/** \brief E060, CPUx Data Protection Write Enable Register Set 4 */
#define CPU1_DPWE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF883E060u)

/** \brief E064, CPUx Data Protection Write Enable Register Set 5 */
#define CPU1_DPWE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF883E064u)

/** \brief E400, CPUx Temporal Protection System Control Register */
#define CPU1_TPS_CON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF883E400u)

/** \brief E404, CPUx Temporal Protection System Timer Register 0 */
#define CPU1_TPS_TIMER0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF883E404u)

/** \brief E408, CPUx Temporal Protection System Timer Register 1 */
#define CPU1_TPS_TIMER1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF883E408u)

/** \brief E40C, CPUx Temporal Protection System Timer Register 2 */
#define CPU1_TPS_TIMER2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF883E40Cu)

/** \brief E440, CPUx Exception Entry Timer Load Value */
#define CPU1_TPS_EXTIM_ENTRY_LVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_ENTRY_LVAL*)0xF883E440u)

/** \brief E444, CPUx Exception Entry Timer Current Value */
#define CPU1_TPS_EXTIM_ENTRY_CVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_ENTRY_CVAL*)0xF883E444u)

/** \brief E448, CPUx Exception Exit  Timer Load Value */
#define CPU1_TPS_EXTIM_EXIT_LVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_EXIT_LVAL*)0xF883E448u)

/** \brief E44C, CPUx Exception Exit Timer Current Value */
#define CPU1_TPS_EXTIM_EXIT_CVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_EXIT_CVAL*)0xF883E44Cu)

/** \brief E450, CPUx Exception Timer Class Enable Register */
#define CPU1_TPS_EXTIM_CLASS_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF883E450u)

/** \brief E454, CPUx Exception Timer Status Register */
#define CPU1_TPS_EXTIM_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF883E454u)

/** \brief E458, CPUx Exception Timer FCX Register */
#define CPU1_TPS_EXTIM_FCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF883E458u)

/** \brief F000, CPUx Trigger Event 0 */
#define CPU1_TR0_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F000u)
/** Alias (User Manual Name) for CPU1_TR0_EVT.
* To use register names with standard convension, please use CPU1_TR0_EVT.
*/
#define CPU1_TR0EVT (CPU1_TR0_EVT)

/** \brief F004, CPUx Trigger Address 0 */
#define CPU1_TR0_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F004u)
/** Alias (User Manual Name) for CPU1_TR0_ADR.
* To use register names with standard convension, please use CPU1_TR0_ADR.
*/
#define CPU1_TR0ADR (CPU1_TR0_ADR)

/** \brief F008, CPUx Trigger Event 1 */
#define CPU1_TR1_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F008u)
/** Alias (User Manual Name) for CPU1_TR1_EVT.
* To use register names with standard convension, please use CPU1_TR1_EVT.
*/
#define CPU1_TR1EVT (CPU1_TR1_EVT)

/** \brief F00C, CPUx Trigger Address 1 */
#define CPU1_TR1_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F00Cu)
/** Alias (User Manual Name) for CPU1_TR1_ADR.
* To use register names with standard convension, please use CPU1_TR1_ADR.
*/
#define CPU1_TR1ADR (CPU1_TR1_ADR)

/** \brief F010, CPUx Trigger Event 2 */
#define CPU1_TR2_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F010u)
/** Alias (User Manual Name) for CPU1_TR2_EVT.
* To use register names with standard convension, please use CPU1_TR2_EVT.
*/
#define CPU1_TR2EVT (CPU1_TR2_EVT)

/** \brief F014, CPUx Trigger Address 2 */
#define CPU1_TR2_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F014u)
/** Alias (User Manual Name) for CPU1_TR2_ADR.
* To use register names with standard convension, please use CPU1_TR2_ADR.
*/
#define CPU1_TR2ADR (CPU1_TR2_ADR)

/** \brief F018, CPUx Trigger Event 3 */
#define CPU1_TR3_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F018u)
/** Alias (User Manual Name) for CPU1_TR3_EVT.
* To use register names with standard convension, please use CPU1_TR3_EVT.
*/
#define CPU1_TR3EVT (CPU1_TR3_EVT)

/** \brief F01C, CPUx Trigger Address 3 */
#define CPU1_TR3_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F01Cu)
/** Alias (User Manual Name) for CPU1_TR3_ADR.
* To use register names with standard convension, please use CPU1_TR3_ADR.
*/
#define CPU1_TR3ADR (CPU1_TR3_ADR)

/** \brief F020, CPUx Trigger Event 4 */
#define CPU1_TR4_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F020u)
/** Alias (User Manual Name) for CPU1_TR4_EVT.
* To use register names with standard convension, please use CPU1_TR4_EVT.
*/
#define CPU1_TR4EVT (CPU1_TR4_EVT)

/** \brief F024, CPUx Trigger Address 4 */
#define CPU1_TR4_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F024u)
/** Alias (User Manual Name) for CPU1_TR4_ADR.
* To use register names with standard convension, please use CPU1_TR4_ADR.
*/
#define CPU1_TR4ADR (CPU1_TR4_ADR)

/** \brief F028, CPUx Trigger Event 5 */
#define CPU1_TR5_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F028u)
/** Alias (User Manual Name) for CPU1_TR5_EVT.
* To use register names with standard convension, please use CPU1_TR5_EVT.
*/
#define CPU1_TR5EVT (CPU1_TR5_EVT)

/** \brief F02C, CPUx Trigger Address 5 */
#define CPU1_TR5_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F02Cu)
/** Alias (User Manual Name) for CPU1_TR5_ADR.
* To use register names with standard convension, please use CPU1_TR5_ADR.
*/
#define CPU1_TR5ADR (CPU1_TR5_ADR)

/** \brief F030, CPUx Trigger Event 6 */
#define CPU1_TR6_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F030u)
/** Alias (User Manual Name) for CPU1_TR6_EVT.
* To use register names with standard convension, please use CPU1_TR6_EVT.
*/
#define CPU1_TR6EVT (CPU1_TR6_EVT)

/** \brief F034, CPUx Trigger Address 6 */
#define CPU1_TR6_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F034u)
/** Alias (User Manual Name) for CPU1_TR6_ADR.
* To use register names with standard convension, please use CPU1_TR6_ADR.
*/
#define CPU1_TR6ADR (CPU1_TR6_ADR)

/** \brief F038, CPUx Trigger Event 7 */
#define CPU1_TR7_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F038u)
/** Alias (User Manual Name) for CPU1_TR7_EVT.
* To use register names with standard convension, please use CPU1_TR7_EVT.
*/
#define CPU1_TR7EVT (CPU1_TR7_EVT)

/** \brief F03C, CPUx Trigger Address 7 */
#define CPU1_TR7_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F03Cu)
/** Alias (User Manual Name) for CPU1_TR7_ADR.
* To use register names with standard convension, please use CPU1_TR7_ADR.
*/
#define CPU1_TR7ADR (CPU1_TR7_ADR)

/** \brief FC00, CPUx Counter Control */
#define CPU1_CCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CCTRL*)0xF883FC00u)

/** \brief FC04, CPUx CPU Clock Cycle Count */
#define CPU1_CCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CCNT*)0xF883FC04u)

/** \brief FC08, CPUx Instruction Count */
#define CPU1_ICNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ICNT*)0xF883FC08u)

/** \brief FC0C, CPUx Multi-Count Register 1 */
#define CPU1_M1CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M1CNT*)0xF883FC0Cu)

/** \brief FC10, CPUx Multi-Count Register 2 */
#define CPU1_M2CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M2CNT*)0xF883FC10u)

/** \brief FC14, CPUx Multi-Count Register 3 */
#define CPU1_M3CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M3CNT*)0xF883FC14u)

/** \brief FD00, CPUx Debug Status Register */
#define CPU1_DBGSR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DBGSR*)0xF883FD00u)

/** \brief FD08, CPUx External Event Register */
#define CPU1_EXEVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_EXEVT*)0xF883FD08u)

/** \brief FD0C, CPUx Core Register Access Event */
#define CPU1_CREVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CREVT*)0xF883FD0Cu)

/** \brief FD10, CPUx Software Debug Event */
#define CPU1_SWEVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SWEVT*)0xF883FD10u)

/** \brief FD30, CPUx TriggerAddressx */
#define CPU1_TRIG_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF883FD30u)

/** \brief FD40, CPUx Debug Monitor Start Address */
#define CPU1_DMS /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DMS*)0xF883FD40u)

/** \brief FD44, CPUx Debug Context Save Area Pointer */
#define CPU1_DCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCX*)0xF883FD44u)

/** \brief FD48, CPUx Debug Trap Control Register */
#define CPU1_DBGTCR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF883FD48u)

/** \brief FE00, CPUx Previous Context Information Register */
#define CPU1_PCXI /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCXI*)0xF883FE00u)

/** \brief FE04, CPUx Program Status Word */
#define CPU1_PSW /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PSW*)0xF883FE04u)

/** \brief FE08, CPUx Program Counter */
#define CPU1_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PC*)0xF883FE08u)

/** \brief FE14, CPUx System Configuration Register */
#define CPU1_SYSCON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SYSCON*)0xF883FE14u)

/** \brief FE18, CPUx Identification Register TC1.6.2P */
#define CPU1_CPU_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF883FE18u)

/** \brief FE1C, CPUx Core Identification Register */
#define CPU1_CORE_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF883FE1Cu)

/** \brief FE20, CPUx Base Interrupt Vector Table Pointer */
#define CPU1_BIV /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BIV*)0xF883FE20u)

/** \brief FE24, CPUx Base Trap Vector Table Pointer */
#define CPU1_BTV /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BTV*)0xF883FE24u)

/** \brief FE28, CPUx Interrupt Stack Pointer */
#define CPU1_ISP /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ISP*)0xF883FE28u)

/** \brief FE2C, CPUx Interrupt Control Register */
#define CPU1_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ICR*)0xF883FE2Cu)

/** \brief FE38, CPUx Free CSA List Head Pointer */
#define CPU1_FCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FCX*)0xF883FE38u)

/** \brief FE3C, CPUx Free CSA List Limit Pointer */
#define CPU1_LCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LCX*)0xF883FE3Cu)

/** \brief FE50, CPUx Customer ID register */
#define CPU1_CUS_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF883FE50u)

/** \brief FF00, CPUx Data General Purpose Register 0 */
#define CPU1_D0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF00u)

/** \brief FF04, CPUx Data General Purpose Register 1 */
#define CPU1_D1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF04u)

/** \brief FF08, CPUx Data General Purpose Register 2 */
#define CPU1_D2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF08u)

/** \brief FF0C, CPUx Data General Purpose Register 3 */
#define CPU1_D3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF0Cu)

/** \brief FF10, CPUx Data General Purpose Register 4 */
#define CPU1_D4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF10u)

/** \brief FF14, CPUx Data General Purpose Register 5 */
#define CPU1_D5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF14u)

/** \brief FF18, CPUx Data General Purpose Register 6 */
#define CPU1_D6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF18u)

/** \brief FF1C, CPUx Data General Purpose Register 7 */
#define CPU1_D7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF1Cu)

/** \brief FF20, CPUx Data General Purpose Register 8 */
#define CPU1_D8 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF20u)

/** \brief FF24, CPUx Data General Purpose Register 9 */
#define CPU1_D9 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF24u)

/** \brief FF28, CPUx Data General Purpose Register 10 */
#define CPU1_D10 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF28u)

/** \brief FF2C, CPUx Data General Purpose Register 11 */
#define CPU1_D11 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF2Cu)

/** \brief FF30, CPUx Data General Purpose Register 12 */
#define CPU1_D12 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF30u)

/** \brief FF34, CPUx Data General Purpose Register 13 */
#define CPU1_D13 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF34u)

/** \brief FF38, CPUx Data General Purpose Register 14 */
#define CPU1_D14 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF38u)

/** \brief FF3C, CPUx Data General Purpose Register 15 */
#define CPU1_D15 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF883FF3Cu)

/** \brief FF80, CPUx Address General Purpose Register 0 */
#define CPU1_A0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FF80u)

/** \brief FF84, CPUx Address General Purpose Register 1 */
#define CPU1_A1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FF84u)

/** \brief FF88, CPUx Address General Purpose Register 2 */
#define CPU1_A2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FF88u)

/** \brief FF8C, CPUx Address General Purpose Register 3 */
#define CPU1_A3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FF8Cu)

/** \brief FF90, CPUx Address General Purpose Register 4 */
#define CPU1_A4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FF90u)

/** \brief FF94, CPUx Address General Purpose Register 5 */
#define CPU1_A5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FF94u)

/** \brief FF98, CPUx Address General Purpose Register 6 */
#define CPU1_A6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FF98u)

/** \brief FF9C, CPUx Address General Purpose Register 7 */
#define CPU1_A7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FF9Cu)

/** \brief FFA0, CPUx Address General Purpose Register 8 */
#define CPU1_A8 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FFA0u)

/** \brief FFA4, CPUx Address General Purpose Register 9 */
#define CPU1_A9 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FFA4u)

/** \brief FFA8, CPUx Address General Purpose Register 10 */
#define CPU1_A10 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FFA8u)

/** \brief FFAC, CPUx Address General Purpose Register 11 */
#define CPU1_A11 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FFACu)

/** \brief FFB0, CPUx Address General Purpose Register 12 */
#define CPU1_A12 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FFB0u)

/** \brief FFB4, CPUx Address General Purpose Register 13 */
#define CPU1_A13 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FFB4u)

/** \brief FFB8, CPUx Address General Purpose Register 14 */
#define CPU1_A14 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FFB8u)

/** \brief FFBC, CPUx Address General Purpose Register 15 */
#define CPU1_A15 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF883FFBCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Cpu_Registers_Cfg_Cpu2
 * \{  */
/** \brief 1100, CPUx Flash Configuration Register 0 */
#define CPU2_FLASHCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF8841100u)

/** \brief 1104, CPUx Flash Configuration Register 1 */
#define CPU2_FLASHCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF8841104u)

/** \brief 1108, CPUx Flash Configuration Register 2 */
#define CPU2_FLASHCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF8841108u)

/** \brief 110C, CPUx Flash Configuration Register 3 */
#define CPU2_FLASHCON3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF884110Cu)

/** \brief 1110, CPUx Flash Configuration Register 4 */
#define CPU2_FLASHCON4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FLASHCON4*)0xF8841110u)

/** \brief D000, CPUx  Reset Register 0 */
#define CPU2_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRST0*)0xF884D000u)

/** \brief D004, CPUx  Reset Register 1 */
#define CPU2_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRST1*)0xF884D004u)

/** \brief D008, CPUx Reset Clear Register */
#define CPU2_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF884D008u)

/** \brief E000, CPUx  Safety Protection SPR Region Lower Address Register 0 */
#define CPU2_RGN0_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF884E000u)
/** Alias (User Manual Name) for CPU2_RGN0_LA.
* To use register names with standard convension, please use CPU2_RGN0_LA.
*/
#define CPU2_SPR_SPROT_RGNLA0 (CPU2_RGN0_LA)

/** \brief E004, CPUx  Safety protection SPR Region Upper Address Register 0 */
#define CPU2_RGN0_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF884E004u)
/** Alias (User Manual Name) for CPU2_RGN0_UA.
* To use register names with standard convension, please use CPU2_RGN0_UA.
*/
#define CPU2_SPR_SPROT_RGNUA0 (CPU2_RGN0_UA)

/** \brief E008, CPUx  Safety Protection Region SPR Write Access Enable Register A0 */
#define CPU2_RGN0_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF884E008u)
/** Alias (User Manual Name) for CPU2_RGN0_ACCENA.
* To use register names with standard convension, please use CPU2_RGN0_ACCENA.
*/
#define CPU2_SPR_SPROT_RGNACCENA0_W (CPU2_RGN0_ACCENA)

/** \brief E00C, CPUx  Safety Protection Region SPR Write Access Enable Register B0 */
#define CPU2_RGN0_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF884E00Cu)
/** Alias (User Manual Name) for CPU2_RGN0_ACCENB.
* To use register names with standard convension, please use CPU2_RGN0_ACCENB.
*/
#define CPU2_SPR_SPROT_RGNACCENB0_W (CPU2_RGN0_ACCENB)

/** \brief E010, CPUx  Safety Protection SPR Region Lower Address Register 1 */
#define CPU2_RGN1_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF884E010u)
/** Alias (User Manual Name) for CPU2_RGN1_LA.
* To use register names with standard convension, please use CPU2_RGN1_LA.
*/
#define CPU2_SPR_SPROT_RGNLA1 (CPU2_RGN1_LA)

/** \brief E014, CPUx  Safety protection SPR Region Upper Address Register 1 */
#define CPU2_RGN1_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF884E014u)
/** Alias (User Manual Name) for CPU2_RGN1_UA.
* To use register names with standard convension, please use CPU2_RGN1_UA.
*/
#define CPU2_SPR_SPROT_RGNUA1 (CPU2_RGN1_UA)

/** \brief E018, CPUx  Safety Protection Region SPR Write Access Enable Register A1 */
#define CPU2_RGN1_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF884E018u)
/** Alias (User Manual Name) for CPU2_RGN1_ACCENA.
* To use register names with standard convension, please use CPU2_RGN1_ACCENA.
*/
#define CPU2_SPR_SPROT_RGNACCENA1_W (CPU2_RGN1_ACCENA)

/** \brief E01C, CPUx  Safety Protection Region SPR Write Access Enable Register B1 */
#define CPU2_RGN1_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF884E01Cu)
/** Alias (User Manual Name) for CPU2_RGN1_ACCENB.
* To use register names with standard convension, please use CPU2_RGN1_ACCENB.
*/
#define CPU2_SPR_SPROT_RGNACCENB1_W (CPU2_RGN1_ACCENB)

/** \brief E020, CPUx  Safety Protection SPR Region Lower Address Register 2 */
#define CPU2_RGN2_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF884E020u)
/** Alias (User Manual Name) for CPU2_RGN2_LA.
* To use register names with standard convension, please use CPU2_RGN2_LA.
*/
#define CPU2_SPR_SPROT_RGNLA2 (CPU2_RGN2_LA)

/** \brief E024, CPUx  Safety protection SPR Region Upper Address Register 2 */
#define CPU2_RGN2_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF884E024u)
/** Alias (User Manual Name) for CPU2_RGN2_UA.
* To use register names with standard convension, please use CPU2_RGN2_UA.
*/
#define CPU2_SPR_SPROT_RGNUA2 (CPU2_RGN2_UA)

/** \brief E028, CPUx  Safety Protection Region SPR Write Access Enable Register A2 */
#define CPU2_RGN2_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF884E028u)
/** Alias (User Manual Name) for CPU2_RGN2_ACCENA.
* To use register names with standard convension, please use CPU2_RGN2_ACCENA.
*/
#define CPU2_SPR_SPROT_RGNACCENA2_W (CPU2_RGN2_ACCENA)

/** \brief E02C, CPUx  Safety Protection Region SPR Write Access Enable Register B2 */
#define CPU2_RGN2_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF884E02Cu)
/** Alias (User Manual Name) for CPU2_RGN2_ACCENB.
* To use register names with standard convension, please use CPU2_RGN2_ACCENB.
*/
#define CPU2_SPR_SPROT_RGNACCENB2_W (CPU2_RGN2_ACCENB)

/** \brief E030, CPUx  Safety Protection SPR Region Lower Address Register 3 */
#define CPU2_RGN3_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF884E030u)
/** Alias (User Manual Name) for CPU2_RGN3_LA.
* To use register names with standard convension, please use CPU2_RGN3_LA.
*/
#define CPU2_SPR_SPROT_RGNLA3 (CPU2_RGN3_LA)

/** \brief E034, CPUx  Safety protection SPR Region Upper Address Register 3 */
#define CPU2_RGN3_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF884E034u)
/** Alias (User Manual Name) for CPU2_RGN3_UA.
* To use register names with standard convension, please use CPU2_RGN3_UA.
*/
#define CPU2_SPR_SPROT_RGNUA3 (CPU2_RGN3_UA)

/** \brief E038, CPUx  Safety Protection Region SPR Write Access Enable Register A3 */
#define CPU2_RGN3_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF884E038u)
/** Alias (User Manual Name) for CPU2_RGN3_ACCENA.
* To use register names with standard convension, please use CPU2_RGN3_ACCENA.
*/
#define CPU2_SPR_SPROT_RGNACCENA3_W (CPU2_RGN3_ACCENA)

/** \brief E03C, CPUx  Safety Protection Region SPR Write Access Enable Register B3 */
#define CPU2_RGN3_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF884E03Cu)
/** Alias (User Manual Name) for CPU2_RGN3_ACCENB.
* To use register names with standard convension, please use CPU2_RGN3_ACCENB.
*/
#define CPU2_SPR_SPROT_RGNACCENB3_W (CPU2_RGN3_ACCENB)

/** \brief E040, CPUx  Safety Protection SPR Region Lower Address Register 4 */
#define CPU2_RGN4_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF884E040u)
/** Alias (User Manual Name) for CPU2_RGN4_LA.
* To use register names with standard convension, please use CPU2_RGN4_LA.
*/
#define CPU2_SPR_SPROT_RGNLA4 (CPU2_RGN4_LA)

/** \brief E044, CPUx  Safety protection SPR Region Upper Address Register 4 */
#define CPU2_RGN4_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF884E044u)
/** Alias (User Manual Name) for CPU2_RGN4_UA.
* To use register names with standard convension, please use CPU2_RGN4_UA.
*/
#define CPU2_SPR_SPROT_RGNUA4 (CPU2_RGN4_UA)

/** \brief E048, CPUx  Safety Protection Region SPR Write Access Enable Register A4 */
#define CPU2_RGN4_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF884E048u)
/** Alias (User Manual Name) for CPU2_RGN4_ACCENA.
* To use register names with standard convension, please use CPU2_RGN4_ACCENA.
*/
#define CPU2_SPR_SPROT_RGNACCENA4_W (CPU2_RGN4_ACCENA)

/** \brief E04C, CPUx  Safety Protection Region SPR Write Access Enable Register B4 */
#define CPU2_RGN4_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF884E04Cu)
/** Alias (User Manual Name) for CPU2_RGN4_ACCENB.
* To use register names with standard convension, please use CPU2_RGN4_ACCENB.
*/
#define CPU2_SPR_SPROT_RGNACCENB4_W (CPU2_RGN4_ACCENB)

/** \brief E050, CPUx  Safety Protection SPR Region Lower Address Register 5 */
#define CPU2_RGN5_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF884E050u)
/** Alias (User Manual Name) for CPU2_RGN5_LA.
* To use register names with standard convension, please use CPU2_RGN5_LA.
*/
#define CPU2_SPR_SPROT_RGNLA5 (CPU2_RGN5_LA)

/** \brief E054, CPUx  Safety protection SPR Region Upper Address Register 5 */
#define CPU2_RGN5_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF884E054u)
/** Alias (User Manual Name) for CPU2_RGN5_UA.
* To use register names with standard convension, please use CPU2_RGN5_UA.
*/
#define CPU2_SPR_SPROT_RGNUA5 (CPU2_RGN5_UA)

/** \brief E058, CPUx  Safety Protection Region SPR Write Access Enable Register A5 */
#define CPU2_RGN5_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF884E058u)
/** Alias (User Manual Name) for CPU2_RGN5_ACCENA.
* To use register names with standard convension, please use CPU2_RGN5_ACCENA.
*/
#define CPU2_SPR_SPROT_RGNACCENA5_W (CPU2_RGN5_ACCENA)

/** \brief E05C, CPUx  Safety Protection Region SPR Write Access Enable Register B5 */
#define CPU2_RGN5_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF884E05Cu)
/** Alias (User Manual Name) for CPU2_RGN5_ACCENB.
* To use register names with standard convension, please use CPU2_RGN5_ACCENB.
*/
#define CPU2_SPR_SPROT_RGNACCENB5_W (CPU2_RGN5_ACCENB)

/** \brief E060, CPUx  Safety Protection SPR Region Lower Address Register 6 */
#define CPU2_RGN6_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF884E060u)
/** Alias (User Manual Name) for CPU2_RGN6_LA.
* To use register names with standard convension, please use CPU2_RGN6_LA.
*/
#define CPU2_SPR_SPROT_RGNLA6 (CPU2_RGN6_LA)

/** \brief E064, CPUx  Safety protection SPR Region Upper Address Register 6 */
#define CPU2_RGN6_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF884E064u)
/** Alias (User Manual Name) for CPU2_RGN6_UA.
* To use register names with standard convension, please use CPU2_RGN6_UA.
*/
#define CPU2_SPR_SPROT_RGNUA6 (CPU2_RGN6_UA)

/** \brief E068, CPUx  Safety Protection Region SPR Write Access Enable Register A6 */
#define CPU2_RGN6_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF884E068u)
/** Alias (User Manual Name) for CPU2_RGN6_ACCENA.
* To use register names with standard convension, please use CPU2_RGN6_ACCENA.
*/
#define CPU2_SPR_SPROT_RGNACCENA6_W (CPU2_RGN6_ACCENA)

/** \brief E06C, CPUx  Safety Protection Region SPR Write Access Enable Register B6 */
#define CPU2_RGN6_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF884E06Cu)
/** Alias (User Manual Name) for CPU2_RGN6_ACCENB.
* To use register names with standard convension, please use CPU2_RGN6_ACCENB.
*/
#define CPU2_SPR_SPROT_RGNACCENB6_W (CPU2_RGN6_ACCENB)

/** \brief E070, CPUx  Safety Protection SPR Region Lower Address Register 7 */
#define CPU2_RGN7_LA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_LA*)0xF884E070u)
/** Alias (User Manual Name) for CPU2_RGN7_LA.
* To use register names with standard convension, please use CPU2_RGN7_LA.
*/
#define CPU2_SPR_SPROT_RGNLA7 (CPU2_RGN7_LA)

/** \brief E074, CPUx  Safety protection SPR Region Upper Address Register 7 */
#define CPU2_RGN7_UA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_UA*)0xF884E074u)
/** Alias (User Manual Name) for CPU2_RGN7_UA.
* To use register names with standard convension, please use CPU2_RGN7_UA.
*/
#define CPU2_SPR_SPROT_RGNUA7 (CPU2_RGN7_UA)

/** \brief E078, CPUx  Safety Protection Region SPR Write Access Enable Register A7 */
#define CPU2_RGN7_ACCENA /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENA*)0xF884E078u)
/** Alias (User Manual Name) for CPU2_RGN7_ACCENA.
* To use register names with standard convension, please use CPU2_RGN7_ACCENA.
*/
#define CPU2_SPR_SPROT_RGNACCENA7_W (CPU2_RGN7_ACCENA)

/** \brief E07C, CPUx  Safety Protection Region SPR Write Access Enable Register B7 */
#define CPU2_RGN7_ACCENB /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_RGN_ACCENB*)0xF884E07Cu)
/** Alias (User Manual Name) for CPU2_RGN7_ACCENB.
* To use register names with standard convension, please use CPU2_RGN7_ACCENB.
*/
#define CPU2_SPR_SPROT_RGNACCENB7_W (CPU2_RGN7_ACCENB)

/** \brief E088, CPUx Safety Protection Region SPR Read Access Enable Register A0 */
#define CPU2_SPR_SPROT_RGNACCENA_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF884E088u)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENA_R0.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENA_R0.
*/
#define CPU2_SPR_SPROT_RGNACCENA0_R (CPU2_SPR_SPROT_RGNACCENA_R0)

/** \brief E08C, CPUx Safety Protection Region SPR Read Access Enable Register B0 */
#define CPU2_SPR_SPROT_RGNACCENB_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF884E08Cu)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENB_R0.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENB_R0.
*/
#define CPU2_SPR_SPROT_RGNACCENB0_R (CPU2_SPR_SPROT_RGNACCENB_R0)

/** \brief E098, CPUx Safety Protection Region SPR Read Access Enable Register A1 */
#define CPU2_SPR_SPROT_RGNACCENA_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF884E098u)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENA_R1.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENA_R1.
*/
#define CPU2_SPR_SPROT_RGNACCENA1_R (CPU2_SPR_SPROT_RGNACCENA_R1)

/** \brief E09C, CPUx Safety Protection Region SPR Read Access Enable Register B1 */
#define CPU2_SPR_SPROT_RGNACCENB_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF884E09Cu)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENB_R1.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENB_R1.
*/
#define CPU2_SPR_SPROT_RGNACCENB1_R (CPU2_SPR_SPROT_RGNACCENB_R1)

/** \brief E0A8, CPUx Safety Protection Region SPR Read Access Enable Register A2 */
#define CPU2_SPR_SPROT_RGNACCENA_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF884E0A8u)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENA_R2.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENA_R2.
*/
#define CPU2_SPR_SPROT_RGNACCENA2_R (CPU2_SPR_SPROT_RGNACCENA_R2)

/** \brief E0AC, CPUx Safety Protection Region SPR Read Access Enable Register B2 */
#define CPU2_SPR_SPROT_RGNACCENB_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF884E0ACu)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENB_R2.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENB_R2.
*/
#define CPU2_SPR_SPROT_RGNACCENB2_R (CPU2_SPR_SPROT_RGNACCENB_R2)

/** \brief E0B8, CPUx Safety Protection Region SPR Read Access Enable Register A3 */
#define CPU2_SPR_SPROT_RGNACCENA_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF884E0B8u)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENA_R3.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENA_R3.
*/
#define CPU2_SPR_SPROT_RGNACCENA3_R (CPU2_SPR_SPROT_RGNACCENA_R3)

/** \brief E0BC, CPUx Safety Protection Region SPR Read Access Enable Register B3 */
#define CPU2_SPR_SPROT_RGNACCENB_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF884E0BCu)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENB_R3.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENB_R3.
*/
#define CPU2_SPR_SPROT_RGNACCENB3_R (CPU2_SPR_SPROT_RGNACCENB_R3)

/** \brief E0C8, CPUx Safety Protection Region SPR Read Access Enable Register A4 */
#define CPU2_SPR_SPROT_RGNACCENA_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF884E0C8u)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENA_R4.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENA_R4.
*/
#define CPU2_SPR_SPROT_RGNACCENA4_R (CPU2_SPR_SPROT_RGNACCENA_R4)

/** \brief E0CC, CPUx Safety Protection Region SPR Read Access Enable Register B4 */
#define CPU2_SPR_SPROT_RGNACCENB_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF884E0CCu)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENB_R4.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENB_R4.
*/
#define CPU2_SPR_SPROT_RGNACCENB4_R (CPU2_SPR_SPROT_RGNACCENB_R4)

/** \brief E0D8, CPUx Safety Protection Region SPR Read Access Enable Register A5 */
#define CPU2_SPR_SPROT_RGNACCENA_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF884E0D8u)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENA_R5.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENA_R5.
*/
#define CPU2_SPR_SPROT_RGNACCENA5_R (CPU2_SPR_SPROT_RGNACCENA_R5)

/** \brief E0DC, CPUx Safety Protection Region SPR Read Access Enable Register B5 */
#define CPU2_SPR_SPROT_RGNACCENB_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF884E0DCu)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENB_R5.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENB_R5.
*/
#define CPU2_SPR_SPROT_RGNACCENB5_R (CPU2_SPR_SPROT_RGNACCENB_R5)

/** \brief E0E8, CPUx Safety Protection Region SPR Read Access Enable Register A6 */
#define CPU2_SPR_SPROT_RGNACCENA_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF884E0E8u)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENA_R6.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENA_R6.
*/
#define CPU2_SPR_SPROT_RGNACCENA6_R (CPU2_SPR_SPROT_RGNACCENA_R6)

/** \brief E0EC, CPUx Safety Protection Region SPR Read Access Enable Register B6 */
#define CPU2_SPR_SPROT_RGNACCENB_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF884E0ECu)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENB_R6.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENB_R6.
*/
#define CPU2_SPR_SPROT_RGNACCENB6_R (CPU2_SPR_SPROT_RGNACCENB_R6)

/** \brief E0F8, CPUx Safety Protection Region SPR Read Access Enable Register A7 */
#define CPU2_SPR_SPROT_RGNACCENA_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA_R*)0xF884E0F8u)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENA_R7.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENA_R7.
*/
#define CPU2_SPR_SPROT_RGNACCENA7_R (CPU2_SPR_SPROT_RGNACCENA_R7)

/** \brief E0FC, CPUx Safety Protection Region SPR Read Access Enable Register B7 */
#define CPU2_SPR_SPROT_RGNACCENB_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB_R*)0xF884E0FCu)
/** Alias (User Manual Name) for CPU2_SPR_SPROT_RGNACCENB_R7.
* To use register names with standard convension, please use CPU2_SPR_SPROT_RGNACCENB_R7.
*/
#define CPU2_SPR_SPROT_RGNACCENB7_R (CPU2_SPR_SPROT_RGNACCENB_R7)

/** \brief E100, CPUx  Safety Protection Register Access Enable Register A */
#define CPU2_SFR_SPROT_ACCENA_W /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF884E100u)

/** \brief E104, CPUx  Safety Protection Region Access Enable Register B */
#define CPU2_SFR_SPROT_ACCENB_W /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF884E104u)

/** \brief E110, CPUx  Safety Protection Region LPB Read Access Enable Register A */
#define CPU2_LPB_SPROT_ACCENA_R /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF884E110u)

/** \brief E114, CPUx Safety Protection Region LPB Read Access Enable Register B */
#define CPU2_LPB_SPROT_ACCENB_R /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF884E114u)

/** \brief E200, CPUx  Safety Protection DLMU Region Lower Address Register 0 */
#define CPU2_DLMU_SPROT_RGNLA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF884E200u)

/** \brief E204, CPUx  Safety protection DLMU Region Upper Address Register 0 */
#define CPU2_DLMU_SPROT_RGNUA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF884E204u)

/** \brief E208, CPUx  Safety Protection Region DLMU Write Access Enable Register A0 */
#define CPU2_DLMU_SPROT_RGNACCENA_W0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF884E208u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_W0.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_W0.
*/
#define CPU2_DLMU_SPROT_RGNACCENA0_W (CPU2_DLMU_SPROT_RGNACCENA_W0)

/** \brief E20C, CPUx  Safety Protection Region DLMU Write Access Enable Register B0 */
#define CPU2_DLMU_SPROT_RGNACCENB_W0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF884E20Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_W0.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_W0.
*/
#define CPU2_DLMU_SPROT_RGNACCENB0_W (CPU2_DLMU_SPROT_RGNACCENB_W0)

/** \brief E210, CPUx  Safety Protection DLMU Region Lower Address Register 1 */
#define CPU2_DLMU_SPROT_RGNLA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF884E210u)

/** \brief E214, CPUx  Safety protection DLMU Region Upper Address Register 1 */
#define CPU2_DLMU_SPROT_RGNUA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF884E214u)

/** \brief E218, CPUx  Safety Protection Region DLMU Write Access Enable Register A1 */
#define CPU2_DLMU_SPROT_RGNACCENA_W1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF884E218u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_W1.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_W1.
*/
#define CPU2_DLMU_SPROT_RGNACCENA1_W (CPU2_DLMU_SPROT_RGNACCENA_W1)

/** \brief E21C, CPUx  Safety Protection Region DLMU Write Access Enable Register B1 */
#define CPU2_DLMU_SPROT_RGNACCENB_W1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF884E21Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_W1.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_W1.
*/
#define CPU2_DLMU_SPROT_RGNACCENB1_W (CPU2_DLMU_SPROT_RGNACCENB_W1)

/** \brief E220, CPUx  Safety Protection DLMU Region Lower Address Register 2 */
#define CPU2_DLMU_SPROT_RGNLA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF884E220u)

/** \brief E224, CPUx  Safety protection DLMU Region Upper Address Register 2 */
#define CPU2_DLMU_SPROT_RGNUA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF884E224u)

/** \brief E228, CPUx  Safety Protection Region DLMU Write Access Enable Register A2 */
#define CPU2_DLMU_SPROT_RGNACCENA_W2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF884E228u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_W2.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_W2.
*/
#define CPU2_DLMU_SPROT_RGNACCENA2_W (CPU2_DLMU_SPROT_RGNACCENA_W2)

/** \brief E22C, CPUx  Safety Protection Region DLMU Write Access Enable Register B2 */
#define CPU2_DLMU_SPROT_RGNACCENB_W2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF884E22Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_W2.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_W2.
*/
#define CPU2_DLMU_SPROT_RGNACCENB2_W (CPU2_DLMU_SPROT_RGNACCENB_W2)

/** \brief E230, CPUx  Safety Protection DLMU Region Lower Address Register 3 */
#define CPU2_DLMU_SPROT_RGNLA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF884E230u)

/** \brief E234, CPUx  Safety protection DLMU Region Upper Address Register 3 */
#define CPU2_DLMU_SPROT_RGNUA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF884E234u)

/** \brief E238, CPUx  Safety Protection Region DLMU Write Access Enable Register A3 */
#define CPU2_DLMU_SPROT_RGNACCENA_W3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF884E238u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_W3.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_W3.
*/
#define CPU2_DLMU_SPROT_RGNACCENA3_W (CPU2_DLMU_SPROT_RGNACCENA_W3)

/** \brief E23C, CPUx  Safety Protection Region DLMU Write Access Enable Register B3 */
#define CPU2_DLMU_SPROT_RGNACCENB_W3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF884E23Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_W3.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_W3.
*/
#define CPU2_DLMU_SPROT_RGNACCENB3_W (CPU2_DLMU_SPROT_RGNACCENB_W3)

/** \brief E240, CPUx  Safety Protection DLMU Region Lower Address Register 4 */
#define CPU2_DLMU_SPROT_RGNLA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF884E240u)

/** \brief E244, CPUx  Safety protection DLMU Region Upper Address Register 4 */
#define CPU2_DLMU_SPROT_RGNUA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF884E244u)

/** \brief E248, CPUx  Safety Protection Region DLMU Write Access Enable Register A4 */
#define CPU2_DLMU_SPROT_RGNACCENA_W4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF884E248u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_W4.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_W4.
*/
#define CPU2_DLMU_SPROT_RGNACCENA4_W (CPU2_DLMU_SPROT_RGNACCENA_W4)

/** \brief E24C, CPUx  Safety Protection Region DLMU Write Access Enable Register B4 */
#define CPU2_DLMU_SPROT_RGNACCENB_W4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF884E24Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_W4.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_W4.
*/
#define CPU2_DLMU_SPROT_RGNACCENB4_W (CPU2_DLMU_SPROT_RGNACCENB_W4)

/** \brief E250, CPUx  Safety Protection DLMU Region Lower Address Register 5 */
#define CPU2_DLMU_SPROT_RGNLA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF884E250u)

/** \brief E254, CPUx  Safety protection DLMU Region Upper Address Register 5 */
#define CPU2_DLMU_SPROT_RGNUA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF884E254u)

/** \brief E258, CPUx  Safety Protection Region DLMU Write Access Enable Register A5 */
#define CPU2_DLMU_SPROT_RGNACCENA_W5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF884E258u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_W5.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_W5.
*/
#define CPU2_DLMU_SPROT_RGNACCENA5_W (CPU2_DLMU_SPROT_RGNACCENA_W5)

/** \brief E25C, CPUx  Safety Protection Region DLMU Write Access Enable Register B5 */
#define CPU2_DLMU_SPROT_RGNACCENB_W5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF884E25Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_W5.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_W5.
*/
#define CPU2_DLMU_SPROT_RGNACCENB5_W (CPU2_DLMU_SPROT_RGNACCENB_W5)

/** \brief E260, CPUx  Safety Protection DLMU Region Lower Address Register 6 */
#define CPU2_DLMU_SPROT_RGNLA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF884E260u)

/** \brief E264, CPUx  Safety protection DLMU Region Upper Address Register 6 */
#define CPU2_DLMU_SPROT_RGNUA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF884E264u)

/** \brief E268, CPUx  Safety Protection Region DLMU Write Access Enable Register A6 */
#define CPU2_DLMU_SPROT_RGNACCENA_W6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF884E268u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_W6.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_W6.
*/
#define CPU2_DLMU_SPROT_RGNACCENA6_W (CPU2_DLMU_SPROT_RGNACCENA_W6)

/** \brief E26C, CPUx  Safety Protection Region DLMU Write Access Enable Register B6 */
#define CPU2_DLMU_SPROT_RGNACCENB_W6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF884E26Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_W6.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_W6.
*/
#define CPU2_DLMU_SPROT_RGNACCENB6_W (CPU2_DLMU_SPROT_RGNACCENB_W6)

/** \brief E270, CPUx  Safety Protection DLMU Region Lower Address Register 7 */
#define CPU2_DLMU_SPROT_RGNLA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNLA*)0xF884E270u)

/** \brief E274, CPUx  Safety protection DLMU Region Upper Address Register 7 */
#define CPU2_DLMU_SPROT_RGNUA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNUA*)0xF884E274u)

/** \brief E278, CPUx  Safety Protection Region DLMU Write Access Enable Register A7 */
#define CPU2_DLMU_SPROT_RGNACCENA_W7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_W*)0xF884E278u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_W7.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_W7.
*/
#define CPU2_DLMU_SPROT_RGNACCENA7_W (CPU2_DLMU_SPROT_RGNACCENA_W7)

/** \brief E27C, CPUx  Safety Protection Region DLMU Write Access Enable Register B7 */
#define CPU2_DLMU_SPROT_RGNACCENB_W7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_W*)0xF884E27Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_W7.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_W7.
*/
#define CPU2_DLMU_SPROT_RGNACCENB7_W (CPU2_DLMU_SPROT_RGNACCENB_W7)

/** \brief E288, CPUx Safety Protection Region DLMU Read Access Enable Register A0 */
#define CPU2_DLMU_SPROT_RGNACCENA_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF884E288u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_R0.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_R0.
*/
#define CPU2_DLMU_SPROT_RGNACCENA0_R (CPU2_DLMU_SPROT_RGNACCENA_R0)

/** \brief E28C, CPUx Safety Protection Region DLMU Read Access Enable Register B0 */
#define CPU2_DLMU_SPROT_RGNACCENB_R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF884E28Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_R0.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_R0.
*/
#define CPU2_DLMU_SPROT_RGNACCENB0_R (CPU2_DLMU_SPROT_RGNACCENB_R0)

/** \brief E298, CPUx Safety Protection Region DLMU Read Access Enable Register A1 */
#define CPU2_DLMU_SPROT_RGNACCENA_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF884E298u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_R1.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_R1.
*/
#define CPU2_DLMU_SPROT_RGNACCENA1_R (CPU2_DLMU_SPROT_RGNACCENA_R1)

/** \brief E29C, CPUx Safety Protection Region DLMU Read Access Enable Register B1 */
#define CPU2_DLMU_SPROT_RGNACCENB_R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF884E29Cu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_R1.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_R1.
*/
#define CPU2_DLMU_SPROT_RGNACCENB1_R (CPU2_DLMU_SPROT_RGNACCENB_R1)

/** \brief E2A8, CPUx Safety Protection Region DLMU Read Access Enable Register A2 */
#define CPU2_DLMU_SPROT_RGNACCENA_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF884E2A8u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_R2.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_R2.
*/
#define CPU2_DLMU_SPROT_RGNACCENA2_R (CPU2_DLMU_SPROT_RGNACCENA_R2)

/** \brief E2AC, CPUx Safety Protection Region DLMU Read Access Enable Register B2 */
#define CPU2_DLMU_SPROT_RGNACCENB_R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF884E2ACu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_R2.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_R2.
*/
#define CPU2_DLMU_SPROT_RGNACCENB2_R (CPU2_DLMU_SPROT_RGNACCENB_R2)

/** \brief E2B8, CPUx Safety Protection Region DLMU Read Access Enable Register A3 */
#define CPU2_DLMU_SPROT_RGNACCENA_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF884E2B8u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_R3.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_R3.
*/
#define CPU2_DLMU_SPROT_RGNACCENA3_R (CPU2_DLMU_SPROT_RGNACCENA_R3)

/** \brief E2BC, CPUx Safety Protection Region DLMU Read Access Enable Register B3 */
#define CPU2_DLMU_SPROT_RGNACCENB_R3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF884E2BCu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_R3.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_R3.
*/
#define CPU2_DLMU_SPROT_RGNACCENB3_R (CPU2_DLMU_SPROT_RGNACCENB_R3)

/** \brief E2C8, CPUx Safety Protection Region DLMU Read Access Enable Register A4 */
#define CPU2_DLMU_SPROT_RGNACCENA_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF884E2C8u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_R4.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_R4.
*/
#define CPU2_DLMU_SPROT_RGNACCENA4_R (CPU2_DLMU_SPROT_RGNACCENA_R4)

/** \brief E2CC, CPUx Safety Protection Region DLMU Read Access Enable Register B4 */
#define CPU2_DLMU_SPROT_RGNACCENB_R4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF884E2CCu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_R4.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_R4.
*/
#define CPU2_DLMU_SPROT_RGNACCENB4_R (CPU2_DLMU_SPROT_RGNACCENB_R4)

/** \brief E2D8, CPUx Safety Protection Region DLMU Read Access Enable Register A5 */
#define CPU2_DLMU_SPROT_RGNACCENA_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF884E2D8u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_R5.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_R5.
*/
#define CPU2_DLMU_SPROT_RGNACCENA5_R (CPU2_DLMU_SPROT_RGNACCENA_R5)

/** \brief E2DC, CPUx Safety Protection Region DLMU Read Access Enable Register B5 */
#define CPU2_DLMU_SPROT_RGNACCENB_R5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF884E2DCu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_R5.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_R5.
*/
#define CPU2_DLMU_SPROT_RGNACCENB5_R (CPU2_DLMU_SPROT_RGNACCENB_R5)

/** \brief E2E8, CPUx Safety Protection Region DLMU Read Access Enable Register A6 */
#define CPU2_DLMU_SPROT_RGNACCENA_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF884E2E8u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_R6.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_R6.
*/
#define CPU2_DLMU_SPROT_RGNACCENA6_R (CPU2_DLMU_SPROT_RGNACCENA_R6)

/** \brief E2EC, CPUx Safety Protection Region DLMU Read Access Enable Register B6 */
#define CPU2_DLMU_SPROT_RGNACCENB_R6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF884E2ECu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_R6.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_R6.
*/
#define CPU2_DLMU_SPROT_RGNACCENB6_R (CPU2_DLMU_SPROT_RGNACCENB_R6)

/** \brief E2F8, CPUx Safety Protection Region DLMU Read Access Enable Register A7 */
#define CPU2_DLMU_SPROT_RGNACCENA_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA_R*)0xF884E2F8u)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENA_R7.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENA_R7.
*/
#define CPU2_DLMU_SPROT_RGNACCENA7_R (CPU2_DLMU_SPROT_RGNACCENA_R7)

/** \brief E2FC, CPUx Safety Protection Region DLMU Read Access Enable Register B7 */
#define CPU2_DLMU_SPROT_RGNACCENB_R7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB_R*)0xF884E2FCu)
/** Alias (User Manual Name) for CPU2_DLMU_SPROT_RGNACCENB_R7.
* To use register names with standard convension, please use CPU2_DLMU_SPROT_RGNACCENB_R7.
*/
#define CPU2_DLMU_SPROT_RGNACCENB7_R (CPU2_DLMU_SPROT_RGNACCENB_R7)

/** \brief FB00, CPUx  Overlay Range Select Register */
#define CPU2_OSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_OSEL*)0xF884FB00u)

/** \brief FB10, CPUx Redirected Address Base Register 0 */
#define CPU2_BLK0_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB10u)
/** Alias (User Manual Name) for CPU2_BLK0_RABR.
* To use register names with standard convension, please use CPU2_BLK0_RABR.
*/
#define CPU2_RABR0 (CPU2_BLK0_RABR)

/** \brief FB14, CPUx Overlay Target Address Register 0 */
#define CPU2_BLK0_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB14u)
/** Alias (User Manual Name) for CPU2_BLK0_OTAR.
* To use register names with standard convension, please use CPU2_BLK0_OTAR.
*/
#define CPU2_OTAR0 (CPU2_BLK0_OTAR)

/** \brief FB18, CPUx Overlay Mask Register 0 */
#define CPU2_BLK0_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB18u)
/** Alias (User Manual Name) for CPU2_BLK0_OMASK.
* To use register names with standard convension, please use CPU2_BLK0_OMASK.
*/
#define CPU2_OMASK0 (CPU2_BLK0_OMASK)

/** \brief FB1C, CPUx Redirected Address Base Register 1 */
#define CPU2_BLK1_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB1Cu)
/** Alias (User Manual Name) for CPU2_BLK1_RABR.
* To use register names with standard convension, please use CPU2_BLK1_RABR.
*/
#define CPU2_RABR1 (CPU2_BLK1_RABR)

/** \brief FB20, CPUx Overlay Target Address Register 1 */
#define CPU2_BLK1_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB20u)
/** Alias (User Manual Name) for CPU2_BLK1_OTAR.
* To use register names with standard convension, please use CPU2_BLK1_OTAR.
*/
#define CPU2_OTAR1 (CPU2_BLK1_OTAR)

/** \brief FB24, CPUx Overlay Mask Register 1 */
#define CPU2_BLK1_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB24u)
/** Alias (User Manual Name) for CPU2_BLK1_OMASK.
* To use register names with standard convension, please use CPU2_BLK1_OMASK.
*/
#define CPU2_OMASK1 (CPU2_BLK1_OMASK)

/** \brief FB28, CPUx Redirected Address Base Register 2 */
#define CPU2_BLK2_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB28u)
/** Alias (User Manual Name) for CPU2_BLK2_RABR.
* To use register names with standard convension, please use CPU2_BLK2_RABR.
*/
#define CPU2_RABR2 (CPU2_BLK2_RABR)

/** \brief FB2C, CPUx Overlay Target Address Register 2 */
#define CPU2_BLK2_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB2Cu)
/** Alias (User Manual Name) for CPU2_BLK2_OTAR.
* To use register names with standard convension, please use CPU2_BLK2_OTAR.
*/
#define CPU2_OTAR2 (CPU2_BLK2_OTAR)

/** \brief FB30, CPUx Overlay Mask Register 2 */
#define CPU2_BLK2_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB30u)
/** Alias (User Manual Name) for CPU2_BLK2_OMASK.
* To use register names with standard convension, please use CPU2_BLK2_OMASK.
*/
#define CPU2_OMASK2 (CPU2_BLK2_OMASK)

/** \brief FB34, CPUx Redirected Address Base Register 3 */
#define CPU2_BLK3_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB34u)
/** Alias (User Manual Name) for CPU2_BLK3_RABR.
* To use register names with standard convension, please use CPU2_BLK3_RABR.
*/
#define CPU2_RABR3 (CPU2_BLK3_RABR)

/** \brief FB38, CPUx Overlay Target Address Register 3 */
#define CPU2_BLK3_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB38u)
/** Alias (User Manual Name) for CPU2_BLK3_OTAR.
* To use register names with standard convension, please use CPU2_BLK3_OTAR.
*/
#define CPU2_OTAR3 (CPU2_BLK3_OTAR)

/** \brief FB3C, CPUx Overlay Mask Register 3 */
#define CPU2_BLK3_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB3Cu)
/** Alias (User Manual Name) for CPU2_BLK3_OMASK.
* To use register names with standard convension, please use CPU2_BLK3_OMASK.
*/
#define CPU2_OMASK3 (CPU2_BLK3_OMASK)

/** \brief FB40, CPUx Redirected Address Base Register 4 */
#define CPU2_BLK4_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB40u)
/** Alias (User Manual Name) for CPU2_BLK4_RABR.
* To use register names with standard convension, please use CPU2_BLK4_RABR.
*/
#define CPU2_RABR4 (CPU2_BLK4_RABR)

/** \brief FB44, CPUx Overlay Target Address Register 4 */
#define CPU2_BLK4_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB44u)
/** Alias (User Manual Name) for CPU2_BLK4_OTAR.
* To use register names with standard convension, please use CPU2_BLK4_OTAR.
*/
#define CPU2_OTAR4 (CPU2_BLK4_OTAR)

/** \brief FB48, CPUx Overlay Mask Register 4 */
#define CPU2_BLK4_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB48u)
/** Alias (User Manual Name) for CPU2_BLK4_OMASK.
* To use register names with standard convension, please use CPU2_BLK4_OMASK.
*/
#define CPU2_OMASK4 (CPU2_BLK4_OMASK)

/** \brief FB4C, CPUx Redirected Address Base Register 5 */
#define CPU2_BLK5_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB4Cu)
/** Alias (User Manual Name) for CPU2_BLK5_RABR.
* To use register names with standard convension, please use CPU2_BLK5_RABR.
*/
#define CPU2_RABR5 (CPU2_BLK5_RABR)

/** \brief FB50, CPUx Overlay Target Address Register 5 */
#define CPU2_BLK5_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB50u)
/** Alias (User Manual Name) for CPU2_BLK5_OTAR.
* To use register names with standard convension, please use CPU2_BLK5_OTAR.
*/
#define CPU2_OTAR5 (CPU2_BLK5_OTAR)

/** \brief FB54, CPUx Overlay Mask Register 5 */
#define CPU2_BLK5_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB54u)
/** Alias (User Manual Name) for CPU2_BLK5_OMASK.
* To use register names with standard convension, please use CPU2_BLK5_OMASK.
*/
#define CPU2_OMASK5 (CPU2_BLK5_OMASK)

/** \brief FB58, CPUx Redirected Address Base Register 6 */
#define CPU2_BLK6_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB58u)
/** Alias (User Manual Name) for CPU2_BLK6_RABR.
* To use register names with standard convension, please use CPU2_BLK6_RABR.
*/
#define CPU2_RABR6 (CPU2_BLK6_RABR)

/** \brief FB5C, CPUx Overlay Target Address Register 6 */
#define CPU2_BLK6_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB5Cu)
/** Alias (User Manual Name) for CPU2_BLK6_OTAR.
* To use register names with standard convension, please use CPU2_BLK6_OTAR.
*/
#define CPU2_OTAR6 (CPU2_BLK6_OTAR)

/** \brief FB60, CPUx Overlay Mask Register 6 */
#define CPU2_BLK6_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB60u)
/** Alias (User Manual Name) for CPU2_BLK6_OMASK.
* To use register names with standard convension, please use CPU2_BLK6_OMASK.
*/
#define CPU2_OMASK6 (CPU2_BLK6_OMASK)

/** \brief FB64, CPUx Redirected Address Base Register 7 */
#define CPU2_BLK7_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB64u)
/** Alias (User Manual Name) for CPU2_BLK7_RABR.
* To use register names with standard convension, please use CPU2_BLK7_RABR.
*/
#define CPU2_RABR7 (CPU2_BLK7_RABR)

/** \brief FB68, CPUx Overlay Target Address Register 7 */
#define CPU2_BLK7_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB68u)
/** Alias (User Manual Name) for CPU2_BLK7_OTAR.
* To use register names with standard convension, please use CPU2_BLK7_OTAR.
*/
#define CPU2_OTAR7 (CPU2_BLK7_OTAR)

/** \brief FB6C, CPUx Overlay Mask Register 7 */
#define CPU2_BLK7_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB6Cu)
/** Alias (User Manual Name) for CPU2_BLK7_OMASK.
* To use register names with standard convension, please use CPU2_BLK7_OMASK.
*/
#define CPU2_OMASK7 (CPU2_BLK7_OMASK)

/** \brief FB70, CPUx Redirected Address Base Register 8 */
#define CPU2_BLK8_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB70u)
/** Alias (User Manual Name) for CPU2_BLK8_RABR.
* To use register names with standard convension, please use CPU2_BLK8_RABR.
*/
#define CPU2_RABR8 (CPU2_BLK8_RABR)

/** \brief FB74, CPUx Overlay Target Address Register 8 */
#define CPU2_BLK8_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB74u)
/** Alias (User Manual Name) for CPU2_BLK8_OTAR.
* To use register names with standard convension, please use CPU2_BLK8_OTAR.
*/
#define CPU2_OTAR8 (CPU2_BLK8_OTAR)

/** \brief FB78, CPUx Overlay Mask Register 8 */
#define CPU2_BLK8_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB78u)
/** Alias (User Manual Name) for CPU2_BLK8_OMASK.
* To use register names with standard convension, please use CPU2_BLK8_OMASK.
*/
#define CPU2_OMASK8 (CPU2_BLK8_OMASK)

/** \brief FB7C, CPUx Redirected Address Base Register 9 */
#define CPU2_BLK9_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB7Cu)
/** Alias (User Manual Name) for CPU2_BLK9_RABR.
* To use register names with standard convension, please use CPU2_BLK9_RABR.
*/
#define CPU2_RABR9 (CPU2_BLK9_RABR)

/** \brief FB80, CPUx Overlay Target Address Register 9 */
#define CPU2_BLK9_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB80u)
/** Alias (User Manual Name) for CPU2_BLK9_OTAR.
* To use register names with standard convension, please use CPU2_BLK9_OTAR.
*/
#define CPU2_OTAR9 (CPU2_BLK9_OTAR)

/** \brief FB84, CPUx Overlay Mask Register 9 */
#define CPU2_BLK9_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB84u)
/** Alias (User Manual Name) for CPU2_BLK9_OMASK.
* To use register names with standard convension, please use CPU2_BLK9_OMASK.
*/
#define CPU2_OMASK9 (CPU2_BLK9_OMASK)

/** \brief FB88, CPUx Redirected Address Base Register 10 */
#define CPU2_BLK10_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB88u)
/** Alias (User Manual Name) for CPU2_BLK10_RABR.
* To use register names with standard convension, please use CPU2_BLK10_RABR.
*/
#define CPU2_RABR10 (CPU2_BLK10_RABR)

/** \brief FB8C, CPUx Overlay Target Address Register 10 */
#define CPU2_BLK10_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB8Cu)
/** Alias (User Manual Name) for CPU2_BLK10_OTAR.
* To use register names with standard convension, please use CPU2_BLK10_OTAR.
*/
#define CPU2_OTAR10 (CPU2_BLK10_OTAR)

/** \brief FB90, CPUx Overlay Mask Register 10 */
#define CPU2_BLK10_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB90u)
/** Alias (User Manual Name) for CPU2_BLK10_OMASK.
* To use register names with standard convension, please use CPU2_BLK10_OMASK.
*/
#define CPU2_OMASK10 (CPU2_BLK10_OMASK)

/** \brief FB94, CPUx Redirected Address Base Register 11 */
#define CPU2_BLK11_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FB94u)
/** Alias (User Manual Name) for CPU2_BLK11_RABR.
* To use register names with standard convension, please use CPU2_BLK11_RABR.
*/
#define CPU2_RABR11 (CPU2_BLK11_RABR)

/** \brief FB98, CPUx Overlay Target Address Register 11 */
#define CPU2_BLK11_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FB98u)
/** Alias (User Manual Name) for CPU2_BLK11_OTAR.
* To use register names with standard convension, please use CPU2_BLK11_OTAR.
*/
#define CPU2_OTAR11 (CPU2_BLK11_OTAR)

/** \brief FB9C, CPUx Overlay Mask Register 11 */
#define CPU2_BLK11_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FB9Cu)
/** Alias (User Manual Name) for CPU2_BLK11_OMASK.
* To use register names with standard convension, please use CPU2_BLK11_OMASK.
*/
#define CPU2_OMASK11 (CPU2_BLK11_OMASK)

/** \brief FBA0, CPUx Redirected Address Base Register 12 */
#define CPU2_BLK12_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FBA0u)
/** Alias (User Manual Name) for CPU2_BLK12_RABR.
* To use register names with standard convension, please use CPU2_BLK12_RABR.
*/
#define CPU2_RABR12 (CPU2_BLK12_RABR)

/** \brief FBA4, CPUx Overlay Target Address Register 12 */
#define CPU2_BLK12_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FBA4u)
/** Alias (User Manual Name) for CPU2_BLK12_OTAR.
* To use register names with standard convension, please use CPU2_BLK12_OTAR.
*/
#define CPU2_OTAR12 (CPU2_BLK12_OTAR)

/** \brief FBA8, CPUx Overlay Mask Register 12 */
#define CPU2_BLK12_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FBA8u)
/** Alias (User Manual Name) for CPU2_BLK12_OMASK.
* To use register names with standard convension, please use CPU2_BLK12_OMASK.
*/
#define CPU2_OMASK12 (CPU2_BLK12_OMASK)

/** \brief FBAC, CPUx Redirected Address Base Register 13 */
#define CPU2_BLK13_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FBACu)
/** Alias (User Manual Name) for CPU2_BLK13_RABR.
* To use register names with standard convension, please use CPU2_BLK13_RABR.
*/
#define CPU2_RABR13 (CPU2_BLK13_RABR)

/** \brief FBB0, CPUx Overlay Target Address Register 13 */
#define CPU2_BLK13_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FBB0u)
/** Alias (User Manual Name) for CPU2_BLK13_OTAR.
* To use register names with standard convension, please use CPU2_BLK13_OTAR.
*/
#define CPU2_OTAR13 (CPU2_BLK13_OTAR)

/** \brief FBB4, CPUx Overlay Mask Register 13 */
#define CPU2_BLK13_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FBB4u)
/** Alias (User Manual Name) for CPU2_BLK13_OMASK.
* To use register names with standard convension, please use CPU2_BLK13_OMASK.
*/
#define CPU2_OMASK13 (CPU2_BLK13_OMASK)

/** \brief FBB8, CPUx Redirected Address Base Register 14 */
#define CPU2_BLK14_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FBB8u)
/** Alias (User Manual Name) for CPU2_BLK14_RABR.
* To use register names with standard convension, please use CPU2_BLK14_RABR.
*/
#define CPU2_RABR14 (CPU2_BLK14_RABR)

/** \brief FBBC, CPUx Overlay Target Address Register 14 */
#define CPU2_BLK14_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FBBCu)
/** Alias (User Manual Name) for CPU2_BLK14_OTAR.
* To use register names with standard convension, please use CPU2_BLK14_OTAR.
*/
#define CPU2_OTAR14 (CPU2_BLK14_OTAR)

/** \brief FBC0, CPUx Overlay Mask Register 14 */
#define CPU2_BLK14_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FBC0u)
/** Alias (User Manual Name) for CPU2_BLK14_OMASK.
* To use register names with standard convension, please use CPU2_BLK14_OMASK.
*/
#define CPU2_OMASK14 (CPU2_BLK14_OMASK)

/** \brief FBC4, CPUx Redirected Address Base Register 15 */
#define CPU2_BLK15_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FBC4u)
/** Alias (User Manual Name) for CPU2_BLK15_RABR.
* To use register names with standard convension, please use CPU2_BLK15_RABR.
*/
#define CPU2_RABR15 (CPU2_BLK15_RABR)

/** \brief FBC8, CPUx Overlay Target Address Register 15 */
#define CPU2_BLK15_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FBC8u)
/** Alias (User Manual Name) for CPU2_BLK15_OTAR.
* To use register names with standard convension, please use CPU2_BLK15_OTAR.
*/
#define CPU2_OTAR15 (CPU2_BLK15_OTAR)

/** \brief FBCC, CPUx Overlay Mask Register 15 */
#define CPU2_BLK15_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FBCCu)
/** Alias (User Manual Name) for CPU2_BLK15_OMASK.
* To use register names with standard convension, please use CPU2_BLK15_OMASK.
*/
#define CPU2_OMASK15 (CPU2_BLK15_OMASK)

/** \brief FBD0, CPUx Redirected Address Base Register 16 */
#define CPU2_BLK16_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FBD0u)
/** Alias (User Manual Name) for CPU2_BLK16_RABR.
* To use register names with standard convension, please use CPU2_BLK16_RABR.
*/
#define CPU2_RABR16 (CPU2_BLK16_RABR)

/** \brief FBD4, CPUx Overlay Target Address Register 16 */
#define CPU2_BLK16_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FBD4u)
/** Alias (User Manual Name) for CPU2_BLK16_OTAR.
* To use register names with standard convension, please use CPU2_BLK16_OTAR.
*/
#define CPU2_OTAR16 (CPU2_BLK16_OTAR)

/** \brief FBD8, CPUx Overlay Mask Register 16 */
#define CPU2_BLK16_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FBD8u)
/** Alias (User Manual Name) for CPU2_BLK16_OMASK.
* To use register names with standard convension, please use CPU2_BLK16_OMASK.
*/
#define CPU2_OMASK16 (CPU2_BLK16_OMASK)

/** \brief FBDC, CPUx Redirected Address Base Register 17 */
#define CPU2_BLK17_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FBDCu)
/** Alias (User Manual Name) for CPU2_BLK17_RABR.
* To use register names with standard convension, please use CPU2_BLK17_RABR.
*/
#define CPU2_RABR17 (CPU2_BLK17_RABR)

/** \brief FBE0, CPUx Overlay Target Address Register 17 */
#define CPU2_BLK17_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FBE0u)
/** Alias (User Manual Name) for CPU2_BLK17_OTAR.
* To use register names with standard convension, please use CPU2_BLK17_OTAR.
*/
#define CPU2_OTAR17 (CPU2_BLK17_OTAR)

/** \brief FBE4, CPUx Overlay Mask Register 17 */
#define CPU2_BLK17_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FBE4u)
/** Alias (User Manual Name) for CPU2_BLK17_OMASK.
* To use register names with standard convension, please use CPU2_BLK17_OMASK.
*/
#define CPU2_OMASK17 (CPU2_BLK17_OMASK)

/** \brief FBE8, CPUx Redirected Address Base Register 18 */
#define CPU2_BLK18_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FBE8u)
/** Alias (User Manual Name) for CPU2_BLK18_RABR.
* To use register names with standard convension, please use CPU2_BLK18_RABR.
*/
#define CPU2_RABR18 (CPU2_BLK18_RABR)

/** \brief FBEC, CPUx Overlay Target Address Register 18 */
#define CPU2_BLK18_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FBECu)
/** Alias (User Manual Name) for CPU2_BLK18_OTAR.
* To use register names with standard convension, please use CPU2_BLK18_OTAR.
*/
#define CPU2_OTAR18 (CPU2_BLK18_OTAR)

/** \brief FBF0, CPUx Overlay Mask Register 18 */
#define CPU2_BLK18_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FBF0u)
/** Alias (User Manual Name) for CPU2_BLK18_OMASK.
* To use register names with standard convension, please use CPU2_BLK18_OMASK.
*/
#define CPU2_OMASK18 (CPU2_BLK18_OMASK)

/** \brief FBF4, CPUx Redirected Address Base Register 19 */
#define CPU2_BLK19_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FBF4u)
/** Alias (User Manual Name) for CPU2_BLK19_RABR.
* To use register names with standard convension, please use CPU2_BLK19_RABR.
*/
#define CPU2_RABR19 (CPU2_BLK19_RABR)

/** \brief FBF8, CPUx Overlay Target Address Register 19 */
#define CPU2_BLK19_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FBF8u)
/** Alias (User Manual Name) for CPU2_BLK19_OTAR.
* To use register names with standard convension, please use CPU2_BLK19_OTAR.
*/
#define CPU2_OTAR19 (CPU2_BLK19_OTAR)

/** \brief FBFC, CPUx Overlay Mask Register 19 */
#define CPU2_BLK19_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FBFCu)
/** Alias (User Manual Name) for CPU2_BLK19_OMASK.
* To use register names with standard convension, please use CPU2_BLK19_OMASK.
*/
#define CPU2_OMASK19 (CPU2_BLK19_OMASK)

/** \brief FC00, CPUx Redirected Address Base Register 20 */
#define CPU2_BLK20_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC00u)
/** Alias (User Manual Name) for CPU2_BLK20_RABR.
* To use register names with standard convension, please use CPU2_BLK20_RABR.
*/
#define CPU2_RABR20 (CPU2_BLK20_RABR)

/** \brief FC04, CPUx Overlay Target Address Register 20 */
#define CPU2_BLK20_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC04u)
/** Alias (User Manual Name) for CPU2_BLK20_OTAR.
* To use register names with standard convension, please use CPU2_BLK20_OTAR.
*/
#define CPU2_OTAR20 (CPU2_BLK20_OTAR)

/** \brief FC08, CPUx Overlay Mask Register 20 */
#define CPU2_BLK20_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC08u)
/** Alias (User Manual Name) for CPU2_BLK20_OMASK.
* To use register names with standard convension, please use CPU2_BLK20_OMASK.
*/
#define CPU2_OMASK20 (CPU2_BLK20_OMASK)

/** \brief FC0C, CPUx Redirected Address Base Register 21 */
#define CPU2_BLK21_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC0Cu)
/** Alias (User Manual Name) for CPU2_BLK21_RABR.
* To use register names with standard convension, please use CPU2_BLK21_RABR.
*/
#define CPU2_RABR21 (CPU2_BLK21_RABR)

/** \brief FC10, CPUx Overlay Target Address Register 21 */
#define CPU2_BLK21_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC10u)
/** Alias (User Manual Name) for CPU2_BLK21_OTAR.
* To use register names with standard convension, please use CPU2_BLK21_OTAR.
*/
#define CPU2_OTAR21 (CPU2_BLK21_OTAR)

/** \brief FC14, CPUx Overlay Mask Register 21 */
#define CPU2_BLK21_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC14u)
/** Alias (User Manual Name) for CPU2_BLK21_OMASK.
* To use register names with standard convension, please use CPU2_BLK21_OMASK.
*/
#define CPU2_OMASK21 (CPU2_BLK21_OMASK)

/** \brief FC18, CPUx Redirected Address Base Register 22 */
#define CPU2_BLK22_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC18u)
/** Alias (User Manual Name) for CPU2_BLK22_RABR.
* To use register names with standard convension, please use CPU2_BLK22_RABR.
*/
#define CPU2_RABR22 (CPU2_BLK22_RABR)

/** \brief FC1C, CPUx Overlay Target Address Register 22 */
#define CPU2_BLK22_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC1Cu)
/** Alias (User Manual Name) for CPU2_BLK22_OTAR.
* To use register names with standard convension, please use CPU2_BLK22_OTAR.
*/
#define CPU2_OTAR22 (CPU2_BLK22_OTAR)

/** \brief FC20, CPUx Overlay Mask Register 22 */
#define CPU2_BLK22_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC20u)
/** Alias (User Manual Name) for CPU2_BLK22_OMASK.
* To use register names with standard convension, please use CPU2_BLK22_OMASK.
*/
#define CPU2_OMASK22 (CPU2_BLK22_OMASK)

/** \brief FC24, CPUx Redirected Address Base Register 23 */
#define CPU2_BLK23_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC24u)
/** Alias (User Manual Name) for CPU2_BLK23_RABR.
* To use register names with standard convension, please use CPU2_BLK23_RABR.
*/
#define CPU2_RABR23 (CPU2_BLK23_RABR)

/** \brief FC28, CPUx Overlay Target Address Register 23 */
#define CPU2_BLK23_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC28u)
/** Alias (User Manual Name) for CPU2_BLK23_OTAR.
* To use register names with standard convension, please use CPU2_BLK23_OTAR.
*/
#define CPU2_OTAR23 (CPU2_BLK23_OTAR)

/** \brief FC2C, CPUx Overlay Mask Register 23 */
#define CPU2_BLK23_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC2Cu)
/** Alias (User Manual Name) for CPU2_BLK23_OMASK.
* To use register names with standard convension, please use CPU2_BLK23_OMASK.
*/
#define CPU2_OMASK23 (CPU2_BLK23_OMASK)

/** \brief FC30, CPUx Redirected Address Base Register 24 */
#define CPU2_BLK24_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC30u)
/** Alias (User Manual Name) for CPU2_BLK24_RABR.
* To use register names with standard convension, please use CPU2_BLK24_RABR.
*/
#define CPU2_RABR24 (CPU2_BLK24_RABR)

/** \brief FC34, CPUx Overlay Target Address Register 24 */
#define CPU2_BLK24_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC34u)
/** Alias (User Manual Name) for CPU2_BLK24_OTAR.
* To use register names with standard convension, please use CPU2_BLK24_OTAR.
*/
#define CPU2_OTAR24 (CPU2_BLK24_OTAR)

/** \brief FC38, CPUx Overlay Mask Register 24 */
#define CPU2_BLK24_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC38u)
/** Alias (User Manual Name) for CPU2_BLK24_OMASK.
* To use register names with standard convension, please use CPU2_BLK24_OMASK.
*/
#define CPU2_OMASK24 (CPU2_BLK24_OMASK)

/** \brief FC3C, CPUx Redirected Address Base Register 25 */
#define CPU2_BLK25_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC3Cu)
/** Alias (User Manual Name) for CPU2_BLK25_RABR.
* To use register names with standard convension, please use CPU2_BLK25_RABR.
*/
#define CPU2_RABR25 (CPU2_BLK25_RABR)

/** \brief FC40, CPUx Overlay Target Address Register 25 */
#define CPU2_BLK25_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC40u)
/** Alias (User Manual Name) for CPU2_BLK25_OTAR.
* To use register names with standard convension, please use CPU2_BLK25_OTAR.
*/
#define CPU2_OTAR25 (CPU2_BLK25_OTAR)

/** \brief FC44, CPUx Overlay Mask Register 25 */
#define CPU2_BLK25_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC44u)
/** Alias (User Manual Name) for CPU2_BLK25_OMASK.
* To use register names with standard convension, please use CPU2_BLK25_OMASK.
*/
#define CPU2_OMASK25 (CPU2_BLK25_OMASK)

/** \brief FC48, CPUx Redirected Address Base Register 26 */
#define CPU2_BLK26_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC48u)
/** Alias (User Manual Name) for CPU2_BLK26_RABR.
* To use register names with standard convension, please use CPU2_BLK26_RABR.
*/
#define CPU2_RABR26 (CPU2_BLK26_RABR)

/** \brief FC4C, CPUx Overlay Target Address Register 26 */
#define CPU2_BLK26_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC4Cu)
/** Alias (User Manual Name) for CPU2_BLK26_OTAR.
* To use register names with standard convension, please use CPU2_BLK26_OTAR.
*/
#define CPU2_OTAR26 (CPU2_BLK26_OTAR)

/** \brief FC50, CPUx Overlay Mask Register 26 */
#define CPU2_BLK26_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC50u)
/** Alias (User Manual Name) for CPU2_BLK26_OMASK.
* To use register names with standard convension, please use CPU2_BLK26_OMASK.
*/
#define CPU2_OMASK26 (CPU2_BLK26_OMASK)

/** \brief FC54, CPUx Redirected Address Base Register 27 */
#define CPU2_BLK27_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC54u)
/** Alias (User Manual Name) for CPU2_BLK27_RABR.
* To use register names with standard convension, please use CPU2_BLK27_RABR.
*/
#define CPU2_RABR27 (CPU2_BLK27_RABR)

/** \brief FC58, CPUx Overlay Target Address Register 27 */
#define CPU2_BLK27_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC58u)
/** Alias (User Manual Name) for CPU2_BLK27_OTAR.
* To use register names with standard convension, please use CPU2_BLK27_OTAR.
*/
#define CPU2_OTAR27 (CPU2_BLK27_OTAR)

/** \brief FC5C, CPUx Overlay Mask Register 27 */
#define CPU2_BLK27_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC5Cu)
/** Alias (User Manual Name) for CPU2_BLK27_OMASK.
* To use register names with standard convension, please use CPU2_BLK27_OMASK.
*/
#define CPU2_OMASK27 (CPU2_BLK27_OMASK)

/** \brief FC60, CPUx Redirected Address Base Register 28 */
#define CPU2_BLK28_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC60u)
/** Alias (User Manual Name) for CPU2_BLK28_RABR.
* To use register names with standard convension, please use CPU2_BLK28_RABR.
*/
#define CPU2_RABR28 (CPU2_BLK28_RABR)

/** \brief FC64, CPUx Overlay Target Address Register 28 */
#define CPU2_BLK28_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC64u)
/** Alias (User Manual Name) for CPU2_BLK28_OTAR.
* To use register names with standard convension, please use CPU2_BLK28_OTAR.
*/
#define CPU2_OTAR28 (CPU2_BLK28_OTAR)

/** \brief FC68, CPUx Overlay Mask Register 28 */
#define CPU2_BLK28_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC68u)
/** Alias (User Manual Name) for CPU2_BLK28_OMASK.
* To use register names with standard convension, please use CPU2_BLK28_OMASK.
*/
#define CPU2_OMASK28 (CPU2_BLK28_OMASK)

/** \brief FC6C, CPUx Redirected Address Base Register 29 */
#define CPU2_BLK29_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC6Cu)
/** Alias (User Manual Name) for CPU2_BLK29_RABR.
* To use register names with standard convension, please use CPU2_BLK29_RABR.
*/
#define CPU2_RABR29 (CPU2_BLK29_RABR)

/** \brief FC70, CPUx Overlay Target Address Register 29 */
#define CPU2_BLK29_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC70u)
/** Alias (User Manual Name) for CPU2_BLK29_OTAR.
* To use register names with standard convension, please use CPU2_BLK29_OTAR.
*/
#define CPU2_OTAR29 (CPU2_BLK29_OTAR)

/** \brief FC74, CPUx Overlay Mask Register 29 */
#define CPU2_BLK29_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC74u)
/** Alias (User Manual Name) for CPU2_BLK29_OMASK.
* To use register names with standard convension, please use CPU2_BLK29_OMASK.
*/
#define CPU2_OMASK29 (CPU2_BLK29_OMASK)

/** \brief FC78, CPUx Redirected Address Base Register 30 */
#define CPU2_BLK30_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC78u)
/** Alias (User Manual Name) for CPU2_BLK30_RABR.
* To use register names with standard convension, please use CPU2_BLK30_RABR.
*/
#define CPU2_RABR30 (CPU2_BLK30_RABR)

/** \brief FC7C, CPUx Overlay Target Address Register 30 */
#define CPU2_BLK30_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC7Cu)
/** Alias (User Manual Name) for CPU2_BLK30_OTAR.
* To use register names with standard convension, please use CPU2_BLK30_OTAR.
*/
#define CPU2_OTAR30 (CPU2_BLK30_OTAR)

/** \brief FC80, CPUx Overlay Mask Register 30 */
#define CPU2_BLK30_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC80u)
/** Alias (User Manual Name) for CPU2_BLK30_OMASK.
* To use register names with standard convension, please use CPU2_BLK30_OMASK.
*/
#define CPU2_OMASK30 (CPU2_BLK30_OMASK)

/** \brief FC84, CPUx Redirected Address Base Register 31 */
#define CPU2_BLK31_RABR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_RABR*)0xF884FC84u)
/** Alias (User Manual Name) for CPU2_BLK31_RABR.
* To use register names with standard convension, please use CPU2_BLK31_RABR.
*/
#define CPU2_RABR31 (CPU2_BLK31_RABR)

/** \brief FC88, CPUx Overlay Target Address Register 31 */
#define CPU2_BLK31_OTAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OTAR*)0xF884FC88u)
/** Alias (User Manual Name) for CPU2_BLK31_OTAR.
* To use register names with standard convension, please use CPU2_BLK31_OTAR.
*/
#define CPU2_OTAR31 (CPU2_BLK31_OTAR)

/** \brief FC8C, CPUx Overlay Mask Register 31 */
#define CPU2_BLK31_OMASK /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BLK_OMASK*)0xF884FC8Cu)
/** Alias (User Manual Name) for CPU2_BLK31_OMASK.
* To use register names with standard convension, please use CPU2_BLK31_OMASK.
*/
#define CPU2_OMASK31 (CPU2_BLK31_OMASK)

/** \brief 1030, CPUx SRI Error Generation Register */
#define CPU2_SEGEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SEGEN*)0xF8851030u)

/** \brief 8004, CPUx Task Address Space Identifier Register */
#define CPU2_TASK_ASI /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF8858004u)

/** \brief 8100, CPUx Data Access CacheabilityRegister */
#define CPU2_PMA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA0*)0xF8858100u)

/** \brief 8104, CPUx Code Access CacheabilityRegister */
#define CPU2_PMA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA1*)0xF8858104u)

/** \brief 8108, CPUx  Peripheral Space Identifier register */
#define CPU2_PMA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PMA2*)0xF8858108u)

/** \brief 9000, CPUx Data Control Register 2 */
#define CPU2_DCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCON2*)0xF8859000u)

/** \brief 900C, CPUx SIST Mode Access Control Register */
#define CPU2_SMACON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SMACON*)0xF885900Cu)

/** \brief 9010, CPUx Data Synchronous Trap Register */
#define CPU2_DSTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DSTR*)0xF8859010u)

/** \brief 9018, CPUx Data Asynchronous Trap Register */
#define CPU2_DATR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DATR*)0xF8859018u)

/** \brief 901C, CPUx Data Error Address Register */
#define CPU2_DEADD /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DEADD*)0xF885901Cu)

/** \brief 9020, CPUx Data Integrity Error Address Register */
#define CPU2_DIEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DIEAR*)0xF8859020u)

/** \brief 9024, CPUx Data Integrity Error Trap Register */
#define CPU2_DIETR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DIETR*)0xF8859024u)

/** \brief 9040, CPUx Data Memory Control Register */
#define CPU2_DCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCON0*)0xF8859040u)

/** \brief 9200, CPUx Program Synchronous Trap Register */
#define CPU2_PSTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PSTR*)0xF8859200u)

/** \brief 9204, CPUx Program Control 1 */
#define CPU2_PCON1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON1*)0xF8859204u)

/** \brief 9208, CPUx Program Control 2 */
#define CPU2_PCON2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON2*)0xF8859208u)

/** \brief 920C, CPUx Program Control 0 */
#define CPU2_PCON0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCON0*)0xF885920Cu)

/** \brief 9210, CPUx Program Integrity Error Address Register */
#define CPU2_PIEAR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PIEAR*)0xF8859210u)

/** \brief 9214, CPUx Program Integrity Error Trap Register */
#define CPU2_PIETR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PIETR*)0xF8859214u)

/** \brief 9400, CPUx Compatibility Control Register */
#define CPU2_COMPAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_COMPAT*)0xF8859400u)

/** \brief A000, CPUx Trap Control Register */
#define CPU2_FPU_TRAP_CON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF885A000u)

/** \brief A004, CPUx Trapping Instruction Program Counter Register */
#define CPU2_FPU_TRAP_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF885A004u)

/** \brief A008, CPUx Trapping Instruction Opcode Register */
#define CPU2_FPU_TRAP_OPC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF885A008u)

/** \brief A010, CPUx Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF885A010u)

/** \brief A014, CPUx Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF885A014u)

/** \brief A018, CPUx Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF885A018u)

/** \brief C000, CPUx Data Protection Range 0, Lower Bound Register */
#define CPU2_DPR0_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C000u)

/** \brief C004, CPUx Data Protection Range 0, Upper Bound Register */
#define CPU2_DPR0_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C004u)

/** \brief C008, CPUx Data Protection Range 1, Lower Bound Register */
#define CPU2_DPR1_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C008u)

/** \brief C00C, CPUx Data Protection Range 1, Upper Bound Register */
#define CPU2_DPR1_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C00Cu)

/** \brief C010, CPUx Data Protection Range 2, Lower Bound Register */
#define CPU2_DPR2_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C010u)

/** \brief C014, CPUx Data Protection Range 2, Upper Bound Register */
#define CPU2_DPR2_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C014u)

/** \brief C018, CPUx Data Protection Range 3, Lower Bound Register */
#define CPU2_DPR3_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C018u)

/** \brief C01C, CPUx Data Protection Range 3, Upper Bound Register */
#define CPU2_DPR3_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C01Cu)

/** \brief C020, CPUx Data Protection Range 4, Lower Bound Register */
#define CPU2_DPR4_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C020u)

/** \brief C024, CPUx Data Protection Range 4, Upper Bound Register */
#define CPU2_DPR4_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C024u)

/** \brief C028, CPUx Data Protection Range 5, Lower Bound Register */
#define CPU2_DPR5_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C028u)

/** \brief C02C, CPUx Data Protection Range 5, Upper Bound Register */
#define CPU2_DPR5_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C02Cu)

/** \brief C030, CPUx Data Protection Range 6, Lower Bound Register */
#define CPU2_DPR6_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C030u)

/** \brief C034, CPUx Data Protection Range 6, Upper Bound Register */
#define CPU2_DPR6_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C034u)

/** \brief C038, CPUx Data Protection Range 7, Lower Bound Register */
#define CPU2_DPR7_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C038u)

/** \brief C03C, CPUx Data Protection Range 7, Upper Bound Register */
#define CPU2_DPR7_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C03Cu)

/** \brief C040, CPUx Data Protection Range 8, Lower Bound Register */
#define CPU2_DPR8_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C040u)

/** \brief C044, CPUx Data Protection Range 8, Upper Bound Register */
#define CPU2_DPR8_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C044u)

/** \brief C048, CPUx Data Protection Range 9, Lower Bound Register */
#define CPU2_DPR9_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C048u)

/** \brief C04C, CPUx Data Protection Range 9, Upper Bound Register */
#define CPU2_DPR9_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C04Cu)

/** \brief C050, CPUx Data Protection Range 10, Lower Bound Register */
#define CPU2_DPR10_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C050u)

/** \brief C054, CPUx Data Protection Range 10, Upper Bound Register */
#define CPU2_DPR10_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C054u)

/** \brief C058, CPUx Data Protection Range 11, Lower Bound Register */
#define CPU2_DPR11_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C058u)

/** \brief C05C, CPUx Data Protection Range 11, Upper Bound Register */
#define CPU2_DPR11_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C05Cu)

/** \brief C060, CPUx Data Protection Range 12, Lower Bound Register */
#define CPU2_DPR12_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C060u)

/** \brief C064, CPUx Data Protection Range 12, Upper Bound Register */
#define CPU2_DPR12_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C064u)

/** \brief C068, CPUx Data Protection Range 13, Lower Bound Register */
#define CPU2_DPR13_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C068u)

/** \brief C06C, CPUx Data Protection Range 13, Upper Bound Register */
#define CPU2_DPR13_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C06Cu)

/** \brief C070, CPUx Data Protection Range 14, Lower Bound Register */
#define CPU2_DPR14_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C070u)

/** \brief C074, CPUx Data Protection Range 14, Upper Bound Register */
#define CPU2_DPR14_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C074u)

/** \brief C078, CPUx Data Protection Range 15, Lower Bound Register */
#define CPU2_DPR15_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C078u)

/** \brief C07C, CPUx Data Protection Range 15, Upper Bound Register */
#define CPU2_DPR15_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C07Cu)

/** \brief C080, CPUx Data Protection Range 16, Lower Bound Register */
#define CPU2_DPR16_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C080u)

/** \brief C084, CPUx Data Protection Range 16, Upper Bound Register */
#define CPU2_DPR16_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C084u)

/** \brief C088, CPUx Data Protection Range 17, Lower Bound Register */
#define CPU2_DPR17_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C088u)

/** \brief C08C, CPUx Data Protection Range 17, Upper Bound Register */
#define CPU2_DPR17_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C08Cu)

/** \brief D000, CPUx Code Protection Range 0 Lower Bound Register */
#define CPU2_CPR0_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D000u)

/** \brief D004, CPUx Code Protection Range 0 Upper Bound Register */
#define CPU2_CPR0_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D004u)

/** \brief D008, CPUx Code Protection Range 1 Lower Bound Register */
#define CPU2_CPR1_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D008u)

/** \brief D00C, CPUx Code Protection Range 1 Upper Bound Register */
#define CPU2_CPR1_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D00Cu)

/** \brief D010, CPUx Code Protection Range 2 Lower Bound Register */
#define CPU2_CPR2_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D010u)

/** \brief D014, CPUx Code Protection Range 2 Upper Bound Register */
#define CPU2_CPR2_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D014u)

/** \brief D018, CPUx Code Protection Range 3 Lower Bound Register */
#define CPU2_CPR3_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D018u)

/** \brief D01C, CPUx Code Protection Range 3 Upper Bound Register */
#define CPU2_CPR3_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D01Cu)

/** \brief D020, CPUx Code Protection Range 4 Lower Bound Register */
#define CPU2_CPR4_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D020u)

/** \brief D024, CPUx Code Protection Range 4 Upper Bound Register */
#define CPU2_CPR4_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D024u)

/** \brief D028, CPUx Code Protection Range 5 Lower Bound Register */
#define CPU2_CPR5_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D028u)

/** \brief D02C, CPUx Code Protection Range 5 Upper Bound Register */
#define CPU2_CPR5_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D02Cu)

/** \brief D030, CPUx Code Protection Range 6 Lower Bound Register */
#define CPU2_CPR6_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D030u)

/** \brief D034, CPUx Code Protection Range 6 Upper Bound Register */
#define CPU2_CPR6_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D034u)

/** \brief D038, CPUx Code Protection Range 7 Lower Bound Register */
#define CPU2_CPR7_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D038u)

/** \brief D03C, CPUx Code Protection Range 7 Upper Bound Register */
#define CPU2_CPR7_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D03Cu)

/** \brief D040, CPUx Code Protection Range 8 Lower Bound Register */
#define CPU2_CPR8_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D040u)

/** \brief D044, CPUx Code Protection Range 8 Upper Bound Register */
#define CPU2_CPR8_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D044u)

/** \brief D048, CPUx Code Protection Range 9 Lower Bound Register */
#define CPU2_CPR9_L /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D048u)

/** \brief D04C, CPUx Code Protection Range 9 Upper Bound Register */
#define CPU2_CPR9_U /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D04Cu)

/** \brief E000, CPUx Code Protection Execute Enable Register Set 0 */
#define CPU2_CPXE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF885E000u)

/** \brief E004, CPUx Code Protection Execute Enable Register Set 1 */
#define CPU2_CPXE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF885E004u)

/** \brief E008, CPUx Code Protection Execute Enable Register Set 2 */
#define CPU2_CPXE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF885E008u)

/** \brief E00C, CPUx Code Protection Execute Enable Register Set 3 */
#define CPU2_CPXE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF885E00Cu)

/** \brief E010, CPUx Data Protection Read Enable Register Set 0 */
#define CPU2_DPRE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF885E010u)

/** \brief E014, CPUx Data Protection Read Enable Register Set 1 */
#define CPU2_DPRE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF885E014u)

/** \brief E018, CPUx Data Protection Read Enable Register Set 2 */
#define CPU2_DPRE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF885E018u)

/** \brief E01C, CPUx Data Protection Read Enable Register Set 3 */
#define CPU2_DPRE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF885E01Cu)

/** \brief E020, CPUx Data Protection Write Enable Register Set 0 */
#define CPU2_DPWE_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF885E020u)

/** \brief E024, CPUx Data Protection Write Enable Register Set 1 */
#define CPU2_DPWE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF885E024u)

/** \brief E028, CPUx Data Protection Write Enable Register Set 2 */
#define CPU2_DPWE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF885E028u)

/** \brief E02C, CPUx Data Protection Write Enable Register Set 3 */
#define CPU2_DPWE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF885E02Cu)

/** \brief E040, CPUx Code Protection Execute Enable Register Set 4 */
#define CPU2_CPXE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF885E040u)

/** \brief E044, CPUx Code Protection Execute Enable Register Set 5 */
#define CPU2_CPXE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPXE*)0xF885E044u)

/** \brief E050, CPUx Data Protection Read Enable Register Set 4 */
#define CPU2_DPRE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF885E050u)

/** \brief E054, CPUx Data Protection Read Enable Register Set 5 */
#define CPU2_DPRE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPRE*)0xF885E054u)

/** \brief E060, CPUx Data Protection Write Enable Register Set 4 */
#define CPU2_DPWE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF885E060u)

/** \brief E064, CPUx Data Protection Write Enable Register Set 5 */
#define CPU2_DPWE_5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DPWE*)0xF885E064u)

/** \brief E400, CPUx Temporal Protection System Control Register */
#define CPU2_TPS_CON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF885E400u)

/** \brief E404, CPUx Temporal Protection System Timer Register 0 */
#define CPU2_TPS_TIMER0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF885E404u)

/** \brief E408, CPUx Temporal Protection System Timer Register 1 */
#define CPU2_TPS_TIMER1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF885E408u)

/** \brief E40C, CPUx Temporal Protection System Timer Register 2 */
#define CPU2_TPS_TIMER2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF885E40Cu)

/** \brief E440, CPUx Exception Entry Timer Load Value */
#define CPU2_TPS_EXTIM_ENTRY_LVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_ENTRY_LVAL*)0xF885E440u)

/** \brief E444, CPUx Exception Entry Timer Current Value */
#define CPU2_TPS_EXTIM_ENTRY_CVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_ENTRY_CVAL*)0xF885E444u)

/** \brief E448, CPUx Exception Exit  Timer Load Value */
#define CPU2_TPS_EXTIM_EXIT_LVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_EXIT_LVAL*)0xF885E448u)

/** \brief E44C, CPUx Exception Exit Timer Current Value */
#define CPU2_TPS_EXTIM_EXIT_CVAL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_EXIT_CVAL*)0xF885E44Cu)

/** \brief E450, CPUx Exception Timer Class Enable Register */
#define CPU2_TPS_EXTIM_CLASS_EN /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF885E450u)

/** \brief E454, CPUx Exception Timer Status Register */
#define CPU2_TPS_EXTIM_STAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF885E454u)

/** \brief E458, CPUx Exception Timer FCX Register */
#define CPU2_TPS_EXTIM_FCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF885E458u)

/** \brief F000, CPUx Trigger Event 0 */
#define CPU2_TR0_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F000u)
/** Alias (User Manual Name) for CPU2_TR0_EVT.
* To use register names with standard convension, please use CPU2_TR0_EVT.
*/
#define CPU2_TR0EVT (CPU2_TR0_EVT)

/** \brief F004, CPUx Trigger Address 0 */
#define CPU2_TR0_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F004u)
/** Alias (User Manual Name) for CPU2_TR0_ADR.
* To use register names with standard convension, please use CPU2_TR0_ADR.
*/
#define CPU2_TR0ADR (CPU2_TR0_ADR)

/** \brief F008, CPUx Trigger Event 1 */
#define CPU2_TR1_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F008u)
/** Alias (User Manual Name) for CPU2_TR1_EVT.
* To use register names with standard convension, please use CPU2_TR1_EVT.
*/
#define CPU2_TR1EVT (CPU2_TR1_EVT)

/** \brief F00C, CPUx Trigger Address 1 */
#define CPU2_TR1_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F00Cu)
/** Alias (User Manual Name) for CPU2_TR1_ADR.
* To use register names with standard convension, please use CPU2_TR1_ADR.
*/
#define CPU2_TR1ADR (CPU2_TR1_ADR)

/** \brief F010, CPUx Trigger Event 2 */
#define CPU2_TR2_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F010u)
/** Alias (User Manual Name) for CPU2_TR2_EVT.
* To use register names with standard convension, please use CPU2_TR2_EVT.
*/
#define CPU2_TR2EVT (CPU2_TR2_EVT)

/** \brief F014, CPUx Trigger Address 2 */
#define CPU2_TR2_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F014u)
/** Alias (User Manual Name) for CPU2_TR2_ADR.
* To use register names with standard convension, please use CPU2_TR2_ADR.
*/
#define CPU2_TR2ADR (CPU2_TR2_ADR)

/** \brief F018, CPUx Trigger Event 3 */
#define CPU2_TR3_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F018u)
/** Alias (User Manual Name) for CPU2_TR3_EVT.
* To use register names with standard convension, please use CPU2_TR3_EVT.
*/
#define CPU2_TR3EVT (CPU2_TR3_EVT)

/** \brief F01C, CPUx Trigger Address 3 */
#define CPU2_TR3_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F01Cu)
/** Alias (User Manual Name) for CPU2_TR3_ADR.
* To use register names with standard convension, please use CPU2_TR3_ADR.
*/
#define CPU2_TR3ADR (CPU2_TR3_ADR)

/** \brief F020, CPUx Trigger Event 4 */
#define CPU2_TR4_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F020u)
/** Alias (User Manual Name) for CPU2_TR4_EVT.
* To use register names with standard convension, please use CPU2_TR4_EVT.
*/
#define CPU2_TR4EVT (CPU2_TR4_EVT)

/** \brief F024, CPUx Trigger Address 4 */
#define CPU2_TR4_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F024u)
/** Alias (User Manual Name) for CPU2_TR4_ADR.
* To use register names with standard convension, please use CPU2_TR4_ADR.
*/
#define CPU2_TR4ADR (CPU2_TR4_ADR)

/** \brief F028, CPUx Trigger Event 5 */
#define CPU2_TR5_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F028u)
/** Alias (User Manual Name) for CPU2_TR5_EVT.
* To use register names with standard convension, please use CPU2_TR5_EVT.
*/
#define CPU2_TR5EVT (CPU2_TR5_EVT)

/** \brief F02C, CPUx Trigger Address 5 */
#define CPU2_TR5_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F02Cu)
/** Alias (User Manual Name) for CPU2_TR5_ADR.
* To use register names with standard convension, please use CPU2_TR5_ADR.
*/
#define CPU2_TR5ADR (CPU2_TR5_ADR)

/** \brief F030, CPUx Trigger Event 6 */
#define CPU2_TR6_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F030u)
/** Alias (User Manual Name) for CPU2_TR6_EVT.
* To use register names with standard convension, please use CPU2_TR6_EVT.
*/
#define CPU2_TR6EVT (CPU2_TR6_EVT)

/** \brief F034, CPUx Trigger Address 6 */
#define CPU2_TR6_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F034u)
/** Alias (User Manual Name) for CPU2_TR6_ADR.
* To use register names with standard convension, please use CPU2_TR6_ADR.
*/
#define CPU2_TR6ADR (CPU2_TR6_ADR)

/** \brief F038, CPUx Trigger Event 7 */
#define CPU2_TR7_EVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F038u)
/** Alias (User Manual Name) for CPU2_TR7_EVT.
* To use register names with standard convension, please use CPU2_TR7_EVT.
*/
#define CPU2_TR7EVT (CPU2_TR7_EVT)

/** \brief F03C, CPUx Trigger Address 7 */
#define CPU2_TR7_ADR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F03Cu)
/** Alias (User Manual Name) for CPU2_TR7_ADR.
* To use register names with standard convension, please use CPU2_TR7_ADR.
*/
#define CPU2_TR7ADR (CPU2_TR7_ADR)

/** \brief FC00, CPUx Counter Control */
#define CPU2_CCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CCTRL*)0xF885FC00u)

/** \brief FC04, CPUx CPU Clock Cycle Count */
#define CPU2_CCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CCNT*)0xF885FC04u)

/** \brief FC08, CPUx Instruction Count */
#define CPU2_ICNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ICNT*)0xF885FC08u)

/** \brief FC0C, CPUx Multi-Count Register 1 */
#define CPU2_M1CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M1CNT*)0xF885FC0Cu)

/** \brief FC10, CPUx Multi-Count Register 2 */
#define CPU2_M2CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M2CNT*)0xF885FC10u)

/** \brief FC14, CPUx Multi-Count Register 3 */
#define CPU2_M3CNT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_M3CNT*)0xF885FC14u)

/** \brief FD00, CPUx Debug Status Register */
#define CPU2_DBGSR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DBGSR*)0xF885FD00u)

/** \brief FD08, CPUx External Event Register */
#define CPU2_EXEVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_EXEVT*)0xF885FD08u)

/** \brief FD0C, CPUx Core Register Access Event */
#define CPU2_CREVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CREVT*)0xF885FD0Cu)

/** \brief FD10, CPUx Software Debug Event */
#define CPU2_SWEVT /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SWEVT*)0xF885FD10u)

/** \brief FD30, CPUx TriggerAddressx */
#define CPU2_TRIG_ACC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF885FD30u)

/** \brief FD40, CPUx Debug Monitor Start Address */
#define CPU2_DMS /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DMS*)0xF885FD40u)

/** \brief FD44, CPUx Debug Context Save Area Pointer */
#define CPU2_DCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DCX*)0xF885FD44u)

/** \brief FD48, CPUx Debug Trap Control Register */
#define CPU2_DBGTCR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF885FD48u)

/** \brief FE00, CPUx Previous Context Information Register */
#define CPU2_PCXI /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PCXI*)0xF885FE00u)

/** \brief FE04, CPUx Program Status Word */
#define CPU2_PSW /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PSW*)0xF885FE04u)

/** \brief FE08, CPUx Program Counter */
#define CPU2_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_PC*)0xF885FE08u)

/** \brief FE14, CPUx System Configuration Register */
#define CPU2_SYSCON /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_SYSCON*)0xF885FE14u)

/** \brief FE18, CPUx Identification Register TC1.6.2P */
#define CPU2_CPU_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF885FE18u)

/** \brief FE1C, CPUx Core Identification Register */
#define CPU2_CORE_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF885FE1Cu)

/** \brief FE20, CPUx Base Interrupt Vector Table Pointer */
#define CPU2_BIV /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BIV*)0xF885FE20u)

/** \brief FE24, CPUx Base Trap Vector Table Pointer */
#define CPU2_BTV /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_BTV*)0xF885FE24u)

/** \brief FE28, CPUx Interrupt Stack Pointer */
#define CPU2_ISP /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ISP*)0xF885FE28u)

/** \brief FE2C, CPUx Interrupt Control Register */
#define CPU2_ICR /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_ICR*)0xF885FE2Cu)

/** \brief FE38, CPUx Free CSA List Head Pointer */
#define CPU2_FCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_FCX*)0xF885FE38u)

/** \brief FE3C, CPUx Free CSA List Limit Pointer */
#define CPU2_LCX /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_LCX*)0xF885FE3Cu)

/** \brief FE50, CPUx Customer ID register */
#define CPU2_CUS_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF885FE50u)

/** \brief FF00, CPUx Data General Purpose Register 0 */
#define CPU2_D0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF00u)

/** \brief FF04, CPUx Data General Purpose Register 1 */
#define CPU2_D1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF04u)

/** \brief FF08, CPUx Data General Purpose Register 2 */
#define CPU2_D2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF08u)

/** \brief FF0C, CPUx Data General Purpose Register 3 */
#define CPU2_D3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF0Cu)

/** \brief FF10, CPUx Data General Purpose Register 4 */
#define CPU2_D4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF10u)

/** \brief FF14, CPUx Data General Purpose Register 5 */
#define CPU2_D5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF14u)

/** \brief FF18, CPUx Data General Purpose Register 6 */
#define CPU2_D6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF18u)

/** \brief FF1C, CPUx Data General Purpose Register 7 */
#define CPU2_D7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF1Cu)

/** \brief FF20, CPUx Data General Purpose Register 8 */
#define CPU2_D8 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF20u)

/** \brief FF24, CPUx Data General Purpose Register 9 */
#define CPU2_D9 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF24u)

/** \brief FF28, CPUx Data General Purpose Register 10 */
#define CPU2_D10 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF28u)

/** \brief FF2C, CPUx Data General Purpose Register 11 */
#define CPU2_D11 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF2Cu)

/** \brief FF30, CPUx Data General Purpose Register 12 */
#define CPU2_D12 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF30u)

/** \brief FF34, CPUx Data General Purpose Register 13 */
#define CPU2_D13 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF34u)

/** \brief FF38, CPUx Data General Purpose Register 14 */
#define CPU2_D14 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF38u)

/** \brief FF3C, CPUx Data General Purpose Register 15 */
#define CPU2_D15 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_D*)0xF885FF3Cu)

/** \brief FF80, CPUx Address General Purpose Register 0 */
#define CPU2_A0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FF80u)

/** \brief FF84, CPUx Address General Purpose Register 1 */
#define CPU2_A1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FF84u)

/** \brief FF88, CPUx Address General Purpose Register 2 */
#define CPU2_A2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FF88u)

/** \brief FF8C, CPUx Address General Purpose Register 3 */
#define CPU2_A3 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FF8Cu)

/** \brief FF90, CPUx Address General Purpose Register 4 */
#define CPU2_A4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FF90u)

/** \brief FF94, CPUx Address General Purpose Register 5 */
#define CPU2_A5 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FF94u)

/** \brief FF98, CPUx Address General Purpose Register 6 */
#define CPU2_A6 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FF98u)

/** \brief FF9C, CPUx Address General Purpose Register 7 */
#define CPU2_A7 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FF9Cu)

/** \brief FFA0, CPUx Address General Purpose Register 8 */
#define CPU2_A8 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FFA0u)

/** \brief FFA4, CPUx Address General Purpose Register 9 */
#define CPU2_A9 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FFA4u)

/** \brief FFA8, CPUx Address General Purpose Register 10 */
#define CPU2_A10 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FFA8u)

/** \brief FFAC, CPUx Address General Purpose Register 11 */
#define CPU2_A11 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FFACu)

/** \brief FFB0, CPUx Address General Purpose Register 12 */
#define CPU2_A12 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FFB0u)

/** \brief FFB4, CPUx Address General Purpose Register 13 */
#define CPU2_A13 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FFB4u)

/** \brief FFB8, CPUx Address General Purpose Register 14 */
#define CPU2_A14 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FFB8u)

/** \brief FFBC, CPUx Address General Purpose Register 15 */
#define CPU2_A15 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPU_A*)0xF885FFBCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXCPU_REG_H */
