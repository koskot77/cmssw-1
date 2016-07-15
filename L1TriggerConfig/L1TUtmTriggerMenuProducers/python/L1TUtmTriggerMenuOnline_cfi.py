import FWCore.ParameterSet.Config as cms

L1TUtmTriggerMenuOnline = cms.ESProducer("L1TUtmTriggerMenuOnlineProd",
    onlineAuthentication = cms.string('.'),
    forceGeneration = cms.bool(False),
    onlineDB = cms.string('oracle://CMS_OMDS_LB/CMS_TRG_R')
)
