// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RICsubscriptionAuditList (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RICsubscriptionAuditList,
                _e2ap_RICsubscriptionAuditList_t       *p_RICsubscriptionAuditList
){
    e2ap_RICsubscriptionAudit_ItemIEs   *p_RICsubscriptionAudit_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RICsubscriptionAuditList->id_RICsubscriptionAudit_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RICsubscriptionAudit_ItemIEs,
                                &p_node_list,
                                &p_RICsubscriptionAudit_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAudit-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RICsubscriptionAudit_ItemIEs(p_RICsubscriptionAudit_ItemIEs);
        p_RICsubscriptionAudit_ItemIEs->id = ASN1V_e2ap_id_RICsubscriptionAudit_Item;
        p_RICsubscriptionAudit_ItemIEs->criticality = e2ap_reject;
        p_RICsubscriptionAudit_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RICsubscriptionAudit_ItemIEs_id_RICsubscriptionAudit_Item;
        p_RICsubscriptionAudit_ItemIEs->value.u._e2apRICsubscriptionAudit_ItemIEs_id_RICsubscriptionAudit_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionAudit_ItemIEs);
        if(GNB_PNULL==p_RICsubscriptionAudit_ItemIEs->value.u._e2apRICsubscriptionAudit_ItemIEs_id_RICsubscriptionAudit_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAudit-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionAudit_Item(p_asn1_ctx,
                                                p_RICsubscriptionAudit_ItemIEs->value.u._e2apRICsubscriptionAudit_ItemIEs_id_RICsubscriptionAudit_Item,
                                                &p_RICsubscriptionAuditList->id_RICsubscriptionAudit_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICsubscriptionAudit-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RICsubscriptionAuditList, p_node_list);
    }
    return XNAP_SUCCESS;
}


