/************************************************/
/*        CHOICE - GlobalE2node_ID           */
/************************************************/

 
 
 
 

/* main struct for choice */
typedef struct{  
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_G_NB 1 //NAME + field_name
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_EN_G_NB 2 //NAME + field_name
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_NG_E_NB 3 //NAME + field_name
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_E_NB 4 //NAME + field_name
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_GlobalE2node_gNB_ID_t gNB; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_GlobalE2node_en_gNB_ID_t en_gNB; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_GlobalE2node_ng_eNB_ID_t ng_eNB; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_GlobalE2node_eNB_ID_t eNB; //e2ap_{ie_type} {field_name} alias = -1 

}_e2ap_GlobalE2node_ID_t;// CHOICE   

