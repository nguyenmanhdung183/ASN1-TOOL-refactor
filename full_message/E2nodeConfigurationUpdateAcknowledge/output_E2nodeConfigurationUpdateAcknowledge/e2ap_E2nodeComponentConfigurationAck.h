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