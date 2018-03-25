/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_DL_CarrierConfigDedicated_NB_r13_H_
#define	_DL_CarrierConfigDedicated_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreq-NB-r13.h"
#include <NULL.h>
#include "DL-Bitmap-NB-r13.h"
#include <constr_CHOICE.h>
#include "DL-GapConfig-NB-r13.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_PR {
	DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_PR_NOTHING,	/* No components present */
	DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_PR_useNoBitmap_r13,
	DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_PR_useAnchorBitmap_r13,
	DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_PR_explicitBitmapConfiguration_r13,
	DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_PR_spare
} DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_PR;
typedef enum DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_PR {
	DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_PR_NOTHING,	/* No components present */
	DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_PR_useNoGap_r13,
	DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_PR_useAnchorGapConfig_r13,
	DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_PR_explicitGapConfiguration_r13,
	DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_PR_spare
} DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_PR;
typedef enum DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13_PR {
	DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13_PR_NOTHING,	/* No components present */
	DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13_PR_samePCI_r13,
	DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13_PR_differentPCI_r13
} DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13_PR;
typedef enum DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13__differentPCI_r13__eutra_NumCRS_Ports_r13 {
	DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13__differentPCI_r13__eutra_NumCRS_Ports_r13_same	= 0,
	DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13__differentPCI_r13__eutra_NumCRS_Ports_r13_four	= 1
} e_DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13__differentPCI_r13__eutra_NumCRS_Ports_r13;
typedef enum DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__eutraControlRegionSize_r13 {
	DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__eutraControlRegionSize_r13_n1	= 0,
	DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__eutraControlRegionSize_r13_n2	= 1,
	DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__eutraControlRegionSize_r13_n3	= 2
} e_DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__eutraControlRegionSize_r13;
typedef enum DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330 {
	DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330_dB_12	= 0,
	DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330_dB_10	= 1,
	DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330_dB_8	= 2,
	DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330_dB_6	= 3,
	DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330_dB_4	= 4,
	DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330_dB_2	= 5,
	DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330_dB0	= 6,
	DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330_dB3	= 7
} e_DL_CarrierConfigDedicated_NB_r13__ext1__nrs_PowerOffsetNonAnchor_v1330;

/* DL-CarrierConfigDedicated-NB-r13 */
typedef struct DL_CarrierConfigDedicated_NB_r13 {
	CarrierFreq_NB_r13_t	 dl_CarrierFreq_r13;
	struct DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13 {
		DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_PR present;
		union DL_CarrierConfigDedicated_NB_r13__downlinkBitmapNonAnchor_r13_u {
			NULL_t	 useNoBitmap_r13;
			NULL_t	 useAnchorBitmap_r13;
			DL_Bitmap_NB_r13_t	 explicitBitmapConfiguration_r13;
			NULL_t	 spare;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *downlinkBitmapNonAnchor_r13;
	struct DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13 {
		DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_PR present;
		union DL_CarrierConfigDedicated_NB_r13__dl_GapNonAnchor_r13_u {
			NULL_t	 useNoGap_r13;
			NULL_t	 useAnchorGapConfig_r13;
			DL_GapConfig_NB_r13_t	 explicitGapConfiguration_r13;
			NULL_t	 spare;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dl_GapNonAnchor_r13;
	struct DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13 {
		struct DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13 {
			DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13_PR present;
			union DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13_u {
				struct DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13__samePCI_r13 {
					long	 indexToMidPRB_r13;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} samePCI_r13;
				struct DL_CarrierConfigDedicated_NB_r13__inbandCarrierInfo_r13__samePCI_Indicator_r13__differentPCI_r13 {
					long	 eutra_NumCRS_Ports_r13;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} differentPCI_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *samePCI_Indicator_r13;
		long	 eutraControlRegionSize_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *inbandCarrierInfo_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct DL_CarrierConfigDedicated_NB_r13__ext1 {
		long	*nrs_PowerOffsetNonAnchor_v1330	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CarrierConfigDedicated_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_NumCRS_Ports_r13_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutraControlRegionSize_r13_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nrs_PowerOffsetNonAnchor_v1330_27;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_CarrierConfigDedicated_NB_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_CarrierConfigDedicated_NB_r13_H_ */
#include <asn_internal.h>
