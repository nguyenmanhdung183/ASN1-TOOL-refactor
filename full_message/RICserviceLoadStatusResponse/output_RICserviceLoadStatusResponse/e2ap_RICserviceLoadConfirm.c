
/*****************************************/
/*           RICserviceLoadConfirm                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2

// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_RICserviceLoadConfirm (OSCTXT* pctxt, e2ap_RICserviceLoadConfirm* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "RICserviceLoadConfirm");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);

   /*optional bit for field ricServiceReportLoadConfirm*/
   stat = rtxEncBit (pctxt, pvalue->m_ricServiceReportLoadConfirmPresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   /*optional bit for field ricServiceInsertLoadConfirm*/
   stat = rtxEncBit (pctxt, pvalue->m_ricServiceInsertLoadConfirmPresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   /*optional bit for field ricServiceControlLoadConfirm*/
   stat = rtxEncBit (pctxt, pvalue->m_ricServiceControlLoadConfirmPresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   /*optional bit for field ricServicePolicyLoadConfirm*/
   stat = rtxEncBit (pctxt, pvalue->m_ricServicePolicyLoadConfirmPresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   /*optional bit for field ricServiceQueryLoadConfirm*/
   stat = rtxEncBit (pctxt, pvalue->m_ricServiceQueryLoadConfirmPresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);

   /*encode root elements*/   
   /* encode field ricServiceReportLoadConfirm - id = -1*/  
   if (pvalue->m_ricServiceReportLoadConfirmPresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "ricServiceReportLoadConfirm");
   stat = asn1PE_e2ap_RICloadConfirm (pctxt, pvalue->ricServiceReportLoadConfirm);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   }

   /* encode field ricServiceInsertLoadConfirm - id = -1*/  
   if (pvalue->m_ricServiceInsertLoadConfirmPresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "ricServiceInsertLoadConfirm");
   stat = asn1PE_e2ap_RICloadConfirm (pctxt, pvalue->ricServiceInsertLoadConfirm);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   }

   /* encode field ricServiceControlLoadConfirm - id = -1*/  
   if (pvalue->m_ricServiceControlLoadConfirmPresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "ricServiceControlLoadConfirm");
   stat = asn1PE_e2ap_RICloadConfirm (pctxt, pvalue->ricServiceControlLoadConfirm);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   }

   /* encode field ricServicePolicyLoadConfirm - id = -1*/  
   if (pvalue->m_ricServicePolicyLoadConfirmPresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "ricServicePolicyLoadConfirm");
   stat = asn1PE_e2ap_RICloadConfirm (pctxt, pvalue->ricServicePolicyLoadConfirm);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   }

   /* encode field ricServiceQueryLoadConfirm - id = -1*/  
   if (pvalue->m_ricServiceQueryLoadConfirmPresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "ricServiceQueryLoadConfirm");
   stat = asn1PE_e2ap_RICloadConfirm (pctxt, pvalue->ricServiceQueryLoadConfirm);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   }


   /*
   if (pvalue->extElem1Present) {
      stat = pe_OpenType (pctxt, pvalue->extElem1.numocts, pvalue->extElem1.data);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   }
   */

   if(extbit) {
      /*encode extension optional bits length */
      stat = pe_SmallLength(pctxt, pvalue->extElem1.count);
      if (stat != 0) return LOG_RTERR(pctxt, stat);

      /*encode optional bit*/
      stat = pe_OpenTypeExtBits(pctxt, &pvalue->extElem1);
      if (stat != 0) return LOG_RTERR(pctxt, stat);

      /*encode extension elements*/
      if (pvalue->extElem1.count > 0) {
         //stat = pe_OpenType (pctxt, pvalue->extElem1.numocts, pvalue->extElem1.data);
         stat = pe_OpenTypeExt(pctxt, &pvalue->extElem1);
         if (stat != 0) return LOG_RTERR(pctxt, stat);
      }
   }

   RTXCTXTPOPTYPENAME(pctxt);
   return (stat);
}

int asn1PD_e2ap_RICserviceLoadConfirm (OSCTXT* pctxt, e2ap_RICserviceLoadConfirm* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[5];

   RTXCTXTPUSHTYPENAME(pctxt, "RICserviceLoadConfirm");

   /*extension bit*/
   stat = DEC_BIT(pctxt, &extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   rtxDListInit(&pvalue->extElem1); 

   /*optional bits*/
   for(i_ = 0; i_ < 5; i_++) {
      stat = DEC_BIT(pctxt, &optbits[i_]);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   }

   /*decode root elements*/
   /* decode field ricServiceReportLoadConfirm */
   RTXCTXTPUSHELEMNAME(pctxt, "ricServiceReportLoadConfirm");
   if (optbits[0]) {
      pvalue->m_ricServiceReportLoadConfirmPresent = TRUE;
      stat = asn1PD_e2ap_RICloadConfirm (pctxt, &pvalue->ricServiceReportLoadConfirm);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_ricServiceReportLoadConfirmPresent = FALSE;
   }
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field ricServiceInsertLoadConfirm */
   RTXCTXTPUSHELEMNAME(pctxt, "ricServiceInsertLoadConfirm");
   if (optbits[0]) {
      pvalue->m_ricServiceInsertLoadConfirmPresent = TRUE;
      stat = asn1PD_e2ap_RICloadConfirm (pctxt, &pvalue->ricServiceInsertLoadConfirm);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_ricServiceInsertLoadConfirmPresent = FALSE;
   }
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field ricServiceControlLoadConfirm */
   RTXCTXTPUSHELEMNAME(pctxt, "ricServiceControlLoadConfirm");
   if (optbits[0]) {
      pvalue->m_ricServiceControlLoadConfirmPresent = TRUE;
      stat = asn1PD_e2ap_RICloadConfirm (pctxt, &pvalue->ricServiceControlLoadConfirm);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_ricServiceControlLoadConfirmPresent = FALSE;
   }
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field ricServicePolicyLoadConfirm */
   RTXCTXTPUSHELEMNAME(pctxt, "ricServicePolicyLoadConfirm");
   if (optbits[0]) {
      pvalue->m_ricServicePolicyLoadConfirmPresent = TRUE;
      stat = asn1PD_e2ap_RICloadConfirm (pctxt, &pvalue->ricServicePolicyLoadConfirm);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_ricServicePolicyLoadConfirmPresent = FALSE;
   }
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field ricServiceQueryLoadConfirm */
   RTXCTXTPUSHELEMNAME(pctxt, "ricServiceQueryLoadConfirm");
   if (optbits[0]) {
      pvalue->m_ricServiceQueryLoadConfirmPresent = TRUE;
      stat = asn1PD_e2ap_RICloadConfirm (pctxt, &pvalue->ricServiceQueryLoadConfirm);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_ricServiceQueryLoadConfirmPresent = FALSE;
   }
   RTXCTXTPOPELEMNAME(pctxt);


   /*decode extension elements*/
   if(extbit) {
      OSOCTET *poptbits;
      /*decode optional bits length */
      stat = pd_SmallLength(pctxt, &bitcnt);
      if (stat != 0) return LOG_RTERR(pctxt, stat);

      /*decode optional bits*/
      poptbits = (OSOCTET*)rtxMemAlloc(pctxt, bitcnt);
      if(0==poptbits) return LOG_RTERR(pctxt, RTERR_NOMEM);

      for(i_ = 0; i_ < bitcnt; i_++) {
         stat = DEC_BIT(pctxt, &poptbits[i_]);
         if (stat != 0) {
            rtxMemFreePtr(pctxt, poptbits);
            return LOG_RTERR(pctxt, stat);
         }
      }

      for(i_ = 0; i_ < bitcnt; i_++) {
         if(stat != 0) break;
         if(poptbits[i_]) {
            /*decode extension element*/
            stat = pd_OpenType (pctxt, &openType, &openType.numocts);

            if(0==stat){
               pOpenType = rtxMemAllocType(pctxt, ASN1OpenType);
               if(0!=pOpenType){
                  pOpenType->numocts = openType.numocts;
                  pOpenType->data = openType.data;
                  rtxDListAppend(pctxt, &pvalue->extElem1, pOpenType);
               }
               else stat = RTERR_NOMEM;
            }
            else{
               LOG_RTERR(pctxt, stat);
               break;
            }
         }
         else{//unknown element
            rtxDListAppend(pctxt, &pvalue->extElem1, 0);
         }
      }
      rtxMemFreePtr(pctxt, poptbits);
   }

   RTXCTXTPOPTYPENAME(pctxt);

   return (stat);

}

int asn1Init_e2ap_RICserviceLoadConfirm (e2ap_RICserviceLoadConfirm* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_RICloadConfirm (&pvalue->ricServiceReportLoadConfirm);
   asn1Init_e2ap_RICloadConfirm (&pvalue->ricServiceInsertLoadConfirm);
   asn1Init_e2ap_RICloadConfirm (&pvalue->ricServiceControlLoadConfirm);
   asn1Init_e2ap_RICloadConfirm (&pvalue->ricServicePolicyLoadConfirm);
   asn1Init_e2ap_RICloadConfirm (&pvalue->ricServiceQueryLoadConfirm);
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_RICserviceLoadConfirm (OSCTXT* pctxt, e2ap_RICserviceLoadConfirm* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_RICloadConfirm (pctxt, &pvalue->ricServiceReportLoadConfirm);
   asn1Free_e2ap_RICloadConfirm (pctxt, &pvalue->ricServiceInsertLoadConfirm);
   asn1Free_e2ap_RICloadConfirm (pctxt, &pvalue->ricServiceControlLoadConfirm);
   asn1Free_e2ap_RICloadConfirm (pctxt, &pvalue->ricServicePolicyLoadConfirm);
   asn1Free_e2ap_RICloadConfirm (pctxt, &pvalue->ricServiceQueryLoadConfirm);
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_RICserviceLoadConfirm (const char* name, e2ap_RICserviceLoadConfirm* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }
   if(asn1PrtToStr_e2ap_RICloadConfirm ("ricServiceReportLoadConfirm", &pvalue->ricServiceReportLoadConfirm, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_RICloadConfirm ("ricServiceInsertLoadConfirm", &pvalue->ricServiceInsertLoadConfirm, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_RICloadConfirm ("ricServiceControlLoadConfirm", &pvalue->ricServiceControlLoadConfirm, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_RICloadConfirm ("ricServicePolicyLoadConfirm", &pvalue->ricServicePolicyLoadConfirm, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_RICloadConfirm ("ricServiceQueryLoadConfirm", &pvalue->ricServiceQueryLoadConfirm, buffer, bufSize) < 0)
   {
      return -1;
   }



   /*assum there is an extension*/
   if(rtPrintToStringOpenTypeExtBraceText("extElem1", &pvalue->extElem1, buffer, bufSize) < 0)
   {
      return -1;
   }
   if(rtPrintToStringCloseBrace(buffer, bufSize) < 0) return -1;
   return 0;
}