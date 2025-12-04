/*****************************************/
/*           E2setupResponseIEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_TransactionID,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_GlobalRIC_ID,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_RANfunctionsAccepted,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_RANfunctionsRejected,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_E2nodeComponentConfigAdditionAck,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_Extended_RANNodeName_
 
} e2ap_E2setupResponseIEs_TVALUE;

 typedef struct EXTERN e2ap_E2setupResponse_protocolIEs_element {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2setupResponseIEs_TVALUE t;
      union {
        /*
        *id: id-TransactionID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_TransactionID * _e2apE2setupResponseIEs_id_TransactionID;
        /*
        *id: id-GlobalRIC-ID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_GlobalRIC_ID * _e2apE2setupResponseIEs_id_GlobalRIC_ID;
        /*
        *id: id-RANfunctionsID-List
        *criticality: reject
        *presence: optional
        */
         e2ap_RANfunctionsID_List * _e2apE2setupResponseIEs_id_RANfunctionsAccepted;
        /*
        *id: id-RANfunctionsIDcause-List
        *criticality: reject
        *presence: optional
        */
         e2ap_RANfunctionsIDcause_List * _e2apE2setupResponseIEs_id_RANfunctionsRejected;
        /*
        *id: id-E2nodeComponentConfigAdditionAck-List
        *criticality: reject
        *presence: mandatory
        */
         e2ap_E2nodeComponentConfigAdditionAck_List * _e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2setupResponse_protocolIEs_element;

EXTERN int asn1PE_e2ap_E2setupResponse_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs_element* pvalue);
EXTERN int asn1PD_e2ap_E2setupResponse_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs_element* pvalue);
EXTERN int asn1Init_e2ap_E2setupResponse_protocolIEs_element (e2ap_E2setupResponse_protocolIEs_element* pvalue);
EXTERN void asn1Free_e2ap_E2setupResponse_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs_element* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2setupResponse_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs_element* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2setupResponse_protocolIEs_element (const char * name, e2ap_E2setupResponse_protocolIEs_element* pvalue, char * buffer, OSSIZE bufSize);

 

