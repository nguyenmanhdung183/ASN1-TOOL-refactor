// compose sequence
xnap_return_et e2ap_compose_GlobalngeNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalngeNB_ID                 *p_e2ap_GlobalngeNB_ID, //dest
                _e2ap_GlobalngeNB_ID_t              *p_GlobalngeNB_ID //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode plmn_id*/

        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                p_e2ap_GlobalngeNB_ID->plmn_id,
                                                p_GlobalngeNB_ID->plmn_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field plmn_id",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode plmn_id*/

    {  /*SEQ_ELEM-2  Encode enb_id*/

        if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice(p_asn1_ctx,
                                                p_e2ap_GlobalngeNB_ID->enb_id,
                                                p_GlobalngeNB_ID->enb_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode enb_id*/


    // cần appendnode
    return XNAP_SUCCESS;
}