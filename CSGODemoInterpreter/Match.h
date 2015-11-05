#ifndef MATCH_H
#define MATCH_H

#include "TypeDefinesAndConstants.h"
#include "HalfPair.h"

/*
    Represents a CS:GO 'match'.
    Holds information such as the Teams that played in the match and the two halftime scores of non-ot played rounds.
    Also holds overtime scores if played.
*/
class Match {
private:
    HalfPair         Scores;
    Vector<HalfPair> OTScores;
    
public:
    Match(const Match& m);
    Match(HalfPair scores, Vector<HalfPair> otScores);

    UInt32 GetKillsOf(String playerName);

    Inline HalfPair			GetScores()	  const { return this->Scores;   }
    Inline Vector<HalfPair> GetOTScores() const { return this->OTScores; }
};


#endif