#ifndef BINNING
#define BINNING

// Histogram parameters
struct hParams{
  int   bins;
  float low;
  float high;
  
  hParams( aBins, aLow, aHigh ):bins(aBins), low(aLow), high(aHigh){};
  
}

namespace bin{

  // Define binning 
  // --------------------------------------------------                                                                                  
  const hParams HT(36, 100, 1000); 


/* const int   MHTBins(180);   float MHTMin(0),      MHTMax(1800);  */
/* const int   METBins(180);   float METMin(0),      METMax(1800);  */
/* const int   dMETBins(120);  float dMETMin(0),     dMETMax(6.0);  */
/* const int   etaAbsBins(60); float etaAbsMin(0.0), etaAbsMax(3.0);  */
/* const int   etaBins(120);   float etaMin(-3.0),   etaMax(3.0);  */
/* int   phiBins(128);   float phiMin(-3.2),   phiMax(3.2); */
/* int   momBins(100);   float momMin(0),      momMax(10); */
/* int   ForBins(80);    float ForMin(0),      ForMax(400); */
/* int   alphaTBins(60); float alphaTMin(0.4), alphaTMax(1.0); */
/* int   DPhiBins(32);   float DPhiMin(0),     DPhiMax(3.2); */ 

/* int   sHTBins(14);     float sHTMin(150),      sHTMax(500); */ 
/* int   salphaTBins(50); float salphaTMin(0.45), salphaTMax(0.70);  */ 

  };









#endif
