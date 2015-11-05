#include "ESEADemo.h"
#include "DemoInfo.h"

DemoInfo ESEADemo::AnalyzeMatch() {
    //TODO:
    return DemoInfo(
        Match(
            HalfPair(
                Half(Team(Vector<Player>{}), Team(Vector<Player>{}), Vector<KillPair>{}),
                Half(Team(Vector<Player>{}), Team(Vector<Player>{}), Vector<KillPair>{})
                ),
            Vector<HalfPair>{}
    )
        );
};