/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionLoadRequest_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionLoadRequest_Item_count;
    
    _e2ap_RICsubscriptionLoadRequest_ItemIE_t id_RICsubscriptionLoadRequest_Item[MAX_NO_ID_RICSUBSCRIPTION_LOAD_REQUEST_ITEM_COUNT];

}_e2ap_RICsubscriptionLoadRequest_List_t;  //SINGLE CONTAINER   

