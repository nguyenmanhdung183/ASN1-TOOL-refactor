/**************************************************/
/* assign_value function for E2setupRequest */
/**************************************************/
void assign_hardcode_value_E2setupRequest(e2ap_E2setupRequest_t* p_E2setupRequest)
{
// E2setupRequest.E2setupRequestIEs.TransactionID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalgNB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalgNB-ID.GNB-ID-Choice
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalgNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalenGNB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalenGNB-ID.ENGNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalenGNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GNB-CU-UP-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GNB-DU-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-gNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GlobalenGNB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GlobalenGNB-ID.ENGNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GlobalenGNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GNB-CU-UP-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GNB-DU-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.NGENB-DU-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID.GlobalE2node-eNB-ID
// E2setupRequest.E2setupRequestIEs.GlobalE2node-ID
// E2setupRequest.E2setupRequestIEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item.RANfunctionID
// E2setupRequest.E2setupRequestIEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item.RANfunctionDefinition
// E2setupRequest.E2setupRequestIEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item.RANfunctionRevision
// E2setupRequest.E2setupRequestIEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item.RANfunctionOID
// E2setupRequest.E2setupRequestIEs.RANfunctions-List.RANfunction-ItemIEs.RANfunction-Item
// E2setupRequest.E2setupRequestIEs.RANfunctions-List.RANfunction-ItemIEs
// E2setupRequest.E2setupRequestIEs.RANfunctions-List
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentInterfaceType
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceNG.AMFName
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceNG
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceE1.GNB-CU-UP-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceE1
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceF1.GNB-DU-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceF1
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceW1.NGENB-DU-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceW1
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceS1.MMEname
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceS1
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.PLMN-Identity
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentConfiguration.e2nodeComponentRequestPart
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentConfiguration.e2nodeComponentResponsePart
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentConfiguration
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs
// E2setupRequest.E2setupRequestIEs.E2nodeComponentConfigAddition-List
// E2setupRequest.E2setupRequestIEs
// E2setupRequest


    return;
}


/**************************************************/
/*      encode_E2setupRequest                    */
/*                                                */
/**************************************************/
/*
E2setupRequest
    E2setupRequestIEs
        TransactionID
        GlobalE2node-ID
            GlobalE2node-gNB-ID
                GlobalgNB-ID
                    PLMN-Identity
                    GNB-ID-Choice
                        gnb-ID
                GlobalenGNB-ID
                    PLMN-Identity
                    ENGNB-ID
                        gNB-ID
                GNB-CU-UP-ID
                GNB-DU-ID
            GlobalE2node-en-gNB-ID
                GlobalenGNB-ID
                    PLMN-Identity
                    ENGNB-ID
                        gNB-ID
                GNB-CU-UP-ID
                GNB-DU-ID
            GlobalE2node-ng-eNB-ID
                GlobalngeNB-ID
                    PLMN-Identity
                    ENB-ID-Choice
                        enb-ID-macro
                        enb-ID-shortmacro
                        enb-ID-longmacro
                GlobalENB-ID
                    PLMN-Identity
                    ENB-ID
                        macro-eNB-ID
                        home-eNB-ID
                        short-Macro-eNB-ID
                        long-Macro-eNB-ID
                NGENB-DU-ID
            GlobalE2node-eNB-ID
                GlobalENB-ID
                    PLMN-Identity
                    ENB-ID
                        macro-eNB-ID
                        home-eNB-ID
                        short-Macro-eNB-ID
                        long-Macro-eNB-ID
        RANfunctions-List
            RANfunction-ItemIEs
                RANfunction-Item
                    RANfunctionID
                    RANfunctionDefinition
                    RANfunctionRevision
                    RANfunctionOID
                        PrintableString
        E2nodeComponentConfigAddition-List
            E2nodeComponentConfigAddition-ItemIEs
                E2nodeComponentConfigAddition-Item
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
                    E2nodeComponentConfiguration
                        e2nodeComponentRequestPart
                        e2nodeComponentResponsePart

*/
xnap_return_et e2ap_encode_E2setupRequest(
                e2ap_E2setupRequest_t* p_E2setupRequest_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_E2setupRequest(p_E2setupRequest_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_E2setupRequest* p_E2setupRequest = GNB_PNULL;
    e2ap_E2setupRequest_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_E2setup;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_reject;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2setupRequest;
        p_E2setupRequest = rtxMemAllocType(&asn1_ctx, e2ap_E2setupRequest);
        if(GNB_PNULL==p_E2setupRequest){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for E2setupRequest",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for E2setupRequest",__FUNCTION__);
        }

        asn1Init_e2ap_E2setupRequest(p_E2setupRequest);
        e2ap_pdu.u.initiatingMessage->value.u.e2setup = p_E2setupRequest;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_TransactionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupRequestIEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_TransactionID = &p_E2setupRequest_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_GlobalE2node_ID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_GlobalE2node_ID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupRequestIEs_id_GlobalE2node_ID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_GlobalE2node_ID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_GlobalE2node_ID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_GlobalE2node_ID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_GlobalE2node_ID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_GlobalE2node_ID(p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_GlobalE2node_ID);
            #endif
            //message_name.item_type -> type = GlobalE2node_ID
            if(XNAP_FAILURE == e2ap_compose_GlobalE2node_ID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_GlobalE2node_ID,
                                &p_E2setupRequest_src->id_GlobalE2node_ID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field GlobalE2node_ID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field GlobalE2node_ID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RANfunctionsAdded - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsAdded;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupRequestIEs_id_RANfunctionsAdded;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_RANfunctionsAdded 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctions_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_RANfunctionsAdded){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsAdded",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctions_List(p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_RANfunctionsAdded);
            #endif
            //message_name.item_type -> type = RANfunctions_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctions_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_RANfunctionsAdded,
                                &p_E2setupRequest_src->id_RANfunctionsAdded)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctions_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctions_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupRequest->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_E2nodeComponentConfigAddition - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupRequest_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupRequest_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupRequest_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeComponentConfigAddition;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupRequestIEs_id_E2nodeComponentConfigAddition;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_E2nodeComponentConfigAddition 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigAddition_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_E2nodeComponentConfigAddition){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2nodeComponentConfigAddition",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2nodeComponentConfigAddition_List(p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_E2nodeComponentConfigAddition);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigAddition_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAddition_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupRequestIEs_id_E2nodeComponentConfigAddition,
                                &p_E2setupRequest_src->id_E2nodeComponentConfigAddition)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAddition_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2nodeComponentConfigAddition_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupRequest->protocolIEs, p_node);
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