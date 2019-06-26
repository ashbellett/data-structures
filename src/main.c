#include "../include/functions.h"

int main(void) {
    List *linked_list;              // initialise linked list
    linked_list = create_list();    // create linked list
    insert_list(&linked_list, "A"); // assign first entry
    insert_list(&linked_list, "B"); // assign second entry
    insert_list(&linked_list, "C"); // assign third entry
    print_list(linked_list);        // print data items in linked list
    delete_list(&linked_list, "B"); // removes entry containing "B"
    printf("\n");
    print_list(linked_list);        // print data items in linked list
    return 0;
}
