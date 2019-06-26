typedef struct List {
    /* Linked list structure containing data and pointer to next list. */
    char *data;        // data item
    struct List *next; // pointer to next list
} List;
