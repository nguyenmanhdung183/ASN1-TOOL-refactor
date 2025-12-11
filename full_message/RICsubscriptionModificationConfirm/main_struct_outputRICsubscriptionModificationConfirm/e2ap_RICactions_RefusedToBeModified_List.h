/*********************************************************/
/*        SINGLE CONTAINER - RICactions_RefusedToBeModified_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_REFUSED_TO_BE_MODIFIED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_RefusedToBeModified_Item_count;
    
    _e2ap_RICaction_RefusedToBeModified_Item_t id_RICaction_RefusedToBeModified_Item[MAX_NO_ID_RICACTION_REFUSED_TO_BE_MODIFIED_ITEM_COUNT];

}_e2ap_RICactions_RefusedToBeModified_List_t;  //SINGLE CONTAINER   

