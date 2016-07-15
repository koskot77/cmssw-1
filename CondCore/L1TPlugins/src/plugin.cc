#include "CondCore/ESSources/interface/registration_macros.h"



// Central L1 records
#include "CondFormats/DataRecord/interface/L1TriggerKeyRcd.h"
#include "CondFormats/L1TObjects/interface/L1TriggerKey.h"

REGISTER_PLUGIN(L1TriggerKeyRcd, L1TriggerKey);

#include "CondFormats/DataRecord/interface/L1TriggerKeyExtRcd.h"
#include "CondFormats/L1TObjects/interface/L1TriggerKeyExt.h"

REGISTER_PLUGIN(L1TriggerKeyExtRcd, L1TriggerKeyExt);

#include "CondFormats/DataRecord/interface/L1TriggerKeyListRcd.h"
#include "CondFormats/L1TObjects/interface/L1TriggerKeyList.h"

REGISTER_PLUGIN(L1TriggerKeyListRcd, L1TriggerKeyList);

#include "CondFormats/DataRecord/interface/L1TriggerKeyListExtRcd.h"
#include "CondFormats/L1TObjects/interface/L1TriggerKeyListExt.h"

REGISTER_PLUGIN(L1TriggerKeyListExtRcd, L1TriggerKeyListExt);

// L1 scales
#include "CondFormats/L1TObjects/interface/L1CaloEtScale.h"
#include "CondFormats/DataRecord/interface/L1JetEtScaleRcd.h"
#include "CondFormats/DataRecord/interface/L1EmEtScaleRcd.h"
#include "CondFormats/DataRecord/interface/L1HtMissScaleRcd.h"
#include "CondFormats/DataRecord/interface/L1HfRingEtScaleRcd.h"

REGISTER_PLUGIN(L1JetEtScaleRcd, L1CaloEtScale);
REGISTER_PLUGIN(L1EmEtScaleRcd, L1CaloEtScale);
REGISTER_PLUGIN(L1HtMissScaleRcd, L1CaloEtScale);
REGISTER_PLUGIN(L1HfRingEtScaleRcd, L1CaloEtScale);

#include "CondFormats/L1TObjects/interface/L1MuTriggerScales.h"
#include "CondFormats/DataRecord/interface/L1MuTriggerScalesRcd.h"

REGISTER_PLUGIN(L1MuTriggerScalesRcd, L1MuTriggerScales);

#include "CondFormats/L1TObjects/interface/L1MuTriggerPtScale.h"
#include "CondFormats/DataRecord/interface/L1MuTriggerPtScaleRcd.h"

REGISTER_PLUGIN(L1MuTriggerPtScaleRcd, L1MuTriggerPtScale);

#include "CondFormats/L1TObjects/interface/L1MuGMTScales.h"
#include "CondFormats/DataRecord/interface/L1MuGMTScalesRcd.h"

REGISTER_PLUGIN(L1MuGMTScalesRcd, L1MuGMTScales);

// DT TF records
#include "CondFormats/L1TObjects/interface/L1MuDTEtaPatternLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTExtLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTPhiLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTPtaLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTQualPatternLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTTFParameters.h"
#include "CondFormats/L1TObjects/interface/L1MuDTTFMasks.h"
#include "CondFormats/DataRecord/interface/L1MuDTEtaPatternLutRcd.h"
#include "CondFormats/DataRecord/interface/L1MuDTExtLutRcd.h"
#include "CondFormats/DataRecord/interface/L1MuDTPhiLutRcd.h"
#include "CondFormats/DataRecord/interface/L1MuDTPtaLutRcd.h"
#include "CondFormats/DataRecord/interface/L1MuDTQualPatternLutRcd.h"
#include "CondFormats/DataRecord/interface/L1MuDTTFParametersRcd.h"
#include "CondFormats/DataRecord/interface/L1MuDTTFMasksRcd.h"

REGISTER_PLUGIN(L1MuDTEtaPatternLutRcd, L1MuDTEtaPatternLut);
REGISTER_PLUGIN(L1MuDTExtLutRcd, L1MuDTExtLut);
REGISTER_PLUGIN(L1MuDTPhiLutRcd, L1MuDTPhiLut);
REGISTER_PLUGIN(L1MuDTPtaLutRcd, L1MuDTPtaLut);
REGISTER_PLUGIN(L1MuDTQualPatternLutRcd, L1MuDTQualPatternLut);
REGISTER_PLUGIN(L1MuDTTFParametersRcd, L1MuDTTFParameters);
REGISTER_PLUGIN(L1MuDTTFMasksRcd, L1MuDTTFMasks);

// CSC TF records
#include "CondFormats/L1TObjects/interface/L1MuCSCTFConfiguration.h"
#include "CondFormats/L1TObjects/interface/L1MuCSCTFAlignment.h"
#include "CondFormats/L1TObjects/interface/L1MuCSCPtLut.h"
#include "CondFormats/DataRecord/interface/L1MuCSCTFConfigurationRcd.h"
#include "CondFormats/DataRecord/interface/L1MuCSCTFAlignmentRcd.h"
#include "CondFormats/DataRecord/interface/L1MuCSCPtLutRcd.h"

REGISTER_PLUGIN(L1MuCSCTFConfigurationRcd, L1MuCSCTFConfiguration);
REGISTER_PLUGIN(L1MuCSCTFAlignmentRcd, L1MuCSCTFAlignment);
REGISTER_PLUGIN(L1MuCSCPtLutRcd, L1MuCSCPtLut);

// RPC records
#include "CondFormats/L1TObjects/interface/L1RPCConfig.h"
#include "CondFormats/DataRecord/interface/L1RPCConfigRcd.h"

REGISTER_PLUGIN(L1RPCConfigRcd, L1RPCConfig);

#include "CondFormats/L1TObjects/interface/L1RPCConeDefinition.h"
#include "CondFormats/DataRecord/interface/L1RPCConeDefinitionRcd.h"

REGISTER_PLUGIN(L1RPCConeDefinitionRcd, L1RPCConeDefinition);

#include "CondFormats/L1TObjects/interface/L1RPCHsbConfig.h"
#include "CondFormats/DataRecord/interface/L1RPCHsbConfigRcd.h"

REGISTER_PLUGIN(L1RPCHsbConfigRcd, L1RPCHsbConfig);

#include "CondFormats/L1TObjects/interface/L1RPCBxOrConfig.h"
#include "CondFormats/DataRecord/interface/L1RPCBxOrConfigRcd.h"

REGISTER_PLUGIN(L1RPCBxOrConfigRcd, L1RPCBxOrConfig);

// GMT records
#include "CondFormats/L1TObjects/interface/L1MuGMTParameters.h"
#include "CondFormats/DataRecord/interface/L1MuGMTParametersRcd.h"

REGISTER_PLUGIN(L1MuGMTParametersRcd, L1MuGMTParameters);

#include "CondFormats/L1TObjects/interface/L1MuGMTChannelMask.h"
#include "CondFormats/DataRecord/interface/L1MuGMTChannelMaskRcd.h"

REGISTER_PLUGIN(L1MuGMTChannelMaskRcd, L1MuGMTChannelMask);

// RCT records
#include "CondFormats/L1TObjects/interface/L1RCTParameters.h"
#include "CondFormats/DataRecord/interface/L1RCTParametersRcd.h"

REGISTER_PLUGIN(L1RCTParametersRcd, L1RCTParameters);

#include "CondFormats/L1TObjects/interface/L1RCTChannelMask.h"
#include "CondFormats/DataRecord/interface/L1RCTChannelMaskRcd.h"

REGISTER_PLUGIN(L1RCTChannelMaskRcd, L1RCTChannelMask);

#include "CondFormats/L1TObjects/interface/L1RCTNoisyChannelMask.h"
#include "CondFormats/DataRecord/interface/L1RCTNoisyChannelMaskRcd.h"

REGISTER_PLUGIN(L1RCTNoisyChannelMaskRcd, L1RCTNoisyChannelMask);

#include "CondFormats/L1TObjects/interface/L1CaloEcalScale.h"
#include "CondFormats/DataRecord/interface/L1CaloEcalScaleRcd.h"

REGISTER_PLUGIN(L1CaloEcalScaleRcd, L1CaloEcalScale);

#include "CondFormats/L1TObjects/interface/L1CaloHcalScale.h"
#include "CondFormats/DataRecord/interface/L1CaloHcalScaleRcd.h"

REGISTER_PLUGIN(L1CaloHcalScaleRcd, L1CaloHcalScale);

// GCT records
#include "CondFormats/L1TObjects/interface/L1GctChannelMask.h"
#include "CondFormats/DataRecord/interface/L1GctChannelMaskRcd.h"

REGISTER_PLUGIN(L1GctChannelMaskRcd, L1GctChannelMask);

#include "CondFormats/L1TObjects/interface/L1GctJetFinderParams.h"
#include "CondFormats/DataRecord/interface/L1GctJetFinderParamsRcd.h"

REGISTER_PLUGIN(L1GctJetFinderParamsRcd, L1GctJetFinderParams);

// GT records
#include "CondFormats/L1TObjects/interface/L1GtBoardMaps.h"
#include "CondFormats/DataRecord/interface/L1GtBoardMapsRcd.h"

REGISTER_PLUGIN(L1GtBoardMapsRcd, L1GtBoardMaps);

#include "CondFormats/L1TObjects/interface/L1GtParameters.h"
#include "CondFormats/DataRecord/interface/L1GtParametersRcd.h"

REGISTER_PLUGIN(L1GtParametersRcd, L1GtParameters);

#include "CondFormats/L1TObjects/interface/L1GtPrescaleFactors.h"
#include "CondFormats/DataRecord/interface/L1GtPrescaleFactorsAlgoTrigRcd.h"
#include "CondFormats/DataRecord/interface/L1GtPrescaleFactorsTechTrigRcd.h"

REGISTER_PLUGIN(L1GtPrescaleFactorsAlgoTrigRcd, L1GtPrescaleFactors);
REGISTER_PLUGIN(L1GtPrescaleFactorsTechTrigRcd, L1GtPrescaleFactors);

#include "CondFormats/L1TObjects/interface/L1GtStableParameters.h"
#include "CondFormats/DataRecord/interface/L1GtStableParametersRcd.h"

REGISTER_PLUGIN(L1GtStableParametersRcd, L1GtStableParameters);

#include "CondFormats/L1TObjects/interface/L1GtTriggerMask.h"
#include "CondFormats/DataRecord/interface/L1GtTriggerMaskAlgoTrigRcd.h"
#include "CondFormats/DataRecord/interface/L1GtTriggerMaskTechTrigRcd.h"
#include "CondFormats/DataRecord/interface/L1GtTriggerMaskVetoAlgoTrigRcd.h"
#include "CondFormats/DataRecord/interface/L1GtTriggerMaskVetoTechTrigRcd.h"

REGISTER_PLUGIN(L1GtTriggerMaskAlgoTrigRcd, L1GtTriggerMask);
REGISTER_PLUGIN(L1GtTriggerMaskTechTrigRcd, L1GtTriggerMask);
REGISTER_PLUGIN(L1GtTriggerMaskVetoAlgoTrigRcd, L1GtTriggerMask);
REGISTER_PLUGIN(L1GtTriggerMaskVetoTechTrigRcd, L1GtTriggerMask);

#include "CondFormats/L1TObjects/interface/L1GtTriggerMenu.h"
#include "CondFormats/DataRecord/interface/L1GtTriggerMenuRcd.h"

namespace {
  struct L1GtTriggerMenuInitializer { void operator()(L1GtTriggerMenu & _) { _.buildGtConditionMap(); } };
}
REGISTER_PLUGIN_INIT(L1GtTriggerMenuRcd, L1GtTriggerMenu, L1GtTriggerMenuInitializer);

#include "CondFormats/L1TObjects/interface/L1GtPsbSetup.h"
#include "CondFormats/DataRecord/interface/L1GtPsbSetupRcd.h"

REGISTER_PLUGIN(L1GtPsbSetupRcd, L1GtPsbSetup);

#include "CondFormats/L1TObjects/interface/L1CaloGeometry.h"
#include "CondFormats/DataRecord/interface/L1CaloGeometryRecord.h"

REGISTER_PLUGIN(L1CaloGeometryRecord, L1CaloGeometry);


// Upgrade Records:

#include "CondFormats/L1TObjects/interface/CaloParams.h"
#include "CondFormats/DataRecord/interface/L1TCaloParamsRcd.h"
#include "CondFormats/DataRecord/interface/L1TCaloStage2ParamsRcd.h"
#include "CondFormats/DataRecord/interface/L1TCaloParamsO2ORcd.h"
#include "CondFormats/L1TObjects/interface/CaloConfig.h"
#include "CondFormats/DataRecord/interface/L1TCaloConfigRcd.h"
using namespace l1t;
REGISTER_PLUGIN(L1TCaloParamsO2ORcd, CaloParams);
REGISTER_PLUGIN(L1TCaloParamsRcd, CaloParams);
REGISTER_PLUGIN(L1TCaloStage2ParamsRcd, CaloParams);
REGISTER_PLUGIN(L1TCaloConfigRcd, CaloConfig);

#include "CondFormats/L1TObjects/interface/L1TMuonOverlapParams.h"
#include "CondFormats/DataRecord/interface/L1TMuonOverlapParamsRcd.h"
#include "CondFormats/DataRecord/interface/L1TMuonOverlapParamsO2ORcd.h"

#include "CondFormats/L1TObjects/interface/L1TMuonBarrelParams.h"
#include "CondFormats/DataRecord/interface/L1TMuonBarrelParamsRcd.h"
#include "CondFormats/DataRecord/interface/L1TMuonBarrelParamsO2ORcd.h"

#include "CondFormats/L1TObjects/interface/L1TMuonGlobalParams.h"
#include "CondFormats/DataRecord/interface/L1TMuonGlobalParamsRcd.h"
#include "CondFormats/DataRecord/interface/L1TMuonGlobalParamsO2ORcd.h"

REGISTER_PLUGIN(L1TMuonOverlapParamsRcd, L1TMuonOverlapParams);
REGISTER_PLUGIN(L1TMuonBarrelParamsRcd, L1TMuonBarrelParams);
REGISTER_PLUGIN(L1TMuonGlobalParamsRcd, L1TMuonGlobalParams);

REGISTER_PLUGIN(L1TMuonOverlapParamsO2ORcd, L1TMuonOverlapParams);
REGISTER_PLUGIN(L1TMuonBarrelParamsO2ORcd, L1TMuonBarrelParams);
REGISTER_PLUGIN(L1TMuonGlobalParamsO2ORcd, L1TMuonGlobalParams);

#include "CondFormats/L1TObjects/interface/L1TUtmAlgorithm.h"
#include "CondFormats/DataRecord/interface/L1TUtmAlgorithmRcd.h"
REGISTER_PLUGIN(L1TUtmAlgorithmRcd, L1TUtmAlgorithm);

#include "CondFormats/L1TObjects/interface/L1TUtmBin.h"
#include "CondFormats/DataRecord/interface/L1TUtmBinRcd.h"
REGISTER_PLUGIN(L1TUtmBinRcd, L1TUtmBin);

#include "CondFormats/L1TObjects/interface/L1TUtmCondition.h"
#include "CondFormats/DataRecord/interface/L1TUtmConditionRcd.h"
REGISTER_PLUGIN(L1TUtmConditionRcd, L1TUtmCondition);

#include "CondFormats/L1TObjects/interface/L1TUtmCut.h"
#include "CondFormats/DataRecord/interface/L1TUtmCutRcd.h"
REGISTER_PLUGIN(L1TUtmCutRcd, L1TUtmCut);

#include "CondFormats/L1TObjects/interface/L1TUtmCutValue.h"
#include "CondFormats/DataRecord/interface/L1TUtmCutValueRcd.h"
REGISTER_PLUGIN(L1TUtmCutValueRcd, L1TUtmCutValue);

#include "CondFormats/L1TObjects/interface/L1TUtmObject.h"
#include "CondFormats/DataRecord/interface/L1TUtmObjectRcd.h"
REGISTER_PLUGIN(L1TUtmObjectRcd, L1TUtmObject);

#include "CondFormats/L1TObjects/interface/L1TUtmScale.h"
#include "CondFormats/DataRecord/interface/L1TUtmScaleRcd.h"
REGISTER_PLUGIN(L1TUtmScaleRcd, L1TUtmScale);

#include "CondFormats/L1TObjects/interface/L1TUtmTriggerMenu.h"
#include "CondFormats/DataRecord/interface/L1TUtmTriggerMenuRcd.h"
#include "CondFormats/DataRecord/interface/L1TUtmTriggerMenuO2ORcd.h"
REGISTER_PLUGIN(L1TUtmTriggerMenuRcd, L1TUtmTriggerMenu);
REGISTER_PLUGIN(L1TUtmTriggerMenuO2ORcd, L1TUtmTriggerMenu);

#include "CondFormats/L1TObjects/interface/L1TGlobalParameters.h"
#include "CondFormats/DataRecord/interface/L1TGlobalParametersRcd.h"
REGISTER_PLUGIN(L1TGlobalParametersRcd, L1TGlobalParameters);

#include "CondFormats/L1TObjects/interface/L1TGlobalPrescalesVetos.h"
#include "CondFormats/DataRecord/interface/L1TGlobalPrescalesVetosRcd.h"
REGISTER_PLUGIN(L1TGlobalPrescalesVetosRcd, L1TGlobalPrescalesVetos);
