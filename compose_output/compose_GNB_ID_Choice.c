/************************************************************/
 /*      CHOICE GNB_ID_Choice                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */
     // id = 4 - BIT STRING (SIZE(22..32)) - gnb_ID
 xnap_return_et e2ap_compose_GNB_ID_Choice_gnb_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_GNB_ID_Choice_gnb_ID                 *p_dest,//dest
                     _e2ap_GNB_ID_Choice_gnb_ID_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING GNB_ID_Choice_gnb_ID numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          

/* 2 - compose choice */
xnap_return_et e2ap_compose_GNB_ID_Choice(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GNB_ID_Choice             *p_e2ap_GNB_ID_Choice, //dest
                _e2ap_GNB_ID_Choice_t          *p_GNB_ID_Choice //src
)
{
    p_e2ap_GNB_ID_Choice->t =  p_GNB_ID_Choice->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_GNB_ID_Choice->choice_type)
    {
        /*CHOICE_INDEX-1    gnb_ID*/
        case E2AP_GNB_ID_CHOICE_e2ap_GNB_ID:
        {
            p_e2ap_GNB_ID_Choice->t = T_e2ap_GNB_ID_Choice_gnb_ID ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_GNB_ID_Choice->u.gnb_ID = rtxMemAllocType(p_asn1_ctx,e2ap_GNB_ID_Choice_gnb_ID);
            if(XNAP_P_NULL == p_e2ap_GNB_ID_Choice->u.gnb_ID)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gnb_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_GNB_ID_Choice_gnb_ID(p_asn1_ctx,
                                                   p_e2ap_GNB_ID_Choice->u.gnb_ID,
                                                   &p_GNB_ID_Choice->gnb_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gnb_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}