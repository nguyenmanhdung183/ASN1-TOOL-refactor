/*******************************************/
/*       IE - RICassistanceRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICassistanceHeader_t id_RICassistanceHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICassistanceMessage_t id_RICassistanceMessage; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICassistanceUpdate_t id_RICassistanceUpdate; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_RICassistanceUpdateNumber_t id_RICassistanceUpdateNumber; //e2ap_{item_type} {field_name} alias = 6
}e2ap_RICassistanceRequest_t;
