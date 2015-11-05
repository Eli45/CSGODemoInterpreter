#include "Half.h"

Half::Half(const Half& h) : T1(h.GetTeamOne()), T2(h.GetTeamTwo()), KillPairsInHalf(h.GetKillPairsInHalf()) {

}

Half::Half(Team one, Team two, Vector<KillPair> v) : T1(one), T2(two){
    this->KillPairsInHalf = v;
}