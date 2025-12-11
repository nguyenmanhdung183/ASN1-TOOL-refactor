/*****************************************************/
/*    COMPOSE PRIMITIVE CauseRICrequest                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - CauseRICrequest*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_CauseRICrequest(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_CauseRICrequest     *p_dest,
                        _e2ap_CauseRICrequest_et *p_src
){
    *p_dest = (e2ap_CauseRICrequest)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED CauseRICrequest value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
