#include "HalfPair.h"

HalfPair::HalfPair(const HalfPair& h) : One(h.GetHalfOne()), Two(h.GetHalfTwo()) {
}

HalfPair::HalfPair(Half one, Half two) : One(one), Two(two) {
}