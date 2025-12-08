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

    {  /*SEQ_ELEM-1  Encode global_NG_RAN_Node_ID*/
        if(XNAP_FAILURE == e2ap_compose_GlobalNG_RANNode_ID(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID,
                                                p_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_NG_RAN_Node_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_NG_RAN_Node_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

