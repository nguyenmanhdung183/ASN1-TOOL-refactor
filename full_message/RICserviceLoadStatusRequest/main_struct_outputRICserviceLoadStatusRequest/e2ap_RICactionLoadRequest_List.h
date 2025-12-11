/*********************************************************/
/*        SINGLE CONTAINER - RICactionLoadRequest_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_LOAD_REQUEST_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICactionLoadRequest_Item_count;
    
    _e2ap_RICactionLoadRequest_Item_t id_RICactionLoadRequest_Item[MAX_NO_ID_RICACTION_LOAD_REQUEST_ITEM_COUNT];

}_e2ap_RICactionLoadRequest_List_t;  //SINGLE CONTAINER   

