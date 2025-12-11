#ifndef HARD_CODE_FOR_E2_CONNECTION_UPDATE_ACKNOWLEDGE_H
#define HARD_CODE_FOR_E2_CONNECTION_UPDATE_ACKNOWLEDGE_H
#include<stdio.h>
#include "output_main.h"
#include "MAIN_STRUCT.h"

void assign_hardcode_value_E2connectionUpdateAcknowledge(e2ap_E2connectionUpdateAcknowledge_t* p_E2connectionUpdateAcknowledge)
{

OSOCTET tnlAddrBuf[4] = {192, 168, 10, 55};   // IPv4 example
OSOCTET tnlPortBuf[2] = {0x1F, 0x90};         // Port 8080 = 0x1F90

OSUINT32 addr_bits = 32;
OSUINT32 port_bits = 16;


p_E2connectionUpdateAcknowledge->bitmask |= E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_PRESENT;
p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item_count = 1;
p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlUsage = E2AP_TNLUSAGE_RIC_SERVICE;

p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.numbits = addr_bits;
//p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.data = tnlAddrBuf;
XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlAddress.data, tnlAddrBuf, sizeof(tnlAddrBuf));

p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.numbits =port_bits;
//p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.data = tnlPortBuf;
XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetup.id_E2connectionUpdate_Item[0].tnlInformation.tnlPort.data, tnlPortBuf, sizeof(tnlPortBuf));


p_E2connectionUpdateAcknowledge->bitmask |= E2AP_E2CONNECTION_UPDATE_ACKNOWLEDGE_e2ap_ID_E2CONNECTION_SETUP_FAILED_PRESENT;
p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item_count=1;
p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.bitmask |= E2AP_TNLINFORMATION_e2ap_TNL_PORT_PRESENT;
p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlAddress.numbits = addr_bits;
//p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlAddress.data =tnlAddrBuf;
XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlAddress.data, tnlAddrBuf, sizeof(tnlAddrBuf));

p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlPort.numbits =port_bits;
//p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlPort.data = tnlPortBuf;
XNAP_MEMCPY(p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].tnlInformation.tnlPort.data, tnlPortBuf, sizeof(tnlPortBuf));



p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.choice_type  = E2AP_CAUSE_e2ap_RIC_REQUEST;

p_E2connectionUpdateAcknowledge->id_E2connectionSetupFailed.id_E2connectionSetupFailed_Item[0].cause.ricRequest = E2AP_CAUSE_RICREQUEST_EXCESSIVE_ACTIONS;
// E2connectionUpdateAcknowledge.E2connectionUpdateAck-IEs.TransactionID
p_E2connectionUpdateAcknowledge->id_TransactionID = 183;

    return;
}

#endif // HARD_CODE_FOR_E2_CONNECTION_UPDATE_ACKNOWLEDGE_H