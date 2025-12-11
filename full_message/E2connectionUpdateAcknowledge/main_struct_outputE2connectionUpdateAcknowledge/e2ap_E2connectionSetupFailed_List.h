/*********************************************************/
/*        SINGLE CONTAINER - E2connectionSetupFailed_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2CONNECTION_SETUP_FAILED_ITEM_COUNT 32 // dungnm23 change to 1 if needed
  
    UInt8 id_E2connectionSetupFailed_Item_count;
    
    _e2ap_E2connectionSetupFailed_Item_t id_E2connectionSetupFailed_Item[MAX_NO_ID_E2CONNECTION_SETUP_FAILED_ITEM_COUNT];

}_e2ap_E2connectionSetupFailed_List_t;  //SINGLE CONTAINER   

