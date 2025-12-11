
/*****************************************/
/*           E2nodeComponentConfiguration                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2
    // Nội dung của file .c cho primitive OCTET STRING
     /*****************************************/
/*           e2nodeComponentRequestPart                */
/*****************************************/
//octet string intergrate 
//metadata.parsed.primitive_id == 9

//-> mau la measurementtimingconfiguration
EXTERN int asn1PE_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart value){
    int stat =0;
    stat = pe_OctetString(pctxt, value.numocts, value.data);
    if(stat !=0) return LOG_RTERR(pctxt, stat);
    return stat;
}
EXTERN int asn1PD_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pvalue){
    int stat =0;
    stat = pd_DynOctetString(pctxt, pvalue);
    if(stat !=0) return LOG_RTERR(pctxt, stat);
    return stat;
}
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (const char* name, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart *pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringHexStr(name, pvalue->numocts, pvalue->data, buffer, bufSize) < 0) return -1;
    return 0;
}
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pvalue){
    int stat =0;
    stat = rtPrintToStreamIndent(pctxt);
    if(stat !=0) return LOG_RTERR(pctxt, stat);
    stat = rtPrintToStreamHexStr(pctxt, name, pvalue->numocts, pvalue->data);
    if(stat !=0) return LOG_RTERR(pctxt, stat);
    return stat;
}
EXTERN int asn1Copy_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, const e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pSrcValue, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pDstValue);
EXTERN int asn1Init_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pvalue){
    pvalue->numocts = 0;
    pvalue->data = 0;
    return 0;
}
EXTERN void asn1Free_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart* pvalue){
    if(pvalue->numocts >0){
        rtFreeMemPtr(pctxt, (void*)pvalue->data);
        pvalue->numocts =0;
        pvalue->data =0;
    }
}

    // Nội dung của file .c cho primitive OCTET STRING
     /*****************************************/
/*           e2nodeComponentResponsePart                */
/*****************************************/
//octet string intergrate 
//metadata.parsed.primitive_id == 9

//-> mau la measurementtimingconfiguration
EXTERN int asn1PE_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart value){
    int stat =0;
    stat = pe_OctetString(pctxt, value.numocts, value.data);
    if(stat !=0) return LOG_RTERR(pctxt, stat);
    return stat;
}
EXTERN int asn1PD_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pvalue){
    int stat =0;
    stat = pd_DynOctetString(pctxt, pvalue);
    if(stat !=0) return LOG_RTERR(pctxt, stat);
    return stat;
}
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (const char* name, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart *pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringHexStr(name, pvalue->numocts, pvalue->data, buffer, bufSize) < 0) return -1;
    return 0;
}
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pvalue){
    int stat =0;
    stat = rtPrintToStreamIndent(pctxt);
    if(stat !=0) return LOG_RTERR(pctxt, stat);
    stat = rtPrintToStreamHexStr(pctxt, name, pvalue->numocts, pvalue->data);
    if(stat !=0) return LOG_RTERR(pctxt, stat);
    return stat;
}
EXTERN int asn1Copy_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, const e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pSrcValue, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pDstValue);
EXTERN int asn1Init_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pvalue){
    pvalue->numocts = 0;
    pvalue->data = 0;
    return 0;
}
EXTERN void asn1Free_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart* pvalue){
    if(pvalue->numocts >0){
        rtFreeMemPtr(pctxt, (void*)pvalue->data);
        pvalue->numocts =0;
        pvalue->data =0;
    }
}


// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_E2nodeComponentConfiguration (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "E2nodeComponentConfiguration");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);


   /*encode root elements*/   
   /* encode field e2nodeComponentRequestPart - id = 9*/  
   RTXCTXTPUSHELEMNAME(pctxt, "e2nodeComponentRequestPart");
  
   stat = asn1PE_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart(pctxt, pvalue->e2nodeComponentRequestPart); //octet string no size - mau 9
  
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);


   /* encode field e2nodeComponentResponsePart - id = 9*/  
   RTXCTXTPUSHELEMNAME(pctxt, "e2nodeComponentResponsePart");
  
   stat = asn1PE_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart(pctxt, pvalue->e2nodeComponentResponsePart); //octet string no size - mau 9
  
   if (stat != 0) return LOG_RTERR(pctxt, stat);
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

int asn1PD_e2ap_E2nodeComponentConfiguration (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[2];

   RTXCTXTPUSHTYPENAME(pctxt, "E2nodeComponentConfiguration");

   /*extension bit*/
   stat = DEC_BIT(pctxt, &extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   rtxDListInit(&pvalue->extElem1); 

   /*optional bits*/
   for(i_ = 0; i_ < 2; i_++) {
      stat = DEC_BIT(pctxt, &optbits[i_]);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   }

   /*decode root elements*/
   /* decode field e2nodeComponentRequestPart */
   RTXCTXTPUSHELEMNAME(pctxt, "e2nodeComponentRequestPart");
      stat = asn1PD_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (pctxt, &pvalue->e2nodeComponentRequestPart); //primitive
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field e2nodeComponentResponsePart */
   RTXCTXTPUSHELEMNAME(pctxt, "e2nodeComponentResponsePart");
      stat = asn1PD_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (pctxt, &pvalue->e2nodeComponentResponsePart); //primitive
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

int asn1Init_e2ap_E2nodeComponentConfiguration (e2ap_E2nodeComponentConfiguration* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart (&pvalue->e2nodeComponentRequestPart); //primitive delete &
   asn1Init_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart (&pvalue->e2nodeComponentResponsePart); //primitive delete &
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_E2nodeComponentConfiguration (OSCTXT* pctxt, e2ap_E2nodeComponentConfiguration* pvalue)
{
   if(0==pvalue) return;
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_E2nodeComponentConfiguration (const char* name, e2ap_E2nodeComponentConfiguration* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }

   if(asn1PrtToStr_e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart ("e2nodeComponentRequestPart", &pvalue->e2nodeComponentRequestPart, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart ("e2nodeComponentResponsePart", &pvalue->e2nodeComponentResponsePart, buffer, bufSize) < 0)
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