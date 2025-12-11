/*****************************************************/
/*    COMPOSE PRIMITIVE GNB_CU_UP_ID                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..68719476735) - GNB_CU_UP_ID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_GNB_CU_UP_ID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_GNB_CU_UP_ID     *p_dest,
                        _e2ap_GNB_CU_UP_ID_t  *p_src
){
    *p_dest = (e2ap_GNB_CU_UP_ID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER GNB_CU_UP_ID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
