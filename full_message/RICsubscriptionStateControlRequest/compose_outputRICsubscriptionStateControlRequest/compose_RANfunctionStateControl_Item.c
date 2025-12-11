/************************************************************/
/*      SEQUENCE RANfunctionStateControl_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RANfunctionStateControl_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionStateControl_Item                 *p_e2ap_RANfunctionStateControl_Item, //dest
                _e2ap_RANfunctionStateControl_Item_t              *p_RANfunctionStateControl_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RANfunctionStateControl_Item->ranFunctionID,
                                                &p_RANfunctionStateControl_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode ricSubscriptionToBeSuspended_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RANfunctionStateControl_Item->ricSubscriptionToBeSuspended_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionToBeSuspended_List);
        if(XNAP_P_NULL == p_e2ap_RANfunctionStateControl_Item->ricSubscriptionToBeSuspended_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubscriptionToBeSuspended_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICsubscriptionToBeSuspended_List(&p_e2ap_RANfunctionStateControl_Item->ricSubscriptionToBeSuspended_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionToBeSuspended_List(p_asn1_ctx,
                                                &p_e2ap_RANfunctionStateControl_Item->ricSubscriptionToBeSuspended_list,//dest
                                                &p_RANfunctionStateControl_Item->ricSubscriptionToBeSuspended_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionToBeSuspended_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricSubscriptionToBeSuspended_list*/

    {  /*SEQ_ELEM-3  Encode ricSubscriptionToBeResumed_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RANfunctionStateControl_Item->ricSubscriptionToBeResumed_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionToBeResumed_List);
        if(XNAP_P_NULL == p_e2ap_RANfunctionStateControl_Item->ricSubscriptionToBeResumed_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubscriptionToBeResumed_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICsubscriptionToBeResumed_List(&p_e2ap_RANfunctionStateControl_Item->ricSubscriptionToBeResumed_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionToBeResumed_List(p_asn1_ctx,
                                                &p_e2ap_RANfunctionStateControl_Item->ricSubscriptionToBeResumed_list,//dest
                                                &p_RANfunctionStateControl_Item->ricSubscriptionToBeResumed_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionToBeResumed_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricSubscriptionToBeResumed_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

