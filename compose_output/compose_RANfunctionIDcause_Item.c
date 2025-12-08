// compose sequence
xnap_return_et e2ap_compose_RANfunctionIDcause_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionIDcause_Item                 *p_e2ap_RANfunctionIDcause_Item, //dest
                _e2ap_RANfunctionIDcause_Item_t              *p_RANfunctionIDcause_Item //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID*/

        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                p_e2ap_RANfunctionIDcause_Item->ranFunctionID,
                                                p_RANfunctionIDcause_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode cause*/

        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                p_e2ap_RANfunctionIDcause_Item->cause,
                                                p_RANfunctionIDcause_Item->cause))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode cause*/


    // cần appendnode
    return XNAP_SUCCESS;
}