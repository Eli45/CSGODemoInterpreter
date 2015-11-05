#ifndef HALF_PAIR_H
#define HALF_PAIR_H

#include "TypeDefinesAndConstants.h"
#include "Half.h"

class HalfPair  {
private:
    Half One;
    Half Two;
public:
    HalfPair(const HalfPair& h);
    HalfPair(Half one, Half two);

    Inline Half GetHalfOne() const { return One; };
    Inline Half GetHalfTwo() const { return Two; };

};

#endif