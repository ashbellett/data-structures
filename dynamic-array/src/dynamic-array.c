#include "../include/dynamic-array.h"

int *create_array(int size) {
    return calloc(size, sizeof(int));
}

void populate_array(int *array, int data) {
    for (int i = 0; i < data; i++) {
        *(array + i) = i;
    }
}

void print_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", *(array + i));
    }
}