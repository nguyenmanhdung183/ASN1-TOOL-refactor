/*******************************************/
/*       IE - RICsubscriptionModificationConfirm - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICactions_ConfirmedForModification_List_t id_RICactionsConfirmedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_RefusedToBeModified_List_t id_RICactionsRefusedToBeModified_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_ConfirmedForRemoval_List_t id_RICactionsConfirmedForRemoval_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_RefusedToBeRemoved_List_t id_RICactionsRefusedToBeRemoved_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationConfirm_t;
