/************************************************/
/*       SEQUENCE - RICaction_FailedToBeModifiedForModification_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_FailedToBeModifiedForModification_Item_t;  //SEQUENCE

