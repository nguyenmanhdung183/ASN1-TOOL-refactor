/*****************************************************/
/*    PRIMITIVE E2nodeComponentInterfaceType            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - E2nodeComponentInterfaceType
   xnap_return_et e2ap_compose_E2nodeComponentInterfaceType( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_E2nodeComponentInterfaceType  *p_dest,//dest
                        _e2ap_E2nodeComponentInterfaceType_et  *p_src//src
)
{
    *p_dest = (e2ap_E2nodeComponentInterfaceType)*p_src;
    return XNAP_SUCCESS;
}
 
