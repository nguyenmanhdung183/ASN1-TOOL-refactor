/************************************************************/
/*      SEQUENCE E2nodeComponentConfiguration                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 9 - OCTET STRING - e2nodeComponentRequestPart
           
     // id = 9 - OCTET STRING - e2nodeComponentResponsePart
           


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentConfiguration(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentConfiguration                 *p_e2ap_E2nodeComponentConfiguration, //dest
                _e2ap_E2nodeComponentConfiguration_t              *p_E2nodeComponentConfiguration //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode e2nodeComponentRequestPart alias-id = -1 - primitive = True*/
        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfiguration_e2nodeComponentRequestPart(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfiguration->e2nodeComponentRequestPart,
                                                &p_E2nodeComponentConfiguration->e2nodeComponentRequestPart))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentRequestPart",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode e2nodeComponentRequestPart*/

    {  /*SEQ_ELEM-2  Encode e2nodeComponentResponsePart alias-id = -1 - primitive = True*/
        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfiguration_e2nodeComponentResponsePart(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfiguration->e2nodeComponentResponsePart,
                                                &p_E2nodeComponentConfiguration->e2nodeComponentResponsePart))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentResponsePart",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode e2nodeComponentResponsePart*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

