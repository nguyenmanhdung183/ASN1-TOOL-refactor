/************************************************************/
/*      SEQUENCE E2connectionUpdate_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2connectionUpdate_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2connectionUpdate_Item                 *p_e2ap_E2connectionUpdate_Item, //dest
                _e2ap_E2connectionUpdate_Item_t              *p_E2connectionUpdate_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode tnlInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_E2connectionUpdate_Item->tnlInformation = rtxMemAllocType(p_asn1_ctx, e2ap_TNLinformation);
        if(XNAP_P_NULL == p_e2ap_E2connectionUpdate_Item->tnlInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_TNLinformation(&p_e2ap_E2connectionUpdate_Item->tnlInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_TNLinformation(p_asn1_ctx,
                                                &p_e2ap_E2connectionUpdate_Item->tnlInformation,
                                                &p_E2connectionUpdate_Item->tnlInformation))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode tnlInformation*/

    {  /*SEQ_ELEM-2  Encode tnlUsage alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_TNLusage(p_asn1_ctx,
                                                &p_e2ap_E2connectionUpdate_Item->tnlUsage,
                                                &p_E2connectionUpdate_Item->tnlUsage))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlUsage",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode tnlUsage*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

