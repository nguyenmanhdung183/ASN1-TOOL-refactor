/**************************************************/
/* assign_value function for RICcontrolFailure */
/**************************************************/
void assign_hardcode_value_RICcontrolFailure(e2ap_RICcontrolFailure_t* p_RICcontrolFailure)
{
// RICcontrolFailure.RICcontrolFailure-IEs.RICrequestID.ricRequestorID
// RICcontrolFailure.RICcontrolFailure-IEs.RICrequestID.ricInstanceID
// RICcontrolFailure.RICcontrolFailure-IEs.RICrequestID
// RICcontrolFailure.RICcontrolFailure-IEs.RANfunctionID
// RICcontrolFailure.RICcontrolFailure-IEs.RICcallProcessID
// RICcontrolFailure.RICcontrolFailure-IEs.Cause.CauseRICrequest
// RICcontrolFailure.RICcontrolFailure-IEs.Cause.CauseRICservice
// RICcontrolFailure.RICcontrolFailure-IEs.Cause.CauseE2node
// RICcontrolFailure.RICcontrolFailure-IEs.Cause.CauseTransport
// RICcontrolFailure.RICcontrolFailure-IEs.Cause.CauseProtocol
// RICcontrolFailure.RICcontrolFailure-IEs.Cause.CauseMisc
// RICcontrolFailure.RICcontrolFailure-IEs.Cause.CauseServiceLayer.ServiceLayerCause
// RICcontrolFailure.RICcontrolFailure-IEs.Cause.CauseServiceLayer
// RICcontrolFailure.RICcontrolFailure-IEs.Cause
// RICcontrolFailure.RICcontrolFailure-IEs.RICcontrolOutcome
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics.ProcedureCode
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics.TriggeringMessage
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics.Criticality
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics.RICrequestID.ricRequestorID
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics.RICrequestID.ricInstanceID
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics.RICrequestID
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List.SEQUENCE
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List
// RICcontrolFailure.RICcontrolFailure-IEs.CriticalityDiagnostics
// RICcontrolFailure.RICcontrolFailure-IEs
// RICcontrolFailure


    return;
}


/**************************************************/
/*      encode_RICcontrolFailure                    */
/*                                                */
/**************************************************/
/*
RICcontrolFailure
    RICcontrolFailure-IEs
        RICrequestID
            ricRequestorID
            ricInstanceID
        RANfunctionID
        RICcallProcessID
        Cause
            CauseRICrequest
            CauseRICservice
            CauseE2node
            CauseTransport
            CauseProtocol
            CauseMisc
            CauseServiceLayer
                ServiceLayerCause
        RICcontrolOutcome
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
xnap_return_et e2ap_encode_RICcontrolFailure(
                e2ap_RICcontrolFailure_t* p_RICcontrolFailure_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICcontrolFailure(p_RICcontrolFailure_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICcontrolFailure* p_RICcontrolFailure = GNB_PNULL;
    e2ap_RICcontrolFailure_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.unsuccessfulOutcome->procedureCode = ASN1V_e2ap_id_RICcontrol;
        e2ap_pdu.u.unsuccessfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.unsuccessfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICcontrolFailure;
        p_RICcontrolFailure = rtxMemAllocType(&asn1_ctx, e2ap_RICcontrolFailure);
        if(GNB_PNULL==p_RICcontrolFailure){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICcontrolFailure",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICcontrolFailure",__FUNCTION__);
        }

        asn1Init_e2ap_RICcontrolFailure(p_RICcontrolFailure);
        e2ap_pdu.u.unsuccessfulOutcome->value.u.ricControl = p_RICcontrolFailure;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICrequestID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICcontrolFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICcontrolFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICcontrolFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICcontrolFailure_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_RICrequestID,
                                &p_RICcontrolFailure_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICcontrolFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RANfunctionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICcontrolFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICcontrolFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICcontrolFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICcontrolFailure_IEs_id_RANfunctionID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_RANfunctionID = &p_RICcontrolFailure_src->id_RANfunctionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICcontrolFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RICcallProcessID - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICcontrolFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICcontrolFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICcontrolFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICcallProcessID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICcontrolFailure_IEs_id_RICcallProcessID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_RICcallProcessID = &p_RICcontrolFailure_src->id_RICcallProcessID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICcontrolFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_Cause - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICcontrolFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICcontrolFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICcontrolFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_Cause;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICcontrolFailure_IEs_id_Cause;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_Cause 
                                = rtxMemAllocType(&asn1_ctx, e2ap_Cause);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_Cause){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_Cause",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_Cause(p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_Cause);
            #endif
            //message_name.item_type -> type = Cause
            if(XNAP_FAILURE == e2ap_compose_Cause(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_Cause,
                                &p_RICcontrolFailure_src->id_Cause)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field Cause",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field Cause",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICcontrolFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-5   encode id_RICcontrolOutcome - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICcontrolFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICcontrolFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICcontrolFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICcontrolOutcome;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICcontrolFailure_IEs_id_RICcontrolOutcome;
             p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_RICcontrolOutcome = &p_RICcontrolFailure_src->id_RICcontrolOutcome; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICcontrolFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-6   encode id_CriticalityDiagnostics - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICcontrolFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICcontrolFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICcontrolFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_CriticalityDiagnostics;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICcontrolFailure_IEs_id_CriticalityDiagnostics;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_CriticalityDiagnostics 
                                = rtxMemAllocType(&asn1_ctx, e2ap_CriticalityDiagnostics);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_CriticalityDiagnostics){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_CriticalityDiagnostics",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_CriticalityDiagnostics(p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_CriticalityDiagnostics);
            #endif
            //message_name.item_type -> type = CriticalityDiagnostics
            if(XNAP_FAILURE == e2ap_compose_CriticalityDiagnostics(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICcontrolFailure_IEs_id_CriticalityDiagnostics,
                                &p_RICcontrolFailure_src->id_CriticalityDiagnostics)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field CriticalityDiagnostics",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field CriticalityDiagnostics",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICcontrolFailure->protocolIEs, p_node);
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