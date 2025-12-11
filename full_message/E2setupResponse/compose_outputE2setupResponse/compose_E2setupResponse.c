/**************************************************/
/* assign_value function for E2setupResponse */
/**************************************************/
void assign_hardcode_value_E2setupResponse(e2ap_E2setupResponse_t* p_E2setupResponse)
{
// E2setupResponse.E2setupResponseIEs.TransactionID
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID.ric-ID
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionID
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionRevision
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.RANfunctionID
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseRICrequest
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseRICservice
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseE2node
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseTransport
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseProtocol
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseMisc
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseServiceLayer.ServiceLayerCause
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseServiceLayer
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentInterfaceType
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceNG.AMFName
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceNG
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceE1.GNB-CU-UP-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceE1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceF1.GNB-DU-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceF1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceW1.NGENB-DU-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceW1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceS1.MMEname
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceS1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.updateOutcome
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseRICrequest
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseRICservice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseE2node
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseTransport
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseProtocol
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseMisc
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseServiceLayer.ServiceLayerCause
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseServiceLayer
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List
// E2setupResponse.E2setupResponseIEs
// E2setupResponse


    return;
}


/**************************************************/
/*      encode_E2setupResponse                    */
/*                                                */
/**************************************************/
/*
E2setupResponse
    E2setupResponseIEs
        TransactionID
        GlobalRIC-ID
            PLMN-Identity
            ric-ID
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
        E2nodeComponentConfigAdditionAck-List
            E2nodeComponentConfigAdditionAck-ItemIEs
                E2nodeComponentConfigAdditionAck-Item
                    E2nodeComponentInterfaceType
                    E2nodeComponentID
                        E2nodeComponentInterfaceNG
                            AMFName
                                PrintableString
                        E2nodeComponentInterfaceXn
                            GlobalNG-RANNode-ID
                                GlobalgNB-ID
                                    PLMN-Identity
                                    GNB-ID-Choice
                                        gnb-ID
                                GlobalngeNB-ID
                                    PLMN-Identity
                                    ENB-ID-Choice
                                        enb-ID-macro
                                        enb-ID-shortmacro
                                        enb-ID-longmacro
                        E2nodeComponentInterfaceE1
                            GNB-CU-UP-ID
                        E2nodeComponentInterfaceF1
                            GNB-DU-ID
                        E2nodeComponentInterfaceW1
                            NGENB-DU-ID
                        E2nodeComponentInterfaceS1
                            MMEname
                                PrintableString
                        E2nodeComponentInterfaceX2
                            GlobalENB-ID
                                PLMN-Identity
                                ENB-ID
                                    macro-eNB-ID
                                    home-eNB-ID
                                    short-Macro-eNB-ID
                                    long-Macro-eNB-ID
                            GlobalenGNB-ID
                                PLMN-Identity
                                ENGNB-ID
                                    gNB-ID
                    E2nodeComponentConfigurationAck
                        updateOutcome
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
xnap_return_et e2ap_encode_E2setupResponse(
                e2ap_E2setupResponse_t* p_E2setupResponse_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_E2setupResponse(p_E2setupResponse_src);
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
        e2ap_pdu.u.successfulOutcome = rtxMemAllocType(&asn1_ctx, e2ap_SuccessfulOutcome);
        if(GNB_PNULL==e2ap_pdu.u.successfulOutcome){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for successfulOutcome",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_SuccessfulOutcome(e2ap_pdu.u.successfulOutcome);
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_E2setup;
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
            /*IE-1   encode id_TransactionID - presence = mandatory*/
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
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_TransactionID = &p_E2setupResponse_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_GlobalRIC_ID - presence = mandatory*/
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
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_GlobalRIC_ID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_GlobalRIC_ID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_GlobalRIC_ID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_GlobalRIC_ID(p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID);
            #endif
            //message_name.item_type -> type = GlobalRIC_ID
            if(XNAP_FAILURE == e2ap_compose_GlobalRIC_ID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID,
                                &p_E2setupResponse_src->id_GlobalRIC_ID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field GlobalRIC_ID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
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
            /*IE-3   encode id_RANfunctionsAccepted - presence = optional*/
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
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsAccepted;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_RANfunctionsAccepted;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsID_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsAccepted",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsID_List(p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted);
            #endif
            //message_name.item_type -> type = RANfunctionsID_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsID_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted,
                                &p_E2setupResponse_src->id_RANfunctionsAccepted)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsID_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
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
            /*IE-4   encode id_RANfunctionsRejected - presence = optional*/
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
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsRejected;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_RANfunctionsRejected;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsIDcause_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsRejected",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsIDcause_List(p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected);
            #endif
            //message_name.item_type -> type = RANfunctionsIDcause_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsIDcause_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected,
                                &p_E2setupResponse_src->id_RANfunctionsRejected)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsIDcause_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
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
            /*IE-5   encode id_E2nodeComponentConfigAdditionAck - presence = mandatory*/
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
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeComponentConfigAdditionAck;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_E2nodeComponentConfigAdditionAck;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2nodeComponentConfigAdditionAck",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2nodeComponentConfigAdditionAck_List(p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigAdditionAck_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAdditionAck_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck,
                                &p_E2setupResponse_src->id_E2nodeComponentConfigAdditionAck)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAdditionAck_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
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
                rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP_PDU", &e2ap_pdu);
                retVal = XNAP_SUCCESS;
            }
        }

    }while(0);
    rtFreeContext(&asn1_ctx);
    XNAP_UT_TRACE_EXIT();
    return retVal;
}