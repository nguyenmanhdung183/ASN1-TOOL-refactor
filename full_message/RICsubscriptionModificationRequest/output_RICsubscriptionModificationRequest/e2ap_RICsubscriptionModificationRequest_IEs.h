/*****************************************/
/*           RICsubscriptionModificationRequest_IEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequest_IEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequest_IEs_id_RICrequestID,
 
   T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequest_IEs_id_RANfunctionID,
 
   T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequest_IEs_id_RICeventTriggerDefinitionToBeModified,
 
   T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequest_IEs_id_RICactionsToBeRemovedForModification_List,
 
   T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequest_IEs_id_RICactionsToBeModifiedForModification_List,
 
   T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequest_IEs_id_RICactionsToBeAddedForModification_List,
 
   T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequest_IEs_id_Extended_RANNodeName_
 
} e2ap_RICsubscriptionModificationRequest_IEs_TVALUE;

 /* ie là con của msg*/
typedef struct EXTERN e2ap_RICsubscriptionModificationRequest_protocolIEs_element {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_RICsubscriptionModificationRequest_IEs_TVALUE t;
      union {
        /*
        *id: id-RICrequestID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_RICrequestID * _e2apRICsubscriptionModificationRequest_IEs_id_RICrequestID;
        /*
        *id: id-RANfunctionID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_RANfunctionID * _e2apRICsubscriptionModificationRequest_IEs_id_RANfunctionID;
        /*
        *id: id-RICeventTriggerDefinition
        *criticality: ignore
        *presence: optional
        */
         e2ap_RICeventTriggerDefinition * _e2apRICsubscriptionModificationRequest_IEs_id_RICeventTriggerDefinitionToBeModified;
        /*
        *id: id-RICactions_ToBeRemovedForModification_List
        *criticality: ignore
        *presence: optional
        */
         e2ap_RICactions_ToBeRemovedForModification_List * _e2apRICsubscriptionModificationRequest_IEs_id_RICactionsToBeRemovedForModification_List;
        /*
        *id: id-RICactions_ToBeModifiedForModification_List
        *criticality: ignore
        *presence: optional
        */
         e2ap_RICactions_ToBeModifiedForModification_List * _e2apRICsubscriptionModificationRequest_IEs_id_RICactionsToBeModifiedForModification_List;
        /*
        *id: id-RICactions_ToBeAddedForModification_List
        *criticality: ignore
        *presence: optional
        */
         e2ap_RICactions_ToBeAddedForModification_List * _e2apRICsubscriptionModificationRequest_IEs_id_RICactionsToBeAddedForModification_List;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_RICsubscriptionModificationRequest_protocolIEs_element;

EXTERN int asn1PE_e2ap_RICsubscriptionModificationRequest_protocolIEs_element (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest_protocolIEs_element* pvalue);
EXTERN int asn1PD_e2ap_RICsubscriptionModificationRequest_protocolIEs_element (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest_protocolIEs_element* pvalue);
EXTERN int asn1Init_e2ap_RICsubscriptionModificationRequest_protocolIEs_element (e2ap_RICsubscriptionModificationRequest_protocolIEs_element* pvalue);
EXTERN void asn1Free_e2ap_RICsubscriptionModificationRequest_protocolIEs_element (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest_protocolIEs_element* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationRequest_protocolIEs_element (OSCTXT* pctxt, e2ap_RICsubscriptionModificationRequest_protocolIEs_element* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICsubscriptionModificationRequest_protocolIEs_element (const char * name, e2ap_RICsubscriptionModificationRequest_protocolIEs_element* pvalue, char * buffer, OSSIZE bufSize);

 

