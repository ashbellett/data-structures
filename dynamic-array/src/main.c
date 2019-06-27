#include "../include/dynamic-array.h"

int main(void) {
    int *array;                 // pointer to first element in array
    int size = 4;               // initial size of array
    array = create_array(size); // Allocate memory for array
    insert_array(array, size);  // Insert data into array
    print_array(array, size);   // Print elements in array
    delete_array(array);        // Free array memory
    return 0;
}
