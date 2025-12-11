/**************************************************/
/* assign_value function for RICassistanceRequest */
/**************************************************/
void assign_hardcode_value_RICassistanceRequest(e2ap_RICassistanceRequest_t* p_RICassistanceRequest)
{
// RICassistanceRequest.RICassistanceRequest-IEs.RICrequestID.ricRequestorID
// RICassistanceRequest.RICassistanceRequest-IEs.RICrequestID.ricInstanceID
// RICassistanceRequest.RICassistanceRequest-IEs.RICrequestID
// RICassistanceRequest.RICassistanceRequest-IEs.RICassistanceHeader
// RICassistanceRequest.RICassistanceRequest-IEs.RICassistanceMessage
// RICassistanceRequest.RICassistanceRequest-IEs.RICassistanceUpdate
// RICassistanceRequest.RICassistanceRequest-IEs.RICassistanceUpdateNumber
// RICassistanceRequest.RICassistanceRequest-IEs
// RICassistanceRequest


    return;
}


/**************************************************/
/*      encode_RICassistanceRequest                    */
/*                                                */
/**************************************************/
/*
RICassistanceRequest
    RICassistanceRequest-IEs
        RICrequestID
            ricRequestorID
            ricInstanceID
        RICassistanceHeader
        RICassistanceMessage
        RICassistanceUpdate
        RICassistanceUpdateNumber

*/
xnap_return_et e2ap_encode_RICassistanceRequest(
                e2ap_RICassistanceRequest_t* p_RICassistanceRequest_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICassistanceRequest(p_RICassistanceRequest_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICassistanceRequest* p_RICassistanceRequest = GNB_PNULL;
    e2ap_RICassistanceRequest_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_RICassistance;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_reject;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICassistanceRequest;
        p_RICassistanceRequest = rtxMemAllocType(&asn1_ctx, e2ap_RICassistanceRequest);
        if(GNB_PNULL==p_RICassistanceRequest){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICassistanceRequest",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICassistanceRequest",__FUNCTION__);
        }

        asn1Init_e2ap_RICassistanceRequest(p_RICassistanceRequest);
        e2ap_pdu.u.initiatingMessage->value.u.ricAssistance = p_RICassistanceRequest;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICrequestID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICassistanceRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICassistanceRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICassistanceRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICassistanceRequest_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICassistanceRequest_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICassistanceRequest_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apRICassistanceRequest_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICassistanceRequest_IEs_id_RICrequestID,
                                &p_RICassistanceRequest_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICassistanceRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RICassistanceHeader - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICassistanceRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICassistanceRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICassistanceRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICassistanceHeader;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICassistanceRequest_IEs_id_RICassistanceHeader;
             p_e2ap_protocolIEs_elem->value.u._e2apRICassistanceRequest_IEs_id_RICassistanceHeader = &p_RICassistanceRequest_src->id_RICassistanceHeader; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICassistanceRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RICassistanceMessage - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICassistanceRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICassistanceRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICassistanceRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICassistanceMessage;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICassistanceRequest_IEs_id_RICassistanceMessage;
             p_e2ap_protocolIEs_elem->value.u._e2apRICassistanceRequest_IEs_id_RICassistanceMessage = &p_RICassistanceRequest_src->id_RICassistanceMessage; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICassistanceRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RICassistanceUpdate - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICassistanceRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICassistanceRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICassistanceRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICassistanceUpdate;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICassistanceRequest_IEs_id_RICassistanceUpdate;
             p_e2ap_protocolIEs_elem->value.u._e2apRICassistanceRequest_IEs_id_RICassistanceUpdate = &p_RICassistanceRequest_src->id_RICassistanceUpdate; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICassistanceRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-5   encode id_RICassistanceUpdateNumber - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICassistanceRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICassistanceRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICassistanceRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICassistanceUpdateNumber;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICassistanceRequest_IEs_id_RICassistanceUpdateNumber;
             p_e2ap_protocolIEs_elem->value.u._e2apRICassistanceRequest_IEs_id_RICassistanceUpdateNumber = &p_RICassistanceRequest_src->id_RICassistanceUpdateNumber; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICassistanceRequest->protocolIEs, p_node);
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