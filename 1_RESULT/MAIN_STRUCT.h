#ifndef MAIN_STRUCT_H
#define MAIN_STRUCT_H

#include "stub.h"

/************************************************/
/*        PRIMITIVE - TransactionID               */
/************************************************/

/* TransactionID- INTEGER (0..255,...)*/

typedef UInt8 _e2ap_TransactionID_t; // INTEGER (A..B,...) - P  OK
 

/************************************************/
/*       SEQUENCE - TNLinformation        */
/************************************************/
typedef struct{
    UInt8 numbits;
    UInt8 data[20];
} _e2ap_TNLinformation_tnlAddress_t;//BIT STRING SIZE (A..B,...)
 
 typedef struct{
    UInt8 numbits;
    UInt8 data[2];
}_e2ap_TNLinformation_tnlPort_t; //BIT STRING SIZE (N)
 
/* main struct for sequence */
typedef struct{  
    #define E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT 0x01
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/
  
    _e2ap_TNLinformation_tnlAddress_t tnlAddress; //BIT STRING (SIZE(1..160,...))
  
    _e2ap_TNLinformation_tnlPort_t tnlPort; //BIT STRING (SIZE(16))
 
}_e2ap_TNLinformation_t;  //SEQUENCE

/************************************************/
/*        PRIMITIVE - TNLusage               */
/************************************************/

/* TNLusage- ENUMERATED*/

 
typedef enum{
    
    E2AP_TNLUSAGE_RIC_SERVICE = 0,    
    E2AP_TNLUSAGE_SUPPORT_FUNCTION = 1,    
    E2AP_TNLUSAGE_BOTH = 2  

}_e2ap_TNLusage_et;// ENUMERATED - P  OK

/************************************************/
/*       SEQUENCE - E2connectionUpdate_Item        */
/************************************************/
 
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_TNLinformation_t tnlInformation; //e2ap_{ie_type} {field_name} alias = -1
  
     _e2ap_TNLusage_et tnlUsage; //e2ap_{ie_type} {field_name}  
}_e2ap_E2connectionUpdate_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2connectionUpdate_List     */
/*********************************************************/

typedef struct{
//#define MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT 32 // dungnm23 change to 1 if needed
#define MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT 1

  
    UInt8 id_E2connectionUpdate_Item_count;
    
    _e2ap_E2connectionUpdate_Item_t id_E2connectionUpdate_Item[MAX_NO_ID_E2CONNECTION_UPDATE_ITEM_COUNT];

}_e2ap_E2connectionUpdate_List_t;  //SINGLE CONTAINER   

/************************************************/
/*       SEQUENCE - E2connectionUpdateRemove_Item        */
/************************************************/
 
/* main struct for sequence */
typedef struct{  
  
     _e2ap_TNLinformation_t tnlInformation; //e2ap_{ie_type} {field_name} alias = -1
 
}_e2ap_E2connectionUpdateRemove_Item_t;  //SEQUENCE

/*********************************************************/
/*        SINGLE CONTAINER - E2connectionUpdateRemove_List     */
/*********************************************************/

typedef struct{
//#define MAX_NO_ID_E2CONNECTION_UPDATE_REMOVE_ITEM_COUNT 32 // dungnm23 change to 1 if needed
#define MAX_NO_ID_E2CONNECTION_UPDATE_REMOVE_ITEM_COUNT 1

  
    UInt8 id_E2connectionUpdateRemove_Item_count;
    
    _e2ap_E2connectionUpdateRemove_Item_t id_E2connectionUpdateRemove_Item[MAX_NO_ID_E2CONNECTION_UPDATE_REMOVE_ITEM_COUNT];

}_e2ap_E2connectionUpdateRemove_List_t;  //SINGLE CONTAINER   

/*******************************************/
/*       IE - E2connectionUpdate - (IEs)               */
/******************************************/
typedef struct{
    // thiếu bitmask

    #define E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_ADD_PRESENT 0x01
    #define E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_REMOVE_PRESENT 0x02
    #define E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_MODIFY_PRESENT 0x04
    
    rrc_bitmask_t bitmask; /* BITMASK ^*/

    _e2ap_TransactionID_t id_TransactionID; //e2ap_{item_type} {field_name} alias = 5
    _e2ap_E2connectionUpdate_List_t id_E2connectionUpdateAdd; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionUpdateRemove_List_t id_E2connectionUpdateRemove; //e2ap_{item_type} {field_name} alias = -1
    _e2ap_E2connectionUpdate_List_t id_E2connectionUpdateModify; //e2ap_{item_type} {field_name} alias = -1
}e2ap_E2connectionUpdate_t;
/**********************************************/
/* File .h missing: e2ap_E2connectionUpdate.h */
/**********************************************/

#endif // MAIN_STRUCT_H
