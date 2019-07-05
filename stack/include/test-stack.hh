#include <string>
#include "stack.hh"

void performTest(bool (&test)(void), std::string message);
bool testClear(void);
bool testEmpty(void);
bool testLength(void);
bool testPeek(void);
bool testPop(void);
bool testPush(void);
