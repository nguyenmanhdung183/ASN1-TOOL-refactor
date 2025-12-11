/************************************************************/
/*      SEQUENCE RICsubscriptionList_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICsubscriptionList_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICsubscriptionList_Item                 *p_e2ap_RICsubscriptionList_Item, //dest
                _e2ap_RICsubscriptionList_Item_t              *p_RICsubscriptionList_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricRequestID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RICsubscriptionList_Item->ricRequestID = rtxMemAllocType(p_asn1_ctx, e2ap_RICrequestID);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionList_Item->ricRequestID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICrequestID(&p_e2ap_RICsubscriptionList_Item->ricRequestID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICrequestID(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionList_Item->ricRequestID,//dest
                                                &p_RICsubscriptionList_Item->ricRequestID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricRequestID*/

    {  /*SEQ_ELEM-2  Encode ricAction_list alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_RICsubscriptionList_Item->ricAction_list = rtxMemAllocType(p_asn1_ctx, e2ap_RICaction_List);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionList_Item->ricAction_list)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricAction_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICaction_List(&p_e2ap_RICsubscriptionList_Item->ricAction_list);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICaction_List(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionList_Item->ricAction_list,//dest
                                                &p_RICsubscriptionList_Item->ricAction_list)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricAction_list",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricAction_list*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

