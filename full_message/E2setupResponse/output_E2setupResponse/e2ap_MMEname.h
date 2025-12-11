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