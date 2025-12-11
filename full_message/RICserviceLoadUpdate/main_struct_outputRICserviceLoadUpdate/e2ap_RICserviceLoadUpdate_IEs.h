/*******************************************/
/*       IE - RICserviceLoadUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_LoadMeasurementID_t id_RICloadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_LoadMeasurementID_t id_E2nodeLoadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctionLoad_List_t id_RANfunctionLoad_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceLoadUpdate_t;
