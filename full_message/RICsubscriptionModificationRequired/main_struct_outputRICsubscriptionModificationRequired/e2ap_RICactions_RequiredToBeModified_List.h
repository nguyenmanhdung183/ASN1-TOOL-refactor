/*********************************************************/
/*        SINGLE CONTAINER - RICactions_RequiredToBeModified_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_REQUIRED_TO_BE_MODIFIED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_RequiredToBeModified_Item_count;
    
    _e2ap_RICaction_RequiredToBeModified_Item_t id_RICaction_RequiredToBeModified_Item[MAX_NO_ID_RICACTION_REQUIRED_TO_BE_MODIFIED_ITEM_COUNT];

}_e2ap_RICactions_RequiredToBeModified_List_t;  //SINGLE CONTAINER   

