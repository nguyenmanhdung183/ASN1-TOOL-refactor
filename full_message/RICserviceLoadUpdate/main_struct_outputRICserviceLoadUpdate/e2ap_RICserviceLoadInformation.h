/************************************************/
/*       SEQUENCE - RICserviceLoadInformation        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_REPORT_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_INSERT_LOAD_INFORMATION_PRESENT 0x02
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_CONTROL_LOAD_INFORMATION_PRESENT 0x04
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_POLICY_LOAD_INFORMATION_PRESENT 0x08
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_QUERY_LOAD_INFORMATION_PRESENT 0x10
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICloadInformation_t ricServiceReportLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricServiceInsertLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricServiceControlLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricServicePolicyLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricServiceQueryLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICserviceLoadInformation_t;  //SEQUENCE

