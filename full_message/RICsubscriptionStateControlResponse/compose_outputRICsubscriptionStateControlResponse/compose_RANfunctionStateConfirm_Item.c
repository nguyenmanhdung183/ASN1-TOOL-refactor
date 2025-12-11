/************************************************************/
/*      SEQUENCE RANfunctionStateConfirm_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RANfunctionStateConfirm_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionStateConfirm_Item                 *p_e2ap_RANfunctionStateConfirm_Item, //dest
                _e2ap_RANfunctionStateConfirm_Item_t              *p_RANfunctionStateConfirm_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RANfunctionStateConfirm_Item->ranFunctionID,
                                                &p_RANfunctionStateConfirm_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode ricSubscriptionSuspended_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RANfunctionStateConfirm_Item->ricSubscriptionSuspended_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionSuspended_List);
        if(XNAP_P_NULL == p_e2ap_RANfunctionStateConfirm_Item->ricSubscriptionSuspended_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubscriptionSuspended_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICsubscriptionSuspended_List(&p_e2ap_RANfunctionStateConfirm_Item->ricSubscriptionSuspended_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionSuspended_List(p_asn1_ctx,
                                                &p_e2ap_RANfunctionStateConfirm_Item->ricSubscriptionSuspended_list,//dest
                                                &p_RANfunctionStateConfirm_Item->ricSubscriptionSuspended_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionSuspended_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricSubscriptionSuspended_list*/

    {  /*SEQ_ELEM-3  Encode ricSubscriptionResumed_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RANfunctionStateConfirm_Item->ricSubscriptionResumed_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionResumed_List);
        if(XNAP_P_NULL == p_e2ap_RANfunctionStateConfirm_Item->ricSubscriptionResumed_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubscriptionResumed_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICsubscriptionResumed_List(&p_e2ap_RANfunctionStateConfirm_Item->ricSubscriptionResumed_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionResumed_List(p_asn1_ctx,
                                                &p_e2ap_RANfunctionStateConfirm_Item->ricSubscriptionResumed_list,//dest
                                                &p_RANfunctionStateConfirm_Item->ricSubscriptionResumed_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionResumed_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricSubscriptionResumed_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

