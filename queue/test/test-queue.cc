#include "../include/test-queue.hh"

void performTest(bool (&test)(void), std::string message) {
    // Print whether the test passed or failed 
    std::cout << message << (test() ? "Passed" : "Failed") << "\n";
}

bool testClear(void) {
    // Insert 3 elements into queue
    Queue<int> queue;
    for (int i = 0; i < 3; i++) {
        queue.enqueue(i);
    }
    // Clear queue
    queue.clear();
    // Length should be zero
    return queue.length() == 0;
}

bool testDequeue(void) {
    // Insert 3 elements into queue
    Queue<int> queue;
    for (int i = 0; i < 3; i++) {
        queue.enqueue(i);
    }
    // Correct values should be returned
    return queue.dequeue() == 0 && queue.dequeue() == 1 && queue.dequeue() == 2 && queue.length() == 0;
}

bool testEmpty(void) {
    // Initial queue should be empty
    Queue<int> queue;
    bool empty = queue.empty();
    // Insert 3 elements into queue
    for (int i = 0; i < 3; i++) {
        queue.enqueue(i);
    }
    // Empty and non-empty tests should pass
    return empty && !queue.empty();
}

bool testEnqueue(void) {
    // Insert 3 elements into queue
    Queue<int> queue;
    for (int i = 0; i < 3; i++) {
        queue.enqueue(i);
    }
    // Correct values should be returned
    return queue.length() == 3 && queue.dequeue() == 0 && queue.dequeue() == 1 && queue.dequeue() == 2;
}

bool testLength(void) {
    // Initial length should be zero
    Queue<int> queue;
    bool length = queue.length();
    // Insert 3 elements into queue
    for (int i = 0; i < 3; i++) {
        queue.enqueue(i);
    }
    // Length tests should pass
    return length == 0 && queue.length() == 3;
}
