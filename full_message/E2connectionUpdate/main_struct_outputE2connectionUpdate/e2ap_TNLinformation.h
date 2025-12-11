/************************************************/
/*       SEQUENCE - TNLinformation        */
/************************************************/
typedef struct{
    UInt8 numbits;
    UInt8 data[20];
} _e2ap_TNLinformation_tnlAddress_t;//BIT STRING SIZE (A..B,...)
 
 typedef struct{
    UInt8 numbits;
    UInt8 data[2];
}_e2ap_TNLinformation_tnlPort_t; //BIT STRING SIZE (N)
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
    _e2ap_TNLinformation_tnlAddress_t tnlAddress; //BIT STRING (SIZE(1..160,...))
  
    _e2ap_TNLinformation_tnlPort_t tnlPort; //BIT STRING (SIZE(16))
 
}_e2ap_TNLinformation_t;  //SEQUENCE

