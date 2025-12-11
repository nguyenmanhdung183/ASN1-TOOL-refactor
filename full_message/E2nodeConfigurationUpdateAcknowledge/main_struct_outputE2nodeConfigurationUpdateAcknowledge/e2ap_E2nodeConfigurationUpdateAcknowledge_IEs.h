/*******************************************/
/*       IE - E2nodeConfigurationUpdateAcknowledge - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_E2nodeComponentConfigAdditionAck_List_t id_E2nodeComponentConfigAdditionAck; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigUpdateAck_List_t id_E2nodeComponentConfigUpdateAck; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigRemovalAck_List_t id_E2nodeComponentConfigRemovalAck; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2nodeConfigurationUpdateAcknowledge_t;
