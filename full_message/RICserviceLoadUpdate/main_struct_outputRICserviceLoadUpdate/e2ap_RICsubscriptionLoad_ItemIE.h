/************************************************/
/*       SEQUENCE - RICsubscriptionLoad_ItemIE        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_ITEM_IE_e2ap_RIC_ACTION_LOAD_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricSubscriptionLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICactionLoad_List_t ricActionLoad_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionLoad_ItemIE_t;  //SEQUENCE

