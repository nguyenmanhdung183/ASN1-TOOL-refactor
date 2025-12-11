/*****************************************************/
/*    COMPOSE PRIMITIVE RICactionDefinition                             */
/*****************************************************/
/* compose primitive - id = 9 - OCTET STRING - RICactionDefinition*/
/* ---------------------------------------------------------------------- */
/*  OCTET STRING – dynamic (primitive_id = 9)                             */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RICactionDefinition(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RICactionDefinition     *p_dest,
                        _e2ap_RICactionDefinition_t  *p_src
){
    size_t num = p_src->numocts;

    p_dest->data = (OSOCTET*) rtxMemAllocZ(p_asn1_ctx, num);
    if (!p_dest->data)
    {
        XNAP_TRACE(XNAP_ERROR,
                   "%s alloc fail in e2ap_compose_RICactionDefinition",
                    __FUNCTION__);
        return XNAP_FAILURE;
    }

    p_dest->numocts = num;
    XNAP_MEMCPY(p_dest->data, p_src->data, num);

    #ifdef  E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug OCTET STRING RICactionDefinition numocts=%u", __FUNCTION__, p_dest->numocts);
    #endif

    return XNAP_SUCCESS;
}
