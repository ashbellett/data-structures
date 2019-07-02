#include <iostream>

template <class T>
class Stack {
    private:
        int s_capacity; // maximum number of elements
        int s_length;   // occupied elements count
        T *s_data;      // array of elements
    public:
        Stack(int capacity); // constructor
        ~Stack();            // destructor
        int capacity(void);
        void clear(void);
        bool empty(void);
        bool full(void);
        int length(void);
        T peek(void);
        T pop(void);
        void push(T data);
};

template class Stack<int>;
template class Stack<float>;
template class Stack<char>;
