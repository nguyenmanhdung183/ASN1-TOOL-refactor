/*******************************************/
/*       IE - RICserviceLoadStatusFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_LoadMeasurementID_t id_RICloadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_LoadMeasurementID_t id_E2nodeLoadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceLoadStatusFailure_t;
