/* COMPOSE SEQUENCE */
xnap_return_et e2ap_compose_E2nodeComponentConfigAdditionAck_Item (OSCTXT* asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_Item* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_Item);
    if(XNAP_P_NULL==*pvalue){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentConfigAdditionAck_Item",__FUNCTION__);
        return retVal;
    }

    asn1Init_e2ap_E2nodeComponentConfigAdditionAck_Item(*pvalue);
    // Compose each field
    if(XNAP_FAILURE == e2ap_compose_e2nodeComponentInterfaceType(asn1_ctx, &(*pvalue)->e2nodeComponentInterfaceType)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field e2nodeComponentInterfaceType",__FUNCTION__);
        return retVal;
    }
    if(XNAP_FAILURE == e2ap_compose_e2nodeComponentID(asn1_ctx, &(*pvalue)->e2nodeComponentID)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field e2nodeComponentID",__FUNCTION__);
        return retVal;
    }
    if(XNAP_FAILURE == e2ap_compose_e2nodeComponentConfigurationAck(asn1_ctx, &(*pvalue)->e2nodeComponentConfigurationAck)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Compose failed for field e2nodeComponentConfigurationAck",__FUNCTION__);
        return retVal;
    }

    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_E2nodeComponentConfigAdditionAck_Item success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}