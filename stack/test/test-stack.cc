#include "../include/test-stack.hh"

void performTest(bool (&test)(void), std::string message) {
    // Print whether the test passed or failed 
    std::cout << message << (test() ? "Passed" : "Failed") << "\n";
}

bool testClear(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack;
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Clear stack
    stack.clear();
    // Length should be zero
    return stack.length() == 0;
}

bool testEmpty(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack;
    // Initial stack should be empty
    bool empty = stack.empty();
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Empty and non-empty tests should pass
    return empty && !stack.empty();
}

bool testLength(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack;
    // Initial length should be zero
    bool length = stack.length();
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Length tests should pass
    return length == 0 && stack.length() == 5;
}

bool testPeek(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack;
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Last element should be returned
    return stack.peek() == 4;
}

bool testPop(void) {
    // Create stack with capacity of 5 elements
    Stack<int> stack;
    // Insert 5 elements into stack
    for (int i = 0; i < 5; i++) {
        stack.push(i);
    }
    // Last element should be returned and length should be decremented
    return stack.pop() == 4 && stack.length() == 4;
}

bool testPush(void) {
    // Create stack with capacity of 3 elements
    Stack<int> stack;
    // Insert 3 elements into stack
    for (int i = 0; i < 3; i++) {
        stack.push(i);
    }
    // Correct values should be returned
    return stack.pop() == 2 && stack.pop() == 1 && stack.pop() == 0;
}
