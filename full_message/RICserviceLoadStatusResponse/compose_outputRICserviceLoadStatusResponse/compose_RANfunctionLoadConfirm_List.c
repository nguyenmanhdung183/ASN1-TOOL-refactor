// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionLoadConfirm_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionLoadConfirm_List,
                _e2ap_RANfunctionLoadConfirm_List_t       *p_RANfunctionLoadConfirm_List
){
    e2ap_RANfunctionLoadConfirm_ItemIEs   *p_RANfunctionLoadConfirm_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RANfunctionLoadConfirm_List->id_RANfunctionLoadConfirm_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionLoadConfirm_ItemIEs,
                                &p_node_list,
                                &p_RANfunctionLoadConfirm_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionLoadConfirm-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionLoadConfirm_ItemIEs(p_RANfunctionLoadConfirm_ItemIEs);
        p_RANfunctionLoadConfirm_ItemIEs->id = ASN1V_e2ap_id_RANfunctionLoadConfirm_Item;
        p_RANfunctionLoadConfirm_ItemIEs->criticality = e2ap_reject;
        p_RANfunctionLoadConfirm_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RANfunctionLoadConfirm_ItemIEs_id_RANfunctionLoadConfirm_Item;
        p_RANfunctionLoadConfirm_ItemIEs->value.u._e2apRANfunctionLoadConfirm_ItemIEs_id_RANfunctionLoadConfirm_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RANfunctionLoadConfirm_ItemIEs);
        if(GNB_PNULL==p_RANfunctionLoadConfirm_ItemIEs->value.u._e2apRANfunctionLoadConfirm_ItemIEs_id_RANfunctionLoadConfirm_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionLoadConfirm-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionLoadConfirm_Item(p_asn1_ctx,
                                                p_RANfunctionLoadConfirm_ItemIEs->value.u._e2apRANfunctionLoadConfirm_ItemIEs_id_RANfunctionLoadConfirm_Item,
                                                &p_RANfunctionLoadConfirm_List->id_RANfunctionLoadConfirm_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionLoadConfirm-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RANfunctionLoadConfirm_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


