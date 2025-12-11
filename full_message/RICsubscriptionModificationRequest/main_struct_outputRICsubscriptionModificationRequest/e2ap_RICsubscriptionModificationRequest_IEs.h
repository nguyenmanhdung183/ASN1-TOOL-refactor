/*******************************************/
/*       IE - RICsubscriptionModificationRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICeventTriggerDefinition_t id_RICeventTriggerDefinitionToBeModified; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICactions_ToBeRemovedForModification_List_t id_RICactionsToBeRemovedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_ToBeModifiedForModification_List_t id_RICactionsToBeModifiedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_ToBeAddedForModification_List_t id_RICactionsToBeAddedForModification_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationRequest_t;
