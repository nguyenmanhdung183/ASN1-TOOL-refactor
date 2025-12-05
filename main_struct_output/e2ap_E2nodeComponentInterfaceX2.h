/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceX2               */
/************************************************/
/* primitive in scope sequence*/    
        
    
        
/* main struct for sequence -*/
typedef struct{
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT 0x01
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentInterfaceX2_t;  //SEQUENCE

