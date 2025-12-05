/************************************************/
/*        CHOICE - GNB_ID_Choice           */
/************************************************/

 typedef struct{
    unsigned int numbits;
    unsigned char data[4];
}_e2ap_GNB_ID_Choice_gnb_ID_t; //BIT STRING SIZE (A..B) 

 
typedef struct{  
    #define E2AP_GNB_ID_CHOICE_e2ap_GNB_ID 0 //NAME + field_name
    #define E2AP_GNB_ID_CHOICE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_GNB_ID_Choice_gnb_ID_t gnb_ID; //BIT STRING (SIZE(22..32)) name + field: field

}_e2ap_GNB_ID_Choice_t;// CHOICE   

