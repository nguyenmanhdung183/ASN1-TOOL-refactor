/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionLoad_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LOAD_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionLoad_Item_count;
    
    _e2ap_RICsubscriptionLoad_ItemIE_t id_RICsubscriptionLoad_Item[MAX_NO_ID_RICSUBSCRIPTION_LOAD_ITEM_COUNT];

}_e2ap_RICsubscriptionLoad_List_t;  //SINGLE CONTAINER   

