#include "../include/linked-list.hh"
#include "../include/test-linked-list.hh"

int main(void) {
    perform_test(test_clear, "Clear:\t\t");
    perform_test(test_empty, "Empty:\t\t");
    perform_test(test_fill, "Fill:\t\t");
    perform_test(test_get, "Get:\t\t");
    perform_test(test_head, "Head:\t\t");
    perform_test(test_length, "Length:\t\t");
    perform_test(test_link, "Link:\t\t");
    perform_test(test_pop, "Pop:\t\t");
    perform_test(test_push, "Push:\t\t");
    perform_test(test_remove, "Remove:\t\t");
    perform_test(test_set, "Set:\t\t");
    return 0;
}
