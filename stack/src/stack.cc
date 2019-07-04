#include "../include/stack.hh"

template <class T>
Stack<T>::Stack() {
    /* Initialise stack. */
    s_head = nullptr;
    s_length = 0;
}

template <class T>
Stack<T>::~Stack() {
    /* Terminate stack. */
    s_head = nullptr;
    s_length = 0;
}

template <class T>
void Stack<T>::clear() {
    /* Reset stack. */
    s_head = nullptr;
    s_length = 0;
}

template <class T>
bool Stack<T>::empty() {
    /* Return whether there are elements in stack. */
    return s_head == nullptr && s_length == 0;
}

template <class T>
int Stack<T>::length() {
    /* Return number of elements in stack. */
    return s_length;
}

template <class T>
T Stack<T>::peek() {
    /* Return data at top of stack. */
    return s_head->get();
}

template <class T>
T Stack<T>::pop() {
    /* Return and remove data at top of stack. */
    if (s_length > 0) {              // if stack is not empty
        Node<T> *node = s_head;      // get top node in stack
        if (s_length == 1) {         // if only one node in stack
            s_head = nullptr;        // terminate stack
        } else {                     // at least two nodes in stack
            s_head = s_head->next(); // point head to next node
        }
        s_length--;                  // decrement stack length
        return node->get();          // return data at top of stack
    } else {                         // stack is empty
        return (T) 0;                // return zero
    }
}

template <class T>
void Stack<T>::push(T data) {
    /* Insert data at top of stack. */
    Node<T>* node = new Node<T>(); // allocate memory for new node
    node->set(data);               // insert data into node
    node->link(s_head);            // point node to first node in list
    s_head = node;                 // point stack head to node
    s_length++;                    // increment list length
}
