#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Array {
    public:
        int *data;               // pointer to elements
        int length;              // occupied elements count
        int size;                // current maximum size
        Array(int initial_size); // constructor
};

void insert(Array *array, int data);
int search(Array *array, int data);
void remove(Array *array, int data);
void clear(Array *array);
void print(Array *array);
int length(Array *array);
