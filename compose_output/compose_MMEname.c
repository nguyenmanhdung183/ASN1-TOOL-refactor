/*****************************************************/
/*    PRIMITIVE MMEname            */
/*****************************************************/
// cpmpose primitive - id = 10 - PrintableString (SIZE(1..150, ...)) - MMEname
     xnap_return_et e2ap_compose_MMEname(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_MMEname  *p_dest,//dest
                        _e2ap_MMEname_t  *p_src//src
)
{
// chưa xong
    *p_dest = * p_src;
    return XNAP_SUCCESS;
}
 
