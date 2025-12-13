/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceF1                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceF1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceF1                 *p_e2ap_E2nodeComponentInterfaceF1, //dest
                _e2ap_E2nodeComponentInterfaceF1_t              *p_E2nodeComponentInterfaceF1 //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceF1)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceF1",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode gNB_DU_ID alias-id = 6 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_GNB_DU_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceF1->gNB_DU_ID,
                                                &p_E2nodeComponentInterfaceF1->gNB_DU_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_DU_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode gNB_DU_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

