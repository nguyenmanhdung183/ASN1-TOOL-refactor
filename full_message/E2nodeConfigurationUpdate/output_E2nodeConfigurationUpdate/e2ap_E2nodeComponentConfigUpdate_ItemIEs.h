/*****************************************/
/*           E2nodeComponentConfigUpdate_ItemIEs                */
/*****************************************/
/* ie.h.j2 */
/* ie là con của msg + ie thường*/
typedef enum {
   T_E2AP_PDU_Contents_e2ap_E2nodeComponentConfigUpdate_ItemIEs_UNDEF_,
   T_E2AP_PDU_Contents_e2ap_E2nodeComponentConfigUpdate_ItemIEs_id_E2nodeComponentConfigUpdate_Item 
 
} e2ap_E2nodeComponentConfigUpdate_ItemIEs_TVALUE;

/* ie thường */
typedef struct EXTERN e2ap_E2nodeComponentConfigUpdate_ItemIEs {
   e2ap_ProtocolIE_ID id;
   e2ap_Criticality criticality;
   struct{
      e2ap_E2nodeComponentConfigUpdate_ItemIEs_TVALUE t;
      union {
         e2ap_E2nodeComponentConfigUpdate_Item * _e2apE2nodeComponentConfigUpdate_ItemIEs_id_E2nodeComponentConfigUpdate_Item;

         ASN1OpenType* extElem1;  /* extension */
      } u;
   }value;
} e2ap_E2nodeComponentConfigUpdate_ItemIEs;

EXTERN int  asn1PE_e2ap_E2nodeComponentConfigUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2nodeComponentConfigUpdate_ItemIEs* pvalue);
EXTERN int  asn1PD_e2ap_E2nodeComponentConfigUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2nodeComponentConfigUpdate_ItemIEs* pvalue);
EXTERN void asn1Init_e2ap_E2nodeComponentConfigUpdate_ItemIEs (e2ap_E2nodeComponentConfigUpdate_ItemIEs* pvalue);
EXTERN void asn1Free_e2ap_E2nodeComponentConfigUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2nodeComponentConfigUpdate_ItemIEs* pvalue);
EXTERN int  asn1PrtToStr_e2ap_E2nodeComponentConfigUpdate_ItemIEs (const char * name, e2ap_E2nodeComponentConfigUpdate_ItemIEs* pvalue, char * buffer, OSSIZE bufSize);
 

