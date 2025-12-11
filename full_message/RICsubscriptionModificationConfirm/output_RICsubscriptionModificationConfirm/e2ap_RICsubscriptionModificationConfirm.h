/*****************************************/
/*           RICsubscriptionModificationConfirm                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICsubscriptionModificationConfirm_protocolIEs;
EXTERN int asn1PE_e2ap_RICsubscriptionModificationConfirm_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationConfirm_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionModificationConfirm_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationConfirm_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionModificationConfirm_protocolIEs (e2ap_RICsubscriptionModificationConfirm_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICsubscriptionModificationConfirm_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationConfirm_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationConfirm_protocolIEs (OSCTXT* pctxt, e2ap_RICsubscriptionModificationConfirm_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICsubscriptionModificationConfirm_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICsubscriptionModificationConfirm_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationConfirm_protocolIEs (const char* name, e2ap_RICsubscriptionModificationConfirm_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICsubscriptionModificationConfirm -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICsubscriptionModificationConfirm {
    e2ap_RICsubscriptionModificationConfirm_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICsubscriptionModificationConfirm;

EXTERN int asn1PE_e2ap_RICsubscriptionModificationConfirm (OSCTXT* pctxt, e2ap_RICsubscriptionModificationConfirm* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionModificationConfirm (OSCTXT* pctxt, e2ap_RICsubscriptionModificationConfirm* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionModificationConfirm (e2ap_RICsubscriptionModificationConfirm* pvalue);
EXTERN void asn1Free_e2ap_RICsubscriptionModificationConfirm (OSCTXT* pctxt, e2ap_RICsubscriptionModificationConfirm* pvalue);
EXTERN void asn1Print_e2ap_RICsubscriptionModificationConfirm (const char* name, const e2ap_RICsubscriptionModificationConfirm* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationConfirm (const char* name, e2ap_RICsubscriptionModificationConfirm* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICsubscriptionModificationConfirm (OSCTXT* pctxt, const char* name, const e2ap_RICsubscriptionModificationConfirm* pvalue);
EXTERN int asn1Copy_e2ap_RICsubscriptionModificationConfirm (OSCTXT* pctxt, const e2ap_RICsubscriptionModificationConfirm* pSrcValue, e2ap_RICsubscriptionModificationConfirm* pDstValue);