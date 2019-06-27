#include <stdlib.h>
#include <stdio.h>

typedef struct Array {
  /* Array structure containing elements, array length and maximum size. */
  int *data;    // array elements
  int elements; // occupied element count
  int size;     // array size
} Array;

Array *create_array(int size);
void insert_array(Array *array, int data);
void remove_array(Array *array, int data);
int search_array(Array *array, int data);
void delete_array(Array *array);
void print_array(Array *array);
