/*******************************************/
/*       IE - RICindication - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICactionID_t id_RICactionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICindicationSN_t id_RICindicationSN; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICindicationType_t id_RICindicationType; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_RICindicationHeader_t id_RICindicationHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICindicationMessage_t id_RICindicationMessage; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcallProcessID_t id_RICcallProcessID; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICindication_t;
