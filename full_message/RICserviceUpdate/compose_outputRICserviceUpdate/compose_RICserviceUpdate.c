/**************************************************/
/* assign_value function for RICserviceUpdate */
/**************************************************/
void assign_hardcode_value_RICserviceUpdate(e2ap_RICserviceUpdate_t* p_RICserviceUpdate)
{
// RICserviceUpdate.RICserviceUpdate-IEs.TransactionID
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item.RANfunctionID
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item.RANfunctionDefinition
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item.RANfunctionRevision
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item.RANfunctionOID
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctions-List.RANfunction-ItemIEs
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctions-List
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionID
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionRevision
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctionsID-List.RANfunctionID-ItemIEs
// RICserviceUpdate.RICserviceUpdate-IEs.RANfunctionsID-List
// RICserviceUpdate.RICserviceUpdate-IEs
// RICserviceUpdate


    return;
}


/**************************************************/
/*      encode_RICserviceUpdate                    */
/*                                                */
/**************************************************/
/*
RICserviceUpdate
    RICserviceUpdate-IEs
        TransactionID
        RANfunctions-List
            RANfunction-ItemIEs
                RANfunction-Item
                    RANfunctionID
                    RANfunctionDefinition
                    RANfunctionRevision
                    RANfunctionOID
                        PrintableString
        RANfunctions-List
            RANfunction-ItemIEs
                RANfunction-Item
                    RANfunctionID
                    RANfunctionDefinition
                    RANfunctionRevision
                    RANfunctionOID
                        PrintableString
        RANfunctionsID-List
            RANfunctionID-ItemIEs
                RANfunctionID-Item
                    RANfunctionID
                    RANfunctionRevision

*/
xnap_return_et e2ap_encode_RICserviceUpdate(
                e2ap_RICserviceUpdate_t* p_RICserviceUpdate_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICserviceUpdate(p_RICserviceUpdate_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICserviceUpdate* p_RICserviceUpdate = GNB_PNULL;
    e2ap_RICserviceUpdate_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_RICserviceUpdate;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_reject;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICserviceUpdate;
        p_RICserviceUpdate = rtxMemAllocType(&asn1_ctx, e2ap_RICserviceUpdate);
        if(GNB_PNULL==p_RICserviceUpdate){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICserviceUpdate",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICserviceUpdate",__FUNCTION__);
        }

        asn1Init_e2ap_RICserviceUpdate(p_RICserviceUpdate);
        e2ap_pdu.u.initiatingMessage->value.u.ricServiceUpdate = p_RICserviceUpdate;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_TransactionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceUpdate_IEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_TransactionID = &p_RICserviceUpdate_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RANfunctionsAdded - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsAdded;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceUpdate_IEs_id_RANfunctionsAdded;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsAdded 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctions_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsAdded){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsAdded",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctions_List(p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsAdded);
            #endif
            //message_name.item_type -> type = RANfunctions_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctions_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsAdded,
                                &p_RICserviceUpdate_src->id_RANfunctionsAdded)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctions_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctions_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RANfunctionsModified - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsModified;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceUpdate_IEs_id_RANfunctionsModified;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsModified 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctions_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsModified){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsModified",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctions_List(p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsModified);
            #endif
            //message_name.item_type -> type = RANfunctions_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctions_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsModified,
                                &p_RICserviceUpdate_src->id_RANfunctionsModified)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctions_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctions_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RANfunctionsDeleted - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICserviceUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICserviceUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICserviceUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsDeleted;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICserviceUpdate_IEs_id_RANfunctionsDeleted;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsDeleted 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsID_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsDeleted){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsDeleted",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsID_List(p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsDeleted);
            #endif
            //message_name.item_type -> type = RANfunctionsID_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsID_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICserviceUpdate_IEs_id_RANfunctionsDeleted,
                                &p_RICserviceUpdate_src->id_RANfunctionsDeleted)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsID_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsID_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICserviceUpdate->protocolIEs, p_node);
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