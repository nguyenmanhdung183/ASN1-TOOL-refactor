/************************************************/
/*       SEQUENCE - RANfunctionIDcause_Item        */
/************************************************/

typedef struct{  
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionIDcause_Item_t;  //SEQUENCE

