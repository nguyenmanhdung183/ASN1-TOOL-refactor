/**************************************************/
/* assign_value function for RICsubscriptionResponse */
/**************************************************/
void assign_hardcode_value_RICsubscriptionResponse(e2ap_RICsubscriptionResponse_t* p_RICsubscriptionResponse)
{
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICrequestID.ricRequestorID
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICrequestID.ricInstanceID
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICrequestID
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RANfunctionID
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-Admitted-List.RICaction-Admitted-ItemIEs.RICaction-Admitted-Item.RICactionID
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-Admitted-List.RICaction-Admitted-ItemIEs.RICaction-Admitted-Item
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-Admitted-List.RICaction-Admitted-ItemIEs
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-Admitted-List
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.RICactionID
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause.CauseRICrequest
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause.CauseRICservice
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause.CauseE2node
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause.CauseTransport
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause.CauseProtocol
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause.CauseMisc
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause.CauseServiceLayer.ServiceLayerCause
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause.CauseServiceLayer
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item.Cause
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs.RICaction-NotAdmitted-Item
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List.RICaction-NotAdmitted-ItemIEs
// RICsubscriptionResponse.RICsubscriptionResponse-IEs.RICaction-NotAdmitted-List
// RICsubscriptionResponse.RICsubscriptionResponse-IEs
// RICsubscriptionResponse


    return;
}


/**************************************************/
/*      encode_RICsubscriptionResponse                    */
/*                                                */
/**************************************************/
/*
RICsubscriptionResponse
    RICsubscriptionResponse-IEs
        RICrequestID
            ricRequestorID
            ricInstanceID
        RANfunctionID
        RICaction-Admitted-List
            RICaction-Admitted-ItemIEs
                RICaction-Admitted-Item
                    RICactionID
        RICaction-NotAdmitted-List
            RICaction-NotAdmitted-ItemIEs
                RICaction-NotAdmitted-Item
                    RICactionID
                    Cause
                        CauseRICrequest
                        CauseRICservice
                        CauseE2node
                        CauseTransport
                        CauseProtocol
                        CauseMisc
                        CauseServiceLayer
                            ServiceLayerCause

*/
xnap_return_et e2ap_encode_RICsubscriptionResponse(
                e2ap_RICsubscriptionResponse_t* p_RICsubscriptionResponse_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICsubscriptionResponse(p_RICsubscriptionResponse_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICsubscriptionResponse* p_RICsubscriptionResponse = GNB_PNULL;
    e2ap_RICsubscriptionResponse_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_RICsubscription;
        e2ap_pdu.u.successfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.successfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICsubscriptionResponse;
        p_RICsubscriptionResponse = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionResponse);
        if(GNB_PNULL==p_RICsubscriptionResponse){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICsubscriptionResponse",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICsubscriptionResponse",__FUNCTION__);
        }

        asn1Init_e2ap_RICsubscriptionResponse(p_RICsubscriptionResponse);
        e2ap_pdu.u.successfulOutcome->value.u.ricSubscription = p_RICsubscriptionResponse;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICrequestID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionResponse_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICrequestID,
                                &p_RICsubscriptionResponse_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RANfunctionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionResponse_IEs_id_RANfunctionID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RANfunctionID = &p_RICsubscriptionResponse_src->id_RANfunctionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RICactions_Admitted - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICactions_Admitted;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionResponse_IEs_id_RICactions_Admitted;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICactions_Admitted 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICaction_Admitted_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICactions_Admitted){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICactions_Admitted",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICaction_Admitted_List(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICactions_Admitted);
            #endif
            //message_name.item_type -> type = RICaction_Admitted_List
            if(XNAP_FAILURE == e2ap_compose_RICaction_Admitted_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICactions_Admitted,
                                &p_RICsubscriptionResponse_src->id_RICactions_Admitted)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICaction_Admitted_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICaction_Admitted_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RICactions_NotAdmitted - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICactions_NotAdmitted;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionResponse_IEs_id_RICactions_NotAdmitted;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICactions_NotAdmitted 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICaction_NotAdmitted_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICactions_NotAdmitted){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICactions_NotAdmitted",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICaction_NotAdmitted_List(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICactions_NotAdmitted);
            #endif
            //message_name.item_type -> type = RICaction_NotAdmitted_List
            if(XNAP_FAILURE == e2ap_compose_RICaction_NotAdmitted_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionResponse_IEs_id_RICactions_NotAdmitted,
                                &p_RICsubscriptionResponse_src->id_RICactions_NotAdmitted)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICaction_NotAdmitted_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICaction_NotAdmitted_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionResponse->protocolIEs, p_node);
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