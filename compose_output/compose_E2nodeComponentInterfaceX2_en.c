/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceX2 (OSCTXT* asn1_ctx, e2ap_E2nodeComponentInterfaceX2* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentInterfaceX2);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentInterfaceX2",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_E2nodeComponentInterfaceX2(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_global_eNB_ID(asn1_ctx, &(*pvalue)->global_eNB_ID)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field global_eNB_ID",__FUNCTION__);
        return retVal;
    }
    if(XNAP_FAILURE == e2ap_compose_global_en_gNB_ID(asn1_ctx, &(*pvalue)->global_en_gNB_ID)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field global_en_gNB_ID",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_E2nodeComponentInterfaceX2 success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}