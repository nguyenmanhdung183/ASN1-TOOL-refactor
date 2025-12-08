/*****************************************************/
/*    PRIMITIVE TransactionID            */
/*****************************************************/
// cpmpose primitive - id = 5 - INTEGER (0..255,...) - TransactionID
  xnap_return_et e2ap_compose_TransactionID(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_TransactionID  *p_dest,//dest
                        _e2ap_TransactionID_t  *p_src//src
)
{
    *p_dest = (e2ap_TransactionID)*p_src;
    return XNAP_SUCCESS;
}
  
