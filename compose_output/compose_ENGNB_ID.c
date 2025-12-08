/************************************************************/
 /*      CHOICE ENGNB_ID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_ENGNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENGNB_ID             *p_e2ap_ENGNB_ID, //dest
                _e2ap_ENGNB_ID_t          *p_ENGNB_ID //src
)
{
    p_e2ap_ENGNB_ID->t =  p_ENGNB_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENGNB_ID->t)
    {
        /*CHOICE_INDEX-1    gNB_ID*/
        case: E2AP_ENGNB_ID_e2ap_G_NB_ID:
        {
             if(XNAP_FAILURE == e2ap_compose_ENGNB_ID_gNB_ID(
                                                p_asn1_ctx,
                                                &p_e2ap_ENGNB_ID->u.gNB_ID,
                                                &p_ENGNB_ID->gNB_ID)//dungnm23 check lai
            )
            {
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for primitive e2ap_BIT STRING (SIZE (22..32))",__FUNCTION__);
                return XNAP_FAILURE;
            }
             break;
        }

    }
    return retVal;
}