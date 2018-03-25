/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/liu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_ServedCell_Information_H_
#define	_X2ap_ServedCell_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-PCI.h"
#include "X2ap-ECGI.h"
#include "X2ap-TAC.h"
#include "X2ap-BroadcastPLMNs-Item.h"
#include "X2ap-EUTRA-Mode-Info.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_IE_Extensions;

/* X2ap-ServedCell-Information */
typedef struct X2ap_ServedCell_Information {
	X2ap_PCI_t	 pCI;
	X2ap_ECGI_t	 cellId;
	X2ap_TAC_t	 tAC;
	X2ap_BroadcastPLMNs_Item_t	 broadcastPLMNs;
	X2ap_EUTRA_Mode_Info_t	 eUTRA_Mode_Info;
	struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_ServedCell_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_ServedCell_Information;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_ServedCell_Information_H_ */
#include <asn_internal.h>
