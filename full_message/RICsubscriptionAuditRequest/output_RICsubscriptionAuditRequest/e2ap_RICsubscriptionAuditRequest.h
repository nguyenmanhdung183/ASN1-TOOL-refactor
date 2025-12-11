/*****************************************/
/*           RICsubscriptionAuditRequest                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICsubscriptionAuditRequest_protocolIEs;
EXTERN int asn1PE_e2ap_RICsubscriptionAuditRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionAuditRequest_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionAuditRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionAuditRequest_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionAuditRequest_protocolIEs (e2ap_RICsubscriptionAuditRequest_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICsubscriptionAuditRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionAuditRequest_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionAuditRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionAuditRequest_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICsubscriptionAuditRequest_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICsubscriptionAuditRequest_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionAuditRequest_protocolIEs (const char* name, e2ap_RICsubscriptionAuditRequest_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICsubscriptionAuditRequest -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICsubscriptionAuditRequest {
    e2ap_RICsubscriptionAuditRequest_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICsubscriptionAuditRequest;

EXTERN int asn1PE_e2ap_RICsubscriptionAuditRequest (OSCTXT* pctxt, e2ap_RICsubscriptionAuditRequest* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionAuditRequest (OSCTXT* pctxt, e2ap_RICsubscriptionAuditRequest* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionAuditRequest (e2ap_RICsubscriptionAuditRequest* pvalue);
EXTERN void asn1Free_e2ap_RICsubscriptionAuditRequest (OSCTXT* pctxt, e2ap_RICsubscriptionAuditRequest* pvalue);
EXTERN void asn1Print_e2ap_RICsubscriptionAuditRequest (const char* name, const e2ap_RICsubscriptionAuditRequest* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionAuditRequest (const char* name, e2ap_RICsubscriptionAuditRequest* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICsubscriptionAuditRequest (OSCTXT* pctxt, const char* name, const e2ap_RICsubscriptionAuditRequest* pvalue);
EXTERN int asn1Copy_e2ap_RICsubscriptionAuditRequest (OSCTXT* pctxt, const e2ap_RICsubscriptionAuditRequest* pSrcValue, e2ap_RICsubscriptionAuditRequest* pDstValue);