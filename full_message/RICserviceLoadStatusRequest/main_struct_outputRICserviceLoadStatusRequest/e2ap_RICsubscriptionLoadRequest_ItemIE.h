/************************************************/
/*       SEQUENCE - RICsubscriptionLoadRequest_ItemIE        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_IE_e2ap_RIC_ACTION_LOAD_REQUEST_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadRequest_et ricSubscriptionLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICactionLoadRequest_List_t ricActionLoadRequest_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionLoadRequest_ItemIE_t;  //SEQUENCE

