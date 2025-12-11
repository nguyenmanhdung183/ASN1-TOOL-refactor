/************************************************/
/*       SEQUENCE - CriticalityDiagnostics_IE_List        */
/************************************************/
 
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_Criticality_et iECriticality; //e2ap_{ie_type} {field_name}   
     _e2ap_ProtocolIE_ID_t iE_ID; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_TypeOfError_t typeOfError; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_CriticalityDiagnostics_IE_List_t;  //SEQUENCE

