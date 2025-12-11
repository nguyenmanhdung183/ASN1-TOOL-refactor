/************************************************************/
/*      SEQUENCE RICsubscriptionLoadRequest_ItemIE                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICsubscriptionLoadRequest_ItemIE(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICsubscriptionLoadRequest_ItemIE                 *p_e2ap_RICsubscriptionLoadRequest_ItemIE, //dest
                _e2ap_RICsubscriptionLoadRequest_ItemIE_t              *p_RICsubscriptionLoadRequest_ItemIE //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricRequestID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricRequestID = rtxMemAllocType(p_asn1_ctx, e2ap_RICrequestID);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricRequestID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICrequestID(&p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricRequestID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICrequestID(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricRequestID,//dest
                                                &p_RICsubscriptionLoadRequest_ItemIE->ricRequestID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricRequestID*/

    {  /*SEQ_ELEM-2  Encode ricSubscriptionLoadRequest alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadRequest(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricSubscriptionLoadRequest,
                                                &p_RICsubscriptionLoadRequest_ItemIE->ricSubscriptionLoadRequest))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricSubscriptionLoadRequest*/

    {  /*SEQ_ELEM-3  Encode ricActionLoadRequest_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricActionLoadRequest_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICactionLoadRequest_List);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricActionLoadRequest_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricActionLoadRequest_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICactionLoadRequest_List(&p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricActionLoadRequest_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICactionLoadRequest_List(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoadRequest_ItemIE->ricActionLoadRequest_list,//dest
                                                &p_RICsubscriptionLoadRequest_ItemIE->ricActionLoadRequest_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionLoadRequest_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricActionLoadRequest_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

