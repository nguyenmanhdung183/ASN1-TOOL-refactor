/************************************************************/
 /*      CHOICE ENGNB_ID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */
     // id = 4 - BIT STRING (SIZE (22..32)) - gNB_ID
 xnap_return_et e2ap_compose_ENGNB_ID_gNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENGNB_ID_gNB_ID                 *p_dest,//dest
                     _e2ap_ENGNB_ID_gNB_ID_t              *p_src//src
)
{
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
    return XNAP_SUCCESS;
}
      
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
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENGNB_ID_gNB_ID(p_asn1_ctx,
                                                   &p_e2ap_ENGNB_ID->gNB_ID,
                                                   &p_ENGNB_ID->gNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}