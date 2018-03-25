/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Paging_v890_IEs_H_
#define	_Paging_v890_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Paging_v920_IEs;

/* Paging-v890-IEs */
typedef struct Paging_v890_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct Paging_v920_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Paging_v890_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Paging_v890_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Paging-v920-IEs.h"

#endif	/* _Paging_v890_IEs_H_ */
#include <asn_internal.h>
