/**************************************************/
/* assign_value function for RICsubscriptionDeleteRequired */
/**************************************************/
void assign_hardcode_value_RICsubscriptionDeleteRequired(e2ap_RICsubscriptionDeleteRequired_t* p_RICsubscriptionDeleteRequired)
{
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.RICrequestID.ricRequestorID
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.RICrequestID.ricInstanceID
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.RICrequestID
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.RANfunctionID
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause.CauseRICrequest
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause.CauseRICservice
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause.CauseE2node
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause.CauseTransport
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause.CauseProtocol
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause.CauseMisc
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause.CauseServiceLayer.ServiceLayerCause
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause.CauseServiceLayer
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item.Cause
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs.RICsubscription-withCause-Item
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause.RICsubscription-withCause-ItemIEs
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs.RICsubscription-List-withCause
// RICsubscriptionDeleteRequired.RICsubscriptionDeleteRequired-IEs
// RICsubscriptionDeleteRequired


    return;
}


/**************************************************/
/*      encode_RICsubscriptionDeleteRequired                    */
/*                                                */
/**************************************************/
/*
RICsubscriptionDeleteRequired
    RICsubscriptionDeleteRequired-IEs
        RICsubscription-List-withCause
            RICsubscription-withCause-ItemIEs
                RICsubscription-withCause-Item
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

*/
xnap_return_et e2ap_encode_RICsubscriptionDeleteRequired(
                e2ap_RICsubscriptionDeleteRequired_t* p_RICsubscriptionDeleteRequired_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICsubscriptionDeleteRequired(p_RICsubscriptionDeleteRequired_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICsubscriptionDeleteRequired* p_RICsubscriptionDeleteRequired = GNB_PNULL;
    e2ap_RICsubscriptionDeleteRequired_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_RICsubscriptionDeleteRequired;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_ignore;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICsubscriptionDeleteRequired;
        p_RICsubscriptionDeleteRequired = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionDeleteRequired);
        if(GNB_PNULL==p_RICsubscriptionDeleteRequired){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICsubscriptionDeleteRequired",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICsubscriptionDeleteRequired",__FUNCTION__);
        }

        asn1Init_e2ap_RICsubscriptionDeleteRequired(p_RICsubscriptionDeleteRequired);
        e2ap_pdu.u.initiatingMessage->value.u.ricSubscriptionDeleteRequired = p_RICsubscriptionDeleteRequired;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICsubscriptionToBeRemoved - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionDeleteRequired_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionDeleteRequired_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionDeleteRequired_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICsubscriptionToBeRemoved;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionDeleteRequired_IEs_id_RICsubscriptionToBeRemoved;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteRequired_IEs_id_RICsubscriptionToBeRemoved 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscription_List_withCause);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteRequired_IEs_id_RICsubscriptionToBeRemoved){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICsubscriptionToBeRemoved",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICsubscription_List_withCause(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteRequired_IEs_id_RICsubscriptionToBeRemoved);
            #endif
            //message_name.item_type -> type = RICsubscription_List_withCause
            if(XNAP_FAILURE == e2ap_compose_RICsubscription_List_withCause(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionDeleteRequired_IEs_id_RICsubscriptionToBeRemoved,
                                &p_RICsubscriptionDeleteRequired_src->id_RICsubscriptionToBeRemoved)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICsubscription_List_withCause",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICsubscription_List_withCause",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionDeleteRequired->protocolIEs, p_node);
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