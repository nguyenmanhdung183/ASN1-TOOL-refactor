/************************************************/
/*       SEQUENCE - RICserviceLoadConfirm        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_REPORT_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_INSERT_LOAD_CONFIRM_PRESENT 0x02
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_CONTROL_LOAD_CONFIRM_PRESENT 0x04
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_POLICY_LOAD_CONFIRM_PRESENT 0x08
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_QUERY_LOAD_CONFIRM_PRESENT 0x10
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICloadConfirm_et ricServiceReportLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadConfirm_et ricServiceInsertLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadConfirm_et ricServiceControlLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadConfirm_et ricServicePolicyLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadConfirm_et ricServiceQueryLoadConfirm; //e2ap_{ie_type} {field_name}  
}_e2ap_RICserviceLoadConfirm_t;  //SEQUENCE

