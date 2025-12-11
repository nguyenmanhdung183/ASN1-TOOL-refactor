// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionStateControl_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionStateControl_List,
                _e2ap_RANfunctionStateControl_List_t       *p_RANfunctionStateControl_List
){
    e2ap_RANfunctionStateControl_ItemIEs   *p_RANfunctionStateControl_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RANfunctionStateControl_List->id_RANfunctionStateControl_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionStateControl_ItemIEs,
                                &p_node_list,
                                &p_RANfunctionStateControl_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionStateControl-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionStateControl_ItemIEs(p_RANfunctionStateControl_ItemIEs);
        p_RANfunctionStateControl_ItemIEs->id = ASN1V_e2ap_id_RANfunctionStateControl_Item;
        p_RANfunctionStateControl_ItemIEs->criticality = e2ap_reject;
        p_RANfunctionStateControl_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RANfunctionStateControl_ItemIEs_id_RANfunctionStateControl_Item;
        p_RANfunctionStateControl_ItemIEs->value.u._e2apRANfunctionStateControl_ItemIEs_id_RANfunctionStateControl_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RANfunctionStateControl_ItemIEs);
        if(GNB_PNULL==p_RANfunctionStateControl_ItemIEs->value.u._e2apRANfunctionStateControl_ItemIEs_id_RANfunctionStateControl_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionStateControl-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionStateControl_Item(p_asn1_ctx,
                                                p_RANfunctionStateControl_ItemIEs->value.u._e2apRANfunctionStateControl_ItemIEs_id_RANfunctionStateControl_Item,
                                                &p_RANfunctionStateControl_List->id_RANfunctionStateControl_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionStateControl-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RANfunctionStateControl_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


