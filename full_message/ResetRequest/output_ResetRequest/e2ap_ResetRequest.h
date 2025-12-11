/*****************************************/
/*           ResetRequest                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_ResetRequest_protocolIEs;
EXTERN int asn1PE_e2ap_ResetRequest_protocolIEs (OSCTXT* pctxt, e2ap_ResetRequest_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_ResetRequest_protocolIEs (OSCTXT* pctxt, e2ap_ResetRequest_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_ResetRequest_protocolIEs (e2ap_ResetRequest_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_ResetRequest_protocolIEs (OSCTXT* pctxt, e2ap_ResetRequest_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_ResetRequest_protocolIEs (OSCTXT* pctxt, e2ap_ResetRequest_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apResetRequest_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_ResetRequest_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_ResetRequest_protocolIEs (const char* name, e2ap_ResetRequest_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . ResetRequest -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_ResetRequest {
    e2ap_ResetRequest_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_ResetRequest;

EXTERN int asn1PE_e2ap_ResetRequest (OSCTXT* pctxt, e2ap_ResetRequest* pvalue);
EXTERN int asn1PD_e2ap_ResetRequest (OSCTXT* pctxt, e2ap_ResetRequest* pvalue);
EXTERN int asn1Init_e2ap_ResetRequest (e2ap_ResetRequest* pvalue);
EXTERN void asn1Free_e2ap_ResetRequest (OSCTXT* pctxt, e2ap_ResetRequest* pvalue);
EXTERN void asn1Print_e2ap_ResetRequest (const char* name, const e2ap_ResetRequest* pvalue);
EXTERN int asn1PrtToStr_e2ap_ResetRequest (const char* name, e2ap_ResetRequest* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ResetRequest (OSCTXT* pctxt, const char* name, const e2ap_ResetRequest* pvalue);
EXTERN int asn1Copy_e2ap_ResetRequest (OSCTXT* pctxt, const e2ap_ResetRequest* pSrcValue, e2ap_ResetRequest* pDstValue);