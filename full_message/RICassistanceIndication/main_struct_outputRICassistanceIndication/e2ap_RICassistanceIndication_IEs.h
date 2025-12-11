/*******************************************/
/*       IE - RICassistanceIndication - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICassistanceSN_t id_RICassistanceSN; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICassistanceHeader_t id_RICassistanceHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICassistanceOutcome_t id_RICassistanceOutcome; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICassistanceIndication_t;
