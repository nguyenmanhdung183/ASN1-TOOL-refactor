/************************************************************/
/*      SEQUENCE RICaction_RefusedToBeRemoved_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICaction_RefusedToBeRemoved_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICaction_RefusedToBeRemoved_Item                 *p_e2ap_RICaction_RefusedToBeRemoved_Item, //dest
                _e2ap_RICaction_RefusedToBeRemoved_Item_t              *p_RICaction_RefusedToBeRemoved_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricActionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICactionID(p_asn1_ctx,
                                                &p_e2ap_RICaction_RefusedToBeRemoved_Item->ricActionID,
                                                &p_RICaction_RefusedToBeRemoved_Item->ricActionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricActionID*/

    {  /*SEQ_ELEM-2  Encode cause alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICaction_RefusedToBeRemoved_Item->cause = rtxMemAllocType(p_asn1_ctx, e2ap_Cause);
        if(XNAP_P_NULL == p_e2ap_RICaction_RefusedToBeRemoved_Item->cause)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_Cause(&p_e2ap_RICaction_RefusedToBeRemoved_Item->cause);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                &p_e2ap_RICaction_RefusedToBeRemoved_Item->cause,//dest
                                                &p_RICaction_RefusedToBeRemoved_Item->cause)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode cause*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

