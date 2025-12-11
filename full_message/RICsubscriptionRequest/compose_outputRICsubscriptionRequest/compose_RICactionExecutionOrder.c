/*****************************************************/
/*    COMPOSE PRIMITIVE RICactionExecutionOrder                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..255) - RICactionExecutionOrder*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RICactionExecutionOrder(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RICactionExecutionOrder     *p_dest,
                        _e2ap_RICactionExecutionOrder_t  *p_src
){
    *p_dest = (e2ap_RICactionExecutionOrder)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RICactionExecutionOrder value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
