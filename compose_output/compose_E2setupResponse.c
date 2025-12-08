/**************************************************/
/* XXX_3typ.e -> InitiatingMessage/  /            */
/*                                                */
/**************************************************/

xnap_return_et e2ap_encode_E2setupResponse(e2ap_E2setupResponse_t* p_E2setupResponse,
                                            UInt8 *p_asn_msg, 
                                            UInt16* p_asn_msg_len)
{

#if 0 // hardcode
    /* gan gi tri cho p_E2setupResponse o day*/
#endif


    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_E2setupResponse* p_E2setupResponse = GNB_PNULL;
    e2ap_E2setupResponse_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u. = rtxMemAllocType(&asn1_ctx, e2ap_successfulOutcome);
        if(GNB_PNULL==e2ap_pdu.u.successfulOutcome){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for successfulOutcome",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_successfulOutcome(e2ap_pdu.u.successfulOutcome);
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_E2setupResponse
        e2ap_pdu.u.successfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.successfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2setupResponse;
        p_E2setupResponse = rtxMemAllocType(&asn1_ctx, e2ap_E2setupResponse);
        if(GNB_PNULL==p_E2setupResponse){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for E2setupResponse",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for E2setupResponse",__FUNCTION__);
        }

        asn1Init_e2ap_E2setupResponse(p_E2setupResponse);
        e2ap_pdu.u.successfulOutcome->value.u.e2setup = p_E2setupResponse;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_TransactionID*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_TransactionID = p_E2setupResponse->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_GlobalRIC_ID*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_GlobalRIC_ID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_GlobalRIC_ID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_GlobalRIC_ID = rtxMemAllocType(&asn1_ctx, e2ap_GlobalRIC_ID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_GlobalRIC_ID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_GlobalRIC_ID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2setupResponse(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_GlobalRIC_ID);
            #endif
            //message_name.item_type -> type = GlobalRIC_ID
            if(XNAP_FAILURE == e2ap_compose_GlobalRIC_ID(&asn1_ctx, p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_GlobalRIC_ID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field GlobalRIC_ID",__FUNCTION__);
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field GlobalRIC_ID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RANfunctionsAccepted*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsID_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_RANfunctionsID_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_RANfunctionsID_List = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsID_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsID_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionsID_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2setupResponse(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsID_List);
            #endif
            //message_name.item_type -> type = RANfunctionsID_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsID_List(&asn1_ctx, p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsID_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsID_List",__FUNCTION__);
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsID_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RANfunctionsRejected*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsIDcause_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_RANfunctionsIDcause_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_RANfunctionsIDcause_List = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsIDcause_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsIDcause_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionsIDcause_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2setupResponse(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsIDcause_List);
            #endif
            //message_name.item_type -> type = RANfunctionsIDcause_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsIDcause_List(&asn1_ctx, p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsIDcause_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsIDcause_List",__FUNCTION__);
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsIDcause_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-5   encode id_E2nodeComponentConfigAdditionAck*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeComponentConfigAdditionAck_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_E2nodeComponentConfigAdditionAck_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_E2nodeComponentConfigAdditionAck_List = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_E2nodeComponentConfigAdditionAck_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentConfigAdditionAck_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2setupResponse(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_E2nodeComponentConfigAdditionAck_List);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigAdditionAck_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAdditionAck_List(&asn1_ctx, p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_E2nodeComponentConfigAdditionAck_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAdditionAck_List",__FUNCTION__);
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2nodeComponentConfigAdditionAck_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
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
                retVal = XNAP_SUCCESS;
            }
        }

    }while(0);
    rtFreeContext(&asn1_ctx);
    XNAP_UT_TRACE_EXIT();
    return retVal;
}