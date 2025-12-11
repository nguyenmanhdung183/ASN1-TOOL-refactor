/*****************************************/
/*           RICassistanceIndication                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICassistanceIndication_protocolIEs;
EXTERN int asn1PE_e2ap_RICassistanceIndication_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceIndication_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceIndication_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceIndication_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceIndication_protocolIEs (e2ap_RICassistanceIndication_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICassistanceIndication_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceIndication_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICassistanceIndication_protocolIEs (OSCTXT* pctxt, e2ap_RICassistanceIndication_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICassistanceIndication_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICassistanceIndication_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceIndication_protocolIEs (const char* name, e2ap_RICassistanceIndication_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICassistanceIndication -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICassistanceIndication {
    e2ap_RICassistanceIndication_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICassistanceIndication;

EXTERN int asn1PE_e2ap_RICassistanceIndication (OSCTXT* pctxt, e2ap_RICassistanceIndication* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceIndication (OSCTXT* pctxt, e2ap_RICassistanceIndication* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceIndication (e2ap_RICassistanceIndication* pvalue);
EXTERN void asn1Free_e2ap_RICassistanceIndication (OSCTXT* pctxt, e2ap_RICassistanceIndication* pvalue);
EXTERN void asn1Print_e2ap_RICassistanceIndication (const char* name, const e2ap_RICassistanceIndication* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceIndication (const char* name, e2ap_RICassistanceIndication* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICassistanceIndication (OSCTXT* pctxt, const char* name, const e2ap_RICassistanceIndication* pvalue);
EXTERN int asn1Copy_e2ap_RICassistanceIndication (OSCTXT* pctxt, const e2ap_RICassistanceIndication* pSrcValue, e2ap_RICassistanceIndication* pDstValue);