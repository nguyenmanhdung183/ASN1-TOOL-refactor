/*******************************************/
/*       IE - RICsubscriptionRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICsubscriptionDetails_t id_RICsubscriptionDetails; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionTime_t id_RICsubscriptionStartTime; //e2ap_{item_type} {field_name} alias = 8
    _e2ap_RICsubscriptionTime_t id_RICsubscriptionEndTime; //e2ap_{item_type} {field_name} alias = 8
}e2ap_RICsubscriptionRequest_t;
