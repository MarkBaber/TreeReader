#include <TFile.h>
#include <TTree.h>
#include <TChain.h>
#include <TString.h>
#include <TStyle.h>
#include <TCut.h>
#include <TMath.h>
#include <TPad.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TH1.h>
#include <TH2.h>
#include <TEfficiency.h>

#include <vector>
#include <iostream>
#include <math.h>
#include "TMath.h"


#include "typeDefs.h"
//#include "ttreeDraw.C"


#include "object/interface/treeReader.h"

int readTree(){

  std::cout << "\n\nLoading chains\n";
  TString workDir   = "~/Dropbox/TreeReader/"; 
  TString sampleDir = workDir + "samples/";
  TString outDir    = workDir + "output/";
  TString filename  = "output_histograms.root";

  TString branch    = "tree";

  TFile *f = new TFile(outDir + filename,"RECREATE");


  // Define samples
  // -------------------------------------------------- 
  sample test         = sample("test", branch, sampleDir + "tree.root");



  // Selected sample
  // -------------------------------------------------- 
  sample selectedSample = test;
  std::cout << "Reading sample: " << selectedSample.Name << "\n";
  //  TChain* ev = selectedSample.Chain;

  treeReader* ev = new treeReader();
  ev->fChain = selectedSample.Chain;


  unsigned int nEvents    = (unsigned int)ev->fChain->GetEntries(); 
  unsigned int nEventLow  = 0;
  unsigned int nEventHigh = nEvents;



  std::map< TString, TH1*> hist1D;
  std::map< TString, TH2*> hist2D;
  std::map< TString, TH1*> hist1DRate;
  std::map< TString, TH2*> hist2DRate;
  std::map< TString, TEfficiency*> hist1DEff;
  std::map< TString, TEfficiency*> hist2DEff;



  // // Histogram templates
  // // --------------------------------------------------
  // TH2D* at_vs_ht         = new TH2D("at_vs_ht",  ";HLT H_{T} (GeV);HLT #alpha_{T} (GeV)", 
  // 				    HTBins,HTMin,HTMax, alphaTBins,alphaTMin,alphaTMax);
  // //				   sHTBins,sHTMin,sHTMax, salphaTBins,salphaTMin,salphaTMax);
  // TH2D* for_vs_mom       = new TH2D("for_vs_mom",";HLT #slash{H}_{T}/#slash{E}_{T};HLT leading forward jet p_{T} (GeV)", 
  // 				    momBins,momMin,momMax,    ForBins,ForMin,ForMax);
  // TH2D* phi_vs_eta       = new TH2D("phi_vs_eta",";HLT #eta;HLT #phi", 
  // 				    etaBins,etaMin,etaMax, phiBins,phiMin,phiMax );
  // TH2D* jet2_vs_ht       = new TH2D("jet2_vs_ht",";HLT H_{T} (GeV);HLT second leading jet p_{T} (GeV)", 
  // 				    HTBins,HTMin,HTMax,       ForBins,ForMin,ForMax);
  // TH2D* for_vs_eta       = new TH2D("for_vs_eta",";HLT leading jet #eta;HLT leading forward jet p_{T} (GeV)", 
  // 				    etaAbsBins,etaAbsMin,etaAbsMax,    ForBins,ForMin,ForMax);
  // TH2D* for_vs_jet2      = new TH2D("for_vs_jet2",";HLT second leading jet p_{T} (GeV);HLT leading forward jet p_{T} (GeV)", 
  // 				    ForBins,ForMin,ForMax,    ForBins,ForMin,ForMax);
  // TH2D* mom_vs_dPhiMM    = new TH2D("mom_vs_dPhiMM",";HLT #Delta#phi(#slash{H}_{T}, #slash{E}_{T});HLT #slash{H}_{T}/#slash{E}_{T}", 
  // 				    DPhiBins,DPhiMin,DPhiMax, momBins,momMin,momMax);
  // TH2D* mom_vs_met       = new TH2D("mom_vs_met",";HLT #slash{E}_{T} (GeV);HLT #slash{H}_{T}/#slash{E}_{T}", 
  // 				    MHTBins,MHTMin,MHTMax,    momBins,momMin,momMax);
  // TH2D* dPhiMM_vs_dPhiMM = new TH2D("dPhiMM_vs_dPhiMM",";HLT #Delta(#slash{H}_{T}, #slash{E}_{T});Gen #Delta(#slash{H}_{T}, #slash{E}_{T})",
  // 				    DPhiBins,DPhiMin,DPhiMax, DPhiBins,DPhiMin,DPhiMax);
  // TH2D* mht_vs_met       = new TH2D("mht_vs_met",";HLT #slash{E}_{T} (GeV);HLT #slash{H}_{T} (GeV)",
  // 				    MHTBins,MHTMin,MHTMax,    MHTBins,MHTMin,MHTMax);
  // TH2D* mht_vs_mom       = new TH2D("mht_vs_mom",";HLT #slash{H}_{T}/#slash{E}_{T};HLT #slash{H}_{T} (GeV)",
  // 				    momBins,momMin,momMax,    MHTBins,MHTMin,MHTMax);
  // TH2D* mht_vs_ht        = new TH2D("mht_vs_ht",";HLT #slash{H}_{T} (GeV);HLT {H}_{T} (GeV)",
  // 				    HTBins,HTMin,HTMax,       MHTBins,MHTMin,MHTMax);
  // TH2D* dMet_vs_met      = new TH2D("dMet_vs_mht",";HLT #slash{E}_{T} (GeV);#slash{E}_{T}^{HLT}/#slash{E}_{T}^{GEN}",
  // 				    MHTBins,MHTMin,MHTMax,    dMETBins,dMETMin,dMETMax );
  // TH2D* dMht_vs_mht      = new TH2D("dMht_vs_mht",";HLT #slash{H}_{T} (GeV);#slash{H}_{T}^{HLT}/#slash{H}_{T}^{GEN}",
  // 				    MHTBins,MHTMin,MHTMax,    dMETBins,dMETMin,dMETMax );

  // // 1-Dimensional plots
  // // ------------------------------
  // TH1D* ht        = new TH1D("ht",    ";H_{T} (GeV);Events",                          HTBins,HTMin,HTMax);
  // TH1D* at        = new TH1D("at",    ";#alpha_{T};Events",                           alphaTBins,alphaTMin,alphaTMax);

  // TH1D* jet2      = new TH1D("jet2",   ";Second leading jet p_{T} (GeV);Events",      ForBins,ForMin,ForMax);
  // TH1D* met       = new TH1D("met",    ";#slash{E}_{T} (GeV);Events",                 MHTBins,MHTMin,MHTMax);
  // TH1D* mom       = new TH1D("mom",    ";HLT #slash{E}_{T} (GeV);Events",             momBins,momMin,momMax);
  // TH1D* forJet    = new TH1D("forJet", ";HLT leading forward jet p_{T} (GeV);Events", ForBins,ForMin,ForMax);



  // TEfficiency* forwardJetPT = new TEfficiency("forwardJetPT",";HLT leading forward jet p_{T} (GeV);Efficiency",
  // 					      ForBins,ForMin,ForMax);



  // ***********************************************************************************************
  // *                                        Produce plots                                        *
  // ***********************************************************************************************
  std::cout << "Making plots\n";








 

  std::cout << nEvents << "\n\n\n";
  
  
  


  
  //double genJetPt   = 0;

  // std::vector<double> *genJetPt   = new std::vector<double>();
  // // std::vector<float> *genJetEta  = new std::vector<float>();
  // // std::vector<float> *genJetPhi  = new std::vector<float>();
  // // std::vector<float> *genJetMass = new std::vector<float>();
  // ev->SetBranchAddress("genJet_pt",   &genJetPt);
  // // ev->SetBranchAddress("genJet_eta",  &genJetEta);
  // // ev->SetBranchAddress("genJet_phi",  &genJetPhi);
  // // ev->SetBranchAddress("genJet_mass", &genJetMass);

  // float nlep = 0;
  // ev->SetBranchAddress("nlep", &nlep);

  std::cout << nEventLow << "\t" << nEventHigh << "\n";

  for ( unsigned int iEvent = nEventLow; iEvent < nEventHigh; ++iEvent ){
    //ev->GetEntry( iEvent );
    ev->Loop();

    //std::cout << nlep << "\n";
    //std::cout << genJetPt->size() << "\n";


    
    // for (uint iGen = 0; iGen < genJetPt->size(); ++iGen){
    //   std::cout << iGen << "\t" << (*genJetPt)[iGen] << "\n";
	
    // }
    
    
    if ( !(iEvent % 10000) ){ std::cout << "Event " << iEvent << "\n";}
    
    
  }


  // delete at_vs_ht;
  // delete for_vs_mom;
  // delete jet2_vs_ht;
  // delete mom_vs_dPhiMM;
  // delete dPhiMM_vs_dPhiMM;

  exit(0);
  f->Close();

  // --------------------------------------------------------------------------------


}
