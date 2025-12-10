/*****************************************************/
/*    PRIMITIVE GNB_DU_ID            */
/*****************************************************/
// cpmpose primitive - id = 6 - INTEGER (0..68719476735) - GNB_DU_ID
  xnap_return_et e2ap_compose_GNB_DU_ID(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_GNB_DU_ID  *p_dest,//dest
                        _e2ap_GNB_DU_ID_t  *p_src//src
)
{
    *p_dest = (e2ap_GNB_DU_ID)*p_src;
    return XNAP_SUCCESS;
}
    
