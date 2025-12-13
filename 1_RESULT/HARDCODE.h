#ifndef ASSIGN_HARDCODE_E2SETUP_RESPONSE_H
#define ASSIGN_HARDCODE_E2SETUP_RESPONSE_H
#include<stdio.h>
#include"output_main.h"
#include "MAIN_STRUCT.h"

// E2setupResponse
// E2setupResponse.E2setupResponseIEs
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseE2node
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseMisc
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseProtocol
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseRICrequest
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseRICservice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseServiceLayer
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseServiceLayer.ServiceLayerCause
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.Cause.CauseTransport
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentConfigurationAck.updateOutcome
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceE1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceE1.GNB-CU-UP-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceF1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceF1.GNB-DU-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceNG
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceNG.AMFName
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceS1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceS1.MMEname
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceW1
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceW1.NGENB-DU-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.E2nodeComponentConfigAdditionAck-List.E2nodeComponentConfigAdditionAck-ItemIEs.E2nodeComponentConfigAdditionAck-Item.E2nodeComponentInterfaceType
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID.PLMN-Identity
// E2setupResponse.E2setupResponseIEs.GlobalRIC-ID.ric-ID
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionID
// E2setupResponse.E2setupResponseIEs.RANfunctionsID-List.RANfunctionID-ItemIEs.RANfunctionID-Item.RANfunctionRevision
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseE2node
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseMisc
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseProtocol
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseRICrequest
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseRICservice
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseServiceLayer
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseServiceLayer.ServiceLayerCause
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.Cause.CauseTransport
// E2setupResponse.E2setupResponseIEs.RANfunctionsIDcause-List.RANfunctionIDcause-ItemIEs.RANfunctionIDcause-Item.RANfunctionID
// E2setupResponse.E2setupResponseIEs.TransactionID
void assign_hardcode_value_E2setupResponse(e2ap_E2setupResponse_t* p_E2setupResponse)
{    
    /*============== Hardcode IE: id_TransactionID ==============*/
    //hc-p_E2setupResponse->id_TransactionID - alias primitive - pid = 5 - INTEGER - min:0 - max:255
    p_E2setupResponse->id_TransactionID = 127;// change integer here

    /*============== Hardcode IE: id_GlobalRIC_ID ==============*/
    /*=== SEQUENCE - GlobalRIC_ID ===*/
    //hc-sequence-ELEM 1: GlobalRIC_ID->pLMN_Identity - alias = 8
    //hc-pLMN_Identity - alias primitive - pid = 8 - OCTET STRING
    OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2setupResponse->id_GlobalRIC_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    XNAP_MEMCPY(p_E2setupResponse->id_GlobalRIC_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here

    //hc-sequence-ELEM 2: GlobalRIC_ID->ric_ID - alias = -1
    //hc-ric_ID - primitive in scope - pid = 3 - BIT STRING
    OSOCTET temp_buff_for_ric_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2setupResponse->id_GlobalRIC_ID.ric_ID.numbits = 8*sizeof(temp_buff_for_ric_ID);
    XNAP_MEMCPY(p_E2setupResponse->id_GlobalRIC_ID.ric_ID.data, temp_buff_for_ric_ID, sizeof(temp_buff_for_ric_ID));

    /*=== END SEQUENCE - GlobalRIC_ID ===*/
    /*============== Hardcode IE: id_RANfunctionsAccepted ==============*/
    p_E2setupResponse->bitmask = E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_ACCEPTED_PRESENT;
    p_E2setupResponse->id_RANfunctionsAccepted.id_RANfunctionID_Item_count = 1;
    /*=== SEQUENCE - RANfunctionID_Item ===*/
    //hc-sequence-ELEM 1: RANfunctionID_Item->ranFunctionID - alias = 6
    //hc-ranFunctionID - alias primitive - pid = 6 - INTEGER - min:0 - max:4095
    p_E2setupResponse->id_RANfunctionsAccepted.id_RANfunctionID_Item[0].ranFunctionID = 2047;// change integer here

    //hc-sequence-ELEM 2: RANfunctionID_Item->ranFunctionRevision - alias = 6
    //hc-ranFunctionRevision - alias primitive - pid = 6 - INTEGER - min:0 - max:4095
    p_E2setupResponse->id_RANfunctionsAccepted.id_RANfunctionID_Item[0].ranFunctionRevision = 2047;// change integer here

    /*=== END SEQUENCE - RANfunctionID_Item ===*/
    /*============== Hardcode IE: id_RANfunctionsRejected ==============*/
    p_E2setupResponse->bitmask = E2AP_E2SETUP_RESPONSE_e2ap_ID_RANFUNCTIONS_REJECTED_PRESENT;
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item_count = 1;
    /*=== SEQUENCE - RANfunctionIDcause_Item ===*/
    //hc-sequence-ELEM 1: RANfunctionIDcause_Item->ranFunctionID - alias = 6
    //hc-ranFunctionID - alias primitive - pid = 6 - INTEGER - min:0 - max:4095
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].ranFunctionID = 2047;// change integer here

    //hc-sequence-ELEM 2: RANfunctionIDcause_Item->cause - alias = -1
    /*=== CHOICE - Cause ===*/
    #if 1 //hc-CHOICE-ELEM 1: Cause->ricRequest - alias = 13
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    //hc-CauseRICrequest
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 2: Cause->ricService - alias = 13
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    //hc-CauseRICservice
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 3: Cause->e2Node - alias = 13
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    //hc-CauseE2node
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 4: Cause->transport - alias = 13
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    //hc-CauseTransport
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 5: Cause->protocol - alias = 13
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    //hc-CauseProtocol
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 6: Cause->misc - alias = 13
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_MISC;
    //hc-CauseMisc
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 7: Cause->serviceLayer - alias = -1
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    /*=== SEQUENCE - CauseServiceLayer ===*/
    //hc-sequence-ELEM 1: CauseServiceLayer->serviceLayerCause - alias = 9
    //hc-serviceLayerCause - alias primitive - pid = 9 - OCTET STRING
    OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    XNAP_MEMCPY(p_E2setupResponse->id_RANfunctionsRejected.id_RANfunctionIEcause_Item[0].cause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here

    /*=== END SEQUENCE - CauseServiceLayer ===*/
    #endif
    /*=== END CHOICE - Cause ===*/
    /*=== END SEQUENCE - RANfunctionIDcause_Item ===*/
    /*============== Hardcode IE: id_E2nodeComponentConfigAdditionAck ==============*/
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item_count = 1;
    /*=== SEQUENCE - E2nodeComponentConfigAdditionAck_Item ===*/
    //hc-sequence-ELEM 1: E2nodeComponentConfigAdditionAck_Item->e2nodeComponentInterfaceType - alias = 13
    //hc-E2nodeComponentInterfaceType
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentInterfaceType = E2AP_E2NODE_COMPONENT_INTERFACE_TYPE_NG; // change enum value here
    //hc-sequence-ELEM 2: E2nodeComponentConfigAdditionAck_Item->e2nodeComponentID - alias = -1
    /*=== CHOICE - E2nodeComponentID ===*/
    #if 1 //hc-CHOICE-ELEM 1: E2nodeComponentID->e2nodeComponentInterfaceTypeNG - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_NG;
    /*=== SEQUENCE - E2nodeComponentInterfaceNG ===*/
    //hc-sequence-ELEM 1: E2nodeComponentInterfaceNG->amf_name - alias = 10
    //hc-amf_name - alias primitive - pid = 10 Printable STRING
    XNAP_STRCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeNG.amf_name, "hardcoded_string_value"); // change printable string here

    /*=== END SEQUENCE - E2nodeComponentInterfaceNG ===*/
    #endif
    #if 0 //hc-choice-ELEM 2: E2nodeComponentID->e2nodeComponentInterfaceTypeXn - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_XN;
    /*=== SEQUENCE - E2nodeComponentInterfaceXn ===*/
    //hc-sequence-ELEM 1: E2nodeComponentInterfaceXn->global_NG_RAN_Node_ID - alias = -1
    /*=== CHOICE - GlobalNG_RANNode_ID ===*/
    #if 1 //hc-CHOICE-ELEM 1: GlobalNG_RANNode_ID->gNB - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_G_NB;
    /*=== SEQUENCE - GlobalgNB_ID ===*/
    //hc-sequence-ELEM 1: GlobalgNB_ID->plmn_id - alias = 8
    //hc-plmn_id - alias primitive - pid = 8 - OCTET STRING
    OSOCTET temp_buff_for_plmn_id[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.plmn_id.data, temp_buff_for_plmn_id, sizeof(temp_buff_for_plmn_id)); // change octetstring data here

    //hc-sequence-ELEM 2: GlobalgNB_ID->gnb_id - alias = -1
    /*=== CHOICE - GNB_ID_Choice ===*/
    #if 1 //hc-CHOICE-ELEM 1: GNB_ID_Choice->gnb_ID - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.choice_type = E2AP_GNB_ID_CHOICE_e2ap_GNB_ID;
    //hc-gnb_ID - primitive in scope - pid = 4 - BIT STRING
    OSOCTET temp_buff_for_gnb_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.numbits = 8*sizeof(temp_buff_for_gnb_ID);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.gNB.gnb_id.gnb_ID.data, temp_buff_for_gnb_ID, sizeof(temp_buff_for_gnb_ID));

    #endif
    /*=== END CHOICE - GNB_ID_Choice ===*/
    /*=== END SEQUENCE - GlobalgNB_ID ===*/
    #endif
    #if 0 //hc-choice-ELEM 2: GlobalNG_RANNode_ID->ng_eNB - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.choice_type = E2AP_GLOBAL_NG_RANNODE_ID_e2ap_NG_E_NB;
    /*=== SEQUENCE - GlobalngeNB_ID ===*/
    //hc-sequence-ELEM 1: GlobalngeNB_ID->plmn_id - alias = 8
    //hc-plmn_id - alias primitive - pid = 8 - OCTET STRING
    OSOCTET temp_buff_for_plmn_id[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.numocts = sizeof(temp_buff_for_plmn_id);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.plmn_id.data, temp_buff_for_plmn_id, sizeof(temp_buff_for_plmn_id)); // change octetstring data here

    //hc-sequence-ELEM 2: GlobalngeNB_ID->enb_id - alias = -1
    /*=== CHOICE - ENB_ID_Choice ===*/
    #if 1 //hc-CHOICE-ELEM 1: ENB_ID_Choice->enb_ID_macro - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_MACRO;
    //hc-enb_ID_macro - primitive in scope - pid = 3 - BIT STRING
    OSOCTET temp_buff_for_enb_ID_macro[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.numbits = 8*sizeof(temp_buff_for_enb_ID_macro);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_macro.data, temp_buff_for_enb_ID_macro, sizeof(temp_buff_for_enb_ID_macro));

    #endif
    #if 0 //hc-choice-ELEM 2: ENB_ID_Choice->enb_ID_shortmacro - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_SHORTMACRO;
    //hc-enb_ID_shortmacro - primitive in scope - pid = 3 - BIT STRING
    OSOCTET temp_buff_for_enb_ID_shortmacro[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.numbits = 8*sizeof(temp_buff_for_enb_ID_shortmacro);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_shortmacro.data, temp_buff_for_enb_ID_shortmacro, sizeof(temp_buff_for_enb_ID_shortmacro));

    #endif
    #if 0 //hc-choice-ELEM 3: ENB_ID_Choice->enb_ID_longmacro - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.choice_type = E2AP_ENB_ID_CHOICE_e2ap_ENB_ID_LONGMACRO;
    //hc-enb_ID_longmacro - primitive in scope - pid = 3 - BIT STRING
    OSOCTET temp_buff_for_enb_ID_longmacro[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.numbits = 8*sizeof(temp_buff_for_enb_ID_longmacro);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeXn.global_NG_RAN_Node_ID.ng_eNB.enb_id.enb_ID_longmacro.data, temp_buff_for_enb_ID_longmacro, sizeof(temp_buff_for_enb_ID_longmacro));

    #endif
    /*=== END CHOICE - ENB_ID_Choice ===*/
    /*=== END SEQUENCE - GlobalngeNB_ID ===*/
    #endif
    /*=== END CHOICE - GlobalNG_RANNode_ID ===*/
    /*=== END SEQUENCE - E2nodeComponentInterfaceXn ===*/
    #endif
    #if 0 //hc-choice-ELEM 3: E2nodeComponentID->e2nodeComponentInterfaceTypeE1 - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_E1;
    /*=== SEQUENCE - E2nodeComponentInterfaceE1 ===*/
    //hc-sequence-ELEM 1: E2nodeComponentInterfaceE1->gNB_CU_UP_ID - alias = 6
    //hc-gNB_CU_UP_ID - alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeE1.gNB_CU_UP_ID = 34359738367;// change integer here

    /*=== END SEQUENCE - E2nodeComponentInterfaceE1 ===*/
    #endif
    #if 0 //hc-choice-ELEM 4: E2nodeComponentID->e2nodeComponentInterfaceTypeF1 - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_F1;
    /*=== SEQUENCE - E2nodeComponentInterfaceF1 ===*/
    //hc-sequence-ELEM 1: E2nodeComponentInterfaceF1->gNB_DU_ID - alias = 6
    //hc-gNB_DU_ID - alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeF1.gNB_DU_ID = 34359738367;// change integer here

    /*=== END SEQUENCE - E2nodeComponentInterfaceF1 ===*/
    #endif
    #if 0 //hc-choice-ELEM 5: E2nodeComponentID->e2nodeComponentInterfaceTypeW1 - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_W1;
    /*=== SEQUENCE - E2nodeComponentInterfaceW1 ===*/
    //hc-sequence-ELEM 1: E2nodeComponentInterfaceW1->ng_eNB_DU_ID - alias = 6
    //hc-ng_eNB_DU_ID - alias primitive - pid = 6 - INTEGER - min:0 - max:68719476735
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeW1.ng_eNB_DU_ID = 34359738367;// change integer here

    /*=== END SEQUENCE - E2nodeComponentInterfaceW1 ===*/
    #endif
    #if 0 //hc-choice-ELEM 6: E2nodeComponentID->e2nodeComponentInterfaceTypeS1 - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_S1;
    /*=== SEQUENCE - E2nodeComponentInterfaceS1 ===*/
    //hc-sequence-ELEM 1: E2nodeComponentInterfaceS1->mme_name - alias = 10
    //hc-mme_name - alias primitive - pid = 10 Printable STRING
    XNAP_STRCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeS1.mme_name, "hardcoded_string_value"); // change printable string here

    /*=== END SEQUENCE - E2nodeComponentInterfaceS1 ===*/
    #endif
    #if 0 //hc-choice-ELEM 7: E2nodeComponentID->e2nodeComponentInterfaceTypeX2 - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.choice_type = E2AP_E2NODE_COMPONENT_ID_e2ap_E2NODE_COMPONENT_INTERFACE_TYPE_X2;
    /*=== SEQUENCE - E2nodeComponentInterfaceX2 ===*/
    //hc-sequence-ELEM 1: E2nodeComponentInterfaceX2->global_eNB_ID - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_E_NB_ID_PRESENT;
    /*=== SEQUENCE - GlobalENB_ID ===*/
    //hc-sequence-ELEM 1: GlobalENB_ID->pLMN_Identity - alias = 8
    //hc-pLMN_Identity - alias primitive - pid = 8 - OCTET STRING
    OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here

    //hc-sequence-ELEM 2: GlobalENB_ID->eNB_ID - alias = -1
    /*=== CHOICE - ENB_ID ===*/
    #if 1 //hc-CHOICE-ELEM 1: ENB_ID->macro_eNB_ID - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_MACRO_E_NB_ID;
    //hc-macro_eNB_ID - primitive in scope - pid = 3 - BIT STRING
    OSOCTET temp_buff_for_macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =20 - max = 20 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.numbits = 8*sizeof(temp_buff_for_macro_eNB_ID);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.macro_eNB_ID.data, temp_buff_for_macro_eNB_ID, sizeof(temp_buff_for_macro_eNB_ID));

    #endif
    #if 0 //hc-choice-ELEM 2: ENB_ID->home_eNB_ID - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_HOME_E_NB_ID;
    //hc-home_eNB_ID - primitive in scope - pid = 3 - BIT STRING
    OSOCTET temp_buff_for_home_eNB_ID[] = {0x01, 0x02, 0x03, 0x04}; // min =28 - max = 28 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.numbits = 8*sizeof(temp_buff_for_home_eNB_ID);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.home_eNB_ID.data, temp_buff_for_home_eNB_ID, sizeof(temp_buff_for_home_eNB_ID));

    #endif
    #if 0 //hc-choice-ELEM 3: ENB_ID->short_Macro_eNB_ID - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_SHORT_MACRO_E_NB_ID;
    //hc-short_Macro_eNB_ID - primitive in scope - pid = 3 - BIT STRING
    OSOCTET temp_buff_for_short_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =18 - max = 18 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.numbits = 8*sizeof(temp_buff_for_short_Macro_eNB_ID);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.short_Macro_eNB_ID.data, temp_buff_for_short_Macro_eNB_ID, sizeof(temp_buff_for_short_Macro_eNB_ID));

    #endif
    #if 0 //hc-choice-ELEM 4: ENB_ID->long_Macro_eNB_ID - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.choice_type = E2AP_ENB_ID_e2ap_LONG_MACRO_E_NB_ID;
    //hc-long_Macro_eNB_ID - primitive in scope - pid = 3 - BIT STRING
    OSOCTET temp_buff_for_long_Macro_eNB_ID[] = {0x01, 0x02, 0x03}; // min =21 - max = 21 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.numbits = 8*sizeof(temp_buff_for_long_Macro_eNB_ID);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_eNB_ID.eNB_ID.long_Macro_eNB_ID.data, temp_buff_for_long_Macro_eNB_ID, sizeof(temp_buff_for_long_Macro_eNB_ID));

    #endif
    /*=== END CHOICE - ENB_ID ===*/
    /*=== END SEQUENCE - GlobalENB_ID ===*/
    //hc-sequence-ELEM 2: E2nodeComponentInterfaceX2->global_en_gNB_ID - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.bitmask |= E2AP_E2NODE_COMPONENT_INTERFACE_X2_e2ap_GLOBAL_EN_G_NB_ID_PRESENT;
    /*=== SEQUENCE - GlobalenGNB_ID ===*/
    //hc-sequence-ELEM 1: GlobalenGNB_ID->pLMN_Identity - alias = 8
    //hc-pLMN_Identity - alias primitive - pid = 8 - OCTET STRING
    OSOCTET temp_buff_for_pLMN_Identity[] = {0x01, 0x02, 0x03}; // min =3 - max = 3 bytes change octetstring data here
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.numocts = sizeof(temp_buff_for_pLMN_Identity);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.pLMN_Identity.data, temp_buff_for_pLMN_Identity, sizeof(temp_buff_for_pLMN_Identity)); // change octetstring data here

    //hc-sequence-ELEM 2: GlobalenGNB_ID->gNB_ID - alias = -1
    /*=== CHOICE - ENGNB_ID ===*/
    #if 1 //hc-CHOICE-ELEM 1: ENGNB_ID->gNB_ID - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.choice_type = E2AP_ENGNB_ID_e2ap_G_NB_ID;
    //hc-gNB_ID - primitive in scope - pid = 4 - BIT STRING
    OSOCTET temp_buff_for_gNB_ID[] = {0x01, 0x02, 0x03}; // min =22 - max = 32 bits
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.numbits = 8*sizeof(temp_buff_for_gNB_ID);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentID.e2nodeComponentInterfaceTypeX2.global_en_gNB_ID.gNB_ID.gNB_ID.data, temp_buff_for_gNB_ID, sizeof(temp_buff_for_gNB_ID));

    #endif
    /*=== END CHOICE - ENGNB_ID ===*/
    /*=== END SEQUENCE - GlobalenGNB_ID ===*/
    /*=== END SEQUENCE - E2nodeComponentInterfaceX2 ===*/
    #endif
    /*=== END CHOICE - E2nodeComponentID ===*/
    //hc-sequence-ELEM 3: E2nodeComponentConfigAdditionAck_Item->e2nodeComponentConfigurationAck - alias = -1
    /*=== SEQUENCE - E2nodeComponentConfigurationAck ===*/
    //hc-sequence-ELEM 1: E2nodeComponentConfigurationAck->updateOutcome - alias = -1
    //hc-updateOutcome - primitive in scope - pid = 13 ENUMURATE
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.updateOutcome = E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_SUCCESS;

    //hc-sequence-ELEM 2: E2nodeComponentConfigurationAck->failureCause - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.bitmask |= E2AP_E2NODE_COMPONENT_CONFIGURATION_ACK_e2ap_FAILURE_CAUSE_PRESENT;
    /*=== CHOICE - Cause ===*/
    #if 1 //hc-CHOICE-ELEM 1: Cause->ricRequest - alias = 13
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_REQUEST;
    //hc-CauseRICrequest
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricRequest = E2AP_CAUSE_RICREQUEST_RAN_FUNCTION_ID_INVALID; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 2: Cause->ricService - alias = 13
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_RIC_SERVICE;
    //hc-CauseRICservice
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.ricService = E2AP_CAUSE_RICSERVICE_RAN_FUNCTION_NOT_SUPPORTED; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 3: Cause->e2Node - alias = 13
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_E2NODE;
    //hc-CauseE2node
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.e2Node = E2AP_CAUSE_E2NODE_E2NODE_COMPONENT_UNKNOWN; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 4: Cause->transport - alias = 13
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_TRANSPORT;
    //hc-CauseTransport
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.transport = E2AP_CAUSE_TRANSPORT_UNSPECIFIED; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 5: Cause->protocol - alias = 13
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_PROTOCOL;
    //hc-CauseProtocol
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.protocol = E2AP_CAUSE_PROTOCOL_TRANSFER_SYNTAX_ERROR; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 6: Cause->misc - alias = 13
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_MISC;
    //hc-CauseMisc
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.misc = E2AP_CAUSE_MISC_CONTROL_PROCESSING_OVERLOAD; // change enum value here
    #endif
    #if 0 //hc-choice-ELEM 7: Cause->serviceLayer - alias = -1
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.choice_type = E2AP_CAUSE_e2ap_SERVICE_LAYER;
    /*=== SEQUENCE - CauseServiceLayer ===*/
    //hc-sequence-ELEM 1: CauseServiceLayer->serviceLayerCause - alias = 9
    //hc-serviceLayerCause - alias primitive - pid = 9 - OCTET STRING
    OSOCTET temp_buff_for_serviceLayerCause[] = {0x12, 0x34, 0x56, 0xAB}; // min =-1 - max = -1 bytes change octetstring data here
    p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.numocts = sizeof(temp_buff_for_serviceLayerCause);
    XNAP_MEMCPY(p_E2setupResponse->id_E2nodeComponentConfigAdditionAck.id_E2nodeComponentConfigAdditionAck_Item[0].e2nodeComponentConfigurationAck.failureCause.serviceLayer.serviceLayerCause.data, temp_buff_for_serviceLayerCause, sizeof(temp_buff_for_serviceLayerCause)); // change octetstring data here

    /*=== END SEQUENCE - CauseServiceLayer ===*/
    #endif
    /*=== END CHOICE - Cause ===*/
    /*=== END SEQUENCE - E2nodeComponentConfigurationAck ===*/
    /*=== END SEQUENCE - E2nodeComponentConfigAdditionAck_Item ===*/
}

#endif // ASSIGN_HARDCODE_E2SETUP_RESPONSE_H
