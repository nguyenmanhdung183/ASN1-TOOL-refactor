/************************************************/
/*           CHOICE - ENB_ID               */
/************************************************/

/* primitive in scope choice*/ 
 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_macro_eNB_ID_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[4];
}_e2ap_ENB_ID_home_eNB_ID_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_short_Macro_eNB_ID_t; //BIT STRING SIZE (N)  

 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_ENB_ID_long_Macro_eNB_ID_t; //BIT STRING SIZE (N)  

 
/* main struct for choice -*/
typedef struct{
    #define E2AP_ENB_ID_e2ap_MACRO_E_NB_ID 0 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_HOME_E_NB_ID 1 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID 2 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID 3 //NAME + field_name
    #define E2AP_ENB_ID_e2ap_INVALID 0xFF

    UInt32 choice_type;

    _e2ap_ENB_ID_macro_eNB_ID_t macro_eNB_ID; //BIT STRING (SIZE (20)) name + field: field
    _e2ap_ENB_ID_home_eNB_ID_t home_eNB_ID; //BIT STRING (SIZE (28)) name + field: field
    _e2ap_ENB_ID_short_Macro_eNB_ID_t short_Macro_eNB_ID; //BIT STRING (SIZE(18)) name + field: field
    _e2ap_ENB_ID_long_Macro_eNB_ID_t long_Macro_eNB_ID; //BIT STRING (SIZE(21)) name + field: field

}_e2ap_ENB_ID_t;// CHOICE   

