/*****************************************************/
/*    PRIMITIVE TNLusage            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - TNLusage
    xnap_return_et e2ap_compose_TNLusage( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_TNLusage  *p_dest,//dest
                        _e2ap_TNLusage_et  *p_src//src
)
{
    *p_dest = (e2ap_TNLusage)*p_src;
    return XNAP_SUCCESS;
}
   
