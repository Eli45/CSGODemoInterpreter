#include "Team.h"

Team::Team(const Team& t) {
    this->Players = t.GetPlayers();
    this->ScoreCT = t.GetCTScore();
    this->ScoreT  = t.GetTScore();
}

Team::Team(Vector<Player> v) {
    this->Players = v;
}

Team::Team(Vector<Player> v, UInt32 scoreT, UInt32 scoreCT) {
    this->Players = v;
    this->ScoreT  = scoreT;
    this->ScoreCT = scoreCT;
}

void Team::UpdateCTSCore(Int32 num) {
    this->ScoreCT = num;
}

void Team::UpdateTScore(Int32 num) {
    this->ScoreT = num;
}