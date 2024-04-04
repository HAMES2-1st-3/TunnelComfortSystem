/**
 * \file IfxCcu6_reg.h
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
 * \defgroup IfxSfr_Ccu6_Registers_Cfg Ccu6 address
 * \ingroup IfxSfr_Ccu6_Registers
 * 
 * \defgroup IfxSfr_Ccu6_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Ccu6_Registers_Cfg
 *
 * \defgroup IfxSfr_Ccu6_Registers_Cfg_Ccu60 2-CCU60
 * \ingroup IfxSfr_Ccu6_Registers_Cfg
 *
 * \defgroup IfxSfr_Ccu6_Registers_Cfg_Ccu61 2-CCU61
 * \ingroup IfxSfr_Ccu6_Registers_Cfg
 *
 *
 */
#ifndef IFXCCU6_REG_H
#define IFXCCU6_REG_H 1
/******************************************************************************/
#include "IfxCcu6_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Ccu6_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CCU6 object */
#define MODULE_CCU60 /*lint --e(923, 9078)*/ ((*(Ifx_CCU6*)0xF0002A00u))
#define MODULE_CCU61 /*lint --e(923, 9078)*/ ((*(Ifx_CCU6*)0xF0002B00u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Ccu6_Registers_Cfg_Ccu60
 * \{  */
/** \brief 0, Clock Control Register */
#define CCU60_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CLC*)0xF0002A00u)

/** \brief 4, Module Configuration Register */
#define CCU60_MCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MCFG*)0xF0002A04u)

/** \brief 8, Module Identification Register */
#define CCU60_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_ID*)0xF0002A08u)

/** \brief C, CCU60 Module Output Select Register */
#define CCU60_MOSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MOSEL*)0xF0002A0Cu)

/** \brief 10, Port Input Select Register 0 */
#define CCU60_PISEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_PISEL0*)0xF0002A10u)

/** \brief 14, Port Input Select Register 2 */
#define CCU60_PISEL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_PISEL2*)0xF0002A14u)

/** \brief 1C, Kernel State Control Sensitivity Register */
#define CCU60_KSCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_KSCSR*)0xF0002A1Cu)

/** \brief 20, Timer T12 Counter Register */
#define CCU60_T12 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T12*)0xF0002A20u)

/** \brief 24, Timer 12 Period Register */
#define CCU60_T12PR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T12PR*)0xF0002A24u)

/** \brief 28, Dead-Time Control Register for Timer12 */
#define CCU60_T12DTC /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T12DTC*)0xF0002A28u)

/** \brief 30, Capture/Compare Register for Channel CC60 */
#define CCU60_CC6R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6R*)0xF0002A30u)
/** Alias (User Manual Name) for CCU60_CC6R0.
* To use register names with standard convension, please use CCU60_CC6R0.
*/
#define CCU60_CC60R (CCU60_CC6R0)

/** \brief 34, Capture/Compare Register for Channel CC61 */
#define CCU60_CC6R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6R*)0xF0002A34u)
/** Alias (User Manual Name) for CCU60_CC6R1.
* To use register names with standard convension, please use CCU60_CC6R1.
*/
#define CCU60_CC61R (CCU60_CC6R1)

/** \brief 38, Capture/Compare Register for Channel CC62 */
#define CCU60_CC6R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6R*)0xF0002A38u)
/** Alias (User Manual Name) for CCU60_CC6R2.
* To use register names with standard convension, please use CCU60_CC6R2.
*/
#define CCU60_CC62R (CCU60_CC6R2)

/** \brief 40, Capture/Compare Shadow Reg. for Channel CC60 */
#define CCU60_CC6SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6SR*)0xF0002A40u)
/** Alias (User Manual Name) for CCU60_CC6SR0.
* To use register names with standard convension, please use CCU60_CC6SR0.
*/
#define CCU60_CC60SR (CCU60_CC6SR0)

/** \brief 44, Capture/Compare Shadow Reg. for Channel CC61 */
#define CCU60_CC6SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6SR*)0xF0002A44u)
/** Alias (User Manual Name) for CCU60_CC6SR1.
* To use register names with standard convension, please use CCU60_CC6SR1.
*/
#define CCU60_CC61SR (CCU60_CC6SR1)

/** \brief 48, Capture/Compare Shadow Reg. for Channel CC62 */
#define CCU60_CC6SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6SR*)0xF0002A48u)
/** Alias (User Manual Name) for CCU60_CC6SR2.
* To use register names with standard convension, please use CCU60_CC6SR2.
*/
#define CCU60_CC62SR (CCU60_CC6SR2)

/** \brief 50, Timer T13 Counter Register */
#define CCU60_T13 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T13*)0xF0002A50u)

/** \brief 54, Timer 13 Period Register */
#define CCU60_T13PR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T13PR*)0xF0002A54u)

/** \brief 58, Compare Register for T13 */
#define CCU60_CC63R /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC63R*)0xF0002A58u)

/** \brief 5C, Compare Shadow Register for T13 */
#define CCU60_CC63SR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC63SR*)0xF0002A5Cu)

/** \brief 60, Compare State Register */
#define CCU60_CMPSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CMPSTAT*)0xF0002A60u)

/** \brief 64, Compare State Modification Register */
#define CCU60_CMPMODIF /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CMPMODIF*)0xF0002A64u)

/** \brief 68, T12 Mode Select Register */
#define CCU60_T12MSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T12MSEL*)0xF0002A68u)

/** \brief 70, Timer Control Register 0 */
#define CCU60_TCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_TCTR0*)0xF0002A70u)

/** \brief 74, Timer Control Register 2 */
#define CCU60_TCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_TCTR2*)0xF0002A74u)

/** \brief 78, Timer Control Register 4 */
#define CCU60_TCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_TCTR4*)0xF0002A78u)

/** \brief 80, Modulation Control Register */
#define CCU60_MODCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MODCTR*)0xF0002A80u)

/** \brief 84, Trap Control Register */
#define CCU60_TRPCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_TRPCTR*)0xF0002A84u)

/** \brief 88, Passive State Level Register */
#define CCU60_PSLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_PSLR*)0xF0002A88u)

/** \brief 8C, Multi-Channel Mode Output Shadow Register */
#define CCU60_MCMOUTS /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MCMOUTS*)0xF0002A8Cu)

/** \brief 90, Multi-Channel Mode Output Register */
#define CCU60_MCMOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MCMOUT*)0xF0002A90u)

/** \brief 94, Multi-Channel Mode Control Register */
#define CCU60_MCMCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MCMCTR*)0xF0002A94u)

/** \brief 98, Input Monitoring Register */
#define CCU60_IMON /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_IMON*)0xF0002A98u)

/** \brief 9C, Lost Indicator Register */
#define CCU60_LI /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_LI*)0xF0002A9Cu)

/** \brief A0, Interrupt Status Register */
#define CCU60_IS /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_IS*)0xF0002AA0u)

/** \brief A4, Interrupt Status Set Register */
#define CCU60_ISS /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_ISS*)0xF0002AA4u)

/** \brief A8, Interrupt Status Reset Register */
#define CCU60_ISR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_ISR*)0xF0002AA8u)

/** \brief AC, Interrupt Node Pointer Register */
#define CCU60_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_INP*)0xF0002AACu)

/** \brief B0, Interrupt Enable Register */
#define CCU60_IEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_IEN*)0xF0002AB0u)

/** \brief E8, OCDS Control and Status Register */
#define CCU60_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_OCS*)0xF0002AE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define CCU60_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_KRSTCLR*)0xF0002AECu)

/** \brief F0, Kernel Reset Register 1 */
#define CCU60_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_KRST1*)0xF0002AF0u)

/** \brief F4, Kernel Reset Register 0 */
#define CCU60_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_KRST0*)0xF0002AF4u)

/** \brief FC, Access Enable Register 0 */
#define CCU60_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_ACCEN0*)0xF0002AFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Ccu6_Registers_Cfg_Ccu61
 * \{  */
/** \brief 0, Clock Control Register */
#define CCU61_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CLC*)0xF0002B00u)

/** \brief 4, Module Configuration Register */
#define CCU61_MCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MCFG*)0xF0002B04u)

/** \brief 8, Module Identification Register */
#define CCU61_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_ID*)0xF0002B08u)

/** \brief 10, Port Input Select Register 0 */
#define CCU61_PISEL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_PISEL0*)0xF0002B10u)

/** \brief 14, Port Input Select Register 2 */
#define CCU61_PISEL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_PISEL2*)0xF0002B14u)

/** \brief 1C, Kernel State Control Sensitivity Register */
#define CCU61_KSCSR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_KSCSR*)0xF0002B1Cu)

/** \brief 20, Timer T12 Counter Register */
#define CCU61_T12 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T12*)0xF0002B20u)

/** \brief 24, Timer 12 Period Register */
#define CCU61_T12PR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T12PR*)0xF0002B24u)

/** \brief 28, Dead-Time Control Register for Timer12 */
#define CCU61_T12DTC /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T12DTC*)0xF0002B28u)

/** \brief 30, Capture/Compare Register for Channel CC60 */
#define CCU61_CC6R0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6R*)0xF0002B30u)
/** Alias (User Manual Name) for CCU61_CC6R0.
* To use register names with standard convension, please use CCU61_CC6R0.
*/
#define CCU61_CC60R (CCU61_CC6R0)

/** \brief 34, Capture/Compare Register for Channel CC61 */
#define CCU61_CC6R1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6R*)0xF0002B34u)
/** Alias (User Manual Name) for CCU61_CC6R1.
* To use register names with standard convension, please use CCU61_CC6R1.
*/
#define CCU61_CC61R (CCU61_CC6R1)

/** \brief 38, Capture/Compare Register for Channel CC62 */
#define CCU61_CC6R2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6R*)0xF0002B38u)
/** Alias (User Manual Name) for CCU61_CC6R2.
* To use register names with standard convension, please use CCU61_CC6R2.
*/
#define CCU61_CC62R (CCU61_CC6R2)

/** \brief 40, Capture/Compare Shadow Reg. for Channel CC60 */
#define CCU61_CC6SR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6SR*)0xF0002B40u)
/** Alias (User Manual Name) for CCU61_CC6SR0.
* To use register names with standard convension, please use CCU61_CC6SR0.
*/
#define CCU61_CC60SR (CCU61_CC6SR0)

/** \brief 44, Capture/Compare Shadow Reg. for Channel CC61 */
#define CCU61_CC6SR1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6SR*)0xF0002B44u)
/** Alias (User Manual Name) for CCU61_CC6SR1.
* To use register names with standard convension, please use CCU61_CC6SR1.
*/
#define CCU61_CC61SR (CCU61_CC6SR1)

/** \brief 48, Capture/Compare Shadow Reg. for Channel CC62 */
#define CCU61_CC6SR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC6SR*)0xF0002B48u)
/** Alias (User Manual Name) for CCU61_CC6SR2.
* To use register names with standard convension, please use CCU61_CC6SR2.
*/
#define CCU61_CC62SR (CCU61_CC6SR2)

/** \brief 50, Timer T13 Counter Register */
#define CCU61_T13 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T13*)0xF0002B50u)

/** \brief 54, Timer 13 Period Register */
#define CCU61_T13PR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T13PR*)0xF0002B54u)

/** \brief 58, Compare Register for T13 */
#define CCU61_CC63R /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC63R*)0xF0002B58u)

/** \brief 5C, Compare Shadow Register for T13 */
#define CCU61_CC63SR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CC63SR*)0xF0002B5Cu)

/** \brief 60, Compare State Register */
#define CCU61_CMPSTAT /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CMPSTAT*)0xF0002B60u)

/** \brief 64, Compare State Modification Register */
#define CCU61_CMPMODIF /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_CMPMODIF*)0xF0002B64u)

/** \brief 68, T12 Mode Select Register */
#define CCU61_T12MSEL /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_T12MSEL*)0xF0002B68u)

/** \brief 70, Timer Control Register 0 */
#define CCU61_TCTR0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_TCTR0*)0xF0002B70u)

/** \brief 74, Timer Control Register 2 */
#define CCU61_TCTR2 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_TCTR2*)0xF0002B74u)

/** \brief 78, Timer Control Register 4 */
#define CCU61_TCTR4 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_TCTR4*)0xF0002B78u)

/** \brief 80, Modulation Control Register */
#define CCU61_MODCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MODCTR*)0xF0002B80u)

/** \brief 84, Trap Control Register */
#define CCU61_TRPCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_TRPCTR*)0xF0002B84u)

/** \brief 88, Passive State Level Register */
#define CCU61_PSLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_PSLR*)0xF0002B88u)

/** \brief 8C, Multi-Channel Mode Output Shadow Register */
#define CCU61_MCMOUTS /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MCMOUTS*)0xF0002B8Cu)

/** \brief 90, Multi-Channel Mode Output Register */
#define CCU61_MCMOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MCMOUT*)0xF0002B90u)

/** \brief 94, Multi-Channel Mode Control Register */
#define CCU61_MCMCTR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_MCMCTR*)0xF0002B94u)

/** \brief 98, Input Monitoring Register */
#define CCU61_IMON /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_IMON*)0xF0002B98u)

/** \brief 9C, Lost Indicator Register */
#define CCU61_LI /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_LI*)0xF0002B9Cu)

/** \brief A0, Interrupt Status Register */
#define CCU61_IS /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_IS*)0xF0002BA0u)

/** \brief A4, Interrupt Status Set Register */
#define CCU61_ISS /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_ISS*)0xF0002BA4u)

/** \brief A8, Interrupt Status Reset Register */
#define CCU61_ISR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_ISR*)0xF0002BA8u)

/** \brief AC, Interrupt Node Pointer Register */
#define CCU61_INP /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_INP*)0xF0002BACu)

/** \brief B0, Interrupt Enable Register */
#define CCU61_IEN /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_IEN*)0xF0002BB0u)

/** \brief E8, OCDS Control and Status Register */
#define CCU61_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_OCS*)0xF0002BE8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define CCU61_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_KRSTCLR*)0xF0002BECu)

/** \brief F0, Kernel Reset Register 1 */
#define CCU61_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_KRST1*)0xF0002BF0u)

/** \brief F4, Kernel Reset Register 0 */
#define CCU61_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_KRST0*)0xF0002BF4u)

/** \brief FC, Access Enable Register 0 */
#define CCU61_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CCU6_ACCEN0*)0xF0002BFCu)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXCCU6_REG_H */
