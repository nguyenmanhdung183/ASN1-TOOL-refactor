#ifndef __STUB_H__
#define __STUB_H__

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<stdbool.h>
/* --------------------------------------------------------------------
   FIX CRITICAL ASN1C ISSUE: EXTERN MUST BE EMPTY
-------------------------------------------------------------------- */
#ifndef EXTERN
#define EXTERN
#endif

/* --------------------------------------------------------------------
   BASIC CONSTANTS
-------------------------------------------------------------------- */
#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif

#define RT_OK 0
#define XNAP_MAX_ASN1_BUF_LEN 4096

/* --------------------------------------------------------------------
   BASIC ASN1 TYPES (FAKE)
-------------------------------------------------------------------- */
typedef unsigned char OSOCTET;
typedef unsigned char OSUINT8;
typedef unsigned int  OSUINT32;
typedef unsigned long OSSIZE;
typedef unsigned char UInt8;
typedef unsigned short UInt16;
typedef char SInt8;
typedef bool OSBOOL;
typedef int e2ap_ProtocolIE_ID;
typedef int e2ap_Criticality;
typedef int ASN1OpenType;
typedef char          OSUTF8CHAR;
typedef int e2ap_E2AP_PDU;
typedef int e2ap_initiatingMessage;

#define T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2connectionUpdate 100
#define ASN1V_e2ap_id_E2connectionUpdate 1
#define ASN1V_e2ap_id_E2connectionUpdate_Item            1001
#define ASN1V_e2ap_id_E2connectionUpdateRemove_Item      1002
#define ASN1V_e2ap_id_E2connectionUpdateRemove 1
#define ASN1V_e2ap_id_E2connectionUpdateAdd 1
#define ASN1V_e2ap_id_E2connectionUpdateModify 1
/* ASN1V ID definitions for E2AP messages */
#define T_e2ap_E2AP_PDU_initiatingMessage 10
#define ASN1V_e2ap_id_TransactionID                  1
#define ASN1V_e2ap_id_tnlAddress                     2
#define ASN1V_e2ap_id_tnlPort                        3
#define ASN1V_e2ap_id_TNLinformation                 4
#define ASN1V_e2ap_id_TNLusage                       5


#define ASN1V_e2ap_id_E2connectionUpdate            1
#define ASN1V_e2ap_id_E2connectionUpdate_Item      1001
#define ASN1V_e2ap_id_E2connectionUpdate_ItemIEs   1002
#define ASN1V_e2ap_id_E2connectionUpdate_List      1003

#define ASN1V_e2ap_id_E2connectionUpdateRemove     2
#define ASN1V_e2ap_id_E2connectionUpdateRemove_ItemIEs     2002
#define ASN1V_e2ap_id_E2connectionUpdateRemove_List        2003

#define ASN1V_e2ap_id_E2connectionUpdate_IEs       1010

#define e2ap_reject 1
#define e2ap_ignore 0

#define XNAP_ERROR "ERROR"
#define XNAP_INFO  "INFO"
#define XNAP_ASN 1
#define XNAP_WARN  3
#define XNAP_SUCCESS 1
#define XNAP_FAILURE 0
#define XNAP_OK 1
typedef enum en {a,b} xnap_return_et;

/* Dynamic bit string */
typedef struct {
    OSSIZE numbits;
    OSOCTET *data;
} ASN1DynBitStr;

/* Bitmask */
typedef unsigned long rrc_bitmask_t;

/* --------------------------------------------------------------------
   BASIC CONTEXT (FAKE)
-------------------------------------------------------------------- */
typedef struct {
    OSOCTET *buffer;
    OSSIZE   bufSize;
    OSSIZE   msgLen;
    int      stat;    
} OSCTXT;

/* --------------------------------------------------------------------
   LIST STRUCTURES
-------------------------------------------------------------------- */
typedef struct OSRTDListNode {
    void* data;
    struct OSRTDListNode* next;
} OSRTDListNode;

typedef struct {
    OSRTDListNode* head;
    int count;
} OSRTDList;

/* --------------------------------------------------------------------
   ENUM TABLE ENTRY
-------------------------------------------------------------------- */
typedef struct {
    OSUINT32 value;
    const char* name;
} OSEnumItem;

/* --------------------------------------------------------------------
   MEMORY HELPERS (FAKE)
-------------------------------------------------------------------- */
static inline void* rtxMemAllocZ(OSCTXT* pctxt, OSSIZE size) {
    void* p = calloc(1, size);
    if(pctxt) memset(pctxt, 0, sizeof(OSCTXT));
    return p;
}

static inline void* rtxMemAllocType(OSCTXT* pctxt, OSSIZE size) {
    return calloc(1, size);
     if(pctxt) memset(pctxt, 0, sizeof(OSCTXT));
}

/* --------------------------------------------------------------------
   LIST HELPERS (FAKE)
-------------------------------------------------------------------- */
static inline void rtxDListAllocNodeAndData(OSCTXT* pctxt, 
                                            OSSIZE size, 
                                            OSRTDListNode** pp_node, 
                                            void** pp_data) {
    if(!pp_node || !pp_data) return;

    OSRTDListNode* n = calloc(1, sizeof(OSRTDListNode));
    if(!n) {
        *pp_node = NULL;
        *pp_data = NULL;
        return;
    }

    void* data = calloc(1, size);
    if(!data) {
        free(n);
        *pp_node = NULL;
        *pp_data = NULL;
        return;
    }

    n->data = data;

    *pp_node = n;
    *pp_data = data;
}


static inline void rtxDListAppendNode(OSRTDList* list, OSRTDListNode* node) {
    if (!list->head) {
        list->head = node;
    } else {
        OSRTDListNode* p = list->head;
        while (p->next) p = p->next;
        p->next = node;
    }
    list->count++;
}

/* --------------------------------------------------------------------
   CONTEXT OPERATIONS (FAKE)
-------------------------------------------------------------------- */
static inline int rtInitContext(OSCTXT* pctxt) {
    pctxt->buffer = NULL;
    pctxt->msgLen = 0;
    pctxt->bufSize = 0;
    pctxt->stat = 0;
    return RT_OK;
}

static inline void rtFreeContext(OSCTXT* pctxt) {
        if(pctxt) memset(pctxt, 0, sizeof(OSCTXT));

    /* no-op */
}

static inline void pu_setBuffer(OSCTXT* pctxt, OSOCTET* buf, OSSIZE size, int a) {
    pctxt->buffer = buf;
    pctxt->bufSize = size;
    
}

/* Set encoded message length */
static inline OSSIZE pe_GetMsgLen(OSCTXT* pctxt) {
    return pctxt->msgLen;
}

/* --------------------------------------------------------------------
   ERROR SUPPORT
-------------------------------------------------------------------- */
static inline void rtxErrGetTextBuf(OSCTXT* pctxt, char* buf, OSSIZE size) {
    snprintf(buf, size, "STUB ERROR (fake)");
        if(pctxt) memset(pctxt, 0, sizeof(OSCTXT));

}

/* --------------------------------------------------------------------
   XNAP LOG MACROS
-------------------------------------------------------------------- */
// #define XNAP_ERROR(tag, fmt, ...) \
//     printf("[XNAP_TRACE][%s] " fmt "\n", tag, ##__VA_ARGS__)
// #define XNAP_INFO(tag, fmt, ...) \
//     printf("[XNAP_TRACE][%s] " fmt "\n", tag, ##__VA_ARGS__)
// #define XNAP_ASN(tag, fmt, ...) \
//     printf("[XNAP_TRACE][%s] " fmt "\n", tag, ##__VA_ARGS__)
// #define XNAP_TRACE(tag, fmt, ...) \
//     printf("[XNAP_TRACE][%s] " fmt "\n", tag, ##__VA_ARGS__)

#ifndef XNAP_TRACE
#define XNAP_TRACE(tag, fmt, ...) \
    printf("[XNAP_TRACE][%s] " fmt "\n", tag, ##__VA_ARGS__)
#endif


#define XNAP_UT_TRACE_EXIT() \
    printf("[XNAP_UT_TRACE_EXIT]\n")


#define XNAP_UT_TRACE_ENTER() \
    printf("[XNAP_UT_TRACE_ENTER]\n")

static inline void ASN_ERROR_PRINT(OSCTXT *pctxt) {
    printf("[ASN_ERROR_PRINT] Error in ASN.1 encoding context!\n");
    if(pctxt) memset(pctxt, 0, sizeof(OSCTXT));


static inline int asn1PE_e2ap_E2AP_PDU(OSCTXT *pctxt, void *pdu) {
    if (!pctxt || !pdu) return -1;
    // Giả lập việc encode bằng cách chỉ ghi mấy byte vào buffer
    if (pctxt->buffer && pctxt->bufSize > 0) {
        pctxt->buffer[0] = 0xAA;  // ví dụ dữ liệu giả
        pctxt->msgLen = 1;
    }
    return 0;  // thành công
}

/* --------------------------------------------------------------------
   ASN.1 INIT STUB FOR e2ap_initiatingMessage
-------------------------------------------------------------------- */
static inline void asn1Init_e2ap_initiatingMessage(void* pMsg) {
    if (!pMsg) return;
    // Đây là stub, không thực hiện khởi tạo gì thực sự
    printf("[asn1Init_e2ap_initiatingMessage] Stub init called.\n");
}

static inline void rrc_asn1PrtToStr_E2AP_PDU(
        int tag, 
        const char* name, 
        void* pdu
) {
    if (!name || !pdu) return;
    printf("[rrc_asn1PrtToStr_E2AP_PDU][%d] %s: <fake PDU data>\n", tag, name);
}

#define XNAP_NULL 0
#define XNAP_P_NULL (void*) 0
#define GNB_PNULL NULL

#define XNAP_MEMSET memset
#define XNAP_MEMCPY memcpy

#endif /* __STUB_H__ */
