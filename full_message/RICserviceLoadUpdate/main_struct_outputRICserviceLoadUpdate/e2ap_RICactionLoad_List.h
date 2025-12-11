/*********************************************************/
/*        SINGLE CONTAINER - RICactionLoad_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_LOAD_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICactionLoad_Item_count;
    
    _e2ap_RICactionLoad_Item_t id_RICactionLoad_Item[MAX_NO_ID_RICACTION_LOAD_ITEM_COUNT];

}_e2ap_RICactionLoad_List_t;  //SINGLE CONTAINER   

