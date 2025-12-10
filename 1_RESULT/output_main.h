
#ifndef OUTPUT_MAIN_H
#define OUTPUT_MAIN_H
#include "stub.h"

// --- Begin of doc/header.h ---
//======================E2AP.h========================//

// --- End of doc/header.h ---

// --- Begin of e2ap_TransactionID.h ---
/*****************************************/
/*           TransactionID                */
/*****************************************/
//5 mau interger
//mau 5 integer size(a .. b..) mau la nrfreqencyband
typedef OSUINT8 e2ap_TransactionID;
EXTERN int asn1PE_e2ap_TransactionID (OSCTXT* pctxt, e2ap_TransactionID value);
EXTERN int asn1PD_e2ap_TransactionID (OSCTXT* pctxt, e2ap_TransactionID* pvalue);
EXTERN int asn1Print_e2ap_TransactionID (const char* name, const e2ap_TransactionID* pvalue);
EXTERN int asn1PrtToStr_e2ap_TransactionID (const char* name, e2ap_TransactionID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_TransactionID (OSCTXT* pctxt, const char* name, const e2ap_TransactionID* pvalue);
EXTERN int asn1Free_e2ap_TransactionID (OSCTXT* pctxt, e2ap_TransactionID* pvalue);
EXTERN int asn1Init_e2ap_TransactionID (e2ap_TransactionID* pvalue);

// --- End of e2ap_TransactionID.h ---

// --- Begin of e2ap_TNLinformation.h ---
/*****************************************/
/*           TNLinformation                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2
    // Nội dung của file .h cho primitive BIT STRING (SIZE(1..160,...))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 2
//mau Transportlayeraddress xn bitstring (a..b,..)
typedef ASN1DynBitStr e2ap_TNLinformation_tnlAddress;

EXTERN int asn1PE_e2ap_TNLinformation_tnlAddress(OSCTXT* pctxt, e2ap_TNLinformation_tnlAddress value);
EXTERN int asn1PD_e2ap_TNLinformation_tnlAddress(OSCTXT* pctxt, e2ap_TNLinformation_tnlAddress* pvalue);
EXTERN int asn1PrtToStr_e2ap_TNLinformation_tnlAddress (const char* name, e2ap_TNLinformation_tnlAddress *pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_TNLinformation_tnlAddress (OSCTXT* pctxt, const char* name, const e2ap_TNLinformation_tnlAddress* pvalue);
EXTERN int asn1Copy_e2ap_TNLinformation_tnlAddress(OSCTXT* pctxt,const e2ap_TNLinformation_tnlAddress* pSrcValue,  e2ap_TNLinformation_tnlAddress* pDstValue);
EXTERN int asn1Init_e2ap_TNLinformation_tnlAddress(e2ap_TNLinformation_tnlAddress* pvalue);
EXTERN void asn1Free_e2ap_TNLinformation_tnlAddress(OSCTXT* pctxt, e2ap_TNLinformation_tnlAddress* pvalue);

    // Nội dung của file .h cho primitive BIT STRING (SIZE(16))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_TNLinformation_tnlPort {
    OSUINT8 numbits;
    OSOCTET data[2];
} e2ap_TNLinformation_tnlPort;

EXTERN int asn1PE_e2ap_TNLinformation_tnlPort(OSCTXT* pctxt, e2ap_TNLinformation_tnlPort* pvalue);
EXTERN int asn1PD_e2ap_TNLinformation_tnlPort(OSCTXT* pctxt, e2ap_TNLinformation_tnlPort* pvalue);
EXTERN int asn1PrtToStr_e2ap_TNLinformation_tnlPort (const char* name, e2ap_TNLinformation_tnlPort* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_TNLinformation_tnlPort (OSCTXT* pctxt, const char* name, const e2ap_TNLinformation_tnlPort* pvalue);
EXTERN int asn1Copy_e2ap_TNLinformation_tnlPort(OSCTXT* pctxt,const e2ap_TNLinformation_tnlPort* pSrcValue,  e2ap_TNLinformation_tnlPort* pDstValue);
EXTERN int asn1Init_e2ap_TNLinformation_tnlPort(e2ap_TNLinformation_tnlPort* pvalue);
EXTERN void asn1Free_e2ap_TNLinformation_tnlPort(OSCTXT* pctxt, e2ap_TNLinformation_tnlPort* pvalue);


// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_TNLinformation {
      //primitive
   e2ap_TNLinformation_tnlAddress tnlAddress;
      //primitive
   e2ap_TNLinformation_tnlPort tnlPort;
   OSBOOL m_tnlPortPresent;
   OSRTDList extElem1;  /* Extension elements */
} e2ap_TNLinformation;

EXTERN int asn1PE_e2ap_TNLinformation (OSCTXT* pctxt, e2ap_TNLinformation* pvalue);
EXTERN int asn1PD_e2ap_TNLinformation (OSCTXT* pctxt, e2ap_TNLinformation* pvalue);
EXTERN int asn1Init_e2ap_TNLinformation (e2ap_TNLinformation* pvalue);
EXTERN void asn1Free_e2ap_TNLinformation (OSCTXT* pctxt, e2ap_TNLinformation* pvalue);
EXTERN void asn1Print_e2ap_TNLinformation (const char* name, const e2ap_TNLinformation* pvalue);
EXTERN int asn1PrtToStr_e2ap_TNLinformation (const char* name, e2ap_TNLinformation* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_TNLinformation (OSCTXT* pctxt, const char* name, const e2ap_TNLinformation* pvalue);
EXTERN int asn1Copy_e2ap_TNLinformation (OSCTXT* pctxt, const e2ap_TNLinformation* pSrcValue, e2ap_TNLinformation* pDstValue);
// --- End of e2ap_TNLinformation.h ---

// --- Begin of e2ap_TNLusage.h ---
/******************************************************/
/*                                                    */
/*    TNLusage                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_ric_service = 0,
    e2ap_support_function = 1,
    e2ap_both = 2
} e2ap_TNLusage_Root;

typedef OSUINT32 e2ap_TNLusage;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_TNLusage (OSCTXT* pctxt, e2ap_TNLusage value);
EXTERN int asn1PD_e2ap_TNLusage (OSCTXT* pctxt, e2ap_TNLusage* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_TNLusage (const char* name, const e2ap_TNLusage* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_TNLusage (OSCTXT* pctxt, const char* name, const e2ap_TNLusage* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_TNLusage (const char* name,e2ap_TNLusage* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_TNLusage_ENUMTAB[];
#define e2ap_TNLusage_ENUMTABSIZE 3

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_TNLusage_ToString (OSUINT32 value);
EXTERN int e2ap_TNLusage_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_TNLusage* pvalue);
EXTERN int e2ap_TNLusage_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_TNLusage* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_TNLusage (e2ap_TNLusage* pvalue);
// --- End of e2ap_TNLusage.h ---

// --- Begin of e2ap_E2connectionUpdate_Item.h ---
/*****************************************/
/*           E2connectionUpdate_Item                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2connectionUpdate_Item {
      //not primitive
   e2ap_TNLinformation tnlInformation;
      //not primitive
   e2ap_TNLusage tnlUsage;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2connectionUpdate_Item;

EXTERN int asn1PE_e2ap_E2connectionUpdate_Item (OSCTXT* pctxt, e2ap_E2connectionUpdate_Item* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdate_Item (OSCTXT* pctxt, e2ap_E2connectionUpdate_Item* pvalue);
EXTERN int asn1Init_e2ap_E2connectionUpdate_Item (e2ap_E2connectionUpdate_Item* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdate_Item (OSCTXT* pctxt, e2ap_E2connectionUpdate_Item* pvalue);
EXTERN void asn1Print_e2ap_E2connectionUpdate_Item (const char* name, const e2ap_E2connectionUpdate_Item* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdate_Item (const char* name, e2ap_E2connectionUpdate_Item* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2connectionUpdate_Item (OSCTXT* pctxt, const char* name, const e2ap_E2connectionUpdate_Item* pvalue);
EXTERN int asn1Copy_e2ap_E2connectionUpdate_Item (OSCTXT* pctxt, const e2ap_E2connectionUpdate_Item* pSrcValue, e2ap_E2connectionUpdate_Item* pDstValue);
// --- End of e2ap_E2connectionUpdate_Item.h ---

// --- Begin of e2ap_E2connectionUpdate_ItemIEs.h ---
/*****************************************/
/*           E2connectionUpdate_ItemIEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item 
 
} e2ap_E2connectionUpdate_ItemIEs_TVALUE;

/* ie thường */
typedef struct EXTERN e2ap_E2connectionUpdate_ItemIEs {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2connectionUpdate_ItemIEs_TVALUE t;
      union {
         e2ap_E2connectionUpdate_Item * _e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2connectionUpdate_ItemIEs;

EXTERN int  asn1PE_e2ap_E2connectionUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_ItemIEs* pvalue);
EXTERN int  asn1PD_e2ap_E2connectionUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_ItemIEs* pvalue);
EXTERN void asn1Init_e2ap_E2connectionUpdate_ItemIEs (e2ap_E2connectionUpdate_ItemIEs* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_ItemIEs* pvalue);
EXTERN int  asn1PrtToStr_e2ap_E2connectionUpdate_ItemIEs (const char * name, e2ap_E2connectionUpdate_ItemIEs* pvalue, char * buffer, OSSIZE bufSize);
 


// --- End of e2ap_E2connectionUpdate_ItemIEs.h ---

// --- Begin of e2ap_E2connectionUpdate_List.h ---
/*****************************************/
/*           E2connectionUpdate_List                */
/*****************************************/
//seq_of_single_container


/*List of ... ITEM*/
typedef OSRTDList e2ap_E2connectionUpdate_List;

EXTERN int asn1PE_e2ap_E2connectionUpdate_List (OSCTXT* pctxt, e2ap_E2connectionUpdate_List* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdate_List (OSCTXT* pctxt, e2ap_E2connectionUpdate_List* ppvalue);
EXTERN void asn1Init_e2ap_E2connectionUpdate_List (e2ap_E2connectionUpdate_List* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdate_List (OSCTXT* pctxt, e2ap_E2connectionUpdate_List* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdate_List (const char* name, e2ap_E2connectionUpdate_List* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1Copy_e2ap_E2connectionUpdate_List (OSCTXT* pctxt, const e2ap_E2connectionUpdate_List* pSrcValue, e2ap_E2connectionUpdate_List* pDstValue);
EXTERN void asn1Print_e2ap_E2connectionUpdate_List (const char *name, const e2ap_E2connectionUpdate_List* pvalue);
// --- End of e2ap_E2connectionUpdate_List.h ---

// --- Begin of e2ap_E2connectionUpdateRemove_Item.h ---
/*****************************************/
/*           E2connectionUpdateRemove_Item                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2connectionUpdateRemove_Item {
      //not primitive
   e2ap_TNLinformation tnlInformation;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2connectionUpdateRemove_Item;

EXTERN int asn1PE_e2ap_E2connectionUpdateRemove_Item (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_Item* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdateRemove_Item (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_Item* pvalue);
EXTERN int asn1Init_e2ap_E2connectionUpdateRemove_Item (e2ap_E2connectionUpdateRemove_Item* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdateRemove_Item (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_Item* pvalue);
EXTERN void asn1Print_e2ap_E2connectionUpdateRemove_Item (const char* name, const e2ap_E2connectionUpdateRemove_Item* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdateRemove_Item (const char* name, e2ap_E2connectionUpdateRemove_Item* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2connectionUpdateRemove_Item (OSCTXT* pctxt, const char* name, const e2ap_E2connectionUpdateRemove_Item* pvalue);
EXTERN int asn1Copy_e2ap_E2connectionUpdateRemove_Item (OSCTXT* pctxt, const e2ap_E2connectionUpdateRemove_Item* pSrcValue, e2ap_E2connectionUpdateRemove_Item* pDstValue);
// --- End of e2ap_E2connectionUpdateRemove_Item.h ---

// --- Begin of e2ap_E2connectionUpdateRemove_ItemIEs.h ---
/*****************************************/
/*           E2connectionUpdateRemove_ItemIEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdateRemove_ItemIEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdateRemove_ItemIEs_id_E2connectionUpdateRemove_Item 
 
} e2ap_E2connectionUpdateRemove_ItemIEs_TVALUE;

/* ie thường */
typedef struct EXTERN e2ap_E2connectionUpdateRemove_ItemIEs {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2connectionUpdateRemove_ItemIEs_TVALUE t;
      union {
         e2ap_E2connectionUpdateRemove_Item * _e2apE2connectionUpdateRemove_ItemIEs_id_E2connectionUpdateRemove_Item;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2connectionUpdateRemove_ItemIEs;

EXTERN int  asn1PE_e2ap_E2connectionUpdateRemove_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_ItemIEs* pvalue);
EXTERN int  asn1PD_e2ap_E2connectionUpdateRemove_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_ItemIEs* pvalue);
EXTERN void asn1Init_e2ap_E2connectionUpdateRemove_ItemIEs (e2ap_E2connectionUpdateRemove_ItemIEs* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdateRemove_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_ItemIEs* pvalue);
EXTERN int  asn1PrtToStr_e2ap_E2connectionUpdateRemove_ItemIEs (const char * name, e2ap_E2connectionUpdateRemove_ItemIEs* pvalue, char * buffer, OSSIZE bufSize);
 


// --- End of e2ap_E2connectionUpdateRemove_ItemIEs.h ---

// --- Begin of e2ap_E2connectionUpdateRemove_List.h ---
/*****************************************/
/*           E2connectionUpdateRemove_List                */
/*****************************************/
//seq_of_single_container


/*List of ... ITEM*/
typedef OSRTDList e2ap_E2connectionUpdateRemove_List;

EXTERN int asn1PE_e2ap_E2connectionUpdateRemove_List (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_List* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdateRemove_List (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_List* ppvalue);
EXTERN void asn1Init_e2ap_E2connectionUpdateRemove_List (e2ap_E2connectionUpdateRemove_List* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdateRemove_List (OSCTXT* pctxt, e2ap_E2connectionUpdateRemove_List* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdateRemove_List (const char* name, e2ap_E2connectionUpdateRemove_List* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1Copy_e2ap_E2connectionUpdateRemove_List (OSCTXT* pctxt, const e2ap_E2connectionUpdateRemove_List* pSrcValue, e2ap_E2connectionUpdateRemove_List* pDstValue);
EXTERN void asn1Print_e2ap_E2connectionUpdateRemove_List (const char *name, const e2ap_E2connectionUpdateRemove_List* pvalue);
// --- End of e2ap_E2connectionUpdateRemove_List.h ---

// --- Begin of e2ap_E2connectionUpdate_IEs.h ---
/*****************************************/
/*           E2connectionUpdate_IEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_TransactionID,
 
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateAdd,
 
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateRemove,
 
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateModify,
 
   T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_Extended_RANNodeName_
 
} e2ap_E2connectionUpdate_IEs_TVALUE;

 /* ie là con của msg*/
typedef struct EXTERN e2ap_E2connectionUpdate_protocolIEs_element {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2connectionUpdate_IEs_TVALUE t;
      union {
        /*
        *id: id-TransactionID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_TransactionID * _e2apE2connectionUpdate_IEs_id_TransactionID;
        /*
        *id: id-E2connectionUpdate_List
        *criticality: reject
        *presence: optional
        */
         e2ap_E2connectionUpdate_List * _e2apE2connectionUpdate_IEs_id_E2connectionUpdateAdd;
        /*
        *id: id-E2connectionUpdateRemove_List
        *criticality: reject
        *presence: optional
        */
         e2ap_E2connectionUpdateRemove_List * _e2apE2connectionUpdate_IEs_id_E2connectionUpdateRemove;
        /*
        *id: id-E2connectionUpdate_List
        *criticality: reject
        *presence: optional
        */
         e2ap_E2connectionUpdate_List * _e2apE2connectionUpdate_IEs_id_E2connectionUpdateModify;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2connectionUpdate_protocolIEs_element;

EXTERN int asn1PE_e2ap_E2connectionUpdate_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdate_protocolIEs_element* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdate_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdate_protocolIEs_element* pvalue);
EXTERN int asn1Init_e2ap_E2connectionUpdate_protocolIEs_element (e2ap_E2connectionUpdate_protocolIEs_element* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdate_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdate_protocolIEs_element* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2connectionUpdate_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdate_protocolIEs_element* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdate_protocolIEs_element (const char * name, e2ap_E2connectionUpdate_protocolIEs_element* pvalue, char * buffer, OSSIZE bufSize);

 


// --- End of e2ap_E2connectionUpdate_IEs.h ---

// --- Begin of e2ap_E2connectionUpdate.h ---
/*****************************************/
/*           E2connectionUpdate                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_E2connectionUpdate_protocolIEs;
EXTERN int asn1PE_e2ap_E2connectionUpdate_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdate_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_E2connectionUpdate_protocolIEs (e2ap_E2connectionUpdate_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_E2connectionUpdate_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2connectionUpdate_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apE2connectionUpdate_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_E2connectionUpdate_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdate_protocolIEs (const char* name, e2ap_E2connectionUpdate_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . E2connectionUpdate -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_E2connectionUpdate {
    e2ap_E2connectionUpdate_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_E2connectionUpdate;

EXTERN int asn1PE_e2ap_E2connectionUpdate (OSCTXT* pctxt, e2ap_E2connectionUpdate* pvalue);
EXTERN int asn1PD_e2ap_E2connectionUpdate (OSCTXT* pctxt, e2ap_E2connectionUpdate* pvalue);
EXTERN int asn1Init_e2ap_E2connectionUpdate (e2ap_E2connectionUpdate* pvalue);
EXTERN void asn1Free_e2ap_E2connectionUpdate (OSCTXT* pctxt, e2ap_E2connectionUpdate* pvalue);
EXTERN void asn1Print_e2ap_E2connectionUpdate (const char* name, const e2ap_E2connectionUpdate* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2connectionUpdate (const char* name, e2ap_E2connectionUpdate* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2connectionUpdate (OSCTXT* pctxt, const char* name, const e2ap_E2connectionUpdate* pvalue);
EXTERN int asn1Copy_e2ap_E2connectionUpdate (OSCTXT* pctxt, const e2ap_E2connectionUpdate* pSrcValue, e2ap_E2connectionUpdate* pDstValue);
// --- End of e2ap_E2connectionUpdate.h ---

#endif
