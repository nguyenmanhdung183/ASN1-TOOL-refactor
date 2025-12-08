/*****************************************************/
/*    PRIMITIVE CauseMisc            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseMisc
   xnap_return_et e2ap_compose_CauseMisc( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseMisc  *p_dest,//dest
                        _e2ap_CauseMisc_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseMisc)*p_src;
    return XNAP_SUCCESS;
}
 
