/************************************************************/
/*      SEQUENCE GlobalgNB_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_GlobalgNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalgNB_ID                 *p_e2ap_GlobalgNB_ID, //dest
                _e2ap_GlobalgNB_ID_t              *p_GlobalgNB_ID //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode plmn_id alias-id = 8 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                &p_e2ap_GlobalgNB_ID->plmn_id,
                                                &p_GlobalgNB_ID->plmn_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field plmn_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode plmn_id*/

    {  /*SEQ_ELEM-2  Encode gnb_id alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_GlobalgNB_ID->gnb_id = rtxMemAllocType(p_asn1_ctx, e2ap_GNB_ID_Choice);
        if(XNAP_P_NULL == p_e2ap_GlobalgNB_ID->gnb_id)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gnb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_GNB_ID_Choice(&p_e2ap_GlobalgNB_ID->gnb_id);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GNB_ID_Choice(p_asn1_ctx,
                                                &p_e2ap_GlobalgNB_ID->gnb_id,
                                                &p_GlobalgNB_ID->gnb_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gnb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode gnb_id*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

