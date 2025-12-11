/* e2ap_ENB_ID_Choice.c */

/*****************************************/
/*           ENB_ID_Choice                */
/*****************************************/
// choice
// Các nội dung cần thiết cho template choice.c.j2
    // Nội dung của file .c cho primitive BIT STRING (SIZE(20))
    /* bitstring intergrate header file */
//metadata.parsed.primitive_id == 3

//mau rnti_full ben xn  bitstring (n)

EXTERN int asn1PE_e2ap_ENB_ID_Choice_enb_ID_macro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_macro* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "enb-ID-macro");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(20), OSUINTCONST(20), 0, 0);
    stat = pe_BitString (pctxt, OS_MIN(pvalue->numbits, 20), pvalue->data);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_ENB_ID_Choice_enb_ID_macro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_macro* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "enb-ID-macro");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(20), OSUINTCONST(20), 0, 0);
    stat = pd_BitString (pctxt, &pvalue->numbits, pvalue->data, sizeof(pvalue->data));
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_macro (const char* name, e2ap_ENB_ID_Choice_enb_ID_macro* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringBitStrBraceText (name, OS_MIN(pvalue->numbits, 20), pvalue->data, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_ENB_ID_Choice_enb_ID_macro (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_Choice_enb_ID_macro* pvalue);
//EXTERN int asn1Copy_e2ap_ENB_ID_Choice_enb_ID_macro(OSCTXT* pctxt,const e2ap_ENB_ID_Choice_enb_ID_macro* pSrcValue,  e2ap_ENB_ID_Choice_enb_ID_macro* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_Choice_enb_ID_macro(e2ap_ENB_ID_Choice_enb_ID_macro* pvalue){
    if(0==pvalue) return RTERR_NULLPTR;
    pvalue->numbits=0;
    return 0;
}
EXTERN void asn1Free_e2ap_ENB_ID_Choice_enb_ID_macro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_macro* pvalue){
    // No dynamic memory to free for fixed-size BIT STRING
    return;
}



    // Nội dung của file .c cho primitive BIT STRING (SIZE(18))
    /* bitstring intergrate header file */
//metadata.parsed.primitive_id == 3

//mau rnti_full ben xn  bitstring (n)

EXTERN int asn1PE_e2ap_ENB_ID_Choice_enb_ID_shortmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "enb-ID-shortmacro");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(18), OSUINTCONST(18), 0, 0);
    stat = pe_BitString (pctxt, OS_MIN(pvalue->numbits, 18), pvalue->data);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_ENB_ID_Choice_enb_ID_shortmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "enb-ID-shortmacro");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(18), OSUINTCONST(18), 0, 0);
    stat = pd_BitString (pctxt, &pvalue->numbits, pvalue->data, sizeof(pvalue->data));
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_shortmacro (const char* name, e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringBitStrBraceText (name, OS_MIN(pvalue->numbits, 18), pvalue->data, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_ENB_ID_Choice_enb_ID_shortmacro (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue);
//EXTERN int asn1Copy_e2ap_ENB_ID_Choice_enb_ID_shortmacro(OSCTXT* pctxt,const e2ap_ENB_ID_Choice_enb_ID_shortmacro* pSrcValue,  e2ap_ENB_ID_Choice_enb_ID_shortmacro* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_Choice_enb_ID_shortmacro(e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue){
    if(0==pvalue) return RTERR_NULLPTR;
    pvalue->numbits=0;
    return 0;
}
EXTERN void asn1Free_e2ap_ENB_ID_Choice_enb_ID_shortmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_shortmacro* pvalue){
    // No dynamic memory to free for fixed-size BIT STRING
    return;
}



    // Nội dung của file .c cho primitive BIT STRING (SIZE(21))
    /* bitstring intergrate header file */
//metadata.parsed.primitive_id == 3

//mau rnti_full ben xn  bitstring (n)

EXTERN int asn1PE_e2ap_ENB_ID_Choice_enb_ID_longmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "enb-ID-longmacro");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(21), OSUINTCONST(21), 0, 0);
    stat = pe_BitString (pctxt, OS_MIN(pvalue->numbits, 21), pvalue->data);
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_ENB_ID_Choice_enb_ID_longmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue){
    int stat =0;
    //RTXCTXTPUSHTYPENAME(pctxt, "enb-ID-longmacro");
    PU_SETSIZECONSTRAINT(pctxt, OSUINTCONST(21), OSUINTCONST(21), 0, 0);
    stat = pd_BitString (pctxt, &pvalue->numbits, pvalue->data, sizeof(pvalue->data));
    if(stat != 0) return LOG_RTERR (pctxt, stat);
    //RTXCTXTPOPTYPENAME(pctxt);
    return stat;
}
EXTERN int asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_longmacro (const char* name, e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue, char* buffer, OSSIZE bufSize){
    if(rtPrintToStringIndent(buffer, bufSize) < 0) return -1;
    if(rtPrintToStringBitStrBraceText (name, OS_MIN(pvalue->numbits, 21), pvalue->data, buffer, bufSize) < 0) return -1;
    return 0;
}
//EXTERN int asn1PrtToStrm_e2ap_ENB_ID_Choice_enb_ID_longmacro (OSCTXT* pctxt, const char* name, const e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue);
//EXTERN int asn1Copy_e2ap_ENB_ID_Choice_enb_ID_longmacro(OSCTXT* pctxt,const e2ap_ENB_ID_Choice_enb_ID_longmacro* pSrcValue,  e2ap_ENB_ID_Choice_enb_ID_longmacro* pDstValue);
EXTERN int asn1Init_e2ap_ENB_ID_Choice_enb_ID_longmacro(e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue){
    if(0==pvalue) return RTERR_NULLPTR;
    pvalue->numbits=0;
    return 0;
}
EXTERN void asn1Free_e2ap_ENB_ID_Choice_enb_ID_longmacro(OSCTXT* pctxt, e2ap_ENB_ID_Choice_enb_ID_longmacro* pvalue){
    // No dynamic memory to free for fixed-size BIT STRING
    return;
}




// Các phần còn lại của template choice.c.j2
// choice without extension

EXTERN int asn1PE_e2ap_ENB_ID_Choice (OSCTXT* pctxt, e2ap_ENB_ID_Choice* pvalue)
{
   int stat = 0;
   RTXCTXTPUSHTYPENAME (pctxt, "ENB-ID-Choice");
   RTXCTXTPUSHELEMNAME (pctxt, "t");
 
   stat = rtxEncBits (pctxt, pvalue->t - 1, 2);// kha nang la numbits
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   RTXCTXTPOPELEMNAME (pctxt);

   switch (pvalue->t) {
      case 1:
         RTXCTXTPUSHELEMNAME (pctxt, "enb-ID-macro");
         //primitive BIT STRING - id = 3
         stat = asn1PE_e2ap_ENB_ID_Choice_enb_ID_macro (pctxt, &pvalue->u.enb_ID_macro); //bit string in choice type 3
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 2:
         RTXCTXTPUSHELEMNAME (pctxt, "enb-ID-shortmacro");
         //primitive BIT STRING - id = 3
         stat = asn1PE_e2ap_ENB_ID_Choice_enb_ID_shortmacro (pctxt, &pvalue->u.enb_ID_shortmacro); //bit string in choice type 3
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 3:
         RTXCTXTPUSHELEMNAME (pctxt, "enb-ID-longmacro");
         //primitive BIT STRING - id = 3
         stat = asn1PE_e2ap_ENB_ID_Choice_enb_ID_longmacro (pctxt, &pvalue->u.enb_ID_longmacro); //bit string in choice type 3
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
   }

   RTXCTXTPOPTYPENAME (pctxt);
   return (stat);
}

int asn1PD_e2ap_ENB_ID_Choice (OSCTXT* pctxt, e2ap_ENB_ID_Choice* pvalue)
{
   int stat = 0;
   OSUINT32 ui;
   RTXCTXTPUSHTYPENAME (pctxt, "ENB-ID-Choice");

 
   stat = rtxDecBits (pctxt, &ui, 2);// kha nang la numbits
   if (stat != 0) return LOG_RTERR (pctxt, stat);
   else pvalue->t = ui + 1;
   //RTXCTXTPOPELEMNAME (pctxt);

   switch (ui) {
      case 0:
         RTXCTXTPUSHELEMNAME (pctxt, "enb-ID-macro");
         pvalue->u.enb_ID_macro = rtxMemAllocType (pctxt, e2ap_ENB_ID_Choice_enb_ID_macro);
         if (pvalue->u.enb_ID_macro == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         //primitive BIT STRING
         asn1Init_e2ap_ENB_ID_Choice_enb_ID_macro(pvalue->u.enb_ID_macro);
         stat = asn1PD_e2ap_ENB_ID_Choice_enb_ID_macro (pctxt, pvalue->u.enb_ID_macro);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 1:
         RTXCTXTPUSHELEMNAME (pctxt, "enb-ID-shortmacro");
         pvalue->u.enb_ID_shortmacro = rtxMemAllocType (pctxt, e2ap_ENB_ID_Choice_enb_ID_shortmacro);
         if (pvalue->u.enb_ID_shortmacro == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         //primitive BIT STRING
         asn1Init_e2ap_ENB_ID_Choice_enb_ID_shortmacro(pvalue->u.enb_ID_shortmacro);
         stat = asn1PD_e2ap_ENB_ID_Choice_enb_ID_shortmacro (pctxt, pvalue->u.enb_ID_shortmacro);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      case 2:
         RTXCTXTPUSHELEMNAME (pctxt, "enb-ID-longmacro");
         pvalue->u.enb_ID_longmacro = rtxMemAllocType (pctxt, e2ap_ENB_ID_Choice_enb_ID_longmacro);
         if (pvalue->u.enb_ID_longmacro == NULL) return LOG_RTERR (pctxt, RTERR_NOMEM);
         //primitive BIT STRING
         asn1Init_e2ap_ENB_ID_Choice_enb_ID_longmacro(pvalue->u.enb_ID_longmacro);
         stat = asn1PD_e2ap_ENB_ID_Choice_enb_ID_longmacro (pctxt, pvalue->u.enb_ID_longmacro);
         if (stat != 0) return LOG_RTERR (pctxt, stat);
         RTXCTXTPOPELEMNAME (pctxt);
         break;
      default:
         return LOG_RTERR (pctxt, RTERR_INVOPT);
   }

   RTXCTXTPOPTYPENAME (pctxt);
   return (stat);
}

int asn1PrtToStr_e2ap_ENB_ID_Choice (const char* name, e2ap_ENB_ID_Choice* pvalue, char* buffer, OSSIZE bufSize)
{
   if(rtPrintToStringOpenBrace(name, buffer, bufSize) < 0) return -1;
   

   switch (pvalue->t) {
      case T_e2ap_ENB_ID_Choice_enb_ID_macro:
         //primitive BIT STRING
         asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_macro (pctxt, pvalue->u.enb_ID_macro);
         break;
      case T_e2ap_ENB_ID_Choice_enb_ID_shortmacro:
         //primitive BIT STRING
         asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_shortmacro (pctxt, pvalue->u.enb_ID_shortmacro);
         break;
      case T_e2ap_ENB_ID_Choice_enb_ID_longmacro:
         //primitive BIT STRING
         asn1PrtToStr_e2ap_ENB_ID_Choice_enb_ID_longmacro (pctxt, pvalue->u.enb_ID_longmacro);
         break;
      default:
         return RTERR_INVOPT;
   }

   if(rtPrintToStringCloseBrace(buffer, bufSize) < 0) return -1;
   return 0;
}

int asn1Init_e2ap_ENB_ID_Choice (e2ap_ENB_ID_Choice* pvalue)
{
   if (pvalue == 0) return RTERR_NULLPTR;
   pvalue->t = 0;
   OSRTLMEMSET (&pvalue->u, 0, sizeof(pvalue->u));
   return 0;
}


void asn1Free_e2ap_ENB_ID_Choice (OSCTXT* pctxt, e2ap_ENB_ID_Choice* pvalue)
{
   if (pvalue == 0) return;
   switch (pvalue->t) {
      case 0: //no choice nothing to free
         break;
      case 1:
         if (pvalue->u.enb_ID_macro) {
            rtxMemFreePtr (pctxt, (void*)pvalue->u.enb_ID_macro);
            pvalue->u.enb_ID_macro = 0;
         }
         break;
      case 2:
         if (pvalue->u.enb_ID_shortmacro) {
            rtxMemFreePtr (pctxt, (void*)pvalue->u.enb_ID_shortmacro);
            pvalue->u.enb_ID_shortmacro = 0;
         }
         break;
      case 3:
         if (pvalue->u.enb_ID_longmacro) {
            rtxMemFreePtr (pctxt, (void*)pvalue->u.enb_ID_longmacro);
            pvalue->u.enb_ID_longmacro = 0;
         }
         break;
   }
}

