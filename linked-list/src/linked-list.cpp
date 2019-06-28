#include "../include/linked-list.h"

Node::Node(void) {
    /* Called each time a new node is created. */
    this->data = 0;       // set data value to zero
    this->next = nullptr; // set end of list
}

void insert(Node **list, int data) {
    /* Inserts a node into linked list. */
    Node *node = new Node(); // allocate memory
    node->data = data;       // set data item
    node->next = *list;      // set pointer of node to start of list
    *list = node;            // set start of list to node
}

Node *search(Node *list, int data) {
    /* Recursively searches for node containing search data. */
    if (list->next == nullptr) {         // end of list
        return nullptr;                  // no node found
    }
    if (list->data == data) {            // data found
        return list;                     // return pointer to node
    } else {                             // data not found
        return search(list->next, data); // call search function with next node
    }
}

Node *previous(Node *list, int data) {
    /* Recursively finds pointer to previous node in list. */
    if ((list == nullptr) || (list->next == nullptr)) { // at end of list
        return nullptr;                                 // no previous node
    }
    if (list->next->data == data) {                     // at previous node
        return list;                                    // return previous node
    } else {                                            // not at previous node
        return previous(list->next, data);              // call function using next node
    }
}

void remove(Node **list, int data) {
    /* Modifies linked list pointers to not reference entry. */
    Node *current;                        // pointer to current node
    Node *before;                         // pointer to previous node
    current = search(*list, data);        // get current node
    if (current != nullptr) {             // not end of list
        before = previous(*list, data);   // get previous node
        if (previous == nullptr) {        // at start of list
            *list = current->next;        // point to second node
        } else {                          // somewhere past the first node
            before->next = current->next; // point previous node to next node
        }
        delete current;                   // deallocate memory of removed node
    }
}

void clear(Node *list) {
    /* Clears data, resets end of list and frees memory. */
    list->data = 0;       // clear data
    list->next = nullptr; // reset end of list
    delete list;          // deallocate memory of list
}

void print(Node *list) {
    /* Recursively prints nodes in linked list. */
    if (list->next != nullptr) {    // if not at end of linked list
        cout << list->data << "\n"; // print data
        print(list->next);          // pass next node to print
    }
}

int length(Node *list, int count=0) {
    /* Recursively calculate number of nodes in list. */
    if (list->next != nullptr) {   // iterate through list
        count++;                   // increment length
        length(list->next, count); // pass next node to count
    } else {                       // end of list
        return count;              // return length
    }
}
