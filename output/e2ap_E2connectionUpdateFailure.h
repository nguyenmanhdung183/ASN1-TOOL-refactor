/*****************************************/
/*           E2connectionUpdateFailure                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_E2connectionUpdateFailure_protocolIEs;
EXTERN int asn1PE_e2ap_E2connectionUpdateFailure_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdateFailure_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_E2connectionUpdateFailure_protocolIEs (e2ap_E2connectionUpdateFailure_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_E2connectionUpdateFailure_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2connectionUpdateFailure_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apE2connectionUpdateFailure_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_E2connectionUpdateFailure_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdateFailure_protocolIEs (const char* name, e2ap_E2connectionUpdateFailure_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . E2connectionUpdateFailure -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_E2connectionUpdateFailure {
    e2ap_E2connectionUpdateFailure_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_E2connectionUpdateFailure;

EXTERN int asn1PE_e2ap_E2connectionUpdateFailure (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdateFailure (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure* pvalue);
EXTERN int asn1Init_e2ap_E2connectionUpdateFailure (e2ap_E2connectionUpdateFailure* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdateFailure (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure* pvalue);
EXTERN void asn1Print_e2ap_E2connectionUpdateFailure (const char* name, const e2ap_E2connectionUpdateFailure* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdateFailure (const char* name, e2ap_E2connectionUpdateFailure* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2connectionUpdateFailure (OSCTXT* pctxt, const char* name, const e2ap_E2connectionUpdateFailure* pvalue);
EXTERN int asn1Copy_e2ap_E2connectionUpdateFailure (OSCTXT* pctxt, const e2ap_E2connectionUpdateFailure* pSrcValue, e2ap_E2connectionUpdateFailure* pDstValue);