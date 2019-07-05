#include "../include/test-queue.hh"

int main(void) {
    performTest(testClear, "Clear:\t\t");
    performTest(testDequeue, "Dequeue:\t");
    performTest(testEmpty, "Empty:\t\t");
    performTest(testEnqueue, "Enqueue:\t");
    performTest(testLength, "Length:\t\t");
    return 0;
}
