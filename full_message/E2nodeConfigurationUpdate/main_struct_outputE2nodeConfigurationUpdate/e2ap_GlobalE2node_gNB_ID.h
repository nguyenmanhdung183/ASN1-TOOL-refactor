/************************************************/
/*       SEQUENCE - GlobalE2node_gNB_ID        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_GLOBAL_EN_G_NB_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_CU_UP_ID_PRESENT 0x02
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_DU_ID_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalgNB_ID_t global_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GNB_CU_UP_ID_t gNB_CU_UP_ID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_GNB_DU_ID_t gNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_GlobalE2node_gNB_ID_t;  //SEQUENCE

