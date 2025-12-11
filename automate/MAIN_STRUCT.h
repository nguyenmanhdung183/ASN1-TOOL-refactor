#ifndef MAIN_STRUCT_H
#define MAIN_STRUCT_H

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
#define MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT 32 // dungnm23 change to 1 if needed
  
    UInt8 id_E2connectionUpdate_Item_count;
    
    _e2ap_E2connectionUpdate_Item_t id_E2connectionUpdate_Item[MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT];

}_e2ap_E2connectionUpdate_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - E2connectionUpdateRemove_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_TNLinformation_t tnlInformation; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2connectionUpdateRemove_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2connectionUpdateRemove_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2CONNECTION_UPDATE_REMOVE_ITEM_COUNT 32 // dungnm23 change to 1 if needed
  
    UInt8 id_E2connectionUpdateRemove_Item_count;
    
    _e2ap_E2connectionUpdateRemove_Item_t id_E2connectionUpdateRemove_Item[MAX_NO_ID_E2CONNECTION_UPDATE_REMOVE_ITEM_COUNT];

}_e2ap_E2connectionUpdateRemove_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - E2connectionUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_E2connectionUpdate_List_t id_E2connectionUpdateAdd; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionUpdateRemove_List_t id_E2connectionUpdateRemove; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionUpdate_List_t id_E2connectionUpdateModify; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2connectionUpdate_t;
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
#define MAX_NO_ID_E2CONNECTION_SETUP_FAILED_ITEM_COUNT 32 // dungnm23 change to 1 if needed
  
    UInt8 id_E2connectionSetupFailed_Item_count;
    
    _e2ap_E2connectionSetupFailed_Item_t id_E2connectionSetupFailed_Item[MAX_NO_ID_E2CONNECTION_SETUP_FAILED_ITEM_COUNT];

}_e2ap_E2connectionSetupFailed_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - E2connectionUpdateAcknowledge - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_E2connectionUpdate_List_t id_E2connectionSetup; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionSetupFailed_List_t id_E2connectionSetupFailed; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2connectionUpdateAcknowledge_t;
/************************************************/
/*        PRIMITIVE - TimeToWait               */
/************************************************/

/* TimeToWait- ENUMERATED*/

 
typedef enum{
    
    E2AP_TIME_TO_WAIT_V1S = 0,    
    E2AP_TIME_TO_WAIT_V2S = 1,    
    E2AP_TIME_TO_WAIT_V5S = 2,    
    E2AP_TIME_TO_WAIT_V10S = 3,    
    E2AP_TIME_TO_WAIT_V20S = 4,    
    E2AP_TIME_TO_WAIT_V60S = 5  

}_e2ap_TimeToWait_et;// ENUMERATED - P  OK

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
/*       IE - E2connectionUpdateFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_TimeToWait_t id_TimeToWait; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2connectionUpdateFailure_t;
/************************************************/
/*        PRIMITIVE - PLMN_Identity               */
/************************************************/

/* PLMN_Identity- OCTET STRING (SIZE(3))*/

typedef struct{
    //#define PLMN_Identity_MAX_BYTES_DNM 3
    //UInt8 PLMN_Identity[PLMN_Identity_MAX_BYTES_DNM];
    UInt32 numocts;
    UInt8 data[3];
}_e2ap_PLMN_Identity_t; //OCTET STRING SIZE N - P - OK
 

/************************************************/
/*        CHOICE - GNB_ID_Choice           */
/************************************************/

typedef struct{
    UInt8 numbits;
    UInt8 data[4];
}_e2ap_GNB_ID_Choice_gnb_ID_t; //BIT STRING SIZE (A..B)
 

/* main struct for choice */
typedef struct{  
    #define E2AP_GNB_ID_CHOICE_e2ap_GNB_ID 1 //NAME + field_name
    #define E2AP_GNB_ID_CHOICE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_GNB_ID_Choice_gnb_ID_t gnb_ID; //BIT STRING (SIZE(22..32)) name + field: field

}_e2ap_GNB_ID_Choice_t;// CHOICE   

/************************************************/
/*       SEQUENCE - GlobalgNB_ID        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_PLMN_Identity_t plmn_id; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_GNB_ID_Choice_t gnb_id; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalgNB_ID_t;  //SEQUENCE

/************************************************/
/*        CHOICE - ENGNB_ID           */
/************************************************/

typedef struct{
    UInt8 numbits;
    UInt8 data[4];
}_e2ap_ENGNB_ID_gNB_ID_t; //BIT STRING SIZE (A..B)
 

/* main struct for choice */
typedef struct{  
    #define E2AP_ENGNB_ID_e2ap_G_NB_ID 1 //NAME + field_name
    #define E2AP_ENGNB_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENGNB_ID_gNB_ID_t gNB_ID; //BIT STRING (SIZE (22..32)) name + field: field

}_e2ap_ENGNB_ID_t;// CHOICE   

/************************************************/
/*       SEQUENCE - GlobalenGNB_ID        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENGNB_ID_t gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalenGNB_ID_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - GNB_CU_UP_ID               */
/************************************************/

/* GNB_CU_UP_ID- INTEGER (0..68719476735)*/

 
typedef UInt64 _e2ap_GNB_CU_UP_ID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - GNB_DU_ID               */
/************************************************/

/* GNB_DU_ID- INTEGER (0..68719476735)*/

 
typedef UInt64 _e2ap_GNB_DU_ID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*       SEQUENCE - GlobalE2node_gNB_ID        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_GLOBAL_EN_G_NB_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_CU_UP_ID_PRESENT 0x02
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_DU_ID_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalgNB_ID_t global_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GNB_CU_UP_ID_t gNB_CU_UP_ID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_GNB_DU_ID_t gNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_GlobalE2node_gNB_ID_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - GlobalE2node_en_gNB_ID        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_GLOBAL_E2NODE_EN_G_NB_ID_e2ap_EN_G_NB_CU_UP_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_EN_G_NB_ID_e2ap_EN_G_NB_DU_ID_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GNB_CU_UP_ID_t en_gNB_CU_UP_ID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_GNB_DU_ID_t en_gNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_GlobalE2node_en_gNB_ID_t;  //SEQUENCE

/************************************************/
/*        CHOICE - ENB_ID_Choice           */
/************************************************/

typedef struct{
    UInt8 numbits;
    UInt8 data[3];
}_e2ap_ENB_ID_Choice_enb_ID_macro_t; //BIT STRING SIZE (N)
 
typedef struct{
    UInt8 numbits;
    UInt8 data[3];
}_e2ap_ENB_ID_Choice_enb_ID_shortmacro_t; //BIT STRING SIZE (N)
 
typedef struct{
    UInt8 numbits;
    UInt8 data[3];
}_e2ap_ENB_ID_Choice_enb_ID_longmacro_t; //BIT STRING SIZE (N)
 

/* main struct for choice */
typedef struct{  
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO 1 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO 2 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO 3 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENB_ID_Choice_enb_ID_macro_t enb_ID_macro; //BIT STRING (SIZE(20)) name + field: field
    _e2ap_ENB_ID_Choice_enb_ID_shortmacro_t enb_ID_shortmacro; //BIT STRING (SIZE(18)) name + field: field
    _e2ap_ENB_ID_Choice_enb_ID_longmacro_t enb_ID_longmacro; //BIT STRING (SIZE(21)) name + field: field

}_e2ap_ENB_ID_Choice_t;// CHOICE   

/************************************************/
/*       SEQUENCE - GlobalngeNB_ID        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_PLMN_Identity_t plmn_id; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENB_ID_Choice_t enb_id; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalngeNB_ID_t;  //SEQUENCE

/************************************************/
/*        CHOICE - ENB_ID           */
/************************************************/

typedef struct{
    UInt8 numbits;
    UInt8 data[3];
}_e2ap_ENB_ID_macro_eNB_ID_t; //BIT STRING SIZE (N)
 
typedef struct{
    UInt8 numbits;
    UInt8 data[4];
}_e2ap_ENB_ID_home_eNB_ID_t; //BIT STRING SIZE (N)
 
typedef struct{
    UInt8 numbits;
    UInt8 data[3];
}_e2ap_ENB_ID_short_Macro_eNB_ID_t; //BIT STRING SIZE (N)
 
typedef struct{
    UInt8 numbits;
    UInt8 data[3];
}_e2ap_ENB_ID_long_Macro_eNB_ID_t; //BIT STRING SIZE (N)
 

/* main struct for choice */
typedef struct{  
    #define E2AP_ENB_ID_e2ap_MACRO_E_NB_ID 1 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_HOME_E_NB_ID 2 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID 3 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID 4 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENB_ID_macro_eNB_ID_t macro_eNB_ID; //BIT STRING (SIZE (20)) name + field: field
    _e2ap_ENB_ID_home_eNB_ID_t home_eNB_ID; //BIT STRING (SIZE (28)) name + field: field
    _e2ap_ENB_ID_short_Macro_eNB_ID_t short_Macro_eNB_ID; //BIT STRING (SIZE(18)) name + field: field
    _e2ap_ENB_ID_long_Macro_eNB_ID_t long_Macro_eNB_ID; //BIT STRING (SIZE(21)) name + field: field

}_e2ap_ENB_ID_t;// CHOICE   

/************************************************/
/*       SEQUENCE - GlobalENB_ID        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENB_ID_t eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalENB_ID_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - NGENB_DU_ID               */
/************************************************/

/* NGENB_DU_ID- INTEGER (0..68719476735)*/

 
typedef UInt64 _e2ap_NGENB_DU_ID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*       SEQUENCE - GlobalE2node_ng_eNB_ID        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_GLOBAL_E_NB_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_NG_ENB_DU_ID_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalngeNB_ID_t global_ng_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_NGENB_DU_ID_t ngENB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_GlobalE2node_ng_eNB_ID_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - GlobalE2node_eNB_ID        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalE2node_eNB_ID_t;  //SEQUENCE

/************************************************/
/*        CHOICE - GlobalE2node_ID           */
/************************************************/

 
 
 
 

/* main struct for choice */
typedef struct{  
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_G_NB 1 //NAME + field_name
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_EN_G_NB 2 //NAME + field_name
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_NG_E_NB 3 //NAME + field_name
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_E_NB 4 //NAME + field_name
    #define E2AP_GLOBAL_E2NODE_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_GlobalE2node_gNB_ID_t gNB; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_GlobalE2node_en_gNB_ID_t en_gNB; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_GlobalE2node_ng_eNB_ID_t ng_eNB; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_GlobalE2node_eNB_ID_t eNB; //e2ap_{ie_type} {field_name} alias = -1 

}_e2ap_GlobalE2node_ID_t;// CHOICE   

/************************************************/
/*        PRIMITIVE - E2nodeComponentInterfaceType               */
/************************************************/

/* E2nodeComponentInterfaceType- ENUMERATED*/

 
typedef enum{
    
    E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG = 0,    
    E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_XN = 1,    
    E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_E1 = 2,    
    E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_F1 = 3,    
    E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_W1 = 4,    
    E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_S1 = 5,    
    E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_X2 = 6  

}_e2ap_E2nodeComponentInterfaceType_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - AMFName               */
/************************************************/

/* AMFName- PrintableString (SIZE(1..150, ...))*/

typedef const char* _e2ap_AMFName_t;//Printable STRING SIZE (A..B,...) - P  OK
 

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceNG        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_AMFName_t amf_name; //e2ap_{ie_type} {field_name} alias = 10
 
}_e2ap_E2nodeComponentInterfaceNG_t;  //SEQUENCE

/************************************************/
/*        CHOICE - GlobalNG_RANNode_ID           */
/************************************************/

 
 

/* main struct for choice */
typedef struct{  
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB 1 //NAME + field_name
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB 2 //NAME + field_name
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_GlobalgNB_ID_t gNB; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_GlobalngeNB_ID_t ng_eNB; //e2ap_{ie_type} {field_name} alias = -1 

}_e2ap_GlobalNG_RANNode_ID_t;// CHOICE   

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceXn        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_GlobalNG_RANNode_ID_t global_NG_RAN_Node_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentInterfaceXn_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceE1        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_GNB_CU_UP_ID_t gNB_CU_UP_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_E2nodeComponentInterfaceE1_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceF1        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_GNB_DU_ID_t gNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_E2nodeComponentInterfaceF1_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceW1        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_NGENB_DU_ID_t ng_eNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_E2nodeComponentInterfaceW1_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - MMEname               */
/************************************************/

/* MMEname- PrintableString (SIZE(1..150, ...))*/

typedef const char* _e2ap_MMEname_t;//Printable STRING SIZE (A..B,...) - P  OK
 

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceS1        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_MMEname_t mme_name; //e2ap_{ie_type} {field_name} alias = 10
 
}_e2ap_E2nodeComponentInterfaceS1_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceX2        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT 0x01
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentInterfaceX2_t;  //SEQUENCE

/************************************************/
/*        CHOICE - E2nodeComponentID           */
/************************************************/

 
 
 
 
 
 
 

/* main struct for choice */
typedef struct{  
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG 1 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN 2 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1 3 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1 4 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1 5 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1 6 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2 7 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_E2nodeComponentInterfaceNG_t e2nodeComponentInterfaceTypeNG; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceXn_t e2nodeComponentInterfaceTypeXn; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceE1_t e2nodeComponentInterfaceTypeE1; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceF1_t e2nodeComponentInterfaceTypeF1; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceW1_t e2nodeComponentInterfaceTypeW1; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceS1_t e2nodeComponentInterfaceTypeS1; //e2ap_{ie_type} {field_name} alias = -1 
    _e2ap_E2nodeComponentInterfaceX2_t e2nodeComponentInterfaceTypeX2; //e2ap_{ie_type} {field_name} alias = -1 

}_e2ap_E2nodeComponentID_t;// CHOICE   

/************************************************/
/*       SEQUENCE - E2nodeComponentConfiguration        */
/************************************************/
typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart_t; //OCTET STRING
 
typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart_t; //OCTET STRING
 
/* main struct for sequence */
typedef struct{  
  
    _e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart_t e2nodeComponentRequestPart; //OCTET STRING
  
    _e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart_t e2nodeComponentResponsePart; //OCTET STRING
 
}_e2ap_E2nodeComponentConfiguration_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentConfigAddition_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}   
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_E2nodeComponentConfiguration_t e2nodeComponentConfiguration; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigAddition_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigAddition_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigAddition_Item_count;
    
    _e2ap_E2nodeComponentConfigAddition_Item_t id_E2nodeComponentConfigAddition_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigAddition_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - E2nodeComponentConfigUpdate_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}   
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_E2nodeComponentConfiguration_t e2nodeComponentConfiguration; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigUpdate_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigUpdate_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_UPDATE_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigUpdate_Item_count;
    
    _e2ap_E2nodeComponentConfigUpdate_Item_t id_E2nodeComponentConfigUpdate_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_UPDATE_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigUpdate_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - E2nodeComponentConfigRemoval_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}   
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigRemoval_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigRemoval_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigRemoval_Item_count;
    
    _e2ap_E2nodeComponentConfigRemoval_Item_t id_E2nodeComponentConfigRemoval_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigRemoval_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - E2nodeTNLassociationRemoval_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_TNLinformation_t tnlInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_TNLinformation_t tnlInformationRIC; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeTNLassociationRemoval_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2nodeTNLassociationRemoval_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_TNLASSOCIATION_REMOVAL_ITEM_COUNT 32 // dungnm23 change to 1 if needed
  
    UInt8 id_E2nodeTNLassociationRemoval_Item_count;
    
    _e2ap_E2nodeTNLassociationRemoval_Item_t id_E2nodeTNLassociationRemoval_Item[MAX_NO_ID_E2NODE_TNLASSOCIATION_REMOVAL_ITEM_COUNT];

}_e2ap_E2nodeTNLassociationRemoval_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - E2nodeConfigurationUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_GlobalE2node_ID_t id_GlobalE2node_ID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigAddition_List_t id_E2nodeComponentConfigAddition; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigUpdate_List_t id_E2nodeComponentConfigUpdate; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigRemoval_List_t id_E2nodeComponentConfigRemoval; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeTNLassociationRemoval_List_t id_E2nodeTNLassociationRemoval; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2nodeConfigurationUpdate_t;
/************************************************/
/*       SEQUENCE - E2nodeComponentConfigurationAck        */
/************************************************/
typedef enum{
    
    E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_SUCCESS = 0,    
    E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_FAILURE = 1
}_e2ap_E2nodeComponentConfigurationAck_updateOutcome_et;

 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_E2nodeComponentConfigurationAck_updateOutcome_et updateOutcome; //enum ENUMERATED
  
     _e2ap_Cause_t failureCause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigurationAck_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentConfigAdditionAck_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}   
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_E2nodeComponentConfigurationAck_t e2nodeComponentConfigurationAck; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigAdditionAck_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigAdditionAck_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ACK_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigAdditionAck_Item_count;
    
    _e2ap_E2nodeComponentConfigAdditionAck_Item_t id_E2nodeComponentConfigAdditionAck_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ACK_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigAdditionAck_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - E2nodeComponentConfigUpdateAck_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}   
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_E2nodeComponentConfigurationAck_t e2nodeComponentConfigurationAck; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigUpdateAck_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigUpdateAck_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_UPDATE_ACK_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigUpdateAck_Item_count;
    
    _e2ap_E2nodeComponentConfigUpdateAck_Item_t id_E2nodeComponentConfigUpdateAck_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_UPDATE_ACK_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigUpdateAck_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - E2nodeComponentConfigRemovalAck_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}   
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_E2nodeComponentConfigurationAck_t e2nodeComponentConfigurationAck; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigRemovalAck_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigRemovalAck_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_ACK_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigRemovalAck_Item_count;
    
    _e2ap_E2nodeComponentConfigRemovalAck_Item_t id_E2nodeComponentConfigRemovalAck_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_ACK_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigRemovalAck_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - E2nodeConfigurationUpdateAcknowledge - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_E2nodeComponentConfigAdditionAck_List_t id_E2nodeComponentConfigAdditionAck; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigUpdateAck_List_t id_E2nodeComponentConfigUpdateAck; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigRemovalAck_List_t id_E2nodeComponentConfigRemovalAck; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2nodeConfigurationUpdateAcknowledge_t;
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
/*******************************************/
/*       IE - E2RemovalRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
}e2ap_E2RemovalRequest_t;
/*******************************************/
/*       IE - E2RemovalResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2RemovalResponse_t;
/*******************************************/
/*       IE - E2RemovalFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2RemovalFailure_t;
/*******************************************/
/*       IE - E2setupFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_TimeToWait_t id_TimeToWait; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_TNLinformation_t id_TNLinformation; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2setupFailure_t;
/************************************************/
/*        PRIMITIVE - RANfunctionID               */
/************************************************/

/* RANfunctionID- INTEGER (0..4095)*/

 
typedef UInt16 _e2ap_RANfunctionID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - RANfunctionDefinition               */
/************************************************/

/* RANfunctionDefinition- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RANfunctionDefinition_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RANfunctionRevision               */
/************************************************/

/* RANfunctionRevision- INTEGER (0..4095)*/

 
typedef UInt16 _e2ap_RANfunctionRevision_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - RANfunctionOID               */
/************************************************/

/* RANfunctionOID- PrintableString (SIZE(1..1000, ...))*/

typedef const char* _e2ap_RANfunctionOID_t;//Printable STRING SIZE (A..B,...) - P  OK
 

/************************************************/
/*       SEQUENCE - RANfunction_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RANfunctionDefinition_t ranFunctionDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RANfunctionRevision_t ranFunctionRevision; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RANfunctionOID_t ranFunctionOID; //e2ap_{ie_type} {field_name} alias = 10
 
}_e2ap_RANfunction_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RANfunctions_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunction_Item_count;
    
    _e2ap_RANfunction_Item_t id_RANfunction_Item[MAX_NO_ID_RANFUNCTION_ITEM_COUNT];

}_e2ap_RANfunctions_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - E2setupRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_GlobalE2node_ID_t id_GlobalE2node_ID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctions_List_t id_RANfunctionsAdded; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigAddition_List_t id_E2nodeComponentConfigAddition; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2setupRequest_t;
/************************************************/
/*       SEQUENCE - GlobalRIC_ID        */
/************************************************/
 
 typedef struct{
    UInt8 numbits;
    UInt8 data[3];
}_e2ap_GlobalRIC_ID_ric_ID_t; //BIT STRING SIZE (N)
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
    _e2ap_GlobalRIC_ID_ric_ID_t ric_ID; //BIT STRING (SIZE (20))
 
}_e2ap_GlobalRIC_ID_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RANfunctionID_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RANfunctionRevision_t ranFunctionRevision; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RANfunctionID_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionsID_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_ID_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionID_Item_count;
    
    _e2ap_RANfunctionID_Item_t id_RANfunctionID_Item[MAX_NO_ID_RANFUNCTION_ID_ITEM_COUNT];

}_e2ap_RANfunctionsID_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RANfunctionIDcause_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionIDcause_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionsIDcause_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_IECAUSE_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionIEcause_Item_count;
    
    _e2ap_RANfunctionIDcause_Item_t id_RANfunctionIEcause_Item[MAX_NO_ID_RANFUNCTION_IECAUSE_ITEM_COUNT];

}_e2ap_RANfunctionsIDcause_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - E2setupResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_GlobalRIC_ID_t id_GlobalRIC_ID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsID_List_t id_RANfunctionsAccepted; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsIDcause_List_t id_RANfunctionsRejected; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2nodeComponentConfigAdditionAck_List_t id_E2nodeComponentConfigAdditionAck; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2setupResponse_t;
/*******************************************/
/*       IE - ErrorIndication - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_ErrorIndication_t;
/*******************************************/
/*       IE - ResetRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
}e2ap_ResetRequest_t;
/*******************************************/
/*       IE - ResetResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_ResetResponse_t;
/*******************************************/
/*       IE - RICassistanceFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICassistanceFailure_t;
/************************************************/
/*        PRIMITIVE - RICassistanceSN               */
/************************************************/

/* RICassistanceSN- INTEGER (0..65535)*/

 
typedef UInt16 _e2ap_RICassistanceSN_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - RICassistanceHeader               */
/************************************************/

/* RICassistanceHeader- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICassistanceHeader_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICassistanceOutcome               */
/************************************************/

/* RICassistanceOutcome- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICassistanceOutcome_t; //OCTET STRING - P  OK
 

/*******************************************/
/*       IE - RICassistanceIndication - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICassistanceSN_t id_RICassistanceSN; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICassistanceHeader_t id_RICassistanceHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICassistanceOutcome_t id_RICassistanceOutcome; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICassistanceIndication_t;
/*******************************************/
/*       IE - RICassistanceHalt - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICassistanceHalt_t;
/************************************************/
/*        PRIMITIVE - RICassistanceMessage               */
/************************************************/

/* RICassistanceMessage- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICassistanceMessage_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICassistanceUpdate               */
/************************************************/

/* RICassistanceUpdate- ENUMERATED*/

 
typedef enum{
    
    E2AP_RICASSISTANCE_UPDATE_TRUE = 0  

}_e2ap_RICassistanceUpdate_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - RICassistanceUpdateNumber               */
/************************************************/

/* RICassistanceUpdateNumber- INTEGER (0..65535)*/

 
typedef UInt16 _e2ap_RICassistanceUpdateNumber_t;// INTEGER (A..B) - P  OK
 

/*******************************************/
/*       IE - RICassistanceRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICassistanceHeader_t id_RICassistanceHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICassistanceMessage_t id_RICassistanceMessage; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICassistanceUpdate_t id_RICassistanceUpdate; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_RICassistanceUpdateNumber_t id_RICassistanceUpdateNumber; //e2ap_{item_type} {field_name} alias = 6
}e2ap_RICassistanceRequest_t;
/*******************************************/
/*       IE - RICassistanceResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICassistanceHeader_t id_RICassistanceHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICassistanceOutcome_t id_RICassistanceOutcome; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICassistanceResponse_t;
/************************************************/
/*        PRIMITIVE - RICcallProcessID               */
/************************************************/

/* RICcallProcessID- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICcallProcessID_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICcontrolOutcome               */
/************************************************/

/* RICcontrolOutcome- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICcontrolOutcome_t; //OCTET STRING - P  OK
 

/*******************************************/
/*       IE - RICcontrolAcknowledge - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICcallProcessID_t id_RICcallProcessID; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcontrolOutcome_t id_RICcontrolOutcome; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICcontrolAcknowledge_t;
/*******************************************/
/*       IE - RICcontrolFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICcallProcessID_t id_RICcallProcessID; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICcontrolOutcome_t id_RICcontrolOutcome; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICcontrolFailure_t;
/************************************************/
/*        PRIMITIVE - RICcontrolHeader               */
/************************************************/

/* RICcontrolHeader- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICcontrolHeader_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICcontrolMessage               */
/************************************************/

/* RICcontrolMessage- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICcontrolMessage_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICcontrolAckRequest               */
/************************************************/

/* RICcontrolAckRequest- ENUMERATED*/

 
typedef enum{
    
    E2AP_RICCONTROL_ACK_REQUEST_NO_ACK = 0,    
    E2AP_RICCONTROL_ACK_REQUEST_ACK = 1  

}_e2ap_RICcontrolAckRequest_et;// ENUMERATED - P  OK

/*******************************************/
/*       IE - RICcontrolRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICcallProcessID_t id_RICcallProcessID; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcontrolHeader_t id_RICcontrolHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcontrolMessage_t id_RICcontrolMessage; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcontrolAckRequest_t id_RICcontrolAckRequest; //e2ap_{item_type} {field_name} alias = 13
}e2ap_RICcontrolRequest_t;
/************************************************/
/*        PRIMITIVE - RICactionID               */
/************************************************/

/* RICactionID- INTEGER (0..255)*/

 
typedef UInt8 _e2ap_RICactionID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - RICindicationSN               */
/************************************************/

/* RICindicationSN- INTEGER (0..65535)*/

 
typedef UInt16 _e2ap_RICindicationSN_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - RICindicationType               */
/************************************************/

/* RICindicationType- ENUMERATED*/

 
typedef enum{
    
    E2AP_RICINDICATION_TYPE_REPORT = 0,    
    E2AP_RICINDICATION_TYPE_INSERT = 1  

}_e2ap_RICindicationType_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - RICindicationHeader               */
/************************************************/

/* RICindicationHeader- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICindicationHeader_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICindicationMessage               */
/************************************************/

/* RICindicationMessage- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICindicationMessage_t; //OCTET STRING - P  OK
 

/*******************************************/
/*       IE - RICindication - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICactionID_t id_RICactionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICindicationSN_t id_RICindicationSN; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICindicationType_t id_RICindicationType; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_RICindicationHeader_t id_RICindicationHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICindicationMessage_t id_RICindicationMessage; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICcallProcessID_t id_RICcallProcessID; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICindication_t;
/************************************************/
/*        PRIMITIVE - LoadMeasurementID               */
/************************************************/

/* LoadMeasurementID- INTEGER (1..4095,...)*/

typedef UInt16 _e2ap_LoadMeasurementID_t; // INTEGER (A..B,...) - P  OK
 

/************************************************/
/*        PRIMITIVE - RegistrationRequest               */
/************************************************/

/* RegistrationRequest- ENUMERATED*/

 
typedef enum{
    
    E2AP_REGISTRATION_REQUEST_START = 0,    
    E2AP_REGISTRATION_REQUEST_STOP = 1,    
    E2AP_REGISTRATION_REQUEST_ADD = 2  

}_e2ap_RegistrationRequest_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - RICloadRequest               */
/************************************************/

/* RICloadRequest- ENUMERATED*/

 
typedef enum{
    
    E2AP_RICLOAD_REQUEST_TRUE = 0  

}_e2ap_RICloadRequest_et;// ENUMERATED - P  OK

/************************************************/
/*       SEQUENCE - RICserviceLoadRequest        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_REPORT_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_INSERT_LOAD_REQUEST_PRESENT 0x02
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_CONTROL_LOAD_REQUEST_PRESENT 0x04
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_POLICY_LOAD_REQUEST_PRESENT 0x08
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_QUERY_LOAD_REQUEST_PRESENT 0x10
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICloadRequest_et ricServiceReportLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadRequest_et ricServiceInsertLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadRequest_et ricServiceControlLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadRequest_et ricServicePolicyLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadRequest_et ricServiceQueryLoadRequest; //e2ap_{ie_type} {field_name}  
}_e2ap_RICserviceLoadRequest_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RICactionLoadRequest_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadRequest_et ricActionLoadRequest; //e2ap_{ie_type} {field_name}  
}_e2ap_RICactionLoadRequest_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactionLoadRequest_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_LOAD_REQUEST_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICactionLoadRequest_Item_count;
    
    _e2ap_RICactionLoadRequest_Item_t id_RICactionLoadRequest_Item[MAX_NO_ID_RICACTION_LOAD_REQUEST_ITEM_COUNT];

}_e2ap_RICactionLoadRequest_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICsubscriptionLoadRequest_ItemIE        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_IE_e2ap_RIC_ACTION_LOAD_REQUEST_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadRequest_et ricSubscriptionLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICactionLoadRequest_List_t ricActionLoadRequest_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionLoadRequest_ItemIE_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionLoadRequest_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionLoadRequest_Item_count;
    
    _e2ap_RICsubscriptionLoadRequest_ItemIE_t id_RICsubscriptionLoadRequest_Item[MAX_NO_ID_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_COUNT];

}_e2ap_RICsubscriptionLoadRequest_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RANfunctionLoadRequest_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RAN_FUNCTION_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RIC_SERVICE_LOAD_REQUEST_PRESENT 0x02
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_REQUEST_LIST_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadRequest_et ranFunctionLoadRequest; //e2ap_{ie_type} {field_name}   
     _e2ap_RICserviceLoadRequest_t ricServiceLoadRequest; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionLoadRequest_List_t ricSubscriptionLoadRequest_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionLoadRequest_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionLoadRequest_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_LOAD_REQUEST_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionLoadRequest_Item_count;
    
    _e2ap_RANfunctionLoadRequest_Item_t id_RANfunctionLoadRequest_Item[MAX_NO_ID_RANFUNCTION_LOAD_REQUEST_ITEM_COUNT];

}_e2ap_RANfunctionLoadRequest_List_t;  //SINGLE CONTAINER   

/************************************************/
/*        PRIMITIVE - ReportingPeriodicity               */
/************************************************/

/* ReportingPeriodicity- ENUMERATED*/

 
typedef enum{
    
    E2AP_REPORTING_PERIODICITY_MS500 = 0,    
    E2AP_REPORTING_PERIODICITY_MS1000 = 1,    
    E2AP_REPORTING_PERIODICITY_MS2000 = 2,    
    E2AP_REPORTING_PERIODICITY_MS5000 = 3,    
    E2AP_REPORTING_PERIODICITY_MS10000 = 4  

}_e2ap_ReportingPeriodicity_et;// ENUMERATED - P  OK

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
/************************************************/
/*        PRIMITIVE - RICloadConfirm               */
/************************************************/

/* RICloadConfirm- ENUMERATED*/

 
typedef enum{
    
    E2AP_RICLOAD_CONFIRM_TRUE = 0  

}_e2ap_RICloadConfirm_et;// ENUMERATED - P  OK

/************************************************/
/*       SEQUENCE - RICserviceLoadConfirm        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_REPORT_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_INSERT_LOAD_CONFIRM_PRESENT 0x02
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_CONTROL_LOAD_CONFIRM_PRESENT 0x04
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_POLICY_LOAD_CONFIRM_PRESENT 0x08
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_QUERY_LOAD_CONFIRM_PRESENT 0x10
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICloadConfirm_et ricServiceReportLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadConfirm_et ricServiceInsertLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadConfirm_et ricServiceControlLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadConfirm_et ricServicePolicyLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICloadConfirm_et ricServiceQueryLoadConfirm; //e2ap_{ie_type} {field_name}  
}_e2ap_RICserviceLoadConfirm_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RICactionLoadConfirm_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadConfirm_et ricActionLoadConfirm; //e2ap_{ie_type} {field_name}  
}_e2ap_RICactionLoadConfirm_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactionLoadConfirm_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_LOAD_CONFIRM_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICactionLoadConfirm_Item_count;
    
    _e2ap_RICactionLoadConfirm_Item_t id_RICactionLoadConfirm_Item[MAX_NO_ID_RICACTION_LOAD_CONFIRM_ITEM_COUNT];

}_e2ap_RICactionLoadConfirm_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICsubscriptionLoadConfirm_ItemIE        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_IE_e2ap_RIC_ACTION_LOAD_CONFIRM_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadConfirm_et ricSubscriptionLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICactionLoadConfirm_List_t ricActionLoadConfirm_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionLoadConfirm_ItemIE_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionLoadConfirm_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionLoadConfirm_Item_count;
    
    _e2ap_RICsubscriptionLoadConfirm_ItemIE_t id_RICsubscriptionLoadConfirm_Item[MAX_NO_ID_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_COUNT];

}_e2ap_RICsubscriptionLoadConfirm_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RANfunctionLoadConfirm_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RAN_FUNCTION_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RIC_SERVICE_LOAD_CONFIRM_PRESENT 0x02
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_CONFIRM_LIST_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadConfirm_et ranFunctionLoadConfirm; //e2ap_{ie_type} {field_name}   
     _e2ap_RICserviceLoadConfirm_t ricServiceLoadConfirm; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionLoadConfirm_List_t ricSubscriptionLoadConfirm_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionLoadConfirm_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionLoadConfirm_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_LOAD_CONFIRM_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionLoadConfirm_Item_count;
    
    _e2ap_RANfunctionLoadConfirm_Item_t id_RANfunctionLoadConfirm_Item[MAX_NO_ID_RANFUNCTION_LOAD_CONFIRM_ITEM_COUNT];

}_e2ap_RANfunctionLoadConfirm_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICserviceLoadStatusResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_LoadMeasurementID_t id_RICloadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_LoadMeasurementID_t id_E2nodeLoadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctionLoadConfirm_List_t id_RANfunctionLoadConfirm_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceLoadStatusResponse_t;
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
/************************************************/
/*       SEQUENCE - RICloadInformation        */
/************************************************/
typedef enum{
    
    E2AP_RICLOAD_INFORMATION_OVERLOAD = 0,    
    E2AP_RICLOAD_INFORMATION_NOTOVERLOAD = 1
}_e2ap_RICloadInformation_loadStatus_et;

 
typedef UInt8 _e2ap_RICloadInformation_loadEstimate;
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT 0x01
    #define E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICloadInformation_loadStatus_et loadStatus; //enum ENUMERATED
  
    _e2ap_RICloadInformation_loadEstimate_t loadEstimate; //INTEGER (0..100)
 
}_e2ap_RICloadInformation_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RICserviceLoadInformation        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_REPORT_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_INSERT_LOAD_INFORMATION_PRESENT 0x02
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_CONTROL_LOAD_INFORMATION_PRESENT 0x04
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_POLICY_LOAD_INFORMATION_PRESENT 0x08
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_QUERY_LOAD_INFORMATION_PRESENT 0x10
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICloadInformation_t ricServiceReportLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricServiceInsertLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricServiceControlLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricServicePolicyLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricServiceQueryLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICserviceLoadInformation_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RICactionLoad_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadInformation_t ricActionLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICactionLoad_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactionLoad_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_LOAD_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICactionLoad_Item_count;
    
    _e2ap_RICactionLoad_Item_t id_RICactionLoad_Item[MAX_NO_ID_RICACTION_LOAD_ITEM_COUNT];

}_e2ap_RICactionLoad_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICsubscriptionLoad_ItemIE        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_ITEM_IE_e2ap_RIC_ACTION_LOAD_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICloadInformation_t ricSubscriptionLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICactionLoad_List_t ricActionLoad_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionLoad_ItemIE_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionLoad_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LOAD_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionLoad_Item_count;
    
    _e2ap_RICsubscriptionLoad_ItemIE_t id_RICsubscriptionLoad_Item[MAX_NO_ID_RICSUBSCRIPTION_LOAD_ITEM_COUNT];

}_e2ap_RICsubscriptionLoad_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RANfunctionLoad_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RAN_FUNCTION_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RIC_SERVICE_LOAD_INFORMATION_PRESENT 0x02
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_LIST_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICloadInformation_t ranFunctionLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICserviceLoadInformation_t ricServiceLoadInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionLoad_List_t ricSubscriptionLoad_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionLoad_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionLoad_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_LOAD_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionLoad_Item_count;
    
    _e2ap_RANfunctionLoad_Item_t id_RANfunctionLoad_Item[MAX_NO_ID_RANFUNCTION_LOAD_ITEM_COUNT];

}_e2ap_RANfunctionLoad_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICserviceLoadUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_LoadMeasurementID_t id_RICloadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_LoadMeasurementID_t id_E2nodeLoadMeasurementID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctionLoad_List_t id_RANfunctionLoad_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceLoadUpdate_t;
/*******************************************/
/*       IE - RICserviceQuery - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctionsID_List_t id_RANfunctionsAccepted; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceQuery_t;
/*******************************************/
/*       IE - RICserviceUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctions_List_t id_RANfunctionsAdded; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctions_List_t id_RANfunctionsModified; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsID_List_t id_RANfunctionsDeleted; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceUpdate_t;
/*******************************************/
/*       IE - RICserviceUpdateAcknowledge - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_RANfunctionsID_List_t id_RANfunctionsAccepted; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionsIDcause_List_t id_RANfunctionsRejected; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceUpdateAcknowledge_t;
/*******************************************/
/*       IE - RICserviceUpdateFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_TimeToWait_t id_TimeToWait; //e2ap_{item_type} {field_name} alias = 13
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICserviceUpdateFailure_t;
/*******************************************/
/*       IE - RICsubscriptionFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionFailure_t;
/************************************************/
/*        PRIMITIVE - RICeventTriggerDefinition               */
/************************************************/

/* RICeventTriggerDefinition- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICeventTriggerDefinition_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICactionType               */
/************************************************/

/* RICactionType- ENUMERATED*/

 
typedef enum{
    
    E2AP_RICACTION_TYPE_REPORT = 0,    
    E2AP_RICACTION_TYPE_INSERT = 1,    
    E2AP_RICACTION_TYPE_POLICY = 2  

}_e2ap_RICactionType_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - RICactionDefinition               */
/************************************************/

/* RICactionDefinition- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICactionDefinition_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICsubsequentActionType               */
/************************************************/

/* RICsubsequentActionType- ENUMERATED*/

 
typedef enum{
    
    E2AP_RICSUBSEQUENT_ACTION_TYPE_CONTINUE = 0,    
    E2AP_RICSUBSEQUENT_ACTION_TYPE_WAIT = 1  

}_e2ap_RICsubsequentActionType_et;// ENUMERATED - P  OK

/************************************************/
/*        PRIMITIVE - RICtimeToWait               */
/************************************************/

/* RICtimeToWait- ENUMERATED*/

 
typedef enum{
    
    E2AP_RICTIME_TO_WAIT_W1MS = 0,    
    E2AP_RICTIME_TO_WAIT_W2MS = 1,    
    E2AP_RICTIME_TO_WAIT_W5MS = 2,    
    E2AP_RICTIME_TO_WAIT_W10MS = 3,    
    E2AP_RICTIME_TO_WAIT_W20MS = 4,    
    E2AP_RICTIME_TO_WAIT_W30MS = 5,    
    E2AP_RICTIME_TO_WAIT_W40MS = 6,    
    E2AP_RICTIME_TO_WAIT_W50MS = 7,    
    E2AP_RICTIME_TO_WAIT_W100MS = 8,    
    E2AP_RICTIME_TO_WAIT_W200MS = 9,    
    E2AP_RICTIME_TO_WAIT_W500MS = 10,    
    E2AP_RICTIME_TO_WAIT_W1S = 11,    
    E2AP_RICTIME_TO_WAIT_W2S = 12,    
    E2AP_RICTIME_TO_WAIT_W5S = 13,    
    E2AP_RICTIME_TO_WAIT_W10S = 14,    
    E2AP_RICTIME_TO_WAIT_W20S = 15,    
    E2AP_RICTIME_TO_WAIT_W60S = 16  

}_e2ap_RICtimeToWait_et;// ENUMERATED - P  OK

/************************************************/
/*       SEQUENCE - RICsubsequentAction        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICsubsequentActionType_et ricSubsequentActionType; //e2ap_{ie_type} {field_name}   
     _e2ap_RICtimeToWait_et ricTimeToWait; //e2ap_{ie_type} {field_name}  
}_e2ap_RICsubsequentAction_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - RICactionExecutionOrder               */
/************************************************/

/* RICactionExecutionOrder- INTEGER (0..255)*/

 
typedef UInt8 _e2ap_RICactionExecutionOrder_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*       SEQUENCE - RICaction_ToBeSetup_Item        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_ACTION_DEFINITION_PRESENT 0x01
    #define E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT 0x02
    #define E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_ACTION_EXECUTION_ORDER_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICactionType_et ricActionType; //e2ap_{ie_type} {field_name}   
     _e2ap_RICactionDefinition_t ricActionDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RICsubsequentAction_t ricSubsequentAction; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICactionExecutionOrder_t ricActionExecutionOrder; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICaction_ToBeSetup_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ToBeSetup_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_TO_BE_SETUP_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ToBeSetup_Item_count;
    
    _e2ap_RICaction_ToBeSetup_Item_t id_RICaction_ToBeSetup_Item[MAX_NO_ID_RICACTION_TO_BE_SETUP_ITEM_COUNT];

}_e2ap_RICactions_ToBeSetup_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICsubscriptionDetails        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICeventTriggerDefinition_t ricEventTriggerDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RICactions_ToBeSetup_List_t ricAction_ToBeSetup_List; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionDetails_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - RICsubscriptionTime               */
/************************************************/

/* RICsubscriptionTime- OCTET STRING (SIZE(8))*/

typedef struct{
    //#define RICsubscriptionTime_MAX_BYTES_DNM 8
    //UInt8 RICsubscriptionTime[RICsubscriptionTime_MAX_BYTES_DNM];
    UInt32 numocts;
    UInt8 data[8];
}_e2ap_RICsubscriptionTime_t; //OCTET STRING SIZE N - P - OK
 

/*******************************************/
/*       IE - RICsubscriptionRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICsubscriptionDetails_t id_RICsubscriptionDetails; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionTime_t id_RICsubscriptionStartTime; //e2ap_{item_type} {field_name} alias = 8
    _e2ap_RICsubscriptionTime_t id_RICsubscriptionEndTime; //e2ap_{item_type} {field_name} alias = 8
}e2ap_RICsubscriptionRequest_t;
/************************************************/
/*       SEQUENCE - RICaction_Admitted_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICaction_Admitted_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICaction_Admitted_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_ADMITTED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_Admitted_Item_count;
    
    _e2ap_RICaction_Admitted_Item_t id_RICaction_Admitted_Item[MAX_NO_ID_RICACTION_ADMITTED_ITEM_COUNT];

}_e2ap_RICaction_Admitted_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_NotAdmitted_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_NotAdmitted_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICaction_NotAdmitted_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_NOT_ADMITTED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_NotAdmitted_Item_count;
    
    _e2ap_RICaction_NotAdmitted_Item_t id_RICaction_NotAdmitted_Item[MAX_NO_ID_RICACTION_NOT_ADMITTED_ITEM_COUNT];

}_e2ap_RICaction_NotAdmitted_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICaction_Admitted_List_t id_RICactions_Admitted; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICaction_NotAdmitted_List_t id_RICactions_NotAdmitted; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionResponse_t;
/*******************************************/
/*       IE - RICsubscriptionAuditFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionAuditFailure_t;
/************************************************/
/*        PRIMITIVE - ListedRecordsOnly               */
/************************************************/

/* ListedRecordsOnly- ENUMERATED*/

 
typedef enum{
    
    E2AP_LISTED_RECORDS_ONLY_TRUE = 0  

}_e2ap_ListedRecordsOnly_et;// ENUMERATED - P  OK

/************************************************/
/*       SEQUENCE - RICsubscriptionAuditFlag        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_AUDIT_FLAG_e2ap_LISTED_RECORDS_ONLY_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_ListedRecordsOnly_et listedRecordsOnly; //e2ap_{ie_type} {field_name}  
}_e2ap_RICsubscriptionAuditFlag_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RICsubscriptionAudit_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICsubscriptionAudit_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionAuditList     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_AUDIT_ITEM_COUNT 2147483648 // dungnm23 change to 1 if needed
  
    UInt32 id_RICsubscriptionAudit_Item_count;
    
    _e2ap_RICsubscriptionAudit_Item_t id_RICsubscriptionAudit_Item[MAX_NO_ID_RICSUBSCRIPTION_AUDIT_ITEM_COUNT];

}_e2ap_RICsubscriptionAuditList_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionAuditRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionAuditFlag_t id_RICsubscriptionAuditFlag; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionAuditList_t id_RICsubscriptionAuditList; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionAuditRequest_t;
/************************************************/
/*       SEQUENCE - RICsubscriptionAuditAction_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICaction_Admitted_List_t ricAction_Admitted_List; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionAuditAction_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionAuditActionList     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_AUDIT_ACTION_ITEM_COUNT 2147483648 // dungnm23 change to 1 if needed
  
    UInt32 id_RICsubscriptionAuditAction_Item_count;
    
    _e2ap_RICsubscriptionAuditAction_Item_t id_RICsubscriptionAuditAction_Item[MAX_NO_ID_RICSUBSCRIPTION_AUDIT_ACTION_ITEM_COUNT];

}_e2ap_RICsubscriptionAuditActionList_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionAuditResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionAuditActionList_t id_RICsubscriptionAuditConfirmedList; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionAuditList_t id_RICsubscriptionAuditUnkownList; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICsubscriptionAuditActionList_t id_RICsubscriptionAuditMissingList; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionAuditResponse_t;
/*******************************************/
/*       IE - RICsubscriptionDeleteFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionDeleteFailure_t;
/*******************************************/
/*       IE - RICsubscriptionDeleteRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
}e2ap_RICsubscriptionDeleteRequest_t;
/*******************************************/
/*       IE - RICsubscriptionDeleteResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
}e2ap_RICsubscriptionDeleteResponse_t;
/************************************************/
/*       SEQUENCE - RICsubscription_withCause_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscription_withCause_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscription_List_withCause     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_WITH_CAUSE_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscription_withCause_Item_count;
    
    _e2ap_RICsubscription_withCause_Item_t id_RICsubscription_withCause_Item[MAX_NO_ID_RICSUBSCRIPTION_WITH_CAUSE_ITEM_COUNT];

}_e2ap_RICsubscription_List_withCause_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionDeleteRequired - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICsubscription_List_withCause_t id_RICsubscriptionToBeRemoved; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionDeleteRequired_t;
/************************************************/
/*       SEQUENCE - RICaction_ToBeRemovedForModification_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICaction_ToBeRemovedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ToBeRemovedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_TO_BE_REMOVED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ToBeRemovedForModification_Item_count;
    
    _e2ap_RICaction_ToBeRemovedForModification_Item_t id_RICaction_ToBeRemovedForModification_Item[MAX_NO_ID_RICACTION_TO_BE_REMOVED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_ToBeRemovedForModification_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_ToBeModifiedForModification_Item        */
/************************************************/
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_ACTION_DEFINITION_PRESENT 0x01
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_ACTION_EXECUTION_ORDER_PRESENT 0x02
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICactionDefinition_t ricActionDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RICactionExecutionOrder_t ricActionExecutionOrder; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICsubsequentAction_t ricSubsequentAction; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_ToBeModifiedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ToBeModifiedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ToBeModifiedForModification_Item_count;
    
    _e2ap_RICaction_ToBeModifiedForModification_Item_t id_RICaction_ToBeModifiedForModification_Item[MAX_NO_ID_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_ToBeModifiedForModification_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_ToBeAddedForModification_Item        */
/************************************************/
 
 
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICACTION_TO_BE_ADDED_FOR_MODIFICATION_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICactionType_et ricActionType; //e2ap_{ie_type} {field_name}   
     _e2ap_RICactionDefinition_t ricActionDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RICactionExecutionOrder_t ricActionExecutionOrder; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICsubsequentAction_t ricSubsequentAction; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_ToBeAddedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ToBeAddedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_TO_BE_ADDED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ToBeAddedForModification_Item_count;
    
    _e2ap_RICaction_ToBeAddedForModification_Item_t id_RICaction_ToBeAddedForModification_Item[MAX_NO_ID_RICACTION_TO_BE_ADDED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_ToBeAddedForModification_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionModificationRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICeventTriggerDefinition_t id_RICeventTriggerDefinitionToBeModified; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICactions_ToBeRemovedForModification_List_t id_RICactionsToBeRemovedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_ToBeModifiedForModification_List_t id_RICactionsToBeModifiedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_ToBeAddedForModification_List_t id_RICactionsToBeAddedForModification_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationRequest_t;
/************************************************/
/*       SEQUENCE - RICaction_RemovedForModification_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICaction_RemovedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_RemovedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_REMOVED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_RemovedForModification_Item_count;
    
    _e2ap_RICaction_RemovedForModification_Item_t id_RICaction_RemovedForModification_Item[MAX_NO_ID_RICACTION_REMOVED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_RemovedForModification_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_FailedToBeRemovedForModification_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_FailedToBeRemovedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_FailedToBeRemovedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_FAILED_TO_BE_REMOVED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_FailedToBeRemovedForModification_Item_count;
    
    _e2ap_RICaction_FailedToBeRemovedForModification_Item_t id_RICaction_FailedToBeRemovedForModification_Item[MAX_NO_ID_RICACTION_FAILED_TO_BE_REMOVED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_FailedToBeRemovedForModification_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_ModifiedForModification_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICaction_ModifiedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ModifiedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_MODIFIED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ModifiedForModification_Item_count;
    
    _e2ap_RICaction_ModifiedForModification_Item_t id_RICaction_ModifiedForModification_Item[MAX_NO_ID_RICACTION_MODIFIED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_ModifiedForModification_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_FailedToBeModifiedForModification_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_FailedToBeModifiedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_FailedToBeModifiedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_FAILED_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_FailedToBeModifiedForModification_Item_count;
    
    _e2ap_RICaction_FailedToBeModifiedForModification_Item_t id_RICaction_FailedToBeModifiedForModification_Item[MAX_NO_ID_RICACTION_FAILED_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_FailedToBeModifiedForModification_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_AddedForModification_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICaction_AddedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_AddedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_ADDED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_AddedForModification_Item_count;
    
    _e2ap_RICaction_AddedForModification_Item_t id_RICaction_AddedForModification_Item[MAX_NO_ID_RICACTION_ADDED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_AddedForModification_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_FailedToBeAddedForModification_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_FailedToBeAddedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_FailedToBeAddedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_FAILED_TO_BE_ADDED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_FailedToBeAddedForModification_Item_count;
    
    _e2ap_RICaction_FailedToBeAddedForModification_Item_t id_RICaction_FailedToBeAddedForModification_Item[MAX_NO_ID_RICACTION_FAILED_TO_BE_ADDED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_FailedToBeAddedForModification_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionModificationResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICactions_RemovedForModification_List_t id_RICactionsRemovedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_FailedToBeRemovedForModification_List_t id_RICactionsFailedToBeRemovedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_ModifiedForModification_List_t id_RICactionsModifiedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_FailedToBeModifiedForModification_List_t id_RICactionsFailedToBeModifiedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_AddedForModification_List_t id_RICactionsAddedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_FailedToBeAddedForModification_List_t id_RICactionsFailedToBeAddedForModification_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationResponse_t;
/*******************************************/
/*       IE - RICsubscriptionModificationFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationFailure_t;
/************************************************/
/*       SEQUENCE - RICaction_RequiredToBeModified_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICtimeToWait_et ricTimeToWait; //e2ap_{ie_type} {field_name}  
}_e2ap_RICaction_RequiredToBeModified_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_RequiredToBeModified_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_REQUIRED_TO_BE_MODIFIED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_RequiredToBeModified_Item_count;
    
    _e2ap_RICaction_RequiredToBeModified_Item_t id_RICaction_RequiredToBeModified_Item[MAX_NO_ID_RICACTION_REQUIRED_TO_BE_MODIFIED_ITEM_COUNT];

}_e2ap_RICactions_RequiredToBeModified_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_RequiredToBeRemoved_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_RequiredToBeRemoved_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_RequiredToBeRemoved_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_REQUIRED_TO_BE_REMOVED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_RequiredToBeRemoved_Item_count;
    
    _e2ap_RICaction_RequiredToBeRemoved_Item_t id_RICaction_RequiredToBeRemoved_Item[MAX_NO_ID_RICACTION_REQUIRED_TO_BE_REMOVED_ITEM_COUNT];

}_e2ap_RICactions_RequiredToBeRemoved_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionModificationRequired - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICactions_RequiredToBeModified_List_t id_RICactionsRequiredToBeModified_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_RequiredToBeRemoved_List_t id_RICactionsRequiredToBeRemoved_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationRequired_t;
/************************************************/
/*       SEQUENCE - RICaction_ConfirmedForModification_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICaction_ConfirmedForModification_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ConfirmedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_CONFIRMED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ConfirmedForModification_Item_count;
    
    _e2ap_RICaction_ConfirmedForModification_Item_t id_RICaction_ConfirmedForModification_Item[MAX_NO_ID_RICACTION_CONFIRMED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_ConfirmedForModification_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_RefusedToBeModified_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_RefusedToBeModified_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_RefusedToBeModified_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_REFUSED_TO_BE_MODIFIED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_RefusedToBeModified_Item_count;
    
    _e2ap_RICaction_RefusedToBeModified_Item_t id_RICaction_RefusedToBeModified_Item[MAX_NO_ID_RICACTION_REFUSED_TO_BE_MODIFIED_ITEM_COUNT];

}_e2ap_RICactions_RefusedToBeModified_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_ConfirmedForRemoval_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICaction_ConfirmedForRemoval_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ConfirmedForRemoval_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_CONFIRMED_FOR_REMOVAL_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ConfirmedForRemoval_Item_count;
    
    _e2ap_RICaction_ConfirmedForRemoval_Item_t id_RICaction_ConfirmedForRemoval_Item[MAX_NO_ID_RICACTION_CONFIRMED_FOR_REMOVAL_ITEM_COUNT];

}_e2ap_RICactions_ConfirmedForRemoval_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICaction_RefusedToBeRemoved_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICaction_RefusedToBeRemoved_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICactions_RefusedToBeRemoved_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_REFUSED_TO_BE_REMOVED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_RefusedToBeRemoved_Item_count;
    
    _e2ap_RICaction_RefusedToBeRemoved_Item_t id_RICaction_RefusedToBeRemoved_Item[MAX_NO_ID_RICACTION_REFUSED_TO_BE_REMOVED_ITEM_COUNT];

}_e2ap_RICactions_RefusedToBeRemoved_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionModificationConfirm - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICactions_ConfirmedForModification_List_t id_RICactionsConfirmedForModification_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_RefusedToBeModified_List_t id_RICactionsRefusedToBeModified_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_ConfirmedForRemoval_List_t id_RICactionsConfirmedForRemoval_List; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RICactions_RefusedToBeRemoved_List_t id_RICactionsRefusedToBeRemoved_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationConfirm_t;
/*******************************************/
/*       IE - RICsubscriptionModificationRefuse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionModificationRefuse_t;
/************************************************/
/*       SEQUENCE - RICactionList_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_RICactionID_t ricActionID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_RICactionList_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICaction_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_LIST_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICactionList_Item_count;
    
    _e2ap_RICactionList_Item_t id_RICactionList_Item[MAX_NO_ID_RICACTION_LIST_ITEM_COUNT];

}_e2ap_RICaction_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RICsubscriptionList_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LIST_ITEM_e2ap_RIC_ACTION_LIST_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICrequestID_t ricRequestID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICaction_List_t ricAction_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionList_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionToBeSuspended_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionList_Item_count;
    
    _e2ap_RICsubscriptionList_Item_t id_RICsubscriptionList_Item[MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT];

}_e2ap_RICsubscriptionToBeSuspended_List_t;  //SINGLE CONTAINER   

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionToBeResumed_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionList_Item_count;
    
    _e2ap_RICsubscriptionList_Item_t id_RICsubscriptionList_Item[MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT];

}_e2ap_RICsubscriptionToBeResumed_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RANfunctionStateControl_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_STATE_CONTROL_ITEM_e2ap_RIC_SUBSCRIPTION_TO_BE_SUSPENDED_LIST_PRESENT 0x01
    #define E2AP_RANFUNCTION_STATE_CONTROL_ITEM_e2ap_RIC_SUBSCRIPTION_TO_BE_RESUMED_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICsubscriptionToBeSuspended_List_t ricSubscriptionToBeSuspended_list; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionToBeResumed_List_t ricSubscriptionToBeResumed_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionStateControl_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionStateControl_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_STATE_CONTROL_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionStateControl_Item_count;
    
    _e2ap_RANfunctionStateControl_Item_t id_RANfunctionStateControl_Item[MAX_NO_ID_RANFUNCTION_STATE_CONTROL_ITEM_COUNT];

}_e2ap_RANfunctionStateControl_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionStateControlRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionStateControl_List_t id_RANfunctionStateControl_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionStateControlRequest_t;
/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionSuspended_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionList_Item_count;
    
    _e2ap_RICsubscriptionList_Item_t id_RICsubscriptionList_Item[MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT];

}_e2ap_RICsubscriptionSuspended_List_t;  //SINGLE CONTAINER   

/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionResumed_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionList_Item_count;
    
    _e2ap_RICsubscriptionList_Item_t id_RICsubscriptionList_Item[MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT];

}_e2ap_RICsubscriptionResumed_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - RANfunctionStateConfirm_Item        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RANFUNCTION_STATE_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_SUSPENDED_LIST_PRESENT 0x01
    #define E2AP_RANFUNCTION_STATE_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_RESUMED_LIST_PRESENT 0x02
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RANfunctionID_t ranFunctionID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_RICsubscriptionSuspended_List_t ricSubscriptionSuspended_list; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_RICsubscriptionResumed_List_t ricSubscriptionResumed_list; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RANfunctionStateConfirm_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionStateConfirm_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_STATE_CONFIRM_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionStateConfirm_Item_count;
    
    _e2ap_RANfunctionStateConfirm_Item_t id_RANfunctionStateConfirm_Item[MAX_NO_ID_RANFUNCTION_STATE_CONFIRM_ITEM_COUNT];

}_e2ap_RANfunctionStateConfirm_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - RICsubscriptionStateControlResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionStateConfirm_List_t id_RANfunctionStateConfirm_List; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionStateControlResponse_t;
/*******************************************/
/*       IE - RICsubscriptionStateControlFailure - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_Cause_t id_Cause; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_CriticalityDiagnostics_t id_CriticalityDiagnostics; //e2ap_{item_type} {field_name} alias = -1
}e2ap_RICsubscriptionStateControlFailure_t;
/************************************************/
/*        PRIMITIVE - RICqueryHeader               */
/************************************************/

/* RICqueryHeader- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICqueryHeader_t; //OCTET STRING - P  OK
 

/************************************************/
/*        PRIMITIVE - RICqueryDefinition               */
/************************************************/

/* RICqueryDefinition- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICqueryDefinition_t; //OCTET STRING - P  OK
 

/*******************************************/
/*       IE - RICqueryRequest - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICqueryHeader_t id_RICqueryHeader; //e2ap_{item_type} {field_name} alias = 9
    _e2ap_RICqueryDefinition_t id_RICqueryDefinition; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICqueryRequest_t;
/************************************************/
/*        PRIMITIVE - RICqueryOutcome               */
/************************************************/

/* RICqueryOutcome- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[];
}_e2ap_RICqueryOutcome_t; //OCTET STRING - P  OK
 

/*******************************************/
/*       IE - RICqueryResponse - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask
    _e2ap_RICrequestID_t id_RICrequestID; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_RANfunctionID_t id_RANfunctionID; //e2ap_{item_type} {field_name} alias = 6
    _e2ap_RICqueryOutcome_t id_RICqueryOutcome; //e2ap_{item_type} {field_name} alias = 9
}e2ap_RICqueryResponse_t;
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

#endif // MAIN_STRUCT_H
