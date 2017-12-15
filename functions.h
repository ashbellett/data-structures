#include <stdlib.h>
#include <stdio.h>
#include "structures.h"

// List *create_list(void);
void insert_list(List **list, int data);
List *search_list(List *list, int data);
void print_list(List *list);
