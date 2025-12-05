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

}_e2ap_CauseProtocol_et;// ENUMERATED - P
