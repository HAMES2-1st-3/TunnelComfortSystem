/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MSC0 LL" of TriCore TC1764 (21 SFRs) */

#ifndef _HAVE_TRICORE_MSC0_ADDRESSES_H_
#define _HAVE_TRICORE_MSC0_ADDRESSES_H_

#define MSC0_CLC_ADDR         0xF0000800     /* "MSC Clock Control Register" */
#define MSC0_ID_ADDR          0xF0000808     /* "MSC Module Identification Register" */
#define MSC0_FDR_ADDR         0xF000080C     /* "MSC Fractional Divider Register" */
#define MSC0_USR_ADDR         0xF0000810     /* "Upstream Status Register" */
#define MSC0_DSC_ADDR         0xF0000814     /* "Downstream Control Register" */
#define MSC0_DSS_ADDR         0xF0000818     /* "Downstream Status Register" */
#define MSC0_DD_ADDR          0xF000081C     /* "Downstream Data Register" */
#define MSC0_DC_ADDR          0xF0000820     /* "Downstream Command Register" */
#define MSC0_DSDSL_ADDR       0xF0000824     /* "Downstream Select Data Source Register Low" */
#define MSC0_DSDSH_ADDR       0xF0000828     /* "Downstream Select Data Source Register High" */
#define MSC0_ESR_ADDR         0xF000082C     /* "MSC Emergency Stop Register" */
#define MSC0_UD0_ADDR         0xF0000830     /* "Upstream Data Register 0" */
#define MSC0_UD1_ADDR         0xF0000834     /* "Upstream Data Register 1" */
#define MSC0_UD2_ADDR         0xF0000838     /* "Upstream Data Register 2" */
#define MSC0_UD3_ADDR         0xF000083C     /* "Upstream Data Register 3" */
#define MSC0_ICR_ADDR         0xF0000840     /* "MSC Interrupt Control Register" */
#define MSC0_ISR_ADDR         0xF0000844     /* "MSC Interrupt Status Register" */
#define MSC0_ISC_ADDR         0xF0000848     /* "Interrupt Set Clear Register" */
#define MSC0_OCR_ADDR         0xF000084C     /* "Output Control Register" */
#define MSC0_SRC1_ADDR        0xF00008F8     /* "MSC Service Request Control Register 1" */
#define MSC0_SRC0_ADDR        0xF00008FC     /* "MSC Service Request Control Register 0" */


#endif /* _HAVE_TRICORE_MSC0_ADDRESSES_H_ (block "MSC0 LL") */

