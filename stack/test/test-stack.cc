#include "../include/test-stack.hh"

void performTest(bool (&test)(void), std::string message) {
    // Print whether the test passed or failed 
    std::cout << message << (test() ? "Passed" : "Failed") << "\n";
}

bool testCapacity(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack(5);
    // Check whether capacity equals 5
    return stack.capacity() == 5;
}

bool testClear(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack(5);
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Clear stack
    stack.clear();
    return stack.length() == 0;
}

bool testEmpty(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack(5);
    // Initial stack should be empty
    bool empty = stack.empty();
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Empty and non-empty tests should pass
    return empty && !stack.empty();
}

bool testFull(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack(5);
    // Initial stack should not be full
    bool full = stack.full();
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Full and non-full tests should pass
    return !full && stack.full();
}

bool testLength(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack(5);
    // Initial length should be zero
    bool length = stack.length();
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // length tests should pass
    return length == 0 && stack.length() == 5;
}

bool testPeek(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack(5);
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Last element should be returned
    return stack.peek() == 4;
}

bool testPop(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack(5);
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Last element should be returned and length should be decremented
    return stack.pop() == 4 && stack.length() == 4;
}

bool testPush(void) {
    // Create stack with capacity of 3 elements
    Stack<int> stack(3);
    // Insert 3 elements into stack
    for (int i = 0; i < 3; i++) {
        stack.push(i);
    }
    // Correct values should be returned
    return stack.pop() == 2 && stack.pop() == 1 && stack.pop() == 0;
}
