#include "../include/test-linked-list.hh"

int main(void) {
    performTest(testClear, "Clear:\t\t");
    performTest(testEmpty, "Empty:\t\t");
    performTest(testFill, "Fill:\t\t");
    performTest(testGet, "Get:\t\t");
    performTest(testHead, "Head:\t\t");
    performTest(testLength, "Length:\t\t");
    performTest(testLink, "Link:\t\t");
    performTest(testPop, "Pop:\t\t");
    performTest(testPush, "Push:\t\t");
    performTest(testRemove, "Remove:\t\t");
    performTest(testSet, "Set:\t\t");
    return 0;
}
