
#include "UfHMuMuCode/UFDiMuonsAnalyzer/interface/PairInfo.h"

void PairInfo::init() {

  iMu1 = -999;
  iMu2 = -999;
  
  mass   = -999;
  pt     = -999;
  eta    = -999;
  y      = -999;
  phi    = -999;
  angle  = -999;
  // charge = -999;
  
  mass_PF = -999;
  pt_PF   = -999;
  
  mass_trk = -999;
  pt_trk   = -999;

  mass_KaMu           = -999;
  pt_KaMu             = -999;
  mass_KaMu_clos_up   = -999;
  pt_KaMu_clos_up     = -999;
  mass_KaMu_clos_down = -999;
  pt_KaMu_clos_down   = -999;
  mass_KaMu_sys_up    = -999;
  pt_KaMu_sys_up      = -999;
  mass_KaMu_sys_down  = -999;
  pt_KaMu_sys_down    = -999;

  mass_Roch          = -999;
  pt_Roch            = -999;
  mass_Roch_sys_up   = -999;
  pt_Roch_sys_up     = -999;
  mass_Roch_sys_down = -999;
  pt_Roch_sys_down   = -999;

} // End void PairInfo::init()

