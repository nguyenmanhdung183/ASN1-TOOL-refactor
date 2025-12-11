/************************************************************/
/*      SEQUENCE RICsubscriptionAuditFlag                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICsubscriptionAuditFlag(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICsubscriptionAuditFlag                 *p_e2ap_RICsubscriptionAuditFlag, //dest
                _e2ap_RICsubscriptionAuditFlag_t              *p_RICsubscriptionAuditFlag //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode listedRecordsOnly alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_ListedRecordsOnly(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionAuditFlag->listedRecordsOnly,
                                                &p_RICsubscriptionAuditFlag->listedRecordsOnly))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field listedRecordsOnly",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode listedRecordsOnly*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

