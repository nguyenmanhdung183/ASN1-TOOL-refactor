/************************************************/
/*       SEQUENCE - RICaction_ToBeAddedForModification_Item        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICACTION_TO_BE_ADDED_FOR_MODIFICATION_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICactionType_et ricActionType; //e2ap_{ie_type} {field_name}   
     _e2ap_RICactionDefinition_t ricActionDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RICactionExecutionOrder_t ricActionExecutionOrder; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICsubsequentAction_t ricSubsequentAction; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_ToBeAddedForModification_Item_t;  //SEQUENCE

