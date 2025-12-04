/* COMPOSE INTEGER */
xnap_return_et e2ap_compose_RANfunctionID (OSCTXT* asn1_ctx, e2ap_RANfunctionID* pvalue){
    gnb_return_t retVal = NR_FAILURE;
    *pvalue = 183; //--------->dungnm23 sửa giá trị integer ở đây
    XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Compose e2ap_RANfunctionID success with value %d",__FUNCTION__,*pvalue);
    return retVal;
}