/************************************************/
/*       SEQUENCE - GlobalE2node_ng_eNB_ID        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_GLOBAL_E_NB_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_NG_ENB_DU_ID_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalngeNB_ID_t global_ng_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_NGENB_DU_ID_t ngENB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_GlobalE2node_ng_eNB_ID_t;  //SEQUENCE

