
/*****************************************/
/*           GlobalRIC-ID                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2
    // Nội dung của file .c cho primitive BIT STRING (SIZE (20))
    /* bitstring intergrate header file */
//metadata.parsed.primitive_id == 3

//mau rnti_full ben xn  bitstring (n)

EXTERN int asn1PE_e2ap_GlobalRIC_ID_ric_ID(OSCTXT* pctxt, e2ap_GlobalRIC_ID_ric_ID* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "ric-ID");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(20), OSUINTCONST(20), 0, 0);
    stat = pe_BitString (pctxt, OS_MIN(pvalue->numbits, 20), pvalue->data);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_GlobalRIC_ID_ric_ID(OSCTXT* pctxt, e2ap_GlobalRIC_ID_ric_ID* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "ric-ID");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(20), OSUINTCONST(20), 0, 0);
    stat = pd_BitString (pctxt, &pvalue->numbits, pvalue->data, sizeof(pvalue->data));
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PrtToStr_e2ap_GlobalRIC_ID_ric_ID (const char* name, e2ap_GlobalRIC_ID_ric_ID* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringBitStrBraceText (name, OS_MIN(pvalue->numbits, 20), pvalue->data, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_GlobalRIC_ID_ric_ID (OSCTXT* pctxt, const char* name, const e2ap_GlobalRIC_ID_ric_ID* pvalue);
//EXTERN int asn1Copy_e2ap_GlobalRIC_ID_ric_ID(OSCTXT* pctxt,const e2ap_GlobalRIC_ID_ric_ID* pSrcValue,  e2ap_GlobalRIC_ID_ric_ID* pDstValue);
EXTERN int asn1Init_e2ap_GlobalRIC_ID_ric_ID(e2ap_GlobalRIC_ID_ric_ID* pvalue){
    if(0==pvalue) return RTERR_NULLPTR;
    pvalue->numbits=0;
    return 0;
}
EXTERN void asn1Free_e2ap_GlobalRIC_ID_ric_ID(OSCTXT* pctxt, e2ap_GlobalRIC_ID_ric_ID* pvalue){
    // No dynamic memory to free for fixed-size BIT STRING
    return;
}




// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_GlobalRIC_ID (OSCTXT* pctxt, e2ap_GlobalRIC_ID* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "GlobalRIC-ID");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);


   /*encode root elements*/   
   /* encode field pLMN_Identity - id = -1*/  
   RTXCTXTPUSHELEMNAME(pctxt, "pLMN-Identity");
   stat = asn1PE_e2ap_PLMN_Identity (pctxt, &pvalue->pLMN_Identity);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);


   /* encode field ric_ID - id = 3*/  
   RTXCTXTPUSHELEMNAME(pctxt, "ric-ID");
   stat = asn1PE_e2ap_GlobalRIC_ID_ric_ID(pctxt, &pvalue->ric_ID); //primitive
  
  
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

int asn1PD_e2ap_GlobalRIC_ID (OSCTXT* pctxt, e2ap_GlobalRIC_ID* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[2];

   RTXCTXTPUSHTYPENAME(pctxt, "GlobalRIC-ID");

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
   /* decode field pLMN_Identity */
   RTXCTXTPUSHELEMNAME(pctxt, "pLMN-Identity");
      stat = asn1PD_e2ap_PLMN_Identity (pctxt, &pvalue->pLMN_Identity);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field ric_ID */
   RTXCTXTPUSHELEMNAME(pctxt, "ric-ID");
      stat = asn1PD_e2ap_GlobalRIC_ID_ric_ID (pctxt, &pvalue->ric_ID); //primitive
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

int asn1Init_e2ap_GlobalRIC_ID (e2ap_GlobalRIC_ID* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_PLMN_Identity (&pvalue->pLMN_Identity);
   asn1Init_e2ap_GlobalRIC_ID_ric_ID (&pvalue->ric_ID); //primitive delete &
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_GlobalRIC_ID (OSCTXT* pctxt, e2ap_GlobalRIC_ID* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_PLMN_Identity (pctxt, &pvalue->pLMN_Identity);
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_GlobalRIC_ID (const char* name, e2ap_GlobalRIC_ID* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }
   if(asn1PrtToStr_e2ap_PLMN_Identity ("pLMN_Identity", &pvalue->pLMN_Identity, buffer, bufSize) < 0)
   {
      return -1;
   }



   if(asn1PrtToStr_e2ap_GlobalRIC_ID_ric_ID ("ric_ID", &pvalue->ric_ID, buffer, bufSize) < 0)
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