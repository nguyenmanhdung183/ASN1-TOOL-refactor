/************************************************************/
/*      SEQUENCE RICserviceLoadInformation                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICserviceLoadInformation(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICserviceLoadInformation                 *p_e2ap_RICserviceLoadInformation, //dest
                _e2ap_RICserviceLoadInformation_t              *p_RICserviceLoadInformation //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricServiceReportLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICserviceLoadInformation->ricServiceReportLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICloadInformation);
        if(XNAP_P_NULL == p_e2ap_RICserviceLoadInformation->ricServiceReportLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricServiceReportLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICloadInformation(&p_e2ap_RICserviceLoadInformation->ricServiceReportLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadInformation->ricServiceReportLoadInformation,//dest
                                                &p_RICserviceLoadInformation->ricServiceReportLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceReportLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricServiceReportLoadInformation*/

    {  /*SEQ_ELEM-2  Encode ricServiceInsertLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICserviceLoadInformation->ricServiceInsertLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICloadInformation);
        if(XNAP_P_NULL == p_e2ap_RICserviceLoadInformation->ricServiceInsertLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricServiceInsertLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICloadInformation(&p_e2ap_RICserviceLoadInformation->ricServiceInsertLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadInformation->ricServiceInsertLoadInformation,//dest
                                                &p_RICserviceLoadInformation->ricServiceInsertLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceInsertLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricServiceInsertLoadInformation*/

    {  /*SEQ_ELEM-3  Encode ricServiceControlLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICserviceLoadInformation->ricServiceControlLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICloadInformation);
        if(XNAP_P_NULL == p_e2ap_RICserviceLoadInformation->ricServiceControlLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricServiceControlLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICloadInformation(&p_e2ap_RICserviceLoadInformation->ricServiceControlLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadInformation->ricServiceControlLoadInformation,//dest
                                                &p_RICserviceLoadInformation->ricServiceControlLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceControlLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricServiceControlLoadInformation*/

    {  /*SEQ_ELEM-4  Encode ricServicePolicyLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICserviceLoadInformation->ricServicePolicyLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICloadInformation);
        if(XNAP_P_NULL == p_e2ap_RICserviceLoadInformation->ricServicePolicyLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricServicePolicyLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICloadInformation(&p_e2ap_RICserviceLoadInformation->ricServicePolicyLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadInformation->ricServicePolicyLoadInformation,//dest
                                                &p_RICserviceLoadInformation->ricServicePolicyLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServicePolicyLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricServicePolicyLoadInformation*/

    {  /*SEQ_ELEM-5  Encode ricServiceQueryLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICserviceLoadInformation->ricServiceQueryLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICloadInformation);
        if(XNAP_P_NULL == p_e2ap_RICserviceLoadInformation->ricServiceQueryLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricServiceQueryLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICloadInformation(&p_e2ap_RICserviceLoadInformation->ricServiceQueryLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation(p_asn1_ctx,
                                                &p_e2ap_RICserviceLoadInformation->ricServiceQueryLoadInformation,//dest
                                                &p_RICserviceLoadInformation->ricServiceQueryLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceQueryLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-5  Encode ricServiceQueryLoadInformation*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

