/*********************************************************/
/*        SINGLE CONTAINER - RICactions_ConfirmedForModification_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_CONFIRMED_FOR_MODIFICATION_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_ConfirmedForModification_Item_count;
    
    _e2ap_RICaction_ConfirmedForModification_Item_t id_RICaction_ConfirmedForModification_Item[MAX_NO_ID_RICACTION_CONFIRMED_FOR_MODIFICATION_ITEM_COUNT];

}_e2ap_RICactions_ConfirmedForModification_List_t;  //SINGLE CONTAINER   

