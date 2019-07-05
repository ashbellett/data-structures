#include <iostream>
#include "node.hh"

template <class T>
class Stack {
    private:
        Node<T> *s_head; // pointer to top of stack
        int s_length;    // number of nodes in stack
    public:
        Stack();  // constructor
        ~Stack(); // destructor
        void clear(void);
        bool empty(void);
        Node<T> *head(void);
        int length(void);
        void link(Node<T> *node);
        T peek(void);
        T pop(void);
        void push(T data);
};

template class Stack<int>;
template class Stack<float>;
template class Stack<char>;
