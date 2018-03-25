/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RLC_Config_v14xy_H_
#define	_RLC_Config_v14xy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "PollByte-r14.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Config_v14xy_PR {
	RLC_Config_v14xy_PR_NOTHING,	/* No components present */
	RLC_Config_v14xy_PR_release,
	RLC_Config_v14xy_PR_setup
} RLC_Config_v14xy_PR;

/* RLC-Config-v14xy */
typedef struct RLC_Config_v14xy {
	RLC_Config_v14xy_PR present;
	union RLC_Config_v14xy_u {
		NULL_t	 release;
		struct RLC_Config_v14xy__setup {
			PollByte_r14_t	 pollByte_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_v14xy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_v14xy;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_v14xy_H_ */
#include <asn_internal.h>
