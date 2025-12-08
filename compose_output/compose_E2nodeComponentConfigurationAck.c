/************************************************************/
/*      SEQUENCE E2nodeComponentConfigurationAck                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 13 - ENUMERATED - updateOutcome
      xnap_return_et e2ap_compose_E2nodeComponentConfigurationAck_updateOutcome(
                OSCTXT                       *p_asn1_ctx,
                e2ap_E2nodeComponentConfigurationAck_updateOutcome                 *p_dest,//dest
                _e2ap_E2nodeComponentConfigurationAck_updateOutcome_et              *p_src//src
)
{
    *p_dest = (e2ap_E2nodeComponentConfigurationAck_updateOutcome)*p_src;
    return XNAP_SUCCESS;
}
     


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentConfigurationAck(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentConfigurationAck                 *p_e2ap_E2nodeComponentConfigurationAck, //dest
                _e2ap_E2nodeComponentConfigurationAck_t              *p_E2nodeComponentConfigurationAck //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode updateOutcome*/
         if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigurationAck_updateOutcome(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentConfigurationAck->updateOutcome,
                                                p_E2nodeComponentConfigurationAck->updateOutcome))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field updateOutcome",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode updateOutcome*/

    {  /*SEQ_ELEM-2  Encode failureCause*/
        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentConfigurationAck->failureCause,
                                                p_E2nodeComponentConfigurationAck->failureCause))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field failureCause",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode failureCause*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

