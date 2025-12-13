/* e2ap_GNB_ID_Choice.c */

/*****************************************/
/*           GNB_ID_Choice                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.c.j2
    // Nội dung của file .c cho primitive BIT STRING (SIZE(22..32))
    /* bitstring intergrate header file */
//metadata.parsed.primitive_id == 4



//type 4  mau la ul_coordination_info bitstring (a..b)

EXTERN int asn1PE_e2ap_GNB_ID_Choice_gnb_ID(OSCTXT* pctxt, e2ap_GNB_ID_Choice_gnb_ID* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "gnb-ID");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(22), OSUINTCONST(32), 0, 0);
    stat = pe_BitString (pctxt, OS_MIN(pvalue->numbits, 32), pvalue->data);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_GNB_ID_Choice_gnb_ID(OSCTXT* pctxt, e2ap_GNB_ID_Choice_gnb_ID* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "gnb-ID");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(22), OSUINTCONST(32), 0, 0);
    stat = pd_BitString (pctxt, &pvalue->numbits, pvalue->data, sizeof(pvalue->data));
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
//EXTERN int asn1PrtToStr_e2ap_GNB_ID_Choice_gnb_ID (const char* name, e2ap_GNB_ID_Choice_gnb_ID* pvalue, char* buffer, OSSIZE bufSize);
//EXTERN int asn1PrtToStrm_e2ap_GNB_ID_Choice_gnb_ID (OSCTXT* pctxt, const char* name, const e2ap_GNB_ID_Choice_gnb_ID* pvalue);
//EXTERN int asn1Copy_e2ap_GNB_ID_Choice_gnb_ID(OSCTXT* pctxt,const e2ap_GNB_ID_Choice_gnb_ID* pSrcValue,  e2ap_GNB_ID_Choice_gnb_ID* pDstValue);
EXTERN int asn1Init_e2ap_GNB_ID_Choice_gnb_ID(e2ap_GNB_ID_Choice_gnb_ID* pvalue){
    if(0==pvalue) return RTERR_NULLPTR;
    pvalue->numbits=0;
    return 0;
}
EXTERN void asn1Free_e2ap_GNB_ID_Choice_gnb_ID(OSCTXT* pctxt, e2ap_GNB_ID_Choice_gnb_ID* pvalue){
    // No dynamic memory to free for fixed-size BIT STRING
    return;
}


// Các phần còn lại của template choice.c.j2
// choice with extension typefef từ 1 -> mẫu từ PDU
EXTERN int asn1PE_e2ap_GNB_ID_Choice (OSCTXT* pctxt, e2ap_GNB_ID_Choice* pvalue)
{
   int stat = 0;
   OSBOOL extbit = FALSE;
   RTXCTXTPUSHTYPENAME (pctxt, "GNB-ID-Choice");

   //extbit = (OSBOOL)(pvalue->t > 0);
   extbit = (OSBOOL)(pvalue->t > 1);
   stat = rtxEncBit (pctxt, extbit);
   if (stat != 0) return LOG_RTERR (pctxt, stat);

   if(!extbit){
      RTXCTXTPUSHELEMNAME (pctxt, "t");

      stat = rtxEncBits (pctxt, pvalue->t - 1, 0);// kha nang la numbits
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      RTXCTXTPOPELEMNAME (pctxt);

      switch (pvalue->t) {
      case 1:
         RTXCTXTPUSHELEMNAME (pctxt, "gnb-ID");
         //primitive BIT STRING
         stat = asn1PE_e2ap_GNB_ID_Choice_gnb_ID (pctxt, &pvalue->u.gnb_ID); //bit string in choice type 4
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
      }
   }else{
      OSINT32 pos;
      void * pPerField;

      stat = pe_SmallNonNegWholeNumber (pctxt, pvalue->t - 2);// can xem lai
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

EXTERN int asn1PD_e2ap_GNB_ID_Choice (OSCTXT* pctxt, e2ap_GNB_ID_Choice* pvalue)
{
   int stat = 0;
   OSUINT32 ui;
   OSBOOL extbit = FALSE;
   ASN1OpenType openType;
   RTXCTXTPUSHTYPENAME (pctxt, "GNB-ID-Choice");

   stat = DEC_BIT (pctxt, &extbit);
   if (stat != 0) return LOG_RTERR (pctxt, stat);

   if(!extbit){
      stat = rtxDecBits (pctxt, &ui, 0);// kha nang la numbits
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      else pvalue->t = ui + 1;

      switch (ui)
      {
      case 0:
         RTXCTXTPUSHELEMNAME (pctxt, "gnb-ID");


         pvalue->u.gnb_ID = rtxMemAllocType (pctxt, e2ap_GNB_ID_Choice_gnb_ID);
         if (pvalue->u.gnb_ID == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         //primitive BIT STRING
         asn1Init_e2ap_GNB_ID_Choice_gnb_ID(pvalue->u.gnb_ID);
         stat = asn1PD_e2ap_GNB_ID_Choice_gnb_ID (pctxt, pvalue->u.gnb_ID);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
      }
   }else{
      stat = pd_SmallNonNegWholeNumber (pctxt, &ui);
      if (stat != 0) return LOG_RTERR (pctxt, stat);
      else pvalue->t = ui + 2;
      if(pvalue->t < 2){
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

int asn1Init_e2ap_GNB_ID_Choice (e2ap_GNB_ID_Choice* pvalue)
{
   if (pvalue == 0) return RTERR_NULLPTR;
   pvalue->t = 0;
   OSCRTLMEMSET (&pvalue->u, 0, sizeof(pvalue->u));
   return 0;
}

void asn1Free_e2ap_GNB_ID_Choice (OSCTXT* pctxt, e2ap_GNB_ID_Choice* pvalue)
{
   if (pvalue == 0) return;
   switch (pvalue->t) {
      case 0: //no choice nothing to free
         break;
      case 1:
         if (pvalue->u.gnb_ID) {
            //primitive BIT STRING
            rtxMemFreePtr (pctxt, (void*)pvalue->u.gnb_ID);
            pvalue->u.gnb_ID = 0;
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


int asn1PrtToStr_e2ap_GNB_ID_Choice (const char* name, e2ap_GNB_ID_Choice* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) return -1;
   

   switch (pvalue->t) {
      case T_e2ap_GNB_ID_Choice_gnb_ID:
         //primitive BIT STRING
         asn1PrtToStr_e2ap_GNB_ID_Choice_gnb_ID (pctxt, pvalue->u.gnb_ID);
         break;
      case T_e2ap_GNB_ID_Choice_extElem1:
         if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
         if(rtPrintToStringHexStr("extElem1", pvalue->u.extElem1->numocts, pvalue->u.extElem1->data, buffer, bufSize) < 0) return -1;
         break;
      default:;
   }

   if(rtPrintToStringCloseBrace(buffer, bufSize) < 0) return -1;
   return 0;
}


