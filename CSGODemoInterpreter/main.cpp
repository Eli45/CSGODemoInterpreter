#include <iostream>
#include "TypeDefinesAndConstants.h"
#include "DemoArgs.h"
#include "DemoException.h"
#include "Player.h"
#include "Round.h"
#include "KillPair.h"
#include "DemoReader.h"
#include "DemoInfo.h"

#define TESTING 1

#if TESTING
#include <assert.h>
#include <stdlib.h> //Used for system() calls.

template <typename T> void echo(T obj, String newLine = "\n") {
    std::cout << obj << newLine;
}

template <typename T> Bool VecEq(Vector<T> vec1, Vector<T> vec2) {
    if (vec1.size() != vec2.size())
        return false;
    
    for (UInt32 i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i])
            return false;
    }

    return true;
}

//Returns true if all tests passed.
void RunTests()  {
    echo("Starting tests...");
    Player p1("Eli^F");
    p1.SetKills(24);
    p1.SetDeaths(16);

    assert(p1.GetDeaths() == 16);
    assert(p1.GetKills()  == 24);
    assert(p1.GetName()   == "Eli^F");
    Vector<Player> players = {};
    for (UInt32 i = 0; i < 11; ++i)
        players.push_back(p1);

    Team t1(players, 8, 8);
    assert(t1.GetScore() == 16);
    assert(VecEq(t1.GetPlayers(), players));

    Team t2(t1);
    t2.UpdateCTSCore(6);

    assert(t2.GetScore() == 14);

    echo("All tests passed.");
}

int main(int argc, char** argv) {
    RunTests();

    system("pause");
    return 0;
}

#else
int main(int argc, char** argv) {
    //Normal operations.
    return 0;
}
#endif
