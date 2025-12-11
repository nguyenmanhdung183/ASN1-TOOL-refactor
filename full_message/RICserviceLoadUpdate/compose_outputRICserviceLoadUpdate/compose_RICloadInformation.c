/************************************************************/
/*      SEQUENCE RICloadInformation                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 13 - ENUMERATED - loadStatus
      xnap_return_et e2ap_compose_RICloadInformation_loadStatus(
                OSCTXT                       *p_asn1_ctx,
                e2ap_RICloadInformation_loadStatus                 *p_dest,//dest
                _e2ap_RICloadInformation_loadStatus_et              *p_src//src
)
{
    *p_dest = (e2ap_RICloadInformation_loadStatus)*p_src;
    return XNAP_SUCCESS;
}
     
     // id = 6 - INTEGER (0..100) - loadEstimate
xnap_return_et e2ap_compose_RICloadInformation_loadEstimate(
                    OSCTXT                       *p_asn1_ctx,
                    e2ap_RICloadInformation_loadEstimate  *p_dest,//dest
                    _e2ap_RICloadInformation_loadEstimate_t  *p_src//src
)
{
    *p_dest = (e2ap_RICloadInformation_loadEstimate)*p_src;
    return XNAP_SUCCESS;
}
           


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICloadInformation(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICloadInformation                 *p_e2ap_RICloadInformation, //dest
                _e2ap_RICloadInformation_t              *p_RICloadInformation //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode loadStatus alias-id = -1 - primitive = True*/
        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation_loadStatus(p_asn1_ctx,
                                                &p_e2ap_RICloadInformation->loadStatus,
                                                &p_RICloadInformation->loadStatus))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field loadStatus",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode loadStatus*/

    {  /*SEQ_ELEM-2  Encode loadEstimate alias-id = -1 - primitive = True*/
        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation_loadEstimate(p_asn1_ctx,
                                                &p_e2ap_RICloadInformation->loadEstimate,
                                                &p_RICloadInformation->loadEstimate))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field loadEstimate",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode loadEstimate*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

