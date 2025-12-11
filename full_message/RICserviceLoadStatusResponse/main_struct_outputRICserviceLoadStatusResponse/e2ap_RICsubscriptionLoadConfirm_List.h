/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionLoadConfirm_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionLoadConfirm_Item_count;
    
    _e2ap_RICsubscriptionLoadConfirm_ItemIE_t id_RICsubscriptionLoadConfirm_Item[MAX_NO_ID_RICSUBSCRIPTION_LOAD_CONFIRM_ITEM_COUNT];

}_e2ap_RICsubscriptionLoadConfirm_List_t;  //SINGLE CONTAINER   

