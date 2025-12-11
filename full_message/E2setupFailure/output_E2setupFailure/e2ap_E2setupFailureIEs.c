/*****************************************/
/*           E2setupFailureIEs                */
/*****************************************/
/* ie.c.j2 */
 /* d là con của msg */
EXTERN int asn1PE_e2ap_E2setupFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupFailure_protocolIEs_element* pvalue)
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
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TransactionID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-TransactionID");
                    stat = asn1PE_e2ap_TransactionID (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_Cause:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-Cause");
                    stat = asn1PE_e2ap_Cause (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TimeToWait:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-TimeToWait");
                    stat = asn1PE_e2ap_TimeToWait (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_CriticalityDiagnostics:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-CriticalityDiagnostics");
                    stat = asn1PE_e2ap_CriticalityDiagnostics (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TNLinformation:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-TNLinformation");
                    stat = asn1PE_e2ap_TNLinformation (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }

            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_UNDEF_:
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

EXTERN int  asn1PD_e2ap_E2setupFailure_protocolIEs_element (OSCTXT* pctxt, e2ap_E2setupFailure_protocolIEs_element* pvalue){
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
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TransactionID;
            RTXCTXTPUSHELEMNAME(pctxt, "id-TransactionID");
                pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID 
                    = rtxMemAllocType(pctxt, e2ap_TransactionID);

                asn1Init_e2ap_TransactionID(pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID);

                stat = asn1PD_e2ap_TransactionID (pctxt,
                        (e2ap_TransactionID*)pvalue->value.
                        u._e2ap_E2setupFailureIEs_id_TransactionID);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_Cause:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_Cause;
            RTXCTXTPUSHELEMNAME(pctxt, "id-Cause");
                pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause 
                    = rtxMemAllocType(pctxt, e2ap_Cause);

                asn1Init_e2ap_Cause(pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause);

                stat = asn1PD_e2ap_Cause (pctxt,
                        (e2ap_Cause*)pvalue->value.
                        u._e2ap_E2setupFailureIEs_id_Cause);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_TimeToWait:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TimeToWait;
            RTXCTXTPUSHELEMNAME(pctxt, "id-TimeToWait");
                pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait 
                    = rtxMemAllocType(pctxt, e2ap_TimeToWait);

                asn1Init_e2ap_TimeToWait(pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait);

                stat = asn1PD_e2ap_TimeToWait (pctxt,
                        (e2ap_TimeToWait*)pvalue->value.
                        u._e2ap_E2setupFailureIEs_id_TimeToWait);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_CriticalityDiagnostics:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_CriticalityDiagnostics;
            RTXCTXTPUSHELEMNAME(pctxt, "id-CriticalityDiagnostics");
                pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics 
                    = rtxMemAllocType(pctxt, e2ap_CriticalityDiagnostics);

                asn1Init_e2ap_CriticalityDiagnostics(pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics);

                stat = asn1PD_e2ap_CriticalityDiagnostics (pctxt,
                        (e2ap_CriticalityDiagnostics*)pvalue->value.
                        u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_TNLinformation:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TNLinformation;
            RTXCTXTPUSHELEMNAME(pctxt, "id-TNLinformation");
                pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation 
                    = rtxMemAllocType(pctxt, e2ap_TNLinformation);

                asn1Init_e2ap_TNLinformation(pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation);

                stat = asn1PD_e2ap_TNLinformation (pctxt,
                        (e2ap_TNLinformation*)pvalue->value.
                        u._e2ap_E2setupFailureIEs_id_TNLinformation);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    

        default:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_UNDEF_;
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


int asn1Init_e2ap_E2setupFailure_protocolIEs_element(e2ap_E2setupFailure_protocolIEs_element* pvalue)
{
    if(0==pvalue) return RTERR_NULLPTR;
    OSCRTLMEMSET (&pvalue->value, 0, sizeof(pvalue->value));
    return 0;
}


//-----> chuaw có template rtxFreeASN1OpenType

#if 0
void asn1Free_e2ap_E2setupFailure_protocolIEs_element(OSCTXT* pctxt, e2ap_E2setupFailure_protocolIEs_element* pvalue)
{
    if(NULL==pvalue) return;
    switch(pvalue->value.t){
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_TransactionID:
            // rtxFreeE2ap_TransactionID(pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TransactionID);

            if(pvalue->value.i._e2ap_E2setupFailure_id_TransactionID!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_TransactionID(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TransactionID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TransactionID);
           // pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TransactionID = NULL;
           pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_Cause:
            // rtxFreeE2ap_Cause(pvalue->value.u._e2ap_E2setupFailureIEs_id_id_Cause);

            if(pvalue->value.i._e2ap_E2setupFailure_id_Cause!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_Cause(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_Cause);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_id_Cause);
           // pvalue->value.u._e2ap_E2setupFailureIEs_id_id_Cause = NULL;
           pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_TimeToWait:
            // rtxFreeE2ap_TimeToWait(pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TimeToWait);

            if(pvalue->value.i._e2ap_E2setupFailure_id_TimeToWait!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_TimeToWait(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TimeToWait);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TimeToWait);
           // pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TimeToWait = NULL;
           pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_CriticalityDiagnostics:
            // rtxFreeE2ap_CriticalityDiagnostics(pvalue->value.u._e2ap_E2setupFailureIEs_id_id_CriticalityDiagnostics);

            if(pvalue->value.i._e2ap_E2setupFailure_id_CriticalityDiagnostics!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_CriticalityDiagnostics(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_CriticalityDiagnostics);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_id_CriticalityDiagnostics);
           // pvalue->value.u._e2ap_E2setupFailureIEs_id_id_CriticalityDiagnostics = NULL;
           pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_TNLinformation:
            // rtxFreeE2ap_TNLinformation(pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TNLinformation);

            if(pvalue->value.i._e2ap_E2setupFailure_id_TNLinformation!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_TNLinformation(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TNLinformation);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TNLinformation);
           // pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TNLinformation = NULL;
           pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_UNDEF_:
            rtxFreeASN1OpenType(pvalue->value.u.extElem1);
            break;
        default:
            break;
    }
}

int asn1PrtToStr_e2ap_E2setupFailure_protocolIEs_element(OSCTXT* pctxt, e2ap_E2setupFailure_protocolIEs_element* pvalue)
{
    int stat =0;
    RTXCTXTPUSHELEMNAME(pctxt, "e2ap_E2setupFailure_protocolIEs_element");

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
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_TransactionID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "TransactionID");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_TransactionID (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TransactionID);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_Cause:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "Cause");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_Cause (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_Cause);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_TimeToWait:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "TimeToWait");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_TimeToWait (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TimeToWait);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_CriticalityDiagnostics:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "CriticalityDiagnostics");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_CriticalityDiagnostics (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_CriticalityDiagnostics);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_id_TNLinformation:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "TNLinformation");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_TNLinformation (pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_id_TNLinformation);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }

            case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_UNDEF_:
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


int asn1PrtToStr_e2ap_E2setupFailure_protocolIEs_element (const char * name,
 e2ap_E2setupFailure_protocolIEs_element* pvalue, 
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
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TransactionID:
            if(asn1PrtToStr_e2ap_TransactionID("TransactionID", 
                    pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_Cause:
            if(asn1PrtToStr_e2ap_Cause("Cause", 
                    pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TimeToWait:
            if(asn1PrtToStr_e2ap_TimeToWait("TimeToWait", 
                    pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_CriticalityDiagnostics:
            if(asn1PrtToStr_e2ap_CriticalityDiagnostics("CriticalityDiagnostics", 
                    pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TNLinformation:
            if(asn1PrtToStr_e2ap_TNLinformation("TNLinformation", 
                    pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation, buffer, bufSize)<0)
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

 void asn1Free_e2ap_E2setupFailure_protocolIEs_element(OSCTXT* pctxt, e2ap_E2setupFailure_protocolIEs_element* pvalue){
    if(NULL==pvalue) return;
    switch(pvalue->value.t){
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TransactionID:
            if(pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID!=NULL){
            asn1Free_e2ap_TransactionID(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID);
            pvalue->value.u._e2ap_E2setupFailureIEs_id_TransactionID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_Cause:
            if(pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause!=NULL){
            asn1Free_e2ap_Cause(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause);
            pvalue->value.u._e2ap_E2setupFailureIEs_id_Cause = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TimeToWait:
            if(pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait!=NULL){
            asn1Free_e2ap_TimeToWait(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait);
            pvalue->value.u._e2ap_E2setupFailureIEs_id_TimeToWait = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_CriticalityDiagnostics:
            if(pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics!=NULL){
            asn1Free_e2ap_CriticalityDiagnostics(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics);
            pvalue->value.u._e2ap_E2setupFailureIEs_id_CriticalityDiagnostics = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_E2setupFailureIEs_id_TNLinformation:
            if(pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation!=NULL){
            asn1Free_e2ap_TNLinformation(pctxt, pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation);
            pvalue->value.u._e2ap_E2setupFailureIEs_id_TNLinformation = NULL;
            }
            break;
        default:
            break;


    }
 }

 

