
#ifndef GENJET_INFO
#define GENJET_INFO

#include <vector>
#include "TMath.h"

struct GenJetInfo {

  Float_t px    ;
  Float_t py    ;
  Float_t pz    ;
  Float_t pt    ;
  Float_t eta   ;
  Float_t phi   ;
  Float_t mass  ;
  Float_t charge;

  void init();

};

struct GenJetInfos {

  Int_t nGenJets;
  std::vector<GenJetInfo> genJets;

  void init();

};

#endif  // #ifndef GENJET_INFO
