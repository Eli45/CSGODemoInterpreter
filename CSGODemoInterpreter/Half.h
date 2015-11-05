#ifndef HALF_H
#define HALF_H

#include "TypeDefinesAndConstants.h"
#include "Team.h"
#include "KillPair.h"

class Half  {
private:
    Team T1;
    Team T2;
    Vector<KillPair> KillPairsInHalf;
public:
	Half(const Half& h);
	Half(Team one, Team two, Vector<KillPair> v);

	Inline Team   GetTeamOne()		const { return this->T1; }
	Inline Team   GetTeamTwo()		const { return this->T2; }
    Inline UInt32 GetTeamOneScore() const { return this->T1.GetScore(); }
    Inline UInt32 GetTeamTwoScore() const { return this->T2.GetScore(); }
	Inline Vector<KillPair> GetKillPairsInHalf() const {
		return this->KillPairsInHalf;
	}

};

#endif