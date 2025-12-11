/************************************************/
/*       SEQUENCE - RICsubscriptionAuditAction_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICaction_Admitted_List_t ricAction_Admitted_List; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionAuditAction_Item_t;  //SEQUENCE

