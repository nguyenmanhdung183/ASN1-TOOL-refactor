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

    switch(p_Cause->choice_type)
    {
        /*CHOICE_INDEX-1    ricRequest*/
        case E2AP_CAUSE_e2ap_RIC_REQUEST:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_ricRequest ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.ricRequest = rtxMemAllocType(p_asn1_ctx,e2ap_CauseRICrequest);
            if(XNAP_P_NULL == p_e2ap_Cause->u.ricRequest)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequest",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseRICrequest(p_asn1_ctx,
                                                    p_e2ap_Cause->u.ricRequest,
                                                    &p_Cause->ricRequest))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequest",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    ricService*/
        case E2AP_CAUSE_e2ap_RIC_SERVICE:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_ricService ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.ricService = rtxMemAllocType(p_asn1_ctx,e2ap_CauseRICservice);
            if(XNAP_P_NULL == p_e2ap_Cause->u.ricService)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricService",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseRICservice(p_asn1_ctx,
                                                    p_e2ap_Cause->u.ricService,
                                                    &p_Cause->ricService))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricService",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    e2Node*/
        case E2AP_CAUSE_e2ap_E2NODE:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_e2Node ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.e2Node = rtxMemAllocType(p_asn1_ctx,e2ap_CauseE2node);
            if(XNAP_P_NULL == p_e2ap_Cause->u.e2Node)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2Node",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseE2node(p_asn1_ctx,
                                                    p_e2ap_Cause->u.e2Node,
                                                    &p_Cause->e2Node))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2Node",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    transport*/
        case E2AP_CAUSE_e2ap_TRANSPORT:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_transport ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.transport = rtxMemAllocType(p_asn1_ctx,e2ap_CauseTransport);
            if(XNAP_P_NULL == p_e2ap_Cause->u.transport)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field transport",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseTransport(p_asn1_ctx,
                                                    p_e2ap_Cause->u.transport,
                                                    &p_Cause->transport))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field transport",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-5    protocol*/
        case E2AP_CAUSE_e2ap_PROTOCOL:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_protocol ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.protocol = rtxMemAllocType(p_asn1_ctx,e2ap_CauseProtocol);
            if(XNAP_P_NULL == p_e2ap_Cause->u.protocol)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field protocol",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseProtocol(p_asn1_ctx,
                                                    p_e2ap_Cause->u.protocol,
                                                    &p_Cause->protocol))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field protocol",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-6    misc*/
        case E2AP_CAUSE_e2ap_MISC:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_misc ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.misc = rtxMemAllocType(p_asn1_ctx,e2ap_CauseMisc);
            if(XNAP_P_NULL == p_e2ap_Cause->u.misc)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field misc",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseMisc(p_asn1_ctx,
                                                    p_e2ap_Cause->u.misc,
                                                    &p_Cause->misc))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field misc",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-7    serviceLayer*/
        case E2AP_CAUSE_e2ap_SERVICE_LAYER:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_serviceLayer ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_Cause->u.serviceLayer = rtxMemAllocType(p_asn1_ctx, e2ap_CauseServiceLayer);
            if(XNAP_P_NULL == p_e2ap_Cause->u.serviceLayer)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field serviceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_CauseServiceLayer(p_e2ap_Cause->u.serviceLayer);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseServiceLayer(p_asn1_ctx,
                                                    p_e2ap_Cause->u.serviceLayer,
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