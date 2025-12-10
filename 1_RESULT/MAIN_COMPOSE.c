#include "main_struct.h"
#include "output_main.h"

/*****************************************************/
/*    PRIMITIVE TransactionID            */
/*****************************************************/
// cpmpose primitive - id = 5 - INTEGER (0..255,...) - TransactionID
  xnap_return_et e2ap_compose_TransactionID(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_TransactionID  *p_dest,//dest
                        _e2ap_TransactionID_t  *p_src//src
)
{
    *p_dest = (e2ap_TransactionID)*p_src;
    return XNAP_SUCCESS;
}
    
/*****************************************************/
/*    PRIMITIVE PLMN_Identity            */
/*****************************************************/
// cpmpose primitive - id = 8 - OCTET STRING (SIZE(3)) - PLMN_Identity
    xnap_return_et e2ap_compose_PLMN_Identity(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_PLMN_Identity  *p_dest,//dest
                        _e2ap_PLMN_Identity_t  *p_src//src
)
{
    p_dest->numocts = PLMN_Identity_MAX_BYTES;
    //memcpy(p_dest->data, p_src->data, p_src->numocts);
    XNAP_MEMCPY(p_dest->data, p_src->PLMN_Identity, PLMN_Identity_MAX_BYTES);
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
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
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
/*    PRIMITIVE RANfunctionID            */
/*****************************************************/
// cpmpose primitive - id = 6 - INTEGER (0..4095) - RANfunctionID
  xnap_return_et e2ap_compose_RANfunctionID(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_RANfunctionID  *p_dest,//dest
                        _e2ap_RANfunctionID_t  *p_src//src
)
{
    *p_dest = (e2ap_RANfunctionID)*p_src;
    return XNAP_SUCCESS;
}
    
/*****************************************************/
/*    PRIMITIVE RANfunctionRevision            */
/*****************************************************/
// cpmpose primitive - id = 6 - INTEGER (0..4095) - RANfunctionRevision
  xnap_return_et e2ap_compose_RANfunctionRevision(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_RANfunctionRevision  *p_dest,//dest
                        _e2ap_RANfunctionRevision_t  *p_src//src
)
{
    *p_dest = (e2ap_RANfunctionRevision)*p_src;
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
                = rtxMemAllocType(p_asn1_ctx, e2ap_RANfunctionID_ItemIEs);
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
/*    PRIMITIVE CauseRICrequest            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseRICrequest
   xnap_return_et e2ap_compose_CauseRICrequest( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseRICrequest  *p_dest,//dest
                        _e2ap_CauseRICrequest_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseRICrequest)*p_src;
    return XNAP_SUCCESS;
}
   
/*****************************************************/
/*    PRIMITIVE CauseRICservice            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseRICservice
   xnap_return_et e2ap_compose_CauseRICservice( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseRICservice  *p_dest,//dest
                        _e2ap_CauseRICservice_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseRICservice)*p_src;
    return XNAP_SUCCESS;
}
   
/*****************************************************/
/*    PRIMITIVE CauseE2node            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseE2node
   xnap_return_et e2ap_compose_CauseE2node( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseE2node  *p_dest,//dest
                        _e2ap_CauseE2node_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseE2node)*p_src;
    return XNAP_SUCCESS;
}
   
/*****************************************************/
/*    PRIMITIVE CauseTransport            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseTransport
   xnap_return_et e2ap_compose_CauseTransport( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseTransport  *p_dest,//dest
                        _e2ap_CauseTransport_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseTransport)*p_src;
    return XNAP_SUCCESS;
}
   
/*****************************************************/
/*    PRIMITIVE CauseProtocol            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseProtocol
   xnap_return_et e2ap_compose_CauseProtocol( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseProtocol  *p_dest,//dest
                        _e2ap_CauseProtocol_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseProtocol)*p_src;
    return XNAP_SUCCESS;
}
   
/*****************************************************/
/*    PRIMITIVE CauseMisc            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - CauseMisc
   xnap_return_et e2ap_compose_CauseMisc( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_CauseMisc  *p_dest,//dest
                        _e2ap_CauseMisc_et  *p_src//src
)
{
    *p_dest = (e2ap_CauseMisc)*p_src;
    return XNAP_SUCCESS;
}
   
/*****************************************************/
/*    PRIMITIVE ServiceLayerCause            */
/*****************************************************/
// cpmpose primitive - id = 9 - OCTET STRING - ServiceLayerCause
     
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

    switch(p_Cause->t)
    {
        /*CHOICE_INDEX-1    ricRequest*/
        case: E2AP_CAUSE_e2ap_RIC_REQUEST:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseRICrequest(p_asn1_ctx,
                                                    &p_e2ap_Cause->ricRequest,
                                                    &p_Cause->ricRequest))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricRequest",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    ricService*/
        case: E2AP_CAUSE_e2ap_RIC_SERVICE:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseRICservice(p_asn1_ctx,
                                                    &p_e2ap_Cause->ricService,
                                                    &p_Cause->ricService))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field ricService",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    e2Node*/
        case: E2AP_CAUSE_e2ap_E2NODE:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseE2node(p_asn1_ctx,
                                                    &p_e2ap_Cause->e2Node,
                                                    &p_Cause->e2Node))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2Node",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    transport*/
        case: E2AP_CAUSE_e2ap_TRANSPORT:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseTransport(p_asn1_ctx,
                                                    &p_e2ap_Cause->transport,
                                                    &p_Cause->transport))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field transport",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-5    protocol*/
        case: E2AP_CAUSE_e2ap_PROTOCOL:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseProtocol(p_asn1_ctx,
                                                    &p_e2ap_Cause->protocol,
                                                    &p_Cause->protocol))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field protocol",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-6    misc*/
        case: E2AP_CAUSE_e2ap_MISC:
        {
             /*==primitive alias== */
            if(XNAP_FAILURE == e2ap_compose_CauseMisc(p_asn1_ctx,
                                                    &p_e2ap_Cause->misc,
                                                    &p_Cause->misc))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field misc",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-7    serviceLayer*/
        case: E2AP_CAUSE_e2ap_SERVICE_LAYER:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_Cause->serviceLayer = rtxMemAllocType(p_asn1_ctx, e2ap_CauseServiceLayer);
            if(XNAP_P_NULL == p_e2ap_Cause->serviceLayer)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field serviceLayer",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_CauseServiceLayer(&p_e2ap_Cause->serviceLayer);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_CauseServiceLayer(p_asn1_ctx,
                                                    &p_e2ap_Cause->serviceLayer,
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
            /* 1.alloc mem */
        p_e2ap_RANfunctionIDcause_Item->cause = rtxMemAllocType(p_asn1_ctx, e2ap_Cause);
        if(XNAP_P_NULL == p_e2ap_RANfunctionIDcause_Item->cause)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field cause",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_Cause(&p_e2ap_RANfunctionIDcause_Item->cause);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                &p_e2ap_RANfunctionIDcause_Item->cause,
                                                &p_RANfunctionIDcause_Item->cause))
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
                = rtxMemAllocType(p_asn1_ctx, e2ap_RANfunctionIDcause_ItemIEs);
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
/*    PRIMITIVE E2nodeComponentInterfaceType            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - E2nodeComponentInterfaceType
   xnap_return_et e2ap_compose_E2nodeComponentInterfaceType( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_E2nodeComponentInterfaceType  *p_dest,//dest
                        _e2ap_E2nodeComponentInterfaceType_et  *p_src//src
)
{
    *p_dest = (e2ap_E2nodeComponentInterfaceType)*p_src;
    return XNAP_SUCCESS;
}
   
/*****************************************************/
/*    PRIMITIVE AMFName            */
/*****************************************************/
// cpmpose primitive - id = 10 - PrintableString (SIZE(1..150, ...)) - AMFName
     xnap_return_et e2ap_compose_AMFName(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_AMFName  *p_dest,//dest
                        _e2ap_AMFName_t  *p_src//src
)
{
// chưa xong
    *p_dest = * p_src;
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
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
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

    switch(p_GNB_ID_Choice->t)
    {
        /*CHOICE_INDEX-1    gnb_ID*/
        case: E2AP_GNB_ID_CHOICE_e2ap_GNB_ID:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_GNB_ID_Choice_gnb_ID(p_asn1_ctx,
                                                   &p_e2ap_GNB_ID_Choice->gnb_ID,
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
            /* 1.alloc mem */
        p_e2ap_GlobalgNB_ID->gnb_id = rtxMemAllocType(p_asn1_ctx, e2ap_GNB_ID_Choice);
        if(XNAP_P_NULL == p_e2ap_GlobalgNB_ID->gnb_id)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gnb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_GNB_ID_Choice(&p_e2ap_GlobalgNB_ID->gnb_id);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GNB_ID_Choice(p_asn1_ctx,
                                                &p_e2ap_GlobalgNB_ID->gnb_id,
                                                &p_GlobalgNB_ID->gnb_id))
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
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
    return XNAP_SUCCESS;
}
           // id = 3 - BIT STRING (SIZE(18)) - enb_ID_shortmacro
 xnap_return_et e2ap_compose_ENB_ID_Choice_enb_ID_shortmacro(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_Choice_enb_ID_shortmacro                 *p_dest,//dest
                     _e2ap_ENB_ID_Choice_enb_ID_shortmacro_t              *p_src//src
)
{
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
    return XNAP_SUCCESS;
}
           // id = 3 - BIT STRING (SIZE(21)) - enb_ID_longmacro
 xnap_return_et e2ap_compose_ENB_ID_Choice_enb_ID_longmacro(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_Choice_enb_ID_longmacro                 *p_dest,//dest
                     _e2ap_ENB_ID_Choice_enb_ID_longmacro_t              *p_src//src
)
{
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
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

    switch(p_ENB_ID_Choice->t)
    {
        /*CHOICE_INDEX-1    enb_ID_macro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_macro(p_asn1_ctx,
                                                   &p_e2ap_ENB_ID_Choice->enb_ID_macro,
                                                   &p_ENB_ID_Choice->enb_ID_macro))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_ID_macro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    enb_ID_shortmacro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_shortmacro(p_asn1_ctx,
                                                   &p_e2ap_ENB_ID_Choice->enb_ID_shortmacro,
                                                   &p_ENB_ID_Choice->enb_ID_shortmacro))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field enb_ID_shortmacro",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    enb_ID_longmacro*/
        case: E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice_enb_ID_longmacro(p_asn1_ctx,
                                                   &p_e2ap_ENB_ID_Choice->enb_ID_longmacro,
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
            /* 1.alloc mem */
        p_e2ap_GlobalngeNB_ID->enb_id = rtxMemAllocType(p_asn1_ctx, e2ap_ENB_ID_Choice);
        if(XNAP_P_NULL == p_e2ap_GlobalngeNB_ID->enb_id)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field enb_id",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_ENB_ID_Choice(&p_e2ap_GlobalngeNB_ID->enb_id);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_ENB_ID_Choice(p_asn1_ctx,
                                                &p_e2ap_GlobalngeNB_ID->enb_id,
                                                &p_GlobalngeNB_ID->enb_id))
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

    switch(p_GlobalNG_RANNode_ID->t)
    {
        /*CHOICE_INDEX-1    gNB*/
        case: E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalNG_RANNode_ID->gNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalgNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalNG_RANNode_ID->gNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalgNB_ID(&p_e2ap_GlobalNG_RANNode_ID->gNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalgNB_ID(p_asn1_ctx,
                                                    &p_e2ap_GlobalNG_RANNode_ID->gNB,
                                                    &p_GlobalNG_RANNode_ID->gNB))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field gNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    ng_eNB*/
        case: E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_GlobalNG_RANNode_ID->ng_eNB = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalngeNB_ID);
            if(XNAP_P_NULL == p_e2ap_GlobalNG_RANNode_ID->ng_eNB)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field ng_eNB",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_GlobalngeNB_ID(&p_e2ap_GlobalNG_RANNode_ID->ng_eNB);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_GlobalngeNB_ID(p_asn1_ctx,
                                                    &p_e2ap_GlobalNG_RANNode_ID->ng_eNB,
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

    {  /*SEQ_ELEM-1  Encode global_NG_RAN_Node_ID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalNG_RANNode_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_NG_RAN_Node_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_GlobalNG_RANNode_ID(&p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalNG_RANNode_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID,
                                                &p_E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_NG_RAN_Node_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_NG_RAN_Node_ID*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

/*****************************************************/
/*    PRIMITIVE GNB_CU_UP_ID            */
/*****************************************************/
// cpmpose primitive - id = 6 - INTEGER (0..68719476735) - GNB_CU_UP_ID
  xnap_return_et e2ap_compose_GNB_CU_UP_ID(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_GNB_CU_UP_ID  *p_dest,//dest
                        _e2ap_GNB_CU_UP_ID_t  *p_src//src
)
{
    *p_dest = (e2ap_GNB_CU_UP_ID)*p_src;
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
/*    PRIMITIVE GNB_DU_ID            */
/*****************************************************/
// cpmpose primitive - id = 6 - INTEGER (0..68719476735) - GNB_DU_ID
  xnap_return_et e2ap_compose_GNB_DU_ID(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_GNB_DU_ID  *p_dest,//dest
                        _e2ap_GNB_DU_ID_t  *p_src//src
)
{
    *p_dest = (e2ap_GNB_DU_ID)*p_src;
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
/*    PRIMITIVE NGENB_DU_ID            */
/*****************************************************/
// cpmpose primitive - id = 6 - INTEGER (0..68719476735) - NGENB_DU_ID
  xnap_return_et e2ap_compose_NGENB_DU_ID(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_NGENB_DU_ID  *p_dest,//dest
                        _e2ap_NGENB_DU_ID_t  *p_src//src
)
{
    *p_dest = (e2ap_NGENB_DU_ID)*p_src;
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
/*    PRIMITIVE MMEname            */
/*****************************************************/
// cpmpose primitive - id = 10 - PrintableString (SIZE(1..150, ...)) - MMEname
     xnap_return_et e2ap_compose_MMEname(
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_MMEname  *p_dest,//dest
                        _e2ap_MMEname_t  *p_src//src
)
{
// chưa xong
    *p_dest = * p_src;
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
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
    return XNAP_SUCCESS;
}
           // id = 3 - BIT STRING (SIZE (28)) - home_eNB_ID
 xnap_return_et e2ap_compose_ENB_ID_home_eNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_home_eNB_ID                 *p_dest,//dest
                     _e2ap_ENB_ID_home_eNB_ID_t              *p_src//src
)
{
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
    return XNAP_SUCCESS;
}
           // id = 3 - BIT STRING (SIZE(18)) - short_Macro_eNB_ID
 xnap_return_et e2ap_compose_ENB_ID_short_Macro_eNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_short_Macro_eNB_ID                 *p_dest,//dest
                     _e2ap_ENB_ID_short_Macro_eNB_ID_t              *p_src//src
)
{
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
    return XNAP_SUCCESS;
}
           // id = 3 - BIT STRING (SIZE(21)) - long_Macro_eNB_ID
 xnap_return_et e2ap_compose_ENB_ID_long_Macro_eNB_ID(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_ENB_ID_long_Macro_eNB_ID                 *p_dest,//dest
                     _e2ap_ENB_ID_long_Macro_eNB_ID_t              *p_src//src
)
{
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
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

    switch(p_ENB_ID->t)
    {
        /*CHOICE_INDEX-1    macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_MACRO_E_NB_ID:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_macro_eNB_ID(p_asn1_ctx,
                                                   &p_e2ap_ENB_ID->macro_eNB_ID,
                                                   &p_ENB_ID->macro_eNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field macro_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    home_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_HOME_E_NB_ID:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_home_eNB_ID(p_asn1_ctx,
                                                   &p_e2ap_ENB_ID->home_eNB_ID,
                                                   &p_ENB_ID->home_eNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field home_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    short_Macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_short_Macro_eNB_ID(p_asn1_ctx,
                                                   &p_e2ap_ENB_ID->short_Macro_eNB_ID,
                                                   &p_ENB_ID->short_Macro_eNB_ID))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field short_Macro_eNB_ID",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    long_Macro_eNB_ID*/
        case: E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENB_ID_long_Macro_eNB_ID(p_asn1_ctx,
                                                   &p_e2ap_ENB_ID->long_Macro_eNB_ID,
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
            /* 1.alloc mem */
        p_e2ap_GlobalENB_ID->eNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_ENB_ID);
        if(XNAP_P_NULL == p_e2ap_GlobalENB_ID->eNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_ENB_ID(&p_e2ap_GlobalENB_ID->eNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_ENB_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalENB_ID->eNB_ID,
                                                &p_GlobalENB_ID->eNB_ID))
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
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
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

    switch(p_ENGNB_ID->t)
    {
        /*CHOICE_INDEX-1    gNB_ID*/
        case: E2AP_ENGNB_ID_e2ap_G_NB_ID:
        {
            /*==primitive in scope==*/
            if(XNAP_FAILURE == e2ap_compose_ENGNB_ID_gNB_ID(p_asn1_ctx,
                                                   &p_e2ap_ENGNB_ID->gNB_ID,
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
            /* 1.alloc mem */
        p_e2ap_GlobalenGNB_ID->gNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_ENGNB_ID);
        if(XNAP_P_NULL == p_e2ap_GlobalenGNB_ID->gNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_ENGNB_ID(&p_e2ap_GlobalenGNB_ID->gNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_ENGNB_ID(p_asn1_ctx,
                                                &p_e2ap_GlobalenGNB_ID->gNB_ID,
                                                &p_GlobalenGNB_ID->gNB_ID))
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

    {  /*SEQ_ELEM-1  Encode global_eNB_ID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalENB_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_GlobalENB_ID(&p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalENB_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceX2->global_eNB_ID,
                                                &p_E2nodeComponentInterfaceX2->global_eNB_ID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field global_eNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode global_eNB_ID*/

    {  /*SEQ_ELEM-2  Encode global_en_gNB_ID alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID = rtxMemAllocType(p_asn1_ctx, e2ap_GlobalenGNB_ID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field global_en_gNB_ID",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_GlobalenGNB_ID(&p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_GlobalenGNB_ID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentInterfaceX2->global_en_gNB_ID,
                                                &p_E2nodeComponentInterfaceX2->global_en_gNB_ID))
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

    switch(p_E2nodeComponentID->t)
    {
        /*CHOICE_INDEX-1    e2nodeComponentInterfaceTypeNG*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeNG = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceNG);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeNG)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeNG",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceNG(&p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeNG);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceNG(p_asn1_ctx,
                                                    &p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeNG,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeNG))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeNG",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-2    e2nodeComponentInterfaceTypeXn*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeXn = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceXn);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeXn)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeXn",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceXn(&p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeXn);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceXn(p_asn1_ctx,
                                                    &p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeXn,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeXn))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeXn",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-3    e2nodeComponentInterfaceTypeE1*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeE1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceE1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeE1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeE1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceE1(&p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeE1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceE1(p_asn1_ctx,
                                                    &p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeE1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeE1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeE1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-4    e2nodeComponentInterfaceTypeF1*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeF1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceF1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeF1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeF1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceF1(&p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeF1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceF1(p_asn1_ctx,
                                                    &p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeF1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeF1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeF1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-5    e2nodeComponentInterfaceTypeW1*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeW1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceW1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeW1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeW1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceW1(&p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeW1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceW1(p_asn1_ctx,
                                                    &p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeW1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeW1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeW1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-6    e2nodeComponentInterfaceTypeS1*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeS1 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceS1);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeS1)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeS1",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceS1(&p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeS1);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceS1(p_asn1_ctx,
                                                    &p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeS1,
                                                    &p_E2nodeComponentID->e2nodeComponentInterfaceTypeS1))
            {
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentInterfaceTypeS1",__FUNCTION__);
                return XNAP_FAILURE;
            }
            break;
        }

        /*CHOICE_INDEX-7    e2nodeComponentInterfaceTypeX2*/
        case: E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2:
        {
            /* == not primitive (SEQ or CHOICE)==*/
                /* 1.alloc mem */
            p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeX2 = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentInterfaceX2);
            if(XNAP_P_NULL == p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeX2)
            {
                XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentInterfaceTypeX2",__FUNCTION__);
                return XNAP_FAILURE;
            }
                /* 2.init */
            asn1Init_e2ap_E2nodeComponentInterfaceX2(&p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeX2);
                /* 3.compose */
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentInterfaceX2(p_asn1_ctx,
                                                    &p_e2ap_E2nodeComponentID->e2nodeComponentInterfaceTypeX2,
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

    {  /*SEQ_ELEM-2  Encode failureCause alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentConfigurationAck->failureCause = rtxMemAllocType(p_asn1_ctx, e2ap_Cause);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigurationAck->failureCause)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field failureCause",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_Cause(&p_e2ap_E2nodeComponentConfigurationAck->failureCause);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_Cause(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigurationAck->failureCause,
                                                &p_E2nodeComponentConfigurationAck->failureCause))
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
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentID);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentID",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_E2nodeComponentID(&p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentID(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID,
                                                &p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field e2nodeComponentID",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-2  Encode e2nodeComponentID*/

    {  /*SEQ_ELEM-3  Encode e2nodeComponentConfigurationAck alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentConfigurationAck);
        if(XNAP_P_NULL == p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field e2nodeComponentConfigurationAck",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_E2nodeComponentConfigurationAck(&p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigurationAck(p_asn1_ctx,
                                                &p_e2ap_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck,
                                                &p_E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck))
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
                = rtxMemAllocType(p_asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_ItemIEs);
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
                e2ap_E2setupResponse_t* p_E2setupResponse,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
)
{

/*
// E2setupResponse.E2setupResponseIEs.TransactionID
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID.ric-ID
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionID
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionRevision
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.RANfunctionID
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseRICrequest
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseRICservice
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseE2node
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseTransport
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseProtocol
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseMisc
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseServiceLayer.ServiceLayerCause
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseServiceLayer
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentInterfaceType
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceNG.AMFName
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceNG
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceE1.GNB-CU-UP-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceE1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceF1.GNB-DU-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceF1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceW1.NGENB-DU-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceW1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceS1.MMEname
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceS1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.updateOutcome
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseRICrequest
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseRICservice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseE2node
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseTransport
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseProtocol
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseMisc
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseServiceLayer.ServiceLayerCause
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseServiceLayer
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List
// E2setupResponse.E2setupResponseIEs
// E2setupResponse

*/
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
        e2ap_pdu.u.successfulOutcome->procedureCode = ASN1V_e2ap_id_E2setup;
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
            /*IE-1   encode id_TransactionID - presence = mandatory*/
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
             p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_TransactionID = p_E2setupResponse->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2setupResponse->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_GlobalRIC_ID - presence = mandatory*/
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
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_GlobalRIC_ID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_GlobalRIC_ID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_GlobalRIC_ID(p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID);
            #endif
            //message_name.item_type -> type = GlobalRIC_ID
            if(XNAP_FAILURE == e2ap_compose_GlobalRIC_ID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_GlobalRIC_ID,
                                &p_E2setupResponse->id_GlobalRIC_ID)){
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
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_RANfunctionsAccepted - presence = optional*/
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
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsID_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsAccepted",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsID_List(p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted);
            #endif
            //message_name.item_type -> type = RANfunctionsID_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsID_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsAccepted,
                                &p_E2setupResponse->id_RANfunctionsAccepted)){
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
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_RANfunctionsRejected - presence = optional*/
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
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected 
                                = rtxMemAllocType(&asn1_ctx, e2ap_RANfunctionsIDcause_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_RANfunctionsRejected",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_RANfunctionsIDcause_List(p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected);
            #endif
            //message_name.item_type -> type = RANfunctionsIDcause_List
            if(XNAP_FAILURE == e2ap_compose_RANfunctionsIDcause_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_RANfunctionsRejected,
                                &p_E2setupResponse->id_RANfunctionsRejected)){
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
#if 1 // thiếu check optional bitmask
        {
            /*IE-5   encode id_E2nodeComponentConfigAdditionAck - presence = mandatory*/
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
            p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigAdditionAck_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2nodeComponentConfigAdditionAck",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2nodeComponentConfigAdditionAck_List(p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigAdditionAck_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAdditionAck_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2setupResponseIEs_id_E2nodeComponentConfigAdditionAck,
                                &p_E2setupResponse->id_E2nodeComponentConfigAdditionAck)){
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