/*****************************************************/
/*    PRIMITIVE PLMN_Identity            */
/*****************************************************/
// cpmpose primitive - id = 8 - OCTET STRING (SIZE(3)) - PLMN_Identity
    xnap_return_et e2ap_compose_PLMN_Identity(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_PLMN_Identity  *p_dest,//dest
                        _e2ap_PLMN_Identity_t  *p_src//src
)
{
    p_dest->numocts = PLMN_Identity_MAX_BYTES;
    //memcpy(p_dest->data, p_src->data, p_src->numocts);
    XNAP_MEMCPY(p_dest->data, p_src->PLMN_Identity, PLMN_Identity_MAX_BYTES);
    return XNAP_SUCCESS;
}
  
