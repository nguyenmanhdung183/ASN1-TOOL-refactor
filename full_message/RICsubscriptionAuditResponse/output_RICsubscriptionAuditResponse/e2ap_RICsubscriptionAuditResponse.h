/*****************************************/
/*           RICsubscriptionAuditResponse                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICsubscriptionAuditResponse_protocolIEs;
EXTERN int asn1PE_e2ap_RICsubscriptionAuditResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionAuditResponse_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionAuditResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionAuditResponse_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionAuditResponse_protocolIEs (e2ap_RICsubscriptionAuditResponse_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICsubscriptionAuditResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionAuditResponse_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionAuditResponse_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionAuditResponse_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICsubscriptionAuditResponse_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICsubscriptionAuditResponse_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionAuditResponse_protocolIEs (const char* name, e2ap_RICsubscriptionAuditResponse_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICsubscriptionAuditResponse -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICsubscriptionAuditResponse {
    e2ap_RICsubscriptionAuditResponse_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICsubscriptionAuditResponse;

EXTERN int asn1PE_e2ap_RICsubscriptionAuditResponse (OSCTXT* pctxt, e2ap_RICsubscriptionAuditResponse* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionAuditResponse (OSCTXT* pctxt, e2ap_RICsubscriptionAuditResponse* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionAuditResponse (e2ap_RICsubscriptionAuditResponse* pvalue);
EXTERN void asn1Free_e2ap_RICsubscriptionAuditResponse (OSCTXT* pctxt, e2ap_RICsubscriptionAuditResponse* pvalue);
EXTERN void asn1Print_e2ap_RICsubscriptionAuditResponse (const char* name, const e2ap_RICsubscriptionAuditResponse* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionAuditResponse (const char* name, e2ap_RICsubscriptionAuditResponse* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICsubscriptionAuditResponse (OSCTXT* pctxt, const char* name, const e2ap_RICsubscriptionAuditResponse* pvalue);
EXTERN int asn1Copy_e2ap_RICsubscriptionAuditResponse (OSCTXT* pctxt, const e2ap_RICsubscriptionAuditResponse* pSrcValue, e2ap_RICsubscriptionAuditResponse* pDstValue);