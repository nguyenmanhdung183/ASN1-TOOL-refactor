/*****************************************************/
/*    COMPOSE PRIMITIVE RICassistanceUpdateNumber                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..65535) - RICassistanceUpdateNumber*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RICassistanceUpdateNumber(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RICassistanceUpdateNumber     *p_dest,
                        _e2ap_RICassistanceUpdateNumber_t  *p_src
){
    *p_dest = (e2ap_RICassistanceUpdateNumber)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RICassistanceUpdateNumber value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
