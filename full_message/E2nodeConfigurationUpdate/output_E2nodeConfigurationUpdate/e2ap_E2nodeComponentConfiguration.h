/*****************************************/
/*           E2nodeComponentConfiguration                */
/*****************************************/
//seq normal
// Các nội dung cần thiết cho template seq_normal.h.j2
    // Nội dung của file .h cho primitive OCTET STRING
     /*****************************************/
/*           e2nodeComponentRequestPart                */
/*****************************************/
//octet string intergrate 
//metadata.parsed.primitive_id == 9

//-> mau la measurementtimingconfiguration
typdef OSDynOctStr e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart;
EXTERN int asn1PE_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart value);
EXTERN int asn1PD_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (const char* name, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart *pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, const e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pSrcValue, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pDstValue);
EXTERN int asn1Init_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pvalue);

    // Nội dung của file .h cho primitive OCTET STRING
     /*****************************************/
/*           e2nodeComponentResponsePart                */
/*****************************************/
//octet string intergrate 
//metadata.parsed.primitive_id == 9

//-> mau la measurementtimingconfiguration
typdef OSDynOctStr e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart;
EXTERN int asn1PE_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart value);
EXTERN int asn1PD_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (const char* name, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart *pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, const e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pSrcValue, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pDstValue);
EXTERN int asn1Init_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pvalue);


// Các phần còn lại của template seq_normal.h.j2
typedef struct EXTERN e2ap_E2nodeComponentConfiguration {
      //primitive
   e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart e2nodeComponentRequestPart;
      //primitive
   e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart e2nodeComponentResponsePart;

   OSRTDList extElem1;  /* Extension elements */
} e2ap_E2nodeComponentConfiguration;

EXTERN int asn1PE_e2ap_E2nodeComponentConfiguration (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration* pvalue);
EXTERN int asn1PD_e2ap_E2nodeComponentConfiguration (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration* pvalue);
EXTERN int asn1Init_e2ap_E2nodeComponentConfiguration (e2ap_E2nodeComponentConfiguration* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentConfiguration (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration* pvalue);
EXTERN void asn1Print_e2ap_E2nodeComponentConfiguration (const char* name, const e2ap_E2nodeComponentConfiguration* pvalue);
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfiguration (const char* name, e2ap_E2nodeComponentConfiguration* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfiguration (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfiguration* pvalue);
EXTERN int asn1Copy_e2ap_E2nodeComponentConfiguration (OSCTXT* pctxt, const e2ap_E2nodeComponentConfiguration* pSrcValue, e2ap_E2nodeComponentConfiguration* pDstValue);