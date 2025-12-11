/*****************************************/
/*           RICassistanceRequest                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICassistanceRequest_protocolIEs;
EXTERN int asn1PE_e2ap_RICassistanceRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceRequest_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceRequest_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceRequest_protocolIEs (e2ap_RICassistanceRequest_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICassistanceRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceRequest_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICassistanceRequest_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceRequest_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICassistanceRequest_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICassistanceRequest_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceRequest_protocolIEs (const char* name, e2ap_RICassistanceRequest_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICassistanceRequest -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICassistanceRequest {
    e2ap_RICassistanceRequest_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICassistanceRequest;

EXTERN int asn1PE_e2ap_RICassistanceRequest (OSCTXT* pctxt, e2ap_RICassistanceRequest* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceRequest (OSCTXT* pctxt, e2ap_RICassistanceRequest* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceRequest (e2ap_RICassistanceRequest* pvalue);
EXTERN void asn1Free_e2ap_RICassistanceRequest (OSCTXT* pctxt, e2ap_RICassistanceRequest* pvalue);
EXTERN void asn1Print_e2ap_RICassistanceRequest (const char* name, const e2ap_RICassistanceRequest* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceRequest (const char* name, e2ap_RICassistanceRequest* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICassistanceRequest (OSCTXT* pctxt, const char* name, const e2ap_RICassistanceRequest* pvalue);
EXTERN int asn1Copy_e2ap_RICassistanceRequest (OSCTXT* pctxt, const e2ap_RICassistanceRequest* pSrcValue, e2ap_RICassistanceRequest* pDstValue);