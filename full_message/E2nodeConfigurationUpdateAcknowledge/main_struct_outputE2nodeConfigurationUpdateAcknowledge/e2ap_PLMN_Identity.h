/************************************************/
/*        PRIMITIVE - PLMN_Identity               */
/************************************************/

/* PLMN_Identity- OCTET STRING (SIZE(3))*/

typedef struct{
    //#define PLMN_Identity_MAX_BYTES_DNM 3
    //UInt8 PLMN_Identity[PLMN_Identity_MAX_BYTES_DNM];
    UInt32 numocts;
    UInt8 data[3];
}_e2ap_PLMN_Identity_t; //OCTET STRING SIZE N - P - OK
 

