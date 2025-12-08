// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionsIDcause_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionsIDcause_List,
                _e2ap_RANfunctionsIDcause_List_t       *p_RANfunctionsIDcause_List
            )
{
    e2ap_RANfunctionIDcause_Item      *p_RANfunctionIDcause_Item = NULL;
    OSRTDListNode                       *p_node = GNB_PNULL;
    UInt16                              t_count = XNAP_NULL;

    for(t_count=0; t_count< p_RANfunctionsIDcause_List->id_RANfunctionIEcause_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionIDcause_Item,
                                &p_node,
                                &p_RANfunctionIDcause_Item);
        if(GNB_PNULL==p_node){
            /* not enough memory */
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionIDcause_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionIDcause_Item(p_RANfunctionIDcause_Item);

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    
       
        //ENCODE ITEMIEs=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionIDcause_Item(p_asn1_ctx,
                                                                    p_RANfunctionIDcause_Item,
                                                                    p_RANfunctionsIDcause_List->id_RANfunctionIEcause_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionIDcause_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        //end ENCODE ITEMIEs=============


        rtxDListAppendNode(p_e2ap_RANfunctionsIDcause_List, p_node);
    }
    XNAP_UT_TRACE_EXIT();
    return XNAP_SUCCESS;
}