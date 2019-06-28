#include "../include/dynamic-array.h"

Array::Array(int initial_size) {
    Array *array = (Array *)malloc(sizeof(Array));   // allocate memory for array
    array->data = (int *)malloc(size * sizeof(int)); // allocate memory for elements
    this->length = 0;                                // set array length to zero
    this->size = initial_size;                       // set initial size
}

void insert(Array *array, int data);
int search(Array *array, int data);
void remove(Array *array, int data);
void clear(Array *array);
void print(Array *array);

void insert(Array *array, int data) {
    /* Dynamically resizes and inserts data into array. */
    if (array->length == array->size) {  // if array is full
        array->size *= 2;                // double array size
        array->data = (int *)realloc(    // reallocate memory for elements using new size
            array->data,
            array->size * sizeof(int)
        );
    }
    array->data[array->length++] = data; // insert data and increment occupied element count
}

void remove(Array *array, int data) {
    /* Removes elements whose value is data. */
    for (int i = 0; i < array->length; i++) {             // for each element
        if (array->data[i] == data) {                     // if element matches search data
            for (int j = i; j < array->length - 1; j++) { // for remainder of elements
                array->data[j] = array->data[j + 1];      // replace current element with next element
            }
            array->length--;                              // decrement occupied element count
            remove(array, data);                          // recursively remove elements
        }
    }
}

int search(Array *array, int data) {
    /* Searches for element in array and returns index. */
    for (int i = 0; i < array->length; i++) { // for each element
        if (array->data[i] == data) {         // if element matches search data
            return i;                         // return index
        }
    }
    return -1;                                // otherwise return -1
}

void clear(Array *array) {
    /* Resets array structure and frees memory. */
    array->data = NULL; // clear pointer to first element
    array->length = 0;  // clear occupied element count
    array->size = 0;    // clear array size
    free(array);        // deallocate memory
}

void print(Array *array) {
    /* Prints each element and index in array. */
    for (int i = 0; i < array->length; i++) {  // for each element
        printf("%d: %d\n", i, array->data[i]); // print index and data
    }
}
