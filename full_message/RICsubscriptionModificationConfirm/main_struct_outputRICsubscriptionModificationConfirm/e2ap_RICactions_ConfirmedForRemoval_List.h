/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ConfirmedForRemoval_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_CONFIRMED_FOR_REMOVAL_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ConfirmedForRemoval_Item_count;
    
    _e2ap_RICaction_ConfirmedForRemoval_Item_t id_RICaction_ConfirmedForRemoval_Item[MAX_NO_ID_RICACTION_CONFIRMED_FOR_REMOVAL_ITEM_COUNT];

}_e2ap_RICactions_ConfirmedForRemoval_List_t;  //SINGLE CONTAINER   

