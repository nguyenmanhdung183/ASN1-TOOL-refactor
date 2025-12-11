/*****************************************************/
/*    COMPOSE PRIMITIVE E2nodeComponentInterfaceType                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - E2nodeComponentInterfaceType*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceType(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_E2nodeComponentInterfaceType     *p_dest,
                        _e2ap_E2nodeComponentInterfaceType_et *p_src
){
    *p_dest = (e2ap_E2nodeComponentInterfaceType)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED E2nodeComponentInterfaceType value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
