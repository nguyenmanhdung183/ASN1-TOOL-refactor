/*******************************************/
/*       IE - E2nodeConfigurationUpdateFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_TimeToWait_t id_TimeToWait; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2nodeConfigurationUpdateFailure_t;
