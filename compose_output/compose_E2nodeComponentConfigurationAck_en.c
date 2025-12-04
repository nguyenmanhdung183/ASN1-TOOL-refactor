/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_E2nodeComponentConfigurationAck (OSCTXT* asn1_ctx, e2ap_E2nodeComponentConfigurationAck* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigurationAck);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentConfigurationAck",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_E2nodeComponentConfigurationAck(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_failureCause(asn1_ctx, &(*pvalue)->failureCause)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field failureCause",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_E2nodeComponentConfigurationAck success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}