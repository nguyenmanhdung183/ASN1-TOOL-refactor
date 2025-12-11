/************************************************************/
/*      SEQUENCE RANfunctionLoad_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RANfunctionLoad_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionLoad_Item                 *p_e2ap_RANfunctionLoad_Item, //dest
                _e2ap_RANfunctionLoad_Item_t              *p_RANfunctionLoad_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoad_Item->ranFunctionID,
                                                &p_RANfunctionLoad_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode ranFunctionLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RANfunctionLoad_Item->ranFunctionLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICloadInformation);
        if(XNAP_P_NULL == p_e2ap_RANfunctionLoad_Item->ranFunctionLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ranFunctionLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICloadInformation(&p_e2ap_RANfunctionLoad_Item->ranFunctionLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoad_Item->ranFunctionLoadInformation,//dest
                                                &p_RANfunctionLoad_Item->ranFunctionLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ranFunctionLoadInformation*/

    {  /*SEQ_ELEM-3  Encode ricServiceLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RANfunctionLoad_Item->ricServiceLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICserviceLoadInformation);
        if(XNAP_P_NULL == p_e2ap_RANfunctionLoad_Item->ricServiceLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricServiceLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICserviceLoadInformation(&p_e2ap_RANfunctionLoad_Item->ricServiceLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICserviceLoadInformation(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoad_Item->ricServiceLoadInformation,//dest
                                                &p_RANfunctionLoad_Item->ricServiceLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricServiceLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricServiceLoadInformation*/

    {  /*SEQ_ELEM-4  Encode ricSubscriptionLoad_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RANfunctionLoad_Item->ricSubscriptionLoad_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubscriptionLoad_List);
        if(XNAP_P_NULL == p_e2ap_RANfunctionLoad_Item->ricSubscriptionLoad_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubscriptionLoad_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICsubscriptionLoad_List(&p_e2ap_RANfunctionLoad_Item->ricSubscriptionLoad_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICsubscriptionLoad_List(p_asn1_ctx,
                                                &p_e2ap_RANfunctionLoad_Item->ricSubscriptionLoad_list,//dest
                                                &p_RANfunctionLoad_Item->ricSubscriptionLoad_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubscriptionLoad_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricSubscriptionLoad_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

