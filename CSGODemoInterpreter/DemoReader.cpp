#include "DemoReader.h"
#include "Player.h"
#include "Round.h"
#include "KillPair.h"
#include "DemoInfo.h"
#include "HelperMethods.h"
#include "Match.h"
#include "HalfPair.h"

#include <fstream>

using HelperMethods::Split;
using HelperMethods::StartsWith;

DemoReader::DemoReader(String file) {
    File = file;
}

//Loops over the File specified in this Class's constructor
//To find important rounds for a given player.
Vector<Round> DemoReader::LoopFileForImportantRounds(Player player, UInt32 requiredNumberOfKillsPerRound)  {
    //TODO:

    //Do a preliminary loop getting the scores of each side at half, ot scores etc.
    //and also individual scores per each round for each player.

    //Next we return from those individual scores, each round that the given player argument got > numberOfKillsPerRoundRequired kills.

	return Vector<Round>{};
}

DemoInfo DemoReader::GetImportantRounds(DemoArgs dArg)   {
    std::ifstream stream(File);
    UInt32 roundRestartsRequired = 0;   //Defaults to 0 as that is what is standard in VALVE mm.
    UInt32 restartCount  = 0;
    UInt64 __CURLINE__   = 0;
    Bool   restartsFinished = false;

    if (dArg == DemoArgs::ESEA || dArg == DemoArgs::CEVO) {
        //Demo restarts 3 times at start and halftime before live.
        roundRestartsRequired = 3;
    }
    else if (dArg == DemoArgs::FACEIT)   {
        //What does faceit even do? Todo: find out.
    }


    Vector<Round> rounds = {};
    UInt64 roundCount = 0; //start at zero since we're ++ing the roundCount after each time we see a round_start event.
    //TODO: Create base abstract Demo class with needed info like RoundRestarts etc.
    //derive ESEA, FACEIT, VALVE, and CEVO classes respectively.
    /*

    String line;
    std::pair<Tick, KillPair> PeopleDeadified;

    while (getline(stream, line))   {
        ++__CURLINE__;

        if (!StartsWith(line, "Tick:"))
            continue;

        vector<String> splitString = Split(line, ' ');

        String Event = FindEvent(splitString);
        if (Event != NULL)  {
            if (Event != "round_start")
                continue;

            if (restartsFinished)   {
                //If we've finished with our restarts we just need to increment our roundnum and continue.
                if (roundCount == 0)    {
                    //If we're on the first round we haven't yet parsed we need to just continue without adding our pair.
                    ++roundCount;
                    continue;
                }

                r;

                rounds.push_back(Round(roundCount, PeopleDeadified));
                
                ++roundCount;
                PeopleDeadified = std::pair<Tick, KillPair>();
                continue;
            }

            if (dArg != DemoArgs.Valve && !restartsFinished) {
                ++restartCount;
            }

            if (restartCount == roundRestartsRequired)  {
                restartsFinished = true;
            }
        }
        else    {
            if (!restartsFinished)  {
                restartCount = 0;
                //Restart count because this means a player was killed in the warmup or whatever.
                continue;
            }

            //If Event is NULL that means somebody killed somebody.

            //Note(Eli): This will break if the person is in a team and their teamtag does not contain spaces, the returned string 
            //will contain the teamname in that scenario and will have to be removed manually.
            String killer = GetKiller(splitString);
            String killed = GetKilled(splitString);

            if (killer == NULL || killed == NULL)   {
                throw DemoException("Error in demofile at line #" + __CURLINE__ + "\nLine: " + line + "\nFailed to retriever killer or killed when it was expected.");
            }

            Player plyKiller = Player(killer);
            Player plyKilled = Player(killed);

            PeopleDeadified.insert(
                std::pair<Tick, KillPair>(
                    GetTick(splitString), 
                    KillPair(
                        plyKiller, 
                        plyKilled
                    )
                )
            );

        }

        
    }*/

	//TODO:... Jesus Christ almighty.
	return DemoInfo(
		Match(
			HalfPair(
				Half(Team(Vector<Player>{}), Team(Vector<Player>{}), Vector<KillPair>{}), 
				Half(Team(Vector<Player>{}), Team(Vector<Player>{}), Vector<KillPair>{})
			),
			Vector<HalfPair>{}
		)
	);
}

String DemoReader::FindEvent(Vector<String> v)  {
    return GetString(v, "Event:", 1);
}

String DemoReader::GetKiller(Vector<String> v)  {
    return GetString(v, "killed", -1);
}

String DemoReader::GetKilled(Vector<String> v)  {
    return GetString(v, "killed", 1);
}

UInt64 DemoReader::GetTick(Vector<String> v)    {
    return atol(GetString(v, "Tick:", 1).c_str());
}

String DemoReader::GetString(Vector<String> v, String toFind, Int32 indexOffset)  {
    for (UInt32 i = 0; i < v.size(); ++i)    {
        if (v[i] == toFind)
            return v[i + indexOffset];
    }

    return NULL;
}