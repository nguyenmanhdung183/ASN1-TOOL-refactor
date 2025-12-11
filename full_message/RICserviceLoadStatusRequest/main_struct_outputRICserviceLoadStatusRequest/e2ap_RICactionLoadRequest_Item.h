/************************************************/
/*       SEQUENCE - RICactionLoadRequest_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadRequest_et ricActionLoadRequest; //e2ap_{ie_type} {field_name}  
}_e2ap_RICactionLoadRequest_Item_t;  //SEQUENCE

