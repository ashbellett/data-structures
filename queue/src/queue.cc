#include "../include/queue.hh"

template <class T>
Queue<T>::Queue() {
    /* Initialise queue. */
    q_head = nullptr;
    q_tail = new Node<T>();
    q_length = 0;
}

template <class T>
Queue<T>::~Queue() {
    /* Terminate queue. */
    q_head = nullptr;
    q_tail = nullptr;
    q_length = 0;
}

template <class T>
void Queue<T>::clear() {
    /* Reset queue. */
    q_head = nullptr;
    q_tail = new Node<T>();
    q_length = 0;
}

template <class T>
T Queue<T>::dequeue() {
    /* Return and remove element at top of queue. */
    Node<T> *node = tail();                           // get last node in queue
    if (length() == 0) {                              // if there are no nodes in queue
        return (T) 0;                                 // return zero
    } else {                                          // there is at least one node in queue
        T top = head()->get();                        // get value of node at start of queue
        if (length() == 1) {                          // if there is one node in queue
            q_head = nullptr;                         // reset head
            q_tail = nullptr;                         // reset tail
        } else {                                      // there is more than one node in queue
            while (node->next()->next() != nullptr) { // if not before final node in queue
                node = node->next();                  // iterate to next node
            }
            node->link(nullptr);                      // point new node to end of queue
            q_head = node;                            // reset head
        }
        q_length--;                                   // decrement queue length
        return top;                                   // return value of node at start of queue
    }
}

template <class T>
bool Queue<T>::empty() {
    /* Return whether there are nodes in queue. */
    return q_length == 0;
}

template <class T>
void Queue<T>::enqueue(T data) {
    /* Insert element at end of queue. */
    Node<T>* node = new Node<T>(); // allocate memory
    node->set(data);               // insert data into new node
    if (length() == 0) {           // if no nodes in queue
        node->link(nullptr);       // make node at end of queue
        q_head = node;             // reset head
    } else if (length() == 1) {    // if one node in queue
        node->link(q_head);        // point node to head
    } else {                       // there is more than one node in queue
        node->link(q_tail);        // point node to tail
    }
    q_tail = node;                 // reset tail
    q_length++;                    // increment queue length
}

template <class T>
Node<T> *Queue<T>::head() {
    /* Return pointer to first node in queue. */
    return q_head;
}

template <class T>
int Queue<T>::length() {
    /* Return number of elements in queue. */
    return q_length;
}

template <class T>
Node<T> *Queue<T>::tail() {
    /* Return pointer to last node in queue. */
    return q_tail;
}
