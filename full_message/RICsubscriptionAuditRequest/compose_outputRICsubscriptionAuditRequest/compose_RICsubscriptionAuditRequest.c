/**************************************************/
/* assign_value function for RICsubscriptionAuditRequest */
/**************************************************/
void assign_hardcode_value_RICsubscriptionAuditRequest(e2ap_RICsubscriptionAuditRequest_t* p_RICsubscriptionAuditRequest)
{
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICrequestID.ricRequestorID
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICrequestID.ricInstanceID
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICrequestID
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditFlag.ListedRecordsOnly
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditFlag
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item.RICrequestID.ricRequestorID
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item.RICrequestID.ricInstanceID
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item.RICrequestID
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item.RANfunctionID
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs.RICsubscriptionAuditList
// RICsubscriptionAuditRequest.RICsubscriptionAuditRequest-IEs
// RICsubscriptionAuditRequest


    return;
}


/**************************************************/
/*      encode_RICsubscriptionAuditRequest                    */
/*                                                */
/**************************************************/
/*
RICsubscriptionAuditRequest
    RICsubscriptionAuditRequest-IEs
        RICrequestID
            ricRequestorID
            ricInstanceID
        RICsubscriptionAuditFlag
            ListedRecordsOnly
        RICsubscriptionAuditList
            RICsubscriptionAudit-ItemIEs
                RICsubscriptionAudit-Item
                    RICrequestID
                        ricRequestorID
                        ricInstanceID
                    RANfunctionID

*/
xnap_return_et e2ap_encode_RICsubscriptionAuditRequest(
                e2ap_RICsubscriptionAuditRequest_t* p_RICsubscriptionAuditRequest_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICsubscriptionAuditRequest(p_RICsubscriptionAuditRequest_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICsubscriptionAuditRequest* p_RICsubscriptionAuditRequest = GNB_PNULL;
    e2ap_RICsubscriptionAuditRequest_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_RICsubscriptionAudit;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_reject;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICsubscriptionAuditRequest;
        p_RICsubscriptionAuditRequest = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionAuditRequest);
        if(GNB_PNULL==p_RICsubscriptionAuditRequest){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICsubscriptionAuditRequest",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICsubscriptionAuditRequest",__FUNCTION__);
        }

        asn1Init_e2ap_RICsubscriptionAuditRequest(p_RICsubscriptionAuditRequest);
        e2ap_pdu.u.initiatingMessage->value.u.ricSubscriptionAudit = p_RICsubscriptionAuditRequest;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICrequestID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionAuditRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionAuditRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionAuditRequest_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICrequestID,
                                &p_RICsubscriptionAuditRequest_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionAuditRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RICsubscriptionAuditFlag - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionAuditRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionAuditRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICsubscriptionAuditFlag;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditFlag;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditFlag 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionAuditFlag);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditFlag){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICsubscriptionAuditFlag",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICsubscriptionAuditFlag(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditFlag);
            #endif
            //message_name.item_type -> type = RICsubscriptionAuditFlag
            if(XNAP_FAILURE == e2ap_compose_RICsubscriptionAuditFlag(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditFlag,
                                &p_RICsubscriptionAuditRequest_src->id_RICsubscriptionAuditFlag)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICsubscriptionAuditFlag",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICsubscriptionAuditFlag",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionAuditRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RICsubscriptionAuditList - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionAuditRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionAuditRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICsubscriptionAuditList;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditList;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditList 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionAuditList);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditList){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICsubscriptionAuditList",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICsubscriptionAuditList(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditList);
            #endif
            //message_name.item_type -> type = RICsubscriptionAuditList
            if(XNAP_FAILURE == e2ap_compose_RICsubscriptionAuditList(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditRequest_IEs_id_RICsubscriptionAuditList,
                                &p_RICsubscriptionAuditRequest_src->id_RICsubscriptionAuditList)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICsubscriptionAuditList",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICsubscriptionAuditList",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionAuditRequest->protocolIEs, p_node);
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