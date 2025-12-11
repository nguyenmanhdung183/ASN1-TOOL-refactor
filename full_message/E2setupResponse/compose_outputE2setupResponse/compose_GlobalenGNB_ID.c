/************************************************************/
/*      SEQUENCE GlobalenGNB_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_GlobalenGNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalenGNB_ID                 *p_e2ap_GlobalenGNB_ID, //dest
                _e2ap_GlobalenGNB_ID_t              *p_GlobalenGNB_ID //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode pLMN_Identity alias-id = 8 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                &p_e2ap_GlobalenGNB_ID->pLMN_Identity,
                                                &p_GlobalenGNB_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode gNB_ID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_GlobalenGNB_ID->gNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_ENGNB_ID);
        if(XNAP_P_NULL == p_e2ap_GlobalenGNB_ID->gNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_ENGNB_ID(&p_e2ap_GlobalenGNB_ID->gNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_ENGNB_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalenGNB_ID->gNB_ID,//dest
                                                &p_GlobalenGNB_ID->gNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode gNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

