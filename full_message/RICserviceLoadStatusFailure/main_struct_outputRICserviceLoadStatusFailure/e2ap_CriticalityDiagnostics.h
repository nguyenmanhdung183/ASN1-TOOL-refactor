/************************************************/
/*       SEQUENCE - CriticalityDiagnostics        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CODE_PRESENT 0x01
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_TRIGGERING_MESSAGE_PRESENT 0x02
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CRITICALITY_PRESENT 0x04
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_RIC_REQUESTOR_ID_PRESENT 0x08
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_I_ES_CRITICALITY_DIAGNOSTICS_PRESENT 0x10
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_ProcedureCode_t procedureCode; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_TriggeringMessage_et triggeringMessage; //e2ap_{ie_type} {field_name}   
     _e2ap_Criticality_et procedureCriticality; //e2ap_{ie_type} {field_name}   
     _e2ap_RICrequestID_t ricRequestorID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_CriticalityDiagnostics_IE_List_t iEsCriticalityDiagnostics; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_CriticalityDiagnostics_t;  //SEQUENCE

