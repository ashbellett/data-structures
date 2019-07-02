#include "../include/stack.hh"

template <class T>
Stack<T>::Stack(int capacity) {
    /* Initialise stack. */
    s_capacity = capacity;      // set capacity
    s_data = new T[s_capacity]; // allocate stack memory
    s_length = 0;               // initialise zero length
}

template <class T>
Stack<T>::~Stack() {
    /* Terminate stack. */
    delete s_data;
}

template <class T>
int Stack<T>::capacity() {
    /* Return stack capacity. */
    return s_capacity;
}

template <class T>
void Stack<T>::clear() {
    /* Delete and initialise new stack. */
    delete s_data;              // deallocate memory
    s_data = new T[s_capacity]; // allocate stack memory
    s_length = 0;               // initialise zero length
}

template <class T>
bool Stack<T>::empty() {
    /* Return whether there are elements in stack. */
    return s_length == 0;
}

template <class T>
bool Stack<T>::full() {
    /* Return whether stack capacity is reached. */
    return s_length == s_capacity;
}

template <class T>
int Stack<T>::length() {
    /* Return number of elements in stack. */
    return s_length;
}

template <class T>
T Stack<T>::peek() {
    /* Return data at end of stack. */
    return s_data[s_length];
}

template <class T>
T Stack<T>::pop() {
    /* Return and remove data at end of stack. */
    if (s_length > 0) {            // if stack is not empty
        return s_data[s_length--]; // return data and decrement length
    } else {                       // stack is empty
        return (T) 0;              // return zero
    }
}

template <class T>
void Stack<T>::push(T data) {
    /* Insert data at end of stack. */
    if (s_length <= s_capacity) {  // if capacity is not exceeded
        s_data[++s_length] = data; // insert data into stack
    }
}
