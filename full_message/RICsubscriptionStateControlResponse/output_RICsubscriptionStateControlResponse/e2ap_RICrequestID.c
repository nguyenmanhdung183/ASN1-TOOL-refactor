
/*****************************************/
/*           RICrequestID                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2
    // Nội dung của file .c cho primitive INTEGER (0..65535)
    /*****************************************/
/*           ricRequestorID                */
/*****************************************/
//interger intergrate
 //metadata.parsed.primitive_id == 6
// mau integer size(a...b) mau la timestayincell xn
//typedef OSUINT16 e2ap_RICrequestID_ricRequestorID;
EXTERN int asn1PE_e2ap_RICrequestID_ricRequestorID (OSCTXT* pctxt, e2ap_RICrequestID_ricRequestorID value){
    int stat =0;

    if(value<=65535 && value>= 0){
        stat = pe_ConsUnsigned (pctxt, value, 0, 65535);
        if(stat != 0) return LOG_RTERR (pctxt, stat);
    }else{
        rtxErrAddElemNameParm(pctxt);
        rtxErrAddUIntParm(pctxt, value);
        return LOG_RTERR(pctxt, RTERR_CONSVIO);
    }
    return stat;

}
EXTERN int asn1PD_e2ap_RICrequestID_ricRequestorID (OSCTXT* pctxt, e2ap_RICrequestID_ricRequestorID* pvalue){
    int stat =0;
    if(pctxt->buffer.aligned){
        int stat2 = PD_BYTE_ALIGN(pctxt);
        if(stat2 != 0) return LOG_RTERR (pctxt, stat2);
    }

    stat = rtxDecBitsToUInt16(pctxt, pvalue, pctxt->buffer.aligned ? 16:12);
    if(stat !=0) return LOG_RTERR (pctxt, stat);
    if(*pvalue > 65535 || *pvalue < 0){
        rtxErrAddElemNameParm(pctxt);
        rtxErrAddUIntParm(pctxt, 65535);
        return LOG_RTERR(pctxt, RTERR_CONSVIO);
    }
}
//EXTERN int asn1Print_e2ap_RICrequestID_ricRequestorID (const char* name, const e2ap_RICrequestID_ricRequestorID* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICrequestID_ricRequestorID (const char* name, e2ap_RICrequestID_ricRequestorID* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringUnsigned(name, *pvalue, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_RICrequestID_ricRequestorID (OSCTXT* pctxt, const char* name, const e2ap_RICrequestID_ricRequestorID* pvalue);
EXTERN int asn1Init_e2ap_RICrequestID_ricRequestorID (e2ap_RICrequestID_ricRequestorID* pvalue){
    //if (pvalue == 0) return RTERR_NULLPTR;
    //*pvalue = 0;
    return 0;
}
EXTERN int asn1Free_e2ap_RICrequestID_ricRequestorID (OSCTXT* pctxt, e2ap_RICrequestID_ricRequestorID* pvalue){
    // No dynamic memory to free for integer
    return 0;
}



    // Nội dung của file .c cho primitive INTEGER (0..65535)
    /*****************************************/
/*           ricInstanceID                */
/*****************************************/
//interger intergrate
 //metadata.parsed.primitive_id == 6
// mau integer size(a...b) mau la timestayincell xn
//typedef OSUINT16 e2ap_RICrequestID_ricInstanceID;
EXTERN int asn1PE_e2ap_RICrequestID_ricInstanceID (OSCTXT* pctxt, e2ap_RICrequestID_ricInstanceID value){
    int stat =0;

    if(value<=65535 && value>= 0){
        stat = pe_ConsUnsigned (pctxt, value, 0, 65535);
        if(stat != 0) return LOG_RTERR (pctxt, stat);
    }else{
        rtxErrAddElemNameParm(pctxt);
        rtxErrAddUIntParm(pctxt, value);
        return LOG_RTERR(pctxt, RTERR_CONSVIO);
    }
    return stat;

}
EXTERN int asn1PD_e2ap_RICrequestID_ricInstanceID (OSCTXT* pctxt, e2ap_RICrequestID_ricInstanceID* pvalue){
    int stat =0;
    if(pctxt->buffer.aligned){
        int stat2 = PD_BYTE_ALIGN(pctxt);
        if(stat2 != 0) return LOG_RTERR (pctxt, stat2);
    }

    stat = rtxDecBitsToUInt16(pctxt, pvalue, pctxt->buffer.aligned ? 16:12);
    if(stat !=0) return LOG_RTERR (pctxt, stat);
    if(*pvalue > 65535 || *pvalue < 0){
        rtxErrAddElemNameParm(pctxt);
        rtxErrAddUIntParm(pctxt, 65535);
        return LOG_RTERR(pctxt, RTERR_CONSVIO);
    }
}
//EXTERN int asn1Print_e2ap_RICrequestID_ricInstanceID (const char* name, const e2ap_RICrequestID_ricInstanceID* pvalue);
EXTERN int asn1PrtToStr_e2ap_RICrequestID_ricInstanceID (const char* name, e2ap_RICrequestID_ricInstanceID* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringUnsigned(name, *pvalue, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_RICrequestID_ricInstanceID (OSCTXT* pctxt, const char* name, const e2ap_RICrequestID_ricInstanceID* pvalue);
EXTERN int asn1Init_e2ap_RICrequestID_ricInstanceID (e2ap_RICrequestID_ricInstanceID* pvalue){
    //if (pvalue == 0) return RTERR_NULLPTR;
    //*pvalue = 0;
    return 0;
}
EXTERN int asn1Free_e2ap_RICrequestID_ricInstanceID (OSCTXT* pctxt, e2ap_RICrequestID_ricInstanceID* pvalue){
    // No dynamic memory to free for integer
    return 0;
}




// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_RICrequestID (OSCTXT* pctxt, e2ap_RICrequestID* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "RICrequestID");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);


   /*encode root elements*/   
   /* encode field ricRequestorID - id = 6*/  
   RTXCTXTPUSHELEMNAME(pctxt, "ricRequestorID");
   stat = asn1PE_e2ap_RICrequestID_ricRequestorID(pctxt, pvalue->ricRequestorID); //intger mau 6 (a..b)
  
  
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);


   /* encode field ricInstanceID - id = 6*/  
   RTXCTXTPUSHELEMNAME(pctxt, "ricInstanceID");
   stat = asn1PE_e2ap_RICrequestID_ricInstanceID(pctxt, pvalue->ricInstanceID); //intger mau 6 (a..b)
  
  
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

int asn1PD_e2ap_RICrequestID (OSCTXT* pctxt, e2ap_RICrequestID* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[2];

   RTXCTXTPUSHTYPENAME(pctxt, "RICrequestID");

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
   /* decode field ricRequestorID */
   RTXCTXTPUSHELEMNAME(pctxt, "ricRequestorID");
      stat = asn1PD_e2ap_RICrequestID_ricRequestorID (pctxt, &pvalue->ricRequestorID); //primitive
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field ricInstanceID */
   RTXCTXTPUSHELEMNAME(pctxt, "ricInstanceID");
      stat = asn1PD_e2ap_RICrequestID_ricInstanceID (pctxt, &pvalue->ricInstanceID); //primitive
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

int asn1Init_e2ap_RICrequestID (e2ap_RICrequestID* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_RICrequestID_ricRequestorID (&pvalue->ricRequestorID); //primitive delete &
   asn1Init_e2ap_RICrequestID_ricInstanceID (&pvalue->ricInstanceID); //primitive delete &
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_RICrequestID (OSCTXT* pctxt, e2ap_RICrequestID* pvalue)
{
   if(0==pvalue) return;
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_RICrequestID (const char* name, e2ap_RICrequestID* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }

   if(asn1PrtToStr_e2ap_RICrequestID_ricRequestorID ("ricRequestorID", &pvalue->ricRequestorID, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_RICrequestID_ricInstanceID ("ricInstanceID", &pvalue->ricInstanceID, buffer, bufSize) < 0)
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