/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceXn                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceXn(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceXn                 *p_e2ap_E2nodeComponentInterfaceXn, //dest
                _e2ap_E2nodeComponentInterfaceXn_t              *p_E2nodeComponentInterfaceXn //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceXn)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceXn",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode global_NG_RAN_Node_ID alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalNG_RANNode_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_NG_RAN_Node_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GlobalNG_RANNode_ID(&p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalNG_RANNode_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID,//dest
                                                &p_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_NG_RAN_Node_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_NG_RAN_Node_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

