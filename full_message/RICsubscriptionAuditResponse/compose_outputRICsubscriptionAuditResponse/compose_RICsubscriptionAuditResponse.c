/**************************************************/
/* assign_value function for RICsubscriptionAuditResponse */
/**************************************************/
void assign_hardcode_value_RICsubscriptionAuditResponse(e2ap_RICsubscriptionAuditResponse_t* p_RICsubscriptionAuditResponse)
{
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICrequestID.ricRequestorID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICrequestID.ricInstanceID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICrequestID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item.RICrequestID.ricRequestorID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item.RICrequestID.ricInstanceID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item.RICrequestID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item.RANfunctionID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item.RICaction-Admitted-List.RICaction-Admitted-ItemIEs.RICaction-Admitted-Item.RICactionID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item.RICaction-Admitted-List.RICaction-Admitted-ItemIEs.RICaction-Admitted-Item
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item.RICaction-Admitted-List.RICaction-Admitted-ItemIEs
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item.RICaction-Admitted-List
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs.RICsubscriptionAuditAction-Item
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList.RICsubscriptionAuditAction-ItemIEs
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditActionList
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item.RICrequestID.ricRequestorID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item.RICrequestID.ricInstanceID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item.RICrequestID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item.RANfunctionID
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs.RICsubscriptionAudit-Item
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditList.RICsubscriptionAudit-ItemIEs
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs.RICsubscriptionAuditList
// RICsubscriptionAuditResponse.RICsubscriptionAuditResponse-IEs
// RICsubscriptionAuditResponse


    return;
}


/**************************************************/
/*      encode_RICsubscriptionAuditResponse                    */
/*                                                */
/**************************************************/
/*
RICsubscriptionAuditResponse
    RICsubscriptionAuditResponse-IEs
        RICrequestID
            ricRequestorID
            ricInstanceID
        RICsubscriptionAuditActionList
            RICsubscriptionAuditAction-ItemIEs
                RICsubscriptionAuditAction-Item
                    RICrequestID
                        ricRequestorID
                        ricInstanceID
                    RANfunctionID
                    RICaction-Admitted-List
                        RICaction-Admitted-ItemIEs
                            RICaction-Admitted-Item
                                RICactionID
        RICsubscriptionAuditList
            RICsubscriptionAudit-ItemIEs
                RICsubscriptionAudit-Item
                    RICrequestID
                        ricRequestorID
                        ricInstanceID
                    RANfunctionID
        RICsubscriptionAuditActionList
            RICsubscriptionAuditAction-ItemIEs
                RICsubscriptionAuditAction-Item
                    RICrequestID
                        ricRequestorID
                        ricInstanceID
                    RANfunctionID
                    RICaction-Admitted-List
                        RICaction-Admitted-ItemIEs
                            RICaction-Admitted-Item
                                RICactionID

*/
xnap_return_et e2ap_encode_RICsubscriptionAuditResponse(
                e2ap_RICsubscriptionAuditResponse_t* p_RICsubscriptionAuditResponse_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICsubscriptionAuditResponse(p_RICsubscriptionAuditResponse_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICsubscriptionAuditResponse* p_RICsubscriptionAuditResponse = GNB_PNULL;
    e2ap_RICsubscriptionAuditResponse_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
    /* Initialize ASN.1 context */
    if(0!=rtInitContext(&asn1_ctx)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: ASN context initialization failed",__FUNCTION__);
        XNAP_UT_TRACE_ENTER();
        return retVal;
    }do{
        XNAP_MEMSET(&e2ap_pdu,0,sizeof(e2ap_E2AP_PDU));
        /*set PDU type to initing/ SSF/ USSF */
        e2ap_pdu.t = T_e2ap_E2AP_PDU_successfulOutcome;
        XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: PDU type set to successfulOutcome",__FUNCTION__);
        e2ap_pdu.u.successfulOutcome = rtxMemAllocType(&asn1_ctx, e2ap_SuccessfulOutcome);
        if(GNB_PNULL==e2ap_pdu.u.successfulOutcome){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for successfulOutcome",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_SuccessfulOutcome(e2ap_pdu.u.successfulOutcome);
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_RICsubscriptionAudit;
        e2ap_pdu.u.successfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.successfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICsubscriptionAuditResponse;
        p_RICsubscriptionAuditResponse = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionAuditResponse);
        if(GNB_PNULL==p_RICsubscriptionAuditResponse){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICsubscriptionAuditResponse",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICsubscriptionAuditResponse",__FUNCTION__);
        }

        asn1Init_e2ap_RICsubscriptionAuditResponse(p_RICsubscriptionAuditResponse);
        e2ap_pdu.u.successfulOutcome->value.u.ricSubscriptionAudit = p_RICsubscriptionAuditResponse;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICrequestID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionAuditResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionAuditResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionAuditResponse_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICrequestID,
                                &p_RICsubscriptionAuditResponse_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionAuditResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RICsubscriptionAuditConfirmedList - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionAuditResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionAuditResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICsubscriptionAuditConfirmedList;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditConfirmedList;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditConfirmedList 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionAuditActionList);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditConfirmedList){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICsubscriptionAuditConfirmedList",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICsubscriptionAuditActionList(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditConfirmedList);
            #endif
            //message_name.item_type -> type = RICsubscriptionAuditActionList
            if(XNAP_FAILURE == e2ap_compose_RICsubscriptionAuditActionList(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditConfirmedList,
                                &p_RICsubscriptionAuditResponse_src->id_RICsubscriptionAuditConfirmedList)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICsubscriptionAuditActionList",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICsubscriptionAuditActionList",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionAuditResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RICsubscriptionAuditUnkownList - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionAuditResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionAuditResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICsubscriptionAuditUnkownList;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditUnkownList;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditUnkownList 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionAuditList);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditUnkownList){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICsubscriptionAuditUnkownList",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICsubscriptionAuditList(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditUnkownList);
            #endif
            //message_name.item_type -> type = RICsubscriptionAuditList
            if(XNAP_FAILURE == e2ap_compose_RICsubscriptionAuditList(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditUnkownList,
                                &p_RICsubscriptionAuditResponse_src->id_RICsubscriptionAuditUnkownList)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICsubscriptionAuditList",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICsubscriptionAuditList",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionAuditResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RICsubscriptionAuditMissingList - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionAuditResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionAuditResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICsubscriptionAuditMissingList;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditMissingList;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditMissingList 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionAuditActionList);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditMissingList){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICsubscriptionAuditMissingList",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICsubscriptionAuditActionList(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditMissingList);
            #endif
            //message_name.item_type -> type = RICsubscriptionAuditActionList
            if(XNAP_FAILURE == e2ap_compose_RICsubscriptionAuditActionList(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionAuditResponse_IEs_id_RICsubscriptionAuditMissingList,
                                &p_RICsubscriptionAuditResponse_src->id_RICsubscriptionAuditMissingList)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICsubscriptionAuditActionList",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICsubscriptionAuditActionList",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionAuditResponse->protocolIEs, p_node);
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