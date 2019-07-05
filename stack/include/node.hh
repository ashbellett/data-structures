template <class T>
class Node {
    private:
        T n_data;        // node data
        Node<T> *n_next; // pointer to next node
    public:
        Node();  // constructor
        ~Node(); // destructor
        T get(void);
        void link(Node *node);
        Node<T> *next(void);
        void set(T data);
};

template class Node<int>;
template class Node<float>;
template class Node<char>;
