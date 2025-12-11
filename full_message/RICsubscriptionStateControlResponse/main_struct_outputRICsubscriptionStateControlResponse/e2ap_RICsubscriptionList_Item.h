/************************************************/
/*       SEQUENCE - RICsubscriptionList_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LIST_ITEM_e2ap_RIC_ACTION_LIST_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICaction_List_t ricAction_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionList_Item_t;  //SEQUENCE

