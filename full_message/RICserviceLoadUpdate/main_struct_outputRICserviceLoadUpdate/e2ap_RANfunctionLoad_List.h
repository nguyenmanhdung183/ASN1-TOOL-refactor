/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionLoad_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_LOAD_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionLoad_Item_count;
    
    _e2ap_RANfunctionLoad_Item_t id_RANfunctionLoad_Item[MAX_NO_ID_RANFUNCTION_LOAD_ITEM_COUNT];

}_e2ap_RANfunctionLoad_List_t;  //SINGLE CONTAINER   

