/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceNG (OSCTXT* asn1_ctx, e2ap_E2nodeComponentInterfaceNG* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentInterfaceNG);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentInterfaceNG",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_E2nodeComponentInterfaceNG(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_amf_name(asn1_ctx, &(*pvalue)->amf_name)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field amf_name",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_E2nodeComponentInterfaceNG success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}