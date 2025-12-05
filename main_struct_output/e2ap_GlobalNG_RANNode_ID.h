/************************************************/
/*           CHOICE - GlobalNG_RANNode_ID               */
/************************************************/

/* primitive in scope choice*/ 
 
/* main struct for choice -*/
typedef struct{
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB 0 //NAME + field_name
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB 1 //NAME + field_name
    #define E2AP_GLOBAL_NG_RANNODE_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

      _e2ap_GlobalgNB_ID_t gNB; //e2ap_{ie_type} {field_name} alias = -1 
      _e2ap_GlobalngeNB_ID_t ng_eNB; //e2ap_{ie_type} {field_name} alias = -1 

}_e2ap_GlobalNG_RANNode_ID_t;// CHOICE   

