#include "../include/dynamic-array.h"

int main(void) {
    Array *array;                        // pointer to first element in array
    int size = 2;                        // initial size of array
    int value = 2;                       // search value
    int result;                          // search result
    array = create_array(size);          // allocate memory for array
    insert_array(array, 1);              // insert first element in array
    insert_array(array, 2);              // insert second element in array
    insert_array(array, 3);              // insert third element in array (dynamically resizes array)
    result = search_array(array, value); // search for element in array
    printf(                              // print index of search result
        "Index of value %d: %d\n",
        value,
        result
    );
    remove_array(array, value);          // remove elements with value
    print_array(array);                  // print elements in array
    delete_array(array);                 // clear array and free memory
    return 0;
}
