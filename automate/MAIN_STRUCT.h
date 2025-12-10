#ifndef MAIN_STRUCT_H
#define MAIN_STRUCT_H

/************************************************/
/*        PRIMITIVE - TransactionID               */
/************************************************/
   
typedef UInt8 _e2ap_TransactionID_t; // INTEGER (A..B,...) - P  ?
 
/************************************************/
/*       SEQUENCE - TNLinformation        */
/************************************************/
 typedef struct{
    Uint8 numbits;
    UInt8* data;
} _e2ap_TNLinformation_tnlAddress_t;//BIT STRING SIZE (A..B,...)
 typedef struct{
    unsigned int numbits;
    unsigned char data[2];
}_e2ap_TNLinformation_tnlPort_t; //BIT STRING SIZE (N)

typedef struct{  
    #define E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
    _e2ap_TNLinformation_tnlAddress_t tnlAddress; //BIT STRING (SIZE(1..160,...))
  
    _e2ap_TNLinformation_tnlPort_t tnlPort; //BIT STRING (SIZE(16))
 
}_e2ap_TNLinformation_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - TNLusage               */
/************************************************/
 
  
typedef enum{
    
    E2AP_RIC_SERVICE = 0,    
    E2AP_SUPPORT_FUNCTION = 1,    
    E2AP_BOTH = 2  

}_e2ap_TNLusage_et;// ENUMERATED - P  ?
/************************************************/
/*       SEQUENCE - E2connectionUpdate_Item        */
/************************************************/

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
 
  
typedef enum{
    
    E2AP_RAN_FUNCTION_ID_INVALID = 0,    
    E2AP_ACTION_NOT_SUPPORTED = 1,    
    E2AP_EXCESSIVE_ACTIONS = 2,    
    E2AP_DUPLICATE_ACTION = 3,    
    E2AP_DUPLICATE_EVENT_TRIGGER = 4,    
    E2AP_FUNCTION_RESOURCE_LIMIT = 5,    
    E2AP_REQUEST_ID_UNKNOWN = 6,    
    E2AP_INCONSISTENT_ACTION_SUBSEQUENT_ACTION_SEQUENCE = 7,    
    E2AP_CONTROL_MESSAGE_INVALID = 8,    
    E2AP_RIC_CALL_PROCESS_ID_INVALID = 9,    
    E2AP_CONTROL_TIMER_EXPIRED = 10,    
    E2AP_CONTROL_FAILED_TO_EXECUTE = 11,    
    E2AP_SYSTEM_NOT_READY = 12,    
    E2AP_UNSPECIFIED = 13,    
    E2AP_RIC_SUBSCRIPTION_END_TIME_EXPIRED = 14,    
    E2AP_RIC_SUBSCRIPTION_END_TIME_INVALID = 15,    
    E2AP_DUPLICATE_RIC_REQUEST_ID = 16,    
    E2AP_EVENT_TRIGGER_NOT_SUPPORTED = 17,    
    E2AP_REQUESTED_INFORMATION_UNAVAILABLE = 18,    
    E2AP_INVALID_INFORMATION_REQUEST = 19  

}_e2ap_CauseRICrequest_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - CauseRICservice               */
/************************************************/
 
  
typedef enum{
    
    E2AP_RAN_FUNCTION_NOT_SUPPORTED = 0,    
    E2AP_EXCESSIVE_FUNCTIONS = 1,    
    E2AP_RIC_RESOURCE_LIMIT = 2  

}_e2ap_CauseRICservice_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - CauseE2node               */
/************************************************/
 
  
typedef enum{
    
    E2AP_E2NODE_COMPONENT_UNKNOWN = 0  

}_e2ap_CauseE2node_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - CauseTransport               */
/************************************************/
 
  
typedef enum{
    
    E2AP_UNSPECIFIED = 0,    
    E2AP_TRANSPORT_RESOURCE_UNAVAILABLE = 1  

}_e2ap_CauseTransport_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - CauseProtocol               */
/************************************************/
 
  
typedef enum{
    
    E2AP_TRANSFER_SYNTAX_ERROR = 0,    
    E2AP_ABSTRACT_SYNTAX_ERROR_REJECT = 1,    
    E2AP_ABSTRACT_SYNTAX_ERROR_IGNORE_AND_NOTIFY = 2,    
    E2AP_MESSAGE_NOT_COMPATIBLE_WITH_RECEIVER_STATE = 3,    
    E2AP_SEMANTIC_ERROR = 4,    
    E2AP_ABSTRACT_SYNTAX_ERROR_FALSELY_CONSTRUCTED_MESSAGE = 5,    
    E2AP_UNSPECIFIED = 6  

}_e2ap_CauseProtocol_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - CauseMisc               */
/************************************************/
 
  
typedef enum{
    
    E2AP_CONTROL_PROCESSING_OVERLOAD = 0,    
    E2AP_HARDWARE_FAILURE = 1,    
    E2AP_OM_INTERVENTION = 2,    
    E2AP_UNSPECIFIED = 3  

}_e2ap_CauseMisc_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - ServiceLayerCause               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_ServiceLayerCause_t; //OCTET STRING - P  ?
 
/************************************************/
/*       SEQUENCE - CauseServiceLayer        */
/************************************************/

typedef struct{  
  
     _e2ap_ServiceLayerCause_t serviceLayerCause; //e2ap_{ie_type} {field_name} alias = 9
 
}_e2ap_CauseServiceLayer_t;  //SEQUENCE

/************************************************/
/*        CHOICE - Cause           */
/************************************************/

 
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
 
  
typedef enum{
    
    E2AP_V1S = 0,    
    E2AP_V2S = 1,    
    E2AP_V5S = 2,    
    E2AP_V10S = 3,    
    E2AP_V20S = 4,    
    E2AP_V60S = 5  

}_e2ap_TimeToWait_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - ProcedureCode               */
/************************************************/
   
typedef UInt8 _e2ap_ProcedureCode_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*        PRIMITIVE - TriggeringMessage               */
/************************************************/
 
  
typedef enum{
    
    E2AP_INITIATING_MESSAGE = 0,    
    E2AP_SUCCESSFUL_OUTCOME = 1,    
    E2AP_UNSUCCESSFULL_OUTCOME = 2  

}_e2ap_TriggeringMessage_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - Criticality               */
/************************************************/
 
  
typedef enum{
    
    E2AP_REJECT = 0,    
    E2AP_IGNORE = 1,    
    E2AP_NOTIFY = 2  

}_e2ap_Criticality_et;// ENUMERATED - P  ?
/************************************************/
/*       SEQUENCE - RICrequestID        */
/************************************************/
typedef UInt16 _e2ap_RICrequestID_ricRequestorID;
typedef UInt16 _e2ap_RICrequestID_ricInstanceID;

typedef struct{  
  
    _e2ap_RICrequestID_ricRequestorID_t ricRequestorID; //INTEGER (0..65535)
  
    _e2ap_RICrequestID_ricInstanceID_t ricInstanceID; //INTEGER (0..65535)
 
}_e2ap_RICrequestID_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - CriticalityDiagnostics_IE_List        */
/************************************************/

typedef struct{  
  
     _e2ap_Criticality_et iECriticality; //e2ap_{ie_type} {field_name}   
     _e2ap_ProtocolIE_ID_t iE_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_TypeOfError_t typeOfError; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_CriticalityDiagnostics_IE_List_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - CriticalityDiagnostics        */
/************************************************/

typedef struct{  
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CODE_PRESENT 0x01
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_TRIGGERING_MESSAGE_PRESENT 0x01
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_PROCEDURE_CRITICALITY_PRESENT 0x01
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_RIC_REQUESTOR_ID_PRESENT 0x01
    #define E2AP_CRITICALITY_DIAGNOSTICS_e2ap_I_ES_CRITICALITY_DIAGNOSTICS_PRESENT 0x01
    
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
   
typedef struct{
    #define PLMN_Identity_MAX_BYTES 3
    UInt8 PLMN_Identity[PLMN_Identity_MAX_BYTES];
}_e2ap_PLMN_Identity_t; //OCTET STRING SIZE N - P  ?
 
/************************************************/
/*        CHOICE - GNB_ID_Choice           */
/************************************************/

 typedef struct{
    unsigned int numbits;
    unsigned char data[4];
}_e2ap_GNB_ID_Choice_gnb_ID_t; //BIT STRING SIZE (A..B) 

 
typedef struct{  
    #define E2AP_GNB_ID_CHOICE_e2ap_GNB_ID 1 //NAME + field_name
    #define E2AP_GNB_ID_CHOICE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_GNB_ID_Choice_gnb_ID_t gnb_ID; //BIT STRING (SIZE(22..32)) name + field: field

}_e2ap_GNB_ID_Choice_t;// CHOICE   

/************************************************/
/*       SEQUENCE - GlobalgNB_ID        */
/************************************************/

typedef struct{  
  
     _e2ap_PLMN_Identity_t plmn_id; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_GNB_ID_Choice_t gnb_id; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalgNB_ID_t;  //SEQUENCE

/************************************************/
/*        CHOICE - ENGNB_ID           */
/************************************************/

 typedef struct{
    unsigned int numbits;
    unsigned char data[4];
}_e2ap_ENGNB_ID_gNB_ID_t; //BIT STRING SIZE (A..B) 

 
typedef struct{  
    #define E2AP_ENGNB_ID_e2ap_G_NB_ID 1 //NAME + field_name
    #define E2AP_ENGNB_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENGNB_ID_gNB_ID_t gNB_ID; //BIT STRING (SIZE (22..32)) name + field: field

}_e2ap_ENGNB_ID_t;// CHOICE   

/************************************************/
/*       SEQUENCE - GlobalenGNB_ID        */
/************************************************/

typedef struct{  
  
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENGNB_ID_t gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalenGNB_ID_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - GNB_CU_UP_ID               */
/************************************************/
   
typedef UInt64 _e2ap_GNB_CU_UP_ID_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*        PRIMITIVE - GNB_DU_ID               */
/************************************************/
   
typedef UInt64 _e2ap_GNB_DU_ID_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*       SEQUENCE - GlobalE2node_gNB_ID        */
/************************************************/

typedef struct{  
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_GLOBAL_EN_G_NB_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_CU_UP_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_G_NB_ID_e2ap_G_NB_DU_ID_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalgNB_ID_t global_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GNB_CU_UP_ID_t gNB_CU_UP_ID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_GNB_DU_ID_t gNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_GlobalE2node_gNB_ID_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - GlobalE2node_en_gNB_ID        */
/************************************************/

typedef struct{  
    #define E2AP_GLOBAL_E2NODE_EN_G_NB_ID_e2ap_EN_G_NB_CU_UP_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_EN_G_NB_ID_e2ap_EN_G_NB_DU_ID_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GNB_CU_UP_ID_t en_gNB_CU_UP_ID; //e2ap_{ie_type} {field_name} alias = 6
  
     _e2ap_GNB_DU_ID_t en_gNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_GlobalE2node_en_gNB_ID_t;  //SEQUENCE

/************************************************/
/*        CHOICE - ENB_ID_Choice           */
/************************************************/

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_Choice_enb_ID_macro_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_Choice_enb_ID_shortmacro_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_Choice_enb_ID_longmacro_t; //BIT STRING SIZE (N)  

 
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

typedef struct{  
  
     _e2ap_PLMN_Identity_t plmn_id; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENB_ID_Choice_t enb_id; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalngeNB_ID_t;  //SEQUENCE

/************************************************/
/*        CHOICE - ENB_ID           */
/************************************************/

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_macro_eNB_ID_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[4];
}_e2ap_ENB_ID_home_eNB_ID_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_short_Macro_eNB_ID_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_long_Macro_eNB_ID_t; //BIT STRING SIZE (N)  

 
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

typedef struct{  
  
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
     _e2ap_ENB_ID_t eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalENB_ID_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - NGENB_DU_ID               */
/************************************************/
   
typedef UInt64 _e2ap_NGENB_DU_ID_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*       SEQUENCE - GlobalE2node_ng_eNB_ID        */
/************************************************/

typedef struct{  
    #define E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_GLOBAL_E_NB_ID_PRESENT 0x01
    #define E2AP_GLOBAL_E2NODE_NG_E_NB_ID_e2ap_NG_ENB_DU_ID_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalngeNB_ID_t global_ng_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_NGENB_DU_ID_t ngENB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_GlobalE2node_ng_eNB_ID_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - GlobalE2node_eNB_ID        */
/************************************************/

typedef struct{  
  
     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_GlobalE2node_eNB_ID_t;  //SEQUENCE

/************************************************/
/*        CHOICE - GlobalE2node_ID           */
/************************************************/

 
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
 
  
typedef enum{
    
    E2AP_NG = 0,    
    E2AP_XN = 1,    
    E2AP_E1 = 2,    
    E2AP_F1 = 3,    
    E2AP_W1 = 4,    
    E2AP_S1 = 5,    
    E2AP_X2 = 6  

}_e2ap_E2nodeComponentInterfaceType_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - AMFName               */
/************************************************/
  
typedef const char* _e2ap_AMFName_t;//Printable STRING SIZE (A..B,...) - P  ?
 
/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceNG        */
/************************************************/

typedef struct{  
  
     _e2ap_AMFName_t amf_name; //e2ap_{ie_type} {field_name} alias = 10
 
}_e2ap_E2nodeComponentInterfaceNG_t;  //SEQUENCE

/************************************************/
/*        CHOICE - GlobalNG_RANNode_ID           */
/************************************************/

 
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

typedef struct{  
  
     _e2ap_GlobalNG_RANNode_ID_t global_NG_RAN_Node_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentInterfaceXn_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceE1        */
/************************************************/

typedef struct{  
  
     _e2ap_GNB_CU_UP_ID_t gNB_CU_UP_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_E2nodeComponentInterfaceE1_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceF1        */
/************************************************/

typedef struct{  
  
     _e2ap_GNB_DU_ID_t gNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_E2nodeComponentInterfaceF1_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceW1        */
/************************************************/

typedef struct{  
  
     _e2ap_NGENB_DU_ID_t ng_eNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_E2nodeComponentInterfaceW1_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - MMEname               */
/************************************************/
  
typedef const char* _e2ap_MMEname_t;//Printable STRING SIZE (A..B,...) - P  ?
 
/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceS1        */
/************************************************/

typedef struct{  
  
     _e2ap_MMEname_t mme_name; //e2ap_{ie_type} {field_name} alias = 10
 
}_e2ap_E2nodeComponentInterfaceS1_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceX2        */
/************************************************/

typedef struct{  
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT 0x01
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentInterfaceX2_t;  //SEQUENCE

/************************************************/
/*        CHOICE - E2nodeComponentID           */
/************************************************/

 
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
    unsigned int numocts;
    const char* data;
}_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart_t; //OCTET STRING
typedef struct{
    unsigned int numocts;
    const char* data;
}_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart_t; //OCTET STRING

typedef struct{  
  
    _e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart_t e2nodeComponentRequestPart; //OCTET STRING
  
    _e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart_t e2nodeComponentResponsePart; //OCTET STRING
 
}_e2ap_E2nodeComponentConfiguration_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentConfigAddition_Item        */
/************************************************/

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
    
    E2AP_SUCCESS = 0,    
    E2AP_FAILURE = 1
}_e2ap_E2nodeComponentConfigurationAck_updateOutcome_et;


typedef struct{  
    #define E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_E2nodeComponentConfigurationAck_updateOutcome_et updateOutcome; //enum ENUMERATED
  
     _e2ap_Cause_t failureCause; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2nodeComponentConfigurationAck_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - E2nodeComponentConfigAdditionAck_Item        */
/************************************************/

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
   
typedef UInt16 _e2ap_RANfunctionID_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*        PRIMITIVE - RANfunctionDefinition               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RANfunctionDefinition_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RANfunctionRevision               */
/************************************************/
   
typedef UInt16 _e2ap_RANfunctionRevision_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*        PRIMITIVE - RANfunctionOID               */
/************************************************/
  
typedef const char* _e2ap_RANfunctionOID_t;//Printable STRING SIZE (A..B,...) - P  ?
 
/************************************************/
/*       SEQUENCE - RANfunction_Item        */
/************************************************/

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
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_GlobalRIC_ID_ric_ID_t; //BIT STRING SIZE (N)

typedef struct{  
  
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
    _e2ap_GlobalRIC_ID_ric_ID_t ric_ID; //BIT STRING (SIZE (20))
 
}_e2ap_GlobalRIC_ID_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RANfunctionID_Item        */
/************************************************/

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
   
typedef UInt16 _e2ap_RICassistanceSN_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*        PRIMITIVE - RICassistanceHeader               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICassistanceHeader_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICassistanceOutcome               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICassistanceOutcome_t; //OCTET STRING - P  ?
 
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
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICassistanceMessage_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICassistanceUpdate               */
/************************************************/
 
  
typedef enum{
    
    E2AP_TRUE = 0  

}_e2ap_RICassistanceUpdate_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - RICassistanceUpdateNumber               */
/************************************************/
   
typedef UInt16 _e2ap_RICassistanceUpdateNumber_t;// INTEGER (A..B) - P  ?
 
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
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICcallProcessID_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICcontrolOutcome               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICcontrolOutcome_t; //OCTET STRING - P  ?
 
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
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICcontrolHeader_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICcontrolMessage               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICcontrolMessage_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICcontrolAckRequest               */
/************************************************/
 
  
typedef enum{
    
    E2AP_NO_ACK = 0,    
    E2AP_ACK = 1  

}_e2ap_RICcontrolAckRequest_et;// ENUMERATED - P  ?
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
   
typedef UInt8 _e2ap_RICactionID_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*        PRIMITIVE - RICindicationSN               */
/************************************************/
   
typedef UInt16 _e2ap_RICindicationSN_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*        PRIMITIVE - RICindicationType               */
/************************************************/
 
  
typedef enum{
    
    E2AP_REPORT = 0,    
    E2AP_INSERT = 1  

}_e2ap_RICindicationType_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - RICindicationHeader               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICindicationHeader_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICindicationMessage               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICindicationMessage_t; //OCTET STRING - P  ?
 
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
   
typedef UInt16 _e2ap_LoadMeasurementID_t; // INTEGER (A..B,...) - P  ?
 
/************************************************/
/*        PRIMITIVE - RegistrationRequest               */
/************************************************/
 
  
typedef enum{
    
    E2AP_START = 0,    
    E2AP_STOP = 1,    
    E2AP_ADD = 2  

}_e2ap_RegistrationRequest_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - RICloadRequest               */
/************************************************/
 
  
typedef enum{
    
    E2AP_TRUE = 0  

}_e2ap_RICloadRequest_et;// ENUMERATED - P  ?
/************************************************/
/*       SEQUENCE - RICserviceLoadRequest        */
/************************************************/

typedef struct{  
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_REPORT_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_INSERT_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_CONTROL_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_POLICY_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_REQUEST_e2ap_RIC_SERVICE_QUERY_LOAD_REQUEST_PRESENT 0x01
    
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

typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_IE_e2ap_RIC_ACTION_LOAD_REQUEST_LIST_PRESENT 0x01
    
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

typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RAN_FUNCTION_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RIC_SERVICE_LOAD_REQUEST_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_REQUEST_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_REQUEST_LIST_PRESENT 0x01
    
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
 
  
typedef enum{
    
    E2AP_MS500 = 0,    
    E2AP_MS1000 = 1,    
    E2AP_MS2000 = 2,    
    E2AP_MS5000 = 3,    
    E2AP_MS10000 = 4  

}_e2ap_ReportingPeriodicity_et;// ENUMERATED - P  ?
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
 
  
typedef enum{
    
    E2AP_TRUE = 0  

}_e2ap_RICloadConfirm_et;// ENUMERATED - P  ?
/************************************************/
/*       SEQUENCE - RICserviceLoadConfirm        */
/************************************************/

typedef struct{  
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_REPORT_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_INSERT_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_CONTROL_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_POLICY_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_CONFIRM_e2ap_RIC_SERVICE_QUERY_LOAD_CONFIRM_PRESENT 0x01
    
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

typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_IE_e2ap_RIC_ACTION_LOAD_CONFIRM_LIST_PRESENT 0x01
    
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

typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RAN_FUNCTION_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RIC_SERVICE_LOAD_CONFIRM_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_CONFIRM_LIST_PRESENT 0x01
    
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
    
    E2AP_OVERLOAD = 0,    
    E2AP_NOTOVERLOAD = 1
}_e2ap_RICloadInformation_loadStatus_et;

typedef UInt8 _e2ap_RICloadInformation_loadEstimate;

typedef struct{  
    #define E2AP_RICLOAD_INFORMATION_e2ap_LOAD_STATUS_PRESENT 0x01
    #define E2AP_RICLOAD_INFORMATION_e2ap_LOAD_ESTIMATE_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_RICloadInformation_loadStatus_et loadStatus; //enum ENUMERATED
  
    _e2ap_RICloadInformation_loadEstimate_t loadEstimate; //INTEGER (0..100)
 
}_e2ap_RICloadInformation_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RICserviceLoadInformation        */
/************************************************/

typedef struct{  
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_REPORT_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_INSERT_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_CONTROL_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_POLICY_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSERVICE_LOAD_INFORMATION_e2ap_RIC_SERVICE_QUERY_LOAD_INFORMATION_PRESENT 0x01
    
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

typedef struct{  
    #define E2AP_RICSUBSCRIPTION_LOAD_ITEM_IE_e2ap_RIC_SUBSCRIPTION_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RICSUBSCRIPTION_LOAD_ITEM_IE_e2ap_RIC_ACTION_LOAD_LIST_PRESENT 0x01
    
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

typedef struct{  
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RAN_FUNCTION_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RIC_SERVICE_LOAD_INFORMATION_PRESENT 0x01
    #define E2AP_RANFUNCTION_LOAD_ITEM_e2ap_RIC_SUBSCRIPTION_LOAD_LIST_PRESENT 0x01
    
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
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICeventTriggerDefinition_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICactionType               */
/************************************************/
 
  
typedef enum{
    
    E2AP_REPORT = 0,    
    E2AP_INSERT = 1,    
    E2AP_POLICY = 2  

}_e2ap_RICactionType_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - RICactionDefinition               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICactionDefinition_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICsubsequentActionType               */
/************************************************/
 
  
typedef enum{
    
    E2AP_CONTINUE = 0,    
    E2AP_WAIT = 1  

}_e2ap_RICsubsequentActionType_et;// ENUMERATED - P  ?
/************************************************/
/*        PRIMITIVE - RICtimeToWait               */
/************************************************/
 
  
typedef enum{
    
    E2AP_W1MS = 0,    
    E2AP_W2MS = 1,    
    E2AP_W5MS = 2,    
    E2AP_W10MS = 3,    
    E2AP_W20MS = 4,    
    E2AP_W30MS = 5,    
    E2AP_W40MS = 6,    
    E2AP_W50MS = 7,    
    E2AP_W100MS = 8,    
    E2AP_W200MS = 9,    
    E2AP_W500MS = 10,    
    E2AP_W1S = 11,    
    E2AP_W2S = 12,    
    E2AP_W5S = 13,    
    E2AP_W10S = 14,    
    E2AP_W20S = 15,    
    E2AP_W60S = 16  

}_e2ap_RICtimeToWait_et;// ENUMERATED - P  ?
/************************************************/
/*       SEQUENCE - RICsubsequentAction        */
/************************************************/

typedef struct{  
  
     _e2ap_RICsubsequentActionType_et ricSubsequentActionType; //e2ap_{ie_type} {field_name}   
     _e2ap_RICtimeToWait_et ricTimeToWait; //e2ap_{ie_type} {field_name}  
}_e2ap_RICsubsequentAction_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - RICactionExecutionOrder               */
/************************************************/
   
typedef UInt8 _e2ap_RICactionExecutionOrder_t;// INTEGER (A..B) - P  ?
 
/************************************************/
/*       SEQUENCE - RICaction_ToBeSetup_Item        */
/************************************************/

typedef struct{  
    #define E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_ACTION_DEFINITION_PRESENT 0x01
    #define E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT 0x01
    #define E2AP_RICACTION_TO_BE_SETUP_ITEM_e2ap_RIC_ACTION_EXECUTION_ORDER_PRESENT 0x01
    
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

typedef struct{  
  
     _e2ap_RICeventTriggerDefinition_t ricEventTriggerDefinition; //e2ap_{ie_type} {field_name} alias = 9
  
     _e2ap_RICactions_ToBeSetup_List_t ricAction_ToBeSetup_List; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_RICsubscriptionDetails_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - RICsubscriptionTime               */
/************************************************/
   
typedef struct{
    #define RICsubscriptionTime_MAX_BYTES 8
    UInt8 RICsubscriptionTime[RICsubscriptionTime_MAX_BYTES];
}_e2ap_RICsubscriptionTime_t; //OCTET STRING SIZE N - P  ?
 
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
 
  
typedef enum{
    
    E2AP_TRUE = 0  

}_e2ap_ListedRecordsOnly_et;// ENUMERATED - P  ?
/************************************************/
/*       SEQUENCE - RICsubscriptionAuditFlag        */
/************************************************/

typedef struct{  
    #define E2AP_RICSUBSCRIPTION_AUDIT_FLAG_e2ap_LISTED_RECORDS_ONLY_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_ListedRecordsOnly_et listedRecordsOnly; //e2ap_{ie_type} {field_name}  
}_e2ap_RICsubscriptionAuditFlag_t;  //SEQUENCE

/************************************************/
/*       SEQUENCE - RICsubscriptionAudit_Item        */
/************************************************/

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

typedef struct{  
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_ACTION_DEFINITION_PRESENT 0x01
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_ACTION_EXECUTION_ORDER_PRESENT 0x01
    #define E2AP_RICACTION_TO_BE_MODIFIED_FOR_MODIFICATION_ITEM_e2ap_RIC_SUBSEQUENT_ACTION_PRESENT 0x01
    
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

typedef struct{  
    #define E2AP_RANFUNCTION_STATE_CONTROL_ITEM_e2ap_RIC_SUBSCRIPTION_TO_BE_SUSPENDED_LIST_PRESENT 0x01
    #define E2AP_RANFUNCTION_STATE_CONTROL_ITEM_e2ap_RIC_SUBSCRIPTION_TO_BE_RESUMED_LIST_PRESENT 0x01
    
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

typedef struct{  
    #define E2AP_RANFUNCTION_STATE_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_SUSPENDED_LIST_PRESENT 0x01
    #define E2AP_RANFUNCTION_STATE_CONFIRM_ITEM_e2ap_RIC_SUBSCRIPTION_RESUMED_LIST_PRESENT 0x01
    
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
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICqueryHeader_t; //OCTET STRING - P  ?
 
/************************************************/
/*        PRIMITIVE - RICqueryDefinition               */
/************************************************/
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICqueryDefinition_t; //OCTET STRING - P  ?
 
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
  
typedef struct{
    UInt8 num_string_len; /// dungnm23 fix size
    UInt8 * string_data;
}_e2ap_RICqueryOutcome_t; //OCTET STRING - P  ?
 
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
