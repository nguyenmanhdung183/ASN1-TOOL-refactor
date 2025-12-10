
#ifndef OUTPUT_MAIN_H
#define OUTPUT_MAIN_H

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

// --- Begin of e2ap_PLMN_Identity.h ---
/*****************************************/
/*           PLMN_Identity                */
/*****************************************/
//type 8  mau la octet string size(n) mau la plmn_identity

typedef struct EXTERN e2ap_PLMN_Identity {
    OSUINT32 numocts;
    OSOCTET data[3];
} e2ap_PLMN_Identity;

EXTERN int asn1PE_e2ap_PLMN_Identity (OSCTXT* pctxt, e2ap_PLMN_Identity* pvalue);
EXTERN int asn1PD_e2ap_PLMN_Identity (OSCTXT* pctxt, e2ap_PLMN_Identity* pvalue);
EXTERN int asn1PrtToStr_e2ap_PLMN_Identity (const char* name, e2ap_PLMN_Identity* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_PLMN_Identity (OSCTXT* pctxt, const char* name, const e2ap_PLMN_Identity* pvalue);
EXTERN int asn1Copy_e2ap_PLMN_Identity (OSCTXT* pctxt, const e2ap_PLMN_Identity* pSrcValue, e2ap_PLMN_Identity* pDstValue);
EXTERN int asn1Init_e2ap_PLMN_Identity (e2ap_PLMN_Identity* pvalue);
EXTERN void asn1Free_e2ap_PLMN_Identity (OSCTXT* pctxt, e2ap_PLMN_Identity* pvalue);

// --- End of e2ap_PLMN_Identity.h ---

// --- Begin of e2ap_GlobalRIC_ID.h ---
/*****************************************/
/*           GlobalRIC_ID                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2
    // Nội dung của file .h cho primitive BIT STRING (SIZE (20))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_GlobalRIC_ID_ric_ID {
    OSUINT8 numbits;
    OSOCTET data[3];
} e2ap_GlobalRIC_ID_ric_ID;

EXTERN int asn1PE_e2ap_GlobalRIC_ID_ric_ID(OSCTXT* pctxt, e2ap_GlobalRIC_ID_ric_ID* pvalue);
EXTERN int asn1PD_e2ap_GlobalRIC_ID_ric_ID(OSCTXT* pctxt, e2ap_GlobalRIC_ID_ric_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GlobalRIC_ID_ric_ID (const char* name, e2ap_GlobalRIC_ID_ric_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GlobalRIC_ID_ric_ID (OSCTXT* pctxt, const char* name, const e2ap_GlobalRIC_ID_ric_ID* pvalue);
EXTERN int asn1Copy_e2ap_GlobalRIC_ID_ric_ID(OSCTXT* pctxt,const e2ap_GlobalRIC_ID_ric_ID* pSrcValue,  e2ap_GlobalRIC_ID_ric_ID* pDstValue);
EXTERN int asn1Init_e2ap_GlobalRIC_ID_ric_ID(e2ap_GlobalRIC_ID_ric_ID* pvalue);
EXTERN void asn1Free_e2ap_GlobalRIC_ID_ric_ID(OSCTXT* pctxt, e2ap_GlobalRIC_ID_ric_ID* pvalue);


// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_GlobalRIC_ID {
      //not primitive
   e2ap_PLMN_Identity pLMN_Identity;
      //primitive
   e2ap_GlobalRIC_ID_ric_ID ric_ID;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_GlobalRIC_ID;

EXTERN int asn1PE_e2ap_GlobalRIC_ID (OSCTXT* pctxt, e2ap_GlobalRIC_ID* pvalue);
EXTERN int asn1PD_e2ap_GlobalRIC_ID (OSCTXT* pctxt, e2ap_GlobalRIC_ID* pvalue);
EXTERN int asn1Init_e2ap_GlobalRIC_ID (e2ap_GlobalRIC_ID* pvalue);
EXTERN void asn1Free_e2ap_GlobalRIC_ID (OSCTXT* pctxt, e2ap_GlobalRIC_ID* pvalue);
EXTERN void asn1Print_e2ap_GlobalRIC_ID (const char* name, const e2ap_GlobalRIC_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GlobalRIC_ID (const char* name, e2ap_GlobalRIC_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GlobalRIC_ID (OSCTXT* pctxt, const char* name, const e2ap_GlobalRIC_ID* pvalue);
EXTERN int asn1Copy_e2ap_GlobalRIC_ID (OSCTXT* pctxt, const e2ap_GlobalRIC_ID* pSrcValue, e2ap_GlobalRIC_ID* pDstValue);
// --- End of e2ap_GlobalRIC_ID.h ---

// --- Begin of e2ap_RANfunctionID.h ---
/*****************************************/
/*           RANfunctionID                */
/*****************************************/
//6 mau interger
// mau 5 integer size(a...b) mau la procedurecode
typedef OSUINT16 e2ap_RANfunctionID;
EXTERN int asn1PE_e2ap_RANfunctionID (OSCTXT* pctxt, e2ap_RANfunctionID value);
EXTERN int asn1PD_e2ap_RANfunctionID (OSCTXT* pctxt, e2ap_RANfunctionID* pvalue);
EXTERN int asn1Print_e2ap_RANfunctionID (const char* name, const e2ap_RANfunctionID* pvalue);
EXTERN int asn1PrtToStr_e2ap_RANfunctionID (const char* name, e2ap_RANfunctionID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RANfunctionID (OSCTXT* pctxt, const char* name, const e2ap_RANfunctionID* pvalue);
EXTERN int asn1Init_e2ap_RANfunctionID (e2ap_RANfunctionID* pvalue);
EXTERN int asn1Free_e2ap_RANfunctionID (OSCTXT* pctxt, e2ap_RANfunctionID* pvalue);

// --- End of e2ap_RANfunctionID.h ---

// --- Begin of e2ap_RANfunctionRevision.h ---
/*****************************************/
/*           RANfunctionRevision                */
/*****************************************/
//6 mau interger
// mau 5 integer size(a...b) mau la procedurecode
typedef OSUINT16 e2ap_RANfunctionRevision;
EXTERN int asn1PE_e2ap_RANfunctionRevision (OSCTXT* pctxt, e2ap_RANfunctionRevision value);
EXTERN int asn1PD_e2ap_RANfunctionRevision (OSCTXT* pctxt, e2ap_RANfunctionRevision* pvalue);
EXTERN int asn1Print_e2ap_RANfunctionRevision (const char* name, const e2ap_RANfunctionRevision* pvalue);
EXTERN int asn1PrtToStr_e2ap_RANfunctionRevision (const char* name, e2ap_RANfunctionRevision* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RANfunctionRevision (OSCTXT* pctxt, const char* name, const e2ap_RANfunctionRevision* pvalue);
EXTERN int asn1Init_e2ap_RANfunctionRevision (e2ap_RANfunctionRevision* pvalue);
EXTERN int asn1Free_e2ap_RANfunctionRevision (OSCTXT* pctxt, e2ap_RANfunctionRevision* pvalue);

// --- End of e2ap_RANfunctionRevision.h ---

// --- Begin of e2ap_RANfunctionID_Item.h ---
/*****************************************/
/*           RANfunctionID_Item                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_RANfunctionID_Item {
      //not primitive
   e2ap_RANfunctionID ranFunctionID;
      //not primitive
   e2ap_RANfunctionRevision ranFunctionRevision;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_RANfunctionID_Item;

EXTERN int asn1PE_e2ap_RANfunctionID_Item (OSCTXT* pctxt, e2ap_RANfunctionID_Item* pvalue);
EXTERN int asn1PD_e2ap_RANfunctionID_Item (OSCTXT* pctxt, e2ap_RANfunctionID_Item* pvalue);
EXTERN int asn1Init_e2ap_RANfunctionID_Item (e2ap_RANfunctionID_Item* pvalue);
EXTERN void asn1Free_e2ap_RANfunctionID_Item (OSCTXT* pctxt, e2ap_RANfunctionID_Item* pvalue);
EXTERN void asn1Print_e2ap_RANfunctionID_Item (const char* name, const e2ap_RANfunctionID_Item* pvalue);
EXTERN int asn1PrtToStr_e2ap_RANfunctionID_Item (const char* name, e2ap_RANfunctionID_Item* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RANfunctionID_Item (OSCTXT* pctxt, const char* name, const e2ap_RANfunctionID_Item* pvalue);
EXTERN int asn1Copy_e2ap_RANfunctionID_Item (OSCTXT* pctxt, const e2ap_RANfunctionID_Item* pSrcValue, e2ap_RANfunctionID_Item* pDstValue);
// --- End of e2ap_RANfunctionID_Item.h ---

// --- Begin of e2ap_RANfunctionID_ItemIEs.h ---
/*****************************************/
/*           RANfunctionID_ItemIEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_RANfunctionID_ItemIEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_RANfunctionID_ItemIEs_id_RANfunctionID_Item 
 
} e2ap_RANfunctionID_ItemIEs_TVALUE;

/* ie thường */
typedef struct EXTERN e2ap_RANfunctionID_ItemIEs {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_RANfunctionID_ItemIEs_TVALUE t;
      union {
         e2ap_RANfunctionID_Item * _e2apRANfunctionID_ItemIEs_id_RANfunctionID_Item;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_RANfunctionID_ItemIEs;

EXTERN int  asn1PE_e2ap_RANfunctionID_ItemIEs (OSCTXT* pctxt, e2ap_RANfunctionID_ItemIEs* pvalue);
EXTERN int  asn1PD_e2ap_RANfunctionID_ItemIEs (OSCTXT* pctxt, e2ap_RANfunctionID_ItemIEs* pvalue);
EXTERN void asn1Init_e2ap_RANfunctionID_ItemIEs (e2ap_RANfunctionID_ItemIEs* pvalue);
EXTERN void asn1Free_e2ap_RANfunctionID_ItemIEs (OSCTXT* pctxt, e2ap_RANfunctionID_ItemIEs* pvalue);
EXTERN int  asn1PrtToStr_e2ap_RANfunctionID_ItemIEs (const char * name, e2ap_RANfunctionID_ItemIEs* pvalue, char * buffer, OSSIZE bufSize);
 


// --- End of e2ap_RANfunctionID_ItemIEs.h ---

// --- Begin of e2ap_RANfunctionsID_List.h ---
/*****************************************/
/*           RANfunctionsID_List                */
/*****************************************/
//seq_of_single_container


/*List of ... ITEM*/
typedef OSRTDList e2ap_RANfunctionsID_List;

EXTERN int asn1PE_e2ap_RANfunctionsID_List (OSCTXT* pctxt, e2ap_RANfunctionsID_List* pvalue);
EXTERN int asn1PD_e2ap_RANfunctionsID_List (OSCTXT* pctxt, e2ap_RANfunctionsID_List* ppvalue);
EXTERN void asn1Init_e2ap_RANfunctionsID_List (e2ap_RANfunctionsID_List* pvalue);
EXTERN void asn1Free_e2ap_RANfunctionsID_List (OSCTXT* pctxt, e2ap_RANfunctionsID_List* pvalue);
EXTERN int asn1PrtToStr_e2ap_RANfunctionsID_List (const char* name, e2ap_RANfunctionsID_List* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1Copy_e2ap_RANfunctionsID_List (OSCTXT* pctxt, const e2ap_RANfunctionsID_List* pSrcValue, e2ap_RANfunctionsID_List* pDstValue);
EXTERN void asn1Print_e2ap_RANfunctionsID_List (const char *name, const e2ap_RANfunctionsID_List* pvalue);
// --- End of e2ap_RANfunctionsID_List.h ---

// --- Begin of e2ap_CauseRICrequest.h ---
/******************************************************/
/*                                                    */
/*    CauseRICrequest                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_ran_function_id_invalid = 0,
    e2ap_action_not_supported = 1,
    e2ap_excessive_actions = 2,
    e2ap_duplicate_action = 3,
    e2ap_duplicate_event_trigger = 4,
    e2ap_function_resource_limit = 5,
    e2ap_request_id_unknown = 6,
    e2ap_inconsistent_action_subsequent_action_sequence = 7,
    e2ap_control_message_invalid = 8,
    e2ap_ric_call_process_id_invalid = 9,
    e2ap_control_timer_expired = 10,
    e2ap_control_failed_to_execute = 11,
    e2ap_system_not_ready = 12,
    e2ap_unspecified = 13,
    e2ap_ric_subscription_end_time_expired = 14,
    e2ap_ric_subscription_end_time_invalid = 15,
    e2ap_duplicate_ric_request_id = 16,
    e2ap_eventTriggerNotSupported = 17,
    e2ap_requested_information_unavailable = 18,
    e2ap_invalid_information_request = 19
} e2ap_CauseRICrequest_Root;

typedef OSUINT32 e2ap_CauseRICrequest;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_CauseRICrequest (OSCTXT* pctxt, e2ap_CauseRICrequest value);
EXTERN int asn1PD_e2ap_CauseRICrequest (OSCTXT* pctxt, e2ap_CauseRICrequest* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_CauseRICrequest (const char* name, const e2ap_CauseRICrequest* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_CauseRICrequest (OSCTXT* pctxt, const char* name, const e2ap_CauseRICrequest* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_CauseRICrequest (const char* name,e2ap_CauseRICrequest* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_CauseRICrequest_ENUMTAB[];
#define e2ap_CauseRICrequest_ENUMTABSIZE 20

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_CauseRICrequest_ToString (OSUINT32 value);
EXTERN int e2ap_CauseRICrequest_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseRICrequest* pvalue);
EXTERN int e2ap_CauseRICrequest_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseRICrequest* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_CauseRICrequest (e2ap_CauseRICrequest* pvalue);
// --- End of e2ap_CauseRICrequest.h ---

// --- Begin of e2ap_CauseRICservice.h ---
/******************************************************/
/*                                                    */
/*    CauseRICservice                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_ran_function_not_supported = 0,
    e2ap_excessive_functions = 1,
    e2ap_ric_resource_limit = 2
} e2ap_CauseRICservice_Root;

typedef OSUINT32 e2ap_CauseRICservice;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_CauseRICservice (OSCTXT* pctxt, e2ap_CauseRICservice value);
EXTERN int asn1PD_e2ap_CauseRICservice (OSCTXT* pctxt, e2ap_CauseRICservice* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_CauseRICservice (const char* name, const e2ap_CauseRICservice* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_CauseRICservice (OSCTXT* pctxt, const char* name, const e2ap_CauseRICservice* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_CauseRICservice (const char* name,e2ap_CauseRICservice* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_CauseRICservice_ENUMTAB[];
#define e2ap_CauseRICservice_ENUMTABSIZE 3

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_CauseRICservice_ToString (OSUINT32 value);
EXTERN int e2ap_CauseRICservice_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseRICservice* pvalue);
EXTERN int e2ap_CauseRICservice_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseRICservice* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_CauseRICservice (e2ap_CauseRICservice* pvalue);
// --- End of e2ap_CauseRICservice.h ---

// --- Begin of e2ap_CauseE2node.h ---
/******************************************************/
/*                                                    */
/*    CauseE2node                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_e2node_component_unknown = 0
} e2ap_CauseE2node_Root;

typedef OSUINT32 e2ap_CauseE2node;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_CauseE2node (OSCTXT* pctxt, e2ap_CauseE2node value);
EXTERN int asn1PD_e2ap_CauseE2node (OSCTXT* pctxt, e2ap_CauseE2node* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_CauseE2node (const char* name, const e2ap_CauseE2node* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_CauseE2node (OSCTXT* pctxt, const char* name, const e2ap_CauseE2node* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_CauseE2node (const char* name,e2ap_CauseE2node* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_CauseE2node_ENUMTAB[];
#define e2ap_CauseE2node_ENUMTABSIZE 1

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_CauseE2node_ToString (OSUINT32 value);
EXTERN int e2ap_CauseE2node_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseE2node* pvalue);
EXTERN int e2ap_CauseE2node_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseE2node* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_CauseE2node (e2ap_CauseE2node* pvalue);
// --- End of e2ap_CauseE2node.h ---

// --- Begin of e2ap_CauseTransport.h ---
/******************************************************/
/*                                                    */
/*    CauseTransport                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_unspecified = 0,
    e2ap_transport_resource_unavailable = 1
} e2ap_CauseTransport_Root;

typedef OSUINT32 e2ap_CauseTransport;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_CauseTransport (OSCTXT* pctxt, e2ap_CauseTransport value);
EXTERN int asn1PD_e2ap_CauseTransport (OSCTXT* pctxt, e2ap_CauseTransport* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_CauseTransport (const char* name, const e2ap_CauseTransport* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_CauseTransport (OSCTXT* pctxt, const char* name, const e2ap_CauseTransport* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_CauseTransport (const char* name,e2ap_CauseTransport* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_CauseTransport_ENUMTAB[];
#define e2ap_CauseTransport_ENUMTABSIZE 2

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_CauseTransport_ToString (OSUINT32 value);
EXTERN int e2ap_CauseTransport_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseTransport* pvalue);
EXTERN int e2ap_CauseTransport_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseTransport* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_CauseTransport (e2ap_CauseTransport* pvalue);
// --- End of e2ap_CauseTransport.h ---

// --- Begin of e2ap_CauseProtocol.h ---
/******************************************************/
/*                                                    */
/*    CauseProtocol                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_transfer_syntax_error = 0,
    e2ap_abstract_syntax_error_reject = 1,
    e2ap_abstract_syntax_error_ignore_and_notify = 2,
    e2ap_message_not_compatible_with_receiver_state = 3,
    e2ap_semantic_error = 4,
    e2ap_abstract_syntax_error_falsely_constructed_message = 5,
    e2ap_unspecified = 6
} e2ap_CauseProtocol_Root;

typedef OSUINT32 e2ap_CauseProtocol;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_CauseProtocol (OSCTXT* pctxt, e2ap_CauseProtocol value);
EXTERN int asn1PD_e2ap_CauseProtocol (OSCTXT* pctxt, e2ap_CauseProtocol* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_CauseProtocol (const char* name, const e2ap_CauseProtocol* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_CauseProtocol (OSCTXT* pctxt, const char* name, const e2ap_CauseProtocol* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_CauseProtocol (const char* name,e2ap_CauseProtocol* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_CauseProtocol_ENUMTAB[];
#define e2ap_CauseProtocol_ENUMTABSIZE 7

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_CauseProtocol_ToString (OSUINT32 value);
EXTERN int e2ap_CauseProtocol_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseProtocol* pvalue);
EXTERN int e2ap_CauseProtocol_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseProtocol* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_CauseProtocol (e2ap_CauseProtocol* pvalue);
// --- End of e2ap_CauseProtocol.h ---

// --- Begin of e2ap_CauseMisc.h ---
/******************************************************/
/*                                                    */
/*    CauseMisc                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_control_processing_overload = 0,
    e2ap_hardware_failure = 1,
    e2ap_om_intervention = 2,
    e2ap_unspecified = 3
} e2ap_CauseMisc_Root;

typedef OSUINT32 e2ap_CauseMisc;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_CauseMisc (OSCTXT* pctxt, e2ap_CauseMisc value);
EXTERN int asn1PD_e2ap_CauseMisc (OSCTXT* pctxt, e2ap_CauseMisc* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_CauseMisc (const char* name, const e2ap_CauseMisc* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_CauseMisc (OSCTXT* pctxt, const char* name, const e2ap_CauseMisc* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_CauseMisc (const char* name,e2ap_CauseMisc* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_CauseMisc_ENUMTAB[];
#define e2ap_CauseMisc_ENUMTABSIZE 4

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_CauseMisc_ToString (OSUINT32 value);
EXTERN int e2ap_CauseMisc_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseMisc* pvalue);
EXTERN int e2ap_CauseMisc_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseMisc* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_CauseMisc (e2ap_CauseMisc* pvalue);
// --- End of e2ap_CauseMisc.h ---

// --- Begin of e2ap_ServiceLayerCause.h ---
/*****************************************/
/*           ServiceLayerCause                */
/*****************************************/
//type 9  mau la octet string mau la pdusessioncommonnetworkinstance

typedef OSDynOctStr e2ap_ServiceLayerCause;
EXTERN int asn1PE_e2ap_ServiceLayerCause (OSCTXT* pctxt, e2ap_ServiceLayerCause value);
EXTERN int asn1PD_e2ap_ServiceLayerCause (OSCTXT* pctxt, e2ap_ServiceLayerCause* pvalue);
EXTERN int asn1PrtToStr_e2ap_ServiceLayerCause (const char* name, e2ap_ServiceLayerCause *pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ServiceLayerCause (OSCTXT* pctxt, const char* name, const e2ap_ServiceLayerCause* pvalue);
EXTERN int asn1Copy_e2ap_ServiceLayerCause (OSCTXT* pctxt, const e2ap_ServiceLayerCause* pSrcValue, e2ap_ServiceLayerCause* pDstValue);
EXTERN int asn1Init_e2ap_ServiceLayerCause (e2ap_ServiceLayerCause* pvalue);
EXTERN void asn1Free_e2ap_ServiceLayerCause (OSCTXT* pctxt, e2ap_ServiceLayerCause* pvalue);

// --- End of e2ap_ServiceLayerCause.h ---

// --- Begin of e2ap_CauseServiceLayer.h ---
/*****************************************/
/*           CauseServiceLayer                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_CauseServiceLayer {
      //not primitive
   e2ap_ServiceLayerCause serviceLayerCause;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_CauseServiceLayer;

EXTERN int asn1PE_e2ap_CauseServiceLayer (OSCTXT* pctxt, e2ap_CauseServiceLayer* pvalue);
EXTERN int asn1PD_e2ap_CauseServiceLayer (OSCTXT* pctxt, e2ap_CauseServiceLayer* pvalue);
EXTERN int asn1Init_e2ap_CauseServiceLayer (e2ap_CauseServiceLayer* pvalue);
EXTERN void asn1Free_e2ap_CauseServiceLayer (OSCTXT* pctxt, e2ap_CauseServiceLayer* pvalue);
EXTERN void asn1Print_e2ap_CauseServiceLayer (const char* name, const e2ap_CauseServiceLayer* pvalue);
EXTERN int asn1PrtToStr_e2ap_CauseServiceLayer (const char* name, e2ap_CauseServiceLayer* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_CauseServiceLayer (OSCTXT* pctxt, const char* name, const e2ap_CauseServiceLayer* pvalue);
EXTERN int asn1Copy_e2ap_CauseServiceLayer (OSCTXT* pctxt, const e2ap_CauseServiceLayer* pSrcValue, e2ap_CauseServiceLayer* pDstValue);
// --- End of e2ap_CauseServiceLayer.h ---

// --- Begin of e2ap_Cause.h ---


/*****************************************/
/*           Cause                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.h.j2

// Các phần còn lại của template choice.h.j2
#define T_e2ap_Cause_ricRequest  1
#define T_e2ap_Cause_ricService  2
#define T_e2ap_Cause_e2Node  3
#define T_e2ap_Cause_transport  4
#define T_e2ap_Cause_protocol  5
#define T_e2ap_Cause_misc  6
#define T_e2ap_Cause_serviceLayer  7
#define T_e2ap_Cause_extElem1 8

typedef struct e2ap_Cause {
   OSINT32 t;  /* choice tag */
   union {
      /* t =  1 */
      e2ap_CauseRICrequest *ricRequest;
      /* t =  2 */
      e2ap_CauseRICservice *ricService;
      /* t =  3 */
      e2ap_CauseE2node *e2Node;
      /* t =  4 */
      e2ap_CauseTransport *transport;
      /* t =  5 */
      e2ap_CauseProtocol *protocol;
      /* t =  6 */
      e2ap_CauseMisc *misc;
      /* t =  7 */
      e2ap_CauseServiceLayer *serviceLayer;
      /* t = 8*/
      ASN1OpenType *extElem1;  /* extension */
      
   } u;
} e2ap_Cause;

EXTERN int asn1PE_e2ap_Cause (OSCTXT* pctxt, e2ap_Cause* pvalue);
EXTERN int asn1PD_e2ap_Cause (OSCTXT* pctxt, e2ap_Cause* pvalue);
EXTERN void asn1Print_e2ap_Cause (const char* name, const e2ap_Cause* pvalue);
EXTERN int asn1PrtToStr_e2ap_Cause (const char* name, e2ap_Cause* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_Cause (OSCTXT* pctxt, const char* name, const e2ap_Cause* pvalue);
EXTERN int asn1Copy_e2ap_Cause (OSCTXT* pctxt, const e2ap_Cause* pSrcValue, e2ap_Cause* pDstValue);
EXTERN int asn1Init_e2ap_Cause (e2ap_Cause* pvalue);
EXTERN void asn1Free_e2ap_Cause (OSCTXT* pctxt, e2ap_Cause* pvalue);

// --- End of e2ap_Cause.h ---

// --- Begin of e2ap_RANfunctionIDcause_Item.h ---
/*****************************************/
/*           RANfunctionIDcause_Item                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_RANfunctionIDcause_Item {
      //not primitive
   e2ap_RANfunctionID ranFunctionID;
      //not primitive
   e2ap_Cause cause;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_RANfunctionIDcause_Item;

EXTERN int asn1PE_e2ap_RANfunctionIDcause_Item (OSCTXT* pctxt, e2ap_RANfunctionIDcause_Item* pvalue);
EXTERN int asn1PD_e2ap_RANfunctionIDcause_Item (OSCTXT* pctxt, e2ap_RANfunctionIDcause_Item* pvalue);
EXTERN int asn1Init_e2ap_RANfunctionIDcause_Item (e2ap_RANfunctionIDcause_Item* pvalue);
EXTERN void asn1Free_e2ap_RANfunctionIDcause_Item (OSCTXT* pctxt, e2ap_RANfunctionIDcause_Item* pvalue);
EXTERN void asn1Print_e2ap_RANfunctionIDcause_Item (const char* name, const e2ap_RANfunctionIDcause_Item* pvalue);
EXTERN int asn1PrtToStr_e2ap_RANfunctionIDcause_Item (const char* name, e2ap_RANfunctionIDcause_Item* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RANfunctionIDcause_Item (OSCTXT* pctxt, const char* name, const e2ap_RANfunctionIDcause_Item* pvalue);
EXTERN int asn1Copy_e2ap_RANfunctionIDcause_Item (OSCTXT* pctxt, const e2ap_RANfunctionIDcause_Item* pSrcValue, e2ap_RANfunctionIDcause_Item* pDstValue);
// --- End of e2ap_RANfunctionIDcause_Item.h ---

// --- Begin of e2ap_RANfunctionIDcause_ItemIEs.h ---
/*****************************************/
/*           RANfunctionIDcause_ItemIEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_RANfunctionIDcause_ItemIEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_RANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item 
 
} e2ap_RANfunctionIDcause_ItemIEs_TVALUE;

/* ie thường */
typedef struct EXTERN e2ap_RANfunctionIDcause_ItemIEs {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_RANfunctionIDcause_ItemIEs_TVALUE t;
      union {
         e2ap_RANfunctionIDcause_Item * _e2apRANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_RANfunctionIDcause_ItemIEs;

EXTERN int  asn1PE_e2ap_RANfunctionIDcause_ItemIEs (OSCTXT* pctxt, e2ap_RANfunctionIDcause_ItemIEs* pvalue);
EXTERN int  asn1PD_e2ap_RANfunctionIDcause_ItemIEs (OSCTXT* pctxt, e2ap_RANfunctionIDcause_ItemIEs* pvalue);
EXTERN void asn1Init_e2ap_RANfunctionIDcause_ItemIEs (e2ap_RANfunctionIDcause_ItemIEs* pvalue);
EXTERN void asn1Free_e2ap_RANfunctionIDcause_ItemIEs (OSCTXT* pctxt, e2ap_RANfunctionIDcause_ItemIEs* pvalue);
EXTERN int  asn1PrtToStr_e2ap_RANfunctionIDcause_ItemIEs (const char * name, e2ap_RANfunctionIDcause_ItemIEs* pvalue, char * buffer, OSSIZE bufSize);
 


// --- End of e2ap_RANfunctionIDcause_ItemIEs.h ---

// --- Begin of e2ap_RANfunctionsIDcause_List.h ---
/*****************************************/
/*           RANfunctionsIDcause_List                */
/*****************************************/
//seq_of_single_container


/*List of ... ITEM*/
typedef OSRTDList e2ap_RANfunctionsIDcause_List;

EXTERN int asn1PE_e2ap_RANfunctionsIDcause_List (OSCTXT* pctxt, e2ap_RANfunctionsIDcause_List* pvalue);
EXTERN int asn1PD_e2ap_RANfunctionsIDcause_List (OSCTXT* pctxt, e2ap_RANfunctionsIDcause_List* ppvalue);
EXTERN void asn1Init_e2ap_RANfunctionsIDcause_List (e2ap_RANfunctionsIDcause_List* pvalue);
EXTERN void asn1Free_e2ap_RANfunctionsIDcause_List (OSCTXT* pctxt, e2ap_RANfunctionsIDcause_List* pvalue);
EXTERN int asn1PrtToStr_e2ap_RANfunctionsIDcause_List (const char* name, e2ap_RANfunctionsIDcause_List* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1Copy_e2ap_RANfunctionsIDcause_List (OSCTXT* pctxt, const e2ap_RANfunctionsIDcause_List* pSrcValue, e2ap_RANfunctionsIDcause_List* pDstValue);
EXTERN void asn1Print_e2ap_RANfunctionsIDcause_List (const char *name, const e2ap_RANfunctionsIDcause_List* pvalue);
// --- End of e2ap_RANfunctionsIDcause_List.h ---

// --- Begin of e2ap_E2nodeComponentInterfaceType.h ---
/******************************************************/
/*                                                    */
/*    E2nodeComponentInterfaceType                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_ng = 0,
    e2ap_xn = 1,
    e2ap_e1 = 2,
    e2ap_f1 = 3,
    e2ap_w1 = 4,
    e2ap_s1 = 5,
    e2ap_x2 = 6
} e2ap_E2nodeComponentInterfaceType_Root;

typedef OSUINT32 e2ap_E2nodeComponentInterfaceType;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_E2nodeComponentInterfaceType (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceType value);
EXTERN int asn1PD_e2ap_E2nodeComponentInterfaceType (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceType* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_E2nodeComponentInterfaceType (const char* name, const e2ap_E2nodeComponentInterfaceType* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentInterfaceType (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentInterfaceType* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentInterfaceType (const char* name,e2ap_E2nodeComponentInterfaceType* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_E2nodeComponentInterfaceType_ENUMTAB[];
#define e2ap_E2nodeComponentInterfaceType_ENUMTABSIZE 7

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_E2nodeComponentInterfaceType_ToString (OSUINT32 value);
EXTERN int e2ap_E2nodeComponentInterfaceType_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_E2nodeComponentInterfaceType* pvalue);
EXTERN int e2ap_E2nodeComponentInterfaceType_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_E2nodeComponentInterfaceType* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_E2nodeComponentInterfaceType (e2ap_E2nodeComponentInterfaceType* pvalue);
// --- End of e2ap_E2nodeComponentInterfaceType.h ---

// --- Begin of e2ap_AMFName.h ---
/* e2ap_AMFName.h */

//printable string
/*****************************************/
/*           AMFName                */
/*****************************************/


typedef const char* e2ap_AMFName;

EXTERN int asn1PE_e2ap_AMFName (OSCTXT* pctxt, e2ap_AMFName value);
EXTERN int asn1PD_e2ap_AMFName (OSCTXT* pctxt, e2ap_AMFName* ppvalue);
EXTERN void asn1Print_e2ap_AMFName (const char* name, e2ap_AMFName pvalue);
EXTERN int asn1PrtToStr_e2ap_AMFName (const char* name, e2ap_AMFName pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_AMFName (OSCTXT* pctxt, const char* name, e2ap_AMFName pvalue);
EXTERN int asn1Copy_e2ap_AMFName (OSCTXT* pctxt, e2ap_AMFName pSrcValue, e2ap_AMFName* pDstValue);
EXTERN void asn1Free_e2ap_AMFName (OSCTXT* pctxt, e2ap_AMFName pvalue);
EXTERN int asn1Init_e2ap_AMFName (e2ap_AMFName* pvalue);
// --- End of e2ap_AMFName.h ---

// --- Begin of e2ap_E2nodeComponentInterfaceNG.h ---
/*****************************************/
/*           E2nodeComponentInterfaceNG                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentInterfaceNG {
      //not primitive
   e2ap_AMFName amf_name;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentInterfaceNG;

EXTERN int asn1PE_e2ap_E2nodeComponentInterfaceNG (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceNG* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentInterfaceNG (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceNG* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentInterfaceNG (e2ap_E2nodeComponentInterfaceNG* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentInterfaceNG (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceNG* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentInterfaceNG (const char* name, const e2ap_E2nodeComponentInterfaceNG* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentInterfaceNG (const char* name, e2ap_E2nodeComponentInterfaceNG* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentInterfaceNG (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentInterfaceNG* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentInterfaceNG (OSCTXT* pctxt, const e2ap_E2nodeComponentInterfaceNG* pSrcValue, e2ap_E2nodeComponentInterfaceNG* pDstValue);
// --- End of e2ap_E2nodeComponentInterfaceNG.h ---

// --- Begin of e2ap_GNB_ID_Choice.h ---


/*****************************************/
/*           GNB-ID-Choice                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.h.j2
    // Nội dung của file .h cho primitive BIT STRING (SIZE(22..32))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 4
//type 4  mau la datatrafficresource bitstring (a..b)
typedef struct e2ap_GNB_ID_Choice_gnb_ID {
    OSUINT8 numbits;
    OSOCTET data[4];
} e2ap_GNB_ID_Choice_gnb_ID;
EXTERN int asn1PE_e2ap_GNB_ID_Choice_gnb_ID(OSCTXT* pctxt, e2ap_GNB_ID_Choice_gnb_ID* pvalue);
EXTERN int asn1PD_e2ap_GNB_ID_Choice_gnb_ID(OSCTXT* pctxt, e2ap_GNB_ID_Choice_gnb_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GNB_ID_Choice_gnb_ID (const char* name, e2ap_GNB_ID_Choice_gnb_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GNB_ID_Choice_gnb_ID (OSCTXT* pctxt, const char* name, const e2ap_GNB_ID_Choice_gnb_ID* pvalue);
EXTERN int asn1Copy_e2ap_GNB_ID_Choice_gnb_ID(OSCTXT* pctxt,const e2ap_GNB_ID_Choice_gnb_ID* pSrcValue,  e2ap_GNB_ID_Choice_gnb_ID* pDstValue);
EXTERN int asn1Init_e2ap_GNB_ID_Choice_gnb_ID(e2ap_GNB_ID_Choice_gnb_ID* pvalue);
EXTERN void asn1Free_e2ap_GNB_ID_Choice_gnb_ID(OSCTXT* pctxt, e2ap_GNB_ID_Choice_gnb_ID* pvalue);


// Các phần còn lại của template choice.h.j2
#define T_e2ap_GNB_ID_Choice_gnb_ID  1
#define T_e2ap_GNB_ID_Choice_extElem1 2

typedef struct e2ap_GNB_ID_Choice {
   OSINT32 t;  /* choice tag */
   union {
      /* t =  1 */
      e2ap_GNB_ID_Choice_gnb_ID *gnb_ID;
      /* t = 2*/
      ASN1OpenType *extElem1;  /* extension */
      
   } u;
} e2ap_GNB_ID_Choice;

EXTERN int asn1PE_e2ap_GNB_ID_Choice (OSCTXT* pctxt, e2ap_GNB_ID_Choice* pvalue);
EXTERN int asn1PD_e2ap_GNB_ID_Choice (OSCTXT* pctxt, e2ap_GNB_ID_Choice* pvalue);
EXTERN void asn1Print_e2ap_GNB_ID_Choice (const char* name, const e2ap_GNB_ID_Choice* pvalue);
EXTERN int asn1PrtToStr_e2ap_GNB_ID_Choice (const char* name, e2ap_GNB_ID_Choice* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GNB_ID_Choice (OSCTXT* pctxt, const char* name, const e2ap_GNB_ID_Choice* pvalue);
EXTERN int asn1Copy_e2ap_GNB_ID_Choice (OSCTXT* pctxt, const e2ap_GNB_ID_Choice* pSrcValue, e2ap_GNB_ID_Choice* pDstValue);
EXTERN int asn1Init_e2ap_GNB_ID_Choice (e2ap_GNB_ID_Choice* pvalue);
EXTERN void asn1Free_e2ap_GNB_ID_Choice (OSCTXT* pctxt, e2ap_GNB_ID_Choice* pvalue);

// --- End of e2ap_GNB_ID_Choice.h ---

// --- Begin of e2ap_GlobalgNB_ID.h ---
/*****************************************/
/*           GlobalgNB_ID                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_GlobalgNB_ID {
      //not primitive
   e2ap_PLMN_Identity plmn_id;
      //not primitive
   e2ap_GNB_ID_Choice gnb_id;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_GlobalgNB_ID;

EXTERN int asn1PE_e2ap_GlobalgNB_ID (OSCTXT* pctxt, e2ap_GlobalgNB_ID* pvalue);
EXTERN int asn1PD_e2ap_GlobalgNB_ID (OSCTXT* pctxt, e2ap_GlobalgNB_ID* pvalue);
EXTERN int asn1Init_e2ap_GlobalgNB_ID (e2ap_GlobalgNB_ID* pvalue);
EXTERN void asn1Free_e2ap_GlobalgNB_ID (OSCTXT* pctxt, e2ap_GlobalgNB_ID* pvalue);
EXTERN void asn1Print_e2ap_GlobalgNB_ID (const char* name, const e2ap_GlobalgNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GlobalgNB_ID (const char* name, e2ap_GlobalgNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GlobalgNB_ID (OSCTXT* pctxt, const char* name, const e2ap_GlobalgNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_GlobalgNB_ID (OSCTXT* pctxt, const e2ap_GlobalgNB_ID* pSrcValue, e2ap_GlobalgNB_ID* pDstValue);
// --- End of e2ap_GlobalgNB_ID.h ---

// --- Begin of e2ap_ENB_ID_Choice.h ---


/*****************************************/
/*           ENB-ID-Choice                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.h.j2
    // Nội dung của file .h cho primitive BIT STRING (SIZE(20))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_ENB_ID_Choice_enb_ID_macro {
    OSUINT8 numbits;
    OSOCTET data[3];
} e2ap_ENB_ID_Choice_enb_ID_macro;

EXTERN int asn1PE_e2ap_ENB_ID_Choice_enb_ID_macro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_macro* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID_Choice_enb_ID_macro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_macro* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_macro (const char* name, e2ap_ENB_ID_Choice_enb_ID_macro* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID_Choice_enb_ID_macro (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_Choice_enb_ID_macro* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID_Choice_enb_ID_macro(OSCTXT* pctxt,const e2ap_ENB_ID_Choice_enb_ID_macro* pSrcValue,  e2ap_ENB_ID_Choice_enb_ID_macro* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_Choice_enb_ID_macro(e2ap_ENB_ID_Choice_enb_ID_macro* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID_Choice_enb_ID_macro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_macro* pvalue);

    // Nội dung của file .h cho primitive BIT STRING (SIZE(18))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_ENB_ID_Choice_enb_ID_shortmacro {
    OSUINT8 numbits;
    OSOCTET data[3];
} e2ap_ENB_ID_Choice_enb_ID_shortmacro;

EXTERN int asn1PE_e2ap_ENB_ID_Choice_enb_ID_shortmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID_Choice_enb_ID_shortmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_shortmacro (const char* name, e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID_Choice_enb_ID_shortmacro (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID_Choice_enb_ID_shortmacro(OSCTXT* pctxt,const e2ap_ENB_ID_Choice_enb_ID_shortmacro* pSrcValue,  e2ap_ENB_ID_Choice_enb_ID_shortmacro* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_Choice_enb_ID_shortmacro(e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID_Choice_enb_ID_shortmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue);

    // Nội dung của file .h cho primitive BIT STRING (SIZE(21))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_ENB_ID_Choice_enb_ID_longmacro {
    OSUINT8 numbits;
    OSOCTET data[3];
} e2ap_ENB_ID_Choice_enb_ID_longmacro;

EXTERN int asn1PE_e2ap_ENB_ID_Choice_enb_ID_longmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID_Choice_enb_ID_longmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_longmacro (const char* name, e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID_Choice_enb_ID_longmacro (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID_Choice_enb_ID_longmacro(OSCTXT* pctxt,const e2ap_ENB_ID_Choice_enb_ID_longmacro* pSrcValue,  e2ap_ENB_ID_Choice_enb_ID_longmacro* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_Choice_enb_ID_longmacro(e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID_Choice_enb_ID_longmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue);


// Các phần còn lại của template choice.h.j2
#define T_e2ap_ENB_ID_Choice_enb_ID_macro  1
#define T_e2ap_ENB_ID_Choice_enb_ID_shortmacro  2
#define T_e2ap_ENB_ID_Choice_enb_ID_longmacro  3
#define T_e2ap_ENB_ID_Choice_extElem1 4

typedef struct e2ap_ENB_ID_Choice {
   OSINT32 t;  /* choice tag */
   union {
      /* t =  1 */
      e2ap_ENB_ID_Choice_enb_ID_macro *enb_ID_macro;
      /* t =  2 */
      e2ap_ENB_ID_Choice_enb_ID_shortmacro *enb_ID_shortmacro;
      /* t =  3 */
      e2ap_ENB_ID_Choice_enb_ID_longmacro *enb_ID_longmacro;
      /* t = 4*/
      ASN1OpenType *extElem1;  /* extension */
      
   } u;
} e2ap_ENB_ID_Choice;

EXTERN int asn1PE_e2ap_ENB_ID_Choice (OSCTXT* pctxt, e2ap_ENB_ID_Choice* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID_Choice (OSCTXT* pctxt, e2ap_ENB_ID_Choice* pvalue);
EXTERN void asn1Print_e2ap_ENB_ID_Choice (const char* name, const e2ap_ENB_ID_Choice* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID_Choice (const char* name, e2ap_ENB_ID_Choice* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID_Choice (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_Choice* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID_Choice (OSCTXT* pctxt, const e2ap_ENB_ID_Choice* pSrcValue, e2ap_ENB_ID_Choice* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_Choice (e2ap_ENB_ID_Choice* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID_Choice (OSCTXT* pctxt, e2ap_ENB_ID_Choice* pvalue);

// --- End of e2ap_ENB_ID_Choice.h ---

// --- Begin of e2ap_GlobalngeNB_ID.h ---
/*****************************************/
/*           GlobalngeNB_ID                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_GlobalngeNB_ID {
      //not primitive
   e2ap_PLMN_Identity plmn_id;
      //not primitive
   e2ap_ENB_ID_Choice enb_id;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_GlobalngeNB_ID;

EXTERN int asn1PE_e2ap_GlobalngeNB_ID (OSCTXT* pctxt, e2ap_GlobalngeNB_ID* pvalue);
EXTERN int asn1PD_e2ap_GlobalngeNB_ID (OSCTXT* pctxt, e2ap_GlobalngeNB_ID* pvalue);
EXTERN int asn1Init_e2ap_GlobalngeNB_ID (e2ap_GlobalngeNB_ID* pvalue);
EXTERN void asn1Free_e2ap_GlobalngeNB_ID (OSCTXT* pctxt, e2ap_GlobalngeNB_ID* pvalue);
EXTERN void asn1Print_e2ap_GlobalngeNB_ID (const char* name, const e2ap_GlobalngeNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GlobalngeNB_ID (const char* name, e2ap_GlobalngeNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GlobalngeNB_ID (OSCTXT* pctxt, const char* name, const e2ap_GlobalngeNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_GlobalngeNB_ID (OSCTXT* pctxt, const e2ap_GlobalngeNB_ID* pSrcValue, e2ap_GlobalngeNB_ID* pDstValue);
// --- End of e2ap_GlobalngeNB_ID.h ---

// --- Begin of e2ap_GlobalNG_RANNode_ID.h ---


/*****************************************/
/*           GlobalNG-RANNode-ID                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.h.j2

// Các phần còn lại của template choice.h.j2
#define T_e2ap_GlobalNG_RANNode_ID_gNB  1
#define T_e2ap_GlobalNG_RANNode_ID_ng_eNB  2
#define T_e2ap_GlobalNG_RANNode_ID_extElem1 3

typedef struct e2ap_GlobalNG_RANNode_ID {
   OSINT32 t;  /* choice tag */
   union {
      /* t =  1 */
      e2ap_GlobalgNB_ID *gNB;
      /* t =  2 */
      e2ap_GlobalngeNB_ID *ng_eNB;
      /* t = 3*/
      ASN1OpenType *extElem1;  /* extension */
      
   } u;
} e2ap_GlobalNG_RANNode_ID;

EXTERN int asn1PE_e2ap_GlobalNG_RANNode_ID (OSCTXT* pctxt, e2ap_GlobalNG_RANNode_ID* pvalue);
EXTERN int asn1PD_e2ap_GlobalNG_RANNode_ID (OSCTXT* pctxt, e2ap_GlobalNG_RANNode_ID* pvalue);
EXTERN void asn1Print_e2ap_GlobalNG_RANNode_ID (const char* name, const e2ap_GlobalNG_RANNode_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GlobalNG_RANNode_ID (const char* name, e2ap_GlobalNG_RANNode_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GlobalNG_RANNode_ID (OSCTXT* pctxt, const char* name, const e2ap_GlobalNG_RANNode_ID* pvalue);
EXTERN int asn1Copy_e2ap_GlobalNG_RANNode_ID (OSCTXT* pctxt, const e2ap_GlobalNG_RANNode_ID* pSrcValue, e2ap_GlobalNG_RANNode_ID* pDstValue);
EXTERN int asn1Init_e2ap_GlobalNG_RANNode_ID (e2ap_GlobalNG_RANNode_ID* pvalue);
EXTERN void asn1Free_e2ap_GlobalNG_RANNode_ID (OSCTXT* pctxt, e2ap_GlobalNG_RANNode_ID* pvalue);

// --- End of e2ap_GlobalNG_RANNode_ID.h ---

// --- Begin of e2ap_E2nodeComponentInterfaceXn.h ---
/*****************************************/
/*           E2nodeComponentInterfaceXn                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentInterfaceXn {
      //not primitive
   e2ap_GlobalNG_RANNode_ID global_NG_RAN_Node_ID;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentInterfaceXn;

EXTERN int asn1PE_e2ap_E2nodeComponentInterfaceXn (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceXn* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentInterfaceXn (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceXn* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentInterfaceXn (e2ap_E2nodeComponentInterfaceXn* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentInterfaceXn (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceXn* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentInterfaceXn (const char* name, const e2ap_E2nodeComponentInterfaceXn* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentInterfaceXn (const char* name, e2ap_E2nodeComponentInterfaceXn* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentInterfaceXn (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentInterfaceXn* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentInterfaceXn (OSCTXT* pctxt, const e2ap_E2nodeComponentInterfaceXn* pSrcValue, e2ap_E2nodeComponentInterfaceXn* pDstValue);
// --- End of e2ap_E2nodeComponentInterfaceXn.h ---

// --- Begin of e2ap_GNB_CU_UP_ID.h ---
/*****************************************/
/*           GNB_CU_UP_ID                */
/*****************************************/
//6 mau interger
// mau 5 integer size(a...b) mau la procedurecode
typedef OSUINT64 e2ap_GNB_CU_UP_ID;
EXTERN int asn1PE_e2ap_GNB_CU_UP_ID (OSCTXT* pctxt, e2ap_GNB_CU_UP_ID value);
EXTERN int asn1PD_e2ap_GNB_CU_UP_ID (OSCTXT* pctxt, e2ap_GNB_CU_UP_ID* pvalue);
EXTERN int asn1Print_e2ap_GNB_CU_UP_ID (const char* name, const e2ap_GNB_CU_UP_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GNB_CU_UP_ID (const char* name, e2ap_GNB_CU_UP_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GNB_CU_UP_ID (OSCTXT* pctxt, const char* name, const e2ap_GNB_CU_UP_ID* pvalue);
EXTERN int asn1Init_e2ap_GNB_CU_UP_ID (e2ap_GNB_CU_UP_ID* pvalue);
EXTERN int asn1Free_e2ap_GNB_CU_UP_ID (OSCTXT* pctxt, e2ap_GNB_CU_UP_ID* pvalue);

// --- End of e2ap_GNB_CU_UP_ID.h ---

// --- Begin of e2ap_E2nodeComponentInterfaceE1.h ---
/*****************************************/
/*           E2nodeComponentInterfaceE1                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentInterfaceE1 {
      //not primitive
   e2ap_GNB_CU_UP_ID gNB_CU_UP_ID;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentInterfaceE1;

EXTERN int asn1PE_e2ap_E2nodeComponentInterfaceE1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceE1* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentInterfaceE1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceE1* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentInterfaceE1 (e2ap_E2nodeComponentInterfaceE1* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentInterfaceE1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceE1* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentInterfaceE1 (const char* name, const e2ap_E2nodeComponentInterfaceE1* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentInterfaceE1 (const char* name, e2ap_E2nodeComponentInterfaceE1* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentInterfaceE1 (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentInterfaceE1* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentInterfaceE1 (OSCTXT* pctxt, const e2ap_E2nodeComponentInterfaceE1* pSrcValue, e2ap_E2nodeComponentInterfaceE1* pDstValue);
// --- End of e2ap_E2nodeComponentInterfaceE1.h ---

// --- Begin of e2ap_GNB_DU_ID.h ---
/*****************************************/
/*           GNB_DU_ID                */
/*****************************************/
//6 mau interger
// mau 5 integer size(a...b) mau la procedurecode
typedef OSUINT64 e2ap_GNB_DU_ID;
EXTERN int asn1PE_e2ap_GNB_DU_ID (OSCTXT* pctxt, e2ap_GNB_DU_ID value);
EXTERN int asn1PD_e2ap_GNB_DU_ID (OSCTXT* pctxt, e2ap_GNB_DU_ID* pvalue);
EXTERN int asn1Print_e2ap_GNB_DU_ID (const char* name, const e2ap_GNB_DU_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GNB_DU_ID (const char* name, e2ap_GNB_DU_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GNB_DU_ID (OSCTXT* pctxt, const char* name, const e2ap_GNB_DU_ID* pvalue);
EXTERN int asn1Init_e2ap_GNB_DU_ID (e2ap_GNB_DU_ID* pvalue);
EXTERN int asn1Free_e2ap_GNB_DU_ID (OSCTXT* pctxt, e2ap_GNB_DU_ID* pvalue);

// --- End of e2ap_GNB_DU_ID.h ---

// --- Begin of e2ap_E2nodeComponentInterfaceF1.h ---
/*****************************************/
/*           E2nodeComponentInterfaceF1                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentInterfaceF1 {
      //not primitive
   e2ap_GNB_DU_ID gNB_DU_ID;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentInterfaceF1;

EXTERN int asn1PE_e2ap_E2nodeComponentInterfaceF1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceF1* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentInterfaceF1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceF1* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentInterfaceF1 (e2ap_E2nodeComponentInterfaceF1* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentInterfaceF1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceF1* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentInterfaceF1 (const char* name, const e2ap_E2nodeComponentInterfaceF1* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentInterfaceF1 (const char* name, e2ap_E2nodeComponentInterfaceF1* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentInterfaceF1 (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentInterfaceF1* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentInterfaceF1 (OSCTXT* pctxt, const e2ap_E2nodeComponentInterfaceF1* pSrcValue, e2ap_E2nodeComponentInterfaceF1* pDstValue);
// --- End of e2ap_E2nodeComponentInterfaceF1.h ---

// --- Begin of e2ap_NGENB_DU_ID.h ---
/*****************************************/
/*           NGENB_DU_ID                */
/*****************************************/
//6 mau interger
// mau 5 integer size(a...b) mau la procedurecode
typedef OSUINT64 e2ap_NGENB_DU_ID;
EXTERN int asn1PE_e2ap_NGENB_DU_ID (OSCTXT* pctxt, e2ap_NGENB_DU_ID value);
EXTERN int asn1PD_e2ap_NGENB_DU_ID (OSCTXT* pctxt, e2ap_NGENB_DU_ID* pvalue);
EXTERN int asn1Print_e2ap_NGENB_DU_ID (const char* name, const e2ap_NGENB_DU_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_NGENB_DU_ID (const char* name, e2ap_NGENB_DU_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_NGENB_DU_ID (OSCTXT* pctxt, const char* name, const e2ap_NGENB_DU_ID* pvalue);
EXTERN int asn1Init_e2ap_NGENB_DU_ID (e2ap_NGENB_DU_ID* pvalue);
EXTERN int asn1Free_e2ap_NGENB_DU_ID (OSCTXT* pctxt, e2ap_NGENB_DU_ID* pvalue);

// --- End of e2ap_NGENB_DU_ID.h ---

// --- Begin of e2ap_E2nodeComponentInterfaceW1.h ---
/*****************************************/
/*           E2nodeComponentInterfaceW1                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentInterfaceW1 {
      //not primitive
   e2ap_NGENB_DU_ID ng_eNB_DU_ID;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentInterfaceW1;

EXTERN int asn1PE_e2ap_E2nodeComponentInterfaceW1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceW1* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentInterfaceW1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceW1* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentInterfaceW1 (e2ap_E2nodeComponentInterfaceW1* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentInterfaceW1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceW1* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentInterfaceW1 (const char* name, const e2ap_E2nodeComponentInterfaceW1* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentInterfaceW1 (const char* name, e2ap_E2nodeComponentInterfaceW1* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentInterfaceW1 (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentInterfaceW1* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentInterfaceW1 (OSCTXT* pctxt, const e2ap_E2nodeComponentInterfaceW1* pSrcValue, e2ap_E2nodeComponentInterfaceW1* pDstValue);
// --- End of e2ap_E2nodeComponentInterfaceW1.h ---

// --- Begin of e2ap_MMEname.h ---
/* e2ap_MMEname.h */

//printable string
/*****************************************/
/*           MMEname                */
/*****************************************/


typedef const char* e2ap_MMEname;

EXTERN int asn1PE_e2ap_MMEname (OSCTXT* pctxt, e2ap_MMEname value);
EXTERN int asn1PD_e2ap_MMEname (OSCTXT* pctxt, e2ap_MMEname* ppvalue);
EXTERN void asn1Print_e2ap_MMEname (const char* name, e2ap_MMEname pvalue);
EXTERN int asn1PrtToStr_e2ap_MMEname (const char* name, e2ap_MMEname pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_MMEname (OSCTXT* pctxt, const char* name, e2ap_MMEname pvalue);
EXTERN int asn1Copy_e2ap_MMEname (OSCTXT* pctxt, e2ap_MMEname pSrcValue, e2ap_MMEname* pDstValue);
EXTERN void asn1Free_e2ap_MMEname (OSCTXT* pctxt, e2ap_MMEname pvalue);
EXTERN int asn1Init_e2ap_MMEname (e2ap_MMEname* pvalue);
// --- End of e2ap_MMEname.h ---

// --- Begin of e2ap_E2nodeComponentInterfaceS1.h ---
/*****************************************/
/*           E2nodeComponentInterfaceS1                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentInterfaceS1 {
      //not primitive
   e2ap_MMEname mme_name;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentInterfaceS1;

EXTERN int asn1PE_e2ap_E2nodeComponentInterfaceS1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceS1* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentInterfaceS1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceS1* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentInterfaceS1 (e2ap_E2nodeComponentInterfaceS1* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentInterfaceS1 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceS1* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentInterfaceS1 (const char* name, const e2ap_E2nodeComponentInterfaceS1* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentInterfaceS1 (const char* name, e2ap_E2nodeComponentInterfaceS1* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentInterfaceS1 (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentInterfaceS1* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentInterfaceS1 (OSCTXT* pctxt, const e2ap_E2nodeComponentInterfaceS1* pSrcValue, e2ap_E2nodeComponentInterfaceS1* pDstValue);
// --- End of e2ap_E2nodeComponentInterfaceS1.h ---

// --- Begin of e2ap_ENB_ID.h ---


/*****************************************/
/*           ENB-ID                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.h.j2
    // Nội dung của file .h cho primitive BIT STRING (SIZE (20))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_ENB_ID_macro_eNB_ID {
    OSUINT8 numbits;
    OSOCTET data[3];
} e2ap_ENB_ID_macro_eNB_ID;

EXTERN int asn1PE_e2ap_ENB_ID_macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_macro_eNB_ID* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID_macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_macro_eNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID_macro_eNB_ID (const char* name, e2ap_ENB_ID_macro_eNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID_macro_eNB_ID (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_macro_eNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID_macro_eNB_ID(OSCTXT* pctxt,const e2ap_ENB_ID_macro_eNB_ID* pSrcValue,  e2ap_ENB_ID_macro_eNB_ID* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_macro_eNB_ID(e2ap_ENB_ID_macro_eNB_ID* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID_macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_macro_eNB_ID* pvalue);

    // Nội dung của file .h cho primitive BIT STRING (SIZE (28))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_ENB_ID_home_eNB_ID {
    OSUINT8 numbits;
    OSOCTET data[4];
} e2ap_ENB_ID_home_eNB_ID;

EXTERN int asn1PE_e2ap_ENB_ID_home_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_home_eNB_ID* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID_home_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_home_eNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID_home_eNB_ID (const char* name, e2ap_ENB_ID_home_eNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID_home_eNB_ID (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_home_eNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID_home_eNB_ID(OSCTXT* pctxt,const e2ap_ENB_ID_home_eNB_ID* pSrcValue,  e2ap_ENB_ID_home_eNB_ID* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_home_eNB_ID(e2ap_ENB_ID_home_eNB_ID* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID_home_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_home_eNB_ID* pvalue);

    // Nội dung của file .h cho primitive BIT STRING (SIZE(18))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_ENB_ID_short_Macro_eNB_ID {
    OSUINT8 numbits;
    OSOCTET data[3];
} e2ap_ENB_ID_short_Macro_eNB_ID;

EXTERN int asn1PE_e2ap_ENB_ID_short_Macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_short_Macro_eNB_ID* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID_short_Macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_short_Macro_eNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID_short_Macro_eNB_ID (const char* name, e2ap_ENB_ID_short_Macro_eNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID_short_Macro_eNB_ID (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_short_Macro_eNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID_short_Macro_eNB_ID(OSCTXT* pctxt,const e2ap_ENB_ID_short_Macro_eNB_ID* pSrcValue,  e2ap_ENB_ID_short_Macro_eNB_ID* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_short_Macro_eNB_ID(e2ap_ENB_ID_short_Macro_eNB_ID* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID_short_Macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_short_Macro_eNB_ID* pvalue);

    // Nội dung của file .h cho primitive BIT STRING (SIZE(21))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 3
//mau NID ben xn  bitstring (n)
typedef struct e2ap_ENB_ID_long_Macro_eNB_ID {
    OSUINT8 numbits;
    OSOCTET data[3];
} e2ap_ENB_ID_long_Macro_eNB_ID;

EXTERN int asn1PE_e2ap_ENB_ID_long_Macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_long_Macro_eNB_ID* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID_long_Macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_long_Macro_eNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID_long_Macro_eNB_ID (const char* name, e2ap_ENB_ID_long_Macro_eNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID_long_Macro_eNB_ID (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_long_Macro_eNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID_long_Macro_eNB_ID(OSCTXT* pctxt,const e2ap_ENB_ID_long_Macro_eNB_ID* pSrcValue,  e2ap_ENB_ID_long_Macro_eNB_ID* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_long_Macro_eNB_ID(e2ap_ENB_ID_long_Macro_eNB_ID* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID_long_Macro_eNB_ID(OSCTXT* pctxt, e2ap_ENB_ID_long_Macro_eNB_ID* pvalue);


// Các phần còn lại của template choice.h.j2
#define T_e2ap_ENB_ID_macro_eNB_ID  1
#define T_e2ap_ENB_ID_home_eNB_ID  2
#define T_e2ap_ENB_ID_short_Macro_eNB_ID  3
#define T_e2ap_ENB_ID_long_Macro_eNB_ID  4
#define T_e2ap_ENB_ID_extElem1 5

typedef struct e2ap_ENB_ID {
   OSINT32 t;  /* choice tag */
   union {
      /* t =  1 */
      e2ap_ENB_ID_macro_eNB_ID *macro_eNB_ID;
      /* t =  2 */
      e2ap_ENB_ID_home_eNB_ID *home_eNB_ID;
      /* t =  3 */
      e2ap_ENB_ID_short_Macro_eNB_ID *short_Macro_eNB_ID;
      /* t =  4 */
      e2ap_ENB_ID_long_Macro_eNB_ID *long_Macro_eNB_ID;
      /* t = 5*/
      ASN1OpenType *extElem1;  /* extension */
      
   } u;
} e2ap_ENB_ID;

EXTERN int asn1PE_e2ap_ENB_ID (OSCTXT* pctxt, e2ap_ENB_ID* pvalue);
EXTERN int asn1PD_e2ap_ENB_ID (OSCTXT* pctxt, e2ap_ENB_ID* pvalue);
EXTERN void asn1Print_e2ap_ENB_ID (const char* name, const e2ap_ENB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENB_ID (const char* name, e2ap_ENB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENB_ID (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID* pvalue);
EXTERN int asn1Copy_e2ap_ENB_ID (OSCTXT* pctxt, const e2ap_ENB_ID* pSrcValue, e2ap_ENB_ID* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID (e2ap_ENB_ID* pvalue);
EXTERN void asn1Free_e2ap_ENB_ID (OSCTXT* pctxt, e2ap_ENB_ID* pvalue);

// --- End of e2ap_ENB_ID.h ---

// --- Begin of e2ap_GlobalENB_ID.h ---
/*****************************************/
/*           GlobalENB_ID                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_GlobalENB_ID {
      //not primitive
   e2ap_PLMN_Identity pLMN_Identity;
      //not primitive
   e2ap_ENB_ID eNB_ID;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_GlobalENB_ID;

EXTERN int asn1PE_e2ap_GlobalENB_ID (OSCTXT* pctxt, e2ap_GlobalENB_ID* pvalue);
EXTERN int asn1PD_e2ap_GlobalENB_ID (OSCTXT* pctxt, e2ap_GlobalENB_ID* pvalue);
EXTERN int asn1Init_e2ap_GlobalENB_ID (e2ap_GlobalENB_ID* pvalue);
EXTERN void asn1Free_e2ap_GlobalENB_ID (OSCTXT* pctxt, e2ap_GlobalENB_ID* pvalue);
EXTERN void asn1Print_e2ap_GlobalENB_ID (const char* name, const e2ap_GlobalENB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GlobalENB_ID (const char* name, e2ap_GlobalENB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GlobalENB_ID (OSCTXT* pctxt, const char* name, const e2ap_GlobalENB_ID* pvalue);
EXTERN int asn1Copy_e2ap_GlobalENB_ID (OSCTXT* pctxt, const e2ap_GlobalENB_ID* pSrcValue, e2ap_GlobalENB_ID* pDstValue);
// --- End of e2ap_GlobalENB_ID.h ---

// --- Begin of e2ap_ENGNB_ID.h ---


/*****************************************/
/*           ENGNB-ID                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.h.j2
    // Nội dung của file .h cho primitive BIT STRING (SIZE (22..32))
    /* bitstring intergrate header file */
 //metadata.parsed.primitive_id == 4
//type 4  mau la datatrafficresource bitstring (a..b)
typedef struct e2ap_ENGNB_ID_gNB_ID {
    OSUINT8 numbits;
    OSOCTET data[4];
} e2ap_ENGNB_ID_gNB_ID;
EXTERN int asn1PE_e2ap_ENGNB_ID_gNB_ID(OSCTXT* pctxt, e2ap_ENGNB_ID_gNB_ID* pvalue);
EXTERN int asn1PD_e2ap_ENGNB_ID_gNB_ID(OSCTXT* pctxt, e2ap_ENGNB_ID_gNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENGNB_ID_gNB_ID (const char* name, e2ap_ENGNB_ID_gNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENGNB_ID_gNB_ID (OSCTXT* pctxt, const char* name, const e2ap_ENGNB_ID_gNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_ENGNB_ID_gNB_ID(OSCTXT* pctxt,const e2ap_ENGNB_ID_gNB_ID* pSrcValue,  e2ap_ENGNB_ID_gNB_ID* pDstValue);
EXTERN int asn1Init_e2ap_ENGNB_ID_gNB_ID(e2ap_ENGNB_ID_gNB_ID* pvalue);
EXTERN void asn1Free_e2ap_ENGNB_ID_gNB_ID(OSCTXT* pctxt, e2ap_ENGNB_ID_gNB_ID* pvalue);


// Các phần còn lại của template choice.h.j2
#define T_e2ap_ENGNB_ID_gNB_ID  1
#define T_e2ap_ENGNB_ID_extElem1 2

typedef struct e2ap_ENGNB_ID {
   OSINT32 t;  /* choice tag */
   union {
      /* t =  1 */
      e2ap_ENGNB_ID_gNB_ID *gNB_ID;
      /* t = 2*/
      ASN1OpenType *extElem1;  /* extension */
      
   } u;
} e2ap_ENGNB_ID;

EXTERN int asn1PE_e2ap_ENGNB_ID (OSCTXT* pctxt, e2ap_ENGNB_ID* pvalue);
EXTERN int asn1PD_e2ap_ENGNB_ID (OSCTXT* pctxt, e2ap_ENGNB_ID* pvalue);
EXTERN void asn1Print_e2ap_ENGNB_ID (const char* name, const e2ap_ENGNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_ENGNB_ID (const char* name, e2ap_ENGNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ENGNB_ID (OSCTXT* pctxt, const char* name, const e2ap_ENGNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_ENGNB_ID (OSCTXT* pctxt, const e2ap_ENGNB_ID* pSrcValue, e2ap_ENGNB_ID* pDstValue);
EXTERN int asn1Init_e2ap_ENGNB_ID (e2ap_ENGNB_ID* pvalue);
EXTERN void asn1Free_e2ap_ENGNB_ID (OSCTXT* pctxt, e2ap_ENGNB_ID* pvalue);

// --- End of e2ap_ENGNB_ID.h ---

// --- Begin of e2ap_GlobalenGNB_ID.h ---
/*****************************************/
/*           GlobalenGNB_ID                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_GlobalenGNB_ID {
      //not primitive
   e2ap_PLMN_Identity pLMN_Identity;
      //not primitive
   e2ap_ENGNB_ID gNB_ID;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_GlobalenGNB_ID;

EXTERN int asn1PE_e2ap_GlobalenGNB_ID (OSCTXT* pctxt, e2ap_GlobalenGNB_ID* pvalue);
EXTERN int asn1PD_e2ap_GlobalenGNB_ID (OSCTXT* pctxt, e2ap_GlobalenGNB_ID* pvalue);
EXTERN int asn1Init_e2ap_GlobalenGNB_ID (e2ap_GlobalenGNB_ID* pvalue);
EXTERN void asn1Free_e2ap_GlobalenGNB_ID (OSCTXT* pctxt, e2ap_GlobalenGNB_ID* pvalue);
EXTERN void asn1Print_e2ap_GlobalenGNB_ID (const char* name, const e2ap_GlobalenGNB_ID* pvalue);
EXTERN int asn1PrtToStr_e2ap_GlobalenGNB_ID (const char* name, e2ap_GlobalenGNB_ID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_GlobalenGNB_ID (OSCTXT* pctxt, const char* name, const e2ap_GlobalenGNB_ID* pvalue);
EXTERN int asn1Copy_e2ap_GlobalenGNB_ID (OSCTXT* pctxt, const e2ap_GlobalenGNB_ID* pSrcValue, e2ap_GlobalenGNB_ID* pDstValue);
// --- End of e2ap_GlobalenGNB_ID.h ---

// --- Begin of e2ap_E2nodeComponentInterfaceX2.h ---
/*****************************************/
/*           E2nodeComponentInterfaceX2                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentInterfaceX2 {
      //not primitive
   e2ap_GlobalENB_ID global_eNB_ID;
   OSBOOL m_global_eNB_IDPresent;      //not primitive
   e2ap_GlobalenGNB_ID global_en_gNB_ID;
   OSBOOL m_global_en_gNB_IDPresent;
   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentInterfaceX2;

EXTERN int asn1PE_e2ap_E2nodeComponentInterfaceX2 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceX2* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentInterfaceX2 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceX2* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentInterfaceX2 (e2ap_E2nodeComponentInterfaceX2* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentInterfaceX2 (OSCTXT* pctxt, e2ap_E2nodeComponentInterfaceX2* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentInterfaceX2 (const char* name, const e2ap_E2nodeComponentInterfaceX2* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentInterfaceX2 (const char* name, e2ap_E2nodeComponentInterfaceX2* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentInterfaceX2 (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentInterfaceX2* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentInterfaceX2 (OSCTXT* pctxt, const e2ap_E2nodeComponentInterfaceX2* pSrcValue, e2ap_E2nodeComponentInterfaceX2* pDstValue);
// --- End of e2ap_E2nodeComponentInterfaceX2.h ---

// --- Begin of e2ap_E2nodeComponentID.h ---


/*****************************************/
/*           E2nodeComponentID                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.h.j2

// Các phần còn lại của template choice.h.j2
#define T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeNG  1
#define T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeXn  2
#define T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeE1  3
#define T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeF1  4
#define T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeW1  5
#define T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeS1  6
#define T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeX2  7
#define T_e2ap_E2nodeComponentID_extElem1 8

typedef struct e2ap_E2nodeComponentID {
   OSINT32 t;  /* choice tag */
   union {
      /* t =  1 */
      e2ap_E2nodeComponentInterfaceNG *e2nodeComponentInterfaceTypeNG;
      /* t =  2 */
      e2ap_E2nodeComponentInterfaceXn *e2nodeComponentInterfaceTypeXn;
      /* t =  3 */
      e2ap_E2nodeComponentInterfaceE1 *e2nodeComponentInterfaceTypeE1;
      /* t =  4 */
      e2ap_E2nodeComponentInterfaceF1 *e2nodeComponentInterfaceTypeF1;
      /* t =  5 */
      e2ap_E2nodeComponentInterfaceW1 *e2nodeComponentInterfaceTypeW1;
      /* t =  6 */
      e2ap_E2nodeComponentInterfaceS1 *e2nodeComponentInterfaceTypeS1;
      /* t =  7 */
      e2ap_E2nodeComponentInterfaceX2 *e2nodeComponentInterfaceTypeX2;
      /* t = 8*/
      ASN1OpenType *extElem1;  /* extension */
      
   } u;
} e2ap_E2nodeComponentID;

EXTERN int asn1PE_e2ap_E2nodeComponentID (OSCTXT* pctxt, e2ap_E2nodeComponentID* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentID (OSCTXT* pctxt, e2ap_E2nodeComponentID* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentID (const char* name, const e2ap_E2nodeComponentID* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentID (const char* name, e2ap_E2nodeComponentID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentID (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentID* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentID (OSCTXT* pctxt, const e2ap_E2nodeComponentID* pSrcValue, e2ap_E2nodeComponentID* pDstValue);
EXTERN int asn1Init_e2ap_E2nodeComponentID (e2ap_E2nodeComponentID* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentID (OSCTXT* pctxt, e2ap_E2nodeComponentID* pvalue);

// --- End of e2ap_E2nodeComponentID.h ---

// --- Begin of e2ap_E2nodeComponentConfigurationAck.h ---
/*****************************************/
/*           E2nodeComponentConfigurationAck                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2
    // Nội dung của file .h cho primitive ENUMERATED
    //enumerated intergrate
//metadata.parsed.primitive_id == 13

typedef enum{
    e2ap_success = 0,   
    e2ap_failure = 1   
}e2apE2nodeComponentConfigurationAck_updateOutcome_Root;

typedef OSUINT32 e2ap_E2nodeComponentConfigurationAck_updateOutcome;


/* Encode / Decode */
EXTERN int asn1PE_e2ap_E2nodeComponentConfigurationAck_updateOutcome (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck_updateOutcome value);
EXTERN int asn1PD_e2ap_E2nodeComponentConfigurationAck_updateOutcome (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_E2nodeComponentConfigurationAck_updateOutcome (const char* name, const e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfigurationAck_updateOutcome (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfigurationAck_updateOutcome (const char* name,e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTAB[];
#define e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTABSIZE 2

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_E2nodeComponentConfigurationAck_updateOutcome_ToString (OSUINT32 value);
EXTERN int e2ap_E2nodeComponentConfigurationAck_updateOutcome_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue);
EXTERN int e2ap_E2nodeComponentConfigurationAck_updateOutcome_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_E2nodeComponentConfigurationAck_updateOutcome (e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue);

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentConfigurationAck {
      //primitive
   e2ap_E2nodeComponentConfigurationAck_updateOutcome updateOutcome;
      //not primitive
   e2ap_Cause failureCause;
   OSBOOL m_failureCausePresent;
   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentConfigurationAck;

EXTERN int asn1PE_e2ap_E2nodeComponentConfigurationAck (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentConfigurationAck (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentConfigurationAck (e2ap_E2nodeComponentConfigurationAck* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentConfigurationAck (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentConfigurationAck (const char* name, const e2ap_E2nodeComponentConfigurationAck* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfigurationAck (const char* name, e2ap_E2nodeComponentConfigurationAck* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfigurationAck (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfigurationAck* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentConfigurationAck (OSCTXT* pctxt, const e2ap_E2nodeComponentConfigurationAck* pSrcValue, e2ap_E2nodeComponentConfigurationAck* pDstValue);
// --- End of e2ap_E2nodeComponentConfigurationAck.h ---

// --- Begin of e2ap_E2nodeComponentConfigAdditionAck_Item.h ---
/*****************************************/
/*           E2nodeComponentConfigAdditionAck_Item                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentConfigAdditionAck_Item {
      //not primitive
   e2ap_E2nodeComponentInterfaceType e2nodeComponentInterfaceType;
      //not primitive
   e2ap_E2nodeComponentID e2nodeComponentID;
      //not primitive
   e2ap_E2nodeComponentConfigurationAck e2nodeComponentConfigurationAck;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentConfigAdditionAck_Item;

EXTERN int asn1PE_e2ap_E2nodeComponentConfigAdditionAck_Item (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_Item* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentConfigAdditionAck_Item (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_Item* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentConfigAdditionAck_Item (e2ap_E2nodeComponentConfigAdditionAck_Item* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentConfigAdditionAck_Item (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_Item* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentConfigAdditionAck_Item (const char* name, const e2ap_E2nodeComponentConfigAdditionAck_Item* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfigAdditionAck_Item (const char* name, e2ap_E2nodeComponentConfigAdditionAck_Item* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfigAdditionAck_Item (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfigAdditionAck_Item* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentConfigAdditionAck_Item (OSCTXT* pctxt, const e2ap_E2nodeComponentConfigAdditionAck_Item* pSrcValue, e2ap_E2nodeComponentConfigAdditionAck_Item* pDstValue);
// --- End of e2ap_E2nodeComponentConfigAdditionAck_Item.h ---

// --- Begin of e2ap_E2nodeComponentConfigAdditionAck_ItemIEs.h ---
/*****************************************/
/*           E2nodeComponentConfigAdditionAck_ItemIEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs_id_E2nodeComponentConfigAdditionAck_Item 
 
} e2ap_E2nodeComponentConfigAdditionAck_ItemIEs_TVALUE;

/* ie thường */
typedef struct EXTERN e2ap_E2nodeComponentConfigAdditionAck_ItemIEs {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2nodeComponentConfigAdditionAck_ItemIEs_TVALUE t;
      union {
         e2ap_E2nodeComponentConfigAdditionAck_Item * _e2apE2nodeComponentConfigAdditionAck_ItemIEs_id_E2nodeComponentConfigAdditionAck_Item;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2nodeComponentConfigAdditionAck_ItemIEs;

EXTERN int  asn1PE_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_ItemIEs* pvalue);
EXTERN int  asn1PD_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_ItemIEs* pvalue);
EXTERN void asn1Init_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs (e2ap_E2nodeComponentConfigAdditionAck_ItemIEs* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_ItemIEs* pvalue);
EXTERN int  asn1PrtToStr_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs (const char * name, e2ap_E2nodeComponentConfigAdditionAck_ItemIEs* pvalue, char * buffer, OSSIZE bufSize);
 


// --- End of e2ap_E2nodeComponentConfigAdditionAck_ItemIEs.h ---

// --- Begin of e2ap_E2nodeComponentConfigAdditionAck_List.h ---
/*****************************************/
/*           E2nodeComponentConfigAdditionAck_List                */
/*****************************************/
//seq_of_single_container


/*List of ... ITEM*/
typedef OSRTDList e2ap_E2nodeComponentConfigAdditionAck_List;

EXTERN int asn1PE_e2ap_E2nodeComponentConfigAdditionAck_List (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_List* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentConfigAdditionAck_List (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_List* ppvalue);
EXTERN void asn1Init_e2ap_E2nodeComponentConfigAdditionAck_List (e2ap_E2nodeComponentConfigAdditionAck_List* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentConfigAdditionAck_List (OSCTXT* pctxt, e2ap_E2nodeComponentConfigAdditionAck_List* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfigAdditionAck_List (const char* name, e2ap_E2nodeComponentConfigAdditionAck_List* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1Copy_e2ap_E2nodeComponentConfigAdditionAck_List (OSCTXT* pctxt, const e2ap_E2nodeComponentConfigAdditionAck_List* pSrcValue, e2ap_E2nodeComponentConfigAdditionAck_List* pDstValue);
EXTERN void asn1Print_e2ap_E2nodeComponentConfigAdditionAck_List (const char *name, const e2ap_E2nodeComponentConfigAdditionAck_List* pvalue);
// --- End of e2ap_E2nodeComponentConfigAdditionAck_List.h ---

// --- Begin of e2ap_E2setupResponseIEs.h ---
/*****************************************/
/*           E2setupResponseIEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_TransactionID,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_GlobalRIC_ID,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_RANfunctionsAccepted,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_RANfunctionsRejected,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_E2nodeComponentConfigAdditionAck,
 
   T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_Extended_RANNodeName_
 
} e2ap_E2setupResponseIEs_TVALUE;

 /* ie là con của msg*/
typedef struct EXTERN e2ap_E2setupResponse_protocolIEs_element {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2setupResponseIEs_TVALUE t;
      union {
        /*
        *id: id-TransactionID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_TransactionID * _e2apE2setupResponseIEs_id_TransactionID;
        /*
        *id: id-GlobalRIC_ID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_GlobalRIC_ID * _e2apE2setupResponseIEs_id_GlobalRIC_ID;
        /*
        *id: id-RANfunctionsID_List
        *criticality: reject
        *presence: optional
        */
         e2ap_RANfunctionsID_List * _e2apE2setupResponseIEs_id_RANfunctionsAccepted;
        /*
        *id: id-RANfunctionsIDcause_List
        *criticality: reject
        *presence: optional
        */
         e2ap_RANfunctionsIDcause_List * _e2apE2setupResponseIEs_id_RANfunctionsRejected;
        /*
        *id: id-E2nodeComponentConfigAdditionAck_List
        *criticality: reject
        *presence: mandatory
        */
         e2ap_E2nodeComponentConfigAdditionAck_List * _e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2setupResponse_protocolIEs_element;

EXTERN int asn1PE_e2ap_E2setupResponse_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs_element* pvalue);
EXTERN int asn1PD_e2ap_E2setupResponse_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs_element* pvalue);
EXTERN int asn1Init_e2ap_E2setupResponse_protocolIEs_element (e2ap_E2setupResponse_protocolIEs_element* pvalue);
EXTERN void asn1Free_e2ap_E2setupResponse_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs_element* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2setupResponse_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs_element* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2setupResponse_protocolIEs_element (const char * name, e2ap_E2setupResponse_protocolIEs_element* pvalue, char * buffer, OSSIZE bufSize);

 


// --- End of e2ap_E2setupResponseIEs.h ---

// --- Begin of e2ap_E2setupResponse.h ---
/*****************************************/
/*           E2setupResponse                */
/*****************************************/
//2_container.h
/* 1. xxx_ProtocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_E2setupResponse_ProtocolIE;
EXTERN int asn1PE_e2ap_E2setupResponse_protocolIEs (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_E2setupResponse_protocolIEs (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_E2setupResponse_protocolIEs (e2ap_E2setupResponse_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_E2setupResponse_protocolIEs (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_E2setupResponse_protocolIEs (OSCTXT* pctxt, e2ap_E2setupResponse_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apE2setupResponse_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_E2setupResponse_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2setupResponse_protocolIEs (const char* name, e2ap_E2setupResponse_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . E2setupResponse -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_E2setupResponse {
    e2ap_E2setupResponse_ProtocolIE protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_E2setupResponse;

EXTERN int asn1PE_e2ap_E2setupResponse (OSCTXT* pctxt, e2ap_E2setupResponse* pvalue);
EXTERN int asn1PD_e2ap_E2setupResponse (OSCTXT* pctxt, e2ap_E2setupResponse* pvalue);
EXTERN int asn1Init_e2ap_E2setupResponse (e2ap_E2setupResponse* pvalue);
EXTERN void asn1Free_e2ap_E2setupResponse (OSCTXT* pctxt, e2ap_E2setupResponse* pvalue);
EXTERN void asn1Print_e2ap_E2setupResponse (const char* name, const e2ap_E2setupResponse* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2setupResponse (const char* name, e2ap_E2setupResponse* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2setupResponse (OSCTXT* pctxt, const char* name, const e2ap_E2setupResponse* pvalue);
EXTERN int asn1Copy_e2ap_E2setupResponse (OSCTXT* pctxt, const e2ap_E2setupResponse* pSrcValue, e2ap_E2setupResponse* pDstValue);
// --- End of e2ap_E2setupResponse.h ---

#endif
