/*********************************************************/
/*        SINGLE CONTAINER - RICactions_RefusedToBeRemoved_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_REFUSED_TO_BE_REMOVED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_RefusedToBeRemoved_Item_count;
    
    _e2ap_RICaction_RefusedToBeRemoved_Item_t id_RICaction_RefusedToBeRemoved_Item[MAX_NO_ID_RICACTION_REFUSED_TO_BE_REMOVED_ITEM_COUNT];

}_e2ap_RICactions_RefusedToBeRemoved_List_t;  //SINGLE CONTAINER   

