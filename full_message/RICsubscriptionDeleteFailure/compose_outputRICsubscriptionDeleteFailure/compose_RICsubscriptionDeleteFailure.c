/**************************************************/
/* assign_value function for RICsubscriptionDeleteFailure */
/**************************************************/
void assign_hardcode_value_RICsubscriptionDeleteFailure(e2ap_RICsubscriptionDeleteFailure_t* p_RICsubscriptionDeleteFailure)
{
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.RICrequestID.ricRequestorID
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.RICrequestID.ricInstanceID
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.RICrequestID
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.RANfunctionID
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause.CauseRICrequest
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause.CauseRICservice
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause.CauseE2node
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause.CauseTransport
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause.CauseProtocol
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause.CauseMisc
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause.CauseServiceLayer.ServiceLayerCause
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause.CauseServiceLayer
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.Cause
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics.ProcedureCode
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics.TriggeringMessage
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics.Criticality
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics.RICrequestID.ricRequestorID
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics.RICrequestID.ricInstanceID
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics.RICrequestID
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List.SEQUENCE
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs.CriticalityDiagnostics
// RICsubscriptionDeleteFailure.RICsubscriptionDeleteFailure-IEs
// RICsubscriptionDeleteFailure


    return;
}


/**************************************************/
/*      encode_RICsubscriptionDeleteFailure                    */
/*                                                */
/**************************************************/
/*
RICsubscriptionDeleteFailure
    RICsubscriptionDeleteFailure-IEs
        RICrequestID
            ricRequestorID
            ricInstanceID
        RANfunctionID
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
xnap_return_et e2ap_encode_RICsubscriptionDeleteFailure(
                e2ap_RICsubscriptionDeleteFailure_t* p_RICsubscriptionDeleteFailure_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICsubscriptionDeleteFailure(p_RICsubscriptionDeleteFailure_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICsubscriptionDeleteFailure* p_RICsubscriptionDeleteFailure = GNB_PNULL;
    e2ap_RICsubscriptionDeleteFailure_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.unsuccessfulOutcome->procedureCode = ASN1V_e2ap_id_RICsubscriptionDelete;
        e2ap_pdu.u.unsuccessfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.unsuccessfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICsubscriptionDeleteFailure;
        p_RICsubscriptionDeleteFailure = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionDeleteFailure);
        if(GNB_PNULL==p_RICsubscriptionDeleteFailure){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICsubscriptionDeleteFailure",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICsubscriptionDeleteFailure",__FUNCTION__);
        }

        asn1Init_e2ap_RICsubscriptionDeleteFailure(p_RICsubscriptionDeleteFailure);
        e2ap_pdu.u.unsuccessfulOutcome->value.u.ricSubscriptionDelete = p_RICsubscriptionDeleteFailure;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICrequestID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionDeleteFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionDeleteFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionDeleteFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionDeleteFailure_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_RICrequestID,
                                &p_RICsubscriptionDeleteFailure_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionDeleteFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RANfunctionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionDeleteFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionDeleteFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionDeleteFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionDeleteFailure_IEs_id_RANfunctionID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_RANfunctionID = &p_RICsubscriptionDeleteFailure_src->id_RANfunctionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionDeleteFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_Cause - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionDeleteFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionDeleteFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionDeleteFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_Cause;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionDeleteFailure_IEs_id_Cause;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_Cause 
                                = rtxMemAllocType(&asn1_ctx, e2ap_Cause);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_Cause){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_Cause",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_Cause(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_Cause);
            #endif
            //message_name.item_type -> type = Cause
            if(XNAP_FAILURE == e2ap_compose_Cause(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_Cause,
                                &p_RICsubscriptionDeleteFailure_src->id_Cause)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field Cause",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field Cause",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionDeleteFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_CriticalityDiagnostics - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionDeleteFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionDeleteFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionDeleteFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_CriticalityDiagnostics;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionDeleteFailure_IEs_id_CriticalityDiagnostics;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_CriticalityDiagnostics 
                                = rtxMemAllocType(&asn1_ctx, e2ap_CriticalityDiagnostics);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_CriticalityDiagnostics){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_CriticalityDiagnostics",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_CriticalityDiagnostics(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_CriticalityDiagnostics);
            #endif
            //message_name.item_type -> type = CriticalityDiagnostics
            if(XNAP_FAILURE == e2ap_compose_CriticalityDiagnostics(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteFailure_IEs_id_CriticalityDiagnostics,
                                &p_RICsubscriptionDeleteFailure_src->id_CriticalityDiagnostics)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field CriticalityDiagnostics",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field CriticalityDiagnostics",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionDeleteFailure->protocolIEs, p_node);
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