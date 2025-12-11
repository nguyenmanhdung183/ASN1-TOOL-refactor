/*****************************************/
/*           RICindication                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICindication_protocolIEs;
EXTERN int asn1PE_e2ap_RICindication_protocolIEs (OSCTXT* pctxt, e2ap_RICindication_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICindication_protocolIEs (OSCTXT* pctxt, e2ap_RICindication_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICindication_protocolIEs (e2ap_RICindication_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICindication_protocolIEs (OSCTXT* pctxt, e2ap_RICindication_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICindication_protocolIEs (OSCTXT* pctxt, e2ap_RICindication_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICindication_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICindication_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICindication_protocolIEs (const char* name, e2ap_RICindication_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICindication -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICindication {
    e2ap_RICindication_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICindication;

EXTERN int asn1PE_e2ap_RICindication (OSCTXT* pctxt, e2ap_RICindication* pvalue);
EXTERN int asn1PD_e2ap_RICindication (OSCTXT* pctxt, e2ap_RICindication* pvalue);
EXTERN int asn1Init_e2ap_RICindication (e2ap_RICindication* pvalue);
EXTERN void asn1Free_e2ap_RICindication (OSCTXT* pctxt, e2ap_RICindication* pvalue);
EXTERN void asn1Print_e2ap_RICindication (const char* name, const e2ap_RICindication* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICindication (const char* name, e2ap_RICindication* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICindication (OSCTXT* pctxt, const char* name, const e2ap_RICindication* pvalue);
EXTERN int asn1Copy_e2ap_RICindication (OSCTXT* pctxt, const e2ap_RICindication* pSrcValue, e2ap_RICindication* pDstValue);