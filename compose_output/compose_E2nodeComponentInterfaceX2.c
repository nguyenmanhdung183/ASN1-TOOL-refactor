/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceX2                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceX2(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceX2                 *p_e2ap_E2nodeComponentInterfaceX2, //dest
                _e2ap_E2nodeComponentInterfaceX2_t              *p_E2nodeComponentInterfaceX2 //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceX2)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceX2",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    if(p_E2nodeComponentInterfaceX2->bitmask & E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT)
    {  /*SEQ_ELEM-1  Encode global_eNB_ID alias-id = -1 - primitive = False*/
    p_e2ap_E2nodeComponentInterfaceX2->m_global_eNB_IDPresent = TRUE; //dungnm23 add -> check xem chuan ko nhe

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalENB_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GlobalENB_ID(&p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalENB_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID,//dest
                                                &p_E2nodeComponentInterfaceX2->global_eNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_eNB_ID*/

    if(p_E2nodeComponentInterfaceX2->bitmask & E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT)
    {  /*SEQ_ELEM-2  Encode global_en_gNB_ID alias-id = -1 - primitive = False*/
    p_e2ap_E2nodeComponentInterfaceX2->m_global_en_gNB_IDPresent = TRUE; //dungnm23 add -> check xem chuan ko nhe

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalenGNB_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_en_gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GlobalenGNB_ID(&p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalenGNB_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID,//dest
                                                &p_E2nodeComponentInterfaceX2->global_en_gNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_en_gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode global_en_gNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

