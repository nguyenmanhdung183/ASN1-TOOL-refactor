/*******************************************/
/*       IE - E2connectionUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask

    #define E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_ADD_PRESENT 0x01
    #define E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_REMOVE_PRESENT 0x02
    #define E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_MODIFY_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_E2connectionUpdate_List_t id_E2connectionUpdateAdd; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionUpdateRemove_List_t id_E2connectionUpdateRemove; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionUpdate_List_t id_E2connectionUpdateModify; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2connectionUpdate_t;
