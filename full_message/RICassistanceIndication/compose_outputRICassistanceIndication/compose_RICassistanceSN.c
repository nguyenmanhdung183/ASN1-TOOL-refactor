/*****************************************************/
/*    COMPOSE PRIMITIVE RICassistanceSN                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..65535) - RICassistanceSN*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RICassistanceSN(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RICassistanceSN     *p_dest,
                        _e2ap_RICassistanceSN_t  *p_src
){
    *p_dest = (e2ap_RICassistanceSN)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RICassistanceSN value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
