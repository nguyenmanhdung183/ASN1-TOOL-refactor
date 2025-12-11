/************************************************************/
/*      SEQUENCE RICactionLoad_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICactionLoad_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICactionLoad_Item                 *p_e2ap_RICactionLoad_Item, //dest
                _e2ap_RICactionLoad_Item_t              *p_RICactionLoad_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricActionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICactionID(p_asn1_ctx,
                                                &p_e2ap_RICactionLoad_Item->ricActionID,
                                                &p_RICactionLoad_Item->ricActionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricActionID*/

    {  /*SEQ_ELEM-2  Encode ricActionLoadInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RICactionLoad_Item->ricActionLoadInformation = rtxMemAllocType(p_asn1_ctx, e2ap_RICloadInformation);
        if(XNAP_P_NULL == p_e2ap_RICactionLoad_Item->ricActionLoadInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricActionLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICloadInformation(&p_e2ap_RICactionLoad_Item->ricActionLoadInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICloadInformation(p_asn1_ctx,
                                                &p_e2ap_RICactionLoad_Item->ricActionLoadInformation,//dest
                                                &p_RICactionLoad_Item->ricActionLoadInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionLoadInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricActionLoadInformation*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

