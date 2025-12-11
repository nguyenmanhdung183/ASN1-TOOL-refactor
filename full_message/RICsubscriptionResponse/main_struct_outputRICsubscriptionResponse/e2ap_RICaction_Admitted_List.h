/*********************************************************/
/*        SINGLE CONTAINER - RICaction_Admitted_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_ADMITTED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_Admitted_Item_count;
    
    _e2ap_RICaction_Admitted_Item_t id_RICaction_Admitted_Item[MAX_NO_ID_RICACTION_ADMITTED_ITEM_COUNT];

}_e2ap_RICaction_Admitted_List_t;  //SINGLE CONTAINER   

