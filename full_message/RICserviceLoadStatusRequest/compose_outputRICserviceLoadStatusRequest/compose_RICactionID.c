/*****************************************************/
/*    COMPOSE PRIMITIVE RICactionID                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..255) - RICactionID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RICactionID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RICactionID     *p_dest,
                        _e2ap_RICactionID_t  *p_src
){
    *p_dest = (e2ap_RICactionID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RICactionID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
