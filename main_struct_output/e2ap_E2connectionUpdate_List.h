/*********************************************************/
/*        SINGLE CONTAINER - E2connectionUpdate_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT 32 // dungnm23 change to 1 if needed
  
    UInt8 id_E2connectionUpdate_Item_count;
    _e2ap_E2connectionUpdate_Item_t id_E2connectionUpdate_Item[MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT];

}_e2ap_E2connectionUpdate_List_t;  //SINGLE CONTAINER   

