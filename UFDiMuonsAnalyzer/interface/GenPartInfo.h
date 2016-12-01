
#ifndef GENPART_INFO
#define GENPART_INFO

#include <vector>
#include "TMath.h"

struct GenPartInfo {

  Float_t charge;
  Float_t mass;
  Float_t pt;
  Float_t ptErr;
  Float_t eta;  // pseudo rapidity
  Float_t y;    // rapidity
  Float_t phi;  // phi

  void init();

};

struct GenPartInfos {

  Int_t nGenParts;
  std::vector<GenPartInfo> genParts;

  void init();

};

#endif  // #ifndef GENPART_INFO
