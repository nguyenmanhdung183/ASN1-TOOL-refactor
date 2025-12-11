/*******************************************/
/*       IE - RICqueryResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICqueryOutcome_t id_RICqueryOutcome; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICqueryResponse_t;
