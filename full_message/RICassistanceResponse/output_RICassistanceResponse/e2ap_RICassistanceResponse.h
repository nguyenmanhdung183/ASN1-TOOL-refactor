/*****************************************/
/*           RICassistanceResponse                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICassistanceResponse_protocolIEs;
EXTERN int asn1PE_e2ap_RICassistanceResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceResponse_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceResponse_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceResponse_protocolIEs (e2ap_RICassistanceResponse_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICassistanceResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceResponse_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICassistanceResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceResponse_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICassistanceResponse_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICassistanceResponse_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceResponse_protocolIEs (const char* name, e2ap_RICassistanceResponse_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICassistanceResponse -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICassistanceResponse {
    e2ap_RICassistanceResponse_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICassistanceResponse;

EXTERN int asn1PE_e2ap_RICassistanceResponse (OSCTXT* pctxt, e2ap_RICassistanceResponse* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceResponse (OSCTXT* pctxt, e2ap_RICassistanceResponse* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceResponse (e2ap_RICassistanceResponse* pvalue);
EXTERN void asn1Free_e2ap_RICassistanceResponse (OSCTXT* pctxt, e2ap_RICassistanceResponse* pvalue);
EXTERN void asn1Print_e2ap_RICassistanceResponse (const char* name, const e2ap_RICassistanceResponse* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceResponse (const char* name, e2ap_RICassistanceResponse* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICassistanceResponse (OSCTXT* pctxt, const char* name, const e2ap_RICassistanceResponse* pvalue);
EXTERN int asn1Copy_e2ap_RICassistanceResponse (OSCTXT* pctxt, const e2ap_RICassistanceResponse* pSrcValue, e2ap_RICassistanceResponse* pDstValue);