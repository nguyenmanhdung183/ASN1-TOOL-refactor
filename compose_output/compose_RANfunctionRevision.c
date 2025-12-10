/*****************************************************/
/*    PRIMITIVE RANfunctionRevision            */
/*****************************************************/
// cpmpose primitive - id = 6 - INTEGER (0..4095) - RANfunctionRevision
  xnap_return_et e2ap_compose_RANfunctionRevision(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_RANfunctionRevision  *p_dest,//dest
                        _e2ap_RANfunctionRevision_t  *p_src//src
)
{
    *p_dest = (e2ap_RANfunctionRevision)*p_src;
    return XNAP_SUCCESS;
}
    
