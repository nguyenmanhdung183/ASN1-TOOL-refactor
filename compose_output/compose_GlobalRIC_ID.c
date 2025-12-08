/************************************************************/
/*      SEQUENCE GlobalRIC_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 3 - BIT STRING (SIZE (20)) - ric_ID
 xnap_return_et e2ap_compose_GlobalRIC_ID_ric_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_GlobalRIC_ID_ric_ID                 *p_dest,//dest
                     _e2ap_GlobalRIC_ID_ric_ID_t              *p_src//src
)
{
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
    return XNAP_SUCCESS;
}
          


/* 2 - compose sequence */
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
         if(XNAP_FAILURE == e2ap_compose_GlobalRIC_ID_ric_ID(p_asn1_ctx,
                                                p_e2ap_GlobalRIC_ID->ric_ID,
                                                p_GlobalRIC_ID->ric_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ric_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ric_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

