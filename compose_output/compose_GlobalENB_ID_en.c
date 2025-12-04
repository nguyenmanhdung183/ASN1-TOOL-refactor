/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_GlobalENB_ID (OSCTXT* asn1_ctx, e2ap_GlobalENB_ID* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_GlobalENB_ID);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_GlobalENB_ID",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_GlobalENB_ID(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_pLMN_Identity(asn1_ctx, &(*pvalue)->pLMN_Identity)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field pLMN_Identity",__FUNCTION__);
        return retVal;
    }
    if(XNAP_FAILURE == e2ap_compose_eNB_ID(asn1_ctx, &(*pvalue)->eNB_ID)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field eNB_ID",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_GlobalENB_ID success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}