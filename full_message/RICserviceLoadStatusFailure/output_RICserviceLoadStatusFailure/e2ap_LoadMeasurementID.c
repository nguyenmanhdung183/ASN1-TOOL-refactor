/*****************************************/
/*           LoadMeasurementID                */
/*****************************************/
//5 mau integer
//mau 5 integer size(a .. b..) mau la nrfreqencyband
EXTERN int asn1PE_e2ap_LoadMeasurementID (OSCTXT* pctxt, e2ap_LoadMeasurementID value){
    int stat =0;
    OSBOOL extbit = FALSE;
    RTXCTCXTPUSHTYPENAME (pctxt, "LoadMeasurementID");
    if(value>1 && value<=4095){
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
        stat = pe_ConsUnsigned (pctxt, value, 1, 4095);
        if (stat != 0) return LOG_RTERR (pctxt, stat);
    }
    RTXCTXTPOPTYPENAME (pctxt);
    return stat;
}
EXTERN int asn1PD_e2ap_LoadMeasurementID (OSCTXT* pctxt, e2ap_LoadMeasurementID* pvalue){
    int stat =0;
    OSBOOL extbit = FALSE;
    RTXCTCXTPUSHTYPENAME (pctxt, "LoadMeasurementID");
    /*extensiobit*/
    stat = DECBIT (pctxt, &extbit);
    if (stat != 0) return LOG_RTERR (pctxt, stat);
    if(extbit==0){
        stat = pd_ConsUnsigned (pctxt, pvalue, 1, 4095);
        if (stat != 0) return LOG_RTERR (pctxt, stat);
    }else{
        stat = pd_UnconsUnsigned (pctxt, pvalue);
        if (stat != 0) return LOG_RTERR (pctxt, stat);
    }
    RTXCTXTPOPTYPENAME (pctxt);
    return stat;
}
//EXTERN int asn1Print_e2ap_LoadMeasurementID (const char* name, const e2ap_LoadMeasurementID* pvalue);
//EXTERN int asn1PrtToStr_e2ap_LoadMeasurementID (const char* name, e2ap_LoadMeasurementID* pvalue, char* buffer, OSSIZE bufSize);
//EXTERN int asn1PrtToStrm_e2ap_LoadMeasurementID (OSCTXT* pctxt, const char* name, const e2ap_LoadMeasurementID* pvalue);
EXTERN int asn1Init_e2ap_LoadMeasurementID (e2ap_LoadMeasurementID* pvalue){
    //if (pvalue == 0) return RTERR_NULLPTR;
    //*pvalue = 0;
    return 0;
}
EXTERN int asn1Free_e2ap_LoadMeasurementID (OSCTXT* pctxt, e2ap_LoadMeasurementID* pvalue){
    // No dynamic memory to free for integer
    return 0;
}
