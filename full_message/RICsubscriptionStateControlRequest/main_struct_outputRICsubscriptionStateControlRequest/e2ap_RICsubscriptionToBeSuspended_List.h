/*********************************************************/
/*        SINGLE CONTAINER - RICsubscriptionToBeSuspended_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_RICsubscriptionList_Item_count;
    
    _e2ap_RICsubscriptionList_Item_t id_RICsubscriptionList_Item[MAX_NO_ID_RICSUBSCRIPTION_LIST_ITEM_COUNT];

}_e2ap_RICsubscriptionToBeSuspended_List_t;  //SINGLE CONTAINER   

