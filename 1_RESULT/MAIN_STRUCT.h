#ifndef MAIN_STRUCT_H
#define MAIN_STRUCT_H

#include "stub.h"

/************************************************/
/*       SEQUENCE - RICrequestID        */
/************************************************/
typedef UInt16 _e2ap_RICrequestID_ricRequestorID;
 
typedef UInt16 _e2ap_RICrequestID_ricInstanceID;
 
/* main struct for sequence */
typedef struct{  
  
    _e2ap_RICrequestID_ricRequestorID_t ricRequestorID; //INTEGER (0..65535)
  
    _e2ap_RICrequestID_ricInstanceID_t ricInstanceID; //INTEGER (0..65535)
 
}_e2ap_RICrequestID_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - RANfunctionID               */
/************************************************/

/* RANfunctionID- INTEGER (0..4095)*/

 
typedef UInt16 _e2ap_RANfunctionID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - CauseRICrequest               */
/************************************************/

/* CauseRICrequest- ENUMERATED*/

 
typedef enum{
    
    E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID = 0,    
    E2AP_CAUSE_RICREQUEST_ACTION_NOT_SUPPORTED = 1,    
    E2AP_CAUSE_RICREQUEST_EXCESSIVE_ACTIONS = 2,    
    E2AP_CAUSE_RICREQUEST_DUPLICATE_ACTION = 3,    
    E2AP_CAUSE_RICREQUEST_DUPLICATE_EVENT_TRIGGER = 4,    
    E2AP_CAUSE_RICREQUEST_FUNCTION_RESOURCE_LIMIT = 5,    
    E2AP_CAUSE_RICREQUEST_REQUEST_ID_UNKNOWN = 6,    
    E2AP_CAUSE_RICREQUEST_INCONSISTENT_ACTION_SUBSEQUENT_ACTION_SEQUENCE = 7,    
    E2AP_CAUSE_RICREQUEST_CONTROL_MESSAGE_INVALID = 8,    
    E2AP_CAUSE_RICREQUEST_RIC_CALL_PROCESS_ID_INVALID = 9,    
    E2AP_CAUSE_RICREQUEST_CONTROL_TIMER_EXPIRED = 10,    
    E2AP_CAUSE_RICREQUEST_CONTROL_FAILED_TO_EXECUTE = 11,    
    E2AP_CAUSE_RICREQUEST_SYSTEM_NOT_READY = 12,    
    E2AP_CAUSE_RICREQUEST_UNSPECIFIED = 13,    
    E2AP_CAUSE_RICREQUEST_RIC_SUBSCRIPTION_END_TIME_EXPIRED = 14,    
    E2AP_CAUSE_RICREQUEST_RIC_SUBSCRIPTION_END_TIME_INVALID = 15,    
    E2AP_CAUSE_RICREQUEST_DUPLICATE_RIC_REQUEST_ID = 16,    
    E2AP_CAUSE_RICREQUEST_EVENT_TRIGGER_NOT_SUPPORTED = 17,    
    E2AP_CAUSE_RICREQUEST_REQUESTED_INFORMATION_UNAVAILABLE = 18,    
    E2AP_CAUSE_RICREQUEST_INVALID_INFORMATION_REQUEST = 19  

}_e2ap_CauseRICrequest_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - CauseRICservice               */
/************************************************/

/* CauseRICservice- ENUMERATED*/

 
typedef enum{
    
    E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED = 0,    
    E2AP_CAUSE_RICSERVICE_EXCESSIVE_FUNCTIONS = 1,    
    E2AP_CAUSE_RICSERVICE_RIC_RESOURCE_LIMIT = 2  

}_e2ap_CauseRICservice_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - CauseE2node               */
/************************************************/

/* CauseE2node- ENUMERATED*/

 
typedef enum{
    
    E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN = 0  

}_e2ap_CauseE2node_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - CauseTransport               */
/************************************************/

/* CauseTransport- ENUMERATED*/

 
typedef enum{
    
    E2AP_CAUSE_TRANSPORT_UNSPECIFIED = 0,    
    E2AP_CAUSE_TRANSPORT_TRANSPORT_RESOURCE_UNAVAILABLE = 1  

}_e2ap_CauseTransport_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - CauseProtocol               */
/************************************************/

/* CauseProtocol- ENUMERATED*/

 
typedef enum{
    
    E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR = 0,    
    E2AP_CAUSE_PROTOCOL_ABSTRACT_SYNTAX_ERROR_REJECT = 1,    
    E2AP_CAUSE_PROTOCOL_ABSTRACT_SYNTAX_ERROR_IGNORE_AND_NOTIFY = 2,    
    E2AP_CAUSE_PROTOCOL_MESSAGE_NOT_COMPATIBLE_WITH_RECEIVER_STATE = 3,    
    E2AP_CAUSE_PROTOCOL_SEMANTIC_ERROR = 4,    
    E2AP_CAUSE_PROTOCOL_ABSTRACT_SYNTAX_ERROR_FALSELY_CONSTRUCTED_MESSAGE = 5,    
    E2AP_CAUSE_PROTOCOL_UNSPECIFIED = 6  

}_e2ap_CauseProtocol_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - CauseMisc               */
/************************************************/

/* CauseMisc- ENUMERATED*/

 
typedef enum{
    
    E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD = 0,    
    E2AP_CAUSE_MISC_HARDWARE_FAILURE = 1,    
    E2AP_CAUSE_MISC_OM_INTERVENTION = 2,    
    E2AP_CAUSE_MISC_UNSPECIFIED = 3  

}_e2ap_CauseMisc_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - ServiceLayerCause               */
/************************************************/

/* ServiceLayerCause- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_ServiceLayerCause_t; //OCTET STRING - P  OK
 

/************************************************/
/*       SEQUENCE - CauseServiceLayer        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_ServiceLayerCause_t serviceLayerCause; //e2ap_{ie_type} {field_name} alias = 9
 
}_e2ap_CauseServiceLayer_t;  //SEQUENCE

/************************************************/
/*        CHOICE - Cause           */
/************************************************/

 
 
 
 
 
 
 

/* main struct for choice */
typedef struct{  
    #define E2AP_CAUSE_e2ap_RIC_REQUEST 1 //NAME + field_name
    #define E2AP_CAUSE_e2ap_RIC_SERVICE 2 //NAME + field_name
    #define E2AP_CAUSE_e2ap_E2NODE 3 //NAME + field_name
    #define E2AP_CAUSE_e2ap_TRANSPORT 4 //NAME + field_name
    #define E2AP_CAUSE_e2ap_PROTOCOL 5 //NAME + field_name
    #define E2AP_CAUSE_e2ap_MISC 6 //NAME + field_name
    #define E2AP_CAUSE_e2ap_SERVICE_LAYER 7 //NAME + field_name
    #define E2AP_CAUSE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_CauseRICrequest_et ricRequest; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseRICservice_et ricService; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseE2node_et e2Node; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseTransport_et transport; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseProtocol_et protocol; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseMisc_et misc; //e2ap_{ie_type} {field_name} 
    _e2ap_CauseServiceLayer_t serviceLayer; //e2ap_{ie_type} {field_name} alias = -1 

}_e2ap_Cause_t;// CHOICE   

/************************************************/
/*        PRIMITIVE - ProcedureCode               */
/************************************************/

/* ProcedureCode- INTEGER (0..255)*/

 
typedef UInt8 _e2ap_ProcedureCode_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - TriggeringMessage               */
/************************************************/

/* TriggeringMessage- ENUMERATED*/

 
typedef enum{
    
    E2AP_TRIGGERING_MESSAGE_INITIATING_MESSAGE = 0,    
    E2AP_TRIGGERING_MESSAGE_SUCCESSFUL_OUTCOME = 1,    
    E2AP_TRIGGERING_MESSAGE_UNSUCCESSFULL_OUTCOME = 2  

}_e2ap_TriggeringMessage_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - Criticality               */
/************************************************/

/* Criticality- ENUMERATED*/

 
typedef enum{
    
    E2AP_CRITICALITY_REJECT = 0,    
    E2AP_CRITICALITY_IGNORE = 1,    
    E2AP_CRITICALITY_NOTIFY = 2  

}_e2ap_Criticality_et;// ENUMERATED - P  OK

/************************************/
/* File .h missing: e2ap_SEQUENCE.h */
/************************************/

/************************************************/
/*       SEQUENCE - CriticalityDiagnostics_IE_List        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_Criticality_et iECriticality; //e2ap_{ie_type} {field_name}   
     _e2ap_ProtocolIE_ID_t iE_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_TypeOfError_t typeOfError; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_CriticalityDiagnostics_IE_List_t;  //SEQUENCE

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

/*******************************************/
/*       IE - RICqueryFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICqueryFailure_t;
/*******************************************/
/* File .h missing: e2ap_RICqueryFailure.h */
/*******************************************/

#endif // MAIN_STRUCT_H
