/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigAdditionAck_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ACK_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigAdditionAck_Item_count;
    
    _e2ap_E2nodeComponentConfigAdditionAck_Item_t id_E2nodeComponentConfigAdditionAck_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_ADDITION_ACK_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigAdditionAck_List_t;  //SINGLE CONTAINER   

