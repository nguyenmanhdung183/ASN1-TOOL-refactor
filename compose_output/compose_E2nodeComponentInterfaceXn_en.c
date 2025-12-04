/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceXn (OSCTXT* asn1_ctx, e2ap_E2nodeComponentInterfaceXn* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentInterfaceXn);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentInterfaceXn",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_E2nodeComponentInterfaceXn(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_global_NG_RAN_Node_ID(asn1_ctx, &(*pvalue)->global_NG_RAN_Node_ID)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field global_NG_RAN_Node_ID",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_E2nodeComponentInterfaceXn success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}