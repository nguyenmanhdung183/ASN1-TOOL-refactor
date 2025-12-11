/************************************************************/
/*      SEQUENCE RANfunction_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RANfunction_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunction_Item                 *p_e2ap_RANfunction_Item, //dest
                _e2ap_RANfunction_Item_t              *p_RANfunction_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RANfunction_Item->ranFunctionID,
                                                &p_RANfunction_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode ranFunctionDefinition alias-id = 9 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionDefinition(p_asn1_ctx,
                                                &p_e2ap_RANfunction_Item->ranFunctionDefinition,
                                                &p_RANfunction_Item->ranFunctionDefinition))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionDefinition",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ranFunctionDefinition*/

    {  /*SEQ_ELEM-3  Encode ranFunctionRevision alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionRevision(p_asn1_ctx,
                                                &p_e2ap_RANfunction_Item->ranFunctionRevision,
                                                &p_RANfunction_Item->ranFunctionRevision))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionRevision",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode ranFunctionRevision*/

    {  /*SEQ_ELEM-4  Encode ranFunctionOID alias-id = 10 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionOID(p_asn1_ctx,
                                                &p_e2ap_RANfunction_Item->ranFunctionOID,
                                                &p_RANfunction_Item->ranFunctionOID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionOID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ranFunctionOID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

