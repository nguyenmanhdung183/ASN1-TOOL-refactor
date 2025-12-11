/*********************************************************/
/*        SINGLE CONTAINER - RANfunctionsIDcause_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RANFUNCTION_IECAUSE_ITEM_COUNT 256 // dungnm23 change to 1 if needed
  
    UInt16 id_RANfunctionIEcause_Item_count;
    
    _e2ap_RANfunctionIDcause_Item_t id_RANfunctionIEcause_Item[MAX_NO_ID_RANFUNCTION_IECAUSE_ITEM_COUNT];

}_e2ap_RANfunctionsIDcause_List_t;  //SINGLE CONTAINER   

