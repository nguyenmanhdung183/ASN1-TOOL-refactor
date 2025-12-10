/*****************************************************/
/*    PRIMITIVE CauseProtocol            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseProtocol
   xnap_return_et e2ap_compose_CauseProtocol( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseProtocol  *p_dest,//dest
                        _e2ap_CauseProtocol_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseProtocol)*p_src;
    return XNAP_SUCCESS;
}
   
