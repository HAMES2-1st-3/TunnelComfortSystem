/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MSC" of TriCore TC1797 (42 SFRs) */

#include <tc1797/msc/addr.h>

#include <tc1797/msc/masks.h>
#include <tc1797/msc/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1797/msc/types.h>
#include <tc1797/msc/sharetypes.h>

#ifndef _HAVE_TRICORE_MSC_H_
#define _HAVE_TRICORE_MSC_H_

#include <tricore-abs-noabs.h>

SFR_ABS (MSC0_CLC, MSCn_CLC_t, MSC0_CLC_ADDR);    /* "MSC0 Clock Control Register" */
SFR_ABS (MSC0_DC, MSCn_DC_t, MSC0_DC_ADDR);       /* "Downstream Command Register" */
SFR_ABS (MSC0_DD, MSCn_DD_t, MSC0_DD_ADDR);       /* "Downstream Data Register" */
SFR_ABS (MSC0_DSC, MSCn_DSC_t, MSC0_DSC_ADDR);    /* "Downstream Control Register" */
SFR_ABS (MSC0_DSDSH, MSCn_DSDSH_t, MSC0_DSDSH_ADDR); /* "Downstream Select Data Source High Register" */
SFR_ABS (MSC0_DSDSL, MSCn_DSDSL_t, MSC0_DSDSL_ADDR); /* "Downstream Select Data Source Low Register" */
SFR_ABS (MSC0_DSS, MSCn_DSS_t, MSC0_DSS_ADDR);    /* "Downstream Status Register" */
SFR_ABS (MSC0_ESR, MSCn_ESR_t, MSC0_ESR_ADDR);    /* "Emergency Stop Register" */
SFR_ABS (MSC0_FDR, MSCn_FDR_t, MSC0_FDR_ADDR);    /* "MSC0 Fractional Divider Register" */
SFR_ABS (MSC0_ICR, MSCn_ICR_t, MSC0_ICR_ADDR);    /* "Interrupt Control Register" */
SFR_ABS (MSC0_ID, MSCn_ID_t, MSC0_ID_ADDR);       /* "Module Identification Register" */
SFR_ABS (MSC0_ISC, MSCn_ISC_t, MSC0_ISC_ADDR);    /* "Interrupt Set Clear Register" */
SFR_ABS (MSC0_ISR, MSCn_ISR_t, MSC0_ISR_ADDR);    /* "Interrupt Status Register" */
SFR_ABS (MSC0_OCR, MSCn_OCR_t, MSC0_OCR_ADDR);    /* "Output Control Register" */
SFR_ABS (MSC0_SRC0, MSCn_SRCm_t, MSC0_SRC0_ADDR); /* "Service Request Control Register 0" */
SFR_ABS (MSC0_SRC1, MSCn_SRCm_t, MSC0_SRC1_ADDR); /* "Service Request Control Register 1" */
SFR_ABS (MSC0_UD0, MSCn_UDm_t, MSC0_UD0_ADDR);    /* "Upstream Data Register 0" */
SFR_ABS (MSC0_UD1, MSCn_UDm_t, MSC0_UD1_ADDR);    /* "Upstream Data Register 1" */
SFR_ABS (MSC0_UD2, MSCn_UDm_t, MSC0_UD2_ADDR);    /* "Upstream Data Register 2" */
SFR_ABS (MSC0_UD3, MSCn_UDm_t, MSC0_UD3_ADDR);    /* "Upstream Data Register 3" */
SFR_ABS (MSC0_USR, MSCn_USR_t, MSC0_USR_ADDR);    /* "Upstream Status Register" */
SFR_ABS (MSC1_CLC, MSCn_CLC_t, MSC1_CLC_ADDR);    /* "MSC1 Clock Control Register" */
SFR_ABS (MSC1_DC, MSCn_DC_t, MSC1_DC_ADDR);       /* "Downstream Command Register" */
SFR_ABS (MSC1_DD, MSCn_DD_t, MSC1_DD_ADDR);       /* "Downstream Data Register" */
SFR_ABS (MSC1_DSC, MSCn_DSC_t, MSC1_DSC_ADDR);    /* "Downstream Control Register" */
SFR_ABS (MSC1_DSDSH, MSCn_DSDSH_t, MSC1_DSDSH_ADDR); /* "Downstream Select Data Source High Register" */
SFR_ABS (MSC1_DSDSL, MSCn_DSDSL_t, MSC1_DSDSL_ADDR); /* "Downstream Select Data Source Low Register" */
SFR_ABS (MSC1_DSS, MSCn_DSS_t, MSC1_DSS_ADDR);    /* "Downstream Status Register" */
SFR_ABS (MSC1_ESR, MSCn_ESR_t, MSC1_ESR_ADDR);    /* "Emergency Stop Register" */
SFR_ABS (MSC1_FDR, MSCn_FDR_t, MSC1_FDR_ADDR);    /* "MSC1 Fractional Divider Register" */
SFR_ABS (MSC1_ICR, MSCn_ICR_t, MSC1_ICR_ADDR);    /* "Interrupt Control Register" */
SFR_ABS (MSC1_ID, MSCn_ID_t, MSC1_ID_ADDR);       /* "Module Identification Register" */
SFR_ABS (MSC1_ISC, MSCn_ISC_t, MSC1_ISC_ADDR);    /* "Interrupt Set Clear Register" */
SFR_ABS (MSC1_ISR, MSCn_ISR_t, MSC1_ISR_ADDR);    /* "Interrupt Status Register" */
SFR_ABS (MSC1_OCR, MSCn_OCR_t, MSC1_OCR_ADDR);    /* "Output Control Register" */
SFR_ABS (MSC1_SRC0, MSCn_SRCm_t, MSC1_SRC0_ADDR); /* "Service Request Control Register 0" */
SFR_ABS (MSC1_SRC1, MSCn_SRCm_t, MSC1_SRC1_ADDR); /* "Service Request Control Register 1" */
SFR_ABS (MSC1_UD0, MSCn_UDm_t, MSC1_UD0_ADDR);    /* "Upstream Data Register 0" */
SFR_ABS (MSC1_UD1, MSCn_UDm_t, MSC1_UD1_ADDR);    /* "Upstream Data Register 1" */
SFR_ABS (MSC1_UD2, MSCn_UDm_t, MSC1_UD2_ADDR);    /* "Upstream Data Register 2" */
SFR_ABS (MSC1_UD3, MSCn_UDm_t, MSC1_UD3_ADDR);    /* "Upstream Data Register 3" */
SFR_ABS (MSC1_USR, MSCn_USR_t, MSC1_USR_ADDR);    /* "Upstream Status Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MSC_H_ (block "MSC") */

