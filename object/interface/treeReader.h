//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Feb 10 16:50:53 2015 by ROOT version 5.34/14
// from TTree tree/treeProducerSusyAlphaT
// found on file: samples/tree.root
//////////////////////////////////////////////////////////

#ifndef treeReader_h
#define treeReader_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class treeReader {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           run;
   Int_t           lumi;
   Int_t           evt;
   Int_t           isData;
   Double_t        xsec;
   Double_t        puWeight;
   Int_t           nTrueInt;
   Double_t        genWeight;
   Double_t        rho;
   Int_t           nVert;
   Int_t           nJet25;
   Int_t           nBJetLoose25;
   Int_t           nBJetMedium25;
   Int_t           nBJetTight25;
   Int_t           nBJetCMVALoose25;
   Int_t           nBJetCMVAMedium25;
   Int_t           nBJetCMVATight25;
   Int_t           nJet40;
   Int_t           nJet40a;
   Int_t           nBJetLoose40;
   Int_t           nBJetMedium40;
   Int_t           nBJetTight40;
   Int_t           nBJetCMVALoose40;
   Int_t           nBJetCMVAMedium40;
   Int_t           nBJetCMVATight40;
   Int_t           nLepGood20;
   Int_t           nLepGood15;
   Int_t           nLepGood10;
   Int_t           GenSusyMScan1;
   Int_t           GenSusyMScan2;
   Int_t           GenSusyMScan3;
   Int_t           GenSusyMScan4;
   Int_t           GenSusyMGluino;
   Int_t           GenSusyMGravitino;
   Int_t           GenSusyMStop;
   Int_t           GenSusyMSbottom;
   Int_t           GenSusyMStop2;
   Int_t           GenSusyMSbottom2;
   Int_t           GenSusyMSquark;
   Int_t           GenSusyMNeutralino;
   Int_t           GenSusyMNeutralino2;
   Int_t           GenSusyMNeutralino3;
   Int_t           GenSusyMNeutralino4;
   Int_t           GenSusyMChargino;
   Int_t           GenSusyMChargino2;
   Double_t        genBin;
   Double_t        genQScale;
   Double_t        ht40;
   Double_t        ht50;
   Double_t        deltaPhiMin;
   Double_t        diffMetMht;
   Double_t        mht40_pt;
   Double_t        mht40_phi;
   Double_t        mht50_pt;
   Double_t        mht50_phi;
   Double_t        biasedDPhi;
   Int_t           nMuons10;
   Int_t           nElectrons10;
   Int_t           nTaus20;
   Int_t           nGammas25;
   Int_t           nBJet50;
   Double_t        alphaT;
   Double_t        mtw;
   Double_t        mtwTau;
   Double_t        IsoTrack_mtw;
   Double_t        mll;
   Double_t        HLT_Muon;
   Double_t        HLT_Prompt;
   Double_t        HLT_Photon;
   Double_t        HLT_SingleMu;
   Double_t        HLT_Bulk;
   Double_t        HLT_Parked;
   Double_t        Flag_EcalDeadCellTriggerPrimitiveFilter;
   Double_t        Flag_trkPOG_manystripclus53X;
   Double_t        Flag_ecalLaserCorrFilter;
   Double_t        Flag_trkPOG_toomanystripclus53X;
   Double_t        Flag_hcalLaserEventFilter;
   Double_t        Flag_trkPOG_logErrorTooManyClusters;
   Double_t        Flag_trkPOGFilters;
   Double_t        Flag_trackingFailureFilter;
   Double_t        Flag_CSCTightHaloFilter;
   Double_t        Flag_HBHENoiseFilter;
   Double_t        Flag_goodVertices;
   Double_t        Flag_METFilters;
   Double_t        Flag_eeBadScFilter;
   Double_t        met_pt;
   Double_t        met_eta;
   Double_t        met_phi;
   Double_t        met_mass;
   Double_t        met_sumEt;
   Double_t        met_genPt;
   Double_t        met_genPhi;
   Double_t        met_genEta;
   Double_t        metNoMu_pt;
   Double_t        metNoMu_eta;
   Double_t        metNoMu_phi;
   Double_t        metNoMu_mass;
   Int_t           ngenPart;
   Double_t        genPart_charge[192];   //[ngenPart]
   Int_t           genPart_status[192];   //[ngenPart]
   Int_t           genPart_pdgId[192];   //[ngenPart]
   Double_t        genPart_pt[192];   //[ngenPart]
   Double_t        genPart_eta[192];   //[ngenPart]
   Double_t        genPart_phi[192];   //[ngenPart]
   Double_t        genPart_mass[192];   //[ngenPart]
   Int_t           genPart_motherId[192];   //[ngenPart]
   Int_t           genPart_grandmotherId[192];   //[ngenPart]
   Int_t           ngenTau;
   Int_t           genTau_motherId[2];   //[ngenTau]
   Int_t           genTau_grandmotherId[2];   //[ngenTau]
   Int_t           genTau_sourceId[2];   //[ngenTau]
   Double_t        genTau_charge[2];   //[ngenTau]
   Int_t           genTau_status[2];   //[ngenTau]
   Int_t           genTau_pdgId[2];   //[ngenTau]
   Double_t        genTau_pt[2];   //[ngenTau]
   Double_t        genTau_eta[2];   //[ngenTau]
   Double_t        genTau_phi[2];   //[ngenTau]
   Double_t        genTau_mass[2];   //[ngenTau]
   Int_t           genTau_motherIndex[2];   //[ngenTau]
   Int_t           nGenPart;
   Int_t           GenPart_motherId[17];   //[nGenPart]
   Int_t           GenPart_grandmotherId[17];   //[nGenPart]
   Int_t           GenPart_sourceId[17];   //[nGenPart]
   Double_t        GenPart_charge[17];   //[nGenPart]
   Int_t           GenPart_status[17];   //[nGenPart]
   Int_t           GenPart_pdgId[17];   //[nGenPart]
   Double_t        GenPart_pt[17];   //[nGenPart]
   Double_t        GenPart_eta[17];   //[nGenPart]
   Double_t        GenPart_phi[17];   //[nGenPart]
   Double_t        GenPart_mass[17];   //[nGenPart]
   Int_t           GenPart_motherIndex[17];   //[nGenPart]
   Int_t           nisoTrack;
   Int_t           isoTrack_pdgId[5];   //[nisoTrack]
   Double_t        isoTrack_pt[5];   //[nisoTrack]
   Double_t        isoTrack_eta[5];   //[nisoTrack]
   Double_t        isoTrack_phi[5];   //[nisoTrack]
   Double_t        isoTrack_mass[5];   //[nisoTrack]
   Int_t           isoTrack_charge[5];   //[nisoTrack]
   Double_t        isoTrack_dz[5];   //[nisoTrack]
   Double_t        isoTrack_absIso[5];   //[nisoTrack]
   Int_t           isoTrack_mcMatchId[5];   //[nisoTrack]
   Int_t           njet;
   Double_t        jet_area[11];   //[njet]
   Double_t        jet_qgl[11];   //[njet]
   Double_t        jet_ptd[11];   //[njet]
   Double_t        jet_axis2[11];   //[njet]
   Int_t           jet_mult[11];   //[njet]
   Int_t           jet_partonId[11];   //[njet]
   Int_t           jet_partonMotherId[11];   //[njet]
   Double_t        jet_nLeptons[11];   //[njet]
   Int_t           jet_id[11];   //[njet]
   Int_t           jet_puId[11];   //[njet]
   Double_t        jet_btagCSV[11];   //[njet]
   Double_t        jet_btagCMVA[11];   //[njet]
   Double_t        jet_rawPt[11];   //[njet]
   Double_t        jet_mcPt[11];   //[njet]
   Int_t           jet_mcFlavour[11];   //[njet]
   Int_t           jet_mcMatchId[11];   //[njet]
   Double_t        jet_pt[11];   //[njet]
   Double_t        jet_eta[11];   //[njet]
   Double_t        jet_phi[11];   //[njet]
   Double_t        jet_mass[11];   //[njet]
   Int_t           jet_mcMatchFlav[11];   //[njet]
   Int_t           nlep;
   Int_t           lep_charge[3];   //[nlep]
   Int_t           lep_tightId[3];   //[nlep]
   Int_t           lep_eleCutIdCSA14_25ns_v1[3];   //[nlep]
   Int_t           lep_eleCutIdCSA14_50ns_v1[3];   //[nlep]
   Double_t        lep_dxy[3];   //[nlep]
   Double_t        lep_dz[3];   //[nlep]
   Double_t        lep_edxy[3];   //[nlep]
   Double_t        lep_edz[3];   //[nlep]
   Double_t        lep_ip3d[3];   //[nlep]
   Double_t        lep_sip3d[3];   //[nlep]
   Int_t           lep_convVeto[3];   //[nlep]
   Int_t           lep_lostHits[3];   //[nlep]
   Double_t        lep_relIso03[3];   //[nlep]
   Double_t        lep_relIso04[3];   //[nlep]
   Int_t           lep_tightCharge[3];   //[nlep]
   Int_t           lep_mcMatchId[3];   //[nlep]
   Int_t           lep_mcMatchAny[3];   //[nlep]
   Int_t           lep_mcMatchTau[3];   //[nlep]
   Int_t           lep_pdgId[3];   //[nlep]
   Double_t        lep_pt[3];   //[nlep]
   Double_t        lep_eta[3];   //[nlep]
   Double_t        lep_phi[3];   //[nlep]
   Double_t        lep_mass[3];   //[nlep]
   Int_t           lep_eleMVAId[3];   //[nlep]
   Double_t        lep_mvaId[3];   //[nlep]
   Double_t        lep_mvaIdTrig[3];   //[nlep]
   Double_t        lep_mvaSusy[3];   //[nlep]
   Double_t        lep_jetPtRatio[3];   //[nlep]
   Double_t        lep_jetBTagCSV[3];   //[nlep]
   Double_t        lep_jetBTagCMVA[3];   //[nlep]
   Double_t        lep_jetDR[3];   //[nlep]
   Int_t           ngenLepFromTau;
   Int_t           genLepFromTau_motherId[3];   //[ngenLepFromTau]
   Int_t           genLepFromTau_grandmotherId[3];   //[ngenLepFromTau]
   Int_t           genLepFromTau_sourceId[3];   //[ngenLepFromTau]
   Double_t        genLepFromTau_charge[3];   //[ngenLepFromTau]
   Int_t           genLepFromTau_status[3];   //[ngenLepFromTau]
   Int_t           genLepFromTau_pdgId[3];   //[ngenLepFromTau]
   Double_t        genLepFromTau_pt[3];   //[ngenLepFromTau]
   Double_t        genLepFromTau_eta[3];   //[ngenLepFromTau]
   Double_t        genLepFromTau_phi[3];   //[ngenLepFromTau]
   Double_t        genLepFromTau_mass[3];   //[ngenLepFromTau]
   Int_t           genLepFromTau_motherIndex[3];   //[ngenLepFromTau]
   Int_t           ngenJet;
   Int_t           genJet_pdgId[10];   //[ngenJet]
   Double_t        genJet_pt[10];   //[ngenJet]
   Double_t        genJet_eta[10];   //[ngenJet]
   Double_t        genJet_phi[10];   //[ngenJet]
   Double_t        genJet_mass[10];   //[ngenJet]
   Double_t        genJet_charge[10];   //[ngenJet]
   Int_t           genJet_status[10];   //[ngenJet]
   Int_t           ngamma;
   Int_t           gamma_idCutBased[1];   //[ngamma]
   Double_t        gamma_hOverE[1];   //[ngamma]
   Double_t        gamma_r9[1];   //[ngamma]
   Double_t        gamma_sigmaIetaIeta[1];   //[ngamma]
   Double_t        gamma_chHadIso[1];   //[ngamma]
   Double_t        gamma_neuHadIso[1];   //[ngamma]
   Double_t        gamma_phIso[1];   //[ngamma]
   Int_t           gamma_mcMatchId[1];   //[ngamma]
   Int_t           gamma_pdgId[1];   //[ngamma]
   Double_t        gamma_pt[1];   //[ngamma]
   Double_t        gamma_eta[1];   //[ngamma]
   Double_t        gamma_phi[1];   //[ngamma]
   Double_t        gamma_mass[1];   //[ngamma]
   Int_t           nmuon;
   Int_t           muon_charge[2];   //[nmuon]
   Int_t           muon_tightId[2];   //[nmuon]
   Int_t           muon_eleCutIdCSA14_25ns_v1[2];   //[nmuon]
   Int_t           muon_eleCutIdCSA14_50ns_v1[2];   //[nmuon]
   Double_t        muon_dxy[2];   //[nmuon]
   Double_t        muon_dz[2];   //[nmuon]
   Double_t        muon_edxy[2];   //[nmuon]
   Double_t        muon_edz[2];   //[nmuon]
   Double_t        muon_ip3d[2];   //[nmuon]
   Double_t        muon_sip3d[2];   //[nmuon]
   Int_t           muon_convVeto[2];   //[nmuon]
   Int_t           muon_lostHits[2];   //[nmuon]
   Double_t        muon_relIso03[2];   //[nmuon]
   Double_t        muon_relIso04[2];   //[nmuon]
   Int_t           muon_tightCharge[2];   //[nmuon]
   Int_t           muon_mcMatchId[2];   //[nmuon]
   Int_t           muon_mcMatchAny[2];   //[nmuon]
   Int_t           muon_mcMatchTau[2];   //[nmuon]
   Int_t           muon_pdgId[2];   //[nmuon]
   Double_t        muon_pt[2];   //[nmuon]
   Double_t        muon_eta[2];   //[nmuon]
   Double_t        muon_phi[2];   //[nmuon]
   Double_t        muon_mass[2];   //[nmuon]
   Int_t           muon_eleMVAId[2];   //[nmuon]
   Double_t        muon_mvaId[2];   //[nmuon]
   Double_t        muon_mvaIdTrig[2];   //[nmuon]
   Double_t        muon_mvaSusy[2];   //[nmuon]
   Double_t        muon_jetPtRatio[2];   //[nmuon]
   Double_t        muon_jetBTagCSV[2];   //[nmuon]
   Double_t        muon_jetBTagCMVA[2];   //[nmuon]
   Double_t        muon_jetDR[2];   //[nmuon]
   Int_t           ntau;
   Int_t           tau_charge[3];   //[ntau]
   Double_t        tau_dxy[3];   //[ntau]
   Double_t        tau_dz[3];   //[ntau]
   Int_t           tau_idCI3hit[3];   //[ntau]
   Double_t        tau_isoCI3hit[3];   //[ntau]
   Int_t           tau_mcMatchId[3];   //[ntau]
   Int_t           tau_pdgId[3];   //[ntau]
   Double_t        tau_pt[3];   //[ntau]
   Double_t        tau_eta[3];   //[ntau]
   Double_t        tau_phi[3];   //[ntau]
   Double_t        tau_mass[3];   //[ntau]
   Int_t           ngenLep;
   Int_t           genLep_motherId[2];   //[ngenLep]
   Int_t           genLep_grandmotherId[2];   //[ngenLep]
   Int_t           genLep_sourceId[2];   //[ngenLep]
   Double_t        genLep_charge[2];   //[ngenLep]
   Int_t           genLep_status[2];   //[ngenLep]
   Int_t           genLep_pdgId[2];   //[ngenLep]
   Double_t        genLep_pt[2];   //[ngenLep]
   Double_t        genLep_eta[2];   //[ngenLep]
   Double_t        genLep_phi[2];   //[ngenLep]
   Double_t        genLep_mass[2];   //[ngenLep]
   Int_t           genLep_motherIndex[2];   //[ngenLep]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_isData;   //!
   TBranch        *b_xsec;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_nTrueInt;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_nVert;   //!
   TBranch        *b_nJet25;   //!
   TBranch        *b_nBJetLoose25;   //!
   TBranch        *b_nBJetMedium25;   //!
   TBranch        *b_nBJetTight25;   //!
   TBranch        *b_nBJetCMVALoose25;   //!
   TBranch        *b_nBJetCMVAMedium25;   //!
   TBranch        *b_nBJetCMVATight25;   //!
   TBranch        *b_nJet40;   //!
   TBranch        *b_nJet40a;   //!
   TBranch        *b_nBJetLoose40;   //!
   TBranch        *b_nBJetMedium40;   //!
   TBranch        *b_nBJetTight40;   //!
   TBranch        *b_nBJetCMVALoose40;   //!
   TBranch        *b_nBJetCMVAMedium40;   //!
   TBranch        *b_nBJetCMVATight40;   //!
   TBranch        *b_nLepGood20;   //!
   TBranch        *b_nLepGood15;   //!
   TBranch        *b_nLepGood10;   //!
   TBranch        *b_GenSusyMScan1;   //!
   TBranch        *b_GenSusyMScan2;   //!
   TBranch        *b_GenSusyMScan3;   //!
   TBranch        *b_GenSusyMScan4;   //!
   TBranch        *b_GenSusyMGluino;   //!
   TBranch        *b_GenSusyMGravitino;   //!
   TBranch        *b_GenSusyMStop;   //!
   TBranch        *b_GenSusyMSbottom;   //!
   TBranch        *b_GenSusyMStop2;   //!
   TBranch        *b_GenSusyMSbottom2;   //!
   TBranch        *b_GenSusyMSquark;   //!
   TBranch        *b_GenSusyMNeutralino;   //!
   TBranch        *b_GenSusyMNeutralino2;   //!
   TBranch        *b_GenSusyMNeutralino3;   //!
   TBranch        *b_GenSusyMNeutralino4;   //!
   TBranch        *b_GenSusyMChargino;   //!
   TBranch        *b_GenSusyMChargino2;   //!
   TBranch        *b_genBin;   //!
   TBranch        *b_genQScale;   //!
   TBranch        *b_ht40;   //!
   TBranch        *b_ht50;   //!
   TBranch        *b_deltaPhiMin;   //!
   TBranch        *b_diffMetMht;   //!
   TBranch        *b_mht40_pt;   //!
   TBranch        *b_mht40_phi;   //!
   TBranch        *b_mht50_pt;   //!
   TBranch        *b_mht50_phi;   //!
   TBranch        *b_biasedDPhi;   //!
   TBranch        *b_nMuons10;   //!
   TBranch        *b_nElectrons10;   //!
   TBranch        *b_nTaus20;   //!
   TBranch        *b_nGammas25;   //!
   TBranch        *b_nBJet50;   //!
   TBranch        *b_alphaT;   //!
   TBranch        *b_mtw;   //!
   TBranch        *b_mtwTau;   //!
   TBranch        *b_IsoTrack_mtw;   //!
   TBranch        *b_mll;   //!
   TBranch        *b_HLT_Muon;   //!
   TBranch        *b_HLT_Prompt;   //!
   TBranch        *b_HLT_Photon;   //!
   TBranch        *b_HLT_SingleMu;   //!
   TBranch        *b_HLT_Bulk;   //!
   TBranch        *b_HLT_Parked;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_trackingFailureFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_met_pt;   //!
   TBranch        *b_met_eta;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_met_mass;   //!
   TBranch        *b_met_sumEt;   //!
   TBranch        *b_met_genPt;   //!
   TBranch        *b_met_genPhi;   //!
   TBranch        *b_met_genEta;   //!
   TBranch        *b_metNoMu_pt;   //!
   TBranch        *b_metNoMu_eta;   //!
   TBranch        *b_metNoMu_phi;   //!
   TBranch        *b_metNoMu_mass;   //!
   TBranch        *b_ngenPart;   //!
   TBranch        *b_genPart_charge;   //!
   TBranch        *b_genPart_status;   //!
   TBranch        *b_genPart_pdgId;   //!
   TBranch        *b_genPart_pt;   //!
   TBranch        *b_genPart_eta;   //!
   TBranch        *b_genPart_phi;   //!
   TBranch        *b_genPart_mass;   //!
   TBranch        *b_genPart_motherId;   //!
   TBranch        *b_genPart_grandmotherId;   //!
   TBranch        *b_ngenTau;   //!
   TBranch        *b_genTau_motherId;   //!
   TBranch        *b_genTau_grandmotherId;   //!
   TBranch        *b_genTau_sourceId;   //!
   TBranch        *b_genTau_charge;   //!
   TBranch        *b_genTau_status;   //!
   TBranch        *b_genTau_pdgId;   //!
   TBranch        *b_genTau_pt;   //!
   TBranch        *b_genTau_eta;   //!
   TBranch        *b_genTau_phi;   //!
   TBranch        *b_genTau_mass;   //!
   TBranch        *b_genTau_motherIndex;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_motherId;   //!
   TBranch        *b_GenPart_grandmotherId;   //!
   TBranch        *b_GenPart_sourceId;   //!
   TBranch        *b_GenPart_charge;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_motherIndex;   //!
   TBranch        *b_nisoTrack;   //!
   TBranch        *b_isoTrack_pdgId;   //!
   TBranch        *b_isoTrack_pt;   //!
   TBranch        *b_isoTrack_eta;   //!
   TBranch        *b_isoTrack_phi;   //!
   TBranch        *b_isoTrack_mass;   //!
   TBranch        *b_isoTrack_charge;   //!
   TBranch        *b_isoTrack_dz;   //!
   TBranch        *b_isoTrack_absIso;   //!
   TBranch        *b_isoTrack_mcMatchId;   //!
   TBranch        *b_njet;   //!
   TBranch        *b_jet_area;   //!
   TBranch        *b_jet_qgl;   //!
   TBranch        *b_jet_ptd;   //!
   TBranch        *b_jet_axis2;   //!
   TBranch        *b_jet_mult;   //!
   TBranch        *b_jet_partonId;   //!
   TBranch        *b_jet_partonMotherId;   //!
   TBranch        *b_jet_nLeptons;   //!
   TBranch        *b_jet_id;   //!
   TBranch        *b_jet_puId;   //!
   TBranch        *b_jet_btagCSV;   //!
   TBranch        *b_jet_btagCMVA;   //!
   TBranch        *b_jet_rawPt;   //!
   TBranch        *b_jet_mcPt;   //!
   TBranch        *b_jet_mcFlavour;   //!
   TBranch        *b_jet_mcMatchId;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_mass;   //!
   TBranch        *b_jet_mcMatchFlav;   //!
   TBranch        *b_nlep;   //!
   TBranch        *b_lep_charge;   //!
   TBranch        *b_lep_tightId;   //!
   TBranch        *b_lep_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_lep_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_lep_dxy;   //!
   TBranch        *b_lep_dz;   //!
   TBranch        *b_lep_edxy;   //!
   TBranch        *b_lep_edz;   //!
   TBranch        *b_lep_ip3d;   //!
   TBranch        *b_lep_sip3d;   //!
   TBranch        *b_lep_convVeto;   //!
   TBranch        *b_lep_lostHits;   //!
   TBranch        *b_lep_relIso03;   //!
   TBranch        *b_lep_relIso04;   //!
   TBranch        *b_lep_tightCharge;   //!
   TBranch        *b_lep_mcMatchId;   //!
   TBranch        *b_lep_mcMatchAny;   //!
   TBranch        *b_lep_mcMatchTau;   //!
   TBranch        *b_lep_pdgId;   //!
   TBranch        *b_lep_pt;   //!
   TBranch        *b_lep_eta;   //!
   TBranch        *b_lep_phi;   //!
   TBranch        *b_lep_mass;   //!
   TBranch        *b_lep_eleMVAId;   //!
   TBranch        *b_lep_mvaId;   //!
   TBranch        *b_lep_mvaIdTrig;   //!
   TBranch        *b_lep_mvaSusy;   //!
   TBranch        *b_lep_jetPtRatio;   //!
   TBranch        *b_lep_jetBTagCSV;   //!
   TBranch        *b_lep_jetBTagCMVA;   //!
   TBranch        *b_lep_jetDR;   //!
   TBranch        *b_ngenLepFromTau;   //!
   TBranch        *b_genLepFromTau_motherId;   //!
   TBranch        *b_genLepFromTau_grandmotherId;   //!
   TBranch        *b_genLepFromTau_sourceId;   //!
   TBranch        *b_genLepFromTau_charge;   //!
   TBranch        *b_genLepFromTau_status;   //!
   TBranch        *b_genLepFromTau_pdgId;   //!
   TBranch        *b_genLepFromTau_pt;   //!
   TBranch        *b_genLepFromTau_eta;   //!
   TBranch        *b_genLepFromTau_phi;   //!
   TBranch        *b_genLepFromTau_mass;   //!
   TBranch        *b_genLepFromTau_motherIndex;   //!
   TBranch        *b_ngenJet;   //!
   TBranch        *b_genJet_pdgId;   //!
   TBranch        *b_genJet_pt;   //!
   TBranch        *b_genJet_eta;   //!
   TBranch        *b_genJet_phi;   //!
   TBranch        *b_genJet_mass;   //!
   TBranch        *b_genJet_charge;   //!
   TBranch        *b_genJet_status;   //!
   TBranch        *b_ngamma;   //!
   TBranch        *b_gamma_idCutBased;   //!
   TBranch        *b_gamma_hOverE;   //!
   TBranch        *b_gamma_r9;   //!
   TBranch        *b_gamma_sigmaIetaIeta;   //!
   TBranch        *b_gamma_chHadIso;   //!
   TBranch        *b_gamma_neuHadIso;   //!
   TBranch        *b_gamma_phIso;   //!
   TBranch        *b_gamma_mcMatchId;   //!
   TBranch        *b_gamma_pdgId;   //!
   TBranch        *b_gamma_pt;   //!
   TBranch        *b_gamma_eta;   //!
   TBranch        *b_gamma_phi;   //!
   TBranch        *b_gamma_mass;   //!
   TBranch        *b_nmuon;   //!
   TBranch        *b_muon_charge;   //!
   TBranch        *b_muon_tightId;   //!
   TBranch        *b_muon_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_muon_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_muon_dxy;   //!
   TBranch        *b_muon_dz;   //!
   TBranch        *b_muon_edxy;   //!
   TBranch        *b_muon_edz;   //!
   TBranch        *b_muon_ip3d;   //!
   TBranch        *b_muon_sip3d;   //!
   TBranch        *b_muon_convVeto;   //!
   TBranch        *b_muon_lostHits;   //!
   TBranch        *b_muon_relIso03;   //!
   TBranch        *b_muon_relIso04;   //!
   TBranch        *b_muon_tightCharge;   //!
   TBranch        *b_muon_mcMatchId;   //!
   TBranch        *b_muon_mcMatchAny;   //!
   TBranch        *b_muon_mcMatchTau;   //!
   TBranch        *b_muon_pdgId;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_mass;   //!
   TBranch        *b_muon_eleMVAId;   //!
   TBranch        *b_muon_mvaId;   //!
   TBranch        *b_muon_mvaIdTrig;   //!
   TBranch        *b_muon_mvaSusy;   //!
   TBranch        *b_muon_jetPtRatio;   //!
   TBranch        *b_muon_jetBTagCSV;   //!
   TBranch        *b_muon_jetBTagCMVA;   //!
   TBranch        *b_muon_jetDR;   //!
   TBranch        *b_ntau;   //!
   TBranch        *b_tau_charge;   //!
   TBranch        *b_tau_dxy;   //!
   TBranch        *b_tau_dz;   //!
   TBranch        *b_tau_idCI3hit;   //!
   TBranch        *b_tau_isoCI3hit;   //!
   TBranch        *b_tau_mcMatchId;   //!
   TBranch        *b_tau_pdgId;   //!
   TBranch        *b_tau_pt;   //!
   TBranch        *b_tau_eta;   //!
   TBranch        *b_tau_phi;   //!
   TBranch        *b_tau_mass;   //!
   TBranch        *b_ngenLep;   //!
   TBranch        *b_genLep_motherId;   //!
   TBranch        *b_genLep_grandmotherId;   //!
   TBranch        *b_genLep_sourceId;   //!
   TBranch        *b_genLep_charge;   //!
   TBranch        *b_genLep_status;   //!
   TBranch        *b_genLep_pdgId;   //!
   TBranch        *b_genLep_pt;   //!
   TBranch        *b_genLep_eta;   //!
   TBranch        *b_genLep_phi;   //!
   TBranch        *b_genLep_mass;   //!
   TBranch        *b_genLep_motherIndex;   //!

   treeReader(TTree *tree=0);
   virtual ~treeReader();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef treeReader_cxx
treeReader::treeReader(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("samples/tree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("samples/tree.root");
      }
      f->GetObject("tree",tree);

   }
   Init(tree);
}

treeReader::~treeReader()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t treeReader::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t treeReader::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void treeReader::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("isData", &isData, &b_isData);
   fChain->SetBranchAddress("xsec", &xsec, &b_xsec);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("nTrueInt", &nTrueInt, &b_nTrueInt);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("nVert", &nVert, &b_nVert);
   fChain->SetBranchAddress("nJet25", &nJet25, &b_nJet25);
   fChain->SetBranchAddress("nBJetLoose25", &nBJetLoose25, &b_nBJetLoose25);
   fChain->SetBranchAddress("nBJetMedium25", &nBJetMedium25, &b_nBJetMedium25);
   fChain->SetBranchAddress("nBJetTight25", &nBJetTight25, &b_nBJetTight25);
   fChain->SetBranchAddress("nBJetCMVALoose25", &nBJetCMVALoose25, &b_nBJetCMVALoose25);
   fChain->SetBranchAddress("nBJetCMVAMedium25", &nBJetCMVAMedium25, &b_nBJetCMVAMedium25);
   fChain->SetBranchAddress("nBJetCMVATight25", &nBJetCMVATight25, &b_nBJetCMVATight25);
   fChain->SetBranchAddress("nJet40", &nJet40, &b_nJet40);
   fChain->SetBranchAddress("nJet40a", &nJet40a, &b_nJet40a);
   fChain->SetBranchAddress("nBJetLoose40", &nBJetLoose40, &b_nBJetLoose40);
   fChain->SetBranchAddress("nBJetMedium40", &nBJetMedium40, &b_nBJetMedium40);
   fChain->SetBranchAddress("nBJetTight40", &nBJetTight40, &b_nBJetTight40);
   fChain->SetBranchAddress("nBJetCMVALoose40", &nBJetCMVALoose40, &b_nBJetCMVALoose40);
   fChain->SetBranchAddress("nBJetCMVAMedium40", &nBJetCMVAMedium40, &b_nBJetCMVAMedium40);
   fChain->SetBranchAddress("nBJetCMVATight40", &nBJetCMVATight40, &b_nBJetCMVATight40);
   fChain->SetBranchAddress("nLepGood20", &nLepGood20, &b_nLepGood20);
   fChain->SetBranchAddress("nLepGood15", &nLepGood15, &b_nLepGood15);
   fChain->SetBranchAddress("nLepGood10", &nLepGood10, &b_nLepGood10);
   fChain->SetBranchAddress("GenSusyMScan1", &GenSusyMScan1, &b_GenSusyMScan1);
   fChain->SetBranchAddress("GenSusyMScan2", &GenSusyMScan2, &b_GenSusyMScan2);
   fChain->SetBranchAddress("GenSusyMScan3", &GenSusyMScan3, &b_GenSusyMScan3);
   fChain->SetBranchAddress("GenSusyMScan4", &GenSusyMScan4, &b_GenSusyMScan4);
   fChain->SetBranchAddress("GenSusyMGluino", &GenSusyMGluino, &b_GenSusyMGluino);
   fChain->SetBranchAddress("GenSusyMGravitino", &GenSusyMGravitino, &b_GenSusyMGravitino);
   fChain->SetBranchAddress("GenSusyMStop", &GenSusyMStop, &b_GenSusyMStop);
   fChain->SetBranchAddress("GenSusyMSbottom", &GenSusyMSbottom, &b_GenSusyMSbottom);
   fChain->SetBranchAddress("GenSusyMStop2", &GenSusyMStop2, &b_GenSusyMStop2);
   fChain->SetBranchAddress("GenSusyMSbottom2", &GenSusyMSbottom2, &b_GenSusyMSbottom2);
   fChain->SetBranchAddress("GenSusyMSquark", &GenSusyMSquark, &b_GenSusyMSquark);
   fChain->SetBranchAddress("GenSusyMNeutralino", &GenSusyMNeutralino, &b_GenSusyMNeutralino);
   fChain->SetBranchAddress("GenSusyMNeutralino2", &GenSusyMNeutralino2, &b_GenSusyMNeutralino2);
   fChain->SetBranchAddress("GenSusyMNeutralino3", &GenSusyMNeutralino3, &b_GenSusyMNeutralino3);
   fChain->SetBranchAddress("GenSusyMNeutralino4", &GenSusyMNeutralino4, &b_GenSusyMNeutralino4);
   fChain->SetBranchAddress("GenSusyMChargino", &GenSusyMChargino, &b_GenSusyMChargino);
   fChain->SetBranchAddress("GenSusyMChargino2", &GenSusyMChargino2, &b_GenSusyMChargino2);
   fChain->SetBranchAddress("genBin", &genBin, &b_genBin);
   fChain->SetBranchAddress("genQScale", &genQScale, &b_genQScale);
   fChain->SetBranchAddress("ht40", &ht40, &b_ht40);
   fChain->SetBranchAddress("ht50", &ht50, &b_ht50);
   fChain->SetBranchAddress("deltaPhiMin", &deltaPhiMin, &b_deltaPhiMin);
   fChain->SetBranchAddress("diffMetMht", &diffMetMht, &b_diffMetMht);
   fChain->SetBranchAddress("mht40_pt", &mht40_pt, &b_mht40_pt);
   fChain->SetBranchAddress("mht40_phi", &mht40_phi, &b_mht40_phi);
   fChain->SetBranchAddress("mht50_pt", &mht50_pt, &b_mht50_pt);
   fChain->SetBranchAddress("mht50_phi", &mht50_phi, &b_mht50_phi);
   fChain->SetBranchAddress("biasedDPhi", &biasedDPhi, &b_biasedDPhi);
   fChain->SetBranchAddress("nMuons10", &nMuons10, &b_nMuons10);
   fChain->SetBranchAddress("nElectrons10", &nElectrons10, &b_nElectrons10);
   fChain->SetBranchAddress("nTaus20", &nTaus20, &b_nTaus20);
   fChain->SetBranchAddress("nGammas25", &nGammas25, &b_nGammas25);
   fChain->SetBranchAddress("nBJet50", &nBJet50, &b_nBJet50);
   fChain->SetBranchAddress("alphaT", &alphaT, &b_alphaT);
   fChain->SetBranchAddress("mtw", &mtw, &b_mtw);
   fChain->SetBranchAddress("mtwTau", &mtwTau, &b_mtwTau);
   fChain->SetBranchAddress("IsoTrack_mtw", &IsoTrack_mtw, &b_IsoTrack_mtw);
   fChain->SetBranchAddress("mll", &mll, &b_mll);
   fChain->SetBranchAddress("HLT_Muon", &HLT_Muon, &b_HLT_Muon);
   fChain->SetBranchAddress("HLT_Prompt", &HLT_Prompt, &b_HLT_Prompt);
   fChain->SetBranchAddress("HLT_Photon", &HLT_Photon, &b_HLT_Photon);
   fChain->SetBranchAddress("HLT_SingleMu", &HLT_SingleMu, &b_HLT_SingleMu);
   fChain->SetBranchAddress("HLT_Bulk", &HLT_Bulk, &b_HLT_Bulk);
   fChain->SetBranchAddress("HLT_Parked", &HLT_Parked, &b_HLT_Parked);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_trackingFailureFilter", &Flag_trackingFailureFilter, &b_Flag_trackingFailureFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("met_pt", &met_pt, &b_met_pt);
   fChain->SetBranchAddress("met_eta", &met_eta, &b_met_eta);
   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
   fChain->SetBranchAddress("met_mass", &met_mass, &b_met_mass);
   fChain->SetBranchAddress("met_sumEt", &met_sumEt, &b_met_sumEt);
   fChain->SetBranchAddress("met_genPt", &met_genPt, &b_met_genPt);
   fChain->SetBranchAddress("met_genPhi", &met_genPhi, &b_met_genPhi);
   fChain->SetBranchAddress("met_genEta", &met_genEta, &b_met_genEta);
   fChain->SetBranchAddress("metNoMu_pt", &metNoMu_pt, &b_metNoMu_pt);
   fChain->SetBranchAddress("metNoMu_eta", &metNoMu_eta, &b_metNoMu_eta);
   fChain->SetBranchAddress("metNoMu_phi", &metNoMu_phi, &b_metNoMu_phi);
   fChain->SetBranchAddress("metNoMu_mass", &metNoMu_mass, &b_metNoMu_mass);
   fChain->SetBranchAddress("ngenPart", &ngenPart, &b_ngenPart);
   fChain->SetBranchAddress("genPart_charge", genPart_charge, &b_genPart_charge);
   fChain->SetBranchAddress("genPart_status", genPart_status, &b_genPart_status);
   fChain->SetBranchAddress("genPart_pdgId", genPart_pdgId, &b_genPart_pdgId);
   fChain->SetBranchAddress("genPart_pt", genPart_pt, &b_genPart_pt);
   fChain->SetBranchAddress("genPart_eta", genPart_eta, &b_genPart_eta);
   fChain->SetBranchAddress("genPart_phi", genPart_phi, &b_genPart_phi);
   fChain->SetBranchAddress("genPart_mass", genPart_mass, &b_genPart_mass);
   fChain->SetBranchAddress("genPart_motherId", genPart_motherId, &b_genPart_motherId);
   fChain->SetBranchAddress("genPart_grandmotherId", genPart_grandmotherId, &b_genPart_grandmotherId);
   fChain->SetBranchAddress("ngenTau", &ngenTau, &b_ngenTau);
   fChain->SetBranchAddress("genTau_motherId", genTau_motherId, &b_genTau_motherId);
   fChain->SetBranchAddress("genTau_grandmotherId", genTau_grandmotherId, &b_genTau_grandmotherId);
   fChain->SetBranchAddress("genTau_sourceId", genTau_sourceId, &b_genTau_sourceId);
   fChain->SetBranchAddress("genTau_charge", genTau_charge, &b_genTau_charge);
   fChain->SetBranchAddress("genTau_status", genTau_status, &b_genTau_status);
   fChain->SetBranchAddress("genTau_pdgId", genTau_pdgId, &b_genTau_pdgId);
   fChain->SetBranchAddress("genTau_pt", genTau_pt, &b_genTau_pt);
   fChain->SetBranchAddress("genTau_eta", genTau_eta, &b_genTau_eta);
   fChain->SetBranchAddress("genTau_phi", genTau_phi, &b_genTau_phi);
   fChain->SetBranchAddress("genTau_mass", genTau_mass, &b_genTau_mass);
   fChain->SetBranchAddress("genTau_motherIndex", genTau_motherIndex, &b_genTau_motherIndex);
   fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   fChain->SetBranchAddress("GenPart_motherId", GenPart_motherId, &b_GenPart_motherId);
   fChain->SetBranchAddress("GenPart_grandmotherId", GenPart_grandmotherId, &b_GenPart_grandmotherId);
   fChain->SetBranchAddress("GenPart_sourceId", GenPart_sourceId, &b_GenPart_sourceId);
   fChain->SetBranchAddress("GenPart_charge", GenPart_charge, &b_GenPart_charge);
   fChain->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   fChain->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   fChain->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);
   fChain->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   fChain->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   fChain->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   fChain->SetBranchAddress("GenPart_motherIndex", GenPart_motherIndex, &b_GenPart_motherIndex);
   fChain->SetBranchAddress("nisoTrack", &nisoTrack, &b_nisoTrack);
   fChain->SetBranchAddress("isoTrack_pdgId", isoTrack_pdgId, &b_isoTrack_pdgId);
   fChain->SetBranchAddress("isoTrack_pt", isoTrack_pt, &b_isoTrack_pt);
   fChain->SetBranchAddress("isoTrack_eta", isoTrack_eta, &b_isoTrack_eta);
   fChain->SetBranchAddress("isoTrack_phi", isoTrack_phi, &b_isoTrack_phi);
   fChain->SetBranchAddress("isoTrack_mass", isoTrack_mass, &b_isoTrack_mass);
   fChain->SetBranchAddress("isoTrack_charge", isoTrack_charge, &b_isoTrack_charge);
   fChain->SetBranchAddress("isoTrack_dz", isoTrack_dz, &b_isoTrack_dz);
   fChain->SetBranchAddress("isoTrack_absIso", isoTrack_absIso, &b_isoTrack_absIso);
   fChain->SetBranchAddress("isoTrack_mcMatchId", isoTrack_mcMatchId, &b_isoTrack_mcMatchId);
   fChain->SetBranchAddress("njet", &njet, &b_njet);
   fChain->SetBranchAddress("jet_area", jet_area, &b_jet_area);
   fChain->SetBranchAddress("jet_qgl", jet_qgl, &b_jet_qgl);
   fChain->SetBranchAddress("jet_ptd", jet_ptd, &b_jet_ptd);
   fChain->SetBranchAddress("jet_axis2", jet_axis2, &b_jet_axis2);
   fChain->SetBranchAddress("jet_mult", jet_mult, &b_jet_mult);
   fChain->SetBranchAddress("jet_partonId", jet_partonId, &b_jet_partonId);
   fChain->SetBranchAddress("jet_partonMotherId", jet_partonMotherId, &b_jet_partonMotherId);
   fChain->SetBranchAddress("jet_nLeptons", jet_nLeptons, &b_jet_nLeptons);
   fChain->SetBranchAddress("jet_id", jet_id, &b_jet_id);
   fChain->SetBranchAddress("jet_puId", jet_puId, &b_jet_puId);
   fChain->SetBranchAddress("jet_btagCSV", jet_btagCSV, &b_jet_btagCSV);
   fChain->SetBranchAddress("jet_btagCMVA", jet_btagCMVA, &b_jet_btagCMVA);
   fChain->SetBranchAddress("jet_rawPt", jet_rawPt, &b_jet_rawPt);
   fChain->SetBranchAddress("jet_mcPt", jet_mcPt, &b_jet_mcPt);
   fChain->SetBranchAddress("jet_mcFlavour", jet_mcFlavour, &b_jet_mcFlavour);
   fChain->SetBranchAddress("jet_mcMatchId", jet_mcMatchId, &b_jet_mcMatchId);
   fChain->SetBranchAddress("jet_pt", jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_eta", jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_mass", jet_mass, &b_jet_mass);
   fChain->SetBranchAddress("jet_mcMatchFlav", jet_mcMatchFlav, &b_jet_mcMatchFlav);
   fChain->SetBranchAddress("nlep", &nlep, &b_nlep);
   fChain->SetBranchAddress("lep_charge", lep_charge, &b_lep_charge);
   fChain->SetBranchAddress("lep_tightId", lep_tightId, &b_lep_tightId);
   fChain->SetBranchAddress("lep_eleCutIdCSA14_25ns_v1", lep_eleCutIdCSA14_25ns_v1, &b_lep_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("lep_eleCutIdCSA14_50ns_v1", lep_eleCutIdCSA14_50ns_v1, &b_lep_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("lep_dxy", lep_dxy, &b_lep_dxy);
   fChain->SetBranchAddress("lep_dz", lep_dz, &b_lep_dz);
   fChain->SetBranchAddress("lep_edxy", lep_edxy, &b_lep_edxy);
   fChain->SetBranchAddress("lep_edz", lep_edz, &b_lep_edz);
   fChain->SetBranchAddress("lep_ip3d", lep_ip3d, &b_lep_ip3d);
   fChain->SetBranchAddress("lep_sip3d", lep_sip3d, &b_lep_sip3d);
   fChain->SetBranchAddress("lep_convVeto", lep_convVeto, &b_lep_convVeto);
   fChain->SetBranchAddress("lep_lostHits", lep_lostHits, &b_lep_lostHits);
   fChain->SetBranchAddress("lep_relIso03", lep_relIso03, &b_lep_relIso03);
   fChain->SetBranchAddress("lep_relIso04", lep_relIso04, &b_lep_relIso04);
   fChain->SetBranchAddress("lep_tightCharge", lep_tightCharge, &b_lep_tightCharge);
   fChain->SetBranchAddress("lep_mcMatchId", lep_mcMatchId, &b_lep_mcMatchId);
   fChain->SetBranchAddress("lep_mcMatchAny", lep_mcMatchAny, &b_lep_mcMatchAny);
   fChain->SetBranchAddress("lep_mcMatchTau", lep_mcMatchTau, &b_lep_mcMatchTau);
   fChain->SetBranchAddress("lep_pdgId", lep_pdgId, &b_lep_pdgId);
   fChain->SetBranchAddress("lep_pt", lep_pt, &b_lep_pt);
   fChain->SetBranchAddress("lep_eta", lep_eta, &b_lep_eta);
   fChain->SetBranchAddress("lep_phi", lep_phi, &b_lep_phi);
   fChain->SetBranchAddress("lep_mass", lep_mass, &b_lep_mass);
   fChain->SetBranchAddress("lep_eleMVAId", lep_eleMVAId, &b_lep_eleMVAId);
   fChain->SetBranchAddress("lep_mvaId", lep_mvaId, &b_lep_mvaId);
   fChain->SetBranchAddress("lep_mvaIdTrig", lep_mvaIdTrig, &b_lep_mvaIdTrig);
   fChain->SetBranchAddress("lep_mvaSusy", lep_mvaSusy, &b_lep_mvaSusy);
   fChain->SetBranchAddress("lep_jetPtRatio", lep_jetPtRatio, &b_lep_jetPtRatio);
   fChain->SetBranchAddress("lep_jetBTagCSV", lep_jetBTagCSV, &b_lep_jetBTagCSV);
   fChain->SetBranchAddress("lep_jetBTagCMVA", lep_jetBTagCMVA, &b_lep_jetBTagCMVA);
   fChain->SetBranchAddress("lep_jetDR", lep_jetDR, &b_lep_jetDR);
   fChain->SetBranchAddress("ngenLepFromTau", &ngenLepFromTau, &b_ngenLepFromTau);
   fChain->SetBranchAddress("genLepFromTau_motherId", genLepFromTau_motherId, &b_genLepFromTau_motherId);
   fChain->SetBranchAddress("genLepFromTau_grandmotherId", genLepFromTau_grandmotherId, &b_genLepFromTau_grandmotherId);
   fChain->SetBranchAddress("genLepFromTau_sourceId", genLepFromTau_sourceId, &b_genLepFromTau_sourceId);
   fChain->SetBranchAddress("genLepFromTau_charge", genLepFromTau_charge, &b_genLepFromTau_charge);
   fChain->SetBranchAddress("genLepFromTau_status", genLepFromTau_status, &b_genLepFromTau_status);
   fChain->SetBranchAddress("genLepFromTau_pdgId", genLepFromTau_pdgId, &b_genLepFromTau_pdgId);
   fChain->SetBranchAddress("genLepFromTau_pt", genLepFromTau_pt, &b_genLepFromTau_pt);
   fChain->SetBranchAddress("genLepFromTau_eta", genLepFromTau_eta, &b_genLepFromTau_eta);
   fChain->SetBranchAddress("genLepFromTau_phi", genLepFromTau_phi, &b_genLepFromTau_phi);
   fChain->SetBranchAddress("genLepFromTau_mass", genLepFromTau_mass, &b_genLepFromTau_mass);
   fChain->SetBranchAddress("genLepFromTau_motherIndex", genLepFromTau_motherIndex, &b_genLepFromTau_motherIndex);
   fChain->SetBranchAddress("ngenJet", &ngenJet, &b_ngenJet);
   fChain->SetBranchAddress("genJet_pdgId", genJet_pdgId, &b_genJet_pdgId);
   fChain->SetBranchAddress("genJet_pt", genJet_pt, &b_genJet_pt);
   fChain->SetBranchAddress("genJet_eta", genJet_eta, &b_genJet_eta);
   fChain->SetBranchAddress("genJet_phi", genJet_phi, &b_genJet_phi);
   fChain->SetBranchAddress("genJet_mass", genJet_mass, &b_genJet_mass);
   fChain->SetBranchAddress("genJet_charge", genJet_charge, &b_genJet_charge);
   fChain->SetBranchAddress("genJet_status", genJet_status, &b_genJet_status);
   fChain->SetBranchAddress("ngamma", &ngamma, &b_ngamma);
   fChain->SetBranchAddress("gamma_idCutBased", gamma_idCutBased, &b_gamma_idCutBased);
   fChain->SetBranchAddress("gamma_hOverE", gamma_hOverE, &b_gamma_hOverE);
   fChain->SetBranchAddress("gamma_r9", gamma_r9, &b_gamma_r9);
   fChain->SetBranchAddress("gamma_sigmaIetaIeta", gamma_sigmaIetaIeta, &b_gamma_sigmaIetaIeta);
   fChain->SetBranchAddress("gamma_chHadIso", gamma_chHadIso, &b_gamma_chHadIso);
   fChain->SetBranchAddress("gamma_neuHadIso", gamma_neuHadIso, &b_gamma_neuHadIso);
   fChain->SetBranchAddress("gamma_phIso", gamma_phIso, &b_gamma_phIso);
   fChain->SetBranchAddress("gamma_mcMatchId", gamma_mcMatchId, &b_gamma_mcMatchId);
   fChain->SetBranchAddress("gamma_pdgId", gamma_pdgId, &b_gamma_pdgId);
   fChain->SetBranchAddress("gamma_pt", gamma_pt, &b_gamma_pt);
   fChain->SetBranchAddress("gamma_eta", gamma_eta, &b_gamma_eta);
   fChain->SetBranchAddress("gamma_phi", gamma_phi, &b_gamma_phi);
   fChain->SetBranchAddress("gamma_mass", gamma_mass, &b_gamma_mass);
   fChain->SetBranchAddress("nmuon", &nmuon, &b_nmuon);
   fChain->SetBranchAddress("muon_charge", muon_charge, &b_muon_charge);
   fChain->SetBranchAddress("muon_tightId", muon_tightId, &b_muon_tightId);
   fChain->SetBranchAddress("muon_eleCutIdCSA14_25ns_v1", muon_eleCutIdCSA14_25ns_v1, &b_muon_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("muon_eleCutIdCSA14_50ns_v1", muon_eleCutIdCSA14_50ns_v1, &b_muon_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("muon_dxy", muon_dxy, &b_muon_dxy);
   fChain->SetBranchAddress("muon_dz", muon_dz, &b_muon_dz);
   fChain->SetBranchAddress("muon_edxy", muon_edxy, &b_muon_edxy);
   fChain->SetBranchAddress("muon_edz", muon_edz, &b_muon_edz);
   fChain->SetBranchAddress("muon_ip3d", muon_ip3d, &b_muon_ip3d);
   fChain->SetBranchAddress("muon_sip3d", muon_sip3d, &b_muon_sip3d);
   fChain->SetBranchAddress("muon_convVeto", muon_convVeto, &b_muon_convVeto);
   fChain->SetBranchAddress("muon_lostHits", muon_lostHits, &b_muon_lostHits);
   fChain->SetBranchAddress("muon_relIso03", muon_relIso03, &b_muon_relIso03);
   fChain->SetBranchAddress("muon_relIso04", muon_relIso04, &b_muon_relIso04);
   fChain->SetBranchAddress("muon_tightCharge", muon_tightCharge, &b_muon_tightCharge);
   fChain->SetBranchAddress("muon_mcMatchId", muon_mcMatchId, &b_muon_mcMatchId);
   fChain->SetBranchAddress("muon_mcMatchAny", muon_mcMatchAny, &b_muon_mcMatchAny);
   fChain->SetBranchAddress("muon_mcMatchTau", muon_mcMatchTau, &b_muon_mcMatchTau);
   fChain->SetBranchAddress("muon_pdgId", muon_pdgId, &b_muon_pdgId);
   fChain->SetBranchAddress("muon_pt", muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("muon_eta", muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_phi", muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_mass", muon_mass, &b_muon_mass);
   fChain->SetBranchAddress("muon_eleMVAId", muon_eleMVAId, &b_muon_eleMVAId);
   fChain->SetBranchAddress("muon_mvaId", muon_mvaId, &b_muon_mvaId);
   fChain->SetBranchAddress("muon_mvaIdTrig", muon_mvaIdTrig, &b_muon_mvaIdTrig);
   fChain->SetBranchAddress("muon_mvaSusy", muon_mvaSusy, &b_muon_mvaSusy);
   fChain->SetBranchAddress("muon_jetPtRatio", muon_jetPtRatio, &b_muon_jetPtRatio);
   fChain->SetBranchAddress("muon_jetBTagCSV", muon_jetBTagCSV, &b_muon_jetBTagCSV);
   fChain->SetBranchAddress("muon_jetBTagCMVA", muon_jetBTagCMVA, &b_muon_jetBTagCMVA);
   fChain->SetBranchAddress("muon_jetDR", muon_jetDR, &b_muon_jetDR);
   fChain->SetBranchAddress("ntau", &ntau, &b_ntau);
   fChain->SetBranchAddress("tau_charge", tau_charge, &b_tau_charge);
   fChain->SetBranchAddress("tau_dxy", tau_dxy, &b_tau_dxy);
   fChain->SetBranchAddress("tau_dz", tau_dz, &b_tau_dz);
   fChain->SetBranchAddress("tau_idCI3hit", tau_idCI3hit, &b_tau_idCI3hit);
   fChain->SetBranchAddress("tau_isoCI3hit", tau_isoCI3hit, &b_tau_isoCI3hit);
   fChain->SetBranchAddress("tau_mcMatchId", tau_mcMatchId, &b_tau_mcMatchId);
   fChain->SetBranchAddress("tau_pdgId", tau_pdgId, &b_tau_pdgId);
   fChain->SetBranchAddress("tau_pt", tau_pt, &b_tau_pt);
   fChain->SetBranchAddress("tau_eta", tau_eta, &b_tau_eta);
   fChain->SetBranchAddress("tau_phi", tau_phi, &b_tau_phi);
   fChain->SetBranchAddress("tau_mass", tau_mass, &b_tau_mass);
   fChain->SetBranchAddress("ngenLep", &ngenLep, &b_ngenLep);
   fChain->SetBranchAddress("genLep_motherId", genLep_motherId, &b_genLep_motherId);
   fChain->SetBranchAddress("genLep_grandmotherId", genLep_grandmotherId, &b_genLep_grandmotherId);
   fChain->SetBranchAddress("genLep_sourceId", genLep_sourceId, &b_genLep_sourceId);
   fChain->SetBranchAddress("genLep_charge", genLep_charge, &b_genLep_charge);
   fChain->SetBranchAddress("genLep_status", genLep_status, &b_genLep_status);
   fChain->SetBranchAddress("genLep_pdgId", genLep_pdgId, &b_genLep_pdgId);
   fChain->SetBranchAddress("genLep_pt", genLep_pt, &b_genLep_pt);
   fChain->SetBranchAddress("genLep_eta", genLep_eta, &b_genLep_eta);
   fChain->SetBranchAddress("genLep_phi", genLep_phi, &b_genLep_phi);
   fChain->SetBranchAddress("genLep_mass", genLep_mass, &b_genLep_mass);
   fChain->SetBranchAddress("genLep_motherIndex", genLep_motherIndex, &b_genLep_motherIndex);
   Notify();
}

Bool_t treeReader::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void treeReader::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t treeReader::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef treeReader_cxx
