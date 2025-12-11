/*****************************************/
/*           RICsubscriptionModificationRequest                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICsubscriptionModificationRequest_protocolIEs;
EXTERN int asn1PE_e2ap_RICsubscriptionModificationRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionModificationRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionModificationRequest_protocolIEs (e2ap_RICsubscriptionModificationRequest_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICsubscriptionModificationRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICsubscriptionModificationRequest_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICsubscriptionModificationRequest_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationRequest_protocolIEs (const char* name, e2ap_RICsubscriptionModificationRequest_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICsubscriptionModificationRequest -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICsubscriptionModificationRequest {
    e2ap_RICsubscriptionModificationRequest_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICsubscriptionModificationRequest;

EXTERN int asn1PE_e2ap_RICsubscriptionModificationRequest (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionModificationRequest (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionModificationRequest (e2ap_RICsubscriptionModificationRequest* pvalue);
EXTERN void asn1Free_e2ap_RICsubscriptionModificationRequest (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest* pvalue);
EXTERN void asn1Print_e2ap_RICsubscriptionModificationRequest (const char* name, const e2ap_RICsubscriptionModificationRequest* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationRequest (const char* name, e2ap_RICsubscriptionModificationRequest* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICsubscriptionModificationRequest (OSCTXT* pctxt, const char* name, const e2ap_RICsubscriptionModificationRequest* pvalue);
EXTERN int asn1Copy_e2ap_RICsubscriptionModificationRequest (OSCTXT* pctxt, const e2ap_RICsubscriptionModificationRequest* pSrcValue, e2ap_RICsubscriptionModificationRequest* pDstValue);