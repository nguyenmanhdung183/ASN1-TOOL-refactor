/*********************************************************/
/*        SINGLE CONTAINER - E2nodeTNLassociationRemoval_List     */
/*********************************************************/

typedef struct{
#define MAX_NO_ID_E2NODE_TNLASSOCIATION_REMOVAL_ITEM_COUNT 32 // dungnm23 change to 1 if needed
  
    UInt8 id_E2nodeTNLassociationRemoval_Item_count;
    
    _e2ap_E2nodeTNLassociationRemoval_Item_t id_E2nodeTNLassociationRemoval_Item[MAX_NO_ID_E2NODE_TNLASSOCIATION_REMOVAL_ITEM_COUNT];

}_e2ap_E2nodeTNLassociationRemoval_List_t;  //SINGLE CONTAINER   

