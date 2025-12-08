// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_E2nodeComponentConfigAdditionAck_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_E2nodeComponentConfigAdditionAck_List,
                _e2ap_E2nodeComponentConfigAdditionAck_List_t       *p_E2nodeComponentConfigAdditionAck_List
            )
{
    e2ap_E2nodeComponentConfigAdditionAck_Item      *p_E2nodeComponentConfigAdditionAck_Item = NULL;
    OSRTDListNode                       *p_node = GNB_PNULL;
    UInt16                              t_count = XNAP_NULL;

    for(t_count=0; t_count< p_E2nodeComponentConfigAdditionAck_List->id_E2nodeComponentConfigAdditionAck_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_E2nodeComponentConfigAdditionAck_Item,
                                &p_node,
                                &p_E2nodeComponentConfigAdditionAck_Item);
        if(GNB_PNULL==p_node){
            /* not enough memory */
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentConfigAdditionAck_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_E2nodeComponentConfigAdditionAck_Item(p_E2nodeComponentConfigAdditionAck_Item);

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    
       
        //ENCODE ITEMIEs=============
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAdditionAck_Item(p_asn1_ctx,
                                                                    p_E2nodeComponentConfigAdditionAck_Item,
                                                                    p_E2nodeComponentConfigAdditionAck_List->id_E2nodeComponentConfigAdditionAck_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAdditionAck_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        //end ENCODE ITEMIEs=============


        rtxDListAppendNode(p_e2ap_E2nodeComponentConfigAdditionAck_List, p_node);
    }
    XNAP_UT_TRACE_EXIT();
    return XNAP_SUCCESS;
}


