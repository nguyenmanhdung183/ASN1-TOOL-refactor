#include "main_struct.h"
#include "output_main.h"

/*****************************************************/
/*    COMPOSE PRIMITIVE TransactionID                             */
/*****************************************************/
/* compose primitive - id = 5 - INTEGER (0..255,...) - TransactionID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_TransactionID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_TransactionID     *p_dest,
                        _e2ap_TransactionID_t  *p_src
){
    *p_dest = (e2ap_TransactionID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER TransactionID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE PLMN_Identity                             */
/*****************************************************/
/* compose primitive - id = 8 - OCTET STRING (SIZE(3)) - PLMN_Identity*/
/* ---------------------------------------------------------------------- */
/*  OCTET STRING SIZE(N) – FIXED (primitive_id = 8)                       */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_PLMN_Identity(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_PLMN_Identity     *p_dest,
                        _e2ap_PLMN_Identity_t  *p_src
){
    p_dest->numocts = p_src->numocts;  // hoặc 3, tùy ASN
    XNAP_MEMCPY(p_dest->data, p_src->data, p_src->numocts);

    #ifdef  E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug OCTET STRING PLMN_Identity numocts=%u", __FUNCTION__, p_dest->numocts);
    #endif

    return XNAP_SUCCESS;
}
/************************************************************/
/*      SEQUENCE GlobalRIC_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 3 - BIT STRING (SIZE (20)) - ric_ID
 xnap_return_et e2ap_compose_GlobalRIC_ID_ric_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_GlobalRIC_ID_ric_ID                 *p_dest,//dest
                     _e2ap_GlobalRIC_ID_ric_ID_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING GlobalRIC_ID_ric_ID numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          


/* 2 - compose sequence */
xnap_return_et e2ap_compose_GlobalRIC_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalRIC_ID                 *p_e2ap_GlobalRIC_ID, //dest
                _e2ap_GlobalRIC_ID_t              *p_GlobalRIC_ID //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_GlobalRIC_ID)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for GlobalRIC_ID",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode pLMN_Identity alias-id = 8 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                &p_e2ap_GlobalRIC_ID->pLMN_Identity,
                                                &p_GlobalRIC_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode ric_ID alias-id = -1 - primitive = True*/

        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_GlobalRIC_ID_ric_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalRIC_ID->ric_ID,
                                                &p_GlobalRIC_ID->ric_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ric_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ric_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/*****************************************************/
/*    COMPOSE PRIMITIVE RANfunctionID                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..4095) - RANfunctionID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RANfunctionID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RANfunctionID     *p_dest,
                        _e2ap_RANfunctionID_t  *p_src
){
    *p_dest = (e2ap_RANfunctionID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RANfunctionID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE RANfunctionRevision                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..4095) - RANfunctionRevision*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_RANfunctionRevision(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_RANfunctionRevision     *p_dest,
                        _e2ap_RANfunctionRevision_t  *p_src
){
    *p_dest = (e2ap_RANfunctionRevision)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER RANfunctionRevision value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
/************************************************************/
/*      SEQUENCE RANfunctionID_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RANfunctionID_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionID_Item                 *p_e2ap_RANfunctionID_Item, //dest
                _e2ap_RANfunctionID_Item_t              *p_RANfunctionID_Item //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_RANfunctionID_Item)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for RANfunctionID_Item",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode ranFunctionID alias-id = 6 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RANfunctionID_Item->ranFunctionID,
                                                &p_RANfunctionID_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode ranFunctionRevision alias-id = 6 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionRevision(p_asn1_ctx,
                                                &p_e2ap_RANfunctionID_Item->ranFunctionRevision,
                                                &p_RANfunctionID_Item->ranFunctionRevision))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionRevision",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode ranFunctionRevision*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

  
// IE thường -> IE child_of_msg ở file encode ie child of msg rồi
// khả năng kô cần

// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionsID_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionsID_List,
                _e2ap_RANfunctionsID_List_t       *p_RANfunctionsID_List
){
    e2ap_RANfunctionID_ItemIEs   *p_RANfunctionID_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RANfunctionsID_List->id_RANfunctionID_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionID_ItemIEs,
                                &p_node_list,
                                &p_RANfunctionID_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionID-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionID_ItemIEs(p_RANfunctionID_ItemIEs);
        p_RANfunctionID_ItemIEs->id = ASN1V_e2ap_id_RANfunctionID_Item;
        p_RANfunctionID_ItemIEs->criticality = e2ap_reject;
        p_RANfunctionID_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RANfunctionID_ItemIEs_id_RANfunctionID_Item;
        p_RANfunctionID_ItemIEs->value.u._e2apRANfunctionID_ItemIEs_id_RANfunctionID_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RANfunctionID_Item);
        if(GNB_PNULL==p_RANfunctionID_ItemIEs->value.u._e2apRANfunctionID_ItemIEs_id_RANfunctionID_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionID-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID_Item(p_asn1_ctx,
                                                p_RANfunctionID_ItemIEs->value.u._e2apRANfunctionID_ItemIEs_id_RANfunctionID_Item,
                                                &p_RANfunctionsID_List->id_RANfunctionID_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionID-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RANfunctionsID_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


/*****************************************************/
/*    COMPOSE PRIMITIVE CauseRICrequest                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - CauseRICrequest*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_CauseRICrequest(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_CauseRICrequest     *p_dest,
                        _e2ap_CauseRICrequest_et *p_src
){
    *p_dest = (e2ap_CauseRICrequest)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED CauseRICrequest value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE CauseRICservice                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - CauseRICservice*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_CauseRICservice(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_CauseRICservice     *p_dest,
                        _e2ap_CauseRICservice_et *p_src
){
    *p_dest = (e2ap_CauseRICservice)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED CauseRICservice value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE CauseE2node                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - CauseE2node*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_CauseE2node(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_CauseE2node     *p_dest,
                        _e2ap_CauseE2node_et *p_src
){
    *p_dest = (e2ap_CauseE2node)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED CauseE2node value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE CauseTransport                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - CauseTransport*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_CauseTransport(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_CauseTransport     *p_dest,
                        _e2ap_CauseTransport_et *p_src
){
    *p_dest = (e2ap_CauseTransport)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED CauseTransport value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE CauseProtocol                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - CauseProtocol*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_CauseProtocol(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_CauseProtocol     *p_dest,
                        _e2ap_CauseProtocol_et *p_src
){
    *p_dest = (e2ap_CauseProtocol)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED CauseProtocol value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE CauseMisc                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - CauseMisc*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_CauseMisc(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_CauseMisc     *p_dest,
                        _e2ap_CauseMisc_et *p_src
){
    *p_dest = (e2ap_CauseMisc)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED CauseMisc value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE ServiceLayerCause                             */
/*****************************************************/
/* compose primitive - id = 9 - OCTET STRING - ServiceLayerCause*/
/* ---------------------------------------------------------------------- */
/*  OCTET STRING – dynamic (primitive_id = 9)                             */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_ServiceLayerCause(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_ServiceLayerCause     *p_dest,
                        _e2ap_ServiceLayerCause_t  *p_src
){
    size_t num = p_src->numocts;

    p_dest->data = (OSOCTET*) rtxMemAllocZ(p_asn1_ctx, num);
    if (!p_dest->data)
    {
        XNAP_TRACE(XNAP_ERROR,
                   "%s alloc fail in e2ap_compose_ServiceLayerCause",
                    __FUNCTION__);
        return XNAP_FAILURE;
    }

    p_dest->numocts = num;
    XNAP_MEMCPY(p_dest->data, p_src->data, num);

    #ifdef  E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug OCTET STRING ServiceLayerCause numocts=%u", __FUNCTION__, p_dest->numocts);
    #endif

    return XNAP_SUCCESS;
}
/************************************************************/
/*      SEQUENCE CauseServiceLayer                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_CauseServiceLayer(
                OSCTXT                        *p_asn1_ctx,
                e2ap_CauseServiceLayer                 *p_e2ap_CauseServiceLayer, //dest
                _e2ap_CauseServiceLayer_t              *p_CauseServiceLayer //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_CauseServiceLayer)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for CauseServiceLayer",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode serviceLayerCause alias-id = 9 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_ServiceLayerCause(p_asn1_ctx,
                                                &p_e2ap_CauseServiceLayer->serviceLayerCause,
                                                &p_CauseServiceLayer->serviceLayerCause))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field serviceLayerCause",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode serviceLayerCause*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/************************************************************/
 /*      CHOICE Cause                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_Cause(
                OSCTXT                        *p_asn1_ctx,
                e2ap_Cause             *p_e2ap_Cause, //dest
                _e2ap_Cause_t          *p_Cause //src
)
{
    p_e2ap_Cause->t =  p_Cause->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_Cause->choice_type)
    {
        /*CHOICE_INDEX-1    ricRequest*/
        case E2AP_CAUSE_e2ap_RIC_REQUEST:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_ricRequest ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.ricRequest = rtxMemAllocType(p_asn1_ctx,e2ap_CauseRICrequest);
            if(XNAP_P_NULL == p_e2ap_Cause->u.ricRequest)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequest",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseRICrequest(p_asn1_ctx,
                                                    p_e2ap_Cause->u.ricRequest,
                                                    &p_Cause->ricRequest))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequest",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    ricService*/
        case E2AP_CAUSE_e2ap_RIC_SERVICE:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_ricService ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.ricService = rtxMemAllocType(p_asn1_ctx,e2ap_CauseRICservice);
            if(XNAP_P_NULL == p_e2ap_Cause->u.ricService)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricService",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseRICservice(p_asn1_ctx,
                                                    p_e2ap_Cause->u.ricService,
                                                    &p_Cause->ricService))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricService",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    e2Node*/
        case E2AP_CAUSE_e2ap_E2NODE:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_e2Node ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.e2Node = rtxMemAllocType(p_asn1_ctx,e2ap_CauseE2node);
            if(XNAP_P_NULL == p_e2ap_Cause->u.e2Node)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2Node",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseE2node(p_asn1_ctx,
                                                    p_e2ap_Cause->u.e2Node,
                                                    &p_Cause->e2Node))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2Node",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    transport*/
        case E2AP_CAUSE_e2ap_TRANSPORT:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_transport ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.transport = rtxMemAllocType(p_asn1_ctx,e2ap_CauseTransport);
            if(XNAP_P_NULL == p_e2ap_Cause->u.transport)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field transport",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseTransport(p_asn1_ctx,
                                                    p_e2ap_Cause->u.transport,
                                                    &p_Cause->transport))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field transport",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-5    protocol*/
        case E2AP_CAUSE_e2ap_PROTOCOL:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_protocol ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.protocol = rtxMemAllocType(p_asn1_ctx,e2ap_CauseProtocol);
            if(XNAP_P_NULL == p_e2ap_Cause->u.protocol)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field protocol",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseProtocol(p_asn1_ctx,
                                                    p_e2ap_Cause->u.protocol,
                                                    &p_Cause->protocol))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field protocol",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-6    misc*/
        case E2AP_CAUSE_e2ap_MISC:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_misc ;

             /*==primitive alias== */
            /* 1.alloc mem */
            p_e2ap_Cause->u.misc = rtxMemAllocType(p_asn1_ctx,e2ap_CauseMisc);
            if(XNAP_P_NULL == p_e2ap_Cause->u.misc)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field misc",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseMisc(p_asn1_ctx,
                                                    p_e2ap_Cause->u.misc,
                                                    &p_Cause->misc))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field misc",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-7    serviceLayer*/
        case E2AP_CAUSE_e2ap_SERVICE_LAYER:
        {
            p_e2ap_Cause->t = T_e2ap_Cause_serviceLayer ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_Cause->u.serviceLayer = rtxMemAllocType(p_asn1_ctx, e2ap_CauseServiceLayer);
            if(XNAP_P_NULL == p_e2ap_Cause->u.serviceLayer)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field serviceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_CauseServiceLayer(p_e2ap_Cause->u.serviceLayer);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseServiceLayer(p_asn1_ctx,
                                                    p_e2ap_Cause->u.serviceLayer,
                                                    &p_Cause->serviceLayer))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field serviceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}/************************************************************/
/*      SEQUENCE RANfunctionIDcause_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_RANfunctionIDcause_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_RANfunctionIDcause_Item                 *p_e2ap_RANfunctionIDcause_Item, //dest
                _e2ap_RANfunctionIDcause_Item_t              *p_RANfunctionIDcause_Item //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_RANfunctionIDcause_Item)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for RANfunctionIDcause_Item",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode ranFunctionID alias-id = 6 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_RANfunctionID(p_asn1_ctx,
                                                &p_e2ap_RANfunctionIDcause_Item->ranFunctionID,
                                                &p_RANfunctionIDcause_Item->ranFunctionID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ranFunctionID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ranFunctionID*/

    {  /*SEQ_ELEM-2  Encode cause alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_RANfunctionIDcause_Item->cause = rtxMemAllocType(p_asn1_ctx, e2ap_Cause);
        if(XNAP_P_NULL == p_e2ap_RANfunctionIDcause_Item->cause)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_Cause(&p_e2ap_RANfunctionIDcause_Item->cause);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                &p_e2ap_RANfunctionIDcause_Item->cause,//dest
                                                &p_RANfunctionIDcause_Item->cause)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode cause*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

  
// IE thường -> IE child_of_msg ở file encode ie child of msg rồi
// khả năng kô cần

// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_RANfunctionsIDcause_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_RANfunctionsIDcause_List,
                _e2ap_RANfunctionsIDcause_List_t       *p_RANfunctionsIDcause_List
){
    e2ap_RANfunctionIDcause_ItemIEs   *p_RANfunctionIDcause_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_RANfunctionsIDcause_List->id_RANfunctionIEcause_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_RANfunctionIDcause_ItemIEs,
                                &p_node_list,
                                &p_RANfunctionIDcause_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionIDcause-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_RANfunctionIDcause_ItemIEs(p_RANfunctionIDcause_ItemIEs);
        p_RANfunctionIDcause_ItemIEs->id = ASN1V_e2ap_id_RANfunctionIEcause_Item;
        p_RANfunctionIDcause_ItemIEs->criticality = e2ap_reject;
        p_RANfunctionIDcause_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_RANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item;
        p_RANfunctionIDcause_ItemIEs->value.u._e2apRANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_RANfunctionIDcause_Item);
        if(GNB_PNULL==p_RANfunctionIDcause_ItemIEs->value.u._e2apRANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RANfunctionIDcause-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_RANfunctionIDcause_Item(p_asn1_ctx,
                                                p_RANfunctionIDcause_ItemIEs->value.u._e2apRANfunctionIDcause_ItemIEs_id_RANfunctionIEcause_Item,
                                                &p_RANfunctionsIDcause_List->id_RANfunctionIEcause_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionIDcause-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_RANfunctionsIDcause_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


/*****************************************************/
/*    COMPOSE PRIMITIVE E2nodeComponentInterfaceType                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - E2nodeComponentInterfaceType*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceType(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_E2nodeComponentInterfaceType     *p_dest,
                        _e2ap_E2nodeComponentInterfaceType_et *p_src
){
    *p_dest = (e2ap_E2nodeComponentInterfaceType)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED E2nodeComponentInterfaceType value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE AMFName                             */
/*****************************************************/
/* compose primitive - id = 10 - PrintableString (SIZE(1..150, ...)) - AMFName*/
/* ---------------------------------------------------------------------- */
/*  PrintableString (primitive_id = 10)                                   */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_AMFName(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_AMFName     *p_dest,
                        _e2ap_AMFName_t  *p_src
){

    *p_dest = *p_src;
    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug PrintableString AMFName string =%s", __FUNCTION__, p_dest);
    #endif
    return XNAP_SUCCESS;
}
/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceNG                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceNG(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceNG                 *p_e2ap_E2nodeComponentInterfaceNG, //dest
                _e2ap_E2nodeComponentInterfaceNG_t              *p_E2nodeComponentInterfaceNG //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceNG)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceNG",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode amf_name alias-id = 10 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_AMFName(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceNG->amf_name,
                                                &p_E2nodeComponentInterfaceNG->amf_name))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field amf_name",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode amf_name*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

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
}/************************************************************/
/*      SEQUENCE GlobalgNB_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_GlobalgNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalgNB_ID                 *p_e2ap_GlobalgNB_ID, //dest
                _e2ap_GlobalgNB_ID_t              *p_GlobalgNB_ID //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_GlobalgNB_ID)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for GlobalgNB_ID",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode plmn_id alias-id = 8 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                &p_e2ap_GlobalgNB_ID->plmn_id,
                                                &p_GlobalgNB_ID->plmn_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field plmn_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode plmn_id*/

    {  /*SEQ_ELEM-2  Encode gnb_id alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_GlobalgNB_ID->gnb_id = rtxMemAllocType(p_asn1_ctx, e2ap_GNB_ID_Choice);
        if(XNAP_P_NULL == p_e2ap_GlobalgNB_ID->gnb_id)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gnb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GNB_ID_Choice(&p_e2ap_GlobalgNB_ID->gnb_id);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GNB_ID_Choice(p_asn1_ctx,
                                                &p_e2ap_GlobalgNB_ID->gnb_id,//dest
                                                &p_GlobalgNB_ID->gnb_id)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gnb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode gnb_id*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/************************************************************/
 /*      CHOICE ENB_ID_Choice                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */
     // id = 3 - BIT STRING (SIZE(20)) - enb_ID_macro
 xnap_return_et e2ap_compose_ENB_ID_Choice_enb_ID_macro(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_Choice_enb_ID_macro                 *p_dest,//dest
                     _e2ap_ENB_ID_Choice_enb_ID_macro_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_Choice_enb_ID_macro numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          
     // id = 3 - BIT STRING (SIZE(18)) - enb_ID_shortmacro
 xnap_return_et e2ap_compose_ENB_ID_Choice_enb_ID_shortmacro(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_Choice_enb_ID_shortmacro                 *p_dest,//dest
                     _e2ap_ENB_ID_Choice_enb_ID_shortmacro_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_Choice_enb_ID_shortmacro numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          
     // id = 3 - BIT STRING (SIZE(21)) - enb_ID_longmacro
 xnap_return_et e2ap_compose_ENB_ID_Choice_enb_ID_longmacro(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_Choice_enb_ID_longmacro                 *p_dest,//dest
                     _e2ap_ENB_ID_Choice_enb_ID_longmacro_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_Choice_enb_ID_longmacro numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          

/* 2 - compose choice */
xnap_return_et e2ap_compose_ENB_ID_Choice(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENB_ID_Choice             *p_e2ap_ENB_ID_Choice, //dest
                _e2ap_ENB_ID_Choice_t          *p_ENB_ID_Choice //src
)
{
    p_e2ap_ENB_ID_Choice->t =  p_ENB_ID_Choice->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENB_ID_Choice->choice_type)
    {
        /*CHOICE_INDEX-1    enb_ID_macro*/
        case E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO:
        {
            p_e2ap_ENB_ID_Choice->t = T_e2ap_ENB_ID_Choice_enb_ID_macro ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID_Choice->u.enb_ID_macro = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_Choice_enb_ID_macro);
            if(XNAP_P_NULL == p_e2ap_ENB_ID_Choice->u.enb_ID_macro)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field enb_ID_macro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_macro(p_asn1_ctx,
                                                   p_e2ap_ENB_ID_Choice->u.enb_ID_macro,
                                                   &p_ENB_ID_Choice->enb_ID_macro))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_ID_macro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    enb_ID_shortmacro*/
        case E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO:
        {
            p_e2ap_ENB_ID_Choice->t = T_e2ap_ENB_ID_Choice_enb_ID_shortmacro ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID_Choice->u.enb_ID_shortmacro = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_Choice_enb_ID_shortmacro);
            if(XNAP_P_NULL == p_e2ap_ENB_ID_Choice->u.enb_ID_shortmacro)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field enb_ID_shortmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_shortmacro(p_asn1_ctx,
                                                   p_e2ap_ENB_ID_Choice->u.enb_ID_shortmacro,
                                                   &p_ENB_ID_Choice->enb_ID_shortmacro))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_ID_shortmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    enb_ID_longmacro*/
        case E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO:
        {
            p_e2ap_ENB_ID_Choice->t = T_e2ap_ENB_ID_Choice_enb_ID_longmacro ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID_Choice->u.enb_ID_longmacro = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_Choice_enb_ID_longmacro);
            if(XNAP_P_NULL == p_e2ap_ENB_ID_Choice->u.enb_ID_longmacro)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field enb_ID_longmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_longmacro(p_asn1_ctx,
                                                   p_e2ap_ENB_ID_Choice->u.enb_ID_longmacro,
                                                   &p_ENB_ID_Choice->enb_ID_longmacro))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_ID_longmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}/************************************************************/
/*      SEQUENCE GlobalngeNB_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_GlobalngeNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalngeNB_ID                 *p_e2ap_GlobalngeNB_ID, //dest
                _e2ap_GlobalngeNB_ID_t              *p_GlobalngeNB_ID //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_GlobalngeNB_ID)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for GlobalngeNB_ID",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode plmn_id alias-id = 8 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                &p_e2ap_GlobalngeNB_ID->plmn_id,
                                                &p_GlobalngeNB_ID->plmn_id))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field plmn_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode plmn_id*/

    {  /*SEQ_ELEM-2  Encode enb_id alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_GlobalngeNB_ID->enb_id = rtxMemAllocType(p_asn1_ctx, e2ap_ENB_ID_Choice);
        if(XNAP_P_NULL == p_e2ap_GlobalngeNB_ID->enb_id)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field enb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_ENB_ID_Choice(&p_e2ap_GlobalngeNB_ID->enb_id);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice(p_asn1_ctx,
                                                &p_e2ap_GlobalngeNB_ID->enb_id,//dest
                                                &p_GlobalngeNB_ID->enb_id)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode enb_id*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/************************************************************/
 /*      CHOICE GlobalNG_RANNode_ID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_GlobalNG_RANNode_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalNG_RANNode_ID             *p_e2ap_GlobalNG_RANNode_ID, //dest
                _e2ap_GlobalNG_RANNode_ID_t          *p_GlobalNG_RANNode_ID //src
)
{
    p_e2ap_GlobalNG_RANNode_ID->t =  p_GlobalNG_RANNode_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_GlobalNG_RANNode_ID->choice_type)
    {
        /*CHOICE_INDEX-1    gNB*/
        case E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB:
        {
            p_e2ap_GlobalNG_RANNode_ID->t = T_e2ap_GlobalNG_RANNode_ID_gNB ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalNG_RANNode_ID->u.gNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalgNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalNG_RANNode_ID->u.gNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalgNB_ID(p_e2ap_GlobalNG_RANNode_ID->u.gNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalgNB_ID(p_asn1_ctx,
                                                    p_e2ap_GlobalNG_RANNode_ID->u.gNB,
                                                    &p_GlobalNG_RANNode_ID->gNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    ng_eNB*/
        case E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB:
        {
            p_e2ap_GlobalNG_RANNode_ID->t = T_e2ap_GlobalNG_RANNode_ID_ng_eNB ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalngeNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ng_eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalngeNB_ID(p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalngeNB_ID(p_asn1_ctx,
                                                    p_e2ap_GlobalNG_RANNode_ID->u.ng_eNB,
                                                    &p_GlobalNG_RANNode_ID->ng_eNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ng_eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceXn                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceXn(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceXn                 *p_e2ap_E2nodeComponentInterfaceXn, //dest
                _e2ap_E2nodeComponentInterfaceXn_t              *p_E2nodeComponentInterfaceXn //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceXn)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceXn",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode global_NG_RAN_Node_ID alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalNG_RANNode_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_NG_RAN_Node_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GlobalNG_RANNode_ID(&p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalNG_RANNode_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID,//dest
                                                &p_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_NG_RAN_Node_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_NG_RAN_Node_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/*****************************************************/
/*    COMPOSE PRIMITIVE GNB_CU_UP_ID                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..68719476735) - GNB_CU_UP_ID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_GNB_CU_UP_ID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_GNB_CU_UP_ID     *p_dest,
                        _e2ap_GNB_CU_UP_ID_t  *p_src
){
    *p_dest = (e2ap_GNB_CU_UP_ID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER GNB_CU_UP_ID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
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
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceE1)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceE1",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode gNB_CU_UP_ID alias-id = 6 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_GNB_CU_UP_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceE1->gNB_CU_UP_ID,
                                                &p_E2nodeComponentInterfaceE1->gNB_CU_UP_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_CU_UP_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode gNB_CU_UP_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/*****************************************************/
/*    COMPOSE PRIMITIVE GNB_DU_ID                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..68719476735) - GNB_DU_ID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_GNB_DU_ID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_GNB_DU_ID     *p_dest,
                        _e2ap_GNB_DU_ID_t  *p_src
){
    *p_dest = (e2ap_GNB_DU_ID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER GNB_DU_ID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceF1                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceF1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceF1                 *p_e2ap_E2nodeComponentInterfaceF1, //dest
                _e2ap_E2nodeComponentInterfaceF1_t              *p_E2nodeComponentInterfaceF1 //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceF1)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceF1",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode gNB_DU_ID alias-id = 6 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_GNB_DU_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceF1->gNB_DU_ID,
                                                &p_E2nodeComponentInterfaceF1->gNB_DU_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_DU_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode gNB_DU_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/*****************************************************/
/*    COMPOSE PRIMITIVE NGENB_DU_ID                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..68719476735) - NGENB_DU_ID*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_NGENB_DU_ID(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_NGENB_DU_ID     *p_dest,
                        _e2ap_NGENB_DU_ID_t  *p_src
){
    *p_dest = (e2ap_NGENB_DU_ID)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER NGENB_DU_ID value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceW1                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceW1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceW1                 *p_e2ap_E2nodeComponentInterfaceW1, //dest
                _e2ap_E2nodeComponentInterfaceW1_t              *p_E2nodeComponentInterfaceW1 //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceW1)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceW1",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode ng_eNB_DU_ID alias-id = 6 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_NGENB_DU_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceW1->ng_eNB_DU_ID,
                                                &p_E2nodeComponentInterfaceW1->ng_eNB_DU_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ng_eNB_DU_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode ng_eNB_DU_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/*****************************************************/
/*    COMPOSE PRIMITIVE MMEname                             */
/*****************************************************/
/* compose primitive - id = 10 - PrintableString (SIZE(1..150, ...)) - MMEname*/
/* ---------------------------------------------------------------------- */
/*  PrintableString (primitive_id = 10)                                   */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_MMEname(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_MMEname     *p_dest,
                        _e2ap_MMEname_t  *p_src
){

    *p_dest = *p_src;
    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug PrintableString MMEname string =%s", __FUNCTION__, p_dest);
    #endif
    return XNAP_SUCCESS;
}
/************************************************************/
/*      SEQUENCE E2nodeComponentInterfaceS1                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentInterfaceS1(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentInterfaceS1                 *p_e2ap_E2nodeComponentInterfaceS1, //dest
                _e2ap_E2nodeComponentInterfaceS1_t              *p_E2nodeComponentInterfaceS1 //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceS1)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceS1",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode mme_name alias-id = 10 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_MMEname(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceS1->mme_name,
                                                &p_E2nodeComponentInterfaceS1->mme_name))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field mme_name",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode mme_name*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/************************************************************/
 /*      CHOICE ENB_ID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */
     // id = 3 - BIT STRING (SIZE (20)) - macro_eNB_ID
 xnap_return_et e2ap_compose_ENB_ID_macro_eNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_macro_eNB_ID                 *p_dest,//dest
                     _e2ap_ENB_ID_macro_eNB_ID_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_macro_eNB_ID numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          
     // id = 3 - BIT STRING (SIZE (28)) - home_eNB_ID
 xnap_return_et e2ap_compose_ENB_ID_home_eNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_home_eNB_ID                 *p_dest,//dest
                     _e2ap_ENB_ID_home_eNB_ID_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_home_eNB_ID numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          
     // id = 3 - BIT STRING (SIZE(18)) - short_Macro_eNB_ID
 xnap_return_et e2ap_compose_ENB_ID_short_Macro_eNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_short_Macro_eNB_ID                 *p_dest,//dest
                     _e2ap_ENB_ID_short_Macro_eNB_ID_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_short_Macro_eNB_ID numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          
     // id = 3 - BIT STRING (SIZE(21)) - long_Macro_eNB_ID
 xnap_return_et e2ap_compose_ENB_ID_long_Macro_eNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_long_Macro_eNB_ID                 *p_dest,//dest
                     _e2ap_ENB_ID_long_Macro_eNB_ID_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENB_ID_long_Macro_eNB_ID numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          

/* 2 - compose choice */
xnap_return_et e2ap_compose_ENB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENB_ID             *p_e2ap_ENB_ID, //dest
                _e2ap_ENB_ID_t          *p_ENB_ID //src
)
{
    p_e2ap_ENB_ID->t =  p_ENB_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENB_ID->choice_type)
    {
        /*CHOICE_INDEX-1    macro_eNB_ID*/
        case E2AP_ENB_ID_e2ap_MACRO_E_NB_ID:
        {
            p_e2ap_ENB_ID->t = T_e2ap_ENB_ID_macro_eNB_ID ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID->u.macro_eNB_ID = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_macro_eNB_ID);
            if(XNAP_P_NULL == p_e2ap_ENB_ID->u.macro_eNB_ID)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field macro_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_macro_eNB_ID(p_asn1_ctx,
                                                   p_e2ap_ENB_ID->u.macro_eNB_ID,
                                                   &p_ENB_ID->macro_eNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field macro_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    home_eNB_ID*/
        case E2AP_ENB_ID_e2ap_HOME_E_NB_ID:
        {
            p_e2ap_ENB_ID->t = T_e2ap_ENB_ID_home_eNB_ID ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID->u.home_eNB_ID = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_home_eNB_ID);
            if(XNAP_P_NULL == p_e2ap_ENB_ID->u.home_eNB_ID)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field home_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_home_eNB_ID(p_asn1_ctx,
                                                   p_e2ap_ENB_ID->u.home_eNB_ID,
                                                   &p_ENB_ID->home_eNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field home_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    short_Macro_eNB_ID*/
        case E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID:
        {
            p_e2ap_ENB_ID->t = T_e2ap_ENB_ID_short_Macro_eNB_ID ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID->u.short_Macro_eNB_ID = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_short_Macro_eNB_ID);
            if(XNAP_P_NULL == p_e2ap_ENB_ID->u.short_Macro_eNB_ID)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field short_Macro_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_short_Macro_eNB_ID(p_asn1_ctx,
                                                   p_e2ap_ENB_ID->u.short_Macro_eNB_ID,
                                                   &p_ENB_ID->short_Macro_eNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field short_Macro_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    long_Macro_eNB_ID*/
        case E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID:
        {
            p_e2ap_ENB_ID->t = T_e2ap_ENB_ID_long_Macro_eNB_ID ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENB_ID->u.long_Macro_eNB_ID = rtxMemAllocType(p_asn1_ctx,e2ap_ENB_ID_long_Macro_eNB_ID);
            if(XNAP_P_NULL == p_e2ap_ENB_ID->u.long_Macro_eNB_ID)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field long_Macro_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_long_Macro_eNB_ID(p_asn1_ctx,
                                                   p_e2ap_ENB_ID->u.long_Macro_eNB_ID,
                                                   &p_ENB_ID->long_Macro_eNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field long_Macro_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}/************************************************************/
/*      SEQUENCE GlobalENB_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_GlobalENB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalENB_ID                 *p_e2ap_GlobalENB_ID, //dest
                _e2ap_GlobalENB_ID_t              *p_GlobalENB_ID //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_GlobalENB_ID)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for GlobalENB_ID",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode pLMN_Identity alias-id = 8 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                &p_e2ap_GlobalENB_ID->pLMN_Identity,
                                                &p_GlobalENB_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode eNB_ID alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_GlobalENB_ID->eNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_ENB_ID);
        if(XNAP_P_NULL == p_e2ap_GlobalENB_ID->eNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_ENB_ID(&p_e2ap_GlobalENB_ID->eNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_ENB_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalENB_ID->eNB_ID,//dest
                                                &p_GlobalENB_ID->eNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode eNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/************************************************************/
 /*      CHOICE ENGNB_ID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */
     // id = 4 - BIT STRING (SIZE (22..32)) - gNB_ID
 xnap_return_et e2ap_compose_ENGNB_ID_gNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENGNB_ID_gNB_ID                 *p_dest,//dest
                     _e2ap_ENGNB_ID_gNB_ID_t              *p_src//src
)
{
    p_dest->numbits = p_src->numbits;
    XNAP_MEMCPY(p_dest->data, p_src->data, sizeof(p_src->data));

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug BIT STRING ENGNB_ID_gNB_ID numbits=%u", __FUNCTION__, p_dest->numbits);
    #endif

    return XNAP_SUCCESS;
}
          

/* 2 - compose choice */
xnap_return_et e2ap_compose_ENGNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_ENGNB_ID             *p_e2ap_ENGNB_ID, //dest
                _e2ap_ENGNB_ID_t          *p_ENGNB_ID //src
)
{
    p_e2ap_ENGNB_ID->t =  p_ENGNB_ID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_ENGNB_ID->choice_type)
    {
        /*CHOICE_INDEX-1    gNB_ID*/
        case E2AP_ENGNB_ID_e2ap_G_NB_ID:
        {
            p_e2ap_ENGNB_ID->t = T_e2ap_ENGNB_ID_gNB_ID ;

            /*==primitive in scope==*/
            /* 1.alloc mem */
            p_e2ap_ENGNB_ID->u.gNB_ID = rtxMemAllocType(p_asn1_ctx,e2ap_ENGNB_ID_gNB_ID);
            if(XNAP_P_NULL == p_e2ap_ENGNB_ID->u.gNB_ID)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            /* 2.compose */
            if(XNAP_FAILURE == e2ap_compose_ENGNB_ID_gNB_ID(p_asn1_ctx,
                                                   p_e2ap_ENGNB_ID->u.gNB_ID,
                                                   &p_ENGNB_ID->gNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}/************************************************************/
/*      SEQUENCE GlobalenGNB_ID                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_GlobalenGNB_ID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_GlobalenGNB_ID                 *p_e2ap_GlobalenGNB_ID, //dest
                _e2ap_GlobalenGNB_ID_t              *p_GlobalenGNB_ID //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_GlobalenGNB_ID)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for GlobalenGNB_ID",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode pLMN_Identity alias-id = 8 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_PLMN_Identity(p_asn1_ctx,
                                                &p_e2ap_GlobalenGNB_ID->pLMN_Identity,
                                                &p_GlobalenGNB_ID->pLMN_Identity))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field pLMN_Identity",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode pLMN_Identity*/

    {  /*SEQ_ELEM-2  Encode gNB_ID alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_GlobalenGNB_ID->gNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_ENGNB_ID);
        if(XNAP_P_NULL == p_e2ap_GlobalenGNB_ID->gNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_ENGNB_ID(&p_e2ap_GlobalenGNB_ID->gNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_ENGNB_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalenGNB_ID->gNB_ID,//dest
                                                &p_GlobalenGNB_ID->gNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode gNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

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
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceX2)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentInterfaceX2",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    if(p_E2nodeComponentInterfaceX2->bitmask & E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT)
    {  /*SEQ_ELEM-1  Encode global_eNB_ID alias-id = -1 - primitive = False*/
    p_e2ap_E2nodeComponentInterfaceX2->m_global_eNB_IDPresent = TRUE; //dungnm23 add -> check xem chuan ko nhe

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalENB_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GlobalENB_ID(&p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalENB_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID,//dest
                                                &p_E2nodeComponentInterfaceX2->global_eNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_eNB_ID*/

    if(p_E2nodeComponentInterfaceX2->bitmask & E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT)
    {  /*SEQ_ELEM-2  Encode global_en_gNB_ID alias-id = -1 - primitive = False*/
    p_e2ap_E2nodeComponentInterfaceX2->m_global_en_gNB_IDPresent = TRUE; //dungnm23 add -> check xem chuan ko nhe

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalenGNB_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_en_gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_GlobalenGNB_ID(&p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalenGNB_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID,//dest
                                                &p_E2nodeComponentInterfaceX2->global_en_gNB_ID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_en_gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode global_en_gNB_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/************************************************************/
 /*      CHOICE E2nodeComponentID                */
 /************************************************************/
// compose choice trong xn thì mẫu là compose_globalNG_RAN_id()
/* 1 - compose primitive intergrate for choice fields */

/* 2 - compose choice */
xnap_return_et e2ap_compose_E2nodeComponentID(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentID             *p_e2ap_E2nodeComponentID, //dest
                _e2ap_E2nodeComponentID_t          *p_E2nodeComponentID //src
)
{
    p_e2ap_E2nodeComponentID->t =  p_E2nodeComponentID->choice_type;
    xnap_return_et retVal = XNAP_SUCCESS;

    switch(p_E2nodeComponentID->choice_type)
    {
        /*CHOICE_INDEX-1    e2nodeComponentInterfaceTypeNG*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeNG ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceNG);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeNG",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceNG(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceNG(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeNG,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeNG))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeNG",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    e2nodeComponentInterfaceTypeXn*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeXn ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceXn);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeXn",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceXn(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceXn(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeXn,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeXn))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeXn",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    e2nodeComponentInterfaceTypeE1*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeE1 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceE1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeE1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceE1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceE1(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeE1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeE1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeE1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    e2nodeComponentInterfaceTypeF1*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeF1 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceF1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeF1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceF1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceF1(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeF1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeF1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeF1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-5    e2nodeComponentInterfaceTypeW1*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeW1 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceW1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeW1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceW1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceW1(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeW1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeW1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeW1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-6    e2nodeComponentInterfaceTypeS1*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeS1 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceS1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeS1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceS1(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceS1(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeS1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeS1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeS1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-7    e2nodeComponentInterfaceTypeX2*/
        case E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2:
        {
            p_e2ap_E2nodeComponentID->t = T_e2ap_E2nodeComponentID_e2nodeComponentInterfaceTypeX2 ;

            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceX2);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeX2",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceX2(p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceX2(p_asn1_ctx,
                                                    p_e2ap_E2nodeComponentID->u.e2nodeComponentInterfaceTypeX2,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeX2))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeX2",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

    }
    return retVal;
}/************************************************************/
/*      SEQUENCE E2nodeComponentConfigurationAck                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
     // id = 13 - ENUMERATED - updateOutcome
      xnap_return_et e2ap_compose_E2nodeComponentConfigurationAck_updateOutcome(
                OSCTXT                       *p_asn1_ctx,
                e2ap_E2nodeComponentConfigurationAck_updateOutcome                 *p_dest,//dest
                _e2ap_E2nodeComponentConfigurationAck_updateOutcome_et              *p_src//src
)
{
    *p_dest = (e2ap_E2nodeComponentConfigurationAck_updateOutcome)*p_src;
    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED E2nodeComponentConfigurationAck_updateOutcome value=%u", __FUNCTION__, *p_dest);
    #endif
    return XNAP_SUCCESS;
}
     


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentConfigurationAck(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentConfigurationAck                 *p_e2ap_E2nodeComponentConfigurationAck, //dest
                _e2ap_E2nodeComponentConfigurationAck_t              *p_E2nodeComponentConfigurationAck //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigurationAck)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentConfigurationAck",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode updateOutcome alias-id = -1 - primitive = True*/

        /*==primitive in scope==*/
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigurationAck_updateOutcome(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigurationAck->updateOutcome,
                                                &p_E2nodeComponentConfigurationAck->updateOutcome))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field updateOutcome",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode updateOutcome*/

    if(p_E2nodeComponentConfigurationAck->bitmask & E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT)
    {  /*SEQ_ELEM-2  Encode failureCause alias-id = -1 - primitive = False*/
    p_e2ap_E2nodeComponentConfigurationAck->m_failureCausePresent = TRUE; //dungnm23 add -> check xem chuan ko nhe

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentConfigurationAck->failureCause = rtxMemAllocType(p_asn1_ctx, e2ap_Cause);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigurationAck->failureCause)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field failureCause",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_Cause(&p_e2ap_E2nodeComponentConfigurationAck->failureCause);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigurationAck->failureCause,//dest
                                                &p_E2nodeComponentConfigurationAck->failureCause)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field failureCause",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode failureCause*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/************************************************************/
/*      SEQUENCE E2nodeComponentConfigAdditionAck_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2nodeComponentConfigAdditionAck_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2nodeComponentConfigAdditionAck_Item                 *p_e2ap_E2nodeComponentConfigAdditionAck_Item, //dest
                _e2ap_E2nodeComponentConfigAdditionAck_Item_t              *p_E2nodeComponentConfigAdditionAck_Item //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigAdditionAck_Item)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2nodeComponentConfigAdditionAck_Item",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode e2nodeComponentInterfaceType alias-id = 13 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceType(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType,
                                                &p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceType",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode e2nodeComponentInterfaceType*/

    {  /*SEQ_ELEM-2  Encode e2nodeComponentID alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_E2nodeComponentID(&p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID,//dest
                                                &p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode e2nodeComponentID*/

    {  /*SEQ_ELEM-3  Encode e2nodeComponentConfigurationAck alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentConfigurationAck);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentConfigurationAck",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_E2nodeComponentConfigurationAck(&p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigurationAck(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck,//dest
                                                &p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentConfigurationAck",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode e2nodeComponentConfigurationAck*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

  
// IE thường -> IE child_of_msg ở file encode ie child of msg rồi
// khả năng kô cần

// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_E2nodeComponentConfigAdditionAck_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_E2nodeComponentConfigAdditionAck_List,
                _e2ap_E2nodeComponentConfigAdditionAck_List_t       *p_E2nodeComponentConfigAdditionAck_List
){
    e2ap_E2nodeComponentConfigAdditionAck_ItemIEs   *p_E2nodeComponentConfigAdditionAck_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_E2nodeComponentConfigAdditionAck_List->id_E2nodeComponentConfigAdditionAck_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_E2nodeComponentConfigAdditionAck_ItemIEs,
                                &p_node_list,
                                &p_E2nodeComponentConfigAdditionAck_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentConfigAdditionAck-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs(p_E2nodeComponentConfigAdditionAck_ItemIEs);
        p_E2nodeComponentConfigAdditionAck_ItemIEs->id = ASN1V_e2ap_id_E2nodeComponentConfigAdditionAck_Item;
        p_E2nodeComponentConfigAdditionAck_ItemIEs->criticality = e2ap_reject;
        p_E2nodeComponentConfigAdditionAck_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_E2nodeComponentConfigAdditionAck_ItemIEs_id_E2nodeComponentConfigAdditionAck_Item;
        p_E2nodeComponentConfigAdditionAck_ItemIEs->value.u._e2apE2nodeComponentConfigAdditionAck_ItemIEs_id_E2nodeComponentConfigAdditionAck_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_Item);
        if(GNB_PNULL==p_E2nodeComponentConfigAdditionAck_ItemIEs->value.u._e2apE2nodeComponentConfigAdditionAck_ItemIEs_id_E2nodeComponentConfigAdditionAck_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeComponentConfigAdditionAck-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAdditionAck_Item(p_asn1_ctx,
                                                p_E2nodeComponentConfigAdditionAck_ItemIEs->value.u._e2apE2nodeComponentConfigAdditionAck_ItemIEs_id_E2nodeComponentConfigAdditionAck_Item,
                                                &p_E2nodeComponentConfigAdditionAck_List->id_E2nodeComponentConfigAdditionAck_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAdditionAck-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_E2nodeComponentConfigAdditionAck_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


/**************************************************/
/* assign_value function for E2setupResponse */
/**************************************************/
#include "harrdcode_for_e2_con_upd_ack.h"
#if 0
void assign_hardcode_value_E2setupResponse(e2ap_E2setupResponse_t* p_E2setupResponse)
{

    return;
}
#endif

/**************************************************/
/*      encode_E2setupResponse                    */
/*                                                */
/**************************************************/
/*
E2setupResponse
    E2setupResponseIEs
        TransactionID
        GlobalRIC-ID
            PLMN-Identity
            ric-ID
        RANfunctionsID-List
            RANfunctionID-ItemIEs
                RANfunctionID-Item
                    RANfunctionID
                    RANfunctionRevision
        RANfunctionsIDcause-List
            RANfunctionIDcause-ItemIEs
                RANfunctionIDcause-Item
                    RANfunctionID
                    Cause
                        CauseRICrequest
                        CauseRICservice
                        CauseE2node
                        CauseTransport
                        CauseProtocol
                        CauseMisc
                        CauseServiceLayer
                            ServiceLayerCause
        E2nodeComponentConfigAdditionAck-List
            E2nodeComponentConfigAdditionAck-ItemIEs
                E2nodeComponentConfigAdditionAck-Item
                    E2nodeComponentInterfaceType
                    E2nodeComponentID
                        E2nodeComponentInterfaceNG
                            AMFName
                                PrintableString
                        E2nodeComponentInterfaceXn
                            GlobalNG-RANNode-ID
                                GlobalgNB-ID
                                    PLMN-Identity
                                    GNB-ID-Choice
                                        gnb-ID
                                GlobalngeNB-ID
                                    PLMN-Identity
                                    ENB-ID-Choice
                                        enb-ID-macro
                                        enb-ID-shortmacro
                                        enb-ID-longmacro
                        E2nodeComponentInterfaceE1
                            GNB-CU-UP-ID
                        E2nodeComponentInterfaceF1
                            GNB-DU-ID
                        E2nodeComponentInterfaceW1
                            NGENB-DU-ID
                        E2nodeComponentInterfaceS1
                            MMEname
                                PrintableString
                        E2nodeComponentInterfaceX2
                            GlobalENB-ID
                                PLMN-Identity
                                ENB-ID
                                    macro-eNB-ID
                                    home-eNB-ID
                                    short-Macro-eNB-ID
                                    long-Macro-eNB-ID
                            GlobalenGNB-ID
                                PLMN-Identity
                                ENGNB-ID
                                    gNB-ID
                    E2nodeComponentConfigurationAck
                        updateOutcome
                        Cause
                            CauseRICrequest
                            CauseRICservice
                            CauseE2node
                            CauseTransport
                            CauseProtocol
                            CauseMisc
                            CauseServiceLayer
                                ServiceLayerCause

*/
xnap_return_et e2ap_encode_E2setupResponse(
                e2ap_E2setupResponse_t* p_E2setupResponse_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_E2setupResponse(p_E2setupResponse_src);
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
        e2ap_pdu.u.successfulOutcome = rtxMemAllocType(&asn1_ctx, e2ap_SuccessfulOutcome);
        if(GNB_PNULL==e2ap_pdu.u.successfulOutcome){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for successfulOutcome",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_SuccessfulOutcome(e2ap_pdu.u.successfulOutcome);
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_E2setup;
        e2ap_pdu.u.successfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.successfulOutcome->value.t = T_E2AP_PDU_Descriptions_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2setupResponse;
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
#if 1
        /*IE-1   encode id_TransactionID - presence = mandatory*/
        {
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
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_TransactionID = &p_E2setupResponse_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-2   encode id_GlobalRIC_ID - presence = mandatory*/
        {
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
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_GlobalRIC_ID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_GlobalRIC_ID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_GlobalRIC_ID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_GlobalRIC_ID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_GlobalRIC_ID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_GlobalRIC_ID(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_GlobalRIC_ID);
            #endif
            //message_name.item_type -> type = GlobalRIC_ID
            if(XNAP_FAILURE == e2ap_compose_GlobalRIC_ID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID,
                                &p_E2setupResponse_src->id_GlobalRIC_ID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field GlobalRIC_ID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field GlobalRIC_ID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-3   encode id_RANfunctionsAccepted - presence = optional*/
        if(p_E2setupResponse_src->bitmask & E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_ACCEPTED_PRESENT)
        {
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
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsAccepted;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_RANfunctionsAccepted;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_RANfunctionsAccepted 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsID_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_RANfunctionsAccepted){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsAccepted",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsID_List(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_RANfunctionsAccepted);
            #endif
            //message_name.item_type -> type = RANfunctionsID_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsID_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted,
                                &p_E2setupResponse_src->id_RANfunctionsAccepted)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsID_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsID_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-4   encode id_RANfunctionsRejected - presence = optional*/
        if(p_E2setupResponse_src->bitmask & E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_REJECTED_PRESENT)
        {
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
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionsRejected;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_RANfunctionsRejected;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_RANfunctionsRejected 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsIDcause_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_RANfunctionsRejected){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsRejected",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsIDcause_List(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_RANfunctionsRejected);
            #endif
            //message_name.item_type -> type = RANfunctionsIDcause_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsIDcause_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected,
                                &p_E2setupResponse_src->id_RANfunctionsRejected)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RANfunctionsIDcause_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RANfunctionsIDcause_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-5   encode id_E2nodeComponentConfigAdditionAck - presence = mandatory*/
        {
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
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeComponentConfigAdditionAck;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2setupResponseIEs_id_E2nodeComponentConfigAdditionAck;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_E2nodeComponentConfigAdditionAck 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_E2nodeComponentConfigAdditionAck){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2nodeComponentConfigAdditionAck",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2nodeComponentConfigAdditionAck_List(p_e2ap_protocolIEs_elem->value.u._e2ap_E2setupResponseIEs_id_E2nodeComponentConfigAdditionAck);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigAdditionAck_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAdditionAck_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck,
                                &p_E2setupResponse_src->id_E2nodeComponentConfigAdditionAck)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAdditionAck_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
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
                rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP_PDU", &e2ap_pdu);
                retVal = XNAP_SUCCESS;
            }
        }

    }while(0);
    rtFreeContext(&asn1_ctx);
    XNAP_UT_TRACE_EXIT();
    return retVal;
}