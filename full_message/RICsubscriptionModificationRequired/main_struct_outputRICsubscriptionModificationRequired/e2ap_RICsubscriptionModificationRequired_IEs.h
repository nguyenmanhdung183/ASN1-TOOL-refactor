/*******************************************/
/*       IE - RICsubscriptionModificationRequired - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICactions_RequiredToBeModified_List_t id_RICactionsRequiredToBeModified_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_RequiredToBeRemoved_List_t id_RICactionsRequiredToBeRemoved_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationRequired_t;
