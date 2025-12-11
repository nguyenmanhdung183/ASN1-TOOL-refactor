/*****************************************/
/*           RICsubscriptionTime                */
/*****************************************/
//8 mau octet string
//type 8  mau la octet string size(n) mau la plmn_identity
EXTERN int asn1PE_e2ap_RICsubscriptionTime (OSCTXT* pctxt, e2ap_RICsubscriptionTime* pvalue){
   int stat = 0;
   RTXCTCXTPUSHTYPENAME (pctxt, "RICsubscriptionTime");
   PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(8), OSUINTCONST(8), 0, 0);

   stat = pe_OctetString(pctxt, pvalue->numocts, pvalue->data);
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}
EXTERN int asn1PD_e2ap_RICsubscriptionTime (OSCTXT* pctxt, e2ap_RICsubscriptionTime* pvalue){
   int stat = 0;
   RTXCTCXTPUSHTYPENAME (pctxt, "RICsubscriptionTime");
   PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(8), OSUINTCONST(8), 0, 0);

   stat = pd_OctetString(pctxt, &pvalue->numocts, pvalue->data, sizeof(pvalue->data));
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}
//EXTERN int asn1PrtToStr_e2ap_RICsubscriptionTime (const char* name, e2ap_RICsubscriptionTime* pvalue, char* buffer, OSSIZE bufSize);
//EXTERN int asn1PrtToStrm_e2ap_RICsubscriptionTime (OSCTXT* pctxt, const char* name, const e2ap_RICsubscriptionTime* pvalue);
//EXTERN int asn1Copy_e2ap_RICsubscriptionTime (OSCTXT* pctxt, const e2ap_RICsubscriptionTime* pSrcValue, e2ap_RICsubscriptionTime* pDstValue);

int asn1Init_e2ap_RICsubscriptionTime (e2ap_RICsubscriptionTime* pvalue){
   if (pvalue == 0) return RTERR_NULLPTR;
   pvalue->numocts = 0;
   return 0;
}
void asn1Free_e2ap_RICsubscriptionTime (OSCTXT* pctxt, e2ap_RICsubscriptionTime* pvalue){
   // No dynamic memory to free for fixed-size OCTET STRING
   return;
}
