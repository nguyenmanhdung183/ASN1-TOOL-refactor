
/*****************************************/
/*           RICloadInformation                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2
    // Nội dung của file .c cho primitive ENUMERATED
    //enumerated intergrate
//metadata.parsed.primitive_id == 13

//mau tu dapsresponseinfo-item -> dapsressponseindicator
const OSEnumItem e2ap_RICloadInformation_loadStatus_ENUMTAB[] = {
    {OSUTF8("overload"), 0,8,0},
    {OSUTF8("notoverload"), 1,11,1}
};

/* Encode / Decode */
EXTERN int asn1PE_e2ap_RICloadInformation_loadStatus (OSCTXT* pctxt, e2ap_RICloadInformation_loadStatus value){
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
EXTERN int asn1PD_e2ap_RICloadInformation_loadStatus (OSCTXT* pctxt, e2ap_RICloadInformation_loadStatus* pvalue){
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
EXTERN void asn1Print_e2ap_RICloadInformation_loadStatus (const char* name, const e2ap_RICloadInformation_loadStatus* pvalue){
    rtxPrintIndent();
    printf("%s: ", name);
    switch(*pvalue) {
        case 0:
            printf("overload\n");
            break;
        case 1:
            printf("notoverload\n");
            break;
        default:
            printf("??? (%u)\n", *pvalue);
    }
}

/* Convert to stream (pretty print to stream) */
EXTERN int asn1PrtToStrm_e2ap_RICloadInformation_loadStatus (OSCTXT* pctxt, const char* name, const e2ap_RICloadInformation_loadStatus* pvalue){
    rtPrintToStringIndent(pctxt);
    rtPrintToStream(pctxt, name);
    switch(*pvalue) {
        case 0:
            rtPrintToStream(pctxt, " = overload \n");
            break;
        case 1:
            rtPrintToStream(pctxt, " = notoverload \n");
            break;
        default:
            rtPrintToStreamUnsigned(pctxt, " = ???\n", *pvalue);
    }
}

/* Convert to string (write into user buffer) */
EXTERN int asn1PrtToStr_e2ap_RICloadInformation_loadStatus (const char* name,e2ap_RICloadInformation_loadStatus* pvalue,  char* buffer,OSSIZE bufSize){
    int stat;
    
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToString(name, buffer, bufSize) < 0) return -1;
    
    switch(*pvalue) {
        case 0:
            stat = rtPrintToString(" = overload \n", buffer, bufSize);
            break;
        case 1:
            stat = rtPrintToString(" = notoverload \n", buffer, bufSize);
            break;
        default:
            stat = rtPrintToStringUnsigned(" = ???\n",*pvalue, buffer, bufSize);
    }
    
    if (stat < 0) return -1;
    return 0;   
}

/* Enum <-> String conversion */
EXTERN const OSUTF8CHAR* e2ap_RICloadInformation_loadStatus_ToString (OSUINT32 value){
    OSINT32 idx = value;
    if (idx >= 0 && idx < e2ap_RICloadInformation_loadStatus_ENUMTABSIZE) {
        return e2ap_RICloadInformation_loadStatus_ENUMTAB
        [e2ap_RICloadInformation_loadStatus_ENUMTAB[idx].transidx].name;
    } else {
        return OSUTF8("_UNKNOWN_");
    }
}
EXTERN int e2ap_RICloadInformation_loadStatus_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_RICloadInformation_loadStatus* pvalue){
    OSSIZE valueLen = rtxUTF8LenBytes(value);
    return e2ap_RICloadInformation_loadStatus_ToEnum2 (pctxt, value, valueLen, pvalue);
}

EXTERN int e2ap_RICloadInformation_loadStatus_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_RICloadInformation_loadStatus* pvalue){
    OSINT32 idx = rtxLookupEnum(value, valueLen,
       e2ap_RICloadInformation_loadStatus_ENUMTAB, 
       e2ap_RICloadInformation_loadStatus_ENUMTABSIZE);
    if (idx >= 0) {
       *pvalue = (e2ap_RICloadInformation_loadStatus)e2ap_RICloadInformation_loadStatus_ENUMTAB[idx].value;
       return 0;
    } else {
       rtxErrAddStrParm (pctxt, (const char*)value);
       return LOG_RTERR (pctxt, RTERR_INVENUM);
    }
}

EXTERN int asn1Init_e2ap_RICloadInformation_loadStatus (e2ap_RICloadInformation_loadStatus* pvalue){
    //if (pvalue == 0) return RTERR_NULLPTR;
    //*pvalue = 0;
    return 0;
}
    // Nội dung của file .c cho primitive INTEGER (0..100)
    /*****************************************/
/*           loadEstimate                */
/*****************************************/
//interger intergrate
 //metadata.parsed.primitive_id == 6
// mau integer size(a...b) mau la timestayincell xn
//typedef OSUINT8 e2ap_RICloadInformation_loadEstimate;
EXTERN int asn1PE_e2ap_RICloadInformation_loadEstimate (OSCTXT* pctxt, e2ap_RICloadInformation_loadEstimate value){
    int stat =0;

    if(value<=100 && value>= 0){
        stat = pe_ConsUnsigned (pctxt, value, 0, 100);
        if(stat != 0) return LOG_RTERR (pctxt, stat);
    }else{
        rtxErrAddElemNameParm(pctxt);
        rtxErrAddUIntParm(pctxt, value);
        return LOG_RTERR(pctxt, RTERR_CONSVIO);
    }
    return stat;

}
EXTERN int asn1PD_e2ap_RICloadInformation_loadEstimate (OSCTXT* pctxt, e2ap_RICloadInformation_loadEstimate* pvalue){
    int stat =0;
    if(pctxt->buffer.aligned){
        int stat2 = PD_BYTE_ALIGN(pctxt);
        if(stat2 != 0) return LOG_RTERR (pctxt, stat2);
    }

    stat = rtxDecBitsToUInt16(pctxt, pvalue, pctxt->buffer.aligned ? 16:12);
    if(stat !=0) return LOG_RTERR (pctxt, stat);
    if(*pvalue > 100 || *pvalue < 0){
        rtxErrAddElemNameParm(pctxt);
        rtxErrAddUIntParm(pctxt, 100);
        return LOG_RTERR(pctxt, RTERR_CONSVIO);
    }
}
//EXTERN int asn1Print_e2ap_RICloadInformation_loadEstimate (const char* name, const e2ap_RICloadInformation_loadEstimate* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICloadInformation_loadEstimate (const char* name, e2ap_RICloadInformation_loadEstimate* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringUnsigned(name, *pvalue, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_RICloadInformation_loadEstimate (OSCTXT* pctxt, const char* name, const e2ap_RICloadInformation_loadEstimate* pvalue);
EXTERN int asn1Init_e2ap_RICloadInformation_loadEstimate (e2ap_RICloadInformation_loadEstimate* pvalue){
    //if (pvalue == 0) return RTERR_NULLPTR;
    //*pvalue = 0;
    return 0;
}
EXTERN int asn1Free_e2ap_RICloadInformation_loadEstimate (OSCTXT* pctxt, e2ap_RICloadInformation_loadEstimate* pvalue){
    // No dynamic memory to free for integer
    return 0;
}




// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_RICloadInformation (OSCTXT* pctxt, e2ap_RICloadInformation* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "RICloadInformation");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);

   /*optional bit for field loadStatus*/
   stat = rtxEncBit (pctxt, pvalue->m_loadStatusPresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   /*optional bit for field loadEstimate*/
   stat = rtxEncBit (pctxt, pvalue->m_loadEstimatePresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);

   /*encode root elements*/   
   /* encode field loadStatus - id = 13*/  
   if (pvalue->m_loadStatusPresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "loadStatus");
   stat = asn1PE_e2ap_RICloadInformation_loadStatus(pctxt, &pvalue->loadStatus); //enum inter prim
  
  
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   }

   /* encode field loadEstimate - id = 6*/  
   if (pvalue->m_loadEstimatePresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "loadEstimate");
   stat = asn1PE_e2ap_RICloadInformation_loadEstimate(pctxt, pvalue->loadEstimate); //intger mau 6 (a..b)
  
  
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

int asn1PD_e2ap_RICloadInformation (OSCTXT* pctxt, e2ap_RICloadInformation* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[2];

   RTXCTXTPUSHTYPENAME(pctxt, "RICloadInformation");

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
   /* decode field loadStatus */
   RTXCTXTPUSHELEMNAME(pctxt, "loadStatus");
   if (optbits[0]) {
      pvalue->m_loadStatusPresent = TRUE;
      stat = asn1PD_e2ap_RICloadInformation_loadStatus (pctxt, &pvalue->loadStatus); //primitive
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_loadStatusPresent = FALSE;
   }
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field loadEstimate */
   RTXCTXTPUSHELEMNAME(pctxt, "loadEstimate");
   if (optbits[0]) {
      pvalue->m_loadEstimatePresent = TRUE;
      stat = asn1PD_e2ap_RICloadInformation_loadEstimate (pctxt, &pvalue->loadEstimate); //primitive
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_loadEstimatePresent = FALSE;
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

int asn1Init_e2ap_RICloadInformation (e2ap_RICloadInformation* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_RICloadInformation_loadStatus (&pvalue->loadStatus); //primitive delete &
   asn1Init_e2ap_RICloadInformation_loadEstimate (&pvalue->loadEstimate); //primitive delete &
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_RICloadInformation (OSCTXT* pctxt, e2ap_RICloadInformation* pvalue)
{
   if(0==pvalue) return;
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_RICloadInformation (const char* name, e2ap_RICloadInformation* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }

   if(asn1PrtToStr_e2ap_RICloadInformation_loadStatus ("loadStatus", &pvalue->loadStatus, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_RICloadInformation_loadEstimate ("loadEstimate", &pvalue->loadEstimate, buffer, bufSize) < 0)
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