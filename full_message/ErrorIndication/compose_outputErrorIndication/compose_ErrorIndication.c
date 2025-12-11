/**************************************************/
/* assign_value function for ErrorIndication */
/**************************************************/
void assign_hardcode_value_ErrorIndication(e2ap_ErrorIndication_t* p_ErrorIndication)
{
// ErrorIndication.ErrorIndication-IEs.TransactionID
// ErrorIndication.ErrorIndication-IEs.RICrequestID.ricRequestorID
// ErrorIndication.ErrorIndication-IEs.RICrequestID.ricInstanceID
// ErrorIndication.ErrorIndication-IEs.RICrequestID
// ErrorIndication.ErrorIndication-IEs.RANfunctionID
// ErrorIndication.ErrorIndication-IEs.Cause.CauseRICrequest
// ErrorIndication.ErrorIndication-IEs.Cause.CauseRICservice
// ErrorIndication.ErrorIndication-IEs.Cause.CauseE2node
// ErrorIndication.ErrorIndication-IEs.Cause.CauseTransport
// ErrorIndication.ErrorIndication-IEs.Cause.CauseProtocol
// ErrorIndication.ErrorIndication-IEs.Cause.CauseMisc
// ErrorIndication.ErrorIndication-IEs.Cause.CauseServiceLayer.ServiceLayerCause
// ErrorIndication.ErrorIndication-IEs.Cause.CauseServiceLayer
// ErrorIndication.ErrorIndication-IEs.Cause
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics.ProcedureCode
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics.TriggeringMessage
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics.Criticality
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics.RICrequestID.ricRequestorID
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics.RICrequestID.ricInstanceID
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics.RICrequestID
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List.SEQUENCE
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List
// ErrorIndication.ErrorIndication-IEs.CriticalityDiagnostics
// ErrorIndication.ErrorIndication-IEs
// ErrorIndication


    return;
}


/**************************************************/
/*      encode_ErrorIndication                    */
/*                                                */
/**************************************************/
/*
ErrorIndication
    ErrorIndication-IEs
        TransactionID
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
xnap_return_et e2ap_encode_ErrorIndication(
                e2ap_ErrorIndication_t* p_ErrorIndication_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_ErrorIndication(p_ErrorIndication_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_ErrorIndication* p_ErrorIndication = GNB_PNULL;
    e2ap_ErrorIndication_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
    /* Initialize ASN.1 context */
    if(0!=rtInitContext(&asn1_ctx)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: ASN context initialization failed",__FUNCTION__);
        XNAP_UT_TRACE_ENTER();
        return retVal;
    }do{
        XNAP_MEMSET(&e2ap_pdu,0,sizeof(e2ap_E2AP_PDU));
        /*set PDU type to initing/ SSF/ USSF */
        e2ap_pdu.t = T_e2ap_E2AP_PDU_initiatingMessage;
        XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: PDU type set to initiatingMessage",__FUNCTION__);
        e2ap_pdu.u.initiatingMessage = rtxMemAllocType(&asn1_ctx, e2ap_InitiatingMessage);
        if(GNB_PNULL==e2ap_pdu.u.initiatingMessage){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for initiatingMessage",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_InitiatingMessage(e2ap_pdu.u.initiatingMessage);
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_ErrorIndication;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_ignore;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_ErrorIndication;
        p_ErrorIndication = rtxMemAllocType(&asn1_ctx, e2ap_ErrorIndication);
        if(GNB_PNULL==p_ErrorIndication){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for ErrorIndication",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for ErrorIndication",__FUNCTION__);
        }

        asn1Init_e2ap_ErrorIndication(p_ErrorIndication);
        e2ap_pdu.u.initiatingMessage->value.u.errorIndication = p_ErrorIndication;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_TransactionID - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_ErrorIndication_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_ErrorIndication_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_ErrorIndication_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_ErrorIndication_IEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_TransactionID = &p_ErrorIndication_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_ErrorIndication->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RICrequestID - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_ErrorIndication_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_ErrorIndication_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_ErrorIndication_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_ErrorIndication_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_RICrequestID,
                                &p_ErrorIndication_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_ErrorIndication->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RANfunctionID - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_ErrorIndication_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_ErrorIndication_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_ErrorIndication_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_ErrorIndication_IEs_id_RANfunctionID;
             p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_RANfunctionID = &p_ErrorIndication_src->id_RANfunctionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_ErrorIndication->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_Cause - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_ErrorIndication_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_ErrorIndication_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_ErrorIndication_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_Cause;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_ErrorIndication_IEs_id_Cause;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_Cause 
                                = rtxMemAllocType(&asn1_ctx, e2ap_Cause);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_Cause){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_Cause",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_Cause(p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_Cause);
            #endif
            //message_name.item_type -> type = Cause
            if(XNAP_FAILURE == e2ap_compose_Cause(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_Cause,
                                &p_ErrorIndication_src->id_Cause)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field Cause",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field Cause",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_ErrorIndication->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-5   encode id_CriticalityDiagnostics - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_ErrorIndication_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_ErrorIndication_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_ErrorIndication_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_CriticalityDiagnostics;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_ErrorIndication_IEs_id_CriticalityDiagnostics;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_CriticalityDiagnostics 
                                = rtxMemAllocType(&asn1_ctx, e2ap_CriticalityDiagnostics);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_CriticalityDiagnostics){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_CriticalityDiagnostics",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_CriticalityDiagnostics(p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_CriticalityDiagnostics);
            #endif
            //message_name.item_type -> type = CriticalityDiagnostics
            if(XNAP_FAILURE == e2ap_compose_CriticalityDiagnostics(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apErrorIndication_IEs_id_CriticalityDiagnostics,
                                &p_ErrorIndication_src->id_CriticalityDiagnostics)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field CriticalityDiagnostics",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field CriticalityDiagnostics",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_ErrorIndication->protocolIEs, p_node);
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