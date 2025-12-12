/* e2ap_Cause.c */

/*****************************************/
/*           Cause                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.c.j2

// Các phần còn lại của template choice.c.j2
// choice with extension typefef từ 1 -> mẫu từ PDU
EXTERN int asn1PE_e2ap_Cause (OSCTXT* pctxt, e2ap_Cause* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME (pctxt, "Cause");

   //extbit = (OSBOOL)(pvalue->t > 6);
   extbit = (OSBOOL)(pvalue->t > 6);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR (pctxt, stat);

   if(!extbit){
      RTXCTXTPUSHELEMNAME (pctxt, "t");

      stat = rtxEncBits (pctxt, pvalue->t - 1, 3);// kha nang la numbits
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      RTXCTXTPOPELEMNAME (pctxt);

      switch (pvalue->t) {
      case 1:
         RTXCTXTPUSHELEMNAME (pctxt, "ricRequest");
         stat = asn1PE_e2ap_CauseRICrequest (pctxt, *pvalue->u.ricRequest); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 2:
         RTXCTXTPUSHELEMNAME (pctxt, "ricService");
         stat = asn1PE_e2ap_CauseRICservice (pctxt, *pvalue->u.ricService); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 3:
         RTXCTXTPUSHELEMNAME (pctxt, "e2Node");
         stat = asn1PE_e2ap_CauseE2node (pctxt, *pvalue->u.e2Node); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 4:
         RTXCTXTPUSHELEMNAME (pctxt, "transport");
         stat = asn1PE_e2ap_CauseTransport (pctxt, *pvalue->u.transport); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 5:
         RTXCTXTPUSHELEMNAME (pctxt, "protocol");
         stat = asn1PE_e2ap_CauseProtocol (pctxt, *pvalue->u.protocol); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 6:
         RTXCTXTPUSHELEMNAME (pctxt, "misc");
         stat = asn1PE_e2ap_CauseMisc (pctxt, *pvalue->u.misc); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 7:
         RTXCTXTPUSHELEMNAME (pctxt, "serviceLayer");
         stat = asn1PE_e2ap_CauseServiceLayer (pctxt, pvalue->u.serviceLayer); //not primitive
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
      }
   }else{
      stat = pe_SmallNonNegWholeNumber (pctxt, pvalue->t - 7);// can xem lai
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      RTXCTXTPUSHELEMNAME (pctxt, "...");
      stat = pe_OpenType (pctxt, pvalue->u.extElem1->numocts, pvalue->u.extElem1->data);
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      RTXCTXTPOPELEMNAME (pctxt);
   }
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_Cause (OSCTXT* pctxt, e2ap_Cause* pvalue)
{
   int stat = 0;
   OSUINT32 ui;
   OSBOOL extbit = FALSE;
   ASN1OpenType openType;
   RTXCTXTPUSHTYPENAME (pctxt, "Cause");

   stat = DEC_BIT (pctxt, &extbit);
   if (stat != 0) return LOG_RTERR (pctxt, stat);

   if(!extbit){
      stat = rtxDecBits (pctxt, &ui, 3);// kha nang la numbits
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      else pvalue->t = ui + 1;

      switch (ui)
      {
      case 0:
         RTXCTXTPUSHELEMNAME (pctxt, "ricRequest");


         pvalue->u.ricRequest = rtxMemAllocType (pctxt, e2ap_CauseRICrequest);
         if (pvalue->u.ricRequest == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_CauseRICrequest(pvalue->u.ricRequest);
         stat = asn1PD_e2ap_CauseRICrequest (pctxt, pvalue->u.ricRequest);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 1:
         RTXCTXTPUSHELEMNAME (pctxt, "ricService");


         pvalue->u.ricService = rtxMemAllocType (pctxt, e2ap_CauseRICservice);
         if (pvalue->u.ricService == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_CauseRICservice(pvalue->u.ricService);
         stat = asn1PD_e2ap_CauseRICservice (pctxt, pvalue->u.ricService);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 2:
         RTXCTXTPUSHELEMNAME (pctxt, "e2Node");


         pvalue->u.e2Node = rtxMemAllocType (pctxt, e2ap_CauseE2node);
         if (pvalue->u.e2Node == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_CauseE2node(pvalue->u.e2Node);
         stat = asn1PD_e2ap_CauseE2node (pctxt, pvalue->u.e2Node);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 3:
         RTXCTXTPUSHELEMNAME (pctxt, "transport");


         pvalue->u.transport = rtxMemAllocType (pctxt, e2ap_CauseTransport);
         if (pvalue->u.transport == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_CauseTransport(pvalue->u.transport);
         stat = asn1PD_e2ap_CauseTransport (pctxt, pvalue->u.transport);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 4:
         RTXCTXTPUSHELEMNAME (pctxt, "protocol");


         pvalue->u.protocol = rtxMemAllocType (pctxt, e2ap_CauseProtocol);
         if (pvalue->u.protocol == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_CauseProtocol(pvalue->u.protocol);
         stat = asn1PD_e2ap_CauseProtocol (pctxt, pvalue->u.protocol);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 5:
         RTXCTXTPUSHELEMNAME (pctxt, "misc");


         pvalue->u.misc = rtxMemAllocType (pctxt, e2ap_CauseMisc);
         if (pvalue->u.misc == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_CauseMisc(pvalue->u.misc);
         stat = asn1PD_e2ap_CauseMisc (pctxt, pvalue->u.misc);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 6:
         RTXCTXTPUSHELEMNAME (pctxt, "serviceLayer");


         pvalue->u.serviceLayer = rtxMemAllocType (pctxt, e2ap_CauseServiceLayer);
         if (pvalue->u.serviceLayer == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         asn1Init_e2ap_CauseServiceLayer(pvalue->u.serviceLayer);
         stat = asn1PD_e2ap_CauseServiceLayer (pctxt, pvalue->u.serviceLayer);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
      }
   }else{
      stat = pd_SmallNonNegWholeNumber (pctxt, &ui);
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      else pvalue->t = ui + 8;
      if(pvalue->t < 8){
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

int asn1Init_e2ap_Cause (e2ap_Cause* pvalue)
{
   if (pvalue == 0) return RTERR_NULLPTR;
   pvalue->t = 0;
   OSCRTLMEMSET (&pvalue->u, 0, sizeof(pvalue->u));
   return 0;
}

void asn1Free_e2ap_Cause (OSCTXT* pctxt, e2ap_Cause* pvalue)
{
   if (pvalue == 0) return;
   switch (pvalue->t) {
      case 0: //no choice nothing to free
         break;
      case 1:
         if (pvalue->u.ricRequest) {
            asn1Free_e2ap_CauseRICrequest (pctxt, pvalue->u.ricRequest);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.ricRequest);
            pvalue->u.ricRequest = 0;
         }
         break;
      case 2:
         if (pvalue->u.ricService) {
            asn1Free_e2ap_CauseRICservice (pctxt, pvalue->u.ricService);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.ricService);
            pvalue->u.ricService = 0;
         }
         break;
      case 3:
         if (pvalue->u.e2Node) {
            asn1Free_e2ap_CauseE2node (pctxt, pvalue->u.e2Node);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.e2Node);
            pvalue->u.e2Node = 0;
         }
         break;
      case 4:
         if (pvalue->u.transport) {
            asn1Free_e2ap_CauseTransport (pctxt, pvalue->u.transport);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.transport);
            pvalue->u.transport = 0;
         }
         break;
      case 5:
         if (pvalue->u.protocol) {
            asn1Free_e2ap_CauseProtocol (pctxt, pvalue->u.protocol);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.protocol);
            pvalue->u.protocol = 0;
         }
         break;
      case 6:
         if (pvalue->u.misc) {
            asn1Free_e2ap_CauseMisc (pctxt, pvalue->u.misc);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.misc);
            pvalue->u.misc = 0;
         }
         break;
      case 7:
         if (pvalue->u.serviceLayer) {
            asn1Free_e2ap_CauseServiceLayer (pctxt, pvalue->u.serviceLayer);
            rtxMemFreePtr (pctxt, (void*)pvalue->u.serviceLayer);
            pvalue->u.serviceLayer = 0;
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


int asn1PrtToStr_e2ap_Cause (const char* name, e2ap_Cause* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) return -1;
   

   switch (pvalue->t) {
      case T_e2ap_Cause_ricRequest:
         if (asn1PrtToStr_e2ap_CauseRICrequest ( "ricRequest", pvalue->u.ricRequest, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_Cause_ricService:
         if (asn1PrtToStr_e2ap_CauseRICservice ( "ricService", pvalue->u.ricService, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_Cause_e2Node:
         if (asn1PrtToStr_e2ap_CauseE2node ( "e2Node", pvalue->u.e2Node, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_Cause_transport:
         if (asn1PrtToStr_e2ap_CauseTransport ( "transport", pvalue->u.transport, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_Cause_protocol:
         if (asn1PrtToStr_e2ap_CauseProtocol ( "protocol", pvalue->u.protocol, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_Cause_misc:
         if (asn1PrtToStr_e2ap_CauseMisc ( "misc", pvalue->u.misc, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_Cause_serviceLayer:
         if (asn1PrtToStr_e2ap_CauseServiceLayer ( "serviceLayer", pvalue->u.serviceLayer, buffer, bufSize) < 0) return -1;
         break;
      case T_e2ap_Cause_extElem1:
         if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
         if(rtPrintToStringHexStr("extElem1", pvalue->u.extElem1->numocts, pvalue->u.extElem1->data, buffer, bufSize) < 0) return -1;
         break;
      default:;
   }

   if(rtPrintToStringCloseBrace(buffer, bufSize) < 0) return -1;
   return 0;
}


