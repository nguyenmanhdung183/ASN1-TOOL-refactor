/*****************************************/
/*           RICsubscriptionDeleteRequired                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICsubscriptionDeleteRequired_protocolIEs;
EXTERN int asn1PE_e2ap_RICsubscriptionDeleteRequired_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteRequired_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionDeleteRequired_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteRequired_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionDeleteRequired_protocolIEs (e2ap_RICsubscriptionDeleteRequired_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICsubscriptionDeleteRequired_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteRequired_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionDeleteRequired_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteRequired_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICsubscriptionDeleteRequired_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICsubscriptionDeleteRequired_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionDeleteRequired_protocolIEs (const char* name, e2ap_RICsubscriptionDeleteRequired_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICsubscriptionDeleteRequired -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICsubscriptionDeleteRequired {
    e2ap_RICsubscriptionDeleteRequired_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICsubscriptionDeleteRequired;

EXTERN int asn1PE_e2ap_RICsubscriptionDeleteRequired (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteRequired* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionDeleteRequired (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteRequired* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionDeleteRequired (e2ap_RICsubscriptionDeleteRequired* pvalue);
EXTERN void asn1Free_e2ap_RICsubscriptionDeleteRequired (OSCTXT* pctxt, e2ap_RICsubscriptionDeleteRequired* pvalue);
EXTERN void asn1Print_e2ap_RICsubscriptionDeleteRequired (const char* name, const e2ap_RICsubscriptionDeleteRequired* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionDeleteRequired (const char* name, e2ap_RICsubscriptionDeleteRequired* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICsubscriptionDeleteRequired (OSCTXT* pctxt, const char* name, const e2ap_RICsubscriptionDeleteRequired* pvalue);
EXTERN int asn1Copy_e2ap_RICsubscriptionDeleteRequired (OSCTXT* pctxt, const e2ap_RICsubscriptionDeleteRequired* pSrcValue, e2ap_RICsubscriptionDeleteRequired* pDstValue);