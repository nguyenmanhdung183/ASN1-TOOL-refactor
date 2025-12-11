/************************************************************/
/*      SEQUENCE RICactionList_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICactionList_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICactionList_Item                 *p_e2ap_RICactionList_Item, //dest
                _e2ap_RICactionList_Item_t              *p_RICactionList_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricActionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICactionID(p_asn1_ctx,
                                                &p_e2ap_RICactionList_Item->ricActionID,
                                                &p_RICactionList_Item->ricActionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricActionID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

