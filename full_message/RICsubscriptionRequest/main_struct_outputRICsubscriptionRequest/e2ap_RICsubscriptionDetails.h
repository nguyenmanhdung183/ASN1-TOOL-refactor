/************************************************/
/*       SEQUENCE - RICsubscriptionDetails        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICeventTriggerDefinition_t ricEventTriggerDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RICactions_ToBeSetup_List_t ricAction_ToBeSetup_List; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionDetails_t;  //SEQUENCE

