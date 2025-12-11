/*******************************************/
/*       IE - RICsubscriptionAuditResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionAuditActionList_t id_RICsubscriptionAuditConfirmedList; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionAuditList_t id_RICsubscriptionAuditUnkownList; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionAuditActionList_t id_RICsubscriptionAuditMissingList; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionAuditResponse_t;
