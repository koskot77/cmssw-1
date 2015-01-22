import FWCore.ParameterSet.Config as cms

from RecoBTag.SecondaryVertex.candidateCombinedSecondaryVertexComputer_cfi import *

candidateNegativeCombinedSecondaryVertexComputer = candidateCombinedSecondaryVertexComputer.clone()
candidateNegativeCombinedSecondaryVertexComputer.vertexFlip = True
candidateNegativeCombinedSecondaryVertexComputer.trackFlip = True
candidateNegativeCombinedSecondaryVertexComputer.trackSelection.sip3dSigMax = 0
candidateNegativeCombinedSecondaryVertexComputer.trackPseudoSelection.sip3dSigMax = 0
candidateNegativeCombinedSecondaryVertexComputer.trackPseudoSelection.sip2dSigMin = -99999.9
candidateNegativeCombinedSecondaryVertexComputer.trackPseudoSelection.sip2dSigMax = -2.0