#ifndef PLAYER_H
#define PLAYER_H

#include "TypeDefinesAndConstants.h"

/*
    Class Player is immutable.
    Represents an ingame player in a CSGO match.
*/
class Player    { 
private:
    String Name;
	UInt32 Kills  = 0;
	UInt32 Deaths = 0;

public:
	Player(const Player& p);
    Player(String name);
	Inline String GetName()   const { return this->Name;   };
	Inline UInt32 GetKills()  const { return this->Kills;  };
	Inline UInt32 GetDeaths() const { return this->Deaths; };

	Inline UInt32 SetKills(UInt32 kills)   { this->Kills  = kills;  }
	Inline UInt32 SetDeaths(UInt32 deaths) { this->Deaths = deaths; }
};

#endif