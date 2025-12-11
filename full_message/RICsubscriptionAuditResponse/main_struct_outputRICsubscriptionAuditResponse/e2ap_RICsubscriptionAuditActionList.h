/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionAuditActionList     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_AUDIT_ACTION_ITEM_COUNT 2147483648 // dungnm23 change to 1 if needed
  
    UInt32 id_RICsubscriptionAuditAction_Item_count;
    
    _e2ap_RICsubscriptionAuditAction_Item_t id_RICsubscriptionAuditAction_Item[MAX_NO_ID_RICSUBSCRIPTION_AUDIT_ACTION_ITEM_COUNT];

}_e2ap_RICsubscriptionAuditActionList_t;  //SINGLE CONTAINER   

