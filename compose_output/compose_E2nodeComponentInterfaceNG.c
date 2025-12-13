/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceNG                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceNG(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceNG                 *p_e2ap_E2nodeComponentInterfaceNG, //dest
                _e2ap_E2nodeComponentInterfaceNG_t              *p_E2nodeComponentInterfaceNG //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceNG)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceNG",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode amf_name alias-id = 10 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_AMFName(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceNG->amf_name,
                                                &p_E2nodeComponentInterfaceNG->amf_name))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field amf_name",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode amf_name*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

