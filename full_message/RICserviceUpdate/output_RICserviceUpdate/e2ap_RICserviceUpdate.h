/*****************************************/
/*           RICserviceUpdate                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICserviceUpdate_protocolIEs;
EXTERN int asn1PE_e2ap_RICserviceUpdate_protocolIEs (OSCTXT* pctxt, e2ap_RICserviceUpdate_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICserviceUpdate_protocolIEs (OSCTXT* pctxt, e2ap_RICserviceUpdate_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICserviceUpdate_protocolIEs (e2ap_RICserviceUpdate_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICserviceUpdate_protocolIEs (OSCTXT* pctxt, e2ap_RICserviceUpdate_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICserviceUpdate_protocolIEs (OSCTXT* pctxt, e2ap_RICserviceUpdate_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICserviceUpdate_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICserviceUpdate_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICserviceUpdate_protocolIEs (const char* name, e2ap_RICserviceUpdate_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICserviceUpdate -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICserviceUpdate {
    e2ap_RICserviceUpdate_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICserviceUpdate;

EXTERN int asn1PE_e2ap_RICserviceUpdate (OSCTXT* pctxt, e2ap_RICserviceUpdate* pvalue);
EXTERN int asn1PD_e2ap_RICserviceUpdate (OSCTXT* pctxt, e2ap_RICserviceUpdate* pvalue);
EXTERN int asn1Init_e2ap_RICserviceUpdate (e2ap_RICserviceUpdate* pvalue);
EXTERN void asn1Free_e2ap_RICserviceUpdate (OSCTXT* pctxt, e2ap_RICserviceUpdate* pvalue);
EXTERN void asn1Print_e2ap_RICserviceUpdate (const char* name, const e2ap_RICserviceUpdate* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICserviceUpdate (const char* name, e2ap_RICserviceUpdate* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICserviceUpdate (OSCTXT* pctxt, const char* name, const e2ap_RICserviceUpdate* pvalue);
EXTERN int asn1Copy_e2ap_RICserviceUpdate (OSCTXT* pctxt, const e2ap_RICserviceUpdate* pSrcValue, e2ap_RICserviceUpdate* pDstValue);