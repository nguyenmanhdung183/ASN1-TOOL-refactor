/************************************************/
/*       SEQUENCE - RICaction_ToBeModifiedForModification_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_ACTION_DEFINITION_PRESENT 0x01
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_ACTION_EXECUTION_ORDER_PRESENT 0x02
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICactionDefinition_t ricActionDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RICactionExecutionOrder_t ricActionExecutionOrder; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICsubsequentAction_t ricSubsequentAction; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_ToBeModifiedForModification_Item_t;  //SEQUENCE

