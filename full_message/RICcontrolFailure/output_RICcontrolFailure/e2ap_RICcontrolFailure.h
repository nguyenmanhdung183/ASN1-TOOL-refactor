/*****************************************/
/*           RICcontrolFailure                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICcontrolFailure_protocolIEs;
EXTERN int asn1PE_e2ap_RICcontrolFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICcontrolFailure_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICcontrolFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICcontrolFailure_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICcontrolFailure_protocolIEs (e2ap_RICcontrolFailure_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICcontrolFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICcontrolFailure_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICcontrolFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICcontrolFailure_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICcontrolFailure_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICcontrolFailure_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICcontrolFailure_protocolIEs (const char* name, e2ap_RICcontrolFailure_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICcontrolFailure -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICcontrolFailure {
    e2ap_RICcontrolFailure_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICcontrolFailure;

EXTERN int asn1PE_e2ap_RICcontrolFailure (OSCTXT* pctxt, e2ap_RICcontrolFailure* pvalue);
EXTERN int asn1PD_e2ap_RICcontrolFailure (OSCTXT* pctxt, e2ap_RICcontrolFailure* pvalue);
EXTERN int asn1Init_e2ap_RICcontrolFailure (e2ap_RICcontrolFailure* pvalue);
EXTERN void asn1Free_e2ap_RICcontrolFailure (OSCTXT* pctxt, e2ap_RICcontrolFailure* pvalue);
EXTERN void asn1Print_e2ap_RICcontrolFailure (const char* name, const e2ap_RICcontrolFailure* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICcontrolFailure (const char* name, e2ap_RICcontrolFailure* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICcontrolFailure (OSCTXT* pctxt, const char* name, const e2ap_RICcontrolFailure* pvalue);
EXTERN int asn1Copy_e2ap_RICcontrolFailure (OSCTXT* pctxt, const e2ap_RICcontrolFailure* pSrcValue, e2ap_RICcontrolFailure* pDstValue);