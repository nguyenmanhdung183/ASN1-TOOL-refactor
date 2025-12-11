/************************************************/
/*       SEQUENCE - E2nodeComponentConfigUpdate_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}   
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_E2nodeComponentConfiguration_t e2nodeComponentConfiguration; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigUpdate_Item_t;  //SEQUENCE

