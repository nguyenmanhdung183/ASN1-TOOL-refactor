/************************************************/
/*       SEQUENCE - E2connectionUpdate_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_TNLinformation_t tnlInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_TNLusage_et tnlUsage; //e2ap_{ie_type} {field_name}  
}_e2ap_E2connectionUpdate_Item_t;  //SEQUENCE

