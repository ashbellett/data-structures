#include "../include/dynamic-array.h"

int main(void) {
    Array *array;               // pointer to first element in array
    int size = 2;               // initial size of array
    array = create_array(size); // Allocate memory for array
    insert_array(array, 1);     // Insert first element in array
    insert_array(array, 2);     // Insert second element in array
    insert_array(array, 3);     // Insert third element in array (dynamically resizes array)
    print_array(array);         // Print elements in array
    delete_array(array);        // Clear array and free memory
    return 0;
}
