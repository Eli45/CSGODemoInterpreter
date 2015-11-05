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

//Returns true if all tests passed.
void RunTests()  {
    //assert()
}

int main(int argc, char** argv) {
    RunTests();
}

#else
int main(int argc, char** argv) {
    //Normal operations.
}
#endif
