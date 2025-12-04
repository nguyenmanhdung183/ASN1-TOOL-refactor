/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_CauseServiceLayer (OSCTXT* asn1_ctx, e2ap_CauseServiceLayer* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_CauseServiceLayer);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_CauseServiceLayer",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_CauseServiceLayer(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_serviceLayerCause(asn1_ctx, &(*pvalue)->serviceLayerCause)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field serviceLayerCause",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_CauseServiceLayer success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}