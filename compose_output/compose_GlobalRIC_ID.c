// compose sequence
xnap_return_et e2ap_compose_GlobalRIC_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalRIC_ID                 *p_e2ap_GlobalRIC_ID, //dest
                _e2ap_GlobalRIC_ID_t              *p_GlobalRIC_ID //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode pLMN_Identity*/

        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                p_e2ap_GlobalRIC_ID->pLMN_Identity,
                                                p_GlobalRIC_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode ric_ID*/


       memcpy(p_e2ap_GlobalRIC_ID->ric_ID.data, p_GlobalRIC_ID->ric_ID.data, sizeof(p_GlobalRIC_ID->ric_ID.data));
        p_e2ap_GlobalRIC_ID->ric_ID.numbits = p_GlobalRIC_ID->ric_ID.numbits;
 
    } /* end SEQ_ELEM-2  Encode ric_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}