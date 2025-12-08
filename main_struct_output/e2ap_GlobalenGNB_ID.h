/************************************************/
/*       SEQUENCE - GlobalenGNB_ID        */
/************************************************/

typedef struct{  
  
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENGNB_ID_t gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalenGNB_ID_t;  //SEQUENCE

