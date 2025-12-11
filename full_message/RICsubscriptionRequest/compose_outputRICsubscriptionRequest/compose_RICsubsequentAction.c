/************************************************************/
/*      SEQUENCE RICsubsequentAction                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICsubsequentAction(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICsubsequentAction                 *p_e2ap_RICsubsequentAction, //dest
                _e2ap_RICsubsequentAction_t              *p_RICsubsequentAction //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricSubsequentActionType alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICsubsequentActionType(p_asn1_ctx,
                                                &p_e2ap_RICsubsequentAction->ricSubsequentActionType,
                                                &p_RICsubsequentAction->ricSubsequentActionType))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubsequentActionType",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricSubsequentActionType*/

    {  /*SEQ_ELEM-2  Encode ricTimeToWait alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICtimeToWait(p_asn1_ctx,
                                                &p_e2ap_RICsubsequentAction->ricTimeToWait,
                                                &p_RICsubsequentAction->ricTimeToWait))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricTimeToWait",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricTimeToWait*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

