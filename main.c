#include "functions.h"

int main(void)
{
    List *linked_list;              // initialise linked list

    linked_list->next = NULL;       // set end of linked list

    insert_list(&linked_list, 16);  // assign first entry
    insert_list(&linked_list, 32);  // assign second entry
    insert_list(&linked_list, 64);  // assign third entry

    print_list(linked_list);        // print data items in linked list

    return 0;
}
