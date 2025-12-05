/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionsID_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_ID_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionID_Item_count;
    _e2ap_RANfunctionID_Item_t id_RANfunctionID_Item[MAX_NO_ID_RANFUNCTION_ID_ITEM_COUNT];

}_e2ap_RANfunctionsID_List_t;  //SINGLE CONTAINER   

