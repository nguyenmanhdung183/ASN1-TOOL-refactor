/************************************************/
/*       SEQUENCE - RANfunctionLoad_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RAN_FUNCTION_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RIC_SERVICE_LOAD_INFORMATION_PRESENT 0x02
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_LIST_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadInformation_t ranFunctionLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICserviceLoadInformation_t ricServiceLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionLoad_List_t ricSubscriptionLoad_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionLoad_Item_t;  //SEQUENCE

