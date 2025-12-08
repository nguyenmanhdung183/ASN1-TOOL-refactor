/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceE1                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceE1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceE1                 *p_e2ap_E2nodeComponentInterfaceE1, //dest
                _e2ap_E2nodeComponentInterfaceE1_t              *p_E2nodeComponentInterfaceE1 //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode gNB_CU_UP_ID*/
        if(XNAP_FAILURE == e2ap_compose_GNB_CU_UP_ID(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceE1->gNB_CU_UP_ID,
                                                p_E2nodeComponentInterfaceE1->gNB_CU_UP_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_CU_UP_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode gNB_CU_UP_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

