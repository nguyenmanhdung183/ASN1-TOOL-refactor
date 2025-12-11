/************************************************/
/*        CHOICE - E2nodeComponentID           */
/************************************************/

 
 
 
 
 
 
 

/* main struct for choice */
typedef struct{  
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG 1 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN 2 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1 3 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1 4 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1 5 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1 6 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2 7 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_E2nodeComponentInterfaceNG_t e2nodeComponentInterfaceTypeNG; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceXn_t e2nodeComponentInterfaceTypeXn; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceE1_t e2nodeComponentInterfaceTypeE1; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceF1_t e2nodeComponentInterfaceTypeF1; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceW1_t e2nodeComponentInterfaceTypeW1; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceS1_t e2nodeComponentInterfaceTypeS1; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceX2_t e2nodeComponentInterfaceTypeX2; //e2ap_{ie_type} {field_name} alias = -1 

}_e2ap_E2nodeComponentID_t;// CHOICE   

