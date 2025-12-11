/************************************************************/
/*      SEQUENCE E2connectionSetupFailed_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2connectionSetupFailed_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2connectionSetupFailed_Item                 *p_e2ap_E2connectionSetupFailed_Item, //dest
                _e2ap_E2connectionSetupFailed_Item_t              *p_E2connectionSetupFailed_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode tnlInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_E2connectionSetupFailed_Item->tnlInformation = rtxMemAllocType(p_asn1_ctx, e2ap_TNLinformation);
        if(XNAP_P_NULL == p_e2ap_E2connectionSetupFailed_Item->tnlInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_TNLinformation(&p_e2ap_E2connectionSetupFailed_Item->tnlInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_TNLinformation(p_asn1_ctx,
                                                &p_e2ap_E2connectionSetupFailed_Item->tnlInformation,//dest
                                                &p_E2connectionSetupFailed_Item->tnlInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode tnlInformation*/

    {  /*SEQ_ELEM-2  Encode cause alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_E2connectionSetupFailed_Item->cause = rtxMemAllocType(p_asn1_ctx, e2ap_Cause);
        if(XNAP_P_NULL == p_e2ap_E2connectionSetupFailed_Item->cause)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_Cause(&p_e2ap_E2connectionSetupFailed_Item->cause);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                &p_e2ap_E2connectionSetupFailed_Item->cause,//dest
                                                &p_E2connectionSetupFailed_Item->cause)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode cause*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

