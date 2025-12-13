#ifndef MAIN_STRUCT_H
#define MAIN_STRUCT_H

#include "stub.h"

/************************************************/
/*        PRIMITIVE - TransactionID               */
/************************************************/

/* TransactionID- INTEGER (0..255,...)*/

typedef UInt8 _e2ap_TransactionID_t; // INTEGER (A..B,...) - P  OK
 

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
/*        PRIMITIVE - RANfunctionID               */
/************************************************/

/* RANfunctionID- INTEGER (0..4095)*/

 
typedef UInt16 _e2ap_RANfunctionID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*        PRIMITIVE - RANfunctionRevision               */
/************************************************/

/* RANfunctionRevision- INTEGER (0..4095)*/

 
typedef UInt16 _e2ap_RANfunctionRevision_t;// INTEGER (A..B) - P  OK
 

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
//#define MAX_NO_ID_RANFUNCTION_ID_ITEM_COUNT 256 // dungnm23 change to 1 if needed
#define MAX_NO_ID_RANFUNCTION_ID_ITEM_COUNT 1

  
    UInt16 id_RANfunctionID_Item_count;
    
    _e2ap_RANfunctionID_Item_t id_RANfunctionID_Item[MAX_NO_ID_RANFUNCTION_ID_ITEM_COUNT];

}_e2ap_RANfunctionsID_List_t;  //SINGLE CONTAINER   

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
    UInt8 data[]; //-> dungnm23 fix lai size
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
//#define MAX_NO_ID_RANFUNCTION_IECAUSE_ITEM_COUNT 256 // dungnm23 change to 1 if needed
#define MAX_NO_ID_RANFUNCTION_IECAUSE_ITEM_COUNT 1

  
    UInt16 id_RANfunctionIEcause_Item_count;
    
    _e2ap_RANfunctionIDcause_Item_t id_RANfunctionIEcause_Item[MAX_NO_ID_RANFUNCTION_IECAUSE_ITEM_COUNT];

}_e2ap_RANfunctionsIDcause_List_t;  //SINGLE CONTAINER   

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
/*        PRIMITIVE - GNB_CU_UP_ID               */
/************************************************/

/* GNB_CU_UP_ID- INTEGER (0..68719476735)*/

 
typedef UInt64 _e2ap_GNB_CU_UP_ID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceE1        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_GNB_CU_UP_ID_t gNB_CU_UP_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_E2nodeComponentInterfaceE1_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - GNB_DU_ID               */
/************************************************/

/* GNB_DU_ID- INTEGER (0..68719476735)*/

 
typedef UInt64 _e2ap_GNB_DU_ID_t;// INTEGER (A..B) - P  OK
 

/************************************************/
/*       SEQUENCE - E2nodeComponentInterfaceF1        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_GNB_DU_ID_t gNB_DU_ID; //e2ap_{ie_type} {field_name} alias = 6
 
}_e2ap_E2nodeComponentInterfaceF1_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - NGENB_DU_ID               */
/************************************************/

/* NGENB_DU_ID- INTEGER (0..68719476735)*/

 
typedef UInt64 _e2ap_NGENB_DU_ID_t;// INTEGER (A..B) - P  OK
 

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
//#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ACK_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ACK_ITEM_COUNT 1

  
    UInt16 id_E2nodeComponentConfigAdditionAck_Item_count;
    
    _e2ap_E2nodeComponentConfigAdditionAck_Item_t id_E2nodeComponentConfigAdditionAck_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ACK_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigAdditionAck_List_t;  //SINGLE CONTAINER   

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

/*******************************************/
/* File .h missing: e2ap_E2setupResponse.h */
/*******************************************/

#endif // MAIN_STRUCT_H
