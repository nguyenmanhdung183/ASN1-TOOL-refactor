// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RICsubscriptionAuditActionList (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RICsubscriptionAuditActionList,
                _e2ap_RICsubscriptionAuditActionList_t       *p_RICsubscriptionAuditActionList
){
    e2ap_RICsubscriptionAuditAction_ItemIEs   *p_RICsubscriptionAuditAction_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RICsubscriptionAuditActionList->id_RICsubscriptionAuditAction_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RICsubscriptionAuditAction_ItemIEs,
                                &p_node_list,
                                &p_RICsubscriptionAuditAction_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditAction-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RICsubscriptionAuditAction_ItemIEs(p_RICsubscriptionAuditAction_ItemIEs);
        p_RICsubscriptionAuditAction_ItemIEs->id = ASN1V_e2ap_id_RICsubscriptionAuditAction_Item;
        p_RICsubscriptionAuditAction_ItemIEs->criticality = e2ap_reject;
        p_RICsubscriptionAuditAction_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RICsubscriptionAuditAction_ItemIEs_id_RICsubscriptionAuditAction_Item;
        p_RICsubscriptionAuditAction_ItemIEs->value.u._e2apRICsubscriptionAuditAction_ItemIEs_id_RICsubscriptionAuditAction_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionAuditAction_ItemIEs);
        if(GNB_PNULL==p_RICsubscriptionAuditAction_ItemIEs->value.u._e2apRICsubscriptionAuditAction_ItemIEs_id_RICsubscriptionAuditAction_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICsubscriptionAuditAction-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionAuditAction_Item(p_asn1_ctx,
                                                p_RICsubscriptionAuditAction_ItemIEs->value.u._e2apRICsubscriptionAuditAction_ItemIEs_id_RICsubscriptionAuditAction_Item,
                                                &p_RICsubscriptionAuditActionList->id_RICsubscriptionAuditAction_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICsubscriptionAuditAction-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RICsubscriptionAuditActionList, p_node_list);
    }
    return XNAP_SUCCESS;
}


