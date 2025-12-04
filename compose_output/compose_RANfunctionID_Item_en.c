/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_RANfunctionID_Item (OSCTXT* asn1_ctx, e2ap_RANfunctionID_Item* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionID_Item);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionID_Item",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_RANfunctionID_Item(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_ranFunctionID(asn1_ctx, &(*pvalue)->ranFunctionID)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field ranFunctionID",__FUNCTION__);
        return retVal;
    }
    if(XNAP_FAILURE == e2ap_compose_ranFunctionRevision(asn1_ctx, &(*pvalue)->ranFunctionRevision)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field ranFunctionRevision",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_RANfunctionID_Item success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}