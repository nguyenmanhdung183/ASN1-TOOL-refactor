/************************************************/
/*       SEQUENCE - RANfunction_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RANfunctionDefinition_t ranFunctionDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RANfunctionRevision_t ranFunctionRevision; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RANfunctionOID_t ranFunctionOID; //e2ap_{ie_type} {field_name} alias = 10
 
}_e2ap_RANfunction_Item_t;  //SEQUENCE

