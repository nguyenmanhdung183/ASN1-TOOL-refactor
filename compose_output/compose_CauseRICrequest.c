/*****************************************************/
/*    PRIMITIVE CauseRICrequest            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseRICrequest
   xnap_return_et e2ap_compose_CauseRICrequest( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseRICrequest  *p_dest,//dest
                        _e2ap_CauseRICrequest_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseRICrequest)*p_src;
    return XNAP_SUCCESS;
}
   
