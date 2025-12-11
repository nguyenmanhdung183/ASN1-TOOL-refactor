/*********************************************************/
/*        SINGLE CONTAINER - RICactionLoadConfirm_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_LOAD_CONFIRM_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICactionLoadConfirm_Item_count;
    
    _e2ap_RICactionLoadConfirm_Item_t id_RICactionLoadConfirm_Item[MAX_NO_ID_RICACTION_LOAD_CONFIRM_ITEM_COUNT];

}_e2ap_RICactionLoadConfirm_List_t;  //SINGLE CONTAINER   

