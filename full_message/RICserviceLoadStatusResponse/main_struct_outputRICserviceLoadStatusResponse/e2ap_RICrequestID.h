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

