/************************************************/
/*       SEQUENCE - RICactionLoadConfirm_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadConfirm_et ricActionLoadConfirm; //e2ap_{ie_type} {field_name}  
}_e2ap_RICactionLoadConfirm_Item_t;  //SEQUENCE

