/*****************************************************/
/*    COMPOSE PRIMITIVE RICsubscriptionTime                             */
/*****************************************************/
/* compose primitive - id = 8 - OCTET STRING (SIZE(8)) - RICsubscriptionTime*/
/* ---------------------------------------------------------------------- */
/*  OCTET STRING SIZE(N) – FIXED (primitive_id = 8)                       */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RICsubscriptionTime(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RICsubscriptionTime     *p_dest,
                        _e2ap_RICsubscriptionTime_t  *p_src
){
    p_dest->numocts = p_src->numocts;  // hoặc 8, tùy ASN
    XNAP_MEMCPY(p_dest->data, p_src->data, p_src->numocts);

    #ifdef  E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug OCTET STRING RICsubscriptionTime numocts=%u", __FUNCTION__, p_dest->numocts);
    #endif

    return XNAP_SUCCESS;
}
