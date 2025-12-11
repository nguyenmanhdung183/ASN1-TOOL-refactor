/*******************************************/
/*       IE - RICsubscriptionModificationResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICactions_RemovedForModification_List_t id_RICactionsRemovedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_FailedToBeRemovedForModification_List_t id_RICactionsFailedToBeRemovedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_ModifiedForModification_List_t id_RICactionsModifiedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_FailedToBeModifiedForModification_List_t id_RICactionsFailedToBeModifiedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_AddedForModification_List_t id_RICactionsAddedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_FailedToBeAddedForModification_List_t id_RICactionsFailedToBeAddedForModification_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationResponse_t;
