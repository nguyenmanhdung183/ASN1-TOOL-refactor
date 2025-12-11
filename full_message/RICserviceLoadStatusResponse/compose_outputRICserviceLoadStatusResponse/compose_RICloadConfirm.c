/*****************************************************/
/*    COMPOSE PRIMITIVE RICloadConfirm                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - RICloadConfirm*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RICloadConfirm(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RICloadConfirm     *p_dest,
                        _e2ap_RICloadConfirm_et *p_src
){
    *p_dest = (e2ap_RICloadConfirm)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED RICloadConfirm value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
