/************************************************************/
 /*      CHOICE Cause                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_Cause(
                OSCTXT                        *p_asn1_ctx,
                e2ap_Cause             *p_e2ap_Cause, //dest
                _e2ap_Cause_t          *p_Cause //src
)
{
    p_e2ap_Cause->t =  p_Cause->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_Cause->t)
    {
        /*CHOICE_INDEX-1    ricRequest*/
        case: E2AP_CAUSE_e2ap_RIC_REQUEST:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseRICrequest(p_asn1_ctx,
                                                    &p_e2ap_Cause->ricRequest,
                                                    &p_Cause->ricRequest))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequest",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    ricService*/
        case: E2AP_CAUSE_e2ap_RIC_SERVICE:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseRICservice(p_asn1_ctx,
                                                    &p_e2ap_Cause->ricService,
                                                    &p_Cause->ricService))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricService",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    e2Node*/
        case: E2AP_CAUSE_e2ap_E2NODE:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseE2node(p_asn1_ctx,
                                                    &p_e2ap_Cause->e2Node,
                                                    &p_Cause->e2Node))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2Node",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    transport*/
        case: E2AP_CAUSE_e2ap_TRANSPORT:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseTransport(p_asn1_ctx,
                                                    &p_e2ap_Cause->transport,
                                                    &p_Cause->transport))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field transport",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-5    protocol*/
        case: E2AP_CAUSE_e2ap_PROTOCOL:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseProtocol(p_asn1_ctx,
                                                    &p_e2ap_Cause->protocol,
                                                    &p_Cause->protocol))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field protocol",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-6    misc*/
        case: E2AP_CAUSE_e2ap_MISC:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseMisc(p_asn1_ctx,
                                                    &p_e2ap_Cause->misc,
                                                    &p_Cause->misc))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field misc",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-7    serviceLayer*/
        case: E2AP_CAUSE_e2ap_SERVICE_LAYER:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_Cause->serviceLayer = rtxMemAllocType(p_asn1_ctx, e2ap_CauseServiceLayer);
            if(XNAP_P_NULL == p_e2ap_Cause->serviceLayer)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field serviceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_CauseServiceLayer(&p_e2ap_Cause->serviceLayer);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseServiceLayer(p_asn1_ctx,
                                                    &p_e2ap_Cause->serviceLayer,
                                                    &p_Cause->serviceLayer))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field serviceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}