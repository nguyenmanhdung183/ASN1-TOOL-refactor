/************************************************************/
/*      SEQUENCE E2nodeComponentConfiguration                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 9 - OCTET STRING - e2nodeComponentRequestPart
   xnap_return_et e2ap_compose_E2nodeComponentConfiguration_e2nodeComponentRequestPart(
                        OSCTXT                       *p_asn1_ctx,
                        e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart                 *p_dest,//dest
                        _e2ap_E2nodeComponentConfiguration_e2nodeComponentRequestPart_t              *p_src//src
)
{
    size_t num = p_src->numocts;
    p_dest->data = (OSOCTET*) rtxMemAllocZ(p_asn1_ctx, num);
    if (!p_dest->data)
    {
        XNAP_TRACE(XNAP_ERROR,
                   "dungnm23 %s alloc fail in e2ap_compose_E2nodeComponentConfiguration_e2nodeComponentRequestPart",
                    __FUNCTION__);
        return XNAP_FAILURE;
    }
    p_dest->numocts = num;
    XNAP_MEMCPY(p_dest->data, p_src->data, num);
    #ifdef  E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug OCTET STRING E2nodeComponentConfiguration_e2nodeComponentRequestPart numocts=%u", __FUNCTION__, p_dest->numocts);
    #endif
    return XNAP_SUCCESS;
}
        
     // id = 9 - OCTET STRING - e2nodeComponentResponsePart
   xnap_return_et e2ap_compose_E2nodeComponentConfiguration_e2nodeComponentResponsePart(
                        OSCTXT                       *p_asn1_ctx,
                        e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart                 *p_dest,//dest
                        _e2ap_E2nodeComponentConfiguration_e2nodeComponentResponsePart_t              *p_src//src
)
{
    size_t num = p_src->numocts;
    p_dest->data = (OSOCTET*) rtxMemAllocZ(p_asn1_ctx, num);
    if (!p_dest->data)
    {
        XNAP_TRACE(XNAP_ERROR,
                   "dungnm23 %s alloc fail in e2ap_compose_E2nodeComponentConfiguration_e2nodeComponentResponsePart",
                    __FUNCTION__);
        return XNAP_FAILURE;
    }
    p_dest->numocts = num;
    XNAP_MEMCPY(p_dest->data, p_src->data, num);
    #ifdef  E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug OCTET STRING E2nodeComponentConfiguration_e2nodeComponentResponsePart numocts=%u", __FUNCTION__, p_dest->numocts);
    #endif
    return XNAP_SUCCESS;
}
        


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentConfiguration(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentConfiguration                 *p_e2ap_E2nodeComponentConfiguration, //dest
                _e2ap_E2nodeComponentConfiguration_t              *p_E2nodeComponentConfiguration //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode e2nodeComponentRequestPart alias-id = -1 - primitive = True*/
        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfiguration_e2nodeComponentRequestPart(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfiguration->e2nodeComponentRequestPart,
                                                &p_E2nodeComponentConfiguration->e2nodeComponentRequestPart))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentRequestPart",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode e2nodeComponentRequestPart*/

    {  /*SEQ_ELEM-2  Encode e2nodeComponentResponsePart alias-id = -1 - primitive = True*/
        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfiguration_e2nodeComponentResponsePart(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfiguration->e2nodeComponentResponsePart,
                                                &p_E2nodeComponentConfiguration->e2nodeComponentResponsePart))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentResponsePart",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode e2nodeComponentResponsePart*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

