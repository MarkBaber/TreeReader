#ifndef TYPEDEFS
#define TYPEDEFS



struct sample{
  TString Name;
  TChain* Chain;

  sample(TString aName, TString aBranch, TString aFiles):Name(aName){
    Chain = new TChain( aBranch );
    Chain->Add( aFiles );
  }
};



struct effCut{

  TString label;
  TString numCut;
  TString denCut;
  effCut(TString aLabel, TString aNumCut, TString aDenCut):label(aLabel),numCut(aNumCut),denCut(aDenCut){};
};



typedef std::vector< sample >                      sampleCollection;
typedef std::vector< std::pair<TString, TString> >    cutCollection;
typedef std::vector< effCut >                      effCutCollection;


#endif
