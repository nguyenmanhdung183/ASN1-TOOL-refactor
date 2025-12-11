/*****************************************/
/*           RICindication_IEs                */
/*****************************************/
/* ie.c.j2 */
 /* d là con của msg */
EXTERN int asn1PE_e2ap_RICindication_protocolIEs_element (OSCTXT* pctxt, e2ap_RICindication_protocolIEs_element* pvalue)
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
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICrequestID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-RICrequestID");
                    stat = asn1PE_e2ap_RICrequestID (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RANfunctionID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-RANfunctionID");
                    stat = asn1PE_e2ap_RANfunctionID (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICactionID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-RICactionID");
                    stat = asn1PE_e2ap_RICactionID (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationSN:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-RICindicationSN");
                    stat = asn1PE_e2ap_RICindicationSN (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationType:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-RICindicationType");
                    stat = asn1PE_e2ap_RICindicationType (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationHeader:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-RICindicationHeader");
                    stat = asn1PE_e2ap_RICindicationHeader (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationMessage:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-RICindicationMessage");
                    stat = asn1PE_e2ap_RICindicationMessage (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICcallProcessID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "id-RICcallProcessID");
                    stat = asn1PE_e2ap_RICcallProcessID (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID);
                    if (stat != 0) return LOG_RTERR (pctxt, stat);
                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }

            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_UNDEF_:
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

EXTERN int  asn1PD_e2ap_RICindication_protocolIEs_element (OSCTXT* pctxt, e2ap_RICindication_protocolIEs_element* pvalue){
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
        
            case ASN1V_e2ap_id_RICrequestID:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICrequestID;
            RTXCTXTPUSHELEMNAME(pctxt, "id-RICrequestID");
                pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID 
                    = rtxMemAllocType(pctxt, e2ap_RICrequestID);

                asn1Init_e2ap_RICrequestID(pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID);

                stat = asn1PD_e2ap_RICrequestID (pctxt,
                        (e2ap_RICrequestID*)pvalue->value.
                        u._e2ap_RICindication_IEs_id_RICrequestID);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_RANfunctionID:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RANfunctionID;
            RTXCTXTPUSHELEMNAME(pctxt, "id-RANfunctionID");
                pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID 
                    = rtxMemAllocType(pctxt, e2ap_RANfunctionID);

                asn1Init_e2ap_RANfunctionID(pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID);

                stat = asn1PD_e2ap_RANfunctionID (pctxt,
                        (e2ap_RANfunctionID*)pvalue->value.
                        u._e2ap_RICindication_IEs_id_RANfunctionID);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_RICactionID:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICactionID;
            RTXCTXTPUSHELEMNAME(pctxt, "id-RICactionID");
                pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID 
                    = rtxMemAllocType(pctxt, e2ap_RICactionID);

                asn1Init_e2ap_RICactionID(pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID);

                stat = asn1PD_e2ap_RICactionID (pctxt,
                        (e2ap_RICactionID*)pvalue->value.
                        u._e2ap_RICindication_IEs_id_RICactionID);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_RICindicationSN:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationSN;
            RTXCTXTPUSHELEMNAME(pctxt, "id-RICindicationSN");
                pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN 
                    = rtxMemAllocType(pctxt, e2ap_RICindicationSN);

                asn1Init_e2ap_RICindicationSN(pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN);

                stat = asn1PD_e2ap_RICindicationSN (pctxt,
                        (e2ap_RICindicationSN*)pvalue->value.
                        u._e2ap_RICindication_IEs_id_RICindicationSN);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_RICindicationType:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationType;
            RTXCTXTPUSHELEMNAME(pctxt, "id-RICindicationType");
                pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType 
                    = rtxMemAllocType(pctxt, e2ap_RICindicationType);

                asn1Init_e2ap_RICindicationType(pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType);

                stat = asn1PD_e2ap_RICindicationType (pctxt,
                        (e2ap_RICindicationType*)pvalue->value.
                        u._e2ap_RICindication_IEs_id_RICindicationType);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_RICindicationHeader:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationHeader;
            RTXCTXTPUSHELEMNAME(pctxt, "id-RICindicationHeader");
                pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader 
                    = rtxMemAllocType(pctxt, e2ap_RICindicationHeader);

                asn1Init_e2ap_RICindicationHeader(pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader);

                stat = asn1PD_e2ap_RICindicationHeader (pctxt,
                        (e2ap_RICindicationHeader*)pvalue->value.
                        u._e2ap_RICindication_IEs_id_RICindicationHeader);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_RICindicationMessage:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationMessage;
            RTXCTXTPUSHELEMNAME(pctxt, "id-RICindicationMessage");
                pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage 
                    = rtxMemAllocType(pctxt, e2ap_RICindicationMessage);

                asn1Init_e2ap_RICindicationMessage(pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage);

                stat = asn1PD_e2ap_RICindicationMessage (pctxt,
                        (e2ap_RICindicationMessage*)pvalue->value.
                        u._e2ap_RICindication_IEs_id_RICindicationMessage);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    
        
            case ASN1V_e2ap_id_RICcallProcessID:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICcallProcessID;
            RTXCTXTPUSHELEMNAME(pctxt, "id-RICcallProcessID");
                pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID 
                    = rtxMemAllocType(pctxt, e2ap_RICcallProcessID);

                asn1Init_e2ap_RICcallProcessID(pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID);

                stat = asn1PD_e2ap_RICcallProcessID (pctxt,
                        (e2ap_RICcallProcessID*)pvalue->value.
                        u._e2ap_RICindication_IEs_id_RICcallProcessID);
                        
                if(stat!=0) return LOG_RTERR(pctxt, stat);
            RTXCTXTPOPELEMNAME(pctxt);
            break;
    

        default:
            pvalue->value.t = T_E2AP_PDU_Contents_e2ap_RICindication_IEs_UNDEF_;
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


int asn1Init_e2ap_RICindication_protocolIEs_element(e2ap_RICindication_protocolIEs_element* pvalue)
{
    if(0==pvalue) return RTERR_NULLPTR;
    OSCRTLMEMSET (&pvalue->value, 0, sizeof(pvalue->value));
    return 0;
}


//-----> chuaw có template rtxFreeASN1OpenType

#if 0
void asn1Free_e2ap_RICindication_protocolIEs_element(OSCTXT* pctxt, e2ap_RICindication_protocolIEs_element* pvalue)
{
    if(NULL==pvalue) return;
    switch(pvalue->value.t){
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICrequestID:
            // rtxFreeE2ap_RICrequestID(pvalue->value.u._e2ap_RICindication_IEs_id_id_RICrequestID);

            if(pvalue->value.i._e2ap_RICindication_id_RICrequestID!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_RICrequestID(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICrequestID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_id_RICrequestID);
           // pvalue->value.u._e2ap_RICindication_IEs_id_id_RICrequestID = NULL;
           pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RANfunctionID:
            // rtxFreeE2ap_RANfunctionID(pvalue->value.u._e2ap_RICindication_IEs_id_id_RANfunctionID);

            if(pvalue->value.i._e2ap_RICindication_id_RANfunctionID!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_RANfunctionID(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RANfunctionID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_id_RANfunctionID);
           // pvalue->value.u._e2ap_RICindication_IEs_id_id_RANfunctionID = NULL;
           pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICactionID:
            // rtxFreeE2ap_RICactionID(pvalue->value.u._e2ap_RICindication_IEs_id_id_RICactionID);

            if(pvalue->value.i._e2ap_RICindication_id_RICactionID!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_RICactionID(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICactionID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_id_RICactionID);
           // pvalue->value.u._e2ap_RICindication_IEs_id_id_RICactionID = NULL;
           pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICindicationSN:
            // rtxFreeE2ap_RICindicationSN(pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationSN);

            if(pvalue->value.i._e2ap_RICindication_id_RICindicationSN!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_RICindicationSN(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationSN);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationSN);
           // pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationSN = NULL;
           pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICindicationType:
            // rtxFreeE2ap_RICindicationType(pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationType);

            if(pvalue->value.i._e2ap_RICindication_id_RICindicationType!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_RICindicationType(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationType);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationType);
           // pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationType = NULL;
           pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICindicationHeader:
            // rtxFreeE2ap_RICindicationHeader(pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationHeader);

            if(pvalue->value.i._e2ap_RICindication_id_RICindicationHeader!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_RICindicationHeader(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationHeader);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationHeader);
           // pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationHeader = NULL;
           pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICindicationMessage:
            // rtxFreeE2ap_RICindicationMessage(pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationMessage);

            if(pvalue->value.i._e2ap_RICindication_id_RICindicationMessage!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_RICindicationMessage(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationMessage);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationMessage);
           // pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationMessage = NULL;
           pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICcallProcessID:
            // rtxFreeE2ap_RICcallProcessID(pvalue->value.u._e2ap_RICindication_IEs_id_id_RICcallProcessID);

            if(pvalue->value.i._e2ap_RICindication_id_RICcallProcessID!=NULL){// dungnm23 check lai nhe
            asn1Free_e2ap_RICcallProcessID(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICcallProcessID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_id_RICcallProcessID);
           // pvalue->value.u._e2ap_RICindication_IEs_id_id_RICcallProcessID = NULL;
           pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_UNDEF_:
            rtxFreeASN1OpenType(pvalue->value.u.extElem1);
            break;
        default:
            break;
    }
}

int asn1PrtToStr_e2ap_RICindication_protocolIEs_element(OSCTXT* pctxt, e2ap_RICindication_protocolIEs_element* pvalue)
{
    int stat =0;
    RTXCTXTPUSHELEMNAME(pctxt, "e2ap_RICindication_protocolIEs_element");

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
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICrequestID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "RICrequestID");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_RICrequestID (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICrequestID);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RANfunctionID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "RANfunctionID");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_RANfunctionID (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RANfunctionID);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICactionID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "RICactionID");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_RICactionID (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICactionID);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICindicationSN:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "RICindicationSN");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_RICindicationSN (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationSN);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICindicationType:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "RICindicationType");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_RICindicationType (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationType);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICindicationHeader:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "RICindicationHeader");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_RICindicationHeader (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationHeader);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICindicationMessage:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "RICindicationMessage");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_RICindicationMessage (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICindicationMessage);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }
            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_id_RICcallProcessID:
            {
                RTXCTXTPUSHELEMNAME (pctxt, "RICcallProcessID");// dungnm23 check lai nhe -> xem là item_type hay field_name

                stat = asn1PrtToStr_e2ap_RICcallProcessID (pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_id_RICcallProcessID);//dungnm23 check lai nhe
                if (stat != 0) return LOG_RTERR (pctxt, stat);

                RTXCTXTPOPELEMNAME (pctxt);
                break;
            }

            case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_UNDEF_:
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


int asn1PrtToStr_e2ap_RICindication_protocolIEs_element (const char * name,
 e2ap_RICindication_protocolIEs_element* pvalue, 
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
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICrequestID:
            if(asn1PrtToStr_e2ap_RICrequestID("RICrequestID", 
                    pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RANfunctionID:
            if(asn1PrtToStr_e2ap_RANfunctionID("RANfunctionID", 
                    pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICactionID:
            if(asn1PrtToStr_e2ap_RICactionID("RICactionID", 
                    pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationSN:
            if(asn1PrtToStr_e2ap_RICindicationSN("RICindicationSN", 
                    pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationType:
            if(asn1PrtToStr_e2ap_RICindicationType("RICindicationType", 
                    pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationHeader:
            if(asn1PrtToStr_e2ap_RICindicationHeader("RICindicationHeader", 
                    pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationMessage:
            if(asn1PrtToStr_e2ap_RICindicationMessage("RICindicationMessage", 
                    pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage, buffer, bufSize)<0)
                return -1;
            break;    
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICcallProcessID:
            if(asn1PrtToStr_e2ap_RICcallProcessID("RICcallProcessID", 
                    pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID, buffer, bufSize)<0)
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

 void asn1Free_e2ap_RICindication_protocolIEs_element(OSCTXT* pctxt, e2ap_RICindication_protocolIEs_element* pvalue){
    if(NULL==pvalue) return;
    switch(pvalue->value.t){
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICrequestID:
            if(pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID!=NULL){
            asn1Free_e2ap_RICrequestID(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID);
            pvalue->value.u._e2ap_RICindication_IEs_id_RICrequestID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RANfunctionID:
            if(pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID!=NULL){
            asn1Free_e2ap_RANfunctionID(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID);
            pvalue->value.u._e2ap_RICindication_IEs_id_RANfunctionID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICactionID:
            if(pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID!=NULL){
            asn1Free_e2ap_RICactionID(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID);
            pvalue->value.u._e2ap_RICindication_IEs_id_RICactionID = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationSN:
            if(pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN!=NULL){
            asn1Free_e2ap_RICindicationSN(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN);
            pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationSN = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationType:
            if(pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType!=NULL){
            asn1Free_e2ap_RICindicationType(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType);
            pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationType = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationHeader:
            if(pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader!=NULL){
            asn1Free_e2ap_RICindicationHeader(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader);
            pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationHeader = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICindicationMessage:
            if(pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage!=NULL){
            asn1Free_e2ap_RICindicationMessage(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage);
            pvalue->value.u._e2ap_RICindication_IEs_id_RICindicationMessage = NULL;
            }
            break;
        case T_E2AP_PDU_Contents_e2ap_RICindication_IEs_id_RICcallProcessID:
            if(pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID!=NULL){
            asn1Free_e2ap_RICcallProcessID(pctxt, pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID);
            rtxMemFreePtr(pctxt, (void*)pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID);
            pvalue->value.u._e2ap_RICindication_IEs_id_RICcallProcessID = NULL;
            }
            break;
        default:
            break;


    }
 }

 

