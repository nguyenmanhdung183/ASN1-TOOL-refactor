/*********************************************************/
/*        SINGLE CONTAINER - E2nodeComponentConfigRemovalAck_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_ACK_ITEM_COUNT 1024 // dungnm23 change to 1 if needed
  
    UInt16 id_E2nodeComponentConfigRemovalAck_Item_count;
    
    _e2ap_E2nodeComponentConfigRemovalAck_Item_t id_E2nodeComponentConfigRemovalAck_Item[MAX_NO_ID_E2NODE_COMPONENT_CONFIG_REMOVAL_ACK_ITEM_COUNT];

}_e2ap_E2nodeComponentConfigRemovalAck_List_t;  //SINGLE CONTAINER   

