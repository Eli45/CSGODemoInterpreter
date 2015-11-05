#ifndef DEMO_INFO_H
#define DEMO_INFO_H

#include "TypeDefinesAndConstants.h"
#include "Round.h"
#include "Match.h"

class DemoInfo  {
private:
    Match M;

public:
    DemoInfo(Match m);

    String AsString();
    String AsSimpleString();

};

#endif