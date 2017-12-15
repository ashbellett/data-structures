#include "functions.h"

// List *create_list(void)
// {
//     List *linked_list;          // initialise linked list

//     linked_list->next = NULL;   // set end of linked list

//     return linked_list;
// }

void insert_list(List **list, int data)
// Inserts an entry into linked list.
// Requires pointer to pointer in function arguments.
{
    List *entry;                    // initialise inserted list

    entry = malloc(sizeof(List));   // allocate memory
    entry->data = data;             // data item
    entry->next = *list;            // pointer to start of linked list

    *list = entry;                  // set pointer to start of linked list to entry
}

List *search_list(List *list, int data)
// Recursively finds list containing search data.
// Returns NULL if data not found.
{
    if (list->next == NULL)                     // end of list
    {
        return NULL;                            // NULL pointer
    }

    if (list->data == data)                     // data found
    {
        return list;                            // return pointer to list
    }
    else                                        // data not found
    {
        return search_list(list->next, data);   // call search function with next list
    }
}

void print_list(List *list)
// Recursively prints entries in linked list.
{
    if (list->next != NULL)         // not at end of linked list
    {
        printf("%i\n", list->data); // print data
        print_list(list->next);     // pass next entry to function
    }
}
