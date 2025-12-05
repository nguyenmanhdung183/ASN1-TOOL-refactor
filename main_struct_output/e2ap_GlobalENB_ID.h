/************************************************/
/*       SEQUENCE - GlobalENB_ID        */
/************************************************/
typedef struct{   
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENB_ID_t eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalENB_ID_t;  //SEQUENCE

