/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceS1 (OSCTXT* asn1_ctx, e2ap_E2nodeComponentInterfaceS1* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentInterfaceS1);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentInterfaceS1",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_E2nodeComponentInterfaceS1(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_mme_name(asn1_ctx, &(*pvalue)->mme_name)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field mme_name",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_E2nodeComponentInterfaceS1 success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}