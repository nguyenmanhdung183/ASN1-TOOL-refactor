/************************************************/
/*       SEQUENCE - RANfunctionLoadRequest_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RAN_FUNCTION_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RIC_SERVICE_LOAD_REQUEST_PRESENT 0x02
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_REQUEST_LIST_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadRequest_et ranFunctionLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICserviceLoadRequest_t ricServiceLoadRequest; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionLoadRequest_List_t ricSubscriptionLoadRequest_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionLoadRequest_Item_t;  //SEQUENCE

