#include "../include/dynamic-array.h"

int main(void) {
    int data;
    int *array;
    int size = 4;
    array = create_array(size);
    populate_array(array, size);
    print_array(array, size);
    free(array);
    return 0;
}
