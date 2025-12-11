/*****************************************/
/*           E2connectionUpdateFailure_IEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdateFailure_IEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdateFailure_IEs_id_TransactionID,
 
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdateFailure_IEs_id_Cause,
 
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdateFailure_IEs_id_TimeToWait,
 
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdateFailure_IEs_id_CriticalityDiagnostics,
 
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdateFailure_IEs_id_Extended_RANNodeName_
 
} e2ap_E2connectionUpdateFailure_IEs_TVALUE;

 /* ie là con của msg*/
typedef struct EXTERN e2ap_E2connectionUpdateFailure_protocolIEs_element {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2connectionUpdateFailure_IEs_TVALUE t;
      union {
        /*
        *id: id-TransactionID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_TransactionID * _e2apE2connectionUpdateFailure_IEs_id_TransactionID;
        /*
        *id: id-Cause
        *criticality: reject
        *presence: optional
        */
         e2ap_Cause * _e2apE2connectionUpdateFailure_IEs_id_Cause;
        /*
        *id: id-TimeToWait
        *criticality: ignore
        *presence: optional
        */
         e2ap_TimeToWait * _e2apE2connectionUpdateFailure_IEs_id_TimeToWait;
        /*
        *id: id-CriticalityDiagnostics
        *criticality: ignore
        *presence: optional
        */
         e2ap_CriticalityDiagnostics * _e2apE2connectionUpdateFailure_IEs_id_CriticalityDiagnostics;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2connectionUpdateFailure_protocolIEs_element;

EXTERN int asn1PE_e2ap_E2connectionUpdateFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure_protocolIEs_element* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdateFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure_protocolIEs_element* pvalue);
EXTERN int asn1Init_e2ap_E2connectionUpdateFailure_protocolIEs_element (e2ap_E2connectionUpdateFailure_protocolIEs_element* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdateFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure_protocolIEs_element* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2connectionUpdateFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdateFailure_protocolIEs_element* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdateFailure_protocolIEs_element (const char * name, e2ap_E2connectionUpdateFailure_protocolIEs_element* pvalue, char * buffer, OSSIZE bufSize);

 

