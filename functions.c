#include "functions.h"

List *create_list(void)
// Returns an empty linked list with data and pointer items set to NULL.
{
    List *linked_list;                  // initialise linked list

    linked_list = malloc(sizeof(List)); // allocate memory

    linked_list->data=NULL;             // assign NULL to data item
    linked_list->next = NULL;           // assign end of list pointer

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

List *previous_list(List *list, char *data)
// Recursively finds pointer to previous entry in linked list.
{
    if ((list == NULL) || (list->next == NULL))     // at end of list
    {
        return NULL;                                // no previous entry
    }

    if (list->next->data == data)                   // at previous entry
    {
        return list;                                // return previous entry
    }
    else
    {
        return previous_list(list->next, data);    // call function using next entry
    }
}

void delete_list(List **list, char *data)
// Modifies linked list pointers to not reference entry.
{
    List *current;                              // pointer to current list
    List *previous;                             // pointer to previous list

    current = search_list(*list, data);         // get current entry

    if (current != NULL)
    {
        previous = previous_list(*list, data);  // get previous entry

        if (previous == NULL)                   // at start of linked list
        {
            *list = current->next;              // point to second entry
        }

        else                                    // somewhere past the first entry
        {
            previous->next = current->next;     // point previous entry to next entry
        }

        free(current);                          // delete entry (free memory)
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
