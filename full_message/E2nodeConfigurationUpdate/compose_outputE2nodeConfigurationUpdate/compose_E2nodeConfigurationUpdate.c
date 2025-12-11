/**************************************************/
/* assign_value function for E2nodeConfigurationUpdate */
/**************************************************/
void assign_hardcode_value_E2nodeConfigurationUpdate(e2ap_E2nodeConfigurationUpdate_t* p_E2nodeConfigurationUpdate)
{
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.TransactionID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalgNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalgNB-ID.GNB-ID-Choice
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalgNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalenGNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalenGNB-ID.ENGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GlobalenGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GNB-CU-UP-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID.GNB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-gNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GlobalenGNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GlobalenGNB-ID.ENGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GlobalenGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GNB-CU-UP-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID.GNB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-en-gNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalngeNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID.ENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.GlobalENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID.NGENB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-ng-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID.ENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-eNB-ID.GlobalENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID.GlobalE2node-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.GlobalE2node-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentInterfaceType
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceNG.AMFName
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceNG
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceXn
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceE1.GNB-CU-UP-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceE1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceF1.GNB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceF1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceW1.NGENB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceW1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceS1.MMEname
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceS1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID.E2nodeComponentInterfaceX2
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentConfiguration.e2nodeComponentRequestPart
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentConfiguration.e2nodeComponentResponsePart
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item.E2nodeComponentConfiguration
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs.E2nodeComponentConfigAddition-Item
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List.E2nodeComponentConfigAddition-ItemIEs
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigAddition-List
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentInterfaceType
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceNG.AMFName
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceNG
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceXn
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceE1.GNB-CU-UP-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceE1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceF1.GNB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceF1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceW1.NGENB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceW1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceS1.MMEname
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceS1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID.E2nodeComponentInterfaceX2
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentConfiguration.e2nodeComponentRequestPart
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentConfiguration.e2nodeComponentResponsePart
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item.E2nodeComponentConfiguration
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs.E2nodeComponentConfigUpdate-Item
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List.E2nodeComponentConfigUpdate-ItemIEs
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigUpdate-List
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentInterfaceType
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceNG.AMFName
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceNG
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice.gnb-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID.GNB-ID-Choice
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalgNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-macro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-shortmacro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice.enb-ID-longmacro
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID.ENB-ID-Choice
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID.GlobalngeNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn.GlobalNG-RANNode-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceXn
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceE1.GNB-CU-UP-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceE1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceF1.GNB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceF1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceW1.NGENB-DU-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceW1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceS1.MMEname
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceS1
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.home-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.short-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID.long-Macro-eNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID.ENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalENB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.PLMN-Identity
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID.gNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID.ENGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2.GlobalenGNB-ID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID.E2nodeComponentInterfaceX2
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item.E2nodeComponentID
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs.E2nodeComponentConfigRemoval-Item
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List.E2nodeComponentConfigRemoval-ItemIEs
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeComponentConfigRemoval-List
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeTNLassociationRemoval-List.E2nodeTNLassociationRemoval-ItemIEs.E2nodeTNLassociationRemoval-Item.TNLinformation.tnlAddress
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeTNLassociationRemoval-List.E2nodeTNLassociationRemoval-ItemIEs.E2nodeTNLassociationRemoval-Item.TNLinformation....
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeTNLassociationRemoval-List.E2nodeTNLassociationRemoval-ItemIEs.E2nodeTNLassociationRemoval-Item.TNLinformation.tnlPort
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeTNLassociationRemoval-List.E2nodeTNLassociationRemoval-ItemIEs.E2nodeTNLassociationRemoval-Item.TNLinformation
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeTNLassociationRemoval-List.E2nodeTNLassociationRemoval-ItemIEs.E2nodeTNLassociationRemoval-Item
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeTNLassociationRemoval-List.E2nodeTNLassociationRemoval-ItemIEs
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs.E2nodeTNLassociationRemoval-List
// E2nodeConfigurationUpdate.E2nodeConfigurationUpdate-IEs
// E2nodeConfigurationUpdate


    return;
}


/**************************************************/
/*      encode_E2nodeConfigurationUpdate                    */
/*                                                */
/**************************************************/
/*
E2nodeConfigurationUpdate
    E2nodeConfigurationUpdate-IEs
        TransactionID
        GlobalE2node-ID
            GlobalE2node-gNB-ID
                GlobalgNB-ID
                    PLMN-Identity
                    GNB-ID-Choice
                        gnb-ID
                GlobalenGNB-ID
                    PLMN-Identity
                    ENGNB-ID
                        gNB-ID
                GNB-CU-UP-ID
                GNB-DU-ID
            GlobalE2node-en-gNB-ID
                GlobalenGNB-ID
                    PLMN-Identity
                    ENGNB-ID
                        gNB-ID
                GNB-CU-UP-ID
                GNB-DU-ID
            GlobalE2node-ng-eNB-ID
                GlobalngeNB-ID
                    PLMN-Identity
                    ENB-ID-Choice
                        enb-ID-macro
                        enb-ID-shortmacro
                        enb-ID-longmacro
                GlobalENB-ID
                    PLMN-Identity
                    ENB-ID
                        macro-eNB-ID
                        home-eNB-ID
                        short-Macro-eNB-ID
                        long-Macro-eNB-ID
                NGENB-DU-ID
            GlobalE2node-eNB-ID
                GlobalENB-ID
                    PLMN-Identity
                    ENB-ID
                        macro-eNB-ID
                        home-eNB-ID
                        short-Macro-eNB-ID
                        long-Macro-eNB-ID
        E2nodeComponentConfigAddition-List
            E2nodeComponentConfigAddition-ItemIEs
                E2nodeComponentConfigAddition-Item
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
                    E2nodeComponentConfiguration
                        e2nodeComponentRequestPart
                        e2nodeComponentResponsePart
        E2nodeComponentConfigUpdate-List
            E2nodeComponentConfigUpdate-ItemIEs
                E2nodeComponentConfigUpdate-Item
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
                    E2nodeComponentConfiguration
                        e2nodeComponentRequestPart
                        e2nodeComponentResponsePart
        E2nodeComponentConfigRemoval-List
            E2nodeComponentConfigRemoval-ItemIEs
                E2nodeComponentConfigRemoval-Item
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
        E2nodeTNLassociationRemoval-List
            E2nodeTNLassociationRemoval-ItemIEs
                E2nodeTNLassociationRemoval-Item
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort
                    TNLinformation
                        tnlAddress
                        ...
                        tnlPort

*/
xnap_return_et e2ap_encode_E2nodeConfigurationUpdate(
                e2ap_E2nodeConfigurationUpdate_t* p_E2nodeConfigurationUpdate_src,
                UInt8 *p_asn_msg, 
                UInt16* p_asn_msg_len
){
#if 1 // hardcode
    assign_hardcode_value_E2nodeConfigurationUpdate(p_E2nodeConfigurationUpdate_src);
#endif

    xnap_return_et retVal = XNAP_FAILURE;
    OSCTXT asn1_ctx;
    e2ap_E2AP_PDU e2ap_pdu;
    OSRTDListNode* p_node = GNB_PNULL;
    e2ap_E2nodeConfigurationUpdate* p_E2nodeConfigurationUpdate = GNB_PNULL;
    e2ap_E2nodeConfigurationUpdate_protocolIEs_element* p_e2ap_protocolIEs_elem = GNB_PNULL;
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
        e2ap_pdu.u.initiatingMessage = rtxMemAllocType(&asn1_ctx, e2ap_InitiatingMessage);
        if(GNB_PNULL==e2ap_pdu.u.initiatingMessage){
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation failed for initiatingMessage",__FUNCTION__);
            break;
        }

        asn1Init_e2ap_InitiatingMessage(e2ap_pdu.u.initiatingMessage);
        e2ap_pdu.u.initiatingMessage->procedureCode = ASN1V_e2ap_id_E2nodeConfigurationUpdate;
        e2ap_pdu.u.initiatingMessage->criticality = e2ap_reject;
        e2ap_pdu.u.initiatingMessage->value.t = T_E2AP_PDU_Description_e2ap_E2AP_ELEMENTARY_PROCEDURES_E2nodeConfigurationUpdate;
        p_E2nodeConfigurationUpdate = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeConfigurationUpdate);
        if(GNB_PNULL==p_E2nodeConfigurationUpdate){
            XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for E2nodeConfigurationUpdate",__FUNCTION__);
            break;
        }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Memory allocation success for E2nodeConfigurationUpdate",__FUNCTION__);
        }

        asn1Init_e2ap_E2nodeConfigurationUpdate(p_E2nodeConfigurationUpdate);
        e2ap_pdu.u.initiatingMessage->value.u.e2nodeConfigurationUpdate = p_E2nodeConfigurationUpdate;

        /* Fill ProtocolIEs */
#if 1 // thiếu check optional bitmask
        {
            /*IE-1   encode id_TransactionID - presence = mandatory*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2nodeConfigurationUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeConfigurationUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2nodeConfigurationUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_TransactionID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdate_IEs_id_TransactionID;
             p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_TransactionID = &p_E2nodeConfigurationUpdate_src->id_TransactionID; //assign primitive

            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2nodeConfigurationUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-2   encode id_GlobalE2node_ID - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2nodeConfigurationUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeConfigurationUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2nodeConfigurationUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_GlobalE2node_ID;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdate_IEs_id_GlobalE2node_ID;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_GlobalE2node_ID 
                                = rtxMemAllocType(&asn1_ctx, e2ap_GlobalE2node_ID);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_GlobalE2node_ID){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_GlobalE2node_ID",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_GlobalE2node_ID(p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_GlobalE2node_ID);
            #endif
            //message_name.item_type -> type = GlobalE2node_ID
            if(XNAP_FAILURE == e2ap_compose_GlobalE2node_ID(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_GlobalE2node_ID,
                                &p_E2nodeConfigurationUpdate_src->id_GlobalE2node_ID)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field GlobalE2node_ID",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field GlobalE2node_ID",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2nodeConfigurationUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-3   encode id_E2nodeComponentConfigAddition - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2nodeConfigurationUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeConfigurationUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2nodeConfigurationUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeComponentConfigAddition;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigAddition;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigAddition 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigAddition_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigAddition){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2nodeComponentConfigAddition",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2nodeComponentConfigAddition_List(p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigAddition);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigAddition_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigAddition_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigAddition,
                                &p_E2nodeConfigurationUpdate_src->id_E2nodeComponentConfigAddition)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigAddition_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2nodeComponentConfigAddition_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2nodeConfigurationUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-4   encode id_E2nodeComponentConfigUpdate - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2nodeConfigurationUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeConfigurationUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2nodeConfigurationUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeComponentConfigUpdate;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigUpdate;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigUpdate 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigUpdate_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigUpdate){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2nodeComponentConfigUpdate",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2nodeComponentConfigUpdate_List(p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigUpdate);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigUpdate_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigUpdate_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigUpdate,
                                &p_E2nodeConfigurationUpdate_src->id_E2nodeComponentConfigUpdate)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigUpdate_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2nodeComponentConfigUpdate_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2nodeConfigurationUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-5   encode id_E2nodeComponentConfigRemoval - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2nodeConfigurationUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeConfigurationUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2nodeConfigurationUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeComponentConfigRemoval;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigRemoval;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigRemoval 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeComponentConfigRemoval_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigRemoval){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2nodeComponentConfigRemoval",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2nodeComponentConfigRemoval_List(p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigRemoval);
            #endif
            //message_name.item_type -> type = E2nodeComponentConfigRemoval_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeComponentConfigRemoval_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeComponentConfigRemoval,
                                &p_E2nodeConfigurationUpdate_src->id_E2nodeComponentConfigRemoval)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeComponentConfigRemoval_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2nodeComponentConfigRemoval_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2nodeConfigurationUpdate->protocolIEs, p_node);
            rrc_asn1PrtToStr_E2AP_PDU(XNAP_ASN, "E2AP PDU", &e2ap_pdu);
        }
#endif
#if 1 // thiếu check optional bitmask
        {
            /*IE-6   encode id_E2nodeTNLassociationRemoval - presence = optional*/
            rtxDListAllocNodeAndData(&asn1_ctx,
                                    e2ap_E2nodeConfigurationUpdate_protocolIEs_element,
                                    &p_node,
                                    &p_e2ap_protocolIEs_elem);
            if(GNB_PNULL==p_node){
                /* not enough memory */
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_E2nodeConfigurationUpdate_protocolIEs_element",__FUNCTION__);
                break;
            }

            asn1Init_e2ap_E2nodeConfigurationUpdate_protocolIEs_element(p_e2ap_protocolIEs_elem);
            /*fill the type of ProtocolIEs _protocolIEs_element*/
            p_e2ap_protocolIEs_elem->id = ASN1V_e2ap_id_E2nodeTNLassociationRemoval;
            p_e2ap_protocolIEs_elem->criticality = e2ap_reject;
            p_e2ap_protocolIEs_elem->value.t = T_E2AP_PDU_Contents_e2ap_E2nodeConfigurationUpdate_IEs_id_E2nodeTNLassociationRemoval;

 
            #if 1 // ko đẩy vào compose nữa
            p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeTNLassociationRemoval 
                                = rtxMemAllocType(&asn1_ctx, e2ap_E2nodeTNLassociationRemoval_List);
            if(GNB_PNULL==p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeTNLassociationRemoval){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Memory allocation failed for e2ap_id_E2nodeTNLassociationRemoval",__FUNCTION__);
                break;
            }
            asn1Init_e2ap_E2nodeTNLassociationRemoval_List(p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeTNLassociationRemoval);
            #endif
            //message_name.item_type -> type = E2nodeTNLassociationRemoval_List
            if(XNAP_FAILURE == e2ap_compose_E2nodeTNLassociationRemoval_List(&asn1_ctx, 
                                p_e2ap_protocolIEs_elem->value.u._e2apE2nodeConfigurationUpdate_IEs_id_E2nodeTNLassociationRemoval,
                                &p_E2nodeConfigurationUpdate_src->id_E2nodeTNLassociationRemoval)){
                XNAP_TRACE(XNAP_ERROR,"dungnm23 - %s: Encoding failed for field E2nodeTNLassociationRemoval_List",__FUNCTION__);
                rtFreeContext(&asn1_ctx);
                //XNAP_UT_TRACE_EXIT();
                //return XNAP_FAILURE;
                break;
            }else{
            XNAP_TRACE(XNAP_INFO,"dungnm23 - %s: Encoding success for field E2nodeTNLassociationRemoval_List",__FUNCTION__);
            }
            
            /* Append the node to protocolIEs list */
            rtxDListAppendNode(&p_E2nodeConfigurationUpdate->protocolIEs, p_node);
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