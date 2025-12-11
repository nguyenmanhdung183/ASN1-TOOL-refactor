/************************************************/
/*       SEQUENCE - RICactionLoad_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadInformation_t ricActionLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICactionLoad_Item_t;  //SEQUENCE

