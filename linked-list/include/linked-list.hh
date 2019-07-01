#include <iostream>
#include "node.hh"

template <class T>
class List {
    private:
        Node<T> *l_head; 
        int l_length;
    public:
        List();  // constructor
        ~List(); // destructor
        void clear(void);
        bool empty(void);
        Node<T> *get(T data);
        Node<T> *head(void);
        int length(void);
        void link(Node<T> *node);
        Node<T> *pop(void);
        void print(void);
        void push(T data);
        void remove(Node<T> *node);
        void set(Node<T> *node, T data);
};

template class List<int>;
template class List<float>;
template class List<char>;