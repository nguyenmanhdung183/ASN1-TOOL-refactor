/*****************************************************/
/*    COMPOSE PRIMITIVE RICeventTriggerDefinition                             */
/*****************************************************/
/* compose primitive - id = 9 - OCTET STRING - RICeventTriggerDefinition*/
/* ---------------------------------------------------------------------- */
/*  OCTET STRING – dynamic (primitive_id = 9)                             */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RICeventTriggerDefinition(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RICeventTriggerDefinition     *p_dest,
                        _e2ap_RICeventTriggerDefinition_t  *p_src
){
    size_t num = p_src->numocts;

    p_dest->data = (OSOCTET*) rtxMemAllocZ(p_asn1_ctx, num);
    if (!p_dest->data)
    {
        XNAP_TRACE(XNAP_ERROR,
                   "%s alloc fail in e2ap_compose_RICeventTriggerDefinition",
                    __FUNCTION__);
        return XNAP_FAILURE;
    }

    p_dest->numocts = num;
    XNAP_MEMCPY(p_dest->data, p_src->data, num);

    #ifdef  E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug OCTET STRING RICeventTriggerDefinition numocts=%u", __FUNCTION__, p_dest->numocts);
    #endif

    return XNAP_SUCCESS;
}
