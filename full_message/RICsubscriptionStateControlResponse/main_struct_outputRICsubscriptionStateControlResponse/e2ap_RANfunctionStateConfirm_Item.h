/************************************************/
/*       SEQUENCE - RANfunctionStateConfirm_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_STATE_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_SUSPENDED_LIST_PRESENT 0x01
    #define E2AP_RANFUNCTION_STATE_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_RESUMED_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICsubscriptionSuspended_List_t ricSubscriptionSuspended_list; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionResumed_List_t ricSubscriptionResumed_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionStateConfirm_Item_t;  //SEQUENCE

