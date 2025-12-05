/************************************************/
/*       SEQUENCE - GlobalgNB_ID        */
/************************************************/
typedef struct{   
     _e2ap_PLMN_Identity_t plmn_id; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_GNB_ID_Choice_t gnb_id; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalgNB_ID_t;  //SEQUENCE

