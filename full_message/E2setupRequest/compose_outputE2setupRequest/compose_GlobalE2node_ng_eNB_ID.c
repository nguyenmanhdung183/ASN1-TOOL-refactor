/************************************************************/
/*      SEQUENCE GlobalE2node_ng_eNB_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_GlobalE2node_ng_eNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalE2node_ng_eNB_ID                 *p_e2ap_GlobalE2node_ng_eNB_ID, //dest
                _e2ap_GlobalE2node_ng_eNB_ID_t              *p_GlobalE2node_ng_eNB_ID //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode global_ng_eNB_ID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_GlobalE2node_ng_eNB_ID->global_ng_eNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalngeNB_ID);
        if(XNAP_P_NULL == p_e2ap_GlobalE2node_ng_eNB_ID->global_ng_eNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_ng_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GlobalngeNB_ID(&p_e2ap_GlobalE2node_ng_eNB_ID->global_ng_eNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalngeNB_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalE2node_ng_eNB_ID->global_ng_eNB_ID,//dest
                                                &p_GlobalE2node_ng_eNB_ID->global_ng_eNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_ng_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_ng_eNB_ID*/

    {  /*SEQ_ELEM-2  Encode global_eNB_ID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_GlobalE2node_ng_eNB_ID->global_eNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalENB_ID);
        if(XNAP_P_NULL == p_e2ap_GlobalE2node_ng_eNB_ID->global_eNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GlobalENB_ID(&p_e2ap_GlobalE2node_ng_eNB_ID->global_eNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalENB_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalE2node_ng_eNB_ID->global_eNB_ID,//dest
                                                &p_GlobalE2node_ng_eNB_ID->global_eNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode global_eNB_ID*/

    {  /*SEQ_ELEM-3  Encode ngENB_DU_ID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_NGENB_DU_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalE2node_ng_eNB_ID->ngENB_DU_ID,
                                                &p_GlobalE2node_ng_eNB_ID->ngENB_DU_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ngENB_DU_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ngENB_DU_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

