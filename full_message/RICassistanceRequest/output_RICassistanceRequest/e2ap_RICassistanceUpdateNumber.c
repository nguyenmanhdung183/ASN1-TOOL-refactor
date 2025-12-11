/*****************************************/
/*           RICassistanceUpdateNumber                */
/*****************************************/
//6 mau integer
// mau integer size(a...b) mau la procedurecode
EXTERN int asn1PE_e2ap_RICassistanceUpdateNumber (OSCTXT* pctxt, e2ap_RICassistanceUpdateNumber value){
    int stat = 0;
    RTXCTCXTPUSHTYPENAME (pctxt, "RICassistanceUpdateNumber");
    stat = pe_ConsUnsigned (pctxt, value, 0, 65535);
    if (stat != 0) return LOG_RTERR (pctxt, stat);
    RTXCTXTPOPTYPENAME (pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_RICassistanceUpdateNumber (OSCTXT* pctxt, e2ap_RICassistanceUpdateNumber* pvalue){
    int stat = 0;
    RTXCTCXTPUSHTYPENAME (pctxt, "RICassistanceUpdateNumber");
    if(pctxt->buffer.aligned){
        int stat2 = PD_BYTE_ALIGN(pctxt);
        if(stat2 != 0) return LOG_RTERR (pctxt, stat2);
    }
    stat = rtxDecBitsToByte(pctxt, pvalue, 0);
    if (stat != 0) return LOG_RTERR (pctxt, stat);
    RTXCTXTPOPTYPENAME (pctxt);
    return stat;
}
//EXTERN int asn1Print_e2ap_RICassistanceUpdateNumber (const char* name, const e2ap_RICassistanceUpdateNumber* pvalue);
//EXTERN int asn1PrtToStr_e2ap_RICassistanceUpdateNumber (const char* name, e2ap_RICassistanceUpdateNumber* pvalue, char* buffer, OSSIZE bufSize);
//EXTERN int asn1PrtToStrm_e2ap_RICassistanceUpdateNumber (OSCTXT* pctxt, const char* name, const e2ap_RICassistanceUpdateNumber* pvalue);
EXTERN int asn1Init_e2ap_RICassistanceUpdateNumber (e2ap_RICassistanceUpdateNumber* pvalue){
    //if (pvalue == 0) return RTERR_NULLPTR;
    //*pvalue = 0;
    return 0;
}
EXTERN int asn1Free_e2ap_RICassistanceUpdateNumber (OSCTXT* pctxt, e2ap_RICassistanceUpdateNumber* pvalue){
    // No dynamic memory to free for integer
    return 0;
}
