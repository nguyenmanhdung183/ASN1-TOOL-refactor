/* Auto-generated MAIN_STRUCT.h */

   
typedef UInt8 _e2ap_TransactionID_t; // INTEGER (A..B,...)
 
   
typedef struct{
    unsigned int numocts;
    const char* data;
}_e2ap_PLMN_Identity_t; //OCTET STRING
 
/**********************************/
/* File .h missing: e2ap_ric_ID.h */
/**********************************/


/* primitive in scope sequence*/    
        
    
 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_GlobalRIC_ID_ric_ID_t; //BIT STRING SIZE (N)
        
/* main struct for sequence -*/
typedef struct{

    _e2ap_GlobalRIC_ID_ric_ID_t ric_ID; //BIT STRING (SIZE (20))
}_e2ap_GlobalRIC_ID_t;   
typedef UInt16 _e2ap_RANfunctionID_t;// INTEGER (A..B)
 
   
typedef UInt16 _e2ap_RANfunctionRevision_t;// INTEGER (A..B)
 

/* primitive in scope sequence*/    
        
    
        
/* main struct for sequence -*/
typedef struct{

}_e2ap_RANfunctionID_Item_t;/***********************************************/
/* File .h missing: e2ap_RANfunctionsID_List.h */
/***********************************************/

 
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

}_e2ap_CauseRICrequest_et;// ENUMERATED
 
  typedef enum{
    
    E2AP_RAN_FUNCTION_NOT_SUPPORTED = 0,    
    E2AP_EXCESSIVE_FUNCTIONS = 1,    
    E2AP_RIC_RESOURCE_LIMIT = 2  

}_e2ap_CauseRICservice_et;// ENUMERATED
 
  typedef enum{
    
    E2AP_E2NODE_COMPONENT_UNKNOWN = 0  

}_e2ap_CauseE2node_et;// ENUMERATED
 
  typedef enum{
    
    E2AP_UNSPECIFIED = 0,    
    E2AP_TRANSPORT_RESOURCE_UNAVAILABLE = 1  

}_e2ap_CauseTransport_et;// ENUMERATED
 
  typedef enum{
    
    E2AP_TRANSFER_SYNTAX_ERROR = 0,    
    E2AP_ABSTRACT_SYNTAX_ERROR_REJECT = 1,    
    E2AP_ABSTRACT_SYNTAX_ERROR_IGNORE_AND_NOTIFY = 2,    
    E2AP_MESSAGE_NOT_COMPATIBLE_WITH_RECEIVER_STATE = 3,    
    E2AP_SEMANTIC_ERROR = 4,    
    E2AP_ABSTRACT_SYNTAX_ERROR_FALSELY_CONSTRUCTED_MESSAGE = 5,    
    E2AP_UNSPECIFIED = 6  

}_e2ap_CauseProtocol_et;// ENUMERATED
 
  typedef enum{
    
    E2AP_CONTROL_PROCESSING_OVERLOAD = 0,    
    E2AP_HARDWARE_FAILURE = 1,    
    E2AP_OM_INTERVENTION = 2,    
    E2AP_UNSPECIFIED = 3  

}_e2ap_CauseMisc_et;// ENUMERATED
     typedef struct{
        unsigned int numocts;
        const char* data;
    }_e2ap_ServiceLayerCause_t; //OCTET STRING
 

/* primitive in scope sequence*/    
        
/* main struct for sequence -*/
typedef struct{

}_e2ap_CauseServiceLayer_t;/* primitive in scope choice*/ 
 
/* main struct for choice -*/
typedef struct{
    #define E2AP_CAUSE_e2ap_RIC_REQUEST 0 //NAME + field_name
    #define E2AP_CAUSE_e2ap_RIC_SERVICE 1 //NAME + field_name
    #define E2AP_CAUSE_e2ap_E2NODE 2 //NAME + field_name
    #define E2AP_CAUSE_e2ap_TRANSPORT 3 //NAME + field_name
    #define E2AP_CAUSE_e2ap_PROTOCOL 4 //NAME + field_name
    #define E2AP_CAUSE_e2ap_MISC 5 //NAME + field_name
    #define E2AP_CAUSE_e2ap_SERVICE_LAYER 6 //NAME + field_name
    #define E2AP_CAUSE_e2ap_INVALID 0xFF

    UInt32 choice_type;

      _e2ap_CauseRICrequest_et ricRequest; //e2ap_{ie_type} {field_name}  
      _e2ap_CauseRICservice_et ricService; //e2ap_{ie_type} {field_name}  
      _e2ap_CauseE2node_et e2Node; //e2ap_{ie_type} {field_name}  
      _e2ap_CauseTransport_et transport; //e2ap_{ie_type} {field_name}  
      _e2ap_CauseProtocol_et protocol; //e2ap_{ie_type} {field_name}  
      _e2ap_CauseMisc_et misc; //e2ap_{ie_type} {field_name}  
      _e2ap_CauseServiceLayer_t serviceLayer; //e2ap_{ie_type} {field_name}

}_e2ap_Cause_t;// choice 

/* primitive in scope sequence*/    
        
    
        
/* main struct for sequence -*/
typedef struct{

     _e2ap_Cause_t cause; //e2ap_{ie_type} {field_name}
}_e2ap_RANfunctionIDcause_Item_t;/****************************************************/
/* File .h missing: e2ap_RANfunctionsIDcause_List.h */
/****************************************************/

 
  typedef enum{
    
    E2AP_NG = 0,    
    E2AP_XN = 1,    
    E2AP_E1 = 2,    
    E2AP_F1 = 3,    
    E2AP_W1 = 4,    
    E2AP_S1 = 5,    
    E2AP_X2 = 6  

}_e2ap_E2nodeComponentInterfaceType_et;// ENUMERATED
/*******************************************/
/* File .h missing: e2ap_PrintableString.h */
/*******************************************/

/***********************************/
/* File .h missing: e2ap_AMFName.h */
/***********************************/


/* primitive in scope sequence*/    
        
/* main struct for sequence -*/
typedef struct{

}_e2ap_E2nodeComponentInterfaceNG_t;/**********************************/
/* File .h missing: e2ap_gnb_ID.h */
/**********************************/

/* primitive in scope choice*/ 
 typedef struct{
    unsigned int numbits;
    unsigned char data[4];
}_e2ap_GNB_ID_Choice_gnb_ID_t; //BIT STRING SIZE (A..B) 

 
/* main struct for choice -*/
typedef struct{
    #define E2AP_GNB_ID_CHOICE_e2ap_GNB_ID 0 //NAME + field_name
    #define E2AP_GNB_ID_CHOICE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_GNB_ID_Choice_gnb_ID_t gnb_ID; //BIT STRING (SIZE(22..32)) name + field: field

}_e2ap_GNB_ID_Choice_t;// choice 

/* primitive in scope sequence*/    
        
    
        
/* main struct for sequence -*/
typedef struct{

     _e2ap_GNB_ID_Choice_t gnb_id; //e2ap_{ie_type} {field_name}
}_e2ap_GlobalgNB_ID_t;/****************************************/
/* File .h missing: e2ap_enb_ID_macro.h */
/****************************************/

/*********************************************/
/* File .h missing: e2ap_enb_ID_shortmacro.h */
/*********************************************/

/********************************************/
/* File .h missing: e2ap_enb_ID_longmacro.h */
/********************************************/

/* primitive in scope choice*/ 
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

 
/* main struct for choice -*/
typedef struct{
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO 0 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO 1 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO 2 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENB_ID_Choice_enb_ID_macro_t enb_ID_macro; //BIT STRING (SIZE(20)) name + field: field
    _e2ap_ENB_ID_Choice_enb_ID_shortmacro_t enb_ID_shortmacro; //BIT STRING (SIZE(18)) name + field: field
    _e2ap_ENB_ID_Choice_enb_ID_longmacro_t enb_ID_longmacro; //BIT STRING (SIZE(21)) name + field: field

}_e2ap_ENB_ID_Choice_t;// choice 

/* primitive in scope sequence*/    
        
    
        
/* main struct for sequence -*/
typedef struct{

     _e2ap_ENB_ID_Choice_t enb_id; //e2ap_{ie_type} {field_name}
}_e2ap_GlobalngeNB_ID_t;/* primitive in scope choice*/ 
 
/* main struct for choice -*/
typedef struct{
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB 0 //NAME + field_name
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB 1 //NAME + field_name
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

      _e2ap_GlobalgNB_ID_t gNB; //e2ap_{ie_type} {field_name}
      _e2ap_GlobalngeNB_ID_t ng_eNB; //e2ap_{ie_type} {field_name}

}_e2ap_GlobalNG_RANNode_ID_t;// choice 

/* primitive in scope sequence*/    
        
/* main struct for sequence -*/
typedef struct{

     _e2ap_GlobalNG_RANNode_ID_t global_NG_RAN_Node_ID; //e2ap_{ie_type} {field_name}
}_e2ap_E2nodeComponentInterfaceXn_t;   
typedef UInt64 _e2ap_GNB_CU_UP_ID_t;// INTEGER (A..B)
 

/* primitive in scope sequence*/    
        
/* main struct for sequence -*/
typedef struct{

}_e2ap_E2nodeComponentInterfaceE1_t;   
typedef UInt64 _e2ap_GNB_DU_ID_t;// INTEGER (A..B)
 

/* primitive in scope sequence*/    
        
/* main struct for sequence -*/
typedef struct{

}_e2ap_E2nodeComponentInterfaceF1_t;   
typedef UInt64 _e2ap_NGENB_DU_ID_t;// INTEGER (A..B)
 

/* primitive in scope sequence*/    
        
/* main struct for sequence -*/
typedef struct{

}_e2ap_E2nodeComponentInterfaceW1_t;/***********************************/
/* File .h missing: e2ap_MMEname.h */
/***********************************/


/* primitive in scope sequence*/    
        
/* main struct for sequence -*/
typedef struct{

     _e2ap_MMEname_t mme_name; //e2ap_{ie_type} {field_name}
}_e2ap_E2nodeComponentInterfaceS1_t;/****************************************/
/* File .h missing: e2ap_macro_eNB_ID.h */
/****************************************/

/***************************************/
/* File .h missing: e2ap_home_eNB_ID.h */
/***************************************/

/**********************************************/
/* File .h missing: e2ap_short_Macro_eNB_ID.h */
/**********************************************/

/*********************************************/
/* File .h missing: e2ap_long_Macro_eNB_ID.h */
/*********************************************/

/* primitive in scope choice*/ 
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

 
/* main struct for choice -*/
typedef struct{
    #define E2AP_ENB_ID_e2ap_MACRO_E_NB_ID 0 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_HOME_E_NB_ID 1 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID 2 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID 3 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENB_ID_macro_eNB_ID_t macro_eNB_ID; //BIT STRING (SIZE (20)) name + field: field
    _e2ap_ENB_ID_home_eNB_ID_t home_eNB_ID; //BIT STRING (SIZE (28)) name + field: field
    _e2ap_ENB_ID_short_Macro_eNB_ID_t short_Macro_eNB_ID; //BIT STRING (SIZE(18)) name + field: field
    _e2ap_ENB_ID_long_Macro_eNB_ID_t long_Macro_eNB_ID; //BIT STRING (SIZE(21)) name + field: field

}_e2ap_ENB_ID_t;// choice 

/* primitive in scope sequence*/    
        
    
        
/* main struct for sequence -*/
typedef struct{

     _e2ap_ENB_ID_t eNB_ID; //e2ap_{ie_type} {field_name}
}_e2ap_GlobalENB_ID_t;/**********************************/
/* File .h missing: e2ap_gNB_ID.h */
/**********************************/

/* primitive in scope choice*/ 
 typedef struct{
    unsigned int numbits;
    unsigned char data[4];
}_e2ap_ENGNB_ID_gNB_ID_t; //BIT STRING SIZE (A..B) 

 
/* main struct for choice -*/
typedef struct{
    #define E2AP_ENGNB_ID_e2ap_G_NB_ID 0 //NAME + field_name
    #define E2AP_ENGNB_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENGNB_ID_gNB_ID_t gNB_ID; //BIT STRING (SIZE (22..32)) name + field: field

}_e2ap_ENGNB_ID_t;// choice 

/* primitive in scope sequence*/    
        
    
        
/* main struct for sequence -*/
typedef struct{

     _e2ap_ENGNB_ID_t gNB_ID; //e2ap_{ie_type} {field_name}
}_e2ap_GlobalenGNB_ID_t;
/* primitive in scope sequence*/    
        
    
        
/* main struct for sequence -*/
typedef struct{
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT 0x01
    #define E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

     _e2ap_GlobalENB_ID_t global_eNB_ID; //e2ap_{ie_type} {field_name}
     _e2ap_GlobalenGNB_ID_t global_en_gNB_ID; //e2ap_{ie_type} {field_name}
}_e2ap_E2nodeComponentInterfaceX2_t;/* primitive in scope choice*/ 
 
/* main struct for choice -*/
typedef struct{
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG 0 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN 1 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1 2 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1 3 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1 4 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1 5 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2 6 //NAME + field_name
    #define E2AP_E2NODE_COMPONENT_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

      _e2ap_E2nodeComponentInterfaceNG_t e2nodeComponentInterfaceTypeNG; //e2ap_{ie_type} {field_name}
      _e2ap_E2nodeComponentInterfaceXn_t e2nodeComponentInterfaceTypeXn; //e2ap_{ie_type} {field_name}
      _e2ap_E2nodeComponentInterfaceE1_t e2nodeComponentInterfaceTypeE1; //e2ap_{ie_type} {field_name}
      _e2ap_E2nodeComponentInterfaceF1_t e2nodeComponentInterfaceTypeF1; //e2ap_{ie_type} {field_name}
      _e2ap_E2nodeComponentInterfaceW1_t e2nodeComponentInterfaceTypeW1; //e2ap_{ie_type} {field_name}
      _e2ap_E2nodeComponentInterfaceS1_t e2nodeComponentInterfaceTypeS1; //e2ap_{ie_type} {field_name}
      _e2ap_E2nodeComponentInterfaceX2_t e2nodeComponentInterfaceTypeX2; //e2ap_{ie_type} {field_name}

}_e2ap_E2nodeComponentID_t;// choice 
/*****************************************/
/* File .h missing: e2ap_updateOutcome.h */
/*****************************************/


/* primitive in scope sequence*/    
        
typedef enum{
    
    E2AP_SUCCESS = 0,    
    E2AP_FAILURE = 1
}_e2ap_E2nodeComponentConfigurationAck_updateOutcome_et;

    
        
/* main struct for sequence -*/
typedef struct{
    #define E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

     _e2ap_E2nodeComponentConfigurationAck_updateOutcome_et updateOutcome; //enum
     _e2ap_Cause_t failureCause; //e2ap_{ie_type} {field_name}
}_e2ap_E2nodeComponentConfigurationAck_t;
/* primitive in scope sequence*/    
        
    
        
    
        
/* main struct for sequence -*/
typedef struct{

     _e2ap_E2nodeComponentInterfaceType_et e2nodeComponentInterfaceType; //e2ap_{ie_type} {field_name}  
     _e2ap_E2nodeComponentID_t e2nodeComponentID; //e2ap_{ie_type} {field_name}
     _e2ap_E2nodeComponentConfigurationAck_t e2nodeComponentConfigurationAck; //e2ap_{ie_type} {field_name}
}_e2ap_E2nodeComponentConfigAdditionAck_Item_t;/*****************************************************************/
/* File .h missing: e2ap_E2nodeComponentConfigAdditionAck_List.h */
/*****************************************************************/

/*******************************************/
/* File .h missing: e2ap_E2setupResponse.h */
/*******************************************/

