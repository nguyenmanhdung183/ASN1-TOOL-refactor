/************************************************************/
/*      SEQUENCE RICserviceLoadRequest                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICserviceLoadRequest(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICserviceLoadRequest                 *p_e2ap_RICserviceLoadRequest, //dest
                _e2ap_RICserviceLoadRequest_t              *p_RICserviceLoadRequest //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricServiceReportLoadRequest alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadRequest(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadRequest->ricServiceReportLoadRequest,
                                                &p_RICserviceLoadRequest->ricServiceReportLoadRequest))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceReportLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricServiceReportLoadRequest*/

    {  /*SEQ_ELEM-2  Encode ricServiceInsertLoadRequest alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadRequest(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadRequest->ricServiceInsertLoadRequest,
                                                &p_RICserviceLoadRequest->ricServiceInsertLoadRequest))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceInsertLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricServiceInsertLoadRequest*/

    {  /*SEQ_ELEM-3  Encode ricServiceControlLoadRequest alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadRequest(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadRequest->ricServiceControlLoadRequest,
                                                &p_RICserviceLoadRequest->ricServiceControlLoadRequest))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceControlLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricServiceControlLoadRequest*/

    {  /*SEQ_ELEM-4  Encode ricServicePolicyLoadRequest alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadRequest(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadRequest->ricServicePolicyLoadRequest,
                                                &p_RICserviceLoadRequest->ricServicePolicyLoadRequest))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServicePolicyLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricServicePolicyLoadRequest*/

    {  /*SEQ_ELEM-5  Encode ricServiceQueryLoadRequest alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadRequest(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadRequest->ricServiceQueryLoadRequest,
                                                &p_RICserviceLoadRequest->ricServiceQueryLoadRequest))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceQueryLoadRequest",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-5  Encode ricServiceQueryLoadRequest*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

