/*****************************************/
/*           RICcontrolAcknowledge                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICcontrolAcknowledge_protocolIEs;
EXTERN int asn1PE_e2ap_RICcontrolAcknowledge_protocolIEs (OSCTXT* pctxt, e2ap_RICcontrolAcknowledge_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICcontrolAcknowledge_protocolIEs (OSCTXT* pctxt, e2ap_RICcontrolAcknowledge_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICcontrolAcknowledge_protocolIEs (e2ap_RICcontrolAcknowledge_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICcontrolAcknowledge_protocolIEs (OSCTXT* pctxt, e2ap_RICcontrolAcknowledge_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICcontrolAcknowledge_protocolIEs (OSCTXT* pctxt, e2ap_RICcontrolAcknowledge_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICcontrolAcknowledge_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICcontrolAcknowledge_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICcontrolAcknowledge_protocolIEs (const char* name, e2ap_RICcontrolAcknowledge_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICcontrolAcknowledge -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICcontrolAcknowledge {
    e2ap_RICcontrolAcknowledge_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICcontrolAcknowledge;

EXTERN int asn1PE_e2ap_RICcontrolAcknowledge (OSCTXT* pctxt, e2ap_RICcontrolAcknowledge* pvalue);
EXTERN int asn1PD_e2ap_RICcontrolAcknowledge (OSCTXT* pctxt, e2ap_RICcontrolAcknowledge* pvalue);
EXTERN int asn1Init_e2ap_RICcontrolAcknowledge (e2ap_RICcontrolAcknowledge* pvalue);
EXTERN void asn1Free_e2ap_RICcontrolAcknowledge (OSCTXT* pctxt, e2ap_RICcontrolAcknowledge* pvalue);
EXTERN void asn1Print_e2ap_RICcontrolAcknowledge (const char* name, const e2ap_RICcontrolAcknowledge* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICcontrolAcknowledge (const char* name, e2ap_RICcontrolAcknowledge* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICcontrolAcknowledge (OSCTXT* pctxt, const char* name, const e2ap_RICcontrolAcknowledge* pvalue);
EXTERN int asn1Copy_e2ap_RICcontrolAcknowledge (OSCTXT* pctxt, const e2ap_RICcontrolAcknowledge* pSrcValue, e2ap_RICcontrolAcknowledge* pDstValue);