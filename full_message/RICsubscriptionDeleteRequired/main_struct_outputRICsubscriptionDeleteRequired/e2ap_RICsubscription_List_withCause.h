/*********************************************************/
/*        SINGLE CONTAINER - RICsubscription_List_withCause     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_WITH_CAUSE_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscription_withCause_Item_count;
    
    _e2ap_RICsubscription_withCause_Item_t id_RICsubscription_withCause_Item[MAX_NO_ID_RICSUBSCRIPTION_WITH_CAUSE_ITEM_COUNT];

}_e2ap_RICsubscription_List_withCause_t;  //SINGLE CONTAINER   

