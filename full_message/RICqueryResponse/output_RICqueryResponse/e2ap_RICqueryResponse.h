/*****************************************/
/*           RICqueryResponse                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICqueryResponse_protocolIEs;
EXTERN int asn1PE_e2ap_RICqueryResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryResponse_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICqueryResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryResponse_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICqueryResponse_protocolIEs (e2ap_RICqueryResponse_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICqueryResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryResponse_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICqueryResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryResponse_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICqueryResponse_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICqueryResponse_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICqueryResponse_protocolIEs (const char* name, e2ap_RICqueryResponse_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICqueryResponse -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICqueryResponse {
    e2ap_RICqueryResponse_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICqueryResponse;

EXTERN int asn1PE_e2ap_RICqueryResponse (OSCTXT* pctxt, e2ap_RICqueryResponse* pvalue);
EXTERN int asn1PD_e2ap_RICqueryResponse (OSCTXT* pctxt, e2ap_RICqueryResponse* pvalue);
EXTERN int asn1Init_e2ap_RICqueryResponse (e2ap_RICqueryResponse* pvalue);
EXTERN void asn1Free_e2ap_RICqueryResponse (OSCTXT* pctxt, e2ap_RICqueryResponse* pvalue);
EXTERN void asn1Print_e2ap_RICqueryResponse (const char* name, const e2ap_RICqueryResponse* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICqueryResponse (const char* name, e2ap_RICqueryResponse* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICqueryResponse (OSCTXT* pctxt, const char* name, const e2ap_RICqueryResponse* pvalue);
EXTERN int asn1Copy_e2ap_RICqueryResponse (OSCTXT* pctxt, const e2ap_RICqueryResponse* pSrcValue, e2ap_RICqueryResponse* pDstValue);