/************************************************************/
/*      SEQUENCE RICrequestID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 6 - INTEGER (0..65535) - ricRequestorID
xnap_return_et e2ap_compose_RICrequestID_ricRequestorID(
                    OSCTXT                       *p_asn1_ctx,
                    e2ap_RICrequestID_ricRequestorID  *p_dest,//dest
                    _e2ap_RICrequestID_ricRequestorID_t  *p_src//src
)
{
    *p_dest = (e2ap_RICrequestID_ricRequestorID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RICrequestID value=%u", __FUNCTION__, *p_dest);
    #endif
    return XNAP_SUCCESS;
}
           
     // id = 6 - INTEGER (0..65535) - ricInstanceID
xnap_return_et e2ap_compose_RICrequestID_ricInstanceID(
                    OSCTXT                       *p_asn1_ctx,
                    e2ap_RICrequestID_ricInstanceID  *p_dest,//dest
                    _e2ap_RICrequestID_ricInstanceID_t  *p_src//src
)
{
    *p_dest = (e2ap_RICrequestID_ricInstanceID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RICrequestID value=%u", __FUNCTION__, *p_dest);
    #endif
    return XNAP_SUCCESS;
}
           


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RICrequestID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RICrequestID                 *p_e2ap_RICrequestID, //dest
                _e2ap_RICrequestID_t              *p_RICrequestID //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode ricRequestorID alias-id = -1 - primitive = True*/
        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_RICrequestID_ricRequestorID(p_asn1_ctx,
                                                &p_e2ap_RICrequestID->ricRequestorID,
                                                &p_RICrequestID->ricRequestorID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequestorID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ricRequestorID*/

    {  /*SEQ_ELEM-2  Encode ricInstanceID alias-id = -1 - primitive = True*/
        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_RICrequestID_ricInstanceID(p_asn1_ctx,
                                                &p_e2ap_RICrequestID->ricInstanceID,
                                                &p_RICrequestID->ricInstanceID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricInstanceID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ricInstanceID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

