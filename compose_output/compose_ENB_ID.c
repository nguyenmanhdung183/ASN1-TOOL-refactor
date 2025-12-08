/************************************************************/
 /*      CHOICE ENB_ID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_ENB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENB_ID             *p_e2ap_ENB_ID, //dest
                _e2ap_ENB_ID_t          *p_ENB_ID //src
)
{
    p_e2ap_ENB_ID->t =  p_ENB_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENB_ID->t)
    {
        /*CHOICE_INDEX-1    macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_MACRO_E_NB_ID:
        {
             if(XNAP_FAILURE == e2ap_compose_ENB_ID_macro_eNB_ID(
                                                p_asn1_ctx,
                                                &p_e2ap_ENB_ID->u.macro_eNB_ID,
                                                &p_ENB_ID->macro_eNB_ID)//dungnm23 check lai
            )
            {
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for primitive e2ap_BIT STRING (SIZE (20))",__FUNCTION__);
                return XNAP_FAILURE;
            }
             break;
        }

        /*CHOICE_INDEX-2    home_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_HOME_E_NB_ID:
        {
             if(XNAP_FAILURE == e2ap_compose_ENB_ID_home_eNB_ID(
                                                p_asn1_ctx,
                                                &p_e2ap_ENB_ID->u.home_eNB_ID,
                                                &p_ENB_ID->home_eNB_ID)//dungnm23 check lai
            )
            {
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for primitive e2ap_BIT STRING (SIZE (28))",__FUNCTION__);
                return XNAP_FAILURE;
            }
             break;
        }

        /*CHOICE_INDEX-3    short_Macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID:
        {
             if(XNAP_FAILURE == e2ap_compose_ENB_ID_short_Macro_eNB_ID(
                                                p_asn1_ctx,
                                                &p_e2ap_ENB_ID->u.short_Macro_eNB_ID,
                                                &p_ENB_ID->short_Macro_eNB_ID)//dungnm23 check lai
            )
            {
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for primitive e2ap_BIT STRING (SIZE(18))",__FUNCTION__);
                return XNAP_FAILURE;
            }
             break;
        }

        /*CHOICE_INDEX-4    long_Macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID:
        {
             if(XNAP_FAILURE == e2ap_compose_ENB_ID_long_Macro_eNB_ID(
                                                p_asn1_ctx,
                                                &p_e2ap_ENB_ID->u.long_Macro_eNB_ID,
                                                &p_ENB_ID->long_Macro_eNB_ID)//dungnm23 check lai
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