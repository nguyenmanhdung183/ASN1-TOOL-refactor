/************************************************/
/*        CHOICE - ENB_ID_Choice           */
/************************************************/

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_Choice_enb_ID_macro_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_Choice_enb_ID_shortmacro_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_Choice_enb_ID_longmacro_t; //BIT STRING SIZE (N)  

 
typedef struct{  
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO 0 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO 1 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO 2 //NAME + field_name
    #define E2AP_ENB_ID_CHOICE_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENB_ID_Choice_enb_ID_macro_t enb_ID_macro; //BIT STRING (SIZE(20)) name + field: field
    _e2ap_ENB_ID_Choice_enb_ID_shortmacro_t enb_ID_shortmacro; //BIT STRING (SIZE(18)) name + field: field
    _e2ap_ENB_ID_Choice_enb_ID_longmacro_t enb_ID_longmacro; //BIT STRING (SIZE(21)) name + field: field

}_e2ap_ENB_ID_Choice_t;// CHOICE   

