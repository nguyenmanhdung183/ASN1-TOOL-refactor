/*******************************************/
/*       IE - E2connectionUpdateAcknowledge - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask

    #define E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_PRESENT 0x01
    #define E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_FAILED_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_E2connectionUpdate_List_t id_E2connectionSetup; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionSetupFailed_List_t id_E2connectionSetupFailed; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2connectionUpdateAcknowledge_t;
