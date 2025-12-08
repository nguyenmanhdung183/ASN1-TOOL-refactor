/*****************************************************/
/*    PRIMITIVE CauseRICservice            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseRICservice
   xnap_return_et e2ap_compose_CauseRICservice( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseRICservice  *p_dest,//dest
                        _e2ap_CauseRICservice_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseRICservice)*p_src;
    return XNAP_SUCCESS;
}
 
