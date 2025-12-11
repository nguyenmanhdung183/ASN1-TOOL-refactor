/************************************************************/
/*      SEQUENCE RICsubscriptionLoad_ItemIE                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICsubscriptionLoad_ItemIE(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICsubscriptionLoad_ItemIE                 *p_e2ap_RICsubscriptionLoad_ItemIE, //dest
                _e2ap_RICsubscriptionLoad_ItemIE_t              *p_RICsubscriptionLoad_ItemIE //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricRequestID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RICsubscriptionLoad_ItemIE->ricRequestID = rtxMemAllocType(p_asn1_ctx, e2ap_RICrequestID);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionLoad_ItemIE->ricRequestID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICrequestID(&p_e2ap_RICsubscriptionLoad_ItemIE->ricRequestID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICrequestID(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoad_ItemIE->ricRequestID,//dest
                                                &p_RICsubscriptionLoad_ItemIE->ricRequestID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricRequestID*/

    {  /*SEQ_ELEM-2  Encode ricSubscriptionLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RICsubscriptionLoad_ItemIE->ricSubscriptionLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICloadInformation);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionLoad_ItemIE->ricSubscriptionLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubscriptionLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICloadInformation(&p_e2ap_RICsubscriptionLoad_ItemIE->ricSubscriptionLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoad_ItemIE->ricSubscriptionLoadInformation,//dest
                                                &p_RICsubscriptionLoad_ItemIE->ricSubscriptionLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricSubscriptionLoadInformation*/

    {  /*SEQ_ELEM-3  Encode ricActionLoad_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RICsubscriptionLoad_ItemIE->ricActionLoad_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICactionLoad_List);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionLoad_ItemIE->ricActionLoad_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricActionLoad_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICactionLoad_List(&p_e2ap_RICsubscriptionLoad_ItemIE->ricActionLoad_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICactionLoad_List(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionLoad_ItemIE->ricActionLoad_list,//dest
                                                &p_RICsubscriptionLoad_ItemIE->ricActionLoad_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionLoad_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricActionLoad_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

