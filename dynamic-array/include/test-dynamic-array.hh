#include <string>
#include "../include/dynamic-array.hh"

void performTest(bool (&test)(void), std::string message);
bool testCapacity(void);
bool testClear(void);
bool testEmpty(void);
bool testFill(void);
bool testGet(void);
bool testIndex(void);
bool testLength(void);
bool testPop(void);
bool testPush(void);
bool testSet(void);
