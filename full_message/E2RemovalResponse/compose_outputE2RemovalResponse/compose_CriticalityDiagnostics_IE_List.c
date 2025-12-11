/************************************************************/
/*      SEQUENCE CriticalityDiagnostics_IE_List                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_CriticalityDiagnostics_IE_List(
                OSCTXT                        *p_asn1_ctx,
                e2ap_CriticalityDiagnostics_IE_List                 *p_e2ap_CriticalityDiagnostics_IE_List, //dest
                _e2ap_CriticalityDiagnostics_IE_List_t              *p_CriticalityDiagnostics_IE_List //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode iECriticality alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_Criticality(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics_IE_List->iECriticality,
                                                &p_CriticalityDiagnostics_IE_List->iECriticality))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field iECriticality",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode iECriticality*/

    {  /*SEQ_ELEM-2  Encode iE_ID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_CriticalityDiagnostics_IE_List->iE_ID = rtxMemAllocType(p_asn1_ctx, e2ap_ProtocolIE_ID);
        if(XNAP_P_NULL == p_e2ap_CriticalityDiagnostics_IE_List->iE_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field iE_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_ProtocolIE_ID(&p_e2ap_CriticalityDiagnostics_IE_List->iE_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_ProtocolIE_ID(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics_IE_List->iE_ID,//dest
                                                &p_CriticalityDiagnostics_IE_List->iE_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field iE_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode iE_ID*/

    {  /*SEQ_ELEM-3  Encode typeOfError alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_CriticalityDiagnostics_IE_List->typeOfError = rtxMemAllocType(p_asn1_ctx, e2ap_TypeOfError);
        if(XNAP_P_NULL == p_e2ap_CriticalityDiagnostics_IE_List->typeOfError)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field typeOfError",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_TypeOfError(&p_e2ap_CriticalityDiagnostics_IE_List->typeOfError);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_TypeOfError(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics_IE_List->typeOfError,//dest
                                                &p_CriticalityDiagnostics_IE_List->typeOfError)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field typeOfError",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode typeOfError*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

