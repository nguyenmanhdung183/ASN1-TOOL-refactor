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

/*****************************************************/
/*    COMPOSE PRIMITIVE TNLusage                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - TNLusage*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_TNLusage(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_TNLusage     *p_dest,
                        _e2ap_TNLusage_et *p_src
){
    *p_dest = (e2ap_TNLusage)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED TNLusage value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/************************************************************/
/*      SEQUENCE E2connectionUpdate_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
}


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2connectionUpdate_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2connectionUpdate_Item                 *p_e2ap_E2connectionUpdate_Item, //dest
                _e2ap_E2connectionUpdate_Item_t              *p_E2connectionUpdate_Item //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2connectionUpdate_Item)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2connectionUpdate_Item",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode tnlInformation alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2connectionUpdate_Item->tnlInformation = rtxMemAllocType(p_asn1_ctx, e2ap_TNLinformation);
        if(XNAP_P_NULL == p_e2ap_E2connectionUpdate_Item->tnlInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_TNLinformation(&p_e2ap_E2connectionUpdate_Item->tnlInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_TNLinformation(p_asn1_ctx,
                                                &p_e2ap_E2connectionUpdate_Item->tnlInformation,//dest
                                                &p_E2connectionUpdate_Item->tnlInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode tnlInformation*/

    {  /*SEQ_ELEM-2  Encode tnlUsage alias-id = 13 - primitive = False*/

         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_TNLusage(p_asn1_ctx,
                                                &p_e2ap_E2connectionUpdate_Item->tnlUsage,
                                                &p_E2connectionUpdate_Item->tnlUsage))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlUsage",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode tnlUsage*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

  
// IE thường -> IE child_of_msg ở file encode ie child of msg rồi
// khả năng kô cần

// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_E2connectionUpdate_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_E2connectionUpdate_List,
                _e2ap_E2connectionUpdate_List_t       *p_E2connectionUpdate_List
){
    e2ap_E2connectionUpdate_ItemIEs   *p_E2connectionUpdate_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_E2connectionUpdate_List->id_E2connectionUpdate_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_E2connectionUpdate_ItemIEs,
                                &p_node_list,
                                &p_E2connectionUpdate_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_E2connectionUpdate_ItemIEs(p_E2connectionUpdate_ItemIEs);
        p_E2connectionUpdate_ItemIEs->id = ASN1V_e2ap_id_E2connectionUpdate_Item;
        p_E2connectionUpdate_ItemIEs->criticality = e2ap_reject;
        p_E2connectionUpdate_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item;
        p_E2connectionUpdate_ItemIEs->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_E2connectionUpdate_ItemIEs);
        if(GNB_PNULL==p_E2connectionUpdate_ItemIEs->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_E2connectionUpdate_Item(p_asn1_ctx,
                                                p_E2connectionUpdate_ItemIEs->value.u._e2apE2connectionUpdate_ItemIEs_id_E2connectionUpdate_Item,
                                                &p_E2connectionUpdate_List->id_E2connectionUpdate_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdate-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_E2connectionUpdate_List, p_node_list);
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
}


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
/*      SEQUENCE E2connectionSetupFailed_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */
}


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2connectionSetupFailed_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2connectionSetupFailed_Item                 *p_e2ap_E2connectionSetupFailed_Item, //dest
                _e2ap_E2connectionSetupFailed_Item_t              *p_E2connectionSetupFailed_Item //src
)
{

//cần alloc node
    XNAP_UT_TRACE_ENTER();
    if(XNAP_P_NULL == p_e2ap_E2connectionSetupFailed_Item)
    {
        XNAP_TRACE(XNAP_ERROR  ,"%s: dungnm23 pointer not avlb for E2connectionSetupFailed_Item",__FUNCTION__);
        XNAP_UT_TRACE_EXIT();
        return XNAP_FAILURE;
    }
    /* START COMPOSE SEQ FIELDS */
    {  /*SEQ_ELEM-1  Encode tnlInformation alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2connectionSetupFailed_Item->tnlInformation = rtxMemAllocType(p_asn1_ctx, e2ap_TNLinformation);
        if(XNAP_P_NULL == p_e2ap_E2connectionSetupFailed_Item->tnlInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_TNLinformation(&p_e2ap_E2connectionSetupFailed_Item->tnlInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_TNLinformation(p_asn1_ctx,
                                                &p_e2ap_E2connectionSetupFailed_Item->tnlInformation,//dest
                                                &p_E2connectionSetupFailed_Item->tnlInformation)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode tnlInformation*/

    {  /*SEQ_ELEM-2  Encode cause alias-id = -1 - primitive = False*/

        /* == not primitive (SEQ or CHOICE)==*/
        #if 0 
            /* 1.alloc mem */
        p_e2ap_E2connectionSetupFailed_Item->cause = rtxMemAllocType(p_asn1_ctx, e2ap_Cause);
        if(XNAP_P_NULL == p_e2ap_E2connectionSetupFailed_Item->cause)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_Cause(&p_e2ap_E2connectionSetupFailed_Item->cause);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                &p_e2ap_E2connectionSetupFailed_Item->cause,//dest
                                                &p_E2connectionSetupFailed_Item->cause)) //src
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
xnap_return_et e2ap_compose_E2connectionSetupFailed_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_E2connectionSetupFailed_List,
                _e2ap_E2connectionSetupFailed_List_t       *p_E2connectionSetupFailed_List
){
    e2ap_E2connectionSetupFailed_ItemIEs   *p_E2connectionSetupFailed_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_E2connectionSetupFailed_List->id_E2connectionSetupFailed_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_E2connectionSetupFailed_ItemIEs,
                                &p_node_list,
                                &p_E2connectionSetupFailed_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionSetupFailed-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_E2connectionSetupFailed_ItemIEs(p_E2connectionSetupFailed_ItemIEs);
        p_E2connectionSetupFailed_ItemIEs->id = ASN1V_e2ap_id_E2connectionSetupFailed_Item;
        p_E2connectionSetupFailed_ItemIEs->criticality = e2ap_reject;
        p_E2connectionSetupFailed_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_E2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item;
        p_E2connectionSetupFailed_ItemIEs->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_E2connectionSetupFailed_ItemIEs);
        if(GNB_PNULL==p_E2connectionSetupFailed_ItemIEs->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionSetupFailed-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_E2connectionSetupFailed_Item(p_asn1_ctx,
                                                p_E2connectionSetupFailed_ItemIEs->value.u._e2apE2connectionSetupFailed_ItemIEs_id_E2connectionSetupFailed_Item,
                                                &p_E2connectionSetupFailed_List->id_E2connectionSetupFailed_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionSetupFailed-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_E2connectionSetupFailed_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


/**************************************************/
/* assign_value function for E2connectionUpdateAcknowledge */
/**************************************************/
#include "harrdcode_for_e2_con_upd_ack.h"
#if 0
void assign_hardcode_value_E2connectionUpdateAcknowledge(e2ap_E2connectionUpdateAcknowledge_t* p_E2connectionUpdateAcknowledge)
{
// E2connectionUpdateAcknowledge
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause.CauseE2node
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause.CauseMisc
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause.CauseProtocol
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause.CauseRICrequest
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause.CauseRICservice
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause.CauseServiceLayer
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause.CauseServiceLayer.ServiceLayerCause
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.Cause.CauseTransport
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.TNLinformation
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.TNLinformation....
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.TNLinformation.tnlAddress
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionSetupFailed-List.E2connectionSetupFailed-ItemIEs.E2connectionSetupFailed-Item.TNLinformation.tnlPort
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionUpdate-List
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation....
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation.tnlAddress
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation.tnlPort
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLusage
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.TransactionID

    return;
}
#endif

/**************************************************/
/*      encode_E2connectionUpdateAcknowledge                    */
/*                                                */
/**************************************************/
/*
E2connectionUpdateAcknowledge
    E2connectionUpdateAck-IEs
        TransactionID
        E2connectionUpdate-List
            E2connectionUpdate-ItemIEs
                E2connectionUpdate-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
                    TNLusage
        E2connectionSetupFailed-List
            E2connectionSetupFailed-ItemIEs
                E2connectionSetupFailed-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
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
xnap_return_et e2ap_encode_E2connectionUpdateAcknowledge(
                e2ap_E2connectionUpdateAcknowledge_t* p_E2connectionUpdateAcknowledge_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_E2connectionUpdateAcknowledge(p_E2connectionUpdateAcknowledge_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_E2connectionUpdateAcknowledge* p_E2connectionUpdateAcknowledge = GNB_PNULL;
    e2ap_E2connectionUpdateAcknowledge_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_E2connectionUpdate;
        e2ap_pdu.u.successfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.successfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2connectionUpdateAcknowledge;
        p_E2connectionUpdateAcknowledge = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdateAcknowledge);
        if(GNB_PNULL==p_E2connectionUpdateAcknowledge){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for E2connectionUpdateAcknowledge",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for E2connectionUpdateAcknowledge",__FUNCTION__);
        }

        asn1Init_e2ap_E2connectionUpdateAcknowledge(p_E2connectionUpdateAcknowledge);
        e2ap_pdu.u.successfulOutcome->value.u.e2connectionUpdate = p_E2connectionUpdateAcknowledge;

        /* Fill ProtocolIEs */
#if 1
        /*IE-1   encode id_TransactionID - presence = mandatory*/
        {
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdateAcknowledge_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdateAcknowledge_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2ap_E2connectionUpdateAck_IEs_id_TransactionID = &p_E2connectionUpdateAcknowledge_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdateAcknowledge->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-2   encode id_E2connectionSetup - presence = optional*/
        if(p_E2connectionUpdateAcknowledge_src->bitmask & E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_PRESENT)
        {
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdateAcknowledge_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdateAcknowledge_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2connectionSetup;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdateAck_IEs_id_E2connectionSetup 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdate_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdateAck_IEs_id_E2connectionSetup){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2connectionSetup",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2connectionUpdate_List(p_e2ap_protocolIEs_elem->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetup);
            #endif
            //message_name.item_type -> type = E2connectionUpdate_List
            if(XNAP_FAILURE == e2ap_compose_E2connectionUpdate_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdateAck_IEs_id_E2connectionSetup,
                                &p_E2connectionUpdateAcknowledge_src->id_E2connectionSetup)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdate_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2connectionUpdate_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdateAcknowledge->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1
        /*IE-3   encode id_E2connectionSetupFailed - presence = optional*/
        if(p_E2connectionUpdateAcknowledge_src->bitmask & E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_FAILED_PRESENT)
        {
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdateAcknowledge_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdateAcknowledge_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdateAcknowledge_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2connectionSetupFailed;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdateAck_IEs_id_E2connectionSetupFailed 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionSetupFailed_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdateAck_IEs_id_E2connectionSetupFailed){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2connectionSetupFailed",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2connectionSetupFailed_List(p_e2ap_protocolIEs_elem->value.u._e2ap_E2connectionUpdateAck_IEs_id_E2connectionSetupFailed);
            #endif
            //message_name.item_type -> type = E2connectionSetupFailed_List
            if(XNAP_FAILURE == e2ap_compose_E2connectionSetupFailed_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdateAck_IEs_id_E2connectionSetupFailed,
                                &p_E2connectionUpdateAcknowledge_src->id_E2connectionSetupFailed)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionSetupFailed_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2connectionSetupFailed_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdateAcknowledge->protocolIEs, p_node);
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