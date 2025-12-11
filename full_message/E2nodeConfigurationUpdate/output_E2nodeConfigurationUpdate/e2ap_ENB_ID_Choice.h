

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
