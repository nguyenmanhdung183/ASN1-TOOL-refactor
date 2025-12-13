// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionsID_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionsID_List,
                _e2ap_RANfunctionsID_List_t       *p_RANfunctionsID_List
){
    e2ap_RANfunctionID_ItemIEs   *p_RANfunctionID_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RANfunctionsID_List->id_RANfunctionID_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionID_ItemIEs,
                                &p_node_list,
                                &p_RANfunctionID_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionID-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionID_ItemIEs(p_RANfunctionID_ItemIEs);
        p_RANfunctionID_ItemIEs->id = ASN1V_e2ap_id_RANfunctionID_Item;
        p_RANfunctionID_ItemIEs->criticality = e2ap_reject;
        p_RANfunctionID_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RANfunctionID_ItemIEs_id_RANfunctionID_Item;
        p_RANfunctionID_ItemIEs->value.u._e2apRANfunctionID_ItemIEs_id_RANfunctionID_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RANfunctionID_Item);
        if(GNB_PNULL==p_RANfunctionID_ItemIEs->value.u._e2apRANfunctionID_ItemIEs_id_RANfunctionID_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionID-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID_Item(p_asn1_ctx,
                                                p_RANfunctionID_ItemIEs->value.u._e2apRANfunctionID_ItemIEs_id_RANfunctionID_Item,
                                                &p_RANfunctionsID_List->id_RANfunctionID_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionID-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RANfunctionsID_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


