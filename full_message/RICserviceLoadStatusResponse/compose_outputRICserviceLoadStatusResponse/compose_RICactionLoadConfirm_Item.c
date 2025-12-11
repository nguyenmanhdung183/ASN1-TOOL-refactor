/************************************************************/
/*      SEQUENCE RICactionLoadConfirm_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICactionLoadConfirm_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICactionLoadConfirm_Item                 *p_e2ap_RICactionLoadConfirm_Item, //dest
                _e2ap_RICactionLoadConfirm_Item_t              *p_RICactionLoadConfirm_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricActionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICactionID(p_asn1_ctx,
                                                &p_e2ap_RICactionLoadConfirm_Item->ricActionID,
                                                &p_RICactionLoadConfirm_Item->ricActionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricActionID*/

    {  /*SEQ_ELEM-2  Encode ricActionLoadConfirm alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICloadConfirm(p_asn1_ctx,
                                                &p_e2ap_RICactionLoadConfirm_Item->ricActionLoadConfirm,
                                                &p_RICactionLoadConfirm_Item->ricActionLoadConfirm))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionLoadConfirm",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricActionLoadConfirm*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

