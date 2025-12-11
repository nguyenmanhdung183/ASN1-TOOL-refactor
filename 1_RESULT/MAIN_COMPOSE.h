#include "main_struct.h"
#include "output_main.h"

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
}/*****************************************************/
/*    COMPOSE PRIMITIVE ProcedureCode                             */
/*****************************************************/
/* compose primitive - id = 6 - INTEGER (0..255) - ProcedureCode*/
/* ---------------------------------------------------------------------- */
/*  INTEGER A..B hoặc integer N bits (primitive_id = 5,6)                 */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_ProcedureCode(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_ProcedureCode     *p_dest,
                        _e2ap_ProcedureCode_t  *p_src
){
    *p_dest = (e2ap_ProcedureCode)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
        XNAP_TRACE(XNAP_INFO, "%s: dungnm23_compose_debug INTEGER ProcedureCode value=%u", __FUNCTION__, *p_dest);
    #endif

    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE TriggeringMessage                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - TriggeringMessage*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_TriggeringMessage(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_TriggeringMessage     *p_dest,
                        _e2ap_TriggeringMessage_et *p_src
){
    *p_dest = (e2ap_TriggeringMessage)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED TriggeringMessage value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/*****************************************************/
/*    COMPOSE PRIMITIVE Criticality                             */
/*****************************************************/
/* compose primitive - id = 13 - ENUMERATED - Criticality*/
/* ---------------------------------------------------------------------- */
/*  ENUMERATED (primitive_id = 13)                                        */
/* ---------------------------------------------------------------------- */
xnap_return_et e2ap_compose_Criticality(
                        OSCTXT            *p_asn1_ctx,
                        e2ap_Criticality     *p_dest,
                        _e2ap_Criticality_et *p_src
){
    *p_dest = (e2ap_Criticality)*p_src;

    #ifdef E2AP_COMPOSE_DEBUG_DUNGNM23
    XNAP_TRACE(XNAP_INFO, "%s:  dungnm23_compose_debug ENUMERATED Criticality value=%u", __FUNCTION__, *p_dest);
    #endif
    
    return XNAP_SUCCESS;
}
/********************************************/
/* File compose missing: compose_SEQUENCE.c */
/********************************************/

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
            /* 1.alloc mem */
        #if 0 
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
            /* 1.alloc mem */
        #if 0 
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

/************************************************************/
/*      SEQUENCE CriticalityDiagnostics                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_CriticalityDiagnostics(
                OSCTXT                        *p_asn1_ctx,
                e2ap_CriticalityDiagnostics                 *p_e2ap_CriticalityDiagnostics, //dest
                _e2ap_CriticalityDiagnostics_t              *p_CriticalityDiagnostics //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode procedureCode alias-id = 6 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_ProcedureCode(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->procedureCode,
                                                &p_CriticalityDiagnostics->procedureCode))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field procedureCode",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode procedureCode*/

    {  /*SEQ_ELEM-2  Encode triggeringMessage alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_TriggeringMessage(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->triggeringMessage,
                                                &p_CriticalityDiagnostics->triggeringMessage))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field triggeringMessage",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode triggeringMessage*/

    {  /*SEQ_ELEM-3  Encode procedureCriticality alias-id = 13 - primitive = False*/
         /*==primitive alias== */
        if(XNAP_FAILURE == e2ap_compose_Criticality(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->procedureCriticality,
                                                &p_CriticalityDiagnostics->procedureCriticality))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field procedureCriticality",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-3  Encode procedureCriticality*/

    {  /*SEQ_ELEM-4  Encode ricRequestorID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_CriticalityDiagnostics->ricRequestorID = rtxMemAllocType(p_asn1_ctx, e2ap_RICrequestID);
        if(XNAP_P_NULL == p_e2ap_CriticalityDiagnostics->ricRequestorID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ricRequestorID",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_RICrequestID(&p_e2ap_CriticalityDiagnostics->ricRequestorID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_RICrequestID(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->ricRequestorID,//dest
                                                &p_CriticalityDiagnostics->ricRequestorID)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequestorID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-4  Encode ricRequestorID*/

    {  /*SEQ_ELEM-5  Encode iEsCriticalityDiagnostics alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        #if 0 
        p_e2ap_CriticalityDiagnostics->iEsCriticalityDiagnostics = rtxMemAllocType(p_asn1_ctx, e2ap_CriticalityDiagnostics_IE_List);
        if(XNAP_P_NULL == p_e2ap_CriticalityDiagnostics->iEsCriticalityDiagnostics)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field iEsCriticalityDiagnostics",__FUNCTION__);
            return XNAP_FAILURE;
        }
        #endif
            /* 2.init */
        asn1Init_e2ap_CriticalityDiagnostics_IE_List(&p_e2ap_CriticalityDiagnostics->iEsCriticalityDiagnostics);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_CriticalityDiagnostics_IE_List(p_asn1_ctx,
                                                &p_e2ap_CriticalityDiagnostics->iEsCriticalityDiagnostics,//dest
                                                &p_CriticalityDiagnostics->iEsCriticalityDiagnostics)) //src
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field iEsCriticalityDiagnostics",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-5  Encode iEsCriticalityDiagnostics*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/**************************************************/
/* assign_value function for RICqueryFailure */
/**************************************************/
void assign_hardcode_value_RICqueryFailure(e2ap_RICqueryFailure_t* p_RICqueryFailure)
{
// RICqueryFailure.RICqueryFailure-IEs.RICrequestID.ricRequestorID
// RICqueryFailure.RICqueryFailure-IEs.RICrequestID.ricInstanceID
// RICqueryFailure.RICqueryFailure-IEs.RICrequestID
// RICqueryFailure.RICqueryFailure-IEs.RANfunctionID
// RICqueryFailure.RICqueryFailure-IEs.Cause.CauseRICrequest
// RICqueryFailure.RICqueryFailure-IEs.Cause.CauseRICservice
// RICqueryFailure.RICqueryFailure-IEs.Cause.CauseE2node
// RICqueryFailure.RICqueryFailure-IEs.Cause.CauseTransport
// RICqueryFailure.RICqueryFailure-IEs.Cause.CauseProtocol
// RICqueryFailure.RICqueryFailure-IEs.Cause.CauseMisc
// RICqueryFailure.RICqueryFailure-IEs.Cause.CauseServiceLayer.ServiceLayerCause
// RICqueryFailure.RICqueryFailure-IEs.Cause.CauseServiceLayer
// RICqueryFailure.RICqueryFailure-IEs.Cause
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics.ProcedureCode
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics.TriggeringMessage
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics.Criticality
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics.RICrequestID.ricRequestorID
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics.RICrequestID.ricInstanceID
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics.RICrequestID
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List.SEQUENCE
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics.CriticalityDiagnostics-IE-List
// RICqueryFailure.RICqueryFailure-IEs.CriticalityDiagnostics
// RICqueryFailure.RICqueryFailure-IEs
// RICqueryFailure


    return;
}


/**************************************************/
/*      encode_RICqueryFailure                    */
/*                                                */
/**************************************************/
/*
RICqueryFailure
    RICqueryFailure-IEs
        RICrequestID
            ricRequestorID
            ricInstanceID
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
        CriticalityDiagnostics
            ProcedureCode
            TriggeringMessage
            Criticality
            RICrequestID
                ricRequestorID
                ricInstanceID
            CriticalityDiagnostics-IE-List
                SEQUENCE

*/
xnap_return_et e2ap_encode_RICqueryFailure(
                e2ap_RICqueryFailure_t* p_RICqueryFailure_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_RICqueryFailure(p_RICqueryFailure_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_RICqueryFailure* p_RICqueryFailure = GNB_PNULL;
    e2ap_RICqueryFailure_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
    /* Initialize ASN.1 context */
    if(0!=rtInitContext(&asn1_ctx)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: ASN context initialization failed",__FUNCTION__);
        XNAP_UT_TRACE_ENTER();
        return retVal;
    }do{
        XNAP_MEMSET(&e2ap_pdu,0,sizeof(e2ap_E2AP_PDU));
        /*set PDU type to initing/ SSF/ USSF */
        e2ap_pdu.t = T_e2ap_E2AP_PDU_unsuccessfulOutcome;
        XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: PDU type set to unsuccessfulOutcome",__FUNCTION__);
        e2ap_pdu.u.unsuccessfulOutcome = rtxMemAllocType(&asn1_ctx, e2ap_UnsuccessfulOutcome);
        if(GNB_PNULL==e2ap_pdu.u.unsuccessfulOutcome){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for unsuccessfulOutcome",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_UnsuccessfulOutcome(e2ap_pdu.u.unsuccessfulOutcome);
        e2ap_pdu.u.unsuccessfulOutcome->procedureCode = ASN1V_e2ap_id_RICquery;
        e2ap_pdu.u.unsuccessfulOutcome->criticality = e2ap_reject;
        e2ap_pdu.u.unsuccessfulOutcome->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_RICqueryFailure;
        p_RICqueryFailure = rtxMemAllocType(&asn1_ctx, e2ap_RICqueryFailure);
        if(GNB_PNULL==p_RICqueryFailure){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for RICqueryFailure",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for RICqueryFailure",__FUNCTION__);
        }

        asn1Init_e2ap_RICqueryFailure(p_RICqueryFailure);
        e2ap_pdu.u.unsuccessfulOutcome->value.u.ricQuery = p_RICqueryFailure;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_RICrequestID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICqueryFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICqueryFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICqueryFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RICrequestID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_RICrequestID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_RICrequestID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RICrequestID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_RICrequestID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RICrequestID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RICrequestID(p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_RICrequestID);
            #endif
            //message_name.item_type -> type = RICrequestID
            if(XNAP_FAILURE == e2ap_compose_RICrequestID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_RICrequestID,
                                &p_RICqueryFailure_src->id_RICrequestID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field RICrequestID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field RICrequestID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICqueryFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_RANfunctionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICqueryFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICqueryFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICqueryFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_RANfunctionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_RANfunctionID;
             p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_RANfunctionID = &p_RICqueryFailure_src->id_RANfunctionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICqueryFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_Cause - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICqueryFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICqueryFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICqueryFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_Cause;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_Cause;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_Cause 
                                = rtxMemAllocType(&asn1_ctx, e2ap_Cause);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_Cause){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_Cause",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_Cause(p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_Cause);
            #endif
            //message_name.item_type -> type = Cause
            if(XNAP_FAILURE == e2ap_compose_Cause(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_Cause,
                                &p_RICqueryFailure_src->id_Cause)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field Cause",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field Cause",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICqueryFailure->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_CriticalityDiagnostics - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_RICqueryFailure_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_RICqueryFailure_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_RICqueryFailure_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_CriticalityDiagnostics;
            p_e2ap_protocolIEs_elem->criticality = e2ap_ignore;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_RICqueryFailure_IEs_id_CriticalityDiagnostics;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_CriticalityDiagnostics 
                                = rtxMemAllocType(&asn1_ctx, e2ap_CriticalityDiagnostics);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_CriticalityDiagnostics){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_CriticalityDiagnostics",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_CriticalityDiagnostics(p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_CriticalityDiagnostics);
            #endif
            //message_name.item_type -> type = CriticalityDiagnostics
            if(XNAP_FAILURE == e2ap_compose_CriticalityDiagnostics(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apRICqueryFailure_IEs_id_CriticalityDiagnostics,
                                &p_RICqueryFailure_src->id_CriticalityDiagnostics)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field CriticalityDiagnostics",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field CriticalityDiagnostics",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_RICqueryFailure->protocolIEs, p_node);
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