#include "../include/dynamic-array.hh"
#include "../include/test-dynamic-array.hh"

int main(void) {
    perform_test(test_capacity, "Capacity:\t");
    perform_test(test_clear, "Clear:\t\t");
    perform_test(test_empty, "Empty:\t\t");
    perform_test(test_fill, "Fill:\t\t");
    perform_test(test_get, "Get:\t\t");
    perform_test(test_index, "Index:\t\t");
    perform_test(test_length, "Length:\t\t");
    perform_test(test_pop, "Pop:\t\t");
    perform_test(test_push, "Push:\t\t");
    perform_test(test_set, "Set:\t\t");
    return 0;
}
