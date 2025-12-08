// Auto-generated MAIN_COMPOSE.c

/*************************************************/
/* File compose missing: compose_TransactionID.c */
/*************************************************/

/*************************************************/
/* File compose missing: compose_PLMN_Identity.c */
/*************************************************/

// --- Begin of compose_GlobalRIC_ID.c ---
// compose sequence
xnap_return_et e2ap_compose_GlobalRIC_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalRIC_ID                 *p_e2ap_GlobalRIC_ID, //dest
                _e2ap_GlobalRIC_ID_t              *p_GlobalRIC_ID //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode pLMN_Identity*/

        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                p_e2ap_GlobalRIC_ID->pLMN_Identity,
                                                p_GlobalRIC_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode ric_ID*/


       memcpy(p_e2ap_GlobalRIC_ID->ric_ID.data, p_GlobalRIC_ID->ric_ID.data, sizeof(p_GlobalRIC_ID->ric_ID.data));
        p_e2ap_GlobalRIC_ID->ric_ID.numbits = p_GlobalRIC_ID->ric_ID.numbits;
 
    } /* end SEQ_ELEM-2  Encode ric_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_GlobalRIC_ID.c ---

/*************************************************/
/* File compose missing: compose_RANfunctionID.c */
/*************************************************/

/*******************************************************/
/* File compose missing: compose_RANfunctionRevision.c */
/*******************************************************/

// --- Begin of compose_RANfunctionID_Item.c ---
// compose sequence
xnap_return_et e2ap_compose_RANfunctionID_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionID_Item                 *p_e2ap_RANfunctionID_Item, //dest
                _e2ap_RANfunctionID_Item_t              *p_RANfunctionID_Item //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID*/

        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                p_e2ap_RANfunctionID_Item->ranFunctionID,
                                                p_RANfunctionID_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode ranFunctionRevision*/

        if(XNAP_FAILURE == e2ap_compose_RANfunctionRevision(p_asn1_ctx,
                                                p_e2ap_RANfunctionID_Item->ranFunctionRevision,
                                                p_RANfunctionID_Item->ranFunctionRevision))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionRevision",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode ranFunctionRevision*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_RANfunctionID_Item.c ---

// --- Begin of compose_RANfunctionID_ItemIEs.c ---
  
// IE thường -> IE child_of_msg ở file encode ie child of msg rồi
// khả năng kô cần


// --- End of compose_RANfunctionID_ItemIEs.c ---

// --- Begin of compose_RANfunctionsID_List.c ---
// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionsID_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionsID_List,
                _e2ap_RANfunctionsID_List_t       *p_RANfunctionsID_List
            )
{
    e2ap_RANfunctionID_Item      *p_RANfunctionID_Item = NULL;
    OSRTDListNode                       *p_node = GNB_PNULL;
    UInt16                              t_count = XNAP_NULL;

    for(t_count=0; t_count< p_RANfunctionsID_List->id_RANfunctionID_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionID_Item,
                                &p_node,
                                &p_RANfunctionID_Item);
        if(GNB_PNULL==p_node){
            /* not enough memory */
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionID_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionID_Item(p_RANfunctionID_Item);

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    
       
        //ENCODE ITEMIEs=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID_Item(p_asn1_ctx,
                                                                    p_RANfunctionID_Item,
                                                                    p_RANfunctionsID_List->id_RANfunctionID_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionID_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        //end ENCODE ITEMIEs=============


        rtxDListAppendNode(p_e2ap_RANfunctionsID_List, p_node);
    }
    XNAP_UT_TRACE_EXIT();
    return XNAP_SUCCESS;
}
// --- End of compose_RANfunctionsID_List.c ---

/***************************************************/
/* File compose missing: compose_CauseRICrequest.c */
/***************************************************/

/***************************************************/
/* File compose missing: compose_CauseRICservice.c */
/***************************************************/

/***********************************************/
/* File compose missing: compose_CauseE2node.c */
/***********************************************/

/**************************************************/
/* File compose missing: compose_CauseTransport.c */
/**************************************************/

/*************************************************/
/* File compose missing: compose_CauseProtocol.c */
/*************************************************/

/*********************************************/
/* File compose missing: compose_CauseMisc.c */
/*********************************************/

/*****************************************************/
/* File compose missing: compose_ServiceLayerCause.c */
/*****************************************************/

// --- Begin of compose_CauseServiceLayer.c ---
// compose sequence
xnap_return_et e2ap_compose_CauseServiceLayer(
                OSCTXT                        *p_asn1_ctx,
                e2ap_CauseServiceLayer                 *p_e2ap_CauseServiceLayer, //dest
                _e2ap_CauseServiceLayer_t              *p_CauseServiceLayer //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode serviceLayerCause*/

        if(XNAP_FAILURE == e2ap_compose_ServiceLayerCause(p_asn1_ctx,
                                                p_e2ap_CauseServiceLayer->serviceLayerCause,
                                                p_CauseServiceLayer->serviceLayerCause))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field serviceLayerCause",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode serviceLayerCause*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_CauseServiceLayer.c ---

// --- Begin of compose_Cause.c ---
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
xnap_return_et e2ap_compose_Cause(
                OSCTXT                        *p_asn1_ctx,
                e2ap_Cause             *p_e2ap_Cause, //dest
                _e2ap_Cause_t          *p_Cause //src
                )
{
    p_e2ap_Cause->t =  p_Cause->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_Cause->t)
    {
        /*CHOICE_INDEX-1    ricRequest*/
        case: E2AP_CAUSE_e2ap_RIC_REQUEST:
        {
            p_e2ap_Cause->u.ricRequest = rtxMemAllocType(p_asn1_ctx, e2ap_CauseRICrequest);
            if(GNB_PNULL == p_e2ap_Cause->u.ricRequest){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseRICrequest",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseRICrequest(p_e2ap_Cause->u.ricRequest);

            if(XNAP_FAILURE == e2ap_compose_CauseRICrequest(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseRICrequest",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-2    ricService*/
        case: E2AP_CAUSE_e2ap_RIC_SERVICE:
        {
            p_e2ap_Cause->u.ricService = rtxMemAllocType(p_asn1_ctx, e2ap_CauseRICservice);
            if(GNB_PNULL == p_e2ap_Cause->u.ricService){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseRICservice",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseRICservice(p_e2ap_Cause->u.ricService);

            if(XNAP_FAILURE == e2ap_compose_CauseRICservice(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseRICservice",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-3    e2Node*/
        case: E2AP_CAUSE_e2ap_E2NODE:
        {
            p_e2ap_Cause->u.e2Node = rtxMemAllocType(p_asn1_ctx, e2ap_CauseE2node);
            if(GNB_PNULL == p_e2ap_Cause->u.e2Node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseE2node",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseE2node(p_e2ap_Cause->u.e2Node);

            if(XNAP_FAILURE == e2ap_compose_CauseE2node(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseE2node",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-4    transport*/
        case: E2AP_CAUSE_e2ap_TRANSPORT:
        {
            p_e2ap_Cause->u.transport = rtxMemAllocType(p_asn1_ctx, e2ap_CauseTransport);
            if(GNB_PNULL == p_e2ap_Cause->u.transport){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseTransport",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseTransport(p_e2ap_Cause->u.transport);

            if(XNAP_FAILURE == e2ap_compose_CauseTransport(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseTransport",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-5    protocol*/
        case: E2AP_CAUSE_e2ap_PROTOCOL:
        {
            p_e2ap_Cause->u.protocol = rtxMemAllocType(p_asn1_ctx, e2ap_CauseProtocol);
            if(GNB_PNULL == p_e2ap_Cause->u.protocol){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseProtocol",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseProtocol(p_e2ap_Cause->u.protocol);

            if(XNAP_FAILURE == e2ap_compose_CauseProtocol(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseProtocol",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-6    misc*/
        case: E2AP_CAUSE_e2ap_MISC:
        {
            p_e2ap_Cause->u.misc = rtxMemAllocType(p_asn1_ctx, e2ap_CauseMisc);
            if(GNB_PNULL == p_e2ap_Cause->u.misc){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseMisc",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseMisc(p_e2ap_Cause->u.misc);

            if(XNAP_FAILURE == e2ap_compose_CauseMisc(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseMisc",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-7    serviceLayer*/
        case: E2AP_CAUSE_e2ap_SERVICE_LAYER:
        {
            p_e2ap_Cause->u.serviceLayer = rtxMemAllocType(p_asn1_ctx, e2ap_CauseServiceLayer);
            if(GNB_PNULL == p_e2ap_Cause->u.serviceLayer){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_CauseServiceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_CauseServiceLayer(p_e2ap_Cause->u.serviceLayer);

            if(XNAP_FAILURE == e2ap_compose_CauseServiceLayer(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_CauseServiceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

    }
    return retVal;
}
// --- End of compose_Cause.c ---

// --- Begin of compose_RANfunctionIDcause_Item.c ---
// compose sequence
xnap_return_et e2ap_compose_RANfunctionIDcause_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionIDcause_Item                 *p_e2ap_RANfunctionIDcause_Item, //dest
                _e2ap_RANfunctionIDcause_Item_t              *p_RANfunctionIDcause_Item //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode ranFunctionID*/

        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                p_e2ap_RANfunctionIDcause_Item->ranFunctionID,
                                                p_RANfunctionIDcause_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode cause*/

        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                p_e2ap_RANfunctionIDcause_Item->cause,
                                                p_RANfunctionIDcause_Item->cause))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode cause*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_RANfunctionIDcause_Item.c ---

// --- Begin of compose_RANfunctionIDcause_ItemIEs.c ---
  
// IE thường -> IE child_of_msg ở file encode ie child of msg rồi
// khả năng kô cần


// --- End of compose_RANfunctionIDcause_ItemIEs.c ---

// --- Begin of compose_RANfunctionsIDcause_List.c ---
// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionsIDcause_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionsIDcause_List,
                _e2ap_RANfunctionsIDcause_List_t       *p_RANfunctionsIDcause_List
            )
{
    e2ap_RANfunctionIDcause_Item      *p_RANfunctionIDcause_Item = NULL;
    OSRTDListNode                       *p_node = GNB_PNULL;
    UInt16                              t_count = XNAP_NULL;

    for(t_count=0; t_count< p_RANfunctionsIDcause_List->id_RANfunctionIEcause_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionIDcause_Item,
                                &p_node,
                                &p_RANfunctionIDcause_Item);
        if(GNB_PNULL==p_node){
            /* not enough memory */
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionIDcause_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionIDcause_Item(p_RANfunctionIDcause_Item);

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    
       
        //ENCODE ITEMIEs=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionIDcause_Item(p_asn1_ctx,
                                                                    p_RANfunctionIDcause_Item,
                                                                    p_RANfunctionsIDcause_List->id_RANfunctionIEcause_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionIDcause_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        //end ENCODE ITEMIEs=============


        rtxDListAppendNode(p_e2ap_RANfunctionsIDcause_List, p_node);
    }
    XNAP_UT_TRACE_EXIT();
    return XNAP_SUCCESS;
}
// --- End of compose_RANfunctionsIDcause_List.c ---

/****************************************************************/
/* File compose missing: compose_E2nodeComponentInterfaceType.c */
/****************************************************************/

/*******************************************/
/* File compose missing: compose_AMFName.c */
/*******************************************/

// --- Begin of compose_E2nodeComponentInterfaceNG.c ---
// compose sequence
xnap_return_et e2ap_compose_E2nodeComponentInterfaceNG(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceNG                 *p_e2ap_E2nodeComponentInterfaceNG, //dest
                _e2ap_E2nodeComponentInterfaceNG_t              *p_E2nodeComponentInterfaceNG //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode amf_name*/

        if(XNAP_FAILURE == e2ap_compose_AMFName(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceNG->amf_name,
                                                p_E2nodeComponentInterfaceNG->amf_name))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field amf_name",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode amf_name*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_E2nodeComponentInterfaceNG.c ---

// --- Begin of compose_GNB_ID_Choice.c ---
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
xnap_return_et e2ap_compose_GNB_ID_Choice(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GNB_ID_Choice             *p_e2ap_GNB_ID_Choice, //dest
                _e2ap_GNB_ID_Choice_t          *p_GNB_ID_Choice //src
                )
{
    p_e2ap_GNB_ID_Choice->t =  p_GNB_ID_Choice->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_GNB_ID_Choice->t)
    {
        /*CHOICE_INDEX-1    gnb_ID*/
        case: E2AP_GNB_ID_CHOICE_e2ap_GNB_ID:
        {

                 break;
        }

    }
    return retVal;
}
// --- End of compose_GNB_ID_Choice.c ---

// --- Begin of compose_GlobalgNB_ID.c ---
// compose sequence
xnap_return_et e2ap_compose_GlobalgNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalgNB_ID                 *p_e2ap_GlobalgNB_ID, //dest
                _e2ap_GlobalgNB_ID_t              *p_GlobalgNB_ID //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode plmn_id*/

        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                p_e2ap_GlobalgNB_ID->plmn_id,
                                                p_GlobalgNB_ID->plmn_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field plmn_id",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode plmn_id*/

    {  /*SEQ_ELEM-2  Encode gnb_id*/

        if(XNAP_FAILURE == e2ap_compose_GNB_ID_Choice(p_asn1_ctx,
                                                p_e2ap_GlobalgNB_ID->gnb_id,
                                                p_GlobalgNB_ID->gnb_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gnb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode gnb_id*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_GlobalgNB_ID.c ---

// --- Begin of compose_ENB_ID_Choice.c ---
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
xnap_return_et e2ap_compose_ENB_ID_Choice(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENB_ID_Choice             *p_e2ap_ENB_ID_Choice, //dest
                _e2ap_ENB_ID_Choice_t          *p_ENB_ID_Choice //src
                )
{
    p_e2ap_ENB_ID_Choice->t =  p_ENB_ID_Choice->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENB_ID_Choice->t)
    {
        /*CHOICE_INDEX-1    enb_ID_macro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO:
        {

                 break;
        }

        /*CHOICE_INDEX-2    enb_ID_shortmacro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO:
        {

                 break;
        }

        /*CHOICE_INDEX-3    enb_ID_longmacro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO:
        {

                 break;
        }

    }
    return retVal;
}
// --- End of compose_ENB_ID_Choice.c ---

// --- Begin of compose_GlobalngeNB_ID.c ---
// compose sequence
xnap_return_et e2ap_compose_GlobalngeNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalngeNB_ID                 *p_e2ap_GlobalngeNB_ID, //dest
                _e2ap_GlobalngeNB_ID_t              *p_GlobalngeNB_ID //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode plmn_id*/

        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                p_e2ap_GlobalngeNB_ID->plmn_id,
                                                p_GlobalngeNB_ID->plmn_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field plmn_id",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode plmn_id*/

    {  /*SEQ_ELEM-2  Encode enb_id*/

        if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice(p_asn1_ctx,
                                                p_e2ap_GlobalngeNB_ID->enb_id,
                                                p_GlobalngeNB_ID->enb_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode enb_id*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_GlobalngeNB_ID.c ---

// --- Begin of compose_GlobalNG_RANNode_ID.c ---
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
xnap_return_et e2ap_compose_GlobalNG_RANNode_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalNG_RANNode_ID             *p_e2ap_GlobalNG_RANNode_ID, //dest
                _e2ap_GlobalNG_RANNode_ID_t          *p_GlobalNG_RANNode_ID //src
                )
{
    p_e2ap_GlobalNG_RANNode_ID->t =  p_GlobalNG_RANNode_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_GlobalNG_RANNode_ID->t)
    {
        /*CHOICE_INDEX-1    gNB*/
        case: E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB:
        {
            p_e2ap_GlobalNG_RANNode_ID->u.gNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalgNB_ID);
            if(GNB_PNULL == p_e2ap_GlobalNG_RANNode_ID->u.gNB){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_GlobalgNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_GlobalgNB_ID(p_e2ap_GlobalNG_RANNode_ID->u.gNB);

            if(XNAP_FAILURE == e2ap_compose_GlobalgNB_ID(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_GlobalgNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-2    ng_eNB*/
        case: E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB:
        {
            p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalngeNB_ID);
            if(GNB_PNULL == p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_GlobalngeNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_GlobalngeNB_ID(p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB);

            if(XNAP_FAILURE == e2ap_compose_GlobalngeNB_ID(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_GlobalngeNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

    }
    return retVal;
}
// --- End of compose_GlobalNG_RANNode_ID.c ---

// --- Begin of compose_E2nodeComponentInterfaceXn.c ---
// compose sequence
xnap_return_et e2ap_compose_E2nodeComponentInterfaceXn(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceXn                 *p_e2ap_E2nodeComponentInterfaceXn, //dest
                _e2ap_E2nodeComponentInterfaceXn_t              *p_E2nodeComponentInterfaceXn //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode global_NG_RAN_Node_ID*/

        if(XNAP_FAILURE == e2ap_compose_GlobalNG_RANNode_ID(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID,
                                                p_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_NG_RAN_Node_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode global_NG_RAN_Node_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_E2nodeComponentInterfaceXn.c ---

/************************************************/
/* File compose missing: compose_GNB_CU_UP_ID.c */
/************************************************/

// --- Begin of compose_E2nodeComponentInterfaceE1.c ---
// compose sequence
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
// --- End of compose_E2nodeComponentInterfaceE1.c ---

/*********************************************/
/* File compose missing: compose_GNB_DU_ID.c */
/*********************************************/

// --- Begin of compose_E2nodeComponentInterfaceF1.c ---
// compose sequence
xnap_return_et e2ap_compose_E2nodeComponentInterfaceF1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceF1                 *p_e2ap_E2nodeComponentInterfaceF1, //dest
                _e2ap_E2nodeComponentInterfaceF1_t              *p_E2nodeComponentInterfaceF1 //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode gNB_DU_ID*/

        if(XNAP_FAILURE == e2ap_compose_GNB_DU_ID(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceF1->gNB_DU_ID,
                                                p_E2nodeComponentInterfaceF1->gNB_DU_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_DU_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode gNB_DU_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_E2nodeComponentInterfaceF1.c ---

/***********************************************/
/* File compose missing: compose_NGENB_DU_ID.c */
/***********************************************/

// --- Begin of compose_E2nodeComponentInterfaceW1.c ---
// compose sequence
xnap_return_et e2ap_compose_E2nodeComponentInterfaceW1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceW1                 *p_e2ap_E2nodeComponentInterfaceW1, //dest
                _e2ap_E2nodeComponentInterfaceW1_t              *p_E2nodeComponentInterfaceW1 //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode ng_eNB_DU_ID*/

        if(XNAP_FAILURE == e2ap_compose_NGENB_DU_ID(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceW1->ng_eNB_DU_ID,
                                                p_E2nodeComponentInterfaceW1->ng_eNB_DU_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ng_eNB_DU_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode ng_eNB_DU_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_E2nodeComponentInterfaceW1.c ---

/*******************************************/
/* File compose missing: compose_MMEname.c */
/*******************************************/

// --- Begin of compose_E2nodeComponentInterfaceS1.c ---
// compose sequence
xnap_return_et e2ap_compose_E2nodeComponentInterfaceS1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceS1                 *p_e2ap_E2nodeComponentInterfaceS1, //dest
                _e2ap_E2nodeComponentInterfaceS1_t              *p_E2nodeComponentInterfaceS1 //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode mme_name*/

        if(XNAP_FAILURE == e2ap_compose_MMEname(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentInterfaceS1->mme_name,
                                                p_E2nodeComponentInterfaceS1->mme_name))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field mme_name",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode mme_name*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_E2nodeComponentInterfaceS1.c ---

// --- Begin of compose_ENB_ID.c ---
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
xnap_return_et e2ap_compose_ENB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENB_ID             *p_e2ap_ENB_ID, //dest
                _e2ap_ENB_ID_t          *p_ENB_ID //src
                )
{
    p_e2ap_ENB_ID->t =  p_ENB_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENB_ID->t)
    {
        /*CHOICE_INDEX-1    macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_MACRO_E_NB_ID:
        {

                 break;
        }

        /*CHOICE_INDEX-2    home_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_HOME_E_NB_ID:
        {

                 break;
        }

        /*CHOICE_INDEX-3    short_Macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID:
        {

                 break;
        }

        /*CHOICE_INDEX-4    long_Macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID:
        {

                 break;
        }

    }
    return retVal;
}
// --- End of compose_ENB_ID.c ---

// --- Begin of compose_GlobalENB_ID.c ---
// compose sequence
xnap_return_et e2ap_compose_GlobalENB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalENB_ID                 *p_e2ap_GlobalENB_ID, //dest
                _e2ap_GlobalENB_ID_t              *p_GlobalENB_ID //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode pLMN_Identity*/

        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                p_e2ap_GlobalENB_ID->pLMN_Identity,
                                                p_GlobalENB_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode eNB_ID*/

        if(XNAP_FAILURE == e2ap_compose_ENB_ID(p_asn1_ctx,
                                                p_e2ap_GlobalENB_ID->eNB_ID,
                                                p_GlobalENB_ID->eNB_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode eNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_GlobalENB_ID.c ---

// --- Begin of compose_ENGNB_ID.c ---
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
xnap_return_et e2ap_compose_ENGNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENGNB_ID             *p_e2ap_ENGNB_ID, //dest
                _e2ap_ENGNB_ID_t          *p_ENGNB_ID //src
                )
{
    p_e2ap_ENGNB_ID->t =  p_ENGNB_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENGNB_ID->t)
    {
        /*CHOICE_INDEX-1    gNB_ID*/
        case: E2AP_ENGNB_ID_e2ap_G_NB_ID:
        {

                 break;
        }

    }
    return retVal;
}
// --- End of compose_ENGNB_ID.c ---

// --- Begin of compose_GlobalenGNB_ID.c ---
// compose sequence
xnap_return_et e2ap_compose_GlobalenGNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalenGNB_ID                 *p_e2ap_GlobalenGNB_ID, //dest
                _e2ap_GlobalenGNB_ID_t              *p_GlobalenGNB_ID //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode pLMN_Identity*/

        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                p_e2ap_GlobalenGNB_ID->pLMN_Identity,
                                                p_GlobalenGNB_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode gNB_ID*/

        if(XNAP_FAILURE == e2ap_compose_ENGNB_ID(p_asn1_ctx,
                                                p_e2ap_GlobalenGNB_ID->gNB_ID,
                                                p_GlobalenGNB_ID->gNB_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode gNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_GlobalenGNB_ID.c ---

// --- Begin of compose_E2nodeComponentInterfaceX2.c ---
// compose sequence
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
// --- End of compose_E2nodeComponentInterfaceX2.c ---

// --- Begin of compose_E2nodeComponentID.c ---
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
xnap_return_et e2ap_compose_E2nodeComponentID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentID             *p_e2ap_E2nodeComponentID, //dest
                _e2ap_E2nodeComponentID_t          *p_E2nodeComponentID //src
                )
{
    p_e2ap_E2nodeComponentID->t =  p_E2nodeComponentID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_E2nodeComponentID->t)
    {
        /*CHOICE_INDEX-1    e2nodeComponentInterfaceTypeNG*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG:
        {
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceNG);
            if(GNB_PNULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_E2nodeComponentInterfaceNG",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_E2nodeComponentInterfaceNG(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG);

            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceNG(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_E2nodeComponentInterfaceNG",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-2    e2nodeComponentInterfaceTypeXn*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN:
        {
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceXn);
            if(GNB_PNULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_E2nodeComponentInterfaceXn",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_E2nodeComponentInterfaceXn(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn);

            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceXn(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_E2nodeComponentInterfaceXn",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-3    e2nodeComponentInterfaceTypeE1*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1:
        {
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceE1);
            if(GNB_PNULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_E2nodeComponentInterfaceE1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_E2nodeComponentInterfaceE1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1);

            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceE1(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_E2nodeComponentInterfaceE1",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-4    e2nodeComponentInterfaceTypeF1*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1:
        {
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceF1);
            if(GNB_PNULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_E2nodeComponentInterfaceF1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_E2nodeComponentInterfaceF1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1);

            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceF1(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_E2nodeComponentInterfaceF1",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-5    e2nodeComponentInterfaceTypeW1*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1:
        {
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceW1);
            if(GNB_PNULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_E2nodeComponentInterfaceW1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_E2nodeComponentInterfaceW1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1);

            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceW1(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_E2nodeComponentInterfaceW1",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-6    e2nodeComponentInterfaceTypeS1*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1:
        {
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceS1);
            if(GNB_PNULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_E2nodeComponentInterfaceS1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_E2nodeComponentInterfaceS1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1);

            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceS1(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_E2nodeComponentInterfaceS1",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

        /*CHOICE_INDEX-7    e2nodeComponentInterfaceTypeX2*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2:
        {
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceX2);
            if(GNB_PNULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"%s: Memory allocation failed for e2ap_E2nodeComponentInterfaceX2",__FUNCTION__);
                return XNAP_FAILURE;
            }
            asn1Init_e2ap_E2nodeComponentInterfaceX2(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2);

            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceX2(xxx)){
                XNAP_TRACE(XNAP_ERROR,"%s: compose failed for e2ap_E2nodeComponentInterfaceX2",__FUNCTION__);
                return XNAP_FAILURE;
            }


             break;
        }

    }
    return retVal;
}
// --- End of compose_E2nodeComponentID.c ---

// --- Begin of compose_E2nodeComponentConfigurationAck.c ---
// compose sequence
xnap_return_et e2ap_compose_E2nodeComponentConfigurationAck(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentConfigurationAck                 *p_e2ap_E2nodeComponentConfigurationAck, //dest
                _e2ap_E2nodeComponentConfigurationAck_t              *p_E2nodeComponentConfigurationAck //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode updateOutcome*/


     
    } /* end SEQ_ELEM-1  Encode updateOutcome*/

    {  /*SEQ_ELEM-2  Encode failureCause*/

        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentConfigurationAck->failureCause,
                                                p_E2nodeComponentConfigurationAck->failureCause))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field failureCause",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode failureCause*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_E2nodeComponentConfigurationAck.c ---

// --- Begin of compose_E2nodeComponentConfigAdditionAck_Item.c ---
// compose sequence
xnap_return_et e2ap_compose_E2nodeComponentConfigAdditionAck_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentConfigAdditionAck_Item                 *p_e2ap_E2nodeComponentConfigAdditionAck_Item, //dest
                _e2ap_E2nodeComponentConfigAdditionAck_Item_t              *p_E2nodeComponentConfigAdditionAck_Item //src
                )
{


//cần alloc node

    {  /*SEQ_ELEM-1  Encode e2nodeComponentInterfaceType*/

        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceType(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType,
                                                p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceType",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-1  Encode e2nodeComponentInterfaceType*/

    {  /*SEQ_ELEM-2  Encode e2nodeComponentID*/

        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentID(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID,
                                                p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentID",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-2  Encode e2nodeComponentID*/

    {  /*SEQ_ELEM-3  Encode e2nodeComponentConfigurationAck*/

        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigurationAck(p_asn1_ctx,
                                                p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck,
                                                p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentConfigurationAck",__FUNCTION__);
            return XNAP_FAILURE;
        }

    } /* end SEQ_ELEM-3  Encode e2nodeComponentConfigurationAck*/


    // cần appendnode
    return XNAP_SUCCESS;
}
// --- End of compose_E2nodeComponentConfigAdditionAck_Item.c ---

// --- Begin of compose_E2nodeComponentConfigAdditionAck_ItemIEs.c ---
  
// IE thường -> IE child_of_msg ở file encode ie child of msg rồi
// khả năng kô cần


// --- End of compose_E2nodeComponentConfigAdditionAck_ItemIEs.c ---

// --- Begin of compose_E2nodeComponentConfigAdditionAck_List.c ---
// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_E2nodeComponentConfigAdditionAck_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_E2nodeComponentConfigAdditionAck_List,
                _e2ap_E2nodeComponentConfigAdditionAck_List_t       *p_E2nodeComponentConfigAdditionAck_List
            )
{
    e2ap_E2nodeComponentConfigAdditionAck_Item      *p_E2nodeComponentConfigAdditionAck_Item = NULL;
    OSRTDListNode                       *p_node = GNB_PNULL;
    UInt16                              t_count = XNAP_NULL;

    for(t_count=0; t_count< p_E2nodeComponentConfigAdditionAck_List->id_E2nodeComponentConfigAdditionAck_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_E2nodeComponentConfigAdditionAck_Item,
                                &p_node,
                                &p_E2nodeComponentConfigAdditionAck_Item);
        if(GNB_PNULL==p_node){
            /* not enough memory */
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentConfigAdditionAck_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_E2nodeComponentConfigAdditionAck_Item(p_E2nodeComponentConfigAdditionAck_Item);

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    
       
        //ENCODE ITEMIEs=============
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAdditionAck_Item(p_asn1_ctx,
                                                                    p_E2nodeComponentConfigAdditionAck_Item,
                                                                    p_E2nodeComponentConfigAdditionAck_List->id_E2nodeComponentConfigAdditionAck_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAdditionAck_Item",__FUNCTION__);
            return XNAP_FAILURE;
        }
        //end ENCODE ITEMIEs=============


        rtxDListAppendNode(p_e2ap_E2nodeComponentConfigAdditionAck_List, p_node);
    }
    XNAP_UT_TRACE_EXIT();
    return XNAP_SUCCESS;
}
// --- End of compose_E2nodeComponentConfigAdditionAck_List.c ---

// --- Begin of compose_E2setupResponseIEs.c ---

// --- End of compose_E2setupResponseIEs.c ---

// --- Begin of compose_E2setupResponse.c ---
/**************************************************/
/* XXX_3typ.e -> InitiatingMessage/  /            */
/*                                                */
/**************************************************/

xnap_return_et e2ap_encode_E2setupResponse(e2ap_E2setupResponse_t* p_E2setupResponse,
                                            UInt8 *p_asn_msg, 
                                            UInt16* p_asn_msg_len)
{

#if 0 // hardcode
    /* gan gi tri cho p_E2setupResponse o day*/
#endif


    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_E2setupResponse* p_E2setupResponse = GNB_PNULL;
    e2ap_E2setupResponse_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
    /* Initialize ASN.1 context */
    if(0!=rtInitContext(&asn1_ctx)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: ASN context initialization failed",__FUNCTION__);
        XNAP_UT_TRACE_ENTER();
        return retVal;
    }do{
        XNAP_MEMSET(&e2ap_pdu,0,sizeof(e2ap_E2AP_PDU));
        /*set PDU type to initing/ SSF/ USSF */
        e2ap_pdu.t = T_e2ap_E2AP_PDU_successfulOutcome;
        XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: PDU type set to successfulOutcome",__FUNCTION__);
        e2ap_pdu.u. = rtxMemAllocType(&asn1_ctx, e2ap_successfulOutcome);
        if(GNB_PNULL==e2ap_pdu.u.successfulOutcome){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for successfulOutcome",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_successfulOutcome(e2ap_pdu.u.successfulOutcome);
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_E2setupResponse
        e2ap_pdu.u.successfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.successfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2setupResponse;
        p_E2setupResponse = rtxMemAllocType(&asn1_ctx, e2ap_E2setupResponse);
        if(GNB_PNULL==p_E2setupResponse){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for E2setupResponse",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for E2setupResponse",__FUNCTION__);
        }

        asn1Init_e2ap_E2setupResponse(p_E2setupResponse);
        e2ap_pdu.u.successfulOutcome->value.u.e2setup = p_E2setupResponse;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_TransactionID*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_TransactionID = p_E2setupResponse->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_GlobalRIC_ID*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_GlobalRIC_ID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_GlobalRIC_ID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_GlobalRIC_ID = rtxMemAllocType(&asn1_ctx, e2ap_GlobalRIC_ID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_GlobalRIC_ID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_GlobalRIC_ID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2setupResponse(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_GlobalRIC_ID);
            #endif
            //message_name.item_type -> type = GlobalRIC_ID
            if(XNAP_FAILURE == e2ap_compose_GlobalRIC_ID(&asn1_ctx, p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_GlobalRIC_ID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field GlobalRIC_ID",__FUNCTION__);
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field GlobalRIC_ID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RANfunctionsAccepted*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsID_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_RANfunctionsID_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_RANfunctionsID_List = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsID_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsID_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionsID_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2setupResponse(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsID_List);
            #endif
            //message_name.item_type -> type = RANfunctionsID_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsID_List(&asn1_ctx, p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsID_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsID_List",__FUNCTION__);
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsID_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RANfunctionsRejected*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsIDcause_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_RANfunctionsIDcause_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_RANfunctionsIDcause_List = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsIDcause_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsIDcause_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionsIDcause_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2setupResponse(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsIDcause_List);
            #endif
            //message_name.item_type -> type = RANfunctionsIDcause_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsIDcause_List(&asn1_ctx, p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_RANfunctionsIDcause_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsIDcause_List",__FUNCTION__);
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsIDcause_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-5   encode id_E2nodeComponentConfigAdditionAck*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2setupResponse_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2setupResponse_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2setupResponse_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeComponentConfigAdditionAck_List;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_e2ap_PDU_Contents_e2ap_E2setupResponse_IEs_E2nodeComponentConfigAdditionAck_List;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_id_E2nodeComponentConfigAdditionAck_List = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_E2nodeComponentConfigAdditionAck_List){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentConfigAdditionAck_List",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2setupResponse(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_E2nodeComponentConfigAdditionAck_List);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigAdditionAck_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAdditionAck_List(&asn1_ctx, p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponse_IEs_E2nodeComponentConfigAdditionAck_List)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAdditionAck_List",__FUNCTION__);
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2nodeComponentConfigAdditionAck_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif

        /*ASN encode msg*/
        {
            if(RT_OK != pu_setBuffer(&asn1_ctx, p_asn_msg, XNAP_MAX_ASN1_BUF_LEN, TRUE)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: pu_setBuffer failed",__FUNCTION__);
                break;
            }
            if(0!=asn1PE_e2ap_E2AP_PDU(&asn1_ctx, &e2ap_pdu)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: ASN encoding failed",__FUNCTION__);
                *p_asn_msg_len = (UInt16)pe_GetMsgLen(&asn1_ctx);
                rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP_PDU", &e2ap_pdu);
                SInt8 buff[500];
                rtxErrGetTextBuf(&asn1_ctx, buff, 500);
                XNAP_TRACE(XNAP_ERROR, "dungnm23 BUFFER[%s], %x", (SInt8*)buff, buff);
                ASN_ERROR_PRINT(&asn1_ctx);
                break;
            }else{
                XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: ASN encoding success",__FUNCTION__);
                *p_asn_msg_len = (UInt16)pe_GetMsgLen(&asn1_ctx);
                retVal = XNAP_SUCCESS;
            }
        }

    }while(0);
    rtFreeContext(&asn1_ctx);
    XNAP_UT_TRACE_EXIT();
    return retVal;
}
// --- End of compose_E2setupResponse.c ---

