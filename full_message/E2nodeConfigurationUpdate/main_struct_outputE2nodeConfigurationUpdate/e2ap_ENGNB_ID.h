/************************************************/
/*        CHOICE - ENGNB_ID           */
/************************************************/

typedef struct{
    UInt8 numbits;
    UInt8 data[4];
}_e2ap_ENGNB_ID_gNB_ID_t; //BIT STRING SIZE (A..B)
 

/* main struct for choice */
typedef struct{  
    #define E2AP_ENGNB_ID_e2ap_G_NB_ID 1 //NAME + field_name
    #define E2AP_ENGNB_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENGNB_ID_gNB_ID_t gNB_ID; //BIT STRING (SIZE (22..32)) name + field: field

}_e2ap_ENGNB_ID_t;// CHOICE   

