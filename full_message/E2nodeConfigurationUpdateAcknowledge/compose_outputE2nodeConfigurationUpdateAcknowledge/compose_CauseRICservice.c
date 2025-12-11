/*****************************************************/
/*    COMPOSE PRIMITIVE CauseRICservice                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - CauseRICservice*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_CauseRICservice(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_CauseRICservice     *p_dest,
                        _e2ap_CauseRICservice_et *p_src
){
    *p_dest = (e2ap_CauseRICservice)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED CauseRICservice value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
