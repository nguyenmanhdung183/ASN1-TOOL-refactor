/*****************************************/
/*           LoadMeasurementID                */
/*****************************************/
//5 mau interger
//mau 5 integer size(a .. b..) mau la nrfreqencyband
typedef OSUINT16 e2ap_LoadMeasurementID;
EXTERN int asn1PE_e2ap_LoadMeasurementID (OSCTXT* pctxt, e2ap_LoadMeasurementID value);
EXTERN int asn1PD_e2ap_LoadMeasurementID (OSCTXT* pctxt, e2ap_LoadMeasurementID* pvalue);
EXTERN int asn1Print_e2ap_LoadMeasurementID (const char* name, const e2ap_LoadMeasurementID* pvalue);
EXTERN int asn1PrtToStr_e2ap_LoadMeasurementID (const char* name, e2ap_LoadMeasurementID* pvalue, char* buffer, OSSIZE bufSize);
EXTERN int asn1PrtToStrm_e2ap_LoadMeasurementID (OSCTXT* pctxt, const char* name, const e2ap_LoadMeasurementID* pvalue);
EXTERN int asn1Free_e2ap_LoadMeasurementID (OSCTXT* pctxt, e2ap_LoadMeasurementID* pvalue);
EXTERN int asn1Init_e2ap_LoadMeasurementID (e2ap_LoadMeasurementID* pvalue);
