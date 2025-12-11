/*****************************************/
/*           RICassistanceIndication_IEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_RICassistanceIndication_IEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_RICassistanceIndication_IEs_id_RICrequestID,
 
   T_E2AP_PDU_Contents_e2ap_RICassistanceIndication_IEs_id_RICassistanceSN,
 
   T_E2AP_PDU_Contents_e2ap_RICassistanceIndication_IEs_id_RICassistanceHeader,
 
   T_E2AP_PDU_Contents_e2ap_RICassistanceIndication_IEs_id_RICassistanceOutcome,
 
   T_E2AP_PDU_Contents_e2ap_RICassistanceIndication_IEs_id_Extended_RANNodeName_
 
} e2ap_RICassistanceIndication_IEs_TVALUE;

 /* ie là con của msg*/
typedef struct EXTERN e2ap_RICassistanceIndication_protocolIEs_element {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_RICassistanceIndication_IEs_TVALUE t;
      union {
        /*
        *id: id-RICrequestID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_RICrequestID * _e2apRICassistanceIndication_IEs_id_RICrequestID;
        /*
        *id: id-RICassistanceSN
        *criticality: reject
        *presence: mandatory
        */
         e2ap_RICassistanceSN * _e2apRICassistanceIndication_IEs_id_RICassistanceSN;
        /*
        *id: id-RICassistanceHeader
        *criticality: reject
        *presence: mandatory
        */
         e2ap_RICassistanceHeader * _e2apRICassistanceIndication_IEs_id_RICassistanceHeader;
        /*
        *id: id-RICassistanceOutcome
        *criticality: reject
        *presence: mandatory
        */
         e2ap_RICassistanceOutcome * _e2apRICassistanceIndication_IEs_id_RICassistanceOutcome;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_RICassistanceIndication_protocolIEs_element;

EXTERN int asn1PE_e2ap_RICassistanceIndication_protocolIEs_element (OSCTXT* pctxt, e2ap_RICassistanceIndication_protocolIEs_element* pvalue);
EXTERN int asn1PD_e2ap_RICassistanceIndication_protocolIEs_element (OSCTXT* pctxt, e2ap_RICassistanceIndication_protocolIEs_element* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceIndication_protocolIEs_element (e2ap_RICassistanceIndication_protocolIEs_element* pvalue);
EXTERN void asn1Free_e2ap_RICassistanceIndication_protocolIEs_element (OSCTXT* pctxt, e2ap_RICassistanceIndication_protocolIEs_element* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICassistanceIndication_protocolIEs_element (OSCTXT* pctxt, e2ap_RICassistanceIndication_protocolIEs_element* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICassistanceIndication_protocolIEs_element (const char * name, e2ap_RICassistanceIndication_protocolIEs_element* pvalue, char * buffer, OSSIZE bufSize);

 

