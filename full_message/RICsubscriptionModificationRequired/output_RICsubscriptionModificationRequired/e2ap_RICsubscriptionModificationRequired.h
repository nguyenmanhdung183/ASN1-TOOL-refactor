/*****************************************/
/*           RICsubscriptionModificationRequired                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICsubscriptionModificationRequired_protocolIEs;
EXTERN int asn1PE_e2ap_RICsubscriptionModificationRequired_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequired_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionModificationRequired_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequired_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionModificationRequired_protocolIEs (e2ap_RICsubscriptionModificationRequired_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICsubscriptionModificationRequired_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequired_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationRequired_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequired_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICsubscriptionModificationRequired_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICsubscriptionModificationRequired_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationRequired_protocolIEs (const char* name, e2ap_RICsubscriptionModificationRequired_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICsubscriptionModificationRequired -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICsubscriptionModificationRequired {
    e2ap_RICsubscriptionModificationRequired_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICsubscriptionModificationRequired;

EXTERN int asn1PE_e2ap_RICsubscriptionModificationRequired (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequired* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionModificationRequired (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequired* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionModificationRequired (e2ap_RICsubscriptionModificationRequired* pvalue);
EXTERN void asn1Free_e2ap_RICsubscriptionModificationRequired (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequired* pvalue);
EXTERN void asn1Print_e2ap_RICsubscriptionModificationRequired (const char* name, const e2ap_RICsubscriptionModificationRequired* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationRequired (const char* name, e2ap_RICsubscriptionModificationRequired* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICsubscriptionModificationRequired (OSCTXT* pctxt, const char* name, const e2ap_RICsubscriptionModificationRequired* pvalue);
EXTERN int asn1Copy_e2ap_RICsubscriptionModificationRequired (OSCTXT* pctxt, const e2ap_RICsubscriptionModificationRequired* pSrcValue, e2ap_RICsubscriptionModificationRequired* pDstValue);