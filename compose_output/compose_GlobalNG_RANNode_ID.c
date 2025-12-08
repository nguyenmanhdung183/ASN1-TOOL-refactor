// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
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
            p_e2ap_GlobalNG_RANNode_ID->u.gNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalgNB_ID);
            if(GNB_PNULL == p_e2ap_GlobalNG_RANNode_ID->u.gNB){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_GlobalgNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_GlobalgNB_ID(p_e2ap_GlobalNG_RANNode_ID->u.gNB);

            if(XNAP_FAILURE == e2ap_compose_GlobalgNB_ID(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_GlobalgNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-2    ng_eNB*/
        case: E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB:
        {
            p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalngeNB_ID);
            if(GNB_PNULL == p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_GlobalngeNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_GlobalngeNB_ID(p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB);

            if(XNAP_FAILURE == e2ap_compose_GlobalngeNB_ID(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_GlobalngeNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

    }
    return retVal;
}