/**************************************************/
/* assign_value function for RICserviceLoadStatusRequest */
/**************************************************/
void assign_hardcode_value_RICserviceLoadStatusRequest(e2ap_RICserviceLoadStatusRequest_t* p_RICserviceLoadStatusRequest)
{
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.LoadMeasurementID
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RegistrationRequest
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RANfunctionID
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICloadRequest
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICserviceLoadRequest.RICloadRequest
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICserviceLoadRequest
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICrequestID.ricRequestorID
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICrequestID.ricInstanceID
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICrequestID
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICloadRequest
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICactionLoadRequest-List.RICactionLoadRequest-ItemIEs.RICactionLoadRequest-Item.RICactionID
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICactionLoadRequest-List.RICactionLoadRequest-ItemIEs.RICactionLoadRequest-Item.RICloadRequest
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICactionLoadRequest-List.RICactionLoadRequest-ItemIEs.RICactionLoadRequest-Item
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICactionLoadRequest-List.RICactionLoadRequest-ItemIEs
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE.RICactionLoadRequest-List
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs.RICsubscriptionLoadRequest-ItemIE
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List.RICsubscriptionLoadRequest-ItemIEs
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item.RICsubscriptionLoadRequest-List
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs.RANfunctionLoadRequest-Item
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List.RANfunctionLoadRequest-ItemIEs
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.RANfunctionLoadRequest-List
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs.ReportingPeriodicity
// RICserviceLoadStatusRequest.RICserviceLoadStatusRequest-IEs
// RICserviceLoadStatusRequest


    return;
}


/**************************************************/
/*      encode_RICserviceLoadStatusRequest                    */
/*                                                */
/**************************************************/
/*
RICserviceLoadStatusRequest
    RICserviceLoadStatusRequest-IEs
        LoadMeasurementID
        LoadMeasurementID
        RegistrationRequest
        RANfunctionLoadRequest-List
            RANfunctionLoadRequest-ItemIEs
                RANfunctionLoadRequest-Item
                    RANfunctionID
                    RICloadRequest
                    RICserviceLoadRequest
                        RICloadRequest
                        RICloadRequest
                        RICloadRequest
                        RICloadRequest
                        RICloadRequest
                    RICsubscriptionLoadRequest-List
                        RICsubscriptionLoadRequest-ItemIEs
                            RICsubscriptionLoadRequest-ItemIE
                                RICrequestID
                                    ricRequestorID
                                    ricInstanceID
                                RICloadRequest
                                RICactionLoadRequest-List
                                    RICactionLoadRequest-ItemIEs
                                        RICactionLoadRequest-Item
                                            RICactionID
                                            RICloadRequest
        ReportingPeriodicity

*/
xnap_return_et e2ap_encode_RICserviceLoadStatusRequest(
                e2ap_RICserviceLoadStatusRequest_t* p_RICserviceLoadStatusRequest_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICserviceLoadStatusRequest(p_RICserviceLoadStatusRequest_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICserviceLoadStatusRequest* p_RICserviceLoadStatusRequest = GNB_PNULL;
    e2ap_RICserviceLoadStatusRequest_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_RICserviceLoadStatus;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_ignore;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICserviceLoadStatusRequest;
        p_RICserviceLoadStatusRequest = rtxMemAllocType(&asn1_ctx, e2ap_RICserviceLoadStatusRequest);
        if(GNB_PNULL==p_RICserviceLoadStatusRequest){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICserviceLoadStatusRequest",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICserviceLoadStatusRequest",__FUNCTION__);
        }

        asn1Init_e2ap_RICserviceLoadStatusRequest(p_RICserviceLoadStatusRequest);
        e2ap_pdu.u.initiatingMessage->value.u.ricServiceLoadStatus = p_RICserviceLoadStatusRequest;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICloadMeasurementID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICloadMeasurementID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusRequest_IEs_id_RICloadMeasurementID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusRequest_IEs_id_RICloadMeasurementID = &p_RICserviceLoadStatusRequest_src->id_RICloadMeasurementID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_E2nodeLoadMeasurementID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeLoadMeasurementID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusRequest_IEs_id_E2nodeLoadMeasurementID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusRequest_IEs_id_E2nodeLoadMeasurementID = &p_RICserviceLoadStatusRequest_src->id_E2nodeLoadMeasurementID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RegistrationRequest - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RegistrationRequest;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusRequest_IEs_id_RegistrationRequest;
             p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusRequest_IEs_id_RegistrationRequest = &p_RICserviceLoadStatusRequest_src->id_RegistrationRequest; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RANfunctionLoadRequest_List - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionLoadRequest_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusRequest_IEs_id_RANfunctionLoadRequest_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusRequest_IEs_id_RANfunctionLoadRequest_List 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionLoadRequest_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusRequest_IEs_id_RANfunctionLoadRequest_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionLoadRequest_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionLoadRequest_List(p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusRequest_IEs_id_RANfunctionLoadRequest_List);
            #endif
            //message_name.item_type -> type = RANfunctionLoadRequest_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionLoadRequest_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusRequest_IEs_id_RANfunctionLoadRequest_List,
                                &p_RICserviceLoadStatusRequest_src->id_RANfunctionLoadRequest_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionLoadRequest_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionLoadRequest_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-5   encode id_ReportingPeriodicity - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceLoadStatusRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceLoadStatusRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceLoadStatusRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_ReportingPeriodicity;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceLoadStatusRequest_IEs_id_ReportingPeriodicity;
             p_e2ap_protocolIEs_elem->value.u._e2apRICserviceLoadStatusRequest_IEs_id_ReportingPeriodicity = &p_RICserviceLoadStatusRequest_src->id_ReportingPeriodicity; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceLoadStatusRequest->protocolIEs, p_node);
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