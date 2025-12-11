/************************************************/
/*       SEQUENCE - RICsubscriptionAudit_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICsubscriptionAudit_Item_t;  //SEQUENCE

