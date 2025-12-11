/************************************************************/
/*      SEQUENCE RICsubscriptionAuditAction_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICsubscriptionAuditAction_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICsubscriptionAuditAction_Item                 *p_e2ap_RICsubscriptionAuditAction_Item, //dest
                _e2ap_RICsubscriptionAuditAction_Item_t              *p_RICsubscriptionAuditAction_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricRequestID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICsubscriptionAuditAction_Item->ricRequestID = rtxMemAllocType(p_asn1_ctx, e2ap_RICrequestID);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionAuditAction_Item->ricRequestID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICrequestID(&p_e2ap_RICsubscriptionAuditAction_Item->ricRequestID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICrequestID(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionAuditAction_Item->ricRequestID,//dest
                                                &p_RICsubscriptionAuditAction_Item->ricRequestID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequestID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricRequestID*/

    {  /*SEQ_ELEM-2  Encode ranFunctionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionAuditAction_Item->ranFunctionID,
                                                &p_RICsubscriptionAuditAction_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ranFunctionID*/

    {  /*SEQ_ELEM-3  Encode ricAction_Admitted_List alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RICsubscriptionAuditAction_Item->ricAction_Admitted_List = rtxMemAllocType(p_asn1_ctx, e2ap_RICaction_Admitted_List);
        if(XNAP_P_NULL == p_e2ap_RICsubscriptionAuditAction_Item->ricAction_Admitted_List)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricAction_Admitted_List",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICaction_Admitted_List(&p_e2ap_RICsubscriptionAuditAction_Item->ricAction_Admitted_List);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICaction_Admitted_List(p_asn1_ctx,
                                                &p_e2ap_RICsubscriptionAuditAction_Item->ricAction_Admitted_List,//dest
                                                &p_RICsubscriptionAuditAction_Item->ricAction_Admitted_List)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricAction_Admitted_List",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ricAction_Admitted_List*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

