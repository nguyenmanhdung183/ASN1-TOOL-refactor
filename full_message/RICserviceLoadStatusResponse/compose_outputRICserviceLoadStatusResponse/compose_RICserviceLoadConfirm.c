/************************************************************/
/*      SEQUENCE RICserviceLoadConfirm                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICserviceLoadConfirm(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICserviceLoadConfirm                 *p_e2ap_RICserviceLoadConfirm, //dest
                _e2ap_RICserviceLoadConfirm_t              *p_RICserviceLoadConfirm //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricServiceReportLoadConfirm alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadConfirm(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadConfirm->ricServiceReportLoadConfirm,
                                                &p_RICserviceLoadConfirm->ricServiceReportLoadConfirm))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceReportLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricServiceReportLoadConfirm*/

    {  /*SEQ_ELEM-2  Encode ricServiceInsertLoadConfirm alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadConfirm(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadConfirm->ricServiceInsertLoadConfirm,
                                                &p_RICserviceLoadConfirm->ricServiceInsertLoadConfirm))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceInsertLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricServiceInsertLoadConfirm*/

    {  /*SEQ_ELEM-3  Encode ricServiceControlLoadConfirm alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadConfirm(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadConfirm->ricServiceControlLoadConfirm,
                                                &p_RICserviceLoadConfirm->ricServiceControlLoadConfirm))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceControlLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricServiceControlLoadConfirm*/

    {  /*SEQ_ELEM-4  Encode ricServicePolicyLoadConfirm alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadConfirm(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadConfirm->ricServicePolicyLoadConfirm,
                                                &p_RICserviceLoadConfirm->ricServicePolicyLoadConfirm))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServicePolicyLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricServicePolicyLoadConfirm*/

    {  /*SEQ_ELEM-5  Encode ricServiceQueryLoadConfirm alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadConfirm(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadConfirm->ricServiceQueryLoadConfirm,
                                                &p_RICserviceLoadConfirm->ricServiceQueryLoadConfirm))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceQueryLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-5  Encode ricServiceQueryLoadConfirm*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

