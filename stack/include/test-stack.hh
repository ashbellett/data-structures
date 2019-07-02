#include <string>
#include "../include/stack.hh"

void performTest(bool (&test)(void), std::string message);
bool testCapacity(void);
bool testClear(void);
bool testEmpty(void);
bool testFull(void);
bool testLength(void);
bool testPeek(void);
bool testPop(void);
bool testPush(void);
