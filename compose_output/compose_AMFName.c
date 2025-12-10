/*****************************************************/
/*    PRIMITIVE AMFName            */
/*****************************************************/
// cpmpose primitive - id = 10 - PrintableString (SIZE(1..150, ...)) - AMFName
     xnap_return_et e2ap_compose_AMFName(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_AMFName  *p_dest,//dest
                        _e2ap_AMFName_t  *p_src//src
)
{
// chưa xong
    *p_dest = * p_src;
    return XNAP_SUCCESS;
}
 
