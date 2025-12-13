/************************************************/
/*        PRIMITIVE - ServiceLayerCause               */
/************************************************/

/* ServiceLayerCause- OCTET STRING*/

typedef struct{
    UInt32 numocts;
    UInt8 data[]; //-> dungnm23 fix lai size
}_e2ap_ServiceLayerCause_t; //OCTET STRING - P  OK
 

