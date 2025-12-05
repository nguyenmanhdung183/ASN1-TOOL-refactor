/************************************************/
/*       SEQUENCE - GlobalRIC_ID        */
/************************************************/
 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_GlobalRIC_ID_ric_ID_t; //BIT STRING SIZE (N)
typedef struct{   
     _e2ap_PLMN_Identity_t pLMN_Identity; //e2ap_{ie_type} {field_name} alias = 8
  
    _e2ap_GlobalRIC_ID_ric_ID_t ric_ID; //BIT STRING (SIZE (20))
 
}_e2ap_GlobalRIC_ID_t;  //SEQUENCE

