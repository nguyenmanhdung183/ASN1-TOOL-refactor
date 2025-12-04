
/* primitive in scope sequence*/    
        
    
        
/* end primitive in scope sequence*/
typedef struct{
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT 0x01
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

    _e2ap_GlobalENB_ID global_eNB_ID; //e2ap_{type} {field}
    _e2ap_GlobalenGNB_ID global_en_gNB_ID; //e2ap_{type} {field}
}_e2ap_E2nodeComponentInterfaceX2_t;