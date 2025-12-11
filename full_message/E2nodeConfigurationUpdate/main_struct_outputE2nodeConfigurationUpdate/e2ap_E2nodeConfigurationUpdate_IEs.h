/*******************************************/
/*       IE - E2nodeConfigurationUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_GlobalE2node_ID_t id_GlobalE2node_ID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigAddition_List_t id_E2nodeComponentConfigAddition; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigUpdate_List_t id_E2nodeComponentConfigUpdate; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigRemoval_List_t id_E2nodeComponentConfigRemoval; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeTNLassociationRemoval_List_t id_E2nodeTNLassociationRemoval; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2nodeConfigurationUpdate_t;
