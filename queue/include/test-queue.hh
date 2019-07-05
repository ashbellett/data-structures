#include <string>
#include "queue.hh"

void performTest(bool (&test)(void), std::string message);
bool testClear(void);
bool testDequeue(void);
bool testEmpty(void);
bool testEnqueue(void);
bool testLength(void);
