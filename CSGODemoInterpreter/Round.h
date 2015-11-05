#ifndef ROUND_H
#define ROUND_H

class KillPair;
#include "TypeDefinesAndConstants.h"
#include <map>

class Round {
private:
    UInt64 RoundNumber;
    std::map<Tick, KillPair> PlayersKilled;

public:
    Round(UInt64 roundnum, std::map<Tick, KillPair> playerskilled);

    Inline Int32					GetNumberOfPlayersKilled()	const { return this->PlayersKilled.size();	};
    Inline UInt64					GetRoundNumber()			const { return this->RoundNumber;			};
    Inline std::map<Tick, KillPair> GetPlayersKilled()			const { return this->PlayersKilled;			};

};

#endif