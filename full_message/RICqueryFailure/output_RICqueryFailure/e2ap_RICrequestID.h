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