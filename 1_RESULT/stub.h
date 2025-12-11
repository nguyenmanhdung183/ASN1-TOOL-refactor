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
typedef unsigned int  OSUINT16;
typedef unsigned int  OSUINT32;
typedef unsigned int  OSUINT64;
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
typedef int UInt32;
typedef int UInt64;
typedef long OSINT64;
typedef int OSINT32;
typedef short OSINT16;

#define T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2connectionUpdate 100
#define ASN1V_e2ap_id_E2setup                      1
#define ASN1V_e2ap_id_ErrorIndication                      2
#define ASN1V_e2ap_id_Reset                                3
#define ASN1V_e2ap_id_RICcontrol                           4
#define ASN1V_e2ap_id_RICindication                        5
#define ASN1V_e2ap_id_RICserviceQuery                      6
#define ASN1V_e2ap_id_RICserviceUpdate                     7
#define ASN1V_e2ap_id_RICsubscription                      8
#define ASN1V_e2ap_id_RICsubscriptionDelete                9
#define ASN1V_e2ap_id_E2nodeConfigurationUpdate            10
#define ASN1V_e2ap_id_E2connectionUpdate                   11
#define ASN1V_e2ap_id_RICsubscriptionDeleteRequired        12
#define ASN1V_e2ap_id_E2removal                            13
#define ASN1V_e2ap_id_RICsubscriptionModification          14
#define ASN1V_e2ap_id_RICsubscriptionModificationRequired  15
#define ASN1V_e2ap_id_RICquery                             16
#define ASN1V_e2ap_id_RICsubscriptionAudit                 17
#define ASN1V_e2ap_id_RICserviceLoadStatus                 18
#define ASN1V_e2ap_id_RICserviceLoadUpdate                 19
#define ASN1V_e2ap_id_RICsubscriptionStateControl          20
#define ASN1V_e2ap_id_RICassistance                        21
#define ASN1V_e2ap_id_RICassistanceIndication              22
#define ASN1V_e2ap_id_RICassistanceHalt                    23
#define ASN1V_e2ap_maxProtocolIEs                 65535

#define ASN1V_e2ap_maxnoofErrors                  256
#define ASN1V_e2ap_maxofE2nodeComponents          1024
#define ASN1V_e2ap_maxofRANfunctionID             256
#define ASN1V_e2ap_maxofRICactionID               16
#define ASN1V_e2ap_maxofTNLA                      32
#define ASN1V_e2ap_maxofRICrequestID              1024
#define ASN1V_e2ap_maxofRICsubscriptions          2147483648
#define ASN1V_e2ap_id_Cause                                      1
#define ASN1V_e2ap_id_CriticalityDiagnostics                     2
#define ASN1V_e2ap_id_GlobalE2node_ID                            3
#define ASN1V_e2ap_id_GlobalRIC_ID                               4
#define ASN1V_e2ap_id_RANfunctionID                              5
#define ASN1V_e2ap_id_RANfunctionID_Item                         6
#define ASN1V_e2ap_id_RANfunctionIEcause_Item                    7
#define ASN1V_e2ap_id_RANfunction_Item                           8
#define ASN1V_e2ap_id_RANfunctionsAccepted                       9
#define ASN1V_e2ap_id_RANfunctionsAdded                          10
#define ASN1V_e2ap_id_RANfunctionsDeleted                        11
#define ASN1V_e2ap_id_RANfunctionsModified                       12
#define ASN1V_e2ap_id_RANfunctionsRejected                       13
#define ASN1V_e2ap_id_RICaction_Admitted_Item                    14
#define ASN1V_e2ap_id_RICactionID                                15
#define ASN1V_e2ap_id_RICaction_NotAdmitted_Item                 16
#define ASN1V_e2ap_id_RICactions_Admitted                        17
#define ASN1V_e2ap_id_RICactions_NotAdmitted                     18
#define ASN1V_e2ap_id_RICaction_ToBeSetup_Item                   19
#define ASN1V_e2ap_id_RICcallProcessID                           20
#define ASN1V_e2ap_id_RICcontrolAckRequest                       21
#define ASN1V_e2ap_id_RICcontrolHeader                           22
#define ASN1V_e2ap_id_RICcontrolMessage                          23
#define ASN1V_e2ap_id_RICcontrolStatus                           24
#define ASN1V_e2ap_id_RICindicationHeader                        25
#define ASN1V_e2ap_id_RICindicationMessage                       26
#define ASN1V_e2ap_id_RICindicationSN                            27
#define ASN1V_e2ap_id_RICindicationType                          28
#define ASN1V_e2ap_id_RICrequestID                               29
#define ASN1V_e2ap_id_RICsubscriptionDetails                     30
#define ASN1V_e2ap_id_TimeToWait                                 31
#define ASN1V_e2ap_id_RICcontrolOutcome                          32

#define ASN1V_e2ap_id_E2nodeComponentConfigUpdate                33
#define ASN1V_e2ap_id_E2nodeComponentConfigUpdate_Item           34
#define ASN1V_e2ap_id_E2nodeComponentConfigUpdateAck             35
#define ASN1V_e2ap_id_E2nodeComponentConfigUpdateAck_Item        36

#define ASN1V_e2ap_id_E2connectionSetup                          39
#define ASN1V_e2ap_id_E2connectionSetupFailed                    40
#define ASN1V_e2ap_id_E2connectionSetupFailed_Item               41
#define ASN1V_e2ap_id_E2connectionFailed_Item                    42
#define ASN1V_e2ap_id_E2connectionUpdate_Item                    43
#define ASN1V_e2ap_id_E2connectionUpdateAdd                      44
#define ASN1V_e2ap_id_E2connectionUpdateModify                   45
#define ASN1V_e2ap_id_E2connectionUpdateRemove                   46
#define ASN1V_e2ap_id_E2connectionUpdateRemove_Item              47
#define ASN1V_e2ap_id_TNLinformation                             48
#define ASN1V_e2ap_id_TransactionID                              49

#define ASN1V_e2ap_id_E2nodeComponentConfigAddition              50
#define ASN1V_e2ap_id_E2nodeComponentConfigAddition_Item         51
#define ASN1V_e2ap_id_E2nodeComponentConfigAdditionAck           52
#define ASN1V_e2ap_id_E2nodeComponentConfigAdditionAck_Item      53
#define ASN1V_e2ap_id_E2nodeComponentConfigRemoval               54
#define ASN1V_e2ap_id_E2nodeComponentConfigRemoval_Item          55
#define ASN1V_e2ap_id_E2nodeComponentConfigRemovalAck            56
#define ASN1V_e2ap_id_E2nodeComponentConfigRemovalAck_Item       57
#define ASN1V_e2ap_id_E2nodeTNLassociationRemoval                58
#define ASN1V_e2ap_id_E2nodeTNLassociationRemoval_Item           59

#define ASN1V_e2ap_id_RICsubscriptionToBeRemoved                 60
#define ASN1V_e2ap_id_RICsubscription_withCause_Item             61
#define ASN1V_e2ap_id_RICsubscriptionStartTime                   62
#define ASN1V_e2ap_id_RICsubscriptionEndTime                     63

#define ASN1V_e2ap_id_RICeventTriggerDefinitionToBeModified      64
#define ASN1V_e2ap_id_RICactionsToBeRemovedForModification_List  65
#define ASN1V_e2ap_id_RICaction_ToBeRemovedForModification_Item  66
#define ASN1V_e2ap_id_RICactionsToBeModifiedForModification_List 67
#define ASN1V_e2ap_id_RICaction_ToBeModifiedForModification_Item 68
#define ASN1V_e2ap_id_RICactionsToBeAddedForModification_List    69
#define ASN1V_e2ap_id_RICaction_ToBeAddedForModification_Item    70
#define ASN1V_e2ap_id_RICactionsRemovedForModification_List      71
#define ASN1V_e2ap_id_RICaction_RemovedForModification_Item      72
#define ASN1V_e2ap_id_RICactionsFailedToBeRemovedForModification_List 73
#define ASN1V_e2ap_id_RICaction_FailedToBeRemovedForModification_Item 74
#define ASN1V_e2ap_id_RICactionsModifiedForModification_List     75
#define ASN1V_e2ap_id_RICaction_ModifiedForModification_Item     76
#define ASN1V_e2ap_id_RICactionsFailedToBeModifiedForModification_List 77
#define ASN1V_e2ap_id_RICaction_FailedToBeModifiedForModification_Item 78
#define ASN1V_e2ap_id_RICactionsAddedForModification_List        79
#define ASN1V_e2ap_id_RICaction_AddedForModification_Item        80
#define ASN1V_e2ap_id_RICactionsFailedToBeAddedForModification_List 81
#define ASN1V_e2ap_id_RICaction_FailedToBeAddedForModification_Item 82
#define ASN1V_e2ap_id_RICactionsRequiredToBeModified_List        83
#define ASN1V_e2ap_id_RICaction_RequiredToBeModified_Item        84
#define ASN1V_e2ap_id_RICactionsRequiredToBeRemoved_List         85
#define ASN1V_e2ap_id_RICaction_RequiredToBeRemoved_Item         86
#define ASN1V_e2ap_id_RICactionsConfirmedForModification_List    87
#define ASN1V_e2ap_id_RICaction_ConfirmedForModification_Item    88
#define ASN1V_e2ap_id_RICactionsRefusedToBeModified_List         89
#define ASN1V_e2ap_id_RICaction_RefusedToBeModified_Item         90
#define ASN1V_e2ap_id_RICactionsConfirmedForRemoval_List         91
#define ASN1V_e2ap_id_RICaction_ConfirmedForRemoval_Item         92
#define ASN1V_e2ap_id_RICactionsRefusedToBeRemoved_List          93
#define ASN1V_e2ap_id_RICaction_RefusedToBeRemoved_Item          94

#define ASN1V_e2ap_id_RICqueryHeader                             95
#define ASN1V_e2ap_id_RICqueryDefinition                          96
#define ASN1V_e2ap_id_RICqueryOutcome                             97

#define ASN1V_e2ap_id_RICsubscriptionAuditFlag                    98
#define ASN1V_e2ap_id_RICsubscriptionAuditList                    99
#define ASN1V_e2ap_id_RICsubscriptionAudit_Item                   100
#define ASN1V_e2ap_id_RICsubscriptionAuditAction_Item             101
#define ASN1V_e2ap_id_RICsubscriptionAuditConfirmedList           102
#define ASN1V_e2ap_id_RICsubscriptionAuditMissingList             103
#define ASN1V_e2ap_id_RICsubscriptionAuditUnkownList              104

#define ASN1V_e2ap_id_E2nodeLoadMeasurementID                     105
#define ASN1V_e2ap_id_RANfunctionLoad_Item                        106
#define ASN1V_e2ap_id_RANfunctionLoad_List                        107
#define ASN1V_e2ap_id_RANfunctionLoadConfirm_Item                 108
#define ASN1V_e2ap_id_RANfunctionLoadConfirm_List                 109
#define ASN1V_e2ap_id_RANfunctionLoadRequest_Item                 110
#define ASN1V_e2ap_id_RANfunctionLoadRequest_List                 111
#define ASN1V_e2ap_id_RegistrationRequest                          112
#define ASN1V_e2ap_id_ReportingPeriodicity                         113

#define ASN1V_e2ap_id_RICactionLoad_Item                          114
#define ASN1V_e2ap_id_RICactionLoadConfirm_Item                   115
#define ASN1V_e2ap_id_RICactionLoadRequest_Item                   116
#define ASN1V_e2ap_id_RICloadMeasurementID                        117
#define ASN1V_e2ap_id_RICsubscriptionLoad_Item                    118
#define ASN1V_e2ap_id_RICsubscriptionLoadConfirm_Item             119
#define ASN1V_e2ap_id_RICsubscriptionLoadRequest_Item             120

#define ASN1V_e2ap_id_RANfunctionStateConfirm_Item                121
#define ASN1V_e2ap_id_RANfunctionStateConfirm_List                122
#define ASN1V_e2ap_id_RANfunctionStateControl_Item                123
#define ASN1V_e2ap_id_RANfunctionStateControl_List                124

#define ASN1V_e2ap_id_RICactionList_Item                          125
#define ASN1V_e2ap_id_RICsubscriptionList_Item                    126

#define ASN1V_e2ap_id_RICassistanceHeader                         127
#define ASN1V_e2ap_id_RICassistanceMessage                        128
#define ASN1V_e2ap_id_RICassistanceOutcome                        129
#define ASN1V_e2ap_id_RICassistanceSN                             130
#define ASN1V_e2ap_id_RICassistanceUpdate                         131
#define ASN1V_e2ap_id_RICassistanceUpdateNumber                   132


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

typedef struct{
    OSUINT32 numocts;
    const OSOCTET  *data;
}OSDynOctStr; //ok
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
/* Fake OSRTDListNode */
typedef struct OSRTDListNode {
    void *data;
    struct OSRTDListNode *next;
} OSRTDListNode;

/* Hàm stub thực sự cấp phát */
static inline void rtxDListAllocNodeAndData_stub(
        void *p_asn1_ctx,
        size_t dataSize,
        OSRTDListNode **ppNode,
        void **ppData)
{
    (void)p_asn1_ctx;  // không dùng

    *ppNode = (OSRTDListNode*)malloc(sizeof(OSRTDListNode));
    (*ppNode)->next = NULL;

    *ppData = malloc(dataSize);
    memset(*ppData, 0, dataSize);

    (*ppNode)->data = *ppData;
}

/* Macro cho phép truyền TÊN KIỂU vào tham số thứ 2 */
#define rtxDListAllocNodeAndData(ctx, TypeName, ppNode, ppData) \
    rtxDListAllocNodeAndData_stub((ctx), sizeof(TypeName), (ppNode), (void**)(ppData))
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

#define rtxMemAllocType(ctx, Type) \
    (Type *) rtxMemAlloc((ctx), sizeof(Type))
#define rtxMemAllocTypeZ(ctx, Type) \
    (Type *) rtxMemAlloc((ctx), sizeof(Type))



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
#define XNAP_P_NULL ((void*)0)
#define GNB_PNULL NULL

#define XNAP_MEMSET memset
#define XNAP_MEMCPY memcpy

#endif /* __STUB_H__ */
