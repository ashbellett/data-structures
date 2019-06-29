#include <iostream>
using namespace std;

class Node {
    public:
        int data;   // data element
        Node *next; // pointer to next node
        Node();     // constructor
};

void insert(Node **list, int data);
void remove(Node **list, int data);
Node *search(Node *list, int data);
void clear(Node *list);
void print(Node *list);
int length(Node *list, int count);
