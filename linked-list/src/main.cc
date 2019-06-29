#include "../include/linked-list.hh"

int main(void) {
    Node *list = new Node();                    // Initialise list
    insert(&list, 1);                           // insert first node
    insert(&list, 2);                           // insert second node
    insert(&list, 3);                           // insert third node
    remove(&list, 2);                           // remove node
    print(list);                                // print nodes
    cout << "Length: " << length(list, 0) << "\n"; // print list length
    Node *result = search(list, 1);             // search for node
    cout << "Result: " << result->data;         // print search result
    return 0;
}