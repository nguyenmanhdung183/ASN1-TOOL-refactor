/*****************************************/
/*           RICloadInformation                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2
    // Nội dung của file .h cho primitive ENUMERATED
    //enumerated intergrate
//metadata.parsed.primitive_id == 13

typedef enum{
    e2ap_overload = 0,   
    e2ap_notoverload = 1   
}e2apRICloadInformation_loadStatus_Root;

typedef OSUINT32 e2ap_RICloadInformation_loadStatus;


/* Encode / Decode */
EXTERN int asn1PE_e2ap_RICloadInformation_loadStatus (OSCTXT* pctxt, e2ap_RICloadInformation_loadStatus value);
EXTERN int asn1PD_e2ap_RICloadInformation_loadStatus (OSCTXT* pctxt, e2ap_RICloadInformation_loadStatus* pvalue);

/* Print helpers */
EXTERN void asn1Print_e2ap_RICloadInformation_loadStatus (const char* name, const e2ap_RICloadInformation_loadStatus* pvalue);

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_RICloadInformation_loadStatus (OSCTXT* pctxt, const char* name, const e2ap_RICloadInformation_loadStatus* pvalue);

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_RICloadInformation_loadStatus (const char* name,e2ap_RICloadInformation_loadStatus* pvalue,  char* buffer,OSSIZE bufSize);
/* Enumeration table */
EXTERN extern const OSEnumItem e2ap_RICloadInformation_loadStatus_ENUMTAB[];
#define e2ap_RICloadInformation_loadStatus_ENUMTABSIZE 2

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_RICloadInformation_loadStatus_ToString (OSUINT32 value);
EXTERN int e2ap_RICloadInformation_loadStatus_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_RICloadInformation_loadStatus* pvalue);
EXTERN int e2ap_RICloadInformation_loadStatus_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_RICloadInformation_loadStatus* pvalue);

/*Init*/
EXTERN int asn1Init_e2ap_RICloadInformation_loadStatus (e2ap_RICloadInformation_loadStatus* pvalue);
    // Nội dung của file .h cho primitive INTEGER (0..100)
     /*****************************************/
/*           loadEstimate                */
/*****************************************/
//interger intergrate
 //metadata.parsed.primitive_id == 6
// mau integer size(a...b) mau la procedurecode
typedef OSUINT8 e2ap_RICloadInformation_loadEstimate;
EXTERN int asn1PE_e2ap_RICloadInformation_loadEstimate (OSCTXT* pctxt, e2ap_RICloadInformation_loadEstimate value);
EXTERN int asn1PD_e2ap_RICloadInformation_loadEstimate (OSCTXT* pctxt, e2ap_RICloadInformation_loadEstimate* pvalue);
EXTERN int asn1Print_e2ap_RICloadInformation_loadEstimate (const char* name, const e2ap_RICloadInformation_loadEstimate* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICloadInformation_loadEstimate (const char* name, e2ap_RICloadInformation_loadEstimate* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICloadInformation_loadEstimate (OSCTXT* pctxt, const char* name, const e2ap_RICloadInformation_loadEstimate* pvalue);
EXTERN int asn1Init_e2ap_RICloadInformation_loadEstimate (e2ap_RICloadInformation_loadEstimate* pvalue);
EXTERN int asn1Free_e2ap_RICloadInformation_loadEstimate (OSCTXT* pctxt, e2ap_RICloadInformation_loadEstimate* pvalue);


// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_RICloadInformation {
      //primitive
   e2ap_RICloadInformation_loadStatus loadStatus;
   OSBOOL m_loadStatusPresent;      //primitive
   e2ap_RICloadInformation_loadEstimate loadEstimate;
   OSBOOL m_loadEstimatePresent;
   OSRTDList extElem1;  /* Extension elements */
} e2ap_RICloadInformation;

EXTERN int asn1PE_e2ap_RICloadInformation (OSCTXT* pctxt, e2ap_RICloadInformation* pvalue);
EXTERN int asn1PD_e2ap_RICloadInformation (OSCTXT* pctxt, e2ap_RICloadInformation* pvalue);
EXTERN int asn1Init_e2ap_RICloadInformation (e2ap_RICloadInformation* pvalue);
EXTERN void asn1Free_e2ap_RICloadInformation (OSCTXT* pctxt, e2ap_RICloadInformation* pvalue);
EXTERN void asn1Print_e2ap_RICloadInformation (const char* name, const e2ap_RICloadInformation* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICloadInformation (const char* name, e2ap_RICloadInformation* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_RICloadInformation (OSCTXT* pctxt, const char* name, const e2ap_RICloadInformation* pvalue);
EXTERN int asn1Copy_e2ap_RICloadInformation (OSCTXT* pctxt, const e2ap_RICloadInformation* pSrcValue, e2ap_RICloadInformation* pDstValue);