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
#include <iostream>

#include "typeDefs.h"



void cumulative2D( TH2* histogram, TH2* rCumulHist, double scale){

  if ( histogram->GetEntries() == 0 ){
    return;
  }
  
  // bin = 0;       underflow bin 
  // bin = 1;       first bin with low-edge xlow INCLUDED 
  // bin = nbins;   last bin with upper-edge xup EXCLUDED 
  // bin = nbins+1; overflow bin 
  
  int nBinsX          = histogram->GetNbinsX();
  int nBinsY          = histogram->GetNbinsY();
  int xBinOver        = nBinsX + 1;
  int yBinOver        = nBinsY + 1;

  for ( int iBinX = nBinsX; iBinX > 0; --iBinX ){
    for ( int iBinY = nBinsY; iBinY > 0; --iBinY ){
      double integral = histogram->Integral( 0, iBinX, 0, iBinY );
      rCumulHist->SetBinContent( iBinX, iBinY, integral );
    }
  }

  rCumulHist->Scale( scale );

}


void reverseCumulative2D( TH2* histogram, TH2* rCumulHist, double scale){

  if ( histogram->GetEntries() == 0 ){
    return;
  }
  
  // bin = 0;       underflow bin 
  // bin = 1;       first bin with low-edge xlow INCLUDED 
  // bin = nbins;   last bin with upper-edge xup EXCLUDED 
  // bin = nbins+1; overflow bin 
  
  int nBinsX          = histogram->GetNbinsX();
  int nBinsY          = histogram->GetNbinsY();
  int xBinOver        = nBinsX + 1;
  int yBinOver        = nBinsY + 1;


  for ( int iBinX = nBinsX; iBinX > 0; --iBinX ){
    for ( int iBinY = nBinsY; iBinY > 0; --iBinY ){
      double integral = histogram->Integral( iBinX, xBinOver, iBinY, yBinOver );
      rCumulHist->SetBinContent( iBinX, iBinY, integral );
    }
  }

  rCumulHist->Scale( scale );

}



void makeDiff2D(TChain *t, TH2D* h, TString title, TString plot, TString cut){
  
  h->SetName( title );
  t->Project( title, plot, cut );

  h->Write();

}

void makeCumul2D(TChain *t, TH2D* h, TString title, TString plot, TString cut){

  title += "_Cumul";

  h->SetName( title );
  t->Project( title, plot, cut );

  reverseCumulative2D( h, h, 1.0);
  h->Write();

}

void make2D(TChain *t, TH2D* hist, TString title, TString plot, TString cut, bool veto = false){

  std::cout << "\tProducing: " << title << "\n";

  TH2D* h = (TH2D*)hist->Clone();

  // Make differential distribution
  h->SetName( title );
  t->Project( title, plot, cut );
  h->Write();

  // Make cumulative distribution (or efficiency if relevant)
  TH2D* hCumul = (TH2D*)h->Clone();
  hCumul->Clear();
  hCumul->SetName( title + "_Cumul");
  if (!(title.Contains("QCD"))){
    if (veto){ cumulative2D( h, hCumul, 1/h->GetEntries());        } // Veto selected region
    else     { reverseCumulative2D( h, hCumul, 1/h->GetEntries()); }
    hCumul->SetMinimum( 0. );
    hCumul->SetMaximum( 1. );
  }
  else{
    if (veto){ cumulative2D( h, hCumul, 1.0);        }// Veto selected region
    else     { reverseCumulative2D( h, hCumul, 1.0); }
  }
  hCumul->Write();

}






// Iterate over input cutCollection and produce a plot for each
void make2DDistributions(TChain *t, TH2D* hist, TString title, TString plot, cutCollection cuts, bool veto = false){

  for (uint iCut = 0; iCut < cuts.size(); ++iCut){
    TString suffix = cuts[ iCut ].first;
    TString cut    = cuts[ iCut ].second;

    // Remove muon veto for DY to improve stats
    if (title.Contains("DY_") ){ cut.ReplaceAll("genLeptonVeto", "genElectronVeto"); }
    
    make2D( t, hist, title + "_" + suffix, plot, cut, veto);
  }
  
}


void make2DDistributions(sampleCollection samples, TH2D* hist, TString plot, cutCollection cuts, bool veto = false,  TString suffix = ""){

  for (uint iSample = 0; iSample < samples.size(); ++iSample){

    sample currentSample = samples[ iSample ];
    if (!currentSample.process){continue;}

    TString title  = currentSample.name + "_" + hist->GetName();
    if (suffix != ""){ title += "_" + suffix; }

    for (uint iCut = 0; iCut < cuts.size(); ++iCut){
      TString cutLabel = cuts[ iCut ].first;
      TString cut      = cuts[ iCut ].second;

      // Remove muon veto for DY to improve stats
      if ( currentSample.name == "DY" ){ cut.ReplaceAll("genLeptonVeto", "genElectronVeto"); }
      
      make2D( currentSample.chain, hist, title + "_" + cutLabel, plot, cut, veto);
    }
  }
  
}



// ****************************************************************************************************
// ****************************************************************************************************

void reverseCumulative( TH1* histogram, TH1* rCumulHist, double scale, bool reverse = true){
  
  // bin = 0;       underflow bin 
  // bin = 1;       first bin with low-edge xlow INCLUDED 
  // bin = nbins;   last bin with upper-edge xup EXCLUDED 
  // bin = nbins+1; overflow bin 

  int nBinsX          = histogram->GetNbinsX();
  int xBinOver        = nBinsX + 1;

  for ( int iBinX = nBinsX; iBinX > 0; --iBinX ){
    double integral(0);
    if (reverse){
      integral = histogram->Integral( iBinX, xBinOver );
    }
    else{
      integral = histogram->Integral( 0, iBinX );
    }
    rCumulHist->SetBinContent( iBinX, integral );
  }

  rCumulHist->Scale( scale );
}



void make1D(TChain *t, TH1D* hist, TString title, TString plot, TString cut, bool veto = false){
  std::cout << "\tProducing: " << title << "\n";

  TH1D* h = (TH1D*)hist->Clone();

  // Make differential distribution 
  h->SetName( title );
  t->Project( title, plot, cut );
  h->Write();

  // Make cumulative distribution (or efficiency if relevant) 
  TH1D* hCumul = (TH1D*)h->Clone(); 
  hCumul->Clear(); 
  hCumul->SetName( title + "_Cumul");
  if (!(title.Contains("QCD"))){
    hCumul->GetYaxis()->SetTitle("Efficiency");
    reverseCumulative( h, hCumul, 1/h->GetEntries(), !veto);
    hCumul->SetMinimum( 0. );
    hCumul->SetMaximum( 1. );
  }
  else{
    hCumul->GetYaxis()->SetTitle("Rate (Hz)");
    reverseCumulative( h, hCumul, 1.0, !veto); 
  }
  hCumul->Write();


  delete h;
  delete hCumul;

}


void make1DDistributions(sampleCollection samples, TH1D* hist, TString plot, cutCollection cuts, bool veto = false,  TString suffix = ""){

  for (uint iSample = 0; iSample < samples.size(); ++iSample){

    sample currentSample = samples[ iSample ];
    if (!currentSample.process){continue;}

    TString title  = currentSample.name + "_" + hist->GetName();
    if (suffix != ""){ title += "_" + suffix; }

    for (uint iCut = 0; iCut < cuts.size(); ++iCut){
      TString cutLabel = cuts[ iCut ].first;
      TString cut      = cuts[ iCut ].second;

      // Remove muon veto for DY to improve stats
      if ( currentSample.name == "DY" ){ cut.ReplaceAll("genLeptonVeto", "genElectronVeto"); }
      
      make1D( currentSample.chain, hist, title + "_" + cutLabel, plot, cut, veto);
    }
  }

}



void makeTurnOn(TChain *t, TEfficiency* hist, TString title, TString plot, effCut cut, bool veto = false){

  std::cout << "\tProducing: " << title << "\n";

  TEfficiency* h = (TEfficiency*)hist->Clone();
  TH1D*      num = (TH1D*)h->GetPassedHistogram();
  TH1D*      den = (TH1D*)h->GetTotalHistogram();
  
  // Make differential distribution
  h->SetName( title );
  num->SetName("num");
  den->SetName("den");
  t->Project( "den", plot, cut.denCut );
  t->Project( "num", plot, cut.numCut );
  h->Write();

  // Make cumulative distribution (or efficiency if relevant)
  TEfficiency* hCumul = (TEfficiency*)hist->Clone();
  TH1D*      numCumul = (TH1D*)hCumul->GetPassedHistogram();
  TH1D*      denCumul = (TH1D*)hCumul->GetTotalHistogram();
  hCumul->Clear();
  hCumul->SetName( title + "_Cumul");
  reverseCumulative( den, denCumul, 1.0, !veto);
  reverseCumulative( num, numCumul, 1.0, !veto);
  hCumul->Write();

  delete num;
  delete den;
  delete numCumul;
  delete denCumul;
}


void makeTurnOnDistributions(sampleCollection samples, TEfficiency* hist, TString plot, effCutCollection cuts, bool veto = false, TString suffix = ""){

  for (uint iSample = 0; iSample < samples.size(); ++iSample){

    sample currentSample = samples[ iSample ];
    if (!currentSample.process){continue;}

    TString title  = currentSample.name + "_" + hist->GetName();
    if (suffix != ""){ title += "_" + suffix; }

    for (uint iCut = 0; iCut < cuts.size(); ++iCut){
      effCut currCut = cuts[ iCut ];

      // Remove muon veto for DY to improve stats
      if ( currentSample.name == "DY" ){ 
	currCut.numCut.ReplaceAll("genLeptonVeto", "genElectronVeto"); 
	currCut.denCut.ReplaceAll("genLeptonVeto", "genElectronVeto"); 
      }

      makeTurnOn( currentSample.chain, hist, title + "_" + currCut.label, plot, currCut, veto);
    }
  }

}
