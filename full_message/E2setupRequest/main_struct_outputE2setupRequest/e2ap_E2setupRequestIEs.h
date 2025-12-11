/*******************************************/
/*       IE - E2setupRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_GlobalE2node_ID_t id_GlobalE2node_ID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctions_List_t id_RANfunctionsAdded; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigAddition_List_t id_E2nodeComponentConfigAddition; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2setupRequest_t;
