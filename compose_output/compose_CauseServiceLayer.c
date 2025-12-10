/************************************************************/
/*      SEQUENCE CauseServiceLayer                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_CauseServiceLayer(
                OSCTXT                        *p_asn1_ctx,
                e2ap_CauseServiceLayer                 *p_e2ap_CauseServiceLayer, //dest
                _e2ap_CauseServiceLayer_t              *p_CauseServiceLayer //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode serviceLayerCause alias-id = 9 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_ServiceLayerCause(p_asn1_ctx,
                                                &p_e2ap_CauseServiceLayer->serviceLayerCause,
                                                &p_CauseServiceLayer->serviceLayerCause))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field serviceLayerCause",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode serviceLayerCause*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

