/*****************************************/
/*           RICassistanceHeader                */
/*****************************************/
//9 mau octet string
//type 9  mau la octet string no size mau la pdusessioncommonnetworkinstance

EXTERN int asn1PE_e2ap_RICassistanceHeader (OSCTXT* pctxt, e2ap_RICassistanceHeader value){
   int stat = 0
   RTXCTCXTPUSHTYPENAME (pctxt, "RICassistanceHeader");
   stat = pe_OctetString(pctxt, value.numocts, value.data);
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);

}
EXTERN int asn1PD_e2ap_RICassistanceHeader (OSCTXT* pctxt, e2ap_RICassistanceHeader* pvalue){
   int stat = 0;
   RTXCTCXTPUSHTYPENAME (pctxt, "RICassistanceHeader");
   stat = pd_DynOctetString(pctxt, pvalue);
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}
EXTERN int asn1PrtToStr_e2ap_RICassistanceHeader (const char* name, e2ap_RICassistanceHeader *pvalue, char* buffer, OSSIZE bufSize){
   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToStringHexStr(name, pvalue->numocts, pvalue->data, buffer, bufSize) < 0) return -1;
   return 0;
}
EXTERN int asn1PrtToStrm_e2ap_RICassistanceHeader (OSCTXT* pctxt, const char* name, const e2ap_RICassistanceHeader* pvalue){
   int stat =0;
   stat = rtPrintToStreamIndent(pctxt);
   if(stat !=0) return LOG_RTERR(pctxt, stat);
   stat = rtPrintToStreamHexStr(pctxt, name, pvalue->numocts, pvalue->data);
   if(stat !=0) return LOG_RTERR(pctxt, stat);
   return stat;
}
//EXTERN int asn1Copy_e2ap_RICassistanceHeader (OSCTXT* pctxt, const e2ap_RICassistanceHeader* pSrcValue, e2ap_RICassistanceHeader* pDstValue);
 int asn1Init_e2ap_RICassistanceHeader (e2ap_RICassistanceHeader* pvalue){
   if (pvalue == 0) return RTERR_NULLPTR;
   pvalue->numocts = 0;
   pvalue->data = 0;
   return 0;
}
 void asn1Free_e2ap_RICassistanceHeader (OSCTXT* pctxt, e2ap_RICassistanceHeader* pvalue){
   if (pvalue == 0) return;
   if(pvalue->numocts>0){
       rtxMemFreePtr(pctxt, (void*)pvalue->data);
       pvalue->data = 0;
       pvalue->numocts = 0;
   }
}
int asn1Init_e2ap_RICassistanceHeader (e2ap_RICassistanceHeader* pvalue){
   if (pvalue == 0) return RTERR_NULLPTR;
   pvalue->numocts = 0;
   pvalue->data = 0;
   return 0;
}
