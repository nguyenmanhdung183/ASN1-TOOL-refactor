// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
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

                 break;
        }

        /*CHOICE_INDEX-2    home_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_HOME_E_NB_ID:
        {

                 break;
        }

        /*CHOICE_INDEX-3    short_Macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID:
        {

                 break;
        }

        /*CHOICE_INDEX-4    long_Macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID:
        {

                 break;
        }

    }
    return retVal;
}