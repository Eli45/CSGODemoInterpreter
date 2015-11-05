#ifndef DEMO_READER_H
#define DEMO_READER_H

class DemoInfo;
#include "TypeDefinesAndConstants.h"
#include "DemoArgs.h"
#include "Round.h"

class Player;
class DemoReader {
private:
    String File;

    String          GetString(Vector<String> v, String toFind, Int32 indexOffset);
    Vector<Round>   LoopFileForImportantRounds(Player player, UInt32 requiredNumberOfKillsPerRound);
public:
    DemoReader(String file);

    DemoInfo        GetImportantRounds(DemoArgs dArg);

    String          FindEvent(Vector<String> v);
    String          GetKiller(Vector<String> v);
    String          GetKilled(Vector<String> v);
    UInt64          GetTick(Vector<String> v);

};

#endif