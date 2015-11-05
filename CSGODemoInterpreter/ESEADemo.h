#ifndef ESEA_DEMO_H
#define ESEA_DEMO_H

#include "Demo.h"
#include "Match.h"

class ESEADemo : AbstractDemo   {
private:
public:
    ESEADemo(Match m) : AbstractDemo(3, m) {};
    DemoInfo AnalyzeMatch();
};


#endif