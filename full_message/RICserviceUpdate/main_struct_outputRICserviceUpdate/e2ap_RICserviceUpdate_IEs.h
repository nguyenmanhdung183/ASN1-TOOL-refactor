/*******************************************/
/*       IE - RICserviceUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctions_List_t id_RANfunctionsAdded; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctions_List_t id_RANfunctionsModified; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsID_List_t id_RANfunctionsDeleted; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceUpdate_t;
