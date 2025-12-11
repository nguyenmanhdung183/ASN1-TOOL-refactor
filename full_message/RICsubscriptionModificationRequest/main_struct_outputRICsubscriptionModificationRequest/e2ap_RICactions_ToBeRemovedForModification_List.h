/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ToBeRemovedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_TO_BE_REMOVED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ToBeRemovedForModification_Item_count;
    
    _e2ap_RICaction_ToBeRemovedForModification_Item_t id_RICaction_ToBeRemovedForModification_Item[MAX_NO_ID_RICACTION_TO_BE_REMOVED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_ToBeRemovedForModification_List_t;  //SINGLE CONTAINER   

