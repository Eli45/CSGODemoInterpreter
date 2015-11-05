#include "Player.h"

Player::Player(const Player& p) : Name(p.GetName()), Kills(p.GetKills()), Deaths(p.GetDeaths()) {

}

Player::Player(String name) {
	this->Name = name;
}