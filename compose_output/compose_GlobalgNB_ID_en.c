/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_GlobalgNB_ID (OSCTXT* asn1_ctx, e2ap_GlobalgNB_ID* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_GlobalgNB_ID);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_GlobalgNB_ID",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_GlobalgNB_ID(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_plmn_id(asn1_ctx, &(*pvalue)->plmn_id)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field plmn_id",__FUNCTION__);
        return retVal;
    }
    if(XNAP_FAILURE == e2ap_compose_gnb_id(asn1_ctx, &(*pvalue)->gnb_id)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field gnb_id",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_GlobalgNB_ID success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}