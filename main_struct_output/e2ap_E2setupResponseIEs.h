/*******************************************/
/*       IE - E2setupResponse - (IEs)               */
/******************************************/
typedef struct{
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_GlobalRIC_ID_t id_GlobalRIC_ID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsID_List_t id_RANfunctionsAccepted; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsIDcause_List_t id_RANfunctionsRejected; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigAdditionAck_List_t id_E2nodeComponentConfigAdditionAck; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2setupResponse_t;
