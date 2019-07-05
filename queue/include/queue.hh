#include <iostream>
#include "node.hh"

template <class T>
class Queue {
    private:
        Node<T> *q_head; // pointer to first node in queue
        Node<T> *q_tail; // pointer to last node in queue
        int q_length;    // number of nodes in queue
    public:
        Queue();  // constructor
        ~Queue(); // destructor
        void clear(void);
        T dequeue(void);
        bool empty(void);
        void enqueue(T data);
        Node<T> *head(void);
        int length(void);
        Node<T> *tail(void);
};

template class Queue<int>;
template class Queue<float>;
template class Queue<char>;
