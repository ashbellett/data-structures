#include <iostream>

template <class T>
class Array {
    private:
        size_t a_capacity; // current maximum array size
        size_t a_length;   // occupied elements count
        T *a_data;         // pointer to elements
    public:
        Array();  // constructor
        ~Array(); // destructor
        size_t capacity(void);
        void clear(void);
        void expand(void);
        T get(size_t index);
        int index(T data);
        size_t length(void);
        T pop(void);
        void print(void);
        void push(T data);
        void set(size_t index, T data);
        void shrink(void);
};

template class Array<int>;
template class Array<float>;
template class Array<char>;
