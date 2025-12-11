/************************************************/
/*       SEQUENCE - RICsubscriptionLoadConfirm_ItemIE        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_IE_e2ap_RIC_ACTION_LOAD_CONFIRM_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadConfirm_et ricSubscriptionLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICactionLoadConfirm_List_t ricActionLoadConfirm_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionLoadConfirm_ItemIE_t;  //SEQUENCE

