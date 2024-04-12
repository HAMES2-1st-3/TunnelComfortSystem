/**
 * \file IfxScuWdt.asm.h
 * \brief SCU  basic functionality
 * \ingroup IfxLld_Scu
 *
 * \version iLLD_1_0_1_17_0
 * \copyright Copyright (c) 2019 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * \defgroup IfxLld_Scu_Std_Wdt_Operative Wdt Operative Functionality
 * \ingroup IfxLld_Scu_Std_Wdt
 */
#ifndef IFXSCUWDT_ASM_H
#define IFXSCUWDT_ASM_H 1

#include "tc27xd/Ifx_Types.h"
#include "IfxScu_reg.h"

/** \addtogroup IfxLld_Scu_Std_Wdt_Operative
 * \{ */
#define IFXSCUWDT_CALCULATELFSR(pwd) ((((((pwd) >> 13) ^ ((pwd) >> 12) ^ ((pwd) >> 11) ^ ((pwd) >> 1 )) & 1)) | (((pwd)<<1) & 0x3FFF))
/**
 * \brief SCUWDT Inline API utility to Calculte new 14-bit LFSR.
 *
 * This API will Calculte new 14-bit LFSR (Linear Feedback Shift Register) with characteristic polynomial
 * x14+x13+x12+x2+1.
 *
 * \param password Password for which LFSR value to be calculated.
 * \return New LFSR.
 */
IFX_INLINE uint16 IfxScuWdt_calculateLfsr(uint16 password);
/** \}  */

/**
 * \brief SCUWDT Inline API utility to Calculte new 14-bit LFSR.
 */
#if defined(__TASKING__)
IFX_INLINE uint16 IfxScuWdt_calculateLfsr(uint16 pwd)
{
    /* *INDENT-OFF* */
    uint32 temp = pwd;
    uint16 res;

    __asm("xor.t  %0,%1,13,%1,12 \n\
           xor.t  %0,%0,0,%1,11  \n\
           sh.xor.t %1,%0,0,%1,1  \n\
           mov d4,#0 \n\
           mov d5,#14 \n\
           extr.u %0,%1,e4     \n" : "=&d" (res) : "d" (temp));
    return res;
    /* *INDENT-ON* */
}
#elif defined(__HIGHTEC__)
IFX_INLINE uint16 IfxScuWdt_calculateLfsr(uint16 pwd)
{
    /* *INDENT-OFF* */
    uint32 temp = pwd;
    uint16 res;

    __asm("xor.t  %0,%1,13,%1,12 \n\
           xor.t  %0,%0,0,%1,11  \n\
           sh.xor.t %1,%0,0,%1,1  \n\
           extr.u %0,%1,0,14     \n" : "=&d" (res) : "d" (temp));
    return res;
    /* *INDENT-ON* */
}
#elif defined(__GNUC__) && !defined(__HIGHTEC__)
IFX_INLINE uint16 IfxScuWdt_calculateLfsr(uint16 pwd)
{
    /* *INDENT-OFF* */
    uint32 temp = pwd;
    uint16 res;

    __asm("xor.t  %0,%1,13,%1,12 \n\
           xor.t  %0,%0,0,%1,11  \n\
           sh.xor.t %1,%0,0,%1,1  \n\
           extr.u %0,%1,0,14     \n" : "=&d" (res) : "d" (temp));
    return res;
    /* *INDENT-ON* */
}
#elif defined(__DCC__)
/* *INDENT-OFF* */
asm uint16 IfxScuWdt_calculateLfsr_asm(uint16 password)
{
%reg password
!"%d2"
    xor.t %d2, password, 13, password, 12
    xor.t %d2, %d2, 0, password, 11
	sh.xor.t password,%d2,0,password,1
	extr.u %d2,password,0,14
}
/* *INDENT-ON* */
IFX_INLINE uint16 IfxScuWdt_calculateLfsr(uint16 pwd)
{
    return IfxScuWdt_calculateLfsr_asm(pwd);
}
#elif defined(__ghs__)
IFX_INLINE uint16 IfxScuWdt_calculateLfsr(uint16 pwd)
{
    /* *INDENT-OFF* */
    uint32 temp = pwd;
    uint16 res;

    __asm("xor.t  %0,%1,13,%1,12 \n\
           xor.t  %0,%0,0,%1,11  \n\
           sh.xor.t %1,%0,0,%1,1  \n\
           extr.u %0,%1,0,14     \n" : "=&d" (res) : "d" (temp));
    return res;
    /* *INDENT-ON* */
}
#endif
#endif