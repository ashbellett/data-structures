#include "../include/dynamic-array.h"

int main(void) {
    Array *array;
    array = (Array *)malloc(sizeof(Array));
    insert(array, 1);
    insert(array, 2);
    insert(array, 3);
    remove(array, 2);
    print(array);
    cout << "Length: " << array->length << "\n";
    cout << "Index of 1: " <<search(array, 1);
    clear(array);
    print(array);
}
