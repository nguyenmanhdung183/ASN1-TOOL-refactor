/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceS1                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceS1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceS1                 *p_e2ap_E2nodeComponentInterfaceS1, //dest
                _e2ap_E2nodeComponentInterfaceS1_t              *p_E2nodeComponentInterfaceS1 //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceS1)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceS1",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode mme_name alias-id = 10 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_MMEname(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceS1->mme_name,
                                                &p_E2nodeComponentInterfaceS1->mme_name))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field mme_name",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode mme_name*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

