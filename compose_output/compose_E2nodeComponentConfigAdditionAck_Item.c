/************************************************************/
/*      SEQUENCE E2nodeComponentConfigAdditionAck_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentConfigAdditionAck_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentConfigAdditionAck_Item                 *p_e2ap_E2nodeComponentConfigAdditionAck_Item, //dest
                _e2ap_E2nodeComponentConfigAdditionAck_Item_t              *p_E2nodeComponentConfigAdditionAck_Item //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigAdditionAck_Item)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentConfigAdditionAck_Item",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode e2nodeComponentInterfaceType alias-id = 13 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceType(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType,
                                                &p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceType",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode e2nodeComponentInterfaceType*/

    {  /*SEQ_ELEM-2  Encode e2nodeComponentID alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_E2nodeComponentID(&p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID,//dest
                                                &p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode e2nodeComponentID*/

    {  /*SEQ_ELEM-3  Encode e2nodeComponentConfigurationAck alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentConfigurationAck);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentConfigurationAck",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_E2nodeComponentConfigurationAck(&p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigurationAck(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck,//dest
                                                &p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentConfigurationAck",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode e2nodeComponentConfigurationAck*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

