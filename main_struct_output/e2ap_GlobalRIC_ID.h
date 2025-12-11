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

