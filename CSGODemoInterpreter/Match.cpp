#include "Match.h"
#include "HelperMethods.h"
#include "Player.h"
#include <stdexcept>

Match::Match(const Match& m) : Scores(m.GetScores()), OTScores(m.GetOTScores()) {

}

Match::Match(HalfPair scores, Vector<HalfPair> otScores) : Scores(scores), OTScores(otScores) {
}

UInt32 Match::GetKillsOf(String playerName) {
    const Vector<Player> v = this->Scores.GetHalfOne().GetTeamOne().GetPlayers();
    const Vector<Player> c = this->Scores.GetHalfOne().GetTeamTwo().GetPlayers();

    for (Player v : HelperMethods::CombineVec(v, c)) {
        const String name = v.GetName();
        if (name == playerName)
            return v.GetKills();
    }

    //TODO: throw something here? or just log it?
    throw(std::runtime_error("Player " + playerName + " not found in match."));
};