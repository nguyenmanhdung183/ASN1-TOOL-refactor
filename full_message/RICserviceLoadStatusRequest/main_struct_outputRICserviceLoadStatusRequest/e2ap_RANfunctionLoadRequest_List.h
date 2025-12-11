/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionLoadRequest_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_LOAD_REQUEST_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionLoadRequest_Item_count;
    
    _e2ap_RANfunctionLoadRequest_Item_t id_RANfunctionLoadRequest_Item[MAX_NO_ID_RANFUNCTION_LOAD_REQUEST_ITEM_COUNT];

}_e2ap_RANfunctionLoadRequest_List_t;  //SINGLE CONTAINER   

