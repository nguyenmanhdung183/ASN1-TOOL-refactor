/************************************************************/
 /*      CHOICE ENB_ID_Choice                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */
     // id = 3 - BIT STRING (SIZE(20)) - enb_ID_macro
 xnap_return_et e2ap_compose_ENB_ID_Choice_enb_ID_macro(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_Choice_enb_ID_macro                 *p_dest,//dest
                     _e2ap_ENB_ID_Choice_enb_ID_macro_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_Choice_enb_ID_macro numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          
     // id = 3 - BIT STRING (SIZE(18)) - enb_ID_shortmacro
 xnap_return_et e2ap_compose_ENB_ID_Choice_enb_ID_shortmacro(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_Choice_enb_ID_shortmacro                 *p_dest,//dest
                     _e2ap_ENB_ID_Choice_enb_ID_shortmacro_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_Choice_enb_ID_shortmacro numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          
     // id = 3 - BIT STRING (SIZE(21)) - enb_ID_longmacro
 xnap_return_et e2ap_compose_ENB_ID_Choice_enb_ID_longmacro(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_Choice_enb_ID_longmacro                 *p_dest,//dest
                     _e2ap_ENB_ID_Choice_enb_ID_longmacro_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_Choice_enb_ID_longmacro numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          

/* 2 - compose choice */
xnap_return_et e2ap_compose_ENB_ID_Choice(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENB_ID_Choice             *p_e2ap_ENB_ID_Choice, //dest
                _e2ap_ENB_ID_Choice_t          *p_ENB_ID_Choice //src
)
{
    p_e2ap_ENB_ID_Choice->t =  p_ENB_ID_Choice->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENB_ID_Choice->choice_type)
    {
        /*CHOICE_INDEX-1    enb_ID_macro*/
        case E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO:
        {
            p_e2ap_ENB_ID_Choice->t = T_e2ap_ENB_ID_Choice_enb_ID_macro ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID_Choice->u.enb_ID_macro = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_Choice_enb_ID_macro);
            if(XNAP_P_NULL == p_e2ap_ENB_ID_Choice->u.enb_ID_macro)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field enb_ID_macro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_macro(p_asn1_ctx,
                                                   p_e2ap_ENB_ID_Choice->u.enb_ID_macro,
                                                   &p_ENB_ID_Choice->enb_ID_macro))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_ID_macro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    enb_ID_shortmacro*/
        case E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO:
        {
            p_e2ap_ENB_ID_Choice->t = T_e2ap_ENB_ID_Choice_enb_ID_shortmacro ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID_Choice->u.enb_ID_shortmacro = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_Choice_enb_ID_shortmacro);
            if(XNAP_P_NULL == p_e2ap_ENB_ID_Choice->u.enb_ID_shortmacro)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field enb_ID_shortmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_shortmacro(p_asn1_ctx,
                                                   p_e2ap_ENB_ID_Choice->u.enb_ID_shortmacro,
                                                   &p_ENB_ID_Choice->enb_ID_shortmacro))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_ID_shortmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    enb_ID_longmacro*/
        case E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO:
        {
            p_e2ap_ENB_ID_Choice->t = T_e2ap_ENB_ID_Choice_enb_ID_longmacro ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID_Choice->u.enb_ID_longmacro = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_Choice_enb_ID_longmacro);
            if(XNAP_P_NULL == p_e2ap_ENB_ID_Choice->u.enb_ID_longmacro)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field enb_ID_longmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_longmacro(p_asn1_ctx,
                                                   p_e2ap_ENB_ID_Choice->u.enb_ID_longmacro,
                                                   &p_ENB_ID_Choice->enb_ID_longmacro))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_ID_longmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}