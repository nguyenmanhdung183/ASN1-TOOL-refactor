/************************************************************/
/*      SEQUENCE CriticalityDiagnostics                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_CriticalityDiagnostics(
                OSCTXT                        *p_asn1_ctx,
                e2ap_CriticalityDiagnostics                 *p_e2ap_CriticalityDiagnostics, //dest
                _e2ap_CriticalityDiagnostics_t              *p_CriticalityDiagnostics //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode procedureCode alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_ProcedureCode(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->procedureCode,
                                                &p_CriticalityDiagnostics->procedureCode))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field procedureCode",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode procedureCode*/

    {  /*SEQ_ELEM-2  Encode triggeringMessage alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_TriggeringMessage(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->triggeringMessage,
                                                &p_CriticalityDiagnostics->triggeringMessage))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field triggeringMessage",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode triggeringMessage*/

    {  /*SEQ_ELEM-3  Encode procedureCriticality alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_Criticality(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->procedureCriticality,
                                                &p_CriticalityDiagnostics->procedureCriticality))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field procedureCriticality",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode procedureCriticality*/

    {  /*SEQ_ELEM-4  Encode ricRequestorID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_CriticalityDiagnostics->ricRequestorID = rtxMemAllocType(p_asn1_ctx, e2ap_RICrequestID);
        if(XNAP_P_NULL == p_e2ap_CriticalityDiagnostics->ricRequestorID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequestorID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICrequestID(&p_e2ap_CriticalityDiagnostics->ricRequestorID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICrequestID(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->ricRequestorID,//dest
                                                &p_CriticalityDiagnostics->ricRequestorID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequestorID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricRequestorID*/

    {  /*SEQ_ELEM-5  Encode iEsCriticalityDiagnostics alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_CriticalityDiagnostics->iEsCriticalityDiagnostics = rtxMemAllocType(p_asn1_ctx, e2ap_CriticalityDiagnostics_IE_List);
        if(XNAP_P_NULL == p_e2ap_CriticalityDiagnostics->iEsCriticalityDiagnostics)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field iEsCriticalityDiagnostics",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_CriticalityDiagnostics_IE_List(&p_e2ap_CriticalityDiagnostics->iEsCriticalityDiagnostics);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_CriticalityDiagnostics_IE_List(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->iEsCriticalityDiagnostics,//dest
                                                &p_CriticalityDiagnostics->iEsCriticalityDiagnostics)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field iEsCriticalityDiagnostics",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-5  Encode iEsCriticalityDiagnostics*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

