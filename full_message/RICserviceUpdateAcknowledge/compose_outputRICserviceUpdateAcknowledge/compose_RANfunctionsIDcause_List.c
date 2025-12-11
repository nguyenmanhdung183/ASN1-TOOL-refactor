// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionsIDcause_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionsIDcause_List,
                _e2ap_RANfunctionsIDcause_List_t       *p_RANfunctionsIDcause_List
){
    e2ap_RANfunctionIDcause_ItemIEs   *p_RANfunctionIDcause_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RANfunctionsIDcause_List->id_RANfunctionIEcause_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionIDcause_ItemIEs,
                                &p_node_list,
                                &p_RANfunctionIDcause_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionIDcause-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionIDcause_ItemIEs(p_RANfunctionIDcause_ItemIEs);
        p_RANfunctionIDcause_ItemIEs->id = ASN1V_e2ap_id_RANfunctionIEcause_Item;
        p_RANfunctionIDcause_ItemIEs->criticality = e2ap_reject;
        p_RANfunctionIDcause_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item;
        p_RANfunctionIDcause_ItemIEs->value.u._e2apRANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RANfunctionIDcause_ItemIEs);
        if(GNB_PNULL==p_RANfunctionIDcause_ItemIEs->value.u._e2apRANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionIDcause-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionIDcause_Item(p_asn1_ctx,
                                                p_RANfunctionIDcause_ItemIEs->value.u._e2apRANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item,
                                                &p_RANfunctionsIDcause_List->id_RANfunctionIEcause_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionIDcause-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RANfunctionsIDcause_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


