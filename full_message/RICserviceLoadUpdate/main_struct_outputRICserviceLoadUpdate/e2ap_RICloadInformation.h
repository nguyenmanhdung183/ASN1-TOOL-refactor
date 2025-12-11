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

