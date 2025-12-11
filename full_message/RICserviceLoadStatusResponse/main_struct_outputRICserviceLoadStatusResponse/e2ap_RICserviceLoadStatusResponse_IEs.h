/*******************************************/
/*       IE - RICserviceLoadStatusResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_LoadMeasurementID_t id_RICloadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_LoadMeasurementID_t id_E2nodeLoadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctionLoadConfirm_List_t id_RANfunctionLoadConfirm_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceLoadStatusResponse_t;
