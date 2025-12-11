/*****************************************/
/*           RICassistanceFailure                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICassistanceFailure_protocolIEs;
EXTERN int asn1PE_e2ap_RICassistanceFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceFailure_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceFailure_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceFailure_protocolIEs (e2ap_RICassistanceFailure_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICassistanceFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceFailure_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICassistanceFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceFailure_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICassistanceFailure_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICassistanceFailure_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceFailure_protocolIEs (const char* name, e2ap_RICassistanceFailure_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICassistanceFailure -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICassistanceFailure {
    e2ap_RICassistanceFailure_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICassistanceFailure;

EXTERN int asn1PE_e2ap_RICassistanceFailure (OSCTXT* pctxt, e2ap_RICassistanceFailure* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceFailure (OSCTXT* pctxt, e2ap_RICassistanceFailure* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceFailure (e2ap_RICassistanceFailure* pvalue);
EXTERN void asn1Free_e2ap_RICassistanceFailure (OSCTXT* pctxt, e2ap_RICassistanceFailure* pvalue);
EXTERN void asn1Print_e2ap_RICassistanceFailure (const char* name, const e2ap_RICassistanceFailure* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceFailure (const char* name, e2ap_RICassistanceFailure* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICassistanceFailure (OSCTXT* pctxt, const char* name, const e2ap_RICassistanceFailure* pvalue);
EXTERN int asn1Copy_e2ap_RICassistanceFailure (OSCTXT* pctxt, const e2ap_RICassistanceFailure* pSrcValue, e2ap_RICassistanceFailure* pDstValue);