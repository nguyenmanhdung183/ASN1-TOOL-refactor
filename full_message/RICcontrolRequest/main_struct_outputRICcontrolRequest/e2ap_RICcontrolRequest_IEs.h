/*******************************************/
/*       IE - RICcontrolRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICcallProcessID_t id_RICcallProcessID; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcontrolHeader_t id_RICcontrolHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcontrolMessage_t id_RICcontrolMessage; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcontrolAckRequest_t id_RICcontrolAckRequest; //e2ap_{item_type} {field_name} alias = 13
}e2ap_RICcontrolRequest_t;
