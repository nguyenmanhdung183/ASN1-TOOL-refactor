/************************************************/
/*        CHOICE - Cause           */
/************************************************/

 
 
 
 
 
 
 

/* main struct for choice */
typedef struct{  
    #define E2AP_CAUSE_e2ap_RIC_REQUEST 1 //NAME + field_name
    #define E2AP_CAUSE_e2ap_RIC_SERVICE 2 //NAME + field_name
    #define E2AP_CAUSE_e2ap_E2NODE 3 //NAME + field_name
    #define E2AP_CAUSE_e2ap_TRANSPORT 4 //NAME + field_name
    #define E2AP_CAUSE_e2ap_PROTOCOL 5 //NAME + field_name
    #define E2AP_CAUSE_e2ap_MISC 6 //NAME + field_name
    #define E2AP_CAUSE_e2ap_SERVICE_LAYER 7 //NAME + field_name
    #define E2AP_CAUSE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_CauseRICrequest_et ricRequest; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseRICservice_et ricService; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseE2node_et e2Node; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseTransport_et transport; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseProtocol_et protocol; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseMisc_et misc; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseServiceLayer_t serviceLayer; //e2ap_{ie_type} {field_name} alias = -1 

}_e2ap_Cause_t;// CHOICE   

