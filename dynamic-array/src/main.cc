#include "../include/test-dynamic-array.hh"

int main(void) {
    performTest(testCapacity, "Capacity:\t");
    performTest(testClear, "Clear:\t\t");
    performTest(testEmpty, "Empty:\t\t");
    performTest(testFill, "Fill:\t\t");
    performTest(testGet, "Get:\t\t");
    performTest(testIndex, "Index:\t\t");
    performTest(testLength, "Length:\t\t");
    performTest(testPop, "Pop:\t\t");
    performTest(testPush, "Push:\t\t");
    performTest(testSet, "Set:\t\t");
    return 0;
}
