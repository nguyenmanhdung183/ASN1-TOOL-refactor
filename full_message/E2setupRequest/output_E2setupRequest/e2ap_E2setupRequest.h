/*****************************************/
/*           E2setupRequest                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_E2setupRequest_protocolIEs;
EXTERN int asn1PE_e2ap_E2setupRequest_protocolIEs (OSCTXT* pctxt, e2ap_E2setupRequest_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_E2setupRequest_protocolIEs (OSCTXT* pctxt, e2ap_E2setupRequest_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_E2setupRequest_protocolIEs (e2ap_E2setupRequest_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_E2setupRequest_protocolIEs (OSCTXT* pctxt, e2ap_E2setupRequest_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2setupRequest_protocolIEs (OSCTXT* pctxt, e2ap_E2setupRequest_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apE2setupRequest_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_E2setupRequest_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2setupRequest_protocolIEs (const char* name, e2ap_E2setupRequest_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . E2setupRequest -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_E2setupRequest {
    e2ap_E2setupRequest_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_E2setupRequest;

EXTERN int asn1PE_e2ap_E2setupRequest (OSCTXT* pctxt, e2ap_E2setupRequest* pvalue);
EXTERN int asn1PD_e2ap_E2setupRequest (OSCTXT* pctxt, e2ap_E2setupRequest* pvalue);
EXTERN int asn1Init_e2ap_E2setupRequest (e2ap_E2setupRequest* pvalue);
EXTERN void asn1Free_e2ap_E2setupRequest (OSCTXT* pctxt, e2ap_E2setupRequest* pvalue);
EXTERN void asn1Print_e2ap_E2setupRequest (const char* name, const e2ap_E2setupRequest* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2setupRequest (const char* name, e2ap_E2setupRequest* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2setupRequest (OSCTXT* pctxt, const char* name, const e2ap_E2setupRequest* pvalue);
EXTERN int asn1Copy_e2ap_E2setupRequest (OSCTXT* pctxt, const e2ap_E2setupRequest* pSrcValue, e2ap_E2setupRequest* pDstValue);