/************************************************/
/*       SEQUENCE - E2connectionSetupFailed_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_TNLinformation_t tnlInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2connectionSetupFailed_Item_t;  //SEQUENCE

