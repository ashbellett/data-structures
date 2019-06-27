#include "../include/dynamic-array.h"

int *create_array(int size) {
    /* Allocates memory for array. */
    return calloc(size, sizeof(int));
}

void insert_array(int *array, int data) {
    /* Inserts data into array. */
    for (int i = 0; i < data; i++) {
        *(array + i) = i;
    }
}

void delete_array(int *array) {
    /* Frees array memory. */
    free(array);
}

void print_array(int *array, int size) {
    /* Prints elements in array. */
    for (int i = 0; i < size; i++) {
        printf("%d\n", *(array + i));
    }
}
