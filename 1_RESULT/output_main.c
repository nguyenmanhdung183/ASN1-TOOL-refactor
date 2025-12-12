#include "output_main.h"
// --- Begin of doc/header.c ---
//======================E2AP.c========================//
// --- End of doc/header.c ---

// --- Begin of e2ap_TransactionID.c ---
/*****************************************/
/*           TransactionID                */
/*****************************************/
//5 mau integer
//mau 5 integer size(a .. b..) mau la nrfreqencyband
EXTERN int asn1PE_e2ap_TransactionID (OSCTXT* pctxt, e2ap_TransactionID value){
    int stat =0;
    OSBOOL extbit = FALSE;
    RTXCTXTPUSHTYPENAME (pctxt, "TransactionID");
    if(value>0 && value<=255){
        extbit = 0;
    }
    else extbit =1;
    stat = rtxEncBit (pctxt, extbit);
    if (stat != 0) return LOG_RTERR (pctxt, stat);
    if(extbit){
        stat = pe_UnconsUnsigned (pctxt, value);
        if(stat != 0) return LOG_RTERR (pctxt, stat);
    }
    else{
        stat = pe_ConsUnsigned (pctxt, value, 0, 255);
        if (stat != 0) return LOG_RTERR (pctxt, stat);
    }
    RTXCTXTPOPTYPENAME (pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_TransactionID (OSCTXT* pctxt, e2ap_TransactionID* pvalue){
    int stat =0;
    OSBOOL extbit = FALSE;
    RTXCTXTPUSHTYPENAME (pctxt, "TransactionID");
    /*extensiobit*/
    stat = DEC_BIT (pctxt, &extbit);
    if (stat != 0) return LOG_RTERR (pctxt, stat);
    if(extbit==0){
        stat = pd_ConsUnsigned (pctxt, pvalue, 0, 255);
        if (stat != 0) return LOG_RTERR (pctxt, stat);
    }else{
        stat = pd_UnconsUnsigned (pctxt, pvalue);
        if (stat != 0) return LOG_RTERR (pctxt, stat);
    }
    RTXCTXTPOPTYPENAME (pctxt);
    return stat;
}
//EXTERN int asn1Print_e2ap_TransactionID (const char* name, const e2ap_TransactionID* pvalue);
EXTERN int asn1PrtToStr_e2ap_TransactionID (const char* name, e2ap_TransactionID* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToString(name, *pvalue, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_TransactionID (OSCTXT* pctxt, const char* name, const e2ap_TransactionID* pvalue);
EXTERN int asn1Init_e2ap_TransactionID (e2ap_TransactionID* pvalue){
    //if (pvalue == 0) return RTERR_NULLPTR;
    //*pvalue = 0;
    return 0;
}
EXTERN int asn1Free_e2ap_TransactionID (OSCTXT* pctxt, e2ap_TransactionID* pvalue){
    // No dynamic memory to free for integer
    return 0;
}

// --- End of e2ap_TransactionID.c ---

// --- Begin of e2ap_TNLinformation.c ---

/*****************************************/
/*           TNLinformation                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2
    // Nội dung của file .c cho primitive BIT STRING (SIZE(1..160,...))
    /* bitstring intergrate header file */
//metadata.parsed.primitive_id == 2


//mau Transportlayeraddress xn bitstring (a..b,..)

EXTERN int asn1PE_e2ap_TNLinformation_tnlAddress(OSCTXT* pctxt, e2ap_TNLinformation_tnlAddress value){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "tnlAddress");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(1), OSUINTCONST(160), OSUINTCONST(0), OSUINT32_MAX);
    stat = pe_BitString (pctxt, OS_MIN(value.numbits, 160), value.data);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_TNLinformation_tnlAddress(OSCTXT* pctxt, e2ap_TNLinformation_tnlAddress* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "tnlAddress");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(1), OSUINTCONST(160), OSUINTCONST(0), OSUINT32_MAX);
    stat =  pd_DynBitString (pctxt, pvalue);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PrtToStr_e2ap_TNLinformation_tnlAddress (const char* name, e2ap_TNLinformation_tnlAddress *pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringBitStrBraceText(name, OS_MIN(pvalue->numbits, 160), pvalue->data, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_TNLinformation_tnlAddress (OSCTXT* pctxt, const char* name, const e2ap_TNLinformation_tnlAddress* pvalue);
//EXTERN int asn1Copy_e2ap_TNLinformation_tnlAddress(OSCTXT* pctxt,const e2ap_TNLinformation_tnlAddress* pSrcValue,  e2ap_TNLinformation_tnlAddress* pDstValue);
EXTERN int asn1Init_e2ap_TNLinformation_tnlAddress(e2ap_TNLinformation_tnlAddress* pvalue){
    if(0==pvalue) return RTERR_NULLPTR;
    pvalue->numbits=0;
    pvalue->data =0;
    return 0;
}
EXTERN void asn1Free_e2ap_TNLinformation_tnlAddress(OSCTXT* pctxt, e2ap_TNLinformation_tnlAddress* pvalue){
    if(0==pvalue) return;   
    if(pvalue->numbits >0){
        rtxMemFreePtr(pctxt, (void*)pvalue->data);
        pvalue->data =0;
        pvalue->numbits=0;
    }
}


    // Nội dung của file .c cho primitive BIT STRING (SIZE(16))
    /* bitstring intergrate header file */
//metadata.parsed.primitive_id == 3

//mau rnti_full ben xn  bitstring (n)

EXTERN int asn1PE_e2ap_TNLinformation_tnlPort(OSCTXT* pctxt, e2ap_TNLinformation_tnlPort* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "tnlPort");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(16), OSUINTCONST(16), 0, 0);
    stat = pe_BitString (pctxt, OS_MIN(pvalue->numbits, 16), pvalue->data);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_TNLinformation_tnlPort(OSCTXT* pctxt, e2ap_TNLinformation_tnlPort* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "tnlPort");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(16), OSUINTCONST(16), 0, 0);
    stat = pd_BitString (pctxt, &pvalue->numbits, pvalue->data, sizeof(pvalue->data));
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PrtToStr_e2ap_TNLinformation_tnlPort (const char* name, e2ap_TNLinformation_tnlPort* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringBitStrBraceText (name, OS_MIN(pvalue->numbits, 16), pvalue->data, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_TNLinformation_tnlPort (OSCTXT* pctxt, const char* name, const e2ap_TNLinformation_tnlPort* pvalue);
//EXTERN int asn1Copy_e2ap_TNLinformation_tnlPort(OSCTXT* pctxt,const e2ap_TNLinformation_tnlPort* pSrcValue,  e2ap_TNLinformation_tnlPort* pDstValue);
EXTERN int asn1Init_e2ap_TNLinformation_tnlPort(e2ap_TNLinformation_tnlPort* pvalue){
    if(0==pvalue) return RTERR_NULLPTR;
    pvalue->numbits=0;
    return 0;
}
EXTERN void asn1Free_e2ap_TNLinformation_tnlPort(OSCTXT* pctxt, e2ap_TNLinformation_tnlPort* pvalue){
    // No dynamic memory to free for fixed-size BIT STRING
    return;
}




// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_TNLinformation (OSCTXT* pctxt, e2ap_TNLinformation* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "TNLinformation");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);

   /*optional bit for field tnlPort*/
   stat = rtxEncBit (pctxt, pvalue->m_tnlPortPresent);
   if (stat != 0) return LOG_RTERR(pctxt, stat);

   /*encode root elements*/   
   /* encode field tnlAddress - id = 2*/  
   RTXCTXTPUSHELEMNAME(pctxt, "tnlAddress");
   stat = asn1PE_e2ap_TNLinformation_tnlAddress(pctxt, pvalue->tnlAddress); //primitive
  
  
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);


   /* encode field tnlPort - id = 3*/  
   if (pvalue->m_tnlPortPresent) {//OPTIONAL FIELD
   RTXCTXTPUSHELEMNAME(pctxt, "tnlPort");
   stat = asn1PE_e2ap_TNLinformation_tnlPort(pctxt, &pvalue->tnlPort); //primitive
  
  
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

int asn1PD_e2ap_TNLinformation (OSCTXT* pctxt, e2ap_TNLinformation* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[2];

   RTXCTXTPUSHTYPENAME(pctxt, "TNLinformation");

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
   /* decode field tnlAddress */
   RTXCTXTPUSHELEMNAME(pctxt, "tnlAddress");
      stat = asn1PD_e2ap_TNLinformation_tnlAddress (pctxt, &pvalue->tnlAddress); //primitive
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field tnlPort */
   RTXCTXTPUSHELEMNAME(pctxt, "tnlPort");
   if (optbits[0]) {
      pvalue->m_tnlPortPresent = TRUE;
      stat = asn1PD_e2ap_TNLinformation_tnlPort (pctxt, &pvalue->tnlPort); //primitive
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   } else {
      pvalue->m_tnlPortPresent = FALSE;
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

int asn1Init_e2ap_TNLinformation (e2ap_TNLinformation* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_TNLinformation_tnlAddress (&pvalue->tnlAddress); //primitive delete &
   asn1Init_e2ap_TNLinformation_tnlPort (&pvalue->tnlPort); //primitive delete &
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_TNLinformation (OSCTXT* pctxt, e2ap_TNLinformation* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_TNLinformation_tnlAddress (pctxt, &pvalue->tnlAddress); //primitive delete &
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_TNLinformation (const char* name, e2ap_TNLinformation* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }

   if(asn1PrtToStr_e2ap_TNLinformation_tnlAddress ("tnlAddress", &pvalue->tnlAddress, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_TNLinformation_tnlPort ("tnlPort", &pvalue->tnlPort, buffer, bufSize) < 0)
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
// --- End of e2ap_TNLinformation.c ---

// --- Begin of e2ap_TNLusage.c ---
/******************************************************/
/*                                                    */
/*    TNLusage                          */
/*                                                    */
/******************************************************/
//enumerated


const OSEnumItem e2ap_TNLusage_ENUMTAB[] = {
    { OSUTF8("ric_service"), 0, 11, 0 },
    { OSUTF8("support_function"), 1, 16, 1 },
    { OSUTF8("both"), 2, 4, 2 }
};


const OSUTF8CHAR* e2ap_TNLusage_ToString (OSUINT32 value){
   OSINT32 idx = value;
   if(idx >=0 && idx < e2ap_TNLusage_ENUMTABSIZE){
      return e2ap_TNLusage_ENUMTAB[e2ap_TNLusage_ENUMTAB[idx].transidx].name;
   }else{
      return OSUTF8("_UNKNOWN_");
   }
}


int e2ap_TNLusage_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_TNLusage* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes(value);
   return e2ap_TNLusage_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int e2ap_TNLusage_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_TNLusage* pvalue)
{
   OSINT32 idx = rtxLookupEnum(value, valueLen,
      e2ap_TNLusage_ENUMTAB, e2ap_TNLusage_ENUMTABSIZE);
   if (idx >= 0) {
      *pvalue = (e2ap_TNLusage)e2ap_TNLusage_ENUMTAB[idx].value;
      return 0;
   } else {
      //rtxErrAddIntParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int
      rtxErrAddStrParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int

      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

EXTERN int asn1PE_e2ap_TNLusage (OSCTXT* pctxt, e2ap_TNLusage value)
{
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "TNLusage");
   if (value >= 3) {
      rtxErrAddIntParm (pctxt, value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
   stat = pe_ConsUnsigned (pctxt, value, 0, OSUINTCONST(2));
   if(stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_TNLusage (OSCTXT* pctxt, e2ap_TNLusage* pvalue)
{
   int stat = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "TNLusage");

   stat = pd_ConsUnsigned (pctxt, pvalue, 0, OSUINTCONST(2));
   if(stat != 0) return LOG_RTERR (pctxt, stat);

   RTXCTXTPOPTYPENAME (pctxt);

   return stat;
}

EXTERN int asn1PrtToStr_e2ap_TNLusage (const char* name, e2ap_TNLusage* pvalue, char* buffer, OSSIZE bufSize)
{
   int stat;

   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToString(name, buffer, bufSize) < 0) return -1;

   switch(*pvalue) {
      case 0:
         stat = rtPrintToString(" = ric_service \n", buffer, bufSize);
         break;
      case 1:
         stat = rtPrintToString(" = support_function \n", buffer, bufSize);
         break;
      case 2:
         stat = rtPrintToString(" = both \n", buffer, bufSize);
         break;
      default:
         stat = rtPrintToString(" = ???\n", buffer, bufSize);
   }

   if (stat < 0) return -1;
   return 0;

}

/*Init*/
EXTERN int asn1Init_e2ap_TNLusage (e2ap_TNLusage* pvalue){
      //if (pvalue == 0) return RTERR_NULLPTR;
      //*pvalue = 0;
      return 0;
}

EXTERN void asn1Free_e2ap_TNLusage (OSCTXT* pctxt, e2ap_TNLusage* pvalue){
   return 0;
}
// --- End of e2ap_TNLusage.c ---

// --- Begin of e2ap_E2connectionUpdate_Item.c ---

/*****************************************/
/*           E2connectionUpdate-Item                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2

// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_E2connectionUpdate_Item (OSCTXT* pctxt, e2ap_E2connectionUpdate_Item* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "E2connectionUpdate-Item");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);


   /*encode root elements*/   
   /* encode field tnlInformation - id = -1*/  
   RTXCTXTPUSHELEMNAME(pctxt, "tnlInformation");
   stat = asn1PE_e2ap_TNLinformation (pctxt, &pvalue->tnlInformation);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);


   /* encode field tnlUsage - id = -1*/  
   RTXCTXTPUSHELEMNAME(pctxt, "tnlUsage");
   stat = asn1PE_e2ap_TNLusage (pctxt, pvalue->tnlUsage);
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

int asn1PD_e2ap_E2connectionUpdate_Item (OSCTXT* pctxt, e2ap_E2connectionUpdate_Item* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[2];

   RTXCTXTPUSHTYPENAME(pctxt, "E2connectionUpdate-Item");

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
   /* decode field tnlInformation */
   RTXCTXTPUSHELEMNAME(pctxt, "tnlInformation");
      stat = asn1PD_e2ap_TNLinformation (pctxt, &pvalue->tnlInformation);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field tnlUsage */
   RTXCTXTPUSHELEMNAME(pctxt, "tnlUsage");
      stat = asn1PD_e2ap_TNLusage (pctxt, &pvalue->tnlUsage);
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

int asn1Init_e2ap_E2connectionUpdate_Item (e2ap_E2connectionUpdate_Item* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_TNLinformation (&pvalue->tnlInformation);
   asn1Init_e2ap_TNLusage (&pvalue->tnlUsage);
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_E2connectionUpdate_Item (OSCTXT* pctxt, e2ap_E2connectionUpdate_Item* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_TNLinformation (pctxt, &pvalue->tnlInformation);
   asn1Free_e2ap_TNLusage (pctxt, &pvalue->tnlUsage);
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_E2connectionUpdate_Item (const char* name, e2ap_E2connectionUpdate_Item* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }
   if(asn1PrtToStr_e2ap_TNLinformation ("tnlInformation", &pvalue->tnlInformation, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_TNLusage ("tnlUsage", &pvalue->tnlUsage, buffer, bufSize) < 0)
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
// --- End of e2ap_E2connectionUpdate_Item.c ---

// --- Begin of e2ap_E2connectionUpdate_ItemIEs.c ---
/*****************************************/
/*           E2connectionUpdate_ItemIEs                */
/*****************************************/
/* ie.c.j2 */
/*ie thường*/
int asn1PE_e2ap_E2connectionUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_ItemIEs* pvalue)
{
   int stat = 0;
   //RTXCTXTPUSHTYPENAME (pctxt, "E2connectionUpdate-ItemIEs");

   /* encode id */
   RTXCTXTPUSHELEMNAME (pctxt, "id");
   stat = asn1PE_e2ap_ProtocolIE_ID (pctxt, pvalue->id);//xoa con tro
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPELEMNAME (pctxt);

   /* encode criticality */
   RTXCTXTPUSHELEMNAME (pctxt, "criticality");
   stat = asn1PE_e2ap_Criticality (pctxt, pvalue->criticality);//xoa con tro
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPELEMNAME (pctxt);

   /* encode value */
   RTXCTXTPUSHELEMNAME (pctxt, "value");

   {
      OSCTXT ictxt;
      OSOCTET* pDynamicEncodeBuffer;
      ASN1OpenType openType;
      OSBOOL  encoded = TRUE;

      openType.numocts = 0;
      openType.data = 0;

      rtxCopyContext (&ictxt, pctxt);
      pctxt->pStream = 0;

      stat = rtxInitContextBuffer (pctxt, 0, 0);
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      switch (pvalue->value.t) {
      case T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item:
         
        // RTXCTXTPUSHELEMNAME (pctxt, "E2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item");
         RTXCTXTPUSHELEMNAME (pctxt, "E2connectionUpdate-Item");
         stat = asn1PE_e2ap_E2connectionUpdate_Item (pctxt, pvalue->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item);
         RTXCTXTPOPELEMNAME (pctxt);
      
         break;

      case T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_UNDEF_:
      {
          if(0!=pvalue->value.u.extElem1){
              openType.numocts = pvalue->value.u.extElem1->numocts;
              openType.data = pvalue->value.u.extElem1->data;
          } else {
              /* No extension element to encode */
          }
          encoded = FALSE;
          break;
      }
      default:
         encoded = FALSE;
         stat = RTERR_INVOPT;
      }

      if (encoded) {
         openType.numocts = (OSUINT32) pe_GetMsgLen (pctxt);
         openType.data = pDynamicEncodeBuffer = pctxt->buffer.data;
      }
      rtxCopyContext (pctxt, &ictxt);
      if(stat ==0) stat = pe_OpenType(pctxt, openType.numocts, openType.data);
      /*free dynamic encode buffer*/
      if(encoded){
          rtxMemFreePtr(pctxt, pDynamicEncodeBuffer);
      }
   }
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPELEMNAME (pctxt);
   //RTXCTXTPOPTYPENAME (pctxt);
   return 0;
}

int asn1PD_e2ap_E2connectionUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_ItemIEs* pvalue)
{
   int stat =0;
   /*deode root element id*/
   RTXCTXTPUSHELEMNAME(pctxt, "id");
   stat = asn1PD_e2ap_ProtocolIE_ID (pctxt, &pvalue->id);
   if(stat!=0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /*decode root element criticality*/
   RTXCTXTPUSHELEMNAME(pctxt, "criticality");
   stat = asn1PD_e2ap_Criticality (pctxt, &pvalue->criticality);
   if(stat!=0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);
   /*decode root element value*/
   RTXCTXTPUSHELEMNAME(pctxt, "value");
   {
      OSUINT32 openTypeLen;
      size_t bitStartOffset, bitLength;
      stat = pd_UnconsLength(pctxt, &openTypeLen);
      if(stat <0) return LOG_RTERR(pctxt, stat);
      else if(stat == RT_OK_FRAG){
         rtxErrAddStrParm(pctxt, "open type with fragmented length use - perindef");
         return LOG_RTERRNEW(pctxt, RTERR_NOTSUPP);
      }
      bitStartOffset = PU_GETCTXTBITOFFSET(pctxt);
      bitLength = openTypeLen * 8;
      switch (pvalue->id){
         case T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item;
            RTXCTXTPUSHELEMNAME(pctxt, "E2connectionUpdate-Item");
            //pvalue->value.u._e2ap_E2connectionUpdate_ItemIEs_id_id_E2connectionUpdate_Item 
             pvalue->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item 
                    = rtxMemAllocType(pctxt, e2ap_E2connectionUpdate_Item);
            //asn1Init_e2ap_E2connectionUpdate_Item(pvalue->value.u._e2ap_E2connectionUpdate_ItemIEs_id_id_E2connectionUpdate_Item);
            asn1Init_e2ap_E2connectionUpdate_Item(pvalue->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item);
            stat = asn1PD_e2ap_E2connectionUpdate_Item (pctxt,
                    (e2ap_E2connectionUpdate_Item*)pvalue->value.
                    u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item);
            if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;

        default:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_UNDEF_;
            pvalue->value.u.extElem1 = rtxMemAllocType(pctxt, ASN1OpenType);
            if(0==pvalue->value.u.extElem1){
                return LOG_RTERR(pctxt, RTERR_NOMEM);
            }

            {
                OSOCTET *pdata =(OSOCTET*)rtxMemAlloc(pctxt, openTypeLen);
                if(0==pdata){
                    return LOG_RTERR(pctxt, RTERR_NOMEM);
                }
                stat = rtxDecBitsToByteArray(pctxt, pdata, openTypeLen, openTypeLen*8);
                if(stat!=0){
                    rtxMemFreePtr(pctxt, pdata);
                    rtxMemFreePtr(pctxt, pvalue->value.u.extElem1);
                    return LOG_RTERR(pctxt, stat);
                }

                pvalue->value.u.extElem1->numocts = openTypeLen;
                pvalue->value.u.extElem1->data = pdata;
            }
            break;
      }
      {
      size_t bitEndOffset = PU_GETCTXTBITOFFSET(pctxt);
      size_t bitsConsumed = bitEndOffset - bitStartOffset;
      if(bitsConsumed < bitLength){
         stat = pd_moveBitCursor(pctxt, (int)(bitLength - bitsConsumed));
      } else {
         stat = (bitsConsumed > bitLength) ? ASN_E_INVLEN : 0;
      }
      }
   }
   if(stat!=0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);
   return stat;
}

void asn1Init_e2ap_E2connectionUpdate_ItemIEs (e2ap_E2connectionUpdate_ItemIEs* pvalue)
{
   if (!pvalue) return;
   OSCRTLMEMSET (pvalue, 0, sizeof(e2ap_E2connectionUpdate_ItemIEs));
}

#if 0
void asn1Free_e2ap_E2connectionUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_ItemIEs* pvalue)
{
   if (!pvalue) return;
   if (pvalue->extElem1) {
      rtxMemFreeArray (pctxt, pvalue->extElem1);
      pvalue->extElem1 = 0;
      pvalue->extElem1_n = 0;
   }
}
#endif
void asn1Free_e2ap_E2connectionUpdate_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionUpdate_ItemIEs* pvalue)
{
   if(0==pvalue) return;
   switch(pvalue->value.t){
      case T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item:
         asn1Free_e2ap_E2connectionUpdate_Item (pctxt, pvalue->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item);
         rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item);
         pvalue->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item = 0;
         break;
      case T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_UNDEF_:
         if(0!=pvalue->value.u.extElem1){
             rtxMemFreePtr(pctxt, pvalue->value.u.extElem1->data);
             rtxMemFreePtr(pctxt, pvalue->value.u.extElem1);
             pvalue->value.u.extElem1 =0;
         }
         break;
         default:;
   }
}

int  asn1PrtToStr_e2ap_E2connectionUpdate_ItemIEs (const char * name, e2ap_E2connectionUpdate_ItemIEs* pvalue, char * buffer, OSSIZE bufSize){
   if(rtPrintToStringOpenBrace(name, buffer, bufSize)<0)
       return -1;

      if(asn1PrtToStr_e2ap_ProtocolIE_ID("id", &pvalue->id, buffer, bufSize)<0)
         return -1;

      if(asn1PrtToStr_e2ap_Criticality("criticality", &pvalue->criticality, buffer, bufSize)<0)
         return -1;
      if(rtPrintToStringOpenBrace("value", buffer, bufSize)<0)
         return -1;
      switch (pvalue->value.t) {
      case T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item:
         if(asn1PrtToStr_e2ap_E2connectionUpdate_Item("E2connectionUpdate-Item",
                pvalue->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item, buffer, bufSize)<0)// dungnm23 check lai nhe xem la
            return -1;
         break;
      default:
         if(0!=pvalue -> value.u.extElem1){
             rtPrintToStringIndent(buffer, bufSize);
             rtPrintToStringHexStr("extElem1", pvalue->value.u.extElem1->numocts, pvalue->value.u.extElem1->data, buffer, bufSize);

         }
      }
      if(rtPrintToStringCloseBrace( buffer, bufSize)<0) return -1;
      if(rtPrintToStringCloseBrace( buffer, bufSize)<0) return -1;

      return 0;

}
 


// --- End of e2ap_E2connectionUpdate_ItemIEs.c ---

// --- Begin of e2ap_E2connectionUpdate_List.c ---
/*****************************************/
/*           E2connectionUpdate_List                */
/*****************************************/
//seq_of_single_container


int asn1PE_e2ap_E2connectionUpdate_List (OSCTXT* pctxt, e2ap_E2connectionUpdate_List* pvalue)
{
   int stat = 0;
   OSRTDListNode* pnode;
   OSSIZE xx1 = 0;
   OSSIZE count = 0;

   e2ap_E2connectionUpdate_ItemIEs* pdata;

   RTXCTXTPUSHTYPENAME (pctxt, "E2connectionUpdate-List");

   /* encode length determinant */
   PU_SETSIZECONSTRAINT (pctxt, OSUINTCONST(1), OSUINTCONST(32), 0, 0);

   stat = pe_Length (pctxt, pvalue->count);
   if (stat < 0) return LOG_RTERR (pctxt, stat);

   /* encode elements */
   pnode = pvalue->head;
   for (xx1 = 0; pnode != 0 && xx1 < pvalue->count; pnode = pnode->next, xx1++) {
      pdata = (e2ap_E2connectionUpdate_ItemIEs*) pnode->data;
      RTXCTXTPUSHARRAYELEMNAME (pctxt, "SEQUENCE", xx1);

      stat = asn1PE_e2ap_E2connectionUpdate_ItemIEs (pctxt, pdata);
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      //xx1++;
      RTXCTXTPOPARRAYELEMNAME (pctxt);
   }

   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

int asn1PD_e2ap_E2connectionUpdate_List (OSCTXT* pctxt, e2ap_E2connectionUpdate_List* ppvalue)
{
   int stat = 0;
   OSSIZE xx1 = 0;
   OSSIZE count = 0;

   e2ap_E2connectionUpdate_ItemIEs* pdata;

   RTXCTXTPUSHTYPENAME (pctxt, "E2connectionUpdate-List");

   PU_SETSIZECONSTRAINT (pctxt, OSUINTCONST(1), OSUINTCONST(32), 0, 0);

   stat = pd_Length64 (pctxt, &count);
   if (stat != 0) return LOG_RTERR (pctxt, stat);

   rtxDListInit (ppvalue);

   for (xx1 = 0; xx1 < count; xx1++) {
      RTXCTXTPUSHARRAYELEMNAME (pctxt, "SEQUENCE", xx1);

      pdata = rtxMemAllocType (pctxt, e2ap_E2connectionUpdate_ItemIEs);
      if (!pdata) return LOG_RTERR (pctxt, RTERR_NOMEM);
      asn1Init_e2ap_E2connectionUpdate_ItemIEs (pdata);
      stat = asn1PD_e2ap_E2connectionUpdate_ItemIEs (pctxt, pdata);
      if (stat != 0) {
         rtxMemFreePtr (pctxt, pdata);
         return LOG_RTERR (pctxt, stat);
      }

      rtxDListAppendNode (ppvalue, pdata);

      RTXCTXTPOPARRAYELEMNAME (pctxt);
   }

   RTXCTXTPOPTYPENAME (pctxt);
   return 0;
}

void asn1Init_e2ap_E2connectionUpdate_List (e2ap_E2connectionUpdate_List* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   rtxDListFastInit (pvalue);
}

void asn1Free_e2ap_E2connectionUpdate_List (OSCTXT* pctxt, e2ap_E2connectionUpdate_List* pvalue)
{
   if(pvalue==0) return;
   OSRTDListNode* pnode = pvalue->head;
   while (pnode) {
      e2ap_E2connectionUpdate_ItemIEs* pdata = (e2ap_E2connectionUpdate_ItemIEs*) pnode->data;
      if (pdata) {
         asn1Free_e2ap_E2connectionUpdate_ItemIEs (pctxt, pdata);
         rtxMemFreePtr (pctxt, pdata);
      }
      pnode = pnode->next;
   }
      rtxDListFreeAll(pctxt, pvalue);
}

#if 0
void asn1Free_e2ap_E2connectionUpdate_List (OSCTXT* pctxt, e2ap_E2connectionUpdate_List* pvalue){
   if(0==pvalue ) return;
   {
      e2ap_E2connectionUpdate_ItemIEs * pdata;
      OSRTDListNode *pnode = pvalue->head;
      while(0!=pnode){
         pdata = (e2ap_E2connectionUpdate_ItemIEs*)pnode->data;
         asn1Free_e2ap_E2connectionUpdate_ItemIEs(pctxt, pdata);
         pnode = pnode->next;
      }
      rtxDListFreeAll(pctxt, pvalue);
   }
}
#endif


int asn1PrtToStr_e2ap_E2connectionUpdate_List(const char* name, e2ap_E2connectionUpdate_List* pvalue, char* buffer, OSSIZE bufSize)
{
    e2ap_E2connectionUpdate_ItemIEs* pdata;
    OSRTDListNode* pnode;
    char nameBuf[256];
    char numBuf[32];
    OSUINT32 xx1=0;
    for(pnode = pvalue->head;  xx1 < pvalue->count && pnode != 0; pnode = pnode->next, xx1++){
        pdata = (e2ap_E2connectionUpdate_ItemIEs*)pnode->data;
        rtxUIntToCharStr(xx1, numBuf, sizeof(numBuf), 0);
        rtxStrJoin(nameBuf, sizeof(nameBuf), name, "[", numBuf, "]", 0);
        #if 1
        if(asn1PrtToStr_e2ap_E2connectionUpdate_ItemIEs(nameBuf, pdata, buffer, bufSize) <0){
            return -1;
        }
        #endif
    }
    return 0;
}
// --- End of e2ap_E2connectionUpdate_List.c ---

// --- Begin of e2ap_CauseRICrequest.c ---
/******************************************************/
/*                                                    */
/*    CauseRICrequest                          */
/*                                                    */
/******************************************************/
//enumerated


const OSEnumItem e2ap_CauseRICrequest_ENUMTAB[] = {
    { OSUTF8("ran_function_id_invalid"), 0, 23, 0 },
    { OSUTF8("action_not_supported"), 1, 20, 1 },
    { OSUTF8("excessive_actions"), 2, 17, 2 },
    { OSUTF8("duplicate_action"), 3, 16, 3 },
    { OSUTF8("duplicate_event_trigger"), 4, 23, 4 },
    { OSUTF8("function_resource_limit"), 5, 23, 5 },
    { OSUTF8("request_id_unknown"), 6, 18, 6 },
    { OSUTF8("inconsistent_action_subsequent_action_sequence"), 7, 46, 7 },
    { OSUTF8("control_message_invalid"), 8, 23, 8 },
    { OSUTF8("ric_call_process_id_invalid"), 9, 27, 9 },
    { OSUTF8("control_timer_expired"), 10, 21, 10 },
    { OSUTF8("control_failed_to_execute"), 11, 25, 11 },
    { OSUTF8("system_not_ready"), 12, 16, 12 },
    { OSUTF8("unspecified"), 13, 11, 13 },
    { OSUTF8("ric_subscription_end_time_expired"), 14, 33, 14 },
    { OSUTF8("ric_subscription_end_time_invalid"), 15, 33, 15 },
    { OSUTF8("duplicate_ric_request_id"), 16, 24, 16 },
    { OSUTF8("eventTriggerNotSupported"), 17, 24, 17 },
    { OSUTF8("requested_information_unavailable"), 18, 33, 18 },
    { OSUTF8("invalid_information_request"), 19, 27, 19 }
};


const OSUTF8CHAR* e2ap_CauseRICrequest_ToString (OSUINT32 value){
   OSINT32 idx = value;
   if(idx >=0 && idx < e2ap_CauseRICrequest_ENUMTABSIZE){
      return e2ap_CauseRICrequest_ENUMTAB[e2ap_CauseRICrequest_ENUMTAB[idx].transidx].name;
   }else{
      return OSUTF8("_UNKNOWN_");
   }
}


int e2ap_CauseRICrequest_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseRICrequest* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes(value);
   return e2ap_CauseRICrequest_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int e2ap_CauseRICrequest_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseRICrequest* pvalue)
{
   OSINT32 idx = rtxLookupEnum(value, valueLen,
      e2ap_CauseRICrequest_ENUMTAB, e2ap_CauseRICrequest_ENUMTABSIZE);
   if (idx >= 0) {
      *pvalue = (e2ap_CauseRICrequest)e2ap_CauseRICrequest_ENUMTAB[idx].value;
      return 0;
   } else {
      //rtxErrAddIntParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int
      rtxErrAddStrParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int

      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

EXTERN int asn1PE_e2ap_CauseRICrequest (OSCTXT* pctxt, e2ap_CauseRICrequest value)
{
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "CauseRICrequest");
   if (value >= 20) {
      rtxErrAddIntParm (pctxt, value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
   stat = pe_ConsUnsigned (pctxt, value, 0, OSUINTCONST(19));
   if(stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_CauseRICrequest (OSCTXT* pctxt, e2ap_CauseRICrequest* pvalue)
{
   int stat = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "CauseRICrequest");

   stat = pd_ConsUnsigned (pctxt, pvalue, 0, OSUINTCONST(19));
   if(stat != 0) return LOG_RTERR (pctxt, stat);

   RTXCTXTPOPTYPENAME (pctxt);

   return stat;
}

EXTERN int asn1PrtToStr_e2ap_CauseRICrequest (const char* name, e2ap_CauseRICrequest* pvalue, char* buffer, OSSIZE bufSize)
{
   int stat;

   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToString(name, buffer, bufSize) < 0) return -1;

   switch(*pvalue) {
      case 0:
         stat = rtPrintToString(" = ran_function_id_invalid \n", buffer, bufSize);
         break;
      case 1:
         stat = rtPrintToString(" = action_not_supported \n", buffer, bufSize);
         break;
      case 2:
         stat = rtPrintToString(" = excessive_actions \n", buffer, bufSize);
         break;
      case 3:
         stat = rtPrintToString(" = duplicate_action \n", buffer, bufSize);
         break;
      case 4:
         stat = rtPrintToString(" = duplicate_event_trigger \n", buffer, bufSize);
         break;
      case 5:
         stat = rtPrintToString(" = function_resource_limit \n", buffer, bufSize);
         break;
      case 6:
         stat = rtPrintToString(" = request_id_unknown \n", buffer, bufSize);
         break;
      case 7:
         stat = rtPrintToString(" = inconsistent_action_subsequent_action_sequence \n", buffer, bufSize);
         break;
      case 8:
         stat = rtPrintToString(" = control_message_invalid \n", buffer, bufSize);
         break;
      case 9:
         stat = rtPrintToString(" = ric_call_process_id_invalid \n", buffer, bufSize);
         break;
      case 10:
         stat = rtPrintToString(" = control_timer_expired \n", buffer, bufSize);
         break;
      case 11:
         stat = rtPrintToString(" = control_failed_to_execute \n", buffer, bufSize);
         break;
      case 12:
         stat = rtPrintToString(" = system_not_ready \n", buffer, bufSize);
         break;
      case 13:
         stat = rtPrintToString(" = unspecified \n", buffer, bufSize);
         break;
      case 14:
         stat = rtPrintToString(" = ric_subscription_end_time_expired \n", buffer, bufSize);
         break;
      case 15:
         stat = rtPrintToString(" = ric_subscription_end_time_invalid \n", buffer, bufSize);
         break;
      case 16:
         stat = rtPrintToString(" = duplicate_ric_request_id \n", buffer, bufSize);
         break;
      case 17:
         stat = rtPrintToString(" = eventTriggerNotSupported \n", buffer, bufSize);
         break;
      case 18:
         stat = rtPrintToString(" = requested_information_unavailable \n", buffer, bufSize);
         break;
      case 19:
         stat = rtPrintToString(" = invalid_information_request \n", buffer, bufSize);
         break;
      default:
         stat = rtPrintToString(" = ???\n", buffer, bufSize);
   }

   if (stat < 0) return -1;
   return 0;

}

/*Init*/
EXTERN int asn1Init_e2ap_CauseRICrequest (e2ap_CauseRICrequest* pvalue){
      //if (pvalue == 0) return RTERR_NULLPTR;
      //*pvalue = 0;
      return 0;
}

EXTERN void asn1Free_e2ap_CauseRICrequest (OSCTXT* pctxt, e2ap_CauseRICrequest* pvalue){
   return 0;
}
// --- End of e2ap_CauseRICrequest.c ---

// --- Begin of e2ap_CauseRICservice.c ---
/******************************************************/
/*                                                    */
/*    CauseRICservice                          */
/*                                                    */
/******************************************************/
//enumerated


const OSEnumItem e2ap_CauseRICservice_ENUMTAB[] = {
    { OSUTF8("ran_function_not_supported"), 0, 26, 0 },
    { OSUTF8("excessive_functions"), 1, 19, 1 },
    { OSUTF8("ric_resource_limit"), 2, 18, 2 }
};


const OSUTF8CHAR* e2ap_CauseRICservice_ToString (OSUINT32 value){
   OSINT32 idx = value;
   if(idx >=0 && idx < e2ap_CauseRICservice_ENUMTABSIZE){
      return e2ap_CauseRICservice_ENUMTAB[e2ap_CauseRICservice_ENUMTAB[idx].transidx].name;
   }else{
      return OSUTF8("_UNKNOWN_");
   }
}


int e2ap_CauseRICservice_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseRICservice* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes(value);
   return e2ap_CauseRICservice_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int e2ap_CauseRICservice_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseRICservice* pvalue)
{
   OSINT32 idx = rtxLookupEnum(value, valueLen,
      e2ap_CauseRICservice_ENUMTAB, e2ap_CauseRICservice_ENUMTABSIZE);
   if (idx >= 0) {
      *pvalue = (e2ap_CauseRICservice)e2ap_CauseRICservice_ENUMTAB[idx].value;
      return 0;
   } else {
      //rtxErrAddIntParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int
      rtxErrAddStrParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int

      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

EXTERN int asn1PE_e2ap_CauseRICservice (OSCTXT* pctxt, e2ap_CauseRICservice value)
{
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "CauseRICservice");
   if (value >= 3) {
      rtxErrAddIntParm (pctxt, value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
   stat = pe_ConsUnsigned (pctxt, value, 0, OSUINTCONST(2));
   if(stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_CauseRICservice (OSCTXT* pctxt, e2ap_CauseRICservice* pvalue)
{
   int stat = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "CauseRICservice");

   stat = pd_ConsUnsigned (pctxt, pvalue, 0, OSUINTCONST(2));
   if(stat != 0) return LOG_RTERR (pctxt, stat);

   RTXCTXTPOPTYPENAME (pctxt);

   return stat;
}

EXTERN int asn1PrtToStr_e2ap_CauseRICservice (const char* name, e2ap_CauseRICservice* pvalue, char* buffer, OSSIZE bufSize)
{
   int stat;

   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToString(name, buffer, bufSize) < 0) return -1;

   switch(*pvalue) {
      case 0:
         stat = rtPrintToString(" = ran_function_not_supported \n", buffer, bufSize);
         break;
      case 1:
         stat = rtPrintToString(" = excessive_functions \n", buffer, bufSize);
         break;
      case 2:
         stat = rtPrintToString(" = ric_resource_limit \n", buffer, bufSize);
         break;
      default:
         stat = rtPrintToString(" = ???\n", buffer, bufSize);
   }

   if (stat < 0) return -1;
   return 0;

}

/*Init*/
EXTERN int asn1Init_e2ap_CauseRICservice (e2ap_CauseRICservice* pvalue){
      //if (pvalue == 0) return RTERR_NULLPTR;
      //*pvalue = 0;
      return 0;
}

EXTERN void asn1Free_e2ap_CauseRICservice (OSCTXT* pctxt, e2ap_CauseRICservice* pvalue){
   return 0;
}
// --- End of e2ap_CauseRICservice.c ---

// --- Begin of e2ap_CauseE2node.c ---
/******************************************************/
/*                                                    */
/*    CauseE2node                          */
/*                                                    */
/******************************************************/
//enumerated


const OSEnumItem e2ap_CauseE2node_ENUMTAB[] = {
    { OSUTF8("e2node_component_unknown"), 0, 24, 0 }
};


const OSUTF8CHAR* e2ap_CauseE2node_ToString (OSUINT32 value){
   OSINT32 idx = value;
   if(idx >=0 && idx < e2ap_CauseE2node_ENUMTABSIZE){
      return e2ap_CauseE2node_ENUMTAB[e2ap_CauseE2node_ENUMTAB[idx].transidx].name;
   }else{
      return OSUTF8("_UNKNOWN_");
   }
}


int e2ap_CauseE2node_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseE2node* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes(value);
   return e2ap_CauseE2node_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int e2ap_CauseE2node_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseE2node* pvalue)
{
   OSINT32 idx = rtxLookupEnum(value, valueLen,
      e2ap_CauseE2node_ENUMTAB, e2ap_CauseE2node_ENUMTABSIZE);
   if (idx >= 0) {
      *pvalue = (e2ap_CauseE2node)e2ap_CauseE2node_ENUMTAB[idx].value;
      return 0;
   } else {
      //rtxErrAddIntParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int
      rtxErrAddStrParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int

      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

EXTERN int asn1PE_e2ap_CauseE2node (OSCTXT* pctxt, e2ap_CauseE2node value)
{
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "CauseE2node");
   if (value >= 1) {
      rtxErrAddIntParm (pctxt, value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
   stat = pe_ConsUnsigned (pctxt, value, 0, OSUINTCONST(0));
   if(stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_CauseE2node (OSCTXT* pctxt, e2ap_CauseE2node* pvalue)
{
   int stat = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "CauseE2node");

   stat = pd_ConsUnsigned (pctxt, pvalue, 0, OSUINTCONST(0));
   if(stat != 0) return LOG_RTERR (pctxt, stat);

   RTXCTXTPOPTYPENAME (pctxt);

   return stat;
}

EXTERN int asn1PrtToStr_e2ap_CauseE2node (const char* name, e2ap_CauseE2node* pvalue, char* buffer, OSSIZE bufSize)
{
   int stat;

   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToString(name, buffer, bufSize) < 0) return -1;

   switch(*pvalue) {
      case 0:
         stat = rtPrintToString(" = e2node_component_unknown \n", buffer, bufSize);
         break;
      default:
         stat = rtPrintToString(" = ???\n", buffer, bufSize);
   }

   if (stat < 0) return -1;
   return 0;

}

/*Init*/
EXTERN int asn1Init_e2ap_CauseE2node (e2ap_CauseE2node* pvalue){
      //if (pvalue == 0) return RTERR_NULLPTR;
      //*pvalue = 0;
      return 0;
}

EXTERN void asn1Free_e2ap_CauseE2node (OSCTXT* pctxt, e2ap_CauseE2node* pvalue){
   return 0;
}
// --- End of e2ap_CauseE2node.c ---

// --- Begin of e2ap_CauseTransport.c ---
/******************************************************/
/*                                                    */
/*    CauseTransport                          */
/*                                                    */
/******************************************************/
//enumerated


const OSEnumItem e2ap_CauseTransport_ENUMTAB[] = {
    { OSUTF8("unspecified"), 0, 11, 0 },
    { OSUTF8("transport_resource_unavailable"), 1, 30, 1 }
};


const OSUTF8CHAR* e2ap_CauseTransport_ToString (OSUINT32 value){
   OSINT32 idx = value;
   if(idx >=0 && idx < e2ap_CauseTransport_ENUMTABSIZE){
      return e2ap_CauseTransport_ENUMTAB[e2ap_CauseTransport_ENUMTAB[idx].transidx].name;
   }else{
      return OSUTF8("_UNKNOWN_");
   }
}


int e2ap_CauseTransport_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseTransport* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes(value);
   return e2ap_CauseTransport_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int e2ap_CauseTransport_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseTransport* pvalue)
{
   OSINT32 idx = rtxLookupEnum(value, valueLen,
      e2ap_CauseTransport_ENUMTAB, e2ap_CauseTransport_ENUMTABSIZE);
   if (idx >= 0) {
      *pvalue = (e2ap_CauseTransport)e2ap_CauseTransport_ENUMTAB[idx].value;
      return 0;
   } else {
      //rtxErrAddIntParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int
      rtxErrAddStrParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int

      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

EXTERN int asn1PE_e2ap_CauseTransport (OSCTXT* pctxt, e2ap_CauseTransport value)
{
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "CauseTransport");
   if (value >= 2) {
      rtxErrAddIntParm (pctxt, value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
   stat = pe_ConsUnsigned (pctxt, value, 0, OSUINTCONST(1));
   if(stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_CauseTransport (OSCTXT* pctxt, e2ap_CauseTransport* pvalue)
{
   int stat = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "CauseTransport");

   stat = pd_ConsUnsigned (pctxt, pvalue, 0, OSUINTCONST(1));
   if(stat != 0) return LOG_RTERR (pctxt, stat);

   RTXCTXTPOPTYPENAME (pctxt);

   return stat;
}

EXTERN int asn1PrtToStr_e2ap_CauseTransport (const char* name, e2ap_CauseTransport* pvalue, char* buffer, OSSIZE bufSize)
{
   int stat;

   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToString(name, buffer, bufSize) < 0) return -1;

   switch(*pvalue) {
      case 0:
         stat = rtPrintToString(" = unspecified \n", buffer, bufSize);
         break;
      case 1:
         stat = rtPrintToString(" = transport_resource_unavailable \n", buffer, bufSize);
         break;
      default:
         stat = rtPrintToString(" = ???\n", buffer, bufSize);
   }

   if (stat < 0) return -1;
   return 0;

}

/*Init*/
EXTERN int asn1Init_e2ap_CauseTransport (e2ap_CauseTransport* pvalue){
      //if (pvalue == 0) return RTERR_NULLPTR;
      //*pvalue = 0;
      return 0;
}

EXTERN void asn1Free_e2ap_CauseTransport (OSCTXT* pctxt, e2ap_CauseTransport* pvalue){
   return 0;
}
// --- End of e2ap_CauseTransport.c ---

// --- Begin of e2ap_CauseProtocol.c ---
/******************************************************/
/*                                                    */
/*    CauseProtocol                          */
/*                                                    */
/******************************************************/
//enumerated


const OSEnumItem e2ap_CauseProtocol_ENUMTAB[] = {
    { OSUTF8("transfer_syntax_error"), 0, 21, 0 },
    { OSUTF8("abstract_syntax_error_reject"), 1, 28, 1 },
    { OSUTF8("abstract_syntax_error_ignore_and_notify"), 2, 39, 2 },
    { OSUTF8("message_not_compatible_with_receiver_state"), 3, 42, 3 },
    { OSUTF8("semantic_error"), 4, 14, 4 },
    { OSUTF8("abstract_syntax_error_falsely_constructed_message"), 5, 49, 5 },
    { OSUTF8("unspecified"), 6, 11, 6 }
};


const OSUTF8CHAR* e2ap_CauseProtocol_ToString (OSUINT32 value){
   OSINT32 idx = value;
   if(idx >=0 && idx < e2ap_CauseProtocol_ENUMTABSIZE){
      return e2ap_CauseProtocol_ENUMTAB[e2ap_CauseProtocol_ENUMTAB[idx].transidx].name;
   }else{
      return OSUTF8("_UNKNOWN_");
   }
}


int e2ap_CauseProtocol_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseProtocol* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes(value);
   return e2ap_CauseProtocol_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int e2ap_CauseProtocol_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseProtocol* pvalue)
{
   OSINT32 idx = rtxLookupEnum(value, valueLen,
      e2ap_CauseProtocol_ENUMTAB, e2ap_CauseProtocol_ENUMTABSIZE);
   if (idx >= 0) {
      *pvalue = (e2ap_CauseProtocol)e2ap_CauseProtocol_ENUMTAB[idx].value;
      return 0;
   } else {
      //rtxErrAddIntParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int
      rtxErrAddStrParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int

      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

EXTERN int asn1PE_e2ap_CauseProtocol (OSCTXT* pctxt, e2ap_CauseProtocol value)
{
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "CauseProtocol");
   if (value >= 7) {
      rtxErrAddIntParm (pctxt, value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
   stat = pe_ConsUnsigned (pctxt, value, 0, OSUINTCONST(6));
   if(stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_CauseProtocol (OSCTXT* pctxt, e2ap_CauseProtocol* pvalue)
{
   int stat = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "CauseProtocol");

   stat = pd_ConsUnsigned (pctxt, pvalue, 0, OSUINTCONST(6));
   if(stat != 0) return LOG_RTERR (pctxt, stat);

   RTXCTXTPOPTYPENAME (pctxt);

   return stat;
}

EXTERN int asn1PrtToStr_e2ap_CauseProtocol (const char* name, e2ap_CauseProtocol* pvalue, char* buffer, OSSIZE bufSize)
{
   int stat;

   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToString(name, buffer, bufSize) < 0) return -1;

   switch(*pvalue) {
      case 0:
         stat = rtPrintToString(" = transfer_syntax_error \n", buffer, bufSize);
         break;
      case 1:
         stat = rtPrintToString(" = abstract_syntax_error_reject \n", buffer, bufSize);
         break;
      case 2:
         stat = rtPrintToString(" = abstract_syntax_error_ignore_and_notify \n", buffer, bufSize);
         break;
      case 3:
         stat = rtPrintToString(" = message_not_compatible_with_receiver_state \n", buffer, bufSize);
         break;
      case 4:
         stat = rtPrintToString(" = semantic_error \n", buffer, bufSize);
         break;
      case 5:
         stat = rtPrintToString(" = abstract_syntax_error_falsely_constructed_message \n", buffer, bufSize);
         break;
      case 6:
         stat = rtPrintToString(" = unspecified \n", buffer, bufSize);
         break;
      default:
         stat = rtPrintToString(" = ???\n", buffer, bufSize);
   }

   if (stat < 0) return -1;
   return 0;

}

/*Init*/
EXTERN int asn1Init_e2ap_CauseProtocol (e2ap_CauseProtocol* pvalue){
      //if (pvalue == 0) return RTERR_NULLPTR;
      //*pvalue = 0;
      return 0;
}

EXTERN void asn1Free_e2ap_CauseProtocol (OSCTXT* pctxt, e2ap_CauseProtocol* pvalue){
   return 0;
}
// --- End of e2ap_CauseProtocol.c ---

// --- Begin of e2ap_CauseMisc.c ---
/******************************************************/
/*                                                    */
/*    CauseMisc                          */
/*                                                    */
/******************************************************/
//enumerated


const OSEnumItem e2ap_CauseMisc_ENUMTAB[] = {
    { OSUTF8("control_processing_overload"), 0, 27, 0 },
    { OSUTF8("hardware_failure"), 1, 16, 1 },
    { OSUTF8("om_intervention"), 2, 15, 2 },
    { OSUTF8("unspecified"), 3, 11, 3 }
};


const OSUTF8CHAR* e2ap_CauseMisc_ToString (OSUINT32 value){
   OSINT32 idx = value;
   if(idx >=0 && idx < e2ap_CauseMisc_ENUMTABSIZE){
      return e2ap_CauseMisc_ENUMTAB[e2ap_CauseMisc_ENUMTAB[idx].transidx].name;
   }else{
      return OSUTF8("_UNKNOWN_");
   }
}


int e2ap_CauseMisc_ToEnum (OSCTXT* pctxt, const OSUTF8CHAR* value,e2ap_CauseMisc* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes(value);
   return e2ap_CauseMisc_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int e2ap_CauseMisc_ToEnum2 (OSCTXT* pctxt, const OSUTF8CHAR* value, OSSIZE valueLen,e2ap_CauseMisc* pvalue)
{
   OSINT32 idx = rtxLookupEnum(value, valueLen,
      e2ap_CauseMisc_ENUMTAB, e2ap_CauseMisc_ENUMTABSIZE);
   if (idx >= 0) {
      *pvalue = (e2ap_CauseMisc)e2ap_CauseMisc_ENUMTAB[idx].value;
      return 0;
   } else {
      //rtxErrAddIntParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int
      rtxErrAddStrParm (pctxt, (const char*)value);//dungnm23 check xem là Str hay Int

      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

EXTERN int asn1PE_e2ap_CauseMisc (OSCTXT* pctxt, e2ap_CauseMisc value)
{
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "CauseMisc");
   if (value >= 4) {
      rtxErrAddIntParm (pctxt, value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
   stat = pe_ConsUnsigned (pctxt, value, 0, OSUINTCONST(3));
   if(stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

EXTERN int asn1PD_e2ap_CauseMisc (OSCTXT* pctxt, e2ap_CauseMisc* pvalue)
{
   int stat = 0;

   RTXCTXTPUSHTYPENAME (pctxt, "CauseMisc");

   stat = pd_ConsUnsigned (pctxt, pvalue, 0, OSUINTCONST(3));
   if(stat != 0) return LOG_RTERR (pctxt, stat);

   RTXCTXTPOPTYPENAME (pctxt);

   return stat;
}

EXTERN int asn1PrtToStr_e2ap_CauseMisc (const char* name, e2ap_CauseMisc* pvalue, char* buffer, OSSIZE bufSize)
{
   int stat;

   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToString(name, buffer, bufSize) < 0) return -1;

   switch(*pvalue) {
      case 0:
         stat = rtPrintToString(" = control_processing_overload \n", buffer, bufSize);
         break;
      case 1:
         stat = rtPrintToString(" = hardware_failure \n", buffer, bufSize);
         break;
      case 2:
         stat = rtPrintToString(" = om_intervention \n", buffer, bufSize);
         break;
      case 3:
         stat = rtPrintToString(" = unspecified \n", buffer, bufSize);
         break;
      default:
         stat = rtPrintToString(" = ???\n", buffer, bufSize);
   }

   if (stat < 0) return -1;
   return 0;

}

/*Init*/
EXTERN int asn1Init_e2ap_CauseMisc (e2ap_CauseMisc* pvalue){
      //if (pvalue == 0) return RTERR_NULLPTR;
      //*pvalue = 0;
      return 0;
}

EXTERN void asn1Free_e2ap_CauseMisc (OSCTXT* pctxt, e2ap_CauseMisc* pvalue){
   return 0;
}
// --- End of e2ap_CauseMisc.c ---

// --- Begin of e2ap_ServiceLayerCause.c ---
/*****************************************/
/*           ServiceLayerCause                */
/*****************************************/
//9 mau octet string
//type 9  mau la octet string no size mau la pdusessioncommonnetworkinstance

EXTERN int asn1PE_e2ap_ServiceLayerCause (OSCTXT* pctxt, e2ap_ServiceLayerCause value){
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "ServiceLayerCause");
   stat = pe_OctetString(pctxt, value.numocts, value.data);
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);

}
EXTERN int asn1PD_e2ap_ServiceLayerCause (OSCTXT* pctxt, e2ap_ServiceLayerCause* pvalue){
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "ServiceLayerCause");
   stat = pd_DynOctetString(pctxt, pvalue);
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}
EXTERN int asn1PrtToStr_e2ap_ServiceLayerCause (const char* name, e2ap_ServiceLayerCause *pvalue, char* buffer, OSSIZE bufSize){
   if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
   if(rtPrintToStringHexStr(name, pvalue->numocts, pvalue->data, buffer, bufSize) < 0) return -1;
   return 0;
}
EXTERN int asn1PrtToStrm_e2ap_ServiceLayerCause (OSCTXT* pctxt, const char* name, const e2ap_ServiceLayerCause* pvalue){
   int stat =0;
   rtPrintToStreamIndent(pctxt);
   rtPrintToStreamHexStr(pctxt, name, pvalue->numocts, pvalue->data);
   return stat;
}
//EXTERN int asn1Copy_e2ap_ServiceLayerCause (OSCTXT* pctxt, const e2ap_ServiceLayerCause* pSrcValue, e2ap_ServiceLayerCause* pDstValue);
 int asn1Init_e2ap_ServiceLayerCause (e2ap_ServiceLayerCause* pvalue){
   if (pvalue == 0) return RTERR_NULLPTR;
   pvalue->numocts = 0;
   pvalue->data = 0;
   return 0;
}
 void asn1Free_e2ap_ServiceLayerCause (OSCTXT* pctxt, e2ap_ServiceLayerCause* pvalue){
   if (pvalue == 0) return;
   if(pvalue->numocts>0){
       rtxMemFreePtr(pctxt, (void*)pvalue->data);
       pvalue->data = 0;
       pvalue->numocts = 0;
   }
}

// --- End of e2ap_ServiceLayerCause.c ---

// --- Begin of e2ap_CauseServiceLayer.c ---

/*****************************************/
/*           CauseServiceLayer                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2

// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_CauseServiceLayer (OSCTXT* pctxt, e2ap_CauseServiceLayer* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "CauseServiceLayer");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);


   /*encode root elements*/   
   /* encode field serviceLayerCause - id = -1*/  
   RTXCTXTPUSHELEMNAME(pctxt, "serviceLayerCause");
   stat = asn1PE_e2ap_ServiceLayerCause (pctxt, pvalue->serviceLayerCause);
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

int asn1PD_e2ap_CauseServiceLayer (OSCTXT* pctxt, e2ap_CauseServiceLayer* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[1];

   RTXCTXTPUSHTYPENAME(pctxt, "CauseServiceLayer");

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
   /* decode field serviceLayerCause */
   RTXCTXTPUSHELEMNAME(pctxt, "serviceLayerCause");
      stat = asn1PD_e2ap_ServiceLayerCause (pctxt, &pvalue->serviceLayerCause);
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

int asn1Init_e2ap_CauseServiceLayer (e2ap_CauseServiceLayer* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_ServiceLayerCause (&pvalue->serviceLayerCause);
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_CauseServiceLayer (OSCTXT* pctxt, e2ap_CauseServiceLayer* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_ServiceLayerCause (pctxt, &pvalue->serviceLayerCause);
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_CauseServiceLayer (const char* name, e2ap_CauseServiceLayer* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }
   if(asn1PrtToStr_e2ap_ServiceLayerCause ("serviceLayerCause", &pvalue->serviceLayerCause, buffer, bufSize) < 0)
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
// --- End of e2ap_CauseServiceLayer.c ---

// --- Begin of e2ap_Cause.c ---
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
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
      }
   }else{
      OSINT32 pos;
      void * pPerField;

      stat = pe_SmallNonNegWholeNumber (pctxt, pvalue->t - 7);// can xem lai
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      /* encode extension element data value */
      stat = pe_OpenTypeStart (pctxt, &pos, &pPerField);
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      switch(pvalue->t){
         case 7:
            RTXCTXTPUSHELEMNAME (pctxt, "serviceLayer");
            stat = asn1PE_e2ap_CauseServiceLayer (pctxt, pvalue->u.serviceLayer); //not primitive
            if (stat != 0) return LOG_RTERR (pctxt, stat);
            RTXCTXTPOPELEMNAME (pctxt);
            break;
  
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



// --- End of e2ap_Cause.c ---

// --- Begin of e2ap_E2connectionSetupFailed_Item.c ---

/*****************************************/
/*           E2connectionSetupFailed-Item                */
/*****************************************/
//sequence normal
// Các nội dung cần thiết cho template seq_normal.c.j2

// Các phần còn lại của template seq_normal.c.j2
//contain extensition bit -> theo mau cua GlobalgNB-ID
int asn1PE_e2ap_E2connectionSetupFailed_Item (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_Item* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "E2connectionSetupFailed-Item");

   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);


   /*encode root elements*/   
   /* encode field tnlInformation - id = -1*/  
   RTXCTXTPUSHELEMNAME(pctxt, "tnlInformation");
   stat = asn1PE_e2ap_TNLinformation (pctxt, &pvalue->tnlInformation);
   if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);


   /* encode field cause - id = -1*/  
   RTXCTXTPUSHELEMNAME(pctxt, "cause");
   stat = asn1PE_e2ap_Cause (pctxt, &pvalue->cause);
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

int asn1PD_e2ap_E2connectionSetupFailed_Item (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_Item* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[2];

   RTXCTXTPUSHTYPENAME(pctxt, "E2connectionSetupFailed-Item");

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
   /* decode field tnlInformation */
   RTXCTXTPUSHELEMNAME(pctxt, "tnlInformation");
      stat = asn1PD_e2ap_TNLinformation (pctxt, &pvalue->tnlInformation);
      if (stat != 0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /* decode field cause */
   RTXCTXTPUSHELEMNAME(pctxt, "cause");
      stat = asn1PD_e2ap_Cause (pctxt, &pvalue->cause);
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

int asn1Init_e2ap_E2connectionSetupFailed_Item (e2ap_E2connectionSetupFailed_Item* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_TNLinformation (&pvalue->tnlInformation);
   asn1Init_e2ap_Cause (&pvalue->cause);
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_E2connectionSetupFailed_Item (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_Item* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_TNLinformation (pctxt, &pvalue->tnlInformation);
   asn1Free_e2ap_Cause (pctxt, &pvalue->cause);
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_E2connectionSetupFailed_Item (const char* name, e2ap_E2connectionSetupFailed_Item* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }
   if(asn1PrtToStr_e2ap_TNLinformation ("tnlInformation", &pvalue->tnlInformation, buffer, bufSize) < 0)
   {
      return -1;
   }


   if(asn1PrtToStr_e2ap_Cause ("cause", &pvalue->cause, buffer, bufSize) < 0)
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
// --- End of e2ap_E2connectionSetupFailed_Item.c ---

// --- Begin of e2ap_E2connectionSetupFailed_ItemIEs.c ---
/*****************************************/
/*           E2connectionSetupFailed_ItemIEs                */
/*****************************************/
/* ie.c.j2 */
/*ie thường*/
int asn1PE_e2ap_E2connectionSetupFailed_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_ItemIEs* pvalue)
{
   int stat = 0;
   //RTXCTXTPUSHTYPENAME (pctxt, "E2connectionSetupFailed-ItemIEs");

   /* encode id */
   RTXCTXTPUSHELEMNAME (pctxt, "id");
   stat = asn1PE_e2ap_ProtocolIE_ID (pctxt, pvalue->id);//xoa con tro
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPELEMNAME (pctxt);

   /* encode criticality */
   RTXCTXTPUSHELEMNAME (pctxt, "criticality");
   stat = asn1PE_e2ap_Criticality (pctxt, pvalue->criticality);//xoa con tro
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPELEMNAME (pctxt);

   /* encode value */
   RTXCTXTPUSHELEMNAME (pctxt, "value");

   {
      OSCTXT ictxt;
      OSOCTET* pDynamicEncodeBuffer;
      ASN1OpenType openType;
      OSBOOL  encoded = TRUE;

      openType.numocts = 0;
      openType.data = 0;

      rtxCopyContext (&ictxt, pctxt);
      pctxt->pStream = 0;

      stat = rtxInitContextBuffer (pctxt, 0, 0);
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      switch (pvalue->value.t) {
      case T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item:
         
        // RTXCTXTPUSHELEMNAME (pctxt, "E2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item");
         RTXCTXTPUSHELEMNAME (pctxt, "E2connectionSetupFailed-Item");
         stat = asn1PE_e2ap_E2connectionSetupFailed_Item (pctxt, pvalue->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item);
         RTXCTXTPOPELEMNAME (pctxt);
      
         break;

      case T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_UNDEF_:
      {
          if(0!=pvalue->value.u.extElem1){
              openType.numocts = pvalue->value.u.extElem1->numocts;
              openType.data = pvalue->value.u.extElem1->data;
          } else {
              /* No extension element to encode */
          }
          encoded = FALSE;
          break;
      }
      default:
         encoded = FALSE;
         stat = RTERR_INVOPT;
      }

      if (encoded) {
         openType.numocts = (OSUINT32) pe_GetMsgLen (pctxt);
         openType.data = pDynamicEncodeBuffer = pctxt->buffer.data;
      }
      rtxCopyContext (pctxt, &ictxt);
      if(stat ==0) stat = pe_OpenType(pctxt, openType.numocts, openType.data);
      /*free dynamic encode buffer*/
      if(encoded){
          rtxMemFreePtr(pctxt, pDynamicEncodeBuffer);
      }
   }
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPELEMNAME (pctxt);
   //RTXCTXTPOPTYPENAME (pctxt);
   return 0;
}

int asn1PD_e2ap_E2connectionSetupFailed_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_ItemIEs* pvalue)
{
   int stat =0;
   /*deode root element id*/
   RTXCTXTPUSHELEMNAME(pctxt, "id");
   stat = asn1PD_e2ap_ProtocolIE_ID (pctxt, &pvalue->id);
   if(stat!=0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);

   /*decode root element criticality*/
   RTXCTXTPUSHELEMNAME(pctxt, "criticality");
   stat = asn1PD_e2ap_Criticality (pctxt, &pvalue->criticality);
   if(stat!=0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);
   /*decode root element value*/
   RTXCTXTPUSHELEMNAME(pctxt, "value");
   {
      OSUINT32 openTypeLen;
      size_t bitStartOffset, bitLength;
      stat = pd_UnconsLength(pctxt, &openTypeLen);
      if(stat <0) return LOG_RTERR(pctxt, stat);
      else if(stat == RT_OK_FRAG){
         rtxErrAddStrParm(pctxt, "open type with fragmented length use - perindef");
         return LOG_RTERRNEW(pctxt, RTERR_NOTSUPP);
      }
      bitStartOffset = PU_GETCTXTBITOFFSET(pctxt);
      bitLength = openTypeLen * 8;
      switch (pvalue->id){
         case T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item;
            RTXCTXTPUSHELEMNAME(pctxt, "E2connectionSetupFailed-Item");
            //pvalue->value.u._e2ap_E2connectionSetupFailed_ItemIEs_id_id_E2connectionSetupFailed_Item 
             pvalue->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item 
                    = rtxMemAllocType(pctxt, e2ap_E2connectionSetupFailed_Item);
            //asn1Init_e2ap_E2connectionSetupFailed_Item(pvalue->value.u._e2ap_E2connectionSetupFailed_ItemIEs_id_id_E2connectionSetupFailed_Item);
            asn1Init_e2ap_E2connectionSetupFailed_Item(pvalue->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item);
            stat = asn1PD_e2ap_E2connectionSetupFailed_Item (pctxt,
                    (e2ap_E2connectionSetupFailed_Item*)pvalue->value.
                    u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item);
            if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;

        default:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_UNDEF_;
            pvalue->value.u.extElem1 = rtxMemAllocType(pctxt, ASN1OpenType);
            if(0==pvalue->value.u.extElem1){
                return LOG_RTERR(pctxt, RTERR_NOMEM);
            }

            {
                OSOCTET *pdata =(OSOCTET*)rtxMemAlloc(pctxt, openTypeLen);
                if(0==pdata){
                    return LOG_RTERR(pctxt, RTERR_NOMEM);
                }
                stat = rtxDecBitsToByteArray(pctxt, pdata, openTypeLen, openTypeLen*8);
                if(stat!=0){
                    rtxMemFreePtr(pctxt, pdata);
                    rtxMemFreePtr(pctxt, pvalue->value.u.extElem1);
                    return LOG_RTERR(pctxt, stat);
                }

                pvalue->value.u.extElem1->numocts = openTypeLen;
                pvalue->value.u.extElem1->data = pdata;
            }
            break;
      }
      {
      size_t bitEndOffset = PU_GETCTXTBITOFFSET(pctxt);
      size_t bitsConsumed = bitEndOffset - bitStartOffset;
      if(bitsConsumed < bitLength){
         stat = pd_moveBitCursor(pctxt, (int)(bitLength - bitsConsumed));
      } else {
         stat = (bitsConsumed > bitLength) ? ASN_E_INVLEN : 0;
      }
      }
   }
   if(stat!=0) return LOG_RTERR(pctxt, stat);
   RTXCTXTPOPELEMNAME(pctxt);
   return stat;
}

void asn1Init_e2ap_E2connectionSetupFailed_ItemIEs (e2ap_E2connectionSetupFailed_ItemIEs* pvalue)
{
   if (!pvalue) return;
   OSCRTLMEMSET (pvalue, 0, sizeof(e2ap_E2connectionSetupFailed_ItemIEs));
}

#if 0
void asn1Free_e2ap_E2connectionSetupFailed_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_ItemIEs* pvalue)
{
   if (!pvalue) return;
   if (pvalue->extElem1) {
      rtxMemFreeArray (pctxt, pvalue->extElem1);
      pvalue->extElem1 = 0;
      pvalue->extElem1_n = 0;
   }
}
#endif
void asn1Free_e2ap_E2connectionSetupFailed_ItemIEs (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_ItemIEs* pvalue)
{
   if(0==pvalue) return;
   switch(pvalue->value.t){
      case T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item:
         asn1Free_e2ap_E2connectionSetupFailed_Item (pctxt, pvalue->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item);
         rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item);
         pvalue->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item = 0;
         break;
      case T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_UNDEF_:
         if(0!=pvalue->value.u.extElem1){
             rtxMemFreePtr(pctxt, pvalue->value.u.extElem1->data);
             rtxMemFreePtr(pctxt, pvalue->value.u.extElem1);
             pvalue->value.u.extElem1 =0;
         }
         break;
         default:;
   }
}

int  asn1PrtToStr_e2ap_E2connectionSetupFailed_ItemIEs (const char * name, e2ap_E2connectionSetupFailed_ItemIEs* pvalue, char * buffer, OSSIZE bufSize){
   if(rtPrintToStringOpenBrace(name, buffer, bufSize)<0)
       return -1;

      if(asn1PrtToStr_e2ap_ProtocolIE_ID("id", &pvalue->id, buffer, bufSize)<0)
         return -1;

      if(asn1PrtToStr_e2ap_Criticality("criticality", &pvalue->criticality, buffer, bufSize)<0)
         return -1;
      if(rtPrintToStringOpenBrace("value", buffer, bufSize)<0)
         return -1;
      switch (pvalue->value.t) {
      case T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item:
         if(asn1PrtToStr_e2ap_E2connectionSetupFailed_Item("E2connectionSetupFailed-Item",
                pvalue->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item, buffer, bufSize)<0)// dungnm23 check lai nhe xem la
            return -1;
         break;
      default:
         if(0!=pvalue -> value.u.extElem1){
             rtPrintToStringIndent(buffer, bufSize);
             rtPrintToStringHexStr("extElem1", pvalue->value.u.extElem1->numocts, pvalue->value.u.extElem1->data, buffer, bufSize);

         }
      }
      if(rtPrintToStringCloseBrace( buffer, bufSize)<0) return -1;
      if(rtPrintToStringCloseBrace( buffer, bufSize)<0) return -1;

      return 0;

}
 


// --- End of e2ap_E2connectionSetupFailed_ItemIEs.c ---

// --- Begin of e2ap_E2connectionSetupFailed_List.c ---
/*****************************************/
/*           E2connectionSetupFailed_List                */
/*****************************************/
//seq_of_single_container


int asn1PE_e2ap_E2connectionSetupFailed_List (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_List* pvalue)
{
   int stat = 0;
   OSRTDListNode* pnode;
   OSSIZE xx1 = 0;
   OSSIZE count = 0;

   e2ap_E2connectionSetupFailed_ItemIEs* pdata;

   RTXCTXTPUSHTYPENAME (pctxt, "E2connectionSetupFailed-List");

   /* encode length determinant */
   PU_SETSIZECONSTRAINT (pctxt, OSUINTCONST(1), OSUINTCONST(32), 0, 0);

   stat = pe_Length (pctxt, pvalue->count);
   if (stat < 0) return LOG_RTERR (pctxt, stat);

   /* encode elements */
   pnode = pvalue->head;
   for (xx1 = 0; pnode != 0 && xx1 < pvalue->count; pnode = pnode->next, xx1++) {
      pdata = (e2ap_E2connectionSetupFailed_ItemIEs*) pnode->data;
      RTXCTXTPUSHARRAYELEMNAME (pctxt, "SEQUENCE", xx1);

      stat = asn1PE_e2ap_E2connectionSetupFailed_ItemIEs (pctxt, pdata);
      if (stat != 0) return LOG_RTERR (pctxt, stat);

      //xx1++;
      RTXCTXTPOPARRAYELEMNAME (pctxt);
   }

   RTXCTXTPOPTYPENAME (pctxt);
   return stat;
}

int asn1PD_e2ap_E2connectionSetupFailed_List (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_List* ppvalue)
{
   int stat = 0;
   OSSIZE xx1 = 0;
   OSSIZE count = 0;

   e2ap_E2connectionSetupFailed_ItemIEs* pdata;

   RTXCTXTPUSHTYPENAME (pctxt, "E2connectionSetupFailed-List");

   PU_SETSIZECONSTRAINT (pctxt, OSUINTCONST(1), OSUINTCONST(32), 0, 0);

   stat = pd_Length64 (pctxt, &count);
   if (stat != 0) return LOG_RTERR (pctxt, stat);

   rtxDListInit (ppvalue);

   for (xx1 = 0; xx1 < count; xx1++) {
      RTXCTXTPUSHARRAYELEMNAME (pctxt, "SEQUENCE", xx1);

      pdata = rtxMemAllocType (pctxt, e2ap_E2connectionSetupFailed_ItemIEs);
      if (!pdata) return LOG_RTERR (pctxt, RTERR_NOMEM);
      asn1Init_e2ap_E2connectionSetupFailed_ItemIEs (pdata);
      stat = asn1PD_e2ap_E2connectionSetupFailed_ItemIEs (pctxt, pdata);
      if (stat != 0) {
         rtxMemFreePtr (pctxt, pdata);
         return LOG_RTERR (pctxt, stat);
      }

      rtxDListAppendNode (ppvalue, pdata);

      RTXCTXTPOPARRAYELEMNAME (pctxt);
   }

   RTXCTXTPOPTYPENAME (pctxt);
   return 0;
}

void asn1Init_e2ap_E2connectionSetupFailed_List (e2ap_E2connectionSetupFailed_List* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   rtxDListFastInit (pvalue);
}

void asn1Free_e2ap_E2connectionSetupFailed_List (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_List* pvalue)
{
   if(pvalue==0) return;
   OSRTDListNode* pnode = pvalue->head;
   while (pnode) {
      e2ap_E2connectionSetupFailed_ItemIEs* pdata = (e2ap_E2connectionSetupFailed_ItemIEs*) pnode->data;
      if (pdata) {
         asn1Free_e2ap_E2connectionSetupFailed_ItemIEs (pctxt, pdata);
         rtxMemFreePtr (pctxt, pdata);
      }
      pnode = pnode->next;
   }
      rtxDListFreeAll(pctxt, pvalue);
}

#if 0
void asn1Free_e2ap_E2connectionSetupFailed_List (OSCTXT* pctxt, e2ap_E2connectionSetupFailed_List* pvalue){
   if(0==pvalue ) return;
   {
      e2ap_E2connectionSetupFailed_ItemIEs * pdata;
      OSRTDListNode *pnode = pvalue->head;
      while(0!=pnode){
         pdata = (e2ap_E2connectionSetupFailed_ItemIEs*)pnode->data;
         asn1Free_e2ap_E2connectionSetupFailed_ItemIEs(pctxt, pdata);
         pnode = pnode->next;
      }
      rtxDListFreeAll(pctxt, pvalue);
   }
}
#endif


int asn1PrtToStr_e2ap_E2connectionSetupFailed_List(const char* name, e2ap_E2connectionSetupFailed_List* pvalue, char* buffer, OSSIZE bufSize)
{
    e2ap_E2connectionSetupFailed_ItemIEs* pdata;
    OSRTDListNode* pnode;
    char nameBuf[256];
    char numBuf[32];
    OSUINT32 xx1=0;
    for(pnode = pvalue->head;  xx1 < pvalue->count && pnode != 0; pnode = pnode->next, xx1++){
        pdata = (e2ap_E2connectionSetupFailed_ItemIEs*)pnode->data;
        rtxUIntToCharStr(xx1, numBuf, sizeof(numBuf), 0);
        rtxStrJoin(nameBuf, sizeof(nameBuf), name, "[", numBuf, "]", 0);
        #if 1
        if(asn1PrtToStr_e2ap_E2connectionSetupFailed_ItemIEs(nameBuf, pdata, buffer, bufSize) <0){
            return -1;
        }
        #endif
    }
    return 0;
}
// --- End of e2ap_E2connectionSetupFailed_List.c ---

// --- Begin of e2ap_E2connectionUpdateAck_IEs.c ---
/*****************************************/
/*           E2connectionUpdateAck_IEs                */
/*****************************************/
/* ie.c.j2 */
 /* d là con của msg */
EXTERN int asn1PE_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pvalue)
{
    int stat =0;

    /*encode id*/

    RTXCTXTPUSHELEMNAME(pctxt, "id");
        stat = asn1PE_e2ap_ProtocolIE_ID(pctxt, pvalue->id);//xoa con tro
        if(stat!=0) return LOG_RTERR(pctxt, stat);
    RTXCTXTPOPELEMNAME(pctxt);

    /*encode criticality*/
    RTXCTXTPUSHELEMNAME(pctxt, "criticality");
        stat = asn1PE_e2ap_Criticality(pctxt, pvalue->criticality);//xoa con tro
        if(stat!=0) return LOG_RTERR(pctxt, stat);
    RTXCTXTPOPELEMNAME(pctxt);

    /*encode value*/
    RTXCTXTPUSHELEMNAME(pctxt, "value");
        
    {
        OSCTXT lctxt;
        OSOCTET *pDynamicEncodeBuffer;
        ASN1OpenType openType;
        OSBOOL encoded = TRUE;

        openType.numocts = 0;
        openType.data =0;

        rtxCopyContext(&lctxt, pctxt);
        pctxt->pStream =0;

        stat = rtxInitContextBuffer(pctxt, 0, 0);
        if(stat!=0) return LOG_RTERR(pctxt, stat);

        switch(pvalue->value.t){
            case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_TransactionID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-TransactionID");
                    stat = asn1PE_e2ap_TransactionID (pctxt, *pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-E2connectionSetup");
                    stat = asn1PE_e2ap_E2connectionUpdate_List (pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-E2connectionSetupFailed");
                    stat = asn1PE_e2ap_E2connectionSetupFailed_List (pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }

            case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_UNDEF_:
            {
                if(0!=pvalue->value.u.extElem1){
                    openType.numocts = pvalue->value.u.extElem1->numocts;
                    openType.data = pvalue->value.u.extElem1->data;
                } else {
                    /* No extension element to encode */
                }
                encoded = FALSE;
                break;
            }

            default:
                encoded = FALSE;
                stat = RTERR_INVOPT;
                break;
        } 

        if(encoded){
            openType.numocts = (OSUINT32)pe_GetMsgLen(pctxt);
            openType.data = pDynamicEncodeBuffer = pctxt -> buffer.data;
        }
        rtxCopyContext(pctxt, &lctxt);

        if(stat == 0) {
            stat = pe_OpenType (pctxt, openType.numocts, openType.data);
        }
    #if 1
        if(encoded){//dungnm23 check lai nhe
            rtxMemFreePtr(pctxt, pDynamicEncodeBuffer);
        }
    #endif

    }

    if(stat!=0) return LOG_RTERR(pctxt, stat);  
    RTXCTXTPOPELEMNAME(pctxt);
    return (stat);

}

EXTERN int  asn1PD_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element (OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pvalue){
    int stat =0;

    /*decode id*/
    RTXCTXTPUSHELEMNAME(pctxt, "id");
        stat = asn1PD_e2ap_ProtocolIE_ID(pctxt, &pvalue->id);
        if(stat!=0) return LOG_RTERR(pctxt, stat);
    RTXCTXTPOPELEMNAME(pctxt);

    /*decode criticality*/
    RTXCTXTPUSHELEMNAME(pctxt, "criticality");
        stat = asn1PD_e2ap_Criticality(pctxt, &pvalue->criticality);
        if(stat!=0) return LOG_RTERR(pctxt, stat);
    RTXCTXTPOPELEMNAME(pctxt);

    /*decode value*/
    RTXCTXTPUSHELEMNAME(pctxt, "value");

    {
        OSUINT32 openTypeLen;
        size_t bitStartOffset, bitLength;

        stat = pd_UnconsLength(pctxt, &openTypeLen);
        if(stat<0) return LOG_RTERR(pctxt, stat);
        else if(stat == RT_OK_FRAG){
            rtxErrAddStrParm(pctxt, "open type with fragment length");
            return LOG_RTERRNEW(pctxt, RTERR_NOTSUPP);
        }
        bitStartOffset = PU_GETCTXTBITOFFSET(pctxt);
        bitLength = openTypeLen * 8;

        switch(pvalue->id){//dungnm23 check case lai nhe
        
            case ASN1V_e2ap_id_TransactionID:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_TransactionID;
            RTXCTXTPUSHELEMNAME(pctxt, "id-TransactionID");
                pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID 
                    = rtxMemAllocType(pctxt, e2ap_TransactionID);

                asn1Init_e2ap_TransactionID(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID);

                stat = asn1PD_e2ap_TransactionID (pctxt,
                        (e2ap_TransactionID*)pvalue->value.
                        u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_E2connectionSetup:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup;
            RTXCTXTPUSHELEMNAME(pctxt, "id-E2connectionSetup");
                pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup 
                    = rtxMemAllocType(pctxt, e2ap_E2connectionUpdate_List);

                asn1Init_e2ap_E2connectionUpdate_List(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup);

                stat = asn1PD_e2ap_E2connectionUpdate_List (pctxt,
                        (e2ap_E2connectionUpdate_List*)pvalue->value.
                        u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_E2connectionSetupFailed:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed;
            RTXCTXTPUSHELEMNAME(pctxt, "id-E2connectionSetupFailed");
                pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed 
                    = rtxMemAllocType(pctxt, e2ap_E2connectionSetupFailed_List);

                asn1Init_e2ap_E2connectionSetupFailed_List(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed);

                stat = asn1PD_e2ap_E2connectionSetupFailed_List (pctxt,
                        (e2ap_E2connectionSetupFailed_List*)pvalue->value.
                        u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    

        default:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_UNDEF_;
            pvalue->value.u.extElem1 = rtxMemAllocType(pctxt, ASN1OpenType);
            if(0==pvalue->value.u.extElem1){
                return LOG_RTERR(pctxt, RTERR_NOMEM);
            }

            {
                OSOCTET *pdata =(OSOCTET*) rtxMemAlloc(pctxt, openTypeLen);
                if(0==pdata){
                    return LOG_RTERR(pctxt, RTERR_NOMEM);
                }
                stat = rtxDecBitsToByteArray(pctxt, pdata, openTypeLen, openTypeLen*8);
                if(stat!=0){
                    rtxMemFreePtr(pctxt, pdata);
                    rtxMemFreePtr(pctxt, pvalue->value.u.extElem1);
                    return LOG_RTERR(pctxt, stat);
                }

                pvalue->value.u.extElem1->numocts = openTypeLen;
                pvalue->value.u.extElem1->data = pdata;
            }
            break;
    }
    {
    size_t bitEndOffset = PU_GETCTXTBITOFFSET(pctxt);
    size_t bitsConsumed = bitEndOffset-bitStartOffset;
    if(bitsConsumed<bitLength){
        stat = pd_moveBitCursor(pctxt, (int)(bitLength - bitsConsumed));
    }
    else stat =(bitsConsumed > bitLength) ? ASN_E_INVLEN : 0;
    }}
    if(stat!=0) return LOG_RTERR(pctxt, stat);
    RTXCTXTPOPELEMNAME(pctxt);
    return (stat);

}


int asn1Init_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pvalue)
{
    if(0==pvalue) return RTERR_NULLPTR;
    OSCRTLMEMSET (&pvalue->value, 0, sizeof(pvalue->value));
    return 0;
}


//-----> chuaw có template rtxFreeASN1OpenType

#if 0
void asn1Free_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pvalue)
{
    if(NULL==pvalue) return;
    switch(pvalue->value.t){
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_id_TransactionID:
            // rtxFreeE2ap_TransactionID(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_TransactionID);

            if(pvalue->value.i._e2ap_E2connectionUpdateAcknowledge_id_TransactionID!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_TransactionID(pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_TransactionID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_TransactionID);
           // pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_TransactionID = NULL;
           pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetup:
            // rtxFreeE2ap_E2connectionUpdate_List(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetup);

            if(pvalue->value.i._e2ap_E2connectionUpdateAcknowledge_id_E2connectionUpdate_List!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_E2connectionUpdate_List(pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetup);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetup);
           // pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetup = NULL;
           pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetupFailed:
            // rtxFreeE2ap_E2connectionSetupFailed_List(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetupFailed);

            if(pvalue->value.i._e2ap_E2connectionUpdateAcknowledge_id_E2connectionSetupFailed_List!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_E2connectionSetupFailed_List(pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetupFailed);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetupFailed);
           // pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetupFailed = NULL;
           pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_UNDEF_:
            rtxFreeASN1OpenType(pvalue->value.u.extElem1);
            break;
        default:
            break;
    }
}

int asn1PrtToStr_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pvalue)
{
    int stat =0;
    RTXCTXTPUSHELEMNAME(pctxt, "e2ap_E2connectionUpdateAcknowledge_protocolIEs_element");

    /*print id*/
    RTXCTXTPUSHELEMNAME(pctxt, "id");
        stat = asn1PrtToStr_e2ap_ProtocolIE_ID(pctxt, &pvalue->id);
        if(stat!=0) return LOG_RTERR(pctxt, stat);
    RTXCTXTPOPELEMNAME(pctxt);

    /*print criticality*/
    RTXCTXTPUSHELEMNAME(pctxt, "criticality");
        stat = asn1PrtToStr_e2ap_Criticality(pctxt, &pvalue->criticality);
        if(stat!=0) return LOG_RTERR(pctxt, stat);
    RTXCTXTPOPELEMNAME(pctxt);

    /*print value*/
    RTXCTXTPUSHELEMNAME(pctxt, "value");
        
        switch(pvalue->value.t){
            case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_id_TransactionID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "TransactionID");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_TransactionID (pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_TransactionID);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetup:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "E2connectionUpdate-List");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_E2connectionUpdate_List (pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetup);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetupFailed:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "E2connectionSetupFailed-List");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_E2connectionSetupFailed_List (pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_id_E2connectionSetupFailed);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }

            case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_UNDEF_:
            {
                rtxPLogMsg(pctxt, "Extension element present - raw data not printed.\n");
                break;
            }

            default:
                stat = RTERR_INVOPT;
                return LOG_RTERR(pctxt, stat);
        }
    RTXCTXTPOPELEMNAME(pctxt);
    return (stat);
}
#endif


int asn1PrtToStr_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element (const char * name,
 e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pvalue, 
 char * buffer, OSSIZE bufSize){
    if(rtPrintToStringOpenBrace(name, buffer, bufSize)<0)
        return -1;
    if(asn1PrtToStr_e2ap_ProtocolIE_ID("id", &pvalue->id, buffer, bufSize)<0)
        return -1;
    if(asn1PrtToStr_e2ap_Criticality("criticality", &pvalue->criticality, buffer, bufSize)<0)
        return -1;
    if(rtPrintToStringOpenBrace("value", buffer, bufSize)<0)
        return -1;

    switch(pvalue->value.t){
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_TransactionID:
            if(asn1PrtToStr_e2ap_TransactionID("TransactionID", 
                    pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup:
            if(asn1PrtToStr_e2ap_E2connectionUpdate_List("E2connectionUpdate-List", 
                    pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed:
            if(asn1PrtToStr_e2ap_E2connectionSetupFailed_List("E2connectionSetupFailed-List", 
                    pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed, buffer, bufSize)<0)
                return -1;
            break;    
        default:
        if(0!=pvalue -> value.u.extElem1){
            rtPrintToStringIndent(buffer, bufSize);
            rtPrintToStringHexStr("extElem1", pvalue->value.u.extElem1->numocts, pvalue->value.u.extElem1->data, buffer, bufSize);

        }
        }
    if(rtPrintToStringCloseBrace( buffer, bufSize)<0) return -1;
    if(rtPrintToStringCloseBrace( buffer, bufSize)<0) return -1;

    return 0;

 }

 void asn1Free_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pvalue){
    if(NULL==pvalue) return;
    switch(pvalue->value.t){
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_TransactionID:
            if(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID!=NULL){
            asn1Free_e2ap_TransactionID(pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID);
            pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup:
            if(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup!=NULL){
            asn1Free_e2ap_E2connectionUpdate_List(pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup);
            pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed:
            if(pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed!=NULL){
            asn1Free_e2ap_E2connectionSetupFailed_List(pctxt, pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed);
            pvalue->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed = NULL;
            }
            break;
        default:
            break;


    }
 }

 


// --- End of e2ap_E2connectionUpdateAck_IEs.c ---

// --- Begin of e2ap_E2connectionUpdateAcknowledge.c ---
/*****************************************/
/*           E2connectionUpdateAcknowledge                */
/*****************************************/
//2_container.c
/* 1. xxx_ProtocolIE -> mẫu cũ ở ie_big_msg */
EXTERN int asn1PE_e2ap_E2connectionUpdateAcknowledge_protocolIEs (OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge_protocolIEs* pvalue)
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
        stat = asn1PE_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element (pctxt, ((e2ap_E2connectionUpdateAcknowledge_protocolIEs_element*)pnode->data));
        if(stat!=0) return LOG_RTERR(pctxt, stat);
        xx1++;
        RTXCTXTPOPARRAYELEMNAME(pctxt);
    }

    return (stat);
}

EXTERN int  asn1PD_e2ap_E2connectionUpdateAcknowledge_protocolIEs(OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge_protocolIEs* pvalue)
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
        e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pdata;
        RTXCTXTPUSHARRAYELEMNAME(pctxt, "SEQUENCE",xx1);

        if(pnode == NULL) return LOG_RTERR(pctxt, RTERR_NOMEM);

        asn1Init_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(pdata);
        rtxDListAppendNode(pvalue, pnode);
        stat = asn1PD_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element (pctxt, pdata);
        if(stat!=0) return LOG_RTERR(pctxt, stat);
        RTXCTXTPOPARRAYELEMNAME(pctxt);

    }
    return (stat);
}


int asn1Init_e2ap_E2connectionUpdateAcknowledge_protocolIEs(e2ap_E2connectionUpdateAcknowledge_protocolIEs* pvalue)
{
    if(0==pvalue) return RTERR_NULLPTR;
    rtxDListFastInit (pvalue);
    return 0;
}
#if 1 //ao that day
void asn1Free_e2ap_E2connectionUpdateAcknowledge_protocolIEs(OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge_protocolIEs* pvalue)
{
    if(0==pvalue) return;   
    e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pdata;
    OSRTDListNode* pnode=pvalue->head;
    while(0!=pnode){
        pdata = (e2ap_E2connectionUpdateAcknowledge_protocolIEs_element*)pnode->data;
       // asn1Free_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(pctxt, pdata);
        pnode = pnode->next;
    }
    rtxDListFreeAll(pctxt, pvalue);
}
#endif


EXTERN int asn1PrtToStr_e2ap_E2connectionUpdateAcknowledge_protocolIEs(const char* name, e2ap_E2connectionUpdateAcknowledge_protocolIEs* pvalue, char* buffer, OSSIZE bufSize)
{
    e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* pdata0;
    OSRTDListNode* pnode0;
    char nameBuf[256];
    char numBuf[32];
    OSUINT32 xx1=0;
    for(pnode0 = pvalue->head;  xx1 < pvalue->count && pnode0 != 0; pnode0 = pnode0->next, xx1++){
        pdata0 = (e2ap_E2connectionUpdateAcknowledge_protocolIEs_element*)pnode0->data;
        rtxUIntToCharStr(xx1, numBuf, sizeof(numBuf), 0);
        rtxStrJoin(nameBuf, sizeof(nameBuf), name, "[", numBuf, "]", 0);
        #if 1
        if(asn1PrtToStr_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(nameBuf, pdata0, buffer, bufSize) <0){
            return -1;
        }
        #endif
    }
    return 0;
}


/*2 . E2connectionUpdateAcknowledge -> mẫu cũ ở seq_normal*/

int asn1PE_e2ap_E2connectionUpdateAcknowledge (OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME(pctxt, "E2connectionUpdateAcknowledge");
   /*extension bit*/
   extbit = (OSBOOL)(pvalue->extElem1.count > 0);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR(pctxt, stat);


   /*encode root elements*/   
   /* encode field protocolIEs - id = -1*/  
   RTXCTXTPUSHELEMNAME(pctxt, "protocolIEs");
   stat = asn1PE_e2ap_E2connectionUpdateAcknowledge_protocolIEs (pctxt, &pvalue->protocolIEs);
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

int asn1PD_e2ap_E2connectionUpdateAcknowledge (OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge* pvalue)
{
   int stat =0;
   ASN1OpenType openType;
   ASN1OpenType* pOpenType;
   OSUINT32 bitcnt;
   OSUINT32 i_;
   OSBOOL extbit = FALSE;
   OSBOOL optbits[1];

   RTXCTXTPUSHTYPENAME(pctxt, "E2connectionUpdateAcknowledge");

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
      stat = asn1PD_e2ap_E2connectionUpdateAcknowledge_protocolIEs (pctxt, &pvalue->protocolIEs);
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

int asn1Init_e2ap_E2connectionUpdateAcknowledge (e2ap_E2connectionUpdateAcknowledge* pvalue)
{
   if(0==pvalue) return RTERR_NULLPTR;
   asn1Init_e2ap_E2connectionUpdateAcknowledge_protocolIEs(&pvalue->protocolIEs);
   rtxDListFastInit(&pvalue->extElem1);
   return 0;
}

void asn1Free_e2ap_E2connectionUpdateAcknowledge (OSCTXT* pctxt, e2ap_E2connectionUpdateAcknowledge* pvalue)
{
   if(0==pvalue) return;
   asn1Free_e2ap_E2connectionUpdateAcknowledge_protocolIEs(pctxt, &pvalue->protocolIEs);
   rtxMemFreeOpenSeqExt(pctxt, &pvalue->extElem1);
}

int asn1PrtToStr_e2ap_E2connectionUpdateAcknowledge (const char* name, e2ap_E2connectionUpdateAcknowledge* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) 
   {
      return -1;
   }

   if(asn1PrtToStr_e2ap_E2connectionUpdateAcknowledge_protocolIEs("protocolIEs", &pvalue->protocolIEs, buffer, bufSize) <0){
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
// --- End of e2ap_E2connectionUpdateAcknowledge.c ---

