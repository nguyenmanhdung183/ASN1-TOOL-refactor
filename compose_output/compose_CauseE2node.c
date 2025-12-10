/*****************************************************/
/*    PRIMITIVE CauseE2node            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseE2node
   xnap_return_et e2ap_compose_CauseE2node( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseE2node  *p_dest,//dest
                        _e2ap_CauseE2node_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseE2node)*p_src;
    return XNAP_SUCCESS;
}
   
