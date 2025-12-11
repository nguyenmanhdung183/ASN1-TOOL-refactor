/*****************************************/
/*           E2nodeConfigurationUpdateAcknowledge_IEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdateAcknowledge_IEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdateAcknowledge_IEs_id_TransactionID,
 
   T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdateAcknowledge_IEs_id_E2nodeComponentConfigAdditionAck,
 
   T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdateAcknowledge_IEs_id_E2nodeComponentConfigUpdateAck,
 
   T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdateAcknowledge_IEs_id_E2nodeComponentConfigRemovalAck,
 
   T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdateAcknowledge_IEs_id_Extended_RANNodeName_
 
} e2ap_E2nodeConfigurationUpdateAcknowledge_IEs_TVALUE;

 /* ie là con của msg*/
typedef struct EXTERN e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2nodeConfigurationUpdateAcknowledge_IEs_TVALUE t;
      union {
        /*
        *id: id-TransactionID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_TransactionID * _e2apE2nodeConfigurationUpdateAcknowledge_IEs_id_TransactionID;
        /*
        *id: id-E2nodeComponentConfigAdditionAck_List
        *criticality: reject
        *presence: optional
        */
         e2ap_E2nodeComponentConfigAdditionAck_List * _e2apE2nodeConfigurationUpdateAcknowledge_IEs_id_E2nodeComponentConfigAdditionAck;
        /*
        *id: id-E2nodeComponentConfigUpdateAck_List
        *criticality: reject
        *presence: optional
        */
         e2ap_E2nodeComponentConfigUpdateAck_List * _e2apE2nodeConfigurationUpdateAcknowledge_IEs_id_E2nodeComponentConfigUpdateAck;
        /*
        *id: id-E2nodeComponentConfigRemovalAck_List
        *criticality: reject
        *presence: optional
        */
         e2ap_E2nodeComponentConfigRemovalAck_List * _e2apE2nodeConfigurationUpdateAcknowledge_IEs_id_E2nodeComponentConfigRemovalAck;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element;

EXTERN int asn1PE_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element (OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pvalue);
EXTERN int asn1PD_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element (OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pvalue);
EXTERN int asn1Init_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element (e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pvalue);
EXTERN void asn1Free_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element (OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element (OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element (const char * name, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pvalue, char * buffer, OSSIZE bufSize);

 

