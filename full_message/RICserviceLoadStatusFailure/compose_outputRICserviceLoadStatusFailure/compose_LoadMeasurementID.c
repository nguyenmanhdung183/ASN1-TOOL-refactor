/*****************************************************/
/*    COMPOSE PRIMITIVE LoadMeasurementID                             */
/*****************************************************/
/* compose primitive - id = 5 - INTEGER (1..4095,...) - LoadMeasurementID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_LoadMeasurementID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_LoadMeasurementID     *p_dest,
                        _e2ap_LoadMeasurementID_t  *p_src
){
    *p_dest = (e2ap_LoadMeasurementID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER LoadMeasurementID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
