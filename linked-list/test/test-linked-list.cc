#include "../include/linked-list.hh"
#include "../include/test-linked-list.hh"

void perform_test(bool (&test)(void), std::string message) {
    // Print whether the test passed or failed 
    std::cout << message << (test() ? "Passed" : "Failed") << "\n";
}

bool test_clear(void) {
    List<int> list;
    // Insert 5 nodes into list
    for (int i = 0; i < 5; i++) {
        list.push(i);
    }
    // Clear list
    list.clear();
    // Should be end of list and zero length
    return list.head() == nullptr && list.length() == 0;
}

bool test_empty(void) {
    List<int> list;
    // Initial list should be empty
    bool empty = list.empty();
    // Insert 5 nodes into list
    for (int i = 0; i < 5; i++) {
        list.push(i);
    }
    // Empty and non-empty tests should pass
    return empty && !list.empty();
}

bool test_fill(void) {
    List<int> list;
    // Insert 3 nodes into list
    for (int i = 0; i < 3; i++) {
        list.push(i);
    }
    // Fill existing nodes with zeroes
    list.fill(0);
    // Correct values should be returned
    return list.pop()->get() == 0 && list.pop()->get() == 0 && list.pop()->get() == 0;
}

bool test_get(void) {
    List<int> list;
    // Insert 5 nodes into list
    for (int i = 0; i < 5; i++) {
        list.push(i);
    }
    // Correct values should be returned
    return list.get(0)->get() == 0 && list.get(2)->get() == 2 && list.get(4)->get() == 4;
}

bool test_head(void) {
    List<int> list;
    // Initial head should point to end of list
    Node<int> *initialHead = list.head();
    // Insert node into list
    list.push(0);
    // Correct values should be returned
    return initialHead == nullptr && list.head() != nullptr;
}

bool test_length(void) {
    List<int> list;
    // Initial length should be zero
    int initialLength = list.length();
    // Insert 5 nodes into list
    for (int i = 0; i < 5; i++) {
        list.push(i);
    }
    // New length should be 5
    return initialLength == 0 && list.length() == 5;
}

bool test_link(void) {
    List<int> list;
    // Create a node
    Node<int> *node;
    // Link node to list
    list.link(node);
    // Head should point to node
    return list.head() == node;
}

bool test_pop(void) {
    List<int> list;
    // Insert 5 nodes into list
    for (int i = 0; i < 5; i++) {
        list.push(i);
    }
    // Correct values should be returned
    return list.pop()->get() == 4 && list.pop()->get() == 3 && list.pop()->get() == 2;
}

bool test_push(void) {
    List<int> list;
    // Insert 5 nodes into list
    for (int i = 0; i < 5; i++) {
        list.push(i);
    }
    // Correct values should be returned
    return list.get(0)->get() == 0 && list.get(2)->get() == 2 && list.get(4)->get() == 4;
}

bool test_remove(void) {
    List<int> list;
    // Insert 5 nodes into list
    for (int i = 0; i < 3; i++) {
        list.push(i);
    }
    // Remove node containing one
    list.remove(list.get(1));
    // Correct values should be returned
    return list.length() == 2 && list.pop()->get() == 2 && list.pop()->get() == 0;
}

bool test_set(void) {
    List<int> list;
    // Insert 5 nodes into list
    for (int i = 0; i < 5; i++) {
        list.push(i);
    }
    // Replace 1 with 10 and 3 with 30
    list.set(list.get(1), 10);
    list.set(list.get(3), 30);
    // Correct values should be returned
    return list.get(10)->get() == 10 && list.get(30)->get() == 30;
}
