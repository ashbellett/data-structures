template <class T>
class Node {
    private:
        T n_data;        // node data
        Node<T> *n_next; // pointer to next node
    public:
        Node();  // constructor
        ~Node(); // destructor
        T get(void);
        Node<T> *next(void);
        void set(T data);
        void link(Node *node);
};

template class Node<int>;
template class Node<float>;
template class Node<char>;
