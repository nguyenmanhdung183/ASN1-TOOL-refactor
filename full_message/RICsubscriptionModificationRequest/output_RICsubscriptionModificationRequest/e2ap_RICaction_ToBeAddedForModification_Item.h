/*****************************************/
/*           RICaction_ToBeAddedForModification_Item                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_RICaction_ToBeAddedForModification_Item {
      //not primitive
   e2ap_RICactionID ricActionID;
      //not primitive
   e2ap_RICactionType ricActionType;
      //not primitive
   e2ap_RICactionDefinition ricActionDefinition;
      //not primitive
   e2ap_RICactionExecutionOrder ricActionExecutionOrder;
      //not primitive
   e2ap_RICsubsequentAction ricSubsequentAction;
   OSBOOL m_ricSubsequentActionPresent;
   OSRTDList extElem1;  /* Extension elements */
} e2ap_RICaction_ToBeAddedForModification_Item;

EXTERN int asn1PE_e2ap_RICaction_ToBeAddedForModification_Item (OSCTXT* pctxt, e2ap_RICaction_ToBeAddedForModification_Item* pvalue);
EXTERN int asn1PD_e2ap_RICaction_ToBeAddedForModification_Item (OSCTXT* pctxt, e2ap_RICaction_ToBeAddedForModification_Item* pvalue);
EXTERN int asn1Init_e2ap_RICaction_ToBeAddedForModification_Item (e2ap_RICaction_ToBeAddedForModification_Item* pvalue);
EXTERN void asn1Free_e2ap_RICaction_ToBeAddedForModification_Item (OSCTXT* pctxt, e2ap_RICaction_ToBeAddedForModification_Item* pvalue);
EXTERN void asn1Print_e2ap_RICaction_ToBeAddedForModification_Item (const char* name, const e2ap_RICaction_ToBeAddedForModification_Item* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICaction_ToBeAddedForModification_Item (const char* name, e2ap_RICaction_ToBeAddedForModification_Item* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICaction_ToBeAddedForModification_Item (OSCTXT* pctxt, const char* name, const e2ap_RICaction_ToBeAddedForModification_Item* pvalue);
EXTERN int asn1Copy_e2ap_RICaction_ToBeAddedForModification_Item (OSCTXT* pctxt, const e2ap_RICaction_ToBeAddedForModification_Item* pSrcValue, e2ap_RICaction_ToBeAddedForModification_Item* pDstValue);