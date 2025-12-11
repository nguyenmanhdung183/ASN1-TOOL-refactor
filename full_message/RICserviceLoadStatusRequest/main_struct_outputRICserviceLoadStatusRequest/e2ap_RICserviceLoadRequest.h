/************************************************/
/*       SEQUENCE - RICserviceLoadRequest        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_REPORT_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_INSERT_LOAD_REQUEST_PRESENT 0x02
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_CONTROL_LOAD_REQUEST_PRESENT 0x04
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_POLICY_LOAD_REQUEST_PRESENT 0x08
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_QUERY_LOAD_REQUEST_PRESENT 0x10
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICloadRequest_et ricServiceReportLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadRequest_et ricServiceInsertLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadRequest_et ricServiceControlLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadRequest_et ricServicePolicyLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadRequest_et ricServiceQueryLoadRequest; //e2ap_{ie_type} {field_name}  
}_e2ap_RICserviceLoadRequest_t;  //SEQUENCE

