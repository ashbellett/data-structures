#include <stdlib.h>
#include <stdio.h>
#include "structures.h"

List *create_list(void);
void insert_list(List **list, char *data);
List *search_list(List *list, char *data);
void print_list(List *list);
