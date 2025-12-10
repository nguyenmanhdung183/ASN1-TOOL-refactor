/************************************************************/
 /*      CHOICE GlobalNG_RANNode_ID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_GlobalNG_RANNode_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalNG_RANNode_ID             *p_e2ap_GlobalNG_RANNode_ID, //dest
                _e2ap_GlobalNG_RANNode_ID_t          *p_GlobalNG_RANNode_ID //src
)
{
    p_e2ap_GlobalNG_RANNode_ID->t =  p_GlobalNG_RANNode_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_GlobalNG_RANNode_ID->t)
    {
        /*CHOICE_INDEX-1    gNB*/
        case: E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalNG_RANNode_ID->gNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalgNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalNG_RANNode_ID->gNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalgNB_ID(&p_e2ap_GlobalNG_RANNode_ID->gNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalgNB_ID(p_asn1_ctx,
                                                    &p_e2ap_GlobalNG_RANNode_ID->gNB,
                                                    &p_GlobalNG_RANNode_ID->gNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    ng_eNB*/
        case: E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalNG_RANNode_ID->ng_eNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalngeNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalNG_RANNode_ID->ng_eNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ng_eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalngeNB_ID(&p_e2ap_GlobalNG_RANNode_ID->ng_eNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalngeNB_ID(p_asn1_ctx,
                                                    &p_e2ap_GlobalNG_RANNode_ID->ng_eNB,
                                                    &p_GlobalNG_RANNode_ID->ng_eNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ng_eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}