/*****************************************************/
/*    COMPOSE PRIMITIVE TransactionID                             */
/*****************************************************/
/* compose primitive - id = 5 - INTEGER (0..255,...) - TransactionID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_TransactionID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_TransactionID     *p_dest,
                        _e2ap_TransactionID_t  *p_src
){
    *p_dest = (e2ap_TransactionID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER TransactionID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
