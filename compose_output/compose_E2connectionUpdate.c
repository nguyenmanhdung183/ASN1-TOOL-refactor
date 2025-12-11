/**************************************************/
/* assign_value function for E2connectionUpdate */
/**************************************************/
#include "harrdcode_for_e2_con_upd_ack.h"
#if 0
void assign_hardcode_value_E2connectionUpdate(e2ap_E2connectionUpdate_t* p_E2connectionUpdate)
{
// E2connectionUpdate
// E2connectionUpdate.E2connectionUpdate-IEs
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation....
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation.tnlAddress
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation.tnlPort
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLusage
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item.TNLinformation
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item.TNLinformation....
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item.TNLinformation.tnlAddress
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item.TNLinformation.tnlPort
// E2connectionUpdate.E2connectionUpdate-IEs.TransactionID

    return;
}
#endif

/**************************************************/
/*      encode_E2connectionUpdate                    */
/*                                                */
/**************************************************/
/*
E2connectionUpdate
    E2connectionUpdate-IEs
        TransactionID
        E2connectionUpdate-List
            E2connectionUpdate-ItemIEs
                E2connectionUpdate-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
                    TNLusage
        E2connectionUpdateRemove-List
            E2connectionUpdateRemove-ItemIEs
                E2connectionUpdateRemove-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
        E2connectionUpdate-List
            E2connectionUpdate-ItemIEs
                E2connectionUpdate-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
                    TNLusage

*/
xnap_return_et e2ap_encode_E2connectionUpdate(
                e2ap_E2connectionUpdate_t* p_E2connectionUpdate_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_E2connectionUpdate(p_E2connectionUpdate_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_E2connectionUpdate* p_E2connectionUpdate = GNB_PNULL;
    e2ap_E2connectionUpdate_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_E2connectionUpdate;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_reject;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2connectionUpdate;
        p_E2connectionUpdate = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdate);
        if(GNB_PNULL==p_E2connectionUpdate){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for E2connectionUpdate",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for E2connectionUpdate",__FUNCTION__);
        }

        asn1Init_e2ap_E2connectionUpdate(p_E2connectionUpdate);
        e2ap_pdu.u.initiatingMessage->value.u.e2connectionUpdate = p_E2connectionUpdate;

        /* Fill ProtocolIEs */
#if 1
        /*IE-1   encode id_TransactionID - presence = mandatory*/
        {
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2ap_E2connectionUpdate_IEs_id_TransactionID = &p_E2connectionUpdate_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-2   encode id_E2connectionUpdateAdd - presence = optional*/
        if(p_E2connectionUpdate_src->bitmask & E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_ADD_PRESENT)
        {
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2connectionUpdateAdd;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateAdd;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateAdd 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdate_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateAdd){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2connectionUpdateAdd",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2connectionUpdate_List(p_e2ap_protocolIEs_elem->value.u._e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateAdd);
            #endif
            //message_name.item_type -> type = E2connectionUpdate_List
            if(XNAP_FAILURE == e2ap_compose_E2connectionUpdate_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateAdd,
                                &p_E2connectionUpdate_src->id_E2connectionUpdateAdd)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdate_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2connectionUpdate_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-3   encode id_E2connectionUpdateRemove - presence = optional*/
        if(p_E2connectionUpdate_src->bitmask & E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_REMOVE_PRESENT)
        {
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2connectionUpdateRemove;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateRemove;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateRemove 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdateRemove_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateRemove){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2connectionUpdateRemove",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2connectionUpdateRemove_List(p_e2ap_protocolIEs_elem->value.u._e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateRemove);
            #endif
            //message_name.item_type -> type = E2connectionUpdateRemove_List
            if(XNAP_FAILURE == e2ap_compose_E2connectionUpdateRemove_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateRemove,
                                &p_E2connectionUpdate_src->id_E2connectionUpdateRemove)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdateRemove_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2connectionUpdateRemove_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-4   encode id_E2connectionUpdateModify - presence = optional*/
        if(p_E2connectionUpdate_src->bitmask & E2AP_E2CONNECTION_UPDATE_e2ap_ID_E2CONNECTION_UPDATE_MODIFY_PRESENT)
        {
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2connectionUpdateModify;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateModify;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateModify 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdate_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateModify){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2connectionUpdateModify",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2connectionUpdate_List(p_e2ap_protocolIEs_elem->value.u._e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateModify);
            #endif
            //message_name.item_type -> type = E2connectionUpdate_List
            if(XNAP_FAILURE == e2ap_compose_E2connectionUpdate_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateModify,
                                &p_E2connectionUpdate_src->id_E2connectionUpdateModify)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdate_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2connectionUpdate_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdate->protocolIEs, p_node);
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