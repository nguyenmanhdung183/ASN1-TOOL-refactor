// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
xnap_return_et e2ap_compose_GNB_ID_Choice(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GNB_ID_Choice             *p_e2ap_GNB_ID_Choice, //dest
                _e2ap_GNB_ID_Choice_t          *p_GNB_ID_Choice //src
                )
{
    p_e2ap_GNB_ID_Choice->t =  p_GNB_ID_Choice->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_GNB_ID_Choice->t)
    {
        /*CHOICE_INDEX-1    gnb_ID*/
        case: E2AP_GNB_ID_CHOICE_e2ap_GNB_ID:
        {

                 break;
        }

    }
    return retVal;
}