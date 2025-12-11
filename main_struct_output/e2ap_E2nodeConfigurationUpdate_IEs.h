/*******************************************/
/*       IE - E2nodeConfigurationUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask

    #define E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_GLOBAL_E2NODE_ID_PRESENT 0x01
    #define E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_E2NODE_COMPONENT_CONFIG_ADDITION_PRESENT 0x02
    #define E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_E2NODE_COMPONENT_CONFIG_UPDATE_PRESENT 0x04
    #define E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_PRESENT 0x08
    #define E2AP_E2NODE_CONFIGURATION_UPDATE_e2ap_ID_E2NODE_TNLASSOCIATION_REMOVAL_PRESENT 0x10
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_GlobalE2node_ID_t id_GlobalE2node_ID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigAddition_List_t id_E2nodeComponentConfigAddition; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigUpdate_List_t id_E2nodeComponentConfigUpdate; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigRemoval_List_t id_E2nodeComponentConfigRemoval; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeTNLassociationRemoval_List_t id_E2nodeTNLassociationRemoval; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2nodeConfigurationUpdate_t;
