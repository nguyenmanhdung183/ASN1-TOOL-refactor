/************************************************/
/*        PRIMITIVE - RICsubscriptionTime               */
/************************************************/

/* RICsubscriptionTime- OCTET STRING (SIZE(8))*/

typedef struct{
    //#define RICsubscriptionTime_MAX_BYTES_DNM 8
    //UInt8 RICsubscriptionTime[RICsubscriptionTime_MAX_BYTES_DNM];
    UInt32 numocts;
    UInt8 data[8];
}_e2ap_RICsubscriptionTime_t; //OCTET STRING SIZE N - P - OK
 

