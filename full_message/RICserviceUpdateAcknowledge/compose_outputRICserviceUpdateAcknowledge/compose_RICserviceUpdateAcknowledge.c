/**************************************************/
/* assign_value function for RICserviceUpdateAcknowledge */
/**************************************************/
void assign_hardcode_value_RICserviceUpdateAcknowledge(e2ap_RICserviceUpdateAcknowledge_t* p_RICserviceUpdateAcknowledge)
{
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.TransactionID
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionID
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionRevision
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsID-List.RANfunctionID-ItemIEs
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsID-List
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.RANfunctionID
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseRICrequest
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseRICservice
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseE2node
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseTransport
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseProtocol
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseMisc
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseServiceLayer.ServiceLayerCause
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseServiceLayer
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs.RANfunctionsIDcause-List
// RICserviceUpdateAcknowledge.RICserviceUpdateAcknowledge-IEs
// RICserviceUpdateAcknowledge


    return;
}


/**************************************************/
/*      encode_RICserviceUpdateAcknowledge                    */
/*                                                */
/**************************************************/
/*
RICserviceUpdateAcknowledge
    RICserviceUpdateAcknowledge-IEs
        TransactionID
        RANfunctionsID-List
            RANfunctionID-ItemIEs
                RANfunctionID-Item
                    RANfunctionID
                    RANfunctionRevision
        RANfunctionsIDcause-List
            RANfunctionIDcause-ItemIEs
                RANfunctionIDcause-Item
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

*/
xnap_return_et e2ap_encode_RICserviceUpdateAcknowledge(
                e2ap_RICserviceUpdateAcknowledge_t* p_RICserviceUpdateAcknowledge_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICserviceUpdateAcknowledge(p_RICserviceUpdateAcknowledge_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICserviceUpdateAcknowledge* p_RICserviceUpdateAcknowledge = GNB_PNULL;
    e2ap_RICserviceUpdateAcknowledge_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_RICserviceUpdate;
        e2ap_pdu.u.successfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.successfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICserviceUpdateAcknowledge;
        p_RICserviceUpdateAcknowledge = rtxMemAllocType(&asn1_ctx, e2ap_RICserviceUpdateAcknowledge);
        if(GNB_PNULL==p_RICserviceUpdateAcknowledge){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICserviceUpdateAcknowledge",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICserviceUpdateAcknowledge",__FUNCTION__);
        }

        asn1Init_e2ap_RICserviceUpdateAcknowledge(p_RICserviceUpdateAcknowledge);
        e2ap_pdu.u.successfulOutcome->value.u.ricServiceUpdate = p_RICserviceUpdateAcknowledge;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_TransactionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceUpdateAcknowledge_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceUpdateAcknowledge_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceUpdateAcknowledge_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceUpdateAcknowledge_IEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_TransactionID = &p_RICserviceUpdateAcknowledge_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceUpdateAcknowledge->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RANfunctionsAccepted - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceUpdateAcknowledge_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceUpdateAcknowledge_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceUpdateAcknowledge_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsAccepted;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceUpdateAcknowledge_IEs_id_RANfunctionsAccepted;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_RANfunctionsAccepted 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsID_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_RANfunctionsAccepted){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsAccepted",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsID_List(p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_RANfunctionsAccepted);
            #endif
            //message_name.item_type -> type = RANfunctionsID_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsID_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_RANfunctionsAccepted,
                                &p_RICserviceUpdateAcknowledge_src->id_RANfunctionsAccepted)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsID_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsID_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceUpdateAcknowledge->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RANfunctionsRejected - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceUpdateAcknowledge_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceUpdateAcknowledge_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceUpdateAcknowledge_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsRejected;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceUpdateAcknowledge_IEs_id_RANfunctionsRejected;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_RANfunctionsRejected 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsIDcause_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_RANfunctionsRejected){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsRejected",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsIDcause_List(p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_RANfunctionsRejected);
            #endif
            //message_name.item_type -> type = RANfunctionsIDcause_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsIDcause_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdateAcknowledge_IEs_id_RANfunctionsRejected,
                                &p_RICserviceUpdateAcknowledge_src->id_RANfunctionsRejected)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsIDcause_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsIDcause_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceUpdateAcknowledge->protocolIEs, p_node);
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