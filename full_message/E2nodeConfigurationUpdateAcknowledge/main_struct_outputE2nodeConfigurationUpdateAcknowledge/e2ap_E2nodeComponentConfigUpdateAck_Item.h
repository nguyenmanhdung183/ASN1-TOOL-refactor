/************************************************/
/*       SEQUENCE - E2nodeComponentConfigUpdateAck_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}   
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_E2nodeComponentConfigurationAck_t e2nodeComponentConfigurationAck; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigUpdateAck_Item_t;  //SEQUENCE

