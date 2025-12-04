/* COMPOSE ENUM */
xnap_return_et e2ap_compose_CauseProtocol (OSCTXT* asn1_ctx, e2ap_CauseProtocol* pvalue){
    gnb_return_t retVal = NR_FAILURE;

    *pvalue = 0; //---------->dungnm23 sửa giá trị enum ở đây nhé

    //XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_CauseProtocol success with value %d",__FUNCTION__,*pvalue);
    retVal = NR_SUCCESS;
    return retVal;
}