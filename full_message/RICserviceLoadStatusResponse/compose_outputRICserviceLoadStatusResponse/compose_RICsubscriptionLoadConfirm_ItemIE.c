/************************************************************/
/*      SEQUENCE RICsubscriptionLoadConfirm_ItemIE                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICsubscriptionLoadConfirm_ItemIE(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICsubscriptionLoadConfirm_ItemIE                 *p_e2ap_RICsubscriptionLoadConfirm_ItemIE, //dest
                _e2ap_RICsubscriptionLoadConfirm_ItemIE_t              *p_RICsubscriptionLoadConfirm_ItemIE //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricRequestID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricRequestID = rtxMemAllocType(p_asn1_ctx, e2ap_RICrequestID);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricRequestID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICrequestID(&p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricRequestID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICrequestID(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricRequestID,//dest
                                                &p_RICsubscriptionLoadConfirm_ItemIE->ricRequestID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricRequestID*/

    {  /*SEQ_ELEM-2  Encode ricSubscriptionLoadConfirm alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadConfirm(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricSubscriptionLoadConfirm,
                                                &p_RICsubscriptionLoadConfirm_ItemIE->ricSubscriptionLoadConfirm))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricSubscriptionLoadConfirm*/

    {  /*SEQ_ELEM-3  Encode ricActionLoadConfirm_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricActionLoadConfirm_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICactionLoadConfirm_List);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricActionLoadConfirm_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricActionLoadConfirm_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICactionLoadConfirm_List(&p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricActionLoadConfirm_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICactionLoadConfirm_List(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoadConfirm_ItemIE->ricActionLoadConfirm_list,//dest
                                                &p_RICsubscriptionLoadConfirm_ItemIE->ricActionLoadConfirm_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionLoadConfirm_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricActionLoadConfirm_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

