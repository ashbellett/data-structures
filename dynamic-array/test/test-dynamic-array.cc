#include "../include/test-dynamic-array.hh"

void performTest(bool (&test)(void), std::string message) {
    // Print whether the test passed or failed 
    std::cout << message << (test() ? "Passed" : "Failed") << "\n";
}

bool testCapacity(void) {
    Array<int> array;
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Capacity should be 8
    return array.capacity() == 8;
}

bool testClear(void) {
    Array<int> array;
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Clear array
    array.clear();
    // Capacity should be 1 and length should be 0
    return array.capacity() == 1 && array.length() == 0;
}

bool testEmpty(void) {
    Array<int> array;
    // Initial array should be empty
    bool empty = array.empty();
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Empty and non-empty tests should pass
    return empty && !array.empty();
}

bool testFill(void) {
    Array<int> array;
    // Insert 3 integers into array
    for (int i = 0; i < 3; i++) {
        array.push(i);
    }
    // Replace all elements with zeroes
    array.fill(0);
    // Correct values should be returned
    return array.pop() == 0 && array.pop() == 0 && array.pop() == 0;
}

bool testGet(void) {
    Array<int> array;
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Correct values should be returned
    return array.get(0) == 0 && array.get(2) == 2 && array.get(4) == 4;
}

bool testIndex(void) {
    Array<int> array;
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Correct indices should be returned
    return array.index(0) == 0 && array.index(2) == 2 && array.index(4) == 4;
}

bool testLength(void) {
    Array<int> array;
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Length should be 5
    return array.length() == 5;
}

bool testPop(void) {
    Array<int> array;
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Correct values should be returned
    return array.pop() == 4 && array.pop() == 3 && array.pop() == 2;
}

bool testPush(void) {
    Array<int> array;
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Correct values should be returned
    return array.get(0) == 0 && array.get(2) == 2 && array.get(4) == 4;
}

bool testSet(void) {
    Array<int> array;
    // Insert 5 integers into array
    for (int i = 0; i < 5; i++) {
        array.push(i);
    }
    // Replace 1 with 10 and 3 with 30
    array.set(1, 10);
    array.set(3, 30);
    // Correct values should be returned
    return array.index(10) == 1 && array.index(30) == 3;
}
