
/*****************************************/
/*           E2nodeComponentConfigurationAck                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2
    // Nội dung của file .c cho primitive ENUMERATED
    //enumerated intergrate
//metadata.parsed.primitive_id == 13

//mau tu dapsresponseinfo-item -> dapsressponseindicator
const OSEnumItem e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTAB[] = {
    {OSUTF8("success"), 0,7,0},
    {OSUTF8("failure"), 1,7,1}
};

/* Encode / Decode */
EXTERN int asn1PE_e2ap_E2nodeComponentConfigurationAck_updateOutcome (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck_updateOutcome value){
    int stat =0;
    if(value >= 2) {
       rtxErrAddIntParm (pctxt, value);
       return LOG_RTERR (pctxt, RTERR_INVENUM);
    }

    /*extention bit*/
    stat = rtxEncBit (pctxt, 0);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    stat = pe_ConsUnsigned (pctxt, value, 0, OSUINTCONST(1));
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    return stat;
}
EXTERN int asn1PD_e2ap_E2nodeComponentConfigurationAck_updateOutcome (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue){
    int stat = 0;
    OSUINT32 ui;
    OSBOOL extbit = FALSE;
    stat = DEC_BIT(pctxt, &extbit);
    if (stat != 0) return LOG_RTERR (pctxt, stat);

    if(extbit){
        stat = pd_SmallNonNegWholeNumber(pctxt, &ui);
        if(stat != 0) return LOG_RTERR (pctxt, stat);
        *pvalue = ASN_K_EXTENUM;
    }else{
        stat = pd_ConsUnsigned (pctxt, &ui, 0, OSUINTCONST(1));
        if(stat != 0) return LOG_RTERR (pctxt, stat);
    }
    
    return stat;

}

/* Print helpers */
EXTERN void asn1Print_e2ap_E2nodeComponentConfigurationAck_updateOutcome (const char* name, const e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue){
    rtxPrintIndent();
    printf("%s: ", name);
    switch(*pvalue) {
        case 0:
            printf("success\n");
            break;
        case 1:
            printf("failure\n");
            break;
        default:
            printf("??? (%u)\n", *pvalue);
    }
}

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_E2nodeComponentConfigurationAck_updateOutcome (OSCTXT* pctxt, const char* name, const e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue){
    rtPrintToStringIndent(pctxt);
    rtPrintToStream(pctxt, name);
    switch(*pvalue) {
        case 0:
            rtPrintToStream(pctxt, " = success \n");
            break;
        case 1:
            rtPrintToStream(pctxt, " = failure \n");
            break;
        default:
            rtPrintToStreamUnsigned(pctxt, " = ???\n", *pvalue);
    }
}

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_E2nodeComponentConfigurationAck_updateOutcome (const char* name,e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue,  char* buffer,OSSIZE bufSize){
    int stat;
    
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToString(name, buffer, bufSize) < 0) return -1;
    
    switch(*pvalue) {
        case 0:
            stat = rtPrintToString(" = success \n", buffer, bufSize);
            break;
        case 1:
            stat = rtPrintToString(" = failure \n", buffer, bufSize);
            break;
        default:
            stat = rtPrintToStringUnsigned(" = ???\n",*pvalue, buffer, bufSize);
    }
    
    if (stat < 0) return -1;
    return 0;   
}

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_E2nodeComponentConfigurationAck_updateOutcome_ToString (OSUINT32 value){
    OSINT32 idx = value;
    if (idx >= 0 && idx < e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTABSIZE) {
        return e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTAB
        [e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTAB[idx].transidx].name;
    } else {
        return OSUTF8("_UNKNOWN_");
    }
}
EXTERN int e2ap_E2nodeComponentConfigurationAck_updateOutcome_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue){
    OSSIZE valueLen = rtxUTF8LenBytes(value);
    return e2ap_E2nodeComponentConfigurationAck_updateOutcome_ToEnum2 (pctxt, value, valueLen, pvalue);
}

EXTERN int e2ap_E2nodeComponentConfigurationAck_updateOutcome_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue){
    OSINT32 idx = rtxLookupEnum(value, valueLen,
       e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTAB, 
       e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTABSIZE);
    if (idx >= 0) {
       *pvalue = (e2ap_E2nodeComponentConfigurationAck_updateOutcome)e2ap_E2nodeComponentConfigurationAck_updateOutcome_ENUMTAB[idx].value;
       return 0;
    } else {
       rtxErrAddStrParm (pctxt, (const char*)value);
       return LOG_RTERR (pctxt, RTERR_INVENUM);
    }
}

EXTERN int asn1Init_e2ap_E2nodeComponentConfigurationAck_updateOutcome (e2ap_E2nodeComponentConfigurationAck_updateOutcome* pvalue){
    //if (pvalue == 0) return RTERR_NULLPTR;
    //*pvalue = 0;
    return 0;
}

// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_E2nodeComponentConfigurationAck (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "E2nodeComponentConfigurationAck");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);

   /*optional bit for field failureCause*/
   stat = rtxEncBit (pctxt, pvalue->m_failureCausePresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);

   /*encode root elements*/   
   /* encode field updateOutcome - id = 13*/  
   RTXCTXTPUSHELEMNAME(pctxt, "updateOutcome");
   stat = asn1PE_e2ap_E2nodeComponentConfigurationAck_updateOutcome(pctxt, &pvalue->updateOutcome); //enum inter prim
  
  
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);


   /* encode field failureCause - id = -1*/  
   if (pvalue->m_failureCausePresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "failureCause");
   stat = asn1PE_e2ap_Cause (pctxt, &pvalue->failureCause);
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

int asn1PD_e2ap_E2nodeComponentConfigurationAck (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[2];

   RTXCTXTPUSHTYPENAME(pctxt, "E2nodeComponentConfigurationAck");

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
   /* decode field updateOutcome */
   RTXCTXTPUSHELEMNAME(pctxt, "updateOutcome");
      stat = asn1PD_e2ap_E2nodeComponentConfigurationAck_updateOutcome (pctxt, &pvalue->updateOutcome); //primitive
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field failureCause */
   RTXCTXTPUSHELEMNAME(pctxt, "failureCause");
   if (optbits[0]) {
      pvalue->m_failureCausePresent = TRUE;
      stat = asn1PD_e2ap_Cause (pctxt, &pvalue->failureCause);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_failureCausePresent = FALSE;
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

int asn1Init_e2ap_E2nodeComponentConfigurationAck (e2ap_E2nodeComponentConfigurationAck* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_E2nodeComponentConfigurationAck_updateOutcome (&pvalue->updateOutcome); //primitive delete &
   asn1Init_e2ap_Cause (&pvalue->failureCause);
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_E2nodeComponentConfigurationAck (OSCTXT* pctxt, e2ap_E2nodeComponentConfigurationAck* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_Cause (pctxt, &pvalue->failureCause);
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_E2nodeComponentConfigurationAck (const char* name, e2ap_E2nodeComponentConfigurationAck* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }

   if(asn1PrtToStr_e2ap_E2nodeComponentConfigurationAck_updateOutcome ("updateOutcome", &pvalue->updateOutcome, buffer, bufSize) < 0)
   {
      return -1;
   }

   if(asn1PrtToStr_e2ap_Cause ("failureCause", &pvalue->failureCause, buffer, bufSize) < 0)
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