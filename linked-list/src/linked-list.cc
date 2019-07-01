#include "../include/linked-list.hh"

template <class T>
List<T>::List() {
    /* Initialise list. */
    l_head = nullptr;
    l_length = 0;
}

template <class T>
List<T>::~List() {
    /* Terminate list. */
    l_head = nullptr;
    l_length = 0;
}

template <class T>
void List<T>::clear() {
    /* Reset end of list. */
    l_head = nullptr;
    l_length = 0;
}

template <class T>
bool List<T>::empty() {
    /* Return whether list is empty. */
    return l_head == nullptr && l_length == 0;
}

template <class T>
Node<T> *List<T>::get(T data) {
    /* Return node containing data. */
    Node<T> *node = head();        // get first node in list
    while (node != nullptr) {      // while not at end of list
        if (node->get() == data) { // if current node contains data
            return node;           // return current node
        } else {                   // current node does not contain data
            node = node->next();   // iterate to next node
        }
    }
    return nullptr;                // list does not contain data
}

template <class T>
Node<T> *List<T>::head() {
    /* Return pointer to start of list. */
    return l_head;
}

template <class T>
int List<T>::length() {
    /* Return number of nodes in list. */
    return l_length;
}

template <class T>
void List<T>::link(Node<T> *node) {
    /* Set pointer to first node in list. */
    l_head = node;
}

template <class T>
Node<T> *List<T>::pop() {
    /* Return and remove first node in list. */
    Node<T> *node = head(); // get first node in list
    if (node == nullptr) {  // if empty list
        return nullptr;     // nothing to pop
    } else {                // non-empty list
        link(node->next()); // set head to next node
        l_length--;         // decrement list length
        delete node;        // deallocate memory
        return node;        // return head
    }
}

template <class T>
void List<T>::print() {
    /* Print node data and position in list. */
    Node<T> *node = head();                                   // get first node in list
    int position = 0;                                         // initialise position
    while (node != nullptr) {                                 // while not at end of list
        std::cout << position << ": " << node->get() << "\n"; // print data and position
        position++;                                           // increment position
        node = node->next();                                  // iterate to next node
    }
}

template <class T>
void List<T>::push(T data) {
    /* Insert node into start of list. */
    Node<T>* node = new Node<T>(); // allocate memory for new node
    node->set(data);               // set node data
    node->link(head());            // point node to first node in list
    link(node);                    // point start of list to node
    l_length++;                    // increment list length
}

template <class T>
void List<T>::remove(Node<T> *node) {
    /* Remove node from list. */
    Node<T> *l_node = head();                     // get first node in list
    while (l_node != nullptr) {                   // while not at end of list
        if (l_node->next() == node) {             // if next node is node to be removed
            l_node->link(l_node->next()->next()); // link current node to node after node to be removed
            delete node;                          // deallocate memory
            l_length--;                           // decrement list length
        } else {                                  // next node is not node to be removed
            l_node = l_node->next();              // iterate to next node
        }
    }
}

template <class T>
void List<T>::set(Node<T> *node, T data) {
    /* Replace data of given node in list. */
    node->set(data);
}
