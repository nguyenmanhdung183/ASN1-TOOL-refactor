
/* primitive in scope sequence*/    
        
    
 typedef struct{
    unsigned int numbits;
    unsigned char data[3];
}_e2ap_GlobalRIC_ID_ric_ID_t; //BIT STRING SIZE (N)
        
/* main struct for sequence -*/
typedef struct{

    _e2ap_GlobalRIC_ID_ric_ID_t ric_ID; //BIT STRING (SIZE (20))
}_e2ap_GlobalRIC_ID_t;