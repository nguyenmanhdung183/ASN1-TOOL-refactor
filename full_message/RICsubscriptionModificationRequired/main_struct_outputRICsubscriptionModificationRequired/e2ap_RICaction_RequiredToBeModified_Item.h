/************************************************/
/*       SEQUENCE - RICaction_RequiredToBeModified_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICtimeToWait_et ricTimeToWait; //e2ap_{ie_type} {field_name}  
}_e2ap_RICaction_RequiredToBeModified_Item_t;  //SEQUENCE

