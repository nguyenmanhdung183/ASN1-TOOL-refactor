/************************************************************/
/*      SEQUENCE RANfunctionLoadRequest_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RANfunctionLoadRequest_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionLoadRequest_Item                 *p_e2ap_RANfunctionLoadRequest_Item, //dest
                _e2ap_RANfunctionLoadRequest_Item_t              *p_RANfunctionLoadRequest_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoadRequest_Item->ranFunctionID,
                                                &p_RANfunctionLoadRequest_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode ranFunctionLoadRequest alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadRequest(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoadRequest_Item->ranFunctionLoadRequest,
                                                &p_RANfunctionLoadRequest_Item->ranFunctionLoadRequest))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ranFunctionLoadRequest*/

    {  /*SEQ_ELEM-3  Encode ricServiceLoadRequest alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RANfunctionLoadRequest_Item->ricServiceLoadRequest = rtxMemAllocType(p_asn1_ctx, e2ap_RICserviceLoadRequest);
        if(XNAP_P_NULL == p_e2ap_RANfunctionLoadRequest_Item->ricServiceLoadRequest)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricServiceLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICserviceLoadRequest(&p_e2ap_RANfunctionLoadRequest_Item->ricServiceLoadRequest);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICserviceLoadRequest(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoadRequest_Item->ricServiceLoadRequest,//dest
                                                &p_RANfunctionLoadRequest_Item->ricServiceLoadRequest)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricServiceLoadRequest*/

    {  /*SEQ_ELEM-4  Encode ricSubscriptionLoadRequest_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RANfunctionLoadRequest_Item->ricSubscriptionLoadRequest_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionLoadRequest_List);
        if(XNAP_P_NULL == p_e2ap_RANfunctionLoadRequest_Item->ricSubscriptionLoadRequest_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubscriptionLoadRequest_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICsubscriptionLoadRequest_List(&p_e2ap_RANfunctionLoadRequest_Item->ricSubscriptionLoadRequest_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionLoadRequest_List(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoadRequest_Item->ricSubscriptionLoadRequest_list,//dest
                                                &p_RANfunctionLoadRequest_Item->ricSubscriptionLoadRequest_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionLoadRequest_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricSubscriptionLoadRequest_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

