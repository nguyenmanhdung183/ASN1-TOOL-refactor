/************************************************************/
 /*      CHOICE GlobalE2node_ID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_GlobalE2node_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalE2node_ID             *p_e2ap_GlobalE2node_ID, //dest
                _e2ap_GlobalE2node_ID_t          *p_GlobalE2node_ID //src
)
{
    p_e2ap_GlobalE2node_ID->t =  p_GlobalE2node_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_GlobalE2node_ID->choice_type)
    {
        /*CHOICE_INDEX-1    gNB*/
        case E2AP_GLOBAL_E2NODE_ID_e2ap_G_NB:
        {
            p_e2ap_GlobalE2node_ID->t = T_e2ap_GlobalE2node_ID_gNB ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalE2node_ID->u.gNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalE2node_gNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalE2node_ID->u.gNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalE2node_gNB_ID(p_e2ap_GlobalE2node_ID->u.gNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalE2node_gNB_ID(p_asn1_ctx,
                                                    p_e2ap_GlobalE2node_ID->u.gNB,
                                                    &p_GlobalE2node_ID->gNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    en_gNB*/
        case E2AP_GLOBAL_E2NODE_ID_e2ap_EN_G_NB:
        {
            p_e2ap_GlobalE2node_ID->t = T_e2ap_GlobalE2node_ID_en_gNB ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalE2node_ID->u.en_gNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalE2node_en_gNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalE2node_ID->u.en_gNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field en_gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalE2node_en_gNB_ID(p_e2ap_GlobalE2node_ID->u.en_gNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalE2node_en_gNB_ID(p_asn1_ctx,
                                                    p_e2ap_GlobalE2node_ID->u.en_gNB,
                                                    &p_GlobalE2node_ID->en_gNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field en_gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    ng_eNB*/
        case E2AP_GLOBAL_E2NODE_ID_e2ap_NG_E_NB:
        {
            p_e2ap_GlobalE2node_ID->t = T_e2ap_GlobalE2node_ID_ng_eNB ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalE2node_ID->u.ng_eNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalE2node_ng_eNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalE2node_ID->u.ng_eNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ng_eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalE2node_ng_eNB_ID(p_e2ap_GlobalE2node_ID->u.ng_eNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalE2node_ng_eNB_ID(p_asn1_ctx,
                                                    p_e2ap_GlobalE2node_ID->u.ng_eNB,
                                                    &p_GlobalE2node_ID->ng_eNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ng_eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    eNB*/
        case E2AP_GLOBAL_E2NODE_ID_e2ap_E_NB:
        {
            p_e2ap_GlobalE2node_ID->t = T_e2ap_GlobalE2node_ID_eNB ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalE2node_ID->u.eNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalE2node_eNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalE2node_ID->u.eNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalE2node_eNB_ID(p_e2ap_GlobalE2node_ID->u.eNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalE2node_eNB_ID(p_asn1_ctx,
                                                    p_e2ap_GlobalE2node_ID->u.eNB,
                                                    &p_GlobalE2node_ID->eNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}