/*****************************************/
/*           ResetResponse                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_ResetResponse_protocolIEs;
EXTERN int asn1PE_e2ap_ResetResponse_protocolIEs (OSCTXT* pctxt, e2ap_ResetResponse_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_ResetResponse_protocolIEs (OSCTXT* pctxt, e2ap_ResetResponse_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_ResetResponse_protocolIEs (e2ap_ResetResponse_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_ResetResponse_protocolIEs (OSCTXT* pctxt, e2ap_ResetResponse_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_ResetResponse_protocolIEs (OSCTXT* pctxt, e2ap_ResetResponse_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apResetResponse_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_ResetResponse_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_ResetResponse_protocolIEs (const char* name, e2ap_ResetResponse_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . ResetResponse -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_ResetResponse {
    e2ap_ResetResponse_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_ResetResponse;

EXTERN int asn1PE_e2ap_ResetResponse (OSCTXT* pctxt, e2ap_ResetResponse* pvalue);
EXTERN int asn1PD_e2ap_ResetResponse (OSCTXT* pctxt, e2ap_ResetResponse* pvalue);
EXTERN int asn1Init_e2ap_ResetResponse (e2ap_ResetResponse* pvalue);
EXTERN void asn1Free_e2ap_ResetResponse (OSCTXT* pctxt, e2ap_ResetResponse* pvalue);
EXTERN void asn1Print_e2ap_ResetResponse (const char* name, const e2ap_ResetResponse* pvalue);
EXTERN int asn1PrtToStr_e2ap_ResetResponse (const char* name, e2ap_ResetResponse* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ResetResponse (OSCTXT* pctxt, const char* name, const e2ap_ResetResponse* pvalue);
EXTERN int asn1Copy_e2ap_ResetResponse (OSCTXT* pctxt, const e2ap_ResetResponse* pSrcValue, e2ap_ResetResponse* pDstValue);