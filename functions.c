#include "functions.h"

List *create_list(void)
{
    List *linked_list;

    linked_list = malloc(sizeof(List));

    linked_list->data=NULL;
    linked_list->next = NULL;

    return linked_list;
}

void insert_list(List **list, char *data)
// Inserts an entry into linked list.
// Requires pointer to pointer in function arguments.
{
    List *entry;                    // initialise inserted entry

    entry = malloc(sizeof(List));   // allocate memory
    entry->data = data;             // assign data item
    entry->next = *list;            // set pointer to start of linked list

    *list = entry;                  // set pointer to start of linked list to entry
}

List *search_list(List *list, char *data)
// Recursively finds entry containing search data.
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
        return search_list(list->next, data);   // call search function with next entry
    }
}

void print_list(List *list)
// Recursively prints entries in linked list.
{
    if (list->next != NULL)         // not at end of linked list
    {
        printf("%s\n", list->data); // print data
        print_list(list->next);     // pass next entry to function
    }
}
