/*******************************************/
/*       IE - RICserviceQuery - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctionsID_List_t id_RANfunctionsAccepted; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceQuery_t;
