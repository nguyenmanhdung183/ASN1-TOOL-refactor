/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionStateControl_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_STATE_CONTROL_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionStateControl_Item_count;
    
    _e2ap_RANfunctionStateControl_Item_t id_RANfunctionStateControl_Item[MAX_NO_ID_RANFUNCTION_STATE_CONTROL_ITEM_COUNT];

}_e2ap_RANfunctionStateControl_List_t;  //SINGLE CONTAINER   

