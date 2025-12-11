
#ifndef OUTPUT_MAIN_H
#define OUTPUT_MAIN_H
#include "stub.h"

// --- Begin of doc/header.h ---
//======================E2AP.h========================//

// --- End of doc/header.h ---

// --- Begin of e2ap_RICrequestID.h ---
/*****************************************/
/*           RICrequestID                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2
    // Nội dung của file .h cho primitive INTEGER (0..65535)
     /*****************************************/
/*           ricRequestorID                */
/*****************************************/
//interger intergrate
 //metadata.parsed.primitive_id == 6
// mau integer size(a...b) mau la procedurecode
typedef OSUINT16 e2ap_RICrequestID_ricRequestorID;
EXTERN int asn1PE_e2ap_RICrequestID_ricRequestorID (OSCTXT* pctxt, e2ap_RICrequestID_ricRequestorID value);
EXTERN int asn1PD_e2ap_RICrequestID_ricRequestorID (OSCTXT* pctxt, e2ap_RICrequestID_ricRequestorID* pvalue);
EXTERN int asn1Print_e2ap_RICrequestID_ricRequestorID (const char* name, const e2ap_RICrequestID_ricRequestorID* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICrequestID_ricRequestorID (const char* name, e2ap_RICrequestID_ricRequestorID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICrequestID_ricRequestorID (OSCTXT* pctxt, const char* name, const e2ap_RICrequestID_ricRequestorID* pvalue);
EXTERN int asn1Init_e2ap_RICrequestID_ricRequestorID (e2ap_RICrequestID_ricRequestorID* pvalue);
EXTERN int asn1Free_e2ap_RICrequestID_ricRequestorID (OSCTXT* pctxt, e2ap_RICrequestID_ricRequestorID* pvalue);

    // Nội dung của file .h cho primitive INTEGER (0..65535)
     /*****************************************/
/*           ricInstanceID                */
/*****************************************/
//interger intergrate
 //metadata.parsed.primitive_id == 6
// mau integer size(a...b) mau la procedurecode
typedef OSUINT16 e2ap_RICrequestID_ricInstanceID;
EXTERN int asn1PE_e2ap_RICrequestID_ricInstanceID (OSCTXT* pctxt, e2ap_RICrequestID_ricInstanceID value);
EXTERN int asn1PD_e2ap_RICrequestID_ricInstanceID (OSCTXT* pctxt, e2ap_RICrequestID_ricInstanceID* pvalue);
EXTERN int asn1Print_e2ap_RICrequestID_ricInstanceID (const char* name, const e2ap_RICrequestID_ricInstanceID* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICrequestID_ricInstanceID (const char* name, e2ap_RICrequestID_ricInstanceID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICrequestID_ricInstanceID (OSCTXT* pctxt, const char* name, const e2ap_RICrequestID_ricInstanceID* pvalue);
EXTERN int asn1Init_e2ap_RICrequestID_ricInstanceID (e2ap_RICrequestID_ricInstanceID* pvalue);
EXTERN int asn1Free_e2ap_RICrequestID_ricInstanceID (OSCTXT* pctxt, e2ap_RICrequestID_ricInstanceID* pvalue);


// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_RICrequestID {
      //primitive
   e2ap_RICrequestID_ricRequestorID ricRequestorID;
      //primitive
   e2ap_RICrequestID_ricInstanceID ricInstanceID;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_RICrequestID;

EXTERN int asn1PE_e2ap_RICrequestID (OSCTXT* pctxt, e2ap_RICrequestID* pvalue);
EXTERN int asn1PD_e2ap_RICrequestID (OSCTXT* pctxt, e2ap_RICrequestID* pvalue);
EXTERN int asn1Init_e2ap_RICrequestID (e2ap_RICrequestID* pvalue);
EXTERN void asn1Free_e2ap_RICrequestID (OSCTXT* pctxt, e2ap_RICrequestID* pvalue);
EXTERN void asn1Print_e2ap_RICrequestID (const char* name, const e2ap_RICrequestID* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICrequestID (const char* name, e2ap_RICrequestID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICrequestID (OSCTXT* pctxt, const char* name, const e2ap_RICrequestID* pvalue);
EXTERN int asn1Copy_e2ap_RICrequestID (OSCTXT* pctxt, const e2ap_RICrequestID* pSrcValue, e2ap_RICrequestID* pDstValue);
// --- End of e2ap_RICrequestID.h ---

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

// --- Begin of e2ap_CauseRICrequest.h ---
/******************************************************/
/*                                                    */
/*    CauseRICrequest                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_CauseRICrequest_ran_function_id_invalid = 0,
    e2ap_CauseRICrequest_action_not_supported = 1,
    e2ap_CauseRICrequest_excessive_actions = 2,
    e2ap_CauseRICrequest_duplicate_action = 3,
    e2ap_CauseRICrequest_duplicate_event_trigger = 4,
    e2ap_CauseRICrequest_function_resource_limit = 5,
    e2ap_CauseRICrequest_request_id_unknown = 6,
    e2ap_CauseRICrequest_inconsistent_action_subsequent_action_sequence = 7,
    e2ap_CauseRICrequest_control_message_invalid = 8,
    e2ap_CauseRICrequest_ric_call_process_id_invalid = 9,
    e2ap_CauseRICrequest_control_timer_expired = 10,
    e2ap_CauseRICrequest_control_failed_to_execute = 11,
    e2ap_CauseRICrequest_system_not_ready = 12,
    e2ap_CauseRICrequest_unspecified = 13,
    e2ap_CauseRICrequest_ric_subscription_end_time_expired = 14,
    e2ap_CauseRICrequest_ric_subscription_end_time_invalid = 15,
    e2ap_CauseRICrequest_duplicate_ric_request_id = 16,
    e2ap_CauseRICrequest_eventTriggerNotSupported = 17,
    e2ap_CauseRICrequest_requested_information_unavailable = 18,
    e2ap_CauseRICrequest_invalid_information_request = 19
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
    e2ap_CauseRICservice_ran_function_not_supported = 0,
    e2ap_CauseRICservice_excessive_functions = 1,
    e2ap_CauseRICservice_ric_resource_limit = 2
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
    e2ap_CauseE2node_e2node_component_unknown = 0
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
    e2ap_CauseTransport_unspecified = 0,
    e2ap_CauseTransport_transport_resource_unavailable = 1
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
    e2ap_CauseProtocol_transfer_syntax_error = 0,
    e2ap_CauseProtocol_abstract_syntax_error_reject = 1,
    e2ap_CauseProtocol_abstract_syntax_error_ignore_and_notify = 2,
    e2ap_CauseProtocol_message_not_compatible_with_receiver_state = 3,
    e2ap_CauseProtocol_semantic_error = 4,
    e2ap_CauseProtocol_abstract_syntax_error_falsely_constructed_message = 5,
    e2ap_CauseProtocol_unspecified = 6
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
    e2ap_CauseMisc_control_processing_overload = 0,
    e2ap_CauseMisc_hardware_failure = 1,
    e2ap_CauseMisc_om_intervention = 2,
    e2ap_CauseMisc_unspecified = 3
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

// --- Begin of e2ap_ProcedureCode.h ---
/*****************************************/
/*           ProcedureCode                */
/*****************************************/
//6 mau interger
// mau 5 integer size(a...b) mau la procedurecode
typedef OSUINT8 e2ap_ProcedureCode;
EXTERN int asn1PE_e2ap_ProcedureCode (OSCTXT* pctxt, e2ap_ProcedureCode value);
EXTERN int asn1PD_e2ap_ProcedureCode (OSCTXT* pctxt, e2ap_ProcedureCode* pvalue);
EXTERN int asn1Print_e2ap_ProcedureCode (const char* name, const e2ap_ProcedureCode* pvalue);
EXTERN int asn1PrtToStr_e2ap_ProcedureCode (const char* name, e2ap_ProcedureCode* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_ProcedureCode (OSCTXT* pctxt, const char* name, const e2ap_ProcedureCode* pvalue);
EXTERN int asn1Init_e2ap_ProcedureCode (e2ap_ProcedureCode* pvalue);
EXTERN int asn1Free_e2ap_ProcedureCode (OSCTXT* pctxt, e2ap_ProcedureCode* pvalue);

// --- End of e2ap_ProcedureCode.h ---

// --- Begin of e2ap_TriggeringMessage.h ---
/******************************************************/
/*                                                    */
/*    TriggeringMessage                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_TriggeringMessage_initiating_message = 0,
    e2ap_TriggeringMessage_successful_outcome = 1,
    e2ap_TriggeringMessage_unsuccessfull_outcome = 2
} e2ap_TriggeringMessage_Root;

typedef OSUINT32 e2ap_TriggeringMessage;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_TriggeringMessage (OSCTXT* pctxt, e2ap_TriggeringMessage value);
EXTERN int asn1PD_e2ap_TriggeringMessage (OSCTXT* pctxt, e2ap_TriggeringMessage* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_TriggeringMessage (const char* name, const e2ap_TriggeringMessage* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_TriggeringMessage (OSCTXT* pctxt, const char* name, const e2ap_TriggeringMessage* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_TriggeringMessage (const char* name,e2ap_TriggeringMessage* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_TriggeringMessage_ENUMTAB[];
#define e2ap_TriggeringMessage_ENUMTABSIZE 3

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_TriggeringMessage_ToString (OSUINT32 value);
EXTERN int e2ap_TriggeringMessage_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_TriggeringMessage* pvalue);
EXTERN int e2ap_TriggeringMessage_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_TriggeringMessage* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_TriggeringMessage (e2ap_TriggeringMessage* pvalue);
// --- End of e2ap_TriggeringMessage.h ---

// --- Begin of e2ap_Criticality.h ---
/******************************************************/
/*                                                    */
/*    Criticality                             */
/*                                                    */
/*******************************************************/
//enumerated

typedef enum {
    e2ap_Criticality_reject = 0,
    e2ap_Criticality_ignore = 1,
    e2ap_Criticality_notify = 2
} e2ap_Criticality_Root;

typedef OSUINT32 e2ap_Criticality;

/* Encode / Decode */
EXTERN int asn1PE_e2ap_Criticality (OSCTXT* pctxt, e2ap_Criticality value);
EXTERN int asn1PD_e2ap_Criticality (OSCTXT* pctxt, e2ap_Criticality* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_Criticality (const char* name, const e2ap_Criticality* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_Criticality (OSCTXT* pctxt, const char* name, const e2ap_Criticality* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_Criticality (const char* name,e2ap_Criticality* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_Criticality_ENUMTAB[];
#define e2ap_Criticality_ENUMTABSIZE 3

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_Criticality_ToString (OSUINT32 value);
EXTERN int e2ap_Criticality_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_Criticality* pvalue);
EXTERN int e2ap_Criticality_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_Criticality* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_Criticality (e2ap_Criticality* pvalue);
// --- End of e2ap_Criticality.h ---

/************************************/
/* File .h missing: e2ap_SEQUENCE.h */
/************************************/

// --- Begin of e2ap_CriticalityDiagnostics_IE_List.h ---
/*****************************************/
/*           CriticalityDiagnostics_IE_List                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_CriticalityDiagnostics_IE_List {
      //not primitive
   e2ap_Criticality iECriticality;
      //not primitive
   e2ap_ProtocolIE_ID iE_ID;
      //not primitive
   e2ap_TypeOfError typeOfError;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_CriticalityDiagnostics_IE_List;

EXTERN int asn1PE_e2ap_CriticalityDiagnostics_IE_List (OSCTXT* pctxt, e2ap_CriticalityDiagnostics_IE_List* pvalue);
EXTERN int asn1PD_e2ap_CriticalityDiagnostics_IE_List (OSCTXT* pctxt, e2ap_CriticalityDiagnostics_IE_List* pvalue);
EXTERN int asn1Init_e2ap_CriticalityDiagnostics_IE_List (e2ap_CriticalityDiagnostics_IE_List* pvalue);
EXTERN void asn1Free_e2ap_CriticalityDiagnostics_IE_List (OSCTXT* pctxt, e2ap_CriticalityDiagnostics_IE_List* pvalue);
EXTERN void asn1Print_e2ap_CriticalityDiagnostics_IE_List (const char* name, const e2ap_CriticalityDiagnostics_IE_List* pvalue);
EXTERN int asn1PrtToStr_e2ap_CriticalityDiagnostics_IE_List (const char* name, e2ap_CriticalityDiagnostics_IE_List* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_CriticalityDiagnostics_IE_List (OSCTXT* pctxt, const char* name, const e2ap_CriticalityDiagnostics_IE_List* pvalue);
EXTERN int asn1Copy_e2ap_CriticalityDiagnostics_IE_List (OSCTXT* pctxt, const e2ap_CriticalityDiagnostics_IE_List* pSrcValue, e2ap_CriticalityDiagnostics_IE_List* pDstValue);
// --- End of e2ap_CriticalityDiagnostics_IE_List.h ---

// --- Begin of e2ap_CriticalityDiagnostics.h ---
/*****************************************/
/*           CriticalityDiagnostics                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2

// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_CriticalityDiagnostics {
      //not primitive
   e2ap_ProcedureCode procedureCode;
   OSBOOL m_procedureCodePresent;      //not primitive
   e2ap_TriggeringMessage triggeringMessage;
   OSBOOL m_triggeringMessagePresent;      //not primitive
   e2ap_Criticality procedureCriticality;
   OSBOOL m_procedureCriticalityPresent;      //not primitive
   e2ap_RICrequestID ricRequestorID;
   OSBOOL m_ricRequestorIDPresent;      //not primitive
   e2ap_CriticalityDiagnostics_IE_List iEsCriticalityDiagnostics;
   OSBOOL m_iEsCriticalityDiagnosticsPresent;
   OSRTDList extElem1;  /* Extension elements */
} e2ap_CriticalityDiagnostics;

EXTERN int asn1PE_e2ap_CriticalityDiagnostics (OSCTXT* pctxt, e2ap_CriticalityDiagnostics* pvalue);
EXTERN int asn1PD_e2ap_CriticalityDiagnostics (OSCTXT* pctxt, e2ap_CriticalityDiagnostics* pvalue);
EXTERN int asn1Init_e2ap_CriticalityDiagnostics (e2ap_CriticalityDiagnostics* pvalue);
EXTERN void asn1Free_e2ap_CriticalityDiagnostics (OSCTXT* pctxt, e2ap_CriticalityDiagnostics* pvalue);
EXTERN void asn1Print_e2ap_CriticalityDiagnostics (const char* name, const e2ap_CriticalityDiagnostics* pvalue);
EXTERN int asn1PrtToStr_e2ap_CriticalityDiagnostics (const char* name, e2ap_CriticalityDiagnostics* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_CriticalityDiagnostics (OSCTXT* pctxt, const char* name, const e2ap_CriticalityDiagnostics* pvalue);
EXTERN int asn1Copy_e2ap_CriticalityDiagnostics (OSCTXT* pctxt, const e2ap_CriticalityDiagnostics* pSrcValue, e2ap_CriticalityDiagnostics* pDstValue);
// --- End of e2ap_CriticalityDiagnostics.h ---

// --- Begin of e2ap_RICqueryFailure_IEs.h ---
/*****************************************/
/*           RICqueryFailure_IEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_RICrequestID,
 
   T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_RANfunctionID,
 
   T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_Cause,
 
   T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_CriticalityDiagnostics,
 
   T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_Extended_RANNodeName_
 
} e2ap_RICqueryFailure_IEs_TVALUE;

 /* ie là con của msg*/
typedef struct EXTERN e2ap_RICqueryFailure_protocolIEs_element {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_RICqueryFailure_IEs_TVALUE t;
      union {
        /*
        *id: id-RICrequestID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_RICrequestID * _e2apRICqueryFailure_IEs_id_RICrequestID;
        /*
        *id: id-RANfunctionID
        *criticality: reject
        *presence: mandatory
        */
         e2ap_RANfunctionID * _e2apRICqueryFailure_IEs_id_RANfunctionID;
        /*
        *id: id-Cause
        *criticality: ignore
        *presence: mandatory
        */
         e2ap_Cause * _e2apRICqueryFailure_IEs_id_Cause;
        /*
        *id: id-CriticalityDiagnostics
        *criticality: ignore
        *presence: optional
        */
         e2ap_CriticalityDiagnostics * _e2apRICqueryFailure_IEs_id_CriticalityDiagnostics;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_RICqueryFailure_protocolIEs_element;

EXTERN int asn1PE_e2ap_RICqueryFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs_element* pvalue);
EXTERN int asn1PD_e2ap_RICqueryFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs_element* pvalue);
EXTERN int asn1Init_e2ap_RICqueryFailure_protocolIEs_element (e2ap_RICqueryFailure_protocolIEs_element* pvalue);
EXTERN void asn1Free_e2ap_RICqueryFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs_element* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICqueryFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs_element* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICqueryFailure_protocolIEs_element (const char * name, e2ap_RICqueryFailure_protocolIEs_element* pvalue, char * buffer, OSSIZE bufSize);

 


// --- End of e2ap_RICqueryFailure_IEs.h ---

// --- Begin of e2ap_RICqueryFailure.h ---
/*****************************************/
/*           RICqueryFailure                */
/*****************************************/
//2_container.h
/* 1. xxx_protocolIE -> mẫu cũ ở ie_big_msg */
typedef  OSRTDList e2ap_RICqueryFailure_protocolIEs;
EXTERN int asn1PE_e2ap_RICqueryFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs* pvalue);
EXTERN int asn1PD_e2ap_RICqueryFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs* pvalue);
EXTERN int asn1Init_e2ap_RICqueryFailure_protocolIEs (e2ap_RICqueryFailure_protocolIEs* pvalue);
//EXTERN void asn1Free_e2ap_RICqueryFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICqueryFailure_protocolIEs (OSCTXT* pctxt, e2ap_RICqueryFailure_protocolIEs* pvalue, char*buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2apRICqueryFailure_protocolIEs (OSCTXT* pctxt, const char * name, const e2ap_RICqueryFailure_protocolIEs* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICqueryFailure_protocolIEs (const char* name, e2ap_RICqueryFailure_protocolIEs* pvalue, char* buffer, OSSIZE bufSize);

/*2 . RICqueryFailure -> mẫu cũ ở seq_normal*/

typedef struct EXTERN e2ap_RICqueryFailure {
    e2ap_RICqueryFailure_protocolIEs protocolIEs;
    OSRTDList extElem1;  /* Extension elements */
} e2ap_RICqueryFailure;

EXTERN int asn1PE_e2ap_RICqueryFailure (OSCTXT* pctxt, e2ap_RICqueryFailure* pvalue);
EXTERN int asn1PD_e2ap_RICqueryFailure (OSCTXT* pctxt, e2ap_RICqueryFailure* pvalue);
EXTERN int asn1Init_e2ap_RICqueryFailure (e2ap_RICqueryFailure* pvalue);
EXTERN void asn1Free_e2ap_RICqueryFailure (OSCTXT* pctxt, e2ap_RICqueryFailure* pvalue);
EXTERN void asn1Print_e2ap_RICqueryFailure (const char* name, const e2ap_RICqueryFailure* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICqueryFailure (const char* name, e2ap_RICqueryFailure* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICqueryFailure (OSCTXT* pctxt, const char* name, const e2ap_RICqueryFailure* pvalue);
EXTERN int asn1Copy_e2ap_RICqueryFailure (OSCTXT* pctxt, const e2ap_RICqueryFailure* pSrcValue, e2ap_RICqueryFailure* pDstValue);
// --- End of e2ap_RICqueryFailure.h ---

#endif
