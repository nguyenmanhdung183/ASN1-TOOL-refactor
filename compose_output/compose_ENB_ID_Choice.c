/************************************************************/
 /*      CHOICE ENB_ID_Choice                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_ENB_ID_Choice(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENB_ID_Choice             *p_e2ap_ENB_ID_Choice, //dest
                _e2ap_ENB_ID_Choice_t          *p_ENB_ID_Choice //src
)
{
    p_e2ap_ENB_ID_Choice->t =  p_ENB_ID_Choice->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENB_ID_Choice->t)
    {
        /*CHOICE_INDEX-1    enb_ID_macro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO:
        {
             if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_macro(
                                                p_asn1_ctx,
                                                &p_e2ap_ENB_ID_Choice->u.enb_ID_macro,
                                                &p_ENB_ID_Choice->enb_ID_macro)//dungnm23 check lai
            )
            {
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for primitive e2ap_BIT STRING (SIZE(20))",__FUNCTION__);
                return XNAP_FAILURE;
            }
             break;
        }

        /*CHOICE_INDEX-2    enb_ID_shortmacro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO:
        {
             if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_shortmacro(
                                                p_asn1_ctx,
                                                &p_e2ap_ENB_ID_Choice->u.enb_ID_shortmacro,
                                                &p_ENB_ID_Choice->enb_ID_shortmacro)//dungnm23 check lai
            )
            {
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for primitive e2ap_BIT STRING (SIZE(18))",__FUNCTION__);
                return XNAP_FAILURE;
            }
             break;
        }

        /*CHOICE_INDEX-3    enb_ID_longmacro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO:
        {
             if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_longmacro(
                                                p_asn1_ctx,
                                                &p_e2ap_ENB_ID_Choice->u.enb_ID_longmacro,
                                                &p_ENB_ID_Choice->enb_ID_longmacro)//dungnm23 check lai
            )
            {
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for primitive e2ap_BIT STRING (SIZE(21))",__FUNCTION__);
                return XNAP_FAILURE;
            }
             break;
        }

    }
    return retVal;
}