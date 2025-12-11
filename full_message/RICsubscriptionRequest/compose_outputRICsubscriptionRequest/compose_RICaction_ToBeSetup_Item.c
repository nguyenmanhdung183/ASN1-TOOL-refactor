/************************************************************/
/*      SEQUENCE RICaction_ToBeSetup_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICaction_ToBeSetup_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICaction_ToBeSetup_Item                 *p_e2ap_RICaction_ToBeSetup_Item, //dest
                _e2ap_RICaction_ToBeSetup_Item_t              *p_RICaction_ToBeSetup_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricActionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICactionID(p_asn1_ctx,
                                                &p_e2ap_RICaction_ToBeSetup_Item->ricActionID,
                                                &p_RICaction_ToBeSetup_Item->ricActionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricActionID*/

    {  /*SEQ_ELEM-2  Encode ricActionType alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICactionType(p_asn1_ctx,
                                                &p_e2ap_RICaction_ToBeSetup_Item->ricActionType,
                                                &p_RICaction_ToBeSetup_Item->ricActionType))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionType",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricActionType*/

    {  /*SEQ_ELEM-3  Encode ricActionDefinition alias-id = 9 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICactionDefinition(p_asn1_ctx,
                                                &p_e2ap_RICaction_ToBeSetup_Item->ricActionDefinition,
                                                &p_RICaction_ToBeSetup_Item->ricActionDefinition))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionDefinition",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricActionDefinition*/

    {  /*SEQ_ELEM-4  Encode ricSubsequentAction alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICaction_ToBeSetup_Item->ricSubsequentAction = rtxMemAllocType(p_asn1_ctx, e2ap_RICsubsequentAction);
        if(XNAP_P_NULL == p_e2ap_RICaction_ToBeSetup_Item->ricSubsequentAction)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricSubsequentAction",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICsubsequentAction(&p_e2ap_RICaction_ToBeSetup_Item->ricSubsequentAction);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICsubsequentAction(p_asn1_ctx,
                                                &p_e2ap_RICaction_ToBeSetup_Item->ricSubsequentAction,//dest
                                                &p_RICaction_ToBeSetup_Item->ricSubsequentAction)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricSubsequentAction",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricSubsequentAction*/

    {  /*SEQ_ELEM-5  Encode ricActionExecutionOrder alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICactionExecutionOrder(p_asn1_ctx,
                                                &p_e2ap_RICaction_ToBeSetup_Item->ricActionExecutionOrder,
                                                &p_RICaction_ToBeSetup_Item->ricActionExecutionOrder))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricActionExecutionOrder",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-5  Encode ricActionExecutionOrder*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

