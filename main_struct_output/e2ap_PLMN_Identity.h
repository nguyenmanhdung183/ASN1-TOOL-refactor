/************************************************/
/*        PRIMITIVE - PLMN_Identity               */
/************************************************/
   
typedef struct{
    #define PLMN_Identity_MAX_BYTES 3
    UInt8 PLMN_Identity[PLMN_Identity_MAX_BYTES];
}_e2ap_PLMN_Identity_t; //OCTET STRING SIZE N - P  ?
 
