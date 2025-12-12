#ifndef MAIN_STRUCT_H
#define MAIN_STRUCT_H

#include "stub.h"

/************************************************/
/*        PRIMITIVE - TransactionID               */
/************************************************/

/* TransactionID- INTEGER (0..255,...)*/

typedef UInt8 _e2ap_TransactionID_t; // INTEGER (A..B,...) - P  OK
 

/************************************************/
/*       SEQUENCE - TNLinformation        */
/************************************************/
typedef struct{
    UInt8 numbits;
    UInt8 data[20];
} _e2ap_TNLinformation_tnlAddress_t;//BIT STRING SIZE (A..B,...)
 
 typedef struct{
    UInt8 numbits;
    UInt8 data[2];
}_e2ap_TNLinformation_tnlPort_t; //BIT STRING SIZE (N)
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
    _e2ap_TNLinformation_tnlAddress_t tnlAddress; //BIT STRING (SIZE(1..160,...))
  
    _e2ap_TNLinformation_tnlPort_t tnlPort; //BIT STRING (SIZE(16))
 
}_e2ap_TNLinformation_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - TNLusage               */
/************************************************/

/* TNLusage- ENUMERATED*/

 
typedef enum{
    
    E2AP_TNLUSAGE_RIC_SERVICE = 0,    
    E2AP_TNLUSAGE_SUPPORT_FUNCTION = 1,    
    E2AP_TNLUSAGE_BOTH = 2  

}_e2ap_TNLusage_et;// ENUMERATED - P  OK

/************************************************/
/*       SEQUENCE - E2connectionUpdate_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_TNLinformation_t tnlInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_TNLusage_et tnlUsage; //e2ap_{ie_type} {field_name}  
}_e2ap_E2connectionUpdate_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2connectionUpdate_List     */
/*********************************************************/

typedef struct{
//#define MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT 32 // dungnm23 change to 1 if needed
#define MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT 1

  
    UInt8 id_E2connectionUpdate_Item_count;
    
    _e2ap_E2connectionUpdate_Item_t id_E2connectionUpdate_Item[MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT];

}_e2ap_E2connectionUpdate_List_t;  //SINGLE CONTAINER   

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
/*       SEQUENCE - E2connectionSetupFailed_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_TNLinformation_t tnlInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2connectionSetupFailed_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2connectionSetupFailed_List     */
/*********************************************************/

typedef struct{
//#define MAX_NO_ID_E2CONNECTION_SETUP_FAILED_ITEM_COUNT 32 // dungnm23 change to 1 if needed
#define MAX_NO_ID_E2CONNECTION_SETUP_FAILED_ITEM_COUNT 1

  
    UInt8 id_E2connectionSetupFailed_Item_count;
    
    _e2ap_E2connectionSetupFailed_Item_t id_E2connectionSetupFailed_Item[MAX_NO_ID_E2CONNECTION_SETUP_FAILED_ITEM_COUNT];

}_e2ap_E2connectionSetupFailed_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - E2connectionUpdateAcknowledge - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask

    #define E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_PRESENT 0x01
    #define E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_FAILED_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_E2connectionUpdate_List_t id_E2connectionSetup; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionSetupFailed_List_t id_E2connectionSetupFailed; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2connectionUpdateAcknowledge_t;
/*********************************************************/
/* File .h missing: e2ap_E2connectionUpdateAcknowledge.h */
/*********************************************************/

#endif // MAIN_STRUCT_H
