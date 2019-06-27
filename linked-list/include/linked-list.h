#include <stdlib.h>
#include <stdio.h>

typedef struct List {
    /* Linked list structure containing data and pointer to next list. */
    char *data;        // data item
    struct List *next; // pointer to next list
} List;

List *create_list(void);
void insert_list(List **list, char *data);
List *search_list(List *list, char *data);
List *previous_list(List *list, char *data);
void delete_list(List **list, char *data);
void print_list(List *list);
