/*****************************************/
/*           RICserviceLoadUpdate                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICserviceLoadUpdate_protocolIEs;
EXTERN int asn1PE_e2ap_RICserviceLoadUpdate_protocolIEs (OSCTXT* pctxt, e2ap_RICserviceLoadUpdate_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICserviceLoadUpdate_protocolIEs (OSCTXT* pctxt, e2ap_RICserviceLoadUpdate_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICserviceLoadUpdate_protocolIEs (e2ap_RICserviceLoadUpdate_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICserviceLoadUpdate_protocolIEs (OSCTXT* pctxt, e2ap_RICserviceLoadUpdate_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICserviceLoadUpdate_protocolIEs (OSCTXT* pctxt, e2ap_RICserviceLoadUpdate_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICserviceLoadUpdate_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICserviceLoadUpdate_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICserviceLoadUpdate_protocolIEs (const char* name, e2ap_RICserviceLoadUpdate_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICserviceLoadUpdate -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICserviceLoadUpdate {
    e2ap_RICserviceLoadUpdate_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICserviceLoadUpdate;

EXTERN int asn1PE_e2ap_RICserviceLoadUpdate (OSCTXT* pctxt, e2ap_RICserviceLoadUpdate* pvalue);
EXTERN int asn1PD_e2ap_RICserviceLoadUpdate (OSCTXT* pctxt, e2ap_RICserviceLoadUpdate* pvalue);
EXTERN int asn1Init_e2ap_RICserviceLoadUpdate (e2ap_RICserviceLoadUpdate* pvalue);
EXTERN void asn1Free_e2ap_RICserviceLoadUpdate (OSCTXT* pctxt, e2ap_RICserviceLoadUpdate* pvalue);
EXTERN void asn1Print_e2ap_RICserviceLoadUpdate (const char* name, const e2ap_RICserviceLoadUpdate* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICserviceLoadUpdate (const char* name, e2ap_RICserviceLoadUpdate* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICserviceLoadUpdate (OSCTXT* pctxt, const char* name, const e2ap_RICserviceLoadUpdate* pvalue);
EXTERN int asn1Copy_e2ap_RICserviceLoadUpdate (OSCTXT* pctxt, const e2ap_RICserviceLoadUpdate* pSrcValue, e2ap_RICserviceLoadUpdate* pDstValue);