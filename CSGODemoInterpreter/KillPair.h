#ifndef KILL_PAIR_H
#define KILL_PAIR_H

#include <map>
#include <ostream>

#include "Player.h"

/*
    Immutable.
    Represents an ingame 'Kill'.
    Holds information such as the Killer and the Killed.
*/
class KillPair    {
private:
    Player Killer;
    Player Killed;

public:
    KillPair(Player p1, Player p2);

    Inline std::pair<Player, Player> GetPlayers() const { 
        return std::pair<Player, Player>(this->Killer, this->Killed); 
    };

    Inline Player GetKiller() const { return this->Killer; };
    Inline Player GetKilled() const { return this->Killed; };

    friend std::ostream& operator<<(std::ostream &strm, const KillPair &a);
};

#endif