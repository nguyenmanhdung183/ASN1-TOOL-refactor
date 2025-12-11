/************************************************/
/*       SEQUENCE - RANfunctionStateControl_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_STATE_CONTROL_ITEM_e2ap_RIC_SUBSCRIPTION_TO_BE_SUSPENDED_LIST_PRESENT 0x01
    #define E2AP_RANFUNCTION_STATE_CONTROL_ITEM_e2ap_RIC_SUBSCRIPTION_TO_BE_RESUMED_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICsubscriptionToBeSuspended_List_t ricSubscriptionToBeSuspended_list; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionToBeResumed_List_t ricSubscriptionToBeResumed_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionStateControl_Item_t;  //SEQUENCE

