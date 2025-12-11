/************************************************/
/*       SEQUENCE - RICsubscriptionAuditFlag        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_RICSUBSCRIPTION_AUDIT_FLAG_e2ap_LISTED_RECORDS_ONLY_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
     _e2ap_ListedRecordsOnly_et listedRecordsOnly; //e2ap_{ie_type} {field_name}  
}_e2ap_RICsubscriptionAuditFlag_t;  //SEQUENCE

