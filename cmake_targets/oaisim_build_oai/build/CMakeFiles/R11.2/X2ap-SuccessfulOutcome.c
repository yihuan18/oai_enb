/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU"
 * 	found in "/home/liu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-PDU.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-SuccessfulOutcome.h"

static asn_TYPE_member_t asn_MBR_X2ap_SuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_SuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_ProcedureCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_SuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_Criticality,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticality"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_SuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"value"
		},
};
static ber_tlv_tag_t asn_DEF_X2ap_SuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_SuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode at 43 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality at 44 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value at 46 */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2ap_SuccessfulOutcome_specs_1 = {
	sizeof(struct X2ap_SuccessfulOutcome),
	offsetof(struct X2ap_SuccessfulOutcome, _asn_ctx),
	asn_MAP_X2ap_SuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_SuccessfulOutcome = {
	"X2ap-SuccessfulOutcome",
	"X2ap-SuccessfulOutcome",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_X2ap_SuccessfulOutcome_tags_1,
	sizeof(asn_DEF_X2ap_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_X2ap_SuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_X2ap_SuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_X2ap_SuccessfulOutcome_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_X2ap_SuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_X2ap_SuccessfulOutcome_specs_1	/* Additional specs */
};

