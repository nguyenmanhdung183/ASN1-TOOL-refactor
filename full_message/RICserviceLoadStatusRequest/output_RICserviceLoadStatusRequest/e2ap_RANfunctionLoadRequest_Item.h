/*****************************************/
/*           RANfunctionLoadRequest_Item                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_RANfunctionLoadRequest_Item {
      //not primitive
   e2ap_RANfunctionID ranFunctionID;
      //not primitive
   e2ap_RICloadRequest ranFunctionLoadRequest;
   OSBOOL m_ranFunctionLoadRequestPresent;      //not primitive
   e2ap_RICserviceLoadRequest ricServiceLoadRequest;
   OSBOOL m_ricServiceLoadRequestPresent;      //not primitive
   e2ap_RICsubscriptionLoadRequest_List ricSubscriptionLoadRequest_list;
   OSBOOL m_ricSubscriptionLoadRequest_listPresent;
   OSRTDList extElem1;  /* Extension elements */
} e2ap_RANfunctionLoadRequest_Item;

EXTERN int asn1PE_e2ap_RANfunctionLoadRequest_Item (OSCTXT* pctxt, e2ap_RANfunctionLoadRequest_Item* pvalue);
EXTERN int asn1PD_e2ap_RANfunctionLoadRequest_Item (OSCTXT* pctxt, e2ap_RANfunctionLoadRequest_Item* pvalue);
EXTERN int asn1Init_e2ap_RANfunctionLoadRequest_Item (e2ap_RANfunctionLoadRequest_Item* pvalue);
EXTERN void asn1Free_e2ap_RANfunctionLoadRequest_Item (OSCTXT* pctxt, e2ap_RANfunctionLoadRequest_Item* pvalue);
EXTERN void asn1Print_e2ap_RANfunctionLoadRequest_Item (const char* name, const e2ap_RANfunctionLoadRequest_Item* pvalue);
EXTERN int asn1PrtToStr_e2ap_RANfunctionLoadRequest_Item (const char* name, e2ap_RANfunctionLoadRequest_Item* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RANfunctionLoadRequest_Item (OSCTXT* pctxt, const char* name, const e2ap_RANfunctionLoadRequest_Item* pvalue);
EXTERN int asn1Copy_e2ap_RANfunctionLoadRequest_Item (OSCTXT* pctxt, const e2ap_RANfunctionLoadRequest_Item* pSrcValue, e2ap_RANfunctionLoadRequest_Item* pDstValue);