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
    p_dest->numbits = E2AP_XXX;//duugnm23 fix value
    p_dest->data = (OSOCTET*)rtxMemAllocZ(p_asn1_ctx, 20);// dungnm23 check nhe E2AP_xxx_OCTET_SIZE
    if(p_dest->data == NULL)
    {
        XNAP_TRACE(XNAP_ERROR, "dungnm23 %s memory allocation failed in e2ap_compose_TNLinformation_tnlAddress", __FUNCTION__);
        return XNAP_FAILURE;
    }
    XNAP_MEMCPY((void*)p_dest->data, p_src->data, 20);
    return XNAP_SUCCESS;
}

         
     // id = 3 - BIT STRING (SIZE(16)) - tnlPort
 xnap_return_et e2ap_compose_TNLinformation_tnlPort(
                     OSCTXT                       *p_asn1_ctx,
                     e2ap_TNLinformation_tnlPort                 *p_dest,//dest
                     _e2ap_TNLinformation_tnlPort_t              *p_src//src
)
{
    memcpy(p_dest->data, p_src->data, (p_src->numbits +7)/8);// bug check lại xem phải số byte ko nhé
    p_dest->numbits = p_src->numbits;
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

    {  /*SEQ_ELEM-2  Encode tnlPort alias-id = -1 - primitive = True*/
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
/*    PRIMITIVE TNLusage            */
/*****************************************************/
// cpmpose primitive - id = 13 - ENUMERATED - TNLusage
    xnap_return_et e2ap_compose_TNLusage( // compose primitive enum
                        OSCTXT                        *p_asn1_ctx,
                        e2ap_TNLusage  *p_dest,//dest
                        _e2ap_TNLusage_et  *p_src//src
)
{
    *p_dest = (e2ap_TNLusage)*p_src;
    return XNAP_SUCCESS;
}
   
/************************************************************/
/*      SEQUENCE E2connectionUpdate_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2connectionUpdate_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2connectionUpdate_Item                 *p_e2ap_E2connectionUpdate_Item, //dest
                _e2ap_E2connectionUpdate_Item_t              *p_E2connectionUpdate_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode tnlInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_E2connectionUpdate_Item->tnlInformation = rtxMemAllocType(p_asn1_ctx, e2ap_TNLinformation);
        if(XNAP_P_NULL == p_e2ap_E2connectionUpdate_Item->tnlInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_TNLinformation(&p_e2ap_E2connectionUpdate_Item->tnlInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_TNLinformation(p_asn1_ctx,
                                                &p_e2ap_E2connectionUpdate_Item->tnlInformation,
                                                &p_E2connectionUpdate_Item->tnlInformation))
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


/************************************************************/
/*      SEQUENCE E2connectionUpdateRemove_Item                */
/************************************************************/

/* 1- compose primitive intergrate for sequence fields */


/* 2 - compose sequence */
xnap_return_et e2ap_compose_E2connectionUpdateRemove_Item(
                OSCTXT                        *p_asn1_ctx,
                e2ap_E2connectionUpdateRemove_Item                 *p_e2ap_E2connectionUpdateRemove_Item, //dest
                _e2ap_E2connectionUpdateRemove_Item_t              *p_E2connectionUpdateRemove_Item //src
)
{

//cần alloc node

    {  /*SEQ_ELEM-1  Encode tnlInformation alias-id = -1 - primitive = False*/
        /* == not primitive (SEQ or CHOICE)==*/
            /* 1.alloc mem */
        p_e2ap_E2connectionUpdateRemove_Item->tnlInformation = rtxMemAllocType(p_asn1_ctx, e2ap_TNLinformation);
        if(XNAP_P_NULL == p_e2ap_E2connectionUpdateRemove_Item->tnlInformation)
        {
            XNAP_TRACE(XNAP_ERROR  ,"%s: Memory allocation failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
            /* 2.init */
        asn1Init_e2ap_TNLinformation(&p_e2ap_E2connectionUpdateRemove_Item->tnlInformation);
            /* 3.compose */
        if(XNAP_FAILURE == e2ap_compose_TNLinformation(p_asn1_ctx,
                                                &p_e2ap_E2connectionUpdateRemove_Item->tnlInformation,
                                                &p_E2connectionUpdateRemove_Item->tnlInformation))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field tnlInformation",__FUNCTION__);
            return XNAP_FAILURE;
        }
    } /* end SEQ_ELEM-1  Encode tnlInformation*/


    // cần appendnode
    return XNAP_SUCCESS;
}   

  
// IE thường -> IE child_of_msg ở file encode ie child of msg rồi
// khả năng kô cần

// compose single container mau ơ xnap_compose_TAISupport_list()
xnap_return_et e2ap_compose_E2connectionUpdateRemove_List (
                OSCTXT                        *p_asn1_ctx,
                OSRTDList                     *p_e2ap_E2connectionUpdateRemove_List,
                _e2ap_E2connectionUpdateRemove_List_t       *p_E2connectionUpdateRemove_List
){
    e2ap_E2connectionUpdateRemove_ItemIEs   *p_E2connectionUpdateRemove_ItemIEs = NULL;
    OSRTDListNode                           *p_node_list = XNAP_P_NULL;
    UInt16                                   t_count = XNAP_NULL;
    for(t_count = 0; t_count < p_E2connectionUpdateRemove_List->id_E2connectionUpdateRemove_Item_count; t_count++)
    {
        rtxDListAllocNodeAndData(p_asn1_ctx,
                                e2ap_E2connectionUpdateRemove_ItemIEs,
                                &p_node_list,
                                &p_E2connectionUpdateRemove_ItemIEs);
        if(GNB_PNULL==p_node_list){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdateRemove-ItemIEs",__FUNCTION__);
            return XNAP_FAILURE;
        }
        asn1Init_e2ap_E2connectionUpdateRemove_ItemIEs(p_E2connectionUpdateRemove_ItemIEs);
        p_E2connectionUpdateRemove_ItemIEs->id = ASN1V_e2ap_id_E2connectionUpdateRemove_Item;
        p_E2connectionUpdateRemove_ItemIEs->criticality = e2ap_reject;
        p_E2connectionUpdateRemove_ItemIEs->value.t =  T_E2AP_PDU_Contents_e2ap_E2connectionUpdateRemove_ItemIEs_id_E2connectionUpdateRemove_Item;
        p_E2connectionUpdateRemove_ItemIEs->value.u._e2apE2connectionUpdateRemove_ItemIEs_id_E2connectionUpdateRemove_Item
                = rtxMemAllocType(p_asn1_ctx, e2ap_E2connectionUpdateRemove_ItemIEs);
        if(GNB_PNULL==p_E2connectionUpdateRemove_ItemIEs->value.u._e2apE2connectionUpdateRemove_ItemIEs_id_E2connectionUpdateRemove_Item){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdateRemove-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }        

        /*ENCODE FIELD*/
        // phải lấy thông tin sequence mà con của cái single container này :))   -> tạo các hàm bé hơn như PDU í    

        //ENCODE ITEM=============
        if(XNAP_FAILURE == e2ap_compose_E2connectionUpdateRemove_Item(p_asn1_ctx,
                                                p_E2connectionUpdateRemove_ItemIEs->value.u._e2apE2connectionUpdateRemove_ItemIEs_id_E2connectionUpdateRemove_Item,
                                                &p_E2connectionUpdateRemove_List->id_E2connectionUpdateRemove_Item[t_count]))
        {
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdateRemove-ItemIEs",__FUNCTION__);
            rtFreeContext(p_asn1_ctx);
            return XNAP_FAILURE;
        }
        rtxDListAppendNode(p_e2ap_E2connectionUpdateRemove_List, p_node_list);
    }
    return XNAP_SUCCESS;
}


/**************************************************/
/*      encode_E2connectionUpdate                    */
/*                                                */
/**************************************************/
/*
E2connectionUpdate
    E2connectionUpdate-IEs
        TransactionID
        E2connectionUpdate-List
            E2connectionUpdate-ItemIEs
                E2connectionUpdate-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
                    TNLusage
        E2connectionUpdateRemove-List
            E2connectionUpdateRemove-ItemIEs
                E2connectionUpdateRemove-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
        E2connectionUpdate-List
            E2connectionUpdate-ItemIEs
                E2connectionUpdate-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
                    TNLusage

*/
xnap_return_et e2ap_encode_E2connectionUpdate(
                e2ap_E2connectionUpdate_t* p_E2connectionUpdate_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
)
{

/*
// E2connectionUpdate.E2connectionUpdate-IEs.TransactionID
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation.tnlAddress
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation....
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation.tnlPort
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLinformation
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item.TNLusage
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs.E2connectionUpdate-Item
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List.E2connectionUpdate-ItemIEs
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdate-List
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item.TNLinformation.tnlAddress
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item.TNLinformation....
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item.TNLinformation.tnlPort
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item.TNLinformation
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs.E2connectionUpdateRemove-Item
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List.E2connectionUpdateRemove-ItemIEs
// E2connectionUpdate.E2connectionUpdate-IEs.E2connectionUpdateRemove-List
// E2connectionUpdate.E2connectionUpdate-IEs
// E2connectionUpdate

*/
#if 0 // hardcode
    /* gan gi tri cho p_E2connectionUpdate o day*/


#endif


    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_E2connectionUpdate* p_E2connectionUpdate = GNB_PNULL;
    e2ap_E2connectionUpdate_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
    /* Initialize ASN.1 context */
    if(0!=rtInitContext(&asn1_ctx)){
        XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: ASN context initialization failed",__FUNCTION__);
        XNAP_UT_TRACE_ENTER();
        return retVal;
    }do{
        XNAP_MEMSET(&e2ap_pdu,0,sizeof(e2ap_E2AP_PDU));
        /*set PDU type to initing/ SSF/ USSF */
        e2ap_pdu.t = T_e2ap_E2AP_PDU_initiatingMessage;
        XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: PDU type set to initiatingMessage",__FUNCTION__);
        e2ap_pdu.u.initiatingMessage = rtxMemAllocType(&asn1_ctx, e2ap_initiatingMessage);
        if(GNB_PNULL==e2ap_pdu.u.initiatingMessage){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for initiatingMessage",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_initiatingMessage(e2ap_pdu.u.initiatingMessage);
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_E2connectionUpdate;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_reject;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2connectionUpdate;
        p_E2connectionUpdate = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdate);
        if(GNB_PNULL==p_E2connectionUpdate){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for E2connectionUpdate",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for E2connectionUpdate",__FUNCTION__);
        }

        asn1Init_e2ap_E2connectionUpdate(p_E2connectionUpdate);
        e2ap_pdu.u.initiatingMessage->value.u.e2connectionUpdate = p_E2connectionUpdate_src;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_TransactionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_TransactionID = &p_E2connectionUpdate_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_E2connectionUpdateAdd - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2connectionUpdateAdd;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateAdd;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateAdd 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdate_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateAdd){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2connectionUpdateAdd",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2connectionUpdate_List(p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateAdd);
            #endif
            //message_name.item_type -> type = E2connectionUpdate_List
            if(XNAP_FAILURE == e2ap_compose_E2connectionUpdate_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateAdd,
                                &p_E2connectionUpdate_src->id_E2connectionUpdateAdd)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdate_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2connectionUpdate_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_E2connectionUpdateRemove - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2connectionUpdateRemove;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateRemove;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateRemove 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdateRemove_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateRemove){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2connectionUpdateRemove",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2connectionUpdateRemove_List(p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateRemove);
            #endif
            //message_name.item_type -> type = E2connectionUpdateRemove_List
            if(XNAP_FAILURE == e2ap_compose_E2connectionUpdateRemove_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateRemove,
                                &p_E2connectionUpdate_src->id_E2connectionUpdateRemove)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdateRemove_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2connectionUpdateRemove_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_E2connectionUpdateModify - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2connectionUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2connectionUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2connectionUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2connectionUpdateModify;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2connectionUpdate_IEs_id_E2connectionUpdateModify;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateModify 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2connectionUpdate_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateModify){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2connectionUpdateModify",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2connectionUpdate_List(p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateModify);
            #endif
            //message_name.item_type -> type = E2connectionUpdate_List
            if(XNAP_FAILURE == e2ap_compose_E2connectionUpdate_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2connectionUpdate_IEs_id_E2connectionUpdateModify,
                                &p_E2connectionUpdate_src->id_E2connectionUpdateModify)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2connectionUpdate_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2connectionUpdate_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2connectionUpdate->protocolIEs, p_node);
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