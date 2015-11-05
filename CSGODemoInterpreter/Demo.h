#ifndef DEMO_H
#define DEMO_H

#include "TypeDefinesAndConstants.h"
#include "Match.h"

class DemoInfo;
class AbstractDemo  {
private:
    const UInt32 NumberOfRestartsPerWarmup;
    Match        PlayedMatch;

public:
	AbstractDemo(int restartsPerWarmup, Match m) : NumberOfRestartsPerWarmup(restartsPerWarmup), PlayedMatch(m) {};

    //Method in concrete class should use a DemoReader to assist in doing this.
    virtual DemoInfo AnalyzeMatch() = 0;



};

#endif