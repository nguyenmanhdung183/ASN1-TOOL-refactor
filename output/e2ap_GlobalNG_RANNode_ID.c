/* e2ap_GlobalNG_RANNode_ID.c */

/*****************************************/
/*           GlobalNG_RANNode_ID                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.c.j2

// Các phần còn lại của template choice.c.j2
// choice with extension typefef từ 1 -> mẫu từ PDU
EXTERN int asn1PE_e2ap_GlobalNG_RANNode_ID (OSCTXT* pctxt, e2ap_GlobalNG_RANNode_ID* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME (pctxt, "GlobalNG-RANNode-ID");

   //extbit = (OSBOOL)(pvalue->t > 1);
   extbit = (OSBOOL)(pvalue->t > 2);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR (pctxt, stat);

   if(!extbit){
      RTXCTXTPUSHELEMNAME (pctxt, "t");

      stat = rtxEncBits (pctxt, pvalue->t - 1, 1);// kha nang la numbits
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      RTXCTXTPOPELEMNAME (pctxt);

      switch (pvalue->t) {
      case 1:
         RTXCTXTPUSHELEMNAME (pctxt, "gNB");
         stat = asn1PE_e2ap_GlobalgNB_ID (pctxt, pvalue->u.gNB); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 2:
         RTXCTXTPUSHELEMNAME (pctxt, "ng-eNB");
         stat = asn1PE_e2ap_GlobalngeNB_ID (pctxt, pvalue->u.ng_eNB); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
      }
   }else{
      OSINT32 pos;
      void * pPerField;

      stat = pe_SmallNonNegWholeNumber (pctxt, pvalue->t - 3);// can xem lai
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      /* encode extension element data value */
      stat = pe_OpenTypeStart (pctxt, &pos, &pPerField);
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      switch(pvalue->t){
  
         default:
            stat = rtxEncBitsFromByteArray (pctxt, pvalue->u.extElem1->data, pvalue->u.extElem1->numocts * 8);
            if (stat != 0) return LOG_RTERR (pctxt, stat);
            break;
      }
      stat = pe_OpenTypeEnd(pctxt, pos, pPerField);
      if (stat != 0) return LOG_RTERR (pctxt, stat);
   }
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_GlobalNG_RANNode_ID (OSCTXT* pctxt, e2ap_GlobalNG_RANNode_ID* pvalue)
{
   int stat = 0;
   OSUINT32 ui;
   OSBOOL extbit = FALSE;
   ASN1OpenType openType;
   RTXCTXTPUSHTYPENAME (pctxt, "GlobalNG-RANNode-ID");

   stat = DEC_BIT (pctxt, &extbit);
   if (stat != 0) return LOG_RTERR (pctxt, stat);

   if(!extbit){
      stat = rtxDecBits (pctxt, &ui, 1);// kha nang la numbits
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      else pvalue->t = ui + 1;

      switch (ui)
      {
      case 0:
         RTXCTXTPUSHELEMNAME (pctxt, "gNB");


         pvalue->u.gNB = rtxMemAllocType (pctxt, e2ap_GlobalgNB_ID);
         if (pvalue->u.gNB == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_GlobalgNB_ID(pvalue->u.gNB);
         stat = asn1PD_e2ap_GlobalgNB_ID (pctxt, pvalue->u.gNB);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 1:
         RTXCTXTPUSHELEMNAME (pctxt, "ng-eNB");


         pvalue->u.ng_eNB = rtxMemAllocType (pctxt, e2ap_GlobalngeNB_ID);
         if (pvalue->u.ng_eNB == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_GlobalngeNB_ID(pvalue->u.ng_eNB);
         stat = asn1PD_e2ap_GlobalngeNB_ID (pctxt, pvalue->u.ng_eNB);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
      }
   }else{
      stat = pd_SmallNonNegWholeNumber (pctxt, &ui);
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      else pvalue->t = ui + 3;
      if(pvalue->t < 3){
         return LOG_RTERR (pctxt, RTERR_INVOPT);
      }
      stat = PD_BYTE_ALIGN (pctxt);
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      RTXCTXTPUSHELEMNAME (pctxt, "...");
      stat = pd_OpenType (pctxt, &openType.data, &openType.numocts);
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      pvalue->u.extElem1 = rtxMemAllocType (pctxt, ASN1OpenType);
      if (pvalue->u.extElem1 == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
      pvalue->u.extElem1->numocts = openType.numocts;
      pvalue->u.extElem1->data = openType.data;
      RTXCTXTPOPELEMNAME (pctxt);
   }
   RTXCTXTPOPTYPENAME (pctxt);
   return (stat);
}

int asn1Init_e2ap_GlobalNG_RANNode_ID (e2ap_GlobalNG_RANNode_ID* pvalue)
{
   if (pvalue == 0) return RTERR_NULLPTR;
   pvalue->t = 0;
   OSCRTLMEMSET (&pvalue->u, 0, sizeof(pvalue->u));
   return 0;
}

void asn1Free_e2ap_GlobalNG_RANNode_ID (OSCTXT* pctxt, e2ap_GlobalNG_RANNode_ID* pvalue)
{
   if (pvalue == 0) return;
   switch (pvalue->t) {
      case 0: //no choice nothing to free
         break;
      case 1:
         if (pvalue->u.gNB) {
            asn1Free_e2ap_GlobalgNB_ID (pctxt, pvalue->u.gNB);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.gNB);
            pvalue->u.gNB = 0;
         }
         break;
      case 2:
         if (pvalue->u.ng_eNB) {
            asn1Free_e2ap_GlobalngeNB_ID (pctxt, pvalue->u.ng_eNB);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.ng_eNB);
            pvalue->u.ng_eNB = 0;
         }
         break;
      default:
         if(0!=pvalue->u.extElem1){
            if(!rtxCtxtTestFlag(pctxt, ASN1FASTCOPY)){
               rtxMemFreePtr(pctxt, (void*)pvalue->u.extElem1->data);
               pvalue->u.extElem1->data = 0;
            }
            rtxMemFreePtr (pctxt, (void*)pvalue->u.extElem1);
            pvalue->u.extElem1 = 0;
         }
   }
}


int asn1PrtToStr_e2ap_GlobalNG_RANNode_ID (const char* name, e2ap_GlobalNG_RANNode_ID* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) return -1;
   

   switch (pvalue->t) {
      case T_e2ap_GlobalNG_RANNode_ID_gNB:
         if (asn1PrtToStr_e2ap_GlobalgNB_ID ( "gNB", pvalue->u.gNB, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_GlobalNG_RANNode_ID_ng_eNB:
         if (asn1PrtToStr_e2ap_GlobalngeNB_ID ( "ng_eNB", pvalue->u.ng_eNB, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_GlobalNG_RANNode_ID_extElem1:
         if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
         if(rtPrintToStringHexStr("extElem1", pvalue->u.extElem1->numocts, pvalue->u.extElem1->data, buffer, bufSize) < 0) return -1;
         break;
      default:;
   }

   if(rtPrintToStringCloseBrace(buffer, bufSize) < 0) return -1;
   return 0;
}


