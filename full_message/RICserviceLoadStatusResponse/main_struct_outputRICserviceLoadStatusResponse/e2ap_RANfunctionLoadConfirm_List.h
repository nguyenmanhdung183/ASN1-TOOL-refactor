/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionLoadConfirm_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_LOAD_CONFIRM_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionLoadConfirm_Item_count;
    
    _e2ap_RANfunctionLoadConfirm_Item_t id_RANfunctionLoadConfirm_Item[MAX_NO_ID_RANFUNCTION_LOAD_CONFIRM_ITEM_COUNT];

}_e2ap_RANfunctionLoadConfirm_List_t;  //SINGLE CONTAINER   

