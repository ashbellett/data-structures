#include "../include/dynamic-array.hh"

int main(void) {
    Array<int> array;
    // Push test
    for (int i = 0; i < 10; i++) {
        array.push(i);
    }
    // Print test
    array.print();
    cout << "\n";
    // Pop test
    cout << "First pop: " << array.pop() << "\n";
    cout << "Second pop: " << array.pop() << "\n";
    cout << "Third pop: " << array.pop() << "\n";
    cout << "\n";
    // Set test
    array.set(2, 20);
    array.set(3, 30);
    array.set(4, 40);
    array.print();
    cout << "\n";
    // Index test
    cout << "Index of 30: " << array.index(30) << "\n";
    cout << "\n";
    // Length test
    cout << "Length: " << array.length() << "\n";
    // Capacity test
    cout << "Capacity: " << array.capacity() << "\n";
    cout << "\n";
    // Clear test
    array.clear();
    array.print();
    cout << "\n";
    for (int i = 0; i < 4; i++) {
        array.push(i);
    }
    array.print();
    cout << "\n";
    array.set(7, 4);
    array.print();
}
