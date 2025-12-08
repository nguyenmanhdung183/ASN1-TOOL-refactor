// compose sequence
xnap_return_et e2ap_compose_GlobalENB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalENB_ID                 *p_e2ap_GlobalENB_ID, //dest
                _e2ap_GlobalENB_ID_t              *p_GlobalENB_ID //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode pLMN_Identity*/

        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                p_e2ap_GlobalENB_ID->pLMN_Identity,
                                                p_GlobalENB_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode eNB_ID*/

        if(XNAP_FAILURE == e2ap_compose_ENB_ID(p_asn1_ctx,
                                                p_e2ap_GlobalENB_ID->eNB_ID,
                                                p_GlobalENB_ID->eNB_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode eNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}