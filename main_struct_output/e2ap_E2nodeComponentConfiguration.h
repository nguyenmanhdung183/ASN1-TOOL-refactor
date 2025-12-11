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

