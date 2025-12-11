/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionStateConfirm_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_STATE_CONFIRM_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionStateConfirm_Item_count;
    
    _e2ap_RANfunctionStateConfirm_Item_t id_RANfunctionStateConfirm_Item[MAX_NO_ID_RANFUNCTION_STATE_CONFIRM_ITEM_COUNT];

}_e2ap_RANfunctionStateConfirm_List_t;  //SINGLE CONTAINER   

