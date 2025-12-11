/*********************************************************/
/*        SINGLE CONTAINER - RANfunctions_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunction_Item_count;
    
    _e2ap_RANfunction_Item_t id_RANfunction_Item[MAX_NO_ID_RANFUNCTION_ITEM_COUNT];

}_e2ap_RANfunctions_List_t;  //SINGLE CONTAINER   

