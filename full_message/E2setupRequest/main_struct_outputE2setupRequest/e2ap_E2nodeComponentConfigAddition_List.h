/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigAddition_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigAddition_Item_count;
    
    _e2ap_E2nodeComponentConfigAddition_Item_t id_E2nodeComponentConfigAddition_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigAddition_List_t;  //SINGLE CONTAINER   

