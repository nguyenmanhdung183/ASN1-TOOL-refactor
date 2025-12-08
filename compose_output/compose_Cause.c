// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
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
            p_e2ap_Cause->u.ricRequest = rtxMemAllocType(p_asn1_ctx, e2ap_CauseRICrequest);
            if(GNB_PNULL == p_e2ap_Cause->u.ricRequest){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseRICrequest",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseRICrequest(p_e2ap_Cause->u.ricRequest);

            if(XNAP_FAILURE == e2ap_compose_CauseRICrequest(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseRICrequest",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-2    ricService*/
        case: E2AP_CAUSE_e2ap_RIC_SERVICE:
        {
            p_e2ap_Cause->u.ricService = rtxMemAllocType(p_asn1_ctx, e2ap_CauseRICservice);
            if(GNB_PNULL == p_e2ap_Cause->u.ricService){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseRICservice",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseRICservice(p_e2ap_Cause->u.ricService);

            if(XNAP_FAILURE == e2ap_compose_CauseRICservice(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseRICservice",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-3    e2Node*/
        case: E2AP_CAUSE_e2ap_E2NODE:
        {
            p_e2ap_Cause->u.e2Node = rtxMemAllocType(p_asn1_ctx, e2ap_CauseE2node);
            if(GNB_PNULL == p_e2ap_Cause->u.e2Node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseE2node",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseE2node(p_e2ap_Cause->u.e2Node);

            if(XNAP_FAILURE == e2ap_compose_CauseE2node(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseE2node",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-4    transport*/
        case: E2AP_CAUSE_e2ap_TRANSPORT:
        {
            p_e2ap_Cause->u.transport = rtxMemAllocType(p_asn1_ctx, e2ap_CauseTransport);
            if(GNB_PNULL == p_e2ap_Cause->u.transport){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseTransport",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseTransport(p_e2ap_Cause->u.transport);

            if(XNAP_FAILURE == e2ap_compose_CauseTransport(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseTransport",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-5    protocol*/
        case: E2AP_CAUSE_e2ap_PROTOCOL:
        {
            p_e2ap_Cause->u.protocol = rtxMemAllocType(p_asn1_ctx, e2ap_CauseProtocol);
            if(GNB_PNULL == p_e2ap_Cause->u.protocol){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseProtocol",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseProtocol(p_e2ap_Cause->u.protocol);

            if(XNAP_FAILURE == e2ap_compose_CauseProtocol(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseProtocol",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-6    misc*/
        case: E2AP_CAUSE_e2ap_MISC:
        {
            p_e2ap_Cause->u.misc = rtxMemAllocType(p_asn1_ctx, e2ap_CauseMisc);
            if(GNB_PNULL == p_e2ap_Cause->u.misc){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseMisc",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseMisc(p_e2ap_Cause->u.misc);

            if(XNAP_FAILURE == e2ap_compose_CauseMisc(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseMisc",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-7    serviceLayer*/
        case: E2AP_CAUSE_e2ap_SERVICE_LAYER:
        {
            p_e2ap_Cause->u.serviceLayer = rtxMemAllocType(p_asn1_ctx, e2ap_CauseServiceLayer);
            if(GNB_PNULL == p_e2ap_Cause->u.serviceLayer){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseServiceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseServiceLayer(p_e2ap_Cause->u.serviceLayer);

            if(XNAP_FAILURE == e2ap_compose_CauseServiceLayer(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseServiceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

    }
    return retVal;
}