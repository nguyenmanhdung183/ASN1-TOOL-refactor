/************************************************************/
/*      SEQUENCE TNLinformation                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 2 - BIT STRING (SIZE(1..160,...)) - tnlAddress
  xnap_return_et e2ap_compose_TNLinformation_tnlAddress(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_TNLinformation_tnlAddress                 *p_dest,//dest
                     _e2ap_TNLinformation_tnlAddress_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;

    /* kích thước tính theo số octet thực */
    size_t num_octet = (p_src->numbits + 7) / 8;

    p_dest->data = (OSOCTET*) rtxMemAllocZ(p_asn1_ctx, num_octet);
    if (!p_dest->data)
    {
        XNAP_TRACE(XNAP_ERROR,
                   "dungnm23 %s failed alloc in e2ap_compose_TNLinformation_tnlAddress",
                   __FUNCTION__);
        return XNAP_FAILURE;
    }

    XNAP_MEMCPY((void*)p_dest->data, p_src->data, num_octet);

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debugBIT STRING TNLinformation_tnlAddress numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif    

    return XNAP_SUCCESS;
}
         
     // id = 3 - BIT STRING (SIZE(16)) - tnlPort
 xnap_return_et e2ap_compose_TNLinformation_tnlPort(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_TNLinformation_tnlPort                 *p_dest,//dest
                     _e2ap_TNLinformation_tnlPort_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING TNLinformation_tnlPort numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          


/* 2 - compose sequence */
xnap_return_et e2ap_compose_TNLinformation(
                OSCTXT                        *p_asn1_ctx,
                e2ap_TNLinformation                 *p_e2ap_TNLinformation, //dest
                _e2ap_TNLinformation_t              *p_TNLinformation //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_TNLinformation)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for TNLinformation",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode tnlAddress alias-id = -1 - primitive = True*/

        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_TNLinformation_tnlAddress(p_asn1_ctx,
                                                &p_e2ap_TNLinformation->tnlAddress,
                                                &p_TNLinformation->tnlAddress))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlAddress",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode tnlAddress*/

    if(p_TNLinformation->bitmask & E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT)
    {  /*SEQ_ELEM-2  Encode tnlPort alias-id = -1 - primitive = True*/
    p_e2ap_TNLinformation->m_tnlPortPresent = TRUE; //dungnm23 add -> check xem chuan ko nhe

        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_TNLinformation_tnlPort(p_asn1_ctx,
                                                &p_e2ap_TNLinformation->tnlPort,
                                                &p_TNLinformation->tnlPort))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlPort",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode tnlPort*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

