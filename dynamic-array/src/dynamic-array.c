#include "../include/dynamic-array.h"

Array *create_array(int size) {
    /* Initialise array structure. */
    Array *array;                                    // initialise pointer to array
    array = (Array *)malloc(sizeof(Array));          // allocate memory for array structure
    array->data = (int *)malloc(size * sizeof(int)); // allocate memory for elements
    array->elements = 0;                             // initially no occupied elements
    array->size = size;                              // initial size of array
    return array;
}

void insert_array(Array *array, int data) {
    /* Dynamically resizes and inserts data into array. */
    if (array->elements == array->size) {  // If array is full
        array->size *= 2;                  // Double array size
        array->data = (int *)realloc(      // Reallocate memory for elements using new size
            array->data,
            array->size * sizeof(int)
        );
    }
    array->data[array->elements++] = data; // Insert data into next element
}

int search_array(Array *array, int data) {
    /* Searches for element in array and returns index. */
    for (int i = 0; i < array->elements; i++) { // For each element
        if (array->data[i] == data) {           // If element matches search data
            return i;                           // Return index
        }
    }
    return -1;                                  // Otherwise return -1
}

void delete_array(Array *array) {
    /* Frees array memory. */
    free(array);
    array->data = NULL;
    array->elements = 0;
    array->size = 0;
}

void print_array(Array *array) {
    /* Prints elements in array. */
    for (int i = 0; i < array->elements; i++) { // For each element
        printf("%d: %d\n", i, array->data[i]);  // Print index and data
    }
}
