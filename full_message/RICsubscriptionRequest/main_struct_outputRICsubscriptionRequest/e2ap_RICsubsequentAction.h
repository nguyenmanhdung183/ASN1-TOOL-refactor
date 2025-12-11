/************************************************/
/*       SEQUENCE - RICsubsequentAction        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICsubsequentActionType_et ricSubsequentActionType; //e2ap_{ie_type} {field_name}   
     _e2ap_RICtimeToWait_et ricTimeToWait; //e2ap_{ie_type} {field_name}  
}_e2ap_RICsubsequentAction_t;  //SEQUENCE

