#ifndef TEAM_H
#define TEAM_H

#include "TypeDefinesAndConstants.h"
#include "Player.h"

class Team {
private:
    UInt32 ScoreT  = 0;
    UInt32 ScoreCT = 0;
    Vector<Player> Players;

public:
    Team(const Team& t);
    Team(Vector<Player> v);
    Team(Vector<Player> v, UInt32 scoreT, UInt32 scoreCT);

    Inline UInt32 GetScore()            const { return ScoreT + ScoreCT;}
    Inline UInt32 GetCTScore()          const { return ScoreCT;         }
    Inline UInt32 GetTScore()           const { return ScoreT;          }
    Inline Vector<Player> GetPlayers()  const { return Players;         }

    Inline void UpdateTScore(Int32 num);
    Inline void UpdateCTSCore(Int32 num);
};

#endif