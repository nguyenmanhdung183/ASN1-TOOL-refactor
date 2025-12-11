/*****************************************/
/*           RICqueryFailure                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICqueryFailure_protocolIEs;
EXTERN int asn1PE_e2ap_RICqueryFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICqueryFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICqueryFailure_protocolIEs (e2ap_RICqueryFailure_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICqueryFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICqueryFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICqueryFailure_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICqueryFailure_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICqueryFailure_protocolIEs (const char* name, e2ap_RICqueryFailure_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICqueryFailure -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICqueryFailure {
    e2ap_RICqueryFailure_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICqueryFailure;

EXTERN int asn1PE_e2ap_RICqueryFailure (OSCTXT* pctxt, e2ap_RICqueryFailure* pvalue);
EXTERN int asn1PD_e2ap_RICqueryFailure (OSCTXT* pctxt, e2ap_RICqueryFailure* pvalue);
EXTERN int asn1Init_e2ap_RICqueryFailure (e2ap_RICqueryFailure* pvalue);
EXTERN void asn1Free_e2ap_RICqueryFailure (OSCTXT* pctxt, e2ap_RICqueryFailure* pvalue);
EXTERN void asn1Print_e2ap_RICqueryFailure (const char* name, const e2ap_RICqueryFailure* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICqueryFailure (const char* name, e2ap_RICqueryFailure* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICqueryFailure (OSCTXT* pctxt, const char* name, const e2ap_RICqueryFailure* pvalue);
EXTERN int asn1Copy_e2ap_RICqueryFailure (OSCTXT* pctxt, const e2ap_RICqueryFailure* pSrcValue, e2ap_RICqueryFailure* pDstValue);