/*****************************************************/
/*    PRIMITIVE CauseTransport            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseTransport
   xnap_return_et e2ap_compose_CauseTransport( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseTransport  *p_dest,//dest
                        _e2ap_CauseTransport_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseTransport)*p_src;
    return XNAP_SUCCESS;
}
 
