/*********************************************************/
/*        SINGLE CONTAINER - RICaction_NotAdmitted_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_RICACTION_NOT_ADMITTED_ITEM_COUNT 16 // dungnm23 change to 1 if needed
  
    UInt8 id_RICaction_NotAdmitted_Item_count;
    
    _e2ap_RICaction_NotAdmitted_Item_t id_RICaction_NotAdmitted_Item[MAX_NO_ID_RICACTION_NOT_ADMITTED_ITEM_COUNT];

}_e2ap_RICaction_NotAdmitted_List_t;  //SINGLE CONTAINER   

