/*****************************************************/
/*    COMPOSE PRIMITIVE RANfunctionID                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..4095) - RANfunctionID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RANfunctionID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RANfunctionID     *p_dest,
                        _e2ap_RANfunctionID_t  *p_src
){
    *p_dest = (e2ap_RANfunctionID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RANfunctionID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
