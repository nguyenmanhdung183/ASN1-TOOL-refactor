/************************************************************/
/*      SEQUENCE RANfunctionLoadConfirm_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RANfunctionLoadConfirm_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionLoadConfirm_Item                 *p_e2ap_RANfunctionLoadConfirm_Item, //dest
                _e2ap_RANfunctionLoadConfirm_Item_t              *p_RANfunctionLoadConfirm_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoadConfirm_Item->ranFunctionID,
                                                &p_RANfunctionLoadConfirm_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode ranFunctionLoadConfirm alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadConfirm(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoadConfirm_Item->ranFunctionLoadConfirm,
                                                &p_RANfunctionLoadConfirm_Item->ranFunctionLoadConfirm))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ranFunctionLoadConfirm*/

    {  /*SEQ_ELEM-3  Encode ricServiceLoadConfirm alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RANfunctionLoadConfirm_Item->ricServiceLoadConfirm = rtxMemAllocType(p_asn1_ctx, e2ap_RICserviceLoadConfirm);
        if(XNAP_P_NULL == p_e2ap_RANfunctionLoadConfirm_Item->ricServiceLoadConfirm)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricServiceLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICserviceLoadConfirm(&p_e2ap_RANfunctionLoadConfirm_Item->ricServiceLoadConfirm);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICserviceLoadConfirm(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoadConfirm_Item->ricServiceLoadConfirm,//dest
                                                &p_RANfunctionLoadConfirm_Item->ricServiceLoadConfirm)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricServiceLoadConfirm*/

    {  /*SEQ_ELEM-4  Encode ricSubscriptionLoadConfirm_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RANfunctionLoadConfirm_Item->ricSubscriptionLoadConfirm_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionLoadConfirm_List);
        if(XNAP_P_NULL == p_e2ap_RANfunctionLoadConfirm_Item->ricSubscriptionLoadConfirm_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubscriptionLoadConfirm_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICsubscriptionLoadConfirm_List(&p_e2ap_RANfunctionLoadConfirm_Item->ricSubscriptionLoadConfirm_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionLoadConfirm_List(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoadConfirm_Item->ricSubscriptionLoadConfirm_list,//dest
                                                &p_RANfunctionLoadConfirm_Item->ricSubscriptionLoadConfirm_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionLoadConfirm_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricSubscriptionLoadConfirm_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

