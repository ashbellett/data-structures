#include "../include/node.hh"

template <class T>
Node<T>::Node() {
    /* Initialises node. */
    n_next = nullptr;
}

template <class T>
Node<T>::~Node() {
    /* Terminates node. */
    n_next = nullptr;
}

template <class T>
T Node<T>::get() {
    /* Returns data in node. */
    return n_data;
}

template <class T>
void Node<T>::link(Node *node) {
    /* Set pointer to next node. */
    n_next = node;
}

template <class T>
Node<T> *Node<T>::next() {
    /* Returns address of next node. */
    return n_next;
}

template <class T>
void Node<T>::set(T data) {
    /* Set node with new data. */
    n_data = data;
}
