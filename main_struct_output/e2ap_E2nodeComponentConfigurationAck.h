
/* primitive in scope sequence*/    
        
typedef enum{
    
    E2AP_SUCCESS = 0,    
    E2AP_FAILURE = 1
}_e2ap_E2nodeComponentConfigurationAck_updateOutcome_et;

    
        
/* end primitive in scope sequence*/
typedef struct{
    #define E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

     _e2ap_E2nodeComponentConfigurationAck_updateOutcome_et updateOutcome; //enum
    _e2ap_Cause failureCause; //e2ap_{type} {field}
}_e2ap_E2nodeComponentConfigurationAck_t;