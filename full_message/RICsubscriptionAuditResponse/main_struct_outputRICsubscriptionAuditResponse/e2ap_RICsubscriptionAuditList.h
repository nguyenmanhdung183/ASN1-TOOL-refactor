/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionAuditList     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_AUDIT_ITEM_COUNT 2147483648 // dungnm23 change to 1 if needed
  
    UInt32 id_RICsubscriptionAudit_Item_count;
    
    _e2ap_RICsubscriptionAudit_Item_t id_RICsubscriptionAudit_Item[MAX_NO_ID_RICSUBSCRIPTION_AUDIT_ITEM_COUNT];

}_e2ap_RICsubscriptionAuditList_t;  //SINGLE CONTAINER   

