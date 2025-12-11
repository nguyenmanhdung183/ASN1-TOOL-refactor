/*******************************************/
/*       IE - RICqueryRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICqueryHeader_t id_RICqueryHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICqueryDefinition_t id_RICqueryDefinition; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICqueryRequest_t;
