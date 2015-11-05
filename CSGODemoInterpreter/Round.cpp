#include "Round.h"
#include "Player.h"
#include "KillPair.h"

Round::Round(UInt64 roundnum, std::map<Tick, KillPair> playerskilled) {
    this->RoundNumber = roundnum;
    this->PlayersKilled = playerskilled;
}
