/*******************************************/
/*       IE - RICsubscriptionStateControlRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionStateControl_List_t id_RANfunctionStateControl_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionStateControlRequest_t;
