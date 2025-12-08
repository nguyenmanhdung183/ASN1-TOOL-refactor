/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceX2                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceX2(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceX2                 *p_e2ap_E2nodeComponentInterfaceX2, //dest
                _e2ap_E2nodeComponentInterfaceX2_t              *p_E2nodeComponentInterfaceX2 //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode global_eNB_ID*/
        if(XNAP_FAILURE == e2ap_compose_GlobalENB_ID(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID,
                                                p_E2nodeComponentInterfaceX2->global_eNB_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_eNB_ID*/

    {  /*SEQ_ELEM-2  Encode global_en_gNB_ID*/
        if(XNAP_FAILURE == e2ap_compose_GlobalenGNB_ID(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID,
                                                p_E2nodeComponentInterfaceX2->global_en_gNB_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_en_gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode global_en_gNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

