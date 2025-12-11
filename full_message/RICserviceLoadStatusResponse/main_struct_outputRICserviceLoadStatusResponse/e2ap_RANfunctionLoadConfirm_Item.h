/************************************************/
/*       SEQUENCE - RANfunctionLoadConfirm_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RAN_FUNCTION_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RIC_SERVICE_LOAD_CONFIRM_PRESENT 0x02
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_CONFIRM_LIST_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadConfirm_et ranFunctionLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICserviceLoadConfirm_t ricServiceLoadConfirm; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionLoadConfirm_List_t ricSubscriptionLoadConfirm_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionLoadConfirm_Item_t;  //SEQUENCE

