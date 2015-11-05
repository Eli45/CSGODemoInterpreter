#include "KillPair.h"

KillPair::KillPair(Player p1, Player p2) : Killer(p1), Killed(p2) {
}

std::ostream& operator<<(std::ostream &strm, const KillPair &a) {
    return strm << "Player(" << a.GetKiller().GetName() << ")" << " killed " "Player(" << a.GetKilled().GetName() << ")";
}