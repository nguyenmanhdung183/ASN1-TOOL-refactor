/*******************************************/
/*       IE - RICsubscriptionResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICaction_Admitted_List_t id_RICactions_Admitted; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICaction_NotAdmitted_List_t id_RICactions_NotAdmitted; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionResponse_t;
