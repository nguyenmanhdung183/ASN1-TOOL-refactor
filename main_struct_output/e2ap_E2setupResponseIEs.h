/*******************************************/
/*       IE - E2setupResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask


#define E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_ACCEPTED_PRESENT 0x01
#define E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_REJECTED_PRESENT 0x02

    rrc_bitmask_t bitmask; /* BITMASK ^*/

    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_GlobalRIC_ID_t id_GlobalRIC_ID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsID_List_t id_RANfunctionsAccepted; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsIDcause_List_t id_RANfunctionsRejected; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigAdditionAck_List_t id_E2nodeComponentConfigAdditionAck; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2setupResponse_t;

