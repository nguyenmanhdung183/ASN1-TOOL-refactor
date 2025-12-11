/*******************************************/
/*       IE - RICcontrolFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICcallProcessID_t id_RICcallProcessID; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICcontrolOutcome_t id_RICcontrolOutcome; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICcontrolFailure_t;
