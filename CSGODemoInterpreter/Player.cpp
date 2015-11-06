#include "Player.h"

Player::Player(const Player& p) : Name(p.GetName()), Kills(p.GetKills()), Deaths(p.GetDeaths()) {

}

Player::Player(String name) {
    this->Name = name;
}

Bool operator==(const Player& p1, const Player& p2) {
    return p1.GetName() == p2.GetName()
        && p1.GetKills() == p2.GetKills() 
        && p1.GetDeaths() == p2.GetDeaths();
}

Bool operator!=(const Player& p1, const Player& p2) {
    return !(p1 == p2);
}