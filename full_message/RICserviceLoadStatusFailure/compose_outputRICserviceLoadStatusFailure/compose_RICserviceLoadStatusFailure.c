/**************************************************/
/* assign_value function for RICserviceLoadStatusFailure */
/**************************************************/
void assign_hardcode_value_RICserviceLoadStatusFailure(e2ap_RICserviceLoadStatusFailure_t* p_RICserviceLoadStatusFailure)
{
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.LoadMeasurementID
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause.CauseRICrequest
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause.CauseRICservice
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause.CauseE2node
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause.CauseTransport
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause.CauseProtocol
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause.CauseMisc
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause.CauseServiceLayer.ServiceLayerCause
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause.CauseServiceLayer
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.Cause
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics.ProcedureCode
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics.TriggeringMessage
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics.Criticality
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics.RICrequestID.ricRequestorID
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics.RICrequestID.ricInstanceID
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics.RICrequestID
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List.SEQUENCE
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs.CriticalityDiagnostics
// RICserviceLoadStatusFailure.RICserviceLoadStatusFailure-IEs
// RICserviceLoadStatusFailure


    return;
}


/**************************************************/
/*      encode_RICserviceLoadStatusFailure                    */
/*                                                */
/**************************************************/
/*
RICserviceLoadStatusFailure
    RICserviceLoadStatusFailure-IEs
        LoadMeasurementID
        LoadMeasurementID
        Cause
            CauseRICrequest
            CauseRICservice
            CauseE2node
            CauseTransport
            CauseProtocol
            CauseMisc
            CauseServiceLayer
                ServiceLayerCause
        CriticalityDiagnostics
            ProcedureCode
            TriggeringMessage
            Criticality
            RICrequestID
                ricRequestorID
                ricInstanceID
            CriticalityDiagnostics-IE-List
                SEQUENCE

*/
xnap_return_et e2ap_encode_RICserviceLoadStatusFailure(
                e2ap_RICserviceLoadStatusFailure_t* p_RICserviceLoadStatusFailure_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICserviceLoadStatusFailure(p_RICserviceLoadStatusFailure_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICserviceLoadStatusFailure* p_RICserviceLoadStatusFailure = GNB_PNULL;
    e2ap_RICserviceLoadStatusFailure_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
    /* Initialize ASN.1 context */
    if(0!=rtInitContext(&asn1_ctx)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: ASN context initialization failed",__FUNCTION__);
        XNAP_UT_TRACE_ENTER();
        return retVal;
    }do{
        XNAP_MEMSET(&e2ap_pdu,0,sizeof(e2ap_E2AP_PDU));
        /*set PDU type to initing/ SSF/ USSF */
        e2ap_pdu.t = T_e2ap_E2AP_PDU_unsuccessfulOutcome;
        XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: PDU type set to unsuccessfulOutcome",__FUNCTION__);
        e2ap_pdu.u.unsuccessfulOutcome = rtxMemAllocType(&asn1_ctx, e2ap_UnsuccessfulOutcome);
        if(GNB_PNULL==e2ap_pdu.u.unsuccessfulOutcome){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for unsuccessfulOutcome",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_UnsuccessfulOutcome(e2ap_pdu.u.unsuccessfulOutcome);
        e2ap_pdu.u.unsuccessfulOutcome->procedureCode = ASN1V_e2ap_id_RICserviceLoadStatus;
        e2ap_pdu.u.unsuccessfulOutcome->criticality = e2ap_ignore;
        e2ap_pdu.u.unsuccessfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICserviceLoadStatusFailure;
        p_RICserviceLoadStatusFailure = rtxMemAllocType(&asn1_ctx, e2ap_RICserviceLoadStatusFailure);
        if(GNB_PNULL==p_RICserviceLoadStatusFailure){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICserviceLoadStatusFailure",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICserviceLoadStatusFailure",__FUNCTION__);
        }

        asn1Init_e2ap_RICserviceLoadStatusFailure(p_RICserviceLoadStatusFailure);
        e2ap_pdu.u.unsuccessfulOutcome->value.u.ricServiceLoadStatus = p_RICserviceLoadStatusFailure;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICloadMeasurementID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICloadMeasurementID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusFailure_IEs_id_RICloadMeasurementID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_RICloadMeasurementID = &p_RICserviceLoadStatusFailure_src->id_RICloadMeasurementID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_E2nodeLoadMeasurementID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeLoadMeasurementID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusFailure_IEs_id_E2nodeLoadMeasurementID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_E2nodeLoadMeasurementID = &p_RICserviceLoadStatusFailure_src->id_E2nodeLoadMeasurementID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_Cause - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_Cause;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusFailure_IEs_id_Cause;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_Cause 
                                = rtxMemAllocType(&asn1_ctx, e2ap_Cause);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_Cause){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_Cause",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_Cause(p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_Cause);
            #endif
            //message_name.item_type -> type = Cause
            if(XNAP_FAILURE == e2ap_compose_Cause(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_Cause,
                                &p_RICserviceLoadStatusFailure_src->id_Cause)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field Cause",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field Cause",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_CriticalityDiagnostics - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_CriticalityDiagnostics;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusFailure_IEs_id_CriticalityDiagnostics;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_CriticalityDiagnostics 
                                = rtxMemAllocType(&asn1_ctx, e2ap_CriticalityDiagnostics);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_CriticalityDiagnostics){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_CriticalityDiagnostics",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_CriticalityDiagnostics(p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_CriticalityDiagnostics);
            #endif
            //message_name.item_type -> type = CriticalityDiagnostics
            if(XNAP_FAILURE == e2ap_compose_CriticalityDiagnostics(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusFailure_IEs_id_CriticalityDiagnostics,
                                &p_RICserviceLoadStatusFailure_src->id_CriticalityDiagnostics)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field CriticalityDiagnostics",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field CriticalityDiagnostics",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif

        /*ASN encode msg*/
        {
            if(RT_OK != pu_setBuffer(&asn1_ctx, p_asn_msg, XNAP_MAX_ASN1_BUF_LEN, TRUE)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: pu_setBuffer failed",__FUNCTION__);
                break;
            }
            if(0!=asn1PE_e2ap_E2AP_PDU(&asn1_ctx, &e2ap_pdu)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: ASN encoding failed",__FUNCTION__);
                *p_asn_msg_len = (UInt16)pe_GetMsgLen(&asn1_ctx);
                rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP_PDU", &e2ap_pdu);
                SInt8 buff[500];
                rtxErrGetTextBuf(&asn1_ctx, buff, 500);
                XNAP_TRACE(XNAP_ERROR, "dungnm23 BUFFER[%s], %x", (SInt8*)buff, buff);
                ASN_ERROR_PRINT(&asn1_ctx);
                break;
            }else{
                XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: ASN encoding success",__FUNCTION__);
                *p_asn_msg_len = (UInt16)pe_GetMsgLen(&asn1_ctx);
                rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP_PDU", &e2ap_pdu);
                retVal = XNAP_SUCCESS;
            }
        }

    }while(0);
    rtFreeContext(&asn1_ctx);
    XNAP_UT_TRACE_EXIT();
    return retVal;
}