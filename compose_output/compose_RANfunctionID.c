/*****************************************************/
/*    PRIMITIVE RANfunctionID            */
/*****************************************************/
// cpmpose primitive - id = 6 - INTEGER (0..4095) - RANfunctionID
  xnap_return_et e2ap_compose_RANfunctionID(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_RANfunctionID  *p_dest,//dest
                        _e2ap_RANfunctionID_t  *p_src//src
)
{
    *p_dest = (e2ap_RANfunctionID)*p_src;
    return XNAP_SUCCESS;
}
    
