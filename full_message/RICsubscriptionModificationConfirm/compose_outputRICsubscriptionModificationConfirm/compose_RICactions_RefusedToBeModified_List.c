// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RICactions_RefusedToBeModified_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RICactions_RefusedToBeModified_List,
                _e2ap_RICactions_RefusedToBeModified_List_t       *p_RICactions_RefusedToBeModified_List
){
    e2ap_RICaction_RefusedToBeModified_ItemIEs   *p_RICaction_RefusedToBeModified_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RICactions_RefusedToBeModified_List->id_RICaction_RefusedToBeModified_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RICaction_RefusedToBeModified_ItemIEs,
                                &p_node_list,
                                &p_RICaction_RefusedToBeModified_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICaction-RefusedToBeModified-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RICaction_RefusedToBeModified_ItemIEs(p_RICaction_RefusedToBeModified_ItemIEs);
        p_RICaction_RefusedToBeModified_ItemIEs->id = ASN1V_e2ap_id_RICaction_RefusedToBeModified_Item;
        p_RICaction_RefusedToBeModified_ItemIEs->criticality = e2ap_reject;
        p_RICaction_RefusedToBeModified_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RICaction_RefusedToBeModified_ItemIEs_id_RICaction_RefusedToBeModified_Item;
        p_RICaction_RefusedToBeModified_ItemIEs->value.u._e2apRICaction_RefusedToBeModified_ItemIEs_id_RICaction_RefusedToBeModified_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RICaction_RefusedToBeModified_ItemIEs);
        if(GNB_PNULL==p_RICaction_RefusedToBeModified_ItemIEs->value.u._e2apRICaction_RefusedToBeModified_ItemIEs_id_RICaction_RefusedToBeModified_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICaction-RefusedToBeModified-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RICaction_RefusedToBeModified_Item(p_asn1_ctx,
                                                p_RICaction_RefusedToBeModified_ItemIEs->value.u._e2apRICaction_RefusedToBeModified_ItemIEs_id_RICaction_RefusedToBeModified_Item,
                                                &p_RICactions_RefusedToBeModified_List->id_RICaction_RefusedToBeModified_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICaction-RefusedToBeModified-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RICactions_RefusedToBeModified_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


