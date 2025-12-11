/*****************************************************/
/*    COMPOSE PRIMITIVE RANfunctionRevision                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..4095) - RANfunctionRevision*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RANfunctionRevision(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RANfunctionRevision     *p_dest,
                        _e2ap_RANfunctionRevision_t  *p_src
){
    *p_dest = (e2ap_RANfunctionRevision)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RANfunctionRevision value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
