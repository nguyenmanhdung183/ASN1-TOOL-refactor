/*******************************************/
/*       IE - RICserviceLoadStatusRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_LoadMeasurementID_t id_RICloadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_LoadMeasurementID_t id_E2nodeLoadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RegistrationRequest_t id_RegistrationRequest; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_RANfunctionLoadRequest_List_t id_RANfunctionLoadRequest_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_ReportingPeriodicity_t id_ReportingPeriodicity; //e2ap_{item_type} {field_name} alias = 13
}e2ap_RICserviceLoadStatusRequest_t;
