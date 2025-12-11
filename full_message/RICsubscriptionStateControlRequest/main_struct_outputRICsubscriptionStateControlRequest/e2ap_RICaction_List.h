/*********************************************************/
/*        SINGLE CONTAINER - RICaction_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_LIST_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICactionList_Item_count;
    
    _e2ap_RICactionList_Item_t id_RICactionList_Item[MAX_NO_ID_RICACTION_LIST_ITEM_COUNT];

}_e2ap_RICaction_List_t;  //SINGLE CONTAINER   

