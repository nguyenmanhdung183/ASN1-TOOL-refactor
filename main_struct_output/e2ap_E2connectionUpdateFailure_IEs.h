/*******************************************/
/*       IE - E2connectionUpdateFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask

    #define E2AP_E2CONNECTION_UPDATE_FAILURE_e2ap_ID_CAUSE_PRESENT 0x01
    #define E2AP_E2CONNECTION_UPDATE_FAILURE_e2ap_ID_TIME_TO_WAIT_PRESENT 0x02
    #define E2AP_E2CONNECTION_UPDATE_FAILURE_e2ap_ID_CRITICALITY_DIAGNOSTICS_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_TimeToWait_t id_TimeToWait; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2connectionUpdateFailure_t;
