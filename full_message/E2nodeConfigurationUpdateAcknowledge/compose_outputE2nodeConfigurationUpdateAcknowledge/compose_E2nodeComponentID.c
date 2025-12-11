/************************************************************/
 /*      CHOICE E2nodeComponentID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_E2nodeComponentID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentID             *p_e2ap_E2nodeComponentID, //dest
                _e2ap_E2nodeComponentID_t          *p_E2nodeComponentID //src
)
{
    p_e2ap_E2nodeComponentID->t =  p_E2nodeComponentID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_E2nodeComponentID->choice_type)
    {
        /*CHOICE_INDEX-1    e2nodeComponentInterfaceTypeNG*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeNG ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceNG);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeNG",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceNG(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceNG(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeNG))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeNG",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    e2nodeComponentInterfaceTypeXn*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeXn ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceXn);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeXn",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceXn(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceXn(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeXn))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeXn",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    e2nodeComponentInterfaceTypeE1*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeE1 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceE1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeE1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceE1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceE1(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeE1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeE1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    e2nodeComponentInterfaceTypeF1*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeF1 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceF1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeF1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceF1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceF1(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeF1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeF1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-5    e2nodeComponentInterfaceTypeW1*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeW1 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceW1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeW1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceW1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceW1(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeW1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeW1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-6    e2nodeComponentInterfaceTypeS1*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeS1 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceS1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeS1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceS1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceS1(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeS1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeS1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-7    e2nodeComponentInterfaceTypeX2*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeX2 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceX2);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeX2",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceX2(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceX2(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeX2))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeX2",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}