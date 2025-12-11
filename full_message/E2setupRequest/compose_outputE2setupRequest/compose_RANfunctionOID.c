/*****************************************************/
/*    COMPOSE PRIMITIVE RANfunctionOID                             */
/*****************************************************/
/* compose primitive - id = 10 - PrintableString (SIZE(1..1000, ...)) - RANfunctionOID*/
/* ---------------------------------------------------------------------- */
/*  PrintableString (primitive_id = 10)                                   */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RANfunctionOID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RANfunctionOID     *p_dest,
                        _e2ap_RANfunctionOID_t  *p_src
){

    *p_dest = *p_src;
    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug PrintableString RANfunctionOID string =%s", __FUNCTION__, p_dest);
    #endif
    return XNAP_SUCCESS;
}
