/**************************************************/
/* assign_value function for RICsubscriptionModificationRequired */
/**************************************************/
void assign_hardcode_value_RICsubscriptionModificationRequired(e2ap_RICsubscriptionModificationRequired_t* p_RICsubscriptionModificationRequired)
{
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICrequestID.ricRequestorID
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICrequestID.ricInstanceID
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICrequestID
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RANfunctionID
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeModified-List.RICaction-RequiredToBeModified-ItemIEs.RICaction-RequiredToBeModified-Item.RICactionID
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeModified-List.RICaction-RequiredToBeModified-ItemIEs.RICaction-RequiredToBeModified-Item.RICtimeToWait
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeModified-List.RICaction-RequiredToBeModified-ItemIEs.RICaction-RequiredToBeModified-Item
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeModified-List.RICaction-RequiredToBeModified-ItemIEs
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeModified-List
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.RICactionID
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause.CauseRICrequest
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause.CauseRICservice
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause.CauseE2node
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause.CauseTransport
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause.CauseProtocol
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause.CauseMisc
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause.CauseServiceLayer.ServiceLayerCause
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause.CauseServiceLayer
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item.Cause
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs.RICaction-RequiredToBeRemoved-Item
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List.RICaction-RequiredToBeRemoved-ItemIEs
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs.RICactions-RequiredToBeRemoved-List
// RICsubscriptionModificationRequired.RICsubscriptionModificationRequired-IEs
// RICsubscriptionModificationRequired


    return;
}


/**************************************************/
/*      encode_RICsubscriptionModificationRequired                    */
/*                                                */
/**************************************************/
/*
RICsubscriptionModificationRequired
    RICsubscriptionModificationRequired-IEs
        RICrequestID
            ricRequestorID
            ricInstanceID
        RANfunctionID
        RICactions-RequiredToBeModified-List
            RICaction-RequiredToBeModified-ItemIEs
                RICaction-RequiredToBeModified-Item
                    RICactionID
                    RICtimeToWait
        RICactions-RequiredToBeRemoved-List
            RICaction-RequiredToBeRemoved-ItemIEs
                RICaction-RequiredToBeRemoved-Item
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
xnap_return_et e2ap_encode_RICsubscriptionModificationRequired(
                e2ap_RICsubscriptionModificationRequired_t* p_RICsubscriptionModificationRequired_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICsubscriptionModificationRequired(p_RICsubscriptionModificationRequired_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICsubscriptionModificationRequired* p_RICsubscriptionModificationRequired = GNB_PNULL;
    e2ap_RICsubscriptionModificationRequired_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_RICsubscriptionModificationRequired;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_reject;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICsubscriptionModificationRequired;
        p_RICsubscriptionModificationRequired = rtxMemAllocType(&asn1_ctx, e2ap_RICsubscriptionModificationRequired);
        if(GNB_PNULL==p_RICsubscriptionModificationRequired){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICsubscriptionModificationRequired",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICsubscriptionModificationRequired",__FUNCTION__);
        }

        asn1Init_e2ap_RICsubscriptionModificationRequired(p_RICsubscriptionModificationRequired);
        e2ap_pdu.u.initiatingMessage->value.u.ricSubscriptionModificationRequired = p_RICsubscriptionModificationRequired;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICrequestID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionModificationRequired_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionModificationRequired_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionModificationRequired_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequired_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICrequestID,
                                &p_RICsubscriptionModificationRequired_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionModificationRequired->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RANfunctionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionModificationRequired_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionModificationRequired_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionModificationRequired_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequired_IEs_id_RANfunctionID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RANfunctionID = &p_RICsubscriptionModificationRequired_src->id_RANfunctionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionModificationRequired->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RICactionsRequiredToBeModified_List - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionModificationRequired_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionModificationRequired_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionModificationRequired_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICactionsRequiredToBeModified_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeModified_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeModified_List 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICactions_RequiredToBeModified_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeModified_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICactionsRequiredToBeModified_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICactions_RequiredToBeModified_List(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeModified_List);
            #endif
            //message_name.item_type -> type = RICactions_RequiredToBeModified_List
            if(XNAP_FAILURE == e2ap_compose_RICactions_RequiredToBeModified_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeModified_List,
                                &p_RICsubscriptionModificationRequired_src->id_RICactionsRequiredToBeModified_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICactions_RequiredToBeModified_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICactions_RequiredToBeModified_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionModificationRequired->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RICactionsRequiredToBeRemoved_List - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICsubscriptionModificationRequired_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionModificationRequired_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICsubscriptionModificationRequired_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICactionsRequiredToBeRemoved_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeRemoved_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeRemoved_List 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICactions_RequiredToBeRemoved_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeRemoved_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICactionsRequiredToBeRemoved_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICactions_RequiredToBeRemoved_List(p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeRemoved_List);
            #endif
            //message_name.item_type -> type = RICactions_RequiredToBeRemoved_List
            if(XNAP_FAILURE == e2ap_compose_RICactions_RequiredToBeRemoved_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICsubscriptionModificationRequired_IEs_id_RICactionsRequiredToBeRemoved_List,
                                &p_RICsubscriptionModificationRequired_src->id_RICactionsRequiredToBeRemoved_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICactions_RequiredToBeRemoved_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICactions_RequiredToBeRemoved_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICsubscriptionModificationRequired->protocolIEs, p_node);
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