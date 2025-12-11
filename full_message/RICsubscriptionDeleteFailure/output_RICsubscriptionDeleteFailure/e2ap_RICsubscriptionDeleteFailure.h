/*****************************************/
/*           RICsubscriptionDeleteFailure                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICsubscriptionDeleteFailure_protocolIEs;
EXTERN int asn1PE_e2ap_RICsubscriptionDeleteFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteFailure_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionDeleteFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteFailure_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionDeleteFailure_protocolIEs (e2ap_RICsubscriptionDeleteFailure_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICsubscriptionDeleteFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteFailure_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionDeleteFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteFailure_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICsubscriptionDeleteFailure_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICsubscriptionDeleteFailure_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionDeleteFailure_protocolIEs (const char* name, e2ap_RICsubscriptionDeleteFailure_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICsubscriptionDeleteFailure -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICsubscriptionDeleteFailure {
    e2ap_RICsubscriptionDeleteFailure_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICsubscriptionDeleteFailure;

EXTERN int asn1PE_e2ap_RICsubscriptionDeleteFailure (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteFailure* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionDeleteFailure (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteFailure* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionDeleteFailure (e2ap_RICsubscriptionDeleteFailure* pvalue);
EXTERN void asn1Free_e2ap_RICsubscriptionDeleteFailure (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteFailure* pvalue);
EXTERN void asn1Print_e2ap_RICsubscriptionDeleteFailure (const char* name, const e2ap_RICsubscriptionDeleteFailure* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionDeleteFailure (const char* name, e2ap_RICsubscriptionDeleteFailure* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICsubscriptionDeleteFailure (OSCTXT* pctxt, const char* name, const e2ap_RICsubscriptionDeleteFailure* pvalue);
EXTERN int asn1Copy_e2ap_RICsubscriptionDeleteFailure (OSCTXT* pctxt, const e2ap_RICsubscriptionDeleteFailure* pSrcValue, e2ap_RICsubscriptionDeleteFailure* pDstValue);