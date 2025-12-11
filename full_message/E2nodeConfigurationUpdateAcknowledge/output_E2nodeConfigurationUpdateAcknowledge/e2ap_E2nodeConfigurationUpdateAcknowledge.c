/*****************************************/
/*           E2nodeConfigurationUpdateAcknowledge                */
/*****************************************/
//2_container.c
/* 1. xxx_ProtocolIE -> mẫu cũ ở ie_big_msg */
EXTERN int asn1PE_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs (OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs* pvalue)
{
    int stat =0;
    OSRTDListNode* pnode;
    OSUINT32 xx1;

    /*encode length determinant */
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(0), OSUINTCONST(65535), 0, 0);
    stat = pe_Length(pctxt, pvalue->count);
    if(stat<0) return LOG_RTERR(pctxt, stat);

    /*encode each element*/
    xx1 =0;
    for(pnode = pvalue->head; pnode != 0 && xx1<pvalue->count; pnode = pnode->next){
        RTXCTXTPUSHARRAYELEMNAME(pctxt, "SEQUENCE", xx1);
        stat = asn1PE_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element (pctxt, ((e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element*)pnode->data));
        if(stat!=0) return LOG_RTERR(pctxt, stat);
        xx1++;
        RTXCTXTPOPARRAYELEMNAME(pctxt);
    }

    return (stat);
}

EXTERN int  asn1PD_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs(OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs* pvalue)
{
     int stat =0;
     OSRTDListNode* pnode;
     OSSIZE count =0;
     OSSIZE xx1=0;


     /*decode length determinant */
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(0), OSUINTCONST(65535), 0, 0);
    stat = pd_Length64(pctxt, &count); //tai sao lai 64
    if(stat!=0) return LOG_RTERR(pctxt, stat);

    /*decode each element*/
    rtxDListInit(pvalue);

    for(xx1=0; xx1 < count; xx1++){
        e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pdata;
        RTXCTXTPUSHARRAYELEMNAME(pctxt, "SEQUENCE",xx1);

        if(pnode == NULL) return LOG_RTERR(pctxt, RTERR_NOMEM);

        asn1Init_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element(pdata);
        rtxDListAppendNode(pvalue, pnode);
        stat = asn1PD_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element (pctxt, pdata);
        if(stat!=0) return LOG_RTERR(pctxt, stat);
        RTXCTXTPOPARRAYELEMNAME(pctxt);

    }
    return (stat);
}


int asn1Init_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs(e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs* pvalue)
{
    if(0==pvalue) return RTERR_NULLPTR;
    rtxDListFastInit (pvalue);
    return 0;
}
#if 1 //ao that day
void asn1Free_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs(OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs* pvalue)
{
    if(0==pvalue) return;   
    e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pdata;
    OSRTDListNode* pnode=pvalue->head;
    while(0!=pnode){
        pdata = (e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element*)pnode->data;
       // asn1Free_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element(pctxt, pdata);
        pnode = pnode->next;
    }
    rtxDListFreeAll(pctxt, pvalue);
}
#endif


EXTERN int asn1PrtToStr_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs(const char* name, e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs* pvalue, char* buffer, OSSIZE bufSize)
{
    e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element* pdata0;
    OSRTDListNode* pnode0;
    char nameBuf[256];
    char numBuf[32];
    OSUINT32 xx1=0;
    for(pnode0 = pvalue->head;  xx1 < pvalue->count && pnode0 != 0; pnode0 = pnode0->next, xx1++){
        pdata0 = (e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element*)pnode0->data;
        rtxUIntToCharStr(xx1, numBuf, sizeof(numBuf), 0);
        rtxStrJoin(nameBuf, sizeof(nameBuf), name, "[", numBuf, "]", 0);
        #if 0
        if(asn1PrtToStr_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs_element(nameBuf, pdata0, buffer, bufSize) <0){
            return -1;
        }
        #endif
    }
    return 0;
}


/*2 . E2nodeConfigurationUpdateAcknowledge -> mẫu cũ ở seq_normal*/

int asn1PE_e2ap_E2nodeConfigurationUpdateAcknowledge (OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "E2nodeConfigurationUpdateAcknowledge");
   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);


   /*encode root elements*/   
   /* encode field protocolIEs - id = -1*/  
   RTXCTXTPUSHELEMNAME(pctxt, "protocolIEs");
   stat = asn1PE_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs (pctxt, &pvalue->protocolIEs);
   if(stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

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

int asn1PD_e2ap_E2nodeConfigurationUpdateAcknowledge (OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[1];

   RTXCTXTPUSHTYPENAME(pctxt, "E2nodeConfigurationUpdateAcknowledge");

   /*extension bit*/
   stat = DEC_BIT(pctxt, &extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   rtxDListInit(&pvalue->extElem1); 

   /*optional bits*/
   for(i_ = 0; i_ < 1; i_++) {
      stat = DEC_BIT(pctxt, &optbits[i_]);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   }

   /*decode root elements*/
   /* decode field protocolIEs */
   RTXCTXTPUSHELEMNAME(pctxt, "protocolIEs");
      stat = asn1PD_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs (pctxt, &pvalue->protocolIEs);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
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

int asn1Init_e2ap_E2nodeConfigurationUpdateAcknowledge (e2ap_E2nodeConfigurationUpdateAcknowledge* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs(&pvalue->protocolIEs);
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_E2nodeConfigurationUpdateAcknowledge (OSCTXT* pctxt, e2ap_E2nodeConfigurationUpdateAcknowledge* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs(pctxt, &pvalue->protocolIEs);
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_E2nodeConfigurationUpdateAcknowledge (const char* name, e2ap_E2nodeConfigurationUpdateAcknowledge* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }

   if(asn1PrtToStr_e2ap_E2nodeConfigurationUpdateAcknowledge_protocolIEs("protocolIEs", &pvalue->protocolIEs, buffer, bufSize) <0){
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