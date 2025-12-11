/************************************************************/
/*      SEQUENCE RICsubscriptionDetails                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICsubscriptionDetails(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICsubscriptionDetails                 *p_e2ap_RICsubscriptionDetails, //dest
                _e2ap_RICsubscriptionDetails_t              *p_RICsubscriptionDetails //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricEventTriggerDefinition alias-id = 9 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RICeventTriggerDefinition(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionDetails->ricEventTriggerDefinition,
                                                &p_RICsubscriptionDetails->ricEventTriggerDefinition))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricEventTriggerDefinition",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricEventTriggerDefinition*/

    {  /*SEQ_ELEM-2  Encode ricAction_ToBeSetup_List alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICsubscriptionDetails->ricAction_ToBeSetup_List = rtxMemAllocType(p_asn1_ctx, e2ap_RICactions_ToBeSetup_List);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionDetails->ricAction_ToBeSetup_List)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricAction_ToBeSetup_List",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICactions_ToBeSetup_List(&p_e2ap_RICsubscriptionDetails->ricAction_ToBeSetup_List);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICactions_ToBeSetup_List(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionDetails->ricAction_ToBeSetup_List,//dest
                                                &p_RICsubscriptionDetails->ricAction_ToBeSetup_List)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricAction_ToBeSetup_List",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricAction_ToBeSetup_List*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

