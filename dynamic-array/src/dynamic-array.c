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
    if (array->elements == array->size) {  // if array is full
        array->size *= 2;                  // double array size
        array->data = (int *)realloc(      // reallocate memory for elements using new size
            array->data,
            array->size * sizeof(int)
        );
    }
    array->data[array->elements++] = data; // insert data and increment occupied element count
}

void remove_array(Array *array, int data) {
    /* Removes elements whose value is data. */
    for (int i = 0; i < array->elements; i++) {             // for each element
        if (array->data[i] == data) {                       // if element matches search data
            for (int j = i; j < array->elements - 1; j++) { // for remainder of elements
                array->data[j] = array->data[j + 1];        // replace current element with next element
            }
            array->elements--;                              // decrement occupied element count
            remove_array(array, data);                      // recursively remove elements
        }
    }
}

int search_array(Array *array, int data) {
    /* Searches for element in array and returns index. */
    for (int i = 0; i < array->elements; i++) { // for each element
        if (array->data[i] == data) {           // if element matches search data
            return i;                           // return index
        }
    }
    return -1;                                  // otherwise return -1
}

void delete_array(Array *array) {
    /* Resets array structure and frees memory. */
    array->data = NULL;  // clear pointer to first element
    array->elements = 0; // clear occupied element count
    array->size = 0;     // clear array size
    free(array);         // deallocate memory
}

void print_array(Array *array) {
    /* Prints each element and index in array. */
    for (int i = 0; i < array->elements; i++) { // for each element
        printf("%d: %d\n", i, array->data[i]);  // print index and data
    }
}
