/************************************************/
/*       SEQUENCE - GlobalngeNB_ID        */
/************************************************/
typedef struct{   
     _e2ap_PLMN_Identity_t plmn_id; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENB_ID_Choice_t enb_id; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalngeNB_ID_t;  //SEQUENCE

