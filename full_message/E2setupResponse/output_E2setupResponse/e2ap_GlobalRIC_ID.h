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