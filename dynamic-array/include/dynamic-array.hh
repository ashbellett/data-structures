#include <iostream>
using namespace std;

template <class T>
class Array {
    private:
        size_t a_capacity; // current maximum array size
        size_t a_length;   // occupied elements count
        T *a_data;         // pointer to elements
    public:
        Array();  // constructor
        ~Array(); // destructor
        size_t length(void);
        size_t capacity(void);
        void print(void);
        void expand(void);
        void shrink(void);
        void push(T data);
        T pop(void);
        void set(size_t index, T data);
        T get(size_t index);
        int index(T data);
        void clear(void);
};
